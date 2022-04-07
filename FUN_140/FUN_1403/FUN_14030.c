//
// Created by flop on 05.04.22.
//



undefined8 FUN_140300c70(longlong *param_1, undefined4 param_2) {
    longlong *plVar1;
    ushort uVar2;
    uint uVar3;
    longlong lVar4;
    int iVar5;
    uint uVar6;
    undefined8 *puVar7;
    uint uVar8;
    undefined4 local_18[4];
    ulonglong uVar9;

    uVar9 = 0;
    uVar8 = 0;
    local_18[0] = 0;
    iVar5 = (**(code * *)(*param_1 + 0x10))(param_1, local_18, 0);
    if (iVar5 == 0) {
        puVar7 = (undefined8 *) FUN_14018b280(0x28, 0);
        if (puVar7 != (undefined8 *) 0x0) {
            *puVar7 = &PTR_FUN_140b64078;
            puVar7[2] = 0;
            puVar7[3] = 0;
            puVar7[1] = param_1;
            param_1 = param_1 + 9;
            if (puVar7[2] == 0) {
                puVar7[2] = param_1;
                plVar1 = puVar7 + 3;
                *plVar1 = *param_1;
                *param_1 = (longlong) puVar7;
                if (*plVar1 != 0) {
                    *(longlong * *)(*plVar1 + 0x10) = plVar1;
                }
            }
            *(undefined4 * )(puVar7 + 4) = param_2;
            *puVar7 = &PTR_FUN_140b63fe8;
        }
        return 0;
    }
    lVar4 = param_1[8];
    uVar3 = *(uint * )(lVar4 + 0x4a0);
    if (uVar3 != 0) {
        uVar6 = FUN_14030e3b0();
        uVar2 = *(ushort * )((ulonglong) uVar6 * 0x70 + *(longlong * )(lVar4 + 0x18));
        if (uVar3 != 0) {
            do {
                uVar8 = (uint) uVar9;
                if (uVar2 <= *(ushort * )(*(longlong * )(lVar4 + 0x4a8) + uVar9 * 4)) break;
                uVar8 = uVar8 + 1;
                uVar9 = (ulonglong) uVar8;
            } while (uVar8 < uVar3);
        }
        if ((uVar8 < uVar3) &&
            (*(ushort * )(*(longlong * )(lVar4 + 0x4a8) + (ulonglong) uVar8 * 4) == uVar2)) {
            uVar8 = (uint) * (ushort * )(*(longlong * )(lVar4 + 0x4a8) + (ulonglong) uVar8 * 4 + 2);
            if (uVar8 != *(uint * )(param_1 + 0x27)) {
                *(uint * )(param_1 + 0x27) = uVar8;
                return 1;
            }
        } else if (*(int *) (param_1 + 0x27) != 0) {
            *(undefined4 * )(param_1 + 0x27) = 0;
            return 1;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_140300dd0(longlong param_1, uint param_2) {
    longlong lVar1;
    uint uVar2;
    ulonglong uVar3;

    if ((DAT_140dc0ce0 & 1) == 0) {
        DAT_140dc0ce0 = DAT_140dc0ce0 | 1;
        _DAT_140dc0d20 = 0;
        _DAT_140dc0d24 = 1;
        _DAT_140dc0d2c = 0;
        _DAT_140dc0d40 = 0;
        _DAT_140dc0d30 = ZEXT816(0);
        _DAT_140dc0cf0 = CONCAT412(0x3f800000, ZEXT812(0x3f8000003f800000));
        _DAT_140dc0d00 = CONCAT412(0x3f800000, ZEXT812(0));
        _DAT_140dc0d10 = 0x3f800000;
        uRam0000000140dc0d14 = 0;
        uRam0000000140dc0d18 = 0x3f800000;
        uRam0000000140dc0d1c = 0x3f800000;
    }
    if ((param_2 & 0xfffeffff) != 0) {
        param_2 = param_2 | 1;
    }
    if ((param_2 & 2) != 0) {
        param_2 = param_2 | 0x10000;
    }
    if ((param_2 & 0x6800) != 0) {
        param_2 = param_2 | 8;
    }
    lVar1 = *(longlong * )(param_1 + 0x10);
    if ((*(int *) (param_1 + 0x574) == *(int *) (lVar1 + 0xdc)) &&
        ((param_2 & ~*(uint * )(param_1 + 0x580)) == 0)) {
        return 0;
    }
    if ((param_2 & 0x602) == 0) {
        if (*(longlong * )(param_1 + 0x4c0) == 0) {
            if ((*(byte * )(param_1 + 0x30) & 1) == 0) {
                return 0x8000000a;
            }
            uVar3 = FUN_140300fd0(param_1, lVar1 + 0xf0, &DAT_140dc0cf0, param_2);
            if ((int) uVar3 < 0) {
                return uVar3;
            }
        } else {
            if (((param_2 & 8) != 0) &&
                (uVar3 = FUN_140300dd0(*(longlong * )(param_1 + 0x4c0), 8), (int) uVar3 < 0)) {
                return uVar3;
            }
            uVar3 = FUN_140305b60(*(undefined8 * )(param_1 + 0x4c0), param_1, param_2);
            if ((int) uVar3 < 0) {
                return uVar3;
            }
        }
    } else {
        if ((*(byte * )(*(longlong * )(param_1 + 0x4c8) + 0x30) & 1) == 0) {
            return 0x8000000a;
        }
        uVar2 = FUN_140300fd0(*(longlong * )(param_1 + 0x4c8), lVar1 + 0xf0, &DAT_140dc0cf0, param_2);
        if (((int) uVar2 < 0) ||
            (uVar2 = FUN_140305c20(*(undefined8 * )(param_1 + 0x4c8), param_2), (int) uVar2 < 0)) {
            return (ulonglong) uVar2;
        }
    }
    return (ulonglong)
            (-(uint)((~*(uint * )(param_1 + 0x580) & param_2 & 0xfffeffff) != 0) & 0x8000000a);
}


/*
Unable to decompile 'FUN_140300fd0'
Cause: Exception while decompiling 140300fd0: process: timeout

*/


undefined8 FUN_140305b60(longlong param_1, longlong param_2, undefined4 param_3) {
    undefined8 uVar1;
    ulonglong uVar2;

    if ((*(byte * )(param_1 + 0x30) & 1) == 0) {
        return 0x8000000a;
    }
    if (*(int *) (param_2 + 0x4b0) == 0) {
        if ((*(byte * )(param_2 + 0x30) & 1) == 0) {
            return 0x8000000a;
        }
        uVar1 = FUN_140300fd0(param_2, param_1 + 0x4f0, param_1 + 400, param_3);
        if ((int) uVar1 < 0) {
            return uVar1;
        }
    } else if (*(longlong * )(param_2 + 0x4b8) != 0) {
        uVar2 = (ulonglong) * (ushort * )(*(longlong * )(param_2 + 0x4b8) + 2);
        if ((*(byte * )(param_2 + 0x30) & 1) == 0) {
            return 0x8000000a;
        }
        uVar1 = FUN_140300fd0(param_2, uVar2 * 0x40 + *(longlong * )(param_1 + 0x338),
                              (ulonglong)
                              * (ushort * )
                                      (*(longlong * )(*(longlong * )(param_1 + 0x40) + 0x188) + 6 + uVar2 * 0x160
                                      ) * 0x60 + *(longlong * )(param_1 + 0x1f0), param_3);
        if ((int) uVar1 < 0) {
            return uVar1;
        }
    }
    return 0;
}


undefined8 FUN_140305c20(longlong param_1, uint param_2) {
    float fVar1;
    longlong lVar2;
    float *pfVar3;
    undefined(*pauVar4)[16];
    undefined8 uVar5;
    undefined(*pauVar6)[16];
    uint uVar7;
    float *pfVar8;
    ulonglong uVar9;
    uint uVar10;
    undefined(*pauVar11)[16];
    float fVar12;
    undefined4 uVar13;
    float fVar14;
    float fVar15;
    byte local_res8;
    byte local_res9;

    if ((*(byte * )(param_1 + 0x30) & 1) == 0) {
        return 0x8000000a;
    }
    param_2 = param_2 & 0x10002;
    uVar10 = ~*(uint * )(param_1 + 0x580) & param_2;
    if (uVar10 != 0) {
        if ((char) uVar10 != '\0') {
            lVar2 = *(longlong * )(param_1 + 0x4c0);
            fVar15 = 1.0;
            if ((lVar2 != 0) && ((*(byte * )(param_1 + 0x28) & 1) == 0)) {
                *(undefined(*)[16])(param_1 + 0x200) =
                        CONCAT412(*(float *) (lVar2 + 0x20c) * *(float *) (param_1 + 0x20c),
                                  CONCAT48(*(float *) (lVar2 + 0x208) * *(float *) (param_1 + 0x208),
                                           CONCAT44(*(float *) (lVar2 + 0x204) * *(float *) (param_1 + 0x204),
                                                    *(float *) (lVar2 + 0x200) * *(float *) (param_1 + 0x200))));
                *(undefined(*)[16])(param_1 + 0x210) =
                        CONCAT412(*(float *) (lVar2 + 0x21c) + *(float *) (param_1 + 0x21c),
                                  CONCAT48(*(float *) (lVar2 + 0x218) + *(float *) (param_1 + 0x218),
                                           CONCAT44(*(float *) (lVar2 + 0x214) + *(float *) (param_1 + 0x214),
                                                    *(float *) (lVar2 + 0x210) + *(float *) (param_1 + 0x210))));
                *(float *) (param_1 + 0x220) = *(float *) (lVar2 + 0x220) * *(float *) (param_1 + 0x220);
                fVar12 = 1.0 - *(float *) (param_1 + 0x23c);
                *(float *) (param_1 + 0x224) =
                        (*(float *) (param_1 + 0x224) + *(float *) (lVar2 + 0x224)) -
                        *(float *) (param_1 + 0x224) * *(float *) (lVar2 + 0x224);
                *(undefined(*)[16])(param_1 + 0x230) =
                        CONCAT412(*(float *) (param_1 + 0x23c) + fVar12 * *(float *) (lVar2 + 0x23c),
                                  CONCAT48(*(float *) (param_1 + 0x238) + fVar12 * *(float *) (lVar2 + 0x238),
                                           CONCAT44(*(float *) (param_1 + 0x234) +
                                                    fVar12 * *(float *) (lVar2 + 0x234),
                                                    *(float *) (param_1 + 0x230) +
                                                    fVar12 * *(float *) (lVar2 + 0x230))));
                pfVar8 = (float *) (*(longlong * )(param_1 + 0x4c0) + 0x240);
                pfVar3 = (float *) (param_1 + 0x240);
                if (*(float *) (param_1 + 0x240) < *pfVar8) {
                    pfVar3 = pfVar8;
                }
                *(float *) (param_1 + 0x240) = *pfVar3;
            }
            pauVar11 = (undefined(*)[16])(param_1 + 0x240);
            *(undefined(*)[16])(param_1 + 400) =
                    CONCAT412(*(float *) (param_1 + 0x19c) * *(float *) (param_1 + 0x20c),
                              CONCAT48(*(float *) (param_1 + 0x198) * *(float *) (param_1 + 0x208),
                                       CONCAT44(*(float *) (param_1 + 0x194) * *(float *) (param_1 + 0x204),
                                                *(float *) (param_1 + 400) * *(float *) (param_1 + 0x200))));
            *(undefined(*)[16])(param_1 + 0x1a0) =
                    CONCAT412(*(float *) (param_1 + 0x1ac) + *(float *) (param_1 + 0x21c),
                              CONCAT48(*(float *) (param_1 + 0x1a8) + *(float *) (param_1 + 0x218),
                                       CONCAT44(*(float *) (param_1 + 0x1a4) + *(float *) (param_1 + 0x214),
                                                *(float *) (param_1 + 0x1a0) + *(float *) (param_1 + 0x210))));
            *(float *) (param_1 + 0x1b0) = *(float *) (param_1 + 0x1b0) * *(float *) (param_1 + 0x220);
            fVar12 = 1.0 - *(float *) (param_1 + 0x1dc);
            *(float *) (param_1 + 0x1b4) =
                    (*(float *) (param_1 + 0x1b4) + *(float *) (param_1 + 0x224)) -
                    *(float *) (param_1 + 0x1b4) * *(float *) (param_1 + 0x224);
            *(undefined(*)[16])(param_1 + 0x1d0) =
                    CONCAT412(*(float *) (param_1 + 0x1dc) + fVar12 * *(float *) (param_1 + 0x23c),
                              CONCAT48(*(float *) (param_1 + 0x1d8) + fVar12 * *(float *) (param_1 + 0x238),
                                       CONCAT44(*(float *) (param_1 + 0x1d4) +
                                                fVar12 * *(float *) (param_1 + 0x234),
                                                *(float *) (param_1 + 0x1d0) +
                                                fVar12 * *(float *) (param_1 + 0x230))));
            pauVar4 = (undefined(*)[16])(param_1 + 0x1e0);
            if (*(float *) (param_1 + 0x1e0) < *(float *) *pauVar11) {
                pauVar4 = pauVar11;
            }
            *(undefined4 * )(param_1 + 0x1e0) = *(undefined4 * ) * pauVar4;
            if (*(longlong * )(param_1 + 0x4c0) == 0) {
                uVar13 = *(undefined4 * )(param_1 + 0x690);
            } else {
                uVar13 = *(undefined4 * )(*(longlong * )(param_1 + 0x4c0) + 0x694);
            }
            *(undefined4 * )(param_1 + 0x694) = uVar13;
            FUN_1401c96d0(&local_res8);
            uVar9 = 0;
            if (*(int *) (*(longlong * )(param_1 + 0x40) + 0xf0) != 0) {
                do {
                    pauVar6 = (undefined(*)[16])(uVar9 * 0x60 + *(longlong * )(param_1 + 0x1f0));
                    *pauVar6 = CONCAT412(*(float *) (param_1 + 0x20c) * *(float *) (*pauVar6 + 0xc),
                                         CONCAT48(*(float *) (param_1 + 0x208) * *(float *) (*pauVar6 + 8),
                                                  CONCAT44(*(float *) (param_1 + 0x204) *
                                                           *(float *) (*pauVar6 + 4),
                                                           *(float *) (param_1 + 0x200) * *(float *) *pauVar6)));
                    pauVar6[1] = CONCAT412(*(float *) (pauVar6[1] + 0xc) + *(float *) (param_1 + 0x21c),
                                           CONCAT48(*(float *) (pauVar6[1] + 8) + *(float *) (param_1 + 0x218),
                                                    CONCAT44(*(float *) (pauVar6[1] + 4) +
                                                             *(float *) (param_1 + 0x214),
                                                             *(float *) pauVar6[1] +
                                                             *(float *) (param_1 + 0x210))));
                    *(float *) pauVar6[2] = *(float *) pauVar6[2] * *(float *) (param_1 + 0x220);
                    fVar12 = *(float *) (param_1 + 0x224);
                    fVar1 = *(float *) (pauVar6[2] + 4);
                    *(float *) (pauVar6[3] + 8) = (float) (uint) local_res8 * 0.00390625 + 0.001953125;
                    *(float *) (pauVar6[3] + 0xc) = (float) (uint) local_res9 * 0.00390625 + 0.001953125;
                    fVar14 = fVar15 - *(float *) (pauVar6[4] + 0xc);
                    *(float *) (pauVar6[2] + 4) = (fVar1 + fVar12) - fVar1 * fVar12;
                    pauVar6[4] = CONCAT412(*(float *) (pauVar6[4] + 0xc) + fVar14 * *(float *) (param_1 + 0x23c),
                                           CONCAT48(*(float *) (pauVar6[4] + 8) +
                                                    fVar14 * *(float *) (param_1 + 0x238),
                                                    CONCAT44(*(float *) (pauVar6[4] + 4) +
                                                             fVar14 * *(float *) (param_1 + 0x234),
                                                             *(float *) pauVar6[4] +
                                                             fVar14 * *(float *) (param_1 + 0x230))));
                    pauVar4 = pauVar6[5];
                    if (*(float *) pauVar6[5] < *(float *) *pauVar11) {
                        pauVar4 = pauVar11;
                    }
                    uVar7 = (int) uVar9 + 1;
                    uVar9 = (ulonglong) uVar7;
                    *(undefined4 *) pauVar6[5] = *(undefined4 * ) * pauVar4;
                } while (uVar7 < *(uint * )(*(longlong * )(param_1 + 0x40) + 0xf0));
            }
            *(uint * )(param_1 + 0x580) = *(uint * )(param_1 + 0x580) | 2;
        }
        if (((uVar10 >> 0x10 & 1) != 0) && ((param_2 & ~*(uint * )(param_1 + 0x584)) != 0)) {
            for (lVar2 = *(longlong * )(param_1 + 0x4d0); lVar2 != 0; lVar2 = *(longlong * )(lVar2 + 0x4e0)) {
                uVar5 = FUN_140305c20(lVar2, param_2);
                if ((int) uVar5 < 0) {
                    return uVar5;
                }
            }
            *(uint * )(param_1 + 0x584) = *(uint * )(param_1 + 0x584) | param_2;
        }
        return 0;
    }
    return 0;
}


undefined8 FUN_140305fc0(longlong param_1) {
    int iVar1;
    undefined4 uVar2;
    undefined4 *puVar3;
    undefined4 *puVar4;
    longlong **pplVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    int iVar8;
    ulonglong uVar9;
    int iVar10;

    iVar10 = *(int *) (*(longlong * )(param_1 + 0x10) + 0xd0) + 0x7fffffff;
    uVar9 = 0;
    iVar8 = iVar10;
    if (*(longlong * )(param_1 + 0x370) != 0) {
        do {
            puVar3 = *(undefined4 * *)(*(longlong * )(param_1 + 0x368) + uVar9 * 8);
            puVar4 = *(undefined4 * *)(puVar3 + 2);
            if (((puVar4 != (undefined4 *) 0x0) && (puVar4[0xb] == 0)) &&
                ((*(byte * )(puVar4 + 5) & 0x10) == 0)) {
                iVar1 = puVar4[0xd];
                if (*(int *) (*(longlong * )(param_1 + 0x10) + 0xd0) - iVar1 < 0) {
                    if (0 < iVar8 - iVar1) {
                        iVar8 = iVar1;
                    }
                } else {
                    puVar6 = (undefined8 *) FUN_14018b280(0x68);
                    if (puVar6 != (undefined8 *) 0x0) {
                        uVar2 = *puVar3;
                        FUN_1403272b0(puVar6, puVar4[0xd], param_1, 0);
                        *puVar6 = &PTR_FUN_140b644c8;
                        *(undefined4 * )(puVar6 + 0xc) = 0;
                        *(undefined4 * )(puVar6 + 8) = uVar2;
                        *(undefined4 * )((longlong) puVar6 + 0x44) = *puVar4;
                        *(undefined4 * )(puVar6 + 9) = puVar4[1];
                        *(undefined4 * )((longlong) puVar6 + 0x4c) = puVar4[2];
                        *(undefined4 * )(puVar6 + 10) = puVar4[3];
                        *(undefined4 * )((longlong) puVar6 + 0x54) = puVar4[4];
                        *(undefined4 * )(puVar6 + 0xb) = puVar4[5];
                        *(undefined4 * )((longlong) puVar6 + 0x5c) = puVar4[6];
                        uVar2 = puVar4[7];
                        *(undefined4 * )((longlong) puVar6 + 100) = 0;
                        *(undefined4 * )(puVar6 + 0xc) = uVar2;
                    }
                    FUN_1403129a0();
                    puVar4[0xb] = 1;
                    pplVar5 = *(longlong * **)(puVar3 + 6);
                    while (pplVar5 != (longlong **) 0x0) {
                        if ((longlong **) pplVar5[1] != (longlong **) 0x0) {
                            *pplVar5[1] = (longlong) pplVar5[2];
                        }
                        if (pplVar5[2] != (longlong *) 0x0) {
                            pplVar5[2][1] = (longlong) pplVar5[1];
                        }
                        pplVar5[1] = (longlong *) 0x0;
                        pplVar5[2] = (longlong *) 0x0;
                        if (*pplVar5 != (longlong *) 0x0) {
                            (**(code * *)(**pplVar5 + 8))();
                        }
                        FUN_14018b900();
                        pplVar5 = *(longlong * **)(puVar3 + 6);
                    }
                }
            }
            puVar4 = *(undefined4 * *)(puVar3 + 4);
            if (((puVar4 != (undefined4 *) 0x0) && (puVar4[0xc] == 0)) &&
                ((*(byte * )(puVar4 + 5) & 0x10) == 0)) {
                iVar1 = puVar4[0xe];
                if (*(int *) (*(longlong * )(param_1 + 0x10) + 0xd0) - iVar1 < 0) {
                    if (0 < iVar8 - iVar1) {
                        iVar8 = iVar1;
                    }
                } else {
                    puVar6 = (undefined8 *) FUN_14018b280(0x68);
                    if (puVar6 != (undefined8 *) 0x0) {
                        uVar2 = *puVar3;
                        FUN_1403272b0(puVar6, puVar4[0xe], param_1, 0);
                        *puVar6 = &PTR_FUN_140b644b8;
                        *(undefined4 * )(puVar6 + 8) = uVar2;
                        *(undefined4 * )((longlong) puVar6 + 0x44) = *puVar4;
                        *(undefined4 * )(puVar6 + 9) = puVar4[1];
                        *(undefined4 * )((longlong) puVar6 + 0x4c) = puVar4[2];
                        *(undefined4 * )(puVar6 + 10) = puVar4[3];
                        *(undefined4 * )((longlong) puVar6 + 0x54) = puVar4[4];
                        *(undefined4 * )(puVar6 + 0xb) = puVar4[5];
                        uVar2 = puVar4[6];
                        *(undefined4 * )(puVar6 + 0xc) = 0;
                        *(undefined4 * )((longlong) puVar6 + 0x5c) = uVar2;
                    }
                    FUN_1403129a0();
                    puVar4[0xc] = 1;
                }
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 < *(ulonglong * )(param_1 + 0x370));
    }
    puVar6 = (undefined8 *) 0x0;
    if ((*(int *) (param_1 + 0x5a0) == 0) && (*(int *) (param_1 + 0x3f0) == 0)) {
        iVar1 = *(int *) (param_1 + 0x3f4);
        if (*(int *) (*(longlong * )(param_1 + 0x10) + 0xd0) - iVar1 < 0) {
            if (iVar8 != iVar1 && -1 < iVar8 - iVar1) {
                iVar8 = iVar1;
            }
        } else {
            puVar7 = (undefined8 *) FUN_14018b280(0x40);
            if (puVar7 != (undefined8 *) 0x0) {
                FUN_1403272b0(puVar7, *(undefined4 * )(param_1 + 0x3f4), param_1, 1);
                *puVar7 = &PTR_FUN_140b644d8;
                puVar6 = puVar7;
            }
            FUN_1403129a0(*(undefined8 * )(param_1 + 0x10), puVar6);
            *(undefined4 * )(param_1 + 0x3f0) = 1;
        }
    }
    if (iVar8 - iVar10 < 0) {
        *(int *) (param_1 + 0x178) = iVar8;
        FUN_140308800(*(longlong * )(param_1 + 0x10) + 0x208);
        return 0;
    }
    if (*(longlong * )(param_1 + 0x180) != 0) {
        FUN_1403088b0();
    }
    return 0;
}


void FUN_140306300(longlong param_1, int param_2) {
    ulonglong *puVar1;
    longlong lVar2;
    ulonglong uVar3;
    DWORD DVar4;
    HANDLE hObject;
    ulonglong uVar5;

    lVar2 = *(longlong * )(param_1 + 0x10);
    if (param_2 - *(int *) (lVar2 + 0xd0) < 0) {
        param_2 = *(int *) (lVar2 + 0xd0);
    }
    if ((*(longlong * )(param_1 + 0x180) == 0) || (param_2 - *(int *) (param_1 + 0x178) < 0)) {
        DVar4 = GetCurrentThreadId();
        uVar5 = 0;
        if (*(DWORD * )(lVar2 + 0x68) == DVar4) {
            *(longlong * )(lVar2 + 0x70) = *(longlong * )(lVar2 + 0x70) + 1;
        } else {
            do {
                LOCK();
                puVar1 = (ulonglong * )(lVar2 + 0x70);
                uVar3 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
                if (uVar3 == 0) {
                    *(DWORD * )(lVar2 + 0x68) = DVar4;
                    goto LAB_140306396;
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 < 0x400);
            FUN_14019fb60(lVar2 + 0x68);
        }
        LAB_140306396:
        *(int *) (param_1 + 0x178) = param_2;
        FUN_140308800(*(longlong * )(param_1 + 0x10) + 0x208, param_1 + 0x180);
        if (*(ulonglong * )(lVar2 + 0x70) < 2) {
            *(undefined4 * )(lVar2 + 0x68) = 0;
            *(undefined8 * )(lVar2 + 0x70) = 0;
            if (*(longlong * )(lVar2 + 0x78) != 0) {
                if (*(longlong * )(lVar2 + 0x80) == 0) {
                    hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                    LOCK();
                    puVar1 = (ulonglong * )(lVar2 + 0x80);
                    uVar5 = *puVar1;
                    *puVar1 = *puVar1 ^ (ulonglong)(uVar5 == 0) * (*puVar1 ^ (ulonglong) hObject);
                    if (uVar5 != 0) {
                        CloseHandle(hObject);
                    }
                }
                SetEvent(*(HANDLE * )(lVar2 + 0x80));
            }
        } else {
            *(longlong * )(lVar2 + 0x70) = *(longlong * )(lVar2 + 0x70) + -1;
        }
    }
    return;
}


undefined4 FUN_140306450(longlong *param_1) {
    undefined4 local_18[4];

    local_18[0] = 0xffffffff;
    (**(code * *)(*param_1 + 0x578))(param_1, local_18);
    return *(undefined4 * )(param_1[8] + 0x588);
}


undefined4 FUN_1403064d0(longlong *param_1, longlong param_2) {
    undefined4 local_18[4];

    local_18[0] = 0xffffffff;
    (**(code * *)(*param_1 + 0x10))(param_1, local_18, 0);
    FUN_140300dd0(param_1, 0x100);
    return *(undefined4 * )(param_1[0xd1] + param_2 * 0x14);
}


undefined4 FUN_140306520(longlong param_1) {
    FUN_140300dd0(param_1, 0x8000);
    return *(undefined4 * )(param_1 + 0x6b0);
}


void FUN_140306730(uint *param_1, float *param_2, longlong param_3, undefined8 param_4) {
    float *pfVar1;
    longlong lVar2;
    float *pfVar3;
    uint uVar4;
    float fVar6;
    float local_res8[2];
    ulonglong uVar5;

    if (1 < *param_1) {
        uVar4 = *(int *) (param_3 + 0x68) - 1;
        uVar5 = (ulonglong) uVar4;
        FUN_140308510(param_1, *(undefined4 * )(param_3 + 8 + uVar5 * 0x18), param_2, param_4,
                      param_2 + uVar5 + 1);
        if (uVar4 != 0) {
            fVar6 = 1.0;
            pfVar3 = (float *) (param_3 + uVar5 * 0x18 + 0xc);
            lVar2 = uVar5 * 4;
            do {
                pfVar1 = pfVar3 + -7;
                pfVar3 = pfVar3 + -6;
                FUN_140308510(param_1, *pfVar1, local_res8, param_4, (longlong) param_2 + lVar2);
                *param_2 = (*param_2 - local_res8[0]) * (fVar6 - *pfVar3) + local_res8[0];
                uVar4 = (int) uVar5 - 1;
                uVar5 = (ulonglong) uVar4;
                lVar2 = lVar2 + -4;
            } while (uVar4 != 0);
        }
        return;
    }
    if (*param_1 == 0) {
        *param_2 = 0.0;
        return;
    }
    *param_2 = (float) (uint) * *(byte * *)(param_1 + 4) * 0.003921569;
    return;
}


void FUN_140306840(longlong *param_1, ulonglong param_2) {
    longlong lVar1;
    longlong lVar2;

    if (param_2 <= (ulonglong) param_1[1] && param_1[1] != param_2) {
        param_1[1] = param_2;
    }
    lVar2 = FUN_14018dbc0(*param_1, param_2, 8);
    if (*param_1 != lVar2) {
        FUN_1407db590(lVar2, *param_1, param_1[1] << 3);
        lVar1 = *param_1;
        if (lVar1 != 0) {
            (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        }
        *param_1 = lVar2;
    }
    return;
}


void FUN_1403068b0(uint *param_1, undefined (*param_2)[16], longlong param_3, undefined8 param_4) {
    float *pfVar1;
    undefined4 uVar2;
    uint uVar3;
    float *pfVar4;
    uint uVar5;
    undefined *puVar7;
    undefined auVar8[15];
    undefined auVar9[16];
    int iVar12;
    undefined in_XMM1_Ba;
    undefined in_XMM1_Bb;
    undefined in_XMM1_Bc;
    undefined in_XMM1_Bd;
    undefined in_XMM1_Be;
    undefined in_XMM1_Bf;
    undefined in_XMM1_Bg;
    undefined in_XMM1_Bh;
    float fVar13;
    float fVar14;
    float local_38;
    float fStack52;
    float fStack48;
    float fStack44;
    ulonglong uVar6;
    undefined auVar10[16];
    undefined auVar11[16];

    if (1 < *param_1) {
        uVar5 = *(int *) (param_3 + 0x68) - 1;
        uVar6 = (ulonglong) uVar5;
        puVar7 = param_2[1] + uVar6 * 4;
        FUN_140308970(param_1, *(undefined4 * )(param_3 + 8 + uVar6 * 0x18), param_2, param_4, puVar7);
        if (uVar5 != 0) {
            fVar14 = 1.0;
            pfVar4 = (float *) (param_3 + uVar6 * 0x18 + 0xc);
            do {
                pfVar1 = pfVar4 + -7;
                pfVar4 = pfVar4 + -6;
                puVar7 = puVar7 + -4;
                FUN_140308970(param_1, *pfVar1, &local_38, param_4, puVar7);
                fVar13 = fVar14 - *pfVar4;
                *param_2 = CONCAT412(fVar13 * (*(float *) (*param_2 + 0xc) - fStack44) + fStack44,
                                     CONCAT48(fVar13 * (*(float *) (*param_2 + 8) - fStack48) + fStack48,
                                              CONCAT44(fVar13 * (*(float *) (*param_2 + 4) - fStack52) +
                                                       fStack52, fVar13 * (*(float *) *param_2 - local_38) +
                                                                 local_38)));
                uVar5 = (int) uVar6 - 1;
                uVar6 = (ulonglong) uVar5;
            } while (uVar5 != 0);
        }
        return;
    }
    if (*param_1 == 0) {
        *(undefined8 * ) * param_2 = 0;
        *(undefined8 * )(*param_2 + 8) = 0;
        return;
    }
    uVar5 = CONCAT13(in_XMM1_Bd, CONCAT12(in_XMM1_Bc, CONCAT11(in_XMM1_Bb, in_XMM1_Ba))) ^
            CONCAT13(in_XMM1_Bd, CONCAT12(in_XMM1_Bc, CONCAT11(in_XMM1_Bb, in_XMM1_Ba)));
    uVar3 = CONCAT13(in_XMM1_Bh, CONCAT12(in_XMM1_Bg, CONCAT11(in_XMM1_Bf, in_XMM1_Be))) ^
            CONCAT13(in_XMM1_Bh, CONCAT12(in_XMM1_Bg, CONCAT11(in_XMM1_Bf, in_XMM1_Be)));
    uVar2 = **(undefined4 * *)(param_1 + 4);
    auVar8 = SUB1615(CONCAT412(uVar2, CONCAT48(uVar2, CONCAT44(uVar2, uVar2))), 0) |
             SUB1615((undefined[16]) 0xff000000, 0) | SUB1615((undefined[16]) 0xff00000000000000, 0) |
             SUB1615((undefined[16]) 0xff000000, 0) | SUB1615((undefined[16]) 0xff00000000000000, 0);
    auVar11 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                                          SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                                           ((char) (uVar3 >> 0x18),
                                                                                                                                            CONCAT114(SUB151(auVar8 >> 0x38, 0),
                                                                                                                                                      SUB1514(auVar8, 0))) >> 0x70, 0),
                                                                                                                            CONCAT113((char) (uVar3 >> 0x10), SUB1513(auVar8, 0))
                                                                                                           ) >> 0x68, 0),
                                                                                                           CONCAT112(SUB151(auVar8 >> 0x30, 0),
                                                                                                                     SUB1512(auVar8, 0))) >> 0x60, 0),
                                                                                          CONCAT111((char) (uVar3 >> 8), SUB1511(auVar8, 0)))
                                                                                                 >> 0x58, 0),
                                                                                  CONCAT110(SUB151(auVar8 >> 0x28, 0),
                                                                                            SUB1510(auVar8, 0)))
                                                                                >> 0x50, 0),
                                                                 CONCAT19((char) uVar3, SUB159(auVar8, 0))) >> 0x48, 0),
                                                CONCAT18(SUB151(auVar8 >> 0x20, 0), SUB158(auVar8, 0)))
                                               >> 0x40, 0), (char) (uVar5 >> 0x18)),
                       (SUB157(auVar8, 0) >> 0x18) << 0x30);
    auVar10 = CONCAT115(CONCAT101(SUB1610(auVar11 >> 0x30, 0), (char) (uVar5 >> 0x10)),
                        (SUB155(auVar8, 0) >> 0x10) << 0x20);
    auVar9 = CONCAT142(SUB1614(CONCAT133(SUB1613(CONCAT124(SUB1612(auVar10 >> 0x20, 0),
                                                           (uVar5 >> 8) << 0x18) >> 0x18, 0),
                                         (SUB153(auVar8, 0) >> 8) << 0x10) >> 0x10, 0),
                       SUB152(auVar8, 0) & 0xff | (ushort)(byte)
    uVar5 << 8);
    iVar12 = SUB164(CONCAT214((short) (uVar3 >> 0x10),
                              CONCAT212(SUB162(auVar11 >> 0x30, 0), SUB1612(auVar9, 0))) >> 0x60, 0);
    auVar10 = CONCAT610(SUB166(CONCAT412(iVar12, CONCAT210((short) uVar3, SUB1610(auVar9, 0))) >> 0x50, 0),
                        CONCAT28(SUB162(auVar10 >> 0x20, 0), SUB168(auVar9, 0)));
    fVar14 = (float) SUB164(CONCAT106(CONCAT82(SUB168(auVar10 >> 0x40, 0), (short) (uVar5 >> 0x10)),
                                      (SUB166(auVar9, 0) >> 0x10) << 0x20) >> 0x20, 0) * 0.003921569;
    *param_2 = CONCAT412((float) iVar12 * 0.003921569,
                         CONCAT48((float) (SUB164(auVar9, 0) & 0xffff | uVar5 << 0x10) * 0.003921569,
                                  CONCAT17((char) ((uint) fVar14 >> 0x18),
                                           CONCAT16((char) ((uint) fVar14 >> 0x10),
                                                    CONCAT15((char) ((uint) fVar14 >> 8),
                                                             CONCAT14(SUB41(fVar14, 0),
                                                                      (float) SUB164(auVar10 >> 0x40, 0)
                                                                      * 0.003921569))))));
    return;
}


void FUN_1403069d0(uint *param_1, undefined *param_2, longlong param_3) {
    undefined *puVar1;
    uint *puVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    uint *puVar9;
    uint *puVar10;
    uint uVar11;
    undefined uVar12;
    uint local_res8[2];
    ulonglong uVar8;

    if (*param_1 < 2) {
        if (*param_1 != 0) {
            *param_2 = **(undefined * *)(param_1 + 4);
            return;
        }
        *param_2 = 0;
        return;
    }
    uVar7 = *(int *) (param_3 + 0x68) - 1;
    uVar8 = (ulonglong) uVar7;
    puVar10 = (uint * )(param_2 + uVar8 * 4 + 4);
    puVar1 = (undefined * )(param_3 + uVar8 * 0x18 + 8);
    FUN_140308d20();
    do {
        if (uVar7 == 0) {
            return;
        }
        uVar11 = *param_1;
        uVar3 = *(uint * )(&DAT_ffffffffffffffe8 + (longlong) puVar1);
        puVar10 = puVar10 + -1;
        puVar1 = &DAT_ffffffffffffffe8 + (longlong) puVar1;
        uVar7 = (int) uVar8 - 1;
        uVar8 = (ulonglong) uVar7;
        if (uVar11 == 0) {
            uVar12 = 0;
        } else if (uVar11 == 1) {
            uVar12 = **(undefined * *)(param_1 + 4);
        } else {
            if (puVar10 == (uint *) 0x0) {
                puVar9 = local_res8;
            } else {
                uVar6 = *puVar10;
                puVar9 = (uint * )(*(longlong * )(param_1 + 2) + (ulonglong) uVar6 * 4);
                if ((*puVar9 < uVar3 || *puVar9 == uVar3) &&
                    (uVar3 < *(uint * )(*(longlong * )(param_1 + 2) + (ulonglong)(uVar6 + 1) * 4))) {
                    uVar12 = *(undefined * )((ulonglong) uVar6 + *(longlong * )(param_1 + 4));
                    goto LAB_140306b3a;
                }
                uVar4 = uVar6 + 1;
                *puVar10 = uVar4;
                uVar11 = *param_1;
                puVar9 = puVar10;
                if (uVar4 < uVar11 - 1) {
                    puVar2 = (uint * )(*(longlong * )(param_1 + 2) + (ulonglong) uVar4 * 4);
                    if ((*puVar2 < uVar3 || *puVar2 == uVar3) &&
                        (uVar3 < *(uint * )(*(longlong * )(param_1 + 2) + (ulonglong)(uVar6 + 2) * 4))) {
                        uVar12 = *(undefined * )((ulonglong) uVar4 + *(longlong * )(param_1 + 4));
                        goto LAB_140306b3a;
                    }
                }
            }
            uVar6 = 0;
            if (uVar11 != 0) {
                uVar4 = uVar11;
                do {
                    uVar5 = (uVar4 - uVar6 >> 1) + uVar6;
                    if (*(uint * )(*(longlong * )(param_1 + 2) + (ulonglong) uVar5 * 4) <= uVar3) {
                        uVar6 = uVar5 + 1;
                        uVar5 = uVar4;
                    }
                    uVar4 = uVar5;
                } while (uVar6 < uVar4);
            }
            if (uVar6 == 0) {
                uVar12 = **(undefined * *)(param_1 + 4);
                *puVar9 = 0;
            } else {
                uVar12 = (*(undefined * *)(param_1 + 4))[uVar6 - 1];
                if (uVar11 == uVar6) {
                    *puVar9 = uVar11 - 2;
                } else {
                    *puVar9 = uVar6 - 1;
                }
            }
        }
        LAB_140306b3a:
        *param_2 = uVar12;
    } while (true);
}


void FUN_140306b90(uint *param_1, undefined (*param_2)[16], longlong param_3, undefined8 param_4) {
    float *pfVar1;
    undefined4 uVar2;
    uint uVar3;
    float *pfVar4;
    uint uVar5;
    undefined *puVar7;
    undefined8 uVar8;
    undefined auVar10[16];
    int iVar13;
    undefined in_XMM1_Ba;
    undefined in_XMM1_Bb;
    undefined in_XMM1_Bc;
    undefined in_XMM1_Bd;
    undefined in_XMM1_Be;
    undefined in_XMM1_Bf;
    undefined in_XMM1_Bg;
    undefined in_XMM1_Bh;
    float fVar14;
    float fVar15;
    float local_38;
    float fStack52;
    float fStack48;
    float fStack44;
    ulonglong uVar6;
    undefined auVar9[12];
    undefined auVar11[16];
    undefined auVar12[16];

    if (1 < *param_1) {
        uVar5 = *(int *) (param_3 + 0x68) - 1;
        uVar6 = (ulonglong) uVar5;
        puVar7 = param_2[1] + uVar6 * 4;
        FUN_140308e40(param_1, *(undefined4 * )(param_3 + 8 + uVar6 * 0x18), param_2, param_4, puVar7);
        if (uVar5 != 0) {
            fVar15 = 1.0;
            pfVar4 = (float *) (param_3 + uVar6 * 0x18 + 0xc);
            do {
                pfVar1 = pfVar4 + -7;
                pfVar4 = pfVar4 + -6;
                puVar7 = puVar7 + -4;
                FUN_140308e40(param_1, *pfVar1, &local_38, param_4, puVar7);
                fVar14 = fVar15 - *pfVar4;
                *param_2 = CONCAT412(fVar14 * (*(float *) (*param_2 + 0xc) - fStack44) + fStack44,
                                     CONCAT48(fVar14 * (*(float *) (*param_2 + 8) - fStack48) + fStack48,
                                              CONCAT44(fVar14 * (*(float *) (*param_2 + 4) - fStack52) +
                                                       fStack52, fVar14 * (*(float *) *param_2 - local_38) +
                                                                 local_38)));
                uVar5 = (int) uVar6 - 1;
                uVar6 = (ulonglong) uVar5;
            } while (uVar5 != 0);
        }
        return;
    }
    if (*param_1 == 0) {
        *(undefined8 * ) * param_2 = 0;
        *(undefined8 * )(*param_2 + 8) = 0;
        return;
    }
    uVar5 = CONCAT13(in_XMM1_Bd, CONCAT12(in_XMM1_Bc, CONCAT11(in_XMM1_Bb, in_XMM1_Ba))) ^
            CONCAT13(in_XMM1_Bd, CONCAT12(in_XMM1_Bc, CONCAT11(in_XMM1_Bb, in_XMM1_Ba)));
    uVar3 = CONCAT13(in_XMM1_Bh, CONCAT12(in_XMM1_Bg, CONCAT11(in_XMM1_Bf, in_XMM1_Be))) ^
            CONCAT13(in_XMM1_Bh, CONCAT12(in_XMM1_Bg, CONCAT11(in_XMM1_Bf, in_XMM1_Be)));
    uVar2 = **(undefined4 * *)(param_1 + 4);
    uVar8 = CONCAT44(uVar2, uVar2);
    auVar9 = CONCAT48(uVar2, uVar8);
    auVar12 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                                          SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                                           ((char) (uVar3 >> 0x18),
                                                                                                                                            CONCAT114((char) ((uint) uVar2 >> 0x18),
                                                                                                                                                      SUB1614(CONCAT412(uVar2, auVar9), 0))) >>
                                                                                                                                                                                             0x70, 0),
                                                                                                                            CONCAT113((char) (uVar3 >> 0x10),
                                                                                                                                      SUB1613(CONCAT412(uVar2, auVar9),
                                                                                                                                              0))) >> 0x68, 0),
                                                                                                           CONCAT112((char) ((uint) uVar2 >> 0x10), auVar9)) >>
                                                                                                                                                             0x60, 0), CONCAT111((char) (uVar3 >> 8),
                                                                                                                                                                                 SUB1211(auVar9, 0)))
                                                                                                 >> 0x58, 0),
                                                                                  CONCAT110((char) ((uint) uVar2 >> 8),
                                                                                            SUB1210(auVar9, 0)))
                                                                                >> 0x50, 0),
                                                                 CONCAT19((char) uVar3, SUB129(auVar9, 0))) >> 0x48, 0),
                                                CONCAT18((char) uVar2, uVar8)) >> 0x40, 0),
                                (char) (uVar5 >> 0x18)), ((uint7) uVar8 >> 0x18) << 0x30);
    auVar11 = CONCAT115(CONCAT101(SUB1610(auVar12 >> 0x30, 0), (char) (uVar5 >> 0x10)),
                        ((uint5) uVar8 >> 0x10) << 0x20);
    auVar10 = CONCAT142(SUB1614(CONCAT133(SUB1613(CONCAT124(SUB1612(auVar11 >> 0x20, 0),
                                                            (uVar5 >> 8) << 0x18) >> 0x18, 0),
                                          ((uint3) uVar2 >> 8) << 0x10) >> 0x10, 0),
                        (ushort) uVar2 & 0xff | (ushort)(byte)
    uVar5 << 8);
    iVar13 = SUB164(CONCAT214((short) (uVar3 >> 0x10),
                              CONCAT212(SUB162(auVar12 >> 0x30, 0), SUB1612(auVar10, 0))) >> 0x60, 0);
    auVar11 = CONCAT610(SUB166(CONCAT412(iVar13, CONCAT210((short) uVar3, SUB1610(auVar10, 0))) >> 0x50, 0),
                        CONCAT28(SUB162(auVar11 >> 0x20, 0), SUB168(auVar10, 0)));
    fVar15 = (float) SUB164(CONCAT106(CONCAT82(SUB168(auVar11 >> 0x40, 0), (short) (uVar5 >> 0x10)),
                                      (SUB166(auVar10, 0) >> 0x10) << 0x20) >> 0x20, 0) * 0.003921569;
    *param_2 = CONCAT412((float) iVar13 * 0.003921569,
                         CONCAT48((float) (SUB164(auVar10, 0) & 0xffff | uVar5 << 0x10) * 0.003921569,
                                  CONCAT17((char) ((uint) fVar15 >> 0x18),
                                           CONCAT16((char) ((uint) fVar15 >> 0x10),
                                                    CONCAT15((char) ((uint) fVar15 >> 8),
                                                             CONCAT14(SUB41(fVar15, 0),
                                                                      (float) SUB164(auVar11 >> 0x40, 0)
                                                                      * 0.003921569))))));
    return;
}


void FUN_140306cb0(uint *param_1, float *param_2, longlong param_3, undefined8 param_4) {
    float *pfVar1;
    longlong lVar2;
    float *pfVar3;
    uint uVar4;
    float fVar6;
    float local_res8[2];
    ulonglong uVar5;

    if (1 < *param_1) {
        uVar4 = *(int *) (param_3 + 0x68) - 1;
        uVar5 = (ulonglong) uVar4;
        FUN_1403091c0(param_1, *(undefined4 * )(param_3 + 8 + uVar5 * 0x18), param_2, param_4,
                      param_2 + uVar5 + 1);
        if (uVar4 != 0) {
            fVar6 = 1.0;
            pfVar3 = (float *) (param_3 + uVar5 * 0x18 + 0xc);
            lVar2 = uVar5 * 4;
            do {
                pfVar1 = pfVar3 + -7;
                pfVar3 = pfVar3 + -6;
                FUN_1403091c0(param_1, *pfVar1, local_res8, param_4, (longlong) param_2 + lVar2);
                *param_2 = (*param_2 - local_res8[0]) * (fVar6 - *pfVar3) + local_res8[0];
                uVar4 = (int) uVar5 - 1;
                uVar5 = (ulonglong) uVar4;
                lVar2 = lVar2 + -4;
            } while (uVar4 != 0);
        }
        return;
    }
    if (*param_1 == 0) {
        *param_2 = 0.0;
        return;
    }
    fVar6 = (float) FUN_1401c9770(*(undefined8 * )(param_1 + 4));
    *param_2 = fVar6;
    return;
}


void FUN_140306db0(uint *param_1, float *param_2, longlong param_3, undefined8 param_4) {
    float *pfVar1;
    longlong lVar2;
    float *pfVar3;
    uint uVar4;
    float fVar6;
    float local_res8[2];
    ulonglong uVar5;

    if (1 < *param_1) {
        uVar4 = *(int *) (param_3 + 0x68) - 1;
        uVar5 = (ulonglong) uVar4;
        FUN_140309410(param_1, *(undefined4 * )(param_3 + 8 + uVar5 * 0x18), param_2, param_4,
                      param_2 + uVar5 + 1);
        if (uVar4 != 0) {
            fVar6 = 1.0;
            pfVar3 = (float *) (param_3 + uVar5 * 0x18 + 0xc);
            lVar2 = uVar5 * 4;
            do {
                pfVar1 = pfVar3 + -7;
                pfVar3 = pfVar3 + -6;
                FUN_140309410(param_1, *pfVar1, local_res8, param_4, (longlong) param_2 + lVar2);
                *param_2 = (*param_2 - local_res8[0]) * (fVar6 - *pfVar3) + local_res8[0];
                uVar4 = (int) uVar5 - 1;
                uVar5 = (ulonglong) uVar4;
                lVar2 = lVar2 + -4;
            } while (uVar4 != 0);
        }
        return;
    }
    if (*param_1 == 0) {
        *param_2 = 0.0;
        return;
    }
    *param_2 = **(float **) (param_1 + 4);
    return;
}


void FUN_140306eb0(uint *param_1, undefined (*param_2)[16], longlong param_3, undefined8 param_4) {
    float *pfVar1;
    float *pfVar2;
    uint uVar3;
    undefined *puVar5;
    float fVar6;
    float fVar7;
    float local_38;
    float fStack52;
    float fStack48;
    float fStack44;
    ulonglong uVar4;

    if (1 < *param_1) {
        uVar3 = *(int *) (param_3 + 0x68) - 1;
        uVar4 = (ulonglong) uVar3;
        puVar5 = param_2[1] + uVar4 * 4;
        FUN_140306fc0(param_1, *(undefined4 * )(param_3 + 8 + uVar4 * 0x18), param_2, param_4, puVar5);
        if (uVar3 != 0) {
            fVar7 = 1.0;
            pfVar2 = (float *) (param_3 + uVar4 * 0x18 + 0xc);
            do {
                pfVar1 = pfVar2 + -7;
                pfVar2 = pfVar2 + -6;
                puVar5 = puVar5 + -4;
                FUN_140306fc0(param_1, *pfVar1, &local_38, param_4, puVar5);
                fVar6 = fVar7 - *pfVar2;
                *param_2 = CONCAT412(fVar6 * (*(float *) (*param_2 + 0xc) - fStack44) + fStack44,
                                     CONCAT48(fVar6 * (*(float *) (*param_2 + 8) - fStack48) + fStack48,
                                              CONCAT44(fVar6 * (*(float *) (*param_2 + 4) - fStack52) +
                                                       fStack52, fVar6 * (*(float *) *param_2 - local_38) +
                                                                 local_38)));
                uVar3 = (int) uVar4 - 1;
                uVar4 = (ulonglong) uVar3;
            } while (uVar3 != 0);
        }
        return;
    }
    if (*param_1 == 0) {
        *(undefined8 * ) * param_2 = 0;
        *(undefined8 * )(*param_2 + 8) = 0;
        return;
    }
    FUN_1401adb90(&local_38, *(undefined8 * )(param_1 + 4));
    *(float *) *param_2 = local_38;
    *(float *) (*param_2 + 4) = fStack52;
    *(float *) (*param_2 + 8) = fStack48;
    *(float *) (*param_2 + 0xc) = fStack44;
    return;
}


void FUN_140306fc0(uint *param_1, uint param_2, undefined (*param_3)[16], undefined8 param_4,
                   undefined8 *param_5) {
    uint *puVar1;
    undefined8 *puVar2;
    ulonglong uVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    longlong lVar7;
    longlong lVar8;
    ulonglong uVar9;
    float fVar10;
    undefined8 local_res20;
    float local_38;
    float fStack52;
    float fStack48;
    float fStack44;
    float local_28;
    float fStack36;
    float fStack32;
    float fStack28;

    uVar6 = *param_1;
    local_res20 = param_4;
    if (uVar6 == 0) {
        if ((DAT_140c8a5f0 & 1) == 0) {
            DAT_140c8a5f0 = DAT_140c8a5f0 | 1;
        }
        FUN_1401c9800(&local_res20, &DAT_140c8a5e0);
        puVar2 = &local_res20;
    } else {
        if (uVar6 != 1) {
            if (param_5 == (undefined8 *) 0x0) {
                param_5 = &local_res20;
            } else {
                uVar5 = *(uint *) param_5;
                uVar3 = (ulonglong) uVar5;
                uVar6 = *(uint * )(*(longlong * )(param_1 + 2) + uVar3 * 4);
                if (uVar6 <= param_2) {
                    uVar4 = *(uint * )(*(longlong * )(param_1 + 2) + (ulonglong)(uVar5 + 1) * 4);
                    if (param_2 < uVar4) {
                        lVar8 = *(longlong * )(param_1 + 4);
                        FUN_1401adb90(&local_28, lVar8 + (ulonglong)(uVar5 + 1) * 6);
                        FUN_1401adb90(&local_38, lVar8 + uVar3 * 6);
                        fVar10 = (float) (ulonglong)(param_2 - uVar6) / (float) (ulonglong)(uVar4 - uVar6);
                        *param_3 = CONCAT412(fVar10 * (fStack28 - fStack44) + fStack44,
                                             CONCAT48(fVar10 * (fStack32 - fStack48) + fStack48,
                                                      CONCAT44(fVar10 * (fStack36 - fStack52) + fStack52,
                                                               fVar10 * (local_28 - local_38) + local_38)));
                        return;
                    }
                }
                uVar4 = uVar5 + 1;
                uVar3 = (ulonglong) uVar4;
                *(uint *) param_5 = uVar4;
                uVar6 = *param_1;
                if (((uVar4 < uVar6 - 1) &&
                     (lVar8 = *(longlong * )(param_1 + 2), puVar1 = (uint * )(lVar8 + uVar3 * 4),
                             *puVar1 < param_2 || *puVar1 == param_2)) &&
                    (param_2 < *(uint * )(lVar8 + (ulonglong)(uVar5 + 2) * 4))) {
                    lVar7 = *(longlong * )(param_1 + 4);
                    FUN_1401adb90(&local_38, lVar7 + (ulonglong)(uVar5 + 2) * 6);
                    FUN_1401adb90(&local_28, lVar7 + uVar3 * 6);
                    fVar10 = (float) (ulonglong)(param_2 - *(int *) (lVar8 + uVar3 * 4)) /
                             (float) (ulonglong)
                                     (uint)(*(int *) (lVar8 + (ulonglong)(uVar5 + 2) * 4) -
                                            *(int *) (lVar8 + uVar3 * 4));
                    *param_3 = CONCAT412(fVar10 * (fStack44 - fStack28) + fStack28,
                                         CONCAT48(fVar10 * (fStack48 - fStack32) + fStack32,
                                                  CONCAT44(fVar10 * (fStack52 - fStack36) + fStack36,
                                                           fVar10 * (local_38 - local_28) + local_28)));
                    return;
                }
            }
            uVar3 = 0;
            if (uVar6 != 0) {
                uVar5 = uVar6;
                do {
                    uVar4 = (uVar5 - (int) uVar3 >> 1) + (int) uVar3;
                    if (*(uint * )(*(longlong * )(param_1 + 2) + (ulonglong) uVar4 * 4) <= param_2) {
                        uVar3 = (ulonglong)(uVar4 + 1);
                        uVar4 = uVar5;
                    }
                    uVar5 = uVar4;
                } while ((uint) uVar3 < uVar5);
            }
            uVar5 = (uint) uVar3;
            uVar9 = (ulonglong)(uVar5 - 1);
            if (uVar5 == 0) {
                FUN_1401adb90(&local_28, *(undefined8 * )(param_1 + 4));
                *(float *) *param_3 = local_28;
                *(float *) (*param_3 + 4) = fStack36;
                *(float *) (*param_3 + 8) = fStack32;
                *(float *) (*param_3 + 0xc) = fStack28;
                *(uint *) param_5 = 0;
            } else if (uVar6 == uVar5) {
                FUN_1401adb90(&local_28, *(longlong * )(param_1 + 4) + uVar9 * 6);
                *(float *) *param_3 = local_28;
                *(float *) (*param_3 + 4) = fStack36;
                *(float *) (*param_3 + 8) = fStack32;
                *(float *) (*param_3 + 0xc) = fStack28;
                *(uint *) param_5 = *param_1 - 2;
            } else {
                lVar8 = *(longlong * )(param_1 + 4);
                FUN_1401adb90(&local_38, lVar8 + uVar3 * 6);
                FUN_1401adb90(&local_28, lVar8 + uVar9 * 6);
                lVar8 = *(longlong * )(param_1 + 2);
                fVar10 = (float) (ulonglong)(param_2 - *(int *) (lVar8 + uVar9 * 4)) /
                         (float) (ulonglong)(uint)(*(int *) (lVar8 + uVar3 * 4) - *(int *) (lVar8 + uVar9 * 4));
                *param_3 = CONCAT412(fVar10 * (fStack44 - fStack28) + fStack28,
                                     CONCAT48(fVar10 * (fStack48 - fStack32) + fStack32,
                                              CONCAT44(fVar10 * (fStack52 - fStack36) + fStack36,
                                                       fVar10 * (local_38 - local_28) + local_28)));
                *(uint *) param_5 = uVar5 - 1;
            }
            return;
        }
        puVar2 = *(undefined8 * *)(param_1 + 4);
    }
    FUN_1401adb90(&local_38, puVar2);
    *(float *) *param_3 = local_38;
    *(float *) (*param_3 + 4) = fStack52;
    *(float *) (*param_3 + 8) = fStack48;
    *(float *) (*param_3 + 0xc) = fStack44;
    return;
}


void FUN_140307280(uint *param_1, undefined8 *param_2, longlong param_3, undefined8 param_4) {
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 *puVar4;
    longlong lVar5;
    undefined *puVar6;
    uint uVar7;
    undefined auVar9[16];
    undefined local_48[16];
    undefined local_38[32];
    ulonglong uVar8;
    undefined2 uVar10;
    int iVar11;

    if (1 < *param_1) {
        uVar7 = *(int *) (param_3 + 0x68) - 1;
        uVar8 = (ulonglong) uVar7;
        lVar5 = (longlong) param_2 + uVar8 * 4 + 0x10;
        FUN_1403073a0(param_1, *(undefined4 * )(param_3 + 8 + uVar8 * 0x18), param_2, param_4, lVar5);
        if (uVar7 != 0) {
            puVar6 = (undefined * )(param_3 + uVar8 * 0x18 + 0xc);
            do {
                puVar4 = (undefined4 * )(puVar6 + -0x1c);
                puVar6 = &DAT_ffffffffffffffe8 + (longlong) puVar6;
                lVar5 = lVar5 + -4;
                FUN_1403073a0(param_1, *puVar4, local_48, param_4, lVar5);
                puVar4 = (undefined4 *) FUN_1401b1ee0(local_38, local_48, param_2);
                uVar1 = puVar4[1];
                uVar2 = puVar4[2];
                uVar3 = puVar4[3];
                *(undefined4 *) param_2 = *puVar4;
                *(undefined4 * )((longlong) param_2 + 4) = uVar1;
                *(undefined4 * )(param_2 + 1) = uVar2;
                *(undefined4 * )((longlong) param_2 + 0xc) = uVar3;
                uVar7 = (int) uVar8 - 1;
                uVar8 = (ulonglong) uVar7;
            } while (uVar7 != 0);
        }
        return;
    }
    if (*param_1 == 0) {
        *param_2 = 0;
        param_2[1] = 0;
        return;
    }
    uVar8 = **(ulonglong * *)(param_1 + 4);
    uVar10 = SUB122(ZEXT812(uVar8) >> 0x20, 0);
    iVar11 = SUB164(CONCAT214(SUB162(ZEXT816(uVar8) >> 0x30, 0),
                              CONCAT212(SUB142(ZEXT814(uVar8) >> 0x30, 0), ZEXT812(uVar8))) >> 0x60, 0);
    auVar9 = CONCAT610(SUB166(CONCAT412(iVar11, CONCAT210(uVar10, (unkuint10) uVar8)) >> 0x50, 0),
                       CONCAT28(uVar10, uVar8));
    *(float *) param_2 =
            (float) ((int) ((uint) uVar8 & 0xffff | (uint) uVar8 << 0x10) >> 0x10) * 6.103516e-05;
    *(float *) ((longlong) param_2 + 4) =
            (float) (SUB164(CONCAT106(SUB1610(CONCAT88(SUB168(auVar9 >> 0x40, 0), (uVar8 >> 0x10) << 0x30)
                                                      >> 0x30, 0), ((uint6) uVar8 >> 0x10) << 0x20) >> 0x20, 0) >>
                                                                                                                0x10) *
            6.103516e-05;
    *(float *) (param_2 + 1) = (float) (SUB164(auVar9 >> 0x40, 0) >> 0x10) * 6.103516e-05;
    *(float *) ((longlong) param_2 + 0xc) = (float) (iVar11 >> 0x10) * 6.103516e-05;
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1403073a0(uint *param_1, uint param_2, float *param_3, ulonglong param_4, ulonglong *param_5) {
    uint *puVar1;
    ulonglong uVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float *pfVar6;
    ulonglong uVar7;
    uint uVar8;
    uint uVar9;
    uint uVar10;
    undefined2 uVar12;
    undefined auVar11[16];
    undefined auVar14[16];
    ulonglong local_res20;
    float local_38;
    float fStack52;
    float fStack48;
    float fStack44;
    float local_28;
    float fStack36;
    float fStack32;
    float fStack28;
    undefined local_18[16];
    int iVar13;
    int iVar15;

    uVar10 = *param_1;
    if (uVar10 == 0) {
        if ((DAT_140dc0da0 & 1) == 0) {
            DAT_140dc0da0 = DAT_140dc0da0 | 1;
        }
        local_res20 = CONCAT26((short) (int) (fRam0000000140dc0dbc * 16384.0),
                               CONCAT24((short) (int) (fRam0000000140dc0db8 * 16384.0),
                                        (int) (_DAT_140dc0db0 * 16384.0) & 0xffffU |
                                        (int) (fRam0000000140dc0db4 * 16384.0) << 0x10));
    } else {
        if (uVar10 != 1) {
            local_res20 = param_4;
            if (param_5 == (ulonglong *) 0x0) {
                param_5 = &local_res20;
            } else {
                uVar9 = *(uint *) param_5;
                if ((*(uint * )(*(longlong * )(param_1 + 2) + (ulonglong) uVar9 * 4) <= param_2) &&
                    (param_2 < *(uint * )(*(longlong * )(param_1 + 2) + (ulonglong)(uVar9 + 1) * 4))) {
                    uVar7 = *(ulonglong * )(*(longlong * )(param_1 + 4) + (ulonglong) uVar9 * 8);
                    uVar2 = *(ulonglong * )(*(longlong * )(param_1 + 4) + (ulonglong)(uVar9 + 1) * 8);
                    uVar12 = SUB122(ZEXT812(uVar2) >> 0x20, 0);
                    iVar13 = SUB164(CONCAT214(SUB162(ZEXT816(uVar2) >> 0x30, 0),
                                              CONCAT212(SUB142(ZEXT814(uVar2) >> 0x30, 0), ZEXT812(uVar2))) >>
                                                                                                            0x60, 0);
                    auVar11 = CONCAT610(SUB166(CONCAT412(iVar13, CONCAT210(uVar12, (unkuint10) uVar2)) >> 0x50, 0),
                                        CONCAT28(uVar12, uVar2));
                    uVar12 = SUB122(ZEXT812(uVar7) >> 0x20, 0);
                    iVar15 = SUB164(CONCAT214(SUB162(ZEXT816(uVar7) >> 0x30, 0),
                                              CONCAT212(SUB142(ZEXT814(uVar7) >> 0x30, 0), ZEXT812(uVar7))) >>
                                                                                                            0x60, 0);
                    auVar14 = CONCAT610(SUB166(CONCAT412(iVar15, CONCAT210(uVar12, (unkuint10) uVar7)) >> 0x50, 0),
                                        CONCAT28(uVar12, uVar7));
                    local_38 = (float) ((int) ((uint) uVar2 & 0xffff | (uint) uVar2 << 0x10) >> 0x10) *
                               6.103516e-05;
                    fStack52 = (float) (SUB164(CONCAT106(SUB1610(CONCAT88(SUB168(auVar11 >> 0x40, 0),
                                                                          (uVar2 >> 0x10) << 0x30) >> 0x30, 0),
                                                         ((uint6) uVar2 >> 0x10) << 0x20) >> 0x20, 0) >> 0x10) *
                               6.103516e-05;
                    fStack48 = (float) (SUB164(auVar11 >> 0x40, 0) >> 0x10) * 6.103516e-05;
                    fStack44 = (float) (iVar13 >> 0x10) * 6.103516e-05;
                    local_28 = (float) ((int) ((uint) uVar7 & 0xffff | (uint) uVar7 << 0x10) >> 0x10) *
                               6.103516e-05;
                    fStack36 = (float) (SUB164(CONCAT106(SUB1610(CONCAT88(SUB168(auVar14 >> 0x40, 0),
                                                                          (uVar7 >> 0x10) << 0x30) >> 0x30, 0),
                                                         ((uint6) uVar7 >> 0x10) << 0x20) >> 0x20, 0) >> 0x10) *
                               6.103516e-05;
                    fStack32 = (float) (SUB164(auVar14 >> 0x40, 0) >> 0x10) * 6.103516e-05;
                    fStack28 = (float) (iVar15 >> 0x10) * 6.103516e-05;
                    pfVar6 = (float *) FUN_1401b1ee0(local_18, &local_28, &local_38);
                    fVar3 = pfVar6[1];
                    fVar4 = pfVar6[2];
                    fVar5 = pfVar6[3];
                    *param_3 = *pfVar6;
                    param_3[1] = fVar3;
                    param_3[2] = fVar4;
                    param_3[3] = fVar5;
                    return;
                }
                uVar8 = uVar9 + 1;
                *(uint *) param_5 = uVar8;
                uVar10 = *param_1;
                if (((uVar8 < uVar10 - 1) &&
                     (puVar1 = (uint * )(*(longlong * )(param_1 + 2) + (ulonglong) uVar8 * 4),
                             *puVar1 < param_2 || *puVar1 == param_2)) &&
                    (param_2 < *(uint * )(*(longlong * )(param_1 + 2) + (ulonglong)(uVar9 + 2) * 4))) {
                    uVar7 = *(ulonglong * )(*(longlong * )(param_1 + 4) + (ulonglong)(uVar9 + 2) * 8);
                    uVar12 = SUB122(ZEXT812(uVar7) >> 0x20, 0);
                    iVar13 = SUB164(CONCAT214(SUB162(ZEXT816(uVar7) >> 0x30, 0),
                                              CONCAT212(SUB142(ZEXT814(uVar7) >> 0x30, 0), ZEXT812(uVar7))) >>
                                                                                                            0x60, 0);
                    auVar11 = CONCAT610(SUB166(CONCAT412(iVar13, CONCAT210(uVar12, (unkuint10) uVar7)) >> 0x50, 0),
                                        CONCAT28(uVar12, uVar7));
                    local_28 = (float) ((int) ((uint) uVar7 & 0xffff | (uint) uVar7 << 0x10) >> 0x10) *
                               6.103516e-05;
                    fStack36 = (float) (SUB164(CONCAT106(SUB1610(CONCAT88(SUB168(auVar11 >> 0x40, 0),
                                                                          (uVar7 >> 0x10) << 0x30) >> 0x30, 0),
                                                         ((uint6) uVar7 >> 0x10) << 0x20) >> 0x20, 0) >> 0x10) *
                               6.103516e-05;
                    fStack32 = (float) (SUB164(auVar11 >> 0x40, 0) >> 0x10) * 6.103516e-05;
                    fStack28 = (float) (iVar13 >> 0x10) * 6.103516e-05;
                    uVar7 = *(ulonglong * )(*(longlong * )(param_1 + 4) + (ulonglong) uVar8 * 8);
                    uVar12 = SUB122(ZEXT812(uVar7) >> 0x20, 0);
                    iVar13 = SUB164(CONCAT214(SUB162(ZEXT816(uVar7) >> 0x30, 0),
                                              CONCAT212(SUB142(ZEXT814(uVar7) >> 0x30, 0), ZEXT812(uVar7))) >>
                                                                                                            0x60, 0);
                    auVar11 = CONCAT610(SUB166(CONCAT412(iVar13, CONCAT210(uVar12, (unkuint10) uVar7)) >> 0x50, 0),
                                        CONCAT28(uVar12, uVar7));
                    local_38 = (float) ((int) ((uint) uVar7 & 0xffff | (uint) uVar7 << 0x10) >> 0x10) *
                               6.103516e-05;
                    fStack52 = (float) (SUB164(CONCAT106(SUB1610(CONCAT88(SUB168(auVar11 >> 0x40, 0),
                                                                          (uVar7 >> 0x10) << 0x30) >> 0x30, 0),
                                                         ((uint6) uVar7 >> 0x10) << 0x20) >> 0x20, 0) >> 0x10) *
                               6.103516e-05;
                    fStack48 = (float) (SUB164(auVar11 >> 0x40, 0) >> 0x10) * 6.103516e-05;
                    fStack44 = (float) (iVar13 >> 0x10) * 6.103516e-05;
                    pfVar6 = (float *) FUN_1401b1ee0(local_18, &local_38, &local_28);
                    fVar3 = pfVar6[1];
                    fVar4 = pfVar6[2];
                    fVar5 = pfVar6[3];
                    *param_3 = *pfVar6;
                    param_3[1] = fVar3;
                    param_3[2] = fVar4;
                    param_3[3] = fVar5;
                    return;
                }
            }
            uVar7 = 0;
            if (uVar10 != 0) {
                uVar9 = uVar10;
                do {
                    uVar8 = (uVar9 - (int) uVar7 >> 1) + (int) uVar7;
                    if (*(uint * )(*(longlong * )(param_1 + 2) + (ulonglong) uVar8 * 4) <= param_2) {
                        uVar7 = (ulonglong)(uVar8 + 1);
                        uVar8 = uVar9;
                    }
                    uVar9 = uVar8;
                } while ((uint) uVar7 < uVar9);
            }
            uVar9 = (uint) uVar7;
            uVar8 = uVar9 - 1;
            if (uVar9 != 0) {
                if (uVar10 != uVar9) {
                    uVar7 = *(ulonglong * )(*(longlong * )(param_1 + 4) + uVar7 * 8);
                    uVar12 = SUB122(ZEXT812(uVar7) >> 0x20, 0);
                    iVar13 = SUB164(CONCAT214(SUB162(ZEXT816(uVar7) >> 0x30, 0),
                                              CONCAT212(SUB142(ZEXT814(uVar7) >> 0x30, 0), ZEXT812(uVar7))) >>
                                                                                                            0x60, 0);
                    auVar11 = CONCAT610(SUB166(CONCAT412(iVar13, CONCAT210(uVar12, (unkuint10) uVar7)) >> 0x50, 0),
                                        CONCAT28(uVar12, uVar7));
                    local_28 = (float) ((int) ((uint) uVar7 & 0xffff | (uint) uVar7 << 0x10) >> 0x10) *
                               6.103516e-05;
                    fStack36 = (float) (SUB164(CONCAT106(SUB1610(CONCAT88(SUB168(auVar11 >> 0x40, 0),
                                                                          (uVar7 >> 0x10) << 0x30) >> 0x30, 0),
                                                         ((uint6) uVar7 >> 0x10) << 0x20) >> 0x20, 0) >> 0x10) *
                               6.103516e-05;
                    fStack32 = (float) (SUB164(auVar11 >> 0x40, 0) >> 0x10) * 6.103516e-05;
                    fStack28 = (float) (iVar13 >> 0x10) * 6.103516e-05;
                    uVar7 = *(ulonglong * )(*(longlong * )(param_1 + 4) + (ulonglong) uVar8 * 8);
                    uVar12 = SUB122(ZEXT812(uVar7) >> 0x20, 0);
                    iVar13 = SUB164(CONCAT214(SUB162(ZEXT816(uVar7) >> 0x30, 0),
                                              CONCAT212(SUB142(ZEXT814(uVar7) >> 0x30, 0), ZEXT812(uVar7))) >>
                                                                                                            0x60, 0);
                    auVar11 = CONCAT610(SUB166(CONCAT412(iVar13, CONCAT210(uVar12, (unkuint10) uVar7)) >> 0x50, 0),
                                        CONCAT28(uVar12, uVar7));
                    local_38 = (float) ((int) ((uint) uVar7 & 0xffff | (uint) uVar7 << 0x10) >> 0x10) *
                               6.103516e-05;
                    fStack52 = (float) (SUB164(CONCAT106(SUB1610(CONCAT88(SUB168(auVar11 >> 0x40, 0),
                                                                          (uVar7 >> 0x10) << 0x30) >> 0x30, 0),
                                                         ((uint6) uVar7 >> 0x10) << 0x20) >> 0x20, 0) >> 0x10) *
                               6.103516e-05;
                    fStack48 = (float) (SUB164(auVar11 >> 0x40, 0) >> 0x10) * 6.103516e-05;
                    fStack44 = (float) (iVar13 >> 0x10) * 6.103516e-05;
                    pfVar6 = (float *) FUN_1401b1ee0(local_18, &local_38, &local_28);
                    fVar3 = pfVar6[1];
                    fVar4 = pfVar6[2];
                    fVar5 = pfVar6[3];
                    *param_3 = *pfVar6;
                    param_3[1] = fVar3;
                    param_3[2] = fVar4;
                    param_3[3] = fVar5;
                    *(uint *) param_5 = uVar8;
                    return;
                }
                uVar7 = *(ulonglong * )(*(longlong * )(param_1 + 4) + (ulonglong) uVar8 * 8);
                uVar12 = SUB122(ZEXT812(uVar7) >> 0x20, 0);
                iVar13 = SUB164(CONCAT214(SUB162(ZEXT816(uVar7) >> 0x30, 0),
                                          CONCAT212(SUB142(ZEXT814(uVar7) >> 0x30, 0), ZEXT812(uVar7))) >>
                                                                                                        0x60, 0);
                auVar11 = CONCAT610(SUB166(CONCAT412(iVar13, CONCAT210(uVar12, (unkuint10) uVar7)) >> 0x50, 0),
                                    CONCAT28(uVar12, uVar7));
                *param_3 = (float) ((int) ((uint) uVar7 & 0xffff | (uint) uVar7 << 0x10) >> 0x10) * 6.103516e-05;
                param_3[1] = (float) (SUB164(CONCAT106(SUB1610(CONCAT88(SUB168(auVar11 >> 0x40, 0),
                                                                        (uVar7 >> 0x10) << 0x30) >> 0x30, 0),
                                                       ((uint6) uVar7 >> 0x10) << 0x20) >> 0x20, 0) >> 0x10) *
                             6.103516e-05;
                param_3[2] = (float) (SUB164(auVar11 >> 0x40, 0) >> 0x10) * 6.103516e-05;
                param_3[3] = (float) (iVar13 >> 0x10) * 6.103516e-05;
                *(uint *) param_5 = *param_1 - 2;
                return;
            }
            uVar7 = **(ulonglong * *)(param_1 + 4);
            uVar12 = SUB122(ZEXT812(uVar7) >> 0x20, 0);
            iVar13 = SUB164(CONCAT214(SUB162(ZEXT816(uVar7) >> 0x30, 0),
                                      CONCAT212(SUB142(ZEXT814(uVar7) >> 0x30, 0), ZEXT812(uVar7))) >> 0x60,
                            0);
            auVar11 = CONCAT610(SUB166(CONCAT412(iVar13, CONCAT210(uVar12, (unkuint10) uVar7)) >> 0x50, 0),
                                CONCAT28(uVar12, uVar7));
            *param_3 = (float) ((int) ((uint) uVar7 & 0xffff | (uint) uVar7 << 0x10) >> 0x10) * 6.103516e-05;
            param_3[1] = (float) (SUB164(CONCAT106(SUB1610(CONCAT88(SUB168(auVar11 >> 0x40, 0),
                                                                    (uVar7 >> 0x10) << 0x30) >> 0x30, 0),
                                                   ((uint6) uVar7 >> 0x10) << 0x20) >> 0x20, 0) >> 0x10) *
                         6.103516e-05;
            param_3[2] = (float) (SUB164(auVar11 >> 0x40, 0) >> 0x10) * 6.103516e-05;
            param_3[3] = (float) (iVar13 >> 0x10) * 6.103516e-05;
            *(uint *) param_5 = 0;
            return;
        }
        local_res20 = **(ulonglong * *)(param_1 + 4);
    }
    uVar12 = SUB142(ZEXT814(local_res20) >> 0x30, 0);
    iVar13 = SUB164(CONCAT214(uVar12, CONCAT212(uVar12, ZEXT812(local_res20))) >> 0x60, 0);
    auVar11 = CONCAT610(SUB166(CONCAT412(iVar13, CONCAT210(SUB142(ZEXT814(local_res20) >> 0x20, 0),
                                                           (unkuint10) local_res20)) >> 0x50, 0),
                        CONCAT28(SUB122(ZEXT812(local_res20) >> 0x20, 0), local_res20));
    *param_3 = (float) ((int) ((uint) local_res20 & 0xffff | (uint) local_res20 << 0x10) >> 0x10) *
               6.103516e-05;
    param_3[1] = (float) (SUB164(CONCAT106(SUB1610(CONCAT88(SUB168(auVar11 >> 0x40, 0),
                                                            (local_res20 >> 0x10) << 0x30) >> 0x30, 0),
                                           ((uint6) local_res20 >> 0x10) << 0x20) >> 0x20, 0) >> 0x10) *
                 6.103516e-05;
    param_3[2] = (float) (SUB164(auVar11 >> 0x40, 0) >> 0x10) * 6.103516e-05;
    param_3[3] = (float) (iVar13 >> 0x10) * 6.103516e-05;
    return;
}


void FUN_140307720(uint *param_1, undefined (*param_2)[16], longlong param_3, undefined8 param_4) {
    float *pfVar1;
    float *pfVar2;
    uint uVar3;
    undefined *puVar5;
    float fVar6;
    float fVar7;
    float local_38;
    float fStack52;
    float fStack48;
    float fStack44;
    ulonglong uVar4;

    if (1 < *param_1) {
        uVar3 = *(int *) (param_3 + 0x68) - 1;
        uVar4 = (ulonglong) uVar3;
        puVar5 = param_2[1] + uVar4 * 4;
        FUN_140307830(param_1, *(undefined4 * )(param_3 + 8 + uVar4 * 0x18), param_2, param_4, puVar5);
        if (uVar3 != 0) {
            fVar7 = 1.0;
            pfVar2 = (float *) (param_3 + uVar4 * 0x18 + 0xc);
            do {
                pfVar1 = pfVar2 + -7;
                pfVar2 = pfVar2 + -6;
                puVar5 = puVar5 + -4;
                FUN_140307830(param_1, *pfVar1, &local_38, param_4, puVar5);
                fVar6 = fVar7 - *pfVar2;
                *param_2 = CONCAT412(fVar6 * (*(float *) (*param_2 + 0xc) - fStack44) + fStack44,
                                     CONCAT48(fVar6 * (*(float *) (*param_2 + 8) - fStack48) + fStack48,
                                              CONCAT44(fVar6 * (*(float *) (*param_2 + 4) - fStack52) +
                                                       fStack52, fVar6 * (*(float *) *param_2 - local_38) +
                                                                 local_38)));
                uVar3 = (int) uVar4 - 1;
                uVar4 = (ulonglong) uVar3;
            } while (uVar3 != 0);
        }
        return;
    }
    if (*param_1 == 0) {
        *(undefined8 * ) * param_2 = 0;
        *(undefined8 * )(*param_2 + 8) = 0;
        return;
    }
    *param_2 = ZEXT1216(**(undefined(**)[12])(param_1 + 4));
    return;
}


void FUN_140307830(uint *param_1, uint param_2, undefined (*param_3)[16], undefined8 param_4,
                   uint *param_5) {
    uint *puVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    longlong lVar5;
    longlong lVar6;
    ulonglong uVar7;
    uint uVar8;
    ulonglong uVar9;
    uint uVar10;
    uint uVar11;
    uint uVar12;
    float fVar13;
    uint local_res20[2];

    uVar12 = *param_1;
    if (uVar12 == 0) {
        if ((DAT_140c8a5c4 & 1) == 0) {
            DAT_140c8a5c4 = DAT_140c8a5c4 | 1;
        }
        *param_3 = ZEXT1216(CONCAT48(DAT_140c8a5d8, CONCAT44(DAT_140c8a5d4, DAT_140c8a5d0)));
        return;
    }
    if (uVar12 == 1) {
        *param_3 = ZEXT1216(**(undefined(**)[12])(param_1 + 4));
        return;
    }
    if (param_5 == (uint *) 0x0) {
        param_5 = local_res20;
    } else {
        uVar10 = *param_5;
        uVar9 = (ulonglong) uVar10;
        uVar12 = *(uint * )(*(longlong * )(param_1 + 2) + uVar9 * 4);
        if (uVar12 <= param_2) {
            uVar7 = (ulonglong)(uVar10 + 1);
            uVar11 = *(uint * )(*(longlong * )(param_1 + 2) + uVar7 * 4);
            if (param_2 < uVar11) {
                lVar5 = *(longlong * )(param_1 + 4);
                fVar2 = *(float *) (lVar5 + 8 + uVar9 * 0xc);
                fVar3 = *(float *) (lVar5 + uVar9 * 0xc);
                fVar4 = *(float *) (lVar5 + 4 + uVar9 * 0xc);
                fVar13 = (float) (ulonglong)(param_2 - uVar12) / (float) (ulonglong)(uVar11 - uVar12);
                *param_3 = CONCAT412(fVar13 * 0.0 + 0.0,
                                     CONCAT48(fVar13 * (*(float *) (lVar5 + 8 + uVar7 * 0xc) - fVar2) + fVar2,
                                              CONCAT44(fVar13 * (*(float *) (lVar5 + 4 + uVar7 * 0xc) -
                                                                 fVar4) + fVar4,
                                                       fVar13 * (*(float *) (lVar5 + uVar7 * 0xc) - fVar3) +
                                                       fVar3)));
                return;
            }
        }
        uVar11 = uVar10 + 1;
        uVar9 = (ulonglong) uVar11;
        *param_5 = uVar11;
        uVar12 = *param_1;
        if (((uVar11 < uVar12 - 1) &&
             (lVar5 = *(longlong * )(param_1 + 2), puVar1 = (uint * )(lVar5 + uVar9 * 4),
                     *puVar1 < param_2 || *puVar1 == param_2)) &&
            (param_2 < *(uint * )(lVar5 + (ulonglong)(uVar10 + 2) * 4))) {
            lVar6 = *(longlong * )(param_1 + 4);
            uVar7 = (ulonglong)(uVar10 + 2);
            fVar2 = *(float *) (lVar6 + uVar9 * 0xc);
            fVar3 = *(float *) (lVar6 + 8 + uVar9 * 0xc);
            fVar4 = *(float *) (lVar6 + 4 + uVar9 * 0xc);
            fVar13 = (float) (ulonglong)(param_2 - *(int *) (lVar5 + uVar9 * 4)) /
                     (float) (ulonglong)
                             (uint)(*(int *) (lVar5 + (ulonglong)(uVar10 + 2) * 4) -
                                    *(int *) (lVar5 + uVar9 * 4));
            *param_3 = CONCAT412(fVar13 * 0.0 + 0.0,
                                 CONCAT48(fVar13 * (*(float *) (lVar6 + 8 + uVar7 * 0xc) - fVar3) + fVar3,
                                          CONCAT44(fVar13 * (*(float *) (lVar6 + 4 + uVar7 * 0xc) - fVar4)
                                                   + fVar4, fVar13 * (*(float *) (lVar6 + uVar7 * 0xc) -
                                                                      fVar2) + fVar2)));
            return;
        }
    }
    uVar10 = 0;
    if (uVar12 != 0) {
        uVar11 = uVar12;
        do {
            uVar8 = (uVar11 - uVar10 >> 1) + uVar10;
            if (*(uint * )(*(longlong * )(param_1 + 2) + (ulonglong) uVar8 * 4) <= param_2) {
                uVar10 = uVar8 + 1;
                uVar8 = uVar11;
            }
            uVar11 = uVar8;
        } while (uVar10 < uVar11);
    }
    uVar9 = (ulonglong)(uVar10 - 1);
    if (uVar10 != 0) {
        if (uVar12 != uVar10) {
            uVar7 = (ulonglong) uVar10;
            lVar5 = *(longlong * )(param_1 + 4);
            fVar2 = *(float *) (lVar5 + uVar9 * 0xc);
            fVar3 = *(float *) (lVar5 + 8 + uVar9 * 0xc);
            fVar4 = *(float *) (lVar5 + 4 + uVar9 * 0xc);
            lVar6 = *(longlong * )(param_1 + 2);
            fVar13 = (float) (ulonglong)(param_2 - *(int *) (lVar6 + uVar9 * 4)) /
                     (float) (ulonglong)(uint)(*(int *) (lVar6 + uVar7 * 4) - *(int *) (lVar6 + uVar9 * 4));
            *param_3 = CONCAT412(fVar13 * 0.0 + 0.0,
                                 CONCAT48(fVar13 * (*(float *) (lVar5 + 8 + uVar7 * 0xc) - fVar3) + fVar3,
                                          CONCAT44(fVar13 * (*(float *) (lVar5 + 4 + uVar7 * 0xc) - fVar4)
                                                   + fVar4, fVar13 * (*(float *) (lVar5 + uVar7 * 0xc) -
                                                                      fVar2) + fVar2)));
            *param_5 = uVar10 - 1;
            return;
        }
        lVar5 = *(longlong * )(param_1 + 4);
        *param_3 = ZEXT1216(CONCAT48(*(undefined4 * )(lVar5 + 8 + uVar9 * 0xc),
                                     CONCAT44(*(undefined4 * )(lVar5 + 4 + uVar9 * 0xc),
                                              *(undefined4 * )(lVar5 + uVar9 * 0xc))));
        *param_5 = *param_1 - 2;
        return;
    }
    *param_3 = ZEXT1216(**(undefined(**)[12])(param_1 + 4));
    *param_5 = 0;
    return;
}


void FUN_140307b80(uint *param_1, undefined (*param_2)[16], longlong param_3, undefined8 param_4) {
    float *pfVar1;
    float *pfVar2;
    uint uVar3;
    undefined *puVar5;
    float fVar6;
    float fVar7;
    float local_38;
    float fStack52;
    float fStack48;
    float fStack44;
    ulonglong uVar4;

    if (1 < *param_1) {
        uVar3 = *(int *) (param_3 + 0x68) - 1;
        uVar4 = (ulonglong) uVar3;
        puVar5 = param_2[1] + uVar4 * 4;
        FUN_140309620(param_1, *(undefined4 * )(param_3 + 8 + uVar4 * 0x18), param_2, param_4, puVar5);
        if (uVar3 != 0) {
            fVar7 = 1.0;
            pfVar2 = (float *) (param_3 + uVar4 * 0x18 + 0xc);
            do {
                pfVar1 = pfVar2 + -7;
                pfVar2 = pfVar2 + -6;
                puVar5 = puVar5 + -4;
                FUN_140309620(param_1, *pfVar1, &local_38, param_4, puVar5);
                fVar6 = fVar7 - *pfVar2;
                *param_2 = CONCAT412(fVar6 * (*(float *) (*param_2 + 0xc) - fStack44) + fStack44,
                                     CONCAT48(fVar6 * (*(float *) (*param_2 + 8) - fStack48) + fStack48,
                                              CONCAT44(fVar6 * (*(float *) (*param_2 + 4) - fStack52) +
                                                       fStack52, fVar6 * (*(float *) *param_2 - local_38) +
                                                                 local_38)));
                uVar3 = (int) uVar4 - 1;
                uVar4 = (ulonglong) uVar3;
            } while (uVar3 != 0);
        }
        return;
    }
    if (*param_1 == 0) {
        *(undefined8 * ) * param_2 = 0;
        *(undefined8 * )(*param_2 + 8) = 0;
        return;
    }
    FUN_1401b2ce0(&local_38, *(undefined8 * )(param_1 + 4));
    *(float *) *param_2 = local_38;
    *(float *) (*param_2 + 4) = fStack52;
    *(float *) (*param_2 + 8) = fStack48;
    *(float *) (*param_2 + 0xc) = fStack44;
    return;
}


void FUN_140307c90(uint *param_1, undefined (*param_2)[16], longlong param_3, undefined8 param_4) {
    float *pfVar1;
    float *pfVar2;
    uint uVar3;
    undefined *puVar5;
    float fVar6;
    float fVar7;
    float local_38;
    float fStack52;
    float fStack48;
    float fStack44;
    ulonglong uVar4;

    if (1 < *param_1) {
        uVar3 = *(int *) (param_3 + 0x68) - 1;
        uVar4 = (ulonglong) uVar3;
        puVar5 = param_2[1] + uVar4 * 4;
        FUN_1403098c0(param_1, *(undefined4 * )(param_3 + 8 + uVar4 * 0x18), param_2, param_4, puVar5);
        if (uVar3 != 0) {
            fVar7 = 1.0;
            pfVar2 = (float *) (param_3 + uVar4 * 0x18 + 0xc);
            do {
                pfVar1 = pfVar2 + -7;
                pfVar2 = pfVar2 + -6;
                puVar5 = puVar5 + -4;
                FUN_1403098c0(param_1, *pfVar1, &local_38, param_4, puVar5);
                fVar6 = fVar7 - *pfVar2;
                *param_2 = CONCAT412(fVar6 * (*(float *) (*param_2 + 0xc) - fStack44) + fStack44,
                                     CONCAT48(fVar6 * (*(float *) (*param_2 + 8) - fStack48) + fStack48,
                                              CONCAT44(fVar6 * (*(float *) (*param_2 + 4) - fStack52) +
                                                       fStack52, fVar6 * (*(float *) *param_2 - local_38) +
                                                                 local_38)));
                uVar3 = (int) uVar4 - 1;
                uVar4 = (ulonglong) uVar3;
            } while (uVar3 != 0);
        }
        return;
    }
    if (*param_1 == 0) {
        *(undefined8 * ) * param_2 = 0;
        *(undefined8 * )(*param_2 + 8) = 0;
        return;
    }
    FUN_1401b1980(&local_38, *(undefined8 * )(param_1 + 4));
    *(float *) *param_2 = local_38;
    *(float *) (*param_2 + 4) = fStack52;
    *(float *) (*param_2 + 8) = fStack48;
    *(float *) (*param_2 + 0xc) = fStack44;
    return;
}


void FUN_140307da0(uint *param_1, undefined2 *param_2, longlong param_3) {
    undefined *puVar1;
    uint *puVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    uint *puVar9;
    uint *puVar10;
    uint uVar11;
    undefined2 uVar12;
    uint local_res8[2];
    ulonglong uVar8;

    if (*param_1 < 2) {
        if (*param_1 != 0) {
            *param_2 = **(undefined2 * *)(param_1 + 4);
            return;
        }
        *param_2 = 0;
        return;
    }
    uVar7 = *(int *) (param_3 + 0x68) - 1;
    uVar8 = (ulonglong) uVar7;
    puVar10 = (uint * )(param_2 + uVar8 * 2 + 2);
    puVar1 = (undefined * )(param_3 + uVar8 * 0x18 + 8);
    FUN_140309b80();
    do {
        if (uVar7 == 0) {
            return;
        }
        uVar11 = *param_1;
        uVar3 = *(uint * )(&DAT_ffffffffffffffe8 + (longlong) puVar1);
        puVar10 = puVar10 + -1;
        puVar1 = &DAT_ffffffffffffffe8 + (longlong) puVar1;
        uVar7 = (int) uVar8 - 1;
        uVar8 = (ulonglong) uVar7;
        if (uVar11 == 0) {
            uVar12 = 0;
        } else if (uVar11 == 1) {
            uVar12 = **(undefined2 * *)(param_1 + 4);
        } else {
            if (puVar10 == (uint *) 0x0) {
                puVar9 = local_res8;
            } else {
                uVar6 = *puVar10;
                puVar9 = (uint * )(*(longlong * )(param_1 + 2) + (ulonglong) uVar6 * 4);
                if ((*puVar9 < uVar3 || *puVar9 == uVar3) &&
                    (uVar3 < *(uint * )(*(longlong * )(param_1 + 2) + (ulonglong)(uVar6 + 1) * 4))) {
                    uVar12 = *(undefined2 * )(*(longlong * )(param_1 + 4) + (ulonglong) uVar6 * 2);
                    goto LAB_140307f0a;
                }
                uVar4 = uVar6 + 1;
                *puVar10 = uVar4;
                uVar11 = *param_1;
                puVar9 = puVar10;
                if (uVar4 < uVar11 - 1) {
                    puVar2 = (uint * )(*(longlong * )(param_1 + 2) + (ulonglong) uVar4 * 4);
                    if ((*puVar2 < uVar3 || *puVar2 == uVar3) &&
                        (uVar3 < *(uint * )(*(longlong * )(param_1 + 2) + (ulonglong)(uVar6 + 2) * 4))) {
                        uVar12 = *(undefined2 * )(*(longlong * )(param_1 + 4) + (ulonglong) uVar4 * 2);
                        goto LAB_140307f0a;
                    }
                }
            }
            uVar6 = 0;
            if (uVar11 != 0) {
                uVar4 = uVar11;
                do {
                    uVar5 = (uVar4 - uVar6 >> 1) + uVar6;
                    if (*(uint * )(*(longlong * )(param_1 + 2) + (ulonglong) uVar5 * 4) <= uVar3) {
                        uVar6 = uVar5 + 1;
                        uVar5 = uVar4;
                    }
                    uVar4 = uVar5;
                } while (uVar6 < uVar4);
            }
            if (uVar6 == 0) {
                uVar12 = **(undefined2 * *)(param_1 + 4);
                *puVar9 = 0;
            } else {
                uVar12 = (*(undefined2 * *)(param_1 + 4))[uVar6 - 1];
                if (uVar11 == uVar6) {
                    *puVar9 = uVar11 - 2;
                } else {
                    *puVar9 = uVar6 - 1;
                }
            }
        }
        LAB_140307f0a:
        *param_2 = uVar12;
    } while (true);
}


void FUN_140307f60(uint *param_1, undefined4 *param_2, longlong param_3, undefined8 param_4) {
    float *pfVar1;
    undefined4 uVar2;
    char cVar3;
    short sVar7;
    short sVar8;
    short sVar9;
    short sVar10;
    ulonglong uVar11;
    unkbyte10 Var12;
    undefined auVar13[14];
    short sVar14;
    undefined6 uVar15;
    float fVar16;
    ulonglong uVar17;
    float *pfVar18;
    uint uVar19;
    longlong lVar21;
    int iVar22;
    undefined8 uVar23;
    int iVar30;
    undefined auVar25[16];
    undefined auVar26[16];
    undefined auVar29[16];
    int iVar31;
    char cVar32;
    char cVar33;
    float fVar34;
    float fVar35;
    float fVar36;
    float fVar37;
    undefined in_XMM6_Ba;
    byte bVar38;
    undefined in_XMM6_Bb;
    undefined uVar39;
    undefined in_XMM6_Bc;
    undefined uVar40;
    undefined in_XMM6_Bd;
    undefined uVar41;
    undefined in_XMM6_Be;
    undefined uVar42;
    undefined in_XMM6_Bf;
    undefined uVar43;
    undefined in_XMM6_Bg;
    undefined uVar44;
    undefined in_XMM6_Bh;
    undefined uVar45;
    float fVar46;
    float fVar47;
    float fVar48;
    float fVar49;
    undefined4 uVar50;
    undefined4 uVar51;
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
    undefined4 local_res8[2];
    char cVar4;
    char cVar5;
    char cVar6;
    ulonglong uVar20;
    undefined auVar24[12];
    undefined auVar27[16];
    undefined auVar28[16];

    if (1 < *param_1) {
        uVar19 = *(int *) (param_3 + 0x68) - 1;
        uVar20 = (ulonglong) uVar19;
        FUN_140309ca0(param_1, *(undefined4 * )(param_3 + 8 + uVar20 * 0x18), param_2, param_4,
                      param_2 + uVar20 + 1);
        if (uVar19 != 0) {
            fVar46 = 0.003921569;
            fVar47 = 0.003921569;
            fVar48 = 0.003921569;
            fVar49 = 0.003921569;
            uVar19 = CONCAT13(in_XMM6_Bd, CONCAT12(in_XMM6_Bc, CONCAT11(in_XMM6_Bb, in_XMM6_Ba))) ^
                     CONCAT13(in_XMM6_Bd, CONCAT12(in_XMM6_Bc, CONCAT11(in_XMM6_Bb, in_XMM6_Ba)));
            bVar38 = (byte) uVar19;
            uVar39 = (undefined)(uVar19 >> 8);
            uVar40 = (undefined)(uVar19 >> 0x10);
            uVar41 = (undefined)(uVar19 >> 0x18);
            uVar19 = CONCAT13(in_XMM6_Bh, CONCAT12(in_XMM6_Bg, CONCAT11(in_XMM6_Bf, in_XMM6_Be))) ^
                     CONCAT13(in_XMM6_Bh, CONCAT12(in_XMM6_Bg, CONCAT11(in_XMM6_Bf, in_XMM6_Be)));
            uVar42 = (undefined) uVar19;
            uVar43 = (undefined)(uVar19 >> 8);
            uVar44 = (undefined)(uVar19 >> 0x10);
            uVar45 = (undefined)(uVar19 >> 0x18);
            pfVar18 = (float *) (param_3 + uVar20 * 0x18 + 0xc);
            uVar54 = 0x3f800000;
            uVar55 = 0x3f800000;
            uVar56 = 0x3f800000;
            uVar57 = 0x3f800000;
            uVar50 = 0;
            uVar51 = 0;
            uVar52 = 0;
            uVar53 = 0;
            fVar58 = 255.0;
            fVar59 = 255.0;
            fVar60 = 255.0;
            fVar61 = 255.0;
            fVar62 = 0.5;
            fVar63 = 0.5;
            fVar64 = 0.5;
            fVar65 = 0.5;
            fVar66 = 1.0;
            lVar21 = uVar20 * 4;
            do {
                pfVar1 = pfVar18 + -7;
                pfVar18 = pfVar18 + -6;
                FUN_140309ca0(param_1, *pfVar1, local_res8, param_4, (longlong) param_2 + lVar21);
                uVar2 = *param_2;
                fVar16 = fVar66 - *pfVar18;
                uVar23 = CONCAT44(uVar2, uVar2);
                auVar24 = CONCAT48(uVar2, uVar23);
                auVar26 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(
                                                                                     CONCAT412(SUB164(CONCAT313(SUB163(CONCAT214(SUB162
                                                                                                                                         (CONCAT115(uVar45,
                                                                                                                                                    CONCAT114((char) ((uint) uVar2 >>
                                                                                                                                                                                   0x18),
                                                                                                                                                              SUB1614(CONCAT412(
                                                                                                                                                                      uVar2,
                                                                                                                                                                      auVar24), 0)))
                                                                                                                                                  >> 0x70, 0),
                                                                                                                                 CONCAT113(uVar44, SUB1613(CONCAT412(uVar2, auVar24),
                                                                                                                                                           0))) >> 0x68, 0),
                                                                                                                CONCAT112((char) ((uint) uVar2 >> 0x10), auVar24)) >>
                                                                                                                                                                   0x60, 0),
                                                                                               CONCAT111(uVar43, SUB1211(auVar24, 0))) >>
                                                                                                                                       0x58, 0), CONCAT110(
                                                                                     (char) ((uint) uVar2 >> 8),
                                                                                     SUB1210(auVar24, 0))) >> 0x50, 0),
                                                                             CONCAT19(uVar42, SUB129(auVar24, 0)))
                                                                           >> 0x48, 0),
                                                            CONCAT18((char) uVar2, uVar23)) >> 0x40, 0), uVar41),
                                   ((uint7) uVar23 >> 0x18) << 0x30);
                auVar25 = CONCAT115(CONCAT101(SUB1610(auVar26 >> 0x30, 0), uVar40),
                                    ((uint5) uVar23 >> 0x10) << 0x20);
                auVar29 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar25 >> 0x20, 0), uVar39),
                                                      ((uint3) uVar2 >> 8) << 0x10) >> 0x10, 0),
                                    (ushort) uVar2 & 0xff | (ushort) bVar38 << 8);
                iVar22 = SUB164(CONCAT214(CONCAT11(uVar45, uVar44),
                                          CONCAT212(SUB162(auVar26 >> 0x30, 0), SUB1612(auVar29, 0))) >> 0x60, 0
                );
                auVar25 = CONCAT610(SUB166(CONCAT412(iVar22, CONCAT210(CONCAT11(uVar43, uVar42),
                                                                       SUB1610(auVar29, 0))) >> 0x50, 0),
                                    CONCAT28(SUB162(auVar25 >> 0x20, 0), SUB168(auVar29, 0)));
                uVar23 = CONCAT44(local_res8[0], local_res8[0]);
                auVar24 = CONCAT48(local_res8[0], uVar23);
                auVar28 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(
                                                                                                      CONCAT412(SUB164(CONCAT313(SUB163(CONCAT214(SUB162
                                                                                                                                                          (CONCAT115(uVar45, CONCAT114((char) ((uint)
                                                                                                                                                                                               local_res8[0] >> 0x18),
                                                                                                                                                                                       SUB1614(CONCAT412(
                                                                                                                                                                                                       local_res8[0],
                                                                                                                                                                                                       auVar24),
                                                                                                                                                                                               0))) >>
                                                                                                                                                                                                    0x70,
                                                                                                                                                           0), CONCAT113(uVar44, SUB1613(CONCAT412(
                                                                                                                                         local_res8[0], auVar24), 0))) >> 0x68, 0),
                                                                                                                                 CONCAT112((char) ((uint) local_res8[0] >> 0x10),
                                                                                                                                           auVar24)) >> 0x60, 0),
                                                                                                                CONCAT111(uVar43, SUB1211(auVar24, 0))) >> 0x58, 0),
                                                                                              CONCAT110(
                                                                                                      (char) ((uint) local_res8[0]
                                                                                                              >> 8),
                                                                                                      SUB1210(auVar24,
                                                                                                              0)))
                                                                                            >> 0x50, 0),
                                                                             CONCAT19(uVar42, SUB129(auVar24, 0)))
                                                                           >> 0x48, 0),
                                                            CONCAT18((char) local_res8[0], uVar23)) >> 0x40, 0),
                                            uVar41), ((uint7) uVar23 >> 0x18) << 0x30);
                auVar27 = CONCAT115(CONCAT101(SUB1610(auVar28 >> 0x30, 0), uVar40),
                                    ((uint5) uVar23 >> 0x10) << 0x20);
                auVar26 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar27 >> 0x20, 0), uVar39),
                                                      ((uint3) local_res8[0] >> 8) << 0x10) >> 0x10, 0),
                                    (ushort) local_res8[0] & 0xff | (ushort) bVar38 << 8);
                iVar30 = SUB164(CONCAT214(CONCAT11(uVar45, uVar44),
                                          CONCAT212(SUB162(auVar28 >> 0x30, 0), SUB1612(auVar26, 0))) >> 0x60, 0
                );
                auVar27 = CONCAT610(SUB166(CONCAT412(iVar30, CONCAT210(CONCAT11(uVar43, uVar42),
                                                                       SUB1610(auVar26, 0))) >> 0x50, 0),
                                    CONCAT28(SUB162(auVar27 >> 0x20, 0), SUB168(auVar26, 0)));
                fVar34 = (float) SUB164(auVar27 >> 0x40, 0) * fVar46;
                fVar35 = (float) SUB164(CONCAT106(CONCAT82(SUB168(auVar27 >> 0x40, 0), CONCAT11(uVar41, uVar40)),
                                                  (SUB166(auVar26, 0) >> 0x10) << 0x20) >> 0x20, 0) * fVar47;
                fVar36 = (float) (SUB164(auVar26, 0) & 0xffff | (uint) CONCAT11(uVar39, bVar38) << 0x10) *
                         fVar48;
                fVar37 = (float) iVar30 * fVar49;
                auVar29 = maxps(CONCAT412(uVar53, CONCAT48(uVar52, CONCAT44(uVar51, uVar50))),
                                CONCAT412(((float) iVar22 * fVar49 - fVar37) * fVar16 + fVar37,
                                          CONCAT48(((float) (SUB164(auVar29, 0) & 0xffff |
                                                             (uint) CONCAT11(uVar39, bVar38) << 0x10) * fVar48 -
                                                    fVar36) * fVar16 + fVar36,
                                                   CONCAT44(((float) SUB164(CONCAT106(CONCAT82(SUB168(auVar25
                                                                                                              >> 0x40,
                                                                                                      0),
                                                                                               CONCAT11(uVar41,
                                                                                                        uVar40)),
                                                                                      (SUB166(auVar29, 0) >> 0x10)
                                                                                              << 0x20) >> 0x20, 0) *
                                                             fVar47 - fVar35) * fVar16 + fVar35,
                                                            ((float) SUB164(auVar25 >> 0x40, 0) * fVar46 -
                                                             fVar34) * fVar16 + fVar34))));
                auVar29 = minps(auVar29, CONCAT412(uVar57, CONCAT48(uVar56, CONCAT44(uVar55, uVar54))));
                iVar22 = (int) (SUB164(auVar29, 0) * fVar58 + fVar62);
                uVar19 = (uint)(SUB164(auVar29 >> 0x20, 0) * fVar59 + fVar63);
                iVar30 = (int) (SUB164(auVar29 >> 0x40, 0) * fVar60 + fVar64);
                iVar31 = (int) (SUB164(auVar29 >> 0x60, 0) * fVar61 + fVar65);
                cVar32 = (char) ((uint) iVar22 >> 0x10);
                cVar33 = (char) ((uint) iVar31 >> 0x10);
                uVar17 = (ulonglong)
                        CONCAT16((char) (uVar19 >> 0x10),
                                 CONCAT15((char) (uVar19 >> 8), CONCAT14((char) uVar19, iVar30)));
                uVar11 = ((ulonglong) uVar19 & 0xff000000) << 0x20 | uVar17;
                Var12 = CONCAT19((char) ((uint) iVar22 >> 8), CONCAT18((char) iVar22, uVar11));
                auVar24 = CONCAT111((char) ((uint) iVar22 >> 0x18), CONCAT110(cVar32, Var12));
                auVar13 = CONCAT113((char) ((uint) iVar31 >> 8), CONCAT112((char) iVar31, auVar24));
                sVar7 = (short) iVar30;
                cVar3 = (0 < sVar7) * (sVar7 < 0xff) * (char) iVar30 - (0xff < sVar7);
                sVar7 = (short) (uVar17 >> 0x10);
                sVar8 = (short) (uVar17 >> 0x20);
                cVar4 = (0 < sVar8) * (sVar8 < 0xff) * (char) (uVar17 >> 0x20) - (0xff < sVar8);
                sVar8 = (short) (uVar11 >> 0x30);
                sVar9 = (short) ((unkuint10) Var12 >> 0x40);
                cVar5 = (0 < sVar9) * (sVar9 < 0xff) * (char) iVar22 - (0xff < sVar9);
                sVar9 = SUB122(auVar24 >> 0x50, 0);
                sVar10 = SUB142(auVar13 >> 0x60, 0);
                cVar6 = (0 < sVar10) * (sVar10 < 0xff) * (char) iVar31 - (0xff < sVar10);
                sVar10 = SUB162(CONCAT115((char) ((uint) iVar31 >> 0x18), CONCAT114(cVar33, auVar13)) >> 0x70, 0);
                sVar14 = CONCAT11((0 < sVar7) * (sVar7 < 0xff) * (char) (uVar17 >> 0x10) - (0xff < sVar7),
                                  cVar3);
                uVar2 = CONCAT13((0 < sVar8) * (sVar8 < 0xff) * (char) (uVar17 >> 0x30) - (0xff < sVar8),
                                 CONCAT12(cVar4, sVar14));
                uVar15 = CONCAT15((0 < sVar9) * (sVar9 < 0xff) * cVar32 - (0xff < sVar9),
                                  CONCAT14(cVar5, uVar2));
                sVar7 = (short) ((uint) uVar2 >> 0x10);
                sVar8 = (short) ((uint6) uVar15 >> 0x20);
                sVar9 = (short) (CONCAT17((0 < sVar10) * (sVar10 < 0xff) * cVar33 - (0xff < sVar10),
                                          CONCAT16(cVar6, uVar15)) >> 0x30);
                *param_2 = CONCAT13((0 < sVar9) * (sVar9 < 0xff) * cVar6 - (0xff < sVar9),
                                    CONCAT12((0 < sVar8) * (sVar8 < 0xff) * cVar5 - (0xff < sVar8),
                                             CONCAT11((0 < sVar7) * (sVar7 < 0xff) * cVar4 - (0xff < sVar7),
                                                      (0 < sVar14) * (sVar14 < 0xff) * cVar3 -
                                                      (0xff < sVar14))));
                uVar19 = (int) uVar20 - 1;
                uVar20 = (ulonglong) uVar19;
                lVar21 = lVar21 + -4;
            } while (uVar19 != 0);
        }
        return;
    }
    if (*param_1 == 0) {
        *param_2 = 0;
        return;
    }
    *param_2 = **(undefined4 * *)(param_1 + 4);
    return;
}


void FUN_140308160(uint *param_1, undefined4 *param_2, longlong param_3, undefined8 param_4) {
    float *pfVar1;
    float *pfVar2;
    uint uVar3;
    longlong lVar5;
    float fVar6;
    float fVar7;
    char local_res8;
    char local_res9;
    char local_resa;
    char local_resb;
    ulonglong uVar4;

    if (1 < *param_1) {
        uVar3 = *(int *) (param_3 + 0x68) - 1;
        uVar4 = (ulonglong) uVar3;
        FUN_14030a000(param_1, *(undefined4 * )(param_3 + 8 + uVar4 * 0x18), param_2, param_4,
                      param_2 + uVar4 + 1);
        if (uVar3 != 0) {
            fVar7 = 1.0;
            pfVar2 = (float *) (param_3 + uVar4 * 0x18 + 0xc);
            lVar5 = uVar4 * 4;
            do {
                pfVar1 = pfVar2 + -7;
                pfVar2 = pfVar2 + -6;
                FUN_14030a000(param_1, *pfVar1, &local_res8, param_4, (longlong) param_2 + lVar5);
                fVar6 = fVar7 - *pfVar2;
                *param_2 = CONCAT13((char) (int) (fVar6 * ((float) (int) *(char *) ((longlong) param_2 + 3) -
                                                           (float) (int) local_resb) + (float) (int) local_resb),
                                    CONCAT12((char) (int) (fVar6 * ((float) (int) *(char *) ((longlong) param_2 +
                                                                                             2) -
                                                                    (float) (int) local_resa) +
                                                           (float) (int) local_resa),
                                             CONCAT11((char) (int) (fVar6 * ((float) (int) *(char *) ((longlong)
                                                                                                              param_2 +
                                                                                                      1
                                                      ) -
                                                                             (float) (int) local_res9) +
                                                                    (float) (int) local_res9),
                                                      (char) (int) (fVar6 * ((float) (int) *(char *) param_2 -
                                                                             (float) (int) local_res8) +
                                                                    (float) (int) local_res8))));
                uVar3 = (int) uVar4 - 1;
                uVar4 = (ulonglong) uVar3;
                lVar5 = lVar5 + -4;
            } while (uVar3 != 0);
        }
        return;
    }
    if (*param_1 == 0) {
        *param_2 = 0;
        return;
    }
    *param_2 = **(undefined4 * *)(param_1 + 4);
    return;
}


void FUN_140308350(uint *param_1, uint *param_2, longlong param_3) {
    undefined *puVar1;
    uint *puVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    uint *puVar9;
    uint *puVar10;
    uint uVar11;
    uint local_res8[2];
    ulonglong uVar8;

    if (*param_1 < 2) {
        if (*param_1 != 0) {
            *param_2 = (uint) * *(byte * *)(param_1 + 4);
            return;
        }
        *param_2 = 0;
        return;
    }
    uVar7 = *(int *) (param_3 + 0x68) - 1;
    uVar8 = (ulonglong) uVar7;
    puVar10 = param_2 + uVar8 + 1;
    puVar1 = (undefined * )(param_3 + uVar8 * 0x18 + 8);
    FUN_14030a400();
    do {
        if (uVar7 == 0) {
            return;
        }
        uVar11 = *param_1;
        uVar3 = *(uint * )(&DAT_ffffffffffffffe8 + (longlong) puVar1);
        puVar10 = puVar10 + -1;
        puVar1 = &DAT_ffffffffffffffe8 + (longlong) puVar1;
        uVar7 = (int) uVar8 - 1;
        uVar8 = (ulonglong) uVar7;
        if (uVar11 == 0) {
            uVar3 = 0;
        } else if (uVar11 == 1) {
            uVar3 = (uint) * *(byte * *)(param_1 + 4);
        } else if (puVar10 == (uint *) 0x0) {
            puVar9 = local_res8;
            LAB_14030845c:
            uVar6 = 0;
            if (uVar11 != 0) {
                uVar4 = uVar11;
                do {
                    uVar5 = (uVar4 - uVar6 >> 1) + uVar6;
                    if (*(uint * )(*(longlong * )(param_1 + 2) + (ulonglong) uVar5 * 4) <= uVar3) {
                        uVar6 = uVar5 + 1;
                        uVar5 = uVar4;
                    }
                    uVar4 = uVar5;
                } while (uVar6 < uVar4);
            }
            if (uVar6 == 0) {
                uVar3 = (uint) * *(byte * *)(param_1 + 4);
                *puVar9 = 0;
            } else {
                uVar3 = (uint)(*(byte * *)(param_1 + 4))[uVar6 - 1];
                if (uVar11 == uVar6) {
                    *puVar9 = uVar11 - 2;
                } else {
                    *puVar9 = uVar6 - 1;
                }
            }
        } else {
            uVar6 = *puVar10;
            puVar9 = (uint * )(*(longlong * )(param_1 + 2) + (ulonglong) uVar6 * 4);
            if ((*puVar9 < uVar3 || *puVar9 == uVar3) &&
                (uVar3 < *(uint * )(*(longlong * )(param_1 + 2) + (ulonglong)(uVar6 + 1) * 4))) {
                uVar3 = (uint) * (byte * )(*(longlong * )(param_1 + 4) + (ulonglong) uVar6);
            } else {
                uVar4 = uVar6 + 1;
                *puVar10 = uVar4;
                uVar11 = *param_1;
                puVar9 = puVar10;
                if ((uVar11 - 1 <= uVar4) ||
                    ((puVar2 = (uint * )(*(longlong * )(param_1 + 2) + (ulonglong) uVar4 * 4),
                            uVar3 <= *puVar2 && *puVar2 != uVar3 ||
                            (*(uint * )(*(longlong * )(param_1 + 2) + (ulonglong)(uVar6 + 2) * 4) <= uVar3))))
                    goto LAB_14030845c;
                uVar3 = (uint) * (byte * )(*(longlong * )(param_1 + 4) + (ulonglong) uVar4);
            }
        }
        *param_2 = uVar3;
    } while (true);
}



// WARNING: Removing unreachable block (ram,0x000140308537)
// WARNING: Removing unreachable block (ram,0x000140308544)
// WARNING: Removing unreachable block (ram,0x000140308540)

void FUN_140308510(uint *param_1, uint param_2, float *param_3, undefined8 param_4, uint *param_5) {
    uint *puVar1;
    longlong lVar2;
    uint uVar3;
    uint uVar4;
    ulonglong uVar6;
    uint uVar7;
    float fVar8;
    uint local_res20[2];
    ulonglong uVar5;

    uVar7 = *param_1;
    if (uVar7 == 0) {
        *param_3 = 0.0;
        return;
    }
    if (uVar7 == 1) {
        *param_3 = (float) (uint) * *(byte * *)(param_1 + 4) * 0.003921569;
        return;
    }
    if (param_5 == (uint *) 0x0) {
        param_5 = local_res20;
    } else {
        uVar3 = *param_5;
        uVar7 = *(uint * )(*(longlong * )(param_1 + 2) + (ulonglong) uVar3 * 4);
        if (uVar7 <= param_2) {
            uVar4 = *(uint * )(*(longlong * )(param_1 + 2) + (ulonglong)(uVar3 + 1) * 4);
            if (param_2 < uVar4) {
                fVar8 = (float) (uint) * (byte * )(*(longlong * )(param_1 + 4) + (ulonglong) uVar3) * 0.003921569;
                *param_3 = ((float) (ulonglong)(param_2 - uVar7) / (float) (ulonglong)(uVar4 - uVar7)) *
                           ((float) (uint) * (byte * )(*(longlong * )(param_1 + 4) + (ulonglong)(uVar3 + 1)) *
                            0.003921569 - fVar8) + fVar8;
                return;
            }
        }
        uVar4 = uVar3 + 1;
        uVar5 = (ulonglong) uVar4;
        *param_5 = uVar4;
        uVar7 = *param_1;
        if (((uVar4 < uVar7 - 1) &&
             (lVar2 = *(longlong * )(param_1 + 2), puVar1 = (uint * )(lVar2 + uVar5 * 4),
                     *puVar1 < param_2 || *puVar1 == param_2)) &&
            (param_2 < *(uint * )(lVar2 + (ulonglong)(uVar3 + 2) * 4))) {
            fVar8 = (float) (uint) * (byte * )(*(longlong * )(param_1 + 4) + uVar5) * 0.003921569;
            *param_3 = ((float) (ulonglong)(param_2 - *(int *) (lVar2 + uVar5 * 4)) /
                        (float) (ulonglong)
                                (uint)(*(int *) (lVar2 + (ulonglong)(uVar3 + 2) * 4) -
                                       *(int *) (lVar2 + uVar5 * 4))) *
                       ((float) (uint) * (byte * )((ulonglong)(uVar3 + 2) + *(longlong * )(param_1 + 4)) *
                        0.003921569 - fVar8) + fVar8;
            return;
        }
    }
    uVar5 = 0;
    if (uVar7 != 0) {
        uVar3 = uVar7;
        do {
            uVar4 = (uVar3 - (int) uVar5 >> 1) + (int) uVar5;
            if (*(uint * )(*(longlong * )(param_1 + 2) + (ulonglong) uVar4 * 4) <= param_2) {
                uVar5 = (ulonglong)(uVar4 + 1);
                uVar4 = uVar3;
            }
            uVar3 = uVar4;
        } while ((uint) uVar5 < uVar3);
    }
    uVar3 = (uint) uVar5;
    uVar6 = (ulonglong)(uVar3 - 1);
    if (uVar3 == 0) {
        *param_3 = (float) (uint) * *(byte * *)(param_1 + 4) * 0.003921569;
        *param_5 = 0;
        return;
    }
    if (uVar7 == uVar3) {
        *param_3 = (float) (uint) * (byte * )(*(longlong * )(param_1 + 4) + uVar6) * 0.003921569;
        *param_5 = *param_1 - 2;
        return;
    }
    lVar2 = *(longlong * )(param_1 + 2);
    fVar8 = (float) (uint) * (byte * )(*(longlong * )(param_1 + 4) + uVar6) * 0.003921569;
    *param_3 = ((float) (ulonglong)(param_2 - *(int *) (lVar2 + uVar6 * 4)) /
                (float) (ulonglong)(uint)(*(int *) (lVar2 + uVar5 * 4) - *(int *) (lVar2 + uVar6 * 4))) *
               ((float) (uint) * (byte * )(uVar5 + *(longlong * )(param_1 + 4)) * 0.003921569 - fVar8) +
               fVar8;
    *param_5 = uVar3 - 1;
    return;
}


void FUN_140308800(longlong param_1, longlong *param_2, undefined4 *param_3) {
    int iVar1;
    longlong lVar2;
    longlong *local_18;
    undefined4 local_10;

    if (*param_2 == 0) {
        *param_2 = param_1;
        local_10 = *param_3;
    } else {
        if (*param_2 == param_1) {
            *(undefined4 * )(*(longlong * )(param_1 + 8) + 8 + param_2[1] * 0x10) = *param_3;
            iVar1 = FUN_14030a510(param_1, param_2);
            if (iVar1 != 0) {
                return;
            }
            FUN_14030a5f0(param_1, param_2);
            return;
        }
        FUN_1403088b0();
        *param_2 = param_1;
        local_10 = *param_3;
    }
    local_18 = param_2;
    lVar2 = FUN_14030a7c0(param_1 + 8, &local_18);
    param_2[1] = lVar2;
    FUN_14030a510(param_1, param_2);
    return;
}


void FUN_1403088b0(longlong param_1, longlong *param_2) {
    ulonglong uVar1;
    longlong lVar2;
    int iVar3;
    ulonglong uVar4;

    if (*param_2 == param_1) {
        *param_2 = 0;
        uVar1 = param_2[1];
        uVar4 = *(longlong * )(param_1 + 0x10) - 1;
        if (uVar4 <= uVar1) {
            FUN_14030a710(param_1 + 8);
            return;
        }
        lVar2 = *(longlong * )(param_1 + 8);
        *(undefined8 * )(lVar2 + uVar1 * 0x10) = *(undefined8 * )(lVar2 + uVar4 * 0x10);
        *(undefined8 * )(lVar2 + 8 + uVar1 * 0x10) = *(undefined8 * )(lVar2 + 8 + uVar4 * 0x10);
        FUN_14030a710(param_1 + 8);
        lVar2 = *(longlong * )(*(longlong * )(param_1 + 8) + uVar1 * 0x10);
        *(ulonglong * )(lVar2 + 8) = uVar1;
        iVar3 = FUN_14030a510(param_1, lVar2);
        if (iVar3 == 0) {
            FUN_14030a5f0(param_1, lVar2);
        }
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140308970(uint *param_1, uint param_2, undefined (*param_3)[16], undefined8 param_4,
                   uint *param_5) {
    uint *puVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    longlong lVar4;
    char cVar5;
    short sVar11;
    short sVar12;
    short sVar13;
    short sVar14;
    short sVar15;
    short sVar16;
    short sVar17;
    short sVar18;
    unkbyte10 Var19;
    undefined auVar20[12];
    undefined auVar21[14];
    unkbyte10 Var22;
    undefined auVar23[12];
    undefined auVar24[14];
    undefined6 uVar25;
    undefined8 uVar26;
    undefined2 uVar27;
    undefined2 uVar28;
    uint uVar29;
    float fVar30;
    uint uVar31;
    ulonglong uVar32;
    ulonglong uVar33;
    ulonglong uVar34;
    ulonglong uVar35;
    uint uVar36;
    uint uVar37;
    int iVar38;
    undefined auVar39[15];
    uint uVar45;
    int iVar46;
    undefined in_XMM0[16];
    undefined auVar40[16];
    int iVar47;
    undefined auVar41[16];
    undefined auVar42[16];
    char in_XMM1_Ba;
    char in_XMM1_Bb;
    undefined uVar48;
    char in_XMM1_Bc;
    undefined uVar49;
    char in_XMM1_Bd;
    undefined uVar50;
    char in_XMM1_Be;
    char in_XMM1_Bf;
    undefined uVar51;
    char in_XMM1_Bg;
    undefined uVar52;
    char in_XMM1_Bh;
    undefined uVar53;
    char cVar54;
    char cVar55;
    char cVar56;
    char cVar57;
    undefined in_XMM2_Ba;
    undefined in_XMM2_Bb;
    undefined in_XMM2_Bc;
    undefined in_XMM2_Bd;
    undefined in_XMM2_Be;
    undefined in_XMM2_Bf;
    undefined in_XMM2_Bg;
    undefined in_XMM2_Bh;
    float fVar58;
    float fVar59;
    float fVar60;
    float fVar61;
    uint local_res20[2];
    char cVar6;
    char cVar7;
    char cVar8;
    char cVar9;
    char cVar10;
    undefined auVar43[16];
    undefined auVar44[16];

    uVar45 = *param_1;
    if (uVar45 == 0) {
        if ((DAT_140c8a5c0 & 1) == 0) {
            DAT_140c8a5c0 = DAT_140c8a5c0 | 1;
        }
        auVar40 = maxps(in_XMM0 & (undefined[16]) 0x0, _DAT_140c8a5b0);
        auVar40 = minps(auVar40, _DAT_140b7b240);
        iVar38 = (int) (SUB164(auVar40, 0) * 255.0 + 0.5);
        uVar45 = (uint)(SUB164(auVar40 >> 0x20, 0) * 255.0 + 0.5);
        iVar46 = (int) (SUB164(auVar40 >> 0x40, 0) * 255.0 + 0.5);
        iVar47 = (int) (SUB164(auVar40 >> 0x60, 0) * 255.0 + 0.5);
        uVar48 = (undefined)(uVar45 >> 8);
        uVar49 = (undefined)(uVar45 >> 0x10);
        cVar54 = (char) iVar38;
        uVar50 = (undefined)((uint) iVar38 >> 8);
        cVar55 = (char) ((uint) iVar38 >> 0x10);
        uVar51 = (undefined)((uint) iVar38 >> 0x18);
        cVar56 = (char) iVar47;
        uVar52 = (undefined)((uint) iVar47 >> 8);
        cVar57 = (char) ((uint) iVar47 >> 0x10);
        uVar53 = (undefined)((uint) iVar47 >> 0x18);
        uVar32 = (ulonglong) CONCAT16(uVar49, CONCAT15(uVar48, CONCAT14((char) uVar45, iVar46)));
        uVar34 = ((ulonglong) uVar45 & 0xff000000) << 0x20 | uVar32;
        Var19 = CONCAT19(uVar50, CONCAT18(cVar54, uVar34));
        auVar20 = CONCAT111(uVar51, CONCAT110(cVar55, Var19));
        auVar21 = CONCAT113(uVar52, CONCAT112(cVar56, auVar20));
        uVar33 = (ulonglong) CONCAT16(uVar49, CONCAT15(uVar48, CONCAT14((char) uVar45, iVar46)));
        uVar35 = ((ulonglong) uVar45 & 0xff000000) << 0x20 | uVar33;
        Var22 = CONCAT19(uVar50, CONCAT18(cVar54, uVar35));
        auVar23 = CONCAT111(uVar51, CONCAT110(cVar55, Var22));
        auVar24 = CONCAT113(uVar52, CONCAT112(cVar56, auVar23));
        sVar11 = (short) iVar46;
        cVar5 = (0 < sVar11) * (sVar11 < 0xff) * (char) iVar46 - (0xff < sVar11);
        sVar12 = (short) (uVar32 >> 0x10);
        sVar13 = (short) (uVar32 >> 0x20);
        cVar6 = (0 < sVar13) * (sVar13 < 0xff) * (char) (uVar32 >> 0x20) - (0xff < sVar13);
        sVar13 = (short) (uVar34 >> 0x30);
        sVar14 = (short) ((unkuint10) Var19 >> 0x40);
        cVar7 = (0 < sVar14) * (sVar14 < 0xff) * cVar54 - (0xff < sVar14);
        sVar14 = SUB122(auVar20 >> 0x50, 0);
        sVar15 = SUB142(auVar21 >> 0x60, 0);
        cVar8 = (0 < sVar15) * (sVar15 < 0xff) * cVar56 - (0xff < sVar15);
        sVar15 = SUB162(CONCAT115(uVar53, CONCAT114(cVar57, auVar21)) >> 0x70, 0);
        cVar9 = (0 < sVar11) * (sVar11 < 0xff) * (char) iVar46 - (0xff < sVar11);
        sVar11 = (short) (uVar33 >> 0x10);
        sVar16 = (short) (uVar33 >> 0x20);
        cVar10 = (0 < sVar16) * (sVar16 < 0xff) * (char) (uVar33 >> 0x20) - (0xff < sVar16);
        sVar16 = (short) (uVar35 >> 0x30);
        sVar17 = (short) ((unkuint10) Var22 >> 0x40);
        cVar54 = (0 < sVar17) * (sVar17 < 0xff) * cVar54 - (0xff < sVar17);
        sVar17 = SUB122(auVar23 >> 0x50, 0);
        sVar18 = SUB142(auVar24 >> 0x60, 0);
        cVar56 = (0 < sVar18) * (sVar18 < 0xff) * cVar56 - (0xff < sVar18);
        sVar18 = SUB162(CONCAT115(uVar53, CONCAT114(cVar57, auVar24)) >> 0x70, 0);
        sVar12 = CONCAT11((0 < sVar12) * (sVar12 < 0xff) * (char) (uVar32 >> 0x10) - (0xff < sVar12),
                          cVar5);
        uVar2 = CONCAT13((0 < sVar13) * (sVar13 < 0xff) * (char) (uVar32 >> 0x30) - (0xff < sVar13),
                         CONCAT12(cVar6, sVar12));
        uVar25 = CONCAT15((0 < sVar14) * (sVar14 < 0xff) * cVar55 - (0xff < sVar14),
                          CONCAT14(cVar7, uVar2));
        uVar26 = CONCAT17((0 < sVar15) * (sVar15 < 0xff) * cVar57 - (0xff < sVar15),
                          CONCAT16(cVar8, uVar25));
        Var19 = CONCAT19((0 < sVar11) * (sVar11 < 0xff) * (char) (uVar33 >> 0x10) - (0xff < sVar11),
                         CONCAT18(cVar9, uVar26));
        auVar20 = CONCAT111((0 < sVar16) * (sVar16 < 0xff) * (char) (uVar33 >> 0x30) - (0xff < sVar16),
                            CONCAT110(cVar10, Var19));
        auVar21 = CONCAT113((0 < sVar17) * (sVar17 < 0xff) * cVar55 - (0xff < sVar17),
                            CONCAT112(cVar54, auVar20));
        in_XMM1_Ba = (0 < sVar12) * (sVar12 < 0xff) * cVar5 - (0xff < sVar12);
        sVar11 = (short) ((uint) uVar2 >> 0x10);
        in_XMM1_Bb = (0 < sVar11) * (sVar11 < 0xff) * cVar6 - (0xff < sVar11);
        sVar11 = (short) ((uint6) uVar25 >> 0x20);
        in_XMM1_Bc = (0 < sVar11) * (sVar11 < 0xff) * cVar7 - (0xff < sVar11);
        sVar11 = (short) ((ulonglong) uVar26 >> 0x30);
        in_XMM1_Bd = (0 < sVar11) * (sVar11 < 0xff) * cVar8 - (0xff < sVar11);
        sVar11 = (short) ((unkuint10) Var19 >> 0x40);
        in_XMM1_Be = (0 < sVar11) * (sVar11 < 0xff) * cVar9 - (0xff < sVar11);
        sVar11 = SUB122(auVar20 >> 0x50, 0);
        in_XMM1_Bf = (0 < sVar11) * (sVar11 < 0xff) * cVar10 - (0xff < sVar11);
        sVar11 = SUB142(auVar21 >> 0x60, 0);
        in_XMM1_Bg = (0 < sVar11) * (sVar11 < 0xff) * cVar54 - (0xff < sVar11);
        sVar11 = SUB162(CONCAT115((0 < sVar18) * (sVar18 < 0xff) * cVar57 - (0xff < sVar18),
                                  CONCAT114(cVar56, auVar21)) >> 0x70, 0);
        in_XMM1_Bh = (0 < sVar11) * (sVar11 < 0xff) * cVar56 - (0xff < sVar11);
        uVar45 = (uint) CONCAT12(in_XMM1_Bc, CONCAT11(in_XMM1_Bb, in_XMM1_Ba));
    } else {
        if (uVar45 != 1) {
            if (param_5 == (uint *) 0x0) {
                param_5 = local_res20;
            } else {
                uVar37 = *param_5;
                uVar45 = *(uint * )(*(longlong * )(param_1 + 2) + (ulonglong) uVar37 * 4);
                if (uVar45 <= param_2) {
                    uVar36 = *(uint * )(*(longlong * )(param_1 + 2) + (ulonglong)(uVar37 + 1) * 4);
                    if (param_2 < uVar36) {
                        uVar2 = *(undefined4 * )(*(longlong * )(param_1 + 4) + (ulonglong)(uVar37 + 1) * 4);
                        uVar29 = CONCAT13(in_XMM1_Bd, CONCAT12(in_XMM1_Bc, CONCAT11(in_XMM1_Bb, in_XMM1_Ba))) ^
                                 CONCAT13(in_XMM1_Bd, CONCAT12(in_XMM1_Bc, CONCAT11(in_XMM1_Bb, in_XMM1_Ba)));
                        uVar48 = (undefined)(uVar29 >> 8);
                        uVar49 = (undefined)(uVar29 >> 0x10);
                        uVar50 = (undefined)(uVar29 >> 0x18);
                        uVar31 = CONCAT13(in_XMM1_Bh, CONCAT12(in_XMM1_Bg, CONCAT11(in_XMM1_Bf, in_XMM1_Be))) ^
                                 CONCAT13(in_XMM1_Bh, CONCAT12(in_XMM1_Bg, CONCAT11(in_XMM1_Bf, in_XMM1_Be)));
                        uVar51 = (undefined)(uVar31 >> 8);
                        uVar52 = (undefined)(uVar31 >> 0x10);
                        uVar53 = (undefined)(uVar31 >> 0x18);
                        uVar3 = *(undefined4 * )(*(longlong * )(param_1 + 4) + (ulonglong) uVar37 * 4);
                        auVar39 = SUB1615(CONCAT412(uVar2, CONCAT48(uVar2, CONCAT44(uVar2, uVar2))), 0) |
                                  SUB1615((undefined[16]) 0xff000000, 0) |
                                  SUB1615((undefined[16]) 0xff00000000000000, 0) |
                                  SUB1615((undefined[16]) 0xff000000, 0) |
                                  SUB1615((undefined[16]) 0xff00000000000000, 0);
                        auVar42 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(
                                                                                                              CONCAT412(SUB164(CONCAT313(SUB163(CONCAT214(SUB162
                                                                                                                                                                  (CONCAT115(uVar53, CONCAT114(
                                                                                                                                                                          SUB151(auVar39 >> 0x38, 0),
                                                                                                                                                                          SUB1514(auVar39, 0)))
                                                                                                                                                                           >> 0x70, 0),
                                                                                                                                                          CONCAT113(uVar52, SUB1513(auVar39, 0)))
                                                                                                                                                        >> 0x68, 0),
                                                                                                                                         CONCAT112(SUB151(auVar39 >> 0x30, 0),
                                                                                                                                                   SUB1512(auVar39, 0))) >> 0x60, 0),
                                                                                                                        CONCAT111(uVar51, SUB1511(auVar39, 0))) >> 0x58, 0),
                                                                                                      CONCAT110(
                                                                                                              SUB151(auVar39
                                                                                                                             >> 0x28,
                                                                                                                     0),
                                                                                                              SUB1510(auVar39,
                                                                                                                      0)))
                                                                                                    >> 0x50, 0),
                                                                                     CONCAT19((char) uVar31,
                                                                                              SUB159(auVar39, 0)))
                                                                                   >> 0x48,
                                                                           0), CONCAT18(SUB151(auVar39 >> 0x20, 0),
                                                                                        SUB158(auVar39, 0))) >> 0x40,
                                                           0), uVar50), (SUB157(auVar39, 0) >> 0x18) << 0x30);
                        auVar41 = CONCAT115(CONCAT101(SUB1610(auVar42 >> 0x30, 0), uVar49),
                                            (SUB155(auVar39, 0) >> 0x10) << 0x20);
                        auVar40 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar41 >> 0x20, 0), uVar48),
                                                              (SUB153(auVar39, 0) >> 8) << 0x10) >> 0x10, 0),
                                            SUB152(auVar39, 0) & 0xff | (ushort)(byte)
                        uVar29 << 8);
                        uVar28 = (undefined2)(uVar31 >> 0x10);
                        iVar38 = SUB164(CONCAT214(uVar28, CONCAT212(SUB162(auVar42 >> 0x30, 0), SUB1612(auVar40, 0))
                        ) >> 0x60, 0);
                        auVar41 = CONCAT610(SUB166(CONCAT412(iVar38, CONCAT210((short) uVar31, SUB1610(auVar40, 0)))
                                                           >> 0x50, 0),
                                            CONCAT28(SUB162(auVar41 >> 0x20, 0), SUB168(auVar40, 0)));
                        uVar27 = (undefined2)(uVar29 >> 0x10);
                        auVar39 = SUB1615(CONCAT412(uVar3, CONCAT48(uVar3, CONCAT44(uVar3, uVar3))), 0) |
                                  SUB1615((undefined[16]) 0xff000000, 0) |
                                  SUB1615((undefined[16]) 0xff00000000000000, 0) |
                                  SUB1615((undefined[16]) 0xff000000, 0) |
                                  SUB1615((undefined[16]) 0xff00000000000000, 0);
                        auVar44 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(
                                                                                                              CONCAT412(SUB164(CONCAT313(SUB163(CONCAT214(SUB162
                                                                                                                                                                  (CONCAT115(uVar53, CONCAT114(
                                                                                                                                                                          SUB151(auVar39 >> 0x38, 0),
                                                                                                                                                                          SUB1514(auVar39, 0)))
                                                                                                                                                                           >> 0x70, 0),
                                                                                                                                                          CONCAT113(uVar52, SUB1513(auVar39, 0)))
                                                                                                                                                        >> 0x68, 0),
                                                                                                                                         CONCAT112(SUB151(auVar39 >> 0x30, 0),
                                                                                                                                                   SUB1512(auVar39, 0))) >> 0x60, 0),
                                                                                                                        CONCAT111(uVar51, SUB1511(auVar39, 0))) >> 0x58, 0),
                                                                                                      CONCAT110(
                                                                                                              SUB151(auVar39
                                                                                                                             >> 0x28,
                                                                                                                     0),
                                                                                                              SUB1510(auVar39,
                                                                                                                      0)))
                                                                                                    >> 0x50, 0),
                                                                                     CONCAT19((char) uVar31,
                                                                                              SUB159(auVar39, 0)))
                                                                                   >> 0x48,
                                                                           0), CONCAT18(SUB151(auVar39 >> 0x20, 0),
                                                                                        SUB158(auVar39, 0))) >> 0x40,
                                                           0), uVar50), (SUB157(auVar39, 0) >> 0x18) << 0x30);
                        auVar43 = CONCAT115(CONCAT101(SUB1610(auVar44 >> 0x30, 0), uVar49),
                                            (SUB155(auVar39, 0) >> 0x10) << 0x20);
                        auVar42 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar43 >> 0x20, 0), uVar48),
                                                              (SUB153(auVar39, 0) >> 8) << 0x10) >> 0x10, 0),
                                            SUB152(auVar39, 0) & 0xff | (ushort)(byte)
                        uVar29 << 8);
                        iVar46 = SUB164(CONCAT214(uVar28, CONCAT212(SUB162(auVar44 >> 0x30, 0), SUB1612(auVar42, 0))
                        ) >> 0x60, 0);
                        auVar43 = CONCAT610(SUB166(CONCAT412(iVar46, CONCAT210((short) uVar31, SUB1610(auVar42, 0)))
                                                           >> 0x50, 0),
                                            CONCAT28(SUB162(auVar43 >> 0x20, 0), SUB168(auVar42, 0)));
                        fVar58 = (float) SUB164(auVar43 >> 0x40, 0) * 0.003921569;
                        fVar59 = (float) SUB164(CONCAT106(CONCAT82(SUB168(auVar43 >> 0x40, 0), uVar27),
                                                          (SUB166(auVar42, 0) >> 0x10) << 0x20) >> 0x20, 0) *
                                 0.003921569;
                        fVar60 = (float) (SUB164(auVar42, 0) & 0xffff | uVar29 << 0x10) * 0.003921569;
                        fVar61 = (float) iVar46 * 0.003921569;
                        fVar30 = (float) (ulonglong)(param_2 - uVar45) / (float) (ulonglong)(uVar36 - uVar45);
                        fVar59 = fVar30 * ((float) SUB164(CONCAT106(CONCAT82(SUB168(auVar41 >> 0x40, 0), uVar27),
                                                                    (SUB166(auVar40, 0) >> 0x10) << 0x20) >> 0x20,
                                                          0) * 0.003921569 - fVar59) + fVar59;
                        *param_3 = CONCAT412(fVar30 * ((float) iVar38 * 0.003921569 - fVar61) + fVar61,
                                             CONCAT48(fVar30 * ((float) (SUB164(auVar40, 0) & 0xffff |
                                                                         uVar29 << 0x10) * 0.003921569 - fVar60) +
                                                      fVar60, CONCAT17((char) ((uint) fVar59 >> 0x18),
                                                                       CONCAT16((char) ((uint) fVar59 >> 0x10),
                                                                                CONCAT15((char) ((uint) fVar59 >> 8
                                                                                ), CONCAT14(SUB41(
                                                                                                    fVar59, 0),
                                                                                            fVar30 * ((float) SUB164(
                                                                                                    auVar41 >> 0x40,
                                                                                                    0) *
                                                                                                      0.003921569 -
                                                                                                      fVar58) +
                                                                                            fVar58))))));
                        return;
                    }
                }
                uVar36 = uVar37 + 1;
                uVar34 = (ulonglong) uVar36;
                *param_5 = uVar36;
                uVar45 = *param_1;
                if (((uVar36 < uVar45 - 1) &&
                     (lVar4 = *(longlong * )(param_1 + 2), puVar1 = (uint * )(lVar4 + uVar34 * 4),
                             *puVar1 < param_2 || *puVar1 == param_2)) &&
                    (param_2 < *(uint * )(lVar4 + (ulonglong)(uVar37 + 2) * 4))) {
                    uVar45 = CONCAT13(in_XMM1_Bd, CONCAT12(in_XMM1_Bc, CONCAT11(in_XMM1_Bb, in_XMM1_Ba))) ^
                             CONCAT13(in_XMM1_Bd, CONCAT12(in_XMM1_Bc, CONCAT11(in_XMM1_Bb, in_XMM1_Ba)));
                    uVar48 = (undefined)(uVar45 >> 8);
                    uVar49 = (undefined)(uVar45 >> 0x10);
                    uVar50 = (undefined)(uVar45 >> 0x18);
                    uVar36 = CONCAT13(in_XMM1_Bh, CONCAT12(in_XMM1_Bg, CONCAT11(in_XMM1_Bf, in_XMM1_Be))) ^
                             CONCAT13(in_XMM1_Bh, CONCAT12(in_XMM1_Bg, CONCAT11(in_XMM1_Bf, in_XMM1_Be)));
                    uVar51 = (undefined)(uVar36 >> 8);
                    uVar52 = (undefined)(uVar36 >> 0x10);
                    uVar53 = (undefined)(uVar36 >> 0x18);
                    uVar2 = *(undefined4 * )(*(longlong * )(param_1 + 4) + (ulonglong)(uVar37 + 2) * 4);
                    uVar3 = *(undefined4 * )(*(longlong * )(param_1 + 4) + uVar34 * 4);
                    auVar39 = SUB1615(CONCAT412(uVar2, CONCAT48(uVar2, CONCAT44(uVar2, uVar2))), 0) |
                              SUB1615((undefined[16]) 0xff000000, 0) |
                              SUB1615((undefined[16]) 0xff00000000000000, 0) |
                              SUB1615((undefined[16]) 0xff000000, 0) |
                              SUB1615((undefined[16]) 0xff00000000000000, 0);
                    auVar42 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(
                                                                                                          CONCAT412(SUB164(CONCAT313(SUB163(CONCAT214(SUB162
                                                                                                                                                              (CONCAT115(uVar53, CONCAT114(
                                                                                                                                                                      SUB151(auVar39 >> 0x38, 0),
                                                                                                                                                                      SUB1514(auVar39, 0)))
                                                                                                                                                                       >> 0x70, 0),
                                                                                                                                                      CONCAT113(uVar52, SUB1513(auVar39, 0)))
                                                                                                                                                    >> 0x68, 0),
                                                                                                                                     CONCAT112(SUB151(auVar39 >> 0x30, 0),
                                                                                                                                               SUB1512(auVar39, 0))) >> 0x60, 0),
                                                                                                                    CONCAT111(uVar51, SUB1511(auVar39, 0))) >> 0x58, 0),
                                                                                                  CONCAT110(
                                                                                                          SUB151(auVar39
                                                                                                                         >> 0x28,
                                                                                                                 0),
                                                                                                          SUB1510(auVar39,
                                                                                                                  0)))
                                                                                                >> 0x50, 0),
                                                                                 CONCAT19((char) uVar36,
                                                                                          SUB159(auVar39, 0))) >> 0x48,
                                                                       0), CONCAT18(SUB151(auVar39 >> 0x20, 0),
                                                                                    SUB158(auVar39, 0))) >> 0x40, 0),
                                                uVar50), (SUB157(auVar39, 0) >> 0x18) << 0x30);
                    auVar41 = CONCAT115(CONCAT101(SUB1610(auVar42 >> 0x30, 0), uVar49),
                                        (SUB155(auVar39, 0) >> 0x10) << 0x20);
                    auVar40 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar41 >> 0x20, 0), uVar48),
                                                          (SUB153(auVar39, 0) >> 8) << 0x10) >> 0x10, 0),
                                        SUB152(auVar39, 0) & 0xff | (ushort)(byte)
                    uVar45 << 8);
                    uVar28 = (undefined2)(uVar36 >> 0x10);
                    iVar38 = SUB164(CONCAT214(uVar28, CONCAT212(SUB162(auVar42 >> 0x30, 0), SUB1612(auVar40, 0)))
                                            >> 0x60, 0);
                    auVar41 = CONCAT610(SUB166(CONCAT412(iVar38, CONCAT210((short) uVar36, SUB1610(auVar40, 0)))
                                                       >> 0x50, 0),
                                        CONCAT28(SUB162(auVar41 >> 0x20, 0), SUB168(auVar40, 0)));
                    uVar27 = (undefined2)(uVar45 >> 0x10);
                    auVar39 = SUB1615(CONCAT412(uVar3, CONCAT48(uVar3, CONCAT44(uVar3, uVar3))), 0) |
                              SUB1615((undefined[16]) 0xff000000, 0) |
                              SUB1615((undefined[16]) 0xff00000000000000, 0) |
                              SUB1615((undefined[16]) 0xff000000, 0) |
                              SUB1615((undefined[16]) 0xff00000000000000, 0);
                    auVar44 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(
                                                                                                          CONCAT412(SUB164(CONCAT313(SUB163(CONCAT214(SUB162
                                                                                                                                                              (CONCAT115(uVar53, CONCAT114(
                                                                                                                                                                      SUB151(auVar39 >> 0x38, 0),
                                                                                                                                                                      SUB1514(auVar39, 0)))
                                                                                                                                                                       >> 0x70, 0),
                                                                                                                                                      CONCAT113(uVar52, SUB1513(auVar39, 0)))
                                                                                                                                                    >> 0x68, 0),
                                                                                                                                     CONCAT112(SUB151(auVar39 >> 0x30, 0),
                                                                                                                                               SUB1512(auVar39, 0))) >> 0x60, 0),
                                                                                                                    CONCAT111(uVar51, SUB1511(auVar39, 0))) >> 0x58, 0),
                                                                                                  CONCAT110(
                                                                                                          SUB151(auVar39
                                                                                                                         >> 0x28,
                                                                                                                 0),
                                                                                                          SUB1510(auVar39,
                                                                                                                  0)))
                                                                                                >> 0x50, 0),
                                                                                 CONCAT19((char) uVar36,
                                                                                          SUB159(auVar39, 0))) >> 0x48,
                                                                       0), CONCAT18(SUB151(auVar39 >> 0x20, 0),
                                                                                    SUB158(auVar39, 0))) >> 0x40, 0),
                                                uVar50), (SUB157(auVar39, 0) >> 0x18) << 0x30);
                    auVar43 = CONCAT115(CONCAT101(SUB1610(auVar44 >> 0x30, 0), uVar49),
                                        (SUB155(auVar39, 0) >> 0x10) << 0x20);
                    auVar42 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar43 >> 0x20, 0), uVar48),
                                                          (SUB153(auVar39, 0) >> 8) << 0x10) >> 0x10, 0),
                                        SUB152(auVar39, 0) & 0xff | (ushort)(byte)
                    uVar45 << 8);
                    iVar46 = SUB164(CONCAT214(uVar28, CONCAT212(SUB162(auVar44 >> 0x30, 0), SUB1612(auVar42, 0)))
                                            >> 0x60, 0);
                    auVar43 = CONCAT610(SUB166(CONCAT412(iVar46, CONCAT210((short) uVar36, SUB1610(auVar42, 0)))
                                                       >> 0x50, 0),
                                        CONCAT28(SUB162(auVar43 >> 0x20, 0), SUB168(auVar42, 0)));
                    fVar58 = (float) SUB164(auVar43 >> 0x40, 0) * 0.003921569;
                    fVar59 = (float) SUB164(CONCAT106(CONCAT82(SUB168(auVar43 >> 0x40, 0), uVar27),
                                                      (SUB166(auVar42, 0) >> 0x10) << 0x20) >> 0x20, 0) *
                             0.003921569;
                    fVar60 = (float) (SUB164(auVar42, 0) & 0xffff | uVar45 << 0x10) * 0.003921569;
                    fVar61 = (float) iVar46 * 0.003921569;
                    fVar30 = (float) (ulonglong)(param_2 - *(int *) (lVar4 + uVar34 * 4)) /
                             (float) (ulonglong)
                                     (uint)(*(int *) (lVar4 + (ulonglong)(uVar37 + 2) * 4) -
                                            *(int *) (lVar4 + uVar34 * 4));
                    fVar59 = fVar30 * ((float) SUB164(CONCAT106(CONCAT82(SUB168(auVar41 >> 0x40, 0), uVar27),
                                                                (SUB166(auVar40, 0) >> 0x10) << 0x20) >> 0x20, 0)
                                       * 0.003921569 - fVar59) + fVar59;
                    *param_3 = CONCAT412(fVar30 * ((float) iVar38 * 0.003921569 - fVar61) + fVar61,
                                         CONCAT48(fVar30 * ((float) (SUB164(auVar40, 0) & 0xffff |
                                                                     uVar45 << 0x10) * 0.003921569 - fVar60) +
                                                  fVar60, CONCAT17((char) ((uint) fVar59 >> 0x18),
                                                                   CONCAT16((char) ((uint) fVar59 >> 0x10),
                                                                            CONCAT15((char) ((uint) fVar59 >> 8),
                                                                                     CONCAT14(SUB41(fVar59, 0),
                                                                                              fVar30 * ((float)
                                                                                                                SUB164(auVar41
                                                                                                                               >> 0x40,
                                                                                                                       0) *
                                                                                                        0.003921569 -
                                                                                                        fVar58)
                                                                                              + fVar58))))));
                    return;
                }
            }
            uVar34 = 0;
            if (uVar45 != 0) {
                uVar37 = uVar45;
                do {
                    uVar36 = (uVar37 - (int) uVar34 >> 1) + (int) uVar34;
                    if (*(uint * )(*(longlong * )(param_1 + 2) + (ulonglong) uVar36 * 4) <= param_2) {
                        uVar34 = (ulonglong)(uVar36 + 1);
                        uVar36 = uVar37;
                    }
                    uVar37 = uVar36;
                } while ((uint) uVar34 < uVar37);
            }
            uVar29 = (uint) uVar34;
            uVar35 = (ulonglong)(uVar29 - 1);
            uVar37 = CONCAT13(in_XMM1_Bd, CONCAT12(in_XMM1_Bc, CONCAT11(in_XMM1_Bb, in_XMM1_Ba))) ^
                     CONCAT13(in_XMM1_Bd, CONCAT12(in_XMM1_Bc, CONCAT11(in_XMM1_Bb, in_XMM1_Ba)));
            uVar48 = (undefined)(uVar37 >> 8);
            uVar49 = (undefined)(uVar37 >> 0x10);
            uVar50 = (undefined)(uVar37 >> 0x18);
            uVar36 = CONCAT13(in_XMM1_Bh, CONCAT12(in_XMM1_Bg, CONCAT11(in_XMM1_Bf, in_XMM1_Be))) ^
                     CONCAT13(in_XMM1_Bh, CONCAT12(in_XMM1_Bg, CONCAT11(in_XMM1_Bf, in_XMM1_Be)));
            uVar51 = (undefined)(uVar36 >> 8);
            uVar52 = (undefined)(uVar36 >> 0x10);
            uVar53 = (undefined)(uVar36 >> 0x18);
            uVar27 = (undefined2)(uVar37 >> 0x10);
            uVar28 = (undefined2)(uVar36 >> 0x10);
            if (uVar29 != 0) {
                if (uVar45 != uVar29) {
                    uVar45 = CONCAT13(in_XMM2_Bd, CONCAT12(in_XMM2_Bc, CONCAT11(in_XMM2_Bb, in_XMM2_Ba))) ^
                             CONCAT13(in_XMM2_Bd, CONCAT12(in_XMM2_Bc, CONCAT11(in_XMM2_Bb, in_XMM2_Ba)));
                    uVar48 = (undefined)(uVar45 >> 8);
                    uVar49 = (undefined)(uVar45 >> 0x10);
                    uVar50 = (undefined)(uVar45 >> 0x18);
                    uVar37 = CONCAT13(in_XMM2_Bh, CONCAT12(in_XMM2_Bg, CONCAT11(in_XMM2_Bf, in_XMM2_Be))) ^
                             CONCAT13(in_XMM2_Bh, CONCAT12(in_XMM2_Bg, CONCAT11(in_XMM2_Bf, in_XMM2_Be)));
                    uVar51 = (undefined)(uVar37 >> 8);
                    uVar52 = (undefined)(uVar37 >> 0x10);
                    uVar53 = (undefined)(uVar37 >> 0x18);
                    uVar2 = *(undefined4 * )(*(longlong * )(param_1 + 4) + uVar34 * 4);
                    uVar3 = *(undefined4 * )(*(longlong * )(param_1 + 4) + uVar35 * 4);
                    lVar4 = *(longlong * )(param_1 + 2);
                    auVar39 = SUB1615(CONCAT412(uVar2, CONCAT48(uVar2, CONCAT44(uVar2, uVar2))), 0) |
                              SUB1615((undefined[16]) 0xff000000, 0) |
                              SUB1615((undefined[16]) 0xff00000000000000, 0) |
                              SUB1615((undefined[16]) 0xff000000, 0) |
                              SUB1615((undefined[16]) 0xff00000000000000, 0);
                    auVar42 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(
                                                                                                          CONCAT412(SUB164(CONCAT313(SUB163(CONCAT214(SUB162
                                                                                                                                                              (CONCAT115(uVar53, CONCAT114(
                                                                                                                                                                      SUB151(auVar39 >> 0x38, 0),
                                                                                                                                                                      SUB1514(auVar39, 0)))
                                                                                                                                                                       >> 0x70, 0),
                                                                                                                                                      CONCAT113(uVar52, SUB1513(auVar39, 0)))
                                                                                                                                                    >> 0x68, 0),
                                                                                                                                     CONCAT112(SUB151(auVar39 >> 0x30, 0),
                                                                                                                                               SUB1512(auVar39, 0))) >> 0x60, 0),
                                                                                                                    CONCAT111(uVar51, SUB1511(auVar39, 0))) >> 0x58, 0),
                                                                                                  CONCAT110(
                                                                                                          SUB151(auVar39
                                                                                                                         >> 0x28,
                                                                                                                 0),
                                                                                                          SUB1510(auVar39,
                                                                                                                  0)))
                                                                                                >> 0x50, 0),
                                                                                 CONCAT19((char) uVar37,
                                                                                          SUB159(auVar39, 0))) >> 0x48,
                                                                       0), CONCAT18(SUB151(auVar39 >> 0x20, 0),
                                                                                    SUB158(auVar39, 0))) >> 0x40, 0),
                                                uVar50), (SUB157(auVar39, 0) >> 0x18) << 0x30);
                    auVar41 = CONCAT115(CONCAT101(SUB1610(auVar42 >> 0x30, 0), uVar49),
                                        (SUB155(auVar39, 0) >> 0x10) << 0x20);
                    auVar40 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar41 >> 0x20, 0), uVar48),
                                                          (SUB153(auVar39, 0) >> 8) << 0x10) >> 0x10, 0),
                                        SUB152(auVar39, 0) & 0xff | (ushort)(byte)
                    uVar45 << 8);
                    uVar28 = (undefined2)(uVar37 >> 0x10);
                    iVar38 = SUB164(CONCAT214(uVar28, CONCAT212(SUB162(auVar42 >> 0x30, 0), SUB1612(auVar40, 0)))
                                            >> 0x60, 0);
                    auVar41 = CONCAT610(SUB166(CONCAT412(iVar38, CONCAT210((short) uVar37, SUB1610(auVar40, 0)))
                                                       >> 0x50, 0),
                                        CONCAT28(SUB162(auVar41 >> 0x20, 0), SUB168(auVar40, 0)));
                    uVar27 = (undefined2)(uVar45 >> 0x10);
                    auVar39 = SUB1615(CONCAT412(uVar3, CONCAT48(uVar3, CONCAT44(uVar3, uVar3))), 0) |
                              SUB1615((undefined[16]) 0xff000000, 0) |
                              SUB1615((undefined[16]) 0xff00000000000000, 0) |
                              SUB1615((undefined[16]) 0xff000000, 0) |
                              SUB1615((undefined[16]) 0xff00000000000000, 0);
                    auVar44 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(
                                                                                                          CONCAT412(SUB164(CONCAT313(SUB163(CONCAT214(SUB162
                                                                                                                                                              (CONCAT115(uVar53, CONCAT114(
                                                                                                                                                                      SUB151(auVar39 >> 0x38, 0),
                                                                                                                                                                      SUB1514(auVar39, 0)))
                                                                                                                                                                       >> 0x70, 0),
                                                                                                                                                      CONCAT113(uVar52, SUB1513(auVar39, 0)))
                                                                                                                                                    >> 0x68, 0),
                                                                                                                                     CONCAT112(SUB151(auVar39 >> 0x30, 0),
                                                                                                                                               SUB1512(auVar39, 0))) >> 0x60, 0),
                                                                                                                    CONCAT111(uVar51, SUB1511(auVar39, 0))) >> 0x58, 0),
                                                                                                  CONCAT110(
                                                                                                          SUB151(auVar39
                                                                                                                         >> 0x28,
                                                                                                                 0),
                                                                                                          SUB1510(auVar39,
                                                                                                                  0)))
                                                                                                >> 0x50, 0),
                                                                                 CONCAT19((char) uVar37,
                                                                                          SUB159(auVar39, 0))) >> 0x48,
                                                                       0), CONCAT18(SUB151(auVar39 >> 0x20, 0),
                                                                                    SUB158(auVar39, 0))) >> 0x40, 0),
                                                uVar50), (SUB157(auVar39, 0) >> 0x18) << 0x30);
                    auVar43 = CONCAT115(CONCAT101(SUB1610(auVar44 >> 0x30, 0), uVar49),
                                        (SUB155(auVar39, 0) >> 0x10) << 0x20);
                    auVar42 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar43 >> 0x20, 0), uVar48),
                                                          (SUB153(auVar39, 0) >> 8) << 0x10) >> 0x10, 0),
                                        SUB152(auVar39, 0) & 0xff | (ushort)(byte)
                    uVar45 << 8);
                    iVar46 = SUB164(CONCAT214(uVar28, CONCAT212(SUB162(auVar44 >> 0x30, 0), SUB1612(auVar42, 0)))
                                            >> 0x60, 0);
                    auVar43 = CONCAT610(SUB166(CONCAT412(iVar46, CONCAT210((short) uVar37, SUB1610(auVar42, 0)))
                                                       >> 0x50, 0),
                                        CONCAT28(SUB162(auVar43 >> 0x20, 0), SUB168(auVar42, 0)));
                    fVar58 = (float) SUB164(auVar43 >> 0x40, 0) * 0.003921569;
                    fVar59 = (float) SUB164(CONCAT106(CONCAT82(SUB168(auVar43 >> 0x40, 0), uVar27),
                                                      (SUB166(auVar42, 0) >> 0x10) << 0x20) >> 0x20, 0) *
                             0.003921569;
                    fVar60 = (float) (SUB164(auVar42, 0) & 0xffff | uVar45 << 0x10) * 0.003921569;
                    fVar61 = (float) iVar46 * 0.003921569;
                    fVar30 = (float) (ulonglong)(param_2 - *(int *) (lVar4 + uVar35 * 4)) /
                             (float) (ulonglong)
                                     (uint)(*(int *) (lVar4 + uVar34 * 4) - *(int *) (lVar4 + uVar35 * 4));
                    fVar59 = fVar30 * ((float) SUB164(CONCAT106(CONCAT82(SUB168(auVar41 >> 0x40, 0), uVar27),
                                                                (SUB166(auVar40, 0) >> 0x10) << 0x20) >> 0x20, 0)
                                       * 0.003921569 - fVar59) + fVar59;
                    *param_3 = CONCAT412(fVar30 * ((float) iVar38 * 0.003921569 - fVar61) + fVar61,
                                         CONCAT48(fVar30 * ((float) (SUB164(auVar40, 0) & 0xffff |
                                                                     uVar45 << 0x10) * 0.003921569 - fVar60) +
                                                  fVar60, CONCAT17((char) ((uint) fVar59 >> 0x18),
                                                                   CONCAT16((char) ((uint) fVar59 >> 0x10),
                                                                            CONCAT15((char) ((uint) fVar59 >> 8),
                                                                                     CONCAT14(SUB41(fVar59, 0),
                                                                                              fVar30 * ((float)
                                                                                                                SUB164(auVar41
                                                                                                                               >> 0x40,
                                                                                                                       0) *
                                                                                                        0.003921569 -
                                                                                                        fVar58)
                                                                                              + fVar58))))));
                    *param_5 = uVar29 - 1;
                    return;
                }
                uVar2 = *(undefined4 * )(*(longlong * )(param_1 + 4) + uVar35 * 4);
                auVar39 = SUB1615(CONCAT412(uVar2, CONCAT48(uVar2, CONCAT44(uVar2, uVar2))), 0) |
                          SUB1615((undefined[16]) 0xff000000, 0) |
                          SUB1615((undefined[16]) 0xff00000000000000, 0) |
                          SUB1615((undefined[16]) 0xff000000, 0) |
                          SUB1615((undefined[16]) 0xff00000000000000, 0);
                auVar42 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(
                                                                                                      CONCAT412(SUB164(CONCAT313(SUB163(CONCAT214(SUB162
                                                                                                                                                          (CONCAT115(uVar53, CONCAT114(
                                                                                                                                                                  SUB151(auVar39 >> 0x38, 0),
                                                                                                                                                                  SUB1514(auVar39, 0)))
                                                                                                                                                                   >> 0x70, 0),
                                                                                                                                                  CONCAT113(uVar52, SUB1513(auVar39, 0)))
                                                                                                                                                >> 0x68, 0),
                                                                                                                                 CONCAT112(SUB151(auVar39 >> 0x30, 0),
                                                                                                                                           SUB1512(auVar39, 0))) >> 0x60, 0),
                                                                                                                CONCAT111(uVar51, SUB1511(auVar39, 0))) >> 0x58, 0),
                                                                                              CONCAT110(SUB151(auVar39
                                                                                                                       >> 0x28,
                                                                                                               0),
                                                                                                        SUB1510(auVar39,
                                                                                                                0)))
                                                                                            >> 0x50, 0),
                                                                             CONCAT19((char) uVar36,
                                                                                      SUB159(auVar39, 0))) >> 0x48,
                                                                   0), CONCAT18(SUB151(auVar39 >> 0x20, 0),
                                                                                SUB158(auVar39, 0))) >> 0x40, 0),
                                            uVar50), (SUB157(auVar39, 0) >> 0x18) << 0x30);
                auVar41 = CONCAT115(CONCAT101(SUB1610(auVar42 >> 0x30, 0), uVar49),
                                    (SUB155(auVar39, 0) >> 0x10) << 0x20);
                auVar40 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar41 >> 0x20, 0), uVar48),
                                                      (SUB153(auVar39, 0) >> 8) << 0x10) >> 0x10, 0),
                                    SUB152(auVar39, 0) & 0xff | (ushort)(byte)
                uVar37 << 8);
                iVar38 = SUB164(CONCAT214(uVar28, CONCAT212(SUB162(auVar42 >> 0x30, 0), SUB1612(auVar40, 0))) >>
                                                                                                              0x60, 0);
                auVar41 = CONCAT610(SUB166(CONCAT412(iVar38, CONCAT210((short) uVar36, SUB1610(auVar40, 0))) >>
                                                                                                             0x50, 0),
                                    CONCAT28(SUB162(auVar41 >> 0x20, 0), SUB168(auVar40, 0)));
                fVar30 = (float) SUB164(CONCAT106(CONCAT82(SUB168(auVar41 >> 0x40, 0), uVar27),
                                                  (SUB166(auVar40, 0) >> 0x10) << 0x20) >> 0x20, 0) *
                         0.003921569;
                fVar59 = (float) (SUB164(auVar40, 0) & 0xffff | uVar37 << 0x10) * 0.003921569;
                fVar58 = (float) iVar38 * 0.003921569;
                *param_3 = CONCAT115((char) ((uint) fVar58 >> 0x18),
                                     CONCAT114((char) ((uint) fVar58 >> 0x10),
                                               CONCAT113((char) ((uint) fVar58 >> 8),
                                                         CONCAT112(SUB41(fVar58, 0),
                                                                   CONCAT111((char) ((uint) fVar59 >> 0x18),
                                                                             CONCAT110((char) ((uint) fVar59
                                                                                               >> 0x10),
                                                                                       CONCAT19((char) ((uint
                                                                                                ) fVar59 >> 8),
                                                                                                CONCAT18(SUB41(fVar59,
                                                                                                               0),
                                                                                                         CONCAT17(
                                                                                                                 (char) ((uint) fVar30
                                                                                                                         >> 0x18),
                                                                                                                 CONCAT16(
                                                                                                                         (char) ((uint) fVar30
                                                                                                                                 >>
                                                                                                                                 0x10),
                                                                                                                         CONCAT15(
                                                                                                                                 (char) ((uint)
                                                                                                                                         fVar30
                                                                                                                                         >> 8),
                                                                                                                                 CONCAT14(
                                                                                                                                         SUB41(fVar30,
                                                                                                                                               0),
                                                                                                                                         (float) SUB164(
                                                                                                                                                 auVar41
                                                                                                                                                         >> 0x40,
                                                                                                                                                 0) *
                                                                                                                                         0.003921569))))))))))));
                *param_5 = *param_1 - 2;
                return;
            }
            uVar2 = **(undefined4 * *)(param_1 + 4);
            auVar39 = SUB1615(CONCAT412(uVar2, CONCAT48(uVar2, CONCAT44(uVar2, uVar2))), 0) |
                      SUB1615((undefined[16]) 0xff000000, 0) |
                      SUB1615((undefined[16]) 0xff00000000000000, 0) |
                      SUB1615((undefined[16]) 0xff000000, 0) |
                      SUB1615((undefined[16]) 0xff00000000000000, 0);
            auVar42 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412
                                                                                                         (SUB164(CONCAT313(
                                                                                                                         SUB163(CONCAT214(
                                                                                                                                        SUB162(
                                                                                                                                                CONCAT115(
                                                                                                                                                        uVar53,
                                                                                                                                                        CONCAT114(
                                                                                                                                                                SUB151(auVar39
                                                                                                                                                                               >> 0x38,
                                                                                                                                                                       0),
                                                                                                                                                                SUB1514(auVar39,
                                                                                                                                                                        0)))
                                                                                                                                                        >>
                                                                                                                                                        0x70,
                                                                                                                                                0),
                                                                                                                                        CONCAT113(
                                                                                                                                                uVar52,
                                                                                                                                                SUB1513(auVar39,
                                                                                                                                                        0)))
                                                                                                                                        >>
                                                                                                                                        0x68,
                                                                                                                                0),
                                                                                                                         CONCAT112(
                                                                                                                                 SUB151(auVar39
                                                                                                                                                >> 0x30,
                                                                                                                                        0),
                                                                                                                                 SUB1512(auVar39,
                                                                                                                                         0)))
                                                                                                                         >> 0x60,
                                                                                                                 0),
                                                                                                          CONCAT111(
                                                                                                                  uVar51,
                                                                                                                  SUB1511(auVar39,
                                                                                                                          0)))
                                                                                                         >> 0x58, 0),
                                                                                          CONCAT110(SUB151(auVar39
                                                                                                                   >> 0x28,
                                                                                                           0),
                                                                                                    SUB1510(auVar39,
                                                                                                            0)))
                                                                                        >> 0x50, 0),
                                                                         CONCAT19((char) uVar36, SUB159(auVar39, 0)))
                                                                       >> 0x48,
                                                               0), CONCAT18(SUB151(auVar39 >> 0x20, 0),
                                                                            SUB158(auVar39, 0))) >> 0x40, 0), uVar50),
                               (SUB157(auVar39, 0) >> 0x18) << 0x30);
            auVar41 = CONCAT115(CONCAT101(SUB1610(auVar42 >> 0x30, 0), uVar49),
                                (SUB155(auVar39, 0) >> 0x10) << 0x20);
            auVar40 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar41 >> 0x20, 0), uVar48),
                                                  (SUB153(auVar39, 0) >> 8) << 0x10) >> 0x10, 0),
                                SUB152(auVar39, 0) & 0xff | (ushort)(byte)
            uVar37 << 8);
            iVar38 = SUB164(CONCAT214(uVar28, CONCAT212(SUB162(auVar42 >> 0x30, 0), SUB1612(auVar40, 0))) >>
                                                                                                          0x60, 0);
            auVar41 = CONCAT610(SUB166(CONCAT412(iVar38, CONCAT210((short) uVar36, SUB1610(auVar40, 0))) >>
                                                                                                         0x50, 0),
                                CONCAT28(SUB162(auVar41 >> 0x20, 0), SUB168(auVar40, 0)));
            fVar30 = (float) SUB164(CONCAT106(CONCAT82(SUB168(auVar41 >> 0x40, 0), uVar27),
                                              (SUB166(auVar40, 0) >> 0x10) << 0x20) >> 0x20, 0) * 0.003921569;
            fVar59 = (float) (SUB164(auVar40, 0) & 0xffff | uVar37 << 0x10) * 0.003921569;
            fVar58 = (float) iVar38 * 0.003921569;
            *param_3 = CONCAT115((char) ((uint) fVar58 >> 0x18),
                                 CONCAT114((char) ((uint) fVar58 >> 0x10),
                                           CONCAT113((char) ((uint) fVar58 >> 8),
                                                     CONCAT112(SUB41(fVar58, 0),
                                                               CONCAT111((char) ((uint) fVar59 >> 0x18),
                                                                         CONCAT110((char) ((uint) fVar59 >>
                                                                                                         0x10),
                                                                                   CONCAT19((char) ((uint)
                                                                                                    fVar59 >> 8),
                                                                                            CONCAT18(SUB41(fVar59, 0),
                                                                                                     CONCAT17(
                                                                                                             (char) ((uint) fVar30
                                                                                                                     >> 0x18),
                                                                                                             CONCAT16(
                                                                                                                     (char) ((uint) fVar30
                                                                                                                             >>
                                                                                                                             0x10),
                                                                                                                     CONCAT15(
                                                                                                                             (char) ((uint)
                                                                                                                                     fVar30
                                                                                                                                     >> 8),
                                                                                                                             CONCAT14(
                                                                                                                                     SUB41(fVar30,
                                                                                                                                           0),
                                                                                                                                     (float) SUB164(
                                                                                                                                             auVar41
                                                                                                                                                     >> 0x40,
                                                                                                                                             0) *
                                                                                                                                     0.003921569))))))))))));
            *param_5 = 0;
            return;
        }
        uVar45 = **(uint * *)(param_1 + 4);
    }
    uVar37 = CONCAT13(in_XMM1_Bd, CONCAT12(in_XMM1_Bc, CONCAT11(in_XMM1_Bb, in_XMM1_Ba))) ^
             CONCAT13(in_XMM1_Bd, CONCAT12(in_XMM1_Bc, CONCAT11(in_XMM1_Bb, in_XMM1_Ba)));
    uVar36 = CONCAT13(in_XMM1_Bh, CONCAT12(in_XMM1_Bg, CONCAT11(in_XMM1_Bf, in_XMM1_Be))) ^
             CONCAT13(in_XMM1_Bh, CONCAT12(in_XMM1_Bg, CONCAT11(in_XMM1_Bf, in_XMM1_Be)));
    auVar40 = CONCAT412(uVar45, CONCAT48(uVar45, CONCAT44(uVar45, uVar45))) |
              (undefined[16]) 0xff000000ff000000;
    auVar42 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                                          SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                                           ((char) (uVar36 >> 0x18),
                                                                                                                                            CONCAT114((char) (uVar45 >> 0x18),
                                                                                                                                                      SUB1614(auVar40, 0))) >> 0x70, 0),
                                                                                                                            CONCAT113((char) (uVar36 >> 0x10),
                                                                                                                                      SUB1613(auVar40, 0))) >> 0x68, 0),
                                                                                                           CONCAT112(SUB161(auVar40 >> 0x30, 0),
                                                                                                                     SUB1612(auVar40, 0))) >> 0x60, 0),
                                                                                          CONCAT111((char) (uVar36 >> 8), SUB1611(auVar40, 0)))
                                                                                                 >> 0x58, 0),
                                                                                  CONCAT110(SUB161(auVar40 >> 0x28, 0),
                                                                                            SUB1610(auVar40, 0)))
                                                                                >> 0x50, 0),
                                                                 CONCAT19((char) uVar36, SUB169(auVar40, 0))) >> 0x48,
                                                       0), CONCAT18(SUB161(auVar40 >> 0x20, 0),
                                                                    SUB168(auVar40, 0))) >> 0x40, 0),
                                (char) (uVar37 >> 0x18)) |
                       SUB169((undefined[16]) 0xff000000000000 >> 0x38, 0),
                       (SUB167(auVar40, 0) >> 0x18) << 0x30);
    auVar41 = CONCAT115(CONCAT101(SUB1610(auVar42 >> 0x30, 0), (char) (uVar37 >> 0x10)),
                        (SUB165(auVar40, 0) >> 0x10) << 0x20);
    auVar40 = CONCAT142(SUB1614(CONCAT133(SUB1613(CONCAT124(SUB1612(auVar41 >> 0x20, 0),
                                                            (uVar37 >> 8) << 0x18) >> 0x18, 0),
                                          (SUB163(auVar40, 0) >> 8) << 0x10) >> 0x10, 0),
                        SUB162(auVar40, 0) & 0xff | (ushort)(byte)
    uVar37 << 8);
    iVar38 = SUB164(CONCAT214((short) (uVar36 >> 0x10),
                              CONCAT212(SUB162(auVar42 >> 0x30, 0), SUB1612(auVar40, 0))) >> 0x60, 0);
    auVar41 = CONCAT610(SUB166(CONCAT412(iVar38, CONCAT210((short) uVar36, SUB1610(auVar40, 0))) >> 0x50, 0
    ), CONCAT28(SUB162(auVar41 >> 0x20, 0), SUB168(auVar40, 0)));
    fVar30 = (float) SUB164(CONCAT106(CONCAT82(SUB168(auVar41 >> 0x40, 0), (short) (uVar37 >> 0x10)),
                                      (SUB166(auVar40, 0) >> 0x10) << 0x20) >> 0x20, 0) * 0.003921569;
    fVar59 = (float) (SUB164(auVar40, 0) & 0xffff | uVar37 << 0x10) * 0.003921569;
    fVar58 = (float) iVar38 * 0.003921569;
    *param_3 = CONCAT115((char) ((uint) fVar58 >> 0x18),
                         CONCAT114((char) ((uint) fVar58 >> 0x10),
                                   CONCAT113((char) ((uint) fVar58 >> 8),
                                             CONCAT112(SUB41(fVar58, 0),
                                                       CONCAT111((char) ((uint) fVar59 >> 0x18),
                                                                 CONCAT110((char) ((uint) fVar59 >> 0x10
                                                                 ), CONCAT19((char) ((
                                                                                     uint) fVar59 >> 8),
                                                                             CONCAT18(SUB41(fVar59, 0),
                                                                                      CONCAT17((char) ((uint) fVar30
                                                                                                       >> 0x18),
                                                                                               CONCAT16(
                                                                                                       (char) ((uint) fVar30
                                                                                                               >>
                                                                                                               0x10),
                                                                                                       CONCAT15(
                                                                                                               (char) ((uint)
                                                                                                                       fVar30
                                                                                                                       >> 8),
                                                                                                               CONCAT14(
                                                                                                                       SUB41(fVar30,
                                                                                                                             0),
                                                                                                                       (float) SUB164(
                                                                                                                               auVar41
                                                                                                                                       >> 0x40,
                                                                                                                               0) *
                                                                                                                       0.003921569))))))))))));
    return;
}


void FUN_140308d20(uint *param_1, uint param_2, undefined *param_3, undefined8 param_4, uint *param_5) {
    uint *puVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    ulonglong uVar5;
    uint uVar6;
    uint local_res20[2];

    uVar6 = *param_1;
    if (uVar6 == 0) {
        *param_3 = 0;
        return;
    }
    if (uVar6 == 1) {
        *param_3 = **(undefined * *)(param_1 + 4);
        return;
    }
    if (param_5 == (uint *) 0x0) {
        param_5 = local_res20;
        LAB_140308db3:
        uVar4 = 0;
        if (uVar6 != 0) {
            uVar3 = uVar6;
            do {
                uVar2 = (uVar3 - uVar4 >> 1) + uVar4;
                if (*(uint * )(*(longlong * )(param_1 + 2) + (ulonglong) uVar2 * 4) <= param_2) {
                    uVar4 = uVar2 + 1;
                    uVar2 = uVar3;
                }
                uVar3 = uVar2;
            } while (uVar4 < uVar3);
        }
        if (uVar4 != 0) {
            *param_3 = (*(undefined * *)(param_1 + 4))[uVar4 - 1];
            if (uVar6 != uVar4) {
                *param_5 = uVar4 - 1;
                return;
            }
            *param_5 = *param_1 - 2;
            return;
        }
        *param_3 = **(undefined * *)(param_1 + 4);
        *param_5 = 0;
        return;
    }
    uVar4 = *param_5;
    uVar5 = (ulonglong) uVar4;
    puVar1 = (uint * )(*(longlong * )(param_1 + 2) + uVar5 * 4);
    if ((param_2 <= *puVar1 && *puVar1 != param_2) ||
        (*(uint * )(*(longlong * )(param_1 + 2) + (ulonglong)(uVar4 + 1) * 4) <= param_2)) {
        uVar3 = uVar4 + 1;
        uVar5 = (ulonglong) uVar3;
        *param_5 = uVar3;
        uVar6 = *param_1;
        if ((uVar6 - 1 <= uVar3) ||
            ((puVar1 = (uint * )(*(longlong * )(param_1 + 2) + uVar5 * 4),
                    param_2 <= *puVar1 && *puVar1 != param_2 ||
                    (*(uint * )(*(longlong * )(param_1 + 2) + (ulonglong)(uVar4 + 2) * 4) <= param_2))))
            goto LAB_140308db3;
    }
    *param_3 = *(undefined * )(uVar5 + *(longlong * )(param_1 + 4));
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140308e40(uint *param_1, uint param_2, undefined (*param_3)[16], undefined8 param_4,
                   uint *param_5) {
    uint *puVar1;
    longlong lVar2;
    undefined4 *puVar3;
    char cVar4;
    byte bVar8;
    short sVar9;
    short sVar10;
    undefined2 uVar11;
    undefined2 uVar12;
    uint6 uVar13;
    uint6 uVar14;
    ulonglong uVar15;
    ulonglong uVar16;
    uint uVar17;
    uint uVar18;
    int iVar19;
    int iVar27;
    undefined8 uVar20;
    int iVar30;
    undefined in_XMM0[16];
    undefined auVar22[16];
    ushort uVar28;
    int iVar31;
    undefined auVar23[16];
    ushort uVar29;
    undefined auVar24[16];
    undefined auVar25[16];
    undefined auVar26[16];
    short sVar32;
    uint3 uVar33;
    float fVar36;
    undefined in_XMM2_Ba;
    undefined in_XMM2_Bb;
    undefined uVar39;
    undefined in_XMM2_Bc;
    undefined uVar40;
    undefined in_XMM2_Bd;
    undefined uVar41;
    undefined in_XMM2_Be;
    undefined in_XMM2_Bf;
    undefined uVar42;
    undefined in_XMM2_Bg;
    undefined uVar43;
    undefined in_XMM2_Bh;
    undefined uVar44;
    float fVar45;
    float fVar46;
    float fVar47;
    float fVar48;
    uint local_res20[2];
    char cVar5;
    char cVar6;
    char cVar7;
    undefined auVar21[12];
    undefined4 uVar34;
    uint uVar35;
    undefined6 uVar37;
    uint7 uVar38;

    uVar35 = *param_1;
    if (uVar35 == 0) {
        if ((DAT_140dc0dc0 & 1) == 0) {
            DAT_140dc0dc0 = DAT_140dc0dc0 | 1;
        }
        auVar22 = maxps(in_XMM0 & (undefined[16]) 0x0, _DAT_140dc0dd0);
        auVar22 = minps(auVar22, _DAT_140b7b240);
        iVar19 = (int) (SUB164(auVar22, 0) * 255.0 + 0.5);
        iVar27 = (int) (SUB164(auVar22 >> 0x20, 0) * 255.0 + 0.5);
        iVar30 = (int) (SUB164(auVar22 >> 0x40, 0) * 255.0 + 0.5);
        iVar31 = (int) (SUB164(auVar22 >> 0x60, 0) * 255.0 + 0.5);
        sVar9 = (short) iVar30;
        cVar4 = (0 < sVar9) * (sVar9 < 0xff) * (char) iVar30 - (0xff < sVar9);
        sVar9 = (short) ((uint) iVar30 >> 0x10);
        sVar32 = CONCAT11((0 < sVar9) * (sVar9 < 0xff) * (char) ((uint) iVar30 >> 0x10) - (0xff < sVar9),
                          cVar4);
        sVar9 = (short) iVar27;
        cVar5 = (0 < sVar9) * (sVar9 < 0xff) * (char) iVar27 - (0xff < sVar9);
        sVar9 = (short) ((uint) iVar27 >> 0x10);
        uVar34 = CONCAT13((0 < sVar9) * (sVar9 < 0xff) * (char) ((uint) iVar27 >> 0x10) - (0xff < sVar9),
                          CONCAT12(cVar5, sVar32));
        sVar9 = (short) iVar19;
        cVar6 = (0 < sVar9) * (sVar9 < 0xff) * (char) iVar19 - (0xff < sVar9);
        sVar9 = (short) ((uint) iVar19 >> 0x10);
        uVar37 = CONCAT15((0 < sVar9) * (sVar9 < 0xff) * (char) ((uint) iVar19 >> 0x10) - (0xff < sVar9),
                          CONCAT14(cVar6, uVar34));
        sVar9 = (short) iVar31;
        cVar7 = (0 < sVar9) * (sVar9 < 0xff) * (char) iVar31 - (0xff < sVar9);
        sVar10 = (short) ((uint) iVar31 >> 0x10);
        bVar8 = (0 < sVar32) * (sVar32 < 0xff) * cVar4 - (0xff < sVar32);
        sVar9 = (short) ((uint) uVar34 >> 0x10);
        sVar32 = (short) ((uint6) uVar37 >> 0x20);
        uVar33 = CONCAT12((0 < sVar32) * (sVar32 < 0xff) * cVar6 - (0xff < sVar32),
                          CONCAT11((0 < sVar9) * (sVar9 < 0xff) * cVar5 - (0xff < sVar9), bVar8));
        sVar9 = (short) (CONCAT17((0 < sVar10) * (sVar10 < 0xff) * (char) ((uint) iVar31 >> 0x10) -
                                  (0xff < sVar10), CONCAT16(cVar7, uVar37)) >> 0x30);
        uVar35 = CONCAT13((0 < sVar9) * (sVar9 < 0xff) * cVar7 - (0xff < sVar9), uVar33);
        uVar38 = (uint7) uVar35;
        uVar15 = (ulonglong) uVar38 | (ulonglong) uVar38 << 0x20;
        auVar21 = CONCAT48(uVar35, uVar15);
        auVar23 = CONCAT97((unkuint9)
                                   SUB157(CONCAT69(SUB156(CONCAT510(SUB155(CONCAT411(SUB154(CONCAT312(SUB153(
                                                                                             CONCAT213(SUB152(CONCAT114((char) (uVar38 >> 0x18),
                                                                                                                        ZEXT1314(SUB1613(
                                                                                                                                CONCAT412(uVar35, auVar21), 0))) >> 0x68,
                                                                                                              0),
                                                                                                       CONCAT112((char) (uVar38 >> 0x10), auVar21)) >> 0x60, 0), auVar21)
                                                                                                    >> 0x58, 0),
                                                                                     CONCAT110((char) (uVar38 >> 8),
                                                                                               SUB1210(auVar21, 0)))
                                                                                   >> 0x50, 0),
                                                                    (unkuint10) SUB129(auVar21, 0)) >> 0x48, 0
                                   ), CONCAT18(bVar8, uVar15)) >> 0x40, 0) << 8,
                           ((uint7) uVar15 >> 0x18) << 0x30);
        auVar22 = CONCAT115(ZEXT1011(SUB1610(auVar23 >> 0x30, 0)) << 8, ((uint5) uVar15 >> 0x10) << 0x20);
        auVar25 = CONCAT142(SUB1614(CONCAT133(ZEXT1213(SUB1612(auVar22 >> 0x20, 0)) << 8,
                                              (uVar33 >> 8) << 0x10) >> 0x10, 0), (ushort) bVar8) &
                  (undefined[16]) 0xffffffffffff00ff;
        uVar28 = SUB162(auVar23 >> 0x30, 0);
        uVar13 = CONCAT42(SUB144(CONCAT212(uVar28, ZEXT1012(SUB1610(auVar25, 0))) >> 0x50, 0),
                          SUB162(auVar22 >> 0x20, 0));
        fVar46 = (float) SUB164(CONCAT106((unkuint10) uVar13 << 0x10, (SUB166(auVar25, 0) >> 0x10) << 0x20)
                                        >> 0x20, 0) * 0.003921569;
        *param_3 = CONCAT412((float) (uint) uVar28 * 0.003921569,
                             CONCAT48((float) (SUB164(auVar25, 0) & 0xffff) * 0.003921569,
                                      CONCAT17((char) ((uint) fVar46 >> 0x18),
                                               CONCAT16((char) ((uint) fVar46 >> 0x10),
                                                        CONCAT15((char) ((uint) fVar46 >> 8),
                                                                 CONCAT14(SUB41(fVar46, 0),
                                                                          (float) (int) uVar13 *
                                                                          0.003921569))))));
        return;
    }
    if (uVar35 == 1) {
        uVar34 = **(undefined4 * *)(param_1 + 4);
        uVar20 = CONCAT44(uVar34, uVar34);
        auVar21 = CONCAT48(uVar34, uVar20);
        auVar25 = ZEXT1516(CONCAT87((ulonglong)
                                            SUB157(CONCAT69(SUB156(CONCAT510(SUB155(CONCAT411(SUB154(CONCAT312(
                                                                                                      SUB153(CONCAT213(SUB152(CONCAT114((char) ((uint)
                                                                                                                                                uVar34 >> 0x18),
                                                                                                                                        ZEXT1314(SUB1613(CONCAT412(uVar34,
                                                                                                                                                                   auVar21),
                                                                                                                                                         0))) >>
                                                                                                                                                              0x68, 0),
                                                                                                                       CONCAT112((char) ((uint) uVar34 >> 0x10),
                                                                                                                                 auVar21)) >> 0x60, 0), auVar21) >>
                                                                                                                                                                 0x58, 0),
                                                                                              CONCAT110(
                                                                                                      (char) ((uint) uVar34
                                                                                                              >> 8),
                                                                                                      SUB1210(auVar21,
                                                                                                              0)))
                                                                                            >> 0x50, 0),
                                                                             (unkuint10) SUB129(auVar21, 0)) >> 0x48,
                                                                   0),
                                                            CONCAT18((char) uVar34, uVar20)) >> 0x40, 0) << 8,
                                    ((uint7) uVar20 >> 0x18) << 0x30)) &
                  (undefined[16]) 0xffffffffffffffff;
        auVar23 = CONCAT115(ZEXT1011(SUB1610(auVar25 >> 0x30, 0)) << 8, ((uint5) uVar20 >> 0x10) << 0x20);
        auVar22 = CONCAT142(SUB1614(CONCAT133(ZEXT1213(SUB1612(auVar23 >> 0x20, 0)) << 8,
                                              ((uint3) uVar34 >> 8) << 0x10) >> 0x10, 0), (short) uVar34) &
                  (undefined[16]) 0xffffffffffff00ff;
        uVar28 = SUB162(auVar25 >> 0x30, 0);
        uVar13 = CONCAT42(SUB144(CONCAT212(uVar28, ZEXT1012(SUB1610(auVar22, 0))) >> 0x50, 0),
                          SUB162(auVar23 >> 0x20, 0));
        *(float *) *param_3 = (float) (int) uVar13 * 0.003921569;
        *(float *) (*param_3 + 4) =
                (float) SUB164(ZEXT1416(CONCAT86((ulonglong) uVar13 << 0x10,
                                                 (SUB166(auVar22, 0) >> 0x10) << 0x20)) >> 0x20, 0) *
                0.003921569;
        *(float *) (*param_3 + 8) = (float) (SUB164(auVar22, 0) & 0xffff) * 0.003921569;
        *(float *) (*param_3 + 0xc) = (float) (uint) uVar28 * 0.003921569;
        return;
    }
    if (param_5 == (uint *) 0x0) {
        param_5 = local_res20;
    } else {
        uVar18 = *param_5;
        uVar35 = *(uint * )(*(longlong * )(param_1 + 2) + (ulonglong) uVar18 * 4);
        if (uVar35 <= param_2) {
            uVar17 = *(uint * )(*(longlong * )(param_1 + 2) + (ulonglong)(uVar18 + 1) * 4);
            if (param_2 < uVar17) {
                uVar34 = *(undefined4 * )(*(longlong * )(param_1 + 4) + (ulonglong)(uVar18 + 1) * 4);
                uVar20 = CONCAT44(uVar34, uVar34);
                auVar21 = CONCAT48(uVar34, uVar20);
                auVar25 = ZEXT1516(CONCAT87((ulonglong)
                                                    SUB157(CONCAT69(SUB156(CONCAT510(SUB155(CONCAT411(SUB154(
                                                                                             CONCAT312(SUB153(CONCAT213(SUB152(CONCAT114((char)
                                                                                                                                                 ((uint) uVar34
                                                                                                                                                         >> 0x18),
                                                                                                                                         ZEXT1314(
                                                                                                                                                 SUB1613(CONCAT412(
                                                                                                                                                                 uVar34,
                                                                                                                                                                 auVar21),
                                                                                                                                                         0)))
                                                                                                                                       >>
                                                                                                                                       0x68, 0),
                                                                                                                        CONCAT112((char) ((uint) uVar34
                                                                                                                                          >> 0x10),
                                                                                                                                  auVar21)) >> 0x60, 0),
                                                                                                       auVar21) >>
                                                                                                                0x58, 0), CONCAT110(
                                                                                             (char) ((uint) uVar34 >> 8),
                                                                                             SUB1210(auVar21, 0))) >> 0x50, 0),
                                                                                     (unkuint10) SUB129(auVar21, 0))
                                                                                   >> 0x48, 0),
                                                                    CONCAT18((char) uVar34, uVar20)) >> 0x40, 0) << 8,
                                            ((uint7) uVar20 >> 0x18) << 0x30)) &
                          (undefined[16]) 0xffffffffffffffff;
                auVar23 = CONCAT115(ZEXT1011(SUB1610(auVar25 >> 0x30, 0)) << 8,
                                    ((uint5) uVar20 >> 0x10) << 0x20);
                auVar22 = CONCAT142(SUB1614(CONCAT133(ZEXT1213(SUB1612(auVar23 >> 0x20, 0)) << 8,
                                                      ((uint3) uVar34 >> 8) << 0x10) >> 0x10, 0), (short) uVar34
                ) & (undefined[16]) 0xffffffffffff00ff;
                uVar28 = SUB162(auVar25 >> 0x30, 0);
                uVar13 = CONCAT42(SUB144(CONCAT212(uVar28, ZEXT1012(SUB1610(auVar22, 0))) >> 0x50, 0),
                                  SUB162(auVar23 >> 0x20, 0));
                uVar34 = *(undefined4 * )(*(longlong * )(param_1 + 4) + (ulonglong) uVar18 * 4);
                uVar20 = CONCAT44(uVar34, uVar34);
                auVar21 = CONCAT48(uVar34, uVar20);
                auVar24 = ZEXT1516(CONCAT87((ulonglong)
                                                    SUB157(CONCAT69(SUB156(CONCAT510(SUB155(CONCAT411(SUB154(
                                                                                             CONCAT312(SUB153(CONCAT213(SUB152(CONCAT114((char)
                                                                                                                                                 ((uint) uVar34
                                                                                                                                                         >> 0x18),
                                                                                                                                         ZEXT1314(
                                                                                                                                                 SUB1613(CONCAT412(
                                                                                                                                                                 uVar34,
                                                                                                                                                                 auVar21),
                                                                                                                                                         0)))
                                                                                                                                       >>
                                                                                                                                       0x68, 0),
                                                                                                                        CONCAT112((char) ((uint) uVar34
                                                                                                                                          >> 0x10),
                                                                                                                                  auVar21)) >> 0x60, 0),
                                                                                                       auVar21) >>
                                                                                                                0x58, 0), CONCAT110(
                                                                                             (char) ((uint) uVar34 >> 8),
                                                                                             SUB1210(auVar21, 0))) >> 0x50, 0),
                                                                                     (unkuint10) SUB129(auVar21, 0))
                                                                                   >> 0x48, 0),
                                                                    CONCAT18((char) uVar34, uVar20)) >> 0x40, 0) << 8,
                                            ((uint7) uVar20 >> 0x18) << 0x30)) &
                          (undefined[16]) 0xffffffffffffffff;
                auVar25 = CONCAT115(ZEXT1011(SUB1610(auVar24 >> 0x30, 0)) << 8,
                                    ((uint5) uVar20 >> 0x10) << 0x20);
                auVar23 = CONCAT142(SUB1614(CONCAT133(ZEXT1213(SUB1612(auVar25 >> 0x20, 0)) << 8,
                                                      ((uint3) uVar34 >> 8) << 0x10) >> 0x10, 0), (short) uVar34
                ) & (undefined[16]) 0xffffffffffff00ff;
                uVar29 = SUB162(auVar24 >> 0x30, 0);
                uVar14 = CONCAT42(SUB144(CONCAT212(uVar29, ZEXT1012(SUB1610(auVar23, 0))) >> 0x50, 0),
                                  SUB162(auVar25 >> 0x20, 0));
                fVar45 = (float) (int) uVar14 * 0.003921569;
                fVar46 = (float) SUB164(ZEXT1416(CONCAT86((ulonglong) uVar14 << 0x10,
                                                          (SUB166(auVar23, 0) >> 0x10) << 0x20)) >> 0x20, 0) *
                         0.003921569;
                fVar47 = (float) (SUB164(auVar23, 0) & 0xffff) * 0.003921569;
                fVar48 = (float) (uint) uVar29 * 0.003921569;
                fVar36 = (float) (ulonglong)(param_2 - uVar35) / (float) (ulonglong)(uVar17 - uVar35);
                fVar46 = fVar36 * ((float) SUB164(ZEXT1416(CONCAT86((ulonglong) uVar13 << 0x10,
                                                                    (SUB166(auVar22, 0) >> 0x10) << 0x20)) >>
                                                                                                           0x20, 0) *
                                   0.003921569 - fVar46) + fVar46;
                *param_3 = CONCAT412(fVar36 * ((float) (uint) uVar28 * 0.003921569 - fVar48) + fVar48,
                                     CONCAT48(fVar36 * ((float) (SUB164(auVar22, 0) & 0xffff) * 0.003921569 -
                                                        fVar47) + fVar47,
                                              CONCAT17((char) ((uint) fVar46 >> 0x18),
                                                       CONCAT16((char) ((uint) fVar46 >> 0x10),
                                                                CONCAT15((char) ((uint) fVar46 >> 8),
                                                                         CONCAT14(SUB41(fVar46, 0),
                                                                                  fVar36 * ((float) (int)
                                                                                          uVar13 * 0.003921569 -
                                                                                            fVar45) + fVar45))))));
                return;
            }
        }
        uVar17 = uVar18 + 1;
        uVar15 = (ulonglong) uVar17;
        *param_5 = uVar17;
        uVar35 = *param_1;
        if (((uVar17 < uVar35 - 1) &&
             (lVar2 = *(longlong * )(param_1 + 2), puVar1 = (uint * )(lVar2 + uVar15 * 4),
                     *puVar1 < param_2 || *puVar1 == param_2)) &&
            (param_2 < *(uint * )(lVar2 + (ulonglong)(uVar18 + 2) * 4))) {
            uVar34 = *(undefined4 * )(*(longlong * )(param_1 + 4) + (ulonglong)(uVar18 + 2) * 4);
            uVar20 = CONCAT44(uVar34, uVar34);
            auVar21 = CONCAT48(uVar34, uVar20);
            auVar25 = ZEXT1516(CONCAT87((ulonglong)
                                                SUB157(CONCAT69(SUB156(CONCAT510(SUB155(CONCAT411(SUB154(CONCAT312
                                                                                                                 (SUB153(CONCAT213(
                                                                                                                                 SUB152(CONCAT114(
                                                                                                                                                (char) ((uint)
                                                                                                                                                        uVar34
                                                                                                                                                        >> 0x18),
                                                                                                                                                ZEXT1314(
                                                                                                                                                        SUB1613(CONCAT412(
                                                                                                                                                                        uVar34,
                                                                                                                                                                        auVar21),
                                                                                                                                                                0)))
                                                                                                                                                >>
                                                                                                                                                0x68,
                                                                                                                                        0),
                                                                                                                                 CONCAT112(
                                                                                                                                         (char) ((uint) uVar34
                                                                                                                                                 >> 0x10),
                                                                                                                                         auVar21))
                                                                                                                                 >> 0x60,
                                                                                                                         0),
                                                                                                                  auVar21)
                                                                                                                 >>
                                                                                                                 0x58,
                                                                                                         0), CONCAT110(
                                                                                         (char) ((uint) uVar34 >> 8),
                                                                                         SUB1210(auVar21, 0))) >> 0x50, 0),
                                                                                 (unkuint10) SUB129(auVar21, 0))
                                                                               >> 0x48, 0),
                                                                CONCAT18((char) uVar34, uVar20)) >> 0x40, 0) << 8,
                                        ((uint7) uVar20 >> 0x18) << 0x30)) &
                      (undefined[16]) 0xffffffffffffffff;
            auVar23 = CONCAT115(ZEXT1011(SUB1610(auVar25 >> 0x30, 0)) << 8, ((uint5) uVar20 >> 0x10) << 0x20);
            auVar22 = CONCAT142(SUB1614(CONCAT133(ZEXT1213(SUB1612(auVar23 >> 0x20, 0)) << 8,
                                                  ((uint3) uVar34 >> 8) << 0x10) >> 0x10, 0), (short) uVar34)
                      & (undefined[16]) 0xffffffffffff00ff;
            uVar28 = SUB162(auVar25 >> 0x30, 0);
            uVar13 = CONCAT42(SUB144(CONCAT212(uVar28, ZEXT1012(SUB1610(auVar22, 0))) >> 0x50, 0),
                              SUB162(auVar23 >> 0x20, 0));
            uVar34 = *(undefined4 * )(*(longlong * )(param_1 + 4) + uVar15 * 4);
            uVar20 = CONCAT44(uVar34, uVar34);
            auVar21 = CONCAT48(uVar34, uVar20);
            auVar25 = ZEXT1516(CONCAT87((ulonglong)
                                                SUB157(CONCAT69(SUB156(CONCAT510(SUB155(CONCAT411(SUB154(CONCAT312
                                                                                                                 (SUB153(CONCAT213(
                                                                                                                                 SUB152(CONCAT114(
                                                                                                                                                (char) ((uint)
                                                                                                                                                        uVar34
                                                                                                                                                        >> 0x18),
                                                                                                                                                ZEXT1314(
                                                                                                                                                        SUB1613(CONCAT412(
                                                                                                                                                                        uVar34,
                                                                                                                                                                        auVar21),
                                                                                                                                                                0)))
                                                                                                                                                >>
                                                                                                                                                0x68,
                                                                                                                                        0),
                                                                                                                                 CONCAT112(
                                                                                                                                         (char) ((uint) uVar34
                                                                                                                                                 >> 0x10),
                                                                                                                                         auVar21))
                                                                                                                                 >> 0x60,
                                                                                                                         0),
                                                                                                                  auVar21)
                                                                                                                 >>
                                                                                                                 0x58,
                                                                                                         0), CONCAT110(
                                                                                         (char) ((uint) uVar34 >> 8),
                                                                                         SUB1210(auVar21, 0))) >> 0x50, 0),
                                                                                 (unkuint10) SUB129(auVar21, 0))
                                                                               >> 0x48, 0),
                                                                CONCAT18((char) uVar34, uVar20)) >> 0x40, 0) << 8,
                                        ((uint7) uVar20 >> 0x18) << 0x30)) &
                      (undefined[16]) 0xffffffffffffffff;
            auVar24 = CONCAT115(ZEXT1011(SUB1610(auVar25 >> 0x30, 0)) << 8, ((uint5) uVar20 >> 0x10) << 0x20);
            auVar23 = CONCAT142(SUB1614(CONCAT133(ZEXT1213(SUB1612(auVar24 >> 0x20, 0)) << 8,
                                                  ((uint3) uVar34 >> 8) << 0x10) >> 0x10, 0), (short) uVar34)
                      & (undefined[16]) 0xffffffffffff00ff;
            uVar29 = SUB162(auVar25 >> 0x30, 0);
            uVar14 = CONCAT42(SUB144(CONCAT212(uVar29, ZEXT1012(SUB1610(auVar23, 0))) >> 0x50, 0),
                              SUB162(auVar24 >> 0x20, 0));
            fVar45 = (float) (int) uVar14 * 0.003921569;
            fVar46 = (float) SUB164(ZEXT1416(CONCAT86((ulonglong) uVar14 << 0x10,
                                                      (SUB166(auVar23, 0) >> 0x10) << 0x20)) >> 0x20, 0) *
                     0.003921569;
            fVar47 = (float) (SUB164(auVar23, 0) & 0xffff) * 0.003921569;
            fVar48 = (float) (uint) uVar29 * 0.003921569;
            fVar36 = (float) (ulonglong)(param_2 - *(int *) (lVar2 + uVar15 * 4)) /
                     (float) (ulonglong)
                             (uint)(*(int *) (lVar2 + (ulonglong)(uVar18 + 2) * 4) -
                                    *(int *) (lVar2 + uVar15 * 4));
            fVar46 = fVar36 * ((float) SUB164(ZEXT1416(CONCAT86((ulonglong) uVar13 << 0x10,
                                                                (SUB166(auVar22, 0) >> 0x10) << 0x20)) >>
                                                                                                       0x20, 0) *
                               0.003921569 - fVar46) + fVar46;
            *param_3 = CONCAT412(fVar36 * ((float) (uint) uVar28 * 0.003921569 - fVar48) + fVar48,
                                 CONCAT48(fVar36 * ((float) (SUB164(auVar22, 0) & 0xffff) * 0.003921569 -
                                                    fVar47) + fVar47,
                                          CONCAT17((char) ((uint) fVar46 >> 0x18),
                                                   CONCAT16((char) ((uint) fVar46 >> 0x10),
                                                            CONCAT15((char) ((uint) fVar46 >> 8),
                                                                     CONCAT14(SUB41(fVar46, 0),
                                                                              fVar36 * ((float) (int) uVar13
                                                                                        * 0.003921569 -
                                                                                        fVar45) + fVar45)))
                                          )));
            return;
        }
    }
    uVar15 = 0;
    if (uVar35 != 0) {
        uVar18 = uVar35;
        do {
            uVar17 = (uVar18 - (int) uVar15 >> 1) + (int) uVar15;
            if (*(uint * )(*(longlong * )(param_1 + 2) + (ulonglong) uVar17 * 4) <= param_2) {
                uVar15 = (ulonglong)(uVar17 + 1);
                uVar17 = uVar18;
            }
            uVar18 = uVar17;
        } while ((uint) uVar15 < uVar18);
    }
    puVar3 = *(undefined4 * *)(param_1 + 4);
    uVar18 = (uint) uVar15;
    uVar16 = (ulonglong)(uVar18 - 1);
    if (uVar18 != 0) {
        if (uVar35 != uVar18) {
            uVar34 = puVar3[uVar15];
            lVar2 = *(longlong * )(param_1 + 2);
            uVar35 = CONCAT13(in_XMM2_Bd, CONCAT12(in_XMM2_Bc, CONCAT11(in_XMM2_Bb, in_XMM2_Ba))) ^
                     CONCAT13(in_XMM2_Bd, CONCAT12(in_XMM2_Bc, CONCAT11(in_XMM2_Bb, in_XMM2_Ba)));
            uVar39 = (undefined)(uVar35 >> 8);
            uVar40 = (undefined)(uVar35 >> 0x10);
            uVar41 = (undefined)(uVar35 >> 0x18);
            uVar17 = CONCAT13(in_XMM2_Bh, CONCAT12(in_XMM2_Bg, CONCAT11(in_XMM2_Bf, in_XMM2_Be))) ^
                     CONCAT13(in_XMM2_Bh, CONCAT12(in_XMM2_Bg, CONCAT11(in_XMM2_Bf, in_XMM2_Be)));
            uVar42 = (undefined)(uVar17 >> 8);
            uVar43 = (undefined)(uVar17 >> 0x10);
            uVar44 = (undefined)(uVar17 >> 0x18);
            uVar20 = CONCAT44(uVar34, uVar34);
            auVar21 = CONCAT48(uVar34, uVar20);
            auVar25 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412
                                                                                                         (SUB164(CONCAT313(
                                                                                                                         SUB163(CONCAT214(
                                                                                                                                        SUB162(
                                                                                                                                                CONCAT115(
                                                                                                                                                        uVar44,
                                                                                                                                                        CONCAT114(
                                                                                                                                                                (char) ((uint) uVar34
                                                                                                                                                                        >>
                                                                                                                                                                        0x18),
                                                                                                                                                                SUB1614(CONCAT412(
                                                                                                                                                                                uVar34,
                                                                                                                                                                                auVar21),
                                                                                                                                                                        0)))
                                                                                                                                                        >> 0x70,
                                                                                                                                                0),
                                                                                                                                        CONCAT113(
                                                                                                                                                uVar43,
                                                                                                                                                SUB1613(CONCAT412(
                                                                                                                                                                uVar34,
                                                                                                                                                                auVar21),
                                                                                                                                                        0)))
                                                                                                                                        >> 0x68,
                                                                                                                                0),
                                                                                                                         CONCAT112(
                                                                                                                                 (char) ((uint) uVar34
                                                                                                                                         >> 0x10),
                                                                                                                                 auVar21))
                                                                                                                         >> 0x60,
                                                                                                                 0),
                                                                                                          CONCAT111(
                                                                                                                  uVar42,
                                                                                                                  SUB1211(auVar21,
                                                                                                                          0)))
                                                                                                         >> 0x58, 0),
                                                                                          CONCAT110(
                                                                                                  (char) ((uint) uVar34
                                                                                                          >> 8),
                                                                                                  SUB1210(auVar21, 0)))
                                                                                        >> 0x50, 0),
                                                                         CONCAT19((char) uVar17, SUB129(auVar21, 0)))
                                                                       >> 0x48,
                                                               0), CONCAT18((char) uVar34, uVar20)) >> 0x40, 0),
                                        uVar41), ((uint7) uVar20 >> 0x18) << 0x30);
            auVar23 = CONCAT115(CONCAT101(SUB1610(auVar25 >> 0x30, 0), uVar40),
                                ((uint5) uVar20 >> 0x10) << 0x20);
            auVar22 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar23 >> 0x20, 0), uVar39),
                                                  ((uint3) uVar34 >> 8) << 0x10) >> 0x10, 0),
                                (ushort) uVar34 & 0xff | (ushort)(byte)
            uVar35 << 8);
            uVar12 = (undefined2)(uVar17 >> 0x10);
            iVar19 = SUB164(CONCAT214(uVar12, CONCAT212(SUB162(auVar25 >> 0x30, 0), SUB1612(auVar22, 0))) >>
                                                                                                          0x60, 0);
            auVar23 = CONCAT610(SUB166(CONCAT412(iVar19, CONCAT210((short) uVar17, SUB1610(auVar22, 0))) >>
                                                                                                         0x50, 0),
                                CONCAT28(SUB162(auVar23 >> 0x20, 0), SUB168(auVar22, 0)));
            uVar11 = (undefined2)(uVar35 >> 0x10);
            uVar34 = puVar3[uVar16];
            uVar20 = CONCAT44(uVar34, uVar34);
            auVar21 = CONCAT48(uVar34, uVar20);
            auVar26 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412
                                                                                                         (SUB164(CONCAT313(
                                                                                                                         SUB163(CONCAT214(
                                                                                                                                        SUB162(
                                                                                                                                                CONCAT115(
                                                                                                                                                        uVar44,
                                                                                                                                                        CONCAT114(
                                                                                                                                                                (char) ((uint) uVar34
                                                                                                                                                                        >>
                                                                                                                                                                        0x18),
                                                                                                                                                                SUB1614(CONCAT412(
                                                                                                                                                                                uVar34,
                                                                                                                                                                                auVar21),
                                                                                                                                                                        0)))
                                                                                                                                                        >> 0x70,
                                                                                                                                                0),
                                                                                                                                        CONCAT113(
                                                                                                                                                uVar43,
                                                                                                                                                SUB1613(CONCAT412(
                                                                                                                                                                uVar34,
                                                                                                                                                                auVar21),
                                                                                                                                                        0)))
                                                                                                                                        >> 0x68,
                                                                                                                                0),
                                                                                                                         CONCAT112(
                                                                                                                                 (char) ((uint) uVar34
                                                                                                                                         >> 0x10),
                                                                                                                                 auVar21))
                                                                                                                         >> 0x60,
                                                                                                                 0),
                                                                                                          CONCAT111(
                                                                                                                  uVar42,
                                                                                                                  SUB1211(auVar21,
                                                                                                                          0)))
                                                                                                         >> 0x58, 0),
                                                                                          CONCAT110(
                                                                                                  (char) ((uint) uVar34
                                                                                                          >> 8),
                                                                                                  SUB1210(auVar21, 0)))
                                                                                        >> 0x50, 0),
                                                                         CONCAT19((char) uVar17, SUB129(auVar21, 0)))
                                                                       >> 0x48,
                                                               0), CONCAT18((char) uVar34, uVar20)) >> 0x40, 0),
                                        uVar41), ((uint7) uVar20 >> 0x18) << 0x30);
            auVar24 = CONCAT115(CONCAT101(SUB1610(auVar26 >> 0x30, 0), uVar40),
                                ((uint5) uVar20 >> 0x10) << 0x20);
            auVar25 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar24 >> 0x20, 0), uVar39),
                                                  ((uint3) uVar34 >> 8) << 0x10) >> 0x10, 0),
                                (ushort) uVar34 & 0xff | (ushort)(byte)
            uVar35 << 8);
            iVar27 = SUB164(CONCAT214(uVar12, CONCAT212(SUB162(auVar26 >> 0x30, 0), SUB1612(auVar25, 0))) >>
                                                                                                          0x60, 0);
            auVar24 = CONCAT610(SUB166(CONCAT412(iVar27, CONCAT210((short) uVar17, SUB1610(auVar25, 0))) >>
                                                                                                         0x50, 0),
                                CONCAT28(SUB162(auVar24 >> 0x20, 0), SUB168(auVar25, 0)));
            fVar45 = (float) SUB164(auVar24 >> 0x40, 0) * 0.003921569;
            fVar46 = (float) SUB164(CONCAT106(CONCAT82(SUB168(auVar24 >> 0x40, 0), uVar11),
                                              (SUB166(auVar25, 0) >> 0x10) << 0x20) >> 0x20, 0) * 0.003921569;
            fVar47 = (float) (SUB164(auVar25, 0) & 0xffff | uVar35 << 0x10) * 0.003921569;
            fVar48 = (float) iVar27 * 0.003921569;
            fVar36 = (float) (ulonglong)(param_2 - *(int *) (lVar2 + uVar16 * 4)) /
                     (float) (ulonglong)(uint)(*(int *) (lVar2 + uVar15 * 4) - *(int *) (lVar2 + uVar16 * 4));
            fVar46 = fVar36 * ((float) SUB164(CONCAT106(CONCAT82(SUB168(auVar23 >> 0x40, 0), uVar11),
                                                        (SUB166(auVar22, 0) >> 0x10) << 0x20) >> 0x20, 0) *
                               0.003921569 - fVar46) + fVar46;
            *param_3 = CONCAT412(fVar36 * ((float) iVar19 * 0.003921569 - fVar48) + fVar48,
                                 CONCAT48(fVar36 * ((float) (SUB164(auVar22, 0) & 0xffff | uVar35 << 0x10) *
                                                    0.003921569 - fVar47) + fVar47,
                                          CONCAT17((char) ((uint) fVar46 >> 0x18),
                                                   CONCAT16((char) ((uint) fVar46 >> 0x10),
                                                            CONCAT15((char) ((uint) fVar46 >> 8),
                                                                     CONCAT14(SUB41(fVar46, 0),
                                                                              fVar36 * ((float) SUB164(
                                                                                      auVar23 >> 0x40, 0) *
                                                                                        0.003921569 - fVar45) +
                                                                              fVar45))))));
            *param_5 = uVar18 - 1;
            return;
        }
        uVar34 = puVar3[uVar16];
        uVar20 = CONCAT44(uVar34, uVar34);
        auVar21 = CONCAT48(uVar34, uVar20);
        auVar25 = CONCAT97((unkuint9)
                                   SUB157(CONCAT69(SUB156(CONCAT510(SUB155(CONCAT411(SUB154(CONCAT312(SUB153(
                                                                                             CONCAT213(SUB152(CONCAT114((char) ((uint) uVar34 >>
                                                                                                                                              0x18),
                                                                                                                        ZEXT1314(SUB1613(
                                                                                                                                CONCAT412(uVar34, auVar21), 0))) >> 0x68,
                                                                                                              0),
                                                                                                       CONCAT112((char) ((uint) uVar34 >> 0x10), auVar21))
                                                                                                     >> 0x60, 0), auVar21) >> 0x58, 0),
                                                                                     CONCAT110((char) ((uint) uVar34
                                                                                                       >> 8),
                                                                                               SUB1210(auVar21, 0)))
                                                                                   >> 0x50, 0),
                                                                    (unkuint10) SUB129(auVar21, 0)) >> 0x48, 0),
                                                   CONCAT18((char) uVar34, uVar20)) >> 0x40, 0) << 8,
                           ((uint7) uVar20 >> 0x18) << 0x30);
        auVar23 = CONCAT115(ZEXT1011(SUB1610(auVar25 >> 0x30, 0)) << 8, ((uint5) uVar20 >> 0x10) << 0x20);
        auVar22 = CONCAT142(SUB1614(CONCAT133(ZEXT1213(SUB1612(auVar23 >> 0x20, 0)) << 8,
                                              ((uint3) uVar34 >> 8) << 0x10) >> 0x10, 0), (short) uVar34) &
                  (undefined[16]) 0xffffffffffff00ff;
        uVar28 = SUB162(auVar25 >> 0x30, 0);
        uVar13 = CONCAT42(SUB144(CONCAT212(uVar28, ZEXT1012(SUB1610(auVar22, 0))) >> 0x50, 0),
                          SUB162(auVar23 >> 0x20, 0));
        *(float *) *param_3 = (float) (int) uVar13 * 0.003921569;
        *(float *) (*param_3 + 4) =
                (float) SUB164(CONCAT106((unkuint10) uVar13 << 0x10, (SUB166(auVar22, 0) >> 0x10) << 0x20) >>
                                                                                                           0x20, 0) *
                0.003921569;
        *(float *) (*param_3 + 8) = (float) (SUB164(auVar22, 0) & 0xffff) * 0.003921569;
        *(float *) (*param_3 + 0xc) = (float) (uint) uVar28 * 0.003921569;
        *param_5 = *param_1 - 2;
        return;
    }
    uVar34 = *puVar3;
    uVar20 = CONCAT44(uVar34, uVar34);
    auVar21 = CONCAT48(uVar34, uVar20);
    auVar23 = CONCAT97((unkuint9)
                               SUB157(CONCAT69(SUB156(CONCAT510(SUB155(CONCAT411(SUB154(CONCAT312(SUB153(
                                                                                         CONCAT213(SUB152(CONCAT114((char) ((uint) uVar34 >>
                                                                                                                                          0x18),
                                                                                                                    ZEXT1314(SUB1613(
                                                                                                                            CONCAT412(uVar34, auVar21), 0))) >> 0x68, 0),
                                                                                                   CONCAT112((char) ((uint) uVar34 >> 0x10), auVar21))
                                                                                                 >> 0x60, 0), auVar21) >> 0x58, 0),
                                                                                 CONCAT110((char) ((uint) uVar34 >> 8),
                                                                                           SUB1210(auVar21, 0)))
                                                                               >> 0x50, 0),
                                                                (unkuint10) SUB129(auVar21, 0)) >> 0x48, 0),
                                               CONCAT18((char) uVar34, uVar20)) >> 0x40, 0) << 8,
                       ((uint7) uVar20 >> 0x18) << 0x30);
    auVar22 = CONCAT115(ZEXT1011(SUB1610(auVar23 >> 0x30, 0)) << 8, ((uint5) uVar20 >> 0x10) << 0x20);
    auVar25 = CONCAT142(SUB1614(CONCAT133(ZEXT1213(SUB1612(auVar22 >> 0x20, 0)) << 8,
                                          ((uint3) uVar34 >> 8) << 0x10) >> 0x10, 0), (short) uVar34) &
              (undefined[16]) 0xffffffffffff00ff;
    uVar28 = SUB162(auVar23 >> 0x30, 0);
    uVar13 = CONCAT42(SUB144(CONCAT212(uVar28, ZEXT1012(SUB1610(auVar25, 0))) >> 0x50, 0),
                      SUB162(auVar22 >> 0x20, 0));
    *(float *) *param_3 = (float) (int) uVar13 * 0.003921569;
    *(float *) (*param_3 + 4) =
            (float) SUB164(CONCAT106((unkuint10) uVar13 << 0x10, (SUB166(auVar25, 0) >> 0x10) << 0x20) >>
                                                                                                       0x20, 0) *
            0.003921569;
    *(float *) (*param_3 + 8) = (float) (SUB164(auVar25, 0) & 0xffff) * 0.003921569;
    *(float *) (*param_3 + 0xc) = (float) (uint) uVar28 * 0.003921569;
    *param_5 = 0;
    return;
}
