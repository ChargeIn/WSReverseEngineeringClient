//
// Created by flop on 04.04.22.
//
#include "../../winhttp.h"
#include "../../WildStarTypes.c"

undefined8 FUN_1401b0bd0(undefined8 param_1, longlong *param_2, short *param_3) {
    longlong lVar1;
    short *psVar2;
    short sVar3;
    longlong lVar4;

    sVar3 = *param_3;
    lVar4 = 0;
    if (sVar3 == 0x2a) {
        do {
            if (sVar3 == 0) {
                return 1;
            }
            sVar3 = param_3[lVar4 + 1];
            psVar2 = &DAT_140b5f01a + lVar4;
            lVar4 = lVar4 + 1;
        } while (sVar3 == *psVar2);
    }
    lVar4 = (**(code * *)(*param_2 + 0x30))();
    if (lVar4 == 0) {
        psVar2 = (short *) FUN_1401a4f40();
    } else {
        psVar2 = (short *) 0x0;
    }
    sVar3 = *param_3;
    lVar4 = 0;
    if (sVar3 == *psVar2) {
        do {
            if (sVar3 == 0) {
                return 1;
            }
            sVar3 = param_3[lVar4 + 1];
            lVar1 = lVar4 + 1;
            lVar4 = lVar4 + 1;
        } while (sVar3 == psVar2[lVar1]);
    }
    return 0;
}


void FUN_1401b0c80(undefined8 *param_1) {
    *param_1 = &PTR_FUN_140b5f040;
    FUN_14002c630();
    if (param_1[0xd] != 0) {
        FUN_14018b900(param_1[0xd], 0);
    }
    if (param_1[9] != 0) {
        FUN_14018b900(param_1[9], 0);
    }
    if (param_1[5] != 0) {
        FUN_14018b900(param_1[5], 0);
    }
    *param_1 = &PTR_FUN_140b57ba0;
    return;
}


undefined8 *
FUN_1401b0ce0(undefined8 *param_1, longlong *param_2, short *param_3, undefined8 param_4,
              undefined4 param_5) {
    short sVar1;
    wchar_t wVar2;
    longlong lVar3;
    longlong lVar4;
    undefined2 *puVar5;
    wchar_t *pwVar6;
    longlong lVar7;
    wchar_t *pwVar8;
    ulonglong uVar9;
    undefined uVar10;
    short *psVar11;
    undefined8 *puVar12;
    longlong lVar13;
    wchar_t *pwVar14;
    undefined local_98[8];
    longlong local_90;
    undefined2 *local_88;
    longlong local_80;
    undefined local_78[8];
    longlong local_70;
    longlong local_68;
    undefined local_58[8];
    longlong local_50;
    longlong local_48;

    param_1[3] = param_2;
    pwVar14 = (wchar_t *) 0x0;
    *(undefined * )((longlong) param_1 + 0xc) = 1;
    param_1[2] = 0xffffffffffffffff;
    *(undefined4 * )(param_1 + 1) = 0;
    *param_1 = &PTR_FUN_140b5f040;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    puVar5 = (undefined2 *) FUN_14018b280(0x10, 0);
    param_1[5] = puVar5;
    param_1[6] = puVar5;
    param_1[7] = puVar5 + 8;
    if (puVar5 != (undefined2 *) 0x0) {
        *puVar5 = 0;
    }
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    puVar5 = (undefined2 *) FUN_14018b280(0x10);
    param_1[9] = puVar5;
    param_1[10] = puVar5;
    param_1[0xb] = puVar5 + 8;
    if (puVar5 != (undefined2 *) 0x0) {
        *puVar5 = 0;
    }
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    puVar5 = (undefined2 *) FUN_14018b280(2);
    param_1[0xf] = puVar5 + 1;
    param_1[0xd] = puVar5;
    param_1[0xe] = puVar5;
    FUN_1407db590(puVar5, &DAT_140b7b704, 0);
    param_1[0xe] = puVar5;
    if (puVar5 != (undefined2 *) 0x0) {
        *puVar5 = 0;
    }
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *(undefined4 * )(param_1 + 0x14) = param_5;
    param_1[0x15] = param_4;
    sVar1 = *param_3;
    pwVar6 = pwVar14;
    while (sVar1 != 0) {
        pwVar6 = (wchar_t *) ((longlong) pwVar6 + 1);
        sVar1 = param_3[(longlong) pwVar6];
    }
    FUN_14001c480(param_1 + 0xc, param_3, param_3 + (longlong) pwVar6);
    if (param_2 == (longlong *) 0x0) {
        pwVar6 = L"UNKNOWN";
    } else {
        lVar7 = (**(code * *)(*param_2 + 0x30))(param_2);
        pwVar6 = pwVar14;
        if (lVar7 == 0) {
            pwVar6 = (wchar_t *) FUN_1401a4f40(param_2 + 3);
        }
    }
    local_90 = 0;
    local_80 = 0;
    wVar2 = *pwVar6;
    pwVar8 = pwVar14;
    while (wVar2 != L'\0') {
        pwVar8 = (wchar_t *) ((longlong) pwVar8 + 1);
        wVar2 = pwVar6[(longlong) pwVar8];
    }
    lVar7 = (longlong) pwVar8 * 2 >> 1;
    uVar9 = lVar7 + 1;
    if (uVar9 < 0x7fffffffffffffff) {
        lVar3 = uVar9 * 2;
        local_90 = FUN_14018b280(lVar3, 0);
        local_80 = local_90 + lVar3;
    }
    lVar3 = local_90;
    lVar7 = lVar7 * 2;
    FUN_1407db590(local_90, pwVar6, lVar7);
    local_88 = (undefined2 * )(lVar3 + lVar7);
    if (local_88 != (undefined2 *) 0x0) {
        *local_88 = 0;
    }
    lVar7 = param_1[0x12];
    if (lVar7 == param_1[0x13]) {
        FUN_1400f8cf0(param_1 + 0x10, lVar7, local_98);
    } else {
        if (lVar7 != 0) {
            *(undefined8 * )(lVar7 + 8) = 0;
            *(undefined8 * )(lVar7 + 0x10) = 0;
            *(undefined8 * )(lVar7 + 0x18) = 0;
            FUN_14001c1b0(lVar7, lVar3);
        }
        param_1[0x12] = param_1[0x12] + 0x20;
    }
    if (lVar3 != 0) {
        FUN_14018b900(lVar3, 0);
    }
    local_90 = 0;
    local_80 = 0;
    pwVar6 = pwVar14;
    do {
        psVar11 = &DAT_140b5f02e + (longlong) pwVar6;
        pwVar6 = (wchar_t *) ((longlong) pwVar6 + 1);
    } while (*psVar11 != 0);
    lVar7 = (longlong) pwVar6 * 2 >> 1;
    uVar9 = lVar7 + 1;
    if (uVar9 < 0x7fffffffffffffff) {
        lVar3 = uVar9 * 2;
        local_90 = FUN_14018b280(lVar3, 0);
        local_80 = local_90 + lVar3;
    }
    lVar3 = local_90;
    lVar7 = lVar7 * 2;
    FUN_1407db590(local_90, &DAT_140b5f02c, lVar7);
    local_88 = (undefined2 * )(lVar3 + lVar7);
    if (local_88 != (undefined2 *) 0x0) {
        *local_88 = 0;
    }
    FUN_14018f570(local_78, param_1 + 0xc, local_98, 0x22, 0x5c);
    if (lVar3 != 0) {
        FUN_14018b900(lVar3, 0);
    }
    lVar7 = local_68 - local_70 >> 5;
    if (lVar7 != 0) {
        puVar12 = (undefined8 * )(local_70 + 8);
        do {
            lVar3 = param_1[0x12];
            if (lVar3 == param_1[0x13]) {
                FUN_1400f8cf0(param_1 + 0x10, lVar3, puVar12 + -1);
            } else {
                if (lVar3 != 0) {
                    *(undefined8 * )(lVar3 + 8) = 0;
                    *(undefined8 * )(lVar3 + 0x10) = 0;
                    *(undefined8 * )(lVar3 + 0x18) = 0;
                    FUN_14001c1b0(lVar3, *puVar12, puVar12[1]);
                }
                param_1[0x12] = param_1[0x12] + 0x20;
            }
            puVar12 = puVar12 + 4;
            lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
    }
    local_90 = 0;
    local_80 = 0;
    param_1[2] = ((longlong)(param_1[0x12] - param_1[0x11]) >> 5) + -1;
    pwVar6 = pwVar14;
    do {
        psVar11 = &DAT_140b5f032 + (longlong) pwVar6;
        pwVar6 = (wchar_t *) ((longlong) pwVar6 + 1);
    } while (*psVar11 != 0);
    lVar7 = (longlong) pwVar6 * 2 >> 1;
    uVar9 = lVar7 + 1;
    if (uVar9 < 0x7fffffffffffffff) {
        lVar3 = uVar9 * 2;
        local_90 = FUN_14018b280(lVar3, 0);
        local_80 = local_90 + lVar3;
    }
    lVar3 = local_90;
    lVar7 = lVar7 * 2;
    FUN_1407db590(local_90, &DAT_140b5f030, lVar7);
    local_88 = (undefined2 * )(lVar3 + lVar7);
    if (local_88 != (undefined2 *) 0x0) {
        *local_88 = 0;
    }
    FUN_14018f570(local_58, param_1[2] * 0x20 + param_1[0x11], local_98, 0x22, 0x5c);
    if (lVar3 != 0) {
        FUN_14018b900(lVar3);
    }
    lVar3 = local_48;
    lVar7 = local_50;
    uVar9 = local_48 - local_50 >> 5;
    if (1 < uVar9) {
        if (uVar9 == 2) {
            psVar11 = *(short **) (local_50 + 8);
            sVar1 = *psVar11;
            pwVar6 = pwVar14;
            while (sVar1 != 0) {
                pwVar6 = (wchar_t *) ((longlong) pwVar6 + 1);
                sVar1 = psVar11[(longlong) pwVar6];
            }
            FUN_14001c480(param_1[2] * 0x20 + param_1[0x11], psVar11, psVar11 + (longlong) pwVar6);
            local_90 = 0;
            local_80 = 0;
            pwVar6 = pwVar14;
            do {
                psVar11 = &DAT_140b5f022 + (longlong) pwVar6;
                pwVar6 = (wchar_t *) ((longlong) pwVar6 + 1);
            } while (*psVar11 != 0);
            lVar13 = (longlong) pwVar6 * 2 >> 1;
            uVar9 = lVar13 + 1;
            if (uVar9 < 0x7fffffffffffffff) {
                lVar4 = uVar9 * 2;
                local_90 = FUN_14018b280(lVar4, 0);
                local_80 = local_90 + lVar4;
            }
            lVar4 = local_90;
            lVar13 = lVar13 * 2;
            FUN_1407db590(local_90, &DAT_140b5f020, lVar13);
            local_88 = (undefined2 * )(lVar4 + lVar13);
            if (local_88 != (undefined2 *) 0x0) {
                *local_88 = 0;
            }
            FUN_14018f570(local_58, lVar7 + 0x20, local_98, 0x27, 0x5c);
            if (lVar4 != 0) {
                FUN_14018b900(lVar4, 0);
            }
            lVar13 = local_50;
            if (((**(short **) (local_50 + 8) == 0x40) && (uVar9 = local_48 - local_50 >> 5, uVar9 < 3)) &&
                (uVar9 != 0)) {
                psVar11 = *(short **) (local_50 + 8) + 1;
                sVar1 = *psVar11;
                pwVar6 = pwVar14;
                while (sVar1 != 0) {
                    pwVar6 = (wchar_t *) ((longlong) pwVar6 + 1);
                    sVar1 = psVar11[(longlong) pwVar6];
                }
                FUN_14001c480(param_1 + 4, psVar11, psVar11 + (longlong) pwVar6);
                if ((uVar9 == 2) && ((undefined8 * )(local_50 + 0x20) != param_1 + 8)) {
                    FUN_14001c480(param_1 + 8, *(undefined8 * )(local_50 + 0x28),
                                  *(undefined8 * )(local_50 + 0x30));
                }
            } else {
                uVar10 = 0;
                FUN_1400035b0(8, 0, 0, param_3);
                *(undefined * )((longlong) param_1 + 0xc) = uVar10;
                param_1[2] = 0xffffffffffffffff;
            }
            for (; lVar13 != local_48; lVar13 = lVar13 + 0x20) {
                if (*(longlong * )(lVar13 + 8) != 0) {
                    FUN_14018b900(*(longlong * )(lVar13 + 8), 0);
                }
            }
            FUN_14018b900(local_50, 0);
        } else {
            uVar10 = 0;
            FUN_1400035b0(8, 0, 0);
            *(undefined * )((longlong) param_1 + 0xc) = uVar10;
            param_1[2] = 0xffffffffffffffff;
        }
    }
    if (((param_1[2] == 1) &&
         (2 < (ulonglong)(*(longlong * )(param_1[0x11] + 0x10) - *(longlong * )(param_1[0x11] + 8) >> 1))
        ) && ((*param_3 == 0x2f && (pwVar14 = (wchar_t *) 0x0, param_3[1] == 0x2f)))) {
        pwVar14 = (wchar_t *) 0x1;
    }
    *(int *) (param_1 + 1) = (int) pwVar14;
    for (lVar13 = lVar7; lVar13 != lVar3; lVar13 = lVar13 + 0x20) {
        if (*(longlong * )(lVar13 + 8) != 0) {
            FUN_14018b900(*(longlong * )(lVar13 + 8), 0);
        }
    }
    lVar3 = local_70;
    if (lVar7 != 0) {
        FUN_14018b900(lVar7, 0);
        lVar3 = local_70;
    }
    for (; lVar3 != local_68; lVar3 = lVar3 + 0x20) {
        if (*(longlong * )(lVar3 + 8) != 0) {
            FUN_14018b900(*(longlong * )(lVar3 + 8), 0);
        }
    }
    if (local_70 != 0) {
        FUN_14018b900(local_70, 0);
    }
    return param_1;
}


ulonglong FUN_1401b13d0(longlong param_1, ulonglong param_2) {
    undefined8 *puVar1;
    char cVar2;
    int iVar3;
    longlong lVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    undefined **local_18;
    ulonglong local_10;

    if (*(char *) (param_1 + 0xc) != '\0') {
        if (*(int *) (param_1 + 8) == 0) {
            uVar6 = 0;
            uVar5 = param_2;
            if (param_2 != *(ulonglong * )(param_1 + 0x18)) {
                do {
                    uVar5 = *(ulonglong * )(uVar5 + 0x10);
                    uVar6 = (ulonglong)((int) uVar6 + 1);
                } while (uVar5 != *(ulonglong * )(param_1 + 0x18));
            }
            if ((*(ulonglong * )(param_1 + 0x10) <= uVar6 && uVar6 != *(ulonglong * )(param_1 + 0x10)) ||
                (uVar5 = FUN_1401b0bd0(uVar6, param_2,
                                       *(undefined8 * )(uVar6 * 0x20 + 8 + *(longlong * )(param_1 + 0x88))),
                        (int) uVar5 == 0)) {
                return uVar5 & 0xffffffffffffff00;
            }
            if (uVar6 != *(ulonglong * )(param_1 + 0x10)) goto LAB_1401b14a0;
        } else {
            iVar3 = FUN_1401b0bd0(param_1, param_2, *(undefined8 * )(*(longlong * )(param_1 + 0x88) + 0x28));
            if (iVar3 == 0) goto LAB_1401b14a0;
        }
        if ((*(longlong * )(param_1 + 0x28) == *(longlong * )(param_1 + 0x30)) ||
            (((lVar4 = FUN_1401a6b80(param_2, *(undefined8 * )(param_1 + 0x28)), lVar4 != 0 &&
                                                                                 (lVar4 = FUN_1401a4f40(lVar4 + 0x20),
                                                                                         lVar4 != 0)) &&
              ((*(longlong * )(param_1 + 0x48) == *(longlong * )(param_1 + 0x50) ||
                (cVar2 = FUN_14002c740(param_1 + 0x40, lVar4), cVar2 != '\0')))))) {
            lVar4 = *(longlong * )(param_1 + 0xa8);
            puVar1 = *(undefined8 * *)(lVar4 + 0x10);
            local_18 = &PTR_FUN_140b68f20;
            if (puVar1 == *(undefined8 * *)(lVar4 + 0x18)) {
                local_10 = param_2;
                FUN_1401b16b0(lVar4, puVar1, &local_18);
            } else {
                if (puVar1 != (undefined8 *) 0x0) {
                    *puVar1 = &PTR_FUN_140b68f20;
                    puVar1[1] = param_2;
                }
                *(longlong * )(lVar4 + 0x10) = *(longlong * )(lVar4 + 0x10) + 0x10;
            }
            if (*(int *) (param_1 + 0xa0) != 0) {
                *(undefined * )(param_1 + 0xc) = 0;
            }
        }
    }
    LAB_1401b14a0:
    return (ulonglong) * (byte * )(param_1 + 0xc);
}


undefined8 FUN_1401b1540(undefined8 param_1, ulonglong param_2) {
    FUN_1401b0c80();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


undefined8 FUN_1401b1580(longlong *param_1, longlong param_2, undefined8 param_3, undefined4 param_4) {
    undefined8 *puVar1;
    undefined8 uVar2;
    longlong lVar3;
    longlong *plVar4;
    undefined **local_b8[5];
    longlong local_90;
    longlong local_70;
    longlong local_50;
    undefined local_38[48];

    if (param_2 == 0) {
        uVar2 = 0x80070057;
    } else {
        (**(code * *)(*param_1 + 0x30))();
        lVar3 = (**(code * *)(*param_1 + 0x30))(param_1);
        if (lVar3 == 0) {
            plVar4 = (longlong * )(**(code * *) * param_1)(param_1);
            if (plVar4 == (longlong *) 0x0) {
                return 0x80070057;
            }
        } else {
            for (puVar1 = *(undefined8 * *)(lVar3 + 0x30); puVar1 != (undefined8 *) 0x0;
                 puVar1 = (undefined8 *) puVar1[9]) {
                plVar4 = (longlong * )(**(code * *) * puVar1)(puVar1);
                if (plVar4 != (longlong *) 0x0) goto LAB_1401b1605;
            }
            plVar4 = (longlong *) 0x0;
        }
        LAB_1401b1605:
        if (plVar4 != (longlong *) 0x0) {
            FUN_1401b0ce0(local_b8, plVar4, param_2, param_3, param_4);
            (**(code * *)(*plVar4 + 0x70))(plVar4, local_b8);
            local_b8[0] = &PTR_FUN_140b5f040;
            FUN_14002c630(local_38);
            if (local_50 != 0) {
                FUN_14018b900(local_50, 0);
            }
            if (local_70 != 0) {
                FUN_14018b900(local_70, 0);
            }
            if (local_90 != 0) {
                FUN_14018b900(local_90, 0);
            }
        }
        uVar2 = 0;
    }
    return uVar2;
}


void FUN_1401b16b0(longlong param_1, longlong param_2, longlong param_3) {
    undefined8 uVar1;
    ulonglong uVar2;
    undefined8 *puVar3;
    longlong lVar4;
    longlong lVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    undefined *puVar9;

    puVar6 = *(undefined8 * *)(param_1 + 0x10);
    if (puVar6 == *(undefined8 * *)(param_1 + 0x18)) {
        lVar4 = (longlong) puVar6 - *(longlong * )(param_1 + 8) >> 4;
        lVar5 = lVar4 * 2;
        if (lVar4 == 0) {
            lVar5 = 1;
        }
        uVar2 = FUN_14018a3e0(lVar5 << 4);
        puVar3 = (undefined8 *) FUN_14018b280(uVar2 & 0xfffffffffffffff0, 0);
        puVar6 = puVar3;
        for (lVar5 = *(longlong * )(param_1 + 8); lVar5 != param_2; lVar5 = lVar5 + 0x10) {
            if (puVar6 != (undefined8 *) 0x0) {
                *puVar6 = &PTR_FUN_140b68f20;
                puVar6[1] = *(undefined8 * )(lVar5 + 8);
            }
            puVar6 = puVar6 + 2;
        }
        if (puVar6 != (undefined8 *) 0x0) {
            *puVar6 = &PTR_FUN_140b68f20;
            puVar6[1] = *(undefined8 * )(param_3 + 8);
        }
        lVar5 = *(longlong * )(param_1 + 0x10);
        puVar8 = puVar6 + 2;
        if (param_2 != lVar5) {
            puVar7 = puVar8;
            do {
                if (puVar7 != (undefined8 *) 0x0) {
                    *puVar7 = &PTR_FUN_140b68f20;
                    puVar7[1] = *(undefined8 * )((param_2 - (longlong) puVar6) + -8 + (longlong) puVar7);
                }
                puVar8 = puVar7 + 2;
                lVar4 = (longlong) puVar7 + (param_2 - (longlong) puVar6);
                puVar7 = puVar8;
            } while (lVar4 != lVar5);
        }
        puVar6 = *(undefined8 * *)(param_1 + 0x10);
        for (puVar7 = *(undefined8 * *)(param_1 + 8); puVar7 != puVar6; puVar7 = puVar7 + 2) {
            (**(code * *) * puVar7)(puVar7, 0);
        }
        if (*(longlong * )(param_1 + 8) != 0) {
            FUN_14018b900(*(longlong * )(param_1 + 8), 0);
        }
        *(undefined8 * *)(param_1 + 8) = puVar3;
        *(ulonglong * )(param_1 + 0x18) = (uVar2 & 0xfffffffffffffff0) + (longlong) puVar3;
        *(undefined8 * *)(param_1 + 0x10) = puVar8;
        return;
    }
    if (puVar6 != (undefined8 *) 0x0) {
        *puVar6 = &PTR_FUN_140b68f20;
        puVar6[1] = puVar6[-1];
    }
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    lVar5 = *(longlong * )(param_1 + 0x10);
    uVar1 = *(undefined8 * )(param_3 + 8);
    lVar4 = (lVar5 + -0x20) - param_2 >> 4;
    if (0 < lVar4) {
        puVar6 = (undefined8 * )(lVar5 + -8);
        puVar9 = &DAT_ffffffffffffffe8 + lVar5;
        do {
            puVar3 = (undefined8 * )(puVar9 + -0x10);
            puVar9 = puVar9 + -0x10;
            puVar6 = puVar6 + -2;
            lVar4 = lVar4 + -1;
            *puVar6 = *puVar3;
        } while (0 < lVar4);
    }
    *(undefined8 * )(param_2 + 8) = uVar1;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401b1850(float *param_1, float *param_2, float *param_3, float *param_4) {
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;

    fVar5 = *param_2 - *param_1;
    fVar6 = param_2[1] - param_1[1];
    fVar4 = (fVar5 * fVar5 + fVar6 * fVar6 + 0.0) - param_1[4] * param_1[4];
    if (fVar4 <= 0.0) {
        fVar4 = 0.0;
        LAB_1401b1960:
        if (param_4 != (float *) 0x0) {
            *param_4 = fVar4;
        }
        return 1;
    }
    fVar1 = *param_3 - *param_2;
    fVar2 = param_3[1] - param_2[1];
    fVar3 = fVar1 * fVar1 + fVar2 * fVar2 + 0.0;
    if (_DAT_140c3d928 <= fVar3) {
        fVar5 = (fVar1 * fVar5 + fVar2 * fVar6 + 0.0) * 2.0;
        fVar6 = fVar5 * fVar5 - fVar3 * 4.0 * fVar4;
        if (0.0 <= fVar6) {
            fVar6 = SQRT(fVar6);
            fVar4 = 1.0 / (fVar3 * 2.0);
            fVar1 = (fVar6 - fVar5) * fVar4;
            if ((0.0 <= fVar1) &&
                (fVar4 = ((float) ((uint) fVar5 ^ 0x80000000) - fVar6) * fVar4, fVar4 <= 1.0)) {
                if (fVar4 < 0.0) {
                    fVar4 = fVar1;
                }
                goto LAB_1401b1960;
            }
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined (*) [16]
FUN_1401b1980(undefined(*param_1)
[16],
ushort *param_2
)

{
int iVar2;
int iVar3;
undefined auVar1[16];
undefined auVar4[16];
ulonglong uVar5;
undefined auVar6[16];
undefined auVar7[16];
undefined auVar8[16];
undefined auVar9[16];
int iVar10;
uint uVar13;
int iVar14;
undefined auVar11[16];
int iVar15;
int iVar16;
undefined auVar12[16];
undefined auVar17[16];
undefined auVar18[16];

uVar5 = (ulonglong) CONCAT24(param_2[2], (uint) * param_2);
auVar17 = ZEXT1416(CONCAT68(SUB146(CONCAT212(param_2[3], ZEXT1012(CONCAT28(param_2[2], uVar5))) >>
                                                                                                0x40, 0),
                            uVar5 & 0xffffffff | (ulonglong) param_2[1] << 0x20));
auVar11 = ~_DAT_140b7aa30 & auVar17;
auVar17 = _DAT_140b7aa30 & auVar17;
iVar2 = SUB164(auVar11 >> 0x20, 0);
iVar3 = SUB164(auVar11 >> 0x40, 0);
iVar15 = SUB164(auVar11 >> 0x60, 0);
iVar10 = SUB164(auVar11, 0) * 0x2000 + 0x38000000;
uVar13 = iVar2 * 0x2000 + 0x38000000;
iVar14 = iVar3 * 0x2000 + 0x38000000;
iVar16 = iVar15 * 0x2000 + 0x38000000;
auVar12 = CONCAT412(iVar16, CONCAT48(iVar14, CONCAT44(uVar13, iVar10)));
auVar11 = CONCAT412(-(uint)(iVar15 == 0),
                    CONCAT48(-(uint)(iVar3 == 0),
                             CONCAT44(-(uint)(iVar2 == 0), -(uint)(SUB164(auVar11, 0) == 0))));
auVar18 = ~auVar11 &
          CONCAT412(-(uint)(iVar16 < 0x38800000),
                    CONCAT48(-(uint)(iVar14 < 0x38800000),
                             CONCAT44(-(uint)(uVar13 < 0x38800000), -(uint)(iVar10 < 0x38800000))));
if ((ushort)((ushort)(
SUB161(auVar18
>> 7,0) & 1) | (ushort)(
SUB161(auVar18
>> 0xf,0) & 1) << 1 |
(ushort)(
SUB161(auVar18
>> 0x17,0) & 1) << 2 |
(ushort)(
SUB161(auVar18
>> 0x1f,0) & 1) << 3 |
(ushort)(
SUB161(auVar18
>> 0x27,0) & 1) << 4 |
(ushort)(
SUB161(auVar18
>> 0x2f,0) & 1) << 5 |
(ushort)(
SUB161(auVar18
>> 0x37,0) & 1) << 6 |
(ushort)(
SUB161(auVar18
>> 0x3f,0) & 1) << 7 |
(ushort)(
SUB161(auVar18
>> 0x47,0) & 1) << 8 |
(ushort)(
SUB161(auVar18
>> 0x4f,0) & 1) << 9 |
(ushort)(
SUB161(auVar18
>> 0x57,0) & 1) << 10 |
(ushort)(
SUB161(auVar18
>> 0x5f,0) & 1) << 0xb |
(ushort)(
SUB161(auVar18
>> 0x67,0) & 1) << 0xc |
(ushort)(
SUB161(auVar18
>> 0x6f,0) & 1) << 0xd |
(ushort)(
SUB161(auVar18
>> 0x77,0) & 1) << 0xe |
(ushort)
SUB161(auVar18
>> 0x7f,0) << 0xf) != 0) {
auVar4 = _DAT_140b7aa90 & auVar12;
iVar10 = SUB164(auVar4, 0) << 8;
iVar2 = SUB164(auVar4 >> 0x20, 0) << 8;
iVar3 = SUB164(auVar4 >> 0x40, 0) << 8;
iVar14 = SUB164(auVar4 >> 0x60, 0) << 8;
auVar1 = CONCAT412(-(uint)(iVar14 < 0x1000000),
                   CONCAT48(-(uint)(iVar3 < 0x1000000),
                            CONCAT44(-(uint)(iVar2 < 0x1000000), -(uint)(iVar10 < 0x1000000))));
auVar8 = _DAT_140b7a970 & auVar1;
auVar4 = auVar1 & CONCAT412(iVar14, CONCAT48(iVar3, CONCAT44(iVar2, iVar10))) | ~auVar1 & auVar4;
iVar10 = SUB164(auVar4, 0) << 4;
iVar2 = SUB164(auVar4 >> 0x20, 0) << 4;
iVar3 = SUB164(auVar4 >> 0x40, 0) << 4;
iVar14 = SUB164(auVar4 >> 0x60, 0) << 4;
auVar1 = CONCAT412(-(uint)(iVar14 < 0x1000000),
                   CONCAT48(-(uint)(iVar3 < 0x1000000),
                            CONCAT44(-(uint)(iVar2 < 0x1000000), -(uint)(iVar10 < 0x1000000))));
auVar7 = _DAT_140b7a960 & auVar1;
auVar4 = auVar1 & CONCAT412(iVar14, CONCAT48(iVar3, CONCAT44(iVar2, iVar10))) | ~auVar1 & auVar4;
iVar10 = SUB164(auVar4, 0) << 2;
iVar2 = SUB164(auVar4 >> 0x20, 0) << 2;
iVar3 = SUB164(auVar4 >> 0x40, 0) << 2;
iVar14 = SUB164(auVar4 >> 0x60, 0) << 2;
auVar1 = CONCAT412(-(uint)(iVar14 < 0x1000000),
                   CONCAT48(-(uint)(iVar3 < 0x1000000),
                            CONCAT44(-(uint)(iVar2 < 0x1000000), -(uint)(iVar10 < 0x1000000))));
auVar6 = _DAT_140b7a940 & auVar1;
auVar4 = auVar1 & CONCAT412(iVar14, CONCAT48(iVar3, CONCAT44(iVar2, iVar10))) | ~auVar1 & auVar4;
iVar10 = SUB164(auVar4, 0) << 1;
iVar2 = SUB164(auVar4 >> 0x20, 0) << 1;
iVar3 = SUB164(auVar4 >> 0x40, 0) << 1;
iVar14 = SUB164(auVar4 >> 0x60, 0) << 1;
auVar9 = CONCAT412(-(uint)(iVar14 < 0x1000000),
                   CONCAT48(-(uint)(iVar3 < 0x1000000),
                            CONCAT44(-(uint)(iVar2 < 0x1000000), -(uint)(iVar10 < 0x1000000))));
auVar1 = _DAT_140b7a8f0 & auVar9;
auVar12 = (CONCAT412(((((0x71 - SUB164(auVar8 >> 0x60, 0)) - SUB164(auVar7 >> 0x60, 0)) -
                       SUB164(auVar6 >> 0x60, 0)) - SUB164(auVar1 >> 0x60, 0)) * 0x800000,
                     CONCAT48(((((0x71 - SUB164(auVar8 >> 0x40, 0)) - SUB164(auVar7 >> 0x40, 0)) -
                                SUB164(auVar6 >> 0x40, 0)) - SUB164(auVar1 >> 0x40, 0)) * 0x800000,
                              CONCAT44(((((0x71 - SUB164(auVar8 >> 0x20, 0)) -
                                          SUB164(auVar7 >> 0x20, 0)) - SUB164(auVar6 >> 0x20, 0)) -
                                        SUB164(auVar1 >> 0x20, 0)) * 0x800000,
                                       ((((0x71 - SUB164(auVar8, 0)) - SUB164(auVar7, 0)) -
                                         SUB164(auVar6, 0)) - SUB164(auVar1, 0)) * 0x800000))) |
           (auVar9 & CONCAT412(iVar14, CONCAT48(iVar3, CONCAT44(iVar2, iVar10))) | ~auVar9 & auVar4)
           & _DAT_140b7aa90) & auVar18 | ~auVar18 & auVar12;
}
*
param_1 = ~auVar11 & auVar12 |
          CONCAT412(SUB164(auVar17 >> 0x60, 0) << 0x10,
                    CONCAT48(SUB164(auVar17 >> 0x40, 0) << 0x10,
                             CONCAT44(SUB164(auVar17 >> 0x20, 0) << 0x10, SUB164(auVar17, 0) << 0x10
                             )));
return
param_1;
}


float *FUN_1401b1b70(float *param_1, float *param_2) {
    float fVar1;
    float fVar2;
    float fVar3;

    if (1.0 <= param_1[3]) {
        fVar1 = *param_1;
        param_2[3] = 0.0;
        *param_2 = fVar1;
        param_2[1] = param_1[1];
        param_2[2] = param_1[2];
        return param_2;
    }
    fVar2 = (float) FUN_1408fccb0();
    fVar3 = (float) FUN_1408fe3d0();
    fVar1 = fVar3;
    if ((int) fVar3 < 0) {
        fVar1 = (float) (0x80000000 - (int) fVar3);
    }
    param_2[3] = 0.0;
    if (0x54 < (int) (((uint) fVar1 ^ (int) fVar1 >> 0x1f) - ((int) fVar1 >> 0x1f))) {
        fVar2 = fVar2 / fVar3;
        fVar1 = *param_1;
        fVar3 = param_1[1];
        param_2[2] = fVar2 * param_1[2];
        *param_2 = fVar2 * fVar1;
        param_2[1] = fVar2 * fVar3;
        return param_2;
    }
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    return param_2;
}


float *FUN_1401b1c60(float *param_1, float *param_2) {
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    undefined in_XMM10[16];
    undefined auVar7[16];

    fVar3 = *param_1;
    fVar4 = param_1[1];
    fVar5 = param_1[2];
    auVar7 = sqrtps(in_XMM10, ZEXT416((uint)(fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5)));
    fVar6 = SUB164(auVar7, 0);
    fVar1 = (float) FUN_1408fe3d0(fVar6);
    fVar2 = (float) FUN_1408fc950(fVar6);
    param_2[3] = fVar2;
    fVar2 = fVar1;
    if ((int) fVar1 < 0) {
        fVar2 = (float) (0x80000000 - (int) fVar1);
    }
    if (0x54 < (int) (((uint) fVar2 ^ (int) fVar2 >> 0x1f) - ((int) fVar2 >> 0x1f))) {
        fVar1 = fVar1 / fVar6;
        fVar3 = fVar3 * fVar1;
        fVar4 = fVar4 * fVar1;
        fVar5 = fVar5 * fVar1;
    }
    param_2[2] = fVar5;
    param_2[1] = fVar4;
    *param_2 = fVar3;
    return param_2;
}


float *FUN_1401b1d60(float *param_1, float *param_2) {
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    float fVar5;
    undefined in_XMM0[16];
    undefined auVar6[16];
    float fVar7;
    float local_38[4];
    longlong local_28[5];

    fVar5 = *param_2;
    fVar7 = param_2[5];
    local_38[2] = param_2[10];
    auVar6 = ZEXT416((uint)(local_38[2] + fVar5 + fVar7)) & (undefined[16])
    0xffffffffffffffff;
    if (0.0 < SUB164(auVar6, 0)) {
        auVar6 = sqrtps(in_XMM0 & (undefined[16])
        0x0,
                CONCAT124(SUB1612(auVar6 >> 0x20, 0), SUB164(auVar6, 0) + 1.0));
        fVar5 = SUB164(auVar6, 0) * 0.5;
        fVar7 = 0.25 / fVar5;
        param_1[3] = fVar5;
        *param_1 = (param_2[6] - param_2[9]) * fVar7;
        param_1[1] = (param_2[8] - param_2[2]) * fVar7;
        param_1[2] = (param_2[1] - param_2[4]) * fVar7;
        return param_1;
    }
    local_28[2] = 0;
    local_28[1] = 2;
    local_28[0] = 1;
    local_38[0] = (fVar5 - fVar7) - local_38[2];
    local_38[1] = (fVar7 - fVar5) - local_38[2];
    local_38[2] = local_38[2] - (fVar5 + fVar7);
    uVar3 = (ulonglong)(local_38[0] < local_38[1]);
    uVar4 = 2;
    if (local_38[2] < local_38[uVar3] || local_38[2] == local_38[uVar3]) {
        uVar4 = uVar3;
    }
    lVar1 = local_28[uVar4];
    lVar2 = local_28[lVar1];
    auVar6 = sqrtps(auVar6, ZEXT416((uint)(local_38[uVar4] + 1.0)) &
                            (undefined[16])
    0xffffffffffffffff);
    fVar5 = SUB164(auVar6, 0) * 0.5;
    fVar7 = 0.25 / fVar5;
    param_1[uVar4] = fVar5;
    param_1[lVar1] = (param_2[uVar4 + lVar1 * 4] + param_2[lVar1 + uVar4 * 4]) * fVar7;
    param_1[lVar2] = (param_2[uVar4 + lVar2 * 4] + param_2[lVar2 + uVar4 * 4]) * fVar7;
    param_1[3] = (param_2[lVar2 + lVar1 * 4] - param_2[lVar1 + lVar2 * 4]) * fVar7;
    return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float *FUN_1401b1ee0(float *param_1, float *param_2, float *param_3) {
    float fVar1;
    float fVar2;
    float fVar3;
    undefined auVar4[16];
    float fVar5;
    float fVar6;
    float in_XMM3_Da;
    float fVar7;
    float fVar8;
    float local_58;
    float fStack84;

    fVar1 = param_3[1];
    fVar2 = param_3[2];
    fVar3 = param_3[3];
    local_58 = 1.0 - in_XMM3_Da;
    fVar8 = fVar1 * param_2[1] + fVar3 * param_2[3] + *param_3 * *param_2 + 0.0;
    fVar7 = (float) ((uint) fVar8 & 0x7fffffff);
    fStack84 = in_XMM3_Da;
    if (1e-05 < 1.0 - fVar7) {
        fVar5 = 1.0 - fVar7 * fVar7;
        auVar4 = rsqrtss(ZEXT416((uint) fVar5), ZEXT416((uint) fVar5));
        fVar6 = SUB164(auVar4, 0);
        fStack84 = (fVar6 * fVar5 * fVar6 - 3.0) * fVar6 * -0.5;
        fVar5 = fStack84 * fVar5;
        if (fVar5 <= fVar7) {
            fVar5 = fVar5 / fVar7;
            fVar6 = 0.0;
        } else {
            fVar6 = 1.570796;
            fVar5 = (float) ((uint)(fVar7 / fVar5) ^ 0x80000000);
        }
        fVar7 = fVar5 * fVar5;
        fVar6 = ((((((((fVar7 * 0.002866226 - 0.01616574) * fVar7 + 0.04290961) * fVar7 - 0.07528964) *
                     fVar7 + 0.1065626) * fVar7 - 0.142089) * fVar7 + 0.1999355) * fVar7 - 0.3333315) *
                 fVar7 + 1.0) * fVar5 + fVar6;
        local_58 = fVar6 * local_58;
        fVar6 = fVar6 * in_XMM3_Da;
        fVar7 = local_58 * local_58;
        fVar5 = fVar6 * fVar6;
        local_58 = (((((_DAT_140c78460 * fVar7 + _DAT_140c78470) * fVar7 + _DAT_140c78480) * fVar7 +
                      _DAT_140c78490) * fVar7 + _DAT_140c784a0) * fVar7 + _DAT_140c784b0) * local_58 *
                   fStack84;
        fStack84 = (((((fRam0000000140c78464 * fVar5 + fRam0000000140c78474) * fVar5 +
                       fRam0000000140c78484) * fVar5 + fRam0000000140c78494) * fVar5 +
                     fRam0000000140c784a4) * fVar5 + fRam0000000140c784b4) * fVar6 * fStack84;
    }
    if (fVar8 < 0.0) {
        fStack84 = (float) ((uint) fStack84 ^ 0x80000000);
    }
    fVar7 = param_2[1];
    fVar8 = param_2[2];
    fVar5 = param_2[3];
    *param_1 = fStack84 * *param_3 + local_58 * *param_2;
    param_1[1] = fStack84 * fVar1 + local_58 * fVar7;
    param_1[2] = fStack84 * fVar2 + local_58 * fVar8;
    param_1[3] = fStack84 * fVar3 + local_58 * fVar5;
    return param_1;
}


float *FUN_1401b20f0(float *param_1, float *param_2) {
    float fVar1;
    float fVar4;
    undefined auVar2[16];
    undefined auVar3[16];
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

    fVar12 = *param_2;
    auVar3 = *(undefined(*)[16])(param_2 + 8);
    fVar4 = SUB164(auVar3 >> 0x40, 0);
    fVar15 = param_2[0xc];
    fVar20 = param_2[0xd];
    fVar13 = param_2[4];
    fVar19 = param_2[5];
    fVar5 = 0.0 - param_2[2];
    fVar7 = 0.0 - param_2[6];
    fVar9 = 0.0 - fVar4;
    fVar10 = 0.0 - param_2[0xe];
    fVar16 = 0.0 - param_2[7];
    fVar17 = 0.0 - SUB164(auVar3 >> 0x60, 0);
    fVar18 = 0.0 - param_2[0xf];
    auVar2 = CONCAT124(SUB1612(CONCAT412(fVar10 * fVar10,
                                         CONCAT48(fVar9 * fVar9, CONCAT44(fVar7 * fVar7, fVar5 * fVar5))
    ) >> 0x20, 0), fVar5 * fVar5 + fVar7 * fVar7 + 0.0);
    auVar2 = rsqrtss(auVar2, auVar2);
    fVar1 = SUB164(auVar2, 0);
    fVar6 = param_2[2] + 0.0;
    fVar8 = fVar16 + param_2[6];
    fVar4 = fVar17 + fVar4;
    fVar11 = fVar18 + param_2[0xe];
    *param_1 = fVar1 * fVar5;
    param_1[1] = fVar1 * fVar7;
    param_1[2] = fVar1 * fVar9;
    param_1[3] = fVar1 * fVar10;
    auVar2 = CONCAT124(SUB1612(CONCAT412(fVar11 * fVar11,
                                         CONCAT48(fVar4 * fVar4, CONCAT44(fVar8 * fVar8, fVar6 * fVar6))
    ) >> 0x20, 0), fVar6 * fVar6 + fVar8 * fVar8 + 0.0);
    auVar2 = rsqrtss(auVar2, auVar2);
    fVar1 = SUB164(auVar2, 0);
    fVar5 = 0.0 - fVar12;
    fVar7 = fVar16 - fVar13;
    fVar9 = fVar17 - SUB164(auVar3, 0);
    fVar10 = fVar18 - fVar15;
    fVar12 = fVar12 + 0.0;
    fVar13 = fVar13 + fVar16;
    fVar14 = SUB164(auVar3, 0) + fVar17;
    fVar15 = fVar15 + fVar18;
    param_1[4] = fVar1 * fVar6;
    param_1[5] = fVar1 * fVar8;
    param_1[6] = fVar1 * fVar4;
    param_1[7] = fVar1 * fVar11;
    auVar3 = CONCAT124(SUB1612(CONCAT412(fVar10 * fVar10,
                                         CONCAT48(fVar9 * fVar9, CONCAT44(fVar7 * fVar7, fVar5 * fVar5))
    ) >> 0x20, 0), fVar5 * fVar5 + fVar7 * fVar7 + 0.0);
    auVar3 = rsqrtss(auVar3, auVar3);
    fVar1 = SUB164(auVar3, 0);
    fVar4 = fVar16 - fVar19;
    fVar6 = fVar17 - 0.0;
    fVar8 = fVar18 - fVar20;
    param_1[8] = fVar1 * fVar5;
    param_1[9] = fVar1 * fVar7;
    param_1[10] = fVar1 * fVar9;
    param_1[0xb] = fVar1 * fVar10;
    auVar3 = CONCAT124(SUB1612(CONCAT412(fVar15 * fVar15,
                                         CONCAT48(fVar14 * fVar14,
                                                  CONCAT44(fVar13 * fVar13, fVar12 * fVar12))) >> 0x20,
                               0), fVar12 * fVar12 + fVar13 * fVar13 + 0.0);
    auVar3 = rsqrtss(auVar3, auVar3);
    fVar1 = SUB164(auVar3, 0);
    param_1[0xc] = fVar1 * fVar12;
    param_1[0xd] = fVar1 * fVar13;
    param_1[0xe] = fVar1 * fVar14;
    param_1[0xf] = fVar1 * fVar15;
    fVar19 = fVar19 + fVar16;
    fVar17 = fVar17 + 0.0;
    fVar20 = fVar20 + fVar18;
    auVar3 = CONCAT124(CONCAT48(fVar8 * fVar8, CONCAT44(fVar6 * fVar6, fVar4 * fVar4)),
                       fVar4 * fVar4 + 0.0 + 0.0);
    auVar3 = rsqrtss(auVar3, auVar3);
    fVar1 = SUB164(auVar3, 0);
    param_1[0x10] = fVar1 * 0.0;
    param_1[0x11] = fVar1 * fVar4;
    param_1[0x12] = fVar1 * fVar6;
    param_1[0x13] = fVar1 * fVar8;
    auVar3 = CONCAT124(CONCAT48(fVar20 * fVar20, CONCAT44(fVar17 * fVar17, fVar19 * fVar19)),
                       fVar19 * fVar19 + 0.0 + 0.0);
    auVar3 = rsqrtss(auVar3, auVar3);
    fVar1 = SUB164(auVar3, 0);
    param_1[0x14] = fVar1 * 0.0;
    param_1[0x15] = fVar1 * fVar19;
    param_1[0x16] = fVar1 * fVar17;
    param_1[0x17] = fVar1 * fVar20;
    return param_1;
}


void FUN_1401b2280(longlong param_1, undefined4 *param_2) {
    undefined4 *puVar1;
    undefined4 *puVar2;
    undefined4 *puVar3;
    ulonglong uVar4;
    undefined4 uVar5;
    undefined local_158[16];
    undefined local_148[16];
    undefined local_138[16];
    undefined local_128[16];
    undefined local_118[48];
    undefined4 local_e8;
    undefined4 uStack228;
    undefined4 uStack224;
    undefined4 uStack220;
    undefined * local_d8[26];

    uVar4 = 0;
    uVar5 = 0x3f800000;
    do {
        puVar1 = (undefined4 * )((longlong) * (int *) ((longlong) & DAT_140b5f098 + uVar4) * 0x10 + param_1);
        puVar2 = (undefined4 * )((longlong) * (int *) ((longlong) & DAT_140b5f094 + uVar4) * 0x10 + param_1);
        puVar3 = (undefined4 * )((longlong) * (int *) ((longlong) & DAT_140b5f090 + uVar4) * 0x10 + param_1);
        local_d8[0] = local_158;
        local_158 = ZEXT1216(CONCAT48(*puVar1, CONCAT44(*puVar2, *puVar3)));
        local_148 = ZEXT1216(CONCAT48(puVar1[1], CONCAT44(puVar2[1], puVar3[1])));
        local_138 = ZEXT1216(CONCAT48(puVar1[2], CONCAT44(puVar2[2], puVar3[2])));
        local_128 = CONCAT412(uVar5, CONCAT48(puVar1[3], CONCAT44(puVar2[3], puVar3[3])));
        FUN_1401afc20(local_d8, local_118);
        uVar4 = uVar4 + 0xc;
        *param_2 = local_e8;
        param_2[1] = uStack228;
        param_2[2] = uStack224;
        param_2[3] = uStack220;
        param_2 = param_2 + 4;
    } while (uVar4 < 0x60);
    return;
}


void FUN_1401b2410(longlong *param_1, longlong param_2) {
    ulonglong uVar1;
    ushort uVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    uVar5 = 0;
    if (param_1[1] != 0) {
        do {
            uVar2 = *(ushort * )(*param_1 + uVar5 * 2);
            if (uVar2 < 0x80) {
                if ((ushort)(uVar2 - 0x41) < 0x1a) {
                    uVar2 = uVar2 + 0x20;
                }
            } else {
                uVar3 = 0;
                uVar4 = 0x3d1;
                do {
                    uVar1 = (uVar4 - uVar3 >> 1) + uVar3;
                    if (*(ushort * )(&UNK_140a41a80 + uVar1 * 2) <= uVar2) {
                        if (uVar2 <= *(ushort * )(&UNK_140a41a80 + uVar1 * 2)) {
                            uVar2 = *(ushort * )(&UNK_140a40af0 + uVar1 * 2);
                            break;
                        }
                        uVar3 = uVar1 + 1;
                        uVar1 = uVar4;
                    }
                    uVar4 = uVar1;
                } while (uVar3 < uVar1);
            }
            *(ushort * )(param_2 + uVar5 * 2) = uVar2;
            uVar5 = uVar5 + 1;
        } while (uVar5 < (ulonglong) param_1[1]);
    }
    return;
}


longlong FUN_1401b24c0(int *param_1, int *param_2, longlong param_3) {
    int iVar1;
    int iVar2;
    int iVar3;
    int *piVar4;
    ulonglong uVar5;
    longlong lVar6;
    ulonglong uVar7;
    longlong lVar8;
    int local_28[4];
    int local_18[4];

    local_18[0] = *param_1;
    iVar1 = *param_2;
    local_18[3] = param_1[2];
    local_18[1] = local_18[0];
    if ((local_18[0] <= iVar1) && (local_18[1] = iVar1, local_18[3] < iVar1)) {
        local_18[1] = local_18[3];
    }
    iVar1 = param_2[2];
    if ((local_18[0] <= iVar1) && (local_18[0] = iVar1, local_18[3] < iVar1)) {
        local_18[0] = local_18[3];
    }
    local_28[0] = param_1[1];
    local_28[3] = param_1[3];
    iVar1 = param_2[1];
    local_18[2] = local_18[0];
    local_28[1] = local_28[0];
    if ((local_28[0] <= iVar1) && (local_28[1] = iVar1, local_28[3] < iVar1)) {
        local_28[1] = local_28[3];
    }
    iVar1 = param_2[3];
    if ((local_28[0] <= iVar1) && (local_28[0] = iVar1, local_28[3] < iVar1)) {
        local_28[0] = local_28[3];
    }
    lVar8 = 0;
    local_28[2] = local_28[0];
    uVar7 = 0;
    do {
        iVar1 = local_28[uVar7];
        iVar2 = local_28[uVar7 + 1];
        if (iVar1 != iVar2) {
            uVar5 = 0;
            lVar6 = 0;
            piVar4 = (int *) (param_3 + 4 + lVar8 * 0x10);
            do {
                if (lVar6 != 1) {
                    iVar3 = local_28[uVar5 + 5];
                    if (*(int *) (&DAT_ffffffffffffffe8 + (longlong)(&stack0x00000000 + uVar5 * 4)) != iVar3) {
                        if (param_3 != 0) {
                            piVar4[-1] = *(int *) (&DAT_ffffffffffffffe8 + (longlong)(&stack0x00000000 + uVar5 * 4)
                            );
                            *piVar4 = iVar1;
                            piVar4[1] = iVar3;
                            piVar4[2] = iVar2;
                        }
                        lVar8 = lVar8 + 1;
                        piVar4 = piVar4 + 4;
                    }
                }
                uVar5 = uVar5 + 1;
                lVar6 = lVar6 + uVar7;
            } while (uVar5 < 3);
        }
        uVar7 = uVar7 + 1;
    } while (uVar7 < 3);
    return lVar8;
}


undefined8 FUN_1401b25d0(longlong param_1, float *param_2, float *param_3, float *param_4) {
    float fVar1;
    ulonglong uVar2;
    float *pfVar3;
    ulonglong uVar4;
    longlong lVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float local_res10[6];
    undefined local_18[16];

    uVar2 = 0;
    fVar8 = (float) (DAT_140c3dad8 ^ 0x80000000);
    local_18 = CONCAT412(param_3[3] - param_2[3],
                         CONCAT48(param_3[2] - param_2[2],
                                  CONCAT44(param_3[1] - param_2[1], *param_3 - *param_2)));
    lVar5 = (longlong) local_res10 - (longlong) param_2;
    pfVar3 = param_2;
    uVar4 = uVar2;
    do {
        fVar7 = *pfVar3;
        fVar1 = *(float *) ((param_1 - (longlong) param_2) + (longlong) pfVar3);
        if (fVar1 <= fVar7) {
            fVar1 = *(float *) ((param_1 - (longlong) param_2) + 0x10 + (longlong) pfVar3);
            if (fVar7 <= fVar1) {
                fVar6 = 0.0;
                *(undefined4 * )(lVar5 + (longlong) pfVar3) = 0;
            } else {
                fVar6 = *(float *) (local_18 + -(longlong) param_2 + (longlong) pfVar3);
                if (0.0 <= fVar6) {
                    return 0;
                }
                fVar6 = (fVar1 - fVar7) / fVar6;
                *(float *) (lVar5 + (longlong) pfVar3) = fVar6;
            }
        } else {
            fVar6 = *(float *) (local_18 + -(longlong) param_2 + (longlong) pfVar3);
            if (fVar6 <= 0.0) {
                return 0;
            }
            fVar6 = (fVar1 - fVar7) / fVar6;
            *(float *) (lVar5 + (longlong) pfVar3) = fVar6;
        }
        if (fVar8 < fVar6) {
            fVar8 = fVar6;
        }
        uVar4 = uVar4 + 1;
        pfVar3 = pfVar3 + 1;
    } while (uVar4 < 2);
    while ((pfVar3 = (float *) ((longlong) local_res10 + uVar2), fVar8 < *pfVar3 || fVar8 == *pfVar3 ||
                                                                 ((fVar7 = fVar8 * *(float *) (local_18 + uVar2) +
                                                                           *(float *) (uVar2 + (longlong) param_2),
                                                                         *(float *) (uVar2 + param_1) <= fVar7 &&
                                                                         (pfVar3 = (float *) (
                                                                                 (param_1 - (longlong) local_res10) +
                                                                                 0x10 + (longlong) pfVar3),
                                                                                 fVar7 < *pfVar3 ||
                                                                                 fVar7 == *pfVar3))))) {
        uVar2 = uVar2 + 4;
        if (7 < uVar2) {
            if (param_4 != (float *) 0x0) {
                *param_4 = fVar8;
            }
            return 1;
        }
    }
    return 0;
}


undefined8 FUN_1401b2700(longlong param_1, float *param_2, float *param_3, float *param_4) {
    ulonglong uVar1;
    float *pfVar2;
    ulonglong uVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float local_res10[6];
    undefined local_18[16];

    uVar1 = 0;
    fVar6 = (float) (DAT_140c3dad8 ^ 0x80000000);
    local_18 = CONCAT412(param_3[3] - param_2[3],
                         CONCAT48(param_3[2] - param_2[2],
                                  CONCAT44(param_3[1] - param_2[1], *param_3 - *param_2)));
    pfVar2 = param_2;
    uVar3 = uVar1;
    do {
        fVar5 = *pfVar2;
        fVar4 = *(float *) ((param_1 - (longlong) param_2) + (longlong) pfVar2);
        if ((fVar5 < fVar4) ||
            (fVar4 = *(float *) ((param_1 - (longlong) param_2) + 0x10 + (longlong) pfVar2), fVar4 < fVar5)) {
            if (*(float *) (local_18 + -(longlong) param_2 + (longlong) pfVar2) == 0.0) {
                return 0;
            }
            fVar5 = (fVar4 - fVar5) / *(float *) (local_18 + -(longlong) param_2 + (longlong) pfVar2);
            *(float *) (((longlong) local_res10 - (longlong) param_2) + (longlong) pfVar2) = fVar5;
        } else {
            fVar5 = 0.0;
            *(undefined4 * )(((longlong) local_res10 - (longlong) param_2) + (longlong) pfVar2) = 0;
        }
        if (fVar6 < fVar5) {
            fVar6 = fVar5;
        }
        uVar3 = uVar3 + 1;
        pfVar2 = pfVar2 + 1;
    } while (uVar3 < 2);
    while ((pfVar2 = (float *) ((longlong) local_res10 + uVar1), fVar6 < *pfVar2 || fVar6 == *pfVar2 ||
                                                                 ((fVar5 = fVar6 * *(float *) (local_18 + uVar1) +
                                                                           *(float *) (uVar1 + (longlong) param_2),
                                                                         *(float *) (uVar1 + param_1) <= fVar5 &&
                                                                         (pfVar2 = (float *) (
                                                                                 (param_1 - (longlong) local_res10) +
                                                                                 0x10 + (longlong) pfVar2),
                                                                                 fVar5 < *pfVar2 ||
                                                                                 fVar5 == *pfVar2))))) {
        uVar1 = uVar1 + 4;
        if (7 < uVar1) {
            if (param_4 != (float *) 0x0) {
                *param_4 = fVar6;
            }
            return 1;
        }
    }
    return 0;
}


undefined8 FUN_1401b2810(longlong param_1, float *param_2, float *param_3, float *param_4) {
    float *pfVar1;
    float fVar2;
    float *pfVar3;
    longlong lVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    float fVar7;
    float fVar8;
    float local_res10[2];
    undefined local_18[16];

    uVar6 = 0;
    fVar8 = (float) (DAT_140c3dad8 ^ 0x80000000);
    local_18 = CONCAT412(param_3[3] - param_2[3],
                         CONCAT48(param_3[2] - param_2[2],
                                  CONCAT44(param_3[1] - param_2[1], *param_3 - *param_2)));
    lVar4 = (longlong) local_res10 - (longlong) param_2;
    pfVar3 = param_2;
    uVar5 = uVar6;
    do {
        fVar7 = *pfVar3;
        fVar2 = *(float *) ((param_1 - (longlong) param_2) + (longlong) pfVar3);
        if (fVar2 <= fVar7) {
            fVar2 = *(float *) ((param_1 - (longlong) param_2) + 0x10 + (longlong) pfVar3);
            if (fVar7 <= fVar2) {
                fVar7 = 0.0;
                *(undefined4 * )(lVar4 + (longlong) pfVar3) = 0;
            } else {
                if (fVar2 < *(float *) (((longlong) param_3 - (longlong) param_2) + (longlong) pfVar3)) {
                    return 0;
                }
                fVar7 = (fVar2 - fVar7) / *(float *) (local_18 + -(longlong) param_2 + (longlong) pfVar3);
                *(float *) (lVar4 + (longlong) pfVar3) = fVar7;
            }
        } else {
            pfVar1 = (float *) (((longlong) param_3 - (longlong) param_2) + (longlong) pfVar3);
            if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
                return 0;
            }
            fVar7 = (fVar2 - fVar7) / *(float *) (local_18 + -(longlong) param_2 + (longlong) pfVar3);
            *(float *) (lVar4 + (longlong) pfVar3) = fVar7;
        }
        if (fVar8 < fVar7) {
            fVar8 = fVar7;
        }
        uVar5 = uVar5 + 1;
        pfVar3 = pfVar3 + 1;
    } while (uVar5 < 2);
    while ((pfVar3 = (float *) ((longlong) local_res10 + uVar6), fVar8 < *pfVar3 || fVar8 == *pfVar3 ||
                                                                 ((fVar7 = fVar8 * *(float *) (local_18 + uVar6) +
                                                                           *(float *) (uVar6 + (longlong) param_2),
                                                                         *(float *) (uVar6 + param_1) <= fVar7 &&
                                                                         (pfVar3 = (float *) (
                                                                                 (param_1 - (longlong) local_res10) +
                                                                                 0x10 + (longlong) pfVar3),
                                                                                 fVar7 < *pfVar3 ||
                                                                                 fVar7 == *pfVar3))))) {
        uVar6 = uVar6 + 4;
        if (7 < uVar6) {
            if (param_4 != (float *) 0x0) {
                *param_4 = fVar8;
            }
            return 1;
        }
    }
    return 0;
}


undefined8 FUN_1401b2960(float *param_1, undefined4 *param_2, undefined4 *param_3, undefined4 *param_4) {
    undefined(*pauVar1)[16];
    float *pfVar2;
    undefined(*pauVar3)[16];
    undefined(*pauVar4)[16];
    undefined(*pauVar5)[16];
    ulonglong uVar6;
    undefined(*pauVar7)[16];
    float fVar8;
    float fVar9;
    float local_f8;
    uint local_f4;
    float local_f0;
    uint local_ec;
    undefined4 local_e8;
    undefined4 uStack228;
    undefined4 uStack224;
    undefined4 uStack220;
    undefined4 *local_d0;
    undefined4 local_c8;
    undefined4 uStack196;
    undefined4 uStack192;
    undefined4 uStack188;
    undefined4 *local_b0;
    undefined4 local_a8;
    undefined4 uStack164;
    undefined4 uStack160;
    undefined4 uStack156;
    undefined4 *local_90;
    float local_88[6];
    undefined(*local_70[13])[16];

    local_e8 = *param_2;
    uStack228 = param_2[1];
    uStack224 = param_2[2];
    uStack220 = param_2[3];
    local_d0 = &local_c8;
    pauVar4 = (undefined(*)[16]) & local_e8;
    local_b0 = &local_a8;
    pauVar7 = (undefined(*)[16])
    local_88;
    local_c8 = *param_3;
    uStack196 = param_3[1];
    uStack192 = param_3[2];
    uStack188 = param_3[3];
    local_f4 = (uint) param_1[4] ^ 0x80000000;
    local_a8 = *param_4;
    uStack164 = param_4[1];
    uStack160 = param_4[2];
    uStack156 = param_4[3];
    uVar6 = 0;
    local_90 = &local_e8;
    local_ec = (uint) param_1[5] ^ 0x80000000;
    local_f8 = *param_1;
    local_f0 = param_1[1];
    while (true) {
        fVar9 = *(float *) ((longlong) & local_f8 + uVar6);
        pauVar1 = *(undefined(**)[16])(pauVar4[1] + 8);
        *(float *) pauVar4[1] =
                *(float *) (*pauVar4 + 4) * *(float *) ((longlong) & DAT_140b5f0f0 + uVar6) +
                *(float *) *pauVar4 * *(float *) ((longlong) & DAT_140b5f100 + uVar6) + fVar9;
        pauVar3 = pauVar4;
        pauVar5 = pauVar4;
        for (; pauVar1 != pauVar4; pauVar1 = *(undefined(**)[16])(pauVar1[1] + 8)) {
            fVar8 = *(float *) (*pauVar1 + 4) * *(float *) ((longlong) & DAT_140b5f0f0 + uVar6) +
                    *(float *) ((longlong) & DAT_140b5f100 + uVar6) * *(float *) *pauVar1 + fVar9;
            *(float *) pauVar1[1] = fVar8;
            if (fVar8 < *(float *) pauVar3[1]) {
                pauVar3 = pauVar1;
            }
            if (*(float *) pauVar5[1] <= fVar8 && fVar8 != *(float *) pauVar5[1]) {
                pauVar5 = pauVar1;
            }
        }
        if (0.0 < *(float *) pauVar3[1]) break;
        if (0.0 < *(float *) pauVar5[1]) {
            fVar9 = *(float *) (*(longlong * )(pauVar3[1] + 8) + 0x10);
            pauVar4 = pauVar3;
            while (fVar9 <= 0.0) {
                pauVar4 = *(undefined(**)[16])(pauVar4[1] + 8);
                fVar9 = *(float *) (*(longlong * )(pauVar4[1] + 8) + 0x10);
            }
            fVar9 = *(float *) (*(longlong * )(pauVar4[1] + 8) + 0x10);
            pauVar1 = pauVar4;
            while (0.0 < fVar9) {
                pauVar1 = *(undefined(**)[16])(pauVar1[1] + 8);
                fVar9 = *(float *) (*(longlong * )(pauVar1[1] + 8) + 0x10);
            }
            *(undefined(**)[16])(pauVar4[1] + 8) = pauVar7;
            fVar9 = *(float *) pauVar4[1] / (*(float *) pauVar4[1] - *(float *) pauVar7[1]);
            *pauVar7 = CONCAT412(fVar9 * (*(float *) (*pauVar7 + 0xc) - *(float *) (*pauVar4 + 0xc)) +
                                 *(float *) (*pauVar4 + 0xc),
                                 CONCAT48(fVar9 * (*(float *) (*pauVar7 + 8) - *(float *) (*pauVar4 + 8)) +
                                          *(float *) (*pauVar4 + 8),
                                          CONCAT44(fVar9 * (*(float *) (*pauVar7 + 4) -
                                                            *(float *) (*pauVar4 + 4)) +
                                                   *(float *) (*pauVar4 + 4),
                                                   fVar9 * (*(float *) *pauVar7 - *(float *) *pauVar4) +
                                                   *(float *) *pauVar4)));
            *(undefined4 *) pauVar7[1] = 0;
            *(undefined(**)[16])(pauVar7[1] + 8) = pauVar1;
            pfVar2 = *(float **) (pauVar1[1] + 8);
            fVar9 = *(float *) pauVar1[1] / (*(float *) pauVar1[1] - pfVar2[4]);
            *pauVar1 = CONCAT412(fVar9 * (pfVar2[3] - *(float *) (*pauVar1 + 0xc)) +
                                 *(float *) (*pauVar1 + 0xc),
                                 CONCAT48(fVar9 * (pfVar2[2] - *(float *) (*pauVar1 + 8)) +
                                          *(float *) (*pauVar1 + 8),
                                          CONCAT44(fVar9 * (pfVar2[1] - *(float *) (*pauVar1 + 4)) +
                                                   *(float *) (*pauVar1 + 4),
                                                   fVar9 * (*pfVar2 - *(float *) *pauVar1) +
                                                   *(float *) *pauVar1)));
            *(undefined4 *) pauVar1[1] = 0;
        }
        uVar6 = uVar6 + 4;
        pauVar7 = pauVar7[2];
        if (0xf < uVar6) {
            return 1;
        }
    }
    return 0;
}


longlong FUN_1401b2ba0(float *param_1, float *param_2, longlong param_3) {
    float fVar1;
    ulonglong uVar2;
    longlong lVar3;
    undefined(*pauVar4)[16];
    ulonglong uVar5;
    longlong lVar6;
    float fVar7;
    float fVar8;
    float local_68[4];
    float local_58[22];

    local_58[0] = *param_1;
    lVar6 = 0;
    uVar5 = 0;
    local_58[3] = param_1[4];
    fVar7 = *param_2;
    if (local_58[3] <= *param_2) {
        fVar7 = local_58[3];
    }
    fVar8 = param_2[4];
    if (local_58[3] <= param_2[4]) {
        fVar8 = local_58[3];
    }
    local_58[1] = local_58[0];
    if (local_58[0] <= fVar7) {
        local_58[1] = fVar7;
    }
    local_68[3] = param_1[5];
    if (local_58[0] <= fVar8) {
        local_58[0] = fVar8;
    }
    local_68[0] = param_1[1];
    fVar7 = param_2[1];
    if (local_68[3] <= param_2[1]) {
        fVar7 = local_68[3];
    }
    fVar8 = param_2[5];
    if (local_68[3] <= param_2[5]) {
        fVar8 = local_68[3];
    }
    local_68[1] = local_68[0];
    if (local_68[0] <= fVar7) {
        local_68[1] = fVar7;
    }
    if (local_68[0] <= fVar8) {
        local_68[0] = fVar8;
    }
    local_58[2] = local_58[0];
    local_68[2] = local_68[0];
    do {
        fVar7 = local_68[uVar5];
        fVar8 = local_68[uVar5 + 1];
        if (fVar7 != fVar8) {
            uVar2 = 0;
            lVar3 = 0;
            pauVar4 = (undefined(*)[16])(lVar6 * 0x20 + param_3);
            do {
                if (lVar3 != 1) {
                    fVar1 = local_68[uVar2 + 5];
                    if (local_68[uVar2 + 4] != fVar1) {
                        if (param_3 != 0) {
                            *pauVar4 = ZEXT816(CONCAT44(fVar7, local_68[uVar2 + 4]));
                            pauVar4[1] = ZEXT816(CONCAT44(fVar8, fVar1));
                        }
                        lVar6 = lVar6 + 1;
                        pauVar4 = pauVar4[2];
                    }
                }
                uVar2 = uVar2 + 1;
                lVar3 = lVar3 + uVar5;
            } while (uVar2 < 3);
        }
        uVar5 = uVar5 + 1;
    } while (uVar5 < 3);
    return lVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined (*) [16]
FUN_1401b2ce0(undefined(*param_1)
[16],
ushort *param_2
)

{
int iVar1;
int iVar3;
int iVar4;
undefined auVar2[16];
undefined auVar5[16];
undefined auVar6[16];
undefined auVar7[16];
undefined auVar8[16];
undefined auVar9[16];
uint uVar10;
uint uVar13;
int iVar14;
undefined auVar11[16];
int iVar15;
undefined auVar12[16];
undefined auVar16[16];
undefined auVar17[16];

auVar11 = ~_DAT_140b7aa30 & ZEXT616(CONCAT24(param_2[1], (uint) * param_2));
auVar16 = _DAT_140b7aa30 & ZEXT616(CONCAT24(param_2[1], (uint) * param_2));
iVar1 = SUB164(auVar11 >> 0x20, 0);
iVar3 = SUB164(auVar11 >> 0x40, 0);
iVar4 = SUB164(auVar11 >> 0x60, 0);
uVar10 = SUB164(auVar11, 0) * 0x2000 + 0x38000000;
uVar13 = iVar1 * 0x2000 + 0x38000000;
iVar14 = iVar3 * 0x2000 + 0x38000000;
iVar15 = iVar4 * 0x2000 + 0x38000000;
auVar12 = CONCAT412(iVar15, CONCAT48(iVar14, CONCAT44(uVar13, uVar10)));
auVar11 = CONCAT412(-(uint)(iVar4 == 0),
                    CONCAT48(-(uint)(iVar3 == 0),
                             CONCAT44(-(uint)(iVar1 == 0), -(uint)(SUB164(auVar11, 0) == 0))));
auVar17 = ~auVar11 &
          CONCAT412(-(uint)(iVar15 < 0x38800000),
                    CONCAT48(-(uint)(iVar14 < 0x38800000),
                             CONCAT44(-(uint)(uVar13 < 0x38800000), -(uint)(uVar10 < 0x38800000))));
if ((ushort)((ushort)(
SUB161(auVar17
>> 7,0) & 1) | (ushort)(
SUB161(auVar17
>> 0xf,0) & 1) << 1 |
(ushort)(
SUB161(auVar17
>> 0x17,0) & 1) << 2 |
(ushort)(
SUB161(auVar17
>> 0x1f,0) & 1) << 3 |
(ushort)(
SUB161(auVar17
>> 0x27,0) & 1) << 4 |
(ushort)(
SUB161(auVar17
>> 0x2f,0) & 1) << 5 |
(ushort)(
SUB161(auVar17
>> 0x37,0) & 1) << 6 |
(ushort)(
SUB161(auVar17
>> 0x3f,0) & 1) << 7 |
(ushort)(
SUB161(auVar17
>> 0x47,0) & 1) << 8 |
(ushort)(
SUB161(auVar17
>> 0x4f,0) & 1) << 9 |
(ushort)(
SUB161(auVar17
>> 0x57,0) & 1) << 10 |
(ushort)(
SUB161(auVar17
>> 0x5f,0) & 1) << 0xb |
(ushort)(
SUB161(auVar17
>> 0x67,0) & 1) << 0xc |
(ushort)(
SUB161(auVar17
>> 0x6f,0) & 1) << 0xd |
(ushort)(
SUB161(auVar17
>> 0x77,0) & 1) << 0xe |
(ushort)
SUB161(auVar17
>> 0x7f,0) << 0xf) != 0) {
auVar5 = _DAT_140b7aa90 & auVar12;
iVar1 = SUB164(auVar5, 0) << 8;
iVar3 = SUB164(auVar5 >> 0x20, 0) << 8;
iVar14 = SUB164(auVar5 >> 0x40, 0) << 8;
iVar4 = SUB164(auVar5 >> 0x60, 0) << 8;
auVar2 = CONCAT412(-(uint)(iVar4 < 0x1000000),
                   CONCAT48(-(uint)(iVar14 < 0x1000000),
                            CONCAT44(-(uint)(iVar3 < 0x1000000), -(uint)(iVar1 < 0x1000000))));
auVar8 = _DAT_140b7a970 & auVar2;
auVar5 = auVar2 & CONCAT412(iVar4, CONCAT48(iVar14, CONCAT44(iVar3, iVar1))) | ~auVar2 & auVar5;
iVar1 = SUB164(auVar5, 0) << 4;
iVar3 = SUB164(auVar5 >> 0x20, 0) << 4;
iVar14 = SUB164(auVar5 >> 0x40, 0) << 4;
iVar4 = SUB164(auVar5 >> 0x60, 0) << 4;
auVar2 = CONCAT412(-(uint)(iVar4 < 0x1000000),
                   CONCAT48(-(uint)(iVar14 < 0x1000000),
                            CONCAT44(-(uint)(iVar3 < 0x1000000), -(uint)(iVar1 < 0x1000000))));
auVar7 = _DAT_140b7a960 & auVar2;
auVar5 = auVar2 & CONCAT412(iVar4, CONCAT48(iVar14, CONCAT44(iVar3, iVar1))) | ~auVar2 & auVar5;
iVar1 = SUB164(auVar5, 0) << 2;
iVar3 = SUB164(auVar5 >> 0x20, 0) << 2;
iVar14 = SUB164(auVar5 >> 0x40, 0) << 2;
iVar4 = SUB164(auVar5 >> 0x60, 0) << 2;
auVar2 = CONCAT412(-(uint)(iVar4 < 0x1000000),
                   CONCAT48(-(uint)(iVar14 < 0x1000000),
                            CONCAT44(-(uint)(iVar3 < 0x1000000), -(uint)(iVar1 < 0x1000000))));
auVar6 = _DAT_140b7a940 & auVar2;
auVar5 = auVar2 & CONCAT412(iVar4, CONCAT48(iVar14, CONCAT44(iVar3, iVar1))) | ~auVar2 & auVar5;
iVar1 = SUB164(auVar5, 0) << 1;
iVar3 = SUB164(auVar5 >> 0x20, 0) << 1;
iVar14 = SUB164(auVar5 >> 0x40, 0) << 1;
iVar4 = SUB164(auVar5 >> 0x60, 0) << 1;
auVar9 = CONCAT412(-(uint)(iVar4 < 0x1000000),
                   CONCAT48(-(uint)(iVar14 < 0x1000000),
                            CONCAT44(-(uint)(iVar3 < 0x1000000), -(uint)(iVar1 < 0x1000000))));
auVar2 = _DAT_140b7a8f0 & auVar9;
auVar12 = (CONCAT412(((((0x71 - SUB164(auVar8 >> 0x60, 0)) - SUB164(auVar7 >> 0x60, 0)) -
                       SUB164(auVar6 >> 0x60, 0)) - SUB164(auVar2 >> 0x60, 0)) * 0x800000,
                     CONCAT48(((((0x71 - SUB164(auVar8 >> 0x40, 0)) - SUB164(auVar7 >> 0x40, 0)) -
                                SUB164(auVar6 >> 0x40, 0)) - SUB164(auVar2 >> 0x40, 0)) * 0x800000,
                              CONCAT44(((((0x71 - SUB164(auVar8 >> 0x20, 0)) -
                                          SUB164(auVar7 >> 0x20, 0)) - SUB164(auVar6 >> 0x20, 0)) -
                                        SUB164(auVar2 >> 0x20, 0)) * 0x800000,
                                       ((((0x71 - SUB164(auVar8, 0)) - SUB164(auVar7, 0)) -
                                         SUB164(auVar6, 0)) - SUB164(auVar2, 0)) * 0x800000))) |
           (auVar9 & CONCAT412(iVar4, CONCAT48(iVar14, CONCAT44(iVar3, iVar1))) | ~auVar9 & auVar5)
           & _DAT_140b7aa90) & auVar17 | ~auVar17 & auVar12;
}
*
param_1 = ~auVar11 & auVar12 |
          CONCAT412(SUB164(auVar16 >> 0x60, 0) << 0x10,
                    CONCAT48(SUB164(auVar16 >> 0x40, 0) << 0x10,
                             CONCAT44(SUB164(auVar16 >> 0x20, 0) << 0x10, SUB164(auVar16, 0) << 0x10
                             )));
return
param_1;
}


undefined4 *FUN_1401b2ed0(undefined4 *param_1, undefined4 *param_2) {
    undefined4 uVar1;
    undefined4 uVar2;
    float fVar3;
    float fVar4;

    fVar4 = (float) param_2[9];
    if (-0.99999 <= fVar4) {
        if (fVar4 <= 0.99999) {
            uVar1 = FUN_1408fd190(param_2[8], param_2[10]);
            fVar4 = (float) ((uint) fVar4 ^ 0x80000000);
            *param_1 = uVar1;
            if (1.0 <= fVar4) {
                fVar4 = 1.0;
            }
            fVar3 = -1.0;
            if (-1.0 <= fVar4) {
                fVar3 = fVar4;
            }
            uVar2 = FUN_1408fcf3c(fVar3);
            uVar1 = param_2[5];
            param_1[1] = uVar2;
            uVar1 = FUN_1408fd190(param_2[1], uVar1);
            param_1[2] = uVar1;
        } else {
            uVar1 = FUN_1408fd190(param_2[2] ^ 0x80000000, *param_2);
            param_1[1] = 0xbfc90fdb;
            param_1[2] = 0;
            *param_1 = uVar1;
        }
    } else {
        uVar1 = FUN_1408fd190(param_2[2] ^ 0x80000000, *param_2);
        *(undefined8 * )(param_1 + 1) = 0x3fc90fdb;
        *param_1 = uVar1;
    }
    return param_1;
}


undefined8 FUN_1401b2fe0(undefined8 param_1, float *param_2) {
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float local_b8;
    float local_b4;
    float local_b0;
    undefined4 local_ac;
    float local_a8;
    float local_a4;
    float local_a0;
    undefined4 local_9c;
    float local_98;
    float local_94;
    float local_90;
    undefined4 local_8c;
    undefined4 local_88;
    undefined4 uStack132;
    undefined4 uStack128;
    undefined4 uStack124;

    local_ac = 0;
    local_9c = 0;
    local_8c = 0;
    fVar1 = *param_2;
    fVar2 = param_2[1];
    fVar3 = param_2[3];
    fVar4 = fVar2 * 2.0;
    local_94 = fVar3 * fVar1 * 2.0;
    local_90 = 1.0 - fVar1 * fVar1 * 2.0;
    local_b8 = (1.0 - fVar2 * fVar4) - 0.0;
    local_b4 = fVar1 * fVar4 + fVar3 * 0.0;
    local_a8 = fVar1 * fVar4 - fVar3 * 0.0;
    local_b0 = fVar1 * 0.0 - fVar3 * fVar4;
    local_98 = fVar1 * 0.0 + fVar3 * fVar4;
    local_a4 = local_90 - 0.0;
    local_90 = local_90 - fVar2 * fVar4;
    local_a0 = fVar2 * 0.0 + local_94;
    local_94 = fVar2 * 0.0 - local_94;
    local_88 = 0;
    uStack132 = 0;
    uStack128 = 0;
    uStack124 = 0x3f800000;
    FUN_1401b2ed0(param_1, &local_b8);
    return param_1;
}


undefined4 *FUN_1401b3170(undefined4 *param_1, uint *param_2) {
    undefined4 uVar1;
    float fVar2;
    float fVar3;

    fVar3 = (float) param_2[1];
    if (0.99999 < fVar3) {
        *(undefined8 * )(param_1 + 1) = 0x3fc90fdb;
        *param_1 = 0;
        return param_1;
    }
    if (fVar3 < -0.99999) {
        param_1[1] = 0xbfc90fdb;
        *param_1 = 0;
        param_1[2] = 0;
        return param_1;
    }
    uVar1 = FUN_1408fd190(*param_2 ^ 0x80000000, param_2[2] ^ 0x80000000);
    if (1.0 <= fVar3) {
        fVar3 = 1.0;
    }
    *param_1 = uVar1;
    fVar2 = -1.0;
    if (-1.0 <= fVar3) {
        fVar2 = fVar3;
    }
    uVar1 = FUN_1408fcf3c(fVar2);
    param_1[2] = 0;
    param_1[1] = uVar1;
    return param_1;
}


float *FUN_1401b3250(float *param_1, float *param_2, float *param_3) {
    uint in_EAX;
    uint uVar1;
    int iVar2;
    float fVar3;
    float fVar4;
    float in_XMM3_Da;
    float fVar5;
    float fVar6;

    fVar5 = ((param_3[2] - param_2[2]) + 3.141593) * 0.1591549;
    iVar2 = (int) fVar5;
    fVar3 = fVar5;
    if ((iVar2 != -0x80000000) && ((float) iVar2 != fVar5)) {
        uVar1 = movmskps(in_EAX, ZEXT816(CONCAT44(fVar5, fVar5)));
        in_EAX = uVar1 & 1;
        fVar3 = (float) (iVar2 - in_EAX);
    }
    fVar5 = (((fVar5 - fVar3) * 6.283185 - 3.141593) * in_XMM3_Da + param_2[2] + 3.141593) * 0.1591549;
    fVar3 = (param_3[1] - param_2[1]) * in_XMM3_Da + param_2[1];
    if (1.570796 <= fVar3) {
        fVar3 = 1.570796;
    }
    fVar6 = -1.570796;
    if (-1.570796 <= fVar3) {
        fVar6 = fVar3;
    }
    fVar4 = ((*param_3 - *param_2) + 3.141593) * 0.1591549;
    iVar2 = (int) fVar4;
    fVar3 = fVar4;
    if ((iVar2 != -0x80000000) && ((float) iVar2 != fVar4)) {
        uVar1 = movmskps(in_EAX, ZEXT816(CONCAT44(fVar4, fVar4)));
        in_EAX = uVar1 & 1;
        fVar3 = (float) (iVar2 - in_EAX);
    }
    fVar4 = (((fVar4 - fVar3) * 6.283185 - 3.141593) * in_XMM3_Da + *param_2 + 3.141593) * 0.1591549;
    iVar2 = (int) fVar4;
    fVar3 = fVar4;
    if ((iVar2 != -0x80000000) && ((float) iVar2 != fVar4)) {
        uVar1 = movmskps(in_EAX, ZEXT816(CONCAT44(fVar4, fVar4)));
        in_EAX = uVar1 & 1;
        fVar3 = (float) (iVar2 - in_EAX);
    }
    param_1[1] = fVar6;
    iVar2 = (int) fVar5;
    *param_1 = (fVar4 - fVar3) * 6.283185 - 3.141593;
    fVar3 = fVar5;
    if ((iVar2 != -0x80000000) && ((float) iVar2 != fVar5)) {
        uVar1 = movmskps(in_EAX, ZEXT816(CONCAT44(fVar5, fVar5)));
        fVar3 = (float) (iVar2 - (uVar1 & 1));
    }
    param_1[2] = (fVar5 - fVar3) * 6.283185 - 3.141593;
    return param_1;
}


longlong FUN_1401b3420(longlong param_1) {
    if (*(longlong * )(param_1 + 0x10) != 0) {
        FUN_1401b3420(*(longlong * )(param_1 + 0x10), 1);
    }
    FUN_14018b900(param_1, 0);
    return param_1;
}


LPWSTR FUN_1401b3450(LPWSTR param_1, longlong param_2, uint param_3) {
    WCHAR WVar1;
    uint uVar2;
    DWORD DVar3;
    DWORD DVar4;
    uint *puVar5;
    HMODULE hLibModule;
    longlong lVar6;
    WCHAR *pWVar7;
    LPWSTR pWVar8;
    uint **ppuVar9;
    longlong lVar10;
    undefined * *ppuVar11;
    uint *puVar12;
    LPWSTR pWVar13;
    wchar_t *pwVar14;
    uint *puVar15;
    int iVar16;
    LPWSTR local_38;
    LPWSTR local_30;

    puVar15 = (uint *) 0x0;
    if ((param_3 >> 0x1d & 1) == 0) {
        uVar2 = (int) param_3 >> 0x10 & 0x1fff;
        DVar3 = (DWORD) param_2;
        if (uVar2 == 9) {
            DVar3 = FormatMessageW(0x1200, (LPCVOID) 0x0, param_3, 0, param_1, DVar3, (va_list *) 0x0);
            if (DVar3 != 0) {
                WVar1 = *param_1;
                pWVar7 = param_1;
                while ((WVar1 != L'\0' && (*pWVar7 != L'\r'))) {
                    pWVar7 = pWVar7 + 1;
                    WVar1 = *pWVar7;
                }
                *pWVar7 = L'\0';
                FUN_14001b370(pWVar7, param_2 - ((longlong) pWVar7 - (longlong) param_1 >> 1), L" (%0.8x)",
                              param_3);
                return param_1;
            }
        } else if (uVar2 == 7) {
            uVar2 = param_3 & 0xffff;
            ppuVar11 = &PTR_u_Winhttp_dll_140a46f00;
            puVar12 = puVar15;
            do {
                if (((*(uint * )(ppuVar11 + -1) <= uVar2) && (uVar2 < *(uint * )((longlong) ppuVar11 + -4))) &&
                    (hLibModule = (HMODULE) FUN_140193770(*ppuVar11), hLibModule != (HMODULE) 0x0)) {
                    DVar4 = FormatMessageW(0xa00, hLibModule, uVar2, 0, param_1, DVar3, (va_list *) 0x0);
                    if (DVar4 != 0) {
                        WVar1 = *param_1;
                        pWVar7 = param_1;
                        while ((WVar1 != L'\0' && (*pWVar7 != L'\r'))) {
                            pWVar7 = pWVar7 + 1;
                            WVar1 = *pWVar7;
                        }
                        *pWVar7 = L'\0';
                        FUN_14001b370(pWVar7, param_2 - ((longlong) pWVar7 - (longlong) param_1 >> 1), L" (%0.8x)",
                                      param_3);
                        FreeLibrary(hLibModule);
                        return param_1;
                    }
                    FreeLibrary(hLibModule);
                }
                puVar12 = puVar12 + 4;
                ppuVar11 = ppuVar11 + 2;
            } while (puVar12 < &DAT_00000010);
            DVar3 = FormatMessageW(0x1200, (LPCVOID) 0x0, uVar2, 0, param_1, DVar3, (va_list *) 0x0);
            if (DVar3 != 0) {
                WVar1 = *param_1;
                pWVar7 = param_1;
                while ((WVar1 != L'\0' && (*pWVar7 != L'\r'))) {
                    pWVar7 = pWVar7 + 1;
                    WVar1 = *pWVar7;
                }
                *pWVar7 = L'\0';
                FUN_14001b370(pWVar7, param_2 - ((longlong) pWVar7 - (longlong) param_1 >> 1), L" (%0.8x)",
                              param_3);
                return param_1;
            }
        } else if (((uVar2 == 0x876) && (DAT_140c63780 != (code *) 0x0)) && (DAT_140c63778 != (code *) 0x0)) {
            lVar6 = (*DAT_140c63780)(param_3);
            lVar10 = (*DAT_140c63778)(param_3);
            if ((lVar6 != 0) && (lVar10 != 0)) {
                FUN_1401b38f0(param_1, param_2, lVar6, &local_38, &local_30);
                pwVar14 = L" (%s)";
                LAB_1401b38c3:
                FUN_14001b370(local_38, local_30, pwVar14, lVar10);
                return param_1;
            }
        } else {
            puVar12 = &DAT_140a46f20;
            puVar5 = puVar15;
            do {
                if (param_3 == *puVar12) {
                    FUN_1401b38f0(param_1, param_2, *(undefined8 * )(puVar12 + 4), &local_38, &local_30);
                    pwVar14 = L" (%s)";
                    pWVar8 = local_38;
                    LAB_1401b38bf:
                    local_38 = pWVar8;
                    lVar10 = *(longlong * )(puVar12 + 2);
                    goto LAB_1401b38c3;
                }
                puVar5 = puVar5 + 6;
                puVar12 = puVar12 + 6;
            } while (puVar5 < (uint *) 0x138);
        }
    } else {
        ppuVar9 = DAT_140c63770;
        if (DAT_140c63770 != (uint **) 0x0) {
            do {
                if (ppuVar9[1] != (uint *) 0x0) {
                    puVar12 = *ppuVar9;
                    puVar5 = puVar15;
                    do {
                        if (*puVar12 == param_3) {
                            if (puVar12 == (uint *) 0x0) goto LAB_1401b3729;
                            FUN_1401b38f0(param_1, param_2, *(undefined8 * )(puVar12 + 4), &local_30, &local_38);
                            pwVar14 = L" (%s)";
                            pWVar8 = local_30;
                            local_30 = local_38;
                            goto LAB_1401b38bf;
                        }
                        puVar5 = (uint * )((longlong) puVar5 + 1);
                        puVar12 = puVar12 + 6;
                    } while (puVar5 < ppuVar9[1]);
                }
                ppuVar9 = (uint **) ppuVar9[2];
            } while (ppuVar9 != (uint **) 0x0);
        }
    }
    LAB_1401b3729:
    iVar16 = 0;
    if ((int) param_3 < 0) {
        pWVar8 = local_30;
        pWVar13 = local_30;
        if (param_2 - 1U < 0x7fffffff) {
            pWVar8 = param_1;
            lVar10 = param_2;
            do {
                if (((0x7ffffffe - param_2) + lVar10 == 0) ||
                    (WVar1 = *(WCHAR * )(((longlong) L"Unknown failure" - (longlong) param_1) + (longlong) pWVar8
                    ), WVar1 == L'\0')) {
                    if (lVar10 != 0) goto LAB_1401b3796;
                    break;
                }
                *pWVar8 = WVar1;
                pWVar8 = pWVar8 + 1;
                puVar15 = (uint * )((longlong) puVar15 + 1);
                lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
            pWVar8 = pWVar8 + -1;
            iVar16 = -0x7ff8ff86;
            puVar15 = (uint * )((longlong) puVar15 + -1);
            LAB_1401b3796:
            *pWVar8 = L'\0';
            pWVar8 = param_1 + (longlong) puVar15;
            pWVar13 = (LPWSTR)(param_2 - (longlong) puVar15);
            if (((iVar16 + 0x80000000U & 0x80000000) == 0) &&
                (pWVar8 = local_30, pWVar13 = local_30, iVar16 == -0x7ff8ff86)) {
                FUN_14001b370(param_1 + (longlong) puVar15, (LPWSTR)(param_2 - (longlong) puVar15), L" (%0.8x)",
                              param_3);
                return param_1;
            }
        } else if (param_2 != 0) {
            *param_1 = L'\0';
        }
        FUN_14001b370(pWVar8, pWVar13, L" (%0.8x)", param_3);
    } else {
        pWVar8 = local_30;
        pWVar13 = local_30;
        if (param_2 - 1U < 0x7fffffff) {
            pWVar8 = param_1;
            lVar10 = param_2;
            do {
                if (((0x7ffffffe - param_2) + lVar10 == 0) ||
                    (WVar1 = *(WCHAR * )(((longlong) L"Unknown success" - (longlong) param_1) + (longlong) pWVar8
                    ), WVar1 == L'\0')) {
                    if (lVar10 != 0) goto LAB_1401b384c;
                    break;
                }
                *pWVar8 = WVar1;
                pWVar8 = pWVar8 + 1;
                puVar15 = (uint * )((longlong) puVar15 + 1);
                lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
            pWVar8 = pWVar8 + -1;
            iVar16 = -0x7ff8ff86;
            puVar15 = (uint * )((longlong) puVar15 + -1);
            LAB_1401b384c:
            *pWVar8 = L'\0';
            pWVar8 = param_1 + (longlong) puVar15;
            pWVar13 = (LPWSTR)(param_2 - (longlong) puVar15);
            if (((iVar16 + 0x80000000U & 0x80000000) == 0) &&
                (pWVar8 = local_30, pWVar13 = local_30, iVar16 == -0x7ff8ff86)) {
                pWVar8 = param_1 + (longlong) puVar15;
                pWVar13 = (LPWSTR)(param_2 - (longlong) puVar15);
            }
        } else if (param_2 != 0) {
            *param_1 = L'\0';
        }
        FUN_14001b370(pWVar8, pWVar13, L" (%0.8x)", param_3);
    }
    return param_1;
}


ulonglong FUN_1401b38f0(short *param_1, longlong param_2, short *param_3, short **param_4,
                        longlong *param_5) {
    short sVar1;
    short *psVar2;
    uint uVar3;
    longlong lVar4;
    ulonglong uVar5;
    uint uVar6;
    ulonglong uVar7;

    uVar5 = 0;
    uVar6 = 0;
    uVar3 = uVar6;
    if (0x7ffffffe < param_2 - 1U) {
        uVar3 = 0x80070057;
    }
    if ((int) uVar3 < 0) {
        uVar7 = (ulonglong) uVar3;
        if (param_2 != 0) {
            *param_1 = 0;
        }
    } else {
        if (param_2 == 0) {
            uVar7 = uVar5;
            if (*param_3 != 0) {
                if (param_1 == (short *) 0x0) {
                    return 0x80070057;
                }
                uVar7 = 0x8007007a;
            }
        } else {
            psVar2 = param_1;
            lVar4 = param_2;
            do {
                if (((0x7ffffffe - param_2) + lVar4 == 0) ||
                    (sVar1 = *(short *) (((longlong) param_3 - (longlong) param_1) + (longlong) psVar2),
                            sVar1 == 0)) {
                    if (lVar4 != 0) goto LAB_1401b39b5;
                    break;
                }
                *psVar2 = sVar1;
                psVar2 = psVar2 + 1;
                uVar5 = uVar5 + 1;
                lVar4 = lVar4 + -1;
            } while (lVar4 != 0);
            psVar2 = psVar2 + -1;
            uVar6 = 0x8007007a;
            uVar5 = uVar5 - 1;
            LAB_1401b39b5:
            *psVar2 = 0;
            param_2 = param_2 - uVar5;
            uVar7 = (ulonglong) uVar6;
            param_1 = param_1 + uVar5;
            if (((uVar6 + 0x80000000 & 0x80000000) == 0) && (uVar6 != 0x8007007a)) {
                return (ulonglong) uVar6;
            }
        }
        if (param_4 != (short **) 0x0) {
            *param_4 = param_1;
        }
        if (param_5 != (longlong *) 0x0) {
            *param_5 = param_2;
        }
    }
    return uVar7;
}


int FUN_1401b3a20(longlong param_1) {
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *) (param_1 + 0x38);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_1401b3a50();
        }
        iVar2 = 0;
    }
    return iVar2;
}


longlong FUN_1401b3a50(longlong param_1) {
    longlong lVar1;

    lVar1 = *(longlong * )(param_1 + 0x28);
    if (lVar1 != 0) {
        (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = *(longlong * )(param_1 + 0x18);
    if (lVar1 != 0) {
        (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = *(longlong * )(param_1 + 8);
    if (lVar1 != 0) {
        (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    FUN_14018b900(param_1, 0);
    return param_1;
}


longlong *FUN_1401b3ab0(longlong *param_1, short *param_2) {
    short sVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    *param_1 = 0;
    sVar1 = *param_2;
    lVar4 = 0;
    while (sVar1 != 0) {
        lVar4 = lVar4 + 1;
        sVar1 = param_2[lVar4];
    }
    lVar2 = FUN_14018d250(0, lVar4);
    *param_1 = lVar2;
    *(undefined2 * )(lVar2 + lVar4 * 2) = 0;
    sVar1 = *param_2;
    while (sVar1 != 0) {
        param_2 = param_2 + 1;
        if ((((ushort)(sVar1 - 0x30U) < 0x30) &&
             ((0x87fffffe03ffU >> ((ulonglong)(ushort)(sVar1 - 0x30U) & 0x3f) & 1) != 0)) ||
            ((ushort)(sVar1 - 0x61U) < 0x1a)) {
            lVar4 = *param_1;
            lVar2 = 0;
            if (lVar4 != 0) {
                lVar2 = *(longlong * )(lVar4 + -8);
            }
            lVar3 = FUN_14018d140(lVar4, lVar2 + 1);
            *param_1 = lVar3;
            *(short *) (lVar3 + lVar2 * 2) = sVar1;
            *(undefined2 * )(lVar3 + 2 + lVar2 * 2) = 0;
            if ((lVar4 != lVar3) && (lVar4 != 0)) {
                (**(code * *)(*(longlong * )(lVar4 + -0x10) + 8))(lVar4 + -0x10);
            }
        }
        sVar1 = *param_2;
    }
    return param_1;
}


HANDLE *FUN_1401b3ba0(HANDLE *param_1) {
    longlong lVar1;
    longlong lVar2;
    wchar_t wVar3;
    int iVar4;
    DWORD DVar5;
    LPWSTR pWVar6;
    LPWSTR *hMem;
    undefined8 *puVar7;
    undefined8 *puVar8;
    longlong *plVar9;
    HANDLE pvVar10;
    undefined2 *puVar11;
    HANDLE *ppvVar12;
    HANDLE pvVar13;
    undefined8 *puVar14;
    undefined8 *puVar15;
    undefined8 *puVar16;
    LPWSTR *ppWVar17;
    longlong local_res8;
    int local_90[2];
    char *local_88;
    undefined4 local_80;
    undefined4 local_7c;
    HANDLE *local_78;
    undefined * local_70;
    undefined8 local_68;
    DWORD local_60;
    _SYSTEM_INFO local_58;

    puVar16 = (undefined8 *) 0x0;
    param_1[0x10b] = (HANDLE) 0x0;
    param_1[0x10a] = (HANDLE) 0x0;
    param_1[0x10d] = (HANDLE) 0x0;
    param_1[0x10c] = (HANDLE) 0x0;
    param_1[0x25f] = (HANDLE) 0x0;
    param_1[0x260] = (HANDLE) 0x0;
    param_1[0x261] = (HANDLE) 0x0;
    param_1[0x262] = (HANDLE) 0x0;
    param_1[0x264] = (HANDLE) 0x0;
    param_1[0x265] = (HANDLE) 0x0;
    local_90[0] = 0;
    pWVar6 = GetCommandLineW();
    hMem = CommandLineToArgvW(pWVar6, local_90);
    puVar15 = puVar16;
    ppWVar17 = hMem;
    if (0 < local_90[0]) {
        do {
            pWVar6 = *ppWVar17;
            iVar4 = (int) puVar15;
            if (((((ushort) * pWVar6 - 0x2d & 0xfffffffd) == 0) || ((ushort) * pWVar6 - 0x96 < 2)) &&
                (pWVar6[1] == L'S')) {
                wVar3 = L'S';
                puVar15 = puVar16;
                do {
                    if (wVar3 == L'\0') {
                        puVar15 = puVar16;
                        if (iVar4 + 1 < local_90[0]) {
                            puVar15 = (undefined8 *) hMem[(longlong) iVar4 + 1];
                        }
                        goto LAB_1401b3cab;
                    }
                    wVar3 = pWVar6[(longlong) puVar15 + 2];
                    lVar1 = (longlong) puVar15 + 1;
                    puVar15 = (undefined8 * )((longlong) puVar15 + 1);
                } while (wVar3 == L"SettingsKey"[lVar1]);
            }
            puVar15 = (undefined8 * )(ulonglong)(iVar4 + 1U);
            ppWVar17 = ppWVar17 + 1;
        } while ((int) (iVar4 + 1U) < local_90[0]);
    }
    puVar15 = (undefined8 *) L"WildStar";
    LAB_1401b3cab:
    pvVar13 = param_1[0x264];
    puVar14 = puVar16;
    do {
        puVar14 = (undefined8 * )((longlong) puVar14 + 1);
    } while (L"WildStar"[(longlong) puVar14] != L'\0');
    puVar7 = (undefined8 *) FUN_14018b280((longlong) puVar14 * 2 + 0x12, 0);
    puVar8 = puVar16;
    if (puVar7 != (undefined8 *) 0x0) {
        puVar7[1] = puVar14;
        *puVar7 = &PTR_LAB_140b55060;
        puVar8 = puVar7;
    }
    puVar8 = puVar8 + 2;
    FUN_1407db590(puVar8, L"WildStar", (longlong) puVar14 * 2);
    *(undefined2 * )((longlong) puVar14 * 2 + (longlong) puVar8) = 0;
    param_1[0x264] = puVar8;
    puVar14 = puVar16;
    if (pvVar13 != (HANDLE) 0x0) {
        (**(code * *)(*(longlong * )((longlong) pvVar13 + -0x10) + 8))((longlong) pvVar13 + -0x10);
    }
    do {
        puVar14 = (undefined8 * )((longlong) puVar14 + 1);
    } while (L"WildStar"[(longlong) puVar14] != L'\0');
    iVar4 = FUN_14018e3e0(puVar15, L"WildStar", puVar14);
    if (iVar4 == 0) {
        puVar15 = (undefined8 * )((longlong) puVar15 + (longlong) puVar14 * 2);
    } else {
        pvVar13 = param_1[0x264];
        puVar14 = puVar16;
        if (pvVar13 != (HANDLE) 0x0) {
            puVar14 = *(undefined8 * *)((longlong) pvVar13 + -8);
        }
        pvVar10 = (HANDLE) FUN_14018d140(pvVar13, (longlong) puVar14 + 1);
        *(undefined4 * )((longlong) pvVar10 + (longlong) puVar14 * 2) = 0x5f;
        param_1[0x264] = pvVar10;
        if ((pvVar13 != pvVar10) && (pvVar13 != (HANDLE) 0x0)) {
            (**(code * *)(*(longlong * )((longlong) pvVar13 + -0x10) + 8))((longlong) pvVar13 + -0x10);
        }
    }
    plVar9 = (longlong *) FUN_1401b3ab0(&local_res8, puVar15);
    if (*plVar9 != 0) {
        pvVar13 = param_1[0x264];
        puVar15 = puVar16;
        if (pvVar13 != (HANDLE) 0x0) {
            puVar15 = *(undefined8 * *)((longlong) pvVar13 + -8);
        }
        lVar2 = *(longlong * )(*plVar9 + -8);
        lVar1 = lVar2 + (longlong) puVar15;
        pvVar10 = (HANDLE) FUN_14018d140(pvVar13, lVar1);
        FUN_1407db590((HANDLE)((longlong) pvVar10 + (longlong) puVar15 * 2), *plVar9, lVar2 * 2);
        *(undefined2 * )((longlong) pvVar10 + lVar1 * 2) = 0;
        param_1[0x264] = pvVar10;
        if ((pvVar13 != pvVar10) && (pvVar13 != (HANDLE) 0x0)) {
            (**(code * *)(*(longlong * )((longlong) pvVar13 + -0x10) + 8))((longlong) pvVar13 + -0x10);
        }
    }
    if (local_res8 != 0) {
        (**(code * *)(*(longlong * )(local_res8 + -0x10) + 8))(local_res8 + -0x10);
    }
    FUN_14019e4a0();
    GetModuleFileNameW((HMODULE) 0x0, (LPWSTR)(param_1 + 2), 0x104);
    puVar11 = (undefined2 *) FUN_1407dd8d8(param_1 + 2, 0x5c);
    if (puVar11 != (undefined2 *) 0x0) {
        *puVar11 = 0;
    }
    if (*(short *) (param_1 + 2) != 0) {
        ppvVar12 = param_1 + 2;
        do {
            ppvVar12 = (HANDLE * )((longlong) ppvVar12 + 2);
            puVar16 = (undefined8 * )((longlong) puVar16 + 1);
        } while (*(short *) ppvVar12 != 0);
    }
    param_1[0x43] = puVar16;
    DVar5 = GetCurrentDirectoryW(0x104, (LPWSTR)(param_1 + 0x44));
    param_1[0x85] = (HANDLE)(ulonglong)
    DVar5;
    FUN_1407db590(param_1 + 0x86, param_1 + 2, (longlong) param_1[0x43] * 2 + 2);
    param_1[199] = param_1[0x43];
    *(undefined2 * )(param_1 + 200) = 0;
    param_1[0x109] = (HANDLE) 0x0;
    *(undefined4 * )((longlong) param_1 + 0x129c) = 0;
    param_1[0x254] = (HANDLE) 0x0;
    *(undefined4 * )(param_1 + 0x25d) = 1;
    FUN_1401a1070(param_1 + 0x25e, 1, 1, 0, 0);
    param_1[0x255] = (HANDLE) 0x0;
    param_1[0x256] = (HANDLE) 0x0;
    param_1[599] = (HANDLE) 0x0;
    param_1[600] = (HANDLE) 0x0;
    param_1[0x259] = (HANDLE) 0x0;
    param_1[0x25a] = (HANDLE) 0x0;
    param_1[0x25b] = (HANDLE) 0x0;
    param_1[0x25c] = (HANDLE) 0x0;
    param_1[0x263] = (HANDLE) 0x0;
    pvVar13 = CreateIoCompletionPort((HANDLE) 0xffffffffffffffff, (HANDLE) 0x0, 0, 0);
    *param_1 = pvVar13;
    GetSystemInfo(&local_58);
    local_88 = "Asset";
    local_70 = &LAB_1401b74f0;
    local_80 = 1;
    local_7c = 6;
    local_60 = local_58.dwNumberOfProcessors;
    local_68 = 0;
    local_78 = param_1;
    FUN_1401a0eb0(&local_88);
    LocalFree(hMem);
    return param_1;
}


void FUN_1401b4000(HANDLE *param_1) {
    longlong *plVar1;
    HANDLE pvVar2;
    int *piVar3;
    int iVar4;
    uint uVar5;
    HANDLE pvVar6;
    HANDLE pvVar7;

    pvVar7 = param_1[0x263];
    if (pvVar7 != (HANDLE) 0x0) {
        FUN_1401cf300(pvVar7);
        FUN_14018b900(pvVar7, 0);
    }
    plVar1 = (longlong *) param_1[0x25e];
    if (plVar1 != (longlong *) 0x0) {
        (**(code * *)(*plVar1 + 0x20))(plVar1, 0xffffffff);
        // WARNING: Load size is inaccurate
        (**(code * *)(*param_1[0x25e] + 8))();
    }
    pvVar6 = (HANDLE) 0x0;
    pvVar7 = pvVar6;
    if (param_1[0x10b] != (HANDLE) 0x0) {
        do {
            pvVar2 = param_1[0x10a];
            plVar1 = *(longlong * *)((longlong) pvVar2 + (longlong) pvVar7 * 8);
            if (plVar1 != (longlong *) 0x0) {
                (**(code * *)(*plVar1 + 8))();
                *(undefined8 * )((longlong) pvVar2 + (longlong) pvVar7 * 8) = 0;
            }
            pvVar7 = (HANDLE)((longlong) pvVar7 + 1);
        } while (pvVar7 < param_1[0x10b]);
    }
    pvVar7 = pvVar6;
    if (param_1[0x10d] != (HANDLE) 0x0) {
        do {
            pvVar2 = param_1[0x10c];
            plVar1 = *(longlong * *)((longlong) pvVar2 + (longlong) pvVar7 * 8);
            if (plVar1 != (longlong *) 0x0) {
                (**(code * *)(*plVar1 + 8))();
                *(undefined8 * )((longlong) pvVar2 + (longlong) pvVar7 * 8) = 0;
            }
            pvVar7 = (HANDLE)((longlong) pvVar7 + 1);
        } while (pvVar7 < param_1[0x10d]);
    }
    if ((longlong *) param_1[1] != (longlong *) 0x0) {
        // WARNING: Load size is inaccurate
        iVar4 = (**(code * *)(*param_1[1] + 0x10))();
        if (iVar4 != 0) {
            do {
                PostQueuedCompletionStatus(*param_1, 0, 0, (LPOVERLAPPED) 0x0);
                pvVar6 = (HANDLE)((longlong) pvVar6 + 1);
                // WARNING: Load size is inaccurate
                uVar5 = (**(code * *)(*param_1[1] + 0x10))();
            } while (pvVar6 < (HANDLE)(ulonglong)
            uVar5);
        }
        // WARNING: Load size is inaccurate
        (**(code * *)(*param_1[1] + 0x30))(param_1[1], 0xffffffff);
        // WARNING: Load size is inaccurate
        (**(code * *)(*param_1[1] + 8))();
    }
    if (*param_1 != (HANDLE) 0x0) {
        CloseHandle(*param_1);
    }
    piVar3 = DAT_140c63758;
    if (DAT_140c63758 != (int *) 0x0) {
        LOCK();
        *DAT_140c63758 = *DAT_140c63758 + -1;
        if ((*piVar3 == 0) && (piVar3 != (int *) 0x0)) {
            FUN_1401c8010(piVar3);
            FUN_14018b900(piVar3, 0);
        }
    }
    if ((longlong *) param_1[0x265] != (longlong *) 0x0) {
        // WARNING: Load size is inaccurate
        (**(code * *)(*param_1[0x265] + 8))();
    }
    pvVar7 = param_1[0x264];
    if (pvVar7 != (HANDLE) 0x0) {
        (**(code * *)(*(longlong * )((longlong) pvVar7 + -0x10) + 8))((longlong) pvVar7 + -0x10);
    }
    if (param_1[0x262] != (HANDLE) 0x0) {
        CloseHandle(param_1[0x262]);
    }
    pvVar7 = param_1[0x10c];
    if (pvVar7 != (HANDLE) 0x0) {
        (**(code * *)(*(longlong * )((longlong) pvVar7 + -0x10) + 8))((longlong) pvVar7 + -0x10);
    }
    pvVar7 = param_1[0x10a];
    if (pvVar7 == (HANDLE) 0x0) {
        return;
    }
    // WARNING: Could not recover jumptable at 0x0001401b41e3. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(*(longlong * )((longlong) pvVar7 + -0x10) + 8))((longlong) pvVar7 + -0x10);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1401b41f0(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
    short *psVar1;
    longlong lVar2;
    int iVar3;
    DWORD DVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined8 uVar7;
    short *psVar8;
    int in_stack_00000038;
    undefined auStack1192[32];
    wchar_t *local_488;
    wchar_t *local_480;
    undefined * *local_478;
    undefined8 local_470;
    LPVOID local_468;
    undefined8 local_460;
    undefined * *local_458;
    undefined8 local_450;
    LPVOID local_448;
    short local_438;
    short local_436[263];
    WCHAR local_228[264];
    ulonglong local_18;

    lVar2 = DAT_140c63788;
    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack1192;
    if (*(int *) (DAT_140c63788 + 0x129c) == 0) {
        local_488 = L"..\\Data";
        uVar5 = FUN_1401b5400(param_1, DAT_140c63788 + 0x640, param_3, DAT_140c63788 + 0x10);
        uVar7 = 0;
        *(undefined8 * )(lVar2 + 0x848) = uVar5;
        local_488 = (wchar_t *) 0x0;
        uVar5 = FUN_1401b5400();
        *(undefined8 * )(lVar2 + 0x638) = uVar5;
        GetCurrentDirectoryW(0x104, local_228);
        local_488 = (wchar_t *) 0x0;
        uVar5 = FUN_1401b5400();
        *(undefined8 * )(lVar2 + 0x428) = uVar5;
        local_488 = (wchar_t *) (lVar2 + 0xa7c);
        iVar3 = SHGetFolderPathW(0, 0x801a, 0, 0);
        if (-1 < iVar3) {
            local_488 = (wchar_t *) (lVar2 + 0xc84);
            iVar3 = SHGetFolderPathW(0, 0x801c, 0, 0);
            if (-1 < iVar3) {
                local_488 = (wchar_t *) (lVar2 + 0xe8c);
                iVar3 = SHGetFolderPathW(0, 0x8005, 0, 0);
                if (-1 < iVar3) {
                    DVar4 = GetTempPathW(0x104, (LPWSTR)(lVar2 + 0x1094));
                    if (DVar4 == 0) {
                        GetLastError();
                    } else if (DVar4 < 0x105) {
                        local_488 = L"..\\Patch";
                        FUN_1401b5400();
                        *(uint * )(lVar2 + 0x870) = (uint)(_DAT_140c63734 == 0);
                        if ((in_stack_00000038 == 0) || (iVar3 = FUN_1401b4560(lVar2), -1 < iVar3)) {
                            lVar6 = FUN_14018b280(0xe8, 0);
                            if (lVar6 != 0) {
                                uVar7 = FUN_1401cf210(lVar6, lVar2);
                            }
                            *(undefined8 * )(lVar2 + 0x1318) = uVar7;
                            iVar3 = FUN_1401cf470(uVar7);
                            if ((-1 < iVar3) && (iVar3 = FUN_1401a1120(lVar2 + 0x1328, 4), -1 < iVar3)) {
                                local_480 = L"RemoteCache";
                                local_488 = *(wchar_t **) (lVar2 + 0x1320);
                                iVar3 = FUN_14001b370(&local_438, 0x104, L"%s%s\\%s", lVar2 + 0x1094);
                                if ((-1 < iVar3) && (local_438 != 0)) {
                                    psVar8 = &local_438;
                                    do {
                                        psVar1 = psVar8 + 1;
                                        psVar8 = psVar8 + 1;
                                    } while (*psVar1 != 0);
                                }
                                iVar3 = FUN_1401b5ab0(lVar2, &local_438);
                                if ((iVar3 == 0) || (iVar3 = FUN_1401b6fc0(lVar2, &local_438), -1 < iVar3)) {
                                    *(undefined4 * )(lVar2 + 0x129c) = 1;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        local_478 = &PTR_LAB_140b5e648;
        local_470 = 0;
        local_468 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_478);
        local_458 = local_478;
        local_460 = 0x141d41730;
        local_448 = local_468;
        local_450 = local_470;
        iVar3 = FUN_1401971e0(&DAT_140c8a228, 3, &local_460, &local_458);
        local_478 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_468);
        if (iVar3 != 0) {
            DebugBreak();
        }
    }
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack1192);
    return;
}


void FUN_1401b4560(undefined8 *param_1, undefined8 param_2, uint param_3) {
    WCHAR WVar1;
    undefined8 *puVar2;
    longlong *plVar3;
    WCHAR *pWVar4;
    DWORD DVar5;
    uint uVar6;
    int iVar7;
    int iVar8;
    wchar_t **ppwVar9;
    wchar_t **ppwVar10;
    WCHAR *pWVar11;
    WCHAR *pWVar12;
    longlong lVar13;
    wchar_t **ppwVar14;
    longlong lVar15;
    ulonglong uVar16;
    undefined * puVar17;
    longlong lVar18;
    ulonglong uVar19;
    wchar_t **ppwVar20;
    wchar_t **ppwVar21;
    bool bVar22;
    undefined auStack1336[32];
    wchar_t **local_518;
    wchar_t **local_508;
    wchar_t **local_500;
    wchar_t **local_4f8;
    undefined8 *local_4f0;
    ulonglong local_4e8;
    wchar_t **local_4e0;
    wchar_t *local_4d8;
    wchar_t **local_4d0;
    longlong *local_4c8;
    undefined8 local_4c0;
    longlong local_4b8;
    ulonglong local_4b0;
    wchar_t *local_4a8;
    wchar_t **local_4a0;
    longlong *local_498;
    undefined local_490[54];
    WCHAR aWStack1114[3];
    undefined local_454[524];
    WCHAR local_248[264];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong) auStack1336;
    local_4f0 = param_1;
    if (param_1[0x10b] != 0) goto LAB_1401b4f9f;
    local_518 = (wchar_t **) &DAT_1409e4cfc;
    FUN_14001b370(local_248, 0x104, L"%s\\%s");
    DVar5 = GetFullPathNameW(local_248, 0x104, aWStack1114 + 1, (LPWSTR *) 0x0);
    ppwVar20 = (wchar_t **) 0x0;
    iVar8 = 0;
    uVar16 = (ulonglong) DVar5;
    local_4e8 = uVar16;
    if ((DVar5 != 0) && (aWStack1114[uVar16] == L'\\')) {
        local_4e8 = uVar16 - 1;
        aWStack1114[uVar16] = L'\0';
    }
    lVar15 = -local_4e8;
    lVar18 = lVar15 + 0x104;
    local_508 = (wchar_t **) 0x0;
    iVar7 = iVar8;
    if (0x7ffffffe < lVar15 + 0x103U) {
        iVar7 = -0x7ff8ffa9;
    }
    pWVar12 = aWStack1114 + local_4e8 + 1;
    if (iVar7 < 0) {
        if (lVar18 != 0) {
            *pWVar12 = L'\0';
        }
    } else {
        pWVar11 = pWVar12;
        if (lVar18 == 0) {
            LAB_1401b46b9:
            pWVar11 = pWVar11 + -1;
            iVar7 = -0x7ff8ff86;
            LAB_1401b46c2:
            *pWVar11 = L'\0';
        } else {
            pWVar4 = pWVar12;
            lVar13 = lVar18;
            do {
                pWVar11 = pWVar4;
                if ((lVar13 + 0x7ffffefa + local_4e8 == 0) ||
                    (WVar1 = *(WCHAR * )(((longlong) L"\\Patch\\CoreData.archive" - (longlong) pWVar12) +
                                         (longlong) pWVar11), WVar1 == L'\0')) {
                    iVar7 = iVar8;
                    if (lVar13 != 0) goto LAB_1401b46c2;
                    goto LAB_1401b46b9;
                }
                *pWVar11 = WVar1;
                lVar13 = lVar13 + -1;
                pWVar4 = pWVar11 + 1;
            } while (lVar13 != 0);
            iVar7 = -0x7ff8ff86;
            *pWVar11 = L'\0';
        }
    }
    local_4b8 = lVar18;
    if (iVar7 < 0) goto LAB_1401b4f9f;
    DVar5 = GetFileAttributesW(aWStack1114 + 1);
    ppwVar21 = ppwVar20;
    if (((DVar5 != 0xffffffff) && ((DVar5 & 0x10) == 0)) &&
        (uVar6 = FUN_14018d950(aWStack1114 + 1, *param_1, &local_508), ppwVar21 = local_508,
                (int) uVar6 < 0)) {
        local_4f8 = (wchar_t **) 0x141d416b0;
        local_518 = (wchar_t **) ((ulonglong) local_518 & 0xffffffff00000000 | (ulonglong) uVar6);
        FUN_1401a3130(3, 0, &local_4f8, aWStack1114 + 1);
        ppwVar21 = local_508;
    }
    local_4d8 = L"Patch";
    local_4d0 = ppwVar20;
    do {
        local_4d0 = (wchar_t **) ((longlong) local_4d0 + 1);
    } while (L"Patch"[(longlong) local_4d0] != L'\0');
    local_4c8 = (longlong *) 0x0;
    if ((*(int *) (param_1 + 0x10e) == 0) && ((char) param_3 != '\0')) {
        iVar7 = 0;
        if (0x7ffffffe < lVar15 + 0x103U) {
            iVar7 = -0x7ff8ffa9;
        }
        if (iVar7 < 0) {
            if (lVar18 != 0) {
                *pWVar12 = L'\0';
            }
        } else {
            pWVar11 = pWVar12;
            if (lVar18 == 0) {
                LAB_1401b47da:
                pWVar11 = pWVar11 + -1;
                iVar7 = -0x7ff8ff86;
                LAB_1401b47e3:
                *pWVar11 = L'\0';
            } else {
                pWVar4 = pWVar12;
                lVar13 = lVar18;
                do {
                    pWVar11 = pWVar4;
                    if ((local_4e8 + 0x7ffffefa + lVar13 == 0) ||
                        (WVar1 = *(WCHAR * )(((longlong) L"\\Patch\\Patch.index" - (longlong) pWVar12) +
                                             (longlong) pWVar11), WVar1 == L'\0')) {
                        iVar7 = iVar8;
                        if (lVar13 != 0) goto LAB_1401b47e3;
                        goto LAB_1401b47da;
                    }
                    *pWVar11 = WVar1;
                    lVar13 = lVar13 + -1;
                    pWVar4 = pWVar11 + 1;
                } while (lVar13 != 0);
                iVar7 = -0x7ff8ff86;
                *pWVar11 = L'\0';
            }
        }
        if (-1 < iVar7) {
            DVar5 = GetFileAttributesW(aWStack1114 + 1);
            if ((DVar5 == 0xffffffff) || ((DVar5 & 0x10) != 0)) {
                local_4f8 = (wchar_t **) 0x141d41890;
                FUN_1401a3130(3, 0, &local_4f8, aWStack1114 + 1);
            } else {
                iVar7 = FUN_14018d7d0(aWStack1114 + 1, *param_1, &local_4c8, 0);
                if (-1 < iVar7) goto LAB_1401b4834;
            }
        }
    } else {
        LAB_1401b4834:
        local_4a8 = L"Bootstrap";
        local_4a0 = ppwVar20;
        do {
            local_4a0 = (wchar_t **) ((longlong) local_4a0 + 1);
        } while (L"Bootstrap"[(longlong) local_4a0] != L'\0');
        local_498 = (longlong *) 0x0;
        if ((*(int *) (param_1 + 0x10e) == 0) && ((param_3 >> 8 & 1) != 0)) {
            iVar7 = 0;
            if (0x7ffffffe < lVar15 + 0x103U) {
                iVar7 = -0x7ff8ffa9;
            }
            if (iVar7 < 0) {
                if (lVar18 != 0) {
                    *pWVar12 = L'\0';
                }
            } else if (lVar18 == 0) {
                LAB_1401b4903:
                pWVar12 = pWVar12 + -1;
                iVar7 = -0x7ff8ff86;
                LAB_1401b490c:
                *pWVar12 = L'\0';
            } else {
                lVar15 = (longlong) L"\\Bootstrap\\Bootstrap.index" - (longlong) pWVar12;
                pWVar11 = pWVar12;
                do {
                    pWVar12 = pWVar11;
                    if ((local_4e8 + 0x7ffffefa + lVar18 == 0) ||
                        (WVar1 = *(WCHAR * )(lVar15 + (longlong) pWVar12), WVar1 == L'\0')) {
                        iVar7 = iVar8;
                        if (lVar18 != 0) goto LAB_1401b490c;
                        goto LAB_1401b4903;
                    }
                    *pWVar12 = WVar1;
                    lVar18 = lVar18 + -1;
                    pWVar11 = pWVar12 + 1;
                } while (lVar18 != 0);
                iVar7 = -0x7ff8ff86;
                *pWVar12 = L'\0';
            }
            if (-1 < iVar7) {
                DVar5 = GetFileAttributesW(aWStack1114 + 1);
                if ((DVar5 == 0xffffffff) || ((DVar5 & 0x10) != 0)) {
                    local_4f8 = (wchar_t **) 0x141d417a0;
                    FUN_1401a3130(3, 0, &local_4f8, aWStack1114 + 1);
                } else {
                    iVar8 = FUN_14018d7d0(aWStack1114 + 1, *param_1, &local_498, 0);
                    if (-1 < iVar8) goto LAB_1401b495c;
                }
            }
        } else {
            LAB_1401b495c:
            bVar22 = (param_3 & 1) != 0;
            ppwVar9 = ppwVar20;
            if (bVar22) {
                ppwVar9 = (wchar_t **) FUN_14018db00(0, 1, 0x10);
                *ppwVar9 = L"ClientDataEN";
                ppwVar9[1] = (wchar_t *) &local_4d8;
            }
            uVar19 = (ulonglong) bVar22;
            ppwVar14 = ppwVar9;
            uVar16 = uVar19;
            if ((param_3 & 2) != 0) {
                uVar16 = uVar19 + 1;
                ppwVar10 = (wchar_t **) FUN_14018db00(ppwVar9, uVar16, 0x10);
                ppwVar10[uVar19 * 2] = L"ClientDataFR";
                ppwVar10[uVar19 * 2 + 1] = (wchar_t *) &local_4d8;
                if ((ppwVar9 != ppwVar10) &&
                    (FUN_1407db590(ppwVar10, ppwVar9, uVar19 * 0x10), ppwVar14 = ppwVar10,
                            ppwVar9 != (wchar_t **) 0x0)) {
                    (**(code * *)(ppwVar9[-2] + 4))(ppwVar9 + -2);
                }
            }
            ppwVar9 = ppwVar14;
            uVar19 = uVar16;
            if ((param_3 & 4) != 0) {
                uVar19 = uVar16 + 1;
                ppwVar10 = (wchar_t **) FUN_14018db00(ppwVar14, uVar19, 0x10);
                ppwVar10[uVar16 * 2] = L"ClientDataDE";
                ppwVar10[uVar16 * 2 + 1] = (wchar_t *) &local_4d8;
                if ((ppwVar14 != ppwVar10) &&
                    (FUN_1407db590(ppwVar10, ppwVar14, uVar16 * 0x10), ppwVar9 = ppwVar10,
                            ppwVar14 != (wchar_t **) 0x0)) {
                    (**(code * *)(ppwVar14[-2] + 4))(ppwVar14 + -2);
                }
            }
            ppwVar14 = ppwVar9;
            uVar16 = uVar19;
            if ((param_3 & 8) != 0) {
                uVar16 = uVar19 + 1;
                ppwVar10 = (wchar_t **) FUN_14018db00(ppwVar9, uVar16, 0x10);
                ppwVar10[uVar19 * 2] = L"ClientDataZH";
                ppwVar10[uVar19 * 2 + 1] = (wchar_t *) &local_4d8;
                if ((ppwVar9 != ppwVar10) &&
                    (FUN_1407db590(ppwVar10, ppwVar9, uVar19 * 0x10), ppwVar14 = ppwVar10,
                            ppwVar9 != (wchar_t **) 0x0)) {
                    (**(code * *)(ppwVar9[-2] + 4))(ppwVar9 + -2);
                }
            }
            ppwVar9 = ppwVar14;
            uVar19 = uVar16;
            if ((param_3 & 0x10) != 0) {
                uVar19 = uVar16 + 1;
                ppwVar10 = (wchar_t **) FUN_14018db00(ppwVar14, uVar19, 0x10);
                ppwVar10[uVar16 * 2] = L"ClientData";
                ppwVar10[uVar16 * 2 + 1] = (wchar_t *) &local_4d8;
                if ((ppwVar14 != ppwVar10) &&
                    (FUN_1407db590(ppwVar10, ppwVar14, uVar16 * 0x10), ppwVar9 = ppwVar10,
                            ppwVar14 != (wchar_t **) 0x0)) {
                    (**(code * *)(ppwVar14[-2] + 4))(ppwVar14 + -2);
                }
            }
            ppwVar14 = ppwVar9;
            uVar16 = uVar19;
            if ((param_3 & 0x20) != 0) {
                uVar16 = uVar19 + 1;
                ppwVar10 = (wchar_t **) FUN_14018db00(ppwVar9, uVar16, 0x10);
                ppwVar10[uVar19 * 2] = L"ServerData";
                ppwVar10[uVar19 * 2 + 1] = (wchar_t *) &local_4d8;
                if ((ppwVar9 != ppwVar10) &&
                    (FUN_1407db590(ppwVar10, ppwVar9, uVar19 * 0x10), ppwVar14 = ppwVar10,
                            ppwVar9 != (wchar_t **) 0x0)) {
                    (**(code * *)(ppwVar9[-2] + 4))(ppwVar9 + -2);
                }
            }
            ppwVar9 = ppwVar14;
            uVar19 = uVar16;
            if ((param_3 & 0x40) != 0) {
                uVar19 = uVar16 + 1;
                ppwVar10 = (wchar_t **) FUN_14018db00(ppwVar14, uVar19, 0x10);
                ppwVar10[uVar16 * 2] = L"ToolsData";
                ppwVar10[uVar16 * 2 + 1] = (wchar_t *) &local_4d8;
                if ((ppwVar14 != ppwVar10) &&
                    (FUN_1407db590(ppwVar10, ppwVar14, uVar16 * 0x10), ppwVar9 = ppwVar10,
                            ppwVar14 != (wchar_t **) 0x0)) {
                    (**(code * *)(ppwVar14[-2] + 4))(ppwVar14 + -2);
                }
            }
            ppwVar14 = ppwVar9;
            uVar16 = uVar19;
            if ((char) param_3 < '\0') {
                uVar16 = uVar19 + 1;
                ppwVar10 = (wchar_t **) FUN_14018db00(ppwVar9, uVar16, 0x10);
                ppwVar10[uVar19 * 2] = L"SupportData";
                ppwVar10[uVar19 * 2 + 1] = (wchar_t *) &local_4d8;
                if ((ppwVar9 != ppwVar10) &&
                    (FUN_1407db590(ppwVar10, ppwVar9, uVar19 * 0x10), ppwVar14 = ppwVar10,
                            ppwVar9 != (wchar_t **) 0x0)) {
                    (**(code * *)(ppwVar9[-2] + 4))(ppwVar9 + -2);
                }
            }
            ppwVar9 = ppwVar14;
            uVar19 = uVar16;
            if ((param_3 >> 8 & 1) != 0) {
                uVar19 = uVar16 + 1;
                ppwVar10 = (wchar_t **) FUN_14018db00(ppwVar14, uVar19, 0x10);
                ppwVar10[uVar16 * 2] = L"LauncherData";
                ppwVar10[uVar16 * 2 + 1] = (wchar_t *) &local_4a8;
                if ((ppwVar14 != ppwVar10) &&
                    (FUN_1407db590(ppwVar10, ppwVar14, uVar16 * 0x10), ppwVar9 = ppwVar10,
                            ppwVar14 != (wchar_t **) 0x0)) {
                    (**(code * *)(ppwVar14[-2] + 4))(ppwVar14 + -2);
                }
            }
            local_4b0 = 0;
            if (uVar19 != 0) {
                local_4f8 = ppwVar9 + 1;
                do {
                    puVar2 = (undefined8 * ) * local_4f8;
                    ppwVar14 = (wchar_t **) local_4f8[-1];
                    local_4c0 = *puVar2;
                    local_4e0 = (wchar_t **) puVar2[1];
                    plVar3 = (longlong *) puVar2[2];
                    local_500 = ppwVar14;
                    if (plVar3 != (longlong *) 0x0) {
                        (**(code * *) * plVar3)(plVar3);
                    }
                    local_508 = (wchar_t **) 0x0;
                    local_518 = ppwVar14;
                    iVar8 = FUN_14001b370(aWStack1114 + local_4e8 + 1, local_4b8, L"\\%s\\%s.index", local_4c0);
                    ppwVar14 = ppwVar20;
                    if (iVar8 < 0) {
                        LAB_1401b4ffb:
                        if (ppwVar14 != (wchar_t **) 0x0) {
                            (**(code * *)(*ppwVar14 + 4))(ppwVar14);
                        }
                        if (plVar3 != (longlong *) 0x0) {
                            (**(code * *)(*plVar3 + 8))(plVar3);
                        }
                        break;
                    }
                    DVar5 = GetFileAttributesW(aWStack1114 + 1);
                    if ((DVar5 != 0xffffffff) && ((DVar5 & 0x10) == 0)) {
                        if (plVar3 == (longlong *) 0x0) {
                            puVar17 = (undefined * )
                            0x0;
                        } else {
                            iVar8 = (**(code * *)(*plVar3 + 0x28))
                                    (plVar3, local_454 + (longlong)((longlong) local_4e0 + local_4e8) * 2,
                                     local_490);
                            if (iVar8 < 0) goto LAB_1401b4ffb;
                            puVar17 = local_490;
                        }
                        iVar8 = FUN_14018d7d0(aWStack1114 + 1, *local_4f0, &local_508, puVar17);
                        ppwVar14 = local_508;
                        if (-1 < iVar8) {
                            if (ppwVar21 != (wchar_t **) 0x0) {
                                (**(code * *) * local_508)(local_508);
                                puVar2 = local_4f0;
                                local_4e0 = ppwVar14;
                                FUN_140033260(local_4f0 + 0x10a, &local_4e0);
                                (**(code * *) * ppwVar21)(ppwVar21);
                                local_4e0 = ppwVar21;
                                FUN_140033260(puVar2 + 0x10c, &local_4e0);
                            }
                            local_518 = local_500;
                            local_508 = (wchar_t **) 0x0;
                            iVar8 = FUN_14001b370(aWStack1114 + local_4e8 + 1, local_4b8, L"\\%s\\%s.archive",
                                                  local_4c0);
                            ppwVar10 = ppwVar20;
                            if (-1 < iVar8) {
                                DVar5 = GetFileAttributesW(aWStack1114 + 1);
                                if ((DVar5 == 0xffffffff) || ((DVar5 & 0x10) != 0)) {
                                    if (plVar3 != (longlong *) 0x0) {
                                        local_500 = (wchar_t **) 0x141d41a10;
                                        goto LAB_1401b4fde;
                                    }
                                } else {
                                    iVar8 = FUN_14018d950(aWStack1114 + 1, *local_4f0, &local_508);
                                    ppwVar10 = local_508;
                                    if (iVar8 < 0) goto LAB_1401b4fbe;
                                    (**(code * *) * ppwVar14)(ppwVar14);
                                    local_500 = ppwVar14;
                                    FUN_140033260(local_4f0 + 0x10a, &local_500);
                                    ppwVar10 = local_508;
                                    (**(code * *) * local_508)(local_508);
                                    local_500 = ppwVar10;
                                    FUN_140033260(local_4f0 + 0x10c, &local_500);
                                    (**(code * *)(*ppwVar10 + 4))(ppwVar10);
                                }
                                if (ppwVar14 != (wchar_t **) 0x0) {
                                    (**(code * *)(*ppwVar14 + 4))(ppwVar14);
                                }
                                if (plVar3 != (longlong *) 0x0) {
                                    (**(code * *)(*plVar3 + 8))(plVar3);
                                }
                                goto LAB_1401b4f02;
                            }
                            LAB_1401b4fbe:
                            if (ppwVar10 != (wchar_t **) 0x0) {
                                (**(code * *)(*ppwVar10 + 4))(ppwVar10);
                            }
                        }
                        goto LAB_1401b4ffb;
                    }
                    if (plVar3 != (longlong *) 0x0) {
                        local_500 = (wchar_t **) 0x141d419d8;
                        LAB_1401b4fde:
                        FUN_1401a3130(3, 0, &local_500, aWStack1114 + 1);
                        goto LAB_1401b4ffb;
                    }
                    LAB_1401b4f02:
                    local_4b0 = local_4b0 + 1;
                    local_4f8 = local_4f8 + 2;
                } while (local_4b0 < uVar19);
            }
            if (ppwVar9 != (wchar_t **) 0x0) {
                (**(code * *)(ppwVar9[-2] + 4))(ppwVar9 + -2);
            }
        }
        if (local_498 != (longlong *) 0x0) {
            (**(code * *)(*local_498 + 8))();
        }
    }
    if (local_4c8 != (longlong *) 0x0) {
        (**(code * *)(*local_4c8 + 8))();
    }
    if (ppwVar21 != (wchar_t **) 0x0) {
        (**(code * *)(*ppwVar21 + 4))(ppwVar21);
    }
    LAB_1401b4f9f:
    FUN_1407db4f0(local_38 ^ (ulonglong) auStack1336);
    return;
}


void FUN_1401b5020(longlong param_1, LPWSTR param_2, undefined8 param_3, LPCWSTR param_4) {
    WCHAR WVar1;
    longlong lVar2;
    undefined auStack632[32];
    LPCWSTR local_258;
    LPWSTR local_248[2];
    WCHAR local_238[264];
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong) auStack632;
    WVar1 = *param_4;
    if ((WVar1 != L'\\') && ((WVar1 == L'\0' || (param_4[1] != L':')))) {
        local_258 = param_4;
        if ((WVar1 != L'.') || (*(longlong * )(param_1 + 0x638) == 0)) {
            FUN_14001b370(param_2, 0x104, L"%s\\%s", param_1 + 0x640);
            lVar2 = 0;
            WVar1 = *param_4;
            while (WVar1 != L'\0') {
                lVar2 = lVar2 + 1;
                WVar1 = param_4[lVar2];
            }
            goto LAB_1401b50f5;
        }
        FUN_14001b370(local_238, 0x104, L"%s\\%s", param_1 + 0x430);
        param_4 = local_238;
    }
    GetFullPathNameW(param_4, 0x104, param_2, local_248);
    LAB_1401b50f5:
    FUN_1407db4f0(local_28 ^ (ulonglong) auStack632);
    return;
}


void FUN_1401b5110(longlong param_1, undefined2 *param_2, undefined8 param_3, short *param_4) {
    short sVar1;
    int iVar2;
    ulonglong uVar3;
    ushort uVar4;
    ulonglong uVar5;
    longlong lVar6;
    ulonglong uVar7;
    ushort *puVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    undefined auStack616[32];
    ushort local_248[264];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong) auStack616;
    if (*(longlong * )(param_1 + 0x848) == 0) {
        *param_2 = 0;
    } else {
        sVar1 = *param_4;
        if ((sVar1 == 0x5c) || (((sVar1 != 0 && (param_4[1] == 0x3a)) || (sVar1 == 0x2e)))) {
            FUN_1401b5020();
            uVar7 = 0;
            uVar10 = uVar7;
            if (local_248[0] != 0) {
                puVar8 = (ushort * )(param_1 + 0x640);
                do {
                    if (local_248[0] < 0x80) {
                        if ((ushort)(local_248[0] - 0x41) < 0x1a) {
                            local_248[0] = local_248[0] + 0x20;
                        }
                    } else {
                        uVar5 = uVar7;
                        uVar9 = 0x3d1;
                        do {
                            uVar3 = (uVar9 - uVar5 >> 1) + uVar5;
                            if (*(ushort * )(&UNK_140a41a80 + uVar3 * 2) <= local_248[0]) {
                                if (local_248[0] <= *(ushort * )(&UNK_140a41a80 + uVar3 * 2)) {
                                    local_248[0] = *(ushort * )(&UNK_140a40af0 + uVar3 * 2);
                                    break;
                                }
                                uVar5 = uVar3 + 1;
                                uVar3 = uVar9;
                            }
                            uVar9 = uVar3;
                        } while (uVar5 < uVar3);
                    }
                    uVar4 = *puVar8;
                    if (uVar4 < 0x80) {
                        if ((ushort)(uVar4 - 0x41) < 0x1a) {
                            uVar4 = uVar4 + 0x20;
                        }
                    } else {
                        uVar5 = uVar7;
                        uVar9 = 0x3d1;
                        do {
                            uVar3 = (uVar9 - uVar5 >> 1) + uVar5;
                            if (*(ushort * )(&UNK_140a41a80 + uVar3 * 2) <= uVar4) {
                                if (uVar4 <= *(ushort * )(&UNK_140a41a80 + uVar3 * 2)) {
                                    uVar4 = *(ushort * )(&UNK_140a40af0 + uVar3 * 2);
                                    break;
                                }
                                uVar5 = uVar3 + 1;
                                uVar3 = uVar9;
                            }
                            uVar9 = uVar3;
                        } while (uVar5 < uVar3);
                    }
                    if (local_248[0] != uVar4) break;
                    local_248[0] = local_248[uVar10 + 1];
                    uVar10 = uVar10 + 1;
                    puVar8 = puVar8 + 1;
                } while (local_248[0] != 0);
            }
            if ((*(short *) (param_1 + 0x640 + uVar10 * 2) == 0) && (local_248[uVar10] == 0x5c)) {
                puVar8 = local_248 + uVar10 + 1;
                FUN_14001b370(param_2, 0x104, &DAT_1409e4eec, puVar8);
                uVar4 = *puVar8;
                while (uVar4 != 0) {
                    puVar8 = puVar8 + 1;
                    uVar4 = *puVar8;
                }
                goto LAB_1401b5189;
            }
        } else {
            iVar2 = FUN_14018e3e0(param_4, L"http", 4);
            if (iVar2 != 0) {
                FUN_14001b370(param_2, 0x104, &DAT_1409e4f94, param_4);
                lVar6 = 0;
                sVar1 = *param_4;
                while (sVar1 != 0) {
                    lVar6 = lVar6 + 1;
                    sVar1 = param_4[lVar6];
                }
                goto LAB_1401b5189;
            }
        }
        *param_2 = 0;
    }
    LAB_1401b5189:
    FUN_1407db4f0(local_38 ^ (ulonglong) auStack616);
    return;
}


void FUN_1401b5360(longlong param_1, short *param_2, undefined8 param_3, longlong param_4) {
    short sVar1;
    longlong lVar2;

    if (*(longlong * )(param_1 + 0x638) == 0) {
        *param_2 = 0;
        return;
    }
    lVar2 = FUN_1407dd8d8(param_4, 0x5c);
    if (lVar2 != 0) {
        param_4 = lVar2 + 2;
    }
    FUN_14001b370(param_2, 0x104, L"%s\\%s", param_1 + 0x430, param_4);
    lVar2 = 0;
    sVar1 = *param_2;
    while (sVar1 != 0) {
        lVar2 = lVar2 + 1;
        sVar1 = param_2[lVar2];
    }
    return;
}


void FUN_1401b5400(undefined8 param_1, LPWSTR param_2, undefined8 param_3, WCHAR *param_4,
                   LPCWSTR param_5) {
    DWORD DVar1;
    ulonglong uVar2;
    undefined auStack600[32];
    LPCWSTR local_238;
    WCHAR local_228[264];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack600;
    if (param_5 != (LPCWSTR) 0x0) {
        if (*param_5 == L'\0') {
            *param_2 = L'\0';
            goto LAB_1401b54b6;
        }
        param_4 = param_5;
        if (((*param_5 != L'\\') && (param_5[1] != L':')) &&
            ((param_5[1] == L'\0' || (param_5[2] != L':')))) {
            local_238 = param_5;
            FUN_14001b370(local_228, 0x104, L"%s\\%s");
            param_4 = local_228;
        }
    }
    DVar1 = GetFullPathNameW(param_4, 0x104, param_2, (LPWSTR *) 0x0);
    uVar2 = (ulonglong) DVar1;
    if ((uVar2 != 0) && (param_2[uVar2 - 1] == L'\\')) {
        param_2[uVar2 - 1] = L'\0';
    }
    LAB_1401b54b6:
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack600);
    return;
}


void FUN_1401b54e0(undefined8 param_1, longlong param_2, ulonglong param_3, longlong **param_4) {
    longlong *plVar1;
    uint uVar2;
    longlong lVar3;
    longlong *plVar4;
    int iVar5;
    longlong lVar6;
    longlong *plVar7;
    longlong *plVar8;
    undefined auStack1224[32];
    longlong *local_4a8;
    longlong *local_4a0;
    longlong *local_498;
    longlong *local_490;
    longlong *local_488;
    longlong *local_480;
    longlong *local_478[2];
    undefined local_468[528];
    undefined local_258[528];
    ulonglong local_48;

    lVar3 = DAT_140c63788;
    local_48 = DAT_140c0f7b0 ^ (ulonglong) auStack1224;
    uVar2 = (uint) param_3;
    if ((param_2 == 0) || (param_4 == (longlong **) 0x0)) goto LAB_1401b58a4;
    plVar8 = (longlong *) 0x0;
    local_4a8 = (longlong *) 0x0;
    plVar7 = plVar8;
    if ((*(int *) (DAT_140c63788 + 0x870) == 0) ||
        (((plVar7 = (longlong *) 0x0, (param_3 & 2) == 0 ||
                                      (lVar6 = FUN_1401b5360(DAT_140c63788, local_258, param_3, param_2), lVar6 ==
                                                                                                          0)) ||
          (iVar5 = FUN_1401cffa0(0, local_258, 0, &local_4a8), plVar7 = local_4a8, -1 < iVar5)))) {
        lVar6 = FUN_1401b5110(lVar3, local_468);
        if (lVar6 == 0) {
            local_478[0] = (longlong *) 0x0;
            local_498 = (longlong *) 0x0;
            iVar5 = FUN_1401cffa0(0, param_2, uVar2 & 1, local_478);
            plVar8 = local_478[0];
            if (-1 < iVar5) {
                iVar5 = FUN_1401d02a0(plVar7, local_478[0]);
                plVar1 = local_498;
                if (-1 < iVar5) {
                    if (plVar7 != local_498) {
                        if (local_498 != (longlong *) 0x0) {
                            (**(code * *) * local_498)(local_498);
                        }
                        if (plVar7 != (longlong *) 0x0) {
                            (**(code * *)(*plVar7 + 8))(plVar7);
                        }
                        local_4a8 = plVar1;
                        plVar7 = plVar1;
                    }
                    if (plVar1 != (longlong *) 0x0) {
                        (**(code * *)(*plVar1 + 8))(plVar1);
                    }
                    if (plVar8 != (longlong *) 0x0) {
                        (**(code * *)(*plVar8 + 8))(plVar8);
                    }
                    goto LAB_1401b5800;
                }
                if (local_498 != (longlong *) 0x0) {
                    (**(code * *)(*local_498 + 8))();
                }
            }
            if (plVar8 != (longlong *) 0x0) {
                (**(code * *)(*plVar8 + 8))(plVar8);
            }
        } else if (*(int *) (lVar3 + 0x870) == 0) {
            LAB_1401b564d:
            if (((param_3 & 4) == 0) && (*(longlong * )(lVar3 + 0x858) != 0)) {
                do {
                    local_4a0 = (longlong *) 0x0;
                    plVar1 = *(longlong * *)(*(longlong * )(lVar3 + 0x850) + (longlong) plVar8 * 8);
                    local_490 = (longlong *) 0x0;
                    iVar5 = (**(code * *)(*plVar1 + 0x38))(plVar1, local_468, uVar2 & 1, &local_4a0);
                    if (iVar5 < 0) {
                        LAB_1401b5755:
                        if (local_4a0 != (longlong *) 0x0) {
                            (**(code * *)(*local_4a0 + 8))();
                        }
                        goto LAB_1401b5875;
                    }
                    iVar5 = FUN_1401d02a0(plVar7, local_4a0);
                    plVar1 = local_490;
                    if (iVar5 < 0) {
                        if (local_490 != (longlong *) 0x0) {
                            (**(code * *)(*local_490 + 8))();
                        }
                        goto LAB_1401b5755;
                    }
                    if (plVar7 != local_490) {
                        if (local_490 != (longlong *) 0x0) {
                            (**(code * *) * local_490)(local_490);
                        }
                        if (plVar7 != (longlong *) 0x0) {
                            (**(code * *)(*plVar7 + 8))(plVar7);
                        }
                        local_4a8 = plVar1;
                        plVar7 = plVar1;
                    }
                    if (plVar1 != (longlong *) 0x0) {
                        (**(code * *)(*plVar1 + 8))(plVar1);
                    }
                    if (local_4a0 != (longlong *) 0x0) {
                        (**(code * *)(*local_4a0 + 8))();
                    }
                    plVar8 = (longlong * )((longlong) plVar8 + 1);
                } while (plVar8 < *(longlong * *)(lVar3 + 0x858));
            }
            LAB_1401b5800:
            if ((plVar7 == (longlong *) 0x0) &&
                (plVar8 = (longlong *) FUN_14018b280(0x40, 0), plVar8 != (longlong *) 0x0)) {
                *plVar8 = (longlong) & PTR_LAB_140b5f120;
                plVar8[2] = 0;
                plVar8[1] = 0;
                plVar8[4] = 0;
                plVar8[3] = 0;
                plVar8[6] = 0;
                plVar8[5] = 0;
                *(undefined4 * )(plVar8 + 7) = 1;
                plVar7 = plVar8;
            }
            *param_4 = plVar7;
            (**(code * *) * plVar7)(plVar7);
        } else {
            local_480 = (longlong *) 0x0;
            local_488 = (longlong *) 0x0;
            iVar5 = FUN_1401cffa0(lVar3 + 0x640, local_468, uVar2 & 1, &local_480);
            plVar1 = local_480;
            if (-1 < iVar5) {
                iVar5 = FUN_1401d02a0(plVar7, local_480);
                plVar4 = local_488;
                if (-1 < iVar5) {
                    if (plVar7 != local_488) {
                        if (local_488 != (longlong *) 0x0) {
                            (**(code * *) * local_488)(local_488);
                        }
                        if (plVar7 != (longlong *) 0x0) {
                            (**(code * *)(*plVar7 + 8))(plVar7);
                        }
                        local_4a8 = plVar4;
                        plVar7 = plVar4;
                    }
                    if (plVar4 != (longlong *) 0x0) {
                        (**(code * *)(*plVar4 + 8))(plVar4);
                    }
                    if (plVar1 != (longlong *) 0x0) {
                        (**(code * *)(*plVar1 + 8))(plVar1);
                    }
                    goto LAB_1401b564d;
                }
                if (local_488 != (longlong *) 0x0) {
                    (**(code * *)(*local_488 + 8))();
                }
            }
            if (plVar1 != (longlong *) 0x0) {
                (**(code * *)(*plVar1 + 8))(plVar1);
            }
        }
    }
    LAB_1401b5875:
    if (plVar7 != (longlong *) 0x0) {
        (**(code * *)(*plVar7 + 8))(plVar7);
    }
    LAB_1401b58a4:
    FUN_1407db4f0(local_48 ^ (ulonglong) auStack1224);
    return;
}


void FUN_1401b58d0(undefined8 param_1, longlong param_2, undefined8 param_3) {
    short *psVar1;
    longlong *plVar2;
    longlong lVar3;
    int iVar4;
    DWORD DVar5;
    longlong lVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    undefined auStack1704[32];
    longlong local_688;
    undefined local_678[24];
    undefined local_660[24];
    WCHAR local_648;
    short local_646[263];
    WCHAR local_438[264];
    undefined local_228[528];
    ulonglong local_18;

    lVar3 = DAT_140c63788;
    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack1704;
    if (param_2 != 0) {
        lVar6 = FUN_1401b5110(DAT_140c63788, local_228, param_3, param_2);
        if (lVar6 == 0) {
            FUN_1401b5020(lVar3, local_438);
            DVar5 = GetFileAttributesW(local_438);
        } else {
            uVar8 = 0;
            if (*(longlong * )(lVar3 + 0x858) != 0) {
                do {
                    plVar2 = *(longlong * *)(*(longlong * )(lVar3 + 0x850) + uVar8 * 8);
                    iVar4 = (**(code * *)(*plVar2 + 0x28))(plVar2, local_228, local_678);
                    if ((-1 < iVar4) &&
                        (plVar2 = *(longlong * *)(*(longlong * )(lVar3 + 0x860) + uVar8 * 8),
                                iVar4 = (**(code * *)(*plVar2 + 0x18))(plVar2, local_660, 0, 0), -1 < iVar4))
                        goto LAB_1401b5a88;
                    uVar8 = uVar8 + 1;
                } while (uVar8 < *(ulonglong * )(lVar3 + 0x858));
            }
            if (*(int *) (lVar3 + 0x870) == 0) goto LAB_1401b5a88;
            FUN_1401b5020(lVar3, local_438);
            DVar5 = GetFileAttributesW(local_438);
        }
        if (((DVar5 == 0xffffffff) && (*(int *) (lVar3 + 0x870) != 0)) &&
            (*(longlong * )(lVar3 + 0x638) != 0)) {
            lVar6 = FUN_1407dd8d8(param_2, 0x5c);
            if (lVar6 != 0) {
                param_2 = lVar6 + 2;
            }
            local_688 = param_2;
            FUN_14001b370(&local_648, 0x104, L"%s\\%s", lVar3 + 0x430);
            uVar8 = 0;
            if (local_648 != L'\0') {
                do {
                    uVar7 = uVar8 + 1;
                    psVar1 = local_646 + uVar8;
                    uVar8 = uVar7;
                } while (*psVar1 != 0);
                if (uVar7 != 0) {
                    GetFileAttributesW(&local_648);
                }
            }
        }
    }
    LAB_1401b5a88:
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack1704);
    return;
}


void FUN_1401b5ab0(longlong param_1, longlong param_2, undefined8 param_3) {
    longlong lVar1;
    undefined auStack1112[32];
    WCHAR local_438[264];
    undefined local_228[528];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack1112;
    if ((param_2 != 0) &&
        ((lVar1 = FUN_1401b5110(param_1, local_228, param_3, param_2), lVar1 == 0 ||
                                                                       (*(int *) (param_1 + 0x870) != 0)))) {
        FUN_1401b5020(param_1, local_438, param_3, param_2);
        GetFileAttributesW(local_438);
    }
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack1112);
    return;
}


void FUN_1401b5b50(HANDLE *param_1, longlong param_2, ulonglong param_3, int param_4, longlong **param_5
) {
    short sVar1;
    longlong *plVar2;
    DWORD DVar3;
    int iVar4;
    longlong lVar5;
    HANDLE pvVar6;
    HANDLE pvVar7;
    longlong *plVar8;
    longlong *plVar9;
    undefined8 uVar10;
    longlong *plVar11;
    longlong lVar12;
    ulonglong uVar13;
    DWORD DVar14;
    bool bVar15;
    undefined auStackY1816[32];
    longlong *local_6d8;
    WCHAR *local_6d0;
    longlong **local_6c8;
    longlong local_6c0;
    longlong local_6b8;
    longlong local_6b0;
    longlong local_6a8;
    longlong local_6a0;
    longlong local_698;
    longlong local_690;
    undefined4 local_688;
    uint uStack1668;
    WCHAR local_678[264];
    WCHAR local_468[264];
    WCHAR local_258[264];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong) auStackY1816;
    uVar13 = param_3 & 0xffffffff;
    local_6d8 = (longlong * )((ulonglong) local_6d8 & 0xffffffff00000000 | param_3 & 0xffffffff);
    local_6c8 = param_5;
    local_6b8 = param_2;
    if ((((param_2 == 0) || ((1 < param_4 - 3U && ((param_3 & 2) == 0)))) ||
         ((param_4 - 2U < 3 && ((param_3 & 1) == 0)))) || (param_5 == (longlong **) 0x0))
        goto LAB_1401b6bcc;
    lVar5 = FUN_1401b5110(param_1, local_678, param_3, param_2);
    plVar9 = (longlong *) 0x0;
    if (lVar5 == 0) {
        local_678[0] = L'\0';
    }
    FUN_1401b5020(param_1, local_468);
    local_6d0 = local_678;
    if (local_678[0] == L'\0') {
        local_6d0 = local_468;
    }
    if ((param_3 & 2) == 0) {
        DVar14 = 1;
        if ((param_3 & 8) != 0) {
            DVar14 = 3;
        }
        if ((*(int *) (param_1 + 0x10e) == 0) || (lVar5 = FUN_1401b5360(param_1, local_258), lVar5 == 0)) {
            LAB_1401b6930:
            if (local_678[0] != L'\0') {
                if (*(int *) (param_1 + 0x10e) != 0) {
                    pvVar6 = CreateFileW(local_468, 0x80000000, DVar14, (LPSECURITY_ATTRIBUTES) 0x0, 3, 0x40000000,
                                         (HANDLE) 0x0);
                    if (pvVar6 != (HANDLE) 0xffffffffffffffff) goto LAB_1401b6b7b;
                    DVar14 = GetLastError();
                    if (1 < DVar14 - 2) goto LAB_1401b6bcc;
                }
                plVar8 = plVar9;
                if (param_1[0x10b] != (HANDLE) 0x0) {
                    do {
                        local_6d8 = (longlong *) 0x0;
                        plVar11 = *(longlong * *)((longlong) param_1[0x10a] + (longlong) plVar8 * 8);
                        iVar4 = (**(code * *)(*plVar11 + 0x28))(plVar11, local_678, &local_6b0);
                        if ((-1 < iVar4) &&
                            (plVar11 = *(longlong * *)((longlong) param_1[0x10c] + (longlong) plVar8 * 8),
                                    iVar4 = (**(code * *)(*plVar11 + 0x18))(plVar11, &local_698, &local_6c0,
                                                                            &local_6d8),
                                    -1 < iVar4)) {
                            if (local_6c0 != local_6a0) goto LAB_1401b6a3d;
                            if ((uStack1668 & 2) == 0) {
                                if ((uStack1668 & 4) == 0) {
                                    lVar5 = FUN_14018b280(0x360, 0);
                                    if (lVar5 != 0) {
                                        plVar9 = (longlong *) FUN_1401d2d90(lVar5, param_1, local_6d0, uVar13);
                                    }
                                } else {
                                    lVar5 = FUN_14018b280(0x428, 8);
                                    if (lVar5 != 0) {
                                        plVar9 = (longlong *) FUN_1401d2590(lVar5, param_1, local_6d0, uVar13);
                                        *local_6c8 = plVar9;
                                        goto LAB_1401b62b7;
                                    }
                                }
                            } else {
                                lVar5 = FUN_14018b280(0x3c8, 8);
                                if (lVar5 != 0) {
                                    plVar9 = (longlong *) FUN_1401d1f20(lVar5, param_1, local_6d0, uVar13);
                                    *local_6c8 = plVar9;
                                    goto LAB_1401b62b7;
                                }
                            }
                            *local_6c8 = plVar9;
                            goto LAB_1401b62b7;
                        }
                        if (local_6d8 != (longlong *) 0x0) {
                            (**(code * *)(*local_6d8 + 8))();
                        }
                        plVar8 = (longlong * )((longlong) plVar8 + 1);
                    } while (plVar8 < param_1[0x10b]);
                }
                if (param_4 == 3) {
                    local_6c0 = 0x141d41ad0;
                    FUN_1401a3130(3, 0, &local_6c0, local_6b8);
                }
                goto LAB_1401b6bcc;
            }
            pvVar6 = CreateFileW(local_468, 0x80000000, DVar14, (LPSECURITY_ATTRIBUTES) 0x0, 3, 0x40000000,
                                 (HANDLE) 0x0);
            if (pvVar6 == (HANDLE) 0xffffffffffffffff) goto LAB_1401b6895;
            LAB_1401b6b7b:
            uVar10 = 8;
        } else {
            pvVar6 = CreateFileW(local_258, 0x80000000, DVar14, (LPSECURITY_ATTRIBUTES) 0x0, 3, 0x40000000,
                                 (HANDLE) 0x0);
            if (pvVar6 == (HANDLE) 0xffffffffffffffff) {
                DVar3 = GetLastError();
                if (1 < DVar3 - 2) goto LAB_1401b6bcc;
                goto LAB_1401b6930;
            }
            LAB_1401b62d0:
            uVar10 = 0;
        }
        lVar5 = FUN_14018b280(0x300, uVar10);
        if (lVar5 != 0) {
            LAB_1401b6b94:
            plVar9 = (longlong *) FUN_1401d1a90(lVar5, param_1, local_6d0, uVar13);
        }
    } else {
        if ((local_678[0] != L'\0') && (*(int *) (param_1 + 0x10e) == 0)) goto LAB_1401b6bcc;
        bVar15 = (param_3 & 4) != 0;
        DVar14 = (DWORD) bVar15;
        if ((param_3 & 8) != 0) {
            DVar14 = bVar15 | 2;
        }
        if (param_4 == 0) {
            iVar4 = FUN_1401b76d0(local_6d0, local_468);
            if (iVar4 < 0) goto LAB_1401b6bcc;
            DVar3 = 2;
            LAB_1401b6870:
            pvVar6 = CreateFileW(local_468, 0xc0000000, DVar14, (LPSECURITY_ATTRIBUTES) 0x0, DVar3, 0x40000080,
                                 (HANDLE) 0x0);
            if (pvVar6 != (HANDLE) 0xffffffffffffffff) goto LAB_1401b62d0;
            LAB_1401b6895:
            GetLastError();
            goto LAB_1401b6bcc;
        }
        if (param_4 == 1) {
            iVar4 = FUN_1401b76d0(local_6d0, local_468);
            if (iVar4 < 0) goto LAB_1401b6bcc;
            DVar3 = 1;
            goto LAB_1401b6870;
        }
        plVar8 = plVar9;
        if (param_4 != 2) {
            if (param_4 != 3 && param_4 != 4) goto LAB_1401b6bcc;
            pvVar6 = CreateFileW(local_468, 0xc0000000, DVar14, (LPSECURITY_ATTRIBUTES) 0x0, 3, 0x40000000,
                                 (HANDLE) 0x0);
            if (pvVar6 != (HANDLE) 0xffffffffffffffff) goto LAB_1401b62d0;
            DVar3 = GetLastError();
            if (DVar3 == 2 || DVar3 == 3) {
                if ((*(int *) (param_1 + 0x10e) != 0) &&
                    (lVar5 = FUN_1401b5360(param_1, local_258), lVar5 != 0)) {
                    pvVar6 = CreateFileW(local_258, 0x80000000, 1, (LPSECURITY_ATTRIBUTES) 0x0, 3, 0x40000000,
                                         (HANDLE) 0x0);
                    if (pvVar6 != (HANDLE) 0xffffffffffffffff) {
                        iVar4 = FUN_1401b76d0();
                        if (iVar4 < 0) {
                            CloseHandle(pvVar6);
                        } else {
                            pvVar7 = CreateFileW(local_468, 0xc0000000, DVar14, (LPSECURITY_ATTRIBUTES) 0x0, 4,
                                                 0x40000080, (HANDLE) 0x0);
                            DVar14 = GetLastError();
                            if (pvVar7 == (HANDLE) 0xffffffffffffffff) {
                                CloseHandle(pvVar6);
                            } else {
                                lVar5 = FUN_14018b280(0x300, 0);
                                if (lVar5 != 0) {
                                    plVar8 = (longlong *)
                                            FUN_1401d1a90(lVar5, param_1, local_6d0,
                                                          (ulonglong) local_6d8 & 0xffffffff);
                                }
                                if (DVar14 == 0) {
                                    plVar11 = (longlong *) FUN_14018b280(0x300, 0);
                                    if (plVar11 != (longlong *) 0x0) {
                                        plVar9 = plVar11 + 3;
                                        *plVar11 = (longlong) & PTR_LAB_140b5fdb0;
                                        lVar5 = 0x104;
                                        plVar11[0x53] = 0;
                                        plVar11[0x54] = 0;
                                        plVar11[0x55] = 0;
                                        plVar11[0x56] = 0;
                                        lVar12 = (longlong) local_258 - (longlong) plVar9;
                                        *(undefined4 * )(plVar11 + 1) = 1;
                                        plVar11[2] = (longlong) param_1;
                                        *(undefined4 * )(plVar11 + 0x44) = 1;
                                        plVar11[0x49] = 0;
                                        plVar11[0x47] = 0;
                                        *(undefined4 * )(plVar11 + 0x48) = 0;
                                        plVar11[0x4a] = (longlong)(plVar11 + 0x49);
                                        do {
                                            if ((lVar5 == -0x7ffffefa) ||
                                                (sVar1 = *(short *) (lVar12 + (longlong) plVar9), sVar1 == 0)) {
                                                if (lVar5 != 0) goto LAB_1401b5f5f;
                                                break;
                                            }
                                            *(short *) plVar9 = sVar1;
                                            plVar9 = (longlong * )((longlong) plVar9 + 2);
                                            lVar5 = lVar5 + -1;
                                        } while (lVar5 != 0);
                                        plVar9 = (longlong * )((longlong) plVar9 + -2);
                                        LAB_1401b5f5f:
                                        *(short *) plVar9 = 0;
                                        *plVar11 = (longlong) & PTR_LAB_140b5f940;
                                        plVar11[0x57] = (longlong) pvVar6;
                                        GetFileTime(pvVar6, (LPFILETIME) 0x0, (LPFILETIME) 0x0,
                                                    (LPFILETIME)(plVar11 + 0x46));
                                        GetFileSizeEx((HANDLE) plVar11[0x57], plVar11 + 0x45);
                                        CreateIoCompletionPort((HANDLE) plVar11[0x57], *param_1, 1, 0);
                                        plVar9 = plVar11;
                                    }
                                    iVar4 = FUN_1401b77b0();
                                    if (iVar4 < 0) {
                                        (**(code * *)(*plVar9 + 8))();
                                        (**(code * *)(*plVar8 + 8))(plVar8);
                                    } else {
                                        (**(code * *)(*plVar9 + 8))(plVar9);
                                        *local_6c8 = plVar8;
                                    }
                                } else {
                                    CloseHandle(pvVar6);
                                    *local_6c8 = plVar8;
                                }
                            }
                        }
                        goto LAB_1401b6bcc;
                    }
                    DVar3 = GetLastError();
                    if (DVar3 != 2 && DVar3 != 3) goto LAB_1401b6bcc;
                    uVar13 = (ulonglong) local_6d8 & 0xffffffff;
                }
                if ((local_678[0] != L'\0') && (plVar11 = plVar9, param_1[0x10b] != (HANDLE) 0x0)) {
                    do {
                        local_6d8 = (longlong *) 0x0;
                        plVar2 = *(longlong * *)((longlong) param_1[0x10a] + (longlong) plVar11 * 8);
                        iVar4 = (**(code * *)(*plVar2 + 0x28))(plVar2, local_678, &local_6b0);
                        if ((-1 < iVar4) &&
                            (plVar2 = *(longlong * *)((longlong) param_1[0x10c] + (longlong) plVar11 * 8),
                                    iVar4 = (**(code * *)(*plVar2 + 0x18))(plVar2, &local_698, &local_6c0, &local_6d8),
                                    -1 < iVar4)) {
                            if (local_6c0 != local_6a0) goto LAB_1401b6a3d;
                            iVar4 = FUN_1401b76d0();
                            if (-1 < iVar4) {
                                pvVar6 = CreateFileW(local_468, 0xc0000000, DVar14, (LPSECURITY_ATTRIBUTES) 0x0, 4,
                                                     0x40000080, (HANDLE) 0x0);
                                DVar14 = GetLastError();
                                if (pvVar6 != (HANDLE) 0xffffffffffffffff) {
                                    lVar5 = FUN_14018b280(0x300, 0);
                                    if (lVar5 != 0) {
                                        plVar8 = (longlong *) FUN_1401d1a90(lVar5, param_1, local_6d0, uVar13);
                                    }
                                    if (DVar14 != 0) goto LAB_1401b62af;
                                    if (((uStack1668 & 2) != 0) && (lVar5 = FUN_14018b280(0x3c8, 0), lVar5 != 0)) {
                                        FUN_1401d1f20(lVar5, param_1, local_678, 1);
                                    }
                                    if ((uStack1668 & 4) != 0) {
                                        lVar5 = FUN_14018b280(0x428, 0);
                                        if (lVar5 != 0) {
                                            plVar9 = (longlong *) FUN_1401d2590(lVar5, param_1, local_678, 1);
                                        }
                                        goto LAB_1401b6284;
                                    }
                                    plVar11 = (longlong *) FUN_14018b280(0x360, 0);
                                    if (plVar11 == (longlong *) 0x0) goto LAB_1401b6284;
                                    plVar9 = plVar11 + 3;
                                    *plVar11 = (longlong) & PTR_LAB_140b5fdb0;
                                    plVar11[0x53] = 0;
                                    plVar11[0x54] = 0;
                                    plVar11[0x55] = 0;
                                    plVar11[0x56] = 0;
                                    lVar5 = 0x104;
                                    *(undefined4 * )(plVar11 + 1) = 1;
                                    plVar11[2] = (longlong) param_1;
                                    *(undefined4 * )(plVar11 + 0x44) = 1;
                                    plVar11[0x49] = 0;
                                    plVar11[0x47] = 0;
                                    *(undefined4 * )(plVar11 + 0x48) = 0;
                                    plVar11[0x4a] = (longlong)(plVar11 + 0x49);
                                    lVar12 = (longlong) local_678 - (longlong) plVar9;
                                    goto LAB_1401b61d0;
                                }
                            }
                            if (local_6d8 != (longlong *) 0x0) {
                                (**(code * *)(*local_6d8 + 8))();
                            }
                            goto LAB_1401b6bcc;
                        }
                        if (local_6d8 != (longlong *) 0x0) {
                            (**(code * *)(*local_6d8 + 8))();
                        }
                        plVar11 = (longlong * )((longlong) plVar11 + 1);
                    } while (plVar11 < param_1[0x10b]);
                }
                if (param_4 == 3) {
                    local_6c0 = 0x141d41af8;
                    FUN_1401a3130(3, 0, &local_6c0, local_6b8);
                }
                goto LAB_1401b6bcc;
            }
            goto LAB_1401b6895;
        }
        iVar4 = FUN_1401b76d0(local_6d0, local_468);
        if (iVar4 < 0) goto LAB_1401b6bcc;
        pvVar6 = CreateFileW(local_468, 0xc0000000, DVar14, (LPSECURITY_ATTRIBUTES) 0x0, 4, 0x40000080,
                             (HANDLE) 0x0);
        DVar14 = GetLastError();
        if (pvVar6 == (HANDLE) 0xffffffffffffffff) goto LAB_1401b6bcc;
        if (DVar14 == 0xb7) {
            LAB_1401b65b2:
            lVar5 = FUN_14018b280(0x300, 0);
            if (lVar5 == 0) goto LAB_1401b6baa;
            goto LAB_1401b6b94;
        }
        if ((*(int *) (param_1 + 0x10e) == 0) || (lVar5 = FUN_1401b5360(param_1, local_258), lVar5 == 0)) {
            LAB_1401b6536:
            if ((local_678[0] != L'\0') && (plVar11 = plVar9, param_1[0x10b] != (HANDLE) 0x0)) {
                do {
                    local_6d8 = (longlong *) 0x0;
                    plVar2 = *(longlong * *)((longlong) param_1[0x10a] + (longlong) plVar11 * 8);
                    iVar4 = (**(code * *)(*plVar2 + 0x28))(plVar2, local_678, &local_6b0);
                    if ((-1 < iVar4) &&
                        (plVar2 = *(longlong * *)((longlong) param_1[0x10c] + (longlong) plVar11 * 8),
                                iVar4 = (**(code * *)(*plVar2 + 0x18))(plVar2, &local_698, &local_6c0, &local_6d8),
                                -1 < iVar4)) {
                        if (local_6c0 != local_6a0) goto LAB_1401b6a3d;
                        if ((uStack1668 & 2) != 0) {
                            lVar5 = FUN_14018b280(0x3c8, 0);
                            if (lVar5 != 0) {
                                plVar9 = (longlong *) FUN_1401d1f20(lVar5, param_1, local_678, 1);
                            }
                            goto LAB_1401b67a6;
                        }
                        if ((uStack1668 & 4) != 0) {
                            lVar5 = FUN_14018b280(0x428, 0);
                            if (lVar5 != 0) {
                                plVar9 = (longlong *) FUN_1401d2590(lVar5, param_1, local_678, 1);
                            }
                            goto LAB_1401b67a6;
                        }
                        plVar11 = (longlong *) FUN_14018b280(0x360, 0);
                        if (plVar11 == (longlong *) 0x0) goto LAB_1401b67a6;
                        plVar9 = plVar11 + 3;
                        *plVar11 = (longlong) & PTR_LAB_140b5fdb0;
                        plVar11[0x53] = 0;
                        plVar11[0x54] = 0;
                        plVar11[0x55] = 0;
                        plVar11[0x56] = 0;
                        lVar5 = 0x104;
                        *(undefined4 * )(plVar11 + 1) = 1;
                        plVar11[2] = (longlong) param_1;
                        *(undefined4 * )(plVar11 + 0x44) = 1;
                        plVar11[0x49] = 0;
                        plVar11[0x47] = 0;
                        *(undefined4 * )(plVar11 + 0x48) = 0;
                        plVar11[0x4a] = (longlong)(plVar11 + 0x49);
                        lVar12 = (longlong) local_678 - (longlong) plVar9;
                        goto LAB_1401b66f0;
                    }
                    if (local_6d8 != (longlong *) 0x0) {
                        (**(code * *)(*local_6d8 + 8))();
                    }
                    plVar11 = (longlong * )((longlong) plVar11 + 1);
                } while (plVar11 < param_1[0x10b]);
            }
            goto LAB_1401b65b2;
        }
        pvVar7 = CreateFileW(local_258, 0x80000000, 1, (LPSECURITY_ATTRIBUTES) 0x0, 3, 0x40000000, (HANDLE) 0x0);
        if (pvVar7 == (HANDLE) 0xffffffffffffffff) {
            DVar14 = GetLastError();
            if (DVar14 != 2 && DVar14 != 3) {
                CloseHandle(pvVar6);
                goto LAB_1401b6bcc;
            }
            goto LAB_1401b6536;
        }
        plVar11 = (longlong *) FUN_14018b280(0x300, 0);
        if (plVar11 != (longlong *) 0x0) {
            plVar8 = plVar11 + 3;
            *plVar11 = (longlong) & PTR_LAB_140b5fdb0;
            lVar5 = 0x104;
            plVar11[0x53] = 0;
            plVar11[0x54] = 0;
            plVar11[0x55] = 0;
            plVar11[0x56] = 0;
            lVar12 = (longlong) local_258 - (longlong) plVar8;
            *(undefined4 * )(plVar11 + 1) = 1;
            plVar11[2] = (longlong) param_1;
            *(undefined4 * )(plVar11 + 0x44) = 1;
            plVar11[0x49] = 0;
            plVar11[0x47] = 0;
            *(undefined4 * )(plVar11 + 0x48) = 0;
            plVar11[0x4a] = (longlong)(plVar11 + 0x49);
            do {
                if ((lVar5 == -0x7ffffefa) || (sVar1 = *(short *) (lVar12 + (longlong) plVar8), sVar1 == 0)) {
                    if (lVar5 != 0) goto LAB_1401b647d;
                    break;
                }
                *(short *) plVar8 = sVar1;
                plVar8 = (longlong * )((longlong) plVar8 + 2);
                lVar5 = lVar5 + -1;
            } while (lVar5 != 0);
            plVar8 = (longlong * )((longlong) plVar8 + -2);
            LAB_1401b647d:
            *(short *) plVar8 = 0;
            *plVar11 = (longlong) & PTR_LAB_140b5f940;
            plVar11[0x57] = (longlong) pvVar7;
            GetFileTime(pvVar7, (LPFILETIME) 0x0, (LPFILETIME) 0x0, (LPFILETIME)(plVar11 + 0x46));
            GetFileSizeEx((HANDLE) plVar11[0x57], plVar11 + 0x45);
            CreateIoCompletionPort((HANDLE) plVar11[0x57], *param_1, 1, 0);
            plVar8 = plVar11;
        }
        lVar5 = FUN_14018b280(0x300, 0);
        if (lVar5 != 0) {
            plVar9 = (longlong *) FUN_1401d1a90(lVar5, param_1, local_6d0, uVar13);
        }
        iVar4 = FUN_1401b77b0();
        if (iVar4 < 0) {
            (**(code * *)(*plVar8 + 8))();
            (**(code * *)(*plVar9 + 8))(plVar9);
            goto LAB_1401b6bcc;
        }
        (**(code * *)(*plVar8 + 8))(plVar8);
    }
    LAB_1401b6baa:
    *local_6c8 = plVar9;
    goto LAB_1401b6bcc;
    while (true) {
        *(short *) plVar9 = sVar1;
        plVar9 = (longlong * )((longlong) plVar9 + 2);
        lVar5 = lVar5 + -1;
        if (lVar5 == 0) break;
        LAB_1401b61d0:
        if ((lVar5 == -0x7ffffefa) || (sVar1 = *(short *) (lVar12 + (longlong) plVar9), sVar1 == 0)) {
            if (lVar5 != 0) goto LAB_1401b61fd;
            break;
        }
    }
    plVar9 = (longlong * )((longlong) plVar9 + -2);
    LAB_1401b61fd:
    *(short *) plVar9 = 0;
    *plVar11 = (longlong) & PTR_LAB_140b5fbe0;
    plVar11[0x57] = local_6b0;
    plVar11[0x58] = local_6a8;
    plVar11[0x59] = local_6a0;
    plVar11[0x5a] = local_698;
    plVar11[0x5b] = local_690;
    plVar11[0x5d] = (longlong) local_6d8;
    plVar11[0x5c] = CONCAT44(uStack1668, local_688);
    (**(code * *) * local_6d8)(local_6d8);
    plVar11[0x5e] = 0;
    plVar11[0x46] = plVar11[0x57];
    plVar11[0x45] = plVar11[0x58];
    plVar9 = plVar11;
    LAB_1401b6284:
    iVar4 = FUN_1401b77b0();
    if (-1 < iVar4) {
        (**(code * *)(*plVar9 + 8))(plVar9);
        LAB_1401b62af:
        *local_6c8 = plVar8;
        goto LAB_1401b62b7;
    }
    (**(code * *)(*plVar9 + 8))();
    lVar5 = *plVar8;
    goto LAB_1401b67f2;
    LAB_1401b6a3d:
    if (local_6d8 != (longlong *) 0x0) {
        (**(code * *)(*local_6d8 + 8))();
    }
    goto LAB_1401b6bcc;
    while (true) {
        *(short *) plVar9 = sVar1;
        plVar9 = (longlong * )((longlong) plVar9 + 2);
        lVar5 = lVar5 + -1;
        if (lVar5 == 0) break;
        LAB_1401b66f0:
        if ((lVar5 == -0x7ffffefa) || (sVar1 = *(short *) (lVar12 + (longlong) plVar9), sVar1 == 0)) {
            if (lVar5 != 0) goto LAB_1401b671d;
            break;
        }
    }
    plVar9 = (longlong * )((longlong) plVar9 + -2);
    LAB_1401b671d:
    *(short *) plVar9 = 0;
    *plVar11 = (longlong) & PTR_LAB_140b5fbe0;
    plVar11[0x57] = local_6b0;
    plVar11[0x58] = local_6a8;
    plVar11[0x59] = local_6a0;
    plVar11[0x5a] = local_698;
    plVar11[0x5b] = local_690;
    plVar11[0x5d] = (longlong) local_6d8;
    plVar11[0x5c] = CONCAT44(uStack1668, local_688);
    (**(code * *) * local_6d8)(local_6d8);
    plVar11[0x5e] = 0;
    plVar11[0x46] = plVar11[0x57];
    plVar11[0x45] = plVar11[0x58];
    plVar9 = plVar11;
    LAB_1401b67a6:
    lVar5 = FUN_14018b280(0x300, 0);
    if (lVar5 != 0) {
        plVar8 = (longlong *) FUN_1401d1a90(lVar5, param_1, local_6d0, uVar13);
    }
    iVar4 = FUN_1401b77b0();
    if (-1 < iVar4) {
        (**(code * *)(*plVar9 + 8))(plVar9);
        *local_6c8 = plVar8;
        LAB_1401b62b7:
        if (local_6d8 != (longlong *) 0x0) {
            (**(code * *)(*local_6d8 + 8))();
        }
        goto LAB_1401b6bcc;
    }
    (**(code * *)(*plVar9 + 8))();
    lVar5 = *plVar8;
    LAB_1401b67f2:
    (**(code * *)(lVar5 + 8))(plVar8);
    if (local_6d8 != (longlong *) 0x0) {
        (**(code * *)(*local_6d8 + 8))();
    }
    LAB_1401b6bcc:
    FUN_1407db4f0(local_48 ^ (ulonglong) auStackY1816);
    return;
}


int FUN_1401b6bf0(undefined8 param_1, short **param_2, undefined8 *param_3) {
    longlong lVar1;
    int iVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;

    lVar1 = DAT_140c63788;
    if (*(longlong * )(DAT_140c63788 + 0x1318) != 0) {
        if (param_3 == (undefined8 *) 0x0) {
            return -0x7ff8ffa9;
        }
        if ((*param_2 != (short *) 0x0) && (**param_2 != 0)) {
            puVar3 = (undefined8 *) FUN_14018b280();
            puVar4 = (undefined8 *) 0x0;
            if (puVar3 != (undefined8 *) 0x0) {
                *puVar3 = &PTR_LAB_140b5f928;
                puVar3[4] = 0;
                puVar3[5] = 0;
                puVar3[9] = 0;
                puVar3[10] = 0;
                *(undefined4 * )(puVar3 + 0xb) = 1;
                puVar3[1] = 0;
                puVar3[2] = 0;
                puVar4 = puVar3;
            }
            iVar2 = FUN_1401ce8e0(puVar4, *(undefined8 * )(lVar1 + 0x1318), param_2);
            if (iVar2 < 0) {
                if (puVar4 != (undefined8 *) 0x0) {
                    FUN_1401ce7a0(puVar4);
                    FUN_14018b900(puVar4, 0);
                }
            } else {
                *param_3 = puVar4;
                iVar2 = 0;
            }
            return iVar2;
        }
    }
    return -0x7fffbffb;
}


ulonglong FUN_1401b6d00(longlong *param_1, undefined8 param_2, longlong **param_3) {
    longlong *plVar1;
    longlong *plVar2;
    uint uVar3;
    ulonglong uVar4;
    undefined8 uVar5;
    longlong *local_res8;

    if (param_3 == (longlong **) 0x0) {
        return 0x80070057;
    }
    local_res8 = param_1;
    uVar4 = FUN_1401b5b50(DAT_140c63788, param_2, 1, 3, &local_res8);
    plVar1 = local_res8;
    if (-1 < (int) uVar4) {
        uVar5 = (**(code * *)(*local_res8 + 0x18))(local_res8);
        uVar3 = FUN_1401c5690(uVar5, &local_res8, 0);
        plVar2 = local_res8;
        if ((int) uVar3 < 0) {
            (**(code * *)(*plVar1 + 8))();
            return (ulonglong) uVar3;
        }
        uVar3 = (**(code * *)(*plVar1 + 0x48))(plVar1, local_res8);
        uVar4 = (ulonglong) uVar3;
        if ((int) uVar3 < 0) {
            (**(code * *)(*plVar2 + 8))(plVar2);
            (**(code * *)(*plVar1 + 8))(plVar1);
        } else {
            (**(code * *)(*plVar1 + 8))(plVar1);
            *param_3 = plVar2;
            uVar4 = 0;
        }
    }
    return uVar4;
}


int FUN_1401b6de0(longlong *param_1, undefined8 param_2, longlong **param_3, undefined8 param_4,
                  undefined8 param_5) {
    longlong *plVar1;
    int iVar2;
    undefined8 uVar3;
    longlong *local_res8;

    if (param_3 == (longlong **) 0x0) {
        return -0x7ff8ffa9;
    }
    local_res8 = param_1;
    iVar2 = FUN_1401b5b50(DAT_140c63788, param_2, 1, 3, &local_res8);
    plVar1 = local_res8;
    if (iVar2 < 0) {
        local_res8 = (longlong *) 0x141d41b20;
        FUN_1401a3130(3, 2, &local_res8, iVar2, param_2);
        return iVar2;
    }
    uVar3 = (**(code * *)(*local_res8 + 0x18))(local_res8);
    iVar2 = FUN_1401c5690(uVar3, param_3, 0);
    if (iVar2 < 0) {
        FUN_1400035b0(3, 2, 0, uVar3, param_2);
        (**(code * *)(*plVar1 + 8))(plVar1);
    } else {
        iVar2 = (**(code * *)(*plVar1 + 0x58))(plVar1, *param_3, param_4, param_5);
        if (iVar2 < 0) {
            FUN_1400035b0(3, 2, 0, iVar2, param_2);
            (**(code * *)(**param_3 + 8))();
            *param_3 = (longlong *) 0x0;
            (**(code * *)(*plVar1 + 8))(plVar1);
        } else {
            (**(code * *)(*plVar1 + 8))(plVar1);
            iVar2 = 0;
        }
    }
    return iVar2;
}


ulonglong FUN_1401b6f30(longlong *param_1, undefined8 param_2, undefined8 param_3, longlong param_4) {
    longlong *plVar1;
    uint uVar2;
    ulonglong uVar3;
    longlong *local_res8;

    if (param_4 == 0) {
        return 0x80070057;
    }
    local_res8 = param_1;
    uVar3 = FUN_1401b5b50(DAT_140c63788, param_2, 2, 0, &local_res8);
    plVar1 = local_res8;
    if (-1 < (int) uVar3) {
        uVar2 = (**(code * *)(*local_res8 + 0x68))(local_res8, param_4);
        if ((int) uVar2 < 0) {
            (**(code * *)(*plVar1 + 8))();
            return (ulonglong) uVar2;
        }
        (**(code * *)(*plVar1 + 0x88))(plVar1);
        (**(code * *)(*plVar1 + 8))(plVar1);
        uVar3 = 0;
    }
    return uVar3;
}


void FUN_1401b6fc0(void) {
    code *pcVar1;
    longlong *plVar2;
    int iVar3;
    BOOL BVar4;
    longlong lVar5;
    longlong lVar6;
    WCHAR *pWVar7;
    ulonglong uVar8;
    LPCWSTR pWVar9;
    ulonglong uVar10;
    undefined * puVar11;
    undefined auStack616[48];
    longlong *local_238[2];
    WCHAR local_228[264];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack616;
    uVar10 = 0;
    local_238[0] = (longlong *) 0x0;
    lVar5 = FUN_1401b5020();
    lVar6 = FUN_1407dd8d8();
    if ((lVar6 == 0) || (puVar11 = &DAT_1409e29cc, *(short *) (lVar6 + 2) != 0)) {
        puVar11 = &DAT_1409e5034;
    }
    pWVar7 = local_228;
    iVar3 = 0;
    lVar6 = 0x104;
    do {
        uVar8 = uVar10;
        if (*pWVar7 == L'\0') {
            if (lVar6 == 0) {
                iVar3 = -0x7ff8ffa9;
            } else {
                uVar8 = 0x104 - lVar6;
            }
            goto LAB_1401b705d;
        }
        pWVar7 = pWVar7 + 1;
        lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    iVar3 = -0x7ff8ffa9;
    LAB_1401b705d:
    if ((-1 < iVar3) &&
        (iVar3 = FUN_14001b680(local_228 + uVar8, 0x104 - uVar8, 0x104 - uVar8, puVar11), -1 < iVar3)) {
        iVar3 = FUN_1401cffa0(0, local_228, 1, local_238);
        plVar2 = local_238[0];
        if (iVar3 < 0) {
            if (local_238[0] != (longlong *) 0x0) {
                (**(code * *)(*local_238[0] + 8))();
            }
        } else {
            if (0x207 < (ulonglong)(lVar5 * 2)) {
                __report_rangecheckfailure();
                pcVar1 = (code *) swi(3);
                (*pcVar1)();
                return;
            }
            local_228[lVar5] = L'\0';
            uVar8 = (**(code * *)(*local_238[0] + 0x10))(local_238[0]);
            if (uVar8 != 0) {
                do {
                    pWVar9 = (LPCWSTR)(**(code * *)(*plVar2 + 0x18))(plVar2, uVar10);
                    BVar4 = DeleteFileW(pWVar9);
                    if (BVar4 == 0) goto LAB_1401b7161;
                    uVar10 = uVar10 + 1;
                } while (uVar10 < uVar8);
            }
            lVar5 = (**(code * *)(*plVar2 + 0x38))(plVar2);
            do {
                if (lVar5 == 0) {
                    BVar4 = RemoveDirectoryW(local_228);
                    if (BVar4 != 0) {
                        (**(code * *)(*plVar2 + 8))(plVar2);
                        goto LAB_1401b7189;
                    }
                    break;
                }
                lVar5 = lVar5 + -1;
                pWVar9 = (LPCWSTR)(**(code * *)(*plVar2 + 0x40))(plVar2, lVar5);
                BVar4 = RemoveDirectoryW(pWVar9);
            } while (BVar4 != 0);
            LAB_1401b7161:
            GetLastError();
            (**(code * *)(*plVar2 + 8))(plVar2);
        }
    }
    LAB_1401b7189:
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack616);
    return;
}


void FUN_1401b71d0(undefined8 param_1, longlong param_2, longlong param_3) {
    longlong *plVar1;
    int iVar2;
    ulonglong uVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    undefined auStack248[32];
    longlong **local_d8;
    longlong *local_c8[2];
    undefined4 local_b8;
    undefined4 local_b4;
    undefined4 local_b0;
    undefined4 local_ac;
    undefined4 local_a8;
    undefined8 local_a4;
    undefined2 local_9c;
    undefined8 local_58;
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong) auStack248;
    if ((param_2 != 0) && (param_3 != 0)) {
        local_d8 = local_c8;
        local_c8[0] = (longlong *) 0x0;
        iVar2 = FUN_1401b5b50(DAT_140c63788, param_2, 1, 3);
        plVar1 = local_c8[0];
        if (-1 < iVar2) {
            uVar3 = (**(code * *)(*local_c8[0] + 0x18))(local_c8[0]);
            uVar7 = 0x100000;
            if (uVar3 < 0x100000) {
                uVar7 = uVar3;
            }
            if (uVar7 == 0) {
                puVar5 = (undefined8 *) 0x0;
            } else {
                puVar4 = (undefined8 *) FUN_14018b280(uVar7 + 0x10, 0);
                if (puVar4 == (undefined8 *) 0x0) {
                    puVar5 = (undefined8 * ) & DAT_00000010;
                } else {
                    puVar5 = puVar4 + 2;
                    *puVar4 = &PTR_FUN_140b5f110;
                }
            }
            local_a4 = 0;
            local_9c = 0;
            local_b8 = 0x67452301;
            local_b4 = 0xefcdab89;
            local_b0 = 0x98badcfe;
            local_ac = 0x10325476;
            local_a8 = 0xc3d2e1f0;
            local_58 = 0;
            for (; uVar3 != 0; uVar3 = uVar3 - uVar6) {
                uVar6 = uVar7;
                if (uVar3 < uVar7) {
                    uVar6 = uVar3;
                }
                iVar2 = (**(code * *)(*plVar1 + 0x40))(plVar1, puVar5, uVar6);
                if (iVar2 < 0) goto LAB_1401b733a;
                if (uVar6 != 0) {
                    FUN_1401c8c20(&local_b8, puVar5, uVar6);
                }
            }
            FUN_1401c8b70(&local_b8, param_3);
            LAB_1401b733a:
            if (puVar5 != (undefined8 *) 0x0) {
                (**(code **) puVar5[-2])(puVar5 + -2);
            }
        }
        if (plVar1 != (longlong *) 0x0) {
            (**(code * *)(*plVar1 + 8))(plVar1);
        }
    }
    FUN_1407db4f0(local_48 ^ (ulonglong) auStack248);
    return;
}


undefined8 *FUN_1401b73c0(undefined8 param_1, undefined8 *param_2) {
    ulonglong *puVar1;
    DWORD *pDVar2;
    ulonglong uVar3;
    longlong lVar4;
    DWORD DVar5;
    HANDLE hObject;
    ulonglong uVar6;

    lVar4 = DAT_140c63788;
    pDVar2 = (DWORD * )(DAT_140c63788 + 0x12f8);
    DVar5 = GetCurrentThreadId();
    uVar6 = 0;
    if (*pDVar2 == DVar5) {
        *(longlong * )(lVar4 + 0x1300) = *(longlong * )(lVar4 + 0x1300) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(lVar4 + 0x1300);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
            if (uVar3 == 0) {
                *pDVar2 = DVar5;
                goto LAB_1401b7428;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(pDVar2);
    }
    LAB_1401b7428:
    *param_2 = *(undefined8 * )(lVar4 + 0x12a8);
    param_2[1] = *(undefined8 * )(lVar4 + 0x12b0);
    param_2[2] = *(undefined8 * )(lVar4 + 0x12b8);
    param_2[3] = *(undefined8 * )(lVar4 + 0x12c0);
    param_2[4] = *(undefined8 * )(lVar4 + 0x12c8);
    param_2[5] = *(undefined8 * )(lVar4 + 0x12d0);
    param_2[6] = *(undefined8 * )(lVar4 + 0x12d8);
    param_2[7] = *(undefined8 * )(lVar4 + 0x12e0);
    if (*(ulonglong * )(lVar4 + 0x1300) < 2) {
        *pDVar2 = 0;
        *(undefined8 * )(lVar4 + 0x1300) = 0;
        if (*(longlong * )(lVar4 + 0x1308) != 0) {
            if (*(longlong * )(lVar4 + 0x1310) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar4 + 0x1310);
                uVar6 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar6 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar4 + 0x1310));
        }
    } else {
        *(longlong * )(lVar4 + 0x1300) = *(longlong * )(lVar4 + 0x1300) + -1;
    }
    return param_2;
}


void FUN_1401b76d0(undefined8 param_1, longlong param_2) {
    short sVar1;
    longlong lVar2;
    ulonglong uVar3;
    short *psVar4;
    undefined auStack584[32];
    short local_228[264];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack584;
    lVar2 = FUN_1407dd8d8(param_2, 0x5c);
    if ((lVar2 != 0) &&
        ((uVar3 = lVar2 - param_2 >> 1, uVar3 == 0 || (*(short *) (param_2 + -2 + uVar3 * 2) != 0x3a)))) {
        if (uVar3 < 0x7fffffff) {
            lVar2 = 0x104;
            psVar4 = local_228;
            do {
                if (((uVar3 - 0x104) + lVar2 == 0) ||
                    (sVar1 = *(short *) ((param_2 - (longlong) local_228) + (longlong) psVar4), sVar1 == 0)) {
                    if (lVar2 != 0) goto LAB_1401b776a;
                    break;
                }
                *psVar4 = sVar1;
                psVar4 = psVar4 + 1;
                lVar2 = lVar2 + -1;
            } while (lVar2 != 0);
            psVar4 = psVar4 + -1;
            LAB_1401b776a:
            *psVar4 = 0;
        } else {
            local_228[0] = 0;
        }
        Ordinal_165(0, local_228);
    }
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack584);
    return;
}


int FUN_1401b77b0(undefined8 param_1, longlong *param_2, longlong *param_3) {
    longlong lVar1;
    int iVar2;
    ulonglong uVar3;
    undefined8 uVar4;
    ulonglong uVar5;
    ulonglong uVar6;

    uVar3 = (**(code * *)(*param_3 + 0x18))(param_3);
    uVar6 = uVar3;
    if (0xffffffff0 < uVar3) {
        uVar6 = 0xffffffff0;
    }
    uVar4 = FUN_14018b280(uVar6, 0);
    while (true) {
        if (uVar3 == 0) {
            FUN_14018b900(uVar4, 0);
            (**(code * *)(*param_2 + 0x38))(param_2, 0);
            lVar1 = *param_2;
            uVar4 = (**(code * *)(*param_3 + 0x20))(param_3);
            (**(code * *)(lVar1 + 0x28))(param_2, uVar4);
            return 0;
        }
        uVar5 = uVar3;
        if (uVar6 < uVar3) {
            uVar5 = uVar6;
        }
        iVar2 = (**(code * *)(*param_3 + 0x40))(param_3, uVar4, uVar5);
        if ((iVar2 < 0) || (iVar2 = (**(code * *)(*param_2 + 0x60))(param_2, uVar4, uVar5), iVar2 < 0))
            break;
        uVar3 = uVar3 - uVar5;
    }
    FUN_14018b900(uVar4, 0);
    return iVar2;
}


undefined8 *FUN_1401b7900(undefined8 *param_1) {
    undefined * puVar1;

    *param_1 = &PTR_LAB_140b5f170;
    param_1[6] = 0;
    param_1[0x4e] = 0;
    param_1[0x4d] = 0;
    puVar1 = (undefined * )
    FUN_14018b280(0x30, 0);
    param_1[0x51] = 0;
    param_1[0x50] = puVar1;
    *puVar1 = 0;
    *(undefined8 * )(param_1[0x50] + 8) = 0;
    *(undefined8 * )(param_1[0x50] + 0x10) = param_1[0x50];
    *(undefined8 * )(param_1[0x50] + 0x18) = param_1[0x50];
    *(undefined4 * )((longlong) param_1 + 0x29c) = 1;
    param_1[1] = 0;
    param_1[4] = 0xffffffffffffffff;
    param_1[5] = 0xffffffffffffffff;
    *(undefined4 * )(param_1 + 0x53) = 1;
    return param_1;
}


void FUN_1401b79b0(undefined8 *param_1) {
    longlong lVar1;

    *param_1 = &PTR_LAB_140b5f170;
    FUN_14018b900(param_1[1], 0);
    if ((HANDLE) param_1[4] != (HANDLE) 0xffffffffffffffff) {
        CloseHandle((HANDLE) param_1[4]);
    }
    if ((HANDLE) param_1[5] != (HANDLE) 0xffffffffffffffff) {
        CloseHandle((HANDLE) param_1[5]);
    }
    FUN_140008410(param_1 + 0x4f);
    FUN_14018b900(param_1[0x50], 0);
    lVar1 = param_1[0x4d];
    if (lVar1 != 0) {
        (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    if ((longlong *) param_1[6] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[6] + 8))();
    }
    return;
}


undefined8
FUN_1401b7a40(longlong param_1, longlong param_2, uint param_3, undefined8 param_4, longlong param_5) {
    undefined8 uVar1;

    if ((param_2 == 0) || ((param_3 & 3) == 0)) {
        return 0x80070057;
    }
    uVar1 = FUN_14018e9c0(param_2);
    *(uint * )(param_1 + 0x10) = param_3;
    *(undefined8 * )(param_1 + 0x18) = param_4;
    *(undefined8 * )(param_1 + 8) = uVar1;
    if ((param_3 & 2) == 0) {
        uVar1 = FUN_1401b7af0(param_1, param_5);
        if ((int) uVar1 < 0) {
            return uVar1;
        }
    } else {
        if (param_5 != 0) {
            return 0x80004005;
        }
        uVar1 = FUN_1401b7d40(param_1);
        if ((int) uVar1 < 0) {
            return uVar1;
        }
    }
    return 0;
}


DWORD FUN_1401b7af0(longlong param_1, longlong param_2) {
    BOOL BVar1;
    DWORD DVar2;
    DWORD DVar3;
    HANDLE pvVar4;
    ulonglong local_28[2];

    if (*(longlong * )(param_1 + 0x18) == 0) {
        pvVar4 = CreateFileW(*(LPCWSTR * )(param_1 + 8), 0x80000000, 1, (LPSECURITY_ATTRIBUTES) 0x0, 3,
                             0x10000000, (HANDLE) 0x0);
        *(HANDLE * )(param_1 + 0x20) = pvVar4;
        if (pvVar4 != (HANDLE) 0xffffffffffffffff) {
            LAB_1401b7bb3:
            BVar1 = GetFileSizeEx(*(HANDLE * )(param_1 + 0x20), local_28);
            if (BVar1 != 0) {
                DVar2 = FUN_1401ba2a0(param_1, param_2, local_28[0]);
                if (-1 < (int) DVar2) {
                    if (local_28[0] < 0x230) {
                        DVar2 = -(uint)(local_28[0] != 0) & 0xa0030001;
                    } else {
                        DVar2 = FUN_1401bc1a0(param_1, 0, param_1 + 0x38);
                        if ((-1 < (int) DVar2) && (DVar2 = FUN_1401ba550(param_1), -1 < (int) DVar2)) {
                            if (*(ulonglong * )(param_1 + 0x240) < local_28[0] ||
                                *(ulonglong * )(param_1 + 0x240) == local_28[0]) {
                                FUN_1401bc800(param_1 + 0x268, *(undefined4 * )(param_1 + 600));
                                if (((*(int *) (param_1 + 600) == 0) ||
                                     (DVar2 = FUN_1401bc1a0(param_1, *(undefined8 * )(param_1 + 0x250),
                                                            *(undefined8 * )(param_1 + 0x268)), -1 < (int) DVar2)) &&
                                    (DVar2 = FUN_1401ba600(param_1), -1 < (int) DVar2)) {
                                    return 0;
                                }
                            } else {
                                DVar2 = 0xa0030001;
                            }
                        }
                    }
                }
                goto LAB_1401b7bdf;
            }
        }
    } else {
        pvVar4 = CreateFileW(*(LPCWSTR * )(param_1 + 8), 0x80000000, 1, (LPSECURITY_ATTRIBUTES) 0x0, 3,
                             0x50000000, (HANDLE) 0x0);
        *(HANDLE * )(param_1 + 0x20) = pvVar4;
        if (pvVar4 != (HANDLE) 0xffffffffffffffff) {
            pvVar4 = CreateFileW(*(LPCWSTR * )(param_1 + 8), 0x80000000, 1, (LPSECURITY_ATTRIBUTES) 0x0, 3,
                                 0x50000000, (HANDLE) 0x0);
            *(HANDLE * )(param_1 + 0x28) = pvVar4;
            if (pvVar4 != (HANDLE) 0xffffffffffffffff) {
                CreateIoCompletionPort(pvVar4, *(HANDLE * )(param_1 + 0x18), 1, 0);
                goto LAB_1401b7bb3;
            }
        }
    }
    DVar2 = GetLastError();
    if (0 < (int) DVar2) {
        DVar2 = DVar2 & 0xffff | 0x80070000;
    }
    LAB_1401b7bdf:
    if (*(HANDLE * )(param_1 + 0x20) != (HANDLE) 0xffffffffffffffff) {
        CloseHandle(*(HANDLE * )(param_1 + 0x20));
        *(undefined8 * )(param_1 + 0x20) = 0xffffffffffffffff;
    }
    if (*(HANDLE * )(param_1 + 0x28) != (HANDLE) 0xffffffffffffffff) {
        CloseHandle(*(HANDLE * )(param_1 + 0x28));
        *(undefined8 * )(param_1 + 0x28) = 0xffffffffffffffff;
    }
    FUN_1407e4830(param_1 + 0x38, 0, 0x230);
    *(undefined4 * )(param_1 + 0x38) = 0x5041434b;
    *(undefined4 * )(param_1 + 0x3c) = 1;
    *(undefined8 * )(param_1 + 0x240) = 0x238;
    FUN_1401bc800(param_1 + 0x268, 0);
    DVar3 = 0;
    if (param_2 != 0) {
        DVar3 = DVar2;
    }
    return DVar3;
}


DWORD FUN_1401b7d40(longlong *param_1) {
    DWORD DVar1;
    BOOL BVar2;
    DWORD DVar3;
    HANDLE hFile;
    undefined8 local_18;
    ulonglong local_10;

    hFile = CreateFileW((LPCWSTR) param_1[1], 0xc0000000, 0, (LPSECURITY_ATTRIBUTES) 0x0, 4, 0x10000080,
                        (HANDLE) 0x0);
    param_1[4] = (longlong) hFile;
    if (hFile == (HANDLE) 0xffffffffffffffff) {
        DVar1 = GetLastError();
        if (0 < (int) DVar1) {
            DVar1 = DVar1 & 0xffff | 0x80070000;
        }
        local_18 = 0x141d41be0;
        FUN_1401a3130(3, 0, &local_18, param_1[1], DVar1);
        return DVar1;
    }
    BVar2 = GetFileSizeEx(hFile, &local_10);
    if (BVar2 == 0) {
        DVar1 = GetLastError();
        if (0 < (int) DVar1) {
            DVar1 = DVar1 & 0xffff | 0x80070000;
        }
        LAB_1401b7e11:
        if (-1 < (int) DVar1) goto LAB_1401b7e36;
    } else {
        if (local_10 < 0x230) {
            DVar1 = -(uint)(local_10 != 0) & 0xa0030001;
            goto LAB_1401b7e11;
        }
        DVar1 = FUN_1401bc1a0(param_1, 0, param_1 + 7);
        if ((-1 < (int) DVar1) && (DVar1 = FUN_1401ba550(param_1), -1 < (int) DVar1)) {
            if ((ulonglong) param_1[0x48] < local_10 || param_1[0x48] == local_10) {
                FUN_1401bc800(param_1 + 0x4d, *(undefined4 * )(param_1 + 0x4b));
                if (((*(int *) (param_1 + 0x4b) == 0) ||
                     (DVar1 = FUN_1401bc1a0(param_1, param_1[0x4a], param_1[0x4d]), -1 < (int) DVar1)) &&
                    (DVar1 = FUN_1401ba600(param_1), -1 < (int) DVar1)) {
                    *(undefined4 * )(param_1 + 0x53) = 0;
                    return 0;
                }
            } else {
                DVar1 = 0xa0030001;
            }
        }
    }
    local_18 = 0x141d41b70;
    FUN_1401a3130(3, 0, &local_18, param_1[1], DVar1);
    LAB_1401b7e36:
    DVar3 = (**(code * *)(*param_1 + 0xa0))(param_1);
    DVar1 = 0;
    if ((int) DVar3 < 0) {
        DVar1 = DVar3;
    }
    return DVar1;
}


int FUN_1401b8600(longlong param_1, uint param_2, ulonglong param_3, longlong param_4, ulonglong param_5
) {
    ulonglong uVar1;
    int iVar2;
    longlong *plVar3;
    int iVar4;

    if (param_5 == 0) {
        return 0;
    }
    if (((param_2 != 0) && (param_4 != 0)) && ((ulonglong) param_2 < *(ulonglong * )(param_1 + 0x270))) {
        plVar3 = (longlong * )((ulonglong) param_2 * 0x10 + *(longlong * )(param_1 + 0x268));
        uVar1 = plVar3[1];
        if (((uVar1 != 0) && (param_3 <= uVar1)) && (param_5 <= uVar1 - param_3)) {
            iVar2 = FUN_1401bc1a0(param_1, param_3 + *plVar3, param_4);
            iVar4 = 0;
            if (iVar2 < 0) {
                iVar4 = iVar2;
            }
            return iVar4;
        }
    }
    return -0x7ff8ffa9;
}


int FUN_1401b8680(longlong param_1, uint param_2, longlong param_3, ulonglong param_4, longlong param_5) {
    ulonglong uVar1;
    ulonglong uVar2;
    int iVar3;
    longlong *plVar4;
    int iVar5;

    if ((((param_2 != 0) && (param_3 != 0)) && (param_5 != 0)) &&
        ((ulonglong) param_2 < *(ulonglong * )(param_1 + 0x270))) {
        plVar4 = (longlong * )((ulonglong) param_2 * 0x10 + *(longlong * )(param_1 + 0x268));
        uVar1 = plVar4[1];
        if (uVar1 != 0) {
            uVar2 = *(ulonglong * )(param_5 + 0x10);
            if ((uVar2 <= uVar1) && ((param_4 & 0xffffffff) <= uVar1 - uVar2)) {
                *(ulonglong * )(param_5 + 0x10) = uVar2 + *plVar4;
                iVar3 = FUN_1401bc400(param_1, param_3, param_4 & 0xffffffff);
                iVar5 = 0;
                if (iVar3 < 0) {
                    iVar5 = iVar3;
                }
                return iVar5;
            }
        }
    }
    return -0x7ff8ffa9;
}


int FUN_1401b8710(longlong param_1, uint param_2, ulonglong param_3, longlong param_4, ulonglong param_5
) {
    ulonglong uVar1;
    int iVar2;
    longlong *plVar3;
    int iVar4;

    if ((*(byte * )(param_1 + 0x10) & 2) == 0) {
        return -0x7ff8fffb;
    }
    if (param_5 == 0) {
        return 0;
    }
    if (((param_2 != 0) && (param_4 != 0)) && ((ulonglong) param_2 < *(ulonglong * )(param_1 + 0x270))) {
        plVar3 = (longlong * )((ulonglong) param_2 * 0x10 + *(longlong * )(param_1 + 0x268));
        uVar1 = plVar3[1];
        if (((uVar1 != 0) && (param_3 <= uVar1)) && (param_5 <= uVar1 - param_3)) {
            iVar2 = FUN_1401bc4c0(param_1, *plVar3 + param_3, param_4);
            iVar4 = 0;
            if (iVar2 < 0) {
                iVar4 = iVar2;
            }
            return iVar4;
        }
    }
    return -0x7ff8ffa9;
}


int FUN_1401b87a0(longlong param_1, uint param_2, longlong param_3, ulonglong param_4, longlong param_5) {
    ulonglong uVar1;
    ulonglong uVar2;
    int iVar3;
    longlong *plVar4;
    int iVar5;

    if ((*(byte * )(param_1 + 0x10) & 2) == 0) {
        return -0x7ff8fffb;
    }
    if ((((param_2 != 0) && (param_3 != 0)) && (param_5 != 0)) &&
        ((ulonglong) param_2 < *(ulonglong * )(param_1 + 0x270))) {
        plVar4 = (longlong * )((ulonglong) param_2 * 0x10 + *(longlong * )(param_1 + 0x268));
        uVar1 = plVar4[1];
        if (uVar1 != 0) {
            uVar2 = *(ulonglong * )(param_5 + 0x10);
            if ((uVar2 <= uVar1) && ((param_4 & 0xffffffff) <= uVar1 - uVar2)) {
                *(ulonglong * )(param_5 + 0x10) = uVar2 + *plVar4;
                iVar3 = FUN_1401bc590(param_1, param_3, param_4 & 0xffffffff);
                iVar5 = 0;
                if (iVar3 < 0) {
                    iVar5 = iVar3;
                }
                return iVar5;
            }
        }
    }
    return -0x7ff8ffa9;
}


undefined8 FUN_1401b8840(longlong param_1, longlong param_2) {
    if (param_2 == 0) {
        return 0x80070057;
    }
    if (*(longlong * )(param_1 + 0x28) != -1) {
        FUN_1401c35a0();
    }
    return 0;
}


DWORD FUN_1401ba150(longlong param_1) {
    BOOL BVar1;
    DWORD DVar2;
    undefined4 *lpBuffer;
    ulonglong uVar3;
    uint local_res8[2];

    if ((*(byte * )(param_1 + 0x10) & 2) == 0) {
        return 0x80070005;
    }
    lpBuffer = (undefined4 * )(param_1 + 0x38);
    FUN_1407e4830(lpBuffer, 0, 0x230);
    *lpBuffer = 0x5041434b;
    *(undefined4 * )(param_1 + 0x3c) = 1;
    *(undefined8 * )(param_1 + 0x240) = 0x238;
    FUN_1401bc800(param_1 + 0x268, 0);
    FUN_140008410(param_1 + 0x278);
    *(undefined4 * )(param_1 + 0x298) = 1;
    uVar3 = 0x230;
    if (lpBuffer == (undefined4 *) 0x0) {
        DVar2 = 0x80070057;
        LAB_1401ba286:
        CloseHandle(*(HANDLE * )(param_1 + 0x20));
        *(undefined8 * )(param_1 + 0x20) = 0xffffffffffffffff;
    } else {
        BVar1 = SetFilePointerEx(*(HANDLE * )(param_1 + 0x20), 0, (PLARGE_INTEGER) 0x0, 0);
        if (BVar1 == 0) {
            LAB_1401ba26d:
            DVar2 = GetLastError();
            if (0 < (int) DVar2) {
                DVar2 = DVar2 & 0xffff | 0x80070000;
            }
            if ((int) DVar2 < 0) goto LAB_1401ba286;
        } else {
            do {
                DVar2 = 0x80000000;
                if (uVar3 < 0x80000000) {
                    DVar2 = (DWORD) uVar3;
                }
                BVar1 = WriteFile(*(HANDLE * )(param_1 + 0x20), lpBuffer, DVar2, local_res8, (LPOVERLAPPED) 0x0);
                if (BVar1 == 0) goto LAB_1401ba26d;
                lpBuffer = (undefined4 * )((longlong) lpBuffer + (ulonglong) local_res8[0]);
                uVar3 = uVar3 - local_res8[0];
            } while (uVar3 != 0);
        }
        SetFilePointerEx(*(HANDLE * )(param_1 + 0x20), 0x230, (PLARGE_INTEGER) 0x0, 0);
        SetEndOfFile(*(HANDLE * )(param_1 + 0x20));
        DVar2 = 0;
    }
    return DVar2;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1401ba2a0(longlong param_1, longlong *param_2, ulonglong param_3) {
    BOOL BVar1;
    int iVar2;
    undefined8 *puVar3;
    longlong lVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    uint uVar7;
    undefined8 *puVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    undefined * puVar11;
    undefined auStack248[32];
    longlong local_d8;
    _FILETIME local_d0;
    uint local_c8[5];
    undefined8 local_b4;
    undefined2 local_ac;
    undefined local_aa[66];
    undefined8 local_68;
    undefined local_58[24];
    ulonglong local_40;

    local_40 = DAT_140c0f7b0 ^ (ulonglong) auStack248;
    local_d8 = param_1;
    if ((param_2 == (longlong *) 0x0) || (param_2[2] != param_3)) goto LAB_1401ba512;
    BVar1 = GetFileTime(*(HANDLE * )(param_1 + 0x20), (LPFILETIME) 0x0, (LPFILETIME) 0x0, &local_d0);
    if (BVar1 == 0) {
        GetLastError();
        goto LAB_1401ba512;
    }
    uVar5 = *param_2 - (longlong) local_d0 >> 0x3f;
    if (20000000 < (*param_2 - (longlong) local_d0 ^ uVar5) - uVar5) goto LAB_1401ba512;
    uVar6 = 0;
    uVar5 = 0x100000;
    if (param_3 < 0x100000) {
        uVar5 = param_3;
    }
    if (uVar5 == 0) {
        puVar8 = (undefined8 *) 0x0;
    } else {
        puVar3 = (undefined8 *) FUN_14018b280(uVar5 + 0x10, 0);
        if (puVar3 == (undefined8 *) 0x0) {
            puVar8 = (undefined8 * ) & DAT_00000010;
        } else {
            puVar8 = puVar3 + 2;
            *puVar3 = &PTR_FUN_140b5f110;
        }
    }
    local_b4 = 0;
    local_ac = 0;
    local_c8[0] = 0x67452301;
    local_c8[1] = 0xefcdab89;
    local_c8[2] = 0x98badcfe;
    local_c8[3] = 0x10325476;
    local_c8[4] = 0xc3d2e1f0;
    local_68 = 0;
    uVar9 = uVar6;
    if (param_3 == 0) {
        LAB_1401ba450:
        FUN_1401c8f20(local_c8);
        puVar11 = local_aa;
        for (lVar4 = 0x40; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar11 = 0;
            puVar11 = puVar11 + 1;
        }
        local_b4 = 0;
        local_68 = CONCAT44(local_68._4_4_, 1);
        LAB_1401ba478:
        uVar5 = uVar6;
        puVar11 = local_58;
        do {
            lVar4 = (longlong) uVar6 >> 2;
            uVar7 = (int) uVar5 + 1;
            uVar6 = (ulonglong)(int)
            uVar7;
            *puVar11 = (char) (local_c8[lVar4] >> (('\x03' - ((byte) uVar5 & 3)) * '\b' & 0x1f));
            uVar5 = (ulonglong) uVar7;
            puVar11 = puVar11 + 1;
        } while (uVar6 < 0x14);
    } else {
        do {
            uVar10 = uVar5;
            if (param_3 - uVar9 < uVar5) {
                uVar10 = param_3 - uVar9;
            }
            if (uVar10 != 0) {
                iVar2 = FUN_1401bc1a0(param_1, uVar9, puVar8, uVar10);
                if (iVar2 < 0) {
                    if (puVar8 != (undefined8 *) 0x0) {
                        (**(code **) puVar8[-2])(puVar8 + -2);
                    }
                    goto LAB_1401ba512;
                }
                FUN_1401c8c20(local_c8, puVar8, uVar10);
                param_1 = local_d8;
            }
            uVar9 = uVar9 + uVar10;
        } while (uVar9 < param_3);
        if (local_68._4_4_ == 0) {
            if ((int) local_68 == 0) goto LAB_1401ba450;
            goto LAB_1401ba478;
        }
    }
    if (puVar8 != (undefined8 *) 0x0) {
        (**(code **) puVar8[-2])(puVar8 + -2);
    }
    FUN_1407e6af0(local_58, param_2 + 3, 0x14);
    LAB_1401ba512:
    FUN_1407db4f0(local_40 ^ (ulonglong) auStack248);
    return;
}


undefined8 FUN_1401ba550(longlong param_1) {
    uint uVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    ulonglong *puVar4;

    if ((*(int *) (param_1 + 0x38) == 0x5041434b) && (*(int *) (param_1 + 0x3c) == 1)) {
        uVar3 = 0;
        puVar4 = (ulonglong * )(param_1 + 0x40);
        do {
            uVar2 = *puVar4;
            if (uVar2 != 0) {
                if ((uVar2 & 0xf) != 0) {
                    return 0xa0030001;
                }
                if (uVar2 < 0x240) {
                    return 0xa0030001;
                }
                if (*(ulonglong * )(param_1 + 0x240) <= uVar2 + 0x18 &&
                    uVar2 + 0x18 != *(ulonglong * )(param_1 + 0x240)) {
                    return 0xa0030001;
                }
            }
            uVar3 = uVar3 + 1;
            puVar4 = puVar4 + 1;
        } while (uVar3 < 0x40);
        uVar1 = *(uint * )(param_1 + 600);
        if (uVar1 == 0) {
            if (((*(longlong * )(param_1 + 0x250) == 0) && (*(int *) (param_1 + 0x25c) == 0)) &&
                (*(int *) (param_1 + 0x260) == 0)) {
                return 0;
            }
        } else {
            uVar3 = *(ulonglong * )(param_1 + 0x250);
            if ((((uVar3 & 0xf) == 0) && (0x23f < uVar3)) &&
                ((uVar3 + 0x18 < *(ulonglong * )(param_1 + 0x240) ||
                  uVar3 + 0x18 == *(ulonglong * )(param_1 + 0x240) &&
                  ((*(uint * )(param_1 + 0x25c) < uVar1 && (*(uint * )(param_1 + 0x260) < uVar1)))))) {
                return 0;
            }
        }
    }
    return 0xa0030001;
}


undefined8 FUN_1401ba600(longlong param_1) {
    ulonglong uVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong *puVar5;
    ulonglong uVar6;

    uVar1 = *(ulonglong * )(param_1 + 0x270);
    uVar6 = 0;
    if (uVar1 != 0) {
        puVar5 = *(ulonglong * *)(param_1 + 0x268);
        do {
            uVar2 = puVar5[1];
            if (uVar2 == 0) {
                if (uVar1 <= *puVar5) {
                    return 0xa0030001;
                }
            } else {
                uVar3 = *puVar5;
                if (((uVar3 & 0xf) != 0) || (uVar3 < 0x240)) {
                    return 0xa0030001;
                }
                uVar4 = *(ulonglong * )(param_1 + 0x240);
                if (uVar4 < uVar3 + 0x18) {
                    return 0xa0030001;
                }
                if (uVar4 < uVar2) {
                    return 0xa0030001;
                }
                if (uVar4 - uVar2 < uVar3) {
                    return 0xa0030001;
                }
            }
            uVar6 = uVar6 + 1;
            puVar5 = puVar5 + 2;
        } while (uVar6 < uVar1);
    }
    return 0;
}


undefined8 FUN_1401ba680(longlong param_1, longlong param_2, undefined8 param_3, ulonglong param_4) {
    int iVar1;
    undefined8 uVar2;

    if (0x230U - param_2 < param_4) {
        uVar2 = 0x80070057;
    } else {
        iVar1 = FUN_1407e6af0(param_2 + param_1 + 0x38, param_3, param_4);
        if (iVar1 != 0) {
            if ((param_4 != 0) && (uVar2 = FUN_1401bc4c0(param_1, param_2, param_3, param_4), (int) uVar2 < 0)
                    ) {
                return uVar2;
            }
            FUN_1407db590(param_2 + param_1 + 0x38, param_3, param_4);
        }
        uVar2 = 0;
    }
    return uVar2;
}


DWORD FUN_1401ba720(longlong param_1, uint param_2, undefined8 param_3, undefined8 param_4) {
    longlong lVar1;
    BOOL BVar2;
    DWORD DVar3;
    ulonglong uVar4;
    undefined8 *lpBuffer;
    longlong lVar5;
    uint local_res10[2];
    undefined8 local_28;
    undefined8 local_20;

    if (*(ulonglong * )(param_1 + 0x270) <= (ulonglong) param_2) {
        return 0x80070057;
    }
    lVar5 = (ulonglong) param_2 * 0x10;
    uVar4 = 0x10;
    lpBuffer = &local_28;
    local_28 = param_3;
    local_20 = param_4;
    BVar2 = SetFilePointerEx(*(HANDLE * )(param_1 + 0x20), *(longlong * )(param_1 + 0x250) + lVar5,
                             (PLARGE_INTEGER) 0x0, 0);
    if (BVar2 == 0) {
        LAB_1401ba7d3:
        DVar3 = GetLastError();
        if (0 < (int) DVar3) {
            DVar3 = DVar3 & 0xffff | 0x80070000;
        }
        if ((int) DVar3 < 0) {
            return DVar3;
        }
    } else {
        do {
            DVar3 = 0x80000000;
            if (uVar4 < 0x80000000) {
                DVar3 = (DWORD) uVar4;
            }
            BVar2 = WriteFile(*(HANDLE * )(param_1 + 0x20), lpBuffer, DVar3, local_res10, (LPOVERLAPPED) 0x0);
            if (BVar2 == 0) goto LAB_1401ba7d3;
            lpBuffer = (undefined8 * )((longlong) lpBuffer + (ulonglong) local_res10[0]);
            uVar4 = uVar4 - local_res10[0];
        } while (uVar4 != 0);
    }
    lVar1 = *(longlong * )(param_1 + 0x268);
    *(undefined8 * )(lVar1 + lVar5) = local_28;
    *(undefined8 * )(lVar1 + 8 + lVar5) = local_20;
    return 0;
}


void FUN_1401ba830(longlong param_1) {
    ulonglong uVar1;
    int iVar2;
    ulonglong uVar3;
    longlong lVar4;
    ulonglong uVar5;
    ulonglong *puVar6;
    undefined auStack136[32];
    ulonglong local_68;
    ulonglong local_60;
    longlong local_58;
    undefined local_50[8];
    char local_48;
    ulonglong local_40;
    ulonglong local_38;
    ulonglong local_30;
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong) auStack136;
    if (*(int *) (param_1 + 0x298) == 0) {
        lVar4 = 0x40;
        puVar6 = (ulonglong * )(param_1 + 0x40);
        do {
            uVar1 = *puVar6;
            uVar5 = 0;
            if (*puVar6 != 0) {
                while ((((((uVar3 = uVar1, (uVar3 & 0xf) == 0 && (0x23f < uVar3)) &&
                           (uVar3 + 0x18 < *(ulonglong * )(param_1 + 0x240) ||
                            uVar3 + 0x18 == *(ulonglong * )(param_1 + 0x240))) &&
                          ((iVar2 = FUN_1401bc1a0(param_1, uVar3 - 8, &local_40, 0x18), -1 < iVar2 &&
                                                                                        ((longlong) local_40 < 0)))) &&
                         (((local_40 & 0xf) == 0 &&
                           ((local_38 == uVar5 &&
                             (iVar2 = FUN_1401bc1a0(param_1, uVar3 - local_40, &local_68, 8), -1 < iVar2)))))) &&
                        (local_40 == local_68))) {
                    local_58 = -local_40;
                    local_60 = uVar3;
                    FUN_1401bc880(param_1 + 0x278, local_50, &local_60);
                    if ((local_48 == '\0') || (uVar1 = local_30, uVar5 = uVar3, local_30 == 0)) break;
                }
            }
            puVar6 = puVar6 + 1;
            lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
        *(undefined4 * )(param_1 + 0x298) = 1;
    }
    FUN_1407db4f0(local_28 ^ (ulonglong) auStack136);
    return;
}


DWORD FUN_1401ba9b0(longlong param_1, longlong *param_2, longlong param_3) {
    longlong lVar1;
    int iVar2;
    BOOL BVar3;
    DWORD DVar4;
    longlong lVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    longlong *lpBuffer;
    longlong lVar9;
    ulonglong *puVar10;
    longlong *local_res10;
    ulonglong local_res18;
    ulonglong local_res20;
    ulonglong local_48;
    longlong local_40;

    if (param_2 == (longlong *) 0x0) {
        return 0x80070057;
    }
    if (param_3 == 0) {
        *param_2 = 0;
        return 0;
    }
    local_res18 = param_3 + 0xfU & 0xfffffffffffffff0;
    if ((longlong) local_res18 < 1) {
        return 0x80070057;
    }
    local_res10 = param_2;
    lVar5 = FUN_1401ba830();
    lVar5 = *(longlong * )(lVar5 + 8);
    lVar9 = lVar5;
    lVar1 = *(longlong * )(lVar5 + 8);
    while (lVar1 != 0) {
        if ((*(ulonglong * )(lVar1 + 0x28) == local_res18) ||
            (local_res18 <= *(ulonglong * )(lVar1 + 0x28))) {
            lVar9 = lVar1;
            lVar1 = *(longlong * )(lVar1 + 0x10);
        } else {
            lVar1 = *(longlong * )(lVar1 + 0x18);
        }
    }
    uVar6 = 8;
    if (lVar9 != lVar5) {
        uVar8 = *(ulonglong * )(lVar9 + 0x28);
        lVar5 = *(longlong * )(lVar9 + 0x20);
        local_48 = local_res18;
        if (local_res18 + 0x10 == uVar8) {
            local_48 = uVar8;
        }
        iVar2 = FUN_1401bbe50(param_1, lVar9);
        param_2 = local_res10;
        if (-1 < iVar2) {
            uVar7 = 8;
            puVar10 = &local_48;
            BVar3 = SetFilePointerEx(*(HANDLE * )(param_1 + 0x20), lVar5 + -8, (PLARGE_INTEGER) 0x0, 0);
            if (BVar3 == 0) {
                LAB_1401bab06:
                DVar4 = GetLastError();
                if (0 < (int) DVar4) {
                    DVar4 = DVar4 & 0xffff | 0x80070000;
                }
                param_2 = local_res10;
                if ((int) DVar4 < 0) goto LAB_1401bacec;
            } else {
                do {
                    DVar4 = 0x80000000;
                    if (uVar7 < 0x80000000) {
                        DVar4 = (DWORD) uVar7;
                    }
                    BVar3 = WriteFile(*(HANDLE * )(param_1 + 0x20), puVar10, DVar4, (LPDWORD) & local_res20,
                                      (LPOVERLAPPED) 0x0);
                    if (BVar3 == 0) goto LAB_1401bab06;
                    puVar10 = (ulonglong * )((longlong) puVar10 + (local_res20 & 0xffffffff));
                    uVar7 = uVar7 - (local_res20 & 0xffffffff);
                } while (uVar7 != 0);
            }
            puVar10 = &local_48;
            BVar3 = SetFilePointerEx(*(HANDLE * )(param_1 + 0x20), local_48 + lVar5, (PLARGE_INTEGER) 0x0, 0);
            uVar7 = uVar6;
            if (BVar3 == 0) {
                LAB_1401bab86:
                DVar4 = GetLastError();
                if (0 < (int) DVar4) {
                    DVar4 = DVar4 & 0xffff | 0x80070000;
                }
                param_2 = local_res10;
                if ((int) DVar4 < 0) goto LAB_1401bacec;
            } else {
                do {
                    DVar4 = 0x80000000;
                    if (uVar7 < 0x80000000) {
                        DVar4 = (DWORD) uVar7;
                    }
                    BVar3 = WriteFile(*(HANDLE * )(param_1 + 0x20), puVar10, DVar4, (LPDWORD) & local_res20,
                                      (LPOVERLAPPED) 0x0);
                    if (BVar3 == 0) goto LAB_1401bab86;
                    puVar10 = (ulonglong * )((longlong) puVar10 + (local_res20 & 0xffffffff));
                    uVar7 = uVar7 - (local_res20 & 0xffffffff);
                } while (uVar7 != 0);
            }
            *local_res10 = lVar5;
            if (uVar8 <= local_48) {
                return 0;
            }
            lVar5 = lVar5 + 0x10 + local_48;
            lVar9 = uVar8 + (-0x10 - local_48);
            puVar10 = &local_res20;
            local_res20 = -lVar9;
            BVar3 = SetFilePointerEx(*(HANDLE * )(param_1 + 0x20), lVar5 + -8, (PLARGE_INTEGER) 0x0, 0);
            uVar8 = uVar6;
            if (BVar3 == 0) {
                LAB_1401bac36:
                DVar4 = GetLastError();
                if (0 < (int) DVar4) {
                    DVar4 = DVar4 & 0xffff | 0x80070000;
                }
                if ((int) DVar4 < 0) {
                    return 0;
                }
            } else {
                do {
                    DVar4 = 0x80000000;
                    if (uVar8 < 0x80000000) {
                        DVar4 = (DWORD) uVar8;
                    }
                    BVar3 = WriteFile(*(HANDLE * )(param_1 + 0x20), puVar10, DVar4, (LPDWORD) & local_res10,
                                      (LPOVERLAPPED) 0x0);
                    if (BVar3 == 0) goto LAB_1401bac36;
                    puVar10 = (ulonglong * )((longlong) puVar10 + ((ulonglong) local_res10 & 0xffffffff));
                    uVar8 = uVar8 - ((ulonglong) local_res10 & 0xffffffff);
                } while (uVar8 != 0);
            }
            puVar10 = &local_res20;
            BVar3 = SetFilePointerEx(*(HANDLE * )(param_1 + 0x20), lVar5 + lVar9, (PLARGE_INTEGER) 0x0, 0);
            if (BVar3 != 0) {
                while (true) {
                    DVar4 = 0x80000000;
                    if (uVar6 < 0x80000000) {
                        DVar4 = (DWORD) uVar6;
                    }
                    BVar3 = WriteFile(*(HANDLE * )(param_1 + 0x20), puVar10, DVar4, (LPDWORD) & local_res10,
                                      (LPOVERLAPPED) 0x0);
                    if (BVar3 == 0) break;
                    puVar10 = (ulonglong * )((longlong) puVar10 + ((ulonglong) local_res10 & 0xffffffff));
                    uVar6 = uVar6 - ((ulonglong) local_res10 & 0xffffffff);
                    if (uVar6 == 0) {
                        FUN_1401bbab0(param_1, lVar5, lVar9);
                        return 0;
                    }
                }
            }
            DVar4 = GetLastError();
            if (0 < (int) DVar4) {
                DVar4 = DVar4 & 0xffff | 0x80070000;
            }
            if ((int) DVar4 < 0) {
                return 0;
            }
            FUN_1401bbab0(param_1, lVar5, lVar9);
            return 0;
        }
    }
    LAB_1401bacec:
    lVar5 = *(longlong * )(param_1 + 0x240);
    local_40 = lVar5 + 0x10 + local_res18;
    puVar10 = &local_res18;
    BVar3 = SetFilePointerEx(*(HANDLE * )(param_1 + 0x20), lVar5, (PLARGE_INTEGER) 0x0, 0);
    uVar8 = uVar6;
    if (BVar3 == 0) {
        LAB_1401bad66:
        DVar4 = GetLastError();
        if (0 < (int) DVar4) {
            DVar4 = DVar4 & 0xffff | 0x80070000;
        }
        if ((int) DVar4 < 0) {
            return DVar4;
        }
    } else {
        do {
            DVar4 = 0x80000000;
            if (uVar8 < 0x80000000) {
                DVar4 = (DWORD) uVar8;
            }
            BVar3 = WriteFile(*(HANDLE * )(param_1 + 0x20), puVar10, DVar4, (LPDWORD) & local_res10,
                              (LPOVERLAPPED) 0x0);
            if (BVar3 == 0) goto LAB_1401bad66;
            puVar10 = (ulonglong * )((longlong) puVar10 + ((ulonglong) local_res10 & 0xffffffff));
            uVar8 = uVar8 - ((ulonglong) local_res10 & 0xffffffff);
        } while (uVar8 != 0);
    }
    puVar10 = &local_res18;
    BVar3 = SetFilePointerEx(*(HANDLE * )(param_1 + 0x20), local_res18 + lVar5 + 8, (PLARGE_INTEGER) 0x0, 0
    );
    uVar8 = uVar6;
    if (BVar3 == 0) {
        LAB_1401bade6:
        DVar4 = GetLastError();
        if (0 < (int) DVar4) {
            DVar4 = DVar4 & 0xffff | 0x80070000;
        }
        if ((int) DVar4 < 0) {
            return DVar4;
        }
    } else {
        do {
            DVar4 = 0x80000000;
            if (uVar8 < 0x80000000) {
                DVar4 = (DWORD) uVar8;
            }
            BVar3 = WriteFile(*(HANDLE * )(param_1 + 0x20), puVar10, DVar4, (LPDWORD) & local_res10,
                              (LPOVERLAPPED) 0x0);
            if (BVar3 == 0) goto LAB_1401bade6;
            puVar10 = (ulonglong * )((longlong) puVar10 + ((ulonglong) local_res10 & 0xffffffff));
            uVar8 = uVar8 - ((ulonglong) local_res10 & 0xffffffff);
        } while (uVar8 != 0);
    }
    if (*(longlong * )(param_1 + 0x240) != local_40) {
        lpBuffer = &local_40;
        BVar3 = SetFilePointerEx(*(HANDLE * )(param_1 + 0x20), 0x208, (PLARGE_INTEGER) 0x0, 0);
        if (BVar3 == 0) {
            LAB_1401bae66:
            DVar4 = GetLastError();
            if (0 < (int) DVar4) {
                DVar4 = DVar4 & 0xffff | 0x80070000;
            }
            if ((int) DVar4 < 0) {
                return DVar4;
            }
        } else {
            do {
                DVar4 = 0x80000000;
                if (uVar6 < 0x80000000) {
                    DVar4 = (DWORD) uVar6;
                }
                BVar3 = WriteFile(*(HANDLE * )(param_1 + 0x20), lpBuffer, DVar4, (LPDWORD) & local_res10,
                                  (LPOVERLAPPED) 0x0);
                if (BVar3 == 0) goto LAB_1401bae66;
                lpBuffer = (longlong * )((longlong) lpBuffer + ((ulonglong) local_res10 & 0xffffffff));
                uVar6 = uVar6 - ((ulonglong) local_res10 & 0xffffffff);
            } while (uVar6 != 0);
        }
        *(longlong * )(param_1 + 0x240) = local_40;
    }
    *param_2 = lVar5 + 8;
    return 0;
}


DWORD FUN_1401baec0(longlong param_1, ulonglong *param_2, ulonglong param_3) {
    DWORD DVar1;
    DWORD DVar2;
    int iVar3;
    BOOL BVar4;
    ulonglong uVar5;
    ulonglong *puVar6;
    longlong lVar7;
    longlong lVar8;
    longlong *plVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    uint local_78[2];
    ulonglong local_70;
    ulonglong local_68;
    longlong local_60;
    ulonglong local_58;
    ulonglong local_50;
    longlong local_48;
    ulonglong local_40;

    uVar11 = *param_2;
    local_70 = param_3;
    local_40 = uVar11;
    if (param_3 == 0) {
        DVar1 = FUN_1401bb790(param_1, uVar11);
        if (-1 < (int) DVar1) {
            *param_2 = 0;
            return 0;
        }
        return DVar1;
    }
    if (uVar11 == 0) {
        DVar2 = FUN_1401ba9b0();
        DVar1 = 0;
        if ((int) DVar2 < 0) {
            DVar1 = DVar2;
        }
        return DVar1;
    }
    if (((((uVar11 & 0xf) != 0) || (uVar11 < 0x240)) ||
         (*(ulonglong * )(param_1 + 0x240) <= uVar11 + 0x18 &&
          uVar11 + 0x18 != *(ulonglong * )(param_1 + 0x240))) ||
        (local_70 = param_3 + 0xf & 0xfffffffffffffff0, (longlong) local_70 < 1)) {
        return 0x80070057;
    }
    local_48 = uVar11 - 8;
    uVar5 = 8;
    DVar1 = FUN_1401bc1a0(param_1, local_48, &local_58, 8);
    if ((int) DVar1 < 0) {
        return DVar1;
    }
    if (((longlong) local_58 < 1) || ((local_58 & 0xf) != 0)) {
        return 0xa0030001;
    }
    if (local_70 == local_58) {
        return 0;
    }
    if (local_70 < local_58) {
        lVar7 = local_58 + uVar11;
        if (((((*(ulonglong * )(param_1 + 0x240) <= lVar7 + 8U) ||
               (iVar3 = FUN_1401bc1a0(param_1, lVar7 + 8, &local_68, 8), iVar3 < 0)) ||
              (-1 < (longlong) local_68)) ||
             (((local_68 & 0xf) != 0 ||
               (iVar3 = FUN_1401bc1a0(param_1, (lVar7 + 0x10) - local_68, &local_50, 8), iVar3 < 0)))) ||
            (local_68 != local_50)) {
            if (local_58 < local_70 + 0x20) {
                return 0;
            }
            local_68 = uVar11 + 0x10 + local_70;
            lVar7 = (local_58 - local_70) + -0x10;
            uVar11 = 8;
            plVar9 = &local_60;
            local_60 = -lVar7;
            BVar4 = SetFilePointerEx(*(HANDLE * )(param_1 + 0x20), local_68 - 8, (PLARGE_INTEGER) 0x0, 0);
            if (BVar4 == 0) {
                LAB_1401bb2f1:
                DVar1 = GetLastError();
                if (0 < (int) DVar1) {
                    DVar1 = DVar1 & 0xffff | 0x80070000;
                }
                if (-1 < (int) DVar1) goto LAB_1401bb307;
            } else {
                do {
                    DVar1 = 0x80000000;
                    if (uVar11 < 0x80000000) {
                        DVar1 = (DWORD) uVar11;
                    }
                    BVar4 = WriteFile(*(HANDLE * )(param_1 + 0x20), plVar9, DVar1, local_78, (LPOVERLAPPED) 0x0);
                    if (BVar4 == 0) goto LAB_1401bb2f1;
                    plVar9 = (longlong * )((longlong) plVar9 + (ulonglong) local_78[0]);
                    uVar11 = uVar11 - local_78[0];
                } while (uVar11 != 0);
                LAB_1401bb307:
                uVar11 = 8;
                plVar9 = &local_60;
                BVar4 = SetFilePointerEx(*(HANDLE * )(param_1 + 0x20), local_68 + lVar7, (PLARGE_INTEGER) 0x0, 0);
                if (BVar4 == 0) {
                    LAB_1401bb361:
                    DVar1 = GetLastError();
                    if (0 < (int) DVar1) {
                        DVar1 = DVar1 & 0xffff | 0x80070000;
                    }
                    if ((int) DVar1 < 0) goto LAB_1401bb386;
                } else {
                    do {
                        DVar1 = 0x80000000;
                        if (uVar11 < 0x80000000) {
                            DVar1 = (DWORD) uVar11;
                        }
                        BVar4 = WriteFile(*(HANDLE * )(param_1 + 0x20), plVar9, DVar1, local_78, (LPOVERLAPPED) 0x0);
                        if (BVar4 == 0) goto LAB_1401bb361;
                        plVar9 = (longlong * )((longlong) plVar9 + (ulonglong) local_78[0]);
                        uVar11 = uVar11 - local_78[0];
                    } while (uVar11 != 0);
                }
                FUN_1401bbab0(param_1, local_68, lVar7);
            }
            LAB_1401bb386:
            uVar11 = 8;
            puVar6 = &local_70;
            BVar4 = SetFilePointerEx(*(HANDLE * )(param_1 + 0x20), local_48, (PLARGE_INTEGER) 0x0, 0);
            if (BVar4 == 0) {
                LAB_1401bb3e1:
                DVar1 = GetLastError();
                if (0 < (int) DVar1) {
                    DVar1 = DVar1 & 0xffff | 0x80070000;
                }
                if ((int) DVar1 < 0) {
                    return DVar1;
                }
            } else {
                do {
                    DVar1 = 0x80000000;
                    if (uVar11 < 0x80000000) {
                        DVar1 = (DWORD) uVar11;
                    }
                    BVar4 = WriteFile(*(HANDLE * )(param_1 + 0x20), puVar6, DVar1, local_78, (LPOVERLAPPED) 0x0);
                    if (BVar4 == 0) goto LAB_1401bb3e1;
                    puVar6 = (ulonglong * )((longlong) puVar6 + (ulonglong) local_78[0]);
                    uVar11 = uVar11 - local_78[0];
                } while (uVar11 != 0);
            }
            puVar6 = &local_70;
            BVar4 = SetFilePointerEx(*(HANDLE * )(param_1 + 0x20), local_70 + local_40, (PLARGE_INTEGER) 0x0, 0
            );
            if (BVar4 != 0) {
                while (true) {
                    DVar1 = 0x80000000;
                    if (uVar5 < 0x80000000) {
                        DVar1 = (DWORD) uVar5;
                    }
                    BVar4 = WriteFile(*(HANDLE * )(param_1 + 0x20), puVar6, DVar1, local_78, (LPOVERLAPPED) 0x0);
                    if (BVar4 == 0) break;
                    puVar6 = (ulonglong * )((longlong) puVar6 + (ulonglong) local_78[0]);
                    uVar5 = uVar5 - local_78[0];
                    if (uVar5 == 0) {
                        return 0;
                    }
                }
            }
            DVar1 = GetLastError();
            if (0 < (int) DVar1) {
                DVar1 = DVar1 & 0xffff | 0x80070000;
            }
            goto joined_r0x0001401bb468;
        }
        lVar8 = -local_68;
        iVar3 = FUN_1401bbda0(param_1, lVar7 + 0x10, lVar8);
        if (-1 < iVar3) {
            local_60 = local_70 + 0x10 + uVar11;
            lVar8 = lVar8 + (local_58 - local_70);
            local_68 = -lVar8;
            uVar11 = 8;
            puVar6 = &local_68;
            BVar4 = SetFilePointerEx(*(HANDLE * )(param_1 + 0x20), local_60 + -8, (PLARGE_INTEGER) 0x0, 0);
            if (BVar4 == 0) {
                LAB_1401bb0e1:
                DVar1 = GetLastError();
                if (0 < (int) DVar1) {
                    DVar1 = DVar1 & 0xffff | 0x80070000;
                }
                if ((int) DVar1 < 0) goto LAB_1401bb176;
            } else {
                do {
                    DVar1 = 0x80000000;
                    if (uVar11 < 0x80000000) {
                        DVar1 = (DWORD) uVar11;
                    }
                    BVar4 = WriteFile(*(HANDLE * )(param_1 + 0x20), puVar6, DVar1, local_78, (LPOVERLAPPED) 0x0);
                    if (BVar4 == 0) goto LAB_1401bb0e1;
                    puVar6 = (ulonglong * )((longlong) puVar6 + (ulonglong) local_78[0]);
                    uVar11 = uVar11 - local_78[0];
                } while (uVar11 != 0);
            }
            uVar11 = 8;
            puVar6 = &local_68;
            BVar4 = SetFilePointerEx(*(HANDLE * )(param_1 + 0x20), local_60 + lVar8, (PLARGE_INTEGER) 0x0, 0);
            if (BVar4 == 0) {
                LAB_1401bb151:
                DVar1 = GetLastError();
                if (0 < (int) DVar1) {
                    DVar1 = DVar1 & 0xffff | 0x80070000;
                }
                if ((int) DVar1 < 0) goto LAB_1401bb176;
            } else {
                do {
                    DVar1 = 0x80000000;
                    if (uVar11 < 0x80000000) {
                        DVar1 = (DWORD) uVar11;
                    }
                    BVar4 = WriteFile(*(HANDLE * )(param_1 + 0x20), puVar6, DVar1, local_78, (LPOVERLAPPED) 0x0);
                    if (BVar4 == 0) goto LAB_1401bb151;
                    puVar6 = (ulonglong * )((longlong) puVar6 + (ulonglong) local_78[0]);
                    uVar11 = uVar11 - local_78[0];
                } while (uVar11 != 0);
            }
            FUN_1401bbab0(param_1, local_60, lVar8);
        }
        LAB_1401bb176:
        uVar11 = 8;
        puVar6 = &local_70;
        BVar4 = SetFilePointerEx(*(HANDLE * )(param_1 + 0x20), local_48, (PLARGE_INTEGER) 0x0, 0);
        if (BVar4 == 0) {
            LAB_1401bb1d1:
            DVar1 = GetLastError();
            if (0 < (int) DVar1) {
                DVar1 = DVar1 & 0xffff | 0x80070000;
            }
            if ((int) DVar1 < 0) {
                return DVar1;
            }
        } else {
            do {
                DVar1 = 0x80000000;
                if (uVar11 < 0x80000000) {
                    DVar1 = (DWORD) uVar11;
                }
                BVar4 = WriteFile(*(HANDLE * )(param_1 + 0x20), puVar6, DVar1, local_78, (LPOVERLAPPED) 0x0);
                if (BVar4 == 0) goto LAB_1401bb1d1;
                puVar6 = (ulonglong * )((longlong) puVar6 + (ulonglong) local_78[0]);
                uVar11 = uVar11 - local_78[0];
            } while (uVar11 != 0);
        }
        puVar6 = &local_70;
        BVar4 = SetFilePointerEx(*(HANDLE * )(param_1 + 0x20), local_70 + local_40, (PLARGE_INTEGER) 0x0, 0);
        if (BVar4 != 0) {
            while (true) {
                DVar1 = 0x80000000;
                if (uVar5 < 0x80000000) {
                    DVar1 = (DWORD) uVar5;
                }
                BVar4 = WriteFile(*(HANDLE * )(param_1 + 0x20), puVar6, DVar1, local_78, (LPOVERLAPPED) 0x0);
                if (BVar4 == 0) break;
                puVar6 = (ulonglong * )((longlong) puVar6 + (ulonglong) local_78[0]);
                uVar5 = uVar5 - local_78[0];
                if (uVar5 == 0) {
                    return 0;
                }
            }
        }
    } else {
        if (*(ulonglong * )(param_1 + 0x240) <= local_58 + 8 + uVar11) {
            LAB_1401bb737:
            DVar1 = FUN_1401ba9b0(param_1, &local_50, local_70);
            if ((int) DVar1 < 0) {
                return DVar1;
            }
            DVar1 = FUN_1401bc640(param_1, local_50, uVar11, local_58);
            if (-1 < (int) DVar1) {
                FUN_1401bb790(param_1, uVar11);
                *param_2 = local_50;
                return 0;
            }
            return DVar1;
        }
        lVar7 = local_58 + uVar11;
        iVar3 = FUN_1401bc1a0(param_1, lVar7 + 8, &local_68, 8);
        if (((iVar3 < 0) || (-1 < (longlong) local_68)) ||
            (((local_68 & 0xf) != 0 ||
              ((iVar3 = FUN_1401bc1a0(param_1, (lVar7 + 0x10) - local_68, &local_50, 8), iVar3 < 0 ||
                                                                                         (local_68 != local_50))))))
            goto LAB_1401bb737;
        uVar10 = local_58 + 0x10 + -local_68;
        if ((uVar10 < local_70) || (iVar3 = FUN_1401bbda0(param_1, lVar7 + 0x10, -local_68), iVar3 < 0))
            goto LAB_1401bb737;
        if (local_70 + 0x20 <= uVar10) {
            local_60 = local_70 + 0x10 + uVar11;
            lVar7 = (uVar10 - local_70) + -0x10;
            local_68 = -lVar7;
            uVar11 = 8;
            puVar6 = &local_68;
            BVar4 = SetFilePointerEx(*(HANDLE * )(param_1 + 0x20), local_60 + -8, (PLARGE_INTEGER) 0x0, 0);
            if (BVar4 == 0) {
                LAB_1401bb5a1:
                DVar1 = GetLastError();
                if (0 < (int) DVar1) {
                    DVar1 = DVar1 & 0xffff | 0x80070000;
                }
                uVar10 = local_70;
                if ((int) DVar1 < 0) goto LAB_1401bb64b;
            } else {
                do {
                    DVar1 = 0x80000000;
                    if (uVar11 < 0x80000000) {
                        DVar1 = (DWORD) uVar11;
                    }
                    BVar4 = WriteFile(*(HANDLE * )(param_1 + 0x20), puVar6, DVar1, local_78, (LPOVERLAPPED) 0x0);
                    if (BVar4 == 0) goto LAB_1401bb5a1;
                    puVar6 = (ulonglong * )((longlong) puVar6 + (ulonglong) local_78[0]);
                    uVar11 = uVar11 - local_78[0];
                } while (uVar11 != 0);
            }
            uVar11 = 8;
            puVar6 = &local_68;
            BVar4 = SetFilePointerEx(*(HANDLE * )(param_1 + 0x20), local_60 + lVar7, (PLARGE_INTEGER) 0x0, 0);
            if (BVar4 == 0) {
                LAB_1401bb620:
                DVar1 = GetLastError();
                if (0 < (int) DVar1) {
                    DVar1 = DVar1 & 0xffff | 0x80070000;
                }
                uVar10 = local_70;
                if (-1 < (int) DVar1) {
                    FUN_1401bbab0(param_1, local_60, lVar7);
                    uVar10 = local_70;
                }
            } else {
                do {
                    DVar1 = 0x80000000;
                    if (uVar11 < 0x80000000) {
                        DVar1 = (DWORD) uVar11;
                    }
                    BVar4 = WriteFile(*(HANDLE * )(param_1 + 0x20), puVar6, DVar1, local_78, (LPOVERLAPPED) 0x0);
                    if (BVar4 == 0) goto LAB_1401bb620;
                    puVar6 = (ulonglong * )((longlong) puVar6 + (ulonglong) local_78[0]);
                    uVar11 = uVar11 - local_78[0];
                } while (uVar11 != 0);
                FUN_1401bbab0(param_1, local_60, lVar7);
                uVar10 = local_70;
            }
        }
        LAB_1401bb64b:
        local_70 = uVar10;
        uVar11 = 8;
        puVar6 = &local_70;
        BVar4 = SetFilePointerEx(*(HANDLE * )(param_1 + 0x20), local_48, (PLARGE_INTEGER) 0x0, 0);
        if (BVar4 == 0) {
            LAB_1401bb6a1:
            DVar1 = GetLastError();
            if (0 < (int) DVar1) {
                DVar1 = DVar1 & 0xffff | 0x80070000;
            }
            if ((int) DVar1 < 0) {
                return DVar1;
            }
        } else {
            do {
                DVar1 = 0x80000000;
                if (uVar11 < 0x80000000) {
                    DVar1 = (DWORD) uVar11;
                }
                BVar4 = WriteFile(*(HANDLE * )(param_1 + 0x20), puVar6, DVar1, local_78, (LPOVERLAPPED) 0x0);
                if (BVar4 == 0) goto LAB_1401bb6a1;
                puVar6 = (ulonglong * )((longlong) puVar6 + (ulonglong) local_78[0]);
                uVar11 = uVar11 - local_78[0];
            } while (uVar11 != 0);
        }
        puVar6 = &local_70;
        BVar4 = SetFilePointerEx(*(HANDLE * )(param_1 + 0x20), local_70 + local_40, (PLARGE_INTEGER) 0x0, 0);
        if (BVar4 != 0) {
            while (true) {
                DVar1 = 0x80000000;
                if (uVar5 < 0x80000000) {
                    DVar1 = (DWORD) uVar5;
                }
                BVar4 = WriteFile(*(HANDLE * )(param_1 + 0x20), puVar6, DVar1, local_78, (LPOVERLAPPED) 0x0);
                if (BVar4 == 0) break;
                puVar6 = (ulonglong * )((longlong) puVar6 + (ulonglong) local_78[0]);
                uVar5 = uVar5 - local_78[0];
                if (uVar5 == 0) {
                    return 0;
                }
            }
        }
    }
    DVar1 = GetLastError();
    if (0 < (int) DVar1) {
        DVar1 = DVar1 & 0xffff | 0x80070000;
    }
    joined_r0x0001401bb468:
    if (-1 < (int) DVar1) {
        return 0;
    }
    return DVar1;
}


DWORD FUN_1401bb790(longlong param_1, ulonglong param_2) {
    DWORD DVar1;
    int iVar2;
    BOOL BVar3;
    ulonglong uVar4;
    longlong lVar5;
    ulonglong uVar6;
    longlong lVar7;
    longlong *plVar8;
    ulonglong uVar9;
    ulonglong local_58;
    uint local_50[2];
    ulonglong local_48;
    longlong local_40;

    if (param_2 == 0) {
        return 0;
    }
    if ((((param_2 & 0xf) != 0) || (param_2 < 0x240)) ||
        (*(ulonglong * )(param_1 + 0x240) <= param_2 + 0x18 &&
         param_2 + 0x18 != *(ulonglong * )(param_1 + 0x240))) {
        return 0x80070057;
    }
    uVar4 = 8;
    DVar1 = FUN_1401bc1a0(param_1, param_2 - 8, &local_58, 8);
    if (-1 < (int) DVar1) {
        if (((longlong) local_58 < 1) || ((local_58 & 0xf) != 0)) {
            return 0xa0030001;
        }
        DVar1 = FUN_1401bc1a0(param_1, param_2 + local_58, &local_48, 8);
        uVar9 = local_58;
        if (-1 < (int) DVar1) {
            if (local_58 == local_48) {
                if (((0x240 < param_2) &&
                     (iVar2 = FUN_1401bc1a0(param_1, param_2 - 0x10, &local_48, 8), -1 < iVar2)) &&
                    (((longlong) local_48 < 0 && ((local_48 & 0xf) == 0)))) {
                    lVar5 = -local_48;
                    lVar7 = param_2 + local_48;
                    iVar2 = FUN_1401bc1a0(param_1, &DAT_ffffffffffffffe8 + lVar7, &local_58, 8);
                    if (((-1 < iVar2) && (local_58 == local_48)) &&
                        (iVar2 = FUN_1401bbda0(param_1, lVar7 + -0x10, lVar5), -1 < iVar2)) {
                        param_2 = lVar7 - 0x10;
                        uVar9 = uVar9 + 0x10 + lVar5;
                    }
                }
                if (uVar9 + 8 + param_2 < *(ulonglong * )(param_1 + 0x240)) {
                    lVar5 = uVar9 + 0x10 + param_2;
                    iVar2 = FUN_1401bc1a0(param_1, lVar5 + -8, &local_58, 8);
                    if (((-1 < iVar2) && ((longlong) local_58 < 0)) && ((local_58 & 0xf) == 0)) {
                        lVar7 = -local_58;
                        iVar2 = FUN_1401bc1a0(param_1, lVar7 + lVar5, &local_48, 8);
                        if (((-1 < iVar2) && (local_58 == local_48)) &&
                            (iVar2 = FUN_1401bbda0(param_1, lVar5, lVar7), -1 < iVar2)) {
                            uVar9 = uVar9 + 0x10 + lVar7;
                        }
                    }
                }
                local_40 = -uVar9;
                uVar6 = 8;
                plVar8 = &local_40;
                BVar3 = SetFilePointerEx(*(HANDLE * )(param_1 + 0x20), param_2 - 8, (PLARGE_INTEGER) 0x0, 0);
                if (BVar3 == 0) {
                    LAB_1401bb9c3:
                    DVar1 = GetLastError();
                    if (0 < (int) DVar1) {
                        DVar1 = DVar1 & 0xffff | 0x80070000;
                    }
                    if ((int) DVar1 < 0) {
                        return DVar1;
                    }
                } else {
                    do {
                        DVar1 = 0x80000000;
                        if (uVar6 < 0x80000000) {
                            DVar1 = (DWORD) uVar6;
                        }
                        BVar3 = WriteFile(*(HANDLE * )(param_1 + 0x20), plVar8, DVar1, local_50, (LPOVERLAPPED) 0x0);
                        if (BVar3 == 0) goto LAB_1401bb9c3;
                        plVar8 = (longlong * )((longlong) plVar8 + (ulonglong) local_50[0]);
                        uVar6 = uVar6 - local_50[0];
                    } while (uVar6 != 0);
                }
                plVar8 = &local_40;
                BVar3 = SetFilePointerEx(*(HANDLE * )(param_1 + 0x20), param_2 + uVar9, (PLARGE_INTEGER) 0x0, 0);
                if (BVar3 == 0) {
                    LAB_1401bba33:
                    DVar1 = GetLastError();
                    if (0 < (int) DVar1) {
                        DVar1 = DVar1 & 0xffff | 0x80070000;
                    }
                    if ((int) DVar1 < 0) {
                        return DVar1;
                    }
                } else {
                    do {
                        DVar1 = 0x80000000;
                        if (uVar4 < 0x80000000) {
                            DVar1 = (DWORD) uVar4;
                        }
                        BVar3 = WriteFile(*(HANDLE * )(param_1 + 0x20), plVar8, DVar1, local_50, (LPOVERLAPPED) 0x0);
                        if (BVar3 == 0) goto LAB_1401bba33;
                        plVar8 = (longlong * )((longlong) plVar8 + (ulonglong) local_50[0]);
                        uVar4 = uVar4 - local_50[0];
                    } while (uVar4 != 0);
                }
                FUN_1401bbab0(param_1, param_2, uVar9);
                DVar1 = 0;
            } else {
                DVar1 = 0xa0030001;
            }
        }
    }
    return DVar1;
}


void FUN_1401bbab0(longlong param_1, LARGE_INTEGER param_2, ulonglong param_3) {
    BOOL BVar1;
    DWORD DVar2;
    ulonglong uVar3;
    undefined8 uVar4;
    byte bVar5;
    longlong *plVar6;
    undefined8 *puVar7;
    ulonglong uVar8;
    undefined auStackY184[32];
    uint local_88[2];
    undefined8 local_80;
    longlong local_78;
    undefined8 local_70;
    ulonglong local_68;
    undefined local_60[16];
    longlong local_50;
    longlong local_48;
    ulonglong local_40;

    local_40 = DAT_140c0f7b0 ^ (ulonglong) auStackY184;
    bVar5 = 0;
    uVar3 = param_3;
    if ((param_3 & 0xffffffff00000000) != 0) {
        bVar5 = 0x20;
        uVar3 = param_3 >> 0x20;
    }
    if ((uVar3 & 0xffff0000) != 0) {
        bVar5 = bVar5 + 0x10;
        uVar3 = uVar3 >> 0x10;
    }
    if ((uVar3 & 0xff00) != 0) {
        bVar5 = bVar5 + 8;
        uVar3 = uVar3 >> 8;
    }
    if ((uVar3 & 0xf0) != 0) {
        bVar5 = bVar5 + 4;
        uVar3 = uVar3 >> 4;
    }
    if ((uVar3 & 0xc) != 0) {
        bVar5 = bVar5 + 2;
        uVar3 = uVar3 >> 2;
    }
    if ((uVar3 & 2) != 0) {
        bVar5 = bVar5 + 1;
    }
    local_48 = *(longlong * )(param_1 + 0x40 + (ulonglong) bVar5 * 8);
    local_50 = 0;
    uVar3 = 0x10;
    plVar6 = &local_50;
    local_80 = param_2;
    BVar1 = SetFilePointerEx(*(HANDLE * )(param_1 + 0x20), param_2, (PLARGE_INTEGER) 0x0, 0);
    uVar8 = 8;
    if (BVar1 == 0) {
        LAB_1401bbbb5:
        DVar2 = GetLastError();
        if (0 < (int) DVar2) {
            DVar2 = DVar2 & 0xffff | 0x80070000;
        }
        if (-1 < (int) DVar2) goto LAB_1401bbbcf;
    } else {
        do {
            DVar2 = 0x80000000;
            if (uVar3 < 0x80000000) {
                DVar2 = (DWORD) uVar3;
            }
            BVar1 = WriteFile(*(HANDLE * )(param_1 + 0x20), plVar6, DVar2, local_88, (LPOVERLAPPED) 0x0);
            if (BVar1 == 0) goto LAB_1401bbbb5;
            plVar6 = (longlong * )((longlong) plVar6 + (ulonglong) local_88[0]);
            uVar3 = uVar3 - local_88[0];
        } while (uVar3 != 0);
        LAB_1401bbbcf:
        if (local_50 == 0) {
            uVar3 = (ulonglong) bVar5 * 8 + 8;
            if (uVar3 < 0x231) {
                FUN_1401ba680(param_1, uVar3, &local_80, 8);
            }
        } else {
            puVar7 = &local_80;
            BVar1 = SetFilePointerEx(*(HANDLE * )(param_1 + 0x20), local_50 + 8, (PLARGE_INTEGER) 0x0, 0);
            uVar3 = uVar8;
            if (BVar1 == 0) {
                GetLastError();
            } else {
                do {
                    DVar2 = 0x80000000;
                    if (uVar3 < 0x80000000) {
                        DVar2 = (DWORD) uVar3;
                    }
                    BVar1 = WriteFile(*(HANDLE * )(param_1 + 0x20), puVar7, DVar2, local_88, (LPOVERLAPPED) 0x0);
                    if (BVar1 == 0) {
                        GetLastError();
                        break;
                    }
                    puVar7 = (undefined8 * )((longlong) puVar7 + (ulonglong) local_88[0]);
                    uVar3 = uVar3 - local_88[0];
                } while (uVar3 != 0);
            }
        }
        if (local_48 != 0) {
            puVar7 = &local_80;
            BVar1 = SetFilePointerEx(*(HANDLE * )(param_1 + 0x20), local_48, (PLARGE_INTEGER) 0x0, 0);
            uVar3 = uVar8;
            if (BVar1 == 0) {
                LAB_1401bbcb2:
                GetLastError();
            } else {
                do {
                    DVar2 = 0x80000000;
                    if (uVar3 < 0x80000000) {
                        DVar2 = (DWORD) uVar3;
                    }
                    BVar1 = WriteFile(*(HANDLE * )(param_1 + 0x20), puVar7, DVar2, local_88, (LPOVERLAPPED) 0x0);
                    if (BVar1 == 0) goto LAB_1401bbcb2;
                    puVar7 = (undefined8 * )((longlong) puVar7 + (ulonglong) local_88[0]);
                    uVar3 = uVar3 - local_88[0];
                } while (uVar3 != 0);
            }
        }
    }
    local_70 = local_80;
    local_68 = param_3;
    uVar4 = FUN_1401ba830(param_1);
    FUN_1401bc880(uVar4, local_60, &local_70);
    local_78 = *(longlong * )(param_1 + 0x248) + 0x10 + param_3;
    if (*(longlong * )(param_1 + 0x248) != local_78) {
        plVar6 = &local_78;
        BVar1 = SetFilePointerEx(*(HANDLE * )(param_1 + 0x20), 0x210, (PLARGE_INTEGER) 0x0, 0);
        if (BVar1 == 0) {
            LAB_1401bbd55:
            DVar2 = GetLastError();
            if (0 < (int) DVar2) {
                DVar2 = DVar2 & 0xffff | 0x80070000;
            }
            if ((int) DVar2 < 0) goto LAB_1401bbd76;
        } else {
            do {
                DVar2 = 0x80000000;
                if (uVar8 < 0x80000000) {
                    DVar2 = (DWORD) uVar8;
                }
                BVar1 = WriteFile(*(HANDLE * )(param_1 + 0x20), plVar6, DVar2, local_88, (LPOVERLAPPED) 0x0);
                if (BVar1 == 0) goto LAB_1401bbd55;
                plVar6 = (longlong * )((longlong) plVar6 + (ulonglong) local_88[0]);
                uVar8 = uVar8 - local_88[0];
            } while (uVar8 != 0);
        }
        *(longlong * )(param_1 + 0x248) = local_78;
    }
    LAB_1401bbd76:
    FUN_1407db4f0(local_40 ^ (ulonglong) auStackY184);
    return;
}


int FUN_1401bbda0(undefined8 param_1, ulonglong param_2, ulonglong param_3) {
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    int iVar4;
    bool bVar5;
    longlong local_res10;

    lVar3 = FUN_1401ba830();
    lVar3 = *(longlong * )(lVar3 + 8);
    local_res10 = lVar3;
    lVar1 = *(longlong * )(lVar3 + 8);
    while (lVar1 != 0) {
        bVar5 = *(ulonglong * )(lVar1 + 0x28) < param_3;
        if (*(ulonglong * )(lVar1 + 0x28) == param_3) {
            bVar5 = *(ulonglong * )(lVar1 + 0x20) < param_2;
        }
        if (bVar5) {
            lVar1 = *(longlong * )(lVar1 + 0x18);
        } else {
            local_res10 = lVar1;
            lVar1 = *(longlong * )(lVar1 + 0x10);
        }
    }
    if (local_res10 != lVar3) {
        bVar5 = param_3 < *(ulonglong * )(local_res10 + 0x28);
        if (param_3 == *(ulonglong * )(local_res10 + 0x28)) {
            bVar5 = param_2 < *(ulonglong * )(local_res10 + 0x20);
        }
        if (!bVar5) goto LAB_1401bbe19;
    }
    local_res10 = lVar3;
    LAB_1401bbe19:
    iVar2 = FUN_1401bbe50(param_1, local_res10);
    iVar4 = 0;
    if (iVar2 < 0) {
        iVar4 = iVar2;
    }
    return iVar4;
}


void FUN_1401bbe50(longlong param_1, longlong param_2) {
    ulonglong uVar1;
    longlong lVar2;
    int iVar3;
    BOOL BVar4;
    DWORD DVar5;
    byte bVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    longlong *plVar9;
    undefined auStackY152[32];
    uint local_68[2];
    longlong local_60;
    longlong local_58;
    longlong local_50;
    longlong local_48;
    ulonglong local_40;

    local_40 = DAT_140c0f7b0 ^ (ulonglong) auStackY152;
    if (param_2 == *(longlong * )(param_1 + 0x280)) goto LAB_1401bc187;
    uVar1 = *(ulonglong * )(param_2 + 0x28);
    lVar2 = *(longlong * )(param_2 + 0x20);
    iVar3 = FUN_1401bc1a0(param_1, lVar2, &local_50, 0x10);
    if (iVar3 < 0) goto LAB_1401bc187;
    uVar8 = 8;
    if (((local_48 != 0) && (iVar3 = FUN_1401bc1a0(param_1, local_48, &local_60, 8), -1 < iVar3)) &&
        (local_60 == lVar2)) {
        uVar7 = 8;
        plVar9 = &local_50;
        BVar4 = SetFilePointerEx(*(HANDLE * )(param_1 + 0x20), local_48, (PLARGE_INTEGER) 0x0, 0);
        if (BVar4 == 0) {
            LAB_1401bbf55:
            DVar5 = GetLastError();
            if (0 < (int) DVar5) {
                DVar5 = DVar5 & 0xffff | 0x80070000;
            }
            if ((int) DVar5 < 0) goto LAB_1401bc187;
        } else {
            do {
                DVar5 = 0x80000000;
                if (uVar7 < 0x80000000) {
                    DVar5 = (DWORD) uVar7;
                }
                BVar4 = WriteFile(*(HANDLE * )(param_1 + 0x20), plVar9, DVar5, local_68, (LPOVERLAPPED) 0x0);
                if (BVar4 == 0) goto LAB_1401bbf55;
                plVar9 = (longlong * )((longlong) plVar9 + (ulonglong) local_68[0]);
                uVar7 = uVar7 - local_68[0];
            } while (uVar7 != 0);
        }
    }
    if (local_50 == 0) {
        bVar6 = 0;
        uVar7 = uVar1;
        if ((uVar1 & 0xffffffff00000000) != 0) {
            bVar6 = 0x20;
            uVar7 = uVar1 >> 0x20;
        }
        if ((uVar7 & 0xffff0000) != 0) {
            bVar6 = bVar6 + 0x10;
            uVar7 = uVar7 >> 0x10;
        }
        if ((uVar7 & 0xff00) != 0) {
            bVar6 = bVar6 + 8;
            uVar7 = uVar7 >> 8;
        }
        if ((uVar7 & 0xf0) != 0) {
            bVar6 = bVar6 + 4;
            uVar7 = uVar7 >> 4;
        }
        if ((uVar7 & 0xc) != 0) {
            bVar6 = bVar6 + 2;
            uVar7 = uVar7 >> 2;
        }
        if ((uVar7 & 2) != 0) {
            bVar6 = bVar6 + 1;
        }
        if (*(longlong * )(param_1 + 0x40 + (ulonglong) bVar6 * 8) == lVar2) {
            uVar7 = (ulonglong) bVar6 * 8 + 8;
            if (0x230 < uVar7) goto LAB_1401bc187;
            DVar5 = FUN_1401ba680(param_1, uVar7, &local_48, 8);
            joined_r0x0001401bc131:
            if ((int) DVar5 < 0) goto LAB_1401bc187;
        }
    } else {
        iVar3 = FUN_1401bc1a0(param_1, local_50 + 8, &local_60, 8);
        if ((-1 < iVar3) && (local_60 == lVar2)) {
            uVar7 = 8;
            plVar9 = &local_48;
            BVar4 = SetFilePointerEx(*(HANDLE * )(param_1 + 0x20), local_50 + 8, (PLARGE_INTEGER) 0x0, 0);
            if (BVar4 == 0) {
                LAB_1401bc08c:
                DVar5 = GetLastError();
                if (0 < (int) DVar5) {
                    DVar5 = DVar5 & 0xffff | 0x80070000;
                }
                goto joined_r0x0001401bc131;
            }
            do {
                DVar5 = 0x80000000;
                if (uVar7 < 0x80000000) {
                    DVar5 = (DWORD) uVar7;
                }
                BVar4 = WriteFile(*(HANDLE * )(param_1 + 0x20), plVar9, DVar5, local_68, (LPOVERLAPPED) 0x0);
                if (BVar4 == 0) goto LAB_1401bc08c;
                plVar9 = (longlong * )((longlong) plVar9 + (ulonglong) local_68[0]);
                uVar7 = uVar7 - local_68[0];
            } while (uVar7 != 0);
        }
    }
    local_60 = param_2;
    FUN_1401bc9a0(param_1 + 0x278, &local_60);
    local_58 = (*(longlong * )(param_1 + 0x248) - uVar1) + -0x10;
    if (*(longlong * )(param_1 + 0x248) != local_58) {
        plVar9 = &local_58;
        BVar4 = SetFilePointerEx(*(HANDLE * )(param_1 + 0x20), 0x210, (PLARGE_INTEGER) 0x0, 0);
        if (BVar4 == 0) {
            LAB_1401bc140:
            DVar5 = GetLastError();
            if (0 < (int) DVar5) {
                DVar5 = DVar5 & 0xffff | 0x80070000;
            }
            if ((int) DVar5 < 0) goto LAB_1401bc187;
        } else {
            do {
                DVar5 = 0x80000000;
                if (uVar8 < 0x80000000) {
                    DVar5 = (DWORD) uVar8;
                }
                BVar4 = WriteFile(*(HANDLE * )(param_1 + 0x20), plVar9, DVar5, local_68, (LPOVERLAPPED) 0x0);
                if (BVar4 == 0) goto LAB_1401bc140;
                plVar9 = (longlong * )((longlong) plVar9 + (ulonglong) local_68[0]);
                uVar8 = uVar8 - local_68[0];
            } while (uVar8 != 0);
        }
        *(longlong * )(param_1 + 0x248) = local_58;
    }
    LAB_1401bc187:
    FUN_1407db4f0(local_40 ^ (ulonglong) auStackY152);
    return;
}


void FUN_1401bc1a0(longlong param_1, longlong param_2, LPVOID param_3, ulonglong param_4) {
    BOOL BVar1;
    DWORD DVar2;
    ulonglong uVar3;
    longlong lVar4;
    undefined auStackY200[32];
    uint local_98[4];
    _OVERLAPPED local_88;
    undefined8 local_68;
    undefined8 local_60;
    undefined8 local_58;
    undefined8 local_50;
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong) auStackY200;
    if (param_3 == (LPVOID) 0x0) goto LAB_1401bc3d4;
    if (*(longlong * )(param_1 + 0x28) == -1) {
        if (*(HANDLE * )(param_1 + 0x20) == (HANDLE) 0xffffffffffffffff) {
            if (*(longlong * *)(param_1 + 0x30) != (longlong *) 0x0) {
                lVar4 = (**(code * *)(**(longlong * *)(param_1 + 0x30) + 0x18))();
                FUN_1407db590(param_3, lVar4 + param_2, param_4);
            }
            goto LAB_1401bc3d4;
        }
        BVar1 = SetFilePointerEx(*(HANDLE * )(param_1 + 0x20), param_2, (PLARGE_INTEGER) 0x0, 0);
        if (BVar1 != 0) {
            do {
                DVar2 = 0x80000000;
                if (param_4 < 0x80000000) {
                    DVar2 = (DWORD) param_4;
                }
                BVar1 = ReadFile(*(HANDLE * )(param_1 + 0x20), param_3, DVar2, local_98, (LPOVERLAPPED) 0x0);
                if (BVar1 == 0) goto LAB_1401bc389;
                if (local_98[0] == 0) break;
                param_3 = (LPVOID)((longlong) param_3 + (ulonglong) local_98[0]);
                param_4 = param_4 - local_98[0];
            } while (param_4 != 0);
            goto LAB_1401bc3d4;
        }
    } else {
        local_88.Internal = 0;
        local_88.InternalHigh = 0;
        local_88.u = 0;
        local_88.hEvent = (HANDLE) 0x0;
        local_68 = 0;
        local_60 = 0;
        local_58 = 0;
        local_50 = 0;
        local_88.hEvent = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 1, 0, (LPCWSTR) 0x0);
        if (local_88.hEvent != (HANDLE) 0x0) {
            do {
                DVar2 = 0x80000000;
                if (param_4 < 0x80000000) {
                    DVar2 = (DWORD) param_4;
                }
                local_88.u = param_2;
                BVar1 = ReadFile(*(HANDLE * )(param_1 + 0x20), param_3, DVar2, local_98, &local_88);
                if (BVar1 == 0) {
                    DVar2 = GetLastError();
                    if (DVar2 != 0x3e5) {
                        CloseHandle(local_88.hEvent);
                        goto LAB_1401bc3d4;
                    }
                    BVar1 = GetOverlappedResult(*(HANDLE * )(param_1 + 0x20), &local_88, local_98, 1);
                    if (BVar1 == 0) {
                        GetLastError();
                        CloseHandle(local_88.hEvent);
                        goto LAB_1401bc3d4;
                    }
                }
                uVar3 = (ulonglong) local_98[0];
                if (local_98[0] == 0) {
                    CloseHandle(local_88.hEvent);
                    goto LAB_1401bc3d4;
                }
                param_2 = param_2 + uVar3;
                param_3 = (LPVOID)((longlong) param_3 + uVar3);
                param_4 = param_4 - uVar3;
            } while (param_4 != 0);
            CloseHandle(local_88.hEvent);
            goto LAB_1401bc3d4;
        }
    }
    LAB_1401bc389:
    GetLastError();
    LAB_1401bc3d4:
    FUN_1407db4f0(local_48 ^ (ulonglong) auStackY200);
    return;
}


uint FUN_1401bc400(longlong param_1, LPVOID param_2, DWORD param_3, LPOVERLAPPED param_4) {
    BOOL BVar1;
    uint uVar2;

    if ((param_2 == (LPVOID) 0x0) || (param_4 == (LPOVERLAPPED) 0x0)) {
        uVar2 = 0x80070057;
    } else {
        if (*(HANDLE * )(param_1 + 0x28) == (HANDLE) 0xffffffffffffffff) {
            if ((param_3 != 0) &&
                (uVar2 = FUN_1401bc1a0(param_1, param_4->u, param_2, param_3), (int) uVar2 < 0)) {
                return uVar2;
            }
            if (*(HANDLE * )(param_1 + 0x18) == (HANDLE) 0x0) {
                return 0;
            }
            BVar1 = PostQueuedCompletionStatus(*(HANDLE * )(param_1 + 0x18), param_3, 1, param_4);
            if (BVar1 != 0) {
                return 0;
            }
            uVar2 = GetLastError();
        } else {
            BVar1 = ReadFile(*(HANDLE * )(param_1 + 0x28), param_2, param_3, (LPDWORD) 0x0, param_4);
            if (BVar1 != 0) {
                return 0;
            }
            uVar2 = GetLastError();
            if (uVar2 == 0x3e5) {
                return 0;
            }
        }
        if (0 < (int) uVar2) {
            return uVar2 & 0xffff | 0x80070000;
        }
    }
    return uVar2;
}


uint FUN_1401bc4c0(longlong param_1, LARGE_INTEGER param_2, LPCVOID param_3, ulonglong param_4) {
    BOOL BVar1;
    uint uVar2;
    DWORD DVar3;
    uint local_res18[4];

    if (param_3 == (LPCVOID) 0x0) {
        return 0x80070057;
    }
    BVar1 = SetFilePointerEx(*(HANDLE * )(param_1 + 0x20), param_2, (PLARGE_INTEGER) 0x0, 0);
    if (BVar1 == 0) {
        uVar2 = GetLastError();
        if (0 < (int) uVar2) {
            return uVar2 & 0xffff | 0x80070000;
        }
    } else {
        do {
            DVar3 = 0x80000000;
            if (param_4 < 0x80000000) {
                DVar3 = (DWORD) param_4;
            }
            BVar1 = WriteFile(*(HANDLE * )(param_1 + 0x20), param_3, DVar3, local_res18, (LPOVERLAPPED) 0x0);
            if (BVar1 == 0) {
                DVar3 = GetLastError();
                if ((int) DVar3 < 1) {
                    return DVar3;
                }
                return DVar3 & 0xffff | 0x80070000;
            }
            param_3 = (LPCVOID)((longlong) param_3 + (ulonglong) local_res18[0]);
            param_4 = param_4 - local_res18[0];
        } while (param_4 != 0);
        uVar2 = 0;
    }
    return uVar2;
}


uint FUN_1401bc590(longlong param_1, longlong param_2, DWORD param_3, LPOVERLAPPED param_4) {
    uint uVar1;
    BOOL BVar2;
    DWORD DVar3;

    if ((param_2 == 0) || (param_4 == (LPOVERLAPPED) 0x0)) {
        return 0x80070057;
    }
    if ((param_3 != 0) && (uVar1 = FUN_1401bc4c0(param_1, param_4->u, param_2, param_3), (int) uVar1 < 0)) {
        return uVar1;
    }
    if ((*(HANDLE * )(param_1 + 0x18) != (HANDLE) 0x0) &&
        (BVar2 = PostQueuedCompletionStatus(*(HANDLE * )(param_1 + 0x18), param_3, 1, param_4), BVar2 == 0)
            ) {
        DVar3 = GetLastError();
        if ((int) DVar3 < 1) {
            return DVar3;
        }
        return DVar3 & 0xffff | 0x80070000;
    }
    return 0;
}


DWORD FUN_1401bc640(longlong param_1, longlong param_2, longlong param_3, ulonglong param_4) {
    DWORD nNumberOfBytesToWrite;
    BOOL BVar1;
    DWORD DVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    undefined8 *lpBuffer;
    ulonglong uVar5;
    DWORD local_res20[2];
    uint local_38[4];

    if (param_4 == 0) {
        return 0;
    }
    uVar5 = 0x100000;
    if (param_4 < 0x100000) {
        uVar5 = param_4;
    }
    if (uVar5 == 0) {
        lpBuffer = (undefined8 *) 0x0;
    } else {
        puVar3 = (undefined8 *) FUN_14018b280(uVar5 + 0x10, 0);
        if (puVar3 == (undefined8 *) 0x0) {
            lpBuffer = (undefined8 * ) & DAT_00000010;
        } else {
            puVar3[1] = uVar5;
            lpBuffer = puVar3 + 2;
            *puVar3 = &PTR_LAB_140b55060;
        }
    }
    DVar2 = 0;
    do {
        BVar1 = SetFilePointerEx(*(HANDLE * )(param_1 + 0x20), param_3, (PLARGE_INTEGER) 0x0, 0);
        if (BVar1 == 0) {
            LAB_1401bc761:
            DVar2 = GetLastError();
            if (0 < (int) DVar2) {
                DVar2 = DVar2 & 0xffff | 0x80070000;
            }
            break;
        }
        uVar4 = uVar5;
        if (param_4 < uVar5) {
            uVar4 = param_4;
        }
        BVar1 = ReadFile(*(HANDLE * )(param_1 + 0x20), lpBuffer, (DWORD) uVar4, local_res20, (LPOVERLAPPED) 0x0
        );
        nNumberOfBytesToWrite = local_res20[0];
        if (((BVar1 == 0) ||
             (BVar1 = SetFilePointerEx(*(HANDLE * )(param_1 + 0x20), param_2, (PLARGE_INTEGER) 0x0, 0),
                     BVar1 == 0)) ||
            (BVar1 = WriteFile(*(HANDLE * )(param_1 + 0x20), lpBuffer, nNumberOfBytesToWrite, local_38,
                               (LPOVERLAPPED) 0x0), BVar1 == 0))
            goto LAB_1401bc761;
        uVar4 = (ulonglong) local_38[0];
        param_3 = param_3 + uVar4;
        param_2 = param_2 + uVar4;
        param_4 = param_4 - uVar4;
    } while (param_4 != 0);
    if (lpBuffer != (undefined8 *) 0x0) {
        (**(code * *)(lpBuffer[-2] + 8))(lpBuffer + -2);
    }
    return DVar2;
}


void FUN_1401bc800(longlong *param_1, ulonglong param_2) {
    longlong lVar1;
    longlong lVar2;

    if ((ulonglong) param_1[1] < param_2 || param_1[1] == param_2) {
        lVar2 = FUN_14018db00(*param_1, param_2, 0x10);
        if (*param_1 != lVar2) {
            FUN_1407db590(lVar2, *param_1, param_1[1] << 4);
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


char **FUN_1401bc880(longlong param_1, char **param_2, ulonglong *param_3) {
    char **ppcVar1;
    char *pcVar2;
    char *pcVar3;
    char *pcVar4;
    char *pcVar5;
    bool bVar6;
    undefined local_res8[8];

    pcVar2 = *(char **) (param_1 + 8);
    pcVar4 = *(char **) (pcVar2 + 8);
    bVar6 = true;
    pcVar5 = pcVar2;
    if (pcVar4 != (char *) 0x0) {
        do {
            pcVar5 = pcVar4;
            bVar6 = param_3[1] < *(ulonglong * )(pcVar5 + 0x28);
            if (param_3[1] == *(ulonglong * )(pcVar5 + 0x28)) {
                bVar6 = *param_3 < *(ulonglong * )(pcVar5 + 0x20);
            }
            if (bVar6) {
                pcVar4 = *(char **) (pcVar5 + 0x10);
            } else {
                pcVar4 = *(char **) (pcVar5 + 0x18);
            }
        } while (pcVar4 != (char *) 0x0);
    }
    pcVar3 = pcVar5;
    if (bVar6) {
        if (pcVar5 == *(char **) (pcVar2 + 0x10)) goto LAB_1401bc8ea;
        if ((*pcVar5 == '\0') && (*(char **) (*(longlong * )(pcVar5 + 8) + 8) == pcVar5)) {
            pcVar3 = *(char **) (pcVar5 + 0x18);
        } else {
            pcVar3 = *(char **) (pcVar5 + 0x10);
            if (pcVar3 == (char *) 0x0) {
                pcVar3 = *(char **) (pcVar5 + 8);
                pcVar2 = pcVar3;
                if (pcVar5 == *(char **) (pcVar3 + 0x10)) {
                    do {
                        pcVar3 = *(char **) (pcVar2 + 8);
                        bVar6 = pcVar2 == *(char **) (pcVar3 + 0x10);
                        pcVar2 = pcVar3;
                    } while (bVar6);
                }
            } else {
                for (pcVar2 = *(char **) (pcVar3 + 0x18); pcVar2 != (char *) 0x0;
                     pcVar2 = *(char **) (pcVar2 + 0x18)) {
                    pcVar3 = pcVar2;
                }
            }
        }
    }
    bVar6 = *(ulonglong * )(pcVar3 + 0x28) < param_3[1];
    if (*(ulonglong * )(pcVar3 + 0x28) == param_3[1]) {
        bVar6 = *(ulonglong * )(pcVar3 + 0x20) < *param_3;
    }
    if (!bVar6) {
        *param_2 = pcVar3;
        *(undefined * )(param_2 + 1) = 0;
        return param_2;
    }
    LAB_1401bc8ea:
    ppcVar1 = (char **) FUN_1401bcaa0(param_1, local_res8, pcVar4, pcVar5, param_3);
    *param_2 = *ppcVar1;
    *(undefined * )(param_2 + 1) = 1;
    return param_2;
}


void FUN_1401bc9a0(longlong param_1, longlong *param_2) {
    longlong lVar1;
    int iVar2;
    undefined8 uVar3;
    undefined8 local_res8;
    undefined * *local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined * *local_28;
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
        iVar2 = FUN_1401971e0(&DAT_140c8a22c, 1, &local_res8, &local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001401bca66. Too many branches
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


longlong *
FUN_1401bcaa0(longlong param_1, longlong *param_2, longlong param_3, longlong param_4,
              ulonglong *param_5) {
    longlong lVar1;
    longlong lVar2;
    bool bVar3;

    if ((param_4 != *(longlong * )(param_1 + 8)) && (param_3 == 0)) {
        bVar3 = param_5[1] < *(ulonglong * )(param_4 + 0x28);
        if (param_5[1] == *(ulonglong * )(param_4 + 0x28)) {
            bVar3 = *param_5 < *(ulonglong * )(param_4 + 0x20);
        }
        if (!bVar3) {
            lVar2 = FUN_14018b280(0x30);
            if ((ulonglong * )(lVar2 + 0x20) != (ulonglong *) 0x0) {
                *(ulonglong * )(lVar2 + 0x20) = *param_5;
                *(ulonglong * )(lVar2 + 0x28) = param_5[1];
            }
            *(longlong * )(param_4 + 0x18) = lVar2;
            if (param_4 == *(longlong * )(*(longlong * )(param_1 + 8) + 0x18)) {
                *(longlong * )(*(longlong * )(param_1 + 8) + 0x18) = lVar2;
            }
            goto LAB_1401bcb6c;
        }
    }
    lVar2 = FUN_14018b280(0x30);
    if ((ulonglong * )(lVar2 + 0x20) != (ulonglong *) 0x0) {
        *(ulonglong * )(lVar2 + 0x20) = *param_5;
        *(ulonglong * )(lVar2 + 0x28) = param_5[1];
    }
    *(longlong * )(param_4 + 0x10) = lVar2;
    lVar1 = *(longlong * )(param_1 + 8);
    if (param_4 == lVar1) {
        *(longlong * )(lVar1 + 8) = lVar2;
        *(longlong * )(*(longlong * )(param_1 + 8) + 0x18) = lVar2;
    } else if (param_4 == *(longlong * )(lVar1 + 0x10)) {
        *(longlong * )(lVar1 + 0x10) = lVar2;
    }
    LAB_1401bcb6c:
    *(longlong * )(lVar2 + 8) = param_4;
    *(undefined8 * )(lVar2 + 0x10) = 0;
    *(undefined8 * )(lVar2 + 0x18) = 0;
    FUN_1400081c0(lVar2, *(longlong * )(param_1 + 8) + 8);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 1;
    *param_2 = lVar2;
    return param_2;
}


undefined8 FUN_1401bcbf0(longlong param_1, longlong param_2, undefined8 param_3, short *param_4) {
    short *psVar1;
    short sVar2;
    short *psVar3;
    longlong lVar4;
    longlong lVar5;
    int iVar6;

    psVar1 = (short *) (param_1 + 8);
    lVar4 = 0x104;
    iVar6 = 0;
    lVar5 = 0;
    psVar3 = psVar1;
    while ((lVar4 != -0x7ffffefa &&
            (sVar2 = *(short *) ((param_2 - (longlong) psVar1) + (longlong) psVar3), sVar2 != 0))) {
        *psVar3 = sVar2;
        psVar3 = psVar3 + 1;
        lVar5 = lVar5 + 1;
        lVar4 = lVar4 + -1;
        if (lVar4 == 0) {
            LAB_1401bcc3d:
            psVar3 = psVar3 + -1;
            iVar6 = -0x7ff8ff86;
            lVar5 = lVar5 + -1;
            LAB_1401bcc4a:
            *psVar3 = 0;
            psVar3 = psVar1 + lVar5;
            if (((iVar6 + 0x80000000U & 0x80000000) == 0) && (iVar6 != -0x7ff8ff86)) {
                psVar3 = param_4;
            }
            if ((psVar1 < psVar3) && (psVar3[-1] == 0x5c)) {
                psVar3[-1] = 0;
            }
            return 0;
        }
    }
    if (lVar4 != 0) goto LAB_1401bcc4a;
    goto LAB_1401bcc3d;
}


int FUN_1401bcdd0(longlong param_1) {
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *) (param_1 + 0x68);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_1401bf570();
            FUN_14018b900(param_1, 0);
        }
        iVar2 = 0;
    }
    return iVar2;
}


void FUN_1401bce10(longlong param_1) {
    longlong lVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    uVar2 = 0;
    uVar3 = uVar2;
    if (*(longlong * )(param_1 + 0x10) != 0) {
        do {
            lVar1 = *(longlong * )(*(longlong * )(param_1 + 8) + 8 + uVar3);
            if (lVar1 != 0) {
                FUN_1401bce10(lVar1);
                FUN_14018b900(lVar1, 0);
            }
            uVar2 = uVar2 + 1;
            uVar3 = uVar3 + 0x10;
        } while (uVar2 < *(ulonglong * )(param_1 + 0x10));
    }
    FUN_14018b900(*(undefined8 * )(param_1 + 8), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x18), 0);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x28), 0);
    return;
}


ulonglong FUN_1401bcea0(int *param_1, longlong param_2) {
    uint *puVar1;
    ulonglong uVar2;
    longlong lVar3;
    undefined auVar4[16];
    uint uVar5;
    ulonglong uVar6;
    uint *puVar7;
    undefined8 uVar8;
    ulonglong uVar9;
    uint *puVar10;
    uint *puVar11;
    uint *puVar12;
    uint *puVar13;
    ulonglong uVar14;
    uint *puVar15;
    ulonglong local_res18;

    if (*param_1 == 0) {
        return 0;
    }
    uVar6 = (**(code * *)(**(longlong * *)(param_2 + 0x28) + 0x40))();
    if (-1 < (int) uVar6) {
        if (local_res18 < 8) {
            return 0xa0030001;
        }
        puVar7 = (uint *) FUN_14018b280(local_res18);
        if (puVar7 == (uint *) 0x0) {
            return 0x8007000e;
        }
        uVar6 = local_res18;
        uVar5 = (**(code * *)(**(longlong * *)(param_2 + 0x28) + 0x58))();
        if ((int) uVar5 < 0) {
            FUN_14018b900(puVar7, 0);
            return (ulonglong) uVar5;
        }
        puVar15 = (uint * )(ulonglong)
        puVar7[1];
        puVar13 = (uint * )(ulonglong) * puVar7;
        uVar2 = (longlong) puVar13 * 8 + 8;
        uVar9 = (longlong) puVar15 * 0x38 + uVar2;
        uVar14 = local_res18 - uVar9;
        if ((uVar2 <= local_res18) && (uVar9 <= local_res18)) {
            puVar12 = (uint *) 0x0;
            puVar1 = puVar7 + (longlong) puVar13 * 2 + 2;
            puVar10 = puVar12;
            if (puVar13 != (uint *) 0x0) {
                do {
                    if (uVar14 <= puVar7[(longlong) puVar10 * 2 + 2]) goto LAB_1401bd1c3;
                    puVar10 = (uint * )((longlong) puVar10 + 1);
                } while (puVar10 < puVar13);
            }
            puVar10 = puVar1;
            puVar11 = puVar12;
            if (puVar15 != (uint *) 0x0) {
                do {
                    if (uVar14 <= *puVar10) goto LAB_1401bd1c3;
                    puVar11 = (uint * )((longlong) puVar11 + 1);
                    puVar10 = puVar10 + 0xe;
                } while (puVar11 < puVar15);
            }
            *(ulonglong * )(param_1 + 0xc) = uVar14;
            uVar8 = FUN_14018b280(uVar14, 0);
            *(undefined8 * )(param_1 + 10) = uVar8;
            FUN_1407db590(uVar8, puVar7 + (longlong) puVar13 * 2 + (longlong) puVar15 * 0xe + 2, uVar14);
            *(ulonglong * )(param_1 + 4) = (ulonglong) * puVar7;
            uVar8 = FUN_14018b280();
            *(undefined8 * )(param_1 + 2) = uVar8;
            puVar13 = puVar12;
            puVar15 = puVar12;
            if (*(longlong * )(param_1 + 4) != 0) {
                do {
                    *(ulonglong * )((longlong) puVar15 + *(longlong * )(param_1 + 2)) =
                            (ulonglong) puVar7[(longlong) puVar13 * 2 + 2] + *(longlong * )(param_1 + 10);
                    puVar11 = (uint *) FUN_14018b280();
                    puVar10 = puVar12;
                    if (puVar11 != (uint *) 0x0) {
                        uVar5 = puVar7[(longlong) puVar13 * 2 + 3];
                        *(undefined8 * )(puVar11 + 2) = 0;
                        *(undefined8 * )(puVar11 + 4) = 0;
                        *(undefined8 * )(puVar11 + 6) = 0;
                        *(undefined8 * )(puVar11 + 8) = 0;
                        *(undefined8 * )(puVar11 + 10) = 0;
                        *puVar11 = uVar5;
                        *(undefined8 * )(puVar11 + 0xc) = 0;
                        puVar10 = puVar11;
                    }
                    *(uint * *)((longlong) puVar15 + *(longlong * )(param_1 + 2) + 8) = puVar10;
                    FUN_1401bcea0();
                    puVar13 = (uint * )((longlong) puVar13 + 1);
                    puVar15 = puVar15 + 4;
                } while (puVar13 < *(uint * *)(param_1 + 4));
            }
            uVar5 = puVar7[1];
            *(ulonglong * )(param_1 + 8) = (ulonglong) uVar5;
            auVar4 = ZEXT816(0x38) * ZEXT816((ulonglong) uVar5);
            uVar8 = SUB168(auVar4, 0);
            if (SUB168(auVar4 >> 0x40, 0) != 0) {
                uVar8 = 0xffffffffffffffff;
            }
            uVar8 = FUN_14018b280(uVar8, 0);
            *(undefined8 * )(param_1 + 6) = uVar8;
            puVar13 = puVar12;
            if (*(longlong * )(param_1 + 8) != 0) {
                do {
                    puVar13 = (uint * )((longlong) puVar13 + 1);
                    puVar15 = puVar12 + 0xe;
                    *(ulonglong * )((longlong) puVar12 + *(longlong * )(param_1 + 6)) =
                            (ulonglong) * (uint * )((longlong) puVar12 + (longlong) puVar1) +
                            *(longlong * )(param_1 + 10);
                    *(undefined8 * )((longlong) puVar12 + *(longlong * )(param_1 + 6) + 8) =
                            *(undefined8 * )((longlong)(puVar12 + 2) + (longlong) puVar1);
                    *(undefined8 * )((longlong) puVar12 + *(longlong * )(param_1 + 6) + 0x10) =
                            *(undefined8 * )((longlong)(puVar12 + 4) + (longlong) puVar1);
                    *(undefined8 * )((longlong) puVar12 + *(longlong * )(param_1 + 6) + 0x18) =
                            *(undefined8 * )((longlong)(puVar12 + 6) + (longlong) puVar1);
                    lVar3 = *(longlong * )(param_1 + 6);
                    *(undefined8 * )(&DAT_ffffffffffffffe8 + lVar3 + (longlong) puVar15) =
                            *(undefined8 * )((longlong)(puVar12 + 8) + (longlong) puVar1);
                    *(undefined8 * )(lVar3 + -0x10 + (longlong) puVar15) =
                            *(undefined8 * )((longlong)(puVar12 + 10) + (longlong) puVar1);
                    *(undefined4 * )(lVar3 + -8 + (longlong) puVar15) =
                            *(undefined4 * )((longlong)(puVar12 + 0xc) + (longlong) puVar1);
                    *(undefined4 * )((longlong) puVar12 + *(longlong * )(param_1 + 6) + 0x34) =
                            *(undefined4 * )((longlong)(puVar12 + 1) + (longlong) puVar1);
                    puVar12 = puVar15;
                } while (puVar13 < *(uint * *)(param_1 + 8));
            }
            FUN_14018b900(puVar7, 0);
            return 0;
        }
        LAB_1401bd1c3:
        FUN_14018b900(puVar7, 0, puVar15, uVar2, uVar6);
        uVar6 = 0xa0030001;
    }
    return uVar6;
}


int FUN_1401bd1f0(undefined4 *param_1, longlong param_2) {
    longlong lVar1;
    undefined4 *puVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    int iVar7;
    undefined4 *puVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    ulonglong uVar11;

    lVar3 = *(longlong * )(param_1 + 8);
    lVar4 = *(longlong * )(param_1 + 4);
    lVar5 = *(longlong * )(param_1 + 0xc);
    lVar1 = lVar5 + lVar3 * 0x38 + lVar4 * 8 + 8;
    puVar8 = (undefined4 *) FUN_14018b280();
    if (puVar8 == (undefined4 *) 0x0) {
        iVar7 = -0x7ff8fff2;
    } else {
        puVar2 = puVar8 + lVar4 * 2 + 2;
        *puVar8 = param_1[4];
        uVar10 = 0;
        puVar8[1] = param_1[8];
        uVar11 = uVar10;
        uVar9 = uVar10;
        if (*(longlong * )(param_1 + 4) != 0) {
            do {
                uVar9 = uVar9 + 1;
                uVar11 = uVar11 + 0x10;
                puVar8[uVar9 * 2] = *(int *) (*(longlong * )(param_1 + 2) + -0x10 + uVar11) - param_1[10];
                puVar8[uVar9 * 2 + 1] = **(undefined4 * *)(*(longlong * )(param_1 + 2) + -8 + uVar11);
            } while (uVar9 < *(ulonglong * )(param_1 + 4));
        }
        uVar11 = uVar10;
        if (*(longlong * )(param_1 + 8) != 0) {
            do {
                uVar11 = uVar11 + 1;
                uVar9 = uVar10 + 0x38;
                *(int *) ((longlong) puVar2 + uVar10) =
                        *(int *) (*(longlong * )(param_1 + 6) + -0x38 + uVar9) - param_1[10];
                *(undefined4 * )((longlong) puVar2 + uVar10 + 4) =
                        *(undefined4 * )(*(longlong * )(param_1 + 6) + -4 + uVar9);
                *(undefined8 * )(&DAT_ffffffffffffffd0 + uVar9 + (longlong) puVar2) =
                        *(undefined8 * )(&DAT_ffffffffffffffd0 + uVar9 + *(longlong * )(param_1 + 6));
                *(undefined8 * )((longlong) puVar2 + uVar10 + 0x10) =
                        *(undefined8 * )(*(longlong * )(param_1 + 6) + -0x28 + uVar9);
                *(undefined8 * )((longlong) puVar2 + uVar10 + 0x18) =
                        *(undefined8 * )(*(longlong * )(param_1 + 6) + -0x20 + uVar9);
                lVar6 = *(longlong * )(param_1 + 6);
                *(undefined8 * )(&DAT_ffffffffffffffe8 + uVar9 + (longlong) puVar2) =
                        *(undefined8 * )(&DAT_ffffffffffffffe8 + uVar9 + lVar6);
                *(undefined8 * )((longlong) puVar2 + uVar10 + 0x28) = *(undefined8 * )(lVar6 + -0x10 + uVar9);
                *(undefined4 * )((longlong) puVar2 + uVar10 + 0x30) = *(undefined4 * )(lVar6 + -8 + uVar9);
                uVar10 = uVar9;
            } while (uVar11 < *(ulonglong * )(param_1 + 8));
        }
        FUN_1407db590(puVar8 + lVar4 * 2 + lVar3 * 0xe + 2, *(undefined8 * )(param_1 + 10), lVar5);
        iVar7 = (**(code * *)(**(longlong * *)(param_2 + 0x28) + 0x30))
                (*(longlong * *)(param_2 + 0x28), param_1, lVar1);
        if ((iVar7 < 0) ||
            (iVar7 = (**(code * *)(**(longlong * *)(param_2 + 0x28) + 0x68))
                    (*(longlong * *)(param_2 + 0x28), *param_1, 0, puVar8, lVar1), iVar7 < 0)) {
            FUN_14018b900(puVar8, 0);
        } else {
            FUN_14018b900(puVar8, 0);
            iVar7 = 0;
        }
    }
    return iVar7;
}


int FUN_1401bd3c0(longlong param_1, undefined8 param_2, longlong *param_3, longlong param_4,
                  char *param_5, char *param_6) {
    char cVar1;
    char *pcVar2;
    undefined auVar3[16];
    char cVar4;
    int iVar5;
    longlong lVar6;
    longlong *plVar7;
    longlong *plVar8;
    undefined8 *puVar9;
    char **ppcVar10;
    undefined8 *puVar11;
    undefined8 uVar12;
    char **ppcVar13;
    undefined4 *puVar14;
    longlong lVar15;
    char **ppcVar16;
    int iVar17;
    char cVar18;
    char **ppcVar19;
    ulonglong uVar20;
    ulonglong uVar21;
    undefined4 *puVar22;
    longlong lVar23;
    longlong *plVar24;
    char *pcVar25;
    ulonglong uVar26;
    char *pcVar27;
    char *pcVar28;
    longlong lVar29;
    ulonglong local_88;
    ulonglong local_80;
    ulonglong local_78;
    ulonglong local_68;
    longlong local_60;
    char **local_50;

    uVar26 = 0;
    local_68 = 0;
    local_60 = 0;
    local_78 = 0;
    local_50 = (char **) 0x0;
    if (param_5 < param_6) {
        LAB_1401bd430:
        uVar20 = 0;
        plVar24 = (longlong * )
                (*(longlong * )(*(longlong * )(param_4 + 0x10) + (longlong) param_5 * 8) * 0x38 +
                 *param_3);
        lVar6 = *plVar24;
        uVar21 = *(ulonglong * )(lVar6 + -8);
        lVar29 = local_60;
        if (uVar21 != 0) {
            do {
                if (*(char *) (lVar6 + uVar20) == '\\') {
                    uVar26 = uVar20;
                    if (uVar21 <= uVar20) {
                        uVar26 = uVar21;
                    }
                    plVar7 = (longlong *) FUN_14018b280(uVar26 + 0x11, 0);
                    if (plVar7 != (longlong *) 0x0) {
                        plVar7[1] = uVar26;
                        *plVar7 = (longlong) & PTR_LAB_140b55060;
                    }
                    plVar8 = plVar7 + 2;
                    FUN_1407db590(plVar8, lVar6, uVar26);
                    *(undefined * )((longlong) plVar8 + uVar26) = 0;
                    lVar15 = *plVar24;
                    lVar6 = uVar20 + 1;
                    lVar23 = *(longlong * )(lVar15 + -8) - lVar6;
                    puVar9 = (undefined8 *) FUN_14018b280(lVar23 + 0x11, 0);
                    if (puVar9 != (undefined8 *) 0x0) {
                        puVar9[1] = lVar23;
                        *puVar9 = &PTR_LAB_140b55060;
                    }
                    puVar9 = puVar9 + 2;
                    FUN_1407db590(puVar9, lVar6 + lVar15, lVar23);
                    *(undefined * )(lVar23 + (longlong) puVar9) = 0;
                    *plVar24 = (longlong) puVar9;
                    pcVar27 = param_5;
                    pcVar28 = param_5;
                    if (lVar15 != 0) {
                        (**(code * *)(*(longlong * )(lVar15 + -0x10) + 8))(lVar15 + -0x10);
                    }
                    goto joined_r0x0001401bd593;
                }
                uVar20 = uVar20 + 1;
            } while (uVar20 < uVar21);
        }
        uVar21 = local_68 + 1;
        lVar6 = FUN_14018db00(local_60, uVar21, 8);
        *(char **) (local_68 * 8 + lVar6) = param_5;
        local_68 = uVar21;
        if ((local_60 != lVar6) && (FUN_1407db590(lVar6, local_60), lVar29 = lVar6, local_60 != 0)) {
            (**(code * *)(*(longlong * )(local_60 + -0x10) + 8))(local_60 + -0x10);
        }
        goto LAB_1401bd872;
    }
    LAB_1401bd8a0:
    lVar6 = 0;
    param_6 = (char *) 0x0;
    ppcVar10 = local_50;
    if (uVar26 != 0) {
        auVar3 = ZEXT816(0x10) * ZEXT816(*(longlong * )(param_1 + 0x10) + uVar26);
        uVar12 = SUB168(auVar3, 0);
        if (SUB168(auVar3 >> 0x40, 0) != 0) {
            uVar12 = 0xffffffffffffffff;
        }
        ppcVar13 = (char **) FUN_14018b280(uVar12);
        uVar26 = 0;
        uVar21 = 0;
        lVar29 = 0;
        lVar6 = 0;
        local_80 = 0;
        local_88 = 0;
        param_5 = (char *) 0x0;
        ppcVar19 = ppcVar13;
        ppcVar16 = local_50;
        do {
            if (uVar26 < *(ulonglong * )(param_1 + 0x10)) {
                LAB_1401bd92c:
                if (uVar21 < local_78) {
                    pcVar27 = *ppcVar16;
                    pcVar28 = *(char **) (lVar6 + *(longlong * )(param_1 + 8));
                    while (true) {
                        cVar1 = *pcVar27;
                        cVar18 = cVar1;
                        if ((byte)(cVar1 + 0xbfU) < 0x1a) {
                            cVar18 = cVar1 + ' ';
                        }
                        cVar4 = *pcVar28;
                        if ((byte)(cVar4 + 0xbfU) < 0x1a) {
                            cVar4 = cVar4 + ' ';
                        }
                        iVar5 = (int) cVar18 - (int) cVar4;
                        lVar6 = (longlong) param_5;
                        uVar26 = local_80;
                        if ((int) cVar18 != (int) cVar4) break;
                        if (cVar1 == '\0') goto LAB_1401bd9b3;
                        pcVar28 = pcVar28 + 1;
                        pcVar27 = pcVar27 + 1;
                    }
                    if (iVar5 < 0) {
                        iVar17 = 0;
                        goto LAB_1401bd9cf;
                    }
                    iVar17 = 1;
                    if (0 < iVar5) goto LAB_1401bd9cf;
                    LAB_1401bd9b3:
                    iVar17 = 2;
                } else {
                    iVar17 = 1;
                }
            } else {
                if (local_78 <= uVar21) {
                    *(longlong * )(param_1 + 0x10) = lVar29;
                    FUN_14018b900(*(undefined8 * )(param_1 + 8), 0);
                    *(char ***) (param_1 + 8) = ppcVar13;
                    uVar12 = FUN_14018c320(ppcVar13, *(longlong * )(param_1 + 0x10) << 4);
                    *(undefined8 * )(param_1 + 8) = uVar12;
                    goto LAB_1401bdbe0;
                }
                if (uVar26 < *(ulonglong * )(param_1 + 0x10)) goto LAB_1401bd92c;
                iVar17 = 0;
            }
            LAB_1401bd9cf:
            puVar22 = (undefined4 *) 0x0;
            if (iVar17 == 0) {
                puVar14 = (undefined4 *) FUN_14018b280(0x38);
                if (puVar14 != (undefined4 *) 0x0) {
                    *puVar14 = 0;
                    *(undefined8 * )(puVar14 + 2) = 0;
                    *(undefined8 * )(puVar14 + 4) = 0;
                    *(undefined8 * )(puVar14 + 6) = 0;
                    *(undefined8 * )(puVar14 + 8) = 0;
                    *(undefined8 * )(puVar14 + 10) = 0;
                    *(undefined8 * )(puVar14 + 0xc) = 0;
                    puVar22 = puVar14;
                }
                iVar5 = FUN_1401bd3c0(puVar22, param_2, param_3, param_4, ppcVar16[1], ppcVar16[2]);
                if (iVar5 < 0) goto joined_r0x0001401be199;
                pcVar27 = *ppcVar16;
                ppcVar19[1] = (char *) puVar22;
                *ppcVar19 = pcVar27;
                LAB_1401bdb26:
                ppcVar16 = ppcVar16 + 3;
                uVar21 = local_88 + 1;
                lVar6 = (longlong) param_5;
                uVar26 = local_80;
                local_88 = uVar21;
            } else if (iVar17 == 1) {
                lVar15 = *(longlong * )(param_1 + 8);
                uVar26 = uVar26 + 1;
                lVar6 = lVar6 + 0x10;
                *ppcVar19 = *(char **) (lVar15 + -0x10 + lVar6);
                ppcVar19[1] = *(char **) (lVar15 + -8 + lVar6);
                param_5 = (char *) lVar6;
                local_80 = uVar26;
            } else if (iVar17 == 2) {
                lVar15 = *(longlong * )(param_1 + 8);
                *ppcVar19 = *(char **) (lVar15 + lVar6);
                ppcVar19[1] = *(char **) (lVar15 + 8 + lVar6);
                iVar5 = FUN_1401bd3c0(ppcVar19[1], param_2, param_3, param_4, ppcVar16[1], ppcVar16[2]);
                if (-1 < iVar5) {
                    local_80 = local_80 + 1;
                    param_5 = (char *) ((longlong) param_5 + 0x10);
                    local_88 = uVar21;
                    goto LAB_1401bdb26;
                }
                goto joined_r0x0001401be199;
            }
            lVar15 = 0;
            cVar1 = **ppcVar19;
            while (cVar1 != '\0') {
                lVar15 = lVar15 + 1;
                cVar1 = (*ppcVar19)[lVar15];
            }
            lVar29 = lVar29 + 1;
            param_6 = (char *) ((longlong) param_6 + 1 + lVar15);
            ppcVar19 = ppcVar19 + 2;
        } while (true);
    }
    lVar29 = *(longlong * )(param_1 + 0x10);
    if (lVar29 != 0) {
        ppcVar19 = *(char ***) (param_1 + 8);
        do {
            lVar15 = 0;
            cVar1 = **ppcVar19;
            while (cVar1 != '\0') {
                lVar15 = lVar15 + 1;
                cVar1 = (*ppcVar19)[lVar15];
            }
            ppcVar19 = ppcVar19 + 2;
            lVar6 = lVar6 + 1 + lVar15;
            lVar29 = lVar29 + -1;
            param_6 = (char *) lVar6;
        } while (lVar29 != 0);
    }
    LAB_1401bdbe0:
    if (local_68 != 0) {
        auVar3 = ZEXT816(0x38) * ZEXT816(*(longlong * )(param_1 + 0x20) + local_68);
        uVar12 = SUB168(auVar3, 0);
        if (SUB168(auVar3 >> 0x40, 0) != 0) {
            uVar12 = 0xffffffffffffffff;
        }
        ppcVar16 = (char **) FUN_14018b280(uVar12);
        uVar26 = 0;
        uVar21 = 0;
        lVar29 = 0;
        lVar6 = 0;
        local_80 = 0;
        local_88 = 0;
        ppcVar19 = ppcVar16;
        do {
            if (uVar26 < *(ulonglong * )(param_1 + 0x20)) {
                LAB_1401bdc64:
                if (uVar21 < local_68) {
                    pcVar27 = *(char **) (*(longlong * )
                            (*(longlong * )(param_4 + 0x10) +
                             *(longlong * )(local_60 + uVar21 * 8) * 8) * 0x38 + *param_3);
                    pcVar28 = *(char **) (lVar6 + *(longlong * )(param_1 + 0x18));
                    while (true) {
                        cVar1 = *pcVar27;
                        cVar18 = cVar1;
                        if ((byte)(cVar1 + 0xbfU) < 0x1a) {
                            cVar18 = cVar1 + ' ';
                        }
                        cVar4 = *pcVar28;
                        if ((byte)(cVar4 + 0xbfU) < 0x1a) {
                            cVar4 = cVar4 + ' ';
                        }
                        iVar5 = (int) cVar18 - (int) cVar4;
                        uVar26 = local_80;
                        lVar6 = local_88;
                        if ((int) cVar18 != (int) cVar4) break;
                        if (cVar1 == '\0') goto LAB_1401bdcfc;
                        pcVar28 = pcVar28 + 1;
                        pcVar27 = pcVar27 + 1;
                    }
                    if (iVar5 < 0) {
                        iVar17 = 0;
                        goto LAB_1401bdd0b;
                    }
                    iVar17 = 1;
                    if (0 < iVar5) goto LAB_1401bdd0b;
                    LAB_1401bdcfc:
                    iVar17 = 2;
                } else {
                    iVar17 = 1;
                }
            } else {
                if (local_68 <= uVar21) goto LAB_1401be013;
                if (uVar26 < *(ulonglong * )(param_1 + 0x20)) goto LAB_1401bdc64;
                iVar17 = 0;
            }
            LAB_1401bdd0b:
            if (iVar17 == 0) {
                ppcVar13 = (char **) (*(longlong * )
                        (*(longlong * )(param_4 + 0x10) +
                         *(longlong * )(local_60 + uVar21 * 8) * 8) * 0x38 + *param_3);
                *ppcVar19 = *ppcVar13;
                ppcVar19[1] = ppcVar13[1];
                ppcVar19[2] = ppcVar13[2];
                ppcVar19[3] = ppcVar13[3];
                ppcVar19[4] = ppcVar13[4];
                ppcVar19[5] = ppcVar13[5];
                ppcVar19[6] = ppcVar13[6];
                FUN_1401c0090(param_2);
                LAB_1401bdfd2:
                uVar21 = uVar21 + 1;
                uVar26 = local_80;
                lVar6 = local_88;
            } else if (iVar17 == 1) {
                uVar26 = uVar26 + 1;
                ppcVar13 = (char **) (*(longlong * )(param_1 + 0x18) + lVar6);
                lVar6 = lVar6 + 0x38;
                *ppcVar19 = *ppcVar13;
                ppcVar19[1] = ppcVar13[1];
                ppcVar19[2] = ppcVar13[2];
                ppcVar19[3] = ppcVar13[3];
                ppcVar19[4] = ppcVar13[4];
                ppcVar19[5] = ppcVar13[5];
                ppcVar19[6] = ppcVar13[6];
                local_88 = lVar6;
                local_80 = uVar26;
            } else if (iVar17 == 2) {
                uVar26 = uVar21 + 1;
                ppcVar13 = (char **) (*(longlong * )(param_1 + 0x18) + lVar6);
                *ppcVar19 = *ppcVar13;
                ppcVar19[1] = ppcVar13[1];
                ppcVar19[2] = ppcVar13[2];
                ppcVar19[3] = ppcVar13[3];
                ppcVar19[4] = ppcVar13[4];
                ppcVar19[5] = ppcVar13[5];
                ppcVar19[6] = ppcVar13[6];
                lVar6 = *(longlong * )(param_4 + 0x10);
                lVar15 = *param_3;
                if (uVar26 < local_68) {
                    pcVar27 = *(char **) (*(longlong * )(lVar6 + *(longlong * )(local_60 + uVar21 * 8) * 8) *
                                          0x38 + lVar15);
                    plVar24 = (longlong * )(local_60 + 8 + uVar21 * 8);
                    do {
                        pcVar28 = pcVar27;
                        while (true) {
                            cVar1 = *pcVar28;
                            cVar18 = cVar1;
                            if ((byte)(cVar1 + 0xbfU) < 0x1a) {
                                cVar18 = cVar1 + ' ';
                            }
                            cVar4 = pcVar28[*(longlong * )(*(longlong * )(lVar6 + *plVar24 * 8) * 0x38 + lVar15) -
                                            (longlong) pcVar27];
                            if ((byte)(cVar4 + 0xbfU) < 0x1a) {
                                cVar4 = cVar4 + ' ';
                            }
                            if (cVar18 != cVar4) goto LAB_1401bde49;
                            if (cVar1 == '\0') break;
                            pcVar28 = pcVar28 + 1;
                        }
                        uVar26 = uVar26 + 1;
                        uVar21 = uVar21 + 1;
                        plVar24 = plVar24 + 1;
                    } while (uVar26 < local_68);
                }
                LAB_1401bde49:
                lVar15 = *(longlong * )(lVar6 + *(longlong * )(local_60 + uVar21 * 8) * 8) * 0x38 + lVar15;
                if (((*(char **) (lVar15 + 0x20) != ppcVar13[4]) ||
                     (*(char **) (lVar15 + 0x28) != ppcVar13[5])) ||
                    (*(int *) (lVar15 + 0x30) != *(int *) (ppcVar13 + 6))) {
                    FUN_1401c01e0(param_2);
                    FUN_1401c0090(param_2, lVar15 + 0x20);
                }
                iVar5 = FUN_1407e6af0(lVar15 + 8, ppcVar13 + 1, 0x30);
                if (iVar5 != 0) {
                    ppcVar19[1] = *(char **) (lVar15 + 8);
                    ppcVar19[2] = *(char **) (lVar15 + 0x10);
                    ppcVar19[3] = *(char **) (lVar15 + 0x18);
                    ppcVar19[4] = *(char **) (lVar15 + 0x20);
                    ppcVar19[5] = *(char **) (lVar15 + 0x28);
                    ppcVar19[6] = *(char **) (lVar15 + 0x30);
                }
                local_80 = local_80 + 1;
                local_88 = local_88 + 0x38;
                goto LAB_1401bdfd2;
            }
            lVar15 = 0;
            cVar1 = **ppcVar19;
            while (cVar1 != '\0') {
                lVar15 = lVar15 + 1;
                cVar1 = (*ppcVar19)[lVar15];
            }
            lVar29 = lVar29 + 1;
            param_6 = (char *) ((longlong) param_6 + 1 + lVar15);
            ppcVar19 = ppcVar19 + 7;
        } while (true);
    }
    lVar6 = *(longlong * )(param_1 + 0x20);
    if (lVar6 != 0) {
        ppcVar19 = *(char ***) (param_1 + 0x18);
        do {
            lVar29 = 0;
            cVar1 = **ppcVar19;
            while (cVar1 != '\0') {
                lVar29 = lVar29 + 1;
                cVar1 = (*ppcVar19)[lVar29];
            }
            ppcVar19 = ppcVar19 + 7;
            param_6 = (char *) ((longlong) param_6 + 1 + lVar29);
            lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
    }
    LAB_1401be080:
    lVar29 = FUN_14018b280(param_6, 0);
    uVar26 = 0;
    lVar6 = lVar29;
    if (*(longlong * )(param_1 + 0x10) != 0) {
        lVar15 = 0;
        do {
            lVar23 = 0;
            pcVar27 = *(char **) (lVar15 + *(longlong * )(param_1 + 8));
            cVar1 = *pcVar27;
            while (cVar1 != '\0') {
                lVar23 = lVar23 + 1;
                cVar1 = pcVar27[lVar23];
            }
            FUN_1407db590(lVar6, pcVar27, lVar23 + 1);
            uVar26 = uVar26 + 1;
            *(longlong * )(lVar15 + *(longlong * )(param_1 + 8)) = lVar6;
            lVar6 = lVar6 + lVar23 + 1;
            lVar15 = lVar15 + 0x10;
        } while (uVar26 < *(ulonglong * )(param_1 + 0x10));
    }
    uVar26 = 0;
    if (*(longlong * )(param_1 + 0x20) != 0) {
        lVar15 = 0;
        do {
            lVar23 = 0;
            pcVar27 = *(char **) (lVar15 + *(longlong * )(param_1 + 0x18));
            cVar1 = *pcVar27;
            while (cVar1 != '\0') {
                lVar23 = lVar23 + 1;
                cVar1 = pcVar27[lVar23];
            }
            FUN_1407db590(lVar6, pcVar27, lVar23 + 1);
            uVar26 = uVar26 + 1;
            *(longlong * )(lVar15 + *(longlong * )(param_1 + 0x18)) = lVar6;
            lVar6 = lVar6 + lVar23 + 1;
            lVar15 = lVar15 + 0x38;
        } while (uVar26 < *(ulonglong * )(param_1 + 0x20));
    }
    FUN_14018b900(*(undefined8 * )(param_1 + 0x28), 0);
    *(longlong * )(param_1 + 0x28) = lVar29;
    *(char **) (param_1 + 0x30) = param_6;
    iVar5 = FUN_1401bd1f0(param_1, param_2);
    if (-1 < iVar5) {
        iVar5 = 0;
    }
    joined_r0x0001401be199:
    for (; local_78 != 0; local_78 = local_78 - 1) {
        pcVar27 = *ppcVar10;
        if (pcVar27 != (char *) 0x0) {
            (**(code * *)(*(longlong * )(pcVar27 + -0x10) + 8))(pcVar27 + -0x10);
        }
        ppcVar10 = ppcVar10 + 3;
    }
    if (local_50 != (char **) 0x0) {
        (**(code * *)(local_50[-2] + 8))(local_50 + -2);
    }
    if (local_60 != 0) {
        (**(code * *)(*(longlong * )(local_60 + -0x10) + 8))(local_60 + -0x10);
    }
    return iVar5;
    joined_r0x0001401bd593:
    if (param_6 <= pcVar28 + 1) goto LAB_1401bd6c9;
    ppcVar10 = (char **) (*(longlong * )(*(longlong * )(param_4 + 0x10) + 8 + (longlong) pcVar27 * 8) *
                          0x38 + *param_3);
    uVar26 = plVar7[1];
    pcVar2 = *ppcVar10;
    if (uVar26 != 0) {
        pcVar25 = pcVar2;
        do {
            cVar1 = *pcVar25;
            cVar18 = cVar1;
            if ((byte)(cVar1 + 0xbfU) < 0x1a) {
                cVar18 = cVar1 + ' ';
            }
            cVar4 = pcVar25[(longlong) plVar8 - (longlong) pcVar2];
            if ((byte)(cVar4 + 0xbfU) < 0x1a) {
                cVar4 = cVar4 + ' ';
            }
            if (cVar18 != cVar4) goto LAB_1401bd6c9;
        } while ((cVar1 != '\0') &&
                 (pcVar25 = pcVar25 + 1, (ulonglong)((longlong) pcVar25 - (longlong) pcVar2) < uVar26));
    }
    if (pcVar2[uVar26] != '\\') goto LAB_1401bd6c9;
    lVar15 = *(longlong * )(pcVar2 + -8) - lVar6;
    puVar9 = (undefined8 *) FUN_14018b280(lVar15 + 0x11, 0);
    if (puVar9 != (undefined8 *) 0x0) {
        puVar9[1] = lVar15;
        *puVar9 = &PTR_LAB_140b55060;
    }
    puVar9 = puVar9 + 2;
    FUN_1407db590(puVar9, pcVar2 + lVar6, lVar15);
    *(char *) (lVar15 + (longlong) puVar9) = '\0';
    *ppcVar10 = (char *) puVar9;
    if (pcVar2 != (char *) 0x0) {
        (**(code * *)(*(longlong * )(pcVar2 + -0x10) + 8))(pcVar2 + -0x10);
    }
    pcVar27 = pcVar27 + 1;
    pcVar28 = pcVar28 + 1;
    goto joined_r0x0001401bd593;
    LAB_1401bd6c9:
    if (plVar8 == (longlong *) 0x0) {
        puVar9 = (undefined8 *) 0x0;
    } else {
        lVar6 = 0;
        cVar1 = *(char *) plVar8;
        while (cVar1 != '\0') {
            lVar6 = lVar6 + 1;
            cVar1 = *(char *) (lVar6 + (longlong) plVar8);
        }
        puVar9 = (undefined8 *) FUN_14018b280(lVar6 + 0x11, 0);
        if (puVar9 != (undefined8 *) 0x0) {
            puVar9[1] = lVar6;
            *puVar9 = &PTR_LAB_140b55060;
        }
        puVar9 = puVar9 + 2;
        FUN_1407db590(puVar9, plVar8, lVar6);
        *(undefined * )(lVar6 + (longlong) puVar9) = 0;
    }
    uVar26 = local_78 + 1;
    ppcVar10 = (char **) FUN_14018db00(local_50, uVar26);
    ppcVar19 = ppcVar10 + local_78 * 3;
    if (ppcVar19 != (char **) 0x0) {
        if (puVar9 == (undefined8 *) 0x0) {
            *ppcVar19 = (char *) 0x0;
        } else {
            lVar6 = puVar9[-1];
            puVar11 = (undefined8 *) FUN_14018b280(lVar6 + 0x11, 0);
            if (puVar11 != (undefined8 *) 0x0) {
                puVar11[1] = lVar6;
                *puVar11 = &PTR_LAB_140b55060;
            }
            puVar11 = puVar11 + 2;
            FUN_1407db590(puVar11, puVar9);
            *(char *) ((longlong) puVar11 + lVar6) = '\0';
            *ppcVar19 = (char *) puVar11;
        }
        ppcVar19[1] = param_5;
        ppcVar19[2] = pcVar27 + 1;
    }
    ppcVar19 = local_50;
    if (local_50 != ppcVar10) {
        if (local_78 != 0) {
            do {
                lVar6 = ((longlong) ppcVar10 - (longlong) local_50) + (longlong) ppcVar19;
                if (lVar6 != 0) {
                    FUN_1401c0670(lVar6, ppcVar19);
                }
                pcVar28 = *ppcVar19;
                if (pcVar28 != (char *) 0x0) {
                    (**(code * *)(*(longlong * )(pcVar28 + -0x10) + 8))(pcVar28 + -0x10);
                }
                ppcVar19 = ppcVar19 + 3;
                local_78 = local_78 - 1;
            } while (local_78 != 0);
        }
        ppcVar19 = ppcVar10;
        if (local_50 != (char **) 0x0) {
            (**(code * *)(local_50[-2] + 8))(local_50 + -2);
        }
    }
    local_50 = ppcVar19;
    if (puVar9 != (undefined8 *) 0x0) {
        (**(code * *)(puVar9[-2] + 8))(puVar9 + -2);
    }
    param_5 = pcVar27;
    local_78 = uVar26;
    if (plVar8 != (longlong *) 0x0) {
        (**(code * *)(*plVar7 + 8))(plVar7);
    }
    LAB_1401bd872:
    local_60 = lVar29;
    param_5 = param_5 + 1;
    if (param_6 <= param_5) goto LAB_1401bd8a0;
    goto LAB_1401bd430;
    LAB_1401be013:
    *(longlong * )(param_1 + 0x20) = lVar29;
    FUN_14018b900(*(undefined8 * )(param_1 + 0x18), 0);
    *(char ***) (param_1 + 0x18) = ppcVar16;
    uVar12 = FUN_14018c320(ppcVar16, *(longlong * )(param_1 + 0x20) * 0x38, 0);
    *(undefined8 * )(param_1 + 0x18) = uVar12;
    goto LAB_1401be080;
}


undefined8 FUN_1401be1f0(longlong param_1, undefined8 param_2, undefined8 *param_3) {
    undefined * puVar1;
    ulonglong uVar2;
    undefined8 uVar3;
    longlong lVar4;

    puVar1 = (undefined * )
    FUN_1407de0b4(param_2, 0x5c);
    if (puVar1 == (undefined * )0x0) {
        uVar2 = FUN_1401bf1c0(param_1, param_2);
        if (uVar2 < *(ulonglong * )(param_1 + 0x20)) {
            lVar4 = uVar2 * 0x38 + *(longlong * )(param_1 + 0x18);
            if (param_3 == (undefined8 *) 0x0) {
                return 0;
            }
            *param_3 = *(undefined8 * )(lVar4 + 8);
            param_3[1] = *(undefined8 * )(lVar4 + 0x10);
            param_3[2] = *(undefined8 * )(lVar4 + 0x18);
            param_3[3] = *(undefined8 * )(lVar4 + 0x20);
            param_3[4] = *(undefined8 * )(lVar4 + 0x28);
            param_3[5] = *(undefined8 * )(lVar4 + 0x30);
            return 0;
        }
    }
    else {
        *puVar1 = 0;
        uVar2 = FUN_1401bf0f0();
        *puVar1 = 0x5c;
        if (uVar2 < *(ulonglong * )(param_1 + 0x10)) {
            uVar3 = FUN_1401be1f0(*(undefined8 * )(*(longlong * )(param_1 + 8) + 8 + uVar2 * 0x10),
                                  puVar1 + 1, param_3);
            if (-1 < (int) uVar3) {
                return 0;
            }
            return uVar3;
        }
    }
    return 0x80070490;
}


undefined8 FUN_1401be2c0(longlong param_1, longlong param_2, undefined8 param_3) {
    undefined4 *puVar1;
    int iVar2;
    undefined * puVar3;
    ulonglong uVar4;
    undefined8 uVar5;
    longlong lVar6;

    puVar3 = (undefined * )
    FUN_1407de0b4(param_3, 0x5c);
    if (puVar3 == (undefined * )0x0) {
        uVar4 = FUN_1401bf1c0(param_1, param_3);
        if (*(ulonglong * )(param_1 + 0x20) <= uVar4) {
            return 0x80070490;
        }
        FUN_1401c01e0(param_2, *(longlong * )(param_1 + 0x18) + 0x20 + uVar4 * 0x38);
        lVar6 = *(longlong * )(param_1 + 0x18) + uVar4 * 0x38;
        FUN_1407db590(lVar6, lVar6 + 0x38, ((*(longlong * )(param_1 + 0x20) - uVar4) + -1) * 0x38);
        *(longlong * )(param_1 + 0x20) = *(longlong * )(param_1 + 0x20) + -1;
        uVar5 = FUN_1401bd1f0(param_1, param_2);
        iVar2 = (int) uVar5;
    }
    else {
        *puVar3 = 0;
        uVar4 = FUN_1401bf0f0();
        *puVar3 = 0x5c;
        if (*(ulonglong * )(param_1 + 0x10) <= uVar4) {
            return 0x80070490;
        }
        puVar1 = *(undefined4 * *)(uVar4 * 0x10 + 8 + *(longlong * )(param_1 + 8));
        uVar5 = FUN_1401be2c0(puVar1, param_2, puVar3 + 1);
        if ((int) uVar5 < 0) {
            return uVar5;
        }
        if (*(longlong * )(puVar1 + 4) != 0) {
            return 0;
        }
        if (*(longlong * )(puVar1 + 8) != 0) {
            return 0;
        }
        uVar5 = (**(code * *)(**(longlong * *)(param_2 + 0x28) + 0x38))
                (*(longlong * *)(param_2 + 0x28), *puVar1);
        if ((int) uVar5 < 0) {
            return uVar5;
        }
        FUN_1401bce10(puVar1);
        FUN_14018b900(puVar1, 0);
        lVar6 = uVar4 * 0x10 + *(longlong * )(param_1 + 8);
        FUN_1407db590(lVar6, lVar6 + 0x10, ((*(longlong * )(param_1 + 0x10) - uVar4) + -1) * 0x10);
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -1;
        uVar5 = FUN_1401bd1f0(param_1, param_2);
        iVar2 = (int) uVar5;
    }
    if (-1 < iVar2) {
        return 0;
    }
    return uVar5;
}


void FUN_1401be430(longlong param_1, byte *param_2, int param_3, undefined8 param_4, undefined8 param_5,
                   longlong param_6, longlong param_7) {
    byte *pbVar1;
    byte bVar2;
    longlong lVar3;
    byte bVar4;
    int iVar5;
    uint uVar6;
    undefined * puVar7;
    ulonglong uVar8;
    byte bVar9;
    ushort uVar10;
    byte *pbVar11;
    ushort *puVar12;
    byte *pbVar13;
    ulonglong uVar14;
    longlong lVar15;
    longlong lVar16;
    short *psVar17;
    ulonglong uVar18;
    longlong lVar19;
    undefined auStack1016[32];
    undefined8 local_3d8;
    longlong local_3d0;
    longlong local_3c8;
    longlong local_3b8;
    ulonglong local_3b0;
    longlong local_3a8;
    int local_3a0;
    longlong local_398;
    undefined8 local_390;
    undefined8 local_388;
    ushort *local_378;
    longlong local_370;
    byte *local_368;
    byte local_358[272];
    ushort local_248[264];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong) auStack1016;
    local_390 = param_5;
    local_398 = param_7;
    local_3b8 = param_6;
    local_3a8 = param_1;
    local_3a0 = param_3;
    local_388 = param_4;
    puVar7 = (undefined * )
    FUN_1407de0b4(param_2, 0x5c);
    if (puVar7 == (undefined * )0x0) {
        local_368 = &DAT_1409e2a4c;
        if (*param_2 != 0) {
            local_368 = param_2;
        }
        uVar8 = 0xffffffffffffffff;
        if (local_368 != (byte *) 0x0) {
            uVar18 = 0;
            pbVar11 = local_368;
            uVar14 = uVar18;
            do {
                bVar2 = *pbVar11;
                if ((char) bVar2 < '\0') {
                    if (((1 < uVar8) && ((bVar2 & 0xe0) == 0xc0)) &&
                        (pbVar13 = pbVar11 + 1, (*pbVar13 & 0xc0) == 0x80)) {
                        pbVar11 = pbVar11 + 2;
                        uVar10 = (short) (char) (bVar2 & 0x1f) << 6 | (short) (char) (*pbVar13 & 0x3f);
                        uVar8 = uVar8 - 2;
                        goto LAB_1401be73c;
                    }
                    if (((2 < uVar8) && ((bVar2 & 0xf0) == 0xe0)) &&
                        ((pbVar13 = pbVar11 + 1, (*pbVar13 & 0xc0) == 0x80 &&
                                                 (pbVar1 = pbVar11 + 2, (*pbVar1 & 0xc0) == 0x80)))) {
                        pbVar11 = pbVar11 + 3;
                        uVar10 = ((short) (char) (*pbVar13 & 0x3f) | (short) (char) bVar2 << 6) << 6 |
                                 (short) (char) (*pbVar1 & 0x3f);
                        uVar8 = uVar8 - 3;
                        goto LAB_1401be73c;
                    }
                    pbVar11 = pbVar11 + 1;
                    uVar8 = uVar8 - 1;
                } else {
                    pbVar11 = pbVar11 + 1;
                    uVar10 = (ushort)(char)
                    bVar2;
                    uVar8 = uVar8 - 1;
                    LAB_1401be73c:
                    if (uVar14 == 0x104) goto LAB_1401be628;
                    local_248[uVar14] = uVar10;
                    uVar14 = uVar14 + 1;
                    if (uVar10 == 0) break;
                }
            } while (uVar8 != 0);
            local_378 = local_248;
            while (local_248[0] != 0) {
                switch (local_248[0]) {
                    case 0x1a:
                    case 0x21:
                    case 0x2a:
                    case 0x3f:
                    case 0x5b:
                    case 0x5d:
                        goto LAB_1401be7c6;
                    default:
                        local_248[0] = local_378[1];
                        local_378 = local_378 + 1;
                }
            }
            LAB_1401be7c6:
            local_370 = (longlong) local_378 - (longlong) local_248 >> 1;
            if (local_370 == 0) {
                local_3b0 = 0;
                uVar8 = local_3b0;
            } else {
                puVar12 = local_248;
                uVar14 = uVar18;
                lVar16 = local_370;
                do {
                    uVar10 = *puVar12;
                    if (uVar10 < 0x80) {
                        if (0x103 < uVar14) goto LAB_1401be628;
                        local_358[uVar14] = (byte) uVar10;
                        uVar8 = uVar14 + 1;
                    } else if (uVar10 < 0x1000) {
                        if (0x102 < uVar14) goto LAB_1401be628;
                        local_358[uVar14] = (byte)(uVar10 >> 6) | 0xc0;
                        uVar8 = uVar14 + 2;
                        local_358[uVar14 + 1] = *(byte *) puVar12 & 0x3f | 0x80;
                    } else {
                        if (0x101 < uVar14) goto LAB_1401be628;
                        local_358[uVar14] = (byte)(uVar10 >> 0xc) | 0xe0;
                        local_358[uVar14 + 1] = (byte)(uVar10 >> 6) & 0x3f | 0x80;
                        uVar8 = uVar14 + 3;
                        local_358[uVar14 + 2] = *(byte *) puVar12 & 0x3f | 0x80;
                    }
                    local_3b0 = uVar8;
                    if (uVar10 == 0) break;
                    puVar12 = puVar12 + 1;
                    lVar16 = lVar16 + -1;
                    uVar14 = uVar8;
                } while (lVar16 != 0);
                if (uVar8 != 0) {
                    uVar18 = FUN_1401bf290();
                }
            }
            if (uVar18 < *(ulonglong * )(local_3a8 + 0x10)) {
                lVar16 = uVar18 << 4;
                do {
                    puVar12 = local_378;
                    pbVar11 = *(byte * *)(lVar16 + *(longlong * )(local_3a8 + 8));
                    if (uVar8 != 0) {
                        pbVar13 = pbVar11;
                        do {
                            bVar2 = *pbVar13;
                            bVar9 = bVar2;
                            if ((byte)(bVar2 + 0xbf) < 0x1a) {
                                bVar9 = bVar2 + 0x20;
                            }
                            bVar4 = pbVar13[(longlong)(local_358 + -(longlong) pbVar11)];
                            if ((byte)(bVar4 + 0xbf) < 0x1a) {
                                bVar4 = bVar4 + 0x20;
                            }
                            if (bVar9 != bVar4) goto LAB_1401beae8;
                        } while ((bVar2 != 0) &&
                                 (pbVar13 = pbVar13 + 1,
                                         (ulonglong)((longlong) pbVar13 - (longlong) pbVar11) < uVar8));
                    }
                    uVar14 = 0xffffffffffffffff;
                    lVar15 = local_398 - local_3b8 >> 1;
                    if (((local_3b8 == 0) && (lVar15 != 0)) || (pbVar11 == (byte *) 0x0)) goto LAB_1401be628;
                    lVar19 = 0;
                    do {
                        bVar2 = *pbVar11;
                        if ((char) bVar2 < '\0') {
                            if (((1 < uVar14) && ((bVar2 & 0xe0) == 0xc0)) &&
                                (pbVar13 = pbVar11 + 1, (*pbVar13 & 0xc0) == 0x80)) {
                                pbVar11 = pbVar11 + 2;
                                uVar10 = (short) (char) (bVar2 & 0x1f) << 6 | (short) (char) (*pbVar13 & 0x3f);
                                lVar3 = -2;
                                goto LAB_1401bea46;
                            }
                            if (((2 < uVar14) && ((bVar2 & 0xf0) == 0xe0)) &&
                                ((pbVar13 = pbVar11 + 1, (*pbVar13 & 0xc0) == 0x80 &&
                                                         (pbVar1 = pbVar11 + 2, (*pbVar1 & 0xc0) == 0x80)))) {
                                pbVar11 = pbVar11 + 3;
                                uVar10 = ((short) (char) (*pbVar13 & 0x3f) | (short) (char) bVar2 << 6) << 6 |
                                         (short) (char) (*pbVar1 & 0x3f);
                                lVar3 = -3;
                                goto LAB_1401bea46;
                            }
                            pbVar11 = pbVar11 + 1;
                            uVar14 = uVar14 - 1;
                        } else {
                            pbVar11 = pbVar11 + 1;
                            uVar10 = (ushort)(char)
                            bVar2;
                            lVar3 = -1;
                            LAB_1401bea46:
                            uVar14 = uVar14 + lVar3;
                            if (lVar15 != 0) {
                                if (lVar19 == lVar15) goto LAB_1401be628;
                                *(ushort * )(local_3b8 + lVar19 * 2) = uVar10;
                            }
                            lVar19 = lVar19 + 1;
                            if (uVar10 == 0) break;
                        }
                    } while (uVar14 != 0);
                    psVar17 = (short *) (local_3b8 + local_370 * 2);
                    if ((psVar17 != (short *) 0x0) && (iVar5 = FUN_1401d3ec0(), iVar5 != 0)) {
                        if (*psVar17 == 0) {
                            uVar6 = (uint)(*puVar12 == 0);
                        } else {
                            uVar6 = FUN_1401d3f90();
                        }
                        if (uVar6 != 0) {
                            FUN_1401d0b80();
                        }
                    }
                    uVar18 = uVar18 + 1;
                    lVar16 = lVar16 + 0x10;
                } while (uVar18 < *(ulonglong * )(local_3a8 + 0x10));
            }
            LAB_1401beae8:
            lVar16 = local_3a8;
            uVar14 = 0;
            if (uVar8 != 0) {
                uVar14 = FUN_1401bf400();
            }
            if (uVar14 < *(ulonglong * )(lVar16 + 0x20)) {
                lVar15 = uVar14 * 0x38;
                do {
                    puVar12 = local_378;
                    pbVar11 = *(byte * *)(lVar15 + *(longlong * )(lVar16 + 0x18));
                    if (local_3b0 != 0) {
                        pbVar13 = pbVar11;
                        do {
                            bVar2 = *pbVar13;
                            bVar9 = bVar2;
                            if ((byte)(bVar2 + 0xbf) < 0x1a) {
                                bVar9 = bVar2 + 0x20;
                            }
                            bVar4 = pbVar13[(longlong)(local_358 + -(longlong) pbVar11)];
                            if ((byte)(bVar4 + 0xbf) < 0x1a) {
                                bVar4 = bVar4 + 0x20;
                            }
                            lVar16 = local_3a8;
                            if (bVar9 != bVar4) goto LAB_1401bed33;
                        } while ((bVar2 != 0) &&
                                 (pbVar13 = pbVar13 + 1,
                                         (ulonglong)((longlong) pbVar13 - (longlong) pbVar11) < local_3b0));
                    }
                    uVar8 = 0xffffffffffffffff;
                    lVar16 = local_398 - local_3b8 >> 1;
                    if (((local_3b8 == 0) && (lVar16 != 0)) || (pbVar11 == (byte *) 0x0)) goto LAB_1401be628;
                    lVar19 = 0;
                    do {
                        bVar2 = *pbVar11;
                        if ((char) bVar2 < '\0') {
                            if (((1 < uVar8) && ((bVar2 & 0xe0) == 0xc0)) &&
                                (pbVar13 = pbVar11 + 1, (*pbVar13 & 0xc0) == 0x80)) {
                                pbVar11 = pbVar11 + 2;
                                uVar10 = (short) (char) (bVar2 & 0x1f) << 6 | (short) (char) (*pbVar13 & 0x3f);
                                lVar3 = -2;
                                goto LAB_1401bec88;
                            }
                            if (((2 < uVar8) && ((bVar2 & 0xf0) == 0xe0)) &&
                                ((pbVar13 = pbVar11 + 1, (*pbVar13 & 0xc0) == 0x80 &&
                                                         (pbVar1 = pbVar11 + 2, (*pbVar1 & 0xc0) == 0x80)))) {
                                pbVar11 = pbVar11 + 3;
                                uVar10 = ((short) (char) (*pbVar13 & 0x3f) | (short) (char) bVar2 << 6) << 6 |
                                         (short) (char) (*pbVar1 & 0x3f);
                                lVar3 = -3;
                                goto LAB_1401bec88;
                            }
                            pbVar11 = pbVar11 + 1;
                            uVar8 = uVar8 - 1;
                        } else {
                            pbVar11 = pbVar11 + 1;
                            uVar10 = (ushort)(char)
                            bVar2;
                            lVar3 = -1;
                            LAB_1401bec88:
                            uVar8 = uVar8 + lVar3;
                            if (lVar16 != 0) {
                                if (lVar19 == lVar16) goto LAB_1401be628;
                                *(ushort * )(local_3b8 + lVar19 * 2) = uVar10;
                            }
                            lVar19 = lVar19 + 1;
                            if (uVar10 == 0) break;
                        }
                    } while (uVar8 != 0);
                    psVar17 = (short *) (local_3b8 + local_370 * 2);
                    if ((psVar17 != (short *) 0x0) && (iVar5 = FUN_1401d3ec0(), iVar5 != 0)) {
                        if (*psVar17 == 0) {
                            uVar6 = (uint)(*puVar12 == 0);
                        } else {
                            uVar6 = FUN_1401d3f90();
                        }
                        if (uVar6 != 0) {
                            FUN_1401d0ae0();
                        }
                    }
                    uVar14 = uVar14 + 1;
                    lVar15 = lVar15 + 0x38;
                    lVar16 = local_3a8;
                } while (uVar14 < *(ulonglong * )(local_3a8 + 0x20));
            }
            LAB_1401bed33:
            if ((local_3a0 != 0) && (uVar8 = 0, *(longlong * )(lVar16 + 0x10) != 0)) {
                lVar15 = local_398 - local_3b8 >> 1;
                uVar14 = uVar8;
                while (true) {
                    lVar19 = 0;
                    uVar18 = 0xffffffffffffffff;
                    pbVar11 = *(byte * *)(uVar14 + *(longlong * )(lVar16 + 8));
                    if (((local_3b8 == 0) && (lVar15 != 0)) || (pbVar11 == (byte *) 0x0)) break;
                    do {
                        bVar2 = *pbVar11;
                        if ((char) bVar2 < '\0') {
                            if (((1 < uVar18) && ((bVar2 & 0xe0) == 0xc0)) &&
                                (pbVar13 = pbVar11 + 1, (*pbVar13 & 0xc0) == 0x80)) {
                                pbVar11 = pbVar11 + 2;
                                uVar10 = (short) (char) (bVar2 & 0x1f) << 6 | (short) (char) (*pbVar13 & 0x3f);
                                uVar18 = uVar18 - 2;
                                goto LAB_1401bee33;
                            }
                            if (((2 < uVar18) && ((bVar2 & 0xf0) == 0xe0)) &&
                                ((pbVar13 = pbVar11 + 1, (*pbVar13 & 0xc0) == 0x80 &&
                                                         (pbVar1 = pbVar11 + 2, (*pbVar1 & 0xc0) == 0x80)))) {
                                pbVar11 = pbVar11 + 3;
                                uVar10 = ((short) (char) (*pbVar13 & 0x3f) | (short) (char) bVar2 << 6) << 6 |
                                         (short) (char) (*pbVar1 & 0x3f);
                                uVar18 = uVar18 - 3;
                                goto LAB_1401bee33;
                            }
                            pbVar11 = pbVar11 + 1;
                            uVar18 = uVar18 - 1;
                        } else {
                            pbVar11 = pbVar11 + 1;
                            uVar10 = (ushort)(char)
                            bVar2;
                            uVar18 = uVar18 - 1;
                            LAB_1401bee33:
                            if (lVar15 != 0) {
                                if (lVar19 == lVar15) goto LAB_1401be628;
                                *(ushort * )(local_3b8 + lVar19 * 2) = uVar10;
                            }
                            lVar19 = lVar19 + 1;
                            if (uVar10 == 0) break;
                        }
                    } while (uVar18 != 0);
                    local_3d0 = local_3b8 + lVar19 * 2;
                    local_3c8 = local_398;
                    *(undefined2 * )(local_3d0 + -2) = 0x5c;
                    local_3d8 = local_390;
                    iVar5 = FUN_1401be430(*(undefined8 * )(uVar14 + 8 + *(longlong * )(lVar16 + 8)), local_368);
                    if (iVar5 < 0) break;
                    uVar8 = uVar8 + 1;
                    uVar14 = uVar14 + 0x10;
                    if (*(ulonglong * )(lVar16 + 0x10) <= uVar8) break;
                }
            }
        }
    }
    else {
        *puVar7 = 0;
        uVar8 = FUN_1401bf0f0(param_1, param_2);
        *puVar7 = 0x5c;
        if (uVar8 < *(ulonglong * )(param_1 + 0x10)) {
            pbVar11 = *(byte * *)(*(longlong * )(param_1 + 8) + uVar8 * 0x10);
            uVar14 = 0xffffffffffffffff;
            uVar18 = local_398 - param_6 >> 1;
            if (((param_6 != 0) || (uVar18 == 0)) && (pbVar11 != (byte *) 0x0)) {
                local_3b0 = 0;
                do {
                    bVar2 = *pbVar11;
                    if ((char) bVar2 < '\0') {
                        if (((1 < uVar14) && ((bVar2 & 0xe0) == 0xc0)) &&
                            (pbVar13 = pbVar11 + 1, (*pbVar13 & 0xc0) == 0x80)) {
                            pbVar11 = pbVar11 + 2;
                            uVar10 = (short) (char) (bVar2 & 0x1f) << 6 | (short) (char) (*pbVar13 & 0x3f);
                            lVar16 = -2;
                            goto LAB_1401be5c1;
                        }
                        if (((2 < uVar14) && ((bVar2 & 0xf0) == 0xe0)) &&
                            ((pbVar13 = pbVar11 + 1, (*pbVar13 & 0xc0) == 0x80 &&
                                                     (pbVar1 = pbVar11 + 2, (*pbVar1 & 0xc0) == 0x80)))) {
                            pbVar11 = pbVar11 + 3;
                            uVar10 = ((short) (char) (*pbVar13 & 0x3f) | (short) (char) bVar2 << 6) << 6 |
                                     (short) (char) (*pbVar1 & 0x3f);
                            lVar16 = -3;
                            goto LAB_1401be5c1;
                        }
                        pbVar11 = pbVar11 + 1;
                        lVar16 = -1;
                    } else {
                        pbVar11 = pbVar11 + 1;
                        uVar10 = (ushort)(char)
                        bVar2;
                        lVar16 = -1;
                        LAB_1401be5c1:
                        if (uVar18 != 0) {
                            if (local_3b0 == uVar18) goto LAB_1401be628;
                            *(ushort * )(param_6 + local_3b0 * 2) = uVar10;
                        }
                        local_3b0 = local_3b0 + 1;
                        if (uVar10 == 0) break;
                    }
                    uVar14 = uVar14 + lVar16;
                } while (uVar14 != 0);
                local_3d0 = param_6 + local_3b0 * 2;
                local_3c8 = local_398;
                *(undefined2 * )(local_3d0 + -2) = 0x5c;
                local_3d8 = local_390;
                FUN_1401be430(*(undefined8 * )(*(longlong * )(param_1 + 8) + 8 + uVar8 * 0x10), puVar7 + 1,
                              local_3a0, local_388);
            }
        }
    }
    LAB_1401be628:
    FUN_1407db4f0(local_38 ^ (ulonglong) auStack1016);
    return;
}


void FUN_1401bef20(longlong param_1, longlong param_2) {
    ulonglong **ppuVar1;
    undefined4 uVar2;
    longlong lVar3;
    longlong *plVar4;
    ulonglong *puVar5;
    int iVar6;
    int iVar7;
    ulonglong uVar8;
    ulonglong *puVar9;
    ulonglong *puVar10;
    ulonglong uVar11;
    ulonglong local_res20;
    longlong local_38;

    local_res20 = 0;
    if (*(longlong * )(param_1 + 0x20) != 0) {
        local_38 = 0;
        do {
            puVar10 = (ulonglong * )(local_38 + 0x20 + *(longlong * )(param_1 + 0x18));
            lVar3 = *(longlong * )(param_2 + 0x50);
            if (lVar3 != 0) {
                uVar8 = (**(code * *)(lVar3 + 0x18))(puVar10);
                for (puVar9 = *(ulonglong * *)
                        (*(longlong * )(lVar3 + 0x10) + (uVar8 % *(ulonglong * )(lVar3 + 8)) * 8);
                     puVar9 != (ulonglong *) 0x0; puVar9 = (ulonglong *) puVar9[1]) {
                    if ((uVar8 == *puVar9) && (iVar6 = (**(code * *)(lVar3 + 0x20))(puVar10), iVar6 != 0)) {
                        if ((int *) ((longlong) puVar9 + 0x24) != (int *) 0x0) {
                            iVar6 = *(int *) ((longlong) puVar9 + 0x24);
                            lVar3 = *(longlong * )(param_2 + 0x50);
                            uVar8 = (**(code * *)(lVar3 + 0x18))(puVar10);
                            puVar9 = *(ulonglong * *)
                                    (*(longlong * )(lVar3 + 0x10) + (uVar8 % *(ulonglong * )(lVar3 + 8)) * 8);
                            goto joined_r0x0001401bf03a;
                        }
                        break;
                    }
                }
                plVar4 = *(longlong * *)(param_2 + 0x50);
                if (*plVar4 == plVar4[1]) {
                    FUN_1400290d0(plVar4);
                }
                uVar8 = (*(code *) plVar4[3])(puVar10);
                ppuVar1 = (ulonglong * *)(plVar4[2] + (uVar8 % (ulonglong) plVar4[1]) * 8);
                puVar9 = (ulonglong *) FUN_14018b280(0x28);
                if (puVar9 != (ulonglong *) 0x0) {
                    puVar5 = *ppuVar1;
                    *puVar9 = uVar8;
                    puVar9[1] = (ulonglong) puVar5;
                    puVar9[2] = *puVar10;
                    puVar9[3] = puVar10[1];
                    uVar2 = *(undefined4 * )(puVar10 + 2);
                    *(undefined4 * )((longlong) puVar9 + 0x24) = 1;
                    *(undefined4 * )(puVar9 + 4) = uVar2;
                }
                *ppuVar1 = puVar9;
                *plVar4 = *plVar4 + 1;
            }
            LAB_1401bf07c:
            local_res20 = local_res20 + 1;
            local_38 = local_38 + 0x38;
        } while (local_res20 < *(ulonglong * )(param_1 + 0x20));
    }
    uVar8 = 0;
    uVar11 = uVar8;
    if (*(longlong * )(param_1 + 0x10) != 0) {
        do {
            FUN_1401bef20(*(undefined8 * )(*(longlong * )(param_1 + 8) + 8 + uVar8), param_2);
            uVar11 = uVar11 + 1;
            uVar8 = uVar8 + 0x10;
        } while (uVar11 < *(ulonglong * )(param_1 + 0x10));
    }
    return;
    joined_r0x0001401bf03a:
    if (puVar9 == (ulonglong *) 0x0) goto LAB_1401bf07c;
    if ((uVar8 == *puVar9) && (iVar7 = (**(code * *)(lVar3 + 0x20))(puVar10, puVar9 + 2), iVar7 != 0)) {
        if ((int *) ((longlong) puVar9 + 0x24) != (int *) 0x0) {
            *(int *) ((longlong) puVar9 + 0x24) = iVar6 + 1;
        }
        goto LAB_1401bf07c;
    }
    puVar9 = (ulonglong *) puVar9[1];
    goto joined_r0x0001401bf03a;
}


ulonglong FUN_1401bf0f0(longlong param_1, char *param_2) {
    char cVar1;
    ulonglong uVar2;
    char cVar3;
    char cVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    int iVar7;
    char *pcVar8;
    char *pcVar9;
    ulonglong uVar10;

    uVar2 = *(ulonglong * )(param_1 + 0x10);
    uVar5 = 0;
    if (uVar2 != 0) {
        uVar6 = uVar2;
        do {
            uVar10 = (uVar6 - uVar5 >> 1) + uVar5;
            pcVar9 = *(char **) (uVar10 * 0x10 + *(longlong * )(param_1 + 8));
            pcVar8 = param_2;
            while (true) {
                cVar1 = *pcVar8;
                cVar4 = cVar1;
                if ((byte)(cVar1 + 0xbfU) < 0x1a) {
                    cVar4 = cVar1 + ' ';
                }
                cVar3 = *pcVar9;
                if ((byte)(cVar3 + 0xbfU) < 0x1a) {
                    cVar3 = cVar3 + ' ';
                }
                iVar7 = (int) cVar4 - (int) cVar3;
                if ((int) cVar4 != (int) cVar3) break;
                if (cVar1 == '\0') {
                    return uVar10;
                }
                pcVar9 = pcVar9 + 1;
                pcVar8 = pcVar8 + 1;
            }
            if (-1 < iVar7) {
                if (iVar7 < 1) {
                    return uVar10;
                }
                uVar5 = uVar10 + 1;
                uVar10 = uVar6;
            }
            uVar6 = uVar10;
        } while (uVar5 < uVar10);
    }
    return uVar2;
}


ulonglong FUN_1401bf1c0(longlong param_1, char *param_2) {
    char cVar1;
    ulonglong uVar2;
    char cVar3;
    char cVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    int iVar7;
    char *pcVar8;
    char *pcVar9;
    ulonglong uVar10;

    uVar2 = *(ulonglong * )(param_1 + 0x20);
    uVar5 = 0;
    if (uVar2 != 0) {
        uVar6 = uVar2;
        do {
            uVar10 = (uVar6 - uVar5 >> 1) + uVar5;
            pcVar9 = *(char **) (uVar10 * 0x38 + *(longlong * )(param_1 + 0x18));
            pcVar8 = param_2;
            while (true) {
                cVar1 = *pcVar8;
                cVar4 = cVar1;
                if ((byte)(cVar1 + 0xbfU) < 0x1a) {
                    cVar4 = cVar1 + ' ';
                }
                cVar3 = *pcVar9;
                if ((byte)(cVar3 + 0xbfU) < 0x1a) {
                    cVar3 = cVar3 + ' ';
                }
                iVar7 = (int) cVar4 - (int) cVar3;
                if ((int) cVar4 != (int) cVar3) break;
                if (cVar1 == '\0') {
                    return uVar10;
                }
                pcVar9 = pcVar9 + 1;
                pcVar8 = pcVar8 + 1;
            }
            if (-1 < iVar7) {
                if (iVar7 < 1) {
                    return uVar10;
                }
                uVar5 = uVar10 + 1;
                uVar10 = uVar6;
            }
            uVar6 = uVar10;
        } while (uVar5 < uVar10);
    }
    return uVar2;
}


ulonglong FUN_1401bf290(longlong param_1, char *param_2, ulonglong param_3) {
    char cVar1;
    char cVar2;
    char cVar3;
    ulonglong uVar4;
    char *pcVar5;
    char *pcVar6;
    ulonglong uVar7;
    ulonglong uVar8;

    uVar8 = *(ulonglong * )(param_1 + 0x10);
    uVar4 = 0;
    if (uVar8 != 0) {
        do {
            uVar7 = (uVar8 - uVar4 >> 1) + uVar4;
            if (param_3 != 0) {
                pcVar6 = *(char **) (*(longlong * )(param_1 + 8) + uVar7 * 0x10);
                pcVar5 = param_2;
                do {
                    cVar1 = *pcVar5;
                    cVar3 = cVar1;
                    if ((byte)(cVar1 + 0xbfU) < 0x1a) {
                        cVar3 = cVar1 + ' ';
                    }
                    cVar2 = *pcVar6;
                    if ((byte)(cVar2 + 0xbfU) < 0x1a) {
                        cVar2 = cVar2 + ' ';
                    }
                    if ((int) cVar3 != (int) cVar2) {
                        if (0 < (int) cVar3 - (int) cVar2) {
                            uVar4 = uVar7 + 1;
                            uVar7 = uVar8;
                        }
                        break;
                    }
                    if (cVar1 == '\0') break;
                    pcVar5 = pcVar5 + 1;
                    pcVar6 = pcVar6 + 1;
                } while ((ulonglong)((longlong) pcVar5 - (longlong) param_2) < param_3);
            }
            uVar8 = uVar7;
        } while (uVar4 < uVar7);
    }
    if ((uVar4 < *(ulonglong * )(param_1 + 0x10)) && (param_3 != 0)) {
        pcVar6 = *(char **) (uVar4 * 0x10 + *(longlong * )(param_1 + 8));
        pcVar5 = param_2;
        while (true) {
            cVar1 = *pcVar5;
            cVar3 = cVar1;
            if ((byte)(cVar1 + 0xbfU) < 0x1a) {
                cVar3 = cVar1 + ' ';
            }
            cVar2 = *pcVar6;
            if ((byte)(cVar2 + 0xbfU) < 0x1a) {
                cVar2 = cVar2 + ' ';
            }
            if ((int) cVar3 != (int) cVar2) break;
            if (cVar1 == '\0') {
                return uVar4;
            }
            pcVar5 = pcVar5 + 1;
            pcVar6 = pcVar6 + 1;
            if (param_3 <= (ulonglong)((longlong) pcVar5 - (longlong) param_2)) {
                return uVar4;
            }
        }
        if (0 < (int) cVar3 - (int) cVar2) {
            return uVar4 + 1;
        }
    }
    return uVar4;
}


ulonglong FUN_1401bf400(longlong param_1, char *param_2, ulonglong param_3) {
    char cVar1;
    char cVar2;
    char cVar3;
    ulonglong uVar4;
    char *pcVar5;
    char *pcVar6;
    ulonglong uVar7;
    ulonglong uVar8;

    uVar8 = *(ulonglong * )(param_1 + 0x20);
    uVar4 = 0;
    if (uVar8 != 0) {
        do {
            uVar7 = (uVar8 - uVar4 >> 1) + uVar4;
            if (param_3 != 0) {
                pcVar6 = *(char **) (uVar7 * 0x38 + *(longlong * )(param_1 + 0x18));
                pcVar5 = param_2;
                do {
                    cVar1 = *pcVar5;
                    cVar3 = cVar1;
                    if ((byte)(cVar1 + 0xbfU) < 0x1a) {
                        cVar3 = cVar1 + ' ';
                    }
                    cVar2 = *pcVar6;
                    if ((byte)(cVar2 + 0xbfU) < 0x1a) {
                        cVar2 = cVar2 + ' ';
                    }
                    if ((int) cVar3 != (int) cVar2) {
                        if (0 < (int) cVar3 - (int) cVar2) {
                            uVar4 = uVar7 + 1;
                            uVar7 = uVar8;
                        }
                        break;
                    }
                    if (cVar1 == '\0') break;
                    pcVar5 = pcVar5 + 1;
                    pcVar6 = pcVar6 + 1;
                } while ((ulonglong)((longlong) pcVar5 - (longlong) param_2) < param_3);
            }
            uVar8 = uVar7;
        } while (uVar4 < uVar7);
    }
    if ((uVar4 < *(ulonglong * )(param_1 + 0x20)) && (param_3 != 0)) {
        pcVar6 = *(char **) (uVar4 * 0x38 + *(longlong * )(param_1 + 0x18));
        pcVar5 = param_2;
        while (true) {
            cVar1 = *pcVar5;
            cVar3 = cVar1;
            if ((byte)(cVar1 + 0xbfU) < 0x1a) {
                cVar3 = cVar1 + ' ';
            }
            cVar2 = *pcVar6;
            if ((byte)(cVar2 + 0xbfU) < 0x1a) {
                cVar2 = cVar2 + ' ';
            }
            if ((int) cVar3 != (int) cVar2) break;
            if (cVar1 == '\0') {
                return uVar4;
            }
            pcVar5 = pcVar5 + 1;
            pcVar6 = pcVar6 + 1;
            if (param_3 <= (ulonglong)((longlong) pcVar5 - (longlong) param_2)) {
                return uVar4;
            }
        }
        if (0 < (int) cVar3 - (int) cVar2) {
            return uVar4 + 1;
        }
    }
    return uVar4;
}


void FUN_1401bf570(undefined8 *param_1) {
    longlong lVar1;

    *param_1 = &PTR_LAB_140b5f280;
    FUN_1401bff50();
    lVar1 = param_1[9];
    if (lVar1 != 0) {
        FUN_1401bce10(lVar1);
        FUN_14018b900(lVar1, 0);
    }
    lVar1 = param_1[10];
    if (lVar1 != 0) {
        FUN_140019490(lVar1);
        FUN_14018b900(*(undefined8 * )(lVar1 + 0x10), 0);
        *(undefined8 * )(lVar1 + 0x10) = 0;
        FUN_14018b900(lVar1, 0);
    }
    FUN_1401c0480(param_1 + 0xb);
    if ((longlong *) param_1[5] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[5] + 8))();
    }
    if (param_1[4] != 0) {
        CloseHandle((HANDLE) param_1[4]);
    }
    return;
}


undefined8 FUN_1401bf610(longlong param_1) {
    undefined4 uVar1;
    int iVar2;
    undefined4 *puVar3;
    undefined4 *puVar4;

    iVar2 = (**(code * *)(**(longlong * *)(param_1 + 0x28) + 0x78))();
    puVar4 = (undefined4 *) 0x0;
    if ((((iVar2 < 0) ||
          (iVar2 = (**(code * *)(**(longlong * *)(param_1 + 0x28) + 0x58))
                  (*(longlong * *)(param_1 + 0x28), *(undefined4 * )(param_1 + 0x34), 0,
                   param_1 + 0x38, 0x10), iVar2 < 0)) ||
         (*(int *) (param_1 + 0x38) != 0x41494458)) || (*(int *) (param_1 + 0x3c) != 1)) {
        *(undefined8 * )(param_1 + 0x38) = 0;
        *(undefined8 * )(param_1 + 0x40) = 0;
        *(undefined4 * )(param_1 + 0x38) = 0x41494458;
        *(undefined4 * )(param_1 + 0x3c) = 1;
        *(undefined4 * )(param_1 + 0x34) = 0;
    }
    puVar3 = (undefined4 *) FUN_14018b280();
    if (puVar3 != (undefined4 *) 0x0) {
        uVar1 = *(undefined4 * )(param_1 + 0x44);
        *(undefined8 * )(puVar3 + 2) = 0;
        *(undefined8 * )(puVar3 + 4) = 0;
        *(undefined8 * )(puVar3 + 6) = 0;
        *(undefined8 * )(puVar3 + 8) = 0;
        *(undefined8 * )(puVar3 + 10) = 0;
        *puVar3 = uVar1;
        *(undefined8 * )(puVar3 + 0xc) = 0;
        puVar4 = puVar3;
    }
    *(undefined4 * *)(param_1 + 0x48) = puVar4;
    FUN_1401bcea0(puVar4, param_1);
    return 0;
}


undefined8 FUN_1401bf6e0(longlong param_1) {
    undefined4 uVar1;
    bool bVar2;
    int iVar3;
    undefined4 *puVar4;
    undefined4 *puVar5;
    undefined8 uVar6;

    puVar5 = (undefined4 *) 0x0;
    bVar2 = false;
    iVar3 = (**(code * *)(**(longlong * *)(param_1 + 0x28) + 0x78))();
    if (-1 < iVar3) {
        iVar3 = (**(code * *)(**(longlong * *)(param_1 + 0x28) + 0x58))
                (*(longlong * *)(param_1 + 0x28), *(undefined4 * )(param_1 + 0x34), 0,
                 (int *) (param_1 + 0x38), 0x10);
        if (((-1 < iVar3) && (*(int *) (param_1 + 0x38) == 0x41494458)) &&
            (*(int *) (param_1 + 0x3c) == 1)) {
            bVar2 = true;
            goto LAB_1401bf76a;
        }
    }
    *(undefined8 * )(param_1 + 0x38) = 0;
    *(undefined8 * )(param_1 + 0x40) = 0;
    *(undefined4 * )(undefined8 * )(param_1 + 0x38) = 0x41494458;
    *(undefined4 * )(param_1 + 0x3c) = 1;
    *(undefined4 * )(param_1 + 0x34) = 0;
    LAB_1401bf76a:
    puVar4 = (undefined4 *) FUN_14018b280();
    if (puVar4 != (undefined4 *) 0x0) {
        uVar1 = *(undefined4 * )(param_1 + 0x44);
        *(undefined8 * )(puVar4 + 2) = 0;
        *(undefined8 * )(puVar4 + 4) = 0;
        *(undefined8 * )(puVar4 + 6) = 0;
        *(undefined8 * )(puVar4 + 8) = 0;
        *(undefined8 * )(puVar4 + 10) = 0;
        *puVar4 = uVar1;
        *(undefined8 * )(puVar4 + 0xc) = 0;
        puVar5 = puVar4;
    }
    *(undefined4 * *)(param_1 + 0x48) = puVar5;
    FUN_1401bcea0(puVar5, param_1);
    if (!bVar2) {
        FUN_1401bd1f0(*(undefined8 * )(param_1 + 0x48), param_1);
        *(undefined4 * )(param_1 + 0x44) = **(undefined4 * *)(param_1 + 0x48);
        uVar6 = (**(code * *)(**(longlong * *)(param_1 + 0x28) + 0x28))
                (*(longlong * *)(param_1 + 0x28), param_1 + 0x34, 0x10);
        if ((int) uVar6 < 0) {
            return uVar6;
        }
        uVar6 = (**(code * *)(**(longlong * *)(param_1 + 0x28) + 0x68))
                (*(longlong * *)(param_1 + 0x28), *(undefined4 * )(param_1 + 0x34), 0,
                 param_1 + 0x38, 0x10);
        if ((int) uVar6 < 0) {
            return uVar6;
        }
        uVar6 = (**(code * *)(**(longlong * *)(param_1 + 0x28) + 0x80))
                (*(longlong * *)(param_1 + 0x28), *(undefined4 * )(param_1 + 0x34));
        if ((int) uVar6 < 0) {
            return uVar6;
        }
    }
    return 0;
}


void FUN_1401bf8b0(longlong param_1, ushort *param_2, undefined8 *param_3) {
    ushort uVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    longlong lVar4;
    undefined auStack392[32];
    undefined8 *local_168;
    undefined8 local_160;
    undefined8 local_158;
    undefined8 local_150;
    undefined8 local_148;
    undefined8 local_140;
    undefined8 local_138;
    byte local_128[272];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack392;
    if ((((*(byte * )(param_1 + 0x30) & 2) != 0) && (param_2 != (ushort *) 0x0)) &&
        (*(int *) (param_1 + 0x40) == 0)) {
        lVar4 = -1;
        uVar2 = 0;
        do {
            uVar1 = *param_2;
            if (uVar1 < 0x80) {
                if (0x103 < uVar2) goto LAB_1401bfa97;
                uVar3 = uVar2 + 1;
                local_128[uVar2] = (byte) uVar1;
            } else if (uVar1 < 0x1000) {
                if (0x102 < uVar2) goto LAB_1401bfa97;
                local_128[uVar2] = (byte)(uVar1 >> 6) | 0xc0;
                uVar3 = uVar2 + 2;
                local_128[uVar2 + 1] = *(byte *) param_2 & 0x3f | 0x80;
            } else {
                if (0x101 < uVar2) goto LAB_1401bfa97;
                local_128[uVar2] = (byte)(uVar1 >> 0xc) | 0xe0;
                local_128[uVar2 + 1] = (byte)(uVar1 >> 6) & 0x3f | 0x80;
                uVar3 = uVar2 + 3;
                local_128[uVar2 + 2] = *(byte *) param_2 & 0x3f | 0x80;
            }
            if (uVar1 == 0) break;
            param_2 = param_2 + 1;
            lVar4 = lVar4 + -1;
            uVar2 = uVar3;
        } while (lVar4 != 0);
        lVar4 = 0;
        while (local_128[0] != 0) {
            local_128[0] = local_128[lVar4 + 1];
            lVar4 = lVar4 + 1;
        }
        local_168 = (undefined8 *) FUN_14018b280(lVar4 + 0x11, 0);
        if (local_168 != (undefined8 *) 0x0) {
            local_168[1] = lVar4;
            *local_168 = &PTR_LAB_140b55060;
        }
        local_168 = local_168 + 2;
        FUN_1407db590(local_168, local_128, lVar4);
        *(undefined * )(lVar4 + (longlong) local_168) = 0;
        local_160 = *param_3;
        local_158 = param_3[1];
        local_150 = param_3[2];
        local_148 = param_3[3];
        local_140 = param_3[4];
        local_138 = param_3[5];
        FUN_1401c04f0(param_1 + 0x58, &local_168);
        if (local_168 != (undefined8 *) 0x0) {
            (**(code * *)(local_168[-2] + 8))(local_168 + -2);
        }
    }
    LAB_1401bfa97:
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack392);
    return;
}


void FUN_1401bfac0(longlong *param_1, ushort *param_2, undefined8 param_3) {
    ushort uVar1;
    int iVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    longlong lVar5;
    undefined auStack328[32];
    byte local_128[272];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack328;
    if ((param_2 != (ushort *) 0x0) && (iVar2 = (**(code * *)(*param_1 + 0x40))(), -1 < iVar2)) {
        lVar5 = -1;
        uVar3 = 0;
        do {
            uVar1 = *param_2;
            if (uVar1 < 0x80) {
                if (0x103 < uVar3) goto LAB_1401bfbdc;
                local_128[uVar3] = (byte) uVar1;
                uVar4 = uVar3 + 1;
            } else if (uVar1 < 0x1000) {
                if (0x102 < uVar3) goto LAB_1401bfbdc;
                local_128[uVar3] = (byte)(uVar1 >> 6) | 0xc0;
                uVar4 = uVar3 + 2;
                local_128[uVar3 + 1] = *(byte *) param_2 & 0x3f | 0x80;
            } else {
                if (0x101 < uVar3) goto LAB_1401bfbdc;
                local_128[uVar3] = (byte)(uVar1 >> 0xc) | 0xe0;
                local_128[uVar3 + 1] = (byte)(uVar1 >> 6) & 0x3f | 0x80;
                uVar4 = uVar3 + 3;
                local_128[uVar3 + 2] = *(byte *) param_2 & 0x3f | 0x80;
            }
            if (uVar1 == 0) break;
            param_2 = param_2 + 1;
            lVar5 = lVar5 + -1;
            uVar3 = uVar4;
        } while (lVar5 != 0);
        FUN_1401be1f0(param_1[9], local_128, param_3);
    }
    LAB_1401bfbdc:
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack328);
    return;
}


void FUN_1401bfc10(longlong *param_1, ushort *param_2) {
    ushort uVar1;
    int iVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    longlong lVar5;
    undefined auStack328[32];
    byte local_128[272];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack328;
    if (((((*(byte * )(param_1 + 6) & 2) != 0) && (param_2 != (ushort *) 0x0)) &&
         (*(int *) (param_1 + 8) == 0)) && (iVar2 = (**(code * *)(*param_1 + 0x40))(), -1 < iVar2)) {
        lVar5 = -1;
        uVar3 = 0;
        do {
            uVar1 = *param_2;
            if (uVar1 < 0x80) {
                if (0x103 < uVar3) goto LAB_1401bfd40;
                local_128[uVar3] = (byte) uVar1;
                uVar4 = uVar3 + 1;
            } else if (uVar1 < 0x1000) {
                if (0x102 < uVar3) goto LAB_1401bfd40;
                local_128[uVar3] = (byte)(uVar1 >> 6) | 0xc0;
                uVar4 = uVar3 + 2;
                local_128[uVar3 + 1] = *(byte *) param_2 & 0x3f | 0x80;
            } else {
                if (0x101 < uVar3) goto LAB_1401bfd40;
                local_128[uVar3] = (byte)(uVar1 >> 0xc) | 0xe0;
                local_128[uVar3 + 1] = (byte)(uVar1 >> 6) & 0x3f | 0x80;
                uVar4 = uVar3 + 3;
                local_128[uVar3 + 2] = *(byte *) param_2 & 0x3f | 0x80;
            }
            if (uVar1 == 0) break;
            param_2 = param_2 + 1;
            lVar5 = lVar5 + -1;
            uVar3 = uVar4;
        } while (lVar5 != 0);
        FUN_1401be2c0(param_1[9], param_1, local_128);
    }
    LAB_1401bfd40:
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack328);
    return;
}


int FUN_1401bff50(longlong param_1) {
    longlong *plVar1;
    longlong lVar2;
    int iVar3;
    ulonglong uVar4;
    longlong lVar5;
    undefined8 local_38;
    longlong local_30;
    ulonglong local_28;
    ulonglong local_20;
    longlong local_18;

    lVar5 = *(longlong * )(param_1 + 0x60);
    if (lVar5 == 0) {
        return 1;
    }
    plVar1 = (longlong * )(param_1 + 0x58);
    local_38 = 0;
    local_30 = lVar5;
    FUN_1401d3110(&local_28, &LAB_1401c0360, &local_38, plVar1, 2);
    iVar3 = FUN_1401bd3c0(*(undefined8 * )(param_1 + 0x48), param_1, plVar1, &local_28, 0, lVar5);
    if (-1 < iVar3) {
        uVar4 = 0;
        if (*(longlong * )(param_1 + 0x60) != 0) {
            lVar5 = 0;
            do {
                lVar2 = *(longlong * )(lVar5 + *plVar1);
                if (lVar2 != 0) {
                    (**(code * *)(*(longlong * )(lVar2 + -0x10) + 8))(lVar2 + -0x10);
                }
                uVar4 = uVar4 + 1;
                lVar5 = lVar5 + 0x38;
            } while (uVar4 < *(ulonglong * )(param_1 + 0x60));
        }
        *(undefined8 * )(param_1 + 0x60) = 0;
        iVar3 = 0;
    }
    if (local_28 < local_20) {
        FUN_14018b900(local_18 + local_28 * 8, 0);
    }
    return iVar3;
}


void FUN_1401c0090(longlong param_1, ulonglong *param_2) {
    ulonglong **ppuVar1;
    undefined4 uVar2;
    longlong lVar3;
    longlong *plVar4;
    ulonglong *puVar5;
    int iVar6;
    int iVar7;
    ulonglong uVar8;
    ulonglong *puVar9;

    lVar3 = *(longlong * )(param_1 + 0x50);
    if (lVar3 != 0) {
        uVar8 = (**(code * *)(lVar3 + 0x18))(param_2);
        for (puVar9 = *(ulonglong * *)
                (*(longlong * )(lVar3 + 0x10) + (uVar8 % *(ulonglong * )(lVar3 + 8)) * 8);
             puVar9 != (ulonglong *) 0x0; puVar9 = (ulonglong *) puVar9[1]) {
            if ((uVar8 == *puVar9) && (iVar6 = (**(code * *)(lVar3 + 0x20))(param_2), iVar6 != 0)) {
                if ((int *) ((longlong) puVar9 + 0x24) != (int *) 0x0) {
                    lVar3 = *(longlong * )(param_1 + 0x50);
                    iVar6 = *(int *) ((longlong) puVar9 + 0x24);
                    uVar8 = (**(code * *)(lVar3 + 0x18))(param_2);
                    puVar9 = *(ulonglong * *)
                            (*(longlong * )(lVar3 + 0x10) + (uVar8 % *(ulonglong * )(lVar3 + 8)) * 8);
                    while (true) {
                        if (puVar9 == (ulonglong *) 0x0) {
                            return;
                        }
                        if ((uVar8 == *puVar9) &&
                            (iVar7 = (**(code * *)(lVar3 + 0x20))(param_2, puVar9 + 2), iVar7 != 0))
                            break;
                        puVar9 = (ulonglong *) puVar9[1];
                    }
                    if ((int *) ((longlong) puVar9 + 0x24) == (int *) 0x0) {
                        return;
                    }
                    *(int *) ((longlong) puVar9 + 0x24) = iVar6 + 1;
                    return;
                }
                break;
            }
        }
        plVar4 = *(longlong * *)(param_1 + 0x50);
        if (*plVar4 == plVar4[1]) {
            FUN_1400290d0(plVar4);
        }
        uVar8 = (*(code *) plVar4[3])(param_2);
        ppuVar1 = (ulonglong * *)(plVar4[2] + (uVar8 % (ulonglong) plVar4[1]) * 8);
        puVar9 = (ulonglong *) FUN_14018b280(0x28);
        if (puVar9 == (ulonglong *) 0x0) {
            *ppuVar1 = (ulonglong *) 0x0;
            *plVar4 = *plVar4 + 1;
        } else {
            puVar5 = *ppuVar1;
            *puVar9 = uVar8;
            puVar9[1] = (ulonglong) puVar5;
            puVar9[2] = *param_2;
            puVar9[3] = param_2[1];
            uVar2 = *(undefined4 * )(param_2 + 2);
            *(undefined4 * )((longlong) puVar9 + 0x24) = 1;
            *(undefined4 * )(puVar9 + 4) = uVar2;
            *ppuVar1 = puVar9;
            *plVar4 = *plVar4 + 1;
        }
    }
    return;
}


void FUN_1401c01e0(longlong param_1, undefined8 param_2) {
    longlong lVar1;
    ulonglong *puVar2;
    int iVar3;
    ulonglong uVar4;
    int local_res8[2];

    lVar1 = *(longlong * )(param_1 + 0x50);
    if (lVar1 != 0) {
        uVar4 = (**(code * *)(lVar1 + 0x18))(param_2);
        for (puVar2 = *(ulonglong * *)
                (*(longlong * )(lVar1 + 0x10) + (uVar4 % *(ulonglong * )(lVar1 + 8)) * 8);
             puVar2 != (ulonglong *) 0x0; puVar2 = (ulonglong *) puVar2[1]) {
            if ((uVar4 == *puVar2) &&
                (iVar3 = (**(code * *)(lVar1 + 0x20))(param_2, puVar2 + 2), iVar3 != 0)) {
                if ((int *) ((longlong) puVar2 + 0x24) == (int *) 0x0) {
                    return;
                }
                local_res8[0] = *(int *) ((longlong) puVar2 + 0x24) + -1;
                if (local_res8[0] != 0) {
                    FUN_1401c03f0(*(undefined8 * )(param_1 + 0x50), param_2, local_res8);
                    return;
                }
                FUN_1400b6120(*(undefined8 * )(param_1 + 0x50), param_2);
                return;
            }
        }
    }
    return;
}


undefined4 FUN_1401c0280(longlong param_1, undefined8 param_2) {
    ulonglong *puVar1;
    int iVar2;
    longlong lVar3;
    ulonglong uVar4;

    if (*(longlong * )(param_1 + 0x50) == 0) {
        lVar3 = FUN_14018b280(0x28);
        if (lVar3 != 0) {
            lVar3 = FUN_1401c0380(lVar3);
        }
        *(longlong * )(param_1 + 0x50) = lVar3;
        FUN_1401bef20(*(undefined8 * )(param_1 + 0x48));
    }
    lVar3 = *(longlong * )(param_1 + 0x50);
    uVar4 = (**(code * *)(lVar3 + 0x18))(param_2);
    puVar1 = *(ulonglong * *)(*(longlong * )(lVar3 + 0x10) + (uVar4 % *(ulonglong * )(lVar3 + 8)) * 8);
    while (true) {
        if (puVar1 == (ulonglong *) 0x0) {
            return 0;
        }
        if ((uVar4 == *puVar1) && (iVar2 = (**(code * *)(lVar3 + 0x20))(param_2, puVar1 + 2), iVar2 != 0))
            break;
        puVar1 = (ulonglong *) puVar1[1];
    }
    if ((undefined4 * )((longlong) puVar1 + 0x24) == (undefined4 *) 0x0) {
        return 0;
    }
    return *(undefined4 * )((longlong) puVar1 + 0x24);
}


undefined8 *FUN_1401c0380(undefined8 *param_1) {
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
    param_1[3] = &LAB_1400195e0;
    param_1[4] = &LAB_1401c0330;
    return param_1;
}


undefined8 FUN_1401c03f0(longlong param_1, undefined8 param_2, undefined4 *param_3) {
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;

    uVar3 = (**(code * *)(param_1 + 0x18))(param_2);
    puVar1 = *(ulonglong * *)
            (*(longlong * )(param_1 + 0x10) + (uVar3 % *(ulonglong * )(param_1 + 8)) * 8);
    while (true) {
        if (puVar1 == (ulonglong *) 0x0) {
            return 0;
        }
        if ((uVar3 == *puVar1) &&
            (iVar2 = (**(code * *)(param_1 + 0x20))(param_2, puVar1 + 2), iVar2 != 0))
            break;
        puVar1 = (ulonglong *) puVar1[1];
    }
    if ((undefined4 * )((longlong) puVar1 + 0x24) == (undefined4 *) 0x0) {
        return 0;
    }
    *(undefined4 * )((longlong) puVar1 + 0x24) = *param_3;
    return 1;
}


void FUN_1401c0480(longlong *param_1) {
    longlong lVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    uVar2 = 0;
    uVar3 = uVar2;
    if (param_1[1] != 0) {
        do {
            lVar1 = *(longlong * )(uVar3 + *param_1);
            if (lVar1 != 0) {
                (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
            }
            uVar2 = uVar2 + 1;
            uVar3 = uVar3 + 0x38;
        } while (uVar2 < (ulonglong) param_1[1]);
    }
    lVar1 = *param_1;
    if (lVar1 == 0) {
        return;
    }
    // WARNING: Could not recover jumptable at 0x0001401c04e7. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    return;
}


longlong FUN_1401c04f0(longlong *param_1, undefined8 param_2) {
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    lVar1 = param_1[1];
    lVar2 = FUN_14018db00(*param_1, lVar1 + 1, 0x38);
    lVar3 = lVar1 * 0x38 + lVar2;
    if (lVar3 != 0) {
        FUN_1401c05c0(lVar3, param_2);
    }
    if (*param_1 != lVar2) {
        uVar4 = 0;
        uVar5 = uVar4;
        if (param_1[1] != 0) {
            do {
                if (uVar4 + lVar2 != 0) {
                    FUN_1401c05c0(uVar4 + lVar2, *param_1 + uVar4);
                }
                lVar3 = *(longlong * )(uVar4 + *param_1);
                if (lVar3 != 0) {
                    (**(code * *)(*(longlong * )(lVar3 + -0x10) + 8))(lVar3 + -0x10);
                }
                uVar5 = uVar5 + 1;
                uVar4 = uVar4 + 0x38;
            } while (uVar5 < (ulonglong) param_1[1]);
        }
        lVar3 = *param_1;
        if (lVar3 != 0) {
            (**(code * *)(*(longlong * )(lVar3 + -0x10) + 8))(lVar3 + -0x10);
        }
        *param_1 = lVar2;
    }
    param_1[1] = lVar1 + 1;
    return lVar1;
}


longlong *FUN_1401c05c0(longlong *param_1, longlong *param_2) {
    longlong lVar1;
    undefined8 *puVar2;

    if (*param_2 == 0) {
        *param_1 = 0;
    } else {
        lVar1 = *(longlong * )(*param_2 + -8);
        puVar2 = (undefined8 *) FUN_14018b280(lVar1 + 0x11, 0);
        if (puVar2 != (undefined8 *) 0x0) {
            puVar2[1] = lVar1;
            *puVar2 = &PTR_LAB_140b55060;
        }
        puVar2 = puVar2 + 2;
        FUN_1407db590(puVar2, *param_2, lVar1);
        *(undefined * )((longlong) puVar2 + lVar1) = 0;
        *param_1 = (longlong) puVar2;
    }
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    param_1[6] = param_2[6];
    return param_1;
}


longlong *FUN_1401c0670(longlong *param_1, longlong *param_2) {
    longlong lVar1;
    undefined8 *puVar2;

    if (*param_2 == 0) {
        *param_1 = 0;
    } else {
        lVar1 = *(longlong * )(*param_2 + -8);
        puVar2 = (undefined8 *) FUN_14018b280(lVar1 + 0x11, 0);
        if (puVar2 != (undefined8 *) 0x0) {
            puVar2[1] = lVar1;
            *puVar2 = &PTR_LAB_140b55060;
        }
        puVar2 = puVar2 + 2;
        FUN_1407db590(puVar2, *param_2, lVar1);
        *(undefined * )((longlong) puVar2 + lVar1) = 0;
        *param_1 = (longlong) puVar2;
    }
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    return param_1;
}


DWORD FUN_1401c0780(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
    DWORD DVar1;
    longlong lVar2;

    DVar1 = FUN_1401c3640(param_1 + 8);
    if ((-1 < (int) DVar1) && (DVar1 = FUN_1401c37f0(param_1 + 0x78, param_2, 1), -1 < (int) DVar1)) {
        lVar2 = WinHttpConnect(*(undefined8 * )(param_1 + 0x78), *(undefined8 * )(param_1 + 0x28),
                               *(undefined2 * )(param_1 + 0x34), 0);
        *(longlong * )(param_1 + 0x80) = lVar2;
        if (lVar2 == 0) {
            DVar1 = GetLastError();
            if (0 < (int) DVar1) {
                DVar1 = DVar1 & 0xffff | 0x80070000;
            }
            if ((int) DVar1 < 0) {
                return DVar1;
            }
        } else {
            *(undefined8 * )(param_1 + 0x88) = param_4;
        }
        DVar1 = 0;
    }
    return DVar1;
}


ulonglong FUN_1401c0820(longlong param_1, short *param_2, short *param_3, undefined8 param_4,
                        longlong param_5) {
    short sVar1;
    short *psVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    uint uVar5;
    longlong lVar6;
    longlong lVar7;
    short *local_res8;
    short *local_res18;
    short *local_res20;
    ulonglong uVar8;
    undefined * puVar9;
    undefined * puVar10;

    uVar8 = *(ulonglong * )(param_1 + 0x58);
    puVar10 = &DAT_1409e2b7c;
    puVar9 = &DAT_1409e2bcc;
    local_res20 = (short *) 0x104;
    local_res8 = param_2;
    local_res18 = param_3;
    uVar3 = FUN_1401a3210(param_2, 0x104, &local_res8, &local_res20, 0, L"%s/%s%s", uVar8, &DAT_1409e2bcc,
                          &DAT_1409e2b7c);
    if (-1 < (int) uVar3) {
        local_res18 = local_res20;
        local_res20 = local_res8;
        uVar3 = 0;
        do {
            uVar8 = uVar8 & 0xffffffff00000000 | (ulonglong) * (byte * )(uVar3 + param_5);
            uVar4 = FUN_1401a3210(local_res20, local_res18, &local_res20, &local_res18, 0, L"%0.2x", uVar8,
                                  puVar9, puVar10);
            if ((int) uVar4 < 0) {
                return uVar4;
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < 0x14);
        uVar5 = 0;
        if (0x7ffffffe < (longlong) local_res18 - 1U) {
            uVar5 = 0x80070057;
        }
        if ((int) uVar5 < 0) {
            if (local_res18 != (short *) 0x0) {
                *local_res20 = 0;
            }
        } else if (local_res18 == (short *) 0x0) {
            LAB_1401c0988:
            local_res20 = local_res20 + -1;
            uVar5 = 0x8007007a;
            LAB_1401c0992:
            *local_res20 = 0;
        } else {
            lVar6 = 0x7ffffffe - (longlong) local_res18;
            lVar7 = (longlong) L".bin" - (longlong) local_res20;
            psVar2 = local_res20;
            do {
                local_res20 = psVar2;
                if ((lVar6 + (longlong) local_res18 == 0) ||
                    (sVar1 = *(short *) (lVar7 + (longlong) local_res20), sVar1 == 0)) {
                    uVar5 = 0;
                    if (local_res18 == (short *) 0x0) goto LAB_1401c0988;
                    goto LAB_1401c0992;
                }
                *local_res20 = sVar1;
                local_res18 = (short *) ((longlong) local_res18 + -1);
                psVar2 = local_res20 + 1;
            } while (local_res18 != (short *) 0x0);
            uVar5 = 0x8007007a;
            *local_res20 = 0;
        }
        uVar3 = 0;
        if ((int) uVar5 < 0) {
            uVar3 = (ulonglong) uVar5;
        }
    }
    return uVar3;
}


void FUN_1401c09d0(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 *param_4,
                   longlong *param_5) {
    int iVar1;
    longlong lVar2;
    undefined auStack632[32];
    undefined8 local_258;
    undefined8 local_248[2];
    undefined local_238[528];
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong) auStack632;
    local_258 = param_3;
    iVar1 = FUN_1401c0820(param_1, local_238);
    if ((-1 < iVar1) && (iVar1 = FUN_1401c39a0(param_1 + 0x80, local_238, local_248), -1 < iVar1)) {
        if (param_4 != (undefined8 *) 0x0) {
            *param_4 = local_248[0];
        }
        if (param_5 != (longlong *) 0x0) {
            lVar2 = FUN_14018b280(0x240, 0);
            if (lVar2 != 0) {
                local_258 = local_248[0];
                lVar2 = FUN_1401d44b0(lVar2, param_1 + 0x80, local_238, param_3);
            }
            *param_5 = lVar2;
        }
    }
    FUN_1407db4f0(local_28 ^ (ulonglong) auStack632);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4
FUN_1401c0aa0(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
    undefined4 uVar1;
    longlong lVar2;
    longlong local_18[2];

    if (_DAT_140c796cc == 0) {
        if ((uint)(DAT_140c636a8 - _DAT_140c785b0) < 0x7531) {
            FUN_1401c4fb0(0);
        } else {
            _DAT_140c796cc = 1;
        }
    }
    QueryPerformanceCounter(local_18);
    lVar2 = local_18[0] - _DAT_140c87988;
    uVar1 = FUN_1401c09d0(param_1);
    QueryPerformanceCounter(local_18);
    if (_DAT_140c796cc == 0) {
        if ((uint)(DAT_140c636a8 - _DAT_140c785b0) < 0x7531) {
            FUN_1401c5100(L"H CAssetArchive_HTTP", 0, (local_18[0] - _DAT_140c87988) - lVar2, 1, param_4);
        } else {
            _DAT_140c796cc = 1;
        }
    }
    return uVar1;
}


undefined8 FUN_1401c0ba0(undefined8 param_1, undefined8 *param_2) {
    undefined8 *puVar1;

    if (param_2 == (undefined8 *) 0x0) {
        return 0x80070057;
    }
    puVar1 = (undefined8 *) FUN_14018b280(0x20);
    if (puVar1 != (undefined8 *) 0x0) {
        *puVar1 = &PTR_LAB_140b5f348;
        puVar1[2] = 0;
        puVar1[1] = 0;
        *(undefined4 * )(puVar1 + 3) = 1;
        *param_2 = puVar1;
        return 0;
    }
    *param_2 = 0;
    return 0;
}


undefined8 FUN_1401c0c50(longlong param_1, longlong param_2, undefined8 param_3, undefined8 param_4) {
    short *psVar1;
    short sVar2;
    short *psVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    short *local_res8;

    psVar1 = (short *) (param_1 + 8);
    lVar5 = 0x104;
    iVar4 = 0;
    lVar6 = 0;
    psVar3 = psVar1;
    while ((lVar5 != -0x7ffffefa &&
            (sVar2 = *(short *) ((param_2 - (longlong) psVar1) + (longlong) psVar3), sVar2 != 0))) {
        *psVar3 = sVar2;
        psVar3 = psVar3 + 1;
        lVar6 = lVar6 + 1;
        lVar5 = lVar5 + -1;
        if (lVar5 == 0) {
            LAB_1401c0cad:
            psVar3 = psVar3 + -1;
            iVar4 = -0x7ff8ff86;
            lVar6 = lVar6 + -1;
            LAB_1401c0cb9:
            *psVar3 = 0;
            psVar3 = psVar1 + lVar6;
            if (((iVar4 + 0x80000000U & 0x80000000) == 0) && (iVar4 != -0x7ff8ff86)) {
                psVar3 = local_res8;
            }
            if ((psVar1 < psVar3) && (psVar3[-1] == 0x5c)) {
                psVar3[-1] = 0;
            }
            *(undefined8 * )(param_1 + 0x210) = param_4;
            return 0;
        }
    }
    if (lVar5 != 0) goto LAB_1401c0cb9;
    goto LAB_1401c0cad;
}


ulonglong FUN_1401c0d10(longlong param_1, short *param_2, undefined8 param_3, undefined8 param_4) {
    short sVar1;
    short *psVar2;
    ulonglong uVar3;
    uint uVar4;
    longlong lVar5;
    longlong lVar6;
    short *local_res10[3];
    longlong local_18[2];

    local_18[0] = 0x104;
    local_res10[0] = param_2;
    uVar3 = FUN_1401a3210(param_2, 0x104, local_res10, local_18, 0, &DAT_140a476b8, param_1 + 8);
    if ((-1 < (int) uVar3) &&
        (uVar3 = FUN_1401c9010(local_res10[0], local_18[0], local_res10, local_18, param_4),
                -1 < (int) uVar3)) {
        uVar4 = 0;
        if (0x7ffffffe < local_18[0] - 1U) {
            uVar4 = 0x80070057;
        }
        if ((int) uVar4 < 0) {
            if (local_18[0] != 0) {
                *local_res10[0] = 0;
            }
        } else if (local_18[0] == 0) {
            LAB_1401c0dfa:
            local_res10[0] = local_res10[0] + -1;
            uVar4 = 0x8007007a;
            LAB_1401c0e04:
            *local_res10[0] = 0;
        } else {
            lVar5 = 0x7ffffffe - local_18[0];
            lVar6 = (longlong) L".bin" - (longlong) local_res10[0];
            psVar2 = local_res10[0];
            do {
                local_res10[0] = psVar2;
                if ((lVar5 + local_18[0] == 0) ||
                    (sVar1 = *(short *) (lVar6 + (longlong) local_res10[0]), sVar1 == 0)) {
                    uVar4 = 0;
                    if (local_18[0] != 0) goto LAB_1401c0e04;
                    goto LAB_1401c0dfa;
                }
                *local_res10[0] = sVar1;
                local_18[0] = local_18[0] + -1;
                psVar2 = local_res10[0] + 1;
            } while (local_18[0] != 0);
            uVar4 = 0x8007007a;
            *local_res10[0] = 0;
        }
        uVar3 = 0;
        if ((int) uVar4 < 0) {
            uVar3 = (ulonglong) uVar4;
        }
    }
    return uVar3;
}


int FUN_1401c0e30(longlong param_1, longlong *param_2, undefined8 param_3, longlong **param_4) {
    undefined4 uVar1;
    int iVar2;
    longlong *plVar3;

    plVar3 = (longlong *) FUN_14018b280(0x48);
    if (plVar3 == (longlong *) 0x0) {
        plVar3 = (longlong *) 0x0;
    } else {
        *plVar3 = (longlong) & PTR_LAB_140b5fd10;
        *(undefined4 * )((longlong) plVar3 + 0x44) = 1;
        plVar3[1] = param_1;
        plVar3[2] = *param_2;
        plVar3[3] = param_2[1];
        uVar1 = *(undefined4 * )(param_2 + 2);
        plVar3[5] = 0;
        plVar3[6] = -1;
        *(undefined4 * )(plVar3 + 8) = 0;
        *(undefined4 * )(plVar3 + 4) = uVar1;
    }
    iVar2 = FUN_1401d47d0(plVar3, param_3);
    if (iVar2 < 0) {
        (**(code * *)(*plVar3 + 8))(plVar3);
    } else {
        if (param_4 == (longlong **) 0x0) {
            (**(code * *)(*plVar3 + 8))(plVar3);
        } else {
            *param_4 = plVar3;
        }
        iVar2 = 0;
    }
    return iVar2;
}


undefined8 *FUN_1401c1300(undefined8 *param_1) {
    undefined * puVar1;

    *param_1 = &PTR_LAB_140b5f3f0;
    param_1[1] = 0;
    param_1[3] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    puVar1 = (undefined * )
    FUN_14018b280(0x38, 0);
    param_1[0xf] = 0;
    param_1[0xe] = puVar1;
    *puVar1 = 0;
    *(undefined8 * )(param_1[0xe] + 8) = 0;
    *(undefined8 * )(param_1[0xe] + 0x10) = param_1[0xe];
    *(undefined8 * )(param_1[0xe] + 0x18) = param_1[0xe];
    *(undefined4 * )(param_1 + 0x11) = 1;
    return param_1;
}


void FUN_1401c1390(undefined8 *param_1) {
    longlong lVar1;

    *param_1 = &PTR_LAB_140b5f3f0;
    FUN_140008410();
    FUN_14018b900(param_1[0xe], 0);
    if ((longlong *) param_1[0xc] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0xc] + 8))();
    }
    lVar1 = param_1[0xb];
    if (lVar1 != 0) {
        (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = param_1[9];
    if (lVar1 != 0) {
        (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = param_1[7];
    if (lVar1 != 0) {
        (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = param_1[3];
    if (lVar1 != 0) {
        (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    if ((longlong *) param_1[1] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[1] + 8))();
    }
    return;
}


undefined8 FUN_1401c1440(longlong param_1, short *param_2, undefined8 param_3, undefined8 param_4) {
    short sVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    int iVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    undefined8 *puVar9;
    undefined8 uVar10;
    undefined8 *puVar11;

    puVar9 = (undefined8 *) 0x0;
    *(undefined4 * )(param_1 + 0x10) = 1;
    lVar2 = *(longlong * )(param_1 + 0x18);
    if (param_2 == (short *) 0x0) {
        *(undefined8 * )(param_1 + 0x18) = 0;
    } else {
        sVar1 = *param_2;
        puVar11 = puVar9;
        while (sVar1 != 0) {
            puVar11 = (undefined8 * )((longlong) puVar11 + 1);
            sVar1 = param_2[(longlong) puVar11];
        }
        puVar7 = (undefined8 *) FUN_14018b280((longlong) puVar11 * 2 + 0x12, 0);
        puVar8 = puVar9;
        if (puVar7 != (undefined8 *) 0x0) {
            *puVar7 = &PTR_LAB_140b55060;
            puVar7[1] = puVar11;
            puVar8 = puVar7;
        }
        puVar8 = puVar8 + 2;
        FUN_1407db590(puVar8, param_2, (longlong) puVar11 * 2);
        *(undefined2 * )((longlong) puVar11 * 2 + (longlong) puVar8) = 0;
        *(undefined8 * *)(param_1 + 0x18) = puVar8;
    }
    puVar11 = puVar9;
    if (lVar2 != 0) {
        (**(code * *)(*(longlong * )(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    do {
        lVar2 = (longlong) puVar11 + 1;
        puVar11 = (undefined8 * )((longlong) puVar11 + 1);
    } while (L":Corrupt"[lVar2] != L'\0');
    lVar3 = *(longlong * )(param_1 + 0x18);
    lVar4 = *(longlong * )(param_1 + 0x58);
    lVar5 = *(longlong * )(lVar3 + -8);
    lVar2 = lVar5 + (longlong) puVar11;
    puVar8 = (undefined8 *) FUN_14018b280(lVar2 * 2 + 0x12, 0);
    if (puVar8 != (undefined8 *) 0x0) {
        *puVar8 = &PTR_LAB_140b55060;
        puVar8[1] = lVar2;
        puVar9 = puVar8;
    }
    puVar9 = puVar9 + 2;
    lVar5 = lVar5 * 2;
    FUN_1407db590(puVar9, lVar3, lVar5);
    FUN_1407db590(lVar5 + (longlong) puVar9, L":Corrupt", (longlong) puVar11 * 2);
    *(undefined2 * )((longlong) puVar9 + lVar2 * 2) = 0;
    *(undefined8 * *)(param_1 + 0x58) = puVar9;
    if (lVar4 != 0) {
        (**(code * *)(*(longlong * )(lVar4 + -0x10) + 8))(lVar4 + -0x10);
    }
    uVar10 = FUN_14018d720(param_2, *(undefined4 * )(param_1 + 0x10), param_4, param_1 + 8, 0);
    if ((-1 < (int) uVar10) &&
        (uVar10 = FUN_1401a11d0(param_1 + 0x60, *(undefined8 * )(param_1 + 0x58)), -1 < (int) uVar10)) {
        if ((*(byte * )(param_1 + 0x10) & 2) == 0) {
            uVar10 = FUN_1401c1600(param_1);
            iVar6 = (int) uVar10;
        } else {
            uVar10 = FUN_1401c17e0();
            iVar6 = (int) uVar10;
        }
        if (-1 < iVar6) {
            uVar10 = 0;
        }
    }
    return uVar10;
}


void FUN_1401c1600(longlong *param_1) {
    int iVar1;
    ulonglong uVar2;
    undefined auStack120[32];
    longlong local_58;
    int local_48;
    int local_44;
    undefined local_40[8];
    undefined4 local_38;
    undefined4 local_34;
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong) auStack120;
    iVar1 = (**(code * *)(*(longlong *) param_1[1] + 0x78))((longlong *) param_1[1], param_1 + 4);
    uVar2 = 0;
    if (-1 < iVar1) {
        local_58 = 4;
        iVar1 = (**(code * *)(*(longlong *) param_1[1] + 0x58))
                ((longlong *) param_1[1], *(undefined4 * )(param_1 + 4), 0, &local_44);
        if (-1 < iVar1) {
            local_58 = 4;
            iVar1 = (**(code * *)(*(longlong *) param_1[1] + 0x58))
                    ((longlong *) param_1[1], *(undefined4 * )(param_1 + 4), 4, &local_48);
            if ((-1 < iVar1) && (local_44 == 0x41415243)) {
                if (local_48 == 2) {
                    local_58 = 0x10;
                    iVar1 = (**(code * *)(*(longlong *) param_1[1] + 0x58))
                            ((longlong *) param_1[1], *(undefined4 * )(param_1 + 4), 0,
                             (longlong) param_1 + 0x24);
                    if (-1 < iVar1) {
                        LAB_1401c1733:
                        if (*(int *) ((longlong) param_1 + 0x2c) != 0) {
                            FUN_1401c2df0(param_1 + 7, *(int *) ((longlong) param_1 + 0x2c));
                            local_58 = param_1[8] << 5;
                            iVar1 = (**(code * *)(*(longlong *) param_1[1] + 0x58))
                                    ((longlong *) param_1[1], *(undefined4 * )(param_1 + 6), 0, param_1[7]);
                            if (iVar1 < 0) {
                                param_1[8] = 0;
                                goto LAB_1401c16b1;
                            }
                            FUN_140052360(param_1 + 9, param_1[8]);
                            if (param_1[10] != 0) {
                                do {
                                    *(int *) (param_1[9] + uVar2 * 4) = (int) uVar2;
                                    uVar2 = uVar2 + 1;
                                } while (uVar2 < (ulonglong) param_1[10]);
                            }
                            FUN_1401c3280(&LAB_1401c2dc0, param_1[9], param_1[10], param_1[7]);
                        }
                        FUN_1401c1a60(param_1);
                        goto LAB_1401c16cc;
                    }
                } else if (local_48 == 1) {
                    local_58 = 0x18;
                    iVar1 = (**(code * *)(*(longlong *) param_1[1] + 0x58))
                            ((longlong *) param_1[1], *(undefined4 * )(param_1 + 4), 0, local_40);
                    if (-1 < iVar1) {
                        *(undefined4 * )((longlong) param_1 + 0x24) = 0x41415243;
                        *(undefined4 * )(param_1 + 5) = 2;
                        *(undefined4 * )((longlong) param_1 + 0x2c) = local_38;
                        *(undefined4 * )(param_1 + 6) = local_34;
                        goto LAB_1401c1733;
                    }
                }
            }
        }
    }
    LAB_1401c16b1:
    *(undefined4 * )((longlong) param_1 + 0x24) = 0x41415243;
    param_1[5] = 2;
    *(undefined4 * )(param_1 + 6) = 0;
    (**(code * *)(*param_1 + 0x48))(param_1);
    LAB_1401c16cc:
    *(undefined4 * )(param_1 + 4) = 0;
    FUN_1407db4f0(local_28 ^ (ulonglong) auStack120);
    return;
}


void FUN_1401c17e0(longlong *param_1) {
    int iVar1;
    ulonglong uVar2;
    undefined auStack104[32];
    longlong local_48;
    int local_38;
    int local_34;
    undefined local_30[8];
    undefined4 local_28;
    undefined4 local_24;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack104;
    iVar1 = (**(code * *)(*(longlong *) param_1[1] + 0x78))((longlong *) param_1[1], param_1 + 4);
    uVar2 = 0;
    if (-1 < iVar1) {
        local_48 = 4;
        iVar1 = (**(code * *)(*(longlong *) param_1[1] + 0x58))
                ((longlong *) param_1[1], *(undefined4 * )(param_1 + 4), 0, &local_34);
        if (-1 < iVar1) {
            local_48 = 4;
            iVar1 = (**(code * *)(*(longlong *) param_1[1] + 0x58))
                    ((longlong *) param_1[1], *(undefined4 * )(param_1 + 4), 4, &local_38);
            if ((-1 < iVar1) && (local_34 == 0x41415243)) {
                if (local_38 == 2) {
                    local_48 = 0x10;
                    iVar1 = (**(code * *)(*(longlong *) param_1[1] + 0x58))
                            ((longlong *) param_1[1], *(undefined4 * )(param_1 + 4), 0,
                             (longlong) param_1 + 0x24);
                    LAB_1401c1925:
                    if (-1 < iVar1) {
                        if (*(int *) ((longlong) param_1 + 0x2c) != 0) {
                            FUN_1401c2df0(param_1 + 7, *(int *) ((longlong) param_1 + 0x2c));
                            local_48 = param_1[8] << 5;
                            iVar1 = (**(code * *)(*(longlong *) param_1[1] + 0x58))
                                    ((longlong *) param_1[1], *(undefined4 * )(param_1 + 6), 0, param_1[7]);
                            if (iVar1 < 0) {
                                param_1[8] = 0;
                                goto LAB_1401c196d;
                            }
                            FUN_140052360(param_1 + 9, param_1[8]);
                            if (param_1[10] != 0) {
                                do {
                                    *(int *) (param_1[9] + uVar2 * 4) = (int) uVar2;
                                    uVar2 = uVar2 + 1;
                                } while (uVar2 < (ulonglong) param_1[10]);
                            }
                            FUN_1401c3280(&LAB_1401c2dc0, param_1[9], param_1[10], param_1[7]);
                        }
                        FUN_1401c1a60(param_1);
                        goto LAB_1401c19e8;
                    }
                } else if (local_38 == 1) {
                    local_48 = 0x18;
                    iVar1 = (**(code * *)(*(longlong *) param_1[1] + 0x58))
                            ((longlong *) param_1[1], *(undefined4 * )(param_1 + 4), 0, local_30);
                    if (-1 < iVar1) {
                        *(undefined4 * )((longlong) param_1 + 0x24) = 0x41415243;
                        *(undefined4 * )((longlong) param_1 + 0x2c) = local_28;
                        *(undefined4 * )(param_1 + 5) = 2;
                        *(undefined4 * )(param_1 + 6) = local_24;
                        iVar1 = (**(code * *)(*(longlong *) param_1[1] + 0x30))
                                ((longlong *) param_1[1], param_1 + 4, 0x10);
                        if (-1 < iVar1) {
                            local_48 = 0x10;
                            iVar1 = (**(code * *)(*(longlong *) param_1[1] + 0x68))
                                    ((longlong *) param_1[1], *(undefined4 * )(param_1 + 4), 0,
                                     (longlong) param_1 + 0x24);
                            goto LAB_1401c1925;
                        }
                    }
                }
            }
        }
    }
    LAB_1401c196d:
    *(undefined4 * )((longlong) param_1 + 0x24) = 0x41415243;
    param_1[5] = 2;
    *(undefined4 * )(param_1 + 6) = 0;
    iVar1 = (**(code * *)(*(longlong *) param_1[1] + 0xa0))();
    if ((-1 < iVar1) &&
        (iVar1 = (**(code * *)(*(longlong *) param_1[1] + 0x28))((longlong *) param_1[1], param_1 + 4, 0x10)
                , -1 < iVar1)) {
        local_48 = 0x10;
        iVar1 = (**(code * *)(*(longlong *) param_1[1] + 0x68))
                ((longlong *) param_1[1], *(undefined4 * )(param_1 + 4), 0,
                 (longlong) param_1 + 0x24);
        if ((-1 < iVar1) &&
            (iVar1 = (**(code * *)(*(longlong *) param_1[1] + 0x80))
                    ((longlong *) param_1[1], *(undefined4 * )(param_1 + 4)), -1 < iVar1)) {
            (**(code * *)(*param_1 + 0x48))(param_1);
        }
    }
    LAB_1401c19e8:
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack104);
    return;
}


void FUN_1401c1a60(longlong param_1) {
    int iVar1;
    HANDLE hFile;
    undefined auStackY136[32];
    DWORD local_48[2];
    undefined local_40[16];
    undefined local_30[24];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStackY136;
    iVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x60) + 0x10))
            (*(longlong * *)(param_1 + 0x60), 0xffffffff);
    if (iVar1 != 0) {
        hFile = CreateFileW(*(LPCWSTR * )(param_1 + 0x58), 0x80000000, 1, (LPSECURITY_ATTRIBUTES) 0x0, 3, 0x80,
                            (HANDLE) 0x0);
        if (hFile != (HANDLE) 0xffffffffffffffff) {
            iVar1 = ReadFile(hFile, local_30, 0x14, local_48, (LPOVERLAPPED) 0x0);
            while ((iVar1 != 0 && (local_48[0] == 0x14))) {
                FUN_1401c3020(param_1 + 0x68, local_40, local_30);
                iVar1 = ReadFile(hFile, local_30, 0x14, local_48, (LPOVERLAPPED) 0x0);
            }
            CloseHandle(hFile);
        }
        (**(code * *)(**(longlong * *)(param_1 + 0x60) + 0x20))();
    }
    FUN_1407db4f0(local_18 ^ (ulonglong) auStackY136);
    return;
}


undefined8
FUN_1401c1ea0(longlong param_1, undefined8 param_2, undefined8 *param_3, undefined8 *param_4) {
    longlong lVar1;
    int iVar2;
    undefined8 *puVar3;
    longlong lVar4;
    uint uVar5;
    undefined8 *puVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    uint uVar9;

    uVar8 = *(ulonglong * )(param_1 + 0x50);
    uVar9 = 0;
    if ((int) uVar8 != 0) {
        lVar4 = *(longlong * )(param_1 + 0x48);
        lVar1 = *(longlong * )(param_1 + 0x38);
        do {
            uVar5 = ((int) uVar8 - uVar9 >> 1) + uVar9;
            uVar7 = (ulonglong) * (uint * )(lVar4 + (ulonglong) uVar5 * 4);
            iVar2 = FUN_1407e6af0(param_2, uVar7 * 0x20 + 4 + lVar1, 0x14);
            if (iVar2 < 0) {
                uVar8 = (ulonglong) uVar5;
            } else {
                if (iVar2 < 1) {
                    puVar6 = (undefined8 * )(uVar7 * 0x20 + lVar1);
                    if (param_3 != (undefined8 *) 0x0) {
                        *param_3 = puVar6[3];
                    }
                    if (param_4 != (undefined8 *) 0x0) {
                        puVar3 = (undefined8 *) FUN_14018b280(0x38);
                        if (puVar3 != (undefined8 *) 0x0) {
                            *puVar3 = &PTR_LAB_140b5fd60;
                            *(undefined4 * )(puVar3 + 6) = 1;
                            puVar3[1] = param_1;
                            puVar3[2] = *puVar6;
                            puVar3[3] = puVar6[1];
                            puVar3[4] = puVar6[2];
                            puVar3[5] = puVar6[3];
                            *param_4 = puVar3;
                            return 0;
                        }
                        *param_4 = 0;
                    }
                    return 0;
                }
                uVar9 = uVar5 + 1;
            }
            lVar4 = *(longlong * )(param_1 + 0x48);
        } while (uVar9 < (uint) uVar8);
    }
    return 0x80070490;
}


int FUN_1401c1fc0(longlong param_1, undefined8 param_2, undefined8 param_3) {
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    ulonglong uVar7;

    uVar5 = *(uint * )(param_1 + 0x50);
    uVar6 = 0;
    if (uVar5 != 0) {
        lVar1 = *(longlong * )(param_1 + 0x48);
        lVar2 = *(longlong * )(param_1 + 0x38);
        do {
            uVar4 = (uVar5 - uVar6 >> 1) + uVar6;
            uVar7 = (ulonglong) * (uint * )(lVar1 + (ulonglong) uVar4 * 4);
            iVar3 = FUN_1407e6af0(param_2, lVar2 + 4 + uVar7 * 0x20, 0x14);
            if (-1 < iVar3) {
                if (iVar3 < 1) {
                    iVar3 = (**(code * *)(**(longlong * *)(param_1 + 8) + 0x48))
                            (*(longlong * *)(param_1 + 8), *(undefined4 * )(uVar7 * 0x20 + lVar2),
                             param_3);
                    if (-1 < iVar3) {
                        return 0;
                    }
                    return iVar3;
                }
                uVar6 = uVar4 + 1;
                uVar4 = uVar5;
            }
            uVar5 = uVar4;
        } while (uVar6 < uVar5);
    }
    return -0x7ff8fb70;
}


undefined8 FUN_1401c2350(longlong param_1, undefined8 *param_2) {
    undefined8 *puVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;

    if (param_2 != (undefined8 *) 0x0) {
        puVar1 = (undefined8 *) FUN_14018b280(0x20);
        puVar2 = (undefined8 *) 0x0;
        puVar3 = puVar2;
        if (puVar1 != (undefined8 *) 0x0) {
            *puVar1 = &PTR_LAB_140b5f348;
            puVar1[2] = 0;
            puVar1[1] = 0;
            *(undefined4 * )(puVar1 + 3) = 1;
            puVar3 = puVar1;
        }
        FUN_1401c3160(puVar3 + 1, *(undefined8 * )(param_1 + 0x50));
        if (*(longlong * )(param_1 + 0x50) != 0) {
            do {
                FUN_1401c31d0(puVar3 + 1,
                              *(longlong * )(param_1 + 0x38) + 4 +
                              (ulonglong) * (uint * )(*(longlong * )(param_1 + 0x48) + (longlong) puVar2 * 4) *
                              0x20);
                puVar2 = (undefined8 * )((longlong) puVar2 + 1);
            } while (puVar2 < *(undefined8 * *)(param_1 + 0x50));
        }
        *param_2 = puVar3;
        return 0;
    }
    return 0x80070057;
}


undefined8 FUN_1401c2420(longlong param_1, LPCVOID param_2) {
    int iVar1;
    BOOL BVar2;
    HANDLE hFile;
    DWORD local_res8[2];
    ulonglong local_res18;
    undefined local_18[8];
    char local_10;

    iVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x60) + 0x18))
            (*(longlong * *)(param_1 + 0x60), 0xffffffff);
    if (iVar1 != 0) {
        FUN_1401c3020(param_1 + 0x68, local_18, param_2);
        if ((local_10 != '\0') &&
            (hFile = CreateFileW(*(LPCWSTR * )(param_1 + 0x58), 0xc0000000, 0, (LPSECURITY_ATTRIBUTES) 0x0, 4,
                                 0x80, (HANDLE) 0x0), hFile != (HANDLE) 0xffffffffffffffff)) {
            GetFileSizeEx(hFile, &local_res18);
            local_res18 = (local_res18 / 0x14) * 0x14;
            BVar2 = SetFilePointerEx(hFile, local_res18, (PLARGE_INTEGER) 0x0, 0);
            if (BVar2 != 0) {
                WriteFile(hFile, param_2, 0x14, local_res8, (LPOVERLAPPED) 0x0);
            }
            CloseHandle(hFile);
        }
        (**(code * *)(**(longlong * *)(param_1 + 0x60) + 0x20))();
    }
    return 0;
}


undefined8 FUN_1401c2530(longlong param_1, undefined8 *param_2) {
    longlong lVar1;
    int iVar2;
    undefined8 *puVar3;
    longlong lVar4;
    longlong lVar5;

    if (param_2 == (undefined8 *) 0x0) {
        return 0x80070057;
    }
    puVar3 = (undefined8 *) FUN_14018b280(0x20);
    if (puVar3 == (undefined8 *) 0x0) {
        puVar3 = (undefined8 *) 0x0;
    } else {
        *puVar3 = &PTR_LAB_140b5f348;
        puVar3[2] = 0;
        puVar3[1] = 0;
        *(undefined4 * )(puVar3 + 3) = 1;
    }
    iVar2 = (**(code * *)(**(longlong * *)(param_1 + 0x60) + 0x10))
            (*(longlong * *)(param_1 + 0x60), 0xffffffff);
    if (iVar2 != 0) {
        FUN_1401c3160(puVar3 + 1, *(undefined8 * )(param_1 + 0x78));
        lVar5 = *(longlong * )(*(longlong * )(param_1 + 0x70) + 0x10);
        if (lVar5 != *(longlong * )(param_1 + 0x70)) {
            do {
                FUN_1401c31d0(puVar3 + 1, lVar5 + 0x20);
                lVar4 = *(longlong * )(lVar5 + 0x18);
                if (lVar4 == 0) {
                    lVar4 = *(longlong * )(lVar5 + 8);
                    if (lVar5 == *(longlong * )(lVar4 + 0x18)) {
                        do {
                            lVar5 = lVar4;
                            lVar4 = *(longlong * )(lVar5 + 8);
                        } while (lVar5 == *(longlong * )(lVar4 + 0x18));
                    }
                    if (*(longlong * )(lVar5 + 0x18) != lVar4) {
                        lVar5 = lVar4;
                    }
                } else {
                    for (lVar1 = *(longlong * )(lVar4 + 0x10); lVar5 = lVar4, lVar1 != 0;
                         lVar1 = *(longlong * )(lVar1 + 0x10)) {
                        lVar4 = lVar1;
                    }
                }
            } while (lVar5 != *(longlong * )(param_1 + 0x70));
        }
        (**(code * *)(**(longlong * *)(param_1 + 0x60) + 0x20))();
    }
    *param_2 = puVar3;
    return 0;
}


undefined8 FUN_1401c2660(longlong param_1) {
    int iVar1;

    iVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x60) + 0x18))
            (*(longlong * *)(param_1 + 0x60), 0xffffffff);
    if (iVar1 != 0) {
        DeleteFileW(*(LPCWSTR * )(param_1 + 0x58));
        FUN_140008410(param_1 + 0x68);
        (**(code * *)(**(longlong * *)(param_1 + 0x60) + 0x20))();
    }
    return 0;
}


ulonglong FUN_1401c26b0(longlong param_1) {
    int iVar1;
    uint uVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    uint uVar5;
    ulonglong uVar6;
    undefined8 *puVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    longlong lVar12;
    ulonglong uVar13;
    uint local_res8;
    longlong local_res10;
    longlong local_res18;
    ulonglong local_res20;

    uVar3 = (**(code * *)(**(longlong * *)(param_1 + 8) + 0x90))();
    if (-1 < (int) uVar3) {
        uVar6 = 0;
        local_res8 = 0;
        uVar9 = uVar6;
        uVar11 = uVar6;
        uVar13 = uVar6;
        uVar2 = 0;
        if (*(longlong * )(param_1 + 0x40) != 0) {
            local_res10 = 0;
            uVar3 = uVar6;
            uVar8 = uVar6;
            uVar10 = uVar6;
            do {
                puVar7 = (undefined8 * )(*(longlong * )(param_1 + 0x38) + local_res10);
                iVar1 = (**(code * *)(**(longlong * *)(param_1 + 8) + 0x40))
                        (*(longlong * *)(param_1 + 8), *(undefined4 *) puVar7, &local_res18);
                uVar6 = uVar3;
                uVar9 = uVar8;
                if ((-1 < iVar1) && (puVar7[3] == local_res18)) {
                    local_res20 = uVar13 + 1;
                    uVar4 = FUN_14018db00(uVar3, local_res20, 0x20);
                    lVar12 = uVar13 * 0x20;
                    *(undefined8 * )(lVar12 + uVar4) = *puVar7;
                    *(undefined8 * )(lVar12 + 8 + uVar4) = puVar7[1];
                    *(undefined8 * )(lVar12 + 0x10 + uVar4) = puVar7[2];
                    *(undefined8 * )(lVar12 + 0x18 + uVar4) = puVar7[3];
                    if ((uVar3 != uVar4) && (FUN_1407db590(uVar4, uVar3, lVar12), uVar6 = uVar4, uVar3 != 0)) {
                        (**(code * *)(*(longlong * )(uVar3 - 0x10) + 8))(uVar3 - 0x10);
                    }
                    uVar13 = local_res20;
                    uVar2 = local_res8 + 1;
                    local_res20 = uVar11 + 1;
                    uVar3 = FUN_14018db00(uVar8, local_res20, 4);
                    *(uint * )(uVar11 * 4 + uVar3) = local_res8;
                    uVar11 = local_res20;
                    local_res8 = uVar2;
                    if ((uVar8 != uVar3) &&
                        (FUN_1407db590(uVar3), uVar9 = uVar3, uVar11 = local_res20, uVar8 != 0)) {
                        (**(code * *)(*(longlong * )(uVar8 - 0x10) + 8))(uVar8 - 0x10);
                        uVar11 = local_res20;
                    }
                }
                uVar10 = uVar10 + 1;
                local_res10 = local_res10 + 0x20;
                uVar3 = uVar6;
                uVar8 = uVar9;
                uVar2 = local_res8;
            } while (uVar10 < *(ulonglong * )(param_1 + 0x40));
        }
        uVar3 = 0;
        FUN_1401c3280(&LAB_1401c2dc0, uVar9, uVar11, uVar6);
        lVar12 = *(longlong * )(param_1 + 0x38);
        if (lVar12 != 0) {
            (**(code * *)(*(longlong * )(lVar12 + -0x10) + 8))(lVar12 + -0x10);
        }
        *(ulonglong * )(param_1 + 0x38) = uVar6;
        *(ulonglong * )(param_1 + 0x40) = uVar13;
        lVar12 = *(longlong * )(param_1 + 0x48);
        if (lVar12 != 0) {
            (**(code * *)(*(longlong * )(lVar12 + -0x10) + 8))(lVar12 + -0x10);
        }
        *(ulonglong * )(param_1 + 0x48) = uVar9;
        *(ulonglong * )(param_1 + 0x50) = uVar11;
        *(uint * )(param_1 + 0x2c) = uVar2;
        uVar5 = uVar2 - 1 >> 0x10 | uVar2 - 1;
        uVar5 = uVar5 >> 8 | uVar5;
        uVar5 = uVar5 >> 4 | uVar5;
        uVar5 = uVar5 >> 2 | uVar5;
        uVar5 = (**(code * *)(**(longlong * *)(param_1 + 8) + 0x30))
                (*(longlong * *)(param_1 + 8), param_1 + 0x30,
                 (ulonglong)((uVar5 | uVar5 >> 1) + 1) << 5);
        if ((((int) uVar5 < 0) ||
             (uVar5 = (**(code * *)(**(longlong * *)(param_1 + 8) + 0x68))
                     (*(longlong * *)(param_1 + 8), *(undefined4 * )(param_1 + 0x30), 0,
                      *(undefined8 * )(param_1 + 0x38), (ulonglong) uVar2 << 5), (int) uVar5 < 0))
            || (uVar5 = (**(code * *)(**(longlong * *)(param_1 + 8) + 0x68))
                (*(longlong * *)(param_1 + 8), *(undefined4 * )(param_1 + 0x20), 0,
                 param_1 + 0x24, 0x10), (int) uVar5 < 0)) {
            uVar3 = (ulonglong) uVar5;
        }
    }
    return uVar3;
}


void FUN_1401c2df0(longlong *param_1, ulonglong param_2) {
    longlong lVar1;
    longlong lVar2;

    if ((ulonglong) param_1[1] < param_2 || param_1[1] == param_2) {
        lVar2 = FUN_14018db00(*param_1, param_2, 0x20);
        if (*param_1 != lVar2) {
            FUN_1407db590(lVar2, *param_1, param_1[1] << 5);
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


void FUN_1401c2e70(longlong *param_1, longlong param_2, undefined4 *param_3) {
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar2 = param_1[1];
    lVar3 = FUN_14018db00(*param_1, lVar2 + 1, 4);
    lVar1 = param_2 * 4;
    FUN_1407db590(lVar1 + 4 + lVar3, *param_1 + lVar1, (param_1[1] - param_2) * 4);
    *(undefined4 * )(lVar1 + lVar3) = *param_3;
    if (*param_1 != lVar3) {
        FUN_1407db590(lVar3, *param_1, lVar1);
        lVar1 = *param_1;
        if (lVar1 != 0) {
            (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        }
        *param_1 = lVar3;
    }
    param_1[1] = lVar2 + 1;
    return;
}


void FUN_1401c2f20(longlong *param_1, longlong param_2) {
    int iVar1;
    longlong lVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    lVar2 = *param_1 + param_2 * 4;
    uVar5 = param_1[1] - 1;
    FUN_1407db590(lVar2, lVar2 + 4, (uVar5 - param_2) * 4);
    puVar3 = (undefined8 * ) * param_1;
    if (uVar5 == 0) goto LAB_1401c2fe2;
    if (puVar3 == (undefined8 *) 0x0) {
        lVar2 = uVar5 * 4 + 0x10;
        uVar4 = uVar5;
    } else {
        if (uVar5 < (ulonglong) puVar3[-1] || uVar5 == puVar3[-1]) goto LAB_1401c2fe2;
        lVar2 = FUN_14018a3e0(uVar5 * 4 + 0x10);
        uVar4 = lVar2 - 0x10U >> 2;
        lVar2 = (lVar2 - 0x10U & 0xfffffffffffffffc) + 0x10;
        iVar1 = (**(code **) puVar3[-2])(puVar3 + -2, lVar2);
        if (iVar1 != 0) {
            puVar3[-1] = uVar4;
            goto LAB_1401c2fe2;
        }
    }
    puVar3 = (undefined8 *) FUN_14018b280(lVar2, 0);
    if (puVar3 != (undefined8 *) 0x0) {
        puVar3[1] = uVar4;
        *puVar3 = &PTR_LAB_140b55060;
    }
    puVar3 = puVar3 + 2;
    LAB_1401c2fe2:
    if ((undefined8 * ) * param_1 != puVar3) {
        FUN_1407db590(puVar3, (undefined8 * ) * param_1, uVar5 * 4);
        lVar2 = *param_1;
        if (lVar2 != 0) {
            (**(code * *)(*(longlong * )(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        *param_1 = (longlong) puVar3;
    }
    param_1[1] = uVar5;
    return;
}


char **FUN_1401c3020(longlong param_1, char **param_2, undefined8 param_3) {
    char *pcVar1;
    int iVar2;
    char **ppcVar3;
    char *pcVar4;
    char *pcVar5;
    bool bVar6;
    undefined local_res8[8];

    pcVar4 = *(char **) (param_1 + 8);
    bVar6 = true;
    pcVar1 = pcVar4;
    pcVar5 = *(char **) (pcVar4 + 8);
    while (pcVar5 != (char *) 0x0) {
        iVar2 = FUN_1407e6af0(param_3, pcVar5 + 0x20, 0x14);
        bVar6 = iVar2 < 0;
        pcVar1 = pcVar5;
        if (bVar6) {
            pcVar5 = *(char **) (pcVar5 + 0x10);
        } else {
            pcVar5 = *(char **) (pcVar5 + 0x18);
        }
    }
    pcVar5 = pcVar1;
    if (bVar6) {
        if (pcVar1 == *(char **) (pcVar4 + 0x10)) goto LAB_1401c309e;
        if ((*pcVar1 == '\0') && (*(char **) (*(longlong * )(pcVar1 + 8) + 8) == pcVar1)) {
            pcVar5 = *(char **) (pcVar1 + 0x18);
        } else {
            pcVar5 = *(char **) (pcVar1 + 0x10);
            if (pcVar5 == (char *) 0x0) {
                pcVar5 = *(char **) (pcVar1 + 8);
                pcVar4 = pcVar5;
                if (pcVar1 == *(char **) (pcVar5 + 0x10)) {
                    do {
                        pcVar5 = *(char **) (pcVar4 + 8);
                        bVar6 = pcVar4 == *(char **) (pcVar5 + 0x10);
                        pcVar4 = pcVar5;
                    } while (bVar6);
                }
            } else {
                for (pcVar4 = *(char **) (pcVar5 + 0x18); pcVar4 != (char *) 0x0;
                     pcVar4 = *(char **) (pcVar4 + 0x18)) {
                    pcVar5 = pcVar4;
                }
            }
        }
    }
    iVar2 = FUN_1407e6af0(pcVar5 + 0x20, param_3, 0x14);
    if (-1 < iVar2) {
        *param_2 = pcVar5;
        *(undefined * )(param_2 + 1) = 0;
        return param_2;
    }
    LAB_1401c309e:
    ppcVar3 = (char **) FUN_1401c3480(param_1, local_res8, 0, pcVar1, param_3);
    *param_2 = *ppcVar3;
    *(undefined * )(param_2 + 1) = 1;
    return param_2;
}


void FUN_1401c3160(longlong *param_1, ulonglong param_2) {
    longlong lVar1;
    longlong lVar2;

    if (param_2 <= (ulonglong) param_1[1] && param_1[1] != param_2) {
        param_1[1] = param_2;
    }
    lVar2 = FUN_14018dbc0(*param_1, param_2, 0x14);
    if (*param_1 != lVar2) {
        FUN_1407db590(lVar2, *param_1, param_1[1] * 0x14);
        lVar1 = *param_1;
        if (lVar1 != 0) {
            (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        }
        *param_1 = lVar2;
    }
    return;
}


longlong FUN_1401c31d0(longlong *param_1, undefined8 *param_2) {
    undefined8 *puVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    lVar2 = param_1[1];
    lVar4 = FUN_14018db00(*param_1, lVar2 + 1, 0x14);
    puVar1 = (undefined8 * )(lVar4 + lVar2 * 0x14);
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    *(undefined4 * )(puVar1 + 2) = *(undefined4 * )(param_2 + 2);
    if (*param_1 != lVar4) {
        FUN_1407db590(lVar4, *param_1, param_1[1] * 0x14);
        lVar3 = *param_1;
        if (lVar3 != 0) {
            (**(code * *)(*(longlong * )(lVar3 + -0x10) + 8))(lVar3 + -0x10);
        }
        *param_1 = lVar4;
    }
    param_1[1] = lVar2 + 1;
    return lVar2;
}


void FUN_1401c3280(code *param_1, undefined4 *param_2, ulonglong param_3, undefined8 param_4) {
    ulonglong uVar1;
    ulonglong uVar2;
    undefined4 uVar3;
    uint uVar4;
    uint uVar5;
    int iVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    uint uVar9;
    ulonglong uVar10;
    ulonglong uVar11;

    if (param_3 == 2) {
        iVar6 = (*param_1)(*param_2, param_2[1], param_4);
        if (0 < iVar6) {
            uVar3 = *param_2;
            *param_2 = param_2[1];
            param_2[1] = uVar3;
            return;
        }
    } else if (1 < param_3) {
        uVar7 = param_3 >> 1;
        if (uVar7 != 0) {
            uVar8 = (param_3 & 0xfffffffffffffffe) + 1;
            do {
                uVar4 = param_2[uVar7 - 1];
                uVar7 = uVar7 - 1;
                uVar8 = uVar8 - 2;
                uVar10 = uVar7;
                uVar2 = uVar8;
                while (uVar2 < param_3) {
                    uVar9 = param_2[uVar2];
                    uVar1 = uVar2 + 1;
                    uVar11 = uVar2;
                    if (uVar1 < param_3) {
                        uVar5 = param_2[uVar1];
                        iVar6 = (*param_1)(uVar5, uVar9, param_4);
                        if ((0 < iVar6) || ((iVar6 == 0 && (uVar9 < uVar5)))) {
                            uVar11 = uVar1;
                            uVar9 = uVar5;
                        }
                    }
                    iVar6 = (*param_1)(uVar9, uVar4, param_4);
                    if ((iVar6 < 1) && ((iVar6 != 0 || (uVar9 <= uVar4)))) break;
                    param_2[uVar10] = uVar9;
                    uVar10 = uVar11;
                    uVar2 = uVar11 * 2 + 1;
                }
                param_2[uVar10] = uVar4;
            } while (uVar7 != 0);
        }
        for (param_3 = param_3 - 1; param_3 != 0; param_3 = param_3 - 1) {
            uVar4 = param_2[param_3];
            uVar7 = 1;
            uVar8 = 0;
            param_2[param_3] = *param_2;
            if (1 < param_3) {
                do {
                    uVar9 = param_2[uVar7];
                    uVar2 = uVar7 + 1;
                    uVar10 = uVar7;
                    if (uVar2 < param_3) {
                        uVar5 = param_2[uVar2];
                        iVar6 = (*param_1)(uVar5, uVar9, param_4);
                        if ((0 < iVar6) || ((iVar6 == 0 && (uVar9 < uVar5)))) {
                            uVar10 = uVar2;
                            uVar9 = uVar5;
                        }
                    }
                    iVar6 = (*param_1)(uVar9, uVar4, param_4);
                    if ((iVar6 < 1) && ((iVar6 != 0 || (uVar9 <= uVar4)))) break;
                    param_2[uVar8] = uVar9;
                    uVar7 = uVar10 * 2 + 1;
                    uVar8 = uVar10;
                } while (uVar7 < param_3);
            }
            param_2[uVar8] = uVar4;
        }
    }
    return;
}


longlong *
FUN_1401c3480(longlong param_1, longlong *param_2, longlong param_3, longlong param_4,
              undefined8 *param_5) {
    longlong lVar1;
    int iVar2;
    longlong lVar3;

    if ((param_4 != *(longlong * )(param_1 + 8)) && (param_3 == 0)) {
        iVar2 = FUN_1407e6af0(param_5, param_4 + 0x20, 0x14);
        if (-1 < iVar2) {
            lVar3 = FUN_14018b280(0x38);
            if ((undefined8 * )(lVar3 + 0x20) != (undefined8 *) 0x0) {
                *(undefined8 * )(lVar3 + 0x20) = *param_5;
                *(undefined8 * )(lVar3 + 0x28) = param_5[1];
                *(undefined4 * )(lVar3 + 0x30) = *(undefined4 * )(param_5 + 2);
            }
            *(longlong * )(param_4 + 0x18) = lVar3;
            if (param_4 == *(longlong * )(*(longlong * )(param_1 + 8) + 0x18)) {
                *(longlong * )(*(longlong * )(param_1 + 8) + 0x18) = lVar3;
            }
            goto LAB_1401c3555;
        }
    }
    lVar3 = FUN_14018b280(0x38);
    if ((undefined8 * )(lVar3 + 0x20) != (undefined8 *) 0x0) {
        *(undefined8 * )(lVar3 + 0x20) = *param_5;
        *(undefined8 * )(lVar3 + 0x28) = param_5[1];
        *(undefined4 * )(lVar3 + 0x30) = *(undefined4 * )(param_5 + 2);
    }
    *(longlong * )(param_4 + 0x10) = lVar3;
    lVar1 = *(longlong * )(param_1 + 8);
    if (param_4 == lVar1) {
        *(longlong * )(lVar1 + 8) = lVar3;
        *(longlong * )(*(longlong * )(param_1 + 8) + 0x18) = lVar3;
    } else if (param_4 == *(longlong * )(lVar1 + 0x10)) {
        *(longlong * )(lVar1 + 0x10) = lVar3;
    }
    LAB_1401c3555:
    *(longlong * )(lVar3 + 8) = param_4;
    *(undefined8 * )(lVar3 + 0x10) = 0;
    *(undefined8 * )(lVar3 + 0x18) = 0;
    FUN_1400081c0(lVar3, *(longlong * )(param_1 + 8) + 8);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 1;
    *param_2 = lVar3;
    return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401c35a0(undefined8 param_1, undefined8 param_2) {
    if (_DAT_140c8a230 == 0) {
        DAT_140c8e170 = GetProcAddress(DAT_140c636c0, "CancelIoEx");
        _DAT_140c8a230 = 1;
    }
    if (DAT_140c8e170 != (FARPROC) 0x0) {
        (*DAT_140c8e170)(param_1, param_2);
    }
    return 1;
}


uint FUN_1401c3640(short **param_1, short *param_2) {
    short *psVar1;
    short *psVar2;
    short sVar3;
    undefined auVar4[16];
    int iVar5;
    DWORD DVar6;
    undefined8 uVar7;
    short *psVar8;
    longlong lVar9;

    if (param_2 == (short *) 0x0) {
        return 0x80070057;
    }
    lVar9 = 0;
    sVar3 = *param_2;
    while (sVar3 != 0) {
        lVar9 = lVar9 + 1;
        sVar3 = param_2[lVar9];
    }
    FUN_14018b900(*param_1, 0);
    auVar4 = ZEXT816(2) * ZEXT816(lVar9 * 2 + 6);
    uVar7 = SUB168(auVar4, 0);
    if (SUB168(auVar4 >> 0x40, 0) != 0) {
        uVar7 = 0xffffffffffffffff;
    }
    psVar8 = (short *) FUN_14018b280(uVar7, 0);
    *param_1 = psVar8;
    FUN_1407db590(psVar8, param_2, lVar9 * 2 + 2);
    psVar8 = *param_1;
    sVar3 = *psVar8;
    while (sVar3 != 0) {
        if (*psVar8 == 0x5c) {
            *psVar8 = 0x2f;
        }
        psVar8 = psVar8 + 1;
        sVar3 = *psVar8;
    }
    if ((*param_1 <= psVar8 && psVar8 != *param_1) && (psVar8[-1] == 0x2f)) {
        psVar8[-1] = 0;
        psVar8 = psVar8 + -1;
    }
    psVar8 = psVar8 + 1;
    FUN_1407e4830(param_1 + 1, 0, 0x68);
    *(undefined4 * )(param_1 + 1) = 0x68;
    *(undefined4 * )(param_1 + 5) = 0xffffffff;
    *(undefined4 * )(param_1 + 7) = 0xffffffff;
    *(undefined4 * )(param_1 + 9) = 0xffffffff;
    *(undefined4 * )(param_1 + 0xb) = 0xffffffff;
    *(undefined4 * )(param_1 + 0xd) = 0xffffffff;
    iVar5 = WinHttpCrackUrl(*param_1, 0, 0, param_1 + 1);
    if (iVar5 != 0) {
        *(int *) (param_1 + 5) = *(int *) (param_1 + 5) + 1;
        *(int *) (param_1 + 7) = *(int *) (param_1 + 7) + 1;
        *(int *) (param_1 + 9) = *(int *) (param_1 + 9) + 1;
        *(int *) (param_1 + 0xb) = *(int *) (param_1 + 0xb) + 1;
        *(int *) (param_1 + 0xd) = *(int *) (param_1 + 0xd) + 1;
        psVar1 = psVar8 + *(uint * )(param_1 + 5);
        psVar2 = psVar1 + *(uint * )(param_1 + 7);
        param_1[6] = psVar1;
        param_1[8] = psVar2;
        param_1[10] = psVar2 + *(uint * )(param_1 + 9);
        param_1[4] = psVar8;
        param_1[0xc] = psVar2 + *(uint * )(param_1 + 9) + *(uint * )(param_1 + 0xb);
        iVar5 = WinHttpCrackUrl(*param_1, 0, 0, param_1 + 1);
        if (iVar5 != 0) {
            return 0;
        }
    }
    DVar6 = GetLastError();
    if ((int) DVar6 < 1) {
        return DVar6;
    }
    return DVar6 & 0xffff | 0x80070000;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1401c37f0(longlong *param_1, undefined8 param_2, int param_3) {
    int iVar1;
    longlong lVar2;
    undefined4 local_78[2];
    HGLOBAL local_70;
    HGLOBAL local_68;
    undefined8 local_60;
    HGLOBAL local_58;
    HGLOBAL local_50;
    undefined8 local_48;
    HGLOBAL local_40;
    HGLOBAL local_38;
    HGLOBAL local_30;
    undefined8 local_28;
    HGLOBAL local_20;
    undefined8 local_18;
    undefined8 local_10;

    local_48 = 0;
    local_40 = (HGLOBAL) 0x0;
    local_38 = (HGLOBAL) 0x0;
    local_30 = (HGLOBAL) 0x0;
    local_28 = 0;
    local_20 = (HGLOBAL) 0x0;
    local_18 = 0;
    local_10 = 0;
    local_60 = 0;
    local_58 = (HGLOBAL) 0x0;
    local_50 = (HGLOBAL) 0x0;
    local_78[0] = 0;
    local_70 = (HGLOBAL) 0x0;
    local_68 = (HGLOBAL) 0x0;
    iVar1 = WinHttpGetIEProxyConfigForCurrentUser(&local_48);
    if (iVar1 == 0) {
        local_48 = CONCAT44(local_48._4_4_, 1);
        LAB_1401c389b:
        local_28 = 0x300000001;
    } else {
        if (local_38 != (HGLOBAL) 0x0) {
            local_70 = local_38;
            local_78[0] = 3;
            local_68 = local_30;
        }
        if ((int) local_48 != 0) goto LAB_1401c389b;
        if (local_40 != (HGLOBAL) 0x0) {
            local_28 = CONCAT44(local_28._4_4_, 2);
            local_20 = local_40;
        }
    }
    lVar2 = WinHttpOpen(0, 1, 0, 0, -(uint)(param_3 != 0) & 0x10000000);
    *param_1 = lVar2;
    if (lVar2 != 0) {
        if ((int) local_28 != 0) {
            local_10 = CONCAT44(1, (undefined4) local_10);
            iVar1 = WinHttpGetProxyForUrl(lVar2, param_2, &local_28, &local_60);
            if (iVar1 != 0) {
                local_78[0] = (undefined4) local_60;
                local_70 = local_58;
                local_68 = local_50;
            }
        }
        iVar1 = WinHttpSetOption(*param_1, 0x26, local_78);
        if (iVar1 != 0) goto LAB_1401c392c;
    }
    GetLastError();
    LAB_1401c392c:
    if (local_40 != (HGLOBAL) 0x0) {
        GlobalFree(local_40);
    }
    if (local_38 != (HGLOBAL) 0x0) {
        GlobalFree(local_38);
    }
    if (local_30 != (HGLOBAL) 0x0) {
        GlobalFree(local_30);
    }
    if (local_58 != (HGLOBAL) 0x0) {
        GlobalFree(local_58);
    }
    if (local_50 != (HGLOBAL) 0x0) {
        GlobalFree(local_50);
    }
    return 0;
}


void FUN_1401c39a0(undefined8 *param_1, undefined8 param_2, longlong param_3) {
    int iVar1;
    uint uVar2;
    longlong lVar3;
    longlong lVar4;
    undefined auStack168[32];
    ulonglong local_88;
    undefined * *local_80;
    undefined8 *local_78;
    undefined8 local_68;
    undefined8 local_60;
    longlong local_58;
    HANDLE local_50;
    undefined8 local_48;
    undefined8 local_40;
    undefined8 local_38;
    ulonglong local_30;
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong) auStack168;
    if (param_3 != 0) {
        local_78 = (undefined8 * )((ulonglong) local_78 & 0xffffffff00000000);
        local_80 = &PTR_u_text___140c58748;
        local_88 = 0;
        lVar3 = WinHttpOpenRequest(*param_1, L"HEAD", param_2, 0);
        if (lVar3 == 0) {
            GetLastError();
        } else {
            lVar4 = WinHttpSetStatusCallback(lVar3, &DAT_1401c3fb0, 0xffffffff, 0);
            if (lVar4 == -1) {
                GetLastError();
                WinHttpCloseHandle(lVar3);
            } else {
                local_68 = 0;
                local_60 = 0;
                local_50 = (HANDLE) 0x0;
                local_48 = 0;
                local_40 = 0;
                local_38 = 0;
                local_30 = 0;
                local_58 = param_3;
                local_50 = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 1, 0, (LPCWSTR) 0x0);
                if (local_50 == (HANDLE) 0x0) {
                    GetLastError();
                    WinHttpCloseHandle(lVar3);
                } else {
                    local_78 = &local_68;
                    local_80 = (undefined * *)((ulonglong) local_80 & 0xffffffff00000000);
                    local_88 = local_88 & 0xffffffff00000000;
                    iVar1 = WinHttpSendRequest(lVar3, 0, 0, 0);
                    if (iVar1 == 0) {
                        uVar2 = GetLastError();
                        if (0 < (int) uVar2) {
                            uVar2 = uVar2 & 0xffff | 0x80070000;
                        }
                        local_30 = local_30 & 0xffffffff | (ulonglong) uVar2 << 0x20;
                        WinHttpCloseHandle(lVar3);
                    } else {
                        WaitForSingleObject(local_50, 0xffffffff);
                    }
                    CloseHandle(local_50);
                }
            }
        }
    }
    FUN_1407db4f0(local_28 ^ (ulonglong) auStack168);
    return;
}


void FUN_1401c3b70(undefined8 *param_1, longlong param_2, undefined8 *param_3, longlong param_4,
                   longlong param_5) {
    int iVar1;
    uint uVar2;
    longlong lVar3;
    longlong lVar4;
    undefined auStack328[32];
    ulonglong local_128;
    undefined * *local_120;
    undefined8 *local_118;
    longlong local_110;
    longlong local_108[2];
    undefined8 local_f8;
    undefined8 local_f0;
    longlong local_e8;
    HANDLE local_e0;
    undefined8 local_d8;
    undefined8 local_d0;
    undefined8 local_c8;
    ulonglong local_c0;
    undefined local_b8[128];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong) auStack328;
    if (((param_2 == 0) || (param_4 == 0)) || (param_5 == 0)) goto LAB_1401c3cef;
    local_118 = (undefined8 * )((ulonglong) local_118 & 0xffffffff00000000);
    local_120 = &PTR_u_text___140c58730;
    local_128 = 0;
    lVar3 = WinHttpOpenRequest(*param_1, 0, param_2, 0);
    if (lVar3 == 0) {
        GetLastError();
        goto LAB_1401c3cef;
    }
    lVar4 = WinHttpSetStatusCallback(lVar3, &DAT_1401c40c0, 0xffffffff, 0);
    if (lVar4 == -1) {
        LAB_1401c3cbf:
        GetLastError();
    } else {
        local_110 = param_5 + -1 + (longlong) param_3;
        local_120 = (undefined * *)
        0x140a47858;
        local_128 = 0;
        local_118 = param_3;
        iVar1 = FUN_1401a3210(local_b8, 0x40, local_108);
        if (-1 < iVar1) {
            local_f8 = 0;
            local_f0 = 0;
            local_e0 = (HANDLE) 0x0;
            local_d8 = 0;
            local_d0 = 0;
            local_c8 = 0;
            local_c0 = 0;
            local_e8 = param_4;
            local_e0 = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 1, 0, (LPCWSTR) 0x0);
            if (local_e0 != (HANDLE) 0x0) {
                local_118 = &local_f8;
                local_120 = (undefined * *)((ulonglong) local_120 & 0xffffffff00000000);
                local_128 = local_128 & 0xffffffff00000000;
                iVar1 = WinHttpSendRequest(lVar3, local_b8, local_108[0] - (longlong) local_b8 >> 1, 0);
                if (iVar1 == 0) {
                    uVar2 = GetLastError();
                    if (0 < (int) uVar2) {
                        uVar2 = uVar2 & 0xffff | 0x80070000;
                    }
                    local_c0 = local_c0 & 0xffffffff | (ulonglong) uVar2 << 0x20;
                    WinHttpCloseHandle(lVar3);
                    CloseHandle(local_e0);
                } else {
                    WaitForSingleObject(local_e0, 0xffffffff);
                    CloseHandle(local_e0);
                }
                goto LAB_1401c3cef;
            }
            goto LAB_1401c3cbf;
        }
    }
    WinHttpCloseHandle(lVar3);
    LAB_1401c3cef:
    FUN_1407db4f0(local_38 ^ (ulonglong) auStack328);
    return;
}


void FUN_1401c3dc0(undefined8 *param_1, longlong param_2, longlong param_3, uint param_4,
                   undefined8 *param_5) {
    undefined8 *puVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    undefined auStack280[32];
    ulonglong local_f8;
    undefined * *local_f0;
    undefined8 *local_e8;
    longlong local_e0;
    longlong local_d8[2];
    undefined local_c8[128];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong) auStack280;
    if ((((param_2 != 0) && (param_3 != 0)) && (param_4 != 0)) && (param_5 != (undefined8 *) 0x0)) {
        local_e8 = (undefined8 * )((ulonglong) local_e8 & 0xffffffff00000000);
        local_f0 = &PTR_u_text___140c58718;
        local_f8 = 0;
        lVar3 = WinHttpOpenRequest(*param_1, 0, param_2, 0);
        if (lVar3 == 0) {
            GetLastError();
        } else {
            lVar4 = WinHttpSetStatusCallback(lVar3, &DAT_1401c40c0, 0xffffffff, 0);
            if (lVar4 == -1) {
                GetLastError();
                WinHttpCloseHandle(lVar3);
            } else {
                puVar1 = (undefined8 *) param_5[2];
                local_e0 = (longlong) puVar1 + ((ulonglong) param_4 - 1);
                local_f0 = (undefined * *)
                0x140a477e8;
                local_f8 = 0;
                local_e8 = puVar1;
                iVar2 = FUN_1401a3210(local_c8, 0x40, local_d8);
                if (-1 < iVar2) {
                    local_e8 = param_5;
                    *param_5 = param_1[1];
                    param_5[1] = 0;
                    local_f0 = (undefined * *)((ulonglong) local_f0 & 0xffffffff00000000);
                    param_5[2] = param_3;
                    local_f8 = local_f8 & 0xffffffff00000000;
                    iVar2 = WinHttpSendRequest(lVar3, local_c8, local_d8[0] - (longlong) local_c8 >> 1, 0);
                    if (iVar2 != 0) goto LAB_1401c3f7d;
                    GetLastError();
                    *param_5 = 0;
                    param_5[1] = 0;
                    param_5[2] = puVar1;
                }
                WinHttpCloseHandle(lVar3);
            }
        }
    }
    LAB_1401c3f7d:
    FUN_1407db4f0(local_48 ^ (ulonglong) auStack280);
    return;
}


undefined8 FUN_1401c42a0(uint param_1) {
    if (param_1 < 300) {
        return 0;
    }
    if ((param_1 == 0x191) || (param_1 == 0x193)) {
        return 0x80070005;
    }
    if (param_1 == 0x194) {
        return 0x80070002;
    }
    if (param_1 != 0x198) {
        return 0x80004005;
    }
    return 0x800705b4;
}


void FUN_1401c42e0(undefined8 param_1, LPOVERLAPPED param_2, undefined4 param_3) {
    DWORD dwNumberOfBytesTransferred;
    HANDLE CompletionPort;

    WinHttpSetStatusCallback(param_1, 0, 0, 0);
    WinHttpCloseHandle(param_1);
    CompletionPort = (HANDLE) param_2->Internal;
    dwNumberOfBytesTransferred = *(DWORD * ) & param_2->InternalHigh;
    *(undefined4 * )((longlong) & param_2[1].hEvent + 4) = param_3;
    if (CompletionPort != (HANDLE) 0x0) {
        param_2->Internal = 0;
        param_2->InternalHigh = 0;
        // WARNING: Could not recover jumptable at 0x0001401c433c. Too many branches
        // WARNING: Treating indirect jump as call
        PostQueuedCompletionStatus(CompletionPort, dwNumberOfBytesTransferred, 1, param_2);
        return;
    }
    if (param_2->hEvent != (HANDLE) 0x0) {
        SetEvent(param_2->hEvent);
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1401c4370(longlong param_1, undefined8 param_2, LPCWSTR param_3) {
    BOOL BVar1;
    int iVar2;
    HANDLE hFile;
    DWORD nNumberOfBytesToRead;
    undefined auStackY408[32];
    undefined * local_148;
    uint local_140[2];
    ulonglong local_138;
    undefined local_130[8];
    undefined local_128[256];
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong) auStackY408;
    hFile = CreateFileW(param_3, 0x80000000, 1, (LPSECURITY_ATTRIBUTES) 0x0, 3, 0x8000000, (HANDLE) 0x0);
    if (hFile == (HANDLE) 0xffffffffffffffff) {
        GetLastError();
        goto LAB_1401c44fb;
    }
    BVar1 = GetFileSizeEx(hFile, &local_138);
    if (BVar1 == 0) {
        LAB_1401c4525:
        GetLastError();
    } else {
        local_148 = local_128;
        iVar2 = FUN_140193940(local_128, 0x100, &local_148, local_130);
        if (-1 < iVar2) {
            BVar1 = WriteFile(*(HANDLE * )(param_1 + 0x10), local_128,
                              (DWORD) local_148 - ((int) register0x00000020 + -0x128), local_140,
                              (LPOVERLAPPED) 0x0);
            if (BVar1 == 0) goto LAB_1401c4525;
            for (; local_138 != 0; local_138 = local_138 - local_140[0]) {
                nNumberOfBytesToRead = 0x1000;
                if (local_138 < 0x1000) {
                    nNumberOfBytesToRead = (DWORD) local_138;
                }
                BVar1 = ReadFile(hFile, &DAT_140c8e180, nNumberOfBytesToRead, (LPDWORD) & local_148,
                                 (LPOVERLAPPED) 0x0);
                if (BVar1 == 0) goto LAB_1401c4525;
                BVar1 = WriteFile(*(HANDLE * )(param_1 + 0x10), &DAT_140c8e180, (DWORD) local_148, local_140,
                                  (LPOVERLAPPED) 0x0);
                if (BVar1 == 0) goto LAB_1401c4525;
                if ((DWORD) local_148 != local_140[0]) break;
            }
        }
    }
    CloseHandle(hFile);
    LAB_1401c44fb:
    FUN_1407db4f0(local_28 ^ (ulonglong) auStackY408);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1401c4540(undefined8 *param_1, longlong param_2) {
    int iVar1;
    BOOL BVar2;
    uint uVar3;
    longlong lVar4;
    DWORD nNumberOfBytesToRead;
    undefined auStackY680[32];
    undefined * local_268;
    uint local_260[2];
    undefined * local_258;
    undefined4 local_250;
    undefined local_248[16];
    undefined local_238[512];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong) auStackY680;
    local_258 = local_238;
    iVar1 = FUN_140193940(local_238, 0x100, &local_258, local_248);
    if (-1 < iVar1) {
        BVar2 = WriteFile((HANDLE) param_1[2], local_238,
                          (int) local_258 - ((int) register0x00000020 + -0x238), (LPDWORD) & local_268,
                          (LPOVERLAPPED) 0x0);
        if (BVar2 == 0) {
            GetLastError();
        } else {
            uVar3 = GetFileSize((HANDLE) param_1[2], (LPDWORD) 0x0);
            lVar4 = WinHttpOpenRequest(*param_1, L"POST", *(undefined8 * )(param_2 + 0x50), 0);
            param_1[1] = lVar4;
            if (lVar4 != 0) {
                local_268 = local_238;
                iVar1 = FUN_1401a3210(local_238, 0x100, &local_268, local_248);
                if (iVar1 < 0) goto LAB_1401c47de;
                iVar1 = WinHttpSendRequest(param_1[1], local_238,
                                           (longlong) local_268 - (longlong) local_238 >> 1, 0);
                if (iVar1 != 0) {
                    SetFilePointer((HANDLE) param_1[2], 0, (PLONG) 0x0, 0);
                    for (; uVar3 != 0; uVar3 = uVar3 - (int) local_268) {
                        nNumberOfBytesToRead = 0x1000;
                        if (uVar3 < 0x1000) {
                            nNumberOfBytesToRead = uVar3;
                        }
                        BVar2 = ReadFile((HANDLE) param_1[2], &DAT_140c8f180, nNumberOfBytesToRead,
                                         (LPDWORD) & local_258, (LPOVERLAPPED) 0x0);
                        if ((BVar2 == 0) ||
                            (iVar1 = WinHttpWriteData(param_1[1], &DAT_140c8f180, (ulonglong) local_258 & 0xffffffff,
                                                      &local_268), iVar1 == 0))
                            goto LAB_1401c4784;
                        if ((int) local_258 != (int) local_268) goto LAB_1401c47de;
                    }
                    iVar1 = WinHttpReceiveResponse(param_1[1], 0);
                    if (iVar1 != 0) {
                        local_260[0] = 0;
                        local_250 = 4;
                        iVar1 = WinHttpQueryHeaders(param_1[1], 0x20000013, 0, local_260);
                        if (iVar1 != 0) goto LAB_1401c47de;
                    }
                }
            }
            LAB_1401c4784:
            GetLastError();
        }
    }
    LAB_1401c47de:
    FUN_1407db4f0(local_38 ^ (ulonglong) auStackY680);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *FUN_1401c4800(void) {
    FUN_140019600(&DAT_140c78568);
    DAT_140c785bc = TlsAlloc();
    _DAT_140c785b4 = 1;
    _DAT_140c78590 = ZEXT816(0);
    _DAT_140c785a0 = ZEXT816(0);
    _DAT_140c796d0 = 0;
    DAT_140c796d8 = 0;
    DAT_140c796e0 = 0;
    DAT_140c796e8 = 0;
    DAT_140c78560 = 0;
    _DAT_140c785b0 = 0;
    DAT_140c796c0 = 0;
    DAT_140c796c8 = 0;
    FUN_1401c53d0();
    _DAT_140c796cc = 1;
    FUN_1401c4930();
    return &DAT_140c78560;
}


void FUN_1401c48a0(void) {
    FUN_14018b900(DAT_140c78590, 0);
    FUN_14018b900(DAT_140c78598, 0);
    FUN_14018b900(DAT_140c785a0, 0);
    if (DAT_140c785a8 != 0) {
        FUN_1401c5500();
    }
    if (DAT_140c796e8 != (HANDLE) 0x0) {
        CloseHandle(DAT_140c796e8);
    }
    TlsFree(DAT_140c785bc);
    FUN_140019490(&DAT_140c78568);
    FUN_14018b900(DAT_140c78578, 0);
    DAT_140c78578 = 0;
    return;
}


void FUN_1401c4930(undefined8 param_1, undefined8 param_2) {
    longlong lVar1;
    ulonglong uVar2;
    undefined8 uVar3;
    undefined8 uVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined8 uVar7;
    ulonglong uVar8;
    longlong lVar9;
    int *piVar10;
    longlong *plVar11;
    int *piVar12;
    int iVar13;
    longlong lVar14;

    lVar6 = (longlong) DAT_140c785a8;
    uVar5 = DAT_140c785a0;
    uVar4 = DAT_140c78598;
    uVar3 = DAT_140c78590;
    lVar1 = DAT_140c78560;
    DAT_140c78560 = DAT_140c78560 + 1;
    uVar7 = SUB168(ZEXT816(8) * ZEXT816(DAT_140c78560), 0);
    if (SUB168(ZEXT816(8) * ZEXT816(DAT_140c78560) >> 0x40, 0) != 0) {
        uVar7 = 0xffffffffffffffff;
    }
    DAT_140c78590 = FUN_14018b280(uVar7, 0);
    uVar7 = SUB168(ZEXT816(0x38) * ZEXT816(DAT_140c78560), 0);
    if (SUB168(ZEXT816(0x38) * ZEXT816(DAT_140c78560) >> 0x40, 0) != 0) {
        uVar7 = 0xffffffffffffffff;
    }
    DAT_140c78598 = FUN_14018b280(uVar7, 0);
    uVar7 = SUB168(ZEXT816(0x10) * ZEXT816(DAT_140c78560), 0);
    if (SUB168(ZEXT816(0x10) * ZEXT816(DAT_140c78560) >> 0x40, 0) != 0) {
        uVar7 = 0xffffffffffffffff;
    }
    DAT_140c785a0 = FUN_14018b280(uVar7, 0);
    uVar2 = DAT_140c78560;
    uVar8 = SUB168(ZEXT816(0x28) * ZEXT816(DAT_140c78560), 0);
    if (SUB168(ZEXT816(0x28) * ZEXT816(DAT_140c78560) >> 0x40, 0) != 0) {
        uVar8 = 0xffffffffffffffff;
    }
    lVar9 = uVar8 + 8;
    if (0xfffffffffffffff7 < uVar8) {
        lVar9 = -1;
    }
    piVar10 = (int *) FUN_14018b280(lVar9, 0);
    if (piVar10 == (int *) 0x0) {
        piVar12 = (int *) 0x0;
    } else {
        iVar13 = (int) uVar2 + -1;
        *piVar10 = (int) uVar2;
        piVar12 = piVar10 + 2;
        if (-1 < iVar13) {
            plVar11 = (longlong * )(piVar10 + 4);
            do {
                plVar11[-1] = 0;
                *plVar11 = 0xd;
                uVar7 = SUB168(ZEXT816(8) * ZEXT816(0xd), 0);
                if (SUB168(ZEXT816(8) * ZEXT816(0xd) >> 0x40, 0) != 0) {
                    uVar7 = 0xffffffffffffffff;
                }
                lVar9 = FUN_14018b280(uVar7, 0);
                plVar11[1] = lVar9;
                FUN_1407e4830(lVar9, 0, *plVar11 << 3);
                iVar13 = iVar13 + -1;
                plVar11[2] = (longlong) & LAB_1400522d0;
                plVar11[3] = (longlong) & LAB_1400522e0;
                plVar11 = plVar11 + 5;
            } while (-1 < iVar13);
        }
    }
    DAT_140c785a8 = piVar12;
    FUN_1407db590(DAT_140c78590, uVar3, lVar1 * 8);
    lVar9 = lVar1 * 0x38;
    FUN_1407db590(DAT_140c78598, uVar4, lVar9);
    lVar14 = lVar1 * 0x10;
    FUN_1407db590(DAT_140c785a0, uVar5, lVar14);
    FUN_14018b900(uVar3, 0);
    FUN_14018b900(uVar4, 0);
    FUN_14018b900(uVar5, 0);
    if (lVar6 != 0) {
        FUN_1401c5500(lVar6);
    }
    *(undefined8 * )(lVar1 * 8 + DAT_140c78590) = param_2;
    lVar1 = DAT_140c78598;
    *(undefined8 * )(lVar9 + DAT_140c78598) = 0;
    *(undefined8 * )(lVar9 + 8 + lVar1) = 0;
    *(undefined8 * )(lVar9 + 0x10 + lVar1) = 0;
    *(undefined8 * )(lVar9 + 0x18 + lVar1) = 0;
    *(undefined8 * )(lVar9 + 0x20 + lVar1) = 0;
    *(undefined8 * )(lVar9 + 0x28 + lVar1) = 0;
    *(undefined8 * )(lVar9 + 0x30 + lVar1) = 0;
    lVar1 = DAT_140c785a0;
    *(undefined8 * )(lVar14 + DAT_140c785a0) = 0;
    *(undefined8 * )(lVar14 + 8 + lVar1) = 0;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1401c4bb0(undefined8 param_1, ulonglong param_2) {
    ulonglong **ppuVar1;
    DWORD DVar2;
    int iVar3;
    ulonglong uVar4;
    ulonglong *puVar5;
    ulonglong *puVar6;
    HANDLE hObject;
    bool bVar7;
    ulonglong local_res8;
    ulonglong local_res10;
    ulonglong local_res18[2];

    DVar2 = GetCurrentThreadId();
    puVar6 = (ulonglong *) 0x0;
    puVar5 = puVar6;
    if (DAT_140c796d0 == DVar2) {
        DAT_140c796d8 = DAT_140c796d8 + 1;
        DVar2 = DAT_140c796d0;
    } else {
        do {
            LOCK();
            bVar7 = DAT_140c796d8 == 0;
            DAT_140c796d8 = DAT_140c796d8 ^ (ulonglong) bVar7 * (DAT_140c796d8 ^ 1);
            if (bVar7) goto LAB_1401c4c21;
            puVar5 = (ulonglong * )((longlong) puVar5 + 1);
        } while (puVar5 < &DAT_00000400);
        FUN_14019fb60(&DAT_140c796d0);
        DVar2 = DAT_140c796d0;
    }
    LAB_1401c4c21:
    DAT_140c796d0 = DVar2;
    local_res10 = param_2;
    uVar4 = (*DAT_140c78580)(&local_res10);
    for (puVar5 = *(ulonglong * *)(DAT_140c78578 + (uVar4 % DAT_140c78570) * 8);
         puVar5 != (ulonglong *) 0x0; puVar5 = (ulonglong *) puVar5[1]) {
        if ((uVar4 == *puVar5) && (iVar3 = (*DAT_140c78588)(&local_res10, puVar5 + 2), iVar3 != 0)) {
            if (puVar5 + 3 != (ulonglong *) 0x0) {
                local_res8 = puVar5[3];
                goto LAB_1401c4d59;
            }
            break;
        }
    }
    uVar4 = DAT_140c78560;
    local_res8 = 0;
    if (DAT_140c78560 != 0) {
        do {
            iVar3 = FUN_14018e2c0(param_2);
            if (iVar3 == 0) goto LAB_1401c4cc5;
            local_res8 = local_res8 + 1;
        } while (local_res8 < uVar4);
    }
    FUN_1401c4930();
    LAB_1401c4cc5:
    local_res18[0] = param_2;
    if (_DAT_140c78568 == DAT_140c78570) {
        FUN_1400290d0(&DAT_140c78568);
    }
    uVar4 = (*DAT_140c78580)(local_res18);
    ppuVar1 = (ulonglong * *)(DAT_140c78578 + (uVar4 % DAT_140c78570) * 8);
    puVar5 = (ulonglong *) FUN_14018b280(0x20);
    if (puVar5 != (ulonglong *) 0x0) {
        puVar6 = *ppuVar1;
        *puVar5 = uVar4;
        puVar5[1] = (ulonglong) puVar6;
        puVar5[3] = local_res8;
        puVar5[2] = local_res18[0];
        puVar6 = puVar5;
    }
    *ppuVar1 = puVar6;
    _DAT_140c78568 = _DAT_140c78568 + 1;
    LAB_1401c4d59:
    if (1 < DAT_140c796d8) {
        DAT_140c796d8 = DAT_140c796d8 - 1;
        return local_res8;
    }
    DAT_140c796d0 = 0;
    DAT_140c796d8 = 0;
    if (DAT_140c796e0 != 0) {
        if (DAT_140c796e8 == (HANDLE) 0x0) {
            hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
            LOCK();
            bVar7 = DAT_140c796e8 == (HANDLE) 0x0;
            DAT_140c796e8 =
                    (HANDLE)((ulonglong) DAT_140c796e8 ^
                             (ulonglong) bVar7 * ((ulonglong) DAT_140c796e8 ^ (ulonglong) hObject));
            if (!bVar7) {
                CloseHandle(hObject);
            }
        }
        SetEvent(DAT_140c796e8);
    }
    return local_res8;
}


undefined8 FUN_1401c4df0(void) {
    DWORD DVar1;
    BOOL BVar2;
    HANDLE pvVar3;
    undefined8 *puVar4;
    ulonglong uVar5;
    bool bVar6;

    DVar1 = GetCurrentThreadId();
    uVar5 = 0;
    if (DAT_140c796d0 == DVar1) {
        DAT_140c796d8 = DAT_140c796d8 + 1;
        DVar1 = DAT_140c796d0;
    } else {
        do {
            LOCK();
            bVar6 = DAT_140c796d8 == 0;
            DAT_140c796d8 = DAT_140c796d8 ^ (ulonglong) bVar6 * (DAT_140c796d8 ^ 1);
            if (bVar6) goto LAB_1401c4e4f;
            uVar5 = uVar5 + 1;
        } while (uVar5 < 0x400);
        FUN_14019fb60(&DAT_140c796d0);
        DVar1 = DAT_140c796d0;
    }
    LAB_1401c4e4f:
    DAT_140c796d0 = DVar1;
    if (DAT_140c796c0 < 0x20) {
        TlsSetValue(DAT_140c785bc, &DAT_140c785c0 + DAT_140c796c0 * 0x88);
        DAT_140c796c0 = DAT_140c796c0 + 1;
        if (DAT_140c796d8 < 2) {
            DAT_140c796d0 = 0;
            DAT_140c796d8 = 0;
            if (DAT_140c796e0 != 0) {
                if (DAT_140c796e8 == (HANDLE) 0x0) {
                    pvVar3 = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                    LOCK();
                    bVar6 = DAT_140c796e8 == (HANDLE) 0x0;
                    DAT_140c796e8 =
                            (HANDLE)((ulonglong) DAT_140c796e8 ^
                                     (ulonglong) bVar6 * ((ulonglong) DAT_140c796e8 ^ (ulonglong) pvVar3));
                    if (!bVar6) {
                        CloseHandle(pvVar3);
                    }
                }
                SetEvent(DAT_140c796e8);
            }
        } else {
            DAT_140c796d8 = DAT_140c796d8 - 1;
        }
        puVar4 = (undefined8 *) TlsGetValue(DAT_140c785bc);
        *puVar4 = 0;
        return 1;
    }
    BVar2 = IsDebuggerPresent();
    if (BVar2 != 0) {
        DebugBreak();
    }
    if (DAT_140c796d8 < 2) {
        DAT_140c796d0 = 0;
        DAT_140c796d8 = 0;
        if (DAT_140c796e0 != 0) {
            if (DAT_140c796e8 == (HANDLE) 0x0) {
                pvVar3 = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                bVar6 = DAT_140c796e8 == (HANDLE) 0x0;
                DAT_140c796e8 =
                        (HANDLE)((ulonglong) DAT_140c796e8 ^
                                 (ulonglong) bVar6 * ((ulonglong) DAT_140c796e8 ^ (ulonglong) pvVar3));
                if (!bVar6) {
                    CloseHandle(pvVar3);
                }
            }
            SetEvent(DAT_140c796e8);
        }
        return 0;
    }
    DAT_140c796d8 = DAT_140c796d8 - 1;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1401c4fb0(int param_1) {
    int iVar1;
    LPVOID pvVar2;
    ulonglong *puVar3;
    undefined8 local_res10[3];
    undefined * *local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined * *local_28;
    undefined8 local_20;
    LPVOID local_18;

    if (((DAT_140c796c8 == 0) || (DAT_140c796c8 == param_1)) && (_DAT_140c785b4 != 0)) {
        pvVar2 = TlsGetValue(DAT_140c785bc);
        if (pvVar2 == (LPVOID) 0x0) {
            iVar1 = FUN_1401c4df0();
            if (iVar1 == 0) {
                _DAT_140c785b4 = iVar1;
                return;
            }
        }
        puVar3 = (ulonglong *) TlsGetValue(DAT_140c785bc);
        if (*puVar3 < 0x10) {
            puVar3[*puVar3 + 1] = 0;
            *puVar3 = *puVar3 + 1;
        } else {
            local_40 = 0;
            local_48 = &PTR_LAB_140b5e648;
            local_38 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_48);
            local_res10[0] = 0x141e59aa0;
            local_28 = local_48;
            local_20 = local_40;
            local_18 = local_38;
            iVar1 = FUN_1401971e0(&DAT_140c8a238, 0x2c, local_res10, 0x10, &local_28);
            local_48 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720, local_38);
            if (iVar1 != 0) {
                // WARNING: Could not recover jumptable at 0x0001401c50dd. Too many branches
                // WARNING: Treating indirect jump as call
                DebugBreak();
                return;
            }
        }
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1401c5100(undefined8 param_1, int param_2, ulonglong param_3, int param_4) {
    ulonglong **ppuVar1;
    int iVar2;
    BOOL BVar3;
    LPVOID pvVar4;
    longlong *plVar5;
    longlong lVar6;
    ulonglong uVar7;
    ulonglong *puVar8;
    ulonglong *puVar9;
    longlong lVar10;
    ulonglong *puVar11;
    longlong lVar12;
    int local_res10[2];

    if ((DAT_140c796c8 != 0) && (DAT_140c796c8 != param_2)) {
        return;
    }
    local_res10[0] = param_2;
    if ((_DAT_140c785b4 != 0) && (param_4 != 0)) {
        pvVar4 = TlsGetValue(DAT_140c785bc);
        if ((pvVar4 == (LPVOID) 0x0) && (iVar2 = FUN_1401c4df0(), iVar2 == 0)) {
            _DAT_140c785b4 = 0;
            return;
        }
        plVar5 = (longlong *) TlsGetValue(DAT_140c785bc);
        if (*plVar5 == 0) {
            IsDebuggerPresent();
        } else {
            lVar6 = *plVar5 + -1;
            *plVar5 = lVar6;
            if (lVar6 != 0) {
                plVar5[lVar6] = plVar5[lVar6] + param_3;
            }
            param_3 = param_3 - plVar5[*plVar5 + 1];
        }
    }
    lVar6 = FUN_1401c4bb0();
    lVar12 = lVar6 * 0x38;
    plVar5 = (longlong * )(lVar12 + 8 + DAT_140c78598);
    *plVar5 = *plVar5 + 1;
    plVar5 = (longlong * )(lVar12 + 0x10 + DAT_140c78598);
    *plVar5 = *plVar5 + param_3;
    uVar7 = *(ulonglong * )(DAT_140c78598 + 0x20 + lVar12);
    if (uVar7 < param_3) {
        uVar7 = param_3;
    }
    *(ulonglong * )(DAT_140c78598 + 0x20 + lVar12) = uVar7;
    plVar5 = (longlong * )(DAT_140c785a0 + lVar6 * 0x10);
    *plVar5 = *plVar5 + 1;
    plVar5 = (longlong * )(DAT_140c785a0 + 8 + lVar6 * 0x10);
    *plVar5 = *plVar5 + param_3;
    iVar2 = local_res10[0];
    if (0x5dc < (int) (param_3 / DAT_140c636b0)) {
        FUN_1400035b0(1, 1, 0, param_1, local_res10[0]);
    }
    if (iVar2 == 0) {
        return;
    }
    lVar6 = lVar6 * 0x28;
    lVar10 = DAT_140c785a8 + lVar6;
    uVar7 = (**(code * *)(lVar10 + 0x18))(local_res10);
    for (puVar11 = *(ulonglong * *)
            (*(longlong * )(lVar10 + 0x10) + (uVar7 % *(ulonglong * )(lVar10 + 8)) * 8);
         puVar11 != (ulonglong *) 0x0; puVar11 = (ulonglong *) puVar11[1]) {
        if ((uVar7 == *puVar11) && (iVar2 = (**(code * *)(lVar10 + 0x20))(), iVar2 != 0)) {
            if ((ulonglong * *)(puVar11 + 3) != (ulonglong **) 0x0) {
                puVar11 = (ulonglong *) puVar11[3];
                goto LAB_1401c530b;
            }
            break;
        }
    }
    puVar11 = (ulonglong *) 0x0;
    plVar5 = (longlong * )(DAT_140c785a8 + lVar6);
    if (*plVar5 == plVar5[1]) {
        FUN_1400290d0(plVar5);
    }
    uVar7 = (*(code *) plVar5[3])(local_res10);
    ppuVar1 = (ulonglong * *)(plVar5[2] + (uVar7 % (ulonglong) plVar5[1]) * 8);
    puVar8 = (ulonglong *) FUN_14018b280();
    puVar9 = puVar11;
    if (puVar8 != (ulonglong *) 0x0) {
        puVar9 = *ppuVar1;
        *puVar8 = uVar7;
        puVar8[1] = (ulonglong) puVar9;
        puVar8[3] = 0;
        *(int *) (puVar8 + 2) = local_res10[0];
        puVar9 = puVar8;
    }
    *ppuVar1 = puVar9;
    *plVar5 = *plVar5 + 1;
    LAB_1401c530b:
    if (DAT_140c785b8 != 0) {
        if (DAT_140c785b8 == 1) {
            param_3 = (longlong) puVar11 + 1;
            goto LAB_1401c532c;
        }
        BVar3 = IsDebuggerPresent();
        if (BVar3 != 0) {
            DebugBreak();
        }
    }
    param_3 = (longlong) puVar11 + param_3;
    LAB_1401c532c:
    lVar6 = DAT_140c785a8 + lVar6;
    uVar7 = (**(code * *)(lVar6 + 0x18))(local_res10);
    puVar11 = *(ulonglong * *)(*(longlong * )(lVar6 + 0x10) + (uVar7 % *(ulonglong * )(lVar6 + 8)) * 8);
    do {
        if (puVar11 == (ulonglong *) 0x0) {
            LAB_1401c538e:
            puVar11 = (ulonglong * )(DAT_140c78598 + 0x30 + lVar12);
            if (*puVar11 <= param_3 && param_3 != *puVar11) {
                *(int *) (DAT_140c78598 + 0x28 + lVar12) = local_res10[0];
                *(ulonglong * )(lVar12 + 0x30 + DAT_140c78598) = param_3;
            }
            return;
        }
        if ((uVar7 == *puVar11) &&
            (iVar2 = (**(code * *)(lVar6 + 0x20))(local_res10, puVar11 + 2), iVar2 != 0)) {
            if (puVar11 + 3 != (ulonglong *) 0x0) {
                puVar11[3] = param_3;
            }
            goto LAB_1401c538e;
        }
        puVar11 = (ulonglong *) puVar11[1];
    } while (true);
}

