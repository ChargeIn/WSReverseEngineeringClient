//
// Created by flop on 04.04.22.
//
#include "../../include.h"

int FUN_1402de0e0(undefined8 *param_1) {
    undefined8 *puVar1;
    int iVar2;

    LOCK();
    puVar1 = param_1 + 1;
    iVar2 = *(int *) puVar1;
    *(int *) puVar1 = *(int *) puVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != (undefined8 *) 0x0) {
            *param_1 = &PTR_LAB_140b62e78;
            if ((longlong *) param_1[5] != (longlong *) 0x0) {
                (**(code * *)(*(longlong *) param_1[5] + 8))();
                param_1[5] = 0;
            }
            if ((longlong *) param_1[6] != (longlong *) 0x0) {
                (**(code * *)(*(longlong *) param_1[6] + 8))();
                param_1[6] = 0;
            }
            FUN_14018b900(param_1, 0);
        }
        iVar2 = 0;
    }
    return iVar2;
}


undefined8 FUN_1402de160(longlong param_1, longlong param_2) {
    int iVar1;
    int iVar2;
    undefined8 uVar3;
    int local_res8;
    int iStackX12;
    int local_res10;
    int iStackX20;
    int local_res18;
    int iStackX28;

    if (param_1 != param_2) {
        if ((((*(longlong * )(param_1 + 0x28) != *(longlong * )(param_2 + 0x28)) ||
              (*(longlong * )(param_1 + 0xc) != *(longlong * )(param_2 + 0xc))) ||
             (*(longlong * )(param_1 + 0x30) != *(longlong * )(param_2 + 0x30))) ||
            (((*(longlong * )(param_1 + 0x14) != *(longlong * )(param_2 + 0x14) ||
               (*(longlong * )(param_1 + 0x1c) != *(longlong * )(param_2 + 0x1c))) ||
              (*(int *) (param_1 + 0x24) != *(int *) (param_2 + 0x24))))) {
            if ((*(longlong * )(param_1 + 0x28) == *(longlong * )(param_2 + 0x30)) &&
                (*(longlong * )(param_1 + 0x30) == *(longlong * )(param_2 + 0x28))) {
                iVar1 = *(int *) (param_2 + 0x24);
                uVar3 = 1;
                if (iVar1 == 0) {
                    local_res8 = *(int *) (param_2 + 0x14);
                    iVar2 = 0;
                    iStackX12 = *(int *) (param_2 + 0x18);
                    local_res10 = *(int *) (param_2 + 0xc);
                    iStackX20 = *(int *) (param_2 + 0x10);
                    local_res18 = *(int *) (param_2 + 0x1c);
                    iStackX28 = *(int *) (param_2 + 0x20);
                } else if (iVar1 == 1) {
                    iStackX28 = *(int *) (param_2 + 0x1c);
                    local_res8 = *(int *) (param_2 + 0x14);
                    iStackX12 = (*(int *) (param_2 + 0x18) - iStackX28) + 1;
                    local_res10 = *(int *) (param_2 + 0xc) + -1 + iStackX28;
                    iStackX20 = *(int *) (param_2 + 0x10);
                    local_res18 = *(int *) (param_2 + 0x20);
                    iVar2 = 3;
                } else if (iVar1 == 2) {
                    local_res18 = *(int *) (param_2 + 0x1c);
                    iStackX28 = *(int *) (param_2 + 0x20);
                    local_res10 = local_res18 + -1 + *(int *) (param_2 + 0xc);
                    local_res8 = (*(int *) (param_2 + 0x14) - local_res18) + 1;
                    iStackX12 = (*(int *) (param_2 + 0x18) - iStackX28) + 1;
                    iStackX20 = iStackX28 + -1 + *(int *) (param_2 + 0x10);
                    iVar2 = 2;
                } else {
                    iVar2 = local_res8;
                    if (iVar1 == 3) {
                        local_res18 = *(int *) (param_2 + 0x20);
                        local_res8 = (*(int *) (param_2 + 0x14) - local_res18) + 1;
                        iStackX20 = *(int *) (param_2 + 0x10) + -1 + local_res18;
                        iStackX12 = *(int *) (param_2 + 0x18);
                        local_res10 = *(int *) (param_2 + 0xc);
                        iVar2 = 1;
                        iStackX28 = *(int *) (param_2 + 0x1c);
                    }
                }
                if ((((*(longlong * )(param_1 + 0xc) != CONCAT44(iStackX12, local_res8)) ||
                      (*(longlong * )(param_1 + 0x14) != CONCAT44(iStackX20, local_res10))) ||
                     (*(longlong * )(param_1 + 0x1c) != CONCAT44(iStackX28, local_res18))) ||
                    (*(int *) (param_1 + 0x24) != iVar2)) {
                    uVar3 = 0;
                }
                return uVar3;
            }
            return 0;
        }
    }
    return 1;
}


int FUN_1402de310(undefined8 *param_1) {
    undefined8 *puVar1;
    int iVar2;

    LOCK();
    puVar1 = param_1 + 1;
    iVar2 = *(int *) puVar1;
    *(int *) puVar1 = *(int *) puVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != (undefined8 *) 0x0) {
            *param_1 = &PTR_LAB_140b62ea8;
            if ((longlong *) param_1[2] != (longlong *) 0x0) {
                (**(code * *)(*(longlong *) param_1[2] + 8))();
                param_1[2] = 0;
            }
            FUN_14018b900(param_1, 0);
        }
        iVar2 = 0;
    }
    return iVar2;
}


undefined8
FUN_1402de370(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 *param_4,
              undefined8 *param_5) {
    undefined8 uVar1;
    undefined8 *puVar2;

    if (param_5 == (undefined8 *) 0x0) {
        uVar1 = 0x80070057;
    } else {
        puVar2 = (undefined8 *) FUN_14018b280(0x30);
        if (puVar2 == (undefined8 *) 0x0) {
            uVar1 = 0x8007000e;
        } else {
            puVar2[2] = 0;
            *(undefined4 * )(puVar2 + 1) = 1;
            puVar2[2] = param_4;
            *puVar2 = &PTR_LAB_140b62ea8;
            (**(code * *) * param_4)(param_4);
            puVar2[3] = param_1;
            puVar2[4] = param_2;
            puVar2[5] = param_3;
            uVar1 = 0;
            *param_5 = puVar2;
        }
    }
    return uVar1;
}


undefined8
FUN_1402de460(undefined8 param_1, undefined8 param_2, undefined8 *param_3, undefined8 *param_4) {
    undefined8 uVar1;
    undefined8 *puVar2;

    if (param_4 == (undefined8 *) 0x0) {
        uVar1 = 0x80070057;
    } else {
        puVar2 = (undefined8 *) FUN_14018b280(0x28);
        if (puVar2 == (undefined8 *) 0x0) {
            uVar1 = 0x8007000e;
        } else {
            puVar2[2] = 0;
            *(undefined4 * )(puVar2 + 1) = 1;
            puVar2[2] = param_3;
            *puVar2 = &PTR_LAB_140b62ed8;
            (**(code * *) * param_3)(param_3);
            puVar2[3] = param_1;
            puVar2[4] = param_2;
            *param_4 = puVar2;
            uVar1 = 0;
        }
    }
    return uVar1;
}


int FUN_1402de500(undefined8 *param_1) {
    undefined8 *puVar1;
    int iVar2;

    LOCK();
    puVar1 = param_1 + 1;
    iVar2 = *(int *) puVar1;
    *(int *) puVar1 = *(int *) puVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != (undefined8 *) 0x0) {
            *param_1 = &PTR_LAB_140b62f00;
            if ((longlong *) param_1[2] != (longlong *) 0x0) {
                (**(code * *)(*(longlong *) param_1[2] + 8))();
                param_1[2] = 0;
            }
            FUN_14018b900(param_1, 0);
        }
        iVar2 = 0;
    }
    return iVar2;
}


undefined8 FUN_1402de550(longlong param_1, longlong param_2) {
    longlong lVar1;
    int iVar2;

    if (param_1 == param_2) {
        return 1;
    }
    lVar1 = *(longlong * )(param_1 + 0x18);
    iVar2 = FUN_1407e6af0(lVar1, *(undefined8 * )(param_2 + 0x18), 0x50);
    if (iVar2 == 0) {
        iVar2 = FUN_1407e6af0(*(undefined8 * )(param_1 + 0x20), *(undefined8 * )(param_2 + 0x20),
                              (ulonglong) * (uint * )(lVar1 + 0x40) * 0x18);
        if (iVar2 == 0) {
            iVar2 = FUN_1407e6af0(*(undefined8 * )(param_1 + 0x28), *(undefined8 * )(param_2 + 0x28),
                                  (ulonglong) * (uint * )(lVar1 + 0x44) * 0x48);
            if (iVar2 == 0) {
                return 1;
            }
        }
    }
    return 0;
}


float *FUN_1402de600(longlong param_1, ulonglong param_2, float *param_3) {
    int iVar1;
    longlong lVar2;
    float *pfVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;

    param_2 = param_2 & 0xffffffff;
    iVar1 = *(int *) (*(longlong * )(param_1 + 0x20) + 0x10 + param_2 * 0x18);
    pfVar3 = (float *) (*(longlong * )(param_1 + 0x20) + param_2 * 0x18);
    if ((iVar1 == -1) && (pfVar3[5] == -NAN)) {
        lVar2 = *(longlong * )(param_1 + 0x28);
        fVar6 = *(float *) (lVar2 + (ulonglong)(uint) * pfVar3 * 0x48);
        fVar4 = *(float *) (lVar2 + 4 + (ulonglong)(uint) * pfVar3 * 0x48);
        fVar7 = *(float *) (lVar2 + (ulonglong)(uint)
        pfVar3[1] * 0x48) -fVar6;
        fVar8 = *(float *) (lVar2 + 4 + (ulonglong)(uint)
        pfVar3[1] * 0x48) -fVar4;
        fVar9 = 0.0 - (*(float *) (lVar2 + 4 + (ulonglong)(uint)
        pfVar3[2] * 0x48) -fVar4) *0.0;
        fVar10 = (*(float *) (lVar2 + (ulonglong)(uint)
        pfVar3[2] * 0x48) -fVar6) *0.0 - 0.0;
        fVar5 = fVar7 * fVar9 + fVar8 * fVar10 + 0.0;
        if ((fVar5 <= -1e-05) || (1e-05 <= fVar5)) {
            fVar9 = ((*param_3 - fVar6) * fVar9 + (0.0 - fVar4) * fVar10 + 0.0) * (1.0 / fVar5);
            fVar4 = (((0.0 - fVar4) * 0.0 - fVar8 * 0.0) * 0.0 +
                     (fVar7 * 0.0 - (*param_3 - fVar6) * 0.0) * 1.0 + 0.0) * (1.0 / fVar5);
            fVar6 = (1.0 - fVar9) - fVar4;
        } else {
            fVar6 = -1.0;
            fVar9 = -1.0;
            fVar4 = 3.0;
        }
        if (((((-1e-05 <= fVar6) && (fVar6 <= 1.00001)) && (-1e-05 <= fVar9)) &&
             ((fVar9 <= 1.00001 && (-1e-05 <= fVar4)))) && (fVar4 <= 1.00001)) {
            return pfVar3;
        }
    } else {
        fVar6 = *param_3;
        if ((*pfVar3 <= fVar6) &&
            (((fVar6 < pfVar3[2] || fVar6 == pfVar3[2] && (fVar6 = param_3[1], pfVar3[1] <= fVar6)) &&
              (fVar6 < pfVar3[3] || fVar6 == pfVar3[3])))) {
            if ((iVar1 != -1) && (pfVar3 = (float *) FUN_1402de600(), pfVar3 != (float *) 0x0)) {
                return pfVar3;
            }
            iVar1 = *(int *) (*(longlong * )(param_1 + 0x20) + 0x14 + param_2 * 0x18);
            if ((iVar1 != -1) &&
                (pfVar3 = (float *) FUN_1402de600(param_1, iVar1, param_3), pfVar3 != (float *) 0x0)) {
                return pfVar3;
            }
        }
    }
    return (float *) 0x0;
}


undefined8
FUN_1402de8d0(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 *param_4,
              undefined8 *param_5) {
    undefined8 uVar1;
    undefined8 *puVar2;

    if (param_5 == (undefined8 *) 0x0) {
        uVar1 = 0x80070057;
    } else {
        puVar2 = (undefined8 *) FUN_14018b280(0x30);
        if (puVar2 == (undefined8 *) 0x0) {
            uVar1 = 0x8007000e;
        } else {
            puVar2[2] = 0;
            *(undefined4 * )(puVar2 + 1) = 1;
            puVar2[2] = param_4;
            *puVar2 = &PTR_LAB_140b62f00;
            (**(code * *) * param_4)(param_4);
            puVar2[3] = param_1;
            puVar2[4] = param_2;
            puVar2[5] = param_3;
            uVar1 = 0;
            *param_5 = puVar2;
        }
    }
    return uVar1;
}


undefined8 FUN_1402de970(longlong param_1, longlong param_2, longlong param_3) {
    int *piVar1;
    int *piVar2;
    int iVar3;
    int iVar4;
    uint uVar5;
    uint uVar6;
    undefined auVar7[16];
    longlong lVar8;
    undefined8 uVar9;
    int *piVar10;
    int *piVar11;
    longlong lVar12;
    int *piVar13;
    int *piVar14;

    piVar13 = *(int **) (param_2 + 0x18);
    piVar11 = *(int **) (param_3 + 0x18);
    piVar1 = piVar13 + *(longlong * )(param_2 + 0x10) * 3;
    piVar2 = piVar11 + *(longlong * )(param_3 + 0x10) * 3;
    auVar7 = ZEXT816(0xc) *
             ZEXT816((ulonglong)(*(longlong * )(param_3 + 0x10) + *(longlong * )(param_2 + 0x10)));
    uVar9 = SUB168(auVar7, 0);
    if (SUB168(auVar7 >> 0x40, 0) != 0) {
        uVar9 = 0xffffffffffffffff;
    }
    piVar10 = (int *) FUN_14018b280(uVar9, 0);
    *(int **) (param_1 + 0x18) = piVar10;
    do {
        if ((piVar1 <= piVar13) || (piVar2 <= piVar11)) {
            lVar8 = ((longlong) piVar1 - (longlong) piVar13) / 0xc;
            FUN_1407db590(piVar10, piVar13, lVar8 * 0xc);
            lVar12 = (((longlong) piVar2 - (longlong) piVar11) / 0xc) * 0xc;
            FUN_1407db590(piVar10 + lVar8 * 3, piVar11, lVar12);
            *(longlong * )(param_1 + 0x10) =
                    ((lVar12 - *(longlong * )(param_1 + 0x18)) + (longlong)(piVar10 + lVar8 * 3)) / 0xc;
            return 0;
        }
        iVar3 = *piVar13;
        iVar4 = *piVar11;
        if (iVar3 < iVar4) {
            *piVar10 = iVar3;
            piVar10[1] = piVar13[1];
            piVar10[2] = piVar13[2];
            piVar14 = piVar13 + 3;
        } else {
            if (iVar4 < iVar3) {
                *piVar10 = iVar4;
            } else {
                uVar5 = piVar13[1];
                uVar6 = piVar11[1];
                if (uVar5 < uVar6) {
                    piVar14 = piVar13 + 3;
                    *piVar10 = *piVar13;
                    piVar10[1] = piVar13[1];
                    piVar10[2] = piVar13[2];
                    goto LAB_1402dea55;
                }
                *piVar10 = *piVar11;
                if (uVar5 <= uVar6) {
                    piVar13 = piVar13 + 3;
                }
            }
            piVar10[1] = piVar11[1];
            piVar10[2] = piVar11[2];
            piVar11 = piVar11 + 3;
            piVar14 = piVar13;
        }
        LAB_1402dea55:
        piVar10 = piVar10 + 3;
        piVar13 = piVar14;
    } while (true);
}


int FUN_1402deb00(undefined8 *param_1) {
    undefined8 *puVar1;
    int iVar2;

    LOCK();
    puVar1 = param_1 + 1;
    iVar2 = *(int *) puVar1;
    *(int *) puVar1 = *(int *) puVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != (undefined8 *) 0x0) {
            *param_1 = &PTR_LAB_140b62f38;
            FUN_14018b900(param_1[3], 0);
            FUN_14018b900(param_1, 0);
        }
        iVar2 = 0;
    }
    return iVar2;
}


undefined8 *FUN_1402dec10(undefined8 *param_1) {
    *param_1 = &PTR_FUN_140b62f60;
    param_1[0x90] = 0;
    param_1[0x91] = 0;
    param_1[0x92] = 0;
    param_1[0x93] = 0;
    param_1[0x8e] = 0;
    *(undefined4 * )(param_1 + 0x8f) = 0;
    param_1[0x297] = 0;
    param_1[0x298] = 0;
    param_1[0x299] = 0;
    param_1[0x29a] = 0;
    param_1[0x29b] = 0;
    param_1[0x29c] = 0;
    param_1[0x29e] = 0;
    param_1[0x29d] = 0;
    param_1[0x2a0] = 0;
    param_1[0x29f] = 0;
    param_1[0x2a1] = 0;
    param_1[0x2a3] = 0;
    param_1[0x2a2] = 0;
    param_1[0x2a5] = 0;
    param_1[0x2a4] = 0;
    param_1[0x2a6] = 0;
    param_1[0x2a8] = 0;
    param_1[0x2a7] = 0;
    param_1[0x2aa] = 0;
    param_1[0x2a9] = 0;
    param_1[0x2ab] = 0;
    param_1[0x2ac] = 0;
    param_1[2] = 0;
    param_1[0x94] = 0;
    param_1[0x95] = 0;
    param_1[0x96] = 0;
    *(undefined4 * )(param_1 + 1) = 1;
    FUN_1407e4830(param_1 + 0x97, 0, 0x800);
    FUN_1407e4830(param_1 + 0x197, 0, 0x800);
    return param_1;
}


void FUN_1402ded40(undefined8 *param_1) {
    int *piVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong **pplVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    undefined4 local_18[4];

    uVar6 = 0;
    *param_1 = &PTR_FUN_140b62f60;
    if ((longlong *) param_1[0x94] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x94] + 0x68))();
        local_18[0] = 0xffffffff;
        (**(code * *)(*(longlong *) param_1[0x94] + 0x20))((longlong *) param_1[0x94], local_18);
        (**(code * *)(*(longlong *) param_1[0x94] + 8))();
        param_1[0x94] = 0;
    }
    if ((longlong *) param_1[0x96] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x96] + 8))();
        param_1[0x96] = 0;
    }
    pplVar4 = (longlong * *)(param_1 + 0x197);
    lVar3 = 0x100;
    do {
        if (*pplVar4 != (longlong *) 0x0) {
            (**(code * *)(**pplVar4 + 8))();
            *pplVar4 = (longlong *) 0x0;
        }
        pplVar4 = pplVar4 + 1;
        lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    if ((undefined8 *) param_1[0x2ab] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x2ab] = param_1[0x2ac];
    }
    if (param_1[0x2ac] != 0) {
        *(undefined8 * )(param_1[0x2ac] + 0x1558) = param_1[0x2ab];
    }
    param_1[0x2ab] = 0;
    param_1[0x2ac] = 0;
    if (param_1[2] != 0) {
        FUN_1400b6120(param_1[2] + 0x680, param_1 + 4);
        lVar3 = param_1[2];
        LOCK();
        piVar1 = (int *) (lVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        if ((*piVar1 == 0) && (lVar3 != 0)) {
            FUN_1402db550(lVar3);
            FUN_14018b900(lVar3, 0);
        }
    }
    if ((undefined8 *) param_1[0x2ab] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x2ab] = param_1[0x2ac];
    }
    if (param_1[0x2ac] != 0) {
        *(undefined8 * )(param_1[0x2ac] + 0x1558) = param_1[0x2ab];
    }
    param_1[0x2ab] = 0;
    param_1[0x2ac] = 0;
    uVar5 = uVar6;
    if (param_1[0x2aa] != 0) {
        do {
            plVar2 = *(longlong * *)(param_1[0x2a9] + uVar5 * 8);
            if (plVar2 != (longlong *) 0x0) {
                (**(code * *)(*plVar2 + 8))();
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < (ulonglong) param_1[0x2aa]);
    }
    lVar3 = param_1[0x2a9];
    if (lVar3 != 0) {
        (**(code * *)(*(longlong * )(lVar3 + -0x10) + 8))(lVar3 + -0x10);
    }
    lVar3 = param_1[0x2a7];
    if (lVar3 != 0) {
        (**(code * *)(*(longlong * )(lVar3 + -0x10) + 8))(lVar3 + -0x10);
    }
    if ((longlong *) param_1[0x2a6] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x2a6] + 8))();
    }
    uVar5 = uVar6;
    if (param_1[0x2a5] != 0) {
        do {
            plVar2 = *(longlong * *)(param_1[0x2a4] + uVar5 * 8);
            if (plVar2 != (longlong *) 0x0) {
                (**(code * *)(*plVar2 + 8))();
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < (ulonglong) param_1[0x2a5]);
    }
    lVar3 = param_1[0x2a4];
    if (lVar3 != 0) {
        (**(code * *)(*(longlong * )(lVar3 + -0x10) + 8))(lVar3 + -0x10);
    }
    lVar3 = param_1[0x2a2];
    if (lVar3 != 0) {
        (**(code * *)(*(longlong * )(lVar3 + -0x10) + 8))(lVar3 + -0x10);
    }
    if ((longlong *) param_1[0x2a1] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x2a1] + 8))();
    }
    if (param_1[0x2a0] != 0) {
        do {
            plVar2 = *(longlong * *)(param_1[0x29f] + uVar6 * 8);
            if (plVar2 != (longlong *) 0x0) {
                (**(code * *)(*plVar2 + 8))();
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < (ulonglong) param_1[0x2a0]);
    }
    lVar3 = param_1[0x29f];
    if (lVar3 != 0) {
        (**(code * *)(*(longlong * )(lVar3 + -0x10) + 8))(lVar3 + -0x10);
    }
    lVar3 = param_1[0x29d];
    if (lVar3 != 0) {
        (**(code * *)(*(longlong * )(lVar3 + -0x10) + 8))(lVar3 + -0x10);
    }
    if ((longlong *) param_1[0x29c] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x29c] + 8))();
    }
    if (param_1[0x29b] != 0) {
        CloseHandle((HANDLE) param_1[0x29b]);
    }
    if (param_1[0x297] != 0) {
        FUN_1401a4a00();
    }
    if ((undefined8 *) param_1[0x92] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x92] = param_1[0x93];
    }
    if (param_1[0x93] != 0) {
        *(undefined8 * )(param_1[0x93] + 0x20) = param_1[0x92];
    }
    param_1[0x92] = 0;
    param_1[0x93] = 0;
    if ((undefined8 *) param_1[0x90] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x90] = param_1[0x91];
    }
    if (param_1[0x91] != 0) {
        *(undefined8 * )(param_1[0x91] + 0x10) = param_1[0x90];
    }
    param_1[0x91] = 0;
    param_1[0x90] = 0;
    return;
}


ulonglong *FUN_1402df0b0(ulonglong param_1, longlong *param_2, undefined8 param_3) {
    ulonglong **ppuVar1;
    longlong lVar2;
    uint uVar3;
    ulonglong *puVar4;
    ulonglong uVar5;
    ulonglong *puVar6;
    ulonglong *puVar7;
    longlong *plVar8;

    puVar4 = (ulonglong * )(**(code * *)(*param_2 + 0x78))(param_2, param_3, param_1 + 0x20);
    if (-1 < (int) puVar4) {
        *(longlong * *)(param_1 + 0x10) = param_2;
        LOCK();
        *(int *) ((longlong) param_2 + 0xc) = *(int *) ((longlong) param_2 + 0xc) + 1;
        puVar4 = (ulonglong * )(*(longlong * )(param_1 + 0x10) + 0x678);
        if (*(longlong * )(param_1 + 0x1558) == 0) {
            *(ulonglong * *)(param_1 + 0x1558) = puVar4;
            puVar7 = (ulonglong * )(param_1 + 0x1560);
            *puVar7 = *puVar4;
            *puVar4 = param_1;
            if (*puVar7 != 0) {
                *(ulonglong * *)(*puVar7 + 0x1558) = puVar7;
            }
        }
        lVar2 = *(longlong * )(param_1 + 0x10);
        plVar8 = (longlong * )(lVar2 + 0x680);
        if (*plVar8 == *(longlong * )(lVar2 + 0x688)) {
            FUN_1400290d0(plVar8);
        }
        uVar5 = (**(code * *)(lVar2 + 0x698))(param_1 + 0x20);
        ppuVar1 = (ulonglong * *)
                (*(longlong * )(lVar2 + 0x690) + (uVar5 % *(ulonglong * )(lVar2 + 0x688)) * 8);
        puVar6 = (ulonglong *) FUN_14018b280(0x20);
        puVar4 = (ulonglong *) 0x0;
        puVar7 = puVar4;
        if (puVar6 != (ulonglong *) 0x0) {
            puVar7 = *ppuVar1;
            *puVar6 = uVar5;
            puVar6[1] = (ulonglong) puVar7;
            *(undefined4 * )(puVar6 + 2) = *(undefined4 * )(param_1 + 0x20);
            *(undefined4 * )((longlong) puVar6 + 0x14) = *(undefined4 * )(param_1 + 0x24);
            puVar6[3] = param_1;
            puVar7 = puVar6;
        }
        *ppuVar1 = puVar7;
        *plVar8 = *plVar8 + 1;
        uVar3 = FUN_1402df1c0(param_1);
        if ((int) uVar3 < 0) {
            puVar4 = (ulonglong * )(ulonglong)
            uVar3;
        }
    }
    return puVar4;
}


int FUN_1402df1c0(longlong param_1) {
    code *pcVar1;
    longlong *plVar2;
    longlong *plVar3;
    undefined4 uVar4;
    int iVar5;
    undefined8 uVar6;
    undefined8 uVar7;
    longlong lVar8;
    longlong **pplVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    longlong *local_res8;
    undefined4 local_48[2];
    longlong local_40;
    code *local_38;
    undefined8 local_30;

    pcVar1 = *(code * *)(*(longlong * )(param_1 + 0x10) + 0x750);
    if (pcVar1 != (code *) 0x0) {
        (*pcVar1)(param_1, *(undefined8 * )(*(longlong * )(param_1 + 0x10) + 0x788));
    }
    uVar11 = 0;
    if (*(longlong * *)(param_1 + 0x4a0) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x4a0) + 0x68))();
        local_48[0] = 0xffffffff;
        (**(code * *)(**(longlong * *)(param_1 + 0x4a0) + 0x20))(*(longlong * *)(param_1 + 0x4a0), local_48);
        (**(code * *)(**(longlong * *)(param_1 + 0x4a0) + 8))();
        *(undefined8 * )(param_1 + 0x4a0) = 0;
    }
    if (*(longlong * *)(param_1 + 0x4b0) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x4b0) + 8))();
        *(undefined8 * )(param_1 + 0x4b0) = 0;
    }
    pplVar9 = (longlong * *)(param_1 + 0xcb8);
    lVar8 = 0x100;
    do {
        if (*pplVar9 != (longlong *) 0x0) {
            (**(code * *)(**pplVar9 + 8))();
            *pplVar9 = (longlong *) 0x0;
        }
        pplVar9 = pplVar9 + 1;
        lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    if (*(longlong * *)(param_1 + 0x14e0) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x14e0) + 8))();
        *(undefined8 * )(param_1 + 0x14e0) = 0;
    }
    *(undefined8 * )(param_1 + 0x14f0) = 0;
    uVar10 = uVar11;
    if (*(longlong * )(param_1 + 0x1500) != 0) {
        do {
            plVar2 = *(longlong * *)(*(longlong * )(param_1 + 0x14f8) + uVar10 * 8);
            if (plVar2 != (longlong *) 0x0) {
                (**(code * *)(*plVar2 + 8))();
            }
            uVar10 = uVar10 + 1;
        } while (uVar10 < *(ulonglong * )(param_1 + 0x1500));
    }
    *(undefined8 * )(param_1 + 0x1500) = 0;
    if (*(longlong * *)(param_1 + 0x1508) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x1508) + 8))();
        *(undefined8 * )(param_1 + 0x1508) = 0;
    }
    *(undefined8 * )(param_1 + 0x1518) = 0;
    uVar10 = uVar11;
    if (*(longlong * )(param_1 + 0x1528) != 0) {
        do {
            plVar2 = *(longlong * *)(*(longlong * )(param_1 + 0x1520) + uVar10 * 8);
            if (plVar2 != (longlong *) 0x0) {
                (**(code * *)(*plVar2 + 8))();
            }
            uVar10 = uVar10 + 1;
        } while (uVar10 < *(ulonglong * )(param_1 + 0x1528));
    }
    *(undefined8 * )(param_1 + 0x1528) = 0;
    if (*(longlong * *)(param_1 + 0x1530) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x1530) + 8))();
        *(undefined8 * )(param_1 + 0x1530) = 0;
    }
    *(undefined8 * )(param_1 + 0x1540) = 0;
    if (*(longlong * )(param_1 + 0x1550) != 0) {
        do {
            plVar2 = *(longlong * *)(*(longlong * )(param_1 + 0x1548) + uVar11 * 8);
            if (plVar2 != (longlong *) 0x0) {
                (**(code * *)(*plVar2 + 8))();
            }
            uVar11 = uVar11 + 1;
        } while (uVar11 < *(ulonglong * )(param_1 + 0x1550));
    }
    uVar6 = DAT_140c63788;
    *(undefined8 * )(param_1 + 0x1550) = 0;
    local_res8 = (longlong *) 0x0;
    FUN_1401b5b50(uVar6, param_1 + 0x268, 1, 4, &local_res8);
    plVar2 = local_res8;
    pcVar1 = *(code * *)(*(longlong * )(param_1 + 0x10) + 0x748);
    if (pcVar1 == (code *) 0x0) {
        if (local_res8 == (longlong *) 0x0) {
            *(undefined8 * )(param_1 + 0x4a8) = 0;
            goto LAB_1402df4c8;
        }
        uVar6 = (**(code * *)(*local_res8 + 0x20))(local_res8);
    } else {
        uVar6 = (*pcVar1)(param_1, *(undefined8 * )(*(longlong * )(param_1 + 0x10) + 0x788));
    }
    *(undefined8 * )(param_1 + 0x4a8) = uVar6;
    if (plVar2 != (longlong *) 0x0) {
        lVar8 = (**(code * *)(*plVar2 + 0x18))(plVar2);
        if (lVar8 != 0) {
            uVar4 = (**(code * *)(*plVar2 + 0x18))(plVar2);
            iVar5 = FUN_1402e2d10(uVar4, &local_res8);
            plVar3 = local_res8;
            if (iVar5 < 0) {
                LAB_1402df4a2:
                (**(code * *)(*plVar2 + 8))(plVar2);
                return iVar5;
            }
            local_48[0] = 0;
            local_30 = 0;
            local_38 = FUN_1402df520;
            lVar8 = *plVar2;
            local_40 = param_1;
            uVar6 = (**(code * *)(*local_res8 + 0x10))(local_res8);
            uVar7 = (**(code * *)(*plVar3 + 0x18))(plVar3);
            iVar5 = (**(code * *)(lVar8 + 0x50))(plVar2, uVar7, uVar6, param_1 + 0x4a0, local_48);
            if (iVar5 < 0) {
                (**(code * *)(*plVar3 + 8))(plVar3);
                goto LAB_1402df4a2;
            }
            *(longlong * *)(param_1 + 0x4b0) = plVar3;
        }
        (**(code * *)(*plVar2 + 8))(plVar2);
    }
    LAB_1402df4c8:
    for (lVar8 = *(longlong * )(param_1 + 0x14b8); lVar8 != 0; lVar8 = *(longlong * )(lVar8 + 0x208)) {
        *(undefined4 * )(lVar8 + 0x90) = 0;
    }
    return 0;
}


void FUN_1402df520(longlong *param_1) {
    undefined4 local_18[6];

    local_18[0] = 0;
    (**(code * *)(*param_1 + 0x20))(param_1, local_18);
    return;
}


undefined8 FUN_1402df540(longlong param_1) {
    int iVar1;
    bool bVar2;
    int *piVar3;
    ulonglong uVar4;
    undefined8 uVar5;
    ulonglong uVar6;

    piVar3 = (int *) (**(code * *)(**(longlong * *)(param_1 + 0x4b0) + 0x18))();
    uVar4 = (**(code * *)(**(longlong * *)(param_1 + 0x4b0) + 0x10))();
    if (7 < uVar4) {
        if (*piVar3 == 0x41524541) {
            bVar2 = true;
        } else {
            if (*piVar3 != 0x61726561) {
                return 0x80004005;
            }
            bVar2 = false;
        }
        if (piVar3[1] == 0) {
            piVar3 = piVar3 + 2;
            uVar4 = uVar4 - 8;
            do {
                if (uVar4 == 0) {
                    return 0;
                }
                if (uVar4 < 8) {
                    return 0x80004005;
                }
                uVar6 = (ulonglong)(uint)
                piVar3[1];
                iVar1 = *piVar3;
                piVar3 = piVar3 + 2;
                if (uVar4 - 8 < uVar6) {
                    return 0x80004005;
                }
                if (iVar1 == 0x43484e4b) {
                    if (bVar2) {
                        uVar5 = FUN_1402df720();
                    } else {
                        uVar5 = FUN_1402df8a0(param_1, piVar3, uVar6);
                    }
                    LAB_1402df6e6:
                    if ((int) uVar5 < 0) {
                        return uVar5;
                    }
                } else {
                    if (iVar1 == 0x43555254) {
                        if (bVar2) {
                            uVar5 = FUN_1402e2f60(piVar3, uVar6, param_1 + 0x1530);
                        } else {
                            uVar5 = FUN_1402e3010(piVar3, uVar6, *(undefined8 * )(param_1 + 0x4b0), param_1 + 0x1530);
                        }
                        if ((int) uVar5 < 0) {
                            return uVar5;
                        }
                        uVar5 = FUN_1402dfd40(param_1);
                        goto LAB_1402df6e6;
                    }
                    if (iVar1 == 0x44484d4f) {
                        if (bVar2) {
                            uVar5 = FUN_1402e2f60(piVar3, uVar6, param_1 + 0x1508);
                        } else {
                            uVar5 = FUN_1402e3010(piVar3, uVar6, *(undefined8 * )(param_1 + 0x4b0), param_1 + 0x1508);
                        }
                        if ((int) uVar5 < 0) {
                            return uVar5;
                        }
                        uVar5 = FUN_1402dfb60(param_1);
                        goto LAB_1402df6e6;
                    }
                    if (iVar1 == 0x50524f70) {
                        if (bVar2) {
                            uVar5 = FUN_1402e2f60(piVar3, uVar6, param_1 + 0x14e0);
                        } else {
                            uVar5 = FUN_1402e3010(piVar3, uVar6, *(undefined8 * )(param_1 + 0x4b0), param_1 + 0x14e0);
                        }
                        if ((int) uVar5 < 0) {
                            return uVar5;
                        }
                        uVar5 = FUN_1402df980(param_1);
                        goto LAB_1402df6e6;
                    }
                }
                piVar3 = (int *) ((longlong) piVar3 + uVar6);
                uVar4 = (uVar4 - 8) - uVar6;
            } while (true);
        }
    }
    return 0x80004005;
}


void FUN_1402df720(longlong param_1, uint *param_2, ulonglong param_3) {
    longlong *plVar1;
    int iVar2;
    ulonglong uVar3;
    uint uVar4;
    ulonglong uVar5;
    uint *puVar6;
    longlong lVar7;
    longlong **pplVar8;
    undefined auStack1128[32];
    longlong local_448[2];
    uint local_438[256];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong) auStack1128;
    if (3 < param_3) {
        uVar3 = (ulonglong) * param_2;
        if (uVar3 <= param_3 - 4) {
            local_448[0] = 0x400;
            iVar2 = FUN_1402e30e0(local_438, local_448, param_2 + 1, *param_2);
            if ((-1 < iVar2) && (local_448[0] == 0x400)) {
                lVar7 = (longlong)(param_2 + 1) + uVar3;
                uVar3 = (param_3 - 4) - uVar3;
                uVar5 = 0;
                puVar6 = local_438;
                pplVar8 = (longlong * *)(param_1 + 0xcb8);
                do {
                    uVar4 = *puVar6;
                    if (uVar4 != 0) {
                        if (uVar3 < uVar4) break;
                        plVar1 = *pplVar8;
                        if (*(int *) (*(longlong * )(param_1 + 0x10) + 0x628) == 0) {
                            iVar2 = FUN_1402e2f60(lVar7, uVar4, param_1 + 0xcb8 + uVar5 * 8);
                        } else {
                            iVar2 = FUN_1402e3010(lVar7, uVar4, *(undefined8 * )(param_1 + 0x4b0),
                                                  param_1 + 0xcb8 + uVar5 * 8);
                        }
                        if (iVar2 < 0) break;
                        if (plVar1 != (longlong *) 0x0) {
                            (**(code * *)(*plVar1 + 8))(plVar1);
                        }
                        lVar7 = lVar7 + (ulonglong) * puVar6;
                        uVar3 = uVar3 - *puVar6;
                    }
                    uVar4 = (int) uVar5 + 1;
                    uVar5 = (ulonglong) uVar4;
                    pplVar8 = pplVar8 + 1;
                    puVar6 = puVar6 + 1;
                } while (uVar4 < 0x100);
            }
        }
    }
    FUN_1407db4f0(local_38 ^ (ulonglong) auStack1128);
    return;
}


undefined8 FUN_1402df8a0(longlong param_1, uint *param_2, ulonglong param_3) {
    longlong *plVar1;
    undefined8 uVar2;
    ulonglong uVar3;
    longlong lVar4;
    uint *puVar5;
    ulonglong uVar6;

    lVar4 = 0;
    if (param_3 != 0) {
        do {
            if (param_3 < 4) {
                return 0x80004005;
            }
            puVar5 = param_2 + 1;
            uVar6 = (ulonglong)(*param_2 & 0xffffff);
            uVar3 = lVar4 + (ulonglong)(*param_2 >> 0x18);
            if (0xff < uVar3) {
                return 0x80004005;
            }
            if (param_3 - 4 < uVar6) {
                return 0x80004005;
            }
            plVar1 = *(longlong * *)(param_1 + 0xcb8 + uVar3 * 8);
            if (*(int *) (*(longlong * )(param_1 + 0x10) + 0x628) == 0) {
                uVar2 = FUN_1402e3010(puVar5, uVar6, *(undefined8 * )(param_1 + 0x4b0));
            } else {
                uVar2 = FUN_1402e2eb0(puVar5, uVar6, param_1 + 0xcb8 + uVar3 * 8);
            }
            if ((int) uVar2 < 0) {
                return uVar2;
            }
            if (plVar1 != (longlong *) 0x0) {
                (**(code * *)(*plVar1 + 8))(plVar1);
            }
            param_2 = (uint * )((longlong) puVar5 + uVar6);
            lVar4 = uVar3 + 1;
            param_3 = (param_3 - 4) - uVar6;
        } while (param_3 != 0);
    }
    return 0;
}


undefined8 FUN_1402df980(longlong param_1) {
    longlong lVar1;
    uint *puVar2;
    ulonglong uVar3;
    longlong lVar4;
    longlong lVar5;
    ulonglong uVar6;

    if (*(longlong * *)(param_1 + 0x14e0) == (longlong *) 0x0) {
        return 0;
    }
    puVar2 = (uint * )(**(code * *)(**(longlong * *)(param_1 + 0x14e0) + 0x18))();
    uVar3 = (**(code * *)(**(longlong * *)(param_1 + 0x14e0) + 0x10))();
    if (uVar3 < 4) {
        return 0x80004005;
    }
    uVar6 = (ulonglong) * puVar2;
    puVar2 = puVar2 + 1;
    if (uVar3 - 4 < uVar6 * 0x68) {
        return 0x80004005;
    }
    if (uVar6 <= *(ulonglong * )(param_1 + 0x14f0) && *(ulonglong * )(param_1 + 0x14f0) != uVar6) {
        *(ulonglong * )(param_1 + 0x14f0) = uVar6;
    }
    lVar4 = FUN_14018dbc0(*(undefined8 * )(param_1 + 0x14e8), uVar6, 8);
    if (*(longlong * )(param_1 + 0x14e8) != lVar4) {
        FUN_1407db590(lVar4, *(longlong * )(param_1 + 0x14e8), *(longlong * )(param_1 + 0x14f0) << 3);
        lVar1 = *(longlong * )(param_1 + 0x14e8);
        if (lVar1 != 0) {
            (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        }
        *(longlong * )(param_1 + 0x14e8) = lVar4;
    }
    FUN_1402e1320(param_1 + 0x14f8, uVar6);
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        lVar1 = *(longlong * )(param_1 + 0x14f0);
        lVar4 = lVar1 + 1;
        lVar5 = FUN_14018db00(*(undefined8 * )(param_1 + 0x14e8), lVar4, 8);
        *(uint * *)(lVar5 + lVar1 * 8) = puVar2;
        if (*(longlong * )(param_1 + 0x14e8) != lVar5) {
            FUN_1407db590(lVar5, *(longlong * )(param_1 + 0x14e8), *(longlong * )(param_1 + 0x14f0) << 3);
            lVar1 = *(longlong * )(param_1 + 0x14e8);
            if (lVar1 != 0) {
                (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
            }
            *(longlong * )(param_1 + 0x14e8) = lVar5;
        }
        *(longlong * )(param_1 + 0x14f0) = lVar4;
        FUN_1402e1400(param_1 + 0x14f8, param_1 + 0x14e0);
        puVar2 = puVar2 + 0x1a;
    }
    return 0;
}


undefined8 FUN_1402dfb60(longlong param_1) {
    longlong lVar1;
    uint *puVar2;
    ulonglong uVar3;
    longlong lVar4;
    longlong lVar5;
    ulonglong uVar6;

    if (*(longlong * *)(param_1 + 0x1508) == (longlong *) 0x0) {
        return 0;
    }
    puVar2 = (uint * )(**(code * *)(**(longlong * *)(param_1 + 0x1508) + 0x18))();
    uVar3 = (**(code * *)(**(longlong * *)(param_1 + 0x1508) + 0x10))();
    if (uVar3 < 4) {
        return 0x80004005;
    }
    uVar6 = (ulonglong) * puVar2;
    puVar2 = puVar2 + 1;
    if (uVar3 - 4 < uVar6 * 0x284) {
        return 0x80004005;
    }
    if (uVar6 <= *(ulonglong * )(param_1 + 0x1518) && *(ulonglong * )(param_1 + 0x1518) != uVar6) {
        *(ulonglong * )(param_1 + 0x1518) = uVar6;
    }
    lVar4 = FUN_14018dbc0(*(undefined8 * )(param_1 + 0x1510), uVar6, 8);
    if (*(longlong * )(param_1 + 0x1510) != lVar4) {
        FUN_1407db590(lVar4, *(longlong * )(param_1 + 0x1510), *(longlong * )(param_1 + 0x1518) << 3);
        lVar1 = *(longlong * )(param_1 + 0x1510);
        if (lVar1 != 0) {
            (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        }
        *(longlong * )(param_1 + 0x1510) = lVar4;
    }
    FUN_1402e1320(param_1 + 0x1520, uVar6);
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        lVar1 = *(longlong * )(param_1 + 0x1518);
        lVar4 = lVar1 + 1;
        lVar5 = FUN_14018db00(*(undefined8 * )(param_1 + 0x1510), lVar4, 8);
        *(uint * *)(lVar5 + lVar1 * 8) = puVar2;
        if (*(longlong * )(param_1 + 0x1510) != lVar5) {
            FUN_1407db590(lVar5, *(longlong * )(param_1 + 0x1510), *(longlong * )(param_1 + 0x1518) << 3);
            lVar1 = *(longlong * )(param_1 + 0x1510);
            if (lVar1 != 0) {
                (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
            }
            *(longlong * )(param_1 + 0x1510) = lVar5;
        }
        *(longlong * )(param_1 + 0x1518) = lVar4;
        FUN_1402e1400(param_1 + 0x1520, param_1 + 0x1508);
        puVar2 = puVar2 + 0xa1;
    }
    return 0;
}


undefined8 FUN_1402dfd40(longlong param_1) {
    longlong lVar1;
    uint *puVar2;
    ulonglong uVar3;
    longlong lVar4;
    longlong lVar5;
    ulonglong uVar6;

    if (*(longlong * *)(param_1 + 0x1530) == (longlong *) 0x0) {
        return 0;
    }
    puVar2 = (uint * )(**(code * *)(**(longlong * *)(param_1 + 0x1530) + 0x18))();
    uVar3 = (**(code * *)(**(longlong * *)(param_1 + 0x1530) + 0x10))();
    if (uVar3 < 4) {
        return 0x80004005;
    }
    uVar6 = (ulonglong) * puVar2;
    puVar2 = puVar2 + 1;
    if (uVar3 - 4 < uVar6 * 0x18) {
        return 0x80004005;
    }
    if (uVar6 <= *(ulonglong * )(param_1 + 0x1540) && *(ulonglong * )(param_1 + 0x1540) != uVar6) {
        *(ulonglong * )(param_1 + 0x1540) = uVar6;
    }
    lVar4 = FUN_14018dbc0(*(undefined8 * )(param_1 + 0x1538), uVar6, 8);
    if (*(longlong * )(param_1 + 0x1538) != lVar4) {
        FUN_1407db590(lVar4, *(longlong * )(param_1 + 0x1538), *(longlong * )(param_1 + 0x1540) << 3);
        lVar1 = *(longlong * )(param_1 + 0x1538);
        if (lVar1 != 0) {
            (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        }
        *(longlong * )(param_1 + 0x1538) = lVar4;
    }
    FUN_1402e1320(param_1 + 0x1548, uVar6);
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        lVar1 = *(longlong * )(param_1 + 0x1540);
        lVar4 = lVar1 + 1;
        lVar5 = FUN_14018db00(*(undefined8 * )(param_1 + 0x1538), lVar4, 8);
        *(uint * *)(lVar5 + lVar1 * 8) = puVar2;
        if (*(longlong * )(param_1 + 0x1538) != lVar5) {
            FUN_1407db590(lVar5, *(longlong * )(param_1 + 0x1538), *(longlong * )(param_1 + 0x1540) << 3);
            lVar1 = *(longlong * )(param_1 + 0x1538);
            if (lVar1 != 0) {
                (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
            }
            *(longlong * )(param_1 + 0x1538) = lVar5;
        }
        *(longlong * )(param_1 + 0x1540) = lVar4;
        FUN_1402e1400(param_1 + 0x1548, param_1 + 0x1530);
        puVar2 = puVar2 + 6;
    }
    return 0;
}


undefined8 FUN_1402dff20(longlong *param_1, uint param_2, ulonglong *param_3) {
    uint uVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    (**(code * *)(*param_1 + 0x20))();
    uVar3 = 0;
    if (param_1[0x29e] != 0) {
        uVar4 = param_1[0x29e];
        do {
            uVar2 = uVar4 + uVar3 >> 1;
            uVar1 = **(uint * *)(param_1[0x29d] + uVar2 * 8);
            if (uVar1 < param_2) {
                uVar3 = uVar2 + 1;
                uVar2 = uVar4;
            } else if (uVar1 <= param_2) {
                if (param_3 != (ulonglong *) 0x0) {
                    *param_3 = uVar2;
                }
                return 1;
            }
            uVar4 = uVar2;
        } while (uVar3 < uVar2);
    }
    if (param_3 != (ulonglong *) 0x0) {
        *param_3 = uVar3;
    }
    return 0;
}


undefined8 FUN_1402dffc0(undefined8 param_1, undefined8 param_2, longlong param_3) {
    int iVar1;
    undefined8 uVar2;
    undefined8 local_res18[2];

    if (param_3 == 0) {
        return 0x80070057;
    }
    iVar1 = FUN_1402dff20(param_1, param_2, local_res18);
    if (iVar1 == 0) {
        return 0x80004005;
    }
    uVar2 = FUN_1402e0020(param_1, local_res18[0], param_3);
    return uVar2;
}


int FUN_1402e0020(longlong param_1, ulonglong param_2, longlong **param_3) {
    int *piVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    longlong *local_res18;

    if (param_3 == (longlong **) 0x0) {
        return -0x7ff8ffa9;
    }
    if (*(ulonglong * )(param_1 + 0x14f0) <= param_2) {
        return -0x7fffbffb;
    }
    lVar2 = param_2 * 8;
    iVar4 = FUN_1402dd480(*(longlong * )(param_1 + 0x10) + 0x6a8,
                          *(undefined8 * )(lVar2 + *(longlong * )(param_1 + 0x14e8)), &local_res18);
    if (iVar4 == 0) {
        local_res18 = (longlong *) FUN_14018b280(0x40);
        if (local_res18 == (longlong *) 0x0) {
            return -0x7ff8fff2;
        }
        lVar3 = *(longlong * )(param_1 + 0x10);
        *local_res18 = (longlong) & PTR_LAB_140b63160;
        local_res18[3] = 0;
        local_res18[6] = 0;
        *(undefined4 * )(local_res18 + 1) = 1;
        local_res18[2] = lVar3;
        LOCK();
        piVar1 = (int *) (lVar3 + 0xc);
        *piVar1 = *piVar1 + 1;
        local_res18[4] = 0;
        local_res18[5] = 0;
        local_res18[7] = 0;
        iVar4 = FUN_1402e32b0(local_res18, *(undefined8 * )(lVar2 + *(longlong * )(param_1 + 0x14e8)),
                              *(undefined8 * )(lVar2 + *(longlong * )(param_1 + 0x14f8)));
        if (iVar4 < 0) {
            (**(code * *)(*local_res18 + 8))(local_res18);
            return iVar4;
        }
    } else {
        (**(code * *) * local_res18)(local_res18);
    }
    *param_3 = local_res18;
    return 0;
}


undefined8 FUN_1402e0140(longlong *param_1, uint param_2, undefined8 param_3) {
    uint uVar1;
    undefined8 uVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    undefined4 local_18[4];

    local_18[0] = 0xffffffff;
    (**(code * *)(*param_1 + 0x20))(param_1, local_18);
    uVar5 = 0;
    if (param_1[0x2a3] != 0) {
        uVar4 = param_1[0x2a3];
        do {
            uVar3 = uVar4 + uVar5 >> 1;
            uVar1 = **(uint * *)(param_1[0x2a2] + uVar3 * 8);
            if (uVar1 < param_2) {
                uVar5 = uVar3 + 1;
                uVar3 = uVar4;
            } else if (uVar1 <= param_2) {
                uVar2 = FUN_1402e01d0(param_1, uVar3, param_3);
                return uVar2;
            }
            uVar4 = uVar3;
        } while (uVar5 < uVar3);
    }
    return 0x80004005;
}


int FUN_1402e01d0(longlong param_1, ulonglong param_2, longlong **param_3, undefined8 param_4) {
    int *piVar1;
    longlong lVar2;
    int iVar3;
    undefined4 in_XMM6_Da;
    undefined4 uVar4;
    undefined4 in_XMM6_Db;
    undefined4 uVar5;
    undefined4 in_XMM6_Dc;
    undefined4 uVar6;
    undefined4 in_XMM6_Dd;
    undefined4 uVar7;
    longlong *local_res18;

    if (param_3 == (longlong **) 0x0) {
        return -0x7ff8ffa9;
    }
    if (*(ulonglong * )(param_1 + 0x1518) <= param_2) {
        return -0x7fffbffb;
    }
    iVar3 = FUN_1402dd480(*(longlong * )(param_1 + 0x10) + 0x6d0,
                          *(undefined8 * )(*(longlong * )(param_1 + 0x1510) + param_2 * 8), &local_res18);
    if (iVar3 == 0) {
        local_res18 = (longlong *) FUN_14018b280(0x300, 1);
        if (local_res18 == (longlong *) 0x0) {
            return -0x7ff8fff2;
        }
        lVar2 = *(longlong * )(param_1 + 0x10);
        uVar4 = 0x3f800000;
        uVar5 = 0x3f800000;
        uVar6 = 0x3f800000;
        uVar7 = 0x3f800000;
        *local_res18 = (longlong) & PTR_LAB_140b63310;
        *(undefined4 * )(local_res18 + 0x4c) = 0x3f800000;
        *(undefined4 * )((longlong) local_res18 + 0x264) = 0x3f800000;
        *(undefined4 * )(local_res18 + 0x4d) = 0x3f800000;
        *(undefined4 * )((longlong) local_res18 + 0x26c) = 0x3f800000;
        *(undefined4 * )(local_res18 + 1) = 1;
        local_res18[2] = lVar2;
        LOCK();
        piVar1 = (int *) (lVar2 + 0xc);
        *piVar1 = *piVar1 + 1;
        local_res18[3] = 0;
        local_res18[4] = 0;
        local_res18[0x55] = 0;
        local_res18[0x56] = 0;
        local_res18[0x57] = 0;
        local_res18[0x58] = 0;
        local_res18[0x59] = 0;
        local_res18[0x5a] = 0;
        *(undefined4 * )((longlong) local_res18 + 0x34) = 0;
        FUN_1407e4830((longlong) local_res18 + 0x4c, 0, 0x208, param_4,
                      CONCAT412(in_XMM6_Dd, CONCAT48(in_XMM6_Dc, CONCAT44(in_XMM6_Db, in_XMM6_Da))));
        *(undefined4 * )(local_res18 + 0x4e) = 0x3f800000;
        *(undefined(*)[16])(local_res18 + 0x50) =
                CONCAT412(uVar7, CONCAT48(uVar6, CONCAT44(uVar5, uVar4)));
        iVar3 = FUN_1402e3e00(local_res18, *(undefined8 * )(*(longlong * )(param_1 + 0x1510) + param_2 * 8),
                              *(undefined8 * )(*(longlong * )(param_1 + 0x1520) + param_2 * 8));
        if (iVar3 < 0) {
            (**(code * *)(*local_res18 + 8))(local_res18);
            return iVar3;
        }
    } else {
        (**(code * *) * local_res18)(local_res18);
    }
    *param_3 = local_res18;
    return 0;
}


int FUN_1402e0360(longlong param_1, ulonglong param_2, longlong **param_3) {
    int *piVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    longlong *local_res18;

    if (param_3 == (longlong **) 0x0) {
        return -0x7ff8ffa9;
    }
    if (*(ulonglong * )(param_1 + 0x1540) <= param_2) {
        return -0x7fffbffb;
    }
    lVar2 = param_2 * 8;
    iVar4 = FUN_1402dd480(*(longlong * )(param_1 + 0x10) + 0x6f8,
                          *(undefined8 * )(lVar2 + *(longlong * )(param_1 + 0x1538)), &local_res18);
    if (iVar4 == 0) {
        local_res18 = (longlong *) FUN_14018b280(0x68);
        if (local_res18 == (longlong *) 0x0) {
            return -0x7ff8fff2;
        }
        lVar3 = *(longlong * )(param_1 + 0x10);
        *(undefined4 * )(local_res18 + 1) = 1;
        local_res18[2] = lVar3;
        *local_res18 = (longlong) & PTR_LAB_140b63490;
        LOCK();
        piVar1 = (int *) (lVar3 + 0xc);
        *piVar1 = *piVar1 + 1;
        local_res18[3] = 0;
        local_res18[4] = 0;
        *(undefined4 * )(local_res18 + 0xc) = 0;
        local_res18[0xb] = 0;
        iVar4 = FUN_1402e4640(local_res18, *(undefined8 * )(lVar2 + *(longlong * )(param_1 + 0x1538)),
                              *(undefined8 * )(lVar2 + *(longlong * )(param_1 + 0x1548)));
        if (iVar4 < 0) {
            (**(code * *)(*local_res18 + 8))(local_res18);
            return iVar4;
        }
    } else {
        (**(code * *) * local_res18)(local_res18);
    }
    *param_3 = local_res18;
    return 0;
}


void FUN_1402e0480(longlong param_1) {
    uint uVar1;
    ulonglong uVar2;
    uint *puVar3;
    longlong lVar4;
    ulonglong *puVar5;
    int iVar6;
    ulonglong uVar7;
    ulonglong uVar8;

    uVar2 = *(ulonglong * )(param_1 + 0x14f0);
    uVar8 = 0;
    if (uVar2 != 0) {
        do {
            puVar3 = *(uint * *)(*(longlong * )(param_1 + 0x14e8) + uVar8 * 8);
            uVar1 = *puVar3;
            if (*(ulonglong * )(param_1 + 0x20) == (CONCAT44(uVar1 >> 7, uVar1) & 0x7f0000007f)) {
                lVar4 = *(longlong * )(param_1 + 0x10);
                uVar7 = (**(code * *)(lVar4 + 0x6c0))();
                for (puVar5 = *(ulonglong * *)
                        (*(longlong * )(lVar4 + 0x6b8) + (uVar7 % *(ulonglong * )(lVar4 + 0x6b0)) * 8);
                     puVar5 != (ulonglong *) 0x0; puVar5 = (ulonglong *) puVar5[1]) {
                    if ((uVar7 == *puVar5) && (iVar6 = (**(code * *)(lVar4 + 0x6c8))(), iVar6 != 0)) {
                        if (puVar5 + 3 != (ulonglong *) 0x0) {
                            FUN_1402e33e0(puVar5[3], puVar3,
                                          *(undefined8 * )(*(longlong * )(param_1 + 0x14f8) + uVar8 * 8));
                        }
                        break;
                    }
                }
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < uVar2);
    }
    return;
}


void FUN_1402e0580(longlong param_1) {
    uint uVar1;
    ulonglong uVar2;
    uint *puVar3;
    longlong lVar4;
    ulonglong *puVar5;
    int iVar6;
    ulonglong uVar7;
    ulonglong uVar8;

    uVar2 = *(ulonglong * )(param_1 + 0x1518);
    uVar8 = 0;
    if (uVar2 != 0) {
        do {
            puVar3 = *(uint * *)(*(longlong * )(param_1 + 0x1510) + uVar8 * 8);
            uVar1 = *puVar3;
            if (*(ulonglong * )(param_1 + 0x20) == (CONCAT44(uVar1 >> 7, uVar1) & 0x7f0000007f)) {
                lVar4 = *(longlong * )(param_1 + 0x10);
                uVar7 = (**(code * *)(lVar4 + 0x6e8))();
                for (puVar5 = *(ulonglong * *)
                        (*(longlong * )(lVar4 + 0x6e0) + (uVar7 % *(ulonglong * )(lVar4 + 0x6d8)) * 8);
                     puVar5 != (ulonglong *) 0x0; puVar5 = (ulonglong *) puVar5[1]) {
                    if ((uVar7 == *puVar5) && (iVar6 = (**(code * *)(lVar4 + 0x6f0))(), iVar6 != 0)) {
                        if (puVar5 + 3 != (ulonglong *) 0x0) {
                            FUN_1402e3ec0(puVar5[3], puVar3,
                                          *(undefined8 * )(*(longlong * )(param_1 + 0x1520) + uVar8 * 8));
                        }
                        break;
                    }
                }
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < uVar2);
    }
    return;
}


void FUN_1402e0680(longlong param_1) {
    uint uVar1;
    ulonglong uVar2;
    uint *puVar3;
    longlong lVar4;
    ulonglong *puVar5;
    int iVar6;
    ulonglong uVar7;
    ulonglong uVar8;

    uVar2 = *(ulonglong * )(param_1 + 0x1540);
    uVar8 = 0;
    if (uVar2 != 0) {
        do {
            puVar3 = *(uint * *)(*(longlong * )(param_1 + 0x1538) + uVar8 * 8);
            uVar1 = *puVar3;
            if (*(ulonglong * )(param_1 + 0x20) == (CONCAT44(uVar1 >> 7, uVar1) & 0x7f0000007f)) {
                lVar4 = *(longlong * )(param_1 + 0x10);
                uVar7 = (**(code * *)(lVar4 + 0x710))();
                for (puVar5 = *(ulonglong * *)
                        (*(longlong * )(lVar4 + 0x708) + (uVar7 % *(ulonglong * )(lVar4 + 0x700)) * 8);
                     puVar5 != (ulonglong *) 0x0; puVar5 = (ulonglong *) puVar5[1]) {
                    if ((uVar7 == *puVar5) && (iVar6 = (**(code * *)(lVar4 + 0x718))(), iVar6 != 0)) {
                        if (puVar5 + 3 != (ulonglong *) 0x0) {
                            FUN_1402e4700(puVar5[3], puVar3,
                                          *(undefined8 * )(*(longlong * )(param_1 + 0x1548) + uVar8 * 8));
                        }
                        break;
                    }
                }
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < uVar2);
    }
    return;
}


int FUN_1402e0780(longlong param_1) {
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *) (param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    if (iVar2 + 1 == 1) {
        FUN_1401984d0(param_1 + 0x470);
    }
    return iVar2 + 1;
}


int FUN_1402e07b0(longlong param_1) {
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *) (param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 != -1) {
        if (iVar2 != 0) {
            return iVar2;
        }
        if (*(int *) (*(longlong * )(param_1 + 0x10) + 8) != 0) {
            FUN_140198370(param_1 + 0x470, param_1, *(longlong * )(param_1 + 0x10) + 0x7f8);
            return 0;
        }
    }
    if (param_1 != 0) {
        FUN_1402ded40();
        FUN_14018b900(param_1, 0);
    }
    return 0;
}


int FUN_1402e0db0(longlong param_1, uint param_2, longlong *param_3) {
    int iVar1;
    undefined8 *puVar2;

    if ((0xff < param_2) || (param_3 == (longlong *) 0x0)) {
        return -0x7ff8ffa9;
    }
    puVar2 = *(undefined8 * *)(param_1 + 0x4b8 + (ulonglong) param_2 * 8);
    if (puVar2 == (undefined8 *) 0x0) {
        puVar2 = (undefined8 *) FUN_14018b280(0x210, 1);
        if (puVar2 == (undefined8 *) 0x0) {
            return -0x7ff8fff2;
        }
        *puVar2 = &PTR_FUN_140b634f0;
        puVar2[0xe] = 0;
        puVar2[0xf] = 0;
        puVar2[0x10] = 0;
        puVar2[0x11] = 0;
        puVar2[0xc] = 0;
        *(undefined4 * )(puVar2 + 0xd) = 0;
        puVar2[0x40] = 0;
        puVar2[0x41] = 0;
        *(undefined4 * )(puVar2 + 1) = 1;
        puVar2[2] = 0;
        FUN_1407e4830(puVar2 + 0x13, 0, 0x130);
        puVar2[0x39] = 0;
        puVar2[0x3a] = 0;
        puVar2[0x3b] = 0;
        puVar2[0x3e] = 0;
        puVar2[0x3f] = 0;
        puVar2[0x3d] = 0;
        puVar2[0x3c] = 0;
        iVar1 = FUN_1402e4bf0(puVar2, param_1, (ulonglong) param_2);
        if (iVar1 < 0) {
            FUN_1402e4900(puVar2);
            FUN_14018b900(puVar2, 0);
            return iVar1;
        }
    } else {
        (**(code * *) * puVar2)(puVar2);
    }
    *param_3 = (longlong) puVar2;
    return 0;
}


void FUN_1402e1320(longlong *param_1, ulonglong param_2) {
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong lVar4;
    ulonglong uVar5;

    if (param_2 < (ulonglong) param_1[1]) {
        uVar5 = param_2;
        if (param_2 < (ulonglong) param_1[1]) {
            do {
                plVar2 = *(longlong * *)(*param_1 + uVar5 * 8);
                if (plVar2 != (longlong *) 0x0) {
                    (**(code * *)(*plVar2 + 8))();
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 < (ulonglong) param_1[1]);
        }
        param_1[1] = param_2;
    }
    lVar4 = FUN_14018dbc0(*param_1, param_2, 8);
    if (*param_1 != lVar4) {
        uVar5 = 0;
        if (param_1[1] != 0) {
            do {
                puVar1 = (undefined8 * )(lVar4 + uVar5 * 8);
                if (puVar1 != (undefined8 *) 0x0) {
                    lVar3 = *param_1;
                    *puVar1 = *(undefined8 * )(lVar3 + uVar5 * 8);
                    *(undefined8 * )(lVar3 + uVar5 * 8) = 0;
                }
                plVar2 = *(longlong * *)(*param_1 + uVar5 * 8);
                if (plVar2 != (longlong *) 0x0) {
                    (**(code * *)(*plVar2 + 8))();
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 < (ulonglong) param_1[1]);
        }
        lVar3 = *param_1;
        if (lVar3 != 0) {
            (**(code * *)(*(longlong * )(lVar3 + -0x10) + 8))(lVar3 + -0x10);
        }
        *param_1 = lVar4;
    }
    return;
}


longlong FUN_1402e1400(longlong *param_1, longlong *param_2) {
    longlong *plVar1;
    longlong lVar2;
    undefined8 *puVar3;
    longlong lVar4;
    longlong lVar5;
    ulonglong uVar6;

    lVar2 = param_1[1];
    lVar5 = FUN_14018db00(*param_1, lVar2 + 1, 8);
    plVar1 = (longlong * )(lVar5 + lVar2 * 8);
    if (plVar1 != (longlong *) 0x0) {
        puVar3 = (undefined8 * ) * param_2;
        *plVar1 = (longlong) puVar3;
        if (puVar3 != (undefined8 *) 0x0) {
            (**(code * *) * puVar3)();
        }
    }
    if (*param_1 != lVar5) {
        uVar6 = 0;
        if (param_1[1] != 0) {
            do {
                puVar3 = (undefined8 * )(lVar5 + uVar6 * 8);
                if (puVar3 != (undefined8 *) 0x0) {
                    lVar4 = *param_1;
                    *puVar3 = *(undefined8 * )(lVar4 + uVar6 * 8);
                    *(undefined8 * )(lVar4 + uVar6 * 8) = 0;
                }
                plVar1 = *(longlong * *)(*param_1 + uVar6 * 8);
                if (plVar1 != (longlong *) 0x0) {
                    (**(code * *)(*plVar1 + 8))();
                }
                uVar6 = uVar6 + 1;
            } while (uVar6 < (ulonglong) param_1[1]);
        }
        lVar4 = *param_1;
        if (lVar4 != 0) {
            (**(code * *)(*(longlong * )(lVar4 + -0x10) + 8))(lVar4 + -0x10);
        }
        *param_1 = lVar5;
    }
    param_1[1] = lVar2 + 1;
    return lVar2;
}


undefined8 *FUN_1402e14d0(undefined8 *param_1) {
    *param_1 = &PTR_LAB_140b62fe0;
    param_1[3] = 0;
    param_1[4] = 0;
    FUN_1402e2870(param_1 + 5);
    param_1[10] = 0;
    FUN_1402e27f0(param_1 + 0xb);
    *(undefined4 * )(param_1 + 1) = 1;
    *(undefined4 * )((longlong) param_1 + 0xc) = 1;
    param_1[2] = 0;
    FUN_1407e4830(param_1 + 0x10, 0, 0x60);
    param_1[0x1c] = 0;
    return param_1;
}


void FUN_1402e1540(undefined8 *param_1) {
    longlong *plVar1;

    *param_1 = &PTR_LAB_140b62fe0;
    plVar1 = (longlong *) param_1[2];
    if (plVar1 != (longlong *) 0x0) {
        (**(code * *)(*plVar1 + 0xf0))(plVar1, 0, 0);
        (**(code * *)(*(longlong *) param_1[2] + 8))();
    }
    FUN_140019490(param_1 + 0xb);
    FUN_14018b900(param_1[0xd], 0);
    param_1[0xd] = 0;
    if (param_1[10] != 0) {
        FUN_1401a4a00();
    }
    FUN_140019490(param_1 + 5);
    FUN_14018b900(param_1[7], 0);
    param_1[7] = 0;
    if (param_1[4] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[3] != 0) {
        FUN_1401a4a00(param_1 + 3);
    }
    return;
}


undefined8 FUN_1402e15f0(longlong param_1, undefined8 *param_2) {
    undefined *local_68;
    undefined *local_60;
    code *local_58;
    code *local_50;
    code *local_48;
    code *local_40;
    code *local_38;
    code *local_28;
    undefined *local_20;
    undefined *local_18;
    undefined *local_10;

    if (param_2 == (undefined8 *) 0x0) {
        return 0x80070057;
    }
    *(undefined8 * *)(param_1 + 0x10) = param_2;
    (**(code * *) * param_2)(param_2);
    FUN_1407e4830(&local_68, 0, 0x60);
    local_68 = &LAB_1402e1a80;
    local_60 = &LAB_1402e1aa0;
    local_58 = FUN_1402e1ac0;
    local_50 = FUN_1402e1bd0;
    local_48 = FUN_1402e1dd0;
    local_40 = FUN_1402e1ee0;
    local_38 = FUN_1402e1ff0;
    local_28 = FUN_1402e2040;
    local_20 = &LAB_1402e2210;
    local_18 = &LAB_1402e2290;
    local_10 = &LAB_1402e22b0;
    (**(code * *)(**(longlong * *)(param_1 + 0x10) + 0xf0))
            (*(longlong * *)(param_1 + 0x10), &local_68, param_1);
    return 0;
}


undefined8 FUN_1402e16d0(longlong param_1, uint *param_2) {
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;
    int local_res8;
    int local_resc;

    local_res8 = (int) (*param_2 + ((int) *param_2 >> 0x1f & 0xfU)) >> 4;
    local_resc = (int) (param_2[1] + ((int) param_2[1] >> 0x1f & 0xfU)) >> 4;
    uVar3 = (**(code * *)(param_1 + 0x40))(&local_res8);
    puVar1 = *(ulonglong * *)
            (*(longlong * )(param_1 + 0x38) + (uVar3 % *(ulonglong * )(param_1 + 0x30)) * 8);
    while (true) {
        if (puVar1 == (ulonglong *) 0x0) {
            return 0;
        }
        if ((uVar3 == *puVar1) && (iVar2 = (**(code * *)(param_1 + 0x48))(), iVar2 != 0)) break;
        puVar1 = (ulonglong *) puVar1[1];
    }
    if (puVar1 + 3 == (ulonglong *) 0x0) {
        return 0;
    }
    uVar3 = puVar1[3];
    if (uVar3 == 0) {
        return 0;
    }
    return *(undefined8 * )
            (uVar3 + 0x20 + (ulonglong)((param_2[1] & 0xf) * 0x10 + (*param_2 & 0xf)) * 8);
}


undefined8 FUN_1402e1790(longlong param_1, undefined8 param_2, undefined8 param_3, longlong *param_4) {
    ulonglong *puVar1;
    undefined8 *puVar2;
    int iVar3;
    ulonglong uVar4;
    longlong lVar5;
    undefined8 uVar6;
    undefined8 local_28;
    undefined8 local_20;

    local_28 = param_2;
    local_20 = param_3;
    uVar4 = (**(code * *)(param_1 + 0x70))(&local_28);
    puVar1 = *(ulonglong * *)
            (*(longlong * )(param_1 + 0x68) + (uVar4 % *(ulonglong * )(param_1 + 0x60)) * 8);
    do {
        if (puVar1 == (ulonglong *) 0x0) {
            LAB_1402e17fe:
            lVar5 = FUN_14018b280(0x38);
            if ((lVar5 == 0) || (lVar5 = FUN_1402e6820(lVar5, param_1, param_2, param_3), lVar5 == 0)) {
                uVar6 = 0x8007000e;
            } else {
                *param_4 = lVar5;
                uVar6 = 0;
            }
            return uVar6;
        }
        if ((uVar4 == *puVar1) &&
            (iVar3 = (**(code * *)(param_1 + 0x78))(&local_28, puVar1 + 2), iVar3 != 0)) {
            if (puVar1 + 4 != (ulonglong *) 0x0) {
                puVar2 = (undefined8 *) puVar1[4];
                (**(code * *) * puVar2)(puVar2);
                *param_4 = (longlong) puVar2;
                return 0;
            }
            goto LAB_1402e17fe;
        }
        puVar1 = (ulonglong *) puVar1[1];
    } while (true);
}


undefined8 FUN_1402e1870(longlong param_1, longlong *param_2, longlong **param_3) {
    longlong lVar1;
    int *piVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;
    undefined8 uVar6;
    ulonglong uVar7;
    longlong *plVar8;
    undefined8 *puVar9;
    ulonglong uVar10;
    ulonglong uVar11;

    lVar1 = (**(code * *)(*param_2 + 0x10))(param_2);
    piVar2 = (int *) (**(code * *)(*param_2 + 0x28))();
    uVar10 = 0;
    uVar11 = uVar10;
    for (plVar5 = *(longlong * *)(param_1 + 0x18); plVar5 != (longlong *) 0x0;
         plVar5 = (longlong *) plVar5[0xe]) {
        plVar3 = (longlong * )(**(code * *)(*plVar5 + 0x18))(plVar5);
        lVar4 = (**(code * *)(*plVar3 + 0x10))();
        if (lVar1 == lVar4) {
            lVar4 = (**(code * *)(*plVar3 + 0x18))();
            if ((((*(int *) (lVar4 + 4) <= *piVar2) && (*piVar2 < *(int *) (lVar4 + 0xc))) &&
                 (*(int *) (lVar4 + 8) <= piVar2[1])) && (piVar2[1] < *(int *) (lVar4 + 0x10))) {
                uVar11 = (ulonglong)((int) uVar11 + 1);
            }
        }
    }
    plVar5 = (longlong *) FUN_14018b280();
    if (plVar5 != (longlong *) 0x0) {
        *plVar5 = (longlong) & PTR_LAB_140b787c0;
        *(undefined4 * )(plVar5 + 3) = 1;
        plVar5[2] = 0;
        plVar5[1] = uVar11;
        uVar7 = uVar10;
        if ((int) uVar11 != 0) {
            uVar6 = SUB168(ZEXT816(8) * ZEXT816(uVar11), 0);
            if (SUB168(ZEXT816(8) * ZEXT816(uVar11) >> 0x40, 0) != 0) {
                uVar6 = 0xffffffffffffffff;
            }
            uVar7 = FUN_14018b280(uVar6, 1);
        }
        plVar5[2] = uVar7;
        if ((plVar5[1] == 0) || (uVar7 != 0)) {
            for (plVar3 = *(longlong * *)(param_1 + 0x18); plVar3 != (longlong *) 0x0;
                 plVar3 = (longlong *) plVar3[0xe]) {
                plVar8 = (longlong * )(**(code * *)(*plVar3 + 0x18))(plVar3);
                lVar4 = (**(code * *)(*plVar8 + 0x10))(plVar8);
                if (lVar1 == lVar4) {
                    lVar4 = (**(code * *)(*plVar8 + 0x18))(plVar8);
                    if (((*(int *) (lVar4 + 4) <= *piVar2) && (*piVar2 < *(int *) (lVar4 + 0xc))) &&
                        ((*(int *) (lVar4 + 8) <= piVar2[1] && (piVar2[1] < *(int *) (lVar4 + 0x10))))) {
                        (**(code * *)(*plVar3 + 0x20))();
                        puVar9 = (undefined8 *) FUN_1402e16d0(param_1);
                        if (puVar9 != (undefined8 *) 0x0) {
                            *(undefined8 * *)(plVar5[2] + uVar10 * 8) = puVar9;
                            (**(code * *) * puVar9)(puVar9);
                            uVar10 = (ulonglong)((int) uVar10 + 1);
                        }
                    }
                }
            }
            plVar5[1] = uVar10;
            *param_3 = plVar5;
            return 0;
        }
        (**(code * *)(*plVar5 + 0x20))(plVar5, 1);
    }
    return 0x8007000e;
}


void FUN_1402e1ac0(longlong *param_1, longlong param_2) {
    undefined8 uVar1;
    longlong lVar2;

    uVar1 = (**(code * *)(*param_1 + 0x28))();
    lVar2 = FUN_1402e16d0(param_2, uVar1);
    if (lVar2 != 0) {
        *(undefined8 * )(lVar2 + 0x30) = 0;
        if (*(code * *)(param_2 + 0x90) != (code *) 0x0) {
            // WARNING: Could not recover jumptable at 0x0001402e1b02. Too many branches
            // WARNING: Treating indirect jump as call
            (**(code * *)(param_2 + 0x90))(lVar2, *(undefined8 * )(param_2 + 0xe0));
            return;
        }
    }
    return;
}


void FUN_1402e1b10(undefined8 param_1, longlong param_2) {
    longlong *plVar1;
    int iVar2;
    ulonglong uVar3;
    longlong lVar4;
    ulonglong uVar5;
    longlong *local_res10;

    uVar5 = 0;
    local_res10 = (longlong *) 0x0;
    iVar2 = FUN_1402e1870(param_2, param_1, &local_res10);
    plVar1 = local_res10;
    if ((-1 < iVar2) && (uVar3 = (**(code * *)(*local_res10 + 0x10))(local_res10), uVar3 != 0)) {
        do {
            lVar4 = (**(code * *)(*plVar1 + 0x18))(plVar1, uVar5);
            *(undefined8 * )(lVar4 + 0x30) = 0;
            if (*(code * *)(param_2 + 0x90) != (code *) 0x0) {
                (**(code * *)(param_2 + 0x90))(lVar4, *(undefined8 * )(param_2 + 0xe0));
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < uVar3);
    }
    if (plVar1 == (longlong *) 0x0) {
        return;
    }
    // WARNING: Could not recover jumptable at 0x0001402e1bb8. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(*plVar1 + 8))(plVar1);
    return;
}


void FUN_1402e1bd0(longlong *param_1, undefined4 param_2, longlong param_3) {
    undefined8 uVar1;
    longlong lVar2;

    uVar1 = (**(code * *)(*param_1 + 0x28))();
    lVar2 = FUN_1402e16d0(param_3, uVar1);
    if (lVar2 != 0) {
        *(ulonglong * )(lVar2 + 0x30) = *(ulonglong * )(lVar2 + 0x30) & ~(1 << ((byte) param_2 & 0x3f));
        if (*(code * *)(param_3 + 0x98) != (code *) 0x0) {
            (**(code * *)(param_3 + 0x98))(lVar2, param_2, *(undefined8 * )(param_3 + 0xe0));
        }
    }
    return;
}


void FUN_1402e1c30(undefined8 param_1, int param_2, longlong param_3) {
    int iVar1;
    ulonglong uVar2;
    longlong lVar3;
    longlong *plVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    longlong *local_res18;

    if (param_2 == 0x1a) {
        local_res18 = (longlong *) 0x0;
        iVar1 = FUN_1402e1870(param_3, param_1, &local_res18);
        plVar4 = local_res18;
        if (-1 < iVar1) {
            uVar2 = (**(code * *)(*local_res18 + 0x10))(local_res18);
            uVar6 = 0;
            if (uVar2 != 0) {
                do {
                    lVar3 = (**(code * *)(*plVar4 + 0x18))(plVar4, uVar6);
                    *(ulonglong * )(lVar3 + 0x30) = *(ulonglong * )(lVar3 + 0x30) & 0xfffffffffbffffff;
                    if (*(code * *)(param_3 + 0x98) != (code *) 0x0) {
                        (**(code * *)(param_3 + 0x98))(lVar3, 0x1a, *(undefined8 * )(param_3 + 0xe0));
                        uVar5 = 0;
                        do {
                            if ((0x408072003U >> (uVar5 & 0x3f) & 1) != 0) {
                                (**(code * *)(param_3 + 0x98))
                                        (lVar3, uVar5 & 0xffffffff, *(undefined8 * )(param_3 + 0xe0));
                            }
                            uVar5 = uVar5 + 1;
                        } while (uVar5 < 0x26);
                    }
                    uVar6 = uVar6 + 1;
                } while (uVar6 < uVar2);
            }
            (**(code * *)(*plVar4 + 8))(plVar4);
            return;
        }
    } else {
        uVar6 = 1 << ((byte) param_2 & 0x3f);
        if ((uVar6 & 0x408072003) == 0) {
            return;
        }
        uVar2 = 0;
        local_res18 = (longlong *) 0x0;
        iVar1 = FUN_1402e1870(param_3, param_1, &local_res18);
        plVar4 = local_res18;
        if (-1 < iVar1) {
            uVar5 = (**(code * *)(*local_res18 + 0x10))(local_res18);
            if (uVar5 != 0) {
                do {
                    lVar3 = (**(code * *)(*plVar4 + 0x18))(plVar4, uVar2);
                    *(ulonglong * )(lVar3 + 0x30) = *(ulonglong * )(lVar3 + 0x30) & ~uVar6;
                    if (*(code * *)(param_3 + 0x98) != (code *) 0x0) {
                        (**(code * *)(param_3 + 0x98))(lVar3, param_2, *(undefined8 * )(param_3 + 0xe0));
                    }
                    uVar2 = uVar2 + 1;
                } while (uVar2 < uVar5);
            }
            lVar3 = *plVar4;
            goto LAB_1402e1dae;
        }
    }
    if (local_res18 == (longlong *) 0x0) {
        return;
    }
    lVar3 = *local_res18;
    plVar4 = local_res18;
    LAB_1402e1dae:
    (**(code * *)(lVar3 + 8))(plVar4);
    return;
}


void FUN_1402e1dd0(longlong *param_1, longlong param_2) {
    undefined8 uVar1;
    longlong lVar2;

    if (*(longlong * )(param_2 + 0xa0) != 0) {
        uVar1 = (**(code * *)(*param_1 + 0x28))();
        lVar2 = FUN_1402e16d0(param_2, uVar1);
        if (lVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001402e1e0f. Too many branches
            // WARNING: Treating indirect jump as call
            (**(code * *)(param_2 + 0xa0))(lVar2, *(undefined8 * )(param_2 + 0xe0));
            return;
        }
    }
    return;
}


void FUN_1402e1e20(undefined8 param_1, longlong param_2) {
    longlong *plVar1;
    int iVar2;
    ulonglong uVar3;
    undefined8 uVar4;
    ulonglong uVar5;
    longlong *local_res10;

    if (*(longlong * )(param_2 + 0xa0) != 0) {
        uVar5 = 0;
        local_res10 = (longlong *) 0x0;
        iVar2 = FUN_1402e1870(param_2, param_1, &local_res10);
        plVar1 = local_res10;
        if (iVar2 < 0) {
            if (local_res10 != (longlong *) 0x0) {
                // WARNING: Could not recover jumptable at 0x0001402e1e6e. Too many branches
                // WARNING: Treating indirect jump as call
                (**(code * *)(*local_res10 + 8))();
                return;
            }
        } else {
            uVar3 = (**(code * *)(*local_res10 + 0x10))(local_res10);
            if (uVar3 != 0) {
                do {
                    uVar4 = (**(code * *)(*plVar1 + 0x18))(plVar1, uVar5);
                    (**(code * *)(param_2 + 0xa0))(uVar4, *(undefined8 * )(param_2 + 0xe0));
                    uVar5 = uVar5 + 1;
                } while (uVar5 < uVar3);
            }
            (**(code * *)(*plVar1 + 8))(plVar1);
        }
    }
    return;
}


void FUN_1402e1ee0(longlong *param_1, longlong param_2) {
    undefined8 uVar1;
    longlong lVar2;

    if (*(longlong * )(param_2 + 0xa8) != 0) {
        uVar1 = (**(code * *)(*param_1 + 0x28))();
        lVar2 = FUN_1402e16d0(param_2, uVar1);
        if (lVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001402e1f1f. Too many branches
            // WARNING: Treating indirect jump as call
            (**(code * *)(param_2 + 0xa8))(lVar2, *(undefined8 * )(param_2 + 0xe0));
            return;
        }
    }
    return;
}


void FUN_1402e1f30(undefined8 param_1, longlong param_2) {
    longlong *plVar1;
    int iVar2;
    ulonglong uVar3;
    undefined8 uVar4;
    ulonglong uVar5;
    longlong *local_res10;

    if (*(longlong * )(param_2 + 0xa8) != 0) {
        uVar5 = 0;
        local_res10 = (longlong *) 0x0;
        iVar2 = FUN_1402e1870(param_2, param_1, &local_res10);
        plVar1 = local_res10;
        if (iVar2 < 0) {
            if (local_res10 != (longlong *) 0x0) {
                // WARNING: Could not recover jumptable at 0x0001402e1f7e. Too many branches
                // WARNING: Treating indirect jump as call
                (**(code * *)(*local_res10 + 8))();
                return;
            }
        } else {
            uVar3 = (**(code * *)(*local_res10 + 0x10))(local_res10);
            if (uVar3 != 0) {
                do {
                    uVar4 = (**(code * *)(*plVar1 + 0x18))(plVar1, uVar5);
                    (**(code * *)(param_2 + 0xa8))(uVar4, *(undefined8 * )(param_2 + 0xe0));
                    uVar5 = uVar5 + 1;
                } while (uVar5 < uVar3);
            }
            (**(code * *)(*plVar1 + 8))(plVar1);
        }
    }
    return;
}


void FUN_1402e1ff0(longlong *param_1, longlong param_2) {
    undefined8 uVar1;
    longlong lVar2;

    if (*(longlong * )(param_2 + 0xb0) != 0) {
        uVar1 = (**(code * *)(*param_1 + 0x28))();
        lVar2 = FUN_1402e16d0(param_2, uVar1);
        if (lVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001402e202f. Too many branches
            // WARNING: Treating indirect jump as call
            (**(code * *)(param_2 + 0xb0))(lVar2, *(undefined8 * )(param_2 + 0xe0));
            return;
        }
    }
    return;
}


void FUN_1402e2040(longlong *param_1, longlong param_2) {
    undefined8 uVar1;
    longlong lVar2;

    if (*(longlong * )(param_2 + 0xc0) != 0) {
        uVar1 = (**(code * *)(*param_1 + 0x28))();
        lVar2 = FUN_1402e16d0(param_2, uVar1);
        if (lVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001402e207f. Too many branches
            // WARNING: Treating indirect jump as call
            (**(code * *)(param_2 + 0xc0))(lVar2, *(undefined8 * )(param_2 + 0xe0));
            return;
        }
    }
    return;
}


void FUN_1402e2090(undefined8 param_1, longlong param_2) {
    longlong *plVar1;
    int iVar2;
    ulonglong uVar3;
    undefined8 uVar4;
    ulonglong uVar5;
    longlong *local_res10;

    if (*(longlong * )(param_2 + 0xb0) != 0) {
        uVar5 = 0;
        local_res10 = (longlong *) 0x0;
        iVar2 = FUN_1402e1870(param_2, param_1, &local_res10);
        plVar1 = local_res10;
        if (iVar2 < 0) {
            if (local_res10 != (longlong *) 0x0) {
                // WARNING: Could not recover jumptable at 0x0001402e20de. Too many branches
                // WARNING: Treating indirect jump as call
                (**(code * *)(*local_res10 + 8))();
                return;
            }
        } else {
            uVar3 = (**(code * *)(*local_res10 + 0x10))(local_res10);
            if (uVar3 != 0) {
                do {
                    uVar4 = (**(code * *)(*plVar1 + 0x18))(plVar1, uVar5);
                    (**(code * *)(param_2 + 0xb0))(uVar4, *(undefined8 * )(param_2 + 0xe0));
                    uVar5 = uVar5 + 1;
                } while (uVar5 < uVar3);
            }
            (**(code * *)(*plVar1 + 8))(plVar1);
        }
    }
    return;
}


void FUN_1402e2150(undefined8 param_1, longlong param_2) {
    longlong *plVar1;
    int iVar2;
    ulonglong uVar3;
    undefined8 uVar4;
    ulonglong uVar5;
    longlong *local_res10;

    if (*(longlong * )(param_2 + 0xc0) != 0) {
        uVar5 = 0;
        local_res10 = (longlong *) 0x0;
        iVar2 = FUN_1402e1870(param_2, param_1, &local_res10);
        plVar1 = local_res10;
        if (iVar2 < 0) {
            if (local_res10 != (longlong *) 0x0) {
                // WARNING: Could not recover jumptable at 0x0001402e219e. Too many branches
                // WARNING: Treating indirect jump as call
                (**(code * *)(*local_res10 + 8))();
                return;
            }
        } else {
            uVar3 = (**(code * *)(*local_res10 + 0x10))(local_res10);
            if (uVar3 != 0) {
                do {
                    uVar4 = (**(code * *)(*plVar1 + 0x18))(plVar1, uVar5);
                    (**(code * *)(param_2 + 0xc0))(uVar4, *(undefined8 * )(param_2 + 0xe0));
                    uVar5 = uVar5 + 1;
                } while (uVar5 < uVar3);
            }
            (**(code * *)(*plVar1 + 8))(plVar1);
        }
    }
    return;
}


void FUN_1402e2230(longlong param_1, longlong param_2) {
    longlong lVar1;

    if (*(longlong * )(param_2 + 200) != 0) {
        for (lVar1 = *(longlong * )(param_2 + 0x50); lVar1 != 0; lVar1 = *(longlong * )(lVar1 + 0x30)) {
            if (param_1 == *(longlong * )(lVar1 + 0x20)) {
                (**(code * *)(param_2 + 200))(lVar1, *(undefined8 * )(param_2 + 0xe0));
            }
        }
    }
    return;
}


int FUN_1402e22d0(longlong param_1) {
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *) (param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    LOCK();
    piVar1 = (int *) (param_1 + 0xc);
    *piVar1 = *piVar1 + -1;
    if ((*piVar1 == 0) && (param_1 != 0)) {
        FUN_1402e1540();
        FUN_14018b900(param_1, 0);
    }
    return iVar2 + -1;
}


int FUN_1402e2340(longlong param_1, uint *param_2, undefined8 *param_3) {
    int iVar1;
    undefined8 *local_res10;

    if (((0x7f < *param_2) || (0x7f < param_2[1])) || (param_3 == (undefined8 *) 0x0)) {
        return -0x7ff8ffa9;
    }
    iVar1 = FUN_1402dd480(param_1 + 0x28, param_2, &local_res10);
    if (iVar1 == 0) {
        local_res10 = (undefined8 *) FUN_14018b280(0x858, 1);
        if (local_res10 == (undefined8 *) 0x0) {
            return -0x7ff8fff2;
        }
        *local_res10 = &PTR_LAB_140b63840;
        local_res10[0x104] = 0;
        local_res10[0x105] = 0;
        local_res10[0x106] = 0;
        local_res10[0x107] = 0;
        local_res10[0x108] = 0;
        local_res10[0x109] = 0;
        local_res10[0x10a] = 0;
        local_res10[2] = 0;
        local_res10[3] = 0;
        *(undefined4 * )(local_res10 + 1) = 1;
        FUN_1407e4830(local_res10 + 4, 0, 0x800);
        iVar1 = FUN_1402e94f0(local_res10, param_1, param_2);
        if (iVar1 < 0) {
            FUN_1402e93b0(local_res10);
            FUN_14018b900(local_res10, 0);
            return iVar1;
        }
    } else {
        (**(code * *) * local_res10)(local_res10);
    }
    *param_3 = local_res10;
    return 0;
}


void FUN_1402e24a0(longlong param_1, undefined8 *param_2, undefined8 param_3) {
    undefined8 uVar1;

    if (param_2 != (undefined8 *) 0x0) {
        *(undefined8 * )(param_1 + 0x80) = *param_2;
        *(undefined8 * )(param_1 + 0x88) = param_2[1];
        *(undefined8 * )(param_1 + 0x90) = param_2[2];
        *(undefined8 * )(param_1 + 0x98) = param_2[3];
        *(undefined8 * )(param_1 + 0xa0) = param_2[4];
        *(undefined8 * )(param_1 + 0xa8) = param_2[5];
        *(undefined8 * )(param_1 + 0xb0) = param_2[6];
        *(undefined8 * )(param_1 + 0xb8) = param_2[7];
        *(undefined8 * )(param_1 + 0xc0) = param_2[8];
        *(undefined8 * )(param_1 + 200) = param_2[9];
        *(undefined8 * )(param_1 + 0xd0) = param_2[10];
        uVar1 = param_2[0xb];
        *(undefined8 * )(param_1 + 0xe0) = param_3;
        *(undefined8 * )(param_1 + 0xd8) = uVar1;
        return;
    }
    FUN_1407e4830(param_1 + 0x80, 0, 0x60);
    *(undefined8 * )(param_1 + 0xe0) = 0;
    return;
}


int FUN_1402e2570(undefined8 param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4,
                  undefined4 param_5, undefined4 param_6, longlong **param_7) {
    int iVar1;
    longlong *plVar2;

    if (param_7 == (longlong **) 0x0) {
        iVar1 = -0x7ff8ffa9;
    } else {
        plVar2 = (longlong *) FUN_14018b280();
        if (plVar2 == (longlong *) 0x0) {
            iVar1 = -0x7ff8fff2;
        } else {
            *plVar2 = (longlong) & PTR_LAB_140b638b8;
            plVar2[0xd] = 0;
            plVar2[0xe] = 0;
            plVar2[2] = 0;
            plVar2[3] = 0;
            *(undefined4 * )(plVar2 + 1) = 1;
            *(undefined4 * )((longlong) plVar2 + 0xc) = 1;
            iVar1 = FUN_1402e97e0(plVar2, param_1, param_2, param_3, param_4, param_5, param_6);
            if (iVar1 < 0) {
                (**(code * *)(*plVar2 + 8))(plVar2);
            } else {
                *param_7 = plVar2;
                iVar1 = 0;
            }
        }
    }
    return iVar1;
}


undefined8 FUN_1402e2650(undefined8 param_1, undefined8 param_2, longlong *param_3) {
    longlong lVar1;

    if (param_3 == (longlong *) 0x0) {
        return 0x80070057;
    }
    lVar1 = FUN_1402e16d0();
    if ((lVar1 != 0) && (*(longlong * )(lVar1 + 0x20) != 0)) {
        *param_3 = *(longlong * )(lVar1 + 0x20);
        (**(code * *) * *(undefined8 * *)(lVar1 + 0x20))();
        return 0;
    }
    *param_3 = 0;
    return 1;
}


undefined8 FUN_1402e26b0(longlong param_1, longlong **param_2) {
    longlong lVar1;
    undefined8 *puVar2;
    undefined auVar3[16];
    longlong *plVar4;
    undefined8 uVar5;
    ulonglong uVar6;
    uint uVar7;
    ulonglong uVar8;

    if (param_2 == (longlong **) 0x0) {
        return 0x80070057;
    }
    plVar4 = (longlong *) FUN_14018b280();
    if (plVar4 != (longlong *) 0x0) {
        uVar8 = 0;
        *plVar4 = (longlong) & PTR_LAB_140b787c0;
        *(undefined4 * )(plVar4 + 3) = 1;
        plVar4[1] = 0;
        plVar4[2] = 0;
        uVar7 = 0;
        uVar6 = uVar8;
        for (lVar1 = *(longlong * )(param_1 + 0x18); lVar1 != 0; lVar1 = *(longlong * )(lVar1 + 0x70)) {
            uVar7 = (int) uVar6 + 1;
            uVar6 = (ulonglong) uVar7;
        }
        plVar4[1] = (ulonglong) uVar7;
        uVar6 = uVar8;
        if (uVar7 != 0) {
            auVar3 = ZEXT816(8) * ZEXT816((ulonglong) uVar7);
            uVar5 = SUB168(auVar3, 0);
            if (SUB168(auVar3 >> 0x40, 0) != 0) {
                uVar5 = 0xffffffffffffffff;
            }
            uVar6 = FUN_14018b280(uVar5, 1);
        }
        plVar4[2] = uVar6;
        if ((plVar4[1] == 0) || (uVar6 != 0)) {
            for (puVar2 = *(undefined8 * *)(param_1 + 0x18); puVar2 != (undefined8 *) 0x0;
                 puVar2 = (undefined8 *) puVar2[0xe]) {
                *(undefined8 * *)(plVar4[2] + uVar8 * 8) = puVar2;
                (**(code * *) * puVar2)();
                uVar8 = (ulonglong)((int) uVar8 + 1);
            }
            *param_2 = plVar4;
            uVar5 = 0;
        } else {
            (**(code * *)(*plVar4 + 0x20))(plVar4, 1);
            uVar5 = 0x8007000e;
        }
        return uVar5;
    }
    return 0x8007000e;
}


undefined8 *FUN_1402e27f0(undefined8 *param_1) {
    ulonglong uVar1;
    undefined8 uVar2;

    *param_1 = 0;
    uVar1 = FUN_1401a40c0(0x1ff3);
    param_1[1] = uVar1;
    uVar2 = SUB168(ZEXT816(8) * ZEXT816(uVar1), 0);
    if (SUB168(ZEXT816(8) * ZEXT816(uVar1) >> 0x40, 0) != 0) {
        uVar2 = 0xffffffffffffffff;
    }
    uVar2 = FUN_14018b280(uVar2, 0);
    param_1[2] = uVar2;
    FUN_1407e4830(uVar2, 0, param_1[1] << 3);
    param_1[3] = &LAB_1402e67e0;
    param_1[4] = &LAB_1402e6800;
    return param_1;
}


undefined8 *FUN_1402e2870(undefined8 *param_1) {
    ulonglong uVar1;
    undefined8 uVar2;

    *param_1 = 0;
    uVar1 = FUN_1401a40c0(0);
    param_1[1] = uVar1;
    uVar2 = SUB168(ZEXT816(8) * ZEXT816(uVar1), 0);
    if (SUB168(ZEXT816(8) * ZEXT816(uVar1) >> 0x40, 0) != 0) {
        uVar2 = 0xffffffffffffffff;
    }
    uVar2 = FUN_14018b280(uVar2, 0);
    param_1[2] = uVar2;
    FUN_1407e4830(uVar2, 0, param_1[1] << 3);
    param_1[3] = FUN_1402dd520;
    param_1[4] = FUN_1402dd540;
    return param_1;
}


void FUN_1402e28e0(undefined8 *param_1) {
    int *piVar1;
    longlong *plVar2;
    longlong lVar3;

    *param_1 = &PTR_LAB_140b63100;
    if (param_1[1] != 0) {
        if ((undefined8 *) param_1[6] != (undefined8 *) 0x0) {
            *(undefined8 *) param_1[6] = param_1[7];
        }
        if (param_1[7] != 0) {
            *(undefined8 * )(param_1[7] + 0x30) = param_1[6];
        }
        plVar2 = (longlong *) param_1[1];
        param_1[6] = 0;
        param_1[7] = 0;
        if (plVar2[0xe4] == 0) {
            (**(code * *)(*plVar2 + 0xf0))(plVar2, 0, 0);
        }
        lVar3 = param_1[1];
        LOCK();
        piVar1 = (int *) (lVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        if ((*piVar1 == 0) && (lVar3 != 0)) {
            FUN_1402db550(lVar3);
            FUN_14018b900(lVar3, 0);
        }
    }
    if ((undefined8 *) param_1[6] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[6] = param_1[7];
    }
    if (param_1[7] != 0) {
        *(undefined8 * )(param_1[7] + 0x30) = param_1[6];
    }
    param_1[7] = 0;
    param_1[6] = 0;
    return;
}


undefined8
FUN_1402e29b0(longlong param_1, longlong param_2, int *param_3, undefined4 param_4, undefined4 param_5) {
    longlong *plVar1;
    longlong *plVar2;

    if ((((DAT_140c41d70 <= *param_3) && (param_3[2] == DAT_140c41d78 || param_3[2] < DAT_140c41d78))
         && (DAT_140c41d74 <= param_3[1])) &&
        (param_3[3] == DAT_140c41d7c || param_3[3] < DAT_140c41d7c)) {
        *(longlong * )(param_1 + 8) = param_2;
        LOCK();
        *(int *) (param_2 + 0xc) = *(int *) (param_2 + 0xc) + 1;
        *(int *) (param_1 + 0x18) = *param_3;
        *(int *) (param_1 + 0x1c) = param_3[1];
        *(int *) (param_1 + 0x20) = param_3[2];
        *(int *) (param_1 + 0x24) = param_3[3];
        plVar2 = (longlong * )(*(longlong * )(param_1 + 8) + 0x720);
        *(undefined4 * )(param_1 + 0x28) = param_4;
        *(undefined4 * )(param_1 + 0x14) = param_5;
        if (*(longlong * )(param_1 + 0x30) == 0) {
            *(longlong * *)(param_1 + 0x30) = plVar2;
            plVar1 = (longlong * )(param_1 + 0x38);
            *plVar1 = *plVar2;
            *plVar2 = param_1;
            if (*plVar1 != 0) {
                *(longlong * *)(*plVar1 + 0x30) = plVar1;
            }
        }
        return 0;
    }
    return 0x80070057;
}


int FUN_1402e2a50(longlong param_1) {
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *) (param_1 + 0x10);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_1402e28e0();
            FUN_14018b900(param_1, 0);
        }
        iVar2 = 0;
    }
    return iVar2;
}


undefined8 FUN_1402e2a90(longlong param_1, longlong param_2, ulonglong param_3) {
    int iVar1;
    int *piVar2;
    undefined8 uVar3;
    longlong local_68;
    int local_60;
    longlong local_58;
    uint local_50;
    uint local_4c;
    code *local_38;
    code *local_30;
    undefined8 local_28;

    if (param_3 == 0) {
        LAB_1402e2ba5:
        uVar3 = 0;
    } else {
        if (param_2 == 0) {
            return 0x80070057;
        }
        local_60 = (int) param_3;
        local_50 = (int) ((param_3 & 0xffffffff) >> 0xc) + 0xd +
                   (int) ((param_3 & 0xffffffff) >> 0xe) + local_60 +
                   (int) ((param_3 & 0xffffffff) >> 0x19);
        *(ulonglong * )(param_1 + 0x10) = (ulonglong) local_50 + 4;
        piVar2 = (int *) FUN_14018b280((ulonglong) local_50 + 4, 1);
        *(int **) (param_1 + 0x18) = piVar2;
        if (piVar2 == (int *) 0x0) {
            return 0x8007000e;
        }
        *piVar2 = local_60;
        local_58 = *(longlong * )(param_1 + 0x18) + 4;
        local_38 = FUN_1402e30d0;
        local_30 = FUN_14002d9c0;
        local_28 = 0;
        local_68 = param_2;
        iVar1 = FUN_1401a95f0(&local_68, 0xffffffff);
        if (iVar1 == 0) {
            iVar1 = FUN_1401a9a90(&local_68);
            if (iVar1 == 1) {
                FUN_1401aa350(&local_68);
                *(ulonglong * )(param_1 + 0x10) = (ulonglong) local_4c + 4;
                uVar3 = FUN_14018c320(*(undefined8 * )(param_1 + 0x18), (ulonglong) local_4c + 4, 0);
                *(undefined8 * )(param_1 + 0x18) = uVar3;
                goto LAB_1402e2ba5;
            }
            FUN_1401aa350(&local_68);
        }
        uVar3 = 0x80004005;
    }
    return uVar3;
}


undefined8 FUN_1402e2bc0(longlong param_1, uint *param_2, ulonglong param_3) {
    uint uVar1;
    longlong lVar2;
    undefined8 uVar3;

    if (param_3 != 0) {
        if (param_2 == (uint *) 0x0) {
            return 0x80070057;
        }
        if (param_3 < 4) {
            return 0x80004005;
        }
        uVar1 = *param_2;
        *(ulonglong * )(param_1 + 0x10) = (ulonglong) uVar1;
        lVar2 = FUN_14018b280((ulonglong) uVar1, 1);
        *(longlong * )(param_1 + 0x18) = lVar2;
        if (lVar2 == 0) {
            return 0x8007000e;
        }
        uVar3 = FUN_1402e30e0(lVar2, param_1 + 0x10, param_2 + 1, param_3 - 4);
        if ((int) uVar3 < 0) {
            return uVar3;
        }
    }
    return 0;
}


int FUN_1402e2c50(longlong param_1) {
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *) (param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_1402e2c80();
        }
        iVar2 = 0;
    }
    return iVar2;
}


undefined8 *FUN_1402e2c80(undefined8 *param_1) {
    *param_1 = &PTR_LAB_140b63120;
    if ((longlong *) param_1[4] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[4] + 8))();
        FUN_14018b900(param_1, 0);
        return param_1;
    }
    FUN_14018b900(param_1[3], 0);
    FUN_14018b900(param_1, 0);
    return param_1;
}


undefined8 FUN_1402e2d10(longlong param_1, undefined8 *param_2) {
    undefined8 *puVar1;
    longlong lVar2;

    if (param_2 == (undefined8 *) 0x0) {
        return 0x80070057;
    }
    puVar1 = (undefined8 *) FUN_14018b280(0x28);
    if (puVar1 == (undefined8 *) 0x0) {
        return 0x8007000e;
    }
    *(undefined4 * )(puVar1 + 1) = 1;
    *puVar1 = &PTR_LAB_140b63120;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    if (param_1 != 0) {
        puVar1[2] = param_1;
        lVar2 = FUN_14018b280(param_1, 1);
        puVar1[3] = lVar2;
        if (lVar2 == 0) {
            FUN_1402e2c80(puVar1);
            return 0x8007000e;
        }
    }
    *param_2 = puVar1;
    return 0;
}


undefined8 FUN_1402e2dc0(longlong param_1, longlong param_2, undefined8 *param_3) {
    undefined8 *puVar1;
    longlong lVar2;

    if (param_3 == (undefined8 *) 0x0) {
        return 0x80070057;
    }
    puVar1 = (undefined8 *) FUN_14018b280(0x28);
    if (puVar1 == (undefined8 *) 0x0) {
        return 0x8007000e;
    }
    *(undefined4 * )(puVar1 + 1) = 1;
    *puVar1 = &PTR_LAB_140b63120;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    if (param_2 != 0) {
        if (param_1 == 0) {
            FUN_1402e2c80(puVar1);
            return 0x80070057;
        }
        puVar1[2] = param_2;
        lVar2 = FUN_14018b280(param_2, 1);
        puVar1[3] = lVar2;
        if (lVar2 == 0) {
            FUN_1402e2c80(puVar1);
            return 0x8007000e;
        }
        FUN_1407db590(lVar2, param_1, puVar1[2]);
    }
    *param_3 = puVar1;
    return 0;
}


int FUN_1402e2eb0(undefined8 param_1, undefined8 param_2, undefined8 *param_3) {
    int iVar1;
    undefined8 *puVar2;

    if (param_3 == (undefined8 *) 0x0) {
        return -0x7ff8ffa9;
    }
    puVar2 = (undefined8 *) FUN_14018b280(0x28);
    if (puVar2 == (undefined8 *) 0x0) {
        iVar1 = -0x7ff8fff2;
    } else {
        *puVar2 = &PTR_LAB_140b63120;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        *(undefined4 * )(puVar2 + 1) = 1;
        iVar1 = FUN_1402e2a90(puVar2, param_1, param_2);
        if (iVar1 < 0) {
            FUN_1402e2c80(puVar2);
        } else {
            *param_3 = puVar2;
            iVar1 = 0;
        }
    }
    return iVar1;
}


int FUN_1402e2f60(undefined8 param_1, undefined8 param_2, undefined8 *param_3) {
    int iVar1;
    undefined8 *puVar2;

    if (param_3 == (undefined8 *) 0x0) {
        return -0x7ff8ffa9;
    }
    puVar2 = (undefined8 *) FUN_14018b280(0x28);
    if (puVar2 == (undefined8 *) 0x0) {
        iVar1 = -0x7ff8fff2;
    } else {
        *puVar2 = &PTR_LAB_140b63120;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        *(undefined4 * )(puVar2 + 1) = 1;
        iVar1 = FUN_1402e2bc0(puVar2, param_1, param_2);
        if (iVar1 < 0) {
            FUN_1402e2c80(puVar2);
        } else {
            *param_3 = puVar2;
            iVar1 = 0;
        }
    }
    return iVar1;
}


undefined8
FUN_1402e3010(undefined8 param_1, undefined8 param_2, undefined8 *param_3, undefined8 *param_4) {
    undefined8 uVar1;
    undefined8 *puVar2;

    if (param_4 == (undefined8 *) 0x0) {
        uVar1 = 0x80070057;
    } else {
        puVar2 = (undefined8 *) FUN_14018b280(0x28);
        if (puVar2 == (undefined8 *) 0x0) {
            uVar1 = 0x8007000e;
        } else {
            *(undefined4 * )(puVar2 + 1) = 1;
            *puVar2 = &PTR_LAB_140b63120;
            puVar2[2] = 0;
            puVar2[3] = 0;
            puVar2[4] = 0;
            if (param_3 == (undefined8 *) 0x0) {
                FUN_1402e2c80(puVar2);
                uVar1 = 0x80070057;
            } else {
                puVar2[2] = param_2;
                puVar2[3] = param_1;
                puVar2[4] = param_3;
                (**(code * *) * param_3)(param_3);
                *param_4 = puVar2;
                uVar1 = 0;
            }
        }
    }
    return uVar1;
}


void FUN_1402e30d0(undefined8 param_1, int param_2, int param_3) {
    FUN_14018b280(param_2 * param_3, 0);
    return;
}



// WARNING: Removing unreachable block (ram,0x0001402e3132)
// WARNING: Removing unreachable block (ram,0x0001402e3151)

undefined8
FUN_1402e30e0(undefined8 param_1, ulonglong *param_2, undefined8 param_3, undefined4 param_4) {
    code *pcVar1;
    undefined8 uVar2;
    int iVar3;
    longlong lVar4;
    undefined8 local_68;
    undefined4 local_60;
    undefined8 local_58;
    undefined4 local_50;
    uint local_4c;
    undefined8 local_48;
    longlong local_40;
    code *local_38;
    code *local_30;
    undefined8 local_28;

    local_50 = *(undefined4 *) param_2;
    local_28 = 0;
    local_38 = FUN_1402e30d0;
    if (s_1_2_8_140c1e4ac[0] == '1') {
        local_48 = 0;
        local_30 = FUN_14002d9c0;
        local_68 = param_3;
        local_60 = param_4;
        local_58 = param_1;
        lVar4 = FUN_1402e30d0(0, 1, 0x1be8);
        if (lVar4 != 0) {
            *(undefined8 * )(lVar4 + 0x38) = 0;
            local_40 = lVar4;
            iVar3 = FUN_1401abb20(&local_68);
            if (iVar3 == 0) {
                iVar3 = FUN_1401abda0(&local_68, 4);
                uVar2 = local_28;
                pcVar1 = local_30;
                lVar4 = local_40;
                if (iVar3 == 1) {
                    *param_2 = (ulonglong) local_4c;
                    if ((local_40 != 0) && (local_30 != (code *) 0x0)) {
                        if (*(longlong * )(local_40 + 0x38) != 0) {
                            (*local_30)(local_28);
                        }
                        (*pcVar1)(uVar2, lVar4);
                    }
                    return 0;
                }
                if ((local_40 != 0) && (local_30 != (code *) 0x0)) {
                    if (*(longlong * )(local_40 + 0x38) != 0) {
                        (*local_30)(local_28);
                    }
                    (*pcVar1)(uVar2, lVar4);
                }
            } else {
                (*local_30)(local_28, lVar4);
            }
        }
    }
    return 0x80004005;
}


void FUN_1402e3230(undefined8 *param_1) {
    int *piVar1;
    longlong lVar2;

    *param_1 = &PTR_LAB_140b63160;
    FUN_1400b6120(param_1[2] + 0x6a8, param_1[4]);
    lVar2 = param_1[2];
    LOCK();
    piVar1 = (int *) (lVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    if ((*piVar1 == 0) && (lVar2 != 0)) {
        FUN_1402db550(lVar2);
        FUN_14018b900(lVar2, 0);
    }
    if ((longlong *) param_1[6] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[6] + 8))();
    }
    if ((longlong *) param_1[3] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[3] + 8))();
    }
    return;
}


undefined8 FUN_1402e32b0(ulonglong param_1, longlong param_2, longlong *param_3) {
    ulonglong **ppuVar1;
    undefined4 uVar2;
    longlong lVar3;
    undefined4 *puVar4;
    ulonglong *puVar5;
    longlong lVar6;
    ulonglong uVar7;
    ulonglong *puVar8;
    longlong *plVar9;

    if (*(longlong * *)(param_1 + 0x18) != param_3) {
        if (param_3 != (longlong *) 0x0) {
            (**(code * *) * param_3)(param_3);
        }
        if (*(longlong * *)(param_1 + 0x18) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x18) + 8))();
        }
        *(longlong * *)(param_1 + 0x18) = param_3;
    }
    *(longlong * )(param_1 + 0x20) = param_2;
    if (*(int *) (param_2 + 0x14) == 0) {
        lVar6 = 0;
    } else {
        lVar6 = (**(code * *)(*param_3 + 0x18))();
        lVar6 = lVar6 + (ulonglong) * (uint * )(param_2 + 0x14);
    }
    *(longlong * )(param_1 + 0x28) = lVar6;
    if (*(longlong * *)(param_1 + 0x30) != param_3) {
        if (param_3 != (longlong *) 0x0) {
            (**(code * *) * param_3)(param_3);
        }
        if (*(longlong * *)(param_1 + 0x30) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x30) + 8))();
        }
        *(longlong * *)(param_1 + 0x30) = param_3;
    }
    if (*(int *) (param_2 + 0x18) == 0) {
        lVar6 = 0;
    } else {
        lVar6 = (**(code * *)(*param_3 + 0x18))();
        lVar6 = lVar6 + (ulonglong) * (uint * )(param_2 + 0x18);
    }
    lVar3 = *(longlong * )(param_1 + 0x10);
    puVar4 = *(undefined4 * *)(param_1 + 0x20);
    *(longlong * )(param_1 + 0x38) = lVar6;
    plVar9 = (longlong * )(lVar3 + 0x6a8);
    if (*plVar9 == *(longlong * )(lVar3 + 0x6b0)) {
        FUN_1400290d0(plVar9);
    }
    uVar7 = (**(code * *)(lVar3 + 0x6c0))(puVar4);
    ppuVar1 = (ulonglong * *)
            (*(longlong * )(lVar3 + 0x6b8) + (uVar7 % *(ulonglong * )(lVar3 + 0x6b0)) * 8);
    puVar8 = (ulonglong *) FUN_14018b280(0x20);
    if (puVar8 != (ulonglong *) 0x0) {
        puVar5 = *ppuVar1;
        *puVar8 = uVar7;
        puVar8[1] = (ulonglong) puVar5;
        uVar2 = *puVar4;
        puVar8[3] = param_1;
        *(undefined4 * )(puVar8 + 2) = uVar2;
    }
    *ppuVar1 = puVar8;
    *plVar9 = *plVar9 + 1;
    return 0;
}


undefined8 FUN_1402e33e0(longlong param_1, longlong param_2, longlong *param_3) {
    longlong lVar1;

    if (*(longlong * *)(param_1 + 0x18) != param_3) {
        if (param_3 != (longlong *) 0x0) {
            (**(code * *) * param_3)(param_3);
        }
        if (*(longlong * *)(param_1 + 0x18) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x18) + 8))();
        }
        *(longlong * *)(param_1 + 0x18) = param_3;
    }
    *(longlong * )(param_1 + 0x20) = param_2;
    if (*(int *) (param_2 + 0x14) == 0) {
        lVar1 = 0;
    } else {
        lVar1 = (**(code * *)(*param_3 + 0x18))();
        lVar1 = lVar1 + (ulonglong) * (uint * )(param_2 + 0x14);
    }
    *(longlong * )(param_1 + 0x28) = lVar1;
    if (*(longlong * *)(param_1 + 0x30) != param_3) {
        if (param_3 != (longlong *) 0x0) {
            (**(code * *) * param_3)(param_3);
        }
        if (*(longlong * *)(param_1 + 0x30) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x30) + 8))();
        }
        *(longlong * *)(param_1 + 0x30) = param_3;
    }
    if (*(int *) (param_2 + 0x18) != 0) {
        lVar1 = (**(code * *)(*param_3 + 0x18))();
        *(ulonglong * )(param_1 + 0x38) = lVar1 + (ulonglong) * (uint * )(param_2 + 0x18);
        return 0;
    }
    *(undefined8 * )(param_1 + 0x38) = 0;
    return 0;
}


int FUN_1402e34b0(longlong param_1) {
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *) (param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_1402e3230();
            FUN_14018b900(param_1, 0);
        }
        iVar2 = 0;
    }
    return iVar2;
}


undefined8 FUN_1402e3510(longlong param_1, undefined8 *param_2) {
    int iVar1;
    undefined8 uVar2;

    iVar1 = *(int *) (*(longlong * )(param_1 + 0x20) + 4);
    if (iVar1 == 0) {
        if (param_2 != (undefined8 *) 0x0) {
            *param_2 = 0;
        }
        return 1;
    }
    if ((param_2 != (undefined8 *) 0x0) &&
        (uVar2 = FUN_1402dc230(*(undefined8 * )(param_1 + 0x10), iVar1, param_2), (int) uVar2 < 0)) {
        return uVar2;
    }
    return 0;
}


int FUN_1402e3560(longlong *param_1, longlong **param_2) {
    int iVar1;
    longlong *local_res10;

    if (param_2 == (longlong **) 0x0) {
        return -0x7ff8ffa9;
    }
    (**(code * *) * param_1)();
    iVar1 = (**(code * *)(*param_1 + 0x50))(param_1, &local_res10);
    while (true) {
        if (iVar1 < 0) {
            (**(code * *)(*param_1 + 8))(param_1);
            return iVar1;
        }
        if (local_res10 == (longlong *) 0x0) break;
        (**(code * *)(*param_1 + 8))(param_1);
        param_1 = local_res10;
        iVar1 = (**(code * *)(*local_res10 + 0x50))(local_res10, &local_res10);
    }
    *param_2 = param_1;
    return 0;
}


int FUN_1402e3600(longlong param_1, undefined8 *param_2) {
    int iVar1;
    int iVar2;

    if (param_2 == (undefined8 *) 0x0) {
        return -0x7ff8ffa9;
    }
    iVar2 = *(int *) (*(longlong * )(param_1 + 0x20) + 8);
    if (iVar2 != 0) {
        iVar1 = FUN_1402dc230(*(undefined8 * )(param_1 + 0x10), iVar2, param_2);
        iVar2 = 0;
        if (iVar1 < 0) {
            iVar2 = iVar1;
        }
        return iVar2;
    }
    *param_2 = 0;
    return 1;
}


int FUN_1402e3650(longlong param_1, undefined8 *param_2) {
    int iVar1;
    int iVar2;

    if (param_2 == (undefined8 *) 0x0) {
        return -0x7ff8ffa9;
    }
    iVar2 = *(int *) (*(longlong * )(param_1 + 0x20) + 0xc);
    if (iVar2 != 0) {
        iVar1 = FUN_1402dc230(*(undefined8 * )(param_1 + 0x10), iVar2, param_2);
        iVar2 = 0;
        if (iVar1 < 0) {
            iVar2 = iVar1;
        }
        return iVar2;
    }
    *param_2 = 0;
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1402e3710(longlong *param_1, undefined4 *param_2) {
    longlong *plVar1;
    int iVar2;
    undefined8 uVar3;
    undefined8 uVar4;
    undefined auStack472[32];
    longlong *local_1b8[2];
    float local_1a8;
    float fStack420;
    undefined8 uStack416;
    undefined8 local_198;
    undefined8 uStack400;
    undefined local_188[8];
    undefined4 uStack384;
    float fStack380;
    undefined local_178[8];
    undefined4 uStack368;
    float fStack364;
    undefined local_168[8];
    undefined4 uStack352;
    float fStack348;
    undefined local_158[8];
    undefined4 uStack336;
    float fStack332;
    undefined4 local_148;
    undefined4 uStack324;
    undefined8 uStack320;
    undefined8 local_138;
    undefined8 uStack304;
    undefined local_128[16];
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
    undefined4 local_b8;
    undefined4 uStack180;
    undefined4 uStack176;
    undefined4 uStack172;
    undefined4 local_a8;
    undefined4 uStack164;
    undefined4 uStack160;
    undefined4 uStack156;
    ulonglong local_58;

    local_58 = DAT_140c0f7b0 ^ (ulonglong) auStack472;
    uStack400 = (**(code * *)(*param_1 + 0xa0))(param_1, local_1b8);
    local_198 = (**(code * *)(*param_1 + 0x90))(param_1, local_128);
    local_1a8 = (float) (**(code * *)(*param_1 + 0x80))(param_1);
    uStack416 = 0;
    local_198._4_4_ = (float) ((ulonglong) local_198 >> 0x20);
    uStack400._4_4_ = (float) ((ulonglong) uStack400 >> 0x20);
    fStack276 = fStack420;
    fStack272 = 0.0;
    fStack268 = 0.0;
    local_108 = (float) local_198;
    fStack260 = local_198._4_4_;
    fStack256 = (float) uStack400;
    fStack252 = uStack400._4_4_;
    local_118 = local_1a8;
    FUN_1401b0590(&local_118, local_188);
    (**(code * *) * param_1)(param_1);
    iVar2 = (**(code * *)(*param_1 + 0x50))(param_1, local_1b8);
    (**(code * *)(*param_1 + 8))(param_1);
    plVar1 = local_1b8[0];
    do {
        if (iVar2 < 0) {
            LAB_1402e3961:
            FUN_1407db4f0(local_58 ^ (ulonglong) auStack472);
            return;
        }
        if (plVar1 == (longlong *) 0x0) {
            local_188._4_4_ = SUB164(_local_188 >> 0x20, 0);
            uStack384 = SUB164(_local_188 >> 0x40, 0);
            fStack380 = SUB164(_local_188 >> 0x60, 0);
            local_168._4_4_ = SUB164(_local_168 >> 0x20, 0);
            uStack352 = SUB164(_local_168 >> 0x40, 0);
            fStack348 = SUB164(_local_168 >> 0x60, 0);
            *param_2 = local_188._0_4_;
            param_2[1] = local_188._4_4_;
            param_2[2] = uStack384;
            param_2[3] = fStack380;
            local_178._4_4_ = SUB164(_local_178 >> 0x20, 0);
            uStack368 = SUB164(_local_178 >> 0x40, 0);
            fStack364 = SUB164(_local_178 >> 0x60, 0);
            param_2[4] = local_178._0_4_;
            param_2[5] = local_178._4_4_;
            param_2[6] = uStack368;
            param_2[7] = fStack364;
            local_158._4_4_ = SUB164(_local_158 >> 0x20, 0);
            uStack336 = SUB164(_local_158 >> 0x40, 0);
            fStack332 = SUB164(_local_158 >> 0x60, 0);
            param_2[8] = local_168._0_4_;
            param_2[9] = local_168._4_4_;
            param_2[10] = uStack352;
            param_2[0xb] = fStack348;
            param_2[0xc] = local_158._0_4_;
            param_2[0xd] = local_158._4_4_;
            param_2[0xe] = uStack336;
            param_2[0xf] = fStack332;
            goto LAB_1402e3961;
        }
        local_1b8[0] = plVar1;
        uVar3 = (**(code * *)(*plVar1 + 0xa0))(plVar1, local_128);
        uVar4 = (**(code * *)(*plVar1 + 0x90))(plVar1, &local_1a8);
        local_148 = (**(code * *)(*plVar1 + 0x80))(plVar1);
        uStack320 = 0;
        local_138._0_4_ = (undefined4) uVar4;
        local_138._4_4_ = (undefined4)((ulonglong) uVar4 >> 0x20);
        uStack304._0_4_ = (undefined4) uVar3;
        uStack304._4_4_ = (undefined4)((ulonglong) uVar3 >> 0x20);
        uStack180 = uStack324;
        uStack176 = 0;
        uStack172 = 0;
        local_a8 = (undefined4) local_138;
        uStack164 = local_138._4_4_;
        uStack160 = (undefined4) uStack304;
        uStack156 = uStack304._4_4_;
        local_138 = uVar4;
        uStack304 = uVar3;
        local_b8 = local_148;
        FUN_1401b0590(&local_b8, &local_118);
        _local_188 = CONCAT412(local_188._4_4_ * fStack252 + local_188._0_4_ * fStack268 +
                               fStack236 * 0.0 + fStack380 * fStack220,
                               CONCAT48(local_188._4_4_ * fStack256 + local_188._0_4_ * fStack272 +
                                        fStack240 * 0.0 + fStack380 * fStack224,
                                        CONCAT44(local_188._4_4_ * fStack260 +
                                                 local_188._0_4_ * fStack276 + fStack244 * 0.0 +
                                                 fStack380 * fStack228,
                                                 local_188._4_4_ * local_108 +
                                                 local_188._0_4_ * local_118 + local_f8 * 0.0 +
                                                 fStack380 * local_e8)));
        _local_178 = CONCAT412(local_178._4_4_ * fStack252 + local_178._0_4_ * fStack268 +
                               fStack236 * 0.0 + fStack364 * fStack220,
                               CONCAT48(local_178._4_4_ * fStack256 + local_178._0_4_ * fStack272 +
                                        fStack240 * 0.0 + fStack364 * fStack224,
                                        CONCAT44(local_178._4_4_ * fStack260 +
                                                 local_178._0_4_ * fStack276 + fStack244 * 0.0 +
                                                 fStack364 * fStack228,
                                                 local_178._4_4_ * local_108 +
                                                 local_178._0_4_ * local_118 + local_f8 * 0.0 +
                                                 fStack364 * local_e8)));
        _local_168 = CONCAT412(local_168._4_4_ * fStack252 + local_168._0_4_ * fStack268 +
                               fStack236 * 0.0 + fStack348 * fStack220,
                               CONCAT48(local_168._4_4_ * fStack256 + local_168._0_4_ * fStack272 +
                                        fStack240 * 0.0 + fStack348 * fStack224,
                                        CONCAT44(local_168._4_4_ * fStack260 +
                                                 local_168._0_4_ * fStack276 + fStack244 * 0.0 +
                                                 fStack348 * fStack228,
                                                 local_168._4_4_ * local_108 +
                                                 local_168._0_4_ * local_118 + local_f8 * 0.0 +
                                                 fStack348 * local_e8)));
        _local_158 = CONCAT412(local_158._4_4_ * fStack252 + local_158._0_4_ * fStack268 +
                               fStack236 * 0.0 + fStack332 * fStack220,
                               CONCAT48(local_158._4_4_ * fStack256 + local_158._0_4_ * fStack272 +
                                        fStack240 * 0.0 + fStack332 * fStack224,
                                        CONCAT44(local_158._4_4_ * fStack260 +
                                                 local_158._0_4_ * fStack276 + fStack244 * 0.0 +
                                                 fStack332 * fStack228,
                                                 local_158._4_4_ * local_108 +
                                                 local_158._0_4_ * local_118 + local_f8 * 0.0 +
                                                 fStack332 * local_e8)));
        iVar2 = (**(code * *)(*plVar1 + 0x50))(plVar1, local_1b8);
        (**(code * *)(*plVar1 + 8))(plVar1);
        plVar1 = local_1b8[0];
    } while (true);
}


int *FUN_1402e39c0(longlong *param_1, int *param_2) {
    int iVar1;
    int iVar2;
    int iVar3;
    int *piVar4;

    piVar4 = (int *) (**(code * *)(*param_1 + 0xc0))();
    iVar1 = piVar4[2];
    iVar2 = piVar4[3];
    iVar3 = piVar4[1];
    *param_2 = (int) ((*piVar4 >> 0x1f & 0xfU) + *piVar4) >> 4;
    param_2[1] = (int) (iVar3 + (iVar3 >> 0x1f & 0xfU)) >> 4;
    param_2[2] = (int) ((iVar1 + 0xf >> 0x1f & 0xfU) + iVar1 + 0xf) >> 4;
    param_2[3] = (int) ((iVar2 + 0xf >> 0x1f & 0xfU) + iVar2 + 0xf) >> 4;
    return param_2;
}


undefined8 FUN_1402e3bc0(longlong param_1, undefined8 param_2, undefined8 param_3, undefined4 *param_4) {
    longlong lVar1;
    int iVar2;
    longlong local_res8;

    lVar1 = *(longlong * )(param_1 + 0x38);
    if (lVar1 != 0) {
        iVar2 = FUN_1402e3c50();
        if (iVar2 != 0) {
            if (param_4 != (undefined4 *) 0x0) {
                *param_4 = *(undefined4 * )(lVar1 + 0xc + local_res8 * 0xc);
            }
            return 1;
        }
    }
    return 0;
}


undefined8 FUN_1402e3c50(longlong param_1, int param_2, uint param_3, longlong *param_4) {
    longlong lVar1;
    uint *puVar2;
    uint *puVar3;
    uint *puVar4;
    uint uVar5;
    uint *puVar6;

    puVar2 = *(uint * *)(param_1 + 0x38);
    puVar6 = (uint *) 0x0;
    if (puVar2 == (uint *) 0x0) {
        uVar5 = 0;
    } else {
        uVar5 = *puVar2;
    }
    if (puVar2 != (uint *) 0x0) {
        puVar6 = puVar2 + 1;
    }
    puVar2 = puVar6;
    puVar3 = puVar6 + (ulonglong) uVar5 * 3;
    if (puVar6 < puVar6 + (ulonglong) uVar5 * 3) {
        do {
            lVar1 = (((longlong) puVar3 - (longlong) puVar2) / 0xc) / 2;
            puVar4 = puVar2 + lVar1 * 3;
            if (param_2 <= (int) puVar2[lVar1 * 3]) {
                if ((int) puVar2[lVar1 * 3] <= param_2) {
                    if (puVar4[1] < param_3) goto LAB_1402e3ceb;
                    if (puVar4[1] <= param_3) {
                        *param_4 = ((longlong) puVar4 - (longlong) puVar6) / 0xc;
                        return 1;
                    }
                }
                puVar2 = puVar4 + 3;
                puVar4 = puVar3;
            }
            LAB_1402e3ceb:
            puVar3 = puVar4;
        } while (puVar2 < puVar4);
    }
    *param_4 = ((longlong) puVar2 - (longlong) puVar6) / 0xc;
    return 0;
}


void FUN_1402e3d50(undefined8 *param_1) {
    int *piVar1;
    longlong **pplVar2;
    longlong lVar3;

    *param_1 = &PTR_LAB_140b63310;
    FUN_1400b6120(param_1[2] + 0x6d0, param_1 + 5);
    pplVar2 = (longlong * *)(param_1 + 0x55);
    lVar3 = 6;
    do {
        if (*pplVar2 != (longlong *) 0x0) {
            (**(code * *)(**pplVar2 + 8))();
            *pplVar2 = (longlong *) 0x0;
        }
        pplVar2 = pplVar2 + 1;
        lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    if ((longlong *) param_1[4] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[4] + 8))();
        param_1[4] = 0;
    }
    lVar3 = param_1[2];
    LOCK();
    piVar1 = (int *) (lVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    if ((*piVar1 == 0) && (lVar3 != 0)) {
        FUN_1402db550(lVar3);
        FUN_14018b900(lVar3, 0);
    }
    return;
}


ulonglong *FUN_1402e3e00(ulonglong param_1, undefined4 *param_2, undefined8 param_3) {
    ulonglong **ppuVar1;
    undefined4 uVar2;
    longlong lVar3;
    uint uVar4;
    ulonglong uVar5;
    ulonglong *puVar6;
    ulonglong *puVar7;
    longlong *plVar8;
    ulonglong *puVar9;

    lVar3 = *(longlong * )(param_1 + 0x10);
    plVar8 = (longlong * )(lVar3 + 0x6d0);
    if (*plVar8 == *(longlong * )(lVar3 + 0x6d8)) {
        FUN_1400290d0(plVar8);
    }
    uVar5 = (**(code * *)(lVar3 + 0x6e8))(param_2);
    ppuVar1 = (ulonglong * *)
            (*(longlong * )(lVar3 + 0x6e0) + (uVar5 % *(ulonglong * )(lVar3 + 0x6d8)) * 8);
    puVar6 = (ulonglong *) FUN_14018b280(0x20);
    puVar9 = (ulonglong *) 0x0;
    puVar7 = puVar9;
    if (puVar6 != (ulonglong *) 0x0) {
        puVar7 = *ppuVar1;
        *puVar6 = uVar5;
        puVar6[1] = (ulonglong) puVar7;
        uVar2 = *param_2;
        puVar6[3] = param_1;
        *(undefined4 * )(puVar6 + 2) = uVar2;
        puVar7 = puVar6;
    }
    *ppuVar1 = puVar7;
    *plVar8 = *plVar8 + 1;
    uVar4 = FUN_1402e3ec0(param_1, param_2, param_3);
    if ((int) uVar4 < 0) {
        puVar9 = (ulonglong * )(ulonglong)
        uVar4;
    }
    return puVar9;
}


undefined8 FUN_1402e3ec0(longlong param_1, undefined4 *param_2, longlong *param_3) {
    ushort uVar1;
    short sVar2;
    ushort uVar3;
    ushort uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    longlong lVar8;
    undefined8 uVar9;
    short *psVar10;
    longlong lVar11;
    uint uVar12;
    longlong **pplVar13;

    if (param_3 != (longlong *) 0x0) {
        (**(code * *) * param_3)(param_3);
    }
    uVar12 = 0;
    if (*(longlong * *)(param_1 + 0x20) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x20) + 8))();
        *(undefined8 * )(param_1 + 0x20) = 0;
    }
    *(undefined4 * *)(param_1 + 0x18) = param_2;
    *(longlong * *)(param_1 + 0x20) = param_3;
    uVar1 = *(ushort * )((longlong) param_2 + 0x4e);
    *(uint * )(param_1 + 0x2c) = (uint) * (ushort * )(param_2 + 0x13);
    *(uint * )(param_1 + 0x30) = (uint) uVar1;
    psVar10 = (short *) (param_1 + 0x4c);
    *(undefined4 * )(param_1 + 0x28) = *param_2;
    lVar11 = 0x104;
    *(undefined4 * )(param_1 + 0x34) = param_2[1];
    lVar8 = 0x6c - (longlong) psVar10;
    *(undefined4 * )(param_1 + 0x38) = param_2[2];
    *(undefined4 * )(param_1 + 0x3c) = param_2[3];
    *(undefined4 * )(param_1 + 0x40) = param_2[4];
    *(undefined4 * )(param_1 + 0x44) = param_2[5];
    *(undefined4 * )(param_1 + 0x48) = param_2[10];
    while ((lVar11 != -0x7ffffefa &&
            (sVar2 = *(short *) ((longlong) param_2 + lVar8 + (longlong) psVar10), sVar2 != 0))) {
        *psVar10 = sVar2;
        psVar10 = psVar10 + 1;
        lVar11 = lVar11 + -1;
        if (lVar11 == 0) {
            LAB_1402e3f89:
            psVar10 = psVar10 + -1;
            LAB_1402e3f8d:
            *psVar10 = 0;
            uVar5 = param_2[0x9e];
            uVar6 = param_2[0x9f];
            uVar7 = param_2[0xa0];
            *(undefined4 * )(param_1 + 0x260) = param_2[0x9d];
            *(undefined4 * )(param_1 + 0x264) = uVar5;
            *(undefined4 * )(param_1 + 0x268) = uVar6;
            *(undefined4 * )(param_1 + 0x26c) = uVar7;
            *(undefined4 * )(param_1 + 0x270) = param_2[0xb];
            *(undefined(*)[16])(param_1 + 0x280) = ZEXT816(*(ulonglong * )(param_2 + 0xc));
            *(undefined4 * )(param_1 + 0x290) = param_2[0xe];
            *(undefined4 * )(param_1 + 0x294) = param_2[0xf];
            *(undefined4 * )(param_1 + 0x298) = param_2[0x10];
            *(undefined4 * )(param_1 + 0x29c) = param_2[0x11];
            *(undefined4 * )(param_1 + 0x2a0) = param_2[0x12];
            *(undefined4 * )(param_1 + 0x2f8) = param_2[0x1a];
            (**(code * *)(*param_3 + 0x18))(param_3);
            pplVar13 = (longlong * *)(param_1 + 0x2a8);
            do {
                if (*pplVar13 != (longlong *) 0x0) {
                    (**(code * *)(**pplVar13 + 8))();
                    *pplVar13 = (longlong *) 0x0;
                }
                if (((uint) param_2[0x16] >> (uVar12 & 0x1f) & 1) == 0) {
                    uVar9 = FUN_1402ddf50();
                    if ((int) uVar9 < 0) {
                        return uVar9;
                    }
                } else {
                    uVar9 = FUN_1402de000(uVar12);
                    if ((int) uVar9 < 0) {
                        return uVar9;
                    }
                    (**(code * *)(**pplVar13 + 0x10))();
                }
                uVar12 = uVar12 + 1;
                pplVar13 = pplVar13 + 1;
            } while (uVar12 < 6);
            uVar1 = *(ushort * )(param_2 + 0x15);
            uVar3 = *(ushort * )((longlong) param_2 + 0x52);
            uVar4 = *(ushort * )((longlong) param_2 + 0x56);
            *(uint * )(param_1 + 0x2e8) = (uint) * (ushort * )(param_2 + 0x14);
            *(uint * )(param_1 + 0x2ec) = (uint) uVar3;
            *(uint * )(param_1 + 0x2f0) = (uint) uVar1;
            *(uint * )(param_1 + 0x2f4) = (uint) uVar4;
            *(int *) (param_1 + 0x2d8) =
                    (int) ((*(int *) (param_1 + 0x2e8) >> 0x1f & 0xfU) + *(int *) (param_1 + 0x2e8)) >> 4;
            *(int *) (param_1 + 0x2dc) =
                    (int) (*(int *) (param_1 + 0x2ec) + (*(int *) (param_1 + 0x2ec) >> 0x1f & 0xfU)) >> 4;
            *(int *) (param_1 + 0x2e0) = (int) (uVar1 + 0xf) >> 4;
            *(int *) (param_1 + 0x2e4) = (int) (uVar4 + 0xf) >> 4;
            return 0;
        }
    }
    if (lVar11 != 0) goto LAB_1402e3f8d;
    goto LAB_1402e3f89;
}


int FUN_1402e4180(longlong param_1) {
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *) (param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_1402e3d50();
            FUN_14018b900(param_1, 0);
        }
        iVar2 = 0;
    }
    return iVar2;
}


undefined8 FUN_1402e4270(longlong param_1, int param_2, undefined8 *param_3, int param_4) {
    if ((param_3 != (undefined8 *) 0x0) && (param_4 == 1)) {
        param_1 = param_1 + (longlong) param_2 * 8;
        *param_3 = *(undefined8 * )(param_1 + 0x2a8);
        (**(code * *) * *(undefined8 * *)(param_1 + 0x2a8))();
        return 0;
    }
    return 0x80070057;
}


undefined8 FUN_1402e42b0(undefined8 *param_1, undefined8 *param_2) {
    byte bVar1;
    ushort uVar2;
    ushort uVar3;
    ushort uVar4;
    ushort uVar5;
    ushort uVar6;
    ushort uVar7;
    longlong lVar8;
    undefined auVar9[16];
    longlong *plVar10;
    int iVar11;
    undefined8 *puVar12;
    undefined8 uVar13;
    longlong lVar14;
    undefined8 *puVar15;
    uint uVar16;
    ulonglong uVar17;
    longlong *local_50;
    longlong local_48;

    if (param_2 == (undefined8 *) 0x0) {
        return 0x80070057;
    }
    puVar12 = (undefined8 *) FUN_14018b280();
    if (puVar12 != (undefined8 *) 0x0) {
        *puVar12 = &PTR_LAB_140b787c0;
        *(undefined4 * )(puVar12 + 3) = 1;
        puVar12[1] = 0;
        puVar12[2] = 0;
        puVar12[1] = 0;
        if (*(uint * )(param_1[3] + 0x60) == 0) {
            lVar14 = 0;
        } else {
            auVar9 = ZEXT816(8) * ZEXT416(*(uint * )(param_1[3] + 0x60));
            uVar13 = SUB168(auVar9, 0);
            if (SUB168(auVar9 >> 0x40, 0) != 0) {
                uVar13 = 0xffffffffffffffff;
            }
            lVar14 = FUN_14018b280(uVar13);
        }
        puVar12[2] = lVar14;
        lVar8 = param_1[3];
        if ((*(int *) (lVar8 + 0x60) == 0) || (lVar14 != 0)) {
            local_48 = (**(code * *)(*(longlong *) param_1[4] + 0x18))();
            uVar17 = 0;
            local_48 = (ulonglong) * (uint * )(lVar8 + 100) + local_48;
            if (*(int *) (lVar8 + 0x60) != 0) {
                do {
                    lVar14 = local_48 + uVar17 * 0x14;
                    iVar11 = FUN_1402dc340(param_1[2], *(undefined4 * )(local_48 + uVar17 * 0x14), &local_50);
                    if (-1 < iVar11) {
                        uVar2 = *(ushort * )(lVar14 + 10);
                        uVar3 = *(ushort * )(lVar14 + 4);
                        uVar4 = *(ushort * )(lVar14 + 6);
                        uVar5 = *(ushort * )(lVar14 + 8);
                        uVar6 = *(ushort * )(lVar14 + 0xc);
                        uVar7 = *(ushort * )(lVar14 + 0xe);
                        bVar1 = *(byte * )(lVar14 + 0x10);
                        puVar15 = (undefined8 *) FUN_14018b280(0x38);
                        plVar10 = local_50;
                        if (puVar15 == (undefined8 *) 0x0) {
                            puVar15 = (undefined8 *) 0x0;
                        } else {
                            *(undefined4 * )(puVar15 + 1) = 1;
                            *puVar15 = &PTR_LAB_140b62e78;
                            *(uint * )((longlong) puVar15 + 0xc) = (uint) uVar3;
                            *(uint * )(puVar15 + 2) = (uint) uVar4;
                            *(uint * )(puVar15 + 3) = (uint) uVar2;
                            *(uint * )((longlong) puVar15 + 0x14) = (uint) uVar5;
                            *(uint * )((longlong) puVar15 + 0x1c) = (uint) uVar6;
                            *(uint * )(puVar15 + 4) = (uint) uVar7;
                            puVar15[5] = param_1;
                            *(uint * )((longlong) puVar15 + 0x24) = (uint) bVar1;
                            puVar15[6] = local_50;
                            (**(code * *) * param_1)(param_1);
                            (***(code ***) puVar15[6])();
                        }
                        *(undefined8 * *)(puVar12[2] + puVar12[1] * 8) = puVar15;
                        if (*(longlong * )(puVar12[2] + puVar12[1] * 8) == 0) {
                            return 0x8007000e;
                        }
                        puVar12[1] = puVar12[1] + 1;
                        if (plVar10 != (longlong *) 0x0) {
                            (**(code * *)(*plVar10 + 8))(plVar10);
                            local_50 = (longlong *) 0x0;
                        }
                    }
                    uVar16 = (int) uVar17 + 1;
                    uVar17 = (ulonglong) uVar16;
                } while (uVar16 < *(uint * )(param_1[3] + 0x60));
            }
            *param_2 = puVar12;
            return 0;
        }
    }
    return 0x8007000e;
}


void FUN_1402e45b0(undefined8 *param_1) {
    int *piVar1;
    longlong lVar2;

    *param_1 = &PTR_LAB_140b63490;
    FUN_1400b6120(param_1[2] + 0x6f8, param_1 + 5);
    if ((longlong *) param_1[0xb] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0xb] + 8))();
        param_1[0xb] = 0;
    }
    if ((longlong *) param_1[4] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[4] + 8))();
        param_1[4] = 0;
    }
    lVar2 = param_1[2];
    LOCK();
    piVar1 = (int *) (lVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    if ((*piVar1 == 0) && (lVar2 != 0)) {
        FUN_1402db550(lVar2);
        FUN_14018b900(lVar2, 0);
        return;
    }
    return;
}


ulonglong *FUN_1402e4640(ulonglong param_1, undefined4 *param_2, undefined8 param_3) {
    ulonglong **ppuVar1;
    undefined4 uVar2;
    longlong lVar3;
    uint uVar4;
    ulonglong uVar5;
    ulonglong *puVar6;
    ulonglong *puVar7;
    longlong *plVar8;
    ulonglong *puVar9;

    lVar3 = *(longlong * )(param_1 + 0x10);
    plVar8 = (longlong * )(lVar3 + 0x6f8);
    if (*plVar8 == *(longlong * )(lVar3 + 0x700)) {
        FUN_1400290d0(plVar8);
    }
    uVar5 = (**(code * *)(lVar3 + 0x710))(param_2);
    ppuVar1 = (ulonglong * *)
            (*(longlong * )(lVar3 + 0x708) + (uVar5 % *(ulonglong * )(lVar3 + 0x700)) * 8);
    puVar6 = (ulonglong *) FUN_14018b280(0x20);
    puVar9 = (ulonglong *) 0x0;
    puVar7 = puVar9;
    if (puVar6 != (ulonglong *) 0x0) {
        puVar7 = *ppuVar1;
        *puVar6 = uVar5;
        puVar6[1] = (ulonglong) puVar7;
        uVar2 = *param_2;
        puVar6[3] = param_1;
        *(undefined4 * )(puVar6 + 2) = uVar2;
        puVar7 = puVar6;
    }
    *ppuVar1 = puVar7;
    *plVar8 = *plVar8 + 1;
    uVar4 = FUN_1402e4700(param_1, param_2, param_3);
    if ((int) uVar4 < 0) {
        puVar9 = (ulonglong * )(ulonglong)
        uVar4;
    }
    return puVar9;
}


undefined8 FUN_1402e4700(longlong param_1, undefined4 *param_2, longlong *param_3) {
    ushort uVar1;
    ushort uVar2;
    ushort uVar3;
    undefined8 uVar4;

    if (param_3 != (longlong *) 0x0) {
        (**(code * *) * param_3)(param_3);
    }
    if (*(longlong * *)(param_1 + 0x20) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x20) + 8))();
        *(undefined8 * )(param_1 + 0x20) = 0;
    }
    *(undefined4 * *)(param_1 + 0x18) = param_2;
    *(longlong * *)(param_1 + 0x20) = param_3;
    *(uint * )(param_1 + 0x2c) = (uint) * (ushort * )(param_2 + 1);
    *(undefined4 * )(param_1 + 0x28) = *param_2;
    *(undefined4 * )(param_1 + 0x50) = param_2[5];
    (**(code * *)(*param_3 + 0x18))(param_3);
    if (*(longlong * *)(param_1 + 0x58) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x58) + 8))();
        *(undefined8 * )(param_1 + 0x58) = 0;
    }
    uVar4 = FUN_1402e9f20();
    if (-1 < (int) uVar4) {
        *(undefined4 * )(param_1 + 0x60) = *(undefined4 * )(param_1 + 0x2c);
        uVar1 = *(ushort * )((longlong) param_2 + 10);
        uVar2 = *(ushort * )(param_2 + 2);
        uVar3 = *(ushort * )(param_2 + 3);
        *(uint * )(param_1 + 0x40) = (uint) * (ushort * )((longlong) param_2 + 6);
        *(uint * )(param_1 + 0x44) = (uint) uVar2;
        *(uint * )(param_1 + 0x48) = (uint) uVar1;
        *(uint * )(param_1 + 0x4c) = (uint) uVar3;
        *(int *) (param_1 + 0x30) =
                (int) ((*(int *) (param_1 + 0x40) >> 0x1f & 0xfU) + *(int *) (param_1 + 0x40)) >> 4;
        *(int *) (param_1 + 0x34) =
                (int) (*(int *) (param_1 + 0x44) + (*(int *) (param_1 + 0x44) >> 0x1f & 0xfU)) >> 4;
        *(int *) (param_1 + 0x38) = (int) (uVar1 + 0xf) >> 4;
        *(int *) (param_1 + 0x3c) = (int) (uVar3 + 0xf) >> 4;
        uVar4 = 0;
    }
    return uVar4;
}


int FUN_1402e4850(longlong param_1) {
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *) (param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_1402e45b0();
            FUN_14018b900(param_1, 0);
        }
        iVar2 = 0;
    }
    return iVar2;
}


undefined8 FUN_1402e4890(longlong param_1, undefined8 *param_2, int param_3) {
    if ((param_2 != (undefined8 *) 0x0) && (param_3 == 1)) {
        *param_2 = *(undefined8 * )(param_1 + 0x58);
        (**(code * *) * *(undefined8 * *)(param_1 + 0x58))();
        return 0;
    }
    return 0x80070057;
}


void FUN_1402e4900(undefined8 *param_1) {
    ulonglong *puVar1;
    ulonglong uVar2;
    longlong *plVar3;
    DWORD DVar4;
    HANDLE hObject;
    ulonglong uVar5;
    DWORD *pDVar6;
    longlong **pplVar7;
    ulonglong uVar8;
    longlong lVar9;

    lVar9 = param_1[2];
    uVar8 = 0;
    *param_1 = &PTR_FUN_140b634f0;
    if (lVar9 != 0) {
        pDVar6 = (DWORD * )(lVar9 + 0x14c0);
        DVar4 = GetCurrentThreadId();
        uVar5 = uVar8;
        if (*pDVar6 == DVar4) {
            *(longlong * )(lVar9 + 0x14c8) = *(longlong * )(lVar9 + 0x14c8) + 1;
        } else {
            do {
                LOCK();
                puVar1 = (ulonglong * )(lVar9 + 0x14c8);
                uVar2 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar2 == 0) * (*puVar1 ^ 1);
                if (uVar2 == 0) {
                    *pDVar6 = DVar4;
                    goto LAB_1402e4978;
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 < 0x400);
            FUN_14019fb60(pDVar6);
        }
        LAB_1402e4978:
        if ((undefined8 *) param_1[0x40] != (undefined8 *) 0x0) {
            *(undefined8 *) param_1[0x40] = param_1[0x41];
        }
        if (param_1[0x41] != 0) {
            *(undefined8 * )(param_1[0x41] + 0x200) = param_1[0x40];
        }
        param_1[0x40] = 0;
        param_1[0x41] = 0;
        *(undefined8 * )(param_1[2] + 0x4b8 + (ulonglong) * (uint * )(param_1 + 6) * 8) = 0;
        if (*(ulonglong * )(lVar9 + 0x14c8) < 2) {
            *pDVar6 = 0;
            *(undefined8 * )(lVar9 + 0x14c8) = 0;
            if (*(longlong * )(lVar9 + 0x14d0) != 0) {
                if (*(longlong * )(lVar9 + 0x14d8) == 0) {
                    hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                    LOCK();
                    puVar1 = (ulonglong * )(lVar9 + 0x14d8);
                    uVar5 = *puVar1;
                    *puVar1 = *puVar1 ^ (ulonglong)(uVar5 == 0) * (*puVar1 ^ (ulonglong) hObject);
                    if (uVar5 != 0) {
                        CloseHandle(hObject);
                    }
                }
                SetEvent(*(HANDLE * )(lVar9 + 0x14d8));
            }
        } else {
            *(longlong * )(lVar9 + 0x14c8) = *(longlong * )(lVar9 + 0x14c8) + -1;
        }
        (**(code * *)(*(longlong *) param_1[2] + 8))();
    }
    pplVar7 = (longlong * *)(param_1 + 0x13);
    lVar9 = 0x26;
    do {
        if (*pplVar7 != (longlong *) 0x0) {
            (**(code * *)(**pplVar7 + 8))();
        }
        pplVar7 = pplVar7 + 1;
        lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    if ((longlong *) param_1[0x39] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x39] + 8))();
        param_1[0x39] = 0;
    }
    uVar5 = uVar8;
    if (param_1[0x3a] != 0) {
        do {
            plVar3 = *(longlong * *)(param_1[0x3b] + uVar5 * 8);
            if (plVar3 != (longlong *) 0x0) {
                (**(code * *)(*plVar3 + 8))();
            }
            uVar5 = (ulonglong)((int) uVar5 + 1);
        } while (uVar5 < (ulonglong) param_1[0x3a]);
    }
    FUN_14018b900(param_1[0x3b], 0);
    uVar5 = uVar8;
    if (param_1[0x3e] != 0) {
        do {
            plVar3 = *(longlong * *)(param_1[0x3f] + uVar5 * 8);
            if (plVar3 != (longlong *) 0x0) {
                (**(code * *)(*plVar3 + 8))();
            }
            uVar5 = (ulonglong)((int) uVar5 + 1);
        } while (uVar5 < (ulonglong) param_1[0x3e]);
    }
    FUN_14018b900(param_1[0x3f], 0);
    if (param_1[0x3c] != 0) {
        do {
            plVar3 = *(longlong * *)(param_1[0x3d] + uVar8 * 8);
            if (plVar3 != (longlong *) 0x0) {
                (**(code * *)(*plVar3 + 8))();
            }
            uVar8 = (ulonglong)((int) uVar8 + 1);
        } while (uVar8 < (ulonglong) param_1[0x3c]);
    }
    FUN_14018b900(param_1[0x3d], 0);
    if ((undefined8 *) param_1[0x40] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x40] = param_1[0x41];
    }
    if (param_1[0x41] != 0) {
        *(undefined8 * )(param_1[0x41] + 0x200) = param_1[0x40];
    }
    param_1[0x40] = 0;
    param_1[0x41] = 0;
    if ((undefined8 *) param_1[0x10] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x10] = param_1[0x11];
    }
    if (param_1[0x11] != 0) {
        *(undefined8 * )(param_1[0x11] + 0x20) = param_1[0x10];
    }
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    if ((undefined8 *) param_1[0xe] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0xe] = param_1[0xf];
    }
    if (param_1[0xf] != 0) {
        *(undefined8 * )(param_1[0xf] + 0x10) = param_1[0xe];
    }
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402e4bf0(longlong param_1, undefined8 *param_2, ulonglong param_3) {
    undefined8 *puVar1;
    ulonglong *puVar2;
    longlong *plVar3;
    longlong lVar4;
    ulonglong uVar5;
    uint uVar6;
    DWORD DVar7;
    HANDLE hObject;
    ulonglong uVar8;
    longlong *plVar9;
    DWORD *pDVar10;
    uint uVar11;
    float fVar13;
    undefined auVar12[16];

    *(undefined8 * *)(param_1 + 0x10) = param_2;
    (**(code * *) * param_2)();
    uVar6 = DAT_140c41d80;
    puVar1 = (undefined8 * )(param_1 + 0x20);
    uVar11 = (uint)(param_3 & 0xffffffff);
    *(uint *) puVar1 = *(int *) (param_2 + 5) + (uVar11 & 0xf);
    *(int *) (param_1 + 0x24) = *(int *) ((longlong) param_2 + 0x2c) + (int) ((param_3 & 0xffffffff) >> 4);
    *(undefined4 * )(param_1 + 0x28) = *(undefined4 * )(param_2 + 4);
    *(undefined4 * )(param_1 + 0x2c) = *(undefined4 * )((longlong) param_2 + 0x24);
    *(uint * )(param_1 + 0x30) = uVar11;
    uVar8 = 0;
    auVar12 = divps(ZEXT816(CONCAT44((float) *(int *) (param_1 + 0x24), (float) (int) *puVar1)),
                    _DAT_140b7b490);
    fVar13 = (SUB164(auVar12 >> 0x20, 0) - 0.5) * 65536.0;
    *(undefined(*)[16])(param_1 + 0x40) =
            ZEXT1216(CONCAT48(fVar13, CONCAT44(fVar13, (SUB164(auVar12, 0) - 0.5) * 65536.0))) &
            (undefined[16]) 0xffffffffffffffff;
    *(uint * )(param_1 + 0x44) = uVar6 ^ 0x80000000;
    auVar12 = divps(ZEXT816(CONCAT44((float) (DAT_140c77768._4_4_ + *(int *) (param_1 + 0x24)),
                                     (float) ((int) DAT_140c77768 + *(int *) puVar1))), _DAT_140b7b490);
    fVar13 = (SUB164(auVar12 >> 0x20, 0) - 0.5) * 65536.0;
    *(undefined(*)[16])(param_1 + 0x50) =
            ZEXT1216(CONCAT48(fVar13, CONCAT44(fVar13, (SUB164(auVar12, 0) - 0.5) * 65536.0))) &
            (undefined[16]) 0xffffffffffffffff;
    lVar4 = *(longlong * )(param_1 + 0x10);
    pDVar10 = (DWORD * )(lVar4 + 0x14c0);
    *(uint * )(param_1 + 0x54) = uVar6;
    DVar7 = GetCurrentThreadId();
    if (*pDVar10 == DVar7) {
        *(longlong * )(lVar4 + 0x14c8) = *(longlong * )(lVar4 + 0x14c8) + 1;
    } else {
        do {
            LOCK();
            puVar2 = (ulonglong * )(lVar4 + 0x14c8);
            uVar5 = *puVar2;
            *puVar2 = *puVar2 ^ (ulonglong)(uVar5 == 0) * (*puVar2 ^ 1);
            if (uVar5 == 0) {
                *pDVar10 = DVar7;
                goto LAB_1402e4df4;
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < 0x400);
        FUN_14019fb60();
    }
    LAB_1402e4df4:
    *(longlong * )(*(longlong * )(param_1 + 0x10) + 0x4b8 + (ulonglong) * (uint * )(param_1 + 0x30) * 8) =
            param_1;
    plVar9 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x14b8);
    if (*(longlong * )(param_1 + 0x200) == 0) {
        *(longlong * *)(param_1 + 0x200) = plVar9;
        plVar3 = (longlong * )(param_1 + 0x208);
        *plVar3 = *plVar9;
        *plVar9 = param_1;
        if (*plVar3 != 0) {
            *(longlong * *)(*plVar3 + 0x200) = plVar3;
        }
    }
    *(undefined4 * )(param_1 + 0x90) = 0;
    if (*(ulonglong * )(lVar4 + 0x14c8) < 2) {
        *pDVar10 = 0;
        *(undefined8 * )(lVar4 + 0x14c8) = 0;
        if (*(longlong * )(lVar4 + 0x14d0) != 0) {
            if (*(longlong * )(lVar4 + 0x14d8) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar2 = (ulonglong * )(lVar4 + 0x14d8);
                uVar8 = *puVar2;
                *puVar2 = *puVar2 ^ (ulonglong)(uVar8 == 0) * (*puVar2 ^ (ulonglong) hObject);
                if (uVar8 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar4 + 0x14d8));
        }
    } else {
        *(longlong * )(lVar4 + 0x14c8) = *(longlong * )(lVar4 + 0x14c8) + -1;
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1402e4ec0(longlong param_1) {
    longlong *plVar1;
    longlong *plVar2;
    int iVar3;
    uint *puVar4;
    longlong **pplVar5;
    longlong *plVar6;
    longlong *plVar7;
    longlong **pplVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    longlong lVar11;
    uint uVar12;
    int *piVar13;
    ulonglong local_res8;
    longlong *local_res10;
    ulonglong local_res18;
    longlong *local_res20;
    undefined **local_2e8;
    wchar_t *local_2e0;
    LPVOID local_2d8;
    ulonglong local_2d0;
    undefined **local_2c8;
    wchar_t *local_2c0;
    LPVOID local_2b8;
    longlong local_2b0;
    undefined **local_2a8;
    undefined8 local_2a0;
    LPVOID local_298;
    undefined **local_290;
    undefined8 uStack648;
    undefined8 local_280;
    int iStack632;
    undefined4 uStack628;
    undefined8 local_270;
    longlong *local_268;
    undefined8 local_260;
    longlong local_258;
    longlong *local_250;
    longlong local_248;
    undefined **local_238;
    undefined8 local_230;
    LPVOID local_228;
    undefined **local_218;
    wchar_t *local_210;
    LPVOID local_208;
    longlong local_200;
    undefined **local_1f8;
    wchar_t *local_1f0;
    LPVOID local_1e8;
    ulonglong local_1e0;
    undefined4 local_1d8;
    undefined4 uStack468;
    undefined4 uStack464;
    undefined4 uStack460;
    undefined4 local_1c8;
    undefined4 uStack452;
    int iStack448;
    undefined4 uStack444;
    longlong *local_1b8[38];
    longlong *local_88;
    longlong *local_80;
    longlong local_78;
    longlong *local_70;
    longlong local_68;
    undefined8 local_60;
    undefined8 local_58;

    pplVar5 = local_1b8;
    lVar11 = 0x26;
    do {
        plVar7 = *(longlong * *)((param_1 - (longlong) local_1b8) + 0x98 + (longlong) pplVar5);
        *pplVar5 = plVar7;
        if (plVar7 != (longlong *) 0x0) {
            (**(code * *) * plVar7)();
        }
        pplVar5 = pplVar5 + 1;
        lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    local_res20 = *(longlong * *)(param_1 + 0x1c8);
    uVar10 = 0;
    local_88 = local_res20;
    local_268 = *(longlong * *)(param_1 + 0x1d0);
    local_80 = local_268;
    local_248 = *(longlong * )(param_1 + 0x1d8);
    local_78 = *(longlong * )(param_1 + 0x1d8);
    local_250 = *(longlong * *)(param_1 + 0x1f0);
    local_70 = *(longlong * *)(param_1 + 0x1f0);
    local_258 = *(longlong * )(param_1 + 0x1f8);
    local_68 = local_258;
    local_270 = *(undefined8 * )(param_1 + 0x1e0);
    local_60 = local_270;
    local_260 = *(undefined8 * )(param_1 + 0x1e8);
    local_58 = local_260;
    *(undefined8 * )(param_1 + 0x1c8) = 0;
    *(undefined8 * )(param_1 + 0x1d0) = 0;
    *(undefined8 * )(param_1 + 0x1d8) = 0;
    *(undefined8 * )(param_1 + 0x1f0) = 0;
    *(undefined8 * )(param_1 + 0x1f8) = 0;
    *(undefined8 * )(param_1 + 0x1e0) = 0;
    *(undefined8 * )(param_1 + 0x1e8) = 0;
    plVar7 = *(longlong * *)
            (*(longlong * )(param_1 + 0x10) + 0xcb8 + (ulonglong) * (uint * )(param_1 + 0x30) * 8);
    if (plVar7 != (longlong *) 0x0) {
        local_res10 = (longlong *) 0x0;
        if (*(int *) (*(longlong * )(*(longlong * )(param_1 + 0x10) + 0x10) + 0x628) == 0) {
            (**(code * *) * plVar7)(plVar7);
            if (local_res10 != (longlong *) 0x0) {
                (**(code * *)(*local_res10 + 8))();
            }
        } else {
            iStack632 = (*((code * *) * plVar7)[6])(plVar7, &local_res10);
            plVar7 = local_res10;
            if (iStack632 < 0) {
                if (local_res10 != (longlong *) 0x0) {
                    (**(code * *)(*local_res10 + 8))();
                }
                goto LAB_1402e5368;
            }
        }
        local_res10 = plVar7;
        puVar4 = (uint * )(**(code * *)(*local_res10 + 0x18))(local_res10);
        uVar9 = (**(code * *)(*local_res10 + 0x10))();
        if (uVar9 < 4) {
            LAB_1402e5344:
            if (local_res10 != (longlong *) 0x0) {
                (**(code * *)(*local_res10 + 8))();
            }
            iStack632 = -0x7fffbffb;
            goto LAB_1402e5368;
        }
        local_res8._0_4_ = *puVar4;
        puVar4 = puVar4 + 1;
        uVar9 = uVar9 - 4;
        pplVar5 = (longlong * *)(param_1 + 0x98);
        piVar13 = &DAT_140c4135c;
        local_res8 = local_res8 & 0xffffffff00000000 | (ulonglong)(uint)
        local_res8;
        do {
            if (((uint) local_res8 >> ((uint) uVar10 & 0x1f) & 1) != 0) {
                local_res18 = (ulonglong)((piVar13[2] - *piVar13) * piVar13[4]);
                if (uVar9 < local_res18) goto LAB_1402e5344;
                if (piVar13[-4] != 0) {
                    if (*pplVar5 != (longlong *) 0x0) {
                        (**(code * *)(**pplVar5 + 8))();
                        *pplVar5 = (longlong *) 0x0;
                    }
                    iStack632 = FUN_1402ddc50(uVar10, puVar4, local_res10, param_1 + (uVar10 + 0x13) * 8);
                    if (iStack632 < 0) goto LAB_1402e51b4;
                }
                puVar4 = (uint * )((longlong) puVar4 + local_res18);
                uVar9 = uVar9 - local_res18;
            }
            uVar12 = (uint) uVar10 + 1;
            uVar10 = (ulonglong) uVar12;
            pplVar5 = pplVar5 + 1;
            piVar13 = piVar13 + 0xe;
        } while (uVar12 < 0x20);
        for (; uVar9 != 0; uVar9 = (uVar9 - 8) - uVar10) {
            if (uVar9 < 8) goto LAB_1402e5344;
            uVar10 = (ulonglong) puVar4[1];
            uVar12 = *puVar4;
            puVar4 = puVar4 + 2;
            if (uVar9 - 8 < uVar10) goto LAB_1402e5344;
            if (uVar12 == 0x50524f50) {
                if (*(longlong * )(param_1 + 0x1c8) == 0) {
                    iStack632 = FUN_1402e3010(puVar4, uVar10, local_res10, (longlong * )(param_1 + 0x1c8));
                    if (-1 < iStack632) goto LAB_1402e523a;
                } else {
                    iStack632 = -0x7fffbffb;
                }
                if (local_res10 != (longlong *) 0x0) {
                    (**(code * *)(*local_res10 + 8))();
                }
                goto LAB_1402e5368;
            }
            if (uVar12 == 0x57417447) {
                iStack632 = FUN_1402e5720(param_1, uVar10, puVar4, local_res10);
            } else if (uVar12 == 0x63757244) {
                iStack632 = FUN_1402e59b0(param_1, uVar10, puVar4, local_res10);
            } else {
                if (uVar12 != 0x77627350) goto LAB_1402e523a;
                iStack632 = FUN_1402e5860(param_1, uVar10, puVar4, local_res10);
            }
            if (iStack632 < 0) goto LAB_1402e51b4;
            LAB_1402e523a:
            puVar4 = (uint * )((longlong) puVar4 + uVar10);
        }
        if (local_res10 != (longlong *) 0x0) {
            (**(code * *)(*local_res10 + 8))();
        }
    }
    lVar11 = 0x26;
    plVar7 = (longlong *) 0x0;
    pplVar5 = local_1b8;
    do {
        if (*pplVar5 != (longlong *) 0x0) {
            (**(code * *)(**pplVar5 + 8))();
            *pplVar5 = (longlong *) 0x0;
        }
        pplVar5 = pplVar5 + 1;
        lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    if (local_88 != (longlong *) 0x0) {
        (**(code * *)(*local_88 + 8))();
    }
    lVar11 = local_78;
    plVar2 = local_80;
    plVar6 = plVar7;
    if (local_80 != (longlong *) 0x0) {
        do {
            plVar1 = *(longlong * *)(lVar11 + (longlong) plVar6 * 8);
            if (plVar1 != (longlong *) 0x0) {
                (**(code * *)(*plVar1 + 8))();
                *(undefined8 * )(lVar11 + (longlong) plVar6 * 8) = 0;
            }
            plVar6 = (longlong * )((longlong) plVar6 + 1);
        } while (plVar6 < plVar2);
    }
    FUN_14018b900(lVar11, 0);
    lVar11 = local_68;
    plVar2 = local_70;
    if (local_70 != (longlong *) 0x0) {
        do {
            plVar6 = *(longlong * *)(lVar11 + (longlong) plVar7 * 8);
            if (plVar6 != (longlong *) 0x0) {
                (**(code * *)(*plVar6 + 8))();
                *(undefined8 * )(lVar11 + (longlong) plVar7 * 8) = 0;
            }
            plVar7 = (longlong * )((longlong) plVar7 + 1);
        } while (plVar7 < plVar2);
    }
    FUN_14018b900(lVar11, 0);
    return;
    LAB_1402e51b4:
    if (local_res10 != (longlong *) 0x0) {
        (**(code * *)(*local_res10 + 8))();
    }
    LAB_1402e5368:
    pplVar5 = (longlong * *)(param_1 + 0x1c8);
    lVar11 = 0x26;
    uVar10 = 0;
    local_2a8 = &PTR_LAB_140b5e648;
    local_2a0 = 0;
    local_298 = TlsGetValue(DAT_140c63720);
    TlsSetValue(DAT_140c63720, &local_2a8);
    local_238 = local_2a8;
    local_230 = local_2a0;
    local_290 = &PTR_LAB_140b5e648;
    uStack648 = L"Result";
    local_228 = local_298;
    local_280 = TlsGetValue(DAT_140c63720);
    TlsSetValue(DAT_140c63720, &local_290);
    local_2d0 = (ulonglong) * (uint * )(param_1 + 0x30);
    local_2e8 = &PTR_LAB_140b5e648;
    local_290 = &PTR_LAB_140b5e640;
    local_1c8 = (undefined4) local_280;
    uStack452 = local_280._4_4_;
    uStack444 = uStack628;
    local_2e0 = L"RecordId";
    local_1d8 = 0x40b5e640;
    uStack468 = 1;
    uStack464 = (undefined4) uStack648;
    uStack460 = uStack648._4_4_;
    iStack448 = iStack632;
    local_2d8 = TlsGetValue(DAT_140c63720);
    TlsSetValue(DAT_140c63720, &local_2e8);
    local_1f0 = local_2e0;
    local_2e8 = &PTR_LAB_140b5e630;
    local_1f8 = &PTR_LAB_140b5e630;
    local_1e8 = local_2d8;
    local_1e0 = local_2d0;
    local_2b0 = (**(code * *)(**(longlong * *)(param_1 + 0x10) + 0x18))();
    local_2c8 = &PTR_LAB_140b5e648;
    local_2b0 = local_2b0 + 0x248;
    local_2c0 = L"FileName";
    local_2b8 = TlsGetValue(DAT_140c63720);
    TlsSetValue(DAT_140c63720, &local_2c8);
    local_210 = local_2c0;
    local_2c8 = &PTR_LAB_140b5e638;
    local_res8 = 0x141deb590;
    local_218 = &PTR_LAB_140b5e638;
    local_208 = local_2b8;
    local_200 = local_2b0;
    iVar3 = FUN_1401971e0(&DAT_140c8a580, 0x24, &local_res8, &local_218, &local_1f8, &local_1d8, &local_238);
    local_2c8 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720, local_2b8);
    local_2e8 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720, local_2d8);
    local_290 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720, local_280);
    local_2a8 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720, local_298);
    if (iVar3 != 0) {
        DebugBreak();
    }
    pplVar8 = (longlong * *)(param_1 + 0x98);
    do {
        if (*pplVar8 != (longlong *) 0x0) {
            (**(code * *)(**pplVar8 + 8))();
            *pplVar8 = (longlong *) 0x0;
        }
        *pplVar8 = *(longlong * *)(((longlong) & local_250 - param_1) + (longlong) pplVar8);
        lVar11 = lVar11 + -1;
        pplVar8 = pplVar8 + 1;
    } while (lVar11 != 0);
    if (*pplVar5 != (longlong *) 0x0) {
        (**(code * *)(**pplVar5 + 8))();
        *pplVar5 = (longlong *) 0x0;
    }
    *pplVar5 = local_res20;
    uVar9 = uVar10;
    if (*(longlong * )(param_1 + 0x1d0) != 0) {
        do {
            lVar11 = *(longlong * )(param_1 + 0x1d8);
            plVar7 = *(longlong * *)(lVar11 + uVar9 * 8);
            if (plVar7 != (longlong *) 0x0) {
                (**(code * *)(*plVar7 + 8))();
                *(undefined8 * )(lVar11 + uVar9 * 8) = 0;
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 < *(ulonglong * )(param_1 + 0x1d0));
    }
    FUN_14018b900(*(undefined8 * )(param_1 + 0x1d8), 0);
    *(longlong * *)(param_1 + 0x1d0) = local_268;
    *(longlong * )(param_1 + 0x1d8) = local_248;
    uVar9 = uVar10;
    if (*(longlong * )(param_1 + 0x1f0) != 0) {
        do {
            lVar11 = *(longlong * )(param_1 + 0x1f8);
            plVar7 = *(longlong * *)(lVar11 + uVar9 * 8);
            if (plVar7 != (longlong *) 0x0) {
                (**(code * *)(*plVar7 + 8))();
                *(undefined8 * )(lVar11 + uVar9 * 8) = 0;
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 < *(ulonglong * )(param_1 + 0x1f0));
    }
    FUN_14018b900(*(undefined8 * )(param_1 + 0x1f8), 0);
    *(longlong * *)(param_1 + 0x1f0) = local_250;
    *(longlong * )(param_1 + 0x1f8) = local_258;
    if (*(longlong * )(param_1 + 0x1e0) != 0) {
        do {
            lVar11 = *(longlong * )(param_1 + 0x1e8);
            plVar7 = *(longlong * *)(lVar11 + uVar10 * 8);
            if (plVar7 != (longlong *) 0x0) {
                (**(code * *)(*plVar7 + 8))();
                *(undefined8 * )(lVar11 + uVar10 * 8) = 0;
            }
            uVar10 = uVar10 + 1;
        } while (uVar10 < *(ulonglong * )(param_1 + 0x1e0));
    }
    FUN_14018b900(*(undefined8 * )(param_1 + 0x1e8), 0);
    *(undefined8 * )(param_1 + 0x1e0) = local_270;
    *(undefined8 * )(param_1 + 0x1e8) = local_260;
    return;
}


ulonglong FUN_1402e5720(longlong param_1, ulonglong param_2, uint *param_3, undefined8 param_4) {
    uint uVar1;
    undefined auVar2[16];
    ulonglong uVar3;
    undefined8 uVar4;
    longlong lVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    undefined *puVar9;
    uint *puVar10;
    uint *puVar11;

    if ((*(longlong * )(param_1 + 0x1d8) == 0) && (3 < param_2)) {
        uVar1 = *param_3;
        *(ulonglong * )(param_1 + 0x1d0) = (ulonglong) uVar1;
        auVar2 = ZEXT816(8) * ZEXT816((ulonglong) uVar1);
        uVar4 = SUB168(auVar2, 0);
        if (SUB168(auVar2 >> 0x40, 0) != 0) {
            uVar4 = 0xffffffffffffffff;
        }
        lVar5 = FUN_14018b280(uVar4, 1);
        *(longlong * )(param_1 + 0x1d8) = lVar5;
        if (lVar5 == 0) {
            uVar3 = 0x8007000e;
        } else {
            FUN_1407e4830(lVar5, 0, *(longlong * )(param_1 + 0x1d0) << 3);
            uVar3 = 0;
            puVar9 = (undefined * )(param_2 - 4);
            puVar10 = param_3 + 1;
            if (*(longlong * )(param_1 + 0x1d0) != 0) {
                do {
                    if (puVar9 < (undefined *) 0x50) {
                        return 0x80004005;
                    }
                    puVar9 = &DAT_ffffffffffffffb0 + (longlong) puVar9;
                    puVar11 = puVar10 + 0x14;
                    uVar6 = (ulonglong) puVar10[0x10];
                    if (puVar9 < (undefined * )(uVar6 * 4)) {
                        return 0x80004005;
                    }
                    uVar7 = (ulonglong) puVar10[0x11];
                    if (puVar9 + uVar6 * -4 < (undefined * )(uVar7 * 0x48)) {
                        return 0x80004005;
                    }
                    puVar9 = puVar9 + uVar6 * -4 + uVar7 * -0x48;
                    uVar8 = FUN_1402de370(puVar10, puVar11, puVar11 + uVar6, param_4,
                                          *(longlong * )(param_1 + 0x1d8) + uVar3 * 8);
                    if ((int) uVar8 < 0) {
                        return uVar8;
                    }
                    uVar3 = uVar3 + 1;
                    puVar10 = puVar11 + uVar6 + uVar7 * 0x12;
                } while (uVar3 < *(ulonglong * )(param_1 + 0x1d0));
            }
            uVar3 = (ulonglong)(-(uint)(puVar9 != (undefined *) 0x0) & 0x80004005);
        }
    } else {
        uVar3 = 0x80004005;
    }
    return uVar3;
}


ulonglong FUN_1402e5860(longlong param_1, ulonglong param_2, uint *param_3, undefined8 param_4) {
    uint uVar1;
    undefined auVar2[16];
    ulonglong uVar3;
    undefined8 uVar4;
    longlong lVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    undefined *puVar9;
    uint *puVar10;
    uint *puVar11;

    if ((*(longlong * )(param_1 + 0x1f8) == 0) && (3 < param_2)) {
        uVar1 = *param_3;
        *(ulonglong * )(param_1 + 0x1f0) = (ulonglong) uVar1;
        auVar2 = ZEXT816(8) * ZEXT816((ulonglong) uVar1);
        uVar4 = SUB168(auVar2, 0);
        if (SUB168(auVar2 >> 0x40, 0) != 0) {
            uVar4 = 0xffffffffffffffff;
        }
        lVar5 = FUN_14018b280(uVar4, 1);
        *(longlong * )(param_1 + 0x1f8) = lVar5;
        if (lVar5 == 0) {
            uVar3 = 0x8007000e;
        } else {
            FUN_1407e4830(lVar5, 0, *(longlong * )(param_1 + 0x1f0) << 3);
            uVar3 = 0;
            puVar9 = (undefined * )(param_2 - 4);
            puVar10 = param_3 + 1;
            if (*(longlong * )(param_1 + 0x1f0) != 0) {
                do {
                    if (puVar9 < (undefined *) 0x50) {
                        return 0x80004005;
                    }
                    puVar9 = &DAT_ffffffffffffffb0 + (longlong) puVar9;
                    puVar11 = puVar10 + 0x14;
                    uVar6 = (ulonglong) puVar10[0x10];
                    if (puVar9 < (undefined * )(uVar6 * 0x18)) {
                        return 0x80004005;
                    }
                    uVar7 = (ulonglong) puVar10[0x11];
                    if (puVar9 + uVar6 * -0x18 < (undefined * )(uVar7 * 0x48)) {
                        return 0x80004005;
                    }
                    puVar9 = puVar9 + uVar6 * -0x18 + uVar7 * -0x48;
                    uVar8 = FUN_1402de8d0(puVar10, puVar11, puVar11 + uVar6 * 6, param_4,
                                          *(longlong * )(param_1 + 0x1f8) + uVar3 * 8);
                    if ((int) uVar8 < 0) {
                        return uVar8;
                    }
                    uVar3 = (ulonglong)((int) uVar3 + 1);
                    puVar10 = puVar11 + uVar6 * 6 + uVar7 * 0x12;
                } while (uVar3 < *(ulonglong * )(param_1 + 0x1f0));
            }
            uVar3 = (ulonglong)(-(uint)(puVar9 != (undefined *) 0x0) & 0x80004005);
        }
    } else {
        uVar3 = 0x80004005;
    }
    return uVar3;
}


ulonglong FUN_1402e59b0(longlong param_1, ulonglong param_2, uint *param_3, undefined8 param_4) {
    uint uVar1;
    undefined auVar2[16];
    ulonglong uVar3;
    undefined8 uVar4;
    longlong lVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    uint *puVar8;

    if ((*(longlong * )(param_1 + 0x1e8) == 0) && (3 < param_2)) {
        uVar1 = *param_3;
        *(ulonglong * )(param_1 + 0x1e0) = (ulonglong) uVar1;
        auVar2 = ZEXT816(8) * ZEXT816((ulonglong) uVar1);
        uVar4 = SUB168(auVar2, 0);
        if (SUB168(auVar2 >> 0x40, 0) != 0) {
            uVar4 = 0xffffffffffffffff;
        }
        lVar5 = FUN_14018b280(uVar4, 1);
        *(longlong * )(param_1 + 0x1e8) = lVar5;
        if (lVar5 == 0) {
            uVar3 = 0x8007000e;
        } else {
            FUN_1407e4830(lVar5, 0, *(longlong * )(param_1 + 0x1e0) << 3);
            uVar3 = 0;
            param_2 = param_2 - 4;
            puVar8 = param_3 + 1;
            if (*(longlong * )(param_1 + 0x1e0) != 0) {
                do {
                    if (param_2 < 4) {
                        return 0x80004005;
                    }
                    uVar6 = (ulonglong) * puVar8;
                    if (param_2 - 4 < uVar6 * 0xc) {
                        return 0x80004005;
                    }
                    param_2 = (param_2 - 4) + uVar6 * -0xc;
                    uVar7 = FUN_1402de460(puVar8, puVar8 + 1, param_4, *(longlong * )(param_1 + 0x1e8) + uVar3 * 8
                    );
                    if ((int) uVar7 < 0) {
                        return uVar7;
                    }
                    uVar3 = uVar3 + 1;
                    puVar8 = puVar8 + 1 + uVar6 * 3;
                } while (uVar3 < *(ulonglong * )(param_1 + 0x1e0));
            }
            uVar3 = (ulonglong)(-(uint)(param_2 != 0) & 0x80004005);
        }
    } else {
        uVar3 = 0x80004005;
    }
    return uVar3;
}


int FUN_1402e5ad0(longlong param_1) {
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *) (param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    if (iVar2 + 1 == 1) {
        FUN_1401984d0(param_1 + 0x60);
    }
    return iVar2 + 1;
}


int FUN_1402e5b00(longlong param_1) {
    int *piVar1;
    longlong lVar2;
    code *pcVar3;
    int iVar4;

    LOCK();
    piVar1 = (int *) (param_1 + 8);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar4 = iVar4 + -1;
    if (iVar4 != -1) {
        if (iVar4 != 0) {
            return iVar4;
        }
        lVar2 = *(longlong * )(*(longlong * )(param_1 + 0x10) + 0x10);
        if (*(int *) (lVar2 + 8) != 0) {
            FUN_140198370(param_1 + 0x60, param_1, lVar2 + 0x7f8);
            return 0;
        }
    }
    lVar2 = *(longlong * )(*(longlong * )(param_1 + 0x10) + 0x10);
    pcVar3 = *(code * *)(lVar2 + 0x780);
    if (pcVar3 != (code *) 0x0) {
        (*pcVar3)(param_1, *(undefined8 * )(lVar2 + 0x788));
    }
    FUN_1402e4900(param_1);
    FUN_14018b900(param_1, 0);
    return 0;
}


undefined8 FUN_1402e5b90(longlong param_1) {
    longlong lVar1;
    code *pcVar2;
    undefined8 uVar3;

    if (*(int *) (param_1 + 0x90) == 0) {
        uVar3 = (**(code * *)(**(longlong * *)(param_1 + 0x10) + 0x20))();
        if ((int) uVar3 == 0) {
            return uVar3;
        }
        FUN_1402e4ec0(param_1);
        *(undefined4 * )(param_1 + 0x90) = 1;
        lVar1 = *(longlong * )(*(longlong * )(param_1 + 0x10) + 0x10);
        pcVar2 = *(code * *)(lVar1 + 0x778);
        if (pcVar2 != (code *) 0x0) {
            (*pcVar2)(param_1, *(undefined8 * )(lVar1 + 0x788));
        }
    }
    return 1;
}


bool FUN_1402e5c00(longlong *param_1, int param_2) {
    undefined4 local_18[4];

    local_18[0] = 0xffffffff;
    (**(code * *)(*param_1 + 0x30))(param_1, local_18);
    return param_1[(longlong) param_2 + 0x13] == 0;
}


undefined8 FUN_1402e5c40(longlong *param_1, int param_2, longlong *param_3, int param_4) {
    undefined8 *puVar1;
    undefined4 local_18[4];

    if ((param_3 != (longlong *) 0x0) && (param_4 == 1)) {
        local_18[0] = 0xffffffff;
        (**(code * *)(*param_1 + 0x30))(param_1, local_18);
        puVar1 = (undefined8 *) param_1[(longlong) param_2 + 0x13];
        if (puVar1 == (undefined8 *) 0x0) {
            puVar1 = *(undefined8 * *)(DAT_140c657f8 + 0x30 + (longlong) param_2 * 8);
        }
        *param_3 = (longlong) puVar1;
        (**(code * *) * puVar1)();
        return 0;
    }
    return 0x80070057;
}


undefined8 FUN_1402e63a0(longlong *param_1, longlong **param_2) {
    undefined auVar1[16];
    longlong *plVar2;
    undefined8 uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    undefined4 local_18[4];

    if (param_2 == (longlong **) 0x0) {
        return 0x80070057;
    }
    local_18[0] = 0xffffffff;
    (**(code * *)(*param_1 + 0x30))(param_1, local_18);
    plVar2 = (longlong *) FUN_14018b280(0x20);
    if (plVar2 == (longlong *) 0x0) {
        return 0x8007000e;
    }
    uVar5 = 0;
    *plVar2 = (longlong) & PTR_LAB_140b787c0;
    *(undefined4 * )(plVar2 + 3) = 1;
    plVar2[1] = 0;
    plVar2[2] = 0;
    plVar2[1] = param_1[0x3a];
    uVar4 = uVar5;
    if (param_1[0x3a] != 0) {
        auVar1 = ZEXT816(8) * ZEXT816((ulonglong) param_1[0x3a]);
        uVar3 = SUB168(auVar1, 0);
        if (SUB168(auVar1 >> 0x40, 0) != 0) {
            uVar3 = 0xffffffffffffffff;
        }
        uVar4 = FUN_14018b280(uVar3, 1);
    }
    plVar2[2] = uVar4;
    if ((plVar2[1] == 0) || (uVar4 != 0)) {
        if (param_1[0x3a] != 0) {
            do {
                *(undefined8 * )(plVar2[2] + uVar5 * 8) = *(undefined8 * )(param_1[0x3b] + uVar5 * 8);
                (**(code * *) * *(undefined8 * *)(param_1[0x3b] + uVar5 * 8))();
                uVar5 = (ulonglong)((int) uVar5 + 1);
            } while (uVar5 < (ulonglong) param_1[0x3a]);
        }
        *param_2 = plVar2;
        uVar3 = 0;
    } else {
        (**(code * *)(*plVar2 + 0x20))(plVar2, 1);
        uVar3 = 0x8007000e;
    }
    return uVar3;
}


undefined8 FUN_1402e64f0(longlong *param_1, longlong **param_2) {
    undefined auVar1[16];
    longlong *plVar2;
    undefined8 uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    undefined4 local_18[4];

    if (param_2 == (longlong **) 0x0) {
        return 0x80070057;
    }
    local_18[0] = 0xffffffff;
    (**(code * *)(*param_1 + 0x30))(param_1, local_18);
    plVar2 = (longlong *) FUN_14018b280(0x20);
    if (plVar2 == (longlong *) 0x0) {
        return 0x8007000e;
    }
    uVar5 = 0;
    *plVar2 = (longlong) & PTR_LAB_140b787c0;
    *(undefined4 * )(plVar2 + 3) = 1;
    plVar2[1] = 0;
    plVar2[2] = 0;
    plVar2[1] = param_1[0x3c];
    uVar4 = uVar5;
    if (param_1[0x3c] != 0) {
        auVar1 = ZEXT816(8) * ZEXT816((ulonglong) param_1[0x3c]);
        uVar3 = SUB168(auVar1, 0);
        if (SUB168(auVar1 >> 0x40, 0) != 0) {
            uVar3 = 0xffffffffffffffff;
        }
        uVar4 = FUN_14018b280(uVar3, 1);
    }
    plVar2[2] = uVar4;
    if ((plVar2[1] == 0) || (uVar4 != 0)) {
        if (param_1[0x3c] != 0) {
            do {
                *(undefined8 * )(plVar2[2] + uVar5 * 8) = *(undefined8 * )(param_1[0x3d] + uVar5 * 8);
                (**(code * *) * *(undefined8 * *)(param_1[0x3d] + uVar5 * 8))();
                uVar5 = (ulonglong)((int) uVar5 + 1);
            } while (uVar5 < (ulonglong) param_1[0x3c]);
        }
        *param_2 = plVar2;
        uVar3 = 0;
    } else {
        (**(code * *)(*plVar2 + 0x20))(plVar2, 1);
        uVar3 = 0x8007000e;
    }
    return uVar3;
}


undefined8 FUN_1402e6640(longlong *param_1, longlong **param_2) {
    undefined auVar1[16];
    longlong *plVar2;
    undefined8 uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    undefined4 local_18[4];

    if (param_2 == (longlong **) 0x0) {
        return 0x80070057;
    }
    local_18[0] = 0xffffffff;
    (**(code * *)(*param_1 + 0x30))(param_1, local_18);
    plVar2 = (longlong *) FUN_14018b280(0x20);
    if (plVar2 == (longlong *) 0x0) {
        return 0x8007000e;
    }
    uVar5 = 0;
    *plVar2 = (longlong) & PTR_LAB_140b787c0;
    *(undefined4 * )(plVar2 + 3) = 1;
    plVar2[1] = 0;
    plVar2[2] = 0;
    plVar2[1] = param_1[0x3e];
    uVar4 = uVar5;
    if (param_1[0x3e] != 0) {
        auVar1 = ZEXT816(8) * ZEXT816((ulonglong) param_1[0x3e]);
        uVar3 = SUB168(auVar1, 0);
        if (SUB168(auVar1 >> 0x40, 0) != 0) {
            uVar3 = 0xffffffffffffffff;
        }
        uVar4 = FUN_14018b280(uVar3, 1);
    }
    plVar2[2] = uVar4;
    if ((plVar2[1] == 0) || (uVar4 != 0)) {
        if (param_1[0x3e] != 0) {
            do {
                *(undefined8 * )(plVar2[2] + uVar5 * 8) = *(undefined8 * )(param_1[0x3f] + uVar5 * 8);
                (**(code * *) * *(undefined8 * *)(param_1[0x3f] + uVar5 * 8))();
                uVar5 = (ulonglong)((int) uVar5 + 1);
            } while (uVar5 < (ulonglong) param_1[0x3e]);
        }
        *param_2 = plVar2;
        uVar3 = 0;
    } else {
        (**(code * *)(*plVar2 + 0x20))(plVar2, 1);
        uVar3 = 0x8007000e;
    }
    return uVar3;
}


undefined8 FUN_1402e6790(undefined8 param_1, float *param_2, undefined8 param_3, undefined4 param_4) {
    undefined8 uVar1;

    if ((((0.0 <= *param_2) && (*param_2 <= 1.0)) && (0.0 <= param_2[1])) && (param_2[1] <= 1.0)) {
        uVar1 = FUN_1402da040();
        return uVar1;
    }
    FUN_1402d9e20(param_3, param_4);
    return 0;
}


undefined8 *
FUN_1402e6820(undefined8 *param_1, longlong param_2, longlong param_3, undefined8 *param_4) {
    longlong *plVar1;
    ulonglong **ppuVar2;
    longlong lVar3;
    ulonglong *puVar4;
    ulonglong uVar5;
    ulonglong *puVar6;
    longlong *plVar7;
    ulonglong local_18;
    ulonglong local_10;

    *param_1 = &PTR_LAB_140b635c0;
    param_1[5] = 0;
    param_1[6] = 0;
    *(undefined4 * )(param_1 + 1) = 1;
    param_1[2] = param_2;
    LOCK();
    *(int *) (param_2 + 0xc) = *(int *) (param_2 + 0xc) + 1;
    param_1[3] = param_3;
    if (param_3 != 0) {
        LOCK();
        *(int *) (param_3 + 0xc) = *(int *) (param_3 + 0xc) + 1;
    }
    param_1[4] = param_4;
    (**(code * *) * param_4)(param_4);
    plVar7 = (longlong * )(param_1[2] + 0x50);
    if (param_1[5] == 0) {
        param_1[5] = plVar7;
        plVar1 = param_1 + 6;
        *plVar1 = *plVar7;
        *plVar7 = (longlong) param_1;
        if (*plVar1 != 0) {
            *(longlong * *)(*plVar1 + 0x28) = plVar1;
        }
    }
    local_18 = param_1[3];
    lVar3 = param_1[2];
    local_10 = param_1[4];
    if (*(longlong * )(lVar3 + 0x58) == *(longlong * )(lVar3 + 0x60)) {
        FUN_1400290d0(lVar3 + 0x58);
    }
    uVar5 = (**(code * *)(lVar3 + 0x70))(&local_18);
    ppuVar2 = (ulonglong * *)(*(longlong * )(lVar3 + 0x68) + (uVar5 % *(ulonglong * )(lVar3 + 0x60)) * 8);
    puVar6 = (ulonglong *) FUN_14018b280(0x28);
    if (puVar6 != (ulonglong *) 0x0) {
        puVar4 = *ppuVar2;
        *puVar6 = uVar5;
        puVar6[1] = (ulonglong) puVar4;
        puVar6[2] = local_18;
        puVar6[4] = (ulonglong) param_1;
        puVar6[3] = local_10;
    }
    *ppuVar2 = puVar6;
    *(longlong * )(lVar3 + 0x58) = *(longlong * )(lVar3 + 0x58) + 1;
    return param_1;
}


void FUN_1402e6940(undefined8 *param_1) {
    int *piVar1;
    longlong lVar2;
    ulonglong *puVar3;
    int iVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    ulonglong **ppuVar7;
    undefined8 local_18;
    undefined8 local_10;

    lVar2 = param_1[2];
    *param_1 = &PTR_LAB_140b635c0;
    local_18 = param_1[3];
    local_10 = param_1[4];
    uVar5 = (**(code * *)(lVar2 + 0x70))(&local_18);
    uVar6 = uVar5 % *(ulonglong * )(lVar2 + 0x60);
    puVar3 = *(ulonglong * *)(*(longlong * )(lVar2 + 0x68) + uVar6 * 8);
    ppuVar7 = (ulonglong * *)(*(longlong * )(lVar2 + 0x68) + uVar6 * 8);
    do {
        if (puVar3 == (ulonglong *) 0x0) {
            LAB_1402e69d3:
            if ((undefined8 *) param_1[5] != (undefined8 *) 0x0) {
                *(undefined8 *) param_1[5] = param_1[6];
            }
            if (param_1[6] != 0) {
                *(undefined8 * )(param_1[6] + 0x28) = param_1[5];
            }
            param_1[5] = 0;
            param_1[6] = 0;
            (**(code * *)(*(longlong *) param_1[4] + 8))();
            lVar2 = param_1[3];
            if (lVar2 != 0) {
                LOCK();
                piVar1 = (int *) (lVar2 + 0xc);
                *piVar1 = *piVar1 + -1;
                if ((*piVar1 == 0) && (lVar2 != 0)) {
                    FUN_1402e9750(lVar2);
                    FUN_14018b900(lVar2, 0);
                }
            }
            lVar2 = param_1[2];
            LOCK();
            piVar1 = (int *) (lVar2 + 0xc);
            *piVar1 = *piVar1 + -1;
            if ((*piVar1 == 0) && (lVar2 != 0)) {
                FUN_1402e1540(lVar2);
                FUN_14018b900(lVar2, 0);
            }
            if ((undefined8 *) param_1[5] != (undefined8 *) 0x0) {
                *(undefined8 *) param_1[5] = param_1[6];
            }
            if (param_1[6] != 0) {
                *(undefined8 * )(param_1[6] + 0x28) = param_1[5];
            }
            param_1[6] = 0;
            param_1[5] = 0;
            return;
        }
        if ((uVar5 == **ppuVar7) &&
            (iVar4 = (**(code * *)(lVar2 + 0x78))(&local_18, *ppuVar7 + 2), iVar4 != 0)) {
            puVar3 = *ppuVar7;
            *ppuVar7 = (ulonglong *) puVar3[1];
            FUN_14018b900(puVar3, 0);
            *(longlong * )(lVar2 + 0x58) = *(longlong * )(lVar2 + 0x58) + -1;
            goto LAB_1402e69d3;
        }
        ppuVar7 = (ulonglong * *)(*ppuVar7 + 1);
        puVar3 = *ppuVar7;
    } while (true);
}


int FUN_1402e6a90(longlong param_1) {
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *) (param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_1402e6940();
            FUN_14018b900(param_1, 0);
        }
        iVar2 = 0;
    }
    return iVar2;
}


int FUN_1402e6b00(longlong param_1, undefined8 *param_2) {
    int iVar1;
    int iVar2;
    longlong *local_res8;

    local_res8 = (longlong *) 0x0;
    iVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x20) + 0x50))
            (*(longlong * *)(param_1 + 0x20), &local_res8);
    if (-1 < iVar1) {
        if (local_res8 == (longlong *) 0x0) {
            *param_2 = 0;
            return 1;
        }
        iVar1 = FUN_1402e1790(*(undefined8 * )(param_1 + 0x10), *(undefined8 * )(param_1 + 0x18), local_res8, param_2);
        iVar2 = 0;
        if (-1 < iVar1) goto LAB_1402e6b4f;
    }
    iVar2 = iVar1;
    LAB_1402e6b4f:
    if (local_res8 != (longlong *) 0x0) {
        (**(code * *)(*local_res8 + 8))();
    }
    return iVar2;
}


int FUN_1402e6b90(longlong param_1, undefined8 *param_2) {
    int iVar1;
    int iVar2;
    longlong *local_res8;

    local_res8 = (longlong *) 0x0;
    iVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x20) + 0x58))
            (*(longlong * *)(param_1 + 0x20), &local_res8);
    if (-1 < iVar1) {
        if (local_res8 == (longlong *) 0x0) {
            *param_2 = 0;
            return 1;
        }
        iVar1 = FUN_1402e1790(*(undefined8 * )(param_1 + 0x10), *(undefined8 * )(param_1 + 0x18), local_res8, param_2);
        iVar2 = 0;
        if (-1 < iVar1) goto LAB_1402e6bdf;
    }
    iVar2 = iVar1;
    LAB_1402e6bdf:
    if (local_res8 != (longlong *) 0x0) {
        (**(code * *)(*local_res8 + 8))();
    }
    return iVar2;
}


int FUN_1402e6c20(longlong param_1, undefined8 *param_2) {
    int iVar1;
    int iVar2;
    longlong *local_res8;

    local_res8 = (longlong *) 0x0;
    iVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x20) + 0x60))
            (*(longlong * *)(param_1 + 0x20), &local_res8);
    if (-1 < iVar1) {
        if (local_res8 == (longlong *) 0x0) {
            *param_2 = 0;
            return 1;
        }
        iVar1 = FUN_1402e1790(*(undefined8 * )(param_1 + 0x10), *(undefined8 * )(param_1 + 0x18), local_res8, param_2);
        iVar2 = 0;
        if (-1 < iVar1) goto LAB_1402e6c6f;
    }
    iVar2 = iVar1;
    LAB_1402e6c6f:
    if (local_res8 != (longlong *) 0x0) {
        (**(code * *)(*local_res8 + 8))();
    }
    return iVar2;
}


int FUN_1402e6cb0(longlong param_1, undefined8 *param_2) {
    int iVar1;
    int iVar2;
    longlong *local_res8;

    local_res8 = (longlong *) 0x0;
    iVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x20) + 0x68))
            (*(longlong * *)(param_1 + 0x20), &local_res8);
    if (-1 < iVar1) {
        if (local_res8 == (longlong *) 0x0) {
            *param_2 = 0;
            return 1;
        }
        iVar1 = FUN_1402e1790(*(undefined8 * )(param_1 + 0x10), *(undefined8 * )(param_1 + 0x18), local_res8, param_2);
        iVar2 = 0;
        if (-1 < iVar1) goto LAB_1402e6cff;
    }
    iVar2 = iVar1;
    LAB_1402e6cff:
    if (local_res8 != (longlong *) 0x0) {
        (**(code * *)(*local_res8 + 8))();
    }
    return iVar2;
}


undefined8 FUN_1402e6d50(longlong param_1, undefined8 param_2) {
    (**(code * *)(**(longlong * *)(param_1 + 0x20) + 0x90))();
    return param_2;
}


undefined8 FUN_1402e6df0(longlong param_1, longlong param_2) {
    undefined8 uVar1;
    longlong lVar2;

    uVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x20) + 0xb0))();
    if (-1 < (int) uVar1) {
        if (*(longlong * *)(param_1 + 0x18) != (longlong *) 0x0) {
            lVar2 = (**(code * *)(**(longlong * *)(param_1 + 0x18) + 0x20))();
            *(float *) (param_2 + 0x30) = *(float *) (param_2 + 0x30) + *(float *) (lVar2 + 0x30);
            *(float *) (param_2 + 0x34) = *(float *) (lVar2 + 0x34) + *(float *) (param_2 + 0x34);
            *(float *) (param_2 + 0x38) = *(float *) (lVar2 + 0x38) + *(float *) (param_2 + 0x38);
        }
        uVar1 = 0;
    }
    return uVar1;
}


int *FUN_1402e6e60(longlong param_1, int *param_2) {
    longlong lVar1;

    (**(code * *)(**(longlong * *)(param_1 + 0x20) + 0xc0))();
    if (*(longlong * *)(param_1 + 0x18) != (longlong *) 0x0) {
        lVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x18) + 0x20))();
        *param_2 = *param_2 + *(int *) (lVar1 + 0x20);
        param_2[1] = param_2[1] + *(int *) (lVar1 + 0x24);
        param_2[2] = param_2[2] + *(int *) (lVar1 + 0x20);
        param_2[3] = param_2[3] + *(int *) (lVar1 + 0x24);
    }
    return param_2;
}


undefined8 FUN_1402e6f00(longlong param_1, undefined8 param_2) {
    (**(code * *)(**(longlong * *)(param_1 + 0x20) + 0x108))();
    return param_2;
}


void FUN_1402e6fb0(undefined8 *param_1) {
    ulonglong *puVar1;
    ulonglong uVar2;
    DWORD DVar3;
    longlong lVar4;
    HANDLE hObject;
    ulonglong uVar5;
    DWORD *pDVar6;
    longlong **pplVar7;
    longlong lVar8;

    lVar8 = param_1[2];
    uVar5 = 0;
    *param_1 = &PTR_LAB_140b63770;
    if (lVar8 != 0) {
        pDVar6 = (DWORD * )(lVar8 + 0x828);
        DVar3 = GetCurrentThreadId();
        if (*pDVar6 == DVar3) {
            *(longlong * )(lVar8 + 0x830) = *(longlong * )(lVar8 + 0x830) + 1;
        } else {
            do {
                LOCK();
                puVar1 = (ulonglong * )(lVar8 + 0x830);
                uVar2 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar2 == 0) * (*puVar1 ^ 1);
                if (uVar2 == 0) {
                    *pDVar6 = DVar3;
                    goto LAB_1402e702c;
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 < 0x400);
            FUN_14019fb60(pDVar6, DVar3);
        }
        LAB_1402e702c:
        if ((undefined8 *) param_1[0x2d] != (undefined8 *) 0x0) {
            *(undefined8 *) param_1[0x2d] = param_1[0x2e];
        }
        if (param_1[0x2e] != 0) {
            *(undefined8 * )(param_1[0x2e] + 0x168) = param_1[0x2d];
        }
        param_1[0x2d] = 0;
        param_1[0x2e] = 0;
        lVar4 = (**(code * *)(*(longlong *) param_1[3] + 0x28))();
        *(undefined8 * )(param_1[2] + 0x20 + (ulonglong) * (uint * )(lVar4 + 0x10) * 8) = 0;
        if (*(ulonglong * )(lVar8 + 0x830) < 2) {
            *pDVar6 = 0;
            *(undefined8 * )(lVar8 + 0x830) = 0;
            if (*(longlong * )(lVar8 + 0x838) != 0) {
                if (*(longlong * )(lVar8 + 0x840) == 0) {
                    hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                    LOCK();
                    puVar1 = (ulonglong * )(lVar8 + 0x840);
                    uVar5 = *puVar1;
                    *puVar1 = *puVar1 ^ (ulonglong)(uVar5 == 0) * (*puVar1 ^ (ulonglong) hObject);
                    if (uVar5 != 0) {
                        CloseHandle(hObject);
                    }
                }
                SetEvent(*(HANDLE * )(lVar8 + 0x840));
            }
        } else {
            *(longlong * )(lVar8 + 0x830) = *(longlong * )(lVar8 + 0x830) + -1;
        }
        (**(code * *)(*(longlong *) param_1[2] + 8))();
    }
    if ((longlong *) param_1[3] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[3] + 8))();
        param_1[3] = 0;
    }
    if ((longlong *) param_1[5] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[5] + 8))();
        param_1[5] = 0;
    }
    pplVar7 = (longlong * *)(param_1 + 7);
    lVar8 = 0x26;
    do {
        if (*pplVar7 != (longlong *) 0x0) {
            (**(code * *)(**pplVar7 + 8))();
            *pplVar7 = (longlong *) 0x0;
        }
        pplVar7 = pplVar7 + 1;
        lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    if ((undefined8 *) param_1[0x2d] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x2d] = param_1[0x2e];
    }
    if (param_1[0x2e] != 0) {
        *(undefined8 * )(param_1[0x2e] + 0x168) = param_1[0x2d];
    }
    param_1[0x2e] = 0;
    param_1[0x2d] = 0;
    return;
}


undefined8 FUN_1402e7180(longlong param_1, undefined8 *param_2, ulonglong param_3) {
    ulonglong *puVar1;
    longlong *plVar2;
    longlong lVar3;
    ulonglong uVar4;
    DWORD DVar5;
    undefined8 uVar6;
    HANDLE hObject;
    ulonglong uVar7;
    longlong *plVar8;
    DWORD *pDVar9;

    uVar6 = (**(code * *)(*(longlong *) param_2[3] + 0x48))
            ((longlong *) param_2[3], param_3 & 0xffffffff, param_1 + 0x18);
    if (-1 < (int) uVar6) {
        *(undefined8 * *)(param_1 + 0x10) = param_2;
        (**(code * *) * param_2)();
        lVar3 = *(longlong * )(param_1 + 0x10);
        pDVar9 = (DWORD * )(lVar3 + 0x828);
        DVar5 = GetCurrentThreadId();
        uVar7 = 0;
        if (*pDVar9 == DVar5) {
            *(longlong * )(lVar3 + 0x830) = *(longlong * )(lVar3 + 0x830) + 1;
        } else {
            do {
                LOCK();
                puVar1 = (ulonglong * )(lVar3 + 0x830);
                uVar4 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar4 == 0) * (*puVar1 ^ 1);
                if (uVar4 == 0) {
                    *pDVar9 = DVar5;
                    goto LAB_1402e7214;
                }
                uVar7 = uVar7 + 1;
            } while (uVar7 < 0x400);
            FUN_14019fb60(pDVar9);
        }
        LAB_1402e7214:
        *(longlong * )(*(longlong * )(param_1 + 0x10) + 0x20 + (param_3 & 0xffffffff) * 8) = param_1;
        plVar8 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x820);
        if (*(longlong * )(param_1 + 0x168) == 0) {
            *(longlong * *)(param_1 + 0x168) = plVar8;
            plVar2 = (longlong * )(param_1 + 0x170);
            *plVar2 = *plVar8;
            *plVar8 = param_1;
            if (*plVar2 != 0) {
                *(longlong * *)(*plVar2 + 0x168) = plVar2;
            }
        }
        *(undefined8 * )(param_1 + 0x30) = 0;
        if (*(ulonglong * )(lVar3 + 0x830) < 2) {
            *pDVar9 = 0;
            *(undefined8 * )(lVar3 + 0x830) = 0;
            if (*(longlong * )(lVar3 + 0x838) != 0) {
                if (*(longlong * )(lVar3 + 0x840) == 0) {
                    hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                    LOCK();
                    puVar1 = (ulonglong * )(lVar3 + 0x840);
                    uVar7 = *puVar1;
                    *puVar1 = *puVar1 ^ (ulonglong)(uVar7 == 0) * (*puVar1 ^ (ulonglong) hObject);
                    if (uVar7 != 0) {
                        CloseHandle(hObject);
                    }
                }
                SetEvent(*(HANDLE * )(lVar3 + 0x840));
            }
        } else {
            *(longlong * )(lVar3 + 0x830) = *(longlong * )(lVar3 + 0x830) + -1;
        }
        uVar6 = 0;
    }
    return uVar6;
}


undefined8 FUN_1402e72d0(longlong param_1, longlong param_2, undefined8 param_3, undefined8 param_4) {
    longlong lVar1;
    int *piVar2;
    undefined8 uVar3;
    int iVar4;
    int local_res8;
    int local_resc;
    undefined8 local_res10;

    local_res10 = 0;
    if (*(longlong * )(param_1 + 0x20) != param_2) {
        if (param_2 != 0) {
            lVar1 = *(longlong * )(param_2 + 0x18);
            piVar2 = (int *) (**(code * *)(**(longlong * *)(param_1 + 0x18) + 0x28))();
            iVar4 = *piVar2 - *(int *) (param_2 + 0x24);
            local_res8 = iVar4 + *(int *) (lVar1 + 0x18);
            local_resc = *(int *) (lVar1 + 0x1c) + (piVar2[1] - *(int *) (param_2 + 0x28));
            uVar3 = (**(code * *)(**(longlong * *)(lVar1 + 8) + 0x90))
                    (*(longlong * *)(lVar1 + 8), &local_res8, &local_res10, param_4, piVar2,
                     (int *) (param_2 + 0x24), iVar4);
            if ((int) uVar3 < 0) {
                return uVar3;
            }
        }
        if (*(longlong * *)(param_1 + 0x28) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x28) + 8))();
            *(undefined8 * )(param_1 + 0x28) = 0;
        }
        *(longlong * )(param_1 + 0x20) = param_2;
        *(undefined8 * )(param_1 + 0x30) = 0;
        *(undefined8 * )(param_1 + 0x28) = local_res10;
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1402e73a0(longlong param_1) {
    ushort uVar1;
    ushort uVar2;
    int iVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    ushort *puVar7;
    longlong lVar8;
    longlong lVar9;
    int iVar10;
    ushort *puVar11;
    ulonglong uVar12;
    ulonglong uVar13;
    uint uVar14;
    ulonglong uVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    longlong *local_res18;
    longlong *local_res20;

    if (*(longlong * *)(param_1 + 0x38) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x38) + 8))();
        *(undefined8 * )(param_1 + 0x38) = 0;
    }
    if (((*(longlong * )(param_1 + 0x108) != 0) &&
         (lVar5 = *(longlong * )(param_1 + 0x20), *(float *) (lVar5 + 0x60) != 0.0)) &&
        ((*(byte * )(lVar5 + 0x38) & 1) != 0)) {
        lVar5 = (**(code * *)(**(longlong * *)(lVar5 + 0x18) + 0x18))();
        lVar6 = (**(code * *)(**(longlong * *)(param_1 + 0x20) + 0x20))();
        iVar10 = *(int *) (lVar6 + 0x14) - *(int *) (lVar5 + 0x14);
        iVar3 = (**(code * *)(**(longlong * *)(param_1 + 0x18) + 0x40))(*(longlong * *)(param_1 + 0x18), 0);
        if (((iVar3 == 0) ||
             (iVar3 = (**(code * *)(**(longlong * *)(param_1 + 0x28) + 0x40))
                     (*(longlong * *)(param_1 + 0x28), 0), iVar3 == 0)) || (iVar10 != 0)) {
            lVar5 = (**(code * *)(**(longlong * *)(param_1 + 0x108) + 0x20))();
            local_res20 = (longlong *) 0x0;
            (**(code * *)(**(longlong * *)(param_1 + 0x28) + 0x48))
                    (*(longlong * *)(param_1 + 0x28), 0, &local_res20, 1);
            puVar7 = (ushort * )(**(code * *)(*local_res20 + 0x20))();
            local_res18 = (longlong *) 0x0;
            (**(code * *)(**(longlong * *)(param_1 + 0x18) + 0x48))
                    (*(longlong * *)(param_1 + 0x18), 0, &local_res18, 1);
            lVar6 = (**(code * *)(*local_res18 + 0x20))();
            FUN_1402ddac0(0, param_1 + 0x38);
            lVar8 = (**(code * *)(**(longlong * *)(param_1 + 0x38) + 0x20))();
            uVar14 = DAT_140c41360 - _DAT_140c41358;
            if (0 < DAT_140c41364 - DAT_140c4135c) {
                uVar12 = (ulonglong)(uint)(DAT_140c41364 - DAT_140c4135c);
                do {
                    if (0 < (int) uVar14) {
                        uVar15 = 0;
                        uVar13 = (ulonglong) uVar14;
                        puVar11 = puVar7;
                        do {
                            uVar1 = *(ushort * )((lVar6 - (longlong) puVar7) + (longlong) puVar11);
                            uVar2 = *puVar11;
                            iVar3 = (uVar2 & 0x7fff) + iVar10;
                            if (0x7fff < iVar3) {
                                iVar3 = 0x7fff;
                            }
                            iVar4 = 0;
                            if (0 < iVar3) {
                                iVar4 = iVar3;
                            }
                            lVar9 = uVar15 * 4;
                            fVar18 = (float) (uint)(uVar1 & 0x7fff);
                            puVar11 = puVar11 + 1;
                            uVar15 = (ulonglong)((int) uVar15 + 4);
                            fVar17 = (float) (uint)(uVar1 >> 0xf);
                            fVar16 = (float) (ulonglong) * (byte * )(lVar5 + lVar9) * 0.003921569 *
                                     *(float *) (*(longlong * )(param_1 + 0x20) + 0x60);
                            *(ushort * )((lVar8 - (longlong) puVar7) + -2 + (longlong) puVar11) =
                                    (short) (longlong)(fVar16 * ((float) (uint)(uVar2 >> 0xf) - fVar17) + fVar17 + 0.5)
                                            << 0xf |
                                    (ushort)(longlong)(fVar16 * ((float) iVar4 - fVar18) + fVar18 + 0.5);
                            uVar13 = uVar13 - 1;
                        } while (uVar13 != 0);
                    }
                    lVar9 = (longlong) DAT_140c4136c;
                    puVar7 = (ushort * )((longlong) puVar7 + lVar9);
                    lVar6 = lVar6 + lVar9;
                    lVar8 = lVar8 + lVar9;
                    lVar5 = lVar5 + (ulonglong)(uint)(DAT_140c4191c * 4);
                    uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
            }
            if (local_res18 != (longlong *) 0x0) {
                (**(code * *)(*local_res18 + 8))();
            }
            if (local_res20 != (longlong *) 0x0) {
                (**(code * *)(*local_res20 + 8))();
            }
        }
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1402e76e0(longlong param_1) {
    uint *puVar1;
    byte bVar2;
    ushort uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    int iVar7;
    uint uVar8;
    uint uVar9;
    int iVar10;
    int iVar11;
    longlong lVar12;
    int *piVar13;
    int *piVar14;
    int *piVar15;
    longlong lVar17;
    ulonglong uVar18;
    int *piVar19;
    undefined(*pauVar20)[16];
    byte bVar21;
    byte bVar22;
    byte bVar23;
    uint uVar24;
    ulonglong uVar25;
    ulonglong uVar26;
    longlong lVar27;
    longlong lVar28;
    longlong lVar29;
    longlong lVar30;
    byte bVar31;
    longlong lVar32;
    longlong lVar33;
    longlong lVar34;
    longlong lVar35;
    float fVar36;
    float fVar37;
    float fVar38;
    float fVar39;
    float fVar40;
    float fVar41;
    float fVar42;
    float fVar43;
    float fVar44;
    float fVar46;
    float fVar47;
    undefined auVar45[16];
    float fVar48;
    undefined auVar49[16];
    undefined auVar50[16];
    float fVar51;
    float fVar52;
    float fVar53;
    float fVar54;
    float fVar55;
    float fVar56;
    float fVar57;
    float fVar58;
    float fVar59;
    float fVar60;
    float fVar61;
    float in_xmmTmp2_Dd;
    undefined auStack1688[32];
    undefined4 local_678;
    uint local_668;
    uint local_664;
    int local_660[4];
    int local_650[6];
    undefined local_638[8];
    undefined4 uStack1584;
    undefined4 uStack1580;
    longlong *local_628;
    longlong *local_620;
    longlong *local_618;
    longlong local_610;
    longlong *local_608;
    longlong *local_600;
    longlong *local_5f8;
    longlong local_5f0;
    longlong *local_5e8;
    longlong *local_5e0;
    longlong local_5d8;
    longlong local_5d0;
    longlong local_5c8;
    longlong local_5c0;
    undefined local_5b8[16];
    longlong local_5a8;
    undefined local_598[16];
    longlong local_588;
    longlong local_580;
    longlong local_578;
    longlong local_570;
    longlong local_568;
    longlong local_560;
    longlong local_558;
    undefined local_548[16];
    longlong local_538;
    longlong local_530;
    longlong local_528;
    longlong local_520;
    undefined8 local_518;
    undefined8 local_510;
    undefined8 local_508;
    undefined8 local_500;
    float local_4f8[4];
    float local_4e8[4];
    float local_4d8[64];
    float local_3d8[64];
    float local_2d8[64];
    undefined4 local_1d8[64];
    ulonglong local_d8;
    ulonglong uVar16;

    local_d8 = DAT_140c0f7b0 ^ (ulonglong) auStack1688;
    local_580 = param_1;
    if (*(longlong * *)(param_1 + 0x40) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x40) + 8))();
        *(undefined8 * )(param_1 + 0x40) = 0;
    }
    if (*(longlong * *)(param_1 + 0xc0) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0xc0) + 8))();
        *(undefined8 * )(param_1 + 0xc0) = 0;
    }
    if (*(longlong * *)(param_1 + 200) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 200) + 8))();
        *(undefined8 * )(param_1 + 200) = 0;
    }
    if (*(longlong * *)(param_1 + 0x110) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x110) + 8))();
        *(undefined8 * )(param_1 + 0x110) = 0;
    }
    if (*(longlong * )(param_1 + 0x108) != 0) {
        fVar60 = 0.0;
        if ((((*(float *) (*(longlong * )(param_1 + 0x20) + 0x60) != 0.0) &&
              ((*(byte * )(*(longlong * )(param_1 + 0x20) + 0x38) & 2) != 0)) &&
             (iVar7 = (**(code * *)(**(longlong * *)(param_1 + 0x28) + 0x40))
                     (*(longlong * *)(param_1 + 0x28), 1), iVar7 == 0)) &&
            ((iVar7 = (**(code * *)(**(longlong * *)(param_1 + 0x28) + 0x40))
                    (*(longlong * *)(param_1 + 0x28), 0x11), iVar7 == 0 ||
                                                             (iVar7 = (**(code * *)(
                                                                     **(longlong * *)(param_1 + 0x28) + 0x40))
                                                                     (*(longlong * *)(param_1 + 0x28), 0x1b), iVar7 ==
                                                                                                              0)))) {
            local_628 = (longlong *) 0x0;
            (**(code * *)(**(longlong * *)(param_1 + 0x28) + 0x48))
                    (*(longlong * *)(param_1 + 0x28), 1, &local_628);
            lVar12 = (**(code * *)(*local_628 + 0x18))();
            local_620 = (longlong *) 0x0;
            (**(code * *)(**(longlong * *)(param_1 + 0x18) + 0x48))(*(longlong * *)(param_1 + 0x18), 1);
            piVar13 = (int *) (**(code * *)(*local_620 + 0x18))();
            FUN_1402ddac0(1, param_1 + 0x40);
            piVar14 = (int *) (**(code * *)(**(longlong * *)(param_1 + 0x40) + 0x18))();
            uVar26 = 0;
            fVar54 = 0.0;
            fVar55 = 0.0;
            fVar56 = 0.0;
            fVar57 = 0.0;
            *piVar14 = *piVar13;
            _local_638 = ZEXT816(0);
            local_548 = ZEXT816(0);
            piVar14[1] = piVar13[1];
            piVar14[2] = piVar13[2];
            piVar14[3] = piVar13[3];
            local_650[3] = DAT_140c79784;
            local_660[3] = DAT_140c79784;
            local_650[1] = DAT_140c7977c;
            local_508 = 0;
            local_500 = 0;
            local_518 = 0;
            local_510 = 0;
            local_660[1] = DAT_140c7977c;
            local_650[0] = DAT_140c79778;
            local_650[2] = DAT_140c79780;
            local_660[0] = DAT_140c79778;
            local_660[2] = DAT_140c79780;
            uVar25 = uVar26;
            uVar18 = uVar26;
            uVar16 = uVar26;
            do {
                iVar7 = (int) uVar16;
                fVar51 = (float) uVar18;
                if (*(int *) (((longlong) piVar13 - (longlong) local_650) +
                              (longlong)(int * )((longlong) local_650 + uVar25)) != 0) {
                    *(int *) ((longlong) local_650 + uVar25) = iVar7;
                    *(undefined4 * )(local_638 + uVar25) = 0x3f800000;
                    *(float *) ((longlong) & local_508 + uVar25) = fVar51;
                    *(undefined4 * )((longlong) & local_518 + uVar25) = 3;
                }
                iVar10 = *(int *) (uVar25 + lVar12);
                piVar15 = piVar14;
                uVar18 = uVar26;
                if (iVar10 != 0) {
                    do {
                        uVar8 = (uint) uVar18;
                        uVar16 = uVar26;
                        piVar19 = piVar14;
                        if (*piVar15 == iVar10) {
                            local_660[uVar18] = iVar7;
                            *(undefined4 * )(local_548 + uVar18 * 4) = 0x3f800000;
                            local_4e8[uVar18] = fVar51;
                            local_4f8[uVar18] = 4.203895e-45;
                            goto joined_r0x0001402e79c7;
                        }
                        piVar15 = piVar15 + 1;
                        uVar18 = (ulonglong)(uVar8 + 1);
                    } while (uVar8 + 1 < 4);
                    do {
                        if (*piVar19 == 0) {
                            piVar14[uVar16] = iVar10;
                            local_660[uVar16] = iVar7;
                            *(undefined4 * )(local_548 + uVar16 * 4) = 0x3f800000;
                            local_4e8[uVar16] = fVar51;
                            local_4f8[uVar16] = 4.203895e-45;
                            break;
                        }
                        uVar8 = (int) uVar16 + 1;
                        uVar16 = (ulonglong) uVar8;
                        piVar19 = piVar19 + 1;
                        joined_r0x0001402e79c7:
                    } while (3 < uVar8);
                }
                uVar18 = (ulonglong)((int) fVar51 + 2U);
                uVar16 = (ulonglong)(iVar7 + 1);
                uVar25 = uVar25 + 4;
            } while ((int) fVar51 + 2U < 8);
            local_538 = (**(code * *)(**(longlong * *)(param_1 + 0x108) + 0x18))();
            local_5e8 = (longlong *) 0x0;
            local_608 = (longlong *) 0x0;
            (**(code * *)(**(longlong * *)(param_1 + 0x28) + 0x48))
                    (*(longlong * *)(param_1 + 0x28), 0x11, &local_5e8);
            (**(code * *)(**(longlong * *)(param_1 + 0x28) + 0x48))
                    (*(longlong * *)(param_1 + 0x28), 0x12, &local_608);
            local_570 = (**(code * *)(*local_5e8 + 0x18))();
            lVar17 = (**(code * *)(*local_608 + 0x18))();
            local_5f8 = (longlong *) 0x0;
            local_600 = (longlong *) 0x0;
            local_5a8 = lVar17;
            (**(code * *)(**(longlong * *)(param_1 + 0x18) + 0x48))
                    (*(longlong * *)(param_1 + 0x18), 0x11, &local_5f8);
            (**(code * *)(**(longlong * *)(param_1 + 0x18) + 0x48))
                    (*(longlong * *)(param_1 + 0x18), 0x12, &local_600);
            local_528 = (**(code * *)(*local_5f8 + 0x18))();
            lVar12 = (**(code * *)(*local_600 + 0x18))();
            local_5d8 = 0;
            local_5d0 = 0;
            local_5c8 = lVar12;
            iVar7 = (**(code * *)(**(longlong * *)(param_1 + 0x28) + 0x40))
                    (*(longlong * *)(param_1 + 0x28), 0x11);
            if (iVar7 == 0) {
                FUN_1402ddac0(0x11, param_1 + 0xc0);
                FUN_1402ddac0(0x12, param_1 + 200);
                local_5d8 = (**(code * *)(**(longlong * *)(param_1 + 0xc0) + 0x18))();
                local_5d0 = (**(code * *)(**(longlong * *)(param_1 + 200) + 0x18))();
            }
            local_618 = (longlong *) 0x0;
            (**(code * *)(**(longlong * *)(param_1 + 0x28) + 0x48))
                    (*(longlong * *)(param_1 + 0x28), 0x1b, &local_618);
            local_588 = (**(code * *)(*local_618 + 0x18))();
            local_5e0 = (longlong *) 0x0;
            (**(code * *)(**(longlong * *)(param_1 + 0x18) + 0x48))
                    (*(longlong * *)(param_1 + 0x18), 0x1b, &local_5e0);
            local_560 = (**(code * *)(*local_5e0 + 0x18))();
            local_610 = 0;
            iVar7 = (**(code * *)(**(longlong * *)(param_1 + 0x28) + 0x40))();
            if (iVar7 == 0) {
                FUN_1402ddac0(0x1b);
                local_610 = (**(code * *)(**(longlong * *)(param_1 + 0x110) + 0x18))();
            }
            fVar61 = 0.003921569;
            fVar59 = 0.5;
            local_664 = 0;
            fVar58 = 1.0;
            fVar51 = _DAT_140c58780;
            fVar39 = fRam0000000140c58784;
            fVar41 = fRam0000000140c58788;
            do {
                local_668 = 0;
                uVar8 = local_664;
                do {
                    auVar50 = CONCAT412(0xffffffff, ZEXT812(0)) & (undefined[16]) 0xffffffffffffffff;
                    local_558 = (longlong)(int)(local_668 * DAT_140c41720 + uVar8 * DAT_140c41724);
                    uVar3 = *(ushort * )(local_558 + 2 + local_570);
                    uVar24 = *(uint * )(local_558 + local_570);
                    uVar9 = *(uint * )(local_558 + 2 + local_570);
                    auVar45 = ZEXT1216(CONCAT48((float) (uVar24 & 0x1f) * 1.0 * fVar51,
                                                CONCAT44((float) (uVar24 & 0x7e0) * 0.03125 * fVar39,
                                                         (float) (uVar24 & 0xf800) * 0.0004882813 * fVar41)) &
                                       (undefined[12]) 0xffffffffffffffff) | auVar50;
                    auVar49 = ZEXT1216(CONCAT48((float) (uVar9 & 0x1f) * 1.0 * fVar51,
                                                CONCAT44((float) (uVar9 & 0x7e0) * 0.03125 * fVar39,
                                                         (float) (uVar9 & 0xf800) * 0.0004882813 * fVar41)) &
                                       (undefined[12]) 0xffffffffffffffff) | auVar50;
                    fVar43 = SUB164(auVar49 >> 0x20, 0);
                    fVar52 = SUB164(auVar49 >> 0x40, 0);
                    fVar53 = SUB164(auVar49 >> 0x60, 0);
                    fVar44 = SUB164(auVar45, 0);
                    fVar46 = SUB164(auVar45 >> 0x20, 0);
                    fVar47 = SUB164(auVar45 >> 0x40, 0);
                    fVar48 = SUB164(auVar45 >> 0x60, 0);
                    if (*(ushort * )(local_558 + local_570) < uVar3 ||
                        *(ushort * )(local_558 + local_570) == uVar3) {
                        fVar36 = (SUB164(auVar49, 0) - fVar44) * 0.5;
                        fVar38 = (fVar43 - fVar46) * 0.5;
                        fVar40 = (fVar52 - fVar47) * 0.5;
                        fVar42 = (fVar53 - fVar48) * 0.5;
                        fVar37 = fVar54;
                        fVar43 = fVar55;
                        fVar52 = fVar56;
                        fVar53 = fVar57;
                    } else {
                        fVar37 = SUB164(auVar49, 0) - fVar44;
                        fVar43 = fVar43 - fVar46;
                        fVar52 = fVar52 - fVar47;
                        fVar53 = fVar53 - fVar48;
                        fVar36 = fVar37 * 0.3333333;
                        fVar38 = fVar43 * 0.3333333;
                        fVar40 = fVar52 * 0.3333333;
                        fVar42 = fVar53 * 0.3333333;
                        fVar37 = fVar37 * 0.6666667 + fVar44;
                        fVar43 = fVar43 * 0.6666667 + fVar46;
                        fVar52 = fVar52 * 0.6666667 + fVar47;
                        fVar53 = fVar53 * 0.6666667 + fVar48;
                    }
                    uVar24 = *(uint * )(local_558 + 4 + local_570);
                    lVar29 = 0x10;
                    pauVar20 = (undefined (*)[16]) local_4d8;
                    do {
                        uVar9 = uVar24 & 3;
                        if (uVar9 == 0) {
                            *pauVar20 = auVar45;
                        } else if (uVar9 == 1) {
                            *pauVar20 = auVar49;
                        } else if (uVar9 == 2) {
                            *pauVar20 = CONCAT412(fVar42 + fVar48,
                                                  CONCAT48(fVar40 + fVar47,
                                                           CONCAT44(fVar38 + fVar46, fVar36 + fVar44)));
                        } else {
                            *(float *) *pauVar20 = fVar37;
                            *(float *) (*pauVar20 + 4) = fVar43;
                            *(float *) (*pauVar20 + 8) = fVar52;
                            *(float *) (*pauVar20 + 0xc) = fVar53;
                        }
                        pauVar20 = pauVar20[1];
                        uVar24 = uVar24 >> 2;
                        lVar29 = lVar29 + -1;
                    } while (lVar29 != 0);
                    uVar24 = *(uint * )(local_558 + lVar17);
                    uVar3 = *(ushort * )(local_558 + 2 + lVar17);
                    uVar9 = *(uint * )(local_558 + 2 + lVar17);
                    auVar45 = ZEXT1216(CONCAT48((float) (uVar24 & 0x1f) * 1.0 * fVar51,
                                                CONCAT44((float) (uVar24 & 0x7e0) * 0.03125 * fVar39,
                                                         (float) (uVar24 & 0xf800) * 0.0004882813 * fVar41)) &
                                       (undefined[12]) 0xffffffffffffffff) | auVar50;
                    auVar49 = ZEXT1216(CONCAT48((float) (uVar9 & 0x1f) * 1.0 * fVar51,
                                                CONCAT44((float) (uVar9 & 0x7e0) * 0.03125 * fVar39,
                                                         (float) (uVar9 & 0xf800) * 0.0004882813 * fVar41)) &
                                       (undefined[12]) 0xffffffffffffffff) | auVar50;
                    fVar43 = SUB164(auVar49 >> 0x20, 0);
                    fVar52 = SUB164(auVar49 >> 0x40, 0);
                    fVar53 = SUB164(auVar49 >> 0x60, 0);
                    fVar44 = SUB164(auVar45, 0);
                    fVar46 = SUB164(auVar45 >> 0x20, 0);
                    fVar47 = SUB164(auVar45 >> 0x40, 0);
                    fVar48 = SUB164(auVar45 >> 0x60, 0);
                    if (*(ushort * )(local_558 + lVar17) < uVar3 || *(ushort * )(local_558 + lVar17) == uVar3) {
                        fVar36 = (SUB164(auVar49, 0) - fVar44) * 0.5;
                        fVar38 = (fVar43 - fVar46) * 0.5;
                        fVar40 = (fVar52 - fVar47) * 0.5;
                        fVar42 = (fVar53 - fVar48) * 0.5;
                        fVar37 = fVar54;
                        fVar43 = fVar55;
                        fVar52 = fVar56;
                        fVar53 = fVar57;
                    } else {
                        fVar37 = SUB164(auVar49, 0) - fVar44;
                        fVar43 = fVar43 - fVar46;
                        fVar52 = fVar52 - fVar47;
                        fVar53 = fVar53 - fVar48;
                        fVar36 = fVar37 * 0.3333333;
                        fVar38 = fVar43 * 0.3333333;
                        fVar40 = fVar52 * 0.3333333;
                        fVar42 = fVar53 * 0.3333333;
                        fVar37 = fVar37 * 0.6666667 + fVar44;
                        fVar43 = fVar43 * 0.6666667 + fVar46;
                        fVar52 = fVar52 * 0.6666667 + fVar47;
                        fVar53 = fVar53 * 0.6666667 + fVar48;
                    }
                    uVar24 = *(uint * )(local_558 + 4 + lVar17);
                    pauVar20 = (undefined (*)[16]) local_2d8;
                    lVar17 = 0x10;
                    do {
                        uVar9 = uVar24 & 3;
                        if (uVar9 == 0) {
                            *pauVar20 = auVar45;
                        } else if (uVar9 == 1) {
                            *pauVar20 = auVar49;
                        } else if (uVar9 == 2) {
                            *pauVar20 = CONCAT412(fVar42 + fVar48,
                                                  CONCAT48(fVar40 + fVar47,
                                                           CONCAT44(fVar38 + fVar46, fVar36 + fVar44)));
                        } else {
                            *(float *) *pauVar20 = fVar37;
                            *(float *) (*pauVar20 + 4) = fVar43;
                            *(float *) (*pauVar20 + 8) = fVar52;
                            *(float *) (*pauVar20 + 0xc) = fVar53;
                        }
                        pauVar20 = pauVar20[1];
                        uVar24 = uVar24 >> 2;
                        lVar17 = lVar17 + -1;
                    } while (lVar17 != 0);
                    uVar24 = *(uint * )(local_558 + local_528);
                    uVar3 = *(ushort * )(local_558 + 2 + local_528);
                    uVar9 = *(uint * )(local_558 + 2 + local_528);
                    auVar45 = ZEXT1216(CONCAT48((float) (uVar24 & 0x1f) * 1.0 * fVar51,
                                                CONCAT44((float) (uVar24 & 0x7e0) * 0.03125 * fVar39,
                                                         (float) (uVar24 & 0xf800) * 0.0004882813 * fVar41)) &
                                       (undefined[12]) 0xffffffffffffffff) | auVar50;
                    auVar49 = ZEXT1216(CONCAT48((float) (uVar9 & 0x1f) * 1.0 * fVar51,
                                                CONCAT44((float) (uVar9 & 0x7e0) * 0.03125 * fVar39,
                                                         (float) (uVar9 & 0xf800) * 0.0004882813 * fVar41)) &
                                       (undefined[12]) 0xffffffffffffffff) | auVar50;
                    fVar43 = SUB164(auVar49 >> 0x20, 0);
                    fVar52 = SUB164(auVar49 >> 0x40, 0);
                    fVar53 = SUB164(auVar49 >> 0x60, 0);
                    fVar44 = SUB164(auVar45, 0);
                    fVar46 = SUB164(auVar45 >> 0x20, 0);
                    fVar47 = SUB164(auVar45 >> 0x40, 0);
                    fVar48 = SUB164(auVar45 >> 0x60, 0);
                    if (*(ushort * )(local_558 + local_528) < uVar3 ||
                        *(ushort * )(local_558 + local_528) == uVar3) {
                        fVar36 = (SUB164(auVar49, 0) - fVar44) * 0.5;
                        fVar38 = (fVar43 - fVar46) * 0.5;
                        fVar40 = (fVar52 - fVar47) * 0.5;
                        fVar42 = (fVar53 - fVar48) * 0.5;
                        fVar37 = fVar54;
                        fVar43 = fVar55;
                        fVar52 = fVar56;
                        fVar53 = fVar57;
                    } else {
                        fVar37 = SUB164(auVar49, 0) - fVar44;
                        fVar43 = fVar43 - fVar46;
                        fVar52 = fVar52 - fVar47;
                        fVar53 = fVar53 - fVar48;
                        fVar36 = fVar37 * 0.3333333;
                        fVar38 = fVar43 * 0.3333333;
                        fVar40 = fVar52 * 0.3333333;
                        fVar42 = fVar53 * 0.3333333;
                        fVar37 = fVar37 * 0.6666667 + fVar44;
                        fVar43 = fVar43 * 0.6666667 + fVar46;
                        fVar52 = fVar52 * 0.6666667 + fVar47;
                        fVar53 = fVar53 * 0.6666667 + fVar48;
                    }
                    uVar24 = *(uint * )(local_558 + 4 + local_528);
                    lVar17 = 0x10;
                    pauVar20 = (undefined (*)[16]) local_3d8;
                    do {
                        uVar9 = uVar24 & 3;
                        if (uVar9 == 0) {
                            *pauVar20 = auVar45;
                        } else if (uVar9 == 1) {
                            *pauVar20 = auVar49;
                        } else if (uVar9 == 2) {
                            *pauVar20 = CONCAT412(fVar42 + fVar48,
                                                  CONCAT48(fVar40 + fVar47,
                                                           CONCAT44(fVar38 + fVar46, fVar36 + fVar44)));
                        } else {
                            *(float *) *pauVar20 = fVar37;
                            *(float *) (*pauVar20 + 4) = fVar43;
                            *(float *) (*pauVar20 + 8) = fVar52;
                            *(float *) (*pauVar20 + 0xc) = fVar53;
                        }
                        pauVar20 = pauVar20[1];
                        uVar24 = uVar24 >> 2;
                        lVar17 = lVar17 + -1;
                    } while (lVar17 != 0);
                    uVar24 = *(uint * )(local_558 + lVar12);
                    uVar3 = *(ushort * )(local_558 + 2 + lVar12);
                    uVar9 = *(uint * )(local_558 + 2 + lVar12);
                    auVar45 = ZEXT1216(CONCAT48((float) (uVar24 & 0x1f) * 1.0 * fVar51,
                                                CONCAT44((float) (uVar24 & 0x7e0) * 0.03125 * fVar39,
                                                         (float) (uVar24 & 0xf800) * 0.0004882813 * fVar41)) &
                                       (undefined[12]) 0xffffffffffffffff) | auVar50;
                    auVar50 = ZEXT1216(CONCAT48((float) (uVar9 & 0x1f) * 1.0 * fVar51,
                                                CONCAT44((float) (uVar9 & 0x7e0) * 0.03125 * fVar39,
                                                         (float) (uVar9 & 0xf800) * 0.0004882813 * fVar41)) &
                                       (undefined[12]) 0xffffffffffffffff) | auVar50;
                    fVar43 = SUB164(auVar50 >> 0x20, 0);
                    fVar52 = SUB164(auVar50 >> 0x40, 0);
                    fVar53 = SUB164(auVar50 >> 0x60, 0);
                    fVar44 = SUB164(auVar45, 0);
                    fVar46 = SUB164(auVar45 >> 0x20, 0);
                    fVar47 = SUB164(auVar45 >> 0x40, 0);
                    fVar48 = SUB164(auVar45 >> 0x60, 0);
                    if (*(ushort * )(local_558 + lVar12) < uVar3 || *(ushort * )(local_558 + lVar12) == uVar3) {
                        auVar49 = CONCAT412(fVar57, CONCAT48(fVar56, CONCAT44(fVar55, fVar54)));
                        fVar36 = (SUB164(auVar50, 0) - fVar44) * 0.5;
                        fVar38 = (fVar43 - fVar46) * 0.5;
                        fVar40 = (fVar52 - fVar47) * 0.5;
                        fVar42 = (fVar53 - fVar48) * 0.5;
                    } else {
                        fVar37 = SUB164(auVar50, 0) - fVar44;
                        fVar43 = fVar43 - fVar46;
                        fVar52 = fVar52 - fVar47;
                        fVar53 = fVar53 - fVar48;
                        fVar36 = fVar37 * 0.3333333;
                        fVar38 = fVar43 * 0.3333333;
                        fVar40 = fVar52 * 0.3333333;
                        fVar42 = fVar53 * 0.3333333;
                        auVar49 = CONCAT412(fVar53 * 0.6666667 + fVar48,
                                            CONCAT48(fVar52 * 0.6666667 + fVar47,
                                                     CONCAT44(fVar43 * 0.6666667 + fVar46,
                                                              fVar37 * 0.6666667 + fVar44)));
                    }
                    uVar24 = *(uint * )(local_558 + 4 + lVar12);
                    pauVar20 = (undefined (*)[16]) local_1d8;
                    lVar12 = 0x10;
                    do {
                        uVar9 = uVar24 & 3;
                        if (uVar9 == 0) {
                            *pauVar20 = auVar45;
                        } else if (uVar9 == 1) {
                            *pauVar20 = auVar50;
                        } else if (uVar9 == 2) {
                            *pauVar20 = CONCAT412(fVar42 + fVar48,
                                                  CONCAT48(fVar40 + fVar47,
                                                           CONCAT44(fVar38 + fVar46, fVar36 + fVar44)));
                        } else {
                            *pauVar20 = auVar49;
                        }
                        pauVar20 = pauVar20[1];
                        uVar24 = uVar24 >> 2;
                        lVar12 = lVar12 + -1;
                    } while (lVar12 != 0);
                    uVar24 = uVar8 * 4;
                    uVar9 = local_668 * 4;
                    lVar17 = 0;
                    iVar10 = uVar24 + 4;
                    iVar7 = uVar9 + 4;
                    local_5f0 = 0;
                    _local_638 = CONCAT412(iVar10, CONCAT48(iVar7, CONCAT44(uVar24, uVar9)));
                    lVar29 = local_558;
                    if ((int) uVar24 < iVar10) {
                        lVar34 = (longlong)(int)
                        uVar24;
                        do {
                            if ((int) uVar9 < iVar7) {
                                lVar33 = (longlong) local_660[0];
                                lVar29 = (longlong) local_650[0];
                                lVar12 = (longlong) local_650[1];
                                lVar30 = (longlong) local_650[2];
                                lVar32 = (longlong) local_650[3];
                                lVar27 = lVar17 << 4;
                                local_530 = lVar33;
                                local_5c0 = lVar29;
                                local_578 = lVar12;
                                local_5f0 = local_5f0 + (ulonglong)(iVar7 + local_668 * -4);
                                local_520 = lVar30;
                                local_568 = lVar32;
                                lVar35 = (longlong)(int)
                                uVar9;
                                lVar28 = lVar27;
                                uVar8 = uVar9;
                                do {
                                    fVar51 = fVar60;
                                    if ((uVar24 < 0x41) && (uVar8 < 0x41)) {
                                        fVar51 = (float) (uint) * (byte * )(DAT_140c4191c * lVar34 + 1 +
                                                                            DAT_140c41918 * lVar35 + local_538) *
                                                 fVar61 *
                                                 *(float *) (*(longlong * )(local_580 + 0x20) + 0x60);
                                        lVar29 = local_5c0;
                                    }
                                    if (fVar59 <= *(float *) ((longlong) local_4d8 + lVar27 + 0xc)) {
                                        local_4f8[0] = (*(float *) ((longlong) local_2d8 + lVar27) * 2.066667 +
                                                        *(float *) ((longlong) local_4d8 + lVar27)) - 1.0;
                                        local_4f8[1] = (*(float *) ((longlong) local_2d8 + lVar27 + 4) * 2.032258 +
                                                        *(float *) ((longlong) local_4d8 + lVar27 + 4)) - 1.0;
                                        local_4f8[2] = (*(float *) ((longlong) local_2d8 + lVar27 + 8) * 2.066667 +
                                                        *(float *) ((longlong) local_4d8 + lVar27 + 8)) - 1.0;
                                        local_4f8[3] = ((fVar58 - local_4f8[0]) - local_4f8[1]) - local_4f8[2];
                                        auVar45 = maxps(CONCAT412(fVar57, CONCAT48(fVar56, CONCAT44(fVar55, fVar54))),
                                                        CONCAT412(local_4f8[3],
                                                                  CONCAT48(local_4f8[2],
                                                                           CONCAT44(local_4f8[1], local_4f8[0]))));
                                        local_5b8 = minps(auVar45, _DAT_140b7b240);
                                    } else {
                                        local_5b8 = CONCAT412(fVar57, CONCAT48(fVar56, CONCAT44(fVar55, fVar54)));
                                    }
                                    auVar45 = *(undefined(*)[16])((longlong) local_1d8 + lVar27);
                                    lVar17 = (longlong) local_660[1];
                                    fVar39 = *(float *) ((longlong) local_3d8 + lVar27);
                                    fVar41 = *(float *) ((longlong) local_3d8 + lVar27 + 4);
                                    fVar43 = *(float *) ((longlong) local_3d8 + lVar27 + 8);
                                    fVar52 = *(float *) ((longlong) local_3d8 + lVar27 + 0xc);
                                    auVar49 = minps(CONCAT88(SUB168(CONCAT412(*(undefined4 * )
                                                                     (local_5b8 + (longlong) local_660[3] * 4
                                                                     ), CONCAT48(*(undefined4 * )
                                                                     (local_5b8 +
                                                                      (longlong) local_660[2] * 4), CONCAT44(*(undefined4 * )
                                                                     (local_5b8 +
                                                                      (longlong)
                                                                              local_660[2] * 4), *(undefined4 * )
                                                                     (local_5b8 +
                                                                      lVar33 * 4))))
                                                                            >> 0x40, 0),
                                                             CONCAT44(*(undefined4 * )(local_5b8 + lVar17 * 4),
                                                                      *(undefined4 * )(local_5b8 + lVar33 * 4))),
                                                    local_548);
                                    *(float *) ((longlong) local_4d8 + lVar27) = SUB164(auVar49, 0) * fVar51;
                                    *(float *) ((longlong) local_4d8 + lVar27 + 4) =
                                            SUB164(auVar49 >> 0x20, 0) * fVar51;
                                    *(float *) ((longlong) local_4d8 + lVar27 + 8) =
                                            SUB164(auVar49 >> 0x40, 0) * fVar51;
                                    *(float *) ((longlong) local_4d8 + lVar27 + 0xc) =
                                            SUB164(auVar49 >> 0x60, 0) * fVar51;
                                    if (fVar59 <= fVar52) {
                                        local_4e8[0] = (SUB164(auVar45, 0) * 2.066667 + fVar39) - 1.0;
                                        local_4e8[1] = (SUB164(auVar45 >> 0x20, 0) * 2.032258 + fVar41) - 1.0;
                                        local_4e8[2] = (SUB164(auVar45 >> 0x40, 0) * 2.066667 + fVar43) - 1.0;
                                        local_4e8[3] = ((fVar58 - local_4e8[0]) - local_4e8[1]) - local_4e8[2];
                                        auVar45 = maxps(CONCAT412(fVar57, CONCAT48(fVar56, CONCAT44(fVar55, fVar54))),
                                                        CONCAT412(local_4e8[3],
                                                                  CONCAT48(local_4e8[2],
                                                                           CONCAT44(local_4e8[1], local_4e8[0]))));
                                        local_598 = minps(auVar45, _DAT_140b7b240);
                                    } else {
                                        local_598 = CONCAT412(fVar57, CONCAT48(fVar56, CONCAT44(fVar55, fVar54)));
                                    }
                                    fVar51 = fVar58 - fVar51;
                                    auVar45 = minps(CONCAT88(SUB168(CONCAT412(*(undefined4 * )(local_598 + lVar32 * 4),
                                                                              CONCAT48(*(undefined4 * )
                                                                                               (local_598 + lVar30 * 4),
                                                                                       CONCAT44(*(undefined4 * )
                                                                                                        (local_598 +
                                                                                                         lVar30 * 4),
                                                                                                *(undefined4 * )
                                                                                                        (local_598 +
                                                                                                         lVar29 * 4))))
                                                                            >>
                                                                            0x40, 0),
                                                             CONCAT44(*(undefined4 * )(local_598 + lVar12 * 4),
                                                                      *(undefined4 * )(local_598 + lVar29 * 4))),
                                                    CONCAT412(uStack1580,
                                                              CONCAT48(uStack1584,
                                                                       CONCAT44(local_638._4_4_, local_638._0_4_))));
                                    *(undefined(*)[16])((longlong) local_3d8 + lVar27) =
                                            CONCAT412(fVar51 * SUB164(auVar45 >> 0x60, 0),
                                                      CONCAT48(fVar51 * SUB164(auVar45 >> 0x40, 0),
                                                               CONCAT44(fVar51 * SUB164(auVar45 >> 0x20, 0),
                                                                        fVar51 * SUB164(auVar45, 0))));
                                    if (((local_610 != 0) && (uVar24 < 0x40)) && (uVar8 < 0x40)) {
                                        lVar12 = (longlong)(int)(DAT_140c41950 * uVar8 + uVar24 * DAT_140c41954);
                                        bVar2 = *(byte * )(lVar12 + local_588);
                                        bVar23 = *(byte * )(lVar12 + local_560);
                                        bVar31 = bVar23;
                                        if (*(float *) ((longlong) local_3d8 + lVar28 + 0xc) <
                                            *(float *) ((longlong) local_4d8 + lVar28 + 0xc)) {
                                            bVar31 = bVar2;
                                        }
                                        bVar21 = bVar23;
                                        if (*(float *) ((longlong) local_3d8 + lVar28 + 8) <
                                            *(float *) ((longlong) local_4d8 + lVar28 + 8)) {
                                            bVar21 = bVar2;
                                        }
                                        bVar22 = bVar23;
                                        if (*(float *) ((longlong) local_3d8 + lVar28 + 4) <
                                            *(float *) ((longlong) local_4d8 + lVar28 + 4)) {
                                            bVar22 = bVar2;
                                        }
                                        if (*(float *) ((longlong) local_3d8 + lVar28) <
                                            *(float *) ((longlong) local_4d8 + lVar28)) {
                                            bVar23 = bVar2;
                                        }
                                        *(byte * )(lVar12 + local_610) =
                                                (((bVar31 >> (local_500._4_1_ & 0x1f) & local_510._4_1_) << 2 |
                                                  bVar21 >> ((byte) local_500 & 0x1f) & (byte) local_510) << 2 |
                                                 bVar22 >> (local_508._4_1_ & 0x1f) & local_518._4_1_) << 2 |
                                                bVar23 >> ((byte) local_508 & 0x1f) & (byte) local_518;
                                        lVar17 = local_610;
                                        lVar29 = local_5c0;
                                        lVar12 = local_578;
                                        lVar30 = local_520;
                                        lVar32 = local_568;
                                        lVar33 = local_530;
                                    }
                                    fVar51 = *(float *) ((longlong) local_3d8 + lVar27) +
                                             *(float *) ((longlong) local_4d8 + lVar27);
                                    fVar39 = *(float *) ((longlong) local_3d8 + lVar27 + 4) +
                                             *(float *) ((longlong) local_4d8 + lVar27 + 4);
                                    fVar41 = *(float *) ((longlong) local_3d8 + lVar27 + 8) +
                                             *(float *) ((longlong) local_4d8 + lVar27 + 8);
                                    fVar43 = *(float *) ((longlong) local_3d8 + lVar27 + 0xc) +
                                             *(float *) ((longlong) local_4d8 + lVar27 + 0xc);
                                    *(undefined(*)[16])((longlong) local_4d8 + lVar27) =
                                            CONCAT412(fVar43, CONCAT48(fVar41, CONCAT44(fVar39, fVar51)));
                                    iVar11 = movmskps((int) lVar17,
                                                      CONCAT412(-(uint)(fVar43 != in_xmmTmp2_Dd),
                                                                CONCAT48(-(uint)(fVar41 != fVar57),
                                                                         CONCAT44(-(uint)(fVar39 != fVar55),
                                                                                  -(uint)(fVar51 != fVar54)))));
                                    if (iVar11 != 0) {
                                        *(undefined4 * )((longlong) local_4d8 + lVar27 + 0xc) = 0x3f800000;
                                    }
                                    uVar8 = uVar8 + 1;
                                    lVar28 = lVar28 + 0x10;
                                    lVar27 = lVar27 + 0x10;
                                    lVar35 = lVar35 + 1;
                                    lVar17 = local_5f0;
                                } while ((int) uVar8 < iVar7);
                            }
                            uVar24 = uVar24 + 1;
                            lVar34 = lVar34 + 1;
                            lVar29 = local_558;
                            fVar51 = _DAT_140c58780;
                            fVar39 = fRam0000000140c58784;
                            fVar41 = fRam0000000140c58788;
                            uVar8 = local_664;
                        } while ((int) uVar24 < iVar10);
                    }
                    if (local_5d8 != 0) {
                        uVar25 = 0;
                        do {
                            uVar4 = *(undefined4 * )((longlong) local_4d8 + uVar25 + 4);
                            uVar5 = *(undefined4 * )((longlong) local_4d8 + uVar25 + 8);
                            uVar6 = *(undefined4 * )((longlong) local_4d8 + uVar25 + 0xc);
                            uVar18 = uVar25 + 0x10;
                            *(undefined4 * )((longlong) local_1d8 + uVar25) =
                                    *(undefined4 * )((longlong) local_4d8 + uVar25);
                            *(undefined4 * )((longlong) local_1d8 + uVar25 + 4) = uVar4;
                            *(undefined4 * )((longlong) local_1d8 + uVar25 + 8) = uVar5;
                            *(undefined4 * )((longlong) local_1d8 + uVar25 + 0xc) = uVar6;
                            uVar25 = uVar18;
                        } while (uVar18 < 0x100);
                        puVar1 = (uint * )(lVar29 + local_5d8);
                        local_678 = 0x40000;
                        FUN_140267380(puVar1, local_1d8, CONCAT71((int7)((ulonglong) lVar12 >> 8), 1));
                        uVar8 = *puVar1;
                        uVar24 = *(uint * )((longlong) puVar1 + 2);
                        fVar51 = (float) (uVar8 & 0x1f) * 1.0 * _DAT_140c58780;
                        fVar39 = (float) (uVar8 & 0x7e0) * 0.03125 * fRam0000000140c58784;
                        fVar41 = (float) (uVar8 & 0xf800) * 0.0004882813 * fRam0000000140c58788;
                        fVar43 = (float) (uVar24 & 0x1f) * 1.0 * _DAT_140c58780;
                        fVar52 = (float) (uVar24 & 0x7e0) * 0.03125 * fRam0000000140c58784;
                        fVar53 = (float) (uVar24 & 0xf800) * 0.0004882813 * fRam0000000140c58788;
                        if (*(ushort *) puVar1 < *(ushort * )((longlong) puVar1 + 2) ||
                            *(ushort *) puVar1 == *(ushort * )((longlong) puVar1 + 2)) {
                            fVar37 = (fVar53 - fVar41) * 0.5;
                            fVar36 = (fVar52 - fVar39) * 0.5;
                            fVar38 = (fVar43 - fVar51) * 0.5;
                            fVar44 = fVar54;
                            fVar46 = fVar55;
                            fVar47 = fVar56;
                            fVar48 = fVar57;
                        } else {
                            fVar37 = (fVar53 - fVar41) * 0.3333333;
                            fVar36 = (fVar52 - fVar39) * 0.3333333;
                            fVar38 = (fVar43 - fVar51) * 0.3333333;
                            fVar44 = (fVar53 - fVar41) * 0.6666667 + fVar41;
                            fVar46 = (fVar52 - fVar39) * 0.6666667 + fVar39;
                            fVar47 = (fVar43 - fVar51) * 0.6666667 + fVar51;
                            fVar48 = 1.0;
                        }
                        uVar8 = puVar1[1];
                        pauVar20 = (undefined (*)[16]) local_2d8;
                        lVar12 = 0x10;
                        do {
                            uVar24 = uVar8 & 3;
                            if (uVar24 == 0) {
                                *(float *) *pauVar20 = fVar41;
                                *(float *) (*pauVar20 + 4) = fVar39;
                                *(float *) (*pauVar20 + 8) = fVar51;
                                *(undefined4 * )(*pauVar20 + 0xc) = 0x3f800000;
                            } else if (uVar24 == 1) {
                                *(float *) *pauVar20 = fVar53;
                                *(float *) (*pauVar20 + 4) = fVar52;
                                *(float *) (*pauVar20 + 8) = fVar43;
                                *(undefined4 * )(*pauVar20 + 0xc) = 0x3f800000;
                            } else if (uVar24 == 2) {
                                *pauVar20 = CONCAT412(0x3f800000,
                                                      CONCAT48(fVar38 + fVar51,
                                                               CONCAT44(fVar36 + fVar39, fVar37 + fVar41)));
                            } else {
                                *(float *) *pauVar20 = fVar44;
                                *(float *) (*pauVar20 + 4) = fVar46;
                                *(float *) (*pauVar20 + 8) = fVar47;
                                *(float *) (*pauVar20 + 0xc) = fVar48;
                            }
                            pauVar20 = pauVar20[1];
                            uVar8 = uVar8 >> 2;
                            lVar12 = lVar12 + -1;
                        } while (lVar12 != 0);
                        uVar25 = 0;
                        do {
                            fVar51 = *(float *) ((longlong) local_4d8 + uVar25 + 4);
                            fVar39 = *(float *) ((longlong) local_4d8 + uVar25 + 8);
                            uVar18 = uVar25 + 0x10;
                            *(float *) ((longlong) local_2d8 + uVar25) =
                                    ((*(float *) ((longlong) local_4d8 + uVar25) -
                                      *(float *) ((longlong) local_2d8 + uVar25)) * 0.5 + 0.5) * 0.9677419;
                            *(float *) ((longlong) local_2d8 + uVar25 + 4) =
                                    ((fVar51 - *(float *) ((longlong) local_2d8 + uVar25 + 4)) * 0.5 + 0.5) * 0.984127;
                            *(float *) ((longlong) local_2d8 + uVar25 + 8) =
                                    ((fVar39 - *(float *) ((longlong) local_2d8 + uVar25 + 8)) * 0.5 + 0.5) * 0.9677419;
                            *(float *) ((longlong) local_2d8 + uVar25 + 0xc) = fVar58 * 1.0;
                            uVar25 = uVar18;
                        } while (uVar18 < 0x100);
                        uVar25 = 0;
                        do {
                            uVar4 = *(undefined4 * )((longlong) local_2d8 + uVar25 + 4);
                            uVar5 = *(undefined4 * )((longlong) local_2d8 + uVar25 + 8);
                            uVar6 = *(undefined4 * )((longlong) local_2d8 + uVar25 + 0xc);
                            uVar18 = uVar25 + 0x10;
                            *(undefined4 * )((longlong) local_1d8 + uVar25) =
                                    *(undefined4 * )((longlong) local_2d8 + uVar25);
                            *(undefined4 * )((longlong) local_1d8 + uVar25 + 4) = uVar4;
                            *(undefined4 * )((longlong) local_1d8 + uVar25 + 8) = uVar5;
                            *(undefined4 * )((longlong) local_1d8 + uVar25 + 0xc) = uVar6;
                            uVar25 = uVar18;
                        } while (uVar18 < 0x100);
                        local_678 = 0x40000;
                        FUN_140267380(local_5d0 + lVar29, local_1d8, 1);
                        fVar51 = _DAT_140c58780;
                        fVar39 = fRam0000000140c58784;
                        fVar41 = fRam0000000140c58788;
                        uVar8 = local_664;
                    }
                    local_668 = local_668 + 1;
                    lVar12 = local_5c8;
                    lVar17 = local_5a8;
                } while (local_668 < 0x11);
                local_664 = uVar8 + 1;
            } while (local_664 < 0x11);
            if (local_5e0 != (longlong *) 0x0) {
                (**(code * *)(*local_5e0 + 8))();
            }
            if (local_618 != (longlong *) 0x0) {
                (**(code * *)(*local_618 + 8))();
            }
            if (local_600 != (longlong *) 0x0) {
                (**(code * *)(*local_600 + 8))();
            }
            if (local_5f8 != (longlong *) 0x0) {
                (**(code * *)(*local_5f8 + 8))();
            }
            if (local_608 != (longlong *) 0x0) {
                (**(code * *)(*local_608 + 8))();
            }
            if (local_5e8 != (longlong *) 0x0) {
                (**(code * *)(*local_5e8 + 8))();
            }
            if (local_620 != (longlong *) 0x0) {
                (**(code * *)(*local_620 + 8))();
            }
            if (local_628 != (longlong *) 0x0) {
                (**(code * *)(*local_628 + 8))();
            }
        }
    }
    FUN_1407db4f0(local_d8 ^ (ulonglong) auStack1688);
    return;
}


void FUN_1402e8680(longlong param_1) {
    float fVar1;
    float fVar2;
    float fVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    uint uVar7;
    uint uVar8;
    longlong lVar9;
    longlong lVar10;
    longlong lVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    undefined auStack712[32];
    uint local_2a8;
    uint local_2a4;
    longlong *local_2a0;
    longlong *local_298;
    undefined8 local_290;
    uint local_288;
    uint local_284;
    int local_280;
    int local_27c;
    longlong local_278;
    longlong local_270;
    undefined8 local_268;
    float local_258[64];
    float local_158[64];
    ulonglong local_58;

    local_58 = DAT_140c0f7b0 ^ (ulonglong) auStack712;
    if (*(longlong * *)(param_1 + 0xa0) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0xa0) + 8))();
        *(undefined8 * )(param_1 + 0xa0) = 0;
    }
    if (*(longlong * )(param_1 + 0x108) != 0) {
        fVar13 = 0.0;
        if (((*(float *) (*(longlong * )(param_1 + 0x20) + 0x60) != 0.0) &&
             ((*(byte * )(*(longlong * )(param_1 + 0x20) + 0x38) & 2) != 0)) &&
            ((iVar4 = (**(code * *)(**(longlong * *)(param_1 + 0x18) + 0x40))
                    (*(longlong * *)(param_1 + 0x18), 0xd), iVar4 == 0 ||
                                                            (iVar4 = (**(code * *)(
                                                                    **(longlong * *)(param_1 + 0x28) + 0x40))
                                                                    (*(longlong * *)(param_1 + 0x28), 0xd), iVar4 ==
                                                                                                            0)))) {
            lVar5 = (**(code * *)(**(longlong * *)(param_1 + 0x108) + 0x18))();
            local_2a0 = (longlong *) 0x0;
            (**(code * *)(**(longlong * *)(param_1 + 0x18) + 0x48))
                    (*(longlong * *)(param_1 + 0x18), 0xd, &local_2a0);
            local_290 = (**(code * *)(*local_2a0 + 0x18))();
            local_298 = (longlong *) 0x0;
            (**(code * *)(**(longlong * *)(param_1 + 0x28) + 0x48))(*(longlong * *)(param_1 + 0x28), 0xd);
            lVar6 = (**(code * *)(*local_298 + 0x18))();
            local_278 = lVar6;
            FUN_1402ddac0(0xd, param_1 + 0xa0);
            local_268 = (**(code * *)(**(longlong * *)(param_1 + 0xa0) + 0x18))();
            fVar14 = 0.003921569;
            local_2a4 = 0;
            do {
                local_2a8 = 0;
                do {
                    local_270 = (longlong)(int)(DAT_140c41640 * local_2a8 + DAT_140c41644 * local_2a4);
                    FUN_140268060(local_258, local_270 + lVar6);
                    FUN_140268060(local_158);
                    lVar11 = 0;
                    local_288 = local_2a8 * 4;
                    local_284 = local_2a4 * 4;
                    local_280 = local_288 + 4;
                    local_27c = local_284 + 4;
                    if ((int) local_284 < local_27c) {
                        lVar10 = (longlong)(int)
                        local_284;
                        uVar8 = local_284;
                        do {
                            if ((int) local_288 < local_280) {
                                lVar9 = (longlong)(int)
                                local_288;
                                lVar6 = lVar11 << 4;
                                lVar11 = lVar11 + (ulonglong)(local_280 + local_2a8 * -4);
                                uVar7 = local_288;
                                do {
                                    fVar12 = fVar13;
                                    if ((uVar8 < 0x41) && (uVar7 < 0x41)) {
                                        fVar12 = (float) (uint) * (byte * )(DAT_140c41918 * lVar9 + 2 +
                                                                            DAT_140c4191c * lVar10 + lVar5) * fVar14 *
                                                 *(float *) (*(longlong * )(param_1 + 0x20) + 0x60);
                                    }
                                    fVar1 = *(float *) ((longlong) local_158 + lVar6 + 4);
                                    fVar2 = *(float *) ((longlong) local_158 + lVar6 + 8);
                                    fVar3 = *(float *) ((longlong) local_158 + lVar6 + 0xc);
                                    uVar7 = uVar7 + 1;
                                    lVar9 = lVar9 + 1;
                                    *(undefined(*)[16])((longlong) local_258 + lVar6) =
                                            CONCAT412(
                                                    (*(float *) ((longlong) local_258 + lVar6 + 0xc) - fVar3) * fVar12 +
                                                    fVar3,
                                                    CONCAT48((*(float *) ((longlong) local_258 + lVar6 + 8) - fVar2
                                                             ) * fVar12 + fVar2,
                                                             CONCAT44((*(float *) ((longlong) local_258 + lVar6 + 4
                                                                      ) - fVar1) * fVar12 + fVar1,
                                                                      (*(float *) ((longlong) local_258 + lVar6) -
                                                                       *(float *) ((longlong) local_158 + lVar6)) *
                                                                      fVar12 + *(float *) ((longlong) local_158 +
                                                                                           lVar6))));
                                    lVar6 = lVar6 + 0x10;
                                } while ((int) uVar7 < local_280);
                            }
                            uVar8 = uVar8 + 1;
                            lVar10 = lVar10 + 1;
                            lVar6 = local_278;
                        } while ((int) uVar8 < local_27c);
                    }
                    FUN_140268120();
                    local_2a8 = local_2a8 + 1;
                } while (local_2a8 < 0x11);
                local_2a4 = local_2a4 + 1;
            } while (local_2a4 < 0x11);
            if (local_298 != (longlong *) 0x0) {
                (**(code * *)(*local_298 + 8))();
            }
            if (local_2a0 != (longlong *) 0x0) {
                (**(code * *)(*local_2a0 + 8))();
            }
        }
    }
    FUN_1407db4f0(local_58 ^ (ulonglong) auStack712);
    return;
}


void FUN_1402e89f0(longlong param_1) {
    byte bVar1;
    int iVar2;
    longlong lVar3;
    byte *pbVar4;
    longlong lVar5;
    longlong lVar6;
    byte *pbVar7;
    longlong lVar8;
    longlong lVar9;
    byte *pbVar10;
    longlong lVar11;
    longlong lVar12;
    longlong *local_res8;
    longlong *local_res10;

    if (*(longlong * *)(param_1 + 0xb8) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0xb8) + 8))();
        *(undefined8 * )(param_1 + 0xb8) = 0;
    }
    if (((*(longlong * )(param_1 + 0x108) != 0) &&
         (*(float *) (*(longlong * )(param_1 + 0x20) + 0x60) != 0.0)) &&
        ((*(byte * )(*(longlong * )(param_1 + 0x20) + 0x38) & 8) != 0)) {
        iVar2 = (**(code * *)(**(longlong * *)(param_1 + 0x18) + 0x40))
                (*(longlong * *)(param_1 + 0x18), 0x10);
        if ((iVar2 != 0) &&
            (iVar2 = (**(code * *)(**(longlong * *)(param_1 + 0x28) + 0x40))
                    (*(longlong * *)(param_1 + 0x28), 0x10), iVar2 != 0)) {
            return;
        }
        lVar3 = (**(code * *)(**(longlong * *)(param_1 + 0x108) + 0x18))();
        local_res10 = (longlong *) 0x0;
        (**(code * *)(**(longlong * *)(param_1 + 0x18) + 0x48))
                (*(longlong * *)(param_1 + 0x18), 0x10, &local_res10);
        pbVar4 = (byte * )(**(code * *)(*local_res10 + 0x18))();
        local_res8 = (longlong *) 0x0;
        (**(code * *)(**(longlong * *)(param_1 + 0x28) + 0x48))
                (*(longlong * *)(param_1 + 0x28), 0x10, &local_res8);
        lVar5 = (**(code * *)(*local_res8 + 0x18))();
        FUN_1402ddac0(0x10, param_1 + 0xb8);
        lVar6 = (**(code * *)(**(longlong * *)(param_1 + 0xb8) + 0x18))();
        lVar12 = 0x40;
        do {
            lVar9 = lVar6 - (longlong) pbVar4;
            pbVar10 = (byte * )(lVar3 + 5);
            lVar8 = 0x10;
            lVar11 = -(longlong) pbVar4;
            pbVar7 = pbVar4;
            do {
                if (0.5 <= (float) (uint) pbVar10[-4] * 0.003921569 *
                           *(float *) (*(longlong * )(param_1 + 0x20) + 0x60)) {
                    bVar1 = (pbVar7[lVar5 - (longlong) pbVar4] ^ *pbVar7) & 0x18 ^
                            pbVar7[lVar5 - (longlong) pbVar4];
                } else {
                    bVar1 = *pbVar7;
                }
                pbVar7[lVar9] = bVar1;
                if (0.5 <= (float) (uint) * pbVar10 * 0.003921569 *
                           *(float *) (*(longlong * )(param_1 + 0x20) + 0x60)) {
                    pbVar7[lVar9 + 1] =
                            (pbVar7[lVar5 + lVar11 + 1] ^ pbVar7[1]) & 0x18 ^ pbVar7[lVar5 + lVar11 + 1];
                } else {
                    pbVar7[lVar9 + 1] = pbVar7[1];
                }
                if (0.5 <= (float) (uint) pbVar10[4] * 0.003921569 *
                           *(float *) (*(longlong * )(param_1 + 0x20) + 0x60)) {
                    pbVar7[lVar9 + 2] =
                            (pbVar7[lVar5 + lVar11 + 2] ^ pbVar7[2]) & 0x18 ^ pbVar7[lVar5 + lVar11 + 2];
                } else {
                    pbVar7[lVar9 + 2] = pbVar7[2];
                }
                if (0.5 <= (float) (uint) pbVar10[8] * 0.003921569 *
                           *(float *) (*(longlong * )(param_1 + 0x20) + 0x60)) {
                    pbVar7[lVar9 + 3] =
                            (pbVar7[lVar5 + lVar11 + 3] ^ pbVar7[3]) & 0x18 ^ pbVar7[lVar5 + lVar11 + 3];
                } else {
                    pbVar7[lVar9 + 3] = pbVar7[3];
                }
                pbVar7 = pbVar7 + 4;
                pbVar10 = pbVar10 + 0x10;
                lVar8 = lVar8 + -1;
            } while (lVar8 != 0);
            lVar3 = lVar3 + DAT_140c4191c;
            lVar8 = (longlong) DAT_140c416ec;
            pbVar4 = pbVar4 + lVar8;
            lVar5 = lVar5 + lVar8;
            lVar6 = lVar6 + lVar8;
            lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
        if (local_res8 != (longlong *) 0x0) {
            (**(code * *)(*local_res8 + 8))();
        }
        if (local_res10 != (longlong *) 0x0) {
            (**(code * *)(*local_res10 + 8))();
        }
    }
    return;
}


void FUN_1402e8cc0(longlong param_1) {
    longlong **pplVar1;
    longlong *plVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    ushort *puVar7;
    ushort uVar8;
    longlong lVar9;
    longlong lVar10;
    longlong lVar11;
    longlong lVar12;
    longlong *local_res8;
    longlong *local_res10;

    pplVar1 = (longlong * *)(param_1 + 0x148);
    if (*pplVar1 != (longlong *) 0x0) {
        (**(code * *)(**pplVar1 + 8))();
        *pplVar1 = (longlong *) 0x0;
    }
    plVar2 = *(longlong * *)(param_1 + 0x28);
    if (plVar2 != (longlong *) 0x0) {
        iVar3 = (**(code * *)(*plVar2 + 0x40))(plVar2, 0x22);
        if (iVar3 == 0) {
            local_res10 = (longlong *) 0x0;
            (**(code * *)(**(longlong * *)(param_1 + 0x18) + 0x48))
                    (*(longlong * *)(param_1 + 0x18), 0x22, &local_res10);
            lVar4 = (**(code * *)(*local_res10 + 0x18))();
            local_res8 = (longlong *) 0x0;
            (**(code * *)(**(longlong * *)(param_1 + 0x28) + 0x48))
                    (*(longlong * *)(param_1 + 0x28), 0x22, &local_res8);
            lVar5 = (**(code * *)(*local_res8 + 0x18))();
            FUN_1402ddac0(0x22, pplVar1);
            lVar6 = (**(code * *)(**pplVar1 + 0x18))();
            lVar9 = 0x41;
            do {
                puVar7 = (ushort * )(lVar5 + 2);
                lVar10 = lVar4 - lVar5;
                lVar11 = lVar6 - lVar5;
                lVar12 = 0xd;
                do {
                    uVar8 = *(ushort * )(lVar10 + -2 + (longlong) puVar7);
                    if (uVar8 < puVar7[-1]) {
                        uVar8 = puVar7[-1];
                    }
                    *(ushort * )((longlong) puVar7 + lVar11 + -2) = uVar8;
                    uVar8 = *(ushort * )(lVar10 + (longlong) puVar7);
                    if (uVar8 < *puVar7) {
                        uVar8 = *puVar7;
                    }
                    *(ushort * )(lVar11 + (longlong) puVar7) = uVar8;
                    uVar8 = *(ushort * )(lVar10 + 2 + (longlong) puVar7);
                    if (uVar8 < puVar7[1]) {
                        uVar8 = puVar7[1];
                    }
                    *(ushort * )(lVar11 + 2 + (longlong) puVar7) = uVar8;
                    uVar8 = *(ushort * )(lVar10 + 4 + (longlong) puVar7);
                    if (uVar8 < puVar7[2]) {
                        uVar8 = puVar7[2];
                    }
                    *(ushort * )(lVar11 + 4 + (longlong) puVar7) = uVar8;
                    uVar8 = *(ushort * )(lVar10 + 6 + (longlong) puVar7);
                    if (uVar8 < puVar7[3]) {
                        uVar8 = puVar7[3];
                    }
                    puVar7 = puVar7 + 5;
                    *(ushort * )(lVar11 + -4 + (longlong) puVar7) = uVar8;
                    lVar12 = lVar12 + -1;
                } while (lVar12 != 0);
                lVar10 = (longlong) DAT_140c41adc;
                lVar4 = lVar4 + lVar10;
                lVar5 = lVar5 + lVar10;
                lVar6 = lVar6 + lVar10;
                lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
            if (local_res8 != (longlong *) 0x0) {
                (**(code * *)(*local_res8 + 8))();
            }
            if (local_res10 != (longlong *) 0x0) {
                (**(code * *)(*local_res10 + 8))();
            }
        }
    }
    return;
}


int FUN_1402e8e70(longlong param_1) {
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *) (param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_1402e6fb0();
            FUN_14018b900(param_1, 0);
        }
        iVar2 = 0;
    }
    return iVar2;
}


undefined8 FUN_1402e8eb0(longlong param_1, undefined8 param_2) {
    longlong *plVar1;
    int iVar2;

    if (*(longlong * )(param_1 + 0x30) != 0x3fffffffff) {
        iVar2 = (**(code * *)(**(longlong * *)(param_1 + 0x18) + 0x30))();
        if (iVar2 == 0) {
            return 0;
        }
        plVar1 = *(longlong * *)(param_1 + 0x28);
        if ((plVar1 != (longlong *) 0x0) &&
            (iVar2 = (**(code * *)(*plVar1 + 0x30))(plVar1, param_2), iVar2 == 0)) {
            return 0;
        }
        if ((*(uint * )(param_1 + 0x30) >> 0x1a & 1) == 0) {
            if (*(longlong * *)(param_1 + 0x108) != (longlong *) 0x0) {
                (**(code * *)(**(longlong * *)(param_1 + 0x108) + 8))();
                *(undefined8 * )(param_1 + 0x108) = 0;
            }
            plVar1 = *(longlong * *)(param_1 + 0x28);
            if ((plVar1 != (longlong *) 0x0) &&
                (iVar2 = (**(code * *)(*plVar1 + 0x40))(plVar1, 0x1a), iVar2 == 0)) {
                (**(code * *)(**(longlong * *)(param_1 + 0x28) + 0x48))
                        (*(longlong * *)(param_1 + 0x28), 0x1a, param_1 + 0x108);
            }
            *(ulonglong * )(param_1 + 0x30) = *(ulonglong * )(param_1 + 0x30) & 0xfffffffbf7f8dffc;
        }
        if ((*(byte * )(param_1 + 0x30) & 1) == 0) {
            FUN_1402e73a0(param_1);
        }
        if ((*(uint * )(param_1 + 0x30) & 0x8060002) != 0x8060002) {
            FUN_1402e76e0(param_1);
        }
        if ((*(uint * )(param_1 + 0x30) >> 0xd & 1) == 0) {
            FUN_1402e8680(param_1);
        }
        if ((*(uint * )(param_1 + 0x30) >> 0x10 & 1) == 0) {
            FUN_1402e89f0(param_1);
        }
        if ((*(ulonglong * )(param_1 + 0x30) & 0x400000000) == 0) {
            FUN_1402e8cc0(param_1);
        }
        *(undefined8 * )(param_1 + 0x30) = 0x3fffffffff;
    }
    return 1;
}


undefined8 FUN_1402e9000(longlong *param_1, int param_2) {
    int iVar1;
    undefined4 local_18[4];

    local_18[0] = 0xffffffff;
    (**(code * *)(*param_1 + 0x30))(param_1, local_18);
    if (param_1[(longlong) param_2 + 7] == 0) {
        iVar1 = (**(code * *)(*(longlong *) param_1[3] + 0x40))
                ((longlong *) param_1[3], (longlong) param_2 & 0xffffffff);
        if (iVar1 != 0) {
            return 1;
        }
    }
    return 0;
}


undefined8 FUN_1402e9060(longlong *param_1, int param_2, longlong *param_3, int param_4) {
    undefined8 uVar1;
    ulonglong uVar2;
    undefined4 local_18[4];

    uVar2 = (ulonglong) param_2;
    if ((param_3 != (longlong *) 0x0) && (param_4 == 1)) {
        local_18[0] = 0xffffffff;
        (**(code * *)(*param_1 + 0x30))(param_1, local_18);
        if (param_1[uVar2 + 7] != 0) {
            *param_3 = param_1[uVar2 + 7];
            (***(code ***) param_1[uVar2 + 7])();
            return 0;
        }
        uVar1 = (**(code * *)(*(longlong *) param_1[3] + 0x48))
                ((longlong *) param_1[3], uVar2 & 0xffffffff, param_3, 1);
        if (-1 < (int) uVar1) {
            uVar1 = 0;
        }
        return uVar1;
    }
    return 0x80070057;
}


void FUN_1402e93b0(undefined8 *param_1) {
    int *piVar1;
    longlong lVar2;
    undefined8 uVar3;

    *param_1 = &PTR_LAB_140b63840;
    if (param_1[2] != 0) {
        if ((undefined8 *) param_1[0x109] != (undefined8 *) 0x0) {
            *(undefined8 *) param_1[0x109] = param_1[0x10a];
        }
        if (param_1[0x10a] != 0) {
            *(undefined8 * )(param_1[0x10a] + 0x848) = param_1[0x109];
        }
        param_1[0x109] = 0;
        param_1[0x10a] = 0;
        uVar3 = (**(code * *)(*(longlong *) param_1[3] + 0x18))();
        FUN_1400b6120(param_1[2] + 0x28, uVar3);
        lVar2 = param_1[2];
        LOCK();
        piVar1 = (int *) (lVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        if ((*piVar1 == 0) && (lVar2 != 0)) {
            FUN_1402e1540(lVar2);
            FUN_14018b900(lVar2, 0);
        }
    }
    if ((longlong *) param_1[3] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[3] + 8))();
        param_1[3] = 0;
    }
    if ((undefined8 *) param_1[0x109] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x109] = param_1[0x10a];
    }
    if (param_1[0x10a] != 0) {
        *(undefined8 * )(param_1[0x10a] + 0x848) = param_1[0x109];
    }
    param_1[0x109] = 0;
    param_1[0x10a] = 0;
    if (param_1[0x108] != 0) {
        CloseHandle((HANDLE) param_1[0x108]);
    }
    if (param_1[0x104] == 0) {
        return;
    }
    FUN_1401a4a00();
    return;
}


undefined8 FUN_1402e94f0(ulonglong param_1, longlong param_2, undefined4 *param_3) {
    ulonglong *puVar1;
    ulonglong **ppuVar2;
    longlong lVar3;
    undefined8 uVar4;
    ulonglong uVar5;
    ulonglong *puVar6;

    uVar4 = (**(code * *)(**(longlong * *)(param_2 + 0x10) + 0x70))
            (*(longlong * *)(param_2 + 0x10), param_3, param_1 + 0x18);
    if (-1 < (int) uVar4) {
        *(longlong * )(param_1 + 0x10) = param_2;
        LOCK();
        *(int *) (param_2 + 0xc) = *(int *) (param_2 + 0xc) + 1;
        puVar6 = (ulonglong * )(*(longlong * )(param_1 + 0x10) + 0x20);
        if (*(longlong * )(param_1 + 0x848) == 0) {
            *(ulonglong * *)(param_1 + 0x848) = puVar6;
            puVar1 = (ulonglong * )(param_1 + 0x850);
            *puVar1 = *puVar6;
            *puVar6 = param_1;
            if (*puVar1 != 0) {
                *(ulonglong * *)(*puVar1 + 0x848) = puVar1;
            }
        }
        lVar3 = *(longlong * )(param_1 + 0x10);
        if (*(longlong * )(lVar3 + 0x28) == *(longlong * )(lVar3 + 0x30)) {
            FUN_1400290d0(lVar3 + 0x28);
        }
        uVar5 = (**(code * *)(lVar3 + 0x40))(param_3);
        ppuVar2 = (ulonglong * *)
                (*(longlong * )(lVar3 + 0x38) + (uVar5 % *(ulonglong * )(lVar3 + 0x30)) * 8);
        puVar6 = (ulonglong *) FUN_14018b280(0x20);
        if (puVar6 != (ulonglong *) 0x0) {
            puVar1 = *ppuVar2;
            *puVar6 = uVar5;
            puVar6[1] = (ulonglong) puVar1;
            *(undefined4 * )(puVar6 + 2) = *param_3;
            *(undefined4 * )((longlong) puVar6 + 0x14) = param_3[1];
            puVar6[3] = param_1;
        }
        *ppuVar2 = puVar6;
        *(longlong * )(lVar3 + 0x28) = *(longlong * )(lVar3 + 0x28) + 1;
        uVar4 = 0;
    }
    return uVar4;
}


int FUN_1402e95f0(longlong param_1) {
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *) (param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_1402e93b0();
            FUN_14018b900(param_1, 0);
        }
        iVar2 = 0;
    }
    return iVar2;
}


int FUN_1402e9650(longlong param_1, uint param_2, longlong *param_3) {
    int iVar1;
    undefined8 *puVar2;

    if ((0xff < param_2) || (param_3 == (longlong *) 0x0)) {
        return -0x7ff8ffa9;
    }
    puVar2 = *(undefined8 * *)(param_1 + 0x20 + (ulonglong) param_2 * 8);
    if (puVar2 == (undefined8 *) 0x0) {
        puVar2 = (undefined8 *) FUN_14018b280(0x178, 1);
        if (puVar2 == (undefined8 *) 0x0) {
            return -0x7ff8fff2;
        }
        *puVar2 = &PTR_LAB_140b63770;
        puVar2[0x2d] = 0;
        puVar2[0x2e] = 0;
        *(undefined4 * )(puVar2 + 1) = 1;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        FUN_1407e4830(puVar2 + 7, 0, 0x130);
        iVar1 = FUN_1402e7180(puVar2, param_1, (ulonglong) param_2);
        if (iVar1 < 0) {
            FUN_1402e6fb0(puVar2);
            FUN_14018b900(puVar2, 0);
            return iVar1;
        }
    } else {
        (**(code * *) * puVar2)(puVar2);
    }
    *param_3 = (longlong) puVar2;
    return 0;
}


void FUN_1402e9750(undefined8 *param_1) {
    int *piVar1;
    longlong lVar2;

    lVar2 = param_1[2];
    *param_1 = &PTR_LAB_140b638b8;
    if (lVar2 != 0) {
        LOCK();
        piVar1 = (int *) (lVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        if ((*piVar1 == 0) && (lVar2 != 0)) {
            FUN_1402e1540(lVar2);
            FUN_14018b900(lVar2, 0);
        }
    }
    if ((longlong *) param_1[3] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[3] + 8))();
        param_1[3] = 0;
    }
    if ((undefined8 *) param_1[0xd] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0xd] = param_1[0xe];
    }
    if (param_1[0xe] != 0) {
        *(undefined8 * )(param_1[0xe] + 0x68) = param_1[0xd];
    }
    param_1[0xe] = 0;
    param_1[0xd] = 0;
    return;
}



// WARNING: Removing unreachable block (ram,0x0001402e9a30)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8
FUN_1402e97e0(longlong param_1, longlong *param_2, longlong *param_3, undefined4 param_4, int *param_5,
              undefined4 param_6, undefined4 param_7) {
    longlong *plVar1;
    int iVar2;
    bool bVar3;
    int iVar4;
    undefined4 uVar5;
    int iVar6;
    int iVar7;
    undefined8 uVar8;
    longlong lVar9;
    int iVar10;
    longlong *plVar11;
    int iVar12;
    undefined local_78[16];
    code *local_68;
    code *local_60;
    code *local_58;
    code *local_50;
    code *local_48;
    code *local_38;
    code *local_30;
    code *local_28;

    if ((param_3 == (longlong *) 0x0) || (param_2 == (longlong *) param_3[1])) {
        uVar8 = 0x80070057;
    } else {
        iVar2 = *param_5;
        iVar7 = param_5[1];
        lVar9 = (**(code * *)(*param_3 + 0x18))();
        iVar12 = *param_5 + (*(int *) (lVar9 + 0xc) - *(int *) (lVar9 + 4));
        iVar10 = param_5[1] + (*(int *) (lVar9 + 0x10) - *(int *) (lVar9 + 8));
        if ((((iVar2 < _DAT_140c41d88) || (_DAT_140c41d90 < iVar12)) || (iVar7 < _DAT_140c41d8c)) ||
            (iVar4 = iVar7, _DAT_140c41d94 < iVar10)) {
            uVar8 = 0x80070057;
        } else {
            for (; iVar6 = iVar2, iVar4 < iVar10; iVar4 = iVar4 + 1) {
                for (; iVar6 < iVar12; iVar6 = iVar6 + 1) {
                    lVar9 = FUN_1402e16d0();
                    if ((lVar9 != 0) && (*(longlong * )(lVar9 + 0x20) != 0)) {
                        return 0x80004005;
                    }
                }
            }
            *(longlong * *)(param_1 + 0x10) = param_2;
            LOCK();
            *(int *) ((longlong) param_2 + 0xc) = *(int *) ((longlong) param_2 + 0xc) + 1;
            *(longlong * *)(param_1 + 0x18) = param_3;
            (**(code * *) * param_3)();
            *(undefined4 * )(param_1 + 0x20) = param_4;
            *(int *) (param_1 + 0x24) = iVar2;
            *(int *) (param_1 + 0x28) = iVar7;
            *(int *) (param_1 + 0x2c) = iVar12;
            *(int *) (param_1 + 0x30) = iVar10;
            *(undefined4 * )(param_1 + 0x34) = param_6;
            *(undefined4 * )(param_1 + 0x38) = param_7;
            *(int *) (param_1 + 0x40) = iVar2 - *(int *) (*(longlong * )(param_1 + 0x18) + 0x18);
            *(int *) (param_1 + 0x44) = iVar7 - *(int *) (*(longlong * )(param_1 + 0x18) + 0x1c);
            *(undefined(*)[16])(param_1 + 0x50) =
                    ZEXT1216(CONCAT48((float) *(int *) (param_1 + 0x44) * _DAT_140c41d84,
                                      CONCAT44((float) (*(int *) (param_1 + 0x34) -
                                                        *(int *) (*(longlong * )(param_1 + 0x18) + 0x28)) *
                                               _DAT_140c41d98,
                                               (float) *(int *) (param_1 + 0x40) * _DAT_140c41d84)));
            uVar5 = FUN_14018cdf0();
            bVar3 = false;
            plVar11 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x18);
            *(undefined4 * )(param_1 + 0x3c) = uVar5;
            *(undefined4 * )(param_1 + 0x60) = 0;
            if (*(longlong * )(param_1 + 0x68) == 0) {
                *(longlong * *)(param_1 + 0x68) = plVar11;
                plVar1 = (longlong * )(param_1 + 0x70);
                *plVar1 = *plVar11;
                *plVar11 = param_1;
                if (*plVar1 != 0) {
                    *(longlong * *)(*plVar1 + 0x68) = plVar1;
                }
            }
            iVar4 = iVar2;
            if (iVar7 < iVar10) {
                do {
                    for (; iVar4 < iVar12; iVar4 = iVar4 + 1) {
                        iVar6 = (**(code * *)(*param_2 + 0x90))(param_2);
                        if (-1 < iVar6) {
                            iVar6 = FUN_1402e72d0();
                            if (iVar6 < 0) {
                                bVar3 = true;
                            }
                            (**_DAT_00000000)();
                        }
                    }
                    iVar7 = iVar7 + 1;
                    iVar4 = iVar2;
                } while (iVar7 < iVar10);
                if (bVar3) {
                    return 0x80004005;
                }
            }
            FUN_1407e4830(local_78, 0, 0x60);
            local_68 = FUN_1402e1b10;
            local_60 = FUN_1402e1c30;
            local_58 = FUN_1402e1e20;
            local_50 = FUN_1402e1f30;
            local_48 = FUN_1402e2090;
            local_38 = FUN_1402e2150;
            local_30 = FUN_1402e2230;
            local_28 = FUN_140001b70;
            plVar11 = *(longlong * *)(*(longlong * )(param_1 + 0x18) + 8);
            (**(code * *)(*plVar11 + 0xf0))(plVar11, local_78, param_2);
            uVar8 = 0;
        }
    }
    return uVar8;
}


void FUN_1402e9b10(longlong param_1) {
    longlong lVar1;
    ulonglong *puVar2;
    int iVar3;
    ulonglong uVar4;
    uint uVar5;
    uint local_resc;
    int local_res10;
    int local_res14;

    if ((*(longlong * )(*(longlong * )(param_1 + 0x10) + 0x90) != 0) &&
        (local_resc = *(uint * )(param_1 + 0x28), (int) local_resc < *(int *) (param_1 + 0x30))) {
        do {
            uVar5 = *(uint * )(param_1 + 0x24);
            if ((int) uVar5 < *(int *) (param_1 + 0x2c)) {
                do {
                    lVar1 = *(longlong * )(param_1 + 0x10);
                    local_res10 = (int) (uVar5 + ((int) uVar5 >> 0x1f & 0xfU)) >> 4;
                    local_res14 = (int) (local_resc + ((int) local_resc >> 0x1f & 0xfU)) >> 4;
                    uVar4 = (**(code * *)(lVar1 + 0x40))(&local_res10);
                    for (puVar2 = *(ulonglong * *)
                            (*(longlong * )(lVar1 + 0x38) + (uVar4 % *(ulonglong * )(lVar1 + 0x30)) * 8);
                         puVar2 != (ulonglong *) 0x0; puVar2 = (ulonglong *) puVar2[1]) {
                        if ((uVar4 == *puVar2) && (iVar3 = (**(code * *)(lVar1 + 0x48))(), iVar3 != 0)) {
                            if ((puVar2 + 3 != (ulonglong *) 0x0) &&
                                ((uVar4 = puVar2[3], uVar4 != 0 &&
                                                     (*(longlong * )
                                                             (uVar4 + 0x20 +
                                                              (ulonglong)((local_resc & 0xf) * 0x10 + (uVar5 & 0xf)) *
                                                              8) != 0
                                                     )))) {
                                (**(code * *)(*(longlong * )(param_1 + 0x10) + 0x90))();
                            }
                            break;
                        }
                    }
                    uVar5 = uVar5 + 1;
                } while ((int) uVar5 < *(int *) (param_1 + 0x2c));
            }
            local_resc = local_resc + 1;
        } while ((int) local_resc < *(int *) (param_1 + 0x30));
    }
    return;
}


int FUN_1402e9e40(undefined8 *param_1) {
    undefined8 *puVar1;
    int iVar2;

    LOCK();
    puVar1 = param_1 + 1;
    iVar2 = *(int *) puVar1;
    *(int *) puVar1 = *(int *) puVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != (undefined8 *) 0x0) {
            *param_1 = &PTR_LAB_140b638f0;
            if ((longlong *) param_1[5] != (longlong *) 0x0) {
                (**(code * *)(*(longlong *) param_1[5] + 8))();
                param_1[5] = 0;
            }
            FUN_14018b900(param_1, 0);
        }
        iVar2 = 0;
    }
    return iVar2;
}


bool FUN_1402e9e90(longlong *param_1, longlong *param_2) {
    undefined4 uVar1;
    longlong lVar2;
    int iVar3;
    longlong *plVar4;
    undefined8 uVar5;

    if (param_1 == param_2) {
        return true;
    }
    plVar4 = (longlong * )(**(code * *)(*param_2 + 0x10))(param_2);
    if ((*(longlong * )((longlong) param_1 + 0xc) == *plVar4) &&
        (*(longlong * )((longlong) param_1 + 0x14) == plVar4[1])) {
        uVar1 = *(undefined4 * )(param_1 + 3);
        lVar2 = param_1[4];
        uVar5 = (**(code * *)(*param_2 + 0x18))(param_2);
        iVar3 = FUN_1407e6af0(lVar2, uVar5, uVar1);
        return iVar3 == 0;
    }
    return false;
}


undefined8 FUN_1402e9f20(int param_1, undefined8 param_2, undefined8 *param_3, undefined8 *param_4) {
    undefined8 uVar1;
    undefined8 *puVar2;

    if (param_4 == (undefined8 *) 0x0) {
        uVar1 = 0x80070057;
    } else {
        puVar2 = (undefined8 *) FUN_14018b280();
        if (puVar2 == (undefined8 *) 0x0) {
            uVar1 = 0x8007000e;
        } else {
            *(undefined4 * )(puVar2 + 1) = 1;
            puVar2[5] = 0;
            *puVar2 = &PTR_LAB_140b638f0;
            *(int *) (puVar2 + 3) = param_1 * 0xc;
            *(undefined4 * )((longlong) puVar2 + 0xc) = 0xd;
            *(int *) (puVar2 + 2) = param_1;
            *(undefined4 * )((longlong) puVar2 + 0x14) = 0xc;
            puVar2[5] = param_3;
            (**(code * *) * param_3)(param_3);
            puVar2[4] = param_2;
            *param_4 = puVar2;
            uVar1 = 0;
        }
    }
    return uVar1;
}


int FUN_1402e9fe0(void) {
    int iVar1;
    undefined8 *puVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;

    puVar4 = (undefined8 *) 0x0;
    if (DAT_140c890f4 == '\0') {
        puVar2 = (undefined8 *) FUN_14018b280(0x18, 0);
        puVar5 = puVar4;
        if (puVar2 != (undefined8 *) 0x0) {
            puVar2[1] = 2;
            puVar2[2] = 0;
            *puVar2 = &DAT_140c38790;
            puVar5 = puVar2;
        }
        DAT_140c890f4 = '\x01';
        puVar5[2] = DAT_140c63770;
        DAT_140c63770 = puVar5;
    }
    puVar5 = DAT_140c65800;
    if (DAT_140c65800 == (undefined8 *) 0x0) {
        lVar3 = FUN_14018b280(0x930, 0);
        if (lVar3 != 0) {
            puVar4 = (undefined8 *) FUN_1402ea5b0(lVar3);
        }
        iVar1 = FUN_1402eb270(puVar4);
        puVar5 = puVar4;
        if (iVar1 < 0) {
            if (puVar4 != (undefined8 *) 0x0) {
                FUN_1402eae60(puVar4);
                FUN_14018b900(puVar4, 0);
            }
            return iVar1;
        }
    }
    DAT_140c65800 = puVar5;
    return 0;
}


void FUN_1402ea0b0(longlong param_1, undefined8 param_2, uint *param_3, int param_4) {
    ushort uVar1;
    ushort uVar2;
    ushort uVar3;
    ushort *puVar4;
    longlong lVar5;
    undefined *puVar6;
    longlong lVar7;
    undefined *puVar8;
    undefined *puVar9;
    undefined8 uVar10;
    ushort *puVar11;
    uint uVar12;
    ulonglong uVar14;
    ulonglong uVar15;
    undefined2 uVar16;
    uint uVar17;
    undefined *local_88;
    undefined *local_80;
    undefined *local_78;
    undefined local_70[8];
    undefined *local_68;
    ulonglong local_60;
    ulonglong uVar13;

    uVar15 = 0;
    *(undefined8 * )(param_1 + 0x38) = param_2;
    *(int *) (param_1 + 0x18) = param_4;
    uVar12 = 0;
    if (param_4 == 0) {
        uVar17 = *param_3;
        if (uVar17 != 0) {
            puVar11 = *(ushort * *)(param_3 + 2);
            uVar14 = (ulonglong) uVar17;
            uVar13 = uVar15;
            do {
                uVar1 = *puVar11;
                puVar11 = puVar11 + 0x38;
                uVar12 = (int) uVar13 + (uint) uVar1;
                uVar13 = (ulonglong) uVar12;
                uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
        }
        *(uint * )(param_1 + 0x18) = uVar12 * 0x2000 + uVar17;
    }
    FUN_1401cfd00(param_1 + 8);
    uVar13 = uVar15;
    if (*param_3 != 0) {
        do {
            uVar12 = (int) uVar13 + 1;
            *(undefined2 * )(*(longlong * )(param_1 + 8) + uVar13 * 2) =
                    *(undefined2 * )(uVar13 * 0x70 + *(longlong * )(param_3 + 2));
            uVar13 = (ulonglong) uVar12;
        } while (uVar12 < *param_3);
    }
    if (*param_3 != 1) {
        local_68 = (undefined *) FUN_14018b280(0x28);
        local_60 = 0;
        *local_68 = 0;
        *(undefined8 * )(local_68 + 8) = 0;
        *(undefined * *)(local_68 + 0x10) = local_68;
        uVar12 = 0xffff;
        *(undefined * *)(local_68 + 0x18) = local_68;
        *(undefined2 * )(param_1 + 0x1c) = 0xff;
        lVar7 = FUN_14018b280(*(undefined4 * )(*(longlong * )(param_1 + 0x38) + 0x8c0), 8);
        FUN_1407e4830(lVar7, 0xff, *(undefined4 * )(*(longlong * )(param_1 + 0x38) + 0x8c0));
        if (*param_3 != 0) {
            do {
                uVar1 = *(ushort * )(uVar15 * 0x70 + *(longlong * )(param_3 + 2));
                if ((uVar1 != uVar12) && ((uint) uVar1 < *(uint * )(*(longlong * )(param_1 + 0x38) + 0x8c0))) {
                    uVar12 = (uint) uVar1;
                    uVar16 = (undefined2) uVar15;
                    if (uVar12 == 0x96) {
                        if (*(short *) (param_1 + 0x1c) == 0xff) {
                            *(undefined2 * )(param_1 + 0x1c) = uVar16;
                        }
                    } else {
                        *(undefined * )((ulonglong) uVar1 + lVar7) = 0;
                        puVar9 = *(undefined * *)(local_68 + 8);
                        puVar8 = local_68;
                        while (puVar6 = puVar9, puVar6 != (undefined *) 0x0) {
                            if (*(uint * )(puVar6 + 0x20) < uVar12) {
                                puVar9 = *(undefined * *)(puVar6 + 0x18);
                            } else {
                                puVar9 = *(undefined * *)(puVar6 + 0x10);
                                puVar8 = puVar6;
                            }
                        }
                        if ((puVar8 == local_68) || ((uint) uVar1 < *(uint * )(puVar8 + 0x20))) {
                            local_88 = puVar8;
                            FUN_140032b30(local_70, &local_80, &local_88);
                            puVar8 = local_80;
                        }
                        *(undefined2 * )(puVar8 + 0x24) = uVar16;
                        lVar5 = *(longlong * )(*(longlong * )(param_1 + 0x38) + 0x8e8);
                        puVar4 = *(ushort * *)(lVar5 + (ulonglong)(uVar1 + 1) * 8);
                        puVar8 = local_88;
                        for (puVar11 = *(ushort * *)(lVar5 + (ulonglong) uVar1 * 8); local_88 = puVar8,
                                puVar11 < puVar4; puVar11 = puVar11 + 2) {
                            uVar2 = *puVar11;
                            uVar3 = puVar11[1];
                            if (uVar3 < *(byte * )((ulonglong) uVar2 + lVar7)) {
                                puVar9 = *(undefined * *)(local_68 + 8);
                                local_88 = local_68;
                                while (puVar6 = puVar9, puVar6 != (undefined *) 0x0) {
                                    if (*(uint * )(puVar6 + 0x20) < (uint) uVar2) {
                                        puVar9 = *(undefined * *)(puVar6 + 0x18);
                                    } else {
                                        puVar9 = *(undefined * *)(puVar6 + 0x10);
                                        local_88 = puVar6;
                                    }
                                }
                                if ((local_88 == local_68) ||
                                    (puVar9 = local_88, (uint) uVar2 < *(uint * )(local_88 + 0x20))) {
                                    FUN_140032b30(local_70, &local_78, &local_88);
                                    puVar9 = local_78;
                                    puVar8 = local_88;
                                }
                                local_88 = puVar8;
                                *(undefined2 * )(puVar9 + 0x24) = uVar16;
                                *(char *) ((ulonglong)(uint)
                                uVar2 + lVar7) = (char) uVar3;
                            }
                            puVar8 = local_88;
                        }
                        uVar12 = (uint) uVar1;
                    }
                }
                uVar17 = (int) uVar15 + 1;
                uVar15 = (ulonglong) uVar17;
            } while (uVar17 < *param_3);
        }
        FUN_14018b900(lVar7, 0);
        if (*(short *) (param_1 + 0x1c) == 0xff) {
            *(undefined2 * )(param_1 + 0x1c) = 0;
        }
        *(int *) (param_1 + 0x20) = (int) local_60;
        uVar10 = FUN_14018b280((local_60 & 0xffffffff) * 2, 0);
        *(undefined8 * )(param_1 + 0x28) = uVar10;
        uVar10 = FUN_14018b280((ulonglong) * (uint * )(param_1 + 0x20) * 2, 0);
        *(undefined8 * )(param_1 + 0x30) = uVar10;
        puVar8 = *(undefined * *)(local_68 + 0x10);
        uVar15 = 0;
        while (puVar8 != local_68) {
            uVar13 = (ulonglong)((int) uVar15 + 1);
            *(undefined2 * )(uVar15 * 2 + *(longlong * )(param_1 + 0x28)) = *(undefined2 * )(puVar8 + 0x20);
            *(undefined2 * )(uVar15 * 2 + *(longlong * )(param_1 + 0x30)) = *(undefined2 * )(puVar8 + 0x24);
            puVar9 = *(undefined * *)(puVar8 + 0x18);
            uVar15 = uVar13;
            if (puVar9 == (undefined *) 0x0) {
                puVar9 = *(undefined * *)(puVar8 + 8);
                if (puVar8 == *(undefined * *)(puVar9 + 0x18)) {
                    do {
                        puVar8 = puVar9;
                        puVar9 = *(undefined * *)(puVar8 + 8);
                    } while (puVar8 == *(undefined * *)(puVar9 + 0x18));
                }
                if (*(undefined * *)(puVar8 + 0x18) != puVar9) {
                    puVar8 = puVar9;
                }
            } else {
                for (puVar6 = *(undefined * *)(puVar9 + 0x10); puVar8 = puVar9, puVar6 != (undefined *) 0x0;
                     puVar6 = *(undefined * *)(puVar6 + 0x10)) {
                    puVar9 = puVar6;
                }
            }
        }
        if (local_60 != 0) {
            lVar7 = *(longlong * )(local_68 + 8);
            while (lVar7 != 0) {
                FUN_1400083b0(local_70, *(undefined8 * )(lVar7 + 0x18));
                lVar5 = *(longlong * )(lVar7 + 0x10);
                FUN_14018b900(lVar7, 0);
                lVar7 = lVar5;
            }
            *(undefined * *)(local_68 + 0x10) = local_68;
            *(undefined8 * )(local_68 + 8) = 0;
            *(undefined * *)(local_68 + 0x18) = local_68;
            local_60 = 0;
        }
        FUN_14018b900(local_68, 0);
        return;
    }
    *(undefined2 * )(param_1 + 0x1c) = 0;
    *(undefined4 * )(param_1 + 0x20) = 0;
    *(undefined8 * )(param_1 + 0x28) = 0;
    *(undefined8 * )(param_1 + 0x30) = 0;
    return;
}


undefined4 FUN_1402ea4f0(longlong param_1) {
    *(int *) (param_1 + 0x40) = *(int *) (param_1 + 0x40) + 1;
    if (*(int *) (param_1 + 0x40) == 1) {
        FUN_1402eceb0(*(undefined8 * )(param_1 + 0x38));
        return *(undefined4 * )(param_1 + 0x40);
    }
    return *(undefined4 * )(param_1 + 0x40);
}


undefined4 FUN_1402ea520(longlong param_1) {
    int *piVar1;

    piVar1 = (int *) (param_1 + 0x40);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
        FUN_1402ecd70(*(undefined8 * )(param_1 + 0x38), param_1);
        return *(undefined4 * )(param_1 + 0x40);
    }
    return *(undefined4 * )(param_1 + 0x40);
}


undefined2 FUN_1402ea550(longlong param_1, int param_2) {
    uint uVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;

    uVar4 = *(uint * )(param_1 + 0x20);
    uVar3 = 0;
    if (uVar4 != 0) {
        do {
            uVar1 = (uVar4 - uVar3 >> 1) + uVar3;
            uVar2 = (uint) * (ushort * )(*(longlong * )(param_1 + 0x28) + (ulonglong) uVar1 * 2);
            if ((int) uVar2 <= param_2) {
                if (param_2 <= (int) uVar2) {
                    return *(undefined2 * )(*(longlong * )(param_1 + 0x30) + (ulonglong) uVar1 * 2);
                }
                uVar3 = uVar1 + 1;
                uVar1 = uVar4;
            }
            uVar4 = uVar1;
        } while (uVar3 < uVar4);
    }
    return *(undefined2 * )(param_1 + 0x1c);
}


longlong FUN_1402ea5b0(longlong param_1) {
    undefined *puVar1;

    *(undefined8 * )(param_1 + 8) = 0;
    *(undefined8 * )(param_1 + 0x10) = 0;
    *(undefined8 * )(param_1 + 0x18) = 0;
    *(undefined8 * )(param_1 + 0x20) = 0;
    *(undefined8 * )(param_1 + 0x28) = 0;
    *(undefined8 * )(param_1 + 0x30) = 0;
    FUN_140265f50(param_1 + 0x38);
    *(undefined8 * )(param_1 + 0x60) = 0;
    FUN_1402ea750(param_1 + 0x70);
    FUN_1407e4830(param_1 + 0x758, 0, 0x50);
    FUN_1407e4830(param_1 + 0x7a8, 0, 0x50);
    *(undefined8 * )(param_1 + 0x708) = 0;
    *(undefined4 * )(param_1 + 0x710) = 0;
    *(undefined4 * )(param_1 + 0x754) = 0;
    *(undefined8 * )(param_1 + 0x7f8) = 0;
    *(undefined8 * )(param_1 + 0x800) = 0;
    *(undefined8 * )(param_1 + 0x808) = 0;
    *(undefined8 * )(param_1 + 0x810) = 0;
    *(undefined8 * )(param_1 + 0x818) = 0;
    *(undefined8 * )(param_1 + 0x820) = 0;
    *(undefined8 * )(param_1 + 0x828) = 0;
    *(undefined8 * )(param_1 + 0x830) = 0;
    *(undefined8 * )(param_1 + 0x838) = 0;
    *(undefined8 * )(param_1 + 0x840) = 0;
    *(undefined8 * )(param_1 + 0x848) = 0;
    *(undefined8 * )(param_1 + 0x850) = 0;
    *(undefined8 * )(param_1 + 0x858) = 0;
    *(undefined8 * )(param_1 + 0x860) = 0;
    *(undefined8 * )(param_1 + 0x868) = 0;
    *(undefined8 * )(param_1 + 0x870) = 0;
    *(undefined8 * )(param_1 + 0x878) = 0;
    *(undefined8 * )(param_1 + 0x880) = 0;
    *(undefined8 * )(param_1 + 0x888) = 0;
    *(undefined8 * )(param_1 + 0x890) = 0;
    *(undefined8 * )(param_1 + 0x898) = 0;
    *(undefined8 * )(param_1 + 0x8a0) = 0;
    *(undefined8 * )(param_1 + 0x8a8) = 0;
    *(undefined8 * )(param_1 + 0x8b0) = 0;
    *(undefined8 * )(param_1 + 0x8b8) = 0;
    *(undefined8 * )(param_1 + 0x8c8) = 0;
    *(undefined8 * )(param_1 + 0x8d8) = 0;
    *(undefined8 * )(param_1 + 0x8e0) = 0;
    *(undefined8 * )(param_1 + 0x8e8) = 0;
    puVar1 = (undefined *) FUN_14018b280(0x30, 0);
    *(undefined * *)(param_1 + 0x8f8) = puVar1;
    *(undefined8 * )(param_1 + 0x900) = 0;
    *puVar1 = 0;
    *(undefined8 * )(*(longlong * )(param_1 + 0x8f8) + 8) = 0;
    *(longlong * )(*(longlong * )(param_1 + 0x8f8) + 0x10) = *(longlong * )(param_1 + 0x8f8);
    *(longlong * )(*(longlong * )(param_1 + 0x8f8) + 0x18) = *(longlong * )(param_1 + 0x8f8);
    *(undefined8 * )(param_1 + 0x910) = 0;
    *(undefined8 * )(param_1 + 0x918) = 0;
    *(undefined4 * )(param_1 + 0x920) = 0;
    return param_1;
}


longlong FUN_1402ea750(longlong param_1) {
    *(undefined8 * )(param_1 + 0x10) = 0;
    *(undefined8 * )(param_1 + 0x18) = 0;
    FUN_1407e4830(param_1 + 0x20, 0, 0x60);
    *(undefined8 * )(param_1 + 0x80) = 0;
    *(undefined8 * )(param_1 + 0x88) = 0;
    FUN_1407e4830(param_1 + 0x90, 0, 0x60);
    *(undefined8 * )(param_1 + 0xf0) = 0;
    *(undefined8 * )(param_1 + 0xf8) = 0;
    *(undefined8 * )(param_1 + 0x100) = 0;
    *(undefined8 * )(param_1 + 0x108) = 0;
    *(undefined8 * )(param_1 + 0x110) = 0;
    *(undefined8 * )(param_1 + 0x118) = 0;
    *(undefined8 * )(param_1 + 0x120) = 0;
    *(undefined8 * )(param_1 + 0x128) = 0;
    *(undefined8 * )(param_1 + 0x130) = 0;
    *(undefined8 * )(param_1 + 0x138) = 0;
    *(undefined8 * )(param_1 + 0x140) = 0;
    *(undefined8 * )(param_1 + 0x148) = 0;
    *(undefined8 * )(param_1 + 0x150) = 0;
    *(undefined8 * )(param_1 + 0x158) = 0;
    *(undefined8 * )(param_1 + 0x160) = 0;
    *(undefined8 * )(param_1 + 0x168) = 0;
    *(undefined8 * )(param_1 + 0x170) = 0;
    *(undefined8 * )(param_1 + 0x180) = 0;
    *(undefined8 * )(param_1 + 0x188) = 0;
    *(undefined8 * )(param_1 + 400) = 0;
    *(undefined8 * )(param_1 + 0x198) = 0;
    *(undefined8 * )(param_1 + 0x1a0) = 0;
    *(undefined8 * )(param_1 + 0x1a8) = 0;
    *(undefined8 * )(param_1 + 0x1b0) = 0;
    *(undefined8 * )(param_1 + 0x1b8) = 0;
    *(undefined8 * )(param_1 + 0x1c0) = 0;
    *(undefined8 * )(param_1 + 0x1c8) = 0;
    *(undefined8 * )(param_1 + 0x1d0) = 0;
    *(undefined8 * )(param_1 + 0x1d8) = 0;
    *(undefined8 * )(param_1 + 0x1e0) = 0;
    *(undefined8 * )(param_1 + 0x1e8) = 0;
    *(undefined8 * )(param_1 + 0x1f0) = 0;
    *(undefined8 * )(param_1 + 0x1f8) = 0;
    *(undefined8 * )(param_1 + 0x200) = 0;
    *(undefined8 * )(param_1 + 0x208) = 0;
    *(undefined8 * )(param_1 + 0x210) = 0;
    *(undefined8 * )(param_1 + 0x218) = 0;
    *(undefined8 * )(param_1 + 0x220) = 0;
    *(undefined8 * )(param_1 + 0x228) = 0;
    *(undefined8 * )(param_1 + 0x230) = 0;
    *(undefined8 * )(param_1 + 0x238) = 0;
    *(undefined8 * )(param_1 + 0x240) = 0;
    *(undefined8 * )(param_1 + 0x248) = 0;
    *(undefined8 * )(param_1 + 0x250) = 0;
    *(undefined8 * )(param_1 + 600) = 0;
    *(undefined8 * )(param_1 + 0x260) = 0;
    *(undefined8 * )(param_1 + 0x268) = 0;
    *(undefined8 * )(param_1 + 0x270) = 0;
    *(undefined8 * )(param_1 + 0x278) = 0;
    *(undefined8 * )(param_1 + 0x280) = 0;
    *(undefined8 * )(param_1 + 0x288) = 0;
    *(undefined8 * )(param_1 + 0x290) = 0;
    *(undefined8 * )(param_1 + 0x298) = 0;
    *(undefined8 * )(param_1 + 0x2a0) = 0;
    *(undefined8 * )(param_1 + 0x2a8) = 0;
    *(undefined8 * )(param_1 + 0x2b0) = 0;
    *(undefined8 * )(param_1 + 0x2b8) = 0;
    *(undefined8 * )(param_1 + 0x2c0) = 0;
    *(undefined8 * )(param_1 + 0x2c8) = 0;
    *(undefined8 * )(param_1 + 0x2d0) = 0;
    *(undefined8 * )(param_1 + 0x2d8) = 0;
    *(undefined8 * )(param_1 + 0x2e0) = 0;
    *(undefined8 * )(param_1 + 0x2e8) = 0;
    *(undefined8 * )(param_1 + 0x2f0) = 0;
    *(undefined8 * )(param_1 + 0x2f8) = 0;
    *(undefined8 * )(param_1 + 0x300) = 0;
    *(undefined8 * )(param_1 + 0x308) = 0;
    *(undefined8 * )(param_1 + 0x310) = 0;
    *(undefined8 * )(param_1 + 0x318) = 0;
    *(undefined8 * )(param_1 + 800) = 0;
    *(undefined8 * )(param_1 + 0x328) = 0;
    *(undefined8 * )(param_1 + 0x330) = 0;
    *(undefined8 * )(param_1 + 0x338) = 0;
    *(undefined8 * )(param_1 + 0x340) = 0;
    *(undefined8 * )(param_1 + 0x350) = 0;
    *(undefined8 * )(param_1 + 0x358) = 0;
    *(undefined8 * )(param_1 + 0x360) = 0;
    *(undefined8 * )(param_1 + 0x370) = 0;
    *(undefined8 * )(param_1 + 0x378) = 0;
    *(undefined8 * )(param_1 + 0x380) = 0;
    *(undefined8 * )(param_1 + 0x490) = 0;
    *(undefined8 * )(param_1 + 0x498) = 0;
    *(undefined8 * )(param_1 + 0x4a0) = 0;
    *(undefined8 * )(param_1 + 0x4a8) = 0;
    *(undefined8 * )(param_1 + 0x510) = 0;
    *(undefined8 * )(param_1 + 0x518) = 0;
    *(undefined8 * )(param_1 + 0x520) = 0;
    *(undefined8 * )(param_1 + 0x528) = 0;
    *(undefined8 * )(param_1 + 0x530) = 0;
    *(undefined8 * )(param_1 + 0x538) = 0;
    *(undefined8 * )(param_1 + 0x540) = 0;
    *(undefined8 * )(param_1 + 0x548) = 0;
    *(undefined8 * )(param_1 + 0x550) = 0;
    *(undefined8 * )(param_1 + 0x558) = 0;
    *(undefined8 * )(param_1 + 0x560) = 0;
    *(undefined8 * )(param_1 + 0x568) = 0;
    *(undefined8 * )(param_1 + 0x570) = 0;
    *(undefined8 * )(param_1 + 0x578) = 0;
    *(undefined8 * )(param_1 + 0x588) = 0;
    *(undefined8 * )(param_1 + 0x590) = 0;
    *(undefined8 * )(param_1 + 0x598) = 0;
    *(undefined8 * )(param_1 + 0x5a0) = 0;
    *(undefined8 * )(param_1 + 0x5a8) = 0;
    *(undefined8 * )(param_1 + 0x5b0) = 0;
    *(undefined8 * )(param_1 + 0x5c0) = 0;
    *(undefined8 * )(param_1 + 0x5c8) = 0;
    *(undefined8 * )(param_1 + 0x5d0) = 0;
    return param_1;
}


void FUN_1402eaa90(longlong param_1) {
    undefined8 *puVar1;
    int iVar2;
    int iVar3;
    undefined8 *puVar4;

    FUN_14018b900(*(undefined8 * )(param_1 + 0x5c8), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x5d0), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x5b0), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x5a0), 0);
    FUN_1402ed7d0(param_1 + 0x588);
    FUN_1402ed7d0(param_1 + 0x570);
    FUN_1402ed750(param_1 + 0x560);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x558), 0);
    if (*(longlong * )(param_1 + 0x548) != 0) {
        FUN_1402ee100();
    }
    FUN_14018b900(*(undefined8 * )(param_1 + 0x538), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x528), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x518), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x4a8), 0);
    if (*(longlong * )(param_1 + 0x498) != 0) {
        FUN_1402ee080();
    }
    FUN_14018b900(*(undefined8 * )(param_1 + 0x378), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x380), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x358), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x360), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x340), 0);
    FUN_1402ed600(param_1 + 0x328);
    FUN_1402ed580(param_1 + 0x318);
    if (*(longlong * )(param_1 + 0x310) != 0) {
        FUN_1402edfe0();
    }
    if (*(longlong * )(param_1 + 0x300) != 0) {
        FUN_1402edf20();
    }
    FUN_14018b900(*(undefined8 * )(param_1 + 0x2f0), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x2e0), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x2d0), 0);
    if (*(longlong * )(param_1 + 0x2c0) != 0) {
        FUN_1402ede60();
    }
    FUN_1402ed500(param_1 + 0x2a8);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x298), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x2a0), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x288), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x278), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x268), 0);
    if (*(longlong * )(param_1 + 600) != 0) {
        FUN_1402edda0();
    }
    FUN_14018b900(*(undefined8 * )(param_1 + 0x248), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x238), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x228), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x218), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x208), 0);
    if (*(longlong * )(param_1 + 0x1f8) != 0) {
        FUN_1402edd10();
    }
    FUN_1402ed360(param_1 + 0x1e0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x1d8), 0);
    FUN_1402ed2e0(param_1 + 0x1c0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x1b8), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x1a8), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x198), 0);
    if (*(longlong * )(param_1 + 0x188) != 0) {
        FUN_1402edcb0();
    }
    FUN_1402eade0(param_1 + 0x100);
    if (*(longlong * )(param_1 + 0xf8) != 0) {
        FUN_1402edc50();
    }
    iVar3 = 3;
    puVar4 = (undefined8 * )(param_1 + 0x100);
    iVar2 = 3;
    do {
        puVar1 = puVar4 + -4;
        puVar4 = puVar4 + -3;
        FUN_14018b900(*puVar1, 0);
        FUN_14018b900(*puVar4);
        iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    FUN_1402ed000(param_1 + 0x80);
    puVar4 = (undefined8 * )(param_1 + 0x90);
    do {
        puVar1 = puVar4 + -4;
        puVar4 = puVar4 + -3;
        FUN_14018b900(*puVar1, 0);
        FUN_14018b900(*puVar4);
        iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    if (*(longlong * )(param_1 + 0x18) != 0) {
        FUN_1402edbf0();
    }
    return;
}


void FUN_1402eade0(longlong param_1) {
    FUN_14018b900(*(undefined8 * )(param_1 + 0x68), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x70), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x50), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x58), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x38), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x40), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x20), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x28), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 8), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x10), 0);
    return;
}


void FUN_1402eae60(longlong param_1) {
    undefined8 *puVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    FUN_1401981b0(param_1 + 0x60);
    lVar4 = *(longlong * )(param_1 + 0x918);
    while (lVar4 != 0) {
        FUN_1402eceb0(param_1);
        lVar4 = *(longlong * )(param_1 + 0x918);
    }
    lVar4 = *(longlong * )(*(longlong * )(param_1 + 0x8f8) + 0x10);
    if (lVar4 != *(longlong * )(param_1 + 0x8f8)) {
        do {
            puVar1 = *(undefined8 * *)(lVar4 + 0x28);
            if (puVar1 != (undefined8 *) 0x0) {
                *puVar1 = &PTR_FUN_140b63918;
                FUN_14018b900(puVar1[5], 0);
                FUN_14018b900(puVar1[6]);
                lVar3 = puVar1[1];
                if (lVar3 != 0) {
                    (**(code * *)(*(longlong * )(lVar3 + -0x10) + 8))(lVar3 + -0x10);
                }
                FUN_14018b900(puVar1, 0);
            }
            lVar3 = *(longlong * )(lVar4 + 0x18);
            if (lVar3 == 0) {
                lVar3 = *(longlong * )(lVar4 + 8);
                if (lVar4 == *(longlong * )(lVar3 + 0x18)) {
                    do {
                        lVar4 = lVar3;
                        lVar3 = *(longlong * )(lVar4 + 8);
                    } while (lVar4 == *(longlong * )(lVar3 + 0x18));
                }
                if (*(longlong * )(lVar4 + 0x18) != lVar3) {
                    lVar4 = lVar3;
                }
            } else {
                for (lVar2 = *(longlong * )(lVar3 + 0x10); lVar4 = lVar3, lVar2 != 0;
                     lVar2 = *(longlong * )(lVar2 + 0x10)) {
                    lVar3 = lVar2;
                }
            }
        } while (lVar4 != *(longlong * )(param_1 + 0x8f8));
    }
    FUN_140008410(param_1 + 0x8f0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x8c8), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x8d8), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x8e0), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x8e8), 0);
    FUN_140008410(param_1 + 0x8f0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x8f8), 0);
    if (*(longlong * *)(param_1 + 0x8b8) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x8b8) + 8))();
    }
    if (*(longlong * *)(param_1 + 0x8b0) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x8b0) + 8))();
    }
    if (*(longlong * *)(param_1 + 0x8a8) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x8a8) + 8))();
    }
    if (*(longlong * *)(param_1 + 0x8a0) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x8a0) + 8))();
    }
    if (*(longlong * *)(param_1 + 0x898) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x898) + 8))();
    }
    if (*(longlong * *)(param_1 + 0x890) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x890) + 8))();
    }
    if (*(longlong * *)(param_1 + 0x888) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x888) + 8))();
    }
    if (*(longlong * *)(param_1 + 0x880) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x880) + 8))();
    }
    if (*(longlong * *)(param_1 + 0x878) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x878) + 8))();
    }
    if (*(longlong * *)(param_1 + 0x870) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x870) + 8))();
    }
    if (*(longlong * *)(param_1 + 0x868) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x868) + 8))();
    }
    if (*(longlong * *)(param_1 + 0x860) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x860) + 8))();
    }
    if (*(longlong * *)(param_1 + 0x858) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x858) + 8))();
    }
    if (*(longlong * *)(param_1 + 0x850) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x850) + 8))();
    }
    if (*(longlong * *)(param_1 + 0x848) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x848) + 8))();
    }
    if (*(longlong * *)(param_1 + 0x840) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x840) + 8))();
    }
    if (*(longlong * *)(param_1 + 0x838) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x838) + 8))();
    }
    if (*(longlong * *)(param_1 + 0x830) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x830) + 8))();
    }
    if (*(longlong * *)(param_1 + 0x828) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x828) + 8))();
    }
    if (*(longlong * *)(param_1 + 0x820) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x820) + 8))();
    }
    if (*(longlong * *)(param_1 + 0x818) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x818) + 8))();
    }
    if (*(longlong * *)(param_1 + 0x810) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x810) + 8))();
    }
    if (*(longlong * *)(param_1 + 0x808) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x808) + 8))();
    }
    if (*(longlong * *)(param_1 + 0x800) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x800) + 8))();
    }
    if (*(longlong * *)(param_1 + 0x7f8) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x7f8) + 8))();
    }
    FUN_1402eaa90(param_1 + 0x70);
    FUN_1401981b0(param_1 + 0x60);
    if (*(longlong * )(param_1 + 0x60) != 0) {
        FUN_1401a4a00(param_1 + 0x60);
    }
    FUN_140019490(param_1 + 0x38);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x48), 0);
    *(undefined8 * )(param_1 + 0x48) = 0;
    if (*(longlong * )(param_1 + 0x30) != 0) {
        FUN_1401a4a00();
    }
    if (*(longlong * )(param_1 + 0x28) != 0) {
        FUN_1401a4a00(param_1 + 0x28);
    }
    if (*(longlong * )(param_1 + 0x20) == 0) {
        return;
    }
    // WARNING: Could not recover jumptable at 0x0001402eb205. Too many branches
    // WARNING: Treating indirect jump as call
    CloseHandle(*(HANDLE * )(param_1 + 0x20));
    return;
}


undefined8 *FUN_1402eb220(undefined8 *param_1) {
    longlong lVar1;

    *param_1 = &PTR_FUN_140b63918;
    FUN_14018b900(param_1[5], 0);
    FUN_14018b900(param_1[6], 0);
    lVar1 = param_1[1];
    if (lVar1 != 0) {
        (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    FUN_14018b900(param_1, 0);
    return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402eb270(undefined4 *param_1) {
    undefined4 *puVar1;
    ushort uVar2;
    undefined2 *puVar3;
    undefined auVar4[16];
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    int iVar8;
    uint uVar9;
    uint uVar10;
    undefined8 uVar11;
    longlong lVar12;
    int *piVar13;
    int *piVar14;
    undefined *puVar15;
    undefined4 *puVar16;
    undefined4 *puVar17;
    undefined *puVar18;
    uint uVar19;
    uint uVar20;
    undefined *puVar21;
    int *piVar22;
    ulonglong uVar23;
    undefined2 *puVar24;
    int iVar25;
    ulonglong uVar26;
    short sVar27;
    ulonglong uVar28;
    undefined local_88[16];
    undefined local_78[8];
    undefined *local_70;
    ulonglong local_68;
    undefined4 local_58[2];
    undefined4 *local_50;
    code *local_48;
    undefined8 local_40;

    uVar23 = 0;
    *param_1 = 0;
    uVar11 = (**(code * *)(*DAT_140c65670 + 0x90))
            (DAT_140c65670, L"Shaders\\ModelVS.sho", param_1 + 0x1fe);
    if ((((((((-1 < (int) uVar11) &&
              (uVar11 = (**(code * *)(*DAT_140c65670 + 0x98))
                      (DAT_140c65670, L"Shaders\\ModelPS.sho", param_1 + 0x200),
                      -1 < (int) uVar11)) &&
             (uVar11 = (**(code * *)(*DAT_140c65670 + 0x90))
                     (DAT_140c65670, L"Shaders\\M3CloudVS.sho", param_1 + 0x202),
                     -1 < (int) uVar11)) &&
            ((uVar11 = (**(code * *)(*DAT_140c65670 + 0x98))
                    (DAT_140c65670, L"Shaders\\M3CloudPS.sho", param_1 + 0x204),
                    -1 < (int) uVar11 &&
                    (uVar11 = (**(code * *)(*DAT_140c65670 + 0x90))
                            (DAT_140c65670, L"Shaders\\SimpleVS.sho", param_1 + 0x206),
                            -1 < (int) uVar11)))) &&
           (uVar11 = (**(code * *)(*DAT_140c65670 + 0x98))
                   (DAT_140c65670, L"Shaders\\SimplePS.sho", param_1 + 0x208),
                   -1 < (int) uVar11)) &&
          (((uVar11 = (**(code * *)(*DAT_140c65670 + 0x98))
                  (DAT_140c65670, L"shaders\\ParticlePS.sho", param_1 + 0x20c),
                  -1 < (int) uVar11 &&
                  (uVar11 = (**(code * *)(*DAT_140c65670 + 0x90))
                          (DAT_140c65670, L"Shaders\\ParticleGPUVS.sho", param_1 + 0x20a),
                          -1 < (int) uVar11)) &&
            ((uVar11 = (**(code * *)(*DAT_140c65670 + 0x90))
                    (DAT_140c65670, L"shaders\\RibbonVS.sho", param_1 + 0x20e),
                    -1 < (int) uVar11 &&
                    (((uVar11 = (**(code * *)(*DAT_140c65670 + 0x98))
                            (DAT_140c65670, L"shaders\\RibbonPS.sho", param_1 + 0x210),
                            -1 < (int) uVar11 &&
                            (uVar11 = (**(code * *)(*DAT_140c65670 + 0x58))
                                    (DAT_140c65670, 2, 2, 0, 0, 1, 0, 0x15, 0, param_1 + 0x212), -1 < (int) uVar11)
                      ) && (uVar11 = (**(code * *)(*DAT_140c65670 + 0x58))
                            (DAT_140c65670, 1, 1, 0, 0, 1, 0, 0x15, 0, param_1 + 0x214),
                            -1 < (int) uVar11)))))))) &&
         ((uVar11 = (**(code * *)(*DAT_140c65670 + 0x58))
                 (DAT_140c65670, 1, 1, 0, 0, 1, 0, 0x15, 0, param_1 + 0x216), -1 < (int) uVar11 &&
                                                                              (uVar11 = (**(code * *)(
                                                                                      *DAT_140c65670 + 0x58))
                                                                                      (DAT_140c65670, 1, 1, 0, 0, 1, 0,
                                                                                       0x15, 0, param_1 + 0x218), -1 <
                                                                                                                  (int) uVar11))))
        && ((uVar11 = (**(code * *)(*DAT_140c65670 + 0x58))
            (DAT_140c65670, 1, 1, 0, 0, 1, 0, 0x15, 0, param_1 + 0x21a), -1 < (int) uVar11 &&
                                                                         (((uVar11 = (**(code * *)(
                                                                                 *DAT_140c65670 + 0x58))
                                                                                 (DAT_140c65670, 1, 1, 0, 0, 1, 0, 0x15,
                                                                                  0, param_1 + 0x21c), -1 < (int) uVar11
                                                                                                       && (uVar11 = (**(
                                                                                 code * *)(*DAT_140c65670 + 0x58))
                                                                                 (DAT_140c65670, 1, 1, 0, 0, 1, 0, 0x15,
                                                                                  0, param_1 + 0x21e),
                                                                                 -1 < (int) uVar11)) &&
                                                                           ((uVar11 = (**(code * *)(
                                                                                   *DAT_140c65670 + 0x58))
                                                                                   (DAT_140c65670, 1, 1, 0, 0, 1, 0,
                                                                                    0x15, 0, param_1 + 0x220),
                                                                                   -1 < (int) uVar11
                                                                                   && (((uVar11 = (**(code * *)(
                                                                                           *DAT_140c65670 + 0x58))
                                                                                           (DAT_140c65670, 1, 1, 0, 0,
                                                                                            1, 0, 0x15, 0,
                                                                                            param_1 + 0x222),
                                                                                           -1 < (int) uVar11 &&
                                                                                           (uVar11 = (**(code * *)(
                                                                                                   *DAT_140c65670 +
                                                                                                   0x58))
                                                                                                   (DAT_140c65670, 1, 1,
                                                                                                    0, 0x11, 1, 0, 0x15,
                                                                                                    0, param_1 + 0x224),
                                                                                                   -1 <
                                                                                                   (int) uVar11)) &&
                                                                                        (uVar11 = (**(code * *)(
                                                                                                *DAT_140c65670 + 0x58))
                                                                                                (DAT_140c65670, 0x100,
                                                                                                 0x100, 1, 0x13, 1, 0,
                                                                                                 0, 0, param_1 + 0x226),
                                                                                                -1 <
                                                                                                (int) uVar11)))))))))) {
        lVar12 = (**(code * *)(*DAT_140c65670 + 0x2c8))();
        uVar11 = (**(code * *)(*DAT_140c65670 + 0x38))
                (DAT_140c65670, *(int *) (lVar12 + 0x30) << 2, 1, param_1 + 0x22a);
        if ((-1 < (int) uVar11) &&
            (uVar11 = (**(code * *)(*DAT_140c65670 + 0x38))(DAT_140c65670, 0x10, 1, param_1 + 0x22e),
                    -1 < (int) uVar11)) {
            FUN_1402ebf40(param_1);
            uVar11 = (**(code * *)(*DAT_140c65670 + 0xc0))(DAT_140c65670, param_1 + 0x22c);
            if (-1 < (int) uVar11) {
                local_48 = FUN_1402ebf40;
                local_58[0] = 0;
                local_40 = 0;
                local_50 = param_1;
                (**(code * *)(**(longlong * *)(param_1 + 0x22c) + 0x18))
                        (*(longlong * *)(param_1 + 0x22c), 0, local_58);
                FUN_1407e4830(param_1 + 0x1c, 0, 0x630);
                param_1[0x1c] = 0x4d4f444c;
                param_1[0x1d] = 100;
                FUN_1402ecf40(param_1 + 0x20);
                **(undefined2 * *)(param_1 + 0x22) = 0x96;
                FUN_1402ed080(param_1 + 0x58);
                *(undefined2 * )(*(longlong * )(param_1 + 0x5a) + 2) = 0xffff;
                FUN_1402ed1a0(param_1 + 0x7c);
                puVar3 = *(undefined2 * *)(param_1 + 0x7e);
                *puVar3 = 0xffff;
                puVar3[2] = 0xffff;
                uVar7 = uRam0000000140c7839c;
                uVar6 = uRam0000000140c78398;
                uVar5 = uRam0000000140c78394;
                *(undefined4 * )(puVar3 + 0x68) = _DAT_140c78390;
                *(undefined4 * )(puVar3 + 0x6a) = uVar5;
                *(undefined4 * )(puVar3 + 0x6c) = uVar6;
                *(undefined4 * )(puVar3 + 0x6e) = uVar7;
                uVar7 = uRam0000000140c783ac;
                uVar6 = uRam0000000140c783a8;
                uVar5 = uRam0000000140c783a4;
                *(undefined4 * )(puVar3 + 0x70) = _DAT_140c783a0;
                *(undefined4 * )(puVar3 + 0x72) = uVar5;
                *(undefined4 * )(puVar3 + 0x74) = uVar6;
                *(undefined4 * )(puVar3 + 0x76) = uVar7;
                uVar7 = uRam0000000140c783bc;
                uVar6 = uRam0000000140c783b8;
                uVar5 = uRam0000000140c783b4;
                *(undefined4 * )(puVar3 + 0x78) = _DAT_140c783b0;
                *(undefined4 * )(puVar3 + 0x7a) = uVar5;
                *(undefined4 * )(puVar3 + 0x7c) = uVar6;
                *(undefined4 * )(puVar3 + 0x7e) = uVar7;
                uVar7 = uRam0000000140c783cc;
                uVar6 = uRam0000000140c783c8;
                uVar5 = uRam0000000140c783c4;
                *(undefined4 * )(puVar3 + 0x80) = _DAT_140c783c0;
                *(undefined4 * )(puVar3 + 0x82) = uVar5;
                *(undefined4 * )(puVar3 + 0x84) = uVar6;
                *(undefined4 * )(puVar3 + 0x86) = uVar7;
                uVar7 = uRam0000000140c7839c;
                uVar6 = uRam0000000140c78398;
                uVar5 = uRam0000000140c78394;
                *(undefined4 * )(puVar3 + 0x88) = _DAT_140c78390;
                *(undefined4 * )(puVar3 + 0x8a) = uVar5;
                *(undefined4 * )(puVar3 + 0x8c) = uVar6;
                *(undefined4 * )(puVar3 + 0x8e) = uVar7;
                uVar7 = uRam0000000140c783ac;
                uVar6 = uRam0000000140c783a8;
                uVar5 = uRam0000000140c783a4;
                *(undefined4 * )(puVar3 + 0x90) = _DAT_140c783a0;
                *(undefined4 * )(puVar3 + 0x92) = uVar5;
                *(undefined4 * )(puVar3 + 0x94) = uVar6;
                *(undefined4 * )(puVar3 + 0x96) = uVar7;
                uVar7 = uRam0000000140c783bc;
                uVar6 = uRam0000000140c783b8;
                uVar5 = uRam0000000140c783b4;
                *(undefined4 * )(puVar3 + 0x98) = _DAT_140c783b0;
                *(undefined4 * )(puVar3 + 0x9a) = uVar5;
                *(undefined4 * )(puVar3 + 0x9c) = uVar6;
                *(undefined4 * )(puVar3 + 0x9e) = uVar7;
                uVar7 = uRam0000000140c783cc;
                uVar6 = uRam0000000140c783c8;
                uVar5 = uRam0000000140c783c4;
                *(undefined4 * )(puVar3 + 0xa0) = _DAT_140c783c0;
                *(undefined4 * )(puVar3 + 0xa2) = uVar5;
                *(undefined4 * )(puVar3 + 0xa4) = uVar6;
                *(undefined4 * )(puVar3 + 0xa6) = uVar7;
                FUN_1402ed680(param_1 + 0x140);
                if (param_1[0x144] != 0) {
                    FUN_14018b900(*(undefined8 * )(param_1 + 0x146), 0);
                    param_1[0x144] = 0;
                    *(undefined8 * )(param_1 + 0x146) = 0;
                }
                FUN_1402ed3e0();
                param_1[0x1aa] = 0;
                param_1[0x1ab] = 0x3f800000;
                *(undefined8 * )(param_1 + 0x1ac) = 0x3f800000;
                *(undefined8 * )(param_1 + 0x1ae) = 0;
                *(undefined8 * )(param_1 + 0x1c2) = 1;
                param_1[0x1c4] = 0;
                iVar8 = FUN_14021a6f0();
                if (iVar8 == 0) {
                    param_1[0x230] = 0;
                } else {
                    FUN_14021a6f0();
                    piVar13 = (int *) FUN_14021a7a0();
                    param_1[0x230] = *piVar13 + 1;
                }
                uVar9 = FUN_1402184f0();
                uVar28 = (ulonglong) uVar9;
                auVar4 = ZEXT816(4) * ZEXT816((ulonglong) uVar9);
                uVar11 = SUB168(auVar4, 0);
                if (SUB168(auVar4 >> 0x40, 0) != 0) {
                    uVar11 = 0xffffffffffffffff;
                }
                piVar14 = (int *) FUN_14018b280(uVar11, 8);
                uVar26 = uVar23;
                piVar13 = piVar14;
                if (uVar9 != 0) {
                    do {
                        *piVar13 = (int) uVar26;
                        uVar19 = (int) uVar26 + 1;
                        uVar26 = (ulonglong) uVar19;
                        piVar13 = piVar13 + 1;
                    } while (uVar19 < uVar9);
                }
                FUN_1401c3280(FUN_1402ec9d0, piVar14, (ulonglong) uVar9, 0);
                iVar25 = -1;
                iVar8 = -1;
                uVar26 = uVar28;
                if (uVar9 != 0) {
                    do {
                        lVar12 = FUN_1402185a0();
                        if (iVar8 != *(int *) (lVar12 + 4)) {
                            uVar23 = (ulonglong)((int) uVar23 + 1);
                            iVar8 = *(int *) (lVar12 + 4);
                        }
                        uVar26 = uVar26 - 1;
                    } while (uVar26 != 0);
                }
                param_1[0x231] = (int) uVar23;
                uVar11 = SUB168(ZEXT816(0xc4) * ZEXT816(uVar23), 0);
                if (SUB168(ZEXT816(0xc4) * ZEXT816(uVar23) >> 0x40, 0) != 0) {
                    uVar11 = 0xffffffffffffffff;
                }
                uVar11 = FUN_14018b280(uVar11, 0);
                *(undefined8 * )(param_1 + 0x232) = uVar11;
                FUN_1407e4830(uVar11);
                uVar19 = 0;
                puVar17 = (undefined4 *) 0x0;
                puVar16 = puVar17;
                piVar13 = piVar14;
                if (uVar9 != 0) {
                    do {
                        lVar12 = FUN_1402185a0(*piVar13);
                        iVar8 = *(int *) (lVar12 + 4);
                        if (iVar25 != iVar8) {
                            puVar16 = (undefined4 * )(ulonglong)((int) puVar16 + 1);
                            iVar25 = iVar8;
                        }
                        piVar22 = (int *) ((ulonglong)((int) puVar16 - 1) * 0xc4 + *(longlong * )(param_1 + 0x232));
                        *piVar22 = iVar8;
                        *(undefined8 * )(piVar22 + 1) = 0;
                        piVar22[(longlong) * (int *) (lVar12 + 8) + 2] = *(int *) (lVar12 + 0xc);
                        uVar28 = uVar28 - 1;
                        piVar13 = piVar13 + 1;
                    } while (uVar28 != 0);
                }
                FUN_14018b900(piVar14, 0);
                *(undefined8 * )(param_1 + 0x234) = 0;
                uVar10 = FUN_140216730();
                uVar9 = uVar19;
                if (uVar10 != 0) {
                    do {
                        lVar12 = FUN_1402167e0();
                        uVar20 = *(uint * )(lVar12 + 4);
                        if ((uint) param_1[0x234] < uVar20 || param_1[0x234] == uVar20) {
                            param_1[0x234] = uVar20 + 1;
                        }
                        uVar20 = *(uint * )(lVar12 + 8);
                        if ((uint) param_1[0x235] < uVar20 || param_1[0x235] == uVar20) {
                            param_1[0x235] = uVar20 + 1;
                        }
                        uVar9 = uVar9 + 1;
                    } while (uVar9 < uVar10);
                }
                uVar11 = FUN_14018b280();
                *(undefined8 * )(param_1 + 0x236) = uVar11;
                puVar16 = puVar17;
                if (param_1[0x234] != 0) {
                    do {
                        uVar9 = 0;
                        iVar8 = (int) puVar16;
                        if (param_1[0x235] != 0) {
                            do {
                                uVar20 = param_1[0x235] * iVar8 + uVar9;
                                uVar9 = uVar9 + 1;
                                *(int *) (*(longlong * )(param_1 + 0x236) + (ulonglong) uVar20 * 4) = iVar8;
                            } while (uVar9 < (uint) param_1[0x235]);
                        }
                        puVar16 = (undefined4 * )(ulonglong)(iVar8 + 1U);
                    } while (iVar8 + 1U < (uint) param_1[0x234]);
                }
                puVar16 = puVar17;
                if (uVar10 != 0) {
                    do {
                        lVar12 = FUN_1402167e0(puVar16);
                        uVar9 = (int) puVar16 + 1;
                        puVar16 = (undefined4 * )(ulonglong)
                        uVar9;
                        *(undefined4 * )
                                (*(longlong * )(param_1 + 0x236) +
                                 (ulonglong)(uint)(*(int *) (lVar12 + 4) * param_1[0x235] + *(int *) (lVar12 + 8)) *
                                 4) =
                                *(undefined4 * )(lVar12 + 0xc);
                    } while (uVar9 < uVar10);
                }
                local_70 = (undefined *) FUN_14018b280();
                local_68 = 0;
                *local_70 = 0;
                *(undefined8 * )(local_70 + 8) = 0;
                *(undefined * *)(local_70 + 0x10) = local_70;
                *(undefined * *)(local_70 + 0x18) = local_70;
                local_50 = (undefined4 *) FUN_14018b280();
                local_48 = (code *) 0x0;
                *(undefined *) local_50 = 0;
                *(undefined8 * )((longlong) local_50 + 8) = 0;
                *(undefined4 * *)((longlong) local_50 + 0x10) = local_50;
                *(undefined4 * *)((longlong) local_50 + 0x18) = local_50;
                if (param_1[0x230] != 0) {
                    do {
                        lVar12 = FUN_14021a740();
                        sVar27 = 1;
                        while (lVar12 != 0) {
                            uVar2 = *(ushort * )(lVar12 + 0x10);
                            uVar9 = (uint) uVar2;
                            uVar10 = uVar9 << 0x10 | uVar19;
                            if ((uVar2 == 0) || (uVar2 == 0x96)) break;
                            puVar18 = *(undefined * *)((longlong) local_50 + 8);
                            puVar21 = (undefined *) local_50;
                            if (*(undefined * *)((longlong) local_50 + 8) != (undefined *) 0x0) {
                                do {
                                    if (*(uint * )(puVar18 + 0x20) < uVar10) {
                                        puVar15 = *(undefined * *)(puVar18 + 0x18);
                                    } else {
                                        puVar15 = *(undefined * *)(puVar18 + 0x10);
                                        puVar21 = puVar18;
                                    }
                                    puVar18 = puVar15;
                                } while (puVar15 != (undefined *) 0x0);
                                if (((undefined4 *) puVar21 != local_50) && (*(uint * )(puVar21 + 0x20) <= uVar10))
                                    break;
                            }
                            FUN_1400293c0(local_58, local_88);
                            puVar18 = *(undefined * *)(local_70 + 8);
                            puVar21 = local_70;
                            if (*(undefined * *)(local_70 + 8) == (undefined *) 0x0) {
                                LAB_1402ebd04:
                                lVar12 = FUN_14018b280(0x28);
                                if ((uint * )(lVar12 + 0x20) != (uint *) 0x0) {
                                    *(uint * )(lVar12 + 0x20) = uVar9;
                                    *(short *) (lVar12 + 0x24) = (short) uVar19;
                                    *(short *) (lVar12 + 0x26) = sVar27;
                                }
                                *(longlong * )(puVar21 + 0x10) = lVar12;
                                if (puVar21 == local_70) {
                                    *(longlong * )(local_70 + 8) = lVar12;
                                    *(longlong * )(local_70 + 0x18) = lVar12;
                                } else if (puVar21 == *(undefined * *)(local_70 + 0x10)) {
                                    *(longlong * )(local_70 + 0x10) = lVar12;
                                }
                            } else {
                                do {
                                    puVar21 = puVar18;
                                    if (uVar9 < *(uint * )(puVar21 + 0x20)) {
                                        puVar18 = *(undefined * *)(puVar21 + 0x10);
                                    } else {
                                        puVar18 = *(undefined * *)(puVar21 + 0x18);
                                    }
                                } while (puVar18 != (undefined *) 0x0);
                                if ((puVar21 == local_70) || (uVar9 < *(uint * )(puVar21 + 0x20)))
                                    goto LAB_1402ebd04;
                                lVar12 = FUN_14018b280(0x28, 0);
                                if ((uint * )(lVar12 + 0x20) != (uint *) 0x0) {
                                    *(uint * )(lVar12 + 0x20) = uVar9;
                                    *(short *) (lVar12 + 0x24) = (short) uVar19;
                                    *(short *) (lVar12 + 0x26) = sVar27;
                                }
                                *(longlong * )(puVar21 + 0x18) = lVar12;
                                if (puVar21 == *(undefined * *)(local_70 + 0x18)) {
                                    *(longlong * )(local_70 + 0x18) = lVar12;
                                }
                            }
                            *(undefined * *)(lVar12 + 8) = puVar21;
                            *(undefined8 * )(lVar12 + 0x10) = 0;
                            *(undefined8 * )(lVar12 + 0x18) = 0;
                            FUN_1400081c0(lVar12, local_70 + 8);
                            local_68 = local_68 + 1;
                            lVar12 = FUN_14021a740();
                            sVar27 = sVar27 + 1;
                        }
                        uVar19 = uVar19 + 1;
                    } while (uVar19 < (uint) param_1[0x230]);
                }
                uVar23 = local_68;
                uVar11 = SUB168(ZEXT816(4) * ZEXT816(local_68), 0);
                if (SUB168(ZEXT816(4) * ZEXT816(local_68) >> 0x40, 0) != 0) {
                    uVar11 = 0xffffffffffffffff;
                }
                puVar16 = (undefined4 *) FUN_14018b280(uVar11);
                if (puVar16 != (undefined4 *) 0x0) {
                    iVar8 = (int) uVar23;
                    puVar1 = puVar16;
                    while (iVar8 = iVar8 + -1, puVar17 = puVar16, -1 < iVar8) {
                        *puVar1 = 0xff0000;
                        puVar1 = puVar1 + 1;
                    }
                }
                *(undefined4 * *)(param_1 + 0x238) = puVar17;
                auVar4 = ZEXT816(8) * ZEXT416(param_1[0x230] + 1);
                uVar11 = SUB168(auVar4, 0);
                if (SUB168(auVar4 >> 0x40, 0) != 0) {
                    uVar11 = 0xffffffffffffffff;
                }
                uVar11 = FUN_14018b280(uVar11);
                *(undefined8 * )(param_1 + 0x23a) = uVar11;
                uVar23 = 0;
                puVar3 = *(undefined2 * *)(param_1 + 0x238);
                puVar18 = *(undefined * *)(local_70 + 0x10);
                while (uVar9 = (uint) uVar23, puVar18 != local_70) {
                    uVar28 = uVar23;
                    if (uVar9 < *(uint * )(puVar18 + 0x20) || uVar9 == *(uint * )(puVar18 + 0x20)) {
                        do {
                            uVar9 = (int) uVar28 + 1;
                            uVar23 = (ulonglong) uVar9;
                            *(undefined2 * *)(*(longlong * )(param_1 + 0x23a) + uVar28 * 8) = puVar3;
                            uVar28 = uVar23;
                        } while (uVar9 < *(uint * )(puVar18 + 0x20) || uVar9 == *(uint * )(puVar18 + 0x20));
                    }
                    puVar24 = puVar3 + 2;
                    *puVar3 = *(undefined2 * )(puVar18 + 0x24);
                    puVar3[1] = *(undefined2 * )(puVar18 + 0x26);
                    puVar21 = *(undefined * *)(puVar18 + 0x18);
                    puVar3 = puVar24;
                    if (puVar21 == (undefined *) 0x0) {
                        puVar21 = *(undefined * *)(puVar18 + 8);
                        if (puVar18 == *(undefined * *)(puVar21 + 0x18)) {
                            do {
                                puVar18 = puVar21;
                                puVar21 = *(undefined * *)(puVar18 + 8);
                            } while (puVar18 == *(undefined * *)(puVar21 + 0x18));
                        }
                        if (*(undefined * *)(puVar18 + 0x18) != puVar21) {
                            puVar18 = puVar21;
                        }
                    } else {
                        for (puVar15 = *(undefined * *)(puVar21 + 0x10); puVar18 = puVar21,
                                puVar15 != (undefined *) 0x0; puVar15 = *(undefined * *)(puVar15 + 0x10)) {
                            puVar21 = puVar15;
                        }
                    }
                }
                if (uVar9 < (uint) param_1[0x230] || uVar9 == param_1[0x230]) {
                    do {
                        uVar9 = (int) uVar23 + 1;
                        *(undefined2 * *)(*(longlong * )(param_1 + 0x23a) + uVar23 * 8) = puVar3;
                        uVar23 = (ulonglong) uVar9;
                    } while (uVar9 < (uint) param_1[0x230] || uVar9 == param_1[0x230]);
                }
                FUN_140008410(local_58);
                FUN_14018b900(local_50, 0);
                FUN_140008410(local_78);
                FUN_14018b900(local_70, 0);
                param_1[1] = 0;
                uVar11 = 0;
            }
        }
    }
    return uVar11;
}



// WARNING: Removing unreachable block (ram,0x0001402ec224)
// WARNING: Removing unreachable block (ram,0x0001402ec22c)
// WARNING: Removing unreachable block (ram,0x0001402ec1f9)
// WARNING: Removing unreachable block (ram,0x0001402ec201)
// WARNING: Removing unreachable block (ram,0x0001402ec237)
// WARNING: Removing unreachable block (ram,0x0001402ec193)
// WARNING: Removing unreachable block (ram,0x0001402ec1c9)
// WARNING: Removing unreachable block (ram,0x0001402ec187)

void FUN_1402ebf40(longlong param_1) {
    longlong lVar1;
    uint uVar2;
    uint uVar3;
    int iVar4;
    undefined4 *puVar5;
    undefined2 *puVar6;
    longlong lVar7;
    float *pfVar8;
    uint *puVar9;
    ulonglong uVar10;
    undefined2 *puVar11;
    uint uVar12;
    uint uVar13;
    uint uVar14;
    undefined4 extraout_XMM0_Da;
    undefined4 extraout_XMM0_Da_00;
    undefined4 extraout_XMM0_Da_01;
    uint local_res8[4];
    undefined4 local_res18;

    puVar5 = (undefined4 * )
            (**(code * *)(**(longlong * *)(param_1 + 0x848) + 0x48))
            (*(longlong * *)(param_1 + 0x848), 0, local_res8, 2);
    if (puVar5 != (undefined4 *) 0x0) {
        *(undefined4 * )((ulonglong) local_res8[0] + 4 + (longlong) puVar5) = 0xffff00ff;
        *puVar5 = 0xffff00ff;
        *(undefined4 * )((ulonglong) local_res8[0] + (longlong) puVar5) = 0xff00ff00;
        puVar5[1] = 0xff00ff00;
        (**(code * *)(**(longlong * *)(param_1 + 0x848) + 0x50))();
    }
    puVar5 = (undefined4 * )
            (**(code * *)(**(longlong * *)(param_1 + 0x850) + 0x48))
            (*(longlong * *)(param_1 + 0x850), 0, local_res8, 2);
    if (puVar5 != (undefined4 *) 0x0) {
        *puVar5 = 0xff7f7fff;
        (**(code * *)(**(longlong * *)(param_1 + 0x850) + 0x50))();
    }
    puVar5 = (undefined4 * )
            (**(code * *)(**(longlong * *)(param_1 + 0x858) + 0x48))
            (*(longlong * *)(param_1 + 0x858), 0, local_res8, 2);
    if (puVar5 != (undefined4 *) 0x0) {
        *puVar5 = 0xffffffff;
        (**(code * *)(**(longlong * *)(param_1 + 0x858) + 0x50))();
    }
    puVar5 = (undefined4 * )
            (**(code * *)(**(longlong * *)(param_1 + 0x860) + 0x48))
            (*(longlong * *)(param_1 + 0x860), 0, local_res8, 2);
    if (puVar5 != (undefined4 *) 0x0) {
        *puVar5 = 0xffffffff;
        (**(code * *)(**(longlong * *)(param_1 + 0x860) + 0x50))();
    }
    puVar5 = (undefined4 * )
            (**(code * *)(**(longlong * *)(param_1 + 0x868) + 0x48))
            (*(longlong * *)(param_1 + 0x868), 0, local_res8, 2);
    if (puVar5 != (undefined4 *) 0x0) {
        *puVar5 = 0xff7f7fff;
        (**(code * *)(**(longlong * *)(param_1 + 0x868) + 0x50))();
    }
    puVar5 = (undefined4 * )
            (**(code * *)(**(longlong * *)(param_1 + 0x870) + 0x48))
            (*(longlong * *)(param_1 + 0x870), 0, local_res8, 2);
    if (puVar5 != (undefined4 *) 0x0) {
        *puVar5 = 0xffffffff;
        (**(code * *)(**(longlong * *)(param_1 + 0x870) + 0x50))();
    }
    puVar5 = (undefined4 * )
            (**(code * *)(**(longlong * *)(param_1 + 0x878) + 0x48))
            (*(longlong * *)(param_1 + 0x878), 0, local_res8, 2);
    if (puVar5 != (undefined4 *) 0x0) {
        *puVar5 = 0xff000000;
        (**(code * *)(**(longlong * *)(param_1 + 0x878) + 0x50))();
    }
    puVar5 = (undefined4 * )
            (**(code * *)(**(longlong * *)(param_1 + 0x880) + 0x48))
            (*(longlong * *)(param_1 + 0x880), 0, local_res8, 2);
    if (puVar5 != (undefined4 *) 0x0) {
        *puVar5 = 0xffffffff;
        (**(code * *)(**(longlong * *)(param_1 + 0x880) + 0x50))();
    }
    puVar5 = (undefined4 * )
            (**(code * *)(**(longlong * *)(param_1 + 0x888) + 0x48))
            (*(longlong * *)(param_1 + 0x888), 0, local_res8, 2);
    if (puVar5 != (undefined4 *) 0x0) {
        *puVar5 = 0xff7f7f7f;
        (**(code * *)(**(longlong * *)(param_1 + 0x888) + 0x50))();
    }
    puVar6 = (undefined2 * )(**(code * *)(**(longlong * *)(param_1 + 0x890) + 0x48))();
    uVar12 = 0;
    if (puVar6 != (undefined2 *) 0x0) {
        local_res8[0] = 0;
        *puVar6 = 0x7bff;
        puVar6[1] = 0;
        (**(code * *)(**(longlong * *)(param_1 + 0x890) + 0x50))();
    }
    lVar7 = (**(code * *)(**(longlong * *)(param_1 + 0x898) + 0x48))();
    if (lVar7 != 0) {
        uVar14 = 0;
        do {
            uVar13 = 0;
            puVar9 = (uint * )((ulonglong)(uVar14 * local_res8[0]) + lVar7);
            do {
                uVar2 = uVar13 & 0xffff | (uint)(ushort)((short) uVar14 << 8);
                uVar3 = uVar2 & 0xffff7fff;
                if ((uVar2 & 0x7c00) == 0) {
                    if ((uVar2 & 0x3ff) != 0) {
                        iVar4 = 0x71;
                        for (uVar3 = (uVar2 & 0x3ff) << 0xd; uVar3 < 0x800000; uVar3 = uVar3 * 2) {
                            iVar4 = iVar4 + -1;
                        }
                        uVar3 = iVar4 << 0x17 | uVar3 & 0x7fffff;
                    }
                } else {
                    uVar3 = (uVar3 + 0x1c000) * 0x2000;
                }
                uVar13 = uVar13 + 1;
                *puVar9 = (uVar2 & 0xffff8000) << 0x10 | uVar3;
                puVar9 = puVar9 + 1;
            } while (uVar13 < 0x100);
            uVar14 = uVar14 + 1;
        } while (uVar14 < 0x100);
        (**(code * *)(**(longlong * *)(param_1 + 0x898) + 0x50))(*(longlong * *)(param_1 + 0x898), 0);
    }
    pfVar8 = (float *) (**(code * *)(**(longlong * *)(param_1 + 0x8a8) + 0x38))
            (*(longlong * *)(param_1 + 0x8a8), 0, 0, 2);
    if (pfVar8 != (float *) 0x0) {
        puVar9 = (uint * )(**(code * *)(**(longlong * *)(param_1 + 0x8a8) + 0x18))();
        uVar14 = *puVar9;
        if (uVar14 >> 2 != 0) {
            do {
                uVar10 = (ulonglong) uVar12;
                uVar12 = uVar12 + 1;
                *pfVar8 = (float) uVar10;
                pfVar8 = pfVar8 + 1;
            } while (uVar12 < uVar14 >> 2);
        }
        (**(code * *)(**(longlong * *)(param_1 + 0x8a8) + 0x40))();
    }
    puVar5 = (undefined4 * )
            (**(code * *)(**(longlong * *)(param_1 + 0x8b8) + 0x38))
            (*(longlong * *)(param_1 + 0x8b8), 0, 0, 2);
    if (puVar5 != (undefined4 *) 0x0) {
        puVar6 = (undefined2 *) FUN_1401c96d0(extraout_XMM0_Da, 0, local_res8);
        puVar11 = (undefined2 *) FUN_1401c96d0();
        local_res18 = CONCAT22(*puVar6, *puVar11);
        *puVar5 = local_res18;
        puVar6 = (undefined2 *) FUN_1401c96d0(0x3f800000, 0x3f800000, local_res8);
        puVar11 = (undefined2 *) FUN_1401c96d0(extraout_XMM0_Da_00, 0);
        local_res18 = CONCAT22(*puVar6, *puVar11);
        puVar5[1] = local_res18;
        puVar6 = (undefined2 *) FUN_1401c96d0(local_res8);
        puVar11 = (undefined2 *) FUN_1401c96d0(extraout_XMM0_Da_01, extraout_XMM0_Da_01);
        local_res18 = CONCAT22(*puVar6, *puVar11);
        puVar5[2] = local_res18;
        puVar6 = (undefined2 *) FUN_1401c96d0(local_res8);
        puVar11 = (undefined2 *) FUN_1401c96d0();
        local_res18 = CONCAT22(*puVar6, *puVar11);
        puVar5[3] = local_res18;
        (**(code * *)(**(longlong * *)(param_1 + 0x8b8) + 0x40))();
    }
    for (lVar7 = *(longlong * )(param_1 + 0x30); lVar7 != 0; lVar7 = *(longlong * )(lVar7 + 0x88)) {
        if (*(longlong * )(lVar7 + 0xa0) != 0) {
            iVar4 = *(int *) (lVar7 + 0xa8);
            if (iVar4 == 7) {
                FUN_14030f870();
            } else if (iVar4 == 8) {
                FUN_14030fa00();
            } else if (iVar4 == 9) {
                FUN_14030fbf0();
            }
        }
        for (lVar1 = *(longlong * )(lVar7 + 0x1d8); lVar1 != 0; lVar1 = *(longlong * )(lVar1 + 0x68)) {
            FUN_140326380();
        }
    }
    return;
}


undefined8 FUN_1402ec500(longlong param_1, undefined8 param_2) {
    int iVar1;

    if (*(int *) (param_1 + 4) != 0) {
        return 1;
    }
    iVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x7f8) + 0x20))();
    if ((((iVar1 != 0) &&
          (iVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x800) + 0x20))
                  (*(longlong * *)(param_1 + 0x800), param_2), iVar1 != 0)) &&
         (iVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x808) + 0x20))
                 (*(longlong * *)(param_1 + 0x808), param_2), iVar1 != 0)) &&
        (iVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x810) + 0x20))
                (*(longlong * *)(param_1 + 0x810), param_2), iVar1 != 0)) {
        *(undefined4 * )(param_1 + 4) = 1;
        return 1;
    }
    return 0;
}


int FUN_1402ec590(undefined8 param_1, longlong *param_2) {
    undefined8 uVar1;
    int iVar2;
    longlong lVar3;

    uVar1 = DAT_140c65800;
    lVar3 = FUN_14018b280(0x650, 0);
    if (lVar3 == 0) {
        lVar3 = 0;
    } else {
        lVar3 = FUN_14030fe50(lVar3);
    }
    iVar2 = FUN_1403102b0(lVar3, uVar1);
    if (iVar2 < 0) {
        if (lVar3 != 0) {
            FUN_14030fff0(lVar3);
            FUN_14018b900(lVar3, 0);
        }
        return iVar2;
    }
    *param_2 = lVar3;
    return 0;
}


int FUN_1402ec620(longlong param_1, short *param_2, ulonglong *param_3) {
    ulonglong uVar1;
    ulonglong *puVar2;
    DWORD *pDVar3;
    DWORD DVar4;
    int iVar5;
    ulonglong uVar6;
    longlong lVar7;
    ulonglong uVar8;
    HANDLE hObject;
    ulonglong *puVar9;
    short *local_res10[2];
    DWORD *local_res20;

    if ((param_2 == (short *) 0x0) || (*param_2 == 0)) {
        return -0x7ff8ffa9;
    }
    local_res10[0] = param_2;
    local_res20 = (DWORD * )(param_1 + 8);
    DVar4 = GetCurrentThreadId();
    puVar9 = (ulonglong * )(local_res20 + 2);
    uVar8 = 0;
    uVar6 = uVar8;
    if (*(DWORD * )(param_1 + 8) == DVar4) {
        *puVar9 = *puVar9 + 1;
    } else {
        do {
            LOCK();
            uVar1 = *puVar9;
            *puVar9 = *puVar9 ^ (ulonglong)(uVar1 == 0) * (*puVar9 ^ 1);
            if (uVar1 == 0) {
                *local_res20 = DVar4;
                goto LAB_1402ec6be;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(local_res20);
    }
    LAB_1402ec6be:
    uVar6 = (**(code * *)(param_1 + 0x50))(local_res10);
    puVar2 = *(ulonglong * *)
            (*(longlong * )(param_1 + 0x48) + (uVar6 % *(ulonglong * )(param_1 + 0x40)) * 8);
    do {
        if (puVar2 == (ulonglong *) 0x0) {
            LAB_1402ec6fe:
            lVar7 = FUN_14018b280(0x208, 0);
            if (lVar7 != 0) {
                uVar8 = FUN_14030d310(lVar7);
            }
            iVar5 = FUN_14030d6a0(uVar8, param_1, local_res10[0]);
            if (iVar5 < 0) {
                if (uVar8 != 0) {
                    FUN_14030d400(uVar8);
                    FUN_14018b900(uVar8, 0);
                }
            } else {
                *param_3 = uVar8;
                LAB_1402ec76f:
                iVar5 = 0;
            }
            pDVar3 = local_res20;
            if (*puVar9 < 2) {
                *local_res20 = 0;
                *puVar9 = 0;
                if (*(longlong * )(local_res20 + 4) != 0) {
                    if (*(longlong * )(local_res20 + 6) == 0) {
                        hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                        LOCK();
                        puVar9 = (ulonglong * )(pDVar3 + 6);
                        uVar6 = *puVar9;
                        *puVar9 = *puVar9 ^ (ulonglong)(uVar6 == 0) * (*puVar9 ^ (ulonglong) hObject);
                        if (uVar6 != 0) {
                            CloseHandle(hObject);
                        }
                    }
                    SetEvent(*(HANDLE * )(pDVar3 + 6));
                }
            } else {
                *puVar9 = *puVar9 - 1;
            }
            return iVar5;
        }
        if ((uVar6 == *puVar2) &&
            (iVar5 = (**(code * *)(param_1 + 0x58))(local_res10, puVar2 + 2), iVar5 != 0)) {
            if (puVar2 + 3 != (ulonglong *) 0x0) {
                if (param_3 != (ulonglong *) 0x0) {
                    *param_3 = puVar2[3];
                }
                (***(code * **) * param_3)();
                goto LAB_1402ec76f;
            }
            goto LAB_1402ec6fe;
        }
        puVar2 = (ulonglong *) puVar2[1];
    } while (true);
}


undefined8 FUN_1402ec800(longlong param_1, longlong param_2, longlong *param_3) {
    longlong *plVar1;
    longlong *plVar2;
    longlong lVar3;

    if (param_2 == 0) {
        return 0x80070057;
    }
    lVar3 = FUN_14018b280(0x208, 0);
    if (lVar3 == 0) {
        lVar3 = 0;
    } else {
        lVar3 = FUN_14030d310(lVar3);
    }
    *(longlong * )(lVar3 + 0x10) = param_1;
    plVar1 = (longlong * )(param_1 + 0x30);
    if (*(longlong * )(lVar3 + 0x80) == 0) {
        *(longlong * *)(lVar3 + 0x80) = plVar1;
        plVar2 = (longlong * )(lVar3 + 0x88);
        *plVar2 = *plVar1;
        *plVar1 = lVar3;
        if (*plVar2 != 0) {
            *(longlong * *)(*plVar2 + 0x80) = plVar2;
        }
    }
    *(undefined8 * )(lVar3 + 0x30) = 0;
    *(longlong * )(lVar3 + 0x38) = param_2;
    FUN_14030dbb0(lVar3);
    *param_3 = lVar3;
    return 0;
}


ulonglong FUN_1402ec8c0(undefined8 param_1, short *param_2, int param_3, undefined8 param_4,
                        undefined4 param_5, longlong param_6) {
    longlong lVar1;
    uint uVar2;
    ulonglong uVar3;
    undefined8 uVar4;

    lVar1 = DAT_140c65800;
    if (param_6 == 0) {
        LAB_1402ec8eb:
        uVar3 = 0x80070057;
    } else {
        if ((param_2 == (short *) 0x0) || (*param_2 == 0)) {
            if (param_3 == 0) {
                uVar4 = *(undefined8 * )(DAT_140c65800 + 0x860);
            } else if (param_3 == 1) {
                uVar4 = *(undefined8 * )(DAT_140c65800 + 0x868);
            } else {
                if (param_3 != 2) goto LAB_1402ec8eb;
                uVar4 = *(undefined8 * )(DAT_140c65800 + 0x870);
            }
        } else {
            uVar2 = (**(code * *)(*DAT_140c65670 + 0x88))
                    (DAT_140c65670, param_2, 3, param_4, 0, param_5, param_6);
            uVar3 = (ulonglong) uVar2;
            if (-1 < (int) uVar2) {
                return 0;
            }
            FUN_1400035b0(0xe, 0, 0, param_2);
            if (param_3 == 0) {
                uVar4 = *(undefined8 * )(lVar1 + 0x848);
            } else if (param_3 == 1) {
                uVar4 = *(undefined8 * )(lVar1 + 0x850);
            } else {
                if (param_3 != 2) {
                    return uVar3 & 0xffffffff;
                }
                uVar4 = *(undefined8 * )(lVar1 + 0x858);
            }
        }
        uVar3 = (**(code * *)(*DAT_140c65670 + 0x80))(DAT_140c65670, uVar4, param_6);
    }
    return uVar3;
}


ulonglong FUN_1402ec9d0(uint param_1, uint param_2) {
    longlong lVar1;
    longlong lVar2;

    lVar1 = FUN_1402185a0();
    lVar2 = FUN_1402185a0();
    if (*(int *) (lVar2 + 4) <= *(int *) (lVar1 + 4)) {
        if (*(int *) (lVar2 + 4) < *(int *) (lVar1 + 4)) {
            return 1;
        }
        if (param_2 <= param_1) {
            return (ulonglong)(param_2 < param_1);
        }
    }
    return 0xffffffff;
}


undefined8 *FUN_1402eca50(longlong param_1, uint *param_2) {
    ushort uVar1;
    uint uVar2;
    longlong lVar3;
    char *pcVar4;
    longlong lVar5;
    char *pcVar6;
    char *pcVar7;
    undefined8 *puVar8;
    longlong lVar9;
    char *pcVar10;
    short *psVar11;
    uint uVar12;
    undefined8 *puVar13;
    ushort *puVar14;
    short *psVar15;
    ulonglong uVar16;
    bool bVar17;
    longlong local_res8;
    undefined local_res10[8];
    uint local_38;
    undefined4 uStack52;
    undefined8 *local_30;

    uVar2 = *param_2;
    puVar13 = (undefined8 *) 0x0;
    uVar12 = 0;
    if (uVar2 != 0) {
        puVar14 = *(ushort * *)(param_2 + 2);
        uVar16 = (ulonglong) uVar2;
        puVar8 = puVar13;
        do {
            uVar1 = *puVar14;
            puVar14 = puVar14 + 0x38;
            uVar12 = (int) puVar8 + (uint) uVar1;
            puVar8 = (undefined8 * )(ulonglong)
            uVar12;
            uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
    }
    local_38 = uVar12 * 0x2000 + uVar2;
    pcVar4 = *(char **) (param_1 + 0x8f8);
    pcVar7 = *(char **) (*(char **) (param_1 + 0x8f8) + 8);
    while (pcVar7 != (char *) 0x0) {
        if (*(uint * )(pcVar7 + 0x20) < local_38) {
            pcVar7 = *(char **) (pcVar7 + 0x18);
        } else {
            pcVar4 = pcVar7;
            pcVar7 = *(char **) (pcVar7 + 0x10);
        }
    }
    pcVar7 = pcVar4;
    do {
        if ((pcVar7 == *(char **) (param_1 + 0x8f8)) || (*(uint * )(pcVar7 + 0x20) != local_38)) {
            puVar8 = (undefined8 *) FUN_14018b280(0x58);
            if (puVar8 != (undefined8 *) 0x0) {
                *puVar8 = &PTR_FUN_140b63918;
                puVar8[2] = 0;
                puVar8[1] = 0;
                *(undefined4 * )(puVar8 + 3) = 0;
                *(undefined2 * )((longlong) puVar8 + 0x1c) = 0;
                *(undefined4 * )(puVar8 + 4) = 0;
                puVar8[5] = 0;
                puVar8[6] = 0;
                *(undefined4 * )(puVar8 + 8) = 0;
                puVar8[9] = 0;
                puVar8[10] = 0;
                puVar13 = puVar8;
            }
            FUN_1402ea0b0(puVar13, param_1, param_2, local_38);
            if ((pcVar4 == *(char **) (param_1 + 0x8f8)) ||
                (pcVar4 == *(char **) (*(char **) (param_1 + 0x8f8) + 0x10))) {
                lVar9 = *(longlong * )(param_1 + 0x8f8);
                lVar5 = lVar9;
                lVar3 = *(longlong * )(lVar9 + 8);
                while (lVar3 != 0) {
                    lVar5 = lVar3;
                    if (local_38 < *(uint * )(lVar3 + 0x20)) {
                        lVar3 = *(longlong * )(lVar3 + 0x10);
                    } else {
                        lVar3 = *(longlong * )(lVar3 + 0x18);
                    }
                }
                if ((lVar5 == lVar9) || (local_38 < *(uint * )(lVar5 + 0x20))) {
                    lVar9 = FUN_14018b280(0x30);
                    if ((undefined8 * )(lVar9 + 0x20) != (undefined8 *) 0x0) {
                        *(undefined8 * )(lVar9 + 0x20) = CONCAT44(uStack52, local_38);
                        *(undefined8 * *)(lVar9 + 0x28) = puVar13;
                    }
                    *(longlong * )(lVar5 + 0x10) = lVar9;
                    lVar3 = *(longlong * )(param_1 + 0x8f8);
                    if (lVar5 == lVar3) {
                        *(longlong * )(lVar3 + 8) = lVar9;
                        *(longlong * )(*(longlong * )(param_1 + 0x8f8) + 0x18) = lVar9;
                    } else if (lVar5 == *(longlong * )(lVar3 + 0x10)) {
                        *(longlong * )(lVar3 + 0x10) = lVar9;
                    }
                } else {
                    lVar9 = FUN_14018b280(0x30, 0);
                    if ((undefined8 * )(lVar9 + 0x20) != (undefined8 *) 0x0) {
                        *(undefined8 * )(lVar9 + 0x20) = CONCAT44(uStack52, local_38);
                        *(undefined8 * *)(lVar9 + 0x28) = puVar13;
                    }
                    *(longlong * )(lVar5 + 0x18) = lVar9;
                    if (lVar5 == *(longlong * )(*(longlong * )(param_1 + 0x8f8) + 0x18)) {
                        *(longlong * )(*(longlong * )(param_1 + 0x8f8) + 0x18) = lVar9;
                    }
                }
                *(longlong * )(lVar9 + 8) = lVar5;
                *(undefined8 * )(lVar9 + 0x10) = 0;
                *(undefined8 * )(lVar9 + 0x18) = 0;
                FUN_1400081c0(lVar9, *(longlong * )(param_1 + 0x8f8) + 8);
                *(longlong * )(param_1 + 0x900) = *(longlong * )(param_1 + 0x900) + 1;
            } else {
                if ((*pcVar4 == '\0') && (*(char **) (*(longlong * )(pcVar4 + 8) + 8) == pcVar4)) {
                    local_res8 = *(longlong * )(pcVar4 + 0x18);
                } else {
                    local_res8 = *(longlong * )(pcVar4 + 0x10);
                    if (local_res8 == 0) {
                        local_res8 = *(longlong * )(pcVar4 + 8);
                        lVar9 = local_res8;
                        if (pcVar4 == *(char **) (local_res8 + 0x10)) {
                            do {
                                local_res8 = *(longlong * )(lVar9 + 8);
                                bVar17 = lVar9 == *(longlong * )(local_res8 + 0x10);
                                lVar9 = local_res8;
                            } while (bVar17);
                        }
                    } else {
                        for (lVar9 = *(longlong * )(local_res8 + 0x18); lVar9 != 0;
                             lVar9 = *(longlong * )(lVar9 + 0x18)) {
                            local_res8 = lVar9;
                        }
                    }
                }
                local_30 = puVar13;
                FUN_1402ed850(param_1 + 0x8f0, local_res10, &local_res8, &local_38);
            }
            return puVar13;
        }
        if (*(ulonglong * )(*(longlong * )(pcVar7 + 0x28) + 0x10) == (ulonglong) uVar2) {
            if (uVar2 == 0) {
                LAB_1402ecb1c:
                return *(undefined8 * *)(pcVar7 + 0x28);
            }
            psVar11 = *(short **) (param_2 + 2);
            psVar15 = *(short **) (*(longlong * )(pcVar7 + 0x28) + 8);
            puVar8 = puVar13;
            while (*psVar11 == *psVar15) {
                uVar12 = (int) puVar8 + 1;
                puVar8 = (undefined8 * )(ulonglong)
                uVar12;
                psVar15 = psVar15 + 1;
                psVar11 = psVar11 + 0x38;
                if (uVar2 <= uVar12) goto LAB_1402ecb1c;
            }
        }
        pcVar10 = *(char **) (pcVar7 + 0x18);
        if (pcVar10 == (char *) 0x0) {
            pcVar10 = *(char **) (pcVar7 + 8);
            if (pcVar7 == *(char **) (pcVar10 + 0x18)) {
                do {
                    pcVar7 = pcVar10;
                    pcVar10 = *(char **) (pcVar7 + 8);
                } while (pcVar7 == *(char **) (pcVar10 + 0x18));
            }
            if (*(char **) (pcVar7 + 0x18) != pcVar10) {
                pcVar7 = pcVar10;
            }
        } else {
            for (pcVar6 = *(char **) (pcVar10 + 0x10); pcVar7 = pcVar10, pcVar6 != (char *) 0x0;
                 pcVar6 = *(char **) (pcVar6 + 0x10)) {
                pcVar10 = pcVar6;
            }
        }
    } while (true);
}


void FUN_1402ecd70(longlong param_1, longlong param_2) {
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong local_res10[3];

    if (param_2 != 0) {
        *(undefined8 * )(param_2 + 0x48) = *(undefined8 * )(param_1 + 0x910);
        *(undefined8 * )(param_2 + 0x50) = 0;
        if (*(longlong * )(param_1 + 0x910) == 0) {
            *(longlong * )(param_1 + 0x918) = param_2;
        } else {
            *(longlong * )(*(longlong * )(param_1 + 0x910) + 0x50) = param_2;
        }
        *(int *) (param_1 + 0x920) = *(int *) (param_1 + 0x920) + 1;
        *(longlong * )(param_1 + 0x910) = param_2;
        if (0xfa < *(uint * )(param_1 + 0x920)) {
            lVar1 = *(longlong * )(param_1 + 0x918);
            lVar4 = *(longlong * )(lVar1 + 0x50);
            *(longlong * )(param_1 + 0x918) = lVar4;
            *(undefined8 * )(lVar4 + 0x48) = 0;
            *(undefined8 * )(lVar1 + 0x50) = 0;
            lVar3 = *(longlong * )(param_1 + 0x8f8);
            lVar4 = *(longlong * )(*(longlong * )(param_1 + 0x8f8) + 8);
            while (lVar4 != 0) {
                if (*(uint * )(lVar4 + 0x20) < *(uint * )(lVar1 + 0x18)) {
                    lVar4 = *(longlong * )(lVar4 + 0x18);
                } else {
                    lVar3 = lVar4;
                    lVar4 = *(longlong * )(lVar4 + 0x10);
                }
            }
            while (true) {
                if ((lVar3 == *(longlong * )(param_1 + 0x8f8)) ||
                    (*(uint * )(lVar3 + 0x20) != *(uint * )(lVar1 + 0x18)))
                    goto LAB_1402ece92;
                if (*(longlong * )(lVar3 + 0x28) == lVar1) break;
                lVar4 = *(longlong * )(lVar3 + 0x18);
                if (lVar4 == 0) {
                    lVar4 = *(longlong * )(lVar3 + 8);
                    if (lVar3 == *(longlong * )(lVar4 + 0x18)) {
                        do {
                            lVar3 = lVar4;
                            lVar4 = *(longlong * )(lVar3 + 8);
                        } while (lVar3 == *(longlong * )(lVar4 + 0x18));
                    }
                    if (*(longlong * )(lVar3 + 0x18) != lVar4) {
                        lVar3 = lVar4;
                    }
                } else {
                    for (lVar2 = *(longlong * )(lVar4 + 0x10); lVar3 = lVar4, lVar2 != 0;
                         lVar2 = *(longlong * )(lVar2 + 0x10)) {
                        lVar4 = lVar2;
                    }
                }
            }
            local_res10[0] = lVar3;
            FUN_1402edaf0(param_1 + 0x8f0, local_res10);
            LAB_1402ece92:
            FUN_1402eb220(lVar1);
            *(int *) (param_1 + 0x920) = *(int *) (param_1 + 0x920) + -1;
        }
    }
    return;
}


void FUN_1402eceb0(longlong param_1, longlong param_2) {
    longlong lVar1;
    longlong lVar2;

    lVar1 = *(longlong * )(param_2 + 0x48);
    if ((lVar1 != 0) || (*(longlong * )(param_1 + 0x918) == param_2)) {
        if (lVar1 == 0) {
            lVar1 = *(longlong * )(param_2 + 0x50);
            *(longlong * )(param_1 + 0x918) = lVar1;
            if (lVar1 != 0) {
                *(undefined8 * )(lVar1 + 0x48) = 0;
                *(undefined8 * )(param_2 + 0x50) = 0;
                *(undefined8 * )(param_2 + 0x48) = 0;
                *(int *) (param_1 + 0x920) = *(int *) (param_1 + 0x920) + -1;
                return;
            }
            *(undefined8 * )(param_1 + 0x910) = 0;
            *(undefined8 * )(param_2 + 0x50) = 0;
            *(undefined8 * )(param_2 + 0x48) = 0;
            *(int *) (param_1 + 0x920) = *(int *) (param_1 + 0x920) + -1;
            return;
        }
        lVar2 = *(longlong * )(param_2 + 0x50);
        if (lVar2 == 0) {
            *(longlong * )(param_1 + 0x910) = lVar1;
            *(undefined8 * )(lVar1 + 0x50) = 0;
            *(undefined8 * )(param_2 + 0x50) = 0;
            *(undefined8 * )(param_2 + 0x48) = 0;
            *(int *) (param_1 + 0x920) = *(int *) (param_1 + 0x920) + -1;
            return;
        }
        *(longlong * )(lVar2 + 0x48) = lVar1;
        *(longlong * )(lVar1 + 0x50) = lVar2;
        *(undefined8 * )(param_2 + 0x50) = 0;
        *(undefined8 * )(param_2 + 0x48) = 0;
        *(int *) (param_1 + 0x920) = *(int *) (param_1 + 0x920) + -1;
    }
    return;
}


void FUN_1402ecf40(uint *param_1) {
    ulonglong uVar1;
    longlong lVar2;
    undefined4 *puVar3;
    undefined4 *puVar4;

    if (*param_1 != 1) {
        uVar1 = SUB168(ZEXT816(0x70) * ZEXT816(1), 0);
        if (SUB168(ZEXT816(0x70) * ZEXT816(1) >> 0x40, 0) != 0) {
            uVar1 = 0xffffffffffffffff;
        }
        lVar2 = uVar1 + 0x10;
        if (0xffffffffffffffef < uVar1) {
            lVar2 = -1;
        }
        puVar3 = (undefined4 *) FUN_14018b280(lVar2, 2);
        if (puVar3 == (undefined4 *) 0x0) {
            puVar4 = (undefined4 *) 0x0;
        } else {
            puVar4 = puVar3 + 4;
            *puVar3 = 1;
            *(undefined8 * )(puVar3 + 0x1c) = 0;
            *(undefined8 * )(puVar3 + 0x1e) = 0;
        }
        uVar1 = 1;
        if (*param_1 == 0) {
            uVar1 = (ulonglong) * param_1;
        }
        FUN_1407db590(puVar4, *(undefined8 * )(param_1 + 2), uVar1 * 0x70);
        FUN_1407e4830(*(undefined8 * )(param_1 + 2), 0, uVar1 * 0x70);
        if (*(longlong * )(param_1 + 2) != 0) {
            FUN_1402edbf0();
        }
        *param_1 = 1;
        *(undefined4 * *)(param_1 + 2) = puVar4;
    }
    return;
}


void FUN_1402ed000(longlong param_1) {
    undefined8 *puVar1;
    longlong lVar2;
    undefined *puVar3;
    int iVar4;

    lVar2 = *(longlong * )(param_1 + 8);
    if (lVar2 != 0) {
        iVar4 = *(int *) (lVar2 + -8) + -1;
        if (-1 < iVar4) {
            puVar3 = (undefined * )((longlong) * (int *) (lVar2 + -8) * 0x30 + 0x28 + lVar2);
            do {
                puVar1 = (undefined8 * )(&DAT_ffffffffffffffd0 + (longlong) puVar3);
                puVar3 = &DAT_ffffffffffffffd0 + (longlong) puVar3;
                FUN_14018b900(*puVar1, 0);
                iVar4 = iVar4 + -1;
            } while (-1 < iVar4);
        }
        FUN_14018b900(lVar2 + -8, 0);
    }
    return;
}


void FUN_1402ed080(uint *param_1) {
    ulonglong uVar1;
    longlong lVar2;
    undefined4 *puVar3;
    undefined4 *puVar4;

    if (*param_1 != 1) {
        uVar1 = SUB168(ZEXT816(0xb8) * ZEXT816(1), 0);
        if (SUB168(ZEXT816(0xb8) * ZEXT816(1) >> 0x40, 0) != 0) {
            uVar1 = 0xffffffffffffffff;
        }
        lVar2 = uVar1 + 8;
        if (0xfffffffffffffff7 < uVar1) {
            lVar2 = -1;
        }
        puVar3 = (undefined4 *) FUN_14018b280(lVar2, 2);
        if (puVar3 == (undefined4 *) 0x0) {
            puVar4 = (undefined4 *) 0x0;
        } else {
            puVar4 = puVar3 + 2;
            *puVar3 = 1;
            *(undefined8 * )(puVar3 + 4) = 0;
            *(undefined8 * )(puVar3 + 6) = 0;
            *(undefined8 * )(puVar3 + 8) = 0;
            *(undefined8 * )(puVar3 + 10) = 0;
            *(undefined8 * )(puVar3 + 0xc) = 0;
            *(undefined8 * )(puVar3 + 0xe) = 0;
            *(undefined8 * )(puVar3 + 0x10) = 0;
            *(undefined8 * )(puVar3 + 0x12) = 0;
            *(undefined8 * )(puVar3 + 0x14) = 0;
            *(undefined8 * )(puVar3 + 0x16) = 0;
            *(undefined8 * )(puVar3 + 0x18) = 0;
            *(undefined8 * )(puVar3 + 0x1a) = 0;
            *(undefined8 * )(puVar3 + 0x1c) = 0;
            *(undefined8 * )(puVar3 + 0x1e) = 0;
            *(undefined8 * )(puVar3 + 0x20) = 0;
            *(undefined8 * )(puVar3 + 0x22) = 0;
            *(undefined8 * )(puVar3 + 0x24) = 0;
            *(undefined8 * )(puVar3 + 0x26) = 0;
            *(undefined8 * )(puVar3 + 0x28) = 0;
            *(undefined8 * )(puVar3 + 0x2a) = 0;
            *(undefined8 * )(puVar3 + 0x2c) = 0;
        }
        uVar1 = 1;
        if (*param_1 == 0) {
            uVar1 = (ulonglong) * param_1;
        }
        FUN_1407db590(puVar4, *(undefined8 * )(param_1 + 2), uVar1 * 0xb8);
        FUN_1407e4830(*(undefined8 * )(param_1 + 2), 0, uVar1 * 0xb8);
        if (*(longlong * )(param_1 + 2) != 0) {
            FUN_1402edc50();
        }
        *param_1 = 1;
        *(undefined4 * *)(param_1 + 2) = puVar4;
    }
    return;
}


void FUN_1402ed1a0(uint *param_1) {
    ulonglong uVar1;
    longlong lVar2;
    undefined4 *puVar3;
    undefined4 *puVar4;

    if (*param_1 != 1) {
        uVar1 = SUB168(ZEXT816(0x160) * ZEXT816(1), 0);
        if (SUB168(ZEXT816(0x160) * ZEXT816(1) >> 0x40, 0) != 0) {
            uVar1 = 0xffffffffffffffff;
        }
        lVar2 = uVar1 + 0x10;
        if (0xffffffffffffffef < uVar1) {
            lVar2 = -1;
        }
        puVar3 = (undefined4 *) FUN_14018b280(lVar2, 2);
        if (puVar3 == (undefined4 *) 0x0) {
            puVar4 = (undefined4 *) 0x0;
        } else {
            puVar4 = puVar3 + 4;
            *puVar3 = 1;
            *(undefined8 * )(puVar3 + 8) = 0;
            *(undefined8 * )(puVar3 + 10) = 0;
            *(undefined8 * )(puVar3 + 0xc) = 0;
            *(undefined8 * )(puVar3 + 0xe) = 0;
            *(undefined8 * )(puVar3 + 0x10) = 0;
            *(undefined8 * )(puVar3 + 0x12) = 0;
            *(undefined8 * )(puVar3 + 0x14) = 0;
            *(undefined8 * )(puVar3 + 0x16) = 0;
            *(undefined8 * )(puVar3 + 0x18) = 0;
            *(undefined8 * )(puVar3 + 0x1a) = 0;
            *(undefined8 * )(puVar3 + 0x1c) = 0;
            *(undefined8 * )(puVar3 + 0x1e) = 0;
            *(undefined8 * )(puVar3 + 0x20) = 0;
            *(undefined8 * )(puVar3 + 0x22) = 0;
            *(undefined8 * )(puVar3 + 0x24) = 0;
            *(undefined8 * )(puVar3 + 0x26) = 0;
            *(undefined8 * )(puVar3 + 0x28) = 0;
            *(undefined8 * )(puVar3 + 0x2a) = 0;
            *(undefined8 * )(puVar3 + 0x2c) = 0;
            *(undefined8 * )(puVar3 + 0x2e) = 0;
            *(undefined8 * )(puVar3 + 0x30) = 0;
            *(undefined8 * )(puVar3 + 0x32) = 0;
            *(undefined8 * )(puVar3 + 0x34) = 0;
            *(undefined8 * )(puVar3 + 0x36) = 0;
        }
        uVar1 = 1;
        if (*param_1 == 0) {
            uVar1 = (ulonglong) * param_1;
        }
        FUN_1407db590(puVar4, *(undefined8 * )(param_1 + 2), uVar1 * 0x160);
        FUN_1407e4830(*(undefined8 * )(param_1 + 2), 0, uVar1 * 0x160);
        if (*(longlong * )(param_1 + 2) != 0) {
            FUN_1402edcb0();
        }
        *param_1 = 1;
        *(undefined4 * *)(param_1 + 2) = puVar4;
    }
    return;
}


void FUN_1402ed2e0(longlong param_1) {
    undefined8 *puVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;

    lVar2 = *(longlong * )(param_1 + 8);
    if (lVar2 != 0) {
        iVar4 = *(int *) (lVar2 + -8) + -1;
        if (-1 < iVar4) {
            lVar3 = (longlong) * (int *) (lVar2 + -8) * 0x20 + 0x18 + lVar2;
            do {
                puVar1 = (undefined8 * )(lVar3 + -0x20);
                lVar3 = lVar3 + -0x20;
                FUN_14018b900(*puVar1, 0);
                iVar4 = iVar4 + -1;
            } while (-1 < iVar4);
        }
        FUN_14018b900(lVar2 + -8, 0);
    }
    return;
}


void FUN_1402ed360(longlong param_1) {
    int iVar1;
    longlong lVar2;
    longlong lVar3;

    lVar2 = *(longlong * )(param_1 + 8);
    if (lVar2 != 0) {
        iVar1 = *(int *) (lVar2 + -8);
        lVar3 = (longlong) iVar1 * 0x98 + lVar2;
        while (iVar1 = iVar1 + -1, -1 < iVar1) {
            lVar3 = lVar3 + -0x98;
            FUN_1402ee350(lVar3);
        }
        FUN_14018b900(lVar2 + -8, 0);
    }
    return;
}


void FUN_1402ed3e0(uint *param_1) {
    ulonglong uVar1;
    longlong lVar2;
    undefined4 *puVar3;
    undefined4 *puVar4;

    if (*param_1 != 1) {
        uVar1 = SUB168(ZEXT816(200) * ZEXT816(1), 0);
        if (SUB168(ZEXT816(200) * ZEXT816(1) >> 0x40, 0) != 0) {
            uVar1 = 0xffffffffffffffff;
        }
        lVar2 = uVar1 + 8;
        if (0xfffffffffffffff7 < uVar1) {
            lVar2 = -1;
        }
        puVar3 = (undefined4 *) FUN_14018b280(lVar2, 2);
        if (puVar3 == (undefined4 *) 0x0) {
            puVar4 = (undefined4 *) 0x0;
        } else {
            puVar4 = puVar3 + 2;
            *puVar3 = 1;
            *(undefined8 * )(puVar3 + 4) = 0;
            *(undefined8 * )(puVar3 + 6) = 0;
            *(undefined8 * )(puVar3 + 0x10) = 0;
            *(undefined8 * )(puVar3 + 0x12) = 0;
            *(undefined8 * )(puVar3 + 0x14) = 0;
            *(undefined8 * )(puVar3 + 0x16) = 0;
            *(undefined8 * )(puVar3 + 0x18) = 0;
            *(undefined8 * )(puVar3 + 0x1a) = 0;
            *(undefined8 * )(puVar3 + 0x1e) = 0;
            *(undefined8 * )(puVar3 + 0x20) = 0;
            *(undefined8 * )(puVar3 + 0x22) = 0;
            *(undefined8 * )(puVar3 + 0x24) = 0;
            *(undefined8 * )(puVar3 + 0x28) = 0;
            *(undefined8 * )(puVar3 + 0x2a) = 0;
            *(undefined8 * )(puVar3 + 0x2c) = 0;
            *(undefined8 * )(puVar3 + 0x2e) = 0;
            *(undefined8 * )(puVar3 + 0x30) = 0;
            *(undefined8 * )(puVar3 + 0x32) = 0;
        }
        uVar1 = 1;
        if (*param_1 == 0) {
            uVar1 = (ulonglong) * param_1;
        }
        FUN_1407db590(puVar4, *(undefined8 * )(param_1 + 2), uVar1 * 200);
        FUN_1407e4830(*(undefined8 * )(param_1 + 2), 0, uVar1 * 200);
        if (*(longlong * )(param_1 + 2) != 0) {
            FUN_1402edda0();
        }
        *param_1 = 1;
        *(undefined4 * *)(param_1 + 2) = puVar4;
    }
    return;
}


void FUN_1402ed500(longlong param_1) {
    undefined8 *puVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;

    lVar2 = *(longlong * )(param_1 + 8);
    if (lVar2 != 0) {
        iVar4 = *(int *) (lVar2 + -8) + -1;
        if (-1 < iVar4) {
            lVar3 = (longlong) * (int *) (lVar2 + -8) * 0x10 + 8 + lVar2;
            do {
                puVar1 = (undefined8 * )(lVar3 + -0x10);
                lVar3 = lVar3 + -0x10;
                FUN_14018b900(*puVar1, 0);
                iVar4 = iVar4 + -1;
            } while (-1 < iVar4);
        }
        FUN_14018b900(lVar2 + -8, 0);
    }
    return;
}


void FUN_1402ed580(longlong param_1) {
    int iVar1;
    longlong lVar2;
    longlong lVar3;

    lVar2 = *(longlong * )(param_1 + 8);
    if (lVar2 != 0) {
        iVar1 = *(int *) (lVar2 + -8);
        lVar3 = (longlong) iVar1 * 400 + lVar2;
        while (iVar1 = iVar1 + -1, -1 < iVar1) {
            lVar3 = lVar3 + -400;
            FUN_1402ee3f0(lVar3);
        }
        FUN_14018b900(lVar2 + -8, 0);
    }
    return;
}


void FUN_1402ed600(longlong param_1) {
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 *puVar3;
    int iVar4;

    lVar2 = *(longlong * )(param_1 + 8);
    if (lVar2 != 0) {
        iVar4 = *(int *) (lVar2 + -8) + -1;
        if (-1 < iVar4) {
            puVar3 = (undefined8 * )((longlong) * (int *) (lVar2 + -8) * 0x38 + 0x20 + lVar2);
            do {
                puVar1 = puVar3 + -8;
                puVar3 = puVar3 + -7;
                FUN_14018b900(*puVar1, 0);
                FUN_14018b900(*puVar3);
                iVar4 = iVar4 + -1;
            } while (-1 < iVar4);
        }
        FUN_14018b900(lVar2 + -8, 0);
    }
    return;
}


void FUN_1402ed680(uint *param_1) {
    ulonglong uVar1;
    longlong lVar2;
    undefined4 *puVar3;
    undefined8 *puVar4;

    if (*param_1 != 1) {
        uVar1 = SUB168(ZEXT816(0x40) * ZEXT816(1), 0);
        if (SUB168(ZEXT816(0x40) * ZEXT816(1) >> 0x40, 0) != 0) {
            uVar1 = 0xffffffffffffffff;
        }
        lVar2 = uVar1 + 8;
        if (0xfffffffffffffff7 < uVar1) {
            lVar2 = -1;
        }
        puVar3 = (undefined4 *) FUN_14018b280(lVar2, 2);
        if (puVar3 == (undefined4 *) 0x0) {
            puVar4 = (undefined8 *) 0x0;
        } else {
            puVar4 = (undefined8 * )(puVar3 + 2);
            *puVar3 = 1;
            *puVar4 = 0;
            *(undefined8 * )(puVar3 + 4) = 0;
            *(undefined8 * )(puVar3 + 6) = 0;
            *(undefined8 * )(puVar3 + 8) = 0;
            *(undefined8 * )(puVar3 + 10) = 0;
            *(undefined8 * )(puVar3 + 0xc) = 0;
            *(undefined8 * )(puVar3 + 0xe) = 0;
            *(undefined8 * )(puVar3 + 0x10) = 0;
        }
        uVar1 = 1;
        if (*param_1 == 0) {
            uVar1 = (ulonglong) * param_1;
        }
        FUN_1407db590(puVar4, *(undefined8 * )(param_1 + 2), uVar1 << 6);
        FUN_1407e4830(*(undefined8 * )(param_1 + 2), 0, uVar1 << 6);
        if (*(longlong * )(param_1 + 2) != 0) {
            FUN_1402ee080();
        }
        *param_1 = 1;
        *(undefined8 * *)(param_1 + 2) = puVar4;
    }
    return;
}


void FUN_1402ed750(longlong param_1) {
    int iVar1;
    longlong lVar2;
    longlong lVar3;

    lVar2 = *(longlong * )(param_1 + 8);
    if (lVar2 != 0) {
        iVar1 = *(int *) (lVar2 + -8);
        lVar3 = (longlong) iVar1 * 0xa0 + lVar2;
        while (iVar1 = iVar1 + -1, -1 < iVar1) {
            lVar3 = lVar3 + -0xa0;
            FUN_1402ee5b0(lVar3);
        }
        FUN_14018b900(lVar2 + -8, 0);
    }
    return;
}


void FUN_1402ed7d0(longlong param_1) {
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 *puVar3;
    int iVar4;

    lVar2 = *(longlong * )(param_1 + 8);
    if (lVar2 != 0) {
        iVar4 = *(int *) (lVar2 + -8) + -1;
        if (-1 < iVar4) {
            puVar3 = (undefined8 * )((longlong) * (int *) (lVar2 + -8) * 0x20 + 0x18 + lVar2);
            do {
                puVar1 = puVar3 + -5;
                puVar3 = puVar3 + -4;
                FUN_14018b900(*puVar1, 0);
                FUN_14018b900(*puVar3);
                iVar4 = iVar4 + -1;
            } while (-1 < iVar4);
        }
        FUN_14018b900(lVar2 + -8, 0);
    }
    return;
}


longlong *FUN_1402ed850(longlong param_1, longlong *param_2, char **param_3, undefined8 *param_4) {
    char *pcVar1;
    char *pcVar2;
    longlong lVar3;
    longlong lVar4;
    bool bVar5;

    pcVar1 = *param_3;
    pcVar2 = *(char **) (param_1 + 8);
    if (pcVar1 == *(char **) (pcVar2 + 0x10)) {
        if ((*(longlong * )(param_1 + 0x10) == 0) || (*(uint * )(pcVar1 + 0x20) < *(uint *) param_4)) {
            lVar3 = *(longlong * )(pcVar2 + 8);
            if (lVar3 != 0) {
                do {
                    if (*(uint *) param_4 < *(uint * )(lVar3 + 0x20)) {
                        lVar3 = *(longlong * )(lVar3 + 0x10);
                    } else {
                        lVar3 = *(longlong * )(lVar3 + 0x18);
                    }
                } while (lVar3 != 0);
            }
            FUN_140055e80();
            return param_2;
        }
    } else {
        if (pcVar1 == pcVar2) {
            pcVar1 = *(char **) (pcVar2 + 0x18);
            if (*(uint *) param_4 < *(uint * )(pcVar1 + 0x20)) {
                FUN_1402edaa0(param_1, param_2, param_4);
            } else {
                if ((pcVar1 == pcVar2) || (*(uint *) param_4 < *(uint * )(pcVar1 + 0x20))) {
                    lVar3 = FUN_14018b280(0x30);
                    if ((undefined8 * )(lVar3 + 0x20) != (undefined8 *) 0x0) {
                        *(undefined8 * )(lVar3 + 0x20) = *param_4;
                        *(undefined8 * )(lVar3 + 0x28) = param_4[1];
                    }
                    *(longlong * )(pcVar1 + 0x10) = lVar3;
                    pcVar2 = *(char **) (param_1 + 8);
                    if (pcVar1 == pcVar2) {
                        *(longlong * )(pcVar2 + 8) = lVar3;
                        *(longlong * )(*(longlong * )(param_1 + 8) + 0x18) = lVar3;
                    } else if (pcVar1 == *(char **) (pcVar2 + 0x10)) {
                        *(longlong * )(pcVar2 + 0x10) = lVar3;
                    }
                } else {
                    lVar3 = FUN_14018b280(0x30);
                    if ((undefined8 * )(lVar3 + 0x20) != (undefined8 *) 0x0) {
                        *(undefined8 * )(lVar3 + 0x20) = *param_4;
                        *(undefined8 * )(lVar3 + 0x28) = param_4[1];
                    }
                    *(longlong * )(pcVar1 + 0x18) = lVar3;
                    if (pcVar1 == *(char **) (*(longlong * )(param_1 + 8) + 0x18)) {
                        *(longlong * )(*(longlong * )(param_1 + 8) + 0x18) = lVar3;
                    }
                }
                *(char **) (lVar3 + 8) = pcVar1;
                *(undefined8 * )(lVar3 + 0x10) = 0;
                *(undefined8 * )(lVar3 + 0x18) = 0;
                FUN_1400081c0(lVar3, *(longlong * )(param_1 + 8) + 8);
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 1;
                *param_2 = lVar3;
            }
            return param_2;
        }
        if ((*pcVar1 == '\0') && (*(char **) (*(longlong * )(pcVar1 + 8) + 8) == pcVar1)) {
            lVar3 = *(longlong * )(pcVar1 + 0x18);
        } else {
            lVar3 = *(longlong * )(pcVar1 + 0x10);
            if (lVar3 == 0) {
                lVar3 = *(longlong * )(pcVar1 + 8);
                lVar4 = lVar3;
                if (pcVar1 == *(char **) (lVar3 + 0x10)) {
                    do {
                        lVar3 = *(longlong * )(lVar4 + 8);
                        bVar5 = lVar4 == *(longlong * )(lVar3 + 0x10);
                        lVar4 = lVar3;
                    } while (bVar5);
                }
            } else {
                for (lVar4 = *(longlong * )(lVar3 + 0x18); lVar4 != 0; lVar4 = *(longlong * )(lVar4 + 0x18)) {
                    lVar3 = lVar4;
                }
            }
        }
        if ((*(uint *) param_4 < *(uint * )(lVar3 + 0x20)) ||
            (*(uint * )(pcVar1 + 0x20) < *(uint *) param_4)) {
            FUN_1402edaa0(param_1, param_2, param_4);
            return param_2;
        }
        if (*(longlong * )(lVar3 + 0x18) == 0) {
            FUN_140055e80(param_1, param_2, 0, lVar3, param_4);
            return param_2;
        }
    }
    FUN_140055e80();
    return param_2;
}


undefined8 FUN_1402edaa0(longlong param_1, undefined8 param_2, uint *param_3) {
    longlong lVar1;

    lVar1 = *(longlong * )(*(longlong * )(param_1 + 8) + 8);
    if (lVar1 != 0) {
        do {
            if (*param_3 < *(uint * )(lVar1 + 0x20)) {
                lVar1 = *(longlong * )(lVar1 + 0x10);
            } else {
                lVar1 = *(longlong * )(lVar1 + 0x18);
            }
        } while (lVar1 != 0);
    }
    FUN_140055e80();
    return param_2;
}


void FUN_1402edaf0(longlong param_1, longlong *param_2) {
    longlong lVar1;
    int iVar2;
    undefined8 uVar3;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    lVar1 = *(longlong * )(param_1 + 8);
    if (*param_2 == lVar1) {
        local_48 = &PTR_LAB_140b5e648;
        local_40 = 0;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_48);
        local_28 = local_48;
        local_res8 = 0x141e4f6b0;
        local_18 = local_38;
        local_20 = local_40;
        iVar2 = FUN_1401971e0(&DAT_140c8a588, 1, &local_res8, &local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001402edbb6. Too many branches
            // WARNING: Treating indirect jump as call
            DebugBreak();
            return;
        }
    } else {
        uVar3 = FUN_140007db0(*param_2, lVar1 + 8, lVar1 + 0x10, lVar1 + 0x18);
        FUN_14018b900(uVar3, 0);
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -1;
    }
    return;
}


longlong FUN_1402edbf0(longlong param_1) {
    undefined8 *puVar1;
    undefined *puVar2;
    int iVar3;

    iVar3 = *(int *) (param_1 + -0x10) + -1;
    if (-1 < iVar3) {
        puVar2 = (undefined * )((longlong) * (int *) (param_1 + -0x10) * 0x70 + 0x68 + param_1);
        do {
            puVar1 = (undefined8 * )(&DAT_ffffffffffffff90 + (longlong) puVar2);
            puVar2 = &DAT_ffffffffffffff90 + (longlong) puVar2;
            FUN_14018b900(*puVar1, 0);
            iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
    }
    FUN_14018b900(param_1 + -0x10, 0);
    return param_1 + -0x10;
}


longlong FUN_1402edc50(longlong param_1) {
    int iVar1;
    longlong lVar2;

    iVar1 = *(int *) (param_1 + -8);
    lVar2 = (longlong) iVar1 * 0xb8 + param_1;
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
        lVar2 = lVar2 + -0xb8;
        FUN_1402ee1b0(lVar2);
    }
    FUN_14018b900(param_1 + -8, 0);
    return param_1 + -8;
}


longlong FUN_1402edcb0(longlong param_1) {
    int iVar1;
    longlong lVar2;

    iVar1 = *(int *) (param_1 + -0x10);
    lVar2 = (longlong) iVar1 * 0x160 + param_1;
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
        lVar2 = lVar2 + -0x160;
        FUN_1402ee270(lVar2);
    }
    FUN_14018b900(param_1 + -0x10, 0);
    return param_1 + -0x10;
}


longlong FUN_1402edd10(longlong param_1) {
    longlong lVar1;
    undefined *puVar2;
    int iVar3;

    iVar3 = *(int *) (param_1 + -8) + -1;
    if (-1 < iVar3) {
        puVar2 = (undefined * )((longlong) * (int *) (param_1 + -8) * 0x30 + 0x28 + param_1);
        do {
            lVar1 = *(longlong * )(&DAT_ffffffffffffffd0 + (longlong) puVar2);
            puVar2 = &DAT_ffffffffffffffd0 + (longlong) puVar2;
            if (lVar1 != 0) {
                FUN_140003810(lVar1, 0x128, *(undefined4 * )(lVar1 + -8), FUN_1402eefd0);
                FUN_14018b900(lVar1 + -8, 0);
            }
            iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
    }
    FUN_14018b900(param_1 + -8, 0);
    return param_1 + -8;
}


longlong FUN_1402edda0(longlong param_1) {
    undefined8 *puVar1;
    int iVar2;

    iVar2 = *(int *) (param_1 + -8) + -1;
    if (-1 < iVar2) {
        puVar1 = (undefined8 * )((longlong) * (int *) (param_1 + -8) * 200 + 0xb0 + param_1);
        do {
            FUN_14018b900(puVar1[-0x17], 0);
            FUN_14018b900(puVar1[-0x19]);
            FUN_14018b900(puVar1[-0x1b]);
            FUN_14018b900(puVar1[-0x1e]);
            FUN_14018b900(puVar1[-0x20]);
            FUN_14018b900(puVar1[-0x23]);
            FUN_14018b900(puVar1[-0x25]);
            FUN_14018b900(puVar1[-0x27]);
            FUN_14018b900(puVar1[-0x2d]);
            iVar2 = iVar2 + -1;
            puVar1 = puVar1 + -0x19;
        } while (-1 < iVar2);
    }
    FUN_14018b900(param_1 + -8, 0);
    return param_1 + -8;
}


longlong FUN_1402ede60(longlong param_1) {
    longlong lVar1;
    longlong *plVar2;
    int iVar3;

    iVar3 = *(int *) (param_1 + -8) + -1;
    if (-1 < iVar3) {
        plVar2 = (longlong * )(param_1 + 0x10 + (longlong) * (int *) (param_1 + -8) * 0x28);
        do {
            lVar1 = plVar2[-3];
            plVar2 = plVar2 + -5;
            if (lVar1 != 0) {
                FUN_140003810(lVar1, 0x20, *(undefined4 * )(lVar1 + -8), &LAB_1402ee6a0);
                FUN_14018b900(lVar1 + -8, 0);
            }
            lVar1 = *plVar2;
            if (lVar1 != 0) {
                FUN_140003810(lVar1, 0x20, *(undefined4 * )(lVar1 + -8), &LAB_1402ee6a0);
                FUN_14018b900(lVar1 + -8, 0);
            }
            iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
    }
    FUN_14018b900(param_1 + -8, 0);
    return param_1 + -8;
}


longlong FUN_1402edf20(longlong param_1) {
    longlong lVar1;
    undefined8 *puVar2;
    int iVar3;

    iVar3 = *(int *) (param_1 + -8) + -1;
    if (-1 < iVar3) {
        puVar2 = (undefined8 * )((longlong) * (int *) (param_1 + -8) * 0xa0 + 0x60 + param_1);
        do {
            lVar1 = puVar2[-0xd];
            if (lVar1 != 0) {
                FUN_1402eedd0(lVar1);
                FUN_14018b900(lVar1, 0);
            }
            lVar1 = puVar2[-0xe];
            if (lVar1 != 0) {
                FUN_1402ee6d0(lVar1);
                FUN_14018b900(lVar1, 0);
            }
            FUN_14018b900(puVar2[-0x15], 0);
            FUN_14018b900(puVar2[-0x14]);
            FUN_14018b900(puVar2[-0x18]);
            FUN_14018b900(puVar2[-0x17]);
            iVar3 = iVar3 + -1;
            puVar2 = puVar2 + -0x14;
        } while (-1 < iVar3);
    }
    FUN_14018b900(param_1 + -8, 0);
    return param_1 + -8;
}


longlong FUN_1402edfe0(longlong param_1) {
    undefined8 *puVar1;
    int iVar2;

    iVar2 = *(int *) (param_1 + -8) + -1;
    if (-1 < iVar2) {
        puVar1 = (undefined8 * )((longlong) * (int *) (param_1 + -8) * 0x50 + 0x48 + param_1);
        do {
            FUN_14018b900(puVar1[-0xb], 0);
            FUN_14018b900(puVar1[-10]);
            FUN_14018b900(puVar1[-0xe]);
            FUN_14018b900(puVar1[-0xd]);
            FUN_14018b900(puVar1[-0x11]);
            FUN_14018b900(puVar1[-0x10]);
            iVar2 = iVar2 + -1;
            puVar1 = puVar1 + -10;
        } while (-1 < iVar2);
    }
    FUN_14018b900(param_1 + -8, 0);
    return param_1 + -8;
}


longlong FUN_1402ee080(longlong param_1) {
    undefined8 *puVar1;
    int iVar2;

    iVar2 = *(int *) (param_1 + -8) + -1;
    if (-1 < iVar2) {
        puVar1 = (undefined8 * )((longlong) * (int *) (param_1 + -8) * 0x40 + 0x28 + param_1);
        do {
            FUN_14018b900(puVar1[-6], 0);
            FUN_14018b900(puVar1[-8]);
            FUN_14018b900(puVar1[-10]);
            FUN_14018b900(puVar1[-0xc]);
            iVar2 = iVar2 + -1;
            puVar1 = puVar1 + -8;
        } while (-1 < iVar2);
    }
    FUN_14018b900(param_1 + -8, 0);
    return param_1 + -8;
}


longlong FUN_1402ee100(longlong param_1) {
    undefined8 *puVar1;
    int iVar2;

    iVar2 = *(int *) (param_1 + -8) + -1;
    if (-1 < iVar2) {
        puVar1 = (undefined8 * )((longlong) * (int *) (param_1 + -8) * 0x68 + 0x60 + param_1);
        do {
            FUN_14018b900(puVar1[-0xe], 0);
            FUN_14018b900(puVar1[-0xd]);
            FUN_14018b900(puVar1[-0x11]);
            FUN_14018b900(puVar1[-0x10]);
            FUN_14018b900(puVar1[-0x14]);
            FUN_14018b900(puVar1[-0x13]);
            FUN_14018b900(puVar1[-0x17]);
            FUN_14018b900(puVar1[-0x16]);
            iVar2 = iVar2 + -1;
            puVar1 = puVar1 + -0xd;
        } while (-1 < iVar2);
    }
    FUN_14018b900(param_1 + -8, 0);
    return param_1 + -8;
}


void FUN_1402ee1b0(longlong param_1) {
    FUN_14018b900(*(undefined8 * )(param_1 + 0xa0), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0xa8), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x88), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x90), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x70), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x78), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x58), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x60), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x40), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x48), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x28), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x30), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x10), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x18), 0);
    return;
}


void FUN_1402ee270(longlong param_1) {
    FUN_14018b900(*(undefined8 * )(param_1 + 0xc0), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 200), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0xa8), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0xb0), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x90), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x98), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x78), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x80), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x60), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x68), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x48), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x50), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x30), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x38), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x18), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x20), 0);
    return;
}


void FUN_1402ee350(longlong param_1) {
    FUN_14018b900(*(undefined8 * )(param_1 + 0x88), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x90), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x70), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x78), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x58), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x60), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x40), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x48), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x28), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x30), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x10), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x18), 0);
    return;
}


void FUN_1402ee3f0(longlong param_1) {
    FUN_14018b900(*(undefined8 * )(param_1 + 0x180), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x188), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x168), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x170), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x150), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x158), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x138), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x140), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x120), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x128), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x108), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x110), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0xf0), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0xf8), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0xd8), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0xe0), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0xc0), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 200), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0xa8), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0xb0), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x90), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x98), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x78), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x80), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x60), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x68), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x48), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x50), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x30), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x38), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x18), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x20), 0);
    return;
}


void FUN_1402ee5b0(longlong param_1) {
    FUN_14018b900(*(undefined8 * )(param_1 + 0x90), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x98), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x78), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x80), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x60), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x68), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x48), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x50), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x30), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x38), 0);
    return;
}


longlong FUN_1402ee640(longlong param_1) {
    int iVar1;
    longlong lVar2;

    iVar1 = *(int *) (param_1 + -8);
    lVar2 = (longlong) iVar1 * 0x128 + param_1;
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
        lVar2 = lVar2 + -0x128;
        FUN_1402eefd0(lVar2);
    }
    FUN_14018b900(param_1 + -8, 0);
    return param_1 + -8;
}


void FUN_1402ee6d0(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
    undefined8 *puVar1;
    longlong lVar2;
    int iVar3;
    undefined8 *puVar4;
    int iVar5;
    int iVar6;
    undefined8 unaff_RDI;

    FUN_14018b900(*(undefined8 * )(param_1 + 0xec0), 0);
    iVar3 = 4;
    puVar4 = (undefined8 * )(param_1 + 0xe80);
    iVar6 = 4;
    iVar5 = iVar6;
    do {
        puVar1 = puVar4 + -4;
        puVar4 = puVar4 + -3;
        FUN_14018b900(*puVar1, 0);
        FUN_14018b900(*puVar4);
        iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    puVar4 = (undefined8 * )(param_1 + 0xe08);
    do {
        puVar1 = puVar4 + -4;
        puVar4 = puVar4 + -3;
        FUN_14018b900(*puVar1, 0);
        FUN_14018b900(*puVar4);
        iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    iVar6 = 4;
    puVar4 = (undefined8 * )(param_1 + 0xd88);
    iVar5 = iVar6;
    do {
        puVar1 = puVar4 + -4;
        puVar4 = puVar4 + -3;
        FUN_14018b900(*puVar1, 0);
        FUN_14018b900(*puVar4);
        iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    puVar4 = (undefined8 * )(param_1 + 0xd10);
    iVar5 = iVar6;
    do {
        puVar1 = puVar4 + -4;
        puVar4 = puVar4 + -3;
        FUN_14018b900(*puVar1, 0);
        FUN_14018b900(*puVar4);
        iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    puVar4 = (undefined8 * )(param_1 + 0xc90);
    iVar5 = iVar6;
    do {
        puVar1 = puVar4 + -4;
        puVar4 = puVar4 + -3;
        FUN_14018b900(*puVar1, 0);
        FUN_14018b900(*puVar4);
        iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    puVar4 = (undefined8 * )(param_1 + 0xc18);
    do {
        puVar1 = puVar4 + -4;
        puVar4 = puVar4 + -3;
        FUN_14018b900(*puVar1, 0);
        FUN_14018b900(*puVar4);
        iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    iVar6 = 4;
    puVar4 = (undefined8 * )(param_1 + 0xb98);
    iVar5 = iVar6;
    do {
        puVar1 = puVar4 + -4;
        puVar4 = puVar4 + -3;
        FUN_14018b900(*puVar1, 0);
        FUN_14018b900(*puVar4);
        iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    puVar4 = (undefined8 * )(param_1 + 0xb20);
    iVar5 = iVar6;
    do {
        puVar1 = puVar4 + -4;
        puVar4 = puVar4 + -3;
        FUN_14018b900(*puVar1, 0);
        FUN_14018b900(*puVar4);
        iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    puVar4 = (undefined8 * )(param_1 + 0xaa0);
    iVar5 = iVar6;
    do {
        puVar1 = puVar4 + -4;
        puVar4 = puVar4 + -3;
        FUN_14018b900(*puVar1, 0);
        FUN_14018b900(*puVar4);
        iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    puVar4 = (undefined8 * )(param_1 + 0xa28);
    iVar5 = iVar6;
    do {
        puVar1 = puVar4 + -4;
        puVar4 = puVar4 + -3;
        FUN_14018b900(*puVar1, 0);
        FUN_14018b900(*puVar4);
        iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x968), 0);
    puVar4 = (undefined8 * )(param_1 + 0x970);
    FUN_14018b900(*puVar4, 0);
    iVar5 = iVar6;
    do {
        puVar1 = puVar4 + -4;
        puVar4 = puVar4 + -3;
        FUN_14018b900(*puVar1, 0);
        FUN_14018b900(*puVar4);
        iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    puVar4 = (undefined8 * )(param_1 + 0x8f8);
    iVar5 = iVar6;
    do {
        puVar1 = puVar4 + -4;
        puVar4 = puVar4 + -3;
        FUN_14018b900(*puVar1, 0);
        FUN_14018b900(*puVar4);
        iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    puVar4 = (undefined8 * )(param_1 + 0x7f0);
    iVar5 = iVar6;
    do {
        puVar1 = puVar4 + -4;
        puVar4 = puVar4 + -3;
        FUN_14018b900(*puVar1, 0);
        FUN_14018b900(*puVar4);
        iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    puVar4 = (undefined8 * )(param_1 + 0x778);
    do {
        puVar1 = puVar4 + -4;
        puVar4 = puVar4 + -3;
        FUN_14018b900(*puVar1, 0);
        FUN_14018b900(*puVar4);
        iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    iVar6 = 4;
    puVar4 = (undefined8 * )(param_1 + 0x6f8);
    iVar5 = iVar6;
    do {
        puVar1 = puVar4 + -4;
        puVar4 = puVar4 + -3;
        FUN_14018b900(*puVar1, 0);
        FUN_14018b900(*puVar4);
        iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    puVar4 = (undefined8 * )(param_1 + 0x680);
    iVar5 = iVar6;
    do {
        puVar1 = puVar4 + -4;
        puVar4 = puVar4 + -3;
        FUN_14018b900(*puVar1, 0);
        FUN_14018b900(*puVar4);
        iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    puVar4 = (undefined8 * )(param_1 + 0x600);
    iVar5 = iVar6;
    do {
        puVar1 = puVar4 + -4;
        puVar4 = puVar4 + -3;
        FUN_14018b900(*puVar1, 0);
        FUN_14018b900(*puVar4);
        iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    puVar4 = (undefined8 * )(param_1 + 0x588);
    iVar5 = iVar6;
    do {
        puVar1 = puVar4 + -4;
        puVar4 = puVar4 + -3;
        FUN_14018b900(*puVar1, 0);
        FUN_14018b900(*puVar4);
        iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    puVar4 = (undefined8 * )(param_1 + 0x508);
    iVar5 = iVar6;
    do {
        puVar1 = puVar4 + -4;
        puVar4 = puVar4 + -3;
        FUN_14018b900(*puVar1, 0);
        FUN_14018b900(*puVar4);
        iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    puVar4 = (undefined8 * )(param_1 + 0x490);
    do {
        puVar1 = puVar4 + -4;
        puVar4 = puVar4 + -3;
        FUN_14018b900(*puVar1, 0);
        FUN_14018b900(*puVar4);
        iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    puVar4 = (undefined8 * )(param_1 + 0x410);
    do {
        puVar1 = puVar4 + -4;
        puVar4 = puVar4 + -3;
        FUN_14018b900(*puVar1, 0);
        FUN_14018b900(*puVar4);
        iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    iVar5 = 9;
    puVar4 = (undefined8 * )(param_1 + 0x398);
    do {
        puVar1 = puVar4 + -4;
        puVar4 = puVar4 + -3;
        FUN_14018b900(*puVar1, 0);
        FUN_14018b900(*puVar4);
        iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x280), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x288), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x268), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x270), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x250), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 600), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x238), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x240), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x220), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x228), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x208), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x210), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x1f0), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x1f8), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x1d8), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x1e0), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x1c0), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x1c8), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x1a8), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x1b0), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 400), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x198), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x178), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x180), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x160), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x168), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x148), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x150), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x130), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x138), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x118), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x120), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x100), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x108), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0xe8), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0xf0), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0xd0), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0xd8), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0xb8), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0xc0), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0xa0), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0xa8), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x88), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x90), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x70), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x78), 0);
    lVar2 = *(longlong * )(param_1 + 0x60);
    if (lVar2 != 0) {
        FUN_1402ef310(lVar2);
        FUN_14018b900(lVar2, 0);
    }
    lVar2 = *(longlong * )(param_1 + 0x58);
    if (lVar2 != 0) {
        FUN_14018b900(*(undefined8 * )(lVar2 + 0x30), 0, param_3, param_4, unaff_RDI);
        FUN_14018b900(*(undefined8 * )(lVar2 + 0x38), 0);
        FUN_14018b900(*(undefined8 * )(lVar2 + 0x18), 0);
        FUN_14018b900(*(undefined8 * )(lVar2 + 0x20), 0);
        FUN_14018b900(*(undefined8 * )(lVar2 + 8), 0);
        FUN_14018b900(lVar2, 0);
    }
    lVar2 = *(longlong * )(param_1 + 0x50);
    if (lVar2 != 0) {
        FUN_14018b900(*(undefined8 * )(lVar2 + 0x20), 0, param_3, param_4, unaff_RDI);
        FUN_14018b900(*(undefined8 * )(lVar2 + 0x28), 0);
        FUN_14018b900(*(undefined8 * )(lVar2 + 8), 0);
        FUN_14018b900(*(undefined8 * )(lVar2 + 0x10), 0);
        FUN_14018b900(lVar2, 0);
    }
    if (*(longlong * )(param_1 + 0x48) != 0) {
        FUN_1402ef290();
    }
    lVar2 = *(longlong * )(param_1 + 0x40);
    if (lVar2 != 0) {
        FUN_14018b900(*(undefined8 * )(lVar2 + 0x38), 0, param_3, param_4, unaff_RDI);
        FUN_14018b900(*(undefined8 * )(lVar2 + 0x40), 0);
        FUN_14018b900(*(undefined8 * )(lVar2 + 0x20), 0);
        FUN_14018b900(*(undefined8 * )(lVar2 + 0x28), 0);
        FUN_14018b900(*(undefined8 * )(lVar2 + 8), 0);
        FUN_14018b900(*(undefined8 * )(lVar2 + 0x10), 0);
        FUN_14018b900(lVar2, 0);
    }
    lVar2 = *(longlong * )(param_1 + 0x38);
    if (lVar2 != 0) {
        FUN_14018b900(*(undefined8 * )(lVar2 + 0x20), 0);
        FUN_14018b900(*(undefined8 * )(lVar2 + 0x28), 0);
        FUN_14018b900(*(undefined8 * )(lVar2 + 8), 0);
        FUN_14018b900(*(undefined8 * )(lVar2 + 0x10), 0);
        FUN_14018b900(lVar2, 0);
    }
    lVar2 = *(longlong * )(param_1 + 0x30);
    if (lVar2 != 0) {
        FUN_14018b900(*(undefined8 * )(lVar2 + 8), 0);
        FUN_14018b900(lVar2, 0);
    }
    lVar2 = *(longlong * )(param_1 + 0x28);
    if (lVar2 != 0) {
        FUN_14018b900(*(undefined8 * )(lVar2 + 8), 0);
        FUN_14018b900(*(undefined8 * )(lVar2 + 0x10), 0);
        FUN_14018b900(lVar2, 0);
    }
    FUN_14018b900(*(undefined8 * )(param_1 + 0x20), 0);
    return;
}


void FUN_1402eedd0(longlong param_1) {
    undefined8 *puVar1;
    undefined8 *puVar2;
    int iVar3;
    int iVar4;
    int iVar5;

    FUN_14018b900(*(undefined8 * )(param_1 + 0x488), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x490), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x470), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x478), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x458), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x460), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x440), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x448), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x420), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x428), 0);
    iVar5 = 4;
    puVar2 = (undefined8 * )(param_1 + 0x3b8);
    iVar4 = 4;
    iVar3 = 4;
    do {
        puVar1 = puVar2 + -4;
        puVar2 = puVar2 + -3;
        FUN_14018b900(*puVar1, 0);
        FUN_14018b900(*puVar2);
        iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    puVar2 = (undefined8 * )(param_1 + 0x340);
    do {
        puVar1 = puVar2 + -4;
        puVar2 = puVar2 + -3;
        FUN_14018b900(*puVar1, 0);
        FUN_14018b900(*puVar2);
        iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    iVar4 = 4;
    iVar3 = 4;
    puVar2 = (undefined8 * )(param_1 + 0x2c0);
    do {
        puVar1 = puVar2 + -4;
        puVar2 = puVar2 + -3;
        FUN_14018b900(*puVar1, 0);
        FUN_14018b900(*puVar2);
        iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    puVar2 = (undefined8 * )(param_1 + 0x248);
    do {
        puVar1 = puVar2 + -4;
        puVar2 = puVar2 + -3;
        FUN_14018b900(*puVar1, 0);
        FUN_14018b900(*puVar2);
        iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    puVar2 = (undefined8 * )(param_1 + 0x1c8);
    do {
        puVar1 = puVar2 + -4;
        puVar2 = puVar2 + -3;
        FUN_14018b900(*puVar1, 0);
        FUN_14018b900(*puVar2);
        iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    iVar3 = 9;
    puVar2 = (undefined8 * )(param_1 + 0x150);
    do {
        puVar1 = puVar2 + -4;
        puVar2 = puVar2 + -3;
        FUN_14018b900(*puVar1, 0);
        FUN_14018b900(*puVar2);
        iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x38), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x40), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x10), 0);
    return;
}


void FUN_1402eefd0(longlong param_1) {
    FUN_14018b900(*(undefined8 * )(param_1 + 0x110), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x118), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0xf8), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x100), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0xe0), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0xe8), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 200), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0xd0), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0xb0), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0xb8), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x80), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x88), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x68), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x70), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x50), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x58), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x38), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x40), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x20), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x28), 0);
    return;
}


longlong FUN_1402ef290(longlong param_1) {
    FUN_14018b900(*(undefined8 * )(param_1 + 0x50), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x58), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x38), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x40), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x20), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x28), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 8), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x10), 0);
    FUN_14018b900(param_1, 0);
    return param_1;
}


void FUN_1402ef310(longlong param_1) {
    FUN_14018b900(*(undefined8 * )(param_1 + 0x80), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x88), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x68), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x70), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x50), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x58), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x38), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x40), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x20), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x28), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 8), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x10), 0);
    return;
}


undefined8 *FUN_1402ef3b0(undefined8 *param_1, ulonglong param_2) {
    *param_1 = &PTR_FUN_140b64078;
    if ((undefined8 *) param_1[2] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[2] = param_1[3];
    }
    if (param_1[3] != 0) {
        *(undefined8 * )(param_1[3] + 0x10) = param_1[2];
    }
    param_1[2] = 0;
    param_1[3] = 0;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


undefined8 *
FUN_1402ef570(undefined8 *param_1, longlong param_2, undefined8 param_3, ulonglong param_4) {
    undefined8 uVar1;
    longlong *plVar2;
    longlong *plVar3;

    uVar1 = 0;
    *param_1 = &PTR_FUN_140b64078;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[1] = param_2;
    plVar3 = (longlong * )(param_2 + 0x48);
    if (param_1[2] == 0) {
        param_1[2] = plVar3;
        plVar2 = param_1 + 3;
        *plVar2 = *plVar3;
        *plVar3 = (longlong) param_1;
        if (*plVar2 != 0) {
            *(longlong * *)(*plVar2 + 0x10) = plVar2;
        }
    }
    param_1[5] = param_4;
    *param_1 = &PTR_FUN_140b64008;
    if (param_4 != 0) {
        uVar1 = SUB168(ZEXT816(4) * ZEXT816(param_4), 0);
        if (SUB168(ZEXT816(4) * ZEXT816(param_4) >> 0x40, 0) != 0) {
            uVar1 = 0xffffffffffffffff;
        }
        uVar1 = FUN_14018b280(uVar1, 0);
    }
    param_1[4] = uVar1;
    FUN_1407db590(uVar1, param_3, param_1[5] << 2);
    return param_1;
}


undefined8 *FUN_1402ef640(undefined8 *param_1, uint param_2) {
    *param_1 = &PTR_FUN_140b64008;
    FUN_14018b900(param_1[4], 0);
    *param_1 = &PTR_FUN_140b64078;
    if ((undefined8 *) param_1[2] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[2] = param_1[3];
    }
    if (param_1[3] != 0) {
        *(undefined8 * )(param_1[3] + 0x10) = param_1[2];
    }
    param_1[2] = 0;
    param_1[3] = 0;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


undefined8 *
FUN_1402ef6c0(undefined8 *param_1, longlong param_2, undefined8 param_3, ulonglong param_4) {
    undefined8 uVar1;
    longlong *plVar2;
    longlong *plVar3;

    uVar1 = 0;
    *param_1 = &PTR_FUN_140b64078;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[1] = param_2;
    plVar3 = (longlong * )(param_2 + 0x48);
    if (param_1[2] == 0) {
        param_1[2] = plVar3;
        plVar2 = param_1 + 3;
        *plVar2 = *plVar3;
        *plVar3 = (longlong) param_1;
        if (*plVar2 != 0) {
            *(longlong * *)(*plVar2 + 0x10) = plVar2;
        }
    }
    param_1[5] = param_4;
    *param_1 = &PTR_FUN_140b63ff8;
    if (param_4 != 0) {
        uVar1 = SUB168(ZEXT816(4) * ZEXT816(param_4), 0);
        if (SUB168(ZEXT816(4) * ZEXT816(param_4) >> 0x40, 0) != 0) {
            uVar1 = 0xffffffffffffffff;
        }
        uVar1 = FUN_14018b280(uVar1, 0);
    }
    param_1[4] = uVar1;
    FUN_1407db590(uVar1, param_3, param_1[5] << 2);
    return param_1;
}


undefined8 *FUN_1402ef790(undefined8 *param_1, uint param_2) {
    *param_1 = &PTR_FUN_140b63ff8;
    FUN_14018b900(param_1[4], 0);
    *param_1 = &PTR_FUN_140b64078;
    if ((undefined8 *) param_1[2] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[2] = param_1[3];
    }
    if (param_1[3] != 0) {
        *(undefined8 * )(param_1[3] + 0x10) = param_1[2];
    }
    param_1[2] = 0;
    param_1[3] = 0;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


undefined8 *FUN_1402ef950(undefined8 *param_1, uint param_2) {
    *param_1 = &PTR_FUN_140b64028;
    FUN_14018b900(param_1[5], 0);
    *param_1 = &PTR_FUN_140b64078;
    if ((undefined8 *) param_1[2] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[2] = param_1[3];
    }
    if (param_1[3] != 0) {
        *(undefined8 * )(param_1[3] + 0x10) = param_1[2];
    }
    param_1[2] = 0;
    param_1[3] = 0;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_1402ef9d0(undefined8 *param_1) {
    *param_1 = &PTR_FUN_140b64018;
    if ((longlong *) param_1[5] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[5] + 8))();
    }
    *param_1 = &PTR_FUN_140b64078;
    if ((undefined8 *) param_1[2] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[2] = param_1[3];
    }
    if (param_1[3] != 0) {
        *(undefined8 * )(param_1[3] + 0x10) = param_1[2];
    }
    param_1[3] = 0;
    param_1[2] = 0;
    return;
}


undefined8 FUN_1402efa50(undefined8 param_1, ulonglong param_2) {
    FUN_1402ef9d0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


undefined8 *
FUN_1402efa90(undefined8 *param_1, longlong param_2, longlong param_3, longlong param_4,
              longlong param_5, ulonglong param_6) {
    undefined8 uVar1;
    longlong *plVar2;
    longlong *plVar3;

    *param_1 = &PTR_FUN_140b64078;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[1] = param_2;
    plVar3 = (longlong * )(param_2 + 0x48);
    if (param_1[2] == 0) {
        param_1[2] = plVar3;
        plVar2 = param_1 + 3;
        *plVar2 = *plVar3;
        *plVar3 = (longlong) param_1;
        if (*plVar2 != 0) {
            *(longlong * *)(*plVar2 + 0x10) = plVar2;
        }
    }
    param_1[7] = param_6;
    *param_1 = &PTR_LAB_140b63f88;
    if (param_3 == 0) {
        param_1[4] = 0;
    } else {
        uVar1 = SUB168(ZEXT816(4) * ZEXT816(param_6), 0);
        if (SUB168(ZEXT816(4) * ZEXT816(param_6) >> 0x40, 0) != 0) {
            uVar1 = 0xffffffffffffffff;
        }
        uVar1 = FUN_14018b280(uVar1, 0);
        param_1[4] = uVar1;
        FUN_1407db590(uVar1, param_3, param_6 * 4);
    }
    if (param_4 == 0) {
        param_1[5] = 0;
    } else {
        uVar1 = FUN_14018b280(param_6, 0);
        param_1[5] = uVar1;
        FUN_1407db590(uVar1, param_4, param_6);
    }
    if (param_5 == 0) {
        param_1[6] = 0;
    } else {
        uVar1 = FUN_14018b280(param_6, 0);
        param_1[6] = uVar1;
        FUN_1407db590(uVar1, param_5, param_6);
    }
    param_1[7] = param_6;
    return param_1;
}


void FUN_1402efbc0(undefined8 *param_1) {
    *param_1 = &PTR_LAB_140b63f88;
    FUN_14018b900(param_1[4], 0);
    FUN_14018b900(param_1[5], 0);
    FUN_14018b900(param_1[6], 0);
    *param_1 = &PTR_FUN_140b64078;
    if ((undefined8 *) param_1[2] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[2] = param_1[3];
    }
    if (param_1[3] != 0) {
        *(undefined8 * )(param_1[3] + 0x10) = param_1[2];
    }
    param_1[3] = 0;
    param_1[2] = 0;
    return;
}


undefined8 *FUN_1402efca0(undefined8 *param_1, longlong param_2, undefined8 *param_3) {
    longlong *plVar1;
    longlong *plVar2;

    *param_1 = &PTR_FUN_140b64078;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[1] = param_2;
    plVar2 = (longlong * )(param_2 + 0x48);
    if (param_1[2] == 0) {
        param_1[2] = plVar2;
        plVar1 = param_1 + 3;
        *plVar1 = *plVar2;
        *plVar2 = (longlong) param_1;
        if (*plVar1 != 0) {
            *(longlong * *)(*plVar1 + 0x10) = plVar1;
        }
    }
    *param_1 = &PTR_FUN_140b63f78;
    param_1[4] = 0;
    if (param_3 != (undefined8 *) 0x0) {
        (**(code * *) * param_3)(param_3);
        if ((longlong *) param_1[4] != (longlong *) 0x0) {
            (**(code * *)(*(longlong *) param_1[4] + 8))();
        }
        param_1[4] = param_3;
    }
    return param_1;
}


undefined8 *FUN_1402efd50(undefined8 *param_1, ulonglong param_2) {
    if ((longlong *) param_1[4] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[4] + 8))();
    }
    *param_1 = &PTR_FUN_140b64078;
    if ((undefined8 *) param_1[2] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[2] = param_1[3];
    }
    if (param_1[3] != 0) {
        *(undefined8 * )(param_1[3] + 0x10) = param_1[2];
    }
    param_1[2] = 0;
    param_1[3] = 0;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


undefined8 *FUN_1402efdf0(undefined8 *param_1, longlong param_2, undefined8 *param_3) {
    longlong *plVar1;
    longlong *plVar2;

    *param_1 = &PTR_FUN_140b64078;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[1] = param_2;
    plVar2 = (longlong * )(param_2 + 0x48);
    if (param_1[2] == 0) {
        param_1[2] = plVar2;
        plVar1 = param_1 + 3;
        *plVar1 = *plVar2;
        *plVar2 = (longlong) param_1;
        if (*plVar1 != 0) {
            *(longlong * *)(*plVar1 + 0x10) = plVar1;
        }
    }
    *param_1 = &PTR_FUN_140b63fc8;
    FUN_1400b6000(param_1 + 4, 0);
    param_1[4] = *param_3;
    param_1[5] = param_3[1];
    param_1[6] = param_3[2];
    param_1[7] = param_3[3];
    param_1[8] = param_3[4];
    return param_1;
}


undefined8 *FUN_1402efec0(undefined8 *param_1, ulonglong param_2) {
    FUN_140019490(param_1 + 4);
    FUN_14018b900(param_1[6]);
    param_1[6] = 0;
    *param_1 = &PTR_FUN_140b64078;
    if ((undefined8 *) param_1[2] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[2] = param_1[3];
    }
    if (param_1[3] != 0) {
        *(undefined8 * )(param_1[3] + 0x10) = param_1[2];
    }
    param_1[2] = 0;
    param_1[3] = 0;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1);
    }
    return param_1;
}


undefined8 *
FUN_1402eff50(undefined8 *param_1, longlong param_2, undefined4 param_3, undefined8 *param_4,
              undefined4 param_5) {
    longlong *plVar1;
    longlong *plVar2;

    *param_1 = &PTR_FUN_140b64078;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[1] = param_2;
    plVar2 = (longlong * )(param_2 + 0x48);
    if (param_1[2] == 0) {
        param_1[2] = plVar2;
        plVar1 = param_1 + 3;
        *plVar1 = *plVar2;
        *plVar2 = (longlong) param_1;
        if (*plVar1 != 0) {
            *(longlong * *)(*plVar1 + 0x10) = plVar1;
        }
    }
    *param_1 = &PTR_FUN_140b63fb8;
    param_1[5] = 0;
    *(undefined4 * )(param_1 + 4) = param_3;
    *(undefined4 * )((longlong) param_1 + 0x24) = 1;
    if ((undefined8 *) param_1[5] != param_4) {
        if (param_4 != (undefined8 *) 0x0) {
            (**(code * *) * param_4)(param_4);
        }
        if ((longlong *) param_1[5] != (longlong *) 0x0) {
            (**(code * *)(*(longlong *) param_1[5] + 8))();
        }
        param_1[5] = param_4;
    }
    *(undefined4 * )(param_1 + 6) = param_5;
    return param_1;
}


undefined8 *
FUN_1402f0000(undefined8 *param_1, longlong param_2, undefined4 param_3, undefined4 *param_4) {
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    longlong *plVar4;
    longlong *plVar5;

    *param_1 = &PTR_FUN_140b64078;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[1] = param_2;
    plVar5 = (longlong * )(param_2 + 0x48);
    if (param_1[2] == 0) {
        param_1[2] = plVar5;
        plVar4 = param_1 + 3;
        *plVar4 = *plVar5;
        *plVar5 = (longlong) param_1;
        if (*plVar4 != 0) {
            *(longlong * *)(*plVar4 + 0x10) = plVar4;
        }
    }
    *param_1 = &PTR_FUN_140b63fb8;
    param_1[5] = 0;
    *(undefined4 * )(param_1 + 4) = param_3;
    *(undefined4 * )((longlong) param_1 + 0x24) = 2;
    if ((longlong *) param_1[5] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[5] + 8))();
        param_1[5] = 0;
    }
    uVar1 = param_4[1];
    uVar2 = param_4[2];
    uVar3 = param_4[3];
    *(undefined4 * )(param_1 + 8) = *param_4;
    *(undefined4 * )((longlong) param_1 + 0x44) = uVar1;
    *(undefined4 * )(param_1 + 9) = uVar2;
    *(undefined4 * )((longlong) param_1 + 0x4c) = uVar3;
    uVar1 = param_4[5];
    uVar2 = param_4[6];
    uVar3 = param_4[7];
    *(undefined4 * )(param_1 + 10) = param_4[4];
    *(undefined4 * )((longlong) param_1 + 0x54) = uVar1;
    *(undefined4 * )(param_1 + 0xb) = uVar2;
    *(undefined4 * )((longlong) param_1 + 0x5c) = uVar3;
    uVar1 = param_4[9];
    uVar2 = param_4[10];
    uVar3 = param_4[0xb];
    *(undefined4 * )(param_1 + 0xc) = param_4[8];
    *(undefined4 * )((longlong) param_1 + 100) = uVar1;
    *(undefined4 * )(param_1 + 0xd) = uVar2;
    *(undefined4 * )((longlong) param_1 + 0x6c) = uVar3;
    uVar1 = param_4[0xd];
    uVar2 = param_4[0xe];
    uVar3 = param_4[0xf];
    *(undefined4 * )(param_1 + 0xe) = param_4[0xc];
    *(undefined4 * )((longlong) param_1 + 0x74) = uVar1;
    *(undefined4 * )(param_1 + 0xf) = uVar2;
    *(undefined4 * )((longlong) param_1 + 0x7c) = uVar3;
    return param_1;
}


void FUN_1402f00c0(longlong param_1) {
    if (*(int *) (param_1 + 0x24) == 1) {
        (**(code * *)(**(longlong * *)(param_1 + 8) + 0x1f0))
                (*(longlong * *)(param_1 + 8), *(undefined4 * )(param_1 + 0x20),
                 *(undefined8 * )(param_1 + 0x28), *(undefined4 * )(param_1 + 0x30));
        if (*(longlong * *)(param_1 + 0x28) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x28) + 8))();
            *(undefined8 * )(param_1 + 0x28) = 0;
        }
    } else if (*(int *) (param_1 + 0x24) == 2) {
        // WARNING: Could not recover jumptable at 0x0001402f00e7. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code * *)(**(longlong * *)(param_1 + 8) + 0x1e8))
                (*(longlong * *)(param_1 + 8), *(undefined4 * )(param_1 + 0x20), param_1 + 0x40);
        return;
    }
    return;
}


undefined8 *FUN_1402f0130(undefined8 *param_1, ulonglong param_2) {
    if ((longlong *) param_1[5] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[5] + 8))();
    }
    *param_1 = &PTR_FUN_140b64078;
    if ((undefined8 *) param_1[2] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[2] = param_1[3];
    }
    if (param_1[3] != 0) {
        *(undefined8 * )(param_1[3] + 0x10) = param_1[2];
    }
    param_1[2] = 0;
    param_1[3] = 0;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_1402f0230(longlong param_1) {
    (**(code * *)(**(longlong * *)(param_1 + 8) + 0x3f8))
            (*(longlong * *)(param_1 + 8), *(undefined4 * )(param_1 + 0x20),
             *(undefined4 * )(param_1 + 0x24), *(undefined8 * )(param_1 + 0x28),
             *(undefined8 * )(param_1 + 0x30), *(undefined8 * )(param_1 + 0x38));
    return;
}


void FUN_1402f0270(longlong param_1) {
    (**(code * *)(**(longlong * *)(param_1 + 8) + 0x400))
            (*(longlong * *)(param_1 + 8), *(undefined4 * )(param_1 + 0x20),
             *(undefined4 * )(param_1 + 0x24), *(undefined8 * )(param_1 + 0x28),
             *(undefined8 * )(param_1 + 0x30), *(undefined8 * )(param_1 + 0x38));
    return;
}



// WARNING: Type propagation algorithm not settling

void FUN_1402f02e0(longlong *param_1, longlong param_2) {
    float fVar1;
    ushort uVar2;
    uint uVar3;
    longlong lVar4;
    float *pfVar5;
    longlong *plVar6;
    uint uVar7;
    float *pfVar8;
    ulonglong uVar9;
    uint uVar10;
    ulonglong uVar11;
    uint uVar12;
    ulonglong uVar13;
    ulonglong uVar14;
    longlong lVar15;
    float *pfVar16;
    uint *puVar17;
    int iVar18;
    ulonglong uVar19;
    float fVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    float fVar26;
    undefined local_108[32];
    float local_e8[24];
    ulonglong local_88;

    local_88 = DAT_140c0f7b0 ^ (ulonglong) local_108;
    uVar9 = 0;
    param_1[0xd] = 0;
    *(undefined4 * )(param_1 + 0xe) = 0;
    fVar26 = DAT_140c41f64;
    fVar25 = 1.0;
    uVar19 = uVar9;
    if (*(longlong * )(param_2 + 0x370) != 0) {
        do {
            uVar10 = 0;
            uVar14 = uVar9;
            for (lVar15 = *(longlong * )(*(longlong * )(*(longlong * )(param_2 + 0x368) + uVar19 * 8) + 8);
                 lVar15 != 0; lVar15 = *(longlong * )(lVar15 + 0x60)) {
                if (*(longlong * )(lVar15 + 0x20) != 0) {
                    fVar21 = *(float *) (lVar15 + 0x18);
                    fVar23 = *(float *) (*param_1 + 8 + (longlong) * (int *) (lVar15 + 0x10) * 4);
                    if (((uint) * (float *) ((longlong) param_1 + 0x6c) < (uint) fVar23) ||
                        ((*(float *) ((longlong) param_1 + 0x6c) == fVar23 &&
                          ((uint) * (float *) (param_1 + 0xe) < (uint) fVar21)))) {
                        *(float *) ((longlong) param_1 + 0x6c) = fVar23;
                        *(float *) (param_1 + 0xe) = fVar21;
                    }
                    fVar24 = *(float *) (lVar15 + 0x48);
                    uVar10 = (uint) uVar14;
                    uVar11 = uVar9;
                    uVar13 = uVar9;
                    if (3 < (int) uVar10) {
                        pfVar5 = local_e8 + 2;
                        pfVar8 = (float *) ((longlong) local_e8 + 0x14);
                        pfVar16 = (float *) ((longlong) local_e8 + 0x10);
                        do {
                            uVar12 = (uint) uVar13;
                            if (((uint) * pfVar16 < (uint) fVar23) ||
                                (((uint) * pfVar16 <= (uint) fVar23 &&
                                  (((uint) * pfVar8 < (uint) fVar21 ||
                                    (((uint) * pfVar8 <= (uint) fVar21 && (*pfVar5 <= fVar24 && fVar24 != *pfVar5)))))))
                                    )
                                goto LAB_1402f04d0;
                            if (((uint) pfVar16[6] < (uint) fVar23) ||
                                (((uint) pfVar16[6] <= (uint) fVar23 &&
                                  (((uint) pfVar8[6] < (uint) fVar21 ||
                                    (((uint) pfVar8[6] <= (uint) fVar21 && (pfVar5[6] <= fVar24 && fVar24 != pfVar5[6])
                                    ))))))) {
                                uVar12 = uVar12 + 1;
                                goto LAB_1402f04d0;
                            }
                            if (((uint) pfVar16[0xc] < (uint) fVar23) ||
                                (((uint) pfVar16[0xc] <= (uint) fVar23 &&
                                  (((uint) pfVar8[0xc] < (uint) fVar21 ||
                                    (((uint) pfVar8[0xc] <= (uint) fVar21 &&
                                      (pfVar5[0xc] <= fVar24 && fVar24 != pfVar5[0xc])))))))) {
                                uVar12 = uVar12 + 2;
                                goto LAB_1402f04d0;
                            }
                            if (((uint) pfVar16[0x12] < (uint) fVar23) ||
                                (((uint) pfVar16[0x12] <= (uint) fVar23 &&
                                  (((uint) pfVar8[0x12] < (uint) fVar21 ||
                                    (((uint) pfVar8[0x12] <= (uint) fVar21 &&
                                      (pfVar5[0x12] <= fVar24 && fVar24 != pfVar5[0x12])))))))) {
                                uVar12 = uVar12 + 3;
                                goto LAB_1402f04d0;
                            }
                            uVar13 = (ulonglong)(uVar12 + 4);
                            uVar11 = uVar11 + 4;
                            pfVar16 = pfVar16 + 0x18;
                            pfVar8 = pfVar8 + 0x18;
                            pfVar5 = pfVar5 + 0x18;
                        } while (uVar12 + 4 < uVar10 - 3);
                    }
                    uVar12 = (uint) uVar13;
                    if (uVar12 < uVar10) {
                        pfVar5 = local_e8 + uVar11 * 6 + 5;
                        do {
                            uVar12 = (uint) uVar13;
                            if (((uint) pfVar5[-1] < (uint) fVar23) ||
                                (((uint) pfVar5[-1] <= (uint) fVar23 &&
                                  (((uint) * pfVar5 < (uint) fVar21 ||
                                    (((uint) * pfVar5 <= (uint) fVar21 && (pfVar5[-3] <= fVar24 && fVar24 != pfVar5[-3])
                                    )))))))
                                break;
                            uVar12 = uVar12 + 1;
                            uVar13 = (ulonglong) uVar12;
                            pfVar5 = pfVar5 + 6;
                        } while (uVar12 < uVar10);
                    }
                    LAB_1402f04d0:
                    if (uVar12 < 4) {
                        uVar10 = uVar10 + (uVar10 < 4);
                        uVar14 = (ulonglong) uVar10;
                        uVar10 = uVar10 - 1;
                        uVar11 = (ulonglong) uVar10;
                        if (uVar12 < uVar10) {
                            pfVar5 = local_e8 + uVar11 * 6;
                            do {
                                uVar10 = (int) uVar11 - 1;
                                uVar11 = (ulonglong) uVar10;
                                *pfVar5 = local_e8[uVar11 * 6];
                                pfVar5[1] = local_e8[uVar11 * 6 + 1];
                                pfVar5[2] = local_e8[uVar11 * 6 + 2];
                                pfVar5[3] = local_e8[uVar11 * 6 + 3];
                                pfVar5[4] = local_e8[uVar11 * 6 + 4];
                                pfVar5[5] = local_e8[uVar11 * 6 + 5];
                                pfVar5 = pfVar5 + -6;
                            } while (uVar12 < uVar10);
                        }
                        uVar11 = (ulonglong) uVar12;
                        local_e8[uVar11 * 6] = *(float *) (lVar15 + 0x40);
                        lVar4 = *(longlong * )(lVar15 + 0x20);
                        local_e8[uVar11 * 6 + 4] = fVar23;
                        local_e8[uVar11 * 6 + 2] = fVar24;
                        uVar2 = *(ushort * )(lVar4 + 2);
                        local_e8[uVar11 * 6 + 5] = fVar21;
                        local_e8[uVar11 * 6 + 3] = (float) (uint) uVar2;
                    }
                }
                uVar10 = (uint) uVar14;
            }
            fVar21 = 1.0;
            if (uVar10 != 0) {
                puVar17 = (uint * )((longlong) local_e8 + 0x14);
                uVar14 = uVar9;
                do {
                    fVar23 = (float) puVar17[-3];
                    uVar12 = *(uint * )(param_1 + 0xd);
                    puVar17[-4] = (uint)(fVar23 / fVar21);
                    uVar7 = 0;
                    if (uVar12 == 0) {
                        LAB_1402f05f6:
                        iVar18 = uVar12 + (uVar12 < 4);
                        *(int *) (param_1 + 0xd) = iVar18;
                        uVar12 = iVar18 - 1;
                        uVar11 = (ulonglong) uVar12;
                        if (uVar7 < uVar12) {
                            plVar6 = param_1 + uVar11 * 3 + 1;
                            do {
                                uVar12 = (int) uVar11 - 1;
                                uVar11 = (ulonglong) uVar12;
                                *(undefined4 *) plVar6 = *(undefined4 * )(param_1 + uVar11 * 3 + 1);
                                *(undefined4 * )((longlong) plVar6 + 4) =
                                        *(undefined4 * )((longlong) param_1 + uVar11 * 0x18 + 0xc);
                                *(undefined4 * )(plVar6 + 1) = *(undefined4 * )(param_1 + uVar11 * 3 + 2);
                                *(undefined4 * )((longlong) plVar6 + 0xc) =
                                        *(undefined4 * )((longlong) param_1 + uVar11 * 0x18 + 0x14);
                                *(undefined4 * )(plVar6 + 2) = *(undefined4 * )(param_1 + uVar11 * 3 + 3);
                                *(undefined4 * )((longlong) plVar6 + 0x14) =
                                        *(undefined4 * )((longlong) param_1 + uVar11 * 0x18 + 0x1c);
                                plVar6 = plVar6 + -3;
                            } while (uVar7 < uVar12);
                        }
                        uVar11 = (ulonglong) uVar7;
                        *(uint * )(param_1 + uVar11 * 3 + 1) = puVar17[-5];
                        *(uint * )((longlong) param_1 + uVar11 * 0x18 + 0xc) = puVar17[-4];
                        *(uint * )(param_1 + uVar11 * 3 + 2) = puVar17[-3];
                        *(uint * )((longlong) param_1 + uVar11 * 0x18 + 0x14) = puVar17[-2];
                        *(uint * )(param_1 + uVar11 * 3 + 3) = puVar17[-1];
                        *(uint * )((longlong) param_1 + uVar11 * 0x18 + 0x1c) = *puVar17;
                    } else {
                        uVar11 = uVar9;
                        do {
                            uVar7 = (uint) uVar11;
                            if ((*(uint * )(param_1 + uVar11 * 3 + 3) < puVar17[-1]) ||
                                ((*(uint * )(param_1 + uVar11 * 3 + 3) <= puVar17[-1] &&
                                  ((uVar3 = *(uint * )((longlong) param_1 + uVar11 * 0x18 + 0x1c), uVar3 < *puVar17 ||
                                                                                                   ((uVar3 <=
                                                                                                     *puVar17 &&
                                                                                                     (*(float *) (
                                                                                                             param_1 +
                                                                                                             uVar11 *
                                                                                                             3 + 2) <=
                                                                                                      fVar23 &&
                                                                                                      fVar23 !=
                                                                                                      *(float *) (
                                                                                                              param_1 +
                                                                                                              uVar11 *
                                                                                                              3 +
                                                                                                              2)))))))))
                                break;
                            uVar7 = uVar7 + 1;
                            uVar11 = (ulonglong) uVar7;
                        } while (uVar7 < uVar12);
                        if (uVar7 < 4) goto LAB_1402f05f6;
                    }
                    fVar21 = fVar21 - fVar23;
                    if (fVar21 < fVar26) break;
                    uVar12 = (int) uVar14 + 1;
                    uVar14 = (ulonglong) uVar12;
                    puVar17 = puVar17 + 6;
                } while (uVar12 < uVar10);
            }
            uVar19 = uVar19 + 1;
        } while (uVar19 < *(ulonglong * )(param_2 + 0x370));
    }
    fVar24 = 1e-05;
    fVar21 = 1.0;
    fVar23 = 0.0;
    uVar19 = uVar9;
    if (*(int *) (param_1 + 0xd) != 0) {
        do {
            uVar12 = (uint) uVar19;
            fVar22 = 0.0;
            fVar20 = 0.0;
            uVar14 = uVar19;
            uVar10 = uVar12;
            if (uVar12 < *(uint * )(param_1 + 0xd)) {
                do {
                    uVar10 = (uint) uVar14;
                    if ((*(int *) (param_1 + uVar14 * 3 + 3) != *(int *) (param_1 + uVar19 * 3 + 3)) ||
                        (*(int *) ((longlong) param_1 + uVar14 * 0x18 + 0x1c) !=
                         *(int *) ((longlong) param_1 + uVar19 * 0x18 + 0x1c)))
                        break;
                    fVar1 = *(float *) ((longlong) param_1 + uVar14 * 0x18 + 0xc);
                    if (fVar22 < fVar1) {
                        fVar22 = fVar1;
                    }
                    fVar20 = fVar20 + *(float *) (param_1 + uVar14 * 3 + 2);
                    uVar10 = uVar10 + 1;
                    uVar14 = (ulonglong) uVar10;
                } while (uVar10 < *(uint * )(param_1 + 0xd));
                if (1e-05 <= fVar20) {
                    fVar20 = (fVar22 * fVar21) / fVar20;
                    if (uVar12 < uVar10) {
                        if (3 < (int) (uVar10 - uVar12)) {
                            lVar15 = uVar19 * 3;
                            uVar7 = ((uVar10 - uVar12) - 4 >> 2) + 1;
                            uVar14 = (ulonglong) uVar7;
                            uVar12 = uVar12 + uVar7 * 4;
                            uVar19 = uVar19 + (ulonglong) uVar7 * 4;
                            plVar6 = param_1 + lVar15 + 5;
                            do {
                                *(float *) (plVar6 + -3) = fVar20 * *(float *) (plVar6 + -3);
                                *(float *) plVar6 = fVar20 * *(float *) plVar6;
                                *(float *) (plVar6 + 3) = fVar20 * *(float *) (plVar6 + 3);
                                *(float *) (plVar6 + 6) = fVar20 * *(float *) (plVar6 + 6);
                                uVar14 = uVar14 - 1;
                                plVar6 = plVar6 + 0xc;
                            } while (uVar14 != 0);
                        }
                        if (uVar12 < uVar10) {
                            lVar15 = (longlong)(int)(uVar10 - uVar12);
                            plVar6 = param_1 + uVar19 * 3 + 2;
                            do {
                                *(float *) plVar6 = fVar20 * *(float *) plVar6;
                                lVar15 = lVar15 + -1;
                                plVar6 = plVar6 + 3;
                            } while (lVar15 != 0);
                        }
                    }
                    fVar21 = fVar21 * (1.0 - fVar22);
                }
            }
            uVar19 = (ulonglong) uVar10;
        } while (uVar10 < *(uint * )(param_1 + 0xd));
    }
    if (*(int *) (param_1 + 0xd) != 0) {
        fVar21 = 1.0;
        uVar19 = uVar9;
        if (*(int *) (param_1 + 0xd) != 1) {
            do {
                fVar22 = *(float *) (param_1 + uVar19 * 3 + 2) / fVar21;
                fVar21 = fVar21 - *(float *) (param_1 + uVar19 * 3 + 2);
                *(float *) ((longlong) param_1 + uVar19 * 0x18 + 0xc) = fVar22;
                if (fVar21 < fVar26) {
                    *(int *) (param_1 + 0xd) = (int) uVar19 + 1;
                    break;
                }
                uVar10 = (int) uVar19 + 1;
                uVar19 = (ulonglong) uVar10;
            } while (uVar10 < *(int *) (param_1 + 0xd) - 1U);
        }
        *(undefined4 * )((longlong) param_1 + (ulonglong)(*(int *) (param_1 + 0xd) - 1) * 0x18 + 0xc) =
                0x3f800000;
    }
    if (((*(int *) (param_2 + 0x388) != 0) && ((*(byte * )(*param_1 + 4) & 0x78) != 0)) &&
        (fVar21 = 0.0, uVar19 = uVar9, *(int *) (param_2 + 0x388) != 0)) {
        do {
            uVar10 = **(uint * *)(param_2 + 0x390 + uVar19 * 8);
            uVar14 = (ulonglong) uVar10;
            if ((*(uint * )(*param_1 + 4) & 8 << ((byte) uVar10 & 0x1f)) == 0) {
                *(undefined4 * )((longlong) param_1 + uVar14 * 0x14 + 0xb8) = 0;
            } else if (*(int *) (*(longlong * )(param_2 + 0x40) + uVar14 * 0x18 + 0x20) == 0) {
                *(undefined4 * )((longlong) param_1 + uVar14 * 0x14 + 0xb8) = 0;
            } else {
                FUN_140306730();
                fVar22 = *(float *) ((longlong) param_1 + uVar14 * 0x14 + 0xb8);
                if (fVar24 <= fVar22) {
                    fVar23 = fVar23 + fVar22;
                    if (fVar21 < fVar22) {
                        fVar21 = fVar22;
                    }
                } else {
                    *(undefined4 * )((longlong) param_1 + uVar14 * 0x14 + 0xb8) = 0;
                }
            }
            uVar10 = (int) uVar19 + 1;
            uVar19 = (ulonglong) uVar10;
        } while (uVar10 < *(uint * )(param_2 + 0x388));
        if (fVar24 < fVar21) {
            if (fVar25 <= fVar23) {
                uVar19 = uVar9;
                if (*(int *) (param_2 + 0x388) != 0) {
                    do {
                        uVar10 = (int) uVar19 + 1;
                        uVar19 = (ulonglong) * *(uint * *)(param_2 + 0x390 + uVar19 * 8);
                        *(float *) ((longlong) param_1 + uVar19 * 0x14 + 0xb8) =
                                (fVar25 / fVar23) * *(float *) ((longlong) param_1 + uVar19 * 0x14 + 0xb8);
                        uVar19 = (ulonglong) uVar10;
                    } while (uVar10 < *(uint * )(param_2 + 0x388));
                }
                *(undefined4 * )(param_1 + 0xd) = 0;
            } else {
                uVar19 = uVar9;
                if (*(int *) (param_1 + 0xd) != 0) {
                    do {
                        uVar10 = (int) uVar19 + 1;
                        *(float *) (param_1 + uVar19 * 3 + 2) =
                                (fVar25 - fVar23) * *(float *) (param_1 + uVar19 * 3 + 2);
                        uVar19 = (ulonglong) uVar10;
                    } while (uVar10 < *(uint * )(param_1 + 0xd));
                }
            }
            uVar19 = uVar9;
            if (*(int *) (param_2 + 0x388) != 0) {
                do {
                    puVar17 = *(uint * *)(param_2 + 0x390 + uVar19 * 8);
                    fVar21 = *(float *) ((longlong) param_1 + (ulonglong) * puVar17 * 0x14 + 0xb8);
                    if (fVar24 <= fVar21) {
                        for (lVar15 = *(longlong * )(puVar17 + 2); lVar15 != 0;
                             lVar15 = *(longlong * )(lVar15 + 0x60)) {
                            if ((*(longlong * )(lVar15 + 0x20) != 0) && (fVar24 <= *(float *) (lVar15 + 0x48))) {
                                uVar10 = *(uint * )(param_1 + 0xd);
                                fVar23 = *(float *) (lVar15 + 0x48) * fVar21;
                                uVar14 = uVar9;
                                uVar12 = 0;
                                if (uVar10 != 0) {
                                    do {
                                        uVar12 = (uint) uVar14;
                                        if (*(float *) (param_1 + uVar14 * 3 + 2) <= fVar23 &&
                                            fVar23 != *(float *) (param_1 + uVar14 * 3 + 2))
                                            break;
                                        uVar12 = uVar12 + 1;
                                        uVar14 = (ulonglong) uVar12;
                                    } while (uVar12 < uVar10);
                                    if (3 < uVar12) goto LAB_1402f0b25;
                                }
                                iVar18 = uVar10 + (uVar10 < 4);
                                *(int *) (param_1 + 0xd) = iVar18;
                                uVar10 = iVar18 - 1;
                                uVar14 = (ulonglong) uVar10;
                                if (uVar12 < uVar10) {
                                    plVar6 = param_1 + uVar14 * 3 + 1;
                                    do {
                                        uVar10 = (int) uVar14 - 1;
                                        uVar14 = (ulonglong) uVar10;
                                        *(undefined4 *) plVar6 = *(undefined4 * )(param_1 + uVar14 * 3 + 1);
                                        *(undefined4 * )((longlong) plVar6 + 4) =
                                                *(undefined4 * )((longlong) param_1 + uVar14 * 0x18 + 0xc);
                                        *(undefined4 * )(plVar6 + 1) = *(undefined4 * )(param_1 + uVar14 * 3 + 2);
                                        *(undefined4 * )((longlong) plVar6 + 0xc) =
                                                *(undefined4 * )((longlong) param_1 + uVar14 * 0x18 + 0x14);
                                        *(undefined4 * )(plVar6 + 2) = *(undefined4 * )(param_1 + uVar14 * 3 + 3);
                                        *(undefined4 * )((longlong) plVar6 + 0x14) =
                                                *(undefined4 * )((longlong) param_1 + uVar14 * 0x18 + 0x1c);
                                        plVar6 = plVar6 + -3;
                                    } while (uVar12 < uVar10);
                                }
                                uVar14 = (ulonglong) uVar12;
                                *(undefined4 * )(param_1 + uVar14 * 3 + 1) = *(undefined4 * )(lVar15 + 0x40);
                                param_1[uVar14 * 3 + 3] = 0;
                                *(float *) (param_1 + uVar14 * 3 + 2) = fVar23;
                                *(uint * )((longlong) param_1 + uVar14 * 0x18 + 0x14) =
                                        (uint) * (ushort * )(*(longlong * )(lVar15 + 0x20) + 2);
                            }
                            LAB_1402f0b25:
                        }
                    }
                    uVar10 = (int) uVar19 + 1;
                    uVar19 = (ulonglong) uVar10;
                } while (uVar10 < *(uint * )(param_2 + 0x388));
            }
            if (*(int *) (param_1 + 0xd) != 0) {
                if (*(int *) (param_1 + 0xd) != 1) {
                    do {
                        fVar21 = *(float *) (param_1 + uVar9 * 3 + 2) / fVar25;
                        fVar25 = fVar25 - *(float *) (param_1 + uVar9 * 3 + 2);
                        *(float *) ((longlong) param_1 + uVar9 * 0x18 + 0xc) = fVar21;
                        if (fVar25 < fVar26) {
                            *(int *) (param_1 + 0xd) = (int) uVar9 + 1;
                            break;
                        }
                        uVar10 = (int) uVar9 + 1;
                        uVar9 = (ulonglong) uVar10;
                    } while (uVar10 < *(int *) (param_1 + 0xd) - 1U);
                }
                *(undefined4 * )((longlong) param_1 + (ulonglong)(*(int *) (param_1 + 0xd) - 1) * 0x18 + 0xc) =
                        0x3f800000;
            }
        }
    }
    if (*(int *) (param_1 + 0xd) == 0) {
        *(undefined4 * )(param_1 + 1) = 0;
        *(undefined4 * )((longlong) param_1 + 0xc) = 0x3f800000;
        param_1[2] = 0x3f800000;
        param_1[0xd] = 1;
        *(undefined4 * )(param_1 + 0xe) = 0;
    }
    FUN_1407db4f0(local_88 ^ (ulonglong) local_108);
    return;
}


void FUN_1402f0c90(longlong *param_1, longlong param_2) {
    float fVar1;
    float fVar2;
    uint uVar3;
    longlong lVar4;
    float *pfVar5;
    uint *puVar6;
    longlong *plVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    uint uVar11;
    ulonglong uVar12;
    ulonglong uVar13;
    uint uVar14;
    ulonglong uVar15;
    uint *puVar16;
    int iVar17;
    uint uVar18;
    uint *puVar19;
    longlong lVar20;
    longlong lVar21;
    uint **ppuVar22;
    float fVar23;
    float fVar24;
    undefined local_198[32];
    uint local_178[4];
    undefined4 local_168;
    undefined4 local_164;
    undefined4 local_160;
    undefined4 local_15c;
    uint local_158[2];
    float local_150;
    uint local_14c;
    float local_148;
    uint local_144[59];
    ulonglong local_58;

    local_58 = DAT_140c0f7b0 ^ (ulonglong) local_198;
    uVar9 = 0;
    fVar24 = 1e-05;
    uVar13 = uVar9;
    if (((*(int *) (param_2 + 0x388) != 0) && (uVar13 = 0, (*(uint * )(*param_1 + 4) & 0x780) != 0)) &&
        (uVar8 = uVar9, uVar12 = uVar9, *(int *) (param_2 + 0x388) != 0)) {
        do {
            uVar13 = uVar8;
            puVar19 = *(uint * *)(param_2 + 0x390 + uVar12 * 8);
            uVar11 = *puVar19;
            if ((*(uint * )(*param_1 + 4) & 0x80 << ((byte) uVar11 & 0x1f)) != 0) {
                if (*(int *) (*(longlong * )(param_2 + 0x40) + ((ulonglong) uVar11 + 6) * 0x18) != 0) {
                    FUN_140306730(*(longlong * )(param_2 + 0x40) + ((ulonglong) uVar11 + 6) * 0x18,
                                  (ulonglong) uVar11 * 0x14 + 0x108 + (longlong) param_1);
                    fVar1 = *(float *) ((longlong) param_1 + (ulonglong) * puVar19 * 0x14 + 0x108);
                    if (fVar24 <= fVar1) {
                        uVar8 = uVar9;
                        for (lVar21 = *(longlong * )(puVar19 + 4); lVar21 != 0;
                             lVar21 = *(longlong * )(lVar21 + 0x58)) {
                            if (((*(longlong * )(lVar21 + 0x20) != 0) &&
                                 (fVar24 < *(float *) (lVar21 + 0x10) || fVar24 == *(float *) (lVar21 + 0x10))) &&
                                (fVar23 = fVar1 * *(float *) (lVar21 + 0x4c), fVar24 <= fVar23)) {
                                uVar11 = (uint) uVar13;
                                uVar10 = uVar9;
                                uVar15 = uVar9;
                                if (3 < (int) uVar11) {
                                    pfVar5 = &local_148;
                                    do {
                                        uVar14 = (uint) uVar15;
                                        if (*pfVar5 <= fVar23 && fVar23 != *pfVar5) goto LAB_1402f0e29;
                                        if (pfVar5[8] <= fVar23 && fVar23 != pfVar5[8]) {
                                            uVar14 = uVar14 + 1;
                                            goto LAB_1402f0e29;
                                        }
                                        if (pfVar5[0x10] <= fVar23 && fVar23 != pfVar5[0x10]) {
                                            uVar14 = uVar14 + 2;
                                            goto LAB_1402f0e29;
                                        }
                                        if (pfVar5[0x18] <= fVar23 && fVar23 != pfVar5[0x18]) {
                                            uVar14 = uVar14 + 3;
                                            goto LAB_1402f0e29;
                                        }
                                        uVar15 = (ulonglong)(uVar14 + 4);
                                        uVar10 = uVar10 + 4;
                                        pfVar5 = pfVar5 + 0x20;
                                    } while (uVar14 + 4 < uVar11 - 3);
                                }
                                uVar14 = (uint) uVar15;
                                if (uVar14 < uVar11) {
                                    pfVar5 = &local_148 + uVar10 * 8;
                                    do {
                                        uVar14 = (uint) uVar15;
                                        if (*pfVar5 <= fVar23 && fVar23 != *pfVar5) break;
                                        uVar14 = uVar14 + 1;
                                        uVar15 = (ulonglong) uVar14;
                                        pfVar5 = pfVar5 + 8;
                                    } while (uVar14 < uVar11);
                                }
                                LAB_1402f0e29:
                                if (uVar14 < 8) {
                                    uVar11 = uVar11 + (uVar11 < 8);
                                    uVar13 = (ulonglong) uVar11;
                                    uVar11 = uVar11 - 1;
                                    uVar10 = (ulonglong) uVar11;
                                    if (uVar14 < uVar11) {
                                        puVar6 = local_158 + uVar10 * 8;
                                        do {
                                            uVar11 = (int) uVar10 - 1;
                                            uVar10 = (ulonglong) uVar11;
                                            *puVar6 = local_158[uVar10 * 8];
                                            puVar6[1] = local_158[uVar10 * 8 + 1];
                                            puVar6[2] = (uint)(&local_150)[uVar10 * 8];
                                            puVar6[3] = (&local_14c)[uVar10 * 8];
                                            puVar6[4] = (uint)(&local_148)[uVar10 * 8];
                                            puVar6[5] = local_144[uVar10 * 8];
                                            puVar6[6] = local_144[uVar10 * 8 + 1];
                                            puVar6[7] = local_144[uVar10 * 8 + 2];
                                            puVar6 = puVar6 + -8;
                                        } while (uVar14 < uVar11);
                                    }
                                    uVar10 = (ulonglong) uVar14;
                                    local_158[uVar10 * 8] = *(uint * )(lVar21 + 0x44);
                                    local_158[uVar10 * 8 + 1] = *(uint * )(lVar21 + 0x2c);
                                    fVar2 = *(float *) (lVar21 + 0x10);
                                    (&local_14c)[uVar10 * 8] = 0;
                                    (&local_148)[uVar10 * 8] = fVar23;
                                    (&local_150)[uVar10 * 8] = fVar2;
                                    local_144[uVar10 * 8] = 1;
                                    local_144[uVar10 * 8 + 1] = *puVar19;
                                    local_144[uVar10 * 8 + 2] = (uint) uVar8;
                                }
                                uVar8 = (ulonglong)((uint) uVar8 + 1);
                            }
                        }
                    }
                }
            }
            uVar11 = (int) uVar12 + 1;
            uVar8 = uVar13;
            uVar12 = (ulonglong) uVar11;
        } while (uVar11 < *(uint * )(param_2 + 0x388));
    }
    uVar11 = (uint) uVar13;
    lVar21 = *(longlong * )(param_2 + 0x370);
    if (lVar21 != 0) {
        ppuVar22 = *(uint * **)(param_2 + 0x368);
        do {
            puVar19 = *ppuVar22;
            uVar14 = 0;
            for (lVar4 = *(longlong * )(puVar19 + 4); uVar11 = (uint) uVar13, lVar4 != 0;
                 lVar4 = *(longlong * )(lVar4 + 0x58)) {
                if (((*(longlong * )(lVar4 + 0x20) != 0) &&
                     (fVar24 < *(float *) (lVar4 + 0x10) || fVar24 == *(float *) (lVar4 + 0x10))) &&
                    ((fVar1 = *(float *) (lVar4 + 0x4c), fVar24 <= fVar1 &&
                                                         ((uVar3 = *(uint * )(*param_1 + 8 +
                                                                              (longlong) * (int *) (lVar4 + 0x18) * 4),
                                                                 *(int *) (lVar4 + 0x18) == 0 || (uVar3 != 0)))))) {
                    uVar9 = 0;
                    lVar20 = 0;
                    if (3 < (int) uVar11) {
                        pfVar5 = &local_148;
                        puVar6 = &local_14c;
                        puVar16 = local_144;
                        do {
                            if ((*puVar16 == 0) &&
                                ((*puVar6 < uVar3 || ((*puVar6 <= uVar3 && (*pfVar5 <= fVar1 && fVar1 != *pfVar5)))
                                )))
                                goto LAB_1402f104b;
                            iVar17 = (int) uVar9;
                            if ((puVar16[8] == 0) &&
                                ((puVar6[8] < uVar3 ||
                                  ((puVar6[8] <= uVar3 && (pfVar5[8] <= fVar1 && fVar1 != pfVar5[8])))))) {
                                uVar9 = (ulonglong)(iVar17 + 1);
                                goto LAB_1402f104b;
                            }
                            if ((puVar16[0x10] == 0) &&
                                ((puVar6[0x10] < uVar3 ||
                                  ((puVar6[0x10] <= uVar3 && (pfVar5[0x10] <= fVar1 && fVar1 != pfVar5[0x10])))))) {
                                uVar9 = (ulonglong)(iVar17 + 2);
                                goto LAB_1402f104b;
                            }
                            if ((puVar16[0x18] == 0) &&
                                ((puVar6[0x18] < uVar3 ||
                                  ((puVar6[0x18] <= uVar3 && (pfVar5[0x18] <= fVar1 && fVar1 != pfVar5[0x18])))))) {
                                uVar9 = (ulonglong)(iVar17 + 3);
                                goto LAB_1402f104b;
                            }
                            uVar9 = (ulonglong)(iVar17 + 4U);
                            lVar20 = lVar20 + 4;
                            puVar16 = puVar16 + 0x20;
                            puVar6 = puVar6 + 0x20;
                            pfVar5 = pfVar5 + 0x20;
                        } while (iVar17 + 4U < uVar11 - 3);
                    }
                    if ((uint) uVar9 < uVar11) {
                        puVar6 = &local_14c + lVar20 * 8;
                        do {
                            if ((puVar6[2] == 0) &&
                                ((*puVar6 < uVar3 ||
                                  ((*puVar6 <= uVar3 && ((float) puVar6[1] <= fVar1 && fVar1 != (float) puVar6[1])))))
                                    )
                                break;
                            uVar18 = (int) uVar9 + 1;
                            uVar9 = (ulonglong) uVar18;
                            puVar6 = puVar6 + 8;
                        } while (uVar18 < uVar11);
                    }
                    LAB_1402f104b:
                    uVar18 = (uint) uVar9;
                    if (uVar18 < 8) {
                        uVar11 = uVar11 + (uVar11 < 8);
                        uVar13 = (ulonglong) uVar11;
                        uVar11 = uVar11 - 1;
                        if (uVar18 < uVar11) {
                            puVar6 = local_158 + (ulonglong) uVar11 * 8;
                            do {
                                uVar11 = uVar11 - 1;
                                uVar8 = (ulonglong) uVar11;
                                *puVar6 = local_158[uVar8 * 8];
                                puVar6[1] = local_158[uVar8 * 8 + 1];
                                puVar6[2] = (uint)(&local_150)[uVar8 * 8];
                                puVar6[3] = (&local_14c)[uVar8 * 8];
                                puVar6[4] = (uint)(&local_148)[uVar8 * 8];
                                puVar6[5] = local_144[uVar8 * 8];
                                puVar6[6] = local_144[uVar8 * 8 + 1];
                                puVar6[7] = local_144[uVar8 * 8 + 2];
                                puVar6 = puVar6 + -8;
                            } while (uVar18 < uVar11);
                        }
                        local_158[uVar9 * 8] = *(uint * )(lVar4 + 0x44);
                        local_158[uVar9 * 8 + 1] = *(uint * )(lVar4 + 0x2c);
                        fVar23 = *(float *) (lVar4 + 0x10);
                        (&local_14c)[uVar9 * 8] = uVar3;
                        (&local_148)[uVar9 * 8] = fVar1;
                        (&local_150)[uVar9 * 8] = fVar23;
                        local_144[uVar9 * 8] = 0;
                        local_144[uVar9 * 8 + 1] = *puVar19;
                        local_144[uVar9 * 8 + 2] = uVar14;
                    }
                    uVar14 = uVar14 + 1;
                }
            }
            ppuVar22 = ppuVar22 + 1;
            lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
    }
    *(uint * )((longlong) param_1 + 0xb4) = uVar11;
    if (uVar11 != 0) {
        local_178[0] = 0;
        local_178[1] = 1;
        local_178[2] = 2;
        local_178[3] = 3;
        local_168 = 4;
        local_164 = 5;
        local_160 = 6;
        local_15c = 7;
        uVar13 = (ulonglong) uVar11;
        FUN_1401c3280();
        *(undefined4 * )((longlong) param_1 + 0xb4) = 0;
        if (uVar11 != 0) {
            puVar19 = local_178;
            do {
                uVar8 = (ulonglong) * puVar19;
                uVar9 = (ulonglong) * (uint * )(param_1 + 0xd);
                fVar24 = 1.0;
                if (*(uint * )(param_1 + 0xd) != 0) {
                    plVar7 = param_1 + 2;
                    do {
                        if (((uint) * (float *) ((longlong) plVar7 + 4) & local_158[uVar8 * 8 + 1]) != 0) {
                            fVar24 = fVar24 - *(float *) plVar7;
                        }
                        plVar7 = plVar7 + 3;
                        uVar9 = uVar9 - 1;
                    } while (uVar9 != 0);
                }
                if (fVar24 <= 0.0) {
                    fVar24 = 0.0;
                }
                fVar24 = (&local_148)[uVar8 * 8] * (&local_150)[uVar8 * 8] * fVar24;
                if (1e-05 < fVar24) {
                    *(uint * )((longlong) param_1 + (ulonglong) * (uint * )((longlong) param_1 + 0xb4) * 8 + 0x74) =
                            local_158[uVar8 * 8];
                    *(float *) (param_1 + (ulonglong) * (uint * )((longlong) param_1 + 0xb4) + 0xf) = fVar24;
                    *(int *) ((longlong) param_1 + 0xb4) = *(int *) ((longlong) param_1 + 0xb4) + 1;
                }
                puVar19 = puVar19 + 1;
                uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
        }
    }
    FUN_1407db4f0(local_58 ^ (ulonglong) local_198);
    return;
}


ulonglong FUN_1402f12b0(longlong *param_1, longlong *param_2) {
    ushort uVar1;
    ushort uVar2;

    if (*(uint * )(&DAT_140b63ef8 + (ulonglong) * (ushort * )(*param_2 + 6) * 4) <=
        *(uint * )(&DAT_140b63ef8 + (ulonglong) * (ushort * )(*param_1 + 6) * 4)) {
        if (*(uint * )(&DAT_140b63ef8 + (ulonglong) * (ushort * )(*param_2 + 6) * 4) <
            *(uint * )(&DAT_140b63ef8 + (ulonglong) * (ushort * )(*param_1 + 6) * 4)) {
            return 1;
        }
        uVar1 = *(ushort * )(*param_1 + 8);
        uVar2 = *(ushort * )(*param_2 + 8);
        if (uVar1 <= uVar2) {
            return (ulonglong)(uVar1 < uVar2);
        }
    }
    return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *FUN_1402f1300(undefined8 *param_1) {
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;

    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined4 * )(param_1 + 3) = 0;
    *(undefined4 * )(param_1 + 4) = 0x3f800000;
    *(undefined4 * )((longlong) param_1 + 0x24) = 0x3f800000;
    *(undefined4 * )(param_1 + 5) = 0x3f800000;
    *(undefined4 * )((longlong) param_1 + 0x2c) = 0x3f800000;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *(undefined4 * )(param_1 + 0xc) = 0x3f800000;
    *(undefined4 * )((longlong) param_1 + 100) = 0x3f800000;
    *(undefined4 * )(param_1 + 0xd) = 0x3f800000;
    *(undefined4 * )((longlong) param_1 + 0x6c) = 0x3f800000;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    uVar3 = uRam0000000140c7845c;
    uVar2 = uRam0000000140c78458;
    uVar1 = uRam0000000140c78454;
    *(undefined4 * )(param_1 + 0x14) = _DAT_140c78450;
    *(undefined4 * )((longlong) param_1 + 0xa4) = uVar1;
    *(undefined4 * )(param_1 + 0x15) = uVar2;
    *(undefined4 * )((longlong) param_1 + 0xac) = uVar3;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    *(undefined(*)[16])(param_1 + 0x1c) = ZEXT816(0);
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    return param_1;
}


void FUN_1402f13d0(longlong param_1) {
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;

    fVar4 = *(float *) (param_1 + 0xa0);
    fVar5 = *(float *) (param_1 + 0xa4);
    fVar6 = *(float *) (param_1 + 0xac);
    fVar7 = fVar5 * 2.0;
    fVar9 = fVar6 * fVar4 * 2.0;
    fVar8 = 1.0 - fVar4 * fVar4 * 2.0;
    fVar1 = *(float *) (param_1 + 0x24);
    fVar2 = *(float *) (param_1 + 0x20);
    fVar3 = *(float *) (param_1 + 0x28);
    *(undefined(*)[16])(param_1 + 0x120) =
            CONCAT412(fVar2 * 0.0,
                      CONCAT48(fVar2 * (fVar4 * 0.0 - fVar6 * fVar7),
                               CONCAT44(fVar2 * (fVar4 * fVar7 + fVar6 * 0.0),
                                        fVar2 * ((1.0 - fVar5 * fVar7) - 0.0))));
    *(undefined(*)[16])(param_1 + 0x130) =
            CONCAT412(fVar1 * 0.0,
                      CONCAT48(fVar1 * (fVar5 * 0.0 + fVar9),
                               CONCAT44(fVar1 * (fVar8 - 0.0), fVar1 * (fVar4 * fVar7 - fVar6 * 0.0))));
    *(undefined(*)[16])(param_1 + 0x140) =
            CONCAT412(fVar3 * 0.0,
                      CONCAT48(fVar3 * (fVar8 - fVar5 * fVar7),
                               CONCAT44(fVar3 * (fVar5 * 0.0 - fVar9),
                                        fVar3 * (fVar4 * 0.0 + fVar6 * fVar7))));
    *(undefined4 * )(param_1 + 0x150) = *(undefined4 * )(param_1 + 0xe0);
    *(undefined4 * )(param_1 + 0x154) = *(undefined4 * )(param_1 + 0xe4);
    *(undefined4 * )(param_1 + 0x158) = *(undefined4 * )(param_1 + 0xe8);
    *(undefined4 * )(param_1 + 0x15c) = 0x3f800000;
    *(undefined4 * )(param_1 + 0x18) = 1;
    return;
}


void FUN_1402f15d0(longlong param_1) {
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 *puVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    undefined local_88[16];
    undefined local_78[16];
    undefined local_68[16];
    undefined local_58[16];
    undefined4 local_48;
    undefined4 uStack68;
    undefined4 uStack64;
    undefined4 uStack60;

    local_78 = *(undefined(*)[16])(param_1 + 0x120);
    fVar7 = SUB164(local_78 >> 0x20, 0);
    local_68 = *(undefined(*)[16])(param_1 + 0x130);
    fVar6 = SUB164(local_68 >> 0x20, 0);
    local_58 = *(undefined(*)[16])(param_1 + 0x140);
    fVar5 = SUB164(local_58 >> 0x20, 0);
    local_48 = *(undefined4 * )(param_1 + 0x150);
    uStack68 = *(undefined4 * )(param_1 + 0x154);
    uStack64 = *(undefined4 * )(param_1 + 0x158);
    uStack60 = *(undefined4 * )(param_1 + 0x15c);
    fVar7 = SQRT(SUB164(local_78, 0) * SUB164(local_78, 0) + fVar7 * fVar7 + 0.0);
    *(float *) (param_1 + 0x20) = fVar7;
    fVar6 = SQRT(SUB164(local_68, 0) * SUB164(local_68, 0) + fVar6 * fVar6 + 0.0);
    *(float *) (param_1 + 0x24) = fVar6;
    fVar5 = SQRT(SUB164(local_58, 0) * SUB164(local_58, 0) + fVar5 * fVar5 + 0.0);
    *(float *) (param_1 + 0x28) = fVar5;
    if (1e-05 < fVar7) {
        local_78 = divps(local_78, CONCAT412(fVar7, CONCAT48(fVar7, CONCAT44(fVar7, fVar7))));
    }
    if (1e-05 < fVar6) {
        local_68 = divps(local_68, CONCAT412(fVar6, CONCAT48(fVar6, CONCAT44(fVar6, fVar6))));
    }
    if (1e-05 < fVar5) {
        local_58 = divps(local_58, CONCAT412(fVar5, CONCAT48(fVar5, CONCAT44(fVar5, fVar5))));
    }
    puVar4 = (undefined4 *) FUN_1401b1d60(local_88, local_78);
    uVar1 = puVar4[1];
    uVar2 = puVar4[2];
    uVar3 = puVar4[3];
    *(undefined4 * )(param_1 + 0xa0) = *puVar4;
    *(undefined4 * )(param_1 + 0xa4) = uVar1;
    *(undefined4 * )(param_1 + 0xa8) = uVar2;
    *(undefined4 * )(param_1 + 0xac) = uVar3;
    *(undefined(*)[16])(param_1 + 0xe0) =
            CONCAT412(uStack60, CONCAT48(uStack64, CONCAT44(uStack68, local_48)));
    *(undefined4 * )(param_1 + 0x18) = 1;
    return;
}


longlong FUN_1402f1720(longlong param_1) {
    if (*(longlong * )(param_1 + 0x60) != 0) {
        FUN_1402f1720(*(longlong * )(param_1 + 0x60), 1);
    }
    if (*(undefined8 * *)(param_1 + 0x58) != (undefined8 *) 0x0) {
        **(undefined8 * *)(param_1 + 0x58) = *(undefined8 * )(param_1 + 0x60);
    }
    if (*(longlong * )(param_1 + 0x60) != 0) {
        *(undefined8 * )(*(longlong * )(param_1 + 0x60) + 0x58) = *(undefined8 * )(param_1 + 0x58);
    }
    *(undefined8 * )(param_1 + 0x58) = 0;
    *(undefined8 * )(param_1 + 0x60) = 0;
    FUN_14018b900(param_1, 0);
    return param_1;
}


undefined8
FUN_1402f1780(undefined8 param_1, undefined8 param_2, float param_3, longlong param_4, int param_5,
              undefined8 param_6, int param_7) {
    int iVar1;
    longlong lVar2;
    float fVar3;
    uint uVar4;
    uint uVar5;
    float fVar6;

    lVar2 = *(longlong * )(param_4 + 0x20);
    if (lVar2 == 0) {
        *(undefined4 * )(param_4 + 0x40) = 0;
        goto LAB_1402f1943;
    }
    if ((*(float *) (lVar2 + 0x14) != 0.0) && ((*(byte * )(param_4 + 0x14) & 4) != 0)) {
        param_3 = param_3 / *(float *) (lVar2 + 0x14);
        if (2.0 <= param_3) {
            param_3 = 2.0;
        }
        fVar6 = -2.0;
        if (-2.0 <= param_3) {
            fVar6 = param_3;
        }
        *(float *) (param_4 + 8) = fVar6;
    }
    fVar3 = DAT_140c41f64;
    fVar6 = *(float *) (param_4 + 8);
    iVar1 = *(int *) (lVar2 + 0xc);
    uVar5 = *(int *) (lVar2 + 0x10) - iVar1;
    uVar4 = (int) ((float) (param_5 - *(int *) (param_4 + 0x30)) * fVar6) + *(int *) (param_4 + 0xc);
    if (param_7 == 0) {
        if ((*(float *) (lVar2 + 0x14) != 0.0) && ((*(byte * )(param_4 + 0x14) & 4) != 0)) {
            *(uint * )(param_4 + 0xc) = uVar4;
            *(int *) (param_4 + 0x34) = param_5;
            *(int *) (param_4 + 0x30) = param_5;
            if ((fVar6 <= 1e-05) || ((int) uVar5 < (int) uVar4)) {
                if ((fVar6 < -1e-05) && (-1 < (int) uVar4)) {
                    *(int *) (param_4 + 0x34) =
                            (int) (longlong)(float)((uint)((float) uVar4 / fVar6) ^ 0x80000000) + param_5;
                }
            } else {
                *(int *) (param_4 + 0x34) = (int) (longlong)((float) (uVar5 - uVar4) / fVar6) + param_5;
            }
        }
    } else {
        *(int *) (param_4 + 0x30) = param_5;
        uVar4 = *(int *) (param_4 + 0x40) - iVar1;
        *(uint * )(param_4 + 0xc) = uVar4;
        if (fVar6 <= fVar3) {
            if ((float) ((uint) fVar3 ^ 0x80000000) <= fVar6) {
                *(int *) (param_4 + 0x34) = param_5;
            } else {
                *(int *) (param_4 + 0x34) =
                        (int) (longlong)(float)((uint)((float) (ulonglong) uVar4 / fVar6) ^ 0x80000000) + param_5;
            }
        } else {
            *(int *) (param_4 + 0x34) =
                    (int) (longlong)((float) (ulonglong)(uVar5 - uVar4) / fVar6) + param_5;
        }
    }
    if (((*(byte * )(lVar2 + 2) & 1) == 0) || (uVar5 == 0)) {
        if ((int) uVar4 < 0) {
            *(undefined4 * )(param_4 + 0x40) = *(undefined4 * )(lVar2 + 0xc);
            goto LAB_1402f1943;
        }
        if ((int) uVar5 < (int) uVar4) {
            uVar4 = uVar5;
        }
    } else {
        if ((int) uVar4 < 0) {
            *(uint * )(param_4 + 0x40) = *(int *) (lVar2 + 0xc) + (int) uVar4 % (int) uVar5 + uVar5;
            goto LAB_1402f1943;
        }
        if ((int) uVar5 < (int) uVar4) {
            *(int *) (param_4 + 0x40) = *(int *) (lVar2 + 0xc) + (int) uVar4 % (int) uVar5;
            goto LAB_1402f1943;
        }
    }
    *(uint * )(param_4 + 0x40) = *(int *) (lVar2 + 0xc) + uVar4;
    LAB_1402f1943:
    uVar4 = param_5 - *(int *) (param_4 + 0x38);
    if ((int) uVar4 < 0) {
        *(undefined4 * )(param_4 + 0x44) = 0;
        return 0;
    }
    if (param_5 - *(int *) (param_4 + 0x3c) < 0) {
        *(float *) (param_4 + 0x44) =
                (float) (ulonglong) uVar4 /
                (float) (ulonglong)(uint)(*(int *) (param_4 + 0x3c) - *(int *) (param_4 + 0x38));
    } else {
        *(undefined4 * )(param_4 + 0x44) = 0x3f800000;
        if (*(longlong * )(param_4 + 0x60) != 0) {
            FUN_1402f1720();
            return 0;
        }
    }
    return 0;
}


ulonglong FUN_1402f19b0(longlong param_1, int param_2) {
    ulonglong uVar1;
    int iVar2;
    int iVar3;

    uVar1 = *(ulonglong * )(param_1 + 0x20);
    if ((uVar1 == 0) || (iVar2 = *(int *) (uVar1 + 0x10) - *(int *) (uVar1 + 0xc), iVar2 == 0)) {
        return uVar1;
    }
    iVar3 = (int) ((float) (param_2 - *(int *) (param_1 + 0x30)) * *(float *) (param_1 + 8)) +
            *(int *) (param_1 + 0xc);
    if ((*(byte * )(uVar1 + 2) & 1) == 0) {
        if (iVar3 < 0) {
            return uVar1;
        }
    } else {
        if (iVar3 < 0) {
            return (longlong) iVar3 / (longlong) iVar2 & 0xffffffff;
        }
        if (iVar2 < iVar3) {
            return (longlong) iVar3 / (longlong) iVar2 & 0xffffffff;
        }
    }
    return uVar1;
}


void FUN_1402f1a60(longlong param_1, longlong param_2) {
    uint uVar1;

    if (*(float *) (param_1 + 8) <= 0.0 && *(float *) (param_1 + 8) != 0.0) {
        if ((*(int *) (param_1 + 0x4c) != 0) &&
            (uVar1 = *(int *) (param_1 + 0x4c) - 1,
                    *(uint * )(*(longlong * )(param_1 + 0x20) + 0xc) <=
                    *(uint * )(*(longlong * )(param_2 + 0x298) + (ulonglong) uVar1 * 4))) {
            *(uint * )(param_1 + 0x4c) = uVar1;
            return;
        }
    } else {
        *(int *) (param_1 + 0x4c) = *(int *) (param_1 + 0x4c) + 1;
        if ((*(uint * )(param_1 + 0x4c) < *(uint * )(param_2 + 0x290)) &&
            (*(uint * )(*(longlong * )(param_2 + 0x298) + (ulonglong) * (uint * )(param_1 + 0x4c) * 4) <
             *(uint * )(*(longlong * )(param_1 + 0x20) + 0x10))) {
            return;
        }
    }
    *(undefined4 * )(param_1 + 0x4c) = 0xffffffff;
    return;
}


longlong FUN_1402f1ac0(longlong param_1) {
    if (*(longlong * )(param_1 + 0x58) != 0) {
        FUN_1402f1ac0(*(longlong * )(param_1 + 0x58), 1);
    }
    if (*(undefined8 * *)(param_1 + 0x50) != (undefined8 *) 0x0) {
        **(undefined8 * *)(param_1 + 0x50) = *(undefined8 * )(param_1 + 0x58);
    }
    if (*(longlong * )(param_1 + 0x58) != 0) {
        *(undefined8 * )(*(longlong * )(param_1 + 0x58) + 0x50) = *(undefined8 * )(param_1 + 0x50);
    }
    *(undefined8 * )(param_1 + 0x50) = 0;
    *(undefined8 * )(param_1 + 0x58) = 0;
    FUN_14018b900(param_1, 0);
    return param_1;
}


undefined8
FUN_1402f1b20(undefined8 param_1, undefined8 param_2, float param_3, longlong param_4, int param_5,
              undefined8 param_6, int param_7) {
    int iVar1;
    longlong lVar2;
    float fVar3;
    uint uVar4;
    uint uVar5;
    float fVar6;

    lVar2 = *(longlong * )(param_4 + 0x20);
    if (lVar2 == 0) {
        *(undefined4 * )(param_4 + 0x44) = 0;
        goto LAB_1402f1ce3;
    }
    if ((*(float *) (lVar2 + 0x10) != 0.0) && ((*(byte * )(param_4 + 0x14) & 4) != 0)) {
        param_3 = param_3 / *(float *) (lVar2 + 0x10);
        if (2.0 <= param_3) {
            param_3 = 2.0;
        }
        fVar6 = -2.0;
        if (-2.0 <= param_3) {
            fVar6 = param_3;
        }
        *(float *) (param_4 + 8) = fVar6;
    }
    fVar3 = DAT_140c41f64;
    fVar6 = *(float *) (param_4 + 8);
    iVar1 = *(int *) (lVar2 + 8);
    uVar5 = *(int *) (lVar2 + 0xc) - iVar1;
    uVar4 = (int) ((float) (param_5 - *(int *) (param_4 + 0x34)) * fVar6) + *(int *) (param_4 + 0xc);
    if (param_7 == 0) {
        if ((*(float *) (lVar2 + 0x10) != 0.0) && ((*(byte * )(param_4 + 0x14) & 4) != 0)) {
            *(uint * )(param_4 + 0xc) = uVar4;
            *(int *) (param_4 + 0x38) = param_5;
            *(int *) (param_4 + 0x34) = param_5;
            if ((fVar6 <= 1e-05) || ((int) uVar5 < (int) uVar4)) {
                if ((fVar6 < -1e-05) && (-1 < (int) uVar4)) {
                    *(int *) (param_4 + 0x38) =
                            (int) (longlong)(float)((uint)((float) uVar4 / fVar6) ^ 0x80000000) + param_5;
                }
            } else {
                *(int *) (param_4 + 0x38) = (int) (longlong)((float) (uVar5 - uVar4) / fVar6) + param_5;
            }
        }
    } else {
        *(int *) (param_4 + 0x34) = param_5;
        uVar4 = *(int *) (param_4 + 0x44) - iVar1;
        *(uint * )(param_4 + 0xc) = uVar4;
        if (fVar6 <= fVar3) {
            if ((float) ((uint) fVar3 ^ 0x80000000) <= fVar6) {
                *(int *) (param_4 + 0x38) = param_5;
            } else {
                *(int *) (param_4 + 0x38) =
                        (int) (longlong)(float)((uint)((float) (ulonglong) uVar4 / fVar6) ^ 0x80000000) + param_5;
            }
        } else {
            *(int *) (param_4 + 0x38) =
                    (int) (longlong)((float) (ulonglong)(uVar5 - uVar4) / fVar6) + param_5;
        }
    }
    if (((*(byte * )(lVar2 + 2) & 1) == 0) || (uVar5 == 0)) {
        if ((int) uVar4 < 0) {
            *(undefined4 * )(param_4 + 0x44) = *(undefined4 * )(lVar2 + 8);
            goto LAB_1402f1ce3;
        }
        if ((int) uVar5 < (int) uVar4) {
            uVar4 = uVar5;
        }
    } else {
        if ((int) uVar4 < 0) {
            *(uint * )(param_4 + 0x44) = *(int *) (lVar2 + 8) + (int) uVar4 % (int) uVar5 + uVar5;
            goto LAB_1402f1ce3;
        }
        if ((int) uVar5 < (int) uVar4) {
            *(int *) (param_4 + 0x44) = *(int *) (lVar2 + 8) + (int) uVar4 % (int) uVar5;
            goto LAB_1402f1ce3;
        }
    }
    *(uint * )(param_4 + 0x44) = *(int *) (lVar2 + 8) + uVar4;
    LAB_1402f1ce3:
    uVar4 = param_5 - *(int *) (param_4 + 0x3c);
    if ((int) uVar4 < 0) {
        *(undefined4 * )(param_4 + 0x48) = 0;
        return 0;
    }
    if (param_5 - *(int *) (param_4 + 0x40) < 0) {
        *(float *) (param_4 + 0x48) =
                (float) (ulonglong) uVar4 /
                (float) (ulonglong)(uint)(*(int *) (param_4 + 0x40) - *(int *) (param_4 + 0x3c));
    } else {
        *(undefined4 * )(param_4 + 0x48) = 0x3f800000;
        if (*(longlong * )(param_4 + 0x58) != 0) {
            FUN_1402f1ac0();
            return 0;
        }
    }
    return 0;
}
