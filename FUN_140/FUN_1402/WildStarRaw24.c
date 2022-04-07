//
// Created by flop on 04.04.22.
//
#include "../../include.h"

undefined8 *FUN_14028f500(undefined8 *param_1, longlong param_2) {
    int iVar1;

    *param_1 = &PTR_LAB_140b61940;
    param_1[0x13] = 0;
    param_1[0x12] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x16] = 0;
    *(undefined4 * )(param_1 + 0x17) = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    *(undefined4 * )(param_1 + 1) = 1;
    param_1[2] = param_2;
    param_1[9] = 0;
    *(undefined4 * )(param_1 + 0xb) = 0;
    *(undefined4 * )((longlong) param_1 + 0x5c) = 0x8000000a;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *(undefined4 * )(param_1 + 0xc) = 0;
    param_1[0x11] = 0;
    param_1[0x14] = 0;
    *(undefined4 * )(param_1 + 0x10) = 0;
    iVar1 = *(int *) (param_2 + 0xf0);
    param_1[0x15] = 0;
    *(int *) ((longlong) param_1 + 0x84) = iVar1 + -1;
    return param_1;
}


void FUN_14028f5b0(undefined8 *param_1) {
    longlong **pplVar1;
    longlong lVar2;
    ulonglong *puVar3;
    int iVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    ulonglong **ppuVar7;
    undefined8 *puVar8;
    undefined8 local_res8;
    undefined **local_58;
    undefined8 local_50;
    LPVOID local_48;
    undefined **local_38;
    undefined8 local_30;
    LPVOID local_28;
    undefined8 local_20;

    *param_1 = &PTR_LAB_140b61940;
    if ((longlong *) param_1[0x15] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x15] + 8))();
        param_1[0x15] = 0;
    }
    if (param_1[0x1c] != 0) {
        if (param_1[9] != 0) {
            lVar2 = param_1[2];
            local_38 = (undefined **)
                    CONCAT44(*(undefined4 * )((longlong) param_1 + 0x34), *(undefined4 * )(param_1 + 5));
            local_30 = param_1[7];
            local_20 = param_1[9];
            local_28 = (LPVOID) CONCAT44(*(undefined4 * )(param_1 + 10), *(undefined4 * )(param_1 + 8));
            uVar5 = (**(code * *)(lVar2 + 0x1cb8))(&local_38);
            uVar6 = uVar5 % *(ulonglong * )(lVar2 + 0x1ca8);
            ppuVar7 = (ulonglong * *)(*(longlong * )(lVar2 + 0x1cb0) + uVar6 * 8);
            puVar3 = *(ulonglong * *)(*(longlong * )(lVar2 + 0x1cb0) + uVar6 * 8);
            while (puVar3 != (ulonglong *) 0x0) {
                if ((uVar5 == **ppuVar7) &&
                    (iVar4 = (**(code * *)(lVar2 + 0x1cc0))(&local_38, *ppuVar7 + 2), iVar4 != 0)) {
                    puVar3 = *ppuVar7;
                    *ppuVar7 = (ulonglong *) puVar3[1];
                    FUN_14018b900(puVar3, 0);
                    *(longlong * )(lVar2 + 0x1ca0) = *(longlong * )(lVar2 + 0x1ca0) + -1;
                    goto LAB_14028f734;
                }
                ppuVar7 = (ulonglong * *)(*ppuVar7 + 1);
                puVar3 = *ppuVar7;
            }
            local_50 = 0;
            local_58 = &PTR_LAB_140b5e648;
            local_48 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_58);
            local_38 = local_58;
            local_30 = local_50;
            local_res8 = 0x141de4510;
            local_28 = local_48;
            iVar4 = FUN_1401971e0(&DAT_140c8a418, 0xe, &local_res8, param_1[9], &local_38);
            local_58 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720, local_48);
            if (iVar4 != 0) {
                DebugBreak();
            }
        }
        LAB_14028f734:
        if ((undefined8 *) param_1[0x1c] != (undefined8 *) 0x0) {
            *(undefined8 *) param_1[0x1c] = param_1[0x1d];
        }
        if (param_1[0x1d] != 0) {
            *(undefined8 * )(param_1[0x1d] + 0xe0) = param_1[0x1c];
        }
        param_1[0x1c] = 0;
        param_1[0x1d] = 0;
    }
    FUN_14028fcd0(param_1, 0);
    lVar2 = param_1[0x11];
    if (lVar2 != 0) {
        iVar4 = *(int *) (lVar2 + -8);
        puVar8 = (undefined8 * )((longlong) iVar4 * 0x10 + lVar2);
        while (iVar4 = iVar4 + -1, -1 < iVar4) {
            pplVar1 = (longlong * *)(puVar8 + -2);
            puVar8 = puVar8 + -2;
            if (*pplVar1 != (longlong *) 0x0) {
                (**(code * *)(**pplVar1 + 0x10))();
                *puVar8 = 0;
            }
        }
        FUN_14018b900(lVar2 + -8, 0);
    }
    FUN_14018b900(param_1[9], 0);
    if ((undefined8 *) param_1[0x1c] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x1c] = param_1[0x1d];
    }
    if (param_1[0x1d] != 0) {
        *(undefined8 * )(param_1[0x1d] + 0xe0) = param_1[0x1c];
    }
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    if ((undefined8 *) param_1[0x1a] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x1a] = param_1[0x1b];
    }
    if (param_1[0x1b] != 0) {
        *(undefined8 * )(param_1[0x1b] + 0x20) = param_1[0x1a];
    }
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    if ((undefined8 *) param_1[0x18] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x18] = param_1[0x19];
    }
    if (param_1[0x19] != 0) {
        *(undefined8 * )(param_1[0x19] + 0x10) = param_1[0x18];
    }
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    lVar2 = param_1[0x12];
    if (lVar2 != 0) {
        (**(code * *)(*(longlong * )(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    return;
}


undefined8
FUN_14028f8e0(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4,
              undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
              undefined4 param_9, undefined4 param_10) {
    undefined8 *puVar1;
    longlong *plVar2;
    uint uVar3;
    undefined4 uVar4;
    undefined8 uVar5;
    ulonglong uVar6;
    longlong lVar7;
    uint *puVar8;
    longlong *plVar9;
    undefined8 *puVar10;

    *(undefined4 * )(param_1 + 0x1c) = param_2;
    *(undefined4 * )(param_1 + 0x2c) = param_5;
    *(undefined4 * )(param_1 + 0x30) = param_6;
    *(undefined4 * )(param_1 + 0x34) = param_7;
    *(undefined4 * )(param_1 + 0x18) = 1;
    *(undefined4 * )(param_1 + 0x38) = param_8;
    *(undefined4 * )(param_1 + 0x20) = param_3;
    *(undefined4 * )(param_1 + 0x3c) = param_9;
    *(undefined4 * )(param_1 + 0x24) = param_4;
    *(undefined4 * )(param_1 + 0x28) = 0;
    *(undefined8 * )(param_1 + 0x48) = 0;
    *(undefined4 * )(param_1 + 0x40) = param_10;
    uVar5 = FUN_140263970(param_1 + 0x18, *(longlong * )(param_1 + 0x10) + 0x88);
    if (-1 < (int) uVar5) {
        uVar4 = FUN_140263e70(param_1 + 0x18);
        *(undefined4 * )(param_1 + 0x80) = uVar4;
        lVar7 = (longlong) * (int *) (param_1 + 0x34) * 4;
        if ((*(int *) (lVar7 + *(longlong * )(*(longlong * )(param_1 + 0x10) + 0x1b80)) == 0) &&
            (*(int *) (lVar7 + *(longlong * )(*(longlong * )(param_1 + 0x10) + 0x1b78)) == 0)) {
            uVar3 = *(uint * )(param_1 + 0x2c);
            uVar6 = SUB168(ZEXT816(0x10) * ZEXT416(uVar3), 0);
            if (SUB168(ZEXT816(0x10) * ZEXT416(uVar3) >> 0x40, 0) != 0) {
                uVar6 = 0xffffffffffffffff;
            }
            lVar7 = uVar6 + 8;
            if (0xfffffffffffffff7 < uVar6) {
                lVar7 = -1;
            }
            puVar8 = (uint *) FUN_14018b280(lVar7, 0);
            if (puVar8 == (uint *) 0x0) {
                puVar10 = (undefined8 *) 0x0;
            } else {
                puVar10 = (undefined8 * )(puVar8 + 2);
                *puVar8 = uVar3;
                puVar1 = puVar10;
                while (uVar3 = uVar3 - 1, -1 < (int) uVar3) {
                    *puVar1 = 0;
                    puVar1 = puVar1 + 2;
                }
            }
            *(undefined8 * *)(param_1 + 0x88) = puVar10;
        }
        uVar5 = FUN_14028fcd0(param_1, 2);
        if (-1 < (int) uVar5) {
            plVar9 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x1c38);
            if (*(longlong * )(param_1 + 0xe0) == 0) {
                *(longlong * *)(param_1 + 0xe0) = plVar9;
                plVar2 = (longlong * )(param_1 + 0xe8);
                *plVar2 = *plVar9;
                *plVar9 = param_1;
                if (*plVar2 != 0) {
                    *(longlong * *)(*plVar2 + 0xe0) = plVar2;
                }
            }
            uVar5 = 0;
        }
    }
    return uVar5;
}



// WARNING: Could not reconcile some variable overlaps

undefined8
FUN_14028fa50(ulonglong param_1, undefined8 param_2, undefined4 param_3, uint param_4,
              undefined4 param_5, undefined4 param_6, undefined4 param_7) {
    ulonglong **ppuVar1;
    longlong lVar2;
    int iVar3;
    undefined8 uVar4;
    ulonglong uVar5;
    ulonglong *puVar6;
    ulonglong *puVar7;
    longlong *plVar8;
    undefined8 local_68;
    undefined **local_60;
    undefined8 local_58;
    LPVOID local_50;
    code *local_48;
    undefined8 local_40;
    undefined8 local_38;
    undefined **local_28;
    ulonglong local_20;
    LPVOID local_18;
    ulonglong local_10;

    if (param_4 < 2) {
        *(undefined8 * )(param_1 + 0x18) = 0;
        *(undefined8 * )(param_1 + 0x20) = 0;
        *(undefined8 * )(param_1 + 0x28) = 0;
        *(undefined8 * )(param_1 + 0x30) = 0;
        *(undefined8 * )(param_1 + 0x38) = 0;
        *(undefined8 * )(param_1 + 0x40) = 0;
        *(undefined8 * )(param_1 + 0x48) = 0;
        *(undefined8 * )(param_1 + 0x50) = 0;
        *(undefined4 * )(param_1 + 0x38) = param_5;
        *(undefined4 * )(param_1 + 0x18) = 1;
        *(undefined4 * )(param_1 + 0x3c) = param_6;
        *(undefined4 * )(param_1 + 0x28) = param_3;
        *(undefined4 * )(param_1 + 0x40) = param_7;
        *(uint * )(param_1 + 0x34) = param_4;
        uVar4 = FUN_14018e9c0(param_2);
        *(undefined8 * )(param_1 + 0x48) = uVar4;
        uVar4 = FUN_14028fcd0(param_1);
        if (-1 < (int) uVar4) {
            lVar2 = *(longlong * )(param_1 + 0x10);
            plVar8 = (longlong * )(lVar2 + 0x1ca0);
            local_28 = (undefined **)
                    CONCAT44(*(undefined4 * )(param_1 + 0x34), *(undefined4 * )(param_1 + 0x28));
            local_20 = *(ulonglong * )(param_1 + 0x38);
            local_10 = *(ulonglong * )(param_1 + 0x48);
            local_18 = (LPVOID) CONCAT44(*(undefined4 * )(param_1 + 0x50), *(undefined4 * )(param_1 + 0x40));
            if (*plVar8 == *(longlong * )(lVar2 + 0x1ca8)) {
                FUN_1400290d0(plVar8);
            }
            uVar5 = (**(code * *)(lVar2 + 0x1cb8))(&local_28);
            ppuVar1 = (ulonglong * *)
                    (*(longlong * )(lVar2 + 0x1cb0) + (uVar5 % *(ulonglong * )(lVar2 + 0x1ca8)) * 8);
            puVar6 = (ulonglong *) FUN_14018b280(0x38);
            puVar7 = (ulonglong *) 0x0;
            if (puVar6 != (ulonglong *) 0x0) {
                puVar7 = *ppuVar1;
                *puVar6 = uVar5;
                puVar6[1] = (ulonglong) puVar7;
                puVar6[2] = (ulonglong) local_28;
                puVar6[3] = local_20;
                puVar6[4] = (ulonglong) local_18;
                puVar6[6] = param_1;
                puVar6[5] = local_10;
                puVar7 = puVar6;
            }
            *ppuVar1 = puVar7;
            *plVar8 = *plVar8 + 1;
            puVar7 = (ulonglong * )(*(longlong * )(param_1 + 0x10) + 0x1c38);
            if (*(longlong * )(param_1 + 0xe0) == 0) {
                *(ulonglong * *)(param_1 + 0xe0) = puVar7;
                puVar6 = (ulonglong * )(param_1 + 0xe8);
                *puVar6 = *puVar7;
                *puVar7 = param_1;
                if (*puVar6 != 0) {
                    *(ulonglong * *)(*puVar6 + 0xe0) = puVar6;
                }
            }
            local_60 = *(undefined * **)(param_1 + 0x48);
            local_58 = (ulonglong) local_58._4_4_ << 0x20;
            local_40 = 0;
            local_38 = 0;
            local_48 = FUN_140290280;
            local_50 = (LPVOID) param_1;
            FUN_1401b6bf0(puVar7, &local_60, param_1 + 0xa8);
            uVar4 = 0;
        }
    } else {
        local_60 = &PTR_LAB_140b5e648;
        local_58 = 0;
        local_50 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_60);
        local_28 = local_60;
        local_68 = 0x141de4900;
        local_18 = local_50;
        local_20 = local_58;
        iVar3 = FUN_1401971e0(&DAT_140c8a414, 0xe, &local_68, &local_28);
        local_60 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_50);
        if (iVar3 != 0) {
            DebugBreak();
        }
        uVar4 = 0x80004005;
    }
    return uVar4;
}


undefined8 FUN_14028fcd0(longlong param_1, int param_2) {
    longlong lVar1;
    int iVar2;
    uint uVar3;
    longlong lVar4;
    int iVar5;
    undefined8 uVar6;
    int *piVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    uint uVar10;
    ulonglong in_stack_ffffffffffffffe0;

    iVar2 = *(int *) (param_1 + 0x34);
    lVar4 = *(longlong * )(param_1 + 0x10);
    lVar1 = (longlong) iVar2 * 4;
    uVar3 = *(uint * )(lVar1 + *(longlong * )(lVar4 + 0x1b80));
    if ((uVar3 != 0) || (iVar5 = 2, *(longlong * )(lVar4 + 0x19d8) != 0)) {
        iVar5 = 1;
    }
    if (*(int *) (param_1 + 0x58) < iVar5) {
        if (iVar5 <= param_2) {
            if (*(longlong * )(param_1 + 0x48) == 0) {
                uVar10 = *(uint * )(lVar1 + *(longlong * )(lVar4 + 0x1b78));
                if (((uVar10 & 1) == 0) || ((&DAT_140ae64c0)[*(int *) (param_1 + 0x30)] == 0)) {
                    if ((*(byte * )(param_1 + 0x3c) & 0x80) != 0) {
                        uVar10 = uVar10 | 0x400;
                    }
                    uVar6 = (**(code * *)(**(longlong * *)(lVar4 + 0x19d0) + 0xc0))
                            (*(longlong * *)(lVar4 + 0x19d0), *(undefined4 * )(param_1 + 0x1c),
                             *(undefined4 * )(param_1 + 0x20), *(undefined4 * )(param_1 + 0x24),
                             *(undefined4 * )(param_1 + 0x2c), uVar10,
                             (&DAT_140ae7b30)[*(int *) (param_1 + 0x30)],
                             in_stack_ffffffffffffffe0 & 0xffffffff00000000 | (ulonglong) uVar3,
                             (undefined8 * )(param_1 + 0x68), 0);
                    if ((int) uVar6 < 0) goto LAB_14028fd67;
                    if (*(int *) (param_1 + 0x34) == 4) {
                        FUN_14026bf20(*(undefined8 * )(param_1 + 0x10), *(undefined8 * )(param_1 + 0x68));
                    }
                    piVar7 = (int *) (*(longlong * )(param_1 + 0x10) + 0x2d4 +
                                      (longlong) * (int *) (param_1 + 0x34) * 0x30);
                    LOCK();
                    *piVar7 = *piVar7 + 1;
                    LOCK();
                    piVar7[1] = piVar7[1] + *(int *) (param_1 + 0x80);
                    LOCK();
                    piVar7[2] = piVar7[2] + 1;
                    LOCK();
                    piVar7[3] = piVar7[3] + *(int *) (param_1 + 0x80);
                }
                *(undefined4 * )(param_1 + 0x5c) = 0;
            } else {
                uVar6 = FUN_14026c360(lVar4, 1, *(longlong * )(param_1 + 0x48), *(undefined4 * )(param_1 + 0x28),
                                      iVar2, *(undefined4 * )(param_1 + 0x3c), 0, param_1 + 0x70);
                if ((int) uVar6 < 0) {
                    LAB_14028fd67:
                    *(int *) (param_1 + 0x5c) = (int) uVar6;
                    return uVar6;
                }
            }
            goto LAB_14028ff08;
        }
        if (*(int *) (param_1 + 0x58) < iVar5) goto LAB_14028ff08;
    }
    if (param_2 < iVar5) {
        if (*(longlong * )(param_1 + 0x68) != 0) {
            piVar7 = (int *) (lVar4 + 0x2d4 + (longlong) iVar2 * 0x30);
            LOCK();
            *piVar7 = *piVar7 + -1;
            LOCK();
            piVar7[1] = piVar7[1] - *(int *) (param_1 + 0x80);
            LOCK();
            piVar7[4] = piVar7[4] + 1;
            LOCK();
            piVar7[5] = piVar7[5] + *(int *) (param_1 + 0x80);
        }
        uVar8 = 0;
        if (*(longlong * *)(param_1 + 0x70) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x70) + 8))();
            *(undefined8 * )(param_1 + 0x70) = 0;
        }
        if (*(longlong * *)(param_1 + 0x68) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x68) + 0x10))();
            *(undefined8 * )(param_1 + 0x68) = 0;
        }
        *(undefined4 * )(param_1 + 0x5c) = 0x8000000a;
        *(undefined4 * )(param_1 + 0x60) = 0;
        *(undefined8 * )(param_1 + 0xa0) = 0;
        if (*(longlong * )(param_1 + 0x98) != 0) {
            do {
                lVar1 = *(longlong * )(param_1 + 0x90);
                *(undefined4 * )(lVar1 + uVar8 * 0x18) = 0;
                *(undefined8 * )(lVar1 + 8 + uVar8 * 0x18) = 0;
                uVar9 = (ulonglong)((int) uVar8 + 1);
                *(undefined8 * )(lVar1 + 0x10 + uVar8 * 0x18) = 0;
                uVar8 = uVar9;
            } while (uVar9 < *(ulonglong * )(param_1 + 0x98));
        }
    }
    LAB_14028ff08:
    *(int *) (param_1 + 0x58) = param_2;
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14028ff30(longlong param_1) {
    longlong *plVar1;
    int iVar2;
    int iVar3;
    undefined4 uVar4;
    int *piVar5;
    undefined auStack360[32];
    undefined ***local_148;
    undefined4 *local_140;
    undefined ***local_138;
    undefined **local_128;
    undefined8 local_120;
    LPVOID local_118;
    undefined **local_110;
    wchar_t *local_108;
    LPVOID local_100;
    undefined8 local_f8;
    undefined **local_f0;
    undefined8 uStack232;
    undefined8 local_e0;
    int iStack216;
    undefined4 uStack212;
    undefined8 local_d0;
    undefined **local_c8;
    undefined8 local_c0;
    LPVOID local_b8;
    undefined **local_a8;
    wchar_t *local_a0;
    LPVOID local_98;
    undefined8 local_90;
    undefined4 local_88[4];
    undefined4 local_78[4];
    undefined4 local_68;
    undefined4 uStack100;
    undefined4 uStack96;
    undefined4 uStack92;
    undefined4 local_58;
    undefined4 uStack84;
    int iStack80;
    undefined4 uStack76;
    undefined4 local_48[4];
    undefined4 local_38;
    undefined4 local_34;
    undefined4 local_30;
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong) auStack360;
    plVar1 = *(longlong * *)(param_1 + 0x70);
    local_78[0] = 0xffffffff;
    (**(code * *)(*plVar1 + 0x20))(plVar1, local_78);
    iVar3 = *(int *) (plVar1 + 0x14);
    if (-1 < iVar3) {
        plVar1 = *(longlong * *)(param_1 + 0x70);
        local_88[0] = 0xffffffff;
        (**(code * *)(*plVar1 + 0x20))(plVar1, local_88);
        if (plVar1[7] == 0) {
            iVar3 = -0x7fffbffb;
        } else {
            *(longlong * )(param_1 + 0x68) = plVar1[7];
            (**(code * *)(*(longlong *) plVar1[7] + 8))();
            iVar3 = (**(code * *)(**(longlong * *)(param_1 + 0x68) + 0x88))
                    (*(longlong * *)(param_1 + 0x68), 0, local_48);
            if (-1 < iVar3) {
                *(undefined4 * )(param_1 + 0x1c) = local_38;
                *(undefined4 * )(param_1 + 0x20) = local_34;
                *(undefined4 * )(param_1 + 0x24) = local_30;
                uVar4 = (**(code * *)(**(longlong * *)(param_1 + 0x68) + 0x68))();
                *(undefined4 * )(param_1 + 0x2c) = uVar4;
                uVar4 = FUN_14026c430(local_48[0]);
                *(undefined4 * )(param_1 + 0x30) = uVar4;
                iVar3 = FUN_140263970(param_1 + 0x18, *(longlong * )(param_1 + 0x10) + 0x88);
                if (-1 < iVar3) {
                    uVar4 = FUN_140263e70(param_1 + 0x18);
                    *(undefined4 * )(param_1 + 0x80) = uVar4;
                    piVar5 = (int *) (*(longlong * )(param_1 + 0x10) + 0x2d4 +
                                      (longlong) * (int *) (param_1 + 0x34) * 0x30);
                    LOCK();
                    *piVar5 = *piVar5 + 1;
                    LOCK();
                    piVar5[1] = piVar5[1] + *(int *) (param_1 + 0x80);
                    LOCK();
                    piVar5[2] = piVar5[2] + 1;
                    LOCK();
                    piVar5[3] = piVar5[3] + *(int *) (param_1 + 0x80);
                    LOCK();
                    piVar5[8] = piVar5[8] + 1;
                    LOCK();
                    piVar5[9] = piVar5[9] + *(int *) (param_1 + 0x80);
                    *(undefined4 * )(param_1 + 0x78) = *(undefined4 * )(*(longlong * )(param_1 + 0x70) + 0x54);
                    uVar4 = *(undefined4 * )(*(longlong * )(param_1 + 0x70) + 0x58);
                    *(undefined4 * )(param_1 + 0x5c) = 0;
                    *(undefined4 * )(param_1 + 0x7c) = uVar4;
                    *(undefined4 * )(param_1 + 0x60) = 1;
                    goto LAB_140290174;
                }
            }
        }
    }
    local_128 = &PTR_LAB_140b5e648;
    local_120 = 0;
    local_118 = TlsGetValue(DAT_140c63720);
    TlsSetValue(DAT_140c63720, &local_128);
    local_c8 = local_128;
    local_c0 = local_120;
    local_f0 = &PTR_LAB_140b5e648;
    uStack232 = L"Result";
    local_b8 = local_118;
    local_e0 = TlsGetValue(DAT_140c63720);
    TlsSetValue(DAT_140c63720, &local_f0);
    local_f8 = *(undefined8 * )(param_1 + 0x48);
    local_110 = &PTR_LAB_140b5e648;
    local_f0 = &PTR_LAB_140b5e640;
    local_58 = (undefined4) local_e0;
    uStack84 = local_e0._4_4_;
    uStack76 = uStack212;
    local_108 = L"FileName";
    local_68 = 0x40b5e640;
    uStack100 = 1;
    uStack96 = (undefined4) uStack232;
    uStack92 = uStack232._4_4_;
    iStack216 = iVar3;
    iStack80 = iVar3;
    local_100 = TlsGetValue(DAT_140c63720);
    TlsSetValue(DAT_140c63720, &local_110);
    local_a0 = local_108;
    local_110 = &PTR_LAB_140b5e638;
    local_d0 = 0x141de4028;
    local_138 = &local_c8;
    local_a8 = &PTR_LAB_140b5e638;
    local_98 = local_100;
    local_148 = &local_a8;
    local_140 = &local_68;
    local_90 = local_f8;
    iVar2 = FUN_1401971e0(&DAT_140c8a410, 0xe, &local_d0, *(undefined8 * )(param_1 + 0x48));
    local_110 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720, local_100);
    local_f0 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720, local_e0);
    local_128 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720, local_118);
    if (iVar2 != 0) {
        DebugBreak();
    }
    *(int *) (param_1 + 0x5c) = iVar3;
    if (*(longlong * *)(param_1 + 0x68) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x68) + 0x10))();
        *(undefined8 * )(param_1 + 0x68) = 0;
    }
    LAB_140290174:
    FUN_1407db4f0(local_28 ^ (ulonglong) auStack360);
    return;
}


void FUN_140290280(longlong param_1) {
    ulonglong *puVar1;
    longlong lVar2;
    ulonglong uVar3;
    DWORD DVar4;
    int iVar5;
    HANDLE hObject;
    ulonglong uVar6;

    lVar2 = *(longlong * )(param_1 + 0x10);
    DVar4 = GetCurrentThreadId();
    uVar6 = 0;
    if (*(DWORD * )(lVar2 + 0x18) == DVar4) {
        *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(lVar2 + 0x20);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
            if (uVar3 == 0) {
                *(DWORD * )(lVar2 + 0x18) = DVar4;
                goto LAB_1402902e0;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(lVar2 + 0x18, DVar4);
    }
    LAB_1402902e0:
    iVar5 = FUN_14028fcd0(param_1, 0);
    if (-1 < iVar5) {
        FUN_14028fcd0(param_1, 2);
    }
    if (*(ulonglong * )(lVar2 + 0x20) < 2) {
        *(undefined4 * )(lVar2 + 0x18) = 0;
        *(undefined8 * )(lVar2 + 0x20) = 0;
        if (*(longlong * )(lVar2 + 0x28) != 0) {
            if (*(longlong * )(lVar2 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar2 + 0x30);
                uVar6 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar6 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar2 + 0x30));
        }
        return;
    }
    *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + -1;
    return;
}


undefined8 FUN_1402905b0(longlong param_1) {
    undefined8 uVar1;

    if (*(longlong * *)(param_1 + 0x70) != (longlong *) 0x0) {
        uVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x70) + 0x20))();
        if ((int) uVar1 == 0) {
            return uVar1;
        }
        FUN_14028ff30(param_1);
        if (*(longlong * *)(param_1 + 0x70) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x70) + 8))();
            *(undefined8 * )(param_1 + 0x70) = 0;
        }
    }
    return 1;
}


int FUN_140291b10(longlong *param_1, short *param_2) {
    longlong *plVar1;
    int iVar2;
    int iVar3;
    longlong *local_res10;
    undefined8 local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    if ((param_2 == (short *) 0x0) || (*param_2 == 0)) {
        return -0x7ff8ffa9;
    }
    if (*(int *) ((longlong) param_1 + 0x34) == 1) {
        local_48 = &PTR_LAB_140b5e648;
        local_40 = 0;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_48);
        local_28 = local_48;
        local_res10 = (longlong *) 0x141de49a0;
        local_18 = local_38;
        local_20 = local_40;
        iVar2 = FUN_1401971e0(&DAT_140c8a3fc, 0xe, &local_res10, &local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_38);
        if (iVar2 != 0) {
            DebugBreak();
        }
        return -0x7fffbffb;
    }
    local_48 = (undefined **) CONCAT44(local_48._4_4_, 0xffffffff);
    (**(code * *)(*param_1 + 0x20))(param_1, &local_48);
    if (param_1[0xd] != 0) {
        local_res10 = (longlong *) 0x0;
        iVar2 = FUN_14026c2c0(param_1[2], param_1[0xd], &local_res10);
        plVar1 = local_res10;
        if ((iVar2 < 0) || (iVar2 = FUN_14029b740(local_res10, param_2), iVar3 = 0, iVar2 < 0)) {
            iVar3 = iVar2;
        }
        if (plVar1 != (longlong *) 0x0) {
            (**(code * *)(*plVar1 + 8))(plVar1);
        }
        return iVar3;
    }
    return -0x7fffbffb;
}


undefined8 *FUN_140291c80(undefined8 *param_1, undefined8 param_2) {
    int iVar1;

    *param_1 = &PTR_LAB_140b619b0;
    param_1[0x15] = 0;
    param_1[0x14] = 0;
    param_1[0x17] = 0;
    param_1[0x16] = 0;
    param_1[0x19] = 0;
    param_1[0x18] = 0;
    param_1[0x1b] = 0;
    param_1[0x1a] = 0;
    param_1[0x1d] = 0;
    param_1[0x1c] = 0;
    param_1[0x1f] = 0;
    param_1[0x1e] = 0;
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    param_1[0x27] = 0;
    *(undefined4 * )(param_1 + 0x28) = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    param_1[2] = param_2;
    *(undefined4 * )(param_1 + 1) = 1;
    param_1[9] = 0;
    *(undefined4 * )(param_1 + 0xb) = 0;
    *(undefined4 * )((longlong) param_1 + 0x5c) = 0x8000000a;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    *(undefined4 * )(param_1 + 0xc) = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    *(undefined4 * )(param_1 + 0x11) = 0;
    iVar1 = *(int *) (param_1[2] + 0xf0);
    param_1[0x26] = 0;
    *(int *) ((longlong) param_1 + 0x8c) = iVar1 + -1;
    return param_1;
}


void FUN_140291db0(undefined8 *param_1) {
    longlong **pplVar1;
    longlong lVar2;
    ulonglong *puVar3;
    int iVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    ulonglong **ppuVar7;
    undefined8 *puVar8;
    undefined8 local_res8;
    undefined **local_58;
    undefined8 local_50;
    LPVOID local_48;
    undefined **local_38;
    undefined8 local_30;
    LPVOID local_28;
    undefined8 local_20;

    *param_1 = &PTR_LAB_140b619b0;
    if ((longlong *) param_1[0x26] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x26] + 8))();
        param_1[0x26] = 0;
    }
    if (param_1[0x2d] != 0) {
        if (param_1[9] != 0) {
            lVar2 = param_1[2];
            local_38 = (undefined **)
                    CONCAT44(*(undefined4 * )((longlong) param_1 + 0x34), *(undefined4 * )(param_1 + 5));
            local_30 = param_1[7];
            local_20 = param_1[9];
            local_28 = (LPVOID) CONCAT44(*(undefined4 * )(param_1 + 10), *(undefined4 * )(param_1 + 8));
            uVar5 = (**(code * *)(lVar2 + 0x1ce0))(&local_38);
            uVar6 = uVar5 % *(ulonglong * )(lVar2 + 0x1cd0);
            ppuVar7 = (ulonglong * *)(*(longlong * )(lVar2 + 0x1cd8) + uVar6 * 8);
            puVar3 = *(ulonglong * *)(*(longlong * )(lVar2 + 0x1cd8) + uVar6 * 8);
            while (puVar3 != (ulonglong *) 0x0) {
                if ((uVar5 == **ppuVar7) &&
                    (iVar4 = (**(code * *)(lVar2 + 0x1ce8))(&local_38, *ppuVar7 + 2), iVar4 != 0)) {
                    puVar3 = *ppuVar7;
                    *ppuVar7 = (ulonglong *) puVar3[1];
                    FUN_14018b900(puVar3, 0);
                    *(longlong * )(lVar2 + 0x1cc8) = *(longlong * )(lVar2 + 0x1cc8) + -1;
                    goto LAB_140291f29;
                }
                ppuVar7 = (ulonglong * *)(*ppuVar7 + 1);
                puVar3 = *ppuVar7;
            }
            local_50 = 0;
            local_58 = &PTR_LAB_140b5e648;
            local_48 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_58);
            local_38 = local_58;
            local_30 = local_50;
            local_res8 = 0x141de4c40;
            local_28 = local_48;
            iVar4 = FUN_1401971e0(&DAT_140c8a448, 0xe, &local_res8, param_1[9], &local_38);
            local_58 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720, local_48);
            if (iVar4 != 0) {
                DebugBreak();
            }
        }
        LAB_140291f29:
        if ((undefined8 *) param_1[0x2d] != (undefined8 *) 0x0) {
            *(undefined8 *) param_1[0x2d] = param_1[0x2e];
        }
        if (param_1[0x2e] != 0) {
            *(undefined8 * )(param_1[0x2e] + 0x168) = param_1[0x2d];
        }
        param_1[0x2d] = 0;
        param_1[0x2e] = 0;
    }
    FUN_140292530(param_1, 0);
    lVar2 = param_1[0x12];
    if (lVar2 != 0) {
        iVar4 = *(int *) (lVar2 + -8);
        puVar8 = (undefined8 * )((longlong) iVar4 * 0x10 + lVar2);
        while (iVar4 = iVar4 + -1, -1 < iVar4) {
            pplVar1 = (longlong * *)(puVar8 + -2);
            puVar8 = puVar8 + -2;
            if (*pplVar1 != (longlong *) 0x0) {
                (**(code * *)(**pplVar1 + 0x10))();
                *puVar8 = 0;
            }
        }
        FUN_14018b900(lVar2 + -8, 0);
    }
    FUN_14018b900(param_1[0x13], 0);
    FUN_14018b900(param_1[9], 0);
    if ((undefined8 *) param_1[0x2d] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x2d] = param_1[0x2e];
    }
    if (param_1[0x2e] != 0) {
        *(undefined8 * )(param_1[0x2e] + 0x168) = param_1[0x2d];
    }
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    if ((undefined8 *) param_1[0x2b] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x2b] = param_1[0x2c];
    }
    if (param_1[0x2c] != 0) {
        *(undefined8 * )(param_1[0x2c] + 0x20) = param_1[0x2b];
    }
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    if ((undefined8 *) param_1[0x29] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x29] = param_1[0x2a];
    }
    if (param_1[0x2a] != 0) {
        *(undefined8 * )(param_1[0x2a] + 0x10) = param_1[0x29];
    }
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    param_1 = param_1 + 0x20;
    iVar4 = 5;
    do {
        lVar2 = param_1[-2];
        param_1 = param_1 + -2;
        if (lVar2 != 0) {
            (**(code * *)(*(longlong * )(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    return;
}


undefined8
FUN_1402920f0(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4,
              undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8) {
    undefined8 *puVar1;
    longlong *plVar2;
    uint uVar3;
    undefined auVar4[16];
    uint uVar5;
    undefined4 uVar6;
    undefined8 uVar7;
    ulonglong uVar8;
    longlong lVar9;
    uint *puVar10;
    longlong *plVar11;
    undefined8 *puVar12;

    *(undefined8 * )(param_1 + 0x18) = 0;
    *(undefined8 * )(param_1 + 0x20) = 0;
    *(undefined8 * )(param_1 + 0x28) = 0;
    *(undefined8 * )(param_1 + 0x30) = 0;
    *(undefined8 * )(param_1 + 0x38) = 0;
    *(undefined8 * )(param_1 + 0x40) = 0;
    *(undefined8 * )(param_1 + 0x50) = 0;
    *(undefined4 * )(param_1 + 0x1c) = param_2;
    *(undefined4 * )(param_1 + 0x34) = param_5;
    *(undefined4 * )(param_1 + 0x20) = param_2;
    *(undefined4 * )(param_1 + 0x38) = param_6;
    *(undefined4 * )(param_1 + 0x3c) = param_7;
    *(undefined4 * )(param_1 + 0x18) = 2;
    *(undefined8 * )(param_1 + 0x24) = 1;
    *(undefined4 * )(param_1 + 0x2c) = param_3;
    *(undefined4 * )(param_1 + 0x30) = param_4;
    *(undefined4 * )(param_1 + 0x40) = param_8;
    *(undefined8 * )(param_1 + 0x48) = 0;
    uVar7 = FUN_140263970(param_1 + 0x18, *(longlong * )(param_1 + 0x10) + 0x88);
    if (-1 < (int) uVar7) {
        uVar6 = FUN_140263e70(param_1 + 0x18);
        *(undefined4 * )(param_1 + 0x88) = uVar6;
        lVar9 = (longlong) * (int *) (param_1 + 0x34) * 4;
        uVar3 = *(uint * )(lVar9 + *(longlong * )(*(longlong * )(param_1 + 0x10) + 0x1b78));
        if ((*(int *) (lVar9 + *(longlong * )(*(longlong * )(param_1 + 0x10) + 0x1b80)) == 0) &&
            (uVar3 == 0)) {
            uVar5 = *(int *) (param_1 + 0x2c) * 6;
            uVar8 = SUB168(ZEXT816(0x10) * ZEXT416(uVar5), 0);
            if (SUB168(ZEXT816(0x10) * ZEXT416(uVar5) >> 0x40, 0) != 0) {
                uVar8 = 0xffffffffffffffff;
            }
            lVar9 = uVar8 + 8;
            if (0xfffffffffffffff7 < uVar8) {
                lVar9 = -1;
            }
            puVar10 = (uint *) FUN_14018b280(lVar9, 0);
            if (puVar10 == (uint *) 0x0) {
                puVar12 = (undefined8 *) 0x0;
            } else {
                puVar12 = (undefined8 * )(puVar10 + 2);
                *puVar10 = uVar5;
                puVar1 = puVar12;
                while (uVar5 = uVar5 - 1, -1 < (int) uVar5) {
                    *puVar1 = 0;
                    puVar1 = puVar1 + 2;
                }
            }
            *(undefined8 * *)(param_1 + 0x90) = puVar12;
        }
        if ((uVar3 & 1) != 0) {
            auVar4 = ZEXT816(4) * ZEXT416((uint)(*(int *) (param_1 + 0x2c) * 6));
            uVar7 = SUB168(auVar4, 0);
            if (SUB168(auVar4 >> 0x40, 0) != 0) {
                uVar7 = 0xffffffffffffffff;
            }
            uVar7 = FUN_14018b280(uVar7, 0);
            *(undefined8 * )(param_1 + 0x98) = uVar7;
        }
        uVar7 = FUN_140292530(param_1, 2);
        if (-1 < (int) uVar7) {
            plVar11 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x1c40);
            if (*(longlong * )(param_1 + 0x168) == 0) {
                *(longlong * *)(param_1 + 0x168) = plVar11;
                plVar2 = (longlong * )(param_1 + 0x170);
                *plVar2 = *plVar11;
                *plVar11 = param_1;
                if (*plVar2 != 0) {
                    *(longlong * *)(*plVar2 + 0x168) = plVar2;
                }
            }
            uVar7 = 0;
        }
    }
    return uVar7;
}



// WARNING: Could not reconcile some variable overlaps

undefined8
FUN_1402922b0(ulonglong param_1, undefined8 param_2, undefined4 param_3, uint param_4,
              undefined4 param_5, undefined4 param_6, undefined4 param_7) {
    ulonglong **ppuVar1;
    longlong lVar2;
    int iVar3;
    undefined8 uVar4;
    ulonglong uVar5;
    ulonglong *puVar6;
    ulonglong *puVar7;
    longlong *plVar8;
    undefined8 local_68;
    undefined **local_60;
    undefined8 local_58;
    LPVOID local_50;
    code *local_48;
    undefined8 local_40;
    undefined8 local_38;
    undefined **local_28;
    ulonglong local_20;
    LPVOID local_18;
    ulonglong local_10;

    if (param_4 < 2) {
        *(undefined8 * )(param_1 + 0x18) = 0;
        *(undefined8 * )(param_1 + 0x20) = 0;
        *(undefined8 * )(param_1 + 0x28) = 0;
        *(undefined8 * )(param_1 + 0x30) = 0;
        *(undefined8 * )(param_1 + 0x38) = 0;
        *(undefined8 * )(param_1 + 0x40) = 0;
        *(undefined8 * )(param_1 + 0x48) = 0;
        *(undefined8 * )(param_1 + 0x50) = 0;
        *(undefined4 * )(param_1 + 0x38) = param_5;
        *(undefined4 * )(param_1 + 0x18) = 2;
        *(undefined4 * )(param_1 + 0x3c) = param_6;
        *(undefined4 * )(param_1 + 0x28) = param_3;
        *(undefined4 * )(param_1 + 0x40) = param_7;
        *(uint * )(param_1 + 0x34) = param_4;
        uVar4 = FUN_14018e9c0(param_2);
        *(undefined8 * )(param_1 + 0x48) = uVar4;
        uVar4 = FUN_140292530(param_1);
        if (-1 < (int) uVar4) {
            lVar2 = *(longlong * )(param_1 + 0x10);
            plVar8 = (longlong * )(lVar2 + 0x1cc8);
            local_28 = (undefined **)
                    CONCAT44(*(undefined4 * )(param_1 + 0x34), *(undefined4 * )(param_1 + 0x28));
            local_20 = *(ulonglong * )(param_1 + 0x38);
            local_10 = *(ulonglong * )(param_1 + 0x48);
            local_18 = (LPVOID) CONCAT44(*(undefined4 * )(param_1 + 0x50), *(undefined4 * )(param_1 + 0x40));
            if (*plVar8 == *(longlong * )(lVar2 + 0x1cd0)) {
                FUN_1400290d0(plVar8);
            }
            uVar5 = (**(code * *)(lVar2 + 0x1ce0))(&local_28);
            ppuVar1 = (ulonglong * *)
                    (*(longlong * )(lVar2 + 0x1cd8) + (uVar5 % *(ulonglong * )(lVar2 + 0x1cd0)) * 8);
            puVar6 = (ulonglong *) FUN_14018b280(0x38);
            puVar7 = (ulonglong *) 0x0;
            if (puVar6 != (ulonglong *) 0x0) {
                puVar7 = *ppuVar1;
                *puVar6 = uVar5;
                puVar6[1] = (ulonglong) puVar7;
                puVar6[2] = (ulonglong) local_28;
                puVar6[3] = local_20;
                puVar6[4] = (ulonglong) local_18;
                puVar6[6] = param_1;
                puVar6[5] = local_10;
                puVar7 = puVar6;
            }
            *ppuVar1 = puVar7;
            *plVar8 = *plVar8 + 1;
            puVar7 = (ulonglong * )(*(longlong * )(param_1 + 0x10) + 0x1c40);
            if (*(longlong * )(param_1 + 0x168) == 0) {
                *(ulonglong * *)(param_1 + 0x168) = puVar7;
                puVar6 = (ulonglong * )(param_1 + 0x170);
                *puVar6 = *puVar7;
                *puVar7 = param_1;
                if (*puVar6 != 0) {
                    *(ulonglong * *)(*puVar6 + 0x168) = puVar6;
                }
            }
            local_60 = *(undefined * **)(param_1 + 0x48);
            local_58 = (ulonglong) local_58._4_4_ << 0x20;
            local_40 = 0;
            local_38 = 0;
            local_48 = FUN_140292f00;
            local_50 = (LPVOID) param_1;
            FUN_1401b6bf0(puVar7, &local_60, param_1 + 0x130);
            uVar4 = 0;
        }
    } else {
        local_60 = &PTR_LAB_140b5e648;
        local_58 = 0;
        local_50 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_60);
        local_28 = local_60;
        local_68 = 0x141de4b90;
        local_18 = local_50;
        local_20 = local_58;
        iVar3 = FUN_1401971e0(&DAT_140c8a444, 0xe, &local_68, &local_28);
        local_60 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_50);
        if (iVar3 != 0) {
            DebugBreak();
        }
        uVar4 = 0x80004005;
    }
    return uVar4;
}


undefined8 FUN_140292530(longlong param_1, int param_2) {
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    int iVar4;
    undefined8 uVar5;
    int *piVar6;
    ulonglong uVar7;
    uint uVar8;
    ulonglong uVar9;
    uint uVar10;
    uint uVar11;
    ulonglong uVar12;
    ulonglong *puVar13;
    int iVar14;
    longlong lVar15;
    uint local_res8;
    ulonglong in_stack_ffffffffffffffa8;

    lVar2 = *(longlong * )(param_1 + 0x10);
    iVar14 = *(int *) (param_1 + 0x34);
    lVar15 = (longlong) iVar14 * 4;
    iVar1 = *(int *) (lVar15 + *(longlong * )(lVar2 + 0x1b80));
    if ((iVar1 != 0) || (iVar4 = 2, *(longlong * )(lVar2 + 0x19d8) != 0)) {
        iVar4 = 1;
    }
    if (*(int *) (param_1 + 0x58) < iVar4) {
        if (iVar4 <= param_2) {
            if (*(longlong * )(param_1 + 0x48) == 0) {
                uVar10 = *(uint * )(lVar15 + *(longlong * )(lVar2 + 0x1b78));
                if ((*(byte * )(param_1 + 0x3c) & 0x80) != 0) {
                    uVar10 = uVar10 | 0x400;
                }
                if ((uVar10 & 1) == 0) {
                    uVar5 = (**(code * *)(**(longlong * *)(lVar2 + 0x19d0) + 200))
                            (*(longlong * *)(lVar2 + 0x19d0), *(undefined4 * )(param_1 + 0x1c),
                             *(undefined4 * )(param_1 + 0x2c), uVar10,
                             (&DAT_140ae7b30)[*(int *) (param_1 + 0x30)], iVar1,
                             (undefined8 * )(param_1 + 0x78), 0);
                    if ((int) uVar5 < 0) goto LAB_1402925db;
                    if (*(int *) (param_1 + 0x34) == 4) {
                        FUN_14026bf20(*(undefined8 * )(param_1 + 0x10), *(undefined8 * )(param_1 + 0x78));
                    }
                } else {
                    uVar5 = FUN_14018b280();
                    *(undefined8 * )(param_1 + 0x80) = uVar5;
                    FUN_1407e4830(uVar5);
                    if ((&DAT_140ae64c0)[*(int *) (param_1 + 0x30)] == 0) {
                        uVar10 = 0;
                        uVar5 = (**(code * *)(**(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x19d0) + 200))();
                        if ((int) uVar5 < 0) goto LAB_1402925db;
                        if ((*(int *) (param_1 + 0x34) == 5) && (*(int *) (param_1 + 0x30) != 0x18)) {
                            FUN_14026bf20();
                        }
                        uVar11 = uVar10;
                        uVar8 = uVar10;
                        if (*(int *) (param_1 + 0x2c) != 0) {
                            do {
                                uVar5 = (**(code * *)(**(longlong * *)(param_1 + 0x78) + 0x90))();
                                if ((int) uVar5 < 0) goto LAB_1402925db;
                                uVar11 = uVar11 + 1;
                            } while ((uVar11 < 6) ||
                                     (uVar8 = uVar8 + 1, uVar11 = uVar10, uVar8 < *(uint * )(param_1 + 0x2c)));
                        }
                    } else {
                        uVar10 = 0;
                        if (*(int *) (*(longlong * )(param_1 + 0x10) + 0xd8) == 0) {
                            local_res8 = 0;
                            uVar11 = uVar10;
                            uVar8 = uVar10;
                            if (*(int *) (param_1 + 0x2c) != 0) {
                                do {
                                    do {
                                        uVar5 = (**(code * *)(
                                                **(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x19d0) +
                                                0xe8))();
                                        if ((int) uVar5 < 0) goto LAB_1402925db;
                                        if (*(int *) (param_1 + 0x34) == 5) {
                                            FUN_14026bf20();
                                        }
                                        uVar10 = uVar10 + 1;
                                    } while (uVar11 + uVar10 < 6);
                                    uVar10 = uVar8 + 6;
                                    local_res8 = local_res8 + 1;
                                    uVar11 = uVar11 - 6;
                                    uVar8 = uVar10;
                                } while (local_res8 < *(uint * )(param_1 + 0x2c));
                            }
                        } else {
                            uVar5 = (**(code * *)(**(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x19d0) + 200))();
                            if ((int) uVar5 < 0) goto LAB_1402925db;
                            if (*(int *) (param_1 + 0x34) == 5) {
                                FUN_14026bf20();
                            }
                            uVar11 = uVar10;
                            uVar8 = uVar10;
                            if (*(int *) (param_1 + 0x2c) != 0) {
                                do {
                                    uVar5 = (**(code * *)(**(longlong * *)(param_1 + 0x78) + 0x90))();
                                    if ((int) uVar5 < 0) goto LAB_1402925db;
                                    uVar11 = uVar11 + 1;
                                } while ((uVar11 < 6) ||
                                         (uVar8 = uVar8 + 1, uVar11 = uVar10, uVar8 < *(uint * )(param_1 + 0x2c)));
                            }
                        }
                    }
                    uVar12 = 0;
                    if ((*(longlong * )(param_1 + 0x98) != 0) && (*(int *) (param_1 + 0x2c) != 0)) {
                        do {
                            iVar14 = (int) uVar12;
                            *(int *) (*(longlong * )(param_1 + 0x98) + uVar12 * 4) =
                                    *(int *) (*(longlong * )(param_1 + 0x10) + 0xf0) + -1;
                            *(int *) (*(longlong * )(param_1 + 0x98) +
                                      (ulonglong)(uint)(*(int *) (param_1 + 0x2c) + iVar14) * 4) =
                                    *(int *) (*(longlong * )(param_1 + 0x10) + 0xf0) + -1;
                            *(int *) (*(longlong * )(param_1 + 0x98) +
                                      (ulonglong)(uint)(iVar14 + *(int *) (param_1 + 0x2c) * 2) * 4) =
                                    *(int *) (*(longlong * )(param_1 + 0x10) + 0xf0) + -1;
                            *(int *) (*(longlong * )(param_1 + 0x98) +
                                      (ulonglong)(uint)(iVar14 + *(int *) (param_1 + 0x2c) * 3) * 4) =
                                    *(int *) (*(longlong * )(param_1 + 0x10) + 0xf0) + -1;
                            *(int *) (*(longlong * )(param_1 + 0x98) +
                                      (ulonglong)(uint)(iVar14 + *(int *) (param_1 + 0x2c) * 4) * 4) =
                                    *(int *) (*(longlong * )(param_1 + 0x10) + 0xf0) + -1;
                            uVar12 = (ulonglong)(iVar14 + 1U);
                            *(int *) (*(longlong * )(param_1 + 0x98) +
                                      (ulonglong)(uint)(iVar14 + *(int *) (param_1 + 0x2c) * 5) * 4) =
                                    *(int *) (*(longlong * )(param_1 + 0x10) + 0xf0) + -1;
                        } while (iVar14 + 1U < *(uint * )(param_1 + 0x2c));
                    }
                }
                piVar6 = (int *) (*(longlong * )(param_1 + 0x10) + 0x2d4 +
                                  (longlong) * (int *) (param_1 + 0x34) * 0x30);
                LOCK();
                *piVar6 = *piVar6 + 1;
                LOCK();
                piVar6[1] = piVar6[1] + *(int *) (param_1 + 0x88);
                LOCK();
                piVar6[2] = piVar6[2] + 1;
                LOCK();
                piVar6[3] = piVar6[3] + *(int *) (param_1 + 0x88);
                *(undefined4 * )(param_1 + 0x5c) = 0;
            } else {
                uVar5 = FUN_14026c360(lVar2, 2, *(longlong * )(param_1 + 0x48), *(undefined4 * )(param_1 + 0x28),
                                      iVar14, *(undefined4 * )(param_1 + 0x3c),
                                      in_stack_ffffffffffffffa8 & 0xffffffff00000000, param_1 + 0x68);
                if ((int) uVar5 < 0) {
                    LAB_1402925db:
                    *(int *) (param_1 + 0x5c) = (int) uVar5;
                    return uVar5;
                }
            }
            goto LAB_140292b7a;
        }
        if (*(int *) (param_1 + 0x58) < iVar4) goto LAB_140292b7a;
    }
    if (param_2 < iVar4) {
        if (*(longlong * )(param_1 + 0x78) != 0) {
            piVar6 = (int *) (lVar2 + 0x2d4 + (longlong) iVar14 * 0x30);
            LOCK();
            *piVar6 = *piVar6 + -1;
            LOCK();
            piVar6[1] = piVar6[1] - *(int *) (param_1 + 0x88);
            LOCK();
            piVar6[4] = piVar6[4] + 1;
            LOCK();
            piVar6[5] = piVar6[5] + *(int *) (param_1 + 0x88);
        }
        if (*(longlong * )(param_1 + 0x80) != 0) {
            uVar10 = *(int *) (param_1 + 0x2c) * 6;
            if (uVar10 != 0) {
                uVar9 = (ulonglong) uVar10;
                uVar12 = 0;
                do {
                    lVar15 = *(longlong * )(param_1 + 0x80);
                    plVar3 = *(longlong * *)(lVar15 + uVar12);
                    if (plVar3 != (longlong *) 0x0) {
                        (**(code * *)(*plVar3 + 0x10))();
                        *(undefined8 * )(lVar15 + uVar12) = 0;
                    }
                    uVar12 = uVar12 + 8;
                    uVar9 = uVar9 - 1;
                } while (uVar9 != 0);
            }
            FUN_14018b900(*(undefined8 * )(param_1 + 0x80));
            *(undefined8 * )(param_1 + 0x80) = 0;
        }
        if (*(longlong * *)(param_1 + 0x78) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x78) + 0x10))();
            *(undefined8 * )(param_1 + 0x78) = 0;
        }
        if (*(longlong * *)(param_1 + 0x68) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x68) + 8))();
            *(undefined8 * )(param_1 + 0x68) = 0;
        }
        *(undefined4 * )(param_1 + 0x5c) = 0x8000000a;
        *(undefined4 * )(param_1 + 0x60) = 0;
        *(undefined8 * )(param_1 + 0x100) = 0;
        *(undefined8 * )(param_1 + 0x108) = 0;
        *(undefined8 * )(param_1 + 0x110) = 0;
        *(undefined8 * )(param_1 + 0x118) = 0;
        *(undefined8 * )(param_1 + 0x120) = 0;
        puVar13 = (ulonglong * )(param_1 + 0xa8);
        *(undefined8 * )(param_1 + 0x128) = 0;
        lVar15 = 6;
        do {
            uVar12 = 0;
            if (*puVar13 != 0) {
                do {
                    uVar9 = puVar13[-1];
                    *(undefined4 * )(uVar9 + uVar12 * 0x18) = 0;
                    *(undefined8 * )(uVar9 + 8 + uVar12 * 0x18) = 0;
                    uVar7 = (ulonglong)((int) uVar12 + 1);
                    *(undefined8 * )(uVar9 + 0x10 + uVar12 * 0x18) = 0;
                    uVar12 = uVar7;
                } while (uVar7 < *puVar13);
            }
            puVar13 = puVar13 + 2;
            lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
    }
    LAB_140292b7a:
    *(int *) (param_1 + 0x58) = param_2;
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140292bb0(longlong param_1) {
    longlong *plVar1;
    int iVar2;
    int iVar3;
    undefined4 uVar4;
    int *piVar5;
    undefined auStack360[32];
    undefined ***local_148;
    undefined4 *local_140;
    undefined ***local_138;
    undefined **local_128;
    undefined8 local_120;
    LPVOID local_118;
    undefined **local_110;
    wchar_t *local_108;
    LPVOID local_100;
    undefined8 local_f8;
    undefined **local_f0;
    undefined8 uStack232;
    undefined8 local_e0;
    int iStack216;
    undefined4 uStack212;
    undefined8 local_d0;
    undefined **local_c8;
    undefined8 local_c0;
    LPVOID local_b8;
    undefined **local_a8;
    wchar_t *local_a0;
    LPVOID local_98;
    undefined8 local_90;
    undefined4 local_88[4];
    undefined4 local_78[4];
    undefined4 local_68;
    undefined4 uStack100;
    undefined4 uStack96;
    undefined4 uStack92;
    undefined4 local_58;
    undefined4 uStack84;
    int iStack80;
    undefined4 uStack76;
    undefined4 local_48[6];
    undefined4 local_30;
    undefined4 local_2c;
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong) auStack360;
    plVar1 = *(longlong * *)(param_1 + 0x68);
    local_88[0] = 0xffffffff;
    (**(code * *)(*plVar1 + 0x20))(plVar1, local_88);
    iVar3 = *(int *) (plVar1 + 0x14);
    if (-1 < iVar3) {
        plVar1 = *(longlong * *)(param_1 + 0x68);
        local_78[0] = 0xffffffff;
        (**(code * *)(*plVar1 + 0x20))(plVar1, local_78);
        if (plVar1[7] == 0) {
            iVar3 = -0x7fffbffb;
        } else {
            *(longlong * )(param_1 + 0x78) = plVar1[7];
            (**(code * *)(*(longlong *) plVar1[7] + 8))();
            iVar3 = (**(code * *)(**(longlong * *)(param_1 + 0x78) + 0x88))
                    (*(longlong * *)(param_1 + 0x78), 0, local_48);
            if (-1 < iVar3) {
                *(undefined4 * )(param_1 + 0x24) = 1;
                *(undefined4 * )(param_1 + 0x1c) = local_30;
                *(undefined4 * )(param_1 + 0x20) = local_2c;
                uVar4 = (**(code * *)(**(longlong * *)(param_1 + 0x78) + 0x68))();
                *(undefined4 * )(param_1 + 0x2c) = uVar4;
                uVar4 = FUN_14026c430(local_48[0]);
                *(undefined4 * )(param_1 + 0x30) = uVar4;
                iVar3 = FUN_140263970(param_1 + 0x18, *(longlong * )(param_1 + 0x10) + 0x88);
                if (-1 < iVar3) {
                    uVar4 = FUN_140263e70(param_1 + 0x18);
                    *(undefined4 * )(param_1 + 0x88) = uVar4;
                    piVar5 = (int *) (*(longlong * )(param_1 + 0x10) + 0x2d4 +
                                      (longlong) * (int *) (param_1 + 0x34) * 0x30);
                    LOCK();
                    *piVar5 = *piVar5 + 1;
                    LOCK();
                    piVar5[1] = piVar5[1] + *(int *) (param_1 + 0x88);
                    LOCK();
                    piVar5[2] = piVar5[2] + 1;
                    LOCK();
                    piVar5[3] = piVar5[3] + *(int *) (param_1 + 0x88);
                    LOCK();
                    piVar5[8] = piVar5[8] + 1;
                    LOCK();
                    piVar5[9] = piVar5[9] + *(int *) (param_1 + 0x88);
                    *(undefined4 * )(param_1 + 0x70) = *(undefined4 * )(*(longlong * )(param_1 + 0x68) + 0x54);
                    uVar4 = *(undefined4 * )(*(longlong * )(param_1 + 0x68) + 0x58);
                    *(undefined4 * )(param_1 + 0x5c) = 0;
                    *(undefined4 * )(param_1 + 0x74) = uVar4;
                    *(undefined4 * )(param_1 + 0x60) = 1;
                    goto LAB_140292df4;
                }
            }
        }
    }
    local_128 = &PTR_LAB_140b5e648;
    local_120 = 0;
    local_118 = TlsGetValue(DAT_140c63720);
    TlsSetValue(DAT_140c63720, &local_128);
    local_c8 = local_128;
    local_c0 = local_120;
    local_f0 = &PTR_LAB_140b5e648;
    uStack232 = L"Result";
    local_b8 = local_118;
    local_e0 = TlsGetValue(DAT_140c63720);
    TlsSetValue(DAT_140c63720, &local_f0);
    local_f8 = *(undefined8 * )(param_1 + 0x48);
    local_110 = &PTR_LAB_140b5e648;
    local_f0 = &PTR_LAB_140b5e640;
    local_58 = (undefined4) local_e0;
    uStack84 = local_e0._4_4_;
    uStack76 = uStack212;
    local_108 = L"FileName";
    local_68 = 0x40b5e640;
    uStack100 = 1;
    uStack96 = (undefined4) uStack232;
    uStack92 = uStack232._4_4_;
    iStack216 = iVar3;
    iStack80 = iVar3;
    local_100 = TlsGetValue(DAT_140c63720);
    TlsSetValue(DAT_140c63720, &local_110);
    local_a0 = local_108;
    local_110 = &PTR_LAB_140b5e638;
    local_d0 = 0x141de4b10;
    local_138 = &local_c8;
    local_a8 = &PTR_LAB_140b5e638;
    local_98 = local_100;
    local_148 = &local_a8;
    local_140 = &local_68;
    local_90 = local_f8;
    iVar2 = FUN_1401971e0(&DAT_140c8a438, 0xe, &local_d0, *(undefined8 * )(param_1 + 0x48));
    local_110 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720, local_100);
    local_f0 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720, local_e0);
    local_128 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720, local_118);
    if (iVar2 != 0) {
        DebugBreak();
    }
    *(int *) (param_1 + 0x5c) = iVar3;
    if (*(longlong * *)(param_1 + 0x78) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x78) + 0x10))();
        *(undefined8 * )(param_1 + 0x78) = 0;
    }
    LAB_140292df4:
    FUN_1407db4f0(local_28 ^ (ulonglong) auStack360);
    return;
}


void FUN_140292f00(longlong param_1) {
    ulonglong *puVar1;
    longlong lVar2;
    ulonglong uVar3;
    DWORD DVar4;
    int iVar5;
    HANDLE hObject;
    ulonglong uVar6;

    lVar2 = *(longlong * )(param_1 + 0x10);
    DVar4 = GetCurrentThreadId();
    uVar6 = 0;
    if (*(DWORD * )(lVar2 + 0x18) == DVar4) {
        *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(lVar2 + 0x20);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
            if (uVar3 == 0) {
                *(DWORD * )(lVar2 + 0x18) = DVar4;
                goto LAB_140292f60;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(lVar2 + 0x18, DVar4);
    }
    LAB_140292f60:
    iVar5 = FUN_140292530(param_1, 0);
    if (-1 < iVar5) {
        FUN_140292530(param_1, 2);
    }
    if (*(ulonglong * )(lVar2 + 0x20) < 2) {
        *(undefined4 * )(lVar2 + 0x18) = 0;
        *(undefined8 * )(lVar2 + 0x20) = 0;
        if (*(longlong * )(lVar2 + 0x28) != 0) {
            if (*(longlong * )(lVar2 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar2 + 0x30);
                uVar6 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar6 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar2 + 0x30));
        }
        return;
    }
    *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + -1;
    return;
}


undefined8 FUN_140293230(longlong param_1) {
    undefined8 uVar1;

    if (*(longlong * *)(param_1 + 0x68) != (longlong *) 0x0) {
        uVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x68) + 0x20))();
        if ((int) uVar1 == 0) {
            return uVar1;
        }
        FUN_140292bb0(param_1);
        if (*(longlong * *)(param_1 + 0x68) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x68) + 8))();
            *(undefined8 * )(param_1 + 0x68) = 0;
        }
    }
    return 1;
}


void FUN_140293b20(longlong *param_1, int param_2, ulonglong param_3) {
    uint *puVar1;
    uint uVar2;
    longlong *plVar3;
    int iVar4;
    uint uVar5;
    longlong lVar6;
    ulonglong uVar7;
    longlong *local_res8;
    longlong *local_res20;
    undefined4 local_28[4];

    lVar6 = (longlong) param_2;
    param_3 = param_3 & 0xffffffff;
    local_28[0] = 0xffffffff;
    (**(code * *)(*param_1 + 0x20))(param_1, local_28);
    uVar5 = 1 << ((byte) param_3 & 0x1f);
    uVar2 = *(uint * )((longlong) param_1 + lVar6 * 4 + 0x100);
    if ((uVar5 & (*(uint * )((longlong) param_1 + lVar6 * 4 + 0x118) | uVar2)) == 0) {
        return;
    }
    if ((uVar5 & uVar2) != 0) {
        uVar2 = *(uint * )(param_1[(lVar6 + 10) * 2] + param_3 * 0x18);
        if (1 < uVar2) {
            *(uint * )(param_1[(lVar6 + 10) * 2] + param_3 * 0x18) = uVar2 - 1;
            return;
        }
    }
    plVar3 = (longlong *) param_1[0xf];
    if (plVar3 == (longlong *) 0x0) {
        return;
    }
    if (param_1[0x12] == 0) {
        iVar4 = (**(code * *)(*plVar3 + 0xa0))(plVar3, (&DAT_140ae7b00)[lVar6], param_3);
        if (iVar4 < 0) {
            return;
        }
        uVar2 = *(uint * )((longlong) param_1 + lVar6 * 4 + 0x100);
        if ((uVar5 & uVar2) != 0) {
            *(uint * )((longlong) param_1 + lVar6 * 4 + 0x100) = ~uVar5 & uVar2;
            *(undefined4 * )(param_1[(lVar6 + 10) * 2] + param_3 * 0x18) = 0;
            return;
        }
        puVar1 = (uint * )((longlong) param_1 + lVar6 * 4 + 0x118);
        *puVar1 = *puVar1 & ~uVar5;
        return;
    }
    if (*(uint * )((longlong) param_1 + 0x2c) <= (uint) param_3) {
        return;
    }
    FUN_14003d8f0(local_28, param_1[2] + 0x18);
    uVar7 = (ulonglong)(param_2 + (uint) param_3 * 6);
    plVar3 = *(longlong * *)(param_1[0x12] + uVar7 * 0x10);
    if (plVar3 != (longlong *) 0x0) {
        iVar4 = (**(code * *)(*plVar3 + 0xa0))(plVar3, 0);
        if (iVar4 < 0) {
            lVar6 = param_1[0x12];
            plVar3 = *(longlong * *)(lVar6 + uVar7 * 0x10);
            if (plVar3 != (longlong *) 0x0) {
                (**(code * *)(*plVar3 + 0x10))();
                *(undefined8 * )(lVar6 + uVar7 * 0x10) = 0;
                FUN_14003d880(local_28);
                return;
            }
        } else {
            if ((*(byte * )(param_1[0x12] + 8 + uVar7 * 0x10) & 2) == 0) {
                puVar1 = (uint * )((longlong) param_1 + lVar6 * 4 + 0x100);
                *puVar1 = *puVar1 & ~uVar5;
                *(undefined4 * )(param_1[(lVar6 + 10) * 2] + param_3 * 0x18) = 0;
            } else {
                puVar1 = (uint * )((longlong) param_1 + lVar6 * 4 + 0x118);
                *puVar1 = *puVar1 & ~uVar5;
                local_res20 = (longlong *) 0x0;
                local_res8 = (longlong *) 0x0;
                plVar3 = *(longlong * *)(param_1[0x12] + uVar7 * 0x10);
                iVar4 = (**(code * *)(*plVar3 + 0x90))(plVar3, 0, &local_res20);
                if (((iVar4 < 0) ||
                     (iVar4 = (**(code * *)(*(longlong *) param_1[0xf] + 0x90))
                             ((longlong *) param_1[0xf], (&DAT_140ae7b00)[lVar6], param_3, &local_res8
                             ), iVar4 < 0)) ||
                    ((iVar4 = (**(code * *)(**(longlong * *)(param_1[2] + 0x19d0) + 0xf0))
                            (*(longlong * *)(param_1[2] + 0x19d0), local_res20, 0, local_res8, 0),
                            iVar4 < 0 &&
                            (iVar4 = (*DAT_140c65710)(local_res8, 0, 0, local_res20, 0, 0, 1, 0), iVar4 < 0)))
                        ) {
                    lVar6 = param_1[0x12];
                    plVar3 = *(longlong * *)(lVar6 + uVar7 * 0x10);
                    if (plVar3 != (longlong *) 0x0) {
                        (**(code * *)(*plVar3 + 0x10))();
                        *(undefined8 * )(lVar6 + uVar7 * 0x10) = 0;
                    }
                    if (local_res8 != (longlong *) 0x0) {
                        (**(code * *)(*local_res8 + 0x10))();
                    }
                    if (local_res20 != (longlong *) 0x0) {
                        (**(code * *)(*local_res20 + 0x10))();
                        FUN_14003d880(local_28);
                        return;
                    }
                    goto LAB_140293daa;
                }
                if (local_res8 != (longlong *) 0x0) {
                    (**(code * *)(*local_res8 + 0x10))();
                }
                if (local_res20 != (longlong *) 0x0) {
                    (**(code * *)(*local_res20 + 0x10))();
                }
            }
            lVar6 = param_1[0x12];
            plVar3 = *(longlong * *)(lVar6 + uVar7 * 0x10);
            if (plVar3 != (longlong *) 0x0) {
                (**(code * *)(*plVar3 + 0x10))();
                *(undefined8 * )(lVar6 + uVar7 * 0x10) = 0;
            }
        }
    }
    LAB_140293daa:
    FUN_14003d880(local_28);
    return;
}


void FUN_140293e20(longlong param_1) {
    int iVar1;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    if (*(longlong * *)(param_1 + 0x78) != (longlong *) 0x0) {
        if ((*(byte * )(param_1 + 0x3c) & 0x80) != 0) {
            // WARNING: Could not recover jumptable at 0x000140293f02. Too many branches
            // WARNING: Treating indirect jump as call
            (**(code * *)(**(longlong * *)(param_1 + 0x78) + 0x80))();
            return;
        }
        local_40 = 0;
        local_48 = &PTR_LAB_140b5e648;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_48);
        local_28 = local_48;
        local_res8 = 0x141de4ed0;
        local_18 = local_38;
        local_20 = local_40;
        iVar1 = FUN_1401971e0(&DAT_140c8a430, 0xe, &local_res8, &local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_38);
        if (iVar1 != 0) {
            // WARNING: Could not recover jumptable at 0x000140293ef4. Too many branches
            // WARNING: Treating indirect jump as call
            DebugBreak();
            return;
        }
    }
    return;
}


int FUN_140295010(longlong *param_1, short *param_2) {
    longlong *plVar1;
    int iVar2;
    int iVar3;
    longlong *local_res10;
    undefined8 local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    if ((param_2 == (short *) 0x0) || (*param_2 == 0)) {
        return -0x7ff8ffa9;
    }
    if (*(int *) ((longlong) param_1 + 0x34) == 1) {
        local_48 = &PTR_LAB_140b5e648;
        local_40 = 0;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_48);
        local_28 = local_48;
        local_res10 = (longlong *) 0x141de4d10;
        local_18 = local_38;
        local_20 = local_40;
        iVar2 = FUN_1401971e0(&DAT_140c8a424, 0xe, &local_res10, &local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_38);
        if (iVar2 != 0) {
            DebugBreak();
        }
        return -0x7fffbffb;
    }
    local_48 = (undefined **) CONCAT44(local_48._4_4_, 0xffffffff);
    (**(code * *)(*param_1 + 0x20))(param_1, &local_48);
    if (param_1[0xf] != 0) {
        local_res10 = (longlong *) 0x0;
        iVar2 = FUN_14026c2c0(param_1[2], param_1[0xf], &local_res10);
        plVar1 = local_res10;
        if ((iVar2 < 0) || (iVar2 = FUN_14029b740(local_res10, param_2), iVar3 = 0, iVar2 < 0)) {
            iVar3 = iVar2;
        }
        if (plVar1 != (longlong *) 0x0) {
            (**(code * *)(*plVar1 + 8))(plVar1);
        }
        return iVar3;
    }
    return -0x7fffbffb;
}


int FUN_140295180(longlong param_1, longlong param_2) {
    int iVar1;
    int iVar2;
    undefined8 local_res10[3];
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    if (param_2 == 0) {
        return -0x7ff8ffa9;
    }
    if (*(int *) (param_1 + 0x34) == 1) {
        local_40 = 0;
        local_48 = &PTR_LAB_140b5e648;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_48);
        local_28 = local_48;
        local_res10[0] = 0x141de4ca0;
        local_18 = local_38;
        local_20 = local_40;
        iVar1 = FUN_1401971e0(&DAT_140c8a428, 0xe, local_res10, &local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_38);
        if (iVar1 != 0) {
            DebugBreak();
        }
    } else if (*(longlong * )(param_1 + 0x78) != 0) {
        iVar2 = (*DAT_140c65728)(3, *(longlong * )(param_1 + 0x78), param_2, param_2 + 0x30, param_2 + 0x60);
        iVar1 = 0;
        if (iVar2 < 0) {
            iVar1 = iVar2;
        }
        return iVar1;
    }
    return -0x7fffbffb;
}


void FUN_140295640(undefined8 param_1, float param_2, float param_3) {
    float *in_R9;
    float fVar1;
    float fVar2;

    fVar1 = (float) FUN_1408fc950(0x3f490fdb);
    fVar2 = (float) FUN_1408fe3d0(0x3f490fdb);
    in_R9[0xb] = -1.0;
    *(undefined8 * )(in_R9 + 1) = 0;
    *(undefined8 * )(in_R9 + 3) = 0;
    *(undefined8 * )(in_R9 + 6) = 0;
    *(undefined8 * )(in_R9 + 8) = 0;
    *(undefined8 * )(in_R9 + 0xc) = 0;
    in_R9[0xf] = 0.0;
    param_3 = param_3 / (param_2 - param_3);
    *in_R9 = fVar1 / fVar2;
    in_R9[5] = fVar1 / fVar2;
    in_R9[10] = param_3;
    in_R9[0xe] = param_3 * param_2;
    return;
}


undefined8 FUN_1402956f0(ulonglong *param_1, longlong param_2, int *param_3) {
    ulonglong uVar1;
    undefined8 uVar2;
    ulonglong uVar3;

    if ((*param_3 != 0x54475453) || (param_3[1] != 3)) {
        return 0x80004005;
    }
    uVar2 = FUN_1402964b0(param_1, param_2, param_3 + 2);
    if ((int) uVar2 < 0) {
        return uVar2;
    }
    uVar1 = *(longlong * )(param_3 + 8) + param_2;
    if ((*param_1 <= uVar1) &&
        (uVar3 = *(longlong * )(param_3 + 8) + (ulonglong)(uint)
        param_3[6] * 4 + param_2,
                uVar3 < param_1[1] || uVar3 == param_1[1])) {
        uVar3 = 0;
        if (param_3[6] != 0) {
            uVar3 = uVar1;
        }
        *(ulonglong * )(param_3 + 8) = uVar3;
        uVar2 = FUN_1402964b0(param_1, param_2, param_3 + 10);
        if ((int) uVar2 < 0) {
            return uVar2;
        }
        uVar1 = *(longlong * )(param_3 + 0x10) + param_2;
        if ((*param_1 <= uVar1) &&
            (uVar3 = *(longlong * )(param_3 + 0x10) + (ulonglong)(uint)
            param_3[0xe] * 4 + param_2,
                    uVar3 < param_1[1] || uVar3 == param_1[1])) {
            uVar3 = 0;
            if (param_3[0xe] != 0) {
                uVar3 = uVar1;
            }
            *(ulonglong * )(param_3 + 0x10) = uVar3;
            return 0;
        }
    }
    return 0x80004005;
}


void FUN_1402957d0(undefined8 *param_1) {
    int iVar1;

    *param_1 = &PTR_FUN_140b61a38;
    if ((longlong *) param_1[0xb] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0xb] + 8))();
        param_1[0xb] = 0;
    }
    if (param_1[0x12] != 0) {
        if (param_1[4] != 0) {
            FUN_1400b6120(param_1[2] + 0x1cf0, param_1 + 4);
        }
        if ((undefined8 *) param_1[0x12] != (undefined8 *) 0x0) {
            *(undefined8 *) param_1[0x12] = param_1[0x13];
        }
        if (param_1[0x13] != 0) {
            *(undefined8 * )(param_1[0x13] + 0x90) = param_1[0x12];
        }
        param_1[0x12] = 0;
        param_1[0x13] = 0;
    }
    if (0 < *(int *) (param_1 + 5)) {
        iVar1 = FUN_140295b40(param_1);
        if (iVar1 < 0) goto LAB_140295872;
    }
    *(undefined4 * )(param_1 + 5) = 0;
    LAB_140295872:
    FUN_14018b900(param_1[4], 0);
    if ((undefined8 *) param_1[0x12] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x12] = param_1[0x13];
    }
    if (param_1[0x13] != 0) {
        *(undefined8 * )(param_1[0x13] + 0x90) = param_1[0x12];
    }
    param_1[0x12] = 0;
    param_1[0x13] = 0;
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
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    if ((longlong *) param_1[8] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[8] + 8))();
    }
    if ((longlong *) param_1[7] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[7] + 8))();
    }
    return;
}


undefined8 FUN_140295950(ulonglong param_1, undefined8 param_2) {
    ulonglong **ppuVar1;
    undefined4 uVar2;
    longlong lVar3;
    undefined8 uVar4;
    ulonglong uVar5;
    ulonglong *puVar6;
    ulonglong *puVar7;
    longlong *plVar8;
    undefined8 local_48;
    undefined4 local_40;
    ulonglong local_38;
    code *local_30;
    undefined8 local_28;
    undefined8 local_20;

    puVar7 = (ulonglong *) 0x0;
    uVar2 = *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 0xb0);
    *(undefined4 * )(param_1 + 0x1c) = 0;
    *(undefined4 * )(param_1 + 0x18) = uVar2;
    uVar4 = FUN_14018e9c0(param_2);
    *(undefined8 * )(param_1 + 0x20) = uVar4;
    if ((0 < *(int *) (param_1 + 0x28)) || (uVar4 = FUN_140295aa0(param_1), -1 < (int) uVar4)) {
        lVar3 = *(longlong * )(param_1 + 0x10);
        plVar8 = (longlong * )(lVar3 + 0x1cf0);
        *(undefined4 * )(param_1 + 0x28) = 2;
        if (*plVar8 == *(longlong * )(lVar3 + 0x1cf8)) {
            FUN_1400290d0(plVar8);
        }
        uVar5 = (**(code * *)(lVar3 + 0x1d08))(param_1 + 0x20);
        ppuVar1 = (ulonglong * *)
                (*(longlong * )(lVar3 + 0x1d00) + (uVar5 % *(ulonglong * )(lVar3 + 0x1cf8)) * 8);
        puVar6 = (ulonglong *) FUN_14018b280(0x20);
        if (puVar6 != (ulonglong *) 0x0) {
            puVar7 = *ppuVar1;
            *puVar6 = uVar5;
            puVar6[1] = (ulonglong) puVar7;
            uVar5 = *(ulonglong * )(param_1 + 0x20);
            puVar6[3] = param_1;
            puVar6[2] = uVar5;
            puVar7 = puVar6;
        }
        *ppuVar1 = puVar7;
        *plVar8 = *plVar8 + 1;
        puVar7 = (ulonglong * )(*(longlong * )(param_1 + 0x10) + 0x1c48);
        if (*(longlong * )(param_1 + 0x90) == 0) {
            *(ulonglong * *)(param_1 + 0x90) = puVar7;
            puVar6 = (ulonglong * )(param_1 + 0x98);
            *puVar6 = *puVar7;
            *puVar7 = param_1;
            if (*puVar6 != 0) {
                *(ulonglong * *)(*puVar6 + 0x90) = puVar6;
            }
        }
        local_48 = *(undefined8 * )(param_1 + 0x20);
        local_40 = 0;
        local_28 = 0;
        local_20 = 0;
        local_30 = FUN_140295f90;
        local_38 = param_1;
        FUN_1401b6bf0(puVar7, &local_48, param_1 + 0x58);
        uVar4 = 0;
    }
    return uVar4;
}


undefined4 FUN_140295aa0(longlong param_1) {
    int iVar1;
    undefined4 uVar2;
    longlong *local_res8;
    undefined4 local_38;
    undefined4 local_34;
    longlong local_30;
    code *local_28;
    undefined8 local_20;
    undefined4 local_18;

    uVar2 = 0;
    local_res8 = (longlong *) 0x0;
    iVar1 = FUN_1401b6de0(param_1, *(undefined8 * )(param_1 + 0x20), param_1 + 0x38, &local_res8, 0);
    if (-1 < iVar1) {
        local_28 = FUN_140295c40;
        local_38 = 0xc;
        local_34 = 2;
        local_20 = 0;
        local_18 = 1;
        local_30 = param_1;
        iVar1 = FUN_14019dca0(&local_38, 0, local_res8, param_1 + 0x40);
        if (-1 < iVar1) goto LAB_140295b22;
    }
    uVar2 = FUN_140295d90(param_1, iVar1);
    LAB_140295b22:
    if (local_res8 != (longlong *) 0x0) {
        (**(code * *)(*local_res8 + 8))();
    }
    return uVar2;
}


undefined8 FUN_140295b40(longlong param_1) {
    longlong lVar1;
    longlong *plVar2;
    ulonglong uVar3;
    uint uVar4;
    undefined4 local_18[4];

    uVar3 = 0;
    if (*(longlong * *)(param_1 + 0x40) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x40) + 0x68))();
        local_18[0] = 0xffffffff;
        (**(code * *)(**(longlong * *)(param_1 + 0x40) + 0x20))(*(longlong * *)(param_1 + 0x40), local_18);
        if (*(longlong * *)(param_1 + 0x40) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x40) + 8))();
            *(undefined8 * )(param_1 + 0x40) = 0;
        }
    }
    if (*(longlong * )(param_1 + 0x48) != 0) {
        lVar1 = *(longlong * )(param_1 + 0x10);
        LOCK();
        *(int *) (lVar1 + 0xf4) = *(int *) (lVar1 + 0xf4) + -1;
        LOCK();
        *(int *) (lVar1 + 0xf8) = *(int *) (lVar1 + 0xf8) - *(int *) (param_1 + 0x2c);
        LOCK();
        *(int *) (lVar1 + 0x104) = *(int *) (lVar1 + 0x104) + 1;
        LOCK();
        *(int *) (lVar1 + 0x108) = *(int *) (lVar1 + 0x108) + *(int *) (param_1 + 0x2c);
        if (*(int *) (*(longlong * )(param_1 + 0x30) + 8) != 0) {
            do {
                lVar1 = *(longlong * )(param_1 + 0x48);
                plVar2 = *(longlong * *)(lVar1 + uVar3 * 8);
                if (plVar2 != (longlong *) 0x0) {
                    (**(code * *)(*plVar2 + 0x10))();
                    *(undefined8 * )(lVar1 + uVar3 * 8) = 0;
                }
                uVar4 = (int) uVar3 + 1;
                uVar3 = (ulonglong) uVar4;
            } while (uVar4 < *(uint * )(*(longlong * )(param_1 + 0x30) + 8));
        }
        FUN_14018b900(*(undefined8 * )(param_1 + 0x48), 0);
        *(undefined8 * )(param_1 + 0x48) = 0;
    }
    if (*(longlong * *)(param_1 + 0x38) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x38) + 8))();
        *(undefined8 * )(param_1 + 0x38) = 0;
    }
    *(undefined8 * )(param_1 + 0x30) = 0;
    *(undefined4 * )(param_1 + 0x2c) = 0;
    *(undefined4 * )(param_1 + 0x1c) = 0;
    return 0;
}


undefined8 FUN_140295c40(longlong param_1) {
    longlong lVar1;
    undefined auVar2[16];
    int iVar3;
    uint uVar4;
    LPVOID pvVar5;
    undefined8 uVar6;
    longlong lVar7;
    longlong *plVar8;
    longlong local_28;
    longlong local_20;
    undefined8 local_18;

    if (DAT_140c63758 != 0) {
        pvVar5 = TlsGetValue(*(DWORD * )(DAT_140c63758 + 4));
        if ((pvVar5 != (LPVOID) 0x0) && (*(longlong * )((longlong) pvVar5 + 8) != 0)) {
            plVar8 = *(longlong * *)(*(longlong * )((longlong) pvVar5 + 8) + 0x60);
            goto LAB_140295c74;
        }
    }
    plVar8 = (longlong *) 0x0;
    LAB_140295c74:
    iVar3 = (**(code * *)(*plVar8 + 0x28))(plVar8, 0);
    if (iVar3 < 0) {
        uVar6 = FUN_140295d90(param_1, iVar3);
        return uVar6;
    }
    lVar7 = (**(code * *)(**(longlong * *)(param_1 + 0x38) + 0x20))();
    uVar4 = (**(code * *)(**(longlong * *)(param_1 + 0x38) + 0x10))();
    local_18 = 0;
    local_20 = (ulonglong) uVar4 + lVar7;
    local_28 = lVar7;
    iVar3 = FUN_1402956f0(&local_28, lVar7 + 0x50, lVar7);
    if (iVar3 < 0) {
        uVar6 = FUN_140295d90(param_1, iVar3);
        return uVar6;
    }
    *(undefined4 * )(param_1 + 0x1c) = *(undefined4 * )(lVar7 + 0x18);
    auVar2 = ZEXT816(8) * ZEXT416(*(uint * )(lVar7 + 8));
    uVar6 = SUB168(auVar2, 0);
    if (SUB168(auVar2 >> 0x40, 0) != 0) {
        uVar6 = 0xffffffffffffffff;
    }
    uVar6 = FUN_14018b280(uVar6, 0);
    *(undefined8 * )(param_1 + 0x48) = uVar6;
    FUN_1407e4830(uVar6, 0, (ulonglong) * (uint * )(lVar7 + 8) << 3);
    lVar1 = *(longlong * )(param_1 + 0x10);
    *(longlong * )(param_1 + 0x30) = lVar7;
    *(uint * )(param_1 + 0x2c) = uVar4;
    LOCK();
    *(int *) (lVar1 + 0xf4) = *(int *) (lVar1 + 0xf4) + 1;
    LOCK();
    *(int *) (lVar1 + 0xf8) = *(int *) (lVar1 + 0xf8) + *(int *) (param_1 + 0x2c);
    LOCK();
    *(int *) (lVar1 + 0xfc) = *(int *) (lVar1 + 0xfc) + 1;
    LOCK();
    *(int *) (lVar1 + 0x100) = *(int *) (lVar1 + 0x100) + *(int *) (param_1 + 0x2c);
    LOCK();
    *(int *) (lVar1 + 0x114) = *(int *) (lVar1 + 0x114) + 1;
    LOCK();
    *(int *) (lVar1 + 0x118) = *(int *) (lVar1 + 0x118) + *(int *) (param_1 + 0x2c);
    *(undefined4 * )(param_1 + 0x50) = 0;
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

int FUN_140295d90(longlong param_1, int param_2) {
    int iVar1;
    undefined8 local_res8;
    undefined **local_d8;
    wchar_t *local_d0;
    LPVOID local_c8;
    undefined8 local_c0;
    undefined **local_b8;
    undefined8 local_b0;
    LPVOID local_a8;
    undefined **local_a0;
    undefined8 uStack152;
    undefined8 local_90;
    int iStack136;
    undefined4 uStack132;
    undefined **local_78;
    undefined8 local_70;
    LPVOID local_68;
    undefined **local_58;
    wchar_t *local_50;
    LPVOID local_48;
    undefined8 local_40;
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 uStack44;
    undefined4 local_28;
    undefined4 uStack36;
    int iStack32;
    undefined4 uStack28;

    if (param_2 < 0) {
        local_b0 = 0;
        local_b8 = &PTR_LAB_140b5e648;
        local_a8 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_b8);
        local_78 = local_b8;
        local_70 = local_b0;
        local_a0 = &PTR_LAB_140b5e648;
        uStack152 = L"Result";
        local_68 = local_a8;
        local_90 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_a0);
        local_c0 = *(undefined8 * )(param_1 + 0x20);
        local_d8 = &PTR_LAB_140b5e648;
        local_a0 = &PTR_LAB_140b5e640;
        local_28 = (undefined4) local_90;
        uStack36 = local_90._4_4_;
        uStack28 = uStack132;
        local_d0 = L"FileName";
        local_38 = 0x40b5e640;
        uStack52 = 1;
        uStack48 = (undefined4) uStack152;
        uStack44 = uStack152._4_4_;
        iStack136 = param_2;
        iStack32 = param_2;
        local_c8 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_d8);
        local_50 = local_d0;
        local_d8 = &PTR_LAB_140b5e638;
        local_res8 = 0x141de4fc0;
        local_58 = &PTR_LAB_140b5e638;
        local_48 = local_c8;
        local_40 = local_c0;
        iVar1 = FUN_1401971e0(&DAT_140c8a44c, 0xe, &local_res8, *(undefined8 * )(param_1 + 0x20), &local_58,
                              &local_38, &local_78);
        local_d8 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_c8);
        local_a0 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_90);
        local_b8 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_a8);
        if (iVar1 != 0) {
            DebugBreak();
        }
        if (*(longlong * *)(param_1 + 0x38) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x38) + 8))();
            *(undefined8 * )(param_1 + 0x38) = 0;
        }
        *(int *) (param_1 + 0x50) = param_2;
        return param_2;
    }
    *(int *) (param_1 + 0x50) = param_2;
    return param_2;
}


void FUN_140295f90(longlong param_1) {
    ulonglong *puVar1;
    longlong lVar2;
    ulonglong uVar3;
    DWORD DVar4;
    int iVar5;
    HANDLE hObject;
    ulonglong uVar6;

    lVar2 = *(longlong * )(param_1 + 0x10);
    DVar4 = GetCurrentThreadId();
    uVar6 = 0;
    if (*(DWORD * )(lVar2 + 0x18) == DVar4) {
        *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(lVar2 + 0x20);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
            if (uVar3 == 0) {
                *(DWORD * )(lVar2 + 0x18) = DVar4;
                goto LAB_140295ff0;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(lVar2 + 0x18, DVar4);
    }
    LAB_140295ff0:
    if ((*(int *) (param_1 + 0x28) < 1) || (iVar5 = FUN_140295b40(param_1), -1 < iVar5)) {
        *(undefined4 * )(param_1 + 0x28) = 0;
        iVar5 = FUN_140295aa0(param_1);
        if (-1 < iVar5) {
            *(undefined4 * )(param_1 + 0x28) = 2;
        }
    }
    if (*(ulonglong * )(lVar2 + 0x20) < 2) {
        *(undefined4 * )(lVar2 + 0x18) = 0;
        *(undefined8 * )(lVar2 + 0x20) = 0;
        if (*(longlong * )(lVar2 + 0x28) != 0) {
            if (*(longlong * )(lVar2 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar2 + 0x30);
                uVar6 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar6 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar2 + 0x30));
        }
        return;
    }
    *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + -1;
    return;
}


int FUN_140296090(longlong param_1) {
    ulonglong *puVar1;
    int iVar2;
    longlong lVar3;
    ulonglong uVar4;
    DWORD DVar5;
    HANDLE hObject;
    ulonglong uVar6;

    lVar3 = *(longlong * )(param_1 + 0x10);
    DVar5 = GetCurrentThreadId();
    uVar6 = 0;
    if (*(DWORD * )(lVar3 + 0x18) == DVar5) {
        *(longlong * )(lVar3 + 0x20) = *(longlong * )(lVar3 + 0x20) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(lVar3 + 0x20);
            uVar4 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar4 == 0) * (*puVar1 ^ 1);
            if (uVar4 == 0) {
                *(DWORD * )(lVar3 + 0x18) = DVar5;
                goto LAB_1402960fa;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(lVar3 + 0x18, DVar5);
    }
    LAB_1402960fa:
    *(int *) (param_1 + 8) = *(int *) (param_1 + 8) + 1;
    iVar2 = *(int *) (param_1 + 8);
    if (iVar2 == 1) {
        FUN_1401984d0(param_1 + 0x60);
    }
    if (*(ulonglong * )(lVar3 + 0x20) < 2) {
        *(undefined4 * )(lVar3 + 0x18) = 0;
        *(undefined8 * )(lVar3 + 0x20) = 0;
        if (*(longlong * )(lVar3 + 0x28) != 0) {
            if (*(longlong * )(lVar3 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar3 + 0x30);
                uVar6 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar6 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar3 + 0x30));
        }
    } else {
        *(longlong * )(lVar3 + 0x20) = *(longlong * )(lVar3 + 0x20) + -1;
    }
    return iVar2;
}


int FUN_140296180(longlong param_1) {
    longlong lVar1;
    ulonglong uVar2;
    DWORD DVar3;
    HANDLE hObject;
    ulonglong uVar4;
    DWORD *pDVar5;
    ulonglong *puVar6;
    int iVar7;

    lVar1 = *(longlong * )(param_1 + 0x10);
    pDVar5 = (DWORD * )(lVar1 + 0x18);
    DVar3 = GetCurrentThreadId();
    uVar4 = 0;
    puVar6 = (ulonglong * )(lVar1 + 0x20);
    if (*pDVar5 == DVar3) {
        *puVar6 = *puVar6 + 1;
    } else {
        do {
            LOCK();
            uVar2 = *puVar6;
            *puVar6 = *puVar6 ^ (ulonglong)(uVar2 == 0) * (*puVar6 ^ 1);
            if (uVar2 == 0) {
                *pDVar5 = DVar3;
                goto LAB_1402961fe;
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < 0x400);
        FUN_14019fb60(pDVar5, DVar3);
    }
    LAB_1402961fe:
    *(int *) (param_1 + 8) = *(int *) (param_1 + 8) + -1;
    iVar7 = *(int *) (param_1 + 8);
    if (iVar7 == -1) {
        FUN_1402957d0(param_1);
        FUN_14018b900(param_1, 0);
        iVar7 = 0;
    } else if (iVar7 == 0) {
        if (*(longlong * )(param_1 + 0x20) == 0) {
            FUN_1402957d0(param_1);
            FUN_14018b900(param_1, 0);
        } else {
            FUN_140198370(param_1 + 0x60, param_1, *(longlong * )(param_1 + 0x10) + 0x10);
        }
    }
    if (*puVar6 < 2) {
        *pDVar5 = 0;
        *puVar6 = 0;
        if (*(longlong * )(lVar1 + 0x28) != 0) {
            if (*(longlong * )(lVar1 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar6 = (ulonglong * )(lVar1 + 0x30);
                uVar4 = *puVar6;
                *puVar6 = *puVar6 ^ (ulonglong)(uVar4 == 0) * (*puVar6 ^ (ulonglong) hObject);
                if (uVar4 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar1 + 0x30));
        }
    } else {
        *puVar6 = *puVar6 - 1;
    }
    return iVar7;
}


undefined8 FUN_1402964b0(ulonglong *param_1, longlong param_2, uint *param_3) {
    ulonglong uVar1;
    ulonglong uVar2;
    uint *puVar3;
    uint uVar4;
    ulonglong uVar5;
    longlong lVar6;

    uVar5 = *(longlong * )(param_3 + 2) + param_2;
    if (uVar5 < *param_1) {
        return 0x80004005;
    }
    uVar4 = *param_3;
    uVar1 = *(longlong * )(param_3 + 2) + (ulonglong) uVar4 * 0x10 + param_2;
    if (uVar1 < param_1[1] || uVar1 == param_1[1]) {
        uVar1 = 0;
        if (uVar4 != 0) {
            uVar1 = uVar5;
        }
        uVar5 = 0;
        *(ulonglong * )(param_3 + 2) = uVar1;
        lVar6 = (ulonglong) uVar4 * 0x10 + uVar1;
        if (uVar4 != 0) {
            do {
                puVar3 = (uint * )(uVar5 * 0x10 + param_1[2] + *(longlong * )(param_3 + 2));
                uVar1 = *(longlong * )(puVar3 + 2) + lVar6;
                if ((uVar1 < *param_1) ||
                    (uVar2 = *(longlong * )(puVar3 + 2) + (ulonglong) * puVar3 + lVar6,
                            param_1[1] <= uVar2 && uVar2 != param_1[1])) {
                    return 0x80004005;
                }
                uVar2 = 0;
                if (*puVar3 != 0) {
                    uVar2 = uVar1;
                }
                uVar4 = (int) uVar5 + 1;
                uVar5 = (ulonglong) uVar4;
                *(ulonglong * )(puVar3 + 2) = uVar2;
            } while (uVar4 < *param_3);
        }
        return 0;
    }
    return 0x80004005;
}


void FUN_140296590(undefined8 *param_1) {
    int iVar1;

    *param_1 = &PTR_FUN_140b61a68;
    if ((longlong *) param_1[0xb] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0xb] + 8))();
        param_1[0xb] = 0;
    }
    if (param_1[0x12] != 0) {
        if (param_1[4] != 0) {
            FUN_1400b6120(param_1[2] + 0x1d18, param_1 + 4);
        }
        if ((undefined8 *) param_1[0x12] != (undefined8 *) 0x0) {
            *(undefined8 *) param_1[0x12] = param_1[0x13];
        }
        if (param_1[0x13] != 0) {
            *(undefined8 * )(param_1[0x13] + 0x90) = param_1[0x12];
        }
        param_1[0x12] = 0;
        param_1[0x13] = 0;
    }
    if (0 < *(int *) (param_1 + 5)) {
        iVar1 = FUN_140296900(param_1);
        if (iVar1 < 0) goto LAB_140296632;
    }
    *(undefined4 * )(param_1 + 5) = 0;
    LAB_140296632:
    FUN_14018b900(param_1[4], 0);
    if ((undefined8 *) param_1[0x12] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x12] = param_1[0x13];
    }
    if (param_1[0x13] != 0) {
        *(undefined8 * )(param_1[0x13] + 0x90) = param_1[0x12];
    }
    param_1[0x12] = 0;
    param_1[0x13] = 0;
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
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    if ((longlong *) param_1[8] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[8] + 8))();
    }
    if ((longlong *) param_1[7] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[7] + 8))();
    }
    return;
}


undefined8 FUN_140296710(ulonglong param_1, undefined8 param_2) {
    ulonglong **ppuVar1;
    undefined4 uVar2;
    longlong lVar3;
    undefined8 uVar4;
    ulonglong uVar5;
    ulonglong *puVar6;
    ulonglong *puVar7;
    longlong *plVar8;
    undefined8 local_48;
    undefined4 local_40;
    ulonglong local_38;
    code *local_30;
    undefined8 local_28;
    undefined8 local_20;

    puVar7 = (ulonglong *) 0x0;
    uVar2 = *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 0xb4);
    *(undefined4 * )(param_1 + 0x1c) = 0;
    *(undefined4 * )(param_1 + 0x18) = uVar2;
    uVar4 = FUN_14018e9c0(param_2);
    *(undefined8 * )(param_1 + 0x20) = uVar4;
    if ((0 < *(int *) (param_1 + 0x28)) || (uVar4 = FUN_140296860(param_1), -1 < (int) uVar4)) {
        lVar3 = *(longlong * )(param_1 + 0x10);
        plVar8 = (longlong * )(lVar3 + 0x1d18);
        *(undefined4 * )(param_1 + 0x28) = 2;
        if (*plVar8 == *(longlong * )(lVar3 + 0x1d20)) {
            FUN_1400290d0(plVar8);
        }
        uVar5 = (**(code * *)(lVar3 + 0x1d30))(param_1 + 0x20);
        ppuVar1 = (ulonglong * *)
                (*(longlong * )(lVar3 + 0x1d28) + (uVar5 % *(ulonglong * )(lVar3 + 0x1d20)) * 8);
        puVar6 = (ulonglong *) FUN_14018b280(0x20);
        if (puVar6 != (ulonglong *) 0x0) {
            puVar7 = *ppuVar1;
            *puVar6 = uVar5;
            puVar6[1] = (ulonglong) puVar7;
            uVar5 = *(ulonglong * )(param_1 + 0x20);
            puVar6[3] = param_1;
            puVar6[2] = uVar5;
            puVar7 = puVar6;
        }
        *ppuVar1 = puVar7;
        *plVar8 = *plVar8 + 1;
        puVar7 = (ulonglong * )(*(longlong * )(param_1 + 0x10) + 0x1c50);
        if (*(longlong * )(param_1 + 0x90) == 0) {
            *(ulonglong * *)(param_1 + 0x90) = puVar7;
            puVar6 = (ulonglong * )(param_1 + 0x98);
            *puVar6 = *puVar7;
            *puVar7 = param_1;
            if (*puVar6 != 0) {
                *(ulonglong * *)(*puVar6 + 0x90) = puVar6;
            }
        }
        local_48 = *(undefined8 * )(param_1 + 0x20);
        local_40 = 0;
        local_28 = 0;
        local_20 = 0;
        local_30 = FUN_140296d50;
        local_38 = param_1;
        FUN_1401b6bf0(puVar7, &local_48, param_1 + 0x58);
        uVar4 = 0;
    }
    return uVar4;
}


undefined4 FUN_140296860(longlong param_1) {
    int iVar1;
    undefined4 uVar2;
    longlong *local_res8;
    undefined4 local_38;
    undefined4 local_34;
    longlong local_30;
    code *local_28;
    undefined8 local_20;
    undefined4 local_18;

    uVar2 = 0;
    local_res8 = (longlong *) 0x0;
    iVar1 = FUN_1401b6de0(param_1, *(undefined8 * )(param_1 + 0x20), param_1 + 0x38, &local_res8, 0);
    if (-1 < iVar1) {
        local_28 = FUN_140296a00;
        local_38 = 0xc;
        local_34 = 2;
        local_20 = 0;
        local_18 = 1;
        local_30 = param_1;
        iVar1 = FUN_14019dca0(&local_38, 0, local_res8, param_1 + 0x40);
        if (-1 < iVar1) goto LAB_1402968e2;
    }
    uVar2 = FUN_140296b50(param_1, iVar1);
    LAB_1402968e2:
    if (local_res8 != (longlong *) 0x0) {
        (**(code * *)(*local_res8 + 8))();
    }
    return uVar2;
}


undefined8 FUN_140296900(longlong param_1) {
    longlong lVar1;
    longlong *plVar2;
    ulonglong uVar3;
    uint uVar4;
    undefined4 local_18[4];

    uVar3 = 0;
    if (*(longlong * *)(param_1 + 0x40) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x40) + 0x68))();
        local_18[0] = 0xffffffff;
        (**(code * *)(**(longlong * *)(param_1 + 0x40) + 0x20))(*(longlong * *)(param_1 + 0x40), local_18);
        if (*(longlong * *)(param_1 + 0x40) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x40) + 8))();
            *(undefined8 * )(param_1 + 0x40) = 0;
        }
    }
    if (*(longlong * )(param_1 + 0x48) != 0) {
        lVar1 = *(longlong * )(param_1 + 0x10);
        LOCK();
        *(int *) (lVar1 + 0x124) = *(int *) (lVar1 + 0x124) + -1;
        LOCK();
        *(int *) (lVar1 + 0x128) = *(int *) (lVar1 + 0x128) - *(int *) (param_1 + 0x2c);
        LOCK();
        *(int *) (lVar1 + 0x134) = *(int *) (lVar1 + 0x134) + 1;
        LOCK();
        *(int *) (lVar1 + 0x138) = *(int *) (lVar1 + 0x138) + *(int *) (param_1 + 0x2c);
        if (*(int *) (*(longlong * )(param_1 + 0x30) + 8) != 0) {
            do {
                lVar1 = *(longlong * )(param_1 + 0x48);
                plVar2 = *(longlong * *)(lVar1 + uVar3 * 8);
                if (plVar2 != (longlong *) 0x0) {
                    (**(code * *)(*plVar2 + 0x10))();
                    *(undefined8 * )(lVar1 + uVar3 * 8) = 0;
                }
                uVar4 = (int) uVar3 + 1;
                uVar3 = (ulonglong) uVar4;
            } while (uVar4 < *(uint * )(*(longlong * )(param_1 + 0x30) + 8));
        }
        FUN_14018b900(*(undefined8 * )(param_1 + 0x48), 0);
        *(undefined8 * )(param_1 + 0x48) = 0;
    }
    if (*(longlong * *)(param_1 + 0x38) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x38) + 8))();
        *(undefined8 * )(param_1 + 0x38) = 0;
    }
    *(undefined8 * )(param_1 + 0x30) = 0;
    *(undefined4 * )(param_1 + 0x2c) = 0;
    *(undefined4 * )(param_1 + 0x1c) = 0;
    return 0;
}


undefined8 FUN_140296a00(longlong param_1) {
    longlong lVar1;
    undefined auVar2[16];
    int iVar3;
    uint uVar4;
    LPVOID pvVar5;
    undefined8 uVar6;
    longlong lVar7;
    longlong *plVar8;
    longlong local_28;
    longlong local_20;
    undefined8 local_18;

    if (DAT_140c63758 != 0) {
        pvVar5 = TlsGetValue(*(DWORD * )(DAT_140c63758 + 4));
        if ((pvVar5 != (LPVOID) 0x0) && (*(longlong * )((longlong) pvVar5 + 8) != 0)) {
            plVar8 = *(longlong * *)(*(longlong * )((longlong) pvVar5 + 8) + 0x60);
            goto LAB_140296a34;
        }
    }
    plVar8 = (longlong *) 0x0;
    LAB_140296a34:
    iVar3 = (**(code * *)(*plVar8 + 0x28))(plVar8, 0);
    if (iVar3 < 0) {
        uVar6 = FUN_140296b50(param_1, iVar3);
        return uVar6;
    }
    lVar7 = (**(code * *)(**(longlong * *)(param_1 + 0x38) + 0x20))();
    uVar4 = (**(code * *)(**(longlong * *)(param_1 + 0x38) + 0x10))();
    local_18 = 0;
    local_20 = (ulonglong) uVar4 + lVar7;
    local_28 = lVar7;
    iVar3 = FUN_1402956f0(&local_28, lVar7 + 0x50, lVar7);
    if (iVar3 < 0) {
        uVar6 = FUN_140296b50(param_1, iVar3);
        return uVar6;
    }
    *(undefined4 * )(param_1 + 0x1c) = *(undefined4 * )(lVar7 + 0x18);
    auVar2 = ZEXT816(8) * ZEXT416(*(uint * )(lVar7 + 8));
    uVar6 = SUB168(auVar2, 0);
    if (SUB168(auVar2 >> 0x40, 0) != 0) {
        uVar6 = 0xffffffffffffffff;
    }
    uVar6 = FUN_14018b280(uVar6, 0);
    *(undefined8 * )(param_1 + 0x48) = uVar6;
    FUN_1407e4830(uVar6, 0, (ulonglong) * (uint * )(lVar7 + 8) << 3);
    lVar1 = *(longlong * )(param_1 + 0x10);
    *(longlong * )(param_1 + 0x30) = lVar7;
    *(uint * )(param_1 + 0x2c) = uVar4;
    LOCK();
    *(int *) (lVar1 + 0x124) = *(int *) (lVar1 + 0x124) + 1;
    LOCK();
    *(int *) (lVar1 + 0x128) = *(int *) (lVar1 + 0x128) + *(int *) (param_1 + 0x2c);
    LOCK();
    *(int *) (lVar1 + 300) = *(int *) (lVar1 + 300) + 1;
    LOCK();
    *(int *) (lVar1 + 0x130) = *(int *) (lVar1 + 0x130) + *(int *) (param_1 + 0x2c);
    LOCK();
    *(int *) (lVar1 + 0x144) = *(int *) (lVar1 + 0x144) + 1;
    LOCK();
    *(int *) (lVar1 + 0x148) = *(int *) (lVar1 + 0x148) + *(int *) (param_1 + 0x2c);
    *(undefined4 * )(param_1 + 0x50) = 0;
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

int FUN_140296b50(longlong param_1, int param_2) {
    int iVar1;
    undefined8 local_res8;
    undefined **local_d8;
    wchar_t *local_d0;
    LPVOID local_c8;
    undefined8 local_c0;
    undefined **local_b8;
    undefined8 local_b0;
    LPVOID local_a8;
    undefined **local_a0;
    undefined8 uStack152;
    undefined8 local_90;
    int iStack136;
    undefined4 uStack132;
    undefined **local_78;
    undefined8 local_70;
    LPVOID local_68;
    undefined **local_58;
    wchar_t *local_50;
    LPVOID local_48;
    undefined8 local_40;
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 uStack44;
    undefined4 local_28;
    undefined4 uStack36;
    int iStack32;
    undefined4 uStack28;

    if (param_2 < 0) {
        local_b0 = 0;
        local_b8 = &PTR_LAB_140b5e648;
        local_a8 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_b8);
        local_78 = local_b8;
        local_70 = local_b0;
        local_a0 = &PTR_LAB_140b5e648;
        uStack152 = L"Result";
        local_68 = local_a8;
        local_90 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_a0);
        local_c0 = *(undefined8 * )(param_1 + 0x20);
        local_d8 = &PTR_LAB_140b5e648;
        local_a0 = &PTR_LAB_140b5e640;
        local_28 = (undefined4) local_90;
        uStack36 = local_90._4_4_;
        uStack28 = uStack132;
        local_d0 = L"FileName";
        local_38 = 0x40b5e640;
        uStack52 = 1;
        uStack48 = (undefined4) uStack152;
        uStack44 = uStack152._4_4_;
        iStack136 = param_2;
        iStack32 = param_2;
        local_c8 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_d8);
        local_50 = local_d0;
        local_d8 = &PTR_LAB_140b5e638;
        local_res8 = 0x141de5010;
        local_58 = &PTR_LAB_140b5e638;
        local_48 = local_c8;
        local_40 = local_c0;
        iVar1 = FUN_1401971e0(&DAT_140c8a450, 0xe, &local_res8, *(undefined8 * )(param_1 + 0x20), &local_58,
                              &local_38, &local_78);
        local_d8 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_c8);
        local_a0 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_90);
        local_b8 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_a8);
        if (iVar1 != 0) {
            DebugBreak();
        }
        if (*(longlong * *)(param_1 + 0x38) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x38) + 8))();
            *(undefined8 * )(param_1 + 0x38) = 0;
        }
        *(int *) (param_1 + 0x50) = param_2;
        return param_2;
    }
    *(int *) (param_1 + 0x50) = param_2;
    return param_2;
}


void FUN_140296d50(longlong param_1) {
    ulonglong *puVar1;
    longlong lVar2;
    ulonglong uVar3;
    DWORD DVar4;
    int iVar5;
    HANDLE hObject;
    ulonglong uVar6;

    lVar2 = *(longlong * )(param_1 + 0x10);
    DVar4 = GetCurrentThreadId();
    uVar6 = 0;
    if (*(DWORD * )(lVar2 + 0x18) == DVar4) {
        *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(lVar2 + 0x20);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
            if (uVar3 == 0) {
                *(DWORD * )(lVar2 + 0x18) = DVar4;
                goto LAB_140296db0;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(lVar2 + 0x18, DVar4);
    }
    LAB_140296db0:
    if ((*(int *) (param_1 + 0x28) < 1) || (iVar5 = FUN_140296900(param_1), -1 < iVar5)) {
        *(undefined4 * )(param_1 + 0x28) = 0;
        iVar5 = FUN_140296860(param_1);
        if (-1 < iVar5) {
            *(undefined4 * )(param_1 + 0x28) = 2;
        }
    }
    if (*(ulonglong * )(lVar2 + 0x20) < 2) {
        *(undefined4 * )(lVar2 + 0x18) = 0;
        *(undefined8 * )(lVar2 + 0x20) = 0;
        if (*(longlong * )(lVar2 + 0x28) != 0) {
            if (*(longlong * )(lVar2 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar2 + 0x30);
                uVar6 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar6 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar2 + 0x30));
        }
        return;
    }
    *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + -1;
    return;
}


int FUN_140296e50(longlong param_1) {
    longlong lVar1;
    ulonglong uVar2;
    DWORD DVar3;
    HANDLE hObject;
    ulonglong uVar4;
    DWORD *pDVar5;
    ulonglong *puVar6;
    int iVar7;

    lVar1 = *(longlong * )(param_1 + 0x10);
    pDVar5 = (DWORD * )(lVar1 + 0x18);
    DVar3 = GetCurrentThreadId();
    uVar4 = 0;
    puVar6 = (ulonglong * )(lVar1 + 0x20);
    if (*pDVar5 == DVar3) {
        *puVar6 = *puVar6 + 1;
    } else {
        do {
            LOCK();
            uVar2 = *puVar6;
            *puVar6 = *puVar6 ^ (ulonglong)(uVar2 == 0) * (*puVar6 ^ 1);
            if (uVar2 == 0) {
                *pDVar5 = DVar3;
                goto LAB_140296ece;
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < 0x400);
        FUN_14019fb60(pDVar5, DVar3);
    }
    LAB_140296ece:
    *(int *) (param_1 + 8) = *(int *) (param_1 + 8) + -1;
    iVar7 = *(int *) (param_1 + 8);
    if (iVar7 == -1) {
        FUN_140296590(param_1);
        FUN_14018b900(param_1, 0);
        iVar7 = 0;
    } else if (iVar7 == 0) {
        if (*(longlong * )(param_1 + 0x20) == 0) {
            FUN_140296590(param_1);
            FUN_14018b900(param_1, 0);
        } else {
            FUN_140198370(param_1 + 0x60, param_1, *(longlong * )(param_1 + 0x10) + 0x10);
        }
    }
    if (*puVar6 < 2) {
        *pDVar5 = 0;
        *puVar6 = 0;
        if (*(longlong * )(lVar1 + 0x28) != 0) {
            if (*(longlong * )(lVar1 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar6 = (ulonglong * )(lVar1 + 0x30);
                uVar4 = *puVar6;
                *puVar6 = *puVar6 ^ (ulonglong)(uVar4 == 0) * (*puVar6 ^ (ulonglong) hObject);
                if (uVar4 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar1 + 0x30));
        }
    } else {
        *puVar6 = *puVar6 - 1;
    }
    return iVar7;
}


void FUN_140296fa0(undefined8 *param_1) {
    longlong lVar1;

    *param_1 = &PTR_FUN_140b61aa0;
    if (param_1[0xf] != 0) {
        lVar1 = param_1[2];
        LOCK();
        *(int *) (lVar1 + 0x3f4) = *(int *) (lVar1 + 0x3f4) + -1;
        LOCK();
        *(int *) (lVar1 + 0x3f8) = *(int *) (lVar1 + 0x3f8) - *(int *) (param_1 + 7);
        LOCK();
        *(int *) (lVar1 + 0x404) = *(int *) (lVar1 + 0x404) + 1;
        LOCK();
        *(int *) (lVar1 + 0x408) = *(int *) (lVar1 + 0x408) + *(int *) (param_1 + 7);
        if (param_1[3] != 0) {
            FUN_1400b6120(param_1[2] + 0x1d40, param_1 + 3);
        }
        if ((undefined8 *) param_1[0xf] != (undefined8 *) 0x0) {
            *(undefined8 *) param_1[0xf] = param_1[0x10];
        }
        if (param_1[0x10] != 0) {
            *(undefined8 * )(param_1[0x10] + 0x78) = param_1[0xf];
        }
        param_1[0xf] = 0;
        param_1[0x10] = 0;
    }
    if (0 < *(int *) (param_1 + 4)) {
        if ((longlong *) param_1[6] != (longlong *) 0x0) {
            (**(code * *)(*(longlong *) param_1[6] + 8))();
            param_1[6] = 0;
        }
        if ((longlong *) param_1[5] != (longlong *) 0x0) {
            (**(code * *)(*(longlong *) param_1[5] + 0x10))();
            param_1[5] = 0;
        }
        *(undefined4 * )(param_1 + 0xe) = 0x8000000a;
    }
    *(undefined4 * )(param_1 + 4) = 0;
    FUN_14018b900(param_1[3], 0);
    if ((undefined8 *) param_1[0xf] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0xf] = param_1[0x10];
    }
    if (param_1[0x10] != 0) {
        *(undefined8 * )(param_1[0x10] + 0x78) = param_1[0xf];
    }
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    if ((undefined8 *) param_1[0xc] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0xc] = param_1[0xd];
    }
    if (param_1[0xd] != 0) {
        *(undefined8 * )(param_1[0xd] + 0x20) = param_1[0xc];
    }
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    if ((undefined8 *) param_1[10] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[10] = param_1[0xb];
    }
    if (param_1[0xb] != 0) {
        *(undefined8 * )(param_1[0xb] + 0x10) = param_1[10];
    }
    param_1[0xb] = 0;
    param_1[10] = 0;
    return;
}


undefined8 FUN_140297100(longlong param_1) {
    longlong *plVar1;
    longlong lVar2;
    undefined8 uVar3;
    longlong *plVar4;

    uVar3 = FUN_140297290(param_1, 2);
    if (-1 < (int) uVar3) {
        lVar2 = *(longlong * )(param_1 + 0x10);
        LOCK();
        *(int *) (lVar2 + 0x3f4) = *(int *) (lVar2 + 0x3f4) + 1;
        LOCK();
        *(int *) (lVar2 + 0x3f8) = *(int *) (lVar2 + 0x3f8) + *(int *) (param_1 + 0x38);
        LOCK();
        *(int *) (lVar2 + 0x3fc) = *(int *) (lVar2 + 0x3fc) + 1;
        LOCK();
        *(int *) (lVar2 + 0x400) = *(int *) (lVar2 + 0x400) + *(int *) (param_1 + 0x38);
        plVar4 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x1c58);
        if (*(longlong * )(param_1 + 0x78) == 0) {
            *(longlong * *)(param_1 + 0x78) = plVar4;
            plVar1 = (longlong * )(param_1 + 0x80);
            *plVar1 = *plVar4;
            *plVar4 = param_1;
            if (*plVar1 != 0) {
                *(longlong * *)(*plVar1 + 0x78) = plVar1;
            }
        }
        uVar3 = 0;
    }
    return uVar3;
}


undefined8 FUN_140297180(ulonglong param_1, undefined8 param_2) {
    ulonglong **ppuVar1;
    longlong lVar2;
    ulonglong *puVar3;
    undefined8 uVar4;
    ulonglong uVar5;
    ulonglong *puVar6;
    longlong *plVar7;

    uVar4 = FUN_14018e9c0(param_2);
    *(undefined8 * )(param_1 + 0x18) = uVar4;
    uVar4 = FUN_140297290(param_1);
    if (-1 < (int) uVar4) {
        lVar2 = *(longlong * )(param_1 + 0x10);
        LOCK();
        *(int *) (lVar2 + 0x3f4) = *(int *) (lVar2 + 0x3f4) + 1;
        LOCK();
        *(int *) (lVar2 + 0x3f8) = *(int *) (lVar2 + 0x3f8) + *(int *) (param_1 + 0x38);
        LOCK();
        *(int *) (lVar2 + 0x3fc) = *(int *) (lVar2 + 0x3fc) + 1;
        LOCK();
        *(int *) (lVar2 + 0x400) = *(int *) (lVar2 + 0x400) + *(int *) (param_1 + 0x38);
        lVar2 = *(longlong * )(param_1 + 0x10);
        plVar7 = (longlong * )(lVar2 + 0x1d40);
        if (*plVar7 == *(longlong * )(lVar2 + 0x1d48)) {
            FUN_1400290d0(plVar7);
        }
        uVar5 = (**(code * *)(lVar2 + 0x1d58))(param_1 + 0x18);
        ppuVar1 = (ulonglong * *)
                (*(longlong * )(lVar2 + 0x1d50) + (uVar5 % *(ulonglong * )(lVar2 + 0x1d48)) * 8);
        puVar6 = (ulonglong *) FUN_14018b280(0x20);
        if (puVar6 != (ulonglong *) 0x0) {
            puVar3 = *ppuVar1;
            *puVar6 = uVar5;
            puVar6[1] = (ulonglong) puVar3;
            uVar5 = *(ulonglong * )(param_1 + 0x18);
            puVar6[3] = param_1;
            puVar6[2] = uVar5;
        }
        *ppuVar1 = puVar6;
        *plVar7 = *plVar7 + 1;
        puVar6 = (ulonglong * )(*(longlong * )(param_1 + 0x10) + 0x1c58);
        if (*(longlong * )(param_1 + 0x78) == 0) {
            *(ulonglong * *)(param_1 + 0x78) = puVar6;
            puVar3 = (ulonglong * )(param_1 + 0x80);
            *puVar3 = *puVar6;
            *puVar6 = param_1;
            if (*puVar3 != 0) {
                *(ulonglong * *)(*puVar3 + 0x78) = puVar3;
            }
        }
        uVar4 = 0;
    }
    return uVar4;
}


undefined8 FUN_140297290(longlong param_1, int param_2) {
    longlong *plVar1;
    undefined8 uVar2;

    if (*(int *) (param_1 + 0x20) < 1) {
        if (0 < param_2) {
            if (*(longlong * )(param_1 + 0x18) == 0) {
                plVar1 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x19d0);
                uVar2 = (**(code * *)(*plVar1 + 0x120))(plVar1, 0x20, 0x20, 0x15, 2, param_1 + 0x28, 0);
                if (-1 < (int) uVar2) {
                    *(undefined4 * )(param_1 + 0x70) = 0;
                    *(int *) (param_1 + 0x20) = param_2;
                    return 0;
                }
            } else {
                uVar2 = FUN_14026c360(*(undefined8 * )(param_1 + 0x10), 0, *(longlong * )(param_1 + 0x18), 0, 0,
                                      0x200, 1, param_1 + 0x30);
                if (-1 < (int) uVar2) goto LAB_14029738f;
            }
            *(int *) (param_1 + 0x70) = (int) uVar2;
            return uVar2;
        }
        if (*(int *) (param_1 + 0x20) < 1) goto LAB_14029738f;
    }
    if (param_2 < 1) {
        if (*(longlong * *)(param_1 + 0x30) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x30) + 8))();
            *(undefined8 * )(param_1 + 0x30) = 0;
        }
        if (*(longlong * *)(param_1 + 0x28) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x28) + 0x10))();
            *(undefined8 * )(param_1 + 0x28) = 0;
        }
        *(undefined4 * )(param_1 + 0x70) = 0x8000000a;
    }
    LAB_14029738f:
    *(int *) (param_1 + 0x20) = param_2;
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

ulonglong FUN_1402973a0(longlong param_1) {
    int *piVar1;
    uint *puVar2;
    longlong *plVar3;
    longlong lVar4;
    int iVar5;
    uint uVar6;
    int iVar7;
    ulonglong extraout_RAX;
    ulonglong uVar8;
    longlong *plVar9;
    longlong *local_res8;
    undefined8 local_res10;
    undefined8 in_stack_fffffffffffffed8;
    undefined4 uVar10;
    undefined4 uVar11;
    undefined **local_108;
    undefined8 local_100;
    LPVOID local_f8;
    undefined **local_f0;
    wchar_t *local_e8;
    LPVOID local_e0;
    undefined8 local_d8;
    undefined **local_d0;
    undefined8 uStack200;
    undefined8 local_c0;
    int iStack184;
    undefined4 uStack180;
    undefined **local_a8;
    undefined8 local_a0;
    LPVOID local_98;
    undefined **local_88;
    wchar_t *local_80;
    LPVOID local_78;
    undefined8 local_70;
    undefined4 local_68[4];
    undefined4 local_58[4];
    undefined4 local_48;
    undefined4 uStack68;
    undefined4 uStack64;
    undefined4 uStack60;
    undefined4 local_38;
    undefined4 uStack52;
    int iStack48;
    undefined4 uStack44;

    uVar10 = (undefined4)((ulonglong) in_stack_fffffffffffffed8 >> 0x20);
    plVar9 = *(longlong * *)(param_1 + 0x30);
    local_res8 = (longlong *) 0x0;
    local_68[0] = 0xffffffff;
    (**(code * *)(*plVar9 + 0x20))(plVar9, local_68);
    iVar7 = *(int *) (plVar9 + 0x14);
    plVar9 = (longlong *) 0x0;
    if (-1 < iVar7) {
        plVar9 = *(longlong * *)(param_1 + 0x30);
        local_58[0] = 0xffffffff;
        (**(code * *)(*plVar9 + 0x20))(plVar9, local_58);
        plVar9 = (longlong *) plVar9[7];
        if (plVar9 == (longlong *) 0x0) {
            iVar7 = -0x7fffbffb;
            plVar9 = (longlong *) 0x0;
        } else {
            (**(code * *)(*plVar9 + 8))();
            iVar7 = (**(code * *)(*plVar9 + 0x90))(plVar9, 0, &local_res8);
            if (-1 < iVar7) {
                uVar11 = 0;
                plVar3 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x19d0);
                iVar7 = (**(code * *)(*plVar3 + 0x120))
                        (plVar3, 0x20, 0x20, 0x15, CONCAT44(uVar10, 2), (undefined8 * )(param_1 + 0x28), 0
                        );
                if (-1 < iVar7) {
                    iVar7 = (*DAT_140c65710)(*(undefined8 * )(param_1 + 0x28), 0, 0, local_res8, 0, 0,
                                             CONCAT44(uVar11, 0xffffffff), 0);
                    if (-1 < iVar7) {
                        lVar4 = *(longlong * )(param_1 + 0x10);
                        LOCK();
                        piVar1 = (int *) (lVar4 + 0x414);
                        *piVar1 = *piVar1 + 1;
                        LOCK();
                        puVar2 = (uint * )(lVar4 + 0x418);
                        uVar8 = (ulonglong) * puVar2;
                        *puVar2 = *puVar2 + *(int *) (param_1 + 0x38);
                        *(undefined4 * )(param_1 + 0x70) = 0;
                        goto LAB_1402975d2;
                    }
                }
            }
        }
    }
    local_108 = &PTR_LAB_140b5e648;
    local_100 = 0;
    local_f8 = TlsGetValue(DAT_140c63720);
    TlsSetValue(DAT_140c63720, &local_108);
    local_a8 = local_108;
    local_a0 = local_100;
    local_d0 = &PTR_LAB_140b5e648;
    uStack200 = L"Result";
    local_98 = local_f8;
    local_c0 = TlsGetValue(DAT_140c63720);
    TlsSetValue(DAT_140c63720, &local_d0);
    local_d8 = *(undefined8 * )(param_1 + 0x18);
    local_f0 = &PTR_LAB_140b5e648;
    local_d0 = &PTR_LAB_140b5e640;
    local_38 = (undefined4) local_c0;
    uStack52 = local_c0._4_4_;
    uStack44 = uStack180;
    local_e8 = L"FileName";
    local_48 = 0x40b5e640;
    uStack68 = 1;
    uStack64 = (undefined4) uStack200;
    uStack60 = uStack200._4_4_;
    iStack184 = iVar7;
    iStack48 = iVar7;
    local_e0 = TlsGetValue(DAT_140c63720);
    TlsSetValue(DAT_140c63720, &local_f0);
    local_80 = local_e8;
    local_f0 = &PTR_LAB_140b5e638;
    local_res10 = 0x141de5058;
    local_88 = &PTR_LAB_140b5e638;
    local_78 = local_e0;
    local_70 = local_d8;
    iVar5 = FUN_1401971e0(&DAT_140c8a454, 0xe, &local_res10, *(undefined8 * )(param_1 + 0x18), &local_88,
                          &local_48, &local_a8);
    local_f0 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720, local_e0);
    local_d0 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720, local_c0);
    local_108 = &PTR_LAB_140b5e648;
    uVar6 = TlsSetValue(DAT_140c63720, local_f8);
    uVar8 = (ulonglong) uVar6;
    if (iVar5 != 0) {
        DebugBreak();
        uVar8 = extraout_RAX;
    }
    *(int *) (param_1 + 0x70) = iVar7;
    LAB_1402975d2:
    if (local_res8 != (longlong *) 0x0) {
        uVar8 = (**(code * *)(*local_res8 + 0x10))();
    }
    if (plVar9 != (longlong *) 0x0) {
        uVar8 = (**(code * *)(*plVar9 + 0x10))(plVar9);
    }
    return uVar8;
}


int FUN_1402976e0(longlong param_1) {
    ulonglong *puVar1;
    int iVar2;
    longlong lVar3;
    ulonglong uVar4;
    DWORD DVar5;
    HANDLE hObject;
    ulonglong uVar6;

    lVar3 = *(longlong * )(param_1 + 0x10);
    DVar5 = GetCurrentThreadId();
    uVar6 = 0;
    if (*(DWORD * )(lVar3 + 0x18) == DVar5) {
        *(longlong * )(lVar3 + 0x20) = *(longlong * )(lVar3 + 0x20) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(lVar3 + 0x20);
            uVar4 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar4 == 0) * (*puVar1 ^ 1);
            if (uVar4 == 0) {
                *(DWORD * )(lVar3 + 0x18) = DVar5;
                goto LAB_14029774a;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(lVar3 + 0x18, DVar5);
    }
    LAB_14029774a:
    *(int *) (param_1 + 8) = *(int *) (param_1 + 8) + 1;
    iVar2 = *(int *) (param_1 + 8);
    if (iVar2 == 1) {
        FUN_1401984d0(param_1 + 0x40);
    }
    if (*(ulonglong * )(lVar3 + 0x20) < 2) {
        *(undefined4 * )(lVar3 + 0x18) = 0;
        *(undefined8 * )(lVar3 + 0x20) = 0;
        if (*(longlong * )(lVar3 + 0x28) != 0) {
            if (*(longlong * )(lVar3 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar3 + 0x30);
                uVar6 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar6 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar3 + 0x30));
        }
    } else {
        *(longlong * )(lVar3 + 0x20) = *(longlong * )(lVar3 + 0x20) + -1;
    }
    return iVar2;
}


int FUN_1402977d0(longlong param_1) {
    longlong lVar1;
    ulonglong uVar2;
    DWORD DVar3;
    HANDLE hObject;
    ulonglong uVar4;
    DWORD *pDVar5;
    ulonglong *puVar6;
    int iVar7;

    lVar1 = *(longlong * )(param_1 + 0x10);
    pDVar5 = (DWORD * )(lVar1 + 0x18);
    DVar3 = GetCurrentThreadId();
    uVar4 = 0;
    puVar6 = (ulonglong * )(lVar1 + 0x20);
    if (*pDVar5 == DVar3) {
        *puVar6 = *puVar6 + 1;
    } else {
        do {
            LOCK();
            uVar2 = *puVar6;
            *puVar6 = *puVar6 ^ (ulonglong)(uVar2 == 0) * (*puVar6 ^ 1);
            if (uVar2 == 0) {
                *pDVar5 = DVar3;
                goto LAB_14029784e;
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < 0x400);
        FUN_14019fb60(pDVar5, DVar3);
    }
    LAB_14029784e:
    *(int *) (param_1 + 8) = *(int *) (param_1 + 8) + -1;
    iVar7 = *(int *) (param_1 + 8);
    if (iVar7 == -1) {
        FUN_140296fa0(param_1);
        FUN_14018b900(param_1, 0);
        iVar7 = 0;
    } else if (iVar7 == 0) {
        if (*(longlong * )(param_1 + 0x18) == 0) {
            FUN_140296fa0(param_1);
            FUN_14018b900(param_1, 0);
        } else {
            FUN_140198370(param_1 + 0x40, param_1, *(longlong * )(param_1 + 0x10) + 0x10);
        }
    }
    if (*puVar6 < 2) {
        *pDVar5 = 0;
        *puVar6 = 0;
        if (*(longlong * )(lVar1 + 0x28) != 0) {
            if (*(longlong * )(lVar1 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar6 = (ulonglong * )(lVar1 + 0x30);
                uVar4 = *puVar6;
                *puVar6 = *puVar6 ^ (ulonglong)(uVar4 == 0) * (*puVar6 ^ (ulonglong) hObject);
                if (uVar4 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar1 + 0x30));
        }
    } else {
        *puVar6 = *puVar6 - 1;
    }
    return iVar7;
}


undefined8 FUN_140297920(longlong param_1) {
    undefined8 uVar1;

    if (*(longlong * *)(param_1 + 0x30) != (longlong *) 0x0) {
        uVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x30) + 0x20))();
        if ((int) uVar1 == 0) {
            return uVar1;
        }
        FUN_1402973a0(param_1);
        if (*(longlong * *)(param_1 + 0x30) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x30) + 8))();
            *(undefined8 * )(param_1 + 0x30) = 0;
        }
    }
    return 1;
}


undefined4 FUN_140297980(longlong *param_1) {
    undefined4 local_18[4];

    local_18[0] = 0xffffffff;
    (**(code * *)(*param_1 + 0x20))(param_1, local_18);
    return *(undefined4 * )((longlong) param_1 + 0x24);
}


void FUN_1402979b0(longlong *param_1) {
    undefined4 local_18[4];

    local_18[0] = 0xffffffff;
    (**(code * *)(*param_1 + 0x20))(param_1, local_18);
    *(undefined4 * )((longlong) param_1 + 0x24) = 0;
    return;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1402979e0(longlong *param_1, undefined4 *param_2, ulonglong param_3) {
    longlong lVar1;
    undefined8 uVar2;
    undefined4 local_68[2];
    undefined8 local_60;
    undefined4 local_58[4];
    undefined **local_48;
    undefined8 uStack64;
    undefined8 local_38;
    int iStack48;
    undefined4 uStack44;
    undefined4 local_28;
    undefined4 uStack36;
    undefined4 uStack32;
    undefined4 uStack28;
    undefined4 local_18;
    undefined4 uStack20;
    int iStack16;
    undefined4 uStack12;

    local_58[0] = 0xffffffff;
    (**(code * *)(*param_1 + 0x20))(param_1, local_58);
    uVar2 = 0;
    if ((param_3 & 3) == 0) {
        local_60 = 0;
    } else {
        *(undefined4 * )((longlong) param_1 + 0x24) = 1;
        if ((param_3 & 2) == 0) {
            uVar2 = 0x10;
        }
        iStack48 = (**(code * *)(*(longlong *) param_1[5] + 0x68))
                ((longlong *) param_1[5], local_68, 0, uVar2);
        if (iStack48 < 0) {
            local_48 = &PTR_LAB_140b5e648;
            uStack64 = L"Result";
            local_38 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_48);
            local_48 = &PTR_LAB_140b5e640;
            local_28 = 0x40b5e640;
            uStack36 = 1;
            uStack32 = (undefined4) uStack64;
            uStack28 = uStack64._4_4_;
            local_18 = (undefined4) local_38;
            uStack20 = local_38._4_4_;
            uStack12 = uStack44;
            iStack16 = iStack48;
            FUN_1400035b0(0xe, 0, 0, &local_28);
            local_48 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720, (LPVOID) CONCAT44(local_38._4_4_, (undefined4) local_38));
            local_60 = 0;
        } else {
            lVar1 = param_1[2];
            if ((param_3 & 1) != 0) {
                LOCK();
                *(int *) (lVar1 + 0x40c) = *(int *) (lVar1 + 0x40c) + 1;
                LOCK();
                *(int *) (lVar1 + 0x410) = *(int *) (lVar1 + 0x410) + *(int *) (param_1 + 7);
            }
            if ((param_3 & 2) != 0) {
                LOCK();
                *(int *) (lVar1 + 0x414) = *(int *) (lVar1 + 0x414) + 1;
                LOCK();
                *(int *) (lVar1 + 0x418) = *(int *) (lVar1 + 0x418) + *(int *) (param_1 + 7);
            }
            *param_2 = local_68[0];
        }
    }
    return local_60;
}


void FUN_140297b50(longlong *param_1) {
    int iVar1;
    undefined4 local_18[4];

    local_18[0] = 0xffffffff;
    (**(code * *)(*param_1 + 0x20))(param_1, local_18);
    iVar1 = (**(code * *)(*(longlong *) param_1[5] + 0x70))();
    if ((-1 < iVar1) && (*(longlong * *)(param_1[2] + 0x2888) == param_1)) {
        *(undefined8 * )(param_1[2] + 0x2888) = 0;
    }
    return;
}


void FUN_140297ba0(undefined8 *param_1) {
    ulonglong *puVar1;
    longlong lVar2;
    ulonglong uVar3;
    DWORD DVar4;
    HANDLE hObject;
    ulonglong uVar5;

    lVar2 = param_1[2];
    *param_1 = &PTR_LAB_140b61af0;
    DVar4 = GetCurrentThreadId();
    uVar5 = 0;
    if (*(DWORD * )(lVar2 + 0x18) == DVar4) {
        *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(lVar2 + 0x20);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
            if (uVar3 == 0) {
                *(DWORD * )(lVar2 + 0x18) = DVar4;
                goto LAB_140297c0a;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < 0x400);
        FUN_14019fb60(lVar2 + 0x18, DVar4);
    }
    LAB_140297c0a:
    if ((undefined8 *) param_1[6] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[6] = param_1[7];
    }
    if (param_1[7] != 0) {
        *(undefined8 * )(param_1[7] + 0x30) = param_1[6];
    }
    param_1[6] = 0;
    param_1[7] = 0;
    if ((1 < *(int *) (param_1 + 3)) && ((longlong *) param_1[4] != (longlong *) 0x0)) {
        (**(code * *)(*(longlong *) param_1[4] + 0x10))();
        param_1[4] = 0;
    }
    *(undefined4 * )(param_1 + 3) = 0;
    if (*(ulonglong * )(lVar2 + 0x20) < 2) {
        *(undefined4 * )(lVar2 + 0x18) = 0;
        *(undefined8 * )(lVar2 + 0x20) = 0;
        if (*(longlong * )(lVar2 + 0x28) != 0) {
            if (*(longlong * )(lVar2 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar2 + 0x30);
                uVar5 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar5 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar5 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar2 + 0x30));
        }
    } else {
        *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + -1;
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


ulonglong FUN_140297cf0(longlong param_1) {
    longlong *plVar1;
    longlong lVar2;
    ulonglong uVar3;
    DWORD DVar4;
    uint uVar5;
    HANDLE hObject;
    ulonglong uVar6;
    longlong *plVar7;
    DWORD *pDVar8;
    ulonglong *puVar9;
    ulonglong uVar10;

    lVar2 = *(longlong * )(param_1 + 0x10);
    pDVar8 = (DWORD * )(lVar2 + 0x18);
    DVar4 = GetCurrentThreadId();
    uVar10 = 0;
    puVar9 = (ulonglong * )(lVar2 + 0x20);
    uVar6 = uVar10;
    if (*pDVar8 == DVar4) {
        *puVar9 = *puVar9 + 1;
    } else {
        do {
            LOCK();
            uVar3 = *puVar9;
            *puVar9 = *puVar9 ^ (ulonglong)(uVar3 == 0) * (*puVar9 ^ 1);
            if (uVar3 == 0) {
                *pDVar8 = DVar4;
                goto LAB_140297d64;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(pDVar8, DVar4);
    }
    LAB_140297d64:
    if (*(int *) (param_1 + 0x18) < 2) {
        plVar7 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x19d0);
        uVar5 = (**(code * *)(*plVar7 + 0x3b0))(plVar7, 9, param_1 + 0x20);
        uVar6 = (ulonglong) uVar5;
        if ((int) uVar5 < 0) goto LAB_140297dcc;
        *(undefined4 * )(param_1 + 0x28) = 0;
    }
    *(undefined4 * )(param_1 + 0x18) = 2;
    plVar7 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x1c60);
    uVar6 = uVar10;
    if (*(longlong * )(param_1 + 0x30) == 0) {
        *(longlong * *)(param_1 + 0x30) = plVar7;
        plVar1 = (longlong * )(param_1 + 0x38);
        *plVar1 = *plVar7;
        *plVar7 = param_1;
        if (*plVar1 != 0) {
            *(longlong * *)(*plVar1 + 0x30) = plVar1;
        }
    }
    LAB_140297dcc:
    if (*puVar9 < 2) {
        *pDVar8 = 0;
        *puVar9 = 0;
        if (*(longlong * )(lVar2 + 0x28) != 0) {
            if (*(longlong * )(lVar2 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar9 = (ulonglong * )(lVar2 + 0x30);
                uVar10 = *puVar9;
                *puVar9 = *puVar9 ^ (ulonglong)(uVar10 == 0) * (*puVar9 ^ (ulonglong) hObject);
                if (uVar10 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar2 + 0x30));
        }
        return uVar6;
    }
    *puVar9 = *puVar9 - 1;
    return uVar6;
}


int FUN_140297e60(longlong param_1) {
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *) (param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_140297ba0();
            FUN_14018b900(param_1, 0);
        }
        iVar2 = 0;
    }
    return iVar2;
}


undefined8 *FUN_140298100(undefined8 *param_1, longlong param_2) {
    DWORD *pDVar1;
    ulonglong *puVar2;
    longlong *plVar3;
    ulonglong uVar4;
    DWORD DVar5;
    HANDLE hObject;
    ulonglong uVar6;
    longlong *plVar7;

    uVar6 = 0;
    *param_1 = &PTR_LAB_140b61b20;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *(undefined4 * )(param_1 + 3) = 0x544e5645;
    *(undefined4 * )((longlong) param_1 + 0x5c) = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    *(undefined4 * )(param_1 + 0xc) = 0x544e5645;
    *(undefined4 * )((longlong) param_1 + 0xa4) = 0;
    param_1[0x16] = 0;
    param_1[0x1a] = 0;
    param_1[0x17] = 0;
    param_1[0x1b] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    pDVar1 = (DWORD * )(param_2 + 0x18);
    *(undefined4 * )(param_1 + 1) = 1;
    param_1[2] = param_2;
    *(undefined4 * )(param_1 + 0x1d) = 0;
    DVar5 = GetCurrentThreadId();
    if (*pDVar1 == DVar5) {
        *(longlong * )(param_2 + 0x20) = *(longlong * )(param_2 + 0x20) + 1;
    } else {
        do {
            LOCK();
            puVar2 = (ulonglong * )(param_2 + 0x20);
            uVar4 = *puVar2;
            *puVar2 = *puVar2 ^ (ulonglong)(uVar4 == 0) * (*puVar2 ^ 1);
            if (uVar4 == 0) {
                *pDVar1 = DVar5;
                goto LAB_1402981e4;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(pDVar1);
    }
    LAB_1402981e4:
    plVar7 = (longlong * )(param_1[2] + 0x1c70);
    if (param_1[0x1e] == 0) {
        param_1[0x1e] = plVar7;
        plVar3 = param_1 + 0x1f;
        *plVar3 = *plVar7;
        *plVar7 = (longlong) param_1;
        if (*plVar3 != 0) {
            *(longlong * *)(*plVar3 + 0xf0) = plVar3;
        }
    }
    if (*(ulonglong * )(param_2 + 0x20) < 2) {
        *pDVar1 = 0;
        *(undefined8 * )(param_2 + 0x20) = 0;
        if (*(longlong * )(param_2 + 0x28) != 0) {
            if (*(longlong * )(param_2 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar2 = (ulonglong * )(param_2 + 0x30);
                uVar6 = *puVar2;
                *puVar2 = *puVar2 ^ (ulonglong)(uVar6 == 0) * (*puVar2 ^ (ulonglong) hObject);
                if (uVar6 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(param_2 + 0x30));
        }
    } else {
        *(longlong * )(param_2 + 0x20) = *(longlong * )(param_2 + 0x20) + -1;
    }
    return param_1;
}


void FUN_140298290(undefined8 *param_1) {
    ulonglong *puVar1;
    longlong *plVar2;
    longlong lVar3;
    ulonglong uVar4;
    DWORD DVar5;
    HANDLE hObject;
    ulonglong uVar6;
    longlong *plVar7;
    int iVar8;

    lVar3 = param_1[2];
    *param_1 = &PTR_LAB_140b61b20;
    DVar5 = GetCurrentThreadId();
    uVar6 = 0;
    iVar8 = 1;
    if (*(DWORD * )(lVar3 + 0x18) == DVar5) {
        *(longlong * )(lVar3 + 0x20) = *(longlong * )(lVar3 + 0x20) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(lVar3 + 0x20);
            uVar4 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar4 == 0) * (*puVar1 ^ 1);
            if (uVar4 == 0) {
                *(DWORD * )(lVar3 + 0x18) = DVar5;
                goto LAB_1402982fd;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(lVar3 + 0x18, DVar5);
    }
    LAB_1402982fd:
    if ((undefined8 *) param_1[0x1e] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x1e] = param_1[0x1f];
    }
    if (param_1[0x1f] != 0) {
        *(undefined8 * )(param_1[0x1f] + 0xf0) = param_1[0x1e];
    }
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    if (*(ulonglong * )(lVar3 + 0x20) < 2) {
        *(undefined4 * )(lVar3 + 0x18) = 0;
        *(undefined8 * )(lVar3 + 0x20) = 0;
        if (*(longlong * )(lVar3 + 0x28) != 0) {
            if (*(longlong * )(lVar3 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar3 + 0x30);
                uVar6 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar6 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar3 + 0x30));
        }
    } else {
        *(longlong * )(lVar3 + 0x20) = *(longlong * )(lVar3 + 0x20) + -1;
    }
    if ((undefined8 *) param_1[0x1e] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x1e] = param_1[0x1f];
    }
    if (param_1[0x1f] != 0) {
        *(undefined8 * )(param_1[0x1f] + 0xf0) = param_1[0x1e];
    }
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    plVar7 = param_1 + 0x17;
    do {
        plVar2 = plVar7 + -9;
        FUN_140195d70(plVar7 + -0xb);
        *(undefined4 * )(plVar7 + -0xb) = 0;
        if ((longlong * ) * plVar2 != (longlong *) 0x0) {
            *(longlong * ) * plVar2 = plVar7[-8];
        }
        if ((longlong *) plVar7[-8] != (longlong *) 0x0) {
            *(longlong *) plVar7[-8] = *plVar2;
        }
        iVar8 = iVar8 + -1;
        *plVar2 = 0;
        plVar7[-8] = 0;
        plVar7 = plVar2;
    } while (-1 < iVar8);
    return;
}


undefined8 FUN_140298430(longlong param_1, int param_2) {
    if (*(longlong * )(*(longlong * )(param_1 + 0x10) + 0x19d8) == 0) {
        if (((*(int *) (param_1 + 0xe8) < 1) && (0 < param_2)) &&
            ((*(longlong * )(param_1 + 0xb0) != 0 || (*(longlong * )(param_1 + 0xb8) != 0)))) {
            FUN_140195960(param_1 + 0x18, 0, param_1 + 0xa8, 5);
        }
        if ((1 < *(int *) (param_1 + 0xe8)) || (param_2 < 2)) goto LAB_140298501;
    } else {
        if ((0 < *(int *) (param_1 + 0xe8)) || (param_2 < 1)) goto LAB_140298501;
        if ((*(longlong * )(param_1 + 0xb0) != 0) || (*(longlong * )(param_1 + 0xb8) != 0)) {
            FUN_140195960(param_1 + 0x18, 0, param_1 + 0xa8, 5);
        }
    }
    if ((*(longlong * )(param_1 + 0xd0) != 0) || (*(longlong * )(param_1 + 0xd8) != 0)) {
        FUN_140195960(param_1 + 0x60, 0, param_1 + 200, 5);
    }
    LAB_140298501:
    *(int *) (param_1 + 0xe8) = param_2;
    return 0;
}


int FUN_140298520(longlong param_1) {
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *) (param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_140298290();
            FUN_14018b900(param_1, 0);
        }
        iVar2 = 0;
    }
    return iVar2;
}


void FUN_1402985a0(longlong param_1) {
    longlong **pplVar1;
    longlong lVar2;

    pplVar1 = (longlong * *)(param_1 + 8);
    lVar2 = 4;
    do {
        if (*pplVar1 != (longlong *) 0x0) {
            (**(code * *)(**pplVar1 + 8))();
            *pplVar1 = (longlong *) 0x0;
        }
        pplVar1 = pplVar1 + 3;
        lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    if (*(undefined8 * *)(param_1 + 0x78) != (undefined8 *) 0x0) {
        **(undefined8 * *)(param_1 + 0x78) = *(undefined8 * )(param_1 + 0x80);
    }
    if (*(longlong * )(param_1 + 0x80) != 0) {
        *(undefined8 * )(*(longlong * )(param_1 + 0x80) + 0x78) = *(undefined8 * )(param_1 + 0x78);
    }
    *(undefined8 * )(param_1 + 0x80) = 0;
    *(undefined8 * )(param_1 + 0x78) = 0;
    return;
}


undefined8 *FUN_140298630(undefined8 *param_1, undefined8 param_2) {
    param_1[1] = 1;
    *param_1 = &PTR_LAB_140b61b40;
    param_1[2] = 0;
    *(undefined4 * )(param_1 + 3) = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *(undefined4 * )(param_1 + 0xe) = 1;
    param_1[0xf] = 0;
    *(undefined4 * )(param_1 + 0x10) = 1;
    param_1[0x11] = 0;
    *(undefined4 * )(param_1 + 0x12) = 1;
    param_1[0x13] = 0;
    param_1[0x16] = 0;
    param_1[0x15] = 0;
    param_1[6] = param_2;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[0x17] = 0;
    *(undefined4 * )(param_1 + 0x18) = 0;
    *(undefined4 * )((longlong) param_1 + 0xc4) = 0x1b;
    *(undefined4 * )(param_1 + 0xb) = 0;
    return param_1;
}


undefined8 FUN_1402986d0(undefined8 param_1, ulonglong param_2) {
    FUN_140298710();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_140298710(undefined8 *param_1) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    int iVar5;
    ulonglong uVar6;

    *param_1 = &PTR_LAB_140b61b40;
    FUN_14029ca70();
    uVar6 = 0;
    if (param_1[0xf] != 0) {
        iVar2 = *(int *) (param_1 + 0xe);
        while (iVar2 != 0) {
            LOCK();
            puVar1 = param_1 + 0xe;
            if (iVar2 == *(int *) puVar1) {
                *(int *) puVar1 = iVar2 + 1;
                iVar5 = iVar2;
            } else {
                iVar5 = *(int *) puVar1;
            }
            if (iVar2 == iVar5) {
                plVar3 = (longlong *) param_1[0xf];
                if (plVar3 != (longlong *) 0x0) {
                    (**(code * *)(*plVar3 + 0x68))(plVar3);
                    (**(code * *)(*plVar3 + 0x20))();
                    iVar2 = *(int *) (param_1 + 0xe);
                    goto joined_r0x000140298794;
                }
                break;
            }
            iVar2 = *(int *) (param_1 + 0xe);
        }
    }
    LAB_1402987ce:
    if (param_1[0x11] != 0) {
        iVar2 = *(int *) (param_1 + 0x10);
        while (iVar2 != 0) {
            LOCK();
            puVar1 = param_1 + 0x10;
            if (iVar2 == *(int *) puVar1) {
                *(int *) puVar1 = iVar2 + 1;
                iVar5 = iVar2;
            } else {
                iVar5 = *(int *) puVar1;
            }
            if (iVar2 == iVar5) {
                plVar3 = (longlong *) param_1[0x11];
                if (plVar3 != (longlong *) 0x0) {
                    (**(code * *)(*plVar3 + 0x68))(plVar3);
                    (**(code * *)(*plVar3 + 0x20))();
                    iVar2 = *(int *) (param_1 + 0x10);
                    goto joined_r0x000140298840;
                }
                break;
            }
            iVar2 = *(int *) (param_1 + 0x10);
        }
    }
    LAB_14029888a:
    if (param_1[0x13] != 0) {
        iVar2 = *(int *) (param_1 + 0x12);
        while (iVar2 != 0) {
            LOCK();
            puVar1 = param_1 + 0x12;
            if (iVar2 == *(int *) puVar1) {
                *(int *) puVar1 = iVar2 + 1;
                iVar5 = iVar2;
            } else {
                iVar5 = *(int *) puVar1;
            }
            if (iVar2 == iVar5) {
                plVar3 = (longlong *) param_1[0x13];
                if (plVar3 != (longlong *) 0x0) {
                    (**(code * *)(*plVar3 + 0x68))(plVar3);
                    (**(code * *)(*plVar3 + 0x20))();
                    iVar2 = *(int *) (param_1 + 0x12);
                    goto joined_r0x000140298900;
                }
                break;
            }
            iVar2 = *(int *) (param_1 + 0x12);
        }
    }
    LAB_14029894a:
    if (*(int *) (param_1 + 0x14) == -0x7ffffff6) {
        FUN_14029b080(param_1);
    }
    if (param_1[0x16] != 0) {
        do {
            FUN_14018b900(*(undefined8 * )(param_1[0x15] + uVar6 * 8));
            uVar6 = uVar6 + 1;
        } while (uVar6 < (ulonglong) param_1[0x16]);
    }
    param_1[0x16] = 0;
    FUN_14029cd30(param_1);
    *(undefined4 * )(param_1 + 3) = 1;
    if ((longlong *) param_1[7] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[7] + 0x10))();
        param_1[7] = 0;
    }
    if (param_1[0x15] != 0) {
        (**(code * *)(*(longlong * )(param_1[0x15] + -0x10) + 8))();
    }
    lVar4 = param_1[0x13];
    while (lVar4 != 0) {
        iVar2 = *(int *) (param_1 + 0x12);
        while (iVar2 != 0) {
            LOCK();
            puVar1 = param_1 + 0x12;
            if (iVar2 == *(int *) puVar1) {
                *(int *) puVar1 = iVar2 + -1;
                iVar5 = iVar2;
            } else {
                iVar5 = *(int *) puVar1;
            }
            if (iVar2 == iVar5) {
                if ((iVar2 + -1 == 0) && ((longlong *) param_1[0x13] != (longlong *) 0x0)) {
                    (**(code * *)(*(longlong *) param_1[0x13] + 8))();
                    param_1[0x13] = 0;
                }
                break;
            }
            iVar2 = *(int *) (param_1 + 0x12);
        }
        lVar4 = param_1[0x13];
    }
    lVar4 = param_1[0x11];
    while (lVar4 != 0) {
        iVar2 = *(int *) (param_1 + 0x10);
        while (iVar2 != 0) {
            LOCK();
            puVar1 = param_1 + 0x10;
            if (iVar2 == *(int *) puVar1) {
                *(int *) puVar1 = iVar2 + -1;
                iVar5 = iVar2;
            } else {
                iVar5 = *(int *) puVar1;
            }
            if (iVar2 == iVar5) {
                if ((iVar2 + -1 == 0) && ((longlong *) param_1[0x11] != (longlong *) 0x0)) {
                    (**(code * *)(*(longlong *) param_1[0x11] + 8))();
                    param_1[0x11] = 0;
                }
                break;
            }
            iVar2 = *(int *) (param_1 + 0x10);
        }
        lVar4 = param_1[0x11];
    }
    lVar4 = param_1[0xf];
    do {
        if (lVar4 == 0) {
            if ((longlong *) param_1[0xd] != (longlong *) 0x0) {
                (**(code * *)(*(longlong *) param_1[0xd] + 8))();
            }
            if ((longlong *) param_1[0xc] != (longlong *) 0x0) {
                (**(code * *)(*(longlong *) param_1[0xc] + 8))();
            }
            *param_1 = &PTR_LAB_140b61c38;
            FUN_14029ca70(param_1);
            FUN_14029cd30(param_1);
            return;
        }
        iVar2 = *(int *) (param_1 + 0xe);
        while (iVar2 != 0) {
            LOCK();
            puVar1 = param_1 + 0xe;
            if (iVar2 == *(int *) puVar1) {
                *(int *) puVar1 = iVar2 + -1;
                iVar5 = iVar2;
            } else {
                iVar5 = *(int *) puVar1;
            }
            if (iVar2 == iVar5) {
                if ((iVar2 + -1 == 0) && ((longlong *) param_1[0xf] != (longlong *) 0x0)) {
                    (**(code * *)(*(longlong *) param_1[0xf] + 8))();
                    param_1[0xf] = 0;
                }
                break;
            }
            iVar2 = *(int *) (param_1 + 0xe);
        }
        lVar4 = param_1[0xf];
    } while (true);
    joined_r0x000140298794:
    if (iVar2 == 0) goto LAB_1402987ce;
    LOCK();
    puVar1 = param_1 + 0xe;
    if (iVar2 == *(int *) puVar1) {
        *(int *) puVar1 = iVar2 + -1;
        iVar5 = iVar2;
    } else {
        iVar5 = *(int *) puVar1;
    }
    if (iVar2 == iVar5) {
        if ((iVar2 + -1 == 0) && ((longlong *) param_1[0xf] != (longlong *) 0x0)) {
            (**(code * *)(*(longlong *) param_1[0xf] + 8))();
            param_1[0xf] = 0;
        }
        goto LAB_1402987ce;
    }
    iVar2 = *(int *) (param_1 + 0xe);
    goto joined_r0x000140298794;
    joined_r0x000140298840:
    if (iVar2 == 0) goto LAB_14029888a;
    LOCK();
    puVar1 = param_1 + 0x10;
    if (iVar2 == *(int *) puVar1) {
        *(int *) puVar1 = iVar2 + -1;
        iVar5 = iVar2;
    } else {
        iVar5 = *(int *) puVar1;
    }
    if (iVar2 == iVar5) {
        if ((iVar2 + -1 == 0) && ((longlong *) param_1[0x11] != (longlong *) 0x0)) {
            (**(code * *)(*(longlong *) param_1[0x11] + 8))();
            param_1[0x11] = 0;
        }
        goto LAB_14029888a;
    }
    iVar2 = *(int *) (param_1 + 0x10);
    goto joined_r0x000140298840;
    joined_r0x000140298900:
    if (iVar2 == 0) goto LAB_14029894a;
    LOCK();
    puVar1 = param_1 + 0x12;
    if (iVar2 == *(int *) puVar1) {
        *(int *) puVar1 = iVar2 + -1;
        iVar5 = iVar2;
    } else {
        iVar5 = *(int *) puVar1;
    }
    if (iVar2 == iVar5) {
        if ((iVar2 + -1 == 0) && ((longlong *) param_1[0x13] != (longlong *) 0x0)) {
            (**(code * *)(*(longlong *) param_1[0x13] + 8))();
            param_1[0x13] = 0;
        }
        goto LAB_14029894a;
    }
    iVar2 = *(int *) (param_1 + 0x12);
    goto joined_r0x000140298900;
}


ulonglong FUN_140298b30(longlong param_1, undefined4 param_2, undefined *param_3, undefined4 param_4,
                        undefined4 param_5, undefined4 param_6, undefined4 param_7) {
    int iVar1;
    uint uVar2;
    longlong lVar3;
    ulonglong uVar4;
    undefined *puVar5;
    longlong *local_res8;
    undefined8 uVar6;
    undefined8 local_48;
    undefined4 local_40;
    undefined4 local_3c;
    longlong local_38;
    undefined *local_30;
    undefined8 local_28;
    undefined4 local_20;

    *(undefined4 * )(param_1 + 0x40) = param_2;
    *(undefined4 * )(param_1 + 0x48) = param_5;
    *(undefined4 * )(param_1 + 0x44) = param_4;
    *(undefined4 * )(param_1 + 0x4c) = param_6;
    *(undefined4 * )(param_1 + 0x50) = param_7;
    lVar3 = FUN_1407dd8d8(param_3, 0x2e);
    if (lVar3 == 0) {
        uVar4 = FUN_14029b080(param_1, 0x80004005);
        return uVar4;
    }
    iVar1 = FUN_14018e3e0(param_3, L"http", 4);
    if (iVar1 == 0) {
        iVar1 = FUN_14018e2c0(lVar3, L".tex");
        if (iVar1 == 0) {
            uVar4 = FUN_14029b080(param_1, 0x80004001);
            return uVar4;
        }
        local_res8 = (longlong *) 0x0;
        iVar1 = FUN_1407b01f0(param_3, 1, param_1 + 0x68, &local_res8);
        if (-1 < iVar1) {
            local_30 = &DAT_14029ab30;
            local_40 = 10;
            local_3c = 2;
            local_28 = 0;
            local_20 = 1;
            local_38 = param_1;
            iVar1 = FUN_14019dca0(&local_40, 0, local_res8, param_1 + 0x78);
            if (-1 < iVar1) goto LAB_140298dbd;
            local_48 = 0x141de4068;
            puVar5 = &DAT_140ae6d44;
            goto LAB_140298d7a;
        }
        local_48 = 0x141de40e8;
        puVar5 = &DAT_140ae6dc4;
    } else {
        iVar1 = FUN_14018e2c0(lVar3, L".tex");
        if (iVar1 == 0) {
            iVar1 = FUN_1401b5b50(DAT_140c63788, param_3, 1, 3, (longlong * *)(param_1 + 0x60));
            if (iVar1 < 0) {
                uVar4 = FUN_14029b080(param_1, iVar1);
                return uVar4;
            }
            uVar4 = (**(code * *)(**(longlong * *)(param_1 + 0x60) + 0x18))();
            if (uVar4 < 0x70) {
                uVar4 = FUN_14029b080(param_1, 0x80004005);
                return uVar4;
            }
            uVar4 = FUN_14029cec0(param_1);
            return uVar4;
        }
        local_res8 = (longlong *) 0x0;
        uVar6 = 0;
        iVar1 = FUN_1401b6de0();
        if (-1 < iVar1) {
            local_30 = &DAT_14029ab30;
            local_40 = 10;
            local_3c = 2;
            local_28 = 0;
            local_20 = 1;
            local_38 = param_1;
            iVar1 = FUN_14019dca0(&local_40, 0, local_res8, param_1 + 0x78, uVar6);
            if (-1 < iVar1) {
                LAB_140298dbd:
                if (local_res8 != (longlong *) 0x0) {
                    (**(code * *)(*local_res8 + 8))();
                }
                return 0;
            }
            local_48 = 0x141de3d38;
            puVar5 = &DAT_140ae5b54;
            LAB_140298d7a:
            if (param_3 != (undefined *) 0x0) {
                puVar5 = param_3;
            }
            FUN_1401a3130(0xe, 2, &local_48, iVar1, puVar5);
            goto LAB_140298da0;
        }
        local_48 = 0x141de3e88;
        puVar5 = &DAT_140ae6be4;
    }
    if (param_3 != (undefined *) 0x0) {
        puVar5 = param_3;
    }
    FUN_1401a3130(0xe, 2, &local_48, iVar1, puVar5);
    LAB_140298da0:
    uVar2 = FUN_14029b080(param_1, iVar1);
    if (local_res8 != (longlong *) 0x0) {
        (**(code * *)(*local_res8 + 8))();
    }
    return (ulonglong) uVar2;
}


ulonglong FUN_140298df0(longlong param_1) {
    int iVar1;
    uint uVar2;
    ulonglong uVar3;
    longlong *local_res8;
    undefined8 local_res10;
    undefined4 local_38;
    undefined4 local_34;
    longlong local_30;
    undefined *local_28;
    undefined8 local_20;
    undefined4 local_18;

    iVar1 = FUN_1401c5690(0x70, param_1 + 0x68);
    if (iVar1 < 0) {
        local_res10 = 0x141de40d8;
        FUN_1401a3130(0xe, 2, &local_res10, iVar1);
        uVar3 = FUN_14029b080(param_1, iVar1);
        return uVar3;
    }
    uVar3 = 0;
    local_res8 = (longlong *) 0x0;
    iVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x60) + 0x58))
            (*(longlong * *)(param_1 + 0x60), *(undefined8 * )(param_1 + 0x68), &local_res8, 0);
    if (iVar1 < 0) {
        local_res10 = 0x141de4b58;
    } else {
        local_28 = &DAT_140298f20;
        local_38 = 0xc;
        local_34 = 2;
        local_20 = 0;
        local_18 = 1;
        local_30 = param_1;
        iVar1 = FUN_14019dca0(&local_38, 0, local_res8, param_1 + 0x78);
        if (-1 < iVar1) goto LAB_140298ef5;
        local_res10 = 0x141de47c8;
    }
    FUN_1401a3130(0xe, 2, &local_res10, iVar1);
    uVar2 = FUN_14029b080(param_1, iVar1);
    uVar3 = (ulonglong) uVar2;
    LAB_140298ef5:
    if (local_res8 != (longlong *) 0x0) {
        (**(code * *)(*local_res8 + 8))();
    }
    return uVar3;
}


undefined4 FUN_14029b080(longlong param_1, undefined4 param_2) {
    int *piVar1;
    int iVar2;
    int iVar3;
    ulonglong uVar4;

    uVar4 = 0;
    if (*(longlong * )(param_1 + 0xb0) != 0) {
        do {
            FUN_14018b900(*(undefined8 * )(*(longlong * )(param_1 + 0xa8) + uVar4 * 8));
            uVar4 = uVar4 + 1;
        } while (uVar4 < *(ulonglong * )(param_1 + 0xb0));
    }
    *(undefined8 * )(param_1 + 0xb0) = 0;
    if (*(longlong * *)(param_1 + 0x60) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x60) + 8))();
        *(undefined8 * )(param_1 + 0x60) = 0;
    }
    if (*(longlong * *)(param_1 + 0x68) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x68) + 8))();
        *(undefined8 * )(param_1 + 0x68) = 0;
    }
    *(undefined4 * )(param_1 + 0xa0) = param_2;
    iVar2 = *(int *) (param_1 + 0x70);
    while (iVar2 != 0) {
        LOCK();
        piVar1 = (int *) (param_1 + 0x70);
        if (iVar2 == *piVar1) {
            *piVar1 = iVar2 + -1;
            iVar3 = iVar2;
        } else {
            iVar3 = *piVar1;
        }
        if (iVar2 == iVar3) {
            if ((iVar2 + -1 == 0) && (*(longlong * *)(param_1 + 0x78) != (longlong *) 0x0)) {
                (**(code * *)(**(longlong * *)(param_1 + 0x78) + 8))();
                *(undefined8 * )(param_1 + 0x78) = 0;
            }
            break;
        }
        iVar2 = *(int *) (param_1 + 0x70);
    }
    iVar2 = *(int *) (param_1 + 0x80);
    while (iVar2 != 0) {
        LOCK();
        piVar1 = (int *) (param_1 + 0x80);
        if (iVar2 == *piVar1) {
            *piVar1 = iVar2 + -1;
            iVar3 = iVar2;
        } else {
            iVar3 = *piVar1;
        }
        if (iVar2 == iVar3) {
            if ((iVar2 + -1 == 0) && (*(longlong * *)(param_1 + 0x88) != (longlong *) 0x0)) {
                (**(code * *)(**(longlong * *)(param_1 + 0x88) + 8))();
                *(undefined8 * )(param_1 + 0x88) = 0;
            }
            break;
        }
        iVar2 = *(int *) (param_1 + 0x80);
    }
    iVar2 = *(int *) (param_1 + 0x90);
    do {
        if (iVar2 == 0) {
            LAB_14029b1da:
            FUN_14029cd30(param_1);
            *(undefined4 * )(param_1 + 0x18) = 1;
            return param_2;
        }
        LOCK();
        piVar1 = (int *) (param_1 + 0x90);
        if (iVar2 == *piVar1) {
            *piVar1 = iVar2 + -1;
            iVar3 = iVar2;
        } else {
            iVar3 = *piVar1;
        }
        if (iVar2 == iVar3) {
            if ((iVar2 + -1 == 0) && (*(longlong * *)(param_1 + 0x98) != (longlong *) 0x0)) {
                (**(code * *)(**(longlong * *)(param_1 + 0x98) + 8))();
                *(undefined8 * )(param_1 + 0x98) = 0;
            }
            goto LAB_14029b1da;
        }
        iVar2 = *(int *) (param_1 + 0x90);
    } while (true);
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14029b200(longlong param_1, longlong *param_2, undefined8 param_3, uint param_4, int *param_5,
                   uint param_6, uint param_7, longlong **param_8, uint param_9) {
    longlong *plVar1;
    int iVar2;
    undefined auStack200[32];
    ulonglong local_a8;
    uint local_a0;
    undefined8 local_98;
    longlong **local_90;
    undefined8 *local_88;
    undefined4 local_80;
    longlong *local_78;
    longlong *local_70;
    undefined8 local_68;
    uint local_60;
    int local_54;
    uint local_48;
    uint local_44;
    ulonglong local_40;

    local_40 = DAT_140c0f7b0 ^ (ulonglong) auStack200;
    if (((((*(longlong * )(*(longlong * )(param_1 + 0x30) + 0x19d8) != 0) && (param_6 == param_7)) &&
          ((**(code * *)(*param_2 + 0x60))(param_2), local_60 == param_4)) &&
         ((local_54 == 0 && (*(uint * )(param_8 + 1) == local_48)))) &&
        ((*(uint * )((longlong) param_8 + 0xc) == local_44 &&
          (((local_48 & *param_5 - 1U) == 0 && ((local_44 & param_5[3] - 1U) == 0)))))) {
        local_78 = (longlong *) 0x0;
        local_88 = &local_68;
        local_90 = &local_78;
        local_98 = CONCAT44(local_98._4_4_, 2);
        local_a0 = local_60;
        local_a8 = local_a8 & 0xffffffff00000000;
        local_68 = param_3;
        iVar2 = (**(code * *)(**(longlong * *)(*(longlong * )(param_1 + 0x30) + 0x19d8) + 0xb8))();
        if (-1 < iVar2) {
            local_70 = (longlong *) 0x0;
            iVar2 = (**(code * *)(*local_78 + 0x90))(local_78, 0, &local_70);
            if (-1 < iVar2) {
                plVar1 = *(longlong * *)(*(longlong * )(param_1 + 0x30) + 0x19d8);
                local_a8 = 0;
                iVar2 = (**(code * *)(*plVar1 + 0xf0))(plVar1, local_70, 0, param_2);
                if (-1 < iVar2) {
                    if (local_70 != (longlong *) 0x0) {
                        (**(code * *)(*local_70 + 0x10))();
                    }
                    if (local_78 != (longlong *) 0x0) {
                        (**(code * *)(*local_78 + 0x10))();
                    }
                    goto LAB_14029b384;
                }
            }
            if (local_70 != (longlong *) 0x0) {
                (**(code * *)(*local_70 + 0x10))();
            }
        }
        if (local_78 != (longlong *) 0x0) {
            (**(code * *)(*local_78 + 0x10))();
        }
    }
    local_80 = 0;
    local_88 = (undefined8 * )((ulonglong) local_88 & 0xffffffff00000000 | (ulonglong) param_9);
    local_90 = param_8;
    local_98 = 0;
    local_a0 = param_7;
    local_a8 = local_a8 & 0xffffffff00000000 | (ulonglong) param_4;
    iVar2 = (*DAT_140c65708)(param_2, 0, 0, param_3);
    if (iVar2 < 0) {
        local_68 = 0x141de5340;
        FUN_1401a3130(0xe, 2, &local_68, iVar2);
    }
    LAB_14029b384:
    FUN_1407db4f0(local_40 ^ (ulonglong) auStack200);
    return;
}


int FUN_14029b740(longlong *param_1, undefined8 param_2) {
    int iVar1;
    undefined8 local_res8;
    undefined4 local_18[4];

    local_18[0] = 0xffffffff;
    (**(code * *)(*param_1 + 0x20))(param_1, local_18);
    if (param_1[7] == 0) {
        return -0x7fffbffb;
    }
    iVar1 = FUN_14026c5f0(param_2);
    if (iVar1 < 0) {
        local_res8 = 0x141de5330;
        FUN_1401a3130(0xe, 2, &local_res8, iVar1);
        return iVar1;
    }
    return 0;
}


undefined8 FUN_14029b7d0(undefined8 param_1, ulonglong param_2) {
    FUN_14029b810();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}



// WARNING: Removing unreachable block (ram,0x00014029b949)

void FUN_14029b810(undefined8 *param_1) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    int iVar4;

    *param_1 = &PTR_FUN_140b61b70;
    if (param_1[10] != 0) {
        iVar2 = *(int *) (param_1 + 9);
        while (iVar2 != 0) {
            LOCK();
            puVar1 = param_1 + 9;
            if (iVar2 == *(int *) puVar1) {
                *(int *) puVar1 = iVar2 + 1;
                iVar4 = iVar2;
            } else {
                iVar4 = *(int *) puVar1;
            }
            if (iVar2 == iVar4) {
                plVar3 = (longlong *) param_1[10];
                if (plVar3 != (longlong *) 0x0) {
                    (**(code * *)(*plVar3 + 0x68))(plVar3);
                    (**(code * *)(*plVar3 + 0x20))();
                    iVar2 = *(int *) (param_1 + 9);
                    goto joined_r0x00014029b894;
                }
                break;
            }
            iVar2 = *(int *) (param_1 + 9);
        }
    }
    LAB_14029b8ce:
    if ((longlong *) param_1[8] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[8] + 8))();
        param_1[8] = 0;
    }
    if (param_1[6] != 0) {
        FUN_1400b6120(param_1[2] + 0x1810, param_1 + 6);
        FUN_14018b900(param_1[6], 0);
    }
    if ((undefined8 *) param_1[0x12] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x12] = param_1[0x13];
    }
    if (param_1[0x13] != 0) {
        *(undefined8 * )(param_1[0x13] + 0x90) = param_1[0x12];
    }
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
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
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    FUN_14012f590(param_1 + 9);
    if ((longlong *) param_1[8] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[8] + 8))();
    }
    return;
    joined_r0x00014029b894:
    if (iVar2 == 0) goto LAB_14029b8ce;
    LOCK();
    puVar1 = param_1 + 9;
    if (iVar2 == *(int *) puVar1) {
        *(int *) puVar1 = iVar2 + -1;
        iVar4 = iVar2;
    } else {
        iVar4 = *(int *) puVar1;
    }
    if (iVar2 == iVar4) {
        if ((iVar2 + -1 == 0) && ((longlong *) param_1[10] != (longlong *) 0x0)) {
            (**(code * *)(*(longlong *) param_1[10] + 8))();
            param_1[10] = 0;
        }
        goto LAB_14029b8ce;
    }
    iVar2 = *(int *) (param_1 + 9);
    goto joined_r0x00014029b894;
}


ulonglong FUN_14029b9f0(ulonglong param_1, undefined8 param_2) {
    ulonglong **ppuVar1;
    int iVar2;
    uint uVar3;
    undefined8 uVar4;
    longlong lVar5;
    ulonglong uVar6;
    ulonglong *puVar7;
    ulonglong *puVar8;
    longlong *plVar9;
    longlong *local_res8;
    longlong *local_res18;
    undefined4 local_58;
    undefined4 local_54;
    ulonglong local_50;
    code *local_48;
    undefined8 local_40;
    undefined4 local_38;

    *(undefined4 * )(param_1 + 0x58) = 0x8000000a;
    *(undefined8 * )(param_1 + 0x18) = 0;
    *(undefined8 * )(param_1 + 0x20) = 0;
    *(undefined8 * )(param_1 + 0x28) = 0;
    *(undefined8 * )(param_1 + 0x30) = 0;
    *(undefined8 * )(param_1 + 0x38) = 0;
    uVar4 = FUN_14018e9c0(param_2);
    *(undefined8 * )(param_1 + 0x30) = uVar4;
    lVar5 = FUN_1407dd8d8(param_2, 0x2e);
    if (lVar5 == 0) {
        uVar6 = FUN_14029c120(param_1, 0x80004005);
        return uVar6;
    }
    iVar2 = FUN_14018e2c0(lVar5, L".tex");
    puVar8 = (ulonglong *) 0x0;
    if (iVar2 == 0) {
        *(undefined4 * )(param_1 + 0x38) = 0;
    } else {
        iVar2 = FUN_14018e2c0(lVar5, L".tga");
        if (iVar2 == 0) {
            *(undefined4 * )(param_1 + 0x38) = 1;
        } else {
            iVar2 = FUN_14018e2c0(lVar5, L".dds");
            if (iVar2 == 0) {
                *(undefined4 * )(param_1 + 0x38) = 2;
            } else {
                iVar2 = FUN_14018e2c0(lVar5, L".png");
                if (iVar2 == 0) {
                    *(undefined4 * )(param_1 + 0x38) = 3;
                } else {
                    iVar2 = FUN_14018e2c0(lVar5, L".bmp");
                    if (iVar2 == 0) {
                        *(undefined4 * )(param_1 + 0x38) = 4;
                    } else {
                        iVar2 = FUN_14018e2c0(lVar5, L".jpg");
                        if ((iVar2 != 0) && (iVar2 = FUN_14018e2c0(lVar5, L".jpeg"), iVar2 != 0)) {
                            uVar6 = FUN_14029c120(param_1, 0x80004005);
                            return uVar6;
                        }
                        *(undefined4 * )(param_1 + 0x38) = 5;
                    }
                }
            }
        }
    }
    if (*(int *) (param_1 + 0x38) == 0) {
        local_res18 = (longlong *) 0x0;
        iVar2 = FUN_1401b5b50(DAT_140c63788, param_2, 1, 3, &local_res18);
        plVar9 = local_res18;
        if (iVar2 < 0) {
            uVar3 = FUN_14029c120(param_1, iVar2);
            uVar6 = (ulonglong) uVar3;
        } else {
            uVar6 = (**(code * *)(*local_res18 + 0x18))(local_res18);
            if (uVar6 < 0x70) {
                uVar3 = FUN_14029c120(param_1, 0x80004005);
                uVar6 = (ulonglong) uVar3;
            } else {
                iVar2 = FUN_1401c5690(0x70, param_1 + 0x40);
                if (iVar2 < 0) {
                    uVar3 = FUN_14029c120(param_1, iVar2);
                    uVar6 = (ulonglong) uVar3;
                } else {
                    local_res8 = (longlong *) 0x0;
                    iVar2 = (**(code * *)(*plVar9 + 0x58))
                            (plVar9, *(undefined8 * )(param_1 + 0x40), &local_res8, 0);
                    if (-1 < iVar2) {
                        local_48 = FUN_14029bf30;
                        local_58 = 0xc;
                        local_54 = 2;
                        local_40 = 0;
                        local_38 = 1;
                        local_50 = param_1;
                        iVar2 = FUN_14019dca0(&local_58, 0, local_res8, param_1 + 0x50);
                        if (-1 < iVar2) {
                            if (local_res8 != (longlong *) 0x0) {
                                (**(code * *)(*local_res8 + 8))();
                            }
                            lVar5 = *plVar9;
                            goto LAB_14029bcec;
                        }
                    }
                    uVar3 = FUN_14029c120(param_1, iVar2);
                    uVar6 = (ulonglong) uVar3;
                    if (local_res8 != (longlong *) 0x0) {
                        (**(code * *)(*local_res8 + 8))();
                    }
                }
            }
        }
        if (plVar9 != (longlong *) 0x0) {
            (**(code * *)(*plVar9 + 8))(plVar9);
        }
    } else {
        local_res8 = (longlong *) 0x0;
        uVar4 = 0;
        iVar2 = FUN_1401b6de0();
        if (-1 < iVar2) {
            local_48 = FUN_14029c040;
            local_58 = 0xc;
            local_54 = 2;
            local_40 = 0;
            local_38 = 1;
            local_50 = param_1;
            iVar2 = FUN_14019dca0(&local_58, 0, local_res8, param_1 + 0x50, uVar4);
            if (-1 < iVar2) {
                if (local_res8 == (longlong *) 0x0) goto LAB_14029bcef;
                lVar5 = *local_res8;
                plVar9 = local_res8;
                LAB_14029bcec:
                (**(code * *)(lVar5 + 8))(plVar9);
                LAB_14029bcef:
                lVar5 = *(longlong * )(param_1 + 0x10);
                plVar9 = (longlong * )(lVar5 + 0x1810);
                if (*plVar9 == *(longlong * )(lVar5 + 0x1818)) {
                    FUN_1400290d0(plVar9);
                }
                uVar6 = (**(code * *)(lVar5 + 0x1828))(param_1 + 0x30);
                ppuVar1 = (ulonglong * *)
                        (*(longlong * )(lVar5 + 0x1820) + (uVar6 % *(ulonglong * )(lVar5 + 0x1818)) * 8);
                puVar7 = (ulonglong *) FUN_14018b280(0x20);
                if (puVar7 != (ulonglong *) 0x0) {
                    puVar8 = *ppuVar1;
                    *puVar7 = uVar6;
                    puVar7[1] = (ulonglong) puVar8;
                    uVar6 = *(ulonglong * )(param_1 + 0x30);
                    puVar7[3] = param_1;
                    puVar7[2] = uVar6;
                    puVar8 = puVar7;
                }
                *ppuVar1 = puVar8;
                *plVar9 = *plVar9 + 1;
                puVar8 = (ulonglong * )(*(longlong * )(param_1 + 0x10) + 0x1808);
                if (*(longlong * )(param_1 + 0x90) == 0) {
                    *(ulonglong * *)(param_1 + 0x90) = puVar8;
                    puVar7 = (ulonglong * )(param_1 + 0x98);
                    *puVar7 = *puVar8;
                    *puVar8 = param_1;
                    if (*puVar7 != 0) {
                        *(ulonglong * *)(*puVar7 + 0x90) = puVar7;
                    }
                }
                return 0;
            }
        }
        uVar3 = FUN_14029c120(param_1, iVar2);
        uVar6 = (ulonglong) uVar3;
        if (local_res8 != (longlong *) 0x0) {
            (**(code * *)(*local_res8 + 8))();
        }
    }
    return uVar6;
}


longlong FUN_14029bdc0(longlong param_1) {
    longlong lVar1;
    byte bVar2;
    int iVar3;
    int iVar4;
    longlong lVar5;

    lVar5 = 0x70;
    if (*(int *) (param_1 + 0x20) == 0) {
        iVar4 = *(int *) (param_1 + 0x18);
        if (iVar4 != 0) {
            lVar1 = (longlong) * (int *) (param_1 + 0x1c) * 0x2c;
            do {
                iVar4 = iVar4 + -1;
                bVar2 = (byte) iVar4;
                lVar5 = lVar5 + (ulonglong)
                        (((uint)(*(uint * )(param_1 + 0x10) >> (bVar2 & 0x1f) == 0) +
                          (*(uint * )(param_1 + 0x10) >> (bVar2 & 0x1f)) +
                          *(int *) (&DAT_140ae521c + lVar1) >>
                                                            ((byte) * (undefined4 * )(&DAT_140ae5220 + lVar1) & 0x1f)) *
                         (*(int *) (&DAT_140ae5210 + lVar1) +
                          (*(uint * )(param_1 + 0xc) >> (bVar2 & 0x1f)) +
                          (uint)(*(uint * )(param_1 + 0xc) >> (bVar2 & 0x1f) == 0) >>
                                                                                   ((byte) * (undefined4 * )(
                                                                                           &DAT_140ae5214 + lVar1) &
                                                                                    0x1f)) *
                         *(int *) (param_1 + 0x14) *
                         ((*(int *) (&DAT_140ae5204 + lVar1) +
                           (*(uint * )(param_1 + 8) >> (bVar2 & 0x1f)) +
                           (uint)(*(uint * )(param_1 + 8) >> (bVar2 & 0x1f) == 0) >>
                                                                                  ((byte) * (undefined4 * )(
                                                                                          &DAT_140ae5208 + lVar1) &
                                                                                   0x1f)) *
                          *(int *) (&DAT_140ae5224 + lVar1) + 3 & 0xfffffffc));
            } while (iVar4 != 0);
        }
    } else if ((*(int *) (param_1 + 0x20) == 1) &&
               (iVar4 = *(int *) (param_1 + 0x18), iVar3 = iVar4, iVar4 != 0)) {
        do {
            iVar3 = iVar3 + -1;
            lVar5 = lVar5 + (ulonglong) * (uint * )(param_1 + 0x38 + (ulonglong)((iVar4 - iVar3) - 1) * 4);
        } while (iVar3 != 0);
        return lVar5;
    }
    return lVar5;
}


void FUN_14029bf30(longlong param_1) {
    int iVar1;
    LPVOID pvVar2;
    int *piVar3;
    longlong *plVar4;

    if (DAT_140c63758 == 0) {
        LAB_14029bf62:
        plVar4 = (longlong *) 0x0;
    } else {
        pvVar2 = TlsGetValue(*(DWORD * )(DAT_140c63758 + 4));
        if ((pvVar2 == (LPVOID) 0x0) || (*(longlong * )((longlong) pvVar2 + 8) == 0)) goto LAB_14029bf62;
        plVar4 = *(longlong * *)(*(longlong * )((longlong) pvVar2 + 8) + 0x60);
    }
    iVar1 = (**(code * *)(*plVar4 + 0x28))();
    if (iVar1 < 0) {
        FUN_14029c120(param_1, iVar1);
        return;
    }
    piVar3 = (int *) (**(code * *)(**(longlong * *)(param_1 + 0x40) + 0x20))();
    if ((*piVar3 == 0x474658) && (piVar3[1] == 3)) {
        if ((piVar3[4] == 1) && (piVar3[5] == 1)) {
            *(undefined4 * )(param_1 + 0x18) = 0;
        } else if (piVar3[5] == 1) {
            *(undefined4 * )(param_1 + 0x18) = 1;
        } else {
            if (((piVar3[2] != piVar3[3]) || (piVar3[4] != 1)) || (piVar3[5] != 6)) goto LAB_14029c02a;
            *(undefined4 * )(param_1 + 0x18) = 2;
        }
        *(int *) (param_1 + 0x1c) = piVar3[2];
        *(int *) (param_1 + 0x20) = piVar3[3];
        *(int *) (param_1 + 0x24) = piVar3[4];
        *(int *) (param_1 + 0x28) = piVar3[6];
        if (piVar3[8] == 0) {
            *(int *) (param_1 + 0x2c) = piVar3[7];
            FUN_14029c120(param_1, 0);
            return;
        }
        if (piVar3[8] == 1) {
            *(undefined4 * )(param_1 + 0x2c) = 0;
            FUN_14029c120(param_1);
            return;
        }
    }
    LAB_14029c02a:
    FUN_14029c120(param_1, 0x80004005);
    return;
}


undefined8 FUN_14029c040(longlong *param_1) {
    int iVar1;
    int iVar2;
    LPVOID pvVar3;
    undefined8 uVar4;
    longlong *plVar5;

    if (((DAT_140c63758 == 0) ||
         (pvVar3 = TlsGetValue(*(DWORD * )(DAT_140c63758 + 4)), pvVar3 == (LPVOID) 0x0)) ||
        (*(longlong * )((longlong) pvVar3 + 8) == 0)) {
        plVar5 = (longlong *) 0x0;
    } else {
        plVar5 = *(longlong * *)(*(longlong * )((longlong) pvVar3 + 8) + 0x60);
    }
    iVar1 = (**(code * *)(*plVar5 + 0x28))();
    if (iVar1 < 0) {
        uVar4 = FUN_14029c120(param_1, iVar1);
        return uVar4;
    }
    iVar1 = (**(code * *)(*param_1 + 0x38))();
    if (iVar1 < 0) {
        uVar4 = FUN_14029c120(param_1, iVar1);
        return uVar4;
    }
    *(undefined4 * )(param_1 + 0xb) = 0;
    iVar1 = *(int *) (param_1 + 9);
    do {
        if (iVar1 == 0) {
            LAB_14029c0f2:
            if ((longlong *) param_1[8] != (longlong *) 0x0) {
                (**(code * *)(*(longlong *) param_1[8] + 8))();
                param_1[8] = 0;
            }
            return 0;
        }
        LOCK();
        plVar5 = param_1 + 9;
        if (iVar1 == *(int *) plVar5) {
            *(int *) plVar5 = iVar1 + -1;
            iVar2 = iVar1;
        } else {
            iVar2 = *(int *) plVar5;
        }
        if (iVar1 == iVar2) {
            if ((iVar1 + -1 == 0) && ((longlong *) param_1[10] != (longlong *) 0x0)) {
                (**(code * *)(*(longlong *) param_1[10] + 8))();
                param_1[10] = 0;
            }
            goto LAB_14029c0f2;
        }
        iVar1 = *(int *) (param_1 + 9);
    } while (true);
}


int FUN_14029c120(longlong param_1, int param_2) {
    int *piVar1;
    int iVar2;
    int iVar3;

    if (param_2 < 0) {
        *(undefined8 * )(param_1 + 0x1c) = 0;
        *(undefined8 * )(param_1 + 0x24) = 0;
        *(undefined4 * )(param_1 + 0x2c) = 0x1b;
    }
    *(int *) (param_1 + 0x58) = param_2;
    iVar2 = *(int *) (param_1 + 0x48);
    do {
        if (iVar2 == 0) {
            LAB_14029c18e:
            if (*(longlong * *)(param_1 + 0x40) != (longlong *) 0x0) {
                (**(code * *)(**(longlong * *)(param_1 + 0x40) + 8))();
                *(undefined8 * )(param_1 + 0x40) = 0;
            }
            return param_2;
        }
        LOCK();
        piVar1 = (int *) (param_1 + 0x48);
        if (iVar2 == *piVar1) {
            *piVar1 = iVar2 + -1;
            iVar3 = iVar2;
        } else {
            iVar3 = *piVar1;
        }
        if (iVar2 == iVar3) {
            if ((iVar2 + -1 == 0) && (*(longlong * *)(param_1 + 0x50) != (longlong *) 0x0)) {
                (**(code * *)(**(longlong * *)(param_1 + 0x50) + 8))();
                *(undefined8 * )(param_1 + 0x50) = 0;
            }
            goto LAB_14029c18e;
        }
        iVar2 = *(int *) (param_1 + 0x48);
    } while (true);
}


int FUN_14029c1c0(longlong *param_1) {
    longlong lVar1;
    ulonglong uVar2;
    DWORD DVar3;
    int iVar4;
    HANDLE hObject;
    ulonglong uVar5;
    DWORD *pDVar6;
    ulonglong *puVar7;
    undefined4 local_28[4];

    lVar1 = param_1[2];
    pDVar6 = (DWORD * )(lVar1 + 0x18);
    DVar3 = GetCurrentThreadId();
    uVar5 = 0;
    puVar7 = (ulonglong * )(lVar1 + 0x20);
    if (*pDVar6 == DVar3) {
        *puVar7 = *puVar7 + 1;
    } else {
        do {
            LOCK();
            uVar2 = *puVar7;
            *puVar7 = *puVar7 ^ (ulonglong)(uVar2 == 0) * (*puVar7 ^ 1);
            if (uVar2 == 0) {
                *pDVar6 = DVar3;
                goto LAB_14029c23e;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < 0x400);
        FUN_14019fb60(pDVar6, DVar3);
    }
    LAB_14029c23e:
    *(int *) (param_1 + 1) = *(int *) (param_1 + 1) + -1;
    iVar4 = *(int *) (param_1 + 1);
    if (iVar4 == -1) {
        local_28[0] = 0;
        iVar4 = (**(code * *)(*param_1 + 0x18))(param_1, local_28);
        if (iVar4 == 0) {
            *(int *) (param_1 + 1) = *(int *) (param_1 + 1) + 1;
            FUN_140198370(param_1 + 0xc, param_1, param_1[2] + 0x10);
        }
        (**(code * *)(*param_1 + 0x30))(param_1, 1);
        iVar4 = 0;
    } else if (iVar4 == 0) {
        if (param_1[6] == 0) {
            (**(code * *)(*param_1 + 0x30))(param_1, 1);
        } else {
            FUN_140198370(param_1 + 0xc, param_1, param_1[2] + 0x10);
        }
    }
    if (*puVar7 < 2) {
        *pDVar6 = 0;
        *puVar7 = 0;
        if (*(longlong * )(lVar1 + 0x28) != 0) {
            if (*(longlong * )(lVar1 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar7 = (ulonglong * )(lVar1 + 0x30);
                uVar5 = *puVar7;
                *puVar7 = *puVar7 ^ (ulonglong)(uVar5 == 0) * (*puVar7 ^ (ulonglong) hObject);
                if (uVar5 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar1 + 0x30));
        }
    } else {
        *puVar7 = *puVar7 - 1;
    }
    return iVar4;
}


undefined8 FUN_14029c330(longlong param_1) {
    int *piVar1;
    int iVar2;
    int iVar3;
    int iVar4;

    if (*(longlong * )(param_1 + 0x50) != 0) {
        iVar2 = *(int *) (param_1 + 0x48);
        while (iVar2 != 0) {
            LOCK();
            piVar1 = (int *) (param_1 + 0x48);
            if (iVar2 == *piVar1) {
                *piVar1 = iVar2 + 1;
                iVar3 = iVar2;
            } else {
                iVar3 = *piVar1;
            }
            if (iVar2 == iVar3) {
                if (*(longlong * *)(param_1 + 0x50) == (longlong *) 0x0) {
                    return 1;
                }
                iVar3 = (**(code * *)(**(longlong * *)(param_1 + 0x50) + 0x20))();
                iVar2 = *(int *) (param_1 + 0x48);
                goto joined_r0x00014029c390;
            }
            iVar2 = *(int *) (param_1 + 0x48);
        }
    }
    return 1;
    joined_r0x00014029c390:
    if (iVar2 == 0) {
        LAB_14029c3c4:
        if (iVar3 != 0) {
            return 1;
        }
        return 0;
    }
    LOCK();
    piVar1 = (int *) (param_1 + 0x48);
    if (iVar2 == *piVar1) {
        *piVar1 = iVar2 + -1;
        iVar4 = iVar2;
    } else {
        iVar4 = *piVar1;
    }
    if (iVar2 == iVar4) {
        if ((iVar2 + -1 == 0) && (*(longlong * *)(param_1 + 0x50) != (longlong *) 0x0)) {
            (**(code * *)(**(longlong * *)(param_1 + 0x50) + 8))();
            *(undefined8 * )(param_1 + 0x50) = 0;
        }
        goto LAB_14029c3c4;
    }
    iVar2 = *(int *) (param_1 + 0x48);
    goto joined_r0x00014029c390;
}


longlong *FUN_14029c3e0(longlong *param_1) {
    undefined4 local_18[4];

    local_18[0] = 0xffffffff;
    (**(code * *)(*param_1 + 0x18))(param_1, local_18);
    return param_1 + 3;
}


void FUN_14029c410(longlong param_1) {
    longlong *plVar1;
    undefined4 uVar2;
    int iVar3;
    undefined8 uVar4;
    undefined auStack88[32];
    undefined4 local_38;
    undefined4 local_34;
    undefined4 local_30;
    undefined4 local_2c;
    undefined4 local_28;
    int local_24;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack88;
    plVar1 = *(longlong * *)(param_1 + 0x40);
    uVar2 = (**(code * *)(*plVar1 + 0x10))(plVar1);
    uVar4 = (**(code * *)(*plVar1 + 0x20))(plVar1);
    iVar3 = (*DAT_140c65700)(uVar4, uVar2, &local_38);
    if (-1 < iVar3) {
        if (local_24 == 3) {
            *(undefined4 * )(param_1 + 0x18) = 0;
        } else if (local_24 == 4) {
            *(undefined4 * )(param_1 + 0x18) = 1;
        } else {
            if (local_24 != 5) goto LAB_14029c4b9;
            *(undefined4 * )(param_1 + 0x18) = 2;
        }
        *(undefined4 * )(param_1 + 0x1c) = local_38;
        *(undefined4 * )(param_1 + 0x20) = local_34;
        *(undefined4 * )(param_1 + 0x24) = local_30;
        *(undefined4 * )(param_1 + 0x28) = local_2c;
        uVar2 = FUN_14026c430(local_28);
        *(undefined4 * )(param_1 + 0x2c) = uVar2;
    }
    LAB_14029c4b9:
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack88);
    return;
}


void FUN_14029c4e0(undefined8 *param_1) {
    ulonglong *puVar1;
    longlong lVar2;
    ulonglong uVar3;
    DWORD DVar4;
    HANDLE hObject;
    ulonglong uVar5;

    lVar2 = param_1[2];
    *param_1 = &PTR_LAB_140b61bf0;
    DVar4 = GetCurrentThreadId();
    uVar5 = 0;
    if (*(DWORD * )(lVar2 + 0x18) == DVar4) {
        *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(lVar2 + 0x20);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
            if (uVar3 == 0) {
                *(DWORD * )(lVar2 + 0x18) = DVar4;
                goto LAB_14029c54a;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < 0x400);
        FUN_14019fb60(lVar2 + 0x18, DVar4);
    }
    LAB_14029c54a:
    if ((undefined8 *) param_1[3] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[3] = param_1[4];
    }
    if (param_1[4] != 0) {
        *(undefined8 * )(param_1[4] + 0x18) = param_1[3];
    }
    param_1[3] = 0;
    param_1[4] = 0;
    if (*(ulonglong * )(lVar2 + 0x20) < 2) {
        *(undefined4 * )(lVar2 + 0x18) = 0;
        *(undefined8 * )(lVar2 + 0x20) = 0;
        if (*(longlong * )(lVar2 + 0x28) != 0) {
            if (*(longlong * )(lVar2 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar2 + 0x30);
                uVar5 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar5 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar5 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar2 + 0x30));
        }
    } else {
        *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + -1;
    }
    if ((undefined8 *) param_1[3] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[3] = param_1[4];
    }
    if (param_1[4] != 0) {
        *(undefined8 * )(param_1[4] + 0x18) = param_1[3];
    }
    param_1[4] = 0;
    param_1[3] = 0;
    return;
}


undefined8 FUN_14029c610(longlong param_1) {
    longlong *plVar1;
    ulonglong *puVar2;
    longlong lVar3;
    ulonglong uVar4;
    DWORD DVar5;
    HANDLE hObject;
    ulonglong uVar6;
    longlong *plVar7;

    lVar3 = *(longlong * )(param_1 + 0x10);
    DVar5 = GetCurrentThreadId();
    uVar6 = 0;
    if (*(DWORD * )(lVar3 + 0x18) == DVar5) {
        *(longlong * )(lVar3 + 0x20) = *(longlong * )(lVar3 + 0x20) + 1;
    } else {
        do {
            LOCK();
            puVar2 = (ulonglong * )(lVar3 + 0x20);
            uVar4 = *puVar2;
            *puVar2 = *puVar2 ^ (ulonglong)(uVar4 == 0) * (*puVar2 ^ 1);
            if (uVar4 == 0) {
                *(DWORD * )(lVar3 + 0x18) = DVar5;
                goto LAB_14029c670;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(lVar3 + 0x18, DVar5);
    }
    LAB_14029c670:
    plVar7 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x1c68);
    if (*(longlong * )(param_1 + 0x18) == 0) {
        *(longlong * *)(param_1 + 0x18) = plVar7;
        plVar1 = (longlong * )(param_1 + 0x20);
        *plVar1 = *plVar7;
        *plVar7 = param_1;
        if (*plVar1 != 0) {
            *(longlong * *)(*plVar1 + 0x18) = plVar1;
        }
    }
    if (*(ulonglong * )(lVar3 + 0x20) < 2) {
        *(undefined4 * )(lVar3 + 0x18) = 0;
        *(undefined8 * )(lVar3 + 0x20) = 0;
        if (*(longlong * )(lVar3 + 0x28) != 0) {
            if (*(longlong * )(lVar3 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar2 = (ulonglong * )(lVar3 + 0x30);
                uVar6 = *puVar2;
                *puVar2 = *puVar2 ^ (ulonglong)(uVar6 == 0) * (*puVar2 ^ (ulonglong) hObject);
                if (uVar6 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar3 + 0x30));
        }
        return 0;
    }
    *(longlong * )(lVar3 + 0x20) = *(longlong * )(lVar3 + 0x20) + -1;
    return 0;
}


int FUN_14029c720(longlong param_1) {
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *) (param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_14029c4e0();
            FUN_14018b900(param_1, 0);
        }
        iVar2 = 0;
    }
    return iVar2;
}


void FUN_14029c760(undefined8 *param_1) {
    ulonglong *puVar1;
    longlong lVar2;
    ulonglong uVar3;
    DWORD DVar4;
    HANDLE hObject;
    ulonglong uVar5;

    lVar2 = param_1[4];
    *param_1 = &PTR_LAB_140b61c18;
    DVar4 = GetCurrentThreadId();
    uVar5 = 0;
    if (*(DWORD * )(lVar2 + 0x18) == DVar4) {
        *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(lVar2 + 0x20);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
            if (uVar3 == 0) {
                *(DWORD * )(lVar2 + 0x18) = DVar4;
                goto LAB_14029c7ca;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < 0x400);
        FUN_14019fb60(lVar2 + 0x18, DVar4);
    }
    LAB_14029c7ca:
    if ((undefined8 *) param_1[1] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[1] = param_1[2];
    }
    if (param_1[2] != 0) {
        *(undefined8 * )(param_1[2] + 8) = param_1[1];
    }
    param_1[1] = 0;
    param_1[2] = 0;
    if (*(ulonglong * )(lVar2 + 0x20) < 2) {
        *(undefined4 * )(lVar2 + 0x18) = 0;
        *(undefined8 * )(lVar2 + 0x20) = 0;
        if (*(longlong * )(lVar2 + 0x28) != 0) {
            if (*(longlong * )(lVar2 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar2 + 0x30);
                uVar5 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar5 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar5 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar2 + 0x30));
        }
    } else {
        *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + -1;
    }
    if ((undefined8 *) param_1[1] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[1] = param_1[2];
    }
    if (param_1[2] != 0) {
        *(undefined8 * )(param_1[2] + 8) = param_1[1];
    }
    param_1[2] = 0;
    param_1[1] = 0;
    return;
}


int FUN_14029c890(longlong param_1) {
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *) (param_1 + 0x18);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_14029c760();
            FUN_14018b900(param_1, 0);
        }
        iVar2 = 0;
    }
    return iVar2;
}


undefined8 *FUN_14029c8e0(undefined8 *param_1, ulonglong param_2) {
    *param_1 = &PTR_LAB_140b61c38;
    FUN_14029ca70();
    FUN_14029cd30(param_1);
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14029c930(longlong param_1) {
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    DWORD DVar5;
    HANDLE hObject;
    ulonglong uVar6;
    bool bVar7;

    if (*(int *) (param_1 + 0xc) == 0) {
        DVar5 = GetCurrentThreadId();
        uVar6 = 0;
        if (DAT_140c79b50 == DVar5) {
            DAT_140c79b58 = DAT_140c79b58 + 1;
            DVar5 = DAT_140c79b50;
        } else {
            do {
                LOCK();
                bVar7 = DAT_140c79b58 == 0;
                DAT_140c79b58 = DAT_140c79b58 ^ (ulonglong) bVar7 * (DAT_140c79b58 ^ 1);
                if (bVar7) goto LAB_14029c9ae;
                uVar6 = uVar6 + 1;
            } while (uVar6 < 0x400);
            FUN_14019fb60(&DAT_140c79b50, DVar5);
            DVar5 = DAT_140c79b50;
        }
        LAB_14029c9ae:
        DAT_140c79b50 = DVar5;
        lVar2 = DAT_140c657b8;
        if (*(int *) (param_1 + 0xc) == 0) {
            lVar3 = param_1;
            lVar4 = param_1;
            if (DAT_140c657b8 != 0) {
                plVar1 = (longlong * )(DAT_140c657b8 + 0x28);
                DAT_140c657b8 = param_1;
                *plVar1 = param_1;
                *(longlong * )(param_1 + 0x20) = lVar2;
                *(undefined8 * )(param_1 + 0x28) = 0;
                lVar3 = _DAT_140c657b0;
                lVar4 = DAT_140c657b8;
            }
            DAT_140c657b8 = lVar4;
            _DAT_140c657b0 = lVar3;
            *(undefined4 * )(param_1 + 0xc) = 1;
        }
        if (1 < DAT_140c79b58) {
            DAT_140c79b58 = DAT_140c79b58 - 1;
            return;
        }
        DAT_140c79b50 = 0;
        DAT_140c79b58 = 0;
        if (DAT_140c79b60 != 0) {
            if (DAT_140c79b68 == (HANDLE) 0x0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                bVar7 = DAT_140c79b68 == (HANDLE) 0x0;
                DAT_140c79b68 =
                        (HANDLE)((ulonglong) DAT_140c79b68 ^
                                 (ulonglong) bVar7 * ((ulonglong) DAT_140c79b68 ^ (ulonglong) hObject));
                if (!bVar7) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(DAT_140c79b68);
        }
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14029ca70(longlong param_1) {
    DWORD DVar1;
    HANDLE hObject;
    ulonglong uVar2;
    bool bVar3;

    if (*(int *) (param_1 + 0xc) != 0) {
        DVar1 = GetCurrentThreadId();
        uVar2 = 0;
        if (DAT_140c79b50 == DVar1) {
            DAT_140c79b58 = DAT_140c79b58 + 1;
            DVar1 = DAT_140c79b50;
        } else {
            do {
                LOCK();
                bVar3 = DAT_140c79b58 == 0;
                DAT_140c79b58 = DAT_140c79b58 ^ (ulonglong) bVar3 * (DAT_140c79b58 ^ 1);
                if (bVar3) goto LAB_14029caed;
                uVar2 = uVar2 + 1;
            } while (uVar2 < 0x400);
            FUN_14019fb60(&DAT_140c79b50, DVar1);
            DVar1 = DAT_140c79b50;
        }
        LAB_14029caed:
        DAT_140c79b50 = DVar1;
        if (*(int *) (param_1 + 0xc) != 0) {
            if (_DAT_140c657b0 == param_1) {
                if (DAT_140c657b8 == param_1) {
                    DAT_140c657b8 = 0;
                    _DAT_140c657b0 = 0;
                } else {
                    _DAT_140c657b0 = *(longlong * )(param_1 + 0x28);
                    *(undefined8 * )(_DAT_140c657b0 + 0x20) = 0;
                }
            } else if (DAT_140c657b8 == param_1) {
                *(undefined8 * )(*(longlong * )(param_1 + 0x20) + 0x28) = 0;
                DAT_140c657b8 = *(longlong * )(param_1 + 0x20);
            } else {
                *(undefined8 * )(*(longlong * )(param_1 + 0x20) + 0x28) = *(undefined8 * )(param_1 + 0x28);
                *(undefined8 * )(*(longlong * )(param_1 + 0x28) + 0x20) = *(undefined8 * )(param_1 + 0x20);
            }
            *(undefined8 * )(param_1 + 0x20) = 0;
            *(undefined8 * )(param_1 + 0x28) = 0;
            *(undefined4 * )(param_1 + 0xc) = 0;
        }
        if (1 < DAT_140c79b58) {
            DAT_140c79b58 = DAT_140c79b58 - 1;
            return;
        }
        DAT_140c79b50 = 0;
        DAT_140c79b58 = 0;
        if (DAT_140c79b60 != 0) {
            if (DAT_140c79b68 == (HANDLE) 0x0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                bVar3 = DAT_140c79b68 == (HANDLE) 0x0;
                DAT_140c79b68 =
                        (HANDLE)((ulonglong) DAT_140c79b68 ^
                                 (ulonglong) bVar3 * ((ulonglong) DAT_140c79b68 ^ (ulonglong) hObject));
                if (!bVar3) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(DAT_140c79b68);
        }
    }
    return;
}


void FUN_14029cbf0(longlong param_1) {
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    DWORD DVar5;
    HANDLE hObject;
    ulonglong uVar6;
    bool bVar7;

    if (*(int *) (param_1 + 0x14) == 0) {
        DVar5 = GetCurrentThreadId();
        uVar6 = 0;
        if (DAT_140c79b50 == DVar5) {
            DAT_140c79b58 = DAT_140c79b58 + 1;
            DVar5 = DAT_140c79b50;
        } else {
            do {
                LOCK();
                bVar7 = DAT_140c79b58 == 0;
                DAT_140c79b58 = DAT_140c79b58 ^ (ulonglong) bVar7 * (DAT_140c79b58 ^ 1);
                if (bVar7) goto LAB_14029cc6e;
                uVar6 = uVar6 + 1;
            } while (uVar6 < 0x400);
            FUN_14019fb60(&DAT_140c79b50, DVar5);
            DVar5 = DAT_140c79b50;
        }
        LAB_14029cc6e:
        DAT_140c79b50 = DVar5;
        lVar2 = DAT_140c657c0;
        if (*(int *) (param_1 + 0x14) == 0) {
            lVar3 = param_1;
            lVar4 = param_1;
            if (DAT_140c657c0 != 0) {
                plVar1 = (longlong * )(DAT_140c657c0 + 0x28);
                DAT_140c657c0 = param_1;
                *plVar1 = param_1;
                *(longlong * )(param_1 + 0x20) = lVar2;
                *(undefined8 * )(param_1 + 0x28) = 0;
                lVar3 = DAT_140c657a0;
                lVar4 = DAT_140c657c0;
            }
            DAT_140c657c0 = lVar4;
            DAT_140c657a0 = lVar3;
            *(undefined4 * )(param_1 + 0x14) = 1;
        }
        if (1 < DAT_140c79b58) {
            DAT_140c79b58 = DAT_140c79b58 - 1;
            return;
        }
        DAT_140c79b50 = 0;
        DAT_140c79b58 = 0;
        if (DAT_140c79b60 != 0) {
            if (DAT_140c79b68 == (HANDLE) 0x0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                bVar7 = DAT_140c79b68 == (HANDLE) 0x0;
                DAT_140c79b68 =
                        (HANDLE)((ulonglong) DAT_140c79b68 ^
                                 (ulonglong) bVar7 * ((ulonglong) DAT_140c79b68 ^ (ulonglong) hObject));
                if (!bVar7) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(DAT_140c79b68);
        }
    }
    return;
}


void FUN_14029cd30(longlong param_1) {
    DWORD DVar1;
    HANDLE hObject;
    ulonglong uVar2;
    bool bVar3;

    if (*(int *) (param_1 + 0x14) != 0) {
        DVar1 = GetCurrentThreadId();
        uVar2 = 0;
        if (DAT_140c79b50 == DVar1) {
            DAT_140c79b58 = DAT_140c79b58 + 1;
            DVar1 = DAT_140c79b50;
        } else {
            do {
                LOCK();
                bVar3 = DAT_140c79b58 == 0;
                DAT_140c79b58 = DAT_140c79b58 ^ (ulonglong) bVar3 * (DAT_140c79b58 ^ 1);
                if (bVar3) goto LAB_14029cdad;
                uVar2 = uVar2 + 1;
            } while (uVar2 < 0x400);
            FUN_14019fb60(&DAT_140c79b50, DVar1);
            DVar1 = DAT_140c79b50;
        }
        LAB_14029cdad:
        DAT_140c79b50 = DVar1;
        if (*(int *) (param_1 + 0x14) != 0) {
            if (DAT_140c657a0 == param_1) {
                if (DAT_140c657c0 == param_1) {
                    DAT_140c657c0 = 0;
                    DAT_140c657a0 = 0;
                } else {
                    DAT_140c657a0 = *(longlong * )(param_1 + 0x28);
                    *(undefined8 * )(DAT_140c657a0 + 0x20) = 0;
                }
            } else if (DAT_140c657c0 == param_1) {
                *(undefined8 * )(*(longlong * )(param_1 + 0x20) + 0x28) = 0;
                DAT_140c657c0 = *(longlong * )(param_1 + 0x20);
            } else {
                *(undefined8 * )(*(longlong * )(param_1 + 0x20) + 0x28) = *(undefined8 * )(param_1 + 0x28);
                *(undefined8 * )(*(longlong * )(param_1 + 0x28) + 0x20) = *(undefined8 * )(param_1 + 0x20);
            }
            *(undefined8 * )(param_1 + 0x20) = 0;
            *(undefined8 * )(param_1 + 0x28) = 0;
            *(undefined4 * )(param_1 + 0x14) = 0;
            LOCK();
            DAT_140c657a8 = DAT_140c657a8 + -1;
        }
        if (1 < DAT_140c79b58) {
            DAT_140c79b58 = DAT_140c79b58 - 1;
            return;
        }
        DAT_140c79b50 = 0;
        DAT_140c79b58 = 0;
        if (DAT_140c79b60 != 0) {
            if (DAT_140c79b68 == (HANDLE) 0x0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                bVar3 = DAT_140c79b68 == (HANDLE) 0x0;
                DAT_140c79b68 =
                        (HANDLE)((ulonglong) DAT_140c79b68 ^
                                 (ulonglong) bVar3 * ((ulonglong) DAT_140c79b68 ^ (ulonglong) hObject));
                if (!bVar3) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(DAT_140c79b68);
        }
    }
    return;
}



// WARNING: Removing unreachable block (ram,0x00014029cf08)
// WARNING: Removing unreachable block (ram,0x00014029cf14)
// WARNING: Removing unreachable block (ram,0x00014029cf2c)
// WARNING: Removing unreachable block (ram,0x00014029cf2f)

undefined8 FUN_14029cec0(longlong *param_1) {
    int iVar1;
    undefined8 uVar2;

    iVar1 = DAT_140c40650;
    if (*DAT_140c63750 < DAT_140c40650) {
        iVar1 = *DAT_140c63750;
    }
    if (DAT_140c657a8 < *(uint * )(&DAT_140c40660 + (longlong) iVar1 * 4)) {
        DAT_140c657a8 = DAT_140c657a8 + 1;
        LOCK();
        FUN_14029cbf0(param_1);
    } else {
        FUN_14029c930(param_1);
    }
    if (*(int *) ((longlong) param_1 + 0x14) == 0) {
        return 0;
    }
    // WARNING: Could not recover jumptable at 0x00014029cf51. Too many branches
    // WARNING: Treating indirect jump as call
    uVar2 = (**(code * *)(*param_1 + 0x18))(param_1);
    return uVar2;
}


void FUN_14029cf70(undefined8 *param_1) {
    ulonglong *puVar1;
    longlong lVar2;
    ulonglong uVar3;
    DWORD DVar4;
    HANDLE hObject;
    ulonglong uVar5;

    lVar2 = param_1[2];
    *param_1 = &PTR_LAB_140b61c70;
    DVar4 = GetCurrentThreadId();
    uVar5 = 0;
    if (*(DWORD * )(lVar2 + 0x18) == DVar4) {
        *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(lVar2 + 0x20);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
            if (uVar3 == 0) {
                *(DWORD * )(lVar2 + 0x18) = DVar4;
                goto LAB_14029cfda;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < 0x400);
        FUN_14019fb60(lVar2 + 0x18, DVar4);
    }
    LAB_14029cfda:
    if ((undefined8 *) param_1[0x14] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x14] = param_1[0x15];
        if (param_1[0x15] != 0) {
            *(undefined8 * )(param_1[0x15] + 0xa0) = param_1[0x14];
        }
        param_1[0x14] = 0;
        param_1[0x15] = 0;
    }
    FUN_14029d910(param_1, 0);
    if (*(ulonglong * )(lVar2 + 0x20) < 2) {
        *(undefined4 * )(lVar2 + 0x18) = 0;
        *(undefined8 * )(lVar2 + 0x20) = 0;
        if (*(longlong * )(lVar2 + 0x28) != 0) {
            if (*(longlong * )(lVar2 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar2 + 0x30);
                uVar5 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar5 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar5 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar2 + 0x30));
        }
    } else {
        *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + -1;
    }
    if ((undefined8 *) param_1[0x14] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x14] = param_1[0x15];
    }
    if (param_1[0x15] != 0) {
        *(undefined8 * )(param_1[0x15] + 0xa0) = param_1[0x14];
    }
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    if ((longlong *) param_1[0x11] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x11] + 0x10))();
    }
    if ((longlong *) param_1[0x10] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x10] + 0x10))();
    }
    if ((longlong *) param_1[0xe] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0xe] + 0x10))();
    }
    if ((longlong *) param_1[0xd] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0xd] + 0x10))();
    }
    if ((longlong *) param_1[0xc] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0xc] + 0x10))();
    }
    if ((longlong *) param_1[0xb] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0xb] + 0x10))();
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

ulonglong FUN_14029d130(longlong param_1, undefined8 *param_2) {
    longlong *plVar1;
    undefined8 uVar2;
    undefined8 uVar3;
    undefined8 uVar4;
    longlong lVar5;
    ulonglong uVar6;
    int iVar7;
    DWORD DVar8;
    uint uVar9;
    HANDLE hObject;
    ulonglong uVar10;
    longlong *plVar11;
    DWORD *pDVar12;
    ulonglong *puVar13;
    ulonglong uVar14;
    undefined8 local_38;
    ulonglong local_30;

    uVar2 = param_2[2];
    uVar3 = param_2[3];
    uVar4 = param_2[4];
    local_38._0_4_ = (int) *param_2;
    lVar5 = *(longlong * )(param_1 + 0x10);
    if ((int) local_38 == 0) {
        local_38._0_4_ = 1;
    }
    iVar7 = (int) ((ulonglong) * param_2 >> 0x20);
    if (iVar7 == 0) {
        iVar7 = 1;
    }
    local_38 = CONCAT44(iVar7, (int) local_38);
    local_30._0_4_ = (uint) param_2[1];
    if ((uint) local_30 < 2) {
        local_30._0_4_ = 0x19;
    }
    pDVar12 = (DWORD * )(lVar5 + 0x18);
    local_30 = param_2[1] & 0xffffffff00000000 | (ulonglong)(uint)
    local_30;
    *(undefined8 * )(param_1 + 0x18) = local_38;
    *(ulonglong * )(param_1 + 0x20) = local_30;
    *(undefined8 * )(param_1 + 0x28) = uVar2;
    *(undefined8 * )(param_1 + 0x30) = uVar3;
    *(undefined8 * )(param_1 + 0x38) = uVar4;
    DVar8 = GetCurrentThreadId();
    uVar14 = 0;
    puVar13 = (ulonglong * )(lVar5 + 0x20);
    uVar10 = uVar14;
    if (*pDVar12 == DVar8) {
        *puVar13 = *puVar13 + 1;
    } else {
        do {
            LOCK();
            uVar6 = *puVar13;
            *puVar13 = *puVar13 ^ (ulonglong)(uVar6 == 0) * (*puVar13 ^ 1);
            if (uVar6 == 0) {
                *pDVar12 = DVar8;
                goto LAB_14029d20a;
            }
            uVar10 = uVar10 + 1;
        } while (uVar10 < 0x400);
        FUN_14019fb60(pDVar12);
    }
    LAB_14029d20a:
    uVar9 = FUN_14029d910(param_1, 2);
    uVar10 = (ulonglong) uVar9;
    if ((-1 < (int) uVar9) &&
        (plVar11 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x1ab0), uVar10 = uVar14,
                *(longlong * )(param_1 + 0xa0) == 0)) {
        *(longlong * *)(param_1 + 0xa0) = plVar11;
        plVar1 = (longlong * )(param_1 + 0xa8);
        *plVar1 = *plVar11;
        *plVar11 = param_1;
        if (*plVar1 != 0) {
            *(longlong * *)(*plVar1 + 0xa0) = plVar1;
        }
    }
    if (*puVar13 < 2) {
        *pDVar12 = 0;
        *puVar13 = 0;
        if (*(longlong * )(lVar5 + 0x28) != 0) {
            if (*(longlong * )(lVar5 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar13 = (ulonglong * )(lVar5 + 0x30);
                uVar14 = *puVar13;
                *puVar13 = *puVar13 ^ (ulonglong)(uVar14 == 0) * (*puVar13 ^ (ulonglong) hObject);
                if (uVar14 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar5 + 0x30));
        }
    } else {
        *puVar13 = *puVar13 - 1;
    }
    return uVar10;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14029d2e0(longlong param_1, undefined8 *param_2) {
    longlong lVar1;
    undefined8 uVar2;
    undefined8 uVar3;
    ulonglong uVar4;
    DWORD DVar5;
    int iVar6;
    HANDLE hObject;
    ulonglong uVar7;
    DWORD *pDVar8;
    ulonglong *puVar9;
    undefined auStack232[32];
    undefined4 local_c8;
    undefined4 local_c0;
    DWORD *local_b8;
    undefined8 local_b0;
    undefined8 local_a8;
    undefined8 local_90;
    undefined8 local_88;
    undefined8 local_80;
    undefined8 local_78;
    undefined8 local_70;
    undefined4 local_68;
    undefined4 local_64;
    undefined4 local_60;
    undefined4 local_5c;
    undefined4 local_58;
    undefined8 local_54;
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong) auStack232;
    lVar1 = param_2[3];
    uVar2 = param_2[4];
    uVar3 = param_2[2];
    local_b0._4_4_ = (int) ((ulonglong) * param_2 >> 0x20);
    local_a8._0_4_ = (uint) param_2[1];
    local_b0._0_4_ = (int) *param_2;
    if ((int) local_b0 == 0) {
        local_b0._0_4_ = 1;
    }
    if (local_b0._4_4_ == 0) {
        local_b0._4_4_ = 1;
    }
    if ((uint) local_a8 < 2) {
        local_a8._0_4_ = 0x19;
    }
    uVar7 = param_2[1] & 0xffffffff00000000;
    local_a8 = uVar7 | (uint) local_a8;
    local_90 = uVar2;
    if (((lVar1 == *(longlong * )(param_1 + 0x30)) && ((int) uVar2 == *(int *) (param_1 + 0x38))) &&
        (((int) local_b0 != *(int *) (param_1 + 0x18) ||
          (((local_b0._4_4_ != *(int *) (param_1 + 0x1c) || ((uint) local_a8 != *(uint * )(param_1 + 0x20))
            ) || (local_a8._4_4_ = (int) (uVar7 >> 0x20), local_a8._4_4_ != *(int *) (param_1 + 0x24))))))
            ) {
        pDVar8 = (DWORD * )(*(longlong * )(param_1 + 0x10) + 0x18);
        local_b8 = pDVar8;
        DVar5 = GetCurrentThreadId();
        uVar7 = 0;
        puVar9 = (ulonglong * )(local_b8 + 2);
        if (*pDVar8 == DVar5) {
            *puVar9 = *puVar9 + 1;
        } else {
            do {
                LOCK();
                uVar4 = *puVar9;
                *puVar9 = *puVar9 ^ (ulonglong)(uVar4 == 0) * (*puVar9 ^ 1);
                if (uVar4 == 0) {
                    *local_b8 = DVar5;
                    goto LAB_14029d3fd;
                }
                uVar7 = uVar7 + 1;
            } while (uVar7 < 0x400);
            FUN_14019fb60(local_b8);
        }
        LAB_14029d3fd:
        *(undefined8 * )(param_1 + 0x18) = local_b0;
        *(ulonglong * )(param_1 + 0x20) = local_a8;
        *(undefined8 * )(param_1 + 0x28) = uVar3;
        *(longlong * )(param_1 + 0x30) = lVar1;
        *(undefined8 * )(param_1 + 0x38) = uVar2;
        if (*(longlong * )(param_1 + 0x58) == 0) {
            iVar6 = FUN_14029d910(param_1, 0);
            if (-1 < iVar6) {
                FUN_14029d910(param_1, 2);
            }
        } else if ((*(longlong * )(*(longlong * )(param_1 + 0x10) + 0x2188) == 0) ||
                   (iVar6 = FUN_140278900(), -1 < iVar6)) {
            if (*(longlong * *)(param_1 + 0x68) != (longlong *) 0x0) {
                (**(code * *)(**(longlong * *)(param_1 + 0x68) + 0x10))();
                *(undefined8 * )(param_1 + 0x68) = 0;
            }
            if (*(longlong * *)(param_1 + 0x70) != (longlong *) 0x0) {
                (**(code * *)(**(longlong * *)(param_1 + 0x70) + 0x10))();
                *(undefined8 * )(param_1 + 0x70) = 0;
            }
            if (*(longlong * *)(param_1 + 0x80) != (longlong *) 0x0) {
                (**(code * *)(**(longlong * *)(param_1 + 0x80) + 0x10))();
                *(undefined8 * )(param_1 + 0x80) = 0;
            }
            if (*(longlong * *)(param_1 + 0x88) != (longlong *) 0x0) {
                (**(code * *)(**(longlong * *)(param_1 + 0x88) + 0x10))();
                *(undefined8 * )(param_1 + 0x88) = 0;
            }
            local_68 = *(undefined4 * )(param_1 + 0x18);
            local_54 = 0;
            local_64 = *(undefined4 * )(param_1 + 0x1c);
            local_60 = *(undefined4 * )(param_1 + 0x28);
            local_5c = 1;
            local_58 = *(undefined4 * )(&DAT_140ae7f90 + (longlong) * (int *) (param_1 + 0x20) * 4);
            iVar6 = (**(code * *)(**(longlong * *)(param_1 + 0x58) + 0x70))
                    (*(longlong * *)(param_1 + 0x58), &local_68);
            if (iVar6 < 0) {
                local_70 = 0x141de5428;
                FUN_1401a3130(0xe, 2, &local_70, iVar6);
            } else {
                local_c0 = 2;
                local_c8 = local_58;
                iVar6 = (**(code * *)(**(longlong * *)(param_1 + 0x58) + 0x68))
                        (*(longlong * *)(param_1 + 0x58), 0, local_68, local_64);
                if (iVar6 < 0) {
                    local_78 = 0x141de5418;
                    FUN_1401a3130(0xe, 2, &local_78, iVar6);
                } else {
                    iVar6 = FUN_14029dec0(param_1);
                    if (iVar6 < 0) {
                        local_88 = 0x141de5408;
                        FUN_1401a3130(0xe, 2, &local_88, iVar6);
                    } else if (*(longlong * )(*(longlong * )(param_1 + 0x10) + 0x2188) == 0) {
                        local_80 = 0x141de4fa8;
                        FUN_1401a3130(0xe, 2, &local_80);
                    } else {
                        FUN_1402786a0();
                    }
                }
            }
        }
        pDVar8 = local_b8;
        if (*puVar9 < 2) {
            *local_b8 = 0;
            *puVar9 = 0;
            if (*(longlong * )(local_b8 + 4) != 0) {
                if (*(longlong * )(local_b8 + 6) == 0) {
                    hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                    LOCK();
                    puVar9 = (ulonglong * )(pDVar8 + 6);
                    uVar7 = *puVar9;
                    *puVar9 = *puVar9 ^ (ulonglong)(uVar7 == 0) * (*puVar9 ^ (ulonglong) hObject);
                    if (uVar7 != 0) {
                        CloseHandle(hObject);
                    }
                }
                SetEvent(*(HANDLE * )(pDVar8 + 6));
            }
        } else {
            *puVar9 = *puVar9 - 1;
        }
    }
    FUN_1407db4f0(local_48 ^ (ulonglong) auStack232);
    return;
}


int FUN_14029d680(longlong param_1) {
    longlong lVar1;
    ulonglong uVar2;
    DWORD DVar3;
    int iVar4;
    HANDLE hObject;
    ulonglong uVar5;
    DWORD *pDVar6;
    ulonglong *puVar7;
    undefined8 local_res10;
    undefined8 local_res18;
    undefined8 local_res20;

    lVar1 = *(longlong * )(param_1 + 0x10);
    pDVar6 = (DWORD * )(lVar1 + 0x18);
    DVar3 = GetCurrentThreadId();
    uVar5 = 0;
    puVar7 = (ulonglong * )(lVar1 + 0x20);
    if (*pDVar6 == DVar3) {
        *puVar7 = *puVar7 + 1;
    } else {
        do {
            LOCK();
            uVar2 = *puVar7;
            *puVar7 = *puVar7 ^ (ulonglong)(uVar2 == 0) * (*puVar7 ^ 1);
            if (uVar2 == 0) {
                *pDVar6 = DVar3;
                goto LAB_14029d704;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < 0x400);
        FUN_14019fb60(pDVar6, DVar3);
    }
    LAB_14029d704:
    if (*(longlong * )(param_1 + 0x58) != 0) {
        if ((*(longlong * )(*(longlong * )(param_1 + 0x10) + 0x2188) != 0) &&
            (iVar4 = FUN_140278900(), iVar4 < 0))
            goto LAB_14029d87d;
        if (*(longlong * *)(param_1 + 0x68) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x68) + 0x10))();
            *(undefined8 * )(param_1 + 0x68) = 0;
        }
        if (*(longlong * *)(param_1 + 0x70) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x70) + 0x10))();
            *(undefined8 * )(param_1 + 0x70) = 0;
        }
        if (*(longlong * *)(param_1 + 0x80) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x80) + 0x10))();
            *(undefined8 * )(param_1 + 0x80) = 0;
        }
        if (*(longlong * *)(param_1 + 0x88) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x88) + 0x10))();
            *(undefined8 * )(param_1 + 0x88) = 0;
        }
        iVar4 = (**(code * *)(**(longlong * *)(param_1 + 0x58) + 0x68))
                (*(longlong * *)(param_1 + 0x58), 0, *(undefined4 * )(param_1 + 0x18),
                 *(undefined4 * )(param_1 + 0x1c),
                 *(undefined4 * )(&DAT_140ae7f90 + (longlong) * (int *) (param_1 + 0x20) * 4), 2,
                 *(undefined4 * )(param_1 + 0x18), *(undefined4 * )(param_1 + 0x28),
                 *(undefined4 * )(&DAT_140ae7f90 + (longlong) * (int *) (param_1 + 0x20) * 4));
        if (iVar4 < 0) {
            local_res10 = 0x141de4f38;
            FUN_1401a3130(0xe, 2, &local_res10, iVar4);
            goto LAB_14029d87d;
        }
        iVar4 = FUN_14029dec0(param_1);
        if (iVar4 < 0) {
            local_res18 = 0x141de4b78;
            FUN_1401a3130(0xe, 2, &local_res18, iVar4);
            goto LAB_14029d87d;
        }
        if (*(longlong * )(*(longlong * )(param_1 + 0x10) + 0x2188) == 0) {
            local_res20 = 0x141de4a18;
            FUN_1401a3130(0xe, 2, &local_res20);
        } else {
            iVar4 = FUN_1402786a0();
            if (iVar4 < 0) goto LAB_14029d87d;
        }
    }
    iVar4 = 0;
    LAB_14029d87d:
    if (*puVar7 < 2) {
        *pDVar6 = 0;
        *puVar7 = 0;
        if (*(longlong * )(lVar1 + 0x28) != 0) {
            if (*(longlong * )(lVar1 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar7 = (ulonglong * )(lVar1 + 0x30);
                uVar5 = *puVar7;
                *puVar7 = *puVar7 ^ (ulonglong)(uVar5 == 0) * (*puVar7 ^ (ulonglong) hObject);
                if (uVar5 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar1 + 0x30));
        }
        return iVar4;
    }
    *puVar7 = *puVar7 - 1;
    return iVar4;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14029d910(longlong param_1, int param_2) {
    undefined8 *puVar1;
    longlong lVar2;
    longlong *plVar3;
    int *piVar4;
    DWORD DVar5;
    int iVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    LONG_PTR LVar9;
    undefined4 uVar10;
    undefined4 uVar11;
    undefined auStack280[32];
    undefined8 *local_f8;
    undefined8 local_f0;
    undefined8 *local_e8;
    int local_d8;
    DWORD local_d4[3];
    undefined8 local_c8;
    undefined8 uStack192;
    undefined8 local_b8;
    undefined4 local_b0;
    undefined4 uStack172;
    undefined4 local_a8;
    undefined4 uStack164;
    undefined8 local_a0;
    undefined8 local_98;
    undefined8 local_90;
    undefined8 local_88;
    undefined8 local_78;
    undefined8 uStack112;
    undefined4 local_68;
    undefined4 uStack100;
    undefined4 local_60;
    undefined4 local_58;
    undefined4 local_54;
    undefined4 local_50;
    undefined4 uStack76;
    undefined4 local_48;
    undefined8 local_44;
    undefined4 local_3c;
    ulonglong local_38;

    piVar4 = DAT_140c636a0;
    local_38 = DAT_140c0f7b0 ^ (ulonglong) auStack280;
    local_d8 = param_2;
    if (*(int *) (param_1 + 0x40) < 1) {
        if (param_2 < 1) {
            if (0 < *(int *) (param_1 + 0x40)) goto LAB_14029dd9c;
        } else {
            GetWindowThreadProcessId(*(HWND * )(param_1 + 0x30), local_d4);
            DVar5 = GetCurrentProcessId();
            if (local_d4[0] == DVar5) {
                lVar2 = *(longlong * )(param_1 + 0x10);
                local_44._0_4_ = 0;
                if (*(longlong * )(lVar2 + 0x1888) == 0) {
                    local_78 = *(undefined8 * )(param_1 + 0x18);
                    uStack100 = 0;
                    uStack112 = CONCAT44(1, *(undefined4 * )(param_1 + 0x28));
                    local_68 = *(undefined4 * )(&DAT_140ae7f90 + (longlong) * (int *) (param_1 + 0x20) * 4);
                    local_60 = 0;
                    if ((*(byte * )(param_1 + 0x38) & 2) != 0) {
                        iVar6 = (**(code * *)(**(longlong * *)(lVar2 + 0x18b0) + 0x48))
                                (*(longlong * *)(lVar2 + 0x18b0), &local_78, &local_78,
                                 *(undefined8 * )(lVar2 + 0x18c0));
                        if (iVar6 < 0) goto LAB_14029de8d;
                        *(undefined4 * )(param_1 + 0x18) = (undefined4) local_78;
                        *(undefined4 * )(param_1 + 0x1c) = local_78._4_4_;
                        uVar8 = FUN_14027a000();
                        *(undefined4 * )(param_1 + 0x20) = uVar8;
                    }
                    local_b8 = CONCAT44(uStack100, local_68);
                    local_98 = *(undefined8 * )(param_1 + 0x30);
                    local_c8 = local_78;
                    uStack192 = uStack112;
                    uStack172 = 1;
                    local_a8 = 0;
                    uStack164 = 0x20;
                    local_a0 = 2;
                    local_90 = 1;
                    local_88 = 2;
                    plVar3 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x1878);
                    local_b0 = local_60;
                    iVar6 = (**(code * *)(*plVar3 + 0x50))
                            (plVar3, *(undefined8 * )(*(longlong * )(param_1 + 0x10) + 0x18c0),
                             &local_c8, param_1 + 0x58);
                    if (iVar6 < 0) goto LAB_14029de8d;
                    if ((*(uint * )(param_1 + 0x38) & 4) == 0) {
                        *(undefined8 * )(param_1 + 0x94) = 0;
                    } else {
                        if ((*(uint * )(param_1 + 0x38) & 2) == 0) {
                            iVar6 = FUN_1402649d0(*(undefined4 * )(&DAT_00001860 + *(longlong * )(param_1 + 0x10)));
                            if (iVar6 != 0) {
                                *(undefined4 * )(param_1 + 0x94) = 0;
                                *(undefined4 * )(param_1 + 0x98) = 1;
                                goto LAB_14029dd0e;
                            }
                        }
                        *(undefined8 * )(param_1 + 0x94) = 1;
                    }
                } else {
                    local_50 = *(undefined4 * )(param_1 + 0x28);
                    uVar8 = *(undefined4 * )(param_1 + 0x18);
                    uVar10 = *(undefined4 * )(param_1 + 0x1c);
                    uVar11 = *(undefined4 * )(&DAT_140ae7f90 + (longlong) * (int *) (param_1 + 0x20) * 4);
                    uStack76 = 1;
                    local_44 = 0;
                    local_3c = 0;
                    local_44._4_4_ = (undefined4) local_44;
                    local_58 = uVar8;
                    local_54 = uVar10;
                    local_48 = uVar11;
                    if ((*(byte * )(param_1 + 0x38) & 2) != 0) {
                        iVar6 = (**(code * *)(**(longlong * *)(lVar2 + 0x18b8) + 0xa0))
                                (*(longlong * *)(lVar2 + 0x18b8), &local_58, &local_58,
                                 *(undefined8 * )(lVar2 + 0x18c0));
                        uVar11 = local_48;
                        uVar10 = local_54;
                        uVar8 = local_58;
                        if (iVar6 < 0) goto LAB_14029de8d;
                        *(undefined4 * )(param_1 + 0x18) = local_58;
                        *(undefined4 * )(param_1 + 0x1c) = local_54;
                        uVar7 = FUN_14027a000(local_48);
                        *(undefined4 * )(param_1 + 0x20) = uVar7;
                    }
                    FUN_1407e4830(&local_c8, 0, 0x30);
                    local_78 = CONCAT44(uStack76, local_50);
                    local_c8 = CONCAT44(uVar10, uVar8);
                    uStack192 = CONCAT44(local_3c, uVar11);
                    local_b8 = 1;
                    local_b0 = 0x20;
                    local_a8 = 0;
                    local_a0 = 0x200000000;
                    uStack112 = CONCAT44(local_44._4_4_, (undefined4) local_44);
                    local_68 = 1;
                    if (((*(byte * )(param_1 + 0x38) & 2) == 0) &&
                        (*(int *) (*(longlong * )(param_1 + 0x10) + 0xe4) == 0)) {
                        iVar6 = FUN_140193c40();
                        if (iVar6 != 0) {
                            uStack172 = 3;
                            uStack164 = 3;
                            plVar3 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x1888);
                            local_e8 = (undefined8 * )(param_1 + 0x60);
                            local_f8 = &local_78;
                            local_f0 = 0;
                            iVar6 = (**(code * *)(*plVar3 + 0x78))
                                    (plVar3, *(undefined8 * )(*(longlong * )(param_1 + 0x10) + 0x18c0),
                                     *(undefined8 * )(param_1 + 0x30), &local_c8);
                            if (-1 < iVar6) {
                                if ((*(byte * )(param_1 + 0x38) & 4) == 0) {
                                    *(undefined8 * )(param_1 + 0x94) = 0;
                                } else {
                                    *(undefined8 * )(param_1 + 0x94) = 1;
                                }
                            }
                        }
                    }
                    puVar1 = (undefined8 * )(param_1 + 0x60);
                    if (*(longlong * )(param_1 + 0x60) == 0) {
                        uStack172 = 2;
                        uStack164 = 0;
                        plVar3 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x1888);
                        local_f8 = &local_78;
                        local_f0 = 0;
                        local_e8 = puVar1;
                        iVar6 = (**(code * *)(*plVar3 + 0x78))
                                (plVar3, *(undefined8 * )(*(longlong * )(param_1 + 0x10) + 0x18c0),
                                 *(undefined8 * )(param_1 + 0x30), &local_c8);
                        if (iVar6 < 0) goto LAB_14029de8d;
                        if ((*(uint * )(param_1 + 0x38) & 4) != 0) {
                            if ((*(uint * )(param_1 + 0x38) & 2) == 0) {
                                iVar6 = FUN_1402649d0(*(undefined4 * )(&DAT_00001860 + *(longlong * )(param_1 + 0x10))
                                );
                                if (iVar6 != 0) {
                                    *(undefined4 * )(param_1 + 0x94) = 0;
                                    *(undefined4 * )(param_1 + 0x98) = 1;
                                    FUN_140282570(param_1 + 0x58, *puVar1);
                                    param_2 = local_d8;
                                    goto LAB_14029dd0e;
                                }
                            }
                            *(undefined8 * )(param_1 + 0x94) = 1;
                            FUN_140282570(param_1 + 0x58, *puVar1);
                            param_2 = local_d8;
                            goto LAB_14029dd0e;
                        }
                        *(undefined8 * )(param_1 + 0x94) = 0;
                    }
                    FUN_140282570(param_1 + 0x58, *puVar1);
                    param_2 = local_d8;
                }
                LAB_14029dd0e:
                plVar3 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x1878);
                iVar6 = (**(code * *)(*plVar3 + 0x40))(plVar3, *(undefined8 * )(param_1 + 0x30), 7);
                if (iVar6 < 0) goto LAB_14029de8d;
                if ((*(byte * )(param_1 + 0x38) & 2) != 0) {
                    DAT_140c657c8 = param_1;
                    LVar9 = GetWindowLongPtrW(*(HWND * )(param_1 + 0x30), -4);
                    *(LONG_PTR * )(param_1 + 0x50) = LVar9;
                    SetWindowLongPtrW(*(HWND * )(param_1 + 0x30), -4, (LONG_PTR) & DAT_14029e2e0);
                    *(undefined4 * )(param_1 + 0x48) = 0;
                    FUN_14029e170(param_1, 1);
                }
            }
            iVar6 = FUN_14029dec0(param_1);
            if (iVar6 < 0) goto LAB_14029de8d;
            *(undefined4 * )(param_1 + 0x44) = 1;
        }
    } else {
        LAB_14029dd9c:
        if (param_2 < 1) {
            if ((*(longlong * )(param_1 + 0x58) != 0) && ((*(byte * )(param_1 + 0x38) & 2) != 0)) {
                if (*(int *) (param_1 + 0x48) != 0) {
                    *DAT_140c636a0 = *DAT_140c636a0 + 1;
                    *(undefined4 * )(param_1 + 0x48) = 0;
                    ShowWindow(*(HWND * )(param_1 + 0x30), 7);
                    (**(code * *)(**(longlong * *)(param_1 + 0x58) + 0x50))(*(longlong * *)(param_1 + 0x58), 0, 0);
                    FUN_14029d680(param_1);
                    *piVar4 = *piVar4 + -1;
                }
                param_2 = local_d8;
                SetWindowLongPtrW(*(HWND * )(param_1 + 0x30), -4, *(LONG_PTR * )(param_1 + 0x50));
                DAT_140c657c8 = 0;
            }
            if (*(longlong * *)(param_1 + 0x58) != (longlong *) 0x0) {
                (**(code * *)(**(longlong * *)(param_1 + 0x58) + 0x10))();
                *(undefined8 * )(param_1 + 0x58) = 0;
            }
            if (*(longlong * *)(param_1 + 0x60) != (longlong *) 0x0) {
                (**(code * *)(**(longlong * *)(param_1 + 0x60) + 0x10))();
                *(undefined8 * )(param_1 + 0x60) = 0;
            }
            if (*(longlong * *)(param_1 + 0x68) != (longlong *) 0x0) {
                (**(code * *)(**(longlong * *)(param_1 + 0x68) + 0x10))();
                *(undefined8 * )(param_1 + 0x68) = 0;
            }
            if (*(longlong * *)(param_1 + 0x70) != (longlong *) 0x0) {
                (**(code * *)(**(longlong * *)(param_1 + 0x70) + 0x10))();
                *(undefined8 * )(param_1 + 0x70) = 0;
            }
            if (*(longlong * *)(param_1 + 0x80) != (longlong *) 0x0) {
                (**(code * *)(**(longlong * *)(param_1 + 0x80) + 0x10))();
                *(undefined8 * )(param_1 + 0x80) = 0;
            }
            if (*(longlong * *)(param_1 + 0x88) != (longlong *) 0x0) {
                (**(code * *)(**(longlong * *)(param_1 + 0x88) + 0x10))();
                *(undefined8 * )(param_1 + 0x88) = 0;
            }
            *(undefined4 * )(param_1 + 0x44) = 0;
        }
    }
    *(int *) (param_1 + 0x40) = param_2;
    LAB_14029de8d:
    FUN_1407db4f0(local_38 ^ (ulonglong) auStack280);
    return;
}


void FUN_14029dec0(longlong param_1) {
    longlong *plVar1;
    int iVar2;
    undefined auStack152[32];
    undefined8 local_78;
    undefined4 local_70;
    undefined8 local_6c;
    undefined4 local_64;
    undefined4 local_58;
    undefined4 local_54;
    undefined4 local_50;
    undefined4 local_4c;
    undefined4 local_48;
    undefined8 local_44;
    undefined4 local_3c;
    undefined8 local_38;
    undefined4 local_30;
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong) auStack152;
    if (*(longlong * )(param_1 + 0x68) == 0) {
        plVar1 = *(longlong * *)(param_1 + 0x58);
        if (plVar1 != (longlong *) 0x0) {
            iVar2 = (**(code * *)(*plVar1 + 0x48))(plVar1, 0, &DAT_140b61c60);
            if (iVar2 < 0) goto LAB_14029e13c;
            (**(code * *)(**(longlong * *)(param_1 + 0x68) + 0x50))
                    (*(longlong * *)(param_1 + 0x68), &local_58);
            local_70 = local_48;
            local_6c = 4;
            plVar1 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x18c0);
            iVar2 = (**(code * *)(*plVar1 + 0x48))
                    (plVar1, *(undefined8 * )(param_1 + 0x68), &local_70, param_1 + 0x70);
            if (-1 < iVar2) goto LAB_14029e052;
            local_78 = 0x141de48e8;
            LAB_14029df75:
            FUN_1401a3130(0xe, 2, &local_78, iVar2);
            goto LAB_14029e13c;
        }
        local_58 = *(undefined4 * )(param_1 + 0x18);
        local_50 = 1;
        local_4c = 1;
        local_54 = *(undefined4 * )(param_1 + 0x1c);
        local_44 = 1;
        local_3c = 0;
        local_48 = *(undefined4 * )(&DAT_140ae7f90 + (longlong) * (int *) (param_1 + 0x20) * 4);
        local_38 = 0x20;
        local_30 = 0;
        plVar1 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x18c0);
        iVar2 = (**(code * *)(*plVar1 + 0x28))(plVar1, &local_58, 0, param_1 + 0x68);
        if (-1 < iVar2) {
            local_6c = 4;
            local_70 = local_48;
            plVar1 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x18c0);
            iVar2 = (**(code * *)(*plVar1 + 0x48))
                    (plVar1, *(undefined8 * )(param_1 + 0x68), &local_70, param_1 + 0x70);
            if (iVar2 < 0) {
                local_78 = 0x141de54b0;
                goto LAB_14029df75;
            }
            goto LAB_14029e052;
        }
        local_78 = 0x141de47e8;
        LAB_14029dff6:
        FUN_1401a3130(0xe, 2, &local_78, iVar2);
    } else {
        LAB_14029e052:
        if ((*(longlong * )(param_1 + 0x80) == 0) && (*(int *) (param_1 + 0x24) < 0x1b)) {
            local_58 = *(undefined4 * )(param_1 + 0x18);
            local_50 = 1;
            local_4c = 1;
            local_54 = *(undefined4 * )(param_1 + 0x1c);
            local_44 = 1;
            local_48 = *(undefined4 * )(&DAT_140ae7f90 + (longlong) * (int *) (param_1 + 0x24) * 4);
            local_3c = 0;
            local_38 = 0x40;
            local_30 = 0;
            plVar1 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x18c0);
            iVar2 = (**(code * *)(*plVar1 + 0x28))(plVar1, &local_58, 0, param_1 + 0x80);
            if (iVar2 < 0) {
                local_78 = 0x141de5478;
                goto LAB_14029dff6;
            }
            local_6c = 3;
            local_70 = local_48;
            local_64 = 0;
            plVar1 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x18c0);
            iVar2 = (**(code * *)(*plVar1 + 0x50))
                    (plVar1, *(undefined8 * )(param_1 + 0x80), &local_70, param_1 + 0x88);
            if (iVar2 < 0) {
                local_78 = 0x141de5248;
                goto LAB_14029df75;
            }
        }
        *(int *) (param_1 + 0x78) = *(int *) (*(longlong * )(param_1 + 0x10) + 0xf0) + -1;
        *(int *) (param_1 + 0x90) = *(int *) (*(longlong * )(param_1 + 0x10) + 0xf0) + -1;
    }
    LAB_14029e13c:
    FUN_1407db4f0(local_28 ^ (ulonglong) auStack152);
    return;
}


void FUN_14029e170(longlong param_1, int param_2) {
    longlong *plVar1;
    int *piVar2;
    undefined8 uVar3;
    undefined auStackY184[32];
    undefined local_78[64];
    int local_38;
    int local_34;
    ulonglong local_18;

    piVar2 = DAT_140c636a0;
    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStackY184;
    if (*(int *) (param_1 + 0x48) != param_2) {
        *DAT_140c636a0 = *DAT_140c636a0 + 1;
        *(int *) (param_1 + 0x48) = param_2;
        if (param_2 == 0) {
            ShowWindow(*(HWND * )(param_1 + 0x30), 7);
            uVar3 = 0;
        } else {
            plVar1 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x18b0);
            (**(code * *)(*plVar1 + 0x38))(plVar1, local_78);
            SetWindowPos(*(HWND * )(param_1 + 0x30), (HWND) 0xffffffffffffffff, local_38, local_34,
                         *(int *) (param_1 + 0x18), *(int *) (param_1 + 0x1c), 0x40);
            uVar3 = *(undefined8 * )(*(longlong * )(param_1 + 0x10) + 0x18b0);
        }
        (**(code * *)(**(longlong * *)(param_1 + 0x58) + 0x50))
                (*(longlong * *)(param_1 + 0x58), param_2 != 0, uVar3);
        FUN_14029d680(param_1);
        *piVar2 = *piVar2 + -1;
    }
    FUN_1407db4f0(local_18 ^ (ulonglong) auStackY184);
    return;
}


void FUN_14029e260(longlong param_1) {
    longlong *plVar1;
    int iVar2;

    plVar1 = *(longlong * *)(param_1 + 0x58);
    if (plVar1 != (longlong *) 0x0) {
        iVar2 = (**(code * *)(*plVar1 + 0x40))(plVar1, *(undefined4 * )(param_1 + 0x94), 0);
        if (iVar2 < 0) {
            *(undefined4 * )(param_1 + 0x44) = 0;
            *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 0x186c) = 1;
        } else {
            *(uint * )(param_1 + 0x44) = (uint)(iVar2 != 0x87a0001);
        }
        if ((*(int *) (param_1 + 0x44) != 0) && (*(int *) (param_1 + 0x98) != 0)) {
            // WARNING: Could not recover jumptable at 0x00014029e2c7. Too many branches
            // WARNING: Treating indirect jump as call
            (**(code * *)(**(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x18b0) + 0x50))();
            return;
        }
    }
    return;
}


int FUN_14029e390(longlong param_1) {
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *) (param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_14029cf70();
            FUN_14018b900(param_1, 0);
        }
        iVar2 = 0;
    }
    return iVar2;
}


void FUN_14029e3d0(longlong param_1) {
    longlong *plVar1;
    int iVar2;
    undefined auStack104[32];
    WINDOWPLACEMENT local_48;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack104;
    if (*(int *) (param_1 + 0x44) != 0) {
        FUN_1407db4f0(local_18 ^ (ulonglong) auStack104);
        return;
    }
    if (*(HWND * )(param_1 + 0x30) != (HWND) 0x0) {
        local_48.length = 0x2c;
        GetWindowPlacement(*(HWND * )(param_1 + 0x30), &local_48);
        if ((local_48.showCmd - 1 & 0xfffffffd) != 0) {
            FUN_1407db4f0(local_18 ^ (ulonglong) auStack104);
            return;
        }
    }
    plVar1 = *(longlong * *)(param_1 + 0x58);
    if (plVar1 != (longlong *) 0x0) {
        iVar2 = (**(code * *)(*plVar1 + 0x40))(plVar1, 0, 1);
        if (iVar2 < 0) {
            *(undefined4 * )(param_1 + 0x44) = 0;
            *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 0x186c) = 1;
        } else {
            *(uint * )(param_1 + 0x44) = (uint)(iVar2 != 0x87a0001);
        }
    }
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack104);
    return;
}


void FUN_14029e4a0(undefined8 *param_1) {
    ulonglong *puVar1;
    longlong lVar2;
    ulonglong uVar3;
    DWORD DVar4;
    HANDLE hObject;
    ulonglong uVar5;
    int *piVar6;

    lVar2 = param_1[2];
    *param_1 = &PTR_LAB_140b61ca0;
    DVar4 = GetCurrentThreadId();
    uVar5 = 0;
    if (*(DWORD * )(lVar2 + 0x18) == DVar4) {
        *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(lVar2 + 0x20);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
            if (uVar3 == 0) {
                *(DWORD * )(lVar2 + 0x18) = DVar4;
                goto LAB_14029e50a;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < 0x400);
        FUN_14019fb60(lVar2 + 0x18, DVar4);
    }
    LAB_14029e50a:
    if (param_1[9] != 0) {
        piVar6 = (int *) (param_1[2] + 0x154 + (longlong) * (int *) ((longlong) param_1 + 0x1c) * 0x30);
        LOCK();
        *piVar6 = *piVar6 + -1;
        LOCK();
        piVar6[1] = piVar6[1] - *(int *) (param_1 + 3);
        LOCK();
        piVar6[4] = piVar6[4] + 1;
        LOCK();
        piVar6[5] = piVar6[5] + *(int *) (param_1 + 3);
        if ((undefined8 *) param_1[9] != (undefined8 *) 0x0) {
            *(undefined8 *) param_1[9] = param_1[10];
        }
        if (param_1[10] != 0) {
            *(undefined8 * )(param_1[10] + 0x48) = param_1[9];
        }
        param_1[9] = 0;
        param_1[10] = 0;
    }
    if (0 < *(int *) (param_1 + 6)) {
        if ((longlong *) param_1[4] != (longlong *) 0x0) {
            (**(code * *)(*(longlong *) param_1[4] + 0x10))();
            param_1[4] = 0;
        }
        if ((longlong *) param_1[5] != (longlong *) 0x0) {
            (**(code * *)(*(longlong *) param_1[5] + 0x10))();
            param_1[5] = 0;
        }
        *(undefined4 * )(param_1 + 8) = 0;
    }
    *(undefined4 * )(param_1 + 6) = 0;
    if (*(ulonglong * )(lVar2 + 0x20) < 2) {
        *(undefined4 * )(lVar2 + 0x18) = 0;
        *(undefined8 * )(lVar2 + 0x20) = 0;
        if (*(longlong * )(lVar2 + 0x28) != 0) {
            if (*(longlong * )(lVar2 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar2 + 0x30);
                uVar5 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar5 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar5 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar2 + 0x30));
        }
    } else {
        *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + -1;
    }
    if ((undefined8 *) param_1[9] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[9] = param_1[10];
    }
    if (param_1[10] != 0) {
        *(undefined8 * )(param_1[10] + 0x48) = param_1[9];
    }
    param_1[10] = 0;
    param_1[9] = 0;
    return;
}


ulonglong FUN_14029e630(longlong param_1, undefined4 param_2, undefined4 param_3) {
    longlong *plVar1;
    longlong lVar2;
    ulonglong uVar3;
    DWORD DVar4;
    uint uVar5;
    HANDLE hObject;
    ulonglong uVar6;
    int *piVar7;
    longlong *plVar8;
    DWORD *pDVar9;
    ulonglong *puVar10;
    ulonglong uVar11;

    lVar2 = *(longlong * )(param_1 + 0x10);
    *(undefined4 * )(param_1 + 0x18) = param_2;
    pDVar9 = (DWORD * )(lVar2 + 0x18);
    *(undefined4 * )(param_1 + 0x1c) = param_3;
    DVar4 = GetCurrentThreadId();
    uVar11 = 0;
    puVar10 = (ulonglong * )(lVar2 + 0x20);
    uVar6 = uVar11;
    if (*pDVar9 == DVar4) {
        *puVar10 = *puVar10 + 1;
    } else {
        do {
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 ^ (ulonglong)(uVar3 == 0) * (*puVar10 ^ 1);
            if (uVar3 == 0) {
                *pDVar9 = DVar4;
                goto LAB_14029e6b0;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(pDVar9, DVar4);
    }
    LAB_14029e6b0:
    uVar5 = FUN_14029e7a0(param_1, 2);
    uVar6 = (ulonglong) uVar5;
    if (-1 < (int) uVar5) {
        piVar7 = (int *) (*(longlong * )(param_1 + 0x10) + 0x154 +
                          (longlong) * (int *) (param_1 + 0x1c) * 0x30);
        LOCK();
        *piVar7 = *piVar7 + 1;
        LOCK();
        piVar7[1] = piVar7[1] + *(int *) (param_1 + 0x18);
        LOCK();
        piVar7[2] = piVar7[2] + 1;
        LOCK();
        piVar7[3] = piVar7[3] + *(int *) (param_1 + 0x18);
        plVar8 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x1ab8);
        uVar6 = uVar11;
        if (*(longlong * )(param_1 + 0x48) == 0) {
            *(longlong * *)(param_1 + 0x48) = plVar8;
            plVar1 = (longlong * )(param_1 + 0x50);
            *plVar1 = *plVar8;
            *plVar8 = param_1;
            if (*plVar1 != 0) {
                *(longlong * *)(*plVar1 + 0x48) = plVar1;
            }
        }
    }
    if (*puVar10 < 2) {
        *pDVar9 = 0;
        *puVar10 = 0;
        if (*(longlong * )(lVar2 + 0x28) != 0) {
            if (*(longlong * )(lVar2 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar10 = (ulonglong * )(lVar2 + 0x30);
                uVar11 = *puVar10;
                *puVar10 = *puVar10 ^ (ulonglong)(uVar11 == 0) * (*puVar10 ^ (ulonglong) hObject);
                if (uVar11 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar2 + 0x30));
        }
    } else {
        *puVar10 = *puVar10 - 1;
    }
    return uVar6;
}


void FUN_14029e7a0(longlong param_1, int param_2) {
    longlong lVar1;
    longlong *plVar2;
    int iVar3;
    undefined auStack88[32];
    undefined8 local_38;
    undefined4 local_30;
    undefined4 local_2c;
    undefined4 local_28;
    undefined4 local_24;
    undefined8 local_20;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack88;
    if (*(int *) (param_1 + 0x30) < 1) {
        if (param_2 < 1) {
            if (0 < *(int *) (param_1 + 0x30)) goto LAB_14029e864;
        } else {
            local_30 = *(undefined4 * )(param_1 + 0x18);
            local_28 = 1;
            lVar1 = (longlong) * (int *) (param_1 + 0x1c) * 4;
            local_20 = 0;
            local_2c = *(undefined4 * )(&DAT_140ae7e90 + lVar1);
            local_24 = *(undefined4 * )(&DAT_140ae7ea0 + lVar1);
            plVar2 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x18c0);
            iVar3 = (**(code * *)(*plVar2 + 0x18))(plVar2, &local_30, 0, param_1 + 0x20);
            if (iVar3 < 0) {
                local_38 = 0x141de54c8;
                FUN_1401a3130(0xe, 2, &local_38, iVar3);
                goto LAB_14029e899;
            }
        }
    } else {
        LAB_14029e864:
        if (param_2 < 1) {
            if (*(longlong * *)(param_1 + 0x20) != (longlong *) 0x0) {
                (**(code * *)(**(longlong * *)(param_1 + 0x20) + 0x10))();
                *(undefined8 * )(param_1 + 0x20) = 0;
            }
            if (*(longlong * *)(param_1 + 0x28) != (longlong *) 0x0) {
                (**(code * *)(**(longlong * *)(param_1 + 0x28) + 0x10))();
                *(undefined8 * )(param_1 + 0x28) = 0;
            }
            *(undefined4 * )(param_1 + 0x40) = 0;
        }
    }
    *(int *) (param_1 + 0x30) = param_2;
    LAB_14029e899:
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack88);
    return;
}


int FUN_14029e8c0(longlong param_1) {
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *) (param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_14029e4a0();
            FUN_14018b900(param_1, 0);
        }
        iVar2 = 0;
    }
    return iVar2;
}


void FUN_14029f150(longlong param_1) {
    ulonglong *puVar1;
    longlong lVar2;
    ulonglong uVar3;
    longlong *plVar4;
    DWORD DVar5;
    HANDLE hObject;
    ulonglong uVar6;
    DWORD *pDVar7;

    if (*(longlong * )(param_1 + 0x28) != 0) {
        lVar2 = *(longlong * )(param_1 + 0x10);
        pDVar7 = (DWORD * )(lVar2 + 0x18e0);
        DVar5 = GetCurrentThreadId();
        uVar6 = 0;
        if (*pDVar7 == DVar5) {
            *(longlong * )(lVar2 + 0x18e8) = *(longlong * )(lVar2 + 0x18e8) + 1;
        } else {
            do {
                LOCK();
                puVar1 = (ulonglong * )(lVar2 + 0x18e8);
                uVar3 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
                if (uVar3 == 0) {
                    *pDVar7 = DVar5;
                    goto LAB_14029f1c8;
                }
                uVar6 = uVar6 + 1;
            } while (uVar6 < 0x400);
            FUN_14019fb60(pDVar7, DVar5);
        }
        LAB_14029f1c8:
        plVar4 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x18d0);
        (**(code * *)(*plVar4 + 0x78))(plVar4, *(undefined8 * )(param_1 + 0x28), 0);
        if ((*(int *) (&DAT_140ae7e90 + (longlong) * (int *) (param_1 + 0x1c) * 4) == 0) &&
            ((*(byte * )(param_1 + 0x3c) & 2) != 0)) {
            plVar4 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x18d0);
            if (*(int *) (param_1 + 0x38) == *(int *) (param_1 + 0x18)) {
                (**(code * *)(*plVar4 + 0x178))
                        (plVar4, *(undefined8 * )(param_1 + 0x20), *(undefined8 * )(param_1 + 0x28));
            } else {
                (**(code * *)(*plVar4 + 0x170))
                        (plVar4, *(undefined8 * )(param_1 + 0x20), 0, *(undefined4 * )(param_1 + 0x34), 0, 0,
                         *(undefined8 * )(param_1 + 0x28), 0, 0);
            }
        }
        if (*(ulonglong * )(lVar2 + 0x18e8) < 2) {
            *pDVar7 = 0;
            *(undefined8 * )(lVar2 + 0x18e8) = 0;
            if (*(longlong * )(lVar2 + 0x18f0) != 0) {
                if (*(longlong * )(lVar2 + 0x18f8) == 0) {
                    hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                    LOCK();
                    puVar1 = (ulonglong * )(lVar2 + 0x18f8);
                    uVar6 = *puVar1;
                    *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ (ulonglong) hObject);
                    if (uVar6 != 0) {
                        CloseHandle(hObject);
                    }
                }
                SetEvent(*(HANDLE * )(lVar2 + 0x18f8));
            }
        } else {
            *(longlong * )(lVar2 + 0x18e8) = *(longlong * )(lVar2 + 0x18e8) + -1;
        }
        if (*(longlong * *)(param_1 + 0x28) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x28) + 0x10))();
            *(undefined8 * )(param_1 + 0x28) = 0;
        }
    }
    return;
}


void FUN_14029f2d0(undefined8 *param_1) {
    ulonglong *puVar1;
    longlong lVar2;
    ulonglong uVar3;
    DWORD DVar4;
    HANDLE hObject;
    ulonglong uVar5;
    int *piVar6;

    lVar2 = param_1[2];
    *param_1 = &PTR_LAB_140b61cf0;
    DVar4 = GetCurrentThreadId();
    uVar5 = 0;
    if (*(DWORD * )(lVar2 + 0x18) == DVar4) {
        *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(lVar2 + 0x20);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
            if (uVar3 == 0) {
                *(DWORD * )(lVar2 + 0x18) = DVar4;
                goto LAB_14029f33a;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < 0x400);
        FUN_14019fb60(lVar2 + 0x18, DVar4);
    }
    LAB_14029f33a:
    if (param_1[10] != 0) {
        piVar6 = (int *) (param_1[2] + 0x214 + (longlong) * (int *) (param_1 + 4) * 0x30);
        LOCK();
        *piVar6 = *piVar6 + -1;
        LOCK();
        piVar6[1] = piVar6[1] - *(int *) (param_1 + 3);
        LOCK();
        piVar6[4] = piVar6[4] + 1;
        LOCK();
        piVar6[5] = piVar6[5] + *(int *) (param_1 + 3);
        if ((undefined8 *) param_1[10] != (undefined8 *) 0x0) {
            *(undefined8 *) param_1[10] = param_1[0xb];
        }
        if (param_1[0xb] != 0) {
            *(undefined8 * )(param_1[0xb] + 0x50) = param_1[10];
        }
        param_1[10] = 0;
        param_1[0xb] = 0;
    }
    if (0 < *(int *) ((longlong) param_1 + 0x24)) {
        if ((longlong *) param_1[5] != (longlong *) 0x0) {
            (**(code * *)(*(longlong *) param_1[5] + 0x10))();
            param_1[5] = 0;
        }
        if ((longlong *) param_1[6] != (longlong *) 0x0) {
            (**(code * *)(*(longlong *) param_1[6] + 0x10))();
            param_1[6] = 0;
        }
        *(undefined4 * )((longlong) param_1 + 0x44) = 0;
    }
    *(undefined4 * )((longlong) param_1 + 0x24) = 0;
    if (*(ulonglong * )(lVar2 + 0x20) < 2) {
        *(undefined4 * )(lVar2 + 0x18) = 0;
        *(undefined8 * )(lVar2 + 0x20) = 0;
        if (*(longlong * )(lVar2 + 0x28) != 0) {
            if (*(longlong * )(lVar2 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar2 + 0x30);
                uVar5 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar5 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar5 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar2 + 0x30));
        }
    } else {
        *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + -1;
    }
    if ((undefined8 *) param_1[10] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[10] = param_1[0xb];
    }
    if (param_1[0xb] != 0) {
        *(undefined8 * )(param_1[0xb] + 0x50) = param_1[10];
    }
    param_1[0xb] = 0;
    param_1[10] = 0;
    return;
}


ulonglong FUN_14029f460(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4) {
    longlong *plVar1;
    longlong lVar2;
    ulonglong uVar3;
    DWORD DVar4;
    uint uVar5;
    HANDLE hObject;
    ulonglong uVar6;
    int *piVar7;
    longlong *plVar8;
    DWORD *pDVar9;
    ulonglong *puVar10;
    ulonglong uVar11;

    lVar2 = *(longlong * )(param_1 + 0x10);
    *(undefined4 * )(param_1 + 0x18) = param_2;
    pDVar9 = (DWORD * )(lVar2 + 0x18);
    *(undefined4 * )(param_1 + 0x1c) = param_3;
    *(undefined4 * )(param_1 + 0x20) = param_4;
    DVar4 = GetCurrentThreadId();
    uVar11 = 0;
    puVar10 = (ulonglong * )(lVar2 + 0x20);
    uVar6 = uVar11;
    if (*pDVar9 == DVar4) {
        *puVar10 = *puVar10 + 1;
    } else {
        do {
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 ^ (ulonglong)(uVar3 == 0) * (*puVar10 ^ 1);
            if (uVar3 == 0) {
                *pDVar9 = DVar4;
                goto LAB_14029f4e4;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(pDVar9, DVar4);
    }
    LAB_14029f4e4:
    uVar5 = FUN_14029f5d0(param_1, 2);
    uVar6 = (ulonglong) uVar5;
    if (-1 < (int) uVar5) {
        piVar7 = (int *) (*(longlong * )(param_1 + 0x10) + 0x214 +
                          (longlong) * (int *) (param_1 + 0x20) * 0x30);
        LOCK();
        *piVar7 = *piVar7 + 1;
        LOCK();
        piVar7[1] = piVar7[1] + *(int *) (param_1 + 0x18);
        LOCK();
        piVar7[2] = piVar7[2] + 1;
        LOCK();
        piVar7[3] = piVar7[3] + *(int *) (param_1 + 0x18);
        plVar8 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x1ac0);
        uVar6 = uVar11;
        if (*(longlong * )(param_1 + 0x50) == 0) {
            *(longlong * *)(param_1 + 0x50) = plVar8;
            plVar1 = (longlong * )(param_1 + 0x58);
            *plVar1 = *plVar8;
            *plVar8 = param_1;
            if (*plVar1 != 0) {
                *(longlong * *)(*plVar1 + 0x50) = plVar1;
            }
        }
    }
    if (*puVar10 < 2) {
        *pDVar9 = 0;
        *puVar10 = 0;
        if (*(longlong * )(lVar2 + 0x28) != 0) {
            if (*(longlong * )(lVar2 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar10 = (ulonglong * )(lVar2 + 0x30);
                uVar11 = *puVar10;
                *puVar10 = *puVar10 ^ (ulonglong)(uVar11 == 0) * (*puVar10 ^ (ulonglong) hObject);
                if (uVar11 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar2 + 0x30));
        }
    } else {
        *puVar10 = *puVar10 - 1;
    }
    return uVar6;
}


void FUN_14029f5d0(longlong param_1, int param_2) {
    longlong lVar1;
    longlong *plVar2;
    int iVar3;
    undefined auStack88[32];
    undefined8 local_38;
    undefined4 local_30;
    undefined4 local_2c;
    undefined4 local_28;
    undefined4 local_24;
    undefined8 local_20;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack88;
    if (*(int *) (param_1 + 0x24) < 1) {
        if (param_2 < 1) {
            if (0 < *(int *) (param_1 + 0x24)) goto LAB_14029f694;
        } else {
            local_30 = *(undefined4 * )(param_1 + 0x18);
            local_28 = 2;
            lVar1 = (longlong) * (int *) (param_1 + 0x20) * 4;
            local_20 = 0;
            local_2c = *(undefined4 * )(&DAT_140ae7e90 + lVar1);
            local_24 = *(undefined4 * )(&DAT_140ae7ea0 + lVar1);
            plVar2 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x18c0);
            iVar3 = (**(code * *)(*plVar2 + 0x18))(plVar2, &local_30, 0, param_1 + 0x28);
            if (iVar3 < 0) {
                local_38 = 0x141de5568;
                FUN_1401a3130(0xe, 2, &local_38, iVar3);
                goto LAB_14029f6c9;
            }
        }
    } else {
        LAB_14029f694:
        if (param_2 < 1) {
            if (*(longlong * *)(param_1 + 0x28) != (longlong *) 0x0) {
                (**(code * *)(**(longlong * *)(param_1 + 0x28) + 0x10))();
                *(undefined8 * )(param_1 + 0x28) = 0;
            }
            if (*(longlong * *)(param_1 + 0x30) != (longlong *) 0x0) {
                (**(code * *)(**(longlong * *)(param_1 + 0x30) + 0x10))();
                *(undefined8 * )(param_1 + 0x30) = 0;
            }
            *(undefined4 * )(param_1 + 0x44) = 0;
        }
    }
    *(int *) (param_1 + 0x24) = param_2;
    LAB_14029f6c9:
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack88);
    return;
}


int FUN_14029f6f0(longlong param_1) {
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *) (param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_14029f2d0();
            FUN_14018b900(param_1, 0);
        }
        iVar2 = 0;
    }
    return iVar2;
}


void FUN_14029ff90(longlong param_1) {
    ulonglong *puVar1;
    longlong lVar2;
    ulonglong uVar3;
    longlong *plVar4;
    DWORD DVar5;
    HANDLE hObject;
    ulonglong uVar6;
    DWORD *pDVar7;

    if (*(longlong * )(param_1 + 0x30) != 0) {
        lVar2 = *(longlong * )(param_1 + 0x10);
        pDVar7 = (DWORD * )(lVar2 + 0x18e0);
        DVar5 = GetCurrentThreadId();
        uVar6 = 0;
        if (*pDVar7 == DVar5) {
            *(longlong * )(lVar2 + 0x18e8) = *(longlong * )(lVar2 + 0x18e8) + 1;
        } else {
            do {
                LOCK();
                puVar1 = (ulonglong * )(lVar2 + 0x18e8);
                uVar3 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
                if (uVar3 == 0) {
                    *pDVar7 = DVar5;
                    goto LAB_1402a0008;
                }
                uVar6 = uVar6 + 1;
            } while (uVar6 < 0x400);
            FUN_14019fb60(pDVar7, DVar5);
        }
        LAB_1402a0008:
        plVar4 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x18d0);
        (**(code * *)(*plVar4 + 0x78))(plVar4, *(undefined8 * )(param_1 + 0x30), 0);
        if ((*(int *) (&DAT_140ae7e90 + (longlong) * (int *) (param_1 + 0x20) * 4) == 0) &&
            ((*(byte * )(param_1 + 0x40) & 2) != 0)) {
            plVar4 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x18d0);
            if (*(int *) (param_1 + 0x3c) == *(int *) (param_1 + 0x18)) {
                (**(code * *)(*plVar4 + 0x178))
                        (plVar4, *(undefined8 * )(param_1 + 0x28), *(undefined8 * )(param_1 + 0x30));
            } else {
                (**(code * *)(*plVar4 + 0x170))
                        (plVar4, *(undefined8 * )(param_1 + 0x28), 0, *(undefined4 * )(param_1 + 0x38), 0, 0,
                         *(undefined8 * )(param_1 + 0x30), 0, 0);
            }
        }
        if (*(longlong * *)(param_1 + 0x30) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x30) + 0x10))();
            *(undefined8 * )(param_1 + 0x30) = 0;
        }
        if (1 < *(ulonglong * )(lVar2 + 0x18e8)) {
            *(longlong * )(lVar2 + 0x18e8) = *(longlong * )(lVar2 + 0x18e8) + -1;
            return;
        }
        *pDVar7 = 0;
        *(undefined8 * )(lVar2 + 0x18e8) = 0;
        if (*(longlong * )(lVar2 + 0x18f0) != 0) {
            if (*(longlong * )(lVar2 + 0x18f8) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar2 + 0x18f8);
                uVar6 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar6 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar2 + 0x18f8));
        }
    }
    return;
}


undefined8 *FUN_1402a0110(undefined8 *param_1, longlong param_2) {
    int iVar1;

    *param_1 = &PTR_LAB_140b61d40;
    param_1[0x11] = 0;
    param_1[0x10] = 0;
    param_1[0x13] = 0;
    param_1[0x12] = 0;
    param_1[0x15] = 0;
    param_1[0x14] = 0;
    param_1[0x16] = 0;
    param_1[0x19] = 0;
    param_1[0x18] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x1e] = 0;
    *(undefined4 * )(param_1 + 0x1f) = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    *(undefined4 * )(param_1 + 1) = 1;
    param_1[2] = param_2;
    param_1[9] = 0;
    *(undefined4 * )(param_1 + 10) = 0;
    *(undefined4 * )(param_1 + 0xb) = 0;
    *(undefined4 * )((longlong) param_1 + 0x5c) = 0x8000000a;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *(undefined4 * )(param_1 + 0x17) = 0;
    param_1[0x1a] = 0;
    *(undefined4 * )(param_1 + 0x1b) = 0;
    iVar1 = *(int *) (param_2 + 0xf0);
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    *(int *) ((longlong) param_1 + 0xdc) = iVar1 + -1;
    return param_1;
}


void FUN_1402a0210(undefined8 *param_1) {
    longlong lVar1;
    ulonglong *puVar2;
    int iVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong **ppuVar6;
    undefined8 local_res8;
    undefined **local_58;
    undefined8 local_50;
    LPVOID local_48;
    undefined **local_38;
    undefined8 local_30;
    LPVOID local_28;
    undefined8 local_20;

    *param_1 = &PTR_LAB_140b61d40;
    if ((longlong *) param_1[0x1d] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x1d] + 8))();
        param_1[0x1d] = 0;
    }
    FUN_14018b900(param_1[0x1c]);
    if (param_1[0x24] != 0) {
        if (param_1[9] != 0) {
            lVar1 = param_1[2];
            local_38 = (undefined **)
                    CONCAT44(*(undefined4 * )((longlong) param_1 + 0x34), *(undefined4 * )(param_1 + 5));
            local_30 = param_1[7];
            local_20 = param_1[9];
            local_28 = (LPVOID) CONCAT44(*(undefined4 * )(param_1 + 10), *(undefined4 * )(param_1 + 8));
            uVar4 = (**(code * *)(lVar1 + 0x1b30))(&local_38);
            uVar5 = uVar4 % *(ulonglong * )(lVar1 + 0x1b20);
            ppuVar6 = (ulonglong * *)(*(longlong * )(lVar1 + 0x1b28) + uVar5 * 8);
            puVar2 = *(ulonglong * *)(*(longlong * )(lVar1 + 0x1b28) + uVar5 * 8);
            while (puVar2 != (ulonglong *) 0x0) {
                if ((uVar4 == **ppuVar6) &&
                    (iVar3 = (**(code * *)(lVar1 + 0x1b38))(&local_38, *ppuVar6 + 2), iVar3 != 0)) {
                    puVar2 = *ppuVar6;
                    *ppuVar6 = (ulonglong *) puVar2[1];
                    FUN_14018b900(puVar2, 0);
                    *(longlong * )(lVar1 + 0x1b18) = *(longlong * )(lVar1 + 0x1b18) + -1;
                    goto LAB_1402a03b9;
                }
                ppuVar6 = (ulonglong * *)(*ppuVar6 + 1);
                puVar2 = *ppuVar6;
            }
            local_50 = 0;
            local_58 = &PTR_LAB_140b5e648;
            local_48 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_58);
            local_38 = local_58;
            local_30 = local_50;
            local_res8 = 0x141de59b0;
            local_28 = local_48;
            iVar3 = FUN_1401971e0(&DAT_140c8a4ac, 0xe, &local_res8, param_1[9], &local_38);
            local_58 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720, local_48);
            if (iVar3 != 0) {
                DebugBreak();
            }
        }
        LAB_1402a03b9:
        if ((undefined8 *) param_1[0x24] != (undefined8 *) 0x0) {
            *(undefined8 *) param_1[0x24] = param_1[0x25];
        }
        if (param_1[0x25] != 0) {
            *(undefined8 * )(param_1[0x25] + 0x120) = param_1[0x24];
        }
        param_1[0x24] = 0;
        param_1[0x25] = 0;
    }
    FUN_1402a0970(param_1, 0);
    FUN_14018b900(param_1[9], 0);
    if ((undefined8 *) param_1[0x26] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x26] = param_1[0x27];
    }
    if (param_1[0x27] != 0) {
        *(undefined8 * )(param_1[0x27] + 0x130) = param_1[0x26];
    }
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    if ((undefined8 *) param_1[0x24] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x24] = param_1[0x25];
    }
    if (param_1[0x25] != 0) {
        *(undefined8 * )(param_1[0x25] + 0x120) = param_1[0x24];
    }
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    if ((undefined8 *) param_1[0x22] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x22] = param_1[0x23];
    }
    if (param_1[0x23] != 0) {
        *(undefined8 * )(param_1[0x23] + 0x20) = param_1[0x22];
    }
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    if ((undefined8 *) param_1[0x20] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x20] = param_1[0x21];
    }
    if (param_1[0x21] != 0) {
        *(undefined8 * )(param_1[0x21] + 0x10) = param_1[0x20];
    }
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    lVar1 = param_1[0x18];
    if (lVar1 != 0) {
        (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    if ((longlong *) param_1[0x16] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x16] + 8))();
    }
    FUN_1402a3430(param_1 + 0x14);
    FUN_1402a3170(param_1 + 0x12);
    FUN_1402a2f90(param_1 + 0x10);
    return;
}


undefined8
FUN_1402a0570(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4,
              undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
              undefined4 param_9) {
    longlong *plVar1;
    undefined auVar2[16];
    undefined4 uVar3;
    undefined8 uVar4;
    longlong *plVar5;

    *(undefined4 * )(param_1 + 0x30) = param_5;
    *(undefined4 * )(param_1 + 0x1c) = param_2;
    *(undefined4 * )(param_1 + 0x34) = param_6;
    *(undefined4 * )(param_1 + 0x38) = param_7;
    *(undefined4 * )(param_1 + 0x18) = 0;
    *(undefined4 * )(param_1 + 0x3c) = param_8;
    *(undefined8 * )(param_1 + 0x48) = 0;
    *(undefined4 * )(param_1 + 0x20) = param_3;
    *(undefined4 * )(param_1 + 0x40) = param_9;
    *(undefined8 * )(param_1 + 0x24) = 1;
    *(undefined4 * )(param_1 + 0x2c) = param_4;
    uVar4 = FUN_140263970(param_1 + 0x18, *(longlong * )(param_1 + 0x10) + 0x88);
    if (-1 < (int) uVar4) {
        uVar3 = FUN_140263e70();
        *(undefined4 * )(param_1 + 0xd8) = uVar3;
        if ((*(int *) (param_1 + 0x34) - 3U & 0xfffffffd) == 0) {
            auVar2 = ZEXT816(4) * ZEXT416(*(uint * )(param_1 + 0x2c));
            uVar4 = SUB168(auVar2, 0);
            if (SUB168(auVar2 >> 0x40, 0) != 0) {
                uVar4 = 0xffffffffffffffff;
            }
            uVar4 = FUN_14018b280(uVar4, 0);
            *(undefined8 * )(param_1 + 0xe0) = uVar4;
        }
        uVar4 = FUN_1402a0970(param_1, 2);
        if (-1 < (int) uVar4) {
            plVar5 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x1ac8);
            if (*(longlong * )(param_1 + 0x120) == 0) {
                *(longlong * *)(param_1 + 0x120) = plVar5;
                plVar1 = (longlong * )(param_1 + 0x128);
                *plVar1 = *plVar5;
                *plVar5 = param_1;
                if (*plVar1 != 0) {
                    *(longlong * *)(*plVar1 + 0x120) = plVar1;
                }
            }
            uVar4 = 0;
        }
    }
    return uVar4;
}



// WARNING: Could not reconcile some variable overlaps

undefined8
FUN_1402a0680(ulonglong param_1, undefined8 param_2, undefined4 param_3, uint param_4,
              undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8) {
    ulonglong **ppuVar1;
    longlong lVar2;
    int iVar3;
    undefined8 uVar4;
    ulonglong uVar5;
    ulonglong *puVar6;
    ulonglong *puVar7;
    longlong *plVar8;
    undefined **local_a8;
    wchar_t *local_a0;
    LPVOID local_98;
    ulonglong local_90;
    undefined **local_88;
    undefined8 local_80;
    LPVOID local_78;
    undefined8 local_70;
    undefined **local_68;
    undefined8 local_60;
    LPVOID local_58;
    code *local_50;
    undefined8 local_48;
    undefined8 local_40;
    undefined **local_38;
    undefined8 local_30;
    LPVOID local_28;

    puVar7 = (ulonglong *) 0x0;
    if (param_4 < 3) {
        *(undefined8 * )(param_1 + 0x18) = 0;
        *(undefined8 * )(param_1 + 0x20) = 0;
        *(undefined8 * )(param_1 + 0x28) = 0;
        *(undefined8 * )(param_1 + 0x30) = 0;
        *(undefined8 * )(param_1 + 0x38) = 0;
        *(undefined8 * )(param_1 + 0x40) = 0;
        *(undefined8 * )(param_1 + 0x48) = 0;
        *(undefined8 * )(param_1 + 0x50) = 0;
        *(undefined4 * )(param_1 + 0x38) = param_5;
        *(undefined4 * )(param_1 + 0x18) = 0;
        *(undefined4 * )(param_1 + 0x3c) = param_6;
        *(undefined4 * )(param_1 + 0x28) = param_3;
        *(undefined4 * )(param_1 + 0x40) = param_7;
        *(uint * )(param_1 + 0x34) = param_4;
        uVar4 = FUN_14018e9c0(param_2);
        *(undefined8 * )(param_1 + 0x48) = uVar4;
        *(undefined4 * )(param_1 + 0x50) = param_8;
        uVar4 = FUN_1402a0970(param_1);
        if (-1 < (int) uVar4) {
            lVar2 = *(longlong * )(param_1 + 0x10);
            plVar8 = (longlong * )(lVar2 + 0x1b18);
            local_a8 = (undefined **)
                    CONCAT44(*(undefined4 * )(param_1 + 0x34), *(undefined4 * )(param_1 + 0x28));
            local_a0 = *(wchar_t **) (param_1 + 0x38);
            local_90 = *(ulonglong * )(param_1 + 0x48);
            local_98 = (LPVOID) CONCAT44(*(undefined4 * )(param_1 + 0x50), *(undefined4 * )(param_1 + 0x40));
            if (*plVar8 == *(longlong * )(lVar2 + 0x1b20)) {
                FUN_1400290d0(plVar8);
            }
            uVar5 = (**(code * *)(lVar2 + 0x1b30))(&local_a8);
            ppuVar1 = (ulonglong * *)
                    (*(longlong * )(lVar2 + 0x1b28) + (uVar5 % *(ulonglong * )(lVar2 + 0x1b20)) * 8);
            puVar6 = (ulonglong *) FUN_14018b280(0x38);
            if (puVar6 != (ulonglong *) 0x0) {
                puVar7 = *ppuVar1;
                *puVar6 = uVar5;
                puVar6[1] = (ulonglong) puVar7;
                puVar6[2] = (ulonglong) local_a8;
                puVar6[3] = (ulonglong) local_a0;
                puVar6[4] = (ulonglong) local_98;
                puVar6[6] = param_1;
                puVar6[5] = local_90;
                puVar7 = puVar6;
            }
            *ppuVar1 = puVar7;
            *plVar8 = *plVar8 + 1;
            puVar7 = (ulonglong * )(*(longlong * )(param_1 + 0x10) + 0x1ac8);
            if (*(longlong * )(param_1 + 0x120) == 0) {
                *(ulonglong * *)(param_1 + 0x120) = puVar7;
                puVar6 = (ulonglong * )(param_1 + 0x128);
                *puVar6 = *puVar7;
                *puVar7 = param_1;
                if (*puVar6 != 0) {
                    *(ulonglong * *)(*puVar6 + 0x120) = puVar6;
                }
            }
            local_68 = *(undefined * **)(param_1 + 0x48);
            local_60 = (wchar_t *) ((ulonglong) local_60._4_4_ << 0x20);
            local_48 = 0;
            local_40 = 0;
            local_50 = FUN_1402a10f0;
            local_58 = (LPVOID) param_1;
            FUN_1401b6bf0(puVar7, &local_68, param_1 + 0xe8);
            uVar4 = 0;
        }
    } else {
        local_80 = 0;
        local_88 = &PTR_LAB_140b5e648;
        local_78 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_88);
        local_38 = local_88;
        local_30 = local_80;
        local_a8 = &PTR_LAB_140b5e648;
        local_a0 = L"FileName";
        local_28 = local_78;
        local_98 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_a8);
        local_60 = local_a0;
        local_a8 = &PTR_LAB_140b5e638;
        local_68 = &PTR_LAB_140b5e638;
        local_70 = 0x141de5910;
        local_58 = local_98;
        local_90 = param_2;
        local_50 = (code *) param_2;
        iVar3 = FUN_1401971e0(&DAT_140c8a4a8, 0xe, &local_70, &local_68, &local_38);
        local_a8 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_98);
        local_88 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_78);
        if (iVar3 != 0) {
            DebugBreak();
        }
        uVar4 = 0x80004005;
    }
    return uVar4;
}


void FUN_1402a0970(longlong param_1, int param_2) {
    int iVar1;
    int *piVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    uint uVar5;
    longlong lVar6;
    IMAGE_DOS_HEADER *pIVar7;
    undefined auStack152[32];
    undefined4 local_78;
    undefined4 local_70;
    undefined4 local_68;
    longlong local_60;
    undefined8 local_58;
    undefined4 local_50;
    undefined4 local_4c;
    undefined4 local_48;
    undefined4 local_44;
    undefined4 local_40;
    undefined8 local_3c;
    undefined4 local_34;
    undefined4 local_30;
    undefined4 local_2c;
    uint local_28;
    ulonglong local_20;

    local_20 = DAT_140c0f7b0 ^ (ulonglong) auStack152;
    if (*(int *) (param_1 + 0x58) < 1) {
        if (param_2 < 1) {
            if (0 < *(int *) (param_1 + 0x58)) goto LAB_1402a0b5a;
        } else if (*(longlong * )(param_1 + 0x48) == 0) {
            uVar3 = 0;
            if (*(int *) (param_1 + 0x30) != 0x18) {
                local_50 = *(undefined4 * )(param_1 + 0x1c);
                pIVar7 = &IMAGE_DOS_HEADER_140000000;
                local_4c = *(undefined4 * )(param_1 + 0x20);
                lVar6 = (longlong) * (int *) (param_1 + 0x34) * 4;
                local_48 = *(undefined4 * )(param_1 + 0x2c);
                local_44 = 1;
                local_40 = (&DAT_140ae8120)[*(int *) (param_1 + 0x30)];
                local_3c = 1;
                local_34 = *(undefined4 * )(&DAT_140ae7eb0 + lVar6);
                local_30 = FUN_14027a160();
                local_2c = *(undefined4 * )(pIVar7[0x15cfd].e_program + lVar6 + 0x20);
                local_28 = *(uint * )(param_1 + 0x3c) >> 7 & 1;
                iVar1 = (**(code * *)(**(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x18c0) + 0x28))();
                if (iVar1 < 0) {
                    local_58 = 0x141de58e0;
                    FUN_1401a3130(0xe, 2, &local_58, iVar1);
                    *(int *) (param_1 + 0x5c) = iVar1;
                    goto LAB_1402a0c6d;
                }
                if (*(int *) (param_1 + 0x34) - 4U < 2) {
                    FUN_140279fa0();
                }
            }
            if ((*(longlong * )(param_1 + 0xe0) != 0) && (*(int *) (param_1 + 0x2c) != 0)) {
                do {
                    uVar5 = (int) uVar3 + 1;
                    *(int *) (*(longlong * )(param_1 + 0xe0) + uVar3 * 4) =
                            *(int *) (*(longlong * )(param_1 + 0x10) + 0xf0) + -1;
                    uVar3 = (ulonglong) uVar5;
                } while (uVar5 < *(uint * )(param_1 + 0x2c));
            }
            piVar2 = (int *) (*(longlong * )(param_1 + 0x10) + 0x2d4 +
                              (longlong) * (int *) (param_1 + 0x34) * 0x30);
            LOCK();
            *piVar2 = *piVar2 + 1;
            LOCK();
            piVar2[1] = piVar2[1] + *(int *) (param_1 + 0xd8);
            LOCK();
            piVar2[2] = piVar2[2] + 1;
            LOCK();
            piVar2[3] = piVar2[3] + *(int *) (param_1 + 0xd8);
            *(undefined4 * )(param_1 + 0x5c) = 0;
        } else {
            local_60 = param_1 + 0x60;
            local_68 = *(undefined4 * )(param_1 + 0x50);
            local_70 = *(undefined4 * )(param_1 + 0x3c);
            local_78 = *(undefined4 * )(param_1 + 0x34);
            iVar1 = FUN_140279ed0(*(undefined8 * )(param_1 + 0x10), 0, *(longlong * )(param_1 + 0x48),
                                  *(undefined4 * )(param_1 + 0x28));
            if (iVar1 < 0) {
                *(int *) (param_1 + 0x5c) = iVar1;
                goto LAB_1402a0c6d;
            }
        }
    } else {
        LAB_1402a0b5a:
        if (param_2 < 1) {
            if (*(longlong * )(param_1 + 0x70) != 0) {
                piVar2 = (int *) (*(longlong * )(param_1 + 0x10) + 0x2d4 +
                                  (longlong) * (int *) (param_1 + 0x34) * 0x30);
                LOCK();
                *piVar2 = *piVar2 + -1;
                LOCK();
                piVar2[1] = piVar2[1] - *(int *) (param_1 + 0xd8);
                LOCK();
                piVar2[4] = piVar2[4] + 1;
                LOCK();
                piVar2[5] = piVar2[5] + *(int *) (param_1 + 0xd8);
            }
            FUN_1402a3110(param_1 + 0x80);
            FUN_1402a3390(param_1 + 0x90);
            FUN_140275940(param_1 + 0xa0);
            uVar3 = 0;
            if (*(longlong * *)(param_1 + 0xb0) != (longlong *) 0x0) {
                (**(code * *)(**(longlong * *)(param_1 + 0xb0) + 8))();
                *(undefined8 * )(param_1 + 0xb0) = 0;
            }
            if (*(longlong * *)(param_1 + 0x70) != (longlong *) 0x0) {
                (**(code * *)(**(longlong * *)(param_1 + 0x70) + 0x10))();
                *(undefined8 * )(param_1 + 0x70) = 0;
            }
            if (*(longlong * *)(param_1 + 0x78) != (longlong *) 0x0) {
                (**(code * *)(**(longlong * *)(param_1 + 0x78) + 0x10))();
                *(undefined8 * )(param_1 + 0x78) = 0;
            }
            if (*(longlong * *)(param_1 + 0x60) != (longlong *) 0x0) {
                (**(code * *)(**(longlong * *)(param_1 + 0x60) + 8))();
                *(undefined8 * )(param_1 + 0x60) = 0;
            }
            *(undefined4 * )(param_1 + 0x5c) = 0x8000000a;
            *(undefined4 * )(param_1 + 0xb8) = 0;
            *(undefined8 * )(param_1 + 0xd0) = 0;
            if (*(longlong * )(param_1 + 200) != 0) {
                do {
                    lVar6 = *(longlong * )(param_1 + 0xc0);
                    *(undefined4 * )(lVar6 + uVar3 * 0x18) = 0;
                    *(undefined8 * )(lVar6 + 8 + uVar3 * 0x18) = 0;
                    uVar4 = (ulonglong)((int) uVar3 + 1);
                    *(undefined8 * )(lVar6 + 0x10 + uVar3 * 0x18) = 0;
                    uVar3 = uVar4;
                } while (uVar4 < *(ulonglong * )(param_1 + 200));
            }
        }
    }
    *(int *) (param_1 + 0x58) = param_2;
    LAB_1402a0c6d:
    FUN_1407db4f0(local_20 ^ (ulonglong) auStack152);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1402a0ca0(longlong param_1) {
    short sVar1;
    longlong *plVar2;
    short *psVar3;
    longlong lVar4;
    int iVar5;
    uint uVar6;
    undefined4 uVar7;
    ulonglong uVar8;
    int *piVar9;
    short *psVar10;
    ulonglong uVar11;
    undefined auStack440[32];
    undefined8 local_198;
    undefined4 *local_190;
    undefined ***local_188;
    undefined4 local_180;
    undefined4 local_178;
    undefined **local_168;
    undefined8 local_160;
    LPVOID local_158;
    undefined **local_150;
    wchar_t *local_148;
    LPVOID local_140;
    undefined8 local_138;
    undefined **local_130;
    undefined8 uStack296;
    undefined8 local_120;
    uint uStack280;
    undefined4 uStack276;
    undefined8 local_110;
    undefined8 local_108;
    undefined8 local_100;
    undefined **local_f8;
    undefined8 local_f0;
    LPVOID local_e8;
    undefined **local_d8;
    wchar_t *local_d0;
    LPVOID local_c8;
    undefined8 local_c0;
    undefined4 local_b8[4];
    undefined4 local_a8[4];
    undefined4 local_98[4];
    undefined4 local_88;
    undefined4 uStack132;
    undefined4 uStack128;
    undefined4 uStack124;
    undefined4 local_78;
    undefined4 uStack116;
    uint uStack112;
    undefined4 uStack108;
    undefined4 local_68;
    undefined4 local_64;
    undefined4 local_60;
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong) auStack440;
    plVar2 = *(longlong * *)(param_1 + 0x60);
    local_98[0] = 0xffffffff;
    (**(code * *)(*plVar2 + 0x20))(plVar2, local_98);
    uVar6 = *(uint * )(plVar2 + 6);
    if (-1 < (int) uVar6) {
        plVar2 = *(longlong * *)(param_1 + 0x60);
        local_b8[0] = 0xffffffff;
        (**(code * *)(*plVar2 + 0x20))(plVar2, local_b8);
        if (plVar2[8] == 0) {
            uVar6 = 0x80004005;
        } else {
            *(longlong * )(param_1 + 0x70) = plVar2[8];
            (**(code * *)(*(longlong *) plVar2[8] + 8))();
            (**(code * *)(**(longlong * *)(param_1 + 0x70) + 0x50))
                    (*(longlong * *)(param_1 + 0x70), &local_68);
            plVar2 = *(longlong * *)(param_1 + 0x60);
            *(undefined4 * )(param_1 + 0x1c) = local_68;
            *(undefined4 * )(param_1 + 0x24) = 1;
            *(undefined4 * )(param_1 + 0x20) = local_64;
            *(undefined4 * )(param_1 + 0x2c) = local_60;
            local_a8[0] = 0xffffffff;
            (**(code * *)(*plVar2 + 0x20))(plVar2, local_a8);
            *(undefined4 * )(param_1 + 0x30) = *(undefined4 * )(plVar2 + 0xb);
            uVar6 = FUN_140263970(param_1 + 0x18, *(longlong * )(param_1 + 0x10) + 0x88);
            if (-1 < (int) uVar6) {
                uVar7 = FUN_140263e70(param_1 + 0x18);
                *(undefined4 * )(param_1 + 0xd8) = uVar7;
                piVar9 = (int *) (*(longlong * )(param_1 + 0x10) + 0x2d4 +
                                  (longlong) * (int *) (param_1 + 0x34) * 0x30);
                LOCK();
                *piVar9 = *piVar9 + 1;
                LOCK();
                piVar9[1] = piVar9[1] + *(int *) (param_1 + 0xd8);
                LOCK();
                piVar9[2] = piVar9[2] + 1;
                LOCK();
                piVar9[3] = piVar9[3] + *(int *) (param_1 + 0xd8);
                LOCK();
                piVar9[8] = piVar9[8] + 1;
                LOCK();
                piVar9[9] = piVar9[9] + *(int *) (param_1 + 0xd8);
                *(undefined4 * )(param_1 + 0x68) = *(undefined4 * )(*(longlong * )(param_1 + 0x60) + 0x60);
                uVar7 = *(undefined4 * )(*(longlong * )(param_1 + 0x60) + 100);
                *(undefined4 * )(param_1 + 0x5c) = 0;
                *(undefined4 * )(param_1 + 0x6c) = uVar7;
                *(undefined4 * )(param_1 + 0xb8) = 1;
                goto LAB_1402a0fb1;
            }
        }
    }
    psVar3 = *(short **) (param_1 + 0x48);
    if (psVar3 != (short *) 0x0) {
        uVar8 = 0;
        sVar1 = *psVar3;
        while (sVar1 != 0) {
            uVar8 = uVar8 + 1;
            sVar1 = psVar3[uVar8];
        }
        uVar11 = 0;
        do {
            uVar11 = uVar11 + 1;
        } while (*(short *) (&DAT_140aeb148 + uVar11 * 2) != 0);
        if (uVar11 <= uVar8) {
            for (psVar10 = psVar3; psVar10 <= psVar3 + (uVar8 - uVar11); psVar10 = psVar10 + 1) {
                iVar5 = FUN_14018e3e0(psVar10, &DAT_140aeb148, uVar11);
                if (iVar5 == 0) {
                    if (psVar10 != (short *) 0x0) {
                        local_198 = (undefined * **)
                                ((ulonglong) local_198 & 0xffffffff00000000 | (ulonglong) uVar6);
                        local_110 = 0x141de58a0;
                        FUN_1401a3130(0xe, 0, &local_110, psVar3);
                        goto LAB_1402a0f7e;
                    }
                    break;
                }
            }
        }
    }
    lVar4 = *(longlong * )(param_1 + 0x60);
    local_100 = 0x141de5870;
    local_178 = *(undefined4 * )(lVar4 + 0x14);
    local_180 = *(undefined4 * )(lVar4 + 0x10);
    local_188 = (undefined * **)
            ((ulonglong) local_188 & 0xffffffff00000000 | (ulonglong) * (uint * )(lVar4 + 0xc));
    local_190 = (undefined4 * )
            ((ulonglong) local_190 & 0xffffffff00000000 | (ulonglong) * (uint * )(lVar4 + 0x30));
    local_198 = (undefined ***) CONCAT44(local_198._4_4_, *(undefined4 * )(lVar4 + 0x18));
    FUN_1401a3130(0xe, 0, &local_100, uVar6);
    local_160 = 0;
    local_168 = &PTR_LAB_140b5e648;
    local_158 = TlsGetValue(DAT_140c63720);
    TlsSetValue(DAT_140c63720, &local_168);
    local_f8 = local_168;
    local_f0 = local_160;
    local_130 = &PTR_LAB_140b5e648;
    uStack296 = L"Result";
    local_e8 = local_158;
    local_120 = TlsGetValue(DAT_140c63720);
    TlsSetValue(DAT_140c63720, &local_130);
    local_138 = *(undefined8 * )(param_1 + 0x48);
    local_150 = &PTR_LAB_140b5e648;
    local_130 = &PTR_LAB_140b5e640;
    local_78 = (undefined4) local_120;
    uStack116 = local_120._4_4_;
    uStack108 = uStack276;
    local_148 = L"FileName";
    local_88 = 0x40b5e640;
    uStack132 = 1;
    uStack128 = (undefined4) uStack296;
    uStack124 = uStack296._4_4_;
    uStack280 = uVar6;
    uStack112 = uVar6;
    local_140 = TlsGetValue(DAT_140c63720);
    TlsSetValue(DAT_140c63720, &local_150);
    local_d0 = local_148;
    local_150 = &PTR_LAB_140b5e638;
    local_108 = 0x141de5c48;
    local_188 = &local_f8;
    local_d8 = &PTR_LAB_140b5e638;
    local_c8 = local_140;
    local_190 = &local_88;
    local_198 = &local_d8;
    local_c0 = local_138;
    iVar5 = FUN_1401971e0(&DAT_140c8a4a4, 0xe, &local_108, *(undefined8 * )(param_1 + 0x48));
    local_150 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720, local_140);
    local_130 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720, local_120);
    local_168 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720, local_158);
    if (iVar5 != 0) {
        DebugBreak();
    }
    LAB_1402a0f7e:
    *(uint * )(param_1 + 0x5c) = uVar6;
    if (*(longlong * *)(param_1 + 0x70) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x70) + 0x10))();
        *(undefined8 * )(param_1 + 0x70) = 0;
    }
    LAB_1402a0fb1:
    FUN_1407db4f0(local_38 ^ (ulonglong) auStack440);
    return;
}


void FUN_1402a10f0(longlong param_1) {
    ulonglong *puVar1;
    longlong lVar2;
    ulonglong uVar3;
    DWORD DVar4;
    int iVar5;
    HANDLE hObject;
    ulonglong uVar6;

    lVar2 = *(longlong * )(param_1 + 0x10);
    DVar4 = GetCurrentThreadId();
    uVar6 = 0;
    if (*(DWORD * )(lVar2 + 0x18) == DVar4) {
        *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(lVar2 + 0x20);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
            if (uVar3 == 0) {
                *(DWORD * )(lVar2 + 0x18) = DVar4;
                goto LAB_1402a1150;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(lVar2 + 0x18, DVar4);
    }
    LAB_1402a1150:
    iVar5 = FUN_1402a0970(param_1, 0);
    if (-1 < iVar5) {
        FUN_1402a0970(param_1, 2);
    }
    if (*(ulonglong * )(lVar2 + 0x20) < 2) {
        *(undefined4 * )(lVar2 + 0x18) = 0;
        *(undefined8 * )(lVar2 + 0x20) = 0;
        if (*(longlong * )(lVar2 + 0x28) != 0) {
            if (*(longlong * )(lVar2 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar2 + 0x30);
                uVar6 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar6 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar2 + 0x30));
        }
        return;
    }
    *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + -1;
    return;
}


undefined8 FUN_1402a11e0(longlong param_1, uint param_2) {
    longlong *plVar1;
    ulonglong uVar2;
    undefined4 local_28;
    undefined4 local_24;
    uint local_20;

    uVar2 = (ulonglong) param_2;
    if (*(longlong * )(param_1 + 0x70) == 0) {
        return 0;
    }
    if (*(ulonglong * )(param_1 + 0xa8) < uVar2 || *(ulonglong * )(param_1 + 0xa8) == uVar2) {
        FUN_140275820(param_1 + 0xa0, param_2 + 1);
    }
    if (*(longlong * )(*(longlong * )(param_1 + 0xa0) + uVar2 * 8) == 0) {
        local_24 = 4;
        local_28 = *(undefined4 * )(&DAT_140ae7f90 + (longlong) * (int *) (param_1 + 0x30) * 4);
        plVar1 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x18c0);
        local_20 = param_2;
        (**(code * *)(*plVar1 + 0x48))
                (plVar1, *(undefined8 * )(param_1 + 0x70), &local_28,
                 *(longlong * )(param_1 + 0xa0) + uVar2 * 8);
    }
    return *(undefined8 * )(*(longlong * )(param_1 + 0xa0) + uVar2 * 8);
}


undefined8 FUN_1402a1290(longlong param_1, uint param_2, int param_3) {
    longlong lVar1;
    longlong *plVar2;
    ulonglong uVar3;
    undefined4 local_28;
    undefined4 local_24;
    uint local_20;
    uint local_1c;

    uVar3 = (ulonglong) param_2;
    if (*(longlong * )(param_1 + 0x70) == 0) {
        return 0;
    }
    if (*(ulonglong * )(param_1 + 0x98) < uVar3 || *(ulonglong * )(param_1 + 0x98) == uVar3) {
        FUN_1402a3210(param_1 + 0x90, param_2 + 1);
    }
    lVar1 = (uVar3 * 2 + (longlong) param_3) * 8;
    if (*(longlong * )(*(longlong * )(param_1 + 0x90) + lVar1) == 0) {
        local_28 = *(undefined4 * )(&DAT_140ae7f90 + (longlong) * (int *) (param_1 + 0x30) * 4);
        local_24 = 3;
        local_20 = (uint)(param_3 == 0);
        plVar2 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x18c0);
        local_1c = param_2;
        (**(code * *)(*plVar2 + 0x50))(plVar2, *(undefined8 * )(param_1 + 0x70), &local_28);
    }
    return *(undefined8 * )(lVar1 + *(longlong * )(param_1 + 0x90));
}


undefined8 FUN_1402a1370(longlong param_1, ulonglong param_2) {
    undefined8 *puVar1;
    longlong *plVar2;
    int iVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    longlong *local_res8;
    undefined8 local_res18;
    undefined **local_68;
    undefined8 local_60;
    LPVOID local_58;
    undefined4 local_50;
    undefined4 local_4c;
    uint local_48;
    undefined4 local_44;
    undefined **local_38;
    undefined8 local_30;
    LPVOID local_28;

    param_2 = param_2 & 0xffffffff;
    if (*(longlong * )(param_1 + 0x70) == 0) {
        return 0;
    }
    local_48 = (uint) param_2;
    if (local_48 < 0x11) {
        if (*(ulonglong * )(param_1 + 0x88) < param_2 || *(ulonglong * )(param_1 + 0x88) == param_2) {
            FUN_1402a2ff0(param_1 + 0x80, local_48 + 1);
        }
        if (*(longlong * )(*(longlong * )(param_1 + 0x80) + param_2 * 8) == 0) {
            local_4c = 4;
            local_44 = 0xffffffff;
            local_res8 = (longlong *) 0x0;
            local_50 = *(undefined4 * )(&DAT_140ae8190 + (longlong) * (int *) (param_1 + 0x30) * 4);
            plVar2 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x18c0);
            iVar3 = (**(code * *)(*plVar2 + 0x38))
                    (plVar2, *(undefined8 * )(param_1 + 0x70), &local_50, &local_res8);
            if ((-1 < iVar3) &&
                (puVar1 = (undefined8 * )(*(longlong * )(param_1 + 0x80) + param_2 * 8),
                        puVar1 != (undefined8 *) 0x0)) {
                puVar5 = (undefined8 *) FUN_14018b280(0x18);
                if (puVar5 == (undefined8 *) 0x0) {
                    puVar5 = (undefined8 *) 0x0;
                } else {
                    *puVar5 = &PTR_LAB_140b55048;
                    *(undefined4 * )(puVar5 + 1) = 1;
                    *puVar5 = &PTR_LAB_140b61188;
                    puVar5[2] = local_res8;
                    if (local_res8 != (longlong *) 0x0) {
                        (**(code * *)(*local_res8 + 8))();
                    }
                }
                *puVar1 = puVar5;
            }
            if (local_res8 != (longlong *) 0x0) {
                (**(code * *)(*local_res8 + 0x10))();
            }
        }
        uVar4 = *(undefined8 * )(*(longlong * )(param_1 + 0x80) + param_2 * 8);
    } else {
        local_60 = 0;
        local_68 = &PTR_LAB_140b5e648;
        local_58 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_68);
        local_38 = local_68;
        local_res18 = 0x141de5c28;
        local_30 = local_60;
        local_28 = local_58;
        iVar3 = FUN_1401971e0(&DAT_140c8a49c, 0xe, &local_res18, param_2, &local_38);
        local_68 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_58);
        if (iVar3 != 0) {
            DebugBreak();
        }
        uVar4 = 0;
    }
    return uVar4;
}


void FUN_1402a1560(longlong param_1) {
    longlong *plVar1;
    undefined4 uVar2;
    longlong *plVar3;
    int iVar4;
    undefined8 *puVar5;
    undefined8 uVar6;
    undefined auVar8[16];
    undefined auVar9[16];
    undefined auStack136[32];
    longlong *local_68[2];
    float local_58;
    float fStack84;
    float fStack80;
    float fStack76;
    undefined4 local_48;
    undefined4 local_44;
    undefined4 local_40;
    undefined8 local_3c;
    undefined4 local_34;
    undefined4 local_30;
    float local_2c;
    float fStack40;
    float fStack36;
    float fStack32;
    undefined4 local_1c;
    undefined4 local_18;
    ulonglong local_10;
    undefined auVar7[12];

    local_10 = DAT_140c0f7b0 ^ (ulonglong) auStack136;
    plVar1 = (longlong * )(param_1 + 0xb0);
    if (*plVar1 != 0) goto LAB_1402a1705;
    if ((&DAT_140ae64c0)[*(int *) (param_1 + 0x30)] == 0) {
        local_48 = *(undefined4 * )(&DAT_140ae7e20 + (longlong) * (int *) (param_1 + 0x38) * 4);
    } else {
        local_48 = *(undefined4 * )(&DAT_140ae7e40 + (longlong) * (int *) (param_1 + 0x38) * 4);
    }
    uVar2 = *(undefined4 * )(param_1 + 0x40);
    uVar6 = CONCAT44(uVar2, uVar2);
    auVar7 = CONCAT48(uVar2, uVar6);
    auVar8 = CONCAT142(SUB1614(CONCAT133(SUB1613(CONCAT124(SUB1612(CONCAT115(SUB1611(CONCAT106(SUB1610
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
                                                                                                                                                                                                                                    (char) ((uint) uVar2
                                                                                                                                                                                                                                            >>
                                                                                                                                                                                                                                            0x18),
                                                                                                                                                                                                                                    SUB1614(CONCAT412(
                                                                                                                                                                                                                                                    uVar2,
                                                                                                                                                                                                                                                    auVar7),
                                                                                                                                                                                                                                            0))
                                                                                                                                                                                                                                    >> 0x68,
                                                                                                                                                                                                                            0),
                                                                                                                                                                                                                     CONCAT112(
                                                                                                                                                                                                                             (char) ((uint) uVar2
                                                                                                                                                                                                                                     >> 0x10),
                                                                                                                                                                                                                             auVar7))
                                                                                                                                                                                                                     >>
                                                                                                                                                                                                                     0x60,
                                                                                                                                                                                                             0),
                                                                                                                                                                                                    auVar7)
                                                                                                                                                                                                    >> 0x58,
                                                                                                                                                                                            0),
                                                                                                                                                                                     CONCAT110(
                                                                                                                                                                                             (char) ((uint) uVar2
                                                                                                                                                                                                     >> 8),
                                                                                                                                                                                             SUB1210(auVar7,
                                                                                                                                                                                                     0)))
                                                                                                                                                                                     >> 0x50,
                                                                                                                                                                             0),
                                                                                                                                                                      SUB1210(auVar7,
                                                                                                                                                                              0))
                                                                                                                                                                      >> 0x48,
                                                                                                                                                              0),
                                                                                                                                                      CONCAT18(
                                                                                                                                                              (char) uVar2,
                                                                                                                                                              uVar6))
                                                                                                                                                      >> 0x40,
                                                                                                                                              0),
                                                                                                                                       uVar6)
                                                                                                                                       >>
                                                                                                                                       0x38,
                                                                                                                               0) &
                                                                                                                SUB169((undefined[16])
                                                                                                                               0xffffffffffffffff
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
                                                                                                                ((uint7) uVar6
                                                                                                                        >> 0x18)
                                                                                                                        << 0x30)
                                                                                                                >> 0x30,
                                                                                                        0),
                                                                                               (int6) uVar6) >> 0x28,
                                                                                     0) &
                                                                             SUB1611((undefined[16]) 0xffff00ffffffffff
                                                                                             >>
                                                                                             0x28, 0),
                                                                             ((uint5) uVar6 >> 0x10) << 0x20) >>
                                                                                                              0x20, 0),
                                                           uVar2) >> 0x18, 0) &
                                         SUB1613((undefined[16]) 0xffffffff00ffffff >> 0x18, 0),
                                         ((uint3) uVar2 >> 8) << 0x10) >> 0x10, 0), (short) uVar2) &
             (undefined[16]) 0xffffffffffff00ff;
    auVar9 = CONCAT124(SUB1612(CONCAT106((unkuint10)
                                                 SUB148(CONCAT68(SUB146(CONCAT410(SUB144(CONCAT212(SUB162(
                                                                                          auVar8 >> 0x30, 0), SUB1612(auVar8, 0)) >> 0x50, 0),
                                                                                  CONCAT28(SUB162(auVar8 >> 0x20, 0),
                                                                                           SUB168(auVar8, 0)
                                                                                  )) >> 0x40, 0), SUB168(auVar8, 0))
                                                                >> 0x30, 0)
                                         & SUB1610((undefined[16]) 0xffffffffffffffff >> 0x30, 0) &
                                         SUB1610((undefined[16]) 0xffffffffffffffff >> 0x30, 0),
                                         (SUB166(auVar8, 0) >> 0x10) << 0x20) >> 0x20, 0),
                       SUB164(auVar8, 0)) & (undefined[16]) 0xffffffff0000ffff;
    local_44 = *(undefined4 * )(&DAT_140ae7e60 + (ulonglong)(*(uint * )(param_1 + 0x3c) & 3) * 4);
    local_3c = 3;
    local_34 = 0x10;
    local_40 = *(undefined4 * )(&DAT_140ae7e60 + (ulonglong)(*(uint * )(param_1 + 0x3c) >> 2 & 3) * 4);
    local_1c = 0;
    local_58 = (float) SUB164(auVar9 >> 0x40, 0) * 0.003921569;
    fStack84 = (float) SUB164(auVar9 >> 0x20, 0) * 0.003921569;
    fStack80 = (float) (SUB164(auVar8, 0) & 0xffff) * 0.003921569;
    fStack76 = (float) SUB164(auVar9 >> 0x60, 0) * 0.003921569;
    local_18 = 0x7f7fffff;
    local_68[0] = (longlong *) 0x0;
    local_30 = 1;
    if ((&DAT_140ae64c0)[*(int *) (param_1 + 0x30)] != 0) {
        local_30 = 4;
    }
    plVar3 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x18c0);
    local_2c = local_58;
    fStack40 = fStack84;
    fStack36 = fStack80;
    fStack32 = fStack76;
    iVar4 = (**(code * *)(*plVar3 + 0xb8))(plVar3, &local_48, local_68);
    if ((-1 < iVar4) && (plVar1 != (longlong *) 0x0)) {
        puVar5 = (undefined8 *) FUN_14018b280(0x18);
        if (puVar5 == (undefined8 *) 0x0) {
            puVar5 = (undefined8 *) 0x0;
        } else {
            *puVar5 = &PTR_LAB_140b55048;
            *(undefined4 * )(puVar5 + 1) = 1;
            *puVar5 = &PTR_LAB_140b61188;
            puVar5[2] = local_68[0];
            if (local_68[0] != (longlong *) 0x0) {
                (**(code * *)(*local_68[0] + 8))();
                *plVar1 = (longlong) puVar5;
                goto LAB_1402a16fa;
            }
        }
        *plVar1 = (longlong) puVar5;
    }
    LAB_1402a16fa:
    if (local_68[0] != (longlong *) 0x0) {
        (**(code * *)(*local_68[0] + 0x10))();
    }
    LAB_1402a1705:
    FUN_1407db4f0(local_10 ^ (ulonglong) auStack136);
    return;
}


undefined8 FUN_1402a1960(longlong param_1) {
    undefined8 uVar1;

    if (*(longlong * *)(param_1 + 0x60) != (longlong *) 0x0) {
        uVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x60) + 0x20))();
        if ((int) uVar1 == 0) {
            return uVar1;
        }
        FUN_1402a0ca0(param_1);
        if (*(longlong * *)(param_1 + 0x60) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x60) + 8))();
            *(undefined8 * )(param_1 + 0x60) = 0;
        }
    }
    return 1;
}


undefined4 FUN_1402a19b0(longlong *param_1) {
    undefined4 local_18[4];

    local_18[0] = 0xffffffff;
    (**(code * *)(*param_1 + 0x20))(param_1, local_18);
    return *(undefined4 * )(param_1 + 0x17);
}


void FUN_1402a19e0(longlong *param_1) {
    undefined4 local_18[4];

    local_18[0] = 0xffffffff;
    (**(code * *)(*param_1 + 0x20))(param_1, local_18);
    *(undefined4 * )(param_1 + 0x17) = 0;
    return;
}


void FUN_1402a2270(longlong param_1, ulonglong param_2) {
    ulonglong *puVar1;
    uint uVar2;
    longlong lVar3;
    ulonglong uVar4;
    longlong *plVar5;
    DWORD DVar6;
    HANDLE hObject;
    ulonglong uVar7;
    DWORD *pDVar8;
    ulonglong uVar9;
    uint uVar10;

    uVar9 = param_2 & 0xffffffff;
    uVar10 = 1 << ((byte) param_2 & 0x1f);
    if ((uVar10 & (*(uint * )(param_1 + 0xd0) | *(uint * )(param_1 + 0xd4))) != 0) {
        if ((uVar10 & *(uint * )(param_1 + 0xd0)) != 0) {
            uVar2 = *(uint * )(*(longlong * )(param_1 + 0xc0) + uVar9 * 0x18);
            if (1 < uVar2) {
                *(uint * )(*(longlong * )(param_1 + 0xc0) + uVar9 * 0x18) = uVar2 - 1;
                return;
            }
        }
        lVar3 = *(longlong * )(param_1 + 0x10);
        pDVar8 = (DWORD * )(lVar3 + 0x18e0);
        DVar6 = GetCurrentThreadId();
        uVar7 = 0;
        if (*pDVar8 == DVar6) {
            *(longlong * )(lVar3 + 0x18e8) = *(longlong * )(lVar3 + 0x18e8) + 1;
        } else {
            do {
                LOCK();
                puVar1 = (ulonglong * )(lVar3 + 0x18e8);
                uVar4 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar4 == 0) * (*puVar1 ^ 1);
                if (uVar4 == 0) {
                    *pDVar8 = DVar6;
                    goto LAB_1402a2334;
                }
                uVar7 = uVar7 + 1;
            } while (uVar7 < 0x400);
            FUN_14019fb60(pDVar8);
        }
        LAB_1402a2334:
        plVar5 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x18d0);
        (**(code * *)(*plVar5 + 0x78))(plVar5, *(undefined8 * )(param_1 + 0x78), uVar9);
        if ((*(uint * )(param_1 + 0xd4) & uVar10) != 0) {
            if (*(longlong * )(param_1 + 0x78) != *(longlong * )(param_1 + 0x70)) {
                plVar5 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x18d0);
                (**(code * *)(*plVar5 + 0x170))
                        (plVar5, *(longlong * )(param_1 + 0x70), uVar9, 0, 0, 0, *(longlong * )(param_1 + 0x78),
                         (int) uVar9, 0);
            }
        }
        if (*(ulonglong * )(lVar3 + 0x18e8) < 2) {
            *pDVar8 = 0;
            *(undefined8 * )(lVar3 + 0x18e8) = 0;
            if (*(longlong * )(lVar3 + 0x18f0) != 0) {
                if (*(longlong * )(lVar3 + 0x18f8) == 0) {
                    hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                    LOCK();
                    puVar1 = (ulonglong * )(lVar3 + 0x18f8);
                    uVar7 = *puVar1;
                    *puVar1 = *puVar1 ^ (ulonglong)(uVar7 == 0) * (*puVar1 ^ (ulonglong) hObject);
                    if (uVar7 != 0) {
                        CloseHandle(hObject);
                    }
                }
                SetEvent(*(HANDLE * )(lVar3 + 0x18f8));
            }
        } else {
            *(longlong * )(lVar3 + 0x18e8) = *(longlong * )(lVar3 + 0x18e8) + -1;
        }
        if ((*(uint * )(param_1 + 0xd0) & uVar10) == 0) {
            *(uint * )(param_1 + 0xd4) = *(uint * )(param_1 + 0xd4) & ~uVar10;
        } else {
            *(undefined4 * )(*(longlong * )(param_1 + 0xc0) + uVar9 * 0x18) = 0;
            *(uint * )(param_1 + 0xd0) = *(uint * )(param_1 + 0xd0) & ~uVar10;
        }
        if (((*(int *) (param_1 + 0xd0) == 0) && (*(int *) (param_1 + 0xd4) == 0)) &&
            (*(longlong * *)(param_1 + 0x78) != (longlong *) 0x0)) {
            (**(code * *)(**(longlong * *)(param_1 + 0x78) + 0x10))();
            *(undefined8 * )(param_1 + 0x78) = 0;
        }
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1402a2460(longlong param_1) {
    ulonglong *puVar1;
    longlong *plVar2;
    ulonglong uVar3;
    int iVar4;
    HANDLE hObject;
    undefined4 *local_res8;
    longlong *local_res10;
    undefined8 local_res18;
    undefined8 local_res20;
    undefined **local_b8;
    undefined8 local_b0;
    LPVOID local_a8;
    undefined **local_a0;
    undefined8 uStack152;
    undefined8 local_90;
    int iStack136;
    undefined4 uStack132;
    undefined4 local_80;
    undefined8 local_7c;
    undefined4 local_74;
    undefined **local_68;
    undefined8 local_60;
    LPVOID local_58;
    undefined4 local_48;
    undefined4 uStack68;
    undefined4 uStack64;
    undefined4 uStack60;
    undefined4 local_38;
    undefined4 uStack52;
    int iStack48;
    undefined4 uStack44;

    if (*(longlong * )(param_1 + 0x70) != 0) {
        if ((*(byte * )(param_1 + 0x3c) & 0x80) == 0) {
            local_b0 = 0;
            local_b8 = &PTR_LAB_140b5e648;
            local_a8 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_b8);
            local_68 = local_b8;
            local_res18 = 0x141de5a20;
            local_58 = local_a8;
            local_60 = local_b0;
            iVar4 = FUN_1401971e0(&DAT_140c8a48c, 0xe, &local_res18, &local_68);
            local_b8 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720, local_a8);
            if (iVar4 != 0) {
                DebugBreak();
            }
        } else {
            local_7c = 4;
            local_74 = 0xffffffff;
            local_res10 = (longlong *) 0x0;
            local_80 = (&DAT_140ae8120)[*(int *) (param_1 + 0x30)];
            plVar2 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x18c0);
            iVar4 = (**(code * *)(*plVar2 + 0x38))
                    (plVar2, *(longlong * )(param_1 + 0x70), &local_80, &local_res10);
            if (iVar4 < 0) {
                local_res20 = 0x141de5a08;
                FUN_1401a3130(0xe, 2, &local_res20, iVar4);
                uStack152 = L"Result";
                local_a0 = &PTR_LAB_140b5e648;
                local_90 = TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720, &local_a0);
                local_a0 = &PTR_LAB_140b5e640;
                local_48 = 0x40b5e640;
                uStack68 = 1;
                uStack64 = (undefined4) uStack152;
                uStack60 = uStack152._4_4_;
                local_38 = (undefined4) local_90;
                uStack52 = local_90._4_4_;
                uStack44 = uStack132;
                iStack136 = iVar4;
                iStack48 = iVar4;
                FUN_1400035b0(0xe, 0, 0, &local_48);
                local_a0 = &PTR_LAB_140b5e648;
                TlsSetValue(DAT_140c63720, (LPVOID) CONCAT44(local_90._4_4_, (undefined4) local_90));
            } else {
                FUN_14003d8f0(&local_res8, *(longlong * )(param_1 + 0x10) + 0x18e0);
                plVar2 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x18d0);
                (**(code * *)(*plVar2 + 0x1b0))(plVar2, local_res10);
                if (*(ulonglong * )(local_res8 + 2) < 2) {
                    *local_res8 = 0;
                    *(undefined8 * )(local_res8 + 2) = 0;
                    if (*(longlong * )(local_res8 + 4) != 0) {
                        if (*(longlong * )(local_res8 + 6) == 0) {
                            hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                            LOCK();
                            puVar1 = (ulonglong * )(local_res8 + 6);
                            uVar3 = *puVar1;
                            *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ (ulonglong) hObject);
                            if (uVar3 != 0) {
                                CloseHandle(hObject);
                            }
                        }
                        SetEvent(*(HANDLE * )(local_res8 + 6));
                    }
                } else {
                    *(longlong * )(local_res8 + 2) = *(longlong * )(local_res8 + 2) + -1;
                }
            }
            if (local_res10 != (longlong *) 0x0) {
                (**(code * *)(*local_res10 + 0x10))();
            }
        }
    }
    return;
}


void FUN_1402a26e0(longlong *param_1, undefined4 param_2, int param_3, undefined ***param_4,
                   undefined4 param_5, undefined4 *param_6) {
    ulonglong *puVar1;
    int *piVar2;
    ulonglong uVar3;
    int iVar4;
    HANDLE hObject;
    longlong lVar5;
    undefined4 *puVar6;
    undefined auStack360[32];
    undefined ***local_148;
    undefined4 local_140;
    undefined4 local_138;
    undefined4 *local_128;
    undefined **local_120;
    undefined8 local_118;
    LPVOID local_110;
    undefined **local_108;
    wchar_t *local_100;
    LPVOID local_f8;
    longlong local_f0;
    undefined **local_e8;
    undefined8 local_e0;
    LPVOID local_d8;
    undefined8 local_d0;
    undefined8 local_c8[2];
    undefined **local_b8;
    undefined8 local_b0;
    LPVOID local_a8;
    undefined **local_98;
    undefined8 local_90;
    LPVOID local_88;
    undefined **local_78;
    wchar_t *local_70;
    LPVOID local_68;
    longlong local_60;
    undefined4 local_58[4];
    undefined4 local_48;
    undefined4 local_44;
    undefined4 local_40;
    undefined4 local_3c;
    undefined4 local_38;
    undefined4 local_34;
    ulonglong local_30;

    local_30 = DAT_140c0f7b0 ^ (ulonglong) auStack360;
    local_58[0] = 0xffffffff;
    (**(code * *)(*param_1 + 0x20))(param_1, local_58);
    if (param_1[0xe] != 0) {
        if (param_1[9] == 0) {
            if (param_3 == *(int *) (param_1 + 6)) {
                FUN_14003d8f0(&local_128, param_1[2] + 0x18e0);
                local_138 = 0;
                if (param_6 == (undefined4 *) 0x0) {
                    puVar6 = (undefined4 *) 0x0;
                } else {
                    local_48 = *param_6;
                    local_40 = 0;
                    local_34 = 1;
                    local_44 = param_6[1];
                    puVar6 = &local_48;
                    local_3c = param_6[2];
                    local_38 = param_6[3];
                }
                local_140 = param_5;
                local_148 = param_4;
                (**(code * *)(**(longlong * *)(param_1[2] + 0x18d0) + 0x180))
                        (*(longlong * *)(param_1[2] + 0x18d0), param_1[0xe], param_2, puVar6);
                if (*(ulonglong * )(local_128 + 2) < 2) {
                    *local_128 = 0;
                    *(undefined8 * )(local_128 + 2) = 0;
                    if (*(longlong * )(local_128 + 4) != 0) {
                        if (*(longlong * )(local_128 + 6) == 0) {
                            hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                            LOCK();
                            puVar1 = (ulonglong * )(local_128 + 6);
                            uVar3 = *puVar1;
                            *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ (ulonglong) hObject);
                            if (uVar3 != 0) {
                                CloseHandle(hObject);
                            }
                        }
                        SetEvent(*(HANDLE * )(local_128 + 6));
                    }
                } else {
                    *(longlong * )(local_128 + 2) = *(longlong * )(local_128 + 2) + -1;
                }
                lVar5 = (longlong) * (int *) ((longlong) param_1 + 0x34) * 0x30 + param_1[2];
                LOCK();
                piVar2 = (int *) (lVar5 + 0x2f4);
                *piVar2 = *piVar2 + 1;
                LOCK();
                piVar2 = (int *) (lVar5 + 0x2f8);
                *piVar2 = *piVar2 + *(int *) (param_1 + 0x1b);
                *(undefined4 * )(param_1 + 0x17) = 1;
            } else {
                local_120 = &PTR_LAB_140b5e648;
                local_118 = 0;
                local_110 = TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720, &local_120);
                local_98 = local_120;
                local_c8[0] = 0x141de5e10;
                local_88 = local_110;
                local_90 = local_118;
                iVar4 = FUN_1401971e0(&DAT_140c8a484, 0xe, local_c8, &local_98);
                local_120 = &PTR_LAB_140b5e648;
                TlsSetValue(DAT_140c63720, local_110);
                if (iVar4 != 0) {
                    DebugBreak();
                }
            }
        } else {
            local_e8 = &PTR_LAB_140b5e648;
            local_e0 = 0;
            local_d8 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_e8);
            local_f0 = param_1[9];
            local_b8 = local_e8;
            local_b0 = local_e0;
            local_108 = &PTR_LAB_140b5e648;
            local_a8 = local_d8;
            local_100 = L"FileName";
            local_f8 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_108);
            local_70 = local_100;
            local_108 = &PTR_LAB_140b5e638;
            local_78 = &PTR_LAB_140b5e638;
            local_d0 = 0x141de5e60;
            local_148 = &local_b8;
            local_68 = local_f8;
            local_60 = local_f0;
            iVar4 = FUN_1401971e0(&DAT_140c8a480, 0xe, &local_d0, &local_78);
            local_108 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720, local_f8);
            local_e8 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720, local_d8);
            if (iVar4 != 0) {
                DebugBreak();
            }
        }
    }
    FUN_1407db4f0(local_30 ^ (ulonglong) auStack360);
    return;
}


int FUN_1402a2e20(longlong *param_1, short *param_2) {
    longlong *plVar1;
    int iVar2;
    int iVar3;
    longlong *local_res10;
    undefined8 local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    if ((param_2 == (short *) 0x0) || (*param_2 == 0)) {
        return -0x7ff8ffa9;
    }
    if (*(int *) ((longlong) param_1 + 0x34) == 1) {
        local_48 = &PTR_LAB_140b5e648;
        local_40 = 0;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_48);
        local_28 = local_48;
        local_res10 = (longlong *) 0x141de5ca0;
        local_18 = local_38;
        local_20 = local_40;
        iVar2 = FUN_1401971e0(&DAT_140c8a478, 0xe, &local_res10, &local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_38);
        if (iVar2 != 0) {
            DebugBreak();
        }
        return -0x7fffbffb;
    }
    local_48 = (undefined **) CONCAT44(local_48._4_4_, 0xffffffff);
    (**(code * *)(*param_1 + 0x20))(param_1, &local_48);
    if (param_1[0xe] != 0) {
        local_res10 = (longlong *) 0x0;
        iVar2 = FUN_140279e20(param_1[2], param_1[0xe], &local_res10);
        plVar1 = local_res10;
        if ((iVar2 < 0) || (iVar2 = FUN_1402b1de0(local_res10, param_2), iVar3 = 0, iVar2 < 0)) {
            iVar3 = iVar2;
        }
        if (plVar1 != (longlong *) 0x0) {
            (**(code * *)(*plVar1 + 8))(plVar1);
        }
        return iVar3;
    }
    return -0x7fffbffb;
}


void FUN_1402a2f90(longlong *param_1) {
    longlong *plVar1;
    longlong lVar2;
    ulonglong uVar3;

    uVar3 = 0;
    if (param_1[1] != 0) {
        do {
            plVar1 = *(longlong * *)(*param_1 + uVar3 * 8);
            if (plVar1 != (longlong *) 0x0) {
                (**(code * *)(*plVar1 + 8))();
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < (ulonglong) param_1[1]);
    }
    lVar2 = *param_1;
    if (lVar2 != 0) {
        (**(code * *)(*(longlong * )(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    return;
}


void FUN_1402a2ff0(longlong *param_1, ulonglong param_2) {
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
                (**(code * *)(*plVar1 + 8))();
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
                        (**(code * *)(*plVar1 + 8))();
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


void FUN_1402a3110(longlong *param_1) {
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
            (**(code * *)(*plVar1 + 8))();
        }
        uVar2 = uVar2 + 1;
    } while (uVar2 < (ulonglong) param_1[1]);
    param_1[1] = 0;
    return;
}


void FUN_1402a3170(longlong *param_1) {
    longlong **pplVar1;
    longlong lVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    int iVar5;

    uVar3 = 0;
    uVar4 = uVar3;
    if (param_1[1] != 0) {
        do {
            iVar5 = 1;
            lVar2 = *param_1 + 0x10 + uVar3;
            do {
                pplVar1 = (longlong * *)(lVar2 + -8);
                lVar2 = lVar2 + -8;
                if (*pplVar1 != (longlong *) 0x0) {
                    (**(code * *)(**pplVar1 + 0x10))();
                }
                iVar5 = iVar5 + -1;
            } while (-1 < iVar5);
            uVar4 = uVar4 + 1;
            uVar3 = uVar3 + 0x10;
        } while (uVar4 < (ulonglong) param_1[1]);
    }
    lVar2 = *param_1;
    if (lVar2 == 0) {
        return;
    }
    // WARNING: Could not recover jumptable at 0x0001402a3201. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(*(longlong * )(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    return;
}


void FUN_1402a3210(longlong *param_1, ulonglong param_2) {
    longlong *plVar1;
    undefined8 *puVar2;
    longlong lVar3;
    longlong **pplVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    longlong lVar7;
    int iVar8;
    longlong **pplVar9;

    if (param_2 < (ulonglong) param_1[1]) {
        if ((ulonglong) param_1[1] <= param_2) {
            param_1[1] = param_2;
            return;
        }
        lVar7 = param_2 << 4;
        uVar5 = param_2;
        do {
            iVar8 = 1;
            lVar3 = *param_1 + 0x10 + lVar7;
            do {
                pplVar4 = (longlong * *)(lVar3 + -8);
                lVar3 = lVar3 + -8;
                if (*pplVar4 != (longlong *) 0x0) {
                    (**(code * *)(**pplVar4 + 0x10))();
                }
                iVar8 = iVar8 + -1;
            } while (-1 < iVar8);
            uVar5 = uVar5 + 1;
            lVar7 = lVar7 + 0x10;
        } while (uVar5 < (ulonglong) param_1[1]);
    } else {
        lVar7 = FUN_14018db00(*param_1, param_2, 0x10);
        uVar5 = param_1[1];
        uVar6 = 0;
        if (uVar5 < param_2) {
            puVar2 = (undefined8 * )(uVar5 * 0x10 + lVar7);
            lVar3 = param_2 - uVar5;
            do {
                if (puVar2 != (undefined8 *) 0x0) {
                    *puVar2 = 0;
                    puVar2[1] = 0;
                }
                puVar2 = puVar2 + 2;
                lVar3 = lVar3 + -1;
            } while (lVar3 != 0);
        }
        if (*param_1 != lVar7) {
            uVar5 = uVar6;
            if (param_1[1] != 0) {
                do {
                    pplVar4 = (longlong * *)(uVar5 + lVar7);
                    if (pplVar4 != (longlong **) 0x0) {
                        iVar8 = 1;
                        pplVar9 = (longlong * *)(*param_1 + uVar5);
                        do {
                            plVar1 = *pplVar9;
                            *pplVar4 = plVar1;
                            if (plVar1 != (longlong *) 0x0) {
                                (**(code * *)(*plVar1 + 8))();
                            }
                            pplVar4 = pplVar4 + 1;
                            pplVar9 = pplVar9 + 1;
                            iVar8 = iVar8 + -1;
                        } while (-1 < iVar8);
                    }
                    iVar8 = 1;
                    lVar3 = *param_1 + 0x10 + uVar5;
                    do {
                        pplVar4 = (longlong * *)(lVar3 + -8);
                        lVar3 = lVar3 + -8;
                        if (*pplVar4 != (longlong *) 0x0) {
                            (**(code * *)(**pplVar4 + 0x10))();
                        }
                        iVar8 = iVar8 + -1;
                    } while (-1 < iVar8);
                    uVar6 = uVar6 + 1;
                    uVar5 = uVar5 + 0x10;
                } while (uVar6 < (ulonglong) param_1[1]);
            }
            lVar3 = *param_1;
            if (lVar3 != 0) {
                (**(code * *)(*(longlong * )(lVar3 + -0x10) + 8))(lVar3 + -0x10);
            }
            *param_1 = lVar7;
        }
    }
    param_1[1] = param_2;
    return;
}


void FUN_1402a3390(longlong *param_1) {
    longlong **pplVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;
    int iVar5;

    uVar4 = 0;
    if (param_1[1] != 0) {
        lVar3 = 0;
        do {
            iVar5 = 1;
            lVar2 = *param_1 + 0x10 + lVar3;
            do {
                pplVar1 = (longlong * *)(lVar2 + -8);
                lVar2 = lVar2 + -8;
                if (*pplVar1 != (longlong *) 0x0) {
                    (**(code * *)(**pplVar1 + 0x10))();
                }
                iVar5 = iVar5 + -1;
            } while (-1 < iVar5);
            uVar4 = uVar4 + 1;
            lVar3 = lVar3 + 0x10;
        } while (uVar4 < (ulonglong) param_1[1]);
        param_1[1] = 0;
        return;
    }
    param_1[1] = 0;
    return;
}


void FUN_1402a3430(longlong *param_1) {
    longlong *plVar1;
    longlong lVar2;
    ulonglong uVar3;

    uVar3 = 0;
    if (param_1[1] != 0) {
        do {
            plVar1 = *(longlong * *)(*param_1 + uVar3 * 8);
            if (plVar1 != (longlong *) 0x0) {
                (**(code * *)(*plVar1 + 0x10))();
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < (ulonglong) param_1[1]);
    }
    lVar2 = *param_1;
    if (lVar2 != 0) {
        (**(code * *)(*(longlong * )(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    return;
}


undefined8 *FUN_1402a3490(undefined8 *param_1, longlong param_2) {
    int iVar1;

    *param_1 = &PTR_FUN_140b61db0;
    param_1[0x11] = 0;
    param_1[0x10] = 0;
    param_1[0x12] = 0;
    param_1[0x14] = 0;
    param_1[0x13] = 0;
    param_1[0x16] = 0;
    param_1[0x15] = 0;
    param_1[0x19] = 0;
    param_1[0x18] = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x1d] = 0;
    *(undefined4 * )(param_1 + 0x1e) = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    *(undefined4 * )(param_1 + 1) = 1;
    param_1[2] = param_2;
    param_1[9] = 0;
    *(undefined4 * )(param_1 + 0xb) = 0;
    *(undefined4 * )((longlong) param_1 + 0x5c) = 0x8000000a;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *(undefined4 * )(param_1 + 0x17) = 0;
    param_1[0x1a] = 0;
    *(undefined4 * )(param_1 + 0x1b) = 0;
    iVar1 = *(int *) (param_2 + 0xf0);
    param_1[0x1c] = 0;
    *(int *) ((longlong) param_1 + 0xdc) = iVar1 + -1;
    return param_1;
}


void FUN_1402a3570(undefined8 *param_1) {
    longlong lVar1;
    ulonglong *puVar2;
    int iVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong **ppuVar6;
    undefined8 local_res8;
    undefined **local_58;
    undefined8 local_50;
    LPVOID local_48;
    undefined **local_38;
    undefined8 local_30;
    LPVOID local_28;
    undefined8 local_20;

    *param_1 = &PTR_FUN_140b61db0;
    if ((longlong *) param_1[0x1c] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x1c] + 8))();
        param_1[0x1c] = 0;
    }
    if (param_1[0x23] != 0) {
        if (param_1[9] != 0) {
            lVar1 = param_1[2];
            local_38 = (undefined **)
                    CONCAT44(*(undefined4 * )((longlong) param_1 + 0x34), *(undefined4 * )(param_1 + 5));
            local_30 = param_1[7];
            local_20 = param_1[9];
            local_28 = (LPVOID) CONCAT44(*(undefined4 * )(param_1 + 10), *(undefined4 * )(param_1 + 8));
            uVar4 = (**(code * *)(lVar1 + 7000))(&local_38);
            uVar5 = uVar4 % *(ulonglong * )(lVar1 + 0x1b48);
            ppuVar6 = (ulonglong * *)(*(longlong * )(lVar1 + 0x1b50) + uVar5 * 8);
            puVar2 = *(ulonglong * *)(*(longlong * )(lVar1 + 0x1b50) + uVar5 * 8);
            while (puVar2 != (ulonglong *) 0x0) {
                if ((uVar4 == **ppuVar6) &&
                    (iVar3 = (**(code * *)(lVar1 + 0x1b60))(&local_38, *ppuVar6 + 2), iVar3 != 0)) {
                    puVar2 = *ppuVar6;
                    *ppuVar6 = (ulonglong *) puVar2[1];
                    FUN_14018b900(puVar2, 0);
                    *(longlong * )(lVar1 + 0x1b40) = *(longlong * )(lVar1 + 0x1b40) + -1;
                    goto LAB_1402a3709;
                }
                ppuVar6 = (ulonglong * *)(*ppuVar6 + 1);
                puVar2 = *ppuVar6;
            }
            local_50 = 0;
            local_58 = &PTR_LAB_140b5e648;
            local_48 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_58);
            local_38 = local_58;
            local_30 = local_50;
            local_res8 = 0x141de6110;
            local_28 = local_48;
            iVar3 = FUN_1401971e0(&DAT_140c8a4dc, 0xe, &local_res8, param_1[9], &local_38);
            local_58 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720, local_48);
            if (iVar3 != 0) {
                DebugBreak();
            }
        }
        LAB_1402a3709:
        if ((undefined8 *) param_1[0x23] != (undefined8 *) 0x0) {
            *(undefined8 *) param_1[0x23] = param_1[0x24];
        }
        if (param_1[0x24] != 0) {
            *(undefined8 * )(param_1[0x24] + 0x118) = param_1[0x23];
        }
        param_1[0x23] = 0;
        param_1[0x24] = 0;
    }
    FUN_1402a3ce0(param_1, 0);
    FUN_14018b900(param_1[9], 0);
    if ((undefined8 *) param_1[0x23] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x23] = param_1[0x24];
    }
    if (param_1[0x24] != 0) {
        *(undefined8 * )(param_1[0x24] + 0x118) = param_1[0x23];
    }
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    if ((undefined8 *) param_1[0x21] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x21] = param_1[0x22];
    }
    if (param_1[0x22] != 0) {
        *(undefined8 * )(param_1[0x22] + 0x20) = param_1[0x21];
    }
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    if ((undefined8 *) param_1[0x1f] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x1f] = param_1[0x20];
    }
    if (param_1[0x20] != 0) {
        *(undefined8 * )(param_1[0x20] + 0x10) = param_1[0x1f];
    }
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    lVar1 = param_1[0x18];
    if (lVar1 != 0) {
        (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = param_1[0x15];
    if (lVar1 != 0) {
        (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    FUN_1402a5c90(param_1 + 0x13);
    if ((longlong *) param_1[0x12] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x12] + 8))();
    }
    FUN_1402a2f90(param_1 + 0x10);
    return;
}


ulonglong FUN_1402a3890(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4,
                        undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
                        undefined4 param_9, undefined4 param_10) {
    longlong *plVar1;
    longlong lVar2;
    ulonglong uVar3;
    undefined4 uVar4;
    DWORD DVar5;
    uint uVar6;
    ulonglong uVar7;
    HANDLE hObject;
    longlong *plVar8;
    DWORD *pDVar9;
    ulonglong *puVar10;
    ulonglong uVar11;

    *(undefined4 * )(param_1 + 0x1c) = param_2;
    *(undefined4 * )(param_1 + 0x2c) = param_5;
    uVar11 = 0;
    *(undefined4 * )(param_1 + 0x30) = param_6;
    *(undefined4 * )(param_1 + 0x34) = param_7;
    *(undefined4 * )(param_1 + 0x20) = param_3;
    *(undefined4 * )(param_1 + 0x38) = param_8;
    *(undefined4 * )(param_1 + 0x24) = param_4;
    *(undefined4 * )(param_1 + 0x3c) = param_9;
    *(undefined4 * )(param_1 + 0x28) = 0;
    *(undefined8 * )(param_1 + 0x48) = 0;
    *(undefined4 * )(param_1 + 0x40) = param_10;
    *(undefined4 * )(param_1 + 0x18) = 1;
    uVar7 = FUN_140263970(param_1 + 0x18);
    if (-1 < (int) uVar7) {
        uVar4 = FUN_140263e70();
        lVar2 = *(longlong * )(param_1 + 0x10);
        pDVar9 = (DWORD * )(lVar2 + 0x18);
        *(undefined4 * )(param_1 + 0xd8) = uVar4;
        DVar5 = GetCurrentThreadId();
        puVar10 = (ulonglong * )(lVar2 + 0x20);
        uVar7 = uVar11;
        if (*pDVar9 == DVar5) {
            *puVar10 = *puVar10 + 1;
        } else {
            do {
                LOCK();
                uVar3 = *puVar10;
                *puVar10 = *puVar10 ^ (ulonglong)(uVar3 == 0) * (*puVar10 ^ 1);
                if (uVar3 == 0) {
                    *pDVar9 = DVar5;
                    goto LAB_1402a396e;
                }
                uVar7 = uVar7 + 1;
            } while (uVar7 < 0x400);
            FUN_14019fb60(pDVar9);
        }
        LAB_1402a396e:
        if ((*(int *) (param_1 + 0x34) - 3U & 0xfffffffd) == 0) {
            FUN_140052360(param_1 + 0xa8, *(int *) (param_1 + 0x2c) * *(int *) (param_1 + 0x24));
        }
        uVar6 = FUN_1402a3ce0(param_1, 2);
        uVar7 = (ulonglong) uVar6;
        if ((-1 < (int) uVar6) &&
            (plVar8 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x1ad0), uVar7 = uVar11,
                    *(longlong * )(param_1 + 0x118) == 0)) {
            *(longlong * *)(param_1 + 0x118) = plVar8;
            plVar1 = (longlong * )(param_1 + 0x120);
            *plVar1 = *plVar8;
            *plVar8 = param_1;
            if (*plVar1 != 0) {
                *(longlong * *)(*plVar1 + 0x118) = plVar1;
            }
        }
        if (*puVar10 < 2) {
            *pDVar9 = 0;
            *puVar10 = 0;
            if (*(longlong * )(lVar2 + 0x28) != 0) {
                if (*(longlong * )(lVar2 + 0x30) == 0) {
                    hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                    LOCK();
                    puVar10 = (ulonglong * )(lVar2 + 0x30);
                    uVar11 = *puVar10;
                    *puVar10 = *puVar10 ^ (ulonglong)(uVar11 == 0) * (*puVar10 ^ (ulonglong) hObject);
                    if (uVar11 != 0) {
                        CloseHandle(hObject);
                    }
                }
                SetEvent(*(HANDLE * )(lVar2 + 0x30));
            }
        } else {
            *puVar10 = *puVar10 - 1;
        }
    }
    return uVar7;
}



// WARNING: Could not reconcile some variable overlaps

undefined8
FUN_1402a3a60(ulonglong param_1, undefined8 param_2, undefined4 param_3, uint param_4,
              undefined4 param_5, undefined4 param_6, undefined4 param_7) {
    ulonglong **ppuVar1;
    longlong lVar2;
    int iVar3;
    undefined8 uVar4;
    ulonglong uVar5;
    ulonglong *puVar6;
    ulonglong *puVar7;
    longlong *plVar8;
    undefined8 local_68;
    undefined **local_60;
    undefined8 local_58;
    LPVOID local_50;
    code *local_48;
    undefined8 local_40;
    undefined8 local_38;
    undefined **local_28;
    ulonglong local_20;
    LPVOID local_18;
    ulonglong local_10;

    if (param_4 < 2) {
        *(undefined8 * )(param_1 + 0x18) = 0;
        *(undefined8 * )(param_1 + 0x20) = 0;
        *(undefined8 * )(param_1 + 0x28) = 0;
        *(undefined8 * )(param_1 + 0x30) = 0;
        *(undefined8 * )(param_1 + 0x38) = 0;
        *(undefined8 * )(param_1 + 0x40) = 0;
        *(undefined8 * )(param_1 + 0x48) = 0;
        *(undefined8 * )(param_1 + 0x50) = 0;
        *(undefined4 * )(param_1 + 0x38) = param_5;
        *(undefined4 * )(param_1 + 0x18) = 1;
        *(undefined4 * )(param_1 + 0x3c) = param_6;
        *(undefined4 * )(param_1 + 0x28) = param_3;
        *(undefined4 * )(param_1 + 0x40) = param_7;
        *(uint * )(param_1 + 0x34) = param_4;
        uVar4 = FUN_14018e9c0(param_2);
        *(undefined8 * )(param_1 + 0x48) = uVar4;
        uVar4 = FUN_1402a3ce0(param_1);
        if (-1 < (int) uVar4) {
            lVar2 = *(longlong * )(param_1 + 0x10);
            plVar8 = (longlong * )(lVar2 + 0x1b40);
            local_28 = (undefined **)
                    CONCAT44(*(undefined4 * )(param_1 + 0x34), *(undefined4 * )(param_1 + 0x28));
            local_20 = *(ulonglong * )(param_1 + 0x38);
            local_10 = *(ulonglong * )(param_1 + 0x48);
            local_18 = (LPVOID) CONCAT44(*(undefined4 * )(param_1 + 0x50), *(undefined4 * )(param_1 + 0x40));
            if (*plVar8 == *(longlong * )(lVar2 + 0x1b48)) {
                FUN_1400290d0(plVar8);
            }
            uVar5 = (**(code * *)(lVar2 + 7000))(&local_28);
            ppuVar1 = (ulonglong * *)
                    (*(longlong * )(lVar2 + 0x1b50) + (uVar5 % *(ulonglong * )(lVar2 + 0x1b48)) * 8);
            puVar6 = (ulonglong *) FUN_14018b280(0x38);
            puVar7 = (ulonglong *) 0x0;
            if (puVar6 != (ulonglong *) 0x0) {
                puVar7 = *ppuVar1;
                *puVar6 = uVar5;
                puVar6[1] = (ulonglong) puVar7;
                puVar6[2] = (ulonglong) local_28;
                puVar6[3] = local_20;
                puVar6[4] = (ulonglong) local_18;
                puVar6[6] = param_1;
                puVar6[5] = local_10;
                puVar7 = puVar6;
            }
            *ppuVar1 = puVar7;
            *plVar8 = *plVar8 + 1;
            puVar7 = (ulonglong * )(*(longlong * )(param_1 + 0x10) + 0x1ad0);
            if (*(longlong * )(param_1 + 0x118) == 0) {
                *(ulonglong * *)(param_1 + 0x118) = puVar7;
                puVar6 = (ulonglong * )(param_1 + 0x120);
                *puVar6 = *puVar7;
                *puVar7 = param_1;
                if (*puVar6 != 0) {
                    *(ulonglong * *)(*puVar6 + 0x118) = puVar6;
                }
            }
            local_60 = *(undefined * **)(param_1 + 0x48);
            local_58 = (ulonglong) local_58._4_4_ << 0x20;
            local_40 = 0;
            local_38 = 0;
            local_48 = FUN_1402a43a0;
            local_50 = (LPVOID) param_1;
            FUN_1401b6bf0(puVar7, &local_60, param_1 + 0xe0);
            uVar4 = 0;
        }
    } else {
        local_60 = &PTR_LAB_140b5e648;
        local_58 = 0;
        local_50 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_60);
        local_28 = local_60;
        local_68 = 0x141de6070;
        local_18 = local_50;
        local_20 = local_58;
        iVar3 = FUN_1401971e0(&DAT_140c8a4d8, 0xe, &local_68, &local_28);
        local_60 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_50);
        if (iVar3 != 0) {
            DebugBreak();
        }
        uVar4 = 0x80004005;
    }
    return uVar4;
}


void FUN_1402a3ce0(longlong param_1, int param_2) {
    int iVar1;
    int *piVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    longlong lVar8;
    IMAGE_DOS_HEADER *pIVar9;
    ulonglong uVar10;
    undefined auStack152[32];
    undefined4 local_78;
    undefined4 local_70;
    undefined4 local_68;
    longlong local_60;
    undefined8 local_58;
    undefined4 local_50;
    undefined4 local_4c;
    undefined4 local_48;
    undefined4 local_44;
    undefined4 local_40;
    undefined4 local_3c;
    undefined4 local_38;
    undefined4 local_34;
    uint local_30;
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong) auStack152;
    if (*(int *) (param_1 + 0x58) < 1) {
        if (param_2 < 1) {
            if (0 < *(int *) (param_1 + 0x58)) goto LAB_1402a3eda;
        } else if (*(longlong * )(param_1 + 0x48) == 0) {
            if (*(int *) (param_1 + 0x30) != 0x18) {
                local_50 = *(undefined4 * )(param_1 + 0x1c);
                pIVar9 = &IMAGE_DOS_HEADER_140000000;
                local_4c = *(undefined4 * )(param_1 + 0x20);
                lVar8 = (longlong) * (int *) (param_1 + 0x34) * 4;
                local_48 = *(undefined4 * )(param_1 + 0x24);
                local_44 = *(undefined4 * )(param_1 + 0x2c);
                local_40 = (&DAT_140ae8120)[*(int *) (param_1 + 0x30)];
                local_3c = *(undefined4 * )(&DAT_140ae7eb0 + lVar8);
                local_38 = FUN_14027a160();
                local_34 = *(undefined4 * )(pIVar9[0x15cfd].e_program + lVar8 + 0x20);
                local_30 = *(uint * )(param_1 + 0x3c) >> 7 & 1;
                iVar1 = (**(code * *)(**(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x18c0) + 0x30))();
                if (iVar1 < 0) {
                    local_58 = 0x141de5c88;
                    FUN_1401a3130(0xe, 2, &local_58, iVar1);
                    *(int *) (param_1 + 0x5c) = iVar1;
                    goto LAB_1402a402d;
                }
                if (*(int *) (param_1 + 0x34) - 4U < 2) {
                    FUN_140279fa0();
                }
            }
            if ((*(longlong * )(param_1 + 0xb0) != 0) && (uVar7 = 0, *(int *) (param_1 + 0x2c) != 0)) {
                do {
                    uVar5 = 0;
                    if (*(int *) (param_1 + 0x24) != 0) {
                        do {
                            uVar6 = uVar5 + 1;
                            *(int *) (*(longlong * )(param_1 + 0xa8) +
                                      (ulonglong)(*(int *) (param_1 + 0x2c) * uVar5 + uVar7) * 4) =
                                    *(int *) (*(longlong * )(param_1 + 0x10) + 0xf0) + -1;
                            uVar5 = uVar6;
                        } while (uVar6 < *(uint * )(param_1 + 0x24));
                    }
                    uVar7 = uVar7 + 1;
                } while (uVar7 < *(uint * )(param_1 + 0x2c));
            }
            piVar2 = (int *) (*(longlong * )(param_1 + 0x10) + 0x2d4 +
                              (longlong) * (int *) (param_1 + 0x34) * 0x30);
            LOCK();
            *piVar2 = *piVar2 + 1;
            LOCK();
            piVar2[1] = piVar2[1] + *(int *) (param_1 + 0xd8);
            LOCK();
            piVar2[2] = piVar2[2] + 1;
            LOCK();
            piVar2[3] = piVar2[3] + *(int *) (param_1 + 0xd8);
            *(undefined4 * )(param_1 + 0x5c) = 0;
        } else {
            local_60 = param_1 + 0x60;
            local_70 = *(undefined4 * )(param_1 + 0x3c);
            local_68 = 0;
            local_78 = *(undefined4 * )(param_1 + 0x34);
            iVar1 = FUN_140279ed0(*(undefined8 * )(param_1 + 0x10), 1, *(longlong * )(param_1 + 0x48),
                                  *(undefined4 * )(param_1 + 0x28));
            if (iVar1 < 0) {
                *(int *) (param_1 + 0x5c) = iVar1;
                goto LAB_1402a402d;
            }
        }
    } else {
        LAB_1402a3eda:
        if (param_2 < 1) {
            if (*(longlong * )(param_1 + 0x70) != 0) {
                piVar2 = (int *) (*(longlong * )(param_1 + 0x10) + 0x2d4 +
                                  (longlong) * (int *) (param_1 + 0x34) * 0x30);
                LOCK();
                *piVar2 = *piVar2 + -1;
                LOCK();
                piVar2[1] = piVar2[1] - *(int *) (param_1 + 0xd8);
                LOCK();
                piVar2[4] = piVar2[4] + 1;
                LOCK();
                piVar2[5] = piVar2[5] + *(int *) (param_1 + 0xd8);
            }
            uVar3 = 0;
            uVar4 = uVar3;
            uVar10 = uVar3;
            if (*(longlong * )(param_1 + 0xa0) != 0) {
                do {
                    FUN_140275940(*(longlong * )(param_1 + 0x98) + uVar10);
                    uVar4 = uVar4 + 1;
                    uVar10 = uVar10 + 0x10;
                } while (uVar4 < *(ulonglong * )(param_1 + 0xa0));
            }
            FUN_1402a5f00(param_1 + 0x98);
            FUN_1402a3110(param_1 + 0x80);
            if (*(longlong * *)(param_1 + 0x90) != (longlong *) 0x0) {
                (**(code * *)(**(longlong * *)(param_1 + 0x90) + 8))();
                *(undefined8 * )(param_1 + 0x90) = 0;
            }
            if (*(longlong * *)(param_1 + 0x70) != (longlong *) 0x0) {
                (**(code * *)(**(longlong * *)(param_1 + 0x70) + 0x10))();
                *(undefined8 * )(param_1 + 0x70) = 0;
            }
            if (*(longlong * *)(param_1 + 0x78) != (longlong *) 0x0) {
                (**(code * *)(**(longlong * *)(param_1 + 0x78) + 0x10))();
                *(undefined8 * )(param_1 + 0x78) = 0;
            }
            if (*(longlong * *)(param_1 + 0x60) != (longlong *) 0x0) {
                (**(code * *)(**(longlong * *)(param_1 + 0x60) + 8))();
                *(undefined8 * )(param_1 + 0x60) = 0;
            }
            *(undefined4 * )(param_1 + 0x5c) = 0x8000000a;
            *(undefined4 * )(param_1 + 0xb8) = 0;
            *(undefined8 * )(param_1 + 0xd0) = 0;
            if (*(longlong * )(param_1 + 200) != 0) {
                do {
                    lVar8 = *(longlong * )(param_1 + 0xc0);
                    *(undefined4 * )(lVar8 + uVar3 * 0x18) = 0;
                    *(undefined8 * )(lVar8 + 8 + uVar3 * 0x18) = 0;
                    uVar4 = (ulonglong)((int) uVar3 + 1);
                    *(undefined8 * )(lVar8 + 0x10 + uVar3 * 0x18) = 0;
                    uVar3 = uVar4;
                } while (uVar4 < *(ulonglong * )(param_1 + 200));
            }
        }
    }
    *(int *) (param_1 + 0x58) = param_2;
    LAB_1402a402d:
    FUN_1407db4f0(local_28 ^ (ulonglong) auStack152);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1402a4050(longlong param_1) {
    longlong *plVar1;
    int iVar2;
    int iVar3;
    undefined4 uVar4;
    int *piVar5;
    undefined auStack376[32];
    undefined ***local_158;
    undefined4 *local_150;
    undefined ***local_148;
    undefined **local_138;
    undefined8 local_130;
    LPVOID local_128;
    undefined **local_120;
    wchar_t *local_118;
    LPVOID local_110;
    undefined8 local_108;
    undefined **local_100;
    undefined8 uStack248;
    undefined8 local_f0;
    int iStack232;
    undefined4 uStack228;
    undefined8 local_e0;
    undefined **local_d8;
    undefined8 local_d0;
    LPVOID local_c8;
    undefined **local_b8;
    wchar_t *local_b0;
    LPVOID local_a8;
    undefined8 local_a0;
    undefined4 local_98[4];
    undefined4 local_88[4];
    undefined4 local_78[4];
    undefined4 local_68;
    undefined4 uStack100;
    undefined4 uStack96;
    undefined4 uStack92;
    undefined4 local_58;
    undefined4 uStack84;
    int iStack80;
    undefined4 uStack76;
    undefined4 local_48;
    undefined4 local_44;
    undefined4 local_40;
    undefined4 local_3c;
    ulonglong local_20;

    local_20 = DAT_140c0f7b0 ^ (ulonglong) auStack376;
    plVar1 = *(longlong * *)(param_1 + 0x60);
    local_98[0] = 0xffffffff;
    (**(code * *)(*plVar1 + 0x20))(plVar1, local_98);
    iVar3 = *(int *) (plVar1 + 6);
    if (-1 < iVar3) {
        plVar1 = *(longlong * *)(param_1 + 0x60);
        local_78[0] = 0xffffffff;
        (**(code * *)(*plVar1 + 0x20))(plVar1, local_78);
        if (plVar1[8] == 0) {
            iVar3 = -0x7fffbffb;
        } else {
            *(longlong * )(param_1 + 0x70) = plVar1[8];
            (**(code * *)(*(longlong *) plVar1[8] + 8))();
            (**(code * *)(**(longlong * *)(param_1 + 0x70) + 0x50))
                    (*(longlong * *)(param_1 + 0x70), &local_48);
            plVar1 = *(longlong * *)(param_1 + 0x60);
            *(undefined4 * )(param_1 + 0x1c) = local_48;
            *(undefined4 * )(param_1 + 0x20) = local_44;
            *(undefined4 * )(param_1 + 0x24) = local_40;
            local_88[0] = 0xffffffff;
            *(undefined4 * )(param_1 + 0x2c) = local_3c;
            (**(code * *)(*plVar1 + 0x20))(plVar1, local_88);
            *(undefined4 * )(param_1 + 0x30) = *(undefined4 * )(plVar1 + 0xb);
            iVar3 = FUN_140263970(param_1 + 0x18, *(longlong * )(param_1 + 0x10) + 0x88);
            if (-1 < iVar3) {
                uVar4 = FUN_140263e70(param_1 + 0x18);
                *(undefined4 * )(param_1 + 0xd8) = uVar4;
                piVar5 = (int *) (*(longlong * )(param_1 + 0x10) + 0x2d4 +
                                  (longlong) * (int *) (param_1 + 0x34) * 0x30);
                LOCK();
                *piVar5 = *piVar5 + 1;
                LOCK();
                piVar5[1] = piVar5[1] + *(int *) (param_1 + 0xd8);
                LOCK();
                piVar5[2] = piVar5[2] + 1;
                LOCK();
                piVar5[3] = piVar5[3] + *(int *) (param_1 + 0xd8);
                LOCK();
                piVar5[8] = piVar5[8] + 1;
                LOCK();
                piVar5[9] = piVar5[9] + *(int *) (param_1 + 0xd8);
                *(undefined4 * )(param_1 + 0x68) = *(undefined4 * )(*(longlong * )(param_1 + 0x60) + 0x60);
                uVar4 = *(undefined4 * )(*(longlong * )(param_1 + 0x60) + 100);
                *(undefined4 * )(param_1 + 0x5c) = 0;
                *(undefined4 * )(param_1 + 0x6c) = uVar4;
                *(undefined4 * )(param_1 + 0xb8) = 1;
                goto LAB_1402a4291;
            }
        }
    }
    local_138 = &PTR_LAB_140b5e648;
    local_130 = 0;
    local_128 = TlsGetValue(DAT_140c63720);
    TlsSetValue(DAT_140c63720, &local_138);
    local_d8 = local_138;
    local_d0 = local_130;
    local_100 = &PTR_LAB_140b5e648;
    uStack248 = L"Result";
    local_c8 = local_128;
    local_f0 = TlsGetValue(DAT_140c63720);
    TlsSetValue(DAT_140c63720, &local_100);
    local_108 = *(undefined8 * )(param_1 + 0x48);
    local_120 = &PTR_LAB_140b5e648;
    local_100 = &PTR_LAB_140b5e640;
    local_58 = (undefined4) local_f0;
    uStack84 = local_f0._4_4_;
    uStack76 = uStack228;
    local_118 = L"FileName";
    local_68 = 0x40b5e640;
    uStack100 = 1;
    uStack96 = (undefined4) uStack248;
    uStack92 = uStack248._4_4_;
    iStack232 = iVar3;
    iStack80 = iVar3;
    local_110 = TlsGetValue(DAT_140c63720);
    TlsSetValue(DAT_140c63720, &local_120);
    local_b0 = local_118;
    local_120 = &PTR_LAB_140b5e638;
    local_e0 = 0x141de6018;
    local_148 = &local_d8;
    local_b8 = &PTR_LAB_140b5e638;
    local_a8 = local_110;
    local_150 = &local_68;
    local_158 = &local_b8;
    local_a0 = local_108;
    iVar2 = FUN_1401971e0(&DAT_140c8a4d4, 0xe, &local_e0, *(undefined8 * )(param_1 + 0x48));
    local_120 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720, local_110);
    local_100 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720, local_f0);
    local_138 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720, local_128);
    if (iVar2 != 0) {
        DebugBreak();
    }
    *(int *) (param_1 + 0x5c) = iVar3;
    if (*(longlong * *)(param_1 + 0x70) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x70) + 0x10))();
        *(undefined8 * )(param_1 + 0x70) = 0;
    }
    LAB_1402a4291:
    FUN_1407db4f0(local_20 ^ (ulonglong) auStack376);
    return;
}


void FUN_1402a43a0(longlong param_1) {
    ulonglong *puVar1;
    longlong lVar2;
    ulonglong uVar3;
    DWORD DVar4;
    int iVar5;
    HANDLE hObject;
    ulonglong uVar6;

    lVar2 = *(longlong * )(param_1 + 0x10);
    DVar4 = GetCurrentThreadId();
    uVar6 = 0;
    if (*(DWORD * )(lVar2 + 0x18) == DVar4) {
        *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(lVar2 + 0x20);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
            if (uVar3 == 0) {
                *(DWORD * )(lVar2 + 0x18) = DVar4;
                goto LAB_1402a4400;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(lVar2 + 0x18, DVar4);
    }
    LAB_1402a4400:
    iVar5 = FUN_1402a3ce0(param_1, 0);
    if (-1 < iVar5) {
        FUN_1402a3ce0(param_1, 2);
    }
    if (*(ulonglong * )(lVar2 + 0x20) < 2) {
        *(undefined4 * )(lVar2 + 0x18) = 0;
        *(undefined8 * )(lVar2 + 0x20) = 0;
        if (*(longlong * )(lVar2 + 0x28) != 0) {
            if (*(longlong * )(lVar2 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar2 + 0x30);
                uVar6 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar6 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar2 + 0x30));
        }
        return;
    }
    *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + -1;
    return;
}


undefined8 FUN_1402a4490(longlong param_1, uint param_2) {
    undefined8 *puVar1;
    longlong *plVar2;
    int iVar3;
    undefined8 *puVar4;
    ulonglong uVar5;
    longlong *local_res8;
    undefined4 local_28;
    undefined4 local_24;
    uint local_20;
    undefined4 local_1c;

    uVar5 = (ulonglong) param_2;
    if (*(longlong * )(param_1 + 0x70) != 0) {
        if (*(ulonglong * )(param_1 + 0x88) < uVar5 || *(ulonglong * )(param_1 + 0x88) == uVar5) {
            FUN_1402a2ff0(param_1 + 0x80, param_2 + 1);
        }
        if (*(longlong * )(*(longlong * )(param_1 + 0x80) + uVar5 * 8) == 0) {
            local_24 = 8;
            local_1c = 0xffffffff;
            local_res8 = (longlong *) 0x0;
            local_28 = *(undefined4 * )(&DAT_140ae8190 + (longlong) * (int *) (param_1 + 0x30) * 4);
            plVar2 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x18c0);
            local_20 = param_2;
            iVar3 = (**(code * *)(*plVar2 + 0x38))
                    (plVar2, *(undefined8 * )(param_1 + 0x70), &local_28, &local_res8);
            if ((-1 < iVar3) &&
                (puVar1 = (undefined8 * )(*(longlong * )(param_1 + 0x80) + uVar5 * 8),
                        puVar1 != (undefined8 *) 0x0)) {
                puVar4 = (undefined8 *) FUN_14018b280(0x18);
                if (puVar4 == (undefined8 *) 0x0) {
                    puVar4 = (undefined8 *) 0x0;
                } else {
                    *puVar4 = &PTR_LAB_140b55048;
                    *(undefined4 * )(puVar4 + 1) = 1;
                    *puVar4 = &PTR_LAB_140b61188;
                    puVar4[2] = local_res8;
                    if (local_res8 != (longlong *) 0x0) {
                        (**(code * *)(*local_res8 + 8))();
                    }
                }
                *puVar1 = puVar4;
            }
            if (local_res8 != (longlong *) 0x0) {
                (**(code * *)(*local_res8 + 0x10))();
            }
        }
        return *(undefined8 * )(*(longlong * )(param_1 + 0x80) + uVar5 * 8);
    }
    return 0;
}


void FUN_1402a45d0(longlong param_1) {
    longlong *plVar1;
    uint uVar2;
    undefined4 uVar3;
    longlong *plVar4;
    int iVar5;
    undefined8 *puVar6;
    undefined8 uVar7;
    undefined auVar9[16];
    undefined auVar10[16];
    undefined auStack136[32];
    longlong *local_68[2];
    float local_58;
    float fStack84;
    float fStack80;
    float fStack76;
    undefined4 local_48;
    undefined4 local_44;
    undefined4 local_40;
    undefined4 local_3c;
    undefined4 local_38;
    undefined4 local_34;
    undefined4 local_30;
    float local_2c;
    float fStack40;
    float fStack36;
    float fStack32;
    undefined4 local_1c;
    undefined4 local_18;
    ulonglong local_10;
    undefined auVar8[12];

    local_10 = DAT_140c0f7b0 ^ (ulonglong) auStack136;
    plVar1 = (longlong * )(param_1 + 0x90);
    if (*plVar1 != 0) goto LAB_1402a4789;
    if ((&DAT_140ae64c0)[*(int *) (param_1 + 0x30)] == 0) {
        local_48 = *(undefined4 * )(&DAT_140ae7e20 + (longlong) * (int *) (param_1 + 0x38) * 4);
    } else {
        local_48 = *(undefined4 * )(&DAT_140ae7e40 + (longlong) * (int *) (param_1 + 0x38) * 4);
    }
    uVar2 = *(uint * )(param_1 + 0x3c);
    uVar3 = *(undefined4 * )(param_1 + 0x40);
    local_38 = 0;
    uVar7 = CONCAT44(uVar3, uVar3);
    auVar8 = CONCAT48(uVar3, uVar7);
    auVar9 = CONCAT142(SUB1614(CONCAT133(SUB1613(CONCAT124(SUB1612(CONCAT115(SUB1611(CONCAT106(SUB1610
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
                                                                                                                                                                                                                                    (char) ((uint) uVar3
                                                                                                                                                                                                                                            >>
                                                                                                                                                                                                                                            0x18),
                                                                                                                                                                                                                                    SUB1614(CONCAT412(
                                                                                                                                                                                                                                                    uVar3,
                                                                                                                                                                                                                                                    auVar8),
                                                                                                                                                                                                                                            0))
                                                                                                                                                                                                                                    >> 0x68,
                                                                                                                                                                                                                            0),
                                                                                                                                                                                                                     CONCAT112(
                                                                                                                                                                                                                             (char) ((uint) uVar3
                                                                                                                                                                                                                                     >> 0x10),
                                                                                                                                                                                                                             auVar8))
                                                                                                                                                                                                                     >>
                                                                                                                                                                                                                     0x60,
                                                                                                                                                                                                             0),
                                                                                                                                                                                                    auVar8)
                                                                                                                                                                                                    >> 0x58,
                                                                                                                                                                                            0),
                                                                                                                                                                                     CONCAT110(
                                                                                                                                                                                             (char) ((uint) uVar3
                                                                                                                                                                                                     >> 8),
                                                                                                                                                                                             SUB1210(auVar8,
                                                                                                                                                                                                     0)))
                                                                                                                                                                                     >> 0x50,
                                                                                                                                                                             0),
                                                                                                                                                                      SUB1210(auVar8,
                                                                                                                                                                              0))
                                                                                                                                                                      >> 0x48,
                                                                                                                                                              0),
                                                                                                                                                      CONCAT18(
                                                                                                                                                              (char) uVar3,
                                                                                                                                                              uVar7))
                                                                                                                                                      >> 0x40,
                                                                                                                                              0),
                                                                                                                                       uVar7)
                                                                                                                                       >>
                                                                                                                                       0x38,
                                                                                                                               0) &
                                                                                                                SUB169((undefined[16])
                                                                                                                               0xffffffffffffffff
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
                                                                                                                ((uint7) uVar7
                                                                                                                        >> 0x18)
                                                                                                                        << 0x30)
                                                                                                                >> 0x30,
                                                                                                        0),
                                                                                               (int6) uVar7) >> 0x28,
                                                                                     0) &
                                                                             SUB1611((undefined[16]) 0xffff00ffffffffff
                                                                                             >>
                                                                                             0x28, 0),
                                                                             ((uint5) uVar7 >> 0x10) << 0x20) >>
                                                                                                              0x20, 0),
                                                           uVar3) >> 0x18, 0) &
                                         SUB1613((undefined[16]) 0xffffffff00ffffff >> 0x18, 0),
                                         ((uint3) uVar3 >> 8) << 0x10) >> 0x10, 0), (short) uVar3) &
             (undefined[16]) 0xffffffffffff00ff;
    local_34 = 0x10;
    auVar10 = CONCAT124(SUB1612(CONCAT106((unkuint10)
                                                  SUB148(CONCAT68(SUB146(CONCAT410(SUB144(CONCAT212(SUB162(
                                                                                           auVar9 >> 0x30, 0), SUB1612(auVar9, 0)) >> 0x50, 0),
                                                                                   CONCAT28(SUB162(auVar9 >> 0x20, 0),
                                                                                            SUB168(auVar9, 0)
                                                                                   )) >> 0x40, 0), SUB168(auVar9, 0))
                                                                 >> 0x30, 0)
                                          & SUB1610((undefined[16]) 0xffffffffffffffff >> 0x30, 0) &
                                          SUB1610((undefined[16]) 0xffffffffffffffff >> 0x30, 0),
                                          (SUB166(auVar9, 0) >> 0x10) << 0x20) >> 0x20, 0),
                        SUB164(auVar9, 0)) & (undefined[16]) 0xffffffff0000ffff;
    local_44 = *(undefined4 * )(&DAT_140ae7e60 + (ulonglong)(uVar2 & 3) * 4);
    local_1c = 0;
    local_58 = (float) SUB164(auVar10 >> 0x40, 0) * 0.003921569;
    fStack84 = (float) SUB164(auVar10 >> 0x20, 0) * 0.003921569;
    fStack80 = (float) (SUB164(auVar9, 0) & 0xffff) * 0.003921569;
    fStack76 = (float) SUB164(auVar10 >> 0x60, 0) * 0.003921569;
    local_18 = 0x7f7fffff;
    local_68[0] = (longlong *) 0x0;
    local_40 = *(undefined4 * )(&DAT_140ae7e60 + (ulonglong)(uVar2 >> 2 & 3) * 4);
    local_3c = *(undefined4 * )(&DAT_140ae7e60 + (ulonglong)(uVar2 >> 4 & 3) * 4);
    local_30 = 1;
    if ((&DAT_140ae64c0)[*(int *) (param_1 + 0x30)] != 0) {
        local_30 = 4;
    }
    plVar4 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x18c0);
    local_2c = local_58;
    fStack40 = fStack84;
    fStack36 = fStack80;
    fStack32 = fStack76;
    iVar5 = (**(code * *)(*plVar4 + 0xb8))(plVar4, &local_48, local_68);
    if ((-1 < iVar5) && (plVar1 != (longlong *) 0x0)) {
        puVar6 = (undefined8 *) FUN_14018b280(0x18);
        if (puVar6 == (undefined8 *) 0x0) {
            puVar6 = (undefined8 *) 0x0;
        } else {
            *puVar6 = &PTR_LAB_140b55048;
            *(undefined4 * )(puVar6 + 1) = 1;
            *puVar6 = &PTR_LAB_140b61188;
            puVar6[2] = local_68[0];
            if (local_68[0] != (longlong *) 0x0) {
                (**(code * *)(*local_68[0] + 8))();
                *plVar1 = (longlong) puVar6;
                goto LAB_1402a477e;
            }
        }
        *plVar1 = (longlong) puVar6;
    }
    LAB_1402a477e:
    if (local_68[0] != (longlong *) 0x0) {
        (**(code * *)(*local_68[0] + 0x10))();
    }
    LAB_1402a4789:
    FUN_1407db4f0(local_10 ^ (ulonglong) auStack136);
    return;
}


undefined8 FUN_1402a47b0(longlong param_1, uint param_2, ulonglong param_3) {
    undefined8 *puVar1;
    longlong *plVar2;
    ulonglong uVar3;
    undefined4 local_28;
    undefined4 local_24;
    int local_20;
    uint local_1c;
    undefined4 local_18;

    param_3 = param_3 & 0xffffffff;
    uVar3 = (ulonglong) param_2;
    if (*(longlong * )(param_1 + 0x70) == 0) {
        return 0;
    }
    local_20 = (int) param_3;
    if (*(ulonglong * )(param_1 + 0xa0) < param_3 || *(ulonglong * )(param_1 + 0xa0) == param_3) {
        FUN_1402a5d50(param_1 + 0x98, local_20 + 1);
    }
    plVar2 = (longlong * )(param_3 * 0x10 + *(longlong * )(param_1 + 0x98));
    if ((ulonglong) plVar2[1] < uVar3 || plVar2[1] == uVar3) {
        FUN_140275820(plVar2, param_2 + 1);
    }
    puVar1 = (undefined8 * )(*plVar2 + uVar3 * 8);
    if (*(longlong * )(*plVar2 + uVar3 * 8) == 0) {
        local_24 = 8;
        local_18 = 1;
        local_28 = *(undefined4 * )(&DAT_140ae7f90 + (longlong) * (int *) (param_1 + 0x30) * 4);
        plVar2 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x18c0);
        local_1c = param_2;
        (**(code * *)(*plVar2 + 0x48))(plVar2, *(undefined8 * )(param_1 + 0x70), &local_28, puVar1);
    }
    return *puVar1;
}


int FUN_1402a48a0(longlong param_1) {
    ulonglong *puVar1;
    int iVar2;
    longlong lVar3;
    ulonglong uVar4;
    DWORD DVar5;
    HANDLE hObject;
    ulonglong uVar6;

    lVar3 = *(longlong * )(param_1 + 0x10);
    DVar5 = GetCurrentThreadId();
    uVar6 = 0;
    if (*(DWORD * )(lVar3 + 0x18) == DVar5) {
        *(longlong * )(lVar3 + 0x20) = *(longlong * )(lVar3 + 0x20) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(lVar3 + 0x20);
            uVar4 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar4 == 0) * (*puVar1 ^ 1);
            if (uVar4 == 0) {
                *(DWORD * )(lVar3 + 0x18) = DVar5;
                goto LAB_1402a490a;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(lVar3 + 0x18, DVar5);
    }
    LAB_1402a490a:
    *(int *) (param_1 + 8) = *(int *) (param_1 + 8) + 1;
    iVar2 = *(int *) (param_1 + 8);
    if (iVar2 == 1) {
        FUN_1401984d0(param_1 + 0xe8);
    }
    if (*(ulonglong * )(lVar3 + 0x20) < 2) {
        *(undefined4 * )(lVar3 + 0x18) = 0;
        *(undefined8 * )(lVar3 + 0x20) = 0;
        if (*(longlong * )(lVar3 + 0x28) != 0) {
            if (*(longlong * )(lVar3 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar3 + 0x30);
                uVar6 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar6 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar3 + 0x30));
        }
    } else {
        *(longlong * )(lVar3 + 0x20) = *(longlong * )(lVar3 + 0x20) + -1;
    }
    return iVar2;
}


undefined8 FUN_1402a4ae0(longlong param_1) {
    undefined8 uVar1;

    if (*(longlong * *)(param_1 + 0x60) != (longlong *) 0x0) {
        uVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x60) + 0x20))();
        if ((int) uVar1 == 0) {
            return uVar1;
        }
        FUN_1402a4050(param_1);
        if (*(longlong * *)(param_1 + 0x60) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x60) + 8))();
            *(undefined8 * )(param_1 + 0x60) = 0;
        }
    }
    return 1;
}


void FUN_1402a53b0(longlong *param_1, undefined4 param_2, int param_3, undefined ***param_4,
                   undefined4 param_5, undefined4 param_6, undefined4 *param_7) {
    ulonglong *puVar1;
    int *piVar2;
    ulonglong uVar3;
    int iVar4;
    HANDLE hObject;
    longlong lVar5;
    undefined4 *puVar6;
    undefined auStack360[32];
    undefined ***local_148;
    undefined4 local_140;
    undefined4 local_138;
    undefined4 *local_128;
    undefined **local_120;
    undefined8 local_118;
    LPVOID local_110;
    undefined **local_108;
    wchar_t *local_100;
    LPVOID local_f8;
    longlong local_f0;
    undefined **local_e8;
    undefined8 local_e0;
    LPVOID local_d8;
    undefined8 local_d0;
    undefined8 local_c8[2];
    undefined **local_b8;
    undefined8 local_b0;
    LPVOID local_a8;
    undefined **local_98;
    undefined8 local_90;
    LPVOID local_88;
    undefined **local_78;
    wchar_t *local_70;
    LPVOID local_68;
    longlong local_60;
    undefined4 local_58;
    undefined4 local_48;
    undefined4 local_44;
    undefined4 local_40;
    undefined4 local_3c;
    undefined4 local_38;
    undefined4 local_34;
    ulonglong local_30;

    local_30 = DAT_140c0f7b0 ^ (ulonglong) auStack360;
    local_58 = 0xffffffff;
    (**(code * *)(*param_1 + 0x20))();
    if (param_1[0xe] != 0) {
        if (param_1[9] == 0) {
            if (param_3 == *(int *) (param_1 + 6)) {
                FUN_14003d8f0(&local_128, param_1[2] + 0x18e0);
                if (param_7 == (undefined4 *) 0x0) {
                    puVar6 = (undefined4 *) 0x0;
                } else {
                    local_48 = *param_7;
                    puVar6 = &local_48;
                    local_44 = param_7[1];
                    local_40 = param_7[2];
                    local_3c = param_7[3];
                    local_38 = param_7[4];
                    local_34 = param_7[5];
                }
                local_138 = param_6;
                local_140 = param_5;
                local_148 = param_4;
                (**(code * *)(**(longlong * *)(param_1[2] + 0x18d0) + 0x180))
                        (*(longlong * *)(param_1[2] + 0x18d0), param_1[0xe], param_2, puVar6);
                if (*(ulonglong * )(local_128 + 2) < 2) {
                    *local_128 = 0;
                    *(undefined8 * )(local_128 + 2) = 0;
                    if (*(longlong * )(local_128 + 4) != 0) {
                        if (*(longlong * )(local_128 + 6) == 0) {
                            hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                            LOCK();
                            puVar1 = (ulonglong * )(local_128 + 6);
                            uVar3 = *puVar1;
                            *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ (ulonglong) hObject);
                            if (uVar3 != 0) {
                                CloseHandle(hObject);
                            }
                        }
                        SetEvent(*(HANDLE * )(local_128 + 6));
                    }
                } else {
                    *(longlong * )(local_128 + 2) = *(longlong * )(local_128 + 2) + -1;
                }
                lVar5 = (longlong) * (int *) ((longlong) param_1 + 0x34) * 0x30 + param_1[2];
                LOCK();
                piVar2 = (int *) (lVar5 + 0x2f4);
                *piVar2 = *piVar2 + 1;
                LOCK();
                piVar2 = (int *) (lVar5 + 0x2f8);
                *piVar2 = *piVar2 + *(int *) (param_1 + 0x1b);
                *(undefined4 * )(param_1 + 0x17) = 1;
            } else {
                local_120 = &PTR_LAB_140b5e648;
                local_118 = 0;
                local_110 = TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720, &local_120);
                local_98 = local_120;
                local_c8[0] = 0x141de6300;
                local_88 = local_110;
                local_90 = local_118;
                iVar4 = FUN_1401971e0(&DAT_140c8a4bc, 0xe, local_c8, &local_98);
                local_120 = &PTR_LAB_140b5e648;
                TlsSetValue(DAT_140c63720, local_110);
                if (iVar4 != 0) {
                    DebugBreak();
                }
            }
        } else {
            local_e8 = &PTR_LAB_140b5e648;
            local_e0 = 0;
            local_d8 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_e8);
            local_f0 = param_1[9];
            local_b8 = local_e8;
            local_b0 = local_e0;
            local_108 = &PTR_LAB_140b5e648;
            local_a8 = local_d8;
            local_100 = L"FileName";
            local_f8 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_108);
            local_70 = local_100;
            local_108 = &PTR_LAB_140b5e638;
            local_78 = &PTR_LAB_140b5e638;
            local_d0 = 0x141de6350;
            local_148 = &local_b8;
            local_68 = local_f8;
            local_60 = local_f0;
            iVar4 = FUN_1401971e0(&DAT_140c8a4b8, 0xe, &local_d0, &local_78);
            local_108 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720, local_f8);
            local_e8 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720, local_d8);
            if (iVar4 != 0) {
                DebugBreak();
            }
        }
    }
    FUN_1407db4f0(local_30 ^ (ulonglong) auStack360);
    return;
}


int FUN_1402a5b20(longlong *param_1, short *param_2) {
    longlong *plVar1;
    int iVar2;
    int iVar3;
    longlong *local_res10;
    undefined8 local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    if ((param_2 == (short *) 0x0) || (*param_2 == 0)) {
        return -0x7ff8ffa9;
    }
    if (*(int *) ((longlong) param_1 + 0x34) == 1) {
        local_48 = &PTR_LAB_140b5e648;
        local_40 = 0;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_48);
        local_28 = local_48;
        local_res10 = (longlong *) 0x141de6180;
        local_18 = local_38;
        local_20 = local_40;
        iVar2 = FUN_1401971e0(&DAT_140c8a4b4, 0xe, &local_res10, &local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_38);
        if (iVar2 != 0) {
            DebugBreak();
        }
        return -0x7fffbffb;
    }
    local_48 = (undefined **) CONCAT44(local_48._4_4_, 0xffffffff);
    (**(code * *)(*param_1 + 0x20))(param_1, &local_48);
    if (param_1[0xe] != 0) {
        local_res10 = (longlong *) 0x0;
        iVar2 = FUN_140279e20(param_1[2], param_1[0xe], &local_res10);
        plVar1 = local_res10;
        if ((iVar2 < 0) || (iVar2 = FUN_1402b1de0(local_res10, param_2), iVar3 = 0, iVar2 < 0)) {
            iVar3 = iVar2;
        }
        if (plVar1 != (longlong *) 0x0) {
            (**(code * *)(*plVar1 + 8))(plVar1);
        }
        return iVar3;
    }
    return -0x7fffbffb;
}


void FUN_1402a5c90(longlong *param_1) {
    longlong *plVar1;
    longlong lVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    longlong *plVar5;
    longlong lVar6;

    uVar4 = 0;
    if (param_1[1] != 0) {
        lVar6 = 0;
        do {
            uVar3 = 0;
            plVar5 = (longlong * )(*param_1 + lVar6);
            if (plVar5[1] != 0) {
                do {
                    plVar1 = *(longlong * *)(*plVar5 + uVar3 * 8);
                    if (plVar1 != (longlong *) 0x0) {
                        (**(code * *)(*plVar1 + 0x10))();
                    }
                    uVar3 = uVar3 + 1;
                } while (uVar3 < (ulonglong) plVar5[1]);
            }
            lVar2 = *plVar5;
            if (lVar2 != 0) {
                (**(code * *)(*(longlong * )(lVar2 + -0x10) + 8))(lVar2 + -0x10);
            }
            uVar4 = uVar4 + 1;
            lVar6 = lVar6 + 0x10;
        } while (uVar4 < (ulonglong) param_1[1]);
    }
    lVar6 = *param_1;
    if (lVar6 == 0) {
        return;
    }
    // WARNING: Could not recover jumptable at 0x0001402a5d38. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(*(longlong * )(lVar6 + -0x10) + 8))(lVar6 + -0x10);
    return;
}


void FUN_1402a5d50(longlong *param_1, ulonglong param_2) {
    longlong *plVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    longlong lVar8;
    longlong *plVar9;

    if (param_2 < (ulonglong) param_1[1]) {
        if ((ulonglong) param_1[1] <= param_2) {
            param_1[1] = param_2;
            return;
        }
        lVar8 = param_2 << 4;
        uVar7 = param_2;
        do {
            plVar9 = (longlong * )(*param_1 + lVar8);
            uVar6 = 0;
            if (plVar9[1] != 0) {
                do {
                    plVar1 = *(longlong * *)(*plVar9 + uVar6 * 8);
                    if (plVar1 != (longlong *) 0x0) {
                        (**(code * *)(*plVar1 + 0x10))();
                    }
                    uVar6 = uVar6 + 1;
                } while (uVar6 < (ulonglong) plVar9[1]);
            }
            lVar2 = *plVar9;
            if (lVar2 != 0) {
                (**(code * *)(*(longlong * )(lVar2 + -0x10) + 8))(lVar2 + -0x10);
            }
            uVar7 = uVar7 + 1;
            lVar8 = lVar8 + 0x10;
        } while (uVar7 < (ulonglong) param_1[1]);
    } else {
        puVar3 = (undefined8 *) FUN_14018db00(*param_1, param_2, 0x10);
        uVar7 = param_1[1];
        if (uVar7 < param_2) {
            puVar5 = puVar3 + uVar7 * 2;
            lVar8 = param_2 - uVar7;
            do {
                if (puVar5 != (undefined8 *) 0x0) {
                    puVar5[1] = 0;
                    *puVar5 = 0;
                }
                puVar5 = puVar5 + 2;
                lVar8 = lVar8 + -1;
            } while (lVar8 != 0);
        }
        if ((undefined8 * ) * param_1 != puVar3) {
            if (param_1[1] != 0) {
                uVar7 = 0;
                puVar5 = puVar3;
                do {
                    if (puVar5 != (undefined8 *) 0x0) {
                        puVar4 = (undefined8 * )((longlong) puVar5 + *param_1 + -(longlong) puVar3);
                        puVar5[1] = puVar4[1];
                        *puVar5 = *puVar4;
                        puVar4[1] = 0;
                        *puVar4 = 0;
                    }
                    plVar9 = (longlong * )((longlong) puVar5 + *param_1 + -(longlong) puVar3);
                    uVar6 = 0;
                    if (plVar9[1] != 0) {
                        do {
                            plVar1 = *(longlong * *)(*plVar9 + uVar6 * 8);
                            if (plVar1 != (longlong *) 0x0) {
                                (**(code * *)(*plVar1 + 0x10))();
                            }
                            uVar6 = uVar6 + 1;
                        } while (uVar6 < (ulonglong) plVar9[1]);
                    }
                    lVar8 = *plVar9;
                    if (lVar8 != 0) {
                        (**(code * *)(*(longlong * )(lVar8 + -0x10) + 8))(lVar8 + -0x10);
                    }
                    uVar7 = uVar7 + 1;
                    puVar5 = puVar5 + 2;
                } while (uVar7 < (ulonglong) param_1[1]);
            }
            lVar8 = *param_1;
            if (lVar8 != 0) {
                (**(code * *)(*(longlong * )(lVar8 + -0x10) + 8))(lVar8 + -0x10);
            }
            *param_1 = (longlong) puVar3;
        }
    }
    param_1[1] = param_2;
    return;
}


void FUN_1402a5f00(longlong *param_1) {
    longlong *plVar1;
    longlong lVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    longlong *plVar5;
    longlong lVar6;

    uVar4 = 0;
    if (param_1[1] != 0) {
        lVar6 = 0;
        do {
            uVar3 = 0;
            plVar5 = (longlong * )(*param_1 + lVar6);
            if (plVar5[1] != 0) {
                do {
                    plVar1 = *(longlong * *)(*plVar5 + uVar3 * 8);
                    if (plVar1 != (longlong *) 0x0) {
                        (**(code * *)(*plVar1 + 0x10))();
                    }
                    uVar3 = uVar3 + 1;
                } while (uVar3 < (ulonglong) plVar5[1]);
            }
            lVar2 = *plVar5;
            if (lVar2 != 0) {
                (**(code * *)(*(longlong * )(lVar2 + -0x10) + 8))(lVar2 + -0x10);
            }
            uVar4 = uVar4 + 1;
            lVar6 = lVar6 + 0x10;
        } while (uVar4 < (ulonglong) param_1[1]);
        param_1[1] = 0;
        return;
    }
    param_1[1] = 0;
    return;
}


undefined8 *FUN_1402a5fb0(undefined8 *param_1, undefined8 param_2) {
    int iVar1;

    *param_1 = &PTR_LAB_140b61e20;
    param_1[0x11] = 0;
    param_1[0x10] = 0;
    param_1[0x13] = 0;
    param_1[0x12] = 0;
    param_1[0x15] = 0;
    param_1[0x14] = 0;
    param_1[0x17] = 0;
    param_1[0x16] = 0;
    param_1[0x19] = 0;
    param_1[0x18] = 0;
    param_1[0x1b] = 0;
    param_1[0x1a] = 0;
    param_1[0x1d] = 0;
    param_1[0x1c] = 0;
    param_1[0x1f] = 0;
    param_1[0x1e] = 0;
    param_1[0x21] = 0;
    param_1[0x20] = 0;
    param_1[0x23] = 0;
    param_1[0x22] = 0;
    param_1[0x25] = 0;
    param_1[0x24] = 0;
    param_1[0x27] = 0;
    param_1[0x26] = 0;
    param_1[0x29] = 0;
    param_1[0x28] = 0;
    param_1[0x2a] = 0;
    param_1[0x2d] = 0;
    param_1[0x2c] = 0;
    param_1[0x2f] = 0;
    param_1[0x2e] = 0;
    param_1[0x31] = 0;
    param_1[0x30] = 0;
    param_1[0x33] = 0;
    param_1[0x32] = 0;
    param_1[0x35] = 0;
    param_1[0x34] = 0;
    param_1[0x37] = 0;
    param_1[0x36] = 0;
    param_1[0x43] = 0;
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    param_1[0x46] = 0;
    param_1[0x41] = 0;
    *(undefined4 * )(param_1 + 0x42) = 0;
    param_1[0x47] = 0;
    param_1[0x48] = 0;
    param_1[2] = param_2;
    *(undefined4 * )(param_1 + 1) = 1;
    param_1[9] = 0;
    *(undefined4 * )(param_1 + 0xb) = 0;
    *(undefined4 * )((longlong) param_1 + 0x5c) = 0x8000000a;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *(undefined4 * )(param_1 + 0x2b) = 0;
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    *(undefined4 * )(param_1 + 0x3e) = 0;
    iVar1 = *(int *) (param_1[2] + 0xf0);
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    *(int *) ((longlong) param_1 + 500) = iVar1 + -1;
    return param_1;
}


void FUN_1402a61a0(undefined8 *param_1) {
    longlong *plVar1;
    longlong lVar2;
    ulonglong *puVar3;
    longlong *plVar4;
    int iVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong **ppuVar8;
    undefined8 *puVar9;
    longlong *plVar10;
    int iVar11;
    int iVar12;
    undefined8 local_res8;
    undefined **local_68;
    undefined8 local_60;
    LPVOID local_58;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined8 local_30;

    *param_1 = &PTR_LAB_140b61e20;
    if ((longlong *) param_1[0x40] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x40] + 8))();
        param_1[0x40] = 0;
    }
    FUN_14018b900(param_1[0x3f]);
    if (param_1[0x47] != 0) {
        if (param_1[9] != 0) {
            lVar2 = param_1[2];
            local_48 = (undefined **)
                    CONCAT44(*(undefined4 * )((longlong) param_1 + 0x34), *(undefined4 * )(param_1 + 5));
            local_40 = param_1[7];
            local_30 = param_1[9];
            local_38 = (LPVOID) CONCAT44(*(undefined4 * )(param_1 + 10), *(undefined4 * )(param_1 + 8));
            uVar6 = (**(code * *)(lVar2 + 0x1b80))(&local_48);
            uVar7 = uVar6 % *(ulonglong * )(lVar2 + 0x1b70);
            ppuVar8 = (ulonglong * *)(*(longlong * )(lVar2 + 0x1b78) + uVar7 * 8);
            puVar3 = *(ulonglong * *)(*(longlong * )(lVar2 + 0x1b78) + uVar7 * 8);
            while (puVar3 != (ulonglong *) 0x0) {
                if ((uVar6 == **ppuVar8) &&
                    (iVar5 = (**(code * *)(lVar2 + 0x1b88))(&local_48, *ppuVar8 + 2), iVar5 != 0)) {
                    puVar3 = *ppuVar8;
                    *ppuVar8 = (ulonglong *) puVar3[1];
                    FUN_14018b900(puVar3, 0);
                    *(longlong * )(lVar2 + 0x1b68) = *(longlong * )(lVar2 + 0x1b68) + -1;
                    goto LAB_1402a6321;
                }
                ppuVar8 = (ulonglong * *)(*ppuVar8 + 1);
                puVar3 = *ppuVar8;
            }
            local_60 = 0;
            local_68 = &PTR_LAB_140b5e648;
            local_58 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_68);
            local_48 = local_68;
            local_40 = local_60;
            local_res8 = 0x141de6540;
            local_38 = local_58;
            iVar5 = FUN_1401971e0(&DAT_140c8a514, 0xe, &local_res8, param_1[9], &local_48);
            local_68 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720, local_58);
            if (iVar5 != 0) {
                DebugBreak();
            }
        }
        LAB_1402a6321:
        if ((undefined8 *) param_1[0x47] != (undefined8 *) 0x0) {
            *(undefined8 *) param_1[0x47] = param_1[0x48];
        }
        if (param_1[0x48] != 0) {
            *(undefined8 * )(param_1[0x48] + 0x238) = param_1[0x47];
        }
        param_1[0x47] = 0;
        param_1[0x48] = 0;
    }
    FUN_1402a6900(param_1, 0);
    FUN_14018b900(param_1[9], 0);
    if ((undefined8 *) param_1[0x47] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x47] = param_1[0x48];
    }
    if (param_1[0x48] != 0) {
        *(undefined8 * )(param_1[0x48] + 0x238) = param_1[0x47];
    }
    param_1[0x47] = 0;
    param_1[0x48] = 0;
    if ((undefined8 *) param_1[0x45] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x45] = param_1[0x46];
    }
    if (param_1[0x46] != 0) {
        *(undefined8 * )(param_1[0x46] + 0x20) = param_1[0x45];
    }
    param_1[0x45] = 0;
    param_1[0x46] = 0;
    if ((undefined8 *) param_1[0x43] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x43] = param_1[0x44];
    }
    if (param_1[0x44] != 0) {
        *(undefined8 * )(param_1[0x44] + 0x10) = param_1[0x43];
    }
    iVar12 = 5;
    param_1[0x43] = 0;
    param_1[0x44] = 0;
    iVar11 = 5;
    iVar5 = 5;
    puVar9 = param_1 + 0x38;
    do {
        lVar2 = puVar9[-2];
        puVar9 = puVar9 + -2;
        if (lVar2 != 0) {
            (**(code * *)(*(longlong * )(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    if ((longlong *) param_1[0x2a] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x2a] + 8))();
    }
    FUN_1402a2f90(param_1 + 0x28);
    plVar10 = param_1 + 0x28;
    do {
        plVar1 = plVar10 + -2;
        uVar6 = 0;
        if (plVar10[-1] != 0) {
            do {
                plVar4 = *(longlong * *)(*plVar1 + uVar6 * 8);
                if (plVar4 != (longlong *) 0x0) {
                    (**(code * *)(*plVar4 + 0x10))();
                }
                uVar6 = uVar6 + 1;
            } while (uVar6 < (ulonglong) plVar10[-1]);
        }
        lVar2 = *plVar1;
        if (lVar2 != 0) {
            (**(code * *)(*(longlong * )(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        iVar11 = iVar11 + -1;
        plVar10 = plVar1;
    } while (-1 < iVar11);
    plVar10 = param_1 + 0x1c;
    do {
        plVar1 = plVar10 + -2;
        uVar6 = 0;
        if (plVar10[-1] != 0) {
            do {
                plVar4 = *(longlong * *)(*plVar1 + uVar6 * 8);
                if (plVar4 != (longlong *) 0x0) {
                    (**(code * *)(*plVar4 + 0x10))();
                }
                uVar6 = uVar6 + 1;
            } while (uVar6 < (ulonglong) plVar10[-1]);
        }
        lVar2 = *plVar1;
        if (lVar2 != 0) {
            (**(code * *)(*(longlong * )(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        iVar12 = iVar12 + -1;
        plVar10 = plVar1;
    } while (-1 < iVar12);
    return;
}


undefined8
FUN_1402a6550(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4,
              undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8) {
    longlong *plVar1;
    undefined auVar2[16];
    undefined4 uVar3;
    undefined8 uVar4;
    longlong *plVar5;

    *(undefined8 * )(param_1 + 0x18) = 0;
    *(undefined8 * )(param_1 + 0x20) = 0;
    *(undefined8 * )(param_1 + 0x28) = 0;
    *(undefined8 * )(param_1 + 0x30) = 0;
    *(undefined8 * )(param_1 + 0x38) = 0;
    *(undefined8 * )(param_1 + 0x40) = 0;
    *(undefined8 * )(param_1 + 0x48) = 0;
    *(undefined8 * )(param_1 + 0x50) = 0;
    *(undefined4 * )(param_1 + 0x1c) = param_2;
    *(undefined4 * )(param_1 + 0x20) = param_2;
    *(undefined4 * )(param_1 + 0x34) = param_5;
    *(undefined4 * )(param_1 + 0x18) = 2;
    *(undefined4 * )(param_1 + 0x38) = param_6;
    *(undefined4 * )(param_1 + 0x24) = 1;
    *(undefined4 * )(param_1 + 0x3c) = param_7;
    *(undefined4 * )(param_1 + 0x28) = 0;
    *(undefined8 * )(param_1 + 0x48) = 0;
    *(undefined4 * )(param_1 + 0x40) = param_8;
    *(undefined4 * )(param_1 + 0x2c) = param_3;
    *(undefined4 * )(param_1 + 0x30) = param_4;
    uVar4 = FUN_140263970(param_1 + 0x18, *(longlong * )(param_1 + 0x10) + 0x88);
    if (-1 < (int) uVar4) {
        uVar3 = FUN_140263e70();
        *(undefined4 * )(param_1 + 0x1f0) = uVar3;
        if ((*(int *) (param_1 + 0x34) - 3U & 0xfffffffd) == 0) {
            auVar2 = ZEXT816(4) * ZEXT416((uint)(*(int *) (param_1 + 0x2c) * 6));
            uVar4 = SUB168(auVar2, 0);
            if (SUB168(auVar2 >> 0x40, 0) != 0) {
                uVar4 = 0xffffffffffffffff;
            }
            uVar4 = FUN_14018b280(uVar4, 0);
            *(undefined8 * )(param_1 + 0x1f8) = uVar4;
        }
        uVar4 = FUN_1402a6900(param_1, 2);
        if (-1 < (int) uVar4) {
            plVar5 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x1ad8);
            if (*(longlong * )(param_1 + 0x238) == 0) {
                *(longlong * *)(param_1 + 0x238) = plVar5;
                plVar1 = (longlong * )(param_1 + 0x240);
                *plVar1 = *plVar5;
                *plVar5 = param_1;
                if (*plVar1 != 0) {
                    *(longlong * *)(*plVar1 + 0x238) = plVar1;
                }
            }
            uVar4 = 0;
        }
    }
    return uVar4;
}



// WARNING: Could not reconcile some variable overlaps

undefined8
FUN_1402a6680(ulonglong param_1, undefined8 param_2, undefined4 param_3, uint param_4,
              undefined4 param_5, undefined4 param_6, undefined4 param_7) {
    ulonglong **ppuVar1;
    longlong lVar2;
    int iVar3;
    undefined8 uVar4;
    ulonglong uVar5;
    ulonglong *puVar6;
    ulonglong *puVar7;
    longlong *plVar8;
    undefined8 local_68;
    undefined **local_60;
    undefined8 local_58;
    LPVOID local_50;
    code *local_48;
    undefined8 local_40;
    undefined8 local_38;
    undefined **local_28;
    ulonglong local_20;
    LPVOID local_18;
    ulonglong local_10;

    if (param_4 < 3) {
        *(undefined8 * )(param_1 + 0x18) = 0;
        *(undefined8 * )(param_1 + 0x20) = 0;
        *(undefined8 * )(param_1 + 0x28) = 0;
        *(undefined8 * )(param_1 + 0x30) = 0;
        *(undefined8 * )(param_1 + 0x38) = 0;
        *(undefined8 * )(param_1 + 0x40) = 0;
        *(undefined8 * )(param_1 + 0x48) = 0;
        *(undefined8 * )(param_1 + 0x50) = 0;
        *(undefined4 * )(param_1 + 0x38) = param_5;
        *(undefined4 * )(param_1 + 0x18) = 2;
        *(undefined4 * )(param_1 + 0x3c) = param_6;
        *(undefined4 * )(param_1 + 0x28) = param_3;
        *(undefined4 * )(param_1 + 0x40) = param_7;
        *(uint * )(param_1 + 0x34) = param_4;
        uVar4 = FUN_14018e9c0(param_2);
        *(undefined8 * )(param_1 + 0x48) = uVar4;
        uVar4 = FUN_1402a6900(param_1);
        if (-1 < (int) uVar4) {
            lVar2 = *(longlong * )(param_1 + 0x10);
            plVar8 = (longlong * )(lVar2 + 0x1b68);
            local_28 = (undefined **)
                    CONCAT44(*(undefined4 * )(param_1 + 0x34), *(undefined4 * )(param_1 + 0x28));
            local_20 = *(ulonglong * )(param_1 + 0x38);
            local_10 = *(ulonglong * )(param_1 + 0x48);
            local_18 = (LPVOID) CONCAT44(*(undefined4 * )(param_1 + 0x50), *(undefined4 * )(param_1 + 0x40));
            if (*plVar8 == *(longlong * )(lVar2 + 0x1b70)) {
                FUN_1400290d0(plVar8);
            }
            uVar5 = (**(code * *)(lVar2 + 0x1b80))(&local_28);
            ppuVar1 = (ulonglong * *)
                    (*(longlong * )(lVar2 + 0x1b78) + (uVar5 % *(ulonglong * )(lVar2 + 0x1b70)) * 8);
            puVar6 = (ulonglong *) FUN_14018b280(0x38);
            puVar7 = (ulonglong *) 0x0;
            if (puVar6 != (ulonglong *) 0x0) {
                puVar7 = *ppuVar1;
                *puVar6 = uVar5;
                puVar6[1] = (ulonglong) puVar7;
                puVar6[2] = (ulonglong) local_28;
                puVar6[3] = local_20;
                puVar6[4] = (ulonglong) local_18;
                puVar6[6] = param_1;
                puVar6[5] = local_10;
                puVar7 = puVar6;
            }
            *ppuVar1 = puVar7;
            *plVar8 = *plVar8 + 1;
            puVar7 = (ulonglong * )(*(longlong * )(param_1 + 0x10) + 0x1ad8);
            if (*(longlong * )(param_1 + 0x238) == 0) {
                *(ulonglong * *)(param_1 + 0x238) = puVar7;
                puVar6 = (ulonglong * )(param_1 + 0x240);
                *puVar6 = *puVar7;
                *puVar7 = param_1;
                if (*puVar6 != 0) {
                    *(ulonglong * *)(*puVar6 + 0x238) = puVar6;
                }
            }
            local_60 = *(undefined * **)(param_1 + 0x48);
            local_58 = (ulonglong) local_58._4_4_ << 0x20;
            local_40 = 0;
            local_38 = 0;
            local_48 = FUN_1402a70c0;
            local_50 = (LPVOID) param_1;
            FUN_1401b6bf0(puVar7, &local_60, param_1 + 0x200);
            uVar4 = 0;
        }
    } else {
        local_60 = &PTR_LAB_140b5e648;
        local_58 = 0;
        local_50 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_60);
        local_28 = local_60;
        local_68 = 0x141de6490;
        local_18 = local_50;
        local_20 = local_58;
        iVar3 = FUN_1401971e0(&DAT_140c8a510, 0xe, &local_68, &local_28);
        local_60 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_50);
        if (iVar3 != 0) {
            DebugBreak();
        }
        uVar4 = 0x80004005;
    }
    return uVar4;
}


void FUN_1402a6900(longlong param_1, int param_2) {
    longlong *plVar1;
    ulonglong uVar2;
    int iVar3;
    int *piVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    longlong *plVar7;
    ulonglong *puVar8;
    IMAGE_DOS_HEADER *pIVar9;
    longlong lVar10;
    longlong lVar11;
    longlong lVar12;
    undefined auStack168[32];
    undefined4 local_88;
    undefined4 local_80;
    undefined4 local_78;
    longlong local_70;
    undefined8 local_68;
    undefined4 local_60;
    undefined4 local_5c;
    undefined4 local_58;
    undefined4 local_54;
    undefined4 local_50;
    undefined8 local_4c;
    undefined4 local_44;
    undefined4 local_40;
    undefined4 local_3c;
    uint local_38;
    ulonglong local_30;

    local_30 = DAT_140c0f7b0 ^ (ulonglong) auStack168;
    if (*(int *) (param_1 + 0x58) < 1) {
        if (param_2 < 1) {
            if (0 < *(int *) (param_1 + 0x58)) goto LAB_1402a6b98;
        } else {
            uVar6 = 0;
            if (*(longlong * )(param_1 + 0x48) == 0) {
                if (*(int *) (param_1 + 0x30) != 0x18) {
                    local_60 = *(undefined4 * )(param_1 + 0x1c);
                    pIVar9 = &IMAGE_DOS_HEADER_140000000;
                    local_5c = *(undefined4 * )(param_1 + 0x20);
                    lVar11 = (longlong) * (int *) (param_1 + 0x34) * 4;
                    local_58 = *(undefined4 * )(param_1 + 0x2c);
                    local_50 = (&DAT_140ae8120)[*(int *) (param_1 + 0x30)];
                    local_54 = 6;
                    local_44 = *(undefined4 * )(&DAT_140ae7eb0 + lVar11);
                    local_4c = 1;
                    local_40 = FUN_14027a160();
                    local_3c = *(undefined4 * )(pIVar9[0x15cfd].e_program + lVar11 + 0x20);
                    local_38 = (*(uint * )(param_1 + 0x3c) & 0x80 | 0x200) >> 7;
                    iVar3 = (**(code * *)(**(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x18c0) + 0x28))();
                    if (iVar3 < 0) {
                        local_68 = 0x141de5d88;
                        FUN_1401a3130(0xe, 2, &local_68, iVar3);
                        *(int *) (param_1 + 0x5c) = iVar3;
                        goto LAB_1402a6d40;
                    }
                    if (*(int *) (param_1 + 0x34) - 4U < 2) {
                        FUN_140279fa0();
                    }
                }
                if ((*(longlong * )(param_1 + 0x1f8) != 0) && (*(int *) (param_1 + 0x2c) != 0)) {
                    do {
                        iVar3 = (int) uVar6;
                        *(int *) (*(longlong * )(param_1 + 0x1f8) + uVar6 * 4) =
                                *(int *) (*(longlong * )(param_1 + 0x10) + 0xf0) + -1;
                        *(int *) (*(longlong * )(param_1 + 0x1f8) +
                                  (ulonglong)(uint)(*(int *) (param_1 + 0x2c) + iVar3) * 4) =
                                *(int *) (*(longlong * )(param_1 + 0x10) + 0xf0) + -1;
                        *(int *) (*(longlong * )(param_1 + 0x1f8) +
                                  (ulonglong)(uint)(iVar3 + *(int *) (param_1 + 0x2c) * 2) * 4) =
                                *(int *) (*(longlong * )(param_1 + 0x10) + 0xf0) + -1;
                        *(int *) (*(longlong * )(param_1 + 0x1f8) +
                                  (ulonglong)(uint)(iVar3 + *(int *) (param_1 + 0x2c) * 3) * 4) =
                                *(int *) (*(longlong * )(param_1 + 0x10) + 0xf0) + -1;
                        *(int *) (*(longlong * )(param_1 + 0x1f8) +
                                  (ulonglong)(uint)(iVar3 + *(int *) (param_1 + 0x2c) * 4) * 4) =
                                *(int *) (*(longlong * )(param_1 + 0x10) + 0xf0) + -1;
                        uVar6 = (ulonglong)(iVar3 + 1U);
                        *(int *) (*(longlong * )(param_1 + 0x1f8) +
                                  (ulonglong)(uint)(iVar3 + *(int *) (param_1 + 0x2c) * 5) * 4) =
                                *(int *) (*(longlong * )(param_1 + 0x10) + 0xf0) + -1;
                    } while (iVar3 + 1U < *(uint * )(param_1 + 0x2c));
                }
                piVar4 = (int *) (*(longlong * )(param_1 + 0x10) + 0x2d4 +
                                  (longlong) * (int *) (param_1 + 0x34) * 0x30);
                LOCK();
                *piVar4 = *piVar4 + 1;
                LOCK();
                piVar4[1] = piVar4[1] + *(int *) (param_1 + 0x1f0);
                LOCK();
                piVar4[2] = piVar4[2] + 1;
                LOCK();
                piVar4[3] = piVar4[3] + *(int *) (param_1 + 0x1f0);
                *(undefined4 * )(param_1 + 0x5c) = 0;
            } else {
                local_70 = param_1 + 0x60;
                local_80 = *(undefined4 * )(param_1 + 0x3c);
                local_78 = 0;
                local_88 = *(undefined4 * )(param_1 + 0x34);
                iVar3 = FUN_140279ed0(*(undefined8 * )(param_1 + 0x10), 2, *(longlong * )(param_1 + 0x48),
                                      *(undefined4 * )(param_1 + 0x28));
                if (iVar3 < 0) {
                    *(int *) (param_1 + 0x5c) = iVar3;
                    goto LAB_1402a6d40;
                }
            }
        }
    } else {
        LAB_1402a6b98:
        if (param_2 < 1) {
            if (*(longlong * )(param_1 + 0x70) != 0) {
                piVar4 = (int *) (*(longlong * )(param_1 + 0x10) + 0x2d4 +
                                  (longlong) * (int *) (param_1 + 0x34) * 0x30);
                LOCK();
                *piVar4 = *piVar4 + -1;
                LOCK();
                piVar4[1] = piVar4[1] - *(int *) (param_1 + 0x1f0);
                LOCK();
                piVar4[4] = piVar4[4] + 1;
                LOCK();
                piVar4[5] = piVar4[5] + *(int *) (param_1 + 0x1f0);
            }
            lVar12 = 6;
            plVar7 = (longlong * )(param_1 + 0xe0);
            lVar11 = param_1 + 0x80;
            lVar10 = 6;
            do {
                FUN_140275940(lVar11);
                uVar6 = 0;
                if (plVar7[1] != 0) {
                    do {
                        plVar1 = *(longlong * *)(*plVar7 + uVar6 * 8);
                        if (plVar1 != (longlong *) 0x0) {
                            (**(code * *)(*plVar1 + 0x10))();
                        }
                        uVar6 = uVar6 + 1;
                    } while (uVar6 < (ulonglong) plVar7[1]);
                }
                plVar7[1] = 0;
                plVar7 = plVar7 + 2;
                lVar11 = lVar11 + 0x10;
                lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
            FUN_1402a3110(param_1 + 0x140);
            if (*(longlong * *)(param_1 + 0x150) != (longlong *) 0x0) {
                (**(code * *)(**(longlong * *)(param_1 + 0x150) + 8))();
                *(undefined8 * )(param_1 + 0x150) = 0;
            }
            if (*(longlong * *)(param_1 + 0x70) != (longlong *) 0x0) {
                (**(code * *)(**(longlong * *)(param_1 + 0x70) + 0x10))();
                *(undefined8 * )(param_1 + 0x70) = 0;
            }
            if (*(longlong * *)(param_1 + 0x78) != (longlong *) 0x0) {
                (**(code * *)(**(longlong * *)(param_1 + 0x78) + 0x10))();
                *(undefined8 * )(param_1 + 0x78) = 0;
            }
            if (*(longlong * *)(param_1 + 0x60) != (longlong *) 0x0) {
                (**(code * *)(**(longlong * *)(param_1 + 0x60) + 8))();
                *(undefined8 * )(param_1 + 0x60) = 0;
            }
            *(undefined4 * )(param_1 + 0x5c) = 0x8000000a;
            *(undefined4 * )(param_1 + 0x158) = 0;
            *(undefined8 * )(param_1 + 0x1c0) = 0;
            *(undefined8 * )(param_1 + 0x1c8) = 0;
            *(undefined8 * )(param_1 + 0x1d0) = 0;
            *(undefined8 * )(param_1 + 0x1d8) = 0;
            *(undefined8 * )(param_1 + 0x1e0) = 0;
            puVar8 = (ulonglong * )(param_1 + 0x168);
            *(undefined8 * )(param_1 + 0x1e8) = 0;
            do {
                uVar6 = 0;
                if (*puVar8 != 0) {
                    do {
                        uVar2 = puVar8[-1];
                        *(undefined4 * )(uVar2 + uVar6 * 0x18) = 0;
                        *(undefined8 * )(uVar2 + 8 + uVar6 * 0x18) = 0;
                        uVar5 = (ulonglong)((int) uVar6 + 1);
                        *(undefined8 * )(uVar2 + 0x10 + uVar6 * 0x18) = 0;
                        uVar6 = uVar5;
                    } while (uVar5 < *puVar8);
                }
                puVar8 = puVar8 + 2;
                lVar12 = lVar12 + -1;
            } while (lVar12 != 0);
        }
    }
    *(int *) (param_1 + 0x58) = param_2;
    LAB_1402a6d40:
    FUN_1407db4f0(local_30 ^ (ulonglong) auStack168);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1402a6d70(longlong param_1) {
    longlong *plVar1;
    int iVar2;
    int iVar3;
    undefined4 uVar4;
    int *piVar5;
    undefined auStack392[32];
    undefined ***local_168;
    undefined4 *local_160;
    undefined ***local_158;
    undefined **local_148;
    undefined8 local_140;
    LPVOID local_138;
    undefined **local_130;
    wchar_t *local_128;
    LPVOID local_120;
    undefined8 local_118;
    undefined **local_110;
    undefined8 uStack264;
    undefined8 local_100;
    int iStack248;
    undefined4 uStack244;
    undefined8 local_f0;
    undefined **local_e8;
    undefined8 local_e0;
    LPVOID local_d8;
    undefined **local_c8;
    wchar_t *local_c0;
    LPVOID local_b8;
    undefined8 local_b0;
    undefined4 local_a8[4];
    undefined4 local_98[4];
    undefined4 local_88[4];
    undefined4 local_78;
    undefined4 uStack116;
    undefined4 uStack112;
    undefined4 uStack108;
    undefined4 local_68;
    undefined4 uStack100;
    int iStack96;
    undefined4 uStack92;
    undefined4 local_58;
    undefined4 local_54;
    undefined4 local_50;
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong) auStack392;
    plVar1 = *(longlong * *)(param_1 + 0x60);
    local_a8[0] = 0xffffffff;
    (**(code * *)(*plVar1 + 0x20))(plVar1, local_a8);
    iVar3 = *(int *) (plVar1 + 6);
    if (-1 < iVar3) {
        plVar1 = *(longlong * *)(param_1 + 0x60);
        local_88[0] = 0xffffffff;
        (**(code * *)(*plVar1 + 0x20))(plVar1, local_88);
        if (plVar1[8] == 0) {
            iVar3 = -0x7fffbffb;
        } else {
            *(longlong * )(param_1 + 0x70) = plVar1[8];
            (**(code * *)(*(longlong *) plVar1[8] + 8))();
            (**(code * *)(**(longlong * *)(param_1 + 0x70) + 0x50))
                    (*(longlong * *)(param_1 + 0x70), &local_58);
            plVar1 = *(longlong * *)(param_1 + 0x60);
            *(undefined4 * )(param_1 + 0x1c) = local_58;
            *(undefined4 * )(param_1 + 0x24) = 1;
            *(undefined4 * )(param_1 + 0x20) = local_54;
            *(undefined4 * )(param_1 + 0x2c) = local_50;
            local_98[0] = 0xffffffff;
            (**(code * *)(*plVar1 + 0x20))(plVar1, local_98);
            *(undefined4 * )(param_1 + 0x30) = *(undefined4 * )(plVar1 + 0xb);
            iVar3 = FUN_140263970(param_1 + 0x18, *(longlong * )(param_1 + 0x10) + 0x88);
            if (-1 < iVar3) {
                uVar4 = FUN_140263e70(param_1 + 0x18);
                *(undefined4 * )(param_1 + 0x1f0) = uVar4;
                piVar5 = (int *) (*(longlong * )(param_1 + 0x10) + 0x2d4 +
                                  (longlong) * (int *) (param_1 + 0x34) * 0x30);
                LOCK();
                *piVar5 = *piVar5 + 1;
                LOCK();
                piVar5[1] = piVar5[1] + *(int *) (param_1 + 0x1f0);
                LOCK();
                piVar5[2] = piVar5[2] + 1;
                LOCK();
                piVar5[3] = piVar5[3] + *(int *) (param_1 + 0x1f0);
                LOCK();
                piVar5[8] = piVar5[8] + 1;
                LOCK();
                piVar5[9] = piVar5[9] + *(int *) (param_1 + 0x1f0);
                *(undefined4 * )(param_1 + 0x68) = *(undefined4 * )(*(longlong * )(param_1 + 0x60) + 0x60);
                uVar4 = *(undefined4 * )(*(longlong * )(param_1 + 0x60) + 100);
                *(undefined4 * )(param_1 + 0x5c) = 0;
                *(undefined4 * )(param_1 + 0x6c) = uVar4;
                *(undefined4 * )(param_1 + 0x158) = 1;
                goto LAB_1402a6fb1;
            }
        }
    }
    local_148 = &PTR_LAB_140b5e648;
    local_140 = 0;
    local_138 = TlsGetValue(DAT_140c63720);
    TlsSetValue(DAT_140c63720, &local_148);
    local_e8 = local_148;
    local_e0 = local_140;
    local_110 = &PTR_LAB_140b5e648;
    uStack264 = L"Result";
    local_d8 = local_138;
    local_100 = TlsGetValue(DAT_140c63720);
    TlsSetValue(DAT_140c63720, &local_110);
    local_118 = *(undefined8 * )(param_1 + 0x48);
    local_130 = &PTR_LAB_140b5e648;
    local_110 = &PTR_LAB_140b5e640;
    local_68 = (undefined4) local_100;
    uStack100 = local_100._4_4_;
    uStack92 = uStack244;
    local_128 = L"FileName";
    local_78 = 0x40b5e640;
    uStack116 = 1;
    uStack112 = (undefined4) uStack264;
    uStack108 = uStack264._4_4_;
    iStack248 = iVar3;
    iStack96 = iVar3;
    local_120 = TlsGetValue(DAT_140c63720);
    TlsSetValue(DAT_140c63720, &local_130);
    local_c0 = local_128;
    local_130 = &PTR_LAB_140b5e638;
    local_f0 = 0x141de6420;
    local_158 = &local_e8;
    local_c8 = &PTR_LAB_140b5e638;
    local_b8 = local_120;
    local_160 = &local_78;
    local_168 = &local_c8;
    local_b0 = local_118;
    iVar2 = FUN_1401971e0(&DAT_140c8a50c, 0xe, &local_f0, *(undefined8 * )(param_1 + 0x48));
    local_130 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720, local_120);
    local_110 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720, local_100);
    local_148 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720, local_138);
    if (iVar2 != 0) {
        DebugBreak();
    }
    *(int *) (param_1 + 0x5c) = iVar3;
    if (*(longlong * *)(param_1 + 0x70) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x70) + 0x10))();
        *(undefined8 * )(param_1 + 0x70) = 0;
    }
    LAB_1402a6fb1:
    FUN_1407db4f0(local_28 ^ (ulonglong) auStack392);
    return;
}


void FUN_1402a70c0(longlong param_1) {
    ulonglong *puVar1;
    longlong lVar2;
    ulonglong uVar3;
    DWORD DVar4;
    int iVar5;
    HANDLE hObject;
    ulonglong uVar6;

    lVar2 = *(longlong * )(param_1 + 0x10);
    DVar4 = GetCurrentThreadId();
    uVar6 = 0;
    if (*(DWORD * )(lVar2 + 0x18) == DVar4) {
        *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(lVar2 + 0x20);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
            if (uVar3 == 0) {
                *(DWORD * )(lVar2 + 0x18) = DVar4;
                goto LAB_1402a7120;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(lVar2 + 0x18, DVar4);
    }
    LAB_1402a7120:
    iVar5 = FUN_1402a6900(param_1, 0);
    if (-1 < iVar5) {
        FUN_1402a6900(param_1, 2);
    }
    if (*(ulonglong * )(lVar2 + 0x20) < 2) {
        *(undefined4 * )(lVar2 + 0x18) = 0;
        *(undefined8 * )(lVar2 + 0x20) = 0;
        if (*(longlong * )(lVar2 + 0x28) != 0) {
            if (*(longlong * )(lVar2 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar2 + 0x30);
                uVar6 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar6 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar2 + 0x30));
        }
        return;
    }
    *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + -1;
    return;
}


undefined8 FUN_1402a71b0(longlong param_1, int param_2, ulonglong param_3) {
    longlong *plVar1;
    longlong *plVar2;
    undefined4 local_28;
    undefined4 local_24;
    int local_20;
    int local_1c;
    undefined4 local_18;

    param_3 = param_3 & 0xffffffff;
    if (*(longlong * )(param_1 + 0x70) == 0) {
        return 0;
    }
    plVar2 = (longlong * )(((longlong) param_2 + 8) * 0x10 + param_1);
    local_20 = (int) param_3;
    if ((ulonglong) plVar2[1] < param_3 || plVar2[1] == param_3) {
        FUN_140275820(plVar2, local_20 + 1);
    }
    if (*(longlong * )(*plVar2 + param_3 * 8) == 0) {
        local_24 = 5;
        local_18 = 1;
        local_28 = *(undefined4 * )(&DAT_140ae7f90 + (longlong) * (int *) (param_1 + 0x30) * 4);
        plVar1 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x18c0);
        local_1c = param_2;
        (**(code * *)(*plVar1 + 0x48))
                (plVar1, *(undefined8 * )(param_1 + 0x70), &local_28, *plVar2 + param_3 * 8);
    }
    return *(undefined8 * )(*plVar2 + param_3 * 8);
}


undefined8 FUN_1402a7280(longlong param_1, int param_2, ulonglong param_3) {
    longlong *plVar1;
    longlong *plVar2;
    undefined4 local_28;
    undefined8 local_24;
    int local_1c;
    int local_18;
    undefined4 local_14;

    param_3 = param_3 & 0xffffffff;
    if (*(longlong * )(param_1 + 0x70) == 0) {
        return 0;
    }
    plVar2 = (longlong * )(((longlong) param_2 + 0xe) * 0x10 + param_1);
    local_1c = (int) param_3;
    if ((ulonglong) plVar2[1] < param_3 || plVar2[1] == param_3) {
        FUN_140275820(plVar2, local_1c + 1);
    }
    if (*(longlong * )(*plVar2 + param_3 * 8) == 0) {
        local_24 = 4;
        local_14 = 1;
        local_28 = *(undefined4 * )(&DAT_140ae7f90 + (longlong) * (int *) (param_1 + 0x30) * 4);
        plVar1 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x18c0);
        local_18 = param_2;
        (**(code * *)(*plVar1 + 0x50))
                (plVar1, *(undefined8 * )(param_1 + 0x70), &local_28, *plVar2 + param_3 * 8);
    }
    return *(undefined8 * )(*plVar2 + param_3 * 8);
}


undefined8 FUN_1402a7350(longlong param_1, uint param_2) {
    undefined8 *puVar1;
    longlong *plVar2;
    int iVar3;
    undefined8 *puVar4;
    ulonglong uVar5;
    longlong *local_res8;
    undefined4 local_28;
    undefined4 local_24;
    uint local_20;
    undefined4 local_1c;

    uVar5 = (ulonglong) param_2;
    if (*(longlong * )(param_1 + 0x70) != 0) {
        if (*(ulonglong * )(param_1 + 0x148) < uVar5 || *(ulonglong * )(param_1 + 0x148) == uVar5) {
            FUN_1402a2ff0(param_1 + 0x140, param_2 + 1);
        }
        if (*(longlong * )(*(longlong * )(param_1 + 0x140) + uVar5 * 8) == 0) {
            local_24 = 9;
            local_1c = 0xffffffff;
            local_res8 = (longlong *) 0x0;
            local_28 = *(undefined4 * )(&DAT_140ae8190 + (longlong) * (int *) (param_1 + 0x30) * 4);
            plVar2 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x18c0);
            local_20 = param_2;
            iVar3 = (**(code * *)(*plVar2 + 0x38))
                    (plVar2, *(undefined8 * )(param_1 + 0x70), &local_28, &local_res8);
            if ((-1 < iVar3) &&
                (puVar1 = (undefined8 * )(*(longlong * )(param_1 + 0x140) + uVar5 * 8),
                        puVar1 != (undefined8 *) 0x0)) {
                puVar4 = (undefined8 *) FUN_14018b280(0x18);
                if (puVar4 == (undefined8 *) 0x0) {
                    puVar4 = (undefined8 *) 0x0;
                } else {
                    *puVar4 = &PTR_LAB_140b55048;
                    *(undefined4 * )(puVar4 + 1) = 1;
                    *puVar4 = &PTR_LAB_140b61188;
                    puVar4[2] = local_res8;
                    if (local_res8 != (longlong *) 0x0) {
                        (**(code * *)(*local_res8 + 8))();
                    }
                }
                *puVar1 = puVar4;
            }
            if (local_res8 != (longlong *) 0x0) {
                (**(code * *)(*local_res8 + 0x10))();
            }
        }
        return *(undefined8 * )(*(longlong * )(param_1 + 0x140) + uVar5 * 8);
    }
    return 0;
}


void FUN_1402a7490(longlong param_1) {
    longlong *plVar1;
    undefined4 uVar2;
    longlong *plVar3;
    int iVar4;
    undefined8 *puVar5;
    undefined8 uVar6;
    undefined auVar8[16];
    undefined auVar9[16];
    undefined auStack136[32];
    longlong *local_68[2];
    float local_58;
    float fStack84;
    float fStack80;
    float fStack76;
    undefined4 local_48;
    undefined4 local_44;
    undefined4 local_40;
    undefined8 local_3c;
    undefined4 local_34;
    undefined4 local_30;
    float local_2c;
    float fStack40;
    float fStack36;
    float fStack32;
    undefined4 local_1c;
    undefined4 local_18;
    ulonglong local_10;
    undefined auVar7[12];

    local_10 = DAT_140c0f7b0 ^ (ulonglong) auStack136;
    plVar1 = (longlong * )(param_1 + 0x150);
    if (*plVar1 != 0) goto LAB_1402a7635;
    if ((&DAT_140ae64c0)[*(int *) (param_1 + 0x30)] == 0) {
        local_48 = *(undefined4 * )(&DAT_140ae7e20 + (longlong) * (int *) (param_1 + 0x38) * 4);
    } else {
        local_48 = *(undefined4 * )(&DAT_140ae7e40 + (longlong) * (int *) (param_1 + 0x38) * 4);
    }
    uVar2 = *(undefined4 * )(param_1 + 0x40);
    uVar6 = CONCAT44(uVar2, uVar2);
    auVar7 = CONCAT48(uVar2, uVar6);
    auVar8 = CONCAT142(SUB1614(CONCAT133(SUB1613(CONCAT124(SUB1612(CONCAT115(SUB1611(CONCAT106(SUB1610
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
                                                                                                                                                                                                                                    (char) ((uint) uVar2
                                                                                                                                                                                                                                            >>
                                                                                                                                                                                                                                            0x18),
                                                                                                                                                                                                                                    SUB1614(CONCAT412(
                                                                                                                                                                                                                                                    uVar2,
                                                                                                                                                                                                                                                    auVar7),
                                                                                                                                                                                                                                            0))
                                                                                                                                                                                                                                    >> 0x68,
                                                                                                                                                                                                                            0),
                                                                                                                                                                                                                     CONCAT112(
                                                                                                                                                                                                                             (char) ((uint) uVar2
                                                                                                                                                                                                                                     >> 0x10),
                                                                                                                                                                                                                             auVar7))
                                                                                                                                                                                                                     >>
                                                                                                                                                                                                                     0x60,
                                                                                                                                                                                                             0),
                                                                                                                                                                                                    auVar7)
                                                                                                                                                                                                    >> 0x58,
                                                                                                                                                                                            0),
                                                                                                                                                                                     CONCAT110(
                                                                                                                                                                                             (char) ((uint) uVar2
                                                                                                                                                                                                     >> 8),
                                                                                                                                                                                             SUB1210(auVar7,
                                                                                                                                                                                                     0)))
                                                                                                                                                                                     >> 0x50,
                                                                                                                                                                             0),
                                                                                                                                                                      SUB1210(auVar7,
                                                                                                                                                                              0))
                                                                                                                                                                      >> 0x48,
                                                                                                                                                              0),
                                                                                                                                                      CONCAT18(
                                                                                                                                                              (char) uVar2,
                                                                                                                                                              uVar6))
                                                                                                                                                      >> 0x40,
                                                                                                                                              0),
                                                                                                                                       uVar6)
                                                                                                                                       >>
                                                                                                                                       0x38,
                                                                                                                               0) &
                                                                                                                SUB169((undefined[16])
                                                                                                                               0xffffffffffffffff
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
                                                                                                                ((uint7) uVar6
                                                                                                                        >> 0x18)
                                                                                                                        << 0x30)
                                                                                                                >> 0x30,
                                                                                                        0),
                                                                                               (int6) uVar6) >> 0x28,
                                                                                     0) &
                                                                             SUB1611((undefined[16]) 0xffff00ffffffffff
                                                                                             >>
                                                                                             0x28, 0),
                                                                             ((uint5) uVar6 >> 0x10) << 0x20) >>
                                                                                                              0x20, 0),
                                                           uVar2) >> 0x18, 0) &
                                         SUB1613((undefined[16]) 0xffffffff00ffffff >> 0x18, 0),
                                         ((uint3) uVar2 >> 8) << 0x10) >> 0x10, 0), (short) uVar2) &
             (undefined[16]) 0xffffffffffff00ff;
    auVar9 = CONCAT124(SUB1612(CONCAT106((unkuint10)
                                                 SUB148(CONCAT68(SUB146(CONCAT410(SUB144(CONCAT212(SUB162(
                                                                                          auVar8 >> 0x30, 0), SUB1612(auVar8, 0)) >> 0x50, 0),
                                                                                  CONCAT28(SUB162(auVar8 >> 0x20, 0),
                                                                                           SUB168(auVar8, 0)
                                                                                  )) >> 0x40, 0), SUB168(auVar8, 0))
                                                                >> 0x30, 0)
                                         & SUB1610((undefined[16]) 0xffffffffffffffff >> 0x30, 0) &
                                         SUB1610((undefined[16]) 0xffffffffffffffff >> 0x30, 0),
                                         (SUB166(auVar8, 0) >> 0x10) << 0x20) >> 0x20, 0),
                       SUB164(auVar8, 0)) & (undefined[16]) 0xffffffff0000ffff;
    local_44 = *(undefined4 * )(&DAT_140ae7e60 + (ulonglong)(*(uint * )(param_1 + 0x3c) & 3) * 4);
    local_3c = 3;
    local_34 = 0x10;
    local_40 = *(undefined4 * )(&DAT_140ae7e60 + (ulonglong)(*(uint * )(param_1 + 0x3c) >> 2 & 3) * 4);
    local_1c = 0;
    local_58 = (float) SUB164(auVar9 >> 0x40, 0) * 0.003921569;
    fStack84 = (float) SUB164(auVar9 >> 0x20, 0) * 0.003921569;
    fStack80 = (float) (SUB164(auVar8, 0) & 0xffff) * 0.003921569;
    fStack76 = (float) SUB164(auVar9 >> 0x60, 0) * 0.003921569;
    local_18 = 0x7f7fffff;
    local_68[0] = (longlong *) 0x0;
    local_30 = 1;
    if ((&DAT_140ae64c0)[*(int *) (param_1 + 0x30)] != 0) {
        local_30 = 4;
    }
    plVar3 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x18c0);
    local_2c = local_58;
    fStack40 = fStack84;
    fStack36 = fStack80;
    fStack32 = fStack76;
    iVar4 = (**(code * *)(*plVar3 + 0xb8))(plVar3, &local_48, local_68);
    if ((-1 < iVar4) && (plVar1 != (longlong *) 0x0)) {
        puVar5 = (undefined8 *) FUN_14018b280(0x18);
        if (puVar5 == (undefined8 *) 0x0) {
            puVar5 = (undefined8 *) 0x0;
        } else {
            *puVar5 = &PTR_LAB_140b55048;
            *(undefined4 * )(puVar5 + 1) = 1;
            *puVar5 = &PTR_LAB_140b61188;
            puVar5[2] = local_68[0];
            if (local_68[0] != (longlong *) 0x0) {
                (**(code * *)(*local_68[0] + 8))();
                *plVar1 = (longlong) puVar5;
                goto LAB_1402a762a;
            }
        }
        *plVar1 = (longlong) puVar5;
    }
    LAB_1402a762a:
    if (local_68[0] != (longlong *) 0x0) {
        (**(code * *)(*local_68[0] + 0x10))();
    }
    LAB_1402a7635:
    FUN_1407db4f0(local_10 ^ (ulonglong) auStack136);
    return;
}


undefined8 FUN_1402a7890(longlong param_1) {
    undefined8 uVar1;

    if (*(longlong * *)(param_1 + 0x60) != (longlong *) 0x0) {
        uVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x60) + 0x20))();
        if ((int) uVar1 == 0) {
            return uVar1;
        }
        FUN_1402a6d70(param_1);
        if (*(longlong * *)(param_1 + 0x60) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x60) + 8))();
            *(undefined8 * )(param_1 + 0x60) = 0;
        }
    }
    return 1;
}


undefined4 FUN_1402a78e0(longlong *param_1) {
    undefined4 local_18[4];

    local_18[0] = 0xffffffff;
    (**(code * *)(*param_1 + 0x20))(param_1, local_18);
    return *(undefined4 * )(param_1 + 0x2b);
}


void FUN_1402a7910(longlong *param_1) {
    undefined4 local_18[4];

    local_18[0] = 0xffffffff;
    (**(code * *)(*param_1 + 0x20))(param_1, local_18);
    *(undefined4 * )(param_1 + 0x2b) = 0;
    return;
}


int FUN_1402a8db0(longlong *param_1, short *param_2) {
    longlong *plVar1;
    int iVar2;
    int iVar3;
    longlong *local_res10;
    undefined8 local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    if ((param_2 == (short *) 0x0) || (*param_2 == 0)) {
        return -0x7ff8ffa9;
    }
    if (*(int *) ((longlong) param_1 + 0x34) == 1) {
        local_48 = &PTR_LAB_140b5e648;
        local_40 = 0;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_48);
        local_28 = local_48;
        local_res10 = (longlong *) 0x141de68b0;
        local_18 = local_38;
        local_20 = local_40;
        iVar2 = FUN_1401971e0(&DAT_140c8a4ec, 0xe, &local_res10, &local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_38);
        if (iVar2 != 0) {
            DebugBreak();
        }
        return -0x7fffbffb;
    }
    local_48 = (undefined **) CONCAT44(local_48._4_4_, 0xffffffff);
    (**(code * *)(*param_1 + 0x20))(param_1, &local_48);
    if (param_1[0xe] != 0) {
        local_res10 = (longlong *) 0x0;
        iVar2 = FUN_140279e20(param_1[2], param_1[0xe], &local_res10);
        plVar1 = local_res10;
        if ((iVar2 < 0) || (iVar2 = FUN_1402b1de0(local_res10, param_2), iVar3 = 0, iVar2 < 0)) {
            iVar3 = iVar2;
        }
        if (plVar1 != (longlong *) 0x0) {
            (**(code * *)(*plVar1 + 8))(plVar1);
        }
        return iVar3;
    }
    return -0x7fffbffb;
}


int FUN_1402a8f20(longlong param_1, longlong param_2) {
    ulonglong *puVar1;
    ulonglong uVar2;
    int iVar3;
    int iVar4;
    HANDLE hObject;
    undefined4 *local_res10;
    undefined8 local_res18[2];
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    if (param_2 == 0) {
        return -0x7ff8ffa9;
    }
    if (*(int *) (param_1 + 0x34) == 1) {
        local_48 = &PTR_LAB_140b5e648;
        local_40 = 0;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_48);
        local_28 = local_48;
        local_res18[0] = 0x141de6840;
        local_18 = local_38;
        local_20 = local_40;
        iVar3 = FUN_1401971e0(&DAT_140c8a4e0, 0xe, local_res18, &local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_38);
        if (iVar3 != 0) {
            DebugBreak();
        }
    } else if (*(longlong * )(param_1 + 0x70) != 0) {
        FUN_14003d8f0(&local_res10, *(longlong * )(param_1 + 0x10) + 0x18e0);
        iVar4 = (*DAT_140c65798)(*(undefined8 * )(*(longlong * )(param_1 + 0x10) + 0x18d0), 3,
                                 *(undefined8 * )(param_1 + 0x70), param_2, param_2 + 0x30, param_2 + 0x60);
        iVar3 = 0;
        if (iVar4 < 0) {
            iVar3 = iVar4;
        }
        if (1 < *(ulonglong * )(local_res10 + 2)) {
            *(longlong * )(local_res10 + 2) = *(longlong * )(local_res10 + 2) + -1;
            return iVar3;
        }
        *local_res10 = 0;
        *(undefined8 * )(local_res10 + 2) = 0;
        if (*(longlong * )(local_res10 + 4) != 0) {
            if (*(longlong * )(local_res10 + 6) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(local_res10 + 6);
                uVar2 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar2 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar2 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(local_res10 + 6));
        }
        return iVar3;
    }
    return -0x7fffbffb;
}


void FUN_1402a9100(undefined8 *param_1) {
    int iVar1;

    *param_1 = &PTR_FUN_140b61ea8;
    if ((longlong *) param_1[0xc] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0xc] + 8))();
        param_1[0xc] = 0;
    }
    if (param_1[0x13] != 0) {
        if (param_1[4] != 0) {
            FUN_1400b6120(param_1[2] + 0x1b90, param_1 + 4);
        }
        if ((undefined8 *) param_1[0x13] != (undefined8 *) 0x0) {
            *(undefined8 *) param_1[0x13] = param_1[0x14];
        }
        if (param_1[0x14] != 0) {
            *(undefined8 * )(param_1[0x14] + 0x98) = param_1[0x13];
        }
        param_1[0x13] = 0;
        param_1[0x14] = 0;
    }
    if (0 < *(int *) (param_1 + 5)) {
        iVar1 = FUN_1402a9480(param_1);
        if (iVar1 < 0) goto LAB_1402a91a2;
    }
    *(undefined4 * )(param_1 + 5) = 0;
    LAB_1402a91a2:
    FUN_14018b900(param_1[4], 0);
    if ((undefined8 *) param_1[0x13] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x13] = param_1[0x14];
    }
    if (param_1[0x14] != 0) {
        *(undefined8 * )(param_1[0x14] + 0x98) = param_1[0x13];
    }
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    if ((undefined8 *) param_1[0x11] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x11] = param_1[0x12];
    }
    if (param_1[0x12] != 0) {
        *(undefined8 * )(param_1[0x12] + 0x20) = param_1[0x11];
    }
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    if ((undefined8 *) param_1[0xf] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0xf] = param_1[0x10];
    }
    if (param_1[0x10] != 0) {
        *(undefined8 * )(param_1[0x10] + 0x10) = param_1[0xf];
    }
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    if ((longlong *) param_1[8] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[8] + 8))();
    }
    if ((longlong *) param_1[7] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[7] + 8))();
    }
    return;
}


undefined8 FUN_1402a9290(ulonglong param_1, undefined8 param_2) {
    ulonglong **ppuVar1;
    undefined4 uVar2;
    longlong lVar3;
    undefined8 uVar4;
    ulonglong uVar5;
    ulonglong *puVar6;
    ulonglong *puVar7;
    longlong *plVar8;
    undefined8 local_48;
    undefined4 local_40;
    ulonglong local_38;
    code *local_30;
    undefined8 local_28;
    undefined8 local_20;

    puVar7 = (ulonglong *) 0x0;
    uVar2 = *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 0xb0);
    *(undefined4 * )(param_1 + 0x1c) = 0;
    *(undefined4 * )(param_1 + 0x18) = uVar2;
    uVar4 = FUN_14018e9c0(param_2);
    *(undefined8 * )(param_1 + 0x20) = uVar4;
    if ((0 < *(int *) (param_1 + 0x28)) || (uVar4 = FUN_1402a93e0(param_1), -1 < (int) uVar4)) {
        lVar3 = *(longlong * )(param_1 + 0x10);
        plVar8 = (longlong * )(lVar3 + 0x1b90);
        *(undefined4 * )(param_1 + 0x28) = 2;
        if (*plVar8 == *(longlong * )(lVar3 + 0x1b98)) {
            FUN_1400290d0(plVar8);
        }
        uVar5 = (**(code * *)(lVar3 + 0x1ba8))(param_1 + 0x20);
        ppuVar1 = (ulonglong * *)
                (*(longlong * )(lVar3 + 0x1ba0) + (uVar5 % *(ulonglong * )(lVar3 + 0x1b98)) * 8);
        puVar6 = (ulonglong *) FUN_14018b280(0x20);
        if (puVar6 != (ulonglong *) 0x0) {
            puVar7 = *ppuVar1;
            *puVar6 = uVar5;
            puVar6[1] = (ulonglong) puVar7;
            uVar5 = *(ulonglong * )(param_1 + 0x20);
            puVar6[3] = param_1;
            puVar6[2] = uVar5;
            puVar7 = puVar6;
        }
        *ppuVar1 = puVar7;
        *plVar8 = *plVar8 + 1;
        puVar7 = (ulonglong * )(*(longlong * )(param_1 + 0x10) + 0x1ae0);
        if (*(longlong * )(param_1 + 0x98) == 0) {
            *(ulonglong * *)(param_1 + 0x98) = puVar7;
            puVar6 = (ulonglong * )(param_1 + 0xa0);
            *puVar6 = *puVar7;
            *puVar7 = param_1;
            if (*puVar6 != 0) {
                *(ulonglong * *)(*puVar6 + 0x98) = puVar6;
            }
        }
        local_48 = *(undefined8 * )(param_1 + 0x20);
        local_40 = 0;
        local_28 = 0;
        local_20 = 0;
        local_30 = FUN_1402a9970;
        local_38 = param_1;
        FUN_1401b6bf0(puVar7, &local_48, param_1 + 0x60);
        uVar4 = 0;
    }
    return uVar4;
}


undefined4 FUN_1402a93e0(longlong param_1) {
    int iVar1;
    undefined4 uVar2;
    longlong *local_res8;
    undefined4 local_38;
    undefined4 local_34;
    longlong local_30;
    code *local_28;
    undefined8 local_20;
    undefined4 local_18;

    uVar2 = 0;
    local_res8 = (longlong *) 0x0;
    iVar1 = FUN_1401b6de0(param_1, *(undefined8 * )(param_1 + 0x20), param_1 + 0x38, &local_res8, 0);
    if (-1 < iVar1) {
        local_28 = FUN_1402a95e0;
        local_38 = 0xc;
        local_34 = 2;
        local_20 = 0;
        local_18 = 1;
        local_30 = param_1;
        iVar1 = FUN_14019dca0(&local_38, 0, local_res8, param_1 + 0x40);
        if (-1 < iVar1) goto LAB_1402a9462;
    }
    uVar2 = FUN_1402a9770(param_1, iVar1);
    LAB_1402a9462:
    if (local_res8 != (longlong *) 0x0) {
        (**(code * *)(*local_res8 + 8))();
    }
    return uVar2;
}


undefined8 FUN_1402a9480(longlong param_1) {
    longlong lVar1;
    longlong *plVar2;
    ulonglong uVar3;
    uint uVar4;
    ulonglong uVar5;
    undefined4 local_18[4];

    uVar5 = 0;
    if (*(longlong * *)(param_1 + 0x40) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x40) + 0x68))();
        local_18[0] = 0xffffffff;
        (**(code * *)(**(longlong * *)(param_1 + 0x40) + 0x20))(*(longlong * *)(param_1 + 0x40), local_18);
        if (*(longlong * *)(param_1 + 0x40) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x40) + 8))();
            *(undefined8 * )(param_1 + 0x40) = 0;
        }
    }
    if (*(longlong * )(param_1 + 0x48) != 0) {
        lVar1 = *(longlong * )(param_1 + 0x10);
        LOCK();
        *(int *) (lVar1 + 0xf4) = *(int *) (lVar1 + 0xf4) + -1;
        LOCK();
        *(int *) (lVar1 + 0xf8) = *(int *) (lVar1 + 0xf8) - *(int *) (param_1 + 0x2c);
        LOCK();
        *(int *) (lVar1 + 0x104) = *(int *) (lVar1 + 0x104) + 1;
        LOCK();
        *(int *) (lVar1 + 0x108) = *(int *) (lVar1 + 0x108) + *(int *) (param_1 + 0x2c);
        uVar3 = uVar5;
        if (*(int *) (*(longlong * )(param_1 + 0x30) + 8) != 0) {
            do {
                lVar1 = *(longlong * )(param_1 + 0x48);
                plVar2 = *(longlong * *)(lVar1 + uVar3 * 8);
                if (plVar2 != (longlong *) 0x0) {
                    (**(code * *)(*plVar2 + 0x10))();
                    *(undefined8 * )(lVar1 + uVar3 * 8) = 0;
                }
                uVar4 = (int) uVar3 + 1;
                uVar3 = (ulonglong) uVar4;
            } while (uVar4 < *(uint * )(*(longlong * )(param_1 + 0x30) + 8));
        }
        FUN_14018b900(*(undefined8 * )(param_1 + 0x48), 0);
        *(undefined8 * )(param_1 + 0x48) = 0;
    }
    if (*(longlong * )(param_1 + 0x50) != 0) {
        uVar4 = *(int *) (*(longlong * )(param_1 + 0x30) + 0x28) * 0x17;
        if (uVar4 != 0) {
            uVar3 = (ulonglong) uVar4;
            do {
                lVar1 = *(longlong * )(param_1 + 0x50);
                plVar2 = *(longlong * *)(lVar1 + uVar5);
                if (plVar2 != (longlong *) 0x0) {
                    (**(code * *)(*plVar2 + 0x10))();
                    *(undefined8 * )(lVar1 + uVar5) = 0;
                }
                uVar5 = uVar5 + 8;
                uVar3 = uVar3 - 1;
            } while (uVar3 != 0);
        }
        FUN_14018b900(*(undefined8 * )(param_1 + 0x50), 0);
        *(undefined8 * )(param_1 + 0x50) = 0;
    }
    if (*(longlong * *)(param_1 + 0x38) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x38) + 8))();
        *(undefined8 * )(param_1 + 0x38) = 0;
    }
    *(undefined8 * )(param_1 + 0x30) = 0;
    *(undefined4 * )(param_1 + 0x2c) = 0;
    *(undefined4 * )(param_1 + 0x1c) = 0;
    return 0;
}


undefined8 FUN_1402a95e0(longlong param_1) {
    longlong lVar1;
    undefined auVar2[16];
    int iVar3;
    uint uVar4;
    LPVOID pvVar5;
    undefined8 uVar6;
    longlong lVar7;
    longlong *plVar8;
    ulonglong uVar9;
    longlong local_28;
    longlong local_20;
    undefined8 local_18;

    if (DAT_140c63758 != 0) {
        pvVar5 = TlsGetValue(*(DWORD * )(DAT_140c63758 + 4));
        if ((pvVar5 != (LPVOID) 0x0) && (*(longlong * )((longlong) pvVar5 + 8) != 0)) {
            plVar8 = *(longlong * *)(*(longlong * )((longlong) pvVar5 + 8) + 0x60);
            goto LAB_1402a9614;
        }
    }
    plVar8 = (longlong *) 0x0;
    LAB_1402a9614:
    iVar3 = (**(code * *)(*plVar8 + 0x28))(plVar8, 0);
    if (iVar3 < 0) {
        uVar6 = FUN_1402a9770(param_1, iVar3);
        return uVar6;
    }
    lVar7 = (**(code * *)(**(longlong * *)(param_1 + 0x38) + 0x20))();
    uVar4 = (**(code * *)(**(longlong * *)(param_1 + 0x38) + 0x10))();
    local_18 = 0;
    local_20 = (ulonglong) uVar4 + lVar7;
    local_28 = lVar7;
    iVar3 = FUN_1402956f0(&local_28, lVar7 + 0x50, lVar7);
    if (iVar3 < 0) {
        uVar6 = FUN_1402a9770(param_1, iVar3);
        return uVar6;
    }
    *(undefined4 * )(param_1 + 0x1c) = *(undefined4 * )(lVar7 + 0x18);
    auVar2 = ZEXT816(8) * ZEXT416(*(uint * )(lVar7 + 8));
    uVar6 = SUB168(auVar2, 0);
    if (SUB168(auVar2 >> 0x40, 0) != 0) {
        uVar6 = 0xffffffffffffffff;
    }
    uVar6 = FUN_14018b280(uVar6, 0);
    *(undefined8 * )(param_1 + 0x48) = uVar6;
    FUN_1407e4830(uVar6, 0, (ulonglong) * (uint * )(lVar7 + 8) << 3);
    uVar9 = (ulonglong)(uint)(*(int *) (lVar7 + 0x28) * 0x17);
    auVar2 = ZEXT816(8) * ZEXT816(uVar9);
    uVar6 = SUB168(auVar2, 0);
    if (SUB168(auVar2 >> 0x40, 0) != 0) {
        uVar6 = 0xffffffffffffffff;
    }
    uVar6 = FUN_14018b280(uVar6, 0);
    *(undefined8 * )(param_1 + 0x50) = uVar6;
    FUN_1407e4830(uVar6, 0, uVar9 * 8);
    lVar1 = *(longlong * )(param_1 + 0x10);
    *(longlong * )(param_1 + 0x30) = lVar7;
    *(uint * )(param_1 + 0x2c) = uVar4;
    LOCK();
    *(int *) (lVar1 + 0xf4) = *(int *) (lVar1 + 0xf4) + 1;
    LOCK();
    *(int *) (lVar1 + 0xf8) = *(int *) (lVar1 + 0xf8) + *(int *) (param_1 + 0x2c);
    LOCK();
    *(int *) (lVar1 + 0xfc) = *(int *) (lVar1 + 0xfc) + 1;
    LOCK();
    *(int *) (lVar1 + 0x100) = *(int *) (lVar1 + 0x100) + *(int *) (param_1 + 0x2c);
    LOCK();
    *(int *) (lVar1 + 0x114) = *(int *) (lVar1 + 0x114) + 1;
    LOCK();
    *(int *) (lVar1 + 0x118) = *(int *) (lVar1 + 0x118) + *(int *) (param_1 + 0x2c);
    *(undefined4 * )(param_1 + 0x58) = 0;
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

int FUN_1402a9770(longlong param_1, int param_2) {
    int iVar1;
    undefined8 local_res8;
    undefined **local_d8;
    wchar_t *local_d0;
    LPVOID local_c8;
    undefined8 local_c0;
    undefined **local_b8;
    undefined8 local_b0;
    LPVOID local_a8;
    undefined **local_a0;
    undefined8 uStack152;
    undefined8 local_90;
    int iStack136;
    undefined4 uStack132;
    undefined **local_78;
    undefined8 local_70;
    LPVOID local_68;
    undefined **local_58;
    wchar_t *local_50;
    LPVOID local_48;
    undefined8 local_40;
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 uStack44;
    undefined4 local_28;
    undefined4 uStack36;
    int iStack32;
    undefined4 uStack28;

    if (param_2 < 0) {
        local_b0 = 0;
        local_b8 = &PTR_LAB_140b5e648;
        local_a8 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_b8);
        local_78 = local_b8;
        local_70 = local_b0;
        local_a0 = &PTR_LAB_140b5e648;
        uStack152 = L"Result";
        local_68 = local_a8;
        local_90 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_a0);
        local_c0 = *(undefined8 * )(param_1 + 0x20);
        local_d8 = &PTR_LAB_140b5e648;
        local_a0 = &PTR_LAB_140b5e640;
        local_28 = (undefined4) local_90;
        uStack36 = local_90._4_4_;
        uStack28 = uStack132;
        local_d0 = L"FileName";
        local_38 = 0x40b5e640;
        uStack52 = 1;
        uStack48 = (undefined4) uStack152;
        uStack44 = uStack152._4_4_;
        iStack136 = param_2;
        iStack32 = param_2;
        local_c8 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_d8);
        local_50 = local_d0;
        local_d8 = &PTR_LAB_140b5e638;
        local_res8 = 0x141de6ad0;
        local_58 = &PTR_LAB_140b5e638;
        local_48 = local_c8;
        local_40 = local_c0;
        iVar1 = FUN_1401971e0(&DAT_140c8a51c, 0xe, &local_res8, *(undefined8 * )(param_1 + 0x20), &local_58,
                              &local_38, &local_78);
        local_d8 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_c8);
        local_a0 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_90);
        local_b8 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_a8);
        if (iVar1 != 0) {
            DebugBreak();
        }
        if (*(longlong * *)(param_1 + 0x38) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x38) + 8))();
            *(undefined8 * )(param_1 + 0x38) = 0;
        }
        *(int *) (param_1 + 0x58) = param_2;
        return param_2;
    }
    *(int *) (param_1 + 0x58) = param_2;
    return param_2;
}


void FUN_1402a9970(longlong param_1) {
    ulonglong *puVar1;
    longlong lVar2;
    ulonglong uVar3;
    DWORD DVar4;
    int iVar5;
    HANDLE hObject;
    ulonglong uVar6;

    lVar2 = *(longlong * )(param_1 + 0x10);
    DVar4 = GetCurrentThreadId();
    uVar6 = 0;
    if (*(DWORD * )(lVar2 + 0x18) == DVar4) {
        *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(lVar2 + 0x20);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
            if (uVar3 == 0) {
                *(DWORD * )(lVar2 + 0x18) = DVar4;
                goto LAB_1402a99d0;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(lVar2 + 0x18, DVar4);
    }
    LAB_1402a99d0:
    if ((*(int *) (param_1 + 0x28) < 1) || (iVar5 = FUN_1402a9480(param_1), -1 < iVar5)) {
        *(undefined4 * )(param_1 + 0x28) = 0;
        iVar5 = FUN_1402a93e0(param_1);
        if (-1 < iVar5) {
            *(undefined4 * )(param_1 + 0x28) = 2;
        }
    }
    if (*(ulonglong * )(lVar2 + 0x20) < 2) {
        *(undefined4 * )(lVar2 + 0x18) = 0;
        *(undefined8 * )(lVar2 + 0x20) = 0;
        if (*(longlong * )(lVar2 + 0x28) != 0) {
            if (*(longlong * )(lVar2 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar2 + 0x30);
                uVar6 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar6 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar2 + 0x30));
        }
        return;
    }
    *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + -1;
    return;
}
