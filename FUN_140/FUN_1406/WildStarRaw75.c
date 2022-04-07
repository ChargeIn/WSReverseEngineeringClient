//
// Created by flop on 04.04.22.
//
#include "../../include.h"

undefined8 FUN_140654380(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    int iVar3;
    longlong lVar4;

    lVar4 = FUN_1406622c0();
    if (lVar4 != 0) {
        lVar4 = FUN_1403d90d0(DAT_140c65898);
        if (lVar4 != 0) {
            iVar3 = FUN_140469530(lVar4);
            puVar1 = *(uint **)(param_1 + 0x10);
            puVar1[2] = 1;
            *puVar1 = (uint)(iVar3 != 0);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    *puVar2 = 0;
    puVar2[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140654400(longlong param_1)

{
    undefined4 *puVar1;
    longlong lVar2;
    longlong lVar3;
    undefined *puVar4;
    undefined *puVar5;
    undefined local_28 [8];
    longlong local_20;

    puVar1 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar1 != (undefined4 *)0x0) {
        lVar2 = FUN_1403d90d0(DAT_140c65898,*puVar1);
        if (lVar2 != 0) {
            lVar3 = FUN_140561c30(DAT_140c65b70,*(undefined4 *)(lVar2 + 0x1600));
            if (lVar3 == 0) {
                if (*(longlong *)(DAT_140c65898 + 0x78) != lVar2) {
                    LAB_140654475:
                    FUN_140058710(param_1,&DAT_1409d143e,0);
                    return 1;
                }
                lVar2 = FUN_14039df50();
                if (lVar2 == 0) goto LAB_140654475;
                lVar3 = FUN_1404695e0(lVar2);
                if (lVar3 == 0) goto LAB_140654475;
            }
            lVar2 = *(longlong *)(lVar3 + 0x198);
            puVar4 = (undefined *)FUN_14018b280(8);
            if (puVar4 != (undefined *)0x0) {
                *puVar4 = 0;
            }
            puVar5 = puVar4;
            if (lVar2 != 0) {
                lVar2 = FUN_14018f0e0(local_28,lVar2);
                puVar5 = *(undefined **)(lVar2 + 8);
                *(undefined **)(lVar2 + 8) = puVar4;
                *(undefined **)(lVar2 + 0x10) = puVar4;
                *(undefined **)(lVar2 + 0x18) = puVar4 + 8;
                if (local_20 != 0) {
                    FUN_14018b900(local_20,0);
                }
            }
            if (puVar5 != (undefined *)0x0) {
                lVar2 = -1;
                do {
                    lVar2 = lVar2 + 1;
                } while (puVar5[lVar2] != '\0');
                FUN_140058710(param_1,puVar5);
                FUN_14018b900(puVar5,0);
                return 1;
            }
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140654650(longlong param_1)

{
    undefined8 *puVar1;
    double *pdVar2;
    undefined4 *puVar3;
    longlong lVar4;
    longlong lVar5;
    int iVar6;

    puVar3 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar3 != (undefined4 *)0x0) {
        lVar4 = FUN_1403d90d0(DAT_140c65898,*puVar3);
        if (lVar4 != 0) {
            lVar5 = FUN_140561c30(DAT_140c65b70,*(undefined4 *)(lVar4 + 0x1600));
            if (lVar5 == 0) {
                if (*(longlong *)(DAT_140c65898 + 0x78) == lVar4) {
                    lVar4 = FUN_14039df50();
                    if (lVar4 != 0) {
                        lVar5 = FUN_1404695e0();
                        if (lVar5 != 0) goto LAB_1406546ec;
                    }
                }
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                *puVar1 = 0;
                *(undefined4 *)(puVar1 + 1) = 3;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
            LAB_1406546ec:
            pdVar2 = *(double **)(param_1 + 0x10);
            iVar6 = DAT_140c636a8 - *(int *)(lVar5 + 0x194);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)iVar6;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    return 0;
}



undefined8 FUN_140654740(longlong param_1)

{
    undefined8 *puVar1;
    undefined4 *puVar2;
    longlong lVar3;
    longlong lVar4;
    double *pdVar5;
    float fVar6;

    puVar2 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar2 != (undefined4 *)0x0) {
        lVar3 = FUN_1403d90d0(DAT_140c65898,*puVar2);
        if (lVar3 != 0) {
            lVar4 = FUN_140561c30(DAT_140c65b70,*(undefined4 *)(lVar3 + 0x1600));
            if (lVar4 == 0) {
                if (*(longlong *)(DAT_140c65898 + 0x78) == lVar3) {
                    lVar3 = FUN_14039df50();
                    if (lVar3 != 0) {
                        lVar3 = FUN_1404695e0(lVar3);
                        if (lVar3 != 0) goto LAB_1406547dc;
                    }
                }
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                *puVar1 = 0;
                *(undefined4 *)(puVar1 + 1) = 3;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
            LAB_1406547dc:
            pdVar5 = *(double **)(param_1 + 0x10);
            fVar6 = (float)FUN_14053da10();
            *(undefined4 *)(pdVar5 + 1) = 3;
            *pdVar5 = (double)(int)fVar6;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    return 0;
}



undefined8 FUN_140654830(longlong param_1)

{
    undefined4 uVar1;
    double *pdVar2;
    int iVar3;
    undefined4 *puVar4;
    longlong lVar5;
    longlong lVar6;

    iVar3 = 3;
    puVar4 = (undefined4 *)FUN_1406622c0(param_1,1);
    lVar6 = 0;
    lVar5 = lVar6;
    if (puVar4 != (undefined4 *)0x0) {
        lVar5 = FUN_1403d90d0(DAT_140c65898,*puVar4);
    }
    puVar4 = (undefined4 *)FUN_1406622c0(param_1,2);
    if (puVar4 != (undefined4 *)0x0) {
        lVar6 = FUN_1403d90d0(DAT_140c65898,*puVar4);
    }
    if ((lVar5 != 0) && (lVar6 != 0)) {
        if (lVar6 == *(longlong *)(DAT_140c65898 + 0x78)) {
            uVar1 = *(undefined4 *)(lVar5 + 8);
            lVar5 = lVar6;
        }
        else {
            uVar1 = *(undefined4 *)(lVar6 + 8);
        }
        iVar3 = FUN_14045a950(lVar5,uVar1);
    }
    pdVar2 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)iVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_140654900(longlong param_1)

{
    int iVar1;
    int iVar2;
    longlong lVar3;
    uint uVar4;
    uint uVar5;
    int iVar6;
    uint uVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    undefined4 uVar11;
    undefined4 *puVar12;
    longlong lVar13;
    undefined extraout_XMM0_Ba;
    undefined extraout_XMM0_Bb;
    undefined uVar14;
    undefined extraout_XMM0_Bc;
    undefined uVar15;
    undefined extraout_XMM0_Bd;
    undefined uVar16;
    undefined uVar17;
    undefined extraout_XMM0_Be;
    undefined uVar18;
    undefined extraout_XMM0_Bf;
    undefined uVar19;
    undefined extraout_XMM0_Bg;
    undefined uVar20;
    undefined extraout_XMM0_Bh;
    undefined uVar21;
    undefined uVar22;
    undefined uVar23;
    undefined uVar24;
    undefined uVar25;
    undefined uVar26;
    undefined uVar27;
    undefined uVar28;
    undefined uVar29;
    undefined in_XMM1_Ba;
    undefined in_XMM1_Bb;
    undefined in_XMM1_Bc;
    undefined in_XMM1_Bd;
    undefined local_18 [16];

    puVar12 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (((puVar12 == (undefined4 *)0x0) ||
         (lVar13 = FUN_1403d90d0(DAT_140c65898,*puVar12), lVar13 == 0)) ||
        (lVar3 = *(longlong *)(DAT_140c65898 + 0x78), lVar3 == 0)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    if ((~(*(uint *)(lVar13 + 0x28) >> 2) & 1) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar1 = *(int *)(lVar13 + 0x3c);
    if (iVar1 == 0) {
        iVar1 = *(int *)(lVar13 + 0x38);
    }
    iVar2 = *(int *)(lVar3 + 0x3c);
    if (iVar2 == 0) {
        iVar2 = *(int *)(lVar3 + 0x38);
    }
    uVar7 = CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ^
            CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba)));
    uVar4 = CONCAT13(extraout_XMM0_Bd,
                     CONCAT12(extraout_XMM0_Bc,CONCAT11(extraout_XMM0_Bb,extraout_XMM0_Ba))) ^
            CONCAT13(extraout_XMM0_Bd,
                     CONCAT12(extraout_XMM0_Bc,CONCAT11(extraout_XMM0_Bb,extraout_XMM0_Ba)));
    uVar14 = (undefined)(uVar4 >> 8);
    uVar15 = (undefined)(uVar4 >> 0x10);
    uVar16 = (undefined)(uVar4 >> 0x18);
    uVar5 = CONCAT13(extraout_XMM0_Bh,
                     CONCAT12(extraout_XMM0_Bg,CONCAT11(extraout_XMM0_Bf,extraout_XMM0_Be))) ^
            CONCAT13(extraout_XMM0_Bh,
                     CONCAT12(extraout_XMM0_Bg,CONCAT11(extraout_XMM0_Bf,extraout_XMM0_Be)));
    iVar6 = CONCAT13(uVar14,CONCAT12((char)uVar4,CONCAT11((char)uVar4,(char)uVar7)));
    fVar8 = (float)(uVar4 & 0xff000000 |
                    (uint)CONCAT12(uVar15,(short)(CONCAT15(uVar14,CONCAT14((char)(uVar7 >> 8),iVar6))
                            >> 0x20))) * 0.003921569;
    fVar9 = (float)iVar6 * 0.003921569;
    fVar10 = (float)(uVar5 & 0xff000000 |
                     (uint)CONCAT12((char)(uVar5 >> 0x10),CONCAT11(uVar16,(char)(uVar7 >> 0x18)))) *
             0.003921569;
    local_18 = CONCAT115((char)((uint)fVar10 >> 0x18),
                         CONCAT114((char)((uint)fVar10 >> 0x10),
                                   CONCAT113((char)((uint)fVar10 >> 8),
                                             CONCAT112(SUB41(fVar10,0),
                                                       CONCAT111((char)((uint)fVar9 >> 0x18),
                                                                 CONCAT110((char)((uint)fVar9 >> 0x10)
                                                                         ,CONCAT19((char)((uint)
                                                                                           fVar9 >> 8),
                                                                                   CONCAT18(SUB41(fVar9,0),
                                                                                            CONCAT17((char)((uint)fVar8 >> 0x18),
                                                                                                     CONCAT16((char)((uint)fVar8 >>
                                                                                                                                 0x10),
                                                                                                              CONCAT15((char)((uint)
                                                                                                                               fVar8 >> 8),
                                                                                                                       CONCAT14(SUB41(fVar8,0),
                                                                                                                                (float)CONCAT13((char)(uVar5 >> 8),
                                                                                                                                                CONCAT12((char)uVar5,
                                                                                                                                                         (short)(CONCAT12
                                                                                                                                                                 (uVar15,CONCAT11((char)(uVar7 >> 0x10),uVar16)) >>
                                                                                                                                                                                                                 8))) * 0.003921569))))))))))));
    uVar11 = (**(code **)(*DAT_140c65a10 + 0x10))(DAT_140c65a10,iVar2,iVar1);
    switch(uVar11) {
        case 1:
            uVar14 = DAT_140c777f0;
            uVar15 = uRam0000000140c777f1;
            uVar16 = uRam0000000140c777f2;
            uVar17 = uRam0000000140c777f3;
            uVar18 = uRam0000000140c777f4;
            uVar19 = uRam0000000140c777f5;
            uVar20 = uRam0000000140c777f6;
            uVar21 = uRam0000000140c777f7;
            uVar26 = uRam0000000140c777fc;
            uVar27 = uRam0000000140c777fd;
            uVar28 = uRam0000000140c777fe;
            uVar29 = uRam0000000140c777ff;
            uVar22 = uRam0000000140c777f8;
            uVar23 = uRam0000000140c777f9;
            uVar24 = uRam0000000140c777fa;
            uVar25 = uRam0000000140c777fb;
            break;
        case 2:
            uVar14 = DAT_140c77820;
            uVar15 = uRam0000000140c77821;
            uVar16 = uRam0000000140c77822;
            uVar17 = uRam0000000140c77823;
            uVar18 = uRam0000000140c77824;
            uVar19 = uRam0000000140c77825;
            uVar20 = uRam0000000140c77826;
            uVar21 = uRam0000000140c77827;
            uVar26 = uRam0000000140c7782c;
            uVar27 = uRam0000000140c7782d;
            uVar28 = uRam0000000140c7782e;
            uVar29 = uRam0000000140c7782f;
            uVar22 = uRam0000000140c77828;
            uVar23 = uRam0000000140c77829;
            uVar24 = uRam0000000140c7782a;
            uVar25 = uRam0000000140c7782b;
            break;
        case 3:
            uVar14 = 0xa6;
            uVar15 = 0x9b;
            uVar16 = 0x44;
            uVar17 = 0x3b;
            uVar18 = 0x48;
            uVar19 = 0xe1;
            uVar20 = 0x7a;
            uVar21 = 0x3f;
            uVar22 = 0;
            uVar23 = 0;
            uVar24 = 0;
            uVar25 = 0;
            uVar26 = 0;
            uVar27 = 0;
            uVar28 = 0x80;
            uVar29 = 0x3f;
            break;
        case 4:
            uVar14 = DAT_140c77830;
            uVar15 = uRam0000000140c77831;
            uVar16 = uRam0000000140c77832;
            uVar17 = uRam0000000140c77833;
            uVar18 = uRam0000000140c77834;
            uVar19 = uRam0000000140c77835;
            uVar20 = uRam0000000140c77836;
            uVar21 = uRam0000000140c77837;
            uVar26 = uRam0000000140c7783c;
            uVar27 = uRam0000000140c7783d;
            uVar28 = uRam0000000140c7783e;
            uVar29 = uRam0000000140c7783f;
            uVar22 = uRam0000000140c77838;
            uVar23 = uRam0000000140c77839;
            uVar24 = uRam0000000140c7783a;
            uVar25 = uRam0000000140c7783b;
            break;
        case 5:
            uVar14 = 0;
            uVar15 = 0;
            uVar16 = 0x80;
            uVar17 = 0x3f;
            uVar18 = 0;
            uVar19 = 0;
            uVar20 = 0x80;
            uVar21 = 0x3f;
            uVar22 = 0;
            uVar23 = 0;
            uVar24 = 0x80;
            uVar25 = 0x3f;
            uVar26 = 0;
            uVar27 = 0;
            uVar28 = 0x80;
            uVar29 = 0x3f;
            break;
        case 6:
            uVar14 = 0;
            uVar15 = 0;
            uVar16 = 0x80;
            uVar17 = 0x3f;
            uVar18 = 0;
            uVar19 = 0;
            uVar20 = 0x80;
            uVar21 = 0x3f;
            uVar22 = 0;
            uVar23 = 0;
            uVar24 = 0;
            uVar25 = 0;
            uVar26 = 0;
            uVar27 = 0;
            uVar28 = 0x80;
            uVar29 = 0x3f;
            break;
        case 7:
            uVar14 = 0;
            uVar15 = 0;
            uVar16 = 0x80;
            uVar17 = 0x3f;
            uVar18 = 0;
            uVar19 = 0;
            uVar20 = 0;
            uVar21 = 0x3f;
            uVar22 = 0;
            uVar23 = 0;
            uVar24 = 0;
            uVar25 = 0;
            uVar26 = 0;
            uVar27 = 0;
            uVar28 = 0x80;
            uVar29 = 0x3f;
            break;
        case 8:
            uVar14 = DAT_140c77810;
            uVar15 = uRam0000000140c77811;
            uVar16 = uRam0000000140c77812;
            uVar17 = uRam0000000140c77813;
            uVar18 = uRam0000000140c77814;
            uVar19 = uRam0000000140c77815;
            uVar20 = uRam0000000140c77816;
            uVar21 = uRam0000000140c77817;
            uVar26 = uRam0000000140c7781c;
            uVar27 = uRam0000000140c7781d;
            uVar28 = uRam0000000140c7781e;
            uVar29 = uRam0000000140c7781f;
            uVar22 = uRam0000000140c77818;
            uVar23 = uRam0000000140c77819;
            uVar24 = uRam0000000140c7781a;
            uVar25 = uRam0000000140c7781b;
            break;
        case 9:
            uVar14 = 0;
            uVar15 = 0;
            uVar16 = 0x80;
            uVar17 = 0x3f;
            uVar18 = 0;
            uVar19 = 0;
            uVar20 = 0;
            uVar21 = 0;
            uVar26 = 0;
            uVar27 = 0;
            uVar28 = 0x80;
            uVar29 = 0x3f;
            uVar22 = 0;
            uVar23 = 0;
            uVar24 = 0x80;
            uVar25 = 0x3f;
            break;
        default:
            goto switchD_1406549d7_caseD_9;
    }
    local_18 = CONCAT115(uVar29,CONCAT114(uVar28,CONCAT113(uVar27,CONCAT112(uVar26,CONCAT111(uVar25,
                                                                                             CONCAT110(uVar24,CONCAT19(uVar23,CONCAT18(uVar22,
                                                                                                                                       CONCAT17(uVar21,CONCAT16(uVar20,CONCAT15(uVar19,
                                                                                                                                                                                CONCAT14(uVar18,CONCAT13(uVar17,CONCAT12(uVar16,
                                                                                                                                                                                                                         CONCAT11(uVar15,uVar14)))))))))))))));
    switchD_1406549d7_caseD_9:
    FUN_1401181f0(param_1,local_18);
    return 1;
}



undefined8 FUN_140654a90(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    int iVar3;
    undefined4 *puVar4;
    longlong lVar5;
    longlong lVar6;

    puVar4 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar4 != (undefined4 *)0x0) {
        lVar5 = FUN_1403d90d0(DAT_140c65898,*puVar4);
        if (lVar5 != 0) {
            lVar6 = FUN_1406622c0(param_1);
            if (lVar6 != 0) {
                lVar6 = FUN_1403d90d0(DAT_140c65898);
                if (lVar6 != 0) {
                    iVar3 = *(int *)(lVar6 + 0x3c);
                    if (iVar3 == 0) {
                        iVar3 = *(int *)(lVar6 + 0x38);
                    }
                    iVar1 = *(int *)(lVar5 + 0x3c);
                    if (iVar1 == 0) {
                        iVar1 = *(int *)(lVar5 + 0x38);
                    }
                    iVar3 = (**(code **)(*DAT_140c65a10 + 0x18))(DAT_140c65a10,iVar1,iVar3);
                    pdVar2 = *(double **)(param_1 + 0x10);
                    *(undefined4 *)(pdVar2 + 1) = 3;
                    *pdVar2 = (double)iVar3;
                    goto LAB_140654b30;
                }
            }
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    LAB_140654b30:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140654b50(longlong param_1)

{
    double *pdVar1;
    int iVar2;
    undefined4 *puVar3;
    longlong lVar4;
    longlong lVar5;

    puVar3 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar3 != (undefined4 *)0x0) {
        lVar4 = FUN_1403d90d0(DAT_140c65898,*puVar3);
        if (lVar4 != 0) {
            puVar3 = (undefined4 *)FUN_1406622c0(param_1,2);
            if (puVar3 != (undefined4 *)0x0) {
                lVar5 = FUN_1403d90d0(DAT_140c65898,*puVar3);
                if (lVar5 != 0) {
                    iVar2 = (**(code **)(*DAT_140c65a10 + 0x20))
                            (DAT_140c65a10,*(undefined4 *)(lVar4 + 8),*(undefined4 *)(lVar5 + 8),1);
                    pdVar1 = *(double **)(param_1 + 0x10);
                    *(undefined4 *)(pdVar1 + 1) = 3;
                    *pdVar1 = (double)iVar2;
                    goto LAB_140654be6;
                }
            }
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    LAB_140654be6:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140654c00(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    longlong lVar3;
    longlong lVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    uint uVar7;
    uint uVar8;
    float fVar9;
    float fVar10;
    float fVar11;

    puVar2 = (undefined4 *)FUN_1406622c0(param_1,1);
    if ((((puVar2 == (undefined4 *)0x0) || (lVar3 = FUN_1403d90d0(DAT_140c65898,*puVar2), lVar3 == 0))
         || (DAT_140c65898 == 0)) || (*(longlong *)(DAT_140c65898 + 0x78) == 0)) {
        LAB_140654f1d:
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        goto LAB_140654f26;
    }
    lVar4 = FUN_14047dca0(lVar3);
    if (lVar4 != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        goto LAB_140654f26;
    }
    (**(code **)(*(longlong *)(DAT_140c65898 + 0x48) + 8))();
    lVar4 = FUN_14024acc0();
    if (((lVar4 != 0) && ((*(int *)(lVar4 + 0x14) == 3 || (*(int *)(lVar4 + 0x14) == 8)))) ||
        (*(int *)(lVar4 + 0x14) == 9)) goto LAB_140654f1d;
    uVar6 = 0;
    uVar8 = 0;
    if ((DAT_140dc4ac8 & 1) == 0) {
        DAT_140dc4ac8 = DAT_140dc4ac8 | 1;
        _DAT_140dc4ad4 = 0;
    }
    if ((DAT_140dc4ac8 & 2) == 0) {
        DAT_140dc4ac8 = DAT_140dc4ac8 | 2;
        _DAT_140dc4adc = 0;
    }
    if ((DAT_140dc4ac8 & 4) == 0) {
        DAT_140dc4ac8 = DAT_140dc4ac8 | 4;
        _DAT_140dc4ae4 = 0;
    }
    fVar9 = (float)FUN_1403a7c50();
    lVar4 = *(longlong *)(DAT_140c65898 + 0x78);
    if (lVar4 == 0) {
        uVar5 = 0;
    }
    else {
        uVar5 = (ulonglong)*(uint *)(lVar4 + 0x3c);
        if (*(uint *)(lVar4 + 0x3c) == 0) {
            uVar5 = (ulonglong)*(uint *)(lVar4 + 0x38);
        }
    }
    if (fVar9 < (float)uVar5) {
        fVar10 = (float)FUN_140662190();
        lVar4 = *(longlong *)(DAT_140c65898 + 0x78);
        fVar9 = fVar9 * (1.0 - fVar10);
        uVar7 = uVar8;
        if ((lVar4 != 0) && (uVar7 = *(uint *)(lVar4 + 0x3c), *(uint *)(lVar4 + 0x3c) == 0)) {
            uVar7 = *(uint *)(lVar4 + 0x38);
        }
        fVar10 = (float)FUN_140662190();
        fVar9 = fVar9 + fVar10 * (float)(ulonglong)uVar7;
    }
    fVar10 = 0.0;
    if (*(longlong *)(DAT_140c65898 + 0x6c50) != 0) {
        uVar5 = uVar6;
        if (*(longlong *)(DAT_140c65898 + 0x6c50) != 0) {
            uVar5 = *(ulonglong *)(*(longlong *)(DAT_140c65898 + 0x6c50) + 0x60);
        }
        if (_DAT_140dc4adc == 0) {
            _DAT_140dc4adc = 1;
            lVar4 = FUN_140200220(0x525);
            DAT_140dc4ad8 = fVar10;
            if (lVar4 != 0) {
                DAT_140dc4ad8 = *(float *)(lVar4 + 0x20);
            }
        }
        fVar11 = (float)uVar5;
        if ((longlong)uVar5 < 0) {
            fVar11 = fVar11 + 1.844674e+19;
        }
        fVar9 = fVar9 + fVar11 * DAT_140dc4ad8;
    }
    if (*(longlong *)(lVar3 + 0x100) == 0) {
        if (*(longlong *)(lVar3 + 0x18) != 0) {
            uVar8 = (uint)*(byte *)(*(longlong *)(lVar3 + 0x18) + 0x159);
        }
    }
    else {
        uVar8 = *(uint *)(*(longlong *)(lVar3 + 0x100) + 0x14);
    }
    if (_DAT_140dc4ae4 == 0) {
        _DAT_140dc4ae4 = 1;
        lVar4 = FUN_140200220(0x525);
        DAT_140dc4ae0 = fVar10;
        if (lVar4 != 0) {
            DAT_140dc4ae0 = *(float *)(lVar4 + 0x24);
        }
    }
    fVar10 = DAT_140dc4ae0;
    fVar11 = (float)FUN_14045b550(lVar3);
    fVar11 = fVar11 + (float)(ulonglong)uVar8 * fVar10;
    if ((DAT_140dc4ac8 & 8) == 0) {
        DAT_140dc4ac8 = DAT_140dc4ac8 | 8;
        LAB_140654eb2:
        _DAT_140dc4aec = 1;
        lVar3 = FUN_140200220(0x525);
        if (lVar3 == 0) {
            DAT_140dc4ae8 = 0;
        }
        else {
            DAT_140dc4ae8 = *(uint *)(lVar3 + 4);
            uVar6 = (ulonglong)DAT_140dc4ae8;
        }
    }
    else {
        if (_DAT_140dc4aec == 0) goto LAB_140654eb2;
        uVar6 = (ulonglong)DAT_140dc4ae8;
    }
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)((float)uVar6 + fVar9 <= fVar11);
    LAB_140654f26:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140654ff0(longlong param_1)

{
    undefined8 *puVar1;
    undefined4 uVar2;
    longlong lVar3;

    lVar3 = FUN_1406622c0();
    if ((lVar3 != 0) && (lVar3 = FUN_1403d90d0(DAT_140c65898), lVar3 != 0)) {
        uVar2 = FUN_14045ba60(lVar3);
        switch(uVar2) {
            case 0:
            case 1:
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                *puVar1 = 0x3ff0000000000000;
                *(undefined4 *)(puVar1 + 1) = 3;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            case 2:
            case 3:
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                *puVar1 = 0x4000000000000000;
                *(undefined4 *)(puVar1 + 1) = 3;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            case 4:
            case 5:
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                *puVar1 = 0x4008000000000000;
                *(undefined4 *)(puVar1 + 1) = 3;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined4 FUN_140655100(longlong param_1)

{
    undefined4 uVar1;
    ulonglong uVar2;
    double *pdVar3;
    undefined8 *puVar4;
    ulonglong uVar5;
    int iVar6;
    undefined4 uVar7;
    uint uVar8;
    int iVar9;
    undefined8 *puVar10;
    longlong lVar11;
    undefined8 uVar12;
    longlong lVar13;
    undefined8 *puVar14;
    uint *puVar15;
    ulonglong *puVar16;
    int *piVar17;
    wchar_t *pwVar18;
    longlong *plVar19;
    longlong **pplVar20;
    uint uVar21;
    longlong lVar22;
    ulonglong uVar23;
    undefined4 uVar24;
    int local_res10 [2];
    undefined8 local_res18;
    ulonglong local_res20;
    undefined **local_d8;
    undefined4 local_d0;
    undefined4 uStack204;
    longlong local_c8;
    undefined4 local_c0;
    undefined **local_b8;
    longlong local_b0;
    ulonglong local_a8;
    longlong local_a0;
    longlong local_98;
    int local_90;
    uint local_8c;
    longlong *local_88;
    undefined **local_80;
    undefined4 local_78;
    longlong local_70;
    undefined4 local_68;
    undefined8 *local_60;
    undefined local_58 [8];
    longlong local_50;

    puVar10 = (undefined8 *)FUN_14018b280(0x18);
    uVar24 = 1;
    *puVar10 = puVar10;
    puVar10[1] = puVar10;
    local_60 = puVar10;
    lVar11 = FUN_1406622c0(param_1);
    if (((lVar11 == 0) || (lVar11 = FUN_1403d90d0(DAT_140c65898), local_98 = lVar11, lVar11 == 0)) ||
        (*(longlong *)(lVar11 + 0x18) == 0)) {
        uVar24 = 0;
        goto LAB_1406563df;
    }
    local_b8 = &PTR_FUN_140b66440;
    local_80 = &PTR_FUN_140b569f0;
    local_res10[0] = 1;
    local_68 = 1;
    local_b0 = lVar11;
    local_70 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    uVar12 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar10 + 1) = 5;
    *puVar10 = uVar12;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    local_78 = FUN_1400578c0(param_1);
    local_a8 = *DAT_140c65b80;
    if (local_a8 != 0) {
        local_90 = *(int *)(local_a8 + 0x10);
        local_res18 = (longlong *)((ulonglong)local_res18 & 0xffffffff00000000);
        uVar21 = 0;
        if (0 < local_90) {
            do {
                lVar13 = FUN_1405fc730(local_a8,uVar21);
                if ((lVar13 != 0) &&
                    ((((*(longlong *)(DAT_140c65898 + 0x6c50) == 0 ||
                        ((*(uint *)(*(longlong *)(DAT_140c65898 + 0x6c50) + 8) >> 1 & 1) == 0)) ||
                       ((*(uint *)(*(longlong *)(lVar13 + 8) + 0xc) & 0x40000) != 0)) &&
                      ((iVar6 = FUN_140552f50(lVar13), iVar6 != 0 &&
                                                       (local_8c = *(uint *)(lVar13 + 0x10), local_8c != 0)))))) {
                    plVar19 = (longlong *)(lVar13 + 0x18);
                    uVar21 = 0;
                    do {
                        local_88 = plVar19;
                        iVar6 = FUN_1405510d0(lVar13);
                        if (((iVar6 == 0) && (iVar6 = FUN_140553790(lVar13), iVar6 != 0)) &&
                            (iVar6 = FUN_140550f70(lVar13,uVar21,1), iVar6 != 0)) {
                            local_res20 = local_res20 & 0xffffffff00000000;
                            iVar6 = FUN_140550c50(lVar13,lVar11,uVar21,&local_res20);
                            if (iVar6 != 0) {
                                local_d8 = &PTR_FUN_140b569f0;
                                local_c0 = 1;
                                local_c8 = param_1;
                                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                                    FUN_14005e2c0(param_1);
                                }
                                puVar10 = *(undefined8 **)(param_1 + 0x10);
                                uVar12 = FUN_14005c1b0(param_1,0,0);
                                *(undefined4 *)(puVar10 + 1) = 5;
                                *puVar10 = uVar12;
                                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                                uVar7 = FUN_1400578c0(param_1);
                                local_d0 = uVar7;
                                puVar14 = (undefined8 *)
                                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar7)
                                        ;
                                puVar10 = *(undefined8 **)(param_1 + 0x10);
                                *puVar10 = *puVar14;
                                *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar14 + 1);
                                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                                FUN_1400f0870(param_1,puVar10,L"strType",L"Quest");
                                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                                puVar10 = *(undefined8 **)(param_1 + 0x10);
                                puVar14 = (undefined8 *)
                                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar7)
                                        ;
                                *puVar10 = *puVar14;
                                *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar14 + 1);
                                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                                FUN_1400f06f0(param_1);
                                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                                puVar10 = *(undefined8 **)(param_1 + 0x10);
                                puVar14 = (undefined8 *)
                                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar7)
                                        ;
                                *puVar10 = *puVar14;
                                *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar14 + 1);
                                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                                FUN_1400f06f0(param_1);
                                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                                uVar12 = FUN_14034bdd0();
                                puVar14 = (undefined8 *)
                                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar7)
                                        ;
                                puVar10 = *(undefined8 **)(param_1 + 0x10);
                                *puVar10 = *puVar14;
                                *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar14 + 1);
                                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                                FUN_1400f0870(param_1,puVar10,L"strTitle",uVar12);
                                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                                puVar10 = *(undefined8 **)(param_1 + 0x10);
                                uVar8 = FUN_140553750(lVar13,uVar21);
                                local_res20 = local_res20 & 0xffffffff00000000 | (ulonglong)uVar8;
                                puVar14 = (undefined8 *)
                                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar7)
                                        ;
                                *puVar10 = *puVar14;
                                *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar14 + 1);
                                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                                lVar11 = FUN_14018f0e0(local_58,L"bShowCount");
                                if (*(longlong *)(lVar11 + 8) == 0) {
                                    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                                }
                                else {
                                    lVar22 = -1;
                                    do {
                                        lVar22 = lVar22 + 1;
                                    } while (*(char *)(*(longlong *)(lVar11 + 8) + lVar22) != '\0');
                                    FUN_140058710(param_1);
                                }
                                if (local_50 != 0) {
                                    FUN_14018b900(local_50,0);
                                }
                                puVar15 = *(uint **)(param_1 + 0x10);
                                puVar15[2] = 1;
                                *puVar15 = (uint)((int)local_res20 != 0);
                                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                                uVar12 = FUN_1400580e0(param_1,0xfffffffd);
                                FUN_14005ea50(param_1,uVar12,*(longlong *)(param_1 + 0x10) + -0x20,
                                              *(longlong *)(param_1 + 0x10) + -0x10);
                                *(longlong *)(param_1 + 0x10) =
                                        (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
                                iVar6 = FUN_140553750(lVar13,uVar21);
                                if (iVar6 == 0) {
                                    uVar8 = FUN_140551630(lVar13,uVar21);
                                    uVar23 = (ulonglong)uVar8;
                                    puVar14 = (undefined8 *)
                                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),
                                                          uVar7);
                                    puVar10 = *(undefined8 **)(param_1 + 0x10);
                                    *puVar10 = *puVar14;
                                    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar14 + 1);
                                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                                    FUN_1400f06f0(param_1,puVar10,L"nCompleted",uVar23 & 0xffffffff);
                                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                                    puVar10 = *(undefined8 **)(param_1 + 0x10);
                                    puVar14 = (undefined8 *)
                                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0));
                                    *puVar10 = *puVar14;
                                    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar14 + 1);
                                }
                                else {
                                    uVar8 = FUN_1405515c0();
                                    uVar23 = (ulonglong)uVar8;
                                    puVar14 = (undefined8 *)
                                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),
                                                          uVar7);
                                    puVar10 = *(undefined8 **)(param_1 + 0x10);
                                    *puVar10 = *puVar14;
                                    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar14 + 1);
                                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                                    FUN_1400f06f0(param_1,puVar10,L"nCompleted",uVar23 & 0xffffffff);
                                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                                    puVar10 = *(undefined8 **)(param_1 + 0x10);
                                    FUN_140551840(lVar13);
                                    puVar14 = (undefined8 *)
                                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0));
                                    *puVar10 = *puVar14;
                                    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar14 + 1);
                                }
                                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                                FUN_1400f06f0(param_1);
                                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                                puVar15 = (uint *)FUN_1403ba420();
                                if (puVar15 != (uint *)0x0) {
                                    local_res20 = local_res20 & 0xffffffff00000000 | (ulonglong)*puVar15;
                                    iVar6 = FUN_1403d3470(param_1);
                                    if (iVar6 != 0) {
                                        FUN_1400fb540(&local_d8);
                                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                                    }
                                }
                                plVar19 = local_88;
                                if (((uVar21 < *(uint *)(lVar13 + 0x10) || uVar21 == *(uint *)(lVar13 + 0x10)) &&
                                     (*local_88 != 0)) && (puVar15 = (uint *)FUN_1403ba420(), puVar15 != (uint *)0x0)
                                        ) {
                                    local_res20 = local_res20 & 0xffffffff00000000 | (ulonglong)*puVar15;
                                    iVar6 = FUN_1403d3470(param_1);
                                    if (iVar6 != 0) {
                                        FUN_1400fb540(&local_d8);
                                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                                    }
                                }
                                FUN_1400fb1d0(&local_80);
                                FUN_1400579e0(param_1);
                                lVar11 = local_98;
                            }
                        }
                        plVar19 = plVar19 + 1;
                        uVar21 = uVar21 + 1;
                        local_88 = plVar19;
                    } while (uVar21 < local_8c);
                }
                uVar21 = (int)local_res18 + 1;
                local_res18 = (longlong *)((ulonglong)local_res18 & 0xffffffff00000000 | (ulonglong)uVar21);
            } while ((int)uVar21 < local_90);
        }
    }
    if ((*(longlong *)(DAT_140c65898 + 0x6c50) == 0) ||
        ((*(uint *)(*(longlong *)(DAT_140c65898 + 0x6c50) + 8) >> 1 & 1) == 0)) {
        FUN_14048b2a0(&local_d8);
        if ((local_c8 != 0) &&
            (lVar11 = *(longlong *)(CONCAT44(uStack204,local_d0) + 0x10), iVar6 = 1,
                    lVar11 != CONCAT44(uStack204,local_d0))) {
            do {
                puVar15 = *(uint **)(lVar11 + 0x28);
                if (puVar15 != (uint *)0x0) {
                    uVar23 = *(ulonglong *)(DAT_140c65948 + 0x10);
                    uVar5 = uVar23;
                    uVar2 = *(ulonglong *)(uVar23 + 8);
                    while (uVar2 != 0) {
                        if (*(uint *)(uVar2 + 0x20) < *puVar15) {
                            uVar2 = *(ulonglong *)(uVar2 + 0x18);
                        }
                        else {
                            uVar5 = uVar2;
                            uVar2 = *(ulonglong *)(uVar2 + 0x10);
                        }
                    }
                    if ((uVar5 == uVar23) || (*puVar15 < *(uint *)(uVar5 + 0x20))) {
                        local_a8 = uVar23;
                        puVar16 = &local_a8;
                    }
                    else {
                        puVar16 = &local_res20;
                        local_res20 = uVar5;
                    }
                    if ((*puVar16 != *(ulonglong *)(DAT_140c65948 + 0x10)) &&
                        (lVar13 = *(longlong *)(*puVar16 + 0x28), lVar13 != 0)) {
                        if (puVar15[1] == 0) {
                            iVar9 = 0;
                            if (*(int *)(lVar13 + 8) != 0) {
                                LAB_14065581c:
                                (*(code *)local_b8[1])(&local_b8);
                                iVar9 = FUN_1403b4a20();
                            }
                        }
                        else {
                            if (puVar15[1] != 7) {
                                if (*(int *)(lVar13 + 0x54) != 0) goto LAB_14065581c;
                                goto LAB_140655b8f;
                            }
                            if (*(int *)(lVar13 + 8) != 0) {
                                (*(code *)local_b8[1])(&local_b8);
                                iVar9 = FUN_1403b4a20();
                                if (iVar9 != 0) goto LAB_140655b8f;
                            }
                            iVar9 = FUN_14048d610();
                        }
                        if (iVar9 == 0) {
                            pdVar3 = *(double **)(param_1 + 0x10);
                            local_res10[0] = iVar6 + 1;
                            *(undefined4 *)(pdVar3 + 1) = 3;
                            *pdVar3 = (double)iVar6;
                            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                                FUN_14005e2c0(param_1);
                            }
                            puVar10 = *(undefined8 **)(param_1 + 0x10);
                            uVar12 = FUN_14005c1b0(param_1,0,0);
                            *(undefined4 *)(puVar10 + 1) = 5;
                            *puVar10 = uVar12;
                            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                            uVar7 = FUN_1400578c0(param_1);
                            puVar14 = (undefined8 *)
                                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar7);
                            puVar10 = *(undefined8 **)(param_1 + 0x10);
                            *puVar10 = *puVar14;
                            *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar14 + 1);
                            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                            FUN_1400f0870(param_1,puVar10,L"strType",L"Challenge");
                            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                            puVar10 = *(undefined8 **)(param_1 + 0x10);
                            puVar14 = (undefined8 *)
                                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar7);
                            *puVar10 = *puVar14;
                            *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar14 + 1);
                            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                            FUN_1400f06f0(param_1);
                            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                            puVar10 = *(undefined8 **)(param_1 + 0x10);
                            puVar14 = (undefined8 *)
                                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar7);
                            *puVar10 = *puVar14;
                            *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar14 + 1);
                            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                            FUN_1400f06f0(param_1);
                            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                            uVar12 = FUN_14034bdd0();
                            puVar14 = (undefined8 *)
                                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar7);
                            puVar10 = *(undefined8 **)(param_1 + 0x10);
                            *puVar10 = *puVar14;
                            *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar14 + 1);
                            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                            FUN_1400f0870(param_1,puVar10,L"strTitle",uVar12);
                            local_res18 = (longlong *)((ulonglong)local_res18 & 0xffffffff00000000);
                            puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + -0x10);
                            *(undefined8 **)(param_1 + 0x10) = puVar10;
                            iVar6 = FUN_14048f880();
                            if (iVar6 == 0) {
                                local_res18 = (longlong *)
                                        ((ulonglong)local_res18 & 0xffffffff00000000 | (ulonglong)puVar15[6]);
                            }
                            else if ((*(byte *)(lVar13 + 0xc) & 8) == 0) {
                                FUN_14048f9f0();
                                local_res18 = (longlong *)CONCAT44(local_res18._4_4_,100);
                            }
                            puVar14 = (undefined8 *)
                                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar7);
                            *puVar10 = *puVar14;
                            *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar14 + 1);
                            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                            FUN_1400f06f0(param_1);
                            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                            puVar10 = *(undefined8 **)(param_1 + 0x10);
                            puVar14 = (undefined8 *)
                                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar7);
                            *puVar10 = *puVar14;
                            *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar14 + 1);
                            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                            FUN_1400f06f0(param_1);
                            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                            puVar10 = *(undefined8 **)(param_1 + 0x10);
                            uVar21 = puVar15[0xc];
                            puVar14 = (undefined8 *)
                                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar7);
                            *puVar10 = *puVar14;
                            *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar14 + 1);
                            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                            lVar13 = FUN_14018f0e0(local_58,L"bActivated");
                            if (*(longlong *)(lVar13 + 8) == 0) {
                                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                            }
                            else {
                                lVar22 = -1;
                                do {
                                    lVar22 = lVar22 + 1;
                                } while (*(char *)(*(longlong *)(lVar13 + 8) + lVar22) != '\0');
                                FUN_140058710(param_1);
                            }
                            if (local_50 != 0) {
                                FUN_14018b900(local_50,0);
                            }
                            puVar15 = *(uint **)(param_1 + 0x10);
                            puVar15[2] = 1;
                            *puVar15 = (uint)(uVar21 != 0);
                            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                            uVar12 = FUN_1400580e0(param_1,0xfffffffd);
                            FUN_14005ea50(param_1,uVar12,*(longlong *)(param_1 + 0x10) + -0x20,
                                          *(longlong *)(param_1 + 0x10) + -0x10);
                            *(longlong *)(param_1 + 0x10) =
                                    (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
                            FUN_1400fb1d0(&local_80);
                            FUN_1400579e0(param_1);
                        }
                    }
                }
                LAB_140655b8f:
                lVar13 = *(longlong *)(lVar11 + 0x18);
                if (lVar13 == 0) {
                    lVar13 = *(longlong *)(lVar11 + 8);
                    if (lVar11 == *(longlong *)(lVar13 + 0x18)) {
                        do {
                            lVar11 = lVar13;
                            lVar13 = *(longlong *)(lVar11 + 8);
                        } while (lVar11 == *(longlong *)(lVar13 + 0x18));
                    }
                    if (*(longlong *)(lVar11 + 0x18) != lVar13) {
                        lVar11 = lVar13;
                    }
                }
                else {
                    for (lVar22 = *(longlong *)(lVar13 + 0x10); lVar11 = lVar13, lVar22 != 0;
                         lVar22 = *(longlong *)(lVar22 + 0x10)) {
                        lVar13 = lVar22;
                    }
                }
                iVar6 = local_res10[0];
            } while (lVar11 != CONCAT44(uStack204,local_d0));
        }
        FUN_140008410(&local_d8);
        FUN_14018b900(CONCAT44(uStack204,local_d0),0);
    }
    lVar11 = local_98;
    local_res18 = (longlong *)0x0;
    iVar6 = FUN_1405f5860();
    plVar19 = local_res18;
    if ((iVar6 != 0) && (local_res18 != (longlong *)0x0)) {
        local_d8 = &PTR_FUN_140b569f0;
        local_c0 = 1;
        local_c8 = param_1;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar10 = *(undefined8 **)(param_1 + 0x10);
        uVar12 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar10 + 1) = 5;
        *puVar10 = uVar12;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        uVar7 = FUN_1400578c0(param_1);
        local_d0 = uVar7;
        puVar14 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar7);
        puVar10 = *(undefined8 **)(param_1 + 0x10);
        *puVar10 = *puVar14;
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar14 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f0870(param_1,puVar10,L"strType",L"PublicEvent");
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        puVar10 = *(undefined8 **)(param_1 + 0x10);
        puVar14 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar7);
        *puVar10 = *puVar14;
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar14 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f06f0(param_1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        uVar12 = (**(code **)(*plVar19 + 0x140))(plVar19);
        iVar6 = FUN_140432d60(param_1,uVar12);
        if (iVar6 != 0) {
            FUN_1400fb540(&local_d8,L"peoObjective");
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        }
        uVar21 = (**(code **)(*plVar19 + 0x98))(plVar19);
        uVar23 = (ulonglong)uVar21;
        puVar14 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar7);
        puVar10 = *(undefined8 **)(param_1 + 0x10);
        *puVar10 = *puVar14;
        uVar1 = *(undefined4 *)(puVar14 + 1);
        *(undefined4 *)(puVar10 + 1) = uVar1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f06f0(param_1,uVar1,L"nCompleted",uVar23 & 0xffffffff);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        uVar21 = (**(code **)(*plVar19 + 0xd0))(plVar19);
        uVar23 = (ulonglong)uVar21;
        puVar14 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar7);
        puVar10 = *(undefined8 **)(param_1 + 0x10);
        *puVar10 = *puVar14;
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar14 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f06f0(param_1,puVar10,L"nNeeded",uVar23 & 0xffffffff);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        FUN_1400fb1d0(&local_80,uVar7);
        FUN_1400579e0(param_1);
        lVar11 = local_98;
    }
    if (DAT_140c65970 != 0) {
        iVar6 = *(int *)(DAT_140c65970 + 8);
        if (iVar6 == 2) {
            local_a0 = 0;
            local_a8 = 0;
            FUN_140570c90();
            if (local_a0 != 0) {
                pplVar20 = (longlong **)(local_a8 + 8);
                lVar11 = local_a0;
                do {
                    if ((*pplVar20 != (longlong *)0x0) &&
                        (iVar6 = (**(code **)(**pplVar20 + 0x28))(), iVar6 != 0)) {
                        local_d8 = &PTR_FUN_140b569f0;
                        local_c0 = 1;
                        local_c8 = param_1;
                        FUN_140058900(param_1);
                        uVar7 = FUN_1400578c0(param_1);
                        local_d0 = uVar7;
                        puVar14 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar7);
                        puVar10 = *(undefined8 **)(param_1 + 0x10);
                        *puVar10 = *puVar14;
                        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar14 + 1);
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                        FUN_1400f0870(param_1,puVar10,L"strType",L"Scientist");
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                        puVar10 = *(undefined8 **)(param_1 + 0x10);
                        puVar14 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar7);
                        *puVar10 = *puVar14;
                        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar14 + 1);
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                        FUN_1400f06f0(param_1);
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                        iVar6 = FUN_140432ac0(param_1);
                        if (iVar6 != 0) {
                            FUN_1400fb540(&local_d8);
                            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                        }
                        FUN_1400fb1d0(&local_80);
                        FUN_1400579e0(param_1);
                    }
                    if (*(int *)((longlong)pplVar20 + -4) != 0) {
                        local_d8 = &PTR_FUN_140b569f0;
                        local_c0 = 1;
                        local_c8 = param_1;
                        FUN_140058900(param_1);
                        uVar7 = FUN_1400578c0(param_1);
                        local_d0 = uVar7;
                        puVar14 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar7);
                        puVar10 = *(undefined8 **)(param_1 + 0x10);
                        *puVar10 = *puVar14;
                        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar14 + 1);
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                        FUN_1400f0870(param_1,puVar10,L"strType",L"Scientist");
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                        puVar10 = *(undefined8 **)(param_1 + 0x10);
                        puVar14 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar7);
                        *puVar10 = *puVar14;
                        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar14 + 1);
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                        FUN_1400f06f0(param_1);
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                        local_res10[0] = *(int *)((longlong)pplVar20 + -4);
                        iVar6 = FUN_1403d3470(param_1);
                        if (iVar6 != 0) {
                            FUN_1400fb540(&local_d8);
                            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                        }
                        FUN_1400fb1d0(&local_80);
                        FUN_1400579e0(param_1);
                    }
                    pplVar20 = pplVar20 + 2;
                    lVar11 = lVar11 + -1;
                } while (lVar11 != 0);
            }
            if (local_a8 != 0) {
                (**(code **)(*(longlong *)(local_a8 - 0x10) + 8))(local_a8 - 0x10);
            }
        }
        else if (iVar6 == 3) {
            local_res18 = (longlong *)0x0;
            iVar6 = FUN_140571850();
            if (((iVar6 != 0x65) ||
                 ((DAT_140c65970 != 0 &&
                   (iVar6 = FUN_140571ac0(DAT_140c65970,lVar11,&local_res18), iVar6 != 0)))) &&
                (plVar19 = local_res18, local_res18 != (longlong *)0x0)) {
                pdVar3 = *(double **)(param_1 + 0x10);
                *(undefined4 *)(pdVar3 + 1) = 3;
                *pdVar3 = (double)local_res10[0];
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                FUN_1400fa0f0(&local_d8,param_1,1);
                lVar11 = local_c8;
                uVar7 = local_d0;
                puVar14 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_c8 + 0x20) + 0xa0),local_d0);
                puVar10 = *(undefined8 **)(lVar11 + 0x10);
                *puVar10 = *puVar14;
                *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar14 + 1);
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                FUN_1400f0870(lVar11,puVar10,L"strType",L"Explorer");
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
                puVar10 = *(undefined8 **)(lVar11 + 0x10);
                puVar14 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),uVar7);
                *puVar10 = *puVar14;
                *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar14 + 1);
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                FUN_1400f06f0(lVar11);
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
                iVar6 = FUN_140432ac0(lVar11,plVar19[6]);
                if (iVar6 != 0) {
                    FUN_1400fb540(&local_d8,L"pmMission");
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
                }
                (**(code **)(*plVar19 + 8))(plVar19);
                piVar17 = (int *)FUN_1403ba420();
                if (piVar17 != (int *)0x0) {
                    local_res10[0] = *piVar17;
                    iVar6 = FUN_1403d3470(lVar11,local_res10);
                    if (iVar6 != 0) {
                        pwVar18 = L"splReward";
                        LAB_140656363:
                        FUN_1400fb540(&local_d8,pwVar18);
                        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
                    }
                }
                LAB_140656371:
                FUN_1400fb1d0(&local_80,uVar7);
                FUN_1400579e0(lVar11);
            }
        }
        else if (iVar6 == 0) {
            local_res18 = (longlong *)0x0;
            iVar6 = FUN_140570810();
            if (((((iVar6 == 1) || (iVar6 == 4)) || (iVar6 = FUN_140570990(), iVar6 != 0)) ||
                 (iVar6 = FUN_140570ab0(), iVar6 != 0)) &&
                (plVar19 = local_res18, local_res18 != (longlong *)0x0)) {
                pdVar3 = *(double **)(param_1 + 0x10);
                *(undefined4 *)(pdVar3 + 1) = 3;
                *pdVar3 = (double)local_res10[0];
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                FUN_1400fa0f0(&local_d8,param_1,1);
                lVar11 = local_c8;
                uVar7 = local_d0;
                puVar14 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_c8 + 0x20) + 0xa0),local_d0);
                puVar10 = *(undefined8 **)(lVar11 + 0x10);
                *puVar10 = *puVar14;
                *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar14 + 1);
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                FUN_1400f0870(lVar11,puVar10,L"strType",L"Soldier");
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
                puVar10 = *(undefined8 **)(lVar11 + 0x10);
                puVar14 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),uVar7);
                *puVar10 = *puVar14;
                *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar14 + 1);
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                FUN_1400f06f0(lVar11);
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
                puVar10 = *(undefined8 **)(lVar11 + 0x10);
                puVar14 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),uVar7);
                *puVar10 = *puVar14;
                *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar14 + 1);
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                FUN_1400f0630(lVar11);
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
                iVar6 = FUN_140432ac0(lVar11,plVar19[6]);
                if (iVar6 != 0) {
                    FUN_1400fb540(&local_d8,L"pmMission");
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
                }
                (**(code **)(*plVar19 + 8))(plVar19);
                piVar17 = (int *)FUN_1403ba420();
                if (piVar17 != (int *)0x0) {
                    local_res10[0] = *piVar17;
                    iVar6 = FUN_1403d3470(lVar11,local_res10);
                    if (iVar6 != 0) {
                        pwVar18 = L"splReward";
                        goto LAB_140656363;
                    }
                }
                goto LAB_140656371;
            }
        }
    }
    lVar11 = local_70;
    puVar14 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_70 + 0x20) + 0xa0),local_78);
    puVar10 = *(undefined8 **)(lVar11 + 0x10);
    uVar12 = *puVar14;
    *puVar10 = uVar12;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar14 + 1);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    FUN_1400579e0(lVar11,uVar12,local_78);
    local_b8 = &PTR_FUN_140b66400;
    puVar10 = local_60;
    LAB_1406563df:
    puVar14 = (undefined8 *)*puVar10;
    while (puVar14 != puVar10) {
        puVar4 = (undefined8 *)*puVar14;
        FUN_14018b900(puVar14,0);
        puVar14 = puVar4;
    }
    *puVar10 = puVar10;
    puVar10[1] = puVar10;
    FUN_14018b900(puVar10,0);
    return uVar24;
}



undefined8 FUN_140656440(longlong param_1)

{
    int iVar1;
    undefined8 *puVar2;
    double *pdVar3;
    undefined4 *puVar4;
    longlong lVar5;
    longlong lVar6;

    puVar4 = (undefined4 *)FUN_1406622c0(param_1,1);
    if ((puVar4 == (undefined4 *)0x0) || (lVar5 = FUN_1403d90d0(DAT_140c65898,*puVar4), lVar5 == 0)) {
        return 0;
    }
    lVar6 = FUN_140561c30(DAT_140c65b70,*(undefined4 *)(lVar5 + 0x1600));
    if ((lVar6 == 0) &&
        (((*(longlong *)(DAT_140c65898 + 0x78) != lVar5 ||
           (lVar5 = FUN_14039df50(DAT_140c65898), lVar5 == 0)) ||
          (lVar6 = FUN_1404695e0(lVar5), lVar6 == 0)))) {
        iVar1 = *(int *)(DAT_140c65898 + 0x1ad0);
        puVar2 = *(undefined8 **)(param_1 + 0x10);
        *(undefined4 *)(puVar2 + 1) = 3;
        if (iVar1 == 0) {
            *puVar2 = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
        *puVar2 = 0x3ff0000000000000;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    pdVar3 = *(double **)(param_1 + 0x10);
    iVar1 = *(int *)(*(longlong *)(*(longlong *)(lVar6 + 0x138) + 0x70) + 0x2c);
    *(undefined4 *)(pdVar3 + 1) = 3;
    *pdVar3 = (double)iVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140656560(longlong param_1)

{
    undefined4 *puVar1;
    longlong lVar2;
    longlong lVar3;
    undefined local_28 [8];
    longlong local_20;

    puVar1 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar1 != (undefined4 *)0x0) {
        lVar2 = FUN_1403d90d0(DAT_140c65898,*puVar1);
        if (lVar2 != 0) {
            if (*(uint *)(lVar2 + 0x1b8) < 0xe) {
                lVar2 = FUN_14018f0e0(local_28,(&PTR_u_Stand_140c3ac50)[(int)*(uint *)(lVar2 + 0x1b8)]);
                if (*(longlong *)(lVar2 + 8) == 0) {
                    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                }
                else {
                    lVar3 = -1;
                    do {
                        lVar3 = lVar3 + 1;
                    } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar3) != '\0');
                    FUN_140058710(param_1);
                }
                if (local_20 != 0) {
                    FUN_14018b900(local_20,0);
                    return 1;
                }
            }
            else {
                FUN_140058710(param_1,"Unknown",7);
            }
            return 1;
        }
    }
    return 0;
}



undefined4 FUN_140656630(longlong param_1)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 *puVar3;
    longlong lVar4;
    undefined4 local_res10 [6];
    undefined local_18 [16];

    puVar3 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar3 != (undefined4 *)0x0) {
        lVar4 = FUN_1403d90d0(DAT_140c65898,*puVar3);
        if (lVar4 != 0) {
            FUN_14045bac0(lVar4,local_18);
            uVar1 = FUN_140141f10(DAT_140c63678,local_18);
            local_res10[0] = uVar1;
            uVar2 = FUN_1401430e0(param_1,local_res10);
            FUN_1401429a0(DAT_140c63678,uVar1);
            return uVar2;
        }
    }
    FUN_140056570(param_1,1,"invalid unit");
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406566e0(longlong param_1)

{
    undefined4 *puVar1;
    longlong lVar2;
    ulonglong uVar3;
    char *pcVar4;
    ulonglong uVar5;

    puVar1 = (undefined4 *)FUN_1406622c0(param_1,1);
    if ((puVar1 == (undefined4 *)0x0) || (lVar2 = FUN_1403d90d0(DAT_140c65898,*puVar1), lVar2 == 0)) {
        FUN_140056570(param_1,1,"invalid unit");
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar5 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar3 = uVar5;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar3 * 8) + 400) ==
                param_1) {
                uVar5 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar3 * 8);
                break;
            }
            uVar3 = (ulonglong)((int)uVar3 + 1);
        } while (uVar3 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    if ((*(longlong *)(lVar2 + 0x18) == 0) ||
        (pcVar4 = "Simple", ((byte)*(undefined4 *)(*(longlong *)(lVar2 + 0x18) + 0x94) & 0xf) != 0xf))
    {
        pcVar4 = "Normal";
    }
    FUN_140058710(*(undefined8 *)(uVar5 + 400),pcVar4,6);
    return 1;
}



undefined8 FUN_1406567d0(longlong param_1)

{
    undefined4 *puVar1;
    uint *puVar2;
    byte bVar3;
    int iVar4;
    longlong lVar5;
    int *piVar6;

    lVar5 = FUN_1406622c0();
    if (lVar5 != 0) {
        lVar5 = FUN_1403d90d0(DAT_140c65898);
        if (lVar5 != 0) {
            lVar5 = *(longlong *)(lVar5 + 0x18);
            bVar3 = 0;
            if (lVar5 == 0) {
                puVar1 = *(undefined4 **)(param_1 + 0x10);
                *puVar1 = 0;
                puVar1[2] = 1;
            }
            else {
                piVar6 = (int *)FUN_1401f60a0(*(undefined4 *)(lVar5 + 0x10));
                if (piVar6 == (int *)0x0) {
                    iVar4 = 0x20;
                }
                else {
                    iVar4 = *piVar6;
                }
                if ((((*(byte *)(lVar5 + 0x94) & 0x40) != 0) || (iVar4 == 0xc)) || (iVar4 == 0x1f)) {
                    bVar3 = 1;
                }
                puVar2 = *(uint **)(param_1 + 0x10);
                puVar2[2] = 1;
                *puVar2 = (uint)bVar3;
            }
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    FUN_140056570(param_1,1,"invalid unit");
    return 0;
}



undefined8 FUN_1406568b0(longlong param_1)

{
    byte bVar1;
    undefined4 *puVar2;
    uint *puVar3;
    longlong lVar4;

    lVar4 = FUN_1406622c0();
    if ((lVar4 != 0) && (lVar4 = FUN_1403d90d0(DAT_140c65898), lVar4 != 0)) {
        if (*(longlong *)(lVar4 + 0x18) == 0) {
            puVar2 = *(undefined4 **)(param_1 + 0x10);
            *puVar2 = 0;
            puVar2[2] = 1;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
        bVar1 = *(byte *)(*(longlong *)(lVar4 + 0x18) + 0x94);
        puVar3 = *(uint **)(param_1 + 0x10);
        puVar3[2] = 1;
        *puVar3 = (uint)((bVar1 & 0x10) != 0);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    FUN_140056570(param_1,1,"invalid unit");
    return 0;
}



undefined8 FUN_140656960(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    int iVar3;

    lVar2 = FUN_1406622c0();
    if (lVar2 != 0) {
        lVar2 = FUN_1403d90d0(DAT_140c65898);
        if (lVar2 != 0) {
            if (*(longlong *)(lVar2 + 0x18) == 0) {
                iVar3 = 0;
            }
            else {
                iVar3 = *(int *)(*(longlong *)(lVar2 + 0x18) + 0x2c);
            }
            pdVar1 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar1 + 1) = 3;
            *pdVar1 = (double)iVar3;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    FUN_140056570(param_1,1,"invalid unit");
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406569f0(longlong param_1)

{
    int iVar1;
    undefined4 *puVar2;
    longlong lVar3;
    double *pdVar4;

    puVar2 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar2 != (undefined4 *)0x0) {
        lVar3 = FUN_1403d90d0(DAT_140c65898,*puVar2);
        if (lVar3 != 0) {
            pdVar4 = *(double **)(param_1 + 0x10);
            iVar1 = FUN_14045ba60(lVar3);
            *(undefined4 *)(pdVar4 + 1) = 3;
            *pdVar4 = (double)iVar1;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    FUN_140056570(param_1,1,"invalid unit");
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140656a80(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    uint uVar3;

    lVar2 = FUN_1406622c0();
    if (lVar2 != 0) {
        lVar2 = FUN_1403d90d0(DAT_140c65898);
        if (lVar2 != 0) {
            if (*(longlong *)(lVar2 + 0x100) == 0) {
                if (*(longlong *)(lVar2 + 0x18) == 0) {
                    uVar3 = 0;
                }
                else {
                    uVar3 = (uint)*(byte *)(*(longlong *)(lVar2 + 0x18) + 0x159);
                }
            }
            else {
                uVar3 = *(uint *)(*(longlong *)(lVar2 + 0x100) + 0x14);
            }
            pdVar1 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar1 + 1) = 3;
            *pdVar1 = (double)uVar3;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    FUN_140056570(param_1,1,"invalid unit");
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140656b30(longlong param_1)

{
    double *pdVar1;
    undefined4 *puVar2;
    longlong lVar3;
    float fVar4;

    puVar2 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar2 != (undefined4 *)0x0) {
        lVar3 = FUN_1403d90d0(DAT_140c65898,*puVar2);
        if (lVar3 != 0) {
            if (*(longlong *)(lVar3 + 0x100) == 0) {
                if (*(longlong *)(lVar3 + 0x18) == 0) {
                    fVar4 = 0.0;
                }
                else {
                    fVar4 = *(float *)(*(longlong *)(lVar3 + 0x18) + 0x30);
                }
            }
            else {
                fVar4 = *(float *)(*(longlong *)(lVar3 + 0x100) + 0xc);
            }
            pdVar1 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar1 + 1) = 3;
            *pdVar1 = (double)fVar4;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    FUN_140056570(param_1,1,"invalid unit");
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140657550(longlong param_1)

{
    undefined4 uVar1;
    undefined4 *puVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    ulonglong uVar6;
    undefined8 *puVar7;

    puVar2 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar2 == (undefined4 *)0x0) {
        lVar3 = 0;
    }
    else {
        lVar3 = FUN_1403d90d0(DAT_140c65898,*puVar2);
        if (lVar3 != 0) goto LAB_14065759a;
    }
    FUN_140056570(param_1,1,"invalid unit");
    LAB_14065759a:
    if (*(longlong *)(lVar3 + 0x18) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    if ((((*(int *)(lVar3 + 0x80) == 0xe) && (*(int *)(*(longlong *)(lVar3 + 0x18) + 0x14c) != 0)) &&
         (lVar3 = FUN_1402092a0(), lVar3 != 0)) &&
        ((*(int *)(lVar3 + 8) != 0 && (*(int *)(lVar3 + 0xc) != 0)))) {
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar7 = *(undefined8 **)(param_1 + 0x10);
        uVar4 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar7 + 1) = 5;
        *puVar7 = uVar4;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        uVar1 = FUN_1400578c0(param_1);
        uVar6 = (ulonglong)*(uint *)(lVar3 + 8);
        puVar5 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
        puVar7 = *(undefined8 **)(param_1 + 0x10);
        *puVar7 = *puVar5;
        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar5 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f06f0(param_1,puVar7,L"nMinLevel",uVar6 & 0xffffffff);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        puVar7 = *(undefined8 **)(param_1 + 0x10);
        puVar5 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
        *puVar7 = *puVar5;
        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar5 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f06f0(param_1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        puVar7 = *(undefined8 **)(param_1 + 0x10);
        puVar5 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
        *puVar7 = *puVar5;
        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar5 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400579e0(param_1);
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140657730(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    undefined4 *puVar3;
    longlong lVar4;

    puVar3 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar3 == (undefined4 *)0x0) {
        lVar4 = 0;
        LAB_140657766:
        FUN_140056570(param_1,1,"invalid unit");
    }
    else {
        lVar4 = FUN_1403d90d0(DAT_140c65898,*puVar3);
        if (lVar4 == 0) goto LAB_140657766;
    }
    if (*(longlong *)(lVar4 + 0x18) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    else {
        if ((*(int *)(lVar4 + 0x80) == 0xe) && (*(int *)(*(longlong *)(lVar4 + 0x18) + 0x14c) != 0)) {
            lVar4 = FUN_1402092a0();
            if ((lVar4 != 0) && (iVar1 = *(int *)(lVar4 + 0x10), iVar1 != 0)) {
                pdVar2 = *(double **)(param_1 + 0x10);
                *(undefined4 *)(pdVar2 + 1) = 3;
                *pdVar2 = (double)iVar1;
                goto LAB_1406577d8;
            }
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    LAB_1406577d8:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406577f0(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    lVar2 = FUN_1406622c0();
    uVar4 = 0;
    uVar3 = uVar4;
    if ((lVar2 == 0) || (uVar3 = FUN_1403d90d0(DAT_140c65898), uVar3 == 0)) {
        FUN_140056570(param_1,1,"invalid unit");
    }
    if (*(longlong *)(uVar3 + 0x18) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    else if ((*(int *)(uVar3 + 0x80) == 0xe) && (*(int *)(*(longlong *)(uVar3 + 0x18) + 0x14c) != 0))
    {
        if (DAT_140c636a8 <= *(uint *)(uVar3 + 0x1b4)) {
            uVar4 = (ulonglong)(*(uint *)(uVar3 + 0x1b4) - DAT_140c636a8);
        }
        pdVar1 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar1 + 1) = 3;
        *pdVar1 = (double)(int)(uVar4 / 1000);
    }
    else {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406578c0(longlong param_1)

{
    byte bVar1;
    int iVar2;
    undefined4 *puVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    longlong lVar6;
    longlong lVar7;
    ulonglong uVar8;

    puVar3 = (undefined4 *)FUN_1406622c0(param_1,1);
    uVar8 = 0;
    bVar1 = 0;
    uVar4 = uVar8;
    if ((puVar3 == (undefined4 *)0x0) || (uVar4 = FUN_1403d90d0(DAT_140c65898,*puVar3), uVar4 == 0)) {
        FUN_140056570(param_1,1);
    }
    puVar3 = (undefined4 *)FUN_1406622c0(param_1,2);
    uVar5 = uVar8;
    if ((puVar3 == (undefined4 *)0x0) || (uVar5 = FUN_1403d90d0(DAT_140c65898,*puVar3), uVar5 == 0)) {
        FUN_140056570(param_1,2);
    }
    if (*(longlong *)(uVar4 + 0x18) == 0) {
        puVar3 = *(undefined4 **)(param_1 + 0x10);
        *puVar3 = 0;
        puVar3[2] = 1;
    }
    else {
        if ((((*(int *)(uVar4 + 0x80) == 5) &&
              (lVar6 = FUN_140244b00(*(undefined4 *)(*(longlong *)(uVar4 + 0x18) + 0xa8)), lVar6 != 0))
             && (lVar7 = FUN_140246480(*(undefined4 *)(lVar6 + 4)), lVar7 != 0)) &&
            (lVar7 = FUN_140242d40(*(undefined4 *)(lVar7 + 4)), uVar8 = 0, lVar7 != 0)) {
            if ((*(int *)(lVar6 + 8) == 0) ||
                (iVar2 = (**(code **)(*DAT_140c659a0 + 0x18))
                        (DAT_140c659a0,uVar5,*(int *)(lVar6 + 8),0,0,0), iVar2 != 0)) {
                bVar1 = 1;
            }
            uVar8 = (ulonglong)bVar1;
        }
        puVar3 = *(undefined4 **)(param_1 + 0x10);
        puVar3[2] = 1;
        *puVar3 = (int)uVar8;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140657a10(longlong param_1)

{
    undefined4 *puVar1;
    longlong lVar2;
    undefined8 uVar3;
    longlong lVar4;
    undefined local_28 [8];
    longlong local_20;

    puVar1 = (undefined4 *)FUN_1406622c0(param_1,1);
    lVar2 = 0;
    if ((puVar1 == (undefined4 *)0x0) || (lVar2 = FUN_1403d90d0(DAT_140c65898,*puVar1), lVar2 == 0)) {
        FUN_140056570(param_1,1);
    }
    if (*(longlong *)(lVar2 + 0x18) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    else {
        if ((((*(longlong *)(DAT_140c65898 + 0x78) != 0) && (*(int *)(lVar2 + 0x80) == 5)) &&
             (lVar2 = FUN_140244b00(*(undefined4 *)(*(longlong *)(lVar2 + 0x18) + 0xa8)), lVar2 != 0)) &&
            ((lVar2 = FUN_140246480(*(undefined4 *)(lVar2 + 4)), lVar2 != 0 &&
                                                                 (lVar2 = FUN_140242d40(*(undefined4 *)(lVar2 + 4)), lVar2 != 0)))) {
            uVar3 = FUN_14034bdd0();
            lVar2 = FUN_14018f0e0(local_28,uVar3);
            if (*(longlong *)(lVar2 + 8) == 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            }
            else {
                lVar4 = -1;
                do {
                    lVar4 = lVar4 + 1;
                } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar4) != '\0');
                FUN_140058710(param_1);
            }
            if (local_20 == 0) {
                return 1;
            }
            FUN_14018b900(local_20,0);
            return 1;
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140657b40(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    undefined4 *puVar3;
    longlong lVar4;

    puVar3 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar3 == (undefined4 *)0x0) {
        lVar4 = 0;
        LAB_140657b76:
        FUN_140056570(param_1,1,"invalid unit");
    }
    else {
        lVar4 = FUN_1403d90d0(DAT_140c65898,*puVar3);
        if (lVar4 == 0) goto LAB_140657b76;
    }
    if (*(longlong *)(lVar4 + 0x18) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    else {
        if ((*(longlong *)(DAT_140c65898 + 0x78) != 0) && (*(int *)(lVar4 + 0x80) == 5)) {
            lVar4 = FUN_140244b00(*(undefined4 *)(*(longlong *)(lVar4 + 0x18) + 0xa8));
            if (lVar4 != 0) {
                lVar4 = FUN_140246480(*(undefined4 *)(lVar4 + 4));
                if (lVar4 != 0) {
                    iVar1 = *(int *)(lVar4 + 8);
                    pdVar2 = *(double **)(param_1 + 0x10);
                    *(undefined4 *)(pdVar2 + 1) = 3;
                    *pdVar2 = (double)iVar1;
                    goto LAB_140657bf9;
                }
            }
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    LAB_140657bf9:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140657c10(longlong param_1)

{
    int iVar1;
    uint *puVar2;
    undefined4 *puVar3;
    longlong lVar4;

    lVar4 = FUN_1406622c0();
    if (lVar4 != 0) {
        lVar4 = FUN_1403d90d0(DAT_140c65898);
        if (lVar4 != 0) {
            puVar2 = *(uint **)(param_1 + 0x10);
            iVar1 = *(int *)(lVar4 + 0x3728);
            puVar2[2] = 1;
            *puVar2 = (uint)(iVar1 != 0);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    FUN_140056570(param_1,1,"invalid unit");
    puVar3 = *(undefined4 **)(param_1 + 0x10);
    *puVar3 = 0;
    puVar3[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140657ca0(longlong param_1)

{
    uint uVar1;
    uint *puVar2;
    undefined4 *puVar3;
    longlong lVar4;

    lVar4 = FUN_1406622c0();
    if (lVar4 != 0) {
        lVar4 = FUN_1403d90d0(DAT_140c65898);
        if (lVar4 != 0) {
            if (*(int *)(lVar4 + 0x3728) != 0) {
                lVar4 = FUN_140432a10();
                if (lVar4 != 0) {
                    puVar2 = *(uint **)(param_1 + 0x10);
                    uVar1 = *(uint *)(*(longlong *)(lVar4 + 0x18) + 8);
                    puVar2[2] = 1;
                    *puVar2 = uVar1 & 1;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    return 1;
                }
            }
            goto LAB_140657d1c;
        }
    }
    FUN_140056570(param_1,1,"invalid unit");
    LAB_140657d1c:
    puVar3 = *(undefined4 **)(param_1 + 0x10);
    *puVar3 = 0;
    puVar3[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140657d40(longlong param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    longlong lVar3;
    undefined local_28 [8];
    longlong local_20;

    lVar1 = FUN_1406622c0();
    if ((lVar1 == 0) || (lVar1 = FUN_1403d90d0(DAT_140c65898), lVar1 == 0)) {
        FUN_140056570(param_1,1,"invalid unit");
    }
    else if ((((*(int *)(lVar1 + 0x3728) != 0) && (lVar1 = FUN_140432a10(), lVar1 != 0)) &&
              ((*(byte *)(*(longlong *)(lVar1 + 0x18) + 8) & 1) != 0)) &&
             (*(longlong *)(lVar1 + 0x20) != 0)) {
        lVar3 = (longlong)*(int *)(*(longlong *)(lVar1 + 0x18) + 0x14);
        uVar2 = FUN_14034bdd0(lVar3,*(undefined4 *)
                (*(longlong *)(*(longlong *)(lVar1 + 0x20) + 8) + 0x10 + lVar3 * 4)
        );
        lVar1 = FUN_14018f0e0(local_28,uVar2);
        if (*(longlong *)(lVar1 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        else {
            lVar3 = -1;
            do {
                lVar3 = lVar3 + 1;
            } while (*(char *)(*(longlong *)(lVar1 + 8) + lVar3) != '\0');
            FUN_140058710(param_1);
        }
        if (local_20 == 0) {
            return 1;
        }
        FUN_14018b900(local_20,0);
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140658400(longlong param_1)

{
    uint *puVar1;
    int iVar2;
    undefined4 *puVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;

    puVar3 = (undefined4 *)FUN_1406622c0();
    uVar4 = 0;
    if (puVar3 != (undefined4 *)0x0) {
        uVar4 = FUN_1403d90d0(DAT_140c65898,*puVar3);
    }
    uVar5 = 0;
    uVar6 = 0;
    if ((((*(longlong *)(DAT_140c65898 + 0x78) != 0) && (uVar6 = uVar5, uVar4 != 0)) &&
         (*(int *)(uVar4 + 0x80) == 0x11)) && ((~(*(uint *)(uVar4 + 0x28) >> 3) & 1) != 0)) {
        iVar2 = FUN_14045a950(*(longlong *)(DAT_140c65898 + 0x78),*(undefined4 *)(uVar4 + 8));
        uVar6 = (ulonglong)(iVar2 != 0);
    }
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)((int)uVar6 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406584a0(longlong param_1)

{
    double *pdVar1;
    int iVar2;
    undefined4 *puVar3;
    longlong lVar4;

    puVar3 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar3 == (undefined4 *)0x0) {
        lVar4 = 0;
    }
    else {
        lVar4 = FUN_1403d90d0(DAT_140c65898,*puVar3);
    }
    if ((((*(longlong *)(DAT_140c65898 + 0x78) != 0) && (lVar4 != 0)) &&
         (*(int *)(lVar4 + 0x80) == 0x11)) && ((~(*(uint *)(lVar4 + 0x28) >> 3) & 1) != 0)) {
        iVar2 = FUN_14045a950(*(longlong *)(DAT_140c65898 + 0x78),*(undefined4 *)(lVar4 + 8));
        if (iVar2 != 0) {
            iVar2 = *(int *)(&DAT_000015ac + lVar4);
            pdVar1 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar1 + 1) = 3;
            *pdVar1 = (double)(iVar2 + 1);
            goto LAB_14065853a;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    LAB_14065853a:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140658610(longlong param_1)

{
    double *pdVar1;
    int iVar2;
    undefined4 *puVar3;
    longlong lVar4;
    longlong lVar5;

    puVar3 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar3 == (undefined4 *)0x0) {
        lVar4 = 0;
    }
    else {
        lVar4 = FUN_1403d90d0(DAT_140c65898,*puVar3);
    }
    if ((((*(longlong *)(DAT_140c65898 + 0x78) != 0) && (lVar4 != 0)) &&
         (*(int *)(lVar4 + 0x80) == 0x11)) && ((~(*(uint *)(lVar4 + 0x28) >> 3) & 1) != 0)) {
        iVar2 = FUN_14045a950(*(longlong *)(DAT_140c65898 + 0x78),*(undefined4 *)(lVar4 + 8));
        if (iVar2 != 0) {
            if (2 < *(int *)(&DAT_000015ac + lVar4) + 1) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                goto LAB_1406586d8;
            }
            lVar5 = FUN_1402081a0(*(undefined4 *)(&DAT_000015b0 + lVar4));
            if (lVar5 != 0) {
                pdVar1 = *(double **)(param_1 + 0x10);
                iVar2 = *(int *)(lVar5 + 0x10 + (longlong)*(int *)(&DAT_000015ac + lVar4) * 4);
                *(undefined4 *)(pdVar1 + 1) = 3;
                *pdVar1 = (double)iVar2;
                goto LAB_1406586d8;
            }
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    LAB_1406586d8:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140658e50(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    longlong lVar3;
    bool bVar4;

    bVar4 = false;
    puVar2 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar2 != (undefined4 *)0x0) {
        lVar3 = FUN_1403d90d0(DAT_140c65898,*puVar2);
        if (lVar3 != 0) {
            bVar4 = *(longlong *)(lVar3 + 0x1828) != 0;
        }
    }
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)bVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140658ec0(undefined8 param_1)

{
    undefined4 *puVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined local_28 [8];
    longlong local_20;

    puVar1 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar1 != (undefined4 *)0x0) {
        lVar2 = FUN_1403d90d0(DAT_140c65898,*puVar1);
        if (lVar2 != 0) {
            lVar3 = FUN_14012a990(param_1,2);
            if (lVar3 != 0) {
                FUN_1404760f0(lVar2,lVar3);
                return 0;
            }
            uVar4 = FUN_140056bb0(param_1,2);
            FUN_14018f2d0(local_28,uVar4);
            FUN_140475ef0(lVar2,local_20,0);
            if (local_20 != 0) {
                FUN_14018b900(local_20,0);
            }
        }
    }
    return 0;
}



undefined8 FUN_140658f70(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    undefined4 *puVar3;
    longlong lVar4;

    puVar3 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar3 != (undefined4 *)0x0) {
        lVar4 = FUN_1403d90d0(DAT_140c65898,*puVar3);
        if (lVar4 != 0) {
            if (*(int *)(lVar4 + 0x80) != 0x14) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
            iVar1 = *(int *)(lVar4 + 0x3700);
            pdVar2 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)iVar1;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140659010(longlong param_1)

{
    undefined4 *puVar1;
    longlong lVar2;

    puVar1 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar1 != (undefined4 *)0x0) {
        lVar2 = FUN_1403d90d0(DAT_140c65898,*puVar1);
        if (lVar2 != 0) {
            FUN_140649870(param_1,*(undefined4 *)(lVar2 + 0xc0));
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



void FUN_140659b00(undefined8 param_1)

{
    undefined4 uVar1;
    int iVar2;
    undefined4 *puVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined auStack2584 [32];
    undefined4 local_9f8 [2];
    longlong *local_9f0 [96];
    longlong local_6f0;
    int local_530;
    undefined4 local_52c;
    undefined8 local_528;
    undefined8 local_520;
    undefined8 local_518;
    undefined8 local_510;
    undefined8 local_508;
    undefined8 local_500;
    undefined8 local_4f8;
    undefined8 local_4f0;
    undefined8 local_4e8;
    longlong *local_4d8 [96];
    longlong local_1d8;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack2584;
    puVar3 = (undefined4 *)FUN_1406622c0(param_1,1);
    if ((puVar3 == (undefined4 *)0x0) || (lVar4 = FUN_1403d90d0(DAT_140c65898,*puVar3), lVar4 == 0)) {
        FUN_140056570(param_1,1,"invalid unit");
    }
    uVar1 = FUN_140417b50(param_1,2);
    iVar2 = FUN_140056d60(param_1,3);
    if (iVar2 == 0) {
        FUN_140056830(param_1,"FloatLootText received invalid count value %d",0);
    }
    else {
        FUN_14040fae0(local_4d8);
        uVar5 = FUN_1400b5df0(DAT_140c658f0,uVar1,0);
        FUN_140412470(local_4d8,uVar5,1);
        local_9f8[0] = 1;
        FUN_14040fc60(local_9f0,local_4d8);
        local_520 = 1;
        local_508 = 1;
        local_4f0 = 1;
        local_52c = 0;
        local_528 = 0;
        local_518 = 0;
        local_510 = 0;
        local_500 = 0;
        local_4f8 = 0;
        local_4e8 = 0;
        local_530 = iVar2;
        FUN_140427fa0(*(undefined8 *)(DAT_140c65898 + 0x7340),local_9f8);
        if (local_9f0[0] != (longlong *)0x0) {
            (**(code **)(*local_9f0[0] + 8))();
            local_9f0[0] = (longlong *)0x0;
        }
        if (local_6f0 != 0) {
            FUN_14018b900(local_6f0,0);
        }
        if (local_4d8[0] != (longlong *)0x0) {
            (**(code **)(*local_4d8[0] + 8))();
            local_4d8[0] = (longlong *)0x0;
        }
        if (local_1d8 != 0) {
            FUN_14018b900(local_1d8,0);
        }
    }
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack2584);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140659eb0(longlong param_1,undefined8 param_2,longlong *param_3)

{
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    undefined4 uVar5;
    int iVar6;
    undefined8 uVar7;
    undefined8 *puVar8;
    longlong lVar9;
    longlong lVar10;
    longlong lVar11;
    undefined8 *puVar12;
    undefined4 uVar13;
    undefined4 uVar14;
    undefined **local_c8;
    undefined4 local_c0;
    longlong local_b8;
    undefined4 local_b0;
    undefined local_a8 [8];
    longlong local_a0;
    longlong local_88;
    longlong local_80;
    undefined8 local_78;
    longlong local_70;
    longlong local_68;
    undefined8 local_60;

    lVar1 = *(longlong *)(param_1 + 0x10);
    lVar9 = *param_3;
    local_80 = param_3[1];
    lVar2 = param_3[3];
    uVar3 = param_3[2];
    uVar4 = param_3[5];
    local_68 = param_3[4];
    local_c8 = &PTR_FUN_140b569f0;
    local_b0 = 1;
    local_b8 = lVar1;
    local_88 = lVar9;
    local_78 = uVar3;
    local_70 = lVar2;
    local_60 = uVar4;
    if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar1);
    }
    puVar12 = *(undefined8 **)(lVar1 + 0x10);
    uVar7 = FUN_14005c1b0(lVar1,0,0);
    *(undefined4 *)(puVar12 + 1) = 5;
    *puVar12 = uVar7;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar5 = FUN_1400578c0(lVar1);
    uVar13 = SUB84((double)lVar9,0);
    uVar14 = (undefined4)((ulonglong)(double)lVar9 >> 0x20);
    local_c0 = uVar5;
    puVar8 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar5);
    puVar12 = *(undefined8 **)(lVar1 + 0x10);
    *puVar12 = *puVar8;
    *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar8 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    lVar9 = FUN_14018f0e0(local_a8,L"nAmount1");
    lVar10 = -1;
    if (*(longlong *)(lVar9 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar1 + 0x10) + 8) = 0;
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    }
    else {
        lVar11 = -1;
        do {
            lVar11 = lVar11 + 1;
        } while (*(char *)(*(longlong *)(lVar9 + 8) + lVar11) != '\0');
        FUN_140058710(lVar1);
    }
    if (local_a0 != 0) {
        FUN_14018b900(local_a0,0);
    }
    puVar12 = *(undefined8 **)(lVar1 + 0x10);
    *(undefined4 *)(puVar12 + 1) = 3;
    *puVar12 = CONCAT44(uVar14,uVar13);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(lVar1,0xfffffffd);
    FUN_14005ea50(lVar1,uVar7,*(longlong *)(lVar1 + 0x10) + -0x20,*(longlong *)(lVar1 + 0x10) + -0x10)
            ;
    *(longlong *)(lVar1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar1 + 0x10));
    puVar12 = *(undefined8 **)(lVar1 + 0x10);
    if ((int)uVar3 == 0) {
        puVar8 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar5);
        *puVar12 = *puVar8;
        *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar8 + 1);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
        if (local_78._4_4_ == 0) {
            FUN_1400f06f0(lVar1);
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
            puVar12 = *(undefined8 **)(lVar1 + 0x10);
            puVar8 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar5);
            *puVar12 = *puVar8;
            *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar8 + 1);
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
        }
        FUN_1400f06f0(lVar1);
        LAB_14065a0fc:
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    }
    else {
        uVar7 = FUN_1400b5df0(DAT_140c658f0,uVar3 & 0xffffffff,0);
        iVar6 = FUN_140415c70(lVar1,uVar7);
        if (iVar6 != 0) {
            FUN_1400fb540(&local_c8,L"itemExchange1");
            goto LAB_14065a0fc;
        }
    }
    iVar6 = FUN_140501210(lVar1,&local_88);
    if (iVar6 != 0) {
        FUN_1400fb540(&local_c8,L"monPrice1");
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    }
    uVar13 = SUB84((double)lVar2,0);
    uVar14 = (undefined4)((ulonglong)(double)lVar2 >> 0x20);
    puVar8 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar5);
    puVar12 = *(undefined8 **)(lVar1 + 0x10);
    *puVar12 = *puVar8;
    *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar8 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    lVar9 = FUN_14018f0e0(local_a8,L"nAmount2");
    lVar9 = *(longlong *)(lVar9 + 8);
    if (lVar9 == 0) {
        *(undefined4 *)(*(longlong *)(lVar1 + 0x10) + 8) = 0;
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    }
    else {
        do {
            lVar10 = lVar10 + 1;
        } while (*(char *)(lVar9 + lVar10) != '\0');
        FUN_140058710(lVar1,lVar9,lVar10);
    }
    if (local_a0 != 0) {
        FUN_14018b900(local_a0,0);
    }
    puVar12 = *(undefined8 **)(lVar1 + 0x10);
    *(undefined4 *)(puVar12 + 1) = 3;
    *puVar12 = CONCAT44(uVar14,uVar13);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(lVar1,0xfffffffd);
    FUN_14005ea50(lVar1,uVar7,*(longlong *)(lVar1 + 0x10) + -0x20,*(longlong *)(lVar1 + 0x10) + -0x10)
            ;
    *(longlong *)(lVar1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar1 + 0x10));
    puVar12 = *(undefined8 **)(lVar1 + 0x10);
    if ((int)uVar4 == 0) {
        puVar8 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar5);
        *puVar12 = *puVar8;
        *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar8 + 1);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
        if (local_60._4_4_ == 0) {
            FUN_1400f06f0(lVar1);
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
            puVar12 = *(undefined8 **)(lVar1 + 0x10);
            puVar8 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar5);
            *puVar12 = *puVar8;
            *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar8 + 1);
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
        }
        FUN_1400f06f0(lVar1);
    }
    else {
        uVar7 = FUN_1400b5df0(DAT_140c658f0,uVar4 & 0xffffffff,0);
        iVar6 = FUN_140415c70(lVar1,uVar7);
        if (iVar6 == 0) goto LAB_14065a2b5;
        FUN_1400fb540(&local_c8,L"itemExchange2");
    }
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    LAB_14065a2b5:
    iVar6 = FUN_140501210(lVar1,&local_70);
    if (iVar6 != 0) {
        FUN_1400fb540(&local_c8,L"monPrice2");
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    }
    FUN_1400fb2a0(param_1,param_2,uVar5);
    FUN_1400579e0(lVar1);
    return;
}



undefined8 FUN_14065c700(longlong param_1)

{
    double *pdVar1;
    undefined4 *puVar2;
    longlong lVar3;

    puVar2 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar2 != (undefined4 *)0x0) {
        lVar3 = FUN_1403d90d0(DAT_140c65898,*puVar2);
        if (lVar3 != 0) {
            if (lVar3 == *(longlong *)(DAT_140c65898 + 0x78)) {
                FUN_1403a7c50();
            }
            pdVar1 = *(double **)(param_1 + 0x10);
            *pdVar1 = (double)*(float *)(lVar3 + 0xd4c);
            *(undefined4 *)(pdVar1 + 1) = 3;
            goto LAB_14065c76b;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    LAB_14065c76b:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14065c960(longlong param_1)

{
    int iVar1;
    uint uVar2;
    undefined4 *puVar3;
    longlong lVar4;
    double *pdVar5;
    double *pdVar6;
    uint local_res10;
    uint uStackX20;
    double local_18;
    undefined4 local_10;

    puVar3 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar3 == (undefined4 *)0x0) {
        return 0;
    }
    lVar4 = FUN_1403d90d0(DAT_140c65898,*puVar3);
    if (lVar4 == 0) {
        return 0;
    }
    if (lVar4 != *(longlong *)(DAT_140c65898 + 0x78)) {
        return 0;
    }
    pdVar5 = (double *)(*(longlong *)(param_1 + 0x18) + 0x10);
    pdVar6 = (double *)&DAT_140a12138;
    if (pdVar5 < *(double **)(param_1 + 0x10)) {
        pdVar6 = pdVar5;
    }
    if (*(int *)(pdVar6 + 1) != 3) {
        if ((*(int *)(pdVar6 + 1) != 4) ||
            (iVar1 = FUN_14005ac80((longlong)*pdVar6 + 0x20,&local_res10), iVar1 == 0)) {
            uVar2 = 0;
            goto LAB_14065c9f6;
        }
        local_10 = 3;
        pdVar6 = &local_18;
    }
    uVar2 = (uint)*pdVar6;
    LAB_14065c9f6:
    local_res10 = (uint)((ulonglong)(longlong)(int)uVar2 >> 8) & 0xff;
    uStackX20 = uVar2 & 0xff;
    FUN_14053bab0((longlong)(int)uVar2,&local_res10);
    return 0;
}



undefined8 FUN_14065ca30(longlong param_1)

{
    int iVar1;
    uint uVar2;
    undefined4 *puVar3;
    longlong lVar4;
    double *pdVar5;
    double *pdVar6;
    uint local_res10;
    uint uStackX20;
    double local_18;
    undefined4 local_10;

    puVar3 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar3 == (undefined4 *)0x0) {
        return 0;
    }
    lVar4 = FUN_1403d90d0(DAT_140c65898,*puVar3);
    if (lVar4 == 0) {
        return 0;
    }
    if (lVar4 != *(longlong *)(DAT_140c65898 + 0x78)) {
        return 0;
    }
    pdVar5 = (double *)(*(longlong *)(param_1 + 0x18) + 0x10);
    pdVar6 = (double *)&DAT_140a12138;
    if (pdVar5 < *(double **)(param_1 + 0x10)) {
        pdVar6 = pdVar5;
    }
    if (*(int *)(pdVar6 + 1) != 3) {
        if ((*(int *)(pdVar6 + 1) != 4) ||
            (iVar1 = FUN_14005ac80((longlong)*pdVar6 + 0x20,&local_res10), iVar1 == 0)) {
            uVar2 = 0;
            goto LAB_14065cac6;
        }
        local_10 = 3;
        pdVar6 = &local_18;
    }
    uVar2 = (uint)*pdVar6;
    LAB_14065cac6:
    local_res10 = (uint)((ulonglong)(longlong)(int)uVar2 >> 8) & 0xff;
    uStackX20 = uVar2 & 0xff;
    FUN_14053bba0((longlong)(int)uVar2,&local_res10);
    return 0;
}



undefined8 FUN_14065cb00(longlong param_1)

{
    double dVar1;
    double dVar2;
    uint *puVar3;
    int iVar4;
    uint uVar5;
    undefined4 *puVar6;
    longlong lVar7;
    double *pdVar8;
    uint uVar9;
    double *pdVar10;
    double local_res10 [3];
    double local_18;
    undefined4 local_10;

    puVar6 = (undefined4 *)FUN_1406622c0(param_1,1);
    if ((puVar6 == (undefined4 *)0x0) || (lVar7 = FUN_1403d90d0(DAT_140c65898,*puVar6), lVar7 == 0)) {
        uVar5 = 0;
    }
    else {
        if (lVar7 != *(longlong *)(DAT_140c65898 + 0x78)) {
            puVar6 = *(undefined4 **)(param_1 + 0x10);
            *puVar6 = 0;
            puVar6[2] = 1;
            goto LAB_14065cc5f;
        }
        pdVar8 = (double *)(*(longlong *)(param_1 + 0x18) + 0x10);
        pdVar10 = (double *)&DAT_140a12138;
        if (pdVar8 < *(double **)(param_1 + 0x10)) {
            pdVar10 = pdVar8;
        }
        uVar5 = 0;
        if (*(int *)(pdVar10 + 1) == 3) {
            LAB_14065cbb3:
            uVar5 = (uint)*pdVar10;
        }
        else if ((*(int *)(pdVar10 + 1) == 4) &&
                 (iVar4 = FUN_14005ac80((longlong)*pdVar10 + 0x20,local_res10), iVar4 != 0)) {
            local_10 = 3;
            pdVar10 = &local_18;
            local_18 = local_res10[0];
            goto LAB_14065cbb3;
        }
        uVar9 = (uint)((ulonglong)(longlong)(int)uVar5 >> 8) & 0xff;
        if (uVar9 < 300) {
            uVar5 = uVar9 << 8 | uVar5 & 0xff;
        }
        else {
            uVar5 = 0xffffffff;
        }
        dVar1 = *(double *)(DAT_140c65898 + 0x73d8);
        local_res10[0] = dVar1;
        dVar2 = *(double *)((longlong)dVar1 + 8);
        while (dVar2 != 0.0) {
            if (*(uint *)((longlong)dVar2 + 0x20) < uVar5) {
                dVar2 = *(double *)((longlong)dVar2 + 0x18);
            }
            else {
                local_res10[0] = dVar2;
                dVar2 = *(double *)((longlong)dVar2 + 0x10);
            }
        }
        if ((local_res10[0] == dVar1) || (uVar5 < *(uint *)((longlong)local_res10[0] + 0x20))) {
            local_res10[0] = dVar1;
        }
        if (local_res10[0] == dVar1) {
            uVar5 = 0;
        }
        else {
            uVar5 = (uint)(*(int *)((longlong)local_res10[0] + 0x24) != 0);
        }
    }
    puVar3 = *(uint **)(param_1 + 0x10);
    puVar3[2] = 1;
    *puVar3 = uVar5;
    LAB_14065cc5f:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14065cc80(undefined8 param_1)

{
    undefined4 *puVar1;
    longlong lVar2;

    puVar1 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar1 != (undefined4 *)0x0) {
        lVar2 = FUN_1403d90d0(DAT_140c65898,*puVar1);
        if ((lVar2 != 0) && (lVar2 == *(longlong *)(DAT_140c65898 + 0x78))) {
            FUN_140008410(DAT_140c65898 + 0x73d0);
        }
    }
    return 0;
}



undefined8 FUN_14065cf80(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong *plVar3;
    double *pdVar4;
    ulonglong uVar5;
    int iVar6;

    lVar2 = FUN_1406622c0();
    if (lVar2 != 0) {
        lVar2 = FUN_1403d90d0(DAT_140c65898);
        if (lVar2 != 0) {
            iVar6 = 0;
            if (lVar2 != *(longlong *)(DAT_140c65898 + 0x78)) {
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                *puVar1 = 0;
                *(undefined4 *)(puVar1 + 1) = 3;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
            uVar5 = (ulonglong)*(uint *)(DAT_140c65898 + 0xc4);
            if (*(uint *)(DAT_140c65898 + 0xc4) != 0) {
                plVar3 = *(longlong **)(DAT_140c65898 + 200);
                iVar6 = 0;
                do {
                    if (*plVar3 != 0) {
                        iVar6 = iVar6 + 1;
                    }
                    plVar3 = plVar3 + 1;
                    uVar5 = uVar5 - 1;
                } while (uVar5 != 0);
            }
            pdVar4 = *(double **)(param_1 + 0x10);
            *pdVar4 = (double)iVar6;
            goto LAB_14065d01c;
        }
    }
    pdVar4 = *(double **)(param_1 + 0x10);
    *pdVar4 = 0.0;
    LAB_14065d01c:
    *(undefined4 *)(pdVar4 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14065e6c0(undefined8 param_1)

{
    int iVar1;
    undefined4 *puVar2;
    longlong lVar3;

    puVar2 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar2 != (undefined4 *)0x0) {
        lVar3 = FUN_1403d90d0(DAT_140c65898,*puVar2);
        if (lVar3 != 0) {
            iVar1 = FUN_140056d60(param_1,2);
            if (iVar1 != 0) {
                FUN_1404acfa0();
            }
        }
    }
    return 0;
}



undefined8 FUN_14065e720(undefined8 param_1)

{
    undefined4 *puVar1;
    longlong lVar2;

    puVar1 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar1 != (undefined4 *)0x0) {
        lVar2 = FUN_1403d90d0(DAT_140c65898,*puVar1);
        if (lVar2 != 0) {
            FUN_1404ad250();
        }
    }
    return 0;
}



undefined8 FUN_14065e760(longlong param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    longlong lVar3;
    undefined local_28 [8];
    longlong local_20;

    lVar1 = FUN_1406622c0();
    if ((((lVar1 == 0) || (lVar1 = FUN_1403d90d0(DAT_140c65898), lVar1 == 0)) ||
         (*(longlong *)(lVar1 + 0x18) == 0)) || (*(int *)(*(longlong *)(lVar1 + 0x18) + 0x74) == 0)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    lVar1 = FUN_1404af650(DAT_140c659d0);
    if (lVar1 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar2 = FUN_14034bdd0(**(longlong **)(lVar1 + 0x10),
                          *(undefined4 *)(**(longlong **)(lVar1 + 0x10) + 4));
    lVar1 = FUN_14018f0e0(local_28,uVar2);
    if (*(longlong *)(lVar1 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (*(char *)(*(longlong *)(lVar1 + 8) + lVar3) != '\0');
        FUN_140058710(param_1);
    }
    if (local_20 == 0) {
        return 1;
    }
    FUN_14018b900(local_20,0);
    return 1;
}



ulonglong FUN_14065eec0(undefined8 param_1)

{
    int iVar1;
    int iVar2;
    undefined4 *puVar3;
    longlong lVar4;
    ulonglong uVar5;
    longlong *plVar6;

    puVar3 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar3 == (undefined4 *)0x0) {
        return 0;
    }
    lVar4 = FUN_1403d90d0(DAT_140c65898,*puVar3);
    if (lVar4 == 0) {
        return 0;
    }
    uVar5 = FUN_140056d60(param_1,2);
    if ((int)uVar5 == 0) {
        return uVar5;
    }
    iVar1 = FUN_140056d60(param_1);
    if ((((iVar1 != 0) && (*(longlong *)(lVar4 + 0x18) != 0)) &&
         (*(int *)(*(longlong *)(lVar4 + 0x18) + 0x70) != 0)) &&
        (((plVar6 = (longlong *)FUN_1403ac530(), plVar6 != (longlong *)0x0 &&
                                                 ((*(byte *)(*plVar6 + 4) & 4) == 0)) &&
          (iVar2 = FUN_1404ab430(plVar6,uVar5 & 0xffffffff), iVar2 != 0)))) {
        FUN_1404ab040(plVar6,lVar4,uVar5 & 0xffffffff,iVar1,0);
        return 1;
    }
    return 0;
}



undefined4 FUN_14065f3b0(longlong param_1)

{
    int iVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    uint uVar4;
    undefined4 *puVar5;
    longlong lVar6;
    undefined8 uVar7;
    longlong lVar8;
    undefined8 *puVar9;
    uint *puVar10;
    uint uVar11;
    ulonglong uVar12;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    puVar5 = (undefined4 *)FUN_1406622c0(param_1,1);
    if ((puVar5 == (undefined4 *)0x0) || (lVar6 = FUN_1403d90d0(DAT_140c65898,*puVar5), lVar6 == 0)) {
        return 0;
    }
    if ((*(longlong *)(lVar6 + 0x18) == 0) ||
        (iVar1 = *(int *)(*(longlong *)(lVar6 + 0x18) + 0x44), iVar1 == 0)) {
        return 0;
    }
    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400578c0(param_1);
    lVar6 = param_1;
    local_20 = uVar3;
    if (iVar1 < 1) {
        if (iVar1 == -1) {
            uVar4 = FUN_140242cf0();
            uVar11 = 0;
            if (uVar4 != 0) {
                do {
                    puVar10 = (uint *)FUN_140242da0(uVar11);
                    if (((puVar10 != (uint *)0x0) && (lVar6 = FUN_1405be150(), lVar6 != 0)) &&
                        (((*(uint *)(lVar6 + 0x10) & 4) != 0 || ((*(uint *)(lVar6 + 0x10) & 8) != 0)))) {
                        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                            FUN_14005e2c0(param_1);
                        }
                        puVar2 = *(undefined8 **)(param_1 + 0x10);
                        uVar7 = FUN_14005c1b0(param_1,0,0);
                        *(undefined4 *)(puVar2 + 1) = 5;
                        *puVar2 = uVar7;
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                        uVar3 = FUN_1400578c0(param_1);
                        uVar12 = (ulonglong)*puVar10;
                        puVar9 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
                        puVar2 = *(undefined8 **)(param_1 + 0x10);
                        *puVar2 = *puVar9;
                        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar9 + 1);
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                        FUN_1400f06f0(param_1,puVar2,L"eTradeskillId",uVar12 & 0xffffffff);
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                        FUN_14034bdd0();
                        puVar9 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
                        puVar2 = *(undefined8 **)(param_1 + 0x10);
                        *puVar2 = *puVar9;
                        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar9 + 1);
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                        FUN_1400f0870(param_1);
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                        FUN_1400fb1d0(&local_28);
                        FUN_1400579e0();
                    }
                    uVar11 = uVar11 + 1;
                    lVar6 = local_18;
                    uVar3 = local_20;
                } while (uVar11 < uVar4);
            }
        }
    }
    else {
        lVar8 = FUN_1405be150();
        if (lVar8 == 0) {
            uVar3 = 0;
            goto LAB_14065f6fd;
        }
        puVar2 = *(undefined8 **)(param_1 + 0x10);
        *puVar2 = 0x3ff0000000000000;
        *(undefined4 *)(puVar2 + 1) = 3;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar2 = *(undefined8 **)(param_1 + 0x10);
        uVar7 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar2 + 1) = 5;
        *puVar2 = uVar7;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        uVar3 = FUN_1400578c0(param_1);
        puVar9 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
        puVar2 = *(undefined8 **)(param_1 + 0x10);
        *puVar2 = *puVar9;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar9 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f06f0(param_1,puVar2,L"eTradeskillId",iVar1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        uVar7 = FUN_14034bdd0();
        puVar9 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
        puVar2 = *(undefined8 **)(param_1 + 0x10);
        *puVar2 = *puVar9;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar9 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f0870(param_1,puVar2,L"strName",uVar7);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        FUN_1400fb1d0(&local_28,uVar3);
        FUN_1400579e0(param_1);
        lVar6 = local_18;
        uVar3 = local_20;
    }
    puVar9 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0xa0),uVar3);
    puVar2 = *(undefined8 **)(lVar6 + 0x10);
    uVar3 = 1;
    *puVar2 = *puVar9;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar9 + 1);
    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
    LAB_14065f6fd:
    FUN_1400579e0(lVar6);
    return uVar3;
}



undefined8 FUN_14065ff90(longlong param_1)

{
    undefined8 *puVar1;
    longlong *plVar2;
    ulonglong uVar3;
    undefined4 uVar4;
    int iVar5;
    undefined8 uVar6;
    undefined4 *puVar7;
    longlong lVar8;
    undefined8 *puVar9;
    ulonglong uVar10;
    longlong local_38;
    ulonglong local_30;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar6 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar6;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400578c0(param_1);
    local_20 = uVar4;
    puVar7 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (((puVar7 != (undefined4 *)0x0) && (lVar8 = FUN_1403d90d0(DAT_140c65898,*puVar7), lVar8 != 0))
        && (lVar8 == *(longlong *)(DAT_140c65898 + 0x78))) {
        uVar10 = 0;
        local_30 = 0;
        local_38 = 0;
        FUN_1403d6710(DAT_140c65898 + 0xb8,&local_38);
        uVar3 = local_30;
        lVar8 = local_38;
        if (local_30 != 0) {
            do {
                plVar2 = *(longlong **)(lVar8 + uVar10 * 8);
                if (((plVar2 != (longlong *)0x0) &&
                     (iVar5 = (**(code **)(*plVar2 + 0x60))(plVar2), iVar5 != 0)) &&
                    ((iVar5 = (**(code **)(*DAT_140c65bc0 + 8))(DAT_140c65bc0,plVar2[8]), iVar5 != 0 &&
                                                                                          (iVar5 = FUN_140415d60(param_1,plVar2), iVar5 != 0)))) {
                    FUN_1400fb470(&local_28);
                    *(longlong *)(local_18 + 0x10) = *(longlong *)(local_18 + 0x10) + -0x10;
                    param_1 = local_18;
                }
                uVar10 = uVar10 + 1;
                uVar4 = local_20;
            } while (uVar10 < uVar3);
        }
        puVar9 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar4);
        puVar1 = *(undefined8 **)(param_1 + 0x10);
        *puVar1 = *puVar9;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar9 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        if (lVar8 != 0) {
            (**(code **)(*(longlong *)(lVar8 + -0x10) + 8))(lVar8 + -0x10);
        }
    }
    FUN_1400579e0(param_1);
    return 1;
}



// WARNING: Removing unreachable block (ram,0x0001406604f3)

undefined8 FUN_140660290(longlong param_1)

{
    short sVar1;
    undefined8 *puVar2;
    uint *puVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    int iVar6;
    longlong lVar7;
    undefined4 *puVar8;
    longlong lVar9;
    undefined8 uVar10;
    undefined8 *puVar11;
    undefined2 *puVar12;
    short *psVar13;
    undefined *puVar14;
    ulonglong uVar15;
    ulonglong uVar16;
    ulonglong uVar17;
    longlong lVar18;
    undefined2 *puVar19;
    undefined local_58 [8];
    undefined2 *local_50;
    undefined2 *local_48;
    undefined2 *local_40;
    undefined local_38 [8];
    longlong local_30;

    uVar17 = 0;
    uVar16 = uVar17;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar15 = uVar17;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar15 * 8) + 400) ==
                param_1) {
                uVar16 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar15 * 8);
                break;
            }
            uVar15 = (ulonglong)((int)uVar15 + 1);
        } while (uVar15 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    uVar4 = FUN_1400f26a0(uVar16 + 0x180,2);
    lVar7 = FUN_1402259c0(uVar4);
    if (lVar7 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar8 = (undefined4 *)FUN_1406622c0(param_1,1);
    if ((puVar8 == (undefined4 *)0x0) || (lVar9 = FUN_1403d90d0(DAT_140c65898,*puVar8), lVar9 == 0)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar10 = FUN_14005c1b0(param_1,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar10;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400578c0(param_1);
    iVar6 = (**(code **)(*DAT_140c659a0 + 0x18))(DAT_140c659a0,lVar9,uVar4,0,0,0);
    puVar11 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar5)
            ;
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = *puVar11;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar11 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar9 = FUN_14018f0e0(local_58,L"bIsMet");
    if (*(longlong *)(lVar9 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar18 = -1;
        do {
            lVar18 = lVar18 + 1;
        } while (*(char *)(*(longlong *)(lVar9 + 8) + lVar18) != '\0');
        FUN_140058710(param_1);
    }
    if (local_50 != (undefined2 *)0x0) {
        FUN_14018b900(local_50,0);
    }
    puVar3 = *(uint **)(param_1 + 0x10);
    puVar3[2] = 1;
    *puVar3 = (uint)(iVar6 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar10 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar10,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    puVar12 = (undefined2 *)FUN_14018b280(0x10);
    local_40 = puVar12 + 8;
    if (puVar12 != (undefined2 *)0x0) {
        *puVar12 = 0;
    }
    puVar19 = puVar12;
    local_50 = puVar12;
    local_48 = puVar12;
    if ((*(int *)(lVar7 + 0x38) == 0) || (psVar13 = (short *)FUN_14034bdd0(), psVar13 == (short *)0x0)
            ) {
        LAB_140660537:
        if (((*(int *)(lVar7 + 8) == 5) &&
             (lVar9 = FUN_1401ff120(*(undefined4 *)(lVar7 + 0x20)), lVar9 != 0)) &&
            (lVar9 = FUN_14034bdd0(), lVar9 != 0)) {
            uVar10 = FUN_14034bdd0();
            puVar14 = (undefined *)FUN_14018efa0(local_38,lVar9,*(undefined4 *)(lVar7 + 0x2c),uVar10);
            if (puVar14 != local_58) {
                FUN_14001c480(local_58,*(undefined8 *)(puVar14 + 8),*(undefined8 *)(puVar14 + 0x10));
                puVar12 = local_48;
                puVar19 = local_50;
            }
            if (local_30 != 0) {
                FUN_14018b900(local_30,0);
            }
        }
        if (puVar19 == puVar12) goto LAB_1406605f8;
    }
    else {
        sVar1 = *psVar13;
        while (sVar1 != 0) {
            uVar17 = uVar17 + 1;
            sVar1 = psVar13[uVar17];
        }
        if ((longlong)(uVar17 * 2) >> 1 == 0) {
            FUN_1407db590(puVar12,psVar13,0);
            goto LAB_140660537;
        }
        FUN_14001c310(local_58,psVar13);
        puVar12 = local_48;
        puVar19 = local_50;
        if (local_50 == local_48) goto LAB_140660537;
    }
    puVar11 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar5)
            ;
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = *puVar11;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar11 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f0870(param_1,puVar2,L"strText",puVar19);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    LAB_1406605f8:
    puVar11 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar5)
            ;
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = *puVar11;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar11 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (puVar19 != (undefined2 *)0x0) {
        FUN_14018b900(puVar19,0);
    }
    FUN_1400579e0(param_1);
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140660680(longlong param_1)

{
    longlong *plVar1;
    undefined8 *puVar2;
    double *pdVar3;
    bool bVar4;
    uint uVar5;
    int iVar6;
    int iVar7;
    undefined8 uVar8;
    int *piVar9;
    longlong lVar10;
    uint uVar11;

    if (DAT_140c63838 == (code *)0x0) {
        if (_DAT_140c63e44 == 0) {
            iVar6 = FUN_1402490e0();
            if (iVar6 < 0) {
                uVar5 = 0;
            }
            else {
                uVar5 = (**(code **)(*DAT_140c64330 + 0x28))();
            }
        }
        else {
            uVar5 = 0;
        }
    }
    else {
        uVar5 = (*DAT_140c63838)(&PTR_u_Vital_140a6e030,DAT_140c63858);
    }
    plVar1 = *(longlong **)(DAT_140c65898 + 0x6d90);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar8 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    uVar11 = 0;
    *puVar2 = uVar8;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (uVar5 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if (_DAT_140c63e44 == 0) {
                    iVar6 = FUN_1402490e0();
                    if (iVar6 < 0) {
                        piVar9 = (int *)0x0;
                    }
                    else {
                        piVar9 = (int *)(**(code **)(*DAT_140c64330 + 0x20))(DAT_140c64330,uVar11);
                    }
                }
                else {
                    piVar9 = (int *)0x0;
                }
            }
            else {
                piVar9 = (int *)(*DAT_140c63848)(&PTR_u_Vital_140a6e030,uVar11,DAT_140c63858);
            }
            iVar6 = *piVar9;
            pdVar3 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar3 + 1) = 3;
            *pdVar3 = (double)iVar6;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar2 = *(undefined8 **)(param_1 + 0x10);
            uVar8 = FUN_14005c1b0(param_1,0,0);
            *(undefined4 *)(puVar2 + 1) = 5;
            *puVar2 = uVar8;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            bVar4 = true;
            if (((plVar1 != (longlong *)0x0) && (iVar7 = FUN_1406621f0(), iVar7 < 0xb)) &&
                (lVar10 = (**(code **)(*plVar1 + 0x48))(plVar1,iVar7), lVar10 != 0)) {
                bVar4 = false;
                FUN_1400f0090();
            }
            if (*(int *)(DAT_140c65b98 + 0x10c) == 4) {
                if ((DAT_140dc4af0 & 1) == 0) {
                    DAT_140dc4af0 = DAT_140dc4af0 | 1;
                    if (DAT_140c63840 == (code *)0x0) {
                        if ((_DAT_140c638ac == 0) && (iVar7 = FUN_1401fffc0(), -1 < iVar7)) {
                            lVar10 = (**(code **)(*DAT_140c64c58 + 0x18))(DAT_140c64c58,0x363);
                            goto LAB_14066088d;
                        }
                    }
                    else {
                        lVar10 = (*DAT_140c63840)(&PTR_u_GameFormula_140a6a408,0x363,DAT_140c63858);
                        LAB_14066088d:
                        if (lVar10 != 0) {
                            DAT_140dc4af4 = *(int *)(lVar10 + 8);
                            goto LAB_1406608b9;
                        }
                    }
                    DAT_140dc4af4 = 0;
                }
                LAB_1406608b9:
                if ((DAT_140dc4af0 & 2) == 0) {
                    DAT_140dc4af0 = DAT_140dc4af0 | 2;
                    if (DAT_140dc4af4 == 2) {
                        DAT_140dc4af8 = 0x18;
                    }
                    else {
                        DAT_140dc4af8 = (DAT_140dc4af4 == 1) + 0x16;
                    }
                }
                if (iVar6 != DAT_140dc4af8) goto LAB_140660908;
                FUN_14034bdd0(DAT_140dc4af4,0x899de);
                LAB_14066091b:
                FUN_1400f0090(param_1);
            }
            else {
                LAB_140660908:
                if (bVar4) {
                    FUN_14034bdd0();
                    goto LAB_14066091b;
                }
            }
            lVar10 = *(longlong *)(param_1 + 0x10);
            FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar10,lVar10 + -0x20,lVar10 + -0x10);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
            uVar11 = uVar11 + 1;
        } while (uVar11 < uVar5);
    }
    return 1;
}



undefined8 FUN_140660980(longlong param_1)

{
    undefined4 uVar1;
    int iVar2;
    undefined4 *puVar3;
    longlong lVar4;
    longlong lVar5;
    undefined local_28 [8];
    longlong local_20;

    puVar3 = (undefined4 *)FUN_1406622c0(param_1,1);
    if ((puVar3 != (undefined4 *)0x0) && (lVar4 = FUN_1403d90d0(DAT_140c65898,*puVar3), lVar4 != 0)) {
        uVar1 = FUN_140056d60(param_1,2);
        iVar2 = FUN_1406621f0(uVar1);
        if (((iVar2 < 0xb) &&
             (((*(longlong *)(lVar4 + 0xe0) != 0 &&
                (*(int *)(*(longlong *)(lVar4 + 0xe0) + 100 + (longlong)iVar2 * 4) < 0x1f)) &&
               (lVar4 = FUN_140249340(), lVar4 != 0)))) && (lVar4 = FUN_14034bdd0(), lVar4 != 0)) {
            lVar4 = FUN_14018f0e0(local_28,lVar4);
            if (*(longlong *)(lVar4 + 8) == 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            }
            else {
                lVar5 = -1;
                do {
                    lVar5 = lVar5 + 1;
                } while (*(char *)(*(longlong *)(lVar4 + 8) + lVar5) != '\0');
                FUN_140058710(param_1);
            }
            if (local_20 == 0) {
                return 1;
            }
            FUN_14018b900(local_20,0);
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140660a90(undefined8 param_1)

{
    int iVar1;
    undefined4 *puVar2;
    longlong lVar3;

    puVar2 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (((puVar2 != (undefined4 *)0x0) && (lVar3 = FUN_1403d90d0(DAT_140c65898,*puVar2), lVar3 != 0))
        && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        iVar1 = FUN_1403b48b0(lVar3);
        if (((iVar1 != 0) && (iVar1 = FUN_1403b48b0(*(undefined8 *)(DAT_140c65898 + 0x78)), iVar1 != 0))
            && (iVar1 = FUN_14045a950(*(undefined8 *)(DAT_140c65898 + 0x78),*(undefined4 *)(lVar3 + 8)),
                iVar1 == 0)) {
            return 0;
        }
        FUN_14047ea60(lVar3);
    }
    return 0;
}



undefined8 FUN_140660bd0(longlong param_1)

{
    undefined4 *puVar1;
    longlong lVar2;
    longlong lVar3;
    undefined local_28 [8];
    longlong local_20;

    puVar1 = (undefined4 *)FUN_1406622c0(param_1,1);
    if ((((puVar1 == (undefined4 *)0x0) || (lVar2 = FUN_1403d90d0(DAT_140c65898,*puVar1), lVar2 == 0))
         || (*(short **)(lVar2 + 0x90) == (short *)0x0)) || (**(short **)(lVar2 + 0x90) == 0)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    lVar2 = FUN_14018f0e0(local_28);
    if (*(longlong *)(lVar2 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar3) != '\0');
        FUN_140058710(param_1);
    }
    if (local_20 == 0) {
        return 1;
    }
    FUN_14018b900(local_20,0);
    return 1;
}



undefined8 FUN_140660c80(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1406622c0();
    if (lVar3 != 0) {
        lVar3 = FUN_1403d90d0(DAT_140c65898);
        if ((lVar3 != 0) && (iVar1 = *(int *)(lVar3 + 0x98), iVar1 != 0)) {
            pdVar2 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)iVar1;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140660d00(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    byte bVar3;
    longlong lVar4;

    lVar4 = FUN_1406622c0();
    if (lVar4 != 0) {
        lVar4 = FUN_1403d90d0(DAT_140c65898);
        if (lVar4 != 0) {
            if ((*(longlong *)(DAT_140c65898 + 0x6c50) == 0) ||
                (bVar3 = 1,
                        *(longlong *)(*(longlong *)(DAT_140c65898 + 0x6c50) + 0x48) !=
                        *(longlong *)(&DAT_000018a0 + lVar4))) {
                bVar3 = 0;
            }
            puVar1 = *(uint **)(param_1 + 0x10);
            puVar1[2] = 1;
            *puVar1 = (uint)bVar3;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    *puVar2 = 0;
    puVar2[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140660da0(longlong param_1)

{
    ulonglong *puVar1;
    uint *puVar2;
    undefined4 *puVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    ulonglong uVar7;
    bool bVar8;

    lVar5 = FUN_1406622c0();
    if ((lVar5 == 0) || (lVar6 = FUN_1403d90d0(DAT_140c65898), lVar5 = DAT_140c65898, lVar6 == 0)) {
        puVar3 = *(undefined4 **)(param_1 + 0x10);
        *puVar3 = 0;
        puVar3[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar7 = (**(code **)(DAT_140c65898 + 0x68f0))(lVar6 + 0x1a0);
    puVar1 = *(ulonglong **)
            (*(longlong *)(lVar5 + 0x68e8) + (uVar7 % *(ulonglong *)(lVar5 + 0x68e0)) * 8);
    do {
        if (puVar1 == (ulonglong *)0x0) {
            LAB_140660e3f:
            bVar8 = false;
            LAB_140660e50:
            puVar2 = *(uint **)(param_1 + 0x10);
            puVar2[2] = 1;
            *puVar2 = (uint)bVar8;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
        if ((uVar7 == *puVar1) && (iVar4 = (**(code **)(lVar5 + 0x68f8))(lVar6 + 0x1a0), iVar4 != 0)) {
            if (puVar1 + 4 != (ulonglong *)0x0) {
                bVar8 = *(int *)(puVar1[4] + 0xd0) == 1;
                goto LAB_140660e50;
            }
            goto LAB_140660e3f;
        }
        puVar1 = (ulonglong *)puVar1[1];
    } while( true );
}



undefined8 FUN_140660ed0(longlong param_1)

{
    ulonglong *puVar1;
    uint *puVar2;
    undefined4 *puVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    ulonglong uVar7;
    bool bVar8;

    lVar5 = FUN_1406622c0();
    if ((lVar5 == 0) || (lVar6 = FUN_1403d90d0(DAT_140c65898), lVar5 = DAT_140c65898, lVar6 == 0)) {
        puVar3 = *(undefined4 **)(param_1 + 0x10);
        *puVar3 = 0;
        puVar3[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar7 = (**(code **)(DAT_140c65898 + 0x68f0))(lVar6 + 0x1a0);
    puVar1 = *(ulonglong **)
            (*(longlong *)(lVar5 + 0x68e8) + (uVar7 % *(ulonglong *)(lVar5 + 0x68e0)) * 8);
    do {
        if (puVar1 == (ulonglong *)0x0) {
            LAB_140660f6f:
            bVar8 = false;
            LAB_140660f80:
            puVar2 = *(uint **)(param_1 + 0x10);
            puVar2[2] = 1;
            *puVar2 = (uint)bVar8;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
        if ((uVar7 == *puVar1) && (iVar4 = (**(code **)(lVar5 + 0x68f8))(), iVar4 != 0)) {
            if (puVar1 + 4 != (ulonglong *)0x0) {
                iVar4 = *(int *)(puVar1[4] + 0xd0);
                if (iVar4 == 3) {
                    bVar8 = true;
                }
                else {
                    bVar8 = iVar4 == 4;
                }
                goto LAB_140660f80;
            }
            goto LAB_140660f6f;
        }
        puVar1 = (ulonglong *)puVar1[1];
    } while( true );
}



undefined8 FUN_140661000(longlong param_1)

{
    ulonglong *puVar1;
    uint *puVar2;
    undefined4 *puVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    ulonglong uVar7;
    bool bVar8;

    lVar5 = FUN_1406622c0();
    if ((lVar5 == 0) || (lVar6 = FUN_1403d90d0(DAT_140c65898), lVar5 = DAT_140c65898, lVar6 == 0)) {
        puVar3 = *(undefined4 **)(param_1 + 0x10);
        *puVar3 = 0;
        puVar3[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar7 = (**(code **)(DAT_140c65898 + 0x68f0))(lVar6 + 0x1a0);
    puVar1 = *(ulonglong **)
            (*(longlong *)(lVar5 + 0x68e8) + (uVar7 % *(ulonglong *)(lVar5 + 0x68e0)) * 8);
    do {
        if (puVar1 == (ulonglong *)0x0) {
            LAB_14066109f:
            bVar8 = false;
            LAB_1406610b0:
            puVar2 = *(uint **)(param_1 + 0x10);
            puVar2[2] = 1;
            *puVar2 = (uint)bVar8;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
        if ((uVar7 == *puVar1) && (iVar4 = (**(code **)(lVar5 + 0x68f8))(), iVar4 != 0)) {
            if (puVar1 + 4 != (ulonglong *)0x0) {
                iVar4 = *(int *)(puVar1[4] + 0xd0);
                if (iVar4 == 0) {
                    bVar8 = true;
                }
                else {
                    bVar8 = iVar4 == 4;
                }
                goto LAB_1406610b0;
            }
            goto LAB_14066109f;
        }
        puVar1 = (ulonglong *)puVar1[1];
    } while( true );
}



undefined8 FUN_140661240(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    int iVar3;
    longlong lVar4;

    lVar4 = FUN_1406622c0();
    if (lVar4 != 0) {
        lVar4 = FUN_1403d90d0(DAT_140c65898);
        if (lVar4 != 0) {
            iVar3 = FUN_1403b48b0(lVar4);
            puVar1 = *(uint **)(param_1 + 0x10);
            puVar1[2] = 1;
            *puVar1 = (uint)(iVar3 != 0);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    *puVar2 = 0;
    puVar2[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406612c0(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    byte bVar3;
    longlong lVar4;

    lVar4 = FUN_1406622c0();
    if ((lVar4 != 0) && (lVar4 = FUN_1403d90d0(DAT_140c65898), lVar4 != 0)) {
        bVar3 = 0;
        if (((*(longlong *)(lVar4 + 0x18) == 0) ||
             ((*(uint *)(*(longlong *)(lVar4 + 0x18) + 0x90) & 0x40000000) == 0)) &&
            ((*(int *)(lVar4 + 0x124) != 0 || (*(longlong *)(lVar4 + 0x128) != 0)))) {
            bVar3 = 1;
        }
        puVar1 = *(uint **)(param_1 + 0x10);
        puVar1[2] = 1;
        *puVar1 = (uint)bVar3;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    *puVar2 = 0;
    puVar2[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140661360(longlong param_1)

{
    longlong lVar1;
    uint *puVar2;
    undefined4 *puVar3;
    byte bVar4;
    longlong lVar5;

    lVar5 = FUN_1406622c0();
    if (lVar5 == 0) {
        LAB_1406613fd:
        puVar3 = *(undefined4 **)(param_1 + 0x10);
        *puVar3 = 0;
        puVar3[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    lVar5 = FUN_1403d90d0(DAT_140c65898);
    if (lVar5 == 0) goto LAB_1406613fd;
    if (*(int *)(lVar5 + 0x130) == 0) {
        lVar1 = *(longlong *)(DAT_140c65898 + 0x78);
        if (lVar1 != 0) {
            if (*(int *)(lVar5 + 0x124) == *(int *)(lVar1 + 8)) goto LAB_14066139c;
            if ((*(longlong *)(lVar5 + 0x128) != 0) &&
                (bVar4 = 1, *(longlong *)(&DAT_000018a0 + lVar1) == *(longlong *)(lVar5 + 0x128)))
                goto LAB_1406613db;
        }
        bVar4 = 0;
    }
    else {
        LAB_14066139c:
        bVar4 = 1;
    }
    LAB_1406613db:
    puVar2 = *(uint **)(param_1 + 0x10);
    puVar2[2] = 1;
    *puVar2 = (uint)bVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140661420(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    int iVar3;
    longlong lVar4;

    lVar4 = FUN_1406622c0();
    if (lVar4 != 0) {
        lVar4 = FUN_1403d90d0(DAT_140c65898);
        if (lVar4 != 0) {
            iVar3 = FUN_14045bd30(lVar4);
            puVar1 = *(uint **)(param_1 + 0x10);
            puVar1[2] = 1;
            *puVar1 = (uint)(iVar3 == 0);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    *puVar2 = 0;
    puVar2[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406614b0(longlong param_1)

{
    uint *puVar1;
    byte bVar2;
    int iVar3;
    undefined4 *puVar4;
    longlong lVar5;

    puVar4 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar4 != (undefined4 *)0x0) {
        lVar5 = FUN_1403d90d0(DAT_140c65898,*puVar4);
        if (lVar5 != 0) {
            iVar3 = FUN_140460250(lVar5);
            bVar2 = 1;
            if (iVar3 != 0) goto LAB_1406614f2;
        }
    }
    bVar2 = 0;
    LAB_1406614f2:
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)bVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140661520(longlong param_1)

{
    uint *puVar1;
    byte bVar2;
    undefined4 *puVar3;
    longlong lVar4;

    puVar3 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar3 != (undefined4 *)0x0) {
        lVar4 = FUN_1403d90d0(DAT_140c65898,*puVar3);
        if ((lVar4 != 0) && (bVar2 = 1, (*(uint *)(lVar4 + 0x24) & 0x2000) == 0)) goto LAB_14066155f;
    }
    bVar2 = 0;
    LAB_14066155f:
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)bVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140661590(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    int iVar3;
    longlong lVar4;

    lVar4 = FUN_1406622c0();
    if (lVar4 != 0) {
        lVar4 = FUN_1403d90d0(DAT_140c65898);
        if (lVar4 != 0) {
            iVar3 = FUN_14043edc0(DAT_140c65898,*(undefined4 *)(DAT_140c65898 + 0x7150),
                                  *(undefined4 *)(lVar4 + 0x17e8));
            puVar1 = *(uint **)(param_1 + 0x10);
            puVar1[2] = 1;
            *puVar1 = (uint)(iVar3 != 0);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    *puVar2 = 0;
    puVar2[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140661620(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    undefined4 uVar3;
    int iVar4;
    longlong lVar5;

    lVar5 = FUN_1406622c0();
    if (lVar5 != 0) {
        lVar5 = FUN_1403d90d0(DAT_140c65898);
        if (lVar5 != 0) {
            uVar3 = FUN_140056d60(param_1);
            iVar4 = FUN_1406020b0(DAT_140c65898 + 0x6c10,uVar3,*(undefined4 *)(lVar5 + 8));
            puVar1 = *(uint **)(param_1 + 0x10);
            puVar1[2] = 1;
            *puVar1 = (uint)(iVar4 != 0);
            goto LAB_14066169d;
        }
    }
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    *puVar2 = 0;
    puVar2[2] = 1;
    LAB_14066169d:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406616c0(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    double *pdVar3;
    undefined4 *puVar4;
    longlong lVar5;
    ulonglong uVar6;
    int *piVar7;

    puVar4 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar4 != (undefined4 *)0x0) {
        lVar5 = FUN_1403d90d0(DAT_140c65898,*puVar4);
        if (lVar5 != 0) {
            lVar2 = *(longlong *)(DAT_140c65898 + 0x6c50);
            if (lVar2 != 0) {
                uVar6 = 0;
                if (*(ulonglong *)(lVar2 + 0x78) != 0) {
                    piVar7 = (int *)(*(longlong *)(lVar2 + 0x70) + 4);
                    do {
                        if (*piVar7 == *(int *)(lVar5 + 8)) {
                            iVar1 = *(int *)(*(longlong *)(lVar2 + 0x70) + uVar6 * 8);
                            if (iVar1 != 0) {
                                pdVar3 = *(double **)(param_1 + 0x10);
                                *(undefined4 *)(pdVar3 + 1) = 3;
                                *pdVar3 = (double)iVar1;
                                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                                return 1;
                            }
                            break;
                        }
                        uVar6 = uVar6 + 1;
                        piVar7 = piVar7 + 2;
                    } while (uVar6 < *(ulonglong *)(lVar2 + 0x78));
                }
            }
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140661880(longlong param_1)

{
    uint *puVar1;
    byte bVar2;
    undefined4 *puVar3;
    longlong lVar4;

    puVar3 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar3 != (undefined4 *)0x0) {
        lVar4 = FUN_1403d90d0(DAT_140c65898,*puVar3);
        if (lVar4 != 0) {
            lVar4 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(lVar4 + 0xc0));
            if ((lVar4 != 0) && (bVar2 = 1, *(int *)(lVar4 + 0x80) == 3)) goto LAB_1406618d6;
        }
    }
    bVar2 = 0;
    LAB_1406618d6:
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)bVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140661a30(longlong param_1)

{
    double *pdVar1;
    int iVar2;
    int iVar3;
    undefined4 *puVar4;
    longlong lVar5;
    longlong *plVar6;
    int iVar7;

    iVar7 = 0;
    puVar4 = (undefined4 *)FUN_1406622c0(param_1,1);
    iVar3 = 0;
    if ((((puVar4 != (undefined4 *)0x0) &&
          (lVar5 = FUN_1403d90d0(DAT_140c65898,*puVar4), iVar3 = iVar7, lVar5 != 0)) &&
         (plVar6 = (longlong *)FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(lVar5 + 0xc0)), iVar3 = 0,
                 plVar6 != (longlong *)0x0)) &&
        ((iVar2 = (**(code **)(*plVar6 + 0x20))(plVar6), iVar3 = iVar7, iVar2 != 0 &&
                                                                        ((*(int *)(plVar6 + 0x10) - 3U & 0xfffffffb) == 0)))) {
        iVar3 = (**(code **)(*plVar6 + 0x40))(plVar6);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)iVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140661ae0(longlong param_1)

{
    uint *puVar1;
    byte bVar2;
    int iVar3;
    undefined4 *puVar4;
    longlong lVar5;
    longlong *plVar6;

    bVar2 = 1;
    puVar4 = (undefined4 *)FUN_1406622c0(param_1,1);
    if ((((puVar4 != (undefined4 *)0x0) && (lVar5 = FUN_1403d90d0(DAT_140c65898,*puVar4), lVar5 != 0))
         && (plVar6 = (longlong *)FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(lVar5 + 0xc0)),
            plVar6 != (longlong *)0x0)) &&
        (((iVar3 = (**(code **)(*plVar6 + 0x20))(plVar6), iVar3 != 0 &&
                                                          ((*(int *)(plVar6 + 0x10) - 3U & 0xfffffffb) == 0)) &&
          (bVar2 = 1, (*(byte *)(plVar6 + 5) & 1) != 0)))) {
        bVar2 = 0;
    }
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)bVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140661b90(longlong param_1)

{
    int iVar1;
    undefined4 *puVar2;
    longlong lVar3;
    longlong *plVar4;
    undefined8 uVar5;

    puVar2 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar2 != (undefined4 *)0x0) {
        lVar3 = FUN_1403d90d0(DAT_140c65898,*puVar2);
        if (lVar3 != 0) {
            plVar4 = (longlong *)FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(lVar3 + 0xc0));
            if (plVar4 != (longlong *)0x0) {
                iVar1 = (**(code **)(*plVar4 + 0x20))(plVar4);
                if ((iVar1 != 0) && (*(int *)(plVar4 + 0x10) == 7)) {
                    uVar5 = FUN_140649930(param_1,plVar4);
                    return uVar5;
                }
            }
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140661d20(longlong param_1)

{
    undefined4 *puVar1;
    longlong lVar2;
    undefined8 uVar3;

    puVar1 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar1 != (undefined4 *)0x0) {
        lVar2 = FUN_1403d90d0(DAT_140c65898,*puVar1);
        if ((lVar2 != 0) && (*(int *)(lVar2 + 0x80) == 0x18)) {
            lVar2 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(lVar2 + 0x2b0));
            if (lVar2 == 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
            uVar3 = FUN_140649930(param_1,lVar2);
            return uVar3;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined4 FUN_140661db0(longlong param_1)

{
    uint uVar1;
    undefined4 uVar2;
    undefined4 *puVar3;
    longlong lVar4;
    longlong lVar5;
    longlong *plVar6;
    undefined8 *puVar7;
    undefined2 *puVar8;
    longlong *plVar9;

    puVar3 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (((puVar3 != (undefined4 *)0x0) && (lVar4 = FUN_1403d90d0(DAT_140c65898,*puVar3), lVar4 != 0))
        && (*(int *)(lVar4 + 0x80) == 0x14)) {
        puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        if (((puVar7 < *(undefined8 **)(param_1 + 0x10)) && (puVar7 != &DAT_140a12138)) &&
            (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
            uVar1 = FUN_140056d60(param_1,2);
            if (3 < uVar1) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
        }
        else {
            uVar1 = 1;
        }
        lVar5 = FUN_14018b280(0x68,0);
        plVar9 = (longlong *)0x0;
        if (lVar5 != 0) {
            puVar8 = &DAT_140b7b704;
            if (*(undefined2 **)(lVar4 + 0x10) != (undefined2 *)0x0) {
                puVar8 = *(undefined2 **)(lVar4 + 0x10);
            }
            plVar6 = (longlong *)
                    FUN_14073e140(lVar5,puVar8,0,uVar1,4,*(undefined4 *)(lVar4 + 8),lVar4 + 0x1a0);
            if (plVar6 != (longlong *)0x0) {
                plVar9 = plVar6;
            }
        }
        uVar2 = FUN_14073eb30(param_1,plVar9);
        if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 8))(plVar9);
        }
        return uVar2;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Removing unreachable block (ram,0x000140661f67)

undefined8 FUN_140661f00(void)

{
    int iVar1;
    longlong lVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    code *local_18;
    undefined *local_10;

    lVar2 = FUN_1406622c0();
    uVar4 = 0;
    uVar3 = uVar4;
    if (lVar2 != 0) {
        uVar3 = FUN_1403d90d0(DAT_140c65898);
    }
    if (((DAT_140c65898 != 0) && (uVar3 != 0)) &&
        ((iVar1 = *(int *)(uVar3 + 0x80), iVar1 == 0x14 || (iVar1 == 0x17)))) {
        local_10 = &LAB_140400df0;
        local_18 = FUN_140661fa0;
        if ((iVar1 == 0x14) || (iVar1 == 0x17)) {
            uVar4 = (ulonglong)*(uint *)(uVar3 + 0x1a0);
        }
        FUN_1403f87b0(DAT_140c65898,uVar4,&local_18,*(undefined4 *)(uVar3 + 8));
    }
    return 0;
}



// WARNING: Removing unreachable block (ram,0x000140661fe9)

void FUN_140661fa0(int param_1,undefined8 param_2,undefined4 param_3)

{
    longlong lVar1;

    lVar1 = FUN_1403d90d0(DAT_140c65898,param_3);
    if ((lVar1 != 0) &&
        (((*(int *)(lVar1 + 0x80) == 0x14 || (*(int *)(lVar1 + 0x80) == 0x17)) &&
          (param_1 == *(int *)(lVar1 + 0x1a0))))) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"PlayerRealmName",&DAT_1409e9fcc,param_3,
                      param_2);
    }
    return;
}



undefined8 FUN_1406620a0(longlong param_1)

{
    uint *puVar1;
    byte bVar2;
    undefined4 *puVar3;
    longlong lVar4;

    puVar3 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar3 != (undefined4 *)0x0) {
        lVar4 = FUN_1403d90d0(DAT_140c65898,*puVar3);
        if ((lVar4 != 0) && (bVar2 = 1, (*(uint *)(lVar4 + 0x28) & 0x200000) != 0)) goto LAB_1406620df;
    }
    bVar2 = 0;
    LAB_1406620df:
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)bVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140662110(longlong param_1)

{
    byte bVar1;
    double *pdVar2;
    undefined8 *puVar3;
    undefined4 *puVar4;
    longlong lVar5;

    puVar4 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar4 != (undefined4 *)0x0) {
        lVar5 = FUN_1403d90d0(DAT_140c65898,*puVar4);
        if (lVar5 != 0) {
            bVar1 = *(byte *)(lVar5 + 0x1b2);
            pdVar2 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)(uint)bVar1;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_140662190(void)

{
    longlong lVar1;

    if (_DAT_140dc4ad4 != 0) {
        return DAT_140dc4ad0;
    }
    _DAT_140dc4ad4 = 1;
    lVar1 = FUN_140200220(0x525);
    if (lVar1 != 0) {
        DAT_140dc4ad0 = *(undefined4 *)(lVar1 + 0x18);
        return *(undefined4 *)(lVar1 + 0x18);
    }
    DAT_140dc4ad0 = 0;
    return 0;
}



undefined8 FUN_1406621f0(undefined4 param_1)

{
    switch(param_1) {
        case 5:
            return 0;
        case 6:
            return 1;
        case 7:
            return 2;
        case 8:
            return 3;
        case 9:
            return 4;
        case 10:
            return 5;
        case 0xb:
            return 6;
        default:
            return 0xb;
        case 0x10:
            return 7;
        case 0x1b:
            return 8;
        case 0x1c:
            return 9;
        case 0x1d:
            return 10;
    }
}



longlong FUN_1406622c0(longlong param_1,undefined4 param_2)

{
    int iVar1;
    char cVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 uVar6;
    undefined8 local_18;
    undefined4 local_10;

    plVar3 = (longlong *)FUN_1400580e0();
    if (*(int *)(plVar3 + 1) == 2) {
        lVar4 = *plVar3;
    }
    else {
        if (*(int *)(plVar3 + 1) != 7) {
            return 0;
        }
        lVar4 = *plVar3 + 0x30;
    }
    if (lVar4 != 0) {
        plVar3 = (longlong *)FUN_1400580e0(param_1,param_2);
        iVar1 = *(int *)(plVar3 + 1);
        if ((iVar1 == 5) || (iVar1 == 7)) {
            lVar4 = *(longlong *)(*plVar3 + 0x10);
        }
        else {
            lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xe0 + (longlong)iVar1 * 8);
        }
        if (lVar4 != 0) {
            plVar3 = *(longlong **)(param_1 + 0x10);
            *plVar3 = lVar4;
            *(undefined4 *)(plVar3 + 1) = 5;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            lVar4 = *(longlong *)(param_1 + 0x20);
            local_18 = FUN_140062650(param_1,"Game.Unit",9);
            local_10 = 4;
            FUN_14005e8e0(param_1,lVar4 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            uVar5 = FUN_1400586a0(param_1,0xffffffff);
            uVar6 = FUN_1400586a0(param_1,0xfffffffe);
            cVar2 = FUN_1400e2100(DAT_140c63650,uVar6,uVar5);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
            if (cVar2 != '\0') {
                plVar3 = (longlong *)FUN_1400580e0(param_1,param_2);
                if (*(int *)(plVar3 + 1) == 2) {
                    return *plVar3;
                }
                if (*(int *)(plVar3 + 1) == 7) {
                    return *plVar3 + 0x30;
                }
            }
        }
    }
    return 0;
}



undefined8 FUN_140662410(longlong param_1)

{
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong *plVar4;
    uint uVar5;
    longlong *plVar6;
    longlong lVar7;
    uint uVar8;
    uint uVar9;
    undefined8 local_18;
    undefined4 local_10;

    plVar3 = *(longlong **)(param_1 + 0x18);
    plVar4 = *(longlong **)(param_1 + 0x10);
    plVar6 = &DAT_140a12138;
    if (plVar3 < plVar4) {
        plVar6 = plVar3;
    }
    if (*(int *)(plVar6 + 1) == 2) {
        lVar7 = *plVar6;
        LAB_140662453:
        if (lVar7 != 0) {
            plVar6 = &DAT_140a12138;
            if (plVar3 < plVar4) {
                plVar6 = plVar3;
            }
            iVar2 = *(int *)(plVar6 + 1);
            if ((iVar2 == 5) || (iVar2 == 7)) {
                lVar7 = *(longlong *)(*plVar6 + 0x10);
            }
            else {
                lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xe0 + (longlong)iVar2 * 8);
            }
            if (lVar7 != 0) {
                *plVar4 = lVar7;
                *(undefined4 *)(plVar4 + 1) = 5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                lVar7 = *(longlong *)(param_1 + 0x20);
                local_18 = FUN_140062650(param_1,"Game.Unit",9);
                local_10 = 4;
                FUN_14005e8e0(param_1,lVar7 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                lVar7 = *(longlong *)(param_1 + 0x10);
                uVar8 = 0;
                uVar5 = 0;
                puVar1 = (undefined8 *)(lVar7 + -0x20);
                uVar9 = uVar5;
                if (((undefined8 *)(lVar7 + -0x10) != &DAT_140a12138) && (puVar1 != &DAT_140a12138)) {
                    uVar5 = FUN_14005ac20((undefined8 *)(lVar7 + -0x10),puVar1);
                    uVar9 = uVar8;
                }
                *(undefined8 **)(param_1 + 0x10) = puVar1;
                *(undefined4 *)(&DAT_ffffffffffffffe8 + lVar7) = 1;
                *(uint *)puVar1 = uVar9 & 0xffffff00 | (uint)(uVar5 != 0);
                goto LAB_140662537;
            }
        }
    }
    else if (*(int *)(plVar6 + 1) == 7) {
        lVar7 = *plVar6 + 0x30;
        goto LAB_140662453;
    }
    *(undefined4 *)plVar4 = 0;
    *(undefined4 *)(plVar4 + 1) = 1;
    LAB_140662537:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140662550(longlong param_1)

{
    int iVar1;
    int iVar2;
    uint *puVar3;
    undefined4 *puVar4;
    int *piVar5;
    int *piVar6;

    piVar5 = (int *)FUN_140056ab0(param_1,1,"Game.Unit");
    piVar6 = (int *)FUN_140056ab0(param_1,2);
    if ((piVar5 == (int *)0x0) || (piVar6 == (int *)0x0)) {
        puVar4 = *(undefined4 **)(param_1 + 0x10);
        *puVar4 = 0;
        puVar4[2] = 1;
    }
    else {
        iVar1 = *piVar6;
        puVar3 = *(uint **)(param_1 + 0x10);
        iVar2 = *piVar5;
        puVar3[2] = 1;
        *puVar3 = (uint)(iVar2 == iVar1);
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140663030(longlong param_1,longlong param_2)

{
    longlong lVar1;
    longlong *plVar2;
    undefined8 local_18;
    undefined4 local_10;

    if (param_2 == 0) {
        return 0;
    }
    plVar2 = (longlong *)FUN_140059170(param_1,8);
    *plVar2 = param_2;
    lVar1 = *(longlong *)(param_1 + 0x20);
    local_18 = FUN_140062650(param_1,"Game.Quest",10);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



undefined8 FUN_1406630c0(undefined8 param_1)

{
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    longlong *plVar5;
    longlong local_res10;

    plVar5 = (longlong *)FUN_140056ab0(param_1,1,"Game.Quest");
    if (plVar5 != (longlong *)0x0) {
        uVar1 = **(uint **)(*plVar5 + 8);
        if (uVar1 == DAT_140c65c38) {
            lVar2 = *(longlong *)(*DAT_140c65b80 + 8);
            local_res10 = lVar2;
            lVar3 = *(longlong *)(lVar2 + 8);
            while (lVar3 != 0) {
                if (*(uint *)(lVar3 + 0x20) < uVar1) {
                    lVar3 = *(longlong *)(lVar3 + 0x18);
                }
                else {
                    local_res10 = lVar3;
                    lVar3 = *(longlong *)(lVar3 + 0x10);
                }
            }
            if ((local_res10 == lVar2) || (uVar1 < *(uint *)(local_res10 + 0x20))) {
                local_res10 = lVar2;
            }
            if ((((local_res10 == lVar2) || (local_res10 == -0x28)) ||
                 ((*(uint *)(local_res10 + 0x6c) & 2) == 0)) ||
                ((iVar4 = FUN_1405518a0(*plVar5), iVar4 == 0 ||
                                                  (iVar4 = FUN_1405fbc40(*DAT_140c65b80,**(undefined4 **)(*plVar5 + 8)), iVar4 == 3)))) {
                DAT_140c65c38 = 0;
            }
        }
    }
    return 0;
}



undefined8 FUN_1406631a0(longlong param_1)

{
    uint uVar1;
    uint uVar2;
    uint *puVar3;
    longlong *plVar4;
    longlong *plVar5;

    plVar4 = (longlong *)FUN_140056ab0(param_1,1,"Game.Quest");
    plVar5 = (longlong *)FUN_140056ab0(param_1,2,"Game.Quest");
    if ((plVar4 != (longlong *)0x0) && (plVar5 != (longlong *)0x0)) {
        puVar3 = *(uint **)(param_1 + 0x10);
        uVar1 = **(uint **)(*plVar5 + 8);
        uVar2 = **(uint **)(*plVar4 + 8);
        puVar3[2] = 1;
        *puVar3 = (uint)(uVar2 < uVar1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    return 0;
}



undefined8 FUN_140663230(longlong param_1)

{
    uint uVar1;
    uint uVar2;
    uint *puVar4;
    longlong *plVar5;
    longlong *plVar6;
    uint uVar3;

    plVar5 = (longlong *)FUN_140056ab0(param_1,1,"Game.Quest");
    plVar6 = (longlong *)FUN_140056ab0(param_1,2,"Game.Quest");
    if ((plVar5 != (longlong *)0x0) && (plVar6 != (longlong *)0x0)) {
        puVar4 = *(uint **)(param_1 + 0x10);
        uVar1 = **(uint **)(*plVar6 + 8);
        uVar2 = **(uint **)(*plVar5 + 8);
        uVar3 = **(uint **)(*plVar5 + 8);
        puVar4[2] = 1;
        *puVar4 = (uint)(uVar1 <= uVar2 && uVar3 != uVar1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    return 0;
}



undefined8 FUN_1406632c0(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong *plVar3;

    plVar3 = (longlong *)FUN_140056ab0(param_1,1,"Game.Quest");
    pdVar2 = *(double **)(param_1 + 0x10);
    if (plVar3 == (longlong *)0x0) {
        *(undefined4 *)(pdVar2 + 1) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar1 = **(int **)(*plVar3 + 8);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)iVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406633a0(longlong param_1)

{
    longlong *plVar1;
    undefined *puVar2;
    longlong lVar3;
    longlong lVar4;
    undefined local_28 [8];
    longlong local_20;

    plVar1 = (longlong *)FUN_140056ab0(param_1,1);
    if (plVar1 == (longlong *)0x0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    if (*(int *)(*(longlong *)(*plVar1 + 8) + 0xac) == 0) {
        puVar2 = &DAT_1409f286c;
    }
    else {
        lVar3 = FUN_14022cc80();
        if (lVar3 == 0) {
            puVar2 = &DAT_1409f27f4;
        }
        else {
            puVar2 = (undefined *)FUN_14034bdd0();
        }
    }
    lVar3 = FUN_14018f0e0(local_28,puVar2);
    if (*(longlong *)(lVar3 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar4 = -1;
        do {
            lVar4 = lVar4 + 1;
        } while (*(char *)(*(longlong *)(lVar3 + 8) + lVar4) != '\0');
        FUN_140058710(param_1);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
}



undefined8 FUN_1406636b0(longlong param_1)

{
    undefined2 *puVar1;
    short sVar2;
    short *psVar3;
    longlong *plVar4;
    longlong lVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    longlong lVar8;
    undefined local_48 [8];
    longlong local_40;
    undefined local_28 [8];
    longlong local_20;

    plVar4 = (longlong *)FUN_140056ab0(param_1,1,"Game.Quest");
    if (plVar4 != (longlong *)0x0) {
        lVar5 = *plVar4;
        uVar7 = 0;
        uVar6 = uVar7;
        if (*(longlong *)(lVar5 + 0x90) != 0) {
            uVar6 = (ulonglong)**(uint **)(lVar5 + 0x88);
        }
        FUN_1404835c0(DAT_140c65918,uVar6);
        lVar5 = FUN_14054f9e0(local_48,*(undefined4 *)(*(longlong *)(lVar5 + 8) + 8));
        psVar3 = *(short **)(lVar5 + 8);
        sVar2 = *psVar3;
        uVar6 = uVar7;
        while (sVar2 != 0) {
            uVar6 = uVar6 + 1;
            sVar2 = psVar3[uVar6];
        }
        lVar5 = (longlong)(uVar6 * 2) >> 1;
        uVar6 = lVar5 + 1;
        if (uVar6 < 0x7fffffffffffffff) {
            uVar7 = FUN_14018b280(uVar6 * 2,0);
        }
        FUN_1407db590(uVar7,psVar3);
        puVar1 = (undefined2 *)(lVar5 * 2 + uVar7);
        if (puVar1 != (undefined2 *)0x0) {
            *puVar1 = 0;
        }
        if (local_40 != 0) {
            FUN_14018b900(local_40,0);
        }
        lVar5 = FUN_14018f0e0(local_28,uVar7);
        if (*(longlong *)(lVar5 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        else {
            lVar8 = -1;
            do {
                lVar8 = lVar8 + 1;
            } while (*(char *)(*(longlong *)(lVar5 + 8) + lVar8) != '\0');
            FUN_140058710(param_1);
        }
        if (local_20 != 0) {
            FUN_14018b900(local_20,0);
        }
        if (uVar7 != 0) {
            FUN_14018b900(uVar7,0);
        }
        return 1;
    }
    return 0;
}



undefined8 FUN_140663840(longlong param_1)

{
    longlong lVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined4 uVar4;
    longlong lVar5;
    undefined local_28 [8];
    longlong local_20;

    plVar2 = (longlong *)FUN_140056ab0();
    if (plVar2 == (longlong *)0x0) {
        return 0;
    }
    lVar1 = *plVar2;
    uVar4 = 0;
    if (*(longlong *)(lVar1 + 0x90) != 0) {
        uVar4 = **(undefined4 **)(lVar1 + 0x88);
    }
    FUN_1404835c0(DAT_140c65918,uVar4);
    FUN_14054f9e0(local_28,*(undefined4 *)(*(longlong *)(lVar1 + 8) + 0x110));
    lVar1 = local_20;
    lVar3 = FUN_14018f0e0(local_28,local_20);
    if (*(longlong *)(lVar3 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar5 = -1;
        do {
            lVar5 = lVar5 + 1;
        } while (*(char *)(*(longlong *)(lVar3 + 8) + lVar5) != '\0');
        FUN_140058710(param_1);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    if (lVar1 != 0) {
        FUN_14018b900(lVar1,0);
    }
    return 1;
}



undefined8 FUN_140663930(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong lVar3;
    undefined local_48 [8];
    longlong local_40;
    undefined local_28 [8];
    longlong local_20;

    puVar1 = (undefined8 *)FUN_140056ab0(param_1,1);
    if (puVar1 == (undefined8 *)0x0) {
        FUN_140058710(param_1,&DAT_1409d145e,0);
        return 1;
    }
    FUN_140550550(*puVar1,local_48);
    lVar2 = FUN_14018f0e0(local_28,local_40);
    if (*(longlong *)(lVar2 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar3) != '\0');
        FUN_140058710(param_1);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    return 1;
}



undefined8 FUN_140663c50(longlong param_1)

{
    uint *puVar1;
    byte bVar2;
    longlong *plVar3;

    plVar3 = (longlong *)FUN_140056ab0(param_1,1);
    if ((plVar3 == (longlong *)0x0) ||
        (bVar2 = 1, (*(uint *)(*(longlong *)(*plVar3 + 8) + 0xc) & 0x20000) == 0)) {
        bVar2 = 0;
    }
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)bVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140663cb0(longlong param_1)

{
    undefined8 uVar1;
    undefined2 *puVar2;
    undefined8 *puVar3;
    longlong lVar4;
    longlong lVar5;
    undefined local_28 [8];
    undefined2 *local_20;
    undefined2 *local_18;
    undefined2 *local_10;

    puVar3 = (undefined8 *)FUN_140056ab0(param_1,1,"Game.Quest");
    if (puVar3 == (undefined8 *)0x0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar1 = *puVar3;
    local_20 = (undefined2 *)FUN_14018b280(0x10);
    local_10 = local_20 + 8;
    if (local_20 != (undefined2 *)0x0) {
        *local_20 = 0;
    }
    local_18 = local_20;
    FUN_140550860(uVar1,local_28);
    puVar2 = local_20;
    lVar4 = FUN_14018f0e0(local_28,local_20);
    if (*(longlong *)(lVar4 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar5 = -1;
        do {
            lVar5 = lVar5 + 1;
        } while (*(char *)(*(longlong *)(lVar4 + 8) + lVar5) != '\0');
        FUN_140058710(param_1);
    }
    if (local_20 != (undefined2 *)0x0) {
        FUN_14018b900(local_20,0);
    }
    if (puVar2 != (undefined2 *)0x0) {
        FUN_14018b900(puVar2,0);
    }
    return 1;
}



undefined8 FUN_140663db0(longlong param_1)

{
    undefined8 uVar1;
    undefined2 *puVar2;
    undefined8 *puVar3;
    longlong lVar4;
    longlong lVar5;
    undefined local_28 [8];
    undefined2 *local_20;
    undefined2 *local_18;
    undefined2 *local_10;

    puVar3 = (undefined8 *)FUN_140056ab0(param_1,1);
    if (puVar3 == (undefined8 *)0x0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar1 = *puVar3;
    local_20 = (undefined2 *)FUN_14018b280(0x10);
    local_10 = local_20 + 8;
    if (local_20 != (undefined2 *)0x0) {
        *local_20 = 0;
    }
    local_18 = local_20;
    FUN_140550860(uVar1,local_28);
    puVar2 = local_20;
    lVar4 = FUN_14018f0e0(local_28,local_20);
    if (*(longlong *)(lVar4 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar5 = -1;
        do {
            lVar5 = lVar5 + 1;
        } while (*(char *)(*(longlong *)(lVar4 + 8) + lVar5) != '\0');
        FUN_140058710(param_1);
    }
    if (local_20 != (undefined2 *)0x0) {
        FUN_14018b900(local_20,0);
    }
    if (puVar2 != (undefined2 *)0x0) {
        FUN_14018b900(puVar2,0);
    }
    return 1;
}



undefined8 FUN_140664200(longlong param_1)

{
    undefined4 *puVar1;
    uint *puVar2;
    int iVar3;
    longlong *plVar4;

    plVar4 = (longlong *)FUN_140056ab0(param_1,1);
    if (plVar4 == (longlong *)0x0) {
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        *puVar1 = 0;
        puVar1[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar3 = FUN_1405fbc40(*DAT_140c65b80,**(undefined4 **)(*plVar4 + 8));
    puVar2 = *(uint **)(param_1 + 0x10);
    puVar2[2] = 1;
    *puVar2 = (uint)(iVar3 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140664290(longlong param_1)

{
    undefined4 *puVar1;
    int iVar2;
    longlong lVar3;
    uint *puVar4;

    lVar3 = FUN_140056ab0(param_1,1,"Game.Quest");
    if (lVar3 == 0) {
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        *puVar1 = 0;
        puVar1[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar4 = *(uint **)(param_1 + 0x10);
    iVar2 = FUN_14054f410();
    puVar4[2] = 1;
    *puVar4 = (uint)(iVar2 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140664300(longlong param_1)

{
    undefined4 *puVar1;
    int iVar2;
    longlong lVar3;
    uint *puVar4;

    lVar3 = FUN_140056ab0(param_1,1,"Game.Quest");
    if (lVar3 == 0) {
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        *puVar1 = 0;
        puVar1[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar4 = *(uint **)(param_1 + 0x10);
    iVar2 = FUN_14054f3a0();
    puVar4[2] = 1;
    *puVar4 = (uint)(iVar2 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140664370(longlong param_1)

{
    undefined4 *puVar1;
    int iVar2;
    longlong lVar3;
    uint *puVar4;

    lVar3 = FUN_140056ab0(param_1,1,"Game.Quest");
    if (lVar3 == 0) {
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        *puVar1 = 0;
        puVar1[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar4 = *(uint **)(param_1 + 0x10);
    iVar2 = FUN_14054f480();
    puVar4[2] = 1;
    *puVar4 = (uint)(iVar2 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406643e0(longlong param_1)

{
    uint uVar1;
    undefined4 *puVar2;
    uint *puVar3;
    byte bVar4;
    longlong *plVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong uVar8;

    plVar5 = (longlong *)FUN_140056ab0(param_1,1);
    uVar7 = 0;
    bVar4 = 0;
    if (plVar5 == (longlong *)0x0) {
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    if (*(ulonglong *)(DAT_140c65b80 + 0x90) != 0) {
        uVar8 = *(ulonglong *)(DAT_140c65b80 + 0x90);
        do {
            uVar6 = (uVar8 - uVar7 >> 1) + uVar7;
            uVar1 = *(uint *)(*(longlong *)(DAT_140c65b80 + 0x88) + uVar6 * 4);
            if (uVar1 <= **(uint **)(*plVar5 + 8)) {
                if (**(uint **)(*plVar5 + 8) <= uVar1) {
                    bVar4 = 1;
                    break;
                }
                uVar7 = uVar6 + 1;
                uVar6 = uVar8;
            }
            uVar8 = uVar6;
        } while (uVar7 < uVar6);
    }
    puVar3 = *(uint **)(param_1 + 0x10);
    puVar3[2] = 1;
    *puVar3 = (uint)bVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406644b0(longlong param_1)

{
    undefined4 *puVar1;
    longlong lVar2;
    uint *puVar3;
    byte bVar4;
    char cVar5;
    int iVar6;
    longlong *plVar7;

    plVar7 = (longlong *)FUN_140056ab0(param_1,1,"Game.Quest");
    if (plVar7 == (longlong *)0x0) {
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        *puVar1 = 0;
        puVar1[2] = 1;
        goto LAB_140664543;
    }
    lVar2 = *plVar7;
    iVar6 = FUN_14054f480();
    if (iVar6 == 0) {
        LAB_140664529:
        bVar4 = 0;
    }
    else {
        cVar5 = FUN_14002c740(&DAT_140c7e820,*(undefined8 *)(DAT_140c65898 + 0x88));
        if ((cVar5 == '\0') || (bVar4 = 1, DAT_140c65c38 != **(int **)(lVar2 + 8))) goto LAB_140664529;
    }
    puVar3 = *(uint **)(param_1 + 0x10);
    puVar3[2] = 1;
    *puVar3 = (uint)bVar4;
    LAB_140664543:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140664560(longlong param_1)

{
    undefined4 *puVar1;
    int iVar2;
    longlong lVar3;
    uint *puVar4;

    lVar3 = FUN_140056ab0(param_1,1,"Game.Quest");
    if (lVar3 == 0) {
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        *puVar1 = 0;
        puVar1[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar4 = *(uint **)(param_1 + 0x10);
    iVar2 = FUN_140552fd0();
    puVar4[2] = 1;
    *puVar4 = (uint)(iVar2 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406645d0(longlong param_1)

{
    uint *puVar1;
    longlong *plVar2;

    plVar2 = (longlong *)FUN_140056ab0(param_1,1,"Game.Quest");
    puVar1 = *(uint **)(param_1 + 0x10);
    if (plVar2 == (longlong *)0x0) {
        *puVar1 = 0;
    }
    else {
        *puVar1 = *(uint *)(*(longlong *)(*plVar2 + 8) + 0xc) >> 3 & 1;
    }
    puVar1[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140664670(longlong param_1)

{
    uint *puVar1;
    longlong *plVar2;

    plVar2 = (longlong *)FUN_140056ab0(param_1,1,"Game.Quest");
    puVar1 = *(uint **)(param_1 + 0x10);
    if (plVar2 == (longlong *)0x0) {
        *puVar1 = 0;
    }
    else {
        *puVar1 = *(uint *)(*(longlong *)(*plVar2 + 8) + 0xc) >> 0x12 & 1;
    }
    puVar1[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140664840(longlong param_1)

{
    undefined8 uVar1;

    if (DAT_140c65c38 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar1 = FUN_1405a8a40();
    uVar1 = FUN_140663030(param_1,uVar1);
    return uVar1;
}



undefined8 FUN_140664880(longlong param_1)

{
    undefined4 uVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 *puVar4;
    bool bVar5;
    int iVar6;
    undefined8 uVar7;
    longlong lVar8;
    undefined8 *puVar9;
    int iVar10;
    longlong lVar11;
    double dVar12;
    int local_res8;
    int iStackX12;

    lVar2 = *DAT_140c65b80;
    puVar9 = &DAT_140a12138;
    if (*(undefined8 **)(param_1 + 0x18) < *(undefined8 **)(param_1 + 0x10)) {
        puVar9 = *(undefined8 **)(param_1 + 0x18);
    }
    if ((*(int *)(puVar9 + 1) == 0) || ((*(int *)(puVar9 + 1) == 1 && (*(int *)puVar9 == 0)))) {
        bVar5 = false;
    }
    else {
        bVar5 = true;
    }
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar9 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar9 + 1) = 5;
    *puVar9 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    iVar6 = FUN_1400578c0(param_1);
    lVar8 = *(longlong *)(lVar2 + 0x48);
    lVar11 = *(longlong *)(lVar8 + 0x10);
    if (lVar11 != lVar8) {
        do {
            lVar8 = FUN_1405a8a40();
            if (lVar8 != 0) {
                iVar10 = 0;
                lVar3 = *(longlong *)(DAT_140c65898 + 0x78);
                if (lVar3 == 0) {
                    if (!bVar5) goto LAB_14066497d;
                }
                else if (!bVar5) {
                    iVar10 = *(int *)(lVar3 + 0x3c);
                    if (iVar10 == 0) {
                        iVar10 = *(int *)(lVar3 + 0x38);
                    }
                    iVar10 = iVar10 + -10;
                    LAB_14066497d:
                    if (*(int *)(*(longlong *)(lVar8 + 8) + 0x10) < iVar10) goto LAB_1406649a9;
                }
                iVar10 = FUN_140663030();
                if (iVar10 != 0) {
                    FUN_1400fb470();
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                }
            }
            LAB_1406649a9:
            lVar8 = *(longlong *)(lVar11 + 0x18);
            if (lVar8 == 0) {
                lVar8 = *(longlong *)(lVar11 + 8);
                if (lVar11 == *(longlong *)(lVar8 + 0x18)) {
                    do {
                        lVar11 = lVar8;
                        lVar8 = *(longlong *)(lVar11 + 8);
                    } while (lVar11 == *(longlong *)(lVar8 + 0x18));
                }
                if (*(longlong *)(lVar11 + 0x18) != lVar8) {
                    lVar11 = lVar8;
                }
            }
            else {
                for (lVar3 = *(longlong *)(lVar8 + 0x10); lVar11 = lVar8, lVar3 != 0;
                     lVar3 = *(longlong *)(lVar3 + 0x10)) {
                    lVar8 = lVar3;
                }
            }
        } while (lVar11 != *(longlong *)(lVar2 + 0x48));
    }
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
    if (iVar6 - 1U < *(uint *)(lVar2 + 0x38)) {
        puVar9 = (undefined8 *)((longlong)(iVar6 + -1) * 0x10 + *(longlong *)(lVar2 + 0x18));
    }
    else {
        dVar12 = (double)iVar6;
        if (dVar12 == 0.0) {
            puVar9 = *(undefined8 **)(lVar2 + 0x20);
        }
        else {
            iStackX12 = (int)((ulonglong)dVar12 >> 0x20);
            local_res8 = SUB84(dVar12,0);
            puVar9 = (undefined8 *)
                    (*(longlong *)(lVar2 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStackX12 + local_res8) %
                      (longlong)((1 << (*(byte *)(lVar2 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar9 + 3) == 3) && (dVar12 == (double)puVar9[2])) goto LAB_140664a93;
            puVar9 = (undefined8 *)puVar9[4];
        } while (puVar9 != (undefined8 *)0x0);
        puVar9 = &DAT_140a12138;
    }
    LAB_140664a93:
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    *puVar4 = *puVar9;
    uVar1 = *(undefined4 *)(puVar9 + 1);
    *(undefined4 *)(puVar4 + 1) = uVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1,uVar1,iVar6);
    return 1;
}



undefined8 FUN_140664c70(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    char cVar3;
    longlong *plVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    undefined4 uVar7;
    undefined4 uVar8;

    plVar4 = (longlong *)FUN_140056ab0(param_1,1,"Game.Quest");
    if (plVar4 != (longlong *)0x0) {
        puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        puVar6 = &DAT_140a12138;
        if (puVar5 < *(undefined8 **)(param_1 + 0x10)) {
            puVar6 = puVar5;
        }
        if ((*(int *)(puVar6 + 1) == 0) ||
            ((uVar8 = 1, *(int *)(puVar6 + 1) == 1 && (*(int *)puVar6 == 0)))) {
            uVar7 = 0;
            uVar8 = 0;
            if ((DAT_140c65c38 == **(int **)(*plVar4 + 8)) &&
                ((cVar3 = FUN_14002c740(&DAT_140c7e820,*(undefined8 *)(DAT_140c65898 + 0x88)),
                  lVar2 = DAT_140c7e830, lVar1 = DAT_140c7e828, uVar8 = uVar7, cVar3 != '\0' &&
                                                                               (DAT_140c65c38 = 0, DAT_140c7e828 != DAT_140c7e830)))) {
                FUN_1407db590(DAT_140c7e828,DAT_140c7e830,2);
                DAT_140c7e830 = DAT_140c7e830 + (lVar2 - lVar1 >> 1) * -2;
            }
        }
        FUN_1405fcb80(*DAT_140c65b80,**(undefined4 **)(*plVar4 + 8),uVar8);
    }
    return 0;
}



undefined8 FUN_140664d80(undefined8 param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong lVar5;
    longlong local_res10;

    plVar4 = (longlong *)FUN_140056ab0(param_1,1);
    if (plVar4 != (longlong *)0x0) {
        lVar5 = *plVar4;
        FUN_14054f480(lVar5);
        FUN_1405fcb80(*DAT_140c65b80,**(undefined4 **)(lVar5 + 8));
        lVar3 = DAT_140c7e830;
        lVar2 = DAT_140c7e828;
        lVar5 = *(longlong *)(*DAT_140c65b80 + 8);
        local_res10 = lVar5;
        lVar1 = *(longlong *)(lVar5 + 8);
        while (lVar1 != 0) {
            if (*(uint *)(lVar1 + 0x20) < **(uint **)(*plVar4 + 8)) {
                lVar1 = *(longlong *)(lVar1 + 0x18);
            }
            else {
                local_res10 = lVar1;
                lVar1 = *(longlong *)(lVar1 + 0x10);
            }
        }
        if ((local_res10 == lVar5) || (**(uint **)(*plVar4 + 8) < *(uint *)(local_res10 + 0x20))) {
            local_res10 = lVar5;
        }
        if ((((local_res10 == lVar5) || (local_res10 == -0x28)) ||
             ((*(uint *)(local_res10 + 0x6c) & 2) == 0)) &&
            (DAT_140c65c38 = 0, DAT_140c7e828 != DAT_140c7e830)) {
            FUN_1407db590(DAT_140c7e828,DAT_140c7e830,2);
            DAT_140c7e830 = DAT_140c7e830 + (lVar3 - lVar2 >> 1) * -2;
        }
    }
    return 0;
}



undefined8 FUN_140664ea0(undefined8 param_1)

{
    longlong *plVar1;
    longlong lVar2;

    plVar1 = (longlong *)FUN_140056ab0(param_1,1);
    if (plVar1 != (longlong *)0x0) {
        lVar2 = *plVar1;
        FUN_14054f410(lVar2);
        FUN_1405fcad0(*DAT_140c65b80,**(undefined4 **)(lVar2 + 8));
        lVar2 = *(longlong *)(*(longlong *)(*DAT_140c65b80 + 0x28) + 8);
        while (lVar2 != 0) {
            if (*(uint *)(lVar2 + 0x20) < **(uint **)(*plVar1 + 8)) {
                lVar2 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                lVar2 = *(longlong *)(lVar2 + 0x10);
            }
        }
    }
    return 0;
}



undefined8 FUN_140664f30(longlong param_1)

{
    uint uVar1;
    undefined8 *puVar2;
    double *pdVar3;

    puVar2 = (undefined8 *)FUN_140056ab0(param_1,1,"Game.Quest");
    if (puVar2 == (undefined8 *)0x0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    pdVar3 = *(double **)(param_1 + 0x10);
    uVar1 = FUN_14054f4f0(*puVar2);
    *(undefined4 *)(pdVar3 + 1) = 3;
    *pdVar3 = (double)(ulonglong)uVar1 * 0.001;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140664fb0(longlong param_1)

{
    int iVar1;
    undefined8 *puVar2;
    double *pdVar3;
    double *pdVar4;
    double dVar5;
    double local_res10 [3];
    double local_18;
    undefined4 local_10;

    puVar2 = (undefined8 *)FUN_140056ab0(param_1,1,"Game.Quest");
    if (puVar2 == (undefined8 *)0x0) {
        return 0;
    }
    pdVar3 = (double *)(*(longlong *)(param_1 + 0x18) + 0x10);
    pdVar4 = (double *)&DAT_140a12138;
    if (pdVar3 < *(double **)(param_1 + 0x10)) {
        pdVar4 = pdVar3;
    }
    if (*(int *)(pdVar4 + 1) != 3) {
        if ((*(int *)(pdVar4 + 1) != 4) ||
            (iVar1 = FUN_14005ac80((longlong)*pdVar4 + 0x20,local_res10), iVar1 == 0)) {
            dVar5 = 0.0;
            goto LAB_14066502c;
        }
        local_10 = 3;
        pdVar4 = &local_18;
        local_18 = local_res10[0];
    }
    dVar5 = *pdVar4;
    LAB_14066502c:
    FUN_14054f560(*puVar2,(longlong)((float)dVar5 * 1000.0));
    return 0;
}



undefined8 FUN_140665060(longlong param_1)

{
    undefined4 *puVar1;
    uint *puVar2;
    int iVar3;
    undefined8 *puVar4;

    puVar4 = (undefined8 *)FUN_140056ab0(param_1,1);
    if (puVar4 == (undefined8 *)0x0) {
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        *puVar1 = 0;
        puVar1[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar3 = FUN_140552930(*puVar4);
    puVar2 = *(uint **)(param_1 + 0x10);
    puVar2[2] = 1;
    *puVar2 = (uint)(iVar3 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406650d0(longlong param_1)

{
    undefined4 *puVar1;
    uint *puVar2;
    byte bVar3;
    int iVar4;
    longlong *plVar5;

    plVar5 = (longlong *)FUN_140056ab0(param_1,1);
    if (plVar5 == (longlong *)0x0) {
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        *puVar1 = 0;
        puVar1[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar4 = FUN_1405fbc40(*DAT_140c65b80,**(undefined4 **)(*plVar5 + 8));
    if (((iVar4 - 1U & 0xfffffffc) != 0) || (bVar3 = 1, iVar4 == 3)) {
        bVar3 = 0;
    }
    puVar2 = *(uint **)(param_1 + 0x10);
    puVar2[2] = 1;
    *puVar2 = (uint)bVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined4 FUN_140665170(longlong param_1)

{
    int iVar1;
    int iVar2;
    undefined4 *puVar3;
    uint *puVar4;
    longlong *plVar5;

    plVar5 = (longlong *)FUN_140056ab0(param_1,1);
    if (plVar5 == (longlong *)0x0) {
        puVar3 = *(undefined4 **)(param_1 + 0x10);
        *puVar3 = 0;
        puVar3[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    if (*DAT_140c65b80 != 0) {
        puVar4 = *(uint **)(param_1 + 0x10);
        iVar1 = **(int **)(*plVar5 + 8);
        iVar2 = *(int *)(*DAT_140c65b80 + 0x90);
        puVar4[2] = 1;
        *puVar4 = (uint)(iVar2 == iVar1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar3 = *(undefined4 **)(param_1 + 0x10);
    *puVar3 = 0;
    puVar3[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140665900(longlong param_1)

{
    double *pdVar1;
    uint uVar2;
    int iVar3;
    longlong *plVar4;
    undefined8 *puVar5;
    ulonglong uVar6;
    longlong lVar7;

    plVar4 = (longlong *)FUN_140056ab0(param_1,1,"Game.Quest");
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (((puVar5 < *(undefined8 **)(param_1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
        uVar2 = FUN_140056d60(param_1,2);
        uVar6 = (ulonglong)uVar2;
    }
    else {
        uVar6 = 0xffffffff;
    }
    if ((plVar4 != (longlong *)0x0) && (uVar2 = (uint)uVar6, -1 < (int)uVar2)) {
        lVar7 = *plVar4;
        if ((int)uVar2 < (int)*(uint *)(lVar7 + 0x10)) {
            if (uVar2 < *(uint *)(lVar7 + 0x10)) {
                uVar2 = FUN_140551840(lVar7,uVar6);
                if ((uVar2 < 2) ||
                    ((*(uint *)(*(longlong *)(lVar7 + 0x18 + (uVar6 & 0xffffffff) * 8) + 8) & 0x400) != 0))
                    goto LAB_14066599a;
                iVar3 = FUN_140551630(lVar7,uVar6 & 0xffffffff);
            }
            else {
                LAB_14066599a:
                iVar3 = FUN_1405515c0(lVar7,uVar6 & 0xffffffff);
            }
            pdVar1 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar1 + 1) = 3;
            *pdVar1 = (double)iVar3;
            goto LAB_1406659d0;
        }
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0;
    *(undefined4 *)(puVar5 + 1) = 3;
    LAB_1406659d0:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406659f0(longlong param_1)

{
    undefined4 *puVar1;
    int iVar2;
    longlong *plVar3;
    undefined8 *puVar4;

    plVar3 = (longlong *)FUN_140056ab0(param_1,1,"Game.Quest");
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (((puVar4 < *(undefined8 **)(param_1 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
        iVar2 = FUN_140056d60(param_1,2);
    }
    else {
        iVar2 = -1;
    }
    if (((plVar3 == (longlong *)0x0) || (iVar2 < 0)) || (iVar2 == *(int *)(*plVar3 + 0x10))) {
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        *puVar1 = 1;
        puVar1[2] = 1;
    }
    else {
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        *puVar1 = 0;
        puVar1[2] = 1;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140665a90(longlong param_1)

{
    double *pdVar1;
    int iVar2;
    undefined8 *puVar3;

    puVar3 = (undefined8 *)FUN_140056ab0(param_1,1,"Game.Quest");
    if (puVar3 == (undefined8 *)0x0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar2 = FUN_1405534b0(*puVar3);
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)iVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140665b00(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong *plVar3;

    plVar3 = (longlong *)FUN_140056ab0(param_1,1,"Game.Quest");
    pdVar2 = *(double **)(param_1 + 0x10);
    if (plVar3 == (longlong *)0x0) {
        *(undefined4 *)(pdVar2 + 1) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar1 = *(int *)(*(longlong *)(*plVar3 + 8) + 0x10);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)iVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140665b70(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong *plVar3;

    plVar3 = (longlong *)FUN_140056ab0(param_1,1,"Game.Quest");
    pdVar2 = *(double **)(param_1 + 0x10);
    if (plVar3 == (longlong *)0x0) {
        *(undefined4 *)(pdVar2 + 1) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar1 = *(int *)(*(longlong *)(*plVar3 + 8) + 0x18);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)iVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140665be0(longlong param_1)

{
    longlong lVar1;
    double *pdVar2;
    int iVar3;
    longlong *plVar4;

    plVar4 = (longlong *)FUN_140056ab0(param_1,1,"Game.Quest");
    if ((plVar4 != (longlong *)0x0) && (lVar1 = *(longlong *)(DAT_140c65898 + 0x78), lVar1 != 0)) {
        iVar3 = *(int *)(lVar1 + 0x3c);
        if (iVar3 == 0) {
            iVar3 = *(int *)(lVar1 + 0x38);
        }
        iVar3 = (**(code **)(*DAT_140c65a10 + 0x10))
                (DAT_140c65a10,iVar3,*(undefined4 *)(*(longlong *)(*plVar4 + 8) + 0x10));
        pdVar2 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)iVar3;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



void FUN_140667790(longlong *param_1,longlong *param_2,longlong param_3)

{
    int iVar1;
    longlong lVar2;
    int *piVar3;
    undefined8 *puVar4;
    double *pdVar5;
    int iVar6;
    undefined8 uVar7;
    longlong lVar8;
    undefined8 *puVar9;
    longlong lVar10;
    uint uVar11;
    float fVar12;
    double dVar13;
    float in_XMM3_Da;
    undefined4 uVar14;
    undefined4 uVar15;
    ulonglong local_98;
    int local_90;
    int iStack140;
    ulonglong local_88;
    undefined local_78 [8];
    longlong local_70;

    local_98 = 0;
    if (param_1[1] != 0) {
        uVar14 = 0;
        uVar15 = 0;
        do {
            local_88 = 0;
            if (param_2[1] != 0) {
                do {
                    lVar2 = *(longlong *)(param_3 + 0x10);
                    piVar3 = *(int **)(*param_2 + local_88 * 8);
                    if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                        *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                        FUN_14005e2c0(lVar2);
                    }
                    puVar9 = *(undefined8 **)(lVar2 + 0x10);
                    uVar7 = FUN_14005c1b0(lVar2,0,0);
                    *(undefined4 *)(puVar9 + 1) = 5;
                    *puVar9 = uVar7;
                    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                    iVar6 = FUN_1400578c0(lVar2);
                    iVar1 = *piVar3;
                    uVar11 = iVar6 - 1;
                    lVar8 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + 0xa0);
                    if (uVar11 < *(uint *)(lVar8 + 0x38)) {
                        puVar9 = (undefined8 *)((longlong)(iVar6 + -1) * 0x10 + *(longlong *)(lVar8 + 0x18));
                    }
                    else {
                        dVar13 = (double)iVar6;
                        if (dVar13 == (double)CONCAT44(uVar15,uVar14)) {
                            puVar9 = *(undefined8 **)(lVar8 + 0x20);
                        }
                        else {
                            iStack140 = (int)((ulonglong)dVar13 >> 0x20);
                            local_90 = SUB84(dVar13,0);
                            puVar9 = (undefined8 *)
                                    (*(longlong *)(lVar8 + 0x20) +
                                     ((longlong)(ulonglong)(uint)(iStack140 + local_90) %
                                      (longlong)((1 << (*(byte *)(lVar8 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                        }
                        do {
                            if ((*(int *)(puVar9 + 3) == 3) && (dVar13 == (double)puVar9[2])) goto LAB_1406678dd;
                            puVar9 = (undefined8 *)puVar9[4];
                        } while (puVar9 != (undefined8 *)0x0);
                        puVar9 = &DAT_140a12138;
                    }
                    LAB_1406678dd:
                    puVar4 = *(undefined8 **)(lVar2 + 0x10);
                    *puVar4 = *puVar9;
                    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar9 + 1);
                    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                    lVar8 = FUN_14018f0e0(local_78,L"idReward");
                    lVar8 = *(longlong *)(lVar8 + 8);
                    if (lVar8 == 0) {
                        *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 8) = 0;
                    }
                    else {
                        lVar10 = -1;
                        do {
                            lVar10 = lVar10 + 1;
                        } while (*(char *)(lVar8 + lVar10) != '\0');
                        if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                            *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                            FUN_14005e2c0(lVar2);
                        }
                        puVar9 = *(undefined8 **)(lVar2 + 0x10);
                        uVar7 = FUN_140062650(lVar2,lVar8,lVar10);
                        *(undefined4 *)(puVar9 + 1) = 4;
                        *puVar9 = uVar7;
                    }
                    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                    if (local_70 != 0) {
                        FUN_14018b900(local_70,0);
                    }
                    pdVar5 = *(double **)(lVar2 + 0x10);
                    *(undefined4 *)(pdVar5 + 1) = 3;
                    *pdVar5 = (double)iVar1;
                    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                    uVar7 = FUN_1400580e0(lVar2,0xfffffffd);
                    FUN_14005ea50(lVar2,uVar7,*(longlong *)(lVar2 + 0x10) + -0x20,
                                  *(longlong *)(lVar2 + 0x10) + -0x10);
                    lVar8 = *(longlong *)(lVar2 + 0x10);
                    *(undefined **)(lVar2 + 0x10) = &DAT_ffffffffffffffd0 + lVar8;
                    lVar10 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + 0xa0);
                    if (uVar11 < *(uint *)(lVar10 + 0x38)) {
                        puVar9 = (undefined8 *)((longlong)(iVar6 + -1) * 0x10 + *(longlong *)(lVar10 + 0x18));
                    }
                    else {
                        dVar13 = (double)iVar6;
                        if (dVar13 == (double)CONCAT44(uVar15,uVar14)) {
                            puVar9 = *(undefined8 **)(lVar10 + 0x20);
                        }
                        else {
                            iStack140 = (int)((ulonglong)dVar13 >> 0x20);
                            local_90 = SUB84(dVar13,0);
                            puVar9 = (undefined8 *)
                                    (*(longlong *)(lVar10 + 0x20) +
                                     ((longlong)(ulonglong)(uint)(iStack140 + local_90) %
                                      (longlong)((1 << (*(byte *)(lVar10 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                        }
                        do {
                            if ((*(int *)(puVar9 + 3) == 3) && (dVar13 == (double)puVar9[2])) goto LAB_140667a43;
                            puVar9 = (undefined8 *)puVar9[4];
                        } while (puVar9 != (undefined8 *)0x0);
                        puVar9 = &DAT_140a12138;
                    }
                    LAB_140667a43:
                    *(undefined8 *)(&DAT_ffffffffffffffd0 + lVar8) = *puVar9;
                    *(undefined4 *)(lVar8 + -0x28) = *(undefined4 *)(puVar9 + 1);
                    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                    lVar8 = FUN_14018f0e0(local_78,L"eType");
                    lVar8 = *(longlong *)(lVar8 + 8);
                    if (lVar8 == 0) {
                        *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 8) = 0;
                    }
                    else {
                        lVar10 = -1;
                        do {
                            lVar10 = lVar10 + 1;
                        } while (*(char *)(lVar8 + lVar10) != '\0');
                        if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                            *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                            FUN_14005e2c0(lVar2);
                        }
                        puVar9 = *(undefined8 **)(lVar2 + 0x10);
                        uVar7 = FUN_140062650(lVar2,lVar8,lVar10);
                        *(undefined4 *)(puVar9 + 1) = 4;
                        *puVar9 = uVar7;
                    }
                    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                    if (local_70 != 0) {
                        FUN_14018b900(local_70,0);
                    }
                    puVar9 = *(undefined8 **)(lVar2 + 0x10);
                    *puVar9 = 0x401c000000000000;
                    *(undefined4 *)(puVar9 + 1) = 3;
                    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                    uVar7 = FUN_1400580e0(lVar2,0xfffffffd);
                    FUN_14005ea50(lVar2,uVar7,*(longlong *)(lVar2 + 0x10) + -0x20,
                                  *(longlong *)(lVar2 + 0x10) + -0x10);
                    lVar8 = *(longlong *)(lVar2 + 0x10);
                    *(undefined **)(lVar2 + 0x10) = &DAT_ffffffffffffffd0 + lVar8;
                    iVar1 = *(int *)(*param_1 + local_98 * 4);
                    lVar10 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + 0xa0);
                    if (uVar11 < *(uint *)(lVar10 + 0x38)) {
                        puVar9 = (undefined8 *)((longlong)(iVar6 + -1) * 0x10 + *(longlong *)(lVar10 + 0x18));
                    }
                    else {
                        dVar13 = (double)iVar6;
                        if (dVar13 == (double)CONCAT44(uVar15,uVar14)) {
                            puVar9 = *(undefined8 **)(lVar10 + 0x20);
                        }
                        else {
                            iStack140 = (int)((ulonglong)dVar13 >> 0x20);
                            local_90 = SUB84(dVar13,0);
                            puVar9 = (undefined8 *)
                                    (*(longlong *)(lVar10 + 0x20) +
                                     ((longlong)(ulonglong)(uint)(iStack140 + local_90) %
                                      (longlong)((1 << (*(byte *)(lVar10 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                        }
                        do {
                            if ((*(int *)(puVar9 + 3) == 3) && (dVar13 == (double)puVar9[2])) goto LAB_140667bb2;
                            puVar9 = (undefined8 *)puVar9[4];
                        } while (puVar9 != (undefined8 *)0x0);
                        puVar9 = &DAT_140a12138;
                    }
                    LAB_140667bb2:
                    *(undefined8 *)(&DAT_ffffffffffffffd0 + lVar8) = *puVar9;
                    *(undefined4 *)(lVar8 + -0x28) = *(undefined4 *)(puVar9 + 1);
                    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                    lVar8 = FUN_14018f0e0(local_78,L"eAccountCurrencyType");
                    lVar8 = *(longlong *)(lVar8 + 8);
                    if (lVar8 == 0) {
                        *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 8) = 0;
                    }
                    else {
                        lVar10 = -1;
                        do {
                            lVar10 = lVar10 + 1;
                        } while (*(char *)(lVar8 + lVar10) != '\0');
                        if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                            *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                            FUN_14005e2c0(lVar2);
                        }
                        puVar9 = *(undefined8 **)(lVar2 + 0x10);
                        uVar7 = FUN_140062650(lVar2,lVar8,lVar10);
                        *(undefined4 *)(puVar9 + 1) = 4;
                        *puVar9 = uVar7;
                    }
                    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                    if (local_70 != 0) {
                        FUN_14018b900(local_70,0);
                    }
                    pdVar5 = *(double **)(lVar2 + 0x10);
                    *(undefined4 *)(pdVar5 + 1) = 3;
                    *pdVar5 = (double)iVar1;
                    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                    uVar7 = FUN_1400580e0(lVar2,0xfffffffd);
                    FUN_14005ea50(lVar2,uVar7,*(longlong *)(lVar2 + 0x10) + -0x20,
                                  *(longlong *)(lVar2 + 0x10) + -0x10);
                    lVar8 = *(longlong *)(lVar2 + 0x10);
                    *(undefined **)(lVar2 + 0x10) = &DAT_ffffffffffffffd0 + lVar8;
                    lVar10 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + 0xa0);
                    fVar12 = (float)piVar3[4] * in_XMM3_Da;
                    if (uVar11 < *(uint *)(lVar10 + 0x38)) {
                        puVar9 = (undefined8 *)((longlong)(iVar6 + -1) * 0x10 + *(longlong *)(lVar10 + 0x18));
                    }
                    else {
                        dVar13 = (double)iVar6;
                        if (dVar13 == (double)CONCAT44(uVar15,uVar14)) {
                            puVar9 = *(undefined8 **)(lVar10 + 0x20);
                        }
                        else {
                            iStack140 = (int)((ulonglong)dVar13 >> 0x20);
                            local_90 = SUB84(dVar13,0);
                            puVar9 = (undefined8 *)
                                    (*(longlong *)(lVar10 + 0x20) +
                                     ((longlong)(ulonglong)(uint)(iStack140 + local_90) %
                                      (longlong)((1 << (*(byte *)(lVar10 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                        }
                        do {
                            if ((*(int *)(puVar9 + 3) == 3) && (dVar13 == (double)puVar9[2])) goto LAB_140667d2d;
                            puVar9 = (undefined8 *)puVar9[4];
                        } while (puVar9 != (undefined8 *)0x0);
                        puVar9 = &DAT_140a12138;
                    }
                    LAB_140667d2d:
                    *(undefined8 *)(&DAT_ffffffffffffffd0 + lVar8) = *puVar9;
                    *(undefined4 *)(lVar8 + -0x28) = *(undefined4 *)(puVar9 + 1);
                    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                    lVar8 = FUN_14018f0e0(local_78,L"nAmount");
                    lVar8 = *(longlong *)(lVar8 + 8);
                    if (lVar8 == 0) {
                        *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 8) = 0;
                    }
                    else {
                        lVar10 = -1;
                        do {
                            lVar10 = lVar10 + 1;
                        } while (*(char *)(lVar8 + lVar10) != '\0');
                        if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                            *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                            FUN_14005e2c0(lVar2);
                        }
                        puVar9 = *(undefined8 **)(lVar2 + 0x10);
                        uVar7 = FUN_140062650(lVar2,lVar8,lVar10);
                        *(undefined4 *)(puVar9 + 1) = 4;
                        *puVar9 = uVar7;
                    }
                    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                    if (local_70 != 0) {
                        FUN_14018b900(local_70,0);
                    }
                    pdVar5 = *(double **)(lVar2 + 0x10);
                    *(undefined4 *)(pdVar5 + 1) = 3;
                    *pdVar5 = (double)(int)(longlong)fVar12;
                    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                    uVar7 = FUN_1400580e0(lVar2,0xfffffffd);
                    FUN_14005ea50(lVar2,uVar7,*(longlong *)(lVar2 + 0x10) + -0x20,
                                  *(longlong *)(lVar2 + 0x10) + -0x10);
                    *(longlong *)(lVar2 + 0x10) =
                            (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar2 + 0x10));
                    FUN_1400fb1d0(param_3);
                    FUN_1400579e0(lVar2);
                    local_88 = local_88 + 1;
                } while (local_88 < (ulonglong)param_2[1]);
            }
            local_98 = local_98 + 1;
        } while (local_98 < (ulonglong)param_1[1]);
    }
    return;
}



undefined8 FUN_140667ea0(longlong param_1)

{
    uint *puVar1;
    longlong *plVar2;
    uint uVar3;

    plVar2 = (longlong *)FUN_140056ab0(param_1,1);
    puVar1 = *(uint **)(param_1 + 0x10);
    uVar3 = 0;
    if (plVar2 != (longlong *)0x0) {
        uVar3 = (uint)(*(int *)(*(longlong *)(*plVar2 + 8) + 0x120) != 0);
    }
    *puVar1 = uVar3;
    puVar1[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140667f00(longlong param_1)

{
    int iVar1;
    undefined8 *puVar2;
    double *pdVar3;

    puVar2 = (undefined8 *)FUN_140056ab0(param_1,1,"Game.Quest");
    if (puVar2 == (undefined8 *)0x0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    pdVar3 = *(double **)(param_1 + 0x10);
    iVar1 = FUN_140553630(*puVar2);
    *(undefined4 *)(pdVar3 + 1) = 3;
    *pdVar3 = (double)iVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140667f70(longlong param_1)

{
    longlong lVar1;
    uint *puVar2;
    undefined4 *puVar3;
    bool bVar4;
    uint uVar5;
    longlong *plVar6;
    undefined8 *puVar7;

    plVar6 = (longlong *)FUN_140056ab0(param_1,1,"Game.Quest");
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (((puVar7 < *(undefined8 **)(param_1 + 0x10)) && (puVar7 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
        uVar5 = FUN_140056d60(param_1);
    }
    else {
        uVar5 = 0xffffffff;
    }
    if (((plVar6 == (longlong *)0x0) || ((int)uVar5 < 0)) ||
        (lVar1 = *plVar6, *(int *)(lVar1 + 0x10) <= (int)uVar5)) {
        puVar3 = *(undefined4 **)(param_1 + 0x10);
        *puVar3 = 0;
        puVar3[2] = 1;
    }
    else {
        if ((uVar5 == *(uint *)(lVar1 + 0x10)) || (*(uint *)(lVar1 + 0x10) < uVar5)) {
            bVar4 = false;
        }
        else {
            bVar4 = false;
            lVar1 = *(longlong *)(lVar1 + 0x18 + (ulonglong)uVar5 * 8);
            if (lVar1 != 0) {
                bVar4 = *(int *)(lVar1 + 0x28) != 0;
            }
        }
        puVar2 = *(uint **)(param_1 + 0x10);
        puVar2[2] = 1;
        *puVar2 = (uint)bVar4;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140668040(longlong param_1)

{
    int iVar1;
    longlong *plVar2;
    undefined8 *puVar3;
    double *pdVar4;

    plVar2 = (longlong *)FUN_140056ab0(param_1,1,"Game.Quest");
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (((puVar3 < *(undefined8 **)(param_1 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
        iVar1 = FUN_140056d60(param_1,2);
    }
    else {
        iVar1 = -1;
    }
    if (((plVar2 == (longlong *)0x0) || (iVar1 < 0)) || (*(int *)(*plVar2 + 0x10) <= iVar1)) {
        puVar3 = *(undefined8 **)(param_1 + 0x10);
        *puVar3 = 0;
        *(undefined4 *)(puVar3 + 1) = 3;
    }
    else {
        pdVar4 = *(double **)(param_1 + 0x10);
        iVar1 = FUN_1405536c0(*plVar2,iVar1);
        *(undefined4 *)(pdVar4 + 1) = 3;
        *pdVar4 = (double)iVar1;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406680f0(longlong param_1)

{
    longlong lVar1;
    double *pdVar2;
    uint uVar3;
    longlong *plVar4;
    undefined8 *puVar5;
    int iVar6;

    plVar4 = (longlong *)FUN_140056ab0(param_1,1,"Game.Quest");
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (((puVar5 < *(undefined8 **)(param_1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
        uVar3 = FUN_140056d60(param_1);
    }
    else {
        uVar3 = 0xffffffff;
    }
    if (((plVar4 == (longlong *)0x0) || ((int)uVar3 < 0)) ||
        (lVar1 = *plVar4, *(int *)(lVar1 + 0x10) <= (int)uVar3)) {
        puVar5 = *(undefined8 **)(param_1 + 0x10);
        *puVar5 = 0;
        *(undefined4 *)(puVar5 + 1) = 3;
    }
    else {
        if (((uVar3 == *(uint *)(lVar1 + 0x10)) || (*(uint *)(lVar1 + 0x10) < uVar3)) ||
            (lVar1 = *(longlong *)(lVar1 + 0x18 + (ulonglong)uVar3 * 8), lVar1 == 0)) {
            iVar6 = 0;
        }
        else {
            iVar6 = *(int *)(lVar1 + 0x28);
        }
        pdVar2 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)iVar6;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140668200(longlong param_1)

{
    uint uVar1;
    uint *puVar2;
    undefined4 *puVar3;
    longlong *plVar4;

    plVar4 = (longlong *)FUN_140056ab0(param_1,1,"Game.Quest");
    if (plVar4 != (longlong *)0x0) {
        puVar2 = *(uint **)(param_1 + 0x10);
        uVar1 = *(uint *)(*(longlong *)(*plVar4 + 8) + 300);
        puVar2[2] = 1;
        *puVar2 = (uint)(uVar1 < 4);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar3 = *(undefined4 **)(param_1 + 0x10);
    *puVar3 = 0;
    puVar3[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140668270(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    undefined8 *puVar3;
    longlong *plVar4;

    plVar4 = (longlong *)FUN_140056ab0(param_1,1,"Game.Quest");
    if (plVar4 != (longlong *)0x0) {
        pdVar2 = *(double **)(param_1 + 0x10);
        iVar1 = *(int *)(*(longlong *)(*plVar4 + 8) + 300);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)iVar1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    *puVar3 = 0x41dfffffffc00000;
    *(undefined4 *)(puVar3 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406682f0(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong *plVar3;

    plVar3 = (longlong *)FUN_140056ab0(param_1,1,"Game.Quest");
    if (plVar3 != (longlong *)0x0) {
        pdVar2 = *(double **)(param_1 + 0x10);
        iVar1 = *(int *)(*(longlong *)(*plVar3 + 8) + 0x14);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)iVar1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140668360(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong *plVar3;

    plVar3 = (longlong *)FUN_140056ab0(param_1,1,"Game.Quest");
    if (plVar3 != (longlong *)0x0) {
        pdVar2 = *(double **)(param_1 + 0x10);
        iVar1 = *(int *)(*(longlong *)(*plVar3 + 8) + 0x134);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)iVar1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140668420(undefined8 param_1)

{
    longlong lVar1;
    undefined8 local_res10 [3];

    lVar1 = FUN_140056ab0(param_1,1,"Game.Quest");
    if (lVar1 != 0) {
        local_res10[0] = 0;
        FUN_1403f4900(DAT_140c65898,0x45e,local_res10);
    }
    return 0;
}



undefined8 FUN_140668470(longlong param_1)

{
    undefined4 *puVar1;
    uint *puVar2;
    bool bVar3;
    int iVar4;
    longlong *plVar5;

    plVar5 = (longlong *)FUN_140056ab0(param_1,1);
    if (plVar5 == (longlong *)0x0) {
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        *puVar1 = 0;
        puVar1[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    if ((*(longlong *)(DAT_140c65898 + 0x6c50) == 0) || ((*(undefined4 **)(*plVar5 + 8))[0x4a] == 0))
    {
        bVar3 = false;
    }
    else {
        iVar4 = FUN_1405fbc40(*DAT_140c65b80,**(undefined4 **)(*plVar5 + 8));
        bVar3 = iVar4 - 1U < 3;
    }
    puVar2 = *(uint **)(param_1 + 0x10);
    puVar2[2] = 1;
    *puVar2 = (uint)bVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140668520(undefined8 param_1)

{
    longlong *plVar1;
    undefined4 local_res10 [6];

    plVar1 = (longlong *)FUN_140056ab0(param_1,1,"Game.Quest");
    if (plVar1 != (longlong *)0x0) {
        local_res10[0] = **(undefined4 **)(*plVar1 + 8);
        FUN_1403f4900(DAT_140c65898,0x45f,local_res10);
    }
    return 0;
}



undefined8 FUN_140668570(longlong param_1)

{
    double *pdVar1;
    longlong *plVar2;
    ulonglong uVar3;
    int *piVar4;
    uint uVar5;
    ulonglong uVar6;

    plVar2 = (longlong *)FUN_140056ab0(param_1,1);
    uVar3 = 0;
    if (plVar2 == (longlong *)0x0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    piVar4 = (int *)(*(longlong *)(*plVar2 + 8) + 0x60);
    uVar6 = uVar3;
    do {
        uVar5 = (uint)uVar6;
        if ((piVar4[-6] == 0) || (*piVar4 == 0)) break;
        uVar3 = uVar3 + 1;
        uVar5 = uVar5 + 1;
        uVar6 = (ulonglong)uVar5;
        piVar4 = piVar4 + 1;
    } while ((longlong)uVar3 < 6);
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140668600(longlong param_1)

{
    longlong lVar1;
    int iVar2;
    undefined4 uVar3;
    longlong *plVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    ulonglong uVar7;
    undefined8 *puVar8;

    plVar4 = (longlong *)FUN_140056ab0(param_1,1,"Game.Quest");
    if (plVar4 == (longlong *)0x0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    lVar1 = *(longlong *)(*plVar4 + 8);
    iVar2 = FUN_140056d60(param_1,2);
    if (iVar2 + -1 < 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar8 = *(undefined8 **)(param_1 + 0x10);
        uVar5 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar8 + 1) = 5;
        *puVar8 = uVar5;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        uVar3 = FUN_1400578c0(param_1);
        uVar7 = (ulonglong)*(uint *)(lVar1 + 0x48 + (longlong)(iVar2 + -1) * 4);
        puVar6 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
        puVar8 = *(undefined8 **)(param_1 + 0x10);
        *puVar8 = *puVar6;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f06f0(param_1,puVar8,L"idItem",uVar7 & 0xffffffff);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        puVar8 = *(undefined8 **)(param_1 + 0x10);
        puVar6 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
        *puVar8 = *puVar6;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f06f0(param_1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        puVar8 = *(undefined8 **)(param_1 + 0x10);
        puVar6 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
        *puVar8 = *puVar6;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400579e0(param_1);
    }
    return 1;
}



undefined8 FUN_1406687a0(longlong param_1)

{
    double *pdVar1;
    uint uVar2;
    int iVar3;
    longlong *plVar4;
    undefined8 *puVar5;
    ulonglong uVar6;
    longlong lVar7;

    plVar4 = (longlong *)FUN_140056ab0(param_1,1,"Game.Quest");
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (((puVar5 < *(undefined8 **)(param_1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
        uVar2 = FUN_140056d60(param_1,2);
        uVar6 = (ulonglong)uVar2;
    }
    else {
        uVar6 = 0xffffffff;
    }
    if (((plVar4 == (longlong *)0x0) || ((int)uVar6 < 0)) ||
        (lVar7 = *plVar4, *(int *)(lVar7 + 0x10) <= (int)uVar6)) {
        puVar5 = *(undefined8 **)(param_1 + 0x10);
        *puVar5 = 0;
        *(undefined4 *)(puVar5 + 1) = 3;
    }
    else {
        iVar3 = FUN_140551840(lVar7,uVar6);
        if ((uint)uVar6 < *(uint *)(lVar7 + 0x10)) {
            uVar2 = FUN_140551840(lVar7,uVar6 & 0xffffffff);
            if ((1 < uVar2) &&
                ((*(uint *)(*(longlong *)(lVar7 + 0x18 + (uVar6 & 0xffffffff) * 8) + 8) & 0x400) == 0)) {
                iVar3 = 100;
            }
        }
        pdVar1 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar1 + 1) = 3;
        *pdVar1 = (double)iVar3;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140668890(longlong param_1)

{
    undefined2 *puVar1;
    int iVar2;
    longlong *plVar3;
    undefined8 *puVar4;
    longlong lVar5;
    longlong lVar6;
    undefined local_28 [8];
    undefined2 *local_20;
    undefined2 *local_18;
    undefined2 *local_10;

    plVar3 = (longlong *)FUN_140056ab0(param_1,1,"Game.Quest");
    lVar6 = -1;
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (((puVar4 < *(undefined8 **)(param_1 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
        iVar2 = FUN_140056d60(param_1,2);
    }
    else {
        iVar2 = -1;
    }
    if (((plVar3 == (longlong *)0x0) || (iVar2 < 0)) || (*(int *)(*plVar3 + 0x10) <= iVar2)) {
        FUN_140058710(param_1,"",0);
    }
    else {
        local_20 = (undefined2 *)FUN_14018b280(0x10);
        local_10 = local_20 + 8;
        if (local_20 != (undefined2 *)0x0) {
            *local_20 = 0;
        }
        local_18 = local_20;
        FUN_140551d40(*plVar3,iVar2,local_28,0);
        puVar1 = local_20;
        lVar5 = FUN_14018f0e0(local_28,local_20);
        lVar5 = *(longlong *)(lVar5 + 8);
        if (lVar5 == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        else {
            do {
                lVar6 = lVar6 + 1;
            } while (*(char *)(lVar5 + lVar6) != '\0');
            FUN_140058710(param_1,lVar5,lVar6);
        }
        if (local_20 != (undefined2 *)0x0) {
            FUN_14018b900(local_20,0);
        }
        if (puVar1 != (undefined2 *)0x0) {
            FUN_14018b900(puVar1,0);
        }
    }
    return 1;
}



undefined8 FUN_1406689f0(longlong param_1)

{
    undefined2 *puVar1;
    int iVar2;
    longlong *plVar3;
    undefined8 *puVar4;
    longlong lVar5;
    longlong lVar6;
    undefined local_28 [8];
    undefined2 *local_20;
    undefined2 *local_18;
    undefined2 *local_10;

    plVar3 = (longlong *)FUN_140056ab0(param_1,1,"Game.Quest");
    lVar6 = -1;
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (((puVar4 < *(undefined8 **)(param_1 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
        iVar2 = FUN_140056d60(param_1,2);
    }
    else {
        iVar2 = -1;
    }
    if (((plVar3 == (longlong *)0x0) || (iVar2 < 0)) || (*(int *)(*plVar3 + 0x10) <= iVar2)) {
        FUN_140058710(param_1,&DAT_1409d145f,0);
    }
    else {
        local_20 = (undefined2 *)FUN_14018b280(0x10);
        local_10 = local_20 + 8;
        if (local_20 != (undefined2 *)0x0) {
            *local_20 = 0;
        }
        local_18 = local_20;
        FUN_140551d40(*plVar3,iVar2,local_28,1);
        puVar1 = local_20;
        lVar5 = FUN_14018f0e0(local_28,local_20);
        lVar5 = *(longlong *)(lVar5 + 8);
        if (lVar5 == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        else {
            do {
                lVar6 = lVar6 + 1;
            } while (*(char *)(lVar5 + lVar6) != '\0');
            FUN_140058710(param_1,lVar5,lVar6);
        }
        if (local_20 != (undefined2 *)0x0) {
            FUN_14018b900(local_20,0);
        }
        if (puVar1 != (undefined2 *)0x0) {
            FUN_14018b900(puVar1,0);
        }
    }
    return 1;
}



undefined8 FUN_140668b50(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    int iVar3;
    longlong *plVar4;
    undefined8 *puVar5;

    plVar4 = (longlong *)FUN_140056ab0();
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (((puVar5 < *(undefined8 **)(param_1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
        iVar3 = FUN_140056d60(param_1);
    }
    else {
        iVar3 = -1;
    }
    if (((plVar4 == (longlong *)0x0) || (iVar3 < 0)) || (*(int *)(*plVar4 + 0x10) < iVar3)) {
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
    }
    else {
        iVar3 = FUN_140550f70();
        puVar1 = *(uint **)(param_1 + 0x10);
        puVar1[2] = 1;
        *puVar1 = (uint)(iVar3 != 0);
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140668c10(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    int iVar3;
    longlong *plVar4;
    undefined8 *puVar5;

    plVar4 = (longlong *)FUN_140056ab0(param_1,1,"Game.Quest");
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (((puVar5 < *(undefined8 **)(param_1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
        iVar3 = FUN_140056d60(param_1);
    }
    else {
        iVar3 = -1;
    }
    if (((plVar4 == (longlong *)0x0) || (iVar3 < 0)) || (*(int *)(*plVar4 + 0x10) < iVar3)) {
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
    }
    else {
        iVar3 = FUN_140553790();
        puVar1 = *(uint **)(param_1 + 0x10);
        puVar1[2] = 1;
        *puVar1 = (uint)(iVar3 != 0);
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined4 FUN_140668cc0(longlong param_1)

{
    undefined4 uVar1;
    uint uVar2;
    int iVar3;
    longlong *plVar4;
    undefined8 *puVar5;
    int *piVar6;
    undefined4 *puVar7;
    undefined8 uVar8;
    int local_res10 [2];

    plVar4 = (longlong *)FUN_140056ab0(param_1,1,"Game.Quest");
    if (plVar4 == (longlong *)0x0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (((puVar5 < *(undefined8 **)(param_1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
        uVar2 = FUN_140056d60(param_1,2);
        if ((int)uVar2 < 0) goto LAB_140668d71;
        iVar3 = FUN_1405fbc40(*DAT_140c65b80,**(undefined4 **)(*plVar4 + 8));
        if (((iVar3 == 2) ||
             (puVar7 = (undefined4 *)*plVar4, (uint)puVar7[4] <= uVar2 && uVar2 != puVar7[4])) ||
            (*(undefined4 **)(puVar7 + (ulonglong)uVar2 * 2 + 6) == (undefined4 *)0x0))
            goto LAB_140668dd0;
        uVar1 = **(undefined4 **)(puVar7 + (ulonglong)uVar2 * 2 + 6);
        uVar8 = 2;
    }
    else {
        LAB_140668d71:
        iVar3 = FUN_1405fbc40(*DAT_140c65b80,**(undefined4 **)(*plVar4 + 8));
        if ((iVar3 == 2) && ((*(uint *)(*(longlong *)(*plVar4 + 8) + 0xc) & 0x2000) == 0))
            goto LAB_140668dd0;
        uVar8 = 1;
        puVar7 = *(undefined4 **)(*plVar4 + 8);
        uVar1 = *puVar7;
    }
    piVar6 = (int *)FUN_1403ba420(puVar7,uVar8,uVar1);
    if ((piVar6 != (int *)0x0) && (local_res10[0] = *piVar6, local_res10[0] != 0)) {
        FUN_1403d3470(param_1,local_res10);
        return 1;
    }
    LAB_140668dd0:
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140668e00(longlong param_1)

{
    undefined4 uVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;

    puVar2 = (undefined8 *)FUN_140056ab0(param_1,1,"Game.Quest");
    if (puVar2 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        if (((puVar3 < *(undefined8 **)(param_1 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
            (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
            uVar1 = FUN_140056d60(param_1,2);
        }
        else {
            uVar1 = 0xffffffff;
        }
        FUN_140553890(*puVar2,uVar1);
    }
    return 0;
}



undefined8 FUN_140668e70(undefined8 param_1)

{
    longlong lVar1;
    longlong *plVar2;
    undefined8 uVar3;

    plVar2 = (longlong *)FUN_140056ab0(param_1,1,"Game.Quest");
    if ((plVar2 != (longlong *)0x0) && (*(longlong *)(*plVar2 + 0x68) != 0)) {
        lVar1 = *(longlong *)(*(longlong *)(*plVar2 + 0x60) + 0x10);
        uVar3 = FUN_1407242b0(lVar1,*(undefined4 *)(lVar1 + 0x20));
        uVar3 = FUN_14072d5b0(param_1,uVar3);
        return uVar3;
    }
    return 0;
}



undefined8 FUN_140668ed0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    uint *puVar3;
    int iVar4;
    longlong *plVar5;
    double *pdVar6;
    double *pdVar7;
    uint uVar8;
    uint uVar9;
    longlong local_res10;
    double local_18;
    undefined4 local_10;

    plVar5 = (longlong *)FUN_140056ab0(param_1,1,"Game.Quest");
    if (plVar5 == (longlong *)0x0) {
        return 0;
    }
    pdVar6 = (double *)(*(longlong *)(param_1 + 0x18) + 0x10);
    pdVar7 = (double *)&DAT_140a12138;
    if (pdVar6 < *(double **)(param_1 + 0x10)) {
        pdVar7 = pdVar6;
    }
    uVar9 = 0;
    if (*(int *)(pdVar7 + 1) != 3) {
        uVar8 = uVar9;
        if ((*(int *)(pdVar7 + 1) != 4) || (iVar4 = FUN_14005ac80((longlong)*pdVar7 + 0x20), iVar4 == 0)
                ) goto LAB_140668f5e;
        local_10 = 3;
        pdVar7 = &local_18;
    }
    uVar8 = (int)*pdVar7;
    LAB_140668f5e:
    lVar1 = *(longlong *)(*plVar5 + 0x60);
    local_res10 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < uVar8) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res10 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res10 == lVar1) || (uVar8 < *(uint *)(local_res10 + 0x20))) {
        local_res10 = lVar1;
    }
    if (((local_res10 == lVar1) || (*(longlong *)(local_res10 + 0x28) == 0)) ||
        (uVar8 = 1, (*(byte *)(*(longlong *)(local_res10 + 0x28) + 0x10) & 1) == 0)) {
        uVar8 = uVar9;
    }
    puVar3 = *(uint **)(param_1 + 0x10);
    puVar3[2] = 1;
    *puVar3 = (uint)(uVar8 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_140669050(longlong param_1)

{
    undefined8 *puVar1;
    undefined **ppuVar2;
    longlong *plVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    undefined **ppuVar6;
    ulonglong uVar7;
    undefined **ppuVar8;
    undefined **local_28;
    undefined **local_20;
    longlong local_18;
    undefined4 local_10;

    plVar3 = (longlong *)FUN_140056ab0(param_1,1,"Game.Quest");
    ppuVar6 = (undefined **)0x0;
    if (plVar3 == (longlong *)0x0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    local_20 = (undefined **)0x0;
    local_28 = (undefined **)0x0;
    ppuVar8 = ppuVar6;
    if (*plVar3 != 0) {
        FUN_1405e6da0(*plVar3,&local_28);
        ppuVar8 = local_28;
    }
    ppuVar2 = local_20;
    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    local_20._0_4_ = FUN_1400578c0(param_1);
    local_20 = (undefined **)((ulonglong)local_20 & 0xffffffff00000000 | (ulonglong)(uint)local_20);
    if (ppuVar2 != (undefined **)0x0) {
        do {
            FUN_1400fa9e0(&local_28,*(undefined4 *)((longlong)ppuVar8 + (longlong)ppuVar6 * 4));
            ppuVar6 = (undefined **)((longlong)ppuVar6 + 1);
        } while (ppuVar6 < ppuVar2);
        param_1 = local_18;
    }
    uVar7 = (ulonglong)(uint)local_20;
    puVar5 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar7);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = *puVar5;
    *puVar1 = uVar4;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1,uVar4,uVar7 & 0xffffffff);
    if (ppuVar8 != (undefined **)0x0) {
        (**(code **)(ppuVar8[-2] + 8))(ppuVar8 + -2);
    }
    return 1;
}



undefined8 FUN_140669290(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    longlong local_res10 [3];

    plVar1 = (longlong *)FUN_140056ab0(param_1,1);
    if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
        FUN_14018ded0(local_res10,"<Q%x>");
        if (local_res10[0] == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
        lVar2 = -1;
        do {
            lVar2 = lVar2 + 1;
        } while (*(char *)(local_res10[0] + lVar2) != '\0');
        FUN_140058710(param_1,local_res10[0]);
        (**(code **)(*(longlong *)(local_res10[0] + -0x10) + 8))(local_res10[0] + -0x10);
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140669ea0(longlong param_1)

{
    uint *puVar1;
    longlong *plVar2;

    plVar2 = (longlong *)FUN_140056ab0(param_1,1,"Game.Quest");
    puVar1 = *(uint **)(param_1 + 0x10);
    if (plVar2 == (longlong *)0x0) {
        *puVar1 = 0;
    }
    else {
        *puVar1 = *(uint *)(*(longlong *)(*plVar2 + 8) + 0xc) >> 0x13 & 1;
    }
    puVar1[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140669f90(longlong param_1)

{
    uint *puVar1;
    longlong *plVar2;

    plVar2 = (longlong *)FUN_140056ab0(param_1,1,"Game.Quest");
    puVar1 = *(uint **)(param_1 + 0x10);
    if (plVar2 == (longlong *)0x0) {
        *puVar1 = 0;
    }
    else {
        *puVar1 = *(uint *)(*(longlong *)(*plVar2 + 8) + 0xc) >> 0x15 & 1;
    }
    puVar1[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14066a040(longlong param_1)

{
    float fVar1;
    float fVar2;
    double *pdVar3;
    undefined8 *puVar4;
    int iVar5;
    undefined4 uVar6;
    longlong *plVar7;
    longlong lVar8;
    float fVar9;
    float fVar10;
    undefined local_res10 [24];

    if ((DAT_140c65898 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        plVar7 = (longlong *)FUN_140056ab0(param_1,1,"Game.Quest");
        if (((plVar7 == (longlong *)0x0) || (*plVar7 == 0)) ||
            (iVar5 = FUN_1405fbc40(*DAT_140c65b80,**(undefined4 **)(*plVar7 + 8)), iVar5 == 0)) {
            puVar4 = *(undefined8 **)(param_1 + 0x10);
            *puVar4 = 0x47efffffe0000000;
            *(undefined4 *)(puVar4 + 1) = 3;
        }
        else {
            fVar9 = *(float *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x11e0);
            fVar10 = *(float *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x11e4);
            iVar5 = FUN_1405fbc40(*DAT_140c65b80,**(undefined4 **)(*plVar7 + 8));
            if (iVar5 == 2) {
                uVar6 = FUN_14054f710(*plVar7);
            }
            else if (DAT_140c65898 == 0) {
                uVar6 = 0;
            }
            else {
                uVar6 = FUN_140553bd0(*plVar7,local_res10);
            }
            lVar8 = FUN_14024b980(uVar6);
            if ((lVar8 == 0) ||
                (iVar5 = (**(code **)(*(longlong *)(DAT_140c65898 + 0x48) + 8))(DAT_140c65898 + 0x48),
                        *(int *)(lVar8 + 0x28) != iVar5)) {
                puVar4 = *(undefined8 **)(param_1 + 0x10);
                *puVar4 = 0x47efffffe0000000;
                *(undefined4 *)(puVar4 + 1) = 3;
            }
            else {
                fVar1 = *(float *)(lVar8 + 0x10);
                fVar2 = *(float *)(lVar8 + 0xc);
                pdVar3 = *(double **)(param_1 + 0x10);
                *(undefined4 *)(pdVar3 + 1) = 3;
                fVar9 = fVar9 - fVar2;
                fVar10 = fVar10 - fVar1;
                *pdVar3 = (double)SQRT(fVar9 * fVar9 + fVar10 * fVar10 + 0.0);
            }
        }
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    *puVar4 = 0x47efffffe0000000;
    *(undefined4 *)(puVar4 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14066a200(longlong param_1)

{
    uint *puVar1;
    longlong *plVar2;
    uint uVar3;

    plVar2 = (longlong *)FUN_140056ab0(param_1,1);
    puVar1 = *(uint **)(param_1 + 0x10);
    uVar3 = 0;
    if (plVar2 != (longlong *)0x0) {
        uVar3 = (uint)(*(int *)(*(longlong *)(*plVar2 + 8) + 0x14) == 3);
    }
    *puVar1 = uVar3;
    puVar1[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14066a250(longlong param_1)

{
    uint *puVar1;
    longlong *plVar2;

    plVar2 = (longlong *)FUN_140056ab0(param_1,1,"Game.Quest");
    puVar1 = *(uint **)(param_1 + 0x10);
    if (plVar2 == (longlong *)0x0) {
        *puVar1 = 0;
    }
    else {
        *puVar1 = *(uint *)(*(longlong *)(*plVar2 + 8) + 0xc) >> 0x17 & 1;
    }
    puVar1[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14066a3e0(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    longlong *plVar3;
    longlong *plVar4;
    bool bVar5;

    plVar3 = (longlong *)FUN_140056ab0(param_1,1,"Game.Quest");
    plVar4 = (longlong *)FUN_140056ab0(param_1);
    if ((plVar3 == (longlong *)0x0) || (plVar4 == (longlong *)0x0)) {
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
    }
    else {
        if ((*plVar3 == 0) || (*plVar4 == 0)) {
            bVar5 = false;
        }
        else {
            bVar5 = **(int **)(*plVar3 + 8) == **(int **)(*plVar4 + 8);
        }
        puVar1 = *(uint **)(param_1 + 0x10);
        puVar1[2] = 1;
        *puVar1 = (uint)bVar5;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14066a490(longlong param_1)

{
    longlong *plVar1;
    uint *puVar2;
    undefined4 *puVar3;
    int iVar4;
    int iVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    bool bVar9;

    lVar6 = FUN_140056ab0(param_1,1,"Game.GalacticArchiveArticle");
    lVar7 = 0;
    lVar8 = lVar7;
    if (lVar6 != 0) {
        lVar8 = *(longlong *)(lVar6 + 8);
    }
    lVar6 = FUN_140056ab0(param_1,2,"Game.GalacticArchiveArticle");
    if (lVar6 != 0) {
        lVar7 = *(longlong *)(lVar6 + 8);
    }
    if ((lVar8 == 0) || (lVar7 == 0)) {
        puVar3 = *(undefined4 **)(param_1 + 0x10);
        *puVar3 = 0;
        puVar3[2] = 1;
    }
    else {
        if ((*(longlong *)(lVar8 + 8) == 0) ||
            (plVar1 = *(longlong **)(lVar7 + 8), plVar1 == (longlong *)0x0)) {
            bVar9 = false;
        }
        else {
            iVar4 = (**(code **)(**(longlong **)(lVar8 + 8) + 0x30))();
            iVar5 = (**(code **)(*plVar1 + 0x30))(plVar1);
            bVar9 = iVar4 == iVar5;
        }
        puVar2 = *(uint **)(param_1 + 0x10);
        puVar2[2] = 1;
        *puVar2 = (uint)bVar9;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14066a570(longlong param_1)

{
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong *plVar4;
    uint uVar5;
    longlong *plVar6;
    longlong lVar7;
    uint uVar8;
    uint uVar9;
    undefined8 local_18;
    undefined4 local_10;

    plVar3 = *(longlong **)(param_1 + 0x18);
    plVar4 = *(longlong **)(param_1 + 0x10);
    plVar6 = &DAT_140a12138;
    if (plVar3 < plVar4) {
        plVar6 = plVar3;
    }
    if (*(int *)(plVar6 + 1) == 2) {
        lVar7 = *plVar6;
        LAB_14066a5b3:
        if (lVar7 != 0) {
            plVar6 = &DAT_140a12138;
            if (plVar3 < plVar4) {
                plVar6 = plVar3;
            }
            iVar2 = *(int *)(plVar6 + 1);
            if ((iVar2 == 5) || (iVar2 == 7)) {
                lVar7 = *(longlong *)(*plVar6 + 0x10);
            }
            else {
                lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xe0 + (longlong)iVar2 * 8);
            }
            if (lVar7 != 0) {
                *plVar4 = lVar7;
                *(undefined4 *)(plVar4 + 1) = 5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                lVar7 = *(longlong *)(param_1 + 0x20);
                local_18 = FUN_140062650(param_1,"Game.GalacticArchiveArticle",0x1b);
                local_10 = 4;
                FUN_14005e8e0(param_1,lVar7 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                lVar7 = *(longlong *)(param_1 + 0x10);
                uVar8 = 0;
                uVar5 = 0;
                puVar1 = (undefined8 *)(lVar7 + -0x20);
                uVar9 = uVar5;
                if (((undefined8 *)(lVar7 + -0x10) != &DAT_140a12138) && (puVar1 != &DAT_140a12138)) {
                    uVar5 = FUN_14005ac20((undefined8 *)(lVar7 + -0x10),puVar1);
                    uVar9 = uVar8;
                }
                *(undefined8 **)(param_1 + 0x10) = puVar1;
                *(undefined4 *)(&DAT_ffffffffffffffe8 + lVar7) = 1;
                *(uint *)puVar1 = uVar9 & 0xffffff00 | (uint)(uVar5 != 0);
                goto LAB_14066a697;
            }
        }
    }
    else if (*(int *)(plVar6 + 1) == 7) {
        lVar7 = *plVar6 + 0x30;
        goto LAB_14066a5b3;
    }
    *(undefined4 *)plVar4 = 0;
    *(undefined4 *)(plVar4 + 1) = 1;
    LAB_14066a697:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14066a6b0(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong *plVar3;

    lVar2 = FUN_140056ab0(param_1,1,"Game.GalacticArchiveArticle");
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
        plVar3 = &DAT_140a12138;
        if (*(longlong **)(param_1 + 0x18) < *(longlong **)(param_1 + 0x10)) {
            plVar3 = *(longlong **)(param_1 + 0x18);
        }
        if (*(int *)(plVar3 + 1) == 2) {
            lVar2 = *plVar3;
        }
        else if (*(int *)(plVar3 + 1) == 7) {
            lVar2 = *plVar3 + 0x30;
        }
        else {
            lVar2 = 0;
        }
        puVar1 = *(undefined8 **)(lVar2 + 8);
        if (puVar1 != (undefined8 *)0x0) {
            (**(code **)*puVar1)(puVar1,1);
        }
    }
    return 0;
}



undefined8 FUN_14066a730(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    bool bVar6;

    lVar3 = FUN_140056ab0(param_1,1,"Game.GalacticArchiveEntry");
    lVar4 = 0;
    lVar5 = lVar4;
    if (lVar3 != 0) {
        lVar5 = *(longlong *)(lVar3 + 8);
    }
    lVar3 = FUN_140056ab0(param_1,2,"Game.GalacticArchiveEntry");
    if (lVar3 != 0) {
        lVar4 = *(longlong *)(lVar3 + 8);
    }
    if ((lVar5 == 0) || (lVar4 == 0)) {
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
    }
    else {
        if ((*(longlong *)(lVar5 + 8) == 0) || (*(longlong *)(lVar4 + 8) == 0)) {
            bVar6 = false;
        }
        else {
            bVar6 = **(int **)(*(longlong *)(lVar5 + 8) + 8) == **(int **)(*(longlong *)(lVar4 + 8) + 8);
        }
        puVar1 = *(uint **)(param_1 + 0x10);
        puVar1[2] = 1;
        *puVar1 = (uint)bVar6;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14066a930(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong *plVar3;

    lVar2 = FUN_140056ab0(param_1,1,"Game.GalacticArchiveEntry");
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
        plVar3 = &DAT_140a12138;
        if (*(longlong **)(param_1 + 0x18) < *(longlong **)(param_1 + 0x10)) {
            plVar3 = *(longlong **)(param_1 + 0x18);
        }
        if (*(int *)(plVar3 + 1) == 2) {
            lVar2 = *plVar3;
        }
        else if (*(int *)(plVar3 + 1) == 7) {
            lVar2 = *plVar3 + 0x30;
        }
        else {
            lVar2 = 0;
        }
        puVar1 = *(undefined8 **)(lVar2 + 8);
        if (puVar1 != (undefined8 *)0x0) {
            (**(code **)*puVar1)(puVar1,1);
        }
    }
    return 0;
}



void FUN_14066a9b0(longlong param_1)

{
    short sVar1;
    short *psVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    uVar5 = 0;
    uVar4 = uVar5;
    if (*(undefined2 **)(param_1 + 8) != *(undefined2 **)(param_1 + 0x10)) {
        **(undefined2 **)(param_1 + 8) = 0;
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 8);
    }
    do {
        psVar2 = (short *)FUN_14034bdd0();
        if (psVar2 == (short *)0x0) {
            return;
        }
        sVar1 = *psVar2;
        uVar3 = uVar5;
        while (sVar1 != 0) {
            uVar3 = uVar3 + 1;
            sVar1 = psVar2[uVar3];
        }
        FUN_14001c310(param_1,psVar2,psVar2 + uVar3);
        uVar4 = uVar4 + 1;
    } while (uVar4 < 6);
    return;
}



undefined8 FUN_14066aa40(longlong param_1)

{
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined **ppuVar5;
    undefined *puVar6;
    undefined8 local_18;
    undefined4 local_10;

    FUN_1400569b0(param_1,"Game.GalacticArchiveArticle");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = puVar1[-2];
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar1 + -1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"__index",7);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    ppuVar5 = &PTR_DAT_140c5bf20;
    puVar6 = PTR_DAT_140c5bf20;
    while (puVar6 != (undefined *)0x0) {
        puVar6 = ppuVar5[1];
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        lVar3 = FUN_140060ab0(param_1,0);
        *(undefined **)(lVar3 + 0x20) = puVar6;
        plVar2 = *(longlong **)(param_1 + 0x10);
        *plVar2 = lVar3;
        *(undefined4 *)(plVar2 + 1) = 6;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        puVar6 = *ppuVar5;
        uVar4 = FUN_1400580e0(param_1,0xfffffffe);
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (puVar6[lVar3] != '\0');
        local_18 = FUN_140062650(param_1,puVar6);
        local_10 = 4;
        FUN_14005ea50(param_1,uVar4,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        uVar4 = *(undefined8 *)(param_1 + 0x10);
        ppuVar5 = ppuVar5 + 2;
        puVar6 = *ppuVar5;
    }
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    FUN_140057020(param_1,"GalacticArchiveArticle",&PTR_DAT_140b6fd20);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"LinkQueryType_All",0x11);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"LinkQueryType_Parents",0x15);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"LinkQueryType_Children",0x16);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    return 1;
}



undefined8 FUN_14066acf0(undefined8 param_1)

{
    undefined4 uVar1;
    longlong lVar2;
    undefined8 uVar3;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar2 = FUN_140056ab0(param_1,1,"Game.GalacticArchiveArticle");
        if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
            uVar1 = (**(code **)(**(longlong **)(*(longlong *)(lVar2 + 8) + 8) + 0x30))();
            uVar3 = FUN_14048d310(DAT_140c65990,uVar1);
            return uVar3;
        }
    }
    return 0;
}



undefined8 FUN_14066ad50(longlong param_1)

{
    undefined4 uVar1;
    longlong *plVar2;
    undefined8 *puVar3;
    longlong lVar4;
    longlong lVar5;
    int iVar6;
    int iVar7;
    undefined8 uVar8;
    longlong lVar9;
    undefined8 *puVar10;
    longlong lVar11;
    double dVar12;
    int local_res8;
    int iStackX12;

    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    uVar8 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar10 + 1) = 5;
    *puVar10 = uVar8;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    iVar6 = FUN_1400578c0(param_1);
    lVar5 = DAT_140c65990;
    lVar11 = *(longlong *)(*(longlong *)(DAT_140c65990 + 0x10) + 0x10);
    if (lVar11 != *(longlong *)(DAT_140c65990 + 0x10)) {
        do {
            plVar2 = *(longlong **)(lVar11 + 0x28);
            iVar7 = (**(code **)(*plVar2 + 0x48))();
            if (iVar7 != 0) {
                uVar8 = (**(code **)(*plVar2 + 0x18))(plVar2);
                iVar7 = FUN_140432f20(param_1,uVar8);
                if (iVar7 != 0) {
                    FUN_1400fb470();
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                }
            }
            lVar9 = *(longlong *)(lVar11 + 0x18);
            if (lVar9 == 0) {
                lVar9 = *(longlong *)(lVar11 + 8);
                if (lVar11 == *(longlong *)(lVar9 + 0x18)) {
                    do {
                        lVar11 = lVar9;
                        lVar9 = *(longlong *)(lVar11 + 8);
                    } while (lVar11 == *(longlong *)(lVar9 + 0x18));
                }
                if (*(longlong *)(lVar11 + 0x18) != lVar9) {
                    lVar11 = lVar9;
                }
            }
            else {
                for (lVar4 = *(longlong *)(lVar9 + 0x10); lVar11 = lVar9, lVar4 != 0;
                     lVar4 = *(longlong *)(lVar4 + 0x10)) {
                    lVar9 = lVar4;
                }
            }
        } while (lVar11 != *(longlong *)(lVar5 + 0x10));
    }
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
    if (iVar6 - 1U < *(uint *)(lVar11 + 0x38)) {
        puVar10 = (undefined8 *)((longlong)(iVar6 + -1) * 0x10 + *(longlong *)(lVar11 + 0x18));
    }
    else {
        dVar12 = (double)iVar6;
        if (dVar12 == 0.0) {
            puVar10 = *(undefined8 **)(lVar11 + 0x20);
        }
        else {
            iStackX12 = (int)((ulonglong)dVar12 >> 0x20);
            local_res8 = SUB84(dVar12,0);
            puVar10 = (undefined8 *)
                    (*(longlong *)(lVar11 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStackX12 + local_res8) %
                      (longlong)((1 << (*(byte *)(lVar11 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar10 + 3) == 3) && (dVar12 == (double)puVar10[2])) goto LAB_14066af12;
            puVar10 = (undefined8 *)puVar10[4];
        } while (puVar10 != (undefined8 *)0x0);
        puVar10 = &DAT_140a12138;
    }
    LAB_14066af12:
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    *puVar3 = *puVar10;
    uVar1 = *(undefined4 *)(puVar10 + 1);
    *(undefined4 *)(puVar3 + 1) = uVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1,uVar1,iVar6);
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14066b140(longlong param_1)

{
    uint *puVar1;
    undefined8 *puVar2;
    longlong lVar3;
    longlong lVar4;
    int iVar5;
    undefined8 uVar6;
    longlong lVar7;
    longlong lVar8;
    longlong lVar9;
    undefined8 *puVar10;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar6 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar6;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    local_10 = 1;
    local_28 = &PTR_FUN_140b569f0;
    local_18 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar6 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar6;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    local_20 = FUN_1400578c0(param_1);
    lVar4 = DAT_140c65998;
    if (DAT_140c65990 != 0) {
        lVar7 = *(longlong *)(*(longlong *)(DAT_140c65998 + 0xb0) + 0x10);
        if (lVar7 != *(longlong *)(DAT_140c65998 + 0xb0)) {
            do {
                puVar1 = (uint *)(lVar7 + 0x20);
                if (DAT_140c63840 == (code *)0x0) {
                    if ((_DAT_140c64634 == 0) && (iVar5 = FUN_14024d920(), -1 < iVar5)) {
                        lVar7 = (**(code **)(*DAT_140c64270 + 0x18))();
                        goto LAB_14066b258;
                    }
                }
                else {
                    lVar7 = (*DAT_140c63840)(&PTR_u_WorldZone_140a6e3e8,*(undefined4 *)(lVar7 + 0x20),
                                             DAT_140c63858);
                    LAB_14066b258:
                    if (lVar7 != 0) {
                        FUN_14034bdd0();
                        FUN_1400fad30(&local_28);
                    }
                }
                lVar3 = *(longlong *)(lVar4 + 0xb0);
                lVar7 = lVar3;
                if (*(longlong *)(lVar3 + 8) != 0) {
                    lVar8 = *(longlong *)(lVar3 + 8);
                    do {
                        if (*puVar1 < *(uint *)(lVar8 + 0x20)) {
                            lVar9 = *(longlong *)(lVar8 + 0x10);
                            lVar7 = lVar8;
                        }
                        else {
                            lVar9 = *(longlong *)(lVar8 + 0x18);
                        }
                        lVar8 = lVar9;
                    } while (lVar9 != 0);
                }
                param_1 = local_18;
            } while (lVar7 != lVar3);
        }
        puVar10 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),local_20);
        puVar2 = *(undefined8 **)(param_1 + 0x10);
        *puVar2 = *puVar10;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar10 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    if (param_1 != 0) {
        FUN_1400579e0(param_1);
    }
    return 1;
}



undefined8 FUN_14066b300(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    undefined8 uVar3;
    longlong lVar4;
    undefined local_28 [8];
    longlong local_20;

    if ((((*(longlong *)(DAT_140c65898 + 0x78) == 0) || (lVar2 = FUN_140056ab0(param_1,1), lVar2 == 0)
         ) || (*(longlong *)(lVar2 + 8) == 0)) ||
        (plVar1 = *(longlong **)(*(longlong *)(lVar2 + 8) + 8), plVar1 == (longlong *)0x0)) {
        lVar2 = FUN_14018f0e0(local_28,&DAT_1409f499c);
        if (*(longlong *)(lVar2 + 8) == 0) goto LAB_14066b396;
        lVar4 = -1;
        do {
            lVar4 = lVar4 + 1;
        } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar4) != '\0');
    }
    else {
        (**(code **)(*plVar1 + 0x28))();
        uVar3 = FUN_14034bdd0();
        lVar2 = FUN_14018f0e0(local_28,uVar3);
        if (*(longlong *)(lVar2 + 8) == 0) {
            LAB_14066b396:
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            goto LAB_14066b3c2;
        }
        lVar4 = -1;
        do {
            lVar4 = lVar4 + 1;
        } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar4) != '\0');
    }
    FUN_140058710(param_1);
    LAB_14066b3c2:
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
}



undefined8 FUN_14066b5b0(longlong param_1)

{
    longlong *plVar1;
    ulonglong uVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;
    longlong lVar6;
    undefined local_28 [8];
    longlong local_20;

    if ((((*(longlong *)(DAT_140c65898 + 0x78) == 0) || (lVar4 = FUN_140056ab0(param_1,1), lVar4 == 0)
         ) || (*(longlong *)(lVar4 + 8) == 0)) ||
        (plVar1 = *(longlong **)(*(longlong *)(lVar4 + 8) + 8), plVar1 == (longlong *)0x0)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    else {
        plVar5 = (longlong *)FUN_14066acf0(param_1);
        if (((plVar5 != (longlong *)0x0) && (iVar3 = (**(code **)(*plVar5 + 0x48))(plVar5), iVar3 != 0))
            || (lVar4 = (**(code **)(*plVar1 + 0x28))(plVar1), (*(byte *)(lVar4 + 0x6c) & 1) == 0)) {
            lVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
            uVar2 = *(ulonglong *)(lVar4 + 0x88);
            if (uVar2 == 0) {
                lVar4 = 0;
            }
            else if (DAT_140c3fe70 < uVar2) {
                lVar4 = 0;
            }
            else {
                lVar4 = DAT_140c3fe68 + uVar2;
            }
            lVar4 = FUN_14018f0e0(local_28,lVar4);
            if (*(longlong *)(lVar4 + 8) == 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            }
            else {
                lVar6 = -1;
                do {
                    lVar6 = lVar6 + 1;
                } while (*(char *)(*(longlong *)(lVar4 + 8) + lVar6) != '\0');
                FUN_140058710(param_1);
            }
            if (local_20 == 0) {
                return 1;
            }
            FUN_14018b900(local_20,0);
            return 1;
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14066b6f0(longlong param_1)

{
    longlong lVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    int iVar4;
    undefined8 uVar5;
    longlong lVar6;
    longlong *plVar7;
    longlong *plVar8;
    longlong lVar9;
    undefined8 *puVar10;
    undefined8 *puVar11;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar11 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar11 + 1) = 5;
    *puVar11 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(param_1);
    local_20 = uVar2;
    if (((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
         (lVar6 = FUN_140056ab0(param_1,1,"Game.GalacticArchiveArticle"), lVar6 != 0)) &&
        (*(longlong *)(lVar6 + 8) != 0)) {
        uVar3 = (**(code **)(**(longlong **)(*(longlong *)(lVar6 + 8) + 8) + 0x30))();
        plVar7 = (longlong *)FUN_14048d310(DAT_140c65990,uVar3);
        if ((plVar7 != (longlong *)0x0) && (iVar4 = (**(code **)(*plVar7 + 0x48))(plVar7), iVar4 != 0))
        {
            plVar8 = (longlong *)(**(code **)(*plVar7 + 0x18))(plVar7);
            lVar6 = (**(code **)(*plVar8 + 0x20))(plVar8);
            lVar6 = *(longlong *)(*(longlong *)(lVar6 + 8) + 0x10);
            plVar8 = (longlong *)(**(code **)(*plVar7 + 0x18))(plVar7);
            lVar9 = (**(code **)(*plVar8 + 0x20))(plVar8);
            if (lVar6 != *(longlong *)(lVar9 + 8)) {
                do {
                    lVar9 = *(longlong *)(lVar6 + 0x28);
                    iVar4 = (**(code **)(*plVar7 + 0x58))(plVar7,**(undefined4 **)(lVar9 + 8));
                    if (((iVar4 != 0) || ((*(byte *)(*(longlong *)(lVar9 + 8) + 0x54) & 2) == 0)) &&
                        (iVar4 = FUN_140433000(param_1,lVar9), iVar4 != 0)) {
                        FUN_1400fb470(&local_28);
                        *(longlong *)(local_18 + 0x10) = *(longlong *)(local_18 + 0x10) + -0x10;
                        param_1 = local_18;
                    }
                    lVar9 = *(longlong *)(lVar6 + 0x18);
                    if (lVar9 == 0) {
                        lVar9 = *(longlong *)(lVar6 + 8);
                        if (lVar6 == *(longlong *)(lVar9 + 0x18)) {
                            do {
                                lVar6 = lVar9;
                                lVar9 = *(longlong *)(lVar6 + 8);
                            } while (lVar6 == *(longlong *)(lVar9 + 0x18));
                        }
                        if (*(longlong *)(lVar6 + 0x18) != lVar9) {
                            lVar6 = lVar9;
                        }
                    }
                    else {
                        for (lVar1 = *(longlong *)(lVar9 + 0x10); lVar6 = lVar9, lVar1 != 0;
                             lVar1 = *(longlong *)(lVar1 + 0x10)) {
                            lVar9 = lVar1;
                        }
                    }
                    plVar8 = (longlong *)(**(code **)(*plVar7 + 0x18))(plVar7);
                    lVar9 = (**(code **)(*plVar8 + 0x20))(plVar8);
                    uVar2 = local_20;
                } while (lVar6 != *(longlong *)(lVar9 + 8));
            }
            puVar10 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
            puVar11 = *(undefined8 **)(param_1 + 0x10);
            *puVar11 = *puVar10;
            *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar10 + 1);
            goto LAB_14066b8f4;
        }
    }
    puVar11 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar11 + 1) = 0;
    LAB_14066b8f4:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1,puVar11,uVar2);
    return 1;
}



undefined8 FUN_14066ba60(longlong param_1)

{
    double *pdVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    int iVar4;
    longlong lVar5;
    longlong *plVar6;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar5 = FUN_140056ab0(param_1,1,"Game.GalacticArchiveArticle");
        if ((lVar5 != 0) && (*(longlong *)(lVar5 + 8) != 0)) {
            uVar3 = (**(code **)(**(longlong **)(*(longlong *)(lVar5 + 8) + 8) + 0x30))();
            plVar6 = (longlong *)FUN_14048d310(DAT_140c65990,uVar3);
            if (plVar6 != (longlong *)0x0) {
                iVar4 = (**(code **)(*plVar6 + 0x48))(plVar6);
                if (iVar4 != 0) {
                    lVar5 = (**(code **)(*plVar6 + 0x20))(plVar6);
                    pdVar1 = *(double **)(param_1 + 0x10);
                    iVar4 = *(int *)(lVar5 + 4);
                    *(undefined4 *)(pdVar1 + 1) = 3;
                    *pdVar1 = (double)iVar4;
                    goto LAB_14066bafc;
                }
            }
        }
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 3;
    LAB_14066bafc:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14066bb20(longlong param_1)

{
    undefined4 uVar1;
    int iVar2;
    longlong lVar3;
    longlong *plVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined local_28 [8];
    longlong local_20;

    if (((*(longlong *)(DAT_140c65898 + 0x78) == 0) || (lVar3 = FUN_140056ab0(param_1,1), lVar3 == 0))
        || (*(longlong *)(lVar3 + 8) == 0)) {
        LAB_14066bc0c:
        lVar3 = FUN_14018f0e0(local_28,&DAT_1409f4984);
        if (*(longlong *)(lVar3 + 8) == 0) {
            LAB_14066bc26:
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            goto LAB_14066bc52;
        }
        lVar6 = -1;
        do {
            lVar6 = lVar6 + 1;
        } while (*(char *)(*(longlong *)(lVar3 + 8) + lVar6) != '\0');
    }
    else {
        uVar1 = (**(code **)(**(longlong **)(*(longlong *)(lVar3 + 8) + 8) + 0x30))();
        plVar4 = (longlong *)FUN_14048d310(DAT_140c65990,uVar1);
        if ((plVar4 == (longlong *)0x0) || (iVar2 = (**(code **)(*plVar4 + 0x48))(plVar4), iVar2 == 0))
            goto LAB_14066bc0c;
        lVar3 = (**(code **)(*plVar4 + 0x20))(plVar4);
        lVar3 = FUN_14024db80(*(undefined4 *)(lVar3 + 0x80));
        if (lVar3 != 0) {
            uVar5 = FUN_14034bdd0();
            lVar3 = FUN_14018f0e0(local_28,uVar5);
            if (*(longlong *)(lVar3 + 8) != 0) {
                lVar6 = -1;
                do {
                    lVar6 = lVar6 + 1;
                } while (*(char *)(*(longlong *)(lVar3 + 8) + lVar6) != '\0');
                goto LAB_14066bc4a;
            }
            goto LAB_14066bc26;
        }
        lVar3 = FUN_14018f0e0(local_28,&DAT_1409f4934);
        if (*(longlong *)(lVar3 + 8) == 0) goto LAB_14066bc26;
        lVar6 = -1;
        do {
            lVar6 = lVar6 + 1;
        } while (*(char *)(*(longlong *)(lVar3 + 8) + lVar6) != '\0');
    }
    LAB_14066bc4a:
    FUN_140058710(param_1);
    LAB_14066bc52:
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
}



undefined8 FUN_14066bc80(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.GalacticArchiveArticle");
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
            (**(code **)(**(longlong **)(*(longlong *)(lVar4 + 8) + 8) + 0x30))();
            plVar5 = (longlong *)FUN_14048d310(DAT_140c65990);
            if (plVar5 != (longlong *)0x0) {
                iVar3 = (**(code **)(*plVar5 + 0x48))(plVar5);
                if (iVar3 != 0) {
                    iVar3 = (**(code **)(*plVar5 + 0x40))(plVar5);
                    puVar1 = *(uint **)(param_1 + 0x10);
                    puVar1[2] = 1;
                    *puVar1 = (uint)(iVar3 != 0);
                    goto LAB_14066bd15;
                }
            }
        }
    }
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    *puVar2 = 0;
    puVar2[2] = 1;
    LAB_14066bd15:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14066bf10(longlong param_1)

{
    ulonglong uVar1;
    undefined4 uVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;
    longlong lVar6;
    undefined local_28 [8];
    longlong local_20;

    if (((*(longlong *)(DAT_140c65898 + 0x78) != 0) && (lVar4 = FUN_140056ab0(param_1,1), lVar4 != 0))
        && (*(longlong *)(lVar4 + 8) != 0)) {
        uVar2 = (**(code **)(**(longlong **)(*(longlong *)(lVar4 + 8) + 8) + 0x30))();
        plVar5 = (longlong *)FUN_14048d310(DAT_140c65990,uVar2);
        if ((plVar5 != (longlong *)0x0) && (iVar3 = (**(code **)(*plVar5 + 0x48))(plVar5), iVar3 != 0))
        {
            lVar4 = (**(code **)(*plVar5 + 0x20))(plVar5);
            uVar1 = *(ulonglong *)(lVar4 + 8);
            if (uVar1 == 0) {
                lVar4 = 0;
            }
            else if (DAT_140c3fe70 < uVar1) {
                lVar4 = 0;
            }
            else {
                lVar4 = DAT_140c3fe68 + uVar1;
            }
            lVar4 = FUN_14018f0e0(local_28,lVar4);
            if (*(longlong *)(lVar4 + 8) == 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            }
            else {
                lVar6 = -1;
                do {
                    lVar6 = lVar6 + 1;
                } while (*(char *)(*(longlong *)(lVar4 + 8) + lVar6) != '\0');
                FUN_140058710(param_1);
            }
            if (local_20 == 0) {
                return 1;
            }
            FUN_14018b900(local_20,0);
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14066c040(longlong param_1)

{
    double *pdVar1;
    undefined4 uVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.GalacticArchiveArticle");
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
            uVar2 = (**(code **)(**(longlong **)(*(longlong *)(lVar4 + 8) + 8) + 0x30))();
            plVar5 = (longlong *)FUN_14048d310(DAT_140c65990,uVar2);
            if (plVar5 != (longlong *)0x0) {
                iVar3 = (**(code **)(*plVar5 + 0x48))(plVar5);
                if (iVar3 != 0) {
                    lVar4 = (**(code **)(*plVar5 + 0x20))(plVar5);
                    pdVar1 = *(double **)(param_1 + 0x10);
                    iVar3 = *(int *)(lVar4 + 4);
                    *(undefined4 *)(pdVar1 + 1) = 3;
                    *pdVar1 = (double)iVar3;
                    goto LAB_14066c0d5;
                }
            }
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    LAB_14066c0d5:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14066c0f0(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.GalacticArchiveArticle");
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
            (**(code **)(**(longlong **)(*(longlong *)(lVar4 + 8) + 8) + 0x30))();
            plVar5 = (longlong *)FUN_14048d310(DAT_140c65990);
            if (plVar5 != (longlong *)0x0) {
                iVar3 = (**(code **)(*plVar5 + 0x48))(plVar5);
                if (iVar3 != 0) {
                    iVar3 = (**(code **)(*plVar5 + 0x50))(plVar5);
                    puVar1 = *(uint **)(param_1 + 0x10);
                    puVar1[2] = 1;
                    *puVar1 = (uint)(iVar3 != 0);
                    goto LAB_14066c185;
                }
            }
        }
    }
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    *puVar2 = 0;
    puVar2[2] = 1;
    LAB_14066c185:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14066c1a0(undefined8 param_1)

{
    uint uVar1;
    undefined4 uVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;
    undefined4 local_res10 [6];

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.GalacticArchiveArticle");
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
            uVar2 = (**(code **)(**(longlong **)(*(longlong *)(lVar4 + 8) + 8) + 0x30))();
            plVar5 = (longlong *)FUN_14048d310(DAT_140c65990,uVar2);
            if (plVar5 != (longlong *)0x0) {
                iVar3 = (**(code **)(*plVar5 + 0x48))(plVar5);
                if ((iVar3 != 0) &&
                    ((uVar1 = *(uint *)(plVar5 + 2), (uVar1 >> 0x1e & 1) == 0 ||
                                                     (*(uint *)((longlong)plVar5 + 0x14) != uVar1)))) {
                    *(uint *)((longlong)plVar5 + 0x14) =
                            *(uint *)((longlong)plVar5 + 0x14) | uVar1 | 0x40000000;
                    *(uint *)(plVar5 + 2) = uVar1 | 0x40000000;
                    local_res10[0] = 0;
                    local_res10[0] = (**(code **)(*plVar5 + 0x10))(plVar5);
                    FUN_1403f4900(DAT_140c65898,0x105,local_res10);
                }
            }
        }
    }
    return 0;
}



undefined8 FUN_14066c540(longlong param_1)

{
    undefined4 uVar1;
    int iVar2;
    longlong lVar3;
    longlong *plVar4;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar3 = FUN_140056ab0(param_1,1,"Game.GalacticArchiveArticle");
        if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
            uVar1 = (**(code **)(**(longlong **)(*(longlong *)(lVar3 + 8) + 8) + 0x30))();
            plVar4 = (longlong *)FUN_14048d310(DAT_140c65990,uVar1);
            if (plVar4 != (longlong *)0x0) {
                iVar2 = (**(code **)(*plVar4 + 0x48))(plVar4);
                if (iVar2 != 0) {
                    lVar3 = (**(code **)(*plVar4 + 0x20))(plVar4);
                    if (*(int *)(lVar3 + 0x84) != 0) {
                        lVar3 = (**(code **)(*plVar4 + 0x20))(plVar4);
                        FUN_14066db90(param_1,lVar3 + 0x84);
                        return 1;
                    }
                    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                    goto LAB_14066c5fd;
                }
            }
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    LAB_14066c5fd:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14066c620(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    longlong local_res10 [3];

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar2 = FUN_140056ab0(param_1,1);
        if (((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) &&
            (plVar1 = *(longlong **)(*(longlong *)(lVar2 + 8) + 8), plVar1 != (longlong *)0x0)) {
            (**(code **)(*plVar1 + 0x28))();
            FUN_14018ded0(local_res10,"<A%x>");
            if (local_res10[0] == 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
            lVar2 = -1;
            do {
                lVar2 = lVar2 + 1;
            } while (*(char *)(local_res10[0] + lVar2) != '\0');
            FUN_140058710(param_1,local_res10[0]);
            (**(code **)(*(longlong *)(local_res10[0] + -0x10) + 8))(local_res10[0] + -0x10);
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14066c710(longlong param_1)

{
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined **ppuVar5;
    undefined *puVar6;
    undefined8 local_18;
    undefined4 local_10;

    FUN_1400569b0(param_1,"Game.GalacticArchiveEntry");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = puVar1[-2];
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar1 + -1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"__index",7);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    ppuVar5 = &PTR_DAT_140c5be20;
    puVar6 = PTR_DAT_140c5be20;
    while (puVar6 != (undefined *)0x0) {
        puVar6 = ppuVar5[1];
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        lVar3 = FUN_140060ab0(param_1,0);
        *(undefined **)(lVar3 + 0x20) = puVar6;
        plVar2 = *(longlong **)(param_1 + 0x10);
        *plVar2 = lVar3;
        *(undefined4 *)(plVar2 + 1) = 6;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        puVar6 = *ppuVar5;
        uVar4 = FUN_1400580e0(param_1,0xfffffffe);
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (puVar6[lVar3] != '\0');
        local_18 = FUN_140062650(param_1,puVar6);
        local_10 = 4;
        FUN_14005ea50(param_1,uVar4,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        uVar4 = *(undefined8 *)(param_1 + 0x10);
        ppuVar5 = ppuVar5 + 2;
        puVar6 = *ppuVar5;
    }
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    FUN_140057020(param_1,"GalacticArchiveEntry",&PTR_DAT_140b6fd00);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"ArchiveEntryEnum_Text",0x15);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"ArchiveEntryEnum_TextAboveArt",0x1d);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"ArchiveEntryEnum_TextBelowArt",0x1d);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"ArchiveEntryEnum_EldanArchive",0x1d);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"ArchiveEntryHeaderEnum_Text",0x1b);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"ArchiveEntryHeaderEnum_TextWithPortrait",0x27);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"ArchiveEntryHeaderEnum_TextWithIcon",0x23);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    return 1;
}



undefined8 FUN_14066cb20(longlong param_1)

{
    undefined4 *puVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined local_28 [8];
    longlong local_20;

    if (((*(longlong *)(DAT_140c65898 + 0x78) == 0) || (lVar2 = FUN_140056ab0(param_1,1), lVar2 == 0))
        || (*(longlong *)(lVar2 + 8) == 0)) {
        lVar2 = 0;
    }
    else {
        puVar1 = *(undefined4 **)(*(longlong *)(*(longlong *)(lVar2 + 8) + 8) + 8);
        lVar2 = FUN_14066dab0(puVar1,*puVar1);
    }
    if (((*(longlong *)(DAT_140c65898 + 0x78) == 0) || (lVar3 = FUN_140056ab0(param_1,1), lVar3 == 0))
        || ((*(longlong *)(lVar3 + 8) == 0 ||
             ((*(longlong *)(*(longlong *)(lVar3 + 8) + 8) == 0 || (lVar2 == 0)))))) {
        lVar2 = FUN_14018f0e0(local_28,&DAT_1409f4a7c);
        if (*(longlong *)(lVar2 + 8) == 0) goto LAB_14066cbfa;
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar3) != '\0');
    }
    else {
        uVar4 = FUN_14034bdd0();
        lVar2 = FUN_14018f0e0(local_28,uVar4);
        if (*(longlong *)(lVar2 + 8) == 0) {
            LAB_14066cbfa:
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            goto LAB_14066cc22;
        }
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar3) != '\0');
    }
    FUN_140058710(param_1);
    LAB_14066cc22:
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
}



undefined8 FUN_14066cc50(longlong param_1)

{
    undefined4 *puVar1;
    bool bVar2;
    undefined2 *puVar3;
    int iVar4;
    longlong lVar5;
    longlong *plVar6;
    longlong lVar7;
    undefined local_28 [8];
    undefined2 *local_20;
    undefined2 *local_18;
    undefined2 *local_10;

    plVar6 = (longlong *)0x0;
    if (((*(longlong *)(DAT_140c65898 + 0x78) != 0) && (lVar5 = FUN_140056ab0(param_1,1), lVar5 != 0))
        && (*(longlong *)(lVar5 + 8) != 0)) {
        puVar1 = *(undefined4 **)(*(longlong *)(*(longlong *)(lVar5 + 8) + 8) + 8);
        plVar6 = (longlong *)FUN_14066dab0(puVar1,*puVar1);
    }
    bVar2 = false;
    if ((((*(longlong *)(DAT_140c65898 + 0x78) == 0) || (lVar5 = FUN_140056ab0(param_1,1), lVar5 == 0)
         ) || ((*(longlong *)(lVar5 + 8) == 0 ||
                ((lVar5 = *(longlong *)(*(longlong *)(lVar5 + 8) + 8), lVar5 == 0 ||
                                                                       (plVar6 == (longlong *)0x0)))))) ||
        (iVar4 = (**(code **)(*plVar6 + 0x58))(plVar6,**(undefined4 **)(lVar5 + 8)), iVar4 == 0)) {
        lVar5 = FUN_14018f0e0(local_28,&DAT_1409f4acc);
        if (*(longlong *)(lVar5 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            puVar3 = local_20;
        }
        else {
            lVar7 = -1;
            do {
                lVar7 = lVar7 + 1;
            } while (*(char *)(*(longlong *)(lVar5 + 8) + lVar7) != '\0');
            FUN_140058710(param_1);
            puVar3 = local_20;
        }
    }
    else {
        if (((DAT_140c65970 != 0) && (*(int *)(DAT_140c65970 + 8) == 2)) &&
            ((*(byte *)(*(longlong *)(lVar5 + 8) + 0x54) & 1) != 0)) {
            bVar2 = true;
        }
        local_20 = (undefined2 *)FUN_14018b280(0x10);
        local_10 = local_20 + 8;
        if (local_20 != (undefined2 *)0x0) {
            *local_20 = 0;
        }
        if (bVar2) {
            lVar5 = *(longlong *)(lVar5 + 8) + 0x20;
        }
        else {
            lVar5 = *(longlong *)(lVar5 + 8) + 8;
        }
        local_18 = local_20;
        FUN_14066a9b0(local_28,lVar5);
        puVar3 = local_20;
        lVar5 = FUN_14018f0e0(local_28,local_20);
        if (*(longlong *)(lVar5 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        else {
            lVar7 = -1;
            do {
                lVar7 = lVar7 + 1;
            } while (*(char *)(*(longlong *)(lVar5 + 8) + lVar7) != '\0');
            FUN_140058710(param_1);
        }
        if (local_20 != (undefined2 *)0x0) {
            FUN_14018b900(local_20,0);
        }
    }
    if (puVar3 != (undefined2 *)0x0) {
        FUN_14018b900(puVar3,0);
    }
    return 1;
}



undefined8 FUN_14066d0c0(longlong param_1)

{
    undefined4 *puVar1;
    uint *puVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *)0x0;
    if (((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
         (lVar4 = FUN_140056ab0(param_1,1,"Game.GalacticArchiveEntry"), lVar4 != 0)) &&
        (*(longlong *)(lVar4 + 8) != 0)) {
        puVar1 = *(undefined4 **)(*(longlong *)(*(longlong *)(lVar4 + 8) + 8) + 8);
        plVar5 = (longlong *)FUN_14066dab0(puVar1,*puVar1);
    }
    if (((*(longlong *)(DAT_140c65898 + 0x78) == 0) ||
         (lVar4 = FUN_140056ab0(param_1,1,"Game.GalacticArchiveEntry"), lVar4 == 0)) ||
        ((*(longlong *)(lVar4 + 8) == 0 ||
          ((lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + 8), lVar4 == 0 ||
                                                                 (plVar5 == (longlong *)0x0)))))) {
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        *puVar1 = 0;
        puVar1[2] = 1;
    }
    else {
        iVar3 = (**(code **)(*plVar5 + 0x58))(plVar5,**(undefined4 **)(lVar4 + 8));
        puVar2 = *(uint **)(param_1 + 0x10);
        puVar2[2] = 1;
        *puVar2 = (uint)(iVar3 != 0);
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14066d430(longlong param_1)

{
    undefined4 *puVar1;
    double *pdVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;

    if (*(longlong *)(DAT_140c65898 + 0x78) == 0) {
        LAB_14066d47e:
        plVar5 = (longlong *)0x0;
    }
    else {
        lVar4 = FUN_140056ab0(param_1,1,"Game.GalacticArchiveEntry");
        if ((lVar4 == 0) || (*(longlong *)(lVar4 + 8) == 0)) goto LAB_14066d47e;
        puVar1 = *(undefined4 **)(*(longlong *)(*(longlong *)(lVar4 + 8) + 8) + 8);
        plVar5 = (longlong *)FUN_14066dab0(puVar1,*puVar1);
    }
    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.GalacticArchiveEntry");
        if ((((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) &&
             (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + 8), lVar4 != 0)) &&
            (plVar5 != (longlong *)0x0)) {
            iVar3 = (**(code **)(*plVar5 + 0x58))(plVar5,**(undefined4 **)(lVar4 + 8));
            if (iVar3 != 0) {
                pdVar2 = *(double **)(param_1 + 0x10);
                iVar3 = *(int *)(*(longlong *)(lVar4 + 8) + 0x58);
                *(undefined4 *)(pdVar2 + 1) = 3;
                *pdVar2 = (double)iVar3;
                goto LAB_14066d500;
            }
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    LAB_14066d500:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14066d520(longlong param_1)

{
    undefined4 *puVar1;
    double *pdVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;

    if (*(longlong *)(DAT_140c65898 + 0x78) == 0) {
        LAB_14066d56e:
        plVar5 = (longlong *)0x0;
    }
    else {
        lVar4 = FUN_140056ab0(param_1,1,"Game.GalacticArchiveEntry");
        if ((lVar4 == 0) || (*(longlong *)(lVar4 + 8) == 0)) goto LAB_14066d56e;
        puVar1 = *(undefined4 **)(*(longlong *)(*(longlong *)(lVar4 + 8) + 8) + 8);
        plVar5 = (longlong *)FUN_14066dab0(puVar1,*puVar1);
    }
    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.GalacticArchiveEntry");
        if ((((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) &&
             (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + 8), lVar4 != 0)) &&
            (plVar5 != (longlong *)0x0)) {
            iVar3 = (**(code **)(*plVar5 + 0x58))(plVar5,**(undefined4 **)(lVar4 + 8));
            if (iVar3 != 0) {
                pdVar2 = *(double **)(param_1 + 0x10);
                iVar3 = *(int *)(*(longlong *)(lVar4 + 8) + 0x50);
                *(undefined4 *)(pdVar2 + 1) = 3;
                *pdVar2 = (double)iVar3;
                goto LAB_14066d5f0;
            }
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    LAB_14066d5f0:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14066d610(longlong param_1)

{
    undefined4 *puVar1;
    ulonglong uVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;
    longlong lVar6;
    undefined local_28 [8];
    longlong local_20;

    if (((*(longlong *)(DAT_140c65898 + 0x78) == 0) ||
         (lVar4 = FUN_140056ab0(param_1,1,"Game.GalacticArchiveEntry"), lVar4 == 0)) ||
        (*(longlong *)(lVar4 + 8) == 0)) {
        plVar5 = (longlong *)0x0;
    }
    else {
        puVar1 = *(undefined4 **)(*(longlong *)(*(longlong *)(lVar4 + 8) + 8) + 8);
        plVar5 = (longlong *)FUN_14066dab0(puVar1,*puVar1);
    }
    if ((((*(longlong *)(DAT_140c65898 + 0x78) == 0) ||
          (lVar4 = FUN_140056ab0(param_1,1,"Game.GalacticArchiveEntry"), lVar4 == 0)) ||
         ((*(longlong *)(lVar4 + 8) == 0 ||
           ((lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + 8), lVar4 == 0 ||
                                                                  (plVar5 == (longlong *)0x0)))))) ||
        (iVar3 = (**(code **)(*plVar5 + 0x58))(plVar5,**(undefined4 **)(lVar4 + 8)), iVar3 == 0)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar2 = *(ulonglong *)(*(longlong *)(lVar4 + 8) + 0x40);
    if (uVar2 == 0) {
        lVar4 = 0;
    }
    else if (DAT_140c3fe70 < uVar2) {
        lVar4 = 0;
    }
    else {
        lVar4 = DAT_140c3fe68 + uVar2;
    }
    lVar4 = FUN_14018f0e0(local_28,lVar4);
    if (*(longlong *)(lVar4 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar6 = -1;
        do {
            lVar6 = lVar6 + 1;
        } while (*(char *)(*(longlong *)(lVar4 + 8) + lVar6) != '\0');
        FUN_140058710(param_1);
    }
    if (local_20 == 0) {
        return 1;
    }
    FUN_14018b900(local_20,0);
    return 1;
}



undefined8 FUN_14066d770(longlong param_1)

{
    undefined4 *puVar1;
    double *pdVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;

    if (*(longlong *)(DAT_140c65898 + 0x78) == 0) {
        LAB_14066d7be:
        plVar5 = (longlong *)0x0;
    }
    else {
        lVar4 = FUN_140056ab0(param_1,1,"Game.GalacticArchiveEntry");
        if ((lVar4 == 0) || (*(longlong *)(lVar4 + 8) == 0)) goto LAB_14066d7be;
        puVar1 = *(undefined4 **)(*(longlong *)(*(longlong *)(lVar4 + 8) + 8) + 8);
        plVar5 = (longlong *)FUN_14066dab0(puVar1,*puVar1);
    }
    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.GalacticArchiveEntry");
        if ((((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) &&
             (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + 8), lVar4 != 0)) &&
            (plVar5 != (longlong *)0x0)) {
            iVar3 = (**(code **)(*plVar5 + 0x58))(plVar5,**(undefined4 **)(lVar4 + 8));
            if (iVar3 != 0) {
                pdVar2 = *(double **)(param_1 + 0x10);
                iVar3 = *(int *)(*(longlong *)(lVar4 + 8) + 0x38);
                *(undefined4 *)(pdVar2 + 1) = 3;
                *pdVar2 = (double)iVar3;
                goto LAB_14066d840;
            }
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    LAB_14066d840:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14066d860(longlong param_1)

{
    undefined4 *puVar1;
    ulonglong uVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;
    longlong lVar6;
    undefined local_28 [8];
    longlong local_20;

    if (((*(longlong *)(DAT_140c65898 + 0x78) == 0) ||
         (lVar4 = FUN_140056ab0(param_1,1,"Game.GalacticArchiveEntry"), lVar4 == 0)) ||
        (*(longlong *)(lVar4 + 8) == 0)) {
        plVar5 = (longlong *)0x0;
    }
    else {
        puVar1 = *(undefined4 **)(*(longlong *)(*(longlong *)(lVar4 + 8) + 8) + 8);
        plVar5 = (longlong *)FUN_14066dab0(puVar1,*puVar1);
    }
    if ((((*(longlong *)(DAT_140c65898 + 0x78) == 0) ||
          (lVar4 = FUN_140056ab0(param_1,1,"Game.GalacticArchiveEntry"), lVar4 == 0)) ||
         ((*(longlong *)(lVar4 + 8) == 0 ||
           ((lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + 8), lVar4 == 0 ||
                                                                  (plVar5 == (longlong *)0x0)))))) ||
        (iVar3 = (**(code **)(*plVar5 + 0x58))(plVar5,**(undefined4 **)(lVar4 + 8)), iVar3 == 0)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar2 = *(ulonglong *)(*(longlong *)(lVar4 + 8) + 0x48);
    if (uVar2 == 0) {
        lVar4 = 0;
    }
    else if (DAT_140c3fe70 < uVar2) {
        lVar4 = 0;
    }
    else {
        lVar4 = DAT_140c3fe68 + uVar2;
    }
    lVar4 = FUN_14018f0e0(local_28,lVar4);
    if (*(longlong *)(lVar4 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar6 = -1;
        do {
            lVar6 = lVar6 + 1;
        } while (*(char *)(*(longlong *)(lVar4 + 8) + lVar6) != '\0');
        FUN_140058710(param_1);
    }
    if (local_20 == 0) {
        return 1;
    }
    FUN_14018b900(local_20,0);
    return 1;
}



undefined8 FUN_14066d9c0(longlong param_1)

{
    undefined4 *puVar1;
    int iVar2;
    longlong lVar3;
    longlong *plVar4;

    if (((*(longlong *)(DAT_140c65898 + 0x78) == 0) ||
         (lVar3 = FUN_140056ab0(param_1,1,"Game.GalacticArchiveEntry"), lVar3 == 0)) ||
        (*(longlong *)(lVar3 + 8) == 0)) {
        plVar4 = (longlong *)0x0;
    }
    else {
        puVar1 = *(undefined4 **)(*(longlong *)(*(longlong *)(lVar3 + 8) + 8) + 8);
        plVar4 = (longlong *)FUN_14066dab0(puVar1,*puVar1);
    }
    if ((((*(longlong *)(DAT_140c65898 + 0x78) == 0) ||
          (lVar3 = FUN_140056ab0(param_1,1,"Game.GalacticArchiveEntry"), lVar3 == 0)) ||
         ((*(longlong *)(lVar3 + 8) == 0 ||
           ((lVar3 = *(longlong *)(*(longlong *)(lVar3 + 8) + 8), lVar3 == 0 ||
                                                                  (plVar4 == (longlong *)0x0)))))) ||
        (iVar2 = (**(code **)(*plVar4 + 0x58))(plVar4,**(undefined4 **)(lVar3 + 8)), iVar2 == 0)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    else {
        if (*(int *)(*(longlong *)(lVar3 + 8) + 0x5c) != 0) {
            FUN_14066db90(param_1);
            return 1;
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14066dab0(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong lVar4;
    uint uVar5;
    longlong local_res8;

    lVar4 = DAT_140c65990;
    lVar1 = *(longlong *)(DAT_140c65998 + 0x30);
    local_res8 = lVar1;
    lVar3 = *(longlong *)(lVar1 + 8);
    while (lVar3 != 0) {
        if (*(uint *)(lVar3 + 0x20) < param_2) {
            lVar3 = *(longlong *)(lVar3 + 0x18);
        }
        else {
            local_res8 = lVar3;
            lVar3 = *(longlong *)(lVar3 + 0x10);
        }
    }
    if ((local_res8 == lVar1) || (param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    if (((local_res8 != lVar1) && (*(longlong *)(local_res8 + 0x28) != 0)) &&
        (plVar2 = *(longlong **)(*(longlong *)(local_res8 + 0x28) + 0x10), plVar2 != (longlong *)0x0))
    {
        uVar5 = (**(code **)(*plVar2 + 0x30))();
        lVar1 = *(longlong *)(lVar4 + 0x10);
        local_res8 = lVar1;
        lVar3 = *(longlong *)(lVar1 + 8);
        while (lVar3 != 0) {
            if (*(uint *)(lVar3 + 0x20) < uVar5) {
                lVar3 = *(longlong *)(lVar3 + 0x18);
            }
            else {
                local_res8 = lVar3;
                lVar3 = *(longlong *)(lVar3 + 0x10);
            }
        }
        if ((local_res8 == lVar1) || (uVar5 < *(uint *)(local_res8 + 0x20))) {
            local_res8 = lVar1;
        }
        if (local_res8 != lVar1) {
            return *(undefined8 *)(local_res8 + 0x28);
        }
    }
    return 0;
}



undefined8 FUN_14066db90(longlong param_1,undefined4 *param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 local_18;
    undefined4 local_10;

    puVar2 = (undefined8 *)FUN_140059170();
    puVar3 = (undefined8 *)FUN_14018b280(0x10);
    if (puVar3 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar3 + 1) = *param_2;
        *puVar3 = &PTR_FUN_140b6fe30;
    }
    *puVar2 = 0x3950;
    puVar2[1] = puVar3;
    lVar1 = *(longlong *)(param_1 + 0x20);
    local_18 = FUN_140062650(param_1,"Game.CharacterTitle",0x13);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



undefined8 * FUN_14066dc40(undefined8 *param_1,undefined8 param_2)

{
    undefined *puVar1;

    *param_1 = param_2;
    *(undefined4 *)(param_1 + 1) = 1;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
    *(undefined4 *)(param_1 + 2) = 0;
    puVar1 = (undefined *)FUN_14018b280(0x28,0);
    param_1[5] = 0;
    param_1[4] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[4] + 8) = 0;
    *(undefined8 *)(param_1[4] + 0x10) = param_1[4];
    *(undefined8 *)(param_1[4] + 0x18) = param_1[4];
    puVar1 = (undefined *)FUN_14018b280(0x28,0);
    param_1[9] = 0;
    param_1[8] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[8] + 8) = 0;
    *(undefined8 *)(param_1[8] + 0x10) = param_1[8];
    *(undefined8 *)(param_1[8] + 0x18) = param_1[8];
    puVar1 = (undefined *)FUN_14018b280(0x28,0);
    param_1[0xd] = 0;
    param_1[0xc] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0xc] + 8) = 0;
    *(undefined8 *)(param_1[0xc] + 0x10) = param_1[0xc];
    *(undefined8 *)(param_1[0xc] + 0x18) = param_1[0xc];
    puVar1 = (undefined *)FUN_14018b280(0x28,0);
    param_1[0x11] = 0;
    param_1[0x10] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0x10] + 8) = 0;
    *(undefined8 *)(param_1[0x10] + 0x10) = param_1[0x10];
    *(undefined8 *)(param_1[0x10] + 0x18) = param_1[0x10];
    *(undefined4 *)(param_1 + 0x13) = 0;
    FUN_14040fae0(param_1 + 0x14);
    return param_1;
}



undefined4 FUN_14066dd50(longlong *param_1)

{
    undefined4 uVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined8 uVar6;
    undefined8 *puVar7;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    lVar2 = *param_1;
    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = lVar2;
    if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar2);
    }
    puVar3 = *(undefined8 **)(lVar2 + 0x10);
    uVar6 = FUN_14005c1b0(lVar2,0,0);
    *(undefined4 *)(puVar3 + 1) = 5;
    *puVar3 = uVar6;
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    uVar4 = FUN_1400578c0(lVar2);
    local_20 = uVar4;
    uVar5 = FUN_14066de30(param_1,&local_28);
    puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
    puVar3 = *(undefined8 **)(lVar2 + 0x10);
    *puVar3 = *puVar7;
    uVar1 = *(undefined4 *)(puVar7 + 1);
    *(undefined4 *)(puVar3 + 1) = uVar1;
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    FUN_1400579e0(lVar2,uVar1,uVar4);
    return uVar5;
}



undefined8 FUN_14066de30(longlong *param_1,undefined8 param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    longlong lVar3;
    undefined4 uVar4;
    int iVar5;
    undefined8 uVar6;
    undefined **local_38;
    undefined4 local_30;
    longlong local_28;
    undefined4 local_20;

    if (*(int *)(param_1 + 1) != 0) {
        FUN_14066e2f0();
    }
    FUN_140008410(param_1 + 3);
    FUN_140008410(param_1 + 7);
    FUN_14066e1e0(param_1,1);
    if (*(int *)(param_1 + 1) != 0) {
        uVar4 = FUN_14066e1e0(param_1,0);
        lVar1 = *param_1;
        *(undefined4 *)(param_1 + 2) = uVar4;
        local_38 = &PTR_FUN_140b569f0;
        local_20 = 1;
        local_28 = lVar1;
        if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar1);
        }
        puVar2 = *(undefined8 **)(lVar1 + 0x10);
        uVar6 = FUN_14005c1b0(lVar1,0,0);
        *(undefined4 *)(puVar2 + 1) = 5;
        *puVar2 = uVar6;
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
        uVar4 = FUN_1400578c0(lVar1);
        local_30 = uVar4;
        iVar5 = FUN_14066e6d0(param_1,1,&local_38);
        if (iVar5 != 0) {
            FUN_1400fb2a0(param_2,L"tPrimary",uVar4);
        }
        lVar3 = *param_1;
        local_38 = &PTR_FUN_140b569f0;
        local_20 = 1;
        local_28 = lVar3;
        if (*(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar3);
        }
        puVar2 = *(undefined8 **)(lVar3 + 0x10);
        uVar6 = FUN_14005c1b0(lVar3,0,0);
        *(undefined4 *)(puVar2 + 1) = 5;
        *puVar2 = uVar6;
        *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
        uVar4 = FUN_1400578c0(lVar3);
        local_30 = uVar4;
        iVar5 = FUN_14066e6d0(param_1,0,&local_38);
        if (iVar5 != 0) {
            FUN_1400fb2a0(param_2,L"tCompare",uVar4);
        }
        FUN_1400579e0(lVar3);
        FUN_1400579e0(lVar1);
        return 1;
    }
    *(undefined4 *)(param_1 + 2) = 0;
    FUN_14066e6d0(param_1,1,param_2);
    return 1;
}



undefined8 FUN_14066e000(longlong *param_1)

{
    undefined4 uVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined4 uVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    lVar2 = *param_1;
    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = lVar2;
    if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar2);
    }
    puVar3 = *(undefined8 **)(lVar2 + 0x10);
    uVar5 = FUN_14005c1b0(lVar2,0,0);
    *(undefined4 *)(puVar3 + 1) = 5;
    *puVar3 = uVar5;
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    uVar4 = FUN_1400578c0(lVar2);
    local_20 = uVar4;
    FUN_140008410(param_1 + 3);
    FUN_140008410(param_1 + 7);
    FUN_14066e1e0(param_1,1);
    *(undefined4 *)(param_1 + 2) = 0;
    FUN_140673b80(param_1,&local_28);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
    puVar3 = *(undefined8 **)(lVar2 + 0x10);
    *puVar3 = *puVar6;
    uVar1 = *(undefined4 *)(puVar6 + 1);
    *(undefined4 *)(puVar3 + 1) = uVar1;
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    FUN_1400579e0(lVar2,uVar1,uVar4);
    return 1;
}



void FUN_14066e0f0(undefined8 param_1,longlong param_2,uint param_3)

{
    ulonglong uVar1;
    ulonglong uVar2;
    float in_XMM3_Da;
    ulonglong local_res8;
    ulonglong local_res10 [3];
    longlong local_28 [5];

    uVar1 = *(ulonglong *)(param_2 + 8);
    local_res8 = uVar1;
    uVar2 = *(ulonglong *)(uVar1 + 8);
    while (uVar2 != 0) {
        if (*(int *)(uVar2 + 0x20) < (int)param_3) {
            uVar2 = *(ulonglong *)(uVar2 + 0x18);
        }
        else {
            local_res8 = uVar2;
            uVar2 = *(ulonglong *)(uVar2 + 0x10);
        }
    }
    if ((local_res8 == uVar1) || ((int)param_3 < *(int *)(local_res8 + 0x20))) {
        local_res8 = uVar1;
    }
    local_res10[0] = uVar1;
    uVar2 = *(ulonglong *)(uVar1 + 8);
    if (local_res8 == uVar1) {
        while (uVar2 != 0) {
            if (*(int *)(uVar2 + 0x20) < (int)param_3) {
                uVar2 = *(ulonglong *)(uVar2 + 0x18);
            }
            else {
                local_res10[0] = uVar2;
                uVar2 = *(ulonglong *)(uVar2 + 0x10);
            }
        }
        if ((local_res10[0] == uVar1) ||
            (local_res8 = local_res10[0], (int)param_3 < *(int *)(local_res10[0] + 0x20))) {
            local_res8 = (ulonglong)param_3;
            FUN_1403d3e70(param_2,local_28,local_res10,&local_res8);
            *(float *)(local_28[0] + 0x24) = in_XMM3_Da;
            return;
        }
    }
    else {
        in_XMM3_Da = in_XMM3_Da + *(float *)(local_res8 + 0x24);
    }
    *(float *)(local_res8 + 0x24) = in_XMM3_Da;
    return;
}



undefined4 FUN_14066e1e0(longlong param_1,undefined4 param_2)

{
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    undefined4 uVar4;

    *(undefined4 *)(param_1 + 0x98) = param_2;
    FUN_14066e410();
    if ((*(int *)(param_1 + 0x53c) != 0) && (param_1 + 0x1f8 != 0)) {
        uVar4 = 0;
        lVar3 = 0x3c;
        do {
            lVar2 = 0;
            if (*(int *)(param_1 + 0x53c) != 0) {
                lVar2 = param_1 + 0x1f8;
            }
            uVar1 = *(uint *)(lVar3 + lVar2);
            if ((int)uVar1 < 0) {
                uVar1 = 0x80000000 - uVar1;
            }
            if (0x54 < (int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f))) {
                uVar4 = 1;
                FUN_14066e0f0();
            }
            lVar3 = lVar3 + 4;
        } while (lVar3 < 0x78);
        return uVar4;
    }
    return 0;
}



void FUN_14066e2f0(longlong *param_1)

{
    longlong *plVar1;
    longlong lVar2;
    int iVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    byte bVar6;
    double *pdVar7;
    double local_res8;
    double local_18;
    undefined4 local_10;

    lVar2 = *param_1;
    puVar4 = (undefined8 *)(*(longlong *)(lVar2 + 0x18) + 0x20);
    if ((((puVar4 < *(undefined8 **)(lVar2 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
         (*(int *)(*(longlong *)(lVar2 + 0x18) + 0x28) == 5)) &&
        (iVar3 = FUN_1400585e0(lVar2,2), iVar3 != 0)) {
        lVar2 = *param_1;
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
        *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 8) = 0;
        plVar1 = (longlong *)(lVar2 + 0x10);
        *plVar1 = *plVar1 + 0x10;
        while( true ) {
            lVar2 = *param_1;
            puVar5 = (undefined8 *)(*(longlong *)(lVar2 + 0x18) + 0x20);
            puVar4 = &DAT_140a12138;
            if (puVar5 < *(undefined8 **)(lVar2 + 0x10)) {
                puVar4 = puVar5;
            }
            iVar3 = FUN_14005ba70(lVar2,*puVar4,*(undefined8 **)(lVar2 + 0x10) + -2);
            if (iVar3 == 0) break;
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            iVar3 = *(int *)(*(longlong *)(*param_1 + 0x10) + -8);
            pdVar7 = (double *)(*(longlong *)(*param_1 + 0x10) + -0x10);
            if (iVar3 == 3) {
                LAB_14066e3d7:
                bVar6 = (byte)(int)*pdVar7;
            }
            else {
                if ((iVar3 == 4) &&
                    (iVar3 = FUN_14005ac80((longlong)*pdVar7 + 0x20,&local_res8), iVar3 != 0)) {
                    local_10 = 3;
                    pdVar7 = &local_18;
                    local_18 = local_res8;
                    goto LAB_14066e3d7;
                }
                bVar6 = 0;
            }
            *(uint *)((longlong)param_1 + 0xc) = *(uint *)((longlong)param_1 + 0xc) | 1 << (bVar6 & 0x1f);
            *(longlong *)(*param_1 + 0x10) = *(longlong *)(*param_1 + 0x10) + -0x10;
        }
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
    }
    return;
}



undefined8 FUN_14066e410(undefined8 *param_1)

{
    int iVar1;

    if (*(int *)(param_1 + 1) != 0) {
        iVar1 = *(int *)(param_1 + 0x13);
        FUN_140410300(param_1 + 0x14,0,1);
        FUN_140410680(param_1 + 0x14,*param_1,2 - (uint)(iVar1 != 0));
    }
    if ((((param_1[0x14] == 0) && ((*(int *)(param_1 + 0xa8) == 0 || (param_1[0x15] == 0)))) &&
         ((*(int *)(param_1 + 0xa7) == 0 || (param_1 == (undefined8 *)0xffffffffffffff40)))) &&
        ((*(int *)((longlong)param_1 + 0x544) == 0 || (param_1 == (undefined8 *)0xfffffffffffffc78))))
    {
        return 0;
    }
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14066e4c0(longlong param_1)

{
    undefined4 uVar1;
    int iVar2;
    uint *puVar3;
    undefined4 *puVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    uint uVar9;
    uint *puVar10;
    longlong lVar11;
    longlong lVar12;
    uint local_res8;
    undefined4 local_resc;
    longlong local_res10;
    longlong local_res18;

    FUN_140008410(param_1 + 0x58);
    FUN_140008410(param_1 + 0x78);
    if ((*(int *)(param_1 + 0x53c) != 0) && (param_1 != -0x1f8)) {
        lVar12 = 0;
        lVar11 = 8;
        do {
            lVar8 = 0;
            if (*(int *)(param_1 + 0x53c) != 0) {
                lVar8 = param_1 + 0x1f8;
            }
            uVar1 = *(undefined4 *)(lVar12 + 0x90 + lVar8);
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c63f84 == 0) && (iVar2 = FUN_14020d000(), -1 < iVar2)) {
                    puVar3 = (uint *)(**(code **)(*DAT_140c64608 + 0x18))(DAT_140c64608,uVar1);
                    goto LAB_14066e57e;
                }
            }
            else {
                puVar3 = (uint *)(*DAT_140c63840)(&PTR_u_ItemSet_140a6aec0,uVar1,DAT_140c63858);
                LAB_14066e57e:
                if (puVar3 != (uint *)0x0) {
                    lVar8 = 0;
                    if (*(int *)(param_1 + 0x53c) != 0) {
                        lVar8 = param_1 + 0x1f8;
                    }
                    puVar4 = (undefined4 *)FUN_140032640();
                    uVar9 = 0;
                    puVar10 = puVar3 + 2;
                    *puVar4 = *(undefined4 *)(lVar12 + 0x94 + lVar8);
                    lVar8 = 0xc;
                    do {
                        if (*puVar10 != 0) {
                            if (DAT_140c63840 == (code *)0x0) {
                                if ((_DAT_140c655c0 != 0) || (iVar2 = FUN_14020d440(), iVar2 < 0))
                                    goto LAB_14066e615;
                                lVar5 = (**(code **)(*DAT_140c65560 + 0x18))();
                            }
                            else {
                                lVar5 = (*DAT_140c63840)(&PTR_u_ItemSetBonus_140a6aef8,*puVar10,DAT_140c63858);
                            }
                            if ((lVar5 != 0) &&
                                (((*(int *)(lVar5 + 0x14) != 0 || (*(int *)(lVar5 + 8) != 0)) &&
                                  (uVar9 < *(uint *)(lVar5 + 4))))) {
                                uVar9 = *(uint *)(lVar5 + 4);
                            }
                        }
                        LAB_14066e615:
                        puVar10 = puVar10 + 1;
                        lVar8 = lVar8 + -1;
                    } while (lVar8 != 0);
                    lVar8 = *(longlong *)(param_1 + 0x80);
                    lVar5 = lVar8;
                    if (*(longlong *)(lVar8 + 8) != 0) {
                        lVar6 = *(longlong *)(lVar8 + 8);
                        do {
                            if (*(uint *)(lVar6 + 0x20) < *puVar3) {
                                lVar7 = *(longlong *)(lVar6 + 0x18);
                            }
                            else {
                                lVar7 = *(longlong *)(lVar6 + 0x10);
                                lVar5 = lVar6;
                            }
                            lVar6 = lVar7;
                        } while (lVar7 != 0);
                    }
                    if ((lVar5 == lVar8) || (*puVar3 < *(uint *)(lVar5 + 0x20))) {
                        local_res8 = *puVar3;
                        local_resc = 0;
                        local_res10 = lVar5;
                        FUN_140032b30(param_1 + 0x78,&local_res18,&local_res10,&local_res8);
                        lVar5 = local_res18;
                    }
                    *(uint *)(lVar5 + 0x24) = uVar9;
                }
            }
            lVar12 = lVar12 + 8;
            lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
    }
    return;
}



undefined8 FUN_14066e6d0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
    undefined8 uVar1;

    *(undefined4 *)(param_1 + 0x98) = param_2;
    uVar1 = FUN_14066e410();
    if ((int)uVar1 == 0) {
        return uVar1;
    }
    if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
        FUN_14066e860(param_1,param_3);
        FUN_140674cd0(param_1,param_3);
    }
    if ((*(byte *)(param_1 + 0xc) & 4) != 0) {
        FUN_14066fb50(param_1,param_3);
        FUN_140670050(param_1,param_3);
        FUN_140671b70(param_1,param_3);
        FUN_140671dc0(param_1,param_3);
        FUN_140671f20(param_1,param_3);
    }
    if ((*(byte *)(param_1 + 0xc) & 0x40) != 0) {
        FUN_14066f750(param_1,param_3);
        FUN_140672150(param_1,param_3);
        FUN_1406701f0(param_1,param_3);
        FUN_140671730(param_1,param_3);
        if ((*(int *)(param_1 + 0x53c) != 0) && (param_1 != -0x1f8)) {
            FUN_140676790();
        }
    }
    if ((*(byte *)(param_1 + 0xc) & 2) != 0) {
        FUN_140672380(param_1,param_3);
    }
    if ((*(byte *)(param_1 + 0xc) & 0x20) != 0) {
        FUN_140673160(param_1,param_3);
    }
    if ((*(byte *)(param_1 + 0xc) & 8) != 0) {
        FUN_140673ab0(param_1,param_3);
        if ((*(byte *)(param_1 + 0xc) & 8) != 0) {
            FUN_140673fe0(param_1,param_3);
        }
    }
    if ((*(byte *)(param_1 + 0xc) & 0x10) != 0) {
        FUN_140672840(param_1,param_3);
    }
    if ((*(uint *)(param_1 + 0xc) & 0x100) != 0) {
        FUN_1406751e0(param_1,param_3);
    }
    if ((*(byte *)(param_1 + 0xc) & 0x80) != 0) {
        FUN_140674210(param_1,param_3);
        FUN_140674430(param_1,param_3);
        FUN_1406744d0(param_1,param_3);
        FUN_140674d50(param_1,param_3);
    }
    return 1;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14066e860(longlong *param_1,longlong param_2)

{
    longlong *plVar1;
    short *psVar2;
    undefined4 *puVar3;
    double *pdVar4;
    int iVar5;
    undefined4 uVar6;
    undefined8 *puVar7;
    undefined2 *puVar8;
    undefined2 *puVar9;
    longlong *plVar10;
    undefined8 uVar11;
    undefined *puVar12;
    longlong lVar13;
    longlong *plVar14;
    longlong lVar15;
    undefined8 *puVar16;
    longlong lVar17;
    longlong *plVar18;
    wchar_t *pwVar19;
    longlong lVar20;
    ulonglong uVar21;
    longlong *plVar22;
    float fVar23;
    undefined local_158 [8];
    undefined2 *local_150;
    undefined2 *local_148;
    undefined2 *local_140;
    undefined local_138 [8];
    longlong local_130;
    undefined **local_118;
    undefined local_110 [184];
    undefined local_58 [16];
    undefined2 *local_48;

    plVar1 = param_1 + 0x14;
    plVar18 = (longlong *)0x0;
    lVar17 = -1;
    if ((*(int *)(param_1 + 0xa8) != 0) && (param_1[0x15] != 0)) {
        plVar14 = plVar18;
        if (*(int *)(param_1 + 0xa8) != 0) {
            plVar14 = (longlong *)param_1[0x15];
        }
        lVar13 = *(longlong *)(param_2 + 0x10);
        uVar21 = (ulonglong)*(uint *)plVar14;
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar13 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar16 = *(undefined8 **)(lVar13 + 0x10);
        *puVar16 = *puVar7;
        *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
        FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar16,&DAT_140b2f190,uVar21 & 0xffffffff);
        plVar14 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar14 = *plVar14 + -0x10;
        puVar8 = (undefined2 *)FUN_14018b280(0x10);
        local_140 = puVar8 + 8;
        if (puVar8 != (undefined2 *)0x0) {
            *puVar8 = 0;
        }
        local_150 = puVar8;
        local_148 = puVar8;
        FUN_1400b6f30(&local_118);
        local_118 = &PTR_FUN_140b69230;
        local_48 = (undefined2 *)0x0;
        local_58 = ZEXT816(0);
        puVar9 = (undefined2 *)FUN_14018b280(0x10);
        local_58 = CONCAT88(puVar9,puVar9);
        local_48 = puVar9 + 8;
        plVar14 = plVar18;
        if (puVar9 != (undefined2 *)0x0) {
            *puVar9 = 0;
        }
        do {
            psVar2 = &DAT_140b2f15a + (longlong)plVar14;
            plVar14 = (longlong *)((longlong)plVar14 + 1);
        } while (*psVar2 != 0);
        FUN_14001c480(local_110,&DAT_140b2f158,&DAT_140b2f158 + (longlong)plVar14 * 2);
        iVar5 = DAT_140c45fc0;
        if (*DAT_140c63750 < DAT_140c45fc0) {
            iVar5 = *DAT_140c63750;
        }
        plVar14 = plVar18;
        if ((&DAT_140c45fd0)[iVar5] == '\0') {
            lVar13 = FUN_14018b280(0x60);
            if (lVar13 != 0) {
                if (*(int *)(param_1 + 0xa8) == 0) {
                    plVar14 = (longlong *)FUN_1404ddaf0(lVar13,_DAT_000001dc);
                }
                else {
                    plVar14 = (longlong *)FUN_1404ddaf0(lVar13,*(undefined4 *)(param_1[0x15] + 0x1dc));
                }
            }
        }
        else {
            plVar22 = plVar18;
            if (*(int *)(param_1 + 0xa8) != 0) {
                plVar22 = (longlong *)param_1[0x15];
            }
            plVar10 = plVar18;
            if (*(int *)(param_1 + 0xa8) != 0) {
                plVar10 = (longlong *)param_1[0x15];
            }
            uVar11 = FUN_14034bdd0(&DAT_140c45fd0,*(uint *)((longlong)plVar10 + 0x1dc));
            puVar12 = (undefined *)FUN_14018efa0(local_138,L"%s - [%d]",uVar11,*(uint *)plVar22);
            if (puVar12 != local_158) {
                FUN_14001c480(local_158,*(undefined8 *)(puVar12 + 8),*(undefined8 *)(puVar12 + 0x10));
                puVar8 = local_150;
            }
            if (local_130 != 0) {
                FUN_14018b900(local_130,0);
            }
            lVar13 = FUN_14018b280(0x60);
            if (lVar13 != 0) {
                plVar14 = (longlong *)FUN_1404ddb40(lVar13,puVar8);
            }
        }
        FUN_1400b7480(&local_118,plVar14);
        lVar15 = FUN_1400b7660(&local_118);
        lVar13 = *(longlong *)(param_2 + 0x10);
        uVar11 = *(undefined8 *)(lVar15 + 8);
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar13 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar16 = *(undefined8 **)(lVar13 + 0x10);
        *puVar16 = *puVar7;
        *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
        FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar16,L"strName",uVar11);
        plVar14 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar14 = *plVar14 + -0x10;
        plVar14 = plVar18;
        if (*(int *)(param_1 + 0xa8) != 0) {
            plVar14 = (longlong *)param_1[0x15];
        }
        lVar13 = *(longlong *)(param_2 + 0x10);
        uVar21 = (ulonglong)*(uint *)(plVar14 + 0x28);
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar13 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar16 = *(undefined8 **)(lVar13 + 0x10);
        *puVar16 = *puVar7;
        *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
        FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar16,L"eFamily",uVar21 & 0xffffffff);
        plVar14 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar14 = *plVar14 + -0x10;
        plVar14 = plVar18;
        if (*(int *)(param_1 + 0xa8) != 0) {
            plVar14 = (longlong *)param_1[0x15];
        }
        lVar13 = *(longlong *)(param_2 + 0x10);
        uVar21 = (ulonglong)*(uint *)(plVar14 + 0x29);
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar13 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar16 = *(undefined8 **)(lVar13 + 0x10);
        *puVar16 = *puVar7;
        *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
        FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar16,L"eCategory",uVar21 & 0xffffffff);
        plVar14 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar14 = *plVar14 + -0x10;
        plVar14 = plVar18;
        if (*(int *)(param_1 + 0xa8) != 0) {
            plVar14 = (longlong *)param_1[0x15];
        }
        lVar13 = *(longlong *)(param_2 + 0x10);
        uVar21 = (ulonglong)*(uint *)((longlong)plVar14 + 0x144);
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar13 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar16 = *(undefined8 **)(lVar13 + 0x10);
        *puVar16 = *puVar7;
        *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
        FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar16,L"eType",uVar21 & 0xffffffff);
        plVar14 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar14 = *plVar14 + -0x10;
        FUN_14040fe30(plVar1,local_158);
        puVar9 = local_150;
        if (local_150 != local_148) {
            lVar13 = *(longlong *)(param_2 + 0x10);
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar13 + 0x20) + 0xa0),
                                  *(undefined4 *)(param_2 + 8));
            puVar16 = *(undefined8 **)(lVar13 + 0x10);
            *puVar16 = *puVar7;
            *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
            FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar16,L"strFlavor",puVar9);
            plVar14 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
            *plVar14 = *plVar14 + -0x10;
        }
        plVar14 = plVar18;
        if (*(int *)(param_1 + 0xa8) != 0) {
            plVar14 = (longlong *)param_1[0x15];
        }
        if (*(uint *)(plVar14 + 0x28) == 0x21) {
            plVar14 = plVar18;
            if (*(int *)(param_1 + 0xa8) != 0) {
                plVar14 = (longlong *)param_1[0x15];
            }
            if ((*(uint *)((longlong)plVar14 + 0x14c) & 0x800) != 0) {
                lVar13 = *(longlong *)(param_2 + 0x10);
                puVar7 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar13 + 0x20) + 0xa0),
                                      *(undefined4 *)(param_2 + 8));
                puVar16 = *(undefined8 **)(lVar13 + 0x10);
                *puVar16 = *puVar7;
                *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(puVar7 + 1);
                *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
                lVar13 = *(longlong *)(param_2 + 0x10);
                lVar15 = FUN_14018f0e0(local_138,L"bPveOnlyRune");
                if (*(longlong *)(lVar15 + 8) == 0) {
                    *(undefined4 *)(*(longlong *)(lVar13 + 0x10) + 8) = 0;
                    *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
                }
                else {
                    lVar20 = -1;
                    do {
                        lVar20 = lVar20 + 1;
                    } while (*(char *)(*(longlong *)(lVar15 + 8) + lVar20) != '\0');
                    FUN_140058710(lVar13);
                }
                if (local_130 != 0) {
                    FUN_14018b900(local_130,0);
                }
                puVar3 = *(undefined4 **)(lVar13 + 0x10);
                *puVar3 = 1;
                puVar3[2] = 1;
                *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
                uVar11 = FUN_1400580e0(lVar13,0xfffffffd);
                FUN_14005ea50(lVar13,uVar11,*(longlong *)(lVar13 + 0x10) + -0x20,
                              *(longlong *)(lVar13 + 0x10) + -0x10);
                *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + -0x20;
                plVar14 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
                *plVar14 = *plVar14 + -0x10;
            }
        }
        if (puVar9 != (undefined2 *)0x0) {
            FUN_14018b900(puVar9,0);
        }
        if (local_58._0_8_ != 0) {
            FUN_14018b900(local_58._0_8_,0);
        }
        FUN_1400b7390(&local_118);
        if (puVar8 != (undefined2 *)0x0) {
            FUN_14018b900(puVar8,0);
        }
    }
    if ((*(int *)(param_1 + 0xa7) != 0) && (param_1 != (longlong *)0xffffffffffffff40)) {
        plVar14 = param_1 + 0x18;
        if (*(int *)(param_1 + 0xa7) == 0) {
            plVar14 = plVar18;
        }
        lVar13 = *(longlong *)(param_2 + 0x10);
        uVar21 = (ulonglong)*(uint *)plVar14;
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar13 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar16 = *(undefined8 **)(lVar13 + 0x10);
        *puVar16 = *puVar7;
        *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
        FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar16,L"eQuality",uVar21 & 0xffffffff);
        plVar14 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar14 = *plVar14 + -0x10;
        plVar14 = plVar18;
        if (*(int *)(param_1 + 0xa8) != 0) {
            plVar14 = (longlong *)param_1[0x15];
        }
        if (*(uint *)(plVar14 + 0x28) == 0x21) {
            plVar14 = param_1 + 0x18;
            if (*(int *)(param_1 + 0xa7) == 0) {
                plVar14 = plVar18;
            }
            lVar13 = *(longlong *)(param_2 + 0x10);
            uVar21 = (ulonglong)*(uint *)((longlong)plVar14 + 4);
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar13 + 0x20) + 0xa0),
                                  *(undefined4 *)(param_2 + 8));
            puVar16 = *(undefined8 **)(lVar13 + 0x10);
            *puVar16 = *puVar7;
            *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
            FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar16,L"nItemLevel",uVar21 & 0xffffffff);
            plVar14 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
            *plVar14 = *plVar14 + -0x10;
            plVar14 = plVar18;
            if (*(int *)(param_1 + 0xa8) != 0) {
                plVar14 = (longlong *)param_1[0x15];
            }
            lVar13 = *(longlong *)(param_2 + 0x10);
            uVar21 = (ulonglong)*(uint *)((longlong)plVar14 + 0x164);
            puVar16 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar13 + 0x20) + 0xa0),
                                  *(undefined4 *)(param_2 + 8));
            pwVar19 = L"nInstalledMinimumItemLevel";
            LAB_14066f1ab:
            puVar7 = *(undefined8 **)(lVar13 + 0x10);
            *puVar7 = *puVar16;
            *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar16 + 1);
            *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
            FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar7,pwVar19,uVar21 & 0xffffffff);
            plVar14 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
            *plVar14 = *plVar14 + -0x10;
        }
        else {
            plVar14 = param_1 + 0x18;
            if (*(int *)(param_1 + 0xa7) == 0) {
                plVar14 = plVar18;
            }
            if ((*(byte *)(plVar14 + 4) & 2) != 0) {
                plVar14 = plVar18;
                if (*(int *)(param_1 + 0xa8) != 0) {
                    plVar14 = (longlong *)param_1[0x15];
                }
                lVar13 = *(longlong *)(param_2 + 0x10);
                uVar21 = (ulonglong)*(uint *)((longlong)plVar14 + 0x164);
                puVar16 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar13 + 0x20) + 0xa0),
                                      *(undefined4 *)(param_2 + 8));
                pwVar19 = L"nPowerCoreMaximumLevel";
                goto LAB_14066f1ab;
            }
            plVar14 = param_1 + 0x18;
            if (*(int *)(param_1 + 0xa7) == 0) {
                plVar14 = plVar18;
            }
            lVar13 = *(longlong *)(param_2 + 0x10);
            uVar21 = (ulonglong)*(uint *)((longlong)plVar14 + 4);
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar13 + 0x20) + 0xa0),
                                  *(undefined4 *)(param_2 + 8));
            puVar16 = *(undefined8 **)(lVar13 + 0x10);
            *puVar16 = *puVar7;
            *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
            FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar16,L"nItemLevel",uVar21 & 0xffffffff);
            plVar14 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
            *plVar14 = *plVar14 + -0x10;
            plVar14 = param_1 + 0x18;
            if (*(int *)(param_1 + 0xa7) == 0) {
                plVar14 = plVar18;
            }
            lVar13 = *(longlong *)(param_2 + 0x10);
            uVar21 = (ulonglong)*(uint *)((longlong)plVar14 + 0xc);
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar13 + 0x20) + 0xa0),
                                  *(undefined4 *)(param_2 + 8));
            puVar16 = *(undefined8 **)(lVar13 + 0x10);
            *puVar16 = *puVar7;
            *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
            FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar16,L"nEffectiveLevel",uVar21 & 0xffffffff);
            plVar14 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
            *plVar14 = *plVar14 + -0x10;
            plVar14 = param_1 + 0x18;
            if (*(int *)(param_1 + 0xa7) == 0) {
                plVar14 = plVar18;
            }
            lVar13 = *(longlong *)(param_2 + 0x10);
            fVar23 = *(float *)((longlong)plVar14 + 0x1c);
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar13 + 0x20) + 0xa0),
                                  *(undefined4 *)(param_2 + 8));
            puVar16 = *(undefined8 **)(lVar13 + 0x10);
            *puVar16 = *puVar7;
            *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
            lVar13 = *(longlong *)(param_2 + 0x10);
            lVar15 = FUN_14018f0e0(local_138,L"nCraftedMultiplier");
            if (*(longlong *)(lVar15 + 8) == 0) {
                *(undefined4 *)(*(longlong *)(lVar13 + 0x10) + 8) = 0;
                *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
            }
            else {
                lVar20 = -1;
                do {
                    lVar20 = lVar20 + 1;
                } while (*(char *)(*(longlong *)(lVar15 + 8) + lVar20) != '\0');
                FUN_140058710(lVar13);
            }
            if (local_130 != 0) {
                FUN_14018b900(local_130,0);
            }
            pdVar4 = *(double **)(lVar13 + 0x10);
            *(undefined4 *)(pdVar4 + 1) = 3;
            *pdVar4 = (double)fVar23;
            *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
            uVar11 = FUN_1400580e0(lVar13,0xfffffffd);
            FUN_14005ea50(lVar13,uVar11,*(longlong *)(lVar13 + 0x10) + -0x20,
                          *(longlong *)(lVar13 + 0x10) + -0x10);
            *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + -0x20;
            plVar14 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
            *plVar14 = *plVar14 + -0x10;
            plVar14 = plVar18;
            if (*(int *)(param_1 + 0xa8) != 0) {
                plVar14 = (longlong *)param_1[0x15];
            }
            if ((*(uint *)((longlong)plVar14 + 0x14c) & 0x100000) != 0) {
                plVar14 = param_1 + 0x18;
                if (*(int *)(param_1 + 0xa7) == 0) {
                    plVar14 = plVar18;
                }
                if ((*(byte *)(plVar14 + 4) & 8) != 0) {
                    lVar13 = *(longlong *)(param_2 + 0x10);
                    puVar7 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar13 + 0x20) + 0xa0),
                                          *(undefined4 *)(param_2 + 8));
                    puVar16 = *(undefined8 **)(lVar13 + 0x10);
                    *puVar16 = *puVar7;
                    *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(puVar7 + 1);
                    *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
                    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar16,L"bScalable",1);
                    plVar14 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
                    *plVar14 = *plVar14 + -0x10;
                }
                plVar14 = param_1 + 0x18;
                if (*(int *)(param_1 + 0xa7) == 0) {
                    plVar14 = plVar18;
                }
                lVar13 = *(longlong *)(param_2 + 0x10);
                uVar21 = (ulonglong)*(uint *)(plVar14 + 2);
                puVar16 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar13 + 0x20) + 0xa0),
                                      *(undefined4 *)(param_2 + 8));
                pwVar19 = L"nPrimeTier";
                goto LAB_14066f1ab;
            }
        }
        plVar14 = param_1 + 0x18;
        if (*(int *)(param_1 + 0xa7) == 0) {
            plVar14 = plVar18;
        }
        if ((*(byte *)(plVar14 + 4) & 1) != 0) {
            plVar14 = plVar18;
            if (*(int *)(param_1 + 0xa8) != 0) {
                plVar14 = (longlong *)param_1[0x15];
            }
            lVar13 = *(longlong *)(param_2 + 0x10);
            uVar11 = *(undefined8 *)(*(longlong *)(lVar13 + 0x20) + 0xa0);
            if (*(uint *)(plVar14 + 0x28) == 0x21) {
                puVar7 = (undefined8 *)FUN_14005c3c0(uVar11,*(undefined4 *)(param_2 + 8));
                puVar16 = *(undefined8 **)(lVar13 + 0x10);
                *puVar16 = *puVar7;
                *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(puVar7 + 1);
                *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
                lVar13 = *(longlong *)(param_2 + 0x10);
                lVar15 = FUN_14018f0e0(local_138,L"bPvpOnlyRune");
                lVar15 = *(longlong *)(lVar15 + 8);
                if (lVar15 == 0) {
                    *(undefined4 *)(*(longlong *)(lVar13 + 0x10) + 8) = 0;
                    *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
                }
                else {
                    do {
                        lVar17 = lVar17 + 1;
                    } while (*(char *)(lVar15 + lVar17) != '\0');
                    LAB_14066f2bb:
                    FUN_140058710(lVar13,lVar15,lVar17);
                }
            }
            else {
                puVar7 = (undefined8 *)FUN_14005c3c0(uVar11,*(undefined4 *)(param_2 + 8));
                puVar16 = *(undefined8 **)(lVar13 + 0x10);
                *puVar16 = *puVar7;
                *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(puVar7 + 1);
                *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
                lVar13 = *(longlong *)(param_2 + 0x10);
                lVar15 = FUN_14018f0e0(local_138,L"bPvpGear");
                lVar15 = *(longlong *)(lVar15 + 8);
                if (lVar15 != 0) {
                    do {
                        lVar17 = lVar17 + 1;
                    } while (*(char *)(lVar15 + lVar17) != '\0');
                    goto LAB_14066f2bb;
                }
                *(undefined4 *)(*(longlong *)(lVar13 + 0x10) + 8) = 0;
                *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
            }
            if (local_130 != 0) {
                FUN_14018b900(local_130,0);
            }
            puVar3 = *(undefined4 **)(lVar13 + 0x10);
            *puVar3 = 1;
            puVar3[2] = 1;
            *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
            uVar11 = FUN_1400580e0(lVar13,0xfffffffd);
            FUN_14005ea50(lVar13,uVar11,*(longlong *)(lVar13 + 0x10) + -0x20,
                          *(longlong *)(lVar13 + 0x10) + -0x10);
            *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + -0x20;
            plVar14 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
            *plVar14 = *plVar14 + -0x10;
        }
    }
    if (param_1[0x74] != param_1[0x75]) {
        lVar17 = *(longlong *)(param_2 + 0x10);
        lVar13 = param_1[0x74];
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar17 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar16 = *(undefined8 **)(lVar17 + 0x10);
        *puVar16 = *puVar7;
        *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(lVar17 + 0x10) = *(longlong *)(lVar17 + 0x10) + 0x10;
        FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar16,L"strMakersMark",lVar13);
        plVar14 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar14 = *plVar14 + -0x10;
    }
    if ((*(int *)(param_1 + 0xa8) == 0) || (param_1[0x15] == 0)) goto LAB_14066f5b1;
    lVar17 = *param_1;
    FUN_140058900(lVar17);
    uVar6 = FUN_1400578c0(lVar17);
    plVar14 = plVar18;
    if (*(int *)(param_1 + 0xa8) != 0) {
        plVar14 = (longlong *)param_1[0x15];
    }
    if ((*(byte *)((longlong)plVar14 + 0x154) & 4) == 0) {
        puVar16 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar17 + 0x20) + 0xa0),uVar6);
        uVar21 = 1;
        pwVar19 = L"nMaxCount";
    }
    else {
        plVar14 = plVar18;
        if (*(int *)(param_1 + 0xa8) != 0) {
            plVar14 = (longlong *)param_1[0x15];
        }
        uVar21 = (ulonglong)*(uint *)(plVar14 + 0x34);
        puVar16 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar17 + 0x20) + 0xa0),uVar6);
        uVar21 = uVar21 & 0xffffffff;
        pwVar19 = L"nMaxCount";
    }
    puVar7 = *(undefined8 **)(lVar17 + 0x10);
    *puVar7 = *puVar16;
    *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar16 + 1);
    *(longlong *)(lVar17 + 0x10) = *(longlong *)(lVar17 + 0x10) + 0x10;
    FUN_1400f06f0(lVar17,puVar7,pwVar19,uVar21);
    *(longlong *)(lVar17 + 0x10) = *(longlong *)(lVar17 + 0x10) + -0x10;
    puVar16 = *(undefined8 **)(lVar17 + 0x10);
    if (*plVar1 == 0) {
        if (((*(int *)(param_1 + 0xab) != 0) && (*(int *)((longlong)param_1 + 0x514) != 0)) &&
            (param_1 != (longlong *)0xfffffffffffffaf0)) {
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar17 + 0x20) + 0xa0),uVar6);
            goto LAB_14066f572;
        }
        if (((*(int *)(param_1 + 0xaa) != 0) && (*(int *)(param_1 + 0x97) != 0)) &&
            (param_1 + 0x97 != (longlong *)0x0)) {
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar17 + 0x20) + 0xa0),uVar6);
            goto LAB_14066f572;
        }
        if (((*(int *)((longlong)param_1 + 0x554) != 0) && (*(int *)(param_1 + 0x77) != 0)) &&
            (param_1 + 0x77 != (longlong *)0x0)) {
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar17 + 0x20) + 0xa0),uVar6);
            goto LAB_14066f572;
        }
    }
    else {
        puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar17 + 0x20) + 0xa0),uVar6)
                ;
        LAB_14066f572:
        *puVar16 = *puVar7;
        *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(lVar17 + 0x10) = *(longlong *)(lVar17 + 0x10) + 0x10;
        FUN_1400f06f0(lVar17);
        *(longlong *)(lVar17 + 0x10) = *(longlong *)(lVar17 + 0x10) + -0x10;
    }
    FUN_1400fb2a0(param_2,L"tStack",uVar6);
    FUN_1400579e0(lVar17);
    LAB_14066f5b1:
    if ((*(int *)(param_1 + 0xa8) != 0) && (param_1[0x15] != 0)) {
        plVar14 = plVar18;
        if (*(int *)(param_1 + 0xa8) != 0) {
            plVar14 = (longlong *)param_1[0x15];
        }
        if (*(uint *)((longlong)plVar14 + 0x1a4) != 0) {
            FUN_1400fa0f0(local_158,*param_1,1);
            puVar9 = local_148;
            puVar8 = local_150;
            if (*(int *)(param_1 + 0xa8) != 0) {
                plVar18 = (longlong *)param_1[0x15];
            }
            uVar21 = (ulonglong)*(uint *)((longlong)plVar18 + 0x1a4);
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_148 + 0x10) + 0xa0),
                                  (ulonglong)local_150 & 0xffffffff);
            puVar16 = *(undefined8 **)(puVar9 + 8);
            *puVar16 = *puVar7;
            *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(puVar9 + 8) = *(longlong *)(puVar9 + 8) + 0x10;
            FUN_1400f06f0(puVar9,puVar16,L"nMaxCount",uVar21 & 0xffffffff);
            *(longlong *)(puVar9 + 8) = *(longlong *)(puVar9 + 8) + -0x10;
            puVar16 = *(undefined8 **)(puVar9 + 8);
            if (*plVar1 != 0) {
                puVar7 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(puVar9 + 0x10) + 0xa0),
                                      (ulonglong)puVar8 & 0xffffffff);
                *puVar16 = *puVar7;
                *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(puVar7 + 1);
                *(longlong *)(puVar9 + 8) = *(longlong *)(puVar9 + 8) + 0x10;
                FUN_1400f06f0(puVar9);
                *(longlong *)(puVar9 + 8) = *(longlong *)(puVar9 + 8) + -0x10;
            }
            FUN_1400fb2a0(param_2,L"tCharge",(ulonglong)puVar8 & 0xffffffff);
            FUN_1400579e0(puVar9);
        }
    }
    if (((*plVar1 == 0) || (lVar17 = *(longlong *)(*plVar1 + 0x40), lVar17 == 0)) ||
        ((*(uint *)(lVar17 + 0x14c) & 0x10000) == 0)) {
        if (*(int *)(param_1 + 0xa8) == 0) {
            return;
        }
        if (param_1[0x15] == 0) {
            return;
        }
        if (*(int *)(param_1 + 0xa8) == 0) {
            return;
        }
        if (param_1[0x15] == 0) {
            return;
        }
        if ((*(uint *)(param_1[0x15] + 0x14c) & 0x10000) == 0) {
            return;
        }
        pwVar19 = L"bCantDelete";
    }
    else {
        pwVar19 = L"bCantDelete";
    }
    FUN_1400fae20(param_2,pwVar19,1);
    return;
}



void FUN_14066f750(longlong *param_1,undefined8 param_2)

{
    longlong lVar1;
    undefined4 *puVar2;
    uint *puVar3;
    undefined4 uVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    uint uVar8;
    longlong lVar9;
    longlong lVar10;
    undefined8 *puVar11;
    undefined local_38 [8];
    longlong local_30;

    lVar1 = *param_1;
    if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar1);
    }
    puVar11 = *(undefined8 **)(lVar1 + 0x10);
    uVar5 = FUN_14005c1b0(lVar1,0,0);
    *(undefined4 *)(puVar11 + 1) = 5;
    *puVar11 = uVar5;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar4 = FUN_1400578c0(lVar1);
    lVar9 = -1;
    if ((*(int *)(param_1 + 0xa8) == 0) || (lVar7 = param_1[0x15], lVar7 == 0)) goto LAB_14066f931;
    if ((((*(byte *)(lVar7 + 0x150) & 8) == 0) &&
         ((((*(byte *)(lVar7 + 0x14c) & 0xc0) == 0 && (*(int *)(lVar7 + 0x1a8) == 0)) &&
           ((*(uint *)(lVar7 + 0x154) & 0x80) != 0)))) && (*(int *)(param_1 + 0x17) == 0)) {
        if ((*(byte *)(lVar7 + 0x150) & 0x10) == 0) goto LAB_14066f931;
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar4);
        puVar11 = *(undefined8 **)(lVar1 + 0x10);
        *puVar11 = *puVar6;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
        lVar7 = FUN_14018f0e0(local_38,L"bOnEquip");
        if (*(longlong *)(lVar7 + 8) != 0) {
            lVar10 = -1;
            do {
                lVar10 = lVar10 + 1;
            } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar10) != '\0');
            goto LAB_14066f8d9;
        }
        *(undefined4 *)(*(longlong *)(lVar1 + 0x10) + 8) = 0;
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    }
    else {
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar4);
        puVar11 = *(undefined8 **)(lVar1 + 0x10);
        *puVar11 = *puVar6;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
        lVar7 = FUN_14018f0e0(local_38,L"bOnPickup");
        if (*(longlong *)(lVar7 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar1 + 0x10) + 8) = 0;
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
        }
        else {
            lVar10 = -1;
            do {
                lVar10 = lVar10 + 1;
            } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar10) != '\0');
            LAB_14066f8d9:
            FUN_140058710(lVar1);
        }
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    puVar2 = *(undefined4 **)(lVar1 + 0x10);
    *puVar2 = 1;
    puVar2[2] = 1;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(lVar1,0xfffffffd);
    FUN_14005ea50(lVar1,uVar5,*(longlong *)(lVar1 + 0x10) + -0x20,*(longlong *)(lVar1 + 0x10) + -0x10)
            ;
    *(longlong *)(lVar1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar1 + 0x10));
    LAB_14066f931:
    lVar7 = param_1[0x14];
    if (lVar7 != 0) {
        lVar10 = *(longlong *)(lVar7 + 0x40);
        if ((((*(byte *)(lVar10 + 0x150) & 8) == 0) && ((*(byte *)(lVar10 + 0x14c) & 0xc0) == 0)) &&
            ((*(int *)(lVar10 + 0x1a8) == 0 && ((*(uint *)(lVar10 + 0x154) & 0x80) != 0)))) {
            uVar8 = *(uint *)(lVar7 + 0x80) & 1;
        }
        else {
            uVar8 = 1;
        }
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar4);
        puVar11 = *(undefined8 **)(lVar1 + 0x10);
        *puVar11 = *puVar6;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
        lVar7 = FUN_14018f0e0(local_38,L"bSoulbound");
        if (*(longlong *)(lVar7 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar1 + 0x10) + 8) = 0;
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
        }
        else {
            lVar10 = -1;
            do {
                lVar10 = lVar10 + 1;
            } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar10) != '\0');
            FUN_140058710(lVar1);
        }
        if (local_30 != 0) {
            FUN_14018b900(local_30,0);
        }
        puVar3 = *(uint **)(lVar1 + 0x10);
        puVar3[2] = 1;
        *puVar3 = (uint)(uVar8 != 0);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
        uVar5 = FUN_1400580e0(lVar1,0xfffffffd);
        FUN_14005ea50(lVar1,uVar5,*(longlong *)(lVar1 + 0x10) + -0x20,
                      *(longlong *)(lVar1 + 0x10) + -0x10);
        *(longlong *)(lVar1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar1 + 0x10));
        uVar8 = *(uint *)(param_1[0x14] + 0x80);
        puVar11 = *(undefined8 **)(lVar1 + 0x10);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar4);
        *puVar11 = *puVar6;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
        lVar7 = FUN_14018f0e0(local_38,L"bNoTrade");
        lVar7 = *(longlong *)(lVar7 + 8);
        if (lVar7 == 0) {
            *(undefined4 *)(*(longlong *)(lVar1 + 0x10) + 8) = 0;
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
        }
        else {
            do {
                lVar9 = lVar9 + 1;
            } while (*(char *)(lVar7 + lVar9) != '\0');
            FUN_140058710(lVar1,lVar7,lVar9);
        }
        if (local_30 != 0) {
            FUN_14018b900(local_30,0);
        }
        puVar3 = *(uint **)(lVar1 + 0x10);
        puVar3[2] = 1;
        *puVar3 = (uint)((uVar8 & 0x80) != 0);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
        uVar5 = FUN_1400580e0(lVar1,0xfffffffd);
        FUN_14005ea50(lVar1,uVar5,*(longlong *)(lVar1 + 0x10) + -0x20,
                      *(longlong *)(lVar1 + 0x10) + -0x10);
        *(longlong *)(lVar1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar1 + 0x10));
    }
    FUN_1400fb2a0(param_2,L"tBind",uVar4);
    FUN_1400579e0(lVar1);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14066fb50(longlong *param_1,undefined8 param_2)

{
    longlong lVar1;
    double *pdVar2;
    uint *puVar3;
    byte bVar4;
    undefined4 uVar5;
    int iVar6;
    undefined8 uVar7;
    undefined8 *puVar8;
    undefined8 *puVar9;
    longlong lVar10;
    longlong lVar11;
    longlong lVar12;
    longlong lVar13;
    uint uVar14;
    undefined8 local_a8;
    undefined8 local_a0;
    undefined8 local_98;
    undefined **local_90;
    undefined4 local_88;
    longlong local_80;
    undefined4 local_78;
    undefined **local_70;
    undefined4 local_68;
    undefined4 uStack100;
    longlong local_60;
    undefined4 local_58;
    undefined **local_50;
    undefined4 local_48;
    longlong local_40;
    undefined4 local_38;

    if ((*(int *)(param_1 + 0xa7) != 0) && (param_1 != (longlong *)0xffffffffffffff40)) {
        lVar1 = *param_1;
        local_70 = &PTR_FUN_140b569f0;
        local_58 = 1;
        local_60 = lVar1;
        if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar1);
        }
        puVar8 = *(undefined8 **)(lVar1 + 0x10);
        uVar7 = FUN_14005c1b0(lVar1,0);
        *(undefined4 *)(puVar8 + 1) = 5;
        *puVar8 = uVar7;
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
        uVar5 = FUN_1400578c0(lVar1);
        lVar10 = *param_1;
        local_90 = &PTR_FUN_140b569f0;
        local_78 = 1;
        local_80 = lVar10;
        local_68 = uVar5;
        if (*(ulonglong *)(*(longlong *)(lVar10 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar10 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar10);
        }
        puVar8 = *(undefined8 **)(lVar10 + 0x10);
        uVar7 = FUN_14005c1b0(lVar10,0);
        *(undefined4 *)(puVar8 + 1) = 5;
        *puVar8 = uVar7;
        *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
        local_88 = FUN_1400578c0(lVar10);
        iVar6 = FUN_140675320(param_1,&local_90);
        if (iVar6 != 0) {
            FUN_1400fb2a0(&local_70,L"arMonBuy");
        }
        lVar10 = *param_1;
        local_50 = &PTR_FUN_140b569f0;
        local_38 = 1;
        local_40 = lVar10;
        if (*(ulonglong *)(*(longlong *)(lVar10 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar10 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar10);
        }
        puVar8 = *(undefined8 **)(lVar10 + 0x10);
        uVar7 = FUN_14005c1b0(lVar10,0);
        *(undefined4 *)(puVar8 + 1) = 5;
        *puVar8 = uVar7;
        *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
        local_48 = FUN_1400578c0(lVar10);
        iVar6 = FUN_1406756d0(param_1,&local_50);
        if (iVar6 != 0) {
            FUN_1400fb2a0(&local_70,L"arMonSell");
        }
        if (param_1[0x14] != 0) {
            lVar11 = 0;
            bVar4 = 0;
            uVar7 = FUN_1403b54a0();
            local_a0 = 1;
            local_98 = 0;
            puVar8 = (undefined8 *)FUN_140059170(lVar1,0x18);
            *puVar8 = uVar7;
            puVar8[1] = local_a0;
            puVar8[2] = 0;
            lVar10 = *(longlong *)(lVar1 + 0x20);
            local_a8 = FUN_140062650(lVar1,"Game.Money",10);
            local_a0 = CONCAT44(local_a0._4_4_,4);
            FUN_14005e8e0(lVar1,lVar10 + 0xa0,&local_a8,*(undefined8 *)(lVar1 + 0x10));
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
            FUN_140058bf0(lVar1,0xfffffffe);
            FUN_1400fb540(&local_70,L"monRepair");
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
            lVar10 = param_1[0x14];
            if (((~(*(uint *)(lVar10 + 0x80) >> 3) & 1) != 0) &&
                (iVar6 = FUN_14018cdf0(), 0 < *(int *)(lVar10 + 0xec) - iVar6)) {
                iVar6 = FUN_14018cdf0();
                uVar14 = *(int *)(lVar10 + 0xec) - iVar6;
                if (uVar14 != 0) {
                    puVar9 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar5);
                    puVar8 = *(undefined8 **)(lVar1 + 0x10);
                    *puVar8 = *puVar9;
                    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar9 + 1);
                    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
                    lVar10 = FUN_14018f0e0(&local_70,L"nRemainingReturnTimeSeconds");
                    lVar12 = -1;
                    if (*(longlong *)(lVar10 + 8) == 0) {
                        *(undefined4 *)(*(longlong *)(lVar1 + 0x10) + 8) = 0;
                        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
                    }
                    else {
                        lVar13 = -1;
                        do {
                            lVar13 = lVar13 + 1;
                        } while (*(char *)(*(longlong *)(lVar10 + 8) + lVar13) != '\0');
                        FUN_140058710(lVar1);
                    }
                    if (CONCAT44(uStack100,local_68) != 0) {
                        FUN_14018b900(CONCAT44(uStack100,local_68),0);
                    }
                    pdVar2 = *(double **)(lVar1 + 0x10);
                    *(undefined4 *)(pdVar2 + 1) = 3;
                    *pdVar2 = (double)((float)(ulonglong)uVar14 * 0.001);
                    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
                    uVar7 = FUN_1400580e0(lVar1,0xfffffffd);
                    FUN_14005ea50(lVar1,uVar7,*(longlong *)(lVar1 + 0x10) + -0x20,
                                  *(longlong *)(lVar1 + 0x10) + -0x10);
                    *(longlong *)(lVar1 + 0x10) =
                            (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar1 + 0x10));
                    puVar8 = *(undefined8 **)(lVar1 + 0x10);
                    if (*(int *)(param_1 + 0xa8) != 0) {
                        lVar11 = param_1[0x15];
                    }
                    if ((*(int *)(lVar11 + 0x168) != 0) &&
                        (((*(int *)(lVar11 + 0x38) == 5 && (0 < *(longlong *)(lVar11 + 0x30))) ||
                          ((*(int *)(lVar11 + 0x50) == 5 && (0 < *(longlong *)(lVar11 + 0x48))))))) {
                        bVar4 = 1;
                    }
                    puVar9 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar5);
                    *puVar8 = *puVar9;
                    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar9 + 1);
                    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
                    lVar10 = FUN_14018f0e0(&local_70,L"bHasRestockingFee");
                    lVar10 = *(longlong *)(lVar10 + 8);
                    if (lVar10 == 0) {
                        *(undefined4 *)(*(longlong *)(lVar1 + 0x10) + 8) = 0;
                        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
                    }
                    else {
                        do {
                            lVar12 = lVar12 + 1;
                        } while (*(char *)(lVar10 + lVar12) != '\0');
                        FUN_140058710(lVar1,lVar10,lVar12);
                    }
                    if (CONCAT44(uStack100,local_68) != 0) {
                        FUN_14018b900(CONCAT44(uStack100,local_68),0);
                    }
                    puVar3 = *(uint **)(lVar1 + 0x10);
                    puVar3[2] = 1;
                    *puVar3 = (uint)bVar4;
                    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
                    uVar7 = FUN_1400580e0(lVar1,0xfffffffd);
                    FUN_14005ea50(lVar1,uVar7,*(longlong *)(lVar1 + 0x10) + -0x20,
                                  *(longlong *)(lVar1 + 0x10) + -0x10);
                    *(longlong *)(lVar1 + 0x10) =
                            (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar1 + 0x10));
                }
            }
        }
        FUN_1400fb2a0(param_2,L"tCost",uVar5);
        if (local_40 != 0) {
            FUN_1400579e0();
        }
        if (local_80 != 0) {
            FUN_1400579e0();
        }
        FUN_1400579e0(lVar1);
    }
    return;
}



void FUN_140670050(longlong *param_1,undefined8 param_2)

{
    undefined4 uVar1;
    longlong lVar2;
    undefined8 *puVar3;
    int iVar4;
    undefined4 uVar5;
    uint uVar6;
    undefined8 uVar7;
    undefined8 *puVar8;
    longlong *plVar9;
    ulonglong uVar10;

    if ((*(int *)(param_1 + 0xa8) != 0) && (param_1[0x15] != 0)) {
        plVar9 = param_1 + 0x18;
        if (*(int *)(param_1 + 0xa7) == 0) {
            plVar9 = (longlong *)0x0;
        }
        iVar4 = FUN_1403b5400(param_1,param_1[0x15],plVar9);
        if (iVar4 != 0) {
            lVar2 = *param_1;
            if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar2);
            }
            puVar3 = *(undefined8 **)(lVar2 + 0x10);
            uVar7 = FUN_14005c1b0(lVar2,0,0);
            *(undefined4 *)(puVar3 + 1) = 5;
            *puVar3 = uVar7;
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            uVar5 = FUN_1400578c0(lVar2);
            puVar8 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar5);
            puVar3 = *(undefined8 **)(lVar2 + 0x10);
            *puVar3 = *puVar8;
            *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar8 + 1);
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            FUN_1400f06f0(lVar2,puVar3,L"nMax",iVar4);
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
            if (param_1[0x14] != 0) {
                uVar6 = FUN_1403b5360();
                uVar10 = (ulonglong)uVar6;
                puVar8 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0));
                puVar3 = *(undefined8 **)(lVar2 + 0x10);
                *puVar3 = *puVar8;
                uVar1 = *(undefined4 *)(puVar8 + 1);
                *(undefined4 *)(puVar3 + 1) = uVar1;
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                FUN_1400f06f0(lVar2,uVar1,L"nCurrent",uVar10 & 0xffffffff);
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
            }
            FUN_1400fb2a0(param_2,L"tDurability",uVar5);
            FUN_1400579e0(lVar2);
        }
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1406701f0(longlong *param_1,longlong param_2)

{
    short sVar1;
    undefined4 uVar2;
    uint *puVar3;
    undefined4 *puVar4;
    undefined4 uVar5;
    int iVar6;
    uint uVar7;
    int iVar8;
    undefined8 uVar9;
    undefined8 *puVar10;
    longlong lVar11;
    int *piVar12;
    longlong *plVar13;
    longlong lVar14;
    undefined2 *puVar15;
    short *psVar16;
    longlong lVar17;
    longlong *plVar18;
    longlong lVar19;
    longlong *plVar20;
    uint uVar21;
    uint uVar22;
    ulonglong uVar23;
    undefined8 *puVar24;
    uint uVar25;
    longlong *plVar26;
    undefined **local_178;
    undefined4 local_170;
    undefined4 uStack364;
    longlong local_168;
    undefined4 local_160;
    undefined **local_158;
    undefined4 local_150;
    longlong local_148;
    undefined4 local_140;
    undefined local_138 [8];
    longlong local_130;
    undefined **local_118;
    undefined local_110 [8];
    undefined2 *local_108;
    undefined2 *local_100;
    undefined local_58 [16];
    undefined2 *local_48;

    if (*(int *)(param_1 + 0xa8) == 0) {
        return;
    }
    if (param_1[0x15] == 0) {
        return;
    }
    if (*(int *)(param_1 + 0xa7) == 0) {
        return;
    }
    if (param_1 == (longlong *)0xffffffffffffff40) {
        return;
    }
    plVar26 = (longlong *)0x0;
    uVar7 = 0;
    plVar18 = plVar26;
    if (*(int *)(param_1 + 0xa8) != 0) {
        plVar18 = (longlong *)param_1[0x15];
    }
    uVar22 = 0;
    plVar20 = plVar26;
    if (*(int *)(param_1 + 0xa7) != 0) {
        plVar20 = param_1 + 0x18;
    }
    if (((*(byte *)(plVar20 + 4) & 2) == 0) && ((*(byte *)((longlong)plVar18 + 0x14c) & 1) == 0)) {
        lVar19 = *param_1;
        if (*(ulonglong *)(*(longlong *)(lVar19 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar19 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar19);
        }
        puVar24 = *(undefined8 **)(lVar19 + 0x10);
        uVar9 = FUN_14005c1b0(lVar19,0,0);
        *(undefined4 *)(puVar24 + 1) = 5;
        *puVar24 = uVar9;
        *(longlong *)(lVar19 + 0x10) = *(longlong *)(lVar19 + 0x10) + 0x10;
        uVar5 = FUN_1400578c0(lVar19);
        plVar18 = param_1 + 0x18;
        if (*(int *)(param_1 + 0xa7) == 0) {
            plVar18 = plVar26;
        }
        uVar23 = (ulonglong)*(uint *)(plVar18 + 1);
        puVar10 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar19 + 0x20) + 0xa0),uVar5);
        puVar24 = *(undefined8 **)(lVar19 + 0x10);
        *puVar24 = *puVar10;
        *(undefined4 *)(puVar24 + 1) = *(undefined4 *)(puVar10 + 1);
        *(longlong *)(lVar19 + 0x10) = *(longlong *)(lVar19 + 0x10) + 0x10;
        FUN_1400f06f0(lVar19,puVar24,L"nLevelRequired",uVar23 & 0xffffffff);
        puVar24 = (undefined8 *)(*(longlong *)(lVar19 + 0x10) + -0x10);
        *(undefined8 **)(lVar19 + 0x10) = puVar24;
        plVar18 = param_1 + 0x18;
        if (*(int *)(param_1 + 0xa7) == 0) {
            plVar18 = plVar26;
        }
        if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
            uVar7 = *(uint *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x38);
        }
        uVar21 = *(uint *)(plVar18 + 1);
        uVar25 = *(uint *)(plVar18 + 1);
        puVar10 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar19 + 0x20) + 0xa0),uVar5);
        *puVar24 = *puVar10;
        *(undefined4 *)(puVar24 + 1) = *(undefined4 *)(puVar10 + 1);
        *(longlong *)(lVar19 + 0x10) = *(longlong *)(lVar19 + 0x10) + 0x10;
        lVar11 = FUN_14018f0e0(&local_178,L"bRequirementMet");
        if (*(longlong *)(lVar11 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar19 + 0x10) + 8) = 0;
            *(longlong *)(lVar19 + 0x10) = *(longlong *)(lVar19 + 0x10) + 0x10;
        }
        else {
            lVar14 = -1;
            do {
                lVar14 = lVar14 + 1;
            } while (*(char *)(*(longlong *)(lVar11 + 8) + lVar14) != '\0');
            FUN_140058710(lVar19);
        }
        if (CONCAT44(uStack364,local_170) != 0) {
            FUN_14018b900(CONCAT44(uStack364,local_170),0);
        }
        puVar3 = *(uint **)(lVar19 + 0x10);
        puVar3[2] = 1;
        *puVar3 = (uint)(uVar21 < uVar7 || uVar25 == uVar7);
        *(longlong *)(lVar19 + 0x10) = *(longlong *)(lVar19 + 0x10) + 0x10;
        uVar9 = FUN_1400580e0(lVar19,0xfffffffd);
        FUN_14005ea50(lVar19,uVar9,*(longlong *)(lVar19 + 0x10) + -0x20,
                      *(longlong *)(lVar19 + 0x10) + -0x10);
        *(longlong *)(lVar19 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar19 + 0x10));
        FUN_1400fb2a0(param_2,L"tLevelRequirement");
        FUN_1400579e0(lVar19);
    }
    plVar18 = plVar26;
    if (*(int *)(param_1 + 0xa8) != 0) {
        plVar18 = (longlong *)param_1[0x15];
    }
    if (*(int *)((longlong)plVar18 + 0x18c) != 0) {
        lVar19 = *param_1;
        local_178 = &PTR_FUN_140b569f0;
        local_160 = 1;
        local_168 = lVar19;
        if (*(ulonglong *)(*(longlong *)(lVar19 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar19 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar19);
        }
        puVar24 = *(undefined8 **)(lVar19 + 0x10);
        uVar9 = FUN_14005c1b0(lVar19,0);
        *(undefined4 *)(puVar24 + 1) = 5;
        *puVar24 = uVar9;
        *(longlong *)(lVar19 + 0x10) = *(longlong *)(lVar19 + 0x10) + 0x10;
        local_170 = FUN_1400578c0(lVar19);
        lVar11 = *param_1;
        local_140 = 1;
        local_158 = &PTR_FUN_140b569f0;
        local_148 = lVar11;
        if (*(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar11);
        }
        puVar24 = *(undefined8 **)(lVar11 + 0x10);
        uVar9 = FUN_14005c1b0(lVar11);
        *(undefined4 *)(puVar24 + 1) = 5;
        *puVar24 = uVar9;
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
        local_150 = FUN_1400578c0();
        iVar6 = FUN_1401f3190();
        plVar18 = plVar26;
        plVar20 = plVar26;
        uVar7 = uVar22;
        if (0 < iVar6) {
            do {
                piVar12 = (int *)FUN_1401f3240();
                if (piVar12 != (int *)0x0) {
                    plVar13 = plVar26;
                    if (*(int *)(param_1 + 0xa8) != 0) {
                        plVar13 = (longlong *)param_1[0x15];
                    }
                    if ((*(uint *)((longlong)plVar13 + 0x18c) & 1 << ((char)*piVar12 - 1U & 0x1f)) != 0) {
                        FUN_1400fa9e0(&local_158);
                        if (*(longlong *)(DAT_140c65898 + 0x78) == 0) {
                            iVar8 = 0x17;
                        }
                        else {
                            iVar8 = *(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 0xdc);
                        }
                        if (iVar8 == *piVar12) {
                            plVar20 = (longlong *)0x1;
                        }
                    }
                }
                uVar7 = (uint)plVar20;
                uVar21 = (int)plVar18 + 1;
                plVar18 = (longlong *)(ulonglong)uVar21;
                lVar11 = local_148;
            } while ((int)uVar21 < iVar6);
        }
        puVar10 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar19 + 0x20) + 0xa0),local_170);
        puVar24 = *(undefined8 **)(lVar19 + 0x10);
        *puVar24 = *puVar10;
        *(undefined4 *)(puVar24 + 1) = *(undefined4 *)(puVar10 + 1);
        *(longlong *)(lVar19 + 0x10) = *(longlong *)(lVar19 + 0x10) + 0x10;
        lVar14 = FUN_14018f0e0(local_138,L"bRequirementMet");
        if (*(longlong *)(lVar14 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar19 + 0x10) + 8) = 0;
            *(longlong *)(lVar19 + 0x10) = *(longlong *)(lVar19 + 0x10) + 0x10;
        }
        else {
            lVar17 = -1;
            do {
                lVar17 = lVar17 + 1;
            } while (*(char *)(*(longlong *)(lVar14 + 8) + lVar17) != '\0');
            FUN_140058710(lVar19);
        }
        if (local_130 != 0) {
            FUN_14018b900(local_130,0);
        }
        puVar3 = *(uint **)(lVar19 + 0x10);
        *puVar3 = (uint)(uVar7 != 0);
        puVar3[2] = 1;
        *(longlong *)(lVar19 + 0x10) = *(longlong *)(lVar19 + 0x10) + 0x10;
        uVar9 = FUN_1400580e0(lVar19,0xfffffffd);
        FUN_14005ea50(lVar19,uVar9,*(longlong *)(lVar19 + 0x10) + -0x20,
                      *(longlong *)(lVar19 + 0x10) + -0x10);
        *(longlong *)(lVar19 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar19 + 0x10));
        FUN_1400fb2a0(&local_178,L"arClasses",local_150);
        FUN_1400fb2a0(param_2,L"tClassRequirement",local_170);
        if (lVar11 != 0) {
            FUN_1400579e0(lVar11);
        }
        FUN_1400579e0(lVar19);
    }
    plVar18 = plVar26;
    if (*(int *)(param_1 + 0xa8) != 0) {
        plVar18 = (longlong *)param_1[0x15];
    }
    if (*(int *)(plVar18 + 0x32) != 0) {
        lVar19 = *param_1;
        local_158 = &PTR_FUN_140b569f0;
        local_140 = 1;
        local_148 = lVar19;
        if (*(ulonglong *)(*(longlong *)(lVar19 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar19 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar19);
        }
        puVar24 = *(undefined8 **)(lVar19 + 0x10);
        uVar9 = FUN_14005c1b0(lVar19,0,0);
        *(undefined4 *)(puVar24 + 1) = 5;
        *puVar24 = uVar9;
        *(longlong *)(lVar19 + 0x10) = *(longlong *)(lVar19 + 0x10) + 0x10;
        local_150 = FUN_1400578c0(lVar19);
        lVar11 = *param_1;
        local_178 = &PTR_FUN_140b569f0;
        local_160 = 1;
        local_168 = lVar11;
        if (*(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar11);
        }
        puVar24 = *(undefined8 **)(lVar11 + 0x10);
        uVar9 = FUN_14005c1b0(lVar11,0,0);
        *(undefined4 *)(puVar24 + 1) = 5;
        *puVar24 = uVar9;
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
        local_170 = FUN_1400578c0(lVar11);
        iVar6 = FUN_14022d4b0();
        uVar21 = 1;
        plVar18 = plVar26;
        plVar20 = plVar26;
        uVar7 = uVar22;
        if (0 < iVar6) {
            do {
                plVar13 = plVar26;
                if (*(int *)(param_1 + 0xa8) != 0) {
                    plVar13 = (longlong *)param_1[0x15];
                }
                if (((*(uint *)(plVar13 + 0x32) & uVar21) != 0) &&
                    (piVar12 = (int *)FUN_14022d500((int)plVar20 + 1), piVar12 != (int *)0x0)) {
                    FUN_1400fa9e0(&local_178,*piVar12);
                    if (*(longlong *)(DAT_140c65898 + 0x78) == 0) {
                        iVar8 = 0x11;
                    }
                    else {
                        iVar8 = *(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 0xd8);
                    }
                    if (iVar8 == *piVar12) {
                        plVar18 = (longlong *)0x1;
                    }
                }
                uVar7 = (uint)plVar18;
                uVar21 = uVar21 << 1 | (uint)((int)uVar21 < 0);
                uVar25 = (int)plVar20 + 1;
                plVar20 = (longlong *)(ulonglong)uVar25;
                lVar11 = local_168;
            } while ((int)uVar25 < iVar6);
        }
        puVar10 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar19 + 0x20) + 0xa0),local_150);
        puVar24 = *(undefined8 **)(lVar19 + 0x10);
        *puVar24 = *puVar10;
        *(undefined4 *)(puVar24 + 1) = *(undefined4 *)(puVar10 + 1);
        *(longlong *)(lVar19 + 0x10) = *(longlong *)(lVar19 + 0x10) + 0x10;
        lVar14 = FUN_14018f0e0(local_138,L"bRequirementMet");
        if (*(longlong *)(lVar14 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar19 + 0x10) + 8) = 0;
            *(longlong *)(lVar19 + 0x10) = *(longlong *)(lVar19 + 0x10) + 0x10;
        }
        else {
            lVar17 = -1;
            do {
                lVar17 = lVar17 + 1;
            } while (*(char *)(*(longlong *)(lVar14 + 8) + lVar17) != '\0');
            FUN_140058710(lVar19);
        }
        if (local_130 != 0) {
            FUN_14018b900(local_130,0);
        }
        puVar3 = *(uint **)(lVar19 + 0x10);
        *puVar3 = (uint)(uVar7 != 0);
        puVar3[2] = 1;
        *(longlong *)(lVar19 + 0x10) = *(longlong *)(lVar19 + 0x10) + 0x10;
        uVar9 = FUN_1400580e0(lVar19,0xfffffffd);
        FUN_14005ea50(lVar19,uVar9,*(longlong *)(lVar19 + 0x10) + -0x20,
                      *(longlong *)(lVar19 + 0x10) + -0x10);
        *(longlong *)(lVar19 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar19 + 0x10));
        FUN_1400fb2a0(&local_158,L"arRaces",local_170);
        FUN_1400fb2a0(param_2,L"tRaceRequirement",local_150);
        if (lVar11 != 0) {
            FUN_1400579e0(lVar11);
        }
        FUN_1400579e0();
    }
    lVar19 = -1;
    plVar18 = plVar26;
    if (*(int *)(param_1 + 0xa8) != 0) {
        plVar18 = (longlong *)param_1[0x15];
    }
    if (*(int *)((longlong)plVar18 + 0x194) != 0) {
        plVar18 = plVar26;
        if (*(int *)(param_1 + 0xa8) != 0) {
            plVar18 = (longlong *)param_1[0x15];
        }
        if (DAT_140c63840 == (code *)0x0) {
            if ((_DAT_140c6546c != 0) || (iVar6 = FUN_1401feec0(), iVar6 < 0)) goto LAB_140670c14;
            lVar11 = (**(code **)(*DAT_140c64d20 + 0x18))();
        }
        else {
            lVar11 = (*DAT_140c63840)(&PTR_u_Faction2_140a6a328,*(undefined4 *)((longlong)plVar18 + 0x194)
                    ,DAT_140c63858);
        }
        if (lVar11 != 0) {
            lVar11 = *param_1;
            if (*(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar11);
            }
            puVar24 = *(undefined8 **)(lVar11 + 0x10);
            uVar9 = FUN_14005c1b0(lVar11,0,0);
            *(undefined4 *)(puVar24 + 1) = 5;
            *puVar24 = uVar9;
            *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
            uVar5 = FUN_1400578c0(lVar11);
            uVar7 = uVar22;
            if (*(longlong **)(DAT_140c65898 + 0x1bf0) != (longlong *)0x0) {
                uVar7 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))();
            }
            if ((*(int *)(param_1 + 0xa8) != 0) && (param_1[0x15] != 0)) {
                uVar22 = *(uint *)(param_1[0x15] + 0x194);
                if (uVar22 == 0) {
                    uVar22 = 1;
                }
                else {
                    uVar22 = (uint)(uVar22 == uVar7);
                }
            }
            puVar10 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),uVar5);
            puVar24 = *(undefined8 **)(lVar11 + 0x10);
            *puVar24 = *puVar10;
            *(undefined4 *)(puVar24 + 1) = *(undefined4 *)(puVar10 + 1);
            *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
            lVar14 = FUN_14018f0e0(local_138,L"bRequirementMet");
            if (*(longlong *)(lVar14 + 8) == 0) {
                *(undefined4 *)(*(longlong *)(lVar11 + 0x10) + 8) = 0;
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
            }
            else {
                lVar17 = -1;
                do {
                    lVar17 = lVar17 + 1;
                } while (*(char *)(*(longlong *)(lVar14 + 8) + lVar17) != '\0');
                FUN_140058710(lVar11);
            }
            if (local_130 != 0) {
                FUN_14018b900(local_130,0);
            }
            puVar3 = *(uint **)(lVar11 + 0x10);
            *puVar3 = (uint)(uVar22 != 0);
            puVar3[2] = 1;
            *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
            uVar9 = FUN_1400580e0(lVar11,0xfffffffd);
            FUN_14005ea50(lVar11,uVar9,*(longlong *)(lVar11 + 0x10) + -0x20,
                          *(longlong *)(lVar11 + 0x10) + -0x10);
            *(longlong *)(lVar11 + 0x10) =
                    (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar11 + 0x10));
            puVar24 = *(undefined8 **)(lVar11 + 0x10);
            puVar10 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),uVar5);
            *puVar24 = *puVar10;
            *(undefined4 *)(puVar24 + 1) = *(undefined4 *)(puVar10 + 1);
            *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
            FUN_1400f06f0(lVar11);
            *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
            uVar9 = FUN_14034bdd0();
            puVar10 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),uVar5);
            puVar24 = *(undefined8 **)(lVar11 + 0x10);
            *puVar24 = *puVar10;
            uVar2 = *(undefined4 *)(puVar10 + 1);
            *(undefined4 *)(puVar24 + 1) = uVar2;
            *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
            FUN_1400f0870(lVar11,uVar2,L"strFactionName",uVar9);
            *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
            FUN_1400fb2a0(param_2,L"tFactionRequirement",uVar5);
            FUN_1400579e0();
        }
    }
    LAB_140670c14:
    plVar18 = plVar26;
    if (*(int *)(param_1 + 0xa8) != 0) {
        plVar18 = (longlong *)param_1[0x15];
    }
    if (*(int *)(plVar18 + 0x33) != 0) {
        plVar18 = plVar26;
        if (*(int *)(param_1 + 0xa8) != 0) {
            plVar18 = (longlong *)param_1[0x15];
        }
        if (((*(int *)(plVar18 + 0x33) != 0) && (lVar11 = FUN_1402259c0(), lVar11 != 0)) &&
            (iVar6 = *(int *)(lVar11 + 0x38), iVar6 != 0)) {
            plVar18 = plVar26;
            if (*(int *)(param_1 + 0xa8) != 0) {
                plVar18 = (longlong *)param_1[0x15];
            }
            iVar8 = (**(code **)(*DAT_140c659a0 + 0x18))
                    (DAT_140c659a0,*(undefined8 *)(DAT_140c65898 + 0x78),
                     *(undefined4 *)(plVar18 + 0x33),0,0,0);
            if (iVar8 == 0) {
                lVar11 = *param_1;
                if (*(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x78)) {
                    FUN_14005e2c0(lVar11);
                }
                puVar24 = *(undefined8 **)(lVar11 + 0x10);
                uVar9 = FUN_14005c1b0(lVar11,0,0);
                *(undefined4 *)(puVar24 + 1) = 5;
                *puVar24 = uVar9;
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                uVar5 = FUN_1400578c0(lVar11);
                puVar10 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),uVar5);
                puVar24 = *(undefined8 **)(lVar11 + 0x10);
                *puVar24 = *puVar10;
                *(undefined4 *)(puVar24 + 1) = *(undefined4 *)(puVar10 + 1);
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                lVar14 = FUN_14018f0e0(local_138,L"bRequirementMet");
                if (*(longlong *)(lVar14 + 8) == 0) {
                    *(undefined4 *)(*(longlong *)(lVar11 + 0x10) + 8) = 0;
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                }
                else {
                    lVar17 = -1;
                    do {
                        lVar17 = lVar17 + 1;
                    } while (*(char *)(*(longlong *)(lVar14 + 8) + lVar17) != '\0');
                    FUN_140058710(lVar11);
                }
                if (local_130 != 0) {
                    FUN_14018b900(local_130,0);
                }
                puVar4 = *(undefined4 **)(lVar11 + 0x10);
                puVar4[2] = 1;
                *puVar4 = 0;
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                uVar9 = FUN_1400580e0(lVar11,0xfffffffd);
                FUN_14005ea50(lVar11,uVar9,*(longlong *)(lVar11 + 0x10) + -0x20,
                              *(longlong *)(lVar11 + 0x10) + -0x10);
                *(longlong *)(lVar11 + 0x10) =
                        (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar11 + 0x10));
                FUN_1400b6f30(&local_118);
                local_118 = &PTR_FUN_140b69230;
                local_48 = (undefined2 *)0x0;
                local_58 = ZEXT816(0);
                puVar15 = (undefined2 *)FUN_14018b280(0x10);
                local_58 = CONCAT88(puVar15,puVar15);
                local_48 = puVar15 + 8;
                if (puVar15 != (undefined2 *)0x0) {
                    *puVar15 = 0;
                }
                psVar16 = (short *)FUN_14034bdd0(local_48,iVar6);
                if (psVar16 == (short *)0x0) {
                    if (local_108 != local_100) {
                        *local_108 = 0;
                        local_100 = local_108;
                    }
                }
                else {
                    sVar1 = *psVar16;
                    plVar18 = plVar26;
                    while (sVar1 != 0) {
                        plVar18 = (longlong *)((longlong)plVar18 + 1);
                        sVar1 = psVar16[(longlong)plVar18];
                    }
                    FUN_14001c480(local_110,psVar16,psVar16 + (longlong)plVar18);
                }
                lVar17 = FUN_1400b7660(&local_118);
                lVar14 = *(longlong *)(lVar17 + 8);
                lVar17 = *(longlong *)(lVar17 + 0x10) - lVar14 >> 1;
                uVar23 = lVar17 + 1;
                plVar18 = plVar26;
                if (uVar23 < 0x7fffffffffffffff) {
                    plVar18 = (longlong *)FUN_14018b280(uVar23 * 2,0);
                }
                lVar17 = lVar17 * 2;
                FUN_1407db590(plVar18,lVar14,lVar17);
                plVar20 = (longlong *)(lVar17 + (longlong)plVar18);
                if (plVar20 != (longlong *)0x0) {
                    *(undefined2 *)plVar20 = 0;
                }
                if (plVar18 != plVar20) {
                    puVar10 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),uVar5);
                    puVar24 = *(undefined8 **)(lVar11 + 0x10);
                    *puVar24 = *puVar10;
                    *(undefined4 *)(puVar24 + 1) = *(undefined4 *)(puVar10 + 1);
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                    FUN_1400f0870(lVar11,puVar24,L"strFailure",plVar18);
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
                }
                FUN_1400fb2a0(param_2,L"tUseRequirement",uVar5);
                if (plVar18 != (longlong *)0x0) {
                    FUN_14018b900(plVar18,0);
                }
                if (local_58._0_8_ != 0) {
                    FUN_14018b900(local_58._0_8_,0);
                }
                FUN_1400b7390(&local_118);
                FUN_1400579e0(lVar11);
            }
        }
    }
    plVar18 = plVar26;
    if (*(int *)(param_1 + 0xa8) != 0) {
        plVar18 = (longlong *)param_1[0x15];
    }
    uVar5 = *(undefined4 *)((longlong)plVar18 + 0x19c);
    if (DAT_140c63840 == (code *)0x0) {
        if ((_DAT_140c64590 != 0) || (iVar6 = FUN_14020bf00(), iVar6 < 0)) goto LAB_140671205;
        lVar11 = (**(code **)(*DAT_140c65498 + 0x18))(DAT_140c65498,uVar5);
    }
    else {
        lVar11 = (*DAT_140c63840)(&PTR_u_ItemProficiency_140a6ade0,uVar5,DAT_140c63858);
    }
    if (lVar11 == 0) goto LAB_140671205;
    lVar11 = *param_1;
    if (*(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar11);
    }
    puVar24 = *(undefined8 **)(lVar11 + 0x10);
    uVar9 = FUN_14005c1b0(lVar11,0,0);
    *(undefined4 *)(puVar24 + 1) = 5;
    *puVar24 = uVar9;
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    uVar5 = FUN_1400578c0(lVar11);
    plVar18 = plVar26;
    if (*(int *)(param_1 + 0xa8) != 0) {
        plVar18 = (longlong *)param_1[0x15];
    }
    uVar23 = (ulonglong)*(uint *)((longlong)plVar18 + 0x19c);
    puVar10 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),uVar5);
    puVar24 = *(undefined8 **)(lVar11 + 0x10);
    *puVar24 = *puVar10;
    *(undefined4 *)(puVar24 + 1) = *(undefined4 *)(puVar10 + 1);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    FUN_1400f06f0(lVar11,puVar24,&DAT_140b2f750,uVar23 & 0xffffffff);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
    lVar14 = DAT_140c65898;
    plVar18 = plVar26;
    if (*(int *)(param_1 + 0xa8) != 0) {
        plVar18 = (longlong *)param_1[0x15];
    }
    uVar2 = *(undefined4 *)((longlong)plVar18 + 0x19c);
    if (DAT_140c63840 == (code *)0x0) {
        if ((_DAT_140c64590 == 0) && (iVar6 = FUN_14020bf00(), -1 < iVar6)) {
            lVar17 = (**(code **)(*DAT_140c65498 + 0x18))(DAT_140c65498,uVar2);
            goto LAB_1406710b2;
        }
        LAB_1406710cf:
        uVar7 = 1;
    }
    else {
        lVar17 = (*DAT_140c63840)(&PTR_u_ItemProficiency_140a6ade0,uVar2,DAT_140c63858);
        LAB_1406710b2:
        if ((lVar17 == 0) || (*(uint *)(lVar17 + 4) == 0)) goto LAB_1406710cf;
        uVar7 = *(uint *)(lVar14 + 0x1b40) & *(uint *)(lVar17 + 4);
    }
    puVar10 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),uVar5);
    puVar24 = *(undefined8 **)(lVar11 + 0x10);
    *puVar24 = *puVar10;
    *(undefined4 *)(puVar24 + 1) = *(undefined4 *)(puVar10 + 1);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    lVar14 = FUN_14018f0e0(local_138,L"bRequirementMet");
    lVar14 = *(longlong *)(lVar14 + 8);
    if (lVar14 == 0) {
        *(undefined4 *)(*(longlong *)(lVar11 + 0x10) + 8) = 0;
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    }
    else {
        do {
            lVar19 = lVar19 + 1;
        } while (*(char *)(lVar14 + lVar19) != '\0');
        FUN_140058710(lVar11,lVar14,lVar19);
    }
    if (local_130 != 0) {
        FUN_14018b900(local_130,0);
    }
    puVar3 = *(uint **)(lVar11 + 0x10);
    puVar3[2] = 1;
    *puVar3 = (uint)(uVar7 != 0);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    uVar9 = FUN_1400580e0(lVar11,0xfffffffd);
    FUN_14005ea50(lVar11,uVar9,*(longlong *)(lVar11 + 0x10) + -0x20,
                  *(longlong *)(lVar11 + 0x10) + -0x10);
    *(longlong *)(lVar11 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar11 + 0x10));
    uVar9 = FUN_14034bdd0();
    puVar10 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),uVar5);
    puVar24 = *(undefined8 **)(lVar11 + 0x10);
    *puVar24 = *puVar10;
    uVar2 = *(undefined4 *)(puVar10 + 1);
    *(undefined4 *)(puVar24 + 1) = uVar2;
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    FUN_1400f0870(lVar11,uVar2,L"strName",uVar9);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
    FUN_1400fb2a0(param_2,L"tProfRequirement",uVar5);
    FUN_1400579e0(lVar11);
    LAB_140671205:
    plVar18 = plVar26;
    if (*(int *)(param_1 + 0xa8) != 0) {
        plVar18 = (longlong *)param_1[0x15];
    }
    if (*(int *)(plVar18 + 0x28) == 0x21) {
        plVar18 = plVar26;
        if (*(int *)(param_1 + 0xa8) != 0) {
            plVar18 = (longlong *)param_1[0x15];
        }
        if (*(int *)(plVar18 + 0x30) != 0) {
            lVar19 = *param_1;
            uVar7 = 1;
            local_160 = 1;
            local_178 = &PTR_FUN_140b569f0;
            local_168 = lVar19;
            if (*(ulonglong *)(*(longlong *)(lVar19 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar19 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar19);
            }
            puVar24 = *(undefined8 **)(lVar19 + 0x10);
            uVar9 = FUN_14005c1b0(lVar19,0,0);
            *(undefined4 *)(puVar24 + 1) = 5;
            *puVar24 = uVar9;
            *(longlong *)(lVar19 + 0x10) = *(longlong *)(lVar19 + 0x10) + 0x10;
            local_170 = FUN_1400578c0(lVar19);
            plVar18 = plVar26;
            if (*(int *)(param_1 + 0xa8) != 0) {
                plVar18 = (longlong *)param_1[0x15];
            }
            uVar22 = *(uint *)(plVar18 + 0x30);
            plVar18 = plVar26;
            do {
                if ((uVar22 & uVar7) != 0) {
                    lVar19 = *param_1;
                    FUN_140058900(lVar19);
                    uVar5 = FUN_1400578c0(lVar19);
                    puVar10 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar19 + 0x20) + 0xa0),uVar5);
                    puVar24 = *(undefined8 **)(lVar19 + 0x10);
                    *puVar24 = *puVar10;
                    *(undefined4 *)(puVar24 + 1) = *(undefined4 *)(puVar10 + 1);
                    *(longlong *)(lVar19 + 0x10) = *(longlong *)(lVar19 + 0x10) + 0x10;
                    FUN_1400f06f0(lVar19,puVar24,L"eEquippedId",plVar18);
                    *(longlong *)(lVar19 + 0x10) = *(longlong *)(lVar19 + 0x10) + -0x10;
                    FUN_14034bdd0();
                    puVar10 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar19 + 0x20) + 0xa0),uVar5);
                    puVar24 = *(undefined8 **)(lVar19 + 0x10);
                    *puVar24 = *puVar10;
                    *(undefined4 *)(puVar24 + 1) = *(undefined4 *)(puVar10 + 1);
                    *(longlong *)(lVar19 + 0x10) = *(longlong *)(lVar19 + 0x10) + 0x10;
                    FUN_1400f0870(lVar19);
                    *(longlong *)(lVar19 + 0x10) = *(longlong *)(lVar19 + 0x10) + -0x10;
                    FUN_1400fb1d0(&local_178);
                    FUN_1400579e0(lVar19);
                }
                uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
                uVar21 = (int)plVar18 + 1;
                plVar18 = (longlong *)(ulonglong)uVar21;
            } while (uVar21 < 0x1f);
            FUN_1400fb2a0(param_2,L"arAllowedSlots",local_170);
            if (local_168 != 0) {
                FUN_1400579e0();
            }
        }
    }
    lVar19 = FUN_1405a8a40();
    if (lVar19 != 0) {
        lVar11 = *(longlong *)(param_2 + 0x10);
        uVar23 = (ulonglong)*(uint *)(*(longlong *)(lVar19 + 8) + 0x18);
        puVar10 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar24 = *(undefined8 **)(lVar11 + 0x10);
        *puVar24 = *puVar10;
        *(undefined4 *)(puVar24 + 1) = *(undefined4 *)(puVar10 + 1);
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
        FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar24,L"nQuestMinLevel",uVar23 & 0xffffffff);
        plVar18 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar18 = *plVar18 + -0x10;
    }
    lVar19 = *param_1;
    local_178 = &PTR_FUN_140b569f0;
    local_160 = 1;
    local_168 = lVar19;
    FUN_140058900(lVar19);
    local_170 = FUN_1400578c0(lVar19);
    if ((*(int *)((longlong)param_1 + 0x53c) != 0) && (param_1 != (longlong *)0xfffffffffffffe08)) {
        plVar18 = param_1 + 0x3f;
        if (*(int *)((longlong)param_1 + 0x53c) == 0) {
            plVar18 = plVar26;
        }
        if (*(int *)(plVar18 + 0x10) != 0) {
            plVar18 = param_1 + 0x3f;
            if (*(int *)((longlong)param_1 + 0x53c) == 0) {
                plVar18 = plVar26;
            }
            lVar11 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(plVar18 + 0x10),
                                   *(undefined8 *)(DAT_140c65898 + 0x78));
            if ((((lVar11 != 0) && (*(int *)(lVar11 + 0x28) != 0)) &&
                 (*(int *)(*(longlong *)(lVar11 + 0x30) + 0x10) == 0x26)) &&
                (lVar11 = FUN_140245c00(*(undefined4 *)(*(longlong *)(lVar11 + 0x30) + 0x40)), lVar11 != 0)
                    ) {
                lVar14 = FUN_1405be150();
                lVar17 = FUN_140482310(DAT_140c65898 + 0x1698);
                if ((lVar14 != 0) && (lVar17 != 0)) {
                    FUN_1400fa0f0(&local_158,*param_1,1);
                    uVar9 = FUN_14034bdd0();
                    lVar19 = local_148;
                    uVar5 = local_150;
                    puVar10 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_148 + 0x20) + 0xa0),local_150)
                            ;
                    puVar24 = *(undefined8 **)(lVar19 + 0x10);
                    *puVar24 = *puVar10;
                    *(undefined4 *)(puVar24 + 1) = *(undefined4 *)(puVar10 + 1);
                    *(longlong *)(lVar19 + 0x10) = *(longlong *)(lVar19 + 0x10) + 0x10;
                    FUN_1400f0870(lVar19,puVar24,L"strName",uVar9);
                    *(longlong *)(lVar19 + 0x10) = *(longlong *)(lVar19 + 0x10) + -0x10;
                    puVar24 = *(undefined8 **)(lVar19 + 0x10);
                    puVar10 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar19 + 0x20) + 0xa0),uVar5);
                    *puVar24 = *puVar10;
                    *(undefined4 *)(puVar24 + 1) = *(undefined4 *)(puVar10 + 1);
                    *(longlong *)(lVar19 + 0x10) = *(longlong *)(lVar19 + 0x10) + 0x10;
                    FUN_1400f06f0(lVar19);
                    *(longlong *)(lVar19 + 0x10) = *(longlong *)(lVar19 + 0x10) + -0x10;
                    puVar24 = *(undefined8 **)(lVar19 + 0x10);
                    puVar10 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar19 + 0x20) + 0xa0),uVar5);
                    *puVar24 = *puVar10;
                    *(undefined4 *)(puVar24 + 1) = *(undefined4 *)(puVar10 + 1);
                    *(longlong *)(lVar19 + 0x10) = *(longlong *)(lVar19 + 0x10) + 0x10;
                    FUN_1400f0630(lVar19);
                    *(longlong *)(lVar19 + 0x10) = *(longlong *)(lVar19 + 0x10) + -0x10;
                    iVar6 = FUN_14001e8f0(lVar17 + 0x40,lVar11);
                    puVar10 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar19 + 0x20) + 0xa0),uVar5);
                    puVar24 = *(undefined8 **)(lVar19 + 0x10);
                    *puVar24 = *puVar10;
                    *(undefined4 *)(puVar24 + 1) = *(undefined4 *)(puVar10 + 1);
                    *(longlong *)(lVar19 + 0x10) = *(longlong *)(lVar19 + 0x10) + 0x10;
                    FUN_1400f0630(lVar19,puVar24,L"bIsKnown",iVar6 != 0);
                    *(longlong *)(lVar19 + 0x10) = *(longlong *)(lVar19 + 0x10) + -0x10;
                    FUN_1400fb1d0(&local_178,uVar5);
                    FUN_1400fb2a0(param_2,L"arTradeskillReqs",local_170);
                    FUN_1400579e0(lVar19);
                    lVar19 = local_168;
                }
            }
        }
    }
    if (lVar19 != 0) {
        FUN_1400579e0(lVar19);
    }
    return;
}



void FUN_140671730(longlong param_1,longlong param_2)

{
    longlong *plVar1;
    uint uVar2;
    undefined8 *puVar3;
    uint *puVar4;
    double *pdVar5;
    int iVar6;
    undefined8 *puVar7;
    longlong lVar8;
    undefined8 uVar9;
    longlong lVar10;
    longlong lVar11;
    longlong lVar12;
    uint uVar13;
    longlong lVar14;
    float fVar15;
    undefined local_48 [8];
    longlong local_40;

    lVar10 = 0;
    lVar12 = -1;
    uVar13 = 0;
    if ((*(int *)(param_1 + 0x540) != 0) && (*(longlong *)(param_1 + 0xa8) != 0)) {
        lVar11 = *(longlong *)(param_2 + 0x10);
        uVar2 = *(uint *)(*(longlong *)(param_1 + 0xa8) + 0x14c);
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar3 = *(undefined8 **)(lVar11 + 0x10);
        *puVar3 = *puVar7;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
        lVar11 = *(longlong *)(param_2 + 0x10);
        lVar8 = FUN_14018f0e0(local_48,L"bDestroyOnLogout");
        if (*(longlong *)(lVar8 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar11 + 0x10) + 8) = 0;
            *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
        }
        else {
            lVar14 = -1;
            do {
                lVar14 = lVar14 + 1;
            } while (*(char *)(*(longlong *)(lVar8 + 8) + lVar14) != '\0');
            FUN_140058710(lVar11);
        }
        if (local_40 != 0) {
            FUN_14018b900(local_40,0);
        }
        puVar4 = *(uint **)(lVar11 + 0x10);
        puVar4[2] = 1;
        *puVar4 = (uint)((uVar2 & 0x40) != 0);
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
        uVar9 = FUN_1400580e0(lVar11,0xfffffffd);
        FUN_14005ea50(lVar11,uVar9,*(longlong *)(lVar11 + 0x10) + -0x20,
                      *(longlong *)(lVar11 + 0x10) + -0x10);
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x20;
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
        lVar11 = lVar10;
        if (*(int *)(param_1 + 0x540) != 0) {
            lVar11 = *(longlong *)(param_1 + 0xa8);
        }
        uVar2 = *(uint *)(lVar11 + 0x14c);
        lVar11 = *(longlong *)(param_2 + 0x10);
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar3 = *(undefined8 **)(lVar11 + 0x10);
        *puVar3 = *puVar7;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
        lVar11 = *(longlong *)(param_2 + 0x10);
        lVar8 = FUN_14018f0e0(local_48,L"bDestroyOnZone");
        if (*(longlong *)(lVar8 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar11 + 0x10) + 8) = 0;
            *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
        }
        else {
            lVar14 = -1;
            do {
                lVar14 = lVar14 + 1;
            } while (*(char *)(*(longlong *)(lVar8 + 8) + lVar14) != '\0');
            FUN_140058710(lVar11);
        }
        if (local_40 != 0) {
            FUN_14018b900(local_40,0);
        }
        puVar4 = *(uint **)(lVar11 + 0x10);
        puVar4[2] = 1;
        *puVar4 = (uint)((uVar2 & 0x80) != 0);
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
        uVar9 = FUN_1400580e0(lVar11,0xfffffffd);
        FUN_14005ea50(lVar11,uVar9,*(longlong *)(lVar11 + 0x10) + -0x20,
                      *(longlong *)(lVar11 + 0x10) + -0x10);
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x20;
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
        if (*(int *)(param_1 + 0x540) != 0) {
            lVar10 = *(longlong *)(param_1 + 0xa8);
        }
        lVar11 = *(longlong *)(param_2 + 0x10);
        fVar15 = (float)(ulonglong)*(uint *)(lVar10 + 0x1a8) * 60.0;
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar3 = *(undefined8 **)(lVar11 + 0x10);
        *puVar3 = *puVar7;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
        lVar10 = *(longlong *)(param_2 + 0x10);
        lVar11 = FUN_14018f0e0(local_48,L"nExpirationTimeSeconds");
        if (*(longlong *)(lVar11 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + 8) = 0;
            *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
        }
        else {
            lVar8 = -1;
            do {
                lVar8 = lVar8 + 1;
            } while (*(char *)(*(longlong *)(lVar11 + 8) + lVar8) != '\0');
            FUN_140058710(lVar10);
        }
        if (local_40 != 0) {
            FUN_14018b900(local_40,0);
        }
        pdVar5 = *(double **)(lVar10 + 0x10);
        *(undefined4 *)(pdVar5 + 1) = 3;
        *pdVar5 = (double)fVar15;
        *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
        uVar9 = FUN_1400580e0(lVar10,0xfffffffd);
        FUN_14005ea50(lVar10,uVar9,*(longlong *)(lVar10 + 0x10) + -0x20,
                      *(longlong *)(lVar10 + 0x10) + -0x10);
        *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + -0x20;
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
    }
    lVar10 = *(longlong *)(param_1 + 0xa0);
    if (lVar10 != 0) {
        iVar6 = FUN_14018cdf0();
        if (0 < *(int *)(lVar10 + 0x120) - iVar6) {
            iVar6 = FUN_14018cdf0();
            uVar13 = *(int *)(lVar10 + 0x120) - iVar6;
        }
        lVar10 = *(longlong *)(param_2 + 0x10);
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar3 = *(undefined8 **)(lVar10 + 0x10);
        *puVar3 = *puVar7;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
        lVar10 = *(longlong *)(param_2 + 0x10);
        lVar11 = FUN_14018f0e0(local_48,L"nExpiresInTimeSeconds");
        lVar11 = *(longlong *)(lVar11 + 8);
        if (lVar11 == 0) {
            *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + 8) = 0;
            *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
        }
        else {
            do {
                lVar12 = lVar12 + 1;
            } while (*(char *)(lVar11 + lVar12) != '\0');
            FUN_140058710(lVar10,lVar11,lVar12);
        }
        if (local_40 != 0) {
            FUN_14018b900(local_40,0);
        }
        pdVar5 = *(double **)(lVar10 + 0x10);
        *(undefined4 *)(pdVar5 + 1) = 3;
        *pdVar5 = (double)((float)(ulonglong)uVar13 * 0.001);
        *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
        uVar9 = FUN_1400580e0(lVar10,0xfffffffd);
        FUN_14005ea50(lVar10,uVar9,*(longlong *)(lVar10 + 0x10) + -0x20,
                      *(longlong *)(lVar10 + 0x10) + -0x10);
        *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + -0x20;
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
    }
    return;
}
