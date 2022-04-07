//
// Created by flop on 04.04.22.
//
#include "../../include.h"

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14062f570(void)

{
    ulonglong **ppuVar1;
    ulonglong uVar2;
    undefined4 uVar3;
    int iVar4;
    ulonglong *puVar5;
    ulonglong uVar6;
    undefined8 uVar7;
    longlong lVar8;
    ulonglong *puVar9;
    ulonglong *puVar10;
    ulonglong uVar11;
    ulonglong *puVar12;
    ulonglong *puVar13;
    ulonglong *puVar14;
    ulonglong *puVar15;
    uint uVar16;
    undefined auStack152 [32];
    uint local_78;
    undefined4 local_74 [3];
    undefined4 local_68;
    undefined4 uStack100;
    undefined local_60 [16];
    undefined4 local_50;
    undefined4 local_4c;
    undefined4 local_48;
    undefined4 local_44;
    undefined4 local_40;
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack152;
    FUN_14062f960();
    puVar5 = (ulonglong *)FUN_14018b280(0x28);
    puVar14 = (ulonglong *)0x0;
    uVar3 = 0;
    puVar13 = puVar14;
    if (puVar5 != (ulonglong *)0x0) {
        if (DAT_140c63838 == (code *)0x0) {
            if (_DAT_140c64b48 == 0) {
                iVar4 = FUN_140219820();
                if (iVar4 < 0) {
                    uVar3 = 0;
                }
                else {
                    uVar3 = (**(code **)(*DAT_140c641b0 + 0x28))();
                }
            }
        }
        else {
            uVar3 = (*DAT_140c63838)(&PTR_u_ModelEventVisualJoin_140a6b908,DAT_140c63858);
        }
        *puVar5 = 0;
        uVar6 = FUN_1401a40c0(uVar3);
        puVar5[1] = uVar6;
        uVar7 = SUB168(ZEXT816(8) * ZEXT816(uVar6),0);
        if (SUB168(ZEXT816(8) * ZEXT816(uVar6) >> 0x40,0) != 0) {
            uVar7 = 0xffffffffffffffff;
        }
        uVar6 = FUN_14018b280(uVar7);
        puVar5[2] = uVar6;
        FUN_1407e4830(uVar6,0,puVar5[1] << 3);
        puVar5[3] = (ulonglong)&LAB_14062f130;
        puVar5[4] = (ulonglong)&LAB_14062f170;
        puVar13 = puVar5;
    }
    DAT_140c7e570 = puVar13;
    if (DAT_140c63838 == (code *)0x0) {
        if ((_DAT_140c64b48 != 0) || (iVar4 = FUN_140219820(), iVar4 < 0)) goto LAB_14062f941;
        local_78 = (**(code **)(*DAT_140c641b0 + 0x28))();
    }
    else {
        local_78 = (*DAT_140c63838)(&PTR_u_ModelEventVisualJoin_140a6b908);
    }
    puVar13 = puVar14;
    if (local_78 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                puVar5 = puVar14;
                if (_DAT_140c64b48 == 0) {
                    iVar4 = FUN_140219820();
                    if (iVar4 < 0) {
                        puVar5 = (ulonglong *)0x0;
                    }
                    else {
                        puVar5 = (ulonglong *)(**(code **)(*DAT_140c641b0 + 0x20))();
                    }
                }
            }
            else {
                puVar5 = (ulonglong *)
                        (*DAT_140c63848)(&PTR_u_ModelEventVisualJoin_140a6b908,puVar13,DAT_140c63858);
            }
            local_50 = *(undefined4 *)(puVar5 + 2);
            local_4c = *(undefined4 *)((longlong)puVar5 + 4);
            local_48 = *(undefined4 *)((longlong)puVar5 + 0xc);
            local_44 = *(undefined4 *)(puVar5 + 1);
            local_40 = *(undefined4 *)(puVar5 + 3);
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c64c04 == 0) && (iVar4 = FUN_140248ca0(), -1 < iVar4)) {
                    lVar8 = (**(code **)(*DAT_140c63b40 + 0x18))();
                    goto LAB_14062f78f;
                }
            }
            else {
                lVar8 = (*DAT_140c63840)(&PTR_u_VisualEffect_140a6dff8,
                                         *(undefined4 *)((longlong)puVar5 + 0x14),DAT_140c63858);
                LAB_14062f78f:
                puVar15 = DAT_140c7e570;
                if (lVar8 != 0) {
                    local_68 = *(undefined4 *)((longlong)puVar5 + 0x1c);
                    uVar6 = (*(code *)DAT_140c7e570[3])(&local_50);
                    for (puVar9 = *(ulonglong **)(puVar15[2] + (uVar6 % puVar15[1]) * 8);
                         puVar9 != (ulonglong *)0x0; puVar9 = (ulonglong *)puVar9[1]) {
                        if ((uVar6 == *puVar9) && (iVar4 = (*(code *)puVar15[4])(&local_50), iVar4 != 0)) {
                            if ((ulonglong **)(puVar9 + 5) != (ulonglong **)0x0) {
                                puVar15 = (ulonglong *)puVar9[5];
                                goto LAB_14062f895;
                            }
                            break;
                        }
                    }
                    puVar9 = (ulonglong *)FUN_14018b280(0x10);
                    puVar15 = puVar14;
                    if (puVar9 != (ulonglong *)0x0) {
                        puVar9[1] = 0;
                        *puVar9 = 0;
                        puVar15 = puVar9;
                    }
                    puVar9 = DAT_140c7e570;
                    if (*DAT_140c7e570 == DAT_140c7e570[1]) {
                        FUN_1400290d0(DAT_140c7e570);
                    }
                    uVar6 = (*(code *)puVar9[3])(&local_50);
                    ppuVar1 = (ulonglong **)(puVar9[2] + (uVar6 % puVar9[1]) * 8);
                    puVar10 = (ulonglong *)FUN_14018b280(0x30);
                    puVar12 = puVar14;
                    if (puVar10 != (ulonglong *)0x0) {
                        puVar12 = *ppuVar1;
                        *puVar10 = uVar6;
                        puVar10[1] = (ulonglong)puVar12;
                        *(undefined4 *)(puVar10 + 2) = local_50;
                        *(undefined4 *)((longlong)puVar10 + 0x14) = local_4c;
                        *(undefined4 *)(puVar10 + 3) = local_48;
                        *(undefined4 *)((longlong)puVar10 + 0x1c) = local_44;
                        puVar10[5] = (ulonglong)puVar15;
                        *(undefined4 *)(puVar10 + 4) = local_40;
                        puVar12 = puVar10;
                    }
                    *ppuVar1 = puVar12;
                    *puVar9 = *puVar9 + 1;
                    LAB_14062f895:
                    uVar6 = puVar15[1];
                    uVar11 = FUN_14018db00(*puVar15,uVar6 + 1,0x10);
                    *(longlong *)(uVar11 + uVar6 * 0x10) = lVar8;
                    *(ulonglong *)(uVar11 + 8 + uVar6 * 0x10) = CONCAT44(uStack100,local_68);
                    if (*puVar15 != uVar11) {
                        FUN_1407db590(uVar11,*puVar15,puVar15[1] << 4);
                        uVar2 = *puVar15;
                        if (uVar2 != 0) {
                            (**(code **)(*(longlong *)(uVar2 - 0x10) + 8))(uVar2 - 0x10);
                        }
                        *puVar15 = uVar11;
                    }
                    puVar15[1] = uVar6 + 1;
                    local_74[0] = *(undefined4 *)(puVar5 + 2);
                    FUN_1403addd0(&DAT_140c7e590,local_60,local_74);
                }
            }
            uVar16 = (int)puVar13 + 1;
            puVar13 = (ulonglong *)(ulonglong)uVar16;
        } while (uVar16 < local_78);
    }
    LAB_14062f941:
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack152);
    return;
}



void FUN_14062f960(void)

{
    longlong lVar1;

    if (DAT_140c7e570 != 0) {
        FUN_14062fad0();
        lVar1 = DAT_140c7e570;
        if (DAT_140c7e570 != 0) {
            FUN_140019490(DAT_140c7e570);
            FUN_14018b900(*(undefined8 *)(lVar1 + 0x10),0);
            *(undefined8 *)(lVar1 + 0x10) = 0;
            FUN_14018b900(lVar1,0);
        }
        DAT_140c7e570 = 0;
        return;
    }
    DAT_140c7e570 = 0;
    return;
}



void FUN_14062f9d0(longlong param_1)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    undefined auStack88 [32];
    undefined4 local_38;
    undefined4 local_34;
    undefined4 local_30;
    undefined4 local_2c;
    undefined4 local_28;
    ulonglong local_20;

    local_20 = DAT_140c0f7b0 ^ (ulonglong)auStack88;
    DAT_140c7e580 = 0;
    local_38 = *(undefined4 *)(param_1 + 0x20);
    local_34 = *(undefined4 *)(param_1 + 0x14);
    if ((DAT_140dc49a8 & 1) == 0) {
        DAT_140dc49a8 = DAT_140dc49a8 | 1;
        FUN_1401ad620(&DAT_140dc49b0,L"ModelSequence");
    }
    FUN_1401ada40(&DAT_140dc49b0,*(undefined4 *)(param_1 + 0x24));
    uVar1 = 0;
    do {
        uVar2 = 0;
        do {
            uVar3 = 0;
            do {
                if (uVar1 == 0) {
                    local_30 = 0;
                }
                else {
                    local_30 = *(undefined4 *)(param_1 + 0x1c);
                }
                if (uVar2 == 0) {
                    local_2c = 0;
                }
                else {
                    local_2c = *(undefined4 *)(param_1 + 0x18);
                }
                if (uVar3 == 0) {
                    local_28 = 0;
                }
                else {
                    local_28 = *(undefined4 *)(param_1 + 0x24);
                }
                FUN_14062f300();
                uVar3 = uVar3 + 1;
            } while (uVar3 < 2);
            uVar2 = uVar2 + 1;
        } while (uVar2 < 2);
        uVar1 = uVar1 + 1;
    } while (uVar1 < 2);
    FUN_1407db4f0(local_20 ^ (ulonglong)auStack88);
    return;
}



undefined8 FUN_14062fad0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;

    uVar3 = 0;
    if (*(longlong *)(param_1 + 8) != 0) {
        do {
            lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar3 * 8);
            while (lVar1 != 0) {
                lVar2 = *(longlong *)(lVar1 + 0x28);
                lVar1 = *(longlong *)(lVar1 + 8);
                if (lVar2 != 0) {
                    FUN_140003870(lVar2);
                    FUN_14018b900(lVar2,0);
                }
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < *(ulonglong *)(param_1 + 8));
    }
    return 1;
}



undefined8 * FUN_14062fb50(undefined8 *param_1,undefined4 param_2,short *param_3,undefined8 param_4)

{
    short sVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;

    puVar3 = (undefined8 *)0x0;
    *param_1 = &PTR_LAB_140b55048;
    *(undefined4 *)(param_1 + 1) = 1;
    *param_1 = &PTR_LAB_140b6fc30;
    if (param_3 == (short *)0x0) {
        param_1[2] = 0;
    }
    else {
        sVar1 = *param_3;
        puVar4 = puVar3;
        while (sVar1 != 0) {
            puVar4 = (undefined8 *)((longlong)puVar4 + 1);
            sVar1 = param_3[(longlong)puVar4];
        }
        puVar2 = (undefined8 *)FUN_14018b280((longlong)puVar4 * 2 + 0x12,0);
        if (puVar2 != (undefined8 *)0x0) {
            puVar2[1] = puVar4;
            *puVar2 = &PTR_LAB_140b55060;
            puVar3 = puVar2;
        }
        puVar3 = puVar3 + 2;
        FUN_1407db590(puVar3,param_3,(longlong)puVar4 * 2);
        *(undefined2 *)((longlong)puVar4 * 2 + (longlong)puVar3) = 0;
        param_1[2] = puVar3;
    }
    param_1[3] = 0;
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    param_1[4] = param_4;
    *(undefined4 *)(param_1 + 5) = param_2;
    param_1[6] = 0;
    return param_1;
}



undefined8 * FUN_14062fc40(undefined8 *param_1,ulonglong param_2)

{
    longlong lVar1;

    *param_1 = &PTR_LAB_140b6fc30;
    if (param_1[6] != 0) {
        FUN_1401a4a00();
    }
    lVar1 = param_1[2];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    *param_1 = &PTR_LAB_140b55048;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



int * FUN_14062fcb0(int *param_1,undefined8 param_2,char *param_3,short *param_4)

{
    char cVar1;
    short sVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;

    puVar5 = (undefined8 *)0x0;
    DAT_140c65c14 = DAT_140c65c14 + 1;
    *(undefined8 *)(param_1 + 2) = param_2;
    *param_1 = DAT_140c65c14;
    if (param_3 == (char *)0x0) {
        *(undefined8 *)(param_1 + 4) = 0;
    }
    else {
        cVar1 = *param_3;
        puVar6 = puVar5;
        while (cVar1 != '\0') {
            puVar6 = (undefined8 *)((longlong)puVar6 + 1);
            cVar1 = *(char *)((longlong)puVar6 + (longlong)param_3);
        }
        puVar3 = (undefined8 *)FUN_14018b280((longlong)puVar6 + 0x11,0);
        puVar4 = puVar5;
        if (puVar3 != (undefined8 *)0x0) {
            puVar3[1] = puVar6;
            *puVar3 = &PTR_LAB_140b55060;
            puVar4 = puVar3;
        }
        puVar4 = puVar4 + 2;
        FUN_1407db590(puVar4,param_3,puVar6);
        *(undefined *)((longlong)puVar6 + (longlong)puVar4) = 0;
        *(undefined8 **)(param_1 + 4) = puVar4;
    }
    if (param_4 == (short *)0x0) {
        *(undefined8 *)(param_1 + 6) = 0;
    }
    else {
        sVar2 = *param_4;
        puVar6 = puVar5;
        while (sVar2 != 0) {
            puVar6 = (undefined8 *)((longlong)puVar6 + 1);
            sVar2 = param_4[(longlong)puVar6];
        }
        puVar4 = (undefined8 *)FUN_14018b280((longlong)puVar6 * 2 + 0x12,0);
        if (puVar4 != (undefined8 *)0x0) {
            puVar4[1] = puVar6;
            *puVar4 = &PTR_LAB_140b55060;
            puVar5 = puVar4;
        }
        puVar5 = puVar5 + 2;
        FUN_1407db590(puVar5,param_4,(longlong)puVar6 * 2);
        *(undefined2 *)((longlong)puVar6 * 2 + (longlong)puVar5) = 0;
        *(undefined8 **)(param_1 + 6) = puVar5;
    }
    return param_1;
}



longlong FUN_14062fdc0(longlong param_1)

{
    undefined4 uVar1;
    undefined *puVar2;
    longlong lVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 local_res8 [2];

    FUN_140019600();
    puVar2 = (undefined *)FUN_14018b280(0x38);
    *(undefined **)(param_1 + 0x30) = puVar2;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *puVar2 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
    *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x18) = *(longlong *)(param_1 + 0x30);
    lVar3 = FUN_140200220();
    if (lVar3 == 0) {
        uVar4 = 4000;
    }
    else {
        uVar4 = *(undefined4 *)(lVar3 + 4);
    }
    *(undefined4 *)(param_1 + 0x48) = uVar4;
    puVar2 = (undefined *)FUN_14018b280(0x40);
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined **)(param_1 + 0x58) = puVar2;
    *puVar2 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x10) = *(longlong *)(param_1 + 0x58);
    *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x18) = *(longlong *)(param_1 + 0x58);
    puVar2 = (undefined *)FUN_14018b280(0x40);
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined **)(param_1 + 0x78) = puVar2;
    *puVar2 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x10) = *(longlong *)(param_1 + 0x78);
    *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x18) = *(longlong *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x90) = &PTR_FUN_140b68f20;
    lVar3 = FUN_140200220(0x4bd);
    uVar4 = 500000;
    if (lVar3 == 0) {
        uVar1 = 500000;
    }
    else {
        uVar1 = *(undefined4 *)(lVar3 + 4);
    }
    *(undefined4 *)(param_1 + 0x98) = uVar1;
    uVar1 = DAT_140c636a8;
    *(undefined8 *)(param_1 + 0x9c) = 0;
    *(undefined4 *)(param_1 + 0xa4) = uVar1;
    puVar2 = (undefined *)FUN_14018b280(0x80,0);
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined **)(param_1 + 0xb0) = puVar2;
    *puVar2 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x10) = *(longlong *)(param_1 + 0xb0);
    *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x18) = *(longlong *)(param_1 + 0xb0);
    lVar3 = FUN_140200220(0x4c2);
    if (lVar3 == 0) {
        uVar1 = 0x19;
    }
    else {
        uVar1 = *(undefined4 *)(lVar3 + 4);
    }
    FUN_1407a00f0((undefined8 *)(param_1 + 0x90));
    *(undefined4 *)(param_1 + 0x9c) = uVar1;
    FUN_1407a00f0();
    local_res8[0] = 1;
    lVar3 = FUN_140200220(0x422);
    if (lVar3 == 0) {
        uVar1 = 100;
    }
    else {
        uVar1 = *(undefined4 *)(lVar3 + 4);
    }
    lVar3 = FUN_140200220(0x4bd);
    uVar6 = DAT_140c636a8;
    if (lVar3 == 0) {
        uVar5 = 500000;
    }
    else {
        uVar5 = *(undefined4 *)(lVar3 + 4);
    }
    lVar3 = FUN_140631520(param_1 + 0x50,local_res8);
    local_res8[0] = 1;
    *(undefined4 *)(lVar3 + 8) = uVar5;
    *(undefined4 *)(lVar3 + 0xc) = uVar1;
    *(undefined4 *)(lVar3 + 0x10) = uVar1;
    *(undefined4 *)(lVar3 + 0x14) = uVar6;
    lVar3 = FUN_140200220(0x422);
    uVar1 = 1000;
    if (lVar3 == 0) {
        uVar6 = 1000;
    }
    else {
        uVar6 = *(undefined4 *)(lVar3 + 8);
    }
    lVar3 = FUN_140200220(0x4bd);
    uVar5 = DAT_140c636a8;
    if (lVar3 == 0) {
        uVar7 = 500000;
    }
    else {
        uVar7 = *(undefined4 *)(lVar3 + 4);
    }
    lVar3 = FUN_140631520(param_1 + 0x70,local_res8);
    local_res8[0] = 2;
    *(undefined4 *)(lVar3 + 8) = uVar7;
    *(undefined4 *)(lVar3 + 0xc) = uVar6;
    *(undefined4 *)(lVar3 + 0x10) = uVar6;
    *(undefined4 *)(lVar3 + 0x14) = uVar5;
    uVar6 = *(undefined4 *)(param_1 + 0x48);
    lVar3 = FUN_140200220(0x4bd);
    uVar5 = DAT_140c636a8;
    if (lVar3 == 0) {
        uVar7 = 500000;
    }
    else {
        uVar7 = *(undefined4 *)(lVar3 + 4);
    }
    lVar3 = FUN_140631520(param_1 + 0x50,local_res8);
    local_res8[0] = 3;
    *(undefined4 *)(lVar3 + 8) = uVar7;
    *(undefined4 *)(lVar3 + 0xc) = uVar6;
    *(undefined4 *)(lVar3 + 0x10) = uVar6;
    *(undefined4 *)(lVar3 + 0x14) = uVar5;
    lVar3 = FUN_140200220(0x4bc);
    if (lVar3 == 0) {
        uVar6 = 1000;
    }
    else {
        uVar6 = *(undefined4 *)(lVar3 + 4);
    }
    lVar3 = FUN_140200220(0x4bd);
    uVar5 = DAT_140c636a8;
    if (lVar3 == 0) {
        uVar7 = 500000;
    }
    else {
        uVar7 = *(undefined4 *)(lVar3 + 4);
    }
    lVar3 = FUN_140631520(param_1 + 0x50,local_res8);
    local_res8[0] = 3;
    *(undefined4 *)(lVar3 + 8) = uVar7;
    *(undefined4 *)(lVar3 + 0xc) = uVar6;
    *(undefined4 *)(lVar3 + 0x10) = uVar6;
    *(undefined4 *)(lVar3 + 0x14) = uVar5;
    lVar3 = FUN_140200220(0x4bc);
    if (lVar3 != 0) {
        uVar1 = *(undefined4 *)(lVar3 + 8);
    }
    lVar3 = FUN_140200220(0x4bd);
    uVar6 = DAT_140c636a8;
    if (lVar3 != 0) {
        uVar4 = *(undefined4 *)(lVar3 + 4);
    }
    lVar3 = FUN_140631520(param_1 + 0x70,local_res8);
    *(undefined4 *)(lVar3 + 8) = uVar4;
    *(undefined4 *)(lVar3 + 0xc) = uVar1;
    *(undefined4 *)(lVar3 + 0x10) = uVar1;
    *(undefined4 *)(lVar3 + 0x14) = uVar6;
    return param_1;
}



void FUN_140630100(longlong param_1)

{
    if (*(longlong *)(param_1 + 0xb8) != 0) {
        FUN_1406322c0(param_1 + 0xa8,*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 8));
        *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x10) = *(longlong *)(param_1 + 0xb0);
        *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x18) = *(longlong *)(param_1 + 0xb0);
        *(undefined8 *)(param_1 + 0xb8) = 0;
    }
    FUN_14018b900(*(undefined8 *)(param_1 + 0xb0),0);
    *(undefined ***)(param_1 + 0x90) = &PTR_FUN_140b68f20;
    if (*(longlong *)(param_1 + 0x80) != 0) {
        FUN_140632020(param_1 + 0x70,*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8));
        *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x10) = *(longlong *)(param_1 + 0x78);
        *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x18) = *(longlong *)(param_1 + 0x78);
        *(undefined8 *)(param_1 + 0x80) = 0;
    }
    FUN_14018b900(*(undefined8 *)(param_1 + 0x78),0);
    if (*(longlong *)(param_1 + 0x60) != 0) {
        FUN_140632020(param_1 + 0x50,*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 8));
        *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x10) = *(longlong *)(param_1 + 0x58);
        *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x18) = *(longlong *)(param_1 + 0x58);
        *(undefined8 *)(param_1 + 0x60) = 0;
    }
    FUN_14018b900(*(undefined8 *)(param_1 + 0x58),0);
    if (*(longlong *)(param_1 + 0x38) != 0) {
        FUN_140631970(param_1 + 0x28,*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 8));
        *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
        *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x18) = *(longlong *)(param_1 + 0x30);
        *(undefined8 *)(param_1 + 0x38) = 0;
    }
    FUN_14018b900(*(undefined8 *)(param_1 + 0x30),0);
    FUN_140019490(param_1);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x10),0);
    *(undefined8 *)(param_1 + 0x10) = 0;
    return;
}



undefined8 FUN_140630250(void)

{
    longlong lVar1;
    undefined4 uVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;

    lVar3 = DAT_140c65c18;
    uVar2 = DAT_140c636a8;
    lVar4 = *(longlong *)(*(longlong *)(DAT_140c65c18 + 0x58) + 0x10);
    if (lVar4 != *(longlong *)(DAT_140c65c18 + 0x58)) {
        do {
            *(undefined4 *)(lVar4 + 0x3c) = uVar2;
            *(undefined4 *)(lVar4 + 0x38) = *(undefined4 *)(lVar4 + 0x34);
            lVar5 = *(longlong *)(lVar4 + 0x18);
            if (lVar5 == 0) {
                lVar5 = *(longlong *)(lVar4 + 8);
                if (lVar4 == *(longlong *)(lVar5 + 0x18)) {
                    do {
                        lVar4 = lVar5;
                        lVar5 = *(longlong *)(lVar4 + 8);
                    } while (lVar4 == *(longlong *)(lVar5 + 0x18));
                }
                if (*(longlong *)(lVar4 + 0x18) != lVar5) {
                    lVar4 = lVar5;
                }
            }
            else {
                for (lVar1 = *(longlong *)(lVar5 + 0x10); lVar4 = lVar5, lVar1 != 0;
                     lVar1 = *(longlong *)(lVar1 + 0x10)) {
                    lVar5 = lVar1;
                }
            }
        } while (lVar4 != *(longlong *)(lVar3 + 0x58));
    }
    lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x78) + 0x10);
    if (lVar4 != *(longlong *)(lVar3 + 0x78)) {
        do {
            *(undefined4 *)(lVar4 + 0x3c) = uVar2;
            *(undefined4 *)(lVar4 + 0x38) = *(undefined4 *)(lVar4 + 0x34);
            lVar5 = *(longlong *)(lVar4 + 0x18);
            if (lVar5 == 0) {
                lVar5 = *(longlong *)(lVar4 + 8);
                if (lVar4 == *(longlong *)(lVar5 + 0x18)) {
                    do {
                        lVar4 = lVar5;
                        lVar5 = *(longlong *)(lVar4 + 8);
                    } while (lVar4 == *(longlong *)(lVar5 + 0x18));
                }
                if (*(longlong *)(lVar4 + 0x18) != lVar5) {
                    lVar4 = lVar5;
                }
            }
            else {
                for (lVar1 = *(longlong *)(lVar5 + 0x10); lVar4 = lVar5, lVar1 != 0;
                     lVar1 = *(longlong *)(lVar1 + 0x10)) {
                    lVar5 = lVar1;
                }
            }
        } while (lVar4 != *(longlong *)(lVar3 + 0x78));
    }
    return 0;
}



void FUN_140630340(longlong param_1)

{
    longlong lVar1;
    ulonglong *puVar2;
    longlong *plVar3;
    int iVar4;
    ulonglong uVar5;
    longlong lVar6;
    ulonglong **ppuVar7;
    longlong local_res8;
    longlong local_res10;

    plVar3 = DAT_140c65c18;
    lVar6 = *(longlong *)(DAT_140c65c18[6] + 0x10);
    local_res8 = param_1;
    if (lVar6 != DAT_140c65c18[6]) {
        do {
            local_res8 = *(longlong *)(*(longlong *)(lVar6 + 0x30) + 0x18);
            if (local_res8 != 0) {
                lVar1 = *(longlong *)(*(longlong *)(lVar6 + 0x30) + 0x30);
                *(undefined4 *)(*(longlong *)(lVar6 + 0x30) + 0x2c) = 0;
                for (; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x78)) {
                    FUN_1406a4360(lVar1,lVar1 + 8,&DAT_1409f65fc,lVar1,6);
                }
                local_res10 = local_res8;
                FUN_1403f4740(DAT_140c65898,0x549,&local_res10);
                uVar5 = (*(code *)plVar3[3])(&local_res8);
                ppuVar7 = (ulonglong **)(plVar3[2] + (uVar5 % (ulonglong)plVar3[1]) * 8);
                puVar2 = *(ulonglong **)(plVar3[2] + (uVar5 % (ulonglong)plVar3[1]) * 8);
                while (puVar2 != (ulonglong *)0x0) {
                    if ((uVar5 == **ppuVar7) &&
                        (iVar4 = (*(code *)plVar3[4])(&local_res8,*ppuVar7 + 2), iVar4 != 0)) {
                        puVar2 = *ppuVar7;
                        *ppuVar7 = (ulonglong *)puVar2[1];
                        FUN_14018b900(puVar2,0);
                        *plVar3 = *plVar3 + -1;
                        break;
                    }
                    ppuVar7 = (ulonglong **)(*ppuVar7 + 1);
                    puVar2 = *ppuVar7;
                }
            }
            local_res10 = lVar6;
            FUN_140631d50(plVar3 + 5,&local_res10);
            lVar6 = *(longlong *)(plVar3[6] + 0x10);
        } while (lVar6 != plVar3[6]);
    }
    FUN_140019490(plVar3);
    return;
}



undefined4 FUN_1406304a0(undefined8 param_1,int param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(DAT_140c65c18 + 0x58);
    local_res8 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x20) < param_2) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res8 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res8 == lVar1) || (param_2 < *(int *)(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    if (local_res8 == lVar1) {
        return 0;
    }
    local_res8 = local_res8 + 0x28;
    FUN_1407a00f0();
    return *(undefined4 *)(local_res8 + 0x10);
}



undefined4 FUN_140630510(undefined8 param_1,int param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(DAT_140c65c18 + 0x78);
    local_res8 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x20) < param_2) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res8 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res8 == lVar1) || (param_2 < *(int *)(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    if (local_res8 == lVar1) {
        return 0;
    }
    local_res8 = local_res8 + 0x28;
    FUN_1407a00f0();
    return *(undefined4 *)(local_res8 + 0x10);
}



void FUN_140630580(longlong param_1)

{
    uint *puVar1;
    longlong lVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    longlong *plVar6;
    longlong lVar7;
    longlong lVar8;
    longlong lVar9;
    longlong lVar10;
    uint uVar11;
    uint uVar12;
    longlong local_res8;
    longlong local_res10;
    undefined8 local_48;
    ulonglong local_40;
    undefined8 local_38;
    undefined8 local_30;

    lVar2 = DAT_140c65c18;
    local_res8 = param_1;
    lVar9 = *(longlong *)(*(longlong *)(DAT_140c65c18 + 0xb0) + 0x10);
    lVar10 = DAT_140c65898;
    if (lVar9 != *(longlong *)(DAT_140c65c18 + 0xb0)) {
        do {
            if (*(longlong *)(lVar9 + 0x60) != *(longlong *)(lVar9 + 0x40)) {
                lVar7 = *(longlong *)(lVar2 + 0x58);
                lVar8 = lVar7;
                if (*(longlong *)(lVar7 + 8) != 0) {
                    lVar4 = *(longlong *)(lVar7 + 8);
                    do {
                        if (*(int *)(lVar4 + 0x20) < *(int *)(lVar9 + 0x20)) {
                            lVar5 = *(longlong *)(lVar4 + 0x18);
                        }
                        else {
                            lVar5 = *(longlong *)(lVar4 + 0x10);
                            lVar8 = lVar4;
                        }
                        lVar4 = lVar5;
                    } while (lVar5 != 0);
                }
                if ((lVar8 == lVar7) || (*(int *)(lVar9 + 0x20) < *(int *)(lVar8 + 0x20))) {
                    local_res10 = lVar7;
                    plVar6 = &local_res10;
                }
                else {
                    local_res8 = lVar8;
                    plVar6 = &local_res8;
                }
                lVar8 = *plVar6;
                if (lVar8 != lVar7) {
                    if ((((*(int *)(lVar9 + 0x20) == 2) && (lVar10 != 0)) &&
                         (*(longlong *)(lVar10 + 0x6c50) != 0)) &&
                        (uVar11 = *(uint *)(*(longlong *)(lVar10 + 0x6c50) + 0x60), uVar11 != 0)) {
                        uVar11 = *(uint *)(lVar2 + 0x48) / uVar11;
                        FUN_1407a00f0(lVar8 + 0x28);
                        *(uint *)(lVar8 + 0x34) = uVar11;
                        FUN_1407a00f0();
                    }
                    if (*(longlong *)(lVar9 + 0x60) != *(longlong *)(lVar9 + 0x40)) {
                        while( true ) {
                            FUN_1407a00f0();
                            iVar3 = *(int *)(lVar2 + 0xa0);
                            if ((iVar3 < 1) || (*(int *)(lVar2 + 0x98) == 0)) break;
                            *(int *)(lVar2 + 0xa0) = iVar3 + -1;
                            if (iVar3 + -1 < 0) {
                                *(int *)(lVar2 + 0xa0) = iVar3 + -2;
                            }
                            puVar1 = *(uint **)(lVar9 + 0x40);
                            uVar11 = 0xffffffff;
                            if (*(uint *)(*(longlong *)(puVar1 + 4) + -8) != 0xffffffff) {
                                uVar11 = *(uint *)(*(longlong *)(puVar1 + 4) + -8);
                            }
                            uVar12 = 0;
                            if (uVar11 != 0) {
                                uVar12 = uVar11;
                            }
                            uVar11 = 0x7fffffff;
                            if ((int)uVar12 < 0x7fffffff) {
                                uVar11 = uVar12;
                            }
                            uVar12 = 0x80000000;
                            if (-0x80000000 < (int)uVar11) {
                                uVar12 = uVar11;
                            }
                            FUN_1407a00f0(lVar8 + 0x28);
                            if ((*(int *)(lVar8 + 0x38) < 1) || (*(uint *)(lVar8 + 0x30) < uVar12)) break;
                            iVar3 = *(int *)(lVar8 + 0x38) - uVar12;
                            *(int *)(lVar8 + 0x38) = iVar3;
                            if (iVar3 < 0) {
                                *(uint *)(lVar8 + 0x38) = iVar3 - uVar12;
                            }
                            local_48 = *(undefined8 *)(puVar1 + 2);
                            local_38 = *(undefined8 *)(puVar1 + 4);
                            local_40 = (ulonglong)*puVar1;
                            local_30 = *(undefined8 *)(puVar1 + 6);
                            FUN_1403f4740(lVar10,0x54b,&local_48);
                            lVar10 = *(longlong *)(lVar9 + 0x40);
                            if (lVar10 == *(longlong *)(lVar9 + 0x50) + -0x20) {
                                FUN_1406326f0(lVar9 + 0x28);
                            }
                            else {
                                lVar7 = *(longlong *)(lVar10 + 0x18);
                                if (lVar7 != 0) {
                                    (**(code **)(*(longlong *)(lVar7 + -0x10) + 8))(lVar7 + -0x10);
                                }
                                lVar10 = *(longlong *)(lVar10 + 0x10);
                                if (lVar10 != 0) {
                                    (**(code **)(*(longlong *)(lVar10 + -0x10) + 8))(lVar10 + -0x10);
                                }
                                *(longlong *)(lVar9 + 0x40) = *(longlong *)(lVar9 + 0x40) + 0x20;
                            }
                            lVar10 = DAT_140c65898;
                            if (*(longlong *)(lVar9 + 0x60) == *(longlong *)(lVar9 + 0x40)) break;
                        }
                    }
                }
            }
            lVar7 = *(longlong *)(lVar9 + 0x18);
            if (lVar7 == 0) {
                lVar7 = *(longlong *)(lVar9 + 8);
                if (lVar9 == *(longlong *)(lVar7 + 0x18)) {
                    do {
                        lVar9 = lVar7;
                        lVar7 = *(longlong *)(lVar9 + 8);
                    } while (lVar9 == *(longlong *)(lVar7 + 0x18));
                }
                if (*(longlong *)(lVar9 + 0x18) != lVar7) {
                    lVar9 = lVar7;
                }
            }
            else {
                for (lVar8 = *(longlong *)(lVar7 + 0x10); lVar9 = lVar7, lVar8 != 0;
                     lVar8 = *(longlong *)(lVar8 + 0x10)) {
                    lVar7 = lVar8;
                }
            }
        } while (lVar9 != *(longlong *)(lVar2 + 0xb0));
    }
    return;
}



undefined8 FUN_140630850(undefined8 param_1,undefined8 *param_2)

{
    ulonglong *puVar1;
    undefined8 uVar2;
    undefined8 uVar3;
    longlong lVar4;
    int iVar5;
    ulonglong uVar6;
    undefined8 local_res8;

    lVar4 = DAT_140c65c18;
    local_res8 = param_1;
    uVar6 = (**(code **)(DAT_140c65c18 + 0x18))(param_2);
    puVar1 = *(ulonglong **)(*(longlong *)(lVar4 + 0x10) + (uVar6 % *(ulonglong *)(lVar4 + 8)) * 8);
    do {
        if (puVar1 == (ulonglong *)0x0) {
            LAB_1406308ac:
            local_res8 = *param_2;
            FUN_1403f4740(DAT_140c65898,0x549,&local_res8);
            return 0;
        }
        if ((uVar6 == *puVar1) && (iVar5 = (**(code **)(lVar4 + 0x20))(param_2,puVar1 + 2), iVar5 != 0))
        {
            if (puVar1 + 3 != (ulonglong *)0x0) {
                uVar2 = param_2[1];
                uVar3 = param_2[2];
                for (lVar4 = *(longlong *)(puVar1[3] + 0x30); lVar4 != 0;
                     lVar4 = *(longlong *)(lVar4 + 0x78)) {
                    FUN_1406a4360(lVar4,lVar4 + 0x20,&DAT_1409f65ec,lVar4,uVar2,uVar3);
                }
                return 0;
            }
            goto LAB_1406308ac;
        }
        puVar1 = (ulonglong *)puVar1[1];
    } while( true );
}



undefined8 FUN_140630930(longlong param_1,undefined4 *param_2)

{
    ulonglong **ppuVar1;
    short sVar2;
    short *psVar3;
    longlong lVar4;
    longlong lVar5;
    longlong *plVar6;
    int iVar7;
    ulonglong *puVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    ulonglong *puVar11;
    ulonglong *puVar12;
    ulonglong *puVar13;
    longlong local_res8;
    undefined4 local_38 [2];
    ulonglong *local_30;

    plVar6 = DAT_140c65c18;
    psVar3 = *(short **)(param_2 + 4);
    puVar12 = (ulonglong *)0x0;
    puVar11 = puVar12;
    local_res8 = param_1;
    if (psVar3 != (short *)0x0) {
        sVar2 = *psVar3;
        puVar13 = puVar12;
        while (sVar2 != 0) {
            puVar13 = (ulonglong *)((longlong)puVar13 + 1);
            sVar2 = psVar3[(longlong)puVar13];
        }
        puVar8 = (ulonglong *)FUN_14018b280((longlong)puVar13 * 2 + 0x12,0);
        if (puVar8 != (ulonglong *)0x0) {
            *puVar8 = (ulonglong)&PTR_LAB_140b55060;
            puVar8[1] = (ulonglong)puVar13;
            puVar11 = puVar8;
        }
        puVar11 = puVar11 + 2;
        FUN_1407db590(puVar11,psVar3,(longlong)puVar13 * 2);
        *(undefined2 *)((longlong)puVar13 * 2 + (longlong)puVar11) = 0;
    }
    local_38[0] = *param_2;
    if (puVar11 == (ulonglong *)0x0) {
        local_30 = (ulonglong *)0x0;
    }
    else {
        uVar9 = puVar11[-1];
        puVar13 = (ulonglong *)FUN_14018b280(uVar9 * 2 + 0x12,0);
        local_30 = puVar12;
        if (puVar13 != (ulonglong *)0x0) {
            *puVar13 = (ulonglong)&PTR_LAB_140b55060;
            puVar13[1] = uVar9;
            local_30 = puVar13;
        }
        local_30 = local_30 + 2;
        FUN_1407db590(local_30,puVar11,uVar9 * 2);
        *(undefined2 *)(uVar9 * 2 + (longlong)local_30) = 0;
    }
    puVar13 = local_30;
    FUN_140631e70(plVar6 + 5,&local_res8,local_38);
    if (puVar13 != (ulonglong *)0x0) {
        (**(code **)(puVar13[-2] + 8))(puVar13 + -2);
    }
    if (puVar11 != (ulonglong *)0x0) {
        (**(code **)(puVar11[-2] + 8))(puVar11 + -2);
    }
    lVar4 = local_res8;
    if (local_res8 != plVar6[6]) {
        puVar13 = (ulonglong *)(param_2 + 2);
        uVar9 = (*(code *)plVar6[3])(puVar13);
        for (puVar11 = *(ulonglong **)(plVar6[2] + (uVar9 % (ulonglong)plVar6[1]) * 8);
             puVar11 != (ulonglong *)0x0; puVar11 = (ulonglong *)puVar11[1]) {
            if ((uVar9 == *puVar11) && (iVar7 = (*(code *)plVar6[4])(puVar13), iVar7 != 0)) {
                if (puVar11 != (ulonglong *)&DAT_ffffffffffffffe8) goto LAB_140630af8;
                break;
            }
        }
        uVar9 = *(ulonglong *)(lVar4 + 0x30);
        if (*plVar6 == plVar6[1]) {
            FUN_1400290d0(plVar6);
        }
        uVar10 = (*(code *)plVar6[3])(puVar13);
        ppuVar1 = (ulonglong **)(plVar6[2] + (uVar10 % (ulonglong)plVar6[1]) * 8);
        puVar11 = (ulonglong *)FUN_14018b280(0x20);
        if (puVar11 != (ulonglong *)0x0) {
            puVar12 = *ppuVar1;
            *puVar11 = uVar10;
            puVar11[1] = (ulonglong)puVar12;
            uVar10 = *puVar13;
            puVar11[3] = uVar9;
            puVar11[2] = uVar10;
            puVar12 = puVar11;
        }
        *ppuVar1 = puVar12;
        *plVar6 = *plVar6 + 1;
        LAB_140630af8:
        lVar4 = *(longlong *)(lVar4 + 0x30);
        *(ulonglong *)(lVar4 + 0x18) = *puVar13;
        lVar5 = *(longlong *)(lVar4 + 0x30);
        *(undefined4 *)(lVar4 + 0x2c) = 1;
        for (; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x78)) {
            FUN_1406a4360(lVar5,lVar5 + 8,&DAT_1409f65fc,lVar5,5);
        }
    }
    return 0;
}



undefined8 FUN_140630b70(undefined8 param_1,undefined8 param_2)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    ulonglong uVar4;
    undefined8 *puVar5;
    ulonglong *puVar6;
    undefined4 local_28 [2];
    undefined8 *local_20;

    lVar2 = DAT_140c65c18;
    uVar4 = (**(code **)(DAT_140c65c18 + 0x18))(param_2);
    puVar6 = *(ulonglong **)(*(longlong *)(lVar2 + 0x10) + (uVar4 % *(ulonglong *)(lVar2 + 8)) * 8);
    if (puVar6 != (ulonglong *)0x0) {
        while ((uVar4 != *puVar6 ||
                (iVar3 = (**(code **)(lVar2 + 0x20))(param_2,puVar6 + 2), iVar3 == 0))) {
            puVar6 = (ulonglong *)puVar6[1];
            if (puVar6 == (ulonglong *)0x0) {
                return 0;
            }
        }
        if (puVar6 + 3 != (ulonglong *)0x0) {
            uVar4 = puVar6[3];
            lVar1 = *(longlong *)(uVar4 + 0x30);
            local_20 = (undefined8 *)0x0;
            *(undefined4 *)(uVar4 + 0x2c) = 0;
            for (; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x78)) {
                FUN_1406a4360(lVar1,lVar1 + 8,&DAT_1409f65fc,lVar1,6);
            }
            FUN_1400b6120(lVar2,param_2);
            local_28[0] = *(undefined4 *)(uVar4 + 0x28);
            if (*(longlong *)(uVar4 + 0x10) == 0) {
                local_20 = (undefined8 *)0x0;
            }
            else {
                lVar1 = *(longlong *)(*(longlong *)(uVar4 + 0x10) + -8);
                puVar5 = (undefined8 *)FUN_14018b280(lVar1 * 2 + 0x12,0);
                if (puVar5 != (undefined8 *)0x0) {
                    puVar5[1] = lVar1;
                    *puVar5 = &PTR_LAB_140b55060;
                    local_20 = puVar5;
                }
                local_20 = local_20 + 2;
                FUN_1407db590(local_20,*(undefined8 *)(uVar4 + 0x10),lVar1 * 2);
                *(undefined2 *)(lVar1 * 2 + (longlong)local_20) = 0;
            }
            puVar5 = local_20;
            FUN_140631c10(lVar2 + 0x28,local_28);
            if (puVar5 != (undefined8 *)0x0) {
                (**(code **)(puVar5[-2] + 8))(puVar5 + -2);
            }
        }
    }
    return 0;
}



undefined8 FUN_140630f30(undefined8 param_1,undefined8 *param_2)

{
    undefined4 uVar1;
    ulonglong *puVar2;
    undefined8 uVar3;
    longlong lVar4;
    int iVar5;
    ulonglong uVar6;
    undefined8 local_res8;

    lVar4 = DAT_140c65c18;
    local_res8 = param_1;
    uVar6 = (**(code **)(DAT_140c65c18 + 0x18))(param_2);
    puVar2 = *(ulonglong **)(*(longlong *)(lVar4 + 0x10) + (uVar6 % *(ulonglong *)(lVar4 + 8)) * 8);
    do {
        if (puVar2 == (ulonglong *)0x0) {
            LAB_140630f8c:
            local_res8 = *param_2;
            FUN_1403f4740(DAT_140c65898,0x549,&local_res8);
            return 0;
        }
        if ((uVar6 == *puVar2) && (iVar5 = (**(code **)(lVar4 + 0x20))(param_2,puVar2 + 2), iVar5 != 0))
        {
            if (puVar2 + 3 != (ulonglong *)0x0) {
                uVar1 = *(undefined4 *)(param_2 + 1);
                uVar3 = param_2[2];
                for (lVar4 = *(longlong *)(puVar2[3] + 0x30); lVar4 != 0;
                     lVar4 = *(longlong *)(lVar4 + 0x78)) {
                    FUN_1406a4360(lVar4,lVar4 + 0x20,&DAT_1409f6334,lVar4,uVar3,uVar1);
                }
                return 0;
            }
            goto LAB_140630f8c;
        }
        puVar2 = (ulonglong *)puVar2[1];
    } while( true );
}



longlong * FUN_140631010(longlong param_1,uint param_2,short *param_3,longlong param_4)

{
    short sVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong *plVar4;
    longlong lVar5;
    longlong *plVar6;
    longlong **pplVar7;
    longlong *plVar8;
    longlong local_res8;
    uint local_58 [2];
    longlong *local_50;
    ulonglong local_48;
    longlong local_40;
    short *local_38;

    lVar5 = DAT_140c65c18;
    plVar6 = (longlong *)0x0;
    plVar4 = plVar6;
    local_res8 = param_1;
    if (param_3 != (short *)0x0) {
        sVar1 = *param_3;
        plVar8 = plVar6;
        while (sVar1 != 0) {
            plVar8 = (longlong *)((longlong)plVar8 + 1);
            sVar1 = param_3[(longlong)plVar8];
        }
        plVar3 = (longlong *)FUN_14018b280((longlong)plVar8 * 2 + 0x12,0);
        if (plVar3 != (longlong *)0x0) {
            *plVar3 = (longlong)&PTR_LAB_140b55060;
            plVar3[1] = (longlong)plVar8;
            plVar4 = plVar3;
        }
        plVar4 = plVar4 + 2;
        FUN_1407db590(plVar4,param_3,(longlong)plVar8 * 2);
        *(undefined2 *)((longlong)plVar8 * 2 + (longlong)plVar4) = 0;
    }
    local_58[0] = param_2;
    if (plVar4 == (longlong *)0x0) {
        local_50 = (longlong *)0x0;
        plVar8 = plVar6;
    }
    else {
        lVar2 = plVar4[-1];
        plVar3 = (longlong *)FUN_14018b280(lVar2 * 2 + 0x12,0);
        plVar8 = plVar6;
        if (plVar3 != (longlong *)0x0) {
            *plVar3 = (longlong)&PTR_LAB_140b55060;
            plVar3[1] = lVar2;
            plVar8 = plVar3;
        }
        plVar8 = plVar8 + 2;
        FUN_1407db590(plVar8,plVar4,lVar2 * 2);
        *(undefined2 *)(lVar2 * 2 + (longlong)plVar8) = 0;
        local_50 = plVar8;
        (**(code **)(plVar4[-2] + 8))();
    }
    lVar2 = lVar5 + 0x28;
    FUN_140631e70(lVar2,&local_res8,local_58);
    if (local_res8 == *(longlong *)(lVar5 + 0x30)) {
        lVar5 = FUN_14018b280(0x38);
        if (lVar5 != 0) {
            plVar6 = (longlong *)FUN_14062fb50(lVar5,param_2,param_3,param_4);
        }
        pplVar7 = (longlong **)FUN_140631430(lVar2,local_58);
        plVar4 = *pplVar7;
        if (plVar4 != plVar6) {
            if (plVar4 != (longlong *)0x0) {
                (**(code **)(*plVar4 + 8))();
            }
            *pplVar7 = plVar6;
        }
        local_48 = (ulonglong)param_2;
        local_40 = param_4;
        local_38 = param_3;
        FUN_1403f4740(DAT_140c65898,0x546,&local_48);
        plVar8 = local_50;
    }
    else {
        plVar6 = *(longlong **)(local_res8 + 0x30);
        if (plVar6[4] != param_4) {
            local_48 = (ulonglong)param_2;
            local_40 = param_4;
            local_38 = param_3;
            FUN_1403f4740(DAT_140c65898,0x546,&local_48);
            plVar6[4] = param_4;
        }
    }
    if (plVar8 != (longlong *)0x0) {
        (**(code **)(plVar8[-2] + 8))(plVar8 + -2);
    }
    return plVar6;
}



undefined4
FUN_140631240(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
              undefined8 param_5)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 uVar3;
    longlong *plVar4;
    undefined4 local_res18 [4];
    undefined4 local_48 [4];
    longlong local_38;
    longlong local_30;
    undefined local_28 [16];
    longlong local_18;
    longlong local_10;

    lVar1 = DAT_140c65c18;
    local_res18[0] = param_3;
    FUN_14062fcb0(local_48,param_2,param_4,param_5);
    lVar2 = FUN_140631600(lVar1 + 0xa8,local_res18);
    lVar1 = *(longlong *)(lVar2 + 0x38);
    if (lVar1 == *(longlong *)(lVar2 + 0x48) + -0x20) {
        FUN_140632770(local_28,local_48);
        if ((ulonglong)
                    (*(longlong *)(lVar2 + 0x10) - (*(longlong *)(lVar2 + 0x50) - *(longlong *)(lVar2 + 8) >> 3)
                    ) < 2) {
            FUN_140633010(lVar2);
        }
        uVar3 = FUN_14018b280(0x1e0,0);
        *(undefined8 *)(*(longlong *)(lVar2 + 0x50) + 8) = uVar3;
        if (*(longlong *)(lVar2 + 0x38) != 0) {
            FUN_140632770(*(longlong *)(lVar2 + 0x38),local_28);
        }
        plVar4 = (longlong *)(*(longlong *)(lVar2 + 0x50) + 8);
        *(longlong **)(lVar2 + 0x50) = plVar4;
        lVar1 = *plVar4;
        *(longlong *)(lVar2 + 0x40) = lVar1;
        *(longlong *)(lVar2 + 0x48) = lVar1 + 0x1e0;
        *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)(lVar2 + 0x40);
        if (local_10 != 0) {
            (**(code **)(*(longlong *)(local_10 + -0x10) + 8))(local_10 + -0x10);
        }
        if (local_18 != 0) {
            (**(code **)(*(longlong *)(local_18 + -0x10) + 8))(local_18 + -0x10);
        }
    }
    else {
        if (lVar1 != 0) {
            FUN_140632770(lVar1,local_48);
        }
        *(longlong *)(lVar2 + 0x38) = *(longlong *)(lVar2 + 0x38) + 0x20;
    }
    if (local_30 != 0) {
        (**(code **)(*(longlong *)(local_30 + -0x10) + 8))(local_30 + -0x10);
    }
    if (local_38 != 0) {
        (**(code **)(*(longlong *)(local_38 + -0x10) + 8))(local_38 + -0x10);
    }
    return local_48[0];
}



int FUN_140631390(void)

{
    int iVar1;
    longlong lVar2;

    if (DAT_140c65c18 != 0) {
        return 0;
    }
    lVar2 = FUN_14018b280(200,0);
    if (lVar2 == 0) {
        DAT_140c65c18 = 0;
    }
    else {
        DAT_140c65c18 = FUN_14062fdc0(lVar2);
    }
    lVar2 = DAT_140c65c18;
    iVar1 = FUN_140630250();
    if (iVar1 < 0) {
        if (lVar2 != 0) {
            FUN_140630100(lVar2);
            FUN_14018b900(lVar2,0);
        }
        DAT_140c65c18 = 0;
        return iVar1;
    }
    return 0;
}



longlong FUN_140631430(longlong param_1,int *param_2)

{
    longlong lVar1;
    int iVar2;
    uint uVar3;
    longlong lVar4;
    longlong local_res8;
    longlong local_res18;
    undefined local_28 [8];
    longlong local_20;
    longlong *local_18;

    FUN_140631f70();
    if (local_res8 != *(longlong *)(param_1 + 8)) {
        if (*(int *)(local_res8 + 0x20) <= *param_2) {
            if (*(int *)(local_res8 + 0x20) < *param_2) goto LAB_14063150a;
            lVar4 = 0;
            uVar3 = (uint)**(ushort **)(param_2 + 2);
            iVar2 = uVar3 - **(ushort **)(local_res8 + 0x28);
            while (iVar2 == 0) {
                if ((short)uVar3 == 0) goto LAB_14063150a;
                uVar3 = (uint)(*(ushort **)(param_2 + 2))[lVar4 + 1];
                lVar1 = lVar4 + 1;
                lVar4 = lVar4 + 1;
                iVar2 = uVar3 - (*(ushort **)(local_res8 + 0x28))[lVar1];
            }
            if (-1 < iVar2) goto LAB_14063150a;
        }
    }
    FUN_14001af60(local_28,param_2);
    local_18 = (longlong *)0x0;
    FUN_1406319f0(param_1,&local_res18,&local_res8,local_28);
    if (local_18 != (longlong *)0x0) {
        (**(code **)(*local_18 + 8))();
    }
    local_res8 = local_res18;
    if (local_20 != 0) {
        (**(code **)(*(longlong *)(local_20 + -0x10) + 8))(local_20 + -0x10);
    }
    LAB_14063150a:
    return local_res8 + 0x30;
}



longlong FUN_140631520(longlong param_1,int *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong local_res8;
    longlong local_res18;
    int local_28 [2];
    undefined **local_20;
    undefined4 local_18;
    undefined8 local_14;
    undefined4 local_c;

    lVar3 = *(longlong *)(param_1 + 8);
    local_res8 = lVar3;
    if (*(longlong *)(lVar3 + 8) != 0) {
        lVar1 = *(longlong *)(lVar3 + 8);
        do {
            if (*(int *)(lVar1 + 0x20) < *param_2) {
                lVar2 = *(longlong *)(lVar1 + 0x18);
            }
            else {
                lVar2 = *(longlong *)(lVar1 + 0x10);
                local_res8 = lVar1;
            }
            lVar1 = lVar2;
        } while (lVar2 != 0);
    }
    if ((local_res8 != lVar3) && (*(int *)(local_res8 + 0x20) <= *param_2)) {
        return local_res8 + 0x28;
    }
    lVar3 = FUN_140200220();
    if (lVar3 == 0) {
        local_18 = 500000;
    }
    else {
        local_18 = *(undefined4 *)(lVar3 + 4);
    }
    local_28[0] = *param_2;
    local_20 = &PTR_FUN_140b68f20;
    local_14 = 0;
    local_c = DAT_140c636a8;
    FUN_140632090(param_1,&local_res18,&local_res8,local_28);
    return local_res18 + 0x28;
}



longlong FUN_140631600(longlong param_1,int *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong local_res8;
    longlong local_res18;
    undefined local_c8 [8];
    undefined8 local_c0;
    undefined8 local_b8;
    undefined8 local_b0;
    undefined8 local_a8;
    undefined8 local_a0;
    undefined8 local_98;
    undefined8 local_90;
    undefined8 local_88;
    undefined8 local_80;
    undefined8 local_78;
    int local_70 [2];
    undefined local_68 [96];

    lVar1 = *(longlong *)(param_1 + 8);
    local_res8 = lVar1;
    if (*(longlong *)(lVar1 + 8) != 0) {
        lVar2 = *(longlong *)(lVar1 + 8);
        do {
            if (*(int *)(lVar2 + 0x20) < *param_2) {
                lVar3 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                lVar3 = *(longlong *)(lVar2 + 0x10);
                local_res8 = lVar2;
            }
            lVar2 = lVar3;
        } while (lVar3 != 0);
    }
    if ((local_res8 == lVar1) || (*param_2 < *(int *)(local_res8 + 0x20))) {
        local_c0 = 0;
        local_b8 = 0;
        local_b0 = 0;
        local_a8 = 0;
        local_a0 = 0;
        local_98 = 0;
        local_90 = 0;
        local_88 = 0;
        local_80 = 0;
        local_78 = 0;
        FUN_1406325e0(local_c8,0);
        local_70[0] = *param_2;
        FUN_1406317f0(local_68,local_c8);
        FUN_1406323d0(param_1,&local_res18,&local_res8,local_70);
        FUN_140631770(local_68);
        FUN_140631770(local_c8);
        local_res8 = local_res18;
    }
    return local_res8 + 0x28;
}



ulonglong FUN_140631710(undefined8 param_1,uint *param_2,int *param_3)

{
    ushort uVar1;
    ushort uVar2;
    uint uVar3;
    longlong lVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    int iVar7;
    longlong lVar8;

    uVar3 = *param_2;
    uVar6 = (ulonglong)uVar3;
    if (*param_3 <= (int)uVar3) {
        if ((int)uVar3 <= *param_3) {
            lVar8 = 0;
            uVar1 = **(ushort **)(param_2 + 2);
            uVar2 = **(ushort **)(param_3 + 2);
            uVar6 = (ulonglong)uVar2;
            iVar7 = (uint)uVar1 - (uint)uVar2;
            uVar5 = (ulonglong)uVar1;
            while (iVar7 == 0) {
                uVar6 = uVar5;
                if ((short)uVar5 == 0) goto LAB_14063175e;
                uVar1 = (*(ushort **)(param_2 + 2))[lVar8 + 1];
                uVar6 = (ulonglong)uVar1;
                lVar4 = lVar8 + 1;
                lVar8 = lVar8 + 1;
                uVar5 = uVar6;
                iVar7 = (uint)uVar1 - (uint)(*(ushort **)(param_3 + 2))[lVar4];
            }
            if (iVar7 < 0) goto LAB_140631761;
        }
        LAB_14063175e:
        return uVar6 & 0xffffffffffffff00;
    }
    LAB_140631761:
    return CONCAT71((int7)(uVar6 >> 8),1);
}



void FUN_140631770(longlong param_1)

{
    undefined8 local_48;
    undefined8 local_40;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;
    undefined8 local_10;

    local_20 = *(undefined8 *)(param_1 + 0x20);
    local_48 = *(undefined8 *)(param_1 + 0x38);
    local_40 = *(undefined8 *)(param_1 + 0x40);
    local_38 = *(undefined8 *)(param_1 + 0x48);
    local_30 = *(undefined8 *)(param_1 + 0x50);
    local_28 = *(undefined8 *)(param_1 + 0x18);
    local_18 = *(undefined8 *)(param_1 + 0x28);
    local_10 = *(undefined8 *)(param_1 + 0x30);
    FUN_140633270(&local_28,&local_48);
    FUN_14033e040(param_1);
    return;
}



longlong FUN_1406317f0(longlong param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;

    lVar7 = *(longlong *)(param_2 + 0x38);
    lVar4 = *(longlong *)(param_2 + 0x40);
    lVar1 = *(longlong *)(param_2 + 0x50);
    lVar6 = *(longlong *)(param_2 + 0x30);
    lVar2 = *(longlong *)(param_2 + 0x28);
    lVar5 = *(longlong *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    FUN_1406325e0(param_1,(lVar7 - lVar4 >> 5) + ((lVar1 - lVar6 >> 3) + -1) * 0xf +
                          (lVar2 - lVar5 >> 5));
    lVar6 = *(longlong *)(param_2 + 0x18);
    lVar2 = *(longlong *)(param_2 + 0x38);
    lVar1 = *(longlong *)(param_1 + 0x28);
    lVar5 = *(longlong *)(param_1 + 0x30);
    lVar4 = *(longlong *)(param_2 + 0x28);
    lVar7 = *(longlong *)(param_2 + 0x30);
    lVar3 = *(longlong *)(param_1 + 0x18);
    while (lVar6 != lVar2) {
        if (lVar3 != 0) {
            FUN_140632770(lVar3,lVar6);
        }
        lVar6 = lVar6 + 0x20;
        if (lVar6 == lVar4) {
            lVar6 = *(longlong *)(lVar7 + 8);
            lVar7 = lVar7 + 8;
            lVar4 = lVar6 + 0x1e0;
        }
        lVar3 = lVar3 + 0x20;
        if (lVar3 == lVar1) {
            lVar3 = *(longlong *)(lVar5 + 8);
            lVar5 = lVar5 + 8;
            lVar1 = lVar3 + 0x1e0;
        }
    }
    return param_1;
}



void FUN_140631970(undefined8 param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;

    if (param_2 != 0) {
        do {
            FUN_140631970(param_1,*(undefined8 *)(param_2 + 0x18));
            lVar1 = *(longlong *)(param_2 + 0x10);
            if (*(longlong **)(param_2 + 0x30) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(param_2 + 0x30) + 8))();
            }
            lVar2 = *(longlong *)(param_2 + 0x28);
            if (lVar2 != 0) {
                (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
            }
            FUN_14018b900(param_2,0);
            param_2 = lVar1;
        } while (lVar1 != 0);
    }
    return;
}



longlong * FUN_1406319f0(longlong param_1,longlong *param_2,char **param_3,longlong param_4)

{
    char *pcVar1;
    char *pcVar2;
    undefined8 *puVar3;
    char cVar4;
    longlong lVar5;
    longlong *plVar6;
    longlong lVar7;
    bool bVar8;
    undefined local_28 [16];

    pcVar1 = *(char **)(param_1 + 8);
    pcVar2 = *param_3;
    if (pcVar2 == *(char **)(pcVar1 + 0x10)) {
        if ((*(longlong *)(param_1 + 0x10) != 0) &&
            (cVar4 = FUN_140631710(param_1,param_4,pcVar2 + 0x20), cVar4 != '\0')) {
            FUN_140632870(param_1,param_2,pcVar2,pcVar2,param_4);
            return param_2;
        }
    }
    else if (pcVar2 == pcVar1) {
        pcVar2 = *(char **)(pcVar1 + 0x18);
        cVar4 = FUN_140631710(param_1,pcVar2 + 0x20,param_4);
        if (cVar4 != '\0') {
            if ((pcVar2 == pcVar1) || (cVar4 = FUN_140631710(), cVar4 != '\0')) {
                lVar5 = FUN_14018b280(0x38);
                if (lVar5 + 0x20 != 0) {
                    FUN_14001af60(lVar5 + 0x20,param_4);
                    puVar3 = *(undefined8 **)(param_4 + 0x10);
                    *(undefined8 **)(lVar5 + 0x30) = puVar3;
                    if (puVar3 != (undefined8 *)0x0) {
                        (**(code **)*puVar3)();
                    }
                }
                *(longlong *)(pcVar2 + 0x10) = lVar5;
                pcVar1 = *(char **)(param_1 + 8);
                if (pcVar2 == pcVar1) {
                    *(longlong *)(pcVar1 + 8) = lVar5;
                    *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar5;
                }
                else if (pcVar2 == *(char **)(pcVar1 + 0x10)) {
                    *(longlong *)(pcVar1 + 0x10) = lVar5;
                }
            }
            else {
                lVar5 = FUN_140633160();
                *(longlong *)(pcVar2 + 0x18) = lVar5;
                if (pcVar2 == *(char **)(*(longlong *)(param_1 + 8) + 0x18)) {
                    *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar5;
                }
            }
            *(char **)(lVar5 + 8) = pcVar2;
            *(undefined8 *)(lVar5 + 0x10) = 0;
            *(undefined8 *)(lVar5 + 0x18) = 0;
            FUN_1400081c0(lVar5,*(longlong *)(param_1 + 8) + 8);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
            *param_2 = lVar5;
            return param_2;
        }
    }
    else {
        if ((*pcVar2 == '\0') && (*(char **)(*(longlong *)(pcVar2 + 8) + 8) == pcVar2)) {
            lVar5 = *(longlong *)(pcVar2 + 0x18);
        }
        else {
            lVar5 = *(longlong *)(pcVar2 + 0x10);
            if (lVar5 == 0) {
                lVar5 = *(longlong *)(pcVar2 + 8);
                lVar7 = lVar5;
                if (pcVar2 == *(char **)(lVar5 + 0x10)) {
                    do {
                        lVar5 = *(longlong *)(lVar7 + 8);
                        bVar8 = lVar7 == *(longlong *)(lVar5 + 0x10);
                        lVar7 = lVar5;
                    } while (bVar8);
                }
            }
            else {
                for (lVar7 = *(longlong *)(lVar5 + 0x18); lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x18)) {
                    lVar5 = lVar7;
                }
            }
        }
        cVar4 = FUN_140631710(param_1,lVar5 + 0x20,param_4);
        if ((cVar4 != '\0') && (cVar4 = FUN_140631710(), cVar4 != '\0')) {
            if (*(longlong *)(lVar5 + 0x18) == 0) {
                FUN_140632870(param_1,param_2,0,lVar5,param_4);
                return param_2;
            }
            FUN_140632870(param_1,param_2,pcVar2,pcVar2,param_4);
            return param_2;
        }
    }
    plVar6 = (longlong *)FUN_140632970(param_1,local_28,param_4);
    *param_2 = *plVar6;
    return param_2;
}



longlong FUN_140631c10(longlong param_1,int *param_2)

{
    longlong lVar1;
    longlong *plVar2;
    int iVar3;
    longlong lVar4;
    uint uVar5;
    longlong lVar6;
    longlong lVar7;
    longlong local_res8;
    longlong local_res18;

    local_res8 = *(longlong *)(param_1 + 8);
    lVar6 = 0;
    if (*(longlong *)(local_res8 + 8) != 0) {
        lVar4 = local_res8;
        lVar7 = *(longlong *)(local_res8 + 8);
        do {
            local_res8 = lVar7;
            if (*param_2 < *(int *)(local_res8 + 0x20)) {
                LAB_140631c89:
                lVar7 = *(longlong *)(local_res8 + 0x10);
            }
            else {
                if (*param_2 <= *(int *)(local_res8 + 0x20)) {
                    uVar5 = (uint)**(ushort **)(param_2 + 2);
                    iVar3 = uVar5 - **(ushort **)(local_res8 + 0x28);
                    lVar7 = lVar6;
                    while (iVar3 == 0) {
                        if ((short)uVar5 == 0) goto LAB_140631c83;
                        uVar5 = (uint)(*(ushort **)(param_2 + 2))[lVar7 + 1];
                        lVar1 = lVar7 + 1;
                        lVar7 = lVar7 + 1;
                        iVar3 = uVar5 - (*(ushort **)(local_res8 + 0x28))[lVar1];
                    }
                    if (iVar3 < 0) goto LAB_140631c89;
                }
                LAB_140631c83:
                lVar7 = *(longlong *)(local_res8 + 0x18);
                local_res8 = lVar4;
            }
            lVar4 = local_res8;
        } while (lVar7 != 0);
    }
    plVar2 = (longlong *)FUN_140631f70(param_1,&local_res8,param_2);
    local_res18 = *plVar2;
    lVar7 = local_res18;
    while (lVar7 != local_res8) {
        lVar4 = *(longlong *)(lVar7 + 0x18);
        if (lVar4 == 0) {
            lVar4 = *(longlong *)(lVar7 + 8);
            if (lVar7 == *(longlong *)(lVar4 + 0x18)) {
                do {
                    lVar7 = lVar4;
                    lVar4 = *(longlong *)(lVar7 + 8);
                } while (lVar7 == *(longlong *)(lVar4 + 0x18));
            }
            if (*(longlong *)(lVar7 + 0x18) != lVar4) {
                lVar7 = lVar4;
            }
        }
        else {
            for (lVar1 = *(longlong *)(lVar4 + 0x10); lVar7 = lVar4, lVar1 != 0;
                 lVar1 = *(longlong *)(lVar1 + 0x10)) {
                lVar4 = lVar1;
            }
        }
        lVar6 = lVar6 + 1;
    }
    FUN_140632b10(param_1,&local_res18,&local_res8);
    return lVar6;
}



void FUN_140631d50(longlong param_1,longlong *param_2)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    lVar3 = *(longlong *)(param_1 + 8);
    if (*param_2 == lVar3) {
        local_40 = 0;
        local_48 = &PTR_LAB_140b5e648;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_48);
        local_28 = local_48;
        local_res8 = 0x141e4f6b0;
        local_18 = local_38;
        local_20 = local_40;
        iVar2 = FUN_1401971e0(&DAT_140c8aff0,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x000140631e15. Too many branches
            // WARNING: Treating indirect jump as call
            DebugBreak();
            return;
        }
    }
    else {
        lVar3 = FUN_140007db0(*param_2,lVar3 + 8,lVar3 + 0x10,lVar3 + 0x18);
        if (*(longlong **)(lVar3 + 0x30) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(lVar3 + 0x30) + 8))();
        }
        lVar1 = *(longlong *)(lVar3 + 0x28);
        if (lVar1 != 0) {
            (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        }
        FUN_14018b900(lVar3,0);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    }
    return;
}



longlong * FUN_140631e70(longlong param_1,longlong *param_2,int *param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    longlong lVar5;
    uint uVar6;
    longlong lVar7;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 8);
    lVar5 = 0;
    local_res8 = lVar1;
    if (*(longlong *)(lVar1 + 8) != 0) {
        lVar3 = *(longlong *)(lVar1 + 8);
        do {
            if (*(int *)(lVar3 + 0x20) < *param_3) {
                LAB_140631eee:
                lVar7 = *(longlong *)(lVar3 + 0x18);
            }
            else {
                if (*(int *)(lVar3 + 0x20) <= *param_3) {
                    uVar6 = (uint)**(ushort **)(lVar3 + 0x28);
                    iVar4 = uVar6 - **(ushort **)(param_3 + 2);
                    lVar7 = lVar5;
                    while (iVar4 == 0) {
                        if ((short)uVar6 == 0) goto LAB_140631ee5;
                        uVar6 = (uint)(*(ushort **)(lVar3 + 0x28))[lVar7 + 1];
                        lVar2 = lVar7 + 1;
                        lVar7 = lVar7 + 1;
                        iVar4 = uVar6 - (*(ushort **)(param_3 + 2))[lVar2];
                    }
                    if (iVar4 < 0) goto LAB_140631eee;
                }
                LAB_140631ee5:
                lVar7 = *(longlong *)(lVar3 + 0x10);
                local_res8 = lVar3;
            }
            lVar3 = lVar7;
        } while (lVar7 != 0);
    }
    if (local_res8 != lVar1) {
        if (*(int *)(local_res8 + 0x20) <= *param_3) {
            if (*(int *)(local_res8 + 0x20) < *param_3) goto LAB_140631f4f;
            uVar6 = (uint)**(ushort **)(param_3 + 2);
            iVar4 = uVar6 - **(ushort **)(local_res8 + 0x28);
            while (iVar4 == 0) {
                if ((short)uVar6 == 0) goto LAB_140631f4f;
                uVar6 = (uint)(*(ushort **)(param_3 + 2))[lVar5 + 1];
                lVar3 = lVar5 + 1;
                lVar5 = lVar5 + 1;
                iVar4 = uVar6 - (*(ushort **)(local_res8 + 0x28))[lVar3];
            }
            if (-1 < iVar4) goto LAB_140631f4f;
        }
    }
    local_res8 = lVar1;
    LAB_140631f4f:
    *param_2 = local_res8;
    return param_2;
}



longlong * FUN_140631f70(longlong param_1,longlong *param_2,int *param_3)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    longlong lVar4;
    uint uVar5;
    longlong lVar6;

    lVar4 = *(longlong *)(param_1 + 8);
    if (*(longlong *)(lVar4 + 8) == 0) {
        *param_2 = lVar4;
        return param_2;
    }
    lVar2 = *(longlong *)(lVar4 + 8);
    do {
        if (*(int *)(lVar2 + 0x20) < *param_3) {
            LAB_140631fe9:
            lVar6 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            if (*(int *)(lVar2 + 0x20) <= *param_3) {
                lVar6 = 0;
                uVar5 = (uint)**(ushort **)(lVar2 + 0x28);
                iVar3 = uVar5 - **(ushort **)(param_3 + 2);
                while (iVar3 == 0) {
                    if ((short)uVar5 == 0) goto LAB_140631fe0;
                    uVar5 = (uint)(*(ushort **)(lVar2 + 0x28))[lVar6 + 1];
                    lVar1 = lVar6 + 1;
                    lVar6 = lVar6 + 1;
                    iVar3 = uVar5 - (*(ushort **)(param_3 + 2))[lVar1];
                }
                if (iVar3 < 0) goto LAB_140631fe9;
            }
            LAB_140631fe0:
            lVar6 = *(longlong *)(lVar2 + 0x10);
            lVar4 = lVar2;
        }
        lVar2 = lVar6;
        if (lVar6 == 0) {
            *param_2 = lVar4;
            return param_2;
        }
    } while( true );
}



void FUN_140632020(undefined8 param_1,longlong param_2)

{
    longlong lVar1;

    if (param_2 != 0) {
        do {
            FUN_140632020(param_1,*(undefined8 *)(param_2 + 0x18));
            lVar1 = *(longlong *)(param_2 + 0x10);
            *(undefined ***)(param_2 + 0x28) = &PTR_FUN_140b68f20;
            FUN_14018b900(param_2,0);
            param_2 = lVar1;
        } while (lVar1 != 0);
    }
    return;
}



longlong * FUN_140632090(longlong param_1,longlong *param_2,char **param_3,int *param_4)

{
    int iVar1;
    char *pcVar2;
    char *pcVar3;
    longlong *plVar4;
    longlong lVar5;
    longlong lVar6;
    bool bVar7;
    undefined local_18 [16];

    pcVar2 = *(char **)(param_1 + 8);
    pcVar3 = *param_3;
    if (pcVar3 == *(char **)(pcVar2 + 0x10)) {
        if ((*(longlong *)(param_1 + 0x10) == 0) || (*(int *)(pcVar3 + 0x20) <= *param_4)) {
            LAB_1406320ea:
            plVar4 = (longlong *)FUN_140632d20(param_1,local_18,param_4);
            *param_2 = *plVar4;
            return param_2;
        }
    }
    else {
        if (pcVar3 == pcVar2) {
            iVar1 = *param_4;
            pcVar3 = *(char **)(pcVar2 + 0x18);
            if (*(int *)(pcVar3 + 0x20) < iVar1) {
                if ((pcVar3 == pcVar2) || (iVar1 < *(int *)(pcVar3 + 0x20))) {
                    lVar5 = FUN_14018b280(0x40);
                    if ((int *)(lVar5 + 0x20) != (int *)0x0) {
                        *(int *)(lVar5 + 0x20) = *param_4;
                        *(undefined ***)(lVar5 + 0x28) = &PTR_FUN_140b68f20;
                        *(int *)(lVar5 + 0x30) = param_4[4];
                        *(int *)(lVar5 + 0x34) = param_4[5];
                        *(int *)(lVar5 + 0x38) = param_4[6];
                        *(int *)(lVar5 + 0x3c) = param_4[7];
                    }
                    *(longlong *)(pcVar3 + 0x10) = lVar5;
                    pcVar2 = *(char **)(param_1 + 8);
                    if (pcVar3 == pcVar2) {
                        *(longlong *)(pcVar2 + 8) = lVar5;
                        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar5;
                    }
                    else if (pcVar3 == *(char **)(pcVar2 + 0x10)) {
                        *(longlong *)(pcVar2 + 0x10) = lVar5;
                    }
                }
                else {
                    lVar5 = FUN_1406331c0(iVar1,param_4);
                    *(longlong *)(pcVar3 + 0x18) = lVar5;
                    if (pcVar3 == *(char **)(*(longlong *)(param_1 + 8) + 0x18)) {
                        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar5;
                    }
                }
                *(char **)(lVar5 + 8) = pcVar3;
                *(undefined8 *)(lVar5 + 0x10) = 0;
                *(undefined8 *)(lVar5 + 0x18) = 0;
                FUN_1400081c0(lVar5,*(longlong *)(param_1 + 8) + 8);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
                *param_2 = lVar5;
            }
            else {
                plVar4 = (longlong *)FUN_140632d20(param_1,local_18,param_4);
                *param_2 = *plVar4;
            }
            return param_2;
        }
        if ((*pcVar3 == '\0') && (*(char **)(*(longlong *)(pcVar3 + 8) + 8) == pcVar3)) {
            lVar5 = *(longlong *)(pcVar3 + 0x18);
        }
        else {
            lVar5 = *(longlong *)(pcVar3 + 0x10);
            if (lVar5 == 0) {
                lVar5 = *(longlong *)(pcVar3 + 8);
                lVar6 = lVar5;
                if (pcVar3 == *(char **)(lVar5 + 0x10)) {
                    do {
                        lVar5 = *(longlong *)(lVar6 + 8);
                        bVar7 = lVar6 == *(longlong *)(lVar5 + 0x10);
                        lVar6 = lVar5;
                    } while (bVar7);
                }
            }
            else {
                for (lVar6 = *(longlong *)(lVar5 + 0x18); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x18)) {
                    lVar5 = lVar6;
                }
            }
        }
        if ((*param_4 <= *(int *)(lVar5 + 0x20)) || (*(int *)(pcVar3 + 0x20) <= *param_4))
            goto LAB_1406320ea;
        if (*(longlong *)(lVar5 + 0x18) == 0) {
            FUN_140632c10(param_1,param_2,0,lVar5,param_4);
            return param_2;
        }
    }
    FUN_140632c10();
    return param_2;
}



void FUN_1406322c0(undefined8 param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 local_48;
    undefined8 local_40;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;
    undefined8 local_10;

    if (param_2 != 0) {
        do {
            FUN_1406322c0(param_1,*(undefined8 *)(param_2 + 0x18));
            local_20 = *(undefined8 *)(param_2 + 0x48);
            local_18 = *(undefined8 *)(param_2 + 0x50);
            local_48 = *(undefined8 *)(param_2 + 0x60);
            local_40 = *(undefined8 *)(param_2 + 0x68);
            local_38 = *(undefined8 *)(param_2 + 0x70);
            local_30 = *(undefined8 *)(param_2 + 0x78);
            local_28 = *(undefined8 *)(param_2 + 0x40);
            local_10 = *(undefined8 *)(param_2 + 0x58);
            lVar1 = *(longlong *)(param_2 + 0x10);
            FUN_140633270(&local_28,&local_48);
            if (*(longlong *)(param_2 + 0x30) != 0) {
                lVar2 = *(longlong *)(param_2 + 0x78);
                for (puVar3 = *(undefined8 **)(param_2 + 0x58); puVar3 < (undefined8 *)(lVar2 + 8);
                     puVar3 = puVar3 + 1) {
                    FUN_14018b900(*puVar3,0);
                }
                FUN_14018b900(*(undefined8 *)(param_2 + 0x30),0);
            }
            FUN_14018b900(param_2,0);
            param_2 = lVar1;
        } while (lVar1 != 0);
    }
    return;
}



longlong * FUN_1406323d0(longlong param_1,longlong *param_2,char **param_3,int *param_4)

{
    int iVar1;
    char *pcVar2;
    char *pcVar3;
    longlong *plVar4;
    longlong lVar5;
    longlong lVar6;
    bool bVar7;
    undefined local_18 [16];

    pcVar2 = *(char **)(param_1 + 8);
    pcVar3 = *param_3;
    if (pcVar3 == *(char **)(pcVar2 + 0x10)) {
        if ((*(longlong *)(param_1 + 0x10) == 0) || (*(int *)(pcVar3 + 0x20) <= *param_4)) {
            LAB_14063242a:
            plVar4 = (longlong *)FUN_140632f10(param_1,local_18,param_4);
            *param_2 = *plVar4;
            return param_2;
        }
    }
    else {
        if (pcVar3 == pcVar2) {
            iVar1 = *param_4;
            pcVar3 = *(char **)(pcVar2 + 0x18);
            if (*(int *)(pcVar3 + 0x20) < iVar1) {
                if ((pcVar3 == pcVar2) || (iVar1 < *(int *)(pcVar3 + 0x20))) {
                    lVar5 = FUN_14018b280(0x80,0);
                    if ((int *)(lVar5 + 0x20) != (int *)0x0) {
                        *(int *)(lVar5 + 0x20) = *param_4;
                        FUN_1406317f0(lVar5 + 0x28,param_4 + 2);
                    }
                    *(longlong *)(pcVar3 + 0x10) = lVar5;
                    pcVar2 = *(char **)(param_1 + 8);
                    if (pcVar3 == pcVar2) {
                        *(longlong *)(pcVar2 + 8) = lVar5;
                        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar5;
                    }
                    else if (pcVar3 == *(char **)(pcVar2 + 0x10)) {
                        *(longlong *)(pcVar2 + 0x10) = lVar5;
                    }
                }
                else {
                    lVar5 = FUN_140633220(iVar1,param_4);
                    *(longlong *)(pcVar3 + 0x18) = lVar5;
                    if (pcVar3 == *(char **)(*(longlong *)(param_1 + 8) + 0x18)) {
                        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar5;
                    }
                }
                *(char **)(lVar5 + 8) = pcVar3;
                *(undefined8 *)(lVar5 + 0x10) = 0;
                *(undefined8 *)(lVar5 + 0x18) = 0;
                FUN_1400081c0(lVar5,*(longlong *)(param_1 + 8) + 8);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
                *param_2 = lVar5;
            }
            else {
                plVar4 = (longlong *)FUN_140632f10(param_1,local_18,param_4);
                *param_2 = *plVar4;
            }
            return param_2;
        }
        if ((*pcVar3 == '\0') && (*(char **)(*(longlong *)(pcVar3 + 8) + 8) == pcVar3)) {
            lVar5 = *(longlong *)(pcVar3 + 0x18);
        }
        else {
            lVar5 = *(longlong *)(pcVar3 + 0x10);
            if (lVar5 == 0) {
                lVar5 = *(longlong *)(pcVar3 + 8);
                lVar6 = lVar5;
                if (pcVar3 == *(char **)(lVar5 + 0x10)) {
                    do {
                        lVar5 = *(longlong *)(lVar6 + 8);
                        bVar7 = lVar6 == *(longlong *)(lVar5 + 0x10);
                        lVar6 = lVar5;
                    } while (bVar7);
                }
            }
            else {
                for (lVar6 = *(longlong *)(lVar5 + 0x18); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x18)) {
                    lVar5 = lVar6;
                }
            }
        }
        if ((*param_4 <= *(int *)(lVar5 + 0x20)) || (*(int *)(pcVar3 + 0x20) <= *param_4))
            goto LAB_14063242a;
        if (*(longlong *)(lVar5 + 0x18) == 0) {
            FUN_140632e20(param_1,param_2,0,lVar5,param_4);
            return param_2;
        }
    }
    FUN_140632e20();
    return param_2;
}



void FUN_1406325e0(longlong param_1,ulonglong param_2)

{
    longlong *plVar1;
    longlong *plVar2;
    ulonglong uVar3;
    ulonglong *puVar4;
    longlong lVar5;
    longlong lVar6;
    longlong *plVar7;
    ulonglong local_res8;
    ulonglong local_res10;

    local_res10 = 8;
    lVar6 = param_2 / 0xf + 1;
    local_res8 = param_2 / 0xf + 3;
    puVar4 = &local_res8;
    if (local_res8 < 9) {
        puVar4 = &local_res10;
    }
    uVar3 = *puVar4;
    *(ulonglong *)(param_1 + 0x10) = uVar3;
    lVar5 = FUN_14018b280(uVar3 * 8,0);
    *(longlong *)(param_1 + 8) = lVar5;
    plVar1 = (longlong *)(lVar5 + ((ulonglong)(*(longlong *)(param_1 + 0x10) - lVar6) >> 1) * 8);
    plVar2 = plVar1 + lVar6;
    for (plVar7 = plVar1; plVar7 < plVar2; plVar7 = plVar7 + 1) {
        lVar6 = FUN_14018b280(0x1e0,0);
        *plVar7 = lVar6;
    }
    *(longlong **)(param_1 + 0x30) = plVar1;
    lVar6 = *plVar1;
    *(longlong *)(param_1 + 0x20) = lVar6;
    *(longlong *)(param_1 + 0x28) = lVar6 + 0x1e0;
    *(longlong **)(param_1 + 0x50) = plVar2 + -1;
    lVar6 = plVar2[-1];
    *(longlong *)(param_1 + 0x40) = lVar6;
    *(longlong *)(param_1 + 0x48) = lVar6 + 0x1e0;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x20);
    *(ulonglong *)(param_1 + 0x38) = (param_2 % 0xf) * 0x20 + *(longlong *)(param_1 + 0x40);
    return;
}



void FUN_1406326f0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong *plVar3;

    lVar1 = *(longlong *)(param_1 + 0x18);
    lVar2 = *(longlong *)(lVar1 + 0x18);
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    FUN_14018b900(*(undefined8 *)(param_1 + 0x20),0);
    plVar3 = (longlong *)(*(longlong *)(param_1 + 0x30) + 8);
    *(longlong **)(param_1 + 0x30) = plVar3;
    lVar1 = *plVar3;
    *(longlong *)(param_1 + 0x20) = lVar1;
    *(longlong *)(param_1 + 0x28) = lVar1 + 0x1e0;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x20);
    return;
}



undefined4 * FUN_140632770(undefined4 *param_1,undefined4 *param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;

    *param_1 = *param_2;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    if (*(longlong *)(param_2 + 4) == 0) {
        *(undefined8 *)(param_1 + 4) = 0;
    }
    else {
        lVar1 = *(longlong *)(*(longlong *)(param_2 + 4) + -8);
        puVar2 = (undefined8 *)FUN_14018b280(lVar1 + 0x11,0);
        puVar3 = (undefined8 *)0x0;
        if (puVar2 != (undefined8 *)0x0) {
            puVar2[1] = lVar1;
            *puVar2 = &PTR_LAB_140b55060;
            puVar3 = puVar2;
        }
        puVar3 = puVar3 + 2;
        FUN_1407db590(puVar3,*(undefined8 *)(param_2 + 4),lVar1);
        *(undefined *)((longlong)puVar3 + lVar1) = 0;
        *(undefined8 **)(param_1 + 4) = puVar3;
    }
    puVar3 = (undefined8 *)0x0;
    if (*(longlong *)(param_2 + 6) == 0) {
        *(undefined8 *)(param_1 + 6) = 0;
    }
    else {
        lVar1 = *(longlong *)(*(longlong *)(param_2 + 6) + -8);
        puVar2 = (undefined8 *)FUN_14018b280(lVar1 * 2 + 0x12,0);
        if (puVar2 != (undefined8 *)0x0) {
            puVar2[1] = lVar1;
            *puVar2 = &PTR_LAB_140b55060;
            puVar3 = puVar2;
        }
        puVar3 = puVar3 + 2;
        FUN_1407db590(puVar3,*(undefined8 *)(param_2 + 6),lVar1 * 2);
        *(undefined2 *)(lVar1 * 2 + (longlong)puVar3) = 0;
        *(undefined8 **)(param_1 + 6) = puVar3;
    }
    return param_1;
}



longlong *
FUN_140632870(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,longlong param_5)

{
    undefined8 *puVar1;
    longlong lVar2;
    char cVar3;
    longlong lVar4;

    if ((param_4 != *(longlong *)(param_1 + 8)) && (param_3 == 0)) {
        cVar3 = FUN_140631710(param_1,param_5,param_4 + 0x20);
        if (cVar3 == '\0') {
            lVar4 = FUN_140633160();
            *(longlong *)(param_4 + 0x18) = lVar4;
            if (param_4 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x18)) {
                *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar4;
            }
            goto LAB_14063292c;
        }
    }
    lVar4 = FUN_14018b280(0x38);
    if (lVar4 + 0x20 != 0) {
        FUN_14001af60(lVar4 + 0x20,param_5);
        puVar1 = *(undefined8 **)(param_5 + 0x10);
        *(undefined8 **)(lVar4 + 0x30) = puVar1;
        if (puVar1 != (undefined8 *)0x0) {
            (**(code **)*puVar1)();
        }
    }
    *(longlong *)(param_4 + 0x10) = lVar4;
    lVar2 = *(longlong *)(param_1 + 8);
    if (param_4 == lVar2) {
        *(longlong *)(lVar2 + 8) = lVar4;
        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar4;
    }
    else if (param_4 == *(longlong *)(lVar2 + 0x10)) {
        *(longlong *)(lVar2 + 0x10) = lVar4;
    }
    LAB_14063292c:
    *(longlong *)(lVar4 + 8) = param_4;
    *(undefined8 *)(lVar4 + 0x10) = 0;
    *(undefined8 *)(lVar4 + 0x18) = 0;
    FUN_1400081c0(lVar4,*(longlong *)(param_1 + 8) + 8);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    *param_2 = lVar4;
    return param_2;
}



char ** FUN_140632970(longlong param_1,char **param_2,int *param_3)

{
    longlong lVar1;
    char **ppcVar2;
    int iVar3;
    char *pcVar4;
    char *pcVar5;
    uint uVar6;
    char *pcVar7;
    longlong lVar8;
    char *pcVar9;
    longlong lVar10;
    bool bVar11;
    undefined local_res8 [8];

    pcVar4 = *(char **)(param_1 + 8);
    lVar8 = 0;
    pcVar9 = *(char **)(pcVar4 + 8);
    bVar11 = true;
    pcVar7 = pcVar4;
    if (pcVar9 != (char *)0x0) {
        do {
            pcVar7 = pcVar9;
            if (*param_3 < *(int *)(pcVar7 + 0x20)) {
                LAB_1406329fe:
                pcVar9 = *(char **)(pcVar7 + 0x10);
                bVar11 = true;
            }
            else {
                if (*param_3 <= *(int *)(pcVar7 + 0x20)) {
                    uVar6 = (uint)**(ushort **)(param_3 + 2);
                    iVar3 = uVar6 - **(ushort **)(pcVar7 + 0x28);
                    lVar10 = lVar8;
                    while (iVar3 == 0) {
                        if ((short)uVar6 == 0) goto LAB_1406329f6;
                        uVar6 = (uint)(*(ushort **)(param_3 + 2))[lVar10 + 1];
                        lVar1 = lVar10 + 1;
                        lVar10 = lVar10 + 1;
                        iVar3 = uVar6 - (*(ushort **)(pcVar7 + 0x28))[lVar1];
                    }
                    if (iVar3 < 0) goto LAB_1406329fe;
                }
                LAB_1406329f6:
                pcVar9 = *(char **)(pcVar7 + 0x18);
                bVar11 = false;
            }
        } while (pcVar9 != (char *)0x0);
    }
    pcVar5 = pcVar7;
    if (bVar11) {
        if (pcVar7 == *(char **)(pcVar4 + 0x10)) goto LAB_140632acc;
        if ((*pcVar7 == '\0') && (*(char **)(*(longlong *)(pcVar7 + 8) + 8) == pcVar7)) {
            pcVar5 = *(char **)(pcVar7 + 0x18);
        }
        else {
            pcVar5 = *(char **)(pcVar7 + 0x10);
            if (pcVar5 == (char *)0x0) {
                pcVar5 = *(char **)(pcVar7 + 8);
                pcVar4 = pcVar5;
                if (pcVar7 == *(char **)(pcVar5 + 0x10)) {
                    do {
                        pcVar5 = *(char **)(pcVar4 + 8);
                        bVar11 = pcVar4 == *(char **)(pcVar5 + 0x10);
                        pcVar4 = pcVar5;
                    } while (bVar11);
                }
            }
            else {
                for (pcVar4 = *(char **)(pcVar5 + 0x18); pcVar4 != (char *)0x0;
                     pcVar4 = *(char **)(pcVar4 + 0x18)) {
                    pcVar5 = pcVar4;
                }
            }
        }
    }
    if (*(int *)(pcVar5 + 0x20) < *param_3) {
        LAB_140632acc:
        ppcVar2 = (char **)FUN_140632870(param_1,local_res8,pcVar9,pcVar7,param_3);
        *param_2 = *ppcVar2;
        *(undefined *)(param_2 + 1) = 1;
        return param_2;
    }
    if (*(int *)(pcVar5 + 0x20) <= *param_3) {
        uVar6 = (uint)**(ushort **)(pcVar5 + 0x28);
        iVar3 = uVar6 - **(ushort **)(param_3 + 2);
        while (iVar3 == 0) {
            if ((short)uVar6 == 0) goto LAB_140632ac2;
            uVar6 = (uint)(*(ushort **)(pcVar5 + 0x28))[lVar8 + 1];
            lVar10 = lVar8 + 1;
            lVar8 = lVar8 + 1;
            iVar3 = uVar6 - (*(ushort **)(param_3 + 2))[lVar10];
        }
        if (iVar3 < 0) goto LAB_140632acc;
    }
    LAB_140632ac2:
    *param_2 = pcVar5;
    *(undefined *)(param_2 + 1) = 0;
    return param_2;
}



void FUN_140632b10(longlong param_1,longlong *param_2,longlong *param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar2 = *(longlong *)(param_1 + 8);
    if ((*param_2 == *(longlong *)(lVar2 + 0x10)) && (*param_3 == lVar2)) {
        if (*(longlong *)(param_1 + 0x10) != 0) {
            FUN_140631970(param_1,*(undefined8 *)(lVar2 + 8));
            *(longlong *)(*(longlong *)(param_1 + 8) + 0x10) = *(longlong *)(param_1 + 8);
            *(undefined8 *)(*(longlong *)(param_1 + 8) + 8) = 0;
            *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = *(longlong *)(param_1 + 8);
            *(undefined8 *)(param_1 + 0x10) = 0;
            return;
        }
    }
    else if (*param_2 != *param_3) {
        do {
            local_res8 = *param_2;
            lVar2 = *(longlong *)(local_res8 + 0x18);
            if (lVar2 == 0) {
                lVar2 = *(longlong *)(*param_2 + 8);
                if (*param_2 == *(longlong *)(lVar2 + 0x18)) {
                    do {
                        *param_2 = lVar2;
                        lVar2 = *(longlong *)(lVar2 + 8);
                    } while (*param_2 == *(longlong *)(lVar2 + 0x18));
                }
                if (*(longlong *)(*param_2 + 0x18) != lVar2) {
                    *param_2 = lVar2;
                }
            }
            else {
                *param_2 = lVar2;
                lVar1 = *(longlong *)(lVar2 + 0x10);
                while (lVar1 != 0) {
                    lVar2 = *(longlong *)(lVar2 + 0x10);
                    *param_2 = lVar2;
                    lVar1 = *(longlong *)(lVar2 + 0x10);
                }
            }
            FUN_140631d50(param_1,&local_res8);
        } while (*param_2 != *param_3);
    }
    return;
}



longlong *
FUN_140632c10(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,int *param_5)

{
    longlong lVar1;
    longlong lVar2;

    if (((param_4 == *(longlong *)(param_1 + 8)) || (param_3 != 0)) ||
        (*param_5 < *(int *)(param_4 + 0x20))) {
        lVar2 = FUN_14018b280(0x40);
        if ((int *)(lVar2 + 0x20) != (int *)0x0) {
            *(int *)(lVar2 + 0x20) = *param_5;
            *(undefined ***)(lVar2 + 0x28) = &PTR_FUN_140b68f20;
            *(int *)(lVar2 + 0x30) = param_5[4];
            *(int *)(lVar2 + 0x34) = param_5[5];
            *(int *)(lVar2 + 0x38) = param_5[6];
            *(int *)(lVar2 + 0x3c) = param_5[7];
        }
        *(longlong *)(param_4 + 0x10) = lVar2;
        lVar1 = *(longlong *)(param_1 + 8);
        if (param_4 == lVar1) {
            *(longlong *)(lVar1 + 8) = lVar2;
            *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar2;
        }
        else if (param_4 == *(longlong *)(lVar1 + 0x10)) {
            *(longlong *)(lVar1 + 0x10) = lVar2;
        }
    }
    else {
        lVar2 = FUN_1406331c0(param_1,param_5);
        *(longlong *)(param_4 + 0x18) = lVar2;
        if (param_4 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x18)) {
            *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar2;
        }
    }
    *(longlong *)(lVar2 + 8) = param_4;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    FUN_1400081c0(lVar2,*(longlong *)(param_1 + 8) + 8);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    *param_2 = lVar2;
    return param_2;
}



char ** FUN_140632d20(longlong param_1,char **param_2,int *param_3)

{
    char **ppcVar1;
    char *pcVar2;
    char *pcVar3;
    char *pcVar4;
    char *pcVar5;
    bool bVar6;
    undefined local_res8 [8];

    pcVar2 = *(char **)(param_1 + 8);
    pcVar4 = *(char **)(pcVar2 + 8);
    bVar6 = true;
    pcVar5 = pcVar2;
    if (pcVar4 != (char *)0x0) {
        do {
            pcVar5 = pcVar4;
            bVar6 = *param_3 < *(int *)(pcVar5 + 0x20);
            if (bVar6) {
                pcVar4 = *(char **)(pcVar5 + 0x10);
            }
            else {
                pcVar4 = *(char **)(pcVar5 + 0x18);
            }
        } while (pcVar4 != (char *)0x0);
    }
    pcVar3 = pcVar5;
    if (bVar6) {
        if (pcVar5 == *(char **)(pcVar2 + 0x10)) goto LAB_140632d7e;
        if ((*pcVar5 == '\0') && (*(char **)(*(longlong *)(pcVar5 + 8) + 8) == pcVar5)) {
            pcVar3 = *(char **)(pcVar5 + 0x18);
        }
        else {
            pcVar3 = *(char **)(pcVar5 + 0x10);
            if (pcVar3 == (char *)0x0) {
                pcVar3 = *(char **)(pcVar5 + 8);
                pcVar2 = pcVar3;
                if (pcVar5 == *(char **)(pcVar3 + 0x10)) {
                    do {
                        pcVar3 = *(char **)(pcVar2 + 8);
                        bVar6 = pcVar2 == *(char **)(pcVar3 + 0x10);
                        pcVar2 = pcVar3;
                    } while (bVar6);
                }
            }
            else {
                for (pcVar2 = *(char **)(pcVar3 + 0x18); pcVar2 != (char *)0x0;
                     pcVar2 = *(char **)(pcVar2 + 0x18)) {
                    pcVar3 = pcVar2;
                }
            }
        }
    }
    if (*param_3 <= *(int *)(pcVar3 + 0x20)) {
        *param_2 = pcVar3;
        *(undefined *)(param_2 + 1) = 0;
        return param_2;
    }
    LAB_140632d7e:
    ppcVar1 = (char **)FUN_140632c10(param_1,local_res8,pcVar4,pcVar5,param_3);
    *param_2 = *ppcVar1;
    *(undefined *)(param_2 + 1) = 1;
    return param_2;
}



longlong *
FUN_140632e20(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,int *param_5)

{
    longlong lVar1;
    longlong lVar2;

    if (((param_4 == *(longlong *)(param_1 + 8)) || (param_3 != 0)) ||
        (*param_5 < *(int *)(param_4 + 0x20))) {
        lVar2 = FUN_14018b280(0x80,0);
        if ((int *)(lVar2 + 0x20) != (int *)0x0) {
            *(int *)(lVar2 + 0x20) = *param_5;
            FUN_1406317f0(lVar2 + 0x28,param_5 + 2);
        }
        *(longlong *)(param_4 + 0x10) = lVar2;
        lVar1 = *(longlong *)(param_1 + 8);
        if (param_4 == lVar1) {
            *(longlong *)(lVar1 + 8) = lVar2;
            *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar2;
        }
        else if (param_4 == *(longlong *)(lVar1 + 0x10)) {
            *(longlong *)(lVar1 + 0x10) = lVar2;
        }
    }
    else {
        lVar2 = FUN_140633220(param_1,param_5);
        *(longlong *)(param_4 + 0x18) = lVar2;
        if (param_4 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x18)) {
            *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar2;
        }
    }
    *(longlong *)(lVar2 + 8) = param_4;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    FUN_1400081c0(lVar2,*(longlong *)(param_1 + 8) + 8);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    *param_2 = lVar2;
    return param_2;
}



char ** FUN_140632f10(longlong param_1,char **param_2,int *param_3)

{
    char **ppcVar1;
    char *pcVar2;
    char *pcVar3;
    char *pcVar4;
    char *pcVar5;
    bool bVar6;
    undefined local_res8 [8];

    pcVar2 = *(char **)(param_1 + 8);
    pcVar4 = *(char **)(pcVar2 + 8);
    bVar6 = true;
    pcVar5 = pcVar2;
    if (pcVar4 != (char *)0x0) {
        do {
            pcVar5 = pcVar4;
            bVar6 = *param_3 < *(int *)(pcVar5 + 0x20);
            if (bVar6) {
                pcVar4 = *(char **)(pcVar5 + 0x10);
            }
            else {
                pcVar4 = *(char **)(pcVar5 + 0x18);
            }
        } while (pcVar4 != (char *)0x0);
    }
    pcVar3 = pcVar5;
    if (bVar6) {
        if (pcVar5 == *(char **)(pcVar2 + 0x10)) goto LAB_140632f6e;
        if ((*pcVar5 == '\0') && (*(char **)(*(longlong *)(pcVar5 + 8) + 8) == pcVar5)) {
            pcVar3 = *(char **)(pcVar5 + 0x18);
        }
        else {
            pcVar3 = *(char **)(pcVar5 + 0x10);
            if (pcVar3 == (char *)0x0) {
                pcVar3 = *(char **)(pcVar5 + 8);
                pcVar2 = pcVar3;
                if (pcVar5 == *(char **)(pcVar3 + 0x10)) {
                    do {
                        pcVar3 = *(char **)(pcVar2 + 8);
                        bVar6 = pcVar2 == *(char **)(pcVar3 + 0x10);
                        pcVar2 = pcVar3;
                    } while (bVar6);
                }
            }
            else {
                for (pcVar2 = *(char **)(pcVar3 + 0x18); pcVar2 != (char *)0x0;
                     pcVar2 = *(char **)(pcVar2 + 0x18)) {
                    pcVar3 = pcVar2;
                }
            }
        }
    }
    if (*param_3 <= *(int *)(pcVar3 + 0x20)) {
        *param_2 = pcVar3;
        *(undefined *)(param_2 + 1) = 0;
        return param_2;
    }
    LAB_140632f6e:
    ppcVar1 = (char **)FUN_140632e20(param_1,local_res8,pcVar4,pcVar5,param_3);
    *param_2 = *ppcVar1;
    *(undefined *)(param_2 + 1) = 1;
    return param_2;
}



void FUN_140633010(longlong param_1)

{
    ulonglong *puVar1;
    longlong *plVar2;
    ulonglong *puVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    ulonglong uVar7;
    longlong *plVar8;
    ulonglong local_res10;

    plVar2 = *(longlong **)(param_1 + 0x30);
    puVar1 = (ulonglong *)(param_1 + 0x10);
    uVar7 = *puVar1;
    local_res10 = 1;
    lVar6 = *(longlong *)(param_1 + 0x50) - (longlong)plVar2 >> 3;
    lVar5 = lVar6 + 2;
    if ((ulonglong)(lVar5 * 2) < uVar7) {
        lVar4 = *(longlong *)(param_1 + 0x50) - (longlong)plVar2;
        plVar8 = (longlong *)(*(longlong *)(param_1 + 8) + (uVar7 - lVar5 >> 1) * 8);
        if (plVar8 < plVar2) {
            FUN_1407db590(plVar8,plVar2,lVar4 + 8U & 0xfffffffffffffff8);
        }
        else {
            lVar5 = lVar4 + 8 >> 3;
            FUN_1407db590(plVar8 + ((lVar6 + 1) - lVar5),plVar2,lVar5 * 8);
        }
    }
    else {
        puVar3 = &local_res10;
        if (uVar7 != 0) {
            puVar3 = puVar1;
        }
        uVar7 = uVar7 + 2 + *puVar3;
        lVar4 = FUN_14018b280(uVar7 * 8,0);
        plVar8 = (longlong *)(lVar4 + (uVar7 - lVar5 >> 1) * 8);
        FUN_1407db590(plVar8,*(longlong *)(param_1 + 0x30),
                      (*(longlong *)(param_1 + 0x50) - *(longlong *)(param_1 + 0x30)) + 8U &
                      0xfffffffffffffff8);
        FUN_14018b900(*(undefined8 *)(param_1 + 8),0);
        *(longlong *)(param_1 + 8) = lVar4;
        *puVar1 = uVar7;
    }
    *(longlong **)(param_1 + 0x30) = plVar8;
    lVar5 = *plVar8;
    *(longlong *)(param_1 + 0x20) = lVar5;
    *(longlong *)(param_1 + 0x28) = lVar5 + 0x1e0;
    *(longlong **)(param_1 + 0x50) = plVar8 + lVar6;
    lVar5 = plVar8[lVar6];
    *(longlong *)(param_1 + 0x40) = lVar5;
    *(longlong *)(param_1 + 0x48) = lVar5 + 0x1e0;
    return;
}



longlong FUN_140633160(undefined8 param_1,longlong param_2)

{
    undefined8 *puVar1;
    longlong lVar2;

    lVar2 = FUN_14018b280(0x38);
    if (lVar2 + 0x20 != 0) {
        FUN_14001af60(lVar2 + 0x20,param_2);
        puVar1 = *(undefined8 **)(param_2 + 0x10);
        *(undefined8 **)(lVar2 + 0x30) = puVar1;
        if (puVar1 != (undefined8 *)0x0) {
            (**(code **)*puVar1)();
        }
    }
    return lVar2;
}



longlong FUN_1406331c0(undefined8 param_1,undefined4 *param_2)

{
    longlong lVar1;

    lVar1 = FUN_14018b280();
    if ((undefined4 *)(lVar1 + 0x20) != (undefined4 *)0x0) {
        *(undefined4 *)(lVar1 + 0x20) = *param_2;
        *(undefined ***)(lVar1 + 0x28) = &PTR_FUN_140b68f20;
        *(undefined4 *)(lVar1 + 0x30) = param_2[4];
        *(undefined4 *)(lVar1 + 0x34) = param_2[5];
        *(undefined4 *)(lVar1 + 0x38) = param_2[6];
        *(undefined4 *)(lVar1 + 0x3c) = param_2[7];
    }
    return lVar1;
}



longlong FUN_140633220(undefined8 param_1,undefined4 *param_2)

{
    longlong lVar1;

    lVar1 = FUN_14018b280(0x80,0);
    if ((undefined4 *)(lVar1 + 0x20) != (undefined4 *)0x0) {
        *(undefined4 *)(lVar1 + 0x20) = *param_2;
        FUN_1406317f0(lVar1 + 0x28,param_2 + 2);
    }
    return lVar1;
}



void FUN_140633270(longlong *param_1,longlong *param_2)

{
    longlong lVar1;
    longlong lVar2;

    lVar2 = *param_1;
    if (lVar2 != *param_2) {
        do {
            lVar1 = *(longlong *)(lVar2 + 0x18);
            if (lVar1 != 0) {
                (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
            }
            lVar2 = *(longlong *)(lVar2 + 0x10);
            if (lVar2 != 0) {
                (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
            }
            *param_1 = *param_1 + 0x20;
            if (*param_1 == param_1[2]) {
                lVar2 = param_1[3];
                param_1[3] = (longlong)(longlong *)(lVar2 + 8);
                lVar2 = *(longlong *)(lVar2 + 8);
                param_1[1] = lVar2;
                *param_1 = lVar2;
                param_1[2] = lVar2 + 0x1e0;
            }
            lVar2 = *param_1;
        } while (lVar2 != *param_2);
    }
    return;
}



undefined8 * FUN_140633300(undefined8 *param_1)

{
    longlong lVar1;

    *param_1 = &PTR_LAB_140b784d0;
    FUN_1407a4640();
    FUN_140008410(param_1 + 7);
    FUN_14018b900(param_1[8],0);
    lVar1 = param_1[5];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = param_1[3];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    FUN_14018b900(param_1,0);
    return param_1;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140633380(longlong param_1,uint param_2)

{
    undefined4 uVar1;
    ulonglong uVar2;
    undefined auVar3 [16];
    undefined *puVar4;
    code *pcVar5;
    undefined4 uVar6;
    int iVar7;
    undefined8 *puVar8;
    ulonglong uVar9;
    undefined8 uVar10;
    uint *puVar11;
    longlong lVar12;
    ulonglong uVar13;
    ulonglong *puVar14;
    longlong lVar15;
    longlong *plVar16;
    undefined *puVar17;
    ulonglong uVar18;
    undefined *puVar19;
    uint uVar20;
    longlong *plVar21;
    uint uVar22;
    undefined4 uVar23;
    undefined4 uVar24;
    undefined4 uVar25;
    undefined4 uVar26;
    undefined4 uVar27;
    undefined4 uVar28;
    undefined4 uVar29;
    undefined4 uVar30;
    undefined4 uVar31;
    undefined4 uVar32;
    ulonglong local_res8;
    uint local_res10;
    undefined local_118 [8];
    undefined *local_110;
    longlong local_108;
    undefined local_f8 [16];
    undefined local_b8 [16];
    undefined4 local_a8;
    undefined4 local_a4;
    undefined4 local_a0;
    undefined4 local_90;

    local_res10 = param_2;
    FUN_14023eb20();
    FUN_14023ef60();
    FUN_140633b00();
    if (DAT_140c63838 == (code *)0x0) {
        if (_DAT_140c63c1c == 0) {
            iVar7 = FUN_14023eb20();
            if (iVar7 < 0) {
                uVar6 = 0;
            }
            else {
                uVar6 = (**(code **)(*DAT_140c64570 + 0x28))();
            }
        }
        else {
            uVar6 = 0;
        }
    }
    else {
        uVar6 = (*DAT_140c63838)();
    }
    lVar12 = *(longlong *)(param_1 + 0x7aa8);
    *(undefined4 *)(param_1 + 0x7a98) = uVar6;
    if (lVar12 != 0) {
        FUN_140019490(lVar12);
        FUN_14018b900(*(undefined8 *)(lVar12 + 0x10));
        *(undefined8 *)(lVar12 + 0x10) = 0;
        FUN_14018b900();
    }
    puVar8 = (undefined8 *)FUN_14018b280();
    if (puVar8 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)0x0;
    }
    else {
        uVar6 = *(undefined4 *)(param_1 + 0x7a98);
        *puVar8 = 0;
        uVar9 = FUN_1401a40c0(uVar6);
        puVar8[1] = uVar9;
        uVar10 = SUB168(ZEXT816(8) * ZEXT816(uVar9),0);
        if (SUB168(ZEXT816(8) * ZEXT816(uVar9) >> 0x40,0) != 0) {
            uVar10 = 0xffffffffffffffff;
        }
        uVar10 = FUN_14018b280(uVar10,0);
        puVar8[2] = uVar10;
        FUN_1407e4830(uVar10,0,puVar8[1] << 3);
        puVar8[3] = &LAB_1400522d0;
        puVar8[4] = &LAB_1400522e0;
    }
    *(undefined8 **)(param_1 + 0x7aa8) = puVar8;
    if (*(uint *)(param_1 + 0x7a98) == 0) {
        return 0;
    }
    *(undefined4 *)(param_1 + 0x7ab0) = 0;
    auVar3 = ZEXT816(8) * ZEXT416(*(uint *)(param_1 + 0x7a98));
    uVar10 = SUB168(auVar3,0);
    if (SUB168(auVar3 >> 0x40,0) != 0) {
        uVar10 = 0xffffffffffffffff;
    }
    uVar10 = FUN_14018b280(uVar10);
    *(undefined8 *)(param_1 + 0x7aa0) = uVar10;
    FUN_1407e4830(uVar10,0,(ulonglong)*(uint *)(param_1 + 0x7a98) << 3);
    local_110 = (undefined *)FUN_14018b280(0x38);
    local_108 = 0;
    uVar9 = 0;
    *local_110 = 0;
    *(undefined8 *)(local_110 + 8) = 0;
    *(undefined **)(local_110 + 0x10) = local_110;
    *(undefined **)(local_110 + 0x18) = local_110;
    if (*(int *)(param_1 + 0x7a98) != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if (_DAT_140c63c1c == 0) {
                    iVar7 = FUN_14023eb20();
                    if (iVar7 < 0) {
                        puVar11 = (uint *)0x0;
                    }
                    else {
                        puVar11 = (uint *)(**(code **)(*DAT_140c64570 + 0x20))();
                    }
                }
                else {
                    puVar11 = (uint *)0x0;
                }
            }
            else {
                puVar11 = (uint *)(*DAT_140c63848)(&PTR_u_Spline2_140a6d7a8,uVar9,DAT_140c63858);
            }
            if (puVar11[1] == param_2) {
                LAB_140633610:
                lVar12 = FUN_14018b280(0x60);
                if (lVar12 == 0) {
                    uVar13 = 0;
                }
                else {
                    uVar13 = FUN_1407a2bb0(lVar12,puVar11[1],puVar11[2]);
                }
                *(ulonglong *)(*(longlong *)(param_1 + 0x7aa0) + uVar9 * 8) = uVar13;
                plVar16 = *(longlong **)(param_1 + 0x7aa8);
                if (*plVar16 == plVar16[1]) {
                    FUN_1400290d0(plVar16);
                }
                local_res8 = (*(code *)plVar16[3])();
                lVar12 = plVar16[2];
                uVar18 = local_res8 % (ulonglong)plVar16[1];
                puVar14 = (ulonglong *)FUN_14018b280();
                if (puVar14 != (ulonglong *)0x0) {
                    uVar2 = *(ulonglong *)(lVar12 + uVar18 * 8);
                    *puVar14 = local_res8;
                    puVar14[1] = uVar2;
                    *(uint *)(puVar14 + 2) = *puVar11;
                    puVar14[3] = uVar13;
                }
                *(ulonglong **)(lVar12 + uVar18 * 8) = puVar14;
                *plVar16 = *plVar16 + 1;
                uVar20 = *(uint *)(param_1 + 0x7ab0);
                if (uVar20 < *puVar11) {
                    uVar20 = *puVar11;
                }
                *(uint *)(param_1 + 0x7ab0) = uVar20;
                param_2 = local_res10;
            }
            else if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c64698 == 0) && (iVar7 = FUN_14024aa60(), -1 < iVar7)) {
                    lVar12 = (**(code **)(*DAT_140c63c08 + 0x18))();
                    goto LAB_1406335fd;
                }
            }
            else {
                lVar12 = (*DAT_140c63840)(&PTR_u_World_140a6e180,puVar11[1],DAT_140c63858);
                LAB_1406335fd:
                if ((lVar12 != 0) && (*(int *)(lVar12 + 0x14) == 4)) goto LAB_140633610;
            }
            uVar20 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar20;
        } while (uVar20 < *(uint *)(param_1 + 0x7a98));
    }
    pcVar5 = DAT_140c63838;
    *(int *)(param_1 + 0x7ab0) = *(int *)(param_1 + 0x7ab0) + 1;
    if (pcVar5 == (code *)0x0) {
        if (_DAT_140c647b4 == 0) {
            iVar7 = FUN_14023ef60();
            if (iVar7 < 0) {
                uVar20 = 0;
            }
            else {
                uVar20 = (**(code **)(*DAT_140c63b18 + 0x28))();
            }
        }
        else {
            uVar20 = 0;
        }
    }
    else {
        uVar20 = (*pcVar5)(&PTR_u_Spline2Node_140a6d7e0);
    }
    uVar22 = 0;
    local_res8 = local_res8 & 0xffffffff00000000 | (ulonglong)uVar20;
    if (uVar20 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if (_DAT_140c647b4 == 0) {
                    iVar7 = FUN_14023ef60();
                    if (iVar7 < 0) {
                        lVar12 = 0;
                    }
                    else {
                        lVar12 = (**(code **)(*DAT_140c63b18 + 0x20))();
                    }
                }
                else {
                    lVar12 = 0;
                }
            }
            else {
                lVar12 = (*DAT_140c63848)(&PTR_u_Spline2Node_140a6d7e0,uVar22,DAT_140c63858);
            }
            if (*(int *)(lVar12 + 4) != 0) {
                lVar15 = *(longlong *)(param_1 + 0x7aa8);
                uVar9 = (**(code **)(lVar15 + 0x18))(lVar12 + 4);
                for (puVar14 = *(ulonglong **)
                        (*(longlong *)(lVar15 + 0x10) + (uVar9 % *(ulonglong *)(lVar15 + 8)) * 8);
                     puVar14 != (ulonglong *)0x0; puVar14 = (ulonglong *)puVar14[1]) {
                    if ((uVar9 == *puVar14) && (iVar7 = (**(code **)(lVar15 + 0x20))(lVar12 + 4), iVar7 != 0))
                    {
                        if (puVar14 != (ulonglong *)&DAT_ffffffffffffffe8) {
                            lVar15 = FUN_14001dfc0(local_118);
                            lVar15 = *(longlong *)(lVar15 + 8);
                            plVar16 = (longlong *)FUN_14018b280(0x18);
                            if (plVar16 + 2 != (longlong *)0x0) {
                                plVar16[2] = lVar12;
                            }
                            *plVar16 = lVar15;
                            plVar16[1] = *(longlong *)(lVar15 + 8);
                            **(longlong ***)(lVar15 + 8) = plVar16;
                            *(longlong **)(lVar15 + 8) = plVar16;
                        }
                        break;
                    }
                }
            }
            uVar22 = uVar22 + 1;
        } while (uVar22 < (uint)local_res8);
    }
    puVar19 = *(undefined **)(local_110 + 0x10);
    if (puVar19 != local_110) {
        do {
            lVar12 = *(longlong *)(param_1 + 0x7aa8);
            local_res8 = local_res8 & 0xffffffff00000000 | (ulonglong)*(uint *)(puVar19 + 0x20);
            uVar9 = (**(code **)(lVar12 + 0x18))(&local_res8);
            for (puVar14 = *(ulonglong **)
                    (*(longlong *)(lVar12 + 0x10) + (uVar9 % *(ulonglong *)(lVar12 + 8)) * 8);
                 puVar14 != (ulonglong *)0x0; puVar14 = (ulonglong *)puVar14[1]) {
                if ((uVar9 == *puVar14) && (iVar7 = (**(code **)(lVar12 + 0x20))(&local_res8), iVar7 != 0))
                {
                    if ((longlong **)(puVar14 + 3) != (longlong **)0x0) {
                        plVar16 = (longlong *)puVar14[3];
                        FUN_140634490(puVar19 + 0x28);
                        plVar21 = (longlong *)**(longlong **)(puVar19 + 0x30);
                        if (plVar21 != *(longlong **)(puVar19 + 0x30)) {
                            do {
                                lVar12 = plVar21[2];
                                uVar1 = *(undefined4 *)(lVar12 + 0x28);
                                uVar6 = *(undefined4 *)(lVar12 + 0x14);
                                uVar31 = *(undefined4 *)(lVar12 + 0x10);
                                uVar30 = *(undefined4 *)(lVar12 + 0xc);
                                uVar29 = *(undefined4 *)(lVar12 + 0x30);
                                uVar24 = *(undefined4 *)(lVar12 + 0x34);
                                uVar23 = *(undefined4 *)(lVar12 + 0x2c);
                                uVar32 = 0;
                                uVar25 = *(undefined4 *)(lVar12 + 0x18);
                                uVar26 = *(undefined4 *)(lVar12 + 0x1c);
                                uVar27 = *(undefined4 *)(lVar12 + 0x20);
                                uVar28 = *(undefined4 *)(lVar12 + 0x24);
                                uVar10 = (**(code **)(*plVar16 + 0x20))(plVar16);
                                local_f8 = CONCAT412(uVar32,CONCAT48(uVar6,CONCAT44(uVar31,uVar30)));
                                local_b8 = CONCAT412(uVar28,CONCAT48(uVar27,CONCAT44(uVar26,uVar25)));
                                local_a8 = uVar23;
                                local_a4 = uVar24;
                                local_a0 = uVar1;
                                local_90 = uVar29;
                                FUN_1407a7140(plVar16 + 3,uVar10,local_f8);
                                FUN_1407a4640(plVar16);
                                plVar21 = (longlong *)*plVar21;
                            } while (plVar21 != (longlong *)*(longlong *)(puVar19 + 0x30));
                        }
                    }
                    break;
                }
            }
            puVar17 = *(undefined **)(puVar19 + 0x18);
            if (puVar17 == (undefined *)0x0) {
                puVar17 = *(undefined **)(puVar19 + 8);
                if (puVar19 == *(undefined **)(puVar17 + 0x18)) {
                    do {
                        puVar19 = puVar17;
                        puVar17 = *(undefined **)(puVar19 + 8);
                    } while (puVar19 == *(undefined **)(puVar17 + 0x18));
                }
                if (*(undefined **)(puVar19 + 0x18) != puVar17) {
                    puVar19 = puVar17;
                }
            }
            else {
                for (puVar4 = *(undefined **)(puVar17 + 0x10); puVar19 = puVar17, puVar4 != (undefined *)0x0
                        ; puVar4 = *(undefined **)(puVar4 + 0x10)) {
                    puVar17 = puVar4;
                }
            }
        } while (puVar19 != local_110);
    }
    FUN_140634390(param_1);
    if (DAT_140c63850 == (code *)0x0) {
        if ((_DAT_140c63c1c == 0) && (_DAT_140c63c1c = 1, DAT_140c64570 != (longlong *)0x0)) {
            (**(code **)(*DAT_140c64570 + 8))();
            DAT_140c64570 = (longlong *)0x0;
            goto LAB_140633a49;
        }
    }
    else {
        (*DAT_140c63850)(&PTR_u_Spline2_140a6d7a8,DAT_140c63858);
        LAB_140633a49:
        if (DAT_140c63850 != (code *)0x0) {
            (*DAT_140c63850)(&PTR_u_Spline2Node_140a6d7e0,DAT_140c63858);
            goto LAB_140633a97;
        }
    }
    if ((_DAT_140c647b4 == 0) && (_DAT_140c647b4 = 1, DAT_140c63b18 != (longlong *)0x0)) {
        (**(code **)(*DAT_140c63b18 + 8))();
        DAT_140c63b18 = (longlong *)0x0;
    }
    LAB_140633a97:
    if (local_108 != 0) {
        FUN_14001ea50(local_118,*(undefined8 *)(local_110 + 8));
        *(undefined **)(local_110 + 0x10) = local_110;
        *(undefined8 *)(local_110 + 8) = 0;
        *(undefined **)(local_110 + 0x18) = local_110;
        local_108 = 0;
    }
    FUN_14018b900(local_110,0);
    return 0;
}



void FUN_140633b00(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    uint uVar4;
    longlong lVar6;
    ulonglong uVar5;

    lVar6 = *(longlong *)(param_1 + 0x7aa8);
    uVar5 = 0;
    if (lVar6 != 0) {
        FUN_140019490(lVar6);
        FUN_14018b900(*(undefined8 *)(lVar6 + 0x10),0);
        *(undefined8 *)(lVar6 + 0x10) = 0;
        FUN_14018b900(lVar6,0);
    }
    *(undefined8 *)(param_1 + 0x7aa8) = 0;
    if (*(longlong *)(param_1 + 0x7aa0) != 0) {
        if (*(int *)(param_1 + 0x7a98) != 0) {
            do {
                if (*(longlong *)(*(longlong *)(param_1 + 0x7aa0) + uVar5 * 8) != 0) {
                    FUN_140633300();
                }
                uVar4 = (int)uVar5 + 1;
                uVar5 = (ulonglong)uVar4;
            } while (uVar4 < *(uint *)(param_1 + 0x7a98));
        }
        FUN_14018b900(*(undefined8 *)(param_1 + 0x7aa0),0);
        *(undefined8 *)(param_1 + 0x7aa0) = 0;
    }
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x7ac0) + 0x10);
    if (lVar6 != *(longlong *)(param_1 + 0x7ac0)) {
        do {
            lVar3 = *(longlong *)(lVar6 + 0x28);
            plVar1 = *(longlong **)(lVar3 + 8);
            if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 8))();
                *(undefined8 *)(lVar3 + 8) = 0;
            }
            FUN_14018b900(*(undefined8 *)(lVar6 + 0x28),0);
            lVar3 = *(longlong *)(lVar6 + 0x18);
            if (lVar3 == 0) {
                lVar3 = *(longlong *)(lVar6 + 8);
                if (lVar6 == *(longlong *)(lVar3 + 0x18)) {
                    do {
                        lVar6 = lVar3;
                        lVar3 = *(longlong *)(lVar6 + 8);
                    } while (lVar6 == *(longlong *)(lVar3 + 0x18));
                }
                if (*(longlong *)(lVar6 + 0x18) != lVar3) {
                    lVar6 = lVar3;
                }
            }
            else {
                for (lVar2 = *(longlong *)(lVar3 + 0x10); lVar6 = lVar3, lVar2 != 0;
                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                    lVar3 = lVar2;
                }
            }
        } while (lVar6 != *(longlong *)(param_1 + 0x7ac0));
    }
    if (*(longlong *)(param_1 + 0x7ac8) != 0) {
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x7ac0) + 8);
        while (lVar6 != 0) {
            FUN_1400083b0(param_1 + 0x7ab8,*(undefined8 *)(lVar6 + 0x18));
            lVar3 = *(longlong *)(lVar6 + 0x10);
            FUN_14018b900(lVar6,0);
            lVar6 = lVar3;
        }
        *(longlong *)(*(longlong *)(param_1 + 0x7ac0) + 0x10) = *(longlong *)(param_1 + 0x7ac0);
        *(undefined8 *)(*(longlong *)(param_1 + 0x7ac0) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0x7ac0) + 0x18) = *(longlong *)(param_1 + 0x7ac0);
        *(undefined8 *)(param_1 + 0x7ac8) = 0;
    }
    return;
}



undefined8 FUN_140633cb0(undefined8 *param_1,uint param_2,undefined8 *param_3)

{
    undefined8 *puVar1;
    int iVar2;
    undefined8 *puVar3;
    undefined8 *local_res8;
    uint local_res10 [2];

    local_res10[0] = param_2;
    if (param_2 < *(uint *)(DAT_140c65898 + 0x7ab0)) {
        local_res8 = param_1;
        iVar2 = FUN_1402dd480(*(undefined8 *)(DAT_140c65898 + 0x7aa8),local_res10,&local_res8);
        puVar3 = local_res8;
        if (iVar2 == 0) {
            return 0x80004005;
        }
    }
    else {
        puVar3 = *(undefined8 **)(DAT_140c65898 + 0x7ac0);
        local_res8 = puVar3;
        puVar1 = (undefined8 *)puVar3[1];
        while (puVar1 != (undefined8 *)0x0) {
            if (*(uint *)(puVar1 + 4) < param_2) {
                puVar1 = (undefined8 *)puVar1[3];
            }
            else {
                local_res8 = puVar1;
                puVar1 = (undefined8 *)puVar1[2];
            }
        }
        if ((local_res8 == puVar3) || (param_2 < *(uint *)(local_res8 + 4))) {
            local_res8 = puVar3;
        }
        if (local_res8 == puVar3) {
            return 0x80004005;
        }
        puVar3 = *(undefined8 **)(local_res8[5] + 8);
    }
    if (param_3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3);
        *param_3 = puVar3;
    }
    return 0;
}



undefined8 FUN_1406342a0(longlong param_1,uint *param_2)

{
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong local_res8;

    uVar1 = *param_2;
    if (uVar1 < *(uint *)(param_1 + 0x7ab0)) {
        return 0x80004005;
    }
    lVar2 = *(longlong *)(param_1 + 0x7ac0);
    local_res8 = lVar2;
    lVar3 = *(longlong *)(lVar2 + 8);
    while (lVar3 != 0) {
        if (*(uint *)(lVar3 + 0x20) < uVar1) {
            lVar3 = *(longlong *)(lVar3 + 0x18);
        }
        else {
            local_res8 = lVar3;
            lVar3 = *(longlong *)(lVar3 + 0x10);
        }
    }
    if ((local_res8 == lVar2) || (uVar1 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar2;
    }
    lVar2 = local_res8;
    if (local_res8 == *(longlong *)(param_1 + 0x7ac0)) {
        return 0x80004005;
    }
    lVar3 = *(longlong *)(local_res8 + 0x28);
    plVar4 = *(longlong **)(lVar3 + 8);
    if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 8))();
        *(undefined8 *)(lVar3 + 8) = 0;
    }
    FUN_14018b900(*(undefined8 *)(lVar2 + 0x28),0);
    local_res8 = lVar2;
    FUN_140634730(param_1 + 0x7ab8,&local_res8);
    return 0;
}



void FUN_140634390(longlong param_1)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    undefined4 local_res8 [2];
    undefined4 local_28 [2];
    undefined8 local_20;
    code *local_18;
    undefined8 local_10;

    iVar2 = FUN_14018cdf0();
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x7ac0) + 0x10);
    if (lVar4 != *(longlong *)(param_1 + 0x7ac0)) {
        do {
            if (899999 < (uint)(iVar2 - (*(undefined4 **)(lVar4 + 0x28))[1])) {
                local_res8[0] = **(undefined4 **)(lVar4 + 0x28);
                FUN_1403f4900(param_1,0x81d,local_res8);
            }
            lVar3 = *(longlong *)(lVar4 + 0x18);
            if (lVar3 == 0) {
                lVar3 = *(longlong *)(lVar4 + 8);
                if (lVar4 == *(longlong *)(lVar3 + 0x18)) {
                    do {
                        lVar4 = lVar3;
                        lVar3 = *(longlong *)(lVar4 + 8);
                    } while (lVar4 == *(longlong *)(lVar3 + 0x18));
                }
                if (*(longlong *)(lVar4 + 0x18) != lVar3) {
                    lVar4 = lVar3;
                }
            }
            else {
                for (lVar1 = *(longlong *)(lVar3 + 0x10); lVar4 = lVar3, lVar1 != 0;
                     lVar1 = *(longlong *)(lVar1 + 0x10)) {
                    lVar3 = lVar1;
                }
            }
        } while (lVar4 != *(longlong *)(param_1 + 0x7ac0));
    }
    local_28[0] = 0;
    local_20 = FUN_14001c280(param_1);
    local_10 = 0;
    local_18 = FUN_140634390;
    FUN_140195960(param_1 + 0x7ad8,600000,local_28,4);
    return;
}



void FUN_140634490(longlong param_1)

{
    longlong *plVar1;
    longlong **pplVar2;
    undefined8 uVar3;
    longlong **pplVar4;
    longlong *plVar5;
    longlong **pplVar6;
    undefined *puVar7;
    longlong *plVar8;
    longlong lVar9;
    int iVar10;
    longlong **pplVar11;
    ulonglong uVar12;
    int iVar13;
    undefined auStack1128 [32];
    undefined local_448 [8];
    longlong **local_440;
    undefined local_438 [8];
    longlong *local_430;
    undefined local_428 [1000];
    longlong *local_40;
    ulonglong local_38;
    longlong local_30;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack1128;
    plVar5 = *(longlong **)(param_1 + 8);
    if (((longlong **)*plVar5 != (longlong **)plVar5) && (*(longlong **)*plVar5 != plVar5)) {
        pplVar4 = (longlong **)FUN_14018b280(0x18);
        *pplVar4 = (longlong *)pplVar4;
        pplVar4[1] = (longlong *)pplVar4;
        iVar10 = 0x3f;
        pplVar6 = &local_430;
        local_440 = pplVar4;
        do {
            plVar5 = (longlong *)FUN_14018b280(0x18);
            iVar10 = iVar10 + -1;
            *plVar5 = (longlong)plVar5;
            *pplVar6 = plVar5;
            plVar5[1] = (longlong)plVar5;
            pplVar6 = pplVar6 + 2;
        } while (-1 < iVar10);
        pplVar6 = *(longlong ***)(param_1 + 8);
        iVar10 = 0;
        if ((longlong **)*pplVar6 != pplVar6) {
            do {
                plVar5 = *pplVar6;
                plVar8 = *pplVar4;
                plVar1 = (longlong *)*plVar5;
                if ((plVar8 != plVar5) && (plVar8 != plVar1)) {
                    *(longlong **)plVar1[1] = plVar8;
                    *(longlong **)plVar5[1] = plVar1;
                    *(longlong **)plVar8[1] = plVar5;
                    lVar9 = plVar8[1];
                    plVar8[1] = plVar1[1];
                    plVar1[1] = plVar5[1];
                    plVar5[1] = lVar9;
                }
                iVar13 = 0;
                lVar9 = 0;
                pplVar6 = pplVar4;
                if (0 < iVar10) {
                    pplVar11 = &local_430;
                    do {
                        pplVar2 = (longlong **)*pplVar11;
                        pplVar6 = pplVar4;
                        if ((longlong **)*pplVar2 == pplVar2) break;
                        FUN_1401589f0(local_438 + (longlong)iVar13 * 0x10,local_448,&LAB_140633370);
                        lVar9 = lVar9 + 1;
                        *pplVar11 = (longlong *)pplVar4;
                        pplVar11 = pplVar11 + 2;
                        iVar13 = iVar13 + 1;
                        pplVar6 = pplVar2;
                        pplVar4 = pplVar2;
                        local_440 = pplVar2;
                    } while (lVar9 < iVar10);
                }
                pplVar4 = *(longlong ***)(local_428 + lVar9 * 0x10 + -8);
                *(longlong ***)(local_428 + lVar9 * 0x10 + -8) = pplVar6;
                if (iVar13 == iVar10) {
                    iVar10 = iVar10 + 1;
                }
                pplVar6 = *(longlong ***)(param_1 + 8);
                local_440 = pplVar4;
            } while ((longlong **)*pplVar6 != pplVar6);
        }
        iVar13 = 0x3f;
        if (1 < iVar10) {
            puVar7 = local_428;
            uVar12 = (ulonglong)(iVar10 - 1);
            do {
                FUN_1401589f0(puVar7,puVar7 + -0x10,&LAB_140633370);
                puVar7 = puVar7 + 0x10;
                uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
        }
        plVar5 = &local_30;
        uVar3 = *(undefined8 *)(local_428 + (longlong)(iVar10 + -1) * 0x10 + -8);
        *(undefined8 *)(local_428 + (longlong)(iVar10 + -1) * 0x10 + -8) = *(undefined8 *)(param_1 + 8);
        *(undefined8 *)(param_1 + 8) = uVar3;
        do {
            pplVar6 = (longlong **)(plVar5 + -2);
            plVar5 = plVar5 + -2;
            plVar8 = (longlong *)**pplVar6;
            if (plVar8 != *pplVar6) {
                do {
                    plVar1 = (longlong *)*plVar8;
                    FUN_14018b900(plVar8,0);
                    plVar8 = plVar1;
                } while (plVar1 != (longlong *)*plVar5);
            }
            *(longlong *)*plVar5 = *plVar5;
            *(longlong *)(*plVar5 + 8) = *plVar5;
            FUN_14018b900(*plVar5,0);
            iVar13 = iVar13 + -1;
        } while (-1 < iVar13);
        pplVar6 = (longlong **)*pplVar4;
        while (pplVar6 != pplVar4) {
            pplVar11 = (longlong **)*pplVar6;
            FUN_14018b900(pplVar6,0);
            pplVar6 = pplVar11;
        }
        *pplVar4 = (longlong *)pplVar4;
        pplVar4[1] = (longlong *)pplVar4;
        FUN_14018b900(pplVar4,0);
    }
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack1128);
    return;
}



void FUN_140634730(longlong param_1,longlong *param_2)

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

    lVar1 = *(longlong *)(param_1 + 8);
    if (*param_2 == lVar1) {
        local_48 = &PTR_LAB_140b5e648;
        local_40 = 0;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_48);
        local_28 = local_48;
        local_res8 = 0x141e4f6b0;
        local_18 = local_38;
        local_20 = local_40;
        iVar2 = FUN_1401971e0(&DAT_140c8aff4,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001406347f6. Too many branches
            // WARNING: Treating indirect jump as call
            DebugBreak();
            return;
        }
    }
    else {
        uVar3 = FUN_140007db0(*param_2,lVar1 + 8,lVar1 + 0x10,lVar1 + 0x18);
        FUN_14018b900(uVar3,0);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    }
    return;
}



// WARNING: Removing unreachable block (ram,0x000140635275)
// WARNING: Removing unreachable block (ram,0x000140635779)
// WARNING: Removing unreachable block (ram,0x000140634dfa)
// WARNING: Removing unreachable block (ram,0x0001406349fe)
// WARNING: Removing unreachable block (ram,0x000140635462)
// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140634870(longlong *param_1,longlong param_2)

{
    _FILETIME *p_Var1;
    undefined4 uVar2;
    double *pdVar3;
    uint *puVar4;
    int iVar5;
    int iVar6;
    undefined8 uVar7;
    longlong lVar8;
    undefined8 *puVar9;
    undefined8 uVar10;
    longlong lVar11;
    longlong *plVar12;
    undefined8 *puVar13;
    longlong lVar14;
    uint uVar15;
    _FILETIME _Var16;
    ulonglong uVar17;
    _FILETIME _Var18;
    longlong lVar19;
    double dVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    undefined4 uVar24;
    undefined4 uVar25;
    undefined8 local_res20;
    _FILETIME local_d8;
    _FILETIME local_d0;
    _FILETIME local_c8;
    _FILETIME local_c0;
    undefined **local_b8;
    int local_b0;
    undefined4 uStack172;
    longlong local_a8;
    undefined4 local_a0;

    uVar10 = 0;
    local_res20 = 0;
    if (param_1[1] != 0) {
        lVar19 = 0;
        do {
            lVar11 = *(longlong *)(param_2 + 0x10);
            local_b8 = &PTR_FUN_140b569f0;
            local_a0 = 1;
            local_a8 = lVar11;
            if (*(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar11);
            }
            puVar13 = *(undefined8 **)(lVar11 + 0x10);
            uVar7 = FUN_14005c1b0(lVar11,0,0);
            *(undefined4 *)(puVar13 + 1) = 5;
            *puVar13 = uVar7;
            *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
            iVar5 = FUN_1400578c0(lVar11);
            uVar24 = *(undefined4 *)(lVar19 + *param_1);
            local_b0 = iVar5;
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c63898 == 0) && (iVar6 = FUN_14022fd20(), -1 < iVar6)) {
                    lVar8 = (**(code **)(*DAT_140c64480 + 0x18))(DAT_140c64480,uVar24);
                    goto LAB_14063498d;
                }
            }
            else {
                lVar8 = (*DAT_140c63840)(&PTR_u_RewardRotationItem_140a6cb68,uVar24);
                LAB_14063498d:
                if ((lVar8 != 0) && (iVar6 = FUN_140639710(lVar8,&local_b8), iVar6 != 0)) {
                    lVar8 = *param_1;
                    fVar21 = 0.0;
                    GetSystemTimeAsFileTime(&local_d0);
                    p_Var1 = (_FILETIME *)(lVar19 + 8 + lVar8);
                    if ((ulonglong)local_d0 <= (ulonglong)*p_Var1 && *p_Var1 != local_d0) {
                        lVar8 = *param_1;
                        GetSystemTimeAsFileTime(&local_d8);
                        fVar21 = (float)((ulonglong)(*(longlong *)(lVar19 + 8 + lVar8) - (longlong)local_d8) /
                                         10000000);
                    }
                    puVar9 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),iVar5);
                    puVar13 = *(undefined8 **)(lVar11 + 0x10);
                    *puVar13 = *puVar9;
                    *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar9 + 1);
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                    lVar8 = FUN_14018f0e0(&local_b8,L"nSecondsRemaining");
                    lVar8 = *(longlong *)(lVar8 + 8);
                    if (lVar8 == 0) {
                        *(undefined4 *)(*(longlong *)(lVar11 + 0x10) + 8) = 0;
                    }
                    else {
                        lVar14 = -1;
                        do {
                            lVar14 = lVar14 + 1;
                        } while (*(char *)(lVar8 + lVar14) != '\0');
                        if (*(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x70) <=
                            *(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x78)) {
                            FUN_14005e2c0(lVar11);
                        }
                        puVar13 = *(undefined8 **)(lVar11 + 0x10);
                        uVar10 = FUN_140062650(lVar11,lVar8,lVar14);
                        *(undefined4 *)(puVar13 + 1) = 4;
                        *puVar13 = uVar10;
                    }
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                    if (CONCAT44(uStack172,local_b0) != 0) {
                        FUN_14018b900(CONCAT44(uStack172,local_b0),0);
                    }
                    pdVar3 = *(double **)(lVar11 + 0x10);
                    *(undefined4 *)(pdVar3 + 1) = 3;
                    *pdVar3 = (double)fVar21;
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                    uVar10 = FUN_1400580e0(lVar11,0xfffffffd);
                    FUN_14005ea50(lVar11,uVar10,*(longlong *)(lVar11 + 0x10) + -0x20,
                                  *(longlong *)(lVar11 + 0x10) + -0x10);
                    *(longlong *)(lVar11 + 0x10) =
                            (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar11 + 0x10));
                    puVar13 = *(undefined8 **)(lVar11 + 0x10);
                    iVar6 = *(int *)(lVar19 + 0x10 + *param_1);
                    puVar9 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),iVar5);
                    *puVar13 = *puVar9;
                    *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar9 + 1);
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                    lVar8 = FUN_14018f0e0(&local_b8,L"bGranted");
                    lVar8 = *(longlong *)(lVar8 + 8);
                    if (lVar8 == 0) {
                        *(undefined4 *)(*(longlong *)(lVar11 + 0x10) + 8) = 0;
                    }
                    else {
                        lVar14 = -1;
                        do {
                            lVar14 = lVar14 + 1;
                        } while (*(char *)(lVar8 + lVar14) != '\0');
                        if (*(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x70) <=
                            *(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x78)) {
                            FUN_14005e2c0(lVar11);
                        }
                        puVar13 = *(undefined8 **)(lVar11 + 0x10);
                        uVar10 = FUN_140062650(lVar11,lVar8,lVar14);
                        *(undefined4 *)(puVar13 + 1) = 4;
                        *puVar13 = uVar10;
                    }
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                    if (CONCAT44(uStack172,local_b0) != 0) {
                        FUN_14018b900(CONCAT44(uStack172,local_b0),0);
                    }
                    puVar4 = *(uint **)(lVar11 + 0x10);
                    puVar4[2] = 1;
                    *puVar4 = (uint)(iVar6 != 0);
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                    uVar10 = FUN_1400580e0(lVar11,0xfffffffd);
                    FUN_14005ea50(lVar11,uVar10,*(longlong *)(lVar11 + 0x10) + -0x20,
                                  *(longlong *)(lVar11 + 0x10) + -0x10);
                    *(longlong *)(lVar11 + 0x10) =
                            (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar11 + 0x10));
                    FUN_1400fb1d0(param_2,iVar5);
                    uVar10 = 1;
                }
            }
            FUN_1400579e0(lVar11);
            local_res20 = local_res20 + 1;
            lVar19 = lVar19 + 0x18;
        } while (local_res20 < (ulonglong)param_1[1]);
    }
    uVar24 = 0;
    uVar25 = 0;
    local_d8 = (_FILETIME)0x0;
    if (param_1[3] != 0) {
        fVar21 = 1.0;
        do {
            _Var18 = local_d8;
            lVar19 = *(longlong *)(param_2 + 0x10);
            local_b8 = &PTR_FUN_140b569f0;
            local_a0 = 1;
            local_a8 = lVar19;
            if (*(ulonglong *)(*(longlong *)(lVar19 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar19 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar19);
            }
            puVar13 = *(undefined8 **)(lVar19 + 0x10);
            uVar7 = FUN_14005c1b0(lVar19,0,0);
            *(undefined4 *)(puVar13 + 1) = 5;
            *puVar13 = uVar7;
            *(longlong *)(lVar19 + 0x10) = *(longlong *)(lVar19 + 0x10) + 0x10;
            iVar5 = FUN_1400578c0(lVar19);
            local_b0 = iVar5;
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c641bc == 0) && (iVar6 = FUN_140230160(), -1 < iVar6)) {
                    lVar11 = (**(code **)(*DAT_140c64ff8 + 0x18))();
                    goto LAB_140634d0e;
                }
            }
            else {
                lVar11 = (*DAT_140c63840)(&PTR_u_RewardRotationEssence_140a6cba0);
                LAB_140634d0e:
                if ((lVar11 != 0) && (iVar6 = FUN_140639c80(lVar11), iVar6 != 0)) {
                    uVar17 = 0;
                    fVar23 = fVar21;
                    if (param_1[5] != 0) {
                        lVar11 = 0;
                        do {
                            uVar2 = *(undefined4 *)(lVar11 + param_1[4]);
                            if (DAT_140c63840 == (code *)0x0) {
                                if ((_DAT_140c641b8 == 0) && (iVar6 = FUN_1402305a0(), -1 < iVar6)) {
                                    lVar8 = (**(code **)(*DAT_140c64e90 + 0x18))(DAT_140c64e90,uVar2);
                                    goto LAB_140634d89;
                                }
                            }
                            else {
                                lVar8 = (*DAT_140c63840)(&PTR_u_RewardRotationModifier_140a6cbd8,uVar2,DAT_140c63858
                                );
                                LAB_140634d89:
                                if ((lVar8 != 0) && (*(int *)(lVar8 + 4) == 0x26)) {
                                    fVar21 = fVar21 * *(float *)(lVar8 + 0xc);
                                }
                            }
                            uVar17 = uVar17 + 1;
                            lVar11 = lVar11 + 0x18;
                        } while (uVar17 < (ulonglong)param_1[5]);
                    }
                    lVar11 = param_1[2];
                    fVar22 = 0.0;
                    GetSystemTimeAsFileTime(&local_d0);
                    p_Var1 = (_FILETIME *)(lVar11 + 8 + (longlong)_Var18 * 0x18);
                    if ((ulonglong)local_d0 <= (ulonglong)*p_Var1 && *p_Var1 != local_d0) {
                        lVar11 = param_1[2];
                        GetSystemTimeAsFileTime(&local_c8);
                        fVar22 = (float)((ulonglong)
                                                 (*(longlong *)(lVar11 + 8 + (longlong)_Var18 * 0x18) -
                                                  (longlong)local_c8) / 10000000);
                    }
                    uVar15 = iVar5 - 1;
                    lVar11 = *(longlong *)(*(longlong *)(lVar19 + 0x20) + 0xa0);
                    if (uVar15 < *(uint *)(lVar11 + 0x38)) {
                        puVar13 = (undefined8 *)((longlong)(iVar5 + -1) * 0x10 + *(longlong *)(lVar11 + 0x18));
                    }
                    else {
                        dVar20 = (double)iVar5;
                        if (dVar20 == (double)CONCAT44(uVar25,uVar24)) {
                            puVar13 = *(undefined8 **)(lVar11 + 0x20);
                        }
                        else {
                            local_res20._4_4_ = (int)((ulonglong)dVar20 >> 0x20);
                            local_res20._0_4_ = SUB84(dVar20,0);
                            puVar13 = (undefined8 *)
                                    (*(longlong *)(lVar11 + 0x20) +
                                     ((longlong)(ulonglong)(uint)(local_res20._4_4_ + (int)local_res20) %
                                      (longlong)((1 << (*(byte *)(lVar11 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                        }
                        do {
                            if ((*(int *)(puVar13 + 3) == 3) && (dVar20 == (double)puVar13[2]))
                                goto LAB_140634e8d;
                            puVar13 = (undefined8 *)puVar13[4];
                        } while (puVar13 != (undefined8 *)0x0);
                        puVar13 = &DAT_140a12138;
                    }
                    LAB_140634e8d:
                    puVar9 = *(undefined8 **)(lVar19 + 0x10);
                    *puVar9 = *puVar13;
                    *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar13 + 1);
                    *(longlong *)(lVar19 + 0x10) = *(longlong *)(lVar19 + 0x10) + 0x10;
                    lVar11 = FUN_14018f0e0(&local_b8,L"nSecondsRemaining");
                    lVar11 = *(longlong *)(lVar11 + 8);
                    if (lVar11 == 0) {
                        *(undefined4 *)(*(longlong *)(lVar19 + 0x10) + 8) = 0;
                    }
                    else {
                        lVar8 = -1;
                        do {
                            lVar8 = lVar8 + 1;
                        } while (*(char *)(lVar11 + lVar8) != '\0');
                        if (*(ulonglong *)(*(longlong *)(lVar19 + 0x20) + 0x70) <=
                            *(ulonglong *)(*(longlong *)(lVar19 + 0x20) + 0x78)) {
                            FUN_14005e2c0(lVar19);
                        }
                        puVar13 = *(undefined8 **)(lVar19 + 0x10);
                        uVar10 = FUN_140062650(lVar19,lVar11,lVar8);
                        *(undefined4 *)(puVar13 + 1) = 4;
                        *puVar13 = uVar10;
                    }
                    *(longlong *)(lVar19 + 0x10) = *(longlong *)(lVar19 + 0x10) + 0x10;
                    if (CONCAT44(uStack172,local_b0) != 0) {
                        FUN_14018b900(CONCAT44(uStack172,local_b0),0);
                    }
                    pdVar3 = *(double **)(lVar19 + 0x10);
                    *(undefined4 *)(pdVar3 + 1) = 3;
                    *pdVar3 = (double)fVar22;
                    *(longlong *)(lVar19 + 0x10) = *(longlong *)(lVar19 + 0x10) + 0x10;
                    uVar10 = FUN_1400580e0(lVar19,0xfffffffd);
                    FUN_14005ea50(lVar19,uVar10,*(longlong *)(lVar19 + 0x10) + -0x20,
                                  *(longlong *)(lVar19 + 0x10) + -0x10);
                    *(longlong *)(lVar19 + 0x10) =
                            (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar19 + 0x10));
                    lVar11 = *(longlong *)(*(longlong *)(lVar19 + 0x20) + 0xa0);
                    puVar13 = *(undefined8 **)(lVar19 + 0x10);
                    if (uVar15 < *(uint *)(lVar11 + 0x38)) {
                        puVar9 = (undefined8 *)((longlong)(iVar5 + -1) * 0x10 + *(longlong *)(lVar11 + 0x18));
                    }
                    else {
                        dVar20 = (double)iVar5;
                        if (dVar20 == (double)CONCAT44(uVar25,uVar24)) {
                            puVar9 = *(undefined8 **)(lVar11 + 0x20);
                        }
                        else {
                            local_res20._4_4_ = (int)((ulonglong)dVar20 >> 0x20);
                            local_res20._0_4_ = SUB84(dVar20,0);
                            puVar9 = (undefined8 *)
                                    (*(longlong *)(lVar11 + 0x20) +
                                     ((longlong)(ulonglong)(uint)(local_res20._4_4_ + (int)local_res20) %
                                      (longlong)((1 << (*(byte *)(lVar11 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                        }
                        do {
                            if ((*(int *)(puVar9 + 3) == 3) && (dVar20 == (double)puVar9[2])) goto LAB_140634ff2;
                            puVar9 = (undefined8 *)puVar9[4];
                        } while (puVar9 != (undefined8 *)0x0);
                        puVar9 = &DAT_140a12138;
                    }
                    LAB_140634ff2:
                    *puVar13 = *puVar9;
                    *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar9 + 1);
                    *(longlong *)(lVar19 + 0x10) = *(longlong *)(lVar19 + 0x10) + 0x10;
                    lVar11 = FUN_14018f0e0(&local_b8,L"nMultiplier");
                    lVar11 = *(longlong *)(lVar11 + 8);
                    if (lVar11 == 0) {
                        *(undefined4 *)(*(longlong *)(lVar19 + 0x10) + 8) = 0;
                    }
                    else {
                        lVar8 = -1;
                        do {
                            lVar8 = lVar8 + 1;
                        } while (*(char *)(lVar11 + lVar8) != '\0');
                        if (*(ulonglong *)(*(longlong *)(lVar19 + 0x20) + 0x70) <=
                            *(ulonglong *)(*(longlong *)(lVar19 + 0x20) + 0x78)) {
                            FUN_14005e2c0(lVar19);
                        }
                        puVar13 = *(undefined8 **)(lVar19 + 0x10);
                        uVar10 = FUN_140062650(lVar19,lVar11,lVar8);
                        *(undefined4 *)(puVar13 + 1) = 4;
                        *puVar13 = uVar10;
                    }
                    *(longlong *)(lVar19 + 0x10) = *(longlong *)(lVar19 + 0x10) + 0x10;
                    if (CONCAT44(uStack172,local_b0) != 0) {
                        FUN_14018b900(CONCAT44(uStack172,local_b0),0);
                    }
                    pdVar3 = *(double **)(lVar19 + 0x10);
                    *(undefined4 *)(pdVar3 + 1) = 3;
                    *pdVar3 = (double)fVar21;
                    *(longlong *)(lVar19 + 0x10) = *(longlong *)(lVar19 + 0x10) + 0x10;
                    uVar10 = FUN_1400580e0(lVar19,0xfffffffd);
                    FUN_14005ea50(lVar19,uVar10,*(longlong *)(lVar19 + 0x10) + -0x20,
                                  *(longlong *)(lVar19 + 0x10) + -0x10);
                    *(longlong *)(lVar19 + 0x10) =
                            (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar19 + 0x10));
                    puVar13 = *(undefined8 **)(lVar19 + 0x10);
                    iVar6 = *(int *)(param_1[2] + 0x10 + (longlong)_Var18 * 0x18);
                    lVar11 = *(longlong *)(*(longlong *)(lVar19 + 0x20) + 0xa0);
                    if (uVar15 < *(uint *)(lVar11 + 0x38)) {
                        puVar9 = (undefined8 *)((longlong)(iVar5 + -1) * 0x10 + *(longlong *)(lVar11 + 0x18));
                    }
                    else {
                        dVar20 = (double)iVar5;
                        if (dVar20 == (double)CONCAT44(uVar25,uVar24)) {
                            puVar9 = *(undefined8 **)(lVar11 + 0x20);
                        }
                        else {
                            local_res20._4_4_ = (int)((ulonglong)dVar20 >> 0x20);
                            local_res20._0_4_ = SUB84(dVar20,0);
                            puVar9 = (undefined8 *)
                                    (*(longlong *)(lVar11 + 0x20) +
                                     ((longlong)(ulonglong)(uint)(local_res20._4_4_ + (int)local_res20) %
                                      (longlong)((1 << (*(byte *)(lVar11 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                        }
                        do {
                            if ((*(int *)(puVar9 + 3) == 3) && (dVar20 == (double)puVar9[2])) goto LAB_14063515f;
                            puVar9 = (undefined8 *)puVar9[4];
                        } while (puVar9 != (undefined8 *)0x0);
                        puVar9 = &DAT_140a12138;
                    }
                    LAB_14063515f:
                    *puVar13 = *puVar9;
                    *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar9 + 1);
                    *(longlong *)(lVar19 + 0x10) = *(longlong *)(lVar19 + 0x10) + 0x10;
                    lVar11 = FUN_14018f0e0(&local_b8,L"bGranted");
                    lVar11 = *(longlong *)(lVar11 + 8);
                    if (lVar11 == 0) {
                        *(undefined4 *)(*(longlong *)(lVar19 + 0x10) + 8) = 0;
                    }
                    else {
                        lVar8 = -1;
                        do {
                            lVar8 = lVar8 + 1;
                        } while (*(char *)(lVar11 + lVar8) != '\0');
                        if (*(ulonglong *)(*(longlong *)(lVar19 + 0x20) + 0x70) <=
                            *(ulonglong *)(*(longlong *)(lVar19 + 0x20) + 0x78)) {
                            FUN_14005e2c0(lVar19);
                        }
                        puVar13 = *(undefined8 **)(lVar19 + 0x10);
                        uVar10 = FUN_140062650(lVar19,lVar11,lVar8);
                        *(undefined4 *)(puVar13 + 1) = 4;
                        *puVar13 = uVar10;
                    }
                    *(longlong *)(lVar19 + 0x10) = *(longlong *)(lVar19 + 0x10) + 0x10;
                    fVar21 = fVar23;
                    if (CONCAT44(uStack172,local_b0) != 0) {
                        FUN_14018b900(CONCAT44(uStack172,local_b0),0);
                        fVar21 = fVar23;
                    }
                    puVar4 = *(uint **)(lVar19 + 0x10);
                    puVar4[2] = 1;
                    *puVar4 = (uint)(iVar6 != 0);
                    *(longlong *)(lVar19 + 0x10) = *(longlong *)(lVar19 + 0x10) + 0x10;
                    uVar10 = FUN_1400580e0(lVar19,0xfffffffd);
                    FUN_14005ea50(lVar19,uVar10,*(longlong *)(lVar19 + 0x10) + -0x20,
                                  *(longlong *)(lVar19 + 0x10) + -0x10);
                    *(longlong *)(lVar19 + 0x10) =
                            (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar19 + 0x10));
                    FUN_1400fb1d0(param_2);
                    uVar10 = 1;
                    _Var18 = local_d8;
                }
            }
            if (-1 < iVar5) {
                plVar12 = (longlong *)FUN_1400580e0(lVar19,0xffffd8f0);
                puVar13 = *(undefined8 **)(*plVar12 + 0x20);
                do {
                    if ((*(int *)(puVar13 + 3) == 3) &&
                        ((double)CONCAT44(uVar25,uVar24) == (double)puVar13[2])) goto LAB_1406352a1;
                    puVar13 = (undefined8 *)puVar13[4];
                } while (puVar13 != (undefined8 *)0x0);
                puVar13 = &DAT_140a12138;
                LAB_1406352a1:
                puVar9 = *(undefined8 **)(lVar19 + 0x10);
                *puVar9 = *puVar13;
                *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar13 + 1);
                *(longlong *)(lVar19 + 0x10) = *(longlong *)(lVar19 + 0x10) + 0x10;
                FUN_140058b30(lVar19,0xffffd8f0);
                pdVar3 = *(double **)(lVar19 + 0x10);
                *(undefined4 *)(pdVar3 + 1) = 3;
                *pdVar3 = (double)iVar5;
                *(longlong *)(lVar19 + 0x10) = *(longlong *)(lVar19 + 0x10) + 0x10;
                FUN_140058b30(lVar19);
            }
            local_d8 = (_FILETIME)((longlong)_Var18 + 1);
        } while ((ulonglong)local_d8 < (ulonglong)*(_FILETIME *)(param_1 + 3));
    }
    local_d8 = (_FILETIME)0x0;
    if (param_1[5] != 0) {
        local_d0 = (_FILETIME)0x0;
        do {
            _Var16 = local_d0;
            _Var18 = local_d8;
            lVar19 = *(longlong *)(param_2 + 0x10);
            local_a0 = 1;
            local_b8 = &PTR_FUN_140b569f0;
            local_a8 = lVar19;
            if (*(ulonglong *)(*(longlong *)(lVar19 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar19 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar19);
            }
            puVar13 = *(undefined8 **)(lVar19 + 0x10);
            uVar7 = FUN_14005c1b0(lVar19,0,0);
            *(undefined4 *)(puVar13 + 1) = 5;
            *puVar13 = uVar7;
            *(longlong *)(lVar19 + 0x10) = *(longlong *)(lVar19 + 0x10) + 0x10;
            iVar5 = FUN_1400578c0(lVar19);
            local_b0 = iVar5;
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c641b8 == 0) && (iVar6 = FUN_1402305a0(), -1 < iVar6)) {
                    lVar11 = (**(code **)(*DAT_140c64e90 + 0x18))();
                    goto LAB_1406353f0;
                }
            }
            else {
                lVar11 = (*DAT_140c63840)(&PTR_u_RewardRotationModifier_140a6cbd8);
                LAB_1406353f0:
                if ((lVar11 != 0) && (iVar6 = FUN_140639e60(lVar11), iVar6 != 0)) {
                    lVar11 = param_1[4];
                    fVar21 = 0.0;
                    GetSystemTimeAsFileTime(&local_c8);
                    p_Var1 = (_FILETIME *)((longlong)_Var16 + 8 + lVar11);
                    if ((ulonglong)local_c8 <= (ulonglong)*p_Var1 && *p_Var1 != local_c8) {
                        lVar11 = param_1[4];
                        GetSystemTimeAsFileTime(&local_c0);
                        fVar21 = (float)((ulonglong)
                                                 (*(longlong *)((longlong)_Var16 + 8 + lVar11) - (longlong)local_c0) /
                                         10000000);
                    }
                    lVar11 = *(longlong *)(*(longlong *)(lVar19 + 0x20) + 0xa0);
                    if (iVar5 - 1U < *(uint *)(lVar11 + 0x38)) {
                        puVar13 = (undefined8 *)((longlong)(iVar5 + -1) * 0x10 + *(longlong *)(lVar11 + 0x18));
                    }
                    else {
                        dVar20 = (double)iVar5;
                        if (dVar20 == (double)CONCAT44(uVar25,uVar24)) {
                            puVar13 = *(undefined8 **)(lVar11 + 0x20);
                        }
                        else {
                            local_res20._4_4_ = (int)((ulonglong)dVar20 >> 0x20);
                            local_res20._0_4_ = SUB84(dVar20,0);
                            puVar13 = (undefined8 *)
                                    (*(longlong *)(lVar11 + 0x20) +
                                     ((longlong)(ulonglong)(uint)(local_res20._4_4_ + (int)local_res20) %
                                      (longlong)((1 << (*(byte *)(lVar11 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                        }
                        do {
                            if ((*(int *)(puVar13 + 3) == 3) && (dVar20 == (double)puVar13[2]))
                                goto LAB_1406354f4;
                            puVar13 = (undefined8 *)puVar13[4];
                        } while (puVar13 != (undefined8 *)0x0);
                        puVar13 = &DAT_140a12138;
                    }
                    LAB_1406354f4:
                    puVar9 = *(undefined8 **)(lVar19 + 0x10);
                    *puVar9 = *puVar13;
                    *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar13 + 1);
                    *(longlong *)(lVar19 + 0x10) = *(longlong *)(lVar19 + 0x10) + 0x10;
                    lVar11 = FUN_14018f0e0(&local_b8,L"nSecondsRemaining");
                    lVar11 = *(longlong *)(lVar11 + 8);
                    if (lVar11 == 0) {
                        *(undefined4 *)(*(longlong *)(lVar19 + 0x10) + 8) = 0;
                    }
                    else {
                        lVar8 = -1;
                        do {
                            lVar8 = lVar8 + 1;
                        } while (*(char *)(lVar11 + lVar8) != '\0');
                        if (*(ulonglong *)(*(longlong *)(lVar19 + 0x20) + 0x70) <=
                            *(ulonglong *)(*(longlong *)(lVar19 + 0x20) + 0x78)) {
                            FUN_14005e2c0(lVar19);
                        }
                        puVar13 = *(undefined8 **)(lVar19 + 0x10);
                        uVar10 = FUN_140062650(lVar19,lVar11,lVar8);
                        *(undefined4 *)(puVar13 + 1) = 4;
                        *puVar13 = uVar10;
                    }
                    *(longlong *)(lVar19 + 0x10) = *(longlong *)(lVar19 + 0x10) + 0x10;
                    if (CONCAT44(uStack172,local_b0) != 0) {
                        FUN_14018b900(CONCAT44(uStack172,local_b0),0);
                    }
                    pdVar3 = *(double **)(lVar19 + 0x10);
                    *(undefined4 *)(pdVar3 + 1) = 3;
                    *pdVar3 = (double)fVar21;
                    *(longlong *)(lVar19 + 0x10) = *(longlong *)(lVar19 + 0x10) + 0x10;
                    uVar10 = FUN_1400580e0(lVar19,0xfffffffd);
                    FUN_14005ea50(lVar19,uVar10,*(longlong *)(lVar19 + 0x10) + -0x20,
                                  *(longlong *)(lVar19 + 0x10) + -0x10);
                    *(longlong *)(lVar19 + 0x10) =
                            (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar19 + 0x10));
                    puVar13 = *(undefined8 **)(lVar19 + 0x10);
                    iVar6 = *(int *)(param_1[4] + 0x10 + (longlong)_Var16);
                    lVar11 = *(longlong *)(*(longlong *)(lVar19 + 0x20) + 0xa0);
                    if (iVar5 - 1U < *(uint *)(lVar11 + 0x38)) {
                        puVar9 = (undefined8 *)((longlong)(iVar5 + -1) * 0x10 + *(longlong *)(lVar11 + 0x18));
                    }
                    else {
                        dVar20 = (double)iVar5;
                        if (dVar20 == (double)CONCAT44(uVar25,uVar24)) {
                            puVar9 = *(undefined8 **)(lVar11 + 0x20);
                        }
                        else {
                            local_res20._4_4_ = (int)((ulonglong)dVar20 >> 0x20);
                            local_res20._0_4_ = SUB84(dVar20,0);
                            puVar9 = (undefined8 *)
                                    (*(longlong *)(lVar11 + 0x20) +
                                     ((longlong)(ulonglong)(uint)(local_res20._4_4_ + (int)local_res20) %
                                      (longlong)((1 << (*(byte *)(lVar11 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                        }
                        do {
                            if ((*(int *)(puVar9 + 3) == 3) && (dVar20 == (double)puVar9[2])) goto LAB_14063565f;
                            puVar9 = (undefined8 *)puVar9[4];
                        } while (puVar9 != (undefined8 *)0x0);
                        puVar9 = &DAT_140a12138;
                    }
                    LAB_14063565f:
                    *puVar13 = *puVar9;
                    *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar9 + 1);
                    *(longlong *)(lVar19 + 0x10) = *(longlong *)(lVar19 + 0x10) + 0x10;
                    lVar11 = FUN_14018f0e0(&local_b8,L"bGranted");
                    lVar11 = *(longlong *)(lVar11 + 8);
                    if (lVar11 == 0) {
                        *(undefined4 *)(*(longlong *)(lVar19 + 0x10) + 8) = 0;
                    }
                    else {
                        lVar8 = -1;
                        do {
                            lVar8 = lVar8 + 1;
                        } while (*(char *)(lVar11 + lVar8) != '\0');
                        if (*(ulonglong *)(*(longlong *)(lVar19 + 0x20) + 0x70) <=
                            *(ulonglong *)(*(longlong *)(lVar19 + 0x20) + 0x78)) {
                            FUN_14005e2c0(lVar19);
                        }
                        puVar13 = *(undefined8 **)(lVar19 + 0x10);
                        uVar10 = FUN_140062650(lVar19,lVar11,lVar8);
                        *(undefined4 *)(puVar13 + 1) = 4;
                        *puVar13 = uVar10;
                    }
                    *(longlong *)(lVar19 + 0x10) = *(longlong *)(lVar19 + 0x10) + 0x10;
                    if (CONCAT44(uStack172,local_b0) != 0) {
                        FUN_14018b900(CONCAT44(uStack172,local_b0),0);
                    }
                    puVar4 = *(uint **)(lVar19 + 0x10);
                    puVar4[2] = 1;
                    *puVar4 = (uint)(iVar6 != 0);
                    *(longlong *)(lVar19 + 0x10) = *(longlong *)(lVar19 + 0x10) + 0x10;
                    uVar10 = FUN_1400580e0(lVar19,0xfffffffd);
                    FUN_14005ea50(lVar19,uVar10,*(longlong *)(lVar19 + 0x10) + -0x20,
                                  *(longlong *)(lVar19 + 0x10) + -0x10);
                    *(longlong *)(lVar19 + 0x10) =
                            (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar19 + 0x10));
                    FUN_1400fb1d0(param_2);
                    uVar10 = 1;
                    _Var16 = local_d0;
                    _Var18 = local_d8;
                }
            }
            if (-1 < iVar5) {
                plVar12 = (longlong *)FUN_1400580e0(lVar19,0xffffd8f0);
                puVar13 = *(undefined8 **)(*plVar12 + 0x20);
                do {
                    if ((*(int *)(puVar13 + 3) == 3) &&
                        ((double)CONCAT44(uVar25,uVar24) == (double)puVar13[2])) goto LAB_1406357a5;
                    puVar13 = (undefined8 *)puVar13[4];
                } while (puVar13 != (undefined8 *)0x0);
                puVar13 = &DAT_140a12138;
                LAB_1406357a5:
                puVar9 = *(undefined8 **)(lVar19 + 0x10);
                *puVar9 = *puVar13;
                *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar13 + 1);
                *(longlong *)(lVar19 + 0x10) = *(longlong *)(lVar19 + 0x10) + 0x10;
                FUN_140058b30(lVar19,0xffffd8f0);
                pdVar3 = *(double **)(lVar19 + 0x10);
                *(undefined4 *)(pdVar3 + 1) = 3;
                *pdVar3 = (double)iVar5;
                *(longlong *)(lVar19 + 0x10) = *(longlong *)(lVar19 + 0x10) + 0x10;
                FUN_140058b30(lVar19);
            }
            local_d8 = (_FILETIME)((longlong)_Var18 + 1);
            local_d0 = (_FILETIME)((longlong)_Var16 + 0x18);
        } while ((ulonglong)local_d8 < (ulonglong)*(_FILETIME *)(param_1 + 5));
    }
    return uVar10;
}



longlong FUN_140635840(longlong param_1)

{
    undefined *puVar1;
    undefined4 *puVar2;
    longlong lVar3;
    longlong *plVar4;
    int iVar5;
    int iVar6;

    iVar6 = 6;
    iVar5 = 6;
    plVar4 = (longlong *)(param_1 + 8);
    do {
        puVar1 = (undefined *)FUN_14018b280(0x30);
        iVar5 = iVar5 + -1;
        plVar4[1] = 0;
        *plVar4 = (longlong)puVar1;
        *puVar1 = 0;
        *(undefined8 *)(*plVar4 + 8) = 0;
        *(longlong *)(*plVar4 + 0x10) = *plVar4;
        *(longlong *)(*plVar4 + 0x18) = *plVar4;
        plVar4 = plVar4 + 4;
    } while (-1 < iVar5);
    FUN_1400522f0();
    iVar5 = DAT_140c636a8;
    *(undefined8 *)(param_1 + 0x148) = 0;
    *(undefined8 *)(param_1 + 0x140) = 0;
    lVar3 = param_1 + 0x158;
    do {
        iVar6 = iVar6 + -1;
        *(undefined8 *)(lVar3 + -4) = 0;
        *(undefined4 *)(lVar3 + 4) = 1;
        *(int *)(lVar3 + -8) = iVar5;
        *(undefined4 *)(lVar3 + 8) = 1;
        lVar3 = lVar3 + 0x14;
    } while (-1 < iVar6);
    puVar2 = (undefined4 *)(param_1 + 0x158);
    lVar3 = 7;
    do {
        puVar2[-1] = 0;
        *puVar2 = 1000;
        puVar2[1] = 1;
        puVar2[-2] = iVar5 + -1000;
        puVar2[2] = 1000;
        puVar2 = puVar2 + 5;
        lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    return param_1;
}



void FUN_140635950(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    int iVar5;
    longlong lVar6;
    longlong lVar7;
    longlong *plVar8;

    lVar6 = 7;
    lVar7 = param_1;
    do {
        lVar4 = *(longlong *)(*(longlong *)(lVar7 + 8) + 0x10);
        if (lVar4 != *(longlong *)(lVar7 + 8)) {
            do {
                plVar8 = *(longlong **)(lVar4 + 0x28);
                if (plVar8 != (longlong *)0x0) {
                    lVar3 = plVar8[4];
                    if (lVar3 != 0) {
                        (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
                    }
                    lVar3 = plVar8[2];
                    if (lVar3 != 0) {
                        (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
                    }
                    lVar3 = *plVar8;
                    if (lVar3 != 0) {
                        (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
                    }
                    FUN_14018b900(plVar8,0);
                }
                lVar3 = *(longlong *)(lVar4 + 0x18);
                if (lVar3 == 0) {
                    lVar3 = *(longlong *)(lVar4 + 8);
                    if (lVar4 == *(longlong *)(lVar3 + 0x18)) {
                        do {
                            lVar4 = lVar3;
                            lVar3 = *(longlong *)(lVar4 + 8);
                        } while (lVar4 == *(longlong *)(lVar3 + 0x18));
                    }
                    if (*(longlong *)(lVar4 + 0x18) != lVar3) {
                        lVar4 = lVar3;
                    }
                }
                else {
                    for (lVar2 = *(longlong *)(lVar3 + 0x10); lVar4 = lVar3, lVar2 != 0;
                         lVar2 = *(longlong *)(lVar2 + 0x10)) {
                        lVar3 = lVar2;
                    }
                }
            } while (lVar4 != *(longlong *)(lVar7 + 8));
        }
        if (*(longlong *)(lVar7 + 0x10) != 0) {
            lVar4 = *(longlong *)(*(longlong *)(lVar7 + 8) + 8);
            while (lVar4 != 0) {
                FUN_1400083b0(lVar7);
                lVar3 = *(longlong *)(lVar4 + 0x10);
                FUN_14018b900(lVar4,0);
                lVar4 = lVar3;
            }
            *(longlong *)(*(longlong *)(lVar7 + 8) + 0x10) = *(longlong *)(lVar7 + 8);
            *(undefined8 *)(*(longlong *)(lVar7 + 8) + 8) = 0;
            *(longlong *)(*(longlong *)(lVar7 + 8) + 0x18) = *(longlong *)(lVar7 + 8);
            *(undefined8 *)(lVar7 + 0x10) = 0;
        }
        lVar7 = lVar7 + 0x20;
        lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    lVar7 = *(longlong *)(param_1 + 0x140);
    if (lVar7 != 0) {
        (**(code **)(*(longlong *)(lVar7 + -0x10) + 8))(lVar7 + -0x10);
    }
    FUN_14063a490(param_1 + 0x118);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x128),0);
    *(undefined8 *)(param_1 + 0x128) = 0;
    iVar5 = 6;
    plVar8 = (longlong *)(param_1 + 0xe8);
    do {
        plVar1 = plVar8 + -4;
        if (plVar8[-3] != 0) {
            lVar7 = *(longlong *)(*plVar1 + 8);
            while (lVar7 != 0) {
                FUN_1400083b0(plVar8 + -5,*(undefined8 *)(lVar7 + 0x18));
                lVar6 = *(longlong *)(lVar7 + 0x10);
                FUN_14018b900(lVar7,0);
                lVar7 = lVar6;
            }
            *(longlong *)(*plVar1 + 0x10) = *plVar1;
            *(undefined8 *)(*plVar1 + 8) = 0;
            *(longlong *)(*plVar1 + 0x18) = *plVar1;
            plVar8[-3] = 0;
        }
        FUN_14018b900(*plVar1,0);
        iVar5 = iVar5 + -1;
        plVar8 = plVar1;
    } while (-1 < iVar5);
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140635b60(ulonglong param_1)

{
    longlong *plVar1;
    ulonglong **ppuVar2;
    longlong lVar3;
    uint uVar4;
    int iVar5;
    longlong lVar6;
    ulonglong uVar7;
    ulonglong *puVar8;
    ulonglong *puVar9;
    ulonglong *puVar10;
    ulonglong *puVar11;
    ulonglong local_res8;

    lVar3 = DAT_140c65c20;
    puVar11 = (ulonglong *)0x0;
    *(undefined8 *)(DAT_140c65c20 + 0xe0) = 0;
    *(undefined8 *)(lVar3 + 0xe8) = 0;
    *(undefined8 *)(lVar3 + 0xf0) = 0;
    *(undefined8 *)(lVar3 + 0xf8) = 0;
    *(undefined8 *)(lVar3 + 0x100) = 0;
    *(undefined8 *)(lVar3 + 0x108) = 0;
    *(undefined8 *)(lVar3 + 0x110) = 0;
    puVar9 = puVar11;
    local_res8 = param_1;
    do {
        puVar8 = puVar11;
        if (DAT_140c63838 == (code *)0x0) {
            if ((_DAT_140c64634 != 0) || (iVar5 = FUN_14024d920(), iVar5 < 0)) break;
            uVar4 = (**(code **)(*DAT_140c64270 + 0x28))();
        }
        else {
            uVar4 = (*DAT_140c63838)(&PTR_u_WorldZone_140a6e3e8);
        }
        if (uVar4 <= (uint)puVar9) break;
        if (DAT_140c63848 == (code *)0x0) {
            if ((_DAT_140c64634 == 0) && (iVar5 = FUN_14024d920(), -1 < iVar5)) {
                lVar6 = (**(code **)(*DAT_140c64270 + 0x20))();
                goto LAB_140635c56;
            }
        }
        else {
            lVar6 = (*DAT_140c63848)(&PTR_u_WorldZone_140a6e3e8,puVar9,DAT_140c63858);
            LAB_140635c56:
            if ((lVar6 != 0) && (*(uint *)(lVar6 + 0x24) != 0)) {
                local_res8 = local_res8 & 0xffffffff00000000 | (ulonglong)*(uint *)(lVar6 + 0x24);
                uVar7 = (**(code **)(lVar3 + 0x130))(&local_res8);
                for (puVar8 = *(ulonglong **)
                        (*(longlong *)(lVar3 + 0x128) + (uVar7 % *(ulonglong *)(lVar3 + 0x120)) * 8);
                     puVar8 != (ulonglong *)0x0; puVar8 = (ulonglong *)puVar8[1]) {
                    if ((uVar7 == *puVar8) &&
                        (iVar5 = (**(code **)(lVar3 + 0x138))(&local_res8,puVar8 + 2), iVar5 != 0)) {
                        puVar8 = puVar8 + 3;
                        if (puVar8 != (ulonglong *)0x0) goto LAB_140635ccf;
                        break;
                    }
                }
                puVar8 = (ulonglong *)FUN_14063a3e0(lVar3 + 0x118,&local_res8);
                LAB_140635ccf:
                FUN_140003460(puVar8);
            }
        }
        puVar9 = (ulonglong *)(ulonglong)((uint)puVar9 + 1);
    } while( true );
    LAB_140635cf0:
    puVar9 = puVar11;
    if (DAT_140c63838 == (code *)0x0) {
        if ((_DAT_140c64698 != 0) || (iVar5 = FUN_14024aa60(), iVar5 < 0)) goto LAB_140635e22;
        uVar4 = (**(code **)(*DAT_140c63c08 + 0x28))();
    }
    else {
        uVar4 = (*DAT_140c63838)(&PTR_u_World_140a6e180);
    }
    if (uVar4 <= (uint)puVar8) goto LAB_140635e22;
    if (DAT_140c63848 == (code *)0x0) {
        if ((_DAT_140c64698 == 0) && (iVar5 = FUN_14024aa60(), -1 < iVar5)) {
            lVar6 = (**(code **)(*DAT_140c63c08 + 0x20))();
            goto LAB_140635d7f;
        }
    }
    else {
        lVar6 = (*DAT_140c63848)(&PTR_u_World_140a6e180,puVar8,DAT_140c63858);
        LAB_140635d7f:
        if ((lVar6 != 0) && (*(uint *)(lVar6 + 0x58) != 0)) {
            local_res8 = local_res8 & 0xffffffff00000000 | (ulonglong)*(uint *)(lVar6 + 0x58);
            uVar7 = (**(code **)(lVar3 + 0x130))(&local_res8);
            for (puVar9 = *(ulonglong **)
                    (*(longlong *)(lVar3 + 0x128) + (uVar7 % *(ulonglong *)(lVar3 + 0x120)) * 8);
                 puVar9 != (ulonglong *)0x0; puVar9 = (ulonglong *)puVar9[1]) {
                if ((uVar7 == *puVar9) &&
                    (iVar5 = (**(code **)(lVar3 + 0x138))(&local_res8,puVar9 + 2), iVar5 != 0)) {
                    puVar9 = puVar9 + 3;
                    if (puVar9 != (ulonglong *)0x0) goto LAB_140635dfe;
                    break;
                }
            }
            puVar9 = (ulonglong *)FUN_14063a3e0(lVar3 + 0x118,&local_res8);
            LAB_140635dfe:
            FUN_140003460(puVar9 + 2);
        }
    }
    puVar8 = (ulonglong *)(ulonglong)((uint)puVar8 + 1);
    goto LAB_140635cf0;
    LAB_140635e22:
    puVar8 = puVar11;
    if (DAT_140c63838 == (code *)0x0) {
        if ((_DAT_140c65454 != 0) || (iVar5 = FUN_140215ca0(), iVar5 < 0)) goto LAB_1406360c0;
        uVar4 = (**(code **)(*DAT_140c654d8 + 0x28))();
    }
    else {
        uVar4 = (*DAT_140c63838)(&PTR_u_MatchTypeRewardRotationContent_140a6b5f8);
    }
    if (uVar4 <= (uint)puVar9) goto LAB_1406360c0;
    if (DAT_140c63848 == (code *)0x0) {
        if ((_DAT_140c65454 == 0) && (iVar5 = FUN_140215ca0(), -1 < iVar5)) {
            lVar6 = (**(code **)(*DAT_140c654d8 + 0x20))();
            goto LAB_140635eb4;
        }
    }
    else {
        lVar6 = (*DAT_140c63848)(&PTR_u_MatchTypeRewardRotationContent_140a6b5f8,puVar9,DAT_140c63858);
        LAB_140635eb4:
        if (lVar6 != 0) {
            if (*(uint *)(lVar6 + 8) != 0) {
                plVar1 = (longlong *)(lVar3 + 0x118);
                local_res8 = local_res8 & 0xffffffff00000000 | (ulonglong)*(uint *)(lVar6 + 8);
                uVar7 = (**(code **)(lVar3 + 0x130))(&local_res8);
                for (puVar8 = *(ulonglong **)
                        (*(longlong *)(lVar3 + 0x128) + (uVar7 % *(ulonglong *)(lVar3 + 0x120)) * 8);
                     puVar8 != (ulonglong *)0x0; puVar8 = (ulonglong *)puVar8[1]) {
                    if ((uVar7 == *puVar8) && (iVar5 = (**(code **)(lVar3 + 0x138))(&local_res8), iVar5 != 0))
                    {
                        puVar8 = puVar8 + 3;
                        if (puVar8 != (ulonglong *)0x0) goto LAB_140635fa5;
                        break;
                    }
                }
                if (*plVar1 == *(longlong *)(lVar3 + 0x120)) {
                    FUN_1400290d0(plVar1);
                }
                uVar7 = (**(code **)(lVar3 + 0x130))(&local_res8);
                ppuVar2 = (ulonglong **)
                        (*(longlong *)(lVar3 + 0x128) + (uVar7 % *(ulonglong *)(lVar3 + 0x120)) * 8);
                puVar10 = (ulonglong *)FUN_14018b280(0x68);
                puVar8 = puVar11;
                if (puVar10 != (ulonglong *)0x0) {
                    puVar8 = *ppuVar2;
                    *puVar10 = uVar7;
                    puVar10[1] = (ulonglong)puVar8;
                    *(undefined4 *)(puVar10 + 2) = (undefined4)local_res8;
                    puVar10[4] = 0;
                    puVar10[3] = 0;
                    puVar10[6] = 0;
                    puVar10[5] = 0;
                    puVar10[8] = 0;
                    puVar10[7] = 0;
                    puVar10[10] = 0;
                    puVar10[9] = 0;
                    puVar10[0xc] = 0;
                    puVar10[0xb] = 0;
                    puVar8 = puVar10;
                }
                *ppuVar2 = puVar8;
                *plVar1 = *plVar1 + 1;
                puVar8 = *ppuVar2 + 3;
                LAB_140635fa5:
                FUN_140003460(puVar8 + 4);
            }
            if (*(uint *)(lVar6 + 0xc) != 0) {
                plVar1 = (longlong *)(lVar3 + 0x118);
                local_res8 = local_res8 & 0xffffffff00000000 | (ulonglong)*(uint *)(lVar6 + 0xc);
                uVar7 = (**(code **)(lVar3 + 0x130))(&local_res8);
                for (puVar8 = *(ulonglong **)
                        (*(longlong *)(lVar3 + 0x128) + (uVar7 % *(ulonglong *)(lVar3 + 0x120)) * 8);
                     puVar8 != (ulonglong *)0x0; puVar8 = (ulonglong *)puVar8[1]) {
                    if ((uVar7 == *puVar8) && (iVar5 = (**(code **)(lVar3 + 0x138))(&local_res8), iVar5 != 0))
                    {
                        puVar8 = puVar8 + 3;
                        if (puVar8 != (ulonglong *)0x0) goto LAB_140636097;
                        break;
                    }
                }
                if (*plVar1 == *(longlong *)(lVar3 + 0x120)) {
                    FUN_1400290d0(plVar1);
                }
                uVar7 = (**(code **)(lVar3 + 0x130))(&local_res8);
                ppuVar2 = (ulonglong **)
                        (*(longlong *)(lVar3 + 0x128) + (uVar7 % *(ulonglong *)(lVar3 + 0x120)) * 8);
                puVar10 = (ulonglong *)FUN_14018b280(0x68);
                puVar8 = puVar11;
                if (puVar10 != (ulonglong *)0x0) {
                    puVar8 = *ppuVar2;
                    *puVar10 = uVar7;
                    puVar10[1] = (ulonglong)puVar8;
                    *(undefined4 *)(puVar10 + 2) = (undefined4)local_res8;
                    puVar10[4] = 0;
                    puVar10[3] = 0;
                    puVar10[6] = 0;
                    puVar10[5] = 0;
                    puVar10[8] = 0;
                    puVar10[7] = 0;
                    puVar10[10] = 0;
                    puVar10[9] = 0;
                    puVar10[0xc] = 0;
                    puVar10[0xb] = 0;
                    puVar8 = puVar10;
                }
                *ppuVar2 = puVar8;
                *plVar1 = *plVar1 + 1;
                puVar8 = *ppuVar2 + 3;
                LAB_140636097:
                FUN_140003460(puVar8 + 6);
            }
        }
    }
    puVar9 = (ulonglong *)(ulonglong)((uint)puVar9 + 1);
    goto LAB_140635e22;
    LAB_1406360c0:
    if (DAT_140c63838 == (code *)0x0) {
        if ((_DAT_140c63e2c != 0) || (iVar5 = FUN_140226ca0(), iVar5 < 0)) {
            return;
        }
        uVar4 = (**(code **)(*DAT_140c63be0 + 0x28))();
    }
    else {
        uVar4 = (*DAT_140c63838)(&PTR_u_PublicEvent_140a6c3f8);
    }
    if (uVar4 <= (uint)puVar8) {
        return;
    }
    if (DAT_140c63848 == (code *)0x0) {
        if ((_DAT_140c63e2c == 0) && (iVar5 = FUN_140226ca0(), -1 < iVar5)) {
            lVar6 = (**(code **)(*DAT_140c63be0 + 0x20))();
            goto LAB_140636152;
        }
    }
    else {
        lVar6 = (*DAT_140c63848)(&PTR_u_PublicEvent_140a6c3f8,puVar8,DAT_140c63858);
        LAB_140636152:
        if ((lVar6 != 0) && (*(uint *)(lVar6 + 0x30) != 0)) {
            plVar1 = (longlong *)(lVar3 + 0x118);
            local_res8 = local_res8 & 0xffffffff00000000 | (ulonglong)*(uint *)(lVar6 + 0x30);
            uVar7 = (**(code **)(lVar3 + 0x130))(&local_res8);
            for (puVar9 = *(ulonglong **)
                    (*(longlong *)(lVar3 + 0x128) + (uVar7 % *(ulonglong *)(lVar3 + 0x120)) * 8);
                 puVar9 != (ulonglong *)0x0; puVar9 = (ulonglong *)puVar9[1]) {
                if ((uVar7 == *puVar9) && (iVar5 = (**(code **)(lVar3 + 0x138))(&local_res8), iVar5 != 0)) {
                    puVar9 = puVar9 + 3;
                    if (puVar9 != (ulonglong *)0x0) goto LAB_140636243;
                    break;
                }
            }
            if (*plVar1 == *(longlong *)(lVar3 + 0x120)) {
                FUN_1400290d0(plVar1);
            }
            uVar7 = (**(code **)(lVar3 + 0x130))(&local_res8);
            ppuVar2 = (ulonglong **)
                    (*(longlong *)(lVar3 + 0x128) + (uVar7 % *(ulonglong *)(lVar3 + 0x120)) * 8);
            puVar10 = (ulonglong *)FUN_14018b280(0x68);
            puVar9 = puVar11;
            if (puVar10 != (ulonglong *)0x0) {
                puVar9 = *ppuVar2;
                *puVar10 = uVar7;
                puVar10[1] = (ulonglong)puVar9;
                *(undefined4 *)(puVar10 + 2) = (undefined4)local_res8;
                puVar10[4] = 0;
                puVar10[3] = 0;
                puVar10[6] = 0;
                puVar10[5] = 0;
                puVar10[8] = 0;
                puVar10[7] = 0;
                puVar10[10] = 0;
                puVar10[9] = 0;
                puVar10[0xc] = 0;
                puVar10[0xb] = 0;
                puVar9 = puVar10;
            }
            *ppuVar2 = puVar9;
            *plVar1 = *plVar1 + 1;
            puVar9 = *ppuVar2 + 3;
            LAB_140636243:
            FUN_140003460(puVar9 + 8);
        }
    }
    puVar8 = (ulonglong *)(ulonglong)((uint)puVar8 + 1);
    goto LAB_1406360c0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140636280(undefined8 param_1,uint *param_2)

{
    float *pfVar1;
    _FILETIME *p_Var2;
    _FILETIME _Var3;
    int iVar4;
    undefined4 uVar5;
    longlong lVar6;
    longlong *plVar7;
    longlong *plVar8;
    longlong *plVar9;
    longlong **pplVar10;
    longlong lVar11;
    int *piVar12;
    longlong lVar13;
    uint uVar14;
    longlong *plVar15;
    ulonglong uVar16;
    longlong lVar17;
    ulonglong uVar18;
    undefined8 uVar19;
    undefined8 *puVar20;
    longlong lVar21;
    undefined auVar22 [16];
    float fVar23;
    float fVar24;
    float fVar25;
    float fVar26;
    float fVar27;
    undefined auStack264 [32];
    longlong local_e8;
    uint local_d8;
    longlong *local_d0;
    undefined4 local_c8;
    int local_c4;
    longlong local_c0;
    int local_b8;
    longlong *local_b0;
    uint *local_a8;
    _FILETIME local_a0;
    _FILETIME local_98;
    undefined8 local_90;
    undefined8 local_88;
    undefined8 local_80;
    undefined4 local_78;
    ulonglong local_70;

    lVar17 = DAT_140c65c20;
    local_70 = DAT_140c0f7b0 ^ (ulonglong)auStack264;
    local_90 = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_a8 = param_2;
    GetSystemTimeAsFileTime(&local_a0);
    uVar18 = 0;
    local_d8 = 0;
    if (*param_2 != 0) {
        fVar25 = 9.223372e+18;
        fVar26 = 1.844674e+19;
        fVar27 = 8.64e+11;
        do {
            lVar13 = *(longlong *)(param_2 + 2);
            lVar21 = lVar13 + uVar18 * 0x14;
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c64948 == 0) && (iVar4 = FUN_14022f8e0(), -1 < iVar4)) {
                    lVar6 = (**(code **)(*DAT_140c644d0 + 0x18))();
                    goto LAB_140636389;
                }
            }
            else {
                lVar6 = (*DAT_140c63840)(&PTR_u_RewardRotationContent_140a6cb30,
                                         *(undefined4 *)(lVar13 + 4 + uVar18 * 0x14),DAT_140c63858);
                LAB_140636389:
                if (lVar6 != 0) {
                    plVar9 = *(longlong **)((longlong)*(int *)(lVar6 + 4) * 0x20 + 8 + lVar17);
                    plVar15 = plVar9;
                    if ((longlong *)plVar9[1] != (longlong *)0x0) {
                        plVar7 = (longlong *)plVar9[1];
                        do {
                            if (*(uint *)(plVar7 + 4) < *(uint *)(lVar21 + 4)) {
                                plVar8 = (longlong *)plVar7[3];
                            }
                            else {
                                plVar8 = (longlong *)plVar7[2];
                                plVar15 = plVar7;
                            }
                            plVar7 = plVar8;
                        } while (plVar8 != (longlong *)0x0);
                    }
                    if ((plVar15 == plVar9) || (*(uint *)(lVar21 + 4) < *(uint *)(plVar15 + 4))) {
                        local_b0 = plVar9;
                        pplVar10 = &local_b0;
                    }
                    else {
                        local_d0 = plVar15;
                        pplVar10 = &local_d0;
                    }
                    if ((*pplVar10 == plVar9) ||
                        (plVar9 = (longlong *)(*pplVar10)[5], plVar9 == (longlong *)0x0)) {
                        plVar9 = (longlong *)FUN_14018b280(0x30);
                        if (plVar9 != (longlong *)0x0) {
                            plVar9[1] = 0;
                            *plVar9 = 0;
                            plVar9[3] = 0;
                            plVar9[2] = 0;
                            plVar9[5] = 0;
                            plVar9[4] = 0;
                        }
                        pplVar10 = (longlong **)FUN_140055be0((longlong)*(int *)(lVar6 + 4) * 0x20 + lVar17);
                        *pplVar10 = plVar9;
                        if (plVar9 == (longlong *)0x0) goto LAB_14063664e;
                    }
                    fVar24 = *(float *)(lVar13 + 8 + uVar18 * 0x14);
                    GetSystemTimeAsFileTime(&local_98);
                    lVar11 = 0;
                    fVar23 = (fVar24 - (float)(int)fVar24) * fVar27;
                    if ((fVar25 <= fVar23) && (fVar23 = fVar23 - fVar25, fVar23 < fVar25)) {
                        lVar11 = -0x8000000000000000;
                    }
                    if (fVar25 <= fVar24) {
                        fVar24 = fVar24 - fVar25;
                    }
                    lVar11 = (longlong)fVar24 * 864000000000 + (longlong)fVar23 + lVar11 + (longlong)local_98;
                    _Var3 = *(_FILETIME *)(lVar17 + 0xe0 + (longlong)*(int *)(lVar6 + 4) * 8);
                    if (_Var3 == (_FILETIME)0x0) {
                        LAB_1406364f5:
                        *(longlong *)(lVar17 + 0xe0 + (longlong)*(int *)(lVar6 + 4) * 8) = lVar11;
                    }
                    else {
                        auVar22 = ZEXT416((uint)(float)(longlong)_Var3) & (undefined  [16])0xffffffffffffffff;
                        if ((longlong)_Var3 < 0) {
                            auVar22 = CONCAT124(SUB1612(auVar22 >> 0x20,0),SUB164(auVar22,0) + fVar26);
                        }
                        pfVar1 = (float *)(lVar13 + 8 + uVar18 * 0x14);
                        if ((*pfVar1 <= SUB164(auVar22,0) && SUB164(auVar22,0) != *pfVar1) ||
                            ((ulonglong)_Var3 <= (ulonglong)local_a0)) goto LAB_1406364f5;
                    }
                    uVar14 = (uint)*(byte *)(lVar13 + 0xc + uVar18 * 0x14);
                    if (uVar14 == 1) {
                        local_c4 = *(int *)(lVar13 + uVar18 * 0x14);
                        local_c0 = lVar11;
                        uVar16 = 0;
                        local_c8 = *(undefined4 *)(lVar13 + 0x10 + uVar18 * 0x14);
                        local_b8 = 0;
                        if (plVar9[1] != 0) {
                            piVar12 = (int *)(*plVar9 + 4);
                            do {
                                if (*piVar12 == local_c4) goto LAB_14063664e;
                                uVar16 = uVar16 + 1;
                                piVar12 = piVar12 + 6;
                            } while (uVar16 < (ulonglong)plVar9[1]);
                        }
                        lVar11 = FUN_14063a590(plVar9,&local_c8);
                        uVar19 = 1;
                        lVar11 = lVar11 * 3;
                        lVar13 = *plVar9;
                    }
                    else if (uVar14 == 2) {
                        local_c4 = *(int *)(lVar13 + uVar18 * 0x14);
                        local_c0 = lVar11;
                        uVar16 = 0;
                        local_c8 = *(undefined4 *)(lVar13 + 0x10 + uVar18 * 0x14);
                        local_b8 = 0;
                        if (plVar9[3] != 0) {
                            piVar12 = (int *)(plVar9[2] + 4);
                            do {
                                if (*piVar12 == local_c4) goto LAB_14063664e;
                                uVar16 = uVar16 + 1;
                                piVar12 = piVar12 + 6;
                            } while (uVar16 < (ulonglong)plVar9[3]);
                        }
                        lVar11 = FUN_14063a590(plVar9 + 2,&local_c8);
                        uVar19 = 2;
                        lVar11 = lVar11 * 3;
                        lVar13 = plVar9[2];
                    }
                    else {
                        if (uVar14 - 3 != 0) goto LAB_14063664e;
                        local_c4 = *(int *)(lVar13 + uVar18 * 0x14);
                        local_c0 = lVar11;
                        local_b8 = uVar14 - 3;
                        uVar16 = 0;
                        local_c8 = *(undefined4 *)(lVar13 + 0x10 + uVar18 * 0x14);
                        if (plVar9[5] != 0) {
                            piVar12 = (int *)(plVar9[4] + 4);
                            do {
                                if (*piVar12 == local_c4) goto LAB_14063664e;
                                uVar16 = uVar16 + 1;
                                piVar12 = piVar12 + 6;
                            } while (uVar16 < (ulonglong)plVar9[5]);
                        }
                        lVar11 = FUN_14063a590(plVar9 + 4,&local_c8);
                        uVar19 = 3;
                        lVar11 = lVar11 * 3;
                        lVar13 = plVar9[4];
                    }
                    iVar4 = *(int *)(lVar6 + 4);
                    uVar5 = *(undefined4 *)(lVar21 + 4);
                    lVar13 = lVar13 + lVar11 * 8;
                    *(undefined4 *)((longlong)&local_90 + (longlong)iVar4 * 4) = 1;
                    local_e8 = lVar13;
                    uVar5 = FUN_14063aa90(lVar17,(longlong)iVar4,uVar5,uVar19);
                    *(undefined4 *)(lVar13 + 0x10) = uVar5;
                }
            }
            LAB_14063664e:
            local_d8 = local_d8 + 1;
            uVar18 = (ulonglong)local_d8;
            param_2 = local_a8;
        } while (local_d8 < *local_a8);
    }
    local_d0 = (longlong *)(lVar17 + 8);
    puVar20 = &local_90;
    local_d8 = 0;
    do {
        lVar17 = *(longlong *)(*local_d0 + 0x10);
        if (lVar17 != *local_d0) {
            do {
                plVar9 = *(longlong **)(lVar17 + 0x28);
                uVar18 = 0;
                if (plVar9[1] != 0) {
                    lVar21 = 0;
                    do {
                        p_Var2 = (_FILETIME *)(lVar21 + 8 + *plVar9);
                        if ((ulonglong)*p_Var2 < (ulonglong)local_a0 || *p_Var2 == local_a0) {
                            FUN_14063a640(plVar9,uVar18);
                            *(int *)puVar20 = 1;
                        }
                        else {
                            uVar18 = uVar18 + 1;
                            lVar21 = lVar21 + 0x18;
                        }
                    } while (uVar18 < (ulonglong)plVar9[1]);
                }
                uVar18 = 0;
                if (plVar9[3] != 0) {
                    lVar21 = 0;
                    do {
                        p_Var2 = (_FILETIME *)(lVar21 + 8 + plVar9[2]);
                        if ((ulonglong)*p_Var2 < (ulonglong)local_a0 || *p_Var2 == local_a0) {
                            FUN_14063a640(plVar9 + 2,uVar18);
                            *(int *)puVar20 = 1;
                        }
                        else {
                            uVar18 = uVar18 + 1;
                            lVar21 = lVar21 + 0x18;
                        }
                    } while (uVar18 < (ulonglong)plVar9[3]);
                }
                uVar18 = 0;
                if (plVar9[5] != 0) {
                    lVar21 = 0;
                    do {
                        p_Var2 = (_FILETIME *)(lVar21 + 8 + plVar9[4]);
                        if ((ulonglong)*p_Var2 < (ulonglong)local_a0 || *p_Var2 == local_a0) {
                            FUN_14063a640(plVar9 + 4,uVar18);
                            *(int *)puVar20 = 1;
                        }
                        else {
                            uVar18 = uVar18 + 1;
                            lVar21 = lVar21 + 0x18;
                        }
                    } while (uVar18 < (ulonglong)plVar9[5]);
                }
                lVar21 = *(longlong *)(lVar17 + 0x18);
                if (lVar21 == 0) {
                    lVar21 = *(longlong *)(lVar17 + 8);
                    if (lVar17 == *(longlong *)(lVar21 + 0x18)) {
                        do {
                            lVar17 = lVar21;
                            lVar21 = *(longlong *)(lVar17 + 8);
                        } while (lVar17 == *(longlong *)(lVar21 + 0x18));
                    }
                    if (*(longlong *)(lVar17 + 0x18) != lVar21) {
                        lVar17 = lVar21;
                    }
                }
                else {
                    for (lVar13 = *(longlong *)(lVar21 + 0x10); lVar17 = lVar21, lVar13 != 0;
                         lVar13 = *(longlong *)(lVar13 + 0x10)) {
                        lVar21 = lVar13;
                    }
                }
            } while (lVar17 != *local_d0);
        }
        plVar9 = local_d0;
        uVar14 = local_d8;
        if (*(int *)puVar20 != 0) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"RewardRotationsUpdated",&DAT_1409efaec,
                          local_d8);
        }
        local_d8 = uVar14 + 1;
        local_d0 = plVar9 + 4;
        puVar20 = (undefined8 *)((longlong)puVar20 + 4);
    } while (local_d8 < 7);
    FUN_1407db4f0(local_70 ^ (ulonglong)auStack264);
    return;
}



undefined8 FUN_140636840(undefined8 param_1,undefined4 *param_2)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;

    lVar2 = DAT_140c65c20;
    *(undefined8 *)(DAT_140c65c20 + 0x148) = 0;
    plVar1 = (longlong *)(lVar2 + 0x140);
    FUN_14063a760(plVar1,*(undefined8 *)(param_2 + 2),*param_2);
    FUN_14063a8f0(plVar1);
    lVar3 = *plVar1;
    if (lVar3 != lVar3 + *(longlong *)(lVar2 + 0x148) * 0x14) {
        do {
            FUN_14063a0e0(lVar2,lVar3);
            lVar3 = lVar3 + 0x14;
        } while (lVar3 != *plVar1 + *(longlong *)(lVar2 + 0x148) * 0x14);
    }
    return 0;
}



undefined8 FUN_1406368d0(undefined8 param_1,int *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    ulonglong uVar7;

    lVar3 = DAT_140c65c20;
    uVar6 = 0;
    if (*(ulonglong *)(DAT_140c65c20 + 0x148) != 0) {
        lVar2 = *(longlong *)(DAT_140c65c20 + 0x140);
        uVar7 = *(ulonglong *)(DAT_140c65c20 + 0x148);
        do {
            uVar5 = (uVar7 - uVar6 >> 1) + uVar6;
            iVar4 = *(int *)(lVar2 + uVar5 * 0x14);
            lVar1 = lVar2 + uVar5 * 0x14;
            if (*param_2 == iVar4) {
                if (param_2[1] == *(int *)(lVar1 + 4)) {
                    if (*(byte *)(param_2 + 3) == *(byte *)(lVar1 + 0xc)) {
                        iVar4 = param_2[2] - *(int *)(lVar1 + 8);
                    }
                    else {
                        iVar4 = (uint)*(byte *)(param_2 + 3) - (uint)*(byte *)(lVar1 + 0xc);
                    }
                }
                else {
                    iVar4 = param_2[1] - *(int *)(lVar1 + 4);
                }
            }
            else {
                iVar4 = *param_2 - iVar4;
            }
            if (-1 < iVar4) {
                if (iVar4 < 1) {
                    *(int *)(lVar2 + 0x10 + uVar5 * 0x14) = param_2[4];
                    goto LAB_14063698b;
                }
                uVar6 = uVar5 + 1;
                uVar5 = uVar7;
            }
            uVar7 = uVar5;
        } while (uVar6 < uVar5);
    }
    FUN_14063a810(DAT_140c65c20 + 0x140,uVar6,param_2);
    LAB_14063698b:
    FUN_14063a0e0(lVar3,param_2);
    return 0;
}



undefined8 FUN_1406369c0(undefined8 param_1,int *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    ulonglong uVar7;

    lVar3 = DAT_140c65c20;
    uVar6 = 0;
    if (*(ulonglong *)(DAT_140c65c20 + 0x148) == 0) {
        return 0;
    }
    lVar2 = *(longlong *)(DAT_140c65c20 + 0x140);
    uVar7 = *(ulonglong *)(DAT_140c65c20 + 0x148);
    do {
        uVar5 = (uVar7 - uVar6 >> 1) + uVar6;
        iVar4 = *(int *)(lVar2 + uVar5 * 0x14);
        lVar1 = lVar2 + uVar5 * 0x14;
        if (*param_2 == iVar4) {
            if (param_2[1] == *(int *)(lVar1 + 4)) {
                if (*(byte *)(param_2 + 3) == *(byte *)(lVar1 + 0xc)) {
                    iVar4 = param_2[2] - *(int *)(lVar1 + 8);
                }
                else {
                    iVar4 = (uint)*(byte *)(param_2 + 3) - (uint)*(byte *)(lVar1 + 0xc);
                }
            }
            else {
                iVar4 = param_2[1] - *(int *)(lVar1 + 4);
            }
        }
        else {
            iVar4 = *param_2 - iVar4;
        }
        if (-1 < iVar4) {
            if (iVar4 < 1) {
                *(int *)(lVar2 + 0x10 + uVar5 * 0x14) = param_2[4];
                FUN_14063a0e0(lVar3,uVar5 * 0x14 + *(longlong *)(lVar3 + 0x140));
                return 0;
            }
            uVar6 = uVar5 + 1;
            uVar5 = uVar7;
        }
        uVar7 = uVar5;
    } while (uVar6 < uVar5);
    return 0;
}



undefined8 FUN_140636ac0(undefined8 param_1,int *param_2)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;

    lVar2 = DAT_140c65c20;
    uVar5 = 0;
    if (*(ulonglong *)(DAT_140c65c20 + 0x148) != 0) {
        uVar6 = *(ulonglong *)(DAT_140c65c20 + 0x148);
        do {
            uVar4 = (uVar6 - uVar5 >> 1) + uVar5;
            iVar3 = *(int *)(*(longlong *)(DAT_140c65c20 + 0x140) + uVar4 * 0x14);
            lVar1 = *(longlong *)(DAT_140c65c20 + 0x140) + uVar4 * 0x14;
            if (*param_2 == iVar3) {
                if (param_2[1] == *(int *)(lVar1 + 4)) {
                    if (*(byte *)(param_2 + 3) == *(byte *)(lVar1 + 0xc)) {
                        iVar3 = param_2[2] - *(int *)(lVar1 + 8);
                    }
                    else {
                        iVar3 = (uint)*(byte *)(param_2 + 3) - (uint)*(byte *)(lVar1 + 0xc);
                    }
                }
                else {
                    iVar3 = param_2[1] - *(int *)(lVar1 + 4);
                }
            }
            else {
                iVar3 = *param_2 - iVar3;
            }
            if (-1 < iVar3) {
                if (iVar3 < 1) {
                    FUN_14063abc0(DAT_140c65c20 + 0x140);
                    break;
                }
                uVar5 = uVar4 + 1;
                uVar4 = uVar6;
            }
            uVar6 = uVar4;
        } while (uVar5 < uVar4);
    }
    FUN_14063a270(lVar2,param_2);
    return 0;
}



void FUN_140636ba0(longlong param_1,int param_2)

{
    int iVar1;
    uint uVar2;
    uint uVar3;
    longlong lVar4;
    int local_res10 [6];

    if (param_2 < 7) {
        lVar4 = (longlong)param_2;
        iVar1 = *(int *)(param_1 + 0x150 + lVar4 * 0x14);
        uVar2 = *(uint *)(param_1 + 0x160 + lVar4 * 0x14);
        uVar3 = DAT_140c636a8 - iVar1;
        if (uVar3 < uVar2) {
            iVar1 = *(int *)(param_1 + 0x154 + lVar4 * 0x14);
            if (iVar1 == *(int *)(param_1 + 0x15c + lVar4 * 0x14)) {
                return;
            }
            *(int *)(param_1 + 0x154 + lVar4 * 0x14) = iVar1 + 1;
        }
        else if (uVar3 < *(uint *)(param_1 + 0x158 + lVar4 * 0x14)) {
            *(uint *)(param_1 + 0x150 + lVar4 * 0x14) = uVar2 + iVar1;
        }
        else {
            *(int *)(param_1 + 0x150 + lVar4 * 0x14) = DAT_140c636a8;
            *(undefined4 *)(param_1 + 0x154 + lVar4 * 0x14) = 1;
        }
        local_res10[0] = param_2;
        FUN_1403f4740(DAT_140c65898,0x7cc,local_res10);
    }
    return;
}



undefined8 FUN_140636c40(_FILETIME param_1,uint param_2)

{
    _FILETIME _Var1;
    _FILETIME _Var2;
    longlong lVar3;
    longlong lVar4;
    _FILETIME local_res8;

    lVar3 = DAT_140c65c20;
    local_res8 = param_1;
    lVar4 = FUN_14022fb40(param_2);
    if (lVar4 != 0) {
        GetSystemTimeAsFileTime(&local_res8);
        if ((ulonglong)*(_FILETIME *)(lVar3 + 0xe0 + (longlong)*(int *)(lVar4 + 4) * 8) <
            (ulonglong)local_res8) {
            FUN_140636ba0(lVar3);
        }
        _Var1 = *(_FILETIME *)((longlong)*(int *)(lVar4 + 4) * 0x20 + 8 + lVar3);
        local_res8 = _Var1;
        _Var2 = *(_FILETIME *)((longlong)_Var1 + 8);
        while (_Var2 != (_FILETIME)0x0) {
            if (*(uint *)((longlong)_Var2 + 0x20) < param_2) {
                _Var2 = *(_FILETIME *)((longlong)_Var2 + 0x18);
            }
            else {
                local_res8 = _Var2;
                _Var2 = *(_FILETIME *)((longlong)_Var2 + 0x10);
            }
        }
        if ((local_res8 == _Var1) || (param_2 < *(uint *)((longlong)local_res8 + 0x20))) {
            local_res8 = _Var1;
        }
        if (local_res8 != _Var1) {
            return *(undefined8 *)((longlong)local_res8 + 0x28);
        }
    }
    return 0;
}



// WARNING: Removing unreachable block (ram,0x000140637930)
// WARNING: Removing unreachable block (ram,0x0001406372ba)
// WARNING: Removing unreachable block (ram,0x0001406379d7)
// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140636d10(undefined8 param_1,longlong param_2)

{
    ulonglong *puVar1;
    double *pdVar2;
    double dVar3;
    int iVar4;
    int iVar5;
    undefined4 uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    longlong lVar9;
    longlong *plVar10;
    longlong lVar11;
    undefined8 uVar12;
    longlong lVar13;
    undefined8 *puVar14;
    undefined8 *puVar15;
    uint uVar16;
    uint uVar17;
    ulonglong *puVar18;
    longlong lVar19;
    double dVar20;
    undefined4 uVar21;
    undefined4 uVar22;
    int local_res18;
    int iStackX28;
    undefined4 local_res20 [2];
    undefined **local_128;
    int local_120;
    longlong local_118;
    undefined4 local_110;
    undefined8 local_108;
    longlong local_100;
    undefined8 local_f8;
    undefined **local_f0;
    int local_e8;
    undefined4 uStack228;
    longlong local_e0;
    undefined4 local_d8;
    ulonglong *local_d0;
    undefined4 local_c8 [2];
    longlong local_c0;
    ulonglong local_b8;
    undefined **local_b0;
    undefined4 local_a8;
    longlong local_a0;
    undefined4 local_98;
    longlong local_90;
    longlong local_88;
    longlong local_80;
    undefined local_78 [8];
    longlong local_70;

    lVar11 = DAT_140c65c20;
    local_100 = DAT_140c65c20;
    uVar16 = 0;
    do {
        FUN_140636ba0(DAT_140c65c20);
        uVar16 = uVar16 + 1;
    } while (uVar16 < 7);
    uVar16 = 0;
    uVar21 = 0;
    uVar22 = 0;
    local_90 = 0;
    while( true ) {
        local_80 = local_90 * 0x20;
        lVar9 = *(longlong *)(local_80 + 8 + lVar11);
        local_c0 = *(longlong *)(lVar9 + 0x10);
        if (local_c0 != lVar9) break;
        LAB_140638a78:
        uVar16 = uVar16 + 1;
        local_90 = local_90 + 1;
        if (6 < uVar16) {
            return;
        }
    }
    LAB_140636da0:
    lVar9 = local_c0;
    uVar7 = (**(code **)(lVar11 + 0x130))(local_c0 + 0x20);
    puVar1 = *(ulonglong **)
            (*(longlong *)(lVar11 + 0x128) + (uVar7 % *(ulonglong *)(lVar11 + 0x120)) * 8);
    joined_r0x000140636dc8:
    if (puVar1 != (ulonglong *)0x0) {
        if ((uVar7 != *puVar1) || (iVar4 = (**(code **)(lVar11 + 0x138))(), iVar4 == 0))
            goto LAB_140636de7;
        puVar18 = puVar1 + 3;
        lVar11 = local_100;
        local_d0 = puVar18;
        if (puVar18 != (ulonglong *)0x0) {
            switch(uVar16) {
                case 1:
                case 3:
                case 6:
                    local_108 = 0.0;
                    if (puVar1[6] == 0) goto LAB_14063807f;
                    goto LAB_140637a81;
                case 2:
                    local_b8 = 0;
                    if (puVar1[4] != 0) goto LAB_140636e40;
                    break;
                case 4:
                    uVar7 = 0;
                    if (puVar1[0xc] != 0) {
                        do {
                            lVar11 = FUN_140226f00(*(undefined4 *)(puVar1[0xb] + uVar7 * 4));
                            if (lVar11 != 0) {
                                lVar11 = *(longlong *)(param_2 + 0x10);
                                local_128 = &PTR_FUN_140b569f0;
                                local_110 = 1;
                                local_118 = lVar11;
                                FUN_140058900(lVar11);
                                local_120 = FUN_1400578c0(lVar11);
                                iVar4 = FUN_140634870(*(undefined8 *)(lVar9 + 0x28));
                                if (iVar4 != 0) {
                                    lVar11 = *(longlong *)(param_2 + 0x10);
                                    local_b0 = &PTR_FUN_140b569f0;
                                    local_98 = 1;
                                    local_a0 = lVar11;
                                    FUN_140058900(lVar11);
                                    uVar6 = FUN_1400578c0(lVar11);
                                    local_a8 = uVar6;
                                    puVar14 = (undefined8 *)
                                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),uVar6);
                                    puVar15 = *(undefined8 **)(lVar11 + 0x10);
                                    *puVar15 = *puVar14;
                                    *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar14 + 1);
                                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                                    FUN_1400f06f0(lVar11,puVar15,L"nContentType");
                                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
                                    puVar15 = *(undefined8 **)(lVar11 + 0x10);
                                    puVar14 = (undefined8 *)
                                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),uVar6);
                                    *puVar15 = *puVar14;
                                    *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar14 + 1);
                                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                                    FUN_1400f06f0(lVar11);
                                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
                                    FUN_14063ab20(&local_b0,L"peWorldBoss");
                                    FUN_1400fb2a0(&local_b0);
                                    FUN_1400fb1d0(param_2);
                                    FUN_1400579e0(lVar11);
                                }
                                if (local_118 != 0) {
                                    FUN_1400579e0();
                                }
                            }
                            uVar7 = uVar7 + 1;
                            lVar11 = local_100;
                        } while (uVar7 < puVar1[0xc]);
                    }
                    break;
                case 5:
                    uVar7 = 0;
                    if (puVar1[6] != 0) {
                        do {
                            lVar11 = FUN_14024acc0(*(undefined4 *)(puVar1[5] + uVar7 * 4));
                            if (lVar11 != 0) {
                                lVar11 = *(longlong *)(param_2 + 0x10);
                                local_128 = &PTR_FUN_140b569f0;
                                local_110 = 1;
                                local_118 = lVar11;
                                FUN_140058900(lVar11);
                                local_120 = FUN_1400578c0(lVar11);
                                iVar4 = FUN_140634870(*(undefined8 *)(lVar9 + 0x28));
                                if (iVar4 != 0) {
                                    FUN_1400fa0f0(&local_f0,*(undefined8 *)(param_2 + 0x10),1);
                                    lVar11 = local_e0;
                                    iVar4 = local_e8;
                                    puVar14 = (undefined8 *)
                                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_e0 + 0x20) + 0xa0),
                                                          local_e8);
                                    puVar15 = *(undefined8 **)(lVar11 + 0x10);
                                    *puVar15 = *puVar14;
                                    *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar14 + 1);
                                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                                    FUN_1400f06f0(lVar11,puVar15,L"nContentType",uVar16);
                                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
                                    puVar15 = *(undefined8 **)(lVar11 + 0x10);
                                    puVar14 = (undefined8 *)
                                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),iVar4);
                                    *puVar15 = *puVar14;
                                    *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar14 + 1);
                                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                                    FUN_1400f06f0(lVar11);
                                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
                                    FUN_14034bdd0();
                                    puVar14 = (undefined8 *)
                                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),iVar4);
                                    puVar15 = *(undefined8 **)(lVar11 + 0x10);
                                    *puVar15 = *puVar14;
                                    *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar14 + 1);
                                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                                    FUN_1400f0870(lVar11);
                                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
                                    FUN_1400fb2a0(&local_f0);
                                    FUN_1400fb1d0(param_2);
                                    FUN_1400579e0(lVar11);
                                }
                                if (local_118 != 0) {
                                    FUN_1400579e0();
                                }
                            }
                            uVar7 = uVar7 + 1;
                        } while (uVar7 < puVar1[6]);
                    }
                    uVar7 = 0;
                    lVar11 = local_100;
                    if (puVar1[8] != 0) {
                        do {
                            FUN_1400fa0f0(&local_b0,*(undefined8 *)(param_2 + 0x10));
                            iVar4 = FUN_140634870(*(undefined8 *)(lVar9 + 0x28));
                            if (iVar4 != 0) {
                                FUN_1400fa0f0(&local_f0,*(undefined8 *)(param_2 + 0x10),1);
                                lVar11 = local_e0;
                                iVar4 = local_e8;
                                puVar14 = (undefined8 *)
                                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_e0 + 0x20) + 0xa0),
                                                      local_e8);
                                puVar15 = *(undefined8 **)(lVar11 + 0x10);
                                *puVar15 = *puVar14;
                                *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar14 + 1);
                                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                                FUN_1400f06f0(lVar11,puVar15,L"nContentType");
                                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
                                puVar15 = *(undefined8 **)(lVar11 + 0x10);
                                puVar14 = (undefined8 *)
                                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),iVar4);
                                *puVar15 = *puVar14;
                                *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar14 + 1);
                                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                                FUN_1400f06f0(lVar11);
                                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
                                puVar15 = *(undefined8 **)(lVar11 + 0x10);
                                puVar14 = (undefined8 *)
                                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),iVar4);
                                *puVar15 = *puVar14;
                                *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar14 + 1);
                                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                                FUN_1400f06f0(lVar11);
                                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
                                puVar15 = *(undefined8 **)(lVar11 + 0x10);
                                puVar14 = (undefined8 *)
                                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),iVar4);
                                *puVar15 = *puVar14;
                                *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar14 + 1);
                                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                                FUN_1400f0630(lVar11);
                                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
                                FUN_1400fb2a0(&local_f0);
                                FUN_1400fb1d0(param_2);
                                FUN_1400579e0(lVar11);
                            }
                            if (local_a0 != 0) {
                                FUN_1400579e0();
                            }
                            uVar7 = uVar7 + 1;
                            lVar11 = local_100;
                        } while (uVar7 < puVar1[8]);
                    }
            }
        }
    }
    goto switchD_140636e25_caseD_6;
    LAB_140636de7:
    puVar1 = (ulonglong *)puVar1[1];
    goto joined_r0x000140636dc8;
    LAB_140636e40:
    do {
        if (DAT_140c63840 == (code *)0x0) {
            if ((_DAT_140c64634 == 0) && (iVar4 = FUN_14024d920(), -1 < iVar4)) {
                local_108 = (double)(**(code **)(*DAT_140c64270 + 0x18))();
                goto LAB_140636e90;
            }
        }
        else {
            local_108 = (double)(*DAT_140c63840)();
            LAB_140636e90:
            if (local_108 != 0.0) {
                iVar4 = 0;
                local_88 = DAT_140c65930;
                local_f8 = *(double *)((longlong)*(double *)(DAT_140c65930 + 0x10) + 0x10);
                if (local_f8 != *(double *)(DAT_140c65930 + 0x10)) {
                    iVar5 = 0;
                    iVar4 = 0;
                    do {
                        uVar7 = local_b8;
                        lVar11 = *(longlong *)((longlong)local_f8 + 0x28);
                        lVar9 = *(longlong *)(lVar11 + 0x10);
                        lVar13 = *(longlong *)(lVar9 + 0x10);
                        if (lVar13 != lVar9) {
                            do {
                                lVar9 = DAT_140c65b80;
                                local_res20[0] = *(undefined4 *)(lVar13 + 0x20);
                                uVar8 = (**(code **)(DAT_140c65b80 + 0x20))(local_res20);
                                for (puVar1 = *(ulonglong **)
                                        (*(longlong *)(lVar9 + 0x18) +
                                         (uVar8 % *(ulonglong *)(lVar9 + 0x10)) * 8);
                                     puVar1 != (ulonglong *)0x0; puVar1 = (ulonglong *)puVar1[1]) {
                                    if ((uVar8 == *puVar1) && (iVar4 = (**(code **)(lVar9 + 0x28))(), iVar4 != 0)) {
                                        if ((puVar1 + 3 != (ulonglong *)0x0) &&
                                            ((((uVar8 = puVar1[3], uVar8 != 0 &&
                                                                   (lVar9 = *(longlong *)(uVar8 + 8),
                                                                           *(int *)(lVar9 + 0x38) == *(int *)(*local_d0 + uVar7 * 4))) &&
                                               (*(longlong *)(DAT_140c65898 + 0x78) != 0)) &&
                                              ((*(uint *)(lVar9 + 0x18) <=
                                                *(uint *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x38) &&
                                                (iVar4 = FUN_140552550(), iVar4 == 0)))))) {
                                            iVar5 = iVar5 + 1;
                                        }
                                        break;
                                    }
                                }
                                lVar9 = *(longlong *)(lVar13 + 0x18);
                                if (lVar9 == 0) {
                                    lVar9 = *(longlong *)(lVar13 + 8);
                                    if (lVar13 == *(longlong *)(lVar9 + 0x18)) {
                                        do {
                                            lVar13 = lVar9;
                                            lVar9 = *(longlong *)(lVar13 + 8);
                                        } while (lVar13 == *(longlong *)(lVar9 + 0x18));
                                    }
                                    if (*(longlong *)(lVar13 + 0x18) != lVar9) {
                                        lVar13 = lVar9;
                                    }
                                }
                                else {
                                    for (lVar19 = *(longlong *)(lVar9 + 0x10); lVar13 = lVar9, lVar19 != 0;
                                         lVar19 = *(longlong *)(lVar19 + 0x10)) {
                                        lVar9 = lVar19;
                                    }
                                }
                                iVar4 = iVar5;
                            } while (lVar13 != *(longlong *)(lVar11 + 0x10));
                        }
                        uVar7 = local_b8;
                        lVar11 = *(longlong *)((longlong)local_f8 + 0x28);
                        lVar9 = *(longlong *)(lVar11 + 0x30);
                        lVar13 = *(longlong *)(lVar9 + 0x10);
                        if (lVar13 != lVar9) {
                            do {
                                lVar9 = DAT_140c65b80;
                                local_c8[0] = *(undefined4 *)(lVar13 + 0x20);
                                uVar8 = (**(code **)(DAT_140c65b80 + 0x20))(local_c8);
                                for (puVar1 = *(ulonglong **)
                                        (*(longlong *)(lVar9 + 0x18) +
                                         (uVar8 % *(ulonglong *)(lVar9 + 0x10)) * 8);
                                     puVar1 != (ulonglong *)0x0; puVar1 = (ulonglong *)puVar1[1]) {
                                    if ((uVar8 == *puVar1) && (iVar4 = (**(code **)(lVar9 + 0x28))(), iVar4 != 0)) {
                                        if ((puVar1 + 3 != (ulonglong *)0x0) &&
                                            ((uVar8 = puVar1[3], uVar8 != 0 &&
                                                                 (*(int *)(*(longlong *)(uVar8 + 8) + 0x38) ==
                                                                  *(int *)(*local_d0 + uVar7 * 4))))) {
                                            iVar5 = iVar5 + 1;
                                        }
                                        break;
                                    }
                                }
                                lVar9 = *(longlong *)(lVar13 + 0x18);
                                if (lVar9 == 0) {
                                    lVar9 = *(longlong *)(lVar13 + 8);
                                    if (lVar13 == *(longlong *)(lVar9 + 0x18)) {
                                        do {
                                            lVar13 = lVar9;
                                            lVar9 = *(longlong *)(lVar13 + 8);
                                        } while (lVar13 == *(longlong *)(lVar9 + 0x18));
                                    }
                                    if (*(longlong *)(lVar13 + 0x18) != lVar9) {
                                        lVar13 = lVar9;
                                    }
                                }
                                else {
                                    for (lVar19 = *(longlong *)(lVar9 + 0x10); lVar13 = lVar9, lVar19 != 0;
                                         lVar19 = *(longlong *)(lVar19 + 0x10)) {
                                        lVar9 = lVar19;
                                    }
                                }
                                iVar4 = iVar5;
                            } while (lVar13 != *(longlong *)(lVar11 + 0x30));
                        }
                        dVar20 = *(double *)((longlong)local_f8 + 0x18);
                        if (dVar20 == 0.0) {
                            dVar20 = *(double *)((longlong)local_f8 + 8);
                            if (local_f8 == *(double *)((longlong)dVar20 + 0x18)) {
                                do {
                                    local_f8 = dVar20;
                                    dVar20 = *(double *)((longlong)local_f8 + 8);
                                } while (local_f8 == *(double *)((longlong)dVar20 + 0x18));
                            }
                            if (*(double *)((longlong)local_f8 + 0x18) != dVar20) {
                                local_f8 = dVar20;
                            }
                        }
                        else {
                            for (dVar3 = *(double *)((longlong)dVar20 + 0x10); local_f8 = dVar20, dVar3 != 0.0;
                                 dVar3 = *(double *)((longlong)dVar3 + 0x10)) {
                                dVar20 = dVar3;
                            }
                        }
                        lVar9 = local_c0;
                        puVar18 = local_d0;
                    } while (local_f8 != *(double *)(local_88 + 0x10));
                }
                lVar11 = **(longlong **)(lVar9 + 0x28);
                uVar17 = (uint)(iVar4 == 0);
                if (lVar11 != lVar11 + (*(longlong **)(lVar9 + 0x28))[1] * 0x18) {
                    do {
                        *(uint *)(lVar11 + 0x10) = uVar17;
                        lVar11 = lVar11 + 0x18;
                    } while (lVar11 != **(longlong **)(lVar9 + 0x28) +
                                       (*(longlong **)(lVar9 + 0x28))[1] * 0x18);
                }
                lVar11 = *(longlong *)(*(longlong *)(lVar9 + 0x28) + 0x10);
                if (lVar11 != lVar11 + *(longlong *)(*(longlong *)(lVar9 + 0x28) + 0x18) * 0x18) {
                    do {
                        *(uint *)(lVar11 + 0x10) = uVar17;
                        lVar11 = lVar11 + 0x18;
                    } while (lVar11 != *(longlong *)(*(longlong *)(lVar9 + 0x28) + 0x10) +
                                       *(longlong *)(*(longlong *)(lVar9 + 0x28) + 0x18) * 0x18);
                }
                lVar11 = *(longlong *)(*(longlong *)(lVar9 + 0x28) + 0x20);
                if (lVar11 != lVar11 + *(longlong *)(*(longlong *)(lVar9 + 0x28) + 0x28) * 0x18) {
                    do {
                        *(uint *)(lVar11 + 0x10) = uVar17;
                        lVar11 = lVar11 + 0x18;
                    } while (lVar11 != *(longlong *)(*(longlong *)(lVar9 + 0x28) + 0x20) +
                                       *(longlong *)(*(longlong *)(lVar9 + 0x28) + 0x28) * 0x18);
                }
                lVar11 = *(longlong *)(param_2 + 0x10);
                local_110 = 1;
                local_128 = &PTR_FUN_140b569f0;
                local_118 = lVar11;
                if (*(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x78)) {
                    FUN_14005e2c0(lVar11);
                }
                puVar15 = *(undefined8 **)(lVar11 + 0x10);
                uVar12 = FUN_14005c1b0(lVar11,0);
                *(undefined4 *)(puVar15 + 1) = 5;
                *puVar15 = uVar12;
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                local_120 = FUN_1400578c0(lVar11);
                iVar5 = FUN_140634870(*(undefined8 *)(lVar9 + 0x28));
                lVar11 = local_118;
                iVar4 = local_120;
                if (iVar5 == 0) {
                    if ((local_118 != 0) && (-1 < local_120)) {
                        plVar10 = (longlong *)FUN_1400580e0(local_118,0xffffd8f0);
                        puVar15 = *(undefined8 **)(*plVar10 + 0x20);
                        do {
                            if ((*(int *)(puVar15 + 3) == 3) &&
                                ((double)CONCAT44(uVar22,uVar21) == (double)puVar15[2])) goto LAB_1406372e5;
                            puVar15 = (undefined8 *)puVar15[4];
                        } while (puVar15 != (undefined8 *)0x0);
                        puVar15 = &DAT_140a12138;
                        LAB_1406372e5:
                        puVar14 = *(undefined8 **)(lVar11 + 0x10);
                        *puVar14 = *puVar15;
                        *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar15 + 1);
                        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                        FUN_140058b30(lVar11,0xffffd8f0);
                        pdVar2 = *(double **)(lVar11 + 0x10);
                        *(undefined4 *)(pdVar2 + 1) = 3;
                        *pdVar2 = (double)iVar4;
                        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                        FUN_140058b30(lVar11);
                    }
                }
                else {
                    lVar11 = *(longlong *)(param_2 + 0x10);
                    if (*(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x70) <=
                        *(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x78)) {
                        FUN_14005e2c0(lVar11);
                    }
                    puVar15 = *(undefined8 **)(lVar11 + 0x10);
                    uVar12 = FUN_14005c1b0(lVar11,0,0);
                    *(undefined4 *)(puVar15 + 1) = 5;
                    *puVar15 = uVar12;
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                    iVar4 = FUN_1400578c0(lVar11);
                    uVar17 = iVar4 - 1;
                    lVar13 = *(longlong *)(*(longlong *)(lVar11 + 0x20) + 0xa0);
                    if (uVar17 < *(uint *)(lVar13 + 0x38)) {
                        puVar15 = (undefined8 *)((longlong)(iVar4 + -1) * 0x10 + *(longlong *)(lVar13 + 0x18));
                    }
                    else {
                        local_f8 = (double)iVar4;
                        if (local_f8 == (double)CONCAT44(uVar22,uVar21)) {
                            puVar15 = *(undefined8 **)(lVar13 + 0x20);
                        }
                        else {
                            local_f8._4_4_ = (int)((ulonglong)local_f8 >> 0x20);
                            puVar15 = (undefined8 *)
                                    (*(longlong *)(lVar13 + 0x20) +
                                     ((longlong)(ulonglong)(uint)(local_f8._4_4_ + (int)local_f8) %
                                      (longlong)((1 << (*(byte *)(lVar13 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                        }
                        do {
                            if ((*(int *)(puVar15 + 3) == 3) && (local_f8 == (double)puVar15[2]))
                                goto LAB_14063740d;
                            puVar15 = (undefined8 *)puVar15[4];
                        } while (puVar15 != (undefined8 *)0x0);
                        puVar15 = &DAT_140a12138;
                    }
                    LAB_14063740d:
                    puVar14 = *(undefined8 **)(lVar11 + 0x10);
                    *puVar14 = *puVar15;
                    *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar15 + 1);
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                    lVar13 = FUN_14018f0e0(&local_f0,L"nContentType");
                    lVar13 = *(longlong *)(lVar13 + 8);
                    if (lVar13 == 0) {
                        *(undefined4 *)(*(longlong *)(lVar11 + 0x10) + 8) = 0;
                    }
                    else {
                        lVar19 = -1;
                        do {
                            lVar19 = lVar19 + 1;
                        } while (*(char *)(lVar13 + lVar19) != '\0');
                        if (*(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x70) <=
                            *(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x78)) {
                            FUN_14005e2c0(lVar11);
                        }
                        puVar15 = *(undefined8 **)(lVar11 + 0x10);
                        uVar12 = FUN_140062650(lVar11,lVar13,lVar19);
                        *(undefined4 *)(puVar15 + 1) = 4;
                        *puVar15 = uVar12;
                    }
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                    if (CONCAT44(uStack228,local_e8) != 0) {
                        FUN_14018b900(CONCAT44(uStack228,local_e8),0);
                    }
                    pdVar2 = *(double **)(lVar11 + 0x10);
                    *(undefined4 *)(pdVar2 + 1) = 3;
                    *pdVar2 = (double)uVar16;
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                    uVar12 = FUN_1400580e0(lVar11,0xfffffffd);
                    FUN_14005ea50(lVar11,uVar12,*(longlong *)(lVar11 + 0x10) + -0x20,
                                  *(longlong *)(lVar11 + 0x10) + -0x10);
                    lVar13 = *(longlong *)(lVar11 + 0x10);
                    *(undefined **)(lVar11 + 0x10) = &DAT_ffffffffffffffd0 + lVar13;
                    lVar19 = *(longlong *)(*(longlong *)(lVar11 + 0x20) + 0xa0);
                    iVar5 = *(int *)(lVar9 + 0x20);
                    if (uVar17 < *(uint *)(lVar19 + 0x38)) {
                        puVar15 = (undefined8 *)((longlong)(iVar4 + -1) * 0x10 + *(longlong *)(lVar19 + 0x18));
                    }
                    else {
                        local_f8 = (double)iVar4;
                        if (local_f8 == (double)CONCAT44(uVar22,uVar21)) {
                            puVar15 = *(undefined8 **)(lVar19 + 0x20);
                        }
                        else {
                            local_f8._4_4_ = (int)((ulonglong)local_f8 >> 0x20);
                            puVar15 = (undefined8 *)
                                    (*(longlong *)(lVar19 + 0x20) +
                                     ((longlong)(ulonglong)(uint)(local_f8._4_4_ + (int)local_f8) %
                                      (longlong)((1 << (*(byte *)(lVar19 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                        }
                        do {
                            if ((*(int *)(puVar15 + 3) == 3) && (local_f8 == (double)puVar15[2]))
                                goto LAB_14063757d;
                            puVar15 = (undefined8 *)puVar15[4];
                        } while (puVar15 != (undefined8 *)0x0);
                        puVar15 = &DAT_140a12138;
                    }
                    LAB_14063757d:
                    *(undefined8 *)(&DAT_ffffffffffffffd0 + lVar13) = *puVar15;
                    *(undefined4 *)(lVar13 + -0x28) = *(undefined4 *)(puVar15 + 1);
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                    lVar13 = FUN_14018f0e0(&local_f0,L"nContentId");
                    lVar13 = *(longlong *)(lVar13 + 8);
                    if (lVar13 == 0) {
                        *(undefined4 *)(*(longlong *)(lVar11 + 0x10) + 8) = 0;
                    }
                    else {
                        lVar19 = -1;
                        do {
                            lVar19 = lVar19 + 1;
                        } while (*(char *)(lVar13 + lVar19) != '\0');
                        if (*(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x70) <=
                            *(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x78)) {
                            FUN_14005e2c0(lVar11);
                        }
                        puVar15 = *(undefined8 **)(lVar11 + 0x10);
                        uVar12 = FUN_140062650(lVar11,lVar13,lVar19);
                        *(undefined4 *)(puVar15 + 1) = 4;
                        *puVar15 = uVar12;
                    }
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                    if (CONCAT44(uStack228,local_e8) != 0) {
                        FUN_14018b900(CONCAT44(uStack228,local_e8),0);
                    }
                    pdVar2 = *(double **)(lVar11 + 0x10);
                    *(undefined4 *)(pdVar2 + 1) = 3;
                    *pdVar2 = (double)iVar5;
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                    uVar12 = FUN_1400580e0(lVar11,0xfffffffd);
                    FUN_14005ea50(lVar11,uVar12,*(longlong *)(lVar11 + 0x10) + -0x20,
                                  *(longlong *)(lVar11 + 0x10) + -0x10);
                    *(longlong *)(lVar11 + 0x10) =
                            (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar11 + 0x10));
                    uVar12 = FUN_14034bdd0();
                    lVar13 = *(longlong *)(*(longlong *)(lVar11 + 0x20) + 0xa0);
                    if (uVar17 < *(uint *)(lVar13 + 0x38)) {
                        puVar15 = (undefined8 *)((longlong)(iVar4 + -1) * 0x10 + *(longlong *)(lVar13 + 0x18));
                    }
                    else {
                        local_108 = (double)iVar4;
                        if (local_108 == (double)CONCAT44(uVar22,uVar21)) {
                            puVar15 = *(undefined8 **)(lVar13 + 0x20);
                        }
                        else {
                            local_108._4_4_ = (int)((ulonglong)local_108 >> 0x20);
                            puVar15 = (undefined8 *)
                                    (*(longlong *)(lVar13 + 0x20) +
                                     ((longlong)(ulonglong)(uint)(local_108._4_4_ + (int)local_108) %
                                      (longlong)((1 << (*(byte *)(lVar13 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                        }
                        do {
                            if ((*(int *)(puVar15 + 3) == 3) && (local_108 == (double)puVar15[2]))
                                goto LAB_1406376f1;
                            puVar15 = (undefined8 *)puVar15[4];
                        } while (puVar15 != (undefined8 *)0x0);
                        puVar15 = &DAT_140a12138;
                    }
                    LAB_1406376f1:
                    puVar14 = *(undefined8 **)(lVar11 + 0x10);
                    *puVar14 = *puVar15;
                    *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar15 + 1);
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                    FUN_1400f0870(lVar11,puVar15,L"strZoneName",uVar12);
                    lVar13 = *(longlong *)(lVar11 + 0x10);
                    puVar15 = (undefined8 *)(lVar13 + -0x10);
                    *(undefined8 **)(lVar11 + 0x10) = puVar15;
                    lVar19 = *(longlong *)(*(longlong *)(lVar11 + 0x20) + 0xa0);
                    if (uVar17 < *(uint *)(lVar19 + 0x38)) {
                        puVar14 = (undefined8 *)((longlong)(iVar4 + -1) * 0x10 + *(longlong *)(lVar19 + 0x18));
                    }
                    else {
                        local_108 = (double)iVar4;
                        if (local_108 == (double)CONCAT44(uVar22,uVar21)) {
                            puVar14 = *(undefined8 **)(lVar19 + 0x20);
                        }
                        else {
                            local_108._4_4_ = (int)((ulonglong)local_108 >> 0x20);
                            puVar14 = (undefined8 *)
                                    (*(longlong *)(lVar19 + 0x20) +
                                     ((longlong)(ulonglong)(uint)(local_108._4_4_ + (int)local_108) %
                                      (longlong)((1 << (*(byte *)(lVar19 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                        }
                        do {
                            if ((*(int *)(puVar14 + 3) == 3) && (local_108 == (double)puVar14[2]))
                                goto LAB_1406377b4;
                            puVar14 = (undefined8 *)puVar14[4];
                        } while (puVar14 != (undefined8 *)0x0);
                        puVar14 = &DAT_140a12138;
                    }
                    LAB_1406377b4:
                    *puVar15 = *puVar14;
                    *(undefined4 *)(lVar13 + -8) = *(undefined4 *)(puVar14 + 1);
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                    lVar13 = FUN_14018f0e0(&local_f0,L"arRewards");
                    lVar13 = *(longlong *)(lVar13 + 8);
                    if (lVar13 == 0) {
                        *(undefined4 *)(*(longlong *)(lVar11 + 0x10) + 8) = 0;
                    }
                    else {
                        lVar19 = -1;
                        do {
                            lVar19 = lVar19 + 1;
                        } while (*(char *)(lVar13 + lVar19) != '\0');
                        if (*(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x70) <=
                            *(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x78)) {
                            FUN_14005e2c0(lVar11);
                        }
                        puVar15 = *(undefined8 **)(lVar11 + 0x10);
                        uVar12 = FUN_140062650(lVar11,lVar13,lVar19);
                        *(undefined4 *)(puVar15 + 1) = 4;
                        *puVar15 = uVar12;
                    }
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                    if (CONCAT44(uStack228,local_e8) != 0) {
                        FUN_14018b900(CONCAT44(uStack228,local_e8),0);
                    }
                    iVar5 = local_120;
                    lVar13 = *(longlong *)(*(longlong *)(lVar11 + 0x20) + 0xa0);
                    if (local_120 - 1U < *(uint *)(lVar13 + 0x38)) {
                        puVar15 = (undefined8 *)
                                ((longlong)(local_120 + -1) * 0x10 + *(longlong *)(lVar13 + 0x18));
                    }
                    else {
                        dVar20 = (double)local_120;
                        if (dVar20 == (double)CONCAT44(uVar22,uVar21)) {
                            puVar15 = *(undefined8 **)(lVar13 + 0x20);
                        }
                        else {
                            iStackX28 = (int)((ulonglong)dVar20 >> 0x20);
                            local_res18 = SUB84(dVar20,0);
                            puVar15 = (undefined8 *)
                                    (*(longlong *)(lVar13 + 0x20) +
                                     ((longlong)(ulonglong)(uint)(iStackX28 + local_res18) %
                                      (longlong)((1 << (*(byte *)(lVar13 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                        }
                        do {
                            if ((*(int *)(puVar15 + 3) == 3) && (dVar20 == (double)puVar15[2]))
                                goto LAB_1406378cf;
                            puVar15 = (undefined8 *)puVar15[4];
                        } while (puVar15 != (undefined8 *)0x0);
                        puVar15 = &DAT_140a12138;
                    }
                    LAB_1406378cf:
                    puVar14 = *(undefined8 **)(lVar11 + 0x10);
                    *puVar14 = *puVar15;
                    *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar15 + 1);
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                    FUN_14005ea50(lVar11);
                    *(longlong *)(lVar11 + 0x10) =
                            (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar11 + 0x10));
                    FUN_1400fb1d0(param_2);
                    if (-1 < iVar4) {
                        plVar10 = (longlong *)FUN_1400580e0(lVar11,0xffffd8f0);
                        puVar15 = *(undefined8 **)(*plVar10 + 0x20);
                        do {
                            if ((*(int *)(puVar15 + 3) == 3) &&
                                ((double)CONCAT44(uVar22,uVar21) == (double)puVar15[2])) goto LAB_140637959;
                            puVar15 = (undefined8 *)puVar15[4];
                        } while (puVar15 != (undefined8 *)0x0);
                        puVar15 = &DAT_140a12138;
                        LAB_140637959:
                        puVar14 = *(undefined8 **)(lVar11 + 0x10);
                        *puVar14 = *puVar15;
                        *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar15 + 1);
                        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                        FUN_140058b30(lVar11,0xffffd8f0);
                        pdVar2 = *(double **)(lVar11 + 0x10);
                        *(undefined4 *)(pdVar2 + 1) = 3;
                        *pdVar2 = (double)iVar4;
                        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                        FUN_140058b30(lVar11);
                    }
                    lVar11 = local_118;
                    puVar18 = local_d0;
                    if ((local_118 != 0) && (-1 < iVar5)) {
                        plVar10 = (longlong *)FUN_1400580e0(local_118,0xffffd8f0);
                        puVar15 = *(undefined8 **)(*plVar10 + 0x20);
                        do {
                            if ((*(int *)(puVar15 + 3) == 3) &&
                                ((double)CONCAT44(uVar22,uVar21) == (double)puVar15[2])) goto LAB_1406379fe;
                            puVar15 = (undefined8 *)puVar15[4];
                        } while (puVar15 != (undefined8 *)0x0);
                        puVar15 = &DAT_140a12138;
                        LAB_1406379fe:
                        puVar14 = *(undefined8 **)(lVar11 + 0x10);
                        *puVar14 = *puVar15;
                        *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar15 + 1);
                        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                        FUN_140058b30(lVar11,0xffffd8f0);
                        pdVar2 = *(double **)(lVar11 + 0x10);
                        *(undefined4 *)(pdVar2 + 1) = 3;
                        *pdVar2 = (double)iVar5;
                        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                        FUN_140058b30(lVar11);
                        puVar18 = local_d0;
                    }
                }
            }
        }
        local_b8 = local_b8 + 1;
        lVar11 = local_100;
    } while (local_b8 < puVar18[1]);
    goto switchD_140636e25_caseD_6;
    LAB_140637a81:
    do {
        dVar20 = local_108;
        if (DAT_140c63840 == (code *)0x0) {
            if ((_DAT_140c64698 == 0) && (iVar4 = FUN_14024aa60(), -1 < iVar4)) {
                lVar11 = (**(code **)(*DAT_140c63c08 + 0x18))();
                goto LAB_140637ad2;
            }
        }
        else {
            lVar11 = (*DAT_140c63840)(&PTR_u_World_140a6e180);
            LAB_140637ad2:
            if (lVar11 != 0) {
                local_110 = 1;
                lVar11 = *(longlong *)(param_2 + 0x10);
                local_128 = &PTR_FUN_140b569f0;
                local_118 = lVar11;
                if (*(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x78)) {
                    FUN_14005e2c0(lVar11);
                }
                puVar15 = *(undefined8 **)(lVar11 + 0x10);
                uVar12 = FUN_14005c1b0(lVar11,0,0);
                *(undefined4 *)(puVar15 + 1) = 5;
                *puVar15 = uVar12;
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                local_120 = FUN_1400578c0(lVar11);
                iVar4 = FUN_140634870(*(undefined8 *)(lVar9 + 0x28),&local_128,0);
                if (iVar4 != 0) {
                    lVar11 = *(longlong *)(param_2 + 0x10);
                    local_d8 = 1;
                    local_f0 = &PTR_FUN_140b569f0;
                    local_e0 = lVar11;
                    if (*(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x70) <=
                        *(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x78)) {
                        FUN_14005e2c0(lVar11);
                    }
                    puVar15 = *(undefined8 **)(lVar11 + 0x10);
                    uVar12 = FUN_14005c1b0(lVar11,0,0);
                    *(undefined4 *)(puVar15 + 1) = 5;
                    *puVar15 = uVar12;
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                    iVar4 = FUN_1400578c0(lVar11);
                    lVar13 = *(longlong *)(*(longlong *)(lVar11 + 0x20) + 0xa0);
                    if (iVar4 - 1U < *(uint *)(lVar13 + 0x38)) {
                        puVar15 = (undefined8 *)((longlong)(iVar4 + -1) * 0x10 + *(longlong *)(lVar13 + 0x18));
                    }
                    else {
                        dVar20 = (double)iVar4;
                        if (dVar20 == (double)CONCAT44(uVar22,uVar21)) {
                            puVar15 = *(undefined8 **)(lVar13 + 0x20);
                        }
                        else {
                            iStackX28 = (int)((ulonglong)dVar20 >> 0x20);
                            local_res18 = SUB84(dVar20,0);
                            puVar15 = (undefined8 *)
                                    (*(longlong *)(lVar13 + 0x20) +
                                     ((longlong)(ulonglong)(uint)(iStackX28 + local_res18) %
                                      (longlong)((1 << (*(byte *)(lVar13 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                        }
                        do {
                            if ((*(int *)(puVar15 + 3) == 3) && (dVar20 == (double)puVar15[2]))
                                goto LAB_140637c43;
                            puVar15 = (undefined8 *)puVar15[4];
                        } while (puVar15 != (undefined8 *)0x0);
                        puVar15 = &DAT_140a12138;
                    }
                    LAB_140637c43:
                    puVar14 = *(undefined8 **)(lVar11 + 0x10);
                    *puVar14 = *puVar15;
                    *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar15 + 1);
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                    local_e8 = iVar4;
                    lVar13 = FUN_14018f0e0(local_78,L"nContentType");
                    lVar13 = *(longlong *)(lVar13 + 8);
                    if (lVar13 == 0) {
                        *(undefined4 *)(*(longlong *)(lVar11 + 0x10) + 8) = 0;
                    }
                    else {
                        lVar19 = -1;
                        do {
                            lVar19 = lVar19 + 1;
                        } while (*(char *)(lVar13 + lVar19) != '\0');
                        if (*(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x70) <=
                            *(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x78)) {
                            FUN_14005e2c0(lVar11);
                        }
                        puVar15 = *(undefined8 **)(lVar11 + 0x10);
                        uVar12 = FUN_140062650(lVar11,lVar13,lVar19);
                        *(undefined4 *)(puVar15 + 1) = 4;
                        *puVar15 = uVar12;
                    }
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                    if (local_70 != 0) {
                        FUN_14018b900(local_70,0);
                    }
                    pdVar2 = *(double **)(lVar11 + 0x10);
                    *(undefined4 *)(pdVar2 + 1) = 3;
                    *pdVar2 = (double)uVar16;
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                    uVar12 = FUN_1400580e0(lVar11,0xfffffffd);
                    FUN_14005ea50(lVar11,uVar12,*(longlong *)(lVar11 + 0x10) + -0x20,
                                  *(longlong *)(lVar11 + 0x10) + -0x10);
                    *(longlong *)(lVar11 + 0x10) =
                            (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar11 + 0x10));
                    puVar15 = *(undefined8 **)(lVar11 + 0x10);
                    puVar14 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),iVar4);
                    *puVar15 = *puVar14;
                    *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar14 + 1);
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                    FUN_1400f06f0(lVar11);
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
                    FUN_14034bdd0();
                    puVar14 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),iVar4);
                    puVar15 = *(undefined8 **)(lVar11 + 0x10);
                    *puVar15 = *puVar14;
                    *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar14 + 1);
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                    FUN_1400f0870(lVar11,puVar15,L"strWorld");
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
                    puVar15 = *(undefined8 **)(lVar11 + 0x10);
                    puVar14 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),iVar4);
                    *puVar15 = *puVar14;
                    *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar14 + 1);
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                    FUN_1400f0630(lVar11);
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
                    FUN_1400fb2a0(&local_f0,L"arRewards",local_120);
                    FUN_1400fb1d0(param_2,iVar4);
                    FUN_1400579e0(lVar11);
                    puVar18 = local_d0;
                    dVar20 = local_108;
                }
                lVar11 = *(longlong *)(param_2 + 0x10);
                local_98 = 1;
                local_b0 = &PTR_FUN_140b569f0;
                local_a0 = lVar11;
                if (*(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x78)) {
                    FUN_14005e2c0(lVar11);
                }
                puVar15 = *(undefined8 **)(lVar11 + 0x10);
                uVar12 = FUN_14005c1b0(lVar11,0,0);
                *(undefined4 *)(puVar15 + 1) = 5;
                *puVar15 = uVar12;
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                local_a8 = FUN_1400578c0(lVar11);
                iVar4 = FUN_140634870(*(undefined8 *)(lVar9 + 0x28));
                if (iVar4 != 0) {
                    local_d8 = 1;
                    lVar11 = *(longlong *)(param_2 + 0x10);
                    local_f0 = &PTR_FUN_140b569f0;
                    local_e0 = lVar11;
                    if (*(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x70) <=
                        *(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x78)) {
                        FUN_14005e2c0(lVar11);
                    }
                    puVar15 = *(undefined8 **)(lVar11 + 0x10);
                    uVar12 = FUN_14005c1b0(lVar11,0,0);
                    *(undefined4 *)(puVar15 + 1) = 5;
                    *puVar15 = uVar12;
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                    iVar4 = FUN_1400578c0(lVar11);
                    local_e8 = iVar4;
                    puVar14 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),iVar4);
                    puVar15 = *(undefined8 **)(lVar11 + 0x10);
                    *puVar15 = *puVar14;
                    *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar14 + 1);
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                    FUN_1400f06f0(lVar11,puVar15,L"nContentType",uVar16);
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
                    puVar15 = *(undefined8 **)(lVar11 + 0x10);
                    puVar14 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),iVar4);
                    *puVar15 = *puVar14;
                    *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar14 + 1);
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                    FUN_1400f06f0(lVar11);
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
                    uVar12 = FUN_14034bdd0();
                    puVar14 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),iVar4);
                    puVar15 = *(undefined8 **)(lVar11 + 0x10);
                    *puVar15 = *puVar14;
                    *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar14 + 1);
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                    FUN_1400f0870(lVar11,puVar15,L"strWorld",uVar12);
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
                    puVar15 = *(undefined8 **)(lVar11 + 0x10);
                    puVar14 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),iVar4);
                    *puVar15 = *puVar14;
                    *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar14 + 1);
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                    FUN_1400f0630(lVar11);
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
                    FUN_1400fb2a0(&local_f0);
                    FUN_1400fb1d0(param_2);
                    FUN_1400579e0(lVar11);
                }
                if (local_a0 != 0) {
                    FUN_1400579e0();
                }
                if (local_118 != 0) {
                    FUN_1400579e0();
                }
            }
        }
        local_108 = (double)((longlong)dVar20 + 1);
    } while ((ulonglong)local_108 < puVar18[3]);
    LAB_14063807f:
    uVar7 = 0;
    if (puVar18[5] != 0) {
        do {
            lVar11 = *(longlong *)(param_2 + 0x10);
            local_128 = &PTR_FUN_140b569f0;
            local_110 = 1;
            local_118 = lVar11;
            if (*(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar11);
            }
            puVar15 = *(undefined8 **)(lVar11 + 0x10);
            uVar12 = FUN_14005c1b0(lVar11,0);
            *(undefined4 *)(puVar15 + 1) = 5;
            *puVar15 = uVar12;
            *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
            local_120 = FUN_1400578c0(lVar11);
            iVar4 = FUN_140634870(*(undefined8 *)(lVar9 + 0x28));
            if (iVar4 == 0) {
                if (local_118 != 0) {
                    FUN_1400579e0();
                }
            }
            else {
                lVar11 = *(longlong *)(param_2 + 0x10);
                local_f0 = &PTR_FUN_140b569f0;
                local_d8 = 1;
                local_e0 = lVar11;
                if (*(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x78)) {
                    FUN_14005e2c0(lVar11);
                }
                puVar15 = *(undefined8 **)(lVar11 + 0x10);
                uVar12 = FUN_14005c1b0(lVar11,0,0);
                *(undefined4 *)(puVar15 + 1) = 5;
                *puVar15 = uVar12;
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                iVar4 = FUN_1400578c0(lVar11);
                local_e8 = iVar4;
                puVar14 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),iVar4);
                puVar15 = *(undefined8 **)(lVar11 + 0x10);
                *puVar15 = *puVar14;
                *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar14 + 1);
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                FUN_1400f06f0(lVar11,puVar15,L"nContentType");
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
                puVar15 = *(undefined8 **)(lVar11 + 0x10);
                puVar14 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),iVar4);
                *puVar15 = *puVar14;
                *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar14 + 1);
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                FUN_1400f06f0(lVar11);
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
                puVar15 = *(undefined8 **)(lVar11 + 0x10);
                puVar14 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),iVar4);
                *puVar15 = *puVar14;
                *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar14 + 1);
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                FUN_1400f06f0(lVar11);
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
                puVar15 = *(undefined8 **)(lVar11 + 0x10);
                puVar14 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),iVar4);
                *puVar15 = *puVar14;
                *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar14 + 1);
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                FUN_1400f0630(lVar11);
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
                FUN_1400fb2a0(&local_f0);
                FUN_1400fb1d0(param_2);
                FUN_1400579e0(lVar11);
                if (local_118 != 0) {
                    FUN_1400579e0();
                }
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < puVar18[5]);
    }
    uVar7 = 0;
    lVar11 = local_100;
    if (puVar18[7] != 0) {
        do {
            lVar11 = *(longlong *)(param_2 + 0x10);
            local_128 = &PTR_FUN_140b569f0;
            local_110 = 1;
            local_118 = lVar11;
            FUN_140058900(lVar11);
            local_120 = FUN_1400578c0(lVar11);
            iVar4 = FUN_140634870(*(undefined8 *)(lVar9 + 0x28));
            if (iVar4 == 0) {
                if (local_118 != 0) {
                    FUN_1400579e0();
                }
            }
            else {
                lVar11 = *(longlong *)(param_2 + 0x10);
                local_f0 = &PTR_FUN_140b569f0;
                local_d8 = 1;
                local_e0 = lVar11;
                FUN_140058900(lVar11);
                iVar4 = FUN_1400578c0(lVar11);
                local_e8 = iVar4;
                puVar14 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),iVar4);
                puVar15 = *(undefined8 **)(lVar11 + 0x10);
                *puVar15 = *puVar14;
                *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar14 + 1);
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                FUN_1400f06f0(lVar11,puVar15,L"nContentType",uVar16);
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
                puVar15 = *(undefined8 **)(lVar11 + 0x10);
                puVar14 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),iVar4);
                *puVar15 = *puVar14;
                *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar14 + 1);
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                FUN_1400f06f0(lVar11);
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
                puVar15 = *(undefined8 **)(lVar11 + 0x10);
                puVar14 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),iVar4);
                *puVar15 = *puVar14;
                *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar14 + 1);
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                FUN_1400f06f0(lVar11);
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
                puVar15 = *(undefined8 **)(lVar11 + 0x10);
                puVar14 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),iVar4);
                *puVar15 = *puVar14;
                *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar14 + 1);
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                FUN_1400f0630(lVar11);
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
                FUN_1400fb2a0(&local_f0);
                FUN_1400fb1d0(param_2);
                FUN_1400579e0(lVar11);
                if (local_118 != 0) {
                    FUN_1400579e0();
                }
            }
            uVar7 = uVar7 + 1;
            lVar11 = local_100;
        } while (uVar7 < puVar18[7]);
    }
    switchD_140636e25_caseD_6:
    local_c0 = *(longlong *)(lVar9 + 0x18);
    if (local_c0 == 0) {
        lVar13 = *(longlong *)(lVar9 + 8);
        if (lVar9 == *(longlong *)(lVar13 + 0x18)) {
            do {
                lVar9 = lVar13;
                lVar13 = *(longlong *)(lVar9 + 8);
            } while (lVar9 == *(longlong *)(lVar13 + 0x18));
        }
        local_c0 = lVar9;
        if (*(longlong *)(lVar9 + 0x18) != lVar13) {
            local_c0 = lVar13;
        }
    }
    else {
        for (lVar9 = *(longlong *)(local_c0 + 0x10); lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x10)) {
            local_c0 = lVar9;
        }
    }
    if (local_c0 == *(longlong *)(local_80 + 8 + lVar11)) goto LAB_140638a78;
    goto LAB_140636da0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_140638ad0(_FILETIME param_1,int param_2,uint param_3,longlong *param_4,
                        longlong *param_5,float *param_6)

{
    _FILETIME *p_Var1;
    undefined4 uVar2;
    float *pfVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    longlong *plVar8;
    longlong lVar9;
    int *piVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    ulonglong uVar13;
    uint uVar14;
    undefined4 *puVar15;
    ulonglong uVar16;
    ulonglong uVar17;
    float fVar18;
    float fVar19;
    _FILETIME local_res8;
    _FILETIME local_50;
    ulonglong local_48;
    ulonglong local_40;

    pfVar3 = param_6;
    lVar6 = DAT_140c65c20;
    uVar16 = 0;
    local_48 = 0;
    local_40 = 0;
    local_res8 = param_1;
    lVar5 = FUN_14022fb40(param_2);
    uVar17 = uVar16;
    uVar13 = uVar16;
    if ((lVar5 != 0) &&
        (uVar11 = uVar16, uVar17 = local_48, uVar12 = uVar16, *(longlong *)(lVar6 + 0x148) != 0)) {
        do {
            piVar10 = (int *)(*(longlong *)(lVar6 + 0x140) + uVar12);
            if ((*piVar10 == *(int *)(lVar5 + 4)) && (piVar10[1] == param_3)) {
                FUN_140481060(&local_48);
            }
            uVar11 = uVar11 + 1;
            uVar17 = local_48;
            uVar12 = uVar12 + 0x14;
            uVar13 = local_40;
        } while (uVar11 < *(ulonglong *)(lVar6 + 0x148));
    }
    *param_6 = 1.0;
    if (uVar13 == 0) {
        GetSystemTimeAsFileTime(&local_50);
        local_res8 = local_50;
        plVar8 = (longlong *)FUN_140636c40();
        if (plVar8 != (longlong *)0x0) {
            uVar17 = uVar16;
            if (plVar8[3] != 0) {
                do {
                    p_Var1 = (_FILETIME *)(uVar17 + 8 + plVar8[2]);
                    if (((ulonglong)local_50 <= (ulonglong)*p_Var1 && *p_Var1 != local_50) &&
                        (lVar6 = FUN_1402303c0(*(undefined4 *)(uVar17 + plVar8[2])), lVar6 != 0)) {
                        lVar5 = param_4[1];
                        uVar2 = *(undefined4 *)(lVar6 + 4);
                        lVar6 = lVar5 + 1;
                        lVar7 = FUN_14018db00(*param_4,lVar6,4);
                        *(undefined4 *)(lVar7 + lVar5 * 4) = uVar2;
                        if (*param_4 != lVar7) {
                            FUN_1407db590(lVar7,*param_4,param_4[1] << 2);
                            if (*param_4 != 0) {
                                (**(code **)(*(longlong *)(*param_4 + -0x10) + 8))();
                            }
                            *param_4 = lVar7;
                        }
                        param_4[1] = lVar6;
                        local_50 = local_res8;
                    }
                    uVar16 = uVar16 + 1;
                    uVar17 = uVar17 + 0x18;
                } while (uVar16 < (ulonglong)plVar8[3]);
            }
            uVar13 = 0;
            uVar17 = uVar13;
            if (plVar8[1] != 0) {
                do {
                    p_Var1 = (_FILETIME *)(uVar13 + 8 + *plVar8);
                    if ((ulonglong)local_50 <= (ulonglong)*p_Var1 && *p_Var1 != local_50) {
                        uVar2 = *(undefined4 *)(uVar13 + *plVar8);
                        if (DAT_140c63840 == (code *)0x0) {
                            if ((_DAT_140c63898 != 0) || (iVar4 = FUN_14022fd20(), iVar4 < 0)) goto LAB_140638f66;
                            lVar6 = (**(code **)(*DAT_140c64480 + 0x18))(DAT_140c64480,uVar2);
                        }
                        else {
                            lVar6 = (*DAT_140c63840)(&PTR_u_RewardRotationItem_140a6cb68,uVar2,DAT_140c63858);
                        }
                        if (lVar6 != 0) {
                            lVar7 = param_5[1];
                            lVar5 = lVar7 + 1;
                            lVar9 = FUN_14018db00(*param_5,lVar5,8);
                            *(longlong *)(lVar9 + lVar7 * 8) = lVar6;
                            if (*param_5 != lVar9) {
                                FUN_1407db590(lVar9,*param_5,param_5[1] << 3);
                                lVar6 = *param_5;
                                if (lVar6 != 0) {
                                    (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))(lVar6 + -0x10);
                                }
                                *param_5 = lVar9;
                            }
                            param_5[1] = lVar5;
                            local_50 = local_res8;
                        }
                    }
                    LAB_140638f66:
                    uVar17 = uVar17 + 1;
                    uVar13 = uVar13 + 0x18;
                } while (uVar17 < (ulonglong)plVar8[1]);
            }
            uVar16 = 0;
            uVar17 = uVar16;
            if (plVar8[5] != 0) {
                do {
                    p_Var1 = (_FILETIME *)(uVar16 + 8 + plVar8[4]);
                    if ((ulonglong)local_50 <= (ulonglong)*p_Var1 && *p_Var1 != local_50) {
                        uVar2 = *(undefined4 *)(uVar16 + plVar8[4]);
                        if (DAT_140c63840 == (code *)0x0) {
                            if ((_DAT_140c641b8 != 0) || (iVar4 = FUN_1402305a0(), iVar4 < 0)) goto LAB_140638ffc;
                            lVar6 = (**(code **)(*DAT_140c64e90 + 0x18))(DAT_140c64e90,uVar2);
                        }
                        else {
                            lVar6 = (*DAT_140c63840)(&PTR_u_RewardRotationModifier_140a6cbd8,uVar2,DAT_140c63858);
                        }
                        if ((lVar6 != 0) && (*(int *)(lVar6 + 4) == 0x26)) {
                            *param_6 = *(float *)(lVar6 + 0xc) * *param_6;
                        }
                    }
                    LAB_140638ffc:
                    uVar17 = uVar17 + 1;
                    uVar16 = uVar16 + 0x18;
                } while (uVar17 < (ulonglong)plVar8[5]);
                uVar16 = 0;
            }
        }
    }
    else {
        puVar15 = (undefined4 *)(uVar17 + 8);
        do {
            if (*(char *)(puVar15 + 1) == '\x02') {
                uVar2 = *puVar15;
                if (DAT_140c63840 == (code *)0x0) {
                    if ((_DAT_140c641bc != 0) || (iVar4 = FUN_140230160(), iVar4 < 0)) goto LAB_140638c96;
                    lVar6 = (**(code **)(*DAT_140c64ff8 + 0x18))(DAT_140c64ff8,uVar2);
                }
                else {
                    lVar6 = (*DAT_140c63840)(&PTR_u_RewardRotationEssence_140a6cba0,uVar2,DAT_140c63858);
                }
                if (lVar6 != 0) {
                    lVar5 = param_4[1];
                    uVar2 = *(undefined4 *)(lVar6 + 4);
                    lVar6 = lVar5 + 1;
                    lVar7 = FUN_14018db00(*param_4,lVar6,4);
                    *(undefined4 *)(lVar7 + lVar5 * 4) = uVar2;
                    if (*param_4 != lVar7) {
                        FUN_1407db590(lVar7,*param_4,param_4[1] << 2);
                        if (*param_4 != 0) {
                            (**(code **)(*(longlong *)(*param_4 + -0x10) + 8))();
                        }
                        *param_4 = lVar7;
                    }
                    param_4[1] = lVar6;
                }
            }
            else if ((*(char *)(puVar15 + 1) == '\x01') &&
                     (local_res8 = (_FILETIME)FUN_14022ff80(*puVar15), local_res8 != (_FILETIME)0x0)) {
                FUN_140033260(param_5,&local_res8);
            }
            LAB_140638c96:
            puVar15 = puVar15 + 5;
            uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
        fVar18 = 1.0;
        lVar6 = *(longlong *)(DAT_140c65898 + 0x1c00);
        fVar19 = 1.0;
        uVar14 = param_2 << 0x10 | param_3 & 0xffff;
        lVar7 = lVar6;
        lVar5 = *(longlong *)(lVar6 + 8);
        while (lVar5 != 0) {
            if (*(int *)(lVar5 + 0x20) < 0x26) {
                lVar5 = *(longlong *)(lVar5 + 0x18);
            }
            else {
                lVar7 = lVar5;
                lVar5 = *(longlong *)(lVar5 + 0x10);
            }
        }
        param_6 = (float *)lVar6;
        if (((lVar7 != lVar6) && (*(int *)(lVar7 + 0x20) < 0x27)) &&
            ((*(int *)(lVar7 + 0x20) < 0x26 || (*(int *)(lVar7 + 0x24) == 0)))) {
            param_6 = (float *)lVar7;
        }
        if ((param_6 != (float *)lVar6) &&
            ((*(int *)((longlong)param_6 + 0x30) == 0 || (*(int *)((longlong)param_6 + 0x30) == 2)))) {
            fVar19 = *(float *)((longlong)param_6 + 0x34);
        }
        lVar7 = lVar6;
        lVar5 = *(longlong *)(lVar6 + 8);
        while (lVar5 != 0) {
            if ((*(int *)(lVar5 + 0x20) < 0x26) ||
                ((*(int *)(lVar5 + 0x20) < 0x27 && (*(uint *)(lVar5 + 0x24) < uVar14)))) {
                lVar5 = *(longlong *)(lVar5 + 0x18);
            }
            else {
                lVar7 = lVar5;
                lVar5 = *(longlong *)(lVar5 + 0x10);
            }
        }
        param_6 = (float *)lVar6;
        if (((lVar7 != lVar6) && (*(int *)(lVar7 + 0x20) < 0x27)) &&
            ((*(int *)(lVar7 + 0x20) < 0x26 || (*(uint *)(lVar7 + 0x24) <= uVar14)))) {
            param_6 = (float *)lVar7;
        }
        if ((param_6 != (float *)lVar6) &&
            ((*(int *)((longlong)param_6 + 0x30) == 0 || (*(int *)((longlong)param_6 + 0x30) == 2)))) {
            fVar18 = *(float *)((longlong)param_6 + 0x34);
        }
        uVar16 = 1;
        *pfVar3 = fVar18 * fVar19 * *pfVar3;
    }
    if (local_48 != 0) {
        (**(code **)(*(longlong *)(local_48 - 0x10) + 8))(local_48 - 0x10);
    }
    return uVar16;
}



// WARNING: Removing unreachable block (ram,0x0001406394f9)

void FUN_140639060(undefined8 param_1,undefined4 param_2,int param_3,longlong param_4,
                   undefined4 param_5)

{
    longlong *plVar1;
    char cVar2;
    undefined8 *puVar3;
    undefined4 *puVar4;
    uint *puVar5;
    double *pdVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    int iVar9;
    longlong lVar10;
    undefined8 uVar11;
    undefined8 *puVar12;
    longlong lVar13;
    char *pcVar14;
    uint uVar15;
    int *piVar16;
    ulonglong uVar17;
    char *pcVar18;
    ulonglong uVar19;
    ulonglong uVar20;
    longlong lVar21;
    longlong lVar22;
    char *pcVar23;
    longlong lVar24;
    float fVar25;
    float fVar26;
    ulonglong local_res8;
    longlong local_b0;
    ulonglong local_a8;
    undefined **local_a0;
    undefined4 local_98;
    longlong local_90;
    undefined4 local_88;
    undefined **local_80;
    undefined4 local_78;
    undefined4 uStack116;
    longlong local_70;
    undefined4 local_68;

    lVar21 = DAT_140c65c20;
    uVar17 = 0;
    local_a8 = 0;
    local_b0 = 0;
    lVar10 = FUN_14022fb40(param_2);
    uVar19 = uVar17;
    if ((lVar10 != 0) && (uVar20 = uVar17, uVar19 = 0, *(longlong *)(lVar21 + 0x148) != 0)) {
        do {
            piVar16 = (int *)(*(longlong *)(lVar21 + 0x140) + uVar20);
            if ((*piVar16 == *(int *)(lVar10 + 4)) && (piVar16[1] == param_3)) {
                FUN_140481060(&local_b0);
            }
            uVar17 = uVar17 + 1;
            uVar20 = uVar20 + 0x14;
            uVar19 = local_a8;
        } while (uVar17 < *(ulonglong *)(lVar21 + 0x148));
    }
    local_88 = 1;
    lVar21 = *(longlong *)(param_4 + 0x10);
    local_a0 = &PTR_FUN_140b569f0;
    local_90 = lVar21;
    if (*(ulonglong *)(*(longlong *)(lVar21 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar21 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar21);
    }
    puVar3 = *(undefined8 **)(lVar21 + 0x10);
    uVar11 = FUN_14005c1b0(lVar21,0,0);
    *(undefined4 *)(puVar3 + 1) = 5;
    *puVar3 = uVar11;
    *(longlong *)(lVar21 + 0x10) = *(longlong *)(lVar21 + 0x10) + 0x10;
    uVar7 = FUN_1400578c0(lVar21);
    lVar10 = *(longlong *)(param_4 + 0x10);
    local_98 = uVar7;
    puVar12 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),
                          *(undefined4 *)(param_4 + 8));
    puVar3 = *(undefined8 **)(lVar10 + 0x10);
    *puVar3 = *puVar12;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar12 + 1);
    *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
    lVar10 = *(longlong *)(param_4 + 0x10);
    if (uVar19 == 0) {
        lVar24 = FUN_14018f0e0(&local_80,L"bRewardsLocked");
        lVar24 = *(longlong *)(lVar24 + 8);
        if (lVar24 == 0) {
            *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + 8) = 0;
            *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
        }
        else {
            lVar13 = -1;
            do {
                lVar13 = lVar13 + 1;
            } while (*(char *)(lVar24 + lVar13) != '\0');
            FUN_140058710(lVar10,lVar24,lVar13);
        }
        if (CONCAT44(uStack116,local_78) != 0) {
            FUN_14018b900(CONCAT44(uStack116,local_78),0);
        }
        puVar4 = *(undefined4 **)(lVar10 + 0x10);
        *puVar4 = 0;
        puVar4[2] = 1;
        *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
        uVar11 = FUN_1400580e0(lVar10,0xfffffffd);
        FUN_14005ea50(lVar10,uVar11,*(longlong *)(lVar10 + 0x10) + -0x20,
                      *(longlong *)(lVar10 + 0x10) + -0x10);
        *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + -0x20;
        plVar1 = (longlong *)(*(longlong *)(param_4 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
        lVar10 = FUN_140636c40();
        if (lVar10 != 0) {
            FUN_140634870(lVar10,&local_a0,param_5);
            lVar21 = local_90;
            uVar7 = local_98;
        }
    }
    else {
        lVar13 = FUN_14018f0e0(&local_80,L"bRewardsLocked");
        lVar24 = -1;
        if (*(longlong *)(lVar13 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + 8) = 0;
            *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
        }
        else {
            lVar22 = -1;
            do {
                lVar22 = lVar22 + 1;
            } while (*(char *)(*(longlong *)(lVar13 + 8) + lVar22) != '\0');
            FUN_140058710(lVar10);
        }
        if (CONCAT44(uStack116,local_78) != 0) {
            FUN_14018b900(CONCAT44(uStack116,local_78),0);
        }
        puVar4 = *(undefined4 **)(lVar10 + 0x10);
        *puVar4 = 1;
        puVar4[2] = 1;
        *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
        FUN_1400580e0(lVar10,0xfffffffd);
        FUN_14005ea50(lVar10);
        *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + -0x20;
        plVar1 = (longlong *)(*(longlong *)(param_4 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
        if (uVar19 != 0) {
            pcVar14 = (char *)(local_b0 + 0xc);
            fVar26 = 1.0;
            local_res8 = local_a8;
            pcVar23 = pcVar14;
            do {
                lVar21 = *(longlong *)(param_4 + 0x10);
                local_68 = 1;
                local_80 = &PTR_FUN_140b569f0;
                local_70 = lVar21;
                if (*(ulonglong *)(*(longlong *)(lVar21 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(lVar21 + 0x20) + 0x78)) {
                    FUN_14005e2c0(lVar21);
                }
                puVar3 = *(undefined8 **)(lVar21 + 0x10);
                uVar11 = FUN_14005c1b0(lVar21);
                *(undefined4 *)(puVar3 + 1) = 5;
                *puVar3 = uVar11;
                *(longlong *)(lVar21 + 0x10) = *(longlong *)(lVar21 + 0x10) + 0x10;
                uVar8 = FUN_1400578c0(lVar21);
                cVar2 = *pcVar23;
                uVar7 = *(undefined4 *)(pcVar23 + -4);
                local_78 = uVar8;
                if (cVar2 == '\x01') {
                    lVar10 = FUN_14022ff80(uVar7);
                    if (lVar10 != 0) {
                        iVar9 = FUN_140639710();
                        goto LAB_140639350;
                    }
                }
                else if (cVar2 == '\x02') {
                    lVar10 = FUN_1402303c0(uVar7);
                    if (lVar10 != 0) {
                        iVar9 = FUN_140639c80();
                        goto LAB_140639350;
                    }
                }
                else if ((cVar2 == '\x03') && (lVar10 = FUN_140230800(uVar7), lVar10 != 0)) {
                    iVar9 = FUN_140639e60();
                    LAB_140639350:
                    if (iVar9 != 0) {
                        cVar2 = *pcVar23;
                        if (cVar2 == '\x01') {
                            LAB_140639372:
                            uVar15 = 1;
                        }
                        else if (cVar2 == '\x02') {
                            uVar15 = 0x80000000;
                        }
                        else {
                            uVar15 = 0;
                            if (cVar2 == '\x03') goto LAB_140639372;
                        }
                        uVar15 = (uint)((*(uint *)(pcVar23 + 4) & uVar15) != 0);
                        if (cVar2 == '\x02') {
                            uVar15 = 0;
                        }
                        puVar12 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar21 + 0x20) + 0xa0),uVar8);
                        puVar3 = *(undefined8 **)(lVar21 + 0x10);
                        *puVar3 = *puVar12;
                        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar12 + 1);
                        *(longlong *)(lVar21 + 0x10) = *(longlong *)(lVar21 + 0x10) + 0x10;
                        lVar13 = FUN_14018f0e0(&local_80,L"bAlreadyGranted");
                        lVar10 = lVar24;
                        if (*(longlong *)(lVar13 + 8) == 0) {
                            *(undefined4 *)(*(longlong *)(lVar21 + 0x10) + 8) = 0;
                            *(longlong *)(lVar21 + 0x10) = *(longlong *)(lVar21 + 0x10) + 0x10;
                        }
                        else {
                            do {
                                lVar10 = lVar10 + 1;
                            } while (*(char *)(*(longlong *)(lVar13 + 8) + lVar10) != '\0');
                            FUN_140058710(lVar21);
                        }
                        fVar25 = fVar26;
                        if (CONCAT44(uStack116,local_78) != 0) {
                            FUN_14018b900(CONCAT44(uStack116,local_78),0);
                            fVar25 = fVar26;
                        }
                        puVar5 = *(uint **)(lVar21 + 0x10);
                        puVar5[2] = 1;
                        *puVar5 = (uint)(uVar15 != 0);
                        *(longlong *)(lVar21 + 0x10) = *(longlong *)(lVar21 + 0x10) + 0x10;
                        FUN_1400580e0(lVar21,0xfffffffd);
                        FUN_14005ea50();
                        *(longlong *)(lVar21 + 0x10) =
                                (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar21 + 0x10));
                        pcVar18 = pcVar14;
                        uVar19 = local_a8;
                        fVar26 = fVar25;
                        if (*pcVar23 == '\x02') {
                            do {
                                uVar17 = uVar19;
                                if ((((*pcVar18 == '\x03') && ((*(uint *)(pcVar18 + 4) & 1) == 0)) &&
                                     (lVar10 = FUN_140230800(), lVar10 != 0)) && (*(int *)(lVar10 + 4) == 0x26)) {
                                    fVar25 = fVar25 * *(float *)(lVar10 + 0xc);
                                }
                                uVar19 = uVar17 - 1;
                                pcVar18 = pcVar18 + 0x14;
                            } while (uVar19 != 0);
                            puVar12 = (undefined8 *)
                                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar21 + 0x20) + 0xa0),uVar8);
                            puVar3 = *(undefined8 **)(lVar21 + 0x10);
                            *puVar3 = *puVar12;
                            *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar12 + 1);
                            *(longlong *)(lVar21 + 0x10) = *(longlong *)(lVar21 + 0x10) + 0x10;
                            lVar10 = FUN_14018f0e0(&local_80,L"nMultiplier");
                            lVar24 = uVar17 - 2;
                            lVar10 = *(longlong *)(lVar10 + 8);
                            lVar13 = lVar24;
                            if (lVar10 == 0) {
                                *(undefined4 *)(*(longlong *)(lVar21 + 0x10) + 8) = 0;
                            }
                            else {
                                do {
                                    lVar13 = lVar13 + 1;
                                } while (*(char *)(lVar10 + lVar13) != '\0');
                                if (*(ulonglong *)(*(longlong *)(lVar21 + 0x20) + 0x70) <=
                                    *(ulonglong *)(*(longlong *)(lVar21 + 0x20) + 0x78)) {
                                    FUN_14005e2c0(lVar21);
                                }
                                puVar3 = *(undefined8 **)(lVar21 + 0x10);
                                uVar11 = FUN_140062650(lVar21,lVar10,lVar13);
                                *(undefined4 *)(puVar3 + 1) = 4;
                                *puVar3 = uVar11;
                            }
                            *(longlong *)(lVar21 + 0x10) = *(longlong *)(lVar21 + 0x10) + 0x10;
                            if (CONCAT44(uStack116,local_78) != 0) {
                                FUN_14018b900(CONCAT44(uStack116,local_78),0);
                            }
                            pdVar6 = *(double **)(lVar21 + 0x10);
                            *(undefined4 *)(pdVar6 + 1) = 3;
                            *pdVar6 = (double)fVar25;
                            *(longlong *)(lVar21 + 0x10) = *(longlong *)(lVar21 + 0x10) + 0x10;
                            FUN_1400580e0(lVar21,0xfffffffd);
                            FUN_14005ea50(lVar21);
                            *(longlong *)(lVar21 + 0x10) =
                                    (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar21 + 0x10));
                        }
                        FUN_1400fb1d0(&local_a0);
                    }
                }
                FUN_1400579e0(lVar21);
                pcVar23 = pcVar23 + 0x14;
                local_res8 = local_res8 - 1;
                lVar21 = local_90;
                uVar7 = local_98;
            } while (local_res8 != 0);
        }
    }
    FUN_1400fb2a0(param_4,L"arRewards",uVar7);
    if (lVar21 != 0) {
        FUN_1400579e0(lVar21);
    }
    if (local_b0 != 0) {
        (**(code **)(*(longlong *)(local_b0 + -0x10) + 8))(local_b0 + -0x10);
    }
    return;
}



undefined8 FUN_140639710(longlong param_1,longlong param_2,int param_3)

{
    longlong *plVar1;
    undefined8 *puVar2;
    byte bVar3;
    uint uVar4;
    int iVar5;
    undefined8 *puVar6;
    ulonglong *puVar7;
    longlong lVar8;
    undefined8 uVar9;
    longlong lVar10;
    ulonglong uVar11;
    longlong lVar12;
    undefined8 local_28;
    undefined4 local_20;
    undefined4 uStack28;
    undefined4 local_18;
    undefined4 uStack20;

    lVar12 = 0;
    if (*(longlong *)(DAT_140c65898 + 0x78) == 0) {
        uVar4 = 0;
    }
    else {
        uVar4 = *(uint *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x38);
    }
    if (uVar4 <= *(uint *)(param_1 + 0x18) && *(uint *)(param_1 + 0x18) != uVar4) {
        return 0;
    }
    if (param_3 == 0) {
        bVar3 = *(byte *)(param_1 + 0x1c) & 1;
    }
    else {
        bVar3 = *(byte *)(param_1 + 0x1c) & 2;
    }
    if (bVar3 == 0) {
        return 0;
    }
    iVar5 = *(int *)(param_1 + 4);
    if (iVar5 == 1) {
        lVar8 = *(longlong *)(param_2 + 0x10);
        puVar6 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar2 = *(undefined8 **)(lVar8 + 0x10);
        *puVar2 = *puVar6;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
        FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar2,L"nRewardType",1);
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
        lVar8 = *(longlong *)(param_2 + 0x10);
        uVar11 = (ulonglong)*(uint *)(param_1 + 4);
        puVar6 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar2 = *(undefined8 **)(lVar8 + 0x10);
        *puVar2 = *puVar6;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
        FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar2,L"nRewardItemType",uVar11 & 0xffffffff);
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
        uVar11 = *(ulonglong *)(param_1 + 0x10);
        if ((uVar11 != 0) && (uVar11 <= DAT_140c3fe70)) {
            lVar12 = DAT_140c3fe68 + uVar11;
        }
        lVar8 = *(longlong *)(param_2 + 0x10);
        puVar6 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar2 = *(undefined8 **)(lVar8 + 0x10);
        *puVar2 = *puVar6;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
        FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar2,L"strIcon",lVar12);
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
        local_20 = *(undefined4 *)(param_1 + 8);
        uVar4 = *(uint *)(param_1 + 0xc);
        lVar12 = *(longlong *)(param_2 + 0x10);
        uStack28 = 0;
        local_18 = 0;
        uStack20 = 0;
        puVar7 = (ulonglong *)FUN_140059170(lVar12,0x18);
        *puVar7 = (ulonglong)uVar4;
        puVar7[1] = CONCAT44(uStack28,local_20);
        puVar7[2] = CONCAT44(uStack20,local_18);
        lVar8 = *(longlong *)(lVar12 + 0x20);
        local_28 = FUN_140062650(lVar12,"Game.Money",10);
        local_20 = 4;
        FUN_14005e8e0(lVar12,lVar8 + 0xa0,&local_28,*(undefined8 *)(lVar12 + 0x10));
        *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
        FUN_140058bf0(lVar12,0xfffffffe);
        FUN_1400fb540(param_2,L"monReward");
        LAB_140639aad:
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
        LAB_140639ab6:
        uVar9 = 1;
    }
    else {
        if (iVar5 == 2) {
            lVar8 = FUN_1400b5df0(DAT_140c658f0,*(undefined4 *)(param_1 + 8),0);
            if (lVar8 != 0) {
                lVar10 = *(longlong *)(param_2 + 0x10);
                puVar6 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),
                                      *(undefined4 *)(param_2 + 8));
                puVar2 = *(undefined8 **)(lVar10 + 0x10);
                *puVar2 = *puVar6;
                *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar6 + 1);
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar2,L"nRewardType",1);
                plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
                *plVar1 = *plVar1 + -0x10;
                lVar10 = *(longlong *)(param_2 + 0x10);
                uVar11 = (ulonglong)*(uint *)(param_1 + 4);
                puVar6 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),
                                      *(undefined4 *)(param_2 + 8));
                puVar2 = *(undefined8 **)(lVar10 + 0x10);
                *puVar2 = *puVar6;
                *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar6 + 1);
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar2,L"nRewardItemType",uVar11 & 0xffffffff)
                        ;
                plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
                *plVar1 = *plVar1 + -0x10;
                uVar11 = *(ulonglong *)(param_1 + 0x10);
                if ((uVar11 != 0) && (uVar11 <= DAT_140c3fe70)) {
                    lVar12 = DAT_140c3fe68 + uVar11;
                }
                lVar10 = *(longlong *)(param_2 + 0x10);
                puVar6 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),
                                      *(undefined4 *)(param_2 + 8));
                puVar2 = *(undefined8 **)(lVar10 + 0x10);
                *puVar2 = *puVar6;
                *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar6 + 1);
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar2,L"strIcon",lVar12);
                plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
                *plVar1 = *plVar1 + -0x10;
                iVar5 = FUN_140415c70(*(undefined8 *)(param_2 + 0x10),lVar8);
                if (iVar5 != 0) {
                    FUN_1400fb540(param_2,L"itemReward");
                    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
                    *plVar1 = *plVar1 + -0x10;
                }
                lVar12 = *(longlong *)(param_2 + 0x10);
                uVar11 = (ulonglong)*(uint *)(param_1 + 0xc);
                puVar6 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar12 + 0x20) + 0xa0),
                                      *(undefined4 *)(param_2 + 8));
                puVar2 = *(undefined8 **)(lVar12 + 0x10);
                *puVar2 = *puVar6;
                *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar6 + 1);
                *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
                FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar2,L"nCount",uVar11 & 0xffffffff);
                goto LAB_140639aad;
            }
        }
        else if (iVar5 == 3) {
            lVar8 = *(longlong *)(param_2 + 0x10);
            puVar6 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),
                                  *(undefined4 *)(param_2 + 8));
            puVar2 = *(undefined8 **)(lVar8 + 0x10);
            *puVar2 = *puVar6;
            *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar6 + 1);
            *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
            FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar2,L"nRewardType",1);
            plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
            *plVar1 = *plVar1 + -0x10;
            lVar8 = *(longlong *)(param_2 + 0x10);
            uVar11 = (ulonglong)*(uint *)(param_1 + 4);
            puVar6 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),
                                  *(undefined4 *)(param_2 + 8));
            puVar2 = *(undefined8 **)(lVar8 + 0x10);
            *puVar2 = *puVar6;
            *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar6 + 1);
            *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
            FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar2,L"nRewardItemType",uVar11 & 0xffffffff);
            plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
            *plVar1 = *plVar1 + -0x10;
            uVar11 = *(ulonglong *)(param_1 + 0x10);
            if ((uVar11 != 0) && (uVar11 <= DAT_140c3fe70)) {
                lVar12 = DAT_140c3fe68 + uVar11;
            }
            lVar8 = *(longlong *)(param_2 + 0x10);
            puVar6 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),
                                  *(undefined4 *)(param_2 + 8));
            puVar2 = *(undefined8 **)(lVar8 + 0x10);
            *puVar2 = *puVar6;
            *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar6 + 1);
            *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
            FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar2,L"strIcon",lVar12);
            plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
            *plVar1 = *plVar1 + -0x10;
            uStack20 = *(undefined4 *)(param_1 + 8);
            uVar4 = *(uint *)(param_1 + 0xc);
            lVar12 = *(longlong *)(param_2 + 0x10);
            local_20 = 0xf;
            uStack28 = 0;
            local_18 = 0;
            puVar7 = (ulonglong *)FUN_140059170(lVar12,0x18);
            *puVar7 = (ulonglong)uVar4;
            puVar7[1] = CONCAT44(uStack28,local_20);
            puVar7[2] = CONCAT44(uStack20,local_18);
            lVar8 = *(longlong *)(lVar12 + 0x20);
            local_28 = FUN_140062650(lVar12,"Game.Money",10);
            local_20 = 4;
            FUN_14005e8e0(lVar12,lVar8 + 0xa0,&local_28,*(undefined8 *)(lVar12 + 0x10));
            *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
            FUN_140058bf0(lVar12,0xfffffffe);
            FUN_1400fb540(param_2,L"monReward");
            plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
            *plVar1 = *plVar1 + -0x10;
            goto LAB_140639ab6;
        }
        uVar9 = 0;
    }
    return uVar9;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_140639c80(longlong param_1,longlong param_2,int param_3)

{
    longlong *plVar1;
    ulonglong uVar2;
    byte bVar3;
    uint uVar4;
    undefined8 *puVar5;
    longlong lVar6;
    undefined8 *puVar7;
    longlong lVar8;
    undefined8 local_28;
    undefined8 local_20;
    undefined4 local_18;
    undefined4 uStack20;

    lVar8 = 0;
    uVar4 = 0;
    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        uVar4 = *(uint *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x38);
    }
    if (*(uint *)(param_1 + 8) < uVar4 || *(uint *)(param_1 + 8) == uVar4) {
        if (param_3 == 0) {
            bVar3 = *(byte *)(param_1 + 0xc) & 1;
        }
        else {
            bVar3 = *(byte *)(param_1 + 0xc) & 2;
        }
        if (bVar3 != 0) {
            lVar6 = *(longlong *)(param_2 + 0x10);
            puVar5 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0xa0),
                                  *(undefined4 *)(param_2 + 8));
            puVar7 = *(undefined8 **)(lVar6 + 0x10);
            *puVar7 = *puVar5;
            *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar5 + 1);
            *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
            FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar7,L"nRewardType",2);
            plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
            *plVar1 = *plVar1 + -0x10;
            lVar6 = FUN_1401e87e0(*(undefined4 *)(param_1 + 4));
            if (((lVar6 != 0) && (uVar2 = *(ulonglong *)(lVar6 + 8), uVar2 != 0)) &&
                (uVar2 <= DAT_140c3fe70)) {
                lVar8 = DAT_140c3fe68 + uVar2;
            }
            lVar6 = *(longlong *)(param_2 + 0x10);
            puVar5 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0xa0),
                                  *(undefined4 *)(param_2 + 8));
            puVar7 = *(undefined8 **)(lVar6 + 0x10);
            *puVar7 = *puVar5;
            *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar5 + 1);
            *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
            FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar7,L"strIcon",lVar8);
            local_18 = 0;
            plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
            *plVar1 = *plVar1 + -0x10;
            lVar8 = *(longlong *)(param_2 + 0x10);
            uStack20 = *(undefined4 *)(param_1 + 4);
            local_20 = 0xf;
            puVar7 = (undefined8 *)FUN_140059170(lVar8,0x18);
            *puVar7 = 1;
            puVar7[1] = local_20;
            puVar7[2] = CONCAT44(uStack20,local_18);
            lVar6 = *(longlong *)(lVar8 + 0x20);
            local_28 = FUN_140062650(lVar8,"Game.Money",10);
            local_20 = CONCAT44(local_20._4_4_,4);
            FUN_14005e8e0(lVar8,lVar6 + 0xa0,&local_28,*(undefined8 *)(lVar8 + 0x10));
            *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
            FUN_140058bf0(lVar8,0xfffffffe);
            FUN_1400fb540(param_2,L"monReward");
            plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
            *plVar1 = *plVar1 + -0x10;
            return 1;
        }
    }
    return 0;
}



undefined8 FUN_140639e60(longlong param_1,longlong param_2,int param_3)

{
    longlong *plVar1;
    undefined8 *puVar2;
    double *pdVar3;
    byte bVar4;
    uint uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    undefined8 uVar8;
    longlong lVar9;
    longlong lVar10;
    ulonglong uVar11;
    float fVar12;
    undefined local_38 [8];
    longlong local_30;

    if (*(int *)(param_1 + 4) != 0x26) {
        if (*(longlong *)(DAT_140c65898 + 0x78) == 0) {
            uVar5 = 0;
        }
        else {
            uVar5 = *(uint *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x38);
        }
        if (*(uint *)(param_1 + 0x10) < uVar5 || *(uint *)(param_1 + 0x10) == uVar5) {
            if (param_3 == 0) {
                bVar4 = *(byte *)(param_1 + 0x14) & 1;
            }
            else {
                bVar4 = *(byte *)(param_1 + 0x14) & 2;
            }
            if (bVar4 != 0) {
                lVar10 = *(longlong *)(param_2 + 0x10);
                puVar6 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),
                                      *(undefined4 *)(param_2 + 8));
                puVar2 = *(undefined8 **)(lVar10 + 0x10);
                *puVar2 = *puVar6;
                *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar6 + 1);
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar2,L"nRewardType",3);
                plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
                *plVar1 = *plVar1 + -0x10;
                lVar10 = *(longlong *)(param_2 + 0x10);
                uVar11 = (ulonglong)*(uint *)(param_1 + 4);
                puVar6 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),
                                      *(undefined4 *)(param_2 + 8));
                puVar2 = *(undefined8 **)(lVar10 + 0x10);
                *puVar2 = *puVar6;
                *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar6 + 1);
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar2,L"eRewardProperty",uVar11 & 0xffffffff)
                        ;
                plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
                *plVar1 = *plVar1 + -0x10;
                lVar10 = *(longlong *)(param_2 + 0x10);
                uVar11 = (ulonglong)*(uint *)(param_1 + 8);
                puVar6 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),
                                      *(undefined4 *)(param_2 + 8));
                puVar2 = *(undefined8 **)(lVar10 + 0x10);
                *puVar2 = *puVar6;
                *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar6 + 1);
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar2,L"nObjectId",uVar11 & 0xffffffff);
                plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
                *plVar1 = *plVar1 + -0x10;
                lVar10 = *(longlong *)(param_2 + 0x10);
                puVar6 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),
                                      *(undefined4 *)(param_2 + 8));
                puVar2 = *(undefined8 **)(lVar10 + 0x10);
                *puVar2 = *puVar6;
                *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar6 + 1);
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar2,L"eValueType",2);
                plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
                *plVar1 = *plVar1 + -0x10;
                lVar10 = *(longlong *)(param_2 + 0x10);
                fVar12 = *(float *)(param_1 + 0xc);
                puVar6 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),
                                      *(undefined4 *)(param_2 + 8));
                puVar2 = *(undefined8 **)(lVar10 + 0x10);
                *puVar2 = *puVar6;
                *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar6 + 1);
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                lVar10 = *(longlong *)(param_2 + 0x10);
                lVar7 = FUN_14018f0e0(local_38,L"nValue");
                if (*(longlong *)(lVar7 + 8) == 0) {
                    *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + 8) = 0;
                    *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                }
                else {
                    lVar9 = -1;
                    do {
                        lVar9 = lVar9 + 1;
                    } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar9) != '\0');
                    FUN_140058710(lVar10);
                }
                if (local_30 != 0) {
                    FUN_14018b900(local_30,0);
                }
                pdVar3 = *(double **)(lVar10 + 0x10);
                *(undefined4 *)(pdVar3 + 1) = 3;
                *pdVar3 = (double)fVar12;
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                uVar8 = FUN_1400580e0(lVar10,0xfffffffd);
                FUN_14005ea50(lVar10,uVar8,*(longlong *)(lVar10 + 0x10) + -0x20,
                              *(longlong *)(lVar10 + 0x10) + -0x10);
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + -0x20;
                plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
                *plVar1 = *plVar1 + -0x10;
                return 1;
            }
        }
    }
    return 0;
}



void FUN_14063a0e0(longlong param_1,int *param_2)

{
    char cVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    uint uVar5;
    int *piVar6;
    longlong local_res10;

    cVar1 = *(char *)(param_2 + 3);
    uVar5 = 0;
    if (cVar1 != '\x01') {
        if (cVar1 == '\x02') {
            uVar5 = 0x80000000;
            goto LAB_14063a102;
        }
        if (cVar1 != '\x03') goto LAB_14063a102;
    }
    uVar5 = 1;
    LAB_14063a102:
    if ((param_2[4] & uVar5) != 0) {
        lVar2 = *(longlong *)((longlong)*param_2 * 0x20 + 8 + param_1);
        local_res10 = lVar2;
        if (*(longlong *)(lVar2 + 8) != 0) {
            lVar3 = *(longlong *)(lVar2 + 8);
            do {
                if (*(uint *)(lVar3 + 0x20) < (uint)param_2[1]) {
                    lVar4 = *(longlong *)(lVar3 + 0x18);
                }
                else {
                    lVar4 = *(longlong *)(lVar3 + 0x10);
                    local_res10 = lVar3;
                }
                lVar3 = lVar4;
            } while (lVar4 != 0);
        }
        if ((local_res10 == lVar2) || ((uint)param_2[1] < *(uint *)(local_res10 + 0x20))) {
            local_res10 = lVar2;
        }
        if (local_res10 != lVar2) {
            if (cVar1 == '\x01') {
                piVar6 = **(int ***)(local_res10 + 0x28);
                if (piVar6 != piVar6 + (longlong)(*(int ***)(local_res10 + 0x28))[1] * 6) {
                    do {
                        if (*piVar6 == param_2[2]) {
                            piVar6[4] = 1;
                        }
                        piVar6 = piVar6 + 6;
                    } while (piVar6 != (int *)(**(longlong **)(local_res10 + 0x28) +
                                               (*(longlong **)(local_res10 + 0x28))[1] * 0x18));
                }
            }
            else if (cVar1 == '\x02') {
                piVar6 = *(int **)(*(longlong *)(local_res10 + 0x28) + 0x10);
                if (piVar6 != piVar6 + *(longlong *)(*(longlong *)(local_res10 + 0x28) + 0x18) * 6) {
                    do {
                        if (*piVar6 == param_2[2]) {
                            piVar6[4] = 1;
                        }
                        piVar6 = piVar6 + 6;
                    } while (piVar6 != (int *)(*(longlong *)(*(longlong *)(local_res10 + 0x28) + 0x10) +
                                               *(longlong *)(*(longlong *)(local_res10 + 0x28) + 0x18) * 0x18))
                            ;
                    return;
                }
            }
            else if ((cVar1 == '\x03') &&
                     (piVar6 = *(int **)(*(longlong *)(local_res10 + 0x28) + 0x20),
                             piVar6 != piVar6 + *(longlong *)(*(longlong *)(local_res10 + 0x28) + 0x28) * 6)) {
                do {
                    if (*piVar6 == param_2[2]) {
                        piVar6[4] = 1;
                    }
                    piVar6 = piVar6 + 6;
                } while (piVar6 != (int *)(*(longlong *)(*(longlong *)(local_res10 + 0x28) + 0x20) +
                                           *(longlong *)(*(longlong *)(local_res10 + 0x28) + 0x28) * 0x18));
                return;
            }
        }
    }
    return;
}



void FUN_14063a270(longlong param_1,int *param_2)

{
    char cVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    int *piVar5;
    longlong local_res8;

    lVar2 = *(longlong *)((longlong)*param_2 * 0x20 + 8 + param_1);
    local_res8 = lVar2;
    if (*(longlong *)(lVar2 + 8) != 0) {
        lVar3 = *(longlong *)(lVar2 + 8);
        do {
            if (*(uint *)(lVar3 + 0x20) < (uint)param_2[1]) {
                lVar4 = *(longlong *)(lVar3 + 0x18);
            }
            else {
                lVar4 = *(longlong *)(lVar3 + 0x10);
                local_res8 = lVar3;
            }
            lVar3 = lVar4;
        } while (lVar4 != 0);
    }
    if ((local_res8 == lVar2) || ((uint)param_2[1] < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar2;
    }
    if (local_res8 != lVar2) {
        cVar1 = *(char *)(param_2 + 3);
        if (cVar1 == '\x01') {
            piVar5 = **(int ***)(local_res8 + 0x28);
            if (piVar5 != piVar5 + (longlong)(*(int ***)(local_res8 + 0x28))[1] * 6) {
                do {
                    if (*piVar5 == param_2[2]) {
                        piVar5[4] = 0;
                    }
                    piVar5 = piVar5 + 6;
                } while (piVar5 != (int *)(**(longlong **)(local_res8 + 0x28) +
                                           (*(longlong **)(local_res8 + 0x28))[1] * 0x18));
            }
        }
        else if (cVar1 == '\x02') {
            piVar5 = *(int **)(*(longlong *)(local_res8 + 0x28) + 0x10);
            if (piVar5 != piVar5 + *(longlong *)(*(longlong *)(local_res8 + 0x28) + 0x18) * 6) {
                do {
                    if (*piVar5 == param_2[2]) {
                        piVar5[4] = 0;
                    }
                    piVar5 = piVar5 + 6;
                } while (piVar5 != (int *)(*(longlong *)(*(longlong *)(local_res8 + 0x28) + 0x10) +
                                           *(longlong *)(*(longlong *)(local_res8 + 0x28) + 0x18) * 0x18));
                return;
            }
        }
        else if ((cVar1 == '\x03') &&
                 (piVar5 = *(int **)(*(longlong *)(local_res8 + 0x28) + 0x20),
                         piVar5 != piVar5 + *(longlong *)(*(longlong *)(local_res8 + 0x28) + 0x28) * 6)) {
            do {
                if (*piVar5 == param_2[2]) {
                    piVar5[4] = 0;
                }
                piVar5 = piVar5 + 6;
            } while (piVar5 != (int *)(*(longlong *)(*(longlong *)(local_res8 + 0x28) + 0x20) +
                                       *(longlong *)(*(longlong *)(local_res8 + 0x28) + 0x28) * 0x18));
            return;
        }
    }
    return;
}



ulonglong * FUN_14063a3e0(longlong *param_1,undefined4 *param_2)

{
    ulonglong **ppuVar1;
    ulonglong *puVar2;
    ulonglong uVar3;
    ulonglong *puVar4;

    if (*param_1 == param_1[1]) {
        FUN_1400290d0();
    }
    uVar3 = (*(code *)param_1[3])(param_2);
    ppuVar1 = (ulonglong **)(param_1[2] + (uVar3 % (ulonglong)param_1[1]) * 8);
    puVar4 = (ulonglong *)FUN_14018b280();
    if (puVar4 == (ulonglong *)0x0) {
        puVar4 = (ulonglong *)0x0;
    }
    else {
        puVar2 = *ppuVar1;
        *puVar4 = uVar3;
        puVar4[1] = (ulonglong)puVar2;
        *(undefined4 *)(puVar4 + 2) = *param_2;
        puVar4[4] = 0;
        puVar4[3] = 0;
        puVar4[6] = 0;
        puVar4[5] = 0;
        puVar4[8] = 0;
        puVar4[7] = 0;
        puVar4[10] = 0;
        puVar4[9] = 0;
        puVar4[0xc] = 0;
        puVar4[0xb] = 0;
    }
    *ppuVar1 = puVar4;
    *param_1 = *param_1 + 1;
    return *ppuVar1 + 3;
}



void FUN_14063a490(undefined8 *param_1)

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
                lVar2 = *(longlong *)(lVar3 + 0x58);
                if (lVar2 != 0) {
                    (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
                }
                lVar2 = *(longlong *)(lVar3 + 0x48);
                if (lVar2 != 0) {
                    (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
                }
                lVar2 = *(longlong *)(lVar3 + 0x38);
                if (lVar2 != 0) {
                    (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
                }
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



longlong FUN_14063a590(longlong *param_1,undefined8 *param_2)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    lVar2 = param_1[1];
    lVar4 = FUN_14018db00(*param_1,lVar2 + 1,0x18);
    puVar1 = (undefined8 *)(lVar4 + lVar2 * 0x18);
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    if (*param_1 != lVar4) {
        FUN_1407db590(lVar4,*param_1,param_1[1] * 0x18);
        lVar3 = *param_1;
        if (lVar3 != 0) {
            (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
        }
        *param_1 = lVar4;
    }
    param_1[1] = lVar2 + 1;
    return lVar2;
}



void FUN_14063a640(longlong *param_1,longlong param_2)

{
    int iVar1;
    longlong lVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    lVar2 = *param_1 + param_2 * 0x18;
    uVar4 = param_1[1] - 1;
    FUN_1407db590(lVar2,lVar2 + 0x18,(uVar4 - param_2) * 0x18);
    puVar3 = (undefined8 *)*param_1;
    if (uVar4 == 0) goto LAB_14063a725;
    if (puVar3 == (undefined8 *)0x0) {
        lVar2 = uVar4 * 0x18 + 0x10;
        uVar5 = uVar4;
    }
    else {
        if (uVar4 < (ulonglong)puVar3[-1] || uVar4 == puVar3[-1]) goto LAB_14063a725;
        lVar2 = FUN_14018a3e0(uVar4 * 0x18 + 0x10);
        uVar5 = (lVar2 - 0x10U) / 0x18;
        lVar2 = uVar5 * 0x18 + 0x10;
        iVar1 = (**(code **)puVar3[-2])(puVar3 + -2,lVar2);
        if (iVar1 != 0) {
            puVar3[-1] = uVar5;
            goto LAB_14063a725;
        }
    }
    puVar3 = (undefined8 *)FUN_14018b280(lVar2,0);
    if (puVar3 != (undefined8 *)0x0) {
        puVar3[1] = uVar5;
        *puVar3 = &PTR_LAB_140b55060;
    }
    puVar3 = puVar3 + 2;
    LAB_14063a725:
    if ((undefined8 *)*param_1 != puVar3) {
        FUN_1407db590(puVar3,(undefined8 *)*param_1,uVar4 * 0x18);
        lVar2 = *param_1;
        if (lVar2 != 0) {
            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        *param_1 = (longlong)puVar3;
    }
    param_1[1] = uVar4;
    return;
}



longlong FUN_14063a760(longlong *param_1,undefined8 param_2,longlong param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar1 = param_1[1];
    if (param_3 != 0) {
        lVar3 = FUN_14018db00(*param_1,lVar1 + param_3,0x14);
        FUN_1407db590(lVar3 + lVar1 * 0x14,param_2,param_3 * 0x14);
        if (*param_1 != lVar3) {
            FUN_1407db590(lVar3,*param_1,param_1[1] * 0x14);
            lVar2 = *param_1;
            if (lVar2 != 0) {
                (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
            }
            *param_1 = lVar3;
        }
        param_1[1] = lVar1 + param_3;
    }
    return lVar1;
}



void FUN_14063a810(longlong *param_1,longlong param_2,undefined4 *param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar2 = param_1[1];
    lVar3 = FUN_14018db00(*param_1,lVar2 + 1,0x14);
    lVar1 = param_2 * 0x14;
    FUN_1407db590(lVar1 + 0x14 + lVar3,*param_1 + lVar1,(param_1[1] - param_2) * 0x14);
    *(undefined4 *)(lVar1 + lVar3) = *param_3;
    *(undefined4 *)(lVar1 + 4 + lVar3) = param_3[1];
    *(undefined4 *)(lVar1 + 8 + lVar3) = param_3[2];
    *(undefined4 *)(lVar1 + 0xc + lVar3) = param_3[3];
    *(undefined4 *)(lVar1 + 0x10 + lVar3) = param_3[4];
    if (*param_1 != lVar3) {
        FUN_1407db590(lVar3,*param_1,lVar1);
        lVar1 = *param_1;
        if (lVar1 != 0) {
            (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        }
        *param_1 = lVar3;
    }
    param_1[1] = lVar2 + 1;
    return;
}



void FUN_14063a8f0(longlong *param_1)

{
    ulonglong *puVar1;
    ulonglong uVar2;
    longlong lVar3;
    longlong lVar4;
    undefined8 uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    undefined8 *puVar8;
    undefined8 *puVar9;
    ulonglong uVar10;
    longlong local_28;
    undefined *local_20;
    undefined8 local_18;
    longlong local_10;

    uVar2 = param_1[1];
    if (1 < uVar2) {
        local_28 = *param_1;
        uVar10 = 0;
        local_20 = &LAB_140634830;
        local_18 = 0;
        uVar5 = SUB168(ZEXT816(8) * ZEXT816(uVar2),0);
        if (SUB168(ZEXT816(8) * ZEXT816(uVar2) >> 0x40,0) != 0) {
            uVar5 = 0xffffffffffffffff;
        }
        local_10 = FUN_14018b280(uVar5,0);
        if (uVar2 != 0) {
            uVar7 = uVar10;
            if (1 < uVar2) {
                uVar6 = uVar10;
                do {
                    uVar7 = uVar6 + 2;
                    puVar1 = (ulonglong *)(local_10 + -0x10 + uVar7 * 8);
                    *puVar1 = uVar6;
                    puVar1[1] = uVar6 + 1;
                    uVar6 = uVar7;
                } while (uVar7 < uVar2 - ((uint)uVar2 & 1));
            }
            for (; uVar7 < uVar2; uVar7 = uVar7 + 1) {
                *(ulonglong *)(local_10 + uVar7 * 8) = uVar7;
            }
        }
        FUN_14001fec0(&LAB_14063ace0,local_10,uVar2,&local_28);
        lVar3 = param_1[1];
        if (lVar3 == 0) {
            puVar9 = (undefined8 *)0x0;
        }
        else {
            puVar8 = (undefined8 *)FUN_14018b280(lVar3 * 0x14 + 0x10,0);
            if (puVar8 == (undefined8 *)0x0) {
                puVar9 = (undefined8 *)&DAT_00000010;
            }
            else {
                puVar8[1] = lVar3;
                puVar9 = puVar8 + 2;
                *puVar8 = &PTR_LAB_140b55060;
            }
        }
        puVar8 = puVar9;
        if (param_1[1] != 0) {
            do {
                uVar10 = uVar10 + 1;
                lVar4 = *(longlong *)(local_10 + -8 + uVar10 * 8);
                lVar3 = *param_1 + lVar4 * 0x14;
                *(undefined4 *)puVar8 = *(undefined4 *)(*param_1 + lVar4 * 0x14);
                *(undefined4 *)((longlong)puVar8 + 4) = *(undefined4 *)(lVar3 + 4);
                *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(lVar3 + 8);
                *(undefined4 *)((longlong)puVar8 + 0xc) = *(undefined4 *)(lVar3 + 0xc);
                *(undefined4 *)(puVar8 + 2) = *(undefined4 *)(lVar3 + 0x10);
                puVar8 = (undefined8 *)((longlong)puVar8 + 0x14);
            } while (uVar10 < (ulonglong)param_1[1]);
        }
        lVar3 = *param_1;
        if (lVar3 != 0) {
            (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
        }
        *param_1 = (longlong)puVar9;
        FUN_14018b900(local_10,0);
    }
    return;
}



bool FUN_14063aa90(longlong param_1,int param_2,int param_3,uint param_4,int *param_5)

{
    int *piVar1;
    char cVar2;
    int *piVar3;
    uint uVar4;

    piVar3 = *(int **)(param_1 + 0x140);
    piVar1 = piVar3 + *(longlong *)(param_1 + 0x148) * 5;
    while( true ) {
        if (piVar3 == piVar1) {
            return false;
        }
        if ((((*piVar3 == param_2) && (piVar3[1] == param_3)) && (*(byte *)(piVar3 + 3) == param_4)) &&
            (piVar3[2] == *param_5)) break;
        piVar3 = piVar3 + 5;
    }
    cVar2 = *(char *)(piVar3 + 3);
    uVar4 = 0;
    if (cVar2 != '\x01') {
        if (cVar2 == '\x02') {
            return (piVar3[4] & 0x80000000U) != 0;
        }
        if (cVar2 != '\x03') goto LAB_14063aaf3;
    }
    uVar4 = 1;
    LAB_14063aaf3:
    return (piVar3[4] & uVar4) != 0;
}



void FUN_14063ab20(longlong param_1,undefined8 param_2,uint param_3)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    undefined8 uVar5;
    longlong local_res8;

    lVar2 = *(longlong *)(DAT_140c65988 + 0x10);
    local_res8 = lVar2;
    lVar3 = *(longlong *)(lVar2 + 8);
    while (lVar3 != 0) {
        if (*(uint *)(lVar3 + 0x20) < param_3) {
            lVar3 = *(longlong *)(lVar3 + 0x18);
        }
        else {
            local_res8 = lVar3;
            lVar3 = *(longlong *)(lVar3 + 0x10);
        }
    }
    if ((local_res8 == lVar2) || (param_3 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar2;
    }
    if (local_res8 == lVar2) {
        uVar5 = 0;
    }
    else {
        uVar5 = *(undefined8 *)(local_res8 + 0x28);
    }
    iVar4 = FUN_140432c80(*(undefined8 *)(param_1 + 0x10),uVar5);
    if (iVar4 != 0) {
        FUN_1400fb540(param_1,param_2);
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
    }
    return;
}



void FUN_14063abc0(longlong *param_1,longlong param_2)

{
    int iVar1;
    longlong lVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    lVar2 = *param_1 + param_2 * 0x14;
    uVar4 = param_1[1] - 1;
    FUN_1407db590(lVar2,lVar2 + 0x14,(uVar4 - param_2) * 0x14);
    puVar3 = (undefined8 *)*param_1;
    if (uVar4 == 0) goto LAB_14063aca5;
    if (puVar3 == (undefined8 *)0x0) {
        lVar2 = uVar4 * 0x14 + 0x10;
        uVar5 = uVar4;
    }
    else {
        if (uVar4 < (ulonglong)puVar3[-1] || uVar4 == puVar3[-1]) goto LAB_14063aca5;
        lVar2 = FUN_14018a3e0(uVar4 * 0x14 + 0x10);
        uVar5 = (lVar2 - 0x10U) / 0x14;
        lVar2 = uVar5 * 0x14 + 0x10;
        iVar1 = (**(code **)puVar3[-2])(puVar3 + -2,lVar2);
        if (iVar1 != 0) {
            puVar3[-1] = uVar5;
            goto LAB_14063aca5;
        }
    }
    puVar3 = (undefined8 *)FUN_14018b280(lVar2,0);
    if (puVar3 != (undefined8 *)0x0) {
        puVar3[1] = uVar5;
        *puVar3 = &PTR_LAB_140b55060;
    }
    puVar3 = puVar3 + 2;
    LAB_14063aca5:
    if ((undefined8 *)*param_1 != puVar3) {
        FUN_1407db590(puVar3,(undefined8 *)*param_1,uVar4 * 0x14);
        lVar2 = *param_1;
        if (lVar2 != 0) {
            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        *param_1 = (longlong)puVar3;
    }
    param_1[1] = uVar4;
    return;
}



void FUN_14063ad00(short *param_1)

{
    short sVar1;
    BOOL BVar2;
    HWND hWndNewOwner;
    HGLOBAL hMem;
    short *hMem_00;
    longlong lVar3;
    longlong lVar4;

    hWndNewOwner = GetDesktopWindow();
    BVar2 = OpenClipboard(hWndNewOwner);
    if (BVar2 != 0) {
        lVar3 = 0;
        sVar1 = *param_1;
        lVar4 = lVar3;
        while (sVar1 != 0) {
            lVar4 = lVar4 + 1;
            sVar1 = param_1[lVar4];
        }
        hMem = GlobalAlloc(0x2002,(longlong)((int)lVar4 + 3) * 2);
        if (hMem != (HGLOBAL)0x0) {
            hMem_00 = (short *)GlobalLock(hMem);
            if (hMem_00 != (short *)0x0) {
                lVar4 = (longlong)(int)lVar4;
                FUN_1407db590(hMem_00,param_1,lVar4 * 2);
                *(undefined4 *)(hMem_00 + lVar4) = 0xa000d;
                hMem_00[lVar4 + 2] = 0;
                EmptyClipboard();
                if (*hMem_00 != 0) {
                    do {
                        lVar3 = lVar3 + 1;
                    } while (hMem_00[lVar3] != 0);
                    if (lVar3 != 0) {
                        SetClipboardData(0xd,hMem_00);
                        GlobalUnlock(hMem);
                    }
                }
            }
            CloseClipboard();
        }
    }
    return;
}



undefined8 FUN_14063ae00(undefined8 param_1)

{
    undefined8 uVar1;

    uVar1 = FUN_14034bdd0(param_1,0xbd1e);
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&LAB_14063b860,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&LAB_14063b890,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&LAB_14063b980,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&LAB_14063b990,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&LAB_14063b9c0,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_14063b9f0,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_14063ba20,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_14063bb90,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_14063bbe0,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_14063bbe0,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_14063bdc0,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&DAT_14063ce90,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&LAB_14063cf50,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&LAB_14063cf70,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_14063d250,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&DAT_14063bfa0,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_14063ce40,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_14063cf90,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&LAB_14063ce20,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_14063c150,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_14063c060,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_14063c240,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_14063c490,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_14063c580,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_14063c670,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_14063c760,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_14063c850,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_14063c940,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_14063ca30,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_14063cb20,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&DAT_14063df50,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&LAB_14063e380,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&LAB_14063e3d0,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&LAB_14063e420,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_14063e440,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_14063e490,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&LAB_14063e510,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_14063e550,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_14063cc10,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&LAB_14063cfe0,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_14063d010,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_14063d040,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&DAT_14063d070,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&LAB_14063d220,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&LAB_14063d2a0,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&LAB_14063b990,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_14063d2d0,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&LAB_14063e640,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&DAT_14063e5d0,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_14063e5e0,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_14063e610,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_14063e610,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_14063e610,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&LAB_14063f2b0,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&DAT_14063f320,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&DAT_14063f320,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_14063f540,0);
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),L"eval",FUN_14063f210,
                  *(undefined8 *)(DAT_140c65898 + 0x7340));
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),&DAT_140b28cd0,FUN_14063e8a0,0);
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),L"strq",&DAT_14063ebd0,0);
    return 0;
}



undefined8 FUN_14063b7e0(longlong param_1,undefined4 *param_2)

{
    int iVar1;
    undefined8 uVar2;

    uVar2 = FUN_14034bdd0(param_1,0x4fc7e);
    iVar1 = FUN_14018e2c0(*(undefined8 *)(param_1 + 8),uVar2);
    if (iVar1 == 0) {
        if (param_2 != (undefined4 *)0x0) {
            *param_2 = 1;
        }
        return 0;
    }
    uVar2 = FUN_14034bdd0();
    iVar1 = FUN_14018e2c0(*(undefined8 *)(param_1 + 8),uVar2);
    if (iVar1 == 0) {
        if (param_2 != (undefined4 *)0x0) {
            *param_2 = 0;
        }
        return 0;
    }
    return 0x80004005;
}



void FUN_14063b9f0(longlong param_1)

{
    undefined8 local_res8 [4];

    local_res8[0] = *(undefined8 *)(param_1 + 8);
    FUN_1403f4900(DAT_140c65898,0x833,local_res8);
    return;
}



// WARNING: Removing unreachable block (ram,0x00014063baa5)

void FUN_14063ba20(undefined8 param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    longlong lVar5;
    undefined *local_38;
    undefined8 *local_30;
    undefined4 local_28 [2];
    undefined *local_20;
    undefined *local_18;
    undefined8 local_10;

    local_30 = (undefined8 *)FUN_14018b280(0x30);
    *local_30 = local_30;
    local_30[1] = local_30;
    FUN_14063d850(param_1,&local_38);
    puVar3 = local_30;
    lVar5 = 0;
    puVar4 = (undefined8 *)*local_30;
    if (puVar4 != local_30) {
        do {
            puVar4 = (undefined8 *)*puVar4;
            lVar5 = lVar5 + 1;
        } while (puVar4 != local_30);
        if (lVar5 != 0) {
            local_38 = &DAT_14063d450;
            local_20 = &DAT_14063d450;
            local_28[0] = 0;
            local_10 = 0;
            local_30 = (undefined8 *)&DAT_14063fb00;
            local_18 = &DAT_14063fb00;
            FUN_140195960(&DAT_140c4ee70,0x10,local_28);
            puVar4 = puVar3;
            do {
                lVar5 = DAT_140c7e648;
                puVar4 = (undefined8 *)puVar4[1];
                if (DAT_140c7e648 == DAT_140c7e650) {
                    FUN_14063f870();
                }
                else {
                    lVar1 = DAT_140c7e648 + -0x20;
                    if (lVar1 != 0) {
                        *(undefined8 *)(&DAT_ffffffffffffffe8 + DAT_140c7e648) = 0;
                        *(undefined8 *)(lVar5 + -0x10) = 0;
                        *(undefined8 *)(lVar5 + -8) = 0;
                        FUN_14001b240(lVar1,puVar4[3],puVar4[4]);
                    }
                    DAT_140c7e648 = DAT_140c7e648 + -0x20;
                }
            } while (puVar4 != (undefined8 *)*puVar3);
        }
    }
    puVar4 = (undefined8 *)*puVar3;
    while (puVar4 != puVar3) {
        puVar2 = (undefined8 *)*puVar4;
        if (puVar4[3] != 0) {
            FUN_14018b900(puVar4[3],0);
        }
        FUN_14018b900(puVar4,0);
        puVar4 = puVar2;
    }
    *puVar3 = puVar3;
    puVar3[1] = puVar3;
    FUN_14018b900(puVar3,0);
    return;
}



void FUN_14063bb90(void)

{
    undefined8 local_18;
    undefined8 local_10;

    if (*(longlong *)(DAT_140c65898 + 0x6c50) != 0) {
        local_18 = *(undefined8 *)(*(longlong *)(DAT_140c65898 + 0x6c50) + 0x48);
        local_10 = 1;
        FUN_1403f4740(DAT_140c65898,0x42b,&local_18);
    }
    return;
}



void FUN_14063bbe0(undefined8 param_1)

{
    short sVar1;
    longlong lVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    short *psVar6;
    short *psVar7;
    undefined local_98 [8];
    undefined *local_90;
    undefined local_88 [8];
    longlong local_80;
    undefined local_68 [8];
    short *local_60;
    short *local_58;
    undefined *local_40;
    longlong local_20;

    FUN_14040b680(local_88,param_1,0);
    psVar6 = local_60;
    local_60 = psVar6;
    if (local_60 == local_58) {
        uVar4 = 0;
        uVar3 = uVar4;
        if (*(longlong *)(DAT_140c65898 + 0x6490) != 0) {
            uVar3 = (ulonglong)*(uint *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x108);
        }
        lVar2 = FUN_1403d90d0(DAT_140c65898,uVar3);
        if ((lVar2 == 0) || (*(int *)(lVar2 + 0x80) != 0x14)) goto LAB_14063bd52;
        psVar7 = &DAT_140b7b704;
        if (*(short **)(lVar2 + 0x10) != (short *)0x0) {
            psVar7 = *(short **)(lVar2 + 0x10);
        }
        sVar1 = *psVar7;
        while (sVar1 != 0) {
            uVar4 = uVar4 + 1;
            sVar1 = psVar7[uVar4];
        }
        uVar3 = (longlong)local_58 - (longlong)psVar6 >> 1;
        uVar5 = (longlong)(psVar7 + uVar4) - (longlong)psVar7 >> 1;
        if (uVar3 < uVar5) {
            FUN_1407db590(psVar6,psVar7,uVar3 * 2);
            FUN_14001c310(local_68,psVar7 + uVar3,psVar7 + uVar4);
        }
        else {
            FUN_1407db590(psVar6,psVar7,uVar5 * 2);
            local_60 = psVar6;
            if (psVar6 + uVar5 != local_58) {
                FUN_1407db590(psVar6 + uVar5,local_58,2);
            }
        }
    }
    psVar6 = local_60;
    if ((local_60 != (short *)0x0) && (*local_60 != 0)) {
        local_90 = &DAT_1409f3bb4;
        if (local_40 != (undefined *)0x0) {
            local_90 = local_40;
        }
        FUN_1403f4900(DAT_140c65898,0x416,local_98);
    }
    LAB_14063bd52:
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    if (local_40 != (undefined *)0x0) {
        FUN_14018b900(local_40,0);
    }
    if (psVar6 != (short *)0x0) {
        FUN_14018b900(psVar6,0);
    }
    if (local_80 != 0) {
        FUN_14018b900(local_80,0);
    }
    return;
}



void FUN_14063bdc0(undefined8 param_1)

{
    short sVar1;
    longlong lVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    short *psVar6;
    short *psVar7;
    undefined local_98 [8];
    undefined *local_90;
    undefined local_88 [8];
    longlong local_80;
    undefined local_68 [8];
    short *local_60;
    short *local_58;
    undefined *local_40;
    longlong local_20;

    FUN_14040b680(local_88,param_1,0);
    psVar6 = local_60;
    local_60 = psVar6;
    if (local_60 == local_58) {
        uVar4 = 0;
        uVar3 = uVar4;
        if (*(longlong *)(DAT_140c65898 + 0x6490) != 0) {
            uVar3 = (ulonglong)*(uint *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x108);
        }
        lVar2 = FUN_1403d90d0(DAT_140c65898,uVar3);
        if ((lVar2 == 0) || (*(int *)(lVar2 + 0x80) != 0x14)) goto LAB_14063bf32;
        psVar7 = &DAT_140b7b704;
        if (*(short **)(lVar2 + 0x10) != (short *)0x0) {
            psVar7 = *(short **)(lVar2 + 0x10);
        }
        sVar1 = *psVar7;
        while (sVar1 != 0) {
            uVar4 = uVar4 + 1;
            sVar1 = psVar7[uVar4];
        }
        uVar3 = (longlong)local_58 - (longlong)psVar6 >> 1;
        uVar5 = (longlong)(psVar7 + uVar4) - (longlong)psVar7 >> 1;
        if (uVar3 < uVar5) {
            FUN_1407db590(psVar6,psVar7,uVar3 * 2);
            FUN_14001c310(local_68,psVar7 + uVar3,psVar7 + uVar4);
        }
        else {
            FUN_1407db590(psVar6,psVar7,uVar5 * 2);
            local_60 = psVar6;
            if (psVar6 + uVar5 != local_58) {
                FUN_1407db590(psVar6 + uVar5,local_58,2);
            }
        }
    }
    psVar6 = local_60;
    if ((local_60 != (short *)0x0) && (*local_60 != 0)) {
        local_90 = &DAT_1409f3c7c;
        if (local_40 != (undefined *)0x0) {
            local_90 = local_40;
        }
        FUN_1403f4900(DAT_140c65898,0x422,local_98);
    }
    LAB_14063bf32:
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    if (local_40 != (undefined *)0x0) {
        FUN_14018b900(local_40,0);
    }
    if (psVar6 != (short *)0x0) {
        FUN_14018b900(psVar6,0);
    }
    if (local_80 != 0) {
        FUN_14018b900(local_80,0);
    }
    return;
}



void FUN_14063c060(undefined8 param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    undefined local_88 [8];
    longlong local_80;
    longlong local_60;
    longlong local_58;
    longlong local_40;
    longlong local_20;
    longlong local_18;

    FUN_14040b680(local_88,param_1,0);
    lVar1 = DAT_140c65898;
    if (local_60 != local_58) {
        uVar2 = FUN_140605380(DAT_140c65898 + 0x6c10,local_60);
        FUN_140601d20(lVar1 + 0x6c10,uVar2,local_20 != local_18,2);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    if (local_60 != 0) {
        FUN_14018b900(local_60,0);
    }
    if (local_80 != 0) {
        FUN_14018b900(local_80,0);
    }
    return;
}



void FUN_14063c150(undefined8 param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    undefined local_88 [8];
    longlong local_80;
    longlong local_60;
    longlong local_58;
    longlong local_40;
    longlong local_20;
    longlong local_18;

    FUN_14040b680(local_88,param_1,0);
    lVar1 = DAT_140c65898;
    if (local_60 != local_58) {
        uVar2 = FUN_140605380(DAT_140c65898 + 0x6c10,local_60);
        FUN_140601d20(lVar1 + 0x6c10,uVar2,local_20 != local_18,4);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    if (local_60 != 0) {
        FUN_14018b900(local_60,0);
    }
    if (local_80 != 0) {
        FUN_14018b900(local_80,0);
    }
    return;
}



void FUN_14063c240(longlong param_1)

{
    ulonglong uVar1;
    short sVar2;
    short *psVar3;
    longlong lVar4;
    longlong lVar5;
    uint uVar6;
    longlong lVar7;
    undefined8 local_88;
    longlong local_80;
    undefined2 *local_78;
    ulonglong local_70;
    undefined local_68 [8];
    longlong local_60;
    undefined2 *local_58;
    longlong local_50;
    undefined local_48 [8];
    longlong local_40;
    longlong local_38;

    lVar5 = 0;
    local_80 = 0;
    local_70 = 0;
    lVar7 = lVar5;
    do {
        psVar3 = &DAT_140b28ca2 + lVar7;
        lVar7 = lVar7 + 1;
    } while (*psVar3 != 0);
    lVar7 = lVar7 * 2 >> 1;
    uVar1 = lVar7 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar4 = uVar1 * 2;
        local_80 = FUN_14018b280(lVar4,0);
        local_70 = lVar4 + local_80;
    }
    lVar4 = local_80;
    lVar7 = lVar7 * 2;
    FUN_1407db590(local_80,&DAT_140b28ca0,lVar7);
    local_78 = (undefined2 *)(lVar7 + lVar4);
    if (local_78 != (undefined2 *)0x0) {
        *local_78 = 0;
    }
    psVar3 = *(short **)(param_1 + 8);
    local_60 = 0;
    local_50 = 0;
    sVar2 = *psVar3;
    while (sVar2 != 0) {
        lVar5 = lVar5 + 1;
        sVar2 = psVar3[lVar5];
    }
    lVar7 = lVar5 * 2 >> 1;
    uVar1 = lVar7 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar5 = uVar1 * 2;
        local_60 = FUN_14018b280(lVar5,0);
        local_50 = lVar5 + local_60;
    }
    lVar5 = local_60;
    lVar7 = lVar7 * 2;
    FUN_1407db590(local_60,psVar3,lVar7);
    local_58 = (undefined2 *)(lVar7 + lVar5);
    if (local_58 != (undefined2 *)0x0) {
        *local_58 = 0;
    }
    FUN_14018f570(local_48,local_68,&local_88,0x22,0x5c);
    if (lVar5 != 0) {
        FUN_14018b900(lVar5,0);
    }
    if (lVar4 != 0) {
        FUN_14018b900(lVar4,0);
    }
    lVar7 = *(longlong *)(DAT_140c65898 + 0x6c50);
    lVar5 = local_40;
    if (((lVar7 != 0) && (*(longlong *)(lVar7 + 0x60) != 0)) &&
        (lVar4 = *(longlong *)(*(longlong *)(lVar7 + 0x58) + *(longlong *)(lVar7 + 0x68) * 8),
                lVar4 != 0)) {
        local_88 = *(undefined8 *)(lVar7 + 0x48);
        local_80 = *(longlong *)(lVar4 + 0x10);
        local_78 = *(undefined2 **)(lVar4 + 0x18);
        if (local_38 - local_40 >> 5 == 0) {
            uVar6 = *(uint *)(lVar4 + 8) & 0xfffff7ff;
        }
        else {
            uVar6 = *(uint *)(lVar4 + 8) | 0x800;
        }
        local_70 = CONCAT44(*(uint *)(lVar4 + 8) ^ (uVar6 | 0x4000),uVar6) | 0x4000;
        FUN_1403f4740(DAT_140c65898,0x408,&local_88);
    }
    for (; lVar5 != local_38; lVar5 = lVar5 + 0x20) {
        if (*(longlong *)(lVar5 + 8) != 0) {
            FUN_14018b900(*(longlong *)(lVar5 + 8),0);
        }
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    return;
}



void FUN_14063c490(undefined8 param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    undefined local_88 [8];
    longlong local_80;
    longlong local_60;
    longlong local_58;
    longlong local_40;
    longlong local_20;
    longlong local_18;

    FUN_14040b680(local_88,param_1,0);
    lVar1 = DAT_140c65898;
    if (local_60 != local_58) {
        uVar2 = FUN_140605380(DAT_140c65898 + 0x6c10,local_60);
        FUN_140601d20(lVar1 + 0x6c10,uVar2,local_20 != local_18,0x80);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    if (local_60 != 0) {
        FUN_14018b900(local_60,0);
    }
    if (local_80 != 0) {
        FUN_14018b900(local_80,0);
    }
    return;
}



void FUN_14063c580(undefined8 param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    undefined local_88 [8];
    longlong local_80;
    longlong local_60;
    longlong local_58;
    longlong local_40;
    longlong local_20;
    longlong local_18;

    FUN_14040b680(local_88,param_1,0);
    lVar1 = DAT_140c65898;
    if (local_60 != local_58) {
        uVar2 = FUN_140605380(DAT_140c65898 + 0x6c10,local_60);
        FUN_140601d20(lVar1 + 0x6c10,uVar2,local_20 != local_18,0x40);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    if (local_60 != 0) {
        FUN_14018b900(local_60,0);
    }
    if (local_80 != 0) {
        FUN_14018b900(local_80,0);
    }
    return;
}



void FUN_14063c670(undefined8 param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    undefined local_88 [8];
    longlong local_80;
    longlong local_60;
    longlong local_58;
    longlong local_40;
    longlong local_20;
    longlong local_18;

    FUN_14040b680(local_88,param_1,0);
    lVar1 = DAT_140c65898;
    if (local_60 != local_58) {
        uVar2 = FUN_140605380(DAT_140c65898 + 0x6c10,local_60);
        FUN_140601d20(lVar1 + 0x6c10,uVar2,local_20 != local_18,0x20);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    if (local_60 != 0) {
        FUN_14018b900(local_60,0);
    }
    if (local_80 != 0) {
        FUN_14018b900(local_80,0);
    }
    return;
}



void FUN_14063c760(undefined8 param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    undefined local_88 [8];
    longlong local_80;
    longlong local_60;
    longlong local_58;
    longlong local_40;
    longlong local_20;
    longlong local_18;

    FUN_14040b680(local_88,param_1,0);
    lVar1 = DAT_140c65898;
    if (local_60 != local_58) {
        uVar2 = FUN_140605380(DAT_140c65898 + 0x6c10,local_60);
        FUN_140601d20(lVar1 + 0x6c10,uVar2,local_20 != local_18,0x400);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    if (local_60 != 0) {
        FUN_14018b900(local_60,0);
    }
    if (local_80 != 0) {
        FUN_14018b900(local_80,0);
    }
    return;
}



void FUN_14063c850(undefined8 param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    undefined local_88 [8];
    longlong local_80;
    longlong local_60;
    longlong local_58;
    longlong local_40;
    longlong local_20;
    longlong local_18;

    FUN_14040b680(local_88,param_1,0);
    lVar1 = DAT_140c65898;
    if (local_60 != local_58) {
        uVar2 = FUN_140605380(DAT_140c65898 + 0x6c10,local_60);
        FUN_140601d20(lVar1 + 0x6c10,uVar2,local_20 != local_18,0x100);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    if (local_60 != 0) {
        FUN_14018b900(local_60,0);
    }
    if (local_80 != 0) {
        FUN_14018b900(local_80,0);
    }
    return;
}



void FUN_14063c940(undefined8 param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    undefined local_88 [8];
    longlong local_80;
    longlong local_60;
    longlong local_58;
    longlong local_40;
    longlong local_20;
    longlong local_18;

    FUN_14040b680(local_88,param_1,0);
    lVar1 = DAT_140c65898;
    if (local_60 != local_58) {
        uVar2 = FUN_140605380(DAT_140c65898 + 0x6c10,local_60);
        FUN_140601d20(lVar1 + 0x6c10,uVar2,local_20 != local_18,0x200);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    if (local_60 != 0) {
        FUN_14018b900(local_60,0);
    }
    if (local_80 != 0) {
        FUN_14018b900(local_80,0);
    }
    return;
}



void FUN_14063ca30(undefined8 param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    undefined local_88 [8];
    longlong local_80;
    longlong local_60;
    longlong local_58;
    longlong local_40;
    longlong local_20;
    longlong local_18;

    FUN_14040b680(local_88,param_1,0);
    lVar1 = DAT_140c65898;
    if (local_60 != local_58) {
        uVar2 = FUN_140605380(DAT_140c65898 + 0x6c10,local_60);
        FUN_140601d20(lVar1 + 0x6c10,uVar2,local_20 != local_18,0x1000);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    if (local_60 != 0) {
        FUN_14018b900(local_60,0);
    }
    if (local_80 != 0) {
        FUN_14018b900(local_80,0);
    }
    return;
}



void FUN_14063cb20(undefined8 param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    undefined local_88 [8];
    longlong local_80;
    longlong local_60;
    longlong local_58;
    longlong local_40;
    longlong local_20;
    longlong local_18;

    FUN_14040b680(local_88,param_1,0);
    lVar1 = DAT_140c65898;
    if (local_60 != local_58) {
        uVar2 = FUN_140605380(DAT_140c65898 + 0x6c10,local_60);
        FUN_140601d20(lVar1 + 0x6c10,uVar2,local_20 != local_18,0x2000);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    if (local_60 != 0) {
        FUN_14018b900(local_60,0);
    }
    if (local_80 != 0) {
        FUN_14018b900(local_80,0);
    }
    return;
}



void FUN_14063cc10(longlong param_1)

{
    ulonglong uVar1;
    short sVar2;
    short *psVar3;
    longlong lVar4;
    int iVar5;
    longlong lVar6;
    longlong lVar7;
    undefined4 uVar8;
    undefined local_78 [8];
    longlong local_70;
    undefined2 *local_68;
    longlong local_60;
    undefined local_58 [8];
    longlong local_50;
    undefined2 *local_48;
    longlong local_40;
    undefined local_38 [8];
    longlong local_30;
    longlong local_28;

    lVar6 = 0;
    uVar8 = 0;
    local_70 = 0;
    local_60 = 0;
    lVar7 = lVar6;
    do {
        psVar3 = &DAT_140b28c6a + lVar7;
        lVar7 = lVar7 + 1;
    } while (*psVar3 != 0);
    lVar7 = lVar7 * 2 >> 1;
    uVar1 = lVar7 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar4 = uVar1 * 2;
        local_70 = FUN_14018b280(lVar4,0);
        local_60 = lVar4 + local_70;
    }
    lVar4 = local_70;
    lVar7 = lVar7 * 2;
    FUN_1407db590(local_70,&DAT_140b28c68,lVar7);
    local_68 = (undefined2 *)(lVar7 + lVar4);
    if (local_68 != (undefined2 *)0x0) {
        *local_68 = 0;
    }
    psVar3 = *(short **)(param_1 + 8);
    local_50 = 0;
    local_40 = 0;
    sVar2 = *psVar3;
    while (sVar2 != 0) {
        lVar6 = lVar6 + 1;
        sVar2 = psVar3[lVar6];
    }
    lVar7 = lVar6 * 2 >> 1;
    uVar1 = lVar7 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar6 = uVar1 * 2;
        local_50 = FUN_14018b280(lVar6,0);
        local_40 = lVar6 + local_50;
    }
    lVar6 = local_50;
    lVar7 = lVar7 * 2;
    FUN_1407db590(local_50,psVar3,lVar7);
    local_48 = (undefined2 *)(lVar7 + lVar6);
    if (local_48 != (undefined2 *)0x0) {
        *local_48 = 0;
    }
    FUN_14018f570(local_38,local_58,local_78,0x22,0x5c);
    if (lVar6 != 0) {
        FUN_14018b900(lVar6,0);
    }
    if (lVar4 != 0) {
        FUN_14018b900(lVar4,0);
    }
    lVar7 = local_30;
    if (local_28 - local_30 >> 5 != 0) {
        if (*(longlong *)(DAT_140c65898 + 0x6490) != 0) {
            uVar8 = *(undefined4 *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x108);
        }
        iVar5 = FUN_1407df510(*(undefined8 *)(local_30 + 8));
        if (iVar5 != 0) {
            FUN_1406020b0(DAT_140c65898 + 0x6c10,iVar5,uVar8);
        }
    }
    for (; lVar7 != local_28; lVar7 = lVar7 + 0x20) {
        if (*(longlong *)(lVar7 + 8) != 0) {
            FUN_14018b900(*(longlong *)(lVar7 + 8),0);
        }
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    return;
}



void FUN_14063ce40(void)

{
    longlong lVar1;
    undefined8 local_18;
    ulonglong local_10;

    lVar1 = *(longlong *)(DAT_140c65898 + 0x6c50);
    if (lVar1 != 0) {
        local_18 = *(undefined8 *)(lVar1 + 0x48);
        local_10 = (ulonglong)*(uint *)(lVar1 + 8) | 2;
        FUN_1403f4740(DAT_140c65898,0x406,&local_18);
    }
    return;
}



void FUN_14063cf90(void)

{
    longlong lVar1;
    int iVar2;
    undefined8 local_res18 [2];

    lVar1 = DAT_140c65898;
    iVar2 = FUN_140601fb0(DAT_140c65898 + 0x6c10);
    if (iVar2 != 0) {
        local_res18[0] = *(undefined8 *)(*(longlong *)(lVar1 + 0x6c50) + 0x48);
        FUN_1403f4740(DAT_140c65898,0x411,local_res18);
    }
    return;
}



void FUN_14063d010(void)

{
    undefined local_res18 [16];

    local_res18[0] = 0;
    FUN_1403f4740(DAT_140c65898,0x693,local_res18);
    return;
}



void FUN_14063d040(void)

{
    undefined local_res18 [16];

    local_res18[0] = 0;
    FUN_1403f4740(DAT_140c65898,0x719,local_res18);
    return;
}



void FUN_14063d250(void)

{
    undefined8 local_18;
    undefined8 local_10;

    if (*(longlong *)(DAT_140c65898 + 0x6c50) != 0) {
        local_18 = *(undefined8 *)(*(longlong *)(DAT_140c65898 + 0x6c50) + 0x48);
        local_10 = 0;
        FUN_1403f4740(DAT_140c65898,0x42b,&local_18);
    }
    return;
}



void FUN_14063d2d0(longlong param_1)

{
    undefined local_28 [8];
    longlong local_20;

    FUN_14018f0e0(local_28,*(undefined8 *)(param_1 + 8));
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),local_20,"");
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
        return;
    }
    return;
}



void FUN_14063d320(longlong param_1,undefined4 *param_2)

{
    char cVar1;
    char cVar2;
    undefined4 uVar3;
    char cVar4;
    char *pcVar5;
    char *pcVar6;
    char *pcVar7;
    char *pcVar8;
    undefined auStack328 [48];
    char local_118 [256];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack328;
    *param_2 = 0x10;
    pcVar6 = *(char **)(param_1 + 8);
    cVar1 = *pcVar6;
    while (cVar1 != '\0') {
        if (cVar1 != ' ') {
            cVar1 = *pcVar6;
            if (cVar1 != '\0') {
                pcVar5 = local_118;
                pcVar7 = pcVar6;
                goto LAB_14063d387;
            }
            break;
        }
        pcVar5 = pcVar6 + 1;
        pcVar6 = pcVar6 + 1;
        cVar1 = *pcVar5;
    }
    goto LAB_14063d42e;
    while( true ) {
        pcVar7 = pcVar7 + 1;
        *pcVar5 = cVar1;
        pcVar5 = pcVar5 + 1;
        cVar1 = *pcVar7;
        if (cVar1 == '\0') break;
        LAB_14063d387:
        if (cVar1 == ' ') break;
    }
    pcVar8 = (char *)0x0;
    *pcVar5 = '\0';
    pcVar5 = pcVar8;
    do {
        pcVar5 = pcVar5 + 1;
    } while (pcVar6[(longlong)pcVar5] != '\0');
    while( true ) {
        cVar1 = local_118[(longlong)pcVar8];
        cVar4 = cVar1;
        if ((byte)(cVar1 + 0xbfU) < 0x1a) {
            cVar4 = cVar1 + ' ';
        }
        cVar2 = "/wait"[(longlong)pcVar8];
        if ((byte)(cVar2 + 0xbfU) < 0x1a) {
            cVar2 = cVar2 + ' ';
        }
        if (cVar4 != cVar2) goto LAB_14063d42e;
        if (cVar1 == '\0') break;
        pcVar8 = pcVar8 + 1;
    }
    if (pcVar7 + (1 - (longlong)pcVar6) < pcVar5) {
        uVar3 = FUN_14018e730(pcVar7 + 1,10);
        *param_2 = uVar3;
    }
    else {
        *param_2 = 1000;
    }
    LAB_14063d42e:
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack328);
    return;
}



// WARNING: Removing unreachable block (ram,0x00014063d75c)

void FUN_14063d680(ulonglong param_1,longlong param_2)

{
    longlong lVar1;
    char *pcVar2;
    longlong *plVar3;
    longlong lVar4;
    ulonglong uVar5;
    char *pcVar6;
    undefined local_48 [8];
    char *local_40;
    char *local_38;
    char *local_30;

    lVar4 = -1;
    do {
        lVar4 = lVar4 + 1;
    } while (*(char *)(param_1 + lVar4) != '\0');
    uVar5 = lVar4 + param_1;
    if (param_1 < uVar5) {
        do {
            lVar4 = FUN_1407ddcf8(param_1,&DAT_1409f3f94);
            if ((lVar4 == 0) && (lVar4 = FUN_1407de0b4(param_1,10), lVar4 == 0)) {
                lVar4 = uVar5 + 1;
            }
            pcVar2 = (char *)FUN_14018b280(8);
            local_30 = pcVar2 + 8;
            if (pcVar2 != (char *)0x0) {
                *pcVar2 = '\0';
            }
            local_40 = pcVar2;
            local_38 = pcVar2;
            if ((longlong)(lVar4 - param_1) < 1) {
                if (pcVar2 == (char *)0x0) {
                    return;
                }
                FUN_14018b900(pcVar2,0);
                return;
            }
            if (lVar4 - 1U == param_1) {
                FUN_1407db590(pcVar2,param_1,0);
                pcVar6 = pcVar2;
            }
            else {
                FUN_14001b050(local_48,param_1);
                pcVar2 = local_40;
                pcVar6 = local_38;
            }
            if (*pcVar6 != '\n') {
                FUN_14001b050(local_48,&DAT_1409f3fac,&DAT_1409f3fad);
                pcVar2 = local_40;
                pcVar6 = local_38;
            }
            lVar1 = *(longlong *)(param_2 + 8);
            plVar3 = (longlong *)FUN_14018b280(0x30);
            if (plVar3 + 2 != (longlong *)0x0) {
                plVar3[3] = 0;
                plVar3[4] = 0;
                plVar3[5] = 0;
                FUN_14001b240(plVar3 + 2,pcVar2,pcVar6);
            }
            *plVar3 = lVar1;
            plVar3[1] = *(longlong *)(lVar1 + 8);
            **(longlong ***)(lVar1 + 8) = plVar3;
            *(longlong **)(lVar1 + 8) = plVar3;
            param_1 = lVar4 + 1;
            if (pcVar2 != (char *)0x0) {
                FUN_14018b900(pcVar2,0);
            }
        } while (param_1 < uVar5);
    }
    return;
}



void FUN_14063d850(longlong param_1,longlong param_2)

{
    undefined *puVar1;
    WCHAR WVar2;
    short *psVar3;
    short *psVar4;
    code *pcVar5;
    longlong lVar6;
    int iVar7;
    short *psVar8;
    longlong lVar9;
    undefined8 uVar10;
    longlong *plVar11;
    WCHAR *pWVar12;
    ulonglong uVar13;
    ulonglong uVar14;
    short *psVar15;
    short *psVar16;
    longlong lVar17;
    longlong *plVar18;
    longlong **pplVar19;
    ulonglong uVar20;
    WCHAR *pWVar21;
    undefined auStack760 [32];
    longlong **local_2d8;
    longlong *local_2c8;
    longlong *local_2c0;
    undefined local_2b8 [8];
    longlong local_2b0;
    undefined2 *local_2a8;
    longlong local_2a0;
    undefined local_298 [8];
    longlong local_290;
    undefined2 *local_288;
    longlong local_280;
    undefined local_278 [8];
    longlong local_270;
    undefined2 *local_268;
    longlong local_260;
    WCHAR local_258 [264];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack760;
    uVar13 = 0;
    uVar14 = uVar13;
    do {
        uVar14 = uVar14 + 1;
    } while ((&DAT_1409f3f5c)[uVar14] != 0);
    psVar3 = *(short **)(param_1 + 0x10);
    psVar4 = *(short **)(param_1 + 8);
    uVar20 = uVar13;
    if ((longlong)psVar3 - (longlong)psVar4 >> 1 == 0) {
        LAB_14063d8f7:
        lVar17 = -1;
    }
    else {
        psVar16 = psVar3;
        if (psVar4 != psVar3) {
            psVar15 = psVar4;
            do {
                psVar8 = &DAT_1409f3f5c;
                if (&DAT_1409f3f5c + uVar14 != &DAT_1409f3f5c) {
                    do {
                        psVar16 = psVar15;
                        if (*psVar15 == *psVar8) goto LAB_14063d8ea;
                        psVar8 = psVar8 + 1;
                    } while (psVar8 != &DAT_1409f3f5c + uVar14);
                }
                psVar15 = psVar15 + 1;
                psVar16 = psVar3;
            } while (psVar15 != psVar3);
        }
        LAB_14063d8ea:
        if (psVar16 == psVar3) goto LAB_14063d8f7;
        lVar17 = (longlong)psVar16 - (longlong)psVar4 >> 1;
    }
    do {
        uVar20 = uVar20 + 1;
    } while ((&DAT_1409f3f7c)[uVar20] != 0);
    lVar9 = FUN_14063f690();
    if ((lVar9 == -1) || (lVar17 == lVar9)) {
        GetCurrentDirectoryW(0x104,local_258);
        lVar17 = 0x104;
        pWVar12 = local_258;
        do {
            if (*pWVar12 == L'\0') {
                if (lVar17 != 0) {
                    FUN_14001b680(local_258 + (0x104 - lVar17),0x104 - (0x104 - lVar17));
                }
                break;
            }
            pWVar12 = pWVar12 + 1;
            lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        local_2d8 = &local_2c8;
        iVar7 = FUN_1401b5b50(DAT_140c63788,local_258);
        plVar11 = local_2c8;
        if (-1 < iVar7) {
            uVar10 = (**(code **)(*local_2c8 + 0x18))(local_2c8);
            iVar7 = FUN_1401c5690(uVar10,&local_2c8);
            plVar18 = local_2c8;
            lVar17 = *plVar11;
            if (-1 < iVar7) {
                iVar7 = (**(code **)(lVar17 + 0x48))(plVar11,local_2c8);
                if (-1 < iVar7) goto LAB_14063dce4;
                (**(code **)(*plVar18 + 8))(plVar18);
                lVar17 = *plVar11;
            }
            (**(code **)(lVar17 + 8))(plVar11);
        }
        GetCurrentDirectoryW(0x104,local_258);
        uVar14 = uVar13;
        WVar2 = local_258[0];
        while (uVar20 = uVar13, WVar2 != L'\0') {
            uVar14 = uVar14 + 1;
            WVar2 = local_258[uVar14];
        }
        do {
            uVar20 = uVar20 + 1;
        } while ((&DAT_1409f407c)[uVar20] != 0);
        if ((uVar20 <= uVar14) &&
            (pWVar12 = local_258 + (uVar14 - uVar20), pWVar21 = pWVar12, local_258 <= pWVar12)) {
            do {
                uVar14 = uVar13;
                if (uVar20 == 0) {
                    LAB_14063dc11:
                    if (pWVar21 != (WCHAR *)0x0) {
                        *pWVar21 = L'\0';
                    }
                    break;
                }
                while (pWVar12[uVar14] == (&DAT_1409f407c)[uVar14]) {
                    if ((pWVar12[uVar14] == L'\0') || (uVar14 = uVar14 + 1, uVar20 <= uVar14))
                        goto LAB_14063dc11;
                }
                pWVar21 = pWVar21 + -1;
                pWVar12 = pWVar12 + -1;
            } while (local_258 <= pWVar21);
        }
        lVar17 = 0x104;
        pWVar12 = local_258;
        do {
            if (*pWVar12 == L'\0') {
                if (lVar17 != 0) {
                    FUN_14001b680(local_258 + (0x104 - lVar17),0x104 - (0x104 - lVar17));
                }
                break;
            }
            pWVar12 = pWVar12 + 1;
            lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        local_2d8 = &local_2c8;
        iVar7 = FUN_1401b5b50(DAT_140c63788,local_258,1);
        plVar11 = local_2c8;
        if (iVar7 < 0) goto LAB_14063da99;
        uVar10 = (**(code **)(*local_2c8 + 0x18))(local_2c8);
        iVar7 = FUN_1401c5690(uVar10,&local_2c8,0);
        plVar18 = local_2c8;
        lVar17 = *plVar11;
        if (-1 < iVar7) {
            iVar7 = (**(code **)(lVar17 + 0x48))(plVar11,local_2c8);
            if (-1 < iVar7) goto LAB_14063dce4;
            (**(code **)(*plVar18 + 8))(plVar18);
            lVar17 = *plVar11;
        }
        (**(code **)(lVar17 + 8))(plVar11);
    }
    else {
        lVar9 = lVar9 + -1;
        local_2c0 = (longlong *)
                ((*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 1) - (lVar17 + 1));
        local_2c8 = (longlong *)(lVar9 - lVar17);
        pplVar19 = &local_2c0;
        if ((longlong *)(lVar9 - lVar17) <= local_2c0) {
            pplVar19 = &local_2c8;
        }
        FUN_1407db590(local_258,*(longlong *)(param_1 + 8) + (lVar17 + 1) * 2,(longlong)*pplVar19 * 2);
        if (0x207 < (ulonglong)(lVar9 * 2)) {
            __report_rangecheckfailure();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
        }
        local_2d8 = &local_2c8;
        local_258[lVar9] = L'\0';
        iVar7 = FUN_1401b5b50(DAT_140c63788,local_258,1);
        plVar11 = local_2c8;
        if (-1 < iVar7) {
            uVar10 = (**(code **)(*local_2c8 + 0x18))(local_2c8);
            iVar7 = FUN_1401c5690(uVar10,&local_2c8,0);
            plVar18 = local_2c8;
            lVar17 = *plVar11;
            if (-1 < iVar7) {
                iVar7 = (**(code **)(lVar17 + 0x48))(plVar11,local_2c8);
                if (-1 < iVar7) {
                    LAB_14063dce4:
                    (**(code **)(*plVar11 + 8))(plVar11);
                    local_2b0 = 0;
                    local_2a0 = 0;
                    uVar14 = uVar13;
                    while (local_258[0] != L'\0') {
                        uVar14 = uVar14 + 1;
                        local_258[0] = local_258[uVar14];
                    }
                    lVar17 = (longlong)(uVar14 * 2) >> 1;
                    uVar14 = lVar17 + 1;
                    if (uVar14 < 0x7fffffffffffffff) {
                        lVar9 = uVar14 * 2;
                        local_2b0 = FUN_14018b280(lVar9,0);
                        local_2a0 = local_2b0 + lVar9;
                    }
                    lVar9 = local_2b0;
                    lVar17 = lVar17 * 2;
                    FUN_1407db590(local_2b0,local_258,lVar17);
                    local_2a8 = (undefined2 *)(lVar9 + lVar17);
                    if (local_2a8 != (undefined2 *)0x0) {
                        *local_2a8 = 0;
                    }
                    local_270 = 0;
                    local_260 = 0;
                    uVar14 = uVar13;
                    do {
                        psVar3 = &DAT_1409f401e + uVar14;
                        uVar14 = uVar14 + 1;
                    } while (*psVar3 != 0);
                    lVar17 = (longlong)(uVar14 * 2) >> 1;
                    uVar14 = lVar17 + 1;
                    if (uVar14 < 0x7fffffffffffffff) {
                        lVar9 = uVar14 * 2;
                        local_270 = FUN_14018b280(lVar9,0);
                        local_260 = local_270 + lVar9;
                    }
                    lVar9 = local_270;
                    lVar17 = lVar17 * 2;
                    FUN_1407db590(local_270,&DAT_1409f401c,lVar17);
                    local_268 = (undefined2 *)(lVar9 + lVar17);
                    if (local_268 != (undefined2 *)0x0) {
                        *local_268 = 0;
                    }
                    local_290 = 0;
                    local_280 = 0;
                    do {
                        psVar3 = &DAT_1409f3ffe + uVar13;
                        uVar13 = uVar13 + 1;
                    } while (*psVar3 != 0);
                    lVar17 = (longlong)(uVar13 * 2) >> 1;
                    uVar13 = lVar17 + 1;
                    if (uVar13 < 0x7fffffffffffffff) {
                        lVar6 = uVar13 * 2;
                        local_290 = FUN_14018b280(lVar6,0);
                        local_280 = local_290 + lVar6;
                    }
                    lVar6 = local_290;
                    lVar17 = lVar17 * 2;
                    FUN_1407db590(local_290,&DAT_1409f3ffc,lVar17);
                    local_288 = (undefined2 *)(lVar6 + lVar17);
                    if (local_288 != (undefined2 *)0x0) {
                        *local_288 = 0;
                    }
                    FUN_14018ffe0(local_2b8,local_298,local_278,0);
                    if (lVar6 != 0) {
                        FUN_14018b900(lVar6,0);
                    }
                    if (lVar9 != 0) {
                        FUN_14018b900(lVar9,0);
                    }
                    lVar17 = (**(code **)(*plVar18 + 0x10))(plVar18);
                    lVar9 = FUN_14018b280(lVar17 + 1,0);
                    uVar10 = (**(code **)(*plVar18 + 0x20))(plVar18);
                    FUN_1407db590(lVar9,uVar10,lVar17);
                    *(undefined *)(lVar9 + lVar17) = 0;
                    FUN_14063d680(lVar9,param_2);
                    (**(code **)(*plVar18 + 8))(plVar18);
                    FUN_14018b900(lVar9,0);
                    if (local_2b0 != 0) {
                        FUN_14018b900(local_2b0,0);
                    }
                    goto LAB_14063da99;
                }
                (**(code **)(*plVar18 + 8))(plVar18);
                lVar17 = *plVar11;
            }
            (**(code **)(lVar17 + 8))(plVar11);
        }
        lVar17 = FUN_14018b280(0xf);
        FUN_1407db590(lVar17,"File not found",0xe);
        puVar1 = (undefined *)(lVar17 + 0xe);
        if (puVar1 != (undefined *)0x0) {
            *puVar1 = 0;
        }
        lVar9 = *(longlong *)(param_2 + 8);
        plVar11 = (longlong *)FUN_14018b280(0x30);
        if (plVar11 + 2 != (longlong *)0x0) {
            plVar11[3] = 0;
            plVar11[4] = 0;
            plVar11[5] = 0;
            FUN_14001b240(plVar11 + 2,lVar17,puVar1);
        }
        *plVar11 = lVar9;
        plVar11[1] = *(longlong *)(lVar9 + 8);
        **(longlong ***)(lVar9 + 8) = plVar11;
        *(longlong **)(lVar9 + 8) = plVar11;
        if (lVar17 != 0) {
            FUN_14018b900(lVar17,0);
        }
    }
    LAB_14063da99:
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack760);
    return;
}



void FUN_14063e440(longlong param_1)

{
    int iVar1;
    longlong lVar2;

    iVar1 = FUN_1407df510(*(undefined8 *)(param_1 + 8));
    lVar2 = (longlong)iVar1;
    if (iVar1 != 0) {
        lVar2 = lVar2 + -1;
    }
    if ((DAT_140c65898 != 0) && (*(longlong *)(DAT_140c65898 + 0x6d90) != 0)) {
        FUN_1405e7490(*(longlong *)(DAT_140c65898 + 0x6d90),lVar2,1);
        return;
    }
    return;
}



void FUN_14063e490(undefined8 param_1)

{
    undefined8 uVar1;
    longlong lVar2;
    undefined local_28 [8];
    longlong local_20;

    uVar1 = FUN_14034bdd0(param_1,0x69a0e);
    lVar2 = 0;
    if ((DAT_140c65898 != 0) && (lVar2 = 0, *(longlong *)(DAT_140c65898 + 0x6d90) != 0)) {
        lVar2 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x6d90) + 0x30) + 1;
    }
    FUN_14018efa0(local_28,uVar1,lVar2);
    FUN_140003890(DAT_140c658a0,2,0,local_20,0,0);
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
        return;
    }
    return;
}



void FUN_14063e550(undefined8 param_1)

{
    undefined8 uVar1;
    int iVar2;
    undefined local_28 [8];
    longlong local_20;

    uVar1 = FUN_14034bdd0(param_1,0x6c99e);
    iVar2 = 0;
    if (DAT_140c65898 != 0) {
        iVar2 = *(byte *)(DAT_140c65898 + 0x6dec) + 1;
    }
    FUN_14018efa0(local_28,uVar1,iVar2);
    FUN_140003890(DAT_140c658a0,2,0,local_20,0,0);
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
        return;
    }
    return;
}



void FUN_14063e5e0(void)

{
    undefined local_res18 [16];

    local_res18[0] = 0;
    FUN_1403f4900(DAT_140c65898,0xec,local_res18);
    return;
}



void FUN_14063e610(void)

{
    undefined local_res18 [16];

    if (*(int *)(DAT_140c65898 + 0x6ee4) == 3) {
        local_res18[0] = 0;
        FUN_1403f4900(DAT_140c65898,0xea,local_res18);
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14063e8a0(longlong param_1)

{
    ulonglong uVar1;
    short sVar2;
    short *psVar3;
    longlong lVar4;
    undefined2 *puVar5;
    longlong lVar6;
    longlong *plVar7;
    longlong *plVar8;
    undefined8 uVar9;
    longlong *plVar10;
    undefined local_128 [8];
    longlong local_120;
    undefined2 *local_118;
    longlong local_110;
    undefined **local_108;
    undefined local_100 [8];
    undefined2 *local_f8;
    undefined2 *local_f0;
    undefined local_48 [16];
    undefined2 *local_38;

    psVar3 = *(short **)(param_1 + 8);
    if (psVar3 != *(short **)(param_1 + 0x10)) {
        FUN_1400b6f30(&local_108);
        plVar10 = (longlong *)0x0;
        local_48 = ZEXT816(0);
        local_108 = &PTR_FUN_140b69230;
        local_38 = (undefined2 *)0x0;
        puVar5 = (undefined2 *)FUN_14018b280(0x10);
        local_38 = puVar5 + 8;
        local_48 = CONCAT88(puVar5,puVar5);
        if (puVar5 != (undefined2 *)0x0) {
            *puVar5 = 0;
        }
        if (psVar3 == (short *)0x0) {
            if (local_f8 != local_f0) {
                *local_f8 = 0;
                local_f0 = local_f8;
            }
        }
        else {
            sVar2 = *psVar3;
            plVar7 = plVar10;
            while (sVar2 != 0) {
                plVar7 = (longlong *)((longlong)plVar7 + 1);
                sVar2 = psVar3[(longlong)plVar7];
            }
            FUN_14001c480(local_100,psVar3,psVar3 + (longlong)plVar7);
        }
        lVar6 = FUN_14018b280(0x60);
        plVar7 = plVar10;
        if (lVar6 != 0) {
            plVar7 = (longlong *)FUN_1404db7e0(lVar6,*(undefined8 *)(DAT_140c65898 + 0x78));
        }
        local_120 = 0;
        local_118 = (undefined2 *)0x0;
        local_110 = 0;
        plVar8 = plVar10;
        do {
            psVar3 = &DAT_140b28d0a + (longlong)plVar8;
            plVar8 = (longlong *)((longlong)plVar8 + 1);
        } while (*psVar3 != 0);
        lVar6 = (longlong)plVar8 * 2 >> 1;
        uVar1 = lVar6 + 1;
        if (uVar1 < 0x7fffffffffffffff) {
            lVar4 = uVar1 * 2;
            local_118 = (undefined2 *)FUN_14018b280(lVar4,0);
            local_110 = lVar4 + (longlong)local_118;
        }
        lVar4 = (longlong)local_118;
        lVar6 = lVar6 * 2;
        local_120 = (longlong)local_118;
        FUN_1407db590(local_118,&DAT_140b28d08,lVar6);
        local_118 = (undefined2 *)(lVar6 + lVar4);
        if (local_118 != (undefined2 *)0x0) {
            *local_118 = 0;
        }
        FUN_1400b7480(&local_108,plVar7);
        (**(code **)(*plVar7 + 0x48))(plVar7,local_128);
        if (local_120 != 0) {
            FUN_14018b900(local_120,0);
        }
        lVar6 = FUN_14018b280(0x60);
        plVar7 = plVar10;
        if (lVar6 != 0) {
            if (*(longlong *)(DAT_140c65898 + 0x6490) != 0) {
                plVar7 = (longlong *)(ulonglong)*(uint *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x108);
            }
            uVar9 = FUN_1403d90d0(DAT_140c65898,plVar7);
            plVar7 = (longlong *)FUN_1404db7e0(lVar6,uVar9);
        }
        local_120 = 0;
        local_118 = (undefined2 *)0x0;
        local_110 = 0;
        do {
            lVar6 = (longlong)plVar10 + 1;
            plVar10 = (longlong *)((longlong)plVar10 + 1);
        } while (L"target"[lVar6] != L'\0');
        lVar6 = (longlong)plVar10 * 2 >> 1;
        uVar1 = lVar6 + 1;
        if (uVar1 < 0x7fffffffffffffff) {
            lVar4 = uVar1 * 2;
            local_118 = (undefined2 *)FUN_14018b280(lVar4,0);
            local_110 = lVar4 + (longlong)local_118;
        }
        lVar4 = (longlong)local_118;
        lVar6 = lVar6 * 2;
        local_120 = (longlong)local_118;
        FUN_1407db590(local_118,L"target",lVar6);
        local_118 = (undefined2 *)(lVar6 + lVar4);
        if (local_118 != (undefined2 *)0x0) {
            *local_118 = 0;
        }
        FUN_1400b7480(&local_108,plVar7);
        (**(code **)(*plVar7 + 0x48))(plVar7,local_128);
        if (local_120 != 0) {
            FUN_14018b900(local_120,0);
        }
        lVar6 = FUN_1400b7660(&local_108);
        FUN_140003890(DAT_140c658a0,3,0,*(undefined8 *)(lVar6 + 8),0,0);
        if (local_48._0_8_ != 0) {
            FUN_14018b900(local_48._0_8_,0);
        }
        FUN_1400b7390(&local_108);
    }
    return;
}



void FUN_14063f210(longlong param_1,longlong param_2)

{
    char cVar1;
    longlong lVar2;
    longlong local_38;
    undefined local_30 [8];
    longlong local_28;

    FUN_14018f0e0(local_30,*(undefined8 *)(param_1 + 8));
    local_38 = 0;
    if (*(longlong *)(param_2 + 400) != 0) {
        cVar1 = FUN_1400f2000(param_2 + 0x180,local_28,&local_38);
        lVar2 = local_38;
        if (cVar1 != '\0') goto LAB_14063f281;
    }
    lVar2 = local_38;
    FUN_140003890(DAT_140c658a0,3,0,local_38,0,0);
    LAB_14063f281:
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    if (local_28 != 0) {
        FUN_14018b900(local_28,0);
    }
    return;
}



void FUN_14063f540(void)

{
    undefined local_res18 [16];

    if (DAT_140c65898 != 0) {
        local_res18[0] = 0;
        FUN_1403f4900(DAT_140c65898,0x6e8,local_res18);
    }
    return;
}



void FUN_14063f570(void)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    lVar1 = DAT_140c7e668;
    lVar2 = DAT_140c7e648;
    lVar3 = DAT_140c7e660;
    lVar4 = DAT_140c7e658;
    if (DAT_140c7e648 != DAT_140c7e668) {
        do {
            if (*(longlong *)(lVar2 + 8) != 0) {
                FUN_14018b900(*(longlong *)(lVar2 + 8),0);
            }
            lVar2 = lVar2 + 0x20;
            if (lVar2 == lVar4) {
                lVar2 = *(longlong *)(lVar3 + 8);
                lVar3 = lVar3 + 8;
                lVar4 = lVar2 + 0x1e0;
            }
        } while (lVar2 != lVar1);
    }
    FUN_14063f730();
    return;
}



void FUN_14063f5f0(void)

{
    longlong lVar1;

    lVar1 = *(longlong *)(DAT_140c7e648 + 8);
    if (DAT_140c7e648 != DAT_140c7e658 + -0x20) {
        if (lVar1 != 0) {
            FUN_14018b900(lVar1,0);
        }
        DAT_140c7e648 = DAT_140c7e648 + 0x20;
        return;
    }
    if (lVar1 != 0) {
        FUN_14018b900(lVar1,0);
    }
    FUN_14018b900(DAT_140c7e650,0);
    DAT_140c7e648 = *(longlong *)((longlong)DAT_140c7e660 + 8);
    DAT_140c7e650 = DAT_140c7e648;
    DAT_140c7e658 = DAT_140c7e648 + 0x1e0;
    DAT_140c7e660 = (longlong *)((longlong)DAT_140c7e660 + 8);
    return;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

longlong FUN_14063f690(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    short *psVar4;

    lVar1 = *(longlong *)(param_1 + 8);
    lVar3 = *(longlong *)(param_1 + 0x10) - lVar1 >> 1;
    if (lVar3 != 0) {
        lVar3 = lVar1 + lVar3 * 2;
        lVar2 = lVar1;
        if (lVar3 != lVar1) {
            do {
                psVar4 = &DAT_1409f3f7c;
                if (&DAT_1409f3f7c + param_4 != &DAT_1409f3f7c) {
                    do {
                        lVar2 = lVar3;
                        if (*(short *)(lVar3 + -2) == *psVar4) goto LAB_14063f710;
                        psVar4 = psVar4 + 1;
                    } while (psVar4 != &DAT_1409f3f7c + param_4);
                }
                lVar3 = lVar3 + -2;
                lVar2 = lVar1;
            } while (lVar3 != lVar1);
        }
        LAB_14063f710:
        if (lVar2 != lVar1) {
            return (lVar2 - lVar1) + -2 >> 1;
        }
    }
    return -1;
}



void FUN_14063f730(void)

{
    undefined8 *puVar1;
    undefined8 *puVar2;

    if (DAT_140c7e638 != 0) {
        puVar2 = (undefined8 *)(DAT_140c7e680 + 8);
        puVar1 = DAT_140c7e660;
        if (DAT_140c7e660 < puVar2) {
            do {
                FUN_14018b900(*puVar1,0);
                puVar1 = puVar1 + 1;
            } while (puVar1 < puVar2);
        }
        FUN_14018b900(DAT_140c7e638,0);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14063f7a0(void)

{
    longlong *plVar1;
    longlong lVar2;
    longlong *plVar3;

    DAT_140c7e640 = 8;
    DAT_140c7e638 = FUN_14018b280(0x40);
    plVar1 = (longlong *)(DAT_140c7e638 + (DAT_140c7e640 - 1U >> 1) * 8);
    for (plVar3 = plVar1; plVar3 < plVar1 + 1; plVar3 = plVar3 + 1) {
        lVar2 = FUN_14018b280(0x1e0,0);
        *plVar3 = lVar2;
    }
    DAT_140c7e648 = *plVar1;
    DAT_140c7e668 = *plVar1;
    DAT_140c7e650 = DAT_140c7e648;
    DAT_140c7e658 = DAT_140c7e648 + 0x1e0;
    DAT_140c7e660 = plVar1;
    _DAT_140c7e670 = DAT_140c7e668;
    _DAT_140c7e678 = DAT_140c7e668 + 0x1e0;
    DAT_140c7e680 = plVar1;
    return;
}



void FUN_14063f870(undefined8 param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 uVar4;
    longlong lVar5;
    longlong lVar6;
    undefined *puVar7;

    lVar5 = *(longlong *)(param_2 + 0x10);
    lVar2 = *(longlong *)(param_2 + 8);
    lVar3 = 0;
    lVar6 = lVar5 - lVar2;
    lVar1 = lVar6 + 1;
    if (lVar1 != -1) {
        lVar3 = FUN_14018b280(lVar1,0);
    }
    FUN_1407db590(lVar3,lVar2,lVar6);
    puVar7 = (undefined *)((lVar5 - lVar2) + lVar3);
    if (puVar7 != (undefined *)0x0) {
        *puVar7 = 0;
    }
    if ((longlong)DAT_140c7e660 - DAT_140c7e638 >> 3 == 0) {
        FUN_14063f980();
    }
    uVar4 = FUN_14018b280(0x1e0,0);
    *(undefined8 *)((longlong)DAT_140c7e660 + -8) = uVar4;
    DAT_140c7e660 = (longlong *)((longlong)DAT_140c7e660 + -8);
    lVar1 = *DAT_140c7e660;
    DAT_140c7e658 = lVar1 + 0x1e0;
    lVar5 = lVar1 + 0x1c0;
    DAT_140c7e648 = lVar5;
    DAT_140c7e650 = lVar1;
    if (lVar5 != 0) {
        *(undefined8 *)(lVar1 + 0x1c8) = 0;
        *(undefined8 *)(lVar1 + 0x1d0) = 0;
        *(undefined8 *)(lVar1 + 0x1d8) = 0;
        FUN_14001b240(lVar5,lVar3,puVar7);
    }
    if (lVar3 != 0) {
        FUN_14018b900(lVar3,0);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14063f980(void)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;
    longlong lVar5;
    longlong local_res10;

    lVar5 = (longlong)DAT_140c7e680 - (longlong)DAT_140c7e660;
    local_res10 = 1;
    lVar3 = lVar5 >> 3;
    lVar2 = lVar3 + 2;
    if ((ulonglong)(lVar2 * 2) < DAT_140c7e640) {
        plVar1 = (longlong *)(DAT_140c7e638 + 8 + (DAT_140c7e640 - lVar2 >> 1) * 8);
        if (plVar1 < DAT_140c7e660) {
            FUN_1407db590(plVar1,DAT_140c7e660,lVar5 + 8U & 0xfffffffffffffff8);
        }
        else {
            lVar2 = lVar5 + 8 >> 3;
            FUN_1407db590(plVar1 + ((lVar3 + 1) - lVar2),DAT_140c7e660,lVar2 * 8);
        }
    }
    else {
        plVar1 = &local_res10;
        if (DAT_140c7e640 != 0) {
            plVar1 = (longlong *)&DAT_140c7e640;
        }
        uVar4 = DAT_140c7e640 + 2 + *plVar1;
        lVar5 = FUN_14018b280(uVar4 * 8,0);
        plVar1 = (longlong *)(lVar5 + ((uVar4 - lVar2 >> 1) + 1) * 8);
        FUN_1407db590(plVar1,DAT_140c7e660,
                      ((longlong)DAT_140c7e680 - (longlong)DAT_140c7e660) + 8U & 0xfffffffffffffff8);
        FUN_14018b900(DAT_140c7e638,0);
        DAT_140c7e638 = lVar5;
        DAT_140c7e640 = uVar4;
    }
    _DAT_140c7e670 = plVar1[lVar3];
    DAT_140c7e650 = *plVar1;
    DAT_140c7e658 = *plVar1 + 0x1e0;
    DAT_140c7e660 = plVar1;
    _DAT_140c7e678 = _DAT_140c7e670 + 0x1e0;
    DAT_140c7e680 = plVar1 + lVar3;
    return;
}



void FUN_14063fb10(longlong param_1)

{
    undefined8 local_res8 [4];

    local_res8[0] = *(undefined8 *)(param_1 + 8);
    FUN_1403f4900(DAT_140c65898,0x3e0,local_res8);
    return;
}



undefined8 FUN_14063fb40(void)

{
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),&DAT_1409f40cc,FUN_14063fb10,0);
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),&DAT_140b254b4,FUN_14063fb10,0);
    return 0;
}



undefined8 FUN_14063fba0(undefined4 *param_1)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 *puVar4;
    longlong lVar5;
    undefined4 *puVar6;
    undefined4 *puVar7;

    if (((ulonglong)param_1 & 0xf) == 0) {
        lVar5 = 0x8d;
        puVar4 = (undefined4 *)&DAT_140c4eec0;
        do {
            puVar7 = puVar4;
            puVar6 = param_1;
            uVar1 = puVar7[1];
            uVar2 = puVar7[2];
            uVar3 = puVar7[3];
            *puVar6 = *puVar7;
            puVar6[1] = uVar1;
            puVar6[2] = uVar2;
            puVar6[3] = uVar3;
            uVar1 = puVar7[5];
            uVar2 = puVar7[6];
            uVar3 = puVar7[7];
            puVar6[4] = puVar7[4];
            puVar6[5] = uVar1;
            puVar6[6] = uVar2;
            puVar6[7] = uVar3;
            uVar1 = puVar7[9];
            uVar2 = puVar7[10];
            uVar3 = puVar7[0xb];
            puVar6[8] = puVar7[8];
            puVar6[9] = uVar1;
            puVar6[10] = uVar2;
            puVar6[0xb] = uVar3;
            uVar1 = puVar7[0xd];
            uVar2 = puVar7[0xe];
            uVar3 = puVar7[0xf];
            puVar6[0xc] = puVar7[0xc];
            puVar6[0xd] = uVar1;
            puVar6[0xe] = uVar2;
            puVar6[0xf] = uVar3;
            uVar1 = puVar7[0x11];
            uVar2 = puVar7[0x12];
            uVar3 = puVar7[0x13];
            puVar6[0x10] = puVar7[0x10];
            puVar6[0x11] = uVar1;
            puVar6[0x12] = uVar2;
            puVar6[0x13] = uVar3;
            uVar1 = puVar7[0x15];
            uVar2 = puVar7[0x16];
            uVar3 = puVar7[0x17];
            puVar6[0x14] = puVar7[0x14];
            puVar6[0x15] = uVar1;
            puVar6[0x16] = uVar2;
            puVar6[0x17] = uVar3;
            uVar1 = puVar7[0x19];
            uVar2 = puVar7[0x1a];
            uVar3 = puVar7[0x1b];
            puVar6[0x18] = puVar7[0x18];
            puVar6[0x19] = uVar1;
            puVar6[0x1a] = uVar2;
            puVar6[0x1b] = uVar3;
            uVar1 = puVar7[0x1d];
            uVar2 = puVar7[0x1e];
            uVar3 = puVar7[0x1f];
            puVar6[0x1c] = puVar7[0x1c];
            puVar6[0x1d] = uVar1;
            puVar6[0x1e] = uVar2;
            puVar6[0x1f] = uVar3;
            lVar5 = lVar5 + -1;
            param_1 = puVar6 + 0x20;
            puVar4 = puVar7 + 0x20;
        } while (lVar5 != 0);
        uVar1 = puVar7[0x21];
        uVar2 = puVar7[0x22];
        uVar3 = puVar7[0x23];
        puVar6[0x20] = puVar7[0x20];
        puVar6[0x21] = uVar1;
        puVar6[0x22] = uVar2;
        puVar6[0x23] = uVar3;
        uVar1 = puVar7[0x25];
        uVar2 = puVar7[0x26];
        uVar3 = puVar7[0x27];
        puVar6[0x24] = puVar7[0x24];
        puVar6[0x25] = uVar1;
        puVar6[0x26] = uVar2;
        puVar6[0x27] = uVar3;
        uVar1 = puVar7[0x29];
        uVar2 = puVar7[0x2a];
        uVar3 = puVar7[0x2b];
        puVar6[0x28] = puVar7[0x28];
        puVar6[0x29] = uVar1;
        puVar6[0x2a] = uVar2;
        puVar6[0x2b] = uVar3;
        uVar1 = puVar7[0x2d];
        uVar2 = puVar7[0x2e];
        uVar3 = puVar7[0x2f];
        puVar6[0x2c] = puVar7[0x2c];
        puVar6[0x2d] = uVar1;
        puVar6[0x2e] = uVar2;
        puVar6[0x2f] = uVar3;
        uVar1 = puVar7[0x31];
        uVar2 = puVar7[0x32];
        uVar3 = puVar7[0x33];
        puVar6[0x30] = puVar7[0x30];
        puVar6[0x31] = uVar1;
        puVar6[0x32] = uVar2;
        puVar6[0x33] = uVar3;
        uVar1 = puVar7[0x35];
        uVar2 = puVar7[0x36];
        uVar3 = puVar7[0x37];
        puVar6[0x34] = puVar7[0x34];
        puVar6[0x35] = uVar1;
        puVar6[0x36] = uVar2;
        puVar6[0x37] = uVar3;
        return 0;
    }
    FUN_1407db590(param_1,&DAT_140c4eec0,0x46e0);
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14063fc60(undefined8 param_1,longlong param_2)

{
    int *piVar1;
    wchar_t wVar2;
    short sVar3;
    undefined8 *puVar4;
    ulonglong uVar5;
    char cVar6;
    short sVar10;
    short sVar11;
    short sVar12;
    unkbyte10 Var13;
    undefined auVar14 [12];
    undefined auVar15 [14];
    short sVar16;
    undefined4 uVar17;
    undefined6 uVar18;
    ulonglong uVar19;
    longlong lVar20;
    short *psVar21;
    longlong lVar22;
    longlong lVar23;
    longlong lVar24;
    wchar_t *pwVar25;
    longlong lVar26;
    longlong *plVar27;
    undefined (*pauVar28) [16];
    undefined4 *puVar29;
    undefined8 uVar30;
    longlong *plVar31;
    int iVar32;
    uint uVar33;
    longlong *plVar34;
    short *psVar35;
    wchar_t *pwVar36;
    longlong lVar37;
    int *piVar38;
    uint uVar39;
    double extraout_XMM0_Qa;
    double extraout_XMM0_Qa_00;
    int iVar41;
    undefined extraout_XMM0 [16];
    undefined auVar40 [16];
    int iVar42;
    char cVar43;
    char cVar44;
    int local_64;
    undefined local_48 [16];
    char cVar7;
    char cVar8;
    char cVar9;

    lVar20 = FUN_1401a5ae0();
    do {
        if (lVar20 == 0) {
            return 0;
        }
        for (lVar22 = *(longlong *)(lVar20 + 0x60); lVar22 != 0; lVar22 = *(longlong *)(lVar22 + 0x38))
        {
            // WARNING: Read-only address (ram,0x000140b7b240) is written
            psVar35 = &DAT_140b28d58;
            psVar21 = (short *)FUN_1401a4f40();
            if (psVar21 == &DAT_140b28d58) {
                LAB_14063fe2b:
                if (lVar22 != 0) {
                    FUN_1401a4f40(lVar22 + 0x20);
                }
                break;
            }
            iVar32 = 0;
            if (*psVar21 == 0) {
                LAB_14063fd27:
                if (*psVar35 == 0) goto LAB_14063fe2b;
            }
            else {
                do {
                    if (((*psVar35 == 0) || (*psVar21 != *psVar35)) || (0x7ffffffe < iVar32)) break;
                    psVar21 = psVar21 + 1;
                    psVar35 = psVar35 + 1;
                    iVar32 = iVar32 + 1;
                } while (*psVar21 != 0);
                if (iVar32 == 0x7fffffff) goto LAB_14063fe2b;
                if (*psVar21 == 0) goto LAB_14063fd27;
            }
        }
        iVar32 = FUN_140640960();
        if (iVar32 != 0) {
            lVar37 = (longlong)local_64 * 0x120 + param_2;
            lVar22 = FUN_1401a5ae0(lVar20);
            if (lVar22 != 0) {
                LAB_14063fd80:
                plVar31 = (longlong *)0x0;
                for (lVar23 = *(longlong *)(lVar22 + 0x60); plVar27 = plVar31, lVar23 != 0;
                     lVar23 = *(longlong *)(lVar23 + 0x38)) {
                    psVar35 = &DAT_140b28f38;
                    psVar21 = (short *)FUN_1401a4f40();
                    if (psVar21 == &DAT_140b28f38) {
                        LAB_14063fe42:
                        if (lVar23 != 0) {
                            plVar27 = (longlong *)FUN_1401a4f40(lVar23 + 0x20);
                        }
                        break;
                    }
                    plVar34 = plVar31;
                    if (*psVar21 != 0) {
                        do {
                            uVar33 = (uint)plVar34;
                            if (((*psVar35 == 0) || (*psVar21 != *psVar35)) || (0x7ffffffe < (int)uVar33)) break;
                            psVar21 = psVar21 + 1;
                            psVar35 = psVar35 + 1;
                            uVar33 = uVar33 + 1;
                            plVar34 = (longlong *)(ulonglong)uVar33;
                        } while (*psVar21 != 0);
                        if (uVar33 == 0x7fffffff) goto LAB_14063fe42;
                    }
                    if ((*psVar21 == 0) && (*psVar35 == 0)) goto LAB_14063fe42;
                }
                wVar2 = *(wchar_t *)plVar27;
                plVar34 = plVar31;
                if (wVar2 == L'N') {
                    do {
                        if (wVar2 == L'\0') {
                            psVar21 = (short *)(lVar37 + 0x10);
                            lVar23 = FUN_1401a5ae0(lVar22,L"Font");
                            if (lVar23 == 0) goto LAB_140640394;
                            lVar24 = FUN_1401a5ae0(lVar23);
                            if (lVar24 == 0) goto LAB_14063ffbc;
                            lVar26 = *(longlong *)(lVar24 + 0x60);
                            goto joined_r0x00014063fe9a;
                        }
                        wVar2 = *(wchar_t *)((longlong)plVar27 + (longlong)plVar34 * 2 + 2);
                        plVar34 = (longlong *)((longlong)plVar34 + 1);
                    } while (wVar2 == L"Normal"[(longlong)plVar34]);
                }
                goto LAB_1406408df;
            }
        }
        LAB_14064090c:
        lVar20 = FUN_1401a5bc0(lVar20);
    } while( true );
    joined_r0x00014063fe9a:
    if (lVar26 == 0) goto LAB_14063ff39;
    pwVar36 = L"derived";
    pwVar25 = (wchar_t *)FUN_1401a4f40(lVar26 + 8);
    if (pwVar25 == L"derived") {
        LAB_14063ff09:
        if (lVar26 != 0) {
            uVar30 = FUN_1401a4f40(lVar26 + 0x20);
            FUN_1407df428(uVar30,&DAT_1409e4114);
        }
        goto LAB_14063ff39;
    }
    plVar27 = plVar31;
    if (*pwVar25 == L'\0') {
        LAB_14063fef8:
        if (*pwVar36 == L'\0') goto LAB_14063ff09;
    }
    else {
        do {
            uVar33 = (uint)plVar27;
            if (((*pwVar36 == L'\0') || (*pwVar25 != *pwVar36)) || (0x7ffffffe < (int)uVar33)) break;
            pwVar25 = pwVar25 + 1;
            pwVar36 = pwVar36 + 1;
            uVar33 = uVar33 + 1;
            plVar27 = (longlong *)(ulonglong)uVar33;
        } while (*pwVar25 != L'\0');
        if (uVar33 == 0x7fffffff) goto LAB_14063ff09;
        if (*pwVar25 == L'\0') goto LAB_14063fef8;
    }
    lVar26 = *(longlong *)(lVar26 + 0x38);
    goto joined_r0x00014063fe9a;
    LAB_14063ff39:
    plVar27 = plVar31;
    if ((*(longlong **)(lVar24 + 0x30) != (longlong *)0x0) &&
        (lVar26 = (**(code **)(**(longlong **)(lVar24 + 0x30) + 0x10))(), lVar26 != 0)) {
        plVar34 = *(longlong **)(lVar24 + 0x30);
        lVar24 = (**(code **)(*plVar34 + 0x30))(plVar34);
        if (lVar24 == 0) {
            plVar27 = (longlong *)FUN_1401a4f40(plVar34 + 3);
        }
    }
    lVar24 = 0x20;
    lVar26 = (longlong)plVar27 - (longlong)psVar21;
    do {
        if ((lVar24 == -0x7fffffde) || (sVar3 = *(short *)(lVar26 + (longlong)psVar21), sVar3 == 0)) {
            if (lVar24 != 0) goto LAB_14063ffad;
            break;
        }
        *psVar21 = sVar3;
        psVar21 = psVar21 + 1;
        lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    psVar21 = psVar21 + -1;
    LAB_14063ffad:
    *psVar21 = 0;
    *(undefined4 *)(lVar37 + 0xf8) = 1;
    LAB_14063ffbc:
    lVar24 = FUN_1401a5ae0(lVar23);
    if (lVar24 != 0) {
        for (lVar26 = *(longlong *)(lVar24 + 0x60); lVar26 != 0; lVar26 = *(longlong *)(lVar26 + 0x38))
        {
            pwVar36 = L"derived";
            pwVar25 = (wchar_t *)FUN_1401a4f40(lVar26 + 8);
            if (pwVar25 == L"derived") {
                LAB_140640059:
                if (lVar26 != 0) {
                    uVar30 = FUN_1401a4f40(lVar26 + 0x20);
                    FUN_1407df428(uVar30);
                }
                break;
            }
            plVar27 = plVar31;
            if (*pwVar25 == L'\0') {
                LAB_140640048:
                if (*pwVar36 == L'\0') goto LAB_140640059;
            }
            else {
                do {
                    uVar33 = (uint)plVar27;
                    if (((*pwVar36 == L'\0') || (*pwVar25 != *pwVar36)) || (0x7ffffffe < (int)uVar33)) break;
                    pwVar25 = pwVar25 + 1;
                    pwVar36 = pwVar36 + 1;
                    uVar33 = uVar33 + 1;
                    plVar27 = (longlong *)(ulonglong)uVar33;
                } while (*pwVar25 != L'\0');
                if (uVar33 == 0x7fffffff) goto LAB_140640059;
                if (*pwVar25 == L'\0') goto LAB_140640048;
            }
        }
        plVar27 = plVar31;
        if ((*(longlong **)(lVar24 + 0x30) != (longlong *)0x0) &&
            (lVar26 = (**(code **)(**(longlong **)(lVar24 + 0x30) + 0x10))(), lVar26 != 0)) {
            plVar34 = *(longlong **)(lVar24 + 0x30);
            lVar24 = (**(code **)(*plVar34 + 0x30))(plVar34);
            if (lVar24 == 0) {
                plVar27 = (longlong *)FUN_1401a4f40(plVar34 + 3);
            }
        }
        iVar32 = FUN_1407e1970(plVar27);
        *(int *)(lVar37 + 0x50) = iVar32;
        if (iVar32 != 0) {
            *(undefined4 *)(lVar37 + 0xfc) = 1;
        }
    }
    lVar24 = FUN_1401a5ae0(lVar23);
    if (lVar24 != 0) {
        for (lVar26 = *(longlong *)(lVar24 + 0x60); lVar26 != 0; lVar26 = *(longlong *)(lVar26 + 0x38))
        {
            pwVar36 = L"derived";
            pwVar25 = (wchar_t *)FUN_1401a4f40(lVar26 + 8);
            if (pwVar25 == L"derived") {
                LAB_140640179:
                if (lVar26 != 0) {
                    uVar30 = FUN_1401a4f40(lVar26 + 0x20);
                    FUN_1407df428(uVar30,&DAT_1409e4114);
                }
                break;
            }
            plVar27 = plVar31;
            if (*pwVar25 == L'\0') {
                LAB_140640168:
                if (*pwVar36 == L'\0') goto LAB_140640179;
            }
            else {
                do {
                    uVar33 = (uint)plVar27;
                    if (((*pwVar36 == L'\0') || (*pwVar25 != *pwVar36)) || (0x7ffffffe < (int)uVar33)) break;
                    pwVar25 = pwVar25 + 1;
                    pwVar36 = pwVar36 + 1;
                    uVar33 = uVar33 + 1;
                    plVar27 = (longlong *)(ulonglong)uVar33;
                } while (*pwVar25 != L'\0');
                if (uVar33 == 0x7fffffff) goto LAB_140640179;
                if (*pwVar25 == L'\0') goto LAB_140640168;
            }
        }
        plVar27 = plVar31;
        if ((*(longlong **)(lVar24 + 0x30) != (longlong *)0x0) &&
            (lVar26 = (**(code **)(**(longlong **)(lVar24 + 0x30) + 0x10))(), lVar26 != 0)) {
            plVar34 = *(longlong **)(lVar24 + 0x30);
            lVar24 = (**(code **)(*plVar34 + 0x30))(plVar34);
            if (lVar24 == 0) {
                plVar27 = (longlong *)FUN_1401a4f40(plVar34 + 3);
            }
        }
        pauVar28 = (undefined (*) [16])FUN_14018ecc0(local_48,plVar27);
        auVar40 = maxps(extraout_XMM0 & (undefined  [16])0x0,*pauVar28);
        *(undefined4 *)(lVar37 + 0x100) = 1;
        auVar40 = minps(auVar40,_DAT_140b7b240);
        iVar32 = (int)(SUB164(auVar40,0) * 255.0 + 0.5);
        uVar33 = (uint)(SUB164(auVar40 >> 0x20,0) * 255.0 + 0.5);
        iVar41 = (int)(SUB164(auVar40 >> 0x40,0) * 255.0 + 0.5);
        iVar42 = (int)(SUB164(auVar40 >> 0x60,0) * 255.0 + 0.5);
        cVar43 = (char)((uint)iVar32 >> 0x10);
        cVar44 = (char)((uint)iVar42 >> 0x10);
        uVar19 = (ulonglong)
                CONCAT16((char)(uVar33 >> 0x10),
                         CONCAT15((char)(uVar33 >> 8),CONCAT14((char)uVar33,iVar41)));
        uVar5 = ((ulonglong)uVar33 & 0xff000000) << 0x20 | uVar19;
        Var13 = CONCAT19((char)((uint)iVar32 >> 8),CONCAT18((char)iVar32,uVar5));
        auVar14 = CONCAT111((char)((uint)iVar32 >> 0x18),CONCAT110(cVar43,Var13));
        auVar15 = CONCAT113((char)((uint)iVar42 >> 8),CONCAT112((char)iVar42,auVar14));
        sVar3 = (short)iVar41;
        cVar6 = (0 < sVar3) * (sVar3 < 0xff) * (char)iVar41 - (0xff < sVar3);
        sVar3 = (short)(uVar19 >> 0x10);
        sVar10 = (short)(uVar19 >> 0x20);
        cVar7 = (0 < sVar10) * (sVar10 < 0xff) * (char)(uVar19 >> 0x20) - (0xff < sVar10);
        sVar10 = (short)(uVar5 >> 0x30);
        sVar11 = (short)((unkuint10)Var13 >> 0x40);
        cVar8 = (0 < sVar11) * (sVar11 < 0xff) * (char)iVar32 - (0xff < sVar11);
        sVar11 = SUB122(auVar14 >> 0x50,0);
        sVar12 = SUB142(auVar15 >> 0x60,0);
        cVar9 = (0 < sVar12) * (sVar12 < 0xff) * (char)iVar42 - (0xff < sVar12);
        sVar12 = SUB162(CONCAT115((char)((uint)iVar42 >> 0x18),CONCAT114(cVar44,auVar15)) >> 0x70,0);
        sVar16 = CONCAT11((0 < sVar3) * (sVar3 < 0xff) * (char)(uVar19 >> 0x10) - (0xff < sVar3),cVar6);
        uVar17 = CONCAT13((0 < sVar10) * (sVar10 < 0xff) * (char)(uVar19 >> 0x30) - (0xff < sVar10),
                          CONCAT12(cVar7,sVar16));
        uVar18 = CONCAT15((0 < sVar11) * (sVar11 < 0xff) * cVar43 - (0xff < sVar11),
                          CONCAT14(cVar8,uVar17));
        sVar3 = (short)((uint)uVar17 >> 0x10);
        sVar10 = (short)((uint6)uVar18 >> 0x20);
        sVar11 = (short)(CONCAT17((0 < sVar12) * (sVar12 < 0xff) * cVar44 - (0xff < sVar12),
                                  CONCAT16(cVar9,uVar18)) >> 0x30);
        *(uint *)(lVar37 + 0x54) =
                CONCAT13((0 < sVar11) * (sVar11 < 0xff) * cVar9 - (0xff < sVar11),
                         CONCAT12((0 < sVar10) * (sVar10 < 0xff) * cVar8 - (0xff < sVar10),
                                  CONCAT11((0 < sVar3) * (sVar3 < 0xff) * cVar7 - (0xff < sVar3),
                                           (0 < sVar16) * (sVar16 < 0xff) * cVar6 - (0xff < sVar16))));
    }
    lVar23 = FUN_1401a5ae0(lVar23);
    if (lVar23 != 0) {
        for (lVar24 = *(longlong *)(lVar23 + 0x60); lVar24 != 0; lVar24 = *(longlong *)(lVar24 + 0x38))
        {
            pwVar36 = L"derived";
            pwVar25 = (wchar_t *)FUN_1401a4f40();
            if (pwVar25 == L"derived") {
                LAB_1406402c4:
                if (lVar24 != 0) {
                    uVar30 = FUN_1401a4f40(lVar24 + 0x20);
                    FUN_1407df428(uVar30,&DAT_1409e4114);
                }
                break;
            }
            plVar27 = plVar31;
            if (*pwVar25 == L'\0') {
                LAB_1406402b3:
                if (*pwVar36 == L'\0') goto LAB_1406402c4;
            }
            else {
                do {
                    uVar33 = (uint)plVar27;
                    if (((*pwVar36 == L'\0') || (*pwVar25 != *pwVar36)) || (0x7ffffffe < (int)uVar33)) break;
                    pwVar25 = pwVar25 + 1;
                    pwVar36 = pwVar36 + 1;
                    uVar33 = uVar33 + 1;
                    plVar27 = (longlong *)(ulonglong)uVar33;
                } while (*pwVar25 != L'\0');
                if (uVar33 == 0x7fffffff) goto LAB_1406402c4;
                if (*pwVar25 == L'\0') goto LAB_1406402b3;
            }
        }
        puVar4 = *(undefined8 **)(lVar23 + 0x30);
        // WARNING: Read-only address (ram,0x000140b7b240) is written
        while ((plVar27 = plVar31, puVar4 != (undefined8 *)0x0 &&
                                   (plVar27 = (longlong *)(**(code **)*puVar4)(puVar4), plVar27 == (longlong *)0x0))) {
            puVar4 = (undefined8 *)puVar4[9];
        }
        while (plVar27 != (longlong *)0x0) {
            // WARNING: Read-only address (ram,0x000140b7b240) is written
            lVar23 = (**(code **)(*plVar27 + 0x30))();
            if (lVar23 == 0) {
                FUN_1401a4f40();
            }
            iVar32 = FUN_140640ac0();
            if (iVar32 != 0) {
                *(undefined4 *)(lVar37 + 0x104) = 1;
                *(uint *)(lVar37 + 0x58) = *(uint *)(lVar37 + 0x58) | 1;
            }
            puVar4 = (undefined8 *)plVar27[9];
            // WARNING: Read-only address (ram,0x000140b7b240) is written
            while ((plVar27 = plVar31, puVar4 != (undefined8 *)0x0 &&
                                       (plVar27 = (longlong *)(**(code **)*puVar4)(puVar4), plVar27 == (longlong *)0x0))) {
                puVar4 = (undefined8 *)puVar4[9];
            }
        }
    }
    LAB_140640394:
    lVar23 = FUN_1401a5ae0(lVar22);
    iVar32 = 0;
    uVar33 = 0;
    if (lVar23 != 0) {
        for (lVar24 = *(longlong *)(lVar23 + 0x60); lVar24 != 0; lVar24 = *(longlong *)(lVar24 + 0x38))
        {
            pwVar36 = L"derived";
            pwVar25 = (wchar_t *)FUN_1401a4f40();
            if (pwVar25 == L"derived") {
                LAB_140640429:
                if (lVar24 != 0) {
                    uVar30 = FUN_1401a4f40(lVar24 + 0x20);
                    FUN_1407df428(uVar30);
                }
                break;
            }
            iVar41 = iVar32;
            if (*pwVar25 != L'\0') {
                do {
                    if (((*pwVar36 == L'\0') || (*pwVar25 != *pwVar36)) || (0x7ffffffe < iVar41)) break;
                    pwVar25 = pwVar25 + 1;
                    pwVar36 = pwVar36 + 1;
                    iVar41 = iVar41 + 1;
                } while (*pwVar25 != L'\0');
                if (iVar41 == 0x7fffffff) goto LAB_140640429;
            }
            if ((*pwVar25 == L'\0') && (*pwVar36 == L'\0')) goto LAB_140640429;
        }
        for (lVar24 = *(longlong *)(lVar23 + 0x60); lVar24 != 0; lVar24 = *(longlong *)(lVar24 + 0x38))
        {
            psVar35 = &DAT_140b28eb8;
            psVar21 = (short *)FUN_1401a4f40();
            if (psVar21 == &DAT_140b28eb8) {
                LAB_14064056f:
                if ((lVar24 != 0) &&
                    ((lVar24 = FUN_1401a4f40(lVar24 + 0x20), lVar24 != 0 &&
                                                             (iVar41 = FUN_140640c20(), iVar41 != 0)))) {
                    *(undefined4 *)(lVar37 + 0x108) = 1;
                    lVar24 = *(longlong *)(lVar23 + 0x60);
                    goto joined_r0x0001406405b0;
                }
                break;
            }
            iVar41 = iVar32;
            if (*psVar21 != 0) {
                do {
                    if (((*psVar35 == 0) || (*psVar21 != *psVar35)) || (0x7ffffffe < iVar41)) break;
                    psVar21 = psVar21 + 1;
                    psVar35 = psVar35 + 1;
                    iVar41 = iVar41 + 1;
                } while (*psVar21 != 0);
                if (iVar41 == 0x7fffffff) goto LAB_14064056f;
            }
            if ((*psVar21 == 0) && (*psVar35 == 0)) goto LAB_14064056f;
        }
    }
    goto LAB_1406404ca;
    joined_r0x0001406405b0:
    if (lVar24 == 0) goto LAB_140640722;
    pwVar36 = L"attachment";
    pwVar25 = (wchar_t *)FUN_1401a4f40();
    if (pwVar25 == L"attachment") {
        LAB_14064061c:
        if ((lVar24 != 0) && (lVar24 = FUN_1401a4f40(lVar24 + 0x20), lVar24 != 0)) {
            if (DAT_140c63838 == (code *)0x0) {
                if ((_DAT_140c64c4c == 0) && (iVar32 = FUN_140217a60(), -1 < iVar32)) {
                    uVar33 = (**(code **)(*DAT_140c65358 + 0x28))();
                }
            }
            else {
                uVar33 = (*DAT_140c63838)(&PTR_u_ModelAttachment_140a6b780);
            }
            uVar39 = 0;
            if (uVar33 != 0) goto LAB_140640690;
        }
        goto LAB_140640722;
    }
    iVar41 = iVar32;
    if (*pwVar25 != L'\0') {
        do {
            if (((*pwVar36 == L'\0') || (*pwVar25 != *pwVar36)) || (0x7ffffffe < iVar41)) break;
            pwVar25 = pwVar25 + 1;
            pwVar36 = pwVar36 + 1;
            iVar41 = iVar41 + 1;
        } while (*pwVar25 != L'\0');
        if (iVar41 == 0x7fffffff) goto LAB_14064061c;
    }
    if ((*pwVar25 == L'\0') && (*pwVar36 == L'\0')) goto LAB_14064061c;
    lVar24 = *(longlong *)(lVar24 + 0x38);
    goto joined_r0x0001406405b0;
    while (uVar39 = uVar39 + 1, uVar39 < uVar33) {
        LAB_140640690:
        puVar29 = (undefined4 *)0x0;
        if (DAT_140c63848 == (code *)0x0) {
            if (_DAT_140c64c4c == 0) {
                iVar32 = FUN_140217a60();
                if (iVar32 < 0) {
                    puVar29 = (undefined4 *)0x0;
                }
                else {
                    puVar29 = (undefined4 *)(**(code **)(*DAT_140c65358 + 0x20))(DAT_140c65358,uVar39);
                }
            }
        }
        else {
            puVar29 = (undefined4 *)(*DAT_140c63848)(&PTR_u_ModelAttachment_140a6b780,uVar39);
        }
        lVar26 = 0;
        uVar5 = *(ulonglong *)(puVar29 + 2);
        if ((uVar5 != 0) && (uVar5 <= DAT_140c3fe70)) {
            lVar26 = DAT_140c3fe68 + uVar5;
        }
        iVar32 = FUN_14018e2c0(lVar24,lVar26);
        if (iVar32 == 0) {
            *(undefined4 *)(lVar37 + 0x60) = *puVar29;
            break;
        }
    }
    LAB_140640722:
    uVar30 = 0;
    lVar24 = FUN_1401a5ae0(lVar23,L"Angle");
    if (lVar24 != 0) {
        if ((*(longlong **)(lVar24 + 0x30) != (longlong *)0x0) &&
            (lVar26 = (**(code **)(**(longlong **)(lVar24 + 0x30) + 0x10))(), lVar26 != 0)) {
            plVar31 = *(longlong **)(lVar24 + 0x30);
            lVar24 = (**(code **)(*plVar31 + 0x30))(plVar31);
            if (lVar24 == 0) {
                uVar30 = FUN_1401a4f40(plVar31 + 3);
            }
        }
        FUN_1407dfe80(uVar30,0);
        *(float *)(lVar37 + 100) = (float)extraout_XMM0_Qa;
    }
    lVar23 = FUN_1401a5ae0(lVar23,L"Distance");
    if (lVar23 == 0) goto LAB_1406404ca;
    if ((*(longlong **)(lVar23 + 0x30) == (longlong *)0x0) ||
        (lVar24 = (**(code **)(**(longlong **)(lVar23 + 0x30) + 0x10))(), lVar24 == 0)) {
        LAB_1406407d3:
        uVar30 = 0;
    }
    else {
        plVar31 = *(longlong **)(lVar23 + 0x30);
        lVar23 = (**(code **)(*plVar31 + 0x30))(plVar31);
        if (lVar23 != 0) goto LAB_1406407d3;
        uVar30 = FUN_1401a4f40(plVar31 + 3);
    }
    FUN_1407dfe80(uVar30,0);
    *(float *)(lVar37 + 0x68) = (float)extraout_XMM0_Qa_00;
    LAB_1406404ca:
    lVar23 = FUN_1401a5ae0(lVar22);
    if (lVar23 != 0) {
        for (lVar24 = *(longlong *)(lVar23 + 0x60); lVar24 != 0; lVar24 = *(longlong *)(lVar24 + 0x38))
        {
            pwVar36 = L"derived";
            pwVar25 = (wchar_t *)FUN_1401a4f40();
            if (pwVar25 == L"derived") {
                LAB_1406407f5:
                if (lVar24 != 0) {
                    uVar30 = FUN_1401a4f40(lVar24 + 0x20);
                    FUN_1407df428(uVar30,&DAT_1409e4114);
                }
                break;
            }
            iVar32 = 0;
            if (*pwVar25 == L'\0') {
                LAB_140640557:
                if (*pwVar36 == L'\0') goto LAB_1406407f5;
            }
            else {
                do {
                    if (((*pwVar36 == L'\0') || (*pwVar25 != *pwVar36)) || (0x7ffffffe < iVar32)) break;
                    pwVar25 = pwVar25 + 1;
                    pwVar36 = pwVar36 + 1;
                    iVar32 = iVar32 + 1;
                } while (*pwVar25 != L'\0');
                if (iVar32 == 0x7fffffff) goto LAB_1406407f5;
                if (*pwVar25 == L'\0') goto LAB_140640557;
            }
        }
        piVar1 = (int *)(lVar37 + 0x6c);
        for (puVar4 = *(undefined8 **)(lVar23 + 0x30); puVar4 != (undefined8 *)0x0;
             puVar4 = (undefined8 *)puVar4[9]) {
            // WARNING: Read-only address (ram,0x000140b7b240) is written
            plVar31 = (longlong *)(**(code **)*puVar4)(puVar4);
            if (plVar31 != (longlong *)0x0) goto LAB_140640852;
        }
        // WARNING: Read-only address (ram,0x000140b7b240) is written
        plVar31 = (longlong *)0x0;
        LAB_140640852:
        piVar38 = piVar1;
        if (plVar31 != (longlong *)0x0) {
            do {
                lVar23 = (**(code **)(*plVar31 + 0x30))(plVar31);
                if (lVar23 == 0) {
                    FUN_1401a4f40(plVar31 + 3);
                }
                iVar32 = FUN_140640d80();
                if ((iVar32 != 0) && (*piVar38 != 0)) {
                    piVar38 = piVar38 + 1;
                }
                if ((int *)(lVar37 + 0x98U) <= piVar38) break;
                for (puVar4 = (undefined8 *)plVar31[9]; puVar4 != (undefined8 *)0x0;
                     puVar4 = (undefined8 *)puVar4[9]) {
                    // WARNING: Read-only address (ram,0x000140b7b240) is written
                    plVar31 = (longlong *)(**(code **)*puVar4)(puVar4);
                    if (plVar31 != (longlong *)0x0) goto LAB_1406408c7;
                }
                // WARNING: Read-only address (ram,0x000140b7b240) is written
                plVar31 = (longlong *)0x0;
                LAB_1406408c7:
            } while (plVar31 != (longlong *)0x0);
        }
        *(uint *)(lVar37 + 0x10c) = (uint)(piVar38 != piVar1);
    }
    LAB_1406408df:
    lVar22 = FUN_1401a5bc0(lVar22);
    if (lVar22 == 0) goto LAB_14064090c;
    goto LAB_14063fd80;
}



undefined8 FUN_140640960(undefined8 param_1,undefined8 param_2,ushort *param_3,int *param_4)

{
    ushort uVar1;
    ulonglong uVar2;
    ushort uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ushort *puVar6;
    int iVar7;
    undefined **ppuVar8;
    ushort uVar9;

    iVar7 = 0;
    ppuVar8 = &PTR_u_General_140c392e0;
    while (*ppuVar8 == (undefined *)0x0) {
        LAB_140640a87:
        ppuVar8 = ppuVar8 + 1;
        iVar7 = iVar7 + 1;
        if (0x140c394d7 < (longlong)ppuVar8) {
            return 0;
        }
    }
    puVar6 = param_3;
    do {
        uVar1 = *(ushort *)(((longlong)*ppuVar8 - (longlong)param_3) + (longlong)puVar6);
        uVar9 = uVar1;
        if (uVar1 < 0x80) {
            if ((ushort)(uVar1 - 0x41) < 0x1a) {
                uVar9 = uVar1 + 0x20;
            }
        }
        else {
            uVar4 = 0;
            uVar5 = 0x3d1;
            do {
                uVar2 = (uVar5 - uVar4 >> 1) + uVar4;
                if (*(ushort *)(&UNK_140a41a80 + uVar2 * 2) <= uVar1) {
                    if (uVar1 <= *(ushort *)(&UNK_140a41a80 + uVar2 * 2)) {
                        uVar9 = *(ushort *)(&UNK_140a40af0 + uVar2 * 2);
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
        }
        else {
            uVar4 = 0;
            uVar5 = 0x3d1;
            do {
                uVar2 = (uVar5 - uVar4 >> 1) + uVar4;
                if (*(ushort *)(&UNK_140a41a80 + uVar2 * 2) <= uVar3) {
                    if (uVar3 <= *(ushort *)(&UNK_140a41a80 + uVar2 * 2)) {
                        uVar3 = *(ushort *)(&UNK_140a40af0 + uVar2 * 2);
                        break;
                    }
                    uVar4 = uVar2 + 1;
                    uVar2 = uVar5;
                }
                uVar5 = uVar2;
            } while (uVar4 < uVar2);
        }
        if (uVar9 != uVar3) goto LAB_140640a87;
        if (uVar1 == 0) {
            if (param_4 != (int *)0x0) {
                *param_4 = iVar7;
            }
            return 1;
        }
        puVar6 = puVar6 + 1;
    } while( true );
}



undefined8 FUN_140640ac0(undefined8 param_1,undefined8 param_2,ushort *param_3,int *param_4)

{
    ushort uVar1;
    ulonglong uVar2;
    ushort uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ushort *puVar6;
    int iVar7;
    undefined **ppuVar8;
    ushort uVar9;

    iVar7 = 0;
    ppuVar8 = &PTR_u_GfxFont_3D_140b29ab8;
    while (*ppuVar8 == (undefined *)0x0) {
        LAB_140640be7:
        ppuVar8 = ppuVar8 + 1;
        iVar7 = iVar7 + 1;
        if (0x140b29adf < (longlong)ppuVar8) {
            return 0;
        }
    }
    puVar6 = param_3;
    do {
        uVar1 = *(ushort *)(((longlong)*ppuVar8 - (longlong)param_3) + (longlong)puVar6);
        uVar9 = uVar1;
        if (uVar1 < 0x80) {
            if ((ushort)(uVar1 - 0x41) < 0x1a) {
                uVar9 = uVar1 + 0x20;
            }
        }
        else {
            uVar4 = 0;
            uVar5 = 0x3d1;
            do {
                uVar2 = (uVar5 - uVar4 >> 1) + uVar4;
                if (*(ushort *)(&UNK_140a41a80 + uVar2 * 2) <= uVar1) {
                    if (uVar1 <= *(ushort *)(&UNK_140a41a80 + uVar2 * 2)) {
                        uVar9 = *(ushort *)(&UNK_140a40af0 + uVar2 * 2);
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
        }
        else {
            uVar4 = 0;
            uVar5 = 0x3d1;
            do {
                uVar2 = (uVar5 - uVar4 >> 1) + uVar4;
                if (*(ushort *)(&UNK_140a41a80 + uVar2 * 2) <= uVar3) {
                    if (uVar3 <= *(ushort *)(&UNK_140a41a80 + uVar2 * 2)) {
                        uVar3 = *(ushort *)(&UNK_140a40af0 + uVar2 * 2);
                        break;
                    }
                    uVar4 = uVar2 + 1;
                    uVar2 = uVar5;
                }
                uVar5 = uVar2;
            } while (uVar4 < uVar2);
        }
        if (uVar9 != uVar3) goto LAB_140640be7;
        if (uVar1 == 0) {
            if (param_4 != (int *)0x0) {
                *param_4 = iVar7;
            }
            return 1;
        }
        puVar6 = puVar6 + 1;
    } while( true );
}



undefined8 FUN_140640c20(undefined8 param_1,undefined8 param_2,ushort *param_3,int *param_4)

{
    ushort uVar1;
    ulonglong uVar2;
    ushort uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ushort *puVar6;
    int iVar7;
    undefined **ppuVar8;
    ushort uVar9;

    iVar7 = 0;
    ppuVar8 = &PTR_u_None_140c39178;
    while (*ppuVar8 == (undefined *)0x0) {
        LAB_140640d47:
        ppuVar8 = ppuVar8 + 1;
        iVar7 = iVar7 + 1;
        if (0x140c3919f < (longlong)ppuVar8) {
            return 0;
        }
    }
    puVar6 = param_3;
    do {
        uVar1 = *(ushort *)(((longlong)*ppuVar8 - (longlong)param_3) + (longlong)puVar6);
        uVar9 = uVar1;
        if (uVar1 < 0x80) {
            if ((ushort)(uVar1 - 0x41) < 0x1a) {
                uVar9 = uVar1 + 0x20;
            }
        }
        else {
            uVar4 = 0;
            uVar5 = 0x3d1;
            do {
                uVar2 = (uVar5 - uVar4 >> 1) + uVar4;
                if (*(ushort *)(&UNK_140a41a80 + uVar2 * 2) <= uVar1) {
                    if (uVar1 <= *(ushort *)(&UNK_140a41a80 + uVar2 * 2)) {
                        uVar9 = *(ushort *)(&UNK_140a40af0 + uVar2 * 2);
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
        }
        else {
            uVar4 = 0;
            uVar5 = 0x3d1;
            do {
                uVar2 = (uVar5 - uVar4 >> 1) + uVar4;
                if (*(ushort *)(&UNK_140a41a80 + uVar2 * 2) <= uVar3) {
                    if (uVar3 <= *(ushort *)(&UNK_140a41a80 + uVar2 * 2)) {
                        uVar3 = *(ushort *)(&UNK_140a40af0 + uVar2 * 2);
                        break;
                    }
                    uVar4 = uVar2 + 1;
                    uVar2 = uVar5;
                }
                uVar5 = uVar2;
            } while (uVar4 < uVar2);
        }
        if (uVar9 != uVar3) goto LAB_140640d47;
        if (uVar1 == 0) {
            if (param_4 != (int *)0x0) {
                *param_4 = iVar7;
            }
            return 1;
        }
        puVar6 = puVar6 + 1;
    } while( true );
}



undefined8 FUN_140640d80(undefined8 param_1,undefined8 param_2,ushort *param_3,int *param_4)

{
    ushort uVar1;
    ulonglong uVar2;
    ushort uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ushort *puVar6;
    int iVar7;
    undefined **ppuVar8;
    ushort uVar9;

    iVar7 = 0;
    ppuVar8 = &PTR_u_None_140c39280;
    while (*ppuVar8 == (undefined *)0x0) {
        LAB_140640ea7:
        ppuVar8 = ppuVar8 + 1;
        iVar7 = iVar7 + 1;
        if (0x140c392df < (longlong)ppuVar8) {
            return 0;
        }
    }
    puVar6 = param_3;
    do {
        uVar1 = *(ushort *)(((longlong)*ppuVar8 - (longlong)param_3) + (longlong)puVar6);
        uVar9 = uVar1;
        if (uVar1 < 0x80) {
            if ((ushort)(uVar1 - 0x41) < 0x1a) {
                uVar9 = uVar1 + 0x20;
            }
        }
        else {
            uVar4 = 0;
            uVar5 = 0x3d1;
            do {
                uVar2 = (uVar5 - uVar4 >> 1) + uVar4;
                if (*(ushort *)(&UNK_140a41a80 + uVar2 * 2) <= uVar1) {
                    if (uVar1 <= *(ushort *)(&UNK_140a41a80 + uVar2 * 2)) {
                        uVar9 = *(ushort *)(&UNK_140a40af0 + uVar2 * 2);
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
        }
        else {
            uVar4 = 0;
            uVar5 = 0x3d1;
            do {
                uVar2 = (uVar5 - uVar4 >> 1) + uVar4;
                if (*(ushort *)(&UNK_140a41a80 + uVar2 * 2) <= uVar3) {
                    if (uVar3 <= *(ushort *)(&UNK_140a41a80 + uVar2 * 2)) {
                        uVar3 = *(ushort *)(&UNK_140a40af0 + uVar2 * 2);
                        break;
                    }
                    uVar4 = uVar2 + 1;
                    uVar2 = uVar5;
                }
                uVar5 = uVar2;
            } while (uVar4 < uVar2);
        }
        if (uVar9 != uVar3) goto LAB_140640ea7;
        if (uVar1 == 0) {
            if (param_4 != (int *)0x0) {
                *param_4 = iVar7;
            }
            return 1;
        }
        puVar6 = puVar6 + 1;
    } while( true );
}



undefined8 FUN_140640ee0(undefined8 param_1,ulonglong param_2)

{
    longlong lVar1;
    int local_28 [7];
    undefined4 local_c;

    lVar1 = DAT_140c65898;
    local_c = 0;
    (**(code **)(**(longlong **)(DAT_140c65898 + 0x71b8) + 0x250))
            (*(longlong **)(DAT_140c65898 + 0x71b8),param_2,local_28);
    if (local_28[0] == 0) {
        (**(code **)(**(longlong **)(lVar1 + 0x71c0) + 0x250))
                (*(longlong **)(lVar1 + 0x71c0),param_2 & 0xffffffff,local_28);
        if (local_28[0] == 0) {
            return 1;
        }
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140640f60(undefined8 param_1,longlong param_2)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    undefined auStack424 [32];
    longlong **local_188;
    undefined8 *local_180;
    undefined8 local_178;
    undefined8 local_170;
    undefined local_168 [8];
    undefined4 uStack352;
    undefined4 uStack348;
    longlong *local_158;
    undefined8 local_150;
    undefined4 local_148;
    undefined8 local_140;
    undefined8 local_138;
    undefined4 local_130;
    undefined8 local_128;
    undefined local_118 [16];
    undefined local_108 [16];
    undefined local_f8 [192];
    float local_38;
    ulonglong local_18;

    lVar3 = DAT_140c65898;
    if (param_2 != 0) {
        local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack424;
        if (((*(longlong *)(DAT_140c65898 + 0x78) == param_2) && (*(int *)(DAT_140c65898 + 0x1b80) == 0)
            ) && (plVar1 = *(longlong **)(DAT_140c65898 + 0x7248), plVar1 != (longlong *)0x0)) {
            local_188 = (longlong **)0x0;
            _local_168 = CONCAT412(*(float *)(param_2 + 0x11ec) + 0.0,
                                   CONCAT48(*(float *)(param_2 + 0x11e8) + 0.0,
                                            CONCAT44(*(float *)(param_2 + 0x11e4) +
                                                     *(float *)(param_2 + 0x12c4) *
                                                     *(float *)(param_2 + 0x570),
                                                     *(float *)(param_2 + 0x11e0) + 0.0)));
            iVar4 = (**(code **)(*plVar1 + 0x1b8))(plVar1,local_168,local_f8,0x20000);
            if ((iVar4 != 0) && (local_168._4_4_ < local_38 - 1.0)) {
                local_180 = &local_150;
                local_188 = &local_158;
                local_158 = (longlong *)0x0;
                local_150 = 0x4041;
                local_148 = 1;
                local_140 = 0;
                local_108 = ZEXT1216(CONCAT48(uStack352,CONCAT44(local_168._4_4_ + 1.0,local_168._0_4_)));
                local_138 = 0;
                local_130 = 0;
                local_128 = 0;
                local_118 = ZEXT1216(CONCAT48(uStack352,CONCAT44(local_38,local_168._0_4_)));
                local_178 = 0x3f80000000000000;
                iVar4 = (**(code **)(**(longlong **)(lVar3 + 0x7248) + 0x1a8))
                        (uStack352,*(longlong **)(lVar3 + 0x7248),local_108,local_118,&local_178);
                if (iVar4 == 0) {
                    if (local_168._4_4_ <
                        (local_38 - 1.0) -
                        *(float *)(*(longlong *)(lVar3 + 0x6490) + 0x12c4) *
                        *(float *)(*(longlong *)(lVar3 + 0x6490) + 0x570)) {
                        lVar2 = *(longlong *)(lVar3 + 0x71a0);
                        if (*(int *)(lVar2 + 0x54) == 0) {
                            *(undefined4 *)(lVar2 + 0x40) = local_168._0_4_;
                            *(float *)(lVar2 + 0x44) = local_168._4_4_;
                            *(undefined4 *)(lVar2 + 0x48) = uStack352;
                            *(undefined4 *)(lVar2 + 0x4c) = uStack348;
                        }
                        lVar2 = *(longlong *)(lVar3 + 0x71a0);
                        if (*(int *)(lVar2 + 0x54) == 0) {
                            *(undefined4 *)(lVar2 + 0x260) = local_168._0_4_;
                            *(float *)(lVar2 + 0x264) = local_168._4_4_;
                            *(undefined4 *)(lVar2 + 0x268) = uStack352;
                            *(undefined4 *)(lVar2 + 0x26c) = uStack348;
                        }
                    }
                    local_178 = CONCAT44(*(undefined4 *)(*(longlong *)(lVar3 + 0x71a0) + 0x40),1);
                    local_170 = *(undefined8 *)(*(longlong *)(lVar3 + 0x71a0) + 0x44);
                    FUN_1403f4900(lVar3,0xfc,&local_178);
                    *(undefined4 *)(*(longlong *)(lVar3 + 0x71a0) + 0x54) = 1;
                    *(undefined4 *)(lVar3 + 0x1b80) = 1;
                }
                if (local_158 != (longlong *)0x0) {
                    (**(code **)(*local_158 + 8))();
                }
            }
        }
        FUN_1407db4f0(local_18 ^ (ulonglong)auStack424);
    }
    return;
}