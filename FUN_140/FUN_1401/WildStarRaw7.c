//
// Created by flop on 04.04.22.
//
#include "../../include.h"

void FUN_140140f70(longlong param_1, undefined8 param_2) {
    longlong lVar1;
    longlong *plVar2;

    lVar1 = *(longlong * )(param_1 + 0x300);
    plVar2 = (longlong *) FUN_14018b280(0x48);
    if (plVar2 + 2 != (longlong *) 0x0) {
        FUN_14013d990(plVar2 + 2, param_1 + 0x2c0);
    }
    *plVar2 = lVar1;
    plVar2[1] = *(longlong * )(lVar1 + 8);
    **(longlong * **)(lVar1 + 8) = plVar2;
    *(longlong * *)(lVar1 + 8) = plVar2;
    FUN_140140ff0(param_1 + 0x2c0, param_2);
    return;
}


uint *FUN_140140ff0(uint *param_1, uint *param_2) {
    uint uVar1;
    int iVar2;
    longlong lVar3;

    if (param_1 != param_2) {
        FUN_1401429a0(DAT_140c63678, *param_1);
        uVar1 = *param_2;
        *param_1 = uVar1;
        if ((ulonglong) uVar1 < *(ulonglong * )(DAT_140c63678 + 0x30)) {
            lVar3 = *(longlong * )(DAT_140c63678 + 0x28) + (ulonglong) uVar1 * 0x20;
            iVar2 = *(int *) (lVar3 + 0x10);
            if (iVar2 - 1U < 0xfffffffe) {
                *(int *) (lVar3 + 0x10) = iVar2 + 1;
            }
        }
    }
    if (param_2 + 2 != param_1 + 2) {
        FUN_14001c480(param_1 + 2, *(undefined8 * )(param_2 + 4), *(undefined8 * )(param_2 + 6));
    }
    *(undefined8 * )(param_1 + 10) = *(undefined8 * )(param_2 + 10);
    param_1[0xc] = param_2[0xc];
    return param_1;
}


void FUN_140141080(longlong param_1) {
    longlong *plVar1;
    longlong lVar2;
    longlong *plVar3;

    plVar1 = *(longlong * *)(param_1 + 0x300);
    if ((longlong * ) * plVar1 != plVar1) {
        FUN_140140ff0(param_1 + 0x2c0, plVar1[1] + 0x10);
        plVar1 = *(longlong * *)(*(longlong * )(param_1 + 0x300) + 8);
        lVar2 = *plVar1;
        plVar3 = (longlong *) plVar1[1];
        *plVar3 = lVar2;
        *(longlong * *)(lVar2 + 8) = plVar3;
        if (plVar1[4] != 0) {
            FUN_14018b900(plVar1[4], 0);
        }
        FUN_1401429a0(DAT_140c63678, *(undefined4 * )(plVar1 + 2));
        FUN_14018b900(plVar1, 0);
        return;
    }
    return;
}


void FUN_140141100(undefined8 param_1, float param_2, longlong param_3, undefined8 param_4,
                   undefined8 param_5, undefined8 param_6) {
    longlong *plVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar5[16];

    auVar5 = CONCAT412(in_XMM6_Dd, CONCAT48(in_XMM6_Dc, CONCAT44(in_XMM6_Db, in_XMM6_Da)));
    if ((param_2 != *(float *) (param_3 + 0x2a0)) || (*(longlong * )(param_3 + 0x298) == 0)) {
        *(float *) (param_3 + 0x2a0) = param_2;
        FUN_140140280();
        if (25.0 <= param_2) {
            puVar3 = (undefined8 *) 0x0;
            puVar4 = puVar3;
            if (*(longlong * )(param_3 + 0x10) != 0) {
                puVar4 = *(undefined8 * *)(*(longlong * )(param_3 + 0x10) + 0x10);
            }
            lVar2 = FUN_14018b280(0x30);
            if (lVar2 != 0) {
                puVar3 = (undefined8 *) FUN_14013eef0(lVar2, puVar4, param_3, param_6, auVar5);
            }
            plVar1 = *(longlong * *)(param_3 + 0x298);
            if (plVar1 != (longlong *) 0x0) {
                (**(code * *)(*plVar1 + 0x70))(plVar1, puVar3);
            }
            if (puVar3 != (undefined8 *) 0x0) {
                (**(code * *) * puVar3)(puVar3, 1);
            }
        }
        *(undefined * )(param_3 + 0x339) = 0;
    }
    return;
}


void FUN_1401411c0(longlong param_1) {
    undefined8 *puVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong *plVar4;
    longlong *plVar5;
    float fVar6;

    plVar5 = (longlong *) 0x0;
    if (*(int *) (param_1 + 0x74) < 0) {
        FUN_1401a59a0(param_1 + 0x18);
        *(undefined4 * )(param_1 + 0x74) = 0;
        lVar2 = *(longlong * )(param_1 + 0x80);
        *(undefined8 * )(param_1 + 0x80) = 0;
        if (lVar2 != 0) {
            (**(code * *)(*(longlong * )(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        FUN_14018b900(*(undefined8 * )(param_1 + 0x88), 0);
        *(undefined8 * )(param_1 + 0x88) = 0;
    }
    FUN_140140280(param_1);
    *(undefined4 * )(param_1 + 0x340) = 0;
    plVar4 = plVar5;
    if (*(longlong * )(param_1 + 0x10) != 0) {
        plVar4 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x10);
    }
    lVar2 = FUN_14018b280(0x30);
    plVar3 = plVar5;
    if (lVar2 != 0) {
        plVar3 = (longlong *) FUN_14013eef0(lVar2, plVar4, param_1);
    }
    puVar1 = *(undefined8 * *)(param_1 + 0x48);
    while ((plVar4 = plVar5, puVar1 != (undefined8 *) 0x0 &&
                             (plVar4 = (longlong * )(**(code * *) * puVar1)(puVar1), plVar4 == (longlong *) 0x0))) {
        puVar1 = (undefined8 *) puVar1[9];
    }
    *(longlong * *)(param_1 + 0x298) = plVar4;
    if (plVar4 != (longlong *) 0x0) {
        (**(code * *)(*plVar4 + 0x70))(plVar4, plVar3);
    }
    if (plVar3 != (longlong *) 0x0) {
        (**(code * *) * plVar3)(plVar3, 1);
    }
    *(undefined2 * )(param_1 + 0x338) = 0;
    *(undefined4 * )(param_1 + 0x33c) = 0;
    *(undefined8 * )(param_1 + 0x348) = 0;
    if (*(longlong * )(param_1 + 0x330) != 0) {
        do {
            plVar4 = *(longlong * *)(*(longlong * )(param_1 + 0x328) + (longlong) plVar5 * 8);
            fVar6 = (float) (**(code * *)(*plVar4 + 0x18))(plVar4);
            *(float *) (param_1 + 0x33c) = fVar6 + *(float *) (param_1 + 0x33c);
            lVar2 = (**(code * *)(*plVar4 + 0x20))(plVar4);
            plVar5 = (longlong * )((longlong) plVar5 + 1);
            *(longlong * )(param_1 + 0x348) = *(longlong * )(param_1 + 0x348) + lVar2;
        } while (plVar5 < *(longlong * *)(param_1 + 0x330));
    }
    return;
}


void FUN_140141330(longlong param_1) {
    longlong *plVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined4 *puVar4;
    longlong *plVar5;
    undefined8 *puVar6;
    longlong *plVar7;
    float fVar8;
    undefined4 local_68;
    float fStack100;
    undefined4 uStack96;
    undefined4 uStack92;
    undefined4 local_58;
    float fStack84;
    undefined4 uStack80;
    undefined4 uStack76;
    undefined4 local_48;
    undefined4 uStack68;
    undefined4 uStack64;
    undefined4 uStack60;
    undefined local_38[48];

    puVar6 = *(undefined8 * *)(param_1 + 0x48);
    plVar7 = (longlong *) 0x0;
    while ((plVar2 = plVar7, puVar6 != (undefined8 *) 0x0 &&
                             (plVar2 = (longlong * )(**(code * *) * puVar6)(puVar6), plVar2 == (longlong *) 0x0))) {
        puVar6 = (undefined8 *) puVar6[9];
    }
    *(longlong * *)(param_1 + 0x298) = plVar2;
    if (plVar2 == (longlong *) 0x0) {
        LAB_14014154f:
        *(undefined4 * )(param_1 + 0x33c) = 0;
        *(undefined8 * )(param_1 + 0x348) = 0;
        if (*(longlong * )(param_1 + 0x330) != 0) {
            do {
                plVar2 = *(longlong * *)(*(longlong * )(param_1 + 0x328) + (longlong) plVar7 * 8);
                fVar8 = (float) (**(code * *)(*plVar2 + 0x18))(plVar2);
                *(float *) (param_1 + 0x33c) = fVar8 + *(float *) (param_1 + 0x33c);
                lVar3 = (**(code * *)(*plVar2 + 0x20))(plVar2);
                plVar7 = (longlong * )((longlong) plVar7 + 1);
                *(longlong * )(param_1 + 0x348) = *(longlong * )(param_1 + 0x348) + lVar3;
            } while (plVar7 < *(longlong * *)(param_1 + 0x330));
        }
        return;
    }
    if (500 < *(ulonglong * )(param_1 + 0x330)) {
        do {
            plVar2 = **(longlong * **)(param_1 + 0x328);
            lVar3 = (**(code * *)(*plVar2 + 0x10))(plVar2, &local_58);
            fVar8 = *(float *) (lVar3 + 0x14);
            (**(code * *) * plVar2)(plVar2, 1);
            FUN_140141c00(param_1 + 0x328);
        } while (500 < *(ulonglong * )(param_1 + 0x330));
        plVar2 = *(longlong * *)(param_1 + 0x330);
        *(float *) (param_1 + 0x2b4) = *(float *) (param_1 + 0x2b4) - fVar8;
        plVar5 = plVar7;
        if (plVar2 != (longlong *) 0x0) {
            do {
                plVar1 = *(longlong * *)(*(longlong * )(param_1 + 0x328) + (longlong) plVar5 * 8);
                (**(code * *)(*plVar1 + 0x10))(plVar1, &local_58);
                local_68 = local_58;
                uStack96 = uStack80;
                uStack92 = uStack76;
                fStack100 = fStack84 - fVar8;
                plVar1 = *(longlong * *)(*(longlong * )(param_1 + 0x328) + (longlong) plVar5 * 8);
                (**(code * *)(*plVar1 + 0x68))(plVar1, &local_68);
                plVar1 = *(longlong * *)(*(longlong * )(param_1 + 0x328) + (longlong) plVar5 * 8);
                puVar4 = (undefined4 * )(**(code * *)(*plVar1 + 0x10))(plVar1, local_38);
                plVar5 = (longlong * )((longlong) plVar5 + 1);
                local_58 = *puVar4;
                fStack84 = (float) puVar4[1];
                uStack80 = puVar4[2];
                uStack76 = puVar4[3];
                local_48 = puVar4[4];
                uStack68 = puVar4[5];
                uStack64 = puVar4[6];
                uStack60 = puVar4[7];
            } while (plVar5 < plVar2);
        }
    }
    plVar2 = plVar7;
    if (*(longlong * )(param_1 + 0x10) != 0) {
        plVar2 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x10);
    }
    lVar3 = FUN_14018b280(0x30);
    plVar5 = plVar7;
    if (lVar3 != 0) {
        plVar5 = (longlong *) FUN_14013eef0(lVar3, plVar2, param_1);
    }
    puVar6 = *(undefined8 * *)(*(longlong * )(param_1 + 0x298) + 0x30);
    while ((plVar2 = plVar7, puVar6 != (undefined8 *) 0x0 &&
                             (plVar2 = (longlong * )(**(code * *) * puVar6)(puVar6), plVar2 == (longlong *) 0x0))) {
        puVar6 = (undefined8 *) puVar6[9];
    }
    do {
        do {
            puVar6 = (undefined8 *) plVar2[9];
            while (true) {
                if (puVar6 == (undefined8 *) 0x0) {
                    (**(code * *)(*plVar2 + 0x70))(plVar2, plVar5);
                    if (plVar5 != (longlong *) 0x0) {
                        (**(code * *) * plVar5)(plVar5, 1);
                    }
                    *(undefined * )(param_1 + 0x339) = 0;
                    goto LAB_14014154f;
                }
                lVar3 = (**(code * *) * puVar6)(puVar6);
                if (lVar3 != 0) break;
                puVar6 = (undefined8 *) puVar6[9];
            }
            puVar6 = (undefined8 *) plVar2[9];
            plVar2 = plVar7;
        } while (puVar6 == (undefined8 *) 0x0);
        do {
            plVar2 = (longlong * )(**(code * *) * puVar6)(puVar6);
            if (plVar2 != (longlong *) 0x0) break;
            puVar6 = (undefined8 *) puVar6[9];
            plVar2 = plVar7;
        } while (puVar6 != (undefined8 *) 0x0);
    } while (true);
}


void FUN_140141600(longlong param_1, undefined8 param_2, short *param_3, short *param_4) {
    longlong lVar1;
    longlong *plVar2;
    undefined8 *puVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 *puVar6;

    lVar1 = param_1 + 0x18;
    FUN_1401a59a0(lVar1);
    puVar6 = (undefined8 *) 0x0;
    *(undefined4 * )(param_1 + 0x74) = 0;
    lVar4 = *(longlong * )(param_1 + 0x80);
    *(undefined8 * )(param_1 + 0x80) = 0;
    if (lVar4 != 0) {
        (**(code * *)(*(longlong * )(lVar4 + -0x10) + 8))(lVar4 + -0x10);
    }
    FUN_14018b900(*(undefined8 * )(param_1 + 0x88), 0);
    plVar2 = (longlong * )(param_1 + 0x98);
    *(undefined8 * )(param_1 + 0x88) = 0;
    puVar3 = (undefined8 * )(**(code * *)(*plVar2 + 0x10))(plVar2);
    if (puVar3 != (undefined8 *) 0x0) {
        puVar3[1] = lVar1;
        puVar3[2] = 0;
        *(undefined4 * )(puVar3 + 3) = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3[8] = 0;
        puVar3[9] = 0;
        puVar3[10] = 0;
        *puVar3 = &PTR_FUN_140b5eba0;
        *(undefined4 * )(puVar3 + 0xb) = 0;
        puVar3[0xc] = 0;
        puVar6 = puVar3;
    }
    puVar6[10] = plVar2;
    FUN_1401a4c50(puVar6 + 3, L"MLDoc");
    FUN_1401a5a70(lVar1, puVar6);
    puVar3 = (undefined8 * )(**(code * *)(*plVar2 + 0x10))(plVar2);
    if (puVar3 != (undefined8 *) 0x0) {
        puVar3[1] = lVar1;
        puVar3[2] = 0;
        *(undefined4 * )(puVar3 + 3) = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3[8] = 0;
        puVar3[9] = 0;
        puVar3[10] = 0;
        *puVar3 = &PTR_FUN_140b5eba0;
        *(undefined4 * )(puVar3 + 0xb) = 0;
        puVar3[0xc] = 0;
    }
    puVar3[10] = plVar2;
    FUN_1401a4c50(puVar3 + 3, &DAT_1409db474);
    FUN_1401a5a70(puVar6, puVar3);
    if ((param_3 != (short *) 0x0) && (*param_3 != 0)) {
        lVar4 = FUN_1401a6c70(puVar3, &DAT_140a31aa8);
        FUN_1401a4c50(lVar4 + 0x20, param_3);
    }
    if ((param_4 != (short *) 0x0) && (*param_4 != 0)) {
        lVar4 = FUN_1401a6c70(puVar3, L"TextColor");
        FUN_1401a4c50(lVar4 + 0x20, param_4);
    }
    uVar5 = FUN_1401a7880(lVar1, param_2);
    FUN_1401a5a70(puVar3, uVar5);
    FUN_1401411c0(param_1);
    return;
}


void FUN_1401417d0(longlong param_1, undefined8 param_2) {
    undefined8 *puVar1;
    longlong local_res8[4];

    puVar1 = (undefined8 *) FUN_14018d540(local_res8, L"<MLDoc>%s</MLDoc>", param_2);
    FUN_1401a7a60(param_1 + 0x18, *puVar1, 0xffffffffffffffff);
    if (local_res8[0] != 0) {
        (**(code * *)(*(longlong * )(local_res8[0] + -0x10) + 8))(local_res8[0] + -0x10);
    }
    FUN_1401411c0(param_1);
    return;
}


void FUN_140141820(undefined8 param_1, undefined8 param_2, float param_3, longlong param_4,
                   float *param_5) {
    longlong *plVar1;
    char cVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    float fVar5;
    float local_28;
    float fStack36;
    float fStack32;
    float fStack28;

    if (*(char *) (param_4 + 0x339) != '\0') {
        FUN_1401411c0();
    }
    uVar3 = 0;
    local_28 = 0.0;
    if (*(char *) (param_4 + 0x338) == '\0') {
        uVar4 = uVar3;
        if (*(longlong * )(param_4 + 0x330) != 0) {
            do {
                plVar1 = *(longlong * *)(*(longlong * )(param_4 + 0x328) + uVar4 * 8);
                cVar2 = (**(code * *)(*plVar1 + 0x48))(plVar1, &local_28);
                if (cVar2 == '\0') {
                    return;
                }
                uVar4 = uVar4 + 1;
            } while (uVar4 < *(ulonglong * )(param_4 + 0x330));
        }
        *(undefined * )(param_4 + 0x338) = 1;
    }
    fVar5 = *param_5;
    fStack36 = param_5[1];
    fStack32 = param_5[2];
    fStack28 = param_5[3];
    local_28 = fVar5;
    if (*(longlong * )(param_4 + 0x330) != 0) {
        do {
            plVar1 = *(longlong * *)(*(longlong * )(param_4 + 0x328) + uVar3 * 8);
            (**(code * *)(*plVar1 + 0x28))(fVar5, param_2, param_3, plVar1, param_5);
            fVar5 = (float) (**(code * *)(*plVar1 + 0x18))(plVar1);
            if (param_3 < fVar5) {
                return;
            }
            fVar5 = (float) (**(code * *)(*plVar1 + 0x18))(plVar1);
            uVar3 = uVar3 + 1;
            param_3 = param_3 - fVar5;
        } while (uVar3 < *(ulonglong * )(param_4 + 0x330));
    }
    return;
}


undefined (*) [16]
FUN_140141910(longlong
param_1,
undefined (*param_2)[16]
)

{
longlong *plVar1;
float *pfVar2;
longlong lVar3;
ulonglong uVar4;
float fVar5;
float fVar6;
undefined local_98[144];

uVar4 = 0;
*
param_2 = ZEXT816(0);
fVar5 = *(float *) (param_1 + 0x2a0);
if (*(longlong *)(param_1 + 0x330) != 0) {
do {
plVar1 = *(longlong * *)(*(longlong * )(param_1 + 0x328) + uVar4 * 8);
pfVar2 = (float *) (**(code * *)(*plVar1 + 0x10))(plVar1, local_98);
if (*pfVar2 <= fVar5) {
fVar5 = *pfVar2;
}
lVar3 = (**(code * *)(*plVar1 + 0x10))(plVar1, local_98);
fVar6 = *(float *) *param_2;
if (*(float *)*param_2 <= *(float *)(lVar3 + 0x10)) {
fVar6 = *(float *) (lVar3 + 0x10);
}
*(float *)*
param_2 = fVar6;
lVar3 = (**(code * *)(*plVar1 + 0x10))(plVar1, local_98);
uVar4 = uVar4 + 1;
fVar6 = *(float *) (*param_2 + 4);
if (*(float *)(*param_2 + 4) <= *(float *)(lVar3 + 0x14)) {
fVar6 = *(float *) (lVar3 + 0x14);
}
*(float *)(*param_2 + 4) =
fVar6;
} while (uVar4 < *(ulonglong *)(param_1 + 0x330));
}
fVar5 = *(float *) *param_2 - fVar5;
fVar6 = 0.0;
if (0.0 <= fVar5) {
fVar6 = fVar5;
}
*(float *)*
param_2 = fVar6;
return
param_2;
}


undefined8 FUN_140141a40(longlong
param_1,
float *param_2
)

{
longlong *plVar1;
float *pfVar2;
undefined8 uVar3;
ulonglong uVar4;
undefined local_48[16];
float local_28;
float fStack36;
float fStack32;
float fStack28;

uVar4 = 0;
if (*(longlong *)(param_1 + 0x330) != 0) {
do {
plVar1 = *(longlong * *)(*(longlong * )(param_1 + 0x328) + uVar4 * 8);
(**(code **)(*plVar1 + 0x10))(plVar1,&local_28);
pfVar2 = (float *) (**(code * *)(*plVar1 + 0x10))(plVar1, local_48);
if ((((*pfVar2 <= *param_2) && (*param_2<pfVar2[4])) && (pfVar2[1] <= param_2[1])) &&
(param_2[1] < pfVar2[5])) {
local_48 = CONCAT412(param_2[3] - fStack28,
                     CONCAT48(param_2[2] - fStack32,
                              CONCAT44(param_2[1] - fStack36, *param_2 - local_28)));
uVar3 = (**(code * *)(*plVar1 + 0x30))(plVar1, local_48);
return
uVar3;
}
uVar4 = uVar4 + 1;
} while (uVar4 < *(ulonglong *)(param_1 + 0x330));
}
return 0;
}


undefined8 FUN_140141b00(longlong
param_1,
float *param_2
)

{
float fVar1;
float fVar2;
longlong *plVar3;
float *pfVar4;
undefined8 uVar5;
ulonglong uVar6;
float local_38;
float fStack52;
float fStack48;
float fStack44;

uVar6 = 0;
if (*(longlong *)(param_1 + 0x330) != 0) {
do {
plVar3 = *(longlong * *)(*(longlong * )(param_1 + 0x328) + uVar6 * 8);
pfVar4 = (float *) (**(code * *)(*plVar3 + 0x10))(plVar3, &local_38);
fVar1 = *pfVar4;
fVar2 = pfVar4[1];
pfVar4 = (float *) (**(code * *)(*plVar3 + 0x10))(plVar3, &local_38);
if ((((*pfVar4 <= *param_2) && (*param_2<pfVar4[4])) && (pfVar4[1] <= param_2[1])) &&
(param_2[1] < pfVar4[5])) {
local_38 = *param_2 - (float) (int) fVar1;
fStack52 = param_2[1] - (float) (int) fVar2;
fStack48 = param_2[2] - 0.0;
fStack44 = param_2[3] - 0.0;
uVar5 = (**(code * *)(*plVar3 + 0x40))(plVar3, &local_38);
return
uVar5;
}
uVar6 = uVar6 + 1;
} while (uVar6 < *(ulonglong *)(param_1 + 0x330));
}
return 0;
}


void FUN_140141c00(longlong * param_1) {
    int iVar1;
    longlong lVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    uVar5 = param_1[1] - 1;
    FUN_1407db590(*param_1, *param_1 + 8, uVar5 * 8);
    puVar3 = (undefined8 * ) * param_1;
    if (uVar5 == 0) goto LAB_140141cbc;
    if (puVar3 == (undefined8 *) 0x0) {
        lVar2 = uVar5 * 8 + 0x10;
        uVar4 = uVar5;
    } else {
        if (uVar5 < (ulonglong) puVar3[-1] || uVar5 == puVar3[-1]) goto LAB_140141cbc;
        lVar2 = FUN_14018a3e0(uVar5 * 8 + 0x10);
        uVar4 = lVar2 - 0x10U >> 3;
        lVar2 = (lVar2 - 0x10U & 0xfffffffffffffff8) + 0x10;
        iVar1 = (**(code **) puVar3[-2])(puVar3 + -2, lVar2);
        if (iVar1 != 0) {
            puVar3[-1] = uVar4;
            goto LAB_140141cbc;
        }
    }
    puVar3 = (undefined8 *) FUN_14018b280(lVar2, 0);
    if (puVar3 != (undefined8 *) 0x0) {
        puVar3[1] = uVar4;
        *puVar3 = &PTR_LAB_140b55060;
    }
    puVar3 = puVar3 + 2;
    LAB_140141cbc:
    if ((undefined8 * ) * param_1 != puVar3) {
        FUN_1407db590(puVar3, (undefined8 * ) * param_1, uVar5 * 8);
        lVar2 = *param_1;
        if (lVar2 != 0) {
            (**(code * *)(*(longlong * )(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        *param_1 = (longlong)
        puVar3;
    }
    param_1[1] = uVar5;
    return;
}


void FUN_140141d00(longlong
param_1)

{
longlong *plVar1;
longlong lVar2;
ulonglong uVar3;

FUN_140008410(param_1
+ 0x58);
FUN_140008410(param_1
+ 0x78);
uVar3 = 0;
if (*(longlong *)(param_1 + 0x50) != 0) {
do {
plVar1 = *(longlong * *)(*(longlong * )(param_1 + 0x48) + uVar3 * 8);
if (plVar1 != (longlong *)0x0) {
lVar2 = *plVar1;
if (lVar2 != 0) {
(**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
}
FUN_14018b900(plVar1,
0);
}
uVar3 = uVar3 + 1;
} while (uVar3 < *(ulonglong *)(param_1 + 0x50));
}
*(undefined8 *)(param_1 + 0x50) = 0;
DAT_140c63678 = 0;
FUN_140008410(param_1
+ 0x78);
FUN_14018b900(*(undefined8
*)(param_1 + 0x80),0);
FUN_140008410(param_1
+ 0x58);
FUN_14018b900(*(undefined8
*)(param_1 + 0x60),0);
lVar2 = *(longlong * )(param_1 + 0x48);
if (lVar2 != 0) {
(**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
}
lVar2 = *(longlong * )(param_1 + 0x28);
if (lVar2 != 0) {
(**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
}
FUN_140019490(param_1);
FUN_14018b900(*(undefined8
*)(param_1 + 0x10),0);
*(undefined8 *)(param_1 + 0x10) = 0;
return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140141e10(longlong
param_1,
ulonglong param_2
)

{
ulonglong *puVar1;
char cVar2;
short sVar6;
short sVar7;
short sVar8;
short sVar9;
unkbyte10 Var10;
undefined auVar11[12];
undefined auVar12[14];
short sVar13;
undefined4 uVar14;
undefined6 uVar15;
ulonglong uVar16;
longlong lVar17;
ulonglong uVar18;
int iVar19;
uint uVar21;
int iVar22;
undefined in_XMM0[16];
undefined auVar20[16];
int iVar23;
char cVar24;
char cVar25;
undefined4 local_res10[2];
char cVar3;
char cVar4;
char cVar5;

if ((param_2 & 0xffffffff) < *(ulonglong *)(param_1 + 0x30)) {
lVar17 = (param_2 & 0xffffffff) * 0x20;
if (*(int *)(lVar17 + 0x10 + *(longlong *)(param_1 + 0x28)) != 0) {
auVar20 = maxps(in_XMM0 & (undefined[16]) 0x0,
                *(undefined(*)[16])(lVar17 + *(longlong * )(param_1 + 0x28)));
auVar20 = minps(auVar20, _DAT_140b7b240);
iVar19 = (int) (SUB164(auVar20, 0) * 255.0 + 0.5);
uVar21 = (uint)(SUB164(auVar20 >> 0x20, 0) * 255.0 + 0.5);
iVar22 = (int) (SUB164(auVar20 >> 0x40, 0) * 255.0 + 0.5);
iVar23 = (int) (SUB164(auVar20 >> 0x60, 0) * 255.0 + 0.5);
cVar24 = (char) ((uint) iVar19 >> 0x10);
cVar25 = (char) ((uint) iVar23 >> 0x10);
uVar16 = (ulonglong)
        CONCAT16((char) (uVar21 >> 0x10),
                 CONCAT15((char) (uVar21 >> 8), CONCAT14((char) uVar21, iVar22)));
uVar18 = ((ulonglong) uVar21 & 0xff000000) << 0x20 | uVar16;
Var10 = CONCAT19((char) ((uint) iVar19 >> 8), CONCAT18((char) iVar19, uVar18));
auVar11 = CONCAT111((char) ((uint) iVar19 >> 0x18), CONCAT110(cVar24, Var10));
auVar12 = CONCAT113((char) ((uint) iVar23 >> 8), CONCAT112((char) iVar23, auVar11));
sVar6 = (short) iVar22;
cVar2 = (0 < sVar6) * (sVar6 < 0xff) * (char) iVar22 - (0xff < sVar6);
sVar6 = (short) (uVar16 >> 0x10);
sVar7 = (short) (uVar16 >> 0x20);
cVar3 = (0 < sVar7) * (sVar7 < 0xff) * (char) (uVar16 >> 0x20) - (0xff < sVar7);
sVar7 = (short) (uVar18 >> 0x30);
sVar8 = (short) ((unkuint10) Var10 >> 0x40);
cVar4 = (0 < sVar8) * (sVar8 < 0xff) * (char) iVar19 - (0xff < sVar8);
sVar8 = SUB122(auVar11 >> 0x50, 0);
sVar9 = SUB142(auVar12 >> 0x60, 0);
cVar5 = (0 < sVar9) * (sVar9 < 0xff) * (char) iVar23 - (0xff < sVar9);
sVar9 = SUB162(CONCAT115((char) ((uint) iVar23 >> 0x18), CONCAT114(cVar25, auVar12)) >> 0x70, 0);
sVar13 = CONCAT11((0 < sVar6) * (sVar6 < 0xff) * (char) (uVar16 >> 0x10) - (0xff < sVar6), cVar2
);
uVar14 = CONCAT13((0 < sVar7) * (sVar7 < 0xff) * (char) (uVar16 >> 0x30) - (0xff < sVar7),
                  CONCAT12(cVar3, sVar13));
uVar15 = CONCAT15((0 < sVar8) * (sVar8 < 0xff) * cVar24 - (0xff < sVar8),
                  CONCAT14(cVar4, uVar14));
sVar6 = (short) ((uint) uVar14 >> 0x10);
sVar7 = (short) ((uint6) uVar15 >> 0x20);
sVar8 = (short) (CONCAT17((0 < sVar9) * (sVar9 < 0xff) * cVar25 - (0xff < sVar9),
                          CONCAT16(cVar5, uVar15)) >> 0x30);
local_res10[0] =
CONCAT13((0 < sVar8) * (sVar8 < 0xff) * cVar5 - (0xff < sVar8),
CONCAT12((0 < sVar7) * (sVar7 < 0xff) * cVar4 - (0xff < sVar7),
CONCAT11((0 < sVar6) * (sVar6 < 0xff) * cVar3 - (0xff < sVar6),
(0 < sVar13) * (sVar13 < 0xff) * cVar2 - (0xff < sVar13))));
uVar18 = (**(code * *)(param_1 + 0x18))(local_res10);
puVar1 = *(ulonglong * *)
        (*(longlong * )(param_1 + 0x10) + (uVar18 % *(ulonglong * )(param_1 + 8)) * 8);
while( true ) {
if (puVar1 == (ulonglong *)0x0) {
// WARNING: Read-only address (ram,0x000140b7b240) is written
// WARNING: Read-only address (ram,0x000140b7b240) is written
return 1;
}
// WARNING: Read-only address (ram,0x000140b7b240) is written
if ((uVar18 == *puVar1) &&
(
iVar19 = (**(code * *)(param_1 + 0x20))(local_res10, puVar1 + 2), iVar19
!= 0)) break;
puVar1 = (ulonglong *) puVar1[1];
}
if ((uint *)((longlong)puVar1 + 0x14) == (uint *)0x0) {
return 1;
}
uVar21 = *(uint * )((longlong)
puVar1 + 0x14);
while( true ) {
if (uVar21 == 0xffffffff) {
return 1;
}
if (uVar21 == (uint)(param_2 & 0xffffffff)) break;
uVar21 = *(uint * )((ulonglong) uVar21 * 0x20 + 0x14 + *(longlong * )(param_1 + 0x28));
}
return 0;
}
}
return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_140141f10(longlong * param_1, undefined(*param_2)[16]) {
    float *pfVar1;
    undefined4 *puVar2;
    uint uVar3;
    uint uVar4;
    undefined4 uVar5;
    longlong lVar6;
    ulonglong uVar7;
    char cVar8;
    short sVar12;
    short sVar13;
    short sVar14;
    short sVar15;
    unkbyte10 Var16;
    undefined auVar17[12];
    undefined auVar18[14];
    short sVar19;
    undefined6 uVar20;
    float fVar21;
    float fVar22;
    undefined4 uVar23;
    undefined4 uVar24;
    bool bVar25;
    int iVar26;
    uint uVar27;
    ulonglong in_RAX;
    ulonglong uVar28;
    ulonglong uVar29;
    ulonglong *puVar30;
    uint uVar31;
    longlong lVar32;
    int iVar35;
    undefined auVar33[16];
    undefined auVar34[16];
    int iVar36;
    char cVar37;
    char cVar38;
    float in_xmmTmp2_Dd;
    uint local_res10[2];
    char cVar9;
    char cVar10;
    char cVar11;

    auVar34 = *param_2;
    fVar21 = SUB164(auVar34 >> 0x20, 0);
    fVar22 = SUB164(auVar34 >> 0x60, 0);
    iVar26 = movmskps((int) in_RAX,
                      CONCAT412(-(uint)(SUB164(_DAT_140b7b240 >> 0x60, 0) != in_xmmTmp2_Dd),
                                CONCAT48(-(uint)(SUB164(_DAT_140b7b240 >> 0x40, 0) != fVar22),
                                         CONCAT44(-(uint)(SUB164(_DAT_140b7b240 >> 0x20, 0) != fVar21),
                                                  -(uint)(SUB164(_DAT_140b7b240, 0) !=
                                                          SUB164(auVar34, 0))))));
    if (iVar26 == 0) {
        return 1;
    }
    auVar33 = CONCAT412(-(uint)(fRam0000000140c777dc != in_xmmTmp2_Dd),
                        CONCAT48(-(uint)(fRam0000000140c777d8 != fVar22),
                                 CONCAT44(-(uint)(fRam0000000140c777d4 != fVar21),
                                          -(uint)(_DAT_140c777d0 != SUB164(auVar34, 0)))));
    uVar27 = movmskps(iVar26, auVar33);
    if (uVar27 == 0) {
        return in_RAX & 0xffffffff00000000 | (ulonglong) uVar27;
    }
    auVar34 = maxps(auVar33 & (undefined[16]) 0x0, auVar34);
    auVar34 = minps(auVar34, _DAT_140b7b240);
    iVar26 = (int) (SUB164(auVar34, 0) * 255.0 + 0.5);
    uVar27 = (uint)(SUB164(auVar34 >> 0x20, 0) * 255.0 + 0.5);
    iVar35 = (int) (SUB164(auVar34 >> 0x40, 0) * 255.0 + 0.5);
    iVar36 = (int) (SUB164(auVar34 >> 0x60, 0) * 255.0 + 0.5);
    cVar37 = (char) ((uint) iVar26 >> 0x10);
    cVar38 = (char) ((uint) iVar36 >> 0x10);
    uVar29 = (ulonglong)
            CONCAT16((char) (uVar27 >> 0x10),
                     CONCAT15((char) (uVar27 >> 8), CONCAT14((char) uVar27, iVar35)));
    uVar28 = ((ulonglong) uVar27 & 0xff000000) << 0x20 | uVar29;
    Var16 = CONCAT19((char) ((uint) iVar26 >> 8), CONCAT18((char) iVar26, uVar28));
    auVar17 = CONCAT111((char) ((uint) iVar26 >> 0x18), CONCAT110(cVar37, Var16));
    auVar18 = CONCAT113((char) ((uint) iVar36 >> 8), CONCAT112((char) iVar36, auVar17));
    sVar12 = (short) iVar35;
    cVar8 = (0 < sVar12) * (sVar12 < 0xff) * (char) iVar35 - (0xff < sVar12);
    sVar12 = (short) (uVar29 >> 0x10);
    sVar13 = (short) (uVar29 >> 0x20);
    cVar9 = (0 < sVar13) * (sVar13 < 0xff) * (char) (uVar29 >> 0x20) - (0xff < sVar13);
    sVar13 = (short) (uVar28 >> 0x30);
    sVar14 = (short) ((unkuint10) Var16 >> 0x40);
    cVar10 = (0 < sVar14) * (sVar14 < 0xff) * (char) iVar26 - (0xff < sVar14);
    sVar14 = SUB122(auVar17 >> 0x50, 0);
    sVar15 = SUB142(auVar18 >> 0x60, 0);
    cVar11 = (0 < sVar15) * (sVar15 < 0xff) * (char) iVar36 - (0xff < sVar15);
    sVar15 = SUB162(CONCAT115((char) ((uint) iVar36 >> 0x18), CONCAT114(cVar38, auVar18)) >> 0x70, 0);
    sVar19 = CONCAT11((0 < sVar12) * (sVar12 < 0xff) * (char) (uVar29 >> 0x10) - (0xff < sVar12), cVar8);
    uVar5 = CONCAT13((0 < sVar13) * (sVar13 < 0xff) * (char) (uVar29 >> 0x30) - (0xff < sVar13),
                     CONCAT12(cVar9, sVar19));
    uVar20 = CONCAT15((0 < sVar14) * (sVar14 < 0xff) * cVar37 - (0xff < sVar14), CONCAT14(cVar10, uVar5)
    );
    sVar12 = (short) ((uint) uVar5 >> 0x10);
    sVar13 = (short) ((uint6) uVar20 >> 0x20);
    sVar14 = (short) (CONCAT17((0 < sVar15) * (sVar15 < 0xff) * cVar38 - (0xff < sVar15),
                               CONCAT16(cVar11, uVar20)) >> 0x30);
    uVar27 = CONCAT13((0 < sVar14) * (sVar14 < 0xff) * cVar11 - (0xff < sVar14),
                      CONCAT12((0 < sVar13) * (sVar13 < 0xff) * cVar10 - (0xff < sVar13),
                               CONCAT11((0 < sVar12) * (sVar12 < 0xff) * cVar9 - (0xff < sVar12),
                                        (0 < sVar19) * (sVar19 < 0xff) * cVar8 - (0xff < sVar19))));
    local_res10[0] = uVar27;
    uVar28 = (*(code *) param_1[3])(local_res10);
    for (puVar30 = *(ulonglong * *)(param_1[2] + (uVar28 % (ulonglong) param_1[1]) * 8);
         puVar30 != (ulonglong *) 0x0; puVar30 = (ulonglong *) puVar30[1]) {
        // WARNING: Read-only address (ram,0x000140b7b240) is written
        if ((uVar28 == *puVar30) && (iVar26 = (*(code *) param_1[4])(), iVar26 != 0)) {
            if ((uint * )((longlong)puVar30 + 0x14) != (uint *) 0x0) {
                uVar31 = *(uint * )((longlong)
                puVar30 + 0x14);
                bVar25 = true;
                if (uVar31 != 0xffffffff) {
                    lVar6 = param_1[5];
                    uVar3 = uVar31;
                    do {
                        uVar28 = (ulonglong) uVar3;
                        pfVar1 = (float *) (uVar28 * 0x20 + lVar6);
                        iVar26 = movmskps(iVar26, CONCAT412(-(uint)(pfVar1[3] != in_xmmTmp2_Dd),
                                                            CONCAT48(-(uint)(pfVar1[2] !=
                                                                             *(float *) (*param_2 + 0xc)),
                                                                     CONCAT44(-(uint)(pfVar1[1] !=
                                                                                      *(float *) (*param_2 + 4)),
                                                                              -(uint)(*pfVar1 !=
                                                                                      *(float *) *param_2)))));
                        if (iVar26 == 0) {
                            iVar26 = *(int *) (uVar28 * 0x20 + 0x10 + lVar6);
                            if (iVar26 == -1) {
                                return uVar28;
                            }
                            *(int *) (uVar28 * 0x20 + 0x10 + lVar6) = iVar26 + 1;
                            return uVar28;
                        }
                        uVar3 = *(uint * )(uVar28 * 0x20 + 0x14 + lVar6);
                        bVar25 = true;
                    } while (uVar3 != 0xffffffff);
                }
                goto LAB_140141feb;
            }
            break;
        }
    }
    uVar31 = local_res10[0];
    bVar25 = false;
    LAB_140141feb:
    uVar3 = *(uint * )(param_1 + 6);
    if (*(uint * )(param_1 + 7) < uVar3) {
        do {
            if (*(int *) ((ulonglong) * (uint * )(param_1 + 7) * 0x20 + 0x10 + param_1[5]) == 0) break;
            uVar4 = *(uint * )(param_1 + 7) + 1;
            *(uint * )(param_1 + 7) = uVar4;
        } while (uVar4 < uVar3);
    }
    uVar4 = *(uint * )(param_1 + 7);
    if (uVar4 < uVar3) {
        *(uint * )(param_1 + 7) = uVar4 + 1;
    } else {
        FUN_1401448a0();
        *(uint * )(param_1 + 7) = uVar3 + 1;
    }
    uVar5 = *(undefined4 * )(*param_2 + 4);
    uVar23 = *(undefined4 * )(*param_2 + 8);
    uVar24 = *(undefined4 * )(*param_2 + 0xc);
    lVar32 = (ulonglong) uVar4 * 0x20;
    puVar2 = (undefined4 * )(lVar32 + param_1[5]);
    *puVar2 = *(undefined4 * ) * param_2;
    puVar2[1] = uVar5;
    puVar2[2] = uVar23;
    puVar2[3] = uVar24;
    *(undefined4 * )(lVar32 + 0x10 + param_1[5]) = 1;
    lVar6 = param_1[5];
    if (bVar25) {
        uVar5 = *(undefined4 * )((ulonglong) uVar31 * 0x20 + 0x14 + lVar6);
        *(uint * )((ulonglong) uVar31 * 0x20 + 0x14 + lVar6) = uVar4;
        *(undefined4 * )(lVar32 + 0x14 + param_1[5]) = uVar5;
    } else {
        *(undefined4 * )(lVar32 + 0x14 + lVar6) = 0xffffffff;
        local_res10[0] = uVar27;
        if (*param_1 == param_1[1]) {
            FUN_1400290d0(param_1);
        }
        uVar29 = (*(code *) param_1[3])(local_res10);
        lVar6 = param_1[2];
        uVar28 = param_1[1];
        puVar30 = (ulonglong *) FUN_14018b280(0x18);
        if (puVar30 != (ulonglong *) 0x0) {
            uVar7 = *(ulonglong * )(lVar6 + (uVar29 % uVar28) * 8);
            *puVar30 = uVar29;
            puVar30[1] = uVar7;
            *(uint * )((longlong)
            puVar30 + 0x14) = uVar4;
            *(uint * )(puVar30 + 2) = local_res10[0];
        }
        *(ulonglong * *)(lVar6 + (uVar29 % uVar28) * 8) = puVar30;
        *param_1 = *param_1 + 1;
    }
    // WARNING: Read-only address (ram,0x000140b7b240) is written
    return (ulonglong) uVar4;
}



// WARNING: Removing unreachable block (ram,0x000140142235)
// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_140142170(longlong
param_1,
ushort *param_2
)

{
ulonglong uVar1;
ulonglong uVar2;
int iVar3;
undefined4 *puVar4;
ulonglong uVar5;
ulonglong uVar6;
longlong lVar7;
ushort *puVar8;
uint uVar9;
bool bVar10;
undefined8 local_res10;
ulonglong local_res18;
undefined4 local_58;
undefined4 uStack84;
undefined8 uStack80;
undefined4 *local_48;
undefined4 *local_40;

uVar6 = 0;
if ((param_2 != (ushort *)0x0) && (*param_2 != 0)) {
puVar4 = (undefined4 *) FUN_14018b280(0x10);
local_40 = puVar4 + 4;
if (puVar4 != (undefined4 *)0x0) {
*(undefined2 *)
puVar4 = 0;
}
local_res10 = local_res10 & 0xffffffffffffff00;
uStack80 = puVar4;
local_48 = puVar4;
if ((((*param_2 == 99) && (param_2[1] == 0x72)) && (param_2[2] == 0x61)) &&
(
uVar5 = uVar6, param_2[3]
== 0x79)) {
do {
lVar7 = uVar5 + 1;
uVar5 = uVar5 + 1;
} while (param_2[lVar7] != 0);
if ((longlong)(uVar5 * 2) >> 1 == 0) {
FUN_1407db590(puVar4, param_2,
0);
}
else {
FUN_14001c310();

puVar4 = uStack80;
}
*
puVar4 = 0x6b0078;
local_res10 = CONCAT71(local_res10._1_7_, 1);
puVar4[1] = 0x640063;
}
uVar5 = *(ulonglong * )(param_1 + 0x60);
local_res18 = uVar5;
uVar1 = *(ulonglong * )(uVar5 + 8);
while (uVar1 != 0) {
iVar3 = FUN_14018e2c0();
if (iVar3 < 0) {
uVar1 = *(ulonglong * )(uVar1 + 0x18);
}
else {
local_res18 = uVar1;
uVar1 = *(ulonglong * )(uVar1 + 0x10);
}
}
if ((local_res18 == uVar5) || (
iVar3 = FUN_14018e2c0(), iVar3<
0)) {
local_res18 = uVar5;
}
if (local_res18 == uVar5) {
if ((char)local_res10 != '\0') {
FUN_140059390();

}
uVar1 = *(ulonglong * )(param_1 + 0x60);
uVar5 = uVar1;
uVar2 = *(ulonglong * )(uVar1 + 8);
while (uVar2 != 0) {
iVar3 = FUN_14018e2c0();
if (iVar3 < 0) {
uVar2 = *(ulonglong * )(uVar2 + 0x18);
}
else {
uVar5 = uVar2;
uVar2 = *(ulonglong * )(uVar2 + 0x10);
}
}
if ((uVar5 == uVar1) || (
iVar3 = FUN_14018e2c0(), local_res10 = uVar5, iVar3<
0)) {
uVar5 = uVar1;
local_res10 = uVar1;
}
}
else {
uVar5 = local_res18;
if ((char)local_res10 != '\0') {
uVar5 = FUN_140059390();
}
}
if (uVar5 != *(ulonglong *)(param_1 + 0x60)) {
if ((ulonglong)*(uint *)(uVar5 + 0x28) < *(ulonglong *)(param_1 + 0x30)) {
lVar7 = (ulonglong) * (uint * )(uVar5 + 0x28) * 0x20;
iVar3 = *(int *) (lVar7 + 0x10 + *(longlong * )(param_1 + 0x28));
if (iVar3 - 1U < 0xfffffffe) {
*(int *)(lVar7 + 0x10 + *(longlong *)(param_1 + 0x28)) = iVar3 + 1;
}
}
uVar9 = *(uint * )(uVar5 + 0x28);
if (puVar4 != (undefined4 *)0x0) {
FUN_14018b900(puVar4,
0);
}
return (ulonglong)
uVar9;
}
if (puVar4 != (undefined4 *)0x0) {
FUN_14018b900(puVar4,
0);
}
}
FUN_14018ecc0(&local_58, param_2
);
if ((((uStack80._4_4_ == 0.0) && (param_2 != (ushort *)0x0)) && (*param_2 != 0)) &&
(((*(char *)(param_1 + 0x3c) != '\0' && (
iVar3 = isdigit((uint) * param_2), iVar3
== 0)) &&
(
bVar10 = true, puVar8 = param_2, *param_2
!= 0)))) {
do {
if (!bVar10) goto
LAB_140142460;
iVar3 = FUN_1407dff44(*puVar8);
bVar10 = iVar3 != 0;
puVar8 = puVar8 + 1;
uVar9 = (int) uVar6 + 1;
uVar6 = (ulonglong) uVar9;
} while (*puVar8 != 0);
if ((!bVar10) || (8 < (int)uVar9)) {
LAB_140142460:
local_58 = _DAT_140c777d0;
uStack84 = uRam0000000140c777d4;
uStack80 = (undefined4 *) CONCAT44(uRam0000000140c777dc, uRam0000000140c777d8);
FUN_140142780(param_1, param_2, &local_58, &local_res10
);
return local_res10 & 0xffffffff;
}
}
uVar6 = FUN_140141f10(param_1, &local_58);
return
uVar6;
}


void FUN_1401424b0(longlong
param_1,
ulonglong param_2, uint
param_3)

{
uint *puVar1;
longlong lVar2;
int iVar3;
ulonglong *puVar4;
longlong lVar5;
longlong lVar6;
uint uVar7;
longlong lVar8;
bool bVar9;
longlong local_res8;
longlong local_res20;
longlong local_58;
ulonglong local_50;
ulonglong local_48;

lVar5 = *(longlong * )(param_1 + 0x60);
lVar2 = *(longlong * )(lVar5 + 8);
local_res20 = lVar5;
lVar6 = lVar2;
local_res8 = param_1;
while (lVar6 != 0) {
iVar3 = FUN_14018e2c0(*(undefined8 * )(lVar6 + 0x20), param_2);
if (iVar3 < 0) {
lVar6 = *(longlong * )(lVar6 + 0x18);
}
else {
local_res20 = lVar6;
lVar6 = *(longlong * )(lVar6 + 0x10);
}
}
if ((local_res20 == lVar5) ||
(
iVar3 = FUN_14018e2c0(param_2, *(undefined8 * )(local_res20 + 0x20)), iVar3<
0)) {
local_res20 = lVar5;
}
lVar8 = local_res8;
uVar7 = 0xffffffff;
lVar6 = lVar5;
if (local_res20 == *(longlong *)(local_res8 + 0x60)) {
while (lVar2 != 0) {
iVar3 = FUN_14018e2c0(*(undefined8 * )(lVar2 + 0x20), param_2);
if (iVar3 < 0) {
lVar2 = *(longlong * )(lVar2 + 0x18);
}
else {
lVar6 = lVar2;
lVar2 = *(longlong * )(lVar2 + 0x10);
}
}
if ((lVar6 == lVar5) ||
(
iVar3 = FUN_14018e2c0(param_2, *(undefined8 * )(lVar6 + 0x20)), iVar3<
0)) {
local_48 = local_48 & 0xffffffff00000000;
local_res20 = lVar6;
local_50 = param_2;
FUN_140144990(param_1
+ 0x58,&local_58,&local_res20,&local_50);
lVar6 = local_58;
}
*(uint *)(lVar6 + 0x28) =
param_3;
lVar8 = local_res8;
}
else {
puVar1 = (uint * )(local_res20 + 0x28);
puVar4 = (ulonglong *) FUN_140055be0(local_res8 + 0x78, puVar1);
if (*puVar4 == param_2) {
uVar7 = *puVar1;
}
*
puVar1 = param_3;
}
lVar5 = *(longlong * )(lVar8 + 0x80);
local_res8 = lVar5;
lVar6 = *(longlong * )(lVar5 + 8);
while (lVar6 != 0) {
if (*(uint *)(lVar6 + 0x20) < param_3) {
lVar6 = *(longlong * )(lVar6 + 0x18);
}
else {
local_res8 = lVar6;
lVar6 = *(longlong * )(lVar6 + 0x10);
}
}
if ((local_res8 == lVar5) || (param_3 < *(uint *)(local_res8 + 0x20))) {
local_res8 = lVar5;
}
bVar9 = local_res8 == lVar5;
local_res8 = lVar5;
lVar6 = *(longlong * )(lVar5 + 8);
if (bVar9) {
while (lVar6 != 0) {
if (*(uint *)(lVar6 + 0x20) < param_3) {
lVar6 = *(longlong * )(lVar6 + 0x18);
}
else {
local_res8 = lVar6;
lVar6 = *(longlong * )(lVar6 + 0x10);
}
}
if ((local_res8 == lVar5) || (param_3 < *(uint *)(local_res8 + 0x20))) {
local_50 = local_50 & 0xffffffff00000000 | (ulonglong) param_3;
local_48 = 0;
FUN_140055c60(lVar8
+ 0x78,&local_res20,&local_res8,&local_50);
local_res8 = local_res20;
}
*(ulonglong *)(local_res8 + 0x28) =
param_2;
}
if (uVar7 != 0xffffffff) {
lVar5 = *(longlong * )(lVar8 + 0x80);
local_res8 = lVar5;
lVar6 = *(longlong * )(lVar5 + 8);
while (lVar6 != 0) {
if (*(uint *)(lVar6 + 0x20) < uVar7) {
lVar6 = *(longlong * )(lVar6 + 0x18);
}
else {
local_res8 = lVar6;
lVar6 = *(longlong * )(lVar6 + 0x10);
}
}
if ((local_res8 == lVar5) || (uVar7 < *(uint *)(local_res8 + 0x20))) {
local_res8 = lVar5;
}
lVar5 = *(longlong * )(*(longlong * )(lVar8 + 0x60) + 0x10);
while (lVar5 != *(longlong *)(lVar8 + 0x60)) {
if (*(uint *)(lVar5 + 0x28) == uVar7) {
*(undefined8 *)(local_res8 + 0x28) = *(undefined8 *)(lVar5 + 0x20);
goto
LAB_14014274b;
}
lVar6 = *(longlong * )(lVar5 + 0x18);
if (lVar6 == 0) {
lVar6 = *(longlong * )(lVar5 + 8);
if (lVar5 == *(longlong *)(lVar6 + 0x18)) {
do {
lVar5 = lVar6;
lVar6 = *(longlong * )(lVar5 + 8);
} while (lVar5 == *(longlong *)(lVar6 + 0x18));
}
if (*(longlong *)(lVar5 + 0x18) != lVar6) {
lVar5 = lVar6;
}
}
else {
for (
lVar2 = *(longlong * )(lVar6 + 0x10);
lVar5 = lVar6, lVar2
!= 0;
lVar2 = *(longlong * )(lVar2 + 0x10)
) {
lVar6 = lVar2;
}
}
}
FUN_140144bb0(lVar8
+ 0x78,&local_res8);
}
LAB_14014274b:
*(undefined4 *)((ulonglong)param_3 * 0x20 + 0x10 + *(longlong *)(lVar8 + 0x28)) = 0xffffffff;
return;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_140142780(longlong
param_1,
short *param_2, undefined4
*param_3,
uint *param_4
)

{
short sVar1;
uint uVar2;
uint uVar3;
longlong lVar4;
longlong lVar5;
undefined4 uVar6;
undefined4 uVar7;
undefined4 uVar8;
int iVar9;
longlong *plVar10;
longlong *plVar11;
longlong *plVar12;
undefined4 *puVar13;
longlong *plVar14;
longlong local_res10;

if ((param_2 == (short *)0x0) || (*param_2 == 0)) {
return 0;
}
lVar4 = *(longlong * )(param_1 + 0x60);
local_res10 = lVar4;
lVar5 = *(longlong * )(lVar4 + 8);
while (lVar5 != 0) {
iVar9 = FUN_14018e2c0(*(undefined8 * )(lVar5 + 0x20), param_2);
if (iVar9 < 0) {
lVar5 = *(longlong * )(lVar5 + 0x18);
}
else {
local_res10 = lVar5;
lVar5 = *(longlong * )(lVar5 + 0x10);
}
}
if ((local_res10 == lVar4) ||
(
iVar9 = FUN_14018e2c0(param_2, *(undefined8 * )(local_res10 + 0x20)), iVar9<
0)) {
local_res10 = lVar4;
}
if (local_res10 == lVar4) {
uVar2 = *(uint * )(param_1 + 0x30);
if (*(uint *)(param_1 + 0x38) < uVar2) {
do {
if (*(int *)((ulonglong)*(uint *)(param_1 + 0x38) * 0x20 + 0x10 +
*(longlong *)(param_1 + 0x28)) == 0) break;
uVar3 = *(uint * )(param_1 + 0x38) + 1;
*(uint *)(param_1 + 0x38) =
uVar3;
} while (uVar3<uVar2);
}
uVar3 = *(uint * )(param_1 + 0x38);
if (uVar3<uVar2) {
*(uint *)(param_1 + 0x38) = uVar3 + 1;
}
else {
FUN_1401448a0(param_1
+ 0x28,uVar2 + 1);
*(uint *)(param_1 + 0x38) = uVar2 + 1;
}
uVar6 = param_3[1];
uVar7 = param_3[2];
uVar8 = param_3[3];
puVar13 = (undefined4 * )((ulonglong) uVar3 * 0x20 + *(longlong * )(param_1 + 0x28));
*
puVar13 = *param_3;
puVar13[1] =
uVar6;
puVar13[2] =
uVar7;
puVar13[3] =
uVar8;
*(undefined4 *)((ulonglong)uVar3 * 0x20 + 0x10 + *(longlong *)(param_1 + 0x28)) = 1;
FUN_14004eed0(param_1
+ 0x48,*(longlong *)(param_1 + 0x50) + 1);
plVar10 = (longlong * )
FUN_14018b280(8);
plVar12 = (longlong * )
0x0;
if (plVar10 != (longlong *)0x0) {
sVar1 = *param_2;
plVar14 = plVar12;
while (sVar1 != 0) {
plVar14 = (longlong * )((longlong)
plVar14 + 1);
sVar1 = param_2
[(longlong)plVar14];
}
plVar11 = (longlong * )
FUN_14018b280((longlong)
plVar14 * 2 + 0x12,0);
if (plVar11 != (longlong *)0x0) {
plVar11[1] = (longlong)
plVar14;
*
plVar11 = (longlong) & PTR_LAB_140b55060;
plVar12 = plVar11;
}
plVar12 = plVar12 + 2;
FUN_1407db590(plVar12, param_2, (longlong)
plVar14 * 2);
*(undefined2 *)((longlong)plVar14 * 2 + (longlong)plVar12) = 0;
*
plVar10 = (longlong)
plVar12;
plVar12 = plVar10;
}
*(longlong **)(*(longlong *)(param_1 + 0x48) + -8 + *(longlong *)(param_1 + 0x50) * 8) =
plVar12;
FUN_1401424b0(param_1, *plVar12, uVar3
);
}
else {
local_res10.
_0_4_ = *(uint * )(local_res10 + 0x28);
uVar6 = param_3[1];
uVar7 = param_3[2];
uVar8 = param_3[3];
puVar13 = (undefined4 * )((ulonglong)(uint)
local_res10 * 0x20 + *(longlong *)(param_1 + 0x28));
*
puVar13 = *param_3;
puVar13[1] =
uVar6;
puVar13[2] =
uVar7;
puVar13[3] =
uVar8;
}
if (param_4 != (uint *)0x0) {
*
param_4 = (uint)
local_res10;
}
return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1401429a0(longlong
param_1,
uint param_2
)

{
ulonglong *puVar1;
longlong lVar2;
char cVar3;
short sVar7;
short sVar8;
short sVar9;
short sVar10;
unkbyte10 Var11;
undefined auVar12[12];
undefined auVar13[14];
short sVar14;
undefined4 uVar15;
undefined6 uVar16;
ulonglong uVar17;
ulonglong uVar18;
longlong lVar19;
int iVar20;
uint uVar22;
int iVar23;
undefined in_XMM0[16];
undefined auVar21[16];
int iVar24;
char cVar25;
char cVar26;
undefined4 local_res10[2];
char cVar4;
char cVar5;
char cVar6;

if (*(ulonglong *)(param_1 + 0x30) <= (ulonglong)param_2) {
return;
}
lVar19 = (ulonglong) param_2 * 0x20;
iVar20 = *(int *) (*(longlong * )(param_1 + 0x28) + 0x10 + lVar19);
if (0xfffffffd < iVar20 - 1U) {
return;
}
*(int *)(*(longlong *)(param_1 + 0x28) + 0x10 + lVar19) = iVar20 + -1;
if (*(int *)(*(longlong *)(param_1 + 0x28) + 0x10 + lVar19) != 0) {
return;
}
auVar21 = maxps(in_XMM0 & (undefined[16]) 0x0,
                *(undefined(*)[16])(*(longlong * )(param_1 + 0x28) + lVar19));
auVar21 = minps(auVar21, _DAT_140b7b240);
iVar20 = (int) (SUB164(auVar21, 0) * 255.0 + 0.5);
uVar22 = (uint)(SUB164(auVar21 >> 0x20, 0) * 255.0 + 0.5);
iVar23 = (int) (SUB164(auVar21 >> 0x40, 0) * 255.0 + 0.5);
iVar24 = (int) (SUB164(auVar21 >> 0x60, 0) * 255.0 + 0.5);
cVar25 = (char) ((uint)
iVar20 >> 0x10);
cVar26 = (char) ((uint)
iVar24 >> 0x10);
uVar17 = (ulonglong)
        CONCAT16((char) (uVar22 >> 0x10),
                 CONCAT15((char) (uVar22 >> 8), CONCAT14((char) uVar22, iVar23)));
uVar18 = ((ulonglong) uVar22 & 0xff000000) << 0x20 | uVar17;
Var11 = CONCAT19((char) ((uint)
iVar20 >> 8),CONCAT18((char)iVar20,uVar18));
auVar12 = CONCAT111((char) ((uint)
iVar20 >> 0x18),
CONCAT110(cVar25, Var11
));
auVar13 = CONCAT113((char) ((uint)
iVar24 >> 8),CONCAT112((char)iVar24,auVar12));
sVar7 = (short) iVar23;
cVar3 = (0 < sVar7) * (sVar7 < 0xff) * (char) iVar23 - (0xff < sVar7);
sVar7 = (short) (uVar17 >> 0x10);
sVar8 = (short) (uVar17 >> 0x20);
cVar4 = (0 < sVar8) * (sVar8 < 0xff) * (char) (uVar17 >> 0x20) - (0xff < sVar8);
sVar8 = (short) (uVar18 >> 0x30);
sVar9 = (short) ((unkuint10) Var11 >> 0x40);
cVar5 = (0 < sVar9) * (sVar9 < 0xff) * (char) iVar20 - (0xff < sVar9);
sVar9 = SUB122(auVar12 >> 0x50, 0);
sVar10 = SUB142(auVar13 >> 0x60, 0);
cVar6 = (0 < sVar10) * (sVar10 < 0xff) * (char) iVar24 - (0xff < sVar10);
sVar10 = SUB162(CONCAT115((char) ((uint)
iVar24 >> 0x18),
CONCAT114(cVar26, auVar13
)) >> 0x70,0);
sVar14 = CONCAT11((0 < sVar7) * (sVar7 < 0xff) * (char) (uVar17 >> 0x10) - (0xff < sVar7), cVar3);
uVar15 = CONCAT13((0 < sVar8) * (sVar8 < 0xff) * (char) (uVar17 >> 0x30) - (0xff < sVar8),
                  CONCAT12(cVar4, sVar14));
uVar16 = CONCAT15((0 < sVar9) * (sVar9 < 0xff) * cVar25 - (0xff < sVar9), CONCAT14(cVar5, uVar15));
sVar7 = (short) ((uint)
uVar15 >> 0x10);
sVar8 = (short) ((uint6) uVar16 >> 0x20);
sVar9 = (short) (CONCAT17((0 < sVar10) * (sVar10 < 0xff) * cVar26 - (0xff < sVar10),
                          CONCAT16(cVar6, uVar16)) >> 0x30);
uVar15 = CONCAT13((0 < sVar9) * (sVar9 < 0xff) * cVar6 - (0xff < sVar9),
                  CONCAT12((0 < sVar8) * (sVar8 < 0xff) * cVar5 - (0xff < sVar8),
                           CONCAT11((0 < sVar7) * (sVar7 < 0xff) * cVar4 - (0xff < sVar7),
                                    (0 < sVar14) * (sVar14 < 0xff) * cVar3 - (0xff < sVar14))));
local_res10[0] =
uVar15;
uVar18 = (**(code * *)(param_1 + 0x18))(local_res10);
for (
puVar1 = *(ulonglong * *)
        (*(longlong * )(param_1 + 0x10) + (uVar18 % *(ulonglong * )(param_1 + 8)) * 8);
puVar1 != (ulonglong *)0x0;
puVar1 = (ulonglong *) puVar1[1]
) {
if ((uVar18 == *puVar1) && (
iVar20 = (**(code * *)(param_1 + 0x20))(), iVar20
!= 0)) {
if ((uint *)((longlong)puVar1 + 0x14) != (uint *)0x0) {
uVar22 = *(uint * )((longlong)
puVar1 + 0x14);
uVar18 = (ulonglong) uVar22;
if (uVar22 == param_2) {
lVar2 = *(longlong * )(param_1 + 0x28);
if (*(int *)(lVar2 + 0x14 + lVar19) != -1) {
local_res10[0] =
uVar15;
uVar18 = (**(code * *)(param_1 + 0x18))(local_res10);
puVar1 = *(ulonglong * *)
        (*(longlong * )(param_1 + 0x10) + (uVar18 % *(ulonglong * )(param_1 + 8)) * 8);
goto
joined_r0x000140142ab4;
}
local_res10[0] =
uVar15;
FUN_1400b6120(param_1, local_res10
);
}
else {
lVar2 = *(longlong * )(param_1 + 0x28);
uVar22 = *(uint * )(uVar18 * 0x20 + 0x14 + lVar2);
if (uVar22 != 0xffffffff) goto
LAB_140142b13;
}
}
break;
}
}
goto
LAB_140142b3b;
joined_r0x000140142ab4:
if (puVar1 == (ulonglong *)0x0) goto
LAB_140142b3b;
if ((uVar18 == *puVar1) &&
(
iVar20 = (**(code * *)(param_1 + 0x20))(local_res10, puVar1 + 2), iVar20
!= 0)) {
if ((undefined4 *)((longlong)puVar1 + 0x14) != (undefined4 *)0x0) {
*(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(lVar2 + 0x14 + lVar19);
}
goto
LAB_140142b3b;
}
puVar1 = (ulonglong *) puVar1[1];
goto
joined_r0x000140142ab4;
while( true ) {
uVar18 = (ulonglong) uVar22;
uVar22 = *(uint * )((ulonglong) uVar22 * 0x20 + 0x14 + lVar2);
if (uVar22 == 0xffffffff) break;
LAB_140142b13:
if (uVar22 == param_2) {
*(undefined4 *)(uVar18 * 0x20 + 0x14 + lVar2) = *(undefined4 *)(lVar2 + 0x14 + lVar19);
break;
}
}
LAB_140142b3b:
*(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x14 + lVar19) = 0xffffffff;
if (param_2 < *(uint *)(param_1 + 0x38)) {
*(uint *)(param_1 + 0x38) =
param_2;
}
// WARNING: Read-only address (ram,0x000140b7b240) is written
return;
}


void FUN_140142b70(longlong
param_1,
longlong *param_2
)

{
longlong *plVar1;
char cVar2;
undefined2 *puVar3;
undefined8 uVar4;
longlong lVar5;
short *psVar6;
wchar_t *pwVar7;
undefined *puVar8;
uint uVar9;
undefined *puVar11;
short *psVar12;
wchar_t *pwVar13;
longlong lVar14;
undefined *puVar15;
longlong *local_res10;
undefined *puVar10;

local_res10 = param_2;
puVar3 = (undefined2 *) FUN_14018b280(0x10);
puVar15 = (undefined *) 0x0;
if (puVar3 != (undefined2 *)0x0) {
*
puVar3 = 0;
}
local_res10 = (longlong * )
0x0;
cVar2 = FUN_1400e27b0(DAT_140c63650, L"UI\\Assets\\Docs\\General\\ApolloColors.xml", &local_res10);
plVar1 = local_res10;
if (cVar2 != '\0') {
uVar4 = (**(code * *)(*local_res10 + 0x10))(local_res10);
lVar5 = FUN_1401a5ae0(uVar4, L"Colors");
if (lVar5 != 0) {
*(undefined *)(param_1 + 0x3c) = 0;
for (
lVar5 = FUN_1401a5ae0(lVar5);
lVar5 != 0;
lVar5 = FUN_1401a5bc0(lVar5)
) {
for (
lVar14 = *(longlong * )(lVar5 + 0x60);
puVar8 = puVar15, lVar14
!= 0;
lVar14 = *(longlong * )(lVar14 + 0x38)
) {
psVar12 = &DAT_140a243b8;
psVar6 = (short *) FUN_1401a4f40();
if (psVar6 == &DAT_140a243b8) {
LAB_140142d73:
if (lVar14 != 0) {
puVar8 = (undefined *) FUN_1401a4f40(lVar14 + 0x20);
}
break;
}
puVar10 = puVar15;
if (*psVar6 != 0) {
do {
uVar9 = (uint)
puVar10;
if (((*psVar12 == 0) || (*psVar6 != *psVar12)) || (0x7ffffffe < (int)uVar9)) break;
psVar6 = psVar6 + 1;
psVar12 = psVar12 + 1;
uVar9 = uVar9 + 1;
puVar10 = (undefined * )(ulonglong)
uVar9;
} while (*psVar6 != 0);
if (uVar9 == 0x7fffffff) goto
LAB_140142d73;
}
if ((*psVar6 == 0) && (*psVar12 == 0)) goto
LAB_140142d73;
}
lVar14 = *(longlong * )(lVar5 + 0x60);
puVar10 = &DAT_1409d95a4;
if (puVar8 != (undefined *)0x0) {
puVar10 = puVar8;
}
for (;
puVar8 = puVar15, lVar14
!= 0;
lVar14 = *(longlong * )(lVar14 + 0x38)
) {
pwVar13 = L"Color";
pwVar7 = (wchar_t *) FUN_1401a4f40(lVar14 + 8);
if (pwVar7 == L"Color") {
LAB_140142d8a:
if (lVar14 != 0) {
puVar8 = (undefined *) FUN_1401a4f40(lVar14 + 0x20);
}
break;
}
puVar11 = puVar15;
if (*pwVar7 != L'\0') {
do {
uVar9 = (uint)
puVar11;
if (((*pwVar13 == L'\0') || (*pwVar7 != *pwVar13)) || (0x7ffffffe < (int)uVar9))
break;
pwVar7 = pwVar7 + 1;
pwVar13 = pwVar13 + 1;
uVar9 = uVar9 + 1;
puVar11 = (undefined * )(ulonglong)
uVar9;
} while (*pwVar7 != L'\0');
if (uVar9 == 0x7fffffff) goto
LAB_140142d8a;
}
if ((*pwVar7 == L'\0') && (*pwVar13 == L'\0')) goto
LAB_140142d8a;
}
puVar11 = &DAT_1409d95cc;
if (puVar8 != (undefined *)0x0) {
puVar11 = puVar8;
}
uVar9 = FUN_140142170(DAT_140c63678, puVar11);
if ((ulonglong)uVar9 < *(ulonglong *)(DAT_140c63678 + 0x30)) {
lVar14 = (ulonglong) uVar9 * 0x20 + *(longlong * )(DAT_140c63678 + 0x28);
}
else {
lVar14 = *(longlong * )(DAT_140c63678 + 0x28);
}
FUN_140142780(param_1, puVar10, lVar14,
0);
FUN_1401429a0(DAT_140c63678, (ulonglong)
uVar9);
}
*(undefined *)(param_1 + 0x3c) = 1;
}
}
if (plVar1 != (longlong *)0x0) {
(**(code **)(*plVar1 + 8))(plVar1);
}
if (puVar3 != (undefined2 *)0x0) {
FUN_14018b900(puVar3,
0);
return;
}
return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_140142e30(longlong
param_1,
longlong param_2, uint
*param_3)

{
short sVar1;
longlong lVar2;
short *psVar3;
char cVar4;
short sVar8;
short sVar9;
short sVar10;
ulonglong uVar11;
unkbyte10 Var12;
undefined auVar13[12];
undefined auVar14[14];
short sVar15;
undefined4 uVar16;
undefined6 uVar17;
ulonglong uVar18;
longlong lVar19;
undefined (*pauVar20)[16];
int iVar21;
uint uVar23;
int iVar24;
undefined in_XMM0[16];
undefined auVar22[16];
int iVar25;
char cVar26;
char cVar27;
longlong local_res8;
undefined local_28[8];
undefined8 local_20;
undefined8 local_18;
undefined8 local_10;
char cVar5;
char cVar6;
char cVar7;

uVar23 = *param_3;
lVar19 = *(longlong * )(param_1 + 0x80);
local_res8 = lVar19;
lVar2 = *(longlong * )(lVar19 + 8);
while (lVar2 != 0) {
if (*(uint *)(lVar2 + 0x20) < uVar23) {
lVar2 = *(longlong * )(lVar2 + 0x18);
}
else {
local_res8 = lVar2;
lVar2 = *(longlong * )(lVar2 + 0x10);
}
}
if ((local_res8 == lVar19) || (uVar23 < *(uint *)(local_res8 + 0x20))) {
local_res8 = lVar19;
}
if (local_res8 != lVar19) {
psVar3 = *(short **) (local_res8 + 0x28);
lVar19 = 0;
*(undefined8 *)(param_2 + 8) = 0;
*(undefined8 *)(param_2 + 0x10) = 0;
*(undefined8 *)(param_2 + 0x18) = 0;
sVar1 = *psVar3;
while (sVar1 != 0) {
lVar19 = lVar19 + 1;
sVar1 = psVar3[lVar19];
}
FUN_14001c1b0(param_2, psVar3, psVar3
+ lVar19);
return
param_2;
}
if ((ulonglong)uVar23 < *(ulonglong *)(DAT_140c63678 + 0x30)) {
pauVar20 = (undefined(*)[16])((ulonglong)
uVar23 * 0x20 + *(longlong *)(DAT_140c63678 + 0x28));
}
else {
pauVar20 = *(undefined(**)[16])(DAT_140c63678 + 0x28);
}
auVar22 = maxps(in_XMM0 & (undefined[16]) 0x0, *pauVar20);
auVar22 = minps(auVar22, _DAT_140b7b240);
iVar21 = (int) (SUB164(auVar22, 0) * 255.0 + 0.5);
uVar23 = (uint)(SUB164(auVar22 >> 0x20, 0) * 255.0 + 0.5);
iVar24 = (int) (SUB164(auVar22 >> 0x40, 0) * 255.0 + 0.5);
iVar25 = (int) (SUB164(auVar22 >> 0x60, 0) * 255.0 + 0.5);
cVar26 = (char) ((uint)
iVar21 >> 0x10);
cVar27 = (char) ((uint)
iVar25 >> 0x10);
uVar18 = (ulonglong)
CONCAT16((char)(uVar23 >> 0x10),
CONCAT15((char)(uVar23 >> 8),CONCAT14((char)uVar23,iVar24)));
uVar11 = ((ulonglong)
uVar23 & 0xff000000) << 0x20 |
uVar18;
Var12 = CONCAT19((char) ((uint)
iVar21 >> 8),CONCAT18((char)iVar21,uVar11));
auVar13 = CONCAT111((char) ((uint)
iVar21 >> 0x18),
CONCAT110(cVar26, Var12
));
auVar14 = CONCAT113((char) ((uint)
iVar25 >> 8),CONCAT112((char)iVar25,auVar13));
sVar1 = (short) iVar24;
cVar4 = (0 < sVar1) * (sVar1 < 0xff) * (char) iVar24 - (0xff < sVar1);
sVar1 = (short) (uVar18 >> 0x10);
sVar8 = (short) (uVar18 >> 0x20);
cVar5 = (0 < sVar8) * (sVar8 < 0xff) * (char) (uVar18 >> 0x20) - (0xff < sVar8);
sVar8 = (short) (uVar11 >> 0x30);
sVar9 = (short) ((unkuint10) Var12 >> 0x40);
cVar6 = (0 < sVar9) * (sVar9 < 0xff) * (char) iVar21 - (0xff < sVar9);
sVar9 = SUB122(auVar13 >> 0x50, 0);
sVar10 = SUB142(auVar14 >> 0x60, 0);
cVar7 = (0 < sVar10) * (sVar10 < 0xff) * (char) iVar25 - (0xff < sVar10);
sVar10 = SUB162(CONCAT115((char) ((uint)
iVar25 >> 0x18),
CONCAT114(cVar27, auVar14
)) >> 0x70,0);
sVar15 = CONCAT11((0 < sVar1) * (sVar1 < 0xff) * (char) (uVar18 >> 0x10) - (0xff < sVar1), cVar4);
uVar16 = CONCAT13((0 < sVar8) * (sVar8 < 0xff) * (char) (uVar18 >> 0x30) - (0xff < sVar8),
                  CONCAT12(cVar5, sVar15));
uVar17 = CONCAT15((0 < sVar9) * (sVar9 < 0xff) * cVar26 - (0xff < sVar9), CONCAT14(cVar6, uVar16));
sVar1 = (short) ((uint)
uVar16 >> 0x10);
sVar8 = (short) ((uint6) uVar17 >> 0x20);
sVar9 = (short) (CONCAT17((0 < sVar10) * (sVar10 < 0xff) * cVar27 - (0xff < sVar10),
                          CONCAT16(cVar7, uVar17)) >> 0x30);
FUN_14018efa0(local_28, &DAT_1409d95c4,
        CONCAT13((0 < sVar9) * (sVar9 < 0xff) * cVar7 - (0xff < sVar9),
                 CONCAT12((0 < sVar8) * (sVar8 < 0xff) * cVar6 - (0xff < sVar8),
                          CONCAT11((0 < sVar1) * (sVar1 < 0xff) * cVar5 - (0xff < sVar1),
                                   (0 < sVar15) * (sVar15 < 0xff) * cVar4 - (0xff < sVar15))
                 ))
);
*(undefined8 *)(param_2 + 8) =
local_20;
*(undefined8 *)(param_2 + 0x10) =
local_18;
*(undefined8 *)(param_2 + 0x18) =
local_10;
return
param_2;
}


void FUN_140142f50(longlong
param_1)

{
undefined8 *puVar1;
longlong *plVar2;
longlong lVar3;
undefined8 uVar4;
undefined **ppuVar5;
undefined *puVar6;
undefined8 local_18;
undefined4 local_10;

FUN_1400569b0(param_1,
"Apollo.ApolloColor");
puVar1 = *(undefined8 * *)(param_1 + 0x10);
*
puVar1 = puVar1[-2];
*(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar1 + -1);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
lVar3 = *(longlong * )(param_1 + 0x10);
local_18 = FUN_140062650(param_1, "__index", 7);
local_10 = 4;
FUN_14005ea50(param_1, lVar3
+ -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
uVar4 = *(undefined8 * )(param_1 + 0x10);
ppuVar5 = &PTR_DAT_140c577b0;
puVar6 = PTR_DAT_140c577b0;
while (puVar6 != (undefined *)0x0) {
puVar6 = ppuVar5[1];
if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
FUN_14005e2c0(param_1);
}
lVar3 = FUN_140060ab0(param_1, 0);
*(undefined **)(lVar3 + 0x20) =
puVar6;
plVar2 = *(longlong * *)(param_1 + 0x10);
*
plVar2 = lVar3;
*(undefined4 *)(plVar2 + 1) = 6;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
puVar6 = *ppuVar5;
uVar4 = FUN_1400580e0(param_1, 0xfffffffe);
lVar3 = -1;
do {
lVar3 = lVar3 + 1;
} while (puVar6[lVar3] != '\0');
local_18 = FUN_140062650(param_1, puVar6);
local_10 = 4;
FUN_14005ea50(param_1, uVar4, &local_18, *(longlong
*)(param_1 + 0x10) + -0x10);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
uVar4 = *(undefined8 * )(param_1 + 0x10);
ppuVar5 = ppuVar5 + 2;
puVar6 = *ppuVar5;
}
*(undefined8 *)(param_1 + 0x10) =
uVar4;
FUN_140057020(param_1,
"ApolloColor",&PTR_DAT_140c57770);
return;
}


undefined8 FUN_1401430e0(longlong
param_1,
uint *param_2
)

{
uint uVar1;
int iVar2;
longlong lVar3;
uint *puVar4;
uint **ppuVar5;
undefined8 local_18;
undefined4 local_10;

puVar4 = (uint * )
FUN_14018b280(4);
lVar3 = DAT_140c63678;
if (puVar4 == (uint *)0x0) {
puVar4 = (uint * )
0x0;
}
else {
uVar1 = *param_2;
*
puVar4 = uVar1;
if ((ulonglong)uVar1 < *(ulonglong *)(lVar3 + 0x30)) {
lVar3 = *(longlong * )(lVar3 + 0x28);
iVar2 = *(int *) ((ulonglong)
uVar1 * 0x20 + 0x10 + lVar3);
if (iVar2 - 1U < 0xfffffffe) {
*(int *)((ulonglong)uVar1 * 0x20 + 0x10 + lVar3) = iVar2 + 1;
}
}
}
ppuVar5 = (uint * *)
FUN_140059170(param_1,
8);
*
ppuVar5 = puVar4;
lVar3 = *(longlong * )(param_1 + 0x20);
local_18 = FUN_140062650(param_1, "Apollo.ApolloColor", 0x12);
local_10 = 4;
FUN_14005e8e0(param_1, lVar3
+ 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined (*) [16]
FUN_1401431c0(undefined(*param_1)
[16],
undefined8 param_2
)

{
longlong lVar1;
uint uVar2;
uint *puVar3;
undefined4 *puVar4;
undefined8 *puVar5;
undefined8 uVar6;
undefined8 *puVar7;
undefined4 uVar8;
undefined4 uVar9;
undefined4 uVar10;
undefined4 uVar11;
undefined local_58[8];
longlong local_50;

puVar3 = (uint * )
FUN_140143ae0(param_2,
2);
if (puVar3 == (uint *)0x0) {
puVar5 = (undefined8 * )
FUN_1400580e0(param_2,
2);
puVar7 = &DAT_140a12138;
if ((puVar5 != &DAT_140a12138) && (*(int *)(puVar5 + 1) - 3U < 2)) {
uVar6 = FUN_140056bb0(param_2, 2);
FUN_14018f2d0(local_58, uVar6
);
uVar2 = FUN_140142170(DAT_140c63678, local_50);
lVar1 = DAT_140c63678;
if ((ulonglong)uVar2 < *(ulonglong *)(DAT_140c63678 + 0x30)) {
puVar4 = (undefined4 * )((ulonglong)
uVar2 * 0x20 + *(longlong *)(DAT_140c63678 + 0x28));
}
else {
puVar4 = *(undefined4 * *)(DAT_140c63678 + 0x28);
}
uVar8 = puVar4[1];
uVar9 = puVar4[2];
uVar10 = puVar4[3];
*(undefined4 *)*
param_1 = *puVar4;
*(undefined4 *)(*param_1 + 4) =
uVar8;
*(undefined4 *)(*param_1 + 8) =
uVar9;
*(undefined4 *)(*param_1 + 0xc) =
uVar10;
FUN_1401429a0(lVar1, uVar2
);
if (local_50 == 0) {
return
param_1;
}
FUN_14018b900(local_50,
0);
return
param_1;
}
puVar5 = (undefined8 * )
FUN_1400580e0(param_2,
2);
uVar8 = _DAT_140c777d0;
uVar9 = uRam0000000140c777d4;
uVar10 = uRam0000000140c777d8;
uVar11 = uRam0000000140c777dc;
if ((puVar5 != puVar7) && (*(int *)(puVar5 + 1) == 5)) {
uVar8 = FUN_140144ef0(param_2, "ColorTable", 2, &DAT_1409d970c, 1);
uVar9 = FUN_140144ef0(param_2, "ColorTable", 2, &DAT_1409d96cc, 2);
uVar10 = FUN_140144ef0(param_2, "ColorTable", 2, &DAT_1409d96fc, 3);
uVar11 = FUN_140144ef0(param_2, "ColorTable", 2, &DAT_1409d977c, 4);
*
param_1 = CONCAT412(uVar11, CONCAT48(uVar10, CONCAT44(uVar9, uVar8)));
return
param_1;
}
}
else if ((ulonglong)*puVar3 < *(ulonglong *)(DAT_140c63678 + 0x30)) {
puVar4 = (undefined4 * )((ulonglong) * puVar3 * 0x20 + *(longlong * )(DAT_140c63678 + 0x28));
uVar8 = *puVar4;
uVar9 = puVar4[1];
uVar10 = puVar4[2];
uVar11 = puVar4[3];
}
else {
puVar4 = *(undefined4 * *)(DAT_140c63678 + 0x28);
uVar8 = *puVar4;
uVar9 = puVar4[1];
uVar10 = puVar4[2];
uVar11 = puVar4[3];
}
*
param_1 = CONCAT412(uVar11, CONCAT48(uVar10, CONCAT44(uVar9, uVar8)));
return
param_1;
}



// WARNING: Could not reconcile some variable overlaps

undefined4 FUN_1401433c0(longlong
param_1)

{
undefined4 uVar1;
undefined4 uVar2;
int iVar3;
uint *puVar4;
undefined (*pauVar5)[16];
longlong *plVar6;
undefined8 uVar7;
undefined8 *puVar8;
longlong *plVar9;
float fVar10;
float fVar11;
float fVar12;
float fVar13;
double dVar14;
float fVar15;
undefined4 local_res10[6];
undefined local_58[80];

local_58.
_8_8_ = local_58._0_8_;
puVar4 = (uint * )
FUN_140143ae0(param_1,
1);
if (puVar4 != (uint *)0x0) {
if ((ulonglong)*puVar4 < *(ulonglong *)(DAT_140c63678 + 0x30)) {
pauVar5 = (undefined(*)[16])
        ((ulonglong) * puVar4 * 0x20 + *(longlong * )(DAT_140c63678 + 0x28));
}
else {
pauVar5 = *(undefined(**)[16])(DAT_140c63678 + 0x28);
}
local_58.
_0_16_ = *pauVar5;
uVar1 = FUN_140141f10(DAT_140c63678, local_58);
local_res10[0] =
uVar1;
uVar2 = FUN_1401430e0(param_1, local_res10);
FUN_1401429a0(DAT_140c63678, uVar1
);
return
uVar2;
}
plVar9 = &DAT_140a12138;
if (*(longlong **)(param_1 + 0x18) < *(longlong **)(param_1 + 0x10)) {
plVar9 = *(longlong * *)(param_1 + 0x18);
}
if ((*(int *)(plVar9 + 1) == 3) ||
((*(int *)(plVar9 + 1) == 4 && (
iVar3 = FUN_14005ac80(*plVar9 + 0x20, local_res10), iVar3
!= 0))
)) {
plVar6 = (longlong * )(*(longlong * )(param_1 + 0x18) + 0x10);
plVar9 = &DAT_140a12138;
if (plVar6 < *(longlong **)(param_1 + 0x10)) {
plVar9 = plVar6;
}
if ((*(int *)(plVar9 + 1) != 3) &&
((*(int *)(plVar9 + 1) != 4 ||
(
iVar3 = FUN_14005ac80(*plVar9 + 0x20, local_res10), iVar3
== 0)))) goto
LAB_140143511;
plVar6 = (longlong * )(*(longlong * )(param_1 + 0x18) + 0x20);
plVar9 = &DAT_140a12138;
if (plVar6 < *(longlong **)(param_1 + 0x10)) {
plVar9 = plVar6;
}
if ((*(int *)(plVar9 + 1) != 3) &&
((*(int *)(plVar9 + 1) != 4 ||
(
iVar3 = FUN_14005ac80(*plVar9 + 0x20, local_res10), iVar3
== 0)))) goto
LAB_140143511;
dVar14 = (double) FUN_140056c40(param_1, 1);
fVar10 = (float) dVar14;
dVar14 = (double) FUN_140056c40(param_1, 2);
fVar11 = (float) dVar14;
dVar14 = (double) FUN_140056c40(param_1, 3);
puVar8 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x30);
fVar15 = (float) dVar14;
if ((puVar8 < *(undefined8 **)(param_1 + 0x10)) &&
((puVar8 != &DAT_140a12138 && (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x38))))) {
dVar14 = (double) FUN_140056c40(param_1, 4);
}
else {
dVar14 = 1.0;
}
fVar12 = (float) dVar14;
fVar13 = fVar12;
LAB_140143727:
local_58.
_0_16_ = CONCAT412(fVar13, CONCAT48(fVar15, CONCAT44(fVar11, fVar10)));
uVar1 = FUN_140141f10(SUB84(dVar14, 0), fVar12, DAT_140c63678, local_58);
local_res10[0] =
uVar1;
uVar2 = FUN_1401430e0(param_1, local_res10);
FUN_1401429a0(DAT_140c63678, uVar1
);
}
else {
LAB_140143511:
puVar8 = *(undefined8 * *)(param_1 + 0x18);
if (puVar8 < *(undefined8 **)(param_1 + 0x10)) {
if ((puVar8 != &DAT_140a12138) && (*(int *)(puVar8 + 1) - 3U < 2)) {
uVar7 = FUN_140056bb0(param_1, 1);
FUN_14018f2d0(local_58, uVar7
);
uVar1 = FUN_140142170(DAT_140c63678, local_58._8_8_);
local_res10[0] =
uVar1;
uVar2 = FUN_1401430e0(param_1, local_res10);
FUN_1401429a0(DAT_140c63678, uVar1
);
if (local_58._8_8_ == 0) {
return
uVar2;
}
FUN_14018b900(local_58
._8_8_,0);
return
uVar2;
}
if (((puVar8 < *(undefined8 **)(param_1 + 0x10)) && (puVar8 != &DAT_140a12138)) &&
(*(int *)(puVar8 + 1) == 5)) {
fVar10 = (float) FUN_140144ef0(param_1, "ColorTable", 1, &DAT_1409d9794, 1);
fVar11 = (float) FUN_140144ef0(param_1, "ColorTable", 1, &DAT_1409d9734, 2);
fVar12 = (float) FUN_140144ef0(param_1, "ColorTable", 1, &DAT_1409d976c, 3);
fVar13 = (float) FUN_140144ef0(param_1, "ColorTable", 1, &DAT_1409d97e4, 4);
dVar14 = (double) (ulonglong)(uint)
fVar13;
fVar15 = fVar12;
goto
LAB_140143727;
}
}
local_res10[0] = 0;
uVar2 = FUN_1401430e0(param_1, local_res10);
FUN_1401429a0(DAT_140c63678,
0);
}
return
uVar2;
}


undefined8 FUN_140143790(longlong
param_1)

{
uint *puVar1;
char cVar2;
undefined8 uVar3;
bool bVar4;
undefined local_28[8];
longlong local_20;
longlong local_18;

bVar4 = false;
uVar3 = FUN_140056bb0(param_1, 1, 0);
FUN_14018f2d0(local_28, uVar3
);
if (local_20 != local_18) {
FUN_1401431c0(local_28, param_1
);
cVar2 = FUN_140142780(DAT_140c63678, local_20, local_28, 0);
bVar4 = cVar2 != '\0';
}
puVar1 = *(uint * *)(param_1 + 0x10);
puVar1[2] = 1;
*
puVar1 = (uint)
bVar4;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
if (local_20 != 0) {
FUN_14018b900(local_20,
0);
}
return 1;
}


undefined8 FUN_140143840(undefined8
param_1)

{
undefined4 *puVar1;

puVar1 = (undefined4 * )
FUN_140143ae0(param_1,
1);
if (puVar1 != (undefined4 *)0x0) {
FUN_1401429a0(DAT_140c63678, *puVar1
);
FUN_14018b900(puVar1,
0);
}
return 0;
}



// WARNING: Could not reconcile some variable overlaps

uint *FUN_140143880(uint * param_1, undefined8
param_2,
undefined4 param_3, undefined
*param_4)

{
int iVar1;
uint uVar2;
uint *puVar3;
undefined (*pauVar4)[16];
undefined8 *puVar5;
undefined8 uVar6;
longlong lVar7;
longlong lVar8;
undefined8 *puVar9;
undefined4 uVar10;
undefined4 uVar11;
undefined4 uVar12;
undefined4 uVar13;
undefined local_58[80];

puVar3 = (uint * )
FUN_140143ae0(param_2, param_3
);
if (puVar3 != (uint *)0x0) {
uVar2 = *puVar3;
*
param_1 = uVar2;
if (*(ulonglong *)(DAT_140c63678 + 0x30) <= (ulonglong)uVar2) {
return
param_1;
}
lVar7 = (ulonglong)
uVar2 * 0x20;
iVar1 = *(int *) (lVar7 + 0x10 + *(longlong * )(DAT_140c63678 + 0x28));
if (0xfffffffd < iVar1 - 1U) {
return
param_1;
}
*(int *)(lVar7 + 0x10 + *(longlong *)(DAT_140c63678 + 0x28)) = iVar1 + 1;
return
param_1;
}
pauVar4 = (undefined(*)[16])
FUN_140118290(param_2, param_3
);
if (pauVar4 == (undefined (*) [16])0x0) {
puVar5 = (undefined8 * )
FUN_1400580e0(param_2, param_3
);
puVar9 = &DAT_140a12138;
if ((puVar5 != &DAT_140a12138) && (*(int *)(puVar5 + 1) - 3U < 2)) {
uVar6 = FUN_140056bb0(param_2, param_3);
FUN_14018f2d0(local_58, uVar6
);
uVar2 = FUN_140142170(DAT_140c63678);
lVar7 = DAT_140c63678;
*
param_1 = uVar2;
if ((ulonglong)uVar2 < *(ulonglong *)(lVar7 + 0x30)) {
lVar8 = (ulonglong)
uVar2 * 0x20;
iVar1 = *(int *) (lVar8 + 0x10 + *(longlong * )(lVar7 + 0x28));
if (iVar1 - 1U < 0xfffffffe) {
*(int *)(lVar8 + 0x10 + *(longlong *)(lVar7 + 0x28)) = iVar1 + 1;
}
}
FUN_1401429a0(lVar7, uVar2
);
if (local_58._8_8_ == 0) {
return
param_1;
}
FUN_14018b900(local_58
._8_8_,0);
return
param_1;
}
puVar5 = (undefined8 * )
FUN_1400580e0(param_2, param_3
);
if ((puVar5 != puVar9) && (*(int *)(puVar5 + 1) == 5)) {
uVar10 = FUN_140144ef0(param_2, "ColorTable", param_3, &DAT_1409d9824, 1);
uVar11 = FUN_140144ef0(param_2, "ColorTable", param_3, &DAT_1409d97a4, 2);
uVar12 = FUN_140144ef0(param_2, "ColorTable", param_3, &DAT_1409d97c4, 3);
uVar13 = FUN_140144ef0(param_2, "ColorTable", param_3, &DAT_1409d98d4, 4);
local_58.
_0_16_ = CONCAT412(uVar13, CONCAT48(uVar12, CONCAT44(uVar11, uVar10)));
uVar2 = FUN_140141f10(uVar13, uVar12, DAT_140c63678, local_58);
goto
LAB_140143aba;
}
}
else {
local_58.
_0_16_ = *pauVar4;
param_4 = local_58;
}
uVar2 = FUN_140141f10(DAT_140c63678, param_4);
LAB_140143aba:
*
param_1 = uVar2;
return
param_1;
}


undefined8 FUN_140143ae0(longlong
param_1,
undefined4 param_2
)

{
undefined8 *puVar1;
undefined8 *puVar2;
int iVar3;
longlong *plVar4;
longlong lVar5;
undefined8 *puVar6;
undefined8 local_18;
undefined4 local_10;

plVar4 = (longlong * )

FUN_1400580e0();

if (*(int *)(plVar4 + 1) == 2) {
lVar5 = *plVar4;
}
else {
if (*(int *)(plVar4 + 1) != 7) {
return 0;
}
lVar5 = *plVar4 + 0x30;
}
if (lVar5 != 0) {
plVar4 = (longlong * )
FUN_1400580e0(param_1, param_2
);
iVar3 = *(int *) (plVar4 + 1);
if ((iVar3 == 5) || (iVar3 == 7)) {
lVar5 = *(longlong * )(*plVar4 + 0x10);
}
else {
lVar5 = *(longlong * )(*(longlong * )(param_1 + 0x20) + 0xe0 + (longlong)
iVar3 * 8);
}
if (lVar5 != 0) {
plVar4 = *(longlong * *)(param_1 + 0x10);
*
plVar4 = lVar5;
*(undefined4 *)(plVar4 + 1) = 5;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
lVar5 = *(longlong * )(param_1 + 0x20);
local_18 = FUN_140062650(param_1, "Apollo.ApolloColor", 0x12);
local_10 = 4;
FUN_14005e8e0(param_1, lVar5
+ 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_1400586a0(param_1,
0xffffffff);
FUN_1400586a0(param_1,
0xfffffffe);
puVar6 = (undefined8 * )
0x0;
iVar3 = 0;
puVar1 = (undefined8 * )(*(longlong * )(param_1 + 0x10) + -0x10);
puVar2 = (undefined8 * )(*(longlong * )(param_1 + 0x10) + -0x20);
if ((puVar1 != &DAT_140a12138) && (puVar2 != &DAT_140a12138)) {
iVar3 = FUN_14005ac20(puVar1, puVar2);
}
*(undefined8 **)(param_1 + 0x10) =
puVar2;
if (iVar3 != 0) {
plVar4 = (longlong * )
FUN_1400580e0(param_1, param_2
);
if (*(int *)(plVar4 + 1) == 2) {
puVar6 = (undefined8 * ) * plVar4;
}
else if (*(int *)(plVar4 + 1) == 7) {
return *(undefined8 *)(*plVar4 + 0x30);
}
return *
puVar6;
}
}
}
return 0;
}


undefined8 FUN_140143c50(longlong
param_1)

{
undefined8 *puVar1;
longlong *plVar2;
longlong *plVar3;
int iVar4;
longlong *plVar5;
longlong lVar6;
undefined8 *puVar7;
undefined8 local_18;
undefined4 local_10;

plVar2 = *(longlong * *)(param_1 + 0x18);
plVar3 = *(longlong * *)(param_1 + 0x10);
plVar5 = &DAT_140a12138;
if (plVar2<plVar3) {
plVar5 = plVar2;
}
if (*(int *)(plVar5 + 1) == 2) {
lVar6 = *plVar5;
}
else {
if (*(int *)(plVar5 + 1) != 7) {
return 0;
}
lVar6 = *plVar5 + 0x30;
}
if (lVar6 != 0) {
plVar5 = &DAT_140a12138;
if (plVar2<plVar3) {
plVar5 = plVar2;
}
iVar4 = *(int *) (plVar5 + 1);
if ((iVar4 == 5) || (iVar4 == 7)) {
lVar6 = *(longlong * )(*plVar5 + 0x10);
}
else {
lVar6 = *(longlong * )(*(longlong * )(param_1 + 0x20) + 0xe0 + (longlong)
iVar4 * 8);
}
if (lVar6 != 0) {
*
plVar3 = lVar6;
*(undefined4 *)(plVar3 + 1) = 5;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
lVar6 = *(longlong * )(param_1 + 0x20);
local_18 = FUN_140062650(param_1, "Apollo.ApolloColor", 0x12);
local_10 = 4;
FUN_14005e8e0(param_1, lVar6
+ 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
puVar1 = (undefined8 * )(*(longlong * )(param_1 + 0x10) + -0x10);
puVar7 = (undefined8 * )(*(longlong * )(param_1 + 0x10) + -0x20);
if ((puVar1 == &DAT_140a12138) || (puVar7 == &DAT_140a12138)) {
iVar4 = 0;
}
else {
iVar4 = FUN_14005ac20(puVar1, puVar7);
}
*(undefined8 **)(param_1 + 0x10) =
puVar7;
*(undefined4 *)(puVar7 + 1) = 1;
*(uint *)
puVar7 = (uint)(iVar4 != 0);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
return 1;
}
}
return 0;
}


undefined8 FUN_140143d90(longlong
param_1)

{
uint *puVar1;
byte bVar2;
int *piVar3;
int *piVar4;

piVar3 = (int *) FUN_140143ae0(param_1, 1);
piVar4 = (int *) FUN_140143ae0(param_1);
if ((piVar3 == piVar4) ||
(((piVar3 != (int *)0x0 && (piVar4 != (int *)0x0)) && (*piVar3 == *piVar4)))) {
bVar2 = 1;
}
else {
bVar2 = 0;
}
puVar1 = *(uint * *)(param_1 + 0x10);
puVar1[2] = 1;
*
puVar1 = (uint)
bVar2;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
return 1;
}


undefined8 FUN_140143eb0(longlong
param_1)

{
undefined8 *puVar1;
double *pdVar2;
uint *puVar3;
undefined8 uVar4;
float *pfVar5;
undefined4 in_XMM6_Da;
float fVar6;
undefined4 in_XMM6_Db;
float fVar7;
undefined4 in_XMM6_Dc;
undefined4 in_XMM6_Dd;
float fVar8;
undefined auVar9[16];

puVar3 = (uint * )
FUN_140143ae0(param_1,
1);
if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
FUN_14005e2c0(param_1);
}
puVar1 = *(undefined8 * *)(param_1 + 0x10);
uVar4 = FUN_14005c1b0(param_1, 0, 0);
*(undefined4 *)(puVar1 + 1) = 5;
*
puVar1 = uVar4;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
if (puVar3 == (uint *)0x0) {
FUN_140058710(param_1, &DAT_1409d98bc,
1);
puVar1 = *(undefined8 * *)(param_1 + 0x10);
*
puVar1 = 0;
*(undefined4 *)(puVar1 + 1) = 3;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
uVar4 = FUN_1400580e0(param_1, 0xfffffffd);
FUN_14005ea50(param_1, uVar4, *(longlong
*)(param_1 + 0x10) + -0x20,
*(longlong *)(param_1 + 0x10) + -0x10);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
FUN_140058710(param_1, &DAT_1409d9a2c,
1);
puVar1 = *(undefined8 * *)(param_1 + 0x10);
*
puVar1 = 0;
*(undefined4 *)(puVar1 + 1) = 3;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
uVar4 = FUN_1400580e0(param_1, 0xfffffffd);
FUN_14005ea50(param_1, uVar4, *(longlong
*)(param_1 + 0x10) + -0x20,
*(longlong *)(param_1 + 0x10) + -0x10);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
FUN_140058710(param_1, &DAT_1409d9a64,
1);
puVar1 = *(undefined8 * *)(param_1 + 0x10);
*
puVar1 = 0;
*(undefined4 *)(puVar1 + 1) = 3;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
uVar4 = FUN_1400580e0(param_1, 0xfffffffd);
FUN_14005ea50(param_1, uVar4, *(longlong
*)(param_1 + 0x10) + -0x20,
*(longlong *)(param_1 + 0x10) + -0x10);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
FUN_140058710(param_1, &DAT_1409d9a7c,
1);
puVar1 = *(undefined8 * *)(param_1 + 0x10);
*
puVar1 = 0;
*(undefined4 *)(puVar1 + 1) = 3;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
uVar4 = FUN_1400580e0(param_1, 0xfffffffd);
FUN_14005ea50(param_1, uVar4, *(longlong
*)(param_1 + 0x10) + -0x20,
*(longlong *)(param_1 + 0x10) + -0x10);
}
else {
auVar9 = CONCAT412(in_XMM6_Dd, CONCAT48(in_XMM6_Dc, CONCAT44(in_XMM6_Db, in_XMM6_Da)));
if ((ulonglong)*puVar3 < *(ulonglong *)(DAT_140c63678 + 0x30)) {
pfVar5 = (float *) ((ulonglong) * puVar3 * 0x20 + *(longlong * )(DAT_140c63678 + 0x28));
}
else {
pfVar5 = *(float **) (DAT_140c63678 + 0x28);
}
fVar6 = *pfVar5;
fVar7 = pfVar5[1];
fVar8 = pfVar5[3];
FUN_140058710(param_1, &DAT_1409d9914,
1);
pdVar2 = *(double **) (param_1 + 0x10);
*(undefined4 *)(pdVar2 + 1) = 3;
*
pdVar2 = (double) fVar6;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
uVar4 = FUN_1400580e0(param_1, 0xfffffffd);
FUN_14005ea50(param_1, uVar4, *(longlong
*)(param_1 + 0x10) + -0x20,
*(longlong *)(param_1 + 0x10) + -0x10,auVar9);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
FUN_140058710(param_1, &DAT_1409d9844,
1);
pdVar2 = *(double **) (param_1 + 0x10);
*(undefined4 *)(pdVar2 + 1) = 3;
*
pdVar2 = (double) fVar7;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
uVar4 = FUN_1400580e0(param_1, 0xfffffffd);
FUN_14005ea50(param_1, uVar4, *(longlong
*)(param_1 + 0x10) + -0x20,
*(longlong *)(param_1 + 0x10) + -0x10);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
FUN_140058710(param_1, &DAT_1409d9874,
1);
puVar1 = *(undefined8 * *)(param_1 + 0x10);
*(undefined4 *)(puVar1 + 1) = 3;
*
puVar1 = 0;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
uVar4 = FUN_1400580e0(param_1, 0xfffffffd);
FUN_14005ea50(param_1, uVar4, *(longlong
*)(param_1 + 0x10) + -0x20,
*(longlong *)(param_1 + 0x10) + -0x10);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
FUN_140058710(param_1, &DAT_1409d988c,
1);
pdVar2 = *(double **) (param_1 + 0x10);
*(undefined4 *)(pdVar2 + 1) = 3;
*
pdVar2 = (double) fVar8;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
uVar4 = FUN_1400580e0(param_1, 0xfffffffd);
FUN_14005ea50(param_1, uVar4, *(longlong
*)(param_1 + 0x10) + -0x20,
*(longlong *)(param_1 + 0x10) + -0x10);
}
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
return 1;
}


undefined8 FUN_140144200(longlong
param_1)

{
uint *puVar1;
int iVar2;
undefined4 *puVar3;

puVar3 = (undefined4 * )
FUN_140143ae0(param_1,
1);
if (puVar3 == (undefined4 *)0x0) {
iVar2 = 0;
}
else {
iVar2 = FUN_140141e10(DAT_140c63678, *puVar3);
}
puVar1 = *(uint * *)(param_1 + 0x10);
puVar1[2] = 1;
*
puVar1 = (uint)(iVar2 != 0);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_140144260(longlong
param_1)

{
longlong lVar1;
byte *pbVar2;
longlong lVar3;
undefined8 *puVar4;
double *pdVar5;
uint *puVar6;
float *pfVar7;
char *pcVar8;
undefined8 *puVar9;
undefined8 *puVar10;
char *pcVar11;
byte *pbVar12;
uint uVar13;
char cVar14;
float fVar15;
undefined8 local_18;
float fStack16;
float fStack12;

puVar6 = (uint * )
FUN_140143ae0(param_1,
1);
if (puVar6 == (uint *)0x0) {
*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
return 1;
}
if ((ulonglong)*puVar6 < *(ulonglong *)(DAT_140c63678 + 0x30)) {
pfVar7 = (float *) ((ulonglong) * puVar6 * 0x20 + *(longlong * )(DAT_140c63678 + 0x28));
}
else {
pfVar7 = *(float **) (DAT_140c63678 + 0x28);
}
local_18.
_0_4_ = *pfVar7;
local_18.
_4_4_ = pfVar7[1];
fStack16 = pfVar7[2];
fStack12 = pfVar7[3];
pcVar8 = (char *) FUN_140056bb0(param_1, 2);
uVar13 = (uint) * pcVar8;
if (uVar13 == 0x72) {
pcVar11 = "r";
cVar14 = 'r';
do {
fVar15 = (float) local_18;
if (cVar14 == '\0') goto
LAB_140144464;
cVar14 = pcVar11[(longlong)(pcVar8 + -0x1409d9a93)];
pcVar11 = pcVar11 + 1;
} while (cVar14 == *pcVar11);
}
if (uVar13 == 0x67) {
pcVar11 = "g";
cVar14 = 'g';
do {
fVar15 = local_18._4_4_;
if (cVar14 == '\0') goto
LAB_140144464;
cVar14 = (pcVar8 + -0x1409d99d3)
[(longlong)pcVar11];
pcVar11 = pcVar11 + 1;
} while (cVar14 == *pcVar11);
}
if (uVar13 == 0x62) {
pcVar11 = "b";
cVar14 = 'b';
do {
fVar15 = fStack16;
if (cVar14 == '\0') goto
LAB_140144464;
cVar14 = (pcVar8 + -0x1409d99fb)
[(longlong)pcVar11];
pcVar11 = pcVar11 + 1;
} while (cVar14 == *pcVar11);
}
if (uVar13 == 0x61) {
pbVar12 = &DAT_1409d9a14;
do {
fVar15 = fStack12;
if ((char)uVar13 == '\0') {
LAB_140144464:
pdVar5 = *(double **) (param_1 + 0x10);
*
pdVar5 = (double) fVar15;
*(undefined4 *)(pdVar5 + 1) = 3;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
return 1;
}
pbVar2 = (byte * )(pcVar8 + -0x1409d9a13 + (longlong)
pbVar12);
uVar13 = (uint) * pbVar2;
pbVar12 = pbVar12 + 1;
} while (*pbVar2 == *pbVar12);
}
lVar3 = *(longlong * )(param_1 + 0x20);
local_18 = FUN_140062650(param_1, "Apollo.ApolloColor", 0x12);
fStack16 = 5.605194e-45;
FUN_14005e8e0(param_1, lVar3
+ 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
puVar4 = *(undefined8 * *)(param_1 + 0x10);
lVar3 = *(longlong * )(param_1 + 0x18);
puVar9 = (undefined8 * )(lVar3 + 0x10);
puVar10 = &DAT_140a12138;
if (puVar9<puVar4) {
puVar10 = puVar9;
}
*
puVar4 = *puVar10;
*(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar10 + 1);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
lVar1 = *(longlong * )(param_1 + 0x10) + -0x10;
FUN_14005e8e0(param_1, *(longlong
*)(param_1 + 0x10) + -0x20,lVar1,lVar1);
FUN_140058350(param_1, (longlong)
puVar4 - lVar3 >> 4 & 0xffffffff);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140144490(longlong
param_1)

{
uint *puVar1;
undefined (*pauVar2)[16];
longlong lVar3;
longlong lVar4;
undefined extraout_XMM0[16];
undefined auVar5[16];
undefined local_48[8];
longlong local_40;
undefined local_28[8];
longlong local_20;

puVar1 = (uint * )
FUN_140143ae0(param_1,
1);
if (puVar1 == (uint *)0x0) {
*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
return 1;
}
if ((ulonglong)*puVar1 < *(ulonglong *)(DAT_140c63678 + 0x30)) {
pauVar2 = (undefined(*)[16])((ulonglong) * puVar1 * 0x20 + *(longlong * )(DAT_140c63678 + 0x28));
}
else {
pauVar2 = *(undefined(**)[16])(DAT_140c63678 + 0x28);
}
auVar5 = maxps(extraout_XMM0 & (undefined[16])
0x0,*pauVar2);
minps(auVar5, _DAT_140b7b240
);
FUN_14018efa0(local_48, &DAT_1409d96a4
);
lVar3 = FUN_14018f0e0(local_28, local_40);
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
FUN_14018b900(local_20,
0);
}
if (local_40 != 0) {
FUN_14018b900(local_40,
0);
}
return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong *FUN_1401445a0(longlong * param_1) {
    undefined4 * puVar1;
    longlong lVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    short *psVar5;
    char cVar6;
    short sVar10;
    short sVar11;
    short sVar12;
    short sVar13;
    unkbyte10 Var14;
    undefined auVar15[14];
    short sVar16;
    undefined6 uVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    undefined4 uVar21;
    undefined4 uVar22;
    undefined4 uVar23;
    undefined * puVar24;
    ulonglong uVar25;
    ulonglong * puVar26;
    ulonglong * puVar27;
    ulonglong * puVar28;
    undefined * *ppuVar29;
    int iVar30;
    uint uVar37;
    undefined8 uVar31;
    int iVar38;
    undefined auVar33[16];
    undefined auVar34[16];
    int iVar39;
    undefined auVar35[16];
    char cVar40;
    char cVar41;
    float fVar42;
    undefined in_XMM6[16];
    float fVar43;
    undefined4 uVar44;
    float fVar45;
    undefined4 uVar46;
    undefined4 uVar47;
    undefined4 uVar48;
    float fVar49;
    undefined4 local_res8[2];
    undefined local_48[16];
    char cVar7;
    char cVar8;
    char cVar9;
    undefined auVar32[12];
    undefined auVar36[16];

    FUN_1400b6000();
    puVar28 = (ulonglong * )
    0x0;
    param_1[6] = 0;
    param_1[5] = 0;
    *(undefined4 * )(param_1 + 7) = 0;
    *(undefined * )((longlong)
    param_1 + 0x3c) = 1;
    *(undefined4 * )(param_1 + 8) = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    puVar24 = (undefined * )
    FUN_14018b280(0x30);
    param_1[0xd] = 0;
    param_1[0xc] = (longlong)
    puVar24;
    *puVar24 = 0;
    *(undefined8 * )(param_1[0xc] + 8) = 0;
    *(longlong * )(param_1[0xc] + 0x10) = param_1[0xc];
    *(longlong * )(param_1[0xc] + 0x18) = param_1[0xc];
    puVar24 = (undefined * )
    FUN_14018b280(0x30);
    param_1[0x11] = 0;
    param_1[0x10] = (longlong)
    puVar24;
    *puVar24 = 0;
    *(undefined8 * )(param_1[0x10] + 8) = 0;
    *(longlong * )(param_1[0x10] + 0x10) = param_1[0x10];
    *(longlong * )(param_1[0x10] + 0x18) = param_1[0x10];
    DAT_140c63678 = param_1;
    FUN_1401448a0(param_1 + 5);
    uVar22 = uRam0000000140c777dc;
    uVar21 = uRam0000000140c777d8;
    uVar23 = uRam0000000140c777d4;
    auVar34 = _DAT_140b7b240;
    uVar44 = SUB164(_DAT_140b7b240, 0);
    uVar46 = SUB164(_DAT_140b7b240 >> 0x20, 0);
    uVar47 = SUB164(_DAT_140b7b240 >> 0x40, 0);
    uVar48 = SUB164(_DAT_140b7b240 >> 0x60, 0);
    auVar35 = in_XMM6 & (undefined[16])
    0x0;
    puVar1 = (undefined4 * )
    param_1[5];
    *puVar1 = _DAT_140c777d0;
    puVar1[1] = uVar23;
    puVar1[2] = uVar21;
    puVar1[3] = uVar22;
    *(undefined4 * )(param_1[5] + 0x10) = 0xffffffff;
    auVar33 = maxps(ZEXT1216(CONCAT48(SUB164(auVar35 >> 0x40, 0), (ulonglong)
    SUB164(in_XMM6, 0)) &
            (undefined[12])
    0xffffffffffffffff),
    CONCAT412(uRam0000000140c777dc,
              CONCAT48(uRam0000000140c777d8,
                       CONCAT44(uRam0000000140c777d4, _DAT_140c777d0))));
    auVar34 = minps(auVar33, auVar34);
    iVar30 = (int) (SUB164(auVar34, 0) * 255.0 + 0.5);
    uVar37 = (uint)(SUB164(auVar34 >> 0x20, 0) * 255.0 + 0.5);
    iVar38 = (int) (SUB164(auVar34 >> 0x40, 0) * 255.0 + 0.5);
    iVar39 = (int) (SUB164(auVar34 >> 0x60, 0) * 255.0 + 0.5);
    cVar40 = (char) ((uint)
    iVar30 >> 0x10);
    cVar41 = (char) ((uint)
    iVar39 >> 0x10);
    uVar25 = (ulonglong)
    CONCAT16((char) (uVar37 >> 0x10),
             CONCAT15((char) (uVar37 >> 8), CONCAT14((char) uVar37, iVar38)));
    uVar3 = ((ulonglong)
    uVar37 & 0xff000000) << 0x20 | uVar25;
    Var14 = CONCAT19((char) ((uint)
    iVar30 >> 8),CONCAT18((char) iVar30, uVar3));
    auVar32 = CONCAT111((char) ((uint)
    iVar30 >> 0x18),CONCAT110(cVar40, Var14));
    auVar15 = CONCAT113((char) ((uint)
    iVar39 >> 8),CONCAT112((char) iVar39, auVar32));
    sVar10 = (short) iVar38;
    cVar6 = (0 < sVar10) * (sVar10 < 0xff) * (char) iVar38 - (0xff < sVar10);
    sVar10 = (short) (uVar25 >> 0x10);
    sVar11 = (short) (uVar25 >> 0x20);
    cVar7 = (0 < sVar11) * (sVar11 < 0xff) * (char) (uVar25 >> 0x20) - (0xff < sVar11);
    sVar11 = (short) (uVar3 >> 0x30);
    sVar12 = (short) ((unkuint10) Var14 >> 0x40);
    cVar8 = (0 < sVar12) * (sVar12 < 0xff) * (char) iVar30 - (0xff < sVar12);
    sVar12 = SUB122(auVar32 >> 0x50, 0);
    sVar13 = SUB142(auVar15 >> 0x60, 0);
    cVar9 = (0 < sVar13) * (sVar13 < 0xff) * (char) iVar39 - (0xff < sVar13);
    sVar13 = SUB162(CONCAT115((char) ((uint)
    iVar39 >> 0x18),CONCAT114(cVar41, auVar15)) >> 0x70, 0);
    sVar16 = CONCAT11((0 < sVar10) * (sVar10 < 0xff) * (char) (uVar25 >> 0x10) - (0xff < sVar10), cVar6);
    uVar23 = CONCAT13((0 < sVar11) * (sVar11 < 0xff) * (char) (uVar25 >> 0x30) - (0xff < sVar11),
                      CONCAT12(cVar7, sVar16));
    uVar17 = CONCAT15((0 < sVar12) * (sVar12 < 0xff) * cVar40 - (0xff < sVar12), CONCAT14(cVar8, uVar23)
    );
    sVar10 = (short) ((uint)
    uVar23 >> 0x10);
    sVar11 = (short) ((uint6) uVar17 >> 0x20);
    sVar12 = (short) (CONCAT17((0 < sVar13) * (sVar13 < 0xff) * cVar41 - (0xff < sVar13),
                               CONCAT16(cVar9, uVar17)) >> 0x30);
    local_res8[0] =
            CONCAT13((0 < sVar12) * (sVar12 < 0xff) * cVar9 - (0xff < sVar12),
                     CONCAT12((0 < sVar11) * (sVar11 < 0xff) * cVar8 - (0xff < sVar11),
                              CONCAT11((0 < sVar10) * (sVar10 < 0xff) * cVar7 - (0xff < sVar10),
                                       (0 < sVar16) * (sVar16 < 0xff) * cVar6 - (0xff < sVar16))));
    if (*param_1 == param_1[1]) {
        FUN_1400290d0(param_1);
    }
    uVar25 = (*(code *) param_1[3])(local_res8);
    lVar2 = param_1[2];
    uVar3 = param_1[1];
    puVar26 = (ulonglong * )
    FUN_14018b280(0x18);
    puVar27 = puVar28;
    if (puVar26 != (ulonglong * )0x0) {
        uVar4 = *(ulonglong * )(lVar2 + (uVar25 % uVar3) * 8);
        *puVar26 = uVar25;
        puVar26[1] = uVar4;
        *(undefined4 * )((longlong)
        puVar26 + 0x14) = 0;
        *(undefined4 * )(puVar26 + 2) = local_res8[0];
        puVar27 = puVar26;
    }
    *(ulonglong * *)(lVar2 + (uVar25 % uVar3) * 8) = puVar27;
    *param_1 = *param_1 + 1;
    auVar34 = maxps(auVar35, CONCAT412(uVar48, CONCAT48(uVar47, CONCAT44(uVar46, uVar44))));
    auVar34 = minps(auVar34, CONCAT412(uVar48, CONCAT48(uVar47, CONCAT44(uVar46, uVar44))));
    *(undefined(*)[16])(param_1[5] + 0x20) =
            CONCAT412(uVar48, CONCAT48(uVar47, CONCAT44(uVar46, uVar44)));
    fVar42 = SUB164(auVar34 >> 0x40, 0) * 255.0 + 0.5;
    fVar43 = SUB164(auVar34 >> 0x60, 0) * 255.0 + 0.5;
    auVar33 = ZEXT816(CONCAT44(fVar43, fVar42)) << 0x40;
    *(undefined4 * )(param_1[5] + 0x30) = 0xffffffff;
    iVar30 = (int) (SUB164(auVar34, 0) * 255.0 + 0.5);
    uVar37 = (uint)(SUB164(auVar34 >> 0x20, 0) * 255.0 + 0.5);
    iVar38 = (int) fVar42;
    iVar39 = (int) fVar43;
    cVar40 = (char) ((uint)
    iVar30 >> 0x10);
    cVar41 = (char) ((uint)
    iVar39 >> 0x10);
    uVar25 = (ulonglong)
    CONCAT16((char) (uVar37 >> 0x10),
             CONCAT15((char) (uVar37 >> 8), CONCAT14((char) uVar37, iVar38)));
    uVar3 = ((ulonglong)
    uVar37 & 0xff000000) << 0x20 | uVar25;
    Var14 = CONCAT19((char) ((uint)
    iVar30 >> 8),CONCAT18((char) iVar30, uVar3));
    auVar32 = CONCAT111((char) ((uint)
    iVar30 >> 0x18),CONCAT110(cVar40, Var14));
    auVar15 = CONCAT113((char) ((uint)
    iVar39 >> 8),CONCAT112((char) iVar39, auVar32));
    sVar10 = (short) iVar38;
    cVar6 = (0 < sVar10) * (sVar10 < 0xff) * (char) iVar38 - (0xff < sVar10);
    sVar10 = (short) (uVar25 >> 0x10);
    sVar11 = (short) (uVar25 >> 0x20);
    cVar7 = (0 < sVar11) * (sVar11 < 0xff) * (char) (uVar25 >> 0x20) - (0xff < sVar11);
    sVar11 = (short) (uVar3 >> 0x30);
    sVar12 = (short) ((unkuint10) Var14 >> 0x40);
    cVar8 = (0 < sVar12) * (sVar12 < 0xff) * (char) iVar30 - (0xff < sVar12);
    sVar12 = SUB122(auVar32 >> 0x50, 0);
    sVar13 = SUB142(auVar15 >> 0x60, 0);
    cVar9 = (0 < sVar13) * (sVar13 < 0xff) * (char) iVar39 - (0xff < sVar13);
    sVar13 = SUB162(CONCAT115((char) ((uint)
    iVar39 >> 0x18),CONCAT114(cVar41, auVar15)) >> 0x70, 0);
    sVar16 = CONCAT11((0 < sVar10) * (sVar10 < 0xff) * (char) (uVar25 >> 0x10) - (0xff < sVar10), cVar6);
    uVar23 = CONCAT13((0 < sVar11) * (sVar11 < 0xff) * (char) (uVar25 >> 0x30) - (0xff < sVar11),
                      CONCAT12(cVar7, sVar16));
    uVar17 = CONCAT15((0 < sVar12) * (sVar12 < 0xff) * cVar40 - (0xff < sVar12), CONCAT14(cVar8, uVar23)
    );
    sVar10 = (short) ((uint)
    uVar23 >> 0x10);
    sVar11 = (short) ((uint6) uVar17 >> 0x20);
    sVar12 = (short) (CONCAT17((0 < sVar13) * (sVar13 < 0xff) * cVar41 - (0xff < sVar13),
                               CONCAT16(cVar9, uVar17)) >> 0x30);
    local_res8[0] =
            CONCAT13((0 < sVar12) * (sVar12 < 0xff) * cVar9 - (0xff < sVar12),
                     CONCAT12((0 < sVar11) * (sVar11 < 0xff) * cVar8 - (0xff < sVar11),
                              CONCAT11((0 < sVar10) * (sVar10 < 0xff) * cVar7 - (0xff < sVar10),
                                       (0 < sVar16) * (sVar16 < 0xff) * cVar6 - (0xff < sVar16))));
    if (*param_1 == param_1[1]) {
        FUN_1400290d0(param_1);
    }
    uVar25 = (*(code *) param_1[3])(local_res8);
    lVar2 = param_1[2];
    uVar3 = param_1[1];
    puVar26 = (ulonglong * )
    FUN_14018b280(0x18);
    puVar27 = puVar28;
    if (puVar26 != (ulonglong * )0x0) {
        uVar4 = *(ulonglong * )(lVar2 + (uVar25 % uVar3) * 8);
        *puVar26 = uVar25;
        puVar26[1] = uVar4;
        *(undefined4 * )((longlong)
        puVar26 + 0x14) = 1;
        *(undefined4 * )(puVar26 + 2) = local_res8[0];
        puVar27 = puVar26;
    }
    fVar45 = 0.003921569;
    fVar42 = 0.003921569;
    fVar43 = 0.003921569;
    fVar49 = 0.003921569;
    *(ulonglong * *)(lVar2 + (uVar25 % uVar3) * 8) = puVar27;
    *param_1 = *param_1 + 1;
    *(undefined4 * )(param_1 + 7) = 2;
    *(undefined4 * )(param_1 + 8) = 2;
    auVar33 = auVar33 & (undefined[16])
    0x0;
    ppuVar29 = &PTR_u_black_140b581d0;
    do {
        uVar23 = *(undefined4 * )((short **) ppuVar29 + 1);
        psVar5 = (short *) *ppuVar29;
        uVar31 = CONCAT44(uVar23, uVar23);
        auVar32 = CONCAT48(uVar23, uVar31);
        auVar36 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                 (SUB161(auVar33 >> 0x38, 0),
                                                                  CONCAT114((char) ((uint)
        uVar23 >> 0x18),
        SUB1614(CONCAT412(uVar23, auVar32), 0)))
        >> 0x70, 0),
        CONCAT113(SUB161(auVar33 >> 0x30, 0),
                  SUB1613(CONCAT412(uVar23, auVar32), 0)))
        >> 0x68, 0),
        CONCAT112((char) ((uint)
        uVar23 >> 0x10),auVar32))
        >> 0x60, 0),
        CONCAT111(SUB161(auVar33 >> 0x28, 0),
                  SUB1211(auVar32, 0))) >> 0x58, 0),
        CONCAT110((char) ((uint)
        uVar23 >> 8),
        SUB1210(auVar32, 0))) >> 0x50, 0),
        CONCAT19(SUB161(auVar33 >> 0x20, 0),
                 SUB129(auVar32, 0))) >> 0x48, 0),
        CONCAT18((char) uVar23, uVar31)) >> 0x40, 0),
        SUB161(auVar33 >> 0x18, 0)),((uint7) uVar31 >> 0x18) << 0x30);
        auVar35 = CONCAT115(CONCAT101(SUB1610(auVar36 >> 0x30, 0), SUB161(auVar33 >> 0x10, 0)),
                            ((uint5) uVar31 >> 0x10) << 0x20);
        auVar34 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar35 >> 0x20, 0),
                                                        SUB161(auVar33 >> 8, 0)),
                                              ((uint3) uVar23 >> 8) << 0x10) >> 0x10, 0),
                            (ushort) uVar23 & 0xff | (ushort) SUB161(auVar33, 0) << 8);
        iVar30 = SUB164(CONCAT214(SUB162(auVar33 >> 0x30, 0),
                                  CONCAT212(SUB162(auVar36 >> 0x30, 0), SUB1612(auVar34, 0))) >> 0x60, 0);
        auVar35 = CONCAT610(SUB166(CONCAT412(iVar30, CONCAT210(SUB162(auVar33 >> 0x20, 0),
                                                               SUB1610(auVar34, 0))) >> 0x50, 0),
                            CONCAT28(SUB162(auVar35 >> 0x20, 0), SUB168(auVar34, 0)));
        fVar18 = (float) SUB164(CONCAT106(CONCAT82(SUB168(auVar35 >> 0x40, 0), SUB162(auVar33 >> 0x10, 0)),
                                          (SUB166(auVar34, 0) >> 0x10) << 0x20) >> 0x20, 0) * fVar42;
        fVar19 = (float) (SUB164(auVar34, 0) & 0xffff | (uint)
        SUB162(auVar33, 0) << 0x10) *fVar43;
        fVar20 = (float) iVar30 * fVar49;
        local_48 = CONCAT115((char) ((uint)
        fVar20 >> 0x18),
        CONCAT114((char) ((uint)
        fVar20 >> 0x10),
        CONCAT113((char) ((uint)
        fVar20 >> 8),
        CONCAT112(SUB41(fVar20, 0),
                  CONCAT111((char) ((uint)
        fVar19 >> 0x18),
        CONCAT110((char) ((uint)
        fVar19 >>
               0x10),
        CONCAT19((char) ((uint)
        fVar19 >> 8),
        CONCAT18(SUB41(fVar19, 0),
                 CONCAT17((char) ((uint)
        fVar18 >> 0x18),
        CONCAT16((char) ((uint)
        fVar18 >>
               0x10),
        CONCAT15((char) ((uint)
        fVar18 >> 8),
        CONCAT14(SUB41(fVar18, 0),
                 (float) SUB164(auVar35 >> 0x40, 0) * fVar45
        ))))))))))));
        if ((((ulonglong) * (uint * )(param_1 + 8) == param_1[6]) && (psVar5 != (short *) 0x0)) &&
            (*psVar5 != 0)) {
            uVar23 = FUN_140141f10(param_1, local_48);
            FUN_1401424b0(param_1, psVar5, uVar23);
            *(undefined4 * )(param_1 + 8) = *(undefined4 * )(param_1 + 6);
        }
        uVar37 = (int) puVar28 + 1;
        puVar28 = (ulonglong * )(ulonglong)
        uVar37;
        ppuVar29 = (undefined * *)((short **) ppuVar29 + 2);
    } while (uVar37 < 0x411);
    auVar36 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                                          SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                                           (SUB161(auVar33 >> 0x38, 0),
                                                                                                                                            CONCAT114(SUB161(_DAT_140b7b6b0 >> 0x38, 0),
                                                                                                                                                      SUB1614(_DAT_140b7b6b0, 0))) >> 0x70, 0),
                                                                                                                            CONCAT113(SUB161(auVar33 >> 0x30, 0),
                                                                                                                                      SUB1613(_DAT_140b7b6b0, 0))) >> 0x68, 0),
                                                                                                           CONCAT112(SUB161(_DAT_140b7b6b0 >> 0x30, 0),
                                                                                                                     SUB1612(_DAT_140b7b6b0, 0))) >> 0x60, 0),
                                                                                          CONCAT111(SUB161(auVar33 >> 0x28, 0),
                                                                                                    SUB1611(_DAT_140b7b6b0, 0))) >> 0x58, 0),
                                                                                  CONCAT110(
                                                                                          SUB161(_DAT_140b7b6b0 >> 0x28,
                                                                                                 0),
                                                                                          SUB1610(_DAT_140b7b6b0, 0)))
                                                                                >> 0x50, 0),
                                                                 CONCAT19(SUB161(auVar33 >> 0x20, 0),
                                                                          SUB169(_DAT_140b7b6b0, 0))) >> 0x48, 0),
                                                CONCAT18(SUB161(_DAT_140b7b6b0 >> 0x20, 0),
                                                         SUB168(_DAT_140b7b6b0, 0))) >> 0x40, 0),
                                SUB161(auVar33 >> 0x18, 0)), (SUB167(_DAT_140b7b6b0, 0) >> 0x18) << 0x30);
    auVar35 = CONCAT115(CONCAT101(SUB1610(auVar36 >> 0x30, 0), SUB161(auVar33 >> 0x10, 0)),
                        (SUB165(_DAT_140b7b6b0, 0) >> 0x10) << 0x20);
    auVar34 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar35 >> 0x20, 0), SUB161(auVar33 >> 8, 0)),
                                          (SUB163(_DAT_140b7b6b0, 0) >> 8) << 0x10) >> 0x10, 0),
                        SUB162(_DAT_140b7b6b0, 0) & 0xff | (ushort) SUB161(auVar33, 0) << 8);
    iVar30 = SUB164(CONCAT214(SUB162(auVar33 >> 0x30, 0),
                              CONCAT212(SUB162(auVar36 >> 0x30, 0), SUB1612(auVar34, 0))) >> 0x60, 0);
    auVar35 = CONCAT610(SUB166(CONCAT412(iVar30, CONCAT210(SUB162(auVar33 >> 0x20, 0), SUB1610(auVar34, 0)
                        )) >> 0x50, 0),
                        CONCAT28(SUB162(auVar35 >> 0x20, 0), SUB168(auVar34, 0)));
    fVar42 = (float) SUB164(CONCAT106(CONCAT82(SUB168(auVar35 >> 0x40, 0), SUB162(auVar33 >> 0x10, 0)),
                                      (SUB166(auVar34, 0) >> 0x10) << 0x20) >> 0x20, 0) * fVar42;
    fVar43 = (float) (SUB164(auVar34, 0) & 0xffff | (uint)
    SUB162(auVar33, 0) << 0x10) *fVar43;
    fVar49 = (float) iVar30 * fVar49;
    local_48 = CONCAT115((char) ((uint)
    fVar49 >> 0x18),
    CONCAT114((char) ((uint)
    fVar49 >> 0x10),
    CONCAT113((char) ((uint)
    fVar49 >> 8),
    CONCAT112(SUB41(fVar49, 0),
              CONCAT111((char) ((uint)
    fVar43 >> 0x18),
    CONCAT110((char) ((uint)
    fVar43 >> 0x10
    ),CONCAT19((char) ((
            uint)
    fVar43 >> 8),
    CONCAT18(SUB41(fVar43, 0),
             CONCAT17((char) ((uint)
    fVar42 >> 0x18),
    CONCAT16((char) ((uint)
    fVar42 >>
           0x10),
    CONCAT15((char) ((uint)
    fVar42 >> 8),
    CONCAT14(SUB41(fVar42, 0),
             (float) SUB164(auVar35 >> 0x40, 0) * fVar45
    ))))))))))));
    FUN_140142780(param_1, L"WindowTitleColor", local_48, 0);
    return param_1;
}


void FUN_1401448a0(longlong * param_1, ulonglong
param_2)

{
ulonglong uVar1;
undefined4 uVar2;
undefined4 uVar3;
undefined4 uVar4;
undefined4 *puVar5;
undefined4 *puVar6;
undefined4 *puVar7;
longlong lVar8;
ulonglong uVar9;

if ((ulonglong)param_1[1] < param_2 || param_1[1] == param_2) {
puVar5 = (undefined4 * )
FUN_14018db00(*param_1);
uVar9 = 0;
uVar1 = param_1[1];
if (uVar1<param_2) {
puVar6 = puVar5 + uVar1 * 8 + 5;
lVar8 = param_2 - uVar1;
do {
if (puVar6 != (undefined4 *)&DAT_00000014) {
puVar6[-1] = 0;
*
puVar6 = 0xffffffff;
}
puVar6 = puVar6 + 8;
lVar8 = lVar8 + -1;
} while (lVar8 != 0);
}
if ((undefined4 *)*param_1 != puVar5) {
if (param_1[1] != 0) {
puVar6 = puVar5;
do {
if (puVar6 != (undefined4 *)0x0) {
puVar7 = (undefined4 * )((longlong)
puVar6 + (*param_1 - (longlong)puVar5));
uVar2 = puVar7[1];
uVar3 = puVar7[2];
uVar4 = puVar7[3];
*
puVar6 = *puVar7;
puVar6[1] =
uVar2;
puVar6[2] =
uVar3;
puVar6[3] =
uVar4;
puVar6[4] = puVar7[4];
puVar6[5] = puVar7[5];
}
uVar9 = uVar9 + 1;
puVar6 = puVar6 + 8;
} while (uVar9 < (ulonglong)param_1[1]);
}
lVar8 = *param_1;
if (lVar8 != 0) {
(**(code **)(*(longlong *)(lVar8 + -0x10) + 8))(lVar8 + -0x10);
}
*
param_1 = (longlong)
puVar5;
}
param_1[1] =
param_2;
return;
}
param_1[1] =
param_2;
return;
}


longlong *FUN_140144990(longlong
param_1,
longlong *param_2,
char **param_3, undefined8
*param_4)

{
char *pcVar1;
char *pcVar2;
int iVar3;
longlong lVar4;
longlong *plVar5;
longlong lVar6;
bool bVar7;
undefined local_18[16];

pcVar1 = *(char **) (param_1 + 8);
pcVar2 = *param_3;
if (pcVar2 == *(char **)(pcVar1 + 0x10)) {
if ((*(longlong *)(param_1 + 0x10) != 0) &&
(
iVar3 = FUN_14018e2c0(*param_4, *(undefined8 * )(pcVar2 + 0x20)), iVar3<
0)) {
FUN_140144cb0(param_1, param_2, pcVar2, pcVar2, param_4
);
return
param_2;
}
}
else if (pcVar2 == pcVar1) {
pcVar2 = *(char **) (pcVar1 + 0x18);
iVar3 = FUN_14018e2c0(*(undefined8 * )(pcVar2 + 0x20), *param_4);
if (iVar3 < 0) {
if ((pcVar2 == pcVar1) ||
(
iVar3 = FUN_14018e2c0(*param_4, *(undefined8 * )(pcVar2 + 0x20)), iVar3<
0)) {
lVar4 = FUN_14018b280(0x30);
if ((undefined8 *)(lVar4 + 0x20) != (undefined8 *)0x0) {
*(undefined8 *)(lVar4 + 0x20) = *
param_4;
*(undefined8 *)(lVar4 + 0x28) = param_4[1];
}
*(longlong *)(pcVar2 + 0x10) =
lVar4;
pcVar1 = *(char **) (param_1 + 8);
if (pcVar2 == pcVar1) {
*(longlong *)(pcVar1 + 8) =
lVar4;
*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) =
lVar4;
}
else if (pcVar2 == *(char **)(pcVar1 + 0x10)) {
*(longlong *)(pcVar1 + 0x10) =
lVar4;
}
}
else {
lVar4 = FUN_14018b280(0x30);
if ((undefined8 *)(lVar4 + 0x20) != (undefined8 *)0x0) {
*(undefined8 *)(lVar4 + 0x20) = *
param_4;
*(undefined8 *)(lVar4 + 0x28) = param_4[1];
}
*(longlong *)(pcVar2 + 0x18) =
lVar4;
if (pcVar2 == *(char **)(*(longlong *)(param_1 + 8) + 0x18)) {
*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) =
lVar4;
}
}
*(char **)(lVar4 + 8) =
pcVar2;
*(undefined8 *)(lVar4 + 0x10) = 0;
*(undefined8 *)(lVar4 + 0x18) = 0;
FUN_1400081c0(lVar4, *(longlong
*)(param_1 + 8) + 8);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
*
param_2 = lVar4;
return
param_2;
}
}
else {
if ((*pcVar2 == '\0') && (*(char **)(*(longlong *)(pcVar2 + 8) + 8) == pcVar2)) {
lVar4 = *(longlong * )(pcVar2 + 0x18);
}
else {
lVar4 = *(longlong * )(pcVar2 + 0x10);
if (lVar4 == 0) {
lVar4 = *(longlong * )(pcVar2 + 8);
lVar6 = lVar4;
if (pcVar2 == *(char **)(lVar4 + 0x10)) {
do {
lVar4 = *(longlong * )(lVar6 + 8);
bVar7 = lVar6 == *(longlong * )(lVar4 + 0x10);
lVar6 = lVar4;
} while (bVar7);
}
}
else {
for (
lVar6 = *(longlong * )(lVar4 + 0x18);
lVar6 != 0;
lVar6 = *(longlong * )(lVar6 + 0x18)
) {
lVar4 = lVar6;
}
}
}
iVar3 = FUN_14018e2c0(*(undefined8 * )(lVar4 + 0x20), *param_4);
if ((iVar3 < 0) && (
iVar3 = FUN_14018e2c0(*param_4, *(undefined8 * )(pcVar2 + 0x20)), iVar3<
0))
{
if (*(longlong *)(lVar4 + 0x18) == 0) {
FUN_140144cb0(param_1, param_2,
0,lVar4,param_4);
return
param_2;
}
FUN_140144cb0(param_1, param_2, pcVar2, pcVar2, param_4
);
return
param_2;
}
}
plVar5 = (longlong * )
FUN_140144dc0(param_1, local_18, param_4
);
*
param_2 = *plVar5;
return
param_2;
}


void FUN_140144bb0(longlong
param_1,
longlong *param_2
)

{
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
TlsSetValue(DAT_140c63720, &local_48
);
local_28 = local_48;
local_res8 = 0x141e4f6b0;
local_18 = local_38;
local_20 = local_40;
iVar2 = FUN_1401971e0(&DAT_140c8a138, 1, &local_res8, &local_28);
local_48 = &PTR_LAB_140b5e648;
TlsSetValue(DAT_140c63720, local_38
);
if (iVar2 != 0) {
// WARNING: Could not recover jumptable at 0x000140144c76. Too many branches
// WARNING: Treating indirect jump as call
DebugBreak();

return;
}
}
else {
uVar3 = FUN_140007db0(*param_2, lVar1 + 8, lVar1 + 0x10, lVar1 + 0x18);
FUN_14018b900(uVar3,
0);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
}
return;
}


longlong *
        FUN_140144cb0(longlong
param_1,
longlong *param_2, longlong
param_3,
longlong param_4,
        undefined8
*param_5)

{
longlong lVar1;
int iVar2;
longlong lVar3;

if ((param_4 != *(longlong *)(param_1 + 8)) && (param_3 == 0)) {
iVar2 = FUN_14018e2c0(*param_5, *(undefined8 * )(param_4 + 0x20));
if (-1 < iVar2) {
lVar3 = FUN_14018b280(0x30);
if ((undefined8 *)(lVar3 + 0x20) != (undefined8 *)0x0) {
*(undefined8 *)(lVar3 + 0x20) = *
param_5;
*(undefined8 *)(lVar3 + 0x28) = param_5[1];
}
*(longlong *)(param_4 + 0x18) =
lVar3;
if (param_4 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x18)) {
*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) =
lVar3;
}
goto
LAB_140144d71;
}
}
lVar3 = FUN_14018b280(0x30);
if ((undefined8 *)(lVar3 + 0x20) != (undefined8 *)0x0) {
*(undefined8 *)(lVar3 + 0x20) = *
param_5;
*(undefined8 *)(lVar3 + 0x28) = param_5[1];
}
*(longlong *)(param_4 + 0x10) =
lVar3;
lVar1 = *(longlong * )(param_1 + 8);
if (param_4 == lVar1) {
*(longlong *)(lVar1 + 8) =
lVar3;
*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) =
lVar3;
}
else if (param_4 == *(longlong *)(lVar1 + 0x10)) {
*(longlong *)(lVar1 + 0x10) =
lVar3;
}
LAB_140144d71:
*(longlong *)(lVar3 + 8) =
param_4;
*(undefined8 *)(lVar3 + 0x10) = 0;
*(undefined8 *)(lVar3 + 0x18) = 0;
FUN_1400081c0(lVar3, *(longlong
*)(param_1 + 8) + 8);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
*
param_2 = lVar3;
return
param_2;
}


char **FUN_140144dc0(longlong
param_1,
char **param_2, undefined8
*param_3)

{
undefined8 uVar1;
int iVar2;
char **ppcVar3;
char *pcVar4;
char *pcVar5;
char *pcVar6;
char *pcVar7;
bool bVar8;
undefined local_res8[8];

pcVar4 = *(char **) (param_1 + 8);
pcVar7 = *(char **) (pcVar4 + 8);
bVar8 = true;
pcVar6 = pcVar4;
if (pcVar7 != (char *)0x0) {
uVar1 = *param_3;
do {
pcVar6 = pcVar7;
iVar2 = FUN_14018e2c0(uVar1, *(undefined8 * )(pcVar6 + 0x20));
bVar8 = iVar2 < 0;
if (bVar8) {
pcVar7 = *(char **) (pcVar6 + 0x10);
}
else {
pcVar7 = *(char **) (pcVar6 + 0x18);
}
} while (pcVar7 != (char *)0x0);
}
pcVar5 = pcVar6;
if (bVar8) {
if (pcVar6 == *(char **)(pcVar4 + 0x10)) goto
LAB_140144e34;
if ((*pcVar6 == '\0') && (*(char **)(*(longlong *)(pcVar6 + 8) + 8) == pcVar6)) {
pcVar5 = *(char **) (pcVar6 + 0x18);
}
else {
pcVar5 = *(char **) (pcVar6 + 0x10);
if (pcVar5 == (char *)0x0) {
pcVar5 = *(char **) (pcVar6 + 8);
pcVar4 = pcVar5;
if (pcVar6 == *(char **)(pcVar5 + 0x10)) {
do {
pcVar5 = *(char **) (pcVar4 + 8);
bVar8 = pcVar4 == *(char **) (pcVar5 + 0x10);
pcVar4 = pcVar5;
} while (bVar8);
}
}
else {
for (
pcVar4 = *(char **) (pcVar5 + 0x18);
pcVar4 != (char *)0x0;
pcVar4 = *(char **) (pcVar4 + 0x18)
) {
pcVar5 = pcVar4;
}
}
}
}
iVar2 = FUN_14018e2c0(*(undefined8 * )(pcVar5 + 0x20), *param_3);
if (-1 < iVar2) {
*
param_2 = pcVar5;
*(undefined *)(param_2 + 1) = 0;
return
param_2;
}
LAB_140144e34:
ppcVar3 = (char **) FUN_140144cb0(param_1, local_res8, pcVar7, pcVar6, param_3);
*
param_2 = *ppcVar3;
*(undefined *)(param_2 + 1) = 1;
return
param_2;
}


void FUN_140144ef0(longlong
param_1,
undefined8 param_2,
int param_3, longlong
param_4,
int param_5
)

{
double *pdVar1;
int iVar2;
undefined8 uVar3;
longlong lVar4;
undefined local_res8[8];

if (param_3 + 9999U < 10000) {
param_3 = param_3 + 1 +
          (int) (*(longlong * )(param_1 + 0x10) - *(longlong * )(param_1 + 0x18) >> 4);
}
if (param_4 == 0) {
*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
}
else {
lVar4 = -1;
do {
lVar4 = lVar4 + 1;
} while (*(char *)(param_4 + lVar4) != '\0');
FUN_140058710(param_1, param_4
);
}
uVar3 = FUN_1400580e0(param_1, param_3);
lVar4 = *(longlong * )(param_1 + 0x10) + -0x10;
FUN_14005e8e0(param_1, uVar3, lVar4, lVar4
);
iVar2 = *(int *) (*(longlong * )(param_1 + 0x10) + -8);
if ((iVar2 != 3) &&
((iVar2 != 4 ||
(
iVar2 = FUN_14005ac80(*(longlong * )(*(longlong * )(param_1 + 0x10) + -0x10) + 0x20, local_res8)
, iVar2
== 0)))) {
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
pdVar1 = *(double **) (param_1 + 0x10);
*(undefined4 *)(pdVar1 + 1) = 3;
*
pdVar1 = (double) param_5;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
uVar3 = FUN_1400580e0(param_1, param_3);
lVar4 = *(longlong * )(param_1 + 0x10) + -0x10;
FUN_14005e8e0(param_1, uVar3, lVar4, lVar4
);
iVar2 = *(int *) (*(longlong * )(param_1 + 0x10) + -8);
if ((iVar2 == 3) ||
((iVar2 == 4 &&
(
iVar2 = FUN_14005ac80(*(longlong * )(*(longlong * )(param_1 + 0x10) + -0x10) + 0x20,
                      local_res8), iVar2
!= 0)))) {
iVar2 = *(int *) (*(longlong * )(param_1 + 0x10) + -8);
if ((iVar2 == 3) ||
((iVar2 == 4 &&
(
iVar2 = FUN_14005ac80(*(longlong * )(*(longlong * )(param_1 + 0x10) + -0x10) + 0x20,
                      local_res8), iVar2
!= 0)))) {
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
}
else {
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
}
}
else {
FUN_140056830(param_1,
"%s missing attribute %s or [%d]",param_2,param_4,param_5);
}
return;
}
iVar2 = *(int *) (*(longlong * )(param_1 + 0x10) + -8);
if ((iVar2 != 3) && (iVar2 == 4)) {
FUN_14005ac80(*(longlong
*)(*(longlong *)(param_1 + 0x10) + -0x10) + 0x20,local_res8);
}
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
return;
}


undefined4 *
        FUN_140145110(undefined4 * param_1, longlong
param_2,
undefined8 param_3, undefined8
param_4,
longlong param_5,
int param_6
)

{
double *pdVar1;
undefined4 uVar2;
undefined4 uVar3;
undefined4 uVar4;
undefined4 uVar5;
int iVar6;
undefined8 uVar7;
undefined4 *puVar8;
longlong lVar9;

if (param_5 == 0) {
*(undefined4 *)(*(longlong *)(param_2 + 0x10) + 8) = 0;
*(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
}
else {
lVar9 = -1;
do {
lVar9 = lVar9 + 1;
} while (*(char *)(param_5 + lVar9) != '\0');
FUN_140058710(param_2, param_5
);
}
uVar7 = FUN_1400580e0(param_2, 1);
lVar9 = *(longlong * )(param_2 + 0x10) + -0x10;
FUN_14005e8e0(param_2, uVar7, lVar9, lVar9
);
iVar6 = FUN_140145490(param_2, 0xffffffff);
if (iVar6 == 0) {
*(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
pdVar1 = *(double **) (param_2 + 0x10);
*(undefined4 *)(pdVar1 + 1) = 3;
*
pdVar1 = (double) param_6;
*(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
uVar7 = FUN_1400580e0(param_2, 1);
lVar9 = *(longlong * )(param_2 + 0x10) + -0x10;
FUN_14005e8e0(param_2, uVar7, lVar9, lVar9
);
iVar6 = FUN_140145490(param_2, 0xffffffff);
if (iVar6 == 0) {
FUN_140056830(param_2,
"%s missing attribute %s or [%d]",param_3,param_5,param_6);
}
else {
puVar8 = (undefined4 * )
FUN_140056ab0(param_2,
0xffffffff,"Vector2");
uVar2 = *puVar8;
uVar3 = puVar8[1];
uVar4 = puVar8[2];
uVar5 = puVar8[3];
*(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
*
param_1 = uVar2;
param_1[1] =
uVar3;
param_1[2] =
uVar4;
param_1[3] =
uVar5;
}
}
else {
puVar8 = (undefined4 * )
FUN_140056ab0(param_2,
0xffffffff,"Vector2");
uVar2 = *puVar8;
uVar3 = puVar8[1];
uVar4 = puVar8[2];
uVar5 = puVar8[3];
*(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
*
param_1 = uVar2;
param_1[1] =
uVar3;
param_1[2] =
uVar4;
param_1[3] =
uVar5;
}
return
param_1;
}


undefined8 FUN_140145270(longlong
param_1)

{
undefined8 *puVar1;
longlong *plVar2;
longlong lVar3;
undefined8 uVar4;
undefined **ppuVar5;
undefined *puVar6;
undefined8 local_18;
undefined4 local_10;

FUN_1400569b0(param_1,
"Vector2");
puVar1 = *(undefined8 * *)(param_1 + 0x10);
*
puVar1 = puVar1[-2];
*(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar1 + -1);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
lVar3 = *(longlong * )(param_1 + 0x10);
local_18 = FUN_140062650(param_1, "__index", 7);
local_10 = 4;
FUN_14005ea50(param_1, lVar3
+ -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
lVar3 = *(longlong * )(param_1 + 0x10);
ppuVar5 = &PTR_s_Length_140c57a50;
puVar6 = PTR_s_Length_140c57a50;
while (puVar6 != (undefined *)0x0) {
puVar6 = ppuVar5[1];
if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
FUN_14005e2c0(param_1);
}
lVar3 = FUN_140060ab0(param_1, 0);
*(undefined **)(lVar3 + 0x20) =
puVar6;
plVar2 = *(longlong * *)(param_1 + 0x10);
*
plVar2 = lVar3;
*(undefined4 *)(plVar2 + 1) = 6;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
puVar6 = *ppuVar5;
uVar4 = FUN_1400580e0(param_1, 0xfffffffe);
lVar3 = -1;
do {
lVar3 = lVar3 + 1;
} while (puVar6[lVar3] != '\0');
local_18 = FUN_140062650(param_1, puVar6);
local_10 = 4;
FUN_14005ea50(param_1, uVar4, &local_18, *(longlong
*)(param_1 + 0x10) + -0x10);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
lVar3 = *(longlong * )(param_1 + 0x10);
ppuVar5 = ppuVar5 + 2;
puVar6 = *ppuVar5;
}
*(longlong *)(param_1 + 0x10) = lVar3 + -0x10;
FUN_140057020(param_1,
"Vector2",&PTR_DAT_140b5c5a0);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
return 0;
}


undefined8 FUN_140145410(longlong
param_1,
undefined4 *param_2
)

{
longlong lVar1;
undefined4 uVar2;
undefined4 uVar3;
undefined4 uVar4;
undefined4 *puVar5;
undefined8 local_18;
undefined4 local_10;

puVar5 = (undefined4 * )
FUN_140059170(param_1,
0x10);
uVar2 = param_2[1];
uVar3 = param_2[2];
uVar4 = param_2[3];
*
puVar5 = *param_2;
puVar5[1] =
uVar2;
puVar5[2] =
uVar3;
puVar5[3] =
uVar4;
lVar1 = *(longlong * )(param_1 + 0x20);
local_18 = FUN_140062650(param_1, "Vector2", 7);
local_10 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


ulonglong FUN_140145490(longlong
param_1,
ulonglong param_2
)

{
undefined8 *puVar1;
undefined8 *puVar2;
int iVar3;
longlong *plVar4;
longlong lVar5;
ulonglong uVar6;
undefined8 local_18;
undefined4 local_10;

param_2 = param_2 & 0xffffffff;
plVar4 = (longlong * )

FUN_1400580e0();

if (*(int *)(plVar4 + 1) == 2) {
lVar5 = *plVar4;
}
else {
if (*(int *)(plVar4 + 1) != 7) {
return 0;
}
lVar5 = *plVar4 + 0x30;
}
if (lVar5 != 0) {
plVar4 = (longlong * )
FUN_1400580e0(param_1, param_2
& 0xffffffff);
iVar3 = *(int *) (plVar4 + 1);
if ((iVar3 == 5) || (iVar3 == 7)) {
lVar5 = *(longlong * )(*plVar4 + 0x10);
}
else {
lVar5 = *(longlong * )(*(longlong * )(param_1 + 0x20) + 0xe0 + (longlong)
iVar3 * 8);
}
if (lVar5 != 0) {
plVar4 = *(longlong * *)(param_1 + 0x10);
*
plVar4 = lVar5;
*(undefined4 *)(plVar4 + 1) = 5;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
lVar5 = *(longlong * )(param_1 + 0x20);
local_18 = FUN_140062650(param_1, "Vector2", 7);
local_10 = 4;
FUN_14005e8e0(param_1, lVar5
+ 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
uVar6 = 0;
puVar1 = (undefined8 * )(*(longlong * )(param_1 + 0x10) + -0x10);
puVar2 = (undefined8 * )(*(longlong * )(param_1 + 0x10) + -0x20);
if ((puVar1 == &DAT_140a12138) || (puVar2 == &DAT_140a12138)) {
iVar3 = 0;
}
else {
iVar3 = FUN_14005ac20(puVar1, puVar2);
}
*(undefined8 **)(param_1 + 0x10) =
puVar2;
return uVar6 & 0xffffff00 | (ulonglong)(iVar3 != 0);
}
}
return 0;
}


undefined8 FUN_1401455b0(longlong
param_1)

{
uint *puVar1;
int iVar2;

iVar2 = FUN_140145490();
puVar1 = *(uint * *)(param_1 + 0x10);
puVar1[2] = 1;
*
puVar1 = (uint)(iVar2 != 0);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
return 1;
}


undefined8 FUN_1401455f0(longlong
param_1)

{
double *pdVar1;
float fVar2;
float fVar3;
float *pfVar4;

pfVar4 = (float *) FUN_140056ab0(param_1, 1, "Vector2");
pdVar1 = *(double **) (param_1 + 0x10);
fVar2 = *pfVar4;
fVar3 = pfVar4[1];
*(undefined4 *)(pdVar1 + 1) = 3;
*
pdVar1 = (double) SQRT(fVar2 * fVar2 + fVar3 * fVar3);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
return 1;
}


undefined8 FUN_140145650(longlong
param_1)

{
double *pdVar1;
float fVar2;
float fVar3;
float *pfVar4;

pfVar4 = (float *) FUN_140056ab0(param_1, 1, "Vector2");
pdVar1 = *(double **) (param_1 + 0x10);
fVar2 = *pfVar4;
fVar3 = pfVar4[1];
*(undefined4 *)(pdVar1 + 1) = 3;
*
pdVar1 = (double) (fVar2 * fVar2 + fVar3 * fVar3);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
return 1;
}


undefined8 FUN_1401456b0(longlong
param_1)

{
longlong lVar1;
float fVar2;
float *pfVar3;
undefined (*pauVar4)[16];
undefined in_XMM1[16];
undefined auVar5[16];
float fVar6;
float fVar7;
float fVar8;
float fVar9;
float fVar10;
undefined8 local_38;
undefined4 local_30;

pfVar3 = (float *) FUN_140056ab0(param_1, 1, "Vector2");
fVar8 = *pfVar3;
fVar9 = pfVar3[1];
fVar10 = pfVar3[2];
fVar2 = pfVar3[3];
fVar6 = fVar8 * fVar8 + fVar9 * fVar9;
auVar5 = rsqrtss(in_XMM1, CONCAT412(fVar2 * fVar2,
                                    CONCAT48(fVar10 * fVar10, CONCAT44(fVar9 * fVar9, fVar6))));
fVar7 = SUB164(auVar5, 0);
fVar7 = (3.0 - fVar6 * fVar7 * fVar7) * 0.5 * fVar7;
if (fVar7 <= 0.0) {
fVar7 = 0.0;
}
fVar8 = fVar7 * fVar8;
fVar9 = fVar7 * fVar9;
fVar10 = fVar7 * fVar10;
fVar7 = fVar7 * fVar2;
pauVar4 = (undefined(*)[16])
FUN_140059170(0,
SUB168(auVar5,
0),param_1,0x10);
*
pauVar4 = CONCAT412(fVar7, CONCAT48(fVar10, CONCAT44(fVar9, fVar8)));
lVar1 = *(longlong * )(param_1 + 0x20);
local_38 = FUN_140062650(param_1, "Vector2", 7);
local_30 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_38,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


undefined8 FUN_1401457a0(longlong
param_1)

{
longlong lVar1;
float fVar2;
float fVar3;
float fVar4;
float fVar5;
float fVar6;
float *pfVar7;
undefined (*pauVar8)[16];
undefined auVar9[16];
undefined8 local_28;
undefined4 local_20;

pfVar7 = (float *) FUN_140056ab0(param_1, 1, "Vector2");
fVar3 = *pfVar7;
fVar4 = pfVar7[1];
fVar5 = pfVar7[2];
fVar6 = pfVar7[3];
auVar9 = CONCAT124(SUB1612(CONCAT412(fVar6 * fVar6,
                                     CONCAT48(fVar5 * fVar5, CONCAT44(fVar4 * fVar4, fVar3 * fVar3))
) >> 0x20, 0), fVar3 * fVar3 + fVar4 * fVar4);
auVar9 = rsqrtss(auVar9, auVar9);
fVar2 = SUB164(auVar9, 0);
auVar9 = CONCAT412(fVar2 * fVar6, CONCAT48(fVar2 * fVar5, CONCAT44(fVar2 * fVar4, fVar2 * fVar3)));
pauVar8 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar8 = auVar9;
lVar1 = *(longlong * )(param_1 + 0x20);
local_28 = FUN_140062650(param_1, "Vector2", 7);
local_20 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


undefined8 FUN_140145860(undefined8
param_1)

{
float *pfVar1;

pfVar1 = (float *) FUN_140056ab0(param_1, 1, "Vector2");
FUN_140058780(param_1,
"Vector2(%f, %f)",(double)*pfVar1,(double)pfVar1[1]);
return 1;
}


undefined8 FUN_1401458b0(longlong
param_1)

{
longlong lVar1;
byte *pbVar2;
longlong lVar3;
undefined8 *puVar4;
double *pdVar5;
float *pfVar6;
char *pcVar7;
undefined8 *puVar8;
undefined8 *puVar9;
char *pcVar10;
byte *pbVar11;
uint uVar12;
char cVar13;
undefined8 local_18;
undefined4 local_10;

pfVar6 = (float *) FUN_140056ab0(param_1, 1);
pcVar7 = (char *) FUN_140056bb0(param_1, 2);
uVar12 = (uint) * pcVar7;
if (uVar12 == 0x78) {
pcVar10 = "x";
cVar13 = 'x';
do {
if (cVar13 == '\0') {
pdVar5 = *(double **) (param_1 + 0x10);
*
pdVar5 = (double) *pfVar6;
*(undefined4 *)(pdVar5 + 1) = 3;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
return 1;
}
cVar13 = (pcVar7 + -0x1409d9ce3)
[(longlong)pcVar10];
pcVar10 = pcVar10 + 1;
} while (cVar13 == *pcVar10);
}
if (uVar12 == 0x79) {
pbVar11 = &DAT_1409d9cfc;
do {
if ((char)uVar12 == '\0') {
pdVar5 = *(double **) (param_1 + 0x10);
*
pdVar5 = (double) pfVar6[1];
*(undefined4 *)(pdVar5 + 1) = 3;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
return 1;
}
pbVar2 = (byte * )(pcVar7 + -0x1409d9cfb + (longlong)
pbVar11);
uVar12 = (uint) * pbVar2;
pbVar11 = pbVar11 + 1;
} while (*pbVar2 == *pbVar11);
}
lVar3 = *(longlong * )(param_1 + 0x20);
local_18 = FUN_140062650(param_1, "Vector2", 7);
local_10 = 4;
FUN_14005e8e0(param_1, lVar3
+ 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
puVar4 = *(undefined8 * *)(param_1 + 0x10);
lVar3 = *(longlong * )(param_1 + 0x18);
puVar8 = (undefined8 * )(lVar3 + 0x10);
puVar9 = &DAT_140a12138;
if (puVar8<puVar4) {
puVar9 = puVar8;
}
*
puVar4 = *puVar9;
*(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar9 + 1);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
lVar1 = *(longlong * )(param_1 + 0x10) + -0x10;
FUN_14005e8e0(param_1, *(longlong
*)(param_1 + 0x10) + -0x20,lVar1,lVar1);
FUN_140058350(param_1, (longlong)
puVar4 - lVar3 >> 4 & 0xffffffff);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
return 1;
}


undefined8 FUN_140145a50(undefined8
param_1)

{
byte *pbVar1;
char cVar2;
float *pfVar3;
char *pcVar4;
undefined8 uVar5;
char *pcVar6;
byte *pbVar7;
uint uVar8;
double dVar9;

pfVar3 = (float *) FUN_140056ab0(param_1, 1);
pcVar4 = (char *) FUN_140056bb0(param_1, 2);
cVar2 = *pcVar4;
uVar8 = (uint)
cVar2;
if (uVar8 == 0x78) {
pcVar6 = "x";
do {
if (cVar2 == '\0') {
dVar9 = (double) FUN_140056c40(param_1, 3);
*
pfVar3 = (float) dVar9;
return 0;
}
cVar2 = (pcVar4 + -0x1409d9e33)
[(longlong)pcVar6];
pcVar6 = pcVar6 + 1;
} while (cVar2 == *pcVar6);
}
if (uVar8 == 0x79) {
pbVar7 = &DAT_1409d9e7c;
do {
if ((char)uVar8 == '\0') {
dVar9 = (double) FUN_140056c40(param_1, 3);
pfVar3[1] = (float)
dVar9;
return 0;
}
pbVar1 = (byte * )(pcVar4 + -0x1409d9e7b + (longlong)
pbVar7);
uVar8 = (uint) * pbVar1;
pbVar7 = pbVar7 + 1;
} while (*pbVar1 == *pbVar7);
}
uVar5 = FUN_140056570(param_1, 2, "no such index");
return
uVar5;
}


undefined8 FUN_140145b60(longlong
param_1)

{
longlong lVar1;
float *pfVar2;
float *pfVar3;
undefined (*pauVar4)[16];
float fVar5;
float fVar6;
float fVar7;
float fVar8;
undefined8 local_28;
undefined4 local_20;

pfVar2 = (float *) FUN_140056ab0(param_1, 1, "Vector2");
pfVar3 = (float *) FUN_140056ab0(param_1, 2, "Vector2");
fVar5 = *pfVar3 + *pfVar2;
fVar6 = pfVar3[1] + pfVar2[1];
fVar7 = pfVar3[2] + pfVar2[2];
fVar8 = pfVar3[3] + pfVar2[3];
pauVar4 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar4 = CONCAT412(fVar8, CONCAT48(fVar7, CONCAT44(fVar6, fVar5)));
lVar1 = *(longlong * )(param_1 + 0x20);
local_28 = FUN_140062650(param_1, "Vector2", 7);
local_20 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


undefined8 FUN_140145c20(longlong
param_1)

{
longlong lVar1;
float *pfVar2;
float *pfVar3;
undefined (*pauVar4)[16];
float fVar5;
float fVar6;
float fVar7;
float fVar8;
undefined8 local_28;
undefined4 local_20;

pfVar2 = (float *) FUN_140056ab0(param_1, 1, "Vector2");
pfVar3 = (float *) FUN_140056ab0(param_1, 2, "Vector2");
fVar5 = *pfVar2 - *pfVar3;
fVar6 = pfVar2[1] - pfVar3[1];
fVar7 = pfVar2[2] - pfVar3[2];
fVar8 = pfVar2[3] - pfVar3[3];
pauVar4 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar4 = CONCAT412(fVar8, CONCAT48(fVar7, CONCAT44(fVar6, fVar5)));
lVar1 = *(longlong * )(param_1 + 0x20);
local_28 = FUN_140062650(param_1, "Vector2", 7);
local_20 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


undefined8 FUN_140145ce0(longlong
param_1)

{
longlong lVar1;
float *pfVar2;
undefined (*pauVar3)[16];
double dVar4;
float fVar5;
float fVar6;
float fVar7;
float fVar8;
undefined8 local_28;
undefined4 local_20;

pfVar2 = (float *) FUN_140056ab0(param_1, 1, "Vector2");
dVar4 = (double) FUN_140056c40(param_1, 2);
fVar5 = (float) dVar4;
fVar6 = *pfVar2 * fVar5;
fVar7 = pfVar2[1] * fVar5;
fVar8 = pfVar2[2] * fVar5;
fVar5 = pfVar2[3] * fVar5;
pauVar3 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar3 = CONCAT412(fVar5, CONCAT48(fVar8, CONCAT44(fVar7, fVar6)));
lVar1 = *(longlong * )(param_1 + 0x20);
local_28 = FUN_140062650(param_1, "Vector2", 7);
local_20 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


undefined8 FUN_140145da0(longlong
param_1)

{
uint *puVar1;
byte bVar2;
int iVar3;
uint uVar4;
float *pfVar5;
float *pfVar6;

pfVar5 = (float *) FUN_140056ab0(param_1, 1, "Vector2");
iVar3 = FUN_140145490(param_1, 2);
if (iVar3 != 0) {
pfVar6 = (float *) FUN_140056ab0(param_1, 2, "Vector2");
uVar4 = movmskps((int) pfVar6,
                 CONCAT412(-(uint)(pfVar6[3] != pfVar5[3]),
                           CONCAT48(-(uint)(pfVar6[2] != pfVar5[2]),
                                    CONCAT44(-(uint)(pfVar6[1] != pfVar5[1]),
                                             -(uint)(*pfVar6 != *pfVar5)))));
bVar2 = 1;
if ((uVar4 & 3) == 0) goto
LAB_140145e01;
}
bVar2 = 0;
LAB_140145e01:
puVar1 = *(uint * *)(param_1 + 0x10);
puVar1[2] = 1;
*
puVar1 = (uint)
bVar2;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
return 1;
}


undefined8 FUN_140145ed0(longlong
param_1)

{
undefined8 *puVar1;
longlong lVar2;
double dVar3;
int iVar4;
undefined8 uVar5;
undefined (*pauVar6)[16];
undefined4 uVar7;
undefined4 uVar8;
float fVar9;
float fVar10;
undefined4 uVar11;
undefined4 uVar12;
undefined8 local_38;
undefined4 local_30;

iVar4 = FUN_140145490(param_1, 1);
if (iVar4 != 0) {
uVar5 = FUN_140056ab0(param_1, 1, "Vector2");
uVar5 = FUN_140145410(param_1, uVar5);
return
uVar5;
}
puVar1 = *(undefined8 * *)(param_1 + 0x18);
if (((puVar1 < *(undefined8 **)(param_1 + 0x10)) && (puVar1 != &DAT_140a12138)) &&
(*(int *)(puVar1 + 1) == 5)) {
uVar7 = FUN_140144ef0(param_1, "Vector2", 1, &DAT_1409d9ea4, 2);
uVar8 = FUN_140144ef0(param_1, "Vector2", 1, &DAT_1409d9e14, 1);
uVar11 = 0;
uVar12 = 0;
pauVar6 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar6 = CONCAT412(uVar12, CONCAT48(uVar11, CONCAT44(uVar7, uVar8)));
lVar2 = *(longlong * )(param_1 + 0x20);
local_38 = FUN_140062650(param_1, "Vector2", 7);
local_30 = 4;
FUN_14005e8e0(param_1, lVar2
+ 0xa0,&local_38,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
}
else {
dVar3 = (double) FUN_140056c40(param_1, 1);
fVar10 = (float) dVar3;
dVar3 = (double) FUN_140056c40(param_1, 2);
fVar9 = (float) dVar3;
uVar7 = 0;
uVar8 = 0;
pauVar6 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar6 = CONCAT412(uVar8, CONCAT48(uVar7, CONCAT44(fVar9, fVar10)));
lVar2 = *(longlong * )(param_1 + 0x20);
local_38 = FUN_140062650(param_1, "Vector2", 7);
local_30 = 4;
FUN_14005e8e0(param_1, lVar2
+ 0xa0,&local_38,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
}
return 1;
}


undefined8 FUN_1401460c0(longlong
param_1)

{
double *pdVar1;
float fVar2;
float fVar3;
float fVar4;
float fVar5;
float *pfVar6;
float *pfVar7;

pfVar6 = (float *) FUN_140056ab0(param_1, 1, "Vector2");
pfVar7 = (float *) FUN_140056ab0(param_1, 2, "Vector2");
pdVar1 = *(double **) (param_1 + 0x10);
fVar2 = *pfVar7;
fVar3 = pfVar7[1];
fVar4 = *pfVar6;
fVar5 = pfVar6[1];
*(undefined4 *)(pdVar1 + 1) = 3;
*
pdVar1 = (double) (fVar2 * fVar4 + fVar3 * fVar5);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
return 1;
}


undefined8 FUN_140146140(longlong
param_1)

{
float fVar1;
float fVar2;
float fVar3;
float fVar4;
double *pdVar5;
float *pfVar6;
float *pfVar7;

pfVar6 = (float *) FUN_140056ab0(param_1, 1, "Vector2");
pfVar7 = (float *) FUN_140056ab0(param_1, 2, "Vector2");
pdVar5 = *(double **) (param_1 + 0x10);
fVar1 = pfVar6[1];
fVar2 = pfVar7[1];
fVar3 = *pfVar7;
fVar4 = *pfVar6;
*(undefined4 *)(pdVar5 + 1) = 3;
*
pdVar5 = (double) (fVar2 * fVar4 - fVar1 * fVar3);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
return 1;
}


undefined8 FUN_1401461c0(longlong
param_1)

{
longlong lVar1;
undefined (*pauVar2)[16];
undefined (*pauVar3)[16];
undefined auVar4[16];
undefined8 local_28;
undefined4 local_20;

pauVar2 = (undefined(*)[16])
FUN_140056ab0(param_1,
1,"Vector2");
pauVar3 = (undefined(*)[16])
FUN_140056ab0(param_1,
2,"Vector2");
auVar4 = minps(*pauVar2, *pauVar3);
pauVar2 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar2 = auVar4;
lVar1 = *(longlong * )(param_1 + 0x20);
local_28 = FUN_140062650(param_1, "Vector2", 7);
local_20 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


undefined8 FUN_140146280(longlong
param_1)

{
longlong lVar1;
undefined (*pauVar2)[16];
undefined (*pauVar3)[16];
undefined auVar4[16];
undefined8 local_28;
undefined4 local_20;

pauVar2 = (undefined(*)[16])
FUN_140056ab0(param_1,
1,"Vector2");
pauVar3 = (undefined(*)[16])
FUN_140056ab0(param_1,
2,"Vector2");
auVar4 = maxps(*pauVar2, *pauVar3);
pauVar2 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar2 = auVar4;
lVar1 = *(longlong * )(param_1 + 0x20);
local_28 = FUN_140062650(param_1, "Vector2", 7);
local_20 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


undefined8 FUN_140146340(longlong
param_1)

{
longlong lVar1;
float *pfVar2;
float *pfVar3;
undefined (*pauVar4)[16];
float fVar5;
float fVar6;
float fVar7;
float fVar8;
undefined8 local_28;
undefined4 local_20;

pfVar2 = (float *) FUN_140056ab0(param_1, 1, "Vector2");
pfVar3 = (float *) FUN_140056ab0(param_1, 2, "Vector2");
fVar5 = *pfVar3 * *pfVar2;
fVar6 = pfVar3[1] * pfVar2[1];
fVar7 = pfVar3[2] * pfVar2[2];
fVar8 = pfVar3[3] * pfVar2[3];
pauVar4 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar4 = CONCAT412(fVar8, CONCAT48(fVar7, CONCAT44(fVar6, fVar5)));
lVar1 = *(longlong * )(param_1 + 0x20);
local_28 = FUN_140062650(param_1, "Vector2", 7);
local_20 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


undefined8 FUN_140146400(longlong
param_1)

{
uint *puVar1;
float fVar2;
float fVar3;
float fVar4;
float fVar5;
float *pfVar6;
float *pfVar7;

pfVar6 = (float *) FUN_140056ab0(param_1, 1, "Vector2");
pfVar7 = (float *) FUN_140056ab0(param_1, 2, "Vector2");
puVar1 = *(uint * *)(param_1 + 0x10);
fVar2 = *pfVar6;
fVar3 = pfVar6[1];
fVar4 = *pfVar7;
fVar5 = pfVar7[1];
puVar1[2] = 1;
*
puVar1 = (uint)((fVar2 - fVar4) * (fVar2 - fVar4) + (fVar3 - fVar5) * (fVar3 - fVar5) <
                DAT_140c3c7a8);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
return 1;
}


undefined8 FUN_140146480(longlong
param_1)

{
longlong lVar1;
double dVar2;
float *pfVar3;
float *pfVar4;
undefined (*pauVar5)[16];
float fVar6;
float fVar7;
float fVar8;
float fVar9;
undefined8 local_28;
undefined4 local_20;

pfVar3 = (float *) FUN_140056ab0(param_1, 1, "Vector2");
pfVar4 = (float *) FUN_140056ab0(param_1, 2, "Vector2");
dVar2 = (double) FUN_140056c40(param_1, 3);
fVar6 = (float) dVar2;
fVar7 = (*pfVar4 - *pfVar3) * fVar6 + *pfVar3;
fVar8 = (pfVar4[1] - pfVar3[1]) * fVar6 + pfVar3[1];
fVar9 = (pfVar4[2] - pfVar3[2]) * fVar6 + pfVar3[2];
fVar6 = (pfVar4[3] - pfVar3[3]) * fVar6 + pfVar3[3];
pauVar5 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar5 = CONCAT412(fVar6, CONCAT48(fVar9, CONCAT44(fVar8, fVar7)));
lVar1 = *(longlong * )(param_1 + 0x20);
local_28 = FUN_140062650(param_1, "Vector2", 7);
local_20 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


undefined8 FUN_140146570(longlong
param_1)

{
longlong lVar1;
double dVar2;
float *pfVar3;
float *pfVar4;
float *pfVar5;
float *pfVar6;
undefined (*pauVar7)[16];
float fVar8;
float fVar9;
float fVar10;
float fVar11;
float fVar12;
float fVar13;
float fVar14;
undefined8 local_28;
undefined4 local_20;

pfVar3 = (float *) FUN_140056ab0(param_1, 1, "Vector2");
pfVar4 = (float *) FUN_140056ab0(param_1, 2, "Vector2");
pfVar5 = (float *) FUN_140056ab0(param_1, 3, "Vector2");
pfVar6 = (float *) FUN_140056ab0(param_1, 4, "Vector2");
dVar2 = (double) FUN_140056c40(param_1, 5);
fVar9 = (float) dVar2;
fVar10 = fVar9 * fVar9;
fVar11 = fVar10 * fVar9;
fVar12 = fVar11 - fVar10;
fVar9 = (fVar11 - fVar10 * 2.0) + fVar9;
fVar8 = fVar10 * 3.0 - fVar11 * 2.0;
fVar10 = (fVar11 * 2.0 - fVar10 * 3.0) + 1.0;
fVar11 = fVar12 * *pfVar6 + fVar9 * *pfVar4 + fVar8 * *pfVar5 + fVar10 * *pfVar3;
fVar13 = fVar12 * pfVar6[1] + fVar9 * pfVar4[1] + fVar8 * pfVar5[1] + fVar10 * pfVar3[1];
fVar14 = fVar12 * pfVar6[2] + fVar9 * pfVar4[2] + fVar8 * pfVar5[2] + fVar10 * pfVar3[2];
fVar8 = fVar12 * pfVar6[3] + fVar9 * pfVar4[3] + fVar8 * pfVar5[3] + fVar10 * pfVar3[3];
pauVar7 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar7 = CONCAT412(fVar8, CONCAT48(fVar14, CONCAT44(fVar13, fVar11)));
lVar1 = *(longlong * )(param_1 + 0x20);
local_28 = FUN_140062650(param_1, "Vector2", 7);
local_20 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


undefined8 FUN_140146710(longlong
param_1)

{
longlong lVar1;
double dVar2;
float *pfVar3;
float *pfVar4;
float *pfVar5;
float *pfVar6;
undefined (*pauVar7)[16];
float fVar8;
float fVar9;
float fVar10;
float fVar11;
float fVar12;
float fVar13;
float fVar14;
undefined8 local_38;
undefined4 local_30;

pfVar3 = (float *) FUN_140056ab0(param_1, 1, "Vector2");
pfVar4 = (float *) FUN_140056ab0(param_1, 2, "Vector2");
pfVar5 = (float *) FUN_140056ab0(param_1, 3, "Vector2");
pfVar6 = (float *) FUN_140056ab0(param_1, 4, "Vector2");
dVar2 = (double) FUN_140056c40(param_1, 5);
fVar11 = (float) dVar2;
fVar12 = fVar11 * fVar11;
fVar9 = fVar12 * fVar11 * 1.5;
fVar10 = fVar12 * fVar11 * 0.5;
fVar8 = (fVar12 * 2.0 - fVar9) + fVar11 * 0.5;
fVar13 = fVar10 - fVar12 * 0.5;
fVar10 = (fVar12 - fVar10) - fVar11 * 0.5;
fVar9 = (fVar9 - fVar12 * 2.5) + 1.0;
fVar11 = fVar13 * *pfVar6 + fVar8 * *pfVar5 + fVar9 * *pfVar4 + fVar10 * *pfVar3;
fVar12 = fVar13 * pfVar6[1] + fVar8 * pfVar5[1] + fVar9 * pfVar4[1] + fVar10 * pfVar3[1];
fVar14 = fVar13 * pfVar6[2] + fVar8 * pfVar5[2] + fVar9 * pfVar4[2] + fVar10 * pfVar3[2];
fVar8 = fVar13 * pfVar6[3] + fVar8 * pfVar5[3] + fVar9 * pfVar4[3] + fVar10 * pfVar3[3];
pauVar7 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar7 = CONCAT412(fVar8, CONCAT48(fVar14, CONCAT44(fVar12, fVar11)));
lVar1 = *(longlong * )(param_1 + 0x20);
local_38 = FUN_140062650(param_1, "Vector2", 7);
local_30 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_38,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


undefined8 FUN_1401468d0(longlong
param_1)

{
longlong lVar1;
double dVar2;
float *pfVar3;
float *pfVar4;
float *pfVar5;
float *pfVar6;
undefined (*pauVar7)[16];
float fVar8;
float fVar9;
float fVar10;
float fVar11;
float fVar12;
float fVar13;
float fVar14;
undefined8 local_28;
undefined4 local_20;

pfVar3 = (float *) FUN_140056ab0(param_1, 1, "Vector2");
pfVar4 = (float *) FUN_140056ab0(param_1, 2, "Vector2");
pfVar5 = (float *) FUN_140056ab0(param_1, 3, "Vector2");
pfVar6 = (float *) FUN_140056ab0(param_1, 4, "Vector2");
dVar2 = (double) FUN_140056c40(param_1, 5);
fVar11 = (float) dVar2;
fVar8 = fVar11 * fVar11 * 4.5;
fVar10 = fVar11 * fVar11 * 1.5;
fVar9 = fVar8 - fVar11 * 5.0;
fVar8 = (fVar11 * 4.0 - fVar8) + 0.5;
fVar12 = fVar10 - fVar11;
fVar10 = (fVar11 * 2.0 - fVar10) - 0.5;
fVar11 = fVar12 * *pfVar6 + fVar8 * *pfVar5 + fVar9 * *pfVar4 + fVar10 * *pfVar3;
fVar13 = fVar12 * pfVar6[1] + fVar8 * pfVar5[1] + fVar9 * pfVar4[1] + fVar10 * pfVar3[1];
fVar14 = fVar12 * pfVar6[2] + fVar8 * pfVar5[2] + fVar9 * pfVar4[2] + fVar10 * pfVar3[2];
fVar8 = fVar12 * pfVar6[3] + fVar8 * pfVar5[3] + fVar9 * pfVar4[3] + fVar10 * pfVar3[3];
pauVar7 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar7 = CONCAT412(fVar8, CONCAT48(fVar14, CONCAT44(fVar13, fVar11)));
lVar1 = *(longlong * )(param_1 + 0x20);
local_28 = FUN_140062650(param_1, "Vector2", 7);
local_20 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


undefined8 FUN_140146a70(longlong
param_1)

{
longlong lVar1;
double dVar2;
float *pfVar3;
float *pfVar4;
float *pfVar5;
float *pfVar6;
undefined (*pauVar7)[16];
float fVar8;
float fVar9;
float fVar10;
float fVar11;
float fVar12;
float fVar13;
float fVar14;
undefined8 local_28;
undefined4 local_20;

pfVar3 = (float *) FUN_140056ab0(param_1, 1, "Vector2");
pfVar4 = (float *) FUN_140056ab0(param_1, 2, "Vector2");
pfVar5 = (float *) FUN_140056ab0(param_1, 3, "Vector2");
pfVar6 = (float *) FUN_140056ab0(param_1, 4, "Vector2");
dVar2 = (double) FUN_140056c40(param_1, 5);
fVar9 = (float) dVar2 * 9.0;
fVar10 = (float) dVar2 * 3.0;
fVar8 = 4.0 - fVar9;
fVar9 = fVar9 - 5.0;
fVar11 = fVar10 - 1.0;
fVar10 = 2.0 - fVar10;
fVar12 = fVar11 * *pfVar6 + fVar8 * *pfVar5 + fVar9 * *pfVar4 + fVar10 * *pfVar3;
fVar13 = fVar11 * pfVar6[1] + fVar8 * pfVar5[1] + fVar9 * pfVar4[1] + fVar10 * pfVar3[1];
fVar14 = fVar11 * pfVar6[2] + fVar8 * pfVar5[2] + fVar9 * pfVar4[2] + fVar10 * pfVar3[2];
fVar8 = fVar11 * pfVar6[3] + fVar8 * pfVar5[3] + fVar9 * pfVar4[3] + fVar10 * pfVar3[3];
pauVar7 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar7 = CONCAT412(fVar8, CONCAT48(fVar14, CONCAT44(fVar13, fVar12)));
lVar1 = *(longlong * )(param_1 + 0x20);
local_28 = FUN_140062650(param_1, "Vector2", 7);
local_20 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


undefined8 FUN_140146c00(longlong
param_1)

{
longlong lVar1;
double dVar2;
float *pfVar3;
float *pfVar4;
float *pfVar5;
undefined (*pauVar6)[16];
float fVar7;
float fVar8;
float fVar9;
float fVar10;
float fVar11;
float fVar12;
undefined8 local_38;
undefined4 local_30;

pfVar3 = (float *) FUN_140056ab0(param_1, 1, "Vector2");
pfVar4 = (float *) FUN_140056ab0(param_1, 2, "Vector2");
pfVar5 = (float *) FUN_140056ab0(param_1, 3, "Vector2");
dVar2 = (double) FUN_140056c40(param_1, 4);
fVar8 = (float) dVar2;
dVar2 = (double) FUN_140056c40(param_1, 5);
fVar9 = *pfVar3;
fVar10 = pfVar3[1];
fVar11 = pfVar3[2];
fVar12 = pfVar3[3];
fVar7 = (float) dVar2;
fVar9 = (*pfVar5 - fVar9) * fVar7 + (*pfVar4 - fVar9) * fVar8 + fVar9;
fVar10 = (pfVar5[1] - fVar10) * fVar7 + (pfVar4[1] - fVar10) * fVar8 + fVar10;
fVar11 = (pfVar5[2] - fVar11) * fVar7 + (pfVar4[2] - fVar11) * fVar8 + fVar11;
fVar12 = (pfVar5[3] - fVar12) * fVar7 + (pfVar4[3] - fVar12) * fVar8 + fVar12;
pauVar6 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar6 = CONCAT412(fVar12, CONCAT48(fVar11, CONCAT44(fVar10, fVar9)));
lVar1 = *(longlong * )(param_1 + 0x20);
local_38 = FUN_140062650(param_1, "Vector2", 7);
local_30 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_38,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


undefined8 FUN_140146d40(longlong
param_1)

{
longlong lVar1;
undefined (*pauVar2)[16];
undefined4 uVar3;
undefined4 uVar4;
undefined4 uVar5;
undefined4 uVar6;
undefined8 local_28;
undefined4 local_20;

uVar3 = 0;
uVar4 = 0;
uVar5 = 0;
uVar6 = 0;
pauVar2 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar2 = CONCAT412(uVar6, CONCAT48(uVar5, CONCAT44(uVar4, uVar3)));
lVar1 = *(longlong * )(param_1 + 0x20);
local_28 = FUN_140062650(param_1, "Vector2", 7);
local_20 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


undefined8 FUN_140146dd0(longlong
param_1)

{
longlong lVar1;
undefined (*pauVar2)[16];
undefined4 uVar3;
undefined4 uVar4;
undefined4 uVar5;
undefined4 uVar6;
undefined8 local_28;
undefined4 local_20;

uVar3 = 0x3f800000;
uVar4 = 0x3f800000;
uVar5 = 0x3f800000;
uVar6 = 0x3f800000;
pauVar2 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar2 = CONCAT412(uVar6, CONCAT48(uVar5, CONCAT44(uVar4, uVar3)));
lVar1 = *(longlong * )(param_1 + 0x20);
local_28 = FUN_140062650(param_1, "Vector2", 7);
local_20 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


void FUN_140146e90(undefined8
param_1,
undefined8 param_2, undefined4
param_3,
longlong *param_4
)

{
undefined4 *puVar1;
undefined4 uVar2;
undefined4 uVar3;
undefined4 uVar4;
undefined4 *puVar5;

*
param_4 = *param_4 + 8;
puVar1 = *(undefined4 * *)(*param_4 + -8);
puVar5 = (undefined4 * )
FUN_140056ab0(param_2, param_3,
"Vector2");
uVar2 = puVar5[1];
uVar3 = puVar5[2];
uVar4 = puVar5[3];
*
puVar1 = *puVar5;
puVar1[1] =
uVar2;
puVar1[2] =
uVar3;
puVar1[3] =
uVar4;
return;
}


undefined8 FUN_140146ed0(longlong
param_1)

{
undefined8 *puVar1;
longlong *plVar2;
longlong lVar3;
undefined8 uVar4;
undefined **ppuVar5;
undefined *puVar6;
undefined8 local_18;
undefined4 local_10;

FUN_1400569b0(param_1,
"Vector3");
puVar1 = *(undefined8 * *)(param_1 + 0x10);
*
puVar1 = puVar1[-2];
*(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar1 + -1);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
lVar3 = *(longlong * )(param_1 + 0x10);
local_18 = FUN_140062650(param_1, "__index", 7);
local_10 = 4;
FUN_14005ea50(param_1, lVar3
+ -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
lVar3 = *(longlong * )(param_1 + 0x10);
ppuVar5 = &PTR_s_Length_140c57970;
puVar6 = PTR_s_Length_140c57970;
while (puVar6 != (undefined *)0x0) {
puVar6 = ppuVar5[1];
if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
FUN_14005e2c0(param_1);
}
lVar3 = FUN_140060ab0(param_1, 0);
*(undefined **)(lVar3 + 0x20) =
puVar6;
plVar2 = *(longlong * *)(param_1 + 0x10);
*
plVar2 = lVar3;
*(undefined4 *)(plVar2 + 1) = 6;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
puVar6 = *ppuVar5;
uVar4 = FUN_1400580e0(param_1, 0xfffffffe);
lVar3 = -1;
do {
lVar3 = lVar3 + 1;
} while (puVar6[lVar3] != '\0');
local_18 = FUN_140062650(param_1, puVar6);
local_10 = 4;
FUN_14005ea50(param_1, uVar4, &local_18, *(longlong
*)(param_1 + 0x10) + -0x10);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
lVar3 = *(longlong * )(param_1 + 0x10);
ppuVar5 = ppuVar5 + 2;
puVar6 = *ppuVar5;
}
*(longlong *)(param_1 + 0x10) = lVar3 + -0x10;
FUN_140057020(param_1,
"Vector3",&PTR_DAT_140b5c490);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
return 0;
}


undefined8 FUN_140147070(longlong
param_1,
undefined4 *param_2
)

{
longlong lVar1;
undefined4 uVar2;
undefined4 uVar3;
undefined4 uVar4;
undefined4 *puVar5;
undefined8 local_18;
undefined4 local_10;

puVar5 = (undefined4 * )
FUN_140059170(param_1,
0x10);
uVar2 = param_2[1];
uVar3 = param_2[2];
uVar4 = param_2[3];
*
puVar5 = *param_2;
puVar5[1] =
uVar2;
puVar5[2] =
uVar3;
puVar5[3] =
uVar4;
lVar1 = *(longlong * )(param_1 + 0x20);
local_18 = FUN_140062650(param_1, "Vector3", 7);
local_10 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


ulonglong FUN_1401470f0(longlong
param_1,
ulonglong param_2
)

{
undefined8 *puVar1;
undefined8 *puVar2;
int iVar3;
longlong *plVar4;
longlong lVar5;
ulonglong uVar6;
undefined8 local_18;
undefined4 local_10;

param_2 = param_2 & 0xffffffff;
plVar4 = (longlong * )

FUN_1400580e0();

if (*(int *)(plVar4 + 1) == 2) {
lVar5 = *plVar4;
}
else {
if (*(int *)(plVar4 + 1) != 7) {
return 0;
}
lVar5 = *plVar4 + 0x30;
}
if (lVar5 != 0) {
plVar4 = (longlong * )
FUN_1400580e0(param_1, param_2
& 0xffffffff);
iVar3 = *(int *) (plVar4 + 1);
if ((iVar3 == 5) || (iVar3 == 7)) {
lVar5 = *(longlong * )(*plVar4 + 0x10);
}
else {
lVar5 = *(longlong * )(*(longlong * )(param_1 + 0x20) + 0xe0 + (longlong)
iVar3 * 8);
}
if (lVar5 != 0) {
plVar4 = *(longlong * *)(param_1 + 0x10);
*
plVar4 = lVar5;
*(undefined4 *)(plVar4 + 1) = 5;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
lVar5 = *(longlong * )(param_1 + 0x20);
local_18 = FUN_140062650(param_1, "Vector3", 7);
local_10 = 4;
FUN_14005e8e0(param_1, lVar5
+ 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
uVar6 = 0;
puVar1 = (undefined8 * )(*(longlong * )(param_1 + 0x10) + -0x10);
puVar2 = (undefined8 * )(*(longlong * )(param_1 + 0x10) + -0x20);
if ((puVar1 == &DAT_140a12138) || (puVar2 == &DAT_140a12138)) {
iVar3 = 0;
}
else {
iVar3 = FUN_14005ac20(puVar1, puVar2);
}
*(undefined8 **)(param_1 + 0x10) =
puVar2;
return uVar6 & 0xffffff00 | (ulonglong)(iVar3 != 0);
}
}
return 0;
}


undefined8 FUN_140147210(longlong
param_1)

{
uint *puVar1;
int iVar2;

iVar2 = FUN_1401470f0();
puVar1 = *(uint * *)(param_1 + 0x10);
puVar1[2] = 1;
*
puVar1 = (uint)(iVar2 != 0);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
return 1;
}


undefined8 FUN_140147250(longlong
param_1)

{
double *pdVar1;
float fVar2;
float fVar3;
float *pfVar4;

pfVar4 = (float *) FUN_140056ab0(param_1, 1, "Vector3");
pdVar1 = *(double **) (param_1 + 0x10);
fVar2 = *pfVar4;
fVar3 = pfVar4[1];
*(undefined4 *)(pdVar1 + 1) = 3;
*
pdVar1 = (double) SQRT(fVar2 * fVar2 + fVar3 * fVar3 + 0.0);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
return 1;
}


undefined8 FUN_140147310(longlong
param_1)

{
longlong lVar1;
ulonglong uVar2;
ulonglong uVar3;
float fVar4;
float *pfVar5;
undefined (*pauVar6)[16];
undefined extraout_var[12];
undefined auVar7[16];
float fVar8;
float fVar9;
float fVar10;
float fVar11;
float fVar12;
undefined8 local_38;
undefined4 local_30;

pfVar5 = (float *) FUN_140056ab0(param_1, 1, "Vector3");
fVar10 = *pfVar5;
fVar11 = pfVar5[1];
fVar12 = pfVar5[2];
fVar4 = pfVar5[3];
fVar8 = fVar11 * fVar11;
uVar2 = SUB128(CONCAT84(SUB168((ZEXT1216(extraout_var) << 0x20) >> 0x40, 0), fVar8), 0);
uVar3 = uVar2 & 0xffffffff;
fVar9 = fVar10 * fVar10 + (float) uVar3 + 0.0;
auVar7 = rsqrtss(CONCAT412(fVar8, CONCAT48(fVar8, uVar2 << 0x20 | uVar3)),
                 CONCAT412(fVar4 * fVar4, CONCAT48(fVar12 * fVar12, CONCAT44(fVar8, fVar9))));
fVar8 = SUB164(auVar7, 0);
fVar8 = (3.0 - fVar9 * fVar8 * fVar8) * 0.5 * fVar8;
if (fVar8 <= 0.0) {
fVar8 = 0.0;
}
fVar10 = fVar8 * fVar10;
fVar11 = fVar8 * fVar11;
fVar12 = fVar8 * fVar12;
fVar8 = fVar8 * fVar4;
pauVar6 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar6 = CONCAT412(fVar8, CONCAT48(fVar12, CONCAT44(fVar11, fVar10)));
lVar1 = *(longlong * )(param_1 + 0x20);
local_38 = FUN_140062650(param_1, "Vector3", 7);
local_30 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_38,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


undefined8 FUN_140147410(longlong
param_1)

{
longlong lVar1;
float fVar2;
float fVar3;
float fVar4;
float fVar5;
float fVar6;
float *pfVar7;
undefined (*pauVar8)[16];
undefined auVar9[16];
undefined8 local_28;
undefined4 local_20;

pfVar7 = (float *) FUN_140056ab0(param_1, 1, "Vector3");
fVar3 = *pfVar7;
fVar4 = pfVar7[1];
fVar5 = pfVar7[2];
fVar6 = pfVar7[3];
auVar9 = CONCAT124(SUB1612(CONCAT412(fVar6 * fVar6,
                                     CONCAT48(fVar5 * fVar5, CONCAT44(fVar4 * fVar4, fVar3 * fVar3))
) >> 0x20, 0), fVar3 * fVar3 + fVar4 * fVar4 + 0.0);
auVar9 = rsqrtss(auVar9, auVar9);
fVar2 = SUB164(auVar9, 0);
auVar9 = CONCAT412(fVar2 * fVar6, CONCAT48(fVar2 * fVar5, CONCAT44(fVar2 * fVar4, fVar2 * fVar3)));
pauVar8 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar8 = auVar9;
lVar1 = *(longlong * )(param_1 + 0x20);
local_28 = FUN_140062650(param_1, "Vector3", 7);
local_20 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


undefined8 FUN_1401474e0(undefined8
param_1)

{
float *pfVar1;

pfVar1 = (float *) FUN_140056ab0(param_1, 1, "Vector3");
FUN_140058780(param_1,
"Vector3(%f, %f, %f)",(double)*pfVar1,(double)pfVar1[1],(double)pfVar1[2]);
return 1;
}


undefined8 FUN_140147540(longlong
param_1)

{
longlong lVar1;
byte *pbVar2;
longlong lVar3;
undefined8 *puVar4;
double *pdVar5;
float *pfVar6;
char *pcVar7;
undefined8 *puVar8;
undefined8 *puVar9;
char *pcVar10;
byte *pbVar11;
uint uVar12;
char cVar13;
undefined8 local_18;
undefined4 local_10;

pfVar6 = (float *) FUN_140056ab0(param_1, 1);
pcVar7 = (char *) FUN_140056bb0(param_1, 2);
uVar12 = (uint) * pcVar7;
if (uVar12 == 0x78) {
pcVar10 = "x";
cVar13 = 'x';
do {
if (cVar13 == '\0') {
pdVar5 = *(double **) (param_1 + 0x10);
*
pdVar5 = (double) *pfVar6;
*(undefined4 *)(pdVar5 + 1) = 3;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
return 1;
}
cVar13 = (pcVar7 + -0x1409da163)
[(longlong)pcVar10];
pcVar10 = pcVar10 + 1;
} while (cVar13 == *pcVar10);
}
if (uVar12 == 0x79) {
pcVar10 = "y";
cVar13 = 'y';
do {
if (cVar13 == '\0') {
pdVar5 = *(double **) (param_1 + 0x10);
*
pdVar5 = (double) pfVar6[1];
*(undefined4 *)(pdVar5 + 1) = 3;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
return 1;
}
cVar13 = (pcVar7 + -0x1409da17b)
[(longlong)pcVar10];
pcVar10 = pcVar10 + 1;
} while (cVar13 == *pcVar10);
}
if (uVar12 == 0x7a) {
pbVar11 = &DAT_1409da194;
do {
if ((char)uVar12 == '\0') {
pdVar5 = *(double **) (param_1 + 0x10);
*
pdVar5 = (double) pfVar6[2];
*(undefined4 *)(pdVar5 + 1) = 3;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
return 1;
}
pbVar2 = (byte * )(pcVar7 + -0x1409da193 + (longlong)
pbVar11);
uVar12 = (uint) * pbVar2;
pbVar11 = pbVar11 + 1;
} while (*pbVar2 == *pbVar11);
}
lVar3 = *(longlong * )(param_1 + 0x20);
local_18 = FUN_140062650(param_1, "Vector3", 7);
local_10 = 4;
FUN_14005e8e0(param_1, lVar3
+ 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
puVar4 = *(undefined8 * *)(param_1 + 0x10);
lVar3 = *(longlong * )(param_1 + 0x18);
puVar8 = (undefined8 * )(lVar3 + 0x10);
puVar9 = &DAT_140a12138;
if (puVar8<puVar4) {
puVar9 = puVar8;
}
*
puVar4 = *puVar9;
*(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar9 + 1);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
lVar1 = *(longlong * )(param_1 + 0x10) + -0x10;
FUN_14005e8e0(param_1, *(longlong
*)(param_1 + 0x10) + -0x20,lVar1,lVar1);
FUN_140058350(param_1, (longlong)
puVar4 - lVar3 >> 4 & 0xffffffff);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
return 1;
}


undefined8 FUN_140147730(undefined8
param_1)

{
byte *pbVar1;
float *pfVar2;
char *pcVar3;
undefined8 uVar4;
char *pcVar5;
byte *pbVar6;
uint uVar7;
char cVar8;
double dVar9;

pfVar2 = (float *) FUN_140056ab0(param_1, 1);
pcVar3 = (char *) FUN_140056bb0(param_1, 2);
uVar7 = (uint) * pcVar3;
if (uVar7 == 0x78) {
pcVar5 = "x";
cVar8 = 'x';
do {
if (cVar8 == '\0') {
dVar9 = (double) FUN_140056c40(param_1, 3);
*
pfVar2 = (float) dVar9;
return 0;
}
cVar8 = (pcVar3 + -0x1409da1bb)
[(longlong)pcVar5];
pcVar5 = pcVar5 + 1;
} while (cVar8 == *pcVar5);
}
if (uVar7 == 0x79) {
pcVar5 = "y";
cVar8 = 'y';
do {
if (cVar8 == '\0') {
dVar9 = (double) FUN_140056c40(param_1, 3);
pfVar2[1] = (float)
dVar9;
return 0;
}
cVar8 = (pcVar3 + -0x1409da0d3)
[(longlong)pcVar5];
pcVar5 = pcVar5 + 1;
} while (cVar8 == *pcVar5);
}
if (uVar7 == 0x7a) {
pbVar6 = &DAT_1409da0fc;
do {
if ((char)uVar7 == '\0') {
dVar9 = (double) FUN_140056c40(param_1, 3);
pfVar2[2] = (float)
dVar9;
return 0;
}
pbVar1 = (byte * )(pcVar3 + -0x1409da0fb + (longlong)
pbVar6);
uVar7 = (uint) * pbVar1;
pbVar6 = pbVar6 + 1;
} while (*pbVar1 == *pbVar6);
}
uVar4 = FUN_140056570(param_1, 2, "no such index");
return
uVar4;
}


undefined8 FUN_1401478b0(longlong
param_1)

{
longlong lVar1;
float *pfVar2;
float *pfVar3;
undefined (*pauVar4)[16];
float fVar5;
float fVar6;
float fVar7;
float fVar8;
undefined8 local_28;
undefined4 local_20;

pfVar2 = (float *) FUN_140056ab0(param_1, 1, "Vector3");
pfVar3 = (float *) FUN_140056ab0(param_1, 2, "Vector3");
fVar5 = *pfVar3 + *pfVar2;
fVar6 = pfVar3[1] + pfVar2[1];
fVar7 = pfVar3[2] + pfVar2[2];
fVar8 = pfVar3[3] + pfVar2[3];
pauVar4 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar4 = CONCAT412(fVar8, CONCAT48(fVar7, CONCAT44(fVar6, fVar5)));
lVar1 = *(longlong * )(param_1 + 0x20);
local_28 = FUN_140062650(param_1, "Vector3", 7);
local_20 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


undefined8 FUN_140147970(longlong
param_1)

{
longlong lVar1;
float *pfVar2;
float *pfVar3;
undefined (*pauVar4)[16];
float fVar5;
float fVar6;
float fVar7;
float fVar8;
undefined8 local_28;
undefined4 local_20;

pfVar2 = (float *) FUN_140056ab0(param_1, 1, "Vector3");
pfVar3 = (float *) FUN_140056ab0(param_1, 2, "Vector3");
fVar5 = *pfVar2 - *pfVar3;
fVar6 = pfVar2[1] - pfVar3[1];
fVar7 = pfVar2[2] - pfVar3[2];
fVar8 = pfVar2[3] - pfVar3[3];
pauVar4 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar4 = CONCAT412(fVar8, CONCAT48(fVar7, CONCAT44(fVar6, fVar5)));
lVar1 = *(longlong * )(param_1 + 0x20);
local_28 = FUN_140062650(param_1, "Vector3", 7);
local_20 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


undefined8 FUN_140147a30(longlong
param_1)

{
longlong lVar1;
float *pfVar2;
undefined (*pauVar3)[16];
double dVar4;
float fVar5;
float fVar6;
float fVar7;
float fVar8;
undefined8 local_28;
undefined4 local_20;

pfVar2 = (float *) FUN_140056ab0(param_1, 1, "Vector3");
dVar4 = (double) FUN_140056c40(param_1, 2);
fVar5 = (float) dVar4;
fVar6 = *pfVar2 * fVar5;
fVar7 = pfVar2[1] * fVar5;
fVar8 = pfVar2[2] * fVar5;
fVar5 = pfVar2[3] * fVar5;
pauVar3 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar3 = CONCAT412(fVar5, CONCAT48(fVar8, CONCAT44(fVar7, fVar6)));
lVar1 = *(longlong * )(param_1 + 0x20);
local_28 = FUN_140062650(param_1, "Vector3", 7);
local_20 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


undefined8 FUN_140147af0(longlong
param_1)

{
longlong lVar1;
undefined (*pauVar2)[16];
double dVar3;
float fVar4;
undefined auVar5[16];
undefined8 local_28;
undefined4 local_20;

pauVar2 = (undefined(*)[16])
FUN_140056ab0(param_1,
1,"Vector3");
dVar3 = (double) FUN_140056c40(param_1, 2);
fVar4 = (float) dVar3;
auVar5 = divps(*pauVar2, CONCAT412(fVar4, CONCAT48(fVar4, CONCAT44(fVar4, fVar4))));
pauVar2 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar2 = auVar5;
lVar1 = *(longlong * )(param_1 + 0x20);
local_28 = FUN_140062650(param_1, "Vector3", 7);
local_20 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


undefined8 FUN_140147bb0(longlong
param_1)

{
uint *puVar1;
byte bVar2;
int iVar3;
uint uVar4;
float *pfVar5;
float *pfVar6;

pfVar5 = (float *) FUN_140056ab0(param_1, 1, "Vector3");
iVar3 = FUN_1401470f0(param_1, 2);
if (iVar3 != 0) {
pfVar6 = (float *) FUN_140056ab0(param_1, 2, "Vector3");
uVar4 = movmskps((int) pfVar6,
                 CONCAT412(-(uint)(pfVar6[3] != pfVar5[3]),
                           CONCAT48(-(uint)(pfVar6[2] != pfVar5[2]),
                                    CONCAT44(-(uint)(pfVar6[1] != pfVar5[1]),
                                             -(uint)(*pfVar6 != *pfVar5)))));
bVar2 = 1;
if ((uVar4 & 7) == 0) goto
LAB_140147c11;
}
bVar2 = 0;
LAB_140147c11:
puVar1 = *(uint * *)(param_1 + 0x10);
puVar1[2] = 1;
*
puVar1 = (uint)
bVar2;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
return 1;
}


undefined8 FUN_140147ce0(longlong
param_1)

{
undefined8 *puVar1;
longlong lVar2;
double dVar3;
int iVar4;
undefined8 uVar5;
undefined (*pauVar6)[16];
undefined4 uVar7;
undefined4 uVar8;
undefined4 uVar9;
float fVar10;
float fVar11;
float fVar12;
undefined4 uVar13;
undefined8 local_48;
undefined4 local_40;

iVar4 = FUN_1401470f0(param_1, 1);
if (iVar4 != 0) {
uVar5 = FUN_140056ab0(param_1, 1, "Vector3");
uVar5 = FUN_140147070(param_1, uVar5);
return
uVar5;
}
puVar1 = *(undefined8 * *)(param_1 + 0x18);
if (((puVar1 < *(undefined8 **)(param_1 + 0x10)) && (puVar1 != &DAT_140a12138)) &&
(*(int *)(puVar1 + 1) == 5)) {
uVar7 = FUN_140144ef0(param_1, "Vector3", 1, &DAT_1409da14c, 3);
uVar8 = FUN_140144ef0(param_1, "Vector3", 1, &DAT_1409da1dc, 2);
uVar9 = FUN_140144ef0(param_1, "Vector3", 1, &DAT_1409da224, 1);
uVar13 = 0;
pauVar6 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar6 = CONCAT412(uVar13, CONCAT48(uVar7, CONCAT44(uVar8, uVar9)));
lVar2 = *(longlong * )(param_1 + 0x20);
local_48 = FUN_140062650(param_1, "Vector3", 7);
local_40 = 4;
FUN_14005e8e0(param_1, lVar2
+ 0xa0,&local_48,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
}
else {
dVar3 = (double) FUN_140056c40(param_1, 1);
fVar12 = (float) dVar3;
dVar3 = (double) FUN_140056c40(param_1, 2);
fVar11 = (float) dVar3;
dVar3 = (double) FUN_140056c40(param_1, 3);
fVar10 = (float) dVar3;
uVar7 = 0;
pauVar6 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar6 = CONCAT412(uVar7, CONCAT48(fVar10, CONCAT44(fVar11, fVar12)));
lVar2 = *(longlong * )(param_1 + 0x20);
local_48 = FUN_140062650(param_1, "Vector3", 7);
local_40 = 4;
FUN_14005e8e0(param_1, lVar2
+ 0xa0,&local_48,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
}
return 1;
}


undefined8 FUN_140147f20(longlong
param_1)

{
double *pdVar1;
float fVar2;
float fVar3;
float fVar4;
float fVar5;
float *pfVar6;
float *pfVar7;

pfVar6 = (float *) FUN_140056ab0(param_1, 1, "Vector3");
pfVar7 = (float *) FUN_140056ab0(param_1, 2, "Vector3");
pdVar1 = *(double **) (param_1 + 0x10);
fVar2 = *pfVar7;
fVar3 = pfVar7[1];
fVar4 = *pfVar6;
fVar5 = pfVar6[1];
*(undefined4 *)(pdVar1 + 1) = 3;
*
pdVar1 = (double) (fVar2 * fVar4 + fVar3 * fVar5 + 0.0);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
return 1;
}


undefined8 FUN_140147fa0(longlong
param_1)

{
longlong lVar1;
float *pfVar2;
float *pfVar3;
undefined (*pauVar4)[16];
float fVar5;
float fVar6;
float fVar7;
float fVar8;
undefined8 local_28;
undefined4 local_20;

pfVar2 = (float *) FUN_140056ab0(param_1, 1, "Vector3");
pfVar3 = (float *) FUN_140056ab0(param_1, 2, "Vector3");
fVar5 = pfVar2[1] * 0.0 - pfVar3[1] * 0.0;
fVar6 = *pfVar3 * 0.0 - *pfVar2 * 0.0;
fVar7 = pfVar3[1] * *pfVar2 - *pfVar3 * pfVar2[1];
fVar8 = pfVar3[3] * pfVar2[3] - pfVar3[3] * pfVar2[3];
pauVar4 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar4 = CONCAT412(fVar8, CONCAT48(fVar7, CONCAT44(fVar6, fVar5)));
lVar1 = *(longlong * )(param_1 + 0x20);
local_28 = FUN_140062650(param_1, "Vector3", 7);
local_20 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


undefined8 FUN_140148080(longlong
param_1)

{
longlong lVar1;
undefined (*pauVar2)[16];
undefined (*pauVar3)[16];
undefined auVar4[16];
undefined8 local_28;
undefined4 local_20;

pauVar2 = (undefined(*)[16])
FUN_140056ab0(param_1,
1,"Vector3");
pauVar3 = (undefined(*)[16])
FUN_140056ab0(param_1,
2,"Vector3");
auVar4 = minps(*pauVar2, *pauVar3);
pauVar2 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar2 = auVar4;
lVar1 = *(longlong * )(param_1 + 0x20);
local_28 = FUN_140062650(param_1, "Vector3", 7);
local_20 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


undefined8 FUN_140148140(longlong
param_1)

{
longlong lVar1;
undefined (*pauVar2)[16];
undefined (*pauVar3)[16];
undefined auVar4[16];
undefined8 local_28;
undefined4 local_20;

pauVar2 = (undefined(*)[16])
FUN_140056ab0(param_1,
1,"Vector3");
pauVar3 = (undefined(*)[16])
FUN_140056ab0(param_1,
2,"Vector3");
auVar4 = maxps(*pauVar2, *pauVar3);
pauVar2 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar2 = auVar4;
lVar1 = *(longlong * )(param_1 + 0x20);
local_28 = FUN_140062650(param_1, "Vector3", 7);
local_20 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


undefined8 FUN_140148200(longlong
param_1)

{
longlong lVar1;
float *pfVar2;
float *pfVar3;
undefined (*pauVar4)[16];
float fVar5;
float fVar6;
float fVar7;
float fVar8;
undefined8 local_28;
undefined4 local_20;

pfVar2 = (float *) FUN_140056ab0(param_1, 1, "Vector3");
pfVar3 = (float *) FUN_140056ab0(param_1, 2, "Vector3");
fVar5 = *pfVar3 * *pfVar2;
fVar6 = pfVar3[1] * pfVar2[1];
fVar7 = pfVar3[2] * pfVar2[2];
fVar8 = pfVar3[3] * pfVar2[3];
pauVar4 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar4 = CONCAT412(fVar8, CONCAT48(fVar7, CONCAT44(fVar6, fVar5)));
lVar1 = *(longlong * )(param_1 + 0x20);
local_28 = FUN_140062650(param_1, "Vector3", 7);
local_20 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


undefined8 FUN_1401482c0(longlong
param_1)

{
uint *puVar1;
float fVar2;
float fVar3;
float fVar4;
float fVar5;
float *pfVar6;
float *pfVar7;

pfVar6 = (float *) FUN_140056ab0(param_1, 1, "Vector3");
pfVar7 = (float *) FUN_140056ab0(param_1, 2, "Vector3");
puVar1 = *(uint * *)(param_1 + 0x10);
fVar2 = *pfVar6;
fVar3 = pfVar6[1];
fVar4 = *pfVar7;
fVar5 = pfVar7[1];
puVar1[2] = 1;
*
puVar1 = (uint)((fVar2 - fVar4) * (fVar2 - fVar4) + (fVar3 - fVar5) * (fVar3 - fVar5) + 0.0 <
                DAT_140c3c7a8);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
return 1;
}


undefined8 FUN_140148350(longlong
param_1)

{
longlong lVar1;
double dVar2;
float *pfVar3;
float *pfVar4;
undefined (*pauVar5)[16];
float fVar6;
float fVar7;
float fVar8;
float fVar9;
undefined8 local_28;
undefined4 local_20;

pfVar3 = (float *) FUN_140056ab0(param_1, 1, "Vector3");
pfVar4 = (float *) FUN_140056ab0(param_1, 2, "Vector3");
dVar2 = (double) FUN_140056c40(param_1, 3);
fVar6 = (float) dVar2;
fVar7 = (*pfVar4 - *pfVar3) * fVar6 + *pfVar3;
fVar8 = (pfVar4[1] - pfVar3[1]) * fVar6 + pfVar3[1];
fVar9 = (pfVar4[2] - pfVar3[2]) * fVar6 + pfVar3[2];
fVar6 = (pfVar4[3] - pfVar3[3]) * fVar6 + pfVar3[3];
pauVar5 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar5 = CONCAT412(fVar6, CONCAT48(fVar9, CONCAT44(fVar8, fVar7)));
lVar1 = *(longlong * )(param_1 + 0x20);
local_28 = FUN_140062650(param_1, "Vector3", 7);
local_20 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


undefined8 FUN_140148440(longlong
param_1)

{
longlong lVar1;
double dVar2;
float *pfVar3;
float *pfVar4;
float *pfVar5;
float *pfVar6;
undefined (*pauVar7)[16];
float fVar8;
float fVar9;
float fVar10;
float fVar11;
float fVar12;
float fVar13;
float fVar14;
undefined8 local_28;
undefined4 local_20;

pfVar3 = (float *) FUN_140056ab0(param_1, 1, "Vector3");
pfVar4 = (float *) FUN_140056ab0(param_1, 2, "Vector3");
pfVar5 = (float *) FUN_140056ab0(param_1, 3, "Vector3");
pfVar6 = (float *) FUN_140056ab0(param_1, 4, "Vector3");
dVar2 = (double) FUN_140056c40(param_1, 5);
fVar9 = (float) dVar2;
fVar10 = fVar9 * fVar9;
fVar11 = fVar10 * fVar9;
fVar12 = fVar11 - fVar10;
fVar9 = (fVar11 - fVar10 * 2.0) + fVar9;
fVar8 = fVar10 * 3.0 - fVar11 * 2.0;
fVar10 = (fVar11 * 2.0 - fVar10 * 3.0) + 1.0;
fVar11 = fVar12 * *pfVar6 + fVar9 * *pfVar4 + fVar8 * *pfVar5 + fVar10 * *pfVar3;
fVar13 = fVar12 * pfVar6[1] + fVar9 * pfVar4[1] + fVar8 * pfVar5[1] + fVar10 * pfVar3[1];
fVar14 = fVar12 * pfVar6[2] + fVar9 * pfVar4[2] + fVar8 * pfVar5[2] + fVar10 * pfVar3[2];
fVar8 = fVar12 * pfVar6[3] + fVar9 * pfVar4[3] + fVar8 * pfVar5[3] + fVar10 * pfVar3[3];
pauVar7 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar7 = CONCAT412(fVar8, CONCAT48(fVar14, CONCAT44(fVar13, fVar11)));
lVar1 = *(longlong * )(param_1 + 0x20);
local_28 = FUN_140062650(param_1, "Vector3", 7);
local_20 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


undefined8 FUN_1401485e0(longlong
param_1)

{
longlong lVar1;
double dVar2;
float *pfVar3;
float *pfVar4;
float *pfVar5;
float *pfVar6;
undefined (*pauVar7)[16];
float fVar8;
float fVar9;
float fVar10;
float fVar11;
float fVar12;
float fVar13;
float fVar14;
undefined8 local_38;
undefined4 local_30;

pfVar3 = (float *) FUN_140056ab0(param_1, 1, "Vector3");
pfVar4 = (float *) FUN_140056ab0(param_1, 2, "Vector3");
pfVar5 = (float *) FUN_140056ab0(param_1, 3, "Vector3");
pfVar6 = (float *) FUN_140056ab0(param_1, 4, "Vector3");
dVar2 = (double) FUN_140056c40(param_1, 5);
fVar11 = (float) dVar2;
fVar12 = fVar11 * fVar11;
fVar9 = fVar12 * fVar11 * 1.5;
fVar10 = fVar12 * fVar11 * 0.5;
fVar8 = (fVar12 * 2.0 - fVar9) + fVar11 * 0.5;
fVar13 = fVar10 - fVar12 * 0.5;
fVar10 = (fVar12 - fVar10) - fVar11 * 0.5;
fVar9 = (fVar9 - fVar12 * 2.5) + 1.0;
fVar11 = fVar13 * *pfVar6 + fVar8 * *pfVar5 + fVar9 * *pfVar4 + fVar10 * *pfVar3;
fVar12 = fVar13 * pfVar6[1] + fVar8 * pfVar5[1] + fVar9 * pfVar4[1] + fVar10 * pfVar3[1];
fVar14 = fVar13 * pfVar6[2] + fVar8 * pfVar5[2] + fVar9 * pfVar4[2] + fVar10 * pfVar3[2];
fVar8 = fVar13 * pfVar6[3] + fVar8 * pfVar5[3] + fVar9 * pfVar4[3] + fVar10 * pfVar3[3];
pauVar7 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar7 = CONCAT412(fVar8, CONCAT48(fVar14, CONCAT44(fVar12, fVar11)));
lVar1 = *(longlong * )(param_1 + 0x20);
local_38 = FUN_140062650(param_1, "Vector3", 7);
local_30 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_38,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


undefined8 FUN_1401487a0(longlong
param_1)

{
longlong lVar1;
double dVar2;
float *pfVar3;
float *pfVar4;
float *pfVar5;
float *pfVar6;
undefined (*pauVar7)[16];
float fVar8;
float fVar9;
float fVar10;
float fVar11;
float fVar12;
float fVar13;
float fVar14;
undefined8 local_28;
undefined4 local_20;

pfVar3 = (float *) FUN_140056ab0(param_1, 1, "Vector3");
pfVar4 = (float *) FUN_140056ab0(param_1, 2, "Vector3");
pfVar5 = (float *) FUN_140056ab0(param_1, 3, "Vector3");
pfVar6 = (float *) FUN_140056ab0(param_1, 4, "Vector3");
dVar2 = (double) FUN_140056c40(param_1, 5);
fVar11 = (float) dVar2;
fVar8 = fVar11 * fVar11 * 4.5;
fVar10 = fVar11 * fVar11 * 1.5;
fVar9 = fVar8 - fVar11 * 5.0;
fVar8 = (fVar11 * 4.0 - fVar8) + 0.5;
fVar12 = fVar10 - fVar11;
fVar10 = (fVar11 * 2.0 - fVar10) - 0.5;
fVar11 = fVar12 * *pfVar6 + fVar8 * *pfVar5 + fVar9 * *pfVar4 + fVar10 * *pfVar3;
fVar13 = fVar12 * pfVar6[1] + fVar8 * pfVar5[1] + fVar9 * pfVar4[1] + fVar10 * pfVar3[1];
fVar14 = fVar12 * pfVar6[2] + fVar8 * pfVar5[2] + fVar9 * pfVar4[2] + fVar10 * pfVar3[2];
fVar8 = fVar12 * pfVar6[3] + fVar8 * pfVar5[3] + fVar9 * pfVar4[3] + fVar10 * pfVar3[3];
pauVar7 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar7 = CONCAT412(fVar8, CONCAT48(fVar14, CONCAT44(fVar13, fVar11)));
lVar1 = *(longlong * )(param_1 + 0x20);
local_28 = FUN_140062650(param_1, "Vector3", 7);
local_20 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


undefined8 FUN_140148940(longlong
param_1)

{
longlong lVar1;
double dVar2;
float *pfVar3;
float *pfVar4;
float *pfVar5;
float *pfVar6;
undefined (*pauVar7)[16];
float fVar8;
float fVar9;
float fVar10;
float fVar11;
float fVar12;
float fVar13;
float fVar14;
undefined8 local_28;
undefined4 local_20;

pfVar3 = (float *) FUN_140056ab0(param_1, 1, "Vector3");
pfVar4 = (float *) FUN_140056ab0(param_1, 2, "Vector3");
pfVar5 = (float *) FUN_140056ab0(param_1, 3, "Vector3");
pfVar6 = (float *) FUN_140056ab0(param_1, 4, "Vector3");
dVar2 = (double) FUN_140056c40(param_1, 5);
fVar9 = (float) dVar2 * 9.0;
fVar10 = (float) dVar2 * 3.0;
fVar8 = 4.0 - fVar9;
fVar9 = fVar9 - 5.0;
fVar11 = fVar10 - 1.0;
fVar10 = 2.0 - fVar10;
fVar12 = fVar11 * *pfVar6 + fVar8 * *pfVar5 + fVar9 * *pfVar4 + fVar10 * *pfVar3;
fVar13 = fVar11 * pfVar6[1] + fVar8 * pfVar5[1] + fVar9 * pfVar4[1] + fVar10 * pfVar3[1];
fVar14 = fVar11 * pfVar6[2] + fVar8 * pfVar5[2] + fVar9 * pfVar4[2] + fVar10 * pfVar3[2];
fVar8 = fVar11 * pfVar6[3] + fVar8 * pfVar5[3] + fVar9 * pfVar4[3] + fVar10 * pfVar3[3];
pauVar7 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar7 = CONCAT412(fVar8, CONCAT48(fVar14, CONCAT44(fVar13, fVar12)));
lVar1 = *(longlong * )(param_1 + 0x20);
local_28 = FUN_140062650(param_1, "Vector3", 7);
local_20 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


undefined8 FUN_140148ad0(longlong
param_1)

{
longlong lVar1;
double dVar2;
float *pfVar3;
float *pfVar4;
float *pfVar5;
undefined (*pauVar6)[16];
float fVar7;
float fVar8;
float fVar9;
float fVar10;
float fVar11;
float fVar12;
undefined8 local_38;
undefined4 local_30;

pfVar3 = (float *) FUN_140056ab0(param_1, 1, "Vector3");
pfVar4 = (float *) FUN_140056ab0(param_1, 2, "Vector3");
pfVar5 = (float *) FUN_140056ab0(param_1, 3, "Vector3");
dVar2 = (double) FUN_140056c40(param_1, 4);
fVar8 = (float) dVar2;
dVar2 = (double) FUN_140056c40(param_1, 5);
fVar9 = *pfVar3;
fVar10 = pfVar3[1];
fVar11 = pfVar3[2];
fVar12 = pfVar3[3];
fVar7 = (float) dVar2;
fVar9 = (*pfVar5 - fVar9) * fVar7 + (*pfVar4 - fVar9) * fVar8 + fVar9;
fVar10 = (pfVar5[1] - fVar10) * fVar7 + (pfVar4[1] - fVar10) * fVar8 + fVar10;
fVar11 = (pfVar5[2] - fVar11) * fVar7 + (pfVar4[2] - fVar11) * fVar8 + fVar11;
fVar12 = (pfVar5[3] - fVar12) * fVar7 + (pfVar4[3] - fVar12) * fVar8 + fVar12;
pauVar6 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar6 = CONCAT412(fVar12, CONCAT48(fVar11, CONCAT44(fVar10, fVar9)));
lVar1 = *(longlong * )(param_1 + 0x20);
local_38 = FUN_140062650(param_1, "Vector3", 7);
local_30 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_38,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


undefined8 FUN_140148c10(longlong
param_1)

{
longlong lVar1;
undefined (*pauVar2)[16];
undefined4 uVar3;
undefined4 uVar4;
undefined4 uVar5;
undefined4 uVar6;
undefined8 local_28;
undefined4 local_20;

uVar3 = 0;
uVar4 = 0;
uVar5 = 0;
uVar6 = 0;
pauVar2 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar2 = CONCAT412(uVar6, CONCAT48(uVar5, CONCAT44(uVar4, uVar3)));
lVar1 = *(longlong * )(param_1 + 0x20);
local_28 = FUN_140062650(param_1, "Vector3", 7);
local_20 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


undefined8 FUN_140148ca0(longlong
param_1)

{
longlong lVar1;
undefined (*pauVar2)[16];
undefined4 uVar3;
undefined4 uVar4;
undefined4 uVar5;
undefined4 uVar6;
undefined8 local_28;
undefined4 local_20;

uVar3 = 0x3f800000;
uVar4 = 0x3f800000;
uVar5 = 0x3f800000;
uVar6 = 0x3f800000;
pauVar2 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar2 = CONCAT412(uVar6, CONCAT48(uVar5, CONCAT44(uVar4, uVar3)));
lVar1 = *(longlong * )(param_1 + 0x20);
local_28 = FUN_140062650(param_1, "Vector3", 7);
local_20 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


void FUN_140148d60(undefined8
param_1,
undefined8 param_2, undefined4
param_3,
longlong *param_4
)

{
undefined4 *puVar1;
undefined4 uVar2;
undefined4 uVar3;
undefined4 uVar4;
undefined4 *puVar5;

*
param_4 = *param_4 + 8;
puVar1 = *(undefined4 * *)(*param_4 + -8);
puVar5 = (undefined4 * )
FUN_140056ab0(param_2, param_3,
"Vector3");
uVar2 = puVar5[1];
uVar3 = puVar5[2];
uVar4 = puVar5[3];
*
puVar1 = *puVar5;
puVar1[1] =
uVar2;
puVar1[2] =
uVar3;
puVar1[3] =
uVar4;
return;
}


void FUN_140148da0(longlong
param_1)

{
undefined8 *puVar1;
undefined *puVar2;
longlong *plVar3;
longlong lVar4;
undefined8 uVar5;
undefined *puVar6;
undefined **ppuVar7;
undefined auStack536[32];
undefined8 local_1f8;
undefined4 local_1f0;
undefined *local_1e8;
code *local_1e0;
char *local_1d8;
code *local_1d0;
char *local_1c8;
code *local_1c0;
undefined *local_1b8;
code *local_1b0;
char *local_1a8;
undefined *local_1a0;
char *local_198;
code *local_190;
char *local_188;
code *local_180;
char *local_178;
undefined *local_170;
char *local_168;
code *local_160;
char *local_158;
code *local_150;
char *local_148;
code *local_140;
char *local_138;
code *local_130;
char *local_128;
code *local_120;
char *local_118;
code *local_110;
char *local_108;
code *local_100;
char *local_f8;
code *local_f0;
char *local_e8;
code *local_e0;
char *local_d8;
code *local_d0;
char *local_c8;
code *local_c0;
char *local_b8;
code *local_b0;
char *local_a8;
undefined *local_a0;
char *local_98;
undefined *local_90;
char *local_88;
code *local_80;
char *local_78;
code *local_70;
char *local_68;
code *local_60;
undefined *local_58;
undefined *local_50;
char *local_48;
code *local_40;
undefined8 local_38;
undefined8 local_30;
ulonglong local_28;

local_28 = DAT_140c0f7b0 ^ (ulonglong)
auStack536;
puVar6 = &DAT_140a2d350;
local_1e0 = FUN_1401493d0;
local_1e8 = &DAT_140a2d350;
local_1d8 = "Width";
local_1d0 = FUN_140149430;
local_1c8 = "Height";
local_1c0 = FUN_140149480;
local_1b8 = &DAT_140a2d3a0;
local_1b0 = FUN_1401494d0;
local_1a8 = "Center";
local_1a0 = &LAB_140149570;
local_198 = "ClosestPoint";
local_190 = FUN_140149620;
local_188 = "FarthestPoint";
local_180 = FUN_1401496e0;
local_178 = "IsEmpty";
local_170 = &LAB_1401497e0;
local_168 = "IsAbnormal";
local_160 = FUN_140149840;
local_158 = "ContainsPoint";
local_150 = FUN_1401498a0;
local_148 = "ContainsRect";
local_140 = FUN_140149930;
local_138 = "ContainsSegment";
local_130 = FUN_1401499c0;
local_128 = "IntersectsRect";
local_120 = FUN_140149aa0;
local_118 = "IntersectsRay";
local_110 = FUN_140149bc0;
local_108 = "IntersectsLine";
local_100 = FUN_140149c90;
local_f8 = "IntersectsSegment";
local_f0 = FUN_140149d60;
local_e8 = "IntersectsTriangle";
local_e0 = FUN_140149e30;
local_d8 = "SubtractRect";
local_d0 = FUN_140149ef0;
local_c8 = "__tostring";
local_c0 = FUN_14014a030;
local_b8 = "__index";
local_b0 = FUN_14014a0a0;
local_a8 = "__newindex";
local_a0 = &LAB_14014a230;
local_98 = "__add";
local_90 = &LAB_14014a340;
local_88 = "__sub";
local_80 = FUN_14014a410;
local_78 = "__mul";
local_70 = FUN_14014a4e0;
local_68 = "__div";
local_60 = FUN_14014a5c0;
local_58 = &DAT_140a2d458;
local_50 = &LAB_14014a6a0;
local_48 = "__unm";
local_40 = FUN_14014a750;
local_38 = 0;
local_30 = 0;
FUN_1400569b0(param_1,
"AaRect");
puVar1 = *(undefined8 * *)(param_1 + 0x10);
*
puVar1 = puVar1[-2];
*(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar1 + -1);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
lVar4 = *(longlong * )(param_1 + 0x10);
local_1f8 = FUN_140062650(param_1, "__index", 7);
local_1f0 = 4;
FUN_14005ea50(param_1, lVar4
+ -0x20,&local_1f8,*(longlong *)(param_1 + 0x10) + -0x10);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
ppuVar7 = &local_1e8;
do {
puVar2 = ppuVar7[1];
if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
FUN_14005e2c0(param_1);
}
lVar4 = FUN_140060ab0(param_1, 0);
*(undefined **)(lVar4 + 0x20) =
puVar2;
plVar3 = *(longlong * *)(param_1 + 0x10);
*
plVar3 = lVar4;
*(undefined4 *)(plVar3 + 1) = 6;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
uVar5 = FUN_1400580e0(param_1, 0xfffffffe);
lVar4 = -1;
do {
lVar4 = lVar4 + 1;
} while (puVar6[lVar4] != '\0');
local_1f8 = FUN_140062650(param_1, puVar6);
local_1f0 = 4;
FUN_14005ea50(param_1, uVar5, &local_1f8, *(longlong
*)(param_1 + 0x10) + -0x10);
puVar6 = ppuVar7[2];
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
ppuVar7 = ppuVar7 + 2;
} while (puVar6 != (undefined *)0x0);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
FUN_140057020(param_1,
"AaRect",&PTR_DAT_140b5c420);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
FUN_1407db4f0(local_28
^ (ulonglong)auStack536);
return;
}


undefined8 FUN_1401491e0(longlong
param_1,
undefined4 *param_2
)

{
longlong lVar1;
undefined4 uVar2;
undefined4 uVar3;
undefined4 uVar4;
undefined4 *puVar5;
undefined8 local_18;
undefined4 local_10;

puVar5 = (undefined4 * )
FUN_140059170(param_1,
0x20);
uVar2 = param_2[1];
uVar3 = param_2[2];
uVar4 = param_2[3];
*
puVar5 = *param_2;
puVar5[1] =
uVar2;
puVar5[2] =
uVar3;
puVar5[3] =
uVar4;
uVar2 = param_2[5];
uVar3 = param_2[6];
uVar4 = param_2[7];
puVar5[4] = param_2[4];
puVar5[5] =
uVar2;
puVar5[6] =
uVar3;
puVar5[7] =
uVar4;
lVar1 = *(longlong * )(param_1 + 0x20);
local_18 = FUN_140062650(param_1, "AaRect", 6);
local_10 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


ulonglong FUN_140149270(longlong
param_1,
ulonglong param_2
)

{
undefined8 *puVar1;
undefined8 *puVar2;
int iVar3;
longlong *plVar4;
longlong lVar5;
ulonglong uVar6;
undefined8 local_18;
undefined4 local_10;

param_2 = param_2 & 0xffffffff;
plVar4 = (longlong * )

FUN_1400580e0();

if (*(int *)(plVar4 + 1) == 2) {
lVar5 = *plVar4;
}
else {
if (*(int *)(plVar4 + 1) != 7) {
return 0;
}
lVar5 = *plVar4 + 0x30;
}
if (lVar5 != 0) {
plVar4 = (longlong * )
FUN_1400580e0(param_1, param_2
& 0xffffffff);
iVar3 = *(int *) (plVar4 + 1);
if ((iVar3 == 5) || (iVar3 == 7)) {
lVar5 = *(longlong * )(*plVar4 + 0x10);
}
else {
lVar5 = *(longlong * )(*(longlong * )(param_1 + 0x20) + 0xe0 + (longlong)
iVar3 * 8);
}
if (lVar5 != 0) {
plVar4 = *(longlong * *)(param_1 + 0x10);
*
plVar4 = lVar5;
*(undefined4 *)(plVar4 + 1) = 5;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
lVar5 = *(longlong * )(param_1 + 0x20);
local_18 = FUN_140062650(param_1, "AaRect", 6);
local_10 = 4;
FUN_14005e8e0(param_1, lVar5
+ 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
uVar6 = 0;
puVar1 = (undefined8 * )(*(longlong * )(param_1 + 0x10) + -0x10);
puVar2 = (undefined8 * )(*(longlong * )(param_1 + 0x10) + -0x20);
if ((puVar1 == &DAT_140a12138) || (puVar2 == &DAT_140a12138)) {
iVar3 = 0;
}
else {
iVar3 = FUN_14005ac20(puVar1, puVar2);
}
*(undefined8 **)(param_1 + 0x10) =
puVar2;
return uVar6 & 0xffffff00 | (ulonglong)(iVar3 != 0);
}
}
return 0;
}


undefined8 FUN_140149390(longlong
param_1)

{
uint *puVar1;
int iVar2;

iVar2 = FUN_140149270();
puVar1 = *(uint * *)(param_1 + 0x10);
puVar1[2] = 1;
*
puVar1 = (uint)(iVar2 != 0);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
return 1;
}


undefined8 FUN_1401493d0(longlong
param_1)

{
float fVar1;
float fVar2;
float fVar3;
float fVar4;
double *pdVar5;
float *pfVar6;

pfVar6 = (float *) FUN_140056ab0(param_1, 1, "AaRect");
pdVar5 = *(double **) (param_1 + 0x10);
fVar1 = pfVar6[5];
fVar2 = pfVar6[4];
fVar3 = pfVar6[1];
fVar4 = *pfVar6;
*(undefined4 *)(pdVar5 + 1) = 3;
*
pdVar5 = (double) ((fVar1 - fVar3) * (fVar2 - fVar4));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
return 1;
}


undefined8 FUN_140149430(longlong
param_1)

{
float fVar1;
float fVar2;
double *pdVar3;
float *pfVar4;

pfVar4 = (float *) FUN_140056ab0(param_1, 1, "AaRect");
pdVar3 = *(double **) (param_1 + 0x10);
fVar1 = pfVar4[4];
fVar2 = *pfVar4;
*(undefined4 *)(pdVar3 + 1) = 3;
*
pdVar3 = (double) (fVar1 - fVar2);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
return 1;
}


undefined8 FUN_140149480(longlong
param_1)

{
float fVar1;
float fVar2;
double *pdVar3;
longlong lVar4;

lVar4 = FUN_140056ab0(param_1, 1, "AaRect");
pdVar3 = *(double **) (param_1 + 0x10);
fVar1 = *(float *) (lVar4 + 0x14);
fVar2 = *(float *) (lVar4 + 4);
*(undefined4 *)(pdVar3 + 1) = 3;
*
pdVar3 = (double) (fVar1 - fVar2);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
return 1;
}


undefined8 FUN_1401494d0(longlong
param_1)

{
longlong lVar1;
float *pfVar2;
undefined (*pauVar3)[16];
float fVar4;
float fVar5;
float fVar6;
float fVar7;
undefined8 local_28;
undefined4 local_20;

pfVar2 = (float *) FUN_140056ab0(param_1, 1, "AaRect");
fVar4 = pfVar2[4] - *pfVar2;
fVar5 = pfVar2[5] - pfVar2[1];
fVar6 = pfVar2[6] - pfVar2[2];
fVar7 = pfVar2[7] - pfVar2[3];
pauVar3 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar3 = CONCAT412(fVar7, CONCAT48(fVar6, CONCAT44(fVar5, fVar4)));
lVar1 = *(longlong * )(param_1 + 0x20);
local_28 = FUN_140062650(param_1, "Vector2", 7);
local_20 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


undefined8 FUN_140149620(longlong
param_1)

{
longlong lVar1;
undefined (*pauVar2)[16];
undefined (*pauVar3)[16];
undefined auVar4[16];
undefined auVar5[16];
undefined8 local_28;
undefined4 local_20;

pauVar2 = (undefined(*)[16])
FUN_140056ab0(param_1,
1,"AaRect");
pauVar3 = (undefined(*)[16])
FUN_140056ab0(param_1,
2,"Vector2");
auVar4 = minps(*pauVar3, pauVar2[1]);
auVar5 = maxps(*pauVar2, auVar4);
pauVar2 = (undefined(*)[16])
FUN_140059170(SUB168(auVar4, 0), param_1,
0x10);
*
pauVar2 = auVar5;
lVar1 = *(longlong * )(param_1 + 0x20);
local_28 = FUN_140062650(param_1, "Vector2", 7);
local_20 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1401496e0(longlong
param_1)

{
longlong lVar1;
float *pfVar2;
float *pfVar3;
undefined (*pauVar4)[16];
undefined8 uVar5;
float fVar6;
float fVar7;
undefined4 uVar8;
undefined4 uVar9;
undefined local_28[32];

pfVar2 = (float *) FUN_140056ab0(param_1, 1, "AaRect");
pfVar3 = (float *) FUN_140056ab0(param_1, 2, "Vector2");
fVar6 = (pfVar2[4] + *pfVar2) * 0.5;
fVar7 = (pfVar2[5] + pfVar2[1]) * 0.5;
local_28.
_12_4_ = (pfVar2[7] + pfVar2[3]) * 0.5;
local_28.
_0_12_ = CONCAT48((pfVar2[6] + pfVar2[2]) * 0.5, CONCAT44(fVar7, fVar6));
if (pfVar3[1] <= fVar7) {
fVar7 = pfVar2[5];
}
else {
fVar7 = pfVar2[1];
}
if (*pfVar3 <= fVar6) {
fVar6 = pfVar2[4];
}
else {
fVar6 = *pfVar2;
}
uVar8 = 0;
uVar9 = 0;
pauVar4 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar4 = CONCAT412(uVar9, CONCAT48(uVar8, CONCAT44(fVar7, fVar6)));
lVar1 = *(longlong * )(param_1 + 0x20);
uVar5 = FUN_140062650(param_1, "Vector2", 7);
local_28.
_0_12_ = CONCAT48(4, uVar5);
FUN_14005e8e0(param_1, lVar1
+ 0xa0,local_28,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


undefined8 FUN_140149840(longlong
param_1)

{
uint *puVar1;
byte bVar2;
float *pfVar3;

pfVar3 = (float *) FUN_140056ab0(param_1, 1, "AaRect");
if ((pfVar3[4] < *pfVar3) || (
bVar2 = 0, pfVar3[5]
< pfVar3[1])) {
bVar2 = 1;
}
puVar1 = *(uint * *)(param_1 + 0x10);
puVar1[2] = 1;
*
puVar1 = (uint)
bVar2;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
return 1;
}


undefined8 FUN_1401498a0(longlong
param_1)

{
uint *puVar1;
byte bVar2;
float *pfVar3;
float *pfVar4;

pfVar3 = (float *) FUN_140056ab0(param_1, 1, "AaRect");
pfVar4 = (float *) FUN_140056ab0(param_1, 2, "Vector2");
if ((((*pfVar4 < *pfVar3) || (pfVar3[4] <= *pfVar4)) || (pfVar4[1] < pfVar3[1])) ||
(
bVar2 = 1, pfVar3[5]
<= pfVar4[1])) {
bVar2 = 0;
}
puVar1 = *(uint * *)(param_1 + 0x10);
puVar1[2] = 1;
*
puVar1 = (uint)
bVar2;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
return 1;
}


undefined8 FUN_140149930(longlong
param_1)

{
uint *puVar1;
byte bVar2;
float *pfVar3;
float *pfVar4;

pfVar3 = (float *) FUN_140056ab0(param_1, 1, "AaRect");
pfVar4 = (float *) FUN_140056ab0(param_1, 2, "AaRect");
if ((((*pfVar4 <= *
pfVar3 &&*pfVar3
!= *pfVar4) || (pfVar3[4] < pfVar4[4])) ||
(pfVar4[1] <= pfVar3[1] && pfVar3[1] != pfVar4[1])) || (
bVar2 = 1, pfVar3[5]
< pfVar4[5])) {
bVar2 = 0;
}
puVar1 = *(uint * *)(param_1 + 0x10);
puVar1[2] = 1;
*
puVar1 = (uint)
bVar2;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
return 1;
}


undefined8 FUN_1401499c0(longlong
param_1)

{
uint *puVar1;
byte bVar2;
float *pfVar3;
float *pfVar4;
float *pfVar5;

pfVar3 = (float *) FUN_140056ab0(param_1, 1, "AaRect");
pfVar4 = (float *) FUN_140056ab0(param_1, 2, "Vector2");
pfVar5 = (float *) FUN_140056ab0(param_1, 3, "Vector2");
if ((*pfVar3 <= *pfVar4) && (*pfVar4<pfVar3[4])) {
if (((pfVar3[1] <= pfVar4[1]) &&
(((pfVar4[1] < pfVar3[5] && (*pfVar3 <= *pfVar5)) && (*pfVar5<pfVar3[4])))) &&
((pfVar3[1] <= pfVar5[1] && (
bVar2 = 1, pfVar5[1]
< pfVar3[5])))) goto
LAB_140149a65;
}
bVar2 = 0;
LAB_140149a65:
puVar1 = *(uint * *)(param_1 + 0x10);
puVar1[2] = 1;
*
puVar1 = (uint)
bVar2;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
return 1;
}


undefined8 FUN_140149aa0(longlong
param_1)

{
uint *puVar1;
longlong lVar2;
bool bVar3;
undefined (*pauVar4)[16];
undefined (*pauVar5)[16];
undefined8 uVar6;
undefined auVar7[16];
undefined auVar8[16];
undefined8 local_48;
undefined4 uStack64;
undefined4 uStack60;
undefined local_38[16];

pauVar4 = (undefined(*)[16])
FUN_140056ab0(param_1,
1,"AaRect");
pauVar5 = (undefined(*)[16])
FUN_140056ab0(param_1,
2,"AaRect");
auVar8 = minps(pauVar4[1], pauVar5[1]);
auVar7 = maxps(*pauVar4, *pauVar5);
if ((
SUB164(auVar8,
0) <=
SUB164(auVar7,
0)) ||
(
SUB164(auVar8
>> 0x20,0) <=
SUB164(auVar7
>> 0x20,0))) {
auVar7 = CONCAT412(uStack60, CONCAT48(uStack64, local_48));
bVar3 = false;
}
else {
bVar3 = true;
local_38 = auVar8;
}
puVar1 = *(uint * *)(param_1 + 0x10);
puVar1[2] = 1;
*
puVar1 = (uint)
bVar3;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
if (bVar3) {
pauVar4 = (undefined(*)[16])
FUN_140059170(param_1,
0x20);
*
pauVar4 = auVar7;
pauVar4[1] =
local_38;
lVar2 = *(longlong * )(param_1 + 0x20);
local_48 = FUN_140062650(param_1, "AaRect", 6);
uStack64 = 4;
FUN_14005e8e0(param_1, lVar2
+ 0xa0,&local_48,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
uVar6 = 2;
}
else {
uVar6 = 1;
}
return
uVar6;
}


undefined8 FUN_140149bc0(longlong
param_1)

{
uint *puVar1;
double *pdVar2;
int iVar3;
undefined8 uVar4;
undefined8 uVar5;
undefined8 uVar6;
float local_res8[2];

uVar4 = FUN_140056ab0(param_1, 1, "AaRect");
uVar5 = FUN_140056ab0(param_1, 2, "Vector2");
uVar6 = FUN_140056ab0(param_1, 3, "Vector2");
iVar3 = FUN_1401b25d0(uVar4, uVar5, uVar6, local_res8);
puVar1 = *(uint * *)(param_1 + 0x10);
puVar1[2] = 1;
*
puVar1 = (uint)(iVar3 != 0);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
pdVar2 = *(double **) (param_1 + 0x10);
if (iVar3 == 0) {
return 1;
}
*(undefined4 *)(pdVar2 + 1) = 3;
*
pdVar2 = (double) local_res8[0];
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
return 2;
}


undefined8 FUN_140149c90(longlong
param_1)

{
uint *puVar1;
double *pdVar2;
int iVar3;
undefined8 uVar4;
undefined8 uVar5;
undefined8 uVar6;
float local_res8[2];

uVar4 = FUN_140056ab0(param_1, 1, "AaRect");
uVar5 = FUN_140056ab0(param_1, 2, "Vector2");
uVar6 = FUN_140056ab0(param_1, 3, "Vector2");
iVar3 = FUN_1401b2700(uVar4, uVar5, uVar6, local_res8);
puVar1 = *(uint * *)(param_1 + 0x10);
puVar1[2] = 1;
*
puVar1 = (uint)(iVar3 != 0);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
pdVar2 = *(double **) (param_1 + 0x10);
if (iVar3 == 0) {
return 1;
}
*(undefined4 *)(pdVar2 + 1) = 3;
*
pdVar2 = (double) local_res8[0];
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
return 2;
}


undefined8 FUN_140149d60(longlong
param_1)

{
uint *puVar1;
double *pdVar2;
int iVar3;
undefined8 uVar4;
undefined8 uVar5;
undefined8 uVar6;
float local_res8[2];

uVar4 = FUN_140056ab0(param_1, 1, "AaRect");
uVar5 = FUN_140056ab0(param_1, 2, "Vector2");
uVar6 = FUN_140056ab0(param_1, 3, "Vector2");
iVar3 = FUN_1401b2810(uVar4, uVar5, uVar6, local_res8);
puVar1 = *(uint * *)(param_1 + 0x10);
puVar1[2] = 1;
*
puVar1 = (uint)(iVar3 != 0);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
pdVar2 = *(double **) (param_1 + 0x10);
if (iVar3 == 0) {
return 1;
}
*(undefined4 *)(pdVar2 + 1) = 3;
*
pdVar2 = (double) local_res8[0];
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
return 2;
}


undefined8 FUN_140149e30(longlong
param_1)

{
uint *puVar1;
int iVar2;
undefined8 uVar3;
undefined8 uVar4;
undefined8 uVar5;
undefined8 uVar6;

uVar3 = FUN_140056ab0(param_1, 1, "AaRect");
uVar4 = FUN_140056ab0(param_1, 2, "Vector2");
uVar5 = FUN_140056ab0(param_1, 3, "Vector2");
uVar6 = FUN_140056ab0(param_1, 3, "Vector2");
iVar2 = FUN_1401b2960(uVar3, uVar4, uVar5, uVar6);
puVar1 = *(uint * *)(param_1 + 0x10);
puVar1[2] = 1;
*
puVar1 = (uint)(iVar2 != 0);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
return 1;
}


void FUN_140149ef0(longlong
param_1)

{
undefined8 *puVar1;
double *pdVar2;
longlong lVar3;
undefined8 uVar4;
undefined8 uVar5;
ulonglong uVar6;
ulonglong uVar7;
undefined *puVar8;
undefined auStack344[32];
undefined local_138[288];
ulonglong local_18;

puVar8 = auStack344;
local_18 = DAT_140c0f7b0 ^ (ulonglong)
auStack344;
uVar4 = FUN_140056ab0(param_1, 1, "AaRect");
uVar5 = FUN_140056ab0(param_1, 2, "AaRect");
uVar6 = FUN_1401b2ba0(uVar4, uVar5, local_138);
if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
FUN_14005e2c0(param_1);
}
puVar1 = *(undefined8 * *)(param_1 + 0x10);
uVar4 = FUN_14005c1b0(param_1, 0, 0);
*(undefined4 *)(puVar1 + 1) = 5;
*
puVar1 = uVar4;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
uVar7 = 0;
if (uVar6 != 0) {
do {
puVar8 = puVar8 + 0x20;
pdVar2 = *(double **) (param_1 + 0x10);
*(undefined4 *)(pdVar2 + 1) = 3;
*
pdVar2 = (double) ((int) uVar7 + 1);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_1401491e0(param_1, puVar8
);
lVar3 = *(longlong * )(param_1 + 0x10);
FUN_14005ea50(param_1, &DAT_ffffffffffffffd0
+ lVar3,lVar3 + -0x20,lVar3 + -0x10);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
uVar7 = uVar7 + 1;
} while (uVar7<uVar6);
}
FUN_1407db4f0(local_18
^ (ulonglong)auStack344);
return;
}


undefined8 FUN_14014a030(undefined8
param_1)

{
float *pfVar1;

pfVar1 = (float *) FUN_140056ab0(param_1, 1, "AaRect");
FUN_140058780(param_1,
"AaRect(%f, %f, %f, %f)",(double)*pfVar1,(double)pfVar1[1],(double)pfVar1[4]
,(double)pfVar1[5]);
return 1;
}


undefined8 FUN_14014a0a0(longlong
param_1)

{
longlong lVar1;
byte *pbVar2;
char cVar3;
undefined8 *puVar4;
longlong lVar5;
char *pcVar6;
byte *pbVar7;
undefined8 *puVar8;
undefined8 uVar9;
undefined8 *puVar10;
char *pcVar11;
uint uVar12;
undefined8 local_18;
undefined4 local_10;

lVar5 = FUN_140056ab0(param_1, 1);
pcVar6 = (char *) FUN_140056bb0(param_1, 2);
cVar3 = *pcVar6;
uVar12 = (uint)
cVar3;
if (uVar12 == 0x6d) {
pcVar11 = "min";
do {
if (cVar3 == '\0') {
uVar9 = FUN_140145410(param_1, lVar5);
return
uVar9;
}
cVar3 = (pcVar6 + -0x1409da3e3)
[(longlong)pcVar11];
pcVar11 = pcVar11 + 1;
} while (cVar3 == *pcVar11);
}
if (uVar12 == 0x6c) {
pbVar7 = &DAT_1409da444;
do {
if ((char)uVar12 == '\0') {
uVar9 = FUN_140145410(param_1, lVar5 + 0x10);
return
uVar9;
}
pbVar2 = (byte * )(pcVar6 + -0x1409da443 + (longlong)
pbVar7);
uVar12 = (uint) * pbVar2;
pbVar7 = pbVar7 + 1;
} while (*pbVar2 == *pbVar7);
}
lVar5 = *(longlong * )(param_1 + 0x20);
local_18 = FUN_140062650(param_1, "AaRect", 6);
local_10 = 4;
FUN_14005e8e0(param_1, lVar5
+ 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
puVar4 = *(undefined8 * *)(param_1 + 0x10);
lVar5 = *(longlong * )(param_1 + 0x18);
puVar8 = (undefined8 * )(lVar5 + 0x10);
puVar10 = &DAT_140a12138;
if (puVar8<puVar4) {
puVar10 = puVar8;
}
*
puVar4 = *puVar10;
*(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar10 + 1);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
lVar1 = *(longlong * )(param_1 + 0x10) + -0x10;
FUN_14005e8e0(param_1, *(longlong
*)(param_1 + 0x10) + -0x20,lVar1,lVar1);
FUN_140058350(param_1, (longlong)
puVar4 - lVar5 >> 4 & 0xffffffff);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
return 1;
}


undefined8 FUN_14014a410(longlong
param_1)

{
longlong lVar1;
float *pfVar2;
float *pfVar3;
undefined (*pauVar4)[16];
float fVar5;
float fVar6;
float fVar7;
float fVar8;
float fVar9;
float fVar10;
float fVar11;
float fVar12;
undefined8 local_38;
undefined4 local_30;

pfVar2 = (float *) FUN_140056ab0(param_1, 1, "AaRect");
pfVar3 = (float *) FUN_140056ab0(param_1, 2, "Vector2");
fVar9 = pfVar2[4] - *pfVar3;
fVar10 = pfVar2[5] - pfVar3[1];
fVar11 = pfVar2[6] - pfVar3[2];
fVar12 = pfVar2[7] - pfVar3[3];
fVar5 = *pfVar2 - *pfVar3;
fVar6 = pfVar2[1] - pfVar3[1];
fVar7 = pfVar2[2] - pfVar3[2];
fVar8 = pfVar2[3] - pfVar3[3];
pauVar4 = (undefined(*)[16])
FUN_140059170(param_1,
0x20);
*
pauVar4 = CONCAT412(fVar8, CONCAT48(fVar7, CONCAT44(fVar6, fVar5)));
pauVar4[1] =
CONCAT412(fVar12, CONCAT48(fVar11, CONCAT44(fVar10, fVar9))
);
lVar1 = *(longlong * )(param_1 + 0x20);
local_38 = FUN_140062650(param_1, "AaRect", 6);
local_30 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_38,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


undefined8 FUN_14014a4e0(longlong
param_1)

{
longlong lVar1;
float *pfVar2;
undefined (*pauVar3)[16];
double dVar4;
float fVar5;
float fVar6;
float fVar7;
float fVar8;
float fVar9;
float fVar10;
float fVar11;
float fVar12;
undefined8 local_38;
undefined4 local_30;

pfVar2 = (float *) FUN_140056ab0(param_1, 1, "AaRect");
dVar4 = (double) FUN_140056c40(param_1, 2);
fVar5 = (float) dVar4;
fVar9 = pfVar2[4] * fVar5;
fVar10 = pfVar2[5] * fVar5;
fVar11 = pfVar2[6] * fVar5;
fVar12 = pfVar2[7] * fVar5;
fVar6 = *pfVar2 * fVar5;
fVar7 = pfVar2[1] * fVar5;
fVar8 = pfVar2[2] * fVar5;
fVar5 = pfVar2[3] * fVar5;
pauVar3 = (undefined(*)[16])
FUN_140059170(param_1,
0x20);
*
pauVar3 = CONCAT412(fVar5, CONCAT48(fVar8, CONCAT44(fVar7, fVar6)));
pauVar3[1] =
CONCAT412(fVar12, CONCAT48(fVar11, CONCAT44(fVar10, fVar9))
);
lVar1 = *(longlong * )(param_1 + 0x20);
local_38 = FUN_140062650(param_1, "AaRect", 6);
local_30 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_38,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


undefined8 FUN_14014a5c0(longlong
param_1)

{
longlong lVar1;
double dVar2;
float *pfVar3;
undefined (*pauVar4)[16];
float fVar5;
float fVar6;
float fVar7;
float fVar8;
float fVar9;
float fVar10;
float fVar11;
float fVar12;
undefined8 local_38;
undefined4 local_30;

pfVar3 = (float *) FUN_140056ab0(param_1, 1, "AaRect");
dVar2 = (double) FUN_140056c40(param_1, 2);
fVar5 = 1.0 / (float) dVar2;
fVar9 = pfVar3[4] * fVar5;
fVar10 = pfVar3[5] * fVar5;
fVar11 = pfVar3[6] * fVar5;
fVar12 = pfVar3[7] * fVar5;
fVar6 = *pfVar3 * fVar5;
fVar7 = pfVar3[1] * fVar5;
fVar8 = pfVar3[2] * fVar5;
fVar5 = pfVar3[3] * fVar5;
pauVar4 = (undefined(*)[16])
FUN_140059170(param_1,
0x20);
*
pauVar4 = CONCAT412(fVar5, CONCAT48(fVar8, CONCAT44(fVar7, fVar6)));
pauVar4[1] =
CONCAT412(fVar12, CONCAT48(fVar11, CONCAT44(fVar10, fVar9))
);
lVar1 = *(longlong * )(param_1 + 0x20);
local_38 = FUN_140062650(param_1, "AaRect", 6);
local_30 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_38,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


undefined8 FUN_14014a750(longlong
param_1)

{
longlong lVar1;
float *pfVar2;
undefined (*pauVar3)[16];
float fVar4;
float fVar5;
float fVar6;
float fVar7;
float fVar8;
float fVar9;
float fVar10;
float fVar11;
undefined8 local_38;
undefined4 local_30;

pfVar2 = (float *) FUN_140056ab0(param_1, 1, "AaRect");
fVar8 = 0.0 - *pfVar2;
fVar9 = 0.0 - pfVar2[1];
fVar10 = 0.0 - pfVar2[2];
fVar11 = 0.0 - pfVar2[3];
fVar4 = 0.0 - pfVar2[4];
fVar5 = 0.0 - pfVar2[5];
fVar6 = 0.0 - pfVar2[6];
fVar7 = 0.0 - pfVar2[7];
pauVar3 = (undefined(*)[16])
FUN_140059170(param_1,
0x20);
*
pauVar3 = CONCAT412(fVar11, CONCAT48(fVar10, CONCAT44(fVar9, fVar8)));
pauVar3[1] =
CONCAT412(fVar7, CONCAT48(fVar6, CONCAT44(fVar5, fVar4))
);
lVar1 = *(longlong * )(param_1 + 0x20);
local_38 = FUN_140062650(param_1, "AaRect", 6);
local_30 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_38,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


undefined8 FUN_14014a9b0(longlong
param_1)

{
longlong lVar1;
undefined (*pauVar2)[16];
undefined (*pauVar3)[16];
undefined auVar4[16];
undefined auVar5[16];
undefined8 local_38;
undefined4 local_30;

pauVar2 = (undefined(*)[16])
FUN_140056ab0(param_1,
1,"AaRect");
pauVar3 = (undefined(*)[16])
FUN_140056ab0(param_1,
2,"Vector2");
auVar5 = maxps(pauVar2[1], *pauVar3);
auVar4 = minps(*pauVar2, *pauVar3);
pauVar2 = (undefined(*)[16])
FUN_140059170(param_1,
0x20);
*
pauVar2 = auVar4;
pauVar2[1] =
auVar5;
lVar1 = *(longlong * )(param_1 + 0x20);
local_38 = FUN_140062650(param_1, "AaRect", 6);
local_30 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_38,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


undefined8 FUN_14014aa80(longlong
param_1)

{
longlong lVar1;
undefined (*pauVar2)[16];
undefined (*pauVar3)[16];
undefined auVar4[16];
undefined auVar5[16];
undefined8 local_38;
undefined4 local_30;

pauVar2 = (undefined(*)[16])
FUN_140056ab0(param_1,
1,"AaRect");
pauVar3 = (undefined(*)[16])
FUN_140056ab0(param_1,
2,"AaRect");
auVar5 = maxps(pauVar2[1], pauVar3[1]);
auVar4 = minps(*pauVar2, *pauVar3);
pauVar2 = (undefined(*)[16])
FUN_140059170(param_1,
0x20);
*
pauVar2 = auVar4;
pauVar2[1] =
auVar5;
lVar1 = *(longlong * )(param_1 + 0x20);
local_38 = FUN_140062650(param_1, "AaRect", 6);
local_30 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_38,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


void FUN_14014aba0(undefined8
param_1,
undefined8 param_2, undefined4
param_3,
longlong *param_4
)

{
undefined4 *puVar1;
undefined4 uVar2;
undefined4 uVar3;
undefined4 uVar4;
undefined4 *puVar5;

*
param_4 = *param_4 + 8;
puVar1 = *(undefined4 * *)(*param_4 + -8);
puVar5 = (undefined4 * )
FUN_140056ab0(param_2, param_3,
"AaRect");
uVar2 = puVar5[1];
uVar3 = puVar5[2];
uVar4 = puVar5[3];
*
puVar1 = *puVar5;
puVar1[1] =
uVar2;
puVar1[2] =
uVar3;
puVar1[3] =
uVar4;
uVar2 = puVar5[5];
uVar3 = puVar5[6];
uVar4 = puVar5[7];
puVar1[4] = puVar5[4];
puVar1[5] =
uVar2;
puVar1[6] =
uVar3;
puVar1[7] =
uVar4;
return;
}


undefined8 FUN_14014abe0(longlong
param_1)

{
undefined8 *puVar1;
longlong *plVar2;
longlong lVar3;
undefined8 uVar4;
undefined **ppuVar5;
undefined *puVar6;
undefined8 local_18;
undefined4 local_10;

FUN_1400569b0(param_1,
"Quaternion");
puVar1 = *(undefined8 * *)(param_1 + 0x10);
*
puVar1 = puVar1[-2];
*(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar1 + -1);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
lVar3 = *(longlong * )(param_1 + 0x10);
local_18 = FUN_140062650(param_1, "__index", 7);
local_10 = 4;
FUN_14005ea50(param_1, lVar3
+ -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
lVar3 = *(longlong * )(param_1 + 0x10);
ppuVar5 = &PTR_DAT_140c57880;
puVar6 = PTR_DAT_140c57880;
while (puVar6 != (undefined *)0x0) {
puVar6 = ppuVar5[1];
if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
FUN_14005e2c0(param_1);
}
lVar3 = FUN_140060ab0(param_1, 0);
*(undefined **)(lVar3 + 0x20) =
puVar6;
plVar2 = *(longlong * *)(param_1 + 0x10);
*
plVar2 = lVar3;
*(undefined4 *)(plVar2 + 1) = 6;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
puVar6 = *ppuVar5;
uVar4 = FUN_1400580e0(param_1, 0xfffffffe);
lVar3 = -1;
do {
lVar3 = lVar3 + 1;
} while (puVar6[lVar3] != '\0');
local_18 = FUN_140062650(param_1, puVar6);
local_10 = 4;
FUN_14005ea50(param_1, uVar4, &local_18, *(longlong
*)(param_1 + 0x10) + -0x10);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
lVar3 = *(longlong * )(param_1 + 0x10);
ppuVar5 = ppuVar5 + 2;
puVar6 = *ppuVar5;
}
*(longlong *)(param_1 + 0x10) = lVar3 + -0x10;
FUN_140057020(param_1,
"Quaternion",&PTR_DAT_140b5c330);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
return 0;
}


undefined8 FUN_14014ad80(longlong
param_1,
undefined4 *param_2
)

{
longlong lVar1;
undefined4 uVar2;
undefined4 uVar3;
undefined4 uVar4;
undefined4 *puVar5;
undefined8 local_18;
undefined4 local_10;

puVar5 = (undefined4 * )
FUN_140059170(param_1,
0x10);
uVar2 = param_2[1];
uVar3 = param_2[2];
uVar4 = param_2[3];
*
puVar5 = *param_2;
puVar5[1] =
uVar2;
puVar5[2] =
uVar3;
puVar5[3] =
uVar4;
lVar1 = *(longlong * )(param_1 + 0x20);
local_18 = FUN_140062650(param_1, "Quaternion", 10);
local_10 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


ulonglong FUN_14014ae00(longlong
param_1,
ulonglong param_2
)

{
undefined8 *puVar1;
undefined8 *puVar2;
int iVar3;
longlong *plVar4;
longlong lVar5;
ulonglong uVar6;
undefined8 local_18;
undefined4 local_10;

param_2 = param_2 & 0xffffffff;
plVar4 = (longlong * )

FUN_1400580e0();

if (*(int *)(plVar4 + 1) == 2) {
lVar5 = *plVar4;
}
else {
if (*(int *)(plVar4 + 1) != 7) {
return 0;
}
lVar5 = *plVar4 + 0x30;
}
if (lVar5 != 0) {
plVar4 = (longlong * )
FUN_1400580e0(param_1, param_2
& 0xffffffff);
iVar3 = *(int *) (plVar4 + 1);
if ((iVar3 == 5) || (iVar3 == 7)) {
lVar5 = *(longlong * )(*plVar4 + 0x10);
}
else {
lVar5 = *(longlong * )(*(longlong * )(param_1 + 0x20) + 0xe0 + (longlong)
iVar3 * 8);
}
if (lVar5 != 0) {
plVar4 = *(longlong * *)(param_1 + 0x10);
*
plVar4 = lVar5;
*(undefined4 *)(plVar4 + 1) = 5;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
lVar5 = *(longlong * )(param_1 + 0x20);
local_18 = FUN_140062650(param_1, "Quaternion", 10);
local_10 = 4;
FUN_14005e8e0(param_1, lVar5
+ 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
uVar6 = 0;
puVar1 = (undefined8 * )(*(longlong * )(param_1 + 0x10) + -0x10);
puVar2 = (undefined8 * )(*(longlong * )(param_1 + 0x10) + -0x20);
if ((puVar1 == &DAT_140a12138) || (puVar2 == &DAT_140a12138)) {
iVar3 = 0;
}
else {
iVar3 = FUN_14005ac20(puVar1, puVar2);
}
*(undefined8 **)(param_1 + 0x10) =
puVar2;
return uVar6 & 0xffffff00 | (ulonglong)(iVar3 != 0);
}
}
return 0;
}


undefined8 FUN_14014af20(longlong
param_1)

{
uint *puVar1;
int iVar2;

iVar2 = FUN_14014ae00();
puVar1 = *(uint * *)(param_1 + 0x10);
puVar1[2] = 1;
*
puVar1 = (uint)(iVar2 != 0);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
return 1;
}


void FUN_14014af60(undefined8
param_1)

{
undefined8 uVar1;
undefined local_18[16];

uVar1 = FUN_140056ab0(param_1, 1, "Quaternion");
uVar1 = FUN_1401b1b70(uVar1, local_18);
FUN_14014ad80(param_1, uVar1
);
return;
}


void FUN_14014afa0(undefined8
param_1)

{
undefined8 uVar1;
undefined local_18[16];

uVar1 = FUN_140056ab0(param_1, 1, "Quaternion");
uVar1 = FUN_1401b1c60(uVar1, local_18);
FUN_14014ad80(param_1, uVar1
);
return;
}


undefined8 FUN_14014afe0(longlong
param_1)

{
longlong lVar1;
float fVar2;
float *pfVar3;
undefined (*pauVar4)[16];
undefined auVar5[16];
float fVar6;
float fVar7;
float fVar8;
float fVar9;
float fVar10;
float fVar11;
undefined8 local_38;
undefined4 local_30;

pfVar3 = (float *) FUN_140056ab0(param_1, 1, "Quaternion");
fVar9 = *pfVar3;
fVar10 = pfVar3[1];
fVar11 = pfVar3[2];
fVar2 = pfVar3[3];
fVar6 = fVar9 * fVar9 + fVar11 * fVar11;
fVar7 = fVar10 * fVar10 + fVar2 * fVar2;
fVar8 = fVar2 * fVar2 + fVar10 * fVar10;
auVar5 = rsqrtss(ZEXT1216(CONCAT48(fVar8, CONCAT44(fVar6, fVar7))),
                 CONCAT412(fVar8 + 0.0,
                           CONCAT48(fVar11 * fVar11 + fVar9 * fVar9 + fVar8,
                                    CONCAT44(fVar7 + fVar6, fVar6 + fVar7))));
fVar8 = SUB164(auVar5, 0);
fVar8 = (3.0 - (fVar6 + fVar7) * fVar8 * fVar8) * 0.5 * fVar8;
if (fVar8 <= 0.0) {
fVar8 = 0.0;
}
fVar9 = fVar8 * fVar9;
fVar10 = fVar8 * fVar10;
fVar11 = fVar8 * fVar11;
fVar8 = fVar8 * fVar2;
pauVar4 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar4 = CONCAT412(fVar8, CONCAT48(fVar11, CONCAT44(fVar10, fVar9)));
lVar1 = *(longlong * )(param_1 + 0x20);
local_38 = FUN_140062650(param_1, "Quaternion", 10);
local_30 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_38,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14014b0e0(longlong
param_1)

{
longlong lVar1;
ulonglong uVar2;
float *pfVar3;
undefined (*pauVar4)[16];
float fVar5;
float fVar6;
float fVar7;
ulonglong uVar8;
undefined auVar9[16];
undefined8 local_28;
undefined4 uStack32;
undefined4 uStack28;

pfVar3 = (float *) FUN_140056ab0(param_1, 1, "Quaternion");
fVar5 = 0.0;
fVar6 = *pfVar3 * *pfVar3 + 0.0;
fVar7 = pfVar3[1] * pfVar3[1] + pfVar3[3] * pfVar3[3] + fVar6;
if (fVar7 <= _DAT_140c3da58) {
uStack32 = 0;
uStack28 = 0;
local_28 = 0;
auVar9 = ZEXT816(0) << 0x40;
}
else {
fVar6 = (float) ((uint)
pfVar3[2] ^ 0x80000000);
uVar2 = CONCAT44(pfVar3[2], *pfVar3);
uVar8 = uVar2 ^ 0x8000000080000000;
auVar9 = divps(CONCAT88(SUB168(CONCAT412(pfVar3[3], CONCAT48((int) (uVar8 >> 0x20), uVar2)) >> 0x40, 0),
                        uVar8 & 0xffffffff | (ulonglong)(uint)
pfVar3[1] << 0x20) ^
(undefined  [16])0x80000000,
CONCAT412(fVar7, CONCAT48(fVar7, CONCAT44(fVar7, fVar7))
));
fVar5 = fVar7;
}
pauVar4 = (undefined(*)[16])
FUN_140059170(fVar5, fVar6, param_1,
0x10);
*
pauVar4 = auVar9;
lVar1 = *(longlong * )(param_1 + 0x20);
local_28 = FUN_140062650(param_1, "Quaternion", 10);
uStack32 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


undefined8 FUN_14014b200(longlong
param_1)

{
longlong lVar1;
uint *puVar2;
undefined (*pauVar3)[16];
uint uVar4;
uint uVar5;
uint uVar6;
uint uVar7;
undefined8 local_28;
undefined4 local_20;

puVar2 = (uint * )
FUN_140056ab0(param_1,
1,"Quaternion");
uVar6 = *puVar2 ^ 0x80000000;
uVar5 = puVar2[1] ^ 0x80000000;
uVar4 = puVar2[2] ^ 0x80000000;
uVar7 = puVar2[3];
pauVar3 = (undefined(*)[16])
FUN_140059170(uVar4, uVar4, param_1,
0x10);
*
pauVar3 = CONCAT412(uVar7, CONCAT48(uVar4, CONCAT44(uVar5, uVar6)));
lVar1 = *(longlong * )(param_1 + 0x20);
local_28 = FUN_140062650(param_1, "Quaternion", 10);
local_20 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


undefined8 FUN_14014b2d0(undefined8
param_1)

{
float *pfVar1;

pfVar1 = (float *) FUN_140056ab0(param_1, 1, "Quaternion");
FUN_140058780(param_1,
"Quaternion(%d, %d, %d, %d)",(double)*pfVar1,(double)pfVar1[1],
(double)pfVar1[2],(double)pfVar1[3]);
return 1;
}


undefined8 FUN_14014b340(longlong
param_1)

{
longlong lVar1;
byte *pbVar2;
longlong lVar3;
undefined8 *puVar4;
double *pdVar5;
float *pfVar6;
char *pcVar7;
undefined8 *puVar8;
undefined8 *puVar9;
char *pcVar10;
byte *pbVar11;
uint uVar12;
char cVar13;
undefined8 local_18;
undefined4 local_10;

pfVar6 = (float *) FUN_140056ab0(param_1, 1);
pcVar7 = (char *) FUN_140056bb0(param_1, 2);
uVar12 = (uint) * pcVar7;
if (uVar12 == 0x78) {
pcVar10 = "x";
cVar13 = 'x';
do {
if (cVar13 == '\0') {
pdVar5 = *(double **) (param_1 + 0x10);
*
pdVar5 = (double) *pfVar6;
*(undefined4 *)(pdVar5 + 1) = 3;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
return 1;
}
cVar13 = (pcVar7 + -0x1409da5fb)
[(longlong)pcVar10];
pcVar10 = pcVar10 + 1;
} while (cVar13 == *pcVar10);
}
if (uVar12 == 0x79) {
pcVar10 = "y";
cVar13 = 'y';
do {
if (cVar13 == '\0') {
pdVar5 = *(double **) (param_1 + 0x10);
*
pdVar5 = (double) pfVar6[1];
*(undefined4 *)(pdVar5 + 1) = 3;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
return 1;
}
cVar13 = (pcVar7 + -0x1409da57b)
[(longlong)pcVar10];
pcVar10 = pcVar10 + 1;
} while (cVar13 == *pcVar10);
}
if (uVar12 == 0x7a) {
pcVar10 = "z";
cVar13 = 'z';
do {
if (cVar13 == '\0') {
pdVar5 = *(double **) (param_1 + 0x10);
*
pdVar5 = (double) pfVar6[2];
*(undefined4 *)(pdVar5 + 1) = 3;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
return 1;
}
cVar13 = (pcVar7 + -0x1409da593)
[(longlong)pcVar10];
pcVar10 = pcVar10 + 1;
} while (cVar13 == *pcVar10);
}
if (uVar12 == 0x77) {
pbVar11 = &DAT_1409da5cc;
do {
if ((char)uVar12 == '\0') {
pdVar5 = *(double **) (param_1 + 0x10);
*
pdVar5 = (double) pfVar6[3];
*(undefined4 *)(pdVar5 + 1) = 3;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
return 1;
}
pbVar2 = (byte * )(pcVar7 + -0x1409da5cb + (longlong)
pbVar11);
uVar12 = (uint) * pbVar2;
pbVar11 = pbVar11 + 1;
} while (*pbVar2 == *pbVar11);
}
lVar3 = *(longlong * )(param_1 + 0x20);
local_18 = FUN_140062650(param_1, "Quaternion", 10);
local_10 = 4;
FUN_14005e8e0(param_1, lVar3
+ 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
puVar4 = *(undefined8 * *)(param_1 + 0x10);
lVar3 = *(longlong * )(param_1 + 0x18);
puVar8 = (undefined8 * )(lVar3 + 0x10);
puVar9 = &DAT_140a12138;
if (puVar8<puVar4) {
puVar9 = puVar8;
}
*
puVar4 = *puVar9;
*(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar9 + 1);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
lVar1 = *(longlong * )(param_1 + 0x10) + -0x10;
FUN_14005e8e0(param_1, *(longlong
*)(param_1 + 0x10) + -0x20,lVar1,lVar1);
FUN_140058350(param_1, (longlong)
puVar4 - lVar3 >> 4 & 0xffffffff);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
return 1;
}


undefined8 FUN_14014b580(undefined8
param_1)

{
byte *pbVar1;
float *pfVar2;
char *pcVar3;
undefined8 uVar4;
char *pcVar5;
byte *pbVar6;
uint uVar7;
char cVar8;
double dVar9;

pfVar2 = (float *) FUN_140056ab0(param_1, 1);
pcVar3 = (char *) FUN_140056bb0(param_1, 2);
uVar7 = (uint) * pcVar3;
if (uVar7 == 0x78) {
pcVar5 = "x";
cVar8 = 'x';
do {
if (cVar8 == '\0') {
dVar9 = (double) FUN_140056c40(param_1, 3);
*
pfVar2 = (float) dVar9;
return 0;
}
cVar8 = (pcVar3 + -0x1409da5e3)
[(longlong)pcVar5];
pcVar5 = pcVar5 + 1;
} while (cVar8 == *pcVar5);
}
if (uVar7 == 0x79) {
pcVar5 = "y";
cVar8 = 'y';
do {
if (cVar8 == '\0') {
dVar9 = (double) FUN_140056c40(param_1, 3);
pfVar2[1] = (float)
dVar9;
return 0;
}
cVar8 = (pcVar3 + -0x1409da683)
[(longlong)pcVar5];
pcVar5 = pcVar5 + 1;
} while (cVar8 == *pcVar5);
}
if (uVar7 == 0x7a) {
pcVar5 = "z";
cVar8 = 'z';
do {
if (cVar8 == '\0') {
dVar9 = (double) FUN_140056c40(param_1, 3);
pfVar2[2] = (float)
dVar9;
return 0;
}
cVar8 = (pcVar3 + -0x1409da6cb)
[(longlong)pcVar5];
pcVar5 = pcVar5 + 1;
} while (cVar8 == *pcVar5);
}
if (uVar7 == 0x77) {
pbVar6 = &DAT_1409da6e4;
do {
if ((char)uVar7 == '\0') {
dVar9 = (double) FUN_140056c40(param_1, 3);
pfVar2[3] = (float)
dVar9;
return 0;
}
pbVar1 = (byte * )(pcVar3 + -0x1409da6e3 + (longlong)
pbVar6);
uVar7 = (uint) * pbVar1;
pbVar6 = pbVar6 + 1;
} while (*pbVar1 == *pbVar6);
}
uVar4 = FUN_140056570(param_1, 2, "no such index");
return
uVar4;
}


undefined8 FUN_14014b760(longlong
param_1)

{
longlong lVar1;
float *pfVar2;
float *pfVar3;
undefined (*pauVar4)[16];
float fVar5;
float fVar6;
float fVar7;
float fVar8;
undefined8 local_28;
undefined4 local_20;

pfVar2 = (float *) FUN_140056ab0(param_1, 1, "Quaternion");
pfVar3 = (float *) FUN_140056ab0(param_1, 2, "Quaternion");
fVar5 = *pfVar3 + *pfVar2;
fVar6 = pfVar3[1] + pfVar2[1];
fVar7 = pfVar3[2] + pfVar2[2];
fVar8 = pfVar3[3] + pfVar2[3];
pauVar4 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar4 = CONCAT412(fVar8, CONCAT48(fVar7, CONCAT44(fVar6, fVar5)));
lVar1 = *(longlong * )(param_1 + 0x20);
local_28 = FUN_140062650(param_1, "Quaternion", 10);
local_20 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


undefined8 FUN_14014b820(longlong
param_1)

{
longlong lVar1;
float *pfVar2;
float *pfVar3;
undefined (*pauVar4)[16];
float fVar5;
float fVar6;
float fVar7;
float fVar8;
undefined8 local_28;
undefined4 local_20;

pfVar2 = (float *) FUN_140056ab0(param_1, 1, "Quaternion");
pfVar3 = (float *) FUN_140056ab0(param_1, 2, "Quaternion");
fVar5 = *pfVar2 - *pfVar3;
fVar6 = pfVar2[1] - pfVar3[1];
fVar7 = pfVar2[2] - pfVar3[2];
fVar8 = pfVar2[3] - pfVar3[3];
pauVar4 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar4 = CONCAT412(fVar8, CONCAT48(fVar7, CONCAT44(fVar6, fVar5)));
lVar1 = *(longlong * )(param_1 + 0x20);
local_28 = FUN_140062650(param_1, "Quaternion", 10);
local_20 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


undefined8 FUN_14014b8e0(longlong
param_1)

{
float fVar1;
float fVar2;
float fVar3;
float fVar4;
longlong lVar5;
double dVar6;
int iVar7;
float *pfVar8;
longlong *plVar9;
float *pfVar10;
undefined (*pauVar11)[16];
longlong *plVar12;
float fVar13;
float fVar14;
float fVar15;
float fVar16;
float fVar17;
float fVar18;
float fVar19;
undefined local_res10[24];
undefined8 local_88;
undefined4 local_80;

pfVar8 = (float *) FUN_140056ab0(param_1, 1, "Quaternion");
plVar9 = (longlong * )(*(longlong * )(param_1 + 0x18) + 0x10);
plVar12 = &DAT_140a12138;
if (plVar9 < *(longlong **)(param_1 + 0x10)) {
plVar12 = plVar9;
}
if (*(int *)(plVar12 + 1) == 3) {
LAB_14014bafd:
dVar6 = (double) FUN_140056c40(param_1, 2);
fVar19 = (float) dVar6;
fVar15 = *pfVar8 * fVar19;
fVar16 = pfVar8[1] * fVar19;
fVar17 = pfVar8[2] * fVar19;
fVar19 = pfVar8[3] * fVar19;
pauVar11 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar11 = CONCAT412(fVar19, CONCAT48(fVar17, CONCAT44(fVar16, fVar15)));
lVar5 = *(longlong * )(param_1 + 0x20);
local_88 = FUN_140062650(param_1, "Quaternion", 10);
local_80 = 4;
FUN_14005e8e0(param_1, lVar5
+ 0xa0,&local_88,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
}
else {
if (*(int *)(plVar12 + 1) == 4) {
iVar7 = FUN_14005ac80(*plVar12 + 0x20, local_res10);
if (iVar7 != 0) goto
LAB_14014bafd;
}
pfVar10 = (float *) FUN_140056ab0(param_1, 1, "Quaternion");
fVar19 = pfVar8[3];
fVar15 = *pfVar8;
fVar16 = *pfVar10;
fVar17 = pfVar10[3];
fVar1 = pfVar8[2];
fVar2 = pfVar10[1];
fVar3 = pfVar8[1];
fVar4 = pfVar10[2];
fVar18 = (fVar16 * fVar19 + fVar15 * fVar17 + fVar1 * fVar2) - fVar3 * fVar4;
fVar14 = (fVar3 * fVar17 - fVar1 * fVar16) + fVar2 * fVar19 + fVar4 * fVar15;
fVar13 = ((fVar3 * fVar16 + fVar1 * fVar17) - fVar2 * fVar15) + fVar4 * fVar19;
fVar19 = ((fVar19 * fVar17 - fVar16 * fVar15) - fVar3 * fVar2) - fVar4 * fVar1;
pauVar11 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar11 = CONCAT412(fVar19, CONCAT48(fVar13, CONCAT44(fVar14, fVar18)));
lVar5 = *(longlong * )(param_1 + 0x20);
local_88 = FUN_140062650(param_1, "Quaternion", 10);
local_80 = 4;
FUN_14005e8e0(param_1, lVar5
+ 0xa0,&local_88,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
}
return 1;
}


undefined8 FUN_14014bba0(longlong
param_1)

{
longlong lVar1;
float *pfVar2;
undefined (*pauVar3)[16];
double dVar4;
float fVar5;
float fVar6;
float fVar7;
float fVar8;
undefined8 local_28;
undefined4 local_20;

pfVar2 = (float *) FUN_140056ab0(param_1, 1, "Quaternion");
dVar4 = (double) FUN_140056c40(param_1, 2);
fVar5 = (float) dVar4;
fVar6 = *pfVar2 * fVar5;
fVar7 = pfVar2[1] * fVar5;
fVar8 = pfVar2[2] * fVar5;
fVar5 = pfVar2[3] * fVar5;
pauVar3 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar3 = CONCAT412(fVar5, CONCAT48(fVar8, CONCAT44(fVar7, fVar6)));
lVar1 = *(longlong * )(param_1 + 0x20);
local_28 = FUN_140062650(param_1, "Quaternion", 10);
local_20 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


undefined8 FUN_14014bc60(longlong
param_1)

{
uint *puVar1;
byte bVar2;
int iVar3;
float *pfVar4;
float *pfVar5;

pfVar4 = (float *) FUN_140056ab0(param_1, 1, "Quaternion");
iVar3 = FUN_14014ae00(param_1, 2);
if (iVar3 != 0) {
pfVar5 = (float *) FUN_140056ab0(param_1, 2, "Quaternion");
iVar3 = movmskps((int) pfVar5,
                 CONCAT412(-(uint)(pfVar5[3] != pfVar4[3]),
                           CONCAT48(-(uint)(pfVar5[2] != pfVar4[2]),
                                    CONCAT44(-(uint)(pfVar5[1] != pfVar4[1]),
                                             -(uint)(*pfVar5 != *pfVar4)))));
bVar2 = 1;
if (iVar3 == 0) goto
LAB_14014bcbe;
}
bVar2 = 0;
LAB_14014bcbe:
puVar1 = *(uint * *)(param_1 + 0x10);
puVar1[2] = 1;
*
puVar1 = (uint)
bVar2;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
return 1;
}


undefined8 FUN_14014bcf0(longlong
param_1)

{
longlong lVar1;
float *pfVar2;
undefined (*pauVar3)[16];
float fVar4;
float fVar5;
float fVar6;
float fVar7;
undefined8 local_28;
undefined4 local_20;

pfVar2 = (float *) FUN_140056ab0(param_1, 1, "Quaternion");
fVar4 = 0.0 - *pfVar2;
fVar5 = 0.0 - pfVar2[1];
fVar6 = 0.0 - pfVar2[2];
fVar7 = 0.0 - pfVar2[3];
pauVar3 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar3 = CONCAT412(fVar7, CONCAT48(fVar6, CONCAT44(fVar5, fVar4)));
lVar1 = *(longlong * )(param_1 + 0x20);
local_28 = FUN_140062650(param_1, "Quaternion", 10);
local_20 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14014c250(longlong
param_1)

{
longlong lVar1;
double dVar2;
undefined4 *puVar3;
float fVar4;
float fVar5;
float fVar6;
float fVar7;
float fVar8;
undefined8 local_c8;
undefined4 uStack192;
undefined4 uStack188;
float local_b8;
float local_b4;
uint local_b0;
undefined4 local_ac;
float local_a8;
float local_a4;
float local_a0;
undefined4 local_9c;
float local_98;
uint local_94;
float local_90;
undefined4 local_8c;
undefined4 local_88;
undefined4 uStack132;
undefined4 uStack128;
undefined4 uStack124;

dVar2 = (double) FUN_140056c40(param_1, 1);
fVar6 = (float) dVar2;
dVar2 = (double) FUN_140056c40(param_1, 2);
fVar7 = (float) dVar2;
dVar2 = (double) FUN_140056c40(param_1, 3);
fVar8 = (float) dVar2;
fVar4 = (float) FUN_1408fe3d0(fVar6);
fVar6 = (float) FUN_1408fc950(fVar6);
fVar5 = (float) FUN_1408fe3d0(fVar7);
fVar7 = (float) FUN_1408fc950(fVar7);
local_b4 = (float) FUN_1408fe3d0(fVar8);
fVar8 = (float) FUN_1408fc950(fVar8);
local_ac = 0;
local_9c = 0;
local_8c = 0;
local_b8 = fVar8 * fVar7;
local_b0 = (uint)(fVar8 * fVar5) ^ 0x80000000;
local_a8 = fVar5 * fVar4 - local_b4 * fVar7 * fVar6;
local_a4 = fVar8 * fVar6;
local_94 = (uint)(fVar8 * fVar4) ^ 0x80000000;
local_a0 = fVar7 * fVar4 + local_b4 * fVar5 * fVar6;
local_98 = local_b4 * fVar7 * fVar4 + fVar5 * fVar6;
local_90 = fVar7 * fVar6 - local_b4 * fVar5 * fVar4;
local_88 = _DAT_140c78440;
uStack132 = uRam0000000140c78444;
uStack128 = uRam0000000140c78448;
uStack124 = uRam0000000140c7844c;
FUN_1401b1d60(&local_c8, &local_b8
);
puVar3 = (undefined4 * )
FUN_140059170(param_1,
0x10);
*
puVar3 = (undefined4)
local_c8;
puVar3[1] = local_c8.
_4_4_;
puVar3[2] =
uStack192;
puVar3[3] =
uStack188;
lVar1 = *(longlong * )(param_1 + 0x20);
local_c8 = FUN_140062650(param_1, "Quaternion", 10);
uStack192 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_c8,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14014c4a0(longlong
param_1)

{
longlong lVar1;
double dVar2;
undefined4 *puVar3;
float fVar4;
float fVar5;
float fVar6;
float fVar7;
float fVar8;
undefined8 local_c8;
undefined4 uStack192;
undefined4 uStack188;
float local_b8;
float local_b4;
uint local_b0;
undefined4 local_ac;
uint local_a8;
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

dVar2 = (double) FUN_140056c40(param_1, 1);
fVar6 = (float) dVar2;
dVar2 = (double) FUN_140056c40(param_1, 2);
fVar7 = (float) dVar2;
dVar2 = (double) FUN_140056c40(param_1, 3);
fVar8 = (float) dVar2;
local_a0 = (float) FUN_1408fe3d0(fVar6);
fVar6 = (float) FUN_1408fc950(fVar6);
fVar4 = (float) FUN_1408fe3d0(fVar7);
fVar7 = (float) FUN_1408fc950(fVar7);
fVar5 = (float) FUN_1408fe3d0(fVar8);
fVar8 = (float) FUN_1408fc950(fVar8);
local_ac = 0;
local_9c = 0;
local_8c = 0;
local_b8 = fVar8 * fVar7 - fVar5 * local_a0 * fVar4;
local_b0 = (uint)(fVar4 * fVar6) ^ 0x80000000;
local_90 = fVar7 * fVar6;
local_b4 = fVar8 * local_a0 * fVar4 + fVar5 * fVar7;
local_a4 = fVar8 * fVar6;
local_98 = fVar8 * fVar4 + fVar5 * local_a0 * fVar7;
local_94 = fVar5 * fVar4 - fVar8 * local_a0 * fVar7;
local_a8 = (uint)(fVar5 * fVar6) ^ 0x80000000;
local_88 = _DAT_140c78440;
uStack132 = uRam0000000140c78444;
uStack128 = uRam0000000140c78448;
uStack124 = uRam0000000140c7844c;
FUN_1401b1d60(&local_c8, &local_b8
);
puVar3 = (undefined4 * )
FUN_140059170(param_1,
0x10);
*
puVar3 = (undefined4)
local_c8;
puVar3[1] = local_c8.
_4_4_;
puVar3[2] =
uStack192;
puVar3[3] =
uStack188;
lVar1 = *(longlong * )(param_1 + 0x20);
local_c8 = FUN_140062650(param_1, "Quaternion", 10);
uStack192 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_c8,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14014c920(longlong
param_1)

{
longlong lVar1;
double dVar2;
undefined4 *puVar3;
float fVar4;
float fVar5;
float fVar6;
float fVar7;
undefined8 local_b8;
undefined4 uStack176;
undefined4 uStack172;
float local_a8;
float local_a4;
float local_a0;
undefined4 local_9c;
float local_98;
float local_94;
float local_90;
undefined4 local_8c;
float local_88;
uint local_84;
float local_80;
undefined4 local_7c;
undefined4 local_78;
undefined4 uStack116;
undefined4 uStack112;
undefined4 uStack108;

dVar2 = (double) FUN_140056c40(param_1, 1);
fVar5 = (float) dVar2;
dVar2 = (double) FUN_140056c40(param_1, 2);
fVar6 = (float) dVar2;
dVar2 = (double) FUN_140056c40(param_1, 3);
fVar7 = (float) dVar2;
fVar4 = (float) FUN_1408fe3d0(fVar5);
fVar5 = (float) FUN_1408fc950(fVar5);
local_88 = (float) FUN_1408fe3d0(fVar6);
local_80 = (float) FUN_1408fc950(fVar6);
fVar6 = (float) FUN_1408fe3d0(fVar7);
local_94 = (float) FUN_1408fc950(fVar7);
local_9c = 0;
local_8c = 0;
local_7c = 0;
local_84 = (uint)
fVar4 ^ 0x80000000;
local_a8 = local_88 * fVar4 * fVar6 + local_94 * local_80;
local_a0 = local_80 * fVar4 * fVar6 - local_94 * local_88;
local_a4 = fVar6 * fVar5;
local_98 = local_88 * fVar4 * local_94 - fVar6 * local_80;
local_90 = local_80 * fVar4 * local_94 + fVar6 * local_88;
local_94 = local_94 * fVar5;
local_88 = local_88 * fVar5;
local_80 = local_80 * fVar5;
local_78 = _DAT_140c78440;
uStack116 = uRam0000000140c78444;
uStack112 = uRam0000000140c78448;
uStack108 = uRam0000000140c7844c;
FUN_1401b1d60(&local_b8, &local_a8
);
puVar3 = (undefined4 * )
FUN_140059170(param_1,
0x10);
*
puVar3 = (undefined4)
local_b8;
puVar3[1] = local_b8.
_4_4_;
puVar3[2] =
uStack176;
puVar3[3] =
uStack172;
lVar1 = *(longlong * )(param_1 + 0x20);
local_b8 = FUN_140062650(param_1, "Quaternion", 10);
uStack176 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_b8,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14014cb50(longlong
param_1)

{
longlong lVar1;
double dVar2;
undefined4 *puVar3;
float fVar4;
float fVar5;
float fVar6;
float fVar7;
undefined8 local_c8;
undefined4 uStack192;
undefined4 uStack188;
float local_b8;
float local_b4;
float local_b0;
undefined4 local_ac;
uint local_a8;
float local_a4;
float local_a0;
undefined4 local_9c;
float local_98;
uint local_94;
float local_90;
undefined4 local_8c;
undefined4 local_88;
undefined4 uStack132;
undefined4 uStack128;
undefined4 uStack124;

dVar2 = (double) FUN_140056c40(param_1, 1);
fVar5 = (float) dVar2;
dVar2 = (double) FUN_140056c40(param_1, 2);
fVar6 = (float) dVar2;
dVar2 = (double) FUN_140056c40(param_1, 3);
fVar7 = (float) dVar2;
fVar4 = (float) FUN_1408fe3d0(fVar5);
local_90 = (float) FUN_1408fc950(fVar5);
local_98 = (float) FUN_1408fe3d0(fVar6);
fVar5 = (float) FUN_1408fc950(fVar6);
fVar6 = (float) FUN_1408fe3d0(fVar7);
fVar7 = (float) FUN_1408fc950(fVar7);
local_ac = 0;
local_9c = 0;
local_b8 = fVar7 * fVar5;
local_b0 = fVar6 * fVar4 - local_98 * local_90 * fVar7;
local_a4 = fVar7 * local_90 - local_98 * fVar4 * fVar6;
local_b4 = local_98 * fVar4 * fVar7 + fVar6 * local_90;
local_a0 = local_98 * local_90 * fVar6 + fVar7 * fVar4;
local_a8 = (uint)(fVar6 * fVar5) ^ 0x80000000;
local_90 = fVar5 * local_90;
local_94 = (uint)(fVar5 * fVar4) ^ 0x80000000;
local_88 = _DAT_140c78440;
uStack132 = uRam0000000140c78444;
uStack128 = uRam0000000140c78448;
uStack124 = uRam0000000140c7844c;
local_8c = 0;
FUN_1401b1d60(&local_c8, &local_b8
);
puVar3 = (undefined4 * )
FUN_140059170(param_1,
0x10);
*
puVar3 = (undefined4)
local_c8;
puVar3[1] = local_c8.
_4_4_;
puVar3[2] =
uStack192;
puVar3[3] =
uStack188;
lVar1 = *(longlong * )(param_1 + 0x20);
local_c8 = FUN_140062650(param_1, "Quaternion", 10);
uStack192 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_c8,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_14014cf00(longlong
param_1)

{
longlong lVar1;
double dVar2;
float *pfVar3;
float fVar4;
float fVar5;
float fVar6;
float fVar7;
float fVar8;
float fVar9;
undefined8 local_88;
float fStack128;
float fStack124;

dVar2 = (double) FUN_140056c40(param_1, 1);
fVar9 = (float) dVar2;
dVar2 = (double) FUN_140056c40(param_1, 2);
fVar8 = (float) dVar2;
dVar2 = (double) FUN_140056c40(param_1, 3);
fVar7 = 0.5;
fVar6 = (float) dVar2 * 0.5;
fVar4 = (float) FUN_1408fe3d0(fVar6);
fVar6 = (float) FUN_1408fc950(fVar6);
fVar8 = fVar8 * fVar7;
fVar5 = (float) FUN_1408fe3d0(fVar8);
fVar8 = (float) FUN_1408fc950(fVar8);
fVar9 = fVar9 * fVar7;
fVar7 = (float) FUN_1408fe3d0(fVar9);
fVar9 = (float) FUN_1408fc950(fVar9);
local_88.
_0_4_ = fVar9 * fVar5 * fVar6 + fVar7 * fVar8 * fVar4;
fStack128 = fVar9 * fVar8 * fVar4 - fVar7 * fVar5 * fVar6;
local_88.
_4_4_ = fVar7 * fVar8 * fVar6 - fVar9 * fVar5 * fVar4;
fStack124 = fVar7 * fVar5 * fVar4 + fVar9 * fVar8 * fVar6;
pfVar3 = (float *) FUN_140059170(param_1, 0x10);
*
pfVar3 = (float) local_88;
pfVar3[1] = local_88.
_4_4_;
pfVar3[2] =
fStack128;
pfVar3[3] =
fStack124;
lVar1 = *(longlong * )(param_1 + 0x20);
local_88 = FUN_140062650(param_1, "Quaternion", 10);
fStack128 = 5.605194e-45;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_88,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


undefined8 FUN_14014d0f0(longlong
param_1)

{
longlong lVar1;
double dVar2;
float *pfVar3;
float *pfVar4;
undefined (*pauVar5)[16];
float fVar6;
float fVar7;
float fVar8;
float fVar9;
undefined8 local_28;
undefined4 local_20;

pfVar3 = (float *) FUN_140056ab0(param_1, 1, "Quaternion");
pfVar4 = (float *) FUN_140056ab0(param_1, 2, "Quaternion");
dVar2 = (double) FUN_140056c40(param_1, 3);
fVar6 = (float) dVar2;
fVar7 = (*pfVar4 - *pfVar3) * fVar6 + *pfVar3;
fVar8 = (pfVar4[1] - pfVar3[1]) * fVar6 + pfVar3[1];
fVar9 = (pfVar4[2] - pfVar3[2]) * fVar6 + pfVar3[2];
fVar6 = (pfVar4[3] - pfVar3[3]) * fVar6 + pfVar3[3];
pauVar5 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar5 = CONCAT412(fVar6, CONCAT48(fVar9, CONCAT44(fVar8, fVar7)));
lVar1 = *(longlong * )(param_1 + 0x20);
local_28 = FUN_140062650(param_1, "Quaternion", 10);
local_20 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


undefined8 FUN_14014d1e0(longlong
param_1)

{
longlong lVar1;
double dVar2;
undefined8 *puVar3;
undefined4 *puVar4;
undefined8 uVar5;
undefined8 uVar6;
undefined (*pauVar7)[16];
float fVar8;
undefined8 local_78;
undefined4 uStack112;
undefined4 uStack108;
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

puVar3 = (undefined8 * )
FUN_140056ab0(param_1,
1,"Quaternion");
local_78 = *puVar3;
uStack112 = *(undefined4 * )(puVar3 + 1);
uStack108 = *(undefined4 * )((longlong)
puVar3 + 0xc);
puVar4 = (undefined4 * )
FUN_140056ab0(param_1,
2,"Quaternion");
local_58 = *puVar4;
uStack84 = puVar4[1];
uStack80 = puVar4[2];
uStack76 = puVar4[3];
puVar4 = (undefined4 * )
FUN_140056ab0(param_1,
3,"Quaternion");
local_68 = *puVar4;
uStack100 = puVar4[1];
uStack96 = puVar4[2];
uStack92 = puVar4[3];
dVar2 = (double) FUN_140056c40(param_1, 4);
fVar8 = (float) dVar2;
dVar2 = (double) FUN_140056c40();
fVar8 = (float) dVar2 + fVar8;
if ((int)fVar8 < 0) {
fVar8 = (float) (0x80000000 - (int) fVar8);
}
if (0x54 < (int)(((uint)fVar8 ^ (int)fVar8 >> 0x1f) - ((int)fVar8 >> 0x1f))) {
uVar5 = FUN_1401b1ee0(&local_48, &local_78, &local_68);
uVar6 = FUN_1401b1ee0(&local_68, &local_78, &local_58, uVar5);
puVar4 = (undefined4 * )
FUN_1401b1ee0(&local_58, uVar6, uVar5
);
local_48 = *puVar4;
uStack68 = puVar4[1];
uStack64 = puVar4[2];
uStack60 = puVar4[3];
}
pauVar7 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar7 = CONCAT412(uStack60, CONCAT48(uStack64, CONCAT44(uStack68, local_48)));
lVar1 = *(longlong * )(param_1 + 0x20);
local_78 = FUN_140062650(param_1, "Quaternion", 10);
uStack112 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_78,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14014d3a0(longlong
param_1)

{
longlong lVar1;
undefined (*pauVar2)[16];
undefined4 uVar3;
undefined4 uVar4;
undefined4 uVar5;
undefined4 uVar6;
undefined8 local_28;
undefined4 local_20;

uVar3 = _DAT_140c78450;
uVar4 = uRam0000000140c78454;
uVar5 = uRam0000000140c78458;
uVar6 = uRam0000000140c7845c;
pauVar2 = (undefined(*)[16])
FUN_140059170(param_1,
0x10);
*
pauVar2 = CONCAT412(uVar6, CONCAT48(uVar5, CONCAT44(uVar4, uVar3)));
lVar1 = *(longlong * )(param_1 + 0x20);
local_28 = FUN_140062650(param_1, "Quaternion", 10);
local_20 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


void FUN_14014d460(undefined8
param_1,
undefined8 param_2, undefined4
param_3,
longlong *param_4
)

{
undefined4 *puVar1;
undefined4 uVar2;
undefined4 uVar3;
undefined4 uVar4;
undefined4 *puVar5;

*
param_4 = *param_4 + 8;
puVar1 = *(undefined4 * *)(*param_4 + -8);
puVar5 = (undefined4 * )
FUN_140056ab0(param_2, param_3,
"Quaternion");
uVar2 = puVar5[1];
uVar3 = puVar5[2];
uVar4 = puVar5[3];
*
puVar1 = *puVar5;
puVar1[1] =
uVar2;
puVar1[2] =
uVar3;
puVar1[3] =
uVar4;
return;
}


undefined8 FUN_14014d4a0(longlong
param_1)

{
undefined8 *puVar1;
longlong *plVar2;
longlong lVar3;
undefined8 uVar4;
undefined **ppuVar5;
undefined *puVar6;
undefined8 local_18;
undefined4 local_10;

FUN_1400569b0(param_1,
"EulerAngles");
puVar1 = *(undefined8 * *)(param_1 + 0x10);
*
puVar1 = puVar1[-2];
*(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar1 + -1);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
lVar3 = *(longlong * )(param_1 + 0x10);
local_18 = FUN_140062650(param_1, "__index", 7);
local_10 = 4;
FUN_14005ea50(param_1, lVar3
+ -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
lVar3 = *(longlong * )(param_1 + 0x10);
ppuVar5 = &PTR_s_ToQuaternion_140c57830;
puVar6 = PTR_s_ToQuaternion_140c57830;
while (puVar6 != (undefined *)0x0) {
puVar6 = ppuVar5[1];
if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
FUN_14005e2c0(param_1);
}
lVar3 = FUN_140060ab0(param_1, 0);
*(undefined **)(lVar3 + 0x20) =
puVar6;
plVar2 = *(longlong * *)(param_1 + 0x10);
*
plVar2 = lVar3;
*(undefined4 *)(plVar2 + 1) = 6;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
puVar6 = *ppuVar5;
uVar4 = FUN_1400580e0(param_1, 0xfffffffe);
lVar3 = -1;
do {
lVar3 = lVar3 + 1;
} while (puVar6[lVar3] != '\0');
local_18 = FUN_140062650(param_1, puVar6);
local_10 = 4;
FUN_14005ea50(param_1, uVar4, &local_18, *(longlong
*)(param_1 + 0x10) + -0x10);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
lVar3 = *(longlong * )(param_1 + 0x10);
ppuVar5 = ppuVar5 + 2;
puVar6 = *ppuVar5;
}
*(longlong *)(param_1 + 0x10) = lVar3 + -0x10;
FUN_140057020(param_1,
"EulerAngles",&PTR_DAT_140b5c2e0);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
return 0;
}


undefined8 FUN_14014d640(longlong
param_1,
undefined4 *param_2
)

{
longlong lVar1;
undefined4 *puVar2;
undefined8 local_18;
undefined4 local_10;

puVar2 = (undefined4 * )

FUN_140059170();

*
puVar2 = *param_2;
puVar2[1] = param_2[1];
puVar2[2] = param_2[2];
lVar1 = *(longlong * )(param_1 + 0x20);
local_18 = FUN_140062650(param_1, "EulerAngles", 0xb);
local_10 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


ulonglong FUN_14014d6d0(longlong
param_1)

{
undefined8 *puVar1;
undefined8 *puVar2;
int iVar3;
longlong *plVar4;
longlong lVar5;
ulonglong uVar6;
undefined8 local_18;
undefined4 local_10;

plVar4 = (longlong * )
FUN_1400580e0(param_1,
1);
if (*(int *)(plVar4 + 1) == 2) {
lVar5 = *plVar4;
}
else {
if (*(int *)(plVar4 + 1) != 7) {
return 0;
}
lVar5 = *plVar4 + 0x30;
}
if (lVar5 != 0) {
plVar4 = (longlong * )
FUN_1400580e0(param_1,
1);
iVar3 = *(int *) (plVar4 + 1);
if ((iVar3 == 5) || (iVar3 == 7)) {
lVar5 = *(longlong * )(*plVar4 + 0x10);
}
else {
lVar5 = *(longlong * )(*(longlong * )(param_1 + 0x20) + 0xe0 + (longlong)
iVar3 * 8);
}
if (lVar5 != 0) {
plVar4 = *(longlong * *)(param_1 + 0x10);
*
plVar4 = lVar5;
*(undefined4 *)(plVar4 + 1) = 5;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
lVar5 = *(longlong * )(param_1 + 0x20);
local_18 = FUN_140062650(param_1, "EulerAngles", 0xb);
local_10 = 4;
FUN_14005e8e0(param_1, lVar5
+ 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
uVar6 = 0;
puVar1 = (undefined8 * )(*(longlong * )(param_1 + 0x10) + -0x10);
puVar2 = (undefined8 * )(*(longlong * )(param_1 + 0x10) + -0x20);
if ((puVar1 == &DAT_140a12138) || (puVar2 == &DAT_140a12138)) {
iVar3 = 0;
}
else {
iVar3 = FUN_14005ac20(puVar1, puVar2);
}
*(undefined8 **)(param_1 + 0x10) =
puVar2;
return uVar6 & 0xffffff00 | (ulonglong)(iVar3 != 0);
}
}
return 0;
}


undefined8 FUN_14014d7f0(longlong
param_1)

{
uint *puVar1;
int iVar2;

iVar2 = FUN_14014d6d0();
puVar1 = *(uint * *)(param_1 + 0x10);
puVar1[2] = 1;
*
puVar1 = (uint)(iVar2 != 0);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_14014d830(longlong
param_1)

{
longlong lVar1;
float *pfVar2;
float fVar3;
float fVar4;
float fVar5;
float fVar6;
float fVar7;
float fVar8;
undefined8 local_78;
float fStack112;
float fStack108;

pfVar2 = (float *) FUN_140056ab0(param_1, 1, "EulerAngles");
fVar8 = 0.5;
fVar6 = pfVar2[2] * 0.5;
fVar3 = (float) FUN_1408fe3d0(fVar6);
fVar6 = (float) FUN_1408fc950(fVar6);
fVar7 = pfVar2[1] * fVar8;
fVar4 = (float) FUN_1408fe3d0(fVar7);
fVar7 = (float) FUN_1408fc950(fVar7);
fVar8 = *pfVar2 * fVar8;
fVar5 = (float) FUN_1408fe3d0(fVar8);
fVar8 = (float) FUN_1408fc950(fVar8);
local_78.
_0_4_ = fVar8 * fVar4 * fVar6 + fVar5 * fVar7 * fVar3;
fStack112 = fVar8 * fVar7 * fVar3 - fVar5 * fVar4 * fVar6;
local_78.
_4_4_ = fVar5 * fVar7 * fVar6 - fVar8 * fVar4 * fVar3;
fStack108 = fVar5 * fVar4 * fVar3 + fVar8 * fVar7 * fVar6;
pfVar2 = (float *) FUN_140059170(param_1, 0x10);
*
pfVar2 = (float) local_78;
pfVar2[1] = local_78.
_4_4_;
pfVar2[2] =
fStack112;
pfVar2[3] =
fStack108;
lVar1 = *(longlong * )(param_1 + 0x20);
local_78 = FUN_140062650(param_1, "Quaternion", 10);
fStack112 = 5.605194e-45;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_78,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


undefined8 FUN_14014d9f0(undefined8
param_1)

{
float *pfVar1;

pfVar1 = (float *) FUN_140056ab0(param_1, 1, "EulerAngles");
FUN_140058780(param_1,
"EulerAngles(%f, %f, %f)",(double)*pfVar1,(double)pfVar1[1],
(double)pfVar1[2]);
return 1;
}


undefined8 FUN_14014da50(longlong
param_1)

{
longlong lVar1;
byte *pbVar2;
longlong lVar3;
undefined8 *puVar4;
double *pdVar5;
float *pfVar6;
char *pcVar7;
undefined8 *puVar8;
undefined8 *puVar9;
char *pcVar10;
byte *pbVar11;
uint uVar12;
char cVar13;
undefined8 local_18;
undefined4 local_10;

pfVar6 = (float *) FUN_140056ab0(param_1, 1);
pcVar7 = (char *) FUN_140056bb0(param_1, 2);
uVar12 = (uint) * pcVar7;
if (uVar12 == 0x79) {
pcVar10 = "yaw";
cVar13 = 'y';
do {
if (cVar13 == '\0') {
pdVar5 = *(double **) (param_1 + 0x10);
*
pdVar5 = (double) *pfVar6;
*(undefined4 *)(pdVar5 + 1) = 3;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
return 1;
}
cVar13 = (pcVar7 + -0x1409da873)
[(longlong)pcVar10];
pcVar10 = pcVar10 + 1;
} while (cVar13 == *pcVar10);
}
if (uVar12 == 0x70) {
pcVar10 = "pitch";
cVar13 = 'p';
do {
if (cVar13 == '\0') {
pdVar5 = *(double **) (param_1 + 0x10);
*
pdVar5 = (double) pfVar6[1];
*(undefined4 *)(pdVar5 + 1) = 3;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
return 1;
}
cVar13 = (pcVar7 + -0x1409dae33)
[(longlong)pcVar10];
pcVar10 = pcVar10 + 1;
} while (cVar13 == *pcVar10);
}
if (uVar12 == 0x72) {
pbVar11 = &DAT_140a2d748;
do {
if ((char)uVar12 == '\0') {
pdVar5 = *(double **) (param_1 + 0x10);
*
pdVar5 = (double) pfVar6[2];
*(undefined4 *)(pdVar5 + 1) = 3;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
return 1;
}
pbVar2 = (byte * )(pcVar7 + -0x140a2d747 + (longlong)
pbVar11);
uVar12 = (uint) * pbVar2;
pbVar11 = pbVar11 + 1;
} while (*pbVar2 == *pbVar11);
}
lVar3 = *(longlong * )(param_1 + 0x20);
local_18 = FUN_140062650(param_1, "EulerAngles", 0xb);
local_10 = 4;
FUN_14005e8e0(param_1, lVar3
+ 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
puVar4 = *(undefined8 * *)(param_1 + 0x10);
lVar3 = *(longlong * )(param_1 + 0x18);
puVar8 = (undefined8 * )(lVar3 + 0x10);
puVar9 = &DAT_140a12138;
if (puVar8<puVar4) {
puVar9 = puVar8;
}
*
puVar4 = *puVar9;
*(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar9 + 1);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
lVar1 = *(longlong * )(param_1 + 0x10) + -0x10;
FUN_14005e8e0(param_1, *(longlong
*)(param_1 + 0x10) + -0x20,lVar1,lVar1);
FUN_140058350(param_1, (longlong)
puVar4 - lVar3 >> 4 & 0xffffffff);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
return 1;
}


undefined8 FUN_14014dc40(undefined8
param_1)

{
byte *pbVar1;
float *pfVar2;
char *pcVar3;
undefined8 uVar4;
char *pcVar5;
byte *pbVar6;
uint uVar7;
char cVar8;
double dVar9;

pfVar2 = (float *) FUN_140056ab0(param_1, 1);
pcVar3 = (char *) FUN_140056bb0(param_1, 2);
uVar7 = (uint) * pcVar3;
if (uVar7 == 0x79) {
pcVar5 = "yaw";
cVar8 = 'y';
do {
if (cVar8 == '\0') {
dVar9 = (double) FUN_140056c40(param_1, 3);
*
pfVar2 = (float) dVar9;
return 0;
}
cVar8 = (pcVar3 + -0x1409da89b)
[(longlong)pcVar5];
pcVar5 = pcVar5 + 1;
} while (cVar8 == *pcVar5);
}
if (uVar7 == 0x70) {
pcVar5 = "pitch";
cVar8 = 'p';
do {
if (cVar8 == '\0') {
dVar9 = (double) FUN_140056c40(param_1, 3);
pfVar2[1] = (float)
dVar9;
return 0;
}
cVar8 = (pcVar3 + -0x1409dadeb)
[(longlong)pcVar5];
pcVar5 = pcVar5 + 1;
} while (cVar8 == *pcVar5);
}
if (uVar7 == 0x72) {
pbVar6 = &DAT_140a2d724;
do {
if ((char)uVar7 == '\0') {
dVar9 = (double) FUN_140056c40(param_1, 3);
pfVar2[2] = (float)
dVar9;
return 0;
}
pbVar1 = (byte * )(pcVar3 + -0x140a2d723 + (longlong)
pbVar6);
uVar7 = (uint) * pbVar1;
pbVar6 = pbVar6 + 1;
} while (*pbVar1 == *pbVar6);
}
uVar4 = FUN_140056570(param_1, 2, "no such index");
return
uVar4;
}


undefined8 FUN_14014ddc0(longlong
param_1)

{
undefined8 *puVar1;
longlong lVar2;
double dVar3;
int iVar4;
undefined8 uVar5;
float *pfVar6;
float fVar7;
float fVar8;
float fVar9;
undefined8 local_48;
undefined4 local_40;

iVar4 = FUN_14014d6d0();
if (iVar4 != 0) {
uVar5 = FUN_140056ab0(param_1, 1, "EulerAngles");
uVar5 = FUN_14014d640(param_1, uVar5);
return
uVar5;
}
puVar1 = *(undefined8 * *)(param_1 + 0x18);
if (((puVar1 < *(undefined8 **)(param_1 + 0x10)) && (puVar1 != &DAT_140a12138)) &&
(*(int *)(puVar1 + 1) == 5)) {
fVar7 = (float) FUN_140144ef0(param_1, "EulerAngles", 1, &DAT_140a2d740, 3);
fVar8 = (float) FUN_140144ef0(param_1, "EulerAngles", 1, "pitch", 2);
fVar9 = (float) FUN_140144ef0(param_1, "EulerAngles", 1, &DAT_1409da8cc, 1);
pfVar6 = (float *) FUN_140059170(param_1, 0xc);
*
pfVar6 = fVar9;
pfVar6[2] =
fVar7;
}
else {
dVar3 = (double) FUN_140056c40(param_1, 1);
fVar9 = (float) dVar3;
dVar3 = (double) FUN_140056c40(param_1, 2);
fVar8 = (float) dVar3;
dVar3 = (double) FUN_140056c40(param_1, 3);
fVar7 = (float) dVar3;
pfVar6 = (float *) FUN_140059170(param_1, 0xc);
*
pfVar6 = fVar9;
pfVar6[2] =
fVar7;
}
pfVar6[1] =
fVar8;
lVar2 = *(longlong * )(param_1 + 0x20);
local_48 = FUN_140062650(param_1, "EulerAngles", 0xb);
local_40 = 4;
FUN_14005e8e0(param_1, lVar2
+ 0xa0,&local_48,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


void FUN_14014dfa0(undefined8
param_1)

{
undefined8 uVar1;
undefined local_18[16];

uVar1 = FUN_140056ab0(param_1, 1, "Quaternion");
uVar1 = FUN_1401b2fe0(local_18, uVar1);
FUN_14014d640(param_1, uVar1
);
return;
}


undefined8 FUN_14014dfe0(longlong
param_1)

{
longlong lVar1;
undefined8 *puVar2;
undefined8 local_18;
undefined4 local_10;

puVar2 = (undefined8 * )
FUN_140059170(param_1,
0xc);
*
puVar2 = 0;
*(undefined4 *)(puVar2 + 1) = 0;
lVar1 = *(longlong * )(param_1 + 0x20);
local_18 = FUN_140062650(param_1, "EulerAngles", 0xb);
local_10 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
return 1;
}


void FUN_14014e090(undefined8
param_1,
undefined8 param_2, undefined4
param_3,
longlong *param_4
)

{
undefined4 *puVar1;
undefined4 *puVar2;

*
param_4 = *param_4 + 8;
puVar1 = *(undefined4 * *)(*param_4 + -8);
puVar2 = (undefined4 * )
FUN_140056ab0(param_2, param_3,
"EulerAngles");
*
puVar1 = *puVar2;
puVar1[1] = puVar2[1];
puVar1[2] = puVar2[2];
return;
}


longlong FUN_14014e0d0(undefined8
param_1,
undefined8 param_2, undefined4
param_3,
longlong param_4,
short *param_5, undefined8
param_6,
undefined4 param_7
)

{
short sVar1;
undefined2 *puVar2;
longlong lVar3;
short *psVar4;
undefined4 in_XMM6_Da;
undefined4 in_XMM6_Db;
undefined4 in_XMM6_Dc;
undefined4 in_XMM6_Dd;

lVar3 = 0;
*(undefined8 *)(param_4 + 8) = 0;
*(undefined8 *)(param_4 + 0x10) = 0;
*(undefined8 *)(param_4 + 0x18) = 0;
puVar2 = (undefined2 *)
        FUN_14018b280(0x10, 0, param_6, param_7,
                      CONCAT412(in_XMM6_Dd, CONCAT48(in_XMM6_Dc, CONCAT44(in_XMM6_Db, in_XMM6_Da))));
*(undefined2 **)(param_4 + 8) =
puVar2;
*(undefined2 **)(param_4 + 0x10) =
puVar2;
*(undefined2 **)(param_4 + 0x18) = puVar2 + 8;
if (puVar2 != (undefined2 *)0x0) {
*
puVar2 = 0;
}
psVar4 = (short *) &DAT_1409dabec;
if (param_5 != (short *)0x0) {
psVar4 = param_5;
}
sVar1 = *psVar4;
while (sVar1 != 0) {
lVar3 = lVar3 + 1;
sVar1 = psVar4[lVar3];
}
FUN_14001c480(param_4, psVar4, psVar4
+ lVar3);
*(undefined4 *)(param_4 + 0x24) =
param_7;
*(undefined4 *)(param_4 + 0x20) =
param_3;
*(undefined8 *)(param_4 + 0x28) = 0;
*(undefined4 *)(param_4 + 0x30) = 4;
return
param_4;
}


void FUN_14014e190(longlong
param_1,
longlong *param_2, undefined4
param_3)

{
longlong *plVar1;

plVar1 = *(longlong * *)(param_1 + 0x28);
if (plVar1 != param_2) {
if (plVar1 != (longlong *)0x0) {
(**(code **)(*plVar1 + 8))();
*(undefined8 *)(param_1 + 0x28) = 0;
}
*(longlong **)(param_1 + 0x28) =
param_2;
if (param_2 != (longlong *)0x0) {
(**(code **)*param_2)(param_2);
}
*(undefined4 *)(param_1 + 0x30) =
param_3;
return;
}
*(undefined4 *)(param_1 + 0x30) =
param_3;
return;
}


void FUN_14014e200(longlong
param_1)

{
int iVar1;

if ((*(longlong *)(param_1 + 0x28) != 0) &&
((*(byte *)(*(longlong *)(param_1 + 0x28) + 0x1c) & 1) != 0)) {
FUN_1400cb3d0();

iVar1 = *(int *) (param_1 + 0x30);
if (iVar1 == 0) {
return;
}
if (iVar1 == 1) {
return;
}
if (iVar1 == 2) {
return;
}
if (iVar1 == 3) {
return;
}
}
return;
}


void FUN_14014e2b0(longlong
param_1)

{
longlong lVar1;
longlong lVar2;
longlong lVar3;

lVar3 = *(longlong * )(*(longlong * )(param_1 + 0x10) + 0x10);
if (lVar3 != *(longlong *)(param_1 + 0x10)) {
do {
lVar2 = *(longlong * )(lVar3 + 0x40);
if (lVar2 != 0) {
if (*(longlong **)(lVar2 + 0x28) != (longlong *)0x0) {
(**(code **)(**(longlong **)(lVar2 + 0x28) + 8))();
*(undefined8 *)(lVar2 + 0x28) = 0;
}
if (*(longlong *)(lVar2 + 8) != 0) {
FUN_14018b900(*(longlong
*)(lVar2 + 8),0);
}
FUN_14018b900(lVar2,
0);
}
lVar2 = *(longlong * )(lVar3 + 0x18);
if (lVar2 == 0) {
lVar2 = *(longlong * )(lVar3 + 8);
if (lVar3 == *(longlong *)(lVar2 + 0x18)) {
do {
lVar3 = lVar2;
lVar2 = *(longlong * )(lVar3 + 8);
} while (lVar3 == *(longlong *)(lVar2 + 0x18));
}
if (*(longlong *)(lVar3 + 0x18) != lVar2) {
lVar3 = lVar2;
}
}
else {
for (
lVar1 = *(longlong * )(lVar2 + 0x10);
lVar3 = lVar2, lVar1
!= 0;
lVar1 = *(longlong * )(lVar1 + 0x10)
) {
lVar2 = lVar1;
}
}
} while (lVar3 != *(longlong *)(param_1 + 0x10));
}
if (*(longlong *)(param_1 + 0x18) != 0) {
lVar3 = *(longlong * )(*(longlong * )(param_1 + 0x10) + 8);
while (lVar3 != 0) {
FUN_140044ca0(param_1
+ 8,*(undefined8 *)(lVar3 + 0x18));
lVar2 = *(longlong * )(lVar3 + 0x10);
if (*(longlong *)(lVar3 + 0x28) != 0) {
FUN_14018b900(*(longlong
*)(lVar3 + 0x28),0);
}
FUN_14018b900(lVar3,
0);
lVar3 = lVar2;
}
*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10) = *(longlong *)(param_1 + 0x10);
*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) = *(longlong *)(param_1 + 0x10);
*(undefined8 *)(param_1 + 0x18) = 0;
}
return;
}


longlong FUN_14014e400(undefined8
param_1,
undefined8 param_2, undefined4
param_3,
longlong param_4,
short *param_5_00, undefined8
param_6,
undefined4 param_7,
char param_5
)

{
ulonglong uVar1;
undefined2 *puVar2;
short sVar3;
longlong lVar4;
int iVar5;
longlong lVar6;
longlong *plVar7;
longlong lVar8;
undefined8 extraout_XMM0_Qa;
longlong local_res10;
undefined local_58[8];
longlong local_50;
undefined2 *local_48;
longlong local_40;

if ((param_5_00 != (short *)0x0) && (*param_5_00 != 0)) {
lVar6 = 0;
lVar8 = lVar6;
do {
lVar4 = lVar8 + 1;
lVar8 = lVar8 + 1;
} while (param_5_00[lVar4] != 0);
lVar8 = lVar8 * 2 >> 1;
uVar1 = lVar8 + 1;
if (uVar1 < 0x7fffffffffffffff) {
lVar6 = FUN_14018b280(uVar1 * 2, 0);
}
lVar8 = lVar8 * 2;
FUN_1407db590(lVar6, param_5_00, lVar8
);
puVar2 = (undefined2 * )(lVar8 + lVar6);
if (puVar2 != (undefined2 *)0x0) {
*
puVar2 = 0;
}
lVar8 = *(longlong * )(param_4 + 0x10);
local_res10 = lVar8;
lVar4 = *(longlong * )(lVar8 + 8);
while (lVar4 != 0) {
iVar5 = FUN_1400454d0(*(undefined8 * )(lVar4 + 0x28), *(undefined8 * )(lVar4 + 0x30), lVar6, puVar2
);
if (iVar5 < 0) {
lVar4 = *(longlong * )(lVar4 + 0x18);
}
else {
local_res10 = lVar4;
lVar4 = *(longlong * )(lVar4 + 0x10);
}
}
if ((local_res10 == lVar8) ||
(
iVar5 = FUN_1400454d0(lVar6, puVar2, *(undefined8 * )(local_res10 + 0x28),
                      *(undefined8 * )(local_res10 + 0x30)), iVar5<
0)) {
local_res10 = lVar8;
}
if (lVar6 != 0) {
FUN_14018b900(lVar6,
0);
}
if (local_res10 == *(longlong *)(param_4 + 0x10)) {
lVar8 = FUN_14018b280(0x38);
if (lVar8 == 0) {
lVar8 = 0;
}
else {
lVar8 = FUN_14014e0d0(extraout_XMM0_Qa, param_2, param_3, lVar8, param_5_00);
}
lVar6 = 0;
sVar3 = *param_5_00;
local_50 = 0;
local_40 = 0;
while (sVar3 != 0) {
lVar6 = lVar6 + 1;
sVar3 = param_5_00[lVar6];
}
lVar6 = lVar6 * 2 >> 1;
uVar1 = lVar6 + 1;
if (uVar1 < 0x7fffffffffffffff) {
lVar4 = uVar1 * 2;
local_50 = FUN_14018b280(lVar4, 0);
local_40 = lVar4 + local_50;
}
lVar4 = local_50;
lVar6 = lVar6 * 2;
FUN_1407db590(local_50, param_5_00, lVar6
);
local_48 = (undefined2 * )(lVar6 + lVar4);
if (local_48 != (undefined2 *)0x0) {
*
local_48 = 0;
}
plVar7 = (longlong * )
FUN_1400eda60(param_4
+ 8,local_58);
*
plVar7 = lVar8;
if (lVar4 != 0) {
FUN_14018b900(lVar4,
0);
}
}
else {
lVar8 = *(longlong * )(local_res10 + 0x40);
if (param_5 != '\0') {
*(undefined4 *)(lVar8 + 0x20) =
param_3;
*(undefined4 *)(lVar8 + 0x24) =
param_7;
}
}
return
lVar8;
}
return 0;
}


undefined8 FUN_14014e670(undefined8
param_1,
undefined8 param_2, longlong
*param_3,
short *param_4
)

{
ulonglong uVar1;
undefined2 *puVar2;
short sVar3;
longlong lVar4;
int iVar5;
longlong lVar6;
undefined8 uVar7;
undefined8 *puVar8;
longlong lVar9;
undefined8 extraout_XMM0_Qa;
undefined4 uVar10;
longlong local_res10;
undefined local_58[8];
longlong local_50;
undefined2 *local_48;
longlong local_40;

if ((param_4 != (short *)0x0) && (*param_4 != 0)) {
lVar6 = 0;
lVar9 = lVar6;
do {
lVar4 = lVar9 + 1;
lVar9 = lVar9 + 1;
} while (param_4[lVar4] != 0);
lVar9 = lVar9 * 2 >> 1;
uVar1 = lVar9 + 1;
if (uVar1 < 0x7fffffffffffffff) {
lVar6 = FUN_14018b280(uVar1 * 2, 0);
}
lVar9 = lVar9 * 2;
FUN_1407db590(lVar6, param_4, lVar9
);
puVar2 = (undefined2 * )(lVar9 + lVar6);
if (puVar2 != (undefined2 *)0x0) {
*
puVar2 = 0;
}
lVar9 = param_3[2];
local_res10 = lVar9;
lVar4 = *(longlong * )(lVar9 + 8);
while (lVar4 != 0) {
iVar5 = FUN_1400454d0(*(undefined8 * )(lVar4 + 0x28), *(undefined8 * )(lVar4 + 0x30), lVar6, puVar2
);
if (iVar5 < 0) {
lVar4 = *(longlong * )(lVar4 + 0x18);
}
else {
local_res10 = lVar4;
lVar4 = *(longlong * )(lVar4 + 0x10);
}
}
if ((local_res10 == lVar9) ||
(
iVar5 = FUN_1400454d0(lVar6, puVar2, *(undefined8 * )(local_res10 + 0x28),
                      *(undefined8 * )(local_res10 + 0x30)), iVar5<
0)) {
local_res10 = lVar9;
}
if (lVar6 != 0) {
FUN_14018b900(lVar6,
0);
}
if (local_res10 == param_3[2]) {
uVar10 = 0;
if (*(char *)(*param_3 + 0xb09) != '\0') {
uVar10 = 0x3f000000;
}
lVar9 = FUN_14018b280(0x38);
if (lVar9 == 0) {
uVar7 = 0;
}
else {
uVar7 = FUN_14014e0d0(extraout_XMM0_Qa, param_2, uVar10, lVar9, param_4);
}
lVar9 = 0;
sVar3 = *param_4;
local_50 = 0;
local_40 = 0;
while (sVar3 != 0) {
lVar9 = lVar9 + 1;
sVar3 = param_4[lVar9];
}
lVar9 = lVar9 * 2 >> 1;
uVar1 = lVar9 + 1;
if (uVar1 < 0x7fffffffffffffff) {
lVar6 = uVar1 * 2;
local_50 = FUN_14018b280(lVar6, 0);
local_40 = lVar6 + local_50;
}
lVar6 = local_50;
lVar9 = lVar9 * 2;
FUN_1407db590(local_50, param_4, lVar9
);
local_48 = (undefined2 * )(lVar9 + lVar6);
if (local_48 != (undefined2 *)0x0) {
*
local_48 = 0;
}
puVar8 = (undefined8 * )
FUN_1400eda60(param_3
+ 1,local_58);
*
puVar8 = uVar7;
if (lVar6 != 0) {
FUN_14018b900(lVar6,
0);
}
}
else {
uVar7 = *(undefined8 * )(local_res10 + 0x40);
}
return
uVar7;
}
return 0;
}


int *FUN_14014e8d0(longlong
param_1,
int *param_2,
int *param_3
)

{
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
float local_28;
float fStack36;
float local_18;
float fStack20;

FUN_14014e9c0();

iVar1 = *param_3;
iVar2 = *(int *) (param_1 + 0x44);
iVar3 = *(int *) (param_1 + 0x48);
iVar4 = *(int *) (param_1 + 0x4c);
iVar5 = param_3[1];
*
param_2 = (int) (local_28 + (float) *(int *) (param_1 + 0x40) + (float) iVar1);
param_2[1] = (int)(fStack36 + (float)iVar2 + (float)iVar5);
param_2[2] = (int)(local_18 + (float)iVar3 + (float)iVar1);
param_2[3] = (int)(fStack20 + (float)iVar4 + (float)iVar5);
return
param_2;
}


float *FUN_14014e9c0(undefined4
param_1,
float *param_2,
float *param_3,
int *param_4
)

{
float fVar1;
float fVar2;
float fVar3;
float fVar4;

fVar4 = (float) (param_4[2] - *param_4);
fVar3 = (float) (param_4[3] - param_4[1]);
if ((*(byte *)(param_2 + 0x14) & 1) == 0) {
if (*(longlong *)(param_2 + 4) == 0) {
fVar2 = fVar4 * param_2[0xc];
*
param_3 = fVar2;
}
else {
fVar2 = (float) FUN_14014e200(param_1, fVar4);
*
param_3 = fVar2;
}
if (*(longlong *)(param_2 + 6) == 0) {
fVar2 = fVar3 * param_2[0xd];
}
else {
fVar2 = (float) FUN_14014e200(fVar2, fVar3);
}
param_3[1] =
fVar2;
if (*(longlong *)(param_2 + 8) == 0) {
param_3[4] =
fVar4 *param_2[0xe];
}
else {
fVar2 = (float) FUN_14014e200(fVar2, fVar4);
param_3[4] =
fVar2;
}
if (*(longlong *)(param_2 + 10) == 0) {
param_3[5] =
fVar3 *param_2[0xf];
}
else {
fVar3 = (float) FUN_14014e200(fVar2, fVar3);
param_3[5] =
fVar3;
}
}
else {
fVar3 = *param_2;
fVar4 = param_2[1];
fVar2 = param_2[2];
fVar1 = param_2[3];
param_3[4] =
fVar3;
param_3[5] =
fVar4;
param_3[6] =
fVar2;
param_3[7] =
fVar1;
*
param_3 = fVar3;
param_3[1] =
fVar4;
param_3[2] =
fVar2;
param_3[3] =
fVar1;
}
return
param_3;
}


undefined8 FUN_14014eab0(longlong
param_1,
undefined4 *param_2
)

{
longlong lVar1;
undefined4 uVar2;
undefined4 uVar3;
undefined4 uVar4;
undefined8 *puVar5;
undefined4 *puVar6;
undefined8 local_18;
undefined4 local_10;

puVar5 = (undefined8 * )
FUN_140059170(param_1,
8);
lVar1 = *(longlong * )(param_1 + 0x20);
local_18 = FUN_140062650(param_1, "Apollo.WindowLocation", 0x15);
local_10 = 4;
FUN_14005e8e0(param_1, lVar1
+ 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_140058bf0(param_1,
0xfffffffe);
puVar6 = (undefined4 * )
FUN_14018b280(0x60);
if (puVar6 == (undefined4 *)0x0) {
*
puVar5 = 0;
}
else {
uVar2 = param_2[1];
uVar3 = param_2[2];
uVar4 = param_2[3];
*
puVar6 = *param_2;
puVar6[1] =
uVar2;
puVar6[2] =
uVar3;
puVar6[3] =
uVar4;
*(undefined8 *)(puVar6 + 4) = *(undefined8 *)(param_2 + 4);
*(undefined8 *)(puVar6 + 6) = *(undefined8 *)(param_2 + 6);
*(undefined8 *)(puVar6 + 8) = *(undefined8 *)(param_2 + 8);
*(undefined8 *)(puVar6 + 10) = *(undefined8 *)(param_2 + 10);
puVar6[0xc] = param_2[0xc];
puVar6[0xd] = param_2[0xd];
puVar6[0xe] = param_2[0xe];
puVar6[0xf] = param_2[0xf];
puVar6[0x10] = param_2[0x10];
puVar6[0x11] = param_2[0x11];
puVar6[0x12] = param_2[0x12];
puVar6[0x13] = param_2[0x13];
puVar6[0x14] = param_2[0x14];
*
puVar5 = puVar6;
}
return 1;
}


undefined8 FUN_14014ebc0(longlong
param_1,
undefined4 param_2
)

{
undefined8 *puVar1;
undefined8 *puVar2;
int iVar3;
longlong *plVar4;
longlong lVar5;
undefined8 *puVar6;
undefined8 local_18;
undefined4 local_10;

plVar4 = (longlong * )

FUN_1400580e0();

if (*(int *)(plVar4 + 1) == 2) {
lVar5 = *plVar4;
}
else {
if (*(int *)(plVar4 + 1) != 7) {
return 0;
}
lVar5 = *plVar4 + 0x30;
}
if (lVar5 != 0) {
plVar4 = (longlong * )
FUN_1400580e0(param_1, param_2
);
iVar3 = *(int *) (plVar4 + 1);
if ((iVar3 == 5) || (iVar3 == 7)) {
lVar5 = *(longlong * )(*plVar4 + 0x10);
}
else {
lVar5 = *(longlong * )(*(longlong * )(param_1 + 0x20) + 0xe0 + (longlong)
iVar3 * 8);
}
if (lVar5 != 0) {
plVar4 = *(longlong * *)(param_1 + 0x10);
*
plVar4 = lVar5;
*(undefined4 *)(plVar4 + 1) = 5;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
lVar5 = *(longlong * )(param_1 + 0x20);
local_18 = FUN_140062650(param_1, "Apollo.WindowLocation", 0x15);
local_10 = 4;
FUN_14005e8e0(param_1, lVar5
+ 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
FUN_1400586a0(param_1,
0xffffffff);
FUN_1400586a0(param_1,
0xfffffffe);
puVar6 = (undefined8 * )
0x0;
iVar3 = 0;
puVar1 = (undefined8 * )(*(longlong * )(param_1 + 0x10) + -0x10);
puVar2 = (undefined8 * )(*(longlong * )(param_1 + 0x10) + -0x20);
if ((puVar1 != &DAT_140a12138) && (puVar2 != &DAT_140a12138)) {
iVar3 = FUN_14005ac20(puVar1, puVar2);
}
*(undefined8 **)(param_1 + 0x10) =
puVar2;
if (iVar3 != 0) {
plVar4 = (longlong * )
FUN_1400580e0(param_1, param_2
);
if (*(int *)(plVar4 + 1) == 2) {
puVar6 = (undefined8 * ) * plVar4;
}
else if (*(int *)(plVar4 + 1) == 7) {
return *(undefined8 *)(*plVar4 + 0x30);
}
return *
puVar6;
}
}
}
return 0;
}


undefined8 FUN_14014ed30(undefined8
param_1)

{
undefined8 uVar1;

uVar1 = FUN_14014ebc0(param_1, 1);
FUN_14018b900(uVar1,
0);
return 0;
}


undefined8 FUN_14014ed50(longlong
param_1)

{
double *pdVar1;
longlong lVar2;
float fVar3;
float fVar4;

lVar2 = FUN_14014ebc0(param_1, 1);
if (lVar2 == 0) {
return 0;
}
fVar4 = 0.0;
if (*(longlong *)(lVar2 + 0x10) == 0) {
fVar3 = *(float *) (lVar2 + 0x30);
}
else {
fVar3 = 0.0;
}
pdVar1 = *(double **) (param_1 + 0x10);
*
pdVar1 = (double) fVar3;
*(undefined4 *)(pdVar1 + 1) = 3;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
pdVar1 = *(double **) (param_1 + 0x10);
if (*(longlong *)(lVar2 + 0x18) == 0) {
fVar3 = *(float *) (lVar2 + 0x34);
}
else {
fVar3 = 0.0;
}
*(undefined4 *)(pdVar1 + 1) = 3;
*
pdVar1 = (double) fVar3;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
pdVar1 = *(double **) (param_1 + 0x10);
if (*(longlong *)(lVar2 + 0x20) == 0) {
fVar3 = *(float *) (lVar2 + 0x38);
}
else {
fVar3 = 0.0;
}
*(undefined4 *)(pdVar1 + 1) = 3;
*
pdVar1 = (double) fVar3;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
pdVar1 = *(double **) (param_1 + 0x10);
if (*(longlong *)(lVar2 + 0x28) == 0) {
fVar4 = *(float *) (lVar2 + 0x3c);
}
*(undefined4 *)(pdVar1 + 1) = 3;
*
pdVar1 = (double) fVar4;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
return 4;
}


undefined8
        FUN_14014ee20(undefined8
param_1,
undefined8 param_2, undefined8
param_3,
undefined8 param_4
)

{
longlong lVar1;
double dVar2;
undefined4 in_XMM6_Da;
float fVar3;
undefined4 in_XMM6_Db;
undefined4 in_XMM6_Dc;
undefined4 in_XMM6_Dd;
undefined4 in_XMM7_Da;
float fVar4;
undefined4 in_XMM7_Db;
undefined4 in_XMM7_Dc;
undefined4 in_XMM7_Dd;
undefined4 in_XMM8_Da;
float fVar5;
undefined4 in_XMM8_Db;
undefined4 in_XMM8_Dc;
undefined4 in_XMM8_Dd;

lVar1 = FUN_14014ebc0(param_1, 1);
if (lVar1 != 0) {
dVar2 = (double) FUN_140056c40(param_1, 2, param_3, param_4,
                               CONCAT412(in_XMM8_Dd,
                                         CONCAT48(in_XMM8_Dc, CONCAT44(in_XMM8_Db, in_XMM8_Da))),
                               CONCAT412(in_XMM7_Dd,
                                         CONCAT48(in_XMM7_Dc, CONCAT44(in_XMM7_Db, in_XMM7_Da))),
                               CONCAT412(in_XMM6_Dd,
                                         CONCAT48(in_XMM6_Dc, CONCAT44(in_XMM6_Db, in_XMM6_Da))));
fVar5 = (float) dVar2;
dVar2 = (double) FUN_140056c40(param_1, 3);
fVar4 = (float) dVar2;
dVar2 = (double) FUN_140056c40(param_1, 4);
fVar3 = (float) dVar2;
dVar2 = (double) FUN_140056c40(param_1, 5);
*(float *)(lVar1 + 0x30) =
fVar5;
*(float *)(lVar1 + 0x34) =
fVar4;
*(float *)(lVar1 + 0x38) =
fVar3;
*(float *)(lVar1 + 0x3c) = (float)
dVar2;
}
return 0;
}


undefined8 FUN_14014eee0(longlong
param_1)

{
int iVar1;
double *pdVar2;
longlong lVar3;

lVar3 = FUN_14014ebc0(param_1, 1);
if (lVar3 == 0) {
return 0;
}
iVar1 = *(int *) (lVar3 + 0x40);
pdVar2 = *(double **) (param_1 + 0x10);
*(undefined4 *)(pdVar2 + 1) = 3;
*
pdVar2 = (double) iVar1;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
iVar1 = *(int *) (lVar3 + 0x44);
pdVar2 = *(double **) (param_1 + 0x10);
*(undefined4 *)(pdVar2 + 1) = 3;
*
pdVar2 = (double) iVar1;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
pdVar2 = *(double **) (param_1 + 0x10);
iVar1 = *(int *) (lVar3 + 0x48);
*(undefined4 *)(pdVar2 + 1) = 3;
*
pdVar2 = (double) iVar1;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
pdVar2 = *(double **) (param_1 + 0x10);
iVar1 = *(int *) (lVar3 + 0x4c);
*(undefined4 *)(pdVar2 + 1) = 3;
*
pdVar2 = (double) iVar1;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
return 4;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14014f020(longlong
param_1)

{
int iVar1;
longlong lVar2;
undefined8 *puVar3;
undefined8 *puVar4;
longlong lVar5;
longlong lVar6;
longlong lVar7;
undefined4 uVar8;
undefined auStack392[32];
undefined **local_168;
int local_160;
longlong local_158;
undefined4 local_150;
undefined **local_148;
undefined4 local_140;
longlong local_138;
undefined4 local_130;
undefined4 local_128;
undefined4 uStack292;
undefined4 uStack288;
undefined4 uStack284;
undefined8 local_118[4];
undefined local_f8[16];
undefined local_e8[16];
uint local_d8;
undefined4 local_c8;
undefined4 uStack196;
undefined4 uStack192;
undefined4 uStack188;
undefined8 local_b8[3];
undefined8 uStack160;
undefined4 auStack156[5];
undefined4 local_88[4];
uint local_78;
undefined **local_68;
undefined8 local_60;
longlong local_58;
undefined ***local_50;
undefined **local_48;
undefined8 local_40;
longlong local_38;
undefined4 local_30;
ulonglong local_28;

local_28 = DAT_140c0f7b0 ^ (ulonglong)
auStack392;
lVar5 = 0;
puVar4 = local_118;
local_d8 = 0;
lVar6 = lVar5;
do {
uVar8 = *(undefined4 * )((longlong) & DAT_140a14e90 + lVar6);
*(undefined4 *)(local_e8 + lVar6) = 0;
lVar2 = lVar6 + 4;
*(undefined4 *)(local_f8 + lVar6) =
uVar8;
*
puVar4 = 0;
puVar4 = puVar4 + 1;
lVar6 = lVar2;
} while (lVar2 < 0x10);
local_d8 = local_d8 | 0x300;
local_150 = 1;
local_f8 = ZEXT816(0);
local_e8 = ZEXT816(0);
local_168 = &PTR_FUN_140b569f0;
local_160 = -2;
puVar3 = *(undefined8 * *)(param_1 + 0x18);
local_158 = param_1;
if (((puVar3 < *(undefined8 **)(param_1 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
(*(int *)(puVar3 + 1) == 5)) {
FUN_1400579e0(param_1, puVar4,
0xfffffffe);
puVar3 = &DAT_140a12138;
puVar4 = *(undefined8 * *)(local_158 + 0x10);
if (*(undefined8 **)(local_158 + 0x18) < puVar4) {
puVar3 = *(undefined8 * *)(local_158 + 0x18);
}
*
puVar4 = *puVar3;
*(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar3 + 1);
*(longlong *)(local_158 + 0x10) = *(longlong *)(local_158 + 0x10) + 0x10;
local_160 = FUN_1400578c0(local_158);
}
if ((local_158 != 0) && (local_160 != -2)) {
lVar6 = local_158;
puVar3 = (undefined8 * )
FUN_14005c3c0(*(undefined8
*)(*(longlong *)(local_158 + 0x20) + 0xa0),local_160);
puVar4 = *(undefined8 * *)(lVar6 + 0x10);
*
puVar4 = *puVar3;
*(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar3 + 1);
*(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
puVar4 = (undefined8 * )(*(longlong * )(local_158 + 0x10) + -0x10);
if (puVar4 == &DAT_140a12138) {
iVar1 = -1;
}
else {
iVar1 = *(int *) (*(longlong * )(local_158 + 0x10) + -8);
}
*(undefined8 **)(local_158 + 0x10) =
puVar4;
if (iVar1 == 5) {
local_148 = &PTR_FUN_140b569f0;
local_138 = 0;
local_130 = 1;
local_140 = 0xfffffffe;
local_68 = (undefined * *)
0x0;
local_60 = 0;
local_48 = (undefined * *)
0x0;
local_40 = 0;
local_78 = 0;
lVar6 = lVar5;
puVar4 = local_b8;
do {
lVar2 = lVar6 + 4;
*(undefined4 *)((longlong)auStack156 + lVar6 + 4) =
*(undefined4 *)((longlong)&local_68 + lVar6);
*(undefined4 *)((longlong)auStack156 + lVar6 + 0x14) =
*(undefined4 *)((longlong)&local_48 + lVar6);
*
puVar4 = 0;
lVar6 = lVar2;
puVar4 = puVar4 + 1;
} while (lVar2 < 0x10);
iVar1 = (*(code *) local_168[1])(&local_168);
if (iVar1 != 0) {
lVar2 = local_158;
puVar3 = (undefined8 * )
FUN_14005c3c0(*(undefined8
*)(*(longlong *)(local_158 + 0x20) + 0xa0),local_160);
lVar6 = local_158;
puVar4 = *(undefined8 * *)(lVar2 + 0x10);
*
puVar4 = *puVar3;
*(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar3 + 1);
*(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
lVar2 = FUN_14018f0e0(&local_68, L"fPoints");
if (*(longlong *)(lVar2 + 8) == 0) {
*(undefined4 *)(*(longlong *)(lVar6 + 0x10) + 8) = 0;
*(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
}
else {
lVar7 = -1;
do {
lVar7 = lVar7 + 1;
} while (*(char *)(*(longlong *)(lVar2 + 8) + lVar7) != '\0');
FUN_140058710(lVar6);
}
if (local_60 != 0) {
FUN_14018b900(local_60,
0);
}
lVar6 = *(longlong * )(local_158 + 0x10) + -0x10;
FUN_14005e8e0(local_158, *(longlong
*)(local_158 + 0x10) + -0x20,lVar6,lVar6);
local_138 = local_158;
(*(code *)local_148[2])(&local_148,0xffffffff);
*(longlong *)(local_158 + 0x10) = *(longlong *)(local_158 + 0x10) + -0x20;
local_68 = &PTR_FUN_140b56a08;
local_58 = local_138;
local_60 = CONCAT44(local_60._4_4_, 0xfffffffe);
local_50 = &local_148;
*(undefined4 *)(*(longlong *)(local_138 + 0x10) + 8) = 0;
*(longlong *)(local_138 + 0x10) = *(longlong *)(local_138 + 0x10) + 0x10;
FUN_1400fa090(&local_68,
0xffffffff);
*(longlong *)(local_138 + 0x10) = *(longlong *)(local_138 + 0x10) + -0x10;
lVar6 = lVar5;
while( true ) {
iVar1 = (*(code * )(*local_50)[1])();
if (iVar1 == 0) break;
iVar1 = FUN_1400fcba0(&local_68);
if ((iVar1 == 0) || (3 < lVar6)) break;
uVar8 = FUN_1400fc330(&local_68);
lVar6 = lVar6 + 1;
auStack156[lVar6] =
uVar8;
}
local_68 = &PTR_FUN_140b56a08;
if (local_58 != 0) {
FUN_1400579e0();

}
}
local_48 = &PTR_FUN_140b569f0;
local_38 = 0;
local_30 = 1;
local_40 = CONCAT44(local_40._4_4_, 0xfffffffe);
iVar1 = (*(code *) local_168[1])(&local_168);
if (iVar1 != 0) {
lVar2 = local_158;
puVar3 = (undefined8 * )
FUN_14005c3c0(*(undefined8
*)(*(longlong *)(local_158 + 0x20) + 0xa0),local_160);
lVar6 = local_158;
puVar4 = *(undefined8 * *)(lVar2 + 0x10);
*
puVar4 = *puVar3;
*(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar3 + 1);
*(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
lVar2 = FUN_14018f0e0(&local_68, L"nOffsets");
if (*(longlong *)(lVar2 + 8) == 0) {
*(undefined4 *)(*(longlong *)(lVar6 + 0x10) + 8) = 0;
*(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
}
else {
lVar7 = -1;
do {
lVar7 = lVar7 + 1;
} while (*(char *)(*(longlong *)(lVar2 + 8) + lVar7) != '\0');
FUN_140058710(lVar6);
}
if (local_60 != 0) {
FUN_14018b900(local_60,
0);
}
lVar6 = *(longlong * )(local_158 + 0x10) + -0x10;
FUN_14005e8e0(local_158, *(longlong
*)(local_158 + 0x10) + -0x20,lVar6,lVar6);
local_38 = local_158;
(*(code *)local_48[2])(&local_48,0xffffffff);
*(longlong *)(local_158 + 0x10) = *(longlong *)(local_158 + 0x10) + -0x20;
local_68 = &PTR_FUN_140b56a08;
local_58 = local_38;
local_60 = CONCAT44(local_60._4_4_, 0xfffffffe);
local_50 = &local_48;
*(undefined4 *)(*(longlong *)(local_38 + 0x10) + 8) = 0;
*(longlong *)(local_38 + 0x10) = *(longlong *)(local_38 + 0x10) + 0x10;
FUN_1400fa090(&local_68,
0xffffffff);
*(longlong *)(local_38 + 0x10) = *(longlong *)(local_38 + 0x10) + -0x10;
while( true ) {
iVar1 = (*(code * )(*local_50)[1])();
if (iVar1 == 0) break;
iVar1 = FUN_1400fcba0(&local_68);
if ((iVar1 == 0) || (3 < lVar5)) break;
uVar8 = FUN_1400fc140(&local_68);
auStack156[lVar5 + 5] =
uVar8;
lVar5 = lVar5 + 1;
}
local_68 = &PTR_FUN_140b56a08;
if (local_58 != 0) {
FUN_1400579e0();

}
}
local_118[0] = local_b8[0];
local_128 = local_c8;
uStack292 = uStack196;
uStack288 = uStack192;
uStack284 = uStack188;
local_118[1] = local_b8[1];
local_f8 = CONCAT412(auStack156[4],
                     CONCAT48(auStack156[3], CONCAT44(auStack156[2], auStack156[1])));
local_118[2] = local_b8[2];
local_48 = &PTR_FUN_140b56a08;
local_118[3] =
uStack160;
local_e8 = CONCAT412(local_88[3], CONCAT48(local_88[2], CONCAT44(local_88[1], local_88[0])));
local_d8 = local_78 | 0x300;
if (local_38 != 0) {
FUN_1400579e0();

}
local_148 = &PTR_FUN_140b56a08;
if (local_138 != 0) {
FUN_1400579e0();

}
}
}
FUN_14014eab0(param_1, &local_128
);
local_168 = &PTR_FUN_140b56a08;
if (local_158 != 0) {
FUN_1400579e0();

}
FUN_1407db4f0(local_28
^ (ulonglong)auStack392);
return;
}


undefined8 FUN_14014fd00(longlong
param_1)

{
undefined8 *puVar1;
longlong *plVar2;
longlong lVar3;
undefined8 uVar4;
undefined **ppuVar5;
undefined *puVar6;
undefined8 local_18;
undefined4 local_10;

FUN_1400569b0(param_1,
"Apollo.WindowLocation");
puVar1 = *(undefined8 * *)(param_1 + 0x10);
*
puVar1 = puVar1[-2];
*(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar1 + -1);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
lVar3 = *(longlong * )(param_1 + 0x10);
local_18 = FUN_140062650(param_1, "__index", 7);
local_10 = 4;
FUN_14005ea50(param_1, lVar3
+ -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
lVar3 = *(longlong * )(param_1 + 0x10);
ppuVar5 = &PTR_DAT_140c57b60;
puVar6 = PTR_DAT_140c57b60;
while (puVar6 != (undefined *)0x0) {
puVar6 = ppuVar5[1];
if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
FUN_14005e2c0(param_1);
}
lVar3 = FUN_140060ab0(param_1, 0);
*(undefined **)(lVar3 + 0x20) =
puVar6;
plVar2 = *(longlong * *)(param_1 + 0x10);
*
plVar2 = lVar3;
*(undefined4 *)(plVar2 + 1) = 6;
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
puVar6 = *ppuVar5;
uVar4 = FUN_1400580e0(param_1, 0xfffffffe);
lVar3 = -1;
do {
lVar3 = lVar3 + 1;
} while (puVar6[lVar3] != '\0');
local_18 = FUN_140062650(param_1, puVar6);
local_10 = 4;
FUN_14005ea50(param_1, uVar4, &local_18, *(longlong
*)(param_1 + 0x10) + -0x10);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
lVar3 = *(longlong * )(param_1 + 0x10);
ppuVar5 = ppuVar5 + 2;
puVar6 = *ppuVar5;
}
*(longlong *)(param_1 + 0x10) = lVar3 + -0x10;
FUN_140057020(param_1,
"WindowLocation",&PTR_s_ReadLocation_140c57b30);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
return 1;
}


undefined *FUN_14014fea0(undefined * param_1, longlong
param_2,
undefined4 param_3, undefined
*param_4)

{
undefined4 *puVar1;
uint *puVar2;
uint *puVar3;
longlong *plVar4;
undefined4 uVar5;
uint uVar6;
int iVar7;
undefined4 uVar8;
undefined4 uVar9;
longlong lVar10;
char cVar11;
undefined8 uVar12;
longlong lVar13;
undefined4 *puVar14;
longlong lVar15;
longlong lVar16;
undefined8 *puVar17;

lVar16 = 0;
*(undefined4 *)(param_1 + 4) =
param_3;
puVar1 = (undefined4 * )(param_1 + 0x20);
*
param_1 = 1;
puVar2 = (uint * )(param_1 + 0xc);
puVar3 = (uint * )(param_1 + 0x10);
*
puVar2 = 0;
*
puVar3 = 0;
*(undefined4 *)(param_1 + 0x70) = 0;
puVar14 = (undefined4 * )(param_1 + 0x60);
lVar15 = 4;
puVar17 = (undefined8 * )(param_1 + 0x30);
do {
uVar5 = *(undefined4 * )
        ((longlong)
L"UseTransitionSprite" + (0x18 - (longlong)puVar1) + (longlong)puVar14);
*
puVar14 = 0;
puVar14[-4] =
uVar5;
*
puVar17 = 0;
puVar14 = puVar14 + 1;
lVar15 = lVar15 + -1;
puVar17 = puVar17 + 1;
} while (lVar15 != 0);
plVar4 = (longlong * )(param_1 + 0x88);
FUN_1401095e0(plVar4);
*(undefined8 *)(param_1 + 0xb8) = 0;
*(undefined8 *)(param_1 + 200) = 0;
*(undefined8 *)(param_1 + 0xd0) = 0;
uVar5 = *(undefined4 * )(param_4 + 0x34);
uVar8 = *(undefined4 * )(param_4 + 0x38);
uVar9 = *(undefined4 * )(param_4 + 0x3c);
*
puVar1 = *(undefined4 * )(param_4 + 0x30);
*(undefined4 *)(param_1 + 0x24) =
uVar5;
*(undefined4 *)(param_1 + 0x28) =
uVar8;
*(undefined4 *)(param_1 + 0x2c) =
uVar9;
*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_4 + 0x40);
*(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_4 + 0x48);
*(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_4 + 0x50);
*(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_4 + 0x58);
*(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_4 + 0x60);
*(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_4 + 100);
*(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_4 + 0x68);
*(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_4 + 0x6c);
*(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_4 + 0x70);
*(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_4 + 0x74);
*(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_4 + 0x78);
*(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_4 + 0x7c);
*(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_4 + 0x80);
param_1[8] = *
param_4;
param_1[9] = param_4[1];
lVar15 = DAT_140c63678;
if (puVar2 != (uint *)(param_4 + 0x28)) {
FUN_1401429a0(DAT_140c63678, *puVar2
);
lVar15 = DAT_140c63678;
uVar6 = *(uint * )(param_4 + 0x28);
*
puVar2 = uVar6;
if ((ulonglong)uVar6 < *(ulonglong *)(lVar15 + 0x30)) {
iVar7 = *(int *) ((ulonglong)
uVar6 * 0x20 + 0x10 + *(longlong *)(lVar15 + 0x28));
if (iVar7 - 1U < 0xfffffffe) {
*(int *)((ulonglong)uVar6 * 0x20 + 0x10 + *(longlong *)(lVar15 + 0x28)) = iVar7 + 1;
}
}
}
if (puVar3 != (uint *)(param_4 + 0x2c)) {
FUN_1401429a0(lVar15, *puVar3
);
lVar15 = DAT_140c63678;
uVar6 = *(uint * )(param_4 + 0x2c);
*
puVar3 = uVar6;
if ((ulonglong)uVar6 < *(ulonglong *)(lVar15 + 0x30)) {
lVar15 = *(longlong * )(lVar15 + 0x28);
iVar7 = *(int *) ((ulonglong)
uVar6 * 0x20 + 0x10 + lVar15);
if (iVar7 - 1U < 0xfffffffe) {
*(int *)((ulonglong)uVar6 * 0x20 + 0x10 + lVar15) = iVar7 + 1;
}
}
}
uVar5 = *(undefined4 * )(param_4 + 0x34);
uVar8 = *(undefined4 * )(param_4 + 0x38);
uVar9 = *(undefined4 * )(param_4 + 0x3c);
*
puVar1 = *(undefined4 * )(param_4 + 0x30);
*(undefined4 *)(param_1 + 0x24) =
uVar5;
*(undefined4 *)(param_1 + 0x28) =
uVar8;
*(undefined4 *)(param_1 + 0x2c) =
uVar9;
*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_4 + 0x40);
*(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_4 + 0x48);
*(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_4 + 0x50);
*(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_4 + 0x58);
*(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_4 + 0x60);
*(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_4 + 100);
*(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_4 + 0x68);
*(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_4 + 0x6c);
*(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_4 + 0x70);
*(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_4 + 0x74);
*(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_4 + 0x78);
*(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_4 + 0x7c);
*(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_4 + 0x80);
*(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_4 + 0x90);
*(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_4 + 0x94);
uVar12 = FUN_1400e58c0(param_2, *(undefined8 * )(param_4 + 0xc0));
FUN_1401507c0(param_1, *(undefined8
*)(param_4 + 0xa0),uVar12,*(undefined4 *)(param_4 + 0xd8));
if (param_1[9] == '\0') {
if (param_2 != 0) {
FUN_140109710(plVar4, param_2
+ 0xf0,*(undefined8 *)(param_4 + 0x10),0);
}
}
else {
if ((param_2 != 0) &&
((*plVar4 == 0 || (
cVar11 = FUN_14002c740(param_1 + 0x98, L"LineFill"), cVar11
== '\0')))) {
lVar13 = FUN_140108e80(param_2 + 0xf0, L"LineFill");
lVar15 = lVar16;
if (lVar13 != 0) {
do {
lVar10 = lVar15 + 1;
lVar15 = lVar15 + 1;
} while (L"LineFill"[lVar10] != L'\0');
FUN_14001c480(param_1
+ 0x98,L"LineFill",L"LineFill" + lVar15);
}
FUN_1401097f0(plVar4, lVar13
);
}
if ((*plVar4 == 0) && (param_2 != 0)) {
lVar15 = FUN_140108e80(param_2 + 0xf0, L"WhiteFill");
if (lVar15 != 0) {
do {
lVar13 = lVar16 + 1;
lVar16 = lVar16 + 1;
} while (L"WhiteFill"[lVar13] != L'\0');
FUN_14001c480(param_1
+ 0x98,L"WhiteFill",L"WhiteFill" + lVar16);
}
FUN_1401097f0(plVar4, lVar15
);
}
}
return
param_1;
}


void FUN_140150220(undefined * param_1) {
    if (*(longlong * *)(param_1 + 0xb8) != (longlong * )0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0xb8) + 8))();
        *(undefined8 * )(param_1 + 0xb8) = 0;
    }
    *param_1 = 0;
    if (*(undefined8 * *)(param_1 + 200) != (undefined8 * )0x0) {
        **(undefined8 * *)(param_1 + 200) = *(undefined8 * )(param_1 + 0xd0);
    }
    if (*(longlong * )(param_1 + 0xd0) != 0) {
        *(undefined8 * )(*(longlong * )(param_1 + 0xd0) + 200) = *(undefined8 * )(param_1 + 200);
    }
    *(undefined8 * )(param_1 + 200) = 0;
    *(undefined8 * )(param_1 + 0xd0) = 0;
    if (*(longlong * *)(param_1 + 0x88) != (longlong * )0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x88) + 8))();
        *(undefined8 * )(param_1 + 0x88) = 0;
    }
    if (*(longlong * )(param_1 + 0xa0) != 0) {
        FUN_14018b900(*(longlong * )(param_1 + 0xa0), 0);
    }
    FUN_1401429a0(DAT_140c63678, *(undefined4 * )(param_1 + 0x10));
    FUN_1401429a0(DAT_140c63678, *(undefined4 * )(param_1 + 0xc));
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1401502e0(longlong
param_1,
float *param_2
)

{
float fVar1;
undefined8 *puVar2;
longlong lVar3;
undefined auStack328[32];
undefined *local_128;
undefined4 local_120;
longlong local_118;
undefined4 local_110;
undefined8 local_108;
float local_f8;
float fStack244;
float fStack240;
float fStack236;
undefined4 local_e8;
undefined4 uStack228;
undefined4 uStack224;
undefined4 uStack220;
undefined local_d8[8];
float fStack208;
float fStack204;
undefined local_c8[8];
float fStack192;
float fStack188;
undefined4 local_b8;
undefined4 uStack180;
undefined8 uStack176;
float local_a8;
undefined4 uStack164;
undefined8 uStack160;
undefined4 local_78;
undefined4 uStack116;
undefined4 uStack112;
undefined4 uStack108;
float local_68;
undefined4 uStack100;
undefined4 uStack96;
undefined4 uStack92;
ulonglong local_18;

local_18 = DAT_140c0f7b0 ^ (ulonglong)
auStack328;
if (*(char *)(param_1 + 9) == '\0') {
fStack240 = (float) (int) param_2[4];
fStack236 = (float) (int) param_2[5];
fStack244 = (float) (int) param_2[1];
local_f8 = (float) (int) *param_2;
puVar2 = (undefined8 * )
FUN_14014e8d0(param_1
+ 0x20);
_local_c8 = ZEXT816(CONCAT44((float) *(int *) ((longlong)
puVar2 + 0xc),(float)(int)puVar2[1]));
_local_d8 = ZEXT816(CONCAT44((float) *(int *) ((longlong)
puVar2 + 4),(float)(int)*puVar2));
(**(code **)(*DAT_140c65680 + 0x40))();
fVar1 = *(float *) (param_1 + 0x80);
if (fVar1 != 0.0) {
uStack176 = &local_f8;
local_b8 = 0x3f800000;
uStack160 = &local_e8;
uStack160.
_4_4_ = (undefined4)((ulonglong)
uStack160 >> 0x20);
local_f8 = (local_c8._0_4_ + local_d8._0_4_) * 0.5;
fStack244 = (local_c8._4_4_ + local_d8._4_4_) * 0.5;
fStack240 = (fStack192 + fStack208) * 0.5;
fStack236 = (fStack188 + fStack204) * 0.5;
local_e8 = 0;
uStack228 = 0;
uStack224 = 0;
uStack220 = 0;
uStack100 = uStack164;
uStack96 = (undefined4)
uStack160;
uStack92 = uStack160._4_4_;
uStack176.
_4_4_ = (undefined4)((ulonglong)
uStack176 >> 0x20);
uStack116 = uStack180;
uStack112 = (undefined4)
uStack176;
uStack108 = uStack176._4_4_;
local_a8 = fVar1;
local_78 = local_b8;
local_68 = fVar1;
FUN_1401b0840(&local_78, &local_b8
);
(**(code **)(*DAT_140c65680 + 0x58))();
}
if ((ulonglong)*(uint *)(param_1 + 0xc) < *(ulonglong *)(DAT_140c63678 + 0x30)) {
lVar3 = (ulonglong) * (uint * )(param_1 + 0xc) * 0x20 + *(longlong * )(DAT_140c63678 + 0x28);
}
else {
lVar3 = *(longlong * )(DAT_140c63678 + 0x28);
}
if (*(longlong *)(param_1 + 0x88) != 0) {
local_128 = (undefined * )
        ((ulonglong)
local_128 & 0xffffffff00000000 |
(ulonglong)
(uint)((DAT_140c63664 - *(float *)(param_1 + 0x90)) * *(float *)(param_1 + 0x94)));
FUN_140103e60(*(longlong
*)(param_1 + 0x88),local_d8,lVar3,0);
}
if (*(longlong *)(param_1 + 0xb8) != 0) {
if ((ulonglong)*(uint *)(param_1 + 0x10) < *(ulonglong *)(DAT_140c63678 + 0x30)) {
local_118 = (ulonglong) * (uint * )(param_1 + 0x10) * 0x20 +
            *(longlong * )(DAT_140c63678 + 0x28);
}
else {
local_118 = *(longlong * )(DAT_140c63678 + 0x28);
}
local_120 = *(undefined4 * )(param_1 + 0xc0);
local_108 = 0;
local_110 = 1;
local_128 = local_d8;
(**(code **)(*DAT_140c65680 + 0x118))
(DAT_140c65680,*(longlong *)(param_1 + 0xb8),0,0xffffffffffffffff);
}
(**(code **)(*DAT_140c65680 + 0x48))();
}
else {
FUN_140150530();

}
FUN_1407db4f0(local_18
^ (ulonglong)auStack328);
return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140150530(longlong
param_1,
float *param_2
)

{
undefined8 *puVar1;
longlong lVar2;
float fVar3;
float fVar4;
undefined auStack360[32];
undefined4 *local_148;
undefined4 local_140;
longlong local_138;
undefined4 local_130;
undefined8 local_128;
int local_118;
int local_114;
int local_110;
int local_10c;
undefined4 local_108;
float local_104;
float local_f8;
float local_f4;
undefined4 local_e8;
undefined4 uStack228;
undefined8 uStack224;
undefined4 uStack212;
undefined8 uStack208;
undefined local_a8[16];
undefined4 local_98;
undefined4 uStack148;
undefined4 uStack144;
undefined4 uStack140;
undefined4 uStack132;
undefined4 uStack128;
undefined4 uStack124;
ulonglong local_38;

local_38 = DAT_140c0f7b0 ^ (ulonglong)
auStack360;
local_118 = (int) *param_2;
local_110 = (int) param_2[4];
local_10c = (int) param_2[5];
local_114 = (int) param_2[1];
puVar1 = (undefined8 * )
FUN_14014e8d0(param_1
+ 0x20,&local_e8);
local_104 = *(float *) (param_1 + 0x84) * -0.5;
local_a8 = ZEXT816(CONCAT44((float) *(int *) ((longlong)
puVar1 + 4),(float)(int)*puVar1));
local_f4 = *(float *) (param_1 + 0x84) + local_104;
fVar3 = (float) (int) *puVar1 - (float) (int) puVar1[1];
fVar4 = (float) *(int *) ((longlong)
puVar1 + 4) - (float)*(int *)((longlong)puVar1 + 0xc);
local_108 = 0;
local_f8 = SQRT(fVar3 * fVar3 + fVar4 * fVar4);

FUN_1408fd190();

(**(code **)(*DAT_140c65680 + 0x40))(DAT_140c65680,1);
uStack208 = local_a8;
local_e8 = 0x3f800000;
uStack224 = 0;
uStack208.
_4_4_ = (undefined4)((ulonglong)
uStack208 >> 0x20);
uStack148 = uStack228;
uStack144 = 0;
uStack140 = 0;
uStack132 = uStack212;
uStack128 = (undefined4)
uStack208;
uStack124 = uStack208._4_4_;
local_98 = local_e8;
FUN_1401b0840(&local_98, &local_e8
);
(**(code **)(*DAT_140c65680 + 0x58))(DAT_140c65680,&local_e8);
if ((ulonglong)*(uint *)(param_1 + 0xc) < *(ulonglong *)(DAT_140c63678 + 0x30)) {
lVar2 = (ulonglong) * (uint * )(param_1 + 0xc) * 0x20 + *(longlong * )(DAT_140c63678 + 0x28);
}
else {
lVar2 = *(longlong * )(DAT_140c63678 + 0x28);
}
if (*(longlong *)(param_1 + 0x88) != 0) {
local_148 = (undefined4 * )
        ((ulonglong)
local_148 & 0xffffffff00000000 |
(ulonglong)
(uint)((DAT_140c63664 - *(float *)(param_1 + 0x90)) * *(float *)(param_1 + 0x94)));
FUN_140103e60(*(longlong
*)(param_1 + 0x88),&local_108,lVar2,0);
}
if (*(longlong *)(param_1 + 0xb8) != 0) {
local_f4 = local_f4 + (param_2[5] - param_2[1]);
if ((ulonglong)*(uint *)(param_1 + 0x10) < *(ulonglong *)(DAT_140c63678 + 0x30)) {
local_138 = (ulonglong) * (uint * )(param_1 + 0x10) * 0x20 + *(longlong * )(DAT_140c63678 + 0x28);
}
else {
local_138 = *(longlong * )(DAT_140c63678 + 0x28);
}
local_128 = 0;
local_130 = 1;
local_140 = *(undefined4 * )(param_1 + 0xc0);
local_148 = &local_108;
(**(code **)(*DAT_140c65680 + 0x118))
(DAT_140c65680,*(longlong *)(param_1 + 0xb8),0,0xffffffffffffffff);
}
(**(code **)(*DAT_140c65680 + 0x48))();
FUN_1407db4f0(local_38
^ (ulonglong)auStack360);
return;
}


void FUN_1401507c0(longlong
param_1,
short *param_2, longlong
param_3,
undefined4 param_4
)

{
longlong *plVar1;
longlong lVar2;

if ((param_2 == (short *)0x0) || (*param_2 == 0)) {
if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
(**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
*(undefined8 *)(param_1 + 0xb8) = 0;
}
}
else {
if (param_3 == 0) {
lVar2 = 0;
}
else {
lVar2 = *(longlong * )(param_3 + 0x60);
}
plVar1 = *(longlong * *)(param_1 + 0xb8);
if (plVar1 != (longlong *)0x0) {
// WARNING: Could not recover jumptable at 0x000140150842. Too many branches
// WARNING: Treating indirect jump as call
(**(code **)(*plVar1 + 0x38))(plVar1,param_2,0xffffffffffffffff);
return;
}
if (lVar2 != 0) {
(**(code **)(*DAT_140c65680 + 0x28))
(DAT_140c65680,lVar2,param_2,0xffffffffffffffff,(longlong **)(param_1 + 0xb8));
*(undefined4 *)(param_1 + 0xc0) =
param_4;
return;
}
}
return;
}


longlong FUN_140150870(longlong
param_1,
undefined8 param_2, longlong
param_3)

{
undefined8 uVar1;
longlong lVar2;

uVar1 = FUN_14018b280(0x18);
*(undefined8 *)(param_1 + 8) =
uVar1;
*(undefined8 *)
uVar1 = uVar1;
*(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
lVar2 = -1;
*(undefined8 *)(param_1 + 0x18) = 0;
*(undefined8 *)(param_1 + 0x20) = 0;
*(undefined8 *)(param_1 + 0x28) = 0;
do {
lVar2 = lVar2 + 1;
} while (*(char *)(param_3 + lVar2) != '\0');
FUN_14001b240(param_1
+ 0x10,param_3,lVar2 + param_3);
*(undefined8 *)(param_1 + 0x38) =
param_2;
*(undefined4 *)(param_1 + 0x30) = 0xffffffff;
return
param_1;
}


void FUN_1401508f0(longlong
param_1)

{
longlong *plVar1;
longlong *plVar2;

plVar2 = (longlong * ) * *(longlong * *)(param_1 + 8);
if (plVar2 != *(longlong **)(param_1 + 8)) {
do {
*(undefined8 *)(plVar2[2] + 0x5a8) = 0;
plVar2 = (longlong * ) * plVar2;
} while (plVar2 != (longlong *)*(longlong *)(param_1 + 8));
}
if (*(longlong *)(param_1 + 0x18) != 0) {
FUN_14018b900(*(longlong
*)(param_1 + 0x18),0);
}
plVar2 = (longlong * ) * *(longlong * *)(param_1 + 8);
if (plVar2 != *(longlong **)(param_1 + 8)) {
do {
plVar1 = (longlong * ) * plVar2;
FUN_14018b900(plVar2,
0);
plVar2 = plVar1;
} while (plVar1 != (longlong *)*(longlong *)(param_1 + 8));
}
*(undefined8 *)*(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 8);
*(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
FUN_14018b900(*(undefined8
*)(param_1 + 8),0);
return;
}


int FUN_140150980(longlong
param_1,
longlong param_2
)

{
undefined8 *puVar1;
undefined8 *puVar2;
longlong *plVar3;
int iVar4;
int iVar5;

puVar1 = *(undefined8 * *)(param_1 + 8);
iVar4 = 0;
puVar2 = (undefined8 * ) * puVar1;
iVar5 = 0;
do {
if (puVar2 == puVar1) {
LAB_1401509c1:
plVar3 = (longlong * )
FUN_14018b280(0x18);
if (plVar3 + 2 != (longlong *)0x0) {
plVar3[2] =
param_2;
}
*
plVar3 = (longlong)
puVar1;
plVar3[1] = puVar1[1];
*(longlong **)puVar1[1] =
plVar3;
puVar1[1] =
plVar3;
*(longlong *)(param_2 + 0x5a8) =
param_1;
for (
puVar1 = (undefined8 * ) * *(undefined8 * *)(param_1 + 8);
puVar1 != *(undefined8 **)(param_1 + 8);
puVar1 = (undefined8 * ) * puVar1
) {
iVar4 = iVar4 + 1;
}
return iVar4 + -1;
}
if (puVar2[2] == param_2) {
if (-1 < iVar5) {
return -1;
}
goto
LAB_1401509c1;
}
puVar2 = (undefined8 * ) * puVar2;
iVar5 = iVar5 + 1;
} while( true );
}


undefined8 FUN_140150a30(longlong
param_1)

{
undefined8 *puVar1;
int iVar2;

if (-1 < *(int *)(param_1 + 0x30)) {
iVar2 = 0;
for (
puVar1 = (undefined8 * ) * *(undefined8 * *)(param_1 + 8);
puVar1 != *(undefined8 **)(param_1 + 8);
puVar1 = (undefined8 * ) * puVar1
) {
if (iVar2 == *(int *)(param_1 + 0x30)) {
return puVar1[2];
}
iVar2 = iVar2 + 1;
}
}
return 0;
}


void FUN_140150a60(longlong
param_1,
int param_2
)

{
longlong *plVar1;
longlong lVar2;
char cVar3;
longlong *plVar4;
longlong *plVar5;
int iVar6;
uint7 uStack47;

*(int *)(param_1 + 0x30) =
param_2;
iVar6 = 0;
plVar5 = (longlong * ) * *(longlong * *)(param_1 + 8);
if (plVar5 != *(longlong **)(param_1 + 8)) {
do {
plVar1 = (longlong * )
plVar5[2];
if ((param_2 != iVar6) && (
cVar3 = FUN_1401301f0(plVar1), cVar3
!= '\0')) {
(**(code **)(*plVar1 + 0x238))(plVar1,0x25,iVar6);
}
*(byte *)((longlong)plVar1 + 0x59c) = *(byte *)((longlong)plVar1 + 0x59c) & 0xbf;
*(byte *)((longlong)plVar1 + 0x59c) =
*(byte *)((longlong)plVar1 + 0x59c) | (param_2 == iVar6) << 6;
if ((plVar1[0xc3] != 0) && ((*(byte *)(plVar1[0xc3] + 0x1c) & 1) != 0)) {
FUN_1400d42f0();

}
if ((param_2 == iVar6) && (plVar1[2] != 0)) {
lVar2 = *(longlong * )(plVar1[4] + 0x78);
plVar4 = (longlong * )
FUN_14018b280(0x20);
if ((longlong **)(plVar4 + 2) != (longlong **)0x0) {
plVar4[2] = (longlong)
plVar1;
plVar4[3] = (ulonglong)uStack47 << 8;
}
*
plVar4 = lVar2;
plVar4[1] = *(longlong *)(lVar2 + 8);
**(longlong ***)(lVar2 + 8) =
plVar4;
*(longlong **)(lVar2 + 8) =
plVar4;
(**(code **)*plVar1)(plVar1);
}
plVar5 = (longlong * ) * plVar5;
iVar6 = iVar6 + 1;
} while (plVar5 != (longlong *)*(longlong *)(param_1 + 8));
}
return;
}


void FUN_140150b90(longlong
param_1,
longlong *param_2
)

{
undefined8 *puVar1;
longlong *plVar2;
longlong lVar3;
char cVar4;
longlong *plVar5;
undefined8 *puVar6;
int iVar7;
uint7 uStack31;

puVar1 = *(undefined8 * *)(param_1 + 8);
iVar7 = 0;
for (
puVar6 = (undefined8 * ) * puVar1;
puVar6 !=
puVar1;
puVar6 = (undefined8 * ) * puVar6
) {
if (param_2 == (longlong *)puVar6[2]) {
*(int *)(param_1 + 0x30) =
iVar7;
}
iVar7 = iVar7 + 1;
}
puVar6 = (undefined8 * ) * puVar1;
if (puVar6 != puVar1) {
do {
plVar2 = (longlong * )
puVar6[2];
if ((param_2 != plVar2) && (
cVar4 = FUN_1401301f0(plVar2), cVar4
!= '\0')) {
(**(code **)(*plVar2 + 0x238))(plVar2,0x25,0);
}
*(byte *)((longlong)plVar2 + 0x59c) = *(byte *)((longlong)plVar2 + 0x59c) & 0xbf;
*(byte *)((longlong)plVar2 + 0x59c) =
*(byte *)((longlong)plVar2 + 0x59c) | (param_2 == plVar2) << 6;
if ((plVar2[0xc3] != 0) && ((*(byte *)(plVar2[0xc3] + 0x1c) & 1) != 0)) {
FUN_1400d42f0();

}
if ((param_2 == plVar2) && (plVar2[2] != 0)) {
lVar3 = *(longlong * )(plVar2[4] + 0x78);
plVar5 = (longlong * )
FUN_14018b280(0x20);
if ((longlong **)(plVar5 + 2) != (longlong **)0x0) {
plVar5[2] = (longlong)
plVar2;
plVar5[3] = (ulonglong)uStack31 << 8;
}
*
plVar5 = lVar3;
plVar5[1] = *(longlong *)(lVar3 + 8);
**(longlong ***)(lVar3 + 8) =
plVar5;
*(longlong **)(lVar3 + 8) =
plVar5;
(**(code **)*plVar2)(plVar2);
}
puVar6 = (undefined8 * ) * puVar6;
} while (puVar6 != *(undefined8 **)(param_1 + 8));
}
return;
}


void FUN_140150ce0(longlong
param_1)

{
longlong lVar1;
longlong lVar2;
longlong lVar3;

lVar3 = *(longlong * )(*(longlong * )(param_1 + 8) + 0x10);
if (lVar3 != *(longlong *)(param_1 + 8)) {
do {
lVar2 = *(longlong * )(lVar3 + 0x40);
if (lVar2 != 0) {
FUN_1401508f0(lVar2);
FUN_14018b900(lVar2,
0);
}
lVar2 = *(longlong * )(lVar3 + 0x18);
if (lVar2 == 0) {
lVar2 = *(longlong * )(lVar3 + 8);
if (lVar3 == *(longlong *)(lVar2 + 0x18)) {
do {
lVar3 = lVar2;
lVar2 = *(longlong * )(lVar3 + 8);
} while (lVar3 == *(longlong *)(lVar2 + 0x18));
}
if (*(longlong *)(lVar3 + 0x18) != lVar2) {
lVar3 = lVar2;
}
}
else {
for (
lVar1 = *(longlong * )(lVar2 + 0x10);
lVar3 = lVar2, lVar1
!= 0;
lVar1 = *(longlong * )(lVar1 + 0x10)
) {
lVar2 = lVar1;
}
}
} while (lVar3 != *(longlong *)(param_1 + 8));
}
if (*(longlong *)(param_1 + 0x10) != 0) {
lVar3 = *(longlong * )(*(longlong * )(param_1 + 8) + 8);
while (lVar3 != 0) {
FUN_140044ca0(param_1, *(undefined8
*)(lVar3 + 0x18));
lVar2 = *(longlong * )(lVar3 + 0x10);
if (*(longlong *)(lVar3 + 0x28) != 0) {
FUN_14018b900(*(longlong
*)(lVar3 + 0x28),0);
}
FUN_14018b900(lVar3,
0);
lVar3 = lVar2;
}
*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) = *(longlong *)(param_1 + 8);
*(undefined8 *)(*(longlong *)(param_1 + 8) + 8) = 0;
*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = *(longlong *)(param_1 + 8);
*(undefined8 *)(param_1 + 0x10) = 0;
}
FUN_14018b900(*(undefined8
*)(param_1 + 8),0);
return;
}


longlong FUN_140150df0(longlong
param_1,
longlong param_2
)

{
char *pcVar1;
uint uVar2;
longlong lVar3;
longlong lVar4;
longlong lVar5;
longlong lVar6;
longlong lVar7;
longlong *plVar8;
undefined *puVar9;
longlong lVar10;
longlong lVar11;
longlong local_res8;
longlong local_res10;
longlong local_res18;
longlong local_res20;
undefined local_70[8];
longlong local_68;
undefined8 local_60;
undefined8 local_58;
undefined8 local_50;

local_res8 = param_1;
lVar3 = FUN_14018b280(0x40);
if (lVar3 == 0) {
local_res10 = 0;
}
else {
local_res10 = FUN_140150870(lVar3, *(undefined8 * )(param_1 + 0x20), param_2);
}
lVar4 = 0;
lVar10 = -1;
lVar3 = -1;
do {
pcVar1 = (char *) (param_2 + 1 + lVar3);
lVar3 = lVar3 + 1;
} while (*pcVar1 != '\0');
lVar5 = (lVar3 + param_2) - param_2;
lVar6 = lVar5 + 1;
if (lVar6 != -1) {
lVar4 = FUN_14018b280(lVar6, 0);
}
FUN_1407db590(lVar4, param_2, lVar5
);
puVar9 = (undefined * )(((lVar3 + param_2) - param_2) + lVar4);
if (puVar9 != (undefined *)0x0) {
*
puVar9 = 0;
}
lVar3 = *(longlong * )(param_1 + 8);
lVar6 = lVar3;
if (*(longlong *)(lVar3 + 8) != 0) {
lVar11 = (longlong)
puVar9 -
lVar4;
local_res18 = lVar11;
lVar5 = *(longlong * )(lVar3 + 8);
do {
lVar7 = *(longlong * )(lVar5 + 0x30) - *(longlong * )(lVar5 + 0x28);
local_res20 = lVar7;
plVar8 = &local_res18;
if (lVar7 <= lVar11) {
plVar8 = &local_res20;
}
uVar2 = FUN_1407e6af0(*(longlong * )(lVar5 + 0x28), lVar4, *plVar8);
if (uVar2 == 0) {
if (lVar11 <= lVar7) {
uVar2 = (uint)(lVar11 < lVar7);
goto
LAB_140150f06;
}
LAB_140150f11:
lVar7 = *(longlong * )(lVar5 + 0x18);
}
else {
LAB_140150f06:
if ((int)uVar2 < 0) goto
LAB_140150f11;
lVar7 = *(longlong * )(lVar5 + 0x10);
lVar6 = lVar5;
}
lVar5 = lVar7;
param_1 = local_res8;
} while (lVar7 != 0);
}
if (lVar6 != lVar3) {
lVar3 = *(longlong * )(lVar6 + 0x30) - *(longlong * )(lVar6 + 0x28);
lVar5 = (longlong)
puVar9 -
lVar4;
local_res8 = lVar3;
local_res18 = lVar5;
plVar8 = &local_res8;
if (lVar5 <= lVar3) {
plVar8 = &local_res18;
}
uVar2 = FUN_1407e6af0(lVar4, *(longlong * )(lVar6 + 0x28), *plVar8);
if (uVar2 == 0) {
if (lVar5<lVar3) goto
LAB_140150f82;
uVar2 = (uint)(lVar3 < lVar5);
}
if (-1 < (int)uVar2) goto
LAB_140150fea;
}
LAB_140150f82:
local_68 = 0;
local_60 = 0;
local_58 = 0;
FUN_14001b240(local_70, lVar4, puVar9
);
local_50 = 0;
local_res8 = lVar6;
FUN_1400ee370(param_1, &local_res18, &local_res8, local_70
);
lVar6 = local_res18;
if (local_68 != 0) {
FUN_14018b900(local_68,
0);
}
LAB_140150fea:
lVar3 = local_res10;
lVar5 = 0;
*(longlong *)(lVar6 + 0x40) =
local_res10;
if (lVar4 != 0) {
FUN_14018b900(lVar4,
0);
}
do {
pcVar1 = (char *) (param_2 + 1 + lVar10);
lVar10 = lVar10 + 1;
} while (*pcVar1 != '\0');
lVar6 = (lVar10 + param_2) - param_2;
lVar4 = lVar6 + 1;
if (lVar4 != -1) {
lVar5 = FUN_14018b280(lVar4, 0);
}
FUN_1407db590(lVar5, param_2, lVar6
);
puVar9 = (undefined * )((lVar5 - param_2) + lVar10 + param_2);
if (puVar9 != (undefined *)0x0) {
*
puVar9 = 0;
}
lVar10 = *(longlong * )(*(longlong * )(param_1 + 8) + 8);
if (lVar10 != 0) {
lVar4 = (longlong)
puVar9 -
lVar5;
local_res8 = lVar4;
do {
lVar6 = *(longlong * )(lVar10 + 0x30) - *(longlong * )(lVar10 + 0x28);
local_res10 = lVar6;
plVar8 = &local_res8;
if (lVar6 <= lVar4) {
plVar8 = &local_res10;
}
uVar2 = FUN_1407e6af0(*(longlong * )(lVar10 + 0x28), lVar5, *plVar8);
if (uVar2 == 0) {
if (lVar4 <= lVar6) {
uVar2 = (uint)(lVar4 < lVar6);
goto
LAB_1401510c6;
}
LAB_1401510ce:
lVar10 = *(longlong * )(lVar10 + 0x18);
}
else {
LAB_1401510c6:
if ((int)uVar2 < 0) goto
LAB_1401510ce;
lVar10 = *(longlong * )(lVar10 + 0x10);
}
} while (lVar10 != 0);
}
if (lVar5 != 0) {
FUN_14018b900(lVar5,
0);
}
return
lVar3;
}


undefined8 FUN_140151100(longlong
param_1,
longlong param_2
)

{
undefined *puVar1;
uint uVar2;
longlong lVar3;
longlong lVar4;
undefined8 uVar5;
longlong lVar6;
longlong lVar7;
longlong lVar8;
longlong *plVar9;
longlong local_res8;
longlong local_res10;
longlong local_res18;
longlong local_res20;

lVar4 = 0;
lVar3 = -1;
do {
lVar7 = lVar3 + 1;
lVar3 = lVar3 + 1;
} while (*(char *)(lVar7 + param_2) != '\0');
lVar6 = (lVar3 + param_2) - param_2;
lVar7 = lVar6 + 1;
local_res8 = param_1;
if (lVar7 != -1) {
lVar4 = FUN_14018b280(lVar7, 0);
}
FUN_1407db590(lVar4, param_2, lVar6
);
puVar1 = (undefined * )(((lVar3 + param_2) - param_2) + lVar4);
if (puVar1 != (undefined *)0x0) {
*
puVar1 = 0;
}
lVar3 = *(longlong * )(param_1 + 8);
local_res20 = lVar3;
if (*(longlong *)(lVar3 + 8) != 0) {
lVar6 = (longlong)
puVar1 -
lVar4;
local_res10 = lVar6;
lVar7 = *(longlong * )(lVar3 + 8);
do {
lVar8 = *(longlong * )(lVar7 + 0x30) - *(longlong * )(lVar7 + 0x28);
local_res18 = lVar8;
plVar9 = &local_res10;
if (lVar8 <= lVar6) {
plVar9 = &local_res18;
}
uVar2 = FUN_1407e6af0(*(longlong * )(lVar7 + 0x28), lVar4, *plVar9);
if (uVar2 == 0) {
if (lVar6 <= lVar8) {
uVar2 = (uint)(lVar6 < lVar8);
goto
LAB_1401511d3;
}
LAB_1401511de:
lVar8 = *(longlong * )(lVar7 + 0x18);
}
else {
LAB_1401511d3:
if ((int)uVar2 < 0) goto
LAB_1401511de;
lVar8 = *(longlong * )(lVar7 + 0x10);
lVar3 = lVar7;
}
lVar7 = lVar8;
param_1 = local_res8;
} while (lVar8 != 0);
}
lVar7 = local_res20;
if (lVar3 != local_res20) {
lVar8 = (longlong)
puVar1 -
lVar4;
lVar6 = *(longlong * )(lVar3 + 0x30) - *(longlong * )(lVar3 + 0x28);
local_res10 = lVar8;
local_res8 = lVar6;
plVar9 = &local_res8;
if (lVar8 <= lVar6) {
plVar9 = &local_res10;
}
uVar2 = FUN_1407e6af0(lVar4, *(longlong * )(lVar3 + 0x28), *plVar9);
if (uVar2 == 0) {
if (lVar8<lVar6) goto
LAB_140151246;
uVar2 = (uint)(lVar6 < lVar8);
}
local_res8 = lVar3;
if (-1 < (int)uVar2) goto
LAB_14015124b;
}
LAB_140151246:
local_res8 = lVar7;
LAB_14015124b:
lVar3 = local_res8;
if (lVar4 != 0) {
FUN_14018b900(lVar4,
0);
}
if (lVar3 == *(longlong *)(param_1 + 8)) {
uVar5 = FUN_140150df0(param_1, param_2);
}
else {
uVar5 = *(undefined8 * )(lVar3 + 0x40);
}
return
uVar5;
}


undefined8 FUN_140151290(longlong
param_1,
longlong param_2
)

{
undefined *puVar1;
char *pcVar2;
uint uVar3;
longlong lVar4;
longlong lVar5;
undefined8 uVar6;
longlong lVar7;
longlong lVar8;
longlong lVar9;
longlong *plVar10;
longlong lVar11;
longlong local_res10;
longlong local_res18;

lVar5 = 0;
lVar4 = -1;
do {
pcVar2 = (char *) (param_2 + 1 + lVar4);
lVar4 = lVar4 + 1;
} while (*pcVar2 != '\0');
lVar8 = (lVar4 + param_2) - param_2;
lVar11 = lVar8 + 1;
if (lVar11 != -1) {
lVar5 = FUN_14018b280(lVar11, 0);
}
FUN_1407db590(lVar5, param_2, lVar8
);
puVar1 = (undefined * )(((lVar4 + param_2) - param_2) + lVar5);
if (puVar1 != (undefined *)0x0) {
*
puVar1 = 0;
}
lVar4 = *(longlong * )(param_1 + 8);
lVar11 = lVar4;
if (*(longlong *)(lVar4 + 8) != 0) {
lVar7 = (longlong)
puVar1 -
lVar5;
local_res10 = lVar7;
lVar8 = *(longlong * )(lVar4 + 8);
do {
lVar9 = *(longlong * )(lVar8 + 0x30) - *(longlong * )(lVar8 + 0x28);
local_res18 = lVar9;
plVar10 = &local_res10;
if (lVar9 <= lVar7) {
plVar10 = &local_res18;
}
uVar3 = FUN_1407e6af0(*(longlong * )(lVar8 + 0x28), lVar5, *plVar10);
if (uVar3 == 0) {
if (lVar7 <= lVar9) {
uVar3 = (uint)(lVar7 < lVar9);
goto
LAB_14015136d;
}
LAB_140151378:
lVar9 = *(longlong * )(lVar8 + 0x18);
}
else {
LAB_14015136d:
if ((int)uVar3 < 0) goto
LAB_140151378;
lVar9 = *(longlong * )(lVar8 + 0x10);
lVar11 = lVar8;
}
lVar8 = lVar9;
} while (lVar9 != 0);
}
if (lVar11 != lVar4) {
lVar7 = (longlong)
puVar1 -
lVar5;
lVar8 = *(longlong * )(lVar11 + 0x30) - *(longlong * )(lVar11 + 0x28);
local_res18 = lVar7;
local_res10 = lVar8;
plVar10 = &local_res10;
if (lVar7 <= lVar8) {
plVar10 = &local_res18;
}
uVar3 = FUN_1407e6af0(lVar5, *(longlong * )(lVar11 + 0x28), *plVar10);
if (uVar3 == 0) {
if (lVar7<lVar8) goto
LAB_1401513d3;
uVar3 = (uint)(lVar8 < lVar7);
}
local_res10 = lVar11;
if (-1 < (int)uVar3) goto
LAB_1401513d8;
}
LAB_1401513d3:
local_res10 = lVar4;
LAB_1401513d8:
lVar4 = local_res10;
if (lVar5 != 0) {
FUN_14018b900(lVar5,
0);
}
if (lVar4 == *(longlong *)(param_1 + 8)) {
uVar6 = 0;
}
else {
uVar6 = *(undefined8 * )(lVar4 + 0x40);
}
return
uVar6;
}


longlong *FUN_140151420(void) {
    longlong * *pplVar1;
    longlong lVar2;
    longlong * *pplVar3;
    longlong * plVar4;

    lVar2 = FUN_140151290();
    if (lVar2 == 0) {
        return (longlong * )
        0x0;
    }
    plVar4 = (longlong * )
    0x0;
    if (-1 < *(int *) (lVar2 + 0x30)) {
        pplVar1 = *(longlong * **)(lVar2 + 8);
        pplVar3 = (longlong * *) * pplVar1;
        if (pplVar3 != pplVar1) {
            while ((int) plVar4 != *(int *) (lVar2 + 0x30)) {
                pplVar3 = (longlong * *) * pplVar3;
                plVar4 = (longlong * )(ulonglong)((int) plVar4 + 1);
                if (pplVar3 == pplVar1) {
                    return (longlong * )
                    0x0;
                }
            }
            plVar4 = pplVar3[2];
        }
    }
    return plVar4;
}


undefined8 FUN_140151470(longlong
param_1,
char *param_2
)

{
char *pcVar1;
char cVar2;
longlong lVar3;
undefined8 *puVar4;
undefined8 *puVar5;
undefined8 uVar6;
int iVar7;
int iVar8;
undefined8 *puVar9;
longlong lVar10;
longlong lVar11;
char *pcVar12;
longlong local_res8;

puVar5 = (undefined8 * )
0x0;
if (param_2 != (char *)0x0) {
cVar2 = *param_2;
puVar9 = puVar5;
while (cVar2 != '\0') {
puVar9 = (undefined8 * )((longlong)
puVar9 + 1);
cVar2 = *(char *) ((longlong)
puVar9 + (longlong)param_2);
}
puVar4 = (undefined8 * )
FUN_14018b280((char *)((longlong)puVar9 + 0x11),0);
if (puVar4 != (undefined8 *)0x0) {
puVar4[1] =
puVar9;
*
puVar4 = &PTR_LAB_140b55060;
puVar5 = puVar4;
}
puVar5 = puVar5 + 2;
FUN_1407db590(puVar5, param_2, puVar9
);
*(char *)((longlong)puVar9 + (longlong)puVar5) = '\0';
}
lVar3 = *(longlong * )(param_1 + 0x50);
local_res8 = lVar3;
if (*(longlong *)(lVar3 + 8) != 0) {
lVar10 = *(longlong * )(lVar3 + 8);
do {
iVar8 = (int) **(char **) (lVar10 + 0x20);
iVar7 = iVar8 - *(char *) puVar5;
if (iVar7 == 0) {
puVar9 = puVar5;
do {
if ((char)iVar8 == '\0') goto
LAB_140151520;
iVar8 = (int) (*(char **) (lVar10 + 0x20) + (1 - (longlong)
puVar5))[(longlong)puVar9];
pcVar12 = (char *) ((longlong)
puVar9 + 1);
puVar9 = (undefined8 * )((longlong)
puVar9 + 1);
iVar7 = iVar8 - *pcVar12;
} while (iVar7 == 0);
}
if (iVar7 < 0) {
lVar11 = *(longlong * )(lVar10 + 0x18);
}
else {
LAB_140151520:
lVar11 = *(longlong * )(lVar10 + 0x10);
local_res8 = lVar10;
}
lVar10 = lVar11;
} while (lVar11 != 0);
}
if (local_res8 != lVar3) {
pcVar12 = *(char **) (local_res8 + 0x20);
iVar7 = (int) *(char *) puVar5;
iVar8 = iVar7 - *pcVar12;
puVar9 = puVar5;
while (iVar8 == 0) {
if ((char)iVar7 == '\0') goto
LAB_14015157a;
iVar7 = (int) *(char *) ((longlong)
puVar9 + 1);
pcVar1 = pcVar12 + 1;
puVar9 = (undefined8 * )((longlong)
puVar9 + 1);
pcVar12 = pcVar12 + 1;
iVar8 = iVar7 - *pcVar1;
}
if (-1 < iVar8) goto
LAB_14015157a;
}
local_res8 = lVar3;
LAB_14015157a:
if (puVar5 != (undefined8 *)0x0) {
(**(code **)(puVar5[-2] + 8))(puVar5 + -2);
}
if (local_res8 == *(longlong *)(param_1 + 0x50)) {
uVar6 = 0;
}
else {
uVar6 = *(undefined8 * )(local_res8 + 0x28);
}
return
uVar6;
}


undefined8 *
        FUN_1401515c0(undefined8 * param_1, undefined8
param_2,
short *param_3, undefined8
param_4,
undefined8 param_5
)

{
short sVar1;
longlong lVar2;
undefined *puVar3;

*
param_1 = param_2;
lVar2 = 0;
param_1[2] = 0;
param_1[3] = 0;
param_1[4] = 0;
sVar1 = *param_3;
while (sVar1 != 0) {
lVar2 = lVar2 + 1;
sVar1 = param_3[lVar2];
}
FUN_14001c1b0(param_1
+ 1,param_3,param_3 + lVar2);
FUN_1400fa6d0(param_1
+ 5,param_5);
puVar3 = (undefined * )
FUN_14018b280(0x30);
param_1[0xb] = 0;
param_1[10] =
puVar3;
*
puVar3 = 0;
*(undefined8 *)(param_1[10] + 8) = 0;
*(undefined8 *)(param_1[10] + 0x10) = param_1[10];
*(undefined8 *)(param_1[10] + 0x18) = param_1[10];
param_1[0xd] =
param_4;
return
param_1;
}


void FUN_140151660(longlong
param_1)

{
if (*(longlong *)(param_1 + 0x58) != 0) {
FUN_140151d90(param_1
+ 0x48,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 8));
*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x10) = *(longlong *)(param_1 + 0x50);
*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 8) = 0;
*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) = *(longlong *)(param_1 + 0x50);
*(undefined8 *)(param_1 + 0x58) = 0;
}
FUN_14018b900(*(undefined8
*)(param_1 + 0x50),0);
*(undefined ***)(param_1 + 0x28) = &
PTR_FUN_140b56a08;
if (*(longlong *)(param_1 + 0x38) != 0) {
FUN_1400579e0();

}
if (*(longlong *)(param_1 + 0x10) != 0) {
FUN_14018b900(*(longlong
*)(param_1 + 0x10),0);
}
return;
}


void FUN_1401516f0(longlong * param_1, undefined8 * param_2, undefined8
param_3,
undefined8 param_4
)

{
undefined8 local_res18;
undefined8 local_res20;

local_res18 = param_3;
local_res20 = param_4;
FUN_1400f3040(*param_1
+ 0x180,param_1[0xd],*(undefined4 *)(param_1 + 6),*param_2,param_2[1],
&local_res18);
return;
}


void FUN_140151740(longlong * param_1, undefined8
param_2,
longlong param_3, undefined8
param_4,
undefined8 param_5, undefined8
param_6)

{
longlong lVar1;
undefined8 *puVar2;

lVar1 = FUN_140151470();
if (lVar1 != 0) {
if (*(longlong *)(param_3 + 0x120) == 0) {
puVar2 = (undefined8 * )
FUN_14018b280(0x20);
if (puVar2 != (undefined8 *)0x0) {
puVar2[2] = 0;
*(undefined4 *)(puVar2 + 3) = 1;
*
puVar2 = &PTR_FUN_140b569f0;
*(undefined4 *)(puVar2 + 1) = 0xfffffffe;
}
*(undefined8 **)(param_3 + 0x120) =
puVar2;
}
FUN_1400f3790(*param_1
+ 0x180,param_1[0xd],*(undefined4 *)(*(longlong *)(param_3 + 0x120) + 8),
lVar1,param_3,param_4,param_5,param_6);
}
return;
}


void FUN_140151840(undefined8 * param_1) {
    *param_1 = &PTR_LAB_140b5c6b0;
    FUN_1401518a0();
    if (param_1[4] != 0) {
        FUN_140044ca0(param_1 + 2, *(undefined8 * )(param_1[3] + 8));
        *(undefined8 * )(param_1[3] + 0x10) = param_1[3];
        *(undefined8 * )(param_1[3] + 8) = 0;
        *(undefined8 * )(param_1[3] + 0x18) = param_1[3];
        param_1[4] = 0;
    }
    FUN_14018b900(param_1[3], 0);
    return;
}


void FUN_1401518a0(longlong
param_1)

{
longlong lVar1;
longlong lVar2;
longlong lVar3;

lVar3 = *(longlong * )(*(longlong * )(param_1 + 0x18) + 0x10);
if (lVar3 != *(longlong *)(param_1 + 0x18)) {
do {
lVar2 = *(longlong * )(lVar3 + 0x40);
if (lVar2 != 0) {
FUN_140151660(lVar2);
FUN_14018b900(lVar2,
0);
}
lVar2 = *(longlong * )(lVar3 + 0x18);
if (lVar2 == 0) {
lVar2 = *(longlong * )(lVar3 + 8);
if (lVar3 == *(longlong *)(lVar2 + 0x18)) {
do {
lVar3 = lVar2;
lVar2 = *(longlong * )(lVar3 + 8);
} while (lVar3 == *(longlong *)(lVar2 + 0x18));
}
if (*(longlong *)(lVar3 + 0x18) != lVar2) {
lVar3 = lVar2;
}
}
else {
for (
lVar1 = *(longlong * )(lVar2 + 0x10);
lVar3 = lVar2, lVar1
!= 0;
lVar1 = *(longlong * )(lVar1 + 0x10)
) {
lVar2 = lVar1;
}
}
} while (lVar3 != *(longlong *)(param_1 + 0x18));
}
if (*(longlong *)(param_1 + 0x20) != 0) {
lVar3 = *(longlong * )(*(longlong * )(param_1 + 0x18) + 8);
while (lVar3 != 0) {
FUN_140044ca0(param_1
+ 0x10,*(undefined8 *)(lVar3 + 0x18));
lVar2 = *(longlong * )(lVar3 + 0x10);
if (*(longlong *)(lVar3 + 0x28) != 0) {
FUN_14018b900(*(longlong
*)(lVar3 + 0x28),0);
}
FUN_14018b900(lVar3,
0);
lVar3 = lVar2;
}
*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10) = *(longlong *)(param_1 + 0x18);
*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8) = 0;
*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18) = *(longlong *)(param_1 + 0x18);
*(undefined8 *)(param_1 + 0x20) = 0;
}
return;
}


undefined8
        FUN_1401519b0(longlong
param_1,
short *param_2, longlong
param_3,
longlong *param_4, undefined8
*param_5
)

{
ulonglong uVar1;
undefined2 *puVar2;
short sVar3;
longlong lVar4;
int iVar5;
longlong lVar6;
longlong lVar7;
undefined8 uVar8;
undefined8 *puVar9;
longlong local_res10;
undefined local_58[8];
longlong local_50;
undefined2 *local_48;
longlong local_40;

if (*param_2 == 0) {
return 0;
}
if ((((*(longlong *)(param_1 + 8) != 0) && (param_3 != 0)) &&
(
iVar5 = (**(code * *)(*param_4 + 8))(param_4), iVar5
!= 0)) && (param_5 != (undefined8 *)0x0))
{
lVar7 = 0;
sVar3 = *param_2;
lVar6 = lVar7;
while (sVar3 != 0) {
lVar6 = lVar6 + 1;
sVar3 = param_2[lVar6];
}
lVar6 = lVar6 * 2 >> 1;
uVar1 = lVar6 + 1;
if (uVar1 < 0x7fffffffffffffff) {
lVar7 = FUN_14018b280(uVar1 * 2, 0);
}
lVar6 = lVar6 * 2;
FUN_1407db590(lVar7, param_2, lVar6
);
puVar2 = (undefined2 * )(lVar6 + lVar7);
if (puVar2 != (undefined2 *)0x0) {
*
puVar2 = 0;
}
lVar6 = *(longlong * )(param_1 + 0x18);
local_res10 = lVar6;
lVar4 = *(longlong * )(lVar6 + 8);
while (lVar4 != 0) {
iVar5 = FUN_1400454d0(*(undefined8 * )(lVar4 + 0x28), *(undefined8 * )(lVar4 + 0x30), lVar7, puVar2
);
if (iVar5 < 0) {
lVar4 = *(longlong * )(lVar4 + 0x18);
}
else {
local_res10 = lVar4;
lVar4 = *(longlong * )(lVar4 + 0x10);
}
}
if ((local_res10 == lVar6) ||
(
iVar5 = FUN_1400454d0(lVar7, puVar2, *(undefined8 * )(local_res10 + 0x28),
                      *(undefined8 * )(local_res10 + 0x30)), iVar5<
0)) {
local_res10 = lVar6;
}
if (lVar7 != 0) {
FUN_14018b900(lVar7,
0);
}
if (local_res10 == *(longlong *)(param_1 + 0x18)) {
lVar6 = FUN_14018b280(0x70);
if (lVar6 == 0) {
uVar8 = 0;
}
else {
uVar8 = FUN_1401515c0(lVar6, *(undefined8 * )(param_1 + 8), param_2, param_3, param_4);
}
lVar6 = 0;
sVar3 = *param_2;
*
param_5 = uVar8;
local_50 = 0;
local_40 = 0;
while (sVar3 != 0) {
lVar6 = lVar6 + 1;
sVar3 = param_2[lVar6];
}
lVar6 = lVar6 * 2 >> 1;
uVar1 = lVar6 + 1;
if (uVar1 < 0x7fffffffffffffff) {
lVar7 = uVar1 * 2;
local_50 = FUN_14018b280(lVar7, 0);
local_40 = lVar7 + local_50;
}
lVar7 = local_50;
lVar6 = lVar6 * 2;
FUN_1407db590(local_50, param_2, lVar6
);
local_48 = (undefined2 * )(lVar6 + lVar7);
if (local_48 != (undefined2 *)0x0) {
*
local_48 = 0;
}
uVar8 = *param_5;
puVar9 = (undefined8 * )
FUN_1400eda60(param_1
+ 0x10,local_58);
*
puVar9 = uVar8;
if (lVar7 != 0) {
FUN_14018b900(lVar7,
0);
}
uVar8 = 1;
}
else {
uVar8 = 0;
}
return
uVar8;
}
return 0;
}


undefined8 FUN_140151c50(longlong
param_1,
short *param_2
)

{
ulonglong uVar1;
undefined2 *puVar2;
short sVar3;
longlong lVar4;
int iVar5;
longlong lVar6;
longlong lVar7;
longlong local_res10;

if (param_2 == (short *)0x0) {
return 0;
}
lVar7 = 0;
sVar3 = *param_2;
lVar6 = lVar7;
while (sVar3 != 0) {
lVar6 = lVar6 + 1;
sVar3 = param_2[lVar6];
}
lVar6 = lVar6 * 2 >> 1;
uVar1 = lVar6 + 1;
if (uVar1 < 0x7fffffffffffffff) {
lVar7 = FUN_14018b280(uVar1 * 2, 0);
}
lVar6 = lVar6 * 2;
FUN_1407db590(lVar7, param_2, lVar6
);
puVar2 = (undefined2 * )(lVar6 + lVar7);
if (puVar2 != (undefined2 *)0x0) {
*
puVar2 = 0;
}
lVar6 = *(longlong * )(param_1 + 0x18);
local_res10 = lVar6;
lVar4 = *(longlong * )(lVar6 + 8);
while (lVar4 != 0) {
iVar5 = FUN_1400454d0(*(undefined8 * )(lVar4 + 0x28), *(undefined8 * )(lVar4 + 0x30), lVar7, puVar2);
if (iVar5 < 0) {
lVar4 = *(longlong * )(lVar4 + 0x18);
}
else {
local_res10 = lVar4;
lVar4 = *(longlong * )(lVar4 + 0x10);
}
}
if ((local_res10 == lVar6) ||
(
iVar5 = FUN_1400454d0(lVar7, puVar2, *(undefined8 * )(local_res10 + 0x28),
                      *(undefined8 * )(local_res10 + 0x30)), iVar5<
0)) {
local_res10 = lVar6;
}
if (lVar7 != 0) {
FUN_14018b900(lVar7,
0);
}
if (local_res10 != *(longlong *)(param_1 + 0x18)) {
return *(undefined8 *)(local_res10 + 0x40);
}
return 0;
}


void FUN_140151d90(undefined8
param_1,
longlong param_2
)

{
longlong lVar1;
longlong lVar2;

if (param_2 != 0) {
do {
FUN_140151d90(param_1, *(undefined8
*)(param_2 + 0x18));
lVar1 = *(longlong * )(param_2 + 0x28);
lVar2 = *(longlong * )(param_2 + 0x10);
if (lVar1 != 0) {
(**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
}
lVar1 = *(longlong * )(param_2 + 0x20);
if (lVar1 != 0) {
(**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
}
FUN_14018b900(param_2,
0);
param_2 = lVar2;
} while (lVar2 != 0);
}
return;
}


undefined8 *FUN_140151e30(undefined8 * param_1, ulonglong
param_2)

{
*
param_1 = &PTR_FUN_140b5c6e0;
if ((param_2 & 1) != 0) {
FUN_14018b900(param_1,
0);
}
return
param_1;
}


undefined8 *FUN_140151e60(undefined8 * param_1, undefined8
param_2,
undefined8 param_3
)

{
*
param_1 = &PTR_LAB_140b55048;
*(undefined4 *)(param_1 + 1) = 1;
param_1[6] =
param_3;
*(undefined4 *)(param_1 + 4) = 0x4f800000;
*(undefined4 *)((longlong)param_1 + 0x24) = 0x3f800000;
param_1[5] =
param_2;
*
param_1 = &PTR_LAB_140b5c6b8;
param_1[2] = 0;
param_1[3] = 0;
param_1[8] = &
PTR_FUN_140b5c6e0;
*(undefined4 *)(param_1 + 9) = 0;
*(undefined4 *)(param_1 + 10) = 0x3f800000;
*(undefined4 *)((longlong)param_1 + 0x54) = 0x3f800000;
*(undefined4 *)(param_1 + 0xb) = 0x3f800000;
*(undefined4 *)((longlong)param_1 + 0x5c) = 0x3f800000;
*(undefined (*) [16])(param_1 + 0xc) = ZEXT816(0);
*(undefined4 *)(param_1 + 0xe) = 0x3f800000;
*(undefined4 *)((longlong)param_1 + 0x74) = 0x3f800000;
*(undefined4 *)(param_1 + 0xf) = 0x3f800000;
*(undefined4 *)((longlong)param_1 + 0x7c) = 0x3f800000;
if ((undefined8 *)param_1[6] != (undefined8 *)0x0) {
(***(code ***)(undefined8 *)param_1[6])();
}
return
param_1;
}


undefined8 *FUN_140151ef0(undefined8 * param_1, ulonglong
param_2)

{
*
param_1 = &PTR_LAB_140b5c6b8;
if ((longlong *)param_1[6] != (longlong *)0x0) {
(**(code **)(*(longlong *)param_1[6] + 8))();
param_1[6] = 0;
}
param_1[8] = &
PTR_FUN_140b5c6e0;
*
param_1 = &PTR_LAB_140b55048;
if ((param_2 & 1) != 0) {
FUN_14018b900(param_1,
0);
}
return
param_1;
}


void FUN_140151f60(longlong
param_1)

{
if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
(**(code **)(**(longlong **)(param_1 + 0x30) + 8))();
*(undefined8 *)(param_1 + 0x30) = 0;
}
return;
}


void FUN_140151f90(undefined8
param_1,
longlong param_2
)

{
if (*(longlong *)(param_2 + 0x30) != 0) {
*(undefined4 *)(param_2 + 0x10) = 1;
FUN_140151fe0(param_1,
0);
FUN_1400d4070(*(undefined8
*)(param_2 + 0x30),0x4c,*(undefined8 *)(param_2 + 0x30),
&DAT_1409db214,*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x10));
}
return;
}


void FUN_140151fe0(undefined8
param_1,
float param_2, longlong
param_3)

{
int iVar1;
float fVar2;

if (*(longlong *)(param_3 + 0x30) != 0) {
fVar2 = 0.0;
if (*(int *)(param_3 + 0x10) != 0) {
param_2 = param_2 + *(float *) (param_3 + 0x18);
*(float *)(param_3 + 0x18) =
param_2;
*(float *)(param_3 + 0x14) = param_2 * *(float *)(param_3 + 0x24);
}
if (*(float *)(param_3 + 0x1c) < *(float *)(param_3 + 0x14)) {
fVar2 = *(float *) (param_3 + 0x14) - *(float *) (param_3 + 0x1c);
}
if (fVar2 != *(float *)(param_3 + 0x20)) {
*(float *)(param_3 + 0x20) =
fVar2;
(**(code **)(*(longlong *)(param_3 + 0x40) + 8))(param_3 + 0x40);
iVar1 = FUN_1401885a0(*(undefined8 * )(param_3 + 0x28), param_3 + 0x40);
if (iVar1 != 0) {
FUN_1400d4070(*(undefined8
*)(param_3 + 0x30),0x4d,*(undefined8 *)(param_3 + 0x30),
&DAT_1409db1c4,*(undefined8 *)(*(longlong *)(param_3 + 0x28) + 0x10));
}
}
}
return;
}


undefined8 FUN_1401520c0(undefined8
param_1,
ulonglong param_2
)

{
FUN_140152100();

if ((param_2 & 1) != 0) {
FUN_14018b900(param_1,
0);
}
return
param_1;
}


void FUN_140152100(undefined8 * param_1) {
    *param_1 = &PTR_FUN_140b5c6f8;
    FUN_140152160();
    if (param_1[4] != 0) {
        FUN_140044ca0(param_1 + 2, *(undefined8 * )(param_1[3] + 8));
        *(undefined8 * )(param_1[3] + 0x10) = param_1[3];
        *(undefined8 * )(param_1[3] + 8) = 0;
        *(undefined8 * )(param_1[3] + 0x18) = param_1[3];
        param_1[4] = 0;
    }
    FUN_14018b900(param_1[3], 0);
    return;
}


void FUN_140152160(longlong
param_1)

{
undefined8 *puVar1;
longlong lVar2;
longlong lVar3;
longlong lVar4;

lVar4 = *(longlong * )(*(longlong * )(param_1 + 0x18) + 0x10);
if (lVar4 != *(longlong *)(param_1 + 0x18)) {
do {
puVar1 = *(undefined8 * *)(lVar4 + 0x40);
if (puVar1 != (undefined8 *)0x0) {
(**(code **)*puVar1)(puVar1,1);
}
lVar3 = *(longlong * )(lVar4 + 0x18);
if (lVar3 == 0) {
lVar3 = *(longlong * )(lVar4 + 8);
if (lVar4 == *(longlong *)(lVar3 + 0x18)) {
do {
lVar4 = lVar3;
lVar3 = *(longlong * )(lVar4 + 8);
} while (lVar4 == *(longlong *)(lVar3 + 0x18));
}
if (*(longlong *)(lVar4 + 0x18) != lVar3) {
lVar4 = lVar3;
}
}
else {
for (
lVar2 = *(longlong * )(lVar3 + 0x10);
lVar4 = lVar3, lVar2
!= 0;
lVar2 = *(longlong * )(lVar2 + 0x10)
) {
lVar3 = lVar2;
}
}
} while (lVar4 != *(longlong *)(param_1 + 0x18));
}
if (*(longlong *)(param_1 + 0x20) != 0) {
FUN_140044ca0(param_1
+ 0x10,*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8));
*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10) = *(longlong *)(param_1 + 0x18);
*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8) = 0;
*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18) = *(longlong *)(param_1 + 0x18);
*(undefined8 *)(param_1 + 0x20) = 0;
}
return;
}



// WARNING: Removing unreachable block (ram,0x000140152394)

short *FUN_140152230(longlong
param_1,
short *param_2, undefined4
param_3)

{
short sVar1;
longlong lVar2;
bool bVar3;
longlong lVar4;
char cVar5;
int iVar6;
short *psVar7;
undefined2 *puVar8;
longlong lVar9;
longlong *plVar10;
longlong lVar11;
short *psVar12;
short *psVar13;
longlong *plVar14;
short *psVar15;
ulonglong local_res10;
undefined4 local_res18;
short *local_res20;
longlong local_a8;
longlong *local_a0;
undefined **local_98;
short *local_90;
short *local_88;
short *local_80;
undefined **local_78;
undefined8 local_70;
LPVOID local_68;
longlong local_60;
undefined2 *local_58;

psVar15 = (short *) 0x0;
local_res10 = local_res10 & 0xffffffff00000000;
local_res18 = param_3;
if (param_2 == (short *)0x0) {
local_70 = 0;
local_78 = &PTR_LAB_140b5e648;
local_68 = TlsGetValue(DAT_140c63720);
TlsSetValue(DAT_140c63720, &local_78
);
local_98 = local_78;
local_res10 = 0x141d2b730;
local_88 = (short *) local_68;
local_90 = (short *) local_70;
iVar6 = FUN_1401971e0(&DAT_140c8a140, 0xd, &local_res10, &local_98);
local_78 = &PTR_LAB_140b5e648;
TlsSetValue(DAT_140c63720, local_68
);
if (iVar6 != 0) {
DebugBreak();

}
return (short *)0x80070057;
}
local_res20 = (short *) FUN_14018b280(0x10);
local_80 = local_res20 + 8;
if (local_res20 != (short *)0x0) {
*
local_res20 = 0;
}
psVar7 = *(short **) (DAT_140c63650 + 0x310);
local_90 = local_res20;
local_88 = local_res20;
if ((psVar7 != (short *)0x0) && (
psVar13 = psVar15, *psVar7
!= 0)) {
do {
lVar9 = (longlong)
psVar13 + 1;
psVar13 = (short *) ((longlong)
psVar13 + 1);
} while (psVar7[lVar9] != 0);
psVar12 = psVar15;
if ((longlong)psVar13 * 2 >> 1 == 0) {
FUN_1407db590(local_res20, psVar7,
0);
}
else {
FUN_14001c310(&local_98, psVar7
);
}
do {
psVar13 = &DAT_1409db436 + (longlong)
psVar12;
psVar12 = (short *) ((longlong)
psVar12 + 1);
} while (*psVar13 != 0);
FUN_14001c310(&local_98, &DAT_1409db434, &DAT_1409db434
+ (longlong)psVar12 * 2);
}
psVar13 = local_90;
local_res20 = local_90;
iVar6 = FUN_1401b58d0();
if (iVar6 == 0) {
if ((psVar7 != (short *)0x0) && (*psVar7 != 0)) {
sVar1 = *param_2;
psVar7 = psVar15;
while (sVar1 != 0) {
psVar7 = (short *) ((longlong)
psVar7 + 1);
sVar1 = param_2
[(longlong)psVar7];
}
FUN_14001c310(&local_98, param_2, param_2
+ (longlong)psVar7);
param_2 = local_90;
local_res20 = local_90;
iVar6 = FUN_1401b58d0();
psVar13 = param_2;
if (iVar6 != 0) goto
LAB_14015244c;
}
psVar15 = (short *) 0x80004005;
}
else {
LAB_14015244c:
puVar8 = (undefined2 *) FUN_14018b280(0x10);
if (puVar8 != (undefined2 *)0x0) {
*
puVar8 = 0;
}
local_a0 = (longlong * )
0x0;
local_58 = puVar8;
cVar5 = FUN_1400e27b0(DAT_140c63650, param_2, &local_a0);
plVar14 = local_a0;
if ((((cVar5 == '\0') || (
lVar9 = (**(code * *)(*local_a0 + 0x10))(local_a0), lVar9
== 0)) ||
(
plVar10 = (longlong * )
FUN_1401a5ae0(lVar9,
L"Animations"), plVar10 == (longlong *)0x0)) ||
(
lVar9 = (**(code * *)(*plVar10 + 8))(plVar10), lVar9
== 0)) {
psVar15 = (short *) 0x80004005;
}
else {
lVar9 = FUN_1401a5ae0(lVar9, L"Animation");
psVar7 = psVar15;
psVar13 = local_90;
while (lVar9 != 0) {
lVar11 = FUN_1401a6b80(lVar9, &DAT_1409db42c);
if ((lVar11 == 0) ||
(
psVar12 = (short *) FUN_1401a4f40(lVar11 + 0x20), psVar12
== (short *)0x0)) {
LAB_140152617:
bVar3 = false;
}
else {
sVar1 = *psVar12;
psVar13 = psVar15;
while (sVar1 != 0) {
psVar13 = (short *) ((longlong)
psVar13 + 1);
sVar1 = psVar12
[(longlong)psVar13];
}
lVar11 = (longlong)
psVar13 * 2 >> 1;
psVar13 = psVar15;
if (lVar11 + 1U < 0x7fffffffffffffff) {
psVar13 = (short *) FUN_14018b280((lVar11 + 1U) * 2, 0);
}
FUN_1407db590(psVar13, psVar12, lVar11
* 2);
psVar12 = psVar13 + lVar11;
if (psVar12 != (short *)0x0) {
*
psVar12 = 0;
}
local_res10 = local_res10 & 0xffffffff00000000 | (ulonglong)
psVar7 | 1;
lVar11 = *(longlong * )(param_1 + 0x18);
lVar4 = lVar11;
lVar2 = *(longlong * )(lVar11 + 8);
while (lVar2 != 0) {
iVar6 = FUN_1400454d0(*(undefined8 * )(lVar2 + 0x28), *(undefined8 * )(lVar2 + 0x30),
                      psVar13, psVar12);
if (iVar6 < 0) {
lVar2 = *(longlong * )(lVar2 + 0x18);
}
else {
lVar4 = lVar2;
lVar2 = *(longlong * )(lVar2 + 0x10);
}
}
if ((lVar4 == lVar11) ||
(
iVar6 = FUN_1400454d0(psVar13, psVar12, *(undefined8 * )(lVar4 + 0x28),
                      *(undefined8 * )(lVar4 + 0x30)), iVar6<
0)) {
local_60 = lVar11;
plVar14 = &local_60;
}
else {
local_a8 = lVar4;
plVar14 = &local_a8;
}
if ((*plVar14 != *(longlong *)(param_1 + 0x18)) && (*(longlong *)(*plVar14 + 0x40) != 0))
{
psVar7 = (short *) (local_res10 & 0xffffffff);
goto
LAB_140152617;
}
psVar7 = (short *) (local_res10 & 0xffffffff);
bVar3 = true;
}
if ((((ulonglong)psVar7 & 1) != 0) &&
(
psVar7 = (short *) (ulonglong)((uint)
psVar7 & 0xfffffffe), psVar13 != (short *)0x0)) {
FUN_14018b900(psVar13,
0);
}
if (bVar3) {
FUN_1401526c0(param_1, lVar9, local_res18
);
}
lVar9 = FUN_1401a5bc0(lVar9, L"Animation");
puVar8 = local_58;
plVar14 = local_a0;
}
}
if (plVar14 != (longlong *)0x0) {
(**(code **)(*plVar14 + 8))(plVar14);
}
psVar13 = local_res20;
if (puVar8 != (undefined2 *)0x0) {
FUN_14018b900(puVar8,
0);
psVar13 = local_res20;
}
}
if (psVar13 != (short *)0x0) {
FUN_14018b900(psVar13,
0);
}
return
psVar15;
}


undefined8 FUN_1401526c0(longlong
param_1,
undefined8 param_2,
int param_3
)

{
ulonglong uVar1;
undefined2 *puVar2;
short sVar3;
short *psVar4;
longlong lVar5;
undefined8 *puVar6;
int iVar7;
longlong lVar8;
longlong *plVar9;
longlong *plVar10;
longlong *plVar11;
longlong **pplVar12;
longlong local_res20;
undefined local_58[8];
longlong local_50;
undefined2 *local_48;
longlong local_40;

lVar8 = FUN_14018b280(0xd8, 0);
plVar11 = (longlong * )
0x0;
plVar9 = plVar11;
if (lVar8 != 0) {
plVar9 = (longlong * )
FUN_140186660(lVar8);
}
iVar7 = (**(code * *)(*plVar9 + 0x10))(plVar9, param_2);
if (-1 < iVar7) {
psVar4 = (short *) plVar9[2];
sVar3 = *psVar4;
plVar10 = plVar11;
while (sVar3 != 0) {
plVar10 = (longlong * )((longlong)
plVar10 + 1);
sVar3 = psVar4
[(longlong)plVar10];
}
lVar8 = (longlong)
plVar10 * 2 >> 1;
uVar1 = lVar8 + 1;
if (uVar1 < 0x7fffffffffffffff) {
plVar11 = (longlong * )
FUN_14018b280(uVar1
* 2,0);
}
lVar8 = lVar8 * 2;
FUN_1407db590(plVar11, psVar4, lVar8
);
puVar2 = (undefined2 * )(lVar8 + (longlong)
plVar11);
if (puVar2 != (undefined2 *)0x0) {
*
puVar2 = 0;
}
lVar8 = *(longlong * )(param_1 + 0x18);
local_res20 = lVar8;
lVar5 = *(longlong * )(lVar8 + 8);
while (lVar5 != 0) {
iVar7 = FUN_1400454d0(*(undefined8 * )(lVar5 + 0x28), *(undefined8 * )(lVar5 + 0x30), plVar11,
                      puVar2);
if (iVar7 < 0) {
lVar5 = *(longlong * )(lVar5 + 0x18);
}
else {
local_res20 = lVar5;
lVar5 = *(longlong * )(lVar5 + 0x10);
}
}
if ((local_res20 == lVar8) ||
(
iVar7 = FUN_1400454d0(plVar11, puVar2, *(undefined8 * )(local_res20 + 0x28),
                      *(undefined8 * )(local_res20 + 0x30)), iVar7<
0)) {
local_res20 = lVar8;
}
if (plVar11 != (longlong *)0x0) {
FUN_14018b900(plVar11,
0);
}
if (local_res20 != *(longlong *)(param_1 + 0x18)) {
if (param_3 == 0) {
FUN_1400035b0(0xd,1,0,plVar9[2]);
(**(code **)*plVar9)(plVar9);
return 0xb7;
}
puVar6 = *(undefined8 * *)(local_res20 + 0x40);
if (puVar6 != (undefined8 *)0x0) {
(**(code **)*puVar6)(puVar6,1);
}
}
psVar4 = (short *) plVar9[2];
lVar8 = 0;
local_50 = 0;
local_40 = 0;
sVar3 = *psVar4;
while (sVar3 != 0) {
lVar8 = lVar8 + 1;
sVar3 = psVar4[lVar8];
}
lVar8 = lVar8 * 2 >> 1;
uVar1 = lVar8 + 1;
if (uVar1 < 0x7fffffffffffffff) {
lVar5 = uVar1 * 2;
local_50 = FUN_14018b280(lVar5, 0);
local_40 = local_50 + lVar5;
}
lVar5 = local_50;
lVar8 = lVar8 * 2;
FUN_1407db590(local_50, psVar4, lVar8
);
local_48 = (undefined2 * )(lVar5 + lVar8);
if (local_48 != (undefined2 *)0x0) {
*
local_48 = 0;
}
pplVar12 = (longlong * *)
FUN_1400eda60(param_1
+ 0x10,local_58);
*
pplVar12 = plVar9;
if (lVar5 != 0) {
FUN_14018b900(lVar5,
0);
}
return 0;
}
(**(code **)*plVar9)(plVar9,1);
return 0xd;
}


undefined8 FUN_140152940(longlong
param_1,
longlong param_2, longlong
param_3)

{
longlong lVar1;
longlong lVar2;
undefined8 uVar3;
longlong local_res18[2];

if (param_3 == 0) {
uVar3 = *(undefined8 * )(param_2 + 8);
}
else {
FUN_1401529e0(param_1
+ 0x10,local_res18,param_2);
if ((local_res18[0] != *(longlong *)(param_1 + 0x18)) &&
(
lVar1 = *(longlong * )(local_res18[0] + 0x40), lVar1
!= 0)) {
lVar2 = FUN_14018b280(0x80, 0);
if (lVar2 == 0) {
return 0;
}
uVar3 = FUN_140151e60(lVar2, lVar1, param_3);
return
uVar3;
}
uVar3 = *(undefined8 * )(param_2 + 8);
}
FUN_1400035b0(0xd,0,0,uVar3);
return 0;
}


longlong *FUN_1401529e0(longlong
param_1,
longlong *param_2, longlong
param_3)

{
longlong lVar1;
undefined8 uVar2;
undefined8 uVar3;
int iVar4;
longlong lVar5;
longlong lVar6;
longlong local_res8;

lVar1 = *(longlong * )(param_1 + 8);
local_res8 = lVar1;
if (*(longlong *)(lVar1 + 8) != 0) {
uVar2 = *(undefined8 * )(param_3 + 8);
uVar3 = *(undefined8 * )(param_3 + 0x10);
lVar5 = *(longlong * )(lVar1 + 8);
do {
iVar4 = FUN_1400454d0(*(undefined8 * )(lVar5 + 0x28), *(undefined8 * )(lVar5 + 0x30), uVar2, uVar3);
if (iVar4 < 0) {
lVar6 = *(longlong * )(lVar5 + 0x18);
}
else {
lVar6 = *(longlong * )(lVar5 + 0x10);
local_res8 = lVar5;
}
lVar5 = lVar6;
} while (lVar6 != 0);
}
if ((local_res8 == lVar1) ||
(
iVar4 = FUN_1400454d0(*(undefined8 * )(param_3 + 8), *(undefined8 * )(param_3 + 0x10),
                      *(undefined8 * )(local_res8 + 0x28), *(undefined8 * )(local_res8 + 0x30)),
        iVar4<
0)) {
local_res8 = lVar1;
}
*
param_2 = local_res8;
return
param_2;
}


undefined8 *
        FUN_140152aa0(undefined8 * param_1, short * param_2, short * param_3, undefined8
param_4,
undefined8 *param_5, undefined4
*param_6)

{
short sVar1;
longlong lVar2;
longlong lVar3;

lVar3 = 0;
*
param_1 = &PTR_LAB_140b55048;
*(undefined4 *)(param_1 + 1) = 1;
param_1[2] =
param_4;
*
param_1 = &PTR_LAB_140b5c740;
param_1[4] = 0;
param_1[5] = 0;
param_1[6] = 0;
sVar1 = *param_2;
lVar2 = lVar3;
while (sVar1 != 0) {
lVar2 = lVar2 + 1;
sVar1 = param_2[lVar2];
}
FUN_14001c1b0(param_1
+ 3,param_2,param_2 + lVar2);
param_1[8] = 0;
param_1[9] = 0;
param_1[10] = 0;
sVar1 = *param_3;
while (sVar1 != 0) {
lVar3 = lVar3 + 1;
sVar1 = param_3[lVar3];
}
FUN_14001c1b0(param_1
+ 7,param_3,param_3 + lVar3);
*(undefined4 *)(param_1 + 0xc) = *
param_6;
*(undefined4 *)((longlong)param_1 + 100) = param_6[1];
param_1[0xd] = 0;
param_1[0xe] = 0;
*(undefined4 *)(param_1 + 0xf) =
DAT_140c77760;
*(undefined4 *)((longlong)param_1 + 0x7c) =
DAT_140c77764;
param_1[0x10] = 0;
*(undefined4 *)(param_1 + 0x11) =
DAT_140c77760;
*(undefined4 *)((longlong)param_1 + 0x8c) =
DAT_140c77764;
if (param_5 != (undefined8 *)0x0) {
(**(code **)*param_5)(param_5);
}
param_1[0xb] =
param_5;
return
param_1;
}


undefined8 FUN_140152bb0(undefined8
param_1,
ulonglong param_2
)

{
FUN_140153830();

if ((param_2 & 1) != 0) {
FUN_14018b900(param_1,
0);
}
return
param_1;
}



// WARNING: Removing unreachable block (ram,0x000140152d9f)
// WARNING: Removing unreachable block (ram,0x000140152ef0)

undefined8 *
        FUN_140152bf0(undefined8 * param_1, longlong
param_2,
longlong param_3, undefined8
param_4,
undefined8 param_5
)

{
wchar_t wVar1;
undefined4 uVar2;
longlong *plVar3;
undefined2 *puVar4;
longlong lVar5;
wchar_t *pwVar6;
undefined2 *puVar7;
int iVar8;
longlong lVar9;
wchar_t *pwVar10;
longlong lVar11;
undefined8 local_res8;
undefined8 local_res10;
undefined local_78[8];
undefined2 *local_70;
undefined2 *local_68;
undefined2 *local_60;
undefined2 *local_50;
undefined2 *local_48;
undefined2 *local_40;

lVar11 = 0;
*
param_1 = &PTR_LAB_140b55048;
*(undefined4 *)(param_1 + 1) = 1;
param_1[2] = 0;
*
param_1 = &PTR_LAB_140b5c740;
param_1[4] = 0;
param_1[5] = 0;
param_1[6] = 0;
puVar4 = (undefined2 *) FUN_14018b280(0x10, 0);
param_1[4] =
puVar4;
param_1[5] =
puVar4;
param_1[6] = puVar4 + 8;
if (puVar4 != (undefined2 *)0x0) {
*
puVar4 = 0;
}
param_1[8] = 0;
param_1[9] = 0;
param_1[10] = 0;
puVar4 = (undefined2 *) FUN_14018b280(0x10);
param_1[8] =
puVar4;
param_1[9] =
puVar4;
param_1[10] = puVar4 + 8;
if (puVar4 != (undefined2 *)0x0) {
*
puVar4 = 0;
}
param_1[0xb] = 0;
param_1[0xc] = 0;
param_1[0xd] = 0;
param_1[0xe] = 0;
param_1[0x10] = 0;
if (param_3 != 0) {
uVar2 = *(undefined4 * )(param_3 + 100);
*(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_3 + 0x60);
*(undefined4 *)((longlong)param_1 + 100) =
uVar2;
}
lVar5 = FUN_140108e80(param_2 + 0xf0, param_4);
while (((lVar5 != 0 &&
(
lVar9 = *(longlong * )(lVar5 + 0x60) - *(longlong * )(lVar5 + 0x58) >> 3, lVar9
!= 0)) &&
(
iVar8 = (int) lVar9,
1 < iVar8))) {
if (0 < iVar8) {
lVar5 = **(longlong * *)(lVar5 + 0x58);
}
}
puVar4 = (undefined2 *) FUN_14018b280(0x10);
local_60 = puVar4 + 8;
if (puVar4 != (undefined2 *)0x0) {
*
puVar4 = 0;
}
local_res10 = 0;
local_70 = puVar4;
local_68 = puVar4;
if (lVar5 != 0) {
plVar3 = *(longlong * *)(lVar5 + 0x38);
if ((*plVar3 == 0) || (
pwVar6 = *(wchar_t **) (*plVar3 + 0x28), pwVar6
== (wchar_t *)0x0)) {
pwVar6 = L"< No Texture Selected >";
}
pwVar10 = L"";
if (pwVar6 != (wchar_t *)0x0) {
pwVar10 = pwVar6;
}
wVar1 = *pwVar10;
lVar5 = lVar11;
while (wVar1 != L'\0') {
lVar5 = lVar5 + 1;
wVar1 = pwVar10[lVar5];
}
if (lVar5 * 2 >> 1 == 0) {
FUN_1407db590(puVar4);
}
else {
FUN_14001c310(local_78);
puVar4 = local_70;
}
local_res10 = CONCAT44(*(undefined4 * )(plVar3 + 4), *(undefined4 * )(plVar3 + 1));
}
lVar5 = FUN_140108e80(param_2 + 0xf0, param_5);
while (((lVar5 != 0 &&
(
lVar9 = *(longlong * )(lVar5 + 0x60) - *(longlong * )(lVar5 + 0x58) >> 3, lVar9
!= 0)) &&
(
iVar8 = (int) lVar9,
1 < iVar8))) {
if (0 < iVar8) {
lVar5 = **(longlong * *)(lVar5 + 0x58);
}
}
puVar7 = (undefined2 *) FUN_14018b280(0x10);
local_40 = puVar7 + 8;
if (puVar7 != (undefined2 *)0x0) {
*
puVar7 = 0;
}
local_res8 = 0;
local_50 = puVar7;
local_48 = puVar7;
if (lVar5 != 0) {
plVar3 = *(longlong * *)(lVar5 + 0x38);
if ((*plVar3 == 0) || (
pwVar6 = *(wchar_t **) (*plVar3 + 0x28), pwVar6
== (wchar_t *)0x0)) {
pwVar6 = L"< No Texture Selected >";
}
pwVar10 = L"";
if (pwVar6 != (wchar_t *)0x0) {
pwVar10 = pwVar6;
}
wVar1 = *pwVar10;
while (wVar1 != L'\0') {
lVar11 = lVar11 + 1;
wVar1 = pwVar10[lVar11];
}
if (lVar11 * 2 >> 1 == 0) {
FUN_1407db590(puVar7, pwVar10,
0);
}
else {
FUN_14001c310();

puVar7 = local_50;
}
local_res8 = CONCAT44(*(undefined4 * )(plVar3 + 4), *(undefined4 * )(plVar3 + 1));
}
FUN_140153650(param_1, *(undefined8
*)(param_3 + 0x40),puVar4,&local_res10,puVar7,&local_res8);
if (puVar7 != (undefined2 *)0x0) {
FUN_14018b900(puVar7,
0);
}
if (puVar4 != (undefined2 *)0x0) {
FUN_14018b900(puVar4,
0);
}
return
param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140152fd0(longlong
param_1,
undefined8 param_2
)

{
longlong *plVar1;
char cVar2;
short sVar6;
short sVar7;
short sVar8;
short sVar9;
ulonglong uVar10;
unkbyte10 Var11;
undefined auVar12[14];
short sVar13;
undefined6 uVar14;
ulonglong uVar15;
uint3 uVar16;
int iVar17;
undefined4 uVar18;
undefined4 uVar19;
undefined4 uVar20;
uint uVar21;
undefined8 uVar22;
longlong lVar23;
int iVar24;
int iVar25;
int iVar26;
undefined8 uVar27;
uint uVar32;
int iVar33;
undefined auVar29[16];
undefined auVar31[16];
int iVar34;
char cVar35;
char cVar36;
float fVar37;
float fVar38;
float fVar39;
float fVar40;
float fVar41;
float fVar42;
float fVar43;
float fVar44;
float fVar45;
undefined in_XMM11_Bb;
undefined uVar46;
undefined in_XMM11_Bc;
undefined uVar47;
undefined in_XMM11_Bd;
undefined uVar48;
undefined in_XMM11_Be;
undefined uVar49;
undefined in_XMM11_Bf;
undefined uVar50;
undefined in_XMM11_Bg;
undefined uVar51;
undefined in_XMM11_Bh;
undefined uVar52;
float fVar53;
float fVar54;
float fVar55;
float fVar56;
undefined4 uVar57;
undefined4 uVar58;
undefined4 uVar59;
undefined4 uVar60;
undefined4 local_res8[2];
int local_res18;
uint local_res20[2];
undefined4 local_158;
undefined4 local_154;
undefined8 local_150;
float local_148;
float fStack324;
float fStack320;
float fStack316;
undefined8 local_138;
int local_130;
int local_12c;
undefined8 local_128;
int local_120;
int local_11c;
int local_118;
int local_114;
int local_110;
int local_10c;
int local_108;
int local_104;
int local_100;
int local_fc;
undefined8 local_f8;
longlong local_f0;
undefined8 local_e8;
char cVar3;
char cVar4;
char cVar5;
undefined auVar28[12];
undefined auVar30[16];

if ((((*(longlong **)(param_1 + 0x68) == (longlong *)0x0) ||
(
iVar17 = (**(code * *)(**(longlong * *)(param_1 + 0x68) + 0x20))(), iVar17
!= 0)) &&
((
plVar1 = *(longlong * *)(param_1 + 0x70), plVar1
== (longlong *)0x0 ||
(
iVar17 = (**(code * *)(*plVar1 + 0x20))(plVar1, param_2), iVar17
!= 0)))) &&
(*(longlong *)(param_1 + 0x58) != 0)) {
if ((*(longlong *)(param_1 + 0x68) != 0) || (*(longlong *)(param_1 + 0x70) != 0)) {
uVar22 = (**(code * *)(**(longlong * *)(param_1 + 0x70) + 0x18))();
local_138 = uVar22;
local_e8 = (**(code * *)(**(longlong * *)(param_1 + 0x68) + 0x18))();
local_128 = 0;
if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
local_128 = (**(code * *)(**(longlong * *)(param_1 + 0x80) + 0x18))();
}
local_res20[0] = 0;
local_f0 = (**(code * *)(**(longlong * *)(param_1 + 0x58) + 0x40))
        (*(longlong * *)(param_1 + 0x58), local_res20, 2);
local_res20[0] = local_res20[0] >> 2;
local_res8[0] = 0;
local_150 = (**(code * *)(**(longlong * *)(param_1 + 0x70) + 0x48))
        (*(longlong * *)(param_1 + 0x70), 0, local_res8, 1);
local_158 = 0;
local_f8 = (**(code * *)(**(longlong * *)(param_1 + 0x68) + 0x48))
        (*(longlong * *)(param_1 + 0x68), 0, &local_158, 1);
plVar1 = *(longlong * *)(param_1 + 0x80);
lVar23 = 0;
local_154 = 0;
if (plVar1 != (longlong *)0x0) {
lVar23 = (**(code * *)(*plVar1 + 0x48))(plVar1, 0, &local_154, 1);
}
fVar53 = 0.003921569;
fVar54 = 0.003921569;
fVar55 = 0.003921569;
fVar56 = 1.0;
iVar24 = 0;
uVar16 = CONCAT12(in_XMM11_Bd, CONCAT11(in_XMM11_Bc, in_XMM11_Bb)) ^
         CONCAT12(in_XMM11_Bd, CONCAT11(in_XMM11_Bc, in_XMM11_Bb));
iVar17 = (uint)
uVar16 << 8;
uVar46 = (undefined)
uVar16;
uVar47 = (undefined)((uint)
iVar17 >> 0x10);
uVar48 = (undefined)((uint)
iVar17 >> 0x18);
uVar21 = CONCAT13(in_XMM11_Bh, CONCAT12(in_XMM11_Bg, CONCAT11(in_XMM11_Bf, in_XMM11_Be))) ^
         CONCAT13(in_XMM11_Bh, CONCAT12(in_XMM11_Bg, CONCAT11(in_XMM11_Bf, in_XMM11_Be)));
uVar49 = (undefined)
uVar21;
uVar50 = (undefined)(uVar21 >> 8);
uVar51 = (undefined)(uVar21 >> 0x10);
uVar52 = (undefined)(uVar21 >> 0x18);
uVar57 = 0;
uVar58 = 0;
uVar59 = 0;
uVar60 = 0;
local_res18 = 0;
do {
iVar17 = 0;
iVar25 = 0;
do {
local_110 = *(int *) (param_1 + 0x78) + iVar25;
local_10c = *(int *) (param_1 + 0x7c) + local_res18;
uVar18 = FUN_1400ff740(uVar22, local_150, local_res8[0], &local_110);
local_108 = *(int *) (param_1 + 0x78) + 1 + iVar25;
local_104 = *(int *) (param_1 + 0x7c) + local_res18;
uVar19 = FUN_1400ff740(local_138, local_150, local_res8[0], &local_108);
local_120 = *(int *) (param_1 + 0x78) + iVar25;
local_11c = *(int *) (param_1 + 0x7c) + local_res18 + 1;
uVar20 = FUN_1400ff740(local_138, local_150, local_res8[0], &local_120);
uVar22 = local_138;
uVar27 = CONCAT44(uVar18, uVar18);
auVar28 = CONCAT48(uVar18, uVar27);
auVar30 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(
        CONCAT412(SUB164(CONCAT313(SUB163(CONCAT214(SUB162
                                                            (CONCAT115(uVar52, CONCAT114((char) ((uint)
uVar18 >>
0x18),
SUB1614(CONCAT412(
        uVar18, auVar28),
0))) >> 0x70,0),
CONCAT113(uVar51, SUB1613(CONCAT412(uVar18, auVar28), 0)
)) >> 0x68,0),
CONCAT112((char)((uint)uVar18 >> 0x10),auVar28))
>> 0x60,0),
CONCAT111(uVar50, SUB1211(auVar28, 0)
))
>> 0x58,0),
CONCAT110((char)((uint)uVar18 >> 8),
SUB1210(auVar28,
0))) >> 0x50,0),
CONCAT19(uVar49, SUB129(auVar28, 0)
)) >> 0x48,0),
CONCAT18((char)uVar18,uVar27)) >> 0x40,0),uVar48),
((uint7)uVar27 >> 0x18) << 0x30);
auVar29 = CONCAT115(CONCAT101(SUB1610(auVar30 >> 0x30, 0), uVar47),
                    ((uint5) uVar27 >> 0x10) << 0x20);
auVar31 = CONCAT133(CONCAT121(SUB1612(auVar29 >> 0x20, 0), uVar46),
                    ((uint3) uVar18 >> 8) << 0x10) & (undefined[16])
0xffffffffffff0000;
iVar26 = SUB164(CONCAT214(CONCAT11(uVar52, uVar51),
                          CONCAT212(SUB162(auVar30 >> 0x30, 0), SUB1612(auVar31, 0))) >> 0x60, 0);
auVar29 = CONCAT610(SUB166(CONCAT412(iVar26, CONCAT210(CONCAT11(uVar50, uVar49),
                                                       SUB1610(auVar31, 0))) >> 0x50, 0),
                    CONCAT28(SUB162(auVar29 >> 0x20, 0), SUB168(auVar31, 0)));
local_130 = *(int *) (param_1 + 0x78) + 1 + iVar25;
local_12c = local_res18 + 1 + *(int *) (param_1 + 0x7c);
fVar40 = (float) SUB164(auVar29 >> 0x40, 0) * fVar53;
fVar41 = (float) SUB164(CONCAT106(CONCAT82(SUB168(auVar29 >> 0x40, 0),
                                           CONCAT11(uVar48, uVar47)),
                                  (SUB166(auVar31, 0) >> 0x10) << 0x20) >> 0x20, 0) * fVar54;
fVar42 = (float) iVar26 * fVar55;
uVar27 = CONCAT44(uVar19, uVar19);
auVar28 = CONCAT48(uVar19, uVar27);
auVar30 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(
        CONCAT412(SUB164(CONCAT313(SUB163(CONCAT214(SUB162
                                                            (CONCAT115(uVar52, CONCAT114((char) ((uint)
uVar19 >>
0x18),
SUB1614(CONCAT412(
        uVar19, auVar28),
0))) >> 0x70,0),
CONCAT113(uVar51, SUB1613(CONCAT412(uVar19, auVar28), 0)
)) >> 0x68,0),
CONCAT112((char)((uint)uVar19 >> 0x10),auVar28))
>> 0x60,0),
CONCAT111(uVar50, SUB1211(auVar28, 0)
))
>> 0x58,0),
CONCAT110((char)((uint)uVar19 >> 8),
SUB1210(auVar28,
0))) >> 0x50,0),
CONCAT19(uVar49, SUB129(auVar28, 0)
)) >> 0x48,0),
CONCAT18((char)uVar19,uVar27)) >> 0x40,0),uVar48),
((uint7)uVar27 >> 0x18) << 0x30);
auVar29 = CONCAT115(CONCAT101(SUB1610(auVar30 >> 0x30, 0), uVar47),
                    ((uint5) uVar27 >> 0x10) << 0x20);
auVar31 = CONCAT133(CONCAT121(SUB1612(auVar29 >> 0x20, 0), uVar46),
                    ((uint3) uVar19 >> 8) << 0x10) & (undefined[16])
0xffffffffffff0000;
iVar26 = SUB164(CONCAT214(CONCAT11(uVar52, uVar51),
                          CONCAT212(SUB162(auVar30 >> 0x30, 0), SUB1612(auVar31, 0))) >> 0x60, 0);
auVar29 = CONCAT610(SUB166(CONCAT412(iVar26, CONCAT210(CONCAT11(uVar50, uVar49),
                                                       SUB1610(auVar31, 0))) >> 0x50, 0),
                    CONCAT28(SUB162(auVar29 >> 0x20, 0), SUB168(auVar31, 0)));
fVar43 = (float) SUB164(auVar29 >> 0x40, 0) * fVar53;
fVar44 = (float) SUB164(CONCAT106(CONCAT82(SUB168(auVar29 >> 0x40, 0),
                                           CONCAT11(uVar48, uVar47)),
                                  (SUB166(auVar31, 0) >> 0x10) << 0x20) >> 0x20, 0) * fVar54;
fVar45 = (float) iVar26 * fVar55;
uVar27 = CONCAT44(uVar20, uVar20);
auVar28 = CONCAT48(uVar20, uVar27);
auVar30 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(
        CONCAT412(SUB164(CONCAT313(SUB163(CONCAT214(SUB162
                                                            (CONCAT115(uVar52, CONCAT114((char) ((uint)
uVar20 >>
0x18),
SUB1614(CONCAT412(
        uVar20, auVar28),
0))) >> 0x70,0),
CONCAT113(uVar51, SUB1613(CONCAT412(uVar20, auVar28), 0)
)) >> 0x68,0),
CONCAT112((char)((uint)uVar20 >> 0x10),auVar28))
>> 0x60,0),
CONCAT111(uVar50, SUB1211(auVar28, 0)
))
>> 0x58,0),
CONCAT110((char)((uint)uVar20 >> 8),
SUB1210(auVar28,
0))) >> 0x50,0),
CONCAT19(uVar49, SUB129(auVar28, 0)
)) >> 0x48,0),
CONCAT18((char)uVar20,uVar27)) >> 0x40,0),uVar48),
((uint7)uVar27 >> 0x18) << 0x30);
auVar29 = CONCAT115(CONCAT101(SUB1610(auVar30 >> 0x30, 0), uVar47),
                    ((uint5) uVar27 >> 0x10) << 0x20);
auVar31 = CONCAT133(CONCAT121(SUB1612(auVar29 >> 0x20, 0), uVar46),
                    ((uint3) uVar20 >> 8) << 0x10) & (undefined[16])
0xffffffffffff0000;
iVar26 = SUB164(CONCAT214(CONCAT11(uVar52, uVar51),
                          CONCAT212(SUB162(auVar30 >> 0x30, 0), SUB1612(auVar31, 0))) >> 0x60, 0);
auVar29 = CONCAT610(SUB166(CONCAT412(iVar26, CONCAT210(CONCAT11(uVar50, uVar49),
                                                       SUB1610(auVar31, 0))) >> 0x50, 0),
                    CONCAT28(SUB162(auVar29 >> 0x20, 0), SUB168(auVar31, 0)));
fVar37 = (float) SUB164(auVar29 >> 0x40, 0) * fVar53;
fVar38 = (float) SUB164(CONCAT106(CONCAT82(SUB168(auVar29 >> 0x40, 0),
                                           CONCAT11(uVar48, uVar47)),
                                  (SUB166(auVar31, 0) >> 0x10) << 0x20) >> 0x20, 0) * fVar54;
fVar39 = (float) iVar26 * fVar55;
uVar18 = FUN_1400ff740(local_138, local_150, local_res8[0], &local_130);
uVar27 = CONCAT44(uVar18, uVar18);
auVar28 = CONCAT48(uVar18, uVar27);
auVar30 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(
        CONCAT412(SUB164(CONCAT313(SUB163(CONCAT214(SUB162
                                                            (CONCAT115(uVar52, CONCAT114((char) ((uint)
uVar18 >>
0x18),
SUB1614(CONCAT412(
        uVar18, auVar28),
0))) >> 0x70,0),
CONCAT113(uVar51, SUB1613(CONCAT412(uVar18, auVar28), 0)
)) >> 0x68,0),
CONCAT112((char)((uint)uVar18 >> 0x10),auVar28))
>> 0x60,0),
CONCAT111(uVar50, SUB1211(auVar28, 0)
))
>> 0x58,0),
CONCAT110((char)((uint)uVar18 >> 8),
SUB1210(auVar28,
0))) >> 0x50,0),
CONCAT19(uVar49, SUB129(auVar28, 0)
)) >> 0x48,0),
CONCAT18((char)uVar18,uVar27)) >> 0x40,0),uVar48),
((uint7)uVar27 >> 0x18) << 0x30);
auVar29 = CONCAT115(CONCAT101(SUB1610(auVar30 >> 0x30, 0), uVar47),
                    ((uint5) uVar27 >> 0x10) << 0x20);
auVar31 = CONCAT133(CONCAT121(SUB1612(auVar29 >> 0x20, 0), uVar46),
                    ((uint3) uVar18 >> 8) << 0x10) & (undefined[16])
0xffffffffffff0000;
iVar26 = SUB164(CONCAT214(CONCAT11(uVar52, uVar51),
                          CONCAT212(SUB162(auVar30 >> 0x30, 0), SUB1612(auVar31, 0))) >> 0x60, 0);
auVar29 = CONCAT610(SUB166(CONCAT412(iVar26, CONCAT210(CONCAT11(uVar50, uVar49),
                                                       SUB1610(auVar31, 0))) >> 0x50, 0),
                    CONCAT28(SUB162(auVar29 >> 0x20, 0), SUB168(auVar31, 0)));
fVar40 = (fVar43 + fVar40 + fVar37 + (float) SUB164(auVar29 >> 0x40, 0) * fVar53) * 0.25;
fVar41 = (fVar44 + fVar41 + fVar38 +
          (float) SUB164(CONCAT106(CONCAT82(SUB168(auVar29 >> 0x40, 0),
                                            CONCAT11(uVar48, uVar47)),
                                   (SUB166(auVar31, 0) >> 0x10) << 0x20) >> 0x20, 0) * fVar54)
         * 0.25;
fVar39 = (fVar45 + fVar42 + fVar39 + (float) iVar26 * fVar55) * 0.25;
local_100 = iVar17;
local_fc = iVar24;
uVar18 = FUN_1400ff740(local_e8, local_f8, local_158, &local_100);
uVar27 = CONCAT44(uVar18, uVar18);
auVar28 = CONCAT48(uVar18, uVar27);
auVar30 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(
        CONCAT412(SUB164(CONCAT313(SUB163(CONCAT214(SUB162
                                                            (CONCAT115(uVar52, CONCAT114((char) ((uint)
uVar18 >>
0x18),
SUB1614(CONCAT412(
        uVar18, auVar28),
0))) >> 0x70,0),
CONCAT113(uVar51, SUB1613(CONCAT412(uVar18, auVar28), 0)
)) >> 0x68,0),
CONCAT112((char)((uint)uVar18 >> 0x10),auVar28))
>> 0x60,0),
CONCAT111(uVar50, SUB1211(auVar28, 0)
))
>> 0x58,0),
CONCAT110((char)((uint)uVar18 >> 8),
SUB1210(auVar28,
0))) >> 0x50,0),
CONCAT19(uVar49, SUB129(auVar28, 0)
)) >> 0x48,0),
CONCAT18((char)uVar18,uVar27)) >> 0x40,0),uVar48),
((uint7)uVar27 >> 0x18) << 0x30);
auVar29 = CONCAT115(CONCAT101(SUB1610(auVar30 >> 0x30, 0), uVar47),
                    ((uint5) uVar27 >> 0x10) << 0x20);
auVar31 = CONCAT133(CONCAT121(SUB1612(auVar29 >> 0x20, 0), uVar46),
                    ((uint3) uVar18 >> 8) << 0x10) & (undefined[16])
0xffffffffffff0000;
iVar26 = SUB164(CONCAT214(CONCAT11(uVar52, uVar51),
                          CONCAT212(SUB162(auVar30 >> 0x30, 0), SUB1612(auVar31, 0))) >> 0x60, 0);
auVar29 = CONCAT610(SUB166(CONCAT412(iVar26, CONCAT210(CONCAT11(uVar50, uVar49),
                                                       SUB1610(auVar31, 0))) >> 0x50, 0),
                    CONCAT28(SUB162(auVar29 >> 0x20, 0), SUB168(auVar31, 0)));
fVar38 = (float) iVar26 * fVar55;
fVar37 = fVar56 - fVar38;
fStack316 = fVar39;
if (fVar39 <= fVar38) {
fStack316 = fVar38;
}
local_148 = (float) SUB164(auVar29 >> 0x40, 0) * fVar53 * fVar38 + fVar40 * fVar37;
fStack320 = fVar38 * 0.0 + fVar37 * 0.0;
fStack324 = (float) SUB164(CONCAT106(CONCAT82(SUB168(auVar29 >> 0x40, 0),
                                              CONCAT11(uVar48, uVar47)),
                                     (SUB166(auVar31, 0) >> 0x10) << 0x20) >> 0x20, 0) *
            fVar54 * fVar38 + fVar41 * fVar37;
if (lVar23 != 0) {
local_118 = *(int *) (param_1 + 0x88) + iVar17;
local_114 = *(int *) (param_1 + 0x8c) + iVar24;
uVar18 = FUN_1400ff740(local_128, lVar23, local_154, &local_118);
uVar27 = CONCAT44(uVar18, uVar18);
auVar28 = CONCAT48(uVar18, uVar27);
auVar30 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(
        CONCAT412(SUB164(CONCAT313(SUB163(CONCAT214(SUB162
                                                            (CONCAT115(uVar52, CONCAT114((char) ((uint)
uVar18 >>
0x18),
SUB1614(CONCAT412(
        uVar18, auVar28),
0))) >> 0x70,0),
CONCAT113(uVar51, SUB1613(CONCAT412(uVar18, auVar28), 0)
)) >> 0x68,0),
CONCAT112((char)((uint)uVar18 >> 0x10),auVar28))
>> 0x60,0),
CONCAT111(uVar50, SUB1211(auVar28, 0)
))
>> 0x58,0),
CONCAT110((char)((uint)uVar18 >> 8),
SUB1210(auVar28,
0))) >> 0x50,0),
CONCAT19(uVar49, SUB129(auVar28, 0)
)) >> 0x48,0),
CONCAT18((char)uVar18,uVar27)) >> 0x40,0),uVar48),
((uint7)uVar27 >> 0x18) << 0x30);
auVar29 = CONCAT115(CONCAT101(SUB1610(auVar30 >> 0x30, 0), uVar47),
                    ((uint5) uVar27 >> 0x10) << 0x20);
auVar31 = CONCAT133(CONCAT121(SUB1612(auVar29 >> 0x20, 0), uVar46),
                    ((uint3) uVar18 >> 8) << 0x10) & (undefined[16])
0xffffffffffff0000;
iVar26 = SUB164(CONCAT214(CONCAT11(uVar52, uVar51),
                          CONCAT212(SUB162(auVar30 >> 0x30, 0), SUB1612(auVar31, 0))) >>
                                                                                      0x60, 0);
auVar29 = CONCAT610(SUB166(CONCAT412(iVar26, CONCAT210(CONCAT11(uVar50, uVar49),
                                                       SUB1610(auVar31, 0))) >> 0x50, 0),
                    CONCAT28(SUB162(auVar29 >> 0x20, 0), SUB168(auVar31, 0)));
fVar38 = (float) iVar26 * fVar55;
fVar37 = fVar56 - fVar38;
if (fStack316 <= fVar38) {
fStack316 = fVar38;
}
local_148 = (float) SUB164(auVar29 >> 0x40, 0) * fVar53 * fVar38 + local_148 * fVar37;
fStack324 = (float) SUB164(CONCAT106(CONCAT82(SUB168(auVar29 >> 0x40, 0),
                                              CONCAT11(uVar48, uVar47)),
                                     (SUB166(auVar31, 0) >> 0x10) << 0x20) >> 0x20, 0) *
            fVar54 * fVar38 + fStack324 * fVar37;
fStack320 = fVar38 * 0.0 + fStack320 * fVar37;
}
iVar25 = iVar25 + 2;
auVar31 = maxps(CONCAT412(uVar60, CONCAT48(uVar59, CONCAT44(uVar58, uVar57))),
                CONCAT412(fStack316, CONCAT48(fStack320, CONCAT44(fStack324, local_148))));
auVar31 = minps(auVar31, _DAT_140b7b240);
uVar21 = iVar24 * local_res20[0] + iVar17;
iVar17 = iVar17 + 1;
iVar26 = (int) (SUB164(auVar31, 0) * 255.0 + 0.5);
uVar32 = (uint)(SUB164(auVar31 >> 0x20, 0) * 255.0 + 0.5);
iVar33 = (int) (SUB164(auVar31 >> 0x40, 0) * 255.0 + 0.5);
iVar34 = (int) (SUB164(auVar31 >> 0x60, 0) * 255.0 + 0.5);
cVar35 = (char) ((uint)
iVar26 >> 0x10);
cVar36 = (char) ((uint)
iVar34 >> 0x10);
uVar15 = (ulonglong)
CONCAT16((char)(uVar32 >> 0x10),
CONCAT15((char)(uVar32 >> 8),CONCAT14((char)uVar32,iVar33)));
uVar10 = ((ulonglong)
uVar32 & 0xff000000) << 0x20 |
uVar15;
Var11 = CONCAT19((char) ((uint)
iVar26 >> 8),CONCAT18((char)iVar26,uVar10));
auVar28 = CONCAT111((char) ((uint)
iVar26 >> 0x18),
CONCAT110(cVar35, Var11
));
auVar12 = CONCAT113((char) ((uint)
iVar34 >> 8),CONCAT112((char)iVar34,auVar28));
sVar6 = (short) iVar33;
cVar2 = (0 < sVar6) * (sVar6 < 0xff) * (char) iVar33 - (0xff < sVar6);
sVar6 = (short) (uVar15 >> 0x10);
sVar7 = (short) (uVar15 >> 0x20);
cVar3 = (0 < sVar7) * (sVar7 < 0xff) * (char) (uVar15 >> 0x20) - (0xff < sVar7);
sVar7 = (short) (uVar10 >> 0x30);
sVar8 = (short) ((unkuint10) Var11 >> 0x40);
cVar4 = (0 < sVar8) * (sVar8 < 0xff) * (char) iVar26 - (0xff < sVar8);
sVar8 = SUB122(auVar28 >> 0x50, 0);
sVar9 = SUB142(auVar12 >> 0x60, 0);
cVar5 = (0 < sVar9) * (sVar9 < 0xff) * (char) iVar34 - (0xff < sVar9);
sVar9 = SUB162(CONCAT115((char) ((uint)
iVar34 >> 0x18),
CONCAT114(cVar36, auVar12
)) >> 0x70,0
);
sVar13 = CONCAT11((0 < sVar6) * (sVar6 < 0xff) * (char) (uVar15 >> 0x10) - (0xff < sVar6),
                  cVar2);
uVar18 = CONCAT13((0 < sVar7) * (sVar7 < 0xff) * (char) (uVar15 >> 0x30) - (0xff < sVar7),
                  CONCAT12(cVar3, sVar13));
uVar14 = CONCAT15((0 < sVar8) * (sVar8 < 0xff) * cVar35 - (0xff < sVar8),
                  CONCAT14(cVar4, uVar18));
sVar6 = (short) ((uint)
uVar18 >> 0x10);
sVar7 = (short) ((uint6) uVar14 >> 0x20);
sVar8 = (short) (CONCAT17((0 < sVar9) * (sVar9 < 0xff) * cVar36 - (0xff < sVar9),
                          CONCAT16(cVar5, uVar14)) >> 0x30);
*(uint *)(local_f0 + (ulonglong)uVar21 * 4) =
CONCAT13((0 < sVar8) * (sVar8 < 0xff) * cVar5 - (0xff < sVar8),
CONCAT12((0 < sVar7) * (sVar7 < 0xff) * cVar4 - (0xff < sVar7),
CONCAT11((0 < sVar6) * (sVar6 < 0xff) * cVar3 - (0xff < sVar6),
(0 < sVar13) * (sVar13 < 0xff) * cVar2 - (0xff < sVar13)))
);
} while (iVar25 < 0x40);
local_res18 = local_res18 + 2;
iVar24 = iVar24 + 1;
} while (local_res18 < 0x40);
if (lVar23 != 0) {
(**(code **)(**(longlong **)(param_1 + 0x80) + 0x50))(*(longlong **)(param_1 + 0x80),0);
}
(**(code **)(**(longlong **)(param_1 + 0x68) + 0x50))(*(longlong **)(param_1 + 0x68),0);
(**(code **)(**(longlong **)(param_1 + 0x70) + 0x50))(*(longlong **)(param_1 + 0x70),0);
(**(code **)(**(longlong **)(param_1 + 0x58) + 0x48))();
if (*(longlong **)(param_1 + 0x68) != (longlong *)0x0) {
(**(code **)(**(longlong **)(param_1 + 0x68) + 8))();
*(undefined8 *)(param_1 + 0x68) = 0;
}
if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
(**(code **)(**(longlong **)(param_1 + 0x70) + 8))();
*(undefined8 *)(param_1 + 0x70) = 0;
}
if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
(**(code **)(**(longlong **)(param_1 + 0x80) + 8))();
*(undefined8 *)(param_1 + 0x80) = 0;
}
}
return 1;
}
return 0;
}


void FUN_140153650(longlong
param_1,
undefined8 param_2, undefined8
param_3,
undefined4 *param_4,
short *param_5, undefined4
*param_6)

{
longlong **pplVar1;
longlong **pplVar2;
int iVar3;
longlong lVar4;

pplVar1 = (longlong * *)(param_1 + 0x68);
lVar4 = 0;
if (*pplVar1 != (longlong *)0x0) {
(**(code **)(**pplVar1 + 8))();
*
pplVar1 = (longlong * )
0x0;
}
pplVar2 = (longlong * *)(param_1 + 0x70);
if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
(**(code **)(**(longlong **)(param_1 + 0x70) + 8))();
*
pplVar2 = (longlong * )
0x0;
}
iVar3 = (**(code * *)(*DAT_140c65670 + 0x50))(DAT_140c65670, param_3, 0, 0, 0, 0x100, 0, 0, pplVar2);
if (iVar3 < 0) {
(**(code **)(*DAT_140c65670 + 0xa0))(DAT_140c65670,param_2,param_1 + 0x58);
}
else {
*(undefined4 *)(param_1 + 0x78) = *
param_4;
*(undefined4 *)(param_1 + 0x7c) = param_4[1];
iVar3 = (**(code * *)(*DAT_140c65670 + 0x50))(DAT_140c65670, param_2, 0, 0, 0, 0x100, 0, 0, pplVar1);
if (iVar3 < 0) {
if (*pplVar2 != (longlong *)0x0) {
(**(code **)(**pplVar2 + 8))();
*
pplVar2 = (longlong * )
0x0;
}
}
else {
if ((param_5 != (short *)0x0) && (*param_5 != 0)) {
do {
lVar4 = lVar4 + 1;
} while (param_5[lVar4] != 0);
if ((lVar4 != 0) &&
(
iVar3 = (**(code * *)(*DAT_140c65670 + 0x50))
        (DAT_140c65670, param_5, 0, 0, 0, 0x100, 0, 0, param_1 + 0x80), iVar3<
0)) {
if (*pplVar2 != (longlong *)0x0) {
(**(code **)(**pplVar2 + 8))();
*
pplVar2 = (longlong * )
0x0;
}
if (*pplVar1 == (longlong *)0x0) {
return;
}
(**(code **)(**pplVar1 + 8))();
*
pplVar1 = (longlong * )
0x0;
return;
}
}
*(undefined4 *)(param_1 + 0x88) = *
param_6;
*(undefined4 *)(param_1 + 0x8c) = param_6[1];
(**(code **)(*DAT_140c65670 + 0xa8))(DAT_140c65670,param_1 + 0x58);
}
}
return;
}


void FUN_140153830(undefined8 * param_1) {
    *param_1 = &PTR_LAB_140b5c740;
    if ((longlong * )param_1[0xb] != (longlong * )
    0x0) {
        (**(code * *)(*(longlong * )
        param_1[0xb] + 8))();
        param_1[0xb] = 0;
    }
    if ((longlong * )param_1[0xd] != (longlong * )
    0x0) {
        (**(code * *)(*(longlong * )
        param_1[0xd] + 8))();
        param_1[0xd] = 0;
    }
    if ((longlong * )param_1[0xe] != (longlong * )
    0x0) {
        (**(code * *)(*(longlong * )
        param_1[0xe] + 8))();
        param_1[0xe] = 0;
    }
    if ((longlong * )param_1[0x10] != (longlong * )
    0x0) {
        (**(code * *)(*(longlong * )
        param_1[0x10] + 8))();
        param_1[0x10] = 0;
    }
    if (param_1[2] != 0) {
        FUN_140154420(param_1[2], param_1[4]);
    }
    if (param_1[8] != 0) {
        FUN_14018b900(param_1[8], 0);
    }
    if (param_1[4] != 0) {
        FUN_14018b900(param_1[4], 0);
    }
    *param_1 = &PTR_LAB_140b55048;
    return;
}


undefined8 *FUN_1401538f0(undefined8 * param_1, undefined8
param_2,
undefined8 param_3
)

{
short sVar1;
longlong lVar2;
undefined8 uVar3;
longlong lVar4;
short *psVar5;
short *psVar6;
wchar_t *pwVar7;
longlong *plVar8;
uint uVar9;
short *psVar11;
longlong lVar12;
wchar_t *pwVar13;
short *psVar14;
undefined local_res8[4];
undefined local_resc[4];
longlong local_res10;
undefined8 local_res18;
short *psVar10;

*
param_1 = param_2;
local_res18 = param_3;
uVar3 = FUN_14018b280(0x18);
param_1[2] =
uVar3;
*(undefined8 *)
uVar3 = uVar3;
*(undefined8 *)(param_1[2] + 8) = param_1[2];
lVar4 = FUN_1401a5ae0(param_3, L"ApolloCursors");
psVar14 = (short *) 0x0;
if (lVar4 != 0) {
lVar4 = FUN_1401a5ae0(lVar4);
while (lVar4 != 0) {
for (
lVar12 = *(longlong * )(lVar4 + 0x60);
psVar6 = psVar14, lVar12
!= 0;
lVar12 = *(longlong * )(lVar12 + 0x38)
) {
psVar11 = &DAT_140a31790;
psVar5 = (short *) FUN_1401a4f40();
if (psVar5 == &DAT_140a31790) {
LAB_140153ba8:
if (lVar12 != 0) {
psVar6 = (short *) FUN_1401a4f40(lVar12 + 0x20);
}
break;
}
psVar10 = psVar14;
if (*psVar5 != 0) {
do {
uVar9 = (uint)
psVar10;
if (((*psVar11 == 0) || (*psVar5 != *psVar11)) || (0x7ffffffe < (int)uVar9)) break;
psVar5 = psVar5 + 1;
psVar11 = psVar11 + 1;
uVar9 = uVar9 + 1;
psVar10 = (short *) (ulonglong)
uVar9;
} while (*psVar5 != 0);
if (uVar9 == 0x7fffffff) goto
LAB_140153ba8;
}
if ((*psVar5 == 0) && (*psVar11 == 0)) goto
LAB_140153ba8;
}
psVar5 = (short *) &DAT_1409db7cc;
if (psVar6 != (short *)0x0) {
psVar5 = psVar6;
}
sVar1 = *psVar5;
psVar6 = psVar14;
while (sVar1 != 0) {
psVar6 = (short *) ((longlong)
psVar6 + 1);
sVar1 = psVar5
[(longlong)psVar6];
}
lVar12 = (longlong)
psVar6 * 2 >> 1;
psVar6 = psVar14;
if (lVar12 + 1U < 0x7fffffffffffffff) {
psVar6 = (short *) FUN_14018b280((lVar12 + 1U) * 2, 0);
}
FUN_1407db590(psVar6, psVar5, lVar12
* 2);
if (psVar6 + lVar12 != (short *)0x0) {
psVar6[lVar12] = 0;
}
for (
lVar12 = *(longlong * )(lVar4 + 0x60);
psVar5 = psVar14, lVar12
!= 0;
lVar12 = *(longlong * )(lVar12 + 0x38)
) {
pwVar13 = L"Filename";
pwVar7 = (wchar_t *) FUN_1401a4f40();
if (pwVar7 == L"Filename") {
LAB_140153bbf:
if (lVar12 != 0) {
psVar5 = (short *) FUN_1401a4f40(lVar12 + 0x20);
}
break;
}
psVar11 = psVar14;
if (*pwVar7 != L'\0') {
do {
uVar9 = (uint)
psVar11;
if (((*pwVar13 == L'\0') || (*pwVar7 != *pwVar13)) || (0x7ffffffe < (int)uVar9)) break;
pwVar7 = pwVar7 + 1;
pwVar13 = pwVar13 + 1;
uVar9 = uVar9 + 1;
psVar11 = (short *) (ulonglong)
uVar9;
} while (*pwVar7 != L'\0');
if (uVar9 == 0x7fffffff) goto
LAB_140153bbf;
}
if ((*pwVar7 == L'\0') && (*pwVar13 == L'\0')) goto
LAB_140153bbf;
}
psVar11 = (short *) &DAT_1409db79c;
if (psVar5 != (short *)0x0) {
psVar11 = psVar5;
}
sVar1 = *psVar11;
psVar5 = psVar14;
while (sVar1 != 0) {
psVar5 = (short *) ((longlong)
psVar5 + 1);
sVar1 = psVar11
[(longlong)psVar5];
}
lVar12 = (longlong)
psVar5 * 2 >> 1;
psVar5 = psVar14;
if (lVar12 + 1U < 0x7fffffffffffffff) {
psVar5 = (short *) FUN_14018b280((lVar12 + 1U) * 2, 0);
}
FUN_1407db590(psVar5, psVar11, lVar12
* 2);
if (psVar5 + lVar12 != (short *)0x0) {
psVar5[lVar12] = 0;
}
for (
lVar12 = *(longlong * )(lVar4 + 0x60);
lVar12 != 0;
lVar12 = *(longlong * )(lVar12 + 0x38)
)
{
pwVar13 = L"HotspotX";
pwVar7 = (wchar_t *) FUN_1401a4f40(lVar12 + 8);
if (pwVar7 == L"HotspotX") {
LAB_140153bd6:
if (lVar12 != 0) {
uVar3 = FUN_1401a4f40(lVar12 + 0x20);
FUN_1407df428(uVar3, &DAT_1409e4114, local_res8
);
}
break;
}
psVar11 = psVar14;
if (*pwVar7 != L'\0') {
do {
uVar9 = (uint)
psVar11;
if (((*pwVar13 == L'\0') || (*pwVar7 != *pwVar13)) || (0x7ffffffe < (int)uVar9)) break;
pwVar7 = pwVar7 + 1;
pwVar13 = pwVar13 + 1;
uVar9 = uVar9 + 1;
psVar11 = (short *) (ulonglong)
uVar9;
} while (*pwVar7 != L'\0');
if (uVar9 == 0x7fffffff) goto
LAB_140153bd6;
}
if ((*pwVar7 == L'\0') && (*pwVar13 == L'\0')) goto
LAB_140153bd6;
}
for (
lVar12 = *(longlong * )(lVar4 + 0x60);
lVar12 != 0;
lVar12 = *(longlong * )(lVar12 + 0x38)
)
{
pwVar13 = L"HotspotY";
pwVar7 = (wchar_t *) FUN_1401a4f40(lVar12 + 8);
if (pwVar7 == L"HotspotY") {
LAB_140153c78:
if (lVar12 != 0) {
uVar3 = FUN_1401a4f40(lVar12 + 0x20);
FUN_1407df428(uVar3, &DAT_1409e4114, local_resc
);
}
break;
}
psVar11 = psVar14;
if (*pwVar7 != L'\0') {
do {
uVar9 = (uint)
psVar11;
if (((*pwVar13 == L'\0') || (*pwVar7 != *pwVar13)) || (0x7ffffffe < (int)uVar9)) break;
pwVar7 = pwVar7 + 1;
pwVar13 = pwVar13 + 1;
uVar9 = uVar9 + 1;
psVar11 = (short *) (ulonglong)
uVar9;
} while (*pwVar7 != L'\0');
if (uVar9 == 0x7fffffff) goto
LAB_140153c78;
}
if ((*pwVar7 == L'\0') && (*pwVar13 == L'\0')) goto
LAB_140153c78;
}
local_res10 = 0;
if (psVar6 != (short *)0x0) {
FUN_1401546e0(*param_1, psVar6, psVar5, local_res8, &local_res10
);
}
lVar2 = local_res10;
lVar12 = param_1[2];
plVar8 = (longlong * )
FUN_14018b280(0x18);
if (plVar8 + 2 != (longlong *)0x0) {
plVar8[2] =
lVar2;
}
*
plVar8 = lVar12;
plVar8[1] = *(longlong *)(lVar12 + 8);
**(longlong ***)(lVar12 + 8) =
plVar8;
*(longlong **)(lVar12 + 8) =
plVar8;
if (psVar5 != (short *)0x0) {
FUN_14018b900(psVar5,
0);
}
if (psVar6 != (short *)0x0) {
FUN_14018b900(psVar6,
0);
}
lVar4 = FUN_1401a5bc0(lVar4);
param_3 = local_res18;
}
}
lVar4 = FUN_1401a5ae0(param_3, L"ApolloCrosshairs");
if (lVar4 != 0) {
for (
lVar4 = FUN_1401a5ae0(lVar4);
lVar4 != 0;
lVar4 = FUN_1401a5bc0(lVar4)
) {
for (
lVar12 = *(longlong * )(lVar4 + 0x60);
psVar6 = psVar14, lVar12
!= 0;
lVar12 = *(longlong * )(lVar12 + 0x38)
) {
psVar11 = &DAT_140a31790;
psVar5 = (short *) FUN_1401a4f40();
if (psVar5 == &DAT_140a31790) {
LAB_140153fc4:
if (lVar12 != 0) {
psVar6 = (short *) FUN_1401a4f40(lVar12 + 0x20);
}
break;
}
psVar10 = psVar14;
if (*psVar5 != 0) {
do {
uVar9 = (uint)
psVar10;
if (((*psVar11 == 0) || (*psVar5 != *psVar11)) || (0x7ffffffe < (int)uVar9)) break;
psVar5 = psVar5 + 1;
psVar11 = psVar11 + 1;
uVar9 = uVar9 + 1;
psVar10 = (short *) (ulonglong)
uVar9;
} while (*psVar5 != 0);
if (uVar9 == 0x7fffffff) goto
LAB_140153fc4;
}
if ((*psVar5 == 0) && (*psVar11 == 0)) goto
LAB_140153fc4;
}
psVar5 = (short *) &DAT_1409db71c;
if (psVar6 != (short *)0x0) {
psVar5 = psVar6;
}
sVar1 = *psVar5;
psVar6 = psVar14;
while (sVar1 != 0) {
psVar6 = (short *) ((longlong)
psVar6 + 1);
sVar1 = psVar5
[(longlong)psVar6];
}
lVar12 = (longlong)
psVar6 * 2 >> 1;
psVar6 = psVar14;
if (lVar12 + 1U < 0x7fffffffffffffff) {
psVar6 = (short *) FUN_14018b280((lVar12 + 1U) * 2, 0);
}
FUN_1407db590(psVar6, psVar5, lVar12
* 2);
if (psVar6 + lVar12 != (short *)0x0) {
psVar6[lVar12] = 0;
}
for (
lVar12 = *(longlong * )(lVar4 + 0x60);
psVar5 = psVar14, lVar12
!= 0;
lVar12 = *(longlong * )(lVar12 + 0x38)
) {
pwVar13 = L"Filename";
pwVar7 = (wchar_t *) FUN_1401a4f40();
if (pwVar7 == L"Filename") {
LAB_140153fdb:
if (lVar12 != 0) {
psVar5 = (short *) FUN_1401a4f40(lVar12 + 0x20);
}
break;
}
psVar11 = psVar14;
if (*pwVar7 != L'\0') {
do {
uVar9 = (uint)
psVar11;
if (((*pwVar13 == L'\0') || (*pwVar7 != *pwVar13)) || (0x7ffffffe < (int)uVar9)) break;
pwVar7 = pwVar7 + 1;
pwVar13 = pwVar13 + 1;
uVar9 = uVar9 + 1;
psVar11 = (short *) (ulonglong)
uVar9;
} while (*pwVar7 != L'\0');
if (uVar9 == 0x7fffffff) goto
LAB_140153fdb;
}
if ((*pwVar7 == L'\0') && (*pwVar13 == L'\0')) goto
LAB_140153fdb;
}
psVar11 = (short *) &DAT_1409db77c;
if (psVar5 != (short *)0x0) {
psVar11 = psVar5;
}
sVar1 = *psVar11;
psVar5 = psVar14;
while (sVar1 != 0) {
psVar5 = (short *) ((longlong)
psVar5 + 1);
sVar1 = psVar11
[(longlong)psVar5];
}
lVar12 = (longlong)
psVar5 * 2 >> 1;
psVar5 = psVar14;
if (lVar12 + 1U < 0x7fffffffffffffff) {
psVar5 = (short *) FUN_14018b280((lVar12 + 1U) * 2, 0);
}
FUN_1407db590(psVar5, psVar11, lVar12
* 2);
if (psVar5 + lVar12 != (short *)0x0) {
psVar5[lVar12] = 0;
}
for (
lVar12 = *(longlong * )(lVar4 + 0x60);
lVar12 != 0;
lVar12 = *(longlong * )(lVar12 + 0x38)
)
{
pwVar13 = L"HotspotX";
pwVar7 = (wchar_t *) FUN_1401a4f40();
if (pwVar7 == L"HotspotX") {
LAB_140153ff2:
if (lVar12 != 0) {
uVar3 = FUN_1401a4f40(lVar12 + 0x20);
FUN_1407df428(uVar3, &DAT_1409e4114, local_res8
);
}
break;
}
psVar11 = psVar14;
if (*pwVar7 != L'\0') {
do {
uVar9 = (uint)
psVar11;
if (((*pwVar13 == L'\0') || (*pwVar7 != *pwVar13)) || (0x7ffffffe < (int)uVar9)) break;
pwVar7 = pwVar7 + 1;
pwVar13 = pwVar13 + 1;
uVar9 = uVar9 + 1;
psVar11 = (short *) (ulonglong)
uVar9;
} while (*pwVar7 != L'\0');
if (uVar9 == 0x7fffffff) goto
LAB_140153ff2;
}
if ((*pwVar7 == L'\0') && (*pwVar13 == L'\0')) goto
LAB_140153ff2;
}
for (
lVar12 = *(longlong * )(lVar4 + 0x60);
lVar12 != 0;
lVar12 = *(longlong * )(lVar12 + 0x38)
)
{
pwVar13 = L"HotspotY";
pwVar7 = (wchar_t *) FUN_1401a4f40();
if (pwVar7 == L"HotspotY") {
LAB_140154094:
if (lVar12 != 0) {
uVar3 = FUN_1401a4f40(lVar12 + 0x20);
FUN_1407df428(uVar3, &DAT_1409e4114, local_resc
);
}
break;
}
psVar11 = psVar14;
if (*pwVar7 != L'\0') {
do {
uVar9 = (uint)
psVar11;
if (((*pwVar13 == L'\0') || (*pwVar7 != *pwVar13)) || (0x7ffffffe < (int)uVar9)) break;
pwVar7 = pwVar7 + 1;
pwVar13 = pwVar13 + 1;
uVar9 = uVar9 + 1;
psVar11 = (short *) (ulonglong)
uVar9;
} while (*pwVar7 != L'\0');
if (uVar9 == 0x7fffffff) goto
LAB_140154094;
}
if ((*pwVar7 == L'\0') && (*pwVar13 == L'\0')) goto
LAB_140154094;
}
local_res10 = 0;
if (psVar6 != (short *)0x0) {
FUN_140154850(*param_1, psVar6, psVar5, local_res8, &local_res10
);
}
lVar2 = local_res10;
lVar12 = param_1[2];
plVar8 = (longlong * )
FUN_14018b280(0x18);
if (plVar8 + 2 != (longlong *)0x0) {
plVar8[2] =
lVar2;
}
*
plVar8 = lVar12;
plVar8[1] = *(longlong *)(lVar12 + 8);
**(longlong ***)(lVar12 + 8) =
plVar8;
*(longlong **)(lVar12 + 8) =
plVar8;
if (psVar5 != (short *)0x0) {
FUN_14018b900(psVar5,
0);
}
if (psVar6 != (short *)0x0) {
FUN_14018b900(psVar6,
0);
}
}
}
return
param_1;
}

