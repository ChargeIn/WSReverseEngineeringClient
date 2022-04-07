//
// Created by flop on 04.04.22.
//
#include "../../include.h"


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401045a0(undefined8 param_1, longlong param_2, longlong *param_3) {
    wchar_t wVar1;
    longlong lVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;
    longlong lVar6;
    undefined8 *puVar7;
    ulonglong uVar8;
    ulonglong uVar9;

    lVar4 = (**(code * *)(*param_3 + 0x10))(param_3);
    if (lVar4 == 0) {
        return 0;
    }
    plVar5 = (longlong *) FUN_1401a5ae0(lVar4, L"Sprites");
    if (plVar5 == (longlong *) 0x0) {
        return 0;
    }
    lVar4 = (**(code * *)(*plVar5 + 8))(plVar5);
    if (lVar4 == 0) {
        return 0;
    }
    _DAT_140c63668 = param_1;
    for (lVar6 = FUN_1401a5ae0(lVar4, L"Folder"); lVar6 != 0; lVar6 = FUN_1401a5bc0(lVar6, L"Folder")) {
        FUN_140104320(param_1, lVar6);
    }
    for (lVar6 = FUN_1401a5ae0(lVar4, L"Sprite"); lVar6 != 0; lVar6 = FUN_1401a5bc0(lVar6, L"Sprite")) {
        FUN_140104210(param_1, lVar6);
    }
    for (lVar6 = FUN_1401a5ae0(lVar4, L"Composite"); lVar6 != 0;
         lVar6 = FUN_1401a5bc0(lVar6, L"Composite")) {
        FUN_140104500(param_1, lVar6);
    }
    for (lVar4 = FUN_1401a5ae0(lVar4, L"AutoButton"); lVar4 != 0;
         lVar4 = FUN_1401a5bc0(lVar4, L"AutoButton")) {
        FUN_140104460(param_1, lVar4);
    }
    lVar4 = FUN_1401a5ae0();
    lVar6 = DAT_140c63650;
    while (DAT_140c63650 = lVar6, lVar4 != 0) {
        FUN_1401043c0(param_1, lVar4);
        lVar4 = FUN_1401a5bc0();
        lVar6 = DAT_140c63650;
    }
    _DAT_140c63668 = 0;
    if (param_2 == 0) {
        _DAT_140c63668 = 0;
        return 0;
    }
    if (*(longlong * )(lVar6 + 0x738) != 0) {
        uVar8 = 0;
        do {
            uVar8 = uVar8 + 1;
        } while (L"WhiteFill"[uVar8] != L'\0');
        if (*(longlong * )(lVar6 + 0x758) - *(longlong * )(lVar6 + 0x750) >> 1 == uVar8) {
            uVar9 = 0;
            if (uVar8 == 0) {
                _DAT_140c63668 = 0;
                return 0;
            }
            while (true) {
                wVar1 = *(wchar_t *) (*(longlong * )(lVar6 + 0x750) + uVar9 * 2);
                if (wVar1 != L"WhiteFill"[uVar9]) break;
                uVar9 = uVar9 + 1;
                if (uVar8 <= uVar9) {
                    _DAT_140c63668 = 0;
                    return 0;
                }
            }
            iVar3 = 1;
            if ((ushort) wVar1 < (ushort) L"WhiteFill"[uVar9]) {
                iVar3 = -1;
            }
            if (iVar3 == 0) {
                _DAT_140c63668 = 0;
                return 0;
            }
        }
    }
    if ((*(longlong * )(param_2 + 0x158) - *(longlong * )(param_2 + 0x150) & 0xfffffffffffffff8U) == 0) {
        LAB_140104872:
        puVar7 = (undefined8 *) 0x0;
    } else {
        puVar7 = (undefined8 *) FUN_1400fdfe0(param_2 + 0x120, L"WhiteFill");
        if (puVar7 == (undefined8 *) 0x0) {
            lVar4 = FUN_1407df6e0(L"WhiteFill", &DAT_1409d5204);
            if (lVar4 == 0) goto LAB_140104872;
            puVar7 = (undefined8 *) FUN_1400fdfe0(param_2 + 0x120, lVar4 + 2);
        }
        if (puVar7 != (undefined8 *) 0x0) {
            lVar4 = 0;
            do {
                lVar2 = lVar4 + 1;
                lVar4 = lVar4 + 1;
            } while (L"WhiteFill"[lVar2] != L'\0');
            FUN_14001c480(lVar6 + 0x748, L"WhiteFill", L"WhiteFill" + lVar4);
        }
    }
    if (puVar7 != *(undefined8 * *)(lVar6 + 0x738)) {
        if (puVar7 != (undefined8 *) 0x0) {
            (**(code * *) * puVar7)(puVar7);
        }
        if (*(longlong * *)(lVar6 + 0x738) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(lVar6 + 0x738) + 8))();
            *(undefined8 * )(lVar6 + 0x738) = 0;
        }
        *(undefined8 * *)(lVar6 + 0x738) = puVar7;
    }
    return 0;
}



// WARNING: Removing unreachable block (ram,0x000140104973)

undefined4 FUN_1401048d0(undefined8 param_1, undefined8 param_2, short *param_3) {
    short sVar1;
    short *psVar2;
    longlong lVar3;
    longlong *plVar4;
    char cVar5;
    int iVar6;
    undefined4 uVar7;
    longlong lVar8;
    undefined2 *puVar9;
    short *psVar10;
    longlong *local_res8;
    undefined **local_68;
    short *local_60;
    short *local_58;
    undefined **local_48;
    short *local_40;
    short *local_38;
    short *local_30;

    local_40 = (short *) FUN_14018b280(0x10);
    lVar8 = 0;
    local_30 = local_40 + 8;
    if (local_40 != (short *) 0x0) {
        *local_40 = 0;
    }
    psVar2 = *(short **) (DAT_140c63650 + 0x310);
    local_38 = local_40;
    if ((psVar2 != (short *) 0x0) && (*psVar2 != 0)) {
        do {
            lVar3 = lVar8 + 1;
            lVar8 = lVar8 + 1;
        } while (psVar2[lVar3] != 0);
        if (lVar8 * 2 >> 1 == 0) {
            FUN_1407db590(local_40, psVar2, 0);
        } else {
            FUN_14001c310(&local_48, psVar2);
        }
        lVar8 = 0;
        do {
            psVar10 = &DAT_1409d4d36 + lVar8;
            lVar8 = lVar8 + 1;
        } while (*psVar10 != 0);
        FUN_14001c310(&local_48, &DAT_1409d4d34, &DAT_1409d4d34 + lVar8 * 2);
    }
    psVar10 = local_40;
    lVar8 = 0;
    if (param_3 == (short *) 0x0) {
        local_60 = (short *) 0x0;
        local_68 = &PTR_LAB_140b5e648;
        local_58 = (short *) TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_68);
        local_48 = local_68;
        local_res8 = (longlong *) 0x141d15090;
        local_38 = local_58;
        local_40 = local_60;
        iVar6 = FUN_1401971e0(&DAT_140c8a104, 0xd, &local_res8, &local_48);
        local_68 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_58);
        if (iVar6 != 0) {
            DebugBreak();
        }
        uVar7 = 0x80070057;
        goto LAB_140104b37;
    }
    cVar5 = FUN_1400fe590(param_3);
    if (cVar5 == '\0') {
        if ((psVar2 != (short *) 0x0) && (*psVar2 != 0)) {
            sVar1 = *param_3;
            while (sVar1 != 0) {
                lVar8 = lVar8 + 1;
                sVar1 = param_3[lVar8];
            }
            FUN_14001c310(&local_48, param_3, param_3 + lVar8);
            psVar10 = local_40;
            cVar5 = FUN_1400fe590(local_40);
            param_3 = psVar10;
            if (cVar5 != '\0') goto LAB_140104ac5;
        }
        uVar7 = 0x80004005;
    } else {
        LAB_140104ac5:
        puVar9 = (undefined2 *) FUN_14018b280(0x10);
        if (puVar9 != (undefined2 *) 0x0) {
            *puVar9 = 0;
        }
        local_res8 = (longlong *) 0x0;
        cVar5 = FUN_1400e27b0(DAT_140c63650, param_3, &local_res8);
        plVar4 = local_res8;
        if (cVar5 == '\0') {
            uVar7 = 0x80004005;
        } else {
            uVar7 = FUN_1401045a0(param_1, param_2, local_res8);
        }
        if (plVar4 != (longlong *) 0x0) {
            (**(code * *)(*plVar4 + 8))(plVar4);
        }
        if (puVar9 != (undefined2 *) 0x0) {
            FUN_14018b900(puVar9, 0);
        }
    }
    LAB_140104b37:
    if (psVar10 != (short *) 0x0) {
        FUN_14018b900(psVar10, 0);
    }
    return uVar7;
}


undefined8 *FUN_140104b70(undefined8 *param_1, ulonglong param_2) {
    *param_1 = &PTR_FUN_140b56bd0;
    FUN_140104bc0();
    if (param_1[4] != 0) {
        FUN_14018b900(param_1[4], 0);
    }
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_140104bc0(longlong param_1) {
    longlong **pplVar1;
    longlong lVar2;
    longlong lVar3;
    longlong **pplVar4;

    pplVar1 = *(longlong * **)(param_1 + 0x28);
    for (pplVar4 = *(longlong * **)(param_1 + 0x20); pplVar4 != pplVar1; pplVar4 = pplVar4 + 1) {
        if (*pplVar4 != (longlong *) 0x0) {
            (**(code * *)(**pplVar4 + 8))();
        }
    }
    lVar2 = *(longlong * )(param_1 + 0x28);
    lVar3 = *(longlong * )(param_1 + 0x20);
    FUN_1407db590(lVar3, lVar2, 0);
    *(longlong * )(param_1 + 0x28) = *(longlong * )(param_1 + 0x28) + (lVar2 - lVar3 >> 3) * -8;
    return;
}


undefined FUN_140104c40(longlong param_1, undefined8 param_2) {
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    longlong local_res18;

    lVar2 = FUN_1401a6b80(param_2, &DAT_140a31790);
    if ((lVar2 == 0) || (lVar2 = FUN_1401a4f40(lVar2 + 0x20), lVar2 == 0)) {
        return 0;
    }
    local_res18 = FUN_140104190(*(undefined8 * )(param_1 + 8), lVar2);
    if (local_res18 != 0) {
        FUN_140101710(local_res18);
        FUN_140102760(local_res18, param_2);
        return 1;
    }
    lVar3 = FUN_14018b280(0x78, 0);
    if (lVar3 != 0) {
        local_res18 = FUN_140100930(lVar3, *(undefined8 * )(*(longlong * )(param_1 + 8) + 0x10),
                                    *(longlong * )(param_1 + 8), lVar2, 0);
    }
    lVar2 = local_res18;
    FUN_140102760(local_res18, param_2);
    plVar1 = *(longlong * *)(param_1 + 0x28);
    if (plVar1 == *(longlong * *)(param_1 + 0x30)) {
        FUN_1400b9430(param_1 + 0x18, plVar1, &local_res18);
        return 1;
    }
    if (plVar1 != (longlong *) 0x0) {
        *plVar1 = lVar2;
    }
    *(longlong * )(param_1 + 0x28) = *(longlong * )(param_1 + 0x28) + 8;
    return 1;
}


undefined8 FUN_140104d80(longlong param_1) {
    if (0 < (int) (*(longlong * )(param_1 + 0x28) - *(longlong * )(param_1 + 0x20) >> 3)) {
        FUN_140101810(**(undefined8 * *)(param_1 + 0x20));
        return 1;
    }
    FUN_140101810(0);
    return 1;
}


void FUN_140104df0(longlong param_1) {
    longlong *plVar1;
    longlong local_res8;

    if ((int) (*(longlong * )(param_1 + 0x28) - *(longlong * )(param_1 + 0x20) >> 3) == 0) {
        local_res8 = FUN_14018b280(0x78, 0);
        if (local_res8 != 0) {
            local_res8 = FUN_140100930(local_res8, *(undefined8 * )(*(longlong * )(param_1 + 8) + 0x10),
                                       *(longlong * )(param_1 + 8), &DAT_1409d4ef4, 0);
        }
        plVar1 = *(longlong * *)(param_1 + 0x28);
        if (plVar1 != *(longlong * *)(param_1 + 0x30)) {
            if (plVar1 != (longlong *) 0x0) {
                *plVar1 = local_res8;
            }
            *(longlong * )(param_1 + 0x28) = *(longlong * )(param_1 + 0x28) + 8;
            return;
        }
        FUN_1400b9430(param_1 + 0x18, plVar1, &local_res8);
    }
    return;
}


undefined8 *FUN_140104e80(undefined8 *param_1, undefined8 param_2) {
    undefined2 *puVar1;

    param_1[1] = param_2;
    *(undefined4 * )(param_1 + 2) = 1;
    *(undefined * )((longlong) param_1 + 0x14) = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    *param_1 = &PTR_LAB_140b56c10;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    puVar1 = (undefined2 *) FUN_14018b280(0x10, 0);
    param_1[9] = puVar1;
    param_1[10] = puVar1;
    param_1[0xb] = puVar1 + 8;
    if (puVar1 != (undefined2 *) 0x0) {
        *puVar1 = 0;
    }
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    puVar1 = (undefined2 *) FUN_14018b280(0x10);
    param_1[0xd] = puVar1;
    param_1[0xe] = puVar1;
    param_1[0xf] = puVar1 + 8;
    if (puVar1 != (undefined2 *) 0x0) {
        *puVar1 = 0;
    }
    *(undefined2 * )((longlong) param_1 + 0x81) = 0;
    *(undefined8 * )((longlong) param_1 + 0x84) = 0;
    *(undefined8 * )((longlong) param_1 + 0x8c) = 0;
    *(undefined8 * )((longlong) param_1 + 0x94) = 0;
    *(undefined8 * )((longlong) param_1 + 0x9c) = 0;
    *(undefined8 * )((longlong) param_1 + 0xa4) = 0;
    *(undefined8 * )((longlong) param_1 + 0xac) = 0;
    *(undefined * )((longlong) param_1 + 0xb4) = 1;
    *(undefined4 * )(param_1 + 7) = 1;
    return param_1;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1401054f0(longlong param_1) {
    ulonglong uVar1;
    short sVar2;
    short *psVar3;
    longlong *plVar4;
    longlong *plVar5;
    undefined8 uVar6;
    bool bVar7;
    uint uVar8;
    int iVar9;
    longlong lVar10;
    longlong *plVar11;
    longlong lVar12;
    longlong lVar13;
    undefined8 *puVar14;
    int iVar15;
    longlong lVar16;
    longlong *plVar17;
    undefined4 uVar18;
    undefined4 uVar19;
    undefined4 uVar20;
    undefined4 uVar21;
    float fVar22;
    undefined auStack744[32];
    undefined4 local_2c8;
    int local_2b8;
    int local_2b4;
    int local_2b0;
    int local_2ac;
    int local_2a8;
    int local_2a4;
    int local_2a0;
    int local_29c;
    int local_298;
    int local_294;
    int local_290;
    undefined8 local_288;
    int local_280;
    int local_27c;
    int local_278;
    int local_274;
    longlong local_270;
    longlong local_268;
    ulonglong local_260;
    ulonglong local_258;
    undefined **local_248;
    longlong local_240;
    undefined2 *local_238;
    longlong local_230;
    undefined **local_228;
    longlong local_220;
    undefined2 *local_218;
    undefined local_208[16];
    undefined4 local_1f8;
    undefined4 uStack500;
    undefined4 uStack496;
    undefined4 uStack492;
    longlong local_1e8[6];
    longlong *local_1b8;
    undefined8 local_1b0;
    undefined8 local_1a8;
    undefined8 local_1a0;
    int local_198;
    int iStack404;
    int iStack400;
    int iStack396;
    undefined8 local_188;
    undefined local_180;
    undefined local_17f;
    undefined local_17e;
    undefined4 local_17c;
    int local_178;
    int local_174;
    undefined8 local_170;
    undefined8 local_168;
    uint local_160;
    uint local_15c;
    undefined local_158;
    undefined8 local_138[4];
    undefined4 auStack280[4];
    undefined4 auStack264[4];
    undefined4 local_f8;
    undefined8 local_d8[4];
    undefined4 auStack184[4];
    undefined4 auStack168[4];
    undefined4 local_98;
    int local_88;
    int iStack132;
    int local_80;
    int iStack124;
    int local_78;
    int iStack116;
    int local_70;
    int iStack108;
    int iStack104;
    int iStack100;
    int local_60;
    int iStack92;
    ulonglong local_58;

    local_58 = DAT_140c0f7b0 ^ (ulonglong) auStack744;
    local_2b4 = *(int *) (param_1 + 0x84);
    fVar22 = 1.0;
    local_2a0 = *(int *) (param_1 + 0x88);
    local_29c = *(int *) (param_1 + 0xa0);
    local_278 = *(int *) (param_1 + 0x8c);
    local_298 = *(int *) (param_1 + 0x90);
    local_294 = *(int *) (param_1 + 0xa4);
    local_280 = *(int *) (ulonglong * )(param_1 + 0x94);
    local_2ac = *(int *) (param_1 + 0xa8);
    local_290 = *(int *) (param_1 + 0x98);
    local_27c = *(int *) (ulonglong * )(param_1 + 0xac);
    local_258 = *(ulonglong * )(param_1 + 0x94) >> 0x20;
    local_2b0 = *(int *) (param_1 + 0x9c);
    local_2a8 = *(int *) (param_1 + 0xb0);
    local_260 = *(ulonglong * )(param_1 + 0xac) >> 0x20;
    local_288 = CONCAT44(local_288._4_4_, 1);
    local_2b8 = 0;
    local_268 = 0;
    local_2a4 = local_2b0;
    local_274 = local_2b4;
    local_88 = local_2b4;
    iStack132 = local_2a0;
    local_80 = local_278;
    iStack124 = local_298;
    local_78 = local_280;
    iStack116 = local_290;
    local_70 = local_2b0;
    iStack108 = local_29c;
    iStack104 = local_294;
    iStack100 = local_2ac;
    local_60 = local_27c;
    iStack92 = local_2a8;
    do {
        lVar12 = local_268;
        lVar16 = *(longlong * )(param_1 + 0x50);
        lVar10 = *(longlong * )(param_1 + 0x48);
        *(undefined8 * )((longlong) local_1e8 + local_268) = 0;
        local_240 = 0;
        lVar16 = lVar16 - lVar10 >> 1;
        local_230 = 0;
        uVar1 = lVar16 + 1;
        if (uVar1 < 0x7fffffffffffffff) {
            lVar13 = uVar1 * 2;
            local_240 = FUN_14018b280(lVar13, 0);
            local_230 = lVar13 + local_240;
        }
        lVar13 = local_240;
        lVar16 = lVar16 * 2;
        FUN_1407db590(local_240, lVar10, lVar16);
        local_238 = (undefined2 * )(lVar13 + lVar16);
        lVar16 = 0;
        if (local_238 != (undefined2 *) 0x0) {
            *local_238 = 0;
        }
        psVar3 = *(short **) ((longlong) & PTR_u_Normal_140a33098 + lVar12);
        sVar2 = *psVar3;
        lVar10 = lVar16;
        while (sVar2 != 0) {
            lVar10 = lVar10 + 1;
            sVar2 = psVar3[lVar10];
        }
        FUN_14001c310(&local_248, psVar3, psVar3 + lVar10);
        lVar10 = local_240;
        iVar15 = local_2b8;
        bVar7 = false;
        if ((-1 < local_2b8) &&
            (local_2b8 < (int) (*(longlong * )(param_1 + 0x28) - *(longlong * )(param_1 + 0x20) >> 3))) {
            lVar16 = *(longlong * )(lVar12 + *(longlong * )(param_1 + 0x20));
        }
        local_270 = lVar16;
        if (lVar16 == 0) {
            if (local_240 != 0) {
                plVar4 = *(longlong * *)(*(longlong * )(param_1 + 8) + 0x48);
                for (plVar17 = *(longlong * *)(*(longlong * )(param_1 + 8) + 0x40); plVar17 != plVar4;
                     plVar17 = plVar17 + 1) {
                    plVar5 = *(longlong * *)(*plVar17 + 0x28);
                    plVar11 = (longlong *) FUN_14010a540(*(undefined8 * )(*plVar17 + 0x20), plVar5, lVar10);
                    if ((plVar11 != plVar5) && (lVar12 = *plVar11, lVar12 != 0)) goto LAB_140105782;
                }
            }
            lVar12 = 0;
            LAB_140105782:
            lVar16 = 0;
            local_270 = lVar12;
            if (lVar12 == 0) {
                lVar12 = FUN_14018b280();
                if (lVar12 == 0) {
                    local_270 = 0;
                    bVar7 = true;
                    iVar15 = local_2b8;
                } else {
                    local_2c8 = 1;
                    lVar16 = FUN_140100930(lVar12, *(undefined8 * )(*(longlong * )(param_1 + 8) + 0x10),
                                           *(longlong * )(param_1 + 8));
                    bVar7 = true;
                    iVar15 = local_2b8;
                    local_270 = lVar16;
                }
            } else {
                FUN_140101710();
                lVar16 = lVar12;
                iVar15 = local_2b8;
            }
        } else {
            FUN_140101710(lVar16);
            lVar10 = local_240;
            FUN_140100cd0(lVar16, *(undefined8 * )(param_1 + 8), local_240);
        }
        if ((*(uint * )(param_1 + 0x38) & (uint) local_288) == 0) {
            switch (iVar15) {
                case 0:
                    local_220 = 0;
                    local_228 = &PTR_LAB_140b5e648;
                    local_218 = (undefined2 *) TlsGetValue(DAT_140c63720);
                    TlsSetValue(DAT_140c63720, &local_228);
                    local_248 = local_228;
                    local_288 = 0x141d15100;
                    local_238 = local_218;
                    local_240 = local_220;
                    iVar9 = FUN_140196f30(&DAT_140c8a100, 0xd, &local_288);
                    local_228 = &PTR_LAB_140b5e648;
                    TlsSetValue(DAT_140c63720, local_218);
                    iVar15 = local_2b8;
                    if (iVar9 != 0) {
                        DebugBreak();
                        iVar15 = local_2b8;
                    }
                    break;
                case 1:
                case 2:
                case 4:
                case 5:
                    FUN_140100ec0(lVar16);
                    break;
                case 3:
                    if (local_1e8[2] == 0) {
                        FUN_140100ec0(lVar16);
                    } else {
                        FUN_140100ec0(lVar16);
                    }
            }
        } else {
            uVar18 = 0x3f800000;
            uVar19 = 0x3f800000;
            uVar20 = 0x3f800000;
            uVar21 = 0x3f800000;
            local_1f8 = 0x3f800000;
            uStack500 = 0x3f800000;
            uStack496 = 0x3f800000;
            uStack492 = 0x3f800000;
            uVar8 = FUN_140141f10(DAT_140c63678, &local_1f8);
            local_208 = CONCAT412(uVar21, CONCAT48(uVar20, CONCAT44(uVar19, uVar18)));
            local_160 = FUN_140141f10(DAT_140c63678, local_208);
            lVar12 = DAT_140c63678;
            local_1b8 = (longlong *) 0x0;
            uVar6 = *(undefined8 * )(*(longlong * )(param_1 + 8) + 0x10);
            local_180 = *(undefined * )(param_1 + 0x80);
            local_17c = 0x3f800000;
            local_17f = *(undefined * )(param_1 + 0x81);
            local_170 = 0;
            local_17e = *(undefined * )(param_1 + 0x82);
            local_168 = 0;
            if ((ulonglong) local_160 < *(ulonglong * )(DAT_140c63678 + 0x30)) {
                iVar15 = *(int *) ((ulonglong) local_160 * 0x20 + 0x10 + *(longlong * )(DAT_140c63678 + 0x28));
                if (iVar15 - 1U < 0xfffffffe) {
                    *(int *) ((ulonglong) local_160 * 0x20 + 0x10 + *(longlong * )(DAT_140c63678 + 0x28)) =
                            iVar15 + 1;
                }
            }
            if ((ulonglong) uVar8 < *(ulonglong * )(lVar12 + 0x30)) {
                lVar12 = *(longlong * )(lVar12 + 0x28);
                lVar13 = (ulonglong) uVar8 * 0x20;
                iVar15 = *(int *) (lVar13 + 0x10 + lVar12);
                if (iVar15 - 1U < 0xfffffffe) {
                    *(int *) (lVar13 + 0x10 + lVar12) = iVar15 + 1;
                }
            }
            local_158 = 0;
            local_f8 = 0;
            puVar14 = local_138;
            lVar12 = 0;
            do {
                uVar18 = *(undefined4 * )((longlong) & DAT_140a1b148 + lVar12);
                *(undefined4 * )((longlong) auStack264 + lVar12) = 0;
                lVar13 = lVar12 + 4;
                *(undefined4 * )((longlong) auStack280 + lVar12) = uVar18;
                *puVar14 = 0;
                puVar14 = puVar14 + 1;
                lVar12 = lVar13;
            } while (lVar13 < 0x10);
            local_98 = 0;
            puVar14 = local_d8;
            lVar12 = 0;
            do {
                uVar18 = *(undefined4 * )((longlong) & DAT_140a1b148 + lVar12);
                *(undefined4 * )((longlong) auStack168 + lVar12) = 0;
                lVar13 = lVar12 + 4;
                *(undefined4 * )((longlong) auStack184 + lVar12) = uVar18;
                *puVar14 = 0;
                puVar14 = puVar14 + 1;
                lVar12 = lVar13;
            } while (lVar13 < 0x10);
            local_1b0 = CONCAT44(iStack132, local_88);
            local_188 = CONCAT44(iStack92, local_60);
            local_1a8 = CONCAT44(iStack124, local_80);
            local_198 = local_70;
            iStack404 = iStack108;
            iStack400 = iStack104;
            iStack396 = iStack100;
            local_1a0 = CONCAT44(iStack116, local_78);
            local_178 = iStack116 - local_2b4;
            local_174 = iStack92 - local_2b0;
            local_15c = uVar8;
            FUN_140108f00(uVar6);
            lVar12 = *(longlong * )(lVar16 + 0x40);
            if (lVar12 == *(longlong * )(lVar16 + 0x48)) {
                FUN_140109f90(lVar16 + 0x30, lVar12, &local_1b8);
            } else {
                if (lVar12 != 0) {
                    FUN_1400feb20(lVar12);
                }
                *(longlong * )(lVar16 + 0x40) = *(longlong * )(lVar16 + 0x40) + 0x130;
            }
            *(float *) (lVar16 + 0x70) = *(float *) (lVar16 + 0x70) + fVar22;
            if (local_1b8 != (longlong *) 0x0) {
                (**(code * *)(*local_1b8 + 8))();
            }
            FUN_1401429a0(DAT_140c63678);
            FUN_1401429a0(DAT_140c63678);
            FUN_1401429a0(DAT_140c63678);
            FUN_1401429a0(DAT_140c63678);
            iVar15 = local_2b8;
        }
        if (bVar7) {
            plVar17 = *(longlong * *)(param_1 + 0x28);
            if (plVar17 == *(longlong * *)(param_1 + 0x30)) {
                FUN_1400b9430(param_1 + 0x18, plVar17, &local_270);
            } else {
                if (plVar17 != (longlong *) 0x0) {
                    *plVar17 = lVar16;
                }
                *(longlong * )(param_1 + 0x28) = *(longlong * )(param_1 + 0x28) + 8;
            }
        }
        *(longlong * )((longlong) local_1e8 + local_268) = lVar16;
        if ((*(uint * )(param_1 + 0x38) & (uint) local_288) != 0) {
            if (*(char *) (param_1 + 0xb4) == '\0') {
                iVar9 = (int) local_260 - local_2a4;
                local_2b0 = local_2b0 + iVar9;
                local_2a4 = local_2a4 + iVar9;
                local_260 = (ulonglong)(uint)((int) local_260 + iVar9);
                local_29c = local_29c + iVar9;
                local_294 = local_294 + iVar9;
                local_2ac = local_2ac + iVar9;
                local_27c = local_27c + iVar9;
                local_2a8 = local_2a8 + iVar9;
                local_70 = local_2b0;
                iStack108 = local_29c;
                iStack104 = local_294;
                iStack100 = local_2ac;
                local_60 = local_27c;
                iStack92 = local_2a8;
            } else {
                iVar9 = (int) local_258 - local_274;
                local_2b4 = local_2b4 + iVar9;
                local_274 = local_274 + iVar9;
                local_258 = (ulonglong)(uint)((int) local_258 + iVar9);
                local_2a0 = local_2a0 + iVar9;
                local_278 = local_278 + iVar9;
                local_298 = local_298 + iVar9;
                local_280 = local_280 + iVar9;
                local_290 = local_290 + iVar9;
                local_88 = local_2b4;
                iStack132 = local_2a0;
                local_80 = local_278;
                iStack124 = local_298;
                local_78 = local_280;
                iStack116 = local_290;
            }
        }
        if (lVar10 != 0) {
            FUN_14018b900(lVar10);
        }
        local_2b8 = iVar15 + 1;
        local_268 = local_268 + 8;
        local_288 = local_288 & 0xffffffff00000000 |
                    (ulonglong)((uint) local_288 << 1 | (uint)((int) (uint) local_288 < 0));
        if (5 < local_2b8) {
            FUN_1407db4f0(local_58 ^ (ulonglong) auStack744);
            return;
        }
    } while (true);
}


undefined8 *FUN_140106650(undefined8 *param_1, undefined8 param_2) {
    undefined2 *puVar1;

    param_1[1] = param_2;
    *(undefined4 * )(param_1 + 2) = 2;
    *(undefined * )((longlong) param_1 + 0x14) = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    *param_1 = &PTR_FUN_140b56b50;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    puVar1 = (undefined2 *) FUN_14018b280(0x10, 0);
    param_1[9] = puVar1;
    param_1[10] = puVar1;
    param_1[0xb] = puVar1 + 8;
    if (puVar1 != (undefined2 *) 0x0) {
        *puVar1 = 0;
    }
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    return param_1;
}


undefined8 *FUN_1401066d0(undefined8 *param_1, ulonglong param_2) {
    FUN_14002c630(param_1 + 0xc);
    if (param_1[9] != 0) {
        FUN_14018b900(param_1[9], 0);
    }
    *param_1 = &PTR_FUN_140b56bd0;
    FUN_140104bc0(param_1);
    if (param_1[4] != 0) {
        FUN_14018b900(param_1[4], 0);
    }
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


undefined8 *FUN_140106f80(undefined8 *param_1, undefined8 param_2) {
    undefined2 *puVar1;

    param_1[1] = param_2;
    *(undefined4 * )(param_1 + 2) = 4;
    *(undefined * )((longlong) param_1 + 0x14) = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    *param_1 = &PTR_FUN_140b56b00;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    puVar1 = (undefined2 *) FUN_14018b280(0x10, 0);
    param_1[8] = puVar1;
    param_1[9] = puVar1;
    param_1[10] = puVar1 + 8;
    if (puVar1 != (undefined2 *) 0x0) {
        *puVar1 = 0;
    }
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    puVar1 = (undefined2 *) FUN_14018b280(0x10);
    param_1[0xc] = puVar1;
    param_1[0xd] = puVar1;
    param_1[0xe] = puVar1 + 8;
    if (puVar1 != (undefined2 *) 0x0) {
        *puVar1 = 0;
    }
    *(undefined4 * )(param_1 + 0xf) = 0x40;
    *(undefined8 * )((longlong) param_1 + 0x7c) = 0x40;
    *(undefined4 * )((longlong) param_1 + 0x84) = 0;
    return param_1;
}


undefined8 *FUN_140107040(undefined8 *param_1, ulonglong param_2) {
    if (param_1[0xc] != 0) {
        FUN_14018b900(param_1[0xc], 0);
    }
    if (param_1[8] != 0) {
        FUN_14018b900(param_1[8], 0);
    }
    *param_1 = &PTR_FUN_140b56bd0;
    FUN_140104bc0(param_1);
    if (param_1[4] != 0) {
        FUN_14018b900(param_1[4], 0);
    }
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_140107290(longlong param_1, undefined8 param_2) {
    undefined4 uVar1;
    undefined8 uVar2;
    longlong lVar3;
    undefined auStack472[32];
    undefined local_1b8[400];
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong) auStack472;
    uVar2 = *(undefined8 * )(param_1 + 0x60);
    lVar3 = FUN_1401a6c70(param_2, &DAT_140a31790);
    FUN_1401a4c50(lVar3 + 0x20, uVar2);
    uVar2 = *(undefined8 * )(param_1 + 0x40);
    lVar3 = FUN_1401a6c70(param_2, L"Path");
    FUN_1401a4c50(lVar3 + 0x20, uVar2);
    uVar1 = *(undefined4 * )(param_1 + 0x78);
    lVar3 = FUN_1401a6c70(param_2, L"Width");
    FUN_1401a4c20(local_1b8, 200, &DAT_1409e41f4, uVar1);
    FUN_1401a4c50(lVar3 + 0x20, local_1b8);
    uVar1 = *(undefined4 * )(param_1 + 0x7c);
    lVar3 = FUN_1401a6c70(param_2, L"Height");
    FUN_1401a4c20(local_1b8, 200, &DAT_1409e41f4, uVar1);
    FUN_1401a4c50(lVar3 + 0x20, local_1b8);
    FUN_1407db4f0(local_28 ^ (ulonglong) auStack472);
    return;
}


undefined8 *FUN_140107b70(undefined8 *param_1, undefined8 param_2) {
    undefined2 *puVar1;
    undefined8 *puVar2;
    int iVar3;
    int iVar4;
    int iVar5;

    param_1[1] = param_2;
    *(undefined4 * )(param_1 + 2) = 3;
    *(undefined * )((longlong) param_1 + 0x14) = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    *param_1 = &PTR_FUN_140b56ac0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    puVar1 = (undefined2 *) FUN_14018b280(0x10, 0);
    param_1[8] = puVar1;
    param_1[9] = puVar1;
    param_1[10] = puVar1 + 8;
    if (puVar1 != (undefined2 *) 0x0) {
        *puVar1 = 0;
    }
    iVar5 = 5;
    puVar2 = param_1 + 0xd;
    iVar4 = 5;
    iVar3 = 5;
    do {
        puVar2[-1] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar1 = (undefined2 *) FUN_14018b280(0x10);
        puVar2[-1] = puVar1;
        *puVar2 = puVar1;
        puVar2[1] = puVar1 + 8;
        if (puVar1 != (undefined2 *) 0x0) {
            *puVar1 = 0;
        }
        puVar2 = puVar2 + 4;
        iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    puVar2 = param_1 + 0x25;
    do {
        puVar2[-1] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar1 = (undefined2 *) FUN_14018b280(0x10);
        puVar2[-1] = puVar1;
        *puVar2 = puVar1;
        puVar2[1] = puVar1 + 8;
        if (puVar1 != (undefined2 *) 0x0) {
            *puVar1 = 0;
        }
        puVar2 = puVar2 + 4;
        iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    puVar2 = param_1 + 0x3d;
    do {
        puVar2[-1] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar1 = (undefined2 *) FUN_14018b280(0x10);
        puVar2[-1] = puVar1;
        *puVar2 = puVar1;
        puVar2[1] = puVar1 + 8;
        if (puVar1 != (undefined2 *) 0x0) {
            *puVar1 = 0;
        }
        puVar2 = puVar2 + 4;
        iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    return param_1;
}


undefined8 FUN_140107cd0(undefined8 param_1, ulonglong param_2) {
    FUN_140107d10();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_140107d10(undefined8 *param_1) {
    longlong *plVar1;
    undefined8 *puVar2;
    int iVar3;
    int iVar4;
    int iVar5;

    iVar5 = 5;
    puVar2 = param_1 + 0x54;
    iVar4 = 5;
    iVar3 = 5;
    do {
        plVar1 = puVar2 + -4;
        puVar2 = puVar2 + -4;
        if (*plVar1 != 0) {
            FUN_14018b900(*plVar1, 0);
        }
        iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    puVar2 = param_1 + 0x3c;
    do {
        plVar1 = puVar2 + -4;
        puVar2 = puVar2 + -4;
        if (*plVar1 != 0) {
            FUN_14018b900(*plVar1, 0);
        }
        iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    puVar2 = param_1 + 0x24;
    do {
        plVar1 = puVar2 + -4;
        puVar2 = puVar2 + -4;
        if (*plVar1 != 0) {
            FUN_14018b900(*plVar1, 0);
        }
        iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    if (param_1[8] != 0) {
        FUN_14018b900(param_1[8], 0);
    }
    *param_1 = &PTR_FUN_140b56bd0;
    FUN_140104bc0(param_1);
    if (param_1[4] != 0) {
        FUN_14018b900(param_1[4], 0);
    }
    return;
}


undefined8 FUN_140107de0(longlong param_1, undefined8 param_2) {
    undefined2 *puVar1;
    short sVar2;
    undefined2 *puVar3;
    undefined2 *puVar4;
    longlong lVar5;
    short *psVar6;
    short *psVar7;
    longlong lVar8;
    short *psVar9;
    ulonglong uVar10;
    longlong lVar11;
    longlong *plVar12;
    undefined *puVar13;
    longlong local_res18;
    undefined **local_res20;
    longlong local_d8;
    undefined local_d0[8];
    undefined2 *local_c8;
    undefined2 *local_c0;
    undefined2 *local_b8;
    undefined local_b0[8];
    undefined2 *local_a8;
    undefined2 *local_a0;
    undefined2 *local_98;
    undefined local_90[8];
    undefined2 *local_88;
    undefined2 *local_80;
    undefined2 *local_78;
    undefined local_70[8];
    undefined2 *local_68;
    undefined2 *local_60;
    undefined2 *local_58;
    undefined2 *local_50;
    longlong local_48;

    lVar5 = FUN_1401a6b80(param_2, &DAT_140a31790);
    if ((lVar5 != 0) && (psVar6 = (short *) FUN_1401a4f40(), psVar6 != (short *) 0x0)) {
        psVar7 = (short *) 0x0;
        sVar2 = *psVar6;
        psVar9 = psVar7;
        while (sVar2 != 0) {
            psVar9 = (short *) ((longlong) psVar9 + 1);
            sVar2 = psVar6[(longlong) psVar9];
        }
        local_48 = param_1 + 0x38;
        FUN_14001c480(local_48, psVar6, psVar6 + (longlong) psVar9);
        lVar5 = FUN_1401a6b80(param_2, &DAT_140a1a940);
        psVar6 = psVar7;
        if (lVar5 != 0) {
            psVar6 = (short *) FUN_1401a4f40(lVar5 + 0x20);
        }
        psVar9 = (short *) &DAT_1409d5174;
        if (psVar6 != (short *) 0x0) {
            psVar9 = psVar6;
        }
        local_res18 = 0;
        sVar2 = *psVar9;
        while (sVar2 != 0) {
            psVar7 = (short *) ((longlong) psVar7 + 1);
            sVar2 = psVar9[(longlong) psVar7];
        }
        lVar5 = (longlong) psVar7 * 2 >> 1;
        uVar10 = lVar5 + 1;
        if (uVar10 < 0x7fffffffffffffff) {
            local_res18 = FUN_14018b280(uVar10 * 2, 0);
        }
        lVar5 = lVar5 * 2;
        FUN_1407db590(local_res18, psVar9, lVar5);
        local_50 = (undefined2 * )(lVar5 + local_res18);
        if (local_50 != (undefined2 *) 0x0) {
            *local_50 = 0;
        }
        puVar13 = (undefined * )(param_1 + 0x58);
        plVar12 = (longlong * )(param_1 + 0x60);
        local_res20 = &PTR_u_Normal_140a33098;
        local_d8 = 6;
        do {
            lVar8 = 0;
            psVar6 = (short *) *local_res20;
            lVar5 = 0;
            sVar2 = *psVar6;
            while (sVar2 != 0) {
                lVar5 = lVar5 + 1;
                sVar2 = psVar6[lVar5];
            }
            lVar5 = lVar5 * 2 >> 1;
            uVar10 = lVar5 + 1;
            if (uVar10 < 0x7fffffffffffffff) {
                lVar8 = FUN_14018b280(uVar10 * 2, 0);
            }
            lVar5 = lVar5 * 2;
            FUN_1407db590(lVar8, psVar6, lVar5);
            lVar11 = local_48;
            puVar1 = (undefined2 * )(lVar5 + lVar8);
            if (puVar1 != (undefined2 *) 0x0) {
                *puVar1 = 0;
            }
            local_68 = (undefined2 *) 0x0;
            lVar5 = (longlong) puVar1 - lVar8 >> 1;
            local_60 = (undefined2 *) 0x0;
            local_58 = (undefined2 *) 0x0;
            uVar10 = (*(longlong * )(local_48 + 0x10) - *(longlong * )(local_48 + 8) >> 1) + 1 + lVar5;
            if (uVar10 < 0x7fffffffffffffff) {
                local_60 = (undefined2 *) FUN_14018b280(uVar10 * 2, 0);
                local_58 = local_60 + uVar10;
                if (local_60 != (undefined2 *) 0x0) {
                    *local_60 = 0;
                }
            }
            local_68 = local_60;
            FUN_14001c310(local_70, *(undefined8 * )(lVar11 + 8), *(undefined8 * )(lVar11 + 0x10));
            FUN_14001c310(local_70, lVar8, puVar1);
            lVar11 = 0;
            do {
                lVar11 = lVar11 + 1;
            } while (L"UnderIcon"[lVar11] != L'\0');
            local_a8 = (undefined2 *) 0x0;
            local_a0 = (undefined2 *) 0x0;
            local_98 = (undefined2 *) 0x0;
            uVar10 = lVar5 + 1 + lVar11;
            if (uVar10 < 0x7fffffffffffffff) {
                local_a0 = (undefined2 *) FUN_14018b280(uVar10 * 2, 0);
                local_98 = local_a0 + uVar10;
                if (local_a0 != (undefined2 *) 0x0) {
                    *local_a0 = 0;
                }
            }
            local_a8 = local_a0;
            FUN_14001c310(local_b0, lVar8, puVar1);
            FUN_14001c310(local_b0, L"UnderIcon", L"UnderIcon" + lVar11);
            lVar11 = 0;
            do {
                lVar11 = lVar11 + 1;
            } while (L"OverIcon"[lVar11] != L'\0');
            local_88 = (undefined2 *) 0x0;
            local_80 = (undefined2 *) 0x0;
            local_78 = (undefined2 *) 0x0;
            uVar10 = lVar5 + 1 + lVar11;
            if (uVar10 < 0x7fffffffffffffff) {
                local_80 = (undefined2 *) FUN_14018b280(uVar10 * 2, 0);
                local_78 = local_80 + uVar10;
                if (local_80 != (undefined2 *) 0x0) {
                    *local_80 = 0;
                }
            }
            local_88 = local_80;
            FUN_14001c310(local_90, lVar8, puVar1);
            FUN_14001c310(local_90, L"OverIcon", L"OverIcon" + lVar11);
            lVar11 = 0;
            do {
                lVar11 = lVar11 + 1;
            } while (*(short *) (&DAT_140a1a940 + lVar11 * 2) != 0);
            local_c8 = (undefined2 *) 0x0;
            local_c0 = (undefined2 *) 0x0;
            local_b8 = (undefined2 *) 0x0;
            uVar10 = lVar5 + 1 + lVar11;
            if (uVar10 < 0x7fffffffffffffff) {
                local_c0 = (undefined2 *) FUN_14018b280(uVar10 * 2, 0);
                local_b8 = local_c0 + uVar10;
                if (local_c0 != (undefined2 *) 0x0) {
                    *local_c0 = 0;
                }
            }
            psVar6 = (short *) 0x0;
            local_c8 = local_c0;
            FUN_14001c310(local_d0, lVar8, puVar1);
            FUN_14001c310(local_d0, &DAT_140a1a940, &DAT_140a1a940 + lVar11 * 2);
            puVar1 = local_a8;
            lVar5 = FUN_1401a6b80(param_2, local_a8);
            psVar7 = psVar6;
            if (lVar5 != 0) {
                psVar7 = (short *) FUN_1401a4f40(lVar5 + 0x20);
            }
            psVar9 = (short *) &DAT_1409d518c;
            if (psVar7 != (short *) 0x0) {
                psVar9 = psVar7;
            }
            sVar2 = *psVar9;
            while (sVar2 != 0) {
                psVar6 = (short *) ((longlong) psVar6 + 1);
                sVar2 = psVar9[(longlong) psVar6];
            }
            FUN_14001c480(puVar13 + 0xc0, psVar9, psVar9 + (longlong) psVar6);
            puVar4 = local_88;
            lVar5 = FUN_1401a6b80(param_2, local_88);
            if (lVar5 == 0) {
                psVar6 = (short *) 0x0;
            } else {
                psVar6 = (short *) FUN_1401a4f40();
            }
            lVar5 = 0;
            psVar7 = (short *) &DAT_1409d5004;
            if (psVar6 != (short *) 0x0) {
                psVar7 = psVar6;
            }
            sVar2 = *psVar7;
            while (sVar2 != 0) {
                lVar5 = lVar5 + 1;
                sVar2 = psVar7[lVar5];
            }
            FUN_14001c480(puVar13 + 0x180, psVar7, psVar7 + lVar5);
            puVar3 = local_c8;
            psVar6 = (short *) FUN_1401a6b80(param_2, local_c8);
            if (psVar6 != (short *) 0x0) {
                psVar6 = (short *) FUN_1401a4f40(psVar6 + 0x10);
            }
            psVar7 = (short *) &DAT_1409d5044;
            if (psVar6 != (short *) 0x0) {
                psVar7 = psVar6;
            }
            lVar5 = 0;
            sVar2 = *psVar7;
            while (sVar2 != 0) {
                lVar5 = lVar5 + 1;
                sVar2 = psVar7[lVar5];
            }
            FUN_14001c480(puVar13, psVar7, psVar7 + lVar5);
            if ((*plVar12 == plVar12[1]) && (local_d0 != puVar13)) {
                FUN_14001c480(puVar13, local_res18, local_50);
            }
            if (puVar3 != (undefined2 *) 0x0) {
                FUN_14018b900(puVar3);
            }
            if (puVar4 != (undefined2 *) 0x0) {
                FUN_14018b900(puVar4);
            }
            if (puVar1 != (undefined2 *) 0x0) {
                FUN_14018b900(puVar1);
            }
            if (local_68 != (undefined2 *) 0x0) {
                FUN_14018b900();
            }
            if (lVar8 != 0) {
                FUN_14018b900(lVar8);
            }
            puVar13 = puVar13 + 0x20;
            plVar12 = plVar12 + 4;
            local_res20 = local_res20 + 1;
            local_d8 = local_d8 + -1;
        } while (local_d8 != 0);
        if (local_res18 != 0) {
            FUN_14018b900(local_res18, 0);
        }
        return 1;
    }
    return 0;
}


void FUN_140108730(longlong param_1) {
    undefined2 *puVar1;
    short sVar2;
    short *psVar3;
    longlong *plVar4;
    longlong *plVar5;
    bool bVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    longlong *plVar9;
    undefined8 *puVar10;
    longlong lVar11;
    ulonglong uVar12;
    longlong *plVar13;
    longlong *plVar14;
    int local_res18;
    undefined8 *local_res20;
    longlong local_78;
    longlong local_70;
    undefined8 *local_68;
    undefined local_60[8];
    undefined2 *local_58;
    undefined2 *local_50;
    undefined2 *local_48;

    plVar14 = (longlong * )(param_1 + 0x120);
    local_res18 = 0;
    local_70 = 0;
    do {
        puVar8 = (undefined8 *) 0x0;
        psVar3 = (short *) (&PTR_u_Normal_140a33098)[local_70];
        local_78 = 0;
        sVar2 = *psVar3;
        puVar7 = puVar8;
        while (sVar2 != 0) {
            puVar7 = (undefined8 * )((longlong) puVar7 + 1);
            sVar2 = psVar3[(longlong) puVar7];
        }
        lVar11 = (longlong) puVar7 * 2 >> 1;
        uVar12 = lVar11 + 1;
        if (uVar12 < 0x7fffffffffffffff) {
            local_78 = FUN_14018b280(uVar12 * 2, 0);
        }
        lVar11 = lVar11 * 2;
        FUN_1407db590(local_78, psVar3, lVar11);
        puVar1 = (undefined2 * )(lVar11 + local_78);
        if (puVar1 != (undefined2 *) 0x0) {
            *puVar1 = 0;
        }
        local_58 = (undefined2 *) 0x0;
        local_50 = (undefined2 *) 0x0;
        local_48 = (undefined2 *) 0x0;
        uVar12 = (*(longlong * )(param_1 + 0x48) - *(longlong * )(param_1 + 0x40) >> 1) + 1 +
                 ((longlong) puVar1 - local_78 >> 1);
        if (uVar12 < 0x7fffffffffffffff) {
            local_50 = (undefined2 *) FUN_14018b280(uVar12 * 2, 0);
            local_48 = local_50 + uVar12;
            if (local_50 != (undefined2 *) 0x0) {
                *local_50 = 0;
            }
        }
        local_58 = local_50;
        FUN_14001c310(local_60, *(undefined8 * )(param_1 + 0x40), *(undefined8 * )(param_1 + 0x48));
        FUN_14001c310(local_60, local_78, puVar1);
        puVar1 = local_58;
        bVar6 = false;
        if ((-1 < local_70) &&
            (local_res18 < (int) (*(longlong * )(param_1 + 0x28) - *(longlong * )(param_1 + 0x20) >> 3))) {
            puVar8 = *(undefined8 * *)(*(longlong * )(param_1 + 0x20) + local_70 * 8);
        }
        local_res20 = puVar8;
        if (puVar8 == (undefined8 *) 0x0) {
            bVar6 = true;
            lVar11 = FUN_14018b280(0x78);
            if (lVar11 == 0) {
                puVar8 = (undefined8 *) 0x0;
                local_res20 = (undefined8 *) 0x0;
            } else {
                puVar8 = (undefined8 *)
                        FUN_140100930(lVar11, *(undefined8 * )(*(longlong * )(param_1 + 8) + 0x10),
                                      *(longlong * )(param_1 + 8), puVar1, 3);
                local_res20 = puVar8;
            }
        } else {
            FUN_140101710(puVar8);
        }
        FUN_140100cd0(puVar8, *(undefined8 * )(param_1 + 8), puVar1);
        lVar11 = *plVar14;
        puVar7 = (undefined8 *) 0x0;
        if ((plVar14[1] - lVar11 >> 1 != 0) && (lVar11 != 0)) {
            plVar4 = *(longlong * *)(*(longlong * )(param_1 + 8) + 0x48);
            for (plVar13 = *(longlong * *)(*(longlong * )(param_1 + 8) + 0x40); plVar13 != plVar4;
                 plVar13 = plVar13 + 1) {
                plVar5 = *(longlong * *)(*plVar13 + 0x28);
                plVar9 = (longlong *) FUN_14010a540(*(undefined8 * )(*plVar13 + 0x20), plVar5, lVar11);
                if ((plVar9 != plVar5) && (puVar7 = (undefined8 * ) * plVar9, puVar7 != (undefined8 *) 0x0))
                    goto LAB_14010895e;
            }
            puVar7 = (undefined8 *) 0x0;
        }
        LAB_14010895e:
        local_68 = puVar7;
        if ((puVar7 != puVar8) && (puVar7 != (undefined8 *) 0x0)) {
            (**(code * *) * puVar7)(puVar7);
            puVar10 = (undefined8 *) puVar8[0xc];
            if (puVar10 == (undefined8 *) puVar8[0xd]) {
                FUN_1400b9430(puVar8 + 10, puVar10, &local_68);
            } else {
                if (puVar10 != (undefined8 *) 0x0) {
                    *puVar10 = puVar7;
                }
                puVar8[0xc] = puVar8[0xc] + 8;
            }
        }
        lVar11 = plVar14[-0x18];
        if ((plVar14[-0x17] - lVar11 >> 1 != 0) && (lVar11 != 0)) {
            plVar4 = *(longlong * *)(*(longlong * )(param_1 + 8) + 0x48);
            for (plVar13 = *(longlong * *)(*(longlong * )(param_1 + 8) + 0x40); plVar13 != plVar4;
                 plVar13 = plVar13 + 1) {
                puVar7 = *(undefined8 * *)(*plVar13 + 0x28);
                puVar10 = (undefined8 *) FUN_14010a540(*(undefined8 * )(*plVar13 + 0x20), puVar7, lVar11);
                if ((puVar10 != puVar7) && (puVar10 = (undefined8 * ) * puVar10, puVar10 != (undefined8 *) 0x0))
                    goto LAB_140108a1b;
            }
        }
        puVar10 = (undefined8 *) 0x0;
        if (*(longlong * )(param_1 + 0x68) - *(longlong * )(param_1 + 0x60) >> 1 != 0) {
            puVar10 = (undefined8 *)
                    FUN_140104190(*(undefined8 * )(param_1 + 8), *(undefined8 * )(param_1 + 0x60));
        }
        LAB_140108a1b:
        local_68 = puVar10;
        if ((puVar10 != puVar8) && (puVar10 != (undefined8 *) 0x0)) {
            (**(code * *) * puVar10)(puVar10);
            puVar7 = (undefined8 *) puVar8[0xc];
            if (puVar7 == (undefined8 *) puVar8[0xd]) {
                FUN_1400b9430(puVar8 + 10, puVar7, &local_68);
            } else {
                if (puVar7 != (undefined8 *) 0x0) {
                    *puVar7 = puVar10;
                }
                puVar8[0xc] = puVar8[0xc] + 8;
            }
        }
        lVar11 = plVar14[0x18];
        puVar7 = (undefined8 *) 0x0;
        if ((plVar14[0x19] - lVar11 >> 1 != 0) && (lVar11 != 0)) {
            plVar4 = *(longlong * *)(*(longlong * )(param_1 + 8) + 0x48);
            for (plVar13 = *(longlong * *)(*(longlong * )(param_1 + 8) + 0x40); plVar13 != plVar4;
                 plVar13 = plVar13 + 1) {
                puVar10 = *(undefined8 * *)(*plVar13 + 0x28);
                puVar7 = (undefined8 *) FUN_14010a540(*(undefined8 * )(*plVar13 + 0x20), puVar10, lVar11);
                if ((puVar7 != puVar10) && (puVar7 = (undefined8 * ) * puVar7, puVar7 != (undefined8 *) 0x0))
                    goto LAB_140108abe;
            }
            puVar7 = (undefined8 *) 0x0;
        }
        LAB_140108abe:
        local_68 = puVar7;
        if ((puVar7 != puVar8) && (puVar7 != (undefined8 *) 0x0)) {
            (**(code * *) * puVar7)(puVar7);
            puVar10 = (undefined8 *) puVar8[0xc];
            if (puVar10 == (undefined8 *) puVar8[0xd]) {
                FUN_1400b9430(puVar8 + 10, puVar10, &local_68);
            } else {
                if (puVar10 != (undefined8 *) 0x0) {
                    *puVar10 = puVar7;
                }
                puVar8[0xc] = puVar8[0xc] + 8;
            }
        }
        if (bVar6) {
            puVar7 = *(undefined8 * *)(param_1 + 0x28);
            if (puVar7 == *(undefined8 * *)(param_1 + 0x30)) {
                FUN_1400b9430(param_1 + 0x18, puVar7, &local_res20);
            } else {
                if (puVar7 != (undefined8 *) 0x0) {
                    *puVar7 = puVar8;
                }
                *(longlong * )(param_1 + 0x28) = *(longlong * )(param_1 + 0x28) + 8;
            }
        }
        if (puVar1 != (undefined2 *) 0x0) {
            FUN_14018b900(puVar1, 0);
        }
        if (local_78 != 0) {
            FUN_14018b900(local_78, 0);
        }
        plVar14 = plVar14 + 4;
        local_70 = local_70 + 1;
        local_res18 = local_res18 + 1;
        if (5 < local_70) {
            return;
        }
    } while (true);
}


undefined8 *FUN_140108bc0(undefined8 *param_1) {
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 local_res8;

    *param_1 = 0;
    FUN_140109d90();
    FUN_140109e90(param_1 + 6);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    lVar2 = FUN_140108d20(param_1, L"System");
    if (lVar2 == 0) {
        lVar2 = FUN_14018b280(0x58, 0);
        if (lVar2 == 0) {
            local_res8 = 0;
        } else {
            local_res8 = FUN_140103fd0(lVar2, param_1, L"System");
        }
        puVar1 = (undefined8 *) param_1[0xd];
        if (puVar1 != (undefined8 *) param_1[0xe]) {
            if (puVar1 != (undefined8 *) 0x0) {
                *puVar1 = local_res8;
            }
            param_1[0xd] = param_1[0xd] + 8;
            return param_1;
        }
        FUN_14010a1c0(param_1 + 0xb, puVar1, &local_res8);
    }
    return param_1;
}


void FUN_140108c90(longlong param_1) {
    longlong lVar1;
    longlong lVar2;
    longlong **pplVar3;

    FUN_140109f00(param_1 + 0x30);
    FUN_140109e00(param_1 + 8);
    pplVar3 = *(longlong * **)(param_1 + 0x60);
    if (pplVar3 != *(longlong * **)(param_1 + 0x68)) {
        do {
            if (*pplVar3 != (longlong *) 0x0) {
                (**(code * *)(**pplVar3 + 8))();
                *pplVar3 = (longlong *) 0x0;
            }
            pplVar3 = pplVar3 + 1;
        } while (pplVar3 != *(longlong * **)(param_1 + 0x68));
    }
    lVar1 = *(longlong * )(param_1 + 0x68);
    lVar2 = *(longlong * )(param_1 + 0x60);
    FUN_1407db590(lVar2, lVar1, 0);
    *(longlong * )(param_1 + 0x68) = *(longlong * )(param_1 + 0x68) + (lVar1 - lVar2 >> 3) * -8;
    return;
}


longlong FUN_140108d20(longlong param_1, ushort *param_2) {
    ushort uVar1;
    longlong lVar2;
    int iVar3;
    ulonglong uVar4;
    ushort *puVar5;
    ulonglong uVar6;
    longlong *plVar7;

    if (param_2 == (ushort *) 0x0) {
        return 0;
    }
    plVar7 = *(longlong * *)(param_1 + 0x60);
    if (plVar7 != *(longlong * *)(param_1 + 0x68)) {
        do {
            lVar2 = *plVar7;
            uVar4 = 0;
            uVar1 = *param_2;
            while (uVar1 != 0) {
                uVar4 = uVar4 + 1;
                uVar1 = param_2[uVar4];
            }
            if (*(longlong * )(lVar2 + 0x28) - *(longlong * )(lVar2 + 0x20) >> 1 == uVar4) {
                uVar6 = 0;
                if (uVar4 == 0) {
                    return lVar2;
                }
                puVar5 = param_2;
                while (true) {
                    uVar1 = *(ushort * )((*(longlong * )(lVar2 + 0x20) - (longlong) param_2) + (longlong) puVar5);
                    if (uVar1 != *puVar5) break;
                    uVar6 = uVar6 + 1;
                    puVar5 = puVar5 + 1;
                    if (uVar4 <= uVar6) {
                        return lVar2;
                    }
                }
                iVar3 = 1;
                if (uVar1 < *puVar5) {
                    iVar3 = -1;
                }
                if (iVar3 == 0) {
                    return lVar2;
                }
            }
            plVar7 = plVar7 + 1;
        } while (plVar7 != *(longlong * *)(param_1 + 0x68));
    }
    return 0;
}


longlong FUN_140108e00(longlong param_1, undefined8 param_2) {
    longlong *plVar1;
    longlong local_res18[2];

    local_res18[0] = FUN_140108d20();
    if (local_res18[0] == 0) {
        local_res18[0] = FUN_14018b280(0x58, 0);
        if (local_res18[0] != 0) {
            local_res18[0] = FUN_140103fd0(local_res18[0], param_1, param_2);
        }
        plVar1 = *(longlong * *)(param_1 + 0x68);
        if (plVar1 != *(longlong * *)(param_1 + 0x70)) {
            if (plVar1 != (longlong *) 0x0) {
                *plVar1 = local_res18[0];
            }
            *(longlong * )(param_1 + 0x68) = *(longlong * )(param_1 + 0x68) + 8;
            return local_res18[0];
        }
        FUN_14010a1c0(param_1 + 0x58, plVar1, local_res18);
    }
    return local_res18[0];
}


longlong FUN_140108e80(longlong param_1, short *param_2) {
    longlong lVar1;

    if (((param_2 != (short *) 0x0) && (*param_2 != 0)) &&
        ((*(longlong * )(param_1 + 0x68) - *(longlong * )(param_1 + 0x60) & 0xfffffffffffffff8U) != 0)) {
        lVar1 = FUN_1400fdfe0(param_1 + 0x30);
        if (lVar1 == 0) {
            lVar1 = FUN_1407df6e0(param_2, &DAT_1409d5204);
            if (lVar1 != 0) {
                lVar1 = FUN_1400fdfe0(param_1 + 0x30, lVar1 + 2);
                return lVar1;
            }
        }
        return lVar1;
    }
    return 0;
}


void FUN_140108f00(longlong param_1, short *param_2, undefined8 param_3, longlong **param_4) {
    longlong *plVar1;
    ulonglong **ppuVar2;
    short *psVar3;
    ulonglong *puVar4;
    char cVar5;
    int iVar6;
    ulonglong uVar7;
    longlong *plVar8;
    longlong lVar9;
    longlong *plVar10;
    ulonglong *puVar11;
    longlong lVar12;
    longlong **pplVar13;
    longlong local_res10;
    short *local_38;
    undefined local_30;
    undefined7 uStack47;

    if ((param_2 == (short *) 0x0) || (*param_2 == 0)) {
        *param_4 = (longlong *) 0x0;
        return;
    }
    plVar1 = (longlong * )(param_1 + 8);
    plVar10 = (longlong *) 0x0;
    local_30 = 1;
    local_38 = param_2;
    uVar7 = (**(code * *)(param_1 + 0x20))(&local_38);
    puVar11 = *(ulonglong * *)
            (*(longlong * )(param_1 + 0x18) + (uVar7 % *(ulonglong * )(param_1 + 0x10)) * 8);
    do {
        if (puVar11 == (ulonglong *) 0x0) {
            LAB_140108f82:
            lVar12 = 0;
            cVar5 = FUN_1400fe590();
            if (((cVar5 == '\0') && (psVar3 = *(short **) (DAT_140c63650 + 0x310), psVar3 != (short *) 0x0))
                && (*psVar3 != 0)) {
                plVar8 = (longlong *) FUN_14018d540(&local_res10, L"%s\\%s", psVar3, param_2);
                lVar12 = *plVar8;
                *plVar8 = 0;
                if (local_res10 != 0) {
                    (**(code * *)(*(longlong * )(local_res10 + -0x10) + 8))(local_res10 + -0x10);
                }
                FUN_1400fe590();
            }
            lVar9 = FUN_14018b280();
            if (lVar9 != 0) {
                plVar10 = (longlong *) FUN_1400fe080();
            }
            local_38 = (short *) plVar10[5];
            local_30 = *(undefined * )((longlong) plVar10 + 0x42);
            if (*plVar1 == *(longlong * )(param_1 + 0x10)) {
                FUN_1400290d0(plVar1);
            }
            uVar7 = (**(code * *)(param_1 + 0x20))(&local_38);
            ppuVar2 = (ulonglong * *)
                    (*(longlong * )(param_1 + 0x18) + (uVar7 % *(ulonglong * )(param_1 + 0x10)) * 8);
            puVar11 = (ulonglong *) FUN_14018b280(0x28);
            if (puVar11 == (ulonglong *) 0x0) {
                puVar11 = (ulonglong *) 0x0;
            } else {
                puVar4 = *ppuVar2;
                *puVar11 = uVar7;
                puVar11[1] = (ulonglong) puVar4;
                puVar11[2] = (ulonglong) local_38;
                puVar11[3] = CONCAT71(uStack47, local_30);
                puVar11[4] = (ulonglong) plVar10;
                (**(code * *) * plVar10)(plVar10);
            }
            *ppuVar2 = puVar11;
            *plVar1 = *plVar1 + 1;
            if (lVar12 != 0) {
                (**(code * *)(*(longlong * )(lVar12 + -0x10) + 8))(lVar12 + -0x10);
            }
            LAB_1401090b9:
            (**(code * *) * plVar10)(plVar10);
            *param_4 = plVar10;
            // WARNING: Could not recover jumptable at 0x0001401090e6. Too many branches
            // WARNING: Treating indirect jump as call
            (**(code * *)(*plVar10 + 8))(plVar10);
            return;
        }
        if ((uVar7 == *puVar11) && (iVar6 = (**(code * *)(param_1 + 0x28))(&local_38), iVar6 != 0)) {
            pplVar13 = (longlong * *)(puVar11 + 4);
            if (pplVar13 != (longlong **) 0x0) {
                if (*pplVar13 != (longlong *) 0x0) {
                    (**(code * *) * *pplVar13)();
                    plVar10 = *pplVar13;
                }
                goto LAB_1401090b9;
            }
            goto LAB_140108f82;
        }
        puVar11 = (ulonglong *) puVar11[1];
    } while (true);
}


void FUN_140109100(longlong param_1, longlong param_2) {
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    int iVar5;
    longlong lVar6;

    iVar5 = 0;
    if (0 < (int) (*(longlong * )(param_2 + 0x48) - *(longlong * )(param_2 + 0x40) >> 3)) {
        lVar6 = 0;
        do {
            iVar4 = 0;
            lVar3 = 0;
            lVar1 = *(longlong * )(lVar6 + *(longlong * )(param_2 + 0x40));
            lVar2 = *(longlong * )(lVar1 + 0x28) - *(longlong * )(lVar1 + 0x20) >> 3;
            if (0 < (int) lVar2) {
                do {
                    if (((-1 < lVar3) && (iVar4 < (int) lVar2)) &&
                        (lVar2 = *(longlong * )(*(longlong * )(lVar1 + 0x20) + lVar3 * 8), lVar2 != 0)) {
                        FUN_1400fddf0(param_1 + 0x30, 0, lVar2);
                        FUN_1400fddf0(param_1 + 0x30, 1, lVar2);
                    }
                    iVar4 = iVar4 + 1;
                    lVar3 = lVar3 + 1;
                    lVar2 = *(longlong * )(lVar1 + 0x28) - *(longlong * )(lVar1 + 0x20) >> 3;
                } while (iVar4 < (int) lVar2);
            }
            iVar5 = iVar5 + 1;
            lVar6 = lVar6 + 8;
        } while (iVar5 < (int) (*(longlong * )(param_2 + 0x48) - *(longlong * )(param_2 + 0x40) >> 3));
    }
    return;
}


int FUN_140109200(undefined8 *param_1, undefined8 param_2, short *param_3) {
    int iVar1;
    undefined8 uVar2;

    if ((param_1[0xd] - param_1[0xc] & 0xfffffffffffffff8) == 0) {
        return 0;
    }
    uVar2 = *(undefined8 *) param_1[0xc];
    if ((param_3 != (short *) 0x0) && (*param_3 != 0)) {
        uVar2 = FUN_140108e00(param_1, param_3);
    }
    iVar1 = FUN_1401045a0(uVar2, *param_1, param_2);
    if (-1 < iVar1) {
        FUN_140109100(param_1, uVar2);
    }
    return iVar1;
}


void FUN_140109290(undefined8 *param_1, short *param_2, short *param_3) {
    undefined8 *puVar1;
    short sVar2;
    ulonglong uVar3;
    undefined2 uVar4;
    int iVar5;
    uint uVar6;
    longlong lVar7;
    longlong lVar8;
    short *psVar9;
    ulonglong uVar10;
    short *psVar11;
    short *psVar12;
    short *psVar13;
    ulonglong uVar14;
    short *psVar15;
    short *psVar16;
    undefined8 *puVar17;
    longlong lVar18;
    ulonglong uVar19;
    short *psVar20;
    ulonglong uVar21;
    undefined auStack648[32];
    ulonglong local_268;
    undefined8 *local_260;
    short local_258[264];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong) auStack648;
    local_260 = param_1;
    if ((param_1[0xd] - param_1[0xc] & 0xfffffffffffffff8) == 0) goto LAB_1401095bf;
    local_268 = *(ulonglong *) param_1[0xc];
    psVar20 = (short *) 0x0;
    if (param_3 == (short *) 0x0) {
        lVar18 = 0x208;
        psVar13 = local_258;
        if (param_2 != (short *) 0x0) {
            iVar5 = FUN_1407dff20(*param_2);
            psVar9 = param_2;
            if ((iVar5 == 0) || (param_2[1] != 0x3a)) {
                if ((param_2[1] == 0) || (param_2[2] != 0x3a)) {
                    uVar4 = 0;
                } else {
                    uVar4 = 1;
                }
                iVar5 = FUN_1407dff20(uVar4);
                if (iVar5 != 0) goto LAB_14010936f;
            } else {
                LAB_14010936f:
                psVar12 = param_2;
                psVar11 = psVar20;
                psVar15 = psVar20;
                if (*param_2 != 0) {
                    do {
                        psVar9 = psVar12;
                        if (psVar11 == (short *) 0x1) {
                            if (psVar15 == (short *) 0x0) goto LAB_14010949a;
                            *psVar15 = 0;
                            local_258[0] = 0;
                            goto LAB_1401094a1;
                        }
                        psVar16 = psVar15;
                        if (psVar15 != (short *) 0x0) {
                            psVar16 = psVar15 + 1;
                            psVar11 = (short *) ((longlong) psVar11 + -1);
                            *psVar15 = *psVar9;
                        }
                    } while ((*psVar9 != 0x3a) && (psVar12 = psVar9 + 1, psVar15 = psVar16, psVar9[1] != 0));
                    psVar9 = psVar9 + 1;
                    if (psVar16 != (short *) 0x0) {
                        *psVar16 = 0;
                    }
                }
            }
            lVar8 = 0;
            lVar7 = FUN_1407dd8d8(psVar9, 0x2f);
            if ((((lVar7 != 0) || (lVar7 = FUN_1407dd8d8(psVar9, 0x5c), lVar7 != 0)) && (lVar7 != -2)) &&
                (psVar12 = psVar20, psVar9 != (short *) (lVar7 + 2))) {
                do {
                    if (psVar20 == (short *) 0x1) {
                        if (psVar12 == (short *) 0x0) goto LAB_14010949a;
                        *psVar12 = 0;
                        local_258[0] = 0;
                        goto LAB_1401094a1;
                    }
                    psVar11 = psVar12;
                    if (psVar12 != (short *) 0x0) {
                        psVar11 = psVar12 + 1;
                        psVar20 = (short *) ((longlong) psVar20 + -1);
                        *psVar12 = *psVar9;
                    }
                    psVar9 = psVar9 + 1;
                    psVar12 = psVar11;
                } while (psVar9 != (short *) (lVar7 + 2));
                if (psVar11 != (short *) 0x0) {
                    *psVar11 = 0;
                }
            }
            psVar20 = (short *) FUN_1407dd8d8(psVar9, 0x2e);
            if (psVar20 == (short *) 0x0) {
                sVar2 = *psVar9;
                while (sVar2 != 0) {
                    lVar8 = lVar8 + 1;
                    sVar2 = psVar9[lVar8];
                }
                psVar20 = psVar9 + lVar8;
            }
            psVar12 = psVar13;
            if (psVar9 != psVar20) {
                do {
                    psVar13 = psVar12;
                    if (lVar18 == 1) {
                        if (psVar12 != (short *) 0x0) {
                            LAB_14010949a:
                            *psVar13 = 0;
                        }
                        goto LAB_1401094a1;
                    }
                    if (psVar12 != (short *) 0x0) {
                        psVar13 = psVar12 + 1;
                        lVar18 = lVar18 + -1;
                        *psVar12 = *psVar9;
                    }
                    psVar9 = psVar9 + 1;
                    psVar12 = psVar13;
                } while (psVar9 != psVar20);
                if (psVar13 == (short *) 0x0) goto LAB_1401094a1;
            }
            *psVar13 = 0;
        }
        LAB_1401094a1:
        param_3 = local_258;
    }
    puVar17 = local_260;
    uVar19 = 0;
    if (*param_3 != 0) {
        local_268 = FUN_140108e00(local_260, param_3);
    }
    uVar3 = local_268;
    uVar6 = FUN_1401048d0(local_268, *puVar17, param_2);
    local_268 = local_268 & 0xffffffff00000000 | (ulonglong) uVar6;
    if ((-1 < (int) uVar6) &&
        (uVar21 = uVar19, 0 < (int) (*(longlong * )(uVar3 + 0x48) - *(longlong * )(uVar3 + 0x40) >> 3))) {
        do {
            uVar10 = 0;
            lVar18 = *(longlong * )(uVar19 + *(longlong * )(uVar3 + 0x40));
            lVar8 = *(longlong * )(lVar18 + 0x28) - *(longlong * )(lVar18 + 0x20) >> 3;
            if (0 < (int) lVar8) {
                puVar1 = puVar17 + 6;
                uVar14 = uVar10;
                do {
                    if (((-1 < (longlong) uVar10) && ((int) uVar14 < (int) lVar8)) &&
                        (lVar8 = *(longlong * )(*(longlong * )(lVar18 + 0x20) + uVar10 * 8), lVar8 != 0)) {
                        FUN_1400fddf0(puVar1, 0, lVar8);
                        FUN_1400fddf0(puVar1, 1, lVar8);
                    }
                    uVar6 = (int) uVar14 + 1;
                    uVar14 = (ulonglong) uVar6;
                    uVar10 = uVar10 + 1;
                    lVar8 = *(longlong * )(lVar18 + 0x28) - *(longlong * )(lVar18 + 0x20) >> 3;
                    puVar17 = local_260;
                } while ((int) uVar6 < (int) lVar8);
            }
            uVar6 = (int) uVar21 + 1;
            uVar19 = uVar19 + 8;
            uVar21 = (ulonglong) uVar6;
        } while ((int) uVar6 < (int) (*(longlong * )(uVar3 + 0x48) - *(longlong * )(uVar3 + 0x40) >> 3));
    }
    LAB_1401095bf:
    FUN_1407db4f0(local_48 ^ (ulonglong) auStack648);
    return;
}


undefined8 *FUN_1401095e0(undefined8 *param_1) {
    undefined4 uVar1;
    undefined2 *puVar2;

    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    puVar2 = (undefined2 *) FUN_14018b280(0x10, 0);
    param_1[3] = puVar2;
    param_1[4] = puVar2;
    param_1[5] = puVar2 + 8;
    if (puVar2 != (undefined2 *) 0x0) {
        *puVar2 = 0;
    }
    uVar1 = DAT_140c63664;
    *param_1 = 0;
    *(undefined4 * )((longlong) param_1 + 0xc) = 0x3f800000;
    *(undefined4 * )(param_1 + 1) = uVar1;
    return param_1;
}


void FUN_140109650(longlong **param_1) {
    if (*param_1 != (longlong *) 0x0) {
        (**(code * *)(**param_1 + 8))();
        *param_1 = (longlong *) 0x0;
    }
    if (param_1[3] != (longlong *) 0x0) {
        FUN_14018b900(param_1[3], 0);
        return;
    }
    return;
}


longlong *FUN_140109690(longlong *param_1, longlong *param_2) {
    undefined2 *puVar1;

    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    puVar1 = (undefined2 *) FUN_14018b280(0x10, 0);
    param_1[3] = (longlong) puVar1;
    param_1[4] = (longlong) puVar1;
    param_1[5] = (longlong)(puVar1 + 8);
    if (puVar1 != (undefined2 *) 0x0) {
        *puVar1 = 0;
    }
    if ((undefined8 * ) * param_2 != (undefined8 *) 0x0) {
        (***(code * **)(undefined8 * ) * param_2)();
    }
    *param_1 = *param_2;
    *(undefined4 * )(param_1 + 1) = *(undefined4 * )(param_2 + 1);
    return param_1;
}


undefined8 FUN_140109710(longlong **param_1, undefined8 param_2, short *param_3, char param_4) {
    short sVar1;
    longlong *plVar2;
    char cVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong lVar6;

    plVar2 = *param_1;
    if (plVar2 != (longlong *) 0x0) {
        if (param_3 == (short *) 0x0) goto LAB_1401097b7;
        cVar3 = FUN_14002c740(param_1 + 2, param_3);
        if (cVar3 != '\0') {
            if (param_4 == '\0') {
                return 0;
            }
            *(undefined4 * )(param_1 + 1) = DAT_140c63664;
            return 0;
        }
    }
    if ((param_3 != (short *) 0x0) && (*param_3 != 0)) {
        lVar4 = FUN_140108e80(param_2, param_3);
        if (lVar4 != 0) {
            lVar6 = 0;
            sVar1 = *param_3;
            while (sVar1 != 0) {
                lVar6 = lVar6 + 1;
                sVar1 = param_3[lVar6];
            }
            FUN_14001c480(param_1 + 2, param_3, param_3 + lVar6);
        }
        uVar5 = FUN_1401097f0(param_1, lVar4);
        return uVar5;
    }
    LAB_1401097b7:
    if (plVar2 != (longlong *) 0x0) {
        (**(code * *)(*plVar2 + 8))();
        *param_1 = (longlong *) 0x0;
    }
    return 0;
}


undefined8 FUN_1401097f0(longlong **param_1, longlong *param_2) {
    if (param_2 != *param_1) {
        if (param_2 != (longlong *) 0x0) {
            (**(code * *) * param_2)(param_2);
        }
        if (*param_1 != (longlong *) 0x0) {
            (**(code * *)(**param_1 + 8))();
            *param_1 = (longlong *) 0x0;
        }
        *param_1 = param_2;
    }
    return 0;
}


void FUN_140109840(longlong *param_1, int *param_2) {
    undefined auStack456[32];
    int local_1a8;
    int local_1a4;
    int local_1a0;
    int local_19c;
    int local_198;
    int local_190;
    int local_188;
    int local_180;
    int local_178;
    int local_170;
    int local_168;
    int local_160;
    int local_154;
    int local_14c;
    int local_104;
    int local_fc;
    int local_b4;
    int local_ac;
    int local_64;
    int local_5c;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack456;
    if (*param_1 != 0) {
        FUN_140109c00(param_1, &local_1a8);
    }
    *param_2 = (((((local_190 - local_188) - local_198) - local_178) - local_168) - local_1a8) +
               local_1a0 + local_180 + local_170 + local_160;
    param_2[1] = (((((local_19c - local_1a4) - local_154) - local_104) - local_b4) - local_64) +
                 local_14c + local_fc + local_ac + local_5c;
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack456);
    return;
}


int *FUN_140109900(undefined8 param_1, ulonglong *param_2, int *param_3, int *param_4, uint param_5) {
    uint uVar1;
    longlong lVar2;
    ulonglong uVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;

    uVar3 = *param_2;
    if (uVar3 == 0) {
        uVar5 = 0;
        uVar6 = 0;
        uVar4 = 0;
    } else {
        lVar2 = FUN_140101180(param_1, (DAT_140c63664 - *(float *) (param_2 + 1)) *
                                       *(float *) ((longlong) param_2 + 0xc));
        uVar3 = (ulonglong)(uint)(*(int *) (lVar2 + 0xc) - *(int *) (lVar2 + 8));
        uVar5 = *(int *) (lVar2 + 0x24) - *(int *) (lVar2 + 0x20);
        uVar6 = *(int *) (lVar2 + 0x1c) - *(int *) (lVar2 + 0x18);
        uVar4 = *(int *) (lVar2 + 0x34) - *(int *) (lVar2 + 0x30);
    }
    uVar1 = param_5;
    if ((uint) uVar3 < param_5) {
        uVar1 = (uint) uVar3;
    }
    *param_4 = *param_4 + uVar1;
    uVar1 = param_5;
    if (uVar5 < param_5) {
        uVar1 = uVar5;
    }
    param_4[1] = param_4[1] + uVar1;
    uVar5 = param_5;
    if (uVar6 < param_5) {
        uVar5 = uVar6;
    }
    param_4[2] = param_4[2] - uVar5;
    if (uVar4 < param_5) {
        param_5 = uVar4;
    }
    param_4[3] = param_4[3] - param_5;
    *param_3 = *param_4;
    param_3[1] = param_4[1];
    param_3[2] = param_4[2];
    param_3[3] = param_4[3];
    return param_3;
}


ulonglong FUN_1401099e0(undefined8 param_1, longlong *param_2) {
    longlong lVar1;
    longlong lVar2;
    longlong *in_RAX;
    ulonglong uVar3;
    undefined local_res8[32];

    lVar1 = *param_2;
    if (lVar1 != 0) {
        lVar2 = (*(longlong * )(lVar1 + 0x40) - *(longlong * )(lVar1 + 0x38)) / 0x130;
        if ((int) lVar2 == 0) {
            return 1;
        }
        in_RAX = (longlong *)
                FUN_140101180(param_1, (DAT_140c63664 - *(float *) (param_2 + 1)) *
                                       *(float *) ((longlong) param_2 + 0xc), lVar1, lVar2, local_res8);
        if ((in_RAX != (longlong *) 0x0) && (*in_RAX != 0)) {
            uVar3 = FUN_1400fe680();
            return uVar3 & 0xffffffffffffff00 | (ulonglong)(uVar3 != 0);
        }
    }
    return (ulonglong) in_RAX & 0xffffffffffffff00;
}


void FUN_140109a70(longlong *param_1, undefined8 param_2, undefined8 param_3) {
    if (*param_1 == 0) {
        return;
    }
    FUN_140103cf0(*param_1, param_2, param_3, 0,
                  (DAT_140c63664 - *(float *) (param_1 + 1)) * *(float *) ((longlong) param_1 + 0xc));
    return;
}


undefined8 FUN_140109ab0(float param_1, longlong *param_2, undefined8 param_3, undefined8 param_4) {
    undefined8 uVar1;
    longlong lVar2;
    int iVar3;
    longlong lVar4;
    float fVar5;
    undefined4 uVar6;
    float fVar7;
    undefined4 uVar8;
    float fVar9;
    undefined4 uVar10;
    undefined local_res8[8];

    lVar4 = *param_2;
    if (lVar4 == 0) {
        return 0;
    }
    lVar2 = (*(longlong * )(lVar4 + 0x40) - *(longlong * )(lVar4 + 0x38)) / 0x130;
    if ((int) lVar2 != 0) {
        uVar1 = FUN_140101180(param_1, (DAT_140c63664 - *(float *) (param_2 + 1)) *
                                       *(float *) ((longlong) param_2 + 0xc), lVar4, lVar2, local_res8);
        uVar1 = FUN_1400ffa10(uVar1, param_3, param_4);
        return uVar1;
    }
    fVar7 = 0.0;
    uVar8 = 0;
    iVar3 = 0;
    lVar2 = 0;
    fVar5 = fVar7;
    uVar6 = uVar8;
    if (0 < (int) (*(longlong * )(lVar4 + 0x60) - *(longlong * )(lVar4 + 0x58) >> 3)) {
        fVar9 = 1.0;
        uVar10 = 0;
        do {
            if (lVar2 < 0) {
                lVar4 = 0;
            } else if (iVar3 < (int) (*(longlong * )(lVar4 + 0x60) - *(longlong * )(lVar4 + 0x58) >> 3)) {
                lVar4 = *(longlong * )(*(longlong * )(lVar4 + 0x58) + lVar2 * 8);
            }
            uVar1 = FUN_140101180(param_1, (DAT_140c63664 - *(float *) (param_2 + 1)) *
                                           *(float *) ((longlong) param_2 + 0xc), lVar4);
            param_1 = (float) FUN_1400ffa10(uVar1, param_3, param_4);
            fVar7 = fVar7 + param_1;
            fVar5 = fVar9;
            uVar6 = uVar10;
            if (fVar9 <= fVar7) break;
            lVar4 = *param_2;
            iVar3 = iVar3 + 1;
            lVar2 = lVar2 + 1;
            fVar5 = fVar7;
            uVar6 = uVar8;
        } while (iVar3 < (int) (*(longlong * )(lVar4 + 0x60) - *(longlong * )(lVar4 + 0x58) >> 3));
    }
    return CONCAT44(uVar6, fVar5);
}


void FUN_140109c00(undefined8 param_1, longlong *param_2, longlong param_3) {
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    uint uVar4;
    longlong lVar5;
    undefined4 *puVar6;
    uint uVar7;
    uint uVar8;
    undefined auStack104[32];
    undefined4 local_48[4];
    undefined4 local_38;
    undefined4 local_34;
    undefined4 local_30[4];
    undefined4 local_20;
    undefined4 local_1c;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack104;
    lVar3 = *param_2;
    lVar2 = *(longlong * )(lVar3 + 0x60) - *(longlong * )(lVar3 + 0x58) >> 3;
    if (lVar2 == 0) {
        lVar5 = (*(longlong * )(lVar3 + 0x40) - *(longlong * )(lVar3 + 0x38)) / 0x130;
        if (lVar5 == 0) goto LAB_140109cab;
    } else {
        lVar5 = param_3;
        if ((int) lVar2 < 1) {
            LAB_140109cab:
            FUN_1407db4f0(local_18 ^ (ulonglong) auStack104);
            return;
        }
    }
    if (0 < (int) (*(longlong * )(lVar3 + 0x60) - *(longlong * )(lVar3 + 0x58) >> 3)) {
        lVar3 = **(longlong * *)(lVar3 + 0x58);
    }
    lVar3 = FUN_140101180(param_1, (DAT_140c63664 - *(float *) (param_2 + 1)) *
                                   *(float *) ((longlong) param_2 + 0xc), lVar3, lVar5, 0);
    if (lVar3 == 0) {
        FUN_1407db4f0(local_18 ^ (ulonglong) auStack104);
        return;
    }
    local_48[0] = *(undefined4 * )(lVar3 + 8);
    local_48[1] = *(undefined4 * )(lVar3 + 0xc);
    local_48[2] = *(undefined4 * )(lVar3 + 0x10);
    local_48[3] = *(undefined4 * )(lVar3 + 0x14);
    local_38 = *(undefined4 * )(lVar3 + 0x18);
    local_34 = *(undefined4 * )(lVar3 + 0x1c);
    local_30[0] = *(undefined4 * )(lVar3 + 0x20);
    local_30[1] = *(undefined4 * )(lVar3 + 0x24);
    local_30[2] = *(undefined4 * )(lVar3 + 0x28);
    local_30[3] = *(undefined4 * )(lVar3 + 0x2c);
    local_20 = *(undefined4 * )(lVar3 + 0x30);
    local_1c = *(undefined4 * )(lVar3 + 0x34);
    puVar6 = (undefined4 * )(param_3 + 8);
    uVar7 = 0;
    do {
        uVar8 = uVar7 + 1;
        iVar1 = (int) ((ulonglong) uVar7 / 5);
        uVar4 = uVar7 + iVar1 * -5;
        puVar6[-2] = local_48[uVar4];
        puVar6[-1] = local_30[(ulonglong) uVar7 / 5];
        *puVar6 = local_48[uVar4 + 1];
        puVar6[1] = local_30[iVar1 + 1];
        puVar6 = puVar6 + 4;
        uVar7 = uVar8;
    } while (uVar8 < 0x19);
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack104);
    return;
}


undefined8 *FUN_140109d90(undefined8 *param_1) {
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
    param_1[3] = FUN_1400fd810;
    param_1[4] = FUN_1400fd840;
    return param_1;
}


void FUN_140109e00(undefined8 *param_1) {
    longlong *plVar1;
    longlong lVar2;
    ulonglong uVar3;

    uVar3 = 0;
    if (param_1[1] != 0) {
        do {
            plVar1 = (longlong * )(param_1[2] + uVar3 * 8);
            lVar2 = *(longlong * )(param_1[2] + uVar3 * 8);
            while (lVar2 != 0) {
                lVar2 = *plVar1;
                *plVar1 = *(longlong * )(lVar2 + 8);
                if (*(longlong * *)(lVar2 + 0x20) != (longlong *) 0x0) {
                    (**(code * *)(**(longlong * *)(lVar2 + 0x20) + 8))();
                }
                FUN_14018b900(lVar2, 0);
                lVar2 = *plVar1;
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < (ulonglong) param_1[1]);
        *param_1 = 0;
        return;
    }
    *param_1 = 0;
    return;
}


undefined8 *FUN_140109e90(undefined8 *param_1) {
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
    param_1[3] = FUN_1400fd9c0;
    param_1[4] = FUN_1400fda80;
    return param_1;
}


void FUN_140109f00(undefined8 *param_1) {
    longlong *plVar1;
    longlong lVar2;
    ulonglong uVar3;

    uVar3 = 0;
    if (param_1[1] != 0) {
        do {
            plVar1 = (longlong * )(param_1[2] + uVar3 * 8);
            lVar2 = *(longlong * )(param_1[2] + uVar3 * 8);
            while (lVar2 != 0) {
                lVar2 = *plVar1;
                *plVar1 = *(longlong * )(lVar2 + 8);
                if (*(longlong * *)(lVar2 + 0x28) != (longlong *) 0x0) {
                    (**(code * *)(**(longlong * *)(lVar2 + 0x28) + 8))();
                }
                FUN_14018b900(lVar2, 0);
                lVar2 = *plVar1;
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < (ulonglong) param_1[1]);
        *param_1 = 0;
        return;
    }
    *param_1 = 0;
    return;
}


void FUN_140109f90(longlong param_1, longlong param_2, undefined8 param_3) {
    longlong lVar1;
    ulonglong uVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    undefined auStack424[48];
    longlong *local_178[11];
    undefined4 local_120;
    undefined4 local_11c;
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong) auStack424;
    lVar5 = *(longlong * )(param_1 + 0x10);
    if (lVar5 == *(longlong * )(param_1 + 0x18)) {
        lVar5 = (lVar5 - *(longlong * )(param_1 + 8)) / 0x130;
        lVar4 = lVar5 * 2;
        if (lVar5 == 0) {
            lVar4 = 1;
        }
        uVar2 = FUN_14018a3e0(lVar4 * 0x130);
        lVar6 = (uVar2 / 0x130) * 0x130;
        lVar3 = FUN_14018b280(lVar6, 0);
        lVar4 = lVar3;
        for (lVar5 = *(longlong * )(param_1 + 8); lVar5 != param_2; lVar5 = lVar5 + 0x130) {
            if (lVar4 != 0) {
                FUN_1400feb20(lVar4, lVar5);
            }
            lVar4 = lVar4 + 0x130;
        }
        if (lVar4 != 0) {
            FUN_1400feb20(lVar4, param_3);
        }
        lVar1 = *(longlong * )(param_1 + 0x10);
        lVar5 = lVar4 + 0x130;
        if (param_2 != lVar1) {
            lVar4 = (param_2 - lVar4) + -0x130 + lVar5;
            do {
                if (lVar5 != 0) {
                    FUN_1400feb20(lVar5, lVar4);
                }
                lVar4 = lVar4 + 0x130;
                lVar5 = lVar5 + 0x130;
            } while (lVar4 != lVar1);
        }
        FUN_14010a3e0(*(undefined8 * )(param_1 + 8), *(undefined8 * )(param_1 + 0x10));
        if (*(longlong * )(param_1 + 8) != 0) {
            FUN_14018b900(*(longlong * )(param_1 + 8), 0);
        }
        *(longlong * )(param_1 + 8) = lVar3;
        *(longlong * )(param_1 + 0x10) = lVar5;
        *(longlong * )(param_1 + 0x18) = lVar6 + lVar3;
    } else {
        if (lVar5 != 0) {
            FUN_1400feb20(lVar5, lVar5 + -0x130);
        }
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x130;
        FUN_1400feb20(local_178, param_3);
        FUN_14010a760(param_2, *(longlong * )(param_1 + 0x10) + -0x260,
                      *(longlong * )(param_1 + 0x10) + -0x130);
        FUN_1400fee50(param_2, local_178);
        if (local_178[0] != (longlong *) 0x0) {
            (**(code * *)(*local_178[0] + 8))();
        }
        FUN_1401429a0(DAT_140c63678, local_11c);
        FUN_1401429a0(DAT_140c63678, local_120);
    }
    FUN_1407db4f0(local_48 ^ (ulonglong) auStack424);
    return;
}


void FUN_14010a1c0(longlong param_1, undefined8 *param_2, undefined8 *param_3) {
    undefined8 *puVar1;
    undefined8 uVar2;
    ulonglong uVar3;
    longlong lVar4;
    longlong lVar5;

    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    if (puVar1 != *(undefined8 * *)(param_1 + 0x18)) {
        if (puVar1 != (undefined8 *) 0x0) {
            *puVar1 = puVar1[-1];
        }
        uVar2 = *param_3;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 8;
        FUN_1407db590(*(longlong * )(param_1 + 0x10) +
                      ((*(longlong * )(param_1 + 0x10) - (longlong) param_2) + -0x10 >> 3) * -8 + -8);
        *param_2 = uVar2;
        return;
    }
    lVar5 = (longlong) puVar1 - *(longlong * )(param_1 + 8) >> 3;
    lVar4 = lVar5 * 2;
    if (lVar5 == 0) {
        lVar4 = 1;
    }
    uVar3 = FUN_14018a3e0(lVar4 * 8);
    lVar5 = FUN_14018b280(uVar3 & 0xfffffffffffffff8, 0);
    lVar4 = ((longlong) param_2 - *(longlong * )(param_1 + 8) >> 3) * 8;
    FUN_1407db590(lVar5, *(longlong * )(param_1 + 8), lVar4);
    puVar1 = (undefined8 * )(lVar4 + lVar5);
    if (puVar1 != (undefined8 *) 0x0) {
        *puVar1 = *param_3;
    }
    lVar4 = *(longlong * )(param_1 + 0x10) - (longlong) param_2 >> 3;
    FUN_1407db590(puVar1 + 1, param_2, lVar4 * 8);
    if (*(longlong * )(param_1 + 8) != 0) {
        FUN_14018b900(*(longlong * )(param_1 + 8), 0);
    }
    *(longlong * )(param_1 + 8) = lVar5;
    *(undefined8 * *)(param_1 + 0x10) = puVar1 + 1 + lVar4;
    *(ulonglong * )(param_1 + 0x18) = (uVar3 & 0xfffffffffffffff8) + lVar5;
    return;
}


longlong FUN_14010a310(longlong param_1, short *param_2, longlong param_3) {
    short sVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    ulonglong uVar5;

    lVar4 = 0;
    sVar1 = *param_2;
    while (sVar1 != 0) {
        lVar4 = lVar4 + 1;
        sVar1 = param_2[lVar4];
    }
    lVar2 = *(longlong * )(param_3 + 0x10);
    lVar3 = *(longlong * )(param_3 + 8);
    *(undefined8 * )(param_1 + 8) = 0;
    *(undefined8 * )(param_1 + 0x10) = 0;
    *(undefined8 * )(param_1 + 0x18) = 0;
    uVar5 = (lVar2 - lVar3 >> 1) + 1 + lVar4;
    if (uVar5 < 0x7fffffffffffffff) {
        lVar2 = uVar5 * 2;
        lVar3 = FUN_14018b280(lVar2, 0);
        *(longlong * )(param_1 + 8) = lVar3;
        *(longlong * )(param_1 + 0x10) = lVar3;
        *(longlong * )(param_1 + 0x18) = lVar3 + lVar2;
    }
    if (*(undefined2 * *)(param_1 + 0x10) != (undefined2 *) 0x0) {
        **(undefined2 * *)(param_1 + 0x10) = 0;
    }
    FUN_14001c310(param_1, param_2, param_2 + lVar4);
    FUN_14001c310(param_1, *(undefined8 * )(param_3 + 8), *(undefined8 * )(param_3 + 0x10));
    return param_1;
}


void FUN_14010a3e0(longlong **param_1, longlong **param_2) {
    if (param_1 != param_2) {
        do {
            if (*param_1 != (longlong *) 0x0) {
                (**(code * *)(**param_1 + 8))();
                *param_1 = (longlong *) 0x0;
            }
            FUN_1401429a0(DAT_140c63678, *(undefined4 * )((longlong) param_1 + 0x5c));
            FUN_1401429a0(DAT_140c63678);
            param_1 = param_1 + 0x26;
        } while (param_1 != param_2);
    }
    return;
}


short *FUN_14010a450(short *param_1, short *param_2, short *param_3, short *param_4) {
    short *psVar1;
    short *psVar2;
    short *psVar3;
    short *psVar4;

    if ((param_1 == param_2) || (param_3 == param_4)) {
        return param_1;
    }
    psVar1 = param_3 + 1;
    if (psVar1 == param_4) {
        do {
            if (*param_1 == *param_3) {
                return param_1;
            }
            param_1 = param_1 + 1;
        } while (param_1 != param_2);
        return param_1;
    }
    do {
        while (*param_1 != *param_3) {
            param_1 = param_1 + 1;
            if (param_1 == param_2) {
                return param_2;
            }
        }
        psVar2 = param_1 + 1;
        if (psVar2 == param_2) {
            return param_2;
        }
        psVar3 = psVar2;
        psVar4 = psVar1;
        if (*psVar2 == *psVar1) {
            do {
                psVar4 = psVar4 + 1;
                if (psVar4 == param_4) {
                    return param_1;
                }
                psVar3 = psVar3 + 1;
                if (psVar3 == param_2) {
                    return param_2;
                }
            } while (*psVar3 == *psVar4);
        }
        param_1 = psVar2;
        if (psVar2 == param_2) {
            return psVar2;
        }
    } while (true);
}


longlong *FUN_14010a540(longlong *param_1, longlong *param_2, undefined8 param_3) {
    undefined2 *puVar1;
    int iVar2;
    undefined2 *puVar3;
    longlong lVar4;

    for (lVar4 = (longlong) param_2 - (longlong) param_1 >> 5; 0 < lVar4; lVar4 = lVar4 + -1) {
        if (*param_1 != 0) {
            puVar1 = *(undefined2 * *)(*param_1 + 0x20);
            puVar3 = &DAT_140b7b704;
            if (puVar1 != (undefined2 *) 0x0) {
                puVar3 = puVar1;
            }
            if (puVar3 != (undefined2 *) 0x0) {
                puVar3 = &DAT_140b7b704;
                if (puVar1 != (undefined2 *) 0x0) {
                    puVar3 = puVar1;
                }
                iVar2 = FUN_14018e2c0(puVar3, param_3);
                if (iVar2 == 0) {
                    return param_1;
                }
            }
        }
        if (param_1[1] != 0) {
            puVar1 = *(undefined2 * *)(param_1[1] + 0x20);
            puVar3 = &DAT_140b7b704;
            if (puVar1 != (undefined2 *) 0x0) {
                puVar3 = puVar1;
            }
            if (puVar3 != (undefined2 *) 0x0) {
                puVar3 = &DAT_140b7b704;
                if (puVar1 != (undefined2 *) 0x0) {
                    puVar3 = puVar1;
                }
                iVar2 = FUN_14018e2c0(puVar3, param_3);
                if (iVar2 == 0) {
                    return param_1 + 1;
                }
            }
        }
        if (param_1[2] != 0) {
            puVar1 = *(undefined2 * *)(param_1[2] + 0x20);
            puVar3 = &DAT_140b7b704;
            if (puVar1 != (undefined2 *) 0x0) {
                puVar3 = puVar1;
            }
            if (puVar3 != (undefined2 *) 0x0) {
                puVar3 = &DAT_140b7b704;
                if (puVar1 != (undefined2 *) 0x0) {
                    puVar3 = puVar1;
                }
                iVar2 = FUN_14018e2c0(puVar3, param_3);
                if (iVar2 == 0) {
                    return param_1 + 2;
                }
            }
        }
        if (param_1[3] != 0) {
            puVar1 = *(undefined2 * *)(param_1[3] + 0x20);
            puVar3 = &DAT_140b7b704;
            if (puVar1 != (undefined2 *) 0x0) {
                puVar3 = puVar1;
            }
            if (puVar3 != (undefined2 *) 0x0) {
                puVar3 = &DAT_140b7b704;
                if (puVar1 != (undefined2 *) 0x0) {
                    puVar3 = puVar1;
                }
                iVar2 = FUN_14018e2c0(puVar3, param_3);
                if (iVar2 == 0) {
                    return param_1 + 3;
                }
            }
        }
        param_1 = param_1 + 4;
    }
    lVar4 = (longlong) param_2 - (longlong) param_1 >> 3;
    if (lVar4 != 1) {
        if (lVar4 != 2) {
            if (lVar4 != 3) {
                return param_2;
            }
            if (*param_1 != 0) {
                puVar1 = *(undefined2 * *)(*param_1 + 0x20);
                puVar3 = &DAT_140b7b704;
                if (puVar1 != (undefined2 *) 0x0) {
                    puVar3 = puVar1;
                }
                if (puVar3 != (undefined2 *) 0x0) {
                    puVar3 = &DAT_140b7b704;
                    if (puVar1 != (undefined2 *) 0x0) {
                        puVar3 = puVar1;
                    }
                    iVar2 = FUN_14018e2c0(puVar3, param_3);
                    if (iVar2 == 0) {
                        return param_1;
                    }
                }
            }
            param_1 = param_1 + 1;
        }
        if (*param_1 != 0) {
            puVar1 = *(undefined2 * *)(*param_1 + 0x20);
            puVar3 = &DAT_140b7b704;
            if (puVar1 != (undefined2 *) 0x0) {
                puVar3 = puVar1;
            }
            if (puVar3 != (undefined2 *) 0x0) {
                puVar3 = &DAT_140b7b704;
                if (puVar1 != (undefined2 *) 0x0) {
                    puVar3 = puVar1;
                }
                iVar2 = FUN_14018e2c0(puVar3, param_3);
                if (iVar2 == 0) {
                    return param_1;
                }
            }
        }
        param_1 = param_1 + 1;
    }
    if (*param_1 != 0) {
        puVar1 = *(undefined2 * *)(*param_1 + 0x20);
        puVar3 = &DAT_140b7b704;
        if (puVar1 != (undefined2 *) 0x0) {
            puVar3 = puVar1;
        }
        if (puVar3 != (undefined2 *) 0x0) {
            puVar3 = &DAT_140b7b704;
            if (puVar1 != (undefined2 *) 0x0) {
                puVar3 = puVar1;
            }
            iVar2 = FUN_14018e2c0(puVar3, param_3);
            if (iVar2 == 0) {
                return param_1;
            }
        }
    }
    return param_2;
}


longlong **FUN_14010a760(longlong param_1, longlong param_2, longlong **param_3) {
    uint uVar1;
    int iVar2;
    longlong *plVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    longlong lVar7;
    longlong lVar8;
    undefined4 *puVar9;
    undefined4 *puVar10;

    lVar8 = (param_2 - param_1) / 0x26 + (param_2 - param_1 >> 0x3f);
    lVar8 = (lVar8 >> 3) - (lVar8 >> 0x3f);
    if (0 < lVar8) {
        lVar7 = DAT_140c63678;
        puVar9 = (undefined4 * )(param_2 + 0x4c);
        puVar10 = (undefined4 * )((longlong) param_3 + 0x4c);
        do {
            param_3 = param_3 + -0x26;
            plVar3 = *param_3;
            puVar10[-0x5d] = puVar9[-0x5d];
            puVar10[-0x5c] = puVar9[-0x5c];
            puVar10[-0x5b] = puVar9[-0x5b];
            puVar10[-0x5a] = puVar9[-0x5a];
            puVar10[-0x59] = puVar9[-0x59];
            puVar10[-0x58] = puVar9[-0x58];
            puVar10[-0x57] = puVar9[-0x57];
            puVar10[-0x56] = puVar9[-0x56];
            puVar10[-0x55] = puVar9[-0x55];
            puVar10[-0x54] = puVar9[-0x54];
            puVar10[-0x53] = puVar9[-0x53];
            puVar10[-0x52] = puVar9[-0x52];
            *(undefined * )(puVar10 + -0x51) = *(undefined * )(puVar9 + -0x51);
            *(undefined * )((longlong) puVar10 + -0x143) = *(undefined * )((longlong) puVar9 + -0x143);
            *(undefined * )((longlong) puVar10 + -0x142) = *(undefined * )((longlong) puVar9 + -0x142);
            if (plVar3 != *(longlong * *)(puVar9 + -0x5f)) {
                if (plVar3 != (longlong *) 0x0) {
                    (**(code * *)(*plVar3 + 8))(plVar3);
                    lVar7 = DAT_140c63678;
                    *param_3 = (longlong *) 0x0;
                }
                plVar3 = *(longlong * *)(puVar9 + -0x5f);
                *param_3 = plVar3;
                if (plVar3 != (longlong *) 0x0) {
                    (**(code * *) * plVar3)(plVar3);
                    lVar7 = DAT_140c63678;
                }
            }
            puVar10[-0x50] = puVar9[-0x50];
            puVar10[-0x4f] = puVar9[-0x4f];
            puVar10[-0x4e] = puVar9[-0x4e];
            puVar10[-0x4d] = puVar9[-0x4d];
            puVar10[-0x4c] = puVar9[-0x4c];
            if (puVar10 + -0x49 != puVar9 + -0x49) {
                FUN_1401429a0(lVar7);
                lVar7 = DAT_140c63678;
                uVar1 = puVar9[-0x49];
                puVar10[-0x49] = uVar1;
                if ((ulonglong) uVar1 < *(ulonglong * )(lVar7 + 0x30)) {
                    iVar2 = *(int *) ((ulonglong) uVar1 * 0x20 + 0x10 + *(longlong * )(lVar7 + 0x28));
                    if (iVar2 - 1U < 0xfffffffe) {
                        *(int *) ((ulonglong) uVar1 * 0x20 + 0x10 + *(longlong * )(lVar7 + 0x28)) = iVar2 + 1;
                    }
                }
            }
            if (puVar10 + -0x48 != puVar9 + -0x48) {
                FUN_1401429a0(lVar7);
                lVar7 = DAT_140c63678;
                uVar1 = puVar9[-0x48];
                puVar10[-0x48] = uVar1;
                if ((ulonglong) uVar1 < *(ulonglong * )(lVar7 + 0x30)) {
                    iVar2 = *(int *) ((ulonglong) uVar1 * 0x20 + 0x10 + *(longlong * )(lVar7 + 0x28));
                    if (iVar2 - 1U < 0xfffffffe) {
                        *(int *) ((ulonglong) uVar1 * 0x20 + 0x10 + *(longlong * )(lVar7 + 0x28)) = iVar2 + 1;
                    }
                }
            }
            lVar8 = lVar8 + -1;
            puVar10[-0x4b] = puVar9[-0x4b];
            puVar10[-0x4a] = puVar9[-0x4a];
            *(undefined * )(puVar10 + -0x47) = *(undefined * )(puVar9 + -0x47);
            uVar4 = puVar9[-0x42];
            uVar5 = puVar9[-0x41];
            uVar6 = puVar9[-0x40];
            puVar10[-0x43] = puVar9[-0x43];
            puVar10[-0x42] = uVar4;
            puVar10[-0x41] = uVar5;
            puVar10[-0x40] = uVar6;
            *(undefined8 * )(puVar10 + -0x3f) = *(undefined8 * )(puVar9 + -0x3f);
            *(undefined8 * )(puVar10 + -0x3d) = *(undefined8 * )(puVar9 + -0x3d);
            *(undefined8 * )(puVar10 + -0x3b) = *(undefined8 * )(puVar9 + -0x3b);
            *(undefined8 * )(puVar10 + -0x39) = *(undefined8 * )(puVar9 + -0x39);
            puVar10[-0x37] = puVar9[-0x37];
            puVar10[-0x36] = puVar9[-0x36];
            puVar10[-0x35] = puVar9[-0x35];
            puVar10[-0x34] = puVar9[-0x34];
            puVar10[-0x33] = puVar9[-0x33];
            puVar10[-0x32] = puVar9[-0x32];
            puVar10[-0x31] = puVar9[-0x31];
            puVar10[-0x30] = puVar9[-0x30];
            puVar10[-0x2f] = puVar9[-0x2f];
            uVar4 = puVar9[-0x2a];
            uVar5 = puVar9[-0x29];
            uVar6 = puVar9[-0x28];
            puVar10[-0x2b] = puVar9[-0x2b];
            puVar10[-0x2a] = uVar4;
            puVar10[-0x29] = uVar5;
            puVar10[-0x28] = uVar6;
            *(undefined8 * )(puVar10 + -0x27) = *(undefined8 * )(puVar9 + -0x27);
            *(undefined8 * )(puVar10 + -0x25) = *(undefined8 * )(puVar9 + -0x25);
            *(undefined8 * )(puVar10 + -0x23) = *(undefined8 * )(puVar9 + -0x23);
            *(undefined8 * )(puVar10 + -0x21) = *(undefined8 * )(puVar9 + -0x21);
            puVar10[-0x1f] = puVar9[-0x1f];
            puVar10[-0x1e] = puVar9[-0x1e];
            puVar10[-0x1d] = puVar9[-0x1d];
            puVar10[-0x1c] = puVar9[-0x1c];
            puVar10[-0x1b] = puVar9[-0x1b];
            puVar10[-0x1a] = puVar9[-0x1a];
            puVar10[-0x19] = puVar9[-0x19];
            puVar10[-0x18] = puVar9[-0x18];
            puVar10[-0x17] = puVar9[-0x17];
            puVar9 = puVar9 + -0x4c;
            puVar10 = puVar10 + -0x4c;
        } while (0 < lVar8);
    }
    return param_3;
}


longlong **FUN_14010aa70(longlong param_1, longlong param_2, longlong **param_3) {
    uint uVar1;
    int iVar2;
    longlong *plVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    longlong lVar7;
    longlong lVar8;
    undefined4 *puVar9;
    undefined4 *puVar10;

    lVar8 = (param_2 - param_1) / 0x26 + (param_2 - param_1 >> 0x3f);
    lVar8 = (lVar8 >> 3) - (lVar8 >> 0x3f);
    if (0 < lVar8) {
        lVar7 = DAT_140c63678;
        puVar9 = (undefined4 * )(param_1 + 0x4c);
        puVar10 = (undefined4 * )((longlong) param_3 + 0x4c);
        do {
            plVar3 = *param_3;
            puVar10[-0x11] = puVar9[-0x11];
            puVar10[-0x10] = puVar9[-0x10];
            puVar10[-0xf] = puVar9[-0xf];
            puVar10[-0xe] = puVar9[-0xe];
            puVar10[-0xd] = puVar9[-0xd];
            puVar10[-0xc] = puVar9[-0xc];
            puVar10[-0xb] = puVar9[-0xb];
            puVar10[-10] = puVar9[-10];
            puVar10[-9] = puVar9[-9];
            puVar10[-8] = puVar9[-8];
            puVar10[-7] = puVar9[-7];
            puVar10[-6] = puVar9[-6];
            *(undefined * )(puVar10 + -5) = *(undefined * )(puVar9 + -5);
            *(undefined * )((longlong) puVar10 + -0x13) = *(undefined * )((longlong) puVar9 + -0x13);
            *(undefined * )((longlong) puVar10 + -0x12) = *(undefined * )((longlong) puVar9 + -0x12);
            if (plVar3 != *(longlong * *)(puVar9 + -0x13)) {
                if (plVar3 != (longlong *) 0x0) {
                    (**(code * *)(*plVar3 + 8))(plVar3);
                    lVar7 = DAT_140c63678;
                    *param_3 = (longlong *) 0x0;
                }
                plVar3 = *(longlong * *)(puVar9 + -0x13);
                *param_3 = plVar3;
                if (plVar3 != (longlong *) 0x0) {
                    (**(code * *) * plVar3)(plVar3);
                    lVar7 = DAT_140c63678;
                }
            }
            puVar10[-4] = puVar9[-4];
            puVar10[-3] = puVar9[-3];
            puVar10[-2] = puVar9[-2];
            puVar10[-1] = puVar9[-1];
            *puVar10 = *puVar9;
            if (puVar10 + 3 != puVar9 + 3) {
                FUN_1401429a0(lVar7);
                lVar7 = DAT_140c63678;
                uVar1 = puVar9[3];
                puVar10[3] = uVar1;
                if ((ulonglong) uVar1 < *(ulonglong * )(lVar7 + 0x30)) {
                    iVar2 = *(int *) ((ulonglong) uVar1 * 0x20 + 0x10 + *(longlong * )(lVar7 + 0x28));
                    if (iVar2 - 1U < 0xfffffffe) {
                        *(int *) ((ulonglong) uVar1 * 0x20 + 0x10 + *(longlong * )(lVar7 + 0x28)) = iVar2 + 1;
                    }
                }
            }
            if (puVar10 + 4 != puVar9 + 4) {
                FUN_1401429a0(lVar7);
                lVar7 = DAT_140c63678;
                uVar1 = puVar9[4];
                puVar10[4] = uVar1;
                if ((ulonglong) uVar1 < *(ulonglong * )(lVar7 + 0x30)) {
                    iVar2 = *(int *) ((ulonglong) uVar1 * 0x20 + 0x10 + *(longlong * )(lVar7 + 0x28));
                    if (iVar2 - 1U < 0xfffffffe) {
                        *(int *) ((ulonglong) uVar1 * 0x20 + 0x10 + *(longlong * )(lVar7 + 0x28)) = iVar2 + 1;
                    }
                }
            }
            lVar8 = lVar8 + -1;
            puVar10[1] = puVar9[1];
            param_3 = param_3 + 0x26;
            puVar10[2] = puVar9[2];
            *(undefined * )(puVar10 + 5) = *(undefined * )(puVar9 + 5);
            uVar4 = puVar9[10];
            uVar5 = puVar9[0xb];
            uVar6 = puVar9[0xc];
            puVar10[9] = puVar9[9];
            puVar10[10] = uVar4;
            puVar10[0xb] = uVar5;
            puVar10[0xc] = uVar6;
            *(undefined8 * )(puVar10 + 0xd) = *(undefined8 * )(puVar9 + 0xd);
            *(undefined8 * )(puVar10 + 0xf) = *(undefined8 * )(puVar9 + 0xf);
            *(undefined8 * )(puVar10 + 0x11) = *(undefined8 * )(puVar9 + 0x11);
            *(undefined8 * )(puVar10 + 0x13) = *(undefined8 * )(puVar9 + 0x13);
            puVar10[0x15] = puVar9[0x15];
            puVar10[0x16] = puVar9[0x16];
            puVar10[0x17] = puVar9[0x17];
            puVar10[0x18] = puVar9[0x18];
            puVar10[0x19] = puVar9[0x19];
            puVar10[0x1a] = puVar9[0x1a];
            puVar10[0x1b] = puVar9[0x1b];
            puVar10[0x1c] = puVar9[0x1c];
            puVar10[0x1d] = puVar9[0x1d];
            uVar4 = puVar9[0x22];
            uVar5 = puVar9[0x23];
            uVar6 = puVar9[0x24];
            puVar10[0x21] = puVar9[0x21];
            puVar10[0x22] = uVar4;
            puVar10[0x23] = uVar5;
            puVar10[0x24] = uVar6;
            *(undefined8 * )(puVar10 + 0x25) = *(undefined8 * )(puVar9 + 0x25);
            *(undefined8 * )(puVar10 + 0x27) = *(undefined8 * )(puVar9 + 0x27);
            *(undefined8 * )(puVar10 + 0x29) = *(undefined8 * )(puVar9 + 0x29);
            *(undefined8 * )(puVar10 + 0x2b) = *(undefined8 * )(puVar9 + 0x2b);
            puVar10[0x2d] = puVar9[0x2d];
            puVar10[0x2e] = puVar9[0x2e];
            puVar10[0x2f] = puVar9[0x2f];
            puVar10[0x30] = puVar9[0x30];
            puVar10[0x31] = puVar9[0x31];
            puVar10[0x32] = puVar9[0x32];
            puVar10[0x33] = puVar9[0x33];
            puVar10[0x34] = puVar9[0x34];
            puVar10[0x35] = puVar9[0x35];
            puVar9 = puVar9 + 0x4c;
            puVar10 = puVar10 + 0x4c;
        } while (0 < lVar8);
    }
    return param_3;
}


void FUN_14010adb0(undefined8 param_1, undefined8 param_2, undefined4 param_3) {
    longlong lVar1;
    undefined auStack456[32];
    undefined local_1a8[400];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack456;
    lVar1 = FUN_1401a6c70();
    FUN_1401a4c20(local_1a8, 200, &DAT_1409e41f4, param_3);
    FUN_1401a4c50(lVar1 + 0x20, local_1a8);
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack456);
    return;
}


longlong FUN_14010ae30(longlong param_1, undefined8 param_2, undefined8 param_3) {
    undefined2 *puVar1;

    *(undefined8 * )(param_1 + 0x10) = 0;
    *(undefined8 * )(param_1 + 0x18) = 0;
    *(undefined8 * )(param_1 + 0x20) = 0;
    puVar1 = (undefined2 *) FUN_14018b280(0x10, 0);
    *(undefined2 * *)(param_1 + 0x10) = puVar1;
    *(undefined2 * *)(param_1 + 0x18) = puVar1;
    *(undefined2 * *)(param_1 + 0x20) = puVar1 + 8;
    if (puVar1 != (undefined2 *) 0x0) {
        *puVar1 = 0;
    }
    FUN_14010aeb0(param_1, param_2, param_3);
    return param_1;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14010aeb0(undefined4 *param_1, longlong param_2, short *param_3) {
    ulonglong uVar1;
    undefined2 *puVar2;
    short sVar3;
    short *psVar4;
    longlong lVar5;
    undefined4 uVar6;
    longlong lVar7;
    longlong lVar8;
    undefined2 *puVar9;
    longlong lVar10;
    undefined4 local_res18;
    undefined4 local_48[8];

    if (param_3 == (short *) 0x0) {
        *param_1 = 0xffffffff;
        if (*(undefined2 * *)(param_1 + 4) == *(undefined2 * *)(param_1 + 6)) {
            return;
        }
        **(undefined2 * *)(param_1 + 4) = 0;
        *(undefined8 * )(param_1 + 6) = *(undefined8 * )(param_1 + 4);
        return;
    }
    lVar10 = 0;
    sVar3 = *param_3;
    lVar7 = lVar10;
    while (sVar3 != 0) {
        lVar7 = lVar7 + 1;
        sVar3 = param_3[lVar7];
    }
    lVar7 = lVar7 * 2 >> 1;
    uVar1 = lVar7 + 1;
    lVar8 = lVar10;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar8 = FUN_14018b280(uVar1 * 2, 0);
    }
    lVar7 = lVar7 * 2;
    FUN_1407db590(lVar8, param_3, lVar7);
    puVar2 = (undefined2 * )(lVar7 + lVar8);
    if (puVar2 != (undefined2 *) 0x0) {
        *puVar2 = 0;
    }
    lVar7 = (longlong) puVar2 - lVar8 >> 1;
    if (lVar7 == 0) {
        LAB_14010af9e:
        if (lVar7 != 0) {
            local_res18 = CONCAT22(0x5c, (undefined2) local_res18);
            puVar9 = (undefined2 *) FUN_14002c8a0(lVar8, puVar2, local_res18);
            if ((puVar9 != puVar2) && ((longlong) puVar9 - lVar8 >> 1 != -1)) goto LAB_14010b01a;
            if (lVar7 != 0) {
                local_res18 = CONCAT22(0x2f, (undefined2) local_res18);
                puVar9 = (undefined2 *) FUN_14002c8a0(lVar8, puVar2, local_res18);
                if ((puVar9 != puVar2) && ((longlong) puVar9 - lVar8 >> 1 != -1)) goto LAB_14010b01a;
            }
        }
        uVar6 = FUN_1400f6a90(param_2 + 0xa80, param_3);
        *param_1 = uVar6;
        if (*(undefined2 * *)(param_1 + 4) != *(undefined2 * *)(param_1 + 6)) {
            **(undefined2 * *)(param_1 + 4) = 0;
            *(undefined8 * )(param_1 + 6) = *(undefined8 * )(param_1 + 4);
        }
    } else {
        local_res18 = CONCAT22(0x2e, (undefined2) local_res18);
        puVar9 = (undefined2 *) FUN_14002c8a0(lVar8, puVar2, local_res18);
        if ((puVar9 == puVar2) || ((longlong) puVar9 - lVar8 >> 1 == -1)) goto LAB_14010af9e;
        LAB_14010b01a:
        lVar7 = DAT_140c63650;
        *param_1 = 0xffffffff;
        psVar4 = *(short **) (lVar7 + 0x310);
        if ((psVar4 == (short *) 0x0) || (lVar7 = lVar10, *psVar4 == 0)) {
            if (local_48 != param_1 + 2) {
                FUN_14001c480(param_1 + 2, lVar8, puVar2);
            }
        } else {
            do {
                lVar5 = lVar7 + 1;
                lVar7 = lVar7 + 1;
            } while (psVar4[lVar5] != 0);
            param_1 = param_1 + 2;
            FUN_14001c480(param_1, psVar4, psVar4 + lVar7);
            do {
                psVar4 = &DAT_1409d552e + lVar10;
                lVar10 = lVar10 + 1;
            } while (*psVar4 != 0);
            FUN_14001c310(param_1, &DAT_1409d552c, &DAT_1409d552c + lVar10 * 2);
            FUN_14001c310(param_1, lVar8, puVar2);
        }
    }
    if (lVar8 != 0) {
        FUN_14018b900(lVar8, 0);
    }
    return;
}


void FUN_14010b100(int *param_1) {
    if (*param_1 < 0) {
        if (*(longlong * )(param_1 + 4) != *(longlong * )(param_1 + 6)) {
            FUN_1400e2370(DAT_140c63650, *(undefined8 * )(param_1 + 4));
            return;
        }
    } else if (*(longlong * *)(DAT_140c63650 + 0x728) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(DAT_140c63650 + 0x728) + 0x10))();
    }
    return;
}


void FUN_14010b160(longlong param_1, longlong param_2, longlong param_3) {
    longlong lVar1;
    longlong lVar2;
    short *psVar3;
    wchar_t *pwVar4;
    undefined8 uVar5;
    int iVar6;
    wchar_t *pwVar7;
    undefined **ppuVar8;

    lVar1 = *(longlong * )(param_2 + 0x170);
    lVar2 = FUN_1401a6b80(param_3, L"Auto");
    if ((lVar2 == 0) || (lVar2 = FUN_1401a4f40(lVar2 + 0x20), lVar2 == 0)) {
        ppuVar8 = &PTR_u_Normal_140a33098;
        do {
            lVar2 = FUN_1401a6b80(param_3);
            if ((((lVar2 == 0) || (psVar3 = (short *) FUN_1401a4f40(lVar2 + 0x20), psVar3 == (short *) 0x0))
                 || (*psVar3 == 0)) ||
                ((*(longlong * )(param_2 + 0x158) - *(longlong * )(param_2 + 0x150) & 0xfffffffffffffff8U) ==
                 0)) {
                LAB_14010b258:
                lVar2 = 0;
            } else {
                lVar2 = FUN_1400fdfe0(param_2 + 0x120);
                if (lVar2 == 0) {
                    lVar2 = FUN_1407df6e0(psVar3);
                    if (lVar2 == 0) goto LAB_14010b258;
                    lVar2 = FUN_1400fdfe0(param_2 + 0x120);
                }
            }
            *(longlong * )(param_1 + -0x140a33088 + (longlong) ppuVar8) = lVar2;
            ppuVar8 = ppuVar8 + 1;
        } while ((longlong) ppuVar8 < 0x140a330c8);
    } else {
        FUN_14010b330(param_1, param_2, lVar2, 0);
    }
    lVar2 = *(longlong * )(param_3 + 0x60);
    do {
        if (lVar2 == 0) {
            LAB_14010b2ea:
            *(longlong * )(param_1 + 0x40) = lVar1 + 0x48;
            return;
        }
        pwVar7 = L"WindowSoundTemplate";
        pwVar4 = (wchar_t *) FUN_1401a4f40();
        if (pwVar4 == L"WindowSoundTemplate") {
            LAB_14010b2ff:
            if ((lVar2 != 0) && (lVar2 = FUN_1401a4f40(lVar2 + 0x20), lVar2 != 0)) {
                uVar5 = FUN_14010dc00(lVar1, lVar2);
                *(undefined8 * )(param_1 + 0x40) = uVar5;
                return;
            }
            goto LAB_14010b2ea;
        }
        iVar6 = 0;
        if (*pwVar4 != L'\0') {
            do {
                if (((*pwVar7 == L'\0') || (*pwVar4 != *pwVar7)) || (0x7ffffffe < iVar6)) break;
                pwVar4 = pwVar4 + 1;
                pwVar7 = pwVar7 + 1;
                iVar6 = iVar6 + 1;
            } while (*pwVar4 != L'\0');
            if (iVar6 == 0x7fffffff) goto LAB_14010b2ff;
        }
        if ((*pwVar4 == L'\0') && (*pwVar7 == L'\0')) goto LAB_14010b2ff;
        lVar2 = *(longlong * )(lVar2 + 0x38);
    } while (true);
}


void FUN_14010b330(longlong param_1, longlong param_2, short *param_3, longlong param_4) {
    ulonglong uVar1;
    undefined2 *puVar2;
    short sVar3;
    short *psVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    longlong lVar9;
    longlong lVar10;
    longlong lVar11;
    longlong *plVar12;
    undefined local_58[8];
    longlong local_50;
    undefined2 *local_48;
    longlong local_40;

    if ((param_3 != (short *) 0x0) && (*param_3 != 0)) {
        lVar8 = *(longlong * )(param_2 + 0x170);
        lVar10 = 0;
        lVar9 = lVar10;
        do {
            lVar5 = lVar9 + 1;
            lVar9 = lVar9 + 1;
        } while (param_3[lVar5] != 0);
        lVar9 = lVar9 * 2 >> 1;
        uVar1 = lVar9 + 1;
        lVar5 = lVar10;
        if (uVar1 < 0x7fffffffffffffff) {
            lVar5 = FUN_14018b280(uVar1 * 2, 0);
        }
        lVar9 = lVar9 * 2;
        FUN_1407db590(lVar5, param_3, lVar9);
        puVar2 = (undefined2 * )(lVar9 + lVar5);
        if (puVar2 != (undefined2 *) 0x0) {
            *puVar2 = 0;
        }
        plVar12 = (longlong * )(param_1 + 0x10);
        lVar11 = 6;
        lVar9 = (longlong) puVar2 - lVar5 >> 1;
        uVar1 = lVar9 + 1;
        lVar9 = lVar9 * 2;
        do {
            local_50 = 0;
            local_40 = 0;
            if (uVar1 < 0x7fffffffffffffff) {
                lVar6 = uVar1 * 2;
                local_50 = FUN_14018b280(lVar6, 0);
                local_40 = lVar6 + local_50;
            }
            lVar6 = local_50;
            FUN_1407db590(local_50, lVar5, lVar9);
            local_48 = (undefined2 * )(lVar9 + lVar6);
            if (local_48 != (undefined2 *) 0x0) {
                *local_48 = 0;
            }
            psVar4 = *(short **)
                    (((longlong) & PTR_u_WindowTextYMargin_140a33088 - param_1) + (longlong) plVar12);
            sVar3 = *psVar4;
            lVar6 = lVar10;
            while (sVar3 != 0) {
                lVar6 = lVar6 + 1;
                sVar3 = psVar4[lVar6];
            }
            FUN_14001c310(local_58, psVar4, psVar4 + lVar6);
            lVar6 = local_50;
            lVar7 = FUN_140108e80(param_2 + 0xf0);
            *plVar12 = lVar7;
            if (lVar7 == 0) {
                lVar7 = FUN_140108e80(param_2 + 0xf0);
                *plVar12 = lVar7;
            }
            if (lVar6 != 0) {
                FUN_14018b900(lVar6);
            }
            plVar12 = plVar12 + 1;
            lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
        if (param_4 == 0) {
            lVar8 = lVar8 + 0x48;
        } else {
            lVar8 = FUN_14010dc00(lVar8, param_4);
        }
        *(longlong * )(param_1 + 0x40) = lVar8;
        if (lVar5 != 0) {
            FUN_14018b900(lVar5, 0);
        }
        return;
    }
    *(undefined8 * )(param_1 + 0x10) = 0;
    *(undefined8 * )(param_1 + 0x18) = 0;
    *(undefined8 * )(param_1 + 0x20) = 0;
    *(undefined8 * )(param_1 + 0x28) = 0;
    *(undefined8 * )(param_1 + 0x30) = 0;
    *(undefined8 * )(param_1 + 0x38) = 0;
    return;
}


longlong FUN_14010b5a0(longlong param_1, undefined8 param_2, short *param_3) {
    short sVar1;
    undefined2 *puVar2;
    longlong lVar3;

    lVar3 = 0;
    *(undefined8 * )(param_1 + 8) = 0;
    *(undefined8 * )(param_1 + 0x10) = 0;
    *(undefined8 * )(param_1 + 0x18) = 0;
    puVar2 = (undefined2 *) FUN_14018b280(0x10, 0);
    *(undefined2 * *)(param_1 + 8) = puVar2;
    *(undefined2 * *)(param_1 + 0x10) = puVar2;
    *(undefined2 * *)(param_1 + 0x18) = puVar2 + 8;
    if (puVar2 != (undefined2 *) 0x0) {
        *puVar2 = 0;
    }
    FUN_14010ae30(param_1 + 0x20, param_2, 0);
    FUN_14010ae30(param_1 + 0x48, param_2, 0);
    FUN_14010ae30(param_1 + 0x70, param_2, 0);
    FUN_14010ae30(param_1 + 0x98, param_2, 0);
    FUN_14010ae30(param_1 + 0xc0, param_2, 0);
    FUN_14010ae30(param_1 + 0xe8, param_2, 0);
    FUN_14010ae30(param_1 + 0x110, param_2, 0);
    FUN_14010ae30(param_1 + 0x138, param_2, 0);
    FUN_14010ae30(param_1 + 0x160, param_2, 0);
    if (param_3 != (short *) 0x0) {
        sVar1 = *param_3;
        while (sVar1 != 0) {
            lVar3 = lVar3 + 1;
            sVar1 = param_3[lVar3];
        }
        FUN_14001c480(param_1, param_3, param_3 + lVar3);
    }
    return param_1;
}


void FUN_14010b6d0(longlong param_1, undefined8 param_2, undefined8 param_3) {
    longlong lVar1;
    undefined8 uVar2;
    undefined8 uVar3;

    lVar1 = FUN_1401a6b80(param_3, L"ButtonClick");
    uVar3 = 0;
    uVar2 = uVar3;
    if (lVar1 != 0) {
        uVar2 = FUN_1401a4f40(lVar1 + 0x20);
    }
    FUN_14010aeb0(param_1 + 0xc0, param_2, uVar2);
    lVar1 = FUN_1401a6b80(param_3, L"ButtonDown");
    uVar2 = uVar3;
    if (lVar1 != 0) {
        uVar2 = FUN_1401a4f40(lVar1 + 0x20);
    }
    FUN_14010aeb0(param_1 + 0x70, param_2, uVar2);
    lVar1 = FUN_1401a6b80(param_3, L"ButtonUpCancel");
    uVar2 = uVar3;
    if (lVar1 != 0) {
        uVar2 = FUN_1401a4f40(lVar1 + 0x20);
    }
    FUN_14010aeb0(param_1 + 0x98, param_2, uVar2);
    lVar1 = FUN_1401a6b80(param_3, L"ButtonCheck");
    uVar2 = uVar3;
    if (lVar1 != 0) {
        uVar2 = FUN_1401a4f40(lVar1 + 0x20);
    }
    FUN_14010aeb0(param_1 + 0xe8, param_2, uVar2);
    lVar1 = FUN_1401a6b80(param_3, L"ButtonUncheck");
    uVar2 = uVar3;
    if (lVar1 != 0) {
        uVar2 = FUN_1401a4f40(lVar1 + 0x20);
    }
    FUN_14010aeb0(param_1 + 0x110, param_2, uVar2);
    lVar1 = FUN_1401a6b80(param_3, L"MouseEnter");
    uVar2 = uVar3;
    if (lVar1 != 0) {
        uVar2 = FUN_1401a4f40(lVar1 + 0x20);
    }
    FUN_14010aeb0(param_1 + 0x20, param_2, uVar2);
    lVar1 = FUN_1401a6b80(param_3, L"MouseLeave");
    uVar2 = uVar3;
    if (lVar1 != 0) {
        uVar2 = FUN_1401a4f40(lVar1 + 0x20);
    }
    FUN_14010aeb0(param_1 + 0x48, param_2, uVar2);
    lVar1 = FUN_1401a6b80(param_3, L"WindowInvoke");
    uVar2 = uVar3;
    if (lVar1 != 0) {
        uVar2 = FUN_1401a4f40(lVar1 + 0x20);
    }
    FUN_14010aeb0(param_1 + 0x160, param_2, uVar2);
    lVar1 = FUN_1401a6b80(param_3, L"WindowClose");
    if (lVar1 != 0) {
        uVar3 = FUN_1401a4f40(lVar1 + 0x20);
    }
    FUN_14010aeb0(param_1 + 0x138, param_2, uVar3);
    return;
}


undefined8 *FUN_14010b8d0(undefined8 *param_1) {
    *param_1 = 0;
    *(undefined * )(param_1 + 1) = 0;
    param_1[2] = 0;
    *(undefined * )(param_1 + 3) = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *(undefined * )(param_1 + 0xc) = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    *(undefined * )(param_1 + 0x15) = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    return param_1;
}


void FUN_14010b980(longlong param_1, longlong param_2, undefined8 param_3) {
    longlong lVar1;
    undefined8 uVar2;

    lVar1 = FUN_1401a6b80(param_3, L"Internal");
    if (lVar1 != 0) {
        lVar1 = FUN_1401a4f40(lVar1 + 0x20);
    }
    uVar2 = FUN_140108e80(param_2 + 0xf0, lVar1);
    *(undefined8 * )(param_1 + 0xe8) = uVar2;
    lVar1 = FUN_1401a5ae0(param_3, L"DecButton");
    if (lVar1 != 0) {
        FUN_14010b160(param_1 + 0x10, param_2, lVar1);
    }
    lVar1 = FUN_1401a5ae0(param_3, L"IncButton");
    if (lVar1 != 0) {
        FUN_14010b160(param_1 + 0x58, param_2, lVar1);
    }
    lVar1 = FUN_1401a5ae0(param_3, L"Thumb");
    if (lVar1 != 0) {
        FUN_14010b160(param_1 + 0xa0, param_2, lVar1);
    }
    return;
}


void FUN_14010ba60(longlong param_1, longlong param_2, undefined8 param_3) {
    undefined4 uVar1;
    int iVar2;
    undefined4 *puVar3;
    undefined8 uVar4;
    longlong lVar5;
    longlong lVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    undefined8 *puVar10;
    undefined auStack312[32];
    undefined8 local_118;
    char local_108[4];
    uint local_104[3];
    undefined4 local_f8[4];
    undefined8 local_e8[4];
    undefined8 local_c8;
    undefined8 local_c0;
    undefined8 local_b8;
    undefined8 local_b0;
    undefined4 local_a8;
    undefined local_98[96];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong) auStack312;
    uVar7 = 0;
    puVar10 = local_e8;
    uVar8 = uVar7;
    do {
        uVar1 = *(undefined4 * )((longlong) & DAT_140a14e90 + uVar8);
        *(undefined4 * )((longlong) & local_b8 + uVar8) = 0;
        uVar9 = uVar8 + 4;
        *(undefined4 * )((longlong) & local_c8 + uVar8) = uVar1;
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
        uVar8 = uVar9;
    } while ((longlong) uVar9 < 0x10);
    local_118 = 0;
    puVar3 = (undefined4 *) FUN_1400d45e0(local_98, param_2, 0, param_3);
    local_e8[3] = *(undefined8 * )(puVar3 + 10);
    local_e8[0] = *(undefined8 * )(puVar3 + 4);
    local_e8[1] = *(undefined8 * )(puVar3 + 6);
    local_f8[0] = *puVar3;
    local_f8[1] = puVar3[1];
    local_f8[2] = puVar3[2];
    local_f8[3] = puVar3[3];
    local_e8[2] = *(undefined8 * )(puVar3 + 8);
    local_c0 = *(undefined8 * )(puVar3 + 0xe);
    local_c8 = *(undefined8 * )(puVar3 + 0xc);
    local_b8 = *(undefined8 * )(puVar3 + 0x10);
    local_b0 = *(undefined8 * )(puVar3 + 0x12);
    local_a8 = puVar3[0x14];
    *(undefined4 * )(param_1 + 0x20) = local_f8[0];
    *(undefined4 * )(param_1 + 0x24) = local_f8[1];
    *(undefined4 * )(param_1 + 0x28) = local_f8[2];
    *(undefined4 * )(param_1 + 0x2c) = local_f8[3];
    *(undefined8 * )(param_1 + 0x50) = local_c8;
    *(undefined8 * )(param_1 + 0x48) = local_e8[3];
    *(undefined8 * )(param_1 + 0x58) = local_c0;
    *(undefined8 * )(param_1 + 0x30) = local_e8[0];
    *(undefined8 * )(param_1 + 0x38) = local_e8[1];
    *(undefined8 * )(param_1 + 0x40) = local_e8[2];
    lVar5 = 0x40;
    lVar6 = 4;
    do {
        puVar3 = (undefined4 * )((longlong) local_f8 + lVar5);
        lVar5 = lVar5 + 4;
        *(undefined4 * )(param_1 + 0x1c + lVar5) = *puVar3;
        lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    *(undefined4 * )(param_1 + 0x70) = local_a8;
    lVar5 = FUN_1401a6b80(param_3, L"Sprite");
    uVar8 = uVar7;
    if (lVar5 != 0) {
        uVar8 = FUN_1401a4f40(lVar5 + 0x20);
    }
    uVar4 = FUN_140108e80(param_2 + 0xf0, uVar8);
    *(undefined8 * )(param_1 + 0x80) = uVar4;
    uVar8 = uVar7;
    do {
        local_108[0] = '\0';
        lVar5 = FUN_1401a6b80(param_3, (&PTR_u_NotRelative_140c3cd20)[uVar7]);
        if (lVar5 != 0) {
            uVar4 = FUN_1401a4f40(lVar5 + 0x20);
            FUN_1401a52e0(uVar4, local_108);
            if (local_108[0] != '\0') {
                uVar8 = uVar8 | 1 << ((byte) uVar7 & 0x3f);
            }
        }
        uVar7 = uVar7 + 1;
    } while (uVar7 < 0x25);
    *(ulonglong * )(param_1 + 8) = uVar8;
    uVar4 = FUN_1400f6670(param_3);
    *(undefined8 * )(param_1 + 0x10) = uVar4;
    local_104[0] = 0xffffffff;
    lVar5 = FUN_1401a6b80(param_3, L"ResizeHandle");
    if (lVar5 != 0) {
        uVar4 = FUN_1401a4f40(lVar5 + 0x20);
        iVar2 = FUN_1407df428(uVar4, &DAT_1409e4114, local_104);
        if ((iVar2 == 1) && (local_104[0] < 8)) {
            *(uint * )(param_1 + 0x88) = local_104[0];
        }
    }
    FUN_1407db4f0(local_38 ^ (ulonglong) auStack312);
    return;
}


void FUN_14010bca0(longlong *param_1, undefined8 *param_2, ulonglong param_3) {
    longlong lVar1;
    ulonglong uVar2;
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 uStack44;
    undefined local_28[16];
    undefined local_18[16];

    lVar1 = *param_1;
    if (lVar1 == 0) {
        if (param_1[1] != 0) {
            local_18 = ZEXT816(CONCAT44((float) *(int *) ((longlong) param_2 + 0xc), (float) (int) param_2[1]));
            local_28 = ZEXT816(CONCAT44((float) *(int *) ((longlong) param_2 + 4), (float) (int) *param_2));
            FUN_1401502e0(param_1[1], local_28);
        }
    } else {
        uVar2 = *(ulonglong * )(lVar1 + 8);
        if (((uVar2 == 0) || ((uVar2 & param_3) == uVar2)) &&
            ((*(ulonglong * )(lVar1 + 0x10) == 0 || ((param_3 & *(ulonglong * )(lVar1 + 0x10)) == 0)))) {
            FUN_14014e8d0(lVar1 + 0x20, local_28, param_2);
            local_38 = 0x3f800000;
            uStack52 = 0x3f800000;
            uStack48 = 0x3f800000;
            uStack44 = 0x3f800000;
            if (param_1[3] != 0) {
                FUN_140103cf0(param_1[3], local_28, &local_38, 0,
                              (DAT_140c63664 - *(float *) (param_1 + 4)) *
                              *(float *) ((longlong) param_1 + 0x24));
                return;
            }
        }
    }
    return;
}


undefined8 *FUN_14010bda0(undefined8 *param_1, short *param_2) {
    short sVar1;
    undefined2 *puVar2;
    longlong lVar3;
    short *psVar4;

    lVar3 = 0;
    *param_1 = 0;
    *(undefined * )(param_1 + 1) = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    puVar2 = (undefined2 *) FUN_14018b280(0x10, 0);
    param_1[3] = puVar2;
    param_1[4] = puVar2;
    param_1[5] = puVar2 + 8;
    if (puVar2 != (undefined2 *) 0x0) {
        *puVar2 = 0;
    }
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    puVar2 = (undefined2 *) FUN_14018b280(0x10);
    param_1[7] = puVar2;
    param_1[8] = puVar2;
    param_1[9] = puVar2 + 8;
    if (puVar2 != (undefined2 *) 0x0) {
        *puVar2 = 0;
    }
    FUN_14010b8d0(param_1 + 0x15);
    FUN_14010b8d0(param_1 + 0x33);
    param_1[0x51] = 0;
    *(undefined * )(param_1 + 0x52) = 0;
    param_1[0x53] = 0;
    param_1[0x54] = 0;
    param_1[0x55] = 0;
    param_1[0x56] = 0;
    param_1[0x57] = 0;
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    param_1[0x5a] = 0;
    *(undefined * )(param_1 + 0x5b) = 0;
    param_1[0x5c] = 0;
    param_1[0x5d] = 0;
    param_1[0x5e] = 0;
    param_1[0x5f] = 0;
    param_1[0x60] = 0;
    param_1[0x61] = 0;
    param_1[0x62] = 0;
    param_1[99] = 0;
    *(undefined * )(param_1 + 100) = 0;
    param_1[0x65] = 0;
    param_1[0x66] = 0;
    param_1[0x67] = 0;
    param_1[0x68] = 0;
    param_1[0x69] = 0;
    param_1[0x6a] = 0;
    param_1[0x6b] = 0;
    param_1[0x6c] = 0;
    *(undefined * )(param_1 + 0x6d) = 0;
    param_1[0x6e] = 0;
    param_1[0x6f] = 0;
    param_1[0x70] = 0;
    param_1[0x71] = 0;
    param_1[0x72] = 0;
    param_1[0x73] = 0;
    param_1[0x74] = 0;
    param_1[0x76] = 0;
    param_1[0x75] = 0;
    psVar4 = (short *) &DAT_1409d556c;
    if (param_2 != (short *) 0x0) {
        psVar4 = param_2;
    }
    *(undefined * )(param_1 + 0x7c) = 0;
    *(undefined8 * )((longlong) param_1 + 0x3e4) = 0;
    *(undefined8 * )((longlong) param_1 + 0x3ec) = 0;
    sVar1 = *psVar4;
    while (sVar1 != 0) {
        lVar3 = lVar3 + 1;
        sVar1 = psVar4[lVar3];
    }
    FUN_14001c480(param_1 + 2, psVar4, psVar4 + lVar3);
    param_1[0x14] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x77] = 0;
    param_1[0x78] = 0;
    param_1[0x79] = 0;
    param_1[0x7b] = 0;
    param_1[0x7a] = 0;
    return param_1;
}


void FUN_14010bff0(longlong param_1) {
    longlong lVar1;
    ulonglong uVar2;

    uVar2 = 0;
    if (*(longlong * *)(param_1 + 0x3b8) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x3b8) + 8))();
        *(undefined8 * )(param_1 + 0x3b8) = 0;
    }
    if (*(longlong * *)(param_1 + 0x3c0) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x3c0) + 8))();
        *(undefined8 * )(param_1 + 0x3c0) = 0;
    }
    if (*(longlong * *)(param_1 + 0x3c8) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x3c8) + 8))();
        *(undefined8 * )(param_1 + 0x3c8) = 0;
    }
    if (*(longlong * *)(param_1 + 0x3d8) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x3d8) + 8))();
        *(undefined8 * )(param_1 + 0x3d8) = 0;
    }
    if (*(longlong * *)(param_1 + 0x3d0) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x3d0) + 8))();
        *(undefined8 * )(param_1 + 0x3d0) = 0;
    }
    if (*(longlong * )(param_1 + 0x3b0) != 0) {
        do {
            FUN_14018b900(*(undefined8 * )(*(longlong * )(param_1 + 0x3a8) + uVar2 * 8), 0);
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(ulonglong * )(param_1 + 0x3b0));
    }
    lVar1 = *(longlong * )(param_1 + 0x3a8);
    if (lVar1 != 0) {
        (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    if (*(longlong * )(param_1 + 0x38) != 0) {
        FUN_14018b900(*(longlong * )(param_1 + 0x38), 0);
    }
    if (*(longlong * )(param_1 + 0x18) != 0) {
        FUN_14018b900(*(longlong * )(param_1 + 0x18), 0);
    }
    return;
}


void FUN_14010c0f0(longlong param_1, longlong param_2, longlong param_3, byte param_4) {
    short sVar1;
    undefined4 uVar2;
    longlong lVar3;
    short *psVar4;
    longlong lVar5;
    wchar_t *pwVar6;
    undefined8 uVar7;
    undefined8 *puVar8;
    longlong lVar9;
    int iVar10;
    longlong lVar11;
    undefined8 *puVar12;
    wchar_t *pwVar13;
    short *psVar14;
    ulonglong uVar15;
    undefined **ppuVar16;
    undefined8 *puVar17;
    uint local_res20[2];

    local_res20[0] = local_res20[0] & 0xffffff00 | (uint) param_4;
    if (*(longlong * *)(param_1 + 0x3b8) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x3b8) + 8))();
        *(undefined8 * )(param_1 + 0x3b8) = 0;
    }
    if (*(longlong * *)(param_1 + 0x3c0) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x3c0) + 8))();
        *(undefined8 * )(param_1 + 0x3c0) = 0;
    }
    if (*(longlong * *)(param_1 + 0x3c8) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x3c8) + 8))();
        *(undefined8 * )(param_1 + 0x3c8) = 0;
    }
    if (*(longlong * *)(param_1 + 0x3d8) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x3d8) + 8))();
        *(undefined8 * )(param_1 + 0x3d8) = 0;
    }
    if (*(longlong * *)(param_1 + 0x3d0) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x3d0) + 8))();
        *(undefined8 * )(param_1 + 0x3d0) = 0;
    }
    psVar4 = (short *) FUN_1401a6b80(param_3, &DAT_140a31790);
    if (psVar4 != (short *) 0x0) {
        psVar4 = (short *) FUN_1401a4f40(psVar4 + 0x10);
    }
    psVar14 = (short *) &DAT_1409d55a4;
    if (psVar4 != (short *) 0x0) {
        psVar14 = psVar4;
    }
    lVar5 = 0;
    sVar1 = *psVar14;
    while (sVar1 != 0) {
        lVar5 = lVar5 + 1;
        sVar1 = psVar14[lVar5];
    }
    FUN_14001c480(param_1 + 0x10, psVar14, psVar14 + lVar5);
    ppuVar16 = &PTR_u_BorderTopLeft_140a33250;
    do {
        lVar5 = FUN_1401a6b80(param_3);
        if ((((lVar5 == 0) || (psVar4 = (short *) FUN_1401a4f40(lVar5 + 0x20), psVar4 == (short *) 0x0))
             || (*psVar4 == 0)) ||
            ((*(longlong * )(param_2 + 0x158) - *(longlong * )(param_2 + 0x150) & 0xfffffffffffffff8U) == 0
            )) {
            LAB_14010c288:
            lVar5 = 0;
        } else {
            lVar5 = FUN_1400fdfe0(param_2 + 0x120);
            if (lVar5 == 0) {
                lVar5 = FUN_1407df6e0(psVar4);
                if (lVar5 == 0) goto LAB_14010c288;
                lVar5 = FUN_1400fdfe0(param_2 + 0x120);
            }
        }
        *(longlong * )((longlong) ppuVar16 + param_1 + -0x140a33200) = lVar5;
        ppuVar16 = ppuVar16 + 1;
    } while ((longlong) ppuVar16 < 0x140a33290);
    for (lVar5 = *(longlong * )(param_3 + 0x60); lVar5 != 0; lVar5 = *(longlong * )(lVar5 + 0x38)) {
        pwVar13 = L"SingleBorderFrame";
        pwVar6 = (wchar_t *) FUN_1401a4f40();
        if (pwVar6 == L"SingleBorderFrame") {
            LAB_14010c59a:
            if ((lVar5 != 0) &&
                (((psVar4 = (short *) FUN_1401a4f40(lVar5 + 0x20), psVar4 != (short *) 0x0 && (*psVar4 != 0))
                  && ((*(longlong * )(param_2 + 0x158) - *(longlong * )(param_2 + 0x150) & 0xfffffffffffffff8U
                      ) != 0)))) {
                lVar5 = FUN_1400fdfe0(param_2 + 0x120);
                if (lVar5 != 0) goto LAB_14010c31c;
                lVar5 = FUN_1407df6e0(psVar4);
                if (lVar5 != 0) {
                    lVar5 = FUN_1400fdfe0(param_2 + 0x120);
                    goto LAB_14010c31c;
                }
            }
            break;
        }
        iVar10 = 0;
        if (*pwVar6 != L'\0') {
            do {
                if (((*pwVar13 == L'\0') || (*pwVar6 != *pwVar13)) || (0x7ffffffe < iVar10)) break;
                pwVar6 = pwVar6 + 1;
                pwVar13 = pwVar13 + 1;
                iVar10 = iVar10 + 1;
            } while (*pwVar6 != L'\0');
            if (iVar10 == 0x7fffffff) goto LAB_14010c59a;
        }
        if ((*pwVar6 == L'\0') && (*pwVar13 == L'\0')) goto LAB_14010c59a;
    }
    lVar5 = 0;
    LAB_14010c31c:
    *(longlong * )(param_1 + 0xa0) = lVar5;
    for (lVar5 = *(longlong * )(param_3 + 0x60); lVar5 != 0; lVar5 = *(longlong * )(lVar5 + 0x38)) {
        pwVar13 = L"ClientFrame";
        pwVar6 = (wchar_t *) FUN_1401a4f40();
        if (pwVar6 == L"ClientFrame") {
            LAB_14010c622:
            if ((lVar5 != 0) &&
                (((psVar4 = (short *) FUN_1401a4f40(lVar5 + 0x20), psVar4 != (short *) 0x0 && (*psVar4 != 0))
                  && ((*(longlong * )(param_2 + 0x158) - *(longlong * )(param_2 + 0x150) & 0xfffffffffffffff8U
                      ) != 0)))) {
                lVar5 = FUN_1400fdfe0(param_2 + 0x120);
                if (lVar5 != 0) goto LAB_14010c39c;
                lVar5 = FUN_1407df6e0(psVar4);
                if (lVar5 != 0) {
                    lVar5 = FUN_1400fdfe0(param_2 + 0x120);
                    goto LAB_14010c39c;
                }
            }
            break;
        }
        iVar10 = 0;
        if (*pwVar6 != L'\0') {
            do {
                if (((*pwVar13 == L'\0') || (*pwVar6 != *pwVar13)) || (0x7ffffffe < iVar10)) break;
                pwVar6 = pwVar6 + 1;
                pwVar13 = pwVar13 + 1;
                iVar10 = iVar10 + 1;
            } while (*pwVar6 != L'\0');
            if (iVar10 == 0x7fffffff) goto LAB_14010c622;
        }
        if ((*pwVar6 == L'\0') && (*pwVar13 == L'\0')) goto LAB_14010c622;
    }
    lVar5 = 0;
    LAB_14010c39c:
    *(longlong * )(param_1 + 0x90) = lVar5;
    for (lVar5 = *(longlong * )(param_3 + 0x60); lVar5 != 0; lVar5 = *(longlong * )(lVar5 + 0x38)) {
        psVar14 = &DAT_140a329a8;
        psVar4 = (short *) FUN_1401a4f40();
        if (psVar4 == &DAT_140a329a8) {
            LAB_14010c6aa:
            if ((lVar5 != 0) &&
                (((psVar4 = (short *) FUN_1401a4f40(lVar5 + 0x20), psVar4 != (short *) 0x0 && (*psVar4 != 0))
                  && ((*(longlong * )(param_2 + 0x158) - *(longlong * )(param_2 + 0x150) & 0xfffffffffffffff8U
                      ) != 0)))) {
                lVar5 = FUN_1400fdfe0(param_2 + 0x120, psVar4);
                if (lVar5 != 0) goto LAB_14010c41c;
                lVar5 = FUN_1407df6e0(psVar4, &DAT_1409d5204);
                if (lVar5 != 0) {
                    lVar5 = FUN_1400fdfe0(param_2 + 0x120, lVar5 + 2);
                    goto LAB_14010c41c;
                }
            }
            break;
        }
        iVar10 = 0;
        if (*psVar4 != 0) {
            do {
                if (((*psVar14 == 0) || (*psVar4 != *psVar14)) || (0x7ffffffe < iVar10)) break;
                psVar4 = psVar4 + 1;
                psVar14 = psVar14 + 1;
                iVar10 = iVar10 + 1;
            } while (*psVar4 != 0);
            if (iVar10 == 0x7fffffff) goto LAB_14010c6aa;
        }
        if ((*psVar4 == 0) && (*psVar14 == 0)) goto LAB_14010c6aa;
    }
    lVar5 = 0;
    LAB_14010c41c:
    *(longlong * )(param_1 + 0x98) = lVar5;
    lVar5 = FUN_1401a5ae0(param_3, L"VScroll");
    if (lVar5 != 0) {
        FUN_14010b980(param_1 + 0xa8, param_2, lVar5);
    }
    lVar5 = FUN_1401a5ae0(param_3, L"HScroll");
    if (lVar5 != 0) {
        FUN_14010b980(param_1 + 0x198, param_2, lVar5);
    }
    lVar5 = FUN_1401a5ae0(param_3, L"BlankButton");
    if (lVar5 != 0) {
        FUN_14010b160(param_1 + 0x288, param_2, lVar5);
    }
    lVar5 = FUN_1401a5ae0(param_3, L"CheckButton");
    if (lVar5 != 0) {
        FUN_14010b160(param_1 + 0x318, param_2, lVar5);
    }
    lVar5 = FUN_1401a5ae0(param_3, L"RadioButton");
    if (lVar5 != 0) {
        FUN_14010b160(param_1 + 0x2d0, param_2, lVar5);
    }
    lVar5 = FUN_1401a5ae0(param_3);
    if (lVar5 != 0) {
        FUN_14010b160(param_1 + 0x360, param_2, lVar5);
    }
    for (lVar5 = *(longlong * )(param_3 + 0x60); lVar5 != 0; lVar5 = *(longlong * )(lVar5 + 0x38)) {
        pwVar13 = L"DefaultCursor";
        pwVar6 = (wchar_t *) FUN_1401a4f40();
        if (pwVar6 == L"DefaultCursor") {
            LAB_14010c732:
            if (lVar5 != 0) {
                puVar8 = (undefined8 *) FUN_1401a4f40(lVar5 + 0x20);
                goto LAB_14010c58c;
            }
            break;
        }
        iVar10 = 0;
        if (*pwVar6 != L'\0') {
            do {
                if (((*pwVar13 == L'\0') || (*pwVar6 != *pwVar13)) || (0x7ffffffe < iVar10)) break;
                pwVar6 = pwVar6 + 1;
                pwVar13 = pwVar13 + 1;
                iVar10 = iVar10 + 1;
            } while (*pwVar6 != L'\0');
            if (iVar10 == 0x7fffffff) goto LAB_14010c732;
        }
        if ((*pwVar6 == L'\0') && (*pwVar13 == L'\0')) goto LAB_14010c732;
    }
    puVar8 = (undefined8 *) 0x0;
    LAB_14010c58c:
    if (puVar8 != (undefined8 *) 0x0) {
        puVar8 = (undefined8 *) FUN_1401545c0(*(undefined8 * )(param_2 + 0x168));
    }
    *(undefined8 * *)(param_1 + 0x3b8) = puVar8;
    if (puVar8 != (undefined8 *) 0x0) {
        (**(code * *) * puVar8)(puVar8);
    }
    for (lVar5 = *(longlong * )(param_3 + 0x60); lVar5 != 0; lVar5 = *(longlong * )(lVar5 + 0x38)) {
        pwVar13 = L"ResizeNSCursor";
        pwVar6 = (wchar_t *) FUN_1401a4f40();
        if (pwVar6 == L"ResizeNSCursor") {
            LAB_14010c7e3:
            if (lVar5 != 0) {
                puVar8 = (undefined8 *) FUN_1401a4f40(lVar5 + 0x20);
                goto LAB_14010c7dc;
            }
            break;
        }
        iVar10 = 0;
        if (*pwVar6 != L'\0') {
            do {
                if (((*pwVar13 == L'\0') || (*pwVar6 != *pwVar13)) || (0x7ffffffe < iVar10)) break;
                pwVar6 = pwVar6 + 1;
                pwVar13 = pwVar13 + 1;
                iVar10 = iVar10 + 1;
            } while (*pwVar6 != L'\0');
            if (iVar10 == 0x7fffffff) goto LAB_14010c7e3;
        }
        if ((*pwVar6 == L'\0') && (*pwVar13 == L'\0')) goto LAB_14010c7e3;
    }
    puVar8 = (undefined8 *) 0x0;
    LAB_14010c7dc:
    if (puVar8 != (undefined8 *) 0x0) {
        puVar8 = (undefined8 *) FUN_1401545c0(*(undefined8 * )(param_2 + 0x168));
    }
    *(undefined8 * *)(param_1 + 0x3c0) = puVar8;
    if (puVar8 != (undefined8 *) 0x0) {
        (**(code * *) * puVar8)(puVar8);
    }
    for (lVar5 = *(longlong * )(param_3 + 0x60); lVar5 != 0; lVar5 = *(longlong * )(lVar5 + 0x38)) {
        pwVar13 = L"ResizeEWCursor";
        pwVar6 = (wchar_t *) FUN_1401a4f40();
        if (pwVar6 == L"ResizeEWCursor") {
            LAB_14010c893:
            if (lVar5 != 0) {
                puVar8 = (undefined8 *) FUN_1401a4f40(lVar5 + 0x20);
                goto LAB_14010c88c;
            }
            break;
        }
        iVar10 = 0;
        if (*pwVar6 != L'\0') {
            do {
                if (((*pwVar13 == L'\0') || (*pwVar6 != *pwVar13)) || (0x7ffffffe < iVar10)) break;
                pwVar6 = pwVar6 + 1;
                pwVar13 = pwVar13 + 1;
                iVar10 = iVar10 + 1;
            } while (*pwVar6 != L'\0');
            if (iVar10 == 0x7fffffff) goto LAB_14010c893;
        }
        if ((*pwVar6 == L'\0') && (*pwVar13 == L'\0')) goto LAB_14010c893;
    }
    puVar8 = (undefined8 *) 0x0;
    LAB_14010c88c:
    if (puVar8 != (undefined8 *) 0x0) {
        puVar8 = (undefined8 *) FUN_1401545c0(*(undefined8 * )(param_2 + 0x168));
    }
    *(undefined8 * *)(param_1 + 0x3c8) = puVar8;
    if (puVar8 != (undefined8 *) 0x0) {
        (**(code * *) * puVar8)(puVar8);
    }
    for (lVar5 = *(longlong * )(param_3 + 0x60); lVar5 != 0; lVar5 = *(longlong * )(lVar5 + 0x38)) {
        pwVar13 = L"ResizeNESWCursor";
        pwVar6 = (wchar_t *) FUN_1401a4f40();
        if (pwVar6 == L"ResizeNESWCursor") {
            LAB_14010c943:
            if (lVar5 != 0) {
                puVar8 = (undefined8 *) FUN_1401a4f40(lVar5 + 0x20);
                goto LAB_14010c93c;
            }
            break;
        }
        iVar10 = 0;
        if (*pwVar6 != L'\0') {
            do {
                if (((*pwVar13 == L'\0') || (*pwVar6 != *pwVar13)) || (0x7ffffffe < iVar10)) break;
                pwVar6 = pwVar6 + 1;
                pwVar13 = pwVar13 + 1;
                iVar10 = iVar10 + 1;
            } while (*pwVar6 != L'\0');
            if (iVar10 == 0x7fffffff) goto LAB_14010c943;
        }
        if ((*pwVar6 == L'\0') && (*pwVar13 == L'\0')) goto LAB_14010c943;
    }
    puVar8 = (undefined8 *) 0x0;
    LAB_14010c93c:
    if (puVar8 != (undefined8 *) 0x0) {
        puVar8 = (undefined8 *) FUN_1401545c0(*(undefined8 * )(param_2 + 0x168));
    }
    *(undefined8 * *)(param_1 + 0x3d8) = puVar8;
    if (puVar8 != (undefined8 *) 0x0) {
        (**(code * *) * puVar8)(puVar8);
    }
    for (lVar5 = *(longlong * )(param_3 + 0x60); lVar5 != 0; lVar5 = *(longlong * )(lVar5 + 0x38)) {
        pwVar13 = L"ResizeNWSECursor";
        pwVar6 = (wchar_t *) FUN_1401a4f40();
        if (pwVar6 == L"ResizeNWSECursor") {
            LAB_14010c9f3:
            if (lVar5 != 0) {
                puVar8 = (undefined8 *) FUN_1401a4f40(lVar5 + 0x20);
                goto LAB_14010c9ec;
            }
            break;
        }
        iVar10 = 0;
        if (*pwVar6 != L'\0') {
            do {
                if (((*pwVar13 == L'\0') || (*pwVar6 != *pwVar13)) || (0x7ffffffe < iVar10)) break;
                pwVar6 = pwVar6 + 1;
                pwVar13 = pwVar13 + 1;
                iVar10 = iVar10 + 1;
            } while (*pwVar6 != L'\0');
            if (iVar10 == 0x7fffffff) goto LAB_14010c9f3;
        }
        if ((*pwVar6 == L'\0') && (*pwVar13 == L'\0')) goto LAB_14010c9f3;
    }
    puVar8 = (undefined8 *) 0x0;
    LAB_14010c9ec:
    if (puVar8 != (undefined8 *) 0x0) {
        puVar8 = (undefined8 *) FUN_1401545c0(*(undefined8 * )(param_2 + 0x168));
    }
    *(undefined8 * *)(param_1 + 0x3d0) = puVar8;
    if (puVar8 != (undefined8 *) 0x0) {
        (**(code * *) * puVar8)(puVar8);
    }
    lVar5 = *(longlong * )(param_3 + 0x60);
    local_res20[0] = 0;
    for (; lVar5 != 0; lVar5 = *(longlong * )(lVar5 + 0x38)) {
        pwVar13 = L"UseMargins";
        pwVar6 = (wchar_t *) FUN_1401a4f40();
        if (pwVar6 == L"UseMargins") {
            LAB_14010caa4:
            if (lVar5 != 0) {
                uVar7 = FUN_1401a4f40(lVar5 + 0x20);
                FUN_1407df428(uVar7, &DAT_1409e4114, local_res20);
            }
            break;
        }
        iVar10 = 0;
        if (*pwVar6 != L'\0') {
            do {
                if (((*pwVar13 == L'\0') || (*pwVar6 != *pwVar13)) || (0x7ffffffe < iVar10)) break;
                pwVar6 = pwVar6 + 1;
                pwVar13 = pwVar13 + 1;
                iVar10 = iVar10 + 1;
            } while (*pwVar6 != L'\0');
            if (iVar10 == 0x7fffffff) goto LAB_14010caa4;
        }
        if ((*pwVar6 == L'\0') && (*pwVar13 == L'\0')) goto LAB_14010caa4;
    }
    *(bool *) (param_1 + 0x3e0) = local_res20[0] != 0;
    for (lVar5 = *(longlong * )(param_3 + 0x60); lVar5 != 0; lVar5 = *(longlong * )(lVar5 + 0x38)) {
        pwVar13 = L"TopMargin";
        pwVar6 = (wchar_t *) FUN_1401a4f40();
        if (pwVar6 == L"TopMargin") {
            LAB_14010cb4c:
            if (lVar5 != 0) {
                uVar7 = FUN_1401a4f40(lVar5 + 0x20);
                FUN_1407df428(uVar7, &DAT_1409e4114, param_1 + 0x3e4);
            }
            break;
        }
        iVar10 = 0;
        if (*pwVar6 != L'\0') {
            do {
                if (((*pwVar13 == L'\0') || (*pwVar6 != *pwVar13)) || (0x7ffffffe < iVar10)) break;
                pwVar6 = pwVar6 + 1;
                pwVar13 = pwVar13 + 1;
                iVar10 = iVar10 + 1;
            } while (*pwVar6 != L'\0');
            if (iVar10 == 0x7fffffff) goto LAB_14010cb4c;
        }
        if ((*pwVar6 == L'\0') && (*pwVar13 == L'\0')) goto LAB_14010cb4c;
    }
    for (lVar5 = *(longlong * )(param_3 + 0x60); lVar5 != 0; lVar5 = *(longlong * )(lVar5 + 0x38)) {
        pwVar13 = L"LeftMargin";
        pwVar6 = (wchar_t *) FUN_1401a4f40();
        if (pwVar6 == L"LeftMargin") {
            LAB_14010cbe4:
            if (lVar5 != 0) {
                uVar7 = FUN_1401a4f40(lVar5 + 0x20);
                FUN_1407df428(uVar7, &DAT_1409e4114, param_1 + 1000);
            }
            break;
        }
        iVar10 = 0;
        if (*pwVar6 != L'\0') {
            do {
                if (((*pwVar13 == L'\0') || (*pwVar6 != *pwVar13)) || (0x7ffffffe < iVar10)) break;
                pwVar6 = pwVar6 + 1;
                pwVar13 = pwVar13 + 1;
                iVar10 = iVar10 + 1;
            } while (*pwVar6 != L'\0');
            if (iVar10 == 0x7fffffff) goto LAB_14010cbe4;
        }
        if ((*pwVar6 == L'\0') && (*pwVar13 == L'\0')) goto LAB_14010cbe4;
    }
    for (lVar5 = *(longlong * )(param_3 + 0x60); lVar5 != 0; lVar5 = *(longlong * )(lVar5 + 0x38)) {
        pwVar13 = L"RightMargin";
        pwVar6 = (wchar_t *) FUN_1401a4f40();
        if (pwVar6 == L"RightMargin") {
            LAB_14010cc7c:
            if (lVar5 != 0) {
                uVar7 = FUN_1401a4f40(lVar5 + 0x20);
                FUN_1407df428(uVar7, &DAT_1409e4114, param_1 + 0x3ec);
            }
            break;
        }
        iVar10 = 0;
        if (*pwVar6 != L'\0') {
            do {
                if (((*pwVar13 == L'\0') || (*pwVar6 != *pwVar13)) || (0x7ffffffe < iVar10)) break;
                pwVar6 = pwVar6 + 1;
                pwVar13 = pwVar13 + 1;
                iVar10 = iVar10 + 1;
            } while (*pwVar6 != L'\0');
            if (iVar10 == 0x7fffffff) goto LAB_14010cc7c;
        }
        if ((*pwVar6 == L'\0') && (*pwVar13 == L'\0')) goto LAB_14010cc7c;
    }
    for (lVar5 = *(longlong * )(param_3 + 0x60); lVar5 != 0; lVar5 = *(longlong * )(lVar5 + 0x38)) {
        pwVar13 = L"BottomMargin";
        pwVar6 = (wchar_t *) FUN_1401a4f40();
        if (pwVar6 == L"BottomMargin") {
            LAB_14010cd14:
            if (lVar5 != 0) {
                uVar7 = FUN_1401a4f40(lVar5 + 0x20);
                FUN_1407df428(uVar7, &DAT_1409e4114, param_1 + 0x3f0);
            }
            break;
        }
        iVar10 = 0;
        if (*pwVar6 != L'\0') {
            do {
                if (((*pwVar13 == L'\0') || (*pwVar6 != *pwVar13)) || (0x7ffffffe < iVar10)) break;
                pwVar6 = pwVar6 + 1;
                pwVar13 = pwVar13 + 1;
                iVar10 = iVar10 + 1;
            } while (*pwVar6 != L'\0');
            if (iVar10 == 0x7fffffff) goto LAB_14010cd14;
        }
        if ((*pwVar6 == L'\0') && (*pwVar13 == L'\0')) goto LAB_14010cd14;
    }
    lVar5 = *(longlong * )(param_3 + 0x60);
    do {
        if (lVar5 == 0) {
            LAB_14010cdba:
            psVar4 = (short *) 0x0;
            LAB_14010cdbc:
            psVar14 = (short *) &DAT_1409d55cc;
            if (psVar4 != (short *) 0x0) {
                psVar14 = psVar4;
            }
            lVar5 = 0;
            sVar1 = *psVar14;
            while (sVar1 != 0) {
                lVar5 = lVar5 + 1;
                sVar1 = psVar14[lVar5];
            }
            FUN_14001c480(param_1 + 0x30, psVar14, psVar14 + lVar5);
            uVar15 = 0;
            if (*(longlong * )(param_1 + 0x3b0) != 0) {
                do {
                    FUN_14018b900(*(undefined8 * )(*(longlong * )(param_1 + 0x3a8) + uVar15 * 8), 0);
                    uVar15 = uVar15 + 1;
                } while (uVar15 < *(ulonglong * )(param_1 + 0x3b0));
            }
            *(undefined8 * )(param_1 + 0x3b0) = 0;
            for (lVar5 = FUN_1401a5ae0(param_3, L"Adornment"); lVar5 != 0; lVar5 = FUN_1401a5bc0(lVar5)) {
                puVar8 = (undefined8 *) FUN_14018b280(0x90, 0);
                if (puVar8 == (undefined8 *) 0x0) {
                    puVar8 = (undefined8 *) 0x0;
                } else {
                    *puVar8 = 0;
                    puVar8[1] = 0;
                    puVar8[2] = 0;
                    *(undefined4 * )(puVar8 + 0xe) = 0;
                    puVar12 = puVar8 + 0xc;
                    lVar11 = 4;
                    puVar17 = puVar8 + 6;
                    do {
                        uVar2 = *(undefined4 * )
                                ((longlong) puVar12 +
                                 (longlong) L"DefaultDisabled" + (0x10 - (longlong)(puVar8 + 4)));
                        *(undefined4 *) puVar12 = 0;
                        *(undefined4 * )(puVar12 + -2) = uVar2;
                        *puVar17 = 0;
                        puVar12 = (undefined8 * )((longlong) puVar12 + 4);
                        lVar11 = lVar11 + -1;
                        puVar17 = puVar17 + 1;
                    } while (lVar11 != 0);
                    puVar8[0x10] = 0;
                    *(undefined4 * )(puVar8 + 0x11) = 0xffffffff;
                }
                FUN_14010ba60(puVar8, param_2, lVar5);
                lVar3 = *(longlong * )(param_1 + 0x3b0);
                lVar11 = lVar3 + 1;
                lVar9 = FUN_14018db00(*(undefined8 * )(param_1 + 0x3a8), lVar11, 8);
                *(undefined8 * *)(lVar9 + lVar3 * 8) = puVar8;
                if (*(longlong * )(param_1 + 0x3a8) != lVar9) {
                    FUN_1407db590(lVar9, *(longlong * )(param_1 + 0x3a8), *(longlong * )(param_1 + 0x3b0) << 3);
                    lVar3 = *(longlong * )(param_1 + 0x3a8);
                    if (lVar3 != 0) {
                        (**(code * *)(*(longlong * )(lVar3 + -0x10) + 8))(lVar3 + -0x10);
                    }
                    *(longlong * )(param_1 + 0x3a8) = lVar9;
                }
                *(longlong * )(param_1 + 0x3b0) = lVar11;
            }
            return;
        }
        pwVar13 = L"WindowSoundTemplate";
        pwVar6 = (wchar_t *) FUN_1401a4f40();
        if (pwVar6 == L"WindowSoundTemplate") {
            LAB_14010ceaf:
            if (lVar5 != 0) {
                psVar4 = (short *) FUN_1401a4f40(lVar5 + 0x20);
                goto LAB_14010cdbc;
            }
            goto LAB_14010cdba;
        }
        iVar10 = 0;
        if (*pwVar6 != L'\0') {
            do {
                if (((*pwVar13 == L'\0') || (*pwVar6 != *pwVar13)) || (0x7ffffffe < iVar10)) break;
                pwVar6 = pwVar6 + 1;
                pwVar13 = pwVar13 + 1;
                iVar10 = iVar10 + 1;
            } while (*pwVar6 != L'\0');
            if (iVar10 == 0x7fffffff) goto LAB_14010ceaf;
        }
        if ((*pwVar6 == L'\0') && (*pwVar13 == L'\0')) goto LAB_14010ceaf;
        lVar5 = *(longlong * )(lVar5 + 0x38);
    } while (true);
}


void FUN_14010cf80(longlong param_1) {
    longlong *plVar1;
    longlong lVar2;
    undefined2 *puVar3;
    int *piVar4;
    longlong *plVar5;
    int iVar6;
    int *piVar7;
    longlong lVar8;
    undefined8 uVar9;
    float fVar10;
    undefined auStack88[32];
    undefined local_38[8];
    int local_30;
    undefined4 local_2c;
    undefined4 local_28;
    ulonglong local_20;

    local_20 = DAT_140c0f7b0 ^ (ulonglong) auStack88;
    iVar6 = 0;
    if (*(longlong * )(param_1 + 0xa0) == 0) {
        local_30 = 0;
        local_2c = 6;
        local_28 = 7;
        piVar7 = &local_30;
        lVar8 = 3;
        do {
            lVar2 = *(longlong * )(param_1 + 0x50 + (longlong) * piVar7 * 8);
            if ((lVar2 != 0) && (piVar4 = (int *) FUN_140101470(lVar2, local_38), iVar6 < *piVar4)) {
                iVar6 = *piVar4;
            }
            piVar7 = piVar7 + 1;
            lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
    } else {
        puVar3 = (undefined2 *) FUN_14018b280(0x10, 0);
        if (puVar3 != (undefined2 *) 0x0) {
            *puVar3 = 0;
        }
        plVar1 = *(longlong * *)(param_1 + 0xa0);
        if (plVar1 != (longlong *) 0x0) {
            fVar10 = DAT_140c63664;
            uVar9 = (**(code * *) * plVar1)(plVar1);
            plVar5 = plVar1;
            if (0 < (int) (plVar1[0xc] - plVar1[0xb] >> 3)) {
                plVar5 = *(longlong **) plVar1[0xb];
            }
            FUN_140101180(uVar9, DAT_140c63664 - fVar10, plVar5);
            (**(code * *)(*plVar1 + 8))(plVar1);
        }
        if (puVar3 != (undefined2 *) 0x0) {
            FUN_14018b900(puVar3, 0);
        }
    }
    FUN_1407db4f0(local_20 ^ (ulonglong) auStack88);
    return;
}


void FUN_14010d0a0(longlong param_1) {
    longlong *plVar1;
    longlong lVar2;
    undefined2 *puVar3;
    int *piVar4;
    longlong *plVar5;
    int iVar6;
    int *piVar7;
    longlong lVar8;
    undefined8 uVar9;
    float fVar10;
    undefined auStack88[32];
    undefined local_38[8];
    int local_30;
    undefined4 local_2c;
    undefined4 local_28;
    ulonglong local_20;

    local_20 = DAT_140c0f7b0 ^ (ulonglong) auStack88;
    iVar6 = 0;
    lVar8 = 3;
    local_30 = 2;
    local_28 = 4;
    local_2c = 3;
    if (*(longlong * )(param_1 + 0xa0) == 0) {
        piVar7 = &local_30;
        do {
            lVar2 = *(longlong * )(param_1 + 0x50 + (longlong) * piVar7 * 8);
            if ((lVar2 != 0) && (piVar4 = (int *) FUN_140101470(lVar2, local_38), iVar6 < *piVar4)) {
                iVar6 = *piVar4;
            }
            piVar7 = piVar7 + 1;
            lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
    } else {
        puVar3 = (undefined2 *) FUN_14018b280(0x10, 0);
        if (puVar3 != (undefined2 *) 0x0) {
            *puVar3 = 0;
        }
        plVar1 = *(longlong * *)(param_1 + 0xa0);
        if (plVar1 != (longlong *) 0x0) {
            fVar10 = DAT_140c63664;
            uVar9 = (**(code * *) * plVar1)(plVar1);
            plVar5 = plVar1;
            if (0 < (int) (plVar1[0xc] - plVar1[0xb] >> 3)) {
                plVar5 = *(longlong **) plVar1[0xb];
            }
            FUN_140101180(uVar9, DAT_140c63664 - fVar10, plVar5);
            (**(code * *)(*plVar1 + 8))(plVar1);
        }
        if (puVar3 != (undefined2 *) 0x0) {
            FUN_14018b900(puVar3, 0);
        }
    }
    FUN_1407db4f0(local_20 ^ (ulonglong) auStack88);
    return;
}


void FUN_14010d1c0(longlong param_1) {
    longlong *plVar1;
    undefined2 *puVar2;
    longlong lVar3;
    longlong *plVar4;
    int iVar5;
    int *piVar6;
    longlong lVar7;
    undefined8 uVar8;
    float fVar9;
    undefined auStack88[32];
    undefined local_38[8];
    int local_30;
    undefined4 local_2c;
    undefined4 local_28;
    ulonglong local_20;

    local_20 = DAT_140c0f7b0 ^ (ulonglong) auStack88;
    if (*(longlong * )(param_1 + 0xa0) == 0) {
        iVar5 = 0;
        local_2c = 1;
        local_28 = 2;
        lVar7 = 3;
        local_30 = 0;
        piVar6 = &local_30;
        do {
            lVar3 = *(longlong * )(param_1 + 0x50 + (longlong) * piVar6 * 8);
            if (lVar3 != 0) {
                lVar3 = FUN_140101470(lVar3, local_38);
                if (iVar5 < *(int *) (lVar3 + 4)) {
                    iVar5 = *(int *) (lVar3 + 4);
                }
            }
            piVar6 = piVar6 + 1;
            lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
    } else {
        puVar2 = (undefined2 *) FUN_14018b280(0x10);
        if (puVar2 != (undefined2 *) 0x0) {
            *puVar2 = 0;
        }
        plVar1 = *(longlong * *)(param_1 + 0xa0);
        if (plVar1 != (longlong *) 0x0) {
            fVar9 = DAT_140c63664;
            uVar8 = (**(code * *) * plVar1)(plVar1);
            plVar4 = plVar1;
            if (0 < (int) (plVar1[0xc] - plVar1[0xb] >> 3)) {
                plVar4 = *(longlong **) plVar1[0xb];
            }
            FUN_140101180(uVar8, DAT_140c63664 - fVar9, plVar4);
            (**(code * *)(*plVar1 + 8))(plVar1);
        }
        if (puVar2 != (undefined2 *) 0x0) {
            FUN_14018b900(puVar2, 0);
        }
    }
    FUN_1407db4f0(local_20 ^ (ulonglong) auStack88);
    return;
}


void FUN_14010d2f0(longlong param_1) {
    longlong *plVar1;
    undefined2 *puVar2;
    longlong lVar3;
    longlong *plVar4;
    int iVar5;
    int *piVar6;
    longlong lVar7;
    undefined8 uVar8;
    float fVar9;
    undefined auStack88[32];
    undefined local_38[8];
    int local_30;
    undefined4 local_2c;
    undefined4 local_28;
    ulonglong local_20;

    local_20 = DAT_140c0f7b0 ^ (ulonglong) auStack88;
    if (*(longlong * )(param_1 + 0xa0) == 0) {
        iVar5 = 0;
        local_30 = 4;
        local_2c = 5;
        local_28 = 6;
        piVar6 = &local_30;
        lVar7 = 3;
        do {
            lVar3 = *(longlong * )(param_1 + 0x50 + (longlong) * piVar6 * 8);
            if (lVar3 != 0) {
                lVar3 = FUN_140101470(lVar3, local_38);
                if (iVar5 < *(int *) (lVar3 + 4)) {
                    iVar5 = *(int *) (lVar3 + 4);
                }
            }
            piVar6 = piVar6 + 1;
            lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
    } else {
        puVar2 = (undefined2 *) FUN_14018b280(0x10);
        if (puVar2 != (undefined2 *) 0x0) {
            *puVar2 = 0;
        }
        plVar1 = *(longlong * *)(param_1 + 0xa0);
        if (plVar1 != (longlong *) 0x0) {
            fVar9 = DAT_140c63664;
            uVar8 = (**(code * *) * plVar1)(plVar1);
            plVar4 = plVar1;
            if (0 < (int) (plVar1[0xc] - plVar1[0xb] >> 3)) {
                plVar4 = *(longlong **) plVar1[0xb];
            }
            FUN_140101180(uVar8, DAT_140c63664 - fVar9, plVar4);
            (**(code * *)(*plVar1 + 8))(plVar1);
        }
        if (puVar2 != (undefined2 *) 0x0) {
            FUN_14018b900(puVar2, 0);
        }
    }
    FUN_1407db4f0(local_20 ^ (ulonglong) auStack88);
    return;
}


int *FUN_14010d430(longlong param_1, int *param_2, int *param_3, undefined4 param_4) {
    int iVar1;

    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    switch (param_4) {
        case 0:
            iVar1 = FUN_14010cf80(param_1);
            param_2[2] = iVar1 + *param_2;
            iVar1 = FUN_14010d1c0(param_1);
            param_2[3] = iVar1 + param_2[1];
            return param_2;
        case 1:
            iVar1 = FUN_14010cf80(param_1);
            *param_2 = *param_2 + iVar1;
            iVar1 = FUN_14010d0a0(param_1);
            param_2[2] = param_2[2] - iVar1;
            iVar1 = FUN_14010d1c0(param_1);
            param_2[3] = iVar1 + param_2[1];
            return param_2;
        case 2:
            iVar1 = FUN_14010d0a0();
            *param_2 = param_2[2] - iVar1;
            iVar1 = FUN_14010d1c0(param_1);
            param_2[3] = iVar1 + param_2[1];
            return param_2;
        case 3:
            iVar1 = FUN_14010d0a0();
            *param_2 = param_2[2] - iVar1;
            goto LAB_14010d50e;
        case 4:
            iVar1 = FUN_14010d0a0();
            *param_2 = param_2[2] - iVar1;
            break;
        case 5:
            iVar1 = FUN_14010cf80(param_1);
            *param_2 = *param_2 + iVar1;
            iVar1 = FUN_14010d0a0(param_1);
            param_2[2] = param_2[2] - iVar1;
            break;
        case 6:
            iVar1 = FUN_14010cf80(param_1);
            param_2[2] = iVar1 + *param_2;
            break;
        case 7:
            iVar1 = FUN_14010cf80(param_1);
            param_2[2] = iVar1 + *param_2;
        LAB_14010d50e:
            iVar1 = FUN_14010d1c0(param_1);
            param_2[1] = param_2[1] + iVar1;
        LAB_14010d519:
            iVar1 = FUN_14010d2f0(param_1);
            param_2[3] = param_2[3] - iVar1;
            return param_2;
        case 8:
            if (*(char *) (param_1 + 0x3e0) == '\0') {
                iVar1 = FUN_14010cf80(param_1);
            } else {
                iVar1 = *(int *) (param_1 + 1000);
            }
            *param_2 = *param_2 + iVar1;
            if (*(char *) (param_1 + 0x3e0) == '\0') {
                iVar1 = FUN_14010d0a0(param_1);
            } else {
                iVar1 = *(int *) (param_1 + 0x3ec);
            }
            param_2[2] = param_2[2] - iVar1;
            if (*(char *) (param_1 + 0x3e0) == '\0') {
                iVar1 = FUN_14010d1c0(param_1);
            } else {
                iVar1 = *(int *) (param_1 + 0x3e4);
            }
            param_2[1] = param_2[1] + iVar1;
            if (*(char *) (param_1 + 0x3e0) != '\0') {
                param_2[3] = param_2[3] - *(int *) (param_1 + 0x3f0);
                return param_2;
            }
            goto LAB_14010d519;
        default:
            return param_2;
    }
    iVar1 = FUN_14010d2f0();
    param_2[1] = param_2[3] - iVar1;
    return param_2;
}


void FUN_14010d640(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
    longlong *plVar1;
    undefined2 *puVar2;
    undefined2 *puVar3;
    undefined8 uVar4;
    longlong *plVar5;
    longlong *plVar6;
    longlong *plVar7;
    uint uVar8;
    longlong **pplVar9;
    float fVar10;
    undefined local_48[32];

    puVar2 = (undefined2 *) FUN_14018b280(0x10);
    plVar5 = (longlong *) 0x0;
    if (puVar2 != (undefined2 *) 0x0) {
        *puVar2 = 0;
    }
    if (*(longlong * )(param_1 + 0xa0) == 0) {
        pplVar9 = (longlong * *)(param_1 + 0x50);
        plVar6 = plVar5;
        fVar10 = DAT_140c63664;
        do {
            plVar1 = *pplVar9;
            plVar7 = plVar6;
            if (plVar1 != plVar6) {
                if (plVar1 != (longlong *) 0x0) {
                    (**(code * *) * plVar1)(plVar1);
                }
                plVar7 = plVar1;
                if (plVar6 != (longlong *) 0x0) {
                    (**(code * *)(*plVar6 + 8))(plVar6);
                }
            }
            uVar4 = FUN_14010d430(param_1, local_48, param_2, plVar5);
            if (plVar7 != (longlong *) 0x0) {
                FUN_140103cf0(plVar7, uVar4, param_4, 0, DAT_140c63664 - fVar10);
            }
            uVar8 = (int) plVar5 + 1;
            plVar5 = (longlong * )(ulonglong)
            uVar8;
            pplVar9 = pplVar9 + 1;
            plVar6 = plVar7;
        } while ((int) uVar8 < 8);
        if (plVar7 != (longlong *) 0x0) {
            (**(code * *)(*plVar7 + 8))(plVar7);
        }
    } else {
        puVar3 = (undefined2 *) FUN_14018b280(0x10);
        if (puVar3 != (undefined2 *) 0x0) {
            *puVar3 = 0;
        }
        plVar5 = *(longlong * *)(param_1 + 0xa0);
        if (plVar5 != (longlong *) 0x0) {
            fVar10 = DAT_140c63664;
            (**(code * *) * plVar5)(plVar5);
            FUN_140103cf0(plVar5, param_2, param_4, 0, DAT_140c63664 - fVar10);
            (**(code * *)(*plVar5 + 8))(plVar5);
        }
        if (puVar3 != (undefined2 *) 0x0) {
            FUN_14018b900(puVar3, 0);
        }
    }
    if (puVar2 == (undefined2 *) 0x0) {
        return;
    }
    FUN_14018b900(puVar2, 0);
    return;
}


undefined8 FUN_14010d7f0(longlong param_1, undefined8 param_2) {
    longlong lVar1;
    longlong lVar2;
    char cVar3;
    undefined8 uVar4;
    ulonglong uVar5;
    longlong lVar6;
    int iVar7;
    uint uVar8;
    longlong *plVar9;

    if (*(char *) (param_1 + 8) != '\0') {
        return 1;
    }
    iVar7 = 0;
    plVar9 = (longlong * )(param_1 + 0x50);
    do {
        lVar1 = *plVar9;
        if ((lVar1 != 0) && ((*(byte * )(lVar1 + 0x74) & 1) == 0)) {
            uVar8 = 0;
            if (*(longlong * )(lVar1 + 0x60) - *(longlong * )(lVar1 + 0x58) >> 3 != 0) {
                uVar5 = 0;
                do {
                    if (*(longlong * )(*(longlong * )(lVar1 + 0x58) + uVar5 * 8) != 0) {
                        cVar3 = FUN_140100da0(*(undefined8 * )(*(longlong * )(lVar1 + 0x58) + uVar5 * 8), param_2);
                        if (cVar3 == '\0') goto LAB_14010d95a;
                    }
                    uVar8 = uVar8 + 1;
                    uVar5 = (ulonglong) uVar8;
                } while (uVar5 < (ulonglong)(*(longlong * )(lVar1 + 0x60) - *(longlong * )(lVar1 + 0x58) >> 3)
                        );
            }
            uVar8 = 0;
            lVar6 = *(longlong * )(lVar1 + 0x40) - *(longlong * )(lVar1 + 0x38);
            lVar2 = lVar6 >> 0x3f;
            if (lVar6 / 0x130 + lVar2 != lVar2) {
                uVar5 = 0;
                do {
                    lVar2 = *(longlong * )(uVar5 * 0x130 + *(longlong * )(lVar1 + 0x38));
                    if (*(char *) (lVar2 + 0x40) == '\0') {
                        cVar3 = FUN_1400fe1f0(lVar2, param_2);
                        if (cVar3 == '\0') goto LAB_14010d95a;
                    }
                    uVar8 = uVar8 + 1;
                    uVar5 = (ulonglong) uVar8;
                } while (uVar5 < (ulonglong)
                        ((*(longlong * )(lVar1 + 0x40) - *(longlong * )(lVar1 + 0x38)) / 0x130));
            }
            *(byte * )(lVar1 + 0x74) = *(byte * )(lVar1 + 0x74) | 1;
        }
        iVar7 = iVar7 + 1;
        plVar9 = plVar9 + 1;
    } while (iVar7 < 8);
    if (*(longlong * )(param_1 + 0xa0) == 0) {
        LAB_14010d942:
        if (*(longlong * )(param_1 + 0x90) != 0) {
            cVar3 = FUN_140100da0(*(longlong * )(param_1 + 0x90), param_2);
            if (cVar3 == '\0') goto LAB_14010d95a;
        }
        *(undefined * )(param_1 + 8) = 1;
        uVar4 = 1;
    } else {
        cVar3 = FUN_140100da0(*(longlong * )(param_1 + 0xa0), param_2);
        if (cVar3 != '\0') goto LAB_14010d942;
        LAB_14010d95a:
        uVar4 = 0;
    }
    return uVar4;
}


undefined8 *FUN_14010d990(undefined8 *param_1, undefined8 param_2) {
    longlong *plVar1;
    undefined8 *local_res8;

    *param_1 = param_2;
    local_res8 = param_1 + 9;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    FUN_14010b5a0(local_res8, param_2, L"DefaultSounds");
    plVar1 = (longlong *) param_1[7];
    if (plVar1 != (longlong *) param_1[8]) {
        if (plVar1 != (longlong *) 0x0) {
            *plVar1 = (longlong) local_res8;
        }
        param_1[7] = param_1[7] + 8;
        return param_1;
    }
    FUN_1400b9430(param_1 + 5, plVar1, &local_res8);
    return param_1;
}


void FUN_14010da30(longlong param_1) {
    if (*(longlong * )(param_1 + 0x170) != 0) {
        FUN_14018b900(*(longlong * )(param_1 + 0x170), 0);
    }
    if (*(longlong * )(param_1 + 0x148) != 0) {
        FUN_14018b900(*(longlong * )(param_1 + 0x148), 0);
    }
    if (*(longlong * )(param_1 + 0x120) != 0) {
        FUN_14018b900(*(longlong * )(param_1 + 0x120), 0);
    }
    if (*(longlong * )(param_1 + 0xf8) != 0) {
        FUN_14018b900(*(longlong * )(param_1 + 0xf8), 0);
    }
    if (*(longlong * )(param_1 + 0xd0) != 0) {
        FUN_14018b900(*(longlong * )(param_1 + 0xd0), 0);
    }
    if (*(longlong * )(param_1 + 0xa8) != 0) {
        FUN_14018b900(*(longlong * )(param_1 + 0xa8), 0);
    }
    if (*(longlong * )(param_1 + 0x80) != 0) {
        FUN_14018b900(*(longlong * )(param_1 + 0x80), 0);
    }
    if (*(longlong * )(param_1 + 0x58) != 0) {
        FUN_14018b900(*(longlong * )(param_1 + 0x58), 0);
    }
    if (*(longlong * )(param_1 + 0x30) != 0) {
        FUN_14018b900(*(longlong * )(param_1 + 0x30), 0);
    }
    if (*(longlong * )(param_1 + 8) != 0) {
        FUN_14018b900(*(longlong * )(param_1 + 8), 0);
        return;
    }
    return;
}


void FUN_14010db00(longlong param_1) {
    longlong lVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong *plVar4;

    plVar4 = *(longlong * *)(param_1 + 0x18);
    for (plVar3 = *(longlong * *)(param_1 + 0x10); plVar3 != plVar4; plVar3 = plVar3 + 1) {
        lVar1 = *plVar3;
        if (lVar1 != 0) {
            FUN_14010bff0(lVar1);
            FUN_14018b900(lVar1, 0);
        }
    }
    lVar1 = *(longlong * )(param_1 + 0x18);
    lVar2 = *(longlong * )(param_1 + 0x10);
    FUN_1407db590(lVar2, lVar1, 0);
    *(longlong * )(param_1 + 0x18) = *(longlong * )(param_1 + 0x18) + (lVar1 - lVar2 >> 3) * -8;
    plVar4 = *(longlong * *)(param_1 + 0x30);
    if (plVar4 != *(longlong * *)(param_1 + 0x38)) {
        do {
            lVar1 = *plVar4;
            if ((lVar1 != param_1 + 0x48) && (lVar1 != 0)) {
                FUN_14010da30(lVar1);
                FUN_14018b900(lVar1, 0);
            }
            plVar4 = plVar4 + 1;
        } while (plVar4 != *(longlong * *)(param_1 + 0x38));
    }
    lVar1 = *(longlong * )(param_1 + 0x38);
    lVar2 = *(longlong * )(param_1 + 0x30);
    FUN_1407db590(lVar2, lVar1, 0);
    *(longlong * )(param_1 + 0x38) = *(longlong * )(param_1 + 0x38) + (lVar1 - lVar2 >> 3) * -8;
    return;
}


longlong FUN_14010dc00(longlong param_1, ushort *param_2) {
    ushort uVar1;
    ulonglong uVar2;
    ushort uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ushort *puVar6;
    longlong *plVar7;
    ushort uVar8;

    if ((param_2 == (ushort *) 0x0) || (*param_2 == 0)) {
        return 0;
    }
    plVar7 = *(longlong * *)(param_1 + 0x30);
    joined_r0x00014010dc44:
    if (plVar7 == *(longlong * *)(param_1 + 0x38)) {
        return 0;
    }
    puVar6 = param_2;
    do {
        uVar1 = *(ushort * )((*(longlong * )(*plVar7 + 8) - (longlong) param_2) + (longlong) puVar6);
        uVar8 = uVar1;
        if (uVar1 < 0x80) {
            if ((ushort)(uVar1 - 0x41) < 0x1a) {
                uVar8 = uVar1 + 0x20;
            }
        } else {
            uVar4 = 0;
            uVar5 = 0x3d1;
            do {
                uVar2 = (uVar5 - uVar4 >> 1) + uVar4;
                if (*(ushort * )(&UNK_140a41a80 + uVar2 * 2) <= uVar1) {
                    if (uVar1 <= *(ushort * )(&UNK_140a41a80 + uVar2 * 2)) {
                        uVar8 = *(ushort * )(&UNK_140a40af0 + uVar2 * 2);
                        break;
                    }
                    uVar4 = uVar2 + 1;
                    uVar2 = uVar5;
                }
                uVar5 = uVar2;
            } while (uVar4 < uVar2);
        }
        uVar3 = *puVar6;
        if (uVar3 < 0x80) {
            if ((ushort)(uVar3 - 0x41) < 0x1a) {
                uVar3 = uVar3 + 0x20;
            }
        } else {
            uVar4 = 0;
            uVar5 = 0x3d1;
            do {
                uVar2 = (uVar5 - uVar4 >> 1) + uVar4;
                if (*(ushort * )(&UNK_140a41a80 + uVar2 * 2) <= uVar3) {
                    if (uVar3 <= *(ushort * )(&UNK_140a41a80 + uVar2 * 2)) {
                        uVar3 = *(ushort * )(&UNK_140a40af0 + uVar2 * 2);
                        break;
                    }
                    uVar4 = uVar2 + 1;
                    uVar2 = uVar5;
                }
                uVar5 = uVar2;
            } while (uVar4 < uVar2);
        }
        if (uVar8 != uVar3) break;
        if (uVar1 == 0) {
            return *plVar7;
        }
        puVar6 = puVar6 + 1;
    } while (true);
    plVar7 = plVar7 + 1;
    goto joined_r0x00014010dc44;
}



// WARNING: Removing unreachable block (ram,0x00014010de44)

undefined4 FUN_14010dd80(undefined8 param_1, short *param_2) {
    short sVar1;
    short *psVar2;
    longlong *plVar3;
    char cVar4;
    int iVar5;
    undefined4 uVar6;
    longlong lVar7;
    longlong lVar8;
    longlong lVar9;
    undefined2 *puVar10;
    undefined8 uVar11;
    short *psVar12;
    longlong *local_res10;
    undefined local_48[8];
    short *local_40;
    short *local_38;
    short *local_30;

    if (param_2 == (short *) 0x0) {
        return 0x80070057;
    }
    psVar2 = *(short **) (DAT_140c63650 + 0x310);
    local_40 = (short *) FUN_14018b280(0x10);
    lVar9 = 0;
    local_30 = local_40 + 8;
    if (local_40 != (short *) 0x0) {
        *local_40 = 0;
    }
    local_38 = local_40;
    if ((psVar2 != (short *) 0x0) && (lVar7 = lVar9, *psVar2 != 0)) {
        do {
            lVar8 = lVar7 + 1;
            lVar7 = lVar7 + 1;
        } while (psVar2[lVar8] != 0);
        lVar8 = lVar9;
        if (lVar7 * 2 >> 1 == 0) {
            FUN_1407db590(local_40, psVar2, 0);
        } else {
            FUN_14001c310(local_48, psVar2);
        }
        do {
            psVar12 = &DAT_1409d55f6 + lVar8;
            lVar8 = lVar8 + 1;
        } while (*psVar12 != 0);
        FUN_14001c310(local_48, &DAT_1409d55f4, &DAT_1409d55f4 + lVar8 * 2);
    }
    psVar12 = local_40;
    iVar5 = FUN_1401b58d0();
    if (iVar5 == 0) {
        if ((psVar2 != (short *) 0x0) && (*psVar2 != 0)) {
            sVar1 = *param_2;
            while (sVar1 != 0) {
                lVar9 = lVar9 + 1;
                sVar1 = param_2[lVar9];
            }
            FUN_14001c310(local_48, param_2, param_2 + lVar9);
            psVar12 = local_40;
            cVar4 = FUN_1400fe590(local_40);
            param_2 = psVar12;
            if (cVar4 != '\0') goto LAB_14010def6;
        }
        uVar6 = 0x80004005;
    } else {
        LAB_14010def6:
        puVar10 = (undefined2 *) FUN_14018b280(0x10);
        if (puVar10 != (undefined2 *) 0x0) {
            *puVar10 = 0;
        }
        local_res10 = (longlong *) 0x0;
        cVar4 = FUN_1400e27b0(DAT_140c63650, param_2, &local_res10);
        plVar3 = local_res10;
        if (cVar4 == '\0') {
            uVar6 = 0x80004005;
        } else {
            uVar11 = (**(code * *)(*local_res10 + 0x10))(local_res10);
            uVar6 = FUN_14010dfb0(param_1, uVar11);
        }
        if (plVar3 != (longlong *) 0x0) {
            (**(code * *)(*plVar3 + 8))(plVar3);
        }
        if (puVar10 != (undefined2 *) 0x0) {
            FUN_14018b900(puVar10, 0);
        }
    }
    if (psVar12 != (short *) 0x0) {
        FUN_14018b900(psVar12, 0);
    }
    return uVar6;
}


undefined8 FUN_14010dfb0(undefined8 *param_1, longlong param_2) {
    bool bVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong lVar4;
    short *psVar5;
    longlong lVar6;
    longlong lVar7;
    int iVar8;
    short *psVar9;
    longlong local_res10;

    if (((param_2 != 0) &&
         (plVar2 = (longlong *) FUN_1401a5ae0(param_2, L"WindowTemplates"), plVar2 != (longlong *) 0x0))
        && (lVar3 = (**(code * *)(*plVar2 + 8))(plVar2), lVar3 != 0)) {
        for (lVar4 = FUN_1401a5ae0(lVar3); lVar4 != 0; lVar4 = FUN_1401a5bc0(lVar4)) {
            for (lVar7 = *(longlong * )(lVar4 + 0x60); lVar7 != 0; lVar7 = *(longlong * )(lVar7 + 0x38)) {
                psVar9 = &DAT_140a31790;
                psVar5 = (short *) FUN_1401a4f40();
                if (psVar5 == &DAT_140a31790) {
                    LAB_14010e09f:
                    if ((lVar7 != 0) && (lVar7 = FUN_1401a4f40(lVar7 + 0x20), lVar7 != 0)) {
                        local_res10 = FUN_14010dc00(param_1, lVar7);
                        bVar1 = false;
                        if (local_res10 == 0) {
                            bVar1 = true;
                            lVar6 = FUN_14018b280(0x188, 0);
                            if (lVar6 == 0) {
                                local_res10 = 0;
                            } else {
                                local_res10 = FUN_14010b5a0(lVar6, *param_1, lVar7);
                            }
                        }
                        lVar7 = local_res10;
                        FUN_14010b6d0(local_res10, *param_1, lVar4);
                        if (bVar1) {
                            plVar2 = (longlong *) param_1[7];
                            if (plVar2 == (longlong *) param_1[8]) {
                                FUN_1400b9430(param_1 + 5, plVar2, &local_res10);
                            } else {
                                if (plVar2 != (longlong *) 0x0) {
                                    *plVar2 = lVar7;
                                }
                                param_1[7] = param_1[7] + 8;
                            }
                        }
                    }
                    break;
                }
                iVar8 = 0;
                if (*psVar5 != 0) {
                    do {
                        if (((*psVar9 == 0) || (*psVar5 != *psVar9)) || (0x7ffffffe < iVar8)) break;
                        psVar5 = psVar5 + 1;
                        psVar9 = psVar9 + 1;
                        iVar8 = iVar8 + 1;
                    } while (*psVar5 != 0);
                    if (iVar8 == 0x7fffffff) goto LAB_14010e09f;
                }
                if ((*psVar5 == 0) && (*psVar9 == 0)) goto LAB_14010e09f;
            }
        }
        for (lVar3 = FUN_1401a5ae0(lVar3); lVar3 != 0; lVar3 = FUN_1401a5bc0(lVar3)) {
            for (lVar4 = *(longlong * )(lVar3 + 0x60); lVar4 != 0; lVar4 = *(longlong * )(lVar4 + 0x38)) {
                psVar9 = &DAT_140a31790;
                psVar5 = (short *) FUN_1401a4f40();
                if (psVar5 == &DAT_140a31790) {
                    LAB_14010e1ef:
                    if ((lVar4 != 0) && (lVar4 = FUN_1401a4f40(lVar4 + 0x20), lVar4 != 0)) {
                        plVar2 = (longlong *) FUN_14010e2e0(param_1[2], param_1[3], lVar4);
                        if (plVar2 == (longlong *) param_1[3]) {
                            local_res10 = 0;
                        } else {
                            local_res10 = *plVar2;
                        }
                        bVar1 = false;
                        if (local_res10 == 0) {
                            bVar1 = true;
                            lVar7 = FUN_14018b280(0x3f8, 0);
                            if (lVar7 == 0) {
                                local_res10 = 0;
                            } else {
                                local_res10 = FUN_14010bda0(lVar7, lVar4);
                            }
                        }
                        lVar4 = local_res10;
                        FUN_14010c0f0(local_res10, *param_1, lVar3);
                        if (bVar1) {
                            plVar2 = (longlong *) param_1[3];
                            if (plVar2 == (longlong *) param_1[4]) {
                                FUN_14010a1c0(param_1 + 1, plVar2, &local_res10);
                            } else {
                                if (plVar2 != (longlong *) 0x0) {
                                    *plVar2 = lVar4;
                                }
                                param_1[3] = param_1[3] + 8;
                            }
                        }
                    }
                    break;
                }
                iVar8 = 0;
                if (*psVar5 != 0) {
                    do {
                        if (((*psVar9 == 0) || (*psVar5 != *psVar9)) || (0x7ffffffe < iVar8)) break;
                        psVar5 = psVar5 + 1;
                        psVar9 = psVar9 + 1;
                        iVar8 = iVar8 + 1;
                    } while (*psVar5 != 0);
                    if (iVar8 == 0x7fffffff) goto LAB_14010e1ef;
                }
                if ((*psVar5 == 0) && (*psVar9 == 0)) goto LAB_14010e1ef;
            }
        }
    }
    return 0;
}


longlong *FUN_14010e2e0(longlong *param_1, longlong *param_2, undefined8 param_3) {
    longlong lVar1;
    int iVar2;
    longlong lVar3;

    lVar3 = (longlong) param_2 - (longlong) param_1 >> 5;
    while (true) {
        if (lVar3 < 1) {
            lVar3 = (longlong) param_2 - (longlong) param_1 >> 3;
            if (lVar3 != 1) {
                if (lVar3 != 2) {
                    if (lVar3 != 3) {
                        return param_2;
                    }
                    if (((*param_1 != 0) && (lVar3 = *(longlong * )(*param_1 + 0x18), lVar3 != 0)) &&
                        (iVar2 = FUN_14018e2c0(lVar3, param_3), iVar2 == 0)) {
                        return param_1;
                    }
                    param_1 = param_1 + 1;
                }
                if (((*param_1 != 0) && (lVar3 = *(longlong * )(*param_1 + 0x18), lVar3 != 0)) &&
                    (iVar2 = FUN_14018e2c0(lVar3, param_3), iVar2 == 0)) {
                    return param_1;
                }
                param_1 = param_1 + 1;
            }
            if (((*param_1 != 0) && (lVar3 = *(longlong * )(*param_1 + 0x18), lVar3 != 0)) &&
                (iVar2 = FUN_14018e2c0(lVar3, param_3), iVar2 == 0)) {
                return param_1;
            }
            return param_2;
        }
        if (((*param_1 != 0) && (lVar1 = *(longlong * )(*param_1 + 0x18), lVar1 != 0)) &&
            (iVar2 = FUN_14018e2c0(lVar1, param_3), iVar2 == 0)) {
            return param_1;
        }
        if (((param_1[1] != 0) && (lVar1 = *(longlong * )(param_1[1] + 0x18), lVar1 != 0)) &&
            (iVar2 = FUN_14018e2c0(lVar1, param_3), iVar2 == 0))
            break;
        if (((param_1[2] != 0) && (lVar1 = *(longlong * )(param_1[2] + 0x18), lVar1 != 0)) &&
            (iVar2 = FUN_14018e2c0(lVar1, param_3), iVar2 == 0)) {
            return param_1 + 2;
        }
        if (((param_1[3] != 0) && (lVar1 = *(longlong * )(param_1[3] + 0x18), lVar1 != 0)) &&
            (iVar2 = FUN_14018e2c0(lVar1, param_3), iVar2 == 0)) {
            return param_1 + 3;
        }
        lVar3 = lVar3 + -1;
        param_1 = param_1 + 4;
    }
    return param_1 + 1;
}


undefined8 *FUN_14010e4a0(undefined8 *param_1) {
    longlong lVar1;
    char cVar2;
    undefined4 uVar3;
    undefined8 uVar4;
    longlong lVar5;
    longlong lVar6;
    longlong local_res8;

    FUN_1400c5920();
    lVar6 = 0;
    param_1[0x80] = 0;
    param_1[0x81] = 0xffffffffffffffff;
    param_1[0x82] = 0;
    param_1[0x83] = 0;
    param_1[0x84] = 0x800;
    *(undefined * )(param_1 + 0x85) = 0;
    *(undefined8 * )((longlong) param_1 + 0x42c) = 0;
    *param_1 = &PTR_LAB_140b56ca0;
    param_1[0x87] = 0;
    param_1[0x88] = 0;
    FUN_1401095e0(param_1 + 0x89);
    uVar4 = DAT_140c63678;
    param_1[0x8f] = 0;
    param_1[0x90] = 0;
    uVar3 = FUN_140142170(uVar4, L"EditSelection");
    uVar4 = DAT_140c63678;
    *(undefined4 * )(param_1 + 0x91) = uVar3;
    uVar3 = FUN_140142170(uVar4, L"xkcdPeriwinkle");
    uVar4 = DAT_140c63678;
    *(undefined4 * )((longlong) param_1 + 0x48c) = uVar3;
    uVar3 = FUN_140142170(uVar4, L"EditIMECompositionBG");
    uVar4 = DAT_140c63678;
    *(undefined4 * )(param_1 + 0x92) = uVar3;
    uVar3 = FUN_140142170(uVar4, L"EditIMECandidateSelection");
    *(undefined4 * )((longlong) param_1 + 0x494) = uVar3;
    uVar4 = FUN_14018b280(0x18, 0);
    param_1[0x99] = uVar4;
    *(undefined8 *) uVar4 = uVar4;
    *(undefined8 * )(param_1[0x99] + 8) = param_1[0x99];
    *(undefined * )(param_1 + 0x9a) = 0;
    param_1[0x9c] = 0;
    param_1[0x9b] = 0;
    *(undefined4 * )((longlong) param_1 + 0x4ec) = 0;
    param_1[0x9e] = 0;
    param_1[0x9f] = 0;
    param_1[0xa0] = 0;
    param_1[0xa2] = 0;
    param_1[0xa1] = 0;
    lVar5 = param_1[4];
    param_1[0x36] = param_1[0x36] | 4;
    param_1[0xa3] = 0;
    if ((lVar5 != 0) &&
        ((param_1[0x89] == 0 || (cVar2 = FUN_14002c740(param_1 + 0x8b, L"WhiteFill"), cVar2 == '\0')))) {
        lVar5 = FUN_140108e80(lVar5 + 0xf0, L"WhiteFill");
        if (lVar5 != 0) {
            do {
                lVar1 = lVar6 + 1;
                lVar6 = lVar6 + 1;
            } while (L"WhiteFill"[lVar1] != L'\0');
            FUN_14001c480(param_1 + 0x8b, L"WhiteFill", L"WhiteFill" + lVar6);
        }
        FUN_1401097f0(param_1 + 0x89, lVar5);
    }
    (**(code * *)(*DAT_140c65680 + 0x30))(DAT_140c65680, param_1 + 0x87);
    (**(code * *)(*(longlong *) param_1[0x87] + 0x28))
            ((longlong *) param_1[0x87], *(undefined8 * )(param_1[0x57] + 0x60));
    if ((*(byte * )(param_1 + 0x53) >> 3 & 1) != 0) {
        (**(code * *)(*(longlong *) param_1[0x87] + 0x18))((longlong *) param_1[0x87], 1);
    }
    FUN_1400dff50(param_1 + 0x7c, &local_res8, &PTR_s_EditBoxChanging_140c2c600);
    if (local_res8 != param_1[0x7d]) {
        (**(code * *)(*DAT_140c65680 + 0x30))(DAT_140c65680, param_1 + 0x88);
    }
    *(undefined(*)[16])(param_1 + 0xa8) =
            ZEXT816(CONCAT44((float) *(int *) (param_1 + 0x5a),
                             (float) (int) *(undefined8 * )((longlong) param_1 + 0x2cc)));
    *(undefined(*)[16])(param_1 + 0xaa) =
            ZEXT816(CONCAT44((float) *(int *) (param_1 + 0x5b),
                             (float) (int) *(undefined8 * )((longlong) param_1 + 0x2d4)));
    return param_1;
}


undefined8 FUN_14010e7b0(undefined8 param_1, ulonglong param_2) {
    FUN_14010e7f0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_14010e7f0(undefined8 *param_1) {
    longlong lVar1;
    longlong **pplVar2;
    longlong *plVar3;
    ulonglong uVar4;
    longlong *plVar5;
    ulonglong uVar6;

    *param_1 = &PTR_LAB_140b56ca0;
    plVar5 = *(longlong * *)(longlong * )
    param_1[0x99];
    if (plVar5 != (longlong *) param_1[0x99]) {
        do {
            lVar1 = plVar5[2];
            if (lVar1 != 0) {
                *(undefined * **)(lVar1 + 0x10) = &PTR_FUN_140b56a08;
                if (*(longlong * )(lVar1 + 0x20) != 0) {
                    FUN_1400579e0();
                }
                FUN_14018b900(lVar1, 0);
            }
            plVar5 = (longlong * ) * plVar5;
        } while (plVar5 != (longlong *) param_1[0x99]);
    }
    pplVar2 = (longlong **) param_1[0x90];
    uVar4 = 0;
    if (pplVar2 != (longlong **) 0x0) {
        if (*pplVar2 != (longlong *) 0x0) {
            (**(code * *)(**pplVar2 + 8))();
            *pplVar2 = (longlong *) 0x0;
        }
        if (pplVar2[3] != (longlong *) 0x0) {
            FUN_14018b900(pplVar2[3], 0);
        }
        FUN_14018b900(pplVar2, 0);
    }
    pplVar2 = (longlong **) param_1[0x8f];
    if (pplVar2 != (longlong **) 0x0) {
        if (*pplVar2 != (longlong *) 0x0) {
            (**(code * *)(**pplVar2 + 8))();
            *pplVar2 = (longlong *) 0x0;
        }
        if (pplVar2[3] != (longlong *) 0x0) {
            FUN_14018b900(pplVar2[3], 0);
        }
        FUN_14018b900(pplVar2, 0);
    }
    if ((longlong *) param_1[0x9f] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x9f] + 8))();
        param_1[0x9f] = 0;
    }
    uVar6 = uVar4;
    if (param_1[0xa2] != 0) {
        do {
            lVar1 = *(longlong * )(uVar6 + 8 + param_1[0xa1]);
            if (lVar1 != 0) {
                FUN_14018b900(lVar1, 0);
            }
            uVar4 = uVar4 + 1;
            uVar6 = uVar6 + 0x20;
        } while (uVar4 < (ulonglong) param_1[0xa2]);
    }
    lVar1 = param_1[0xa1];
    if (lVar1 != 0) {
        (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    FUN_1401429a0(DAT_140c63678, *(undefined4 * )((longlong) param_1 + 0x4ec));
    lVar1 = param_1[0x9b];
    if (lVar1 != 0) {
        (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    plVar5 = *(longlong * *)(longlong * )
    param_1[0x99];
    if (plVar5 != (longlong *) param_1[0x99]) {
        do {
            plVar3 = (longlong * ) * plVar5;
            FUN_14018b900(plVar5, 0);
            plVar5 = plVar3;
        } while (plVar3 != (longlong *) param_1[0x99]);
    }
    *(undefined8 *) param_1[0x99] = param_1[0x99];
    *(undefined8 * )(param_1[0x99] + 8) = param_1[0x99];
    FUN_14018b900(param_1[0x99], 0);
    FUN_1401429a0(DAT_140c63678, *(undefined4 * )((longlong) param_1 + 0x494));
    FUN_1401429a0(DAT_140c63678, *(undefined4 * )(param_1 + 0x92));
    FUN_1401429a0(DAT_140c63678, *(undefined4 * )((longlong) param_1 + 0x48c));
    FUN_1401429a0(DAT_140c63678, *(undefined4 * )(param_1 + 0x91));
    if ((longlong *) param_1[0x89] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x89] + 8))();
        param_1[0x89] = 0;
    }
    if (param_1[0x8c] != 0) {
        FUN_14018b900(param_1[0x8c], 0);
    }
    if ((longlong *) param_1[0x88] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x88] + 8))();
    }
    if ((longlong *) param_1[0x87] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x87] + 8))();
    }
    FUN_1400c6030(param_1);
    return;
}


void FUN_14010ea70(longlong param_1, undefined8 param_2, longlong param_3) {
    longlong lVar1;
    longlong *plVar2;
    ulonglong uVar3;
    undefined8 uVar4;
    undefined8 uVar5;
    ulonglong uVar6;
    longlong *plVar7;
    int local_res8[2];

    if ((*(longlong * )(param_1 + 0x410) != *(longlong * )(param_1 + 0x418)) || (param_3 != 0)) {
        uVar3 = (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0x48))();
        lVar1 = *(longlong * )(param_1 + 0x418);
        if ((*(ulonglong * )(param_1 + 0x420) <
             (*(longlong * )(param_1 + 0x410) - lVar1) + uVar3 + param_3) &&
            (param_3 = ((*(ulonglong * )(param_1 + 0x420) - *(longlong * )(param_1 + 0x410)) - uVar3) +
                       lVar1, param_3 == 0)) {
            FUN_1400d4070(param_1, 0x2b, param_1, &DAT_1409d04a2);
            return;
        }
        plVar7 = *(longlong * *)(param_1 + 0x440);
        if (plVar7 != (longlong *) 0x0) {
            local_res8[0] = 1;
            (**(code * *)(*plVar7 + 0x88))(plVar7, *(undefined8 * )(param_1 + 0x410), lVar1, param_2, param_3);
            plVar7 = *(longlong * *)(param_1 + 0x440);
            uVar4 = (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0x40))();
            uVar5 = (**(code * *)(*plVar7 + 0x40))(plVar7);
            FUN_1400d4070(param_1, 0x26, param_1, &DAT_140a15634, uVar5, uVar4, local_res8);
            if (local_res8[0] == 0) {
                plVar7 = *(longlong * *)(param_1 + 0x438);
                plVar2 = *(longlong * *)(param_1 + 0x440);
                lVar1 = *plVar2;
                uVar4 = (**(code * *)(*plVar7 + 0x48))(plVar7);
                uVar5 = (**(code * *)(*plVar7 + 0x40))(plVar7);
                (**(code * *)(lVar1 + 0x38))(plVar2, uVar5, uVar4);
                return;
            }
        }
        (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0x88))
                (*(longlong * *)(param_1 + 0x438), *(undefined8 * )(param_1 + 0x410),
                 *(undefined8 * )(param_1 + 0x418), param_2, param_3);
        FUN_14010ef50(param_1, *(undefined8 * )(param_1 + 0x410), *(undefined8 * )(param_1 + 0x418));
        *(longlong * )(param_1 + 0x410) = *(longlong * )(param_1 + 0x410) + param_3;
        *(undefined8 * )(param_1 + 0x418) = *(undefined8 * )(param_1 + 0x410);
        *(undefined8 * )(param_1 + 0x400) = *(undefined8 * )(param_1 + 0x410);
        *(undefined8 * )(param_1 + 0x408) = 0xffffffffffffffff;
        *(undefined * )(param_1 + 0x428) = 0;
        uVar6 = (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0x48))();
        if (uVar3 < uVar6) {
            lVar1 = *(longlong * )(param_1 + 0x410);
            plVar7 = (longlong * ) * *(longlong * *)(param_1 + 0x4c8);
            if (plVar7 != *(longlong * *)(param_1 + 0x4c8)) {
                do {
                    plVar2 = (longlong *) plVar7[2];
                    if ((ulonglong)(lVar1 - param_3) < (ulonglong) plVar2[1]) {
                        *plVar2 = *plVar2 + (uVar6 - uVar3);
                        plVar2[1] = plVar2[1] + (uVar6 - uVar3);
                    }
                    plVar7 = (longlong * ) * plVar7;
                } while (plVar7 != (longlong * ) * (longlong * )(param_1 + 0x4c8));
            }
        } else if (uVar6 < uVar3) {
            lVar1 = *(longlong * )(param_1 + 0x410);
            plVar7 = (longlong * ) * *(longlong * *)(param_1 + 0x4c8);
            if (plVar7 != *(longlong * *)(param_1 + 0x4c8)) {
                do {
                    plVar2 = (longlong *) plVar7[2];
                    if ((ulonglong)(lVar1 - param_3) < (ulonglong) plVar2[1]) {
                        *plVar2 = *plVar2 - (uVar3 - uVar6);
                        plVar2[1] = plVar2[1] - (uVar3 - uVar6);
                    }
                    plVar7 = (longlong * ) * plVar7;
                } while (plVar7 != (longlong * ) * (longlong * )(param_1 + 0x4c8));
            }
        }
        FUN_14010ee40(param_1);
        uVar4 = (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0x40))();
        FUN_1400d4070(param_1, 0x27, param_1, &DAT_1409d5a04, uVar4);
    }
    return;
}


longlong *
FUN_14010ed20(longlong param_1, ulonglong param_2, undefined8 param_3, longlong param_4,
              undefined8 param_5) {
    longlong lVar1;
    ulonglong uVar2;
    longlong *plVar3;
    longlong *plVar4;

    uVar2 = (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0x48))();
    if ((uVar2 < param_2) || (param_4 == 0)) {
        plVar3 = (longlong *) 0x0;
    } else {
        *(ulonglong * )(param_1 + 0x410) = param_2;
        *(ulonglong * )(param_1 + 0x418) = param_2;
        *(ulonglong * )(param_1 + 0x400) = param_2;
        *(undefined8 * )(param_1 + 0x408) = 0xffffffffffffffff;
        FUN_14010ee40(param_1);
        FUN_14010ea70(param_1, param_3, param_4);
        plVar3 = (longlong *) FUN_14018b280(0x28);
        if (plVar3 == (longlong *) 0x0) {
            plVar3 = (longlong *) 0x0;
        } else {
            lVar1 = *(longlong * )(param_1 + 0x410);
            plVar3[1] = lVar1;
            *plVar3 = lVar1 - param_4;
            plVar3[4] = 0;
            plVar3[2] = (longlong) & PTR_FUN_140b56a08;
            *(undefined4 * )(plVar3 + 3) = 0xfffffffe;
            FUN_1400f9e50(plVar3 + 2, param_5);
        }
        lVar1 = *(longlong * )(param_1 + 0x4c8);
        plVar4 = (longlong *) FUN_14018b280(0x18);
        if ((longlong * *)(plVar4 + 2) != (longlong **) 0x0) {
            plVar4[2] = (longlong) plVar3;
        }
        *plVar4 = lVar1;
        plVar4[1] = *(longlong * )(lVar1 + 8);
        **(longlong * **)(lVar1 + 8) = plVar4;
        *(longlong * *)(lVar1 + 8) = plVar4;
    }
    return plVar3;
}


void FUN_14010ee40(longlong param_1) {
    ulonglong uVar1;
    ulonglong uVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    ulonglong *puVar6;
    ulonglong *puVar7;

    uVar1 = *(ulonglong * )(param_1 + 0x410);
    uVar2 = *(ulonglong * )(param_1 + 0x418);
    if (uVar1 == uVar2) {
        puVar5 = (undefined8 * ) * *(undefined8 * *)(param_1 + 0x4c8);
        while (true) {
            if (puVar5 == *(undefined8 * *)(param_1 + 0x4c8)) {
                return;
            }
            puVar7 = (ulonglong *) puVar5[2];
            if ((*puVar7 <= uVar1) && (uVar1 < puVar7[1])) break;
            puVar5 = (undefined8 * ) * puVar5;
        }
        if (*puVar7 == uVar1) {
            return;
        }
        *(ulonglong * )(param_1 + 0x410) = *puVar7;
        uVar2 = puVar7[1];
        *(ulonglong * )(param_1 + 0x408) = uVar1;
        *(ulonglong * )(param_1 + 0x418) = uVar2;
        *(ulonglong * )(param_1 + 0x400) = uVar2;
        return;
    }
    puVar5 = *(undefined8 * *)(param_1 + 0x4c8);
    puVar3 = (undefined8 * ) * puVar5;
    for (puVar4 = puVar3; puVar4 != puVar5; puVar4 = (undefined8 * ) * puVar4) {
        puVar7 = (ulonglong *) puVar4[2];
        if ((*puVar7 <= uVar1) && (uVar1 < puVar7[1])) goto joined_r0x00014010eedd;
    }
    puVar7 = (ulonglong *) 0x0;
    joined_r0x00014010eedd:
    do {
        if (puVar3 == puVar5) {
            puVar6 = (ulonglong *) 0x0;
            LAB_14010eef9:
            if (puVar7 != (ulonglong *) 0x0) {
                *(ulonglong * )(param_1 + 0x410) = *puVar7;
            }
            if (puVar6 != (ulonglong *) 0x0) {
                *(ulonglong * )(param_1 + 0x418) = puVar6[1];
            }
            if (*(ulonglong * )(param_1 + 0x400) != uVar2) {
                *(undefined8 * )(param_1 + 0x400) = *(undefined8 * )(param_1 + 0x410);
                return;
            }
            *(undefined8 * )(param_1 + 0x400) = *(undefined8 * )(param_1 + 0x418);
            return;
        }
        puVar6 = (ulonglong *) puVar3[2];
        if ((*puVar6 <= uVar2) && (uVar2 < puVar6[1])) goto LAB_14010eef9;
        puVar3 = (undefined8 * ) * puVar3;
    } while (true);
}


void FUN_14010ef50(longlong param_1, ulonglong param_2, ulonglong param_3) {
    ulonglong *puVar1;
    longlong *plVar2;
    longlong **pplVar3;
    longlong **pplVar4;

    pplVar3 = (longlong * *) * *(longlong * **)(param_1 + 0x4c8);
    if (pplVar3 != *(longlong * **)(param_1 + 0x4c8)) {
        do {
            puVar1 = (ulonglong *) pplVar3[2];
            if ((param_2 < *puVar1 || param_2 == *puVar1) && (puVar1[1] <= param_3)) {
                puVar1[2] = (ulonglong) & PTR_FUN_140b56a08;
                if (puVar1[4] != 0) {
                    FUN_1400579e0();
                }
                FUN_14018b900(puVar1, 0);
                plVar2 = pplVar3[1];
                pplVar4 = (longlong * *) * pplVar3;
                *plVar2 = (longlong) pplVar4;
                pplVar4[1] = plVar2;
                FUN_14018b900(pplVar3);
            } else {
                pplVar4 = (longlong * *) * pplVar3;
            }
            pplVar3 = pplVar4;
        } while (pplVar4 != *(longlong * **)(param_1 + 0x4c8));
    }
    return;
}


void FUN_14010f000(longlong *param_1, longlong param_2) {
    short sVar1;
    int iVar2;
    ulonglong uVar3;
    short *psVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;

    iVar2 = 0x7c00;
    if ((int) param_2 < 0x7c00) {
        iVar2 = (int) param_2;
    }
    param_1[0x84] = (longlong) iVar2;
    if (((longlong *) param_1[0x87] != (longlong *) 0x0) &&
        (uVar3 = (**(code * *)(*(longlong *) param_1[0x87] + 0x48))(),
                (ulonglong) param_1[0x84] <= uVar3 && uVar3 != param_1[0x84])) {
        FUN_14010ef50(param_1, param_2, 0x7c00);
        psVar4 = (short *) (**(code * *)(*(longlong *) param_1[0x87] + 0x40))();
        puVar6 = (undefined8 *) 0x0;
        if (psVar4 != (short *) 0x0) {
            sVar1 = *psVar4;
            puVar7 = puVar6;
            while (sVar1 != 0) {
                puVar7 = (undefined8 * )((longlong) puVar7 + 1);
                sVar1 = psVar4[(longlong) puVar7];
            }
            puVar5 = (undefined8 *) FUN_14018b280((longlong) puVar7 * 2 + 0x12, 0);
            if (puVar5 != (undefined8 *) 0x0) {
                puVar5[1] = puVar7;
                *puVar5 = &PTR_LAB_140b55060;
                puVar6 = puVar5;
            }
            puVar6 = puVar6 + 2;
            FUN_1407db590(puVar6, psVar4, (longlong) puVar7 * 2);
            *(undefined2 * )((longlong) puVar7 * 2 + (longlong) puVar6) = 0;
        }
        *(undefined2 * )((longlong) puVar6 + param_2 * 2) = 0;
        (**(code * *)(*param_1 + 0x50))(param_1, puVar6);
        if (puVar6 != (undefined8 *) 0x0) {
            (**(code * *)(puVar6[-2] + 8))(puVar6 + -2);
        }
    }
    return;
}


void FUN_14010f120(longlong param_1, undefined2 param_2) {
    longlong *plVar1;
    longlong lVar2;
    ulonglong uVar3;
    undefined8 uVar4;
    undefined8 uVar5;
    longlong *plVar6;
    ulonglong uVar7;
    int local_res8[2];

    if ((*(char *) (param_1 + 0x430) == '\0') ||
        (*(longlong * )(param_1 + 0x410) != *(longlong * )(param_1 + 0x418))) {
        uVar7 = *(ulonglong * )(param_1 + 0x418);
    } else {
        uVar3 = (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0x48))();
        uVar7 = *(longlong * )(param_1 + 0x410) + 1;
        if (uVar3 < uVar7) {
            uVar7 = uVar3;
        }
    }
    uVar3 = (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0x48))();
    if ((*(longlong * )(param_1 + 0x410) - uVar7) + uVar3 < *(ulonglong * )(param_1 + 0x420)) {
        plVar6 = *(longlong * *)(param_1 + 0x440);
        if (plVar6 != (longlong *) 0x0) {
            local_res8[0] = 1;
            (**(code * *)(*plVar6 + 0x98))(plVar6, *(longlong * )(param_1 + 0x410), uVar7, param_2);
            plVar6 = *(longlong * *)(param_1 + 0x440);
            uVar4 = (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0x40))();
            uVar5 = (**(code * *)(*plVar6 + 0x40))(plVar6);
            FUN_1400d4070(param_1, 0x26, param_1, &DAT_140a19154, uVar5, uVar4, local_res8);
            if (local_res8[0] == 0) {
                plVar6 = *(longlong * *)(param_1 + 0x438);
                plVar1 = *(longlong * *)(param_1 + 0x440);
                lVar2 = *plVar1;
                uVar4 = (**(code * *)(*plVar6 + 0x48))(plVar6);
                uVar5 = (**(code * *)(*plVar6 + 0x40))(plVar6);
                (**(code * *)(lVar2 + 0x38))(plVar1, uVar5, uVar4);
                return;
            }
        }
        (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0x98))
                (*(longlong * *)(param_1 + 0x438), *(undefined8 * )(param_1 + 0x410), uVar7, param_2);
        FUN_14010ef50(param_1, *(undefined8 * )(param_1 + 0x410), *(undefined8 * )(param_1 + 0x418));
        *(longlong * )(param_1 + 0x410) = *(longlong * )(param_1 + 0x410) + 1;
        *(undefined8 * )(param_1 + 0x418) = *(undefined8 * )(param_1 + 0x410);
        *(undefined8 * )(param_1 + 0x400) = *(undefined8 * )(param_1 + 0x410);
        *(undefined8 * )(param_1 + 0x408) = 0xffffffffffffffff;
        *(undefined * )(param_1 + 0x428) = 0;
        uVar7 = (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0x48))();
        if (uVar3 < uVar7) {
            lVar2 = *(longlong * )(param_1 + 0x410);
            plVar6 = (longlong * ) * *(longlong * *)(param_1 + 0x4c8);
            if (plVar6 != *(longlong * *)(param_1 + 0x4c8)) {
                do {
                    plVar1 = (longlong *) plVar6[2];
                    if (lVar2 - 1U < (ulonglong) plVar1[1]) {
                        *plVar1 = *plVar1 + (uVar7 - uVar3);
                        plVar1[1] = plVar1[1] + (uVar7 - uVar3);
                    }
                    plVar6 = (longlong * ) * plVar6;
                } while (plVar6 != (longlong * ) * (longlong * )(param_1 + 0x4c8));
            }
        } else if (uVar7 < uVar3) {
            lVar2 = *(longlong * )(param_1 + 0x410);
            plVar6 = (longlong * ) * *(longlong * *)(param_1 + 0x4c8);
            if (plVar6 != *(longlong * *)(param_1 + 0x4c8)) {
                do {
                    plVar1 = (longlong *) plVar6[2];
                    if (lVar2 - 1U < (ulonglong) plVar1[1]) {
                        *plVar1 = *plVar1 - (uVar3 - uVar7);
                        plVar1[1] = plVar1[1] - (uVar3 - uVar7);
                    }
                    plVar6 = (longlong * ) * plVar6;
                } while (plVar6 != (longlong * ) * (longlong * )(param_1 + 0x4c8));
            }
        }
        FUN_14010ee40(param_1);
        *(undefined * )(param_1 + 0x429) = 1;
        uVar4 = (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0x40))();
        FUN_1400d4070(param_1, 0x27, param_1, &DAT_1409d5a04, uVar4);
        return;
    }
    FUN_1400d4070(param_1, 0x2b, param_1, &DAT_1409d0407);
    return;
}


void FUN_14010f3e0(longlong param_1, float *param_2, float *param_3) {
    longlong *plVar1;
    longlong lVar2;
    float *pfVar3;
    undefined8 uVar4;
    float fVar5;
    float local_res8[2];

    pfVar3 = (float *) (**(code * *)(**(longlong * *)(*(longlong * )(param_1 + 0x2b8) + 0x60) + 0x20))();
    *param_3 = *param_3 - *(float *) (param_1 + 0x42c);
    param_3[4] = param_3[4] - *(float *) (param_1 + 0x42c);
    if ((*(byte * )(param_1 + 0x2c0) & 4) != 0) {
        fVar5 = ((param_2[5] - param_2[1]) - *pfVar3) * 0.5 + param_3[1];
        param_3[1] = fVar5;
        param_3[5] = fVar5 + *pfVar3;
    }
    if ((*(uint * )(param_1 + 0x2c0) & 2) == 0) {
        if ((*(uint * )(param_1 + 0x2c0) & 1) == 0) {
            return;
        }
        plVar1 = *(longlong * *)(param_1 + 0x438);
        local_res8[0] = 0.0;
        lVar2 = *plVar1;
        uVar4 = (**(code * *)(lVar2 + 0x48))(plVar1);
        (**(code * *)(lVar2 + 0xa8))(plVar1, uVar4, local_res8);
        local_res8[0] = ((param_2[4] - *param_2) - local_res8[0]) * 0.5;
    } else {
        plVar1 = *(longlong * *)(param_1 + 0x438);
        local_res8[0] = 0.0;
        lVar2 = *plVar1;
        uVar4 = (**(code * *)(lVar2 + 0x48))(plVar1);
        (**(code * *)(lVar2 + 0xa8))(plVar1, uVar4, local_res8);
        local_res8[0] = (param_2[4] - *param_2) - local_res8[0];
    }
    param_3[4] = local_res8[0] + param_3[4];
    *param_3 = local_res8[0] + *param_3;
    return;
}


void FUN_14010ffb0(longlong param_1) {
    longlong *plVar1;
    ulonglong *puVar2;
    longlong lVar3;
    longlong *plVar4;
    undefined8 uVar5;
    longlong lVar6;
    longlong lVar7;
    undefined4 local_48;
    undefined4 uStack68;
    undefined4 uStack64;
    undefined4 uStack60;
    undefined local_38[16];
    undefined local_28[16];

    if (*(char *) (param_1 + 0x4d0) == '\0') {
        plVar1 = (longlong * )(param_1 + 0x4d8);
        local_28 = ZEXT816(CONCAT44((float) *(int *) (param_1 + 0x2d8),
                                    (float) (int) *(undefined8 * )(param_1 + 0x2d4)));
        local_38 = ZEXT816(CONCAT44((float) *(int *) (param_1 + 0x2d0),
                                    (float) (int) *(undefined8 * )(param_1 + 0x2cc)));
        local_48 = 0x3f800000;
        uStack68 = 0x3f800000;
        uStack64 = 0x3f800000;
        uStack60 = 0x3f800000;
        (**(code * *)(*DAT_140c65680 + 0x118))
                (DAT_140c65680, *(undefined8 * )(param_1 + 0x438), 0, 0xffffffffffffffff, local_38,
                 *(uint * )(param_1 + 0x2c0) | 0x400, &local_48, 1, plVar1);
        lVar3 = *(longlong * )(param_1 + 0x4e0);
        lVar6 = (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0x48))();
        if (lVar6 != 0) {
            plVar4 = *(longlong * *)(param_1 + 0x438);
            lVar6 = (**(code * *)(*plVar4 + 0x48))(plVar4);
            lVar7 = (**(code * *)(*plVar4 + 0x40))(plVar4);
            if ((*(short *) (lVar7 + -2 + lVar6 * 2) == 10) &&
                (puVar2 = (ulonglong * )(*plVar1 + -0x10 + lVar3 * 0x18),
                        *(ulonglong * )(&DAT_ffffffffffffffe8 + lVar3 * 0x18 + *plVar1) <= *puVar2 &&
                        *puVar2 != *(ulonglong * )(&DAT_ffffffffffffffe8 + lVar3 * 0x18 + *plVar1))) {
                FUN_140115d60(plVar1, lVar3 + 1);
                uVar5 = *(undefined8 * )(*plVar1 + -0x10 + lVar3 * 0x18);
                *(undefined8 * )(*plVar1 + lVar3 * 0x18) = uVar5;
                *(undefined8 * )(*plVar1 + 8 + lVar3 * 0x18) = uVar5;
                *(undefined4 * )(*plVar1 + 0x10 + lVar3 * 0x18) = 0;
            }
        }
        *(undefined * )(param_1 + 0x4d0) = 0;
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140110150(longlong param_1, undefined (*param_2)[16], ulonglong param_3, ulonglong param_4,
                   undefined8 param_5, char param_6) {
    ulonglong uVar1;
    bool bVar2;
    bool bVar3;
    bool bVar4;
    char cVar5;
    uint uVar6;
    longlong lVar7;
    longlong lVar8;
    undefined8 uVar9;
    ulonglong uVar10;
    ushort uVar11;
    ulonglong uVar12;
    ulonglong uVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float local_118;
    float fStack276;
    undefined4 uStack272;
    undefined4 uStack268;
    float local_108;
    float fStack260;
    undefined4 uStack256;
    undefined4 uStack252;
    float local_f8;
    float local_f4;
    float local_f0;
    float local_ec;
    undefined local_e8[4];
    undefined auStack228[8];
    undefined4 uStack220;
    undefined local_d8[4];
    undefined auStack212[8];
    undefined4 uStack204;
    ulonglong local_c8;
    longlong local_c0;
    float *local_b8;

    lVar7 = (**(code * *)(**(longlong * *)(*(longlong * )(param_1 + 0x2b8) + 0x60) + 0x18))();
    local_c0 = lVar7;
    local_b8 = (float *) (**(code * *)(**(longlong * *)(*(longlong * )(param_1 + 0x2b8) + 0x60) + 0x20))();
    local_118 = *(float *) *param_2;
    fStack276 = *(float *) (*param_2 + 4);
    uStack272 = *(undefined4 * )(*param_2 + 8);
    uStack268 = *(undefined4 * )(*param_2 + 0xc);
    _local_e8 = *param_2;
    local_108 = *(float *) param_2[1];
    uStack256 = *(undefined4 * )(param_2[1] + 8);
    uStack252 = *(undefined4 * )(param_2[1] + 0xc);
    fVar18 = 1.0;
    fVar17 = 0.0;
    fStack260 = fStack276 + *local_b8;
    _local_d8 = CONCAT412(uStack252, CONCAT48(uStack256, CONCAT44(fStack260, local_108)));
    if (*(char *) (param_1 + 0x430) == '\0') {
        local_e8 = *(float *) (lVar7 + 0xc) + 1.0;
    } else {
        lVar8 = (**(code * *)(**(longlong * *)(*(longlong * )(param_1 + 0x2b8) + 0x60) + 0x20))();
        local_e8 = *(float *) (lVar8 + 0x14);
    }
    local_c8 = *(ulonglong * )(param_1 + 0x4e0);
    fVar20 = 0.5;
    uVar12 = 0;
    fVar19 = 0.0;
    bVar4 = false;
    uVar13 = uVar12;
    bVar2 = false;
    if (local_c8 != 0) {
        do {
            local_118 = *(float *) *param_2;
            local_108 = *(float *) param_2[1];
            fVar16 = 0.0;
            (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0xa8))
                    (*(longlong * *)(param_1 + 0x438),
                     *(undefined8 * )(uVar12 + *(longlong * )(param_1 + 0x4d8)));
            if (param_3 < param_4) {
                uVar1 = *(ulonglong * )(uVar12 + *(longlong * )(param_1 + 0x4d8));
                if ((uVar1 < param_4) &&
                    (param_3 < *(ulonglong * )(uVar12 + 8 + *(longlong * )(param_1 + 0x4d8)))) {
                    if (uVar1 < param_3) {
                        local_f0 = 0.0;
                        (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0xa8))
                                (*(longlong * *)(param_1 + 0x438), param_3);
                        fVar16 = local_f0 - 0.0;
                    }
                    fVar15 = *(float *) (uVar12 + 0x10 + *(longlong * )(param_1 + 0x4d8));
                    if (param_4 < *(ulonglong * )(uVar12 + 8 + *(longlong * )(param_1 + 0x4d8))) {
                        local_ec = 0.0;
                        (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0xa8))
                                (*(longlong * *)(param_1 + 0x438), param_4);
                        fVar15 = local_ec - 0.0;
                    }
                    if ((*(uint * )(param_1 + 0x2c0) & 2) == 0) {
                        local_118 = *(float *) *param_2;
                        local_108 = local_118;
                        if ((*(uint * )(param_1 + 0x2c0) & 1) != 0) {
                            fVar14 = *(float *) param_2[1] - local_118;
                            local_108 = (fVar14 - *(float *) (uVar12 + 0x10 + *(longlong * )(param_1 + 0x4d8))) *
                                        fVar20 + local_118;
                            local_118 = (fVar14 - *(float *) (uVar12 + 0x10 + *(longlong * )(param_1 + 0x4d8))) *
                                        fVar20 + local_118;
                        }
                    } else {
                        local_118 = *(float *) param_2[1] -
                                    *(float *) (uVar12 + 0x10 + *(longlong * )(param_1 + 0x4d8));
                        local_108 = *(float *) param_2[1] -
                                    *(float *) (uVar12 + 0x10 + *(longlong * )(param_1 + 0x4d8));
                    }
                    local_108 = local_108 + fVar15;
                    local_118 = local_118 + fVar16;
                    if (((param_6 == '\0') || (cVar5 = FUN_1400d40a0(), cVar5 != '\0')) &&
                        (lVar7 = *(longlong * )(param_1 + 0x448), lVar7 != 0)) {
                        fVar16 = (DAT_140c63664 - *(float *) (param_1 + 0x450)) * *(float *) (param_1 + 0x454);
                        uVar9 = FUN_14004f610(param_5);
                        FUN_140103e60(lVar7, &local_118, uVar9, 0, fVar16);
                    }
                    uVar11 = *(ushort * )(DAT_140c63650 + 0xe0) & 0x3ff;
                    if (((uVar11 == 4) || ((ushort)(uVar11 - 0x11) < 2)) &&
                        (((*(uint * )(param_1 + 0x298) >> 0xb & 1) != 0 &&
                          (cVar5 = FUN_1400d40a0(), cVar5 != '\0')))) {
                        *(float *) (param_1 + 0x520) = local_118;
                        *(float *) (param_1 + 0x524) = fStack276;
                        *(undefined4 * )(param_1 + 0x528) = uStack272;
                        *(undefined4 * )(param_1 + 0x52c) = uStack268;
                        *(float *) (param_1 + 0x530) = local_108;
                        *(float *) (param_1 + 0x534) = fStack260;
                        *(undefined4 * )(param_1 + 0x538) = uStack256;
                        *(undefined4 * )(param_1 + 0x53c) = uStack252;
                    }
                }
            }
            if ((param_6 != '\0') && (!bVar4)) {
                lVar7 = *(longlong * )(param_1 + 0x4d8);
                uVar1 = *(ulonglong * )(param_1 + 0x400);
                if ((uVar1 < *(ulonglong * )(uVar12 + lVar7)) ||
                    (*(ulonglong * )(uVar12 + 8 + lVar7) <= uVar1)) {
                    bVar3 = false;
                    bVar2 = false;
                } else {
                    bVar3 = true;
                    bVar2 = true;
                    *(undefined * )(param_1 + 0x428) = 0;
                }
                if ((*(char *) (param_1 + 0x428) != '\0') &&
                    (bVar2 = bVar3, uVar1 == *(ulonglong * )(uVar12 + 8 + lVar7))) {
                    bVar2 = true;
                }
                if (((uVar1 == *(ulonglong * )(uVar12 + 8 + lVar7)) && (uVar13 == local_c8 - 1)) || (bVar2)) {
                    _local_e8 = CONCAT412(uStack268, CONCAT48(uStack272, CONCAT44(fStack276, local_118)));
                    _local_d8 = CONCAT412(uStack252, CONCAT48(uStack256, CONCAT44(fStack260, local_108)));
                    fVar19 = *(float *) (uVar12 + 0x10 + lVar7);
                    local_f8 = 0.0;
                    bVar4 = true;
                    (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0xa8))
                            (*(longlong * *)(param_1 + 0x438), uVar1);
                    fVar17 = local_f8 - 0.0;
                    if (*(char *) (param_1 + 0x430) == '\0') {
                        local_e8 = fVar17 + *(float *) (local_c0 + 0xc) + fVar18;
                    } else {
                        uVar1 = *(ulonglong * )(param_1 + 0x400);
                        local_f4 = 0.0;
                        uVar10 = (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0x48))();
                        if (uVar1 < uVar10) {
                            (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0xa8))
                                    (*(longlong * *)(param_1 + 0x438), uVar1 + 1);
                            local_e8 = local_f4 - 0.0;
                        } else {
                        }
                        lVar7 = (**(code * *)(**(longlong * *)(*(longlong * )(param_1 + 0x2b8) + 0x60) + 0x20))();
                        fVar16 = fVar17 + *(float *) (lVar7 + 0x14);
                        if (local_e8 <= fVar16) {
                            local_e8 = fVar16;
                        }
                    }
                }
            }
            uVar13 = uVar13 + 1;
            uVar12 = uVar12 + 0x18;
            fStack276 = fStack276 + *local_b8;
            fStack260 = fStack260 + *local_b8;
            lVar7 = local_c0;
            bVar2 = bVar4;
        } while (uVar13 < local_c8);
    }
    if (param_6 != '\0') {
        if (!bVar2) {
            _auStack228 = CONCAT48(uStack268, CONCAT44(uStack272, fStack276));
            fVar17 = 0.0;
            _auStack212 = CONCAT48(uStack252, CONCAT44(uStack256, fStack260));
            local_e8 = *(float *) (lVar7 + 0xc) + fVar18;
        }
        if ((*(uint * )(param_1 + 0x2c0) & 2) == 0) {
            if ((*(uint * )(param_1 + 0x2c0) & 1) == 0) {
                fVar19 = *(float *) *param_2;
            } else {
                fVar19 = ((*(float *) param_2[1] - *(float *) *param_2) - fVar19) * fVar20 +
                         *(float *) *param_2;
            }
        } else {
            fVar19 = *(float *) param_2[1] - fVar19;
        }
        _local_d8 = CONCAT124(_auStack212, fVar19 + local_e8);
        _local_e8 = CONCAT124(_auStack228, fVar19 + fVar17);
        if (((*(longlong * )(param_1 + 0x20) != 0) &&
             (*(longlong * )(*(longlong * )(param_1 + 0x20) + 0xb40) == param_1)) &&
            (((*(byte * )(param_1 + 0x298) >> 1 & 1) == 0 &&
              (uVar6 = FUN_14018cdf0(), (uVar6 >> 9 & 1) != 0)))) {
            (**(code * *)(*DAT_140c65680 + 0x90))(DAT_140c65680, 1);
            if ((ulonglong) * (uint * )(param_1 + 0x2c4) < *(ulonglong * )(DAT_140c63678 + 0x30)) {
                lVar7 = (ulonglong) * (uint * )(param_1 + 0x2c4) * 0x20 + *(longlong * )(DAT_140c63678 + 0x28);
            } else {
                lVar7 = *(longlong * )(DAT_140c63678 + 0x28);
            }
            if (*(longlong * )(param_1 + 0x448) != 0) {
                FUN_140103e60(*(longlong * )(param_1 + 0x448), local_e8, lVar7, 0,
                              (DAT_140c63664 - *(float *) (param_1 + 0x450)) * *(float *) (param_1 + 0x454));
            }
        }
        *(float *) (param_1 + 0x4a0) = local_e8;
        *(undefined4 * )(param_1 + 0x4a4) = auStack228._0_4_;
        *(undefined4 * )(param_1 + 0x4a8) = auStack228._4_4_;
        *(undefined4 * )(param_1 + 0x4ac) = uStack220;
        *(undefined4 * )(param_1 + 0x4b0) = local_d8;
        *(undefined4 * )(param_1 + 0x4b4) = auStack212._0_4_;
        *(undefined4 * )(param_1 + 0x4b8) = auStack212._4_4_;
        *(undefined4 * )(param_1 + 0x4bc) = uStack204;
    }
    return;
}


void FUN_140110ad0(longlong param_1, char param_2) {
    byte *pbVar1;
    char cVar2;
    int iVar3;
    int iVar4;
    longlong *plVar5;
    float *pfVar6;
    ulonglong uVar7;
    longlong lVar8;
    longlong lVar9;
    undefined4 uVar10;
    int iVar11;
    int iVar12;
    float fVar13;
    undefined auVar14[16];
    float fVar15;
    float local_res8[2];
    float local_res18;
    float local_res1c;

    if ((*(byte * )(param_1 + 0x298) & 1) == 0) {
        fVar13 = (float) (*(int *) (param_1 + 0x2d4) - *(int *) (param_1 + 0x2cc)) - 2.0;
        uVar7 = (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0x48))();
        (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0x28))
                (*(longlong * *)(param_1 + 0x438),
                 *(undefined8 * )(*(longlong * )(param_1 + 0x2b8) + 0x60));
        lVar8 = (**(code * *)(**(longlong * *)(*(longlong * )(param_1 + 0x2b8) + 0x60) + 0x18))();
        lVar9 = (**(code * *)(**(longlong * *)(*(longlong * )(param_1 + 0x2b8) + 0x60) + 0x20))();
        (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0xa8))
                (*(longlong * *)(param_1 + 0x438), *(undefined8 * )(param_1 + 0x400), &local_res18);
        if (*(char *) (param_1 + 0x430) == '\0') {
            local_res1c = local_res18 + *(float *) (lVar8 + 0xc);
        } else if (*(ulonglong * )(param_1 + 0x400) < uVar7) {
            (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0xa8))
                    (*(longlong * *)(param_1 + 0x438), *(ulonglong * )(param_1 + 0x400) + 1, &local_res1c);
            fVar15 = local_res18 + *(float *) (lVar9 + 0x14);
            if (local_res1c <= fVar15) {
                local_res1c = fVar15;
            }
        } else {
            fVar15 = local_res18 + *(float *) (lVar9 + 0x14);
            local_res1c = local_res18;
            if (local_res18 <= fVar15) {
                local_res1c = fVar15;
            }
        }
        if (local_res1c - fVar13 <= *(float *) (param_1 + 0x42c)) {
            if (local_res18 < *(float *) (param_1 + 0x42c)) {
                *(float *) (param_1 + 0x42c) = local_res18;
            }
        } else {
            *(float *) (param_1 + 0x42c) = local_res1c - fVar13;
        }
        (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0xa8))
                (*(longlong * *)(param_1 + 0x438), uVar7, local_res8);
        local_res8[0] = local_res8[0] + (local_res1c - local_res18);
        if (fVar13 <= local_res8[0]) {
            local_res8[0] = local_res8[0] - fVar13;
            if (local_res8[0] < *(float *) (param_1 + 0x42c)) {
                *(float *) (param_1 + 0x42c) = local_res8[0];
            }
        } else {
            *(undefined4 * )(param_1 + 0x42c) = 0;
        }
        return;
    }
    iVar4 = *(int *) (param_1 + 0x2d8);
    iVar12 = 0;
    iVar3 = *(int *) (param_1 + 0x2d0);
    FUN_14010ffb0();
    plVar5 = (longlong * )(**(code * *)(**(longlong * *)(param_1 + 0x438) + 0x30))();
    pfVar6 = (float *) (**(code * *)(*plVar5 + 0x20))(plVar5);
    auVar14 = ZEXT416((uint)(float) * (longlong * )(param_1 + 0x4e0)) &
              (undefined[16]) 0xffffffffffffffff;
    if (*(longlong * )(param_1 + 0x4e0) < 0) {
        auVar14 = CONCAT124(SUB1612(auVar14 >> 0x20, 0), SUB164(auVar14, 0) + 1.844674e+19);
    }
    fVar13 = SUB164(auVar14, 0) * *pfVar6;
    fVar15 = (float) iVar4 - (float) iVar3;
    if (fVar13 <= fVar15) {
        cVar2 = FUN_1400c6e00();
        if (cVar2 != '\0') {
            lVar8 = *(longlong * )(param_1 + 0x1d8);
            *(undefined4 * )(lVar8 + 0x510) = 0;
            iVar4 = 0;
            if (*(int *) (lVar8 + 0x514) < 0) {
                iVar4 = *(int *) (lVar8 + 0x514);
            }
            if (0 < iVar4) {
                iVar12 = iVar4;
            }
            *(byte * )(lVar8 + 0x570) = *(byte * )(lVar8 + 0x570) | 0x10;
            *(int *) (lVar8 + 0x514) = iVar12;
        }
        iVar12 = 0;
    } else {
        iVar11 = (int) fVar15;
        iVar3 = ((int) fVar13 - iVar11) + 1;
        iVar4 = 0;
        if (0 < iVar3) {
            iVar4 = iVar3;
        }
        uVar10 = 0;
        lVar8 = *(longlong * )(param_1 + 0x1d8);
        if (lVar8 == 0) {
            iVar3 = 0;
        } else {
            iVar3 = *(int *) (lVar8 + 0x510);
        }
        if (iVar4 != iVar3) {
            FUN_1400cabd0(param_1);
            cVar2 = FUN_1400c6e00(param_1);
            if (cVar2 != '\0') {
                lVar8 = *(longlong * )(param_1 + 0x1d8);
                pbVar1 = (byte * )(lVar8 + 0x570);
                *pbVar1 = *pbVar1 | 0x10;
                *(int *) (lVar8 + 0x518) = iVar11;
            }
            cVar2 = FUN_1400c6e00(param_1);
            if (cVar2 != '\0') {
                lVar8 = *(longlong * )(param_1 + 0x1d8);
                *(undefined4 * )(lVar8 + 0x330) = 0x3c23d70a;
                *(undefined4 * )(lVar8 + 400) = 0x3c23d70a;
            }
            FUN_1400cad40(param_1, CONCAT44(uVar10, (int) *pfVar6));
            *(char *) (param_1 + 0x429) = param_2;
            return;
        }
        if (param_2 == '\0') {
            return;
        }
        if (*(float *) (param_1 + 0x4b4) < fVar15) {
            fVar13 = *(float *) (param_1 + 0x4a4);
            if (0.0 <= fVar13) {
                return;
            }
            if (lVar8 == 0) {
                if (0 < (int) fVar13) {
                    iVar12 = (int) fVar13;
                }
            } else {
                iVar4 = (int) fVar13 + *(int *) (lVar8 + 0x514);
                if (0 < iVar4) {
                    iVar12 = iVar4;
                }
            }
        } else {
            if (lVar8 != 0) {
                iVar12 = *(int *) (lVar8 + 0x514);
            }
            iVar12 = ((int) *(float *) (param_1 + 0x4b4) - iVar11) + iVar12;
        }
    }
    FUN_1400cac30(param_1, iVar12);
    return;
}


void FUN_140110ee0(longlong param_1, short *param_2) {
    short sVar1;
    ulonglong uVar2;
    longlong lVar3;
    char cVar4;
    longlong lVar5;
    undefined local_38[8];
    longlong local_30;
    undefined2 *local_28;
    longlong local_20;

    if ((param_2 != (short *) 0x0) && (*param_2 != 0)) {
        uVar2 = *(ulonglong * )(param_1 + 0x510);
        if ((uVar2 == 0) ||
            (cVar4 = FUN_14002c740(*(longlong * )(param_1 + 0x508) + -0x20 + uVar2 * 0x20), cVar4 == '\0')
                ) {
            if (99 < uVar2) {
                FUN_1400b9740(param_1 + 0x508, 0);
            }
            lVar5 = 0;
            local_30 = 0;
            local_20 = 0;
            sVar1 = *param_2;
            while (sVar1 != 0) {
                lVar5 = lVar5 + 1;
                sVar1 = param_2[lVar5];
            }
            lVar5 = lVar5 * 2 >> 1;
            uVar2 = lVar5 + 1;
            if (uVar2 < 0x7fffffffffffffff) {
                lVar3 = uVar2 * 2;
                local_30 = FUN_14018b280(lVar3, 0);
                local_20 = lVar3 + local_30;
            }
            lVar3 = local_30;
            lVar5 = lVar5 * 2;
            FUN_1407db590(local_30, param_2, lVar5);
            local_28 = (undefined2 * )(lVar5 + lVar3);
            if (local_28 != (undefined2 *) 0x0) {
                *local_28 = 0;
            }
            FUN_140115df0(param_1 + 0x508, local_38);
            if (local_30 != 0) {
                FUN_14018b900(local_30, 0);
            }
        }
        *(undefined8 * )(param_1 + 0x500) = *(undefined8 * )(param_1 + 0x510);
    }
    return;
}


undefined8 FUN_140111030(longlong param_1) {
    undefined8 uVar1;

    if (*(char *) (param_1 + 0x298) < '\0') {
        uVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0x40))();
        FUN_140110ee0(param_1, uVar1);
    }
    if ((*(longlong * )(param_1 + 0x20) != 0) &&
        (*(longlong * )(*(longlong * )(param_1 + 0x20) + 0xb40) == param_1)) {
        FUN_1400e8bf0();
    }
    uVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0x40))();
    FUN_1400d4070(param_1, 0x28, param_1, &DAT_1409d59e4, uVar1);
    return 0;
}


undefined8 FUN_1401110b0(longlong *param_1) {
    ulonglong *puVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    longlong lVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    longlong lVar9;
    ulonglong uVar10;
    undefined8 uVar11;
    float local_res8[2];
    float local_res10[2];
    float local_res18[2];
    longlong local_res20;

    if (*(char *) (param_1 + 0x53) < '\0') {
        if (param_1[0xa0] == 0) {
            return 0;
        }
        lVar9 = param_1[0xa0] + -1;
        param_1[0xa0] = lVar9;
        (**(code * *)(*param_1 + 0x50))(param_1, *(undefined8 * )(lVar9 * 0x20 + 8 + param_1[0xa1]));
        param_1[0x81] = -1;
        param_1[0x83] = param_1[0x80];
        param_1[0x82] = param_1[0x80];
        return 0;
    }
    if ((*(byte * )(param_1 + 0x53) & 1) == 0) {
        return 0;
    }
    local_res20 = param_1[0x80];
    FUN_14010ffb0();
    uVar2 = param_1[0x9c];
    uVar5 = 0;
    lVar9 = (**(code * *)(*(longlong *) param_1[0x87] + 0x48))();
    if (local_res20 == lVar9) {
        if (local_res20 == 0) goto LAB_14011136e;
        uVar8 = uVar2 - 1;
    } else {
        if (uVar2 == 0) goto LAB_14011136e;
        uVar6 = param_1[0x80];
        uVar7 = uVar5;
        uVar10 = uVar5;
        do {
            lVar9 = param_1[0x9b];
            uVar8 = uVar10;
            if ((*(ulonglong * )(lVar9 + uVar5) <= uVar6) && (uVar6 < *(ulonglong * )(lVar9 + 8 + uVar5)))
                break;
            uVar3 = *(ulonglong * )(lVar9 + 8 + uVar5);
            if (uVar6 == uVar3) {
                if (*(char *) (param_1 + 0x85) != '\0') break;
                if (uVar6 == uVar3) {
                    uVar6 = param_1[0x80];
                    lVar9 = (**(code * *)(*(longlong *) param_1[0x87] + 0x40))();
                    if (*(short *) (lVar9 + uVar6 * 2) == 10) {
                        uVar7 = uVar10;
                    }
                }
            }
            if ((uVar6 == *(ulonglong * )(param_1[0x9b] + 8 + uVar5)) && (uVar10 == uVar2 - 1)) {
                uVar7 = uVar10;
            }
            uVar10 = uVar10 + 1;
            uVar5 = uVar5 + 0x18;
            uVar8 = uVar7;
        } while (uVar10 < uVar2);
    }
    if (uVar8 != 0) {
        lVar9 = param_1[0x9b];
        if (uVar8 < uVar2) {
            lVar4 = *(longlong * )(lVar9 + uVar8 * 0x18);
            if (local_res20 == lVar4) {
                local_res20 = *(longlong * )(&DAT_ffffffffffffffe8 + uVar8 * 0x18 + lVar9);
            } else {
                local_res10[0] = 0.0;
                local_res18[0] = 0.0;
                local_res8[0] = 0.0;
                (**(code * *)(*(longlong *) param_1[0x87] + 0xa8))
                        ((longlong *) param_1[0x87], lVar4, local_res10);
                (**(code * *)(*(longlong *) param_1[0x87] + 0xa8))
                        ((longlong *) param_1[0x87],
                         *(undefined8 * )(&DAT_ffffffffffffffe8 + uVar8 * 0x18 + param_1[0x9b]), local_res18
                        );
                uVar11 = (**(code * *)(*(longlong *) param_1[0x87] + 0xa8))
                        ((longlong *) param_1[0x87], param_1[0x80], local_res8);
                lVar9 = param_1[0x9b];
                local_res8[0] = local_res8[0] - local_res10[0];
                if (*(float *) (lVar9 + -8 + uVar8 * 0x18) <= local_res8[0]) {
                    puVar1 = (ulonglong * )(lVar9 + -0x10 + uVar8 * 0x18);
                    if ((*puVar1 < *(ulonglong * )(&DAT_ffffffffffffffe8 + uVar8 * 0x18 + lVar9) ||
                         *puVar1 == *(ulonglong * )(&DAT_ffffffffffffffe8 + uVar8 * 0x18 + lVar9)) ||
                        (lVar4 = (**(code * *)(*(longlong *) param_1[0x87] + 0x40))(),
                                *(short *) (lVar4 + -2 + *(longlong * )(lVar9 + -0x10 + uVar8 * 0x18) * 2) != 10)) {
                        lVar9 = param_1[0x9b];
                        local_res20 = *(longlong * )(lVar9 + -0x10 + uVar8 * 0x18);
                        puVar1 = (ulonglong * )(lVar9 + -0x10 + uVar8 * 0x18);
                        *(bool *) (param_1 + 0x85) =
                                *(ulonglong * )(&DAT_ffffffffffffffe8 + uVar8 * 0x18 + lVar9) <= *puVar1 &&
                                *puVar1 != *(ulonglong * )(&DAT_ffffffffffffffe8 + uVar8 * 0x18 + lVar9);
                    } else {
                        local_res20 = *(longlong * )(param_1[0x9b] + -0x10 + uVar8 * 0x18);
                        *(undefined * )(param_1 + 0x85) = 0;
                        local_res20 = local_res20 + -1;
                    }
                } else {
                    (**(code * *)(*(longlong *) param_1[0x87] + 0xb0))(uVar11, local_res8[0] + local_res18[0]);
                }
            }
        } else {
            local_res20 = *(longlong * )(&DAT_ffffffffffffffe8 + uVar8 * 0x18 + lVar9);
        }
    }
    LAB_14011136e:
    FUN_1401116a0(param_1, local_res20);
    return 0;
}


undefined8 FUN_1401113a0(longlong *param_1) {
    ulonglong uVar1;
    longlong *plVar2;
    longlong lVar3;
    ulonglong *puVar4;
    longlong lVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    undefined8 uVar8;
    float local_res8[2];
    float local_res10[2];
    float local_res18[2];
    ulonglong local_res20;

    if (*(char *) (param_1 + 0x53) < '\0') {
        if ((ulonglong) param_1[0xa2] <= (ulonglong) param_1[0xa0]) {
            return 0;
        }
        uVar6 = param_1[0xa0] + 1;
        param_1[0xa0] = uVar6;
        if (uVar6 < (ulonglong) param_1[0xa2]) {
            uVar8 = *(undefined8 * )(uVar6 * 0x20 + 8 + param_1[0xa1]);
        } else {
            uVar8 = 0;
        }
        (**(code * *)(*param_1 + 0x50))(param_1, uVar8);
        param_1[0x81] = -1;
        param_1[0x83] = param_1[0x80];
        param_1[0x82] = param_1[0x80];
        return 0;
    }
    if ((*(byte * )(param_1 + 0x53) & 1) == 0) {
        return 0;
    }
    local_res20 = param_1[0x80];
    FUN_14010ffb0();
    uVar6 = param_1[0x9c];
    uVar7 = 0;
    if (uVar6 != 0) {
        uVar1 = param_1[0x80];
        puVar4 = (ulonglong *) param_1[0x9b];
        do {
            if (((*puVar4 <= uVar1) && (uVar1 < puVar4[1])) ||
                ((uVar1 == puVar4[1] && (*(char *) (param_1 + 0x85) != '\0'))))
                break;
            uVar7 = uVar7 + 1;
            puVar4 = puVar4 + 3;
        } while (uVar7 < uVar6);
    }
    plVar2 = (longlong *) param_1[0x87];
    if (uVar7 < uVar6 - 1) {
        local_res10[0] = 0.0;
        local_res18[0] = 0.0;
        local_res8[0] = 0.0;
        (**(code * *)(*plVar2 + 0xa8))(plVar2, *(undefined8 * )(param_1[0x9b] + uVar7 * 0x18), local_res10);
        (**(code * *)(*(longlong *) param_1[0x87] + 0xa8))
                ((longlong *) param_1[0x87], *(undefined8 * )(param_1[0x9b] + 0x18 + uVar7 * 0x18),
                 local_res18);
        uVar8 = (**(code * *)(*(longlong *) param_1[0x87] + 0xa8))
                ((longlong *) param_1[0x87], param_1[0x80], local_res8);
        local_res8[0] = local_res8[0] - local_res10[0];
        (**(code * *)(*(longlong *) param_1[0x87] + 0xb0))(uVar8, local_res8[0] + local_res18[0]);
        lVar3 = param_1[0x9b];
        uVar6 = *(ulonglong * )(lVar3 + 0x20 + uVar7 * 0x18);
        if (uVar6 <= local_res20) {
            puVar4 = (ulonglong * )(lVar3 + 0x18 + uVar7 * 0x18);
            if ((uVar6 < *puVar4 || uVar6 == *puVar4) ||
                (lVar5 = (**(code * *)(*(longlong *) param_1[0x87] + 0x40))(),
                        *(short *) (lVar5 + -2 + *(longlong * )(lVar3 + 0x20 + uVar7 * 0x18) * 2) != 10)) {
                lVar3 = param_1[0x9b];
                local_res20 = *(ulonglong * )(lVar3 + 0x20 + uVar7 * 0x18);
                uVar6 = *(ulonglong * )(lVar3 + 0x18 + uVar7 * 0x18);
                puVar4 = (ulonglong * )(lVar3 + 0x20 + uVar7 * 0x18);
                *(bool *) (param_1 + 0x85) = uVar6 <= *puVar4 && *puVar4 != uVar6;
            } else {
                lVar3 = *(longlong * )(param_1[0x9b] + 0x20 + uVar7 * 0x18);
                *(undefined * )(param_1 + 0x85) = 0;
                local_res20 = lVar3 - 1;
            }
        }
        FUN_1401115f0(param_1);
        return 0;
    }
    local_res20 = (**(code * *)(*plVar2 + 0x48))();
    FUN_1401115f0(param_1, local_res20);
    return 0;
}


void FUN_1401115f0(longlong param_1, ulonglong param_2) {
    ulonglong uVar1;
    ulonglong uVar2;

    if (*(char *) (param_1 + 0x431) == '\0') {
        if (*(ulonglong * )(param_1 + 0x410) < *(ulonglong * )(param_1 + 0x418)) {
            param_2 = *(ulonglong * )(param_1 + 0x418);
        }
        *(ulonglong * )(param_1 + 0x410) = param_2;
        *(ulonglong * )(param_1 + 0x418) = param_2;
        *(ulonglong * )(param_1 + 0x400) = param_2;
    } else {
        if (*(longlong * )(param_1 + 0x408) == -1) {
            *(undefined8 * )(param_1 + 0x408) = *(undefined8 * )(param_1 + 0x400);
        }
        uVar1 = *(ulonglong * )(param_1 + 0x408);
        *(ulonglong * )(param_1 + 0x400) = param_2;
        uVar2 = uVar1;
        if (param_2 < uVar1) {
            uVar2 = param_2;
        }
        *(ulonglong * )(param_1 + 0x410) = uVar2;
        uVar2 = uVar1;
        if (uVar1 < param_2) {
            uVar2 = param_2;
        }
        *(ulonglong * )(param_1 + 0x418) = uVar2;
        if (param_2 != uVar1) goto LAB_140111683;
    }
    *(undefined8 * )(param_1 + 0x408) = 0xffffffffffffffff;
    LAB_140111683:
    FUN_14010ee40();
    *(undefined * )(param_1 + 0x429) = 1;
    return;
}


void FUN_1401116a0(longlong param_1, ulonglong param_2) {
    ulonglong uVar1;
    ulonglong uVar2;

    if (*(char *) (param_1 + 0x431) == '\0') {
        if (*(ulonglong * )(param_1 + 0x410) < *(ulonglong * )(param_1 + 0x418)) {
            param_2 = *(ulonglong * )(param_1 + 0x410);
        }
        *(ulonglong * )(param_1 + 0x410) = param_2;
        *(ulonglong * )(param_1 + 0x418) = param_2;
        *(ulonglong * )(param_1 + 0x400) = param_2;
    } else {
        if (*(longlong * )(param_1 + 0x408) == -1) {
            *(undefined8 * )(param_1 + 0x408) = *(undefined8 * )(param_1 + 0x400);
        }
        uVar1 = *(ulonglong * )(param_1 + 0x408);
        *(ulonglong * )(param_1 + 0x400) = param_2;
        uVar2 = uVar1;
        if (param_2 < uVar1) {
            uVar2 = param_2;
        }
        *(ulonglong * )(param_1 + 0x410) = uVar2;
        uVar2 = uVar1;
        if (uVar1 < param_2) {
            uVar2 = param_2;
        }
        *(ulonglong * )(param_1 + 0x418) = uVar2;
        if (param_2 != uVar1) goto LAB_140111733;
    }
    *(undefined8 * )(param_1 + 0x408) = 0xffffffffffffffff;
    LAB_140111733:
    FUN_14010ee40();
    *(undefined * )(param_1 + 0x429) = 1;
    return;
}


void FUN_140111750(longlong param_1, ulonglong param_2, ulonglong param_3) {
    ulonglong uVar1;
    ulonglong uVar2;

    uVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0x48))();
    if ((longlong) param_2 < 0) {
        param_2 = 0;
    } else {
        if (uVar1 < param_2) {
            param_2 = uVar1;
        }
        uVar2 = param_2;
        if (param_3 < param_2) goto LAB_140111783;
    }
    uVar2 = param_3;
    if (uVar1 < param_3) {
        uVar2 = uVar1;
    }
    LAB_140111783:
    *(ulonglong * )(param_1 + 0x410) = param_2;
    if (param_2 == uVar2) {
        param_2 = 0xffffffffffffffff;
    }
    *(ulonglong * )(param_1 + 0x400) = uVar2;
    *(ulonglong * )(param_1 + 0x418) = uVar2;
    *(ulonglong * )(param_1 + 0x408) = param_2;
    return;
}


undefined8 FUN_1401117d0(longlong param_1) {
    ulonglong uVar1;
    ulonglong uVar2;
    ulonglong *puVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;

    uVar6 = 0;
    uVar5 = uVar6;
    if ((*(byte * )(param_1 + 0x298) & 1) != 0) {
        uVar5 = *(ulonglong * )(param_1 + 0x400);
        FUN_14010ffb0();
        uVar1 = *(ulonglong * )(param_1 + 0x4e0);
        if (1 < uVar1) {
            uVar2 = *(ulonglong * )(param_1 + 0x400);
            puVar3 = *(ulonglong * *)(param_1 + 0x4d8);
            uVar4 = 1;
            do {
                if (((*puVar3 <= uVar2) && (uVar2 < puVar3[1])) ||
                    ((*(char *) (param_1 + 0x428) != '\0' && (uVar2 == puVar3[1]))))
                    break;
                uVar4 = uVar4 + 1;
                uVar6 = uVar6 + 1;
                puVar3 = puVar3 + 3;
            } while (uVar4 < uVar1);
        }
        if (uVar6 < uVar1) {
            uVar5 = *(ulonglong * )(*(longlong * )(param_1 + 0x4d8) + uVar6 * 0x18);
        }
        *(undefined * )(param_1 + 0x428) = 0;
    }
    FUN_1401116a0(param_1, uVar5);
    return 0;
}


undefined8 FUN_140111890(longlong param_1) {
    ulonglong uVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong *puVar4;
    ulonglong uVar5;

    lVar2 = (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0x48))();
    if ((*(byte * )(param_1 + 0x298) & 1) != 0) {
        lVar2 = *(longlong * )(param_1 + 0x400);
        FUN_14010ffb0(param_1);
        uVar1 = *(ulonglong * )(param_1 + 0x4e0);
        if ((*(char *) (param_1 + 0x428) == '\0') &&
            (lVar3 = (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0x48))(), lVar3 != 0)) {
            uVar5 = 0;
            if (uVar1 != 0) {
                puVar4 = *(ulonglong * *)(param_1 + 0x4d8);
                do {
                    if ((*puVar4 <= *(ulonglong * )(param_1 + 0x400)) &&
                        (*(ulonglong * )(param_1 + 0x400) < puVar4[1]))
                        break;
                    uVar5 = uVar5 + 1;
                    puVar4 = puVar4 + 3;
                } while (uVar5 < uVar1);
            }
            *(undefined * )(param_1 + 0x428) = 1;
            if (uVar5 < uVar1) {
                lVar2 = *(longlong * )(*(longlong * )(param_1 + 0x4d8) + 8 + uVar5 * 0x18);
                (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0x40))();
                lVar3 = (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0x40))();
                if (*(short *) (lVar3 + -2 + lVar2 * 2) != 10) goto LAB_140111986;
                lVar2 = lVar2 + -1;
            } else {
                lVar2 = (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0x48))();
            }
            *(undefined * )(param_1 + 0x428) = 0;
        }
    }
    LAB_140111986:
    FUN_1401115f0(param_1, lVar2);
    return 0;
}


undefined8 FUN_1401119a0(longlong param_1) {
    longlong lVar1;
    longlong *plVar2;
    undefined8 uVar3;
    undefined8 uVar4;
    longlong *plVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    int local_res8[2];

    uVar7 = *(ulonglong * )(param_1 + 0x410);
    uVar6 = *(ulonglong * )(param_1 + 0x418);
    if (uVar6 <= uVar7) {
        lVar1 = *(longlong * )(param_1 + 0x400);
        if (lVar1 == 0) {
            return 0;
        }
        *(longlong * )(param_1 + 0x418) = lVar1;
        *(longlong * )(param_1 + 0x410) = lVar1 + -1;
        FUN_14010ee40(param_1);
        uVar7 = *(ulonglong * )(param_1 + 0x410);
        uVar6 = *(ulonglong * )(param_1 + 0x418);
    }
    plVar5 = *(longlong * *)(param_1 + 0x440);
    if (plVar5 != (longlong *) 0x0) {
        local_res8[0] = 1;
        (**(code * *)(*plVar5 + 0x78))(plVar5, uVar7, uVar6);
        plVar5 = *(longlong * *)(param_1 + 0x440);
        uVar3 = (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0x40))();
        uVar4 = (**(code * *)(*plVar5 + 0x40))(plVar5);
        FUN_1400d4070(param_1, 0x26, param_1, &DAT_140a1bf74, uVar4, uVar3, local_res8);
        if (local_res8[0] == 0) {
            plVar5 = *(longlong * *)(param_1 + 0x438);
            plVar2 = *(longlong * *)(param_1 + 0x440);
            lVar1 = *plVar2;
            uVar3 = (**(code * *)(*plVar5 + 0x48))(plVar5);
            uVar4 = (**(code * *)(*plVar5 + 0x40))(plVar5);
            (**(code * *)(lVar1 + 0x38))(plVar2, uVar4, uVar3);
            return 0;
        }
    }
    (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0x78))
            (*(longlong * *)(param_1 + 0x438), uVar7, uVar6);
    FUN_14010ef50(param_1, uVar7, uVar6);
    *(ulonglong * )(param_1 + 0x410) = uVar7;
    *(ulonglong * )(param_1 + 0x418) = uVar7;
    *(ulonglong * )(param_1 + 0x400) = uVar7;
    *(undefined8 * )(param_1 + 0x408) = 0xffffffffffffffff;
    plVar5 = (longlong * ) * *(longlong * *)(param_1 + 0x4c8);
    if (plVar5 != *(longlong * *)(param_1 + 0x4c8)) {
        do {
            plVar2 = (longlong *) plVar5[2];
            if (uVar7 < (ulonglong) plVar2[1]) {
                *plVar2 = *plVar2 - (uVar6 - uVar7);
                plVar2[1] = plVar2[1] - (uVar6 - uVar7);
            }
            plVar5 = (longlong * ) * plVar5;
        } while (plVar5 != (longlong * ) * (longlong * )(param_1 + 0x4c8));
    }
    FUN_14010ee40(param_1);
    uVar3 = (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0x40))();
    FUN_1400d4070(param_1, 0x27, param_1, &DAT_1409d5a04, uVar3);
    *(undefined * )(param_1 + 0x429) = 1;
    return 0;
}


undefined8 FUN_140111b80(longlong param_1) {
    longlong *plVar1;
    longlong lVar2;
    ulonglong uVar3;
    undefined8 uVar4;
    undefined8 uVar5;
    longlong *plVar6;
    ulonglong uVar7;
    int local_res8[2];

    uVar7 = *(ulonglong * )(param_1 + 0x410);
    uVar3 = *(ulonglong * )(param_1 + 0x418);
    if (uVar3 <= uVar7) {
        uVar7 = *(ulonglong * )(param_1 + 0x400);
        uVar3 = (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0x48))();
        if (uVar3 <= uVar7) {
            return 0;
        }
        *(ulonglong * )(param_1 + 0x410) = uVar7;
        *(ulonglong * )(param_1 + 0x418) = uVar7 + 1;
        FUN_14010ee40(param_1);
        uVar7 = *(ulonglong * )(param_1 + 0x410);
        uVar3 = *(ulonglong * )(param_1 + 0x418);
    }
    plVar6 = *(longlong * *)(param_1 + 0x440);
    if (plVar6 != (longlong *) 0x0) {
        local_res8[0] = 1;
        (**(code * *)(*plVar6 + 0x78))(plVar6, uVar7, uVar3);
        plVar6 = *(longlong * *)(param_1 + 0x440);
        uVar4 = (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0x40))();
        uVar5 = (**(code * *)(*plVar6 + 0x40))(plVar6);
        FUN_1400d4070(param_1, 0x26, param_1, &DAT_140a1aa44, uVar5, uVar4, local_res8);
        if (local_res8[0] == 0) {
            plVar6 = *(longlong * *)(param_1 + 0x438);
            plVar1 = *(longlong * *)(param_1 + 0x440);
            lVar2 = *plVar1;
            uVar4 = (**(code * *)(*plVar6 + 0x48))(plVar6);
            uVar5 = (**(code * *)(*plVar6 + 0x40))(plVar6);
            (**(code * *)(lVar2 + 0x38))(plVar1, uVar5, uVar4);
            return 0;
        }
    }
    (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0x78))
            (*(longlong * *)(param_1 + 0x438), uVar7, uVar3);
    FUN_14010ef50(param_1, uVar7, uVar3);
    *(ulonglong * )(param_1 + 0x410) = uVar7;
    *(ulonglong * )(param_1 + 0x418) = uVar7;
    *(ulonglong * )(param_1 + 0x400) = uVar7;
    *(undefined8 * )(param_1 + 0x408) = 0xffffffffffffffff;
    plVar6 = (longlong * ) * *(longlong * *)(param_1 + 0x4c8);
    if (plVar6 != *(longlong * *)(param_1 + 0x4c8)) {
        do {
            plVar1 = (longlong *) plVar6[2];
            if (uVar7 < (ulonglong) plVar1[1]) {
                *plVar1 = *plVar1 - (uVar3 - uVar7);
                plVar1[1] = plVar1[1] - (uVar3 - uVar7);
            }
            plVar6 = (longlong * ) * plVar6;
        } while (plVar6 != (longlong * ) * (longlong * )(param_1 + 0x4c8));
    }
    FUN_14010ee40(param_1);
    uVar4 = (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0x40))();
    FUN_1400d4070(param_1, 0x27, param_1, &DAT_1409d5a04, uVar4);
    *(undefined * )(param_1 + 0x429) = 1;
    return 0;
}


undefined8 FUN_140111d60(longlong param_1) {
    short sVar1;
    BOOL BVar2;
    HWND hWndNewOwner;
    HANDLE pvVar3;
    short *psVar4;
    LPVOID pvVar5;
    longlong lVar6;
    undefined local_28[8];
    longlong local_20;
    longlong local_18;

    hWndNewOwner = GetDesktopWindow();
    BVar2 = OpenClipboard(hWndNewOwner);
    if (BVar2 != 0) {
        pvVar3 = GetClipboardData(0xd);
        if (pvVar3 == (HANDLE) 0x0) {
            pvVar3 = GetClipboardData(1);
            if (pvVar3 != (HANDLE) 0x0) {
                pvVar5 = GlobalLock(pvVar3);
                FUN_14018f2d0(local_28, pvVar5);
                FUN_14010ea70(param_1, local_20, local_18 - local_20 >> 1);
                GlobalUnlock(pvVar3);
                if (local_20 != 0) {
                    FUN_14018b900(local_20, 0);
                }
            }
        } else {
            psVar4 = (short *) GlobalLock(pvVar3);
            lVar6 = 0;
            sVar1 = *psVar4;
            while (sVar1 != 0) {
                lVar6 = lVar6 + 1;
                sVar1 = psVar4[lVar6];
            }
            FUN_14010ea70(param_1, psVar4);
            GlobalUnlock(pvVar3);
        }
        CloseClipboard();
        *(undefined * )(param_1 + 0x429) = 1;
    }
    return 0;
}


undefined8 FUN_140111e60(longlong param_1) {
    ulonglong uVar1;
    ulonglong uVar2;
    undefined8 uVar3;

    uVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0x48))();
    uVar2 = (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0x48))();
    if (uVar2 < uVar1) {
        uVar1 = uVar2;
    }
    uVar3 = 0;
    *(undefined8 * )(param_1 + 0x410) = 0;
    *(ulonglong * )(param_1 + 0x400) = uVar1;
    if (uVar1 == 0) {
        uVar3 = 0xffffffffffffffff;
    }
    *(ulonglong * )(param_1 + 0x418) = uVar1;
    *(undefined8 * )(param_1 + 0x408) = uVar3;
    return 0;
}


undefined8 FUN_140111ed0(longlong param_1) {
    longlong lVar1;
    BOOL BVar2;
    ulonglong uVar3;
    HWND hWndNewOwner;
    HGLOBAL hMem;
    LPVOID pvVar4;
    longlong lVar5;
    ulonglong uVar6;

    uVar3 = *(ulonglong * )(param_1 + 0x418);
    uVar6 = *(ulonglong * )(param_1 + 0x410);
    if (uVar3 <= *(ulonglong * )(param_1 + 0x410)) {
        uVar3 = (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0x48))();
        uVar6 = 0;
    }
    hWndNewOwner = GetDesktopWindow();
    BVar2 = OpenClipboard(hWndNewOwner);
    if (BVar2 != 0) {
        EmptyClipboard();
        if ((*(byte * )(param_1 + 0x298) >> 3 & 1) == 0) {
            lVar1 = (uVar3 - uVar6) * 2;
            hMem = GlobalAlloc(0x2002, lVar1 + 2);
            if ((hMem != (HGLOBAL) 0x0) && (pvVar4 = GlobalLock(hMem), pvVar4 != (LPVOID) 0x0)) {
                lVar5 = (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0x40))();
                FUN_1407db590(pvVar4, lVar5 + uVar6 * 2, lVar1);
                *(undefined2 * )(lVar1 + (longlong) pvVar4) = 0;
                GlobalUnlock(hMem);
                SetClipboardData(0xd, hMem);
            }
        }
        CloseClipboard();
    }
    return 0;
}


undefined8 FUN_140111fd0(longlong param_1) {
    longlong *plVar1;
    longlong lVar2;
    BOOL BVar3;
    ulonglong uVar4;
    HWND hWndNewOwner;
    HGLOBAL hMem;
    LPVOID pvVar5;
    longlong lVar6;
    undefined8 uVar7;
    undefined8 uVar8;
    longlong *plVar9;
    ulonglong uVar10;
    int local_res8[2];

    uVar10 = *(ulonglong * )(param_1 + 0x410);
    uVar4 = *(ulonglong * )(param_1 + 0x418);
    if (uVar4 <= uVar10) {
        uVar10 = 0;
        uVar4 = (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0x48))();
    }
    hWndNewOwner = GetDesktopWindow();
    BVar3 = OpenClipboard(hWndNewOwner);
    if (BVar3 != 0) {
        EmptyClipboard();
        if ((*(byte * )(param_1 + 0x298) >> 3 & 1) == 0) {
            lVar2 = (uVar4 - uVar10) * 2;
            hMem = GlobalAlloc(0x2002, lVar2 + 2);
            if ((hMem != (HGLOBAL) 0x0) && (pvVar5 = GlobalLock(hMem), pvVar5 != (LPVOID) 0x0)) {
                lVar6 = (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0x40))();
                FUN_1407db590(pvVar5, lVar6 + uVar10 * 2, lVar2);
                *(undefined2 * )(lVar2 + (longlong) pvVar5) = 0;
                GlobalUnlock(hMem);
                SetClipboardData(0xd, hMem);
            }
        }
        CloseClipboard();
    }
    plVar9 = *(longlong * *)(param_1 + 0x440);
    if (plVar9 != (longlong *) 0x0) {
        local_res8[0] = 1;
        (**(code * *)(*plVar9 + 0x78))(plVar9, uVar10, uVar4);
        plVar9 = *(longlong * *)(param_1 + 0x440);
        uVar7 = (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0x40))();
        uVar8 = (**(code * *)(*plVar9 + 0x40))(plVar9);
        FUN_1400d4070(param_1, 0x26, param_1, &DAT_140a1bf6c, uVar8, uVar7, local_res8);
        if (local_res8[0] == 0) {
            plVar9 = *(longlong * *)(param_1 + 0x438);
            plVar1 = *(longlong * *)(param_1 + 0x440);
            lVar2 = *plVar1;
            uVar7 = (**(code * *)(*plVar9 + 0x48))(plVar9);
            uVar8 = (**(code * *)(*plVar9 + 0x40))(plVar9);
            (**(code * *)(lVar2 + 0x38))(plVar1, uVar8, uVar7);
            return 0;
        }
    }
    (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0x78))
            (*(longlong * *)(param_1 + 0x438), uVar10, uVar4);
    FUN_14010ef50(param_1, uVar10, uVar4);
    *(ulonglong * )(param_1 + 0x410) = uVar10;
    *(ulonglong * )(param_1 + 0x418) = uVar10;
    *(ulonglong * )(param_1 + 0x400) = uVar10;
    *(undefined8 * )(param_1 + 0x408) = 0xffffffffffffffff;
    plVar9 = (longlong * ) * *(longlong * *)(param_1 + 0x4c8);
    if (plVar9 != *(longlong * *)(param_1 + 0x4c8)) {
        do {
            plVar1 = (longlong *) plVar9[2];
            if (uVar10 < (ulonglong) plVar1[1]) {
                *plVar1 = *plVar1 - (uVar4 - uVar10);
                plVar1[1] = plVar1[1] - (uVar4 - uVar10);
            }
            plVar9 = (longlong * ) * plVar9;
        } while (plVar9 != (longlong * ) * (longlong * )(param_1 + 0x4c8));
    }
    FUN_14010ee40(param_1);
    uVar7 = (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0x40))();
    FUN_1400d4070(param_1, 0x27, param_1, &DAT_1409d5a04, uVar7);
    *(undefined * )(param_1 + 0x429) = 1;
    return 0;
}


ulonglong FUN_140112240(longlong param_1, longlong param_2, undefined8 param_3, undefined8 param_4) {
    longlong *plVar1;
    longlong lVar2;
    float *pfVar3;
    undefined8 uVar4;
    int iVar5;
    ulonglong uVar6;
    float fVar7;
    undefined4 local_res8[2];
    ulonglong local_res18;

    FUN_14010ffb0();
    if ((*(byte * )(param_1 + 0x298) & 1) == 0) {
        if ((*(uint * )(param_1 + 0x2c0) & 2) == 0) {
            if ((*(uint * )(param_1 + 0x2c0) & 1) != 0) {
                plVar1 = *(longlong * *)(param_1 + 0x438);
                local_res8[0] = 0;
                lVar2 = *plVar1;
                uVar4 = (**(code * *)(lVar2 + 0x48))(plVar1);
                (**(code * *)(lVar2 + 0xa8))(plVar1, uVar4, local_res8);
            }
        } else {
            plVar1 = *(longlong * *)(param_1 + 0x438);
            local_res8[0] = 0;
            lVar2 = *plVar1;
            uVar4 = (**(code * *)(lVar2 + 0x48))(plVar1);
            (**(code * *)(lVar2 + 0xa8))(plVar1, uVar4, local_res8);
        }
        (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0xb0))();
    } else {
        (**(code * *)(**(longlong * *)(*(longlong * )(param_1 + 0x2b8) + 0x60) + 0x18))();
        pfVar3 = (float *) (**(code * *)(**(longlong * *)(*(longlong * )(param_1 + 0x2b8) + 0x60) + 0x20))();
        iVar5 = 0;
        if (*(longlong * )(param_1 + 0x1d8) != 0) {
            iVar5 = *(int *) (*(longlong * )(param_1 + 0x1d8) + 0x514);
        }
        plVar1 = *(longlong * *)(param_1 + 0x438);
        fVar7 = (float) *(int *) (param_1 + 0x2d0) - (float) iVar5;
        uVar6 = (ulonglong)(int)(((float) *(int *) (param_2 + 4) - fVar7) / *pfVar3);
        if (*(ulonglong * )(param_1 + 0x4e0) <= uVar6) {
            uVar6 = (**(code * *)(*plVar1 + 0x48))();
            return uVar6;
        }
        local_res8[0] = 0;
        (**(code * *)(*plVar1 + 0xa8))
                (plVar1, *(undefined8 * )(*(longlong * )(param_1 + 0x4d8) + uVar6 * 0x18), local_res8,
                 param_4, ZEXT816(CONCAT44(fVar7, (float) *(int *) (param_1 + 0x2cc) - 0.0)),
                 ZEXT816(CONCAT44((float) *(int *) (param_1 + 0x2d8) - (float) iVar5,
                                  (float) (int) *(undefined8 * )(param_1 + 0x2d4) - 0.0)));
        (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0xb0))();
        uVar6 = *(ulonglong * )(*(longlong * )(param_1 + 0x4d8) + 8 + uVar6 * 0x18);
        if (uVar6 < local_res18) {
            return uVar6 - 1;
        }
    }
    return local_res18;
}


void FUN_140112790(longlong param_1) {
    HIMC *ppHVar1;
    undefined8 *puVar2;
    longlong lVar3;
    int iVar4;
    HWND *ppHVar5;
    longlong *local_res8;

    if ((*(uint * )(param_1 + 0x298) >> 9 & 1) == 0) {
        FUN_140111e60();
    }
    lVar3 = DAT_140c63650;
    if ((*(uint * )(param_1 + 0x298) >> 0xb & 1) != 0) {
        ppHVar5 = (HWND * )(DAT_140c63650 + 200);
        ppHVar1 = (HIMC * )(DAT_140c63650 + 0xd0);
        *(undefined4 * )(DAT_140c63650 + 0xdc) = 1;
        ImmAssociateContext(*ppHVar5, *ppHVar1);
        FUN_1401556c0(ppHVar5);
        puVar2 = *(undefined8 * *)(lVar3 + 0x2a0);
        if ((puVar2 != (undefined8 *) 0x0) && (*(int *) (lVar3 + 0x2b8) == -1)) {
            local_res8 = (longlong *) 0x0;
            iVar4 = (**(code * *) * puVar2)(puVar2, &DAT_140b5c848, &local_res8);
            if (-1 < iVar4) {
                (**(code * *)(*local_res8 + 0x18))
                        (local_res8, &DAT_140b5c858, *(undefined8 * )(lVar3 + 0x2b0), lVar3 + 0x2b8);
                (**(code * *)(*local_res8 + 0x10))();
            }
        }
    }
    return;
}


void FUN_140112860(longlong param_1) {
    HWND *ppHVar1;
    undefined8 *puVar2;
    longlong lVar3;
    int iVar4;
    longlong *local_res8;

    if ((*(uint * )(param_1 + 0x298) >> 9 & 1) == 0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0x48))();
        *(undefined8 * )(param_1 + 0x410) = 0;
        *(undefined8 * )(param_1 + 0x400) = 0;
        *(undefined8 * )(param_1 + 0x418) = 0;
        *(undefined8 * )(param_1 + 0x408) = 0xffffffffffffffff;
    }
    if ((*(uint * )(param_1 + 0x298) >> 0xb & 1) != 0) {
        FUN_1401559e0(DAT_140c63650 + 200);
        lVar3 = DAT_140c63650;
        ppHVar1 = (HWND * )(DAT_140c63650 + 200);
        *(undefined4 * )(DAT_140c63650 + 0xdc) = 0;
        ImmAssociateContext(*ppHVar1, (HIMC) 0x0);
        puVar2 = *(undefined8 * *)(lVar3 + 0x2a0);
        if ((puVar2 != (undefined8 *) 0x0) && (*(int *) (lVar3 + 0x2b8) != -1)) {
            local_res8 = (longlong *) 0x0;
            iVar4 = (**(code * *) * puVar2)(puVar2, &DAT_140b5c848, &local_res8);
            if (-1 < iVar4) {
                (**(code * *)(*local_res8 + 0x20))(local_res8, *(undefined4 * )(lVar3 + 0x2b8));
                *(undefined4 * )(lVar3 + 0x2b8) = 0xffffffff;
                (**(code * *)(*local_res8 + 0x10))();
            }
        }
    }
    return;
}


undefined8 FUN_140112950(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
    ushort uVar1;
    ushort uVar2;

    uVar1 = GetKeyState(0xa3);
    uVar2 = GetKeyState(0xa2);
    if ((short) (uVar1 | uVar2) < 0) {
        switch (param_3) {
            case 1:
                FUN_140111e60(param_1);
                return 1;
            case 3:
                FUN_140111ed0(param_1);
                return 1;
            case 0x16:
                FUN_140111d60(param_1);
                return 1;
            case 0x18:
                FUN_140111fd0(param_1);
                return 1;
            case 0x19:
            case 0x1a:
                return 1;
        }
    }
    return 0;
}


void FUN_140113170(longlong param_1, short *param_2) {
    short sVar1;
    longlong *plVar2;
    undefined8 uVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    uVar4 = 0;
    if (param_2 != (short *) 0x0) {
        sVar1 = *param_2;
        while (sVar1 != 0) {
            uVar4 = uVar4 + 1;
            sVar1 = param_2[uVar4];
        }
    }
    uVar5 = *(ulonglong * )(param_1 + 0x420);
    if (uVar4 < *(ulonglong * )(param_1 + 0x420)) {
        uVar5 = uVar4;
    }
    (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0x38))
            (*(longlong * *)(param_1 + 0x438), param_2, uVar5);
    plVar2 = *(longlong * *)(param_1 + 0x440);
    if (plVar2 != (longlong *) 0x0) {
        (**(code * *)(*plVar2 + 0x38))(plVar2, param_2, uVar4);
    }
    *(undefined8 * )(param_1 + 0x408) = 0;
    *(undefined8 * )(param_1 + 0x410) = 0;
    uVar3 = (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0x48))();
    *(undefined8 * )(param_1 + 0x400) = uVar3;
    *(undefined8 * )(param_1 + 0x418) = uVar3;
    FUN_14010ef50(param_1, uVar3, 0x7c00);
    if (*(longlong * )(param_1 + 0x410) == *(longlong * )(param_1 + 0x418)) {
        *(undefined8 * )(param_1 + 0x408) = 0xffffffffffffffff;
    }
    *(undefined4 * )(param_1 + 0x42c) = 0;
    FUN_140110ad0(param_1, 0);
    return;
}


void FUN_140113250(longlong param_1, longlong param_2) {
    longlong *plVar1;

    if (param_2 != 0) {
        plVar1 = *(longlong * *)(param_1 + 0x4f8);
        if (plVar1 == (longlong *) 0x0) {
            if (*(longlong * )(param_1 + 0x4f0) == 0) {
                *(undefined8 * )(param_1 + 0x4f0) = *(undefined8 * )(param_1 + 0x2b8);
            }
            (**(code * *)(*DAT_140c65680 + 0x28))
                    (DAT_140c65680, *(undefined8 * )(*(longlong * )(param_1 + 0x4f0) + 0x60), param_2,
                     0xffffffffffffffff, (longlong * *)(param_1 + 0x4f8));
            return;
        }
        // WARNING: Could not recover jumptable at 0x0001401132e0. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code * *)(*plVar1 + 0x38))(plVar1, param_2, 0xffffffffffffffff);
        return;
    }
    if (*(longlong * *)(param_1 + 0x4f8) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x4f8) + 8))();
        *(undefined8 * )(param_1 + 0x4f8) = 0;
        return;
    }
    return;
}


void FUN_1401132f0(longlong param_1) {
    longlong lVar1;
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 uStack44;
    undefined local_28[16];
    undefined local_18[16];

    if ((*(byte * )(param_1 + 0x298) & 1) == 0) {
        local_18 = ZEXT816(CONCAT44((float) *(int *) (param_1 + 0x2d8),
                                    (float) (int) *(undefined8 * )(param_1 + 0x2d4)));
        local_28 = ZEXT816(CONCAT44((float) *(int *) (param_1 + 0x2d0),
                                    (float) (int) *(undefined8 * )(param_1 + 0x2cc)));
        local_38 = 0x3f800000;
        uStack52 = 0x3f800000;
        uStack48 = 0x3f800000;
        uStack44 = 0x3f800000;
        (**(code * *)(*DAT_140c65680 + 0x108))
                (DAT_140c65680, *(undefined8 * )(*(longlong * )(param_1 + 0x2b8) + 0x60),
                 *(undefined8 * )(DAT_140c63650 + 0xe8), 0xffffffffffffffff, param_1 + 0x540, 0x406,
                 &local_38, 1);
        if ((ulonglong) * (uint * )(param_1 + 0x488) < *(ulonglong * )(DAT_140c63678 + 0x30)) {
            lVar1 = (ulonglong) * (uint * )(param_1 + 0x488) * 0x20 + *(longlong * )(DAT_140c63678 + 0x28);
        } else {
            lVar1 = *(longlong * )(DAT_140c63678 + 0x28);
        }
        (**(code * *)(*DAT_140c65680 + 0x108))
                (DAT_140c65680, *(undefined8 * )(*(longlong * )(param_1 + 0x2b8) + 0x60),
                 *(undefined8 * )(DAT_140c63650 + 0xe8), 0xffffffffffffffff, local_28, 0x106, lVar1, 1);
    }
    return;
}


void FUN_140113440(longlong param_1) {
    int iVar1;
    longlong lVar2;
    ulonglong in_stack_ffffffffffffffc8;
    undefined local_28[16];
    undefined local_18[16];

    if (*(longlong * )(param_1 + 0x518) != 0) {
        if ((*(byte * )(param_1 + 0x298) & 1) != 0) {
            iVar1 = 0;
            if (*(longlong * )(param_1 + 0x1d8) != 0) {
                iVar1 = *(int *) (*(longlong * )(param_1 + 0x1d8) + 0x514);
            }
            local_28 = ZEXT816(CONCAT44((float) *(int *) (param_1 + 0x2d0) - (float) iVar1,
                                        (float) *(int *) (param_1 + 0x2cc) - 0.0));
            local_18 = ZEXT816(CONCAT44((float) *(int *) (param_1 + 0x2d8) - (float) iVar1,
                                        (float) (int) *(undefined8 * )(param_1 + 0x2d4) - 0.0));
            FUN_140110150(param_1, local_28, *(longlong * )(param_1 + 0x418),
                          *(longlong * )(param_1 + 0x418) + *(longlong * )(param_1 + 0x518), param_1 + 0x490,
                          0);
            return;
        }
        if ((ulonglong) * (uint * )(param_1 + 0x490) < *(ulonglong * )(DAT_140c63678 + 0x30)) {
            lVar2 = (ulonglong) * (uint * )(param_1 + 0x490) * 0x20 + *(longlong * )(DAT_140c63678 + 0x28);
        } else {
            lVar2 = *(longlong * )(DAT_140c63678 + 0x28);
        }
        if (*(longlong * )(DAT_140c63650 + 0x738) != 0) {
            FUN_140103e60(*(longlong * )(DAT_140c63650 + 0x738), param_1 + 0x520, lVar2, 0,
                          in_stack_ffffffffffffffc8 & 0xffffffff00000000 |
                          (ulonglong)
                                  (uint)((DAT_140c63664 - *(float *) (DAT_140c63650 + 0x740)) *
                                         *(float *) (DAT_140c63650 + 0x744)));
        }
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140113580(longlong param_1, undefined8 param_2) {
    longlong *plVar1;
    undefined4 local_18;
    undefined4 uStack20;
    undefined4 uStack16;
    undefined4 uStack12;

    plVar1 = *(longlong * *)(param_1 + 0x480);
    local_18 = 0x3f800000;
    uStack20 = 0x3f800000;
    uStack16 = 0x3f800000;
    uStack12 = 0x3f800000;
    if ((((plVar1 == (longlong *) 0x0) || (*plVar1 == 0)) &&
         ((plVar1 = *(longlong * *)(param_1 + 0x478), plVar1 == (longlong *) 0x0 || (*plVar1 == 0)))) &&
        ((((plVar1 = *(longlong * *)(param_1 + 0x318), plVar1 == (longlong *) 0x0 || (*plVar1 == 0)) &&
           (plVar1 = (longlong * )(param_1 + 0x2e8), *plVar1 == 0)) &&
          ((plVar1 = *(longlong * *)(param_1 + 0x2e0), plVar1 == (longlong *) 0x0 || (*plVar1 == 0)))))) {
        plVar1 = (longlong * )(DAT_140c63650 + 0x738);
        local_18 = _DAT_140c777f0;
        uStack20 = uRam0000000140c777f4;
        uStack16 = uRam0000000140c777f8;
        uStack12 = uRam0000000140c777fc;
    }
    if ((plVar1 != (longlong *) 0x0) && (*plVar1 != 0)) {
        FUN_140103e60(*plVar1, param_2, &local_18, 0,
                      (DAT_140c63664 - *(float *) (plVar1 + 1)) * *(float *) ((longlong) plVar1 + 0xc));
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140113640(longlong param_1) {
    short *psVar1;
    undefined auVar2[16];
    undefined auVar3[16];
    longlong lVar4;
    undefined4 local_78;
    undefined4 uStack116;
    undefined4 uStack112;
    undefined4 uStack108;
    undefined8 local_68;
    float local_58;
    float local_54;
    undefined local_48[8];
    undefined8 uStack64;
    undefined local_38[8];
    undefined8 uStack48;
    float local_28;
    float fStack36;
    float fStack32;
    float fStack28;
    float local_18;
    float fStack20;
    float fStack16;
    float fStack12;

    psVar1 = *(short **) (DAT_140c63650 + 0x110);
    if (*psVar1 != 0) {
        (**(code * *)(*DAT_140c65680 + 0x40))(DAT_140c65680, 6);
        (**(code * *)(*DAT_140c65680 + 0x88))();
        local_68 = 0;
        local_54 = 0.0;
        _local_38 = ZEXT816(CONCAT44((float) *(int *) (param_1 + 0x2d8),
                                     (float) (int) *(undefined8 * )(param_1 + 0x2d4)));
        _local_48 = ZEXT816(CONCAT44((float) *(int *) (param_1 + 0x2d0),
                                     (float) (int) *(undefined8 * )(param_1 + 0x2cc)));
        local_58 = 400.0;
        local_78 = 0x3f800000;
        uStack116 = 0x3f800000;
        uStack112 = 0x3f800000;
        uStack108 = 0x3f800000;
        (**(code * *)(*DAT_140c65680 + 0x108))
                (DAT_140c65680, *(undefined8 * )(*(longlong * )(param_1 + 0x2b8) + 0x60), psVar1,
                 0xffffffffffffffff, &local_68, 0x400, &local_78, 1);
        auVar3 = _local_38;
        auVar2 = _local_48;
        local_28 = *(float *) (param_1 + 0x530);
        local_18 = (local_58 - (float) local_68) + local_28;
        fStack36 = (*(float *) (param_1 + 0x524) - (local_54 - local_68._4_4_)) - 16.0;
        fStack20 = (local_54 - local_68._4_4_) + fStack36;
        uStack64._0_4_ = SUB164(auVar2, 8);
        uStack64._4_4_ = SUB164(auVar2, 0xc);
        local_28 = local_28 - 8.0;
        fStack36 = fStack36 - 8.0;
        fStack32 = (float) uStack64 - 8.0;
        fStack28 = uStack64._4_4_ - 8.0;
        uStack48._0_4_ = SUB164(auVar3, 8);
        uStack48._4_4_ = SUB164(auVar3, 0xc);
        local_18 = local_18 + 8.0;
        fStack20 = fStack20 + 8.0;
        fStack16 = (float) uStack48 + 8.0;
        fStack12 = uStack48._4_4_ + 8.0;
        (**(code * *)(*DAT_140c65680 + 0x60))(DAT_140c65680, &local_28);
        FUN_140113580(param_1, &local_28);
        lVar4 = DAT_140c63678;
        *(float *) (param_1 + 0x560) = local_28;
        *(float *) (param_1 + 0x564) = fStack36;
        *(float *) (param_1 + 0x568) = fStack32;
        *(float *) (param_1 + 0x56c) = fStack28;
        *(float *) (param_1 + 0x570) = local_18;
        *(float *) (param_1 + 0x574) = fStack20;
        *(float *) (param_1 + 0x578) = fStack16;
        *(float *) (param_1 + 0x57c) = fStack12;
        if ((ulonglong) * (uint * )(param_1 + 0x488) < *(ulonglong * )(lVar4 + 0x30)) {
            lVar4 = (ulonglong) * (uint * )(param_1 + 0x488) * 0x20 + *(longlong * )(lVar4 + 0x28);
        } else {
            lVar4 = *(longlong * )(lVar4 + 0x28);
        }
        (**(code * *)(*DAT_140c65680 + 0x108))
                (DAT_140c65680, *(undefined8 * )(*(longlong * )(param_1 + 0x2b8) + 0x60), psVar1,
                 0xffffffffffffffff, local_48, 0x104, lVar4, 1);
        (**(code * *)(*DAT_140c65680 + 0x48))();
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140113870(longlong param_1) {
    float fVar1;
    uint uVar2;
    int iVar3;
    undefined8 uVar4;
    undefined auVar5[16];
    float *pfVar6;
    longlong lVar7;
    longlong *plVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    longlong lVar12;
    longlong lVar13;
    uint uVar14;
    float fVar15;
    float fVar16;
    undefined4 uVar17;
    undefined4 uVar18;
    undefined4 uVar19;
    undefined4 uVar20;
    undefined8 *puVar21;
    undefined local_118[4];
    undefined auStack276[4];
    undefined8 uStack272;
    undefined local_108[4];
    undefined auStack260[4];
    undefined8 uStack256;
    undefined local_f8[4];
    undefined auStack244[12];
    undefined local_e8[4];
    undefined auStack228[12];
    undefined local_d8[16];
    undefined local_c8[16];
    undefined local_b8[16];
    undefined8 local_a8[2];
    undefined8 local_98;
    undefined local_88[16];
    float local_78;
    undefined4 uStack116;
    undefined4 uStack112;
    undefined4 uStack108;
    undefined4 local_68;
    float fStack100;
    undefined4 uStack96;
    undefined4 uStack92;

    uVar2 = *(uint * )(DAT_140c63650 + 0x288);
    if (uVar2 != 0) {
        (**(code * *)(*DAT_140c65680 + 0x40))(DAT_140c65680, 6);
        (**(code * *)(*DAT_140c65680 + 0x88))();
        uVar11 = 0;
        fVar16 = (float) (int) *(undefined8 * )(param_1 + 0x2d4);
        _local_108 = ZEXT816(CONCAT44((float) *(int *) (param_1 + 0x2d8), fVar16));
        _local_e8 = ZEXT816(CONCAT44((float) *(int *) (param_1 + 0x2d8), fVar16));
        _local_118 = ZEXT816(CONCAT44((float) *(int *) (param_1 + 0x2d0),
                                      (float) (int) *(undefined8 * )(param_1 + 0x2cc)));
        _local_f8 = _local_118;
        pfVar6 = (float *) (**(code * *)(**(longlong * *)(*(longlong * )(param_1 + 0x2b8) + 0x60) + 0x20))();
        uVar17 = 0x3f800000;
        uVar18 = 0x3f800000;
        uVar19 = 0x3f800000;
        uVar20 = 0x3f800000;
        fVar16 = 0.0;
        local_b8._0_12_ = CONCAT48(0x3f800000, 0x3f8000003f800000);
        local_b8 = CONCAT412(0x3f800000, local_b8._0_12_);
        local_a8[0] = 0;
        local_98 = 0x43c80000;
        uVar14 = (int) (longlong) * pfVar6 + 3;
        puVar21 = local_a8;
        (**(code * *)(*DAT_140c65680 + 0x108))
                (DAT_140c65680, *(undefined8 * )(*(longlong * )(param_1 + 0x2b8) + 0x60), &DAT_1409d5abc,
                 0xffffffffffffffff, puVar21, 0x400, local_b8, 1);
        local_98._0_4_ = (float) local_98 - (float) local_a8[0];
        if (uVar2 != 0) {
            uVar9 = (ulonglong) uVar2;
            uVar10 = uVar11;
            do {
                local_d8 = local_d8 & (undefined[16]) 0xffffffffffffffff;
                local_88 = CONCAT412(uVar20, CONCAT48(uVar19, CONCAT44(uVar18, uVar17)));
                local_c8 = CONCAT88(local_c8._8_8_, 0x43c80000);
                puVar21 = (undefined8 *) local_d8;
                (**(code * *)(*DAT_140c65680 + 0x108))
                        (DAT_140c65680, *(undefined8 * )(*(longlong * )(param_1 + 0x2b8) + 0x60),
                         *(undefined8 * )(uVar10 + 0x150 + DAT_140c63650), 0xffffffffffffffff, puVar21, 0x400,
                         local_88, 1);
                if (fVar16 < local_c8._0_4_ - local_d8._0_4_) {
                    fVar16 = local_c8._0_4_ - local_d8._0_4_;
                }
                uVar10 = uVar10 + 0x20;
                uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
        }
        fVar1 = *(float *) (param_1 + 0x530);
        fVar15 = *(float *) (param_1 + 0x534) + 16.0;
        _local_118 = CONCAT44(fVar15, fVar1);
        fVar16 = fVar1 + (float) local_98 + 5.0 + fVar16;
        _local_f8 = CONCAT44(fVar15 - 8.0, fVar1 - 8.0);
        _local_f8 = CONCAT412(uStack272._4_4_ - 8.0, CONCAT48((float) uStack272 - 8.0, _local_f8));
        fVar15 = (float) (ulonglong)(uVar14 * uVar2) + fVar15;
        _local_108 = CONCAT44(fVar15, fVar16);
        _local_e8 = CONCAT44(fVar15 + 8.0, fVar16 + 8.0);
        _local_e8 = CONCAT412(uStack256._4_4_ + 8.0, CONCAT48((float) uStack256 + 8.0, _local_e8));
        local_d8 = ZEXT416(0);
        fVar16 = (float) *(int *) (*(longlong * )(param_1 + 0x20) + 0x54);
        lVar7 = FUN_1400cb470(param_1, local_88);
        local_c8 = ZEXT816(CONCAT44((float) *(int *) (lVar7 + 0xc), (float) (int) *(undefined8 * )(lVar7 + 8))
        );
        local_d8 = _local_f8;
        if (fVar16 < auStack228._0_4_ + (float) *(int *) (lVar7 + 4)) {
            fVar16 = (*(float *) (param_1 + 0x534) - *(float *) (param_1 + 0x524)) +
                     (auStack228._0_4_ - auStack244._0_4_) + 16.0;
            _local_f8 = CONCAT44(auStack244._0_4_ - fVar16, local_f8);
            _local_e8 = CONCAT44(auStack228._0_4_ - fVar16, local_e8);
            _local_118 = CONCAT44(auStack276 - fVar16, local_118);
            _local_108 = CONCAT44(auStack260 - fVar16, local_108);
            if (**(short **) (DAT_140c63650 + 0x110) != 0) {
                fVar16 = *(float *) (param_1 + 0x570) - *(float *) (param_1 + 0x560);
                _local_f8 = CONCAT124(auStack244, local_f8 + fVar16);
                _local_e8 = CONCAT124(auStack228, local_e8 + fVar16);
                _local_118 = CONCAT124(_auStack276, local_118 + fVar16);
                _local_108 = CONCAT124(_auStack260, local_108 + fVar16);
            }
        }
        (**(code * *)(*DAT_140c65680 + 0x60))(DAT_140c65680, local_f8);
        plVar8 = *(longlong * *)(param_1 + 0x480);
        local_b8 = CONCAT412(uVar20, CONCAT48(uVar19, CONCAT44(uVar18, uVar17)));
        if ((((plVar8 == (longlong *) 0x0) || (*plVar8 == 0)) &&
             ((plVar8 = *(longlong * *)(param_1 + 0x478), plVar8 == (longlong *) 0x0 || (*plVar8 == 0))))
            && ((((plVar8 = *(longlong * *)(param_1 + 0x318), plVar8 == (longlong *) 0x0 || (*plVar8 == 0))
                  && (plVar8 = (longlong * )(param_1 + 0x2e8), *plVar8 == 0)) &&
                 ((plVar8 = *(longlong * *)(param_1 + 0x2e0), plVar8 == (longlong *) 0x0 || (*plVar8 == 0)))
        ))) {
            plVar8 = (longlong * )(DAT_140c63650 + 0x738);
            local_b8._0_12_ = CONCAT48(uRam0000000140c777f8, CONCAT44(uRam0000000140c777f4, _DAT_140c777f0));
            local_b8 = CONCAT412(uRam0000000140c777fc, local_b8._0_12_);
        }
        if ((plVar8 != (longlong *) 0x0) && (*plVar8 != 0)) {
            FUN_140103e60(*plVar8, local_f8, local_b8, 0,
                          (ulonglong) puVar21 & 0xffffffff00000000 |
                          (ulonglong)
                                  (uint)((DAT_140c63664 - *(float *) (plVar8 + 1)) *
                                         *(float *) ((longlong) plVar8 + 0xc)));
        }
        iVar3 = *(int *) (DAT_140c63650 + 0x294);
        lVar7 = (longlong) * (int *) (DAT_140c63650 + 0x298);
        if (uVar2 != 0) {
            local_98._0_4_ = (float) local_98 + 5.0;
            fVar16 = (float) (ulonglong) uVar14;
            uVar10 = uVar11;
            do {
                auVar5 = _local_108;
                uVar4 = *(undefined8 * )(uVar10 + 0x150 + DAT_140c63650);
                fStack100 = fVar16 + auStack276;
                uStack116 = auStack276;
                uStack112 = (float) uStack272;
                uStack108 = uStack272._4_4_;
                _local_108 = CONCAT44(fStack100, local_108);
                uStack256._0_4_ = SUB164(auVar5, 8);
                uStack256._4_4_ = SUB164(auVar5, 0xc);
                local_78 = local_118 + (float) local_98;
                lVar13 = lVar7;
                if (9 < lVar7) {
                    lVar13 = 0;
                }
                local_68 = local_108;
                uStack96 = (float) uStack256;
                uStack92 = uStack256._4_4_;
                if ((ulonglong) * (uint * )(param_1 + 0x488) < *(ulonglong * )(DAT_140c63678 + 0x30)) {
                    lVar12 = (ulonglong) * (uint * )(param_1 + 0x488) * 0x20 +
                             *(longlong * )(DAT_140c63678 + 0x28);
                } else {
                    lVar12 = *(longlong * )(DAT_140c63678 + 0x28);
                }
                (**(code * *)(*DAT_140c65680 + 0x108))
                        (DAT_140c65680, *(undefined8 * )(*(longlong * )(param_1 + 0x2b8) + 0x60),
                         (&PTR_DAT_140a1c3d0)[lVar13], 0xffffffffffffffff, local_118, 0x104, lVar12, 1);
                if ((ulonglong) * (uint * )(param_1 + 0x488) < *(ulonglong * )(DAT_140c63678 + 0x30)) {
                    lVar13 = (ulonglong) * (uint * )(param_1 + 0x488) * 0x20 +
                             *(longlong * )(DAT_140c63678 + 0x28);
                } else {
                    lVar13 = *(longlong * )(DAT_140c63678 + 0x28);
                }
                pfVar6 = &local_78;
                (**(code * *)(*DAT_140c65680 + 0x108))
                        (DAT_140c65680, *(undefined8 * )(*(longlong * )(param_1 + 0x2b8) + 0x60), uVar4,
                         0xffffffffffffffff, pfVar6, 0x104, lVar13, 1);
                if ((int) uVar11 == iVar3) {
                    (**(code * *)(*DAT_140c65680 + 0x88))();
                    if ((ulonglong) * (uint * )(param_1 + 0x494) < *(ulonglong * )(DAT_140c63678 + 0x30)) {
                        lVar13 = (ulonglong) * (uint * )(param_1 + 0x494) * 0x20 +
                                 *(longlong * )(DAT_140c63678 + 0x28);
                    } else {
                        lVar13 = *(longlong * )(DAT_140c63678 + 0x28);
                    }
                    if (*(longlong * )(DAT_140c63650 + 0x738) != 0) {
                        FUN_140103e60(*(longlong * )(DAT_140c63650 + 0x738), local_118, lVar13, 0,
                                      (ulonglong) pfVar6 & 0xffffffff00000000 |
                                      (ulonglong)
                                              (uint)((DAT_140c63664 - *(float *) (DAT_140c63650 + 0x740)) *
                                                     *(float *) (DAT_140c63650 + 0x744)));
                    }
                }
                uVar14 = (int) uVar11 + 1;
                uVar11 = (ulonglong) uVar14;
                uVar10 = uVar10 + 0x20;
                auStack276 = auStack276 + fVar16;
                lVar7 = lVar7 + 1;
                _local_118 = CONCAT88(uStack272, CONCAT44(auStack276, local_118));
            } while (uVar14 < uVar2);
        }
        (**(code * *)(*DAT_140c65680 + 0x48))();
    }
    return;
}


void FUN_140113f60(longlong param_1) {
    short sVar1;
    short *psVar2;
    longlong lVar3;
    float *pfVar4;
    float fVar5;
    float fVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    float fVar9;
    float fVar10;
    undefined4 uVar11;
    undefined4 uVar12;
    float local_res8[2];
    float local_res10[2];

    if (*(longlong * )(param_1 + 0x518) != 0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0x88))
                (*(longlong * *)(param_1 + 0x438), *(longlong * )(param_1 + 0x418),
                 *(longlong * )(param_1 + 0x518) + *(longlong * )(param_1 + 0x418), &DAT_1409d5adc,
                 0xffffffffffffffff);
    }
    lVar3 = 0;
    psVar2 = *(short **) (DAT_140c63650 + 0x130);
    sVar1 = *psVar2;
    while (sVar1 != 0) {
        lVar3 = lVar3 + 1;
        sVar1 = psVar2[lVar3];
    }
    *(longlong * )(param_1 + 0x518) = lVar3;
    (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0x88))
            (*(longlong * *)(param_1 + 0x438), *(undefined8 * )(param_1 + 0x418),
             *(undefined8 * )(param_1 + 0x418), psVar2, 0xffffffffffffffff);
    fVar9 = (float) (int) *(undefined8 * )(param_1 + 0x2d4);
    fVar10 = (float) *(int *) (param_1 + 0x2d8);
    uVar11 = 0;
    uVar12 = 0;
    fVar5 = (float) (int) *(undefined8 * )(param_1 + 0x2cc);
    fVar6 = (float) *(int *) (param_1 + 0x2d0);
    uVar7 = 0;
    uVar8 = 0;
    (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0xa8))
            (0, *(longlong * *)(param_1 + 0x438), *(undefined8 * )(param_1 + 0x418), local_res8);
    (**(code * *)(**(longlong * *)(param_1 + 0x438) + 0xa8))
            (*(longlong * *)(param_1 + 0x438),
             *(longlong * )(param_1 + 0x418) + *(longlong * )(param_1 + 0x518), local_res10);
    *(undefined(*)[16])(param_1 + 0x520) = CONCAT412(uVar8, CONCAT48(uVar7, CONCAT44(fVar6, fVar5)));
    *(undefined(*)[16])(param_1 + 0x530) = CONCAT412(uVar12, CONCAT48(uVar11, CONCAT44(fVar10, fVar9)));
    *(float *) (param_1 + 0x530) = (fVar5 + local_res10[0]) - *(float *) (param_1 + 0x42c);
    *(float *) (param_1 + 0x520) = (fVar5 + local_res8[0]) - *(float *) (param_1 + 0x42c);
    pfVar4 = (float *) (**(code * *)(**(longlong * *)(*(longlong * )(param_1 + 0x2b8) + 0x60) + 0x20))();
    fVar5 = *pfVar4;
    if ((*(byte * )(param_1 + 0x298) & 1) == 0) {
        if ((*(uint * )(param_1 + 0x2c0) & 4) == 0) {
            if ((*(uint * )(param_1 + 0x2c0) & 8) != 0) {
                *(float *) (param_1 + 0x524) = *(float *) (param_1 + 0x534) - fVar5;
            }
        } else {
            fVar6 = ((*(float *) (param_1 + 0x534) - *(float *) (param_1 + 0x524)) - fVar5) * 0.5 +
                    *(float *) (param_1 + 0x524);
            *(float *) (param_1 + 0x524) = fVar6;
            *(float *) (param_1 + 0x534) = fVar6 + fVar5;
        }
    }
    return;
}


void FUN_140114180(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
                   undefined8 param_5) {
    longlong lVar1;
    undefined8 uVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    undefined auStack248[32];
    undefined *local_d8;
    undefined8 local_d0;
    ulonglong local_c8;
    char local_b8[16];
    undefined local_a8[96];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong) auStack248;
    local_d8 = (undefined *) 0x0;
    FUN_1400d45e0(local_a8, param_1, param_2, param_5);
    uVar4 = 0;
    uVar3 = 0;
    do {
        local_b8[0] = '\0';
        lVar1 = FUN_1401a6b80(param_5, (&PTR_u_MultiLine_140a1c350)[uVar3]);
        if (lVar1 != 0) {
            uVar2 = FUN_1401a4f40(lVar1 + 0x20);
            FUN_1401a52e0(uVar2, local_b8);
            if (local_b8[0] != '\0') {
                uVar4 = uVar4 | 1 << ((byte) uVar3 & 0x3f);
            }
        }
        uVar3 = uVar3 + 1;
    } while (uVar3 < 0xd);
    lVar1 = FUN_14018b280(0x580, 0);
    if (lVar1 != 0) {
        local_d8 = local_a8;
        local_d0 = param_4;
        local_c8 = uVar4;
        FUN_14010e4a0(lVar1, param_1, param_2, param_3);
    }
    FUN_1407db4f0(local_48 ^ (ulonglong) auStack248);
    return;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1401142a0(longlong *param_1, undefined8 param_2) {
    short sVar1;
    uint uVar2;
    longlong **pplVar3;
    longlong *plVar4;
    longlong lVar5;
    short *psVar6;
    undefined8 uVar7;
    uint *puVar8;
    short *psVar9;
    int iVar10;
    short *psVar11;
    longlong lVar12;
    uint local_res8[2];
    int local_res18[2];
    longlong local_40;
    longlong local_38;

    lVar5 = FUN_1401a6b80(param_2, L"PromptText");
    psVar9 = (short *) 0x0;
    psVar6 = psVar9;
    if (lVar5 != 0) {
        psVar6 = (short *) FUN_1401a4f40(lVar5 + 0x20);
    }
    psVar11 = (short *) &DAT_1409d4564;
    if (psVar6 != (short *) 0x0) {
        psVar11 = psVar6;
    }
    sVar1 = *psVar11;
    psVar6 = psVar9;
    while (sVar1 != 0) {
        psVar6 = (short *) ((longlong) psVar6 + 1);
        sVar1 = psVar11[(longlong) psVar6];
    }
    lVar5 = (longlong) psVar6 * 2 >> 1;
    psVar6 = psVar9;
    if (lVar5 + 1U < 0x7fffffffffffffff) {
        psVar6 = (short *) FUN_14018b280((lVar5 + 1U) * 2, 0);
    }
    FUN_1407db590(psVar6, psVar11, lVar5 * 2);
    if (psVar6 + lVar5 != (short *) 0x0) {
        psVar6[lVar5] = 0;
    }
    lVar5 = FUN_1401a6b80(param_2, L"PromptTextId");
    if (lVar5 != 0) {
        FUN_1401a4f40(lVar5 + 0x20);
    }
    FUN_1400e2630();
    if (psVar6 != (short *) 0x0) {
        FUN_14018b900(psVar6, 0);
    }
    psVar6 = psVar9;
    psVar11 = psVar9;
    if (local_40 != local_38) {
        lVar5 = FUN_1401a6b80(param_2, L"PromptFont");
        if ((lVar5 == 0) || (lVar5 = FUN_1401a4f40(lVar5 + 0x20), lVar5 == 0)) {
            lVar5 = param_1[0x57];
        } else {
            lVar5 = FUN_1400e58c0(param_1[4], lVar5);
        }
        param_1[0x9e] = lVar5;
        (**(code * *)(*DAT_140c65680 + 0x28))
                (DAT_140c65680, *(undefined8 * )(param_1[0x9e] + 0x60), local_40, 0xffffffffffffffff,
                 param_1 + 0x9f);
    }
    do {
        local_res8[0] = local_res8[0] & 0xffffff00;
        lVar5 = FUN_1401a6b80(param_2, (&PTR_u_DT_CENTER_140a1c888)[(longlong) psVar6]);
        if (lVar5 != 0) {
            uVar7 = FUN_1401a4f40(lVar5 + 0x20);
            FUN_1401a52e0(uVar7, local_res8);
            if ((char) local_res8[0] != '\0') {
                psVar11 = (short *) ((ulonglong) psVar11 | 1 << ((byte) psVar6 & 0x3f));
            }
        }
        psVar6 = (short *) ((longlong) psVar6 + 1);
    } while (psVar6 < &DAT_00000006);
    *(int *) (param_1 + 0x9d) = (int) psVar11;
    puVar8 = (uint *) FUN_1400f66f0(local_res8, param_2, L"PromptColor", 0xff808080);
    lVar5 = DAT_140c63678;
    if ((uint * )((longlong) param_1 + 0x4ec) != puVar8) {
        FUN_1401429a0(DAT_140c63678);
        lVar5 = DAT_140c63678;
        uVar2 = *puVar8;
        *(uint * )((longlong) param_1 + 0x4ec) = uVar2;
        if ((ulonglong) uVar2 < *(ulonglong * )(lVar5 + 0x30)) {
            lVar12 = *(longlong * )(lVar5 + 0x28) + (ulonglong) uVar2 * 0x20;
            iVar10 = *(int *) (lVar12 + 0x10);
            if (iVar10 - 1U < 0xfffffffe) {
                *(int *) (lVar12 + 0x10) = iVar10 + 1;
            }
        }
    }
    FUN_1401429a0(lVar5, local_res8[0]);
    local_res18[0] = 0x7c00;
    lVar5 = FUN_1401a6b80(param_2, L"MaxTextLength");
    if (lVar5 != 0) {
        uVar7 = FUN_1401a4f40(lVar5 + 0x20);
        FUN_1407df428(uVar7, &DAT_1409e4114, local_res18);
    }
    iVar10 = 0x7c00;
    if (local_res18[0] < 0x7c00) {
        iVar10 = local_res18[0];
    }
    param_1[0x84] = (longlong) iVar10;
    if ((param_1[6] != 0) && (*(longlong * )(param_1[6] + 0x98) != 0)) {
        if (param_1[0x8f] == 0) {
            lVar5 = FUN_14018b280(0x30);
            psVar6 = psVar9;
            if (lVar5 != 0) {
                psVar6 = (short *) FUN_1401095e0(lVar5);
            }
            param_1[0x8f] = (longlong) psVar6;
        }
        pplVar3 = (longlong **) param_1[0x8f];
        plVar4 = *(longlong * *)(param_1[6] + 0x98);
        if (plVar4 != *pplVar3) {
            if (plVar4 != (longlong *) 0x0) {
                (**(code * *) * plVar4)(plVar4);
            }
            if (*pplVar3 != (longlong *) 0x0) {
                (**(code * *)(**pplVar3 + 8))();
                *pplVar3 = (longlong *) 0x0;
            }
            *pplVar3 = plVar4;
        }
    }
    lVar5 = FUN_1401a6b80(param_2, &DAT_140a329a8);
    if (((lVar5 != 0) && (psVar6 = (short *) FUN_1401a4f40(lVar5 + 0x20), psVar6 != (short *) 0x0)) &&
        (psVar11 = psVar9, *psVar6 != 0)) {
        do {
            psVar11 = (short *) ((longlong) psVar11 + 1);
        } while (psVar6[(longlong) psVar11] != 0);
        if (psVar11 != (short *) 0x0) {
            if (param_1[0x90] == 0) {
                lVar5 = FUN_14018b280(0x30);
                if (lVar5 != 0) {
                    psVar9 = (short *) FUN_1401095e0(lVar5);
                }
                param_1[0x90] = (longlong) psVar9;
            }
            if (param_1[4] != 0) {
                FUN_140109710(param_1[0x90], param_1[4] + 0xf0, psVar6, 0);
            }
        }
    }
    if (((ulonglong) param_1[0x52] >> 0x24 & 1) != 0) {
        (**(code * *)(*param_1 + 0x68))(param_1, 0);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40, 0);
    }
    return 0;
}


void FUN_140114700(longlong param_1) {
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

    uStack40 = 0x140114710;
    lVar4 = FUN_1407f0f60();
    lVar4 = -lVar4;
    *(ulonglong * )(&stack0x00004010 + lVar4) =
            DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffe0 + lVar4);
    lVar2 = *(longlong * )(param_1 + 400);
    *(undefined8 * )(&stack0x00004058 + lVar4) = unaff_RBX;
    *(undefined8 * )(&stack0x00004020 + lVar4) = unaff_R15;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140114751;
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
    lVar17 = (longlong) & PTR_s_ClearText_140c57400 +
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
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x1401147df;
    FUN_1400569b0(lVar2, "Apollo.EditBox");
    puVar9 = *(undefined8 * *)(lVar2 + 0x10);
    iVar1 = *(int *) (puVar9 + -1);
    if (iVar1 == 2) {
        LAB_140114801:
        if (*(int *) (puVar9 + -1) == 2) {
            LAB_14011481d:
            uVar8 = puVar9[-2];
        } else if (*(int *) (puVar9 + -1) == 7) {
            uVar8 = puVar9[-2] + 0x30;
        } else {
            uVar8 = 0;
        }
    } else {
        if ((iVar1 == 5) || (iVar1 == 6)) goto LAB_14011481d;
        if (iVar1 == 7) goto LAB_140114801;
        uVar8 = uVar14;
        if (iVar1 == 8) goto LAB_14011481d;
    }
    *puVar9 = puVar9[-2];
    *(undefined4 * )(puVar9 + 1) = *(undefined4 * )(puVar9 + -1);
    *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
    lVar17 = *(longlong * )(lVar2 + 0x10);
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14011484c;
    uVar5 = FUN_140062650(lVar2, "__index", 7);
    lVar13 = *(longlong * )(lVar2 + 0x10);
    *(undefined8 * )((longlong) alStackX16 + lVar4 + -0x10) = uVar5;
    *(undefined4 * )((longlong) auStackX8 + lVar4) = 4;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140114872;
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
                *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x1401148ba;
                FUN_14005e2c0(lVar2);
            }
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x1401148df;
            lVar6 = FUN_140060ab0(lVar2, 0);
            *(undefined8 * )(lVar6 + 0x20) = uVar5;
            plVar3 = *(longlong * *)(lVar2 + 0x10);
            *plVar3 = lVar6;
            *(undefined4 * )(plVar3 + 1) = 6;
            *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140114903;
            uVar5 = FUN_1400580e0(lVar2, 0xfffffffe);
            lVar6 = -1;
            do {
                lVar6 = lVar6 + 1;
            } while (*(char *) (lVar13 + lVar6) != '\0');
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140114924;
            uVar7 = FUN_140062650(lVar2, lVar13);
            lVar13 = *(longlong * )(lVar2 + 0x10);
            *(undefined8 * )((longlong) alStackX16 + lVar4 + -0x10) = uVar7;
            *(undefined4 * )((longlong) auStackX8 + lVar4) = 4;
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140114949;
            FUN_14005ea50(lVar2, uVar5, (longlong) alStackX16 + lVar4 + -0x10, lVar13 + -0x10);
            *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + -0x10;
            lVar13 = *(longlong * )(lVar17 + 0x10);
            lVar6 = *(longlong * )(lVar2 + 0x10);
            lVar17 = lVar17 + 0x10;
        } while (lVar13 != 0);
    }
    lVar17 = *(longlong * )(lVar2 + 0x20);
    *(longlong * )(lVar2 + 0x10) = lVar6 + -0x10;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14011498c;
    uVar7 = FUN_140062650(lVar2, "Apollo.Window", 0xd);
    uVar5 = *(undefined8 * )(lVar2 + 0x10);
    *(undefined8 * )((longlong) alStackX16 + lVar4 + -0x10) = uVar7;
    *(undefined4 * )((longlong) auStackX8 + lVar4) = 4;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x1401149b1;
    FUN_14005e8e0(lVar2, lVar17 + 0xa0, (longlong) alStackX16 + lVar4 + -0x10, uVar5);
    *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
    lVar17 = *(longlong * )(lVar2 + 0x10);
    iVar1 = *(int *) (lVar17 + -8);
    puVar12 = (ulonglong * )(lVar17 + -0x10);
    if (iVar1 == 2) {
        LAB_140114a19:
        if (*(int *) (lVar17 + -8) != 2) {
            if (*(int *) (lVar17 + -8) == 7) {
                uVar14 = *puVar12 + 0x30;
            }
            goto LAB_1401149ea;
        }
    } else if ((iVar1 != 5) && (iVar1 != 6)) {
        if (iVar1 == 7) goto LAB_140114a19;
        if (iVar1 != 8) goto LAB_1401149ea;
    }
    uVar14 = *puVar12;
    LAB_1401149ea:
    *(ulonglong * *)(lVar2 + 0x10) = puVar12;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x1401149fc;
    FUN_1400ed720(param_1, uVar8, uVar14);
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140114a0c;
    FUN_1407db4f0(*(ulonglong * )(&stack0x00004010 + lVar4) ^
                  (ulonglong)(&stack0xffffffffffffffe0 + lVar4));
    return;
}


longlong FUN_140114a30(undefined8 param_1) {
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    char *pcVar4;

    lVar1 = FUN_1400d66a0(param_1, 1);
    if (lVar1 == 0) {
        return 0;
    }
    if ((*(byte * )(lVar1 + 0x1b0) >> 2 & 1) == 0) {
        puVar2 = (undefined8 *) FUN_1400580e0(param_1, 1);
        if ((puVar2 == &DAT_140a12138) || (*(int *) (puVar2 + 1) == -1)) {
            pcVar4 = s_no_value_140c1dc88;
        } else {
            pcVar4 = (&PTR_DAT_140a123b0)[*(int *) (puVar2 + 1)];
        }
        uVar3 = FUN_140058780(param_1, s__s_expected__got__s_140c1db70, "EditBox", pcVar4);
        FUN_140056570(param_1, 1, uVar3);
    }
    return lVar1;
}


undefined8 FUN_140114ae0(longlong param_1) {
    int iVar1;
    undefined8 *puVar2;
    double *pdVar3;
    longlong lVar4;
    undefined8 uVar5;

    lVar4 = FUN_140114a30();
    if (*(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x70) <=
        *(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 * *)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 * )(puVar2 + 1) = 5;
    *puVar2 = uVar5;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    iVar1 = *(int *) (lVar4 + 0x410);
    FUN_140058710(param_1, "cpBegin", 7);
    pdVar3 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar3 + 1) = 3;
    *pdVar3 = (double) iVar1;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar5, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    iVar1 = *(int *) (lVar4 + 0x418);
    FUN_140058710(param_1, "cpEnd", 5);
    pdVar3 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar3 + 1) = 3;
    *pdVar3 = (double) iVar1;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar5, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    iVar1 = *(int *) (lVar4 + 0x400);
    FUN_140058710(param_1, "cpCaret", 7);
    pdVar3 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar3 + 1) = 3;
    *pdVar3 = (double) iVar1;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar5, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    iVar1 = *(int *) (lVar4 + 0x408);
    FUN_140058710(param_1, "cpAnchor", 8);
    pdVar3 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar3 + 1) = 3;
    *pdVar3 = (double) iVar1;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar5, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    return 1;
}


undefined8 FUN_140114cd0(longlong param_1) {
    int iVar1;
    int iVar2;
    undefined8 uVar3;
    ulonglong uVar4;
    ulonglong uVar5;

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
    uVar3 = FUN_140114a30(param_1);
    iVar1 = FUN_1400f26a0(uVar5 + 0x180, 2);
    iVar2 = FUN_1400f26a0(uVar5 + 0x180, 3);
    FUN_140111750(uVar3, (longlong) iVar1, (longlong) iVar2);
    return 0;
}


undefined8 FUN_140114d80(undefined8 param_1) {
    longlong *plVar1;
    undefined8 uVar2;
    undefined local_28[8];
    longlong local_20;

    plVar1 = (longlong *) FUN_140114a30();
    uVar2 = FUN_140056bb0(param_1, 2);
    FUN_14018f2d0(local_28, uVar2);
    (**(code * *)(*plVar1 + 0x50))(plVar1, local_20);
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140114e50(undefined8 param_1) {
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    uint local_res10[6];
    undefined4 local_18;
    undefined4 uStack20;
    undefined4 uStack16;
    undefined4 uStack12;

    lVar2 = FUN_140114a30();
    if (lVar2 != 0) {
        local_18 = _DAT_140c777d0;
        uStack20 = uRam0000000140c777d4;
        uStack16 = uRam0000000140c777d8;
        uStack12 = uRam0000000140c777dc;
        FUN_140143880(local_res10, param_1, 2, &local_18);
        lVar3 = DAT_140c63678;
        if ((uint * )(lVar2 + 0x4ec) != local_res10) {
            FUN_1401429a0(DAT_140c63678);
            lVar3 = DAT_140c63678;
            *(uint * )(lVar2 + 0x4ec) = local_res10[0];
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


undefined8 FUN_140114f00(longlong param_1) {
    int iVar1;
    undefined8 uVar2;
    undefined8 *puVar3;
    int iVar4;

    uVar2 = FUN_140114a30();
    puVar3 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x10);
    if (((puVar3 < *(undefined8 * *)(param_1 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
        (0 < *(int *) (*(longlong * )(param_1 + 0x18) + 0x18))) {
        iVar1 = FUN_140056d60(param_1, 2);
    } else {
        iVar1 = 0x7c00;
    }
    iVar4 = 0x7c00;
    if (iVar1 < 0x7c00) {
        iVar4 = iVar1;
    }
    FUN_14010f000(uVar2, (longlong) iVar4);
    return 0;
}


undefined8 FUN_140114f80(longlong param_1) {
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_140114a30();
    pdVar2 = *(double **) (param_1 + 0x10);
    iVar1 = *(int *) (lVar3 + 0x420);
    *(undefined4 * )(pdVar2 + 1) = 3;
    *pdVar2 = (double) iVar1;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_140114fc0(longlong param_1) {
    longlong *plVar1;
    undefined8 uVar2;
    longlong lVar3;
    longlong lVar4;
    undefined local_28[8];
    longlong local_20;

    plVar1 = (longlong *) FUN_140114a30();
    uVar2 = (**(code * *)(*plVar1 + 0x70))(plVar1);
    lVar3 = FUN_14018f0e0(local_28, uVar2);
    if (*(longlong * )(lVar3 + 8) == 0) {
        *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    } else {
        lVar4 = -1;
        do {
            lVar4 = lVar4 + 1;
        } while (*(char *) (*(longlong * )(lVar3 + 8) + lVar4) != '\0');
        FUN_140058710(param_1);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return 1;
}


undefined8 FUN_140115050(void) {
    undefined8 uVar1;

    uVar1 = FUN_140114a30();
    FUN_140111d60(uVar1);
    return 0;
}


undefined8 FUN_140115070(undefined8 param_1) {
    undefined8 uVar1;
    undefined8 uVar2;
    undefined local_28[8];
    longlong local_20;
    longlong local_18;

    uVar1 = FUN_140114a30();
    uVar2 = FUN_140056bb0(param_1, 2);
    FUN_14018f2d0(local_28, uVar2);
    FUN_14010ea70(uVar1, local_20, local_18 - local_20 >> 1);
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return 0;
}


undefined8 FUN_1401150e0(longlong param_1) {
    undefined8 uVar1;
    undefined8 uVar2;
    undefined8 *puVar3;
    undefined local_28[8];
    longlong local_20;

    uVar1 = FUN_140114a30();
    puVar3 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x10);
    if (((puVar3 < *(undefined8 * *)(param_1 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
        (*(int *) (*(longlong * )(param_1 + 0x18) + 0x18) - 3U < 2)) {
        uVar2 = FUN_140056bb0(param_1, 2);
        FUN_14018f2d0(local_28, uVar2);
        FUN_140110ee0(uVar1, local_20);
        if (local_20 != 0) {
            FUN_14018b900(local_20, 0);
        }
    }
    return 0;
}


undefined8 FUN_1401152f0(void) {
    longlong lVar1;

    lVar1 = FUN_140114a30();
    FUN_140115f50(lVar1 + 0x508);
    *(undefined8 * )(lVar1 + 0x500) = 0;
    return 0;
}


undefined8 FUN_140115320(longlong param_1) {
    undefined8 *puVar1;
    longlong lVar2;
    int iVar3;
    longlong lVar4;
    ulonglong uVar5;
    undefined8 uVar6;
    undefined8 *puVar7;
    double *pdVar8;
    ulonglong uVar9;
    double *pdVar10;
    undefined8 *puVar11;
    double local_res10;
    double local_68;
    undefined4 local_60;
    undefined4 uStack92;
    longlong local_58;
    undefined **local_48;
    undefined4 local_40;
    longlong local_38;

    lVar4 = FUN_140114a30();
    pdVar8 = (double *) (*(longlong * )(param_1 + 0x18) + 0x10);
    pdVar10 = (double *) &DAT_140a12138;
    if (pdVar8 < *(double **) (param_1 + 0x10)) {
        pdVar10 = pdVar8;
    }
    if (*(int *) (pdVar10 + 1) == 3) {
        LAB_1401153ae:
        iVar3 = (int) *pdVar10;
    } else {
        if (*(int *) (pdVar10 + 1) == 4) {
            iVar3 = FUN_14005ac80((longlong) * pdVar10 + 0x20, &local_res10);
            if (iVar3 != 0) {
                local_60 = 3;
                pdVar10 = &local_68;
                local_68 = local_res10;
                goto LAB_1401153ae;
            }
        }
        iVar3 = 0;
    }
    uVar9 = (ulonglong) iVar3;
    uVar5 = (**(code * *)(**(longlong * *)(lVar4 + 0x438) + 0x48))();
    if (uVar5 < uVar9) {
        uVar9 = (**(code * *)(**(longlong * *)(lVar4 + 0x438) + 0x48))();
    }
    uVar6 = FUN_140056bb0(param_1, 3);
    FUN_14018f2d0(&local_68, uVar6);
    lVar2 = CONCAT44(uStack92, local_60);
    if (lVar2 != local_58) {
        local_40 = 0xfffffffe;
        local_48 = &PTR_FUN_140b56a08;
        local_38 = param_1;
        FUN_1400579e0(param_1);
        puVar1 = *(undefined8 * *)(local_38 + 0x10);
        puVar7 = (undefined8 * )(*(longlong * )(local_38 + 0x18) + 0x30);
        puVar11 = &DAT_140a12138;
        if (puVar7 < puVar1) {
            puVar11 = puVar7;
        }
        *puVar1 = *puVar11;
        *(undefined4 * )(puVar1 + 1) = *(undefined4 * )(puVar11 + 1);
        *(longlong * )(local_38 + 0x10) = *(longlong * )(local_38 + 0x10) + 0x10;
        local_40 = FUN_1400578c0(local_38);
        FUN_14010ed20(lVar4, uVar9, lVar2, local_58 - lVar2 >> 1, &local_48);
        local_48 = &PTR_FUN_140b56a08;
        if (local_38 != 0) {
            FUN_1400579e0();
        }
    }
    if (lVar2 != 0) {
        FUN_14018b900(lVar2, 0);
    }
    return 0;
}


undefined8 FUN_140115500(longlong param_1) {
    double *pdVar1;
    int iVar2;
    undefined8 uVar3;
    float *pfVar4;
    undefined8 *puVar5;
    int local_res8;
    int local_resc;
    float local_18;
    float fStack20;
    float fStack16;
    float fStack12;

    uVar3 = FUN_140114a30();
    puVar5 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x10);
    if (((puVar5 < *(undefined8 * *)(param_1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
        (*(int *) (*(longlong * )(param_1 + 0x18) + 0x18) == 5)) {
        FUN_1400f0a10(param_1, 2, &DAT_1409d3fcc, &local_18);
        FUN_1400f0a10(param_1, 2, &DAT_1409d4024, &fStack20);
    } else {
        pfVar4 = (float *) FUN_140056ab0(param_1, 2, "Vector2");
        local_18 = *pfVar4;
        fStack20 = pfVar4[1];
        fStack16 = pfVar4[2];
        fStack12 = pfVar4[3];
    }
    local_res8 = (int) local_18;
    local_resc = (int) fStack20;
    iVar2 = FUN_140112240(uVar3, &local_res8);
    pdVar1 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar1 + 1) = 3;
    *pdVar1 = (double) iVar2;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_1401155e0(longlong param_1) {
    int iVar1;
    int iVar2;
    undefined8 uVar3;
    undefined8 *puVar4;

    uVar3 = FUN_140114a30();
    puVar4 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x10);
    if (((puVar4 < *(undefined8 * *)(param_1 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
        (0 < *(int *) (*(longlong * )(param_1 + 0x18) + 0x18))) {
        iVar1 = FUN_140056d60(param_1, 2);
    } else {
        iVar1 = 0;
    }
    puVar4 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x20);
    if (((puVar4 < *(undefined8 * *)(param_1 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
        (0 < *(int *) (*(longlong * )(param_1 + 0x18) + 0x28))) {
        iVar2 = FUN_140056d60(param_1, 3);
    } else {
        iVar2 = 0x7c00;
    }
    FUN_14010ef50(uVar3, (longlong) iVar1, (longlong) iVar2);
    return 0;
}


void FUN_140115d60(longlong *param_1, ulonglong param_2) {
    longlong lVar1;
    longlong lVar2;

    if ((ulonglong) param_1[1] < param_2 || param_1[1] == param_2) {
        lVar2 = FUN_14018db00(*param_1, param_2, 0x18);
        if (*param_1 != lVar2) {
            FUN_1407db590(lVar2, *param_1, param_1[1] * 0x18);
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


longlong FUN_140115df0(longlong *param_1, longlong param_2) {
    longlong lVar1;
    undefined8 uVar2;
    longlong lVar3;
    undefined8 *puVar4;
    ulonglong uVar5;
    longlong lVar6;

    lVar1 = param_1[1];
    lVar3 = FUN_14018db00(*param_1, lVar1 + 1, 0x20);
    uVar5 = 0;
    lVar6 = lVar1 * 0x20 + lVar3;
    if (lVar6 != 0) {
        *(undefined8 * )(lVar6 + 8) = 0;
        *(undefined8 * )(lVar6 + 0x10) = 0;
        *(undefined8 * )(lVar6 + 0x18) = 0;
        *(undefined8 * )(lVar6 + 8) = *(undefined8 * )(param_2 + 8);
        *(undefined8 * )(param_2 + 8) = 0;
        uVar2 = *(undefined8 * )(lVar6 + 0x10);
        *(undefined8 * )(lVar6 + 0x10) = *(undefined8 * )(param_2 + 0x10);
        *(undefined8 * )(param_2 + 0x10) = uVar2;
        uVar2 = *(undefined8 * )(lVar6 + 0x18);
        *(undefined8 * )(lVar6 + 0x18) = *(undefined8 * )(param_2 + 0x18);
        *(undefined8 * )(param_2 + 0x18) = uVar2;
    }
    if (*param_1 != lVar3) {
        if (param_1[1] != 0) {
            puVar4 = (undefined8 * )(lVar3 + 0x10);
            do {
                if (puVar4 != (undefined8 * ) & DAT_00000010) {
                    lVar6 = *param_1 + (-0x10 - lVar3);
                    puVar4[-1] = 0;
                    *puVar4 = 0;
                    puVar4[1] = 0;
                    puVar4[-1] = *(undefined8 * )((longlong) puVar4 + lVar6 + 8);
                    *(undefined8 * )((longlong) puVar4 + lVar6 + 8) = 0;
                    uVar2 = *puVar4;
                    *puVar4 = *(undefined8 * )((longlong) puVar4 + lVar6 + 0x10);
                    *(undefined8 * )((longlong) puVar4 + lVar6 + 0x10) = uVar2;
                    uVar2 = puVar4[1];
                    puVar4[1] = *(undefined8 * )((longlong) puVar4 + lVar6 + 0x18);
                    *(undefined8 * )((longlong) puVar4 + lVar6 + 0x18) = uVar2;
                }
                lVar6 = *(longlong * )((longlong) puVar4 + *param_1 + (-0x10 - lVar3) + 8);
                if (lVar6 != 0) {
                    FUN_14018b900(lVar6, 0);
                }
                uVar5 = uVar5 + 1;
                puVar4 = puVar4 + 4;
            } while (uVar5 < (ulonglong) param_1[1]);
        }
        lVar6 = *param_1;
        if (lVar6 != 0) {
            (**(code * *)(*(longlong * )(lVar6 + -0x10) + 8))(lVar6 + -0x10);
        }
        *param_1 = lVar3;
    }
    param_1[1] = lVar1 + 1;
    return lVar1;
}


void FUN_140115f50(longlong *param_1) {
    longlong lVar1;
    ulonglong uVar2;
    longlong lVar3;

    uVar2 = 0;
    if (param_1[1] != 0) {
        lVar3 = 0;
        do {
            lVar1 = *(longlong * )(lVar3 + 8 + *param_1);
            if (lVar1 != 0) {
                FUN_14018b900(lVar1, 0);
            }
            uVar2 = uVar2 + 1;
            lVar3 = lVar3 + 0x20;
        } while (uVar2 < (ulonglong) param_1[1]);
        param_1[1] = 0;
        return;
    }
    param_1[1] = 0;
    return;
}


undefined8 *FUN_140115fc0(undefined8 *param_1, ulonglong param_2) {
    *param_1 = &PTR_LAB_140b56f40;
    FUN_140140120();
    FUN_1400c6030(param_1);
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_140116010(longlong param_1) {
    float fVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    longlong lVar6;
    float *pfVar7;
    byte bVar8;
    undefined4 uVar9;
    int iVar10;
    int local_res8;
    undefined local_38[16];

    bVar8 = (byte) * (undefined8 * )(param_1 + 0x290);
    if (((bVar8 >> 2 & 1) != 0) || ((bVar8 >> 1 & 1) != 0)) {
        lVar6 = *(longlong * )(param_1 + 0x1d8);
        uVar9 = 0;
        if (lVar6 == 0) {
            local_res8 = 0;
            iVar10 = 0;
        } else {
            local_res8 = *(int *) (lVar6 + 0x514);
            iVar10 = *(int *) (lVar6 + 0x510);
        }
        iVar2 = *(int *) (param_1 + 0x2cc);
        iVar3 = *(int *) (param_1 + 0x2d0);
        iVar4 = *(int *) (param_1 + 0x2d4);
        iVar5 = *(int *) (param_1 + 0x2d8);
        pfVar7 = (float *) FUN_140141910(param_1 + 0x400, local_38);
        fVar1 = pfVar7[1];
        FUN_1400caf40(param_1, (int) *pfVar7 + (iVar2 - iVar4), iVar4 - iVar2, 0x10);
        FUN_1400cad80(param_1, (int) fVar1 + (iVar3 - iVar5), iVar5 - iVar3, 0x10);
        if (iVar10 <= local_res8) {
            if (*(longlong * )(param_1 + 0x1d8) != 0) {
                uVar9 = *(undefined4 * )(*(longlong * )(param_1 + 0x1d8) + 0x510);
            }
            FUN_1400cac30(param_1, uVar9);
        }
    }
    return;
}


void FUN_140116150(longlong param_1, undefined8 param_2) {
    undefined8 *puVar1;
    longlong local_res8;

    if (*(longlong * *)(param_1 + 0x2b0) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x2b0) + 8))();
        *(undefined8 * )(param_1 + 0x2b0) = 0;
    }
    FUN_140141100(param_1 + 0x400);
    puVar1 = (undefined8 *) FUN_14018d540(&local_res8, L"<MLDoc>%s</MLDoc>", param_2);
    FUN_1401a7a60(param_1 + 0x418, *puVar1, 0xffffffffffffffff);
    if (local_res8 != 0) {
        (**(code * *)(*(longlong * )(local_res8 + -0x10) + 8))(local_res8 + -0x10);
    }
    FUN_1401411c0(param_1 + 0x400);
    FUN_140116010(param_1);
    return;
}


void FUN_140116200(longlong param_1, longlong *param_2) {
    longlong *plVar1;

    plVar1 = (longlong * )(param_1 + 0x418);
    if (plVar1 != param_2) {
        (**(code * *)(*plVar1 + 0x78))(plVar1, 0);
        FUN_1401a7460(plVar1, param_2);
    }
    FUN_1401411c0(param_1 + 0x400);
    FUN_140116010(param_1);
    return;
}


void FUN_140116270(longlong param_1) {
    longlong *plVar1;

    plVar1 = *(longlong * *)(param_1 + 0x2b0);
    if (plVar1 != (longlong *) 0x0) {
        (**(code * *)(*plVar1 + 0x28))(plVar1, *(undefined8 * )(*(longlong * )(param_1 + 0x2b8) + 0x60));
    }
    FUN_1401411c0(param_1 + 0x400);
    FUN_140116010(param_1);
    return;
}



// WARNING: Removing unreachable block (ram,0x000140116488)

void FUN_1401163b0(longlong param_1, undefined8 param_2, undefined8 param_3) {
    longlong *plVar1;
    undefined auVar2[16];
    longlong lVar3;
    undefined8 *puVar4;
    longlong *plVar5;
    undefined8 uVar6;
    longlong lVar7;
    int iVar8;
    int iVar9;
    longlong lVar10;
    longlong lVar11;

    lVar7 = param_1 + 0x418;
    iVar9 = 0;
    puVar4 = *(undefined8 * *)(param_1 + 0x448);
    joined_r0x0001401163e8:
    if (puVar4 == (undefined8 *) 0x0) {
        plVar5 = (longlong * )(param_1 + 0x498);
        puVar4 = (undefined8 * )(**(code * *)(*plVar5 + 0x10))(plVar5);
        if (puVar4 == (undefined8 *) 0x0) {
            puVar4 = (undefined8 *) 0x0;
        } else {
            puVar4[1] = lVar7;
            puVar4[2] = 0;
            *(undefined4 * )(puVar4 + 3) = 0;
            puVar4[4] = 0;
            puVar4[5] = 0;
            puVar4[6] = 0;
            puVar4[7] = 0;
            puVar4[8] = 0;
            puVar4[9] = 0;
            puVar4[10] = 0;
            *puVar4 = &PTR_FUN_140b5eba0;
            *(undefined4 * )(puVar4 + 0xb) = 0;
            puVar4[0xc] = 0;
        }
        puVar4[10] = plVar5;
        FUN_1401a4c50(puVar4 + 3, L"MLDoc");
        if (puVar4[1] == *(longlong * )(param_1 + 0x420)) {
            FUN_1401a6150();
            if (*(longlong * )(param_1 + 0x450) == 0) {
                *(undefined8 * *)(param_1 + 0x450) = puVar4;
                *(undefined8 * *)(param_1 + 0x448) = puVar4;
                puVar4[8] = 0;
                puVar4[9] = 0;
            } else {
                *(undefined8 * *)(*(longlong * )(param_1 + 0x450) + 0x48) = puVar4;
                puVar4[8] = *(undefined8 * )(param_1 + 0x450);
                *(undefined8 * *)(param_1 + 0x450) = puVar4;
                puVar4[9] = 0;
            }
            puVar4[2] = lVar7;
        }
    } else {
        lVar3 = (**(code * *) * puVar4)(puVar4);
        if (lVar3 == 0) goto code_r0x0001401163fd;
        for (puVar4 = *(undefined8 * *)(lVar3 + 0x30); puVar4 != (undefined8 *) 0x0;
             puVar4 = (undefined8 *) puVar4[9]) {
            lVar3 = (**(code * *) * puVar4)(puVar4);
            iVar8 = 0;
            if (lVar3 != 0) {
                do {
                    puVar4 = *(undefined8 * *)(lVar3 + 0x48);
                    iVar9 = iVar8 + 1;
                    while (true) {
                        if (puVar4 == (undefined8 *) 0x0) goto LAB_14011651c;
                        lVar3 = (**(code * *) * puVar4)(puVar4);
                        iVar8 = iVar9;
                        if (lVar3 != 0) break;
                        puVar4 = (undefined8 *) puVar4[9];
                    }
                } while (true);
            }
        }
    }
    LAB_14011651c:
    for (puVar4 = *(undefined8 * *)(param_1 + 0x448); puVar4 != (undefined8 *) 0x0;
         puVar4 = (undefined8 *) puVar4[9]) {
        lVar3 = (**(code * *) * puVar4)(puVar4);
        if (lVar3 != 0) goto LAB_140116540;
    }
    lVar3 = 0;
    LAB_140116540:
    if (499 < iVar9) {
        for (puVar4 = *(undefined8 * *)(lVar3 + 0x30); puVar4 != (undefined8 *) 0x0;
             puVar4 = (undefined8 *) puVar4[9]) {
            plVar5 = (longlong * )(**(code * *) * puVar4)(puVar4);
            if (plVar5 != (longlong *) 0x0) {
                plVar1 = (longlong *) plVar5[10];
                (**(code * *)(*plVar5 + 0x78))(plVar5, 0);
                (**(code * *)(*plVar1 + 0x18))(plVar1, plVar5);
                break;
            }
        }
    }
    plVar5 = (longlong * )(param_1 + 0x498);
    puVar4 = (undefined8 * )(**(code * *)(*plVar5 + 0x10))(plVar5);
    if (puVar4 == (undefined8 *) 0x0) {
        puVar4 = (undefined8 *) 0x0;
    } else {
        puVar4[1] = lVar7;
        puVar4[2] = 0;
        *(undefined4 * )(puVar4 + 3) = 0;
        puVar4[4] = 0;
        puVar4[5] = 0;
        puVar4[6] = 0;
        puVar4[7] = 0;
        puVar4[8] = 0;
        puVar4[9] = 0;
        puVar4[10] = 0;
        *puVar4 = &PTR_FUN_140b5eba0;
        *(undefined4 * )(puVar4 + 0xb) = 0;
        puVar4[0xc] = 0;
    }
    puVar4[10] = plVar5;
    if ((*(uint * )(puVar4 + 3) & 0x200) != 0) {
        FUN_14018b900(puVar4[4], 0);
    }
    *(undefined4 * )(puVar4 + 3) = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    lVar10 = 0;
    do {
        lVar11 = lVar10;
        lVar10 = lVar11 + 1;
    } while ((&DAT_1409db474)[lVar10] != 0);
    auVar2 = ZEXT816(2) * ZEXT816(lVar11 + 2);
    uVar6 = SUB168(auVar2, 0);
    if (SUB168(auVar2 >> 0x40, 0) != 0) {
        uVar6 = 0xffffffffffffffff;
    }
    uVar6 = FUN_14018b280(uVar6, 0);
    puVar4[4] = uVar6;
    FUN_1407db590(uVar6, &DAT_1409db474, lVar10 * 2 + 2);
    *(undefined4 * )(puVar4 + 3) = 0x200;
    puVar4[5] = puVar4[4] + lVar10 * 2;
    lVar10 = FUN_1401a6c70(puVar4, L"TextColor");
    FUN_1401a4c50(lVar10 + 0x20, param_2);
    lVar10 = FUN_1401a6c70(puVar4, &DAT_140a31aa8);
    FUN_1401a4c50(lVar10 + 0x20, param_3);
    lVar7 = FUN_1401a7880(lVar7);
    if (*(longlong * )(lVar7 + 8) == puVar4[1]) {
        lVar10 = *(longlong * )(lVar7 + 0x10);
        if (lVar10 == 0) {
            (**(code * *)(**(longlong * *)(lVar7 + 0x50) + 0x20))();
        } else {
            if (lVar7 == *(longlong * )(lVar10 + 0x30)) {
                *(undefined8 * )(lVar10 + 0x30) = *(undefined8 * )(*(longlong * )(lVar10 + 0x30) + 0x48);
            }
            if (lVar7 == *(longlong * )(lVar10 + 0x38)) {
                *(undefined8 * )(lVar10 + 0x38) = *(undefined8 * )(*(longlong * )(lVar10 + 0x38) + 0x40);
            }
            if (*(longlong * )(lVar7 + 0x40) != 0) {
                *(undefined8 * )(*(longlong * )(lVar7 + 0x40) + 0x48) = *(undefined8 * )(lVar7 + 0x48);
            }
            if (*(longlong * )(lVar7 + 0x48) != 0) {
                *(undefined8 * )(*(longlong * )(lVar7 + 0x48) + 0x40) = *(undefined8 * )(lVar7 + 0x40);
            }
            *(undefined8 * )(lVar7 + 0x10) = 0;
        }
        if (puVar4[7] == 0) {
            puVar4[7] = lVar7;
            puVar4[6] = lVar7;
            *(undefined8 * )(lVar7 + 0x40) = 0;
            *(undefined8 * )(lVar7 + 0x48) = 0;
            *(undefined8 * *)(lVar7 + 0x10) = puVar4;
        } else {
            *(longlong * )(puVar4[7] + 0x48) = lVar7;
            *(undefined8 * )(lVar7 + 0x40) = puVar4[7];
            puVar4[7] = lVar7;
            *(undefined8 * )(lVar7 + 0x48) = 0;
            *(undefined8 * *)(lVar7 + 0x10) = puVar4;
        }
    }
    if (puVar4[1] == *(longlong * )(lVar3 + 8)) {
        lVar7 = puVar4[2];
        if (lVar7 == 0) {
            (**(code * *)(*(longlong *) puVar4[10] + 0x20))();
        } else {
            if (puVar4 == *(undefined8 * *)(lVar7 + 0x30)) {
                *(undefined8 * )(lVar7 + 0x30) = (*(undefined8 * *)(lVar7 + 0x30))[9];
            }
            if (puVar4 == *(undefined8 * *)(lVar7 + 0x38)) {
                *(undefined8 * )(lVar7 + 0x38) = (*(undefined8 * *)(lVar7 + 0x38))[8];
            }
            if (puVar4[8] != 0) {
                *(undefined8 * )(puVar4[8] + 0x48) = puVar4[9];
            }
            if (puVar4[9] != 0) {
                *(undefined8 * )(puVar4[9] + 0x40) = puVar4[8];
            }
            puVar4[2] = 0;
        }
        if (*(longlong * )(lVar3 + 0x38) == 0) {
            *(undefined8 * *)(lVar3 + 0x38) = puVar4;
            *(undefined8 * *)(lVar3 + 0x30) = puVar4;
            puVar4[8] = 0;
        } else {
            *(undefined8 * *)(*(longlong * )(lVar3 + 0x38) + 0x48) = puVar4;
            puVar4[8] = *(undefined8 * )(lVar3 + 0x38);
            *(undefined8 * *)(lVar3 + 0x38) = puVar4;
        }
        puVar4[9] = 0;
        puVar4[2] = lVar3;
    }
    FUN_140141330(param_1 + 0x400);
    FUN_140116010(param_1);
    return;
    code_r0x0001401163fd:
    puVar4 = (undefined8 *) puVar4[9];
    goto joined_r0x0001401163e8;
}


void FUN_140116830(longlong param_1, int *param_2, int param_3) {
    float fVar1;
    float *pfVar2;
    undefined auStack264[48];
    undefined4 local_d8;
    undefined4 uStack212;
    undefined4 uStack208;
    undefined4 uStack204;
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
    int iStack148;
    undefined4 uStack144;
    int iStack140;
    uint local_88;
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
    undefined4 uStack64;
    undefined4 uStack60;
    undefined4 local_38;
    int iStack52;
    undefined4 uStack48;
    int iStack44;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack264;
    pfVar2 = (float *) FUN_140141910(param_1 + 0x400);
    *param_2 = (int) *pfVar2;
    fVar1 = pfVar2[1];
    param_2[1] = (int) fVar1 + param_3;
    local_68 = *(undefined4 * )(param_1 + 0x50);
    uStack100 = *(undefined4 * )(param_1 + 0x54);
    uStack96 = *(undefined4 * )(param_1 + 0x58);
    uStack92 = *(undefined4 * )(param_1 + 0x5c);
    local_b8 = *(undefined4 * )(param_1 + 0x60);
    uStack180 = *(undefined4 * )(param_1 + 100);
    uStack176 = *(undefined4 * )(param_1 + 0x68);
    uStack172 = *(undefined4 * )(param_1 + 0x6c);
    local_d8 = *(undefined4 * )(param_1 + 0x40);
    uStack212 = *(undefined4 * )(param_1 + 0x44);
    uStack208 = *(undefined4 * )(param_1 + 0x48);
    uStack204 = *(undefined4 * )(param_1 + 0x4c);
    local_88 = *(uint * )(param_1 + 0x90) | 0x300;
    local_48 = *(undefined4 * )(param_1 + 0x70);
    uStack68 = *(undefined4 * )(param_1 + 0x74);
    uStack64 = *(undefined4 * )(param_1 + 0x78);
    uStack60 = *(undefined4 * )(param_1 + 0x7c);
    local_98 = *(undefined4 * )(param_1 + 0x80);
    iStack148 = *(int *) (param_1 + 0x84);
    uStack144 = *(undefined4 * )(param_1 + 0x88);
    local_c8 = *(undefined4 * )(param_1 + 0x50);
    uStack196 = *(undefined4 * )(param_1 + 0x54);
    uStack192 = *(undefined4 * )(param_1 + 0x58);
    uStack188 = *(undefined4 * )(param_1 + 0x5c);
    iStack140 = iStack148 + (int) fVar1 + param_3;
    local_a8 = *(undefined4 * )(param_1 + 0x70);
    uStack164 = *(undefined4 * )(param_1 + 0x74);
    uStack160 = *(undefined4 * )(param_1 + 0x78);
    uStack156 = *(undefined4 * )(param_1 + 0x7c);
    local_58 = local_b8;
    uStack84 = uStack180;
    uStack80 = uStack176;
    uStack76 = uStack172;
    local_38 = local_98;
    iStack52 = iStack148;
    uStack48 = uStack144;
    iStack44 = iStack140;
    FUN_1400cc680(param_1, &local_d8);
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack264);
    return;
}


void FUN_140116940(undefined8 param_1, float param_2, longlong param_3) {
    longlong *plVar1;
    char cVar2;
    ulonglong uVar3;
    float fVar4;
    undefined4 local_28[8];

    if (*(char *) (param_3 + 0x760) != '\0') {
        uVar3 = 0;
        local_28[0] = 0;
        if (*(char *) (param_3 + 0x738) == '\0') {
            if (*(longlong * )(param_3 + 0x730) != 0) {
                do {
                    plVar1 = *(longlong * *)(*(longlong * )(param_3 + 0x728) + uVar3 * 8);
                    cVar2 = (**(code * *)(*plVar1 + 0x48))(plVar1, local_28);
                    if (cVar2 == '\0') {
                        return;
                    }
                    uVar3 = uVar3 + 1;
                } while (uVar3 < *(ulonglong * )(param_3 + 0x730));
            }
            *(undefined * )(param_3 + 0x738) = 1;
        }
        fVar4 = param_2 * *(float *) (param_3 + 0x768) + *(float *) (param_3 + 0x764);
        *(float *) (param_3 + 0x764) = fVar4;
        if (*(float *) (param_3 + 0x73c) < fVar4) {
            *(float *) (param_3 + 0x764) = *(float *) (param_3 + 0x73c);
            *(undefined * )(param_3 + 0x760) = 0;
        }
    }
    return;
}


void FUN_140116a00(longlong param_1) {
    float *pfVar1;
    int iVar2;
    int iVar3;
    undefined local_28[16];
    undefined local_18[16];

    pfVar1 = (float *) FUN_140141910();
    iVar2 = 0;
    iVar3 = 0;
    if (*(longlong * )(param_1 + 0x1d8) != 0) {
        iVar3 = *(int *) (*(longlong * )(param_1 + 0x1d8) + 0x514);
    }
    if (*(longlong * )(param_1 + 0x1d0) != 0) {
        iVar2 = *(int *) (*(longlong * )(param_1 + 0x1d0) + 0x514);
    }
    local_28 = ZEXT816(CONCAT44((float) ((DAT_140c77764 + *(int *) (param_1 + 0x2d0)) - iVar3),
                                (float) ((DAT_140c77760 + *(int *) (param_1 + 0x2cc)) - iVar2)));
    local_18 = ZEXT816(CONCAT44((float) ((*(int *) (param_1 + 0x2d0) + (int) pfVar1[1]) - iVar3),
                                (float) (((int) *pfVar1 + *(int *) (param_1 + 0x2cc)) - iVar2)));
    FUN_140141820(param_1 + 0x400, local_28);
    return;
}


undefined8 FUN_140116b30(undefined8 param_1) {
    FUN_140141100();
    FUN_140116010(param_1);
    return 0;
}


void FUN_140116b70(longlong *param_1, int *param_2) {
    undefined8 uVar1;
    undefined local_18[16];

    local_18 = ZEXT816(CONCAT44((float) (param_2[1] - *(int *) (param_1 + 0x5a)),
                                (float) (*param_2 - *(int *) ((longlong) param_1 + 0x2cc))));
    uVar1 = FUN_140141a40(param_1 + 0x80, local_18);
    (**(code * *)(*param_1 + 0x1e8))(param_1, uVar1);
    FUN_1400d23b0(param_1, param_2);
    return;
}


longlong FUN_1401174a0(longlong param_1, short *param_2, short *param_3, short *param_4) {
    short sVar1;
    undefined2 *puVar2;
    longlong lVar3;
    longlong lVar4;

    lVar4 = 0;
    *(undefined8 * )(param_1 + 8) = 0;
    *(undefined8 * )(param_1 + 0x10) = 0;
    *(undefined8 * )(param_1 + 0x18) = 0;
    puVar2 = (undefined2 *) FUN_14018b280(0x10, 0);
    *(undefined2 * *)(param_1 + 8) = puVar2;
    *(undefined2 * *)(param_1 + 0x10) = puVar2;
    *(undefined2 * *)(param_1 + 0x18) = puVar2 + 8;
    if (puVar2 != (undefined2 *) 0x0) {
        *puVar2 = 0;
    }
    *(undefined8 * )(param_1 + 0x28) = 0;
    *(undefined8 * )(param_1 + 0x30) = 0;
    *(undefined8 * )(param_1 + 0x38) = 0;
    puVar2 = (undefined2 *) FUN_14018b280(0x10);
    *(undefined2 * *)(param_1 + 0x28) = puVar2;
    *(undefined2 * *)(param_1 + 0x30) = puVar2;
    *(undefined2 * *)(param_1 + 0x38) = puVar2 + 8;
    if (puVar2 != (undefined2 *) 0x0) {
        *puVar2 = 0;
    }
    *(undefined8 * )(param_1 + 0x48) = 0;
    *(undefined8 * )(param_1 + 0x50) = 0;
    *(undefined8 * )(param_1 + 0x58) = 0;
    puVar2 = (undefined2 *) FUN_14018b280(0x10);
    *(undefined2 * *)(param_1 + 0x48) = puVar2;
    *(undefined2 * *)(param_1 + 0x50) = puVar2;
    *(undefined2 * *)(param_1 + 0x58) = puVar2 + 8;
    if (puVar2 != (undefined2 *) 0x0) {
        *puVar2 = 0;
    }
    sVar1 = *param_2;
    lVar3 = lVar4;
    while (sVar1 != 0) {
        lVar3 = lVar3 + 1;
        sVar1 = param_2[lVar3];
    }
    FUN_14001c480(param_1, param_2, param_2 + lVar3);
    sVar1 = *param_3;
    lVar3 = lVar4;
    while (sVar1 != 0) {
        lVar3 = lVar3 + 1;
        sVar1 = param_3[lVar3];
    }
    FUN_14001c480(param_1 + 0x20, param_3, param_3 + lVar3);
    sVar1 = *param_4;
    while (sVar1 != 0) {
        lVar4 = lVar4 + 1;
        sVar1 = param_4[lVar4];
    }
    FUN_14001c480(param_1 + 0x40, param_4, param_4 + lVar4);
    return param_1;
}


longlong FUN_1401175e0(longlong param_1, longlong param_2) {
    *(undefined8 * )(param_1 + 8) = 0;
    *(undefined8 * )(param_1 + 0x10) = 0;
    *(undefined8 * )(param_1 + 0x18) = 0;
    FUN_14001c1b0(param_1, *(undefined8 * )(param_2 + 8), *(undefined8 * )(param_2 + 0x10));
    *(undefined8 * )(param_1 + 0x28) = 0;
    *(undefined8 * )(param_1 + 0x30) = 0;
    *(undefined8 * )(param_1 + 0x38) = 0;
    FUN_14001c1b0(param_1 + 0x20, *(undefined8 * )(param_2 + 0x28), *(undefined8 * )(param_2 + 0x30));
    *(undefined8 * )(param_1 + 0x48) = 0;
    *(undefined8 * )(param_1 + 0x50) = 0;
    *(undefined8 * )(param_1 + 0x58) = 0;
    FUN_14001c1b0(param_1 + 0x40, *(undefined8 * )(param_2 + 0x48), *(undefined8 * )(param_2 + 0x50));
    return param_1;
}


void FUN_140117660(undefined8 param_1, longlong param_2) {
    longlong lVar1;
    undefined8 local_18;
    undefined4 local_10;

    lVar1 = *(longlong * )(param_2 + 0x20);
    local_18 = FUN_140062650(param_2, "Apollo.MLWindow", 0xf);
    local_10 = 4;
    FUN_14005e8e0(param_2, lVar1 + 0xa0, &local_18, *(undefined8 * )(param_2 + 0x10));
    *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + 0x10;
    FUN_140058bf0(param_2, 0xfffffffe);
    return;
}



// WARNING: Removing unreachable block (ram,0x000140117a0f)

void FUN_1401176d0(longlong param_1) {
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined8 uVar7;
    undefined8 *puVar8;
    ulonglong uVar9;
    ulonglong *puVar10;
    undefined8 unaff_RBX;
    longlong lVar11;
    undefined8 unaff_RBP;
    uint uVar12;
    longlong lVar14;
    ulonglong uVar15;
    uint uVar16;
    undefined8 unaff_R14;
    code *pcStackX8;
    longlong alStackX16[3];
    undefined8 uStack40;
    ulonglong uVar13;
    ulonglong uVar17;

    uStack40 = 0x1401176e1;
    lVar4 = FUN_1407f0f60();
    lVar4 = -lVar4;
    *(ulonglong * )(&stack0x00004010 + lVar4) =
            DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffe0 + lVar4);
    lVar2 = *(longlong * )(param_1 + 400);
    *(undefined8 * )(&stack0x00004058 + lVar4) = unaff_RBX;
    *(undefined8 * )(&stack0x00004020 + lVar4) = unaff_R14;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140117722;
    FUN_1407e4830((longlong) alStackX16 + lVar4);
    uVar15 = 0;
    uVar9 = uVar15;
    uVar13 = uVar15;
    uVar17 = uVar15;
    do {
        uVar12 = (int) uVar13 + 1;
        uVar13 = (ulonglong) uVar12;
        uVar16 = (int) uVar17 + 1;
        uVar17 = (ulonglong) uVar16;
        *(undefined8 * )((longlong) alStackX16 + uVar9 + lVar4) =
                *(undefined8 * )((longlong) & PTR_DAT_140c56a80 + uVar9);
        puVar8 = (undefined8 * )((longlong) & PTR_FUN_140c56a88 + uVar9);
        uVar9 = uVar9 + 0x10;
        *(undefined8 * )((longlong) alStackX16 + uVar9 + lVar4 + -8) = *puVar8;
    } while (uVar12 < 0x97);
    lVar14 = (longlong) & PTR_s_GetContentSize_140c57520 +
                          ((longlong)(int)
    uVar16 * -0x10 - ((longlong) alStackX16 + lVar4));
    puVar8 = (undefined8 * )((longlong) alStackX16 + (longlong)(int)
    uVar16 * 0x10 + lVar4);
    uVar9 = uVar15;
    do {
        uVar12 = (int) uVar9 + 1;
        uVar9 = (ulonglong) uVar12;
        *puVar8 = *(undefined8 * )(lVar14 + (longlong) puVar8);
        puVar8[1] = *(undefined8 * )(lVar14 + -8 + (longlong)(puVar8 + 2));
        puVar8 = puVar8 + 2;
    } while (uVar12 < 8);
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x1401177bf;
    FUN_1400569b0(lVar2, "Apollo.MLWindow");
    puVar8 = *(undefined8 * *)(lVar2 + 0x10);
    iVar1 = *(int *) (puVar8 + -1);
    if (iVar1 == 2) {
        LAB_1401177e1:
        if (*(int *) (puVar8 + -1) == 2) {
            LAB_1401177fd:
            uVar9 = puVar8[-2];
        } else if (*(int *) (puVar8 + -1) == 7) {
            uVar9 = puVar8[-2] + 0x30;
        } else {
            uVar9 = 0;
        }
    } else {
        if ((iVar1 == 5) || (iVar1 == 6)) goto LAB_1401177fd;
        if (iVar1 == 7) goto LAB_1401177e1;
        uVar9 = uVar15;
        if (iVar1 == 8) goto LAB_1401177fd;
    }
    *puVar8 = puVar8[-2];
    *(undefined4 * )(puVar8 + 1) = *(undefined4 * )(puVar8 + -1);
    *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
    lVar14 = *(longlong * )(lVar2 + 0x10);
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14011782c;
    uVar5 = FUN_140062650(lVar2, "__index", 7);
    lVar11 = *(longlong * )(lVar2 + 0x10);
    *(undefined8 * )((longlong) alStackX16 + lVar4 + -0x10) = uVar5;
    *(undefined4 * )((longlong) & pcStackX8 + lVar4) = 4;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140117852;
    FUN_14005ea50(lVar2, lVar14 + -0x20, (longlong) alStackX16 + lVar4 + -0x10, lVar11 + -0x10);
    *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + -0x10;
    lVar11 = *(longlong * )((longlong) alStackX16 + lVar4);
    lVar6 = *(longlong * )(lVar2 + 0x10);
    lVar14 = (longlong) alStackX16 + lVar4;
    if (lVar11 != 0) {
        *(undefined8 * )(&stack0x00004060 + lVar4) = unaff_RBP;
        do {
            uVar5 = *(undefined8 * )(lVar14 + 8);
            if (*(ulonglong * )(*(longlong * )(lVar2 + 0x20) + 0x70) <=
                *(ulonglong * )(*(longlong * )(lVar2 + 0x20) + 0x78)) {
                *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14011789a;
                FUN_14005e2c0(lVar2);
            }
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x1401178bf;
            lVar6 = FUN_140060ab0(lVar2, 0);
            *(undefined8 * )(lVar6 + 0x20) = uVar5;
            plVar3 = *(longlong * *)(lVar2 + 0x10);
            *plVar3 = lVar6;
            *(undefined4 * )(plVar3 + 1) = 6;
            *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x1401178e3;
            uVar5 = FUN_1400580e0(lVar2, 0xfffffffe);
            lVar6 = -1;
            do {
                lVar6 = lVar6 + 1;
            } while (*(char *) (lVar11 + lVar6) != '\0');
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140117904;
            uVar7 = FUN_140062650(lVar2, lVar11);
            lVar11 = *(longlong * )(lVar2 + 0x10);
            *(undefined8 * )((longlong) alStackX16 + lVar4 + -0x10) = uVar7;
            *(undefined4 * )((longlong) & pcStackX8 + lVar4) = 4;
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140117929;
            FUN_14005ea50(lVar2, uVar5, (longlong) alStackX16 + lVar4 + -0x10, lVar11 + -0x10);
            *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + -0x10;
            lVar11 = *(longlong * )(lVar14 + 0x10);
            lVar6 = *(longlong * )(lVar2 + 0x10);
            lVar14 = lVar14 + 0x10;
        } while (lVar11 != 0);
    }
    lVar14 = *(longlong * )(lVar2 + 0x20);
    *(longlong * )(lVar2 + 0x10) = lVar6 + -0x10;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14011796c;
    uVar7 = FUN_140062650(lVar2, "Apollo.Window", 0xd);
    uVar5 = *(undefined8 * )(lVar2 + 0x10);
    *(undefined8 * )((longlong) alStackX16 + lVar4 + -0x10) = uVar7;
    *(undefined4 * )((longlong) & pcStackX8 + lVar4) = 4;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140117991;
    FUN_14005e8e0(lVar2, lVar14 + 0xa0, (longlong) alStackX16 + lVar4 + -0x10, uVar5);
    *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
    lVar14 = *(longlong * )(lVar2 + 0x10);
    iVar1 = *(int *) (lVar14 + -8);
    puVar10 = (ulonglong * )(lVar14 + -0x10);
    if (iVar1 == 2) {
        LAB_1401179cc:
        if (*(int *) (lVar14 + -8) != 2) {
            if (*(int *) (lVar14 + -8) == 7) {
                uVar15 = *puVar10 + 0x30;
            }
            goto LAB_1401179e5;
        }
    } else if ((iVar1 != 5) && (iVar1 != 6)) {
        if (iVar1 == 7) goto LAB_1401179cc;
        if (iVar1 != 8) goto LAB_1401179e5;
    }
    uVar15 = *puVar10;
    LAB_1401179e5:
    *(ulonglong * *)(lVar2 + 0x10) = puVar10;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x1401179f4;
    FUN_1400ed720(param_1, uVar9, uVar15);
    *(undefined * *)((longlong) alStackX16 + lVar4 + -0x10) = &LAB_140117f20;
    *(code * *)((longlong) & pcStackX8 + lVar4) = FUN_140001b30;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140117a2b;
    FUN_1400f85d0(param_1 + 0xa80, L"MLWindow", (longlong) alStackX16 + lVar4 + -0x10);
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140117a3b;
    FUN_1407db4f0(*(ulonglong * )(&stack0x00004010 + lVar4) ^
                  (ulonglong)(&stack0xffffffffffffffe0 + lVar4));
    return;
}


longlong FUN_140117a50(undefined8 param_1) {
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    char *pcVar4;

    lVar1 = FUN_1400d66a0(param_1, 1);
    if (lVar1 == 0) {
        puVar2 = (undefined8 *) FUN_1400580e0(param_1, 1);
        if ((puVar2 == &DAT_140a12138) || (*(int *) (puVar2 + 1) == -1)) {
            pcVar4 = s_no_value_140c1dc88;
        } else {
            pcVar4 = (&PTR_DAT_140a123b0)[*(int *) (puVar2 + 1)];
        }
        uVar3 = FUN_140058780(param_1, s__s_expected__got__s_140c1db70, "MLWindow", pcVar4);
        FUN_140056570(param_1, 1, uVar3);
    }
    return lVar1;
}


undefined8 FUN_140117ae0(undefined8 param_1) {
    longlong *plVar1;
    undefined8 uVar2;
    longlong lVar3;
    undefined local_28[8];
    longlong local_20;

    plVar1 = (longlong *) FUN_140117a50();
    uVar2 = FUN_140056bb0(param_1, 2);
    lVar3 = FUN_14018f2d0(local_28, uVar2);
    (**(code * *)(*plVar1 + 0x58))(plVar1, *(undefined8 * )(lVar3 + 8));
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return 0;
}


undefined8 FUN_140117b40(undefined8 param_1) {
    undefined8 uVar1;
    longlong *plVar2;
    undefined8 uVar3;

    uVar1 = FUN_140117a50();
    plVar2 = (longlong *) FUN_14012aaf0(param_1, 2);
    uVar3 = (**(code * *)(*plVar2 + 0x10))(plVar2);
    FUN_140116200(uVar1, uVar3);
    return 0;
}


undefined8 FUN_140117b90(longlong param_1) {
    float fVar1;
    float fVar2;
    double *pdVar3;
    longlong lVar4;
    float *pfVar5;

    lVar4 = FUN_140117a50();
    pfVar5 = (float *) FUN_140141910(lVar4 + 0x400);
    fVar1 = *pfVar5;
    fVar2 = pfVar5[1];
    pdVar3 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar3 + 1) = 3;
    *pdVar3 = (double) (int) fVar1;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    pdVar3 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar3 + 1) = 3;
    *pdVar3 = (double) (int) fVar2;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 2;
}


undefined8 FUN_140117c00(longlong param_1) {
    double *pdVar1;
    undefined4 uVar2;
    longlong lVar3;
    undefined8 *puVar4;
    int local_res10;
    int local_res14;

    lVar3 = FUN_140117a50();
    if (lVar3 == 0) {
        return 0;
    }
    puVar4 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x10);
    if (((puVar4 < *(undefined8 * *)(param_1 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
        (0 < *(int *) (*(longlong * )(param_1 + 0x18) + 0x18))) {
        uVar2 = FUN_140056d60(param_1, 2);
    } else {
        uVar2 = 0;
    }
    FUN_140116830(lVar3, &local_res10, uVar2);
    pdVar1 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar1 + 1) = 3;
    *pdVar1 = (double) local_res10;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    pdVar1 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar1 + 1) = 3;
    *pdVar1 = (double) local_res14;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 2;
}


undefined8 FUN_140117cc0(longlong param_1) {
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    double *pdVar4;
    longlong *plVar5;
    double *pdVar6;
    double dVar7;
    float fVar8;
    double local_res10;
    double local_28;
    undefined4 local_20;

    lVar2 = FUN_140117a50();
    if (lVar2 == 0) {
        return 0;
    }
    fVar8 = 50.0;
    plVar3 = (longlong * )(*(longlong * )(param_1 + 0x18) + 0x10);
    plVar5 = &DAT_140a12138;
    if (plVar3 < *(longlong * *)(param_1 + 0x10)) {
        plVar5 = plVar3;
    }
    if ((*(int *) (plVar5 + 1) != 3) &&
        ((*(int *) (plVar5 + 1) != 4 || (iVar1 = FUN_14005ac80(*plVar5 + 0x20, &local_res10), iVar1 == 0)
        )))
        goto LAB_140117d7f;
    pdVar4 = (double *) (*(longlong * )(param_1 + 0x18) + 0x10);
    pdVar6 = (double *) &DAT_140a12138;
    if (pdVar4 < *(double **) (param_1 + 0x10)) {
        pdVar6 = pdVar4;
    }
    if (*(int *) (pdVar6 + 1) == 3) {
        LAB_140117d77:
        dVar7 = *pdVar6;
    } else {
        if ((*(int *) (pdVar6 + 1) == 4) &&
            (iVar1 = FUN_14005ac80((longlong) * pdVar6 + 0x20, &local_res10), iVar1 != 0)) {
            local_20 = 3;
            pdVar6 = &local_28;
            local_28 = local_res10;
            goto LAB_140117d77;
        }
        dVar7 = 0.0;
    }
    fVar8 = (float) dVar7;
    LAB_140117d7f:
    *(float *) (lVar2 + 0x768) = fVar8;
    *(undefined4 * )(lVar2 + 0x764) = 0;
    *(undefined2 * )(lVar2 + 0x760) = 1;
    return 0;
}


undefined8 FUN_140117dc0(longlong param_1) {
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;

    lVar1 = FUN_140117a50();
    if (lVar1 != 0) {
        puVar2 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x10);
        if (((puVar2 < *(undefined8 * *)(param_1 + 0x10)) && (puVar2 != &DAT_140a12138)) &&
            (*(int *) (*(longlong * )(param_1 + 0x18) + 0x18) == 1)) {
            puVar3 = &DAT_140a12138;
            if (puVar2 < *(undefined8 * *)(param_1 + 0x10)) {
                puVar3 = puVar2;
            }
            if ((*(int *) (puVar3 + 1) != 0) && ((*(int *) (puVar3 + 1) != 1 || (*(int *) puVar3 != 0)))) {
                *(undefined * )(lVar1 + 0x761) = 1;
                return 0;
            }
            *(undefined * )(lVar1 + 0x761) = 0;
        }
    }
    return 0;
}


undefined8 FUN_140117e60(longlong param_1) {
    longlong *plVar1;
    uint *puVar2;
    byte bVar3;
    char cVar4;
    longlong lVar5;
    ulonglong uVar6;
    undefined4 local_18[4];

    lVar5 = FUN_140117a50();
    if (lVar5 == 0) {
        return 0;
    }
    uVar6 = 0;
    local_18[0] = 0;
    if (*(char *) (lVar5 + 0x738) == '\0') {
        if (*(longlong * )(lVar5 + 0x730) != 0) {
            do {
                plVar1 = *(longlong * *)(*(longlong * )(lVar5 + 0x728) + uVar6 * 8);
                cVar4 = (**(code * *)(*plVar1 + 0x48))(plVar1, local_18);
                if (cVar4 == '\0') {
                    bVar3 = 0;
                    goto LAB_140117ee4;
                }
                uVar6 = uVar6 + 1;
            } while (uVar6 < *(ulonglong * )(lVar5 + 0x730));
        }
        *(undefined * )(lVar5 + 0x738) = 1;
        bVar3 = 1;
    } else {
        bVar3 = 1;
    }
    LAB_140117ee4:
    puVar2 = *(uint * *)(param_1 + 0x10);
    puVar2[2] = 1;
    *puVar2 = (uint) bVar3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


ulonglong FUN_140118070(longlong param_1) {
    longlong lVar1;
    short *psVar2;
    longlong lVar3;

    psVar2 = &DAT_140b7b704;
    if (*(short **) (param_1 + 0x20) != (short *) 0x0) {
        psVar2 = *(short **) (param_1 + 0x20);
    }
    if (*psVar2 != 0) {
        lVar3 = *(longlong * )(param_1 + 0x40) - *(longlong * )(param_1 + 0x38);
        lVar1 = lVar3 >> 0x3f;
        psVar2 = (short *) -lVar1;
        if (((lVar3 / 0x130 + lVar1 != lVar1) && (0.0 < *(float *) (param_1 + 0x70))) ||
            (psVar2 = (short *) (*(longlong * )(param_1 + 0x60) - *(longlong * )(param_1 + 0x58) >> 3),
                    psVar2 != (short *) 0x0)) {
            return CONCAT71((int7)((ulonglong) psVar2 >> 8), 1);
        }
    }
    return (ulonglong) psVar2 & 0xffffffffffffff00;
}


void FUN_1401180d0(longlong param_1, char *param_2, char *param_3) {
    longlong *plVar1;
    char cVar2;
    longlong *plVar3;
    longlong *plVar4;
    undefined8 *puVar5;
    longlong lVar6;
    longlong lVar7;
    longlong *local_res10;

    if (((param_2 != (char *) 0x0) && (*param_2 != '\0')) && (param_3 != (char *) 0x0)) {
        lVar6 = 0;
        do {
            lVar7 = lVar6;
            lVar6 = lVar7 + 1;
        } while (param_2[lVar6] != '\0');
        plVar3 = (longlong *) FUN_14018b280(lVar7 + 0x12, 0);
        if (plVar3 != (longlong *) 0x0) {
            *plVar3 = (longlong) & PTR_LAB_140b55060;
            plVar3[1] = lVar6;
        }
        plVar1 = plVar3 + 2;
        FUN_1407db590(plVar1, param_2, lVar6);
        *(undefined * )(lVar6 + (longlong) plVar1) = 0;
        local_res10 = plVar1;
        plVar4 = (longlong *) FUN_140121c50(param_1 + 0x48, &local_res10);
        lVar6 = *plVar4;
        lVar7 = 0;
        cVar2 = *param_3;
        while (cVar2 != '\0') {
            lVar7 = lVar7 + 1;
            cVar2 = param_3[lVar7];
        }
        puVar5 = (undefined8 *) FUN_14018b280(lVar7 + 0x11, 0);
        if (puVar5 != (undefined8 *) 0x0) {
            *puVar5 = &PTR_LAB_140b55060;
            puVar5[1] = lVar7;
        }
        puVar5 = puVar5 + 2;
        FUN_1407db590(puVar5, param_3, lVar7);
        *(undefined * )(lVar7 + (longlong) puVar5) = 0;
        *plVar4 = (longlong) puVar5;
        if (lVar6 != 0) {
            (**(code * *)(*(longlong * )(lVar6 + -0x10) + 8))(lVar6 + -0x10);
        }
        if (plVar1 != (longlong *) 0x0) {
            (**(code * *)(*plVar3 + 8))(plVar3);
        }
    }
    return;
}


undefined8 FUN_1401181f0(longlong param_1, undefined4 *param_2) {
    longlong lVar1;
    undefined4 *puVar2;
    undefined8 local_18;
    undefined4 local_10;

    puVar2 = (undefined4 *) FUN_140059170();
    *puVar2 = *param_2;
    puVar2[1] = param_2[1];
    puVar2[2] = param_2[2];
    puVar2[3] = param_2[3];
    lVar1 = *(longlong * )(param_1 + 0x20);
    local_18 = FUN_140062650(param_1, "CColor", 6);
    local_10 = 4;
    FUN_14005e8e0(param_1, lVar1 + 0xa0, &local_18, *(undefined8 * )(param_1 + 0x10));
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1, 0xfffffffe);
    return 1;
}


longlong FUN_140118290(longlong param_1, undefined4 param_2) {
    int iVar1;
    char cVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 uVar6;
    undefined8 local_18;
    undefined4 local_10;

    plVar3 = (longlong *) FUN_1400580e0();
    if (*(int *) (plVar3 + 1) == 2) {
        lVar4 = *plVar3;
    } else {
        if (*(int *) (plVar3 + 1) != 7) {
            return 0;
        }
        lVar4 = *plVar3 + 0x30;
    }
    if (lVar4 != 0) {
        plVar3 = (longlong *) FUN_1400580e0(param_1, param_2);
        iVar1 = *(int *) (plVar3 + 1);
        if ((iVar1 == 5) || (iVar1 == 7)) {
            lVar4 = *(longlong * )(*plVar3 + 0x10);
        } else {
            lVar4 = *(longlong * )(*(longlong * )(param_1 + 0x20) + 0xe0 + (longlong) iVar1 * 8);
        }
        if (lVar4 != 0) {
            plVar3 = *(longlong * *)(param_1 + 0x10);
            *plVar3 = lVar4;
            *(undefined4 * )(plVar3 + 1) = 5;
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            lVar4 = *(longlong * )(param_1 + 0x20);
            local_18 = FUN_140062650(param_1, "CColor", 6);
            local_10 = 4;
            FUN_14005e8e0(param_1, lVar4 + 0xa0, &local_18, *(undefined8 * )(param_1 + 0x10));
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            uVar5 = FUN_1400586a0(param_1, 0xffffffff);
            uVar6 = FUN_1400586a0(param_1, 0xfffffffe);
            cVar2 = FUN_1400e2100(DAT_140c63650, uVar6, uVar5);
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
            if (cVar2 != '\0') {
                plVar3 = (longlong *) FUN_1400580e0(param_1, param_2);
                if (*(int *) (plVar3 + 1) == 2) {
                    return *plVar3;
                }
                if (*(int *) (plVar3 + 1) == 7) {
                    return *plVar3 + 0x30;
                }
            }
        }
    }
    return 0;
}


undefined8 FUN_1401183e0(longlong param_1, undefined8 param_2) {
    longlong *plVar1;
    undefined8 *puVar2;
    int iVar3;
    undefined8 *puVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;

    uVar5 = 0;
    local_20 = 0xfffffffe;
    local_28 = &PTR_FUN_140b56a08;
    local_18 = 0;
    iVar3 = FUN_1400fb720(param_1, param_2, 0xffffffff);
    if (-1 < iVar3) {
        local_18 = *(longlong * )(param_1 + 0x10);
        (*(code *) local_28[2])(&local_28, 0xffffffff);
        plVar1 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x20;
        lVar6 = local_18;
        puVar4 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 * )(*(longlong * )(local_18 + 0x20) + 0xa0), local_20);
        puVar2 = *(undefined8 * *)(lVar6 + 0x10);
        *puVar2 = *puVar4;
        *(undefined4 * )(puVar2 + 1) = *(undefined4 * )(puVar4 + 1);
        *(longlong * )(lVar6 + 0x10) = *(longlong * )(lVar6 + 0x10) + 0x10;
        uVar5 = FUN_140118290(*(undefined8 * )(param_1 + 0x10), 0xffffffff);
        plVar1 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
    }
    local_28 = &PTR_FUN_140b56a08;
    if (local_18 != 0) {
        FUN_1400579e0();
    }
    return uVar5;
}


undefined8 FUN_1401184b0(longlong param_1, ulonglong param_2) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    undefined8 local_18;
    undefined4 local_10;

    param_2 = param_2 & 0xffffffff;
    plVar3 = (longlong *) FUN_1400580e0();
    if (*(int *) (plVar3 + 1) == 2) {
        lVar4 = *plVar3;
    } else {
        if (*(int *) (plVar3 + 1) != 7) {
            return 0;
        }
        lVar4 = *plVar3 + 0x30;
    }
    if (lVar4 != 0) {
        plVar3 = (longlong *) FUN_1400580e0(param_1, param_2 & 0xffffffff);
        iVar2 = *(int *) (plVar3 + 1);
        if ((iVar2 == 5) || (iVar2 == 7)) {
            lVar4 = *(longlong * )(*plVar3 + 0x10);
        } else {
            lVar4 = *(longlong * )(*(longlong * )(param_1 + 0x20) + 0xe0 + (longlong) iVar2 * 8);
        }
        if (lVar4 != 0) {
            plVar3 = *(longlong * *)(param_1 + 0x10);
            *plVar3 = lVar4;
            *(undefined4 * )(plVar3 + 1) = 5;
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            lVar4 = *(longlong * )(param_1 + 0x20);
            local_18 = FUN_140062650(param_1, "CColor", 6);
            local_10 = 4;
            FUN_14005e8e0(param_1, lVar4 + 0xa0, &local_18, *(undefined8 * )(param_1 + 0x10));
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            puVar1 = (undefined8 * )(*(longlong * )(param_1 + 0x10) + -0x10);
            puVar6 = (undefined8 * )(*(longlong * )(param_1 + 0x10) + -0x20);
            if ((puVar1 != &DAT_140a12138) && (puVar6 != &DAT_140a12138)) {
                uVar5 = FUN_14005ac20(puVar1, puVar6);
                *(undefined8 * *)(param_1 + 0x10) = puVar6;
                return uVar5;
            }
            *(undefined8 * *)(param_1 + 0x10) = puVar6;
            return 0;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401185d0(longlong param_1) {
    longlong lVar1;
    undefined(*pauVar2)[16];
    undefined in_XMM6[16];
    undefined auVar3[16];
    undefined8 local_28;
    undefined4 local_20;

    pauVar2 = (undefined (*)[16]) FUN_140056ab0(param_1, 1, "CColor");
    auVar3 = maxps(in_XMM6 & (undefined[16]) 0x0, *pauVar2);
    auVar3 = minps(auVar3, _DAT_140b7b240);
    pauVar2 = (undefined (*)[16]) FUN_140059170(param_1, 0x10);
    *pauVar2 = auVar3;
    lVar1 = *(longlong * )(param_1 + 0x20);
    local_28 = FUN_140062650(param_1, "CColor", 6);
    local_20 = 4;
    FUN_14005e8e0(param_1, lVar1 + 0xa0, &local_28, *(undefined8 * )(param_1 + 0x10));
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1, 0xfffffffe);
    return 1;
}


undefined8 FUN_140118680(longlong param_1) {
    longlong lVar1;
    float *pfVar2;
    undefined(*pauVar3)[16];
    float fVar4;
    float fVar5;
    float fVar6;
    undefined4 uVar7;
    undefined8 local_28;
    undefined4 local_20;

    pfVar2 = (float *) FUN_140056ab0(param_1, 1, "CColor");
    fVar4 = 1.0 - pfVar2[2];
    fVar6 = 1.0 - *pfVar2;
    fVar5 = 1.0 - pfVar2[1];
    uVar7 = 0x3f800000;
    pauVar3 = (undefined (*)[16]) FUN_140059170(fVar4, fVar4, param_1, 0x10);
    *pauVar3 = CONCAT412(uVar7, CONCAT48(fVar4, CONCAT44(fVar5, fVar6)));
    lVar1 = *(longlong * )(param_1 + 0x20);
    local_28 = FUN_140062650(param_1, "CColor", 6);
    local_20 = 4;
    FUN_14005e8e0(param_1, lVar1 + 0xa0, &local_28, *(undefined8 * )(param_1 + 0x10));
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1, 0xfffffffe);
    return 1;
}


undefined8 FUN_140118750(undefined8 param_1) {
    float *pfVar1;
    undefined local_28[8];
    longlong local_20;

    pfVar1 = (float *) FUN_140056ab0(param_1, 1, "CColor");
    FUN_14018ee90(local_28, "CColor(%.3f,%.3f,%.2f,%.3f)", (double) *pfVar1, (double) pfVar1[1],
                  (double) pfVar1[2], (double) pfVar1[3]);
    FUN_140058780(param_1, local_20);
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return 1;
}


undefined8 FUN_1401187e0(longlong param_1) {
    float fVar1;
    char cVar2;
    double *pdVar3;
    char cVar4;
    float *pfVar5;
    undefined8 *puVar6;
    char *pcVar7;
    undefined8 uVar8;
    char cVar9;
    char *pcVar10;
    longlong lVar11;

    pfVar5 = (float *) FUN_140056ab0();
    puVar6 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x10);
    if (((puVar6 < *(undefined8 * *)(param_1 + 0x10)) && (puVar6 != &DAT_140a12138)) &&
        (0 < *(int *) (*(longlong * )(param_1 + 0x18) + 0x18))) {
        pcVar7 = (char *) FUN_140056bb0();
    } else {
        pcVar7 = "";
    }
    pcVar10 = pcVar7;
    while (true) {
        cVar2 = *pcVar10;
        cVar9 = cVar2;
        if ((byte)(cVar2 + 0xbfU) < 0x1a) {
            cVar9 = cVar2 + ' ';
        }
        cVar4 = pcVar10[(longlong) & DAT_1409d5f34 - (longlong) pcVar7];
        if ((byte)(cVar4 + 0xbfU) < 0x1a) {
            cVar4 = cVar4 + ' ';
        }
        if (cVar9 != cVar4) break;
        if (cVar2 == '\0') {
            pdVar3 = *(double **) (param_1 + 0x10);
            *pdVar3 = (double) pfVar5[3];
            *(undefined4 * )(pdVar3 + 1) = 3;
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            return 1;
        }
        pcVar10 = pcVar10 + 1;
    }
    pcVar10 = pcVar7;
    while (true) {
        cVar2 = *pcVar10;
        cVar9 = cVar2;
        if ((byte)(cVar2 + 0xbfU) < 0x1a) {
            cVar9 = cVar2 + ' ';
        }
        cVar4 = pcVar10[(longlong) & DAT_1409d5f84 - (longlong) pcVar7];
        if ((byte)(cVar4 + 0xbfU) < 0x1a) {
            cVar4 = cVar4 + ' ';
        }
        if (cVar9 != cVar4) break;
        if (cVar2 == '\0') {
            pdVar3 = *(double **) (param_1 + 0x10);
            *pdVar3 = (double) *pfVar5;
            *(undefined4 * )(pdVar3 + 1) = 3;
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            return 1;
        }
        pcVar10 = pcVar10 + 1;
    }
    pcVar10 = pcVar7;
    while (true) {
        cVar2 = *pcVar10;
        cVar9 = cVar2;
        if ((byte)(cVar2 + 0xbfU) < 0x1a) {
            cVar9 = cVar2 + ' ';
        }
        cVar4 = pcVar10[(longlong) & DAT_1409d601c - (longlong) pcVar7];
        if ((byte)(cVar4 + 0xbfU) < 0x1a) {
            cVar4 = cVar4 + ' ';
        }
        if (cVar9 != cVar4) break;
        if (cVar2 == '\0') {
            pdVar3 = *(double **) (param_1 + 0x10);
            *pdVar3 = (double) pfVar5[1];
            *(undefined4 * )(pdVar3 + 1) = 3;
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            return 1;
        }
        pcVar10 = pcVar10 + 1;
    }
    lVar11 = (longlong) & DAT_1409d604c - (longlong) pcVar7;
    while (true) {
        cVar2 = *pcVar7;
        cVar9 = cVar2;
        if ((byte)(cVar2 + 0xbfU) < 0x1a) {
            cVar9 = cVar2 + ' ';
        }
        cVar4 = pcVar7[lVar11];
        if ((byte)(cVar4 + 0xbfU) < 0x1a) {
            cVar4 = cVar4 + ' ';
        }
        if (cVar9 != cVar4) break;
        if (cVar2 == '\0') {
            fVar1 = pfVar5[2];
            pdVar3 = *(double **) (param_1 + 0x10);
            *(undefined4 * )(pdVar3 + 1) = 3;
            *pdVar3 = (double) fVar1;
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            return 1;
        }
        pcVar7 = pcVar7 + 1;
    }
    uVar8 = FUN_140056570(param_1, 2, "no such index");
    return uVar8;
}


undefined8 FUN_140118a20(longlong param_1) {
    char cVar1;
    char cVar2;
    float *pfVar3;
    char *pcVar4;
    undefined8 uVar5;
    char cVar6;
    undefined8 *puVar7;
    char *pcVar8;
    longlong lVar9;
    double dVar10;

    pfVar3 = (float *) FUN_140056ab0(param_1, 1);
    puVar7 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x10);
    if (((puVar7 < *(undefined8 * *)(param_1 + 0x10)) && (puVar7 != &DAT_140a12138)) &&
        (0 < *(int *) (*(longlong * )(param_1 + 0x18) + 0x18))) {
        pcVar4 = (char *) FUN_140056bb0();
    } else {
        pcVar4 = "";
    }
    pcVar8 = pcVar4;
    while (true) {
        cVar1 = *pcVar8;
        cVar6 = cVar1;
        if ((byte)(cVar1 + 0xbfU) < 0x1a) {
            cVar6 = cVar1 + ' ';
        }
        cVar2 = pcVar8[(longlong) & DAT_1409d613c - (longlong) pcVar4];
        if ((byte)(cVar2 + 0xbfU) < 0x1a) {
            cVar2 = cVar2 + ' ';
        }
        if (cVar6 != cVar2) break;
        if (cVar1 == '\0') {
            dVar10 = (double) FUN_140056c40(param_1, 3);
            pfVar3[3] = (float) dVar10;
            return 0;
        }
        pcVar8 = pcVar8 + 1;
    }
    pcVar8 = pcVar4;
    while (true) {
        cVar1 = *pcVar8;
        cVar6 = cVar1;
        if ((byte)(cVar1 + 0xbfU) < 0x1a) {
            cVar6 = cVar1 + ' ';
        }
        cVar2 = pcVar8[(longlong) & DAT_1409d61dc - (longlong) pcVar4];
        if ((byte)(cVar2 + 0xbfU) < 0x1a) {
            cVar2 = cVar2 + ' ';
        }
        if (cVar6 != cVar2) break;
        if (cVar1 == '\0') {
            dVar10 = (double) FUN_140056c40(param_1, 3);
            *pfVar3 = (float) dVar10;
            return 0;
        }
        pcVar8 = pcVar8 + 1;
    }
    pcVar8 = pcVar4;
    while (true) {
        cVar1 = *pcVar8;
        cVar6 = cVar1;
        if ((byte)(cVar1 + 0xbfU) < 0x1a) {
            cVar6 = cVar1 + ' ';
        }
        cVar2 = pcVar8[(longlong) & DAT_1409d6074 - (longlong) pcVar4];
        if ((byte)(cVar2 + 0xbfU) < 0x1a) {
            cVar2 = cVar2 + ' ';
        }
        if (cVar6 != cVar2) break;
        if (cVar1 == '\0') {
            dVar10 = (double) FUN_140056c40(param_1, 3);
            pfVar3[1] = (float) dVar10;
            return 0;
        }
        pcVar8 = pcVar8 + 1;
    }
    lVar9 = (longlong) & DAT_1409d60fc - (longlong) pcVar4;
    while (true) {
        cVar1 = *pcVar4;
        cVar6 = cVar1;
        if ((byte)(cVar1 + 0xbfU) < 0x1a) {
            cVar6 = cVar1 + ' ';
        }
        cVar2 = pcVar4[lVar9];
        if ((byte)(cVar2 + 0xbfU) < 0x1a) {
            cVar2 = cVar2 + ' ';
        }
        if (cVar6 != cVar2) break;
        if (cVar1 == '\0') {
            dVar10 = (double) FUN_140056c40(param_1, 3);
            pfVar3[2] = (float) dVar10;
            return 0;
        }
        pcVar4 = pcVar4 + 1;
    }
    uVar5 = FUN_140056570(param_1, 2, "no such index");
    return uVar5;
}


undefined8 FUN_140118c50(longlong param_1) {
    longlong lVar1;
    float *pfVar2;
    float *pfVar3;
    undefined(*pauVar4)[16];
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    undefined8 local_28;
    undefined4 local_20;

    pfVar2 = (float *) FUN_140056ab0(param_1, 1, "CColor");
    pfVar3 = (float *) FUN_140056ab0(param_1, 2, "CColor");
    fVar5 = *pfVar3 + *pfVar2;
    fVar6 = pfVar3[1] + pfVar2[1];
    fVar7 = pfVar3[2] + pfVar2[2];
    fVar8 = pfVar3[3] + pfVar2[3];
    pauVar4 = (undefined (*)[16]) FUN_140059170(param_1, 0x10);
    *pauVar4 = CONCAT412(fVar8, CONCAT48(fVar7, CONCAT44(fVar6, fVar5)));
    lVar1 = *(longlong * )(param_1 + 0x20);
    local_28 = FUN_140062650(param_1, "CColor", 6);
    local_20 = 4;
    FUN_14005e8e0(param_1, lVar1 + 0xa0, &local_28, *(undefined8 * )(param_1 + 0x10));
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1, 0xfffffffe);
    return 1;
}


undefined8 FUN_140118d10(longlong param_1) {
    longlong lVar1;
    float *pfVar2;
    float *pfVar3;
    undefined(*pauVar4)[16];
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    undefined8 local_28;
    undefined4 local_20;

    pfVar2 = (float *) FUN_140056ab0(param_1, 1, "CColor");
    pfVar3 = (float *) FUN_140056ab0(param_1, 2, "CColor");
    fVar5 = *pfVar2 - *pfVar3;
    fVar6 = pfVar2[1] - pfVar3[1];
    fVar7 = pfVar2[2] - pfVar3[2];
    fVar8 = pfVar2[3] - pfVar3[3];
    pauVar4 = (undefined (*)[16]) FUN_140059170(param_1, 0x10);
    *pauVar4 = CONCAT412(fVar8, CONCAT48(fVar7, CONCAT44(fVar6, fVar5)));
    lVar1 = *(longlong * )(param_1 + 0x20);
    local_28 = FUN_140062650(param_1, "CColor", 6);
    local_20 = 4;
    FUN_14005e8e0(param_1, lVar1 + 0xa0, &local_28, *(undefined8 * )(param_1 + 0x10));
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1, 0xfffffffe);
    return 1;
}


undefined8 FUN_140118dd0(longlong param_1) {
    longlong lVar1;
    double dVar2;
    int iVar3;
    float *pfVar4;
    longlong *plVar5;
    float *pfVar6;
    undefined(*pauVar7)[16];
    longlong *plVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    undefined local_res10[24];
    undefined8 local_28;
    undefined4 local_20;

    pfVar4 = (float *) FUN_140056ab0(param_1, 1, "CColor");
    plVar5 = (longlong * )(*(longlong * )(param_1 + 0x18) + 0x10);
    plVar8 = &DAT_140a12138;
    if (plVar5 < *(longlong * *)(param_1 + 0x10)) {
        plVar8 = plVar5;
    }
    if (*(int *) (plVar8 + 1) == 3) {
        LAB_140118e4b:
        dVar2 = (double) FUN_140056c40(param_1, 2);
        fVar13 = *pfVar4;
        fVar14 = pfVar4[1];
        fVar15 = pfVar4[2];
        fVar16 = pfVar4[3];
        fVar12 = (float) dVar2;
        fVar9 = fVar12;
        fVar10 = fVar12;
        fVar11 = fVar12;
    } else {
        if (*(int *) (plVar8 + 1) == 4) {
            iVar3 = FUN_14005ac80(*plVar8 + 0x20, local_res10);
            if (iVar3 != 0) goto LAB_140118e4b;
        }
        pfVar6 = (float *) FUN_140056ab0(param_1, 2, "CColor");
        fVar12 = *pfVar4;
        fVar13 = *pfVar6;
        fVar14 = pfVar6[1];
        fVar15 = pfVar6[2];
        fVar16 = pfVar6[3];
        fVar9 = pfVar4[1];
        fVar10 = pfVar4[2];
        fVar11 = pfVar4[3];
    }
    fVar13 = fVar13 * fVar12;
    fVar14 = fVar14 * fVar9;
    fVar15 = fVar15 * fVar10;
    fVar16 = fVar16 * fVar11;
    pauVar7 = (undefined (*)[16]) FUN_140059170(param_1, 0x10);
    *pauVar7 = CONCAT412(fVar16, CONCAT48(fVar15, CONCAT44(fVar14, fVar13)));
    lVar1 = *(longlong * )(param_1 + 0x20);
    local_28 = FUN_140062650(param_1, "CColor", 6);
    local_20 = 4;
    FUN_14005e8e0(param_1, lVar1 + 0xa0, &local_28, *(undefined8 * )(param_1 + 0x10));
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1, 0xfffffffe);
    return 1;
}


undefined8 FUN_140118ef0(longlong param_1) {
    longlong lVar1;
    double dVar2;
    undefined(*pauVar3)[16];
    float fVar4;
    undefined auVar5[16];
    undefined8 local_28;
    undefined4 local_20;

    pauVar3 = (undefined (*)[16]) FUN_140056ab0(param_1, 1, "CColor");
    dVar2 = (double) FUN_140056c40(param_1, 2);
    fVar4 = (float) dVar2;
    auVar5 = divps(*pauVar3, CONCAT412(fVar4, CONCAT48(fVar4, CONCAT44(fVar4, fVar4))));
    pauVar3 = (undefined (*)[16]) FUN_140059170(param_1, 0x10);
    *pauVar3 = auVar5;
    lVar1 = *(longlong * )(param_1 + 0x20);
    local_28 = FUN_140062650(param_1, "CColor", 6);
    local_20 = 4;
    FUN_14005e8e0(param_1, lVar1 + 0xa0, &local_28, *(undefined8 * )(param_1 + 0x10));
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1, 0xfffffffe);
    return 1;
}


undefined8 FUN_140118fb0(longlong param_1) {
    uint *puVar1;
    longlong *plVar2;
    longlong *plVar3;
    longlong lVar4;

    plVar2 = (longlong *) FUN_140056ab0(param_1, 1, "CColor");
    plVar3 = (longlong *) FUN_140056ab0(param_1, 2, "CColor");
    puVar1 = *(uint * *)(param_1 + 0x10);
    lVar4 = *plVar2 - *plVar3;
    if (lVar4 == 0) {
        lVar4 = plVar2[1] - plVar3[1];
    }
    puVar1[2] = 1;
    *puVar1 = (uint)(lVar4 == 0);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_140119030(longlong param_1) {
    longlong lVar1;
    float *pfVar2;
    undefined(*pauVar3)[16];
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    undefined8 local_28;
    undefined4 local_20;

    pfVar2 = (float *) FUN_140056ab0(param_1, 1, "CColor");
    fVar4 = 0.0 - *pfVar2;
    fVar5 = 0.0 - pfVar2[1];
    fVar6 = 0.0 - pfVar2[2];
    fVar7 = 0.0 - pfVar2[3];
    pauVar3 = (undefined (*)[16]) FUN_140059170(param_1, 0x10);
    *pauVar3 = CONCAT412(fVar7, CONCAT48(fVar6, CONCAT44(fVar5, fVar4)));
    lVar1 = *(longlong * )(param_1 + 0x20);
    local_28 = FUN_140062650(param_1, "CColor", 6);
    local_20 = 4;
    FUN_14005e8e0(param_1, lVar1 + 0xa0, &local_28, *(undefined8 * )(param_1 + 0x10));
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1, 0xfffffffe);
    return 1;
}


undefined8 FUN_1401190e0(longlong param_1) {
    longlong lVar1;
    undefined8 *puVar2;
    undefined(*pauVar3)[16];
    double dVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    undefined8 local_48;
    undefined4 local_40;

    dVar4 = (double) FUN_140056c40(param_1, 1);
    fVar6 = (float) dVar4;
    dVar4 = (double) FUN_140056c40(param_1, 2);
    fVar7 = (float) dVar4;
    dVar4 = (double) FUN_140056c40(param_1, 3);
    puVar2 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x30);
    fVar8 = (float) dVar4;
    if (((puVar2 < *(undefined8 * *)(param_1 + 0x10)) && (puVar2 != &DAT_140a12138)) &&
        (0 < *(int *) (*(longlong * )(param_1 + 0x18) + 0x38))) {
        dVar4 = (double) FUN_140056c40(param_1, 4);
    } else {
        dVar4 = 1.0;
    }
    fVar5 = (float) dVar4;
    pauVar3 = (undefined (*)[16]) FUN_140059170(param_1, 0x10);
    *pauVar3 = CONCAT412(fVar5, CONCAT48(fVar8, CONCAT44(fVar7, fVar6)));
    lVar1 = *(longlong * )(param_1 + 0x20);
    local_48 = FUN_140062650(param_1, "CColor", 6);
    local_40 = 4;
    FUN_14005e8e0(param_1, lVar1 + 0xa0, &local_48, *(undefined8 * )(param_1 + 0x10));
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1, 0xfffffffe);
    return 1;
}


undefined8 FUN_140119210(longlong param_1) {
    uint *puVar1;
    int iVar2;

    iVar2 = FUN_1401184b0();
    puVar1 = *(uint * *)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(iVar2 != 0);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_140119250(longlong param_1) {
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 uVar3;
    undefined8 local_28;
    undefined4 local_20;

    FUN_140057020(param_1, "Apollo", &PTR_s_GetAPIVersion_140b57250);
    local_28 = FUN_140062650(param_1, "Apollo", 6);
    local_20 = 4;
    FUN_14005e8e0(param_1, param_1 + 0x78, &local_28, *(undefined8 * )(param_1 + 0x10));
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1, "DragDropQueryResult", 0x13);
    if (*(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x70) <=
        *(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 * )(puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1, "PassOn", 6);
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Ignore", 6);
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Accept", 6);
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Invalid", 7);
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    lVar2 = *(longlong * )(param_1 + 0x10);
    FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar2, lVar2 + -0x20, lVar2 + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "DragDropCancelReason", 0x14);
    if (*(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x70) <=
        *(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 * )(puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1, "EscapeKey", 9);
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "DroppedOnNothing", 0x10);
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "ClickedOnNothing", 0x10);
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "ClickedOnWorld", 0xe);
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "WindowMove", 10);
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0x4010000000000000;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    lVar2 = *(longlong * )(param_1 + 0x10);
    FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar2, lVar2 + -0x20, lVar2 + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "AddonLoadStatus", 0xf);
    if (*(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x70) <=
        *(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 * )(puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1, "Loading", 7);
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Loaded", 6);
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "LoadingError", 0xc);
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = 0xbff0000000000000;
    *(undefined4 * )(puVar1 + 1) = 3;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    lVar2 = *(longlong * )(param_1 + 0x10);
    FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar2, lVar2 + -0x20, lVar2 + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    local_28 = FUN_140062650(param_1, "Apollo", 6);
    local_20 = 4;
    FUN_14005ea50(param_1, param_1 + 0x78, &local_28, *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140119860(longlong param_1) {
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
    ulonglong uVar13;
    undefined **ppuVar14;
    uint uVar15;
    longlong lVar17;
    undefined8 unaff_R14;
    undefined8 unaff_R15;
    undefined *puVar18;
    undefined8 uStack40;
    undefined8 local_18;
    undefined8 local_10;
    ulonglong uVar11;
    ulonglong uVar16;

    lVar2 = *(longlong * )(param_1 + 400);
    FUN_1400f2440(param_1 + 0x180, "Apollo", FUN_140119250);
    FUN_140119250(lVar2);
    FUN_14014fd00(lVar2);
    FUN_140154ac0(lVar2);
    FUN_1401339d0(lVar2);
    FUN_140145270(lVar2);
    FUN_140146ed0(lVar2);
    FUN_140148da0(lVar2);
    FUN_14014abe0(lVar2);
    FUN_14014d4a0(lVar2);
    FUN_140184370(lVar2);
    FUN_140121730(lVar2);
    FUN_1400569b0(lVar2, "CColor");
    puVar9 = *(undefined8 * *)(lVar2 + 0x10);
    *puVar9 = puVar9[-2];
    *(undefined4 * )(puVar9 + 1) = *(undefined4 * )(puVar9 + -1);
    *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
    lVar4 = *(longlong * )(lVar2 + 0x10);
    local_18 = FUN_140062650(lVar2, "__index", 7);
    local_10 = CONCAT44(local_10._4_4_, 4);
    FUN_14005ea50(lVar2, lVar4 + -0x20, &local_18, *(longlong * )(lVar2 + 0x10) + -0x10);
    *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + -0x10;
    lVar4 = *(longlong * )(lVar2 + 0x10);
    ppuVar14 = &PTR_s_Saturate_140c2c810;
    puVar18 = PTR_s_Saturate_140c2c810;
    while (puVar18 != (undefined *) 0x0) {
        puVar18 = ppuVar14[1];
        if (*(ulonglong * )(*(longlong * )(lVar2 + 0x20) + 0x70) <=
            *(ulonglong * )(*(longlong * )(lVar2 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar2);
        }
        lVar4 = FUN_140060ab0(lVar2, 0);
        *(undefined * *)(lVar4 + 0x20) = puVar18;
        plVar3 = *(longlong * *)(lVar2 + 0x10);
        *plVar3 = lVar4;
        *(undefined4 * )(plVar3 + 1) = 6;
        *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
        puVar18 = *ppuVar14;
        uVar5 = FUN_1400580e0(lVar2, 0xfffffffe);
        lVar4 = -1;
        do {
            lVar4 = lVar4 + 1;
        } while (puVar18[lVar4] != '\0');
        local_18 = FUN_140062650(lVar2, puVar18);
        local_10 = CONCAT44(local_10._4_4_, 4);
        FUN_14005ea50(lVar2, uVar5, &local_18, *(longlong * )(lVar2 + 0x10) + -0x10);
        *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + -0x10;
        lVar4 = *(longlong * )(lVar2 + 0x10);
        ppuVar14 = ppuVar14 + 2;
        puVar18 = *ppuVar14;
    }
    *(longlong * )(lVar2 + 0x10) = lVar4 + -0x10;
    FUN_140057020(lVar2, "CColor", &PTR_DAT_140c2c7d0);
    *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + -0x10;
    FUN_1400f2440(param_1 + 0x180, "GenericDialog", FUN_140121700);
    FUN_1400d5220(param_1);
    FUN_140131300(param_1);
    FUN_140114700(param_1);
    FUN_14015c540(param_1);
    FUN_1401654b0(param_1);
    FUN_14016abd0(param_1);
    FUN_140171b80(param_1);
    FUN_1401765b0(param_1);
    FUN_140173df0(param_1);
    FUN_140177720(param_1);
    FUN_14017f360(param_1);
    FUN_1401849f0(param_1);
    FUN_14017a7d0(param_1);
    FUN_1401176d0(param_1);
    FUN_14012a350(param_1);
    FUN_14017c140(param_1);
    FUN_140181d80(param_1);
    uStack40 = 0x1401832e0;
    lVar4 = FUN_1407f0f60();
    lVar4 = -lVar4;
    *(ulonglong * )(&stack0x00004010 + lVar4) =
            DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffe0 + lVar4);
    lVar2 = *(longlong * )(param_1 + 400);
    *(undefined8 * )(&stack0x00004058 + lVar4) = unaff_RBX;
    *(undefined8 * )(&stack0x00004020 + lVar4) = unaff_R15;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140183321;
    FUN_1407e4830();
    uVar13 = 0;
    uVar8 = uVar13;
    uVar11 = uVar13;
    uVar16 = uVar13;
    do {
        uVar10 = (int) uVar11 + 1;
        uVar11 = (ulonglong) uVar10;
        uVar15 = (int) uVar16 + 1;
        uVar16 = (ulonglong) uVar15;
        *(undefined8 * )(&stack0x00000010 + uVar8 + lVar4) =
                *(undefined8 * )((longlong) & PTR_DAT_140c56a80 + uVar8);
        puVar9 = (undefined8 * )((longlong) & PTR_FUN_140c56a88 + uVar8);
        uVar8 = uVar8 + 0x10;
        *(undefined8 * )(&stack0x00000018 + uVar8 + lVar4 + -0x10) = *puVar9;
    } while (uVar10 < 0x97);
    lVar17 = (longlong) & PTR_s_MovieWindowSetMovie_140c58560 +
                          ((longlong)(int)
    uVar15 * -0x10 - (longlong)(&stack0x00000010 + lVar4));
    puVar9 = (undefined8 * )(&stack0x00000010 + (longlong)(int)
    uVar15 * 0x10 + lVar4);
    uVar8 = uVar13;
    do {
        uVar10 = (int) uVar8 + 1;
        uVar8 = (ulonglong) uVar10;
        *puVar9 = *(undefined8 * )(lVar17 + (longlong) puVar9);
        puVar9[1] = *(undefined8 * )(lVar17 + -8 + (longlong)(puVar9 + 2));
        puVar9 = puVar9 + 2;
    } while (uVar10 < 0x10);
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x1401833af;
    FUN_1400569b0(lVar2, "Apollo.MovieWindow");
    puVar9 = *(undefined8 * *)(lVar2 + 0x10);
    iVar1 = *(int *) (puVar9 + -1);
    if (iVar1 == 2) {
        LAB_1401833d1:
        if (*(int *) (puVar9 + -1) == 2) {
            LAB_1401833ed:
            uVar8 = puVar9[-2];
        } else if (*(int *) (puVar9 + -1) == 7) {
            uVar8 = puVar9[-2] + 0x30;
        } else {
            uVar8 = 0;
        }
    } else {
        if ((iVar1 == 5) || (iVar1 == 6)) goto LAB_1401833ed;
        if (iVar1 == 7) goto LAB_1401833d1;
        uVar8 = uVar13;
        if (iVar1 == 8) goto LAB_1401833ed;
    }
    *puVar9 = puVar9[-2];
    *(undefined4 * )(puVar9 + 1) = *(undefined4 * )(puVar9 + -1);
    *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
    lVar17 = *(longlong * )(lVar2 + 0x10);
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14018341c;
    uVar5 = FUN_140062650(lVar2, "__index", 7);
    lVar6 = *(longlong * )(lVar2 + 0x10);
    *(undefined8 * )(&stack0x00000000 + lVar4) = uVar5;
    *(undefined4 * )(&stack0x00000008 + lVar4) = 4;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140183442;
    FUN_14005ea50(lVar2, lVar17 + -0x20, (longlong) & stack0x00000000 + lVar4, lVar6 + -0x10);
    *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + -0x10;
    lVar17 = *(longlong * )(&stack0x00000010 + lVar4);
    lVar6 = *(longlong * )(lVar2 + 0x10);
    puVar18 = &stack0x00000010 + lVar4;
    if (lVar17 != 0) {
        *(undefined8 * )(&stack0x00004060 + lVar4) = unaff_R14;
        do {
            uVar5 = *(undefined8 * )(puVar18 + 8);
            if (*(ulonglong * )(*(longlong * )(lVar2 + 0x20) + 0x70) <=
                *(ulonglong * )(*(longlong * )(lVar2 + 0x20) + 0x78)) {
                *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14018348a;
                FUN_14005e2c0(lVar2);
            }
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x1401834af;
            lVar6 = FUN_140060ab0(lVar2, 0);
            *(undefined8 * )(lVar6 + 0x20) = uVar5;
            plVar3 = *(longlong * *)(lVar2 + 0x10);
            *plVar3 = lVar6;
            *(undefined4 * )(plVar3 + 1) = 6;
            *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x1401834d3;
            uVar5 = FUN_1400580e0(lVar2, 0xfffffffe);
            lVar6 = -1;
            do {
                lVar6 = lVar6 + 1;
            } while (*(char *) (lVar17 + lVar6) != '\0');
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x1401834f4;
            uVar7 = FUN_140062650(lVar2, lVar17);
            lVar17 = *(longlong * )(lVar2 + 0x10);
            *(undefined8 * )(&stack0x00000000 + lVar4) = uVar7;
            *(undefined4 * )(&stack0x00000008 + lVar4) = 4;
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140183519;
            FUN_14005ea50(lVar2, uVar5, (longlong) & stack0x00000000 + lVar4, lVar17 + -0x10);
            *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + -0x10;
            lVar17 = *(longlong * )(puVar18 + 0x10);
            lVar6 = *(longlong * )(lVar2 + 0x10);
            puVar18 = puVar18 + 0x10;
        } while (lVar17 != 0);
    }
    lVar17 = *(longlong * )(lVar2 + 0x20);
    *(longlong * )(lVar2 + 0x10) = lVar6 + -0x10;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14018355c;
    uVar7 = FUN_140062650(lVar2, "Apollo.Window", 0xd);
    uVar5 = *(undefined8 * )(lVar2 + 0x10);
    *(undefined8 * )(&stack0x00000000 + lVar4) = uVar7;
    *(undefined4 * )(&stack0x00000008 + lVar4) = 4;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140183581;
    FUN_14005e8e0(lVar2, lVar17 + 0xa0, (longlong) & stack0x00000000 + lVar4, uVar5);
    *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
    lVar17 = *(longlong * )(lVar2 + 0x10);
    iVar1 = *(int *) (lVar17 + -8);
    puVar12 = (ulonglong * )(lVar17 + -0x10);
    if (iVar1 == 2) {
        LAB_1401835e9:
        if (*(int *) (lVar17 + -8) != 2) {
            if (*(int *) (lVar17 + -8) == 7) {
                uVar13 = *puVar12 + 0x30;
            }
            goto LAB_1401835ba;
        }
    } else if ((iVar1 != 5) && (iVar1 != 6)) {
        if (iVar1 == 7) goto LAB_1401835e9;
        if (iVar1 != 8) goto LAB_1401835ba;
    }
    uVar13 = *puVar12;
    LAB_1401835ba:
    *(ulonglong * *)(lVar2 + 0x10) = puVar12;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x1401835cc;
    FUN_1400ed720(param_1, uVar8, uVar13);
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x1401835dc;
    FUN_1407db4f0(*(ulonglong * )(&stack0x00004010 + lVar4) ^
                  (ulonglong)(&stack0xffffffffffffffe0 + lVar4));
    return;
}


undefined8 FUN_140119b60(longlong param_1) {
    undefined8 *puVar1;
    undefined *puVar2;
    undefined4 uVar3;
    int iVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    ulonglong uVar7;
    undefined *puVar8;
    ulonglong uVar9;
    undefined local_28[8];
    undefined *local_20;
    undefined *local_18;

    uVar9 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar7 = uVar9;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar7 * 8) + 400) ==
                param_1) {
                uVar9 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar7 * 8);
                break;
            }
            uVar7 = (ulonglong)((int) uVar7 + 1);
        } while (uVar7 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    FUN_1400f2540(uVar9 + 0x180, local_28, 1);
    puVar2 = local_20;
    if (local_20 != local_18) {
        FUN_1400f2540(uVar9 + 0x180, local_28, 2);
        if (local_20 != local_18) {
            puVar1 = *(undefined8 * *)(param_1 + 0x10);
            puVar5 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x20);
            uVar3 = 0xfffffffe;
            if (((puVar5 < puVar1) && (puVar5 != &DAT_140a12138)) &&
                (*(int *) (*(longlong * )(param_1 + 0x18) + 0x28) == 5)) {
                puVar6 = &DAT_140a12138;
                if (puVar5 < puVar1) {
                    puVar6 = puVar5;
                }
                *puVar1 = *puVar6;
                *(undefined4 * )(puVar1 + 1) = *(undefined4 * )(puVar6 + 1);
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
                uVar3 = FUN_1400578c0(param_1);
            }
            iVar4 = FUN_1400e8d60(puVar2);
            puVar8 = puVar2;
            if (iVar4 != 0) {
                puVar8 = (&PTR_DAT_140c2c4d0)[iVar4];
            }
            FUN_1400eb7d0(uVar9, puVar8, local_20, *(undefined8 * )(DAT_140c63650 + 0x310), uVar3);
        }
        if (local_20 != (undefined *) 0x0) {
            FUN_14018b900(local_20, 0);
        }
    }
    if (puVar2 != (undefined *) 0x0) {
        FUN_14018b900(puVar2, 0);
    }
    return 0;
}


undefined8 FUN_140119ce0(longlong param_1) {
    undefined8 *puVar1;
    undefined4 uVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    undefined local_28[8];
    longlong local_20;
    longlong local_18;

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
    FUN_1400f2540(uVar6 + 0x180, local_28, 1);
    if (local_20 != local_18) {
        puVar1 = *(undefined8 * *)(param_1 + 0x10);
        puVar3 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x10);
        if (((puVar3 < puVar1) && (puVar3 != &DAT_140a12138)) &&
            (*(int *) (*(longlong * )(param_1 + 0x18) + 0x18) == 5)) {
            puVar4 = &DAT_140a12138;
            if (puVar3 < puVar1) {
                puVar4 = puVar3;
            }
            *puVar1 = *puVar4;
            *(undefined4 * )(puVar1 + 1) = *(undefined4 * )(puVar4 + 1);
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            uVar2 = FUN_1400578c0(param_1);
            FUN_1400ec060(uVar6, local_20, uVar2);
            FUN_1400579e0(param_1);
        }
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return 0;
}


undefined8 FUN_140119de0(longlong param_1) {
    uint **ppuVar1;
    undefined4 *puVar2;
    undefined *puVar3;
    uint *puVar4;
    undefined2 *puVar5;
    int iVar6;
    longlong lVar7;
    undefined8 uVar8;
    undefined8 *puVar9;
    undefined8 *puVar10;
    undefined2 *puVar11;
    undefined2 *puVar12;
    longlong lVar13;
    longlong *plVar14;
    ulonglong uVar15;
    undefined8 *puVar16;
    ulonglong uVar17;
    longlong lVar18;
    longlong lVar19;
    char local_res10;
    longlong local_res18;
    longlong local_res20;
    undefined **local_f8;
    int local_f0;
    longlong local_e8;
    undefined **local_d8;
    int local_d0;
    longlong local_c8;
    undefined4 local_c0;
    undefined **local_b8;
    int local_b0;
    longlong local_a8;
    undefined4 local_a0;
    undefined **local_98;
    undefined4 local_90;
    undefined4 uStack140;
    longlong local_88;
    undefined ***local_80;
    undefined local_78[8];
    undefined2 *local_70;
    undefined local_58[8];
    longlong local_50;
    longlong local_48;

    uVar17 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar15 = uVar17;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar15 * 8) + 400) ==
                param_1) {
                uVar17 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar15 * 8);
                break;
            }
            uVar15 = (ulonglong)((int) uVar15 + 1);
        } while (uVar15 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar19 = *(longlong * )(uVar17 + 400);
    lVar7 = FUN_14018f0e0(&local_98, 0);
    uVar8 = *(undefined8 * )(lVar7 + 8);
    puVar16 = *(undefined8 * *)(lVar19 + 0x18);
    if (((puVar16 < *(undefined8 * *)(lVar19 + 0x10)) && (puVar16 != &DAT_140a12138)) &&
        (0 < *(int *) (puVar16 + 1))) {
        uVar8 = FUN_140056bb0(lVar19, 1);
    }
    FUN_14018f2d0(local_58, uVar8);
    if (CONCAT44(uStack140, local_90) != 0) {
        FUN_14018b900(CONCAT44(uStack140, local_90), 0);
    }
    lVar19 = local_50;
    if (local_50 == local_48) {
        puVar2 = *(undefined4 * *)(param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        goto LAB_14011a5a4;
    }
    lVar7 = *(longlong * )(param_1 + 0x18);
    puVar16 = *(undefined8 * *)(param_1 + 0x10);
    ppuVar1 = (uint * *)(param_1 + 0x10);
    puVar9 = (undefined8 * )(lVar7 + 0x10);
    if (((puVar16 <= puVar9) || (puVar9 == &DAT_140a12138)) || (*(int *) (lVar7 + 0x18) != 5)) {
        *(undefined4 *) puVar16 = 0;
        *(undefined4 * )(puVar16 + 1) = 1;
        *ppuVar1 = *ppuVar1 + 4;
        goto LAB_14011a5a4;
    }
    local_b8 = &PTR_FUN_140b569f0;
    local_a0 = 1;
    local_b0 = -2;
    local_a8 = param_1;
    if (((puVar9 < puVar16) && (puVar9 != &DAT_140a12138)) && (*(int *) (lVar7 + 0x18) == 5)) {
        FUN_1400579e0(param_1, 0xfffffffe, 0xfffffffe);
        puVar16 = *(undefined8 * *)(local_a8 + 0x10);
        puVar10 = (undefined8 * )(*(longlong * )(local_a8 + 0x18) + 0x10);
        puVar9 = &DAT_140a12138;
        if (puVar10 < puVar16) {
            puVar9 = puVar10;
        }
        *puVar16 = *puVar9;
        *(undefined4 * )(puVar16 + 1) = *(undefined4 * )(puVar9 + 1);
        *(longlong * )(local_a8 + 0x10) = *(longlong * )(local_a8 + 0x10) + 0x10;
        local_b0 = FUN_1400578c0(local_a8);
    }
    if ((local_a8 == 0) || (local_b0 == -2)) {
        LAB_14011a55e:
        puVar4 = *ppuVar1;
        *puVar4 = 0;
        puVar4[2] = 1;
        *ppuVar1 = *ppuVar1 + 4;
    } else {
        lVar7 = local_a8;
        puVar9 = (undefined8 *) FUN_14005c3c0(*(undefined8 * )(*(longlong * )(local_a8 + 0x20) + 0xa0));
        puVar16 = *(undefined8 * *)(lVar7 + 0x10);
        *puVar16 = *puVar9;
        *(undefined4 * )(puVar16 + 1) = *(undefined4 * )(puVar9 + 1);
        *(longlong * )(lVar7 + 0x10) = *(longlong * )(lVar7 + 0x10) + 0x10;
        puVar16 = (undefined8 * )(*(longlong * )(local_a8 + 0x10) + -0x10);
        if (puVar16 == &DAT_140a12138) {
            iVar6 = -1;
        } else {
            iVar6 = *(int *) (*(longlong * )(local_a8 + 0x10) + -8);
        }
        *(undefined8 * *)(local_a8 + 0x10) = puVar16;
        if ((iVar6 != 5) || (lVar7 = FUN_14013a390(uVar17 + 0x9c0, local_b0), lVar7 == 0))
            goto LAB_14011a55e;
        local_res18 = 0;
        if (lVar19 == 0) {
            local_res10 = '\0';
        } else {
            local_res10 = FUN_1401519b0(uVar17 + 0xa18, lVar19, lVar7, &local_b8, &local_res18);
        }
        lVar7 = local_res18;
        local_c0 = 1;
        local_d8 = &PTR_FUN_140b569f0;
        local_d0 = -2;
        puVar16 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x20);
        local_c8 = param_1;
        if (((puVar16 < *ppuVar1) && (puVar16 != &DAT_140a12138)) &&
            (*(int *) (*(longlong * )(param_1 + 0x18) + 0x28) == 5)) {
            FUN_1400579e0(param_1, 0xfffffffe, 0xfffffffe);
            puVar16 = *(undefined8 * *)(local_c8 + 0x10);
            puVar10 = (undefined8 * )(*(longlong * )(local_c8 + 0x18) + 0x20);
            puVar9 = &DAT_140a12138;
            if (puVar10 < puVar16) {
                puVar9 = puVar10;
            }
            *puVar16 = *puVar9;
            *(undefined4 * )(puVar16 + 1) = *(undefined4 * )(puVar9 + 1);
            *(longlong * )(local_c8 + 0x10) = *(longlong * )(local_c8 + 0x10) + 0x10;
            local_d0 = FUN_1400578c0(local_c8);
        }
        lVar13 = local_c8;
        if ((local_c8 != 0) && (local_d0 != -2)) {
            puVar9 = (undefined8 *) FUN_14005c3c0(*(undefined8 * )(*(longlong * )(local_c8 + 0x20) + 0xa0));
            puVar16 = *(undefined8 * *)(lVar13 + 0x10);
            *puVar16 = *puVar9;
            *(undefined4 * )(puVar16 + 1) = *(undefined4 * )(puVar9 + 1);
            plVar14 = (longlong * )(lVar13 + 0x10);
            *plVar14 = *plVar14 + 0x10;
            puVar16 = (undefined8 * )(*(longlong * )(local_c8 + 0x10) + -0x10);
            if (puVar16 == &DAT_140a12138) {
                iVar6 = -1;
            } else {
                iVar6 = *(int *) (*(longlong * )(local_c8 + 0x10) + -8);
            }
            *(undefined8 * *)(local_c8 + 0x10) = puVar16;
            if (iVar6 == 5) {
                local_90 = 0xfffffffe;
                local_80 = &local_d8;
                local_88 = local_c8;
                local_98 = &PTR_FUN_140b56a08;
                *(undefined4 * )(*(longlong * )(local_c8 + 0x10) + 8) = 0;
                *(longlong * )(local_c8 + 0x10) = *(longlong * )(local_c8 + 0x10) + 0x10;
                FUN_1400fa090(&local_98, 0xffffffff);
                *(longlong * )(local_c8 + 0x10) = *(longlong * )(local_c8 + 0x10) + -0x10;
                while ((iVar6 = (*(code * )(*local_80)[1])(), iVar6 != 0 &&
                                                              (iVar6 = FUN_1400fcba0(&local_98), iVar6 != 0))) {
                    FUN_1400fbf40(&local_98);
                    if ((local_e8 != 0) && (local_f0 != -2)) {
                        lVar19 = local_e8;
                        puVar9 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 * )(*(longlong * )(local_e8 + 0x20) + 0xa0));
                        puVar16 = *(undefined8 * *)(lVar19 + 0x10);
                        *puVar16 = *puVar9;
                        *(undefined4 * )(puVar16 + 1) = *(undefined4 * )(puVar9 + 1);
                        *(longlong * )(lVar19 + 0x10) = *(longlong * )(lVar19 + 0x10) + 0x10;
                        puVar16 = (undefined8 * )(*(longlong * )(local_e8 + 0x10) + -0x10);
                        if (puVar16 == &DAT_140a12138) {
                            iVar6 = -1;
                        } else {
                            iVar6 = *(int *) (*(longlong * )(local_e8 + 0x10) + -8);
                        }
                        *(undefined8 * *)(local_e8 + 0x10) = puVar16;
                        if (iVar6 == 5) {
                            puVar11 = (undefined2 *) FUN_14018b280(0x10, 0);
                            if (puVar11 != (undefined2 *) 0x0) {
                                *puVar11 = 0;
                            }
                            puVar12 = (undefined2 *) FUN_14018b280(0x10);
                            if (puVar12 != (undefined2 *) 0x0) {
                                *puVar12 = 0;
                            }
                            iVar6 = (*(code *) local_f8[1])(&local_f8);
                            if (iVar6 != 0) {
                                lVar13 = local_e8;
                                puVar9 = (undefined8 *)
                                        FUN_14005c3c0(*(undefined8 * )(*(longlong * )(local_e8 + 0x20) + 0xa0),
                                                      local_f0);
                                lVar19 = local_e8;
                                puVar16 = *(undefined8 * *)(lVar13 + 0x10);
                                *puVar16 = *puVar9;
                                *(undefined4 * )(puVar16 + 1) = *(undefined4 * )(puVar9 + 1);
                                *(longlong * )(lVar13 + 0x10) = *(longlong * )(lVar13 + 0x10) + 0x10;
                                lVar13 = FUN_14018f0e0(local_78, L"strEvent");
                                if (*(longlong * )(lVar13 + 8) == 0) {
                                    *(undefined4 * )(*(longlong * )(lVar19 + 0x10) + 8) = 0;
                                    *(longlong * )(lVar19 + 0x10) = *(longlong * )(lVar19 + 0x10) + 0x10;
                                } else {
                                    lVar18 = -1;
                                    do {
                                        lVar18 = lVar18 + 1;
                                    } while (*(char *) (*(longlong * )(lVar13 + 8) + lVar18) != '\0');
                                    FUN_140058710(lVar19);
                                }
                                if (local_70 != (undefined2 *) 0x0) {
                                    FUN_14018b900(local_70, 0);
                                }
                                lVar19 = *(longlong * )(local_e8 + 0x10) + -0x10;
                                FUN_14005e8e0(local_e8, *(longlong * )(local_e8 + 0x10) + -0x20, lVar19, lVar19);
                                lVar19 = *(longlong * )(local_e8 + 0x10);
                                if (((longlong * )(lVar19 + -0x10) == &DAT_140a12138) || (*(int *) (lVar19 + -8) != 4)
                                        ) {
                                    *(longlong * )(local_e8 + 0x10) = lVar19 + -0x20;
                                } else {
                                    FUN_14018f2d0(local_78, *(longlong * )(lVar19 + -0x10) + 0x20);
                                    puVar5 = local_70;
                                    if (puVar11 != (undefined2 *) 0x0) {
                                        FUN_14018b900(puVar11, 0);
                                    }
                                    *(longlong * )(local_e8 + 0x10) = *(longlong * )(local_e8 + 0x10) + -0x20;
                                    puVar11 = puVar5;
                                }
                            }
                            iVar6 = (*(code *) local_f8[1])(&local_f8);
                            if (iVar6 != 0) {
                                lVar13 = local_e8;
                                puVar9 = (undefined8 *)
                                        FUN_14005c3c0(*(undefined8 * )(*(longlong * )(local_e8 + 0x20) + 0xa0),
                                                      local_f0);
                                lVar19 = local_e8;
                                puVar16 = *(undefined8 * *)(lVar13 + 0x10);
                                *puVar16 = *puVar9;
                                *(undefined4 * )(puVar16 + 1) = *(undefined4 * )(puVar9 + 1);
                                *(longlong * )(lVar13 + 0x10) = *(longlong * )(lVar13 + 0x10) + 0x10;
                                lVar13 = FUN_14018f0e0(local_78, L"strFunction");
                                if (*(longlong * )(lVar13 + 8) == 0) {
                                    *(undefined4 * )(*(longlong * )(lVar19 + 0x10) + 8) = 0;
                                    *(longlong * )(lVar19 + 0x10) = *(longlong * )(lVar19 + 0x10) + 0x10;
                                } else {
                                    lVar18 = -1;
                                    do {
                                        lVar18 = lVar18 + 1;
                                    } while (*(char *) (*(longlong * )(lVar13 + 8) + lVar18) != '\0');
                                    FUN_140058710(lVar19);
                                }
                                if (local_70 != (undefined2 *) 0x0) {
                                    FUN_14018b900(local_70, 0);
                                }
                                lVar19 = *(longlong * )(local_e8 + 0x10) + -0x10;
                                FUN_14005e8e0(local_e8, *(longlong * )(local_e8 + 0x10) + -0x20, lVar19, lVar19);
                                puVar3 = *(undefined * *)(local_e8 + 0x10);
                                if ((puVar3 == &DAT_140a12148) || (*(int *) (puVar3 + -8) != 4)) {
                                    *(undefined * *)(local_e8 + 0x10) = puVar3 + -0x20;
                                } else {
                                    uVar8 = FUN_140058540(local_e8, 0xffffffff, 0);
                                    FUN_14018f2d0(local_78, uVar8);
                                    puVar5 = local_70;
                                    if (puVar12 != (undefined2 *) 0x0) {
                                        FUN_14018b900(puVar12, 0);
                                    }
                                    *(longlong * )(local_e8 + 0x10) = *(longlong * )(local_e8 + 0x10) + -0x20;
                                    puVar12 = puVar5;
                                }
                            }
                            if (puVar12 == (undefined2 *) 0x0) {
                                local_res20 = 0;
                            } else {
                                FUN_14018dd50(&local_res20, puVar12);
                            }
                            if (puVar11 == (undefined2 *) 0x0) {
                                local_res18 = 0;
                                plVar14 = &local_res18;
                            } else {
                                plVar14 = (longlong *) FUN_14018dd50(&local_res18, puVar11);
                            }
                            FUN_1401180d0(lVar7, *plVar14);
                            if (local_res18 != 0) {
                                (**(code * *)(*(longlong * )(local_res18 + -0x10) + 8))(local_res18 + -0x10);
                            }
                            if (local_res20 != 0) {
                                (**(code * *)(*(longlong * )(local_res20 + -0x10) + 8))(local_res20 + -0x10);
                            }
                            if (puVar12 != (undefined2 *) 0x0) {
                                FUN_14018b900(puVar12, 0);
                            }
                            if (puVar11 != (undefined2 *) 0x0) {
                                FUN_14018b900(puVar11, 0);
                            }
                        }
                    }
                    local_f8 = &PTR_FUN_140b56a08;
                    if (local_e8 != 0) {
                        FUN_1400579e0(local_e8);
                    }
                }
                local_98 = &PTR_FUN_140b56a08;
                lVar19 = local_50;
                if (local_88 != 0) {
                    FUN_1400579e0();
                }
            }
        }
        puVar4 = *ppuVar1;
        puVar4[2] = 1;
        *puVar4 = (uint)(local_res10 != '\0');
        *ppuVar1 = *ppuVar1 + 4;
        local_d8 = &PTR_FUN_140b56a08;
        if (local_c8 != 0) {
            FUN_1400579e0();
        }
    }
    local_b8 = &PTR_FUN_140b56a08;
    local_50 = lVar19;
    if (local_a8 != 0) {
        FUN_1400579e0();
    }
    LAB_14011a5a4:
    if (local_50 != 0) {
        FUN_14018b900(local_50, 0);
    }
    return 1;
}


undefined8 FUN_14011a5f0(longlong param_1) {
    longlong lVar1;
    undefined8 *puVar2;
    undefined4 *puVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong lVar6;
    ulonglong uVar7;
    undefined local_48[8];
    longlong local_40;
    longlong local_38;
    undefined local_28[8];
    longlong local_20;

    uVar7 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar7 * 8) + 400) ==
                param_1) {
                lVar6 = *(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar7 * 8);
                goto LAB_14011a63c;
            }
            uVar7 = (ulonglong)((int) uVar7 + 1);
        } while (uVar7 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar6 = 0;
    LAB_14011a63c:
    lVar1 = *(longlong * )(lVar6 + 400);
    lVar4 = FUN_14018f0e0(local_28, 0);
    uVar5 = *(undefined8 * )(lVar4 + 8);
    puVar2 = *(undefined8 * *)(lVar1 + 0x18);
    if (((puVar2 < *(undefined8 * *)(lVar1 + 0x10)) && (puVar2 != &DAT_140a12138)) &&
        (0 < *(int *) (puVar2 + 1))) {
        uVar5 = FUN_140056bb0(lVar1, 1);
    }
    FUN_14018f2d0(local_48, uVar5);
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    if (local_40 != local_38) {
        lVar6 = FUN_140151c50(lVar6 + 0xa18, local_40);
        if (lVar6 != 0) {
            puVar3 = *(undefined4 * *)(param_1 + 0x10);
            *puVar3 = 1;
            puVar3[2] = 1;
            goto LAB_14011a6e9;
        }
    }
    puVar3 = *(undefined4 * *)(param_1 + 0x10);
    *puVar3 = 0;
    puVar3[2] = 1;
    LAB_14011a6e9:
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    if (local_40 != 0) {
        FUN_14018b900(local_40, 0);
    }
    return 1;
}

