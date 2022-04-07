//
// Created by flop on 04.04.22.
//
#include "../../include.h"

undefined8 FUN_14044c170(undefined8 param_1,uint *param_2)

{
    short sVar1;
    uint uVar2;
    longlong lVar3;
    short *psVar4;
    longlong lVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    longlong lVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    undefined8 *puVar12;
    undefined4 *puVar13;
    longlong lVar14;
    ulonglong uVar15;
    ulonglong uVar16;
    ulonglong local_res8;

    lVar5 = DAT_140c65908;
    FUN_14044dcc0();
    lVar14 = 0;
    *(undefined4 *)(lVar5 + 8) = 1;
    local_res8 = 0;
    if (*param_2 != 0) {
        do {
            puVar8 = (undefined8 *)0x0;
            puVar6 = (undefined8 *)FUN_14018b280();
            puVar12 = puVar8;
            if (puVar6 != (undefined8 *)0x0) {
                puVar6[2] = 0;
                puVar6[3] = 0;
                puVar6[5] = 0;
                puVar6[4] = 0;
                puVar6[7] = 0;
                puVar6[6] = 0;
                puVar12 = puVar6;
            }
            *(uint *)puVar12 = *(uint *)(*(longlong *)(param_2 + 2) + 0x10 + lVar14);
            *(uint *)((longlong)puVar12 + 4) = *(uint *)(*(longlong *)(param_2 + 2) + 0x14 + lVar14);
            lVar3 = puVar12[2];
            psVar4 = *(short **)(lVar14 + *(longlong *)(param_2 + 2));
            if (psVar4 == (short *)0x0) {
                puVar12[2] = 0;
            }
            else {
                sVar1 = *psVar4;
                puVar6 = puVar8;
                while (sVar1 != 0) {
                    puVar6 = (undefined8 *)((longlong)puVar6 + 1);
                    sVar1 = psVar4[(longlong)puVar6];
                }
                puVar7 = (undefined8 *)FUN_14018b280((longlong)puVar6 * 2 + 0x12,0);
                if (puVar7 != (undefined8 *)0x0) {
                    puVar7[1] = puVar6;
                    *puVar7 = &PTR_LAB_140b55060;
                    puVar8 = puVar7;
                }
                puVar8 = puVar8 + 2;
                FUN_1407db590(puVar8,psVar4);
                *(undefined2 *)((longlong)puVar6 * 2 + (longlong)puVar8) = 0;
                puVar12[2] = puVar8;
            }
            puVar8 = (undefined8 *)0x0;
            if (lVar3 != 0) {
                (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))();
            }
            lVar3 = puVar12[3];
            psVar4 = *(short **)(*(longlong *)(param_2 + 2) + 8 + lVar14);
            if (psVar4 == (short *)0x0) {
                puVar12[3] = 0;
            }
            else {
                sVar1 = *psVar4;
                puVar6 = puVar8;
                while (sVar1 != 0) {
                    puVar6 = (undefined8 *)((longlong)puVar6 + 1);
                    sVar1 = psVar4[(longlong)puVar6];
                }
                puVar7 = (undefined8 *)FUN_14018b280((longlong)puVar6 * 2 + 0x12,0);
                if (puVar7 != (undefined8 *)0x0) {
                    puVar7[1] = puVar6;
                    *puVar7 = &PTR_LAB_140b55060;
                    puVar8 = puVar7;
                }
                puVar8 = puVar8 + 2;
                FUN_1407db590(puVar8,psVar4);
                *(undefined2 *)((longlong)puVar6 * 2 + (longlong)puVar8) = 0;
                puVar12[3] = puVar8;
            }
            uVar15 = 0;
            if (lVar3 != 0) {
                (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))();
            }
            *(uint *)(puVar12 + 1) = *(uint *)(*(longlong *)(param_2 + 2) + 0x18 + lVar14);
            *(uint *)((longlong)puVar12 + 0xc) = *(uint *)(*(longlong *)(param_2 + 2) + 0x1c + lVar14);
            uVar16 = *(ulonglong *)(lVar5 + 0x50);
            if (uVar16 != 0) {
                uVar11 = uVar16;
                do {
                    uVar10 = (uVar11 - uVar15 >> 1) + uVar15;
                    uVar2 = **(uint **)(*(longlong *)(lVar5 + 0x48) + uVar10 * 8);
                    if (uVar2 <= *(uint *)puVar12) {
                        if (*(uint *)puVar12 <= uVar2) goto LAB_14044c3f0;
                        uVar15 = uVar10 + 1;
                        uVar10 = uVar11;
                    }
                    uVar11 = uVar10;
                } while (uVar15 < uVar10);
            }
            lVar9 = FUN_14018db00(*(undefined8 *)(lVar5 + 0x48),uVar16 + 1,8);
            lVar3 = uVar15 * 8;
            FUN_1407db590(lVar9 + 8 + lVar3,*(longlong *)(lVar5 + 0x48) + lVar3);
            *(undefined8 **)(lVar9 + lVar3) = puVar12;
            if (*(longlong *)(lVar5 + 0x48) != lVar9) {
                FUN_1407db590(lVar9);
                if (*(longlong *)(lVar5 + 0x48) != 0) {
                    (**(code **)(*(longlong *)(*(longlong *)(lVar5 + 0x48) + -0x10) + 8))();
                }
                *(longlong *)(lVar5 + 0x48) = lVar9;
            }
            *(ulonglong *)(lVar5 + 0x50) = uVar16 + 1;
            LAB_14044c3f0:
            lVar14 = lVar14 + 0x20;
            local_res8 = local_res8 + 1;
        } while (local_res8 < *param_2);
    }
    uVar15 = 0;
    *(uint *)(lVar5 + 0x30) = param_2[4];
    if (param_2[5] != 0) {
        uVar16 = uVar15;
        do {
            puVar8 = (undefined8 *)0x0;
            lVar14 = FUN_1404516a0((longlong *)(lVar5 + 0x38));
            puVar13 = (undefined4 *)(lVar14 * 0x20 + *(longlong *)(lVar5 + 0x38));
            *puVar13 = *(undefined4 *)(uVar16 + *(longlong *)(param_2 + 6));
            lVar14 = *(longlong *)(puVar13 + 4);
            psVar4 = *(short **)(*(longlong *)(param_2 + 6) + 8 + uVar16);
            if (psVar4 == (short *)0x0) {
                *(undefined8 *)(puVar13 + 4) = 0;
            }
            else {
                sVar1 = *psVar4;
                puVar12 = puVar8;
                while (sVar1 != 0) {
                    puVar12 = (undefined8 *)((longlong)puVar12 + 1);
                    sVar1 = psVar4[(longlong)puVar12];
                }
                puVar6 = (undefined8 *)FUN_14018b280((longlong)puVar12 * 2 + 0x12,0);
                if (puVar6 != (undefined8 *)0x0) {
                    puVar6[1] = puVar12;
                    *puVar6 = &PTR_LAB_140b55060;
                    puVar8 = puVar6;
                }
                puVar8 = puVar8 + 2;
                FUN_1407db590(puVar8,psVar4,(longlong)puVar12 * 2);
                *(undefined2 *)((longlong)puVar12 * 2 + (longlong)puVar8) = 0;
                *(undefined8 **)(puVar13 + 4) = puVar8;
            }
            if (lVar14 != 0) {
                (**(code **)(*(longlong *)(lVar14 + -0x10) + 8))();
            }
            uVar15 = uVar15 + 1;
            uVar16 = uVar16 + 0x20;
            puVar13[1] = *(undefined4 *)(*(longlong *)(param_2 + 6) + -0x10 + uVar16);
            puVar13[6] = *(undefined4 *)(*(longlong *)(param_2 + 6) + -0xc + uVar16);
            puVar13[2] = *(undefined4 *)(*(longlong *)(param_2 + 6) + -8 + uVar16);
        } while (uVar15 < param_2[5]);
    }
    return 0;
}



undefined8 FUN_14044c540(undefined8 param_1,uint *param_2)

{
    short sVar1;
    longlong lVar2;
    short *psVar3;
    longlong lVar4;
    longlong lVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    ulonglong uVar8;
    undefined8 *puVar9;
    ulonglong uVar10;
    longlong lVar11;
    longlong lVar12;
    ulonglong local_res8;

    lVar5 = DAT_140c65908;
    uVar8 = 0;
    uVar10 = uVar8;
    if (*(longlong *)(DAT_140c65908 + 0x18) != 0) {
        do {
            lVar11 = *(longlong *)(uVar10 + 8 + *(longlong *)(lVar5 + 0x10));
            if (lVar11 != 0) {
                (**(code **)(*(longlong *)(lVar11 + -0x10) + 8))(lVar11 + -0x10);
            }
            uVar8 = uVar8 + 1;
            uVar10 = uVar10 + 0x38;
        } while (uVar8 < *(ulonglong *)(lVar5 + 0x18));
    }
    lVar11 = 0;
    *(undefined8 *)(lVar5 + 0x18) = 0;
    local_res8 = 0;
    lVar12 = lVar11;
    if (*param_2 != 0) {
        do {
            puVar7 = (undefined8 *)0x0;
            FUN_140451380(lVar5 + 0x10);
            *(undefined4 *)(lVar12 + 0x1c + *(longlong *)(lVar5 + 0x10)) =
                    *(undefined4 *)(lVar11 + 0x10 + *(longlong *)(param_2 + 2));
            *(undefined4 *)(lVar12 + 0x20 + *(longlong *)(lVar5 + 0x10)) =
                    *(undefined4 *)(lVar11 + 0x14 + *(longlong *)(param_2 + 2));
            lVar2 = *(longlong *)(lVar5 + 0x10);
            psVar3 = *(short **)(lVar11 + 0x20 + *(longlong *)(param_2 + 2));
            lVar4 = *(longlong *)(lVar12 + 8 + lVar2);
            if (psVar3 == (short *)0x0) {
                *(undefined8 *)(lVar12 + 8 + lVar2) = 0;
            }
            else {
                sVar1 = *psVar3;
                puVar9 = puVar7;
                while (sVar1 != 0) {
                    puVar9 = (undefined8 *)((longlong)puVar9 + 1);
                    sVar1 = psVar3[(longlong)puVar9];
                }
                puVar6 = (undefined8 *)FUN_14018b280((longlong)puVar9 * 2 + 0x12,0);
                if (puVar6 != (undefined8 *)0x0) {
                    puVar6[1] = puVar9;
                    *puVar6 = &PTR_LAB_140b55060;
                    puVar7 = puVar6;
                }
                puVar7 = puVar7 + 2;
                FUN_1407db590(puVar7,psVar3,(longlong)puVar9 * 2);
                *(undefined2 *)((longlong)puVar9 * 2 + (longlong)puVar7) = 0;
                *(undefined8 **)(lVar12 + 8 + lVar2) = puVar7;
            }
            if (lVar4 != 0) {
                (**(code **)(*(longlong *)(lVar4 + -0x10) + 8))(lVar4 + -0x10);
            }
            local_res8 = local_res8 + 1;
            *(undefined4 *)(lVar12 + 0x18 + *(longlong *)(lVar5 + 0x10)) =
                    *(undefined4 *)(lVar11 + 0x18 + *(longlong *)(param_2 + 2));
            *(undefined8 *)(lVar12 + *(longlong *)(lVar5 + 0x10)) =
                    *(undefined8 *)(lVar11 + *(longlong *)(param_2 + 2));
            *(undefined8 *)(lVar12 + 0x10 + *(longlong *)(lVar5 + 0x10)) =
                    *(undefined8 *)(lVar11 + 8 + *(longlong *)(param_2 + 2));
            *(undefined4 *)(lVar12 + 0x24 + *(longlong *)(lVar5 + 0x10)) =
                    *(undefined4 *)(lVar11 + 0x28 + *(longlong *)(param_2 + 2));
            *(undefined8 *)(lVar12 + 0x28 + *(longlong *)(lVar5 + 0x10)) =
                    *(undefined8 *)(lVar11 + 0x30 + *(longlong *)(param_2 + 2));
            *(undefined4 *)(lVar12 + 0x34 + *(longlong *)(lVar5 + 0x10)) =
                    *(undefined4 *)(lVar11 + 0x38 + *(longlong *)(param_2 + 2));
            lVar11 = lVar11 + 0x40;
            lVar12 = lVar12 + 0x38;
        } while (local_res8 < *param_2);
    }
    if (DAT_140c65898 != 0) {
        FUN_1400ea3e0(*(undefined8 *)(*(longlong *)(DAT_140c65898 + 0x7fe0) + 0x60),
                      "StorePurchaseHistoryReady","");
    }
    return 0;
}



longlong FUN_14044c780(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
    longlong lVar1;
    longlong lVar2;

    if (DAT_140c65898 != 0) {
        FUN_1400ea3e0(*(undefined8 *)(*(longlong *)(DAT_140c65898 + 0x7fe0) + 0x60),
                      "StorePurchaseOfferResult",&DAT_1409f00ac,param_2,param_3);
    }
    lVar2 = DAT_140c66da8;
    if (DAT_140c66da8 != 0) {
        while (lVar1 = DAT_140c66da8, *(int *)(lVar2 + 0x170) == 5) {
            lVar2 = *(longlong *)(lVar2 + 0xb0);
            if (lVar2 == 0) {
                return lVar2;
            }
        }
        for (; (lVar1 != 0 && (*(int *)(lVar1 + 0x170) == 5)); lVar1 = *(longlong *)(lVar1 + 0xb0)) {
        }
        FUN_1400ea3e0(*(undefined8 *)(lVar1 + 0x48),"StorePurchaseOfferResult",&DAT_1409f007c,param_2,
                      param_3);
    }
    return 0;
}



undefined8 FUN_14044c840(undefined8 param_1,undefined4 *param_2)

{
    short sVar1;
    short *psVar2;
    undefined8 uVar3;
    longlong lVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    undefined8 *puVar10;
    longlong lVar11;
    undefined8 *puVar12;
    undefined8 *puVar13;
    undefined8 *puVar14;
    longlong lVar15;
    undefined local_58 [8];
    longlong local_50;

    lVar4 = DAT_140c65908;
    psVar2 = *(short **)(param_2 + 0x10);
    puVar13 = (undefined8 *)0x0;
    lVar11 = *(longlong *)(DAT_140c65908 + 0x1c8);
    if (psVar2 == (short *)0x0) {
        *(undefined8 *)(DAT_140c65908 + 0x1c8) = 0;
    }
    else {
        sVar1 = *psVar2;
        puVar14 = puVar13;
        while (sVar1 != 0) {
            puVar14 = (undefined8 *)((longlong)puVar14 + 1);
            sVar1 = psVar2[(longlong)puVar14];
        }
        puVar10 = (undefined8 *)FUN_14018b280((longlong)puVar14 * 2 + 0x12,0);
        puVar12 = puVar13;
        if (puVar10 != (undefined8 *)0x0) {
            *puVar10 = &PTR_LAB_140b55060;
            puVar10[1] = puVar14;
            puVar12 = puVar10;
        }
        puVar12 = puVar12 + 2;
        FUN_1407db590(puVar12,psVar2,(longlong)puVar14 * 2);
        *(undefined2 *)((longlong)puVar14 * 2 + (longlong)puVar12) = 0;
        *(undefined8 **)(lVar4 + 0x1c8) = puVar12;
    }
    if (lVar11 != 0) {
        (**(code **)(*(longlong *)(lVar11 + -0x10) + 8))(lVar11 + -0x10);
    }
    uVar3 = *(undefined8 *)(param_2 + 4);
    iVar5 = FUN_14018e2c0(uVar3,L"null");
    if (iVar5 != 0) {
        lVar11 = FUN_140450ed0(local_58,uVar3);
        lVar15 = *(longlong *)(lVar11 + 0x10) - *(longlong *)(lVar11 + 8) >> 1;
        puVar12 = (undefined8 *)FUN_14018b280(lVar15 * 2 + 0x12,0);
        puVar14 = puVar13;
        if (puVar12 != (undefined8 *)0x0) {
            *puVar12 = &PTR_LAB_140b55060;
            puVar12[1] = lVar15;
            puVar14 = puVar12;
        }
        puVar14 = puVar14 + 2;
        FUN_1407db590(puVar14,*(undefined8 *)(lVar11 + 8),lVar15 * 2);
        *(undefined2 *)(lVar15 * 2 + (longlong)puVar14) = 0;
        lVar11 = *(longlong *)(lVar4 + 0x1d0);
        *(undefined8 **)(lVar4 + 0x1d0) = puVar14;
        if (lVar11 != 0) {
            (**(code **)(*(longlong *)(lVar11 + -0x10) + 8))(lVar11 + -0x10);
        }
        if (local_50 != 0) {
            FUN_14018b900(local_50,0);
        }
    }
    uVar3 = *(undefined8 *)(param_2 + 2);
    iVar6 = FUN_14018e2c0(uVar3,L"null");
    if (iVar6 != 0) {
        lVar11 = FUN_140450ed0(local_58,uVar3);
        lVar15 = *(longlong *)(lVar11 + 0x10) - *(longlong *)(lVar11 + 8) >> 1;
        puVar12 = (undefined8 *)FUN_14018b280(lVar15 * 2 + 0x12,0);
        puVar14 = puVar13;
        if (puVar12 != (undefined8 *)0x0) {
            *puVar12 = &PTR_LAB_140b55060;
            puVar12[1] = lVar15;
            puVar14 = puVar12;
        }
        puVar14 = puVar14 + 2;
        FUN_1407db590(puVar14,*(undefined8 *)(lVar11 + 8),lVar15 * 2);
        *(undefined2 *)(lVar15 * 2 + (longlong)puVar14) = 0;
        lVar11 = *(longlong *)(lVar4 + 0x1d8);
        *(undefined8 **)(lVar4 + 0x1d8) = puVar14;
        if (lVar11 != 0) {
            (**(code **)(*(longlong *)(lVar11 + -0x10) + 8))(lVar11 + -0x10);
        }
        if (local_50 != 0) {
            FUN_14018b900(local_50,0);
        }
    }
    uVar3 = *(undefined8 *)(param_2 + 6);
    iVar7 = FUN_14018e2c0(uVar3,L"null");
    if (iVar7 != 0) {
        lVar11 = FUN_140450ed0(local_58,uVar3);
        lVar15 = *(longlong *)(lVar11 + 0x10) - *(longlong *)(lVar11 + 8) >> 1;
        puVar12 = (undefined8 *)FUN_14018b280(lVar15 * 2 + 0x12,0);
        puVar14 = puVar13;
        if (puVar12 != (undefined8 *)0x0) {
            *puVar12 = &PTR_LAB_140b55060;
            puVar12[1] = lVar15;
            puVar14 = puVar12;
        }
        puVar14 = puVar14 + 2;
        FUN_1407db590(puVar14,*(undefined8 *)(lVar11 + 8),lVar15 * 2);
        *(undefined2 *)(lVar15 * 2 + (longlong)puVar14) = 0;
        lVar11 = *(longlong *)(lVar4 + 0x1e0);
        *(undefined8 **)(lVar4 + 0x1e0) = puVar14;
        if (lVar11 != 0) {
            (**(code **)(*(longlong *)(lVar11 + -0x10) + 8))(lVar11 + -0x10);
        }
        if (local_50 != 0) {
            FUN_14018b900(local_50,0);
        }
    }
    uVar3 = *(undefined8 *)(param_2 + 8);
    iVar8 = FUN_14018e2c0(uVar3,L"null");
    if (iVar8 != 0) {
        lVar11 = FUN_140450ed0(local_58,uVar3);
        lVar15 = *(longlong *)(lVar11 + 0x10) - *(longlong *)(lVar11 + 8) >> 1;
        puVar12 = (undefined8 *)FUN_14018b280(lVar15 * 2 + 0x12,0);
        puVar14 = puVar13;
        if (puVar12 != (undefined8 *)0x0) {
            *puVar12 = &PTR_LAB_140b55060;
            puVar12[1] = lVar15;
            puVar14 = puVar12;
        }
        puVar14 = puVar14 + 2;
        FUN_1407db590(puVar14,*(undefined8 *)(lVar11 + 8),lVar15 * 2);
        *(undefined2 *)(lVar15 * 2 + (longlong)puVar14) = 0;
        lVar11 = *(longlong *)(lVar4 + 0x1e8);
        *(undefined8 **)(lVar4 + 0x1e8) = puVar14;
        if (lVar11 != 0) {
            (**(code **)(*(longlong *)(lVar11 + -0x10) + 8))(lVar11 + -0x10);
        }
        if (local_50 != 0) {
            FUN_14018b900(local_50,0);
        }
    }
    uVar3 = *(undefined8 *)(param_2 + 10);
    iVar9 = FUN_14018e2c0(uVar3,L"null");
    if (iVar9 != 0) {
        lVar11 = FUN_140450ed0(local_58,uVar3);
        lVar15 = *(longlong *)(lVar11 + 0x10) - *(longlong *)(lVar11 + 8) >> 1;
        puVar14 = (undefined8 *)FUN_14018b280(lVar15 * 2 + 0x12,0);
        if (puVar14 != (undefined8 *)0x0) {
            puVar14[1] = lVar15;
            *puVar14 = &PTR_LAB_140b55060;
            puVar13 = puVar14;
        }
        puVar13 = puVar13 + 2;
        FUN_1407db590(puVar13,*(undefined8 *)(lVar11 + 8),lVar15 * 2);
        *(undefined2 *)(lVar15 * 2 + (longlong)puVar13) = 0;
        lVar11 = *(longlong *)(lVar4 + 0x1f0);
        *(undefined8 **)(lVar4 + 0x1f0) = puVar13;
        if (lVar11 != 0) {
            (**(code **)(*(longlong *)(lVar11 + -0x10) + 8))(lVar11 + -0x10);
        }
        if (local_50 != 0) {
            FUN_14018b900(local_50,0);
        }
    }
    lVar11 = DAT_140c66da8;
    if (DAT_140c65898 != 0) {
        FUN_1400ea3e0(*(undefined8 *)(*(longlong *)(DAT_140c65898 + 0x7fe0) + 0x60),
                      "StorePurchaseVirtualCurrencyPackageResult","bibbbbbSSfffS",*param_2,param_2[1],
                      iVar5,iVar6,iVar7,iVar8,iVar9,*(undefined8 *)(param_2 + 0xe),
                      *(undefined8 *)(param_2 + 0xc),(double)(float)param_2[0x12],
                      (double)(float)param_2[0x13],(double)(float)param_2[0x14],
                      *(undefined8 *)(param_2 + 0x16));
        lVar11 = DAT_140c66da8;
    }
    while( true ) {
        if (lVar11 == 0) {
            return 0;
        }
        lVar4 = DAT_140c66da8;
        if (*(int *)(lVar11 + 0x170) != 5) break;
        lVar11 = *(longlong *)(lVar11 + 0xb0);
    }
    for (; (lVar4 != 0 && (*(int *)(lVar4 + 0x170) == 5)); lVar4 = *(longlong *)(lVar4 + 0xb0)) {
    }
    FUN_1400ea3e0(*(undefined8 *)(lVar4 + 0x48),"StorePurchaseVirtualCurrencyPackageResult",
                  "bibbbbbSSfffS",*param_2,param_2[1],iVar5,iVar6,iVar7,iVar8,iVar9,
                  *(undefined8 *)(param_2 + 0xe),*(undefined8 *)(param_2 + 0xc),
                  (double)(float)param_2[0x12],(double)(float)param_2[0x13],
                  (double)(float)param_2[0x14],*(undefined8 *)(param_2 + 0x16));
    return 0;
}



longlong FUN_14044cdf0(undefined8 param_1,undefined4 *param_2)

{
    longlong lVar1;
    longlong lVar2;

    if (DAT_140c65898 != 0) {
        FUN_1400ea3e0(*(undefined8 *)(*(longlong *)(DAT_140c65898 + 0x7fe0) + 0x60),
                      "StoreCompleteOrderVirtualCurrencyPackageResult",&DAT_1409f0024,*param_2,
                      param_2[1]);
    }
    lVar2 = DAT_140c66da8;
    if (DAT_140c66da8 != 0) {
        while (lVar1 = DAT_140c66da8, *(int *)(lVar2 + 0x170) == 5) {
            lVar2 = *(longlong *)(lVar2 + 0xb0);
            if (lVar2 == 0) {
                return lVar2;
            }
        }
        for (; (lVar1 != 0 && (*(int *)(lVar1 + 0x170) == 5)); lVar1 = *(longlong *)(lVar1 + 0xb0)) {
        }
        FUN_1400ea3e0(*(undefined8 *)(lVar1 + 0x48),"StoreCompleteOrderVirtualCurrencyPackageResult",
                      &DAT_1409effec,*param_2,param_2[1]);
    }
    return 0;
}



longlong FUN_14044cea0(undefined8 param_1,undefined4 *param_2)

{
    longlong lVar1;
    longlong lVar2;

    if (DAT_140c65898 != 0) {
        FUN_1400ea3e0(*(undefined8 *)(*(longlong *)(DAT_140c65898 + 0x7fe0) + 0x60),"StoreError",
                      &DAT_1409eff74,*param_2);
    }
    lVar2 = DAT_140c66da8;
    if (DAT_140c66da8 != 0) {
        while (lVar1 = DAT_140c66da8, *(int *)(lVar2 + 0x170) == 5) {
            lVar2 = *(longlong *)(lVar2 + 0xb0);
            if (lVar2 == 0) {
                return lVar2;
            }
        }
        for (; (lVar1 != 0 && (*(int *)(lVar1 + 0x170) == 5)); lVar1 = *(longlong *)(lVar1 + 0xb0)) {
        }
        FUN_1400ea3e0(*(undefined8 *)(lVar1 + 0x48),"StoreError",&DAT_1409f003c,*param_2);
    }
    return 0;
}



longlong FUN_14044cf40(void)

{
    longlong lVar1;
    longlong lVar2;

    lVar2 = DAT_140c65898;
    *DAT_140c65908 = 1;
    if (lVar2 != 0) {
        FUN_1400ea3e0(*(undefined8 *)(*(longlong *)(lVar2 + 0x7fe0) + 0x60),"StoreCatalogUpdated","");
    }
    lVar2 = DAT_140c66da8;
    if (DAT_140c66da8 != 0) {
        while (lVar1 = DAT_140c66da8, *(int *)(lVar2 + 0x170) == 5) {
            lVar2 = *(longlong *)(lVar2 + 0xb0);
            if (lVar2 == 0) {
                return lVar2;
            }
        }
        for (; (lVar1 != 0 && (*(int *)(lVar1 + 0x170) == 5)); lVar1 = *(longlong *)(lVar1 + 0xb0)) {
        }
        FUN_1400ea3e0(*(undefined8 *)(lVar1 + 0x48),"StoreCatalogUpdated",&DAT_1409d13ef);
    }
    return 0;
}



void FUN_14044cff0(longlong param_1)

{
    int *piVar1;
    int iVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    uVar3 = *(ulonglong *)(param_1 + 0x50);
    iVar2 = 0x1a;
    if ((*(byte *)(*(longlong *)(DAT_140c635f0 + 0x16e8) + 4) & 1) != 0) {
        iVar2 = 0x33;
    }
    uVar5 = 0;
    if (uVar3 != 0) {
        do {
            if ((*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + uVar5 * 8) + 4) == iVar2) &&
                (uVar4 = 0, uVar3 != 0)) {
                do {
                    piVar1 = *(int **)(*(longlong *)(param_1 + 0x48) + uVar5 * 8);
                    if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + uVar4 * 8) + 4) == *piVar1) {
                        FUN_140003460(piVar1 + 0xc);
                    }
                    uVar4 = uVar4 + 1;
                } while (uVar4 < *(ulonglong *)(param_1 + 0x50));
            }
            uVar3 = *(ulonglong *)(param_1 + 0x50);
            uVar5 = uVar5 + 1;
        } while (uVar5 < uVar3);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14044d0a0(longlong param_1,longlong *param_2,longlong param_3)

{
    undefined4 uVar1;
    uint uVar2;
    longlong lVar3;
    undefined *puVar4;
    longlong *plVar5;
    int iVar6;
    longlong lVar7;
    undefined8 *puVar8;
    longlong lVar9;
    undefined *puVar10;
    ulonglong uVar11;
    longlong lVar12;
    undefined *puVar13;
    ulonglong uVar14;
    undefined *puVar15;
    ulonglong uVar16;
    undefined auStack184 [32];
    longlong *local_98;
    longlong local_90;
    undefined local_88 [8];
    undefined *local_80;
    longlong local_78;
    undefined8 *local_68;
    ulonglong local_60;
    uint local_58;
    ulonglong local_40;

    local_40 = DAT_140c0f7b0 ^ (ulonglong)auStack184;
    local_98 = param_2;
    local_90 = param_1;
    local_80 = (undefined *)FUN_14018b280(0x28);
    local_78 = 0;
    *local_80 = 0;
    *(undefined8 *)(local_80 + 8) = 0;
    uVar14 = 0;
    *(undefined **)(local_80 + 0x10) = local_80;
    *(undefined **)(local_80 + 0x18) = local_80;
    if (*(longlong *)(param_3 + 0x10) != 0) {
        lVar12 = 0;
        do {
            if (*(int *)(lVar12 + *(longlong *)(param_3 + 8)) == 0) {
                uVar1 = *(undefined4 *)(lVar12 + 4 + *(longlong *)(param_3 + 8));
                if (DAT_140c63840 == (code *)0x0) {
                    if ((_DAT_140c64170 != 0) || (iVar6 = FUN_1401e89c0(), iVar6 < 0)) goto LAB_14044d186;
                    lVar7 = (**(code **)(*DAT_140c652d0 + 0x18))(DAT_140c652d0,uVar1);
                }
                else {
                    lVar7 = (*DAT_140c63840)(&PTR_u_AccountItem_140a690c8);
                }
                if (lVar7 != 0) {
                    FUN_1400293c0(local_88);
                }
            }
            LAB_14044d186:
            uVar14 = uVar14 + 1;
            lVar12 = lVar12 + 0x10;
            param_1 = local_90;
        } while (uVar14 < *(ulonglong *)(param_3 + 0x10));
    }
    puVar13 = *(undefined **)(local_80 + 0x10);
    puVar15 = local_80;
    if (puVar13 != local_80) {
        do {
            local_58 = *(uint *)(puVar13 + 0x20);
            uVar14 = 0;
            if (*(ulonglong *)(param_1 + 0x28) != 0) {
                uVar16 = *(ulonglong *)(param_1 + 0x28);
                do {
                    uVar11 = (uVar16 - uVar14 >> 1) + uVar14;
                    uVar2 = **(uint **)(*(longlong *)(param_1 + 0x20) + uVar11 * 0x28);
                    if (uVar2 <= local_58) {
                        if (local_58 <= uVar2) {
                            lVar12 = *(longlong *)(param_1 + 0x20) + uVar11 * 0x28;
                            if (lVar12 != 0) {
                                uVar14 = *(ulonglong *)(lVar12 + 0x10);
                                local_60 = uVar14;
                                if (uVar14 == 0) {
                                    puVar8 = (undefined8 *)0x0;
                                }
                                else {
                                    puVar8 = (undefined8 *)FUN_14018b280(uVar14 * 4 + 0x10,0);
                                    if (puVar8 == (undefined8 *)0x0) {
                                        puVar8 = (undefined8 *)&DAT_00000010;
                                    }
                                    else {
                                        *puVar8 = &PTR_LAB_140b55060;
                                        puVar8[1] = uVar14;
                                        puVar8 = puVar8 + 2;
                                    }
                                }
                                local_68 = puVar8;
                                FUN_1407db590(puVar8);
                                uVar16 = 0;
                                if (*(longlong *)(param_3 + 0x10) != 0) {
                                    lVar7 = 0;
                                    do {
                                        if ((*(int *)(lVar7 + *(longlong *)(param_3 + 8)) == 0) &&
                                            (uVar11 = 0, uVar14 != 0)) {
                                            do {
                                                if (*(int *)((longlong)puVar8 + uVar11 * 4) ==
                                                    *(int *)(lVar7 + 4 + *(longlong *)(param_3 + 8))) {
                                                    FUN_1401c2f20(&local_68);
                                                    puVar8 = local_68;
                                                    uVar14 = local_60;
                                                    break;
                                                }
                                                uVar11 = uVar11 + 1;
                                            } while (uVar11 < uVar14);
                                        }
                                        uVar16 = uVar16 + 1;
                                        lVar7 = lVar7 + 0x10;
                                        param_2 = local_98;
                                    } while (uVar16 < *(ulonglong *)(param_3 + 0x10));
                                }
                                if (uVar14 == 0) {
                                    lVar3 = param_2[1];
                                    lVar7 = lVar3 + 1;
                                    lVar9 = FUN_14018db00(*param_2,lVar7);
                                    plVar5 = local_98;
                                    *(longlong *)(lVar9 + lVar3 * 8) = lVar12;
                                    if (*local_98 != lVar9) {
                                        FUN_1407db590(lVar9);
                                        lVar12 = *plVar5;
                                        if (lVar12 != 0) {
                                            (**(code **)(*(longlong *)(lVar12 + -0x10) + 8))(lVar12 + -0x10);
                                        }
                                        *plVar5 = lVar9;
                                    }
                                    plVar5[1] = lVar7;
                                }
                                param_1 = local_90;
                                puVar15 = local_80;
                                param_2 = local_98;
                                if (puVar8 != (undefined8 *)0x0) {
                                    (**(code **)(puVar8[-2] + 8))(puVar8 + -2);
                                    param_1 = local_90;
                                    puVar15 = local_80;
                                    param_2 = local_98;
                                }
                            }
                            break;
                        }
                        uVar14 = uVar11 + 1;
                        uVar11 = uVar16;
                    }
                    uVar16 = uVar11;
                } while (uVar14 < uVar11);
            }
            puVar10 = *(undefined **)(puVar13 + 0x18);
            if (puVar10 == (undefined *)0x0) {
                puVar10 = *(undefined **)(puVar13 + 8);
                if (puVar13 == *(undefined **)(puVar10 + 0x18)) {
                    do {
                        puVar13 = puVar10;
                        puVar10 = *(undefined **)(puVar13 + 8);
                    } while (puVar13 == *(undefined **)(puVar10 + 0x18));
                }
                if (*(undefined **)(puVar13 + 0x18) != puVar10) {
                    puVar13 = puVar10;
                }
            }
            else {
                for (puVar4 = *(undefined **)(puVar10 + 0x10); puVar13 = puVar10, puVar4 != (undefined *)0x0
                        ; puVar4 = *(undefined **)(puVar4 + 0x10)) {
                    puVar10 = puVar4;
                }
            }
        } while (puVar13 != puVar15);
    }
    if (local_78 != 0) {
        lVar12 = *(longlong *)(puVar15 + 8);
        puVar13 = puVar15;
        puVar15 = local_80;
        while (local_80 = puVar15, lVar12 != 0) {
            FUN_1400083b0(local_88,*(undefined8 *)(lVar12 + 0x18));
            lVar7 = *(longlong *)(lVar12 + 0x10);
            FUN_14018b900(lVar12,0);
            lVar12 = lVar7;
            puVar13 = local_80;
            puVar15 = local_80;
        }
        *(undefined **)(puVar13 + 0x10) = puVar13;
        *(undefined8 *)(puVar15 + 8) = 0;
        *(undefined **)(puVar15 + 0x18) = puVar15;
        local_78 = 0;
    }
    FUN_14018b900(puVar15,0);
    FUN_1407db4f0(local_40 ^ (ulonglong)auStack184);
    return;
}



void FUN_14044d450(longlong param_1)

{
    uint uVar1;
    uint uVar2;
    uint *puVar3;
    undefined8 uVar4;
    undefined *puVar5;
    longlong lVar6;
    undefined *puVar7;
    undefined4 *puVar8;
    ulonglong uVar9;
    undefined *puVar10;
    ulonglong uVar11;
    undefined *puVar12;
    longlong lVar13;
    longlong lVar14;
    ulonglong uVar15;
    longlong lVar16;
    ulonglong uVar17;
    undefined local_88 [8];
    undefined *local_80;
    longlong local_78;
    ulonglong local_68;
    uint local_60;
    undefined4 uStack92;
    undefined4 local_40;
    undefined4 uStack60;

    local_80 = (undefined *)FUN_14018b280();
    local_78 = 0;
    *local_80 = 0;
    local_68 = 0;
    *(undefined8 *)(local_80 + 8) = 0;
    *(undefined **)(local_80 + 0x10) = local_80;
    *(undefined **)(local_80 + 0x18) = local_80;
    if (*(longlong *)(param_1 + 0x60) != 0) {
        do {
            uVar17 = 0;
            puVar8 = *(undefined4 **)(*(longlong *)(param_1 + 0x58) + local_68 * 8);
            local_40 = *puVar8;
            if (*(longlong *)(puVar8 + 0x12) != 0) {
                uVar4 = CONCAT44(uStack60,local_40);
                uVar11 = local_68;
                uVar15 = local_68;
                do {
                    local_68 = uVar15;
                    lVar14 = 0;
                    lVar16 = *(longlong *)(*(longlong *)(*(longlong *)(puVar8 + 0x10) + uVar17 * 8) + 0x10);
                    uVar15 = local_68;
                    for (lVar13 = lVar16; local_68 = uVar11, uVar11 = local_68, lVar13 != 0;
                         lVar13 = lVar13 + -1) {
                        lVar6 = *(longlong *)
                                (*(longlong *)
                                        (*(longlong *)
                                                (*(longlong *)(*(longlong *)(param_1 + 0x58) + local_68 * 8) + 0x40) +
                                         uVar17 * 8) + 8);
                        local_68 = uVar15;
                        if (*(int *)(lVar6 + lVar14) == 0) {
                            local_60 = *(uint *)(lVar6 + 4 + lVar14);
                            puVar5 = *(undefined **)(local_80 + 8);
                            puVar7 = local_80;
                            if (*(undefined **)(local_80 + 8) == (undefined *)0x0) {
                                LAB_14044d5a3:
                                lVar6 = FUN_14018b280(0x40);
                                if ((undefined8 *)(lVar6 + 0x20) != (undefined8 *)0x0) {
                                    *(undefined8 *)(lVar6 + 0x20) = CONCAT44(uStack92,local_60);
                                    *(undefined8 *)(lVar6 + 0x28) = uVar4;
                                    *(ulonglong *)(lVar6 + 0x30) = uVar17;
                                    *(longlong *)(lVar6 + 0x38) = lVar16;
                                }
                                *(longlong *)(puVar7 + 0x10) = lVar6;
                                if (puVar7 == local_80) {
                                    *(longlong *)(local_80 + 8) = lVar6;
                                    *(longlong *)(local_80 + 0x18) = lVar6;
                                }
                                else if (puVar7 == *(undefined **)(local_80 + 0x10)) {
                                    *(longlong *)(local_80 + 0x10) = lVar6;
                                }
                            }
                            else {
                                do {
                                    puVar7 = puVar5;
                                    if (local_60 < *(uint *)(puVar7 + 0x20)) {
                                        puVar5 = *(undefined **)(puVar7 + 0x10);
                                    }
                                    else {
                                        puVar5 = *(undefined **)(puVar7 + 0x18);
                                    }
                                } while (puVar5 != (undefined *)0x0);
                                if ((puVar7 == local_80) || (local_60 < *(uint *)(puVar7 + 0x20)))
                                    goto LAB_14044d5a3;
                                lVar6 = FUN_14018b280(0x40,0);
                                if ((undefined8 *)(lVar6 + 0x20) != (undefined8 *)0x0) {
                                    *(undefined8 *)(lVar6 + 0x20) = CONCAT44(uStack92,local_60);
                                    *(undefined8 *)(lVar6 + 0x28) = uVar4;
                                    *(ulonglong *)(lVar6 + 0x30) = uVar17;
                                    *(longlong *)(lVar6 + 0x38) = lVar16;
                                }
                                *(longlong *)(puVar7 + 0x18) = lVar6;
                                if (puVar7 == *(undefined **)(local_80 + 0x18)) {
                                    *(longlong *)(local_80 + 0x18) = lVar6;
                                }
                            }
                            *(undefined **)(lVar6 + 8) = puVar7;
                            *(undefined8 *)(lVar6 + 0x10) = 0;
                            *(undefined8 *)(lVar6 + 0x18) = 0;
                            FUN_1400081c0(lVar6,local_80 + 8);
                            local_78 = local_78 + 1;
                            uVar11 = local_68;
                        }
                        lVar14 = lVar14 + 0x10;
                        uVar15 = local_68;
                    }
                    uVar17 = uVar17 + 1;
                    puVar8 = *(undefined4 **)(*(longlong *)(param_1 + 0x58) + local_68 * 8);
                } while (uVar17 < *(ulonglong *)(puVar8 + 0x12));
            }
            local_68 = local_68 + 1;
        } while (local_68 < *(ulonglong *)(param_1 + 0x60));
    }
    uVar17 = 0;
    if (*(longlong *)(param_1 + 0x80) != 0) {
        do {
            uVar15 = 0;
            lVar16 = uVar17 * 0x20 + *(longlong *)(param_1 + 0x78);
            uVar1 = *(uint *)(lVar16 + 4);
            *(undefined4 *)(lVar16 + 0xc) = 0;
            *(undefined8 *)(lVar16 + 0x10) = 0;
            *(undefined4 *)(lVar16 + 0x18) = 0;
            if (uVar1 == 0) {
                uVar15 = 0xffffffffffffffff;
                puVar5 = *(undefined **)(local_80 + 8);
                puVar7 = local_80;
                if (puVar5 != (undefined *)0x0) {
                    puVar12 = puVar5;
                    do {
                        if (*(uint *)(puVar12 + 0x20) < *(uint *)(lVar16 + 8)) {
                            puVar10 = *(undefined **)(puVar12 + 0x18);
                        }
                        else {
                            puVar10 = *(undefined **)(puVar12 + 0x10);
                            puVar7 = puVar12;
                        }
                        puVar12 = puVar10;
                    } while (puVar10 != (undefined *)0x0);
                }
                puVar12 = local_80;
                if (puVar5 != (undefined *)0x0) {
                    do {
                        if (*(uint *)(lVar16 + 8) < *(uint *)(puVar5 + 0x20)) {
                            puVar10 = *(undefined **)(puVar5 + 0x10);
                            puVar12 = puVar5;
                        }
                        else {
                            puVar10 = *(undefined **)(puVar5 + 0x18);
                        }
                        puVar5 = puVar10;
                    } while (puVar10 != (undefined *)0x0);
                }
                while (puVar7 != puVar12) {
                    if (*(ulonglong *)(puVar7 + 0x38) < uVar15) {
                        *(undefined4 *)(lVar16 + 0xc) = *(undefined4 *)(puVar7 + 0x28);
                        *(undefined8 *)(lVar16 + 0x10) = *(undefined8 *)(puVar7 + 0x30);
                        uVar15 = *(ulonglong *)(puVar7 + 0x38);
                    }
                    puVar5 = *(undefined **)(puVar7 + 0x18);
                    if (puVar5 == (undefined *)0x0) {
                        puVar5 = *(undefined **)(puVar7 + 8);
                        if (puVar7 == *(undefined **)(puVar5 + 0x18)) {
                            do {
                                puVar7 = puVar5;
                                puVar5 = *(undefined **)(puVar7 + 8);
                            } while (puVar7 == *(undefined **)(puVar5 + 0x18));
                        }
                        if (*(undefined **)(puVar7 + 0x18) != puVar5) {
                            puVar7 = puVar5;
                        }
                    }
                    else {
                        for (puVar10 = *(undefined **)(puVar5 + 0x10); puVar7 = puVar5,
                                puVar10 != (undefined *)0x0; puVar10 = *(undefined **)(puVar10 + 0x10)) {
                            puVar5 = puVar10;
                        }
                    }
                }
            }
            else if (*(ulonglong *)(param_1 + 0x50) != 0) {
                uVar11 = *(ulonglong *)(param_1 + 0x50);
                do {
                    uVar9 = (uVar11 - uVar15 >> 1) + uVar15;
                    puVar3 = *(uint **)(*(longlong *)(param_1 + 0x48) + uVar9 * 8);
                    uVar2 = *puVar3;
                    if (uVar2 <= uVar1) {
                        if (uVar1 <= uVar2) {
                            if (puVar3 != (uint *)0x0) {
                                *(undefined4 *)(lVar16 + 0x18) = 1;
                            }
                            break;
                        }
                        uVar15 = uVar9 + 1;
                        uVar9 = uVar11;
                    }
                    uVar11 = uVar9;
                } while (uVar15 < uVar9);
            }
            uVar17 = (ulonglong)((int)uVar17 + 1);
        } while (uVar17 < *(ulonglong *)(param_1 + 0x80));
    }
    if (local_78 != 0) {
        lVar16 = *(longlong *)(local_80 + 8);
        while (lVar16 != 0) {
            FUN_1400083b0(local_88,*(undefined8 *)(lVar16 + 0x18));
            lVar13 = *(longlong *)(lVar16 + 0x10);
            FUN_14018b900(lVar16,0);
            lVar16 = lVar13;
        }
        *(undefined **)(local_80 + 0x10) = local_80;
        *(undefined8 *)(local_80 + 8) = 0;
        *(undefined **)(local_80 + 0x18) = local_80;
        local_78 = 0;
    }
    FUN_14018b900(local_80,0);
    return;
}



void FUN_14044d860(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    uint uVar4;
    ulonglong uVar5;
    undefined auStack632 [32];
    undefined4 local_258;
    undefined8 local_250;
    undefined8 local_248;
    undefined4 local_240 [2];
    longlong local_238 [2];
    undefined local_228 [16];
    undefined local_218 [496];
    ulonglong local_28;

    lVar2 = DAT_140c658f0;
    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack632;
    if ((((*(int *)(param_1 + 0xe8) == 0) && (DAT_140c658f0 != 0)) && (DAT_140c65898 != 0)) &&
        (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        FUN_1400b53e0(local_218);
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x10);
        if (lVar3 != *(longlong *)(param_1 + 0xb0)) {
            do {
                lVar2 = FUN_1400b5df0(lVar2,*(undefined4 *)(lVar3 + 0x20),local_218);
                if (((lVar2 != 0) && (*(int *)(lVar2 + 0x11c) != 0)) &&
                    ((lVar2 = FUN_1403acd90(DAT_140c65b70,*(int *)(lVar2 + 0x11c),
                                            *(undefined8 *)(DAT_140c65898 + 0x78)), lVar2 != 0 &&
                                                                                    (uVar5 = 0, *(int *)(lVar2 + 0x28) != 0)))) {
                    do {
                        if (*(int *)(uVar5 * 0xa8 + 0x10 + *(longlong *)(lVar2 + 0x30)) == 0x6e) {
                            local_258 = *(undefined4 *)(uVar5 * 0xa8 + 0x40 + *(longlong *)(lVar2 + 0x30));
                            local_248 = 0;
                            local_250 = 0;
                            local_240[0] = local_258;
                            FUN_1403b4f00(local_238,&local_250);
                            FUN_140451980(param_1 + 0xf0,local_228,local_240);
                            if (local_238[0] != 0) {
                                (**(code **)(*(longlong *)(local_238[0] + -0x10) + 8))(local_238[0] + -0x10);
                            }
                            FUN_140003460();
                        }
                        uVar4 = (int)uVar5 + 1;
                        uVar5 = (ulonglong)uVar4;
                    } while (uVar4 < *(uint *)(lVar2 + 0x28));
                }
                lVar2 = *(longlong *)(lVar3 + 0x18);
                if (lVar2 == 0) {
                    lVar2 = *(longlong *)(lVar3 + 8);
                    if (lVar3 == *(longlong *)(lVar2 + 0x18)) {
                        do {
                            lVar3 = lVar2;
                            lVar2 = *(longlong *)(lVar3 + 8);
                        } while (lVar3 == *(longlong *)(lVar2 + 0x18));
                    }
                    if (*(longlong *)(lVar3 + 0x18) != lVar2) {
                        lVar3 = lVar2;
                    }
                }
                else {
                    for (lVar1 = *(longlong *)(lVar2 + 0x10); lVar3 = lVar2, lVar1 != 0;
                         lVar1 = *(longlong *)(lVar1 + 0x10)) {
                        lVar2 = lVar1;
                    }
                }
                lVar2 = DAT_140c658f0;
            } while (lVar3 != *(longlong *)(param_1 + 0xb0));
        }
        *(undefined4 *)(param_1 + 0xe8) = 1;
    }
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack632);
    return;
}



void FUN_14044da90(longlong param_1)

{
    _FILETIME _Var1;
    int iVar2;
    int iVar3;
    _FILETIME local_res8;
    undefined4 local_28 [2];
    longlong local_20;
    code *local_18;
    undefined8 local_10;

    if (*(longlong *)(param_1 + 0x168) != 0) {
        GetSystemTimeAsFileTime(&local_res8);
        iVar3 = 0;
        _Var1 = *(_FILETIME *)(*(longlong *)(*(longlong *)(param_1 + 0x160) + 0x10) + 0x20);
        if ((ulonglong)local_res8 < (ulonglong)_Var1) {
            iVar3 = (int)((ulonglong)((longlong)_Var1 - (longlong)local_res8) / 10000);
        }
        if (*(longlong *)(param_1 + 0x120) != 0) {
            FUN_140195d70(param_1 + 0x110);
        }
        local_18 = FUN_14044e0d0;
        iVar2 = 0x7fffffff;
        if (iVar3 < 0x7fffffff) {
            iVar2 = iVar3;
        }
        local_28[0] = 0;
        iVar3 = -0x80000000;
        if (-0x80000000 < iVar2) {
            iVar3 = iVar2;
        }
        local_10 = 0;
        local_20 = param_1;
        FUN_140195960(param_1 + 0x110,iVar3,local_28,4);
        local_res8 = *(_FILETIME *)(*(longlong *)(param_1 + 0x160) + 0x10);
        FUN_140007cb0(param_1 + 0x158,&local_res8);
    }
    return;
}



void FUN_14044db80(ulonglong param_1)

{
    ulonglong local_res8 [4];

    *(undefined4 *)(DAT_140c65908 + 4) = 0;
    local_res8[0] = param_1 & 0xffffffff00000000 | (ulonglong)*(uint *)(DAT_140c7aac0 + 8);
    FUN_1400161d0(DAT_140c635f0,0x82d,local_res8);
    return;
}



void FUN_14044dbd0(void)

{
    longlong lVar1;
    longlong lVar2;

    if (DAT_140c65898 != 0) {
        FUN_1400ea3e0(*(undefined8 *)(*(longlong *)(DAT_140c65898 + 0x7fe0) + 0x60),"StoreCatalogReady",
                      &DAT_1409d13df);
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"StoreLinksRefresh","");
    }
    if (((DAT_140c65a48 != 0) && (*(longlong *)(DAT_140c65a48 + 200) != 0)) &&
        (lVar2 = *(longlong *)(*(longlong *)(DAT_140c65a48 + 200) + 0x590), lVar2 != 0)) {
        FUN_1400ea3e0(lVar2,"StoreLinksRefresh",&DAT_1409d13ff);
    }
    lVar2 = DAT_140c66da8;
    if (DAT_140c66da8 == 0) {
        return;
    }
    do {
        lVar1 = DAT_140c66da8;
        if (*(int *)(lVar2 + 0x170) != 5) {
            for (; (lVar1 != 0 && (*(int *)(lVar1 + 0x170) == 5)); lVar1 = *(longlong *)(lVar1 + 0xb0)) {
            }
            FUN_1400ea3e0(*(undefined8 *)(lVar1 + 0x48),"StoreCatalogReady",&DAT_1409d13fe);
            return;
        }
        lVar2 = *(longlong *)(lVar2 + 0xb0);
    } while (lVar2 != 0);
    return;
}



void FUN_14044dcc0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    undefined4 local_28 [4];

    uVar4 = 0;
    uVar5 = uVar4;
    if (*(longlong *)(param_1 + 0x50) != 0) {
        do {
            lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x48) + uVar5 * 8);
            if (lVar1 != 0) {
                lVar2 = *(longlong *)(lVar1 + 0x30);
                if (lVar2 != 0) {
                    (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
                }
                lVar2 = *(longlong *)(lVar1 + 0x20);
                if (lVar2 != 0) {
                    (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
                }
                lVar2 = *(longlong *)(lVar1 + 0x18);
                if (lVar2 != 0) {
                    (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
                }
                lVar2 = *(longlong *)(lVar1 + 0x10);
                if (lVar2 != 0) {
                    (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
                }
                FUN_14018b900(lVar1,0);
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < *(ulonglong *)(param_1 + 0x50));
    }
    *(undefined8 *)(param_1 + 0x50) = 0;
    uVar5 = uVar4;
    if (*(longlong *)(param_1 + 0x60) != 0) {
        do {
            lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x58) + uVar5 * 8);
            if (lVar1 != 0) {
                lVar2 = *(longlong *)(lVar1 + 0x50);
                if (lVar2 != 0) {
                    (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
                }
                lVar2 = *(longlong *)(lVar1 + 0x40);
                if (lVar2 != 0) {
                    (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
                }
                lVar2 = *(longlong *)(lVar1 + 0x38);
                if (lVar2 != 0) {
                    (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
                }
                lVar2 = *(longlong *)(lVar1 + 0x30);
                if (lVar2 != 0) {
                    (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
                }
                if (*(longlong *)(lVar1 + 0x20) != 0) {
                    lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x18) + 8);
                    while (lVar2 != 0) {
                        FUN_1400083b0(lVar1 + 0x10,*(undefined8 *)(lVar2 + 0x18));
                        lVar3 = *(longlong *)(lVar2 + 0x10);
                        FUN_14018b900(lVar2,0);
                        lVar2 = lVar3;
                    }
                    *(longlong *)(*(longlong *)(lVar1 + 0x18) + 0x10) = *(longlong *)(lVar1 + 0x18);
                    *(undefined8 *)(*(longlong *)(lVar1 + 0x18) + 8) = 0;
                    *(longlong *)(*(longlong *)(lVar1 + 0x18) + 0x18) = *(longlong *)(lVar1 + 0x18);
                    *(undefined8 *)(lVar1 + 0x20) = 0;
                }
                FUN_14018b900(*(undefined8 *)(lVar1 + 0x18),0);
                FUN_14018b900(lVar1);
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < *(ulonglong *)(param_1 + 0x60));
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
    uVar5 = uVar4;
    if (*(longlong *)(param_1 + 0x70) != 0) {
        do {
            lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x68) + uVar5 * 8);
            if (lVar1 != 0) {
                lVar2 = *(longlong *)(lVar1 + 0x58);
                if (lVar2 != 0) {
                    (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
                }
                lVar2 = *(longlong *)(lVar1 + 0x50);
                if (lVar2 != 0) {
                    (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
                }
                lVar2 = *(longlong *)(lVar1 + 0x48);
                if (lVar2 != 0) {
                    (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
                }
                lVar2 = *(longlong *)(lVar1 + 0x20);
                if (lVar2 != 0) {
                    (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
                }
                lVar2 = *(longlong *)(lVar1 + 8);
                if (lVar2 != 0) {
                    (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
                }
                FUN_14018b900(lVar1,0);
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < *(ulonglong *)(param_1 + 0x70));
    }
    *(undefined8 *)(param_1 + 0x70) = 0;
    uVar5 = uVar4;
    uVar6 = uVar4;
    if (*(longlong *)(param_1 + 0x40) != 0) {
        do {
            lVar1 = *(longlong *)(uVar6 + 0x10 + *(longlong *)(param_1 + 0x38));
            if (lVar1 != 0) {
                (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
            }
            uVar5 = uVar5 + 1;
            uVar6 = uVar6 + 0x20;
        } while (uVar5 < *(ulonglong *)(param_1 + 0x40));
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
    if (*(longlong *)(param_1 + 0x120) != 0) {
        FUN_140195d70(param_1 + 0x110);
    }
    if (*(longlong *)(param_1 + 0x168) != 0) {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x160) + 8);
        while (lVar1 != 0) {
            FUN_1400083b0(param_1 + 0x158,*(undefined8 *)(lVar1 + 0x18));
            lVar2 = *(longlong *)(lVar1 + 0x10);
            FUN_14018b900(lVar1,0);
            lVar1 = lVar2;
        }
        *(longlong *)(*(longlong *)(param_1 + 0x160) + 0x10) = *(longlong *)(param_1 + 0x160);
        *(undefined8 *)(*(longlong *)(param_1 + 0x160) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0x160) + 0x18) = *(longlong *)(param_1 + 0x160);
        *(undefined8 *)(param_1 + 0x168) = 0;
    }
    if (*(longlong **)(param_1 + 0x198) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x198) + 0x68))();
        local_28[0] = 0xffffffff;
        (**(code **)(**(longlong **)(param_1 + 0x198) + 0x20))(*(longlong **)(param_1 + 0x198),local_28)
                ;
        if (*(longlong **)(param_1 + 0x198) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x198) + 8))();
            *(undefined8 *)(param_1 + 0x198) = 0;
        }
        if (*(longlong **)(param_1 + 0x1a0) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x1a0) + 8))();
            *(undefined8 *)(param_1 + 0x1a0) = 0;
        }
    }
    uVar5 = uVar4;
    if (*(longlong *)(param_1 + 0x180) != 0) {
        do {
            lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x178) + uVar5 * 8);
            if (lVar1 != 0) {
                FUN_1404511e0(lVar1);
                FUN_14018b900(lVar1,0);
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < *(ulonglong *)(param_1 + 0x180));
    }
    *(undefined8 *)(param_1 + 0x180) = 0;
    if (*(longlong *)(param_1 + 400) != 0) {
        do {
            lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x188) + uVar4 * 8);
            if (lVar1 != 0) {
                FUN_1404511e0(lVar1);
                FUN_14018b900(lVar1,0);
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < *(ulonglong *)(param_1 + 400));
    }
    *(undefined8 *)(param_1 + 400) = 0;
    return;
}



void FUN_14044e0d0(longlong param_1)

{
    int iVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    bool bVar5;
    bool bVar6;
    bool bVar7;
    bool bVar8;
    bool bVar9;
    int iVar10;
    _FILETIME *p_Var11;
    ulonglong uVar12;
    longlong lVar13;
    longlong lVar14;
    int iVar15;
    _FILETIME local_res8;

    GetSystemTimeAsFileTime(&local_res8);
    lVar3 = *(longlong *)(param_1 + 0x60);
    do {
        lVar3 = lVar3 + -1;
        if (lVar3 < 0) {
            lVar3 = *(longlong *)(param_1 + 0x70);
            while (lVar3 = lVar3 + -1, -1 < lVar3) {
                lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x68) + lVar3 * 8);
                if ((ulonglong)local_res8 < (ulonglong)*(_FILETIME *)(lVar13 + 0x38)) {
                    bVar7 = false;
                    lVar13 = *(longlong *)(lVar13 + 0x28) + -1;
                    bVar5 = false;
                    if (-1 < lVar13) {
                        lVar14 = lVar13 * 0x20;
                        bVar8 = bVar7;
                        bVar9 = bVar7;
                        do {
                            iVar15 = 0x13;
                            bVar6 = true;
                            lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x68) + lVar3 * 8) + 0x20)
                                    ;
                            p_Var11 = (_FILETIME *)(lVar14 + 0x18 + lVar4);
                            bVar7 = bVar8;
                            if ((ulonglong)*p_Var11 < (ulonglong)local_res8 || *p_Var11 == local_res8) {
                                FUN_140451a80();
                                bVar5 = bVar9;
                            }
                            else {
                                iVar1 = *(int *)(DAT_140c635f0 + 0x1708);
                                if (iVar1 == 0) {
                                    iVar10 = 6;
                                }
                                else {
                                    iVar10 = iVar15;
                                    if (iVar1 == 1) {
                                        iVar10 = 8;
                                    }
                                }
                                iVar2 = *(int *)(lVar14 + lVar4);
                                bVar5 = bVar6;
                                if (iVar2 != iVar10) {
                                    if ((iVar1 == 0) || (iVar10 = iVar15, iVar1 == 1)) {
                                        iVar10 = 0xb;
                                    }
                                    bVar5 = bVar9;
                                    bVar7 = bVar6;
                                    if (iVar2 != iVar10) {
                                        iVar10 = 7;
                                        if (iVar1 != 0) {
                                            iVar10 = iVar15;
                                        }
                                        bVar7 = bVar8;
                                        if (iVar2 == iVar10) {
                                            bVar7 = bVar6;
                                        }
                                    }
                                }
                            }
                            lVar14 = lVar14 + -0x20;
                            lVar13 = lVar13 + -1;
                            bVar8 = bVar7;
                            bVar9 = bVar5;
                        } while (-1 < lVar13);
                    }
                    if (!bVar5) {
                        *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x68) + lVar3 * 8) + 0x1c) = 0;
                    }
                    if (!bVar7) {
                        *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x68) + lVar3 * 8) + 0x18) = 0;
                    }
                }
                else {
                    if (lVar13 != 0) {
                        lVar14 = *(longlong *)(lVar13 + 0x58);
                        if (lVar14 != 0) {
                            (**(code **)(*(longlong *)(lVar14 + -0x10) + 8))(lVar14 + -0x10);
                        }
                        lVar14 = *(longlong *)(lVar13 + 0x50);
                        if (lVar14 != 0) {
                            (**(code **)(*(longlong *)(lVar14 + -0x10) + 8))(lVar14 + -0x10);
                        }
                        lVar14 = *(longlong *)(lVar13 + 0x48);
                        if (lVar14 != 0) {
                            (**(code **)(*(longlong *)(lVar14 + -0x10) + 8))(lVar14 + -0x10);
                        }
                        lVar14 = *(longlong *)(lVar13 + 0x20);
                        if (lVar14 != 0) {
                            (**(code **)(*(longlong *)(lVar14 + -0x10) + 8))(lVar14 + -0x10);
                        }
                        lVar14 = *(longlong *)(lVar13 + 8);
                        if (lVar14 != 0) {
                            (**(code **)(*(longlong *)(lVar14 + -0x10) + 8))(lVar14 + -0x10);
                        }
                        FUN_14018b900(lVar13,0);
                    }
                    FUN_140007270(param_1 + 0x68);
                }
            }
            FUN_14044dbd0();
            FUN_14044da90(param_1);
            return;
        }
        lVar13 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x58) + lVar3 * 8) + 0x48);
        joined_r0x00014044e11f:
        lVar13 = lVar13 + -1;
        if (-1 < lVar13) {
            lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x58) + lVar3 * 8);
            lVar4 = *(longlong *)(*(longlong *)(lVar14 + 0x40) + lVar13 * 8);
            if ((ulonglong)local_res8 <= (ulonglong)*(_FILETIME *)(lVar4 + 0x38) &&
                *(_FILETIME *)(lVar4 + 0x38) != local_res8) {
                uVar12 = 0;
                if (*(ulonglong *)(lVar4 + 0x28) != 0) {
                    p_Var11 = (_FILETIME *)(*(longlong *)(lVar4 + 0x20) + 0x18);
                    do {
                        if ((ulonglong)local_res8 <= (ulonglong)*p_Var11 && *p_Var11 != local_res8)
                            goto joined_r0x00014044e11f;
                        uVar12 = uVar12 + 1;
                        p_Var11 = p_Var11 + 4;
                    } while (uVar12 < *(ulonglong *)(lVar4 + 0x28));
                }
            }
            FUN_140007270(lVar14 + 0x40);
            goto joined_r0x00014044e11f;
        }
        if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x58) + lVar3 * 8) + 0x48) == 0) {
            uVar12 = 0;
            if (*(longlong *)(param_1 + 0x50) != 0) {
                do {
                    lVar13 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + uVar12 * 8) + 0x28);
                    while (lVar13 = lVar13 + -1, -1 < lVar13) {
                        lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x48) + uVar12 * 8);
                        if (*(longlong *)(*(longlong *)(lVar14 + 0x20) + lVar13 * 8) ==
                            *(longlong *)(*(longlong *)(param_1 + 0x58) + lVar3 * 8)) {
                            FUN_140007270(lVar14 + 0x20,lVar13);
                        }
                    }
                    uVar12 = uVar12 + 1;
                } while (uVar12 < *(ulonglong *)(param_1 + 0x50));
            }
            lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x58) + lVar3 * 8);
            if (lVar13 != 0) {
                lVar14 = *(longlong *)(lVar13 + 0x50);
                if (lVar14 != 0) {
                    (**(code **)(*(longlong *)(lVar14 + -0x10) + 8))(lVar14 + -0x10);
                }
                lVar14 = *(longlong *)(lVar13 + 0x40);
                if (lVar14 != 0) {
                    (**(code **)(*(longlong *)(lVar14 + -0x10) + 8))(lVar14 + -0x10);
                }
                lVar14 = *(longlong *)(lVar13 + 0x38);
                if (lVar14 != 0) {
                    (**(code **)(*(longlong *)(lVar14 + -0x10) + 8))(lVar14 + -0x10);
                }
                if (*(longlong *)(lVar13 + 0x30) != 0) {
                    (**(code **)(*(longlong *)(*(longlong *)(lVar13 + 0x30) + -0x10) + 8))();
                }
                if (*(longlong *)(lVar13 + 0x20) != 0) {
                    lVar14 = *(longlong *)(*(longlong *)(lVar13 + 0x18) + 8);
                    while (lVar14 != 0) {
                        FUN_1400083b0(lVar13 + 0x10,*(undefined8 *)(lVar14 + 0x18));
                        lVar4 = *(longlong *)(lVar14 + 0x10);
                        FUN_14018b900(lVar14,0);
                        lVar14 = lVar4;
                    }
                    *(longlong *)(*(longlong *)(lVar13 + 0x18) + 0x10) = *(longlong *)(lVar13 + 0x18);
                    *(undefined8 *)(*(longlong *)(lVar13 + 0x18) + 8) = 0;
                    *(longlong *)(*(longlong *)(lVar13 + 0x18) + 0x18) = *(longlong *)(lVar13 + 0x18);
                    *(undefined8 *)(lVar13 + 0x20) = 0;
                }
                FUN_14018b900(*(undefined8 *)(lVar13 + 0x18),0);
                FUN_14018b900(lVar13,0);
            }
            FUN_140007270(param_1 + 0x58);
        }
    } while( true );
}



short * FUN_14044e4b0(longlong param_1)

{
    short sVar1;
    ulonglong uVar2;
    int iVar3;
    uint uVar4;
    short *psVar5;
    longlong lVar6;
    short *psVar7;
    short *psVar8;
    longlong *local_res8;
    longlong local_res10;
    undefined4 local_58;
    undefined4 local_54;
    longlong local_50;
    code *local_48;
    undefined8 local_40;
    undefined4 local_38;

    if ((*(longlong **)(param_1 + 0x198) != (longlong *)0x0) &&
        (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x198) + 0x18))(), iVar3 < 4)) {
        return (short *)0x0;
    }
    uVar4 = DAT_140c636a8 - *(int *)(param_1 + 0x1b0);
    if (uVar4 < *(uint *)(param_1 + 0x1c0)) {
        if (*(int *)(param_1 + 0x1b4) == *(int *)(param_1 + 0x1bc)) {
            return (short *)0x80004005;
        }
        *(int *)(param_1 + 0x1b4) = *(int *)(param_1 + 0x1b4) + 1;
    }
    else if (uVar4 < *(uint *)(param_1 + 0x1b8)) {
        *(uint *)(param_1 + 0x1b0) = *(uint *)(param_1 + 0x1c0) + *(int *)(param_1 + 0x1b0);
    }
    else {
        *(int *)(param_1 + 0x1b0) = DAT_140c636a8;
        *(undefined4 *)(param_1 + 0x1b4) = 1;
    }
    psVar7 = (short *)0x0;
    local_res8 = (longlong *)0x0;
    uVar2 = *(ulonglong *)(*(longlong *)(DAT_140c635f0 + 0x16e8) + 0x58);
    psVar8 = psVar7;
    if (uVar2 != 0) {
        if (DAT_140c3fe70 < uVar2) {
            psVar8 = (short *)0x0;
        }
        else {
            psVar8 = (short *)(DAT_140c3fe68 + uVar2);
        }
    }
    sVar1 = *psVar8;
    psVar5 = psVar7;
    while (sVar1 != 0) {
        psVar5 = (short *)((longlong)psVar5 + 1);
        sVar1 = psVar8[(longlong)psVar5];
    }
    lVar6 = (longlong)psVar5 * 2 >> 1;
    psVar5 = psVar7;
    if (lVar6 + 1U < 0x7fffffffffffffff) {
        psVar5 = (short *)FUN_14018b280((lVar6 + 1U) * 2,0);
    }
    FUN_1407db590(psVar5,psVar8,lVar6 * 2);
    psVar8 = psVar5 + lVar6;
    if (psVar8 != (short *)0x0) {
        *psVar8 = 0;
    }
    if (psVar5 == psVar8) goto LAB_14044e713;
    FUN_14018d540(&local_res10,L"%s%s",psVar5,L"data.json");
    lVar6 = local_res10;
    uVar4 = FUN_1407b01f0(local_res10,0,param_1 + 0x1a8,&local_res8);
    if ((int)uVar4 < 0) {
        local_res10 = 0x141dfd500;
        LAB_14044e699:
        FUN_1401a3130(0x6d,2,&local_res10,(short *)(ulonglong)uVar4,lVar6);
        psVar8 = (short *)(ulonglong)uVar4;
        LAB_14044e700:
        psVar7 = psVar8;
    }
    else {
        local_48 = FUN_14044e760;
        local_58 = 0xc;
        local_54 = 2;
        local_40 = 0;
        local_38 = 1;
        local_50 = param_1;
        uVar4 = FUN_14019dca0(&local_58,0,local_res8,param_1 + 0x198);
        if ((int)uVar4 < 0) {
            local_res10 = 0x141dfd4a0;
            goto LAB_14044e699;
        }
        local_48 = FUN_14044f710;
        local_58 = 2;
        local_54 = 2;
        local_40 = 0;
        local_38 = 1;
        local_50 = param_1;
        uVar4 = FUN_14019dca0(&local_58,0,*(undefined8 *)(param_1 + 0x198),param_1 + 0x1a0);
        psVar8 = (short *)(ulonglong)uVar4;
        if ((int)uVar4 < 0) goto LAB_14044e700;
    }
    if (lVar6 != 0) {
        (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))(lVar6 + -0x10);
    }
    LAB_14044e713:
    if (psVar5 != (short *)0x0) {
        FUN_14018b900(psVar5,0);
    }
    if (local_res8 != (longlong *)0x0) {
        (**(code **)(*local_res8 + 8))();
    }
    return psVar7;
}



// WARNING: Could not reconcile some variable overlaps

longlong * FUN_14044e760(longlong param_1)

{
    short *psVar1;
    short sVar2;
    short *psVar3;
    uint uVar4;
    int iVar5;
    undefined4 uVar6;
    longlong *plVar7;
    LPVOID pvVar8;
    undefined8 uVar9;
    longlong lVar10;
    undefined8 uVar11;
    undefined8 uVar12;
    undefined8 *puVar13;
    ulonglong uVar14;
    undefined8 *puVar15;
    undefined8 *puVar16;
    longlong lVar17;
    longlong *plVar18;
    wchar_t *pwVar19;
    longlong lVar20;
    undefined8 *puVar21;
    longlong *plVar22;
    undefined8 *puVar23;
    undefined2 *puVar24;
    undefined2 *puVar25;
    longlong lVar26;
    longlong *local_res10;
    longlong *local_res18;
    undefined8 *local_res20;
    longlong *local_d8;
    longlong *local_d0;
    undefined8 *local_c8;
    undefined8 *local_c0;
    longlong local_b8;
    longlong local_b0;
    longlong local_a8;
    undefined8 local_a0;
    longlong local_98;
    longlong local_90;
    undefined2 *local_88;
    undefined4 local_80;
    undefined4 uStack124;
    ulonglong local_78;
    short *local_70;
    undefined local_68 [8];
    undefined2 *local_60;
    undefined2 *local_58;
    undefined2 *local_50;

    plVar22 = (longlong *)0x0;
    uVar14 = *(ulonglong *)(*(longlong *)(DAT_140c635f0 + 0x16e8) + 0x58);
    plVar18 = plVar22;
    if (uVar14 != 0) {
        if (DAT_140c3fe70 < uVar14) {
            plVar18 = (longlong *)0x0;
        }
        else {
            plVar18 = (longlong *)(DAT_140c3fe68 + uVar14);
        }
    }
    local_88 = (undefined2 *)0x0;
    sVar2 = *(short *)plVar18;
    plVar7 = plVar22;
    while (sVar2 != 0) {
        plVar7 = (longlong *)((longlong)plVar7 + 1);
        sVar2 = *(short *)((longlong)plVar18 + (longlong)plVar7 * 2);
    }
    lVar20 = (longlong)plVar7 * 2 >> 1;
    if (lVar20 + 1U < 0x7fffffffffffffff) {
        local_88 = (undefined2 *)FUN_14018b280((lVar20 + 1U) * 2,0);
    }
    puVar24 = local_88;
    FUN_1407db590(local_88,plVar18,lVar20 * 2);
    puVar25 = puVar24 + lVar20;
    if (puVar25 != (undefined2 *)0x0) {
        *puVar25 = 0;
    }
    if (puVar24 != puVar25) {
        plVar18 = plVar22;
        if (((DAT_140c63758 != 0) &&
             (pvVar8 = TlsGetValue(*(DWORD *)(DAT_140c63758 + 4)), pvVar8 != (LPVOID)0x0)) &&
            (*(longlong *)((longlong)pvVar8 + 8) != 0)) {
            plVar18 = *(longlong **)(*(longlong *)((longlong)pvVar8 + 8) + 0x60);
        }
        uVar4 = (**(code **)(*plVar18 + 0x28))(plVar18,0);
        if ((int)uVar4 < 0) {
            local_res10 = (longlong *)0x141dfd460;
            FUN_1401a3130(0x6d,2,&local_res10,uVar4);
            plVar22 = (longlong *)(ulonglong)uVar4;
        }
        else {
            uVar9 = (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x20))();
            lVar10 = (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x10))();
            local_60 = (undefined2 *)0x0;
            lVar20 = lVar10 + 1;
            local_50 = (undefined2 *)0x0;
            uVar14 = lVar10 + 2;
            local_58 = local_60;
            if (uVar14 < 0x7fffffffffffffff) {
                local_58 = (undefined2 *)FUN_14018b280(uVar14 * 2,0);
                local_50 = local_58 + uVar14;
                local_60 = local_58;
            }
            for (; puVar25 = local_60, lVar20 != 0; lVar20 = lVar20 + -1) {
                if (local_58 != (undefined2 *)0x0) {
                    *local_58 = 0;
                }
                local_58 = local_58 + 1;
            }
            if (local_58 != (undefined2 *)0x0) {
                *local_58 = 0;
            }
            plVar18 = *(longlong **)(param_1 + 0x1a8);
            uVar11 = (**(code **)(*plVar18 + 0x10))(plVar18);
            uVar12 = (**(code **)(*plVar18 + 0x10))(plVar18);
            uVar4 = FUN_14018ea30(uVar9,uVar12,puVar25,uVar11,0);
            if ((int)uVar4 < 0) {
                local_res10 = (longlong *)0x141dfd420;
                FUN_1401a3130(0x6d,2,&local_res10,uVar4);
                plVar22 = (longlong *)(ulonglong)uVar4;
            }
            else {
                local_res10 = (longlong *)0x0;
                uVar4 = FUN_1407b24e0(local_68,&local_res10);
                plVar18 = local_res10;
                if ((int)uVar4 < 0) {
                    local_res10 = (longlong *)0x141dfd340;
                    FUN_1401a3130(0x6d,2,&local_res10,uVar4);
                    plVar22 = (longlong *)(ulonglong)uVar4;
                }
                else {
                    iVar5 = (**(code **)(*local_res10 + 0x10))(local_res10);
                    if (iVar5 == 5) {
                        local_90 = 0;
                        local_98 = 0;
                        local_d0 = (longlong *)0x0;
                        lVar20 = (**(code **)(*plVar18 + 0x100))(plVar18);
                        if (lVar20 != 0) {
                            do {
                                puVar16 = (undefined8 *)0x0;
                                local_res18 = (longlong *)0x0;
                                iVar5 = (**(code **)(*plVar18 + 0x140))(plVar18,plVar22,&local_res18);
                                if (iVar5 < 0) {
                                    if (local_res18 != (longlong *)0x0) {
                                        (**(code **)(*local_res18 + 8))();
                                    }
                                }
                                else {
                                    iVar5 = (**(code **)(*local_res18 + 0x38))
                                            (local_res18,&DAT_140b02c74,&local_res10);
                                    if (iVar5 < 0) {
                                        local_d8 = (longlong *)0x141dfd2c0;
                                        FUN_1401a3130(0x6d,2,&local_d8,iVar5);
                                    }
                                    else {
                                        local_res20 = (undefined8 *)0x0;
                                        local_d8 = (longlong *)0x0;
                                        iVar5 = (**(code **)(*local_res18 + 0x58))(local_res18,L"title",&local_d8);
                                        puVar23 = local_res20;
                                        if (iVar5 < 0) {
                                            puVar21 = (undefined8 *)FUN_14018b280(0x12);
                                            local_res20 = puVar16;
                                            if (puVar21 != (undefined8 *)0x0) {
                                                *puVar21 = &PTR_LAB_140b55060;
                                                puVar21[1] = 0;
                                                local_res20 = puVar21;
                                            }
                                            local_res20 = local_res20 + 2;
                                            *(undefined2 *)local_res20 = 0;
                                            plVar22 = local_d0;
                                            if (puVar23 != (undefined8 *)0x0) {
                                                (**(code **)(puVar23[-2] + 8))(puVar23 + -2);
                                                plVar22 = local_d0;
                                            }
                                            LAB_14044ebe0:
                                            if (local_d8 != (longlong *)0x0) {
                                                (**(code **)(*local_d8 + 8))();
                                            }
                                            local_c8 = (undefined8 *)0x0;
                                            local_d8 = (longlong *)0x0;
                                            iVar5 = (**(code **)(*local_res18 + 0x58))(local_res18,L"body",&local_d8);
                                            puVar23 = local_c8;
                                            if (iVar5 < 0) {
                                                puVar21 = (undefined8 *)FUN_14018b280(0x12);
                                                local_c8 = puVar16;
                                                if (puVar21 != (undefined8 *)0x0) {
                                                    *puVar21 = &PTR_LAB_140b55060;
                                                    puVar21[1] = 0;
                                                    local_c8 = puVar21;
                                                }
                                                local_c8 = local_c8 + 2;
                                                *(undefined2 *)local_c8 = 0;
                                                if (puVar23 != (undefined8 *)0x0) {
                                                    (**(code **)(puVar23[-2] + 8))(puVar23 + -2);
                                                }
                                            }
                                            else {
                                                iVar5 = *(int *)(DAT_140c7aac0 + 8);
                                                lVar20 = *local_d8;
                                                if (iVar5 == 2) {
                                                    iVar5 = (**(code **)(lVar20 + 0x48))(local_d8,&DAT_140b02eb8,&local_c8);
                                                    if (iVar5 < 0) {
                                                        local_d0 = (longlong *)0x141dfd560;
                                                        goto LAB_14044ec8a;
                                                    }
                                                }
                                                else if (iVar5 == 3) {
                                                    iVar5 = (**(code **)(lVar20 + 0x48))(local_d8,&DAT_140b03034);
                                                    if (iVar5 < 0) {
                                                        local_d0 = (longlong *)0x141dfd5c0;
                                                        goto LAB_14044ec8a;
                                                    }
                                                }
                                                else if (iVar5 == 5) {
                                                    iVar5 = (**(code **)(lVar20 + 0x48))(local_d8,&DAT_140b02dd4);
                                                    if (iVar5 < 0) {
                                                        local_d0 = (longlong *)0x141dfd680;
                                                        goto LAB_14044ec8a;
                                                    }
                                                }
                                                else {
                                                    iVar5 = (**(code **)(lVar20 + 0x48))(local_d8,&DAT_140b02f14);
                                                    if (iVar5 < 0) {
                                                        local_d0 = (longlong *)0x141dfd620;
                                                        LAB_14044ec8a:
                                                        FUN_1401a3130(0x6d,2,&local_d0,iVar5);
                                                        if (local_d8 != (longlong *)0x0) {
                                                            (**(code **)(*local_d8 + 8))();
                                                        }
                                                        if (local_c8 != (undefined8 *)0x0) {
                                                            plVar7 = local_c8 + -2;
                                                            goto LAB_14044eb67;
                                                        }
                                                        goto LAB_14044eb6d;
                                                    }
                                                }
                                            }
                                            if (local_d8 != (longlong *)0x0) {
                                                (**(code **)(*local_d8 + 8))();
                                            }
                                            local_b8 = 0;
                                            iVar5 = (**(code **)(*local_res18 + 0x48))(local_res18,L"location",&local_b8);
                                            if (iVar5 < 0) {
                                                local_d8 = (longlong *)0x141dfd910;
                                                FUN_1401a3130(0x6d,2,&local_d8,iVar5);
                                            }
                                            else {
                                                local_c0 = (undefined8 *)0x0;
                                                iVar5 = (**(code **)(*local_res18 + 0x48))(local_res18,L"order",&local_c0);
                                                puVar23 = local_c0;
                                                puVar21 = puVar16;
                                                if (iVar5 < 0) {
                                                    do {
                                                        puVar21 = (undefined8 *)((longlong)puVar21 + 1);
                                                    } while (*(short *)(&DAT_1409f011c + (longlong)puVar21 * 2) != 0);
                                                    puVar13 = (undefined8 *)FUN_14018b280((longlong)puVar21 * 2 + 0x12,0);
                                                    puVar15 = puVar16;
                                                    if (puVar13 != (undefined8 *)0x0) {
                                                        *puVar13 = &PTR_LAB_140b55060;
                                                        puVar13[1] = puVar21;
                                                        puVar15 = puVar13;
                                                    }
                                                    puVar15 = puVar15 + 2;
                                                    FUN_1407db590(puVar15,&DAT_1409f011c,(longlong)puVar21 * 2);
                                                    *(undefined2 *)((longlong)puVar21 * 2 + (longlong)puVar15) = 0;
                                                    local_c0 = puVar15;
                                                    if (puVar23 != (undefined8 *)0x0) {
                                                        (**(code **)(puVar23[-2] + 8))(puVar23 + -2);
                                                    }
                                                }
                                                local_b0 = 0;
                                                iVar5 = (**(code **)(*local_res18 + 0x48))(local_res18,L"path",&local_b0);
                                                if (iVar5 < 0) {
                                                    local_d8 = (longlong *)0x141dfd9d0;
                                                    FUN_1401a3130(0x6d,2,&local_d8,iVar5);
                                                }
                                                else {
                                                    local_a8 = 0;
                                                    iVar5 = (**(code **)(*local_res18 + 0x48))(local_res18,L"type",&local_a8);
                                                    if (iVar5 < 0) {
                                                        local_d8 = (longlong *)0x141dfd980;
                                                        FUN_1401a3130(0x6d,2,&local_d8,iVar5);
                                                    }
                                                    else {
                                                        local_80 = FUN_14018e820();
                                                        switch(local_80) {
                                                            case 0:
                                                                local_d8 = (longlong *)0x0;
                                                                pwVar19 = L"sup_id";
                                                                if ((*(uint *)(*(longlong *)(DAT_140c635f0 + 0x16e8) + 4) & 1) != 0) {
                                                                    pwVar19 = L"ptr_sup_id";
                                                                }
                                                                iVar5 = (**(code **)(*local_res18 + 0x48))
                                                                        (local_res18,pwVar19,&local_d8);
                                                                if (-1 < iVar5) {
                                                                    LAB_14044f114:
                                                                    uVar4 = FUN_14018e820(local_d8);
                                                                    local_78 = local_78 & 0xffffffff00000000 | (ulonglong)uVar4;
                                                                    LAB_14044f120:
                                                                    if (local_d8 != (longlong *)0x0) {
                                                                        (**(code **)(local_d8[-2] + 8))(local_d8 + -2);
                                                                    }
                                                                    goto switchD_14044ef2b_caseD_6;
                                                                }
                                                                local_a0 = 0x141dfd890;
                                                                break;
                                                            case 1:
                                                                local_d8 = (longlong *)0x0;
                                                                pwVar19 = L"filter_url";
                                                                if ((*(uint *)(*(longlong *)(DAT_140c635f0 + 0x16e8) + 4) & 1) != 0) {
                                                                    pwVar19 = L"ptr_filter_url";
                                                                }
                                                                iVar5 = (**(code **)(*local_res18 + 0x48))
                                                                        (local_res18,pwVar19,&local_d8);
                                                                if (-1 < iVar5) {
                                                                    LAB_14044eff0:
                                                                    uVar9 = SUB168(ZEXT816(2) * ZEXT816((ulonglong)local_d8[-1]),0);
                                                                    if (SUB168(ZEXT816(2) * ZEXT816((ulonglong)local_d8[-1]) >> 0x40,0)
                                                                        != 0) {
                                                                        uVar9 = 0xffffffffffffffff;
                                                                    }
                                                                    uVar14 = FUN_14018b280(uVar9,0);
                                                                    FUN_14001b2d0(uVar14,local_d8[-1],local_d8);
                                                                    local_78 = uVar14;
                                                                    goto LAB_14044f120;
                                                                }
                                                                local_a0 = 0x141dfd8d0;
                                                                break;
                                                            case 2:
                                                                local_d8 = (longlong *)0x0;
                                                                pwVar19 = L"sup_id";
                                                                if ((*(uint *)(*(longlong *)(DAT_140c635f0 + 0x16e8) + 4) & 1) != 0) {
                                                                    pwVar19 = L"ptr_sup_id";
                                                                }
                                                                iVar5 = (**(code **)(*local_res18 + 0x48))
                                                                        (local_res18,pwVar19,&local_d8);
                                                                if (-1 < iVar5) goto LAB_14044f114;
                                                                local_a0 = 0x141dfdab0;
                                                                break;
                                                            case 3:
                                                                local_d8 = (longlong *)0x0;
                                                                pwVar19 = L"filter_url";
                                                                if ((*(uint *)(*(longlong *)(DAT_140c635f0 + 0x16e8) + 4) & 1) != 0) {
                                                                    pwVar19 = L"ptr_filter_url";
                                                                }
                                                                iVar5 = (**(code **)(*local_res18 + 0x48))
                                                                        (local_res18,pwVar19,&local_d8);
                                                                if (-1 < iVar5) goto LAB_14044eff0;
                                                                local_a0 = 0x141dfda50;
                                                                break;
                                                            case 4:
                                                                local_d8 = (longlong *)0x0;
                                                                pwVar19 = L"sup_id";
                                                                if ((*(uint *)(*(longlong *)(DAT_140c635f0 + 0x16e8) + 4) & 1) != 0) {
                                                                    pwVar19 = L"ptr_sup_id";
                                                                }
                                                                iVar5 = (**(code **)(*local_res18 + 0x48))
                                                                        (local_res18,pwVar19,&local_d8);
                                                                if (-1 < iVar5) goto LAB_14044f114;
                                                                local_a0 = 0x141dfdb30;
                                                                break;
                                                            default:
                                                                local_a0 = 0x141dfdaf0;
                                                                FUN_1401a3130(0x6d,2,&local_a0);
                                                                goto LAB_14044eef0;
                                                            case 6:
                                                            switchD_14044ef2b_caseD_6:
                                                                puVar21 = (undefined8 *)FUN_14018b280(0x50);
                                                                puVar23 = puVar16;
                                                                if (puVar21 != (undefined8 *)0x0) {
                                                                    *(undefined4 *)((longlong)puVar21 + 0xc) = 0;
                                                                    puVar21[2] = 0;
                                                                    puVar21[3] = 0;
                                                                    puVar21[4] = 0;
                                                                    puVar21[5] = 0;
                                                                    puVar21[8] = 0;
                                                                    puVar21[9] = 0;
                                                                    puVar23 = puVar21;
                                                                }
                                                                *(undefined4 *)puVar23 = local_res10._0_4_;
                                                                uVar6 = FUN_14018e820(local_b8);
                                                                *(undefined4 *)((longlong)puVar23 + 4) = uVar6;
                                                                uVar6 = FUN_14018e820(local_c0);
                                                                *(undefined4 *)(puVar23 + 1) = uVar6;
                                                                lVar20 = puVar23[4];
                                                                if (local_res20 == (undefined8 *)0x0) {
                                                                    puVar23[4] = 0;
                                                                }
                                                                else {
                                                                    lVar10 = local_res20[-1];
                                                                    puVar15 = (undefined8 *)FUN_14018b280(lVar10 * 2 + 0x12,0);
                                                                    puVar21 = puVar16;
                                                                    if (puVar15 != (undefined8 *)0x0) {
                                                                        *puVar15 = &PTR_LAB_140b55060;
                                                                        puVar15[1] = lVar10;
                                                                        puVar21 = puVar15;
                                                                    }
                                                                    puVar21 = puVar21 + 2;
                                                                    FUN_1407db590(puVar21,local_res20,lVar10 * 2);
                                                                    *(undefined2 *)((longlong)puVar21 + lVar10 * 2) = 0;
                                                                    puVar23[4] = puVar21;
                                                                }
                                                                if (lVar20 != 0) {
                                                                    (**(code **)(*(longlong *)(lVar20 + -0x10) + 8))(lVar20 + -0x10);
                                                                }
                                                                lVar20 = puVar23[5];
                                                                if (local_c8 == (undefined8 *)0x0) {
                                                                    puVar23[5] = 0;
                                                                }
                                                                else {
                                                                    lVar10 = local_c8[-1];
                                                                    puVar15 = (undefined8 *)FUN_14018b280(lVar10 * 2 + 0x12,0);
                                                                    puVar21 = puVar16;
                                                                    if (puVar15 != (undefined8 *)0x0) {
                                                                        puVar15[1] = lVar10;
                                                                        *puVar15 = &PTR_LAB_140b55060;
                                                                        puVar21 = puVar15;
                                                                    }
                                                                    puVar21 = puVar21 + 2;
                                                                    FUN_1407db590(puVar21,local_c8,lVar10 * 2);
                                                                    *(undefined2 *)((longlong)puVar21 + lVar10 * 2) = 0;
                                                                    puVar23[5] = puVar21;
                                                                }
                                                                if (lVar20 != 0) {
                                                                    (**(code **)(*(longlong *)(lVar20 + -0x10) + 8))(lVar20 + -0x10);
                                                                }
                                                                puVar23[6] = CONCAT44(uStack124,local_80);
                                                                puVar23[7] = local_78;
                                                                FUN_14018d540(&local_70,L"%suploads/%s",local_88,local_b0);
                                                                psVar3 = local_70;
                                                                lVar20 = puVar23[2];
                                                                if (local_70 == (short *)0x0) {
                                                                    puVar23[2] = 0;
                                                                }
                                                                else {
                                                                    sVar2 = *local_70;
                                                                    puVar21 = puVar16;
                                                                    while (sVar2 != 0) {
                                                                        puVar21 = (undefined8 *)((longlong)puVar21 + 1);
                                                                        sVar2 = local_70[(longlong)puVar21];
                                                                    }
                                                                    puVar15 = (undefined8 *)
                                                                            FUN_14018b280((longlong)puVar21 * 2 + 0x12,0);
                                                                    if (puVar15 != (undefined8 *)0x0) {
                                                                        puVar15[1] = puVar21;
                                                                        *puVar15 = &PTR_LAB_140b55060;
                                                                        puVar16 = puVar15;
                                                                    }
                                                                    puVar16 = puVar16 + 2;
                                                                    FUN_1407db590(puVar16,psVar3,(longlong)puVar21 * 2);
                                                                    *(undefined2 *)((longlong)puVar16 + (longlong)puVar21 * 2) = 0;
                                                                    puVar23[2] = puVar16;
                                                                }
                                                                if (lVar20 != 0) {
                                                                    (**(code **)(*(longlong *)(lVar20 + -0x10) + 8))(lVar20 + -0x10);
                                                                }
                                                                lVar20 = puVar23[3];
                                                                psVar1 = psVar3 + 5;
                                                                if (psVar1 == (short *)0x0) {
                                                                    puVar23[3] = 0;
                                                                }
                                                                else {
                                                                    puVar16 = (undefined8 *)0x0;
                                                                    sVar2 = *psVar1;
                                                                    puVar21 = puVar16;
                                                                    while (sVar2 != 0) {
                                                                        puVar21 = (undefined8 *)((longlong)puVar21 + 1);
                                                                        sVar2 = psVar1[(longlong)puVar21];
                                                                    }
                                                                    puVar15 = (undefined8 *)
                                                                            FUN_14018b280((longlong)puVar21 * 2 + 0x12,0);
                                                                    if (puVar15 != (undefined8 *)0x0) {
                                                                        puVar15[1] = puVar21;
                                                                        *puVar15 = &PTR_LAB_140b55060;
                                                                        puVar16 = puVar15;
                                                                    }
                                                                    puVar16 = puVar16 + 2;
                                                                    FUN_1407db590(puVar16,psVar1,(longlong)puVar21 * 2);
                                                                    *(undefined2 *)((longlong)puVar16 + (longlong)puVar21 * 2) = 0;
                                                                    puVar23[3] = puVar16;
                                                                }
                                                                if (lVar20 != 0) {
                                                                    (**(code **)(*(longlong *)(lVar20 + -0x10) + 8))(lVar20 + -0x10);
                                                                }
                                                                iVar5 = FUN_1407b01f0(psVar3,1,puVar23 + 9,puVar23 + 8);
                                                                if (iVar5 < 0) {
                                                                    FUN_1400035b0(0x6d,2,0,local_d0,psVar3);
                                                                    FUN_1404511e0(puVar23);
                                                                    FUN_14018b900(puVar23,0);
                                                                    if (psVar3 != (short *)0x0) {
                                                                        (**(code **)(*(longlong *)(psVar3 + -8) + 8))(psVar3 + -8);
                                                                    }
                                                                    if (local_a8 != 0) {
                                                                        (**(code **)(*(longlong *)(local_a8 + -0x10) + 8))
                                                                                (local_a8 + -0x10);
                                                                    }
                                                                    if (local_b0 != 0) {
                                                                        (**(code **)(*(longlong *)(local_b0 + -0x10) + 8))
                                                                                (local_b0 + -0x10);
                                                                    }
                                                                    if (local_c0 != (undefined8 *)0x0) {
                                                                        (**(code **)(local_c0[-2] + 8))(local_c0 + -2);
                                                                    }
                                                                    if (local_b8 != 0) {
                                                                        (**(code **)(*(longlong *)(local_b8 + -0x10) + 8))
                                                                                (local_b8 + -0x10);
                                                                    }
                                                                    if (local_c8 != (undefined8 *)0x0) {
                                                                        (**(code **)(local_c8[-2] + 8))(local_c8 + -2);
                                                                    }
                                                                    if (local_res20 != (undefined8 *)0x0) {
                                                                        (**(code **)(local_res20[-2] + 8))(local_res20 + -2);
                                                                    }
                                                                    plVar22 = local_d0;
                                                                    if (local_res18 != (longlong *)0x0) {
                                                                        (**(code **)(*local_res18 + 8))();
                                                                        plVar22 = local_d0;
                                                                    }
                                                                }
                                                                else {
                                                                    (**(code **)(**(longlong **)(param_1 + 0x1a0) + 0x48))
                                                                            (*(longlong **)(param_1 + 0x1a0),puVar23[8]);
                                                                    lVar20 = local_98;
                                                                    lVar26 = local_90 + 1;
                                                                    lVar17 = FUN_14018db00(local_98,lVar26,8);
                                                                    *(undefined8 **)(lVar17 + local_90 * 8) = puVar23;
                                                                    lVar10 = local_98;
                                                                    if ((lVar20 != lVar17) &&
                                                                        (FUN_1407db590(lVar17,lVar20), lVar10 = lVar17, lVar20 != 0)) {
                                                                        (**(code **)(*(longlong *)(lVar20 + -0x10) + 8))(lVar20 + -0x10);
                                                                    }
                                                                    local_98 = lVar10;
                                                                    local_90 = lVar26;
                                                                    if (psVar3 != (short *)0x0) {
                                                                        (**(code **)(*(longlong *)(psVar3 + -8) + 8))(psVar3 + -8);
                                                                    }
                                                                    if (local_a8 != 0) {
                                                                        (**(code **)(*(longlong *)(local_a8 + -0x10) + 8))
                                                                                (local_a8 + -0x10);
                                                                    }
                                                                    if (local_b0 != 0) {
                                                                        (**(code **)(*(longlong *)(local_b0 + -0x10) + 8))
                                                                                (local_b0 + -0x10);
                                                                    }
                                                                    if (local_c0 != (undefined8 *)0x0) {
                                                                        (**(code **)(local_c0[-2] + 8))(local_c0 + -2);
                                                                    }
                                                                    if (local_b8 != 0) {
                                                                        (**(code **)(*(longlong *)(local_b8 + -0x10) + 8))
                                                                                (local_b8 + -0x10);
                                                                    }
                                                                    if (local_c8 != (undefined8 *)0x0) {
                                                                        (**(code **)(local_c8[-2] + 8))(local_c8 + -2);
                                                                    }
                                                                    if (local_res20 != (undefined8 *)0x0) {
                                                                        (**(code **)(local_res20[-2] + 8))(local_res20 + -2);
                                                                    }
                                                                    plVar22 = local_d0;
                                                                    if (local_res18 != (longlong *)0x0) {
                                                                        (**(code **)(*local_res18 + 8))();
                                                                        plVar22 = local_d0;
                                                                    }
                                                                }
                                                                goto LAB_14044f482;
                                                        }
                                                        FUN_1401a3130(0x6d,2,&local_a0,iVar5);
                                                        if (local_d8 != (longlong *)0x0) {
                                                            (**(code **)(local_d8[-2] + 8))(local_d8 + -2);
                                                        }
                                                    }
                                                    LAB_14044eef0:
                                                    if (local_a8 != 0) {
                                                        (**(code **)(*(longlong *)(local_a8 + -0x10) + 8))(local_a8 + -0x10);
                                                    }
                                                }
                                                if (local_b0 != 0) {
                                                    (**(code **)(*(longlong *)(local_b0 + -0x10) + 8))(local_b0 + -0x10);
                                                }
                                                if (local_c0 != (undefined8 *)0x0) {
                                                    (**(code **)(local_c0[-2] + 8))(local_c0 + -2);
                                                }
                                            }
                                            if (local_b8 != 0) {
                                                (**(code **)(*(longlong *)(local_b8 + -0x10) + 8))(local_b8 + -0x10);
                                            }
                                            if (local_c8 != (undefined8 *)0x0) {
                                                (**(code **)(local_c8[-2] + 8))(local_c8 + -2);
                                            }
                                            if (local_res20 != (undefined8 *)0x0) {
                                                (**(code **)(local_res20[-2] + 8))(local_res20 + -2);
                                            }
                                            plVar22 = local_d0;
                                            if (local_res18 != (longlong *)0x0) {
                                                (**(code **)(*local_res18 + 8))();
                                                plVar22 = local_d0;
                                            }
                                            goto LAB_14044f482;
                                        }
                                        iVar5 = *(int *)(DAT_140c7aac0 + 8);
                                        lVar20 = *local_d8;
                                        if (iVar5 == 2) {
                                            iVar5 = (**(code **)(lVar20 + 0x48))(local_d8,&DAT_140b02cf8,&local_res20);
                                            if (-1 < iVar5) goto LAB_14044ebe0;
                                            local_d0 = (longlong *)0x141dfd790;
                                        }
                                        else if (iVar5 == 3) {
                                            iVar5 = (**(code **)(lVar20 + 0x48))(local_d8,&DAT_140b02d94);
                                            if (-1 < iVar5) goto LAB_14044ebe0;
                                            local_d0 = (longlong *)0x141dfd380;
                                        }
                                        else if (iVar5 == 5) {
                                            iVar5 = (**(code **)(lVar20 + 0x48))(local_d8,&DAT_140b02fd4);
                                            if (-1 < iVar5) goto LAB_14044ebe0;
                                            local_d0 = (longlong *)0x141dfd710;
                                        }
                                        else {
                                            iVar5 = (**(code **)(lVar20 + 0x48))(local_d8,&DAT_140b02f74);
                                            if (-1 < iVar5) goto LAB_14044ebe0;
                                            local_d0 = (longlong *)0x141dfd820;
                                        }
                                        FUN_1401a3130(0x6d,2,&local_d0,iVar5);
                                        plVar7 = local_d8;
                                        if (local_d8 != (longlong *)0x0) {
                                            LAB_14044eb67:
                                            (**(code **)(*plVar7 + 8))();
                                        }
                                        LAB_14044eb6d:
                                        if (local_res20 != (undefined8 *)0x0) {
                                            (**(code **)(local_res20[-2] + 8))(local_res20 + -2);
                                        }
                                    }
                                    if (local_res18 != (longlong *)0x0) {
                                        (**(code **)(*local_res18 + 8))();
                                    }
                                }
                                LAB_14044f482:
                                plVar22 = (longlong *)((longlong)plVar22 + 1);
                                local_d0 = plVar22;
                                plVar7 = (longlong *)(**(code **)(*plVar18 + 0x100))(plVar18);
                                puVar24 = local_88;
                                puVar25 = local_60;
                            } while (plVar22 < plVar7);
                        }
                        plVar22 = (longlong *)0x0;
                        plVar7 = plVar22;
                        if (*(longlong *)(param_1 + 400) != 0) {
                            do {
                                lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x188) + (longlong)plVar7 * 8);
                                if (lVar20 != 0) {
                                    FUN_1404511e0(lVar20);
                                    FUN_14018b900(lVar20,0);
                                }
                                plVar7 = (longlong *)((longlong)plVar7 + 1);
                            } while (plVar7 < *(longlong **)(param_1 + 400));
                        }
                        FUN_1403d86e0(param_1 + 0x188,&local_98);
                        if (*(longlong **)(param_1 + 0x1a8) != (longlong *)0x0) {
                            (**(code **)(**(longlong **)(param_1 + 0x1a8) + 8))();
                            *(undefined8 *)(param_1 + 0x1a8) = 0;
                        }
                        if (*(longlong **)(param_1 + 0x198) != (longlong *)0x0) {
                            (**(code **)(**(longlong **)(param_1 + 0x198) + 8))();
                            *(undefined8 *)(param_1 + 0x198) = 0;
                        }
                        if (local_98 != 0) {
                            (**(code **)(*(longlong *)(local_98 + -0x10) + 8))(local_98 + -0x10);
                        }
                    }
                    else {
                        local_res10 = (longlong *)0x141dfd300;
                        FUN_1401a3130(0x6d,2,&local_res10);
                    }
                }
                if (plVar18 != (longlong *)0x0) {
                    (**(code **)(*plVar18 + 8))(plVar18);
                }
            }
            if (puVar25 != (undefined2 *)0x0) {
                FUN_14018b900(puVar25,0);
            }
        }
    }
    if (puVar24 != (undefined2 *)0x0) {
        FUN_14018b900(puVar24,0);
    }
    return plVar22;
}



undefined8 FUN_14044f710(longlong param_1)

{
    longlong lVar1;
    int iVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    uVar4 = 0;
    uVar3 = uVar4;
    if (*(longlong *)(param_1 + 400) != 0) {
        do {
            lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x188) + uVar3 * 8);
            iVar2 = (**(code **)(**(longlong **)(lVar1 + 0x40) + 0x28))(*(longlong **)(lVar1 + 0x40),0);
            *(uint *)(lVar1 + 0xc) = (uint)(-1 < iVar2);
            if (*(longlong **)(lVar1 + 0x40) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(lVar1 + 0x40) + 8))();
                *(undefined8 *)(lVar1 + 0x40) = 0;
            }
            if (*(longlong **)(lVar1 + 0x48) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(lVar1 + 0x48) + 8))();
                *(undefined8 *)(lVar1 + 0x48) = 0;
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < *(ulonglong *)(param_1 + 400));
    }
    if (*(longlong *)(param_1 + 0x180) != 0) {
        do {
            lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x178) + uVar4 * 8);
            if (lVar1 != 0) {
                FUN_1404511e0(lVar1);
                FUN_14018b900(lVar1,0);
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < *(ulonglong *)(param_1 + 0x180));
    }
    FUN_1403d86e0(param_1 + 0x178,param_1 + 0x188);
    lVar1 = DAT_140c65898;
    *(undefined8 *)(param_1 + 400) = 0;
    if (lVar1 != 0) {
        FUN_1400ea3e0(*(undefined8 *)(*(longlong *)(lVar1 + 0x7fe0) + 0x60),"StoreBannersReady","");
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"StoreBannersReady","");
    }
    if (*(longlong **)(param_1 + 0x1a0) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x1a0) + 8))();
        *(undefined8 *)(param_1 + 0x1a0) = 0;
    }
    return 0;
}



uint * FUN_14044f870(longlong param_1,uint param_2)

{
    uint uVar1;
    uint *puVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    uVar4 = 0;
    if (*(ulonglong *)(param_1 + 0x50) != 0) {
        uVar5 = *(ulonglong *)(param_1 + 0x50);
        do {
            uVar3 = (uVar5 - uVar4 >> 1) + uVar4;
            puVar2 = *(uint **)(*(longlong *)(param_1 + 0x48) + uVar3 * 8);
            uVar1 = *puVar2;
            if (uVar1 <= param_2) {
                if (param_2 <= uVar1) {
                    return puVar2;
                }
                uVar4 = uVar3 + 1;
                uVar3 = uVar5;
            }
            uVar5 = uVar3;
        } while (uVar4 < uVar3);
    }
    return (uint *)0x0;
}



uint * FUN_14044f8c0(longlong param_1,uint param_2)

{
    uint uVar1;
    uint *puVar2;
    uint *puVar3;
    uint *puVar4;
    uint *puVar5;
    uint *puVar6;
    undefined local_58 [8];
    undefined *local_50;
    undefined8 local_48;
    undefined local_38 [16];
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;
    undefined8 local_10;

    local_50 = (undefined *)FUN_14018b280(0x28);
    puVar4 = (uint *)0x0;
    local_48 = 0;
    *local_50 = 0;
    *(undefined8 *)(local_50 + 8) = 0;
    *(undefined **)(local_50 + 0x10) = local_50;
    *(undefined **)(local_50 + 0x18) = local_50;
    local_20 = 0;
    local_38 = ZEXT816(0);
    local_28 = 0;
    local_10 = 0;
    local_18 = 0;
    puVar5 = puVar4;
    if (*(uint **)(param_1 + 0x60) != (uint *)0x0) {
        puVar3 = puVar4;
        puVar6 = *(uint **)(param_1 + 0x60);
        do {
            puVar2 = (uint *)(((ulonglong)((longlong)puVar6 - (longlong)puVar3) >> 1) + (longlong)puVar3);
            puVar5 = *(uint **)(*(longlong *)(param_1 + 0x58) + (longlong)puVar2 * 8);
            uVar1 = *puVar5;
            if (uVar1 <= param_2) {
                if (param_2 <= uVar1) break;
                puVar3 = (uint *)((longlong)puVar2 + 1);
                puVar2 = puVar6;
            }
            puVar5 = puVar4;
            puVar6 = puVar2;
        } while (puVar3 < puVar2);
    }
    FUN_140008410(local_58);
    FUN_14018b900(local_50,0);
    return puVar5;
}



void FUN_14044f9a0(longlong param_1,uint param_2)

{
    uint uVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    uint local_28 [6];
    ulonglong local_10;

    local_10 = DAT_140c0f7b0 ^ (ulonglong)local_28;
    uVar3 = 0;
    local_28[0] = param_2;
    if (*(ulonglong *)(param_1 + 0x28) != 0) {
        uVar4 = *(ulonglong *)(param_1 + 0x28);
        do {
            uVar2 = (uVar4 - uVar3 >> 1) + uVar3;
            uVar1 = **(uint **)(*(longlong *)(param_1 + 0x20) + uVar2 * 0x28);
            if (uVar1 <= param_2) {
                if (param_2 <= uVar1) {
                    FUN_1407db4f0(local_10 ^ (ulonglong)local_28);
                    return;
                }
                uVar3 = uVar2 + 1;
                uVar2 = uVar4;
            }
            uVar4 = uVar2;
        } while (uVar3 < uVar2);
    }
    FUN_1407db4f0(local_10 ^ (ulonglong)local_28);
    return;
}



int * FUN_14044fa30(longlong param_1,int param_2)

{
    int *piVar1;
    ulonglong uVar2;
    _FILETIME local_res8;

    if ((param_1 != 0) && (*(longlong *)(param_1 + 0x28) != 0)) {
        GetSystemTimeAsFileTime(&local_res8);
        uVar2 = 0;
        if (*(ulonglong *)(param_1 + 0x28) != 0) {
            piVar1 = *(int **)(param_1 + 0x20);
            do {
                if (((((ulonglong)*(_FILETIME *)(piVar1 + 4) < (ulonglong)local_res8 ||
                       *(_FILETIME *)(piVar1 + 4) == local_res8) &&
                      ((ulonglong)local_res8 < (ulonglong)*(_FILETIME *)(piVar1 + 6) ||
                       local_res8 == *(_FILETIME *)(piVar1 + 6))) && (*piVar1 == param_2)) &&
                    (piVar1[2] != 0)) {
                    return *(int **)(param_1 + 0x20) + uVar2 * 8;
                }
                uVar2 = uVar2 + 1;
                piVar1 = piVar1 + 8;
            } while (uVar2 < *(ulonglong *)(param_1 + 0x28));
        }
    }
    return (int *)0x0;
}



longlong FUN_14044fac0(longlong param_1,uint param_2)

{
    uint uVar1;
    ulonglong uVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    uVar4 = 0;
    if (*(ulonglong *)(param_1 + 0x80) != 0) {
        uVar5 = *(ulonglong *)(param_1 + 0x80);
        do {
            uVar2 = (uVar5 - uVar4 >> 1) + uVar4;
            uVar1 = *(uint *)(uVar2 * 0x20 + *(longlong *)(param_1 + 0x78));
            if (uVar1 <= param_2) {
                if (param_2 <= uVar1) {
                    lVar3 = uVar2 * 0x20 + *(longlong *)(param_1 + 0x78);
                    if (*(int *)(lVar3 + 0xc) != 0) {
                        return lVar3;
                    }
                    if (*(int *)(lVar3 + 0x18) == 0) {
                        return 0;
                    }
                    return lVar3;
                }
                uVar4 = uVar2 + 1;
                uVar2 = uVar5;
            }
            uVar5 = uVar2;
        } while (uVar4 < uVar2);
    }
    return 0;
}



longlong FUN_14044fb30(undefined8 param_1,uint param_2)

{
    uint uVar1;
    longlong lVar2;
    ulonglong uVar3;
    longlong lVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    uint *puVar7;
    ulonglong uVar8;
    longlong local_res8;

    lVar4 = *(longlong *)(DAT_140c65908 + 0x90);
    local_res8 = lVar4;
    lVar2 = *(longlong *)(lVar4 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < param_2) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res8 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res8 == lVar4) || (param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar4;
    }
    if (local_res8 != lVar4) {
        uVar6 = 0;
        if (*(ulonglong *)(local_res8 + 0x30) != 0) {
            puVar7 = *(uint **)(local_res8 + 0x28);
            do {
                uVar5 = 0;
                if (*(ulonglong *)(DAT_140c65908 + 0x80) != 0) {
                    uVar8 = *(ulonglong *)(DAT_140c65908 + 0x80);
                    do {
                        uVar3 = (uVar8 - uVar5 >> 1) + uVar5;
                        uVar1 = *(uint *)(uVar3 * 0x20 + *(longlong *)(DAT_140c65908 + 0x78));
                        if (uVar1 <= *puVar7) {
                            if (*puVar7 <= uVar1) {
                                lVar4 = uVar3 * 0x20 + *(longlong *)(DAT_140c65908 + 0x78);
                                if (((*(int *)(lVar4 + 0xc) != 0) || (*(int *)(lVar4 + 0x18) != 0)) && (lVar4 != 0))
                                {
                                    return lVar4;
                                }
                                break;
                            }
                            uVar5 = uVar3 + 1;
                            uVar3 = uVar8;
                        }
                        uVar8 = uVar3;
                    } while (uVar5 < uVar3);
                }
                uVar6 = uVar6 + 1;
                puVar7 = puVar7 + 1;
            } while (uVar6 < *(ulonglong *)(local_res8 + 0x30));
        }
    }
    return 0;
}



longlong FUN_14044fc40(longlong param_1,uint param_2)

{
    uint uVar1;
    longlong lVar2;
    ulonglong uVar3;
    longlong lVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    uint *puVar7;
    ulonglong uVar8;
    longlong local_res8;

    lVar4 = *(longlong *)(param_1 + 0xb0);
    local_res8 = lVar4;
    lVar2 = *(longlong *)(lVar4 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < param_2) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res8 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res8 == lVar4) || (param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar4;
    }
    if (local_res8 != lVar4) {
        uVar6 = 0;
        if (*(ulonglong *)(local_res8 + 0x30) != 0) {
            puVar7 = *(uint **)(local_res8 + 0x28);
            do {
                uVar5 = 0;
                if (*(ulonglong *)(param_1 + 0x80) != 0) {
                    uVar8 = *(ulonglong *)(param_1 + 0x80);
                    do {
                        uVar3 = (uVar8 - uVar5 >> 1) + uVar5;
                        uVar1 = *(uint *)(uVar3 * 0x20 + *(longlong *)(param_1 + 0x78));
                        if (uVar1 <= *puVar7) {
                            if (*puVar7 <= uVar1) {
                                lVar4 = uVar3 * 0x20 + *(longlong *)(param_1 + 0x78);
                                if (((*(int *)(lVar4 + 0xc) != 0) || (*(int *)(lVar4 + 0x18) != 0)) && (lVar4 != 0))
                                {
                                    return lVar4;
                                }
                                break;
                            }
                            uVar5 = uVar3 + 1;
                            uVar3 = uVar8;
                        }
                        uVar8 = uVar3;
                    } while (uVar5 < uVar3);
                }
                uVar6 = uVar6 + 1;
                puVar7 = puVar7 + 1;
            } while (uVar6 < *(ulonglong *)(local_res8 + 0x30));
        }
    }
    return 0;
}



longlong FUN_14044fd50(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;
    longlong local_res8;

    lVar2 = DAT_140c65908;
    FUN_14044d860(DAT_140c65908);
    lVar3 = *(longlong *)(lVar2 + 0xf8);
    local_res8 = lVar3;
    lVar1 = *(longlong *)(lVar3 + 8);
    while (lVar1 != 0) {
        if (*(uint *)(lVar1 + 0x20) < param_2) {
            lVar1 = *(longlong *)(lVar1 + 0x18);
        }
        else {
            local_res8 = lVar1;
            lVar1 = *(longlong *)(lVar1 + 0x10);
        }
    }
    if ((local_res8 == lVar3) || (param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar3;
    }
    if ((local_res8 != lVar3) && (uVar4 = 0, *(longlong *)(local_res8 + 0x30) != 0)) {
        do {
            lVar3 = FUN_14044fc40(lVar2,*(undefined4 *)(*(longlong *)(local_res8 + 0x28) + uVar4 * 4));
            if (lVar3 != 0) {
                return lVar3;
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < *(ulonglong *)(local_res8 + 0x30));
    }
    return 0;
}



longlong FUN_14044fe00(undefined8 param_1,uint param_2)

{
    uint uVar1;
    longlong lVar2;
    ulonglong uVar3;
    longlong lVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    uint *puVar7;
    ulonglong uVar8;
    longlong local_res8;

    lVar4 = *(longlong *)(DAT_140c65908 + 0xd0);
    local_res8 = lVar4;
    lVar2 = *(longlong *)(lVar4 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < param_2) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res8 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res8 == lVar4) || (param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar4;
    }
    if (local_res8 != lVar4) {
        uVar6 = 0;
        if (*(ulonglong *)(local_res8 + 0x30) != 0) {
            puVar7 = *(uint **)(local_res8 + 0x28);
            do {
                uVar5 = 0;
                if (*(ulonglong *)(DAT_140c65908 + 0x80) != 0) {
                    uVar8 = *(ulonglong *)(DAT_140c65908 + 0x80);
                    do {
                        uVar3 = (uVar8 - uVar5 >> 1) + uVar5;
                        uVar1 = *(uint *)(uVar3 * 0x20 + *(longlong *)(DAT_140c65908 + 0x78));
                        if (uVar1 <= *puVar7) {
                            if (*puVar7 <= uVar1) {
                                lVar4 = uVar3 * 0x20 + *(longlong *)(DAT_140c65908 + 0x78);
                                if (((*(int *)(lVar4 + 0xc) != 0) || (*(int *)(lVar4 + 0x18) != 0)) && (lVar4 != 0))
                                {
                                    return lVar4;
                                }
                                break;
                            }
                            uVar5 = uVar3 + 1;
                            uVar3 = uVar8;
                        }
                        uVar8 = uVar3;
                    } while (uVar5 < uVar3);
                }
                uVar6 = uVar6 + 1;
                puVar7 = puVar7 + 1;
            } while (uVar6 < *(ulonglong *)(local_res8 + 0x30));
        }
    }
    return 0;
}



void FUN_14044ff10(undefined8 param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    ulonglong uVar5;
    bool bVar6;

    lVar2 = DAT_140c65908;
    FUN_14044d860();
    *(undefined8 *)(param_2 + 8) = 0;
    lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0xf8) + 0x10);
    if (lVar4 != *(longlong *)(lVar2 + 0xf8)) {
        do {
            bVar6 = false;
            uVar5 = 0;
            do {
                if (*(ulonglong *)(lVar4 + 0x30) <= uVar5) {
                    if (!bVar6) goto LAB_14044ff8c;
                    break;
                }
                lVar3 = FUN_14044fc40(lVar2,*(undefined4 *)(*(longlong *)(lVar4 + 0x28) + uVar5 * 4));
                bVar6 = lVar3 != 0;
                uVar5 = uVar5 + 1;
            } while (!bVar6);
            FUN_140003460();
            LAB_14044ff8c:
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
        } while (lVar4 != *(longlong *)(lVar2 + 0xf8));
    }
    return;
}



void FUN_140450000(undefined8 param_1,longlong *param_2,uint param_3)

{
    int iVar1;
    longlong lVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;

    uVar4 = param_2[1];
    uVar6 = 0;
    if (uVar4 != 0) {
        do {
            lVar2 = *param_2 + uVar6 * 8;
            if ((*(uint *)(*(longlong *)(*param_2 + uVar6 * 8) + 8) & param_3) == 0) {
                uVar4 = uVar4 - 1;
                FUN_1407db590(lVar2,lVar2 + 8,(uVar4 - uVar6) * 8);
                puVar3 = (undefined8 *)*param_2;
                if (uVar4 != 0) {
                    if (puVar3 == (undefined8 *)0x0) {
                        lVar2 = uVar4 * 8 + 0x10;
                        uVar5 = uVar4;
                        LAB_1404500c8:
                        puVar3 = (undefined8 *)FUN_14018b280(lVar2,0);
                        if (puVar3 != (undefined8 *)0x0) {
                            *puVar3 = &PTR_LAB_140b55060;
                            puVar3[1] = uVar5;
                        }
                        puVar3 = puVar3 + 2;
                    }
                    else if ((ulonglong)puVar3[-1] <= uVar4 && uVar4 != puVar3[-1]) {
                        lVar2 = FUN_14018a3e0(uVar4 * 8 + 0x10);
                        uVar5 = lVar2 - 0x10U >> 3;
                        lVar2 = (lVar2 - 0x10U & 0xfffffffffffffff8) + 0x10;
                        iVar1 = (**(code **)puVar3[-2])(puVar3 + -2,lVar2);
                        if (iVar1 == 0) goto LAB_1404500c8;
                        puVar3[-1] = uVar5;
                    }
                }
                if ((undefined8 *)*param_2 != puVar3) {
                    FUN_1407db590(puVar3,(undefined8 *)*param_2,uVar4 * 8);
                    lVar2 = *param_2;
                    if (lVar2 != 0) {
                        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
                    }
                    *param_2 = (longlong)puVar3;
                }
                param_2[1] = uVar4;
                uVar6 = uVar6 - 1;
            }
            uVar4 = param_2[1];
            uVar6 = uVar6 + 1;
        } while (uVar6 < uVar4);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_140450160(undefined8 param_1,longlong param_2,undefined8 param_3)

{
    undefined4 uVar1;
    ulonglong uVar2;
    longlong lVar3;
    int iVar4;
    longlong lVar5;
    ulonglong uVar6;
    int *piVar7;
    longlong lVar8;
    ulonglong uVar9;
    undefined4 uVar10;

    uVar9 = 0;
    uVar10 = 1;
    if (*(longlong *)(param_2 + 0x10) != 0) {
        lVar8 = 0;
        do {
            if (*(int *)(*(longlong *)(param_2 + 8) + lVar8) == 0) {
                uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 8) + 4 + lVar8);
                if (DAT_140c63840 == (code *)0x0) {
                    if ((_DAT_140c64170 != 0) || (iVar4 = FUN_1401e89c0(), iVar4 < 0)) goto LAB_140450251;
                    lVar5 = (**(code **)(*DAT_140c652d0 + 0x18))(DAT_140c652d0,uVar1);
                }
                else {
                    lVar5 = (*DAT_140c63840)(&PTR_u_AccountItem_140a690c8);
                }
                if ((lVar5 != 0) && (*(int *)(lVar5 + 0x4c) != 0)) {
                    FUN_140003460(param_3,(int *)(lVar5 + 0x4c));
                    uVar6 = 0;
                    uVar2 = *(ulonglong *)(*(longlong *)(DAT_140c635f0 + 0x15d0) + 0xa0);
                    if (uVar2 != 0) {
                        lVar3 = *(longlong *)(*(longlong *)(DAT_140c635f0 + 0x15d0) + 0x98);
                        piVar7 = (int *)(lVar3 + 8);
                        do {
                            if (*piVar7 == *(int *)(lVar5 + 0x4c)) {
                                if (*(int *)(lVar3 + 0xc + uVar6 * 0x10) != 0) goto LAB_140450251;
                                break;
                            }
                            uVar6 = uVar6 + 1;
                            piVar7 = piVar7 + 4;
                        } while (uVar6 < uVar2);
                    }
                    uVar10 = 0;
                }
            }
            LAB_140450251:
            uVar9 = uVar9 + 1;
            lVar8 = lVar8 + 0x10;
        } while (uVar9 < *(ulonglong *)(param_2 + 0x10));
    }
    return uVar10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140450280(undefined8 param_1,longlong param_2)

{
    undefined4 uVar1;
    int iVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    code *pcVar6;

    uVar4 = 0;
    uVar5 = uVar4;
    pcVar6 = DAT_140c63840;
    if (*(longlong *)(param_2 + 0x10) != 0) {
        do {
            if (*(int *)(*(longlong *)(param_2 + 8) + uVar5) == 0) {
                uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 8) + 4 + uVar5);
                if (pcVar6 == (code *)0x0) {
                    if ((_DAT_140c64170 != 0) || (iVar2 = FUN_1401e89c0(), pcVar6 = DAT_140c63840, iVar2 < 0))
                        goto LAB_14045030b;
                    lVar3 = (**(code **)(*DAT_140c652d0 + 0x18))(DAT_140c652d0,uVar1);
                }
                else {
                    lVar3 = (*pcVar6)(&PTR_u_AccountItem_140a690c8,uVar1,DAT_140c63858);
                }
                pcVar6 = DAT_140c63840;
                if ((lVar3 != 0) && ((*(byte *)(lVar3 + 4) & 1) != 0)) {
                    return 0;
                }
            }
            LAB_14045030b:
            uVar4 = uVar4 + 1;
            uVar5 = uVar5 + 0x10;
        } while (uVar4 < *(ulonglong *)(param_2 + 0x10));
    }
    return 1;
}



void FUN_140450340(undefined8 param_1,longlong *param_2,short **param_3)

{
    short *psVar1;
    short sVar2;
    short *psVar3;
    longlong lVar4;
    short *psVar5;
    int iVar6;
    longlong lVar7;
    ulonglong uVar8;
    longlong *plVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    longlong lVar12;
    short *psVar13;
    ulonglong uVar14;
    longlong lVar15;
    short **ppsVar16;
    ulonglong uVar17;
    ulonglong local_res8;
    undefined local_a8 [8];
    longlong local_a0;
    longlong local_98;
    undefined local_88 [8];
    longlong local_80;
    undefined2 *local_78;
    longlong local_70;
    undefined local_68 [8];
    longlong local_60;
    undefined2 *local_58;
    longlong local_50;

    lVar7 = 0;
    local_80 = 0;
    local_70 = 0;
    lVar12 = lVar7;
    do {
        psVar3 = &DAT_140b033e2 + lVar12;
        lVar12 = lVar12 + 1;
    } while (*psVar3 != 0);
    lVar12 = lVar12 * 2 >> 1;
    uVar8 = lVar12 + 1;
    if (uVar8 < 0x7fffffffffffffff) {
        lVar15 = uVar8 * 2;
        local_80 = FUN_14018b280(lVar15,0);
        local_70 = lVar15 + local_80;
    }
    lVar15 = local_80;
    lVar12 = lVar12 * 2;
    FUN_1407db590(local_80,&DAT_140b033e0,lVar12);
    local_78 = (undefined2 *)(lVar12 + lVar15);
    if (local_78 != (undefined2 *)0x0) {
        *local_78 = 0;
    }
    psVar3 = *param_3;
    local_60 = 0;
    local_50 = 0;
    sVar2 = *psVar3;
    while (sVar2 != 0) {
        lVar7 = lVar7 + 1;
        sVar2 = psVar3[lVar7];
    }
    lVar12 = lVar7 * 2 >> 1;
    uVar8 = lVar12 + 1;
    if (uVar8 < 0x7fffffffffffffff) {
        lVar7 = uVar8 * 2;
        local_60 = FUN_14018b280(lVar7,0);
        local_50 = lVar7 + local_60;
    }
    lVar7 = local_60;
    lVar12 = lVar12 * 2;
    FUN_1407db590(local_60,psVar3,lVar12);
    local_58 = (undefined2 *)(lVar12 + lVar7);
    if (local_58 != (undefined2 *)0x0) {
        *local_58 = 0;
    }
    FUN_14018f570(local_a8,local_68,local_88,0x22,0x5c);
    if (lVar7 != 0) {
        FUN_14018b900(lVar7,0);
    }
    if (lVar15 != 0) {
        FUN_14018b900(lVar15,0);
    }
    local_res8 = 0;
    lVar7 = local_a0;
    lVar15 = local_98;
    lVar12 = local_a0;
    if (param_2[1] != 0) {
        do {
            lVar12 = lVar7;
            if (lVar7 != lVar15) {
                lVar4 = *(longlong *)(*param_2 + local_res8 * 8);
                psVar3 = *(short **)(lVar4 + 0x30);
                LAB_140450510:
                uVar11 = 0;
                psVar5 = *(short **)(lVar7 + 8);
                sVar2 = *psVar3;
                uVar8 = uVar11;
                while (sVar2 != 0) {
                    uVar8 = uVar8 + 1;
                    sVar2 = psVar3[uVar8];
                }
                if (*psVar5 == 0) {
                    LAB_140450544:
                    for (psVar13 = psVar3; psVar13 <= psVar3 + (uVar8 - uVar11); psVar13 = psVar13 + 1) {
                        iVar6 = FUN_14018e520(psVar13,psVar5);
                        if (iVar6 == 0) {
                            if (psVar13 != (short *)0x0) goto LAB_14045068a;
                            break;
                        }
                    }
                }
                else {
                    do {
                        uVar11 = uVar11 + 1;
                    } while (psVar5[uVar11] != 0);
                    if (uVar11 <= uVar8) goto LAB_140450544;
                }
                uVar8 = 0;
                if (*(longlong *)(lVar4 + 0x58) != 0) {
                    plVar9 = *(longlong **)(lVar4 + 0x50);
                    do {
                        uVar17 = 0;
                        uVar11 = *(ulonglong *)(*plVar9 + 0x20);
                        if (uVar11 != 0) {
                            ppsVar16 = *(short ***)(*plVar9 + 0x18);
                            do {
                                uVar14 = 0;
                                psVar13 = *ppsVar16;
                                sVar2 = *psVar13;
                                uVar10 = uVar14;
                                while (sVar2 != 0) {
                                    uVar10 = uVar10 + 1;
                                    sVar2 = psVar13[uVar10];
                                }
                                if (*psVar5 == 0) {
                                    LAB_1404505f4:
                                    psVar1 = psVar13 + (uVar10 - uVar14);
                                    for (; psVar13 <= psVar1; psVar13 = psVar13 + 1) {
                                        iVar6 = FUN_14018e520(psVar13,psVar5);
                                        if (iVar6 == 0) {
                                            if (psVar13 != (short *)0x0) goto LAB_14045068a;
                                            break;
                                        }
                                    }
                                }
                                else {
                                    do {
                                        uVar14 = uVar14 + 1;
                                    } while (psVar5[uVar14] != 0);
                                    if (uVar14 <= uVar10) goto LAB_1404505f4;
                                }
                                uVar17 = uVar17 + 1;
                                ppsVar16 = ppsVar16 + 1;
                            } while (uVar17 < uVar11);
                        }
                        uVar8 = uVar8 + 1;
                        plVar9 = plVar9 + 1;
                    } while (uVar8 < *(ulonglong *)(lVar4 + 0x58));
                }
                FUN_140007270(param_2,local_res8);
                local_res8 = local_res8 - 1;
                lVar12 = local_a0;
                lVar15 = local_98;
            }
            LAB_1404506c4:
            local_res8 = local_res8 + 1;
            lVar7 = lVar12;
        } while (local_res8 < (ulonglong)param_2[1]);
    }
    for (; lVar12 != lVar15; lVar12 = lVar12 + 0x20) {
        if (*(longlong *)(lVar12 + 8) != 0) {
            FUN_14018b900(*(longlong *)(lVar12 + 8),0);
        }
    }
    if (lVar7 != 0) {
        FUN_14018b900(lVar7,0);
    }
    return;
    LAB_14045068a:
    lVar7 = lVar7 + 0x20;
    lVar12 = local_a0;
    lVar15 = local_98;
    if (lVar7 == local_98) goto LAB_1404506c4;
    goto LAB_140450510;
}



void FUN_140450720(undefined8 param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                   undefined4 param_5,uint param_6)

{
    longlong lVar1;
    ulonglong local_48;
    undefined8 local_38;
    undefined8 local_30;
    ulonglong local_28;
    ulonglong local_20;
    undefined8 local_18;
    ulonglong local_10;

    local_38 = CONCAT44(param_4,param_2);
    local_30 = CONCAT44(*(undefined4 *)(DAT_140c7aac0 + 8),param_5);
    local_28 = (ulonglong)param_3;
    if ((DAT_140c65898 == 0) || (lVar1 = *(longlong *)(DAT_140c65898 + 0x78), lVar1 == 0)) {
        local_18 = 0;
        local_48 = local_48 & 0xffffffff00000000;
    }
    else {
        local_48 = *(ulonglong *)(lVar1 + 0x1a0);
        local_18 = *(undefined8 *)(lVar1 + 0x1a8);
    }
    local_20 = local_48;
    local_10 = (ulonglong)param_6;
    FUN_1400161d0(DAT_140c635f0,0x82a,&local_38);
    return;
}



void FUN_1404507e0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5,undefined4 param_6,undefined8 *param_7,undefined8 param_8)

{
    longlong lVar1;
    ulonglong local_68;
    undefined4 local_58;
    undefined4 local_54;
    undefined4 local_50;
    undefined4 local_4c;
    undefined4 local_48;
    ulonglong local_40;
    undefined8 local_38;
    undefined4 local_30;
    undefined8 local_20;
    undefined8 local_18;
    undefined8 local_10;

    FUN_1407e4830(&local_58,0,0x50);
    local_50 = param_5;
    local_4c = *(undefined4 *)(DAT_140c7aac0 + 8);
    if ((DAT_140c65898 == 0) || (lVar1 = *(longlong *)(DAT_140c65898 + 0x78), lVar1 == 0)) {
        local_38 = 0;
        local_68 = local_68 & 0xffffffff00000000;
    }
    else {
        local_68 = *(ulonglong *)(lVar1 + 0x1a0);
        local_38 = *(undefined8 *)(lVar1 + 0x1a8);
    }
    local_40 = local_68;
    local_30 = param_6;
    local_20 = *param_7;
    local_18 = param_7[1];
    local_10 = param_8;
    local_58 = param_2;
    local_54 = param_4;
    local_48 = param_3;
    FUN_140016010(DAT_140c635f0,0x828,&local_58);
    return;
}



void FUN_1404508e0(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                   undefined4 param_5,undefined8 param_6,uint param_7)

{
    undefined8 local_38;
    ulonglong local_30;
    undefined8 local_28;
    undefined8 local_20;
    ulonglong local_18;

    local_30 = (ulonglong)param_3;
    local_38 = CONCAT44(*(undefined4 *)(DAT_140c65908 + 0x30),param_5);
    local_28 = *(undefined8 *)(DAT_140c7aac0 + 0x18);
    if ((DAT_140c65898 == 0) || (*(longlong *)(DAT_140c65898 + 0x78) == 0)) {
        local_20 = 0;
    }
    else {
        local_20 = *(undefined8 *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x1a8);
    }
    local_18 = (ulonglong)param_7;
    FUN_1400161d0(DAT_140c635f0,0x82c,&local_38);
    return;
}



void FUN_140450970(void)

{
    longlong lVar1;
    longlong lVar2;
    DWORD DVar3;
    undefined8 *puVar4;
    uint uVar5;
    undefined auStack264 [32];
    ulonglong local_e8;
    ulonglong local_e0;
    undefined8 local_d8;
    undefined8 local_d0;
    _TIME_ZONE_INFORMATION local_c8;
    ulonglong local_18;

    lVar2 = DAT_140c65908;
    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack264;
    if (*(longlong *)(*(longlong *)(DAT_140c65908 + 0x1c8) + -8) != 0) {
        local_e8 = 0;
        local_e0 = 0;
        local_d8 = 0;
        local_d0 = 0;
        DVar3 = GetTimeZoneInformation(&local_c8);
        uVar5 = -(local_c8.StandardBias + local_c8.Bias);
        local_e8 = local_e8 & 0xffffffff | (ulonglong)uVar5 << 0x20;
        local_e0 = local_e0 & 0xffffffff00000000 |
                   (ulonglong)(uint)-(local_c8.DaylightBias + local_c8.Bias);
        if (DVar3 < 2) {
            local_e8 = CONCAT44(uVar5,uVar5);
        }
        else if (DVar3 == 2) {
            local_e8 = CONCAT44(uVar5,-(local_c8.DaylightBias + local_c8.Bias));
        }
        local_d8 = *(undefined8 *)(lVar2 + 0x1c8);
        local_d0 = *(undefined8 *)(DAT_140c7aac0 + 0x18);
        FUN_1400161d0(DAT_140c635f0,0x825,&local_e8);
        lVar1 = *(longlong *)(lVar2 + 0x1c8);
        puVar4 = (undefined8 *)FUN_14018b280();
        if (puVar4 == (undefined8 *)0x0) {
            puVar4 = (undefined8 *)0x0;
        }
        else {
            *puVar4 = &PTR_LAB_140b55060;
            puVar4[1] = 0;
        }
        *(undefined2 *)(puVar4 + 2) = 0;
        *(undefined8 **)(lVar2 + 0x1c8) = puVar4 + 2;
        if (lVar1 != 0) {
            (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        }
    }
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack264);
    return;
}



undefined8 FUN_140450ad0(longlong *param_1,longlong *param_2,uint *param_3)

{
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    uint uVar5;
    uint uVar6;
    bool bVar7;
    longlong local_res18;

    uVar1 = *param_3;
    if (uVar1 != 0) {
        lVar2 = *(longlong *)(*param_1 + 0x18);
        local_res18 = lVar2;
        lVar3 = *(longlong *)(lVar2 + 8);
        while (lVar3 != 0) {
            if (*(uint *)(lVar3 + 0x20) < uVar1) {
                lVar3 = *(longlong *)(lVar3 + 0x18);
            }
            else {
                local_res18 = lVar3;
                lVar3 = *(longlong *)(lVar3 + 0x10);
            }
        }
        if ((local_res18 == lVar2) || (uVar1 < *(uint *)(local_res18 + 0x20))) {
            local_res18 = lVar2;
        }
        uVar5 = 0;
        if (local_res18 == lVar2) {
            uVar6 = 0;
        }
        else {
            uVar6 = *(uint *)(local_res18 + 0x24);
        }
        lVar3 = *(longlong *)(*param_2 + 0x18);
        local_res18 = lVar3;
        lVar4 = *(longlong *)(lVar3 + 8);
        while (lVar4 != 0) {
            if (*(uint *)(lVar4 + 0x20) < uVar1) {
                lVar4 = *(longlong *)(lVar4 + 0x18);
            }
            else {
                local_res18 = lVar4;
                lVar4 = *(longlong *)(lVar4 + 0x10);
            }
        }
        if ((local_res18 == lVar3) || (uVar1 < *(uint *)(local_res18 + 0x20))) {
            local_res18 = lVar3;
        }
        if (local_res18 == lVar2) {
            bVar7 = false;
        }
        else {
            uVar5 = *(uint *)(local_res18 + 0x24);
            bVar7 = uVar6 < uVar5;
            if (bVar7) {
                return 0xffffffff;
            }
        }
        if (!bVar7 && uVar6 != uVar5) {
            return 1;
        }
    }
    return 0;
}



undefined8 FUN_140450bc0(longlong *param_1,longlong *param_2,uint *param_3)

{
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    uint uVar5;
    uint uVar6;
    bool bVar7;
    longlong local_res8;

    uVar1 = param_3[1];
    uVar5 = *(uint *)(*param_1 + 8) & uVar1;
    if ((uVar5 != 0) && ((*(uint *)(*param_2 + 8) & uVar1) == 0)) {
        return 0xffffffff;
    }
    if ((uVar5 == 0) && ((*(uint *)(*param_2 + 8) & uVar1) != 0)) {
        return 1;
    }
    uVar1 = *param_3;
    if (uVar1 != 0) {
        lVar2 = *(longlong *)(*param_1 + 0x18);
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
        uVar5 = 0;
        if (local_res8 == lVar2) {
            uVar6 = 0;
        }
        else {
            uVar6 = *(uint *)(local_res8 + 0x24);
        }
        lVar3 = *(longlong *)(*param_2 + 0x18);
        local_res8 = lVar3;
        lVar4 = *(longlong *)(lVar3 + 8);
        while (lVar4 != 0) {
            if (*(uint *)(lVar4 + 0x20) < uVar1) {
                lVar4 = *(longlong *)(lVar4 + 0x18);
            }
            else {
                local_res8 = lVar4;
                lVar4 = *(longlong *)(lVar4 + 0x10);
            }
        }
        if ((local_res8 == lVar3) || (uVar1 < *(uint *)(local_res8 + 0x20))) {
            local_res8 = lVar3;
        }
        if (local_res8 == lVar2) {
            bVar7 = false;
        }
        else {
            uVar5 = *(uint *)(local_res8 + 0x24);
            bVar7 = uVar6 < uVar5;
            if (bVar7) {
                return 0xffffffff;
            }
        }
        if (!bVar7 && uVar6 != uVar5) {
            return 1;
        }
    }
    return 0;
}



undefined4 FUN_140450ce0(longlong *param_1,longlong *param_2,uint *param_3)

{
    longlong lVar1;
    undefined4 uVar2;
    longlong lVar3;
    longlong lVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    bool bVar8;
    float fVar9;
    float fVar10;
    longlong local_res8;

    lVar3 = FUN_14044fa30(**(undefined8 **)(*param_1 + 0x40),param_3[2]);
    lVar4 = FUN_14044fa30(**(undefined8 **)(*param_2 + 0x40),param_3[2]);
    if (*(int *)(DAT_140c635f0 + 0x1708) == 0) {
        uVar5 = 6;
    }
    else if (*(int *)(DAT_140c635f0 + 0x1708) == 1) {
        uVar5 = 8;
    }
    else {
        uVar5 = 0x13;
    }
    uVar6 = 0;
    if (lVar3 == 0) {
        fVar10 = *(float *)(**(longlong **)(*param_1 + 0x40) + 0x18 +
                            (ulonglong)(param_3[2] == uVar5) * 4);
    }
    else {
        fVar10 = *(float *)(lVar3 + 4);
    }
    if (lVar4 == 0) {
        fVar9 = *(float *)(**(longlong **)(*param_2 + 0x40) + 0x18 +
                           (ulonglong)(param_3[2] == uVar5) * 4);
    }
    else {
        fVar9 = *(float *)(lVar4 + 4);
    }
    if (fVar10 == 0.0) {
        if (fVar9 == 0.0) goto LAB_140450dbd;
        LAB_140450db3:
        uVar2 = 1;
    }
    else {
        if (fVar9 == 0.0) {
            return 0xffffffff;
        }
        LAB_140450dbd:
        if (fVar10 < fVar9) {
            if (param_3[3] == 0) {
                return 1;
            }
            return 0xffffffff;
        }
        if (fVar9 < fVar10) {
            if (param_3[3] == 0) {
                return 0xffffffff;
            }
            return 1;
        }
        uVar5 = *param_3;
        if (uVar5 != 0) {
            lVar3 = *(longlong *)(*param_1 + 0x18);
            local_res8 = lVar3;
            lVar4 = *(longlong *)(lVar3 + 8);
            while (lVar4 != 0) {
                if (*(uint *)(lVar4 + 0x20) < uVar5) {
                    lVar4 = *(longlong *)(lVar4 + 0x18);
                }
                else {
                    local_res8 = lVar4;
                    lVar4 = *(longlong *)(lVar4 + 0x10);
                }
            }
            if ((local_res8 == lVar3) || (uVar5 < *(uint *)(local_res8 + 0x20))) {
                local_res8 = lVar3;
            }
            uVar7 = uVar6;
            if (local_res8 != lVar3) {
                uVar7 = *(uint *)(local_res8 + 0x24);
            }
            lVar4 = *(longlong *)(*param_2 + 0x18);
            local_res8 = lVar4;
            lVar1 = *(longlong *)(lVar4 + 8);
            while (lVar1 != 0) {
                if (*(uint *)(lVar1 + 0x20) < uVar5) {
                    lVar1 = *(longlong *)(lVar1 + 0x18);
                }
                else {
                    local_res8 = lVar1;
                    lVar1 = *(longlong *)(lVar1 + 0x10);
                }
            }
            if ((local_res8 == lVar4) || (uVar5 < *(uint *)(local_res8 + 0x20))) {
                local_res8 = lVar4;
            }
            if (local_res8 == lVar3) {
                bVar8 = false;
            }
            else {
                uVar6 = *(uint *)(local_res8 + 0x24);
                bVar8 = uVar7 < uVar6;
                if (bVar8) {
                    return 0xffffffff;
                }
            }
            if (!bVar8 && uVar7 != uVar6) goto LAB_140450db3;
        }
        uVar2 = 0;
    }
    return uVar2;
}



longlong FUN_140450ed0(longlong param_1,short *param_2)

{
    short sVar1;
    char cVar2;
    longlong lVar3;
    longlong lVar4;
    undefined2 *puVar5;
    undefined2 *puVar6;
    ulonglong *puVar7;
    ulonglong uVar8;
    longlong lVar9;
    longlong lVar10;
    longlong lVar11;
    int iVar12;
    int iVar13;
    char local_res8 [8];
    ulonglong local_res10;
    ulonglong local_res18;
    longlong local_res20;

    lVar11 = 0;
    sVar1 = *param_2;
    lVar3 = lVar11;
    while (sVar1 != 0) {
        lVar3 = lVar3 + 1;
        sVar1 = param_2[lVar3];
    }
    lVar3 = lVar3 * 2 >> 1;
    uVar8 = lVar3 + 1;
    lVar4 = lVar11;
    if (uVar8 < 0x7fffffffffffffff) {
        lVar4 = FUN_14018b280(uVar8 * 2,0);
    }
    lVar3 = lVar3 * 2;
    FUN_1407db590(lVar4,param_2,lVar3);
    puVar6 = (undefined2 *)(lVar3 + lVar4);
    if (puVar6 != (undefined2 *)0x0) {
        *puVar6 = 0;
    }
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    puVar5 = (undefined2 *)FUN_14018b280(0x10);
    *(undefined2 **)(param_1 + 8) = puVar5;
    *(undefined2 **)(param_1 + 0x10) = puVar5;
    *(undefined2 **)(param_1 + 0x18) = puVar5 + 8;
    if (puVar5 != (undefined2 *)0x0) {
        *puVar5 = 0;
    }
    lVar3 = (longlong)puVar6 - lVar4 >> 1;
    iVar12 = (int)lVar3;
    local_res20 = lVar3;
    if (0 < iVar12) {
        iVar13 = 1;
        do {
            sVar1 = *(short *)(lVar4 + lVar11 * 2);
            if (sVar1 == 0x25) {
                lVar9 = (longlong)iVar13;
                local_res18 = 2;
                local_res10 = lVar3 - lVar9;
                puVar7 = &local_res10;
                if (1 < (ulonglong)(lVar3 - lVar9)) {
                    puVar7 = &local_res18;
                }
                lVar3 = lVar9 * 2 + lVar4;
                puVar6 = (undefined2 *)0x0;
                lVar10 = (*puVar7 + lVar9) * 2 + lVar4;
                uVar8 = (lVar10 - lVar3 >> 1) + 1;
                if (uVar8 < 0x7fffffffffffffff) {
                    puVar6 = (undefined2 *)FUN_14018b280(uVar8 * 2,0);
                }
                puVar5 = puVar6;
                if (lVar3 != lVar10) {
                    lVar3 = (lVar9 * 2 - (longlong)puVar6) + lVar4;
                    do {
                        if (puVar5 != (undefined2 *)0x0) {
                            *puVar5 = *(undefined2 *)((longlong)puVar5 + lVar3);
                        }
                        puVar5 = puVar5 + 1;
                    } while ((longlong)puVar5 + lVar3 != lVar10);
                }
                if (puVar5 != (undefined2 *)0x0) {
                    *puVar5 = 0;
                }
                FUN_1407df3f0(puVar6,&DAT_140b03244,local_res8);
                if (puVar6 != (undefined2 *)0x0) {
                    FUN_14018b900(puVar6,0);
                }
                cVar2 = local_res8[0];
                if (*(longlong *)(param_1 + 0x10) + 2 == *(longlong *)(param_1 + 0x18)) {
                    local_res18 = *(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 1;
                    local_res10 = 1;
                    puVar7 = &local_res10;
                    if (local_res18 != 0) {
                        puVar7 = &local_res18;
                    }
                    FUN_1400a7f20(param_1,*puVar7 + local_res18);
                }
                puVar6 = (undefined2 *)(*(longlong *)(param_1 + 0x10) + 2);
                if (puVar6 != (undefined2 *)0x0) {
                    *puVar6 = 0;
                }
                iVar13 = iVar13 + 2;
                **(short **)(param_1 + 0x10) = (short)cVar2;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 2;
                lVar11 = lVar11 + 2;
                lVar3 = local_res20;
            }
            else {
                if (*(longlong *)(param_1 + 0x10) + 2 == *(longlong *)(param_1 + 0x18)) {
                    local_res18 = *(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 1;
                    local_res10 = 1;
                    puVar7 = &local_res10;
                    if (local_res18 != 0) {
                        puVar7 = &local_res18;
                    }
                    FUN_1400a7f20(param_1,*puVar7 + local_res18);
                }
                puVar6 = (undefined2 *)(*(longlong *)(param_1 + 0x10) + 2);
                if (puVar6 != (undefined2 *)0x0) {
                    *puVar6 = 0;
                }
                **(short **)(param_1 + 0x10) = sVar1;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 2;
            }
            lVar11 = lVar11 + 1;
            iVar13 = iVar13 + 1;
        } while (lVar11 < iVar12);
    }
    if (lVar4 != 0) {
        FUN_14018b900(lVar4,0);
    }
    return param_1;
}



void FUN_1404511e0(longlong param_1)

{
    longlong lVar1;

    if ((*(int *)(param_1 + 0x30) == 1) || (*(int *)(param_1 + 0x30) == 3)) {
        FUN_14018b900(*(undefined8 *)(param_1 + 0x38),0);
    }
    if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x48) + 8))();
    }
    if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x40) + 8))();
    }
    lVar1 = *(longlong *)(param_1 + 0x28);
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = *(longlong *)(param_1 + 0x20);
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = *(longlong *)(param_1 + 0x18);
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (lVar1 != 0) {
        // WARNING: Could not recover jumptable at 0x000140451270. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        return;
    }
    return;
}



longlong FUN_140451280(longlong param_1,uint *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong local_res8 [2];
    longlong local_res18 [2];
    uint local_28 [2];
    undefined8 local_20;
    undefined8 local_18;

    lVar1 = *(longlong *)(param_1 + 8);
    local_res8[0] = lVar1;
    if (*(longlong *)(lVar1 + 8) != 0) {
        lVar2 = *(longlong *)(lVar1 + 8);
        do {
            if (*(uint *)(lVar2 + 0x20) < *param_2) {
                lVar3 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                lVar3 = *(longlong *)(lVar2 + 0x10);
                local_res8[0] = lVar2;
            }
            lVar2 = lVar3;
        } while (lVar3 != 0);
    }
    if ((local_res8[0] == lVar1) || (*param_2 < *(uint *)(local_res8[0] + 0x20))) {
        local_28[0] = *param_2;
        local_18 = 0;
        local_20 = 0;
        FUN_140451770(param_1,local_res18,local_res8,local_28);
        local_res8[0] = local_res18[0];
    }
    return local_res8[0] + 0x28;
}



longlong FUN_140451380(longlong *param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    lVar1 = param_1[1];
    lVar2 = FUN_14018db00(*param_1,lVar1 + 1,0x38);
    uVar4 = 0;
    lVar3 = lVar1 * 0x38 + lVar2;
    if (lVar3 != 0) {
        *(undefined8 *)(lVar3 + 8) = 0;
    }
    if (*param_1 != lVar2) {
        uVar5 = uVar4;
        if (param_1[1] != 0) {
            do {
                if (uVar4 + lVar2 != 0) {
                    FUN_140451b90(uVar4 + lVar2,*param_1 + uVar4);
                }
                lVar3 = *(longlong *)(uVar4 + 8 + *param_1);
                if (lVar3 != 0) {
                    (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
                }
                uVar5 = uVar5 + 1;
                uVar4 = uVar4 + 0x38;
            } while (uVar5 < (ulonglong)param_1[1]);
        }
        lVar3 = *param_1;
        if (lVar3 != 0) {
            (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
        }
        *param_1 = lVar2;
    }
    param_1[1] = lVar1 + 1;
    return lVar1;
}



void FUN_140451450(longlong *param_1)

{
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    uVar3 = 0;
    uVar4 = uVar3;
    if (param_1[1] != 0) {
        do {
            lVar1 = *param_1;
            lVar2 = *(longlong *)(lVar1 + 0x18 + uVar4);
            if (lVar2 != 0) {
                (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
            }
            lVar1 = *(longlong *)(lVar1 + 8 + uVar4);
            if (lVar1 != 0) {
                (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
            }
            uVar3 = uVar3 + 1;
            uVar4 = uVar4 + 0x28;
        } while (uVar3 < (ulonglong)param_1[1]);
    }
    lVar1 = *param_1;
    if (lVar1 == 0) {
        return;
    }
    // WARNING: Could not recover jumptable at 0x0001404514e2. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    return;
}



longlong FUN_1404514f0(longlong *param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 *puVar4;
    ulonglong uVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;

    lVar1 = param_1[1];
    puVar4 = (undefined8 *)FUN_14018db00(*param_1,lVar1 + 1,0x28);
    uVar5 = 0;
    puVar6 = puVar4 + lVar1 * 5;
    if (puVar6 != (undefined8 *)0x0) {
        puVar6[2] = 0;
        puVar6[1] = 0;
        puVar6[4] = 0;
        puVar6[3] = 0;
    }
    if ((undefined8 *)*param_1 != puVar4) {
        if (param_1[1] != 0) {
            puVar6 = puVar4;
            do {
                if (puVar6 != (undefined8 *)0x0) {
                    puVar7 = (undefined8 *)((longlong)puVar6 + *param_1 + -(longlong)puVar4);
                    *puVar6 = *puVar7;
                    FUN_1403b4f00(puVar6 + 1,puVar7 + 1);
                    FUN_1403fe910(puVar6 + 3,puVar7 + 3);
                }
                lVar3 = *param_1 + -(longlong)puVar4;
                lVar2 = *(longlong *)((longlong)puVar6 + lVar3 + 0x18);
                if (lVar2 != 0) {
                    (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
                }
                lVar2 = *(longlong *)((longlong)puVar6 + lVar3 + 8);
                if (lVar2 != 0) {
                    (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
                }
                uVar5 = uVar5 + 1;
                puVar6 = puVar6 + 5;
            } while (uVar5 < (ulonglong)param_1[1]);
        }
        lVar2 = *param_1;
        if (lVar2 != 0) {
            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        *param_1 = (longlong)puVar4;
    }
    param_1[1] = lVar1 + 1;
    return lVar1;
}



void FUN_140451620(longlong *param_1)

{
    longlong lVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    uVar2 = 0;
    uVar3 = uVar2;
    if (param_1[1] != 0) {
        do {
            lVar1 = *(longlong *)(uVar3 + 0x10 + *param_1);
            if (lVar1 != 0) {
                (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
            }
            uVar2 = uVar2 + 1;
            uVar3 = uVar3 + 0x20;
        } while (uVar2 < (ulonglong)param_1[1]);
    }
    lVar1 = *param_1;
    if (lVar1 == 0) {
        return;
    }
    // WARNING: Could not recover jumptable at 0x000140451688. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    return;
}



longlong FUN_1404516a0(longlong *param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    lVar1 = param_1[1];
    lVar2 = FUN_14018db00(*param_1,lVar1 + 1,0x20);
    uVar4 = 0;
    lVar3 = lVar1 * 0x20 + lVar2;
    if (lVar3 != 0) {
        *(undefined8 *)(lVar3 + 0x10) = 0;
    }
    if (*param_1 != lVar2) {
        uVar5 = uVar4;
        if (param_1[1] != 0) {
            do {
                if (uVar4 + lVar2 != 0) {
                    FUN_140451c70(uVar4 + lVar2,*param_1 + uVar4);
                }
                lVar3 = *(longlong *)(uVar4 + 0x10 + *param_1);
                if (lVar3 != 0) {
                    (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
                }
                uVar5 = uVar5 + 1;
                uVar4 = uVar4 + 0x20;
            } while (uVar5 < (ulonglong)param_1[1]);
        }
        lVar3 = *param_1;
        if (lVar3 != 0) {
            (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
        }
        *param_1 = lVar2;
    }
    param_1[1] = lVar1 + 1;
    return lVar1;
}



longlong * FUN_140451770(longlong param_1,longlong *param_2,char **param_3,uint *param_4)

{
    uint uVar1;
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
        if ((*(longlong *)(param_1 + 0x10) == 0) || (*(uint *)(pcVar3 + 0x20) <= *param_4)) {
            LAB_1404517ca:
            plVar4 = (longlong *)FUN_140451980(param_1,local_18,param_4);
            *param_2 = *plVar4;
            return param_2;
        }
    }
    else {
        if (pcVar3 == pcVar2) {
            uVar1 = *param_4;
            pcVar3 = *(char **)(pcVar2 + 0x18);
            if (*(uint *)(pcVar3 + 0x20) < uVar1) {
                if ((pcVar3 == pcVar2) || (uVar1 < *(uint *)(pcVar3 + 0x20))) {
                    lVar5 = FUN_14018b280(0x38);
                    if ((uint *)(lVar5 + 0x20) != (uint *)0x0) {
                        *(uint *)(lVar5 + 0x20) = *param_4;
                        FUN_1403b4f00(lVar5 + 0x28,param_4 + 2);
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
                    lVar5 = FUN_1403af9a0(uVar1,param_4);
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
                plVar4 = (longlong *)FUN_140451980(param_1,local_18,param_4);
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
        if ((*param_4 <= *(uint *)(lVar5 + 0x20)) || (*(uint *)(pcVar3 + 0x20) <= *param_4))
            goto LAB_1404517ca;
        if (*(longlong *)(lVar5 + 0x18) == 0) {
            FUN_140451d30(param_1,param_2,0,lVar5,param_4);
            return param_2;
        }
    }
    FUN_140451d30();
    return param_2;
}



char ** FUN_140451980(longlong param_1,char **param_2,uint *param_3)

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
            bVar6 = *param_3 < *(uint *)(pcVar5 + 0x20);
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
        if (pcVar5 == *(char **)(pcVar2 + 0x10)) goto LAB_1404519de;
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
    if (*param_3 <= *(uint *)(pcVar3 + 0x20)) {
        *param_2 = pcVar3;
        *(undefined *)(param_2 + 1) = 0;
        return param_2;
    }
    LAB_1404519de:
    ppcVar1 = (char **)FUN_140451d30(param_1,local_res8,pcVar4,pcVar5,param_3);
    *param_2 = *ppcVar1;
    *(undefined *)(param_2 + 1) = 1;
    return param_2;
}



void FUN_140451a80(longlong *param_1,longlong param_2)

{
    int iVar1;
    undefined8 *puVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    uVar5 = param_1[1] - 1;
    lVar3 = param_2 * 0x20 + *param_1;
    FUN_1407db590(lVar3,lVar3 + 0x20,(uVar5 - param_2) * 0x20);
    puVar2 = (undefined8 *)*param_1;
    if (uVar5 == 0) goto LAB_140451b4f;
    if (puVar2 == (undefined8 *)0x0) {
        lVar3 = uVar5 * 0x20 + 0x10;
        uVar4 = uVar5;
    }
    else {
        if (uVar5 < (ulonglong)puVar2[-1] || uVar5 == puVar2[-1]) goto LAB_140451b4f;
        lVar3 = FUN_14018a3e0(uVar5 * 0x20 + 0x10);
        uVar4 = lVar3 - 0x10U >> 5;
        lVar3 = (lVar3 - 0x10U & 0xffffffffffffffe0) + 0x10;
        iVar1 = (**(code **)puVar2[-2])(puVar2 + -2,lVar3);
        if (iVar1 != 0) {
            puVar2[-1] = uVar4;
            goto LAB_140451b4f;
        }
    }
    puVar2 = (undefined8 *)FUN_14018b280(lVar3,0);
    if (puVar2 != (undefined8 *)0x0) {
        puVar2[1] = uVar4;
        *puVar2 = &PTR_LAB_140b55060;
    }
    puVar2 = puVar2 + 2;
    LAB_140451b4f:
    if ((undefined8 *)*param_1 != puVar2) {
        FUN_1407db590(puVar2,(undefined8 *)*param_1,uVar5 * 0x20);
        lVar3 = *param_1;
        if (lVar3 != 0) {
            (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
        }
        *param_1 = (longlong)puVar2;
    }
    param_1[1] = uVar5;
    return;
}



undefined8 * FUN_140451b90(undefined8 *param_1,undefined8 *param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;

    *param_1 = *param_2;
    if (param_2[1] == 0) {
        param_1[1] = 0;
    }
    else {
        lVar1 = *(longlong *)(param_2[1] + -8);
        puVar2 = (undefined8 *)FUN_14018b280(lVar1 * 2 + 0x12,0);
        puVar3 = (undefined8 *)0x0;
        if (puVar2 != (undefined8 *)0x0) {
            puVar2[1] = lVar1;
            *puVar2 = &PTR_LAB_140b55060;
            puVar3 = puVar2;
        }
        puVar3 = puVar3 + 2;
        FUN_1407db590(puVar3,param_2[1],lVar1 * 2);
        *(undefined2 *)(lVar1 * 2 + (longlong)puVar3) = 0;
        param_1[1] = puVar3;
    }
    param_1[2] = param_2[2];
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
    param_1[5] = param_2[5];
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    return param_1;
}



undefined4 * FUN_140451c70(undefined4 *param_1,undefined4 *param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;

    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    if (*(longlong *)(param_2 + 4) == 0) {
        *(undefined8 *)(param_1 + 4) = 0;
    }
    else {
        lVar1 = *(longlong *)(*(longlong *)(param_2 + 4) + -8);
        puVar2 = (undefined8 *)FUN_14018b280(lVar1 * 2 + 0x12,0);
        puVar3 = (undefined8 *)0x0;
        if (puVar2 != (undefined8 *)0x0) {
            puVar2[1] = lVar1;
            *puVar2 = &PTR_LAB_140b55060;
            puVar3 = puVar2;
        }
        puVar3 = puVar3 + 2;
        FUN_1407db590(puVar3,*(undefined8 *)(param_2 + 4),lVar1 * 2);
        *(undefined2 *)(lVar1 * 2 + (longlong)puVar3) = 0;
        *(undefined8 **)(param_1 + 4) = puVar3;
    }
    param_1[6] = param_2[6];
    return param_1;
}



longlong *
FUN_140451d30(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,uint *param_5)

{
    longlong lVar1;
    longlong lVar2;

    if (((param_4 == *(longlong *)(param_1 + 8)) || (param_3 != 0)) ||
        (*param_5 < *(uint *)(param_4 + 0x20))) {
        lVar2 = FUN_14018b280(0x38);
        if ((uint *)(lVar2 + 0x20) != (uint *)0x0) {
            *(uint *)(lVar2 + 0x20) = *param_5;
            FUN_1403b4f00(lVar2 + 0x28,param_5 + 2);
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
        lVar2 = FUN_1403af9a0(param_1,param_5);
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



undefined8 FUN_140451e20(void)

{
    longlong lVar1;
    undefined *puVar2;

    if (DAT_140c65910 == 0) {
        lVar1 = FUN_14018b280(0x20);
        if (lVar1 != 0) {
            puVar2 = (undefined *)FUN_14018b280(0x48);
            DAT_140c65910 = lVar1;
            *(undefined **)(lVar1 + 8) = puVar2;
            *(undefined8 *)(lVar1 + 0x10) = 0;
            *puVar2 = 0;
            *(undefined8 *)(*(longlong *)(lVar1 + 8) + 8) = 0;
            *(longlong *)(*(longlong *)(lVar1 + 8) + 0x10) = *(longlong *)(lVar1 + 8);
            *(longlong *)(*(longlong *)(lVar1 + 8) + 0x18) = *(longlong *)(lVar1 + 8);
            FUN_140452300();
            return 0;
        }
        DAT_140c65910 = 0;
        FUN_140452300();
    }
    return 0;
}



void FUN_140451eb0(undefined4 *param_1,longlong param_2)

{
    longlong *plVar1;
    int iVar2;
    undefined8 *puVar3;
    uint *puVar4;
    byte bVar5;
    longlong lVar6;
    undefined8 *puVar7;
    longlong lVar8;
    undefined8 uVar9;
    longlong lVar10;
    longlong lVar11;
    longlong lVar12;
    longlong lVar13;
    ulonglong uVar14;
    undefined local_38 [8];
    longlong local_30;

    lVar6 = FUN_140201320(*param_1);
    if (lVar6 != 0) {
        lVar11 = *(longlong *)(param_2 + 0x10);
        uVar14 = (ulonglong)*(uint *)(lVar6 + 0x18);
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar3 = *(undefined8 **)(lVar11 + 0x10);
        *puVar3 = *puVar7;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
        FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar3,L"eGenericUnlockType",uVar14 & 0xffffffff);
        lVar11 = 0;
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
        if ((param_1[1] != 0) || (bVar5 = 0, param_1[2] != 0)) {
            bVar5 = 1;
        }
        lVar13 = *(longlong *)(param_2 + 0x10);
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar13 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar3 = *(undefined8 **)(lVar13 + 0x10);
        *puVar3 = *puVar7;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
        lVar13 = *(longlong *)(param_2 + 0x10);
        lVar8 = FUN_14018f0e0(local_38,L"bUnlocked");
        lVar10 = -1;
        if (*(longlong *)(lVar8 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar13 + 0x10) + 8) = 0;
            *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
        }
        else {
            lVar12 = -1;
            do {
                lVar12 = lVar12 + 1;
            } while (*(char *)(*(longlong *)(lVar8 + 8) + lVar12) != '\0');
            FUN_140058710(lVar13);
        }
        if (local_30 != 0) {
            FUN_14018b900(local_30,0);
        }
        puVar4 = *(uint **)(lVar13 + 0x10);
        puVar4[2] = 1;
        *puVar4 = (uint)bVar5;
        *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
        uVar9 = FUN_1400580e0(lVar13,0xfffffffd);
        FUN_14005ea50(lVar13,uVar9,*(longlong *)(lVar13 + 0x10) + -0x20,
                      *(longlong *)(lVar13 + 0x10) + -0x10);
        *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + -0x20;
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
        lVar13 = *(longlong *)(param_2 + 0x10);
        iVar2 = param_1[2];
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar13 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar3 = *(undefined8 **)(lVar13 + 0x10);
        *puVar3 = *puVar7;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
        lVar13 = *(longlong *)(param_2 + 0x10);
        lVar8 = FUN_14018f0e0(local_38,L"bAccountUnlocked");
        if (*(longlong *)(lVar8 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar13 + 0x10) + 8) = 0;
            *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
        }
        else {
            lVar12 = -1;
            do {
                lVar12 = lVar12 + 1;
            } while (*(char *)(*(longlong *)(lVar8 + 8) + lVar12) != '\0');
            FUN_140058710(lVar13);
        }
        if (local_30 != 0) {
            FUN_14018b900(local_30,0);
        }
        puVar4 = *(uint **)(lVar13 + 0x10);
        puVar4[2] = 1;
        *puVar4 = (uint)(iVar2 != 0);
        *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
        uVar9 = FUN_1400580e0(lVar13,0xfffffffd);
        FUN_14005ea50(lVar13,uVar9,*(longlong *)(lVar13 + 0x10) + -0x20,
                      *(longlong *)(lVar13 + 0x10) + -0x10);
        *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + -0x20;
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
        lVar13 = *(longlong *)(param_2 + 0x10);
        iVar2 = param_1[1];
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar13 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar3 = *(undefined8 **)(lVar13 + 0x10);
        *puVar3 = *puVar7;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
        lVar13 = *(longlong *)(param_2 + 0x10);
        lVar8 = FUN_14018f0e0(local_38,L"bCharacterUnlocked");
        lVar8 = *(longlong *)(lVar8 + 8);
        if (lVar8 == 0) {
            *(undefined4 *)(*(longlong *)(lVar13 + 0x10) + 8) = 0;
            *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
        }
        else {
            do {
                lVar10 = lVar10 + 1;
            } while (*(char *)(lVar8 + lVar10) != '\0');
            FUN_140058710(lVar13,lVar8,lVar10);
        }
        if (local_30 != 0) {
            FUN_14018b900(local_30,0);
        }
        puVar4 = *(uint **)(lVar13 + 0x10);
        puVar4[2] = 1;
        *puVar4 = (uint)(iVar2 != 0);
        *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
        uVar9 = FUN_1400580e0(lVar13,0xfffffffd);
        FUN_14005ea50(lVar13,uVar9,*(longlong *)(lVar13 + 0x10) + -0x20,
                      *(longlong *)(lVar13 + 0x10) + -0x10);
        *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + -0x20;
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
        uVar14 = *(ulonglong *)(lVar6 + 8);
        lVar13 = lVar11;
        if ((uVar14 != 0) && (uVar14 <= DAT_140c3fe70)) {
            lVar13 = DAT_140c3fe68 + uVar14;
        }
        lVar8 = *(longlong *)(param_2 + 0x10);
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar3 = *(undefined8 **)(lVar8 + 0x10);
        *puVar3 = *puVar7;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
        FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar3,L"strIconSprite",lVar13);
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
        uVar14 = *(ulonglong *)(lVar6 + 0x10);
        if ((uVar14 != 0) && (uVar14 <= DAT_140c3fe70)) {
            lVar11 = DAT_140c3fe68 + uVar14;
        }
        lVar6 = *(longlong *)(param_2 + 0x10);
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar3 = *(undefined8 **)(lVar6 + 0x10);
        *puVar3 = *puVar7;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
        FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar3,L"strPreviewSprite",lVar11);
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
        uVar9 = FUN_14034bdd0();
        lVar6 = *(longlong *)(param_2 + 0x10);
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar3 = *(undefined8 **)(lVar6 + 0x10);
        *puVar3 = *puVar7;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
        FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar3,L"strUnlockName",uVar9);
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140452300(longlong param_1)

{
    undefined8 uVar1;
    uint uVar2;
    int iVar3;
    undefined4 *puVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    undefined8 uVar9;
    undefined4 *puVar10;
    longlong *plVar11;
    uint uVar12;
    longlong local_res8;
    longlong local_res10;
    undefined8 local_res18;
    undefined **local_78;
    undefined8 local_70;
    LPVOID local_68;
    undefined **local_58;
    undefined8 local_50;
    LPVOID local_48;

    uVar1 = DAT_140c65910;
    puVar10 = (undefined4 *)0x0;
    local_res8 = param_1;
    LAB_140452340:
    do {
        if (DAT_140c63838 == (code *)0x0) {
            if ((_DAT_140c64c20 != 0) || (iVar3 = FUN_1402010c0(), iVar3 < 0)) {
                return;
            }
            uVar2 = (**(code **)(*DAT_140c64e50 + 0x28))();
        }
        else {
            uVar2 = (*DAT_140c63838)(&PTR_u_GenericUnlockEntry_140a6a4e8,DAT_140c63858);
        }
        uVar12 = (uint)puVar10;
        if (uVar2 <= uVar12) {
            return;
        }
        if (DAT_140c63848 == (code *)0x0) {
            puVar4 = (undefined4 *)0x0;
            if (_DAT_140c64c20 == 0) {
                iVar3 = FUN_1402010c0();
                if (iVar3 < 0) {
                    puVar4 = (undefined4 *)0x0;
                }
                else {
                    puVar4 = (undefined4 *)(**(code **)(*DAT_140c64e50 + 0x20))(DAT_140c64e50,puVar10);
                }
            }
        }
        else {
            puVar4 = (undefined4 *)
                    (*DAT_140c63848)(&PTR_u_GenericUnlockEntry_140a6a4e8,puVar10,DAT_140c63858);
        }
        lVar5 = FUN_140453190(uVar1);
        lVar5 = *(longlong *)(lVar5 + 8);
        lVar8 = lVar5;
        if (*(longlong *)(lVar5 + 8) != 0) {
            lVar6 = *(longlong *)(lVar5 + 8);
            do {
                if (*(uint *)(lVar6 + 0x20) < (uint)puVar4[7]) {
                    lVar7 = *(longlong *)(lVar6 + 0x18);
                }
                else {
                    lVar7 = *(longlong *)(lVar6 + 0x10);
                    lVar8 = lVar6;
                }
                lVar6 = lVar7;
            } while (lVar7 != 0);
        }
        if ((lVar8 == lVar5) || ((uint)puVar4[7] < *(uint *)(lVar8 + 0x20))) {
            local_res10 = lVar5;
            plVar11 = &local_res10;
        }
        else {
            local_res8 = lVar8;
            plVar11 = &local_res8;
        }
        lVar5 = *plVar11;
        lVar8 = FUN_140453190(uVar1,puVar4 + 6);
        if (lVar5 == *(longlong *)(lVar8 + 8)) {
            uVar9 = FUN_140453190(uVar1,puVar4 + 6);
            puVar10 = (undefined4 *)FUN_1404532a0(uVar9,puVar4 + 7);
            *puVar10 = *puVar4;
            uVar9 = FUN_140453190(uVar1,puVar4 + 6);
            lVar5 = FUN_1404532a0(uVar9);
            *(undefined8 *)(lVar5 + 4) = 0;
        }
        else {
            local_78 = &PTR_LAB_140b5e648;
            local_70 = 0;
            local_68 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720,&local_78);
            local_58 = local_78;
            local_50 = local_70;
            local_48 = local_68;
            local_res18 = 0x141dfdbd0;
            iVar3 = FUN_1401971e0(&DAT_140c8ac60,0x7e,&local_res18,*puVar4,*(undefined4 *)(lVar5 + 0x24),
                                  &local_58);
            local_78 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720,local_68);
            if (iVar3 != 0) {
                DebugBreak();
                puVar10 = (undefined4 *)(ulonglong)(uVar12 + 1);
                goto LAB_140452340;
            }
        }
        puVar10 = (undefined4 *)(ulonglong)(uVar12 + 1);
    } while( true );
}



void FUN_140452580(void)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;

    lVar2 = DAT_140c65910;
    lVar4 = *(longlong *)(*(longlong *)(DAT_140c65910 + 8) + 0x10);
    if (lVar4 != *(longlong *)(DAT_140c65910 + 8)) {
        do {
            lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x30) + 0x10);
            if (lVar3 != *(longlong *)(lVar4 + 0x30)) {
                do {
                    *(undefined8 *)(lVar3 + 0x28) = 0;
                    lVar5 = *(longlong *)(lVar3 + 0x18);
                    if (lVar5 == 0) {
                        lVar5 = *(longlong *)(lVar3 + 8);
                        if (lVar3 == *(longlong *)(lVar5 + 0x18)) {
                            do {
                                lVar3 = lVar5;
                                lVar5 = *(longlong *)(lVar3 + 8);
                            } while (lVar3 == *(longlong *)(lVar5 + 0x18));
                        }
                        if (*(longlong *)(lVar3 + 0x18) != lVar5) {
                            lVar3 = lVar5;
                        }
                    }
                    else {
                        for (lVar1 = *(longlong *)(lVar5 + 0x10); lVar3 = lVar5, lVar1 != 0;
                             lVar1 = *(longlong *)(lVar1 + 0x10)) {
                            lVar5 = lVar1;
                        }
                    }
                } while (lVar3 != *(longlong *)(lVar4 + 0x30));
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
                for (lVar5 = *(longlong *)(lVar3 + 0x10); lVar4 = lVar3, lVar5 != 0;
                     lVar5 = *(longlong *)(lVar5 + 0x10)) {
                    lVar3 = lVar5;
                }
            }
        } while (lVar4 != *(longlong *)(lVar2 + 8));
    }
    return;
}



undefined8 FUN_140452670(undefined8 param_1,undefined8 param_2,int param_3,undefined4 *param_4)

{
    longlong lVar1;
    undefined8 uVar2;

    uVar2 = DAT_140c65910;
    if (param_3 - 0x981U < 5) {
        if (param_3 == 0x981) {
            FUN_140452d90(DAT_140c65910,param_4);
            return 0;
        }
        if (param_3 == 0x982) {
            lVar1 = FUN_140201320(*param_4);
            if (lVar1 != 0) {
                uVar2 = FUN_140453190(uVar2,lVar1 + 0x18);
                lVar1 = FUN_1404532a0(uVar2,lVar1 + 0x1c);
                *(undefined4 *)(lVar1 + 8) = 1;
            }
            return 0;
        }
        if (param_3 == 0x983) {
            FUN_140453040(DAT_140c65910,param_4);
            return 0;
        }
        if (param_3 == 0x984) {
            FUN_140452e40(DAT_140c65910,param_4);
            return 0;
        }
        if (param_3 == 0x985) {
            FUN_140452a30(param_1,*param_4,0);
            return 0;
        }
    }
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_140452750(undefined8 param_1,undefined4 param_2)

{
    int iVar1;
    undefined8 uVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    int iVar6;
    int *piVar7;
    int iVar8;

    uVar2 = DAT_140c65910;
    lVar4 = FUN_140201760(param_2);
    if (lVar4 == 0) {
        return false;
    }
    iVar8 = 0;
    piVar7 = (int *)(lVar4 + 8);
    lVar4 = 6;
    iVar6 = iVar8;
    do {
        iVar1 = *piVar7;
        if (iVar1 != 0) {
            iVar8 = iVar8 + 1;
            if (DAT_140c63840 == (code *)0x0) {
                if (_DAT_140c64c20 == 0) {
                    iVar3 = FUN_1402010c0();
                    if (-1 < iVar3) {
                        lVar5 = (**(code **)(*DAT_140c64e50 + 0x18))(DAT_140c64e50,iVar1);
                        goto LAB_1404527ea;
                    }
                }
            }
            else {
                lVar5 = (*DAT_140c63840)(&PTR_u_GenericUnlockEntry_140a6a4e8,iVar1,DAT_140c63858);
                LAB_1404527ea:
                if (lVar5 != 0) {
                    lVar5 = FUN_1404530f0(uVar2,*(undefined4 *)(lVar5 + 0x18),*(undefined4 *)(lVar5 + 0x1c));
                    if ((lVar5 != 0) && ((*(int *)(lVar5 + 4) != 0 || (*(int *)(lVar5 + 8) != 0)))) {
                        iVar6 = iVar6 + 1;
                    }
                }
            }
        }
        piVar7 = piVar7 + 1;
        lVar4 = lVar4 + -1;
        if (lVar4 == 0) {
            return iVar6 == iVar8;
        }
    } while( true );
}



longlong FUN_140452850(undefined8 param_1,int param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(DAT_140c65910 + 8);
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
    if (local_res8 != lVar1) {
        return local_res8 + 0x28;
    }
    return 0;
}



undefined4 FUN_1404528b0(undefined8 param_1,undefined8 *param_2,int param_3)

{
    undefined8 uVar1;
    undefined4 uVar2;
    longlong lVar3;
    longlong lVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int *piVar8;
    longlong lVar9;
    undefined8 local_res20;

    uVar1 = DAT_140c65910;
    lVar3 = FUN_1403ac780();
    if (((lVar3 != 0) && (*(longlong *)(lVar3 + 0x40) != 0)) &&
        (*(int *)(*(longlong *)(lVar3 + 0x40) + 0x1d8) != 0)) {
        lVar3 = FUN_140201760();
        if (lVar3 == 0) {
            return 2;
        }
        iVar7 = 0;
        lVar9 = 6;
        iVar6 = 0;
        iVar5 = 0;
        piVar8 = (int *)(lVar3 + 8);
        do {
            if (((*piVar8 != 0) && (lVar4 = FUN_140201320(), lVar4 != 0)) &&
                (lVar4 = FUN_1404530f0(uVar1,*(undefined4 *)(lVar4 + 0x18),*(undefined4 *)(lVar4 + 0x1c)),
                        lVar4 != 0)) {
                iVar7 = iVar7 + 1;
                if ((*(int *)(lVar4 + 8) != 0) || (*(int *)(lVar4 + 4) != 0)) {
                    iVar6 = iVar6 + 1;
                }
                if ((*(int *)(lVar3 + 4) == 0) && (*(int *)(lVar4 + 8) != 0)) {
                    iVar5 = iVar5 + 1;
                }
                if ((*(int *)(lVar3 + 4) == 1) && (*(int *)(lVar4 + 4) != 0)) {
                    iVar5 = iVar5 + 1;
                }
            }
            piVar8 = piVar8 + 1;
            lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        if (iVar7 == 0) {
            uVar2 = 2;
        }
        else {
            if (iVar7 == iVar6) {
                if ((iVar6 == iVar5) || (*(int *)(lVar3 + 4) == 1)) {
                    return 0;
                }
            }
            else if ((iVar6 != 0) && (param_3 == 0)) {
                return 3;
            }
            local_res20 = *param_2;
            FUN_1403f4900(DAT_140c65898,0x400,&local_res20);
            uVar2 = 4;
        }
        return uVar2;
    }
    return 2;
}



void FUN_140452a30(undefined8 param_1,int param_2,longlong param_3)

{
    undefined8 uVar1;

    if (DAT_140c65898 != 0) {
        if (param_2 == 0) {
            uVar1 = 0xba77b;
        }
        else if (param_2 == 1) {
            uVar1 = 0xba787;
        }
        else {
            if (param_2 != 2) {
                if (param_2 != 3) {
                    return;
                }
                if (param_3 == 0) {
                    return;
                }
                FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ConfirmPartialUnlock",&DAT_1409efb7c,
                              param_3);
                return;
            }
            uVar1 = 0xba77c;
        }
        uVar1 = FUN_14034bdd0(DAT_140c65898,uVar1);
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"GenericFloater",&DAT_1409eeefc,
                      *(undefined4 *)(*(longlong *)(DAT_140c65898 + 0x78) + 8),uVar1);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140452ad0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
    longlong *plVar1;
    undefined4 uVar2;
    undefined8 *puVar3;
    uint *puVar4;
    undefined8 uVar5;
    int iVar6;
    longlong lVar7;
    undefined8 *puVar8;
    longlong lVar9;
    undefined8 uVar10;
    undefined4 *puVar11;
    longlong lVar12;
    longlong lVar13;
    undefined **local_68;
    undefined4 local_60;
    longlong local_58;
    undefined4 local_50;
    undefined **local_48;
    undefined4 local_40;
    undefined4 uStack60;
    longlong local_38;
    undefined4 local_30;

    uVar5 = DAT_140c65910;
    lVar7 = FUN_140201760(param_2);
    lVar13 = *(longlong *)(param_3 + 0x10);
    iVar6 = *(int *)(lVar7 + 4);
    puVar8 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar13 + 0x20) + 0xa0),
                          *(undefined4 *)(param_3 + 8));
    puVar3 = *(undefined8 **)(lVar13 + 0x10);
    *puVar3 = *puVar8;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar8 + 1);
    *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
    lVar13 = *(longlong *)(param_3 + 0x10);
    lVar9 = FUN_14018f0e0(&local_48,L"bAccountUnlock");
    if (*(longlong *)(lVar9 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar13 + 0x10) + 8) = 0;
        *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
    }
    else {
        lVar12 = -1;
        do {
            lVar12 = lVar12 + 1;
        } while (*(char *)(*(longlong *)(lVar9 + 8) + lVar12) != '\0');
        FUN_140058710(lVar13);
    }
    if (CONCAT44(uStack60,local_40) != 0) {
        FUN_14018b900(CONCAT44(uStack60,local_40),0);
    }
    puVar4 = *(uint **)(lVar13 + 0x10);
    puVar4[2] = 1;
    *puVar4 = (uint)(iVar6 == 0);
    *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
    uVar10 = FUN_1400580e0(lVar13,0xfffffffd);
    FUN_14005ea50(lVar13,uVar10,*(longlong *)(lVar13 + 0x10) + -0x20,
                  *(longlong *)(lVar13 + 0x10) + -0x10);
    *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + -0x20;
    plVar1 = (longlong *)(*(longlong *)(param_3 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar13 = *(longlong *)(param_3 + 0x10);
    local_68 = &PTR_FUN_140b569f0;
    local_50 = 1;
    local_58 = lVar13;
    if (*(ulonglong *)(*(longlong *)(lVar13 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar13 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar13);
    }
    puVar3 = *(undefined8 **)(lVar13 + 0x10);
    uVar10 = FUN_14005c1b0(lVar13,0,0);
    *(undefined4 *)(puVar3 + 1) = 5;
    *puVar3 = uVar10;
    *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
    local_60 = FUN_1400578c0(lVar13);
    puVar11 = (undefined4 *)(lVar7 + 8);
    lVar13 = 6;
    do {
        uVar2 = *puVar11;
        if (DAT_140c63840 == (code *)0x0) {
            if (_DAT_140c64c20 == 0) {
                iVar6 = FUN_1402010c0();
                if (-1 < iVar6) {
                    lVar7 = (**(code **)(*DAT_140c64e50 + 0x18))(DAT_140c64e50,uVar2);
                    goto LAB_140452c9b;
                }
            }
        }
        else {
            lVar7 = (*DAT_140c63840)(&PTR_u_GenericUnlockEntry_140a6a4e8,uVar2,DAT_140c63858);
            LAB_140452c9b:
            if (lVar7 != 0) {
                lVar7 = FUN_1404530f0(uVar5,*(undefined4 *)(lVar7 + 0x18),*(undefined4 *)(lVar7 + 0x1c));
                if (lVar7 != 0) {
                    lVar9 = *(longlong *)(param_3 + 0x10);
                    local_48 = &PTR_FUN_140b569f0;
                    local_30 = 1;
                    local_38 = lVar9;
                    if (*(ulonglong *)(*(longlong *)(lVar9 + 0x20) + 0x70) <=
                        *(ulonglong *)(*(longlong *)(lVar9 + 0x20) + 0x78)) {
                        FUN_14005e2c0(lVar9);
                    }
                    puVar3 = *(undefined8 **)(lVar9 + 0x10);
                    uVar10 = FUN_14005c1b0(lVar9,0);
                    *(undefined4 *)(puVar3 + 1) = 5;
                    *puVar3 = uVar10;
                    *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
                    local_40 = FUN_1400578c0(lVar9);
                    FUN_140451eb0(lVar7);
                    FUN_1400fb1d0(&local_68);
                    FUN_1400579e0(lVar9);
                }
            }
        }
        puVar11 = puVar11 + 1;
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) {
            FUN_1400fb2a0(param_3,L"arUnlocks",local_60);
            if (local_58 != 0) {
                FUN_1400579e0();
            }
            return;
        }
    } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140452d90(undefined8 param_1,uint *param_2)

{
    undefined4 uVar1;
    int iVar2;
    longlong lVar3;
    undefined8 uVar4;
    uint uVar5;
    ulonglong uVar6;

    uVar6 = 0;
    if (*param_2 != 0) {
        do {
            uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 2) + uVar6 * 4);
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c64c20 == 0) && (iVar2 = FUN_1402010c0(), -1 < iVar2)) {
                    lVar3 = (**(code **)(*DAT_140c64e50 + 0x18))(DAT_140c64e50,uVar1);
                    goto LAB_140452df8;
                }
            }
            else {
                lVar3 = (*DAT_140c63840)(&PTR_u_GenericUnlockEntry_140a6a4e8,uVar1,DAT_140c63858);
                LAB_140452df8:
                if (lVar3 != 0) {
                    uVar4 = FUN_140453190(param_1,lVar3 + 0x18);
                    lVar3 = FUN_1404532a0(uVar4);
                    *(undefined4 *)(lVar3 + 8) = 1;
                }
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
        } while (uVar5 < *param_2);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140452e40(longlong param_1,uint *param_2)

{
    undefined4 uVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    uint uVar9;
    longlong local_res8;
    longlong local_res10;
    undefined4 local_28;
    undefined8 local_24;
    undefined4 local_1c;
    ulonglong uVar10;

    uVar10 = 0;
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
    if (lVar4 != *(longlong *)(param_1 + 8)) {
        do {
            lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x30) + 0x10);
            if (lVar3 != *(longlong *)(lVar4 + 0x30)) {
                do {
                    lVar6 = *(longlong *)(lVar3 + 0x18);
                    *(undefined4 *)(lVar3 + 0x28) = 0;
                    if (lVar6 == 0) {
                        lVar6 = *(longlong *)(lVar3 + 8);
                        if (lVar3 == *(longlong *)(lVar6 + 0x18)) {
                            do {
                                lVar3 = lVar6;
                                lVar6 = *(longlong *)(lVar3 + 8);
                            } while (lVar3 == *(longlong *)(lVar6 + 0x18));
                        }
                        if (*(longlong *)(lVar3 + 0x18) != lVar6) {
                            lVar3 = lVar6;
                        }
                    }
                    else {
                        for (lVar5 = *(longlong *)(lVar6 + 0x10); lVar3 = lVar6, lVar5 != 0;
                             lVar5 = *(longlong *)(lVar5 + 0x10)) {
                            lVar6 = lVar5;
                        }
                    }
                } while (lVar3 != *(longlong *)(lVar4 + 0x30));
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
                for (lVar6 = *(longlong *)(lVar3 + 0x10); lVar4 = lVar3, lVar6 != 0;
                     lVar6 = *(longlong *)(lVar6 + 0x10)) {
                    lVar3 = lVar6;
                }
            }
        } while (lVar4 != *(longlong *)(param_1 + 8));
    }
    if (*param_2 != 0) {
        do {
            uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 2) + uVar10 * 4);
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c64c20 == 0) && (iVar2 = FUN_1402010c0(), -1 < iVar2)) {
                    lVar4 = (**(code **)(*DAT_140c64e50 + 0x18))(DAT_140c64e50,uVar1);
                    goto LAB_140452f92;
                }
            }
            else {
                lVar4 = (*DAT_140c63840)();
                LAB_140452f92:
                if (lVar4 != 0) {
                    lVar5 = FUN_140453190(param_1,lVar4 + 0x18);
                    lVar3 = *(longlong *)(lVar5 + 8);
                    lVar6 = lVar3;
                    if (*(longlong *)(lVar3 + 8) != 0) {
                        lVar7 = *(longlong *)(lVar3 + 8);
                        do {
                            if (*(uint *)(lVar7 + 0x20) < *(uint *)(lVar4 + 0x1c)) {
                                lVar8 = *(longlong *)(lVar7 + 0x18);
                            }
                            else {
                                lVar8 = *(longlong *)(lVar7 + 0x10);
                                lVar6 = lVar7;
                            }
                            lVar7 = lVar8;
                        } while (lVar8 != 0);
                    }
                    if ((lVar6 == lVar3) || (*(uint *)(lVar4 + 0x1c) < *(uint *)(lVar6 + 0x20))) {
                        local_28 = *(undefined4 *)(lVar4 + 0x1c);
                        local_24 = 0;
                        local_1c = 0;
                        local_res8 = lVar6;
                        FUN_1403ae630(lVar5,&local_res10,&local_res8,&local_28);
                        lVar6 = local_res10;
                    }
                    *(undefined4 *)(lVar6 + 0x28) = 1;
                }
            }
            uVar9 = (int)uVar10 + 1;
            uVar10 = (ulonglong)uVar9;
        } while (uVar9 < *param_2);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140453040(undefined8 param_1,uint *param_2)

{
    undefined4 uVar1;
    int iVar2;
    longlong lVar3;
    undefined8 uVar4;
    uint uVar5;
    ulonglong uVar6;

    uVar6 = 0;
    if (*param_2 != 0) {
        do {
            uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 2) + uVar6 * 4);
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c64c20 == 0) && (iVar2 = FUN_1402010c0(), -1 < iVar2)) {
                    lVar3 = (**(code **)(*DAT_140c64e50 + 0x18))(DAT_140c64e50,uVar1);
                    goto LAB_1404530a8;
                }
            }
            else {
                lVar3 = (*DAT_140c63840)(&PTR_u_GenericUnlockEntry_140a6a4e8,uVar1,DAT_140c63858);
                LAB_1404530a8:
                if (lVar3 != 0) {
                    uVar4 = FUN_140453190(param_1,lVar3 + 0x18);
                    lVar3 = FUN_1404532a0(uVar4);
                    *(undefined4 *)(lVar3 + 4) = 1;
                }
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
        } while (uVar5 < *param_2);
    }
    return;
}



longlong FUN_1404530f0(longlong param_1,int param_2,uint param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 8);
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
    if (local_res8 != lVar1) {
        lVar1 = *(longlong *)(local_res8 + 0x30);
        local_res8 = lVar1;
        lVar2 = *(longlong *)(lVar1 + 8);
        while (lVar2 != 0) {
            if (*(uint *)(lVar2 + 0x20) < param_3) {
                lVar2 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                local_res8 = lVar2;
                lVar2 = *(longlong *)(lVar2 + 0x10);
            }
        }
        if ((local_res8 == lVar1) || (param_3 < *(uint *)(local_res8 + 0x20))) {
            local_res8 = lVar1;
        }
        if (local_res8 != lVar1) {
            return local_res8 + 0x24;
        }
    }
    return 0;
}



longlong FUN_140453190(longlong param_1,int *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong local_res8;
    longlong local_res18;
    undefined local_58 [8];
    undefined *local_50;
    undefined8 local_48;
    int local_38 [2];
    undefined local_30 [8];
    undefined8 local_28;

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
        local_50 = (undefined *)FUN_14018b280();
        local_48 = 0;
        *local_50 = 0;
        *(undefined8 *)(local_50 + 8) = 0;
        *(undefined **)(local_50 + 0x10) = local_50;
        *(undefined **)(local_50 + 0x18) = local_50;
        local_38[0] = *param_2;
        FUN_140453330(local_30,local_58);
        FUN_140453400(param_1,&local_res18,&local_res8,local_38);
        FUN_140008410(local_30);
        FUN_14018b900(local_28,0);
        FUN_140008410(local_58);
        FUN_14018b900(local_50,0);
        local_res8 = local_res18;
    }
    return local_res8 + 0x28;
}



longlong FUN_1404532a0(longlong param_1,uint *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong local_res8 [2];
    longlong local_res18 [2];
    uint local_18;
    undefined8 local_14;
    undefined4 local_c;

    lVar1 = *(longlong *)(param_1 + 8);
    local_res8[0] = lVar1;
    if (*(longlong *)(lVar1 + 8) != 0) {
        lVar2 = *(longlong *)(lVar1 + 8);
        do {
            if (*(uint *)(lVar2 + 0x20) < *param_2) {
                lVar3 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                lVar3 = *(longlong *)(lVar2 + 0x10);
                local_res8[0] = lVar2;
            }
            lVar2 = lVar3;
        } while (lVar3 != 0);
    }
    if ((local_res8[0] == lVar1) || (*param_2 < *(uint *)(local_res8[0] + 0x20))) {
        local_18 = *param_2;
        local_14 = 0;
        local_c = 0;
        FUN_1403ae630(param_1,local_res18,local_res8,&local_18);
        local_res8[0] = local_res18[0];
    }
    return local_res8[0] + 0x24;
}



longlong FUN_140453330(longlong param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined *puVar3;
    undefined8 uVar4;

    puVar3 = (undefined *)FUN_14018b280();
    *(undefined **)(param_1 + 8) = puVar3;
    *(undefined8 *)(param_1 + 0x10) = 0;
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 8) + 8);
    *puVar3 = 0;
    if (lVar1 == 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 8) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 8) + 0x10) = *(longlong *)(param_1 + 8);
        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = *(longlong *)(param_1 + 8);
    }
    else {
        lVar1 = *(longlong *)(param_1 + 8);
        uVar4 = FUN_140453610(param_1,*(undefined8 *)(*(longlong *)(param_2 + 8) + 8),lVar1);
        *(undefined8 *)(lVar1 + 8) = uVar4;
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
        for (lVar2 = *(longlong *)(lVar1 + 0x10); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x10)) {
            lVar1 = lVar2;
        }
        *(longlong *)(*(longlong *)(param_1 + 8) + 0x10) = lVar1;
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
        for (lVar2 = *(longlong *)(lVar1 + 0x18); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x18)) {
            lVar1 = lVar2;
        }
        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar1;
    }
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    return param_1;
}



longlong * FUN_140453400(longlong param_1,longlong *param_2,char **param_3,int *param_4)

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
            LAB_14045345a:
            plVar4 = (longlong *)FUN_140453820(param_1,local_18,param_4);
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
                    lVar5 = FUN_14018b280(0x48);
                    if ((int *)(lVar5 + 0x20) != (int *)0x0) {
                        *(int *)(lVar5 + 0x20) = *param_4;
                        FUN_140453330(lVar5 + 0x28,param_4 + 2);
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
                    lVar5 = FUN_140453920(iVar1,param_4);
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
                plVar4 = (longlong *)FUN_140453820(param_1,local_18,param_4);
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
            goto LAB_14045345a;
        if (*(longlong *)(lVar5 + 0x18) == 0) {
            FUN_140453730(param_1,param_2,0,lVar5,param_4);
            return param_2;
        }
    }
    FUN_140453730();
    return param_2;
}



undefined * FUN_140453610(undefined8 param_1,undefined *param_2,undefined8 param_3)

{
    undefined uVar1;
    undefined *puVar2;
    undefined8 uVar3;
    undefined *puVar4;
    undefined *puVar5;
    undefined *puVar6;

    puVar2 = (undefined *)FUN_14018b280();
    if ((undefined4 *)(puVar2 + 0x20) != (undefined4 *)0x0) {
        *(undefined4 *)(puVar2 + 0x20) = *(undefined4 *)(param_2 + 0x20);
        *(undefined4 *)(puVar2 + 0x24) = *(undefined4 *)(param_2 + 0x24);
        *(undefined4 *)(puVar2 + 0x28) = *(undefined4 *)(param_2 + 0x28);
        *(undefined4 *)(puVar2 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    }
    uVar1 = *param_2;
    *(undefined8 *)(puVar2 + 8) = param_3;
    *puVar2 = uVar1;
    *(undefined8 *)(puVar2 + 0x10) = 0;
    *(undefined8 *)(puVar2 + 0x18) = 0;
    if (*(longlong *)(param_2 + 0x18) != 0) {
        uVar3 = FUN_140453610(param_1,*(longlong *)(param_2 + 0x18),puVar2);
        *(undefined8 *)(puVar2 + 0x18) = uVar3;
    }
    puVar6 = *(undefined **)(param_2 + 0x10);
    puVar5 = puVar2;
    if (puVar6 == (undefined *)0x0) {
        return puVar2;
    }
    do {
        puVar4 = (undefined *)FUN_14018b280(0x30);
        if ((undefined4 *)(puVar4 + 0x20) != (undefined4 *)0x0) {
            *(undefined4 *)(puVar4 + 0x20) = *(undefined4 *)(puVar6 + 0x20);
            *(undefined4 *)(puVar4 + 0x24) = *(undefined4 *)(puVar6 + 0x24);
            *(undefined4 *)(puVar4 + 0x28) = *(undefined4 *)(puVar6 + 0x28);
            *(undefined4 *)(puVar4 + 0x2c) = *(undefined4 *)(puVar6 + 0x2c);
        }
        *puVar4 = *puVar6;
        *(undefined8 *)(puVar4 + 0x10) = 0;
        *(undefined8 *)(puVar4 + 0x18) = 0;
        *(undefined **)(puVar5 + 0x10) = puVar4;
        *(undefined **)(puVar4 + 8) = puVar5;
        if (*(longlong *)(puVar6 + 0x18) != 0) {
            uVar3 = FUN_140453610(param_1,*(longlong *)(puVar6 + 0x18),puVar4);
            *(undefined8 *)(puVar4 + 0x18) = uVar3;
        }
        puVar6 = *(undefined **)(puVar6 + 0x10);
        puVar5 = puVar4;
    } while (puVar6 != (undefined *)0x0);
    return puVar2;
}



longlong *
FUN_140453730(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,int *param_5)

{
    longlong lVar1;
    longlong lVar2;

    if (((param_4 == *(longlong *)(param_1 + 8)) || (param_3 != 0)) ||
        (*param_5 < *(int *)(param_4 + 0x20))) {
        lVar2 = FUN_14018b280(0x48);
        if ((int *)(lVar2 + 0x20) != (int *)0x0) {
            *(int *)(lVar2 + 0x20) = *param_5;
            FUN_140453330(lVar2 + 0x28,param_5 + 2);
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
        lVar2 = FUN_140453920(param_1,param_5);
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



char ** FUN_140453820(longlong param_1,char **param_2,int *param_3)

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
        if (pcVar5 == *(char **)(pcVar2 + 0x10)) goto LAB_14045387e;
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
    LAB_14045387e:
    ppcVar1 = (char **)FUN_140453730(param_1,local_res8,pcVar4,pcVar5,param_3);
    *param_2 = *ppcVar1;
    *(undefined *)(param_2 + 1) = 1;
    return param_2;
}



longlong FUN_140453920(undefined8 param_1,undefined4 *param_2)

{
    longlong lVar1;

    lVar1 = FUN_14018b280();
    if ((undefined4 *)(lVar1 + 0x20) != (undefined4 *)0x0) {
        *(undefined4 *)(lVar1 + 0x20) = *param_2;
        FUN_140453330(lVar1 + 0x28,param_2 + 2);
    }
    return lVar1;
}



undefined4 FUN_140453960(undefined8 param_1,longlong param_2)

{
    int iVar1;

    if (param_2 != 0) {
        iVar1 = *(int *)(param_2 + 0x158);
        if ((iVar1 != 0) && (iVar1 < *(int *)(DAT_140c658f0 + 0x168))) {
            return *(undefined4 *)(*(longlong *)(DAT_140c658f0 + 0x160) + (longlong)iVar1 * 4);
        }
    }
    return 0x3f800000;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float FUN_1404539a0(undefined8 param_1,undefined8 param_2,uint param_3)

{
    float fVar1;
    float in_stack_00000038;

    fVar1 = (DAT_140dc2944 - DAT_140dc294c) /
            ((DAT_140dc293c / (float)(ulonglong)param_3) * _DAT_140dc2940);
    if (fVar1 <= in_stack_00000038) {
        in_stack_00000038 = in_stack_00000038 - fVar1;
        FUN_1408fc950((in_stack_00000038 / (DAT_140dc2948 + in_stack_00000038)) * DAT_140c45858 * 0.5);
    }
    return (float)(ulonglong)DAT_140dc2950 * 0.01;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined FUN_140453a80(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                        undefined8 param_5,float param_6,float param_7)

{
    undefined uVar1;
    float fVar2;
    float fVar3;
    float fVar4;

    fVar4 = (DAT_140dc2958 / (float)(ulonglong)param_3) * _DAT_140dc295c;
    fVar3 = ((DAT_140dc2960 - _DAT_140dc2968) - param_6 * 100.0) / fVar4;
    fVar2 = 0.0;
    uVar1 = fVar3 <= param_7;
    if ((bool)uVar1) {
        param_7 = param_7 - fVar3;
        fVar2 = (float)FUN_1408fc950((param_7 / (DAT_140dc2964 + param_7)) * DAT_140c45858 * 0.5);
        fVar2 = fVar2 * param_7 * fVar4 + DAT_140dc2960;
    }
    if ((float)(ulonglong)DAT_140dc296c < fVar2) {
        uVar1 = 2;
    }
    return uVar1;
}



float FUN_140453b60(float param_1,float param_2,undefined8 param_3,float param_4,
                    undefined8 param_5_00,undefined8 param_6_00,uint param_7_00,undefined8 param_8_00
        ,uint param_5,undefined8 param_6,float param_7,float param_8,uint param_9)

{
    float fVar1;

    fVar1 = (param_4 - (float)(ulonglong)param_5) /
            ((param_2 / (float)(ulonglong)param_7_00) * param_1);
    if (fVar1 <= param_7) {
        param_7 = param_7 - fVar1;
        FUN_1408fc950((param_7 / (param_7 + param_8)) * DAT_140c45858 * 0.5);
    }
    return (float)(ulonglong)param_9 * 0.01;
}



undefined FUN_140453c50(float param_1,float param_2,undefined8 param_3,float param_4,
                        undefined8 param_5_00,undefined8 param_6_00,uint param_7_00,
                        undefined8 param_8_00,uint param_5,float param_6,float param_7,float param_8,
                        uint param_9)

{
    undefined uVar1;
    float fVar2;
    float fVar3;

    param_1 = (param_2 / (float)(ulonglong)param_7_00) * param_1;
    fVar2 = 0.0;
    fVar3 = ((param_4 - (float)(ulonglong)param_5) - param_6 * 100.0) / param_1;
    uVar1 = fVar3 <= param_7;
    if ((bool)uVar1) {
        param_7 = param_7 - fVar3;
        fVar2 = (float)FUN_1408fc950((param_7 / (param_7 + param_8)) * DAT_140c45858 * 0.5);
        fVar2 = fVar2 * param_7 * param_1 + param_4;
    }
    if ((float)(ulonglong)param_9 < fVar2) {
        uVar1 = 2;
    }
    return uVar1;
}



void FUN_140453d40(longlong param_1)

{
    if (*(undefined8 **)(param_1 + 0x400) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x400) = *(undefined8 *)(param_1 + 0x408);
    }
    if (*(longlong *)(param_1 + 0x408) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x408) + 0x400) = *(undefined8 *)(param_1 + 0x400);
    }
    *(undefined8 *)(param_1 + 0x408) = 0;
    *(undefined8 *)(param_1 + 0x400) = 0;
    return;
}



undefined8 * FUN_140453d90(undefined8 *param_1)

{
    *param_1 = &PTR_LAB_140b55048;
    *(undefined4 *)(param_1 + 1) = 1;
    *param_1 = &PTR_LAB_140b67088;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    *(int *)(param_1 + 2) = DAT_140c1e664;
    DAT_140c1e664 = DAT_140c1e664 + 1;
    *(undefined8 *)((longlong)param_1 + 0x14) = 0;
    *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    *(undefined4 *)(param_1 + 0xb) = 0;
    FUN_140565410(0,param_1);
    return param_1;
}



undefined8 FUN_140453e10(undefined8 param_1,ulonglong param_2)

{
    FUN_140453e50();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_140453e50(undefined8 *param_1)

{
    longlong lVar1;
    undefined4 local_res8 [8];

    *param_1 = &PTR_LAB_140b67088;
    local_res8[0] = *(undefined4 *)(param_1 + 2);
    FUN_1405664f0(DAT_140c65b70 + 0x758,local_res8);
    lVar1 = param_1[8];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    if ((undefined8 *)param_1[5] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[5] = param_1[6];
    }
    if (param_1[6] != 0) {
        *(undefined8 *)(param_1[6] + 0x28) = param_1[5];
    }
    param_1[5] = 0;
    param_1[6] = 0;
    *param_1 = &PTR_LAB_140b55048;
    return;
}



int FUN_140453ee0(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    int iVar3;
    bool bVar4;

    lVar2 = FUN_1403d90d0();
    if (*(int *)(param_1 + 0x50) == 0) goto LAB_140453f63;
    if (lVar2 == 0) {
        LAB_140453f3d:
        lVar2 = FUN_1407a0fd0();
        if (lVar2 == 0) goto LAB_140453f63;
    }
    else {
        if (*(longlong *)(DAT_140c65898 + 0x78) == lVar2) {
            bVar4 = true;
        }
        else {
            bVar4 = *(longlong *)(DAT_140c65898 + 0x6490) == lVar2;
        }
        lVar2 = 0;
        if (bVar4) {
            lVar2 = DAT_140c65898;
        }
        if ((lVar2 == 0) || (lVar2 = FUN_1405a5b90(), lVar2 == 0)) goto LAB_140453f3d;
    }
    if ((*(byte *)(*(longlong *)(lVar2 + 0x70) + 0x10c) & 0x10) != 0) {
        return 0;
    }
    LAB_140453f63:
    iVar1 = *(int *)(param_1 + 0x24);
    if ((iVar1 != -1) && (iVar3 = DAT_140c636a8 - *(int *)(param_1 + 0x20), iVar3 - iVar1 < 1)) {
        return iVar1 - iVar3;
    }
    return 0;
}



// WARNING: Removing unreachable block (ram,0x00014045402a)

void FUN_140453f90(longlong *param_1)

{
    if (*param_1 != 0) {
        FUN_14018b900();
    }
    if ((longlong *)param_1[2] != (longlong *)0x0) {
        *(longlong *)param_1[2] = param_1[3];
    }
    if (param_1[3] != 0) {
        *(longlong *)(param_1[3] + 0x10) = param_1[2];
    }
    param_1[2] = 0;
    param_1[3] = 0;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
        *(longlong *)param_1[4] = param_1[5];
    }
    if (param_1[5] != 0) {
        *(longlong *)(param_1[5] + 0x20) = param_1[4];
    }
    param_1[4] = 0;
    param_1[5] = 0;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
        *(longlong *)param_1[6] = param_1[7];
    }
    if (param_1[7] != 0) {
        *(longlong *)(param_1[7] + 0x30) = param_1[6];
    }
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
        *(longlong *)param_1[4] = param_1[5];
    }
    if (param_1[5] != 0) {
        *(longlong *)(param_1[5] + 0x20) = param_1[4];
    }
    param_1[4] = 0;
    param_1[5] = 0;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
        *(longlong *)param_1[2] = param_1[3];
    }
    if (param_1[3] != 0) {
        *(longlong *)(param_1[3] + 0x10) = param_1[2];
    }
    param_1[3] = 0;
    param_1[2] = 0;
    return;
}



void FUN_140454090(longlong param_1)

{
    if (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x18);
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10) = *(undefined8 *)(param_1 + 0x10);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x28);
    }
    if (*(longlong *)(param_1 + 0x28) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x20) = *(undefined8 *)(param_1 + 0x20);
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x38) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x30) = *(undefined8 *)(param_1 + 0x30);
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    FUN_140453f90(param_1);
    FUN_14018b900(param_1,0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140454130(void)

{
    int iVar1;
    uint uVar2;
    longlong lVar3;
    uint uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    undefined4 uVar8;
    float fVar9;
    undefined **local_res8;
    undefined **local_88;
    ulonglong local_80;
    LPVOID local_78;
    undefined **local_68;
    ulonglong local_60;
    LPVOID local_58;

    lVar3 = FUN_140200220(0x1ad);
    if (lVar3 == 0) {
        uVar8 = 0x42c80000;
    }
    else {
        uVar8 = *(undefined4 *)(lVar3 + 0x18);
    }
    uVar7 = 0;
    fVar9 = 0.0;
    uVar2 = 0;
    uVar5 = uVar7;
    uVar6 = uVar7;
    do {
        if (fVar9 == *(float *)((longlong)&DAT_140c48184 + uVar6)) {
            *(undefined4 *)((longlong)&DAT_140c48184 + uVar6) = uVar8;
        }
        if ((longlong)*(int *)((longlong)&DAT_140c48150 + uVar6) != uVar5) {
            local_68 = &PTR_LAB_140b5e648;
            local_60 = 0;
            local_58 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720,&local_68);
            local_88 = local_68;
            local_80 = local_60;
            local_78 = local_58;
            local_res8 = (undefined **)0x141e02240;
            iVar1 = FUN_1401971e0(&DAT_140c8acb8,0x16,&local_res8,uVar5,&local_88);
            local_68 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720,local_58);
            if (iVar1 != 0) {
                DebugBreak();
            }
        }
        uVar6 = uVar6 + 0x48;
        uVar5 = uVar5 + 1;
    } while (uVar6 < 0x1cb0);
    if (DAT_140c63838 == (code *)0x0) {
        if (_DAT_140c653c8 == 0) {
            iVar1 = FUN_14021b5e0();
            if (iVar1 < 0) {
                uVar2 = 0;
            }
            else {
                uVar2 = (**(code **)(*DAT_140c63d90 + 0x28))();
            }
        }
    }
    else {
        uVar2 = (*DAT_140c63838)(&PTR_u_ModelSequenceTransition_140a6ba90,DAT_140c63858);
    }
    uVar5 = uVar7;
    if (uVar2 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                uVar6 = uVar7;
                if (_DAT_140c653c8 == 0) {
                    iVar1 = FUN_14021b5e0();
                    if (iVar1 < 0) {
                        uVar6 = 0;
                    }
                    else {
                        uVar6 = (**(code **)(*DAT_140c63d90 + 0x20))(DAT_140c63d90,uVar5);
                    }
                }
            }
            else {
                uVar6 = (*DAT_140c63848)(&PTR_u_ModelSequenceTransition_140a6ba90,uVar5,DAT_140c63858);
            }
            local_res8 = *(undefined ***)(uVar6 + 4);
            local_80 = local_80 & 0xffffffff00000000 | (ulonglong)*(uint *)(uVar6 + 0xc);
            local_88 = local_res8;
            FUN_140480a60(&DAT_140c7cf40,&local_68,&local_88);
            uVar4 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar4;
        } while (uVar4 < uVar2);
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_140454380(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 *puVar3;
    undefined8 *puVar4;
    undefined *puVar5;
    undefined2 *puVar6;
    undefined8 *puVar7;
    undefined8 uVar8;
    longlong lVar9;
    int iVar10;
    undefined4 *puVar11;
    undefined4 uVar12;
    undefined4 in_XMM6_Da;
    undefined4 uVar13;
    undefined4 in_XMM6_Db;
    undefined4 uVar14;
    undefined4 in_XMM6_Dc;
    undefined4 uVar15;
    undefined4 in_XMM6_Dd;
    undefined4 uVar16;

    puVar7 = (undefined8 *)0x0;
    *(undefined4 *)(param_1 + 1) = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 6) = 0x19;
    *(undefined4 *)((longlong)param_1 + 0x34) = 2;
    param_1[7] = 1;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    *param_1 = &PTR_FUN_140b66fd0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    puVar4 = (undefined8 *)
            FUN_14018b280(0x18,0,param_3,param_4,
                          CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da))))
            ;
    if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &PTR_LAB_140b55048;
        *(undefined4 *)(puVar4 + 1) = 1;
        puVar4[2] = param_1;
        *puVar4 = &PTR_LAB_140b55048;
        puVar7 = puVar4;
    }
    param_1[0xf] = puVar7;
    param_1[0x10] = 0x25;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    *(undefined4 *)(param_1 + 0x13) = 0;
    param_1[0x15] = 0;
    param_1[0x14] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined8 *)((longlong)param_1 + 0xc4) = 3;
    *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
    param_1[0x1a] = 0;
    *(undefined4 *)(param_1 + 0x1b) = 0x11;
    *(undefined4 *)((longlong)param_1 + 0xdc) = 0x17;
    param_1[0x1c] = 0;
    *(undefined4 *)(param_1 + 0x1d) = 0;
    *(undefined8 *)((longlong)param_1 + 0xec) = 2;
    *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    *(undefined4 *)(param_1 + 0x21) = 0;
    *(undefined4 *)((longlong)param_1 + 0x10c) = 1;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x124) = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    puVar5 = (undefined *)FUN_14018b280(0x28);
    param_1[0x2b] = 0;
    param_1[0x2a] = puVar5;
    *puVar5 = 0;
    *(undefined8 *)(param_1[0x2a] + 8) = 0;
    *(undefined8 *)(param_1[0x2a] + 0x10) = param_1[0x2a];
    *(undefined8 *)(param_1[0x2a] + 0x18) = param_1[0x2a];
    *(undefined4 *)(param_1 + 0x2d) = 0;
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    puVar6 = (undefined2 *)FUN_14018b280(0x10);
    param_1[0x2f] = puVar6;
    param_1[0x30] = puVar6;
    param_1[0x31] = puVar6 + 8;
    if (puVar6 != (undefined2 *)0x0) {
        *puVar6 = 0;
    }
    param_1[0x33] = 0;
    param_1[0x32] = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    param_1[0x35] = 0;
    *(undefined2 *)(param_1 + 0x36) = 0;
    *(undefined *)((longlong)param_1 + 0x1b2) = 0;
    *(undefined8 *)((longlong)param_1 + 0x1b4) = 0;
    *(undefined8 *)((longlong)param_1 + 0x1bc) = 0;
    *(undefined8 *)((longlong)param_1 + 0x1c4) = 0;
    *(undefined8 *)((longlong)param_1 + 0x1cc) = 0;
    *(undefined8 *)((longlong)param_1 + 0x1d4) = 0;
    *(undefined8 *)((longlong)param_1 + 0x1dc) = 0;
    *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
    param_1[0x42] = 0;
    *(undefined4 *)(param_1 + 0x43) = 0;
    param_1[0x49] = 0;
    param_1[0x4a] = 0;
    *(undefined4 *)(param_1 + 0x4b) = 0;
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
    param_1[0x51] = 0;
    param_1[0x52] = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0x544e5645;
    *(undefined8 *)((longlong)param_1 + 0x2a4) = 0;
    *(undefined8 *)((longlong)param_1 + 0x2ac) = 0;
    param_1[0x58] = 0;
    param_1[0x57] = 0;
    *(undefined4 *)(param_1 + 0x59) = 0;
    puVar7 = param_1 + 0x5a;
    iVar10 = 0x1b;
    do {
        iVar10 = iVar10 + -1;
        puVar7[1] = 0;
        *puVar7 = 0;
        puVar7 = puVar7 + 2;
    } while (-1 < iVar10);
    puVar5 = (undefined *)FUN_14018b280(0x30);
    param_1[0x94] = 0;
    param_1[0x93] = puVar5;
    *puVar5 = 0;
    *(undefined8 *)(param_1[0x93] + 8) = 0;
    *(undefined8 *)(param_1[0x93] + 0x10) = param_1[0x93];
    *(undefined8 *)(param_1[0x93] + 0x18) = param_1[0x93];
    *(undefined4 *)(param_1 + 0x96) = 0;
    param_1[0x99] = 0;
    param_1[0x9a] = 0;
    param_1[0x9c] = 0;
    param_1[0x9d] = 0;
    *(undefined4 *)(param_1 + 0x97) = 0x544e5645;
    *(undefined8 *)((longlong)param_1 + 0x4fc) = 0;
    *(undefined8 *)((longlong)param_1 + 0x504) = 0;
    *(undefined4 *)((longlong)param_1 + 0x50c) = 0;
    *(undefined4 *)(param_1 + 0xae) = 0x3f800000;
    *(undefined8 *)((longlong)param_1 + 0x574) = 0x3fc00000;
    *(undefined8 *)((longlong)param_1 + 0x57c) = 0;
    param_1[0xb1] = 0;
    param_1[0xb2] = 0;
    param_1[0xb4] = 0;
    param_1[0xb3] = 0;
    param_1[0xb6] = 0;
    param_1[0xb5] = 0;
    param_1[0xb7] = 0;
    param_1[0x198] = 0;
    param_1[0x199] = 0;
    param_1[0x19a] = 0;
    *(undefined4 *)(param_1 + 0x19b) = 0;
    uVar2 = uRam0000000140c783dc;
    uVar1 = uRam0000000140c783d8;
    uVar12 = uRam0000000140c783d4;
    *(undefined4 *)(param_1 + 0x19c) = _DAT_140c783d0;
    *(undefined4 *)((longlong)param_1 + 0xce4) = uVar12;
    *(undefined4 *)(param_1 + 0x19d) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xcec) = uVar2;
    *(undefined4 *)(param_1 + 0x19e) = DAT_140c783e0;
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    param_1[0x1a1] = 0;
    param_1[0x1a2] = 0;
    *(undefined4 *)(param_1 + 0x1a3) = 0;
    param_1[0x1a4] = 0;
    param_1[0x1a6] = 0;
    param_1[0x1a7] = 0;
    param_1[0x1a8] = 0;
    param_1[0x1a9] = 0;
    param_1[0x1aa] = 0;
    param_1[0x1ab] = 1;
    param_1[0x1c1] = 0;
    param_1[0x1c2] = 0;
    param_1[0x1c4] = 0;
    param_1[0x1c5] = 0;
    *(undefined4 *)(param_1 + 0x1bf) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0xe3c) = 0x69;
    param_1[0x1c9] = 0;
    param_1[0x1ca] = 0;
    param_1[0x1cd] = 0;
    param_1[0x1ce] = 0;
    param_1[0x1d0] = 0;
    param_1[0x1be] = 0;
    *(undefined4 *)((longlong)param_1 + 0xe8c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1d2) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0xe94) = 0x3f800000;
    param_1[0x1d3] = 0x3f800000;
    param_1[0x1d4] = 0;
    param_1[0x1d7] = 0;
    param_1[0x1d8] = 0;
    param_1[0x1da] = 0;
    param_1[0x1db] = 0;
    *(undefined4 *)(param_1 + 0x1d5) = 0x544e5645;
    *(undefined8 *)((longlong)param_1 + 0xeec) = 0;
    param_1[0x1e0] = 0;
    param_1[0x1e1] = 0;
    param_1[0x1e2] = 0;
    param_1[0x1e3] = 0;
    param_1[0x1e5] = 0;
    param_1[0x1e6] = 0;
    *(undefined4 *)(param_1 + 0x1e7) = 0;
    param_1[0x1ea] = 0;
    *(undefined4 *)(param_1 + 0x1e8) = 0;
    param_1[0x1e9] = 0;
    param_1[0x1fd] = 0;
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar16 = 0;
    *(undefined (*) [16])(param_1 + 0x1ec) = ZEXT816(0);
    *(undefined (*) [16])(param_1 + 0x1ee) = ZEXT816(0);
    *(undefined (*) [16])(param_1 + 0x1f2) = ZEXT816(0);
    *(undefined (*) [16])(param_1 + 500) = ZEXT816(0);
    *(undefined (*) [16])(param_1 + 0x1f6) =
            CONCAT412(0.0 - fRam0000000140c7788c,
                      CONCAT48(0.0 - fRam0000000140c77888,
                               CONCAT44(0.0 - fRam0000000140c77884,0.0 - _DAT_140c77880)));
    param_1[0x1f8] = 0;
    *(undefined4 *)(param_1 + 0x1f9) = 0;
    *(undefined8 *)((longlong)param_1 + 0xfcc) = 1;
    param_1[0x1fc] = 0;
    param_1[0x204] = 0;
    *(undefined (*) [16])(param_1 + 0x1fe) = ZEXT816(0);
    param_1[0x203] = 0;
    param_1[0x20c] = 0;
    *(undefined (*) [16])(param_1 + 0x206) = ZEXT816(0);
    param_1[0x20b] = 0;
    param_1[0x210] = 0;
    *(undefined4 *)(param_1 + 0x20e) = 0;
    param_1[0x20f] = 0;
    param_1[0x213] = 0;
    *(undefined4 *)(param_1 + 0x211) = 0;
    param_1[0x212] = 0;
    param_1[0x21a] = 0;
    param_1[0x219] = 0;
    param_1[0x21f] = 0;
    param_1[0x214] = 0;
    *(undefined4 *)(param_1 + 0x215) = 0;
    *(undefined4 *)(param_1 + 0x21c) = 0x3f800000;
    param_1[0x21e] = 0;
    *(undefined4 *)((longlong)param_1 + 0x1324) = 0;
    *(undefined4 *)((longlong)param_1 + 0x1334) = 0;
    *(undefined4 *)(param_1 + 0x269) = 0;
    *(undefined8 *)((longlong)param_1 + 0x134c) = 2;
    *(undefined8 *)((longlong)param_1 + 0x1354) = 0;
    *(undefined4 *)((longlong)param_1 + 0x135c) = 0;
    param_1[0x271] = 0;
    param_1[0x275] = 0;
    param_1[0x276] = 0;
    param_1[0x278] = 0;
    param_1[0x279] = 0;
    *(undefined4 *)(param_1 + 0x273) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x13dc) = 0;
    param_1[0x27e] = 0;
    param_1[0x27f] = 0;
    param_1[0x281] = 0;
    param_1[0x282] = 0;
    *(undefined4 *)(param_1 + 0x27c) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x1424) = 0;
    param_1[0x285] = 0x3e;
    param_1[0x288] = 0;
    param_1[0x289] = 0;
    param_1[0x28b] = 0;
    param_1[0x28c] = 0;
    *(undefined4 *)(param_1 + 0x286) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x1474) = 0;
    param_1[0x291] = 0;
    param_1[0x292] = 0;
    param_1[0x294] = 0;
    param_1[0x295] = 0;
    *(undefined4 *)(param_1 + 0x28f) = 0x544e5645;
    *(undefined8 *)((longlong)param_1 + 0x14bc) = 0;
    *(undefined8 *)((longlong)param_1 + 0x14c4) = 0;
    *(undefined8 *)((longlong)param_1 + 0x14cc) = 0;
    param_1[0x29b] = 0;
    param_1[0x29c] = 0;
    param_1[0x2a1] = 0;
    param_1[0x2a2] = 0;
    param_1[0x2a4] = 0;
    param_1[0x2a5] = 0;
    *(undefined4 *)(param_1 + 0x29f) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x153c) = 0;
    param_1[0x2aa] = 0;
    param_1[0x2ab] = 0;
    param_1[0x2ad] = 0;
    param_1[0x2ae] = 0;
    *(undefined4 *)(param_1 + 0x2a8) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x1584) = 0;
    param_1[0x2b1] = 0;
    param_1[0x2b2] = 0;
    param_1[0x2b3] = 0;
    param_1[0x2b4] = 0;
    *(undefined4 *)(param_1 + 0x2b5) = 0;
    param_1[0x2b7] = 0;
    param_1[0x2b8] = 0;
    param_1[0x2b9] = 0;
    param_1[0x2ba] = 0;
    param_1[699] = 0;
    param_1[700] = 0;
    param_1[0x2bd] = 0;
    param_1[0x2be] = 0;
    param_1[0x2bf] = 0;
    param_1[0x2c0] = 0;
    param_1[0x2c1] = 0;
    param_1[0x2c3] = 0;
    param_1[0x2c2] = 0;
    param_1[0x2c4] = 0;
    param_1[0x2c7] = 0;
    param_1[0x2c8] = 0;
    param_1[0x2ca] = 0;
    param_1[0x2cb] = 0;
    *(undefined4 *)(param_1 + 0x2c5) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x166c) = 0;
    param_1[0x2d0] = 0;
    param_1[0x2d1] = 0;
    param_1[0x2d3] = 0;
    param_1[0x2d4] = 0;
    *(undefined4 *)(param_1 + 0x2ce) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x16b4) = 0;
    puVar5 = (undefined *)FUN_14018b280(0x30);
    param_1[0x2d9] = 0;
    param_1[0x2d8] = puVar5;
    *puVar5 = 0;
    *(undefined8 *)(param_1[0x2d8] + 8) = 0;
    *(undefined8 *)(param_1[0x2d8] + 0x10) = param_1[0x2d8];
    *(undefined8 *)(param_1[0x2d8] + 0x18) = param_1[0x2d8];
    param_1[0x2dc] = 0;
    param_1[0x2db] = 0;
    param_1[0x2dd] = 0;
    param_1[0x2de] = 0;
    param_1[0x2df] = 0;
    param_1[0x2e0] = 0;
    param_1[0x2e1] = 0;
    param_1[0x2e3] = 0;
    param_1[0x2e4] = 0;
    param_1[0x2e5] = 0x3f800000;
    param_1[0x2e6] = 0;
    *(undefined4 *)(param_1 + 0x304) = 0;
    param_1[0x305] = 0;
    param_1[0x306] = 0;
    puVar5 = (undefined *)FUN_14018b280(0x38);
    param_1[0x309] = 0;
    param_1[0x308] = puVar5;
    *puVar5 = 0;
    *(undefined8 *)(param_1[0x308] + 8) = 0;
    *(undefined8 *)(param_1[0x308] + 0x10) = param_1[0x308];
    *(undefined8 *)(param_1[0x308] + 0x18) = param_1[0x308];
    uVar8 = FUN_14018b280(0x18);
    param_1[0x30d] = uVar8;
    *(undefined8 *)uVar8 = uVar8;
    *(undefined8 *)(param_1[0x30d] + 8) = param_1[0x30d];
    uVar2 = uRam0000000140c784ec;
    uVar1 = uRam0000000140c784e8;
    uVar12 = _DAT_140c784e4;
    *(undefined4 *)(param_1 + 0x30e) = _DAT_140c784e0;
    *(undefined4 *)((longlong)param_1 + 0x1874) = uVar12;
    *(undefined4 *)(param_1 + 0x30f) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x187c) = uVar2;
    uVar2 = uRam0000000140c784fc;
    uVar1 = uRam0000000140c784f8;
    uVar12 = _DAT_140c784f4;
    *(undefined4 *)(param_1 + 0x310) = _DAT_140c784f0;
    *(undefined4 *)((longlong)param_1 + 0x1884) = uVar12;
    *(undefined4 *)(param_1 + 0x311) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x188c) = uVar2;
    *(undefined (*) [16])(param_1 + 0x312) =
            CONCAT412(uVar16,CONCAT48(uVar15,CONCAT44(uVar14,uVar13)));
    *(undefined4 *)(param_1 + 0x315) = 1;
    param_1[0x316] = 0;
    param_1[0x317] = 0;
    param_1[0x318] = 0;
    param_1[0x319] = 0;
    param_1[0x31a] = 0;
    param_1[0x31b] = 0;
    param_1[0x31c] = 0;
    param_1[0x31d] = 0;
    param_1[0x31e] = 0;
    param_1[799] = 0;
    *(undefined4 *)(param_1 + 800) = 0;
    param_1[0x321] = param_1 + 0x6af;
    param_1[0x6b8] = 0;
    param_1[0x6b9] = 0;
    *(undefined4 *)(param_1 + 0x6ba) = 0;
    param_1[0x6bc] = 0;
    param_1[0x6bd] = 0;
    param_1[0x6be] = 0;
    puVar6 = (undefined2 *)FUN_14018b280(2);
    param_1[0x6be] = puVar6 + 1;
    param_1[0x6bc] = puVar6;
    param_1[0x6bd] = puVar6;
    FUN_1407db590(puVar6,&DAT_1409f02ec,0);
    param_1[0x6bd] = puVar6;
    if (puVar6 != (undefined2 *)0x0) {
        *puVar6 = 0;
    }
    *(undefined4 *)(param_1 + 0x6bf) = 0xffffffff;
    *(undefined8 *)((longlong)param_1 + 0x35fc) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3604) = 0;
    *(undefined8 *)((longlong)param_1 + 0x360c) = 0;
    param_1[0x6c4] = 0;
    param_1[0x6c3] = 0;
    param_1[0x6c6] = 0;
    param_1[0x6c5] = 0;
    param_1[0x6c8] = 0;
    param_1[0x6c7] = 0;
    param_1[0x6c9] = 0;
    param_1[0x6cc] = 0;
    param_1[0x6cd] = 0;
    param_1[0x6cf] = 0;
    param_1[0x6d0] = 0;
    *(undefined4 *)(param_1 + 0x6ca) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x3694) = 0;
    param_1[0x6d3] = 0;
    param_1[0x6d4] = 0;
    *(undefined4 *)(param_1 + 0x6d5) = 0;
    param_1[0x6d7] = 0;
    param_1[0x6d6] = 0;
    param_1[0x6d9] = 0;
    param_1[0x6d8] = 0;
    param_1[0x6da] = 0;
    *(undefined4 *)(param_1 + 0x6db) = 0;
    *(undefined4 *)((longlong)param_1 + 0x36dc) = 0x3f800000;
    param_1[0x6dc] = 0x3f800000;
    param_1[0x6dd] = 0;
    param_1[0x6de] = 0;
    param_1[0x6df] = 0;
    param_1[0x6e0] = 0x7fffffff;
    param_1[0x6e2] = 0;
    param_1[0x6e3] = 0;
    param_1[0x6e4] = 0;
    *(undefined4 *)(param_1 + 0x6e5) = 0;
    param_1[0x6e7] = 0;
    param_1[0x6e8] = 0;
    param_1[0x6e9] = 0;
    param_1[0x6ea] = 0;
    puVar5 = (undefined *)FUN_14018b280(0x28);
    param_1[0x6ed] = 0;
    param_1[0x6ec] = puVar5;
    *puVar5 = 0;
    *(undefined8 *)(param_1[0x6ec] + 8) = 0;
    *(undefined8 *)(param_1[0x6ec] + 0x10) = param_1[0x6ec];
    *(undefined8 *)(param_1[0x6ec] + 0x18) = param_1[0x6ec];
    puVar5 = (undefined *)FUN_14018b280(0x28);
    param_1[0x6f1] = 0;
    param_1[0x6f0] = puVar5;
    *puVar5 = 0;
    *(undefined8 *)(param_1[0x6f0] + 8) = 0;
    *(undefined8 *)(param_1[0x6f0] + 0x10) = param_1[0x6f0];
    *(undefined8 *)(param_1[0x6f0] + 0x18) = param_1[0x6f0];
    param_1[0x6f3] = 0;
    *(undefined4 *)(param_1 + 0x6f4) = 0;
    uVar12 = FUN_1404826c0(param_1);
    *(undefined4 *)((longlong)param_1 + 0x44) = uVar12;
    FUN_1407e4830(param_1 + 0x3d,0,0x28);
    FUN_1407e4830((longlong)param_1 + 0x21c,0,0x2c);
    FUN_1407e4830(param_1 + 0xa2,0,0x60);
    FUN_1407e4830(param_1 + 0x17d,0,0xd8);
    uVar2 = uRam0000000140c7787c;
    uVar1 = uRam0000000140c77878;
    uVar12 = uRam0000000140c77874;
    puVar7 = param_1 + 0x322;
    *(undefined4 *)(param_1 + 0x2e8) = _DAT_140c77870;
    *(undefined4 *)((longlong)param_1 + 0x1744) = uVar12;
    *(undefined4 *)(param_1 + 0x2e9) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x174c) = uVar2;
    *(undefined4 *)(param_1 + 0x2fd) = 0;
    if (((ulonglong)puVar7 & 0xf) == 0) {
        lVar9 = 0x39;
        puVar3 = &DAT_140c48150;
        do {
            puVar11 = puVar3;
            puVar4 = puVar7;
            uVar12 = puVar11[1];
            uVar1 = puVar11[2];
            uVar2 = puVar11[3];
            *(undefined4 *)puVar4 = *puVar11;
            *(undefined4 *)((longlong)puVar4 + 4) = uVar12;
            *(undefined4 *)(puVar4 + 1) = uVar1;
            *(undefined4 *)((longlong)puVar4 + 0xc) = uVar2;
            uVar12 = puVar11[5];
            uVar1 = puVar11[6];
            uVar2 = puVar11[7];
            *(undefined4 *)(puVar4 + 2) = puVar11[4];
            *(undefined4 *)((longlong)puVar4 + 0x14) = uVar12;
            *(undefined4 *)(puVar4 + 3) = uVar1;
            *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar2;
            uVar12 = puVar11[9];
            uVar1 = puVar11[10];
            uVar2 = puVar11[0xb];
            *(undefined4 *)(puVar4 + 4) = puVar11[8];
            *(undefined4 *)((longlong)puVar4 + 0x24) = uVar12;
            *(undefined4 *)(puVar4 + 5) = uVar1;
            *(undefined4 *)((longlong)puVar4 + 0x2c) = uVar2;
            uVar12 = puVar11[0xd];
            uVar1 = puVar11[0xe];
            uVar2 = puVar11[0xf];
            *(undefined4 *)(puVar4 + 6) = puVar11[0xc];
            *(undefined4 *)((longlong)puVar4 + 0x34) = uVar12;
            *(undefined4 *)(puVar4 + 7) = uVar1;
            *(undefined4 *)((longlong)puVar4 + 0x3c) = uVar2;
            uVar12 = puVar11[0x11];
            uVar1 = puVar11[0x12];
            uVar2 = puVar11[0x13];
            *(undefined4 *)(puVar4 + 8) = puVar11[0x10];
            *(undefined4 *)((longlong)puVar4 + 0x44) = uVar12;
            *(undefined4 *)(puVar4 + 9) = uVar1;
            *(undefined4 *)((longlong)puVar4 + 0x4c) = uVar2;
            uVar12 = puVar11[0x15];
            uVar1 = puVar11[0x16];
            uVar2 = puVar11[0x17];
            *(undefined4 *)(puVar4 + 10) = puVar11[0x14];
            *(undefined4 *)((longlong)puVar4 + 0x54) = uVar12;
            *(undefined4 *)(puVar4 + 0xb) = uVar1;
            *(undefined4 *)((longlong)puVar4 + 0x5c) = uVar2;
            uVar12 = puVar11[0x19];
            uVar1 = puVar11[0x1a];
            uVar2 = puVar11[0x1b];
            *(undefined4 *)(puVar4 + 0xc) = puVar11[0x18];
            *(undefined4 *)((longlong)puVar4 + 100) = uVar12;
            *(undefined4 *)(puVar4 + 0xd) = uVar1;
            *(undefined4 *)((longlong)puVar4 + 0x6c) = uVar2;
            uVar12 = puVar11[0x1d];
            uVar1 = puVar11[0x1e];
            uVar2 = puVar11[0x1f];
            *(undefined4 *)(puVar4 + 0xe) = puVar11[0x1c];
            *(undefined4 *)((longlong)puVar4 + 0x74) = uVar12;
            *(undefined4 *)(puVar4 + 0xf) = uVar1;
            *(undefined4 *)((longlong)puVar4 + 0x7c) = uVar2;
            lVar9 = lVar9 + -1;
            puVar7 = puVar4 + 0x10;
            puVar3 = puVar11 + 0x20;
        } while (lVar9 != 0);
        uVar12 = puVar11[0x21];
        uVar1 = puVar11[0x22];
        uVar2 = puVar11[0x23];
        *(undefined4 *)(puVar4 + 0x10) = puVar11[0x20];
        *(undefined4 *)((longlong)puVar4 + 0x84) = uVar12;
        *(undefined4 *)(puVar4 + 0x11) = uVar1;
        *(undefined4 *)((longlong)puVar4 + 0x8c) = uVar2;
        uVar12 = puVar11[0x25];
        uVar1 = puVar11[0x26];
        uVar2 = puVar11[0x27];
        *(undefined4 *)(puVar4 + 0x12) = puVar11[0x24];
        *(undefined4 *)((longlong)puVar4 + 0x94) = uVar12;
        *(undefined4 *)(puVar4 + 0x13) = uVar1;
        *(undefined4 *)((longlong)puVar4 + 0x9c) = uVar2;
        uVar12 = puVar11[0x29];
        uVar1 = puVar11[0x2a];
        uVar2 = puVar11[0x2b];
        *(undefined4 *)(puVar4 + 0x14) = puVar11[0x28];
        *(undefined4 *)((longlong)puVar4 + 0xa4) = uVar12;
        *(undefined4 *)(puVar4 + 0x15) = uVar1;
        *(undefined4 *)((longlong)puVar4 + 0xac) = uVar2;
    }
    else {
        FUN_1407db590(puVar7,&DAT_140c48150,0x1cb0);
    }
    return param_1;
}



undefined8 FUN_140455090(undefined8 param_1,ulonglong param_2)

{
    FUN_1404550d0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1404550d0(undefined8 *param_1)

{
    longlong *plVar1;
    longlong lVar2;
    double dVar3;
    int iVar4;
    uint uVar5;
    longlong lVar6;
    longlong lVar7;
    ulonglong uVar8;
    longlong *plVar9;
    undefined8 *puVar10;
    undefined4 uVar11;
    bool bVar12;
    longlong local_res8;
    longlong local_res10;
    undefined4 local_58;
    int iStack84;
    undefined4 uStack80;
    undefined4 uStack76;
    undefined8 local_48;
    undefined8 local_40;

    *param_1 = &PTR_FUN_140b66fd0;
    lVar6 = param_1[0x2b7];
    while (lVar6 != 0) {
        lVar6 = param_1[0x2b7];
        if (*(undefined8 **)(lVar6 + 0x400) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar6 + 0x400) = *(undefined8 *)(lVar6 + 0x408);
        }
        if (*(longlong *)(lVar6 + 0x408) != 0) {
            *(undefined8 *)(*(longlong *)(lVar6 + 0x408) + 0x400) = *(undefined8 *)(lVar6 + 0x400);
        }
        *(undefined8 *)(lVar6 + 0x400) = 0;
        *(undefined8 *)(lVar6 + 0x408) = 0;
        lVar6 = param_1[0x2b7];
    }
    if (((*(uint *)(param_1 + 1) & 0xc0000000) == 0x40000000) &&
        (*(longlong *)(DAT_140c65898 + 0x7198) != 0)) {
        FUN_1405cd8e0();
    }
    if ((*(int *)(param_1 + 0x6c2) != 0) && (lVar6 = FUN_1403d90d0(), lVar6 != 0)) {
        FUN_14047ef70(lVar6,*(undefined4 *)(param_1 + 1));
    }
    lVar6 = *(longlong *)(DAT_140c65898 + 0x78);
    if (lVar6 != 0) {
        if ((*(int *)(lVar6 + 0x37a0) == 0) ||
            (iVar4 = *(int *)(lVar6 + 0x37a0), 4 < *(int *)(lVar6 + 0x1cc) - 0x16eU)) {
            iVar4 = 0;
        }
        if (iVar4 == *(int *)(param_1 + 1)) {
            FUN_1403a2550(DAT_140c65898);
        }
    }
    uVar8 = 0;
    if (param_1[0x6c4] != 0) {
        do {
            lVar6 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1[0x6c3] + uVar8 * 4));
            if (lVar6 != 0) {
                FUN_1403d9590(DAT_140c65898);
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < (ulonglong)param_1[0x6c4]);
    }
    FUN_1403d9480();
    if ((*(int *)((longlong)param_1 + 0x15a4) != 0) &&
        (plVar9 = *(longlong **)(DAT_140c63628 + 0x18), plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x80))(plVar9,param_1[0x2b1]);
    }
    if (param_1[0x2de] == 0) goto LAB_14045541f;
    if ((DAT_140dc28b8 & 1) == 0) {
        DAT_140dc28b8 = DAT_140dc28b8 | 1;
        if (DAT_140c63840 == (code *)0x0) {
            if ((_DAT_140c638ac == 0) && (iVar4 = FUN_1401fffc0(), -1 < iVar4)) {
                lVar6 = (**(code **)(*DAT_140c64c58 + 0x18))(DAT_140c64c58,0x1e5);
                goto LAB_1404552be;
            }
        }
        else {
            lVar6 = (*DAT_140c63840)(&PTR_u_GameFormula_140a6a408,0x1e5,DAT_140c63858);
            LAB_1404552be:
            if (lVar6 != 0) {
                DAT_140dc28bc = *(uint *)(lVar6 + 4);
                goto LAB_1404552e1;
            }
        }
        DAT_140dc28bc = 1000;
    }
    LAB_1404552e1:
    uVar8 = (ulonglong)DAT_140dc28bc;
    if (*(char *)((longlong)param_1 + 0x1b1) != '\0') {
        uVar8 = 0;
    }
    if ((((*(int *)(param_1 + 0x26a) != 0) && (param_1[0x2de] != 0)) && (param_1[0x2dd] != 0)) &&
        (*(int *)(param_1 + 0x269) != 1)) {
        dVar3 = (double)(**(code **)(DAT_140c77890 + 0x30))(&DAT_140c77890);
        iStack84 = (int)(dVar3 * 65536.0);
        local_58 = FUN_14046e5f0(param_1);
        uStack76 = 0;
        local_48 = 4;
        uStack80 = 0x3f800000;
        local_40 = 0;
        iVar4 = (**(code **)(*(longlong *)param_1[0x2dd] + 0x198))((longlong *)param_1[0x2dd],local_58);
        if (iVar4 != 0) {
            (**(code **)(*(longlong *)param_1[0x2dd] + 0x248))((longlong *)param_1[0x2dd],1,&local_58);
            lVar6 = (**(code **)(*(longlong *)param_1[0x2dd] + 0x1a8))
                    ((longlong *)param_1[0x2dd],local_58,iStack84);
            uVar8 = (ulonglong)*(uint *)(lVar6 + 0x14);
        }
    }
    if (((int)uVar8 != 0) && (plVar9 = (longlong *)param_1[0x2dd], plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 1000))(plVar9,1);
    }
    (**(code **)(*(longlong *)param_1[0x2de] + 0x128))((longlong *)param_1[0x2de],0);
    (**(code **)(*(longlong *)param_1[0x2de] + 0x138))((longlong *)param_1[0x2de],0);
    (**(code **)(*(longlong *)param_1[0x2de] + 0x178))((longlong *)param_1[0x2de],uVar8);
    if ((longlong *)param_1[0x2de] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x2de] + 8))();
        param_1[0x2de] = 0;
    }
    LAB_14045541f:
    if (param_1[0x6f3] != 0) {
        for (plVar9 = *(longlong **)(DAT_140c65920 + 8); plVar9 != (longlong *)0x0;
             plVar9 = (longlong *)plVar9[4]) {
            if (plVar9[9] == param_1[0x6f3]) {
                (**(code **)(*plVar9 + 8))(plVar9);
                (**(code **)*plVar9)(plVar9,1);
                break;
            }
        }
        param_1[0x6f3] = 0;
    }
    FUN_140467f50(param_1,0);
    if ((longlong *)param_1[0x316] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x316] + 8))();
        param_1[0x316] = 0;
    }
    if ((longlong *)param_1[0x22] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x22] + 8))();
        param_1[0x22] = 0;
    }
    if ((longlong *)param_1[0x23] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x23] + 8))();
        param_1[0x23] = 0;
    }
    lVar6 = param_1[0x305];
    while (lVar6 != 0) {
        lVar6 = param_1[0x305];
        if (lVar6 != 0) {
            if (*(longlong **)(lVar6 + 0x20) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(lVar6 + 0x20) + 8))();
                *(undefined8 *)(lVar6 + 0x20) = 0;
            }
            if (*(undefined8 **)(lVar6 + 0x28) != (undefined8 *)0x0) {
                **(undefined8 **)(lVar6 + 0x28) = *(undefined8 *)(lVar6 + 0x30);
            }
            if (*(longlong *)(lVar6 + 0x30) != 0) {
                *(undefined8 *)(*(longlong *)(lVar6 + 0x30) + 0x28) = *(undefined8 *)(lVar6 + 0x28);
            }
            *(undefined8 *)(lVar6 + 0x28) = 0;
            *(undefined8 *)(lVar6 + 0x30) = 0;
            FUN_14018b900(lVar6,0);
        }
        lVar6 = param_1[0x305];
    }
    param_1[0x306] = 0;
    FUN_14045dd00(param_1);
    plVar9 = param_1 + 0x2b9;
    local_res10 = *plVar9;
    *plVar9 = 0;
    if (local_res10 != 0) {
        *(longlong **)(local_res10 + 0x10) = &local_res10;
        joined_r0x000140455563:
        if (local_res10 != 0) {
            if (*(undefined8 **)(local_res10 + 0x10) != (undefined8 *)0x0) {
                **(undefined8 **)(local_res10 + 0x10) = *(undefined8 *)(local_res10 + 0x18);
            }
            plVar1 = (longlong *)(local_res10 + 0x18);
            if (*(longlong *)(local_res10 + 0x18) != 0) {
                *(undefined8 *)(*(longlong *)(local_res10 + 0x18) + 0x10) =
                        *(undefined8 *)(local_res10 + 0x10);
            }
            *plVar1 = 0;
            *(longlong **)(local_res10 + 0x10) = plVar9;
            *plVar1 = *plVar9;
            *plVar9 = local_res10;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 0x10) = plVar1;
            }
            lVar6 = *(longlong *)(local_res10 + 0x38);
            for (lVar7 = *(longlong *)(lVar6 + 0x48); lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x28)) {
                if (*(int *)(lVar7 + 0x40) == *(int *)(param_1 + 1)) {
                    FUN_1407177b0(lVar7);
                    FUN_14018b900(lVar7,0);
                    if (((*(longlong *)(lVar6 + 0x48) == 0) &&
                         (iVar4 = *(int *)(*(longlong *)(*(longlong *)(lVar6 + 0x138) + 0x70) + 0x18),
                                 iVar4 != 1)) &&
                        ((iVar4 != 3 && (((iVar4 != 8 && (iVar4 != 10)) && (DAT_140c65b70 != 0)))))) {
                        FUN_140561ad0(DAT_140c65b70,lVar6);
                    }
                    break;
                }
            }
            goto joined_r0x000140455563;
        }
    }
    local_res8 = param_1[0x2b8];
    param_1[0x2b8] = 0;
    if ((local_res8 != 0) && (*(longlong **)(local_res8 + 8) = &local_res8, local_res8 != 0)) {
        plVar9 = param_1 + 0x2b8;
        do {
            lVar6 = local_res8;
            if (*(undefined8 **)(local_res8 + 8) != (undefined8 *)0x0) {
                **(undefined8 **)(local_res8 + 8) = *(undefined8 *)(local_res8 + 0x10);
            }
            plVar1 = (longlong *)(local_res8 + 0x10);
            if (*(longlong *)(local_res8 + 0x10) != 0) {
                *(undefined8 *)(*(longlong *)(local_res8 + 0x10) + 8) = *(undefined8 *)(local_res8 + 8);
            }
            *plVar1 = 0;
            *(longlong **)(local_res8 + 8) = plVar9;
            *plVar1 = *plVar9;
            *plVar9 = local_res8;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 8) = plVar1;
            }
            if (*(longlong **)(local_res8 + 8) != (longlong *)0x0) {
                **(longlong **)(local_res8 + 8) = *plVar1;
            }
            if (*plVar1 != 0) {
                *(undefined8 *)(*plVar1 + 8) = *(undefined8 *)(local_res8 + 8);
            }
            *plVar1 = 0;
            *(undefined8 *)(local_res8 + 8) = 0;
            if (*(undefined8 **)(local_res8 + 0x18) != (undefined8 *)0x0) {
                **(undefined8 **)(local_res8 + 0x18) = *(undefined8 *)(local_res8 + 0x20);
                if (*(longlong *)(local_res8 + 0x20) != 0) {
                    *(undefined8 *)(*(longlong *)(local_res8 + 0x20) + 0x18) =
                            *(undefined8 *)(local_res8 + 0x18);
                }
                lVar7 = DAT_140c65898;
                *(undefined8 *)(local_res8 + 0x18) = 0;
                *(undefined8 *)(local_res8 + 0x20) = 0;
                lVar7 = FUN_1403d90d0(lVar7,*(undefined4 *)(local_res8 + 0x154));
                if (lVar7 != 0) {
                    bVar12 = *(longlong *)(lVar7 + 0x15f8) != 0;
                    if ((*(longlong **)(lVar7 + 0xcc0) != (longlong *)0x0) &&
                        (uVar5 = (**(code **)(**(longlong **)(lVar7 + 0xcc0) + 0xb8))(), bVar12 != uVar5)) {
                        FUN_140470650(lVar7,1,1);
                        (**(code **)(**(longlong **)(lVar7 + 0xcc0) + 0xb0))
                                (*(longlong **)(lVar7 + 0xcc0),bVar12);
                    }
                }
            }
            if (((*(byte *)(*(longlong *)(*(longlong *)(lVar6 + 0x138) + 0x70) + 0x108) & 0x10) == 0) &&
                (FUN_14053e1b0(lVar6,0x1e,0), DAT_140c65b70 != 0)) {
                FUN_140561ad0(DAT_140c65b70,lVar6);
            }
        } while (local_res8 != 0);
    }
    plVar9 = param_1 + 0x2b9;
    lVar7 = 0;
    lVar6 = *plVar9;
    while (lVar6 != 0) {
        lVar6 = *plVar9;
        if (*(undefined8 **)(lVar6 + 0x10) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar6 + 0x10) = *(undefined8 *)(lVar6 + 0x18);
        }
        if (*(longlong *)(lVar6 + 0x18) != 0) {
            *(undefined8 *)(*(longlong *)(lVar6 + 0x18) + 0x10) = *(undefined8 *)(lVar6 + 0x10);
        }
        *(undefined8 *)(lVar6 + 0x10) = 0;
        *(undefined8 *)(lVar6 + 0x18) = 0;
        lVar6 = *plVar9;
    }
    lVar6 = param_1[699];
    while (lVar6 != 0) {
        lVar6 = param_1[699];
        if (*(undefined8 **)(lVar6 + 0x38) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar6 + 0x38) = *(undefined8 *)(lVar6 + 0x40);
        }
        if (*(longlong *)(lVar6 + 0x40) != 0) {
            *(undefined8 *)(*(longlong *)(lVar6 + 0x40) + 0x38) = *(undefined8 *)(lVar6 + 0x38);
        }
        *(undefined8 *)(lVar6 + 0x38) = 0;
        *(undefined8 *)(lVar6 + 0x40) = 0;
        lVar6 = param_1[699];
    }
    lVar6 = param_1[0x2c1];
    while (lVar6 != 0) {
        FUN_1407a0390(param_1[0x2c1]);
        lVar6 = param_1[0x2c1];
    }
    lVar6 = param_1[0xb1];
    while (lVar6 != 0) {
        (**(code **)(*(longlong *)param_1[0xb1] + 0x28))((longlong *)param_1[0xb1],0,0);
        lVar6 = param_1[0xb1];
    }
    lVar6 = param_1[0xb2];
    while (lVar6 != 0) {
        (**(code **)(*(longlong *)param_1[0xb2] + 0x28))((longlong *)param_1[0xb2],0,0);
        lVar6 = param_1[0xb2];
    }
    lVar6 = param_1[700];
    while (lVar6 != 0) {
        lVar6 = param_1[700];
        if (*(undefined8 **)(lVar6 + 0x208) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar6 + 0x208) = *(undefined8 *)(lVar6 + 0x210);
        }
        if (*(longlong *)(lVar6 + 0x210) != 0) {
            *(undefined8 *)(*(longlong *)(lVar6 + 0x210) + 0x208) = *(undefined8 *)(lVar6 + 0x208);
        }
        *(undefined8 *)(lVar6 + 0x208) = 0;
        *(undefined8 *)(lVar6 + 0x210) = 0;
        lVar6 = param_1[700];
    }
    plVar9 = param_1 + 0x2bd;
    lVar6 = *plVar9;
    while (lVar6 != 0) {
        lVar6 = *plVar9;
        if (*(undefined8 **)(lVar6 + 0x208) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar6 + 0x208) = *(undefined8 *)(lVar6 + 0x210);
        }
        if (*(longlong *)(lVar6 + 0x210) != 0) {
            *(undefined8 *)(*(longlong *)(lVar6 + 0x210) + 0x208) = *(undefined8 *)(lVar6 + 0x208);
        }
        *(undefined8 *)(lVar6 + 0x208) = 0;
        *(undefined8 *)(lVar6 + 0x210) = 0;
        lVar6 = *plVar9;
    }
    lVar6 = param_1[0xb7];
    while (lVar6 != 0) {
        lVar6 = param_1[0xb7];
        if (lVar6 != 0) {
            FUN_140453f90(lVar6);
            FUN_14018b900(lVar6,0);
        }
        lVar6 = param_1[0xb7];
    }
    if (param_1[0x2dc] != 0) {
        lVar6 = 0;
        do {
            lVar2 = param_1[0x2db];
            FUN_14018b900(*(undefined8 *)(lVar6 + 0x18 + lVar2),0);
            FUN_14018b900(*(undefined8 *)(lVar6 + 0x28 + lVar2));
            lVar7 = lVar7 + 1;
            lVar6 = lVar6 + 0x58;
        } while (lVar7 != param_1[0x2dc]);
        param_1[0x2dc] = 0;
    }
    uVar11 = 0;
    lVar6 = *(longlong *)(param_1[0x2d8] + 0x10);
    if (lVar6 != param_1[0x2d8]) {
        do {
            plVar9 = *(longlong **)(lVar6 + 0x28);
            if (plVar9 != (longlong *)0x0) {
                lVar7 = *plVar9;
                while (lVar7 != 0) {
                    if (*(undefined8 **)(lVar7 + 0x10) != (undefined8 *)0x0) {
                        **(undefined8 **)(lVar7 + 0x10) = *(undefined8 *)(lVar7 + 0x18);
                    }
                    if (*(longlong *)(lVar7 + 0x18) != 0) {
                        *(undefined8 *)(*(longlong *)(lVar7 + 0x18) + 0x10) = *(undefined8 *)(lVar7 + 0x10);
                    }
                    *(undefined8 *)(lVar7 + 0x10) = 0;
                    *(undefined8 *)(lVar7 + 0x18) = 0;
                    lVar7 = *plVar9;
                }
                FUN_14018b900(plVar9,0);
            }
            lVar7 = *(longlong *)(lVar6 + 0x18);
            if (lVar7 == 0) {
                lVar7 = *(longlong *)(lVar6 + 8);
                if (lVar6 == *(longlong *)(lVar7 + 0x18)) {
                    do {
                        lVar6 = lVar7;
                        lVar7 = *(longlong *)(lVar6 + 8);
                    } while (lVar6 == *(longlong *)(lVar7 + 0x18));
                }
                if (*(longlong *)(lVar6 + 0x18) != lVar7) {
                    lVar6 = lVar7;
                }
            }
            else {
                for (lVar2 = *(longlong *)(lVar7 + 0x10); lVar6 = lVar7, lVar2 != 0;
                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                    lVar7 = lVar2;
                }
            }
        } while (lVar6 != param_1[0x2d8]);
    }
    if (param_1[0x2d9] != 0) {
        lVar6 = *(longlong *)(param_1[0x2d8] + 8);
        while (lVar6 != 0) {
            FUN_1400083b0(param_1 + 0x2d7,*(undefined8 *)(lVar6 + 0x18));
            lVar7 = *(longlong *)(lVar6 + 0x10);
            FUN_14018b900(lVar6,0);
            lVar6 = lVar7;
        }
        *(undefined8 *)(param_1[0x2d8] + 0x10) = param_1[0x2d8];
        *(undefined8 *)(param_1[0x2d8] + 8) = 0;
        *(undefined8 *)(param_1[0x2d8] + 0x18) = param_1[0x2d8];
        param_1[0x2d9] = 0;
    }
    FUN_14018b900(param_1[0x12],0);
    if ((longlong *)param_1[0x2e0] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x2e0] + 8))();
        param_1[0x2e0] = 0;
    }
    if ((longlong *)param_1[0x198] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x198] + 8))();
        param_1[0x198] = 0;
    }
    if ((longlong *)param_1[0x199] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x199] + 8))();
        param_1[0x199] = 0;
    }
    FUN_14018b900(param_1[0x6de],0);
    if (param_1[0x2e1] != 0) {
        if (param_1[0x2e3] != 0) {
            *(undefined8 *)(param_1[0x2e3] + 0x1720) = param_1[0x2e4];
        }
        if (param_1[0x2e4] != 0) {
            *(undefined8 *)(param_1[0x2e4] + 0x1718) = param_1[0x2e3];
        }
        plVar9 = (longlong *)param_1[0x2df];
        if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0xe8))(plVar9,0);
            local_58 = 0;
            iStack84 = 0;
            uStack80 = 0;
            uStack76 = 0x3f800000;
            (**(code **)(*(longlong *)param_1[0x2df] + 0xd8))((longlong *)param_1[0x2df],&local_58);
        }
        if (param_1[0x2e3] == 0) {
            if (param_1[0x2e4] != 0) {
                uVar11 = *(undefined4 *)(param_1[0x2e4] + 8);
            }
            (**(code **)(**(longlong **)(DAT_140c65898 + 0x7248) + 0x140))
                    (*(longlong **)(DAT_140c65898 + 0x7248),param_1 + 0x2e1,
                     *(undefined4 *)(param_1 + 0x2e2),uVar11);
        }
    }
    lVar6 = param_1[0x2b3];
    if ((lVar6 != 0) && (*(longlong **)(lVar6 + 0x10) != (longlong *)0x0)) {
        (**(code **)(**(longlong **)(lVar6 + 0x10) + 8))();
        *(undefined8 *)(lVar6 + 0x10) = 0;
    }
    if ((longlong *)param_1[0x2b3] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x2b3] + 8))();
        param_1[0x2b3] = 0;
    }
    lVar6 = param_1[0x1e1];
    while (lVar6 != 0) {
        FUN_1405b3fc0(param_1[0x1e1],param_1[0x1e0]);
        lVar6 = param_1[0x1e1];
    }
    *(undefined8 *)(param_1[0xf] + 0x10) = 0;
    if ((longlong *)param_1[0xf] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xf] + 8))();
        param_1[0xf] = 0;
    }
    if ((param_1[0x6d3] != 0) && ((longlong *)param_1[0x6d3] != (longlong *)0x0)) {
        (**(code **)(*(longlong *)param_1[0x6d3] + 8))();
        param_1[0x6d3] = 0;
    }
    if ((param_1[0x6d4] != 0) && ((longlong *)param_1[0x6d4] != (longlong *)0x0)) {
        (**(code **)(*(longlong *)param_1[0x6d4] + 8))();
        param_1[0x6d4] = 0;
    }
    if (local_res8 != 0) {
        FUN_1401a4a00(&local_res8);
    }
    if (local_res10 != 0) {
        FUN_1401a4a00(&local_res10);
    }
    if (param_1[0x6f1] != 0) {
        lVar6 = *(longlong *)(param_1[0x6f0] + 8);
        while (lVar6 != 0) {
            FUN_1400083b0(param_1 + 0x6ef,*(undefined8 *)(lVar6 + 0x18));
            lVar7 = *(longlong *)(lVar6 + 0x10);
            FUN_14018b900(lVar6,0);
            lVar6 = lVar7;
        }
        *(undefined8 *)(param_1[0x6f0] + 0x10) = param_1[0x6f0];
        *(undefined8 *)(param_1[0x6f0] + 8) = 0;
        *(undefined8 *)(param_1[0x6f0] + 0x18) = param_1[0x6f0];
        param_1[0x6f1] = 0;
    }
    FUN_14018b900(param_1[0x6f0],0);
    if (param_1[0x6ed] != 0) {
        lVar6 = *(longlong *)(param_1[0x6ec] + 8);
        while (lVar6 != 0) {
            FUN_1400083b0(param_1 + 0x6eb,*(undefined8 *)(lVar6 + 0x18));
            lVar7 = *(longlong *)(lVar6 + 0x10);
            FUN_14018b900(lVar6,0);
            lVar6 = lVar7;
        }
        *(undefined8 *)(param_1[0x6ec] + 0x10) = param_1[0x6ec];
        *(undefined8 *)(param_1[0x6ec] + 8) = 0;
        *(undefined8 *)(param_1[0x6ec] + 0x18) = param_1[0x6ec];
        param_1[0x6ed] = 0;
    }
    FUN_14018b900(param_1[0x6ec],0);
    lVar6 = param_1[0x6e8];
    for (lVar7 = param_1[0x6e7]; lVar7 != lVar6; lVar7 = lVar7 + 0x28) {
        if (*(longlong *)(lVar7 + 0x10) != 0) {
            FUN_14018b900(*(longlong *)(lVar7 + 0x10),0);
        }
    }
    if (param_1[0x6e7] != 0) {
        FUN_14018b900(param_1[0x6e7],0);
    }
    lVar6 = param_1[0x6e3];
    for (lVar7 = param_1[0x6e2]; lVar7 != lVar6; lVar7 = lVar7 + 0x20) {
        if (*(longlong *)(lVar7 + 8) != 0) {
            FUN_14018b900(*(longlong *)(lVar7 + 8),0);
        }
    }
    if (param_1[0x6e2] != 0) {
        FUN_14018b900(param_1[0x6e2],0);
    }
    lVar6 = param_1[0x6d8];
    if (lVar6 != 0) {
        (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))(lVar6 + -0x10);
    }
    lVar6 = param_1[0x6d6];
    if (lVar6 != 0) {
        (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))(lVar6 + -0x10);
    }
    FUN_140195d70(param_1 + 0x6ca);
    lVar6 = 0;
    *(undefined4 *)(param_1 + 0x6ca) = 0;
    if ((undefined8 *)param_1[0x6cc] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x6cc] = param_1[0x6cd];
    }
    if ((undefined8 *)param_1[0x6cd] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x6cd] = param_1[0x6cc];
    }
    param_1[0x6cc] = 0;
    param_1[0x6cd] = 0;
    lVar7 = param_1[0x6c7];
    if (lVar7 != 0) {
        (**(code **)(*(longlong *)(lVar7 + -0x10) + 8))(lVar7 + -0x10);
    }
    lVar7 = param_1[0x6c5];
    if (lVar7 != 0) {
        (**(code **)(*(longlong *)(lVar7 + -0x10) + 8))(lVar7 + -0x10);
    }
    lVar7 = param_1[0x6c3];
    if (lVar7 != 0) {
        (**(code **)(*(longlong *)(lVar7 + -0x10) + 8))(lVar7 + -0x10);
    }
    if (param_1[0x6bc] != 0) {
        FUN_14018b900(param_1[0x6bc],0);
    }
    plVar9 = *(longlong **)(longlong *)param_1[0x30d];
    if (plVar9 != (longlong *)param_1[0x30d]) {
        do {
            plVar1 = (longlong *)*plVar9;
            FUN_14018b900(plVar9,0);
            plVar9 = plVar1;
        } while (plVar1 != (longlong *)param_1[0x30d]);
    }
    *(undefined8 *)param_1[0x30d] = param_1[0x30d];
    *(undefined8 *)(param_1[0x30d] + 8) = param_1[0x30d];
    FUN_14018b900(param_1[0x30d],0);
    if (param_1[0x309] != 0) {
        lVar7 = *(longlong *)(param_1[0x308] + 8);
        while (lVar7 != 0) {
            FUN_140481550(param_1 + 0x307,*(undefined8 *)(lVar7 + 0x18));
            lVar6 = *(longlong *)(lVar7 + 0x10);
            FUN_1403fe250(lVar7 + 0x28);
            FUN_14018b900(*(undefined8 *)(lVar7 + 0x30),0);
            FUN_14018b900(lVar7,0);
            lVar7 = lVar6;
        }
        *(undefined8 *)(param_1[0x308] + 0x10) = param_1[0x308];
        *(longlong *)(param_1[0x308] + 8) = lVar6;
        *(undefined8 *)(param_1[0x308] + 0x18) = param_1[0x308];
        param_1[0x309] = lVar6;
    }
    FUN_14018b900(param_1[0x308],0);
    if (param_1[0x305] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x2db] != 0) {
        (**(code **)(*(longlong *)(param_1[0x2db] + -0x10) + 8))();
    }
    if (param_1[0x2d9] != 0) {
        lVar6 = *(longlong *)(param_1[0x2d8] + 8);
        while (lVar6 != 0) {
            FUN_1400083b0(param_1 + 0x2d7,*(undefined8 *)(lVar6 + 0x18));
            lVar7 = *(longlong *)(lVar6 + 0x10);
            FUN_14018b900(lVar6,0);
            lVar6 = lVar7;
        }
        *(undefined8 *)(param_1[0x2d8] + 0x10) = param_1[0x2d8];
        *(undefined8 *)(param_1[0x2d8] + 8) = 0;
        *(undefined8 *)(param_1[0x2d8] + 0x18) = param_1[0x2d8];
        param_1[0x2d9] = 0;
    }
    FUN_14018b900(param_1[0x2d8],0);
    FUN_140195d70(param_1 + 0x2ce);
    *(undefined4 *)(param_1 + 0x2ce) = 0;
    if ((undefined8 *)param_1[0x2d0] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x2d0] = param_1[0x2d1];
    }
    if ((undefined8 *)param_1[0x2d1] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x2d1] = param_1[0x2d0];
    }
    param_1[0x2d0] = 0;
    param_1[0x2d1] = 0;
    FUN_140195d70(param_1 + 0x2c5);
    *(undefined4 *)(param_1 + 0x2c5) = 0;
    if ((undefined8 *)param_1[0x2c7] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x2c7] = param_1[0x2c8];
    }
    if ((undefined8 *)param_1[0x2c8] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x2c8] = param_1[0x2c7];
    }
    param_1[0x2c7] = 0;
    param_1[0x2c8] = 0;
    lVar6 = param_1[0x2c2];
    if (lVar6 != 0) {
        (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))(lVar6 + -0x10);
    }
    if (param_1[0x2c1] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x2bf] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x2be] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x2bd] != 0) {
        FUN_1401a4a00(param_1 + 0x2bd);
    }
    if (param_1[700] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[699] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x2ba] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x2b9] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x2b8] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x2b7] != 0) {
        FUN_1401a4a00();
    }
    if ((longlong *)param_1[0x2b1] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x2b1] + 8))();
    }
    FUN_140195d70(param_1 + 0x2a8);
    *(undefined4 *)(param_1 + 0x2a8) = 0;
    if ((undefined8 *)param_1[0x2aa] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x2aa] = param_1[0x2ab];
    }
    if ((undefined8 *)param_1[0x2ab] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x2ab] = param_1[0x2aa];
    }
    param_1[0x2aa] = 0;
    param_1[0x2ab] = 0;
    FUN_140195d70(param_1 + 0x29f);
    *(undefined4 *)(param_1 + 0x29f) = 0;
    if ((undefined8 *)param_1[0x2a1] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x2a1] = param_1[0x2a2];
    }
    if ((undefined8 *)param_1[0x2a2] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x2a2] = param_1[0x2a1];
    }
    param_1[0x2a1] = 0;
    param_1[0x2a2] = 0;
    FUN_140195d70(param_1 + 0x28f);
    *(undefined4 *)(param_1 + 0x28f) = 0;
    if ((undefined8 *)param_1[0x291] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x291] = param_1[0x292];
    }
    if ((undefined8 *)param_1[0x292] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x292] = param_1[0x291];
    }
    param_1[0x291] = 0;
    param_1[0x292] = 0;
    FUN_140195d70(param_1 + 0x286);
    *(undefined4 *)(param_1 + 0x286) = 0;
    if ((undefined8 *)param_1[0x288] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x288] = param_1[0x289];
    }
    if ((undefined8 *)param_1[0x289] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x289] = param_1[0x288];
    }
    param_1[0x288] = 0;
    param_1[0x289] = 0;
    FUN_140195d70(param_1 + 0x27c);
    *(undefined4 *)(param_1 + 0x27c) = 0;
    if ((undefined8 *)param_1[0x27e] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x27e] = param_1[0x27f];
    }
    if ((undefined8 *)param_1[0x27f] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x27f] = param_1[0x27e];
    }
    param_1[0x27e] = 0;
    param_1[0x27f] = 0;
    FUN_140195d70(param_1 + 0x273);
    *(undefined4 *)(param_1 + 0x273) = 0;
    if ((undefined8 *)param_1[0x275] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x275] = param_1[0x276];
    }
    if ((undefined8 *)param_1[0x276] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x276] = param_1[0x275];
    }
    param_1[0x275] = 0;
    param_1[0x276] = 0;
    puVar10 = (undefined8 *)param_1[0x21e];
    if (puVar10 != (undefined8 *)0x0) {
        (**(code **)*puVar10)(puVar10,1);
    }
    puVar10 = (undefined8 *)param_1[0x21f];
    while (puVar10 != (undefined8 *)0x0) {
        (**(code **)*puVar10)(puVar10,1);
        puVar10 = (undefined8 *)param_1[0x21f];
    }
    if (param_1[0x21f] != 0) {
        FUN_1401a4a00(param_1 + 0x21f);
    }
    puVar10 = (undefined8 *)param_1[0x219];
    if (puVar10 != (undefined8 *)0x0) {
        (**(code **)*puVar10)(puVar10,1);
    }
    puVar10 = (undefined8 *)param_1[0x21a];
    while (puVar10 != (undefined8 *)0x0) {
        (**(code **)*puVar10)(puVar10,1);
        puVar10 = (undefined8 *)param_1[0x21a];
    }
    if (param_1[0x21a] != 0) {
        FUN_1401a4a00(param_1 + 0x21a);
    }
    puVar10 = (undefined8 *)param_1[0x212];
    if (puVar10 != (undefined8 *)0x0) {
        (**(code **)*puVar10)(puVar10,1);
    }
    puVar10 = (undefined8 *)param_1[0x213];
    while (puVar10 != (undefined8 *)0x0) {
        (**(code **)*puVar10)(puVar10,1);
        puVar10 = (undefined8 *)param_1[0x213];
    }
    if (param_1[0x213] != 0) {
        FUN_1401a4a00(param_1 + 0x213);
    }
    puVar10 = (undefined8 *)param_1[0x20f];
    if (puVar10 != (undefined8 *)0x0) {
        (**(code **)*puVar10)(puVar10,1);
    }
    puVar10 = (undefined8 *)param_1[0x210];
    while (puVar10 != (undefined8 *)0x0) {
        (**(code **)*puVar10)(puVar10,1);
        puVar10 = (undefined8 *)param_1[0x210];
    }
    if (param_1[0x210] != 0) {
        FUN_1401a4a00(param_1 + 0x210);
    }
    puVar10 = (undefined8 *)param_1[0x20b];
    if (puVar10 != (undefined8 *)0x0) {
        (**(code **)*puVar10)(puVar10,1);
    }
    puVar10 = (undefined8 *)param_1[0x20c];
    while (puVar10 != (undefined8 *)0x0) {
        (**(code **)*puVar10)(puVar10,1);
        puVar10 = (undefined8 *)param_1[0x20c];
    }
    if (param_1[0x20c] != 0) {
        FUN_1401a4a00(param_1 + 0x20c);
    }
    puVar10 = (undefined8 *)param_1[0x203];
    if (puVar10 != (undefined8 *)0x0) {
        (**(code **)*puVar10)(puVar10,1);
    }
    puVar10 = (undefined8 *)param_1[0x204];
    while (puVar10 != (undefined8 *)0x0) {
        (**(code **)*puVar10)(puVar10,1);
        puVar10 = (undefined8 *)param_1[0x204];
    }
    if (param_1[0x204] != 0) {
        FUN_1401a4a00(param_1 + 0x204);
    }
    puVar10 = (undefined8 *)param_1[0x1fc];
    if (puVar10 != (undefined8 *)0x0) {
        (**(code **)*puVar10)(puVar10,1);
    }
    puVar10 = (undefined8 *)param_1[0x1fd];
    while (puVar10 != (undefined8 *)0x0) {
        (**(code **)*puVar10)(puVar10,1);
        puVar10 = (undefined8 *)param_1[0x1fd];
    }
    if (param_1[0x1fd] != 0) {
        FUN_1401a4a00(param_1 + 0x1fd);
    }
    puVar10 = (undefined8 *)param_1[0x1e9];
    if (puVar10 != (undefined8 *)0x0) {
        (**(code **)*puVar10)(puVar10,1);
    }
    puVar10 = (undefined8 *)param_1[0x1ea];
    while (puVar10 != (undefined8 *)0x0) {
        (**(code **)*puVar10)(puVar10,1);
        puVar10 = (undefined8 *)param_1[0x1ea];
    }
    if (param_1[0x1ea] != 0) {
        FUN_1401a4a00(param_1 + 0x1ea);
    }
    if ((undefined8 *)param_1[0x1e2] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x1e2] = param_1[0x1e3];
    }
    if (param_1[0x1e3] != 0) {
        *(undefined8 *)(param_1[0x1e3] + 0xf10) = param_1[0x1e2];
    }
    param_1[0x1e2] = 0;
    param_1[0x1e3] = 0;
    if (param_1[0x1e1] != 0) {
        FUN_1401a4a00(param_1 + 0x1e1);
    }
    FUN_140195d70(param_1 + 0x1d5);
    *(undefined4 *)(param_1 + 0x1d5) = 0;
    if ((undefined8 *)param_1[0x1d7] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x1d7] = param_1[0x1d8];
    }
    if ((undefined8 *)param_1[0x1d8] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x1d8] = param_1[0x1d7];
    }
    param_1[0x1d7] = 0;
    param_1[0x1d8] = 0;
    FUN_14079aa00(param_1 + 0x1be);
    if (param_1[0x1a6] != 0) {
        FUN_14018b900(param_1[0x1a6],0);
    }
    lVar6 = param_1[0x1a4];
    if (lVar6 != 0) {
        (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))(lVar6 + -0x10);
    }
    if (param_1[0xb7] != 0) {
        FUN_1401a4a00();
    }
    lVar6 = param_1[0xb5];
    if (lVar6 != 0) {
        (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))(lVar6 + -0x10);
    }
    lVar6 = param_1[0xb3];
    if (lVar6 != 0) {
        (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))(lVar6 + -0x10);
    }
    if (param_1[0xb2] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0xb1] != 0) {
        FUN_1401a4a00();
    }
    FUN_140195d70(param_1 + 0x97);
    *(undefined4 *)(param_1 + 0x97) = 0;
    if ((undefined8 *)param_1[0x99] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x99] = param_1[0x9a];
    }
    if ((undefined8 *)param_1[0x9a] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x9a] = param_1[0x99];
    }
    puVar10 = param_1 + 0x92;
    param_1[0x99] = 0;
    param_1[0x9a] = 0;
    if (param_1[0x94] != 0) {
        lVar6 = *(longlong *)(param_1[0x93] + 8);
        while (lVar6 != 0) {
            FUN_1400083b0(puVar10,*(undefined8 *)(lVar6 + 0x18));
            lVar7 = *(longlong *)(lVar6 + 0x10);
            FUN_14018b900(lVar6,0);
            lVar6 = lVar7;
        }
        *(undefined8 *)(param_1[0x93] + 0x10) = param_1[0x93];
        *(undefined8 *)(param_1[0x93] + 8) = 0;
        *(undefined8 *)(param_1[0x93] + 0x18) = param_1[0x93];
        param_1[0x94] = 0;
    }
    FUN_14018b900(param_1[0x93],0);
    iVar4 = 0x1b;
    do {
        lVar6 = puVar10[-2];
        puVar10 = puVar10 + -2;
        if (lVar6 != 0) {
            (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))(lVar6 + -0x10);
        }
        iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    lVar6 = param_1[0x57];
    if (lVar6 != 0) {
        (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))(lVar6 + -0x10);
    }
    FUN_140195d70(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x4c) = 0;
    if ((undefined8 *)param_1[0x4e] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x4e] = param_1[0x4f];
    }
    if ((undefined8 *)param_1[0x4f] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x4f] = param_1[0x4e];
    }
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
    lVar6 = param_1[0x32];
    if (lVar6 != 0) {
        (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))(lVar6 + -0x10);
    }
    if (param_1[0x2f] != 0) {
        FUN_14018b900(param_1[0x2f],0);
    }
    if (param_1[0x2b] != 0) {
        lVar6 = *(longlong *)(param_1[0x2a] + 8);
        while (lVar6 != 0) {
            FUN_1400083b0(param_1 + 0x29,*(undefined8 *)(lVar6 + 0x18));
            lVar7 = *(longlong *)(lVar6 + 0x10);
            FUN_14018b900(lVar6,0);
            lVar6 = lVar7;
        }
        *(undefined8 *)(param_1[0x2a] + 0x10) = param_1[0x2a];
        *(undefined8 *)(param_1[0x2a] + 8) = 0;
        *(undefined8 *)(param_1[0x2a] + 0x18) = param_1[0x2a];
        param_1[0x2b] = 0;
    }
    FUN_14018b900(param_1[0x2a],0);
    lVar6 = param_1[0x14];
    if (lVar6 != 0) {
        (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))(lVar6 + -0x10);
    }
    lVar6 = param_1[0x11];
    if (lVar6 != 0) {
        (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))(lVar6 + -0x10);
    }
    if ((undefined8 *)param_1[0xd] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xd] = param_1[0xe];
    }
    if (param_1[0xe] != 0) {
        *(undefined8 *)(param_1[0xe] + 0x68) = param_1[0xd];
    }
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    if ((undefined8 *)param_1[0xb] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xb] = param_1[0xc];
    }
    if (param_1[0xc] != 0) {
        *(undefined8 *)(param_1[0xc] + 0x58) = param_1[0xb];
    }
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    lVar6 = param_1[2];
    *param_1 = &PTR_FUN_140b782b0;
    if (lVar6 != 0) {
        (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))(lVar6 + -0x10);
    }
    return;
}



void FUN_140456910(longlong param_1,longlong **param_2)

{
    if (param_2 != (longlong **)0x0) {
        if (*param_2 != (longlong *)0x0) {
            (**(code **)(**param_2 + 8))();
            *param_2 = (longlong *)0x0;
        }
        *param_2 = *(longlong **)(param_1 + 0x78);
        if (*(undefined8 **)(param_1 + 0x78) != (undefined8 *)0x0) {
            (**(code **)**(undefined8 **)(param_1 + 0x78))();
        }
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_140456960(longlong *param_1,undefined4 *param_2)

{
    int iVar1;
    longlong **pplVar2;
    undefined4 *puVar3;
    ulonglong uVar4;
    int iVar5;
    undefined4 uVar6;
    uint uVar7;
    uint uVar8;
    longlong lVar9;
    longlong **pplVar10;
    longlong lVar11;
    longlong lVar12;
    longlong lVar13;
    undefined8 uVar14;
    ulonglong *puVar15;
    ulonglong uVar16;
    ulonglong *puVar17;
    char cVar18;
    ulonglong *puVar19;
    LPVOID lpTlsValue;
    char cVar20;
    int iVar21;
    undefined4 uVar22;
    ulonglong *puVar23;
    longlong *plVar24;
    ulonglong *puVar25;
    longlong *local_res10;
    ulonglong local_res18;
    ulonglong in_stack_fffffffffffffe88;
    undefined **local_158;
    undefined8 local_150;
    LPVOID local_148;
    undefined **local_138;
    undefined8 local_130;
    LPVOID local_128;
    undefined **local_120;
    undefined8 local_118;
    LPVOID local_110;
    undefined **local_108;
    undefined8 local_100;
    LPVOID local_f8;
    undefined **local_e8;
    undefined8 local_e0;
    LPVOID local_d8;
    undefined **local_d0;
    undefined8 local_c8;
    LPVOID local_c0;
    undefined **local_b8;
    undefined8 local_b0;
    LPVOID local_a8;
    undefined **local_a0;
    undefined8 local_98;
    LPVOID local_90;
    undefined4 local_88;
    undefined4 uStack132;
    undefined4 uStack128;
    undefined4 uStack124;
    undefined4 local_78;
    undefined4 uStack116;
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
    undefined8 local_48;

    lVar9 = FUN_1403d90d0(DAT_140c65898);
    if (lVar9 != 0) {
        return 0x80004005;
    }
    puVar17 = (ulonglong *)0x0;
    *(undefined4 *)(param_1 + 1) = *param_2;
    iVar21 = 0;
    iVar5 = 0;
    puVar25 = (ulonglong *)0x0;
    if (0x24 < (int)param_2[1]) {
        local_118 = 0;
        local_120 = &PTR_LAB_140b5e648;
        local_110 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_120);
        local_108 = local_120;
        local_res10 = (longlong *)0x141e020d0;
        local_f8 = local_110;
        local_100 = local_118;
        iVar5 = FUN_1401971e0(&DAT_140c8aca4,5,&local_res10,&local_108);
        local_120 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_110);
        if (iVar5 != 0) {
            DebugBreak();
        }
        return 0x80004005;
    }
    *(undefined4 *)(param_1 + 0x10) = param_2[1];
    *(undefined4 *)(param_1 + 0x1b) = 1;
    uVar22 = 0;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    FUN_14047c210(param_1);
    FUN_14047c320();
    param_1[0x314] = 0;
    uVar6 = uVar22;
    if (param_2[0x3c] == 1) {
        uVar6 = param_2[0x40];
    }
    *(undefined4 *)((longlong)param_1 + 0x172c) = uVar6;
    *(undefined4 *)(param_1 + 0x6d5) = 0;
    switch(*(undefined4 *)(param_1 + 0x10)) {
        case 0:
        case 5:
        case 0xd:
        case 0x18:
        case 0x1b:
        case 0x21:
            *(undefined4 *)((longlong)param_1 + 0x84) = 1;
    }
    FUN_1401e4300();
    lVar9 = DAT_140c65898;
    cVar20 = '\0';
    uVar8 = 0;
    switch(param_2[1]) {
        case 0:
        case 8:
        case 0xb:
        case 0xd:
        case 0x20:
            iVar5 = param_2[2];
            *(int *)(param_1 + 0x6bf) = (int)*(char *)(param_2 + 3);
            goto LAB_1404577f8;
        case 1:
        case 2:
        case 4:
        case 5:
        case 6:
        case 0xc:
        case 0x13:
        case 0x1e:
        case 0x21:
            iVar5 = param_2[2];
            goto LAB_1404577f8;
        case 3:
            iVar5 = param_2[2];
            lVar9 = FUN_140248240(param_2[3]);
            param_1[0x17] = lVar9;
            puVar25 = puVar17;
            if (*(char *)(param_2 + 4) != '\0') {
                do {
                    FUN_140480d00(param_1 + 0x32);
                    lVar9 = DAT_140c65898;
                    *(undefined4 *)(param_1 + 0x1a0) = 1;
                    lVar9 = FUN_1403d90d0(lVar9);
                    if (lVar9 != 0) {
                        FUN_140470650();
                        *(undefined4 *)(lVar9 + 0xc0) = *(undefined4 *)(param_1 + 1);
                        *(undefined4 *)(lVar9 + 0xc4) =
                                *(undefined4 *)(*(longlong *)(param_2 + 6) + (longlong)puVar25 * 0xc);
                        lVar11 = *(longlong *)(param_2 + 6);
                        *(uint *)(lVar9 + 200) = (uint)*(byte *)(lVar11 + 4 + (longlong)puVar25 * 0xc);
                        FUN_14039e4d0(lVar11,lVar9);
                        FUN_14046c2c0(lVar9);
                    }
                    uVar7 = (int)puVar25 + 1;
                    puVar25 = (ulonglong *)(ulonglong)uVar7;
                } while (uVar7 < *(byte *)(param_2 + 4));
            }
        LAB_14045731b:
            puVar25 = (ulonglong *)0x1;
            *(undefined4 *)(param_1 + 0x26a) = 1;
            break;
        case 7:
            *(undefined4 *)(param_1 + 0x56) = param_2[4];
            iVar5 = param_2[2];
            lVar9 = FUN_140248240(param_2[3]);
            param_1[0x17] = lVar9;
            puVar25 = puVar17;
            if (*(char *)(param_2 + 5) != '\0') {
                do {
                    FUN_140480d00(param_1 + 0x32);
                    lVar9 = DAT_140c65898;
                    *(undefined4 *)(param_1 + 0x1a0) = 1;
                    lVar9 = FUN_1403d90d0(lVar9);
                    if (lVar9 != 0) {
                        FUN_140470650();
                        *(undefined4 *)(lVar9 + 0xc0) = *(undefined4 *)(param_1 + 1);
                        *(undefined4 *)(lVar9 + 0xc4) =
                                *(undefined4 *)(*(longlong *)(param_2 + 6) + (longlong)puVar25 * 0xc);
                        lVar11 = *(longlong *)(param_2 + 6);
                        *(uint *)(lVar9 + 200) = (uint)*(byte *)(lVar11 + 4 + (longlong)puVar25 * 0xc);
                        FUN_14039e4d0(lVar11,lVar9);
                        FUN_14046c2c0(lVar9);
                        *(undefined4 *)(lVar9 + 0x1318) = 0;
                    }
                    uVar7 = (int)puVar25 + 1;
                    puVar25 = (ulonglong *)(ulonglong)uVar7;
                } while (uVar7 < *(byte *)(param_2 + 5));
            }
            puVar25 = (ulonglong *)0x1;
            *(undefined4 *)(param_1 + 0x26a) = 1;
            break;
        case 9:
            iVar5 = param_2[2];
            lVar9 = FUN_140248240(param_2[3]);
            param_1[0x17] = lVar9;
            puVar25 = puVar17;
            if (*(char *)(param_2 + 4) == '\0') goto LAB_14045731b;
            do {
                FUN_140480d00(param_1 + 0x32);
                lVar9 = DAT_140c65898;
                *(undefined4 *)(param_1 + 0x1a0) = 1;
                lVar9 = FUN_1403d90d0(lVar9);
                if (lVar9 != 0) {
                    FUN_140470650();
                    *(undefined4 *)(lVar9 + 0xc0) = *(undefined4 *)(param_1 + 1);
                    *(undefined4 *)(lVar9 + 0xc4) =
                            *(undefined4 *)(*(longlong *)(param_2 + 6) + (longlong)puVar25 * 0xc);
                    lVar11 = *(longlong *)(param_2 + 6);
                    *(uint *)(lVar9 + 200) = (uint)*(byte *)(lVar11 + 4 + (longlong)puVar25 * 0xc);
                    FUN_14039e4d0(lVar11,lVar9);
                    FUN_14046c2c0(lVar9);
                }
                uVar7 = (int)puVar25 + 1;
                puVar25 = (ulonglong *)(ulonglong)uVar7;
            } while (uVar7 < *(byte *)(param_2 + 4));
            puVar25 = (ulonglong *)0x1;
            *(undefined4 *)(param_1 + 0x26a) = 1;
            break;
        case 10:
            iVar5 = param_2[2];
            *(int *)(param_1 + 0x6bf) = (int)*(char *)(param_2 + 3);
            break;
        case 0xe:
            iVar5 = param_2[2];
            if (param_2[3] == 0) {
                *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
            }
            else {
                *(int *)((longlong)param_1 + 0x1b4) = param_2[3] + DAT_140c636a8;
            }
            goto LAB_1404577f8;
        case 0xf:
            *(undefined4 *)((longlong)param_1 + 0x172c) = param_2[2];
            *(undefined4 *)(param_1 + 0x2e6) = param_2[3];
            *(uint *)((longlong)param_1 + 0x1734) = (uint)*(byte *)(param_2 + 4);
            uVar16 = FUN_1403dc9f0();
            if ((int)uVar16 < 0) {
                return uVar16;
            }
            break;
        case 0x10:
            iVar5 = param_2[2];
            break;
        case 0x11:
            iVar5 = param_2[2];
            *(undefined4 *)((longlong)param_1 + 0x15ac) = param_2[3];
            *(undefined4 *)(param_1 + 0x2b6) = param_2[4];
            goto LAB_1404577f8;
        case 0x12:
            iVar1 = param_2[5];
            iVar5 = param_2[2];
            lVar9 = 0;
            if (iVar1 == 6) {
                lVar11 = FUN_140248ac0(param_2[3]);
                joined_r0x00014045753c:
                lVar9 = 0;
                if (lVar11 == 0) goto LAB_1404575d4;
                LAB_1404575c7:
                lVar9 = FUN_14034bdd0();
                if (lVar9 == 0) goto LAB_1404575d4;
            }
            else {
                if (iVar1 == 7) {
                    lVar11 = FUN_140211b00(param_2[3]);
                    goto joined_r0x00014045753c;
                }
                if (iVar1 == 0) {
                    lVar11 = FUN_1402096e0(param_2[3]);
                    goto joined_r0x00014045753c;
                }
                if (iVar1 == 2) goto LAB_1404575c7;
                if (iVar1 == 8) {
                    lVar11 = FUN_1401e8c20(param_2[3]);
                    if (lVar11 != 0) {
                        lVar12 = FUN_1400b5df0(DAT_140c658f0,*(undefined4 *)(lVar11 + 8),0);
                        lVar13 = FUN_1401fe020();
                        if ((lVar12 == 0) && (lVar13 == 0)) {
                            if (*(int *)(lVar11 + 0x1c) == 0) goto LAB_1404575d4;
                            FUN_1405057d0();
                        }
                        goto LAB_1404575c7;
                    }
                }
                else if ((iVar1 == 9) && (lVar11 = FUN_1401e87e0(param_2[3]), lVar11 != 0))
                    goto LAB_1404575c7;
                LAB_1404575d4:
                lVar11 = FUN_1404835c0(DAT_140c65918,iVar5);
                if (lVar11 != 0) {
                    lVar9 = FUN_14034bdd0();
                }
            }
            FUN_14045b030(param_1,lVar9);
            puVar25 = (ulonglong *)0x1;
            *(undefined4 *)(param_1 + 0x6c9) = 1;
            break;
        case 0x14:
            FUN_14045b030(param_1);
            puVar23 = puVar17;
            if (*(char *)(param_2 + 0xe) != '\0') {
                do {
                    if (*(int *)(*(longlong *)(param_2 + 0x10) + (longlong)puVar23 * 4) != 0) {
                        FUN_14047c1a0(param_1);
                    }
                    puVar23 = (ulonglong *)((longlong)puVar23 + 1);
                } while (puVar23 < (ulonglong *)(ulonglong)*(byte *)(param_2 + 0xe));
            }
            param_1[0x35] = *(longlong *)(param_2 + 2);
            iVar1 = param_2[4];
            *(int *)(param_1 + 0x34) = iVar1;
            if (iVar1 == 0) {
                return 0x80004005;
            }
            if (param_1[0x35] == 0) {
                return 0x80004005;
            }
            FUN_1403f8590(DAT_140c65898,*(undefined8 *)(param_2 + 6));
            param_1[0x314] = *(longlong *)(param_2 + 0xc);
            FUN_1403d9340();
            iVar1 = param_2[8];
            if (0x11 < iVar1) {
                local_118 = 0;
                local_120 = &PTR_LAB_140b5e648;
                local_110 = TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720,&local_120);
                local_158 = local_120;
                local_res10 = (longlong *)0x141e020b0;
                local_148 = local_110;
                local_150 = local_118;
                iVar5 = FUN_1401971e0(&DAT_140c8acac,5,&local_res10,&local_158);
                local_120 = &PTR_LAB_140b5e648;
                lpTlsValue = local_110;
                goto LAB_14045802a;
            }
            *(int *)(param_1 + 0x1d) = iVar1;
            *(int *)(param_1 + 0x1b) = iVar1;
            uVar7 = FUN_14045a8b0(param_1,param_2[9]);
            if ((int)uVar7 < 0) {
                local_b0 = 0;
                local_b8 = &PTR_LAB_140b5e648;
                local_a8 = TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720,&local_b8);
                local_158 = local_b8;
                local_res10 = (longlong *)0x141e02090;
                local_148 = local_a8;
                local_150 = local_b0;
                iVar5 = FUN_1401971e0(&DAT_140c8aca8,5,&local_res10,&local_158);
                local_b8 = &PTR_LAB_140b5e648;
                TlsSetValue(DAT_140c63720,local_a8);
                if (iVar5 != 0) {
                    DebugBreak();
                    return (ulonglong)uVar7;
                }
                return (ulonglong)uVar7;
            }
            iVar1 = param_2[10];
            if (3 < iVar1) {
                local_98 = 0;
                local_a0 = &PTR_LAB_140b5e648;
                local_90 = TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720,&local_a0);
                local_158 = local_a0;
                local_res10 = (longlong *)0x141e02078;
                local_148 = local_90;
                local_150 = local_98;
                iVar5 = FUN_1401971e0(&DAT_140c8aca0,5,&local_res10,&local_158);
                local_a0 = &PTR_LAB_140b5e648;
                lpTlsValue = local_90;
                goto LAB_14045802a;
            }
            *(int *)((longlong)param_1 + 0xec) = iVar1;
            *(int *)((longlong)param_1 + 0x34) = iVar1;
            FUN_14045b940(param_1,*(undefined8 *)(param_2 + 0x12));
            *(undefined4 *)(param_1 + 0x13) = param_2[0x14];
            cVar18 = *(char *)(param_2 + 0x15);
            lVar9 = *(longlong *)(param_2 + 0x16);
            param_1[0x15] = 0;
            if ((cVar18 != '\0') && (lVar9 != 0)) {
                FUN_1403705b0(param_1 + 0x14);
            }
            lVar9 = FUN_1400323e0();
            pplVar2 = *(longlong ***)(lVar9 + 8);
            pplVar10 = (longlong **)*pplVar2;
            puVar23 = puVar17;
            if (pplVar10 != pplVar2) {
                do {
                    pplVar10 = (longlong **)*pplVar10;
                    puVar23 = (ulonglong *)((longlong)puVar23 + 1);
                } while (pplVar10 != pplVar2);
                if ((ulonglong *)(param_1[0x1a8] - param_1[0x1a6] >> 2) < puVar23) {
                    FUN_1403d6270();
                }
                puVar23 = puVar17;
                if (*(short *)(param_2 + 0x18) != 0) {
                    do {
                        puVar3 = (undefined4 *)param_1[0x1a7];
                        if (puVar3 == (undefined4 *)param_1[0x1a8]) {
                            FUN_1401e4420();
                        }
                        else {
                            if (puVar3 != (undefined4 *)0x0) {
                                *puVar3 = *(undefined4 *)(*(longlong *)(param_2 + 0x1a) + (longlong)puVar23 * 4);
                            }
                            param_1[0x1a7] = param_1[0x1a7] + 4;
                        }
                        puVar23 = (ulonglong *)((longlong)puVar23 + 1);
                    } while (puVar23 < (ulonglong *)(ulonglong)*(ushort *)(param_2 + 0x18));
                }
            }
            *(undefined4 *)(param_1 + 0x2b5) = param_2[0x1c];
            cVar18 = *(char *)(param_2 + 0x1d);
            if (*(char *)(param_2 + 0x1d) == -1) {
                cVar18 = cVar20;
            }
            *(char *)((longlong)param_1 + 0x1b2) = cVar18;
            FUN_14045b6f0(param_1,param_2[0x1e]);
            break;
        default:
            local_100 = 0;
            local_108 = &PTR_LAB_140b5e648;
            local_f8 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720,&local_108);
            local_158 = local_108;
            local_res10 = (longlong *)0x141e02100;
            local_148 = local_f8;
            local_150 = local_100;
            iVar5 = FUN_1401971e0(&DAT_140c8ac98,5,&local_res10,&local_158);
            local_108 = &PTR_LAB_140b5e648;
            lpTlsValue = local_f8;
            goto LAB_14045802a;
        case 0x16:
            uVar14 = SUB168(ZEXT816(0x20) * ZEXT116(*(byte *)(param_2 + 4)),0);
            if (SUB168(ZEXT816(0x20) * ZEXT116(*(byte *)(param_2 + 4)) >> 0x40,0) != 0) {
                uVar14 = 0xffffffffffffffff;
            }
            lVar9 = FUN_14018b280(uVar14,0);
            param_1[0x6de] = lVar9;
            FUN_1407db590(lVar9,*(undefined8 *)(param_2 + 6),(ulonglong)*(byte *)(param_2 + 4) << 5);
            param_1[0x6dd] = (ulonglong)*(byte *)(param_2 + 4);
            FUN_14045b030(param_1,*(undefined8 *)(param_2 + 2));
            break;
        case 0x17:
            FUN_14045b030(param_1,*(undefined8 *)(param_2 + 6));
            iVar1 = param_2[8];
            if (0x11 < iVar1) {
                local_c8 = 0;
                local_d0 = &PTR_LAB_140b5e648;
                local_c0 = TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720,&local_d0);
                local_158 = local_d0;
                local_res10 = (longlong *)0x141e02198;
                local_148 = local_c0;
                local_150 = local_c8;
                iVar5 = FUN_1401971e0(&DAT_140c8ac88,5,&local_res10,&local_158);
                local_d0 = &PTR_LAB_140b5e648;
                lpTlsValue = local_c0;
                goto LAB_14045802a;
            }
            *(int *)(param_1 + 0x1d) = iVar1;
            *(int *)(param_1 + 0x1b) = iVar1;
            param_1[0x314] = *(longlong *)(param_2 + 0xc);
            uVar7 = FUN_14045a8b0(param_1,param_2[9]);
            if ((int)uVar7 < 0) {
                local_e0 = 0;
                local_e8 = &PTR_LAB_140b5e648;
                local_d8 = TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720,&local_e8);
                local_158 = local_e8;
                local_res10 = (longlong *)0x141e02178;
                local_148 = local_d8;
                local_150 = local_e0;
                iVar5 = FUN_1401971e0(&DAT_140c8ac90,5,&local_res10,&local_158);
                local_e8 = &PTR_LAB_140b5e648;
                TlsSetValue(DAT_140c63720,local_d8);
                if (iVar5 != 0) {
                    DebugBreak();
                    return (ulonglong)uVar7;
                }
                return (ulonglong)uVar7;
            }
            iVar1 = param_2[10];
            if (3 < iVar1) {
                local_130 = 0;
                local_138 = &PTR_LAB_140b5e648;
                local_128 = TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720,&local_138);
                local_158 = local_138;
                local_res10 = (longlong *)0x141e02160;
                local_148 = local_128;
                local_150 = local_130;
                iVar5 = FUN_1401971e0(&DAT_140c8ac8c,5,&local_res10,&local_158);
                local_138 = &PTR_LAB_140b5e648;
                lpTlsValue = local_128;
                goto LAB_14045802a;
            }
            *(int *)((longlong)param_1 + 0xec) = iVar1;
            *(int *)((longlong)param_1 + 0x34) = iVar1;
            FUN_14045b940(param_1,*(undefined8 *)(param_2 + 0xe));
            *(undefined4 *)(param_1 + 0x13) = param_2[0x10];
            cVar18 = *(char *)(param_2 + 0x11);
            lVar9 = *(longlong *)(param_2 + 0x12);
            param_1[0x15] = 0;
            if ((cVar18 != '\0') && (lVar9 != 0)) {
                FUN_1403705b0(param_1 + 0x14);
            }
            lVar9 = FUN_1400323e0();
            pplVar2 = *(longlong ***)(lVar9 + 8);
            pplVar10 = (longlong **)*pplVar2;
            puVar25 = puVar17;
            if (pplVar10 != pplVar2) {
                do {
                    pplVar10 = (longlong **)*pplVar10;
                    puVar25 = (ulonglong *)((longlong)puVar25 + 1);
                } while (pplVar10 != pplVar2);
                if ((ulonglong *)(param_1[0x1a8] - param_1[0x1a6] >> 2) < puVar25) {
                    FUN_1403d6270(param_1 + 0x1a5);
                }
                puVar25 = puVar17;
                if (*(short *)(param_2 + 0x14) != 0) {
                    do {
                        puVar3 = (undefined4 *)param_1[0x1a7];
                        if (puVar3 == (undefined4 *)param_1[0x1a8]) {
                            FUN_1401e4420(param_1 + 0x1a5);
                        }
                        else {
                            if (puVar3 != (undefined4 *)0x0) {
                                *puVar3 = *(undefined4 *)(*(longlong *)(param_2 + 0x16) + (longlong)puVar25 * 4);
                            }
                            param_1[0x1a7] = param_1[0x1a7] + 4;
                        }
                        puVar25 = (ulonglong *)((longlong)puVar25 + 1);
                    } while (puVar25 < (ulonglong *)(ulonglong)*(ushort *)(param_2 + 0x14));
                }
            }
            FUN_14045b6f0(param_1,param_2[0x18]);
            puVar25 = puVar17;
            break;
        case 0x18:
            iVar5 = param_2[2];
            *(undefined4 *)(param_1 + 0x56) = param_2[3];
            lVar9 = FUN_1403d90d0(lVar9);
            if (lVar9 != 0) {
                FUN_14047c1a0(lVar9,*(undefined4 *)(param_1 + 1));
            }
            lVar9 = FUN_1404835c0(DAT_140c65918,iVar5);
            if ((lVar9 == 0) || (lVar9 = FUN_14034bdd0(), lVar9 == 0)) {
                lVar9 = *(longlong *)(param_2 + 6);
            }
            FUN_14045b030(param_1,lVar9);
            puVar25 = (ulonglong *)0x1;
            break;
        case 0x19:
            iVar5 = param_2[2];
            *(undefined4 *)(param_1 + 0x56) = param_2[3];
            lVar9 = FUN_1403d90d0(lVar9);
            puVar25 = (ulonglong *)0x1;
            if (lVar9 != 0) {
                FUN_14047c1a0(lVar9,*(undefined4 *)(param_1 + 1));
            }
            break;
        case 0x1b:
            uVar6 = param_2[3];
            iVar5 = param_2[2];
            *(undefined4 *)(param_1 + 0x26a) = 1;
            *(undefined4 *)(param_1 + 0x56) = uVar6;
            FUN_14045b030(param_1,*(undefined8 *)(param_2 + 4));
            puVar25 = (ulonglong *)0x1;
            break;
        case 0x1d:
            goto switchD_140456b2c_caseD_1d;
        case 0x1f:
            *(undefined4 *)(param_1 + 0x1a9) = param_2[4];
            goto switchD_140456b2c_caseD_1d;
        case 0x22:
        case 0x23:
            iVar5 = param_2[2];
            *(undefined4 *)((longlong)param_1 + 0x172c) = param_2[3];
            goto LAB_1404577f8;
        case 0x24:
            iVar5 = param_2[2];
            if ((*(ushort *)(param_2 + 3) != 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
                local_res10 = *(longlong **)(param_2 + 4);
                puVar23 = (ulonglong *)(ulonglong)*(ushort *)(param_2 + 3);
                puVar25 = puVar17;
                if (puVar23 != (ulonglong *)0x0) {
                    puVar15 = (ulonglong *)FUN_14018b280((longlong)puVar23 * 4 + 0x10,0);
                    if (puVar15 != (ulonglong *)0x0) {
                        puVar15[1] = (ulonglong)puVar23;
                        *puVar15 = (ulonglong)&PTR_LAB_140b55060;
                        puVar25 = puVar15;
                    }
                    puVar25 = puVar25 + 2;
                }
                lVar9 = DAT_140c65898;
                FUN_1407db590(puVar25,local_res10,(longlong)puVar23 * 4);
                puVar15 = puVar17;
                puVar19 = puVar17;
                if (puVar23 != (ulonglong *)0x0) {
                    do {
                        if (*(int *)((longlong)puVar25 + (longlong)puVar15 * 4) ==
                            *(int *)(*(longlong *)(lVar9 + 0x78) + 8)) {
                            puVar19 = (ulonglong *)0x1;
                            break;
                        }
                        puVar15 = (ulonglong *)((longlong)puVar15 + 1);
                    } while (puVar15 < puVar23);
                }
                FUN_1403dffa0(param_1,puVar19);
                if (puVar25 != (ulonglong *)0x0) {
                    (**(code **)(puVar25[-2] + 8))(puVar25 + -2);
                }
            }
        LAB_1404577f8:
            puVar25 = (ulonglong *)0x1;
    }
    puVar23 = puVar17;
    if (param_2[0x3c] == 1) {
        puVar23 = *(ulonglong **)(param_2 + 0x3e);
    }
    param_1[0x2e1] = (longlong)puVar23;
    uVar6 = uVar22;
    if (param_2[0x3c] == 1) {
        uVar6 = param_2[0x40];
    }
    *(undefined4 *)(param_1 + 0x2e2) = uVar6;
    param_1[0x2e3] = 0;
    param_1[0x2e4] = 0;
    *(uint *)((longlong)param_1 + 0x36d4) = *(byte *)(param_2 + 0x20) & 4;
    uVar6 = uVar22;
    if (param_2[0x3a] == 1) {
        uVar6 = param_2[0x3b];
    }
    *(undefined4 *)(param_1 + 0x6da) = uVar6;
    *(undefined4 *)(param_1 + 0x6db) = 1;
    *(undefined4 *)((longlong)param_1 + 0x360c) = param_2[0x45];
    FUN_140458140(param_1,*(undefined8 *)(param_2 + 0x22),*(undefined *)((longlong)param_2 + 0x81));
    FUN_1404584b0(param_1,iVar5,*(undefined8 *)(param_2 + 0x2a),*(undefined *)(param_2 + 0x28));
    *(undefined4 *)(param_1 + 0x24) = param_2[0x35];
    FUN_14045ac60(param_1,param_2[0x36]);
    FUN_14045ab70(param_1,param_2[0x35]);
    FUN_14045bcd0(param_1,param_2[0x37],*(undefined8 *)(param_2 + 0x38));
    (**(code **)(*param_1 + 0xb0))();
    uVar7 = (uint)(in_stack_fffffffffffffe88 >> 0x20);
    local_res10 = (longlong *)((ulonglong)local_res10 & 0xffffffff00000000);
    *(uint *)((longlong)param_1 + 0x214) = *(byte *)(param_2 + 0x20) & 0x20;
    if (iVar5 == 0) {
        if (((param_1[0x2e1] == 0) && (*(int *)(param_1 + 0x10) != 0x16)) &&
            (*(int *)(param_1 + 0x10) != 0xf)) {
            uVar16 = FUN_1404674c0(param_1);
            if ((int)uVar16 < 0) {
                return uVar16;
            }
            local_48 = 0;
            local_88 = _DAT_140c78390;
            uStack132 = uRam0000000140c78394;
            uStack128 = uRam0000000140c78398;
            uStack124 = uRam0000000140c7839c;
            local_78 = _DAT_140c783a0;
            uStack116 = uRam0000000140c783a4;
            uStack112 = uRam0000000140c783a8;
            uStack108 = uRam0000000140c783ac;
            local_68 = _DAT_140c783b0;
            uStack100 = uRam0000000140c783b4;
            uStack96 = uRam0000000140c783b8;
            uStack92 = uRam0000000140c783bc;
            local_58 = _DAT_140c783c0;
            uStack84 = uRam0000000140c783c4;
            uStack80 = uRam0000000140c783c8;
            uStack76 = uRam0000000140c783cc;
            in_stack_fffffffffffffe88 = (ulonglong)uVar7 << 0x20;
            uVar7 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x7248) + 0xb8))
                    (*(longlong **)(DAT_140c65898 + 0x7248),*(undefined4 *)(param_1 + 1),
                     &local_88,0,in_stack_fffffffffffffe88,3,param_1 + 0x2de,0);
            if ((int)uVar7 < 0) {
                local_130 = 0;
                local_138 = &PTR_LAB_140b5e648;
                local_128 = TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720,&local_138);
                local_158 = local_138;
                local_res10 = (longlong *)0x141e02530;
                local_148 = local_128;
                local_150 = local_130;
                iVar5 = FUN_1401971e0(&DAT_140c8ac9c,5,&local_res10,&local_158);
                local_138 = &PTR_LAB_140b5e648;
                TlsSetValue(DAT_140c63720,local_128);
                if (iVar5 != 0) {
                    DebugBreak();
                    return (ulonglong)uVar7;
                }
                return (ulonglong)uVar7;
            }
        }
    }
    else {
        lVar9 = FUN_1404835c0(DAT_140c65918,iVar5);
        if (lVar9 == 0) {
            if ((int)puVar25 != 0) {
                local_130 = 0;
                local_138 = &PTR_LAB_140b5e648;
                local_128 = TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720,&local_138);
                local_158 = local_138;
                local_res10 = (longlong *)0x141e02568;
                local_150 = local_130;
                local_148 = local_128;
                iVar5 = FUN_140196f30(&DAT_140c8ac94,0x16,&local_res10,iVar5,&local_158);
                local_138 = &PTR_LAB_140b5e648;
                lpTlsValue = local_128;
                LAB_14045802a:
                TlsSetValue(DAT_140c63720,lpTlsValue);
                if (iVar5 != 0) {
                    DebugBreak();
                }
                return 0x80004005;
            }
        }
        else {
            local_res10 = (longlong *)
                    ((ulonglong)local_res10 & 0xffffffff00000000 |
                     (ulonglong)*(uint *)(lVar9 + 0x94) & 0xffffffff00080000);
            FUN_140458a40(param_1,lVar9);
        }
    }
    uVar16 = FUN_1404586e0(param_1,param_2[0x24],*(undefined8 *)(param_2 + 0x26),
                           *(undefined2 *)(param_2 + 0x25),
                           in_stack_fffffffffffffe88 & 0xffffffff00000000 |
                           (ulonglong)*(byte *)(param_2 + 0x20) & 0xffffffff00000002);
    if ((int)uVar16 < 0) {
        return uVar16;
    }
    param_1[0x321] = (longlong)(param_1 + 0x6af);
    if ((0x24 < *(uint *)(param_1 + 0x10)) ||
        ((0x1042ce5d12U >> ((longlong)(int)*(uint *)(param_1 + 0x10) & 0x3fU) & 1) == 0)) {
        uVar8 = (uint)(*(int *)(param_1 + 8) == 0);
    }
    *(uint *)(param_1 + 0x4a) = uVar8;
    if (uVar8 != 0) {
        *(undefined4 *)((longlong)param_1 + 0x364c) = 1;
    }
    FUN_140482640(param_1);
    lVar9 = DAT_140c65898;
    plVar24 = (longlong *)(DAT_140c65898 + 0x6f08);
    if (*plVar24 == *(longlong *)(DAT_140c65898 + 0x6f10)) {
        FUN_1400290d0(plVar24);
    }
    local_res18 = (**(code **)(lVar9 + 0x6f20))(param_2);
    lVar11 = *(longlong *)(lVar9 + 0x6f18);
    uVar16 = local_res18 % *(ulonglong *)(lVar9 + 0x6f10);
    puVar25 = (ulonglong *)FUN_14018b280(0x20);
    if (puVar25 != (ulonglong *)0x0) {
        uVar4 = *(ulonglong *)(lVar11 + uVar16 * 8);
        *puVar25 = local_res18;
        puVar25[1] = uVar4;
        *(undefined4 *)(puVar25 + 2) = *param_2;
        puVar25[3] = (ulonglong)param_1;
        puVar17 = puVar25;
    }
    *(ulonglong **)(lVar11 + uVar16 * 8) = puVar17;
    *plVar24 = *plVar24 + 1;
    FUN_140458db0(param_1,*(undefined8 *)(param_2 + 0x2e),*(undefined *)(param_2 + 0x2c));
    FUN_14046c300(param_1,1,1);
    *(uint *)(param_1 + 0x269) = (uint)(*(int *)(param_1 + 0x4a) != 0);
    if ((*(uint *)(param_1 + 5) & 0x100) != 0) {
        *(undefined4 *)(param_1 + 0x269) = 1;
        *(undefined4 *)(param_1 + 8) = 0;
        FUN_1407e4830((longlong)param_1 + 0x21c,0,0x2c);
    }
    FUN_140458ec0(param_1,param_2);
    FUN_140458fe0(param_1,*(undefined8 *)(param_2 + 0x32),*(undefined2 *)(param_2 + 0x30));
    FUN_1404697a0(param_1);
    *(uint *)(param_1 + 0x55) = *(byte *)(param_2 + 0x20) & 1;
    if (((int)local_res10 == 0) &&
        (iVar5 = (**(code **)(*DAT_140c65848 + 0x28))(DAT_140c65848,&local_res10,0), -1 < iVar5)) {
        FUN_1400035c0(param_1 + 0x2b1);
        (**(code **)(*local_res10 + 8))();
        if (((*(uint *)(param_1 + 5) & 0x10000) != 0) &&
            (plVar24 = *(longlong **)(DAT_140c63628 + 0x18), plVar24 != (longlong *)0x0)) {
            (**(code **)(*plVar24 + 0x78))(plVar24,param_1[0x2b1],1);
        }
    }
    FUN_14045aec0(param_1);
    FUN_140472d80(param_1);
    FUN_140472e10(param_1);
    if (*(int *)((longlong)param_1 + 0x1cc) != 0) {
        FUN_140474400(param_1,*(int *)((longlong)param_1 + 0x1cc),0);
    }
    lVar9 = DAT_140c65898;
    if (param_1[0x2e1] != 0) {
        param_1[0x2e3] = 0;
        (**(code **)(**(longlong **)(lVar9 + 0x7248) + 0x138))
                (*(longlong **)(lVar9 + 0x7248),param_1 + 0x2e1,*(undefined4 *)(param_1 + 0x2e2));
        lVar9 = FUN_1403d90d0(DAT_140c65898);
        param_1[0x2e4] = lVar9;
        if ((*(uint *)(param_1 + 1) & 0xc0000000) == 0) {
            while ((lVar9 != 0 && (lVar9 = param_1[0x2e4], (*(uint *)(lVar9 + 8) & 0xc0000000) != 0))) {
                param_1[0x2e3] = lVar9;
                lVar9 = *(longlong *)(lVar9 + 0x1720);
                param_1[0x2e4] = lVar9;
            }
        }
        if (param_1[0x2e3] != 0) {
            *(longlong **)(param_1[0x2e3] + 0x1720) = param_1;
        }
        if (param_1[0x2e4] != 0) {
            *(longlong **)(param_1[0x2e4] + 0x1718) = param_1;
        }
        if (param_1[0x2e3] == 0) {
            (**(code **)(**(longlong **)(DAT_140c65898 + 0x7248) + 0x140))
                    (*(longlong **)(DAT_140c65898 + 0x7248),param_1 + 0x2e1,
                     *(undefined4 *)(param_1 + 0x2e2),*(undefined4 *)(param_1 + 1));
        }
    }
    FUN_14045ad90(param_1);
    if (param_2[0x42] == 1) {
        uVar22 = param_2[0x44];
    }
    *(undefined4 *)(param_1 + 0x28) = uVar22;
    if (((((*(byte *)(param_2 + 0x20) & 0x40) != 0) || (*(int *)(param_1 + 0x10) == 0x12)) ||
         (iVar5 = FUN_14047c060(param_1), iVar5 != 0)) ||
        (iVar5 = FUN_14047c0a0(param_1), cVar18 = cVar20, iVar5 != 0)) {
        cVar18 = '\x01';
    }
    *(char *)(param_1 + 0x36) = cVar18;
    lVar9 = DAT_140c65898;
    if (((*(byte *)(param_2 + 0x20) & 0x80) != 0) || (*(int *)(param_1 + 0x10) == 0x12)) {
        cVar20 = '\x01';
    }
    *(char *)((longlong)param_1 + 0x1b1) = cVar20;
    if (*(longlong *)(lVar9 + 0x6490) == 0) {
        iVar5 = 1;
    }
    else {
        iVar5 = FUN_14045a950(*(longlong *)(lVar9 + 0x6490));
        lVar9 = DAT_140c65898;
    }
    if (1 < *(int *)((longlong)param_1 + 0x54)) {
        if (*(longlong *)(lVar9 + 0x6490) != 0) {
            iVar21 = *(int *)(*(longlong *)(lVar9 + 0x6490) + 0x108);
        }
        if ((*(int *)(param_1 + 1) != iVar21) && (iVar5 == 0)) goto LAB_140457f8a;
    }
    FUN_1400ea3e0(*(undefined8 *)(lVar9 + 0x7340),"UnitCreated",&DAT_1409ede34,
                  *(undefined4 *)(param_1 + 1));
    LAB_140457f8a:
    if (*(int *)(param_1 + 0x4a) != 0) {
        FUN_14045e740(param_1,1);
    }
    return 0;
    switchD_140456b2c_caseD_1d:
    iVar5 = param_2[2];
    *(undefined4 *)(param_1 + 0x56) = param_2[3];
    goto LAB_1404577f8;
}



undefined8 FUN_140458140(longlong param_1,longlong param_2,uint param_3)

{
    longlong lVar1;
    uint uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    ulonglong uVar6;
    int *piVar7;
    int iVar8;
    undefined8 local_res8;
    undefined **local_68;
    undefined8 local_60;
    LPVOID local_58;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;

    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined4 *)(param_1 + 0x1c4) = 0;
    *(undefined8 *)(param_1 + 0x1cc) = 0;
    *(undefined8 *)(param_1 + 0x1d4) = 0;
    *(undefined8 *)(param_1 + 0x1dc) = 0;
    if (param_3 != 0) {
        piVar7 = (int *)(param_2 + 4);
        uVar6 = (ulonglong)param_3;
        do {
            lVar1 = DAT_140c65898;
            iVar3 = *piVar7;
            if (iVar3 == 0) {
                iVar5 = piVar7[1];
            }
            else {
                iVar5 = 0;
                if (iVar3 == 2) {
                    iVar5 = piVar7[1];
                }
            }
            if (iVar3 == 1) {
                iVar8 = piVar7[1];
            }
            else {
                iVar8 = 0;
            }
            iVar4 = 0;
            if (iVar3 == 2) {
                iVar4 = piVar7[2];
            }
            switch(piVar7[-1]) {
                case 0:
                    *(int *)(param_1 + 0x40) = iVar5;
                    break;
                case 1:
                    *(int *)(param_1 + 0x218) = iVar8;
                    break;
                case 2:
                    *(int *)(param_1 + 0x21c) = iVar8;
                    break;
                case 3:
                    *(int *)(param_1 + 0x220) = iVar8;
                    break;
                case 4:
                    *(int *)(param_1 + 0x224) = iVar8;
                    break;
                case 5:
                    *(int *)(param_1 + 0x228) = iVar8;
                    break;
                case 6:
                    *(int *)(param_1 + 0x22c) = iVar8;
                    break;
                case 7:
                    *(int *)(param_1 + 0x230) = iVar8;
                    break;
                case 8:
                    *(int *)(param_1 + 0x234) = iVar8;
                    break;
                case 9:
                    *(int *)(param_1 + 0x238) = iVar8;
                    break;
                case 10:
                    *(int *)(param_1 + 0x38) = iVar5;
                    break;
                case 0xb:
                    *(int *)(param_1 + 0x3c) = iVar5;
                    break;
                case 0xc:
                    *(int *)(param_1 + 0x1bc) = iVar5;
                    *(int *)(param_1 + 0x1b8) = iVar5;
                    *(int *)(param_1 + 0x1d0) = iVar4;
                    *(int *)(param_1 + 0x1cc) = iVar4;
                    break;
                case 0xd:
                    *(int *)(param_1 + 0x1bc) = iVar5;
                    *(int *)(param_1 + 0x1d0) = iVar4;
                    break;
                case 0xe:
                    *(undefined4 *)(param_1 + 0x1c4) = 1;
                    iVar3 = (**(code **)(**(longlong **)(lVar1 + 0x7250) + 0x38))();
                    *(int *)(param_1 + 0x1c8) = iVar5 - iVar3;
                    break;
                case 0xf:
                    if (iVar5 == 0) {
                        uVar2 = *(uint *)(param_1 + 0x1428) & 0xfffffffe;
                        *(uint *)(param_1 + 0x1428) = uVar2;
                        *(uint *)(param_1 + 0x142c) = uVar2;
                    }
                    else {
                        *(undefined4 *)(param_1 + 0x1428) = 0x3f;
                        *(undefined4 *)(param_1 + 0x142c) = 0x3f;
                    }
                    break;
                default:
                    local_68 = &PTR_LAB_140b5e648;
                    local_60 = 0;
                    local_58 = TlsGetValue(DAT_140c63720);
                    TlsSetValue(DAT_140c63720,&local_68);
                    local_48 = local_68;
                    local_res8 = 0x141e024e0;
                    local_38 = local_58;
                    local_40 = local_60;
                    iVar3 = FUN_1401971e0(&DAT_140c8ac84,5,&local_res8,&local_48);
                    local_68 = &PTR_LAB_140b5e648;
                    TlsSetValue(DAT_140c63720,local_58);
                    if (iVar3 != 0) {
                        DebugBreak();
                    }
                    break;
                case 0x13:
                    *(int *)(param_1 + 0x44) = iVar8;
                    break;
                case 0x14:
                    *(int *)(param_1 + 0x48) = iVar5;
                    break;
                case 0x15:
                    *(int *)(param_1 + 0x4b0) = iVar5;
                    break;
                case 0x16:
                    *(int *)(param_1 + 0x4c) = iVar5;
                    break;
                case 0x17:
                    *(int *)(param_1 + 0x23c) = iVar8;
                    break;
                case 0x18:
                    *(int *)(param_1 + 0x240) = iVar8;
                    break;
                case 0x19:
                    *(int *)(param_1 + 0x244) = iVar8;
            }
            piVar7 = piVar7 + 4;
            uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1404584b0(longlong param_1,undefined8 param_2,longlong param_3,uint param_4)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    uint uVar4;
    ulonglong uVar5;
    undefined4 *puVar6;
    undefined4 uVar7;

    uVar5 = (ulonglong)param_4;
    lVar2 = FUN_1404835c0(DAT_140c65918);
    uVar4 = 0;
    puVar6 = (undefined4 *)(param_1 + 0x5c4);
    do {
        uVar7 = 0;
        if ((lVar2 == 0) || (*(int *)(param_1 + 0x80) == 0x18)) {
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c64070 != 0) || (iVar1 = FUN_140247760(), iVar1 < 0)) goto LAB_14045855f;
                lVar3 = (**(code **)(*DAT_140c64930 + 0x18))(DAT_140c64930,uVar4);
            }
            else {
                lVar3 = (*DAT_140c63840)(&PTR_u_UnitProperty2_140a6dee0,uVar4,DAT_140c63858);
            }
            if (lVar3 != 0) {
                uVar7 = *(undefined4 *)(lVar3 + 0x18);
            }
        }
        else {
            uVar7 = FUN_1404585c0(param_1,lVar2,uVar4);
        }
        LAB_14045855f:
        uVar4 = uVar4 + 1;
        puVar6[-1] = uVar7;
        *puVar6 = uVar7;
        puVar6 = puVar6 + 2;
        if (0xc4 < uVar4) {
            if (param_4 != 0) {
                do {
                    FUN_140466a90(param_1,param_3);
                    param_3 = param_3 + 0xc;
                    uVar5 = uVar5 - 1;
                } while (uVar5 != 0);
            }
            return 0;
        }
    } while( true );
}



ulonglong FUN_1404585c0(longlong param_1,undefined4 *param_2,uint param_3)

{
    int iVar1;
    longlong lVar2;
    ulonglong uVar3;
    float fVar4;
    float fVar5;
    undefined4 uVar6;

    lVar2 = FUN_1404825a0(param_1,*param_2,param_3);
    if (lVar2 != 0) {
        return (ulonglong)*(uint *)(lVar2 + 0xc);
    }
    lVar2 = FUN_1402479c0(param_3);
    if (lVar2 != 0) {
        fVar5 = *(float *)(lVar2 + 0x18);
        uVar6 = 0;
        if ((*(byte *)(lVar2 + 0x24) & 1) == 0) {
            iVar1 = *(int *)(param_1 + 0x3c);
            if (iVar1 == 0) {
                iVar1 = *(int *)(param_1 + 0x38);
            }
            uVar3 = (ulonglong)param_3;
            if (99 < param_3) {
                iVar1 = FUN_1401f9bd0();
                uVar3 = (ulonglong)(param_3 - 100);
            }
            lVar2 = FUN_1401f9c20(iVar1);
            if (lVar2 != 0) {
                fVar5 = *(float *)(lVar2 + 4 + uVar3 * 4);
                uVar6 = 0;
                if ((int)param_3 < 0xc5) {
                    lVar2 = FUN_1401f60a0(param_2[4]);
                    if (lVar2 == 0) {
                        fVar4 = 1.0;
                    }
                    else {
                        fVar4 = *(float *)(lVar2 + 0x10 + (longlong)(int)param_3 * 4);
                    }
                }
                else {
                    fVar4 = 1.0;
                }
                fVar5 = fVar5 * fVar4;
                lVar2 = FUN_1401f64e0(fVar4,param_2[5]);
                if (lVar2 != 0) {
                    fVar5 = fVar5 * *(float *)(lVar2 + 0x18 + (ulonglong)param_3 * 4);
                }
                lVar2 = FUN_1401f6920(param_2[6]);
                if (lVar2 != 0) {
                    fVar5 = fVar5 * *(float *)(lVar2 + 4 + (ulonglong)param_3 * 4);
                }
            }
        }
        return CONCAT44(uVar6,fVar5);
    }
    return 0;
}



undefined8
FUN_1404586e0(longlong param_1,undefined8 param_2,longlong param_3,ushort param_4,int param_5)

{
    longlong lVar1;
    int iVar2;
    undefined4 uVar3;
    uint uVar4;
    undefined8 local_res8;
    undefined4 local_res20 [2];
    ulonglong uVar6;
    undefined **local_68;
    undefined8 local_60;
    LPVOID local_58;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    ulonglong uVar5;

    uVar3 = DAT_140c636a8;
    uVar5 = 0;
    *(undefined4 *)(param_1 + 0xd58) = 1;
    *(undefined8 *)(param_1 + 0xd50) = 0;
    *(undefined8 *)(param_1 + 0xf00) = 0;
    local_res20[0] = uVar3;
    FUN_14079ab90(param_1 + 0xd5c,param_2,uVar3);
    if (param_4 != 0) {
        do {
            uVar6 = 0;
            iVar2 = FUN_1405b4ab0(param_1,local_res20,param_3 + uVar5 * 0x48,param_1 + 0xd5c,0);
            if (iVar2 < 0) {
                local_60 = 0;
                local_68 = &PTR_LAB_140b5e648;
                local_58 = TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720,&local_68);
                local_48 = local_68;
                local_40 = local_60;
                local_res8 = 0x141e02480;
                local_38 = local_58;
                iVar2 = FUN_1401971e0(&DAT_140c8ac80,5,&local_res8,*(undefined4 *)(param_1 + 8),
                                      uVar6 & 0xffffffff00000000 |
                                      (ulonglong)*(uint *)(param_3 + uVar5 * 0x48),&local_48);
                local_68 = &PTR_LAB_140b5e648;
                TlsSetValue(DAT_140c63720,local_58);
                if (iVar2 != 0) {
                    DebugBreak();
                }
                return 0x80004005;
            }
            uVar4 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar4;
            uVar3 = local_res20[0];
        } while (uVar4 < param_4);
    }
    if (param_5 != 0) {
        *(undefined4 *)(param_1 + 0xd5c) = 0;
    }
    *(undefined8 *)(param_1 + 0x1320) = 2;
    *(undefined4 *)(param_1 + 0x1328) = 0;
    *(undefined8 *)(param_1 + 0x1338) = 0;
    *(undefined4 *)(param_1 + 0x1340) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x131c) = *(undefined4 *)(param_1 + 0x1088);
    *(undefined8 *)(param_1 + 0x12c8) = 0;
    *(undefined8 *)(param_1 + 0x12d0) = 0;
    *(undefined8 *)(param_1 + 0x1308) = 0;
    *(undefined8 *)(param_1 + 0x12d8) = 0;
    *(undefined8 *)(param_1 + 0x12e0) = 0;
    *(undefined8 *)(param_1 + 0x12e8) = 0;
    *(undefined8 *)(param_1 + 0x12f0) = 0;
    *(undefined8 *)(param_1 + 0x12f8) = 0;
    *(undefined8 *)(param_1 + 0x1300) = 0;
    *(undefined8 *)(param_1 + 0x1310) = 0;
    *(undefined4 *)(param_1 + 0x132c) = uVar3;
    *(undefined4 *)(param_1 + 0x1330) = 0;
    *(undefined4 *)(param_1 + 0x1318) = 0;
    *(undefined4 *)(param_1 + 0xe40) = 0;
    *(undefined **)(param_1 + 0xe50) = &LAB_1405b9140;
    *(longlong *)(param_1 + 0xe48) = param_1;
    *(undefined8 *)(param_1 + 0xe58) = 0;
    if ((*(int *)(param_1 + 0xdf4) == 2) && (*(longlong *)(param_1 + 0xe08) != 0)) {
        if ((*(longlong *)(param_1 + 0xe48) == 0) && (*(longlong *)(param_1 + 0xe50) == 0)) {
            FUN_140195d70(param_1 + 0xdf8);
        }
        else {
            FUN_140195960(param_1 + 0xdf8,-(*(int *)(param_1 + 0xdf0) != 0) & 0x96,
                          (undefined4 *)(param_1 + 0xe40),4);
        }
    }
    *(undefined4 *)(param_1 + 0xe60) = 0;
    *(undefined **)(param_1 + 0xe70) = &LAB_1405b9140;
    *(longlong *)(param_1 + 0xe68) = param_1;
    *(undefined8 *)(param_1 + 0xe78) = 0;
    if ((*(int *)(param_1 + 0xdf4) == 3) && (*(longlong *)(param_1 + 0xe08) != 0)) {
        if ((*(longlong *)(param_1 + 0xe68) == 0) && (*(longlong *)(param_1 + 0xe70) == 0)) {
            FUN_140195d70(param_1 + 0xdf8);
        }
        else {
            FUN_140195960(param_1 + 0xdf8,0,(undefined4 *)(param_1 + 0xe60),4);
        }
    }
    FUN_1405b4f50(param_1,uVar3);
    FUN_1405b5070(param_1,uVar3);
    FUN_1405b82a0(param_1,uVar3);
    for (lVar1 = *(longlong *)(param_1 + 0xf08); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0xf18)) {
        FUN_1405b4ef0(lVar1,uVar3);
    }
    *(undefined4 *)(param_1 + 0x1344) = 0x27;
    *(undefined8 *)(param_1 + 0x1380) = 1;
    *(undefined4 *)(param_1 + 0x1390) = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140458a40(longlong param_1,undefined4 *param_2)

{
    longlong lVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined4 uVar4;
    int iVar5;
    int iVar6;
    undefined8 uVar7;
    undefined *puVar8;
    undefined8 local_res8;
    undefined **local_a8;
    undefined8 local_a0;
    LPVOID local_98;
    undefined **local_88;
    undefined8 local_80;
    LPVOID local_78;
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
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 uStack44;
    undefined8 local_28;

    *(undefined4 **)(param_1 + 0x18) = param_2;
    uVar4 = 0;
    if (param_2 != (undefined4 *)0x0) {
        uVar4 = *param_2;
    }
    *(undefined4 *)(param_1 + 0x20) = uVar4;
    *(undefined4 **)(param_1 + 0xf8) = param_2;
    *(undefined4 *)(param_1 + 0x30) = param_2[5];
    uVar7 = FUN_1401f64e0(param_2[5]);
    lVar1 = *(longlong *)(param_1 + 0xd08);
    *(undefined8 *)(param_1 + 0x100) = uVar7;
    if (lVar1 == 0) {
        *(undefined4 *)(param_1 + 0xe8) = 0;
        *(undefined4 *)(param_1 + 0xec) = 2;
    }
    else {
        *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(lVar1 + 0xb8);
        *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(lVar1 + 0xbc);
    }
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_1 + 0xe8);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0xec);
    *(undefined4 *)(param_1 + 0x24) = param_2[0x24];
    *(undefined4 *)(param_1 + 0x28) = param_2[0x25];
    *(undefined4 *)(param_1 + 0x2c) = param_2[0x26];
    if (((*(longlong *)(param_1 + 0x1708) == 0) && (*(int *)(param_1 + 0x80) != 0x16)) &&
        (*(int *)(param_1 + 0x80) != 0xf)) {
        iVar5 = FUN_1404674c0(param_1);
        if (iVar5 < 0) {
            local_a0 = 0;
            local_a8 = &PTR_LAB_140b5e648;
            local_98 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720,&local_a8);
            local_res8 = 0x141e02698;
            puVar8 = &DAT_140c8ac70;
        }
        else {
            uVar4 = 3;
            if ((*(uint *)(param_1 + 0x28) >> 0xd & 1) != 0) {
                uVar4 = 0;
            }
            local_68 = _DAT_140c78390;
            uStack100 = uRam0000000140c78394;
            uStack96 = uRam0000000140c78398;
            uStack92 = uRam0000000140c7839c;
            local_58 = _DAT_140c783a0;
            uStack84 = uRam0000000140c783a4;
            uStack80 = uRam0000000140c783a8;
            uStack76 = uRam0000000140c783ac;
            local_28 = 0;
            local_48 = _DAT_140c783b0;
            uStack68 = uRam0000000140c783b4;
            uStack64 = uRam0000000140c783b8;
            uStack60 = uRam0000000140c783bc;
            local_38 = _DAT_140c783c0;
            uStack52 = uRam0000000140c783c4;
            uStack48 = uRam0000000140c783c8;
            uStack44 = uRam0000000140c783cc;
            iVar5 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x7248) + 0xb8))
                    (*(longlong **)(DAT_140c65898 + 0x7248),*(undefined4 *)(param_1 + 8),
                     &local_68,0,0,uVar4,(longlong **)(param_1 + 0x16f0),
                     *(uint *)(param_1 + 0x28) >> 0x13 & 1);
            if (-1 < iVar5) {
                if ((*(int *)(param_1 + 0x80) == 0xb) || (*(int *)(param_1 + 0x80) == 0x20)) {
                    plVar2 = *(longlong **)(param_1 + 0x16f0);
                    (**(code **)(*plVar2 + 0x128))(plVar2,1);
                }
                goto LAB_140458cb1;
            }
            local_a0 = 0;
            local_a8 = &PTR_LAB_140b5e648;
            local_98 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720,&local_a8);
            local_res8 = 0x141e02660;
            puVar8 = &DAT_140c8ac78;
        }
        local_88 = local_a8;
        local_80 = local_a0;
        local_78 = local_98;
        iVar6 = FUN_1401971e0(puVar8,5,&local_res8,&local_88);
        local_a8 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_98);
        if (iVar6 != 0) {
            DebugBreak();
        }
    }
    else {
        LAB_140458cb1:
        uVar7 = FUN_140247e00(*(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x1c));
        *(undefined8 *)(param_1 + 0xd0) = uVar7;
        FUN_14045aec0(param_1);
        FUN_140472d80(param_1);
        FUN_140472e10(param_1);
        lVar3 = DAT_140c65898;
        *(undefined4 *)(param_1 + 0x18a8) = 1;
        lVar1 = *(longlong *)(lVar3 + 0x78);
        if ((lVar1 != 0) && (*(int *)(param_1 + 8) == *(int *)(lVar1 + 8))) {
            *(undefined4 *)(lVar3 + 0x6f98) = 1;
        }
        switch(*(undefined4 *)(param_1 + 0x80)) {
            case 10:
                *(uint *)(param_1 + 0x38) = (uint)*(ushort *)(*(longlong *)(param_1 + 0x18) + 0xb0);
            default:
                FUN_14045b030(param_1,0);
            case 0x12:
            case 0x14:
            case 0x16:
            case 0x17:
            case 0x18:
            case 0x1b:
                lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0xf8);
                if (lVar1 != 0) {
                    *(longlong *)(param_1 + 0xb0) = lVar1;
                }
                iVar5 = 0;
        }
    }
    return iVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140458db0(undefined8 param_1,longlong param_2,uint param_3)

{
    int iVar1;
    int iVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    ulonglong uVar6;
    int *piVar7;

    if (param_3 != 0) {
        uVar6 = (ulonglong)param_3;
        piVar7 = (int *)(param_2 + 8);
        do {
            uVar4 = piVar7[1];
            iVar1 = *piVar7;
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c63da4 == 0) && (iVar2 = FUN_14020b680(), -1 < iVar2)) {
                    (**(code **)(*DAT_140c64ba8 + 0x18))();
                }
            }
            else {
                (*DAT_140c63840)(&PTR_u_ItemColorSet_140a6ad70,iVar1,DAT_140c63858);
            }
            uVar3 = FUN_1401dc0d0();
            uVar5 = uVar3;
            if (((int)uVar4 < 0) && (uVar5 = uVar4, iVar1 != 0)) {
                if ((uVar4 & 0x3ff) == 0) {
                    uVar4 = uVar4 ^ (uVar3 ^ uVar4) & 0x3ff;
                }
                if ((uVar4 & 0xffc00) == 0) {
                    uVar4 = uVar4 ^ (uVar3 ^ uVar4) & 0xffc00;
                }
                uVar5 = uVar4;
                if ((uVar4 & 0x3ff00000) == 0) {
                    uVar5 = uVar4 ^ (uVar3 ^ uVar4) & 0x3ff00000;
                }
            }
            FUN_140466d20(param_1,piVar7[-2],piVar7[-1],uVar5);
            piVar7 = piVar7 + 4;
            uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
    }
    return 0;
}



undefined8 FUN_140458ec0(longlong param_1,longlong param_2)

{
    longlong *plVar1;
    ulonglong uVar2;
    int *piVar3;
    ulonglong uVar4;
    int local_res8 [2];

    if (*(int *)(param_1 + 0x80) == 0x19) {
        *(undefined4 *)(param_1 + 0x84) = 1;
        uVar2 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x2b0));
        uVar4 = uVar2;
        if (uVar2 != 0) {
            local_res8[0] = *(int *)(param_1 + 8);
            uVar4 = 0;
            if (*(ulonglong *)(uVar2 + 0x2c0) != 0) {
                piVar3 = *(int **)(uVar2 + 0x2b8);
                do {
                    if (*piVar3 == local_res8[0]) goto LAB_140458f3d;
                    uVar4 = uVar4 + 1;
                    piVar3 = piVar3 + 1;
                } while (uVar4 < *(ulonglong *)(uVar2 + 0x2c0));
            }
            FUN_140003460((int **)(uVar2 + 0x2b8),local_res8);
            LAB_140458f3d:
            uVar4 = (ulonglong)*(uint *)(uVar2 + 0x2ac);
        }
        plVar1 = *(longlong **)(param_1 + 0xcc0);
        if ((plVar1 == (longlong *)0x0) || ((int)uVar4 == 0)) {
            if (uVar2 != 0) {
                *(undefined4 *)(uVar2 + 0x2c8) = 0;
            }
            FUN_14045bf30(param_1,4);
        }
        else {
            (**(code **)(*plVar1 + 0x50))(plVar1,0x14,*(undefined4 *)(param_2 + 0x10));
            *(undefined4 *)(param_1 + 0xf4) = 1;
            FUN_1404718e0(param_1,0,0,1,1);
            FUN_140472d80(param_1);
            if (uVar2 != 0) {
                *(undefined4 *)(uVar2 + 0x2c8) = 1;
            }
        }
        *(undefined4 *)(param_1 + 0x1348) = 0;
    }
    return 0;
}



undefined8 FUN_140458fe0(longlong param_1,longlong param_2,uint param_3)

{
    int iVar1;
    int iVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined4 *puVar5;
    ulonglong uVar6;
    longlong local_res20;
    undefined **local_1a8;
    undefined8 local_1a0;
    LPVOID local_198;
    undefined **local_188;
    undefined8 local_180;
    LPVOID local_178;
    undefined8 local_168 [2];
    undefined4 local_158 [5];
    char local_144;
    undefined8 local_140;
    byte local_138;
    undefined8 local_130;
    undefined4 local_f8 [6];
    undefined4 local_e0;
    undefined4 local_dc;
    undefined4 local_d4;

    uVar6 = 0;
    if (param_3 != 0) {
        puVar5 = (undefined4 *)(param_2 + 0xc);
        do {
            FUN_1407e4830(local_f8,0);
            local_e0 = puVar5[-1];
            local_f8[0] = *puVar5;
            local_dc = puVar5[-3];
            local_d4 = puVar5[-2];
            iVar2 = puVar5[1];
            if (DAT_140c65b70 == 0) {
                iVar1 = 1;
                LAB_140459078:
                local_1a0 = 0;
                local_1a8 = &PTR_LAB_140b5e648;
                local_198 = TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720,&local_1a8);
                local_188 = local_1a8;
                local_178 = local_198;
                local_180 = local_1a0;
                FUN_14018d540(&local_res20,&DAT_140b4f534,iVar1);
                lVar3 = local_res20;
                local_168[0] = 0x141e02600;
                iVar2 = FUN_1401971e0(&DAT_140c8ac74,0x18,local_168,*puVar5,local_res20,&local_188);
                if (lVar3 != 0) {
                    (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
                }
                local_1a8 = &PTR_LAB_140b5e648;
                TlsSetValue(DAT_140c63720,local_198);
                if (iVar2 != 0) {
                    DebugBreak();
                }
            }
            else {
                iVar1 = FUN_140561780();
                if (iVar1 != 0) goto LAB_140459078;
                lVar3 = FUN_140561c30(DAT_140c65b70,puVar5[-1]);
                if (lVar3 == 0) {
                    local_1a0 = 0;
                    local_1a8 = &PTR_LAB_140b5e648;
                    local_198 = TlsGetValue(DAT_140c63720);
                    TlsSetValue(DAT_140c63720,&local_1a8);
                    local_188 = local_1a8;
                    local_res20 = 0x141e025a0;
                    local_178 = local_198;
                    local_180 = local_1a0;
                    iVar2 = FUN_1401971e0(&DAT_140c8ac7c,0x18,&local_res20,&local_188);
                    local_1a8 = &PTR_LAB_140b5e648;
                    TlsSetValue(DAT_140c63720,local_198);
                    if (iVar2 != 0) {
                        DebugBreak();
                    }
                    return 0x80004005;
                }
                FUN_14053da80(lVar3,puVar5 + -3,3 - (uint)(iVar2 != 0));
                if (*(int *)(lVar3 + 0x348) != 0) {
                    FUN_1407e4830(local_158,0,0x58);
                    local_158[0] = puVar5[-1];
                    local_144 = *(char *)(puVar5 + 2);
                    if (local_144 != '\0') {
                        uVar4 = SUB168(ZEXT816(0x18) * ZEXT416((uint)puVar5[2]),0);
                        if (SUB168(ZEXT816(0x18) * ZEXT416((uint)puVar5[2]) >> 0x40,0) != 0) {
                            uVar4 = 0xffffffffffffffff;
                        }
                        local_140 = FUN_14018b280(uVar4,0);
                        FUN_1407db590(local_140,*(undefined8 *)(puVar5 + 3),(ulonglong)(uint)puVar5[2] * 0x18);
                    }
                    local_138 = *(byte *)(puVar5 + 5);
                    if (local_138 != 0) {
                        uVar4 = SUB168(ZEXT816(0x1c) * ZEXT116(local_138),0);
                        if (SUB168(ZEXT816(0x1c) * ZEXT116(local_138) >> 0x40,0) != 0) {
                            uVar4 = 0xffffffffffffffff;
                        }
                        local_130 = FUN_14018b280(uVar4,0);
                        FUN_1407db590(local_130,*(undefined8 *)(puVar5 + 7),
                                      (ulonglong)*(byte *)(puVar5 + 5) * 0x1c);
                    }
                    FUN_140480ed0(param_1 + 0x16d8);
                }
            }
            uVar6 = uVar6 + 1;
            puVar5 = puVar5 + 0x10;
        } while (uVar6 < param_3);
    }
    return 0;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140459330(undefined8 param_1,float param_2,longlong param_3)

{
    bool bVar1;
    bool bVar2;
    int *piVar3;
    int iVar4;
    int iVar5;
    uint uVar6;
    undefined8 uVar7;
    longlong lVar8;
    longlong lVar9;
    longlong lVar10;
    float *pfVar11;
    longlong *plVar12;
    undefined *puVar13;
    uint uVar14;
    undefined4 *puVar15;
    longlong lVar16;
    undefined4 extraout_XMM0_Da;
    float fVar17;
    float extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    float extraout_XMM0_Da_02;
    float fVar18;
    undefined extraout_XMM0 [16];
    undefined auVar19 [16];
    float fVar20;
    float fVar21;
    undefined4 uVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    float fVar26;
    undefined4 uVar27;
    float fVar28;
    float in_xmmTmp2_Dd;
    undefined local_c8 [16];
    undefined4 local_b8 [2];
    longlong local_b0;
    code *local_a8;
    undefined8 local_a0;

    plVar12 = *(longlong **)(param_3 + 0x16e8);
    lVar10 = 0;
    bVar2 = false;
    if (plVar12 != (longlong *)0x0) {
        local_c8 = local_c8 & (undefined  [16])0xffffffff00000000;
        (**(code **)(*plVar12 + 0x10))(plVar12,local_c8,0);
        (**(code **)(**(longlong **)(param_3 + 0x16e8) + 1000))(*(longlong **)(param_3 + 0x16e8),0);
    }
    uVar7 = FUN_140467990(param_3);
    if ((int)uVar7 < 0) {
        return uVar7;
    }
    if ((*(longlong **)(param_3 + 0x16e8) != (longlong *)0x0) && (*(int *)(param_3 + 0xf38) != 0)) {
        if (*(int *)(param_3 + 0xf30) == 0) {
            (**(code **)(**(longlong **)(param_3 + 0x16e8) + 0x3a8))();
            plVar12 = *(longlong **)(param_3 + 0x16e8);
            lVar8 = *plVar12;
            uVar7 = (**(code **)(**(longlong **)(param_3 + 0x16f0) + 0x38))();
            (**(code **)(lVar8 + 0x48))(plVar12,uVar7);
        }
        else {
            if ((((*(int *)(param_3 + 0xf34) == 0) || (*(longlong *)(param_3 + 0xf00) == 0)) ||
                 (plVar12 = *(longlong **)(*(longlong *)(param_3 + 0xf00) + 0x16e8),
                         plVar12 == (longlong *)0x0)) || (iVar4 = (**(code **)(*plVar12 + 0x350))(), iVar4 == 0))
                goto LAB_1404594b5;
            (**(code **)(**(longlong **)(param_3 + 0x16e8) + 0x48))
                    (*(longlong **)(param_3 + 0x16e8),&DAT_140c78390);
            (**(code **)(**(longlong **)(param_3 + 0x16e8) + 0x3a8))();
            (**(code **)(*plVar12 + 0x380))
                    (plVar12,*(undefined4 *)(param_3 + 0xf34),*(undefined8 *)(param_3 + 0x16e8));
        }
        *(undefined4 *)(param_3 + 0xf38) = 0;
        FUN_140579980();
        FUN_140601260();
    }
    LAB_1404594b5:
    if (*(int *)(param_3 + 0x36e4) != *(int *)(param_3 + 0xc0)) {
        if (*(longlong *)(param_3 + 0x16e8) != 0) {
            iVar4 = FUN_14047bb50(param_3);
            if (iVar4 == 0) {
                (**(code **)(**(longlong **)(param_3 + 0x16e8) + 0x3a8))();
                plVar12 = *(longlong **)(param_3 + 0x16e8);
                lVar8 = *plVar12;
                uVar7 = (**(code **)(**(longlong **)(param_3 + 0x16f0) + 0x38))();
                (**(code **)(lVar8 + 0x48))(plVar12,uVar7);
                *(undefined4 *)(param_3 + 0x36e4) = 0;
            }
            else {
                iVar4 = FUN_14047bc60();
                if (((iVar4 == 0) || (lVar8 = *(longlong *)(param_3 + 0xf00), lVar8 == 0)) ||
                    ((*(int *)(lVar8 + 8) != *(int *)(param_3 + 0xc0) ||
                      (plVar12 = *(longlong **)(lVar8 + 0x16e8), plVar12 == (longlong *)0x0))))
                    goto LAB_1404595b4;
                (**(code **)(**(longlong **)(param_3 + 0x16e8) + 0x48))
                        (*(longlong **)(param_3 + 0x16e8),&DAT_140c78390);
                (**(code **)(**(longlong **)(param_3 + 0x16e8) + 0x3a8))();
                (**(code **)(*plVar12 + 0x380))(plVar12,iVar4,*(undefined8 *)(param_3 + 0x16e8));
                *(undefined4 *)(param_3 + 0x36e4) = *(undefined4 *)(param_3 + 0xc0);
            }
            FUN_140579980();
            FUN_140601260();
        }
        LAB_1404595b4:
        FUN_140470b20();
    }
    if (((*(int *)(param_3 + 0x12f4) != 0) &&
         (lVar8 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_3 + 0xc0)), lVar8 != 0)) &&
        ((*(int *)(lVar8 + 0x80) == 7 &&
          (((*(longlong *)(param_3 + 0xf00) != 0 &&
             (*(longlong *)(*(longlong *)(param_3 + 0xf00) + 0x16e8) != 0)) &&
            (iVar4 = FUN_14047d370(), iVar4 != 0)))))) {
        plVar12 = *(longlong **)(*(longlong *)(param_3 + 0xf00) + 0x16e8);
        (**(code **)(*plVar12 + 0x4e8))(plVar12,0);
        *(undefined4 *)(param_3 + 0x1318) = extraout_XMM0_Da;
    }
    if ((*(longlong *)(param_3 + 0x16e0) != 0) &&
        (lVar8 = lVar10, lVar16 = lVar10, *(longlong *)(param_3 + 0x16e8) != 0)) {
        do {
            puVar15 = (undefined4 *)(*(longlong *)(param_3 + 0x16d8) + lVar8);
            lVar9 = FUN_140561c30(DAT_140c65b70,*puVar15);
            if (lVar9 != 0) {
                FUN_140541130(lVar9,2,puVar15);
            }
            FUN_14018b900(*(undefined8 *)(puVar15 + 6));
            FUN_14018b900();
            lVar16 = lVar16 + 1;
            lVar8 = lVar8 + 0x58;
        } while (lVar16 != *(longlong *)(param_3 + 0x16e0));
        *(undefined8 *)(param_3 + 0x16e0) = 0;
    }
    lVar8 = DAT_140c65898;
    fVar26 = 0.0;
    if ((0.0 < *(float *)(param_3 + 0x3608)) &&
        (fVar17 = *(float *)(param_3 + 0x3608) - param_2, *(float *)(param_3 + 0x3608) = fVar17,
                fVar17 < 0.0)) {
        *(undefined4 *)(param_3 + 0x3608) = 0;
        *(undefined4 *)(param_3 + 0x18a8) = 1;
        if ((*(longlong *)(lVar8 + 0x78) != 0) &&
            (*(int *)(param_3 + 8) == *(int *)(*(longlong *)(lVar8 + 0x78) + 8))) {
            *(undefined4 *)(lVar8 + 0x6f98) = 1;
        }
    }
    if (((*(longlong *)(lVar8 + 0x78) == 0) ||
         (*(int *)(param_3 + 8) != *(int *)(*(longlong *)(lVar8 + 0x78) + 8))) &&
        ((*(longlong *)(lVar8 + 0x6490) == 0 ||
          (*(int *)(param_3 + 8) != *(int *)(*(longlong *)(lVar8 + 0x6490) + 8))))) {
        bVar1 = bVar2;
        if ((*(int *)(lVar8 + 0x6f98) == 0) && (*(int *)(param_3 + 0x18a8) == 0)) {
            lVar10 = 0;
        }
        else {
            lVar10 = 1;
        }
    }
    else {
        bVar1 = true;
    }
    FUN_14046c300(param_3,lVar10,0);
    fVar17 = 2.0;
    if (!bVar1) {
        if (*(longlong *)(*(longlong *)(param_3 + 0x1908) + 0x40) != 0) {
            FUN_140396940();
        }
        iVar4 = FUN_1403a64f0();
        uVar7 = DAT_140c658d8;
        if (iVar4 != 0) {
            *(undefined4 *)(DAT_140c65898 + 0x66e0) = 1;
            FUN_140437a10(uVar7,0x90,0,0,0,0,1);
        }
        if ((((*(int *)(param_3 + 0x80) == 0x12) && (iVar4 = FUN_1403a6440(), iVar4 != 0)) &&
             (lVar10 = FUN_1403967f0(), lVar10 != 0)) &&
            (((*(longlong *)(lVar10 + 0x30) != 0 &&
               ((*(byte *)(*(longlong *)(lVar10 + 0x30) + 8) & 4) == 0)) || (*(int *)(lVar10 + 0xc) == 2))
            )) {
            lVar10 = *(longlong *)(DAT_140c65898 + 0x78);
            if ((DAT_140dc28c0 & 1) == 0) {
                DAT_140dc28c0 = DAT_140dc28c0 | 1;
                lVar8 = FUN_140200220();
                _DAT_140dc28c4 = fVar17;
                if (lVar8 != 0) {
                    _DAT_140dc28c4 = *(float *)(lVar8 + 0x18);
                }
            }
            if (lVar10 != 0) {
                lVar10 = *(longlong *)(lVar10 + 0xd08);
                if (lVar10 == 0) {
                    lVar10 = FUN_14022d500();
                    fVar20 = fVar26;
                    if (lVar10 != 0) {
                        fVar20 = *(float *)(lVar10 + 0x28);
                    }
                }
                else {
                    FUN_14047a940();
                    fVar20 = extraout_XMM0_Da_00 * *(float *)(lVar10 + 0x8c);
                }
                fVar20 = fVar20 * _DAT_140dc28c4;
                FUN_1403a2250();
                if (extraout_XMM0_Da_01 <= fVar20) {
                    FUN_14039cff0();
                }
            }
        }
    }
    if ((DAT_140dc28c0 & 2) == 0) {
        DAT_140dc28c0 = DAT_140dc28c0 | 2;
        lVar10 = FUN_140200220();
        if (lVar10 == 0) {
            DAT_140dc28c8 = 0.15;
        }
        else {
            DAT_140dc28c8 = *(float *)(lVar10 + 0x18);
        }
    }
    uVar6 = DAT_140dc28c0;
    if (1e-05 < *(float *)(param_3 + 0x35c8)) {
        fVar20 = *(float *)(param_3 + 0x35c8) - param_2 / (DAT_140dc28c8 * fVar17);
        if (fVar20 <= fVar26) {
            fVar20 = fVar26;
        }
        *(float *)(param_3 + 0x35c8) = fVar20;
    }
    piVar3 = DAT_140c63750;
    plVar12 = *(longlong **)(param_3 + 0x16f0);
    if (plVar12 == (longlong *)0x0) {
        plVar12 = *(longlong **)(param_3 + 0x16f8);
    }
    fVar20 = 1.0;
    fVar28 = 0.5;
    if (plVar12 != (longlong *)0x0) {
        fVar21 = 0.0;
        fVar23 = 0.0;
        fVar24 = 0.0;
        fVar25 = 1.0;
        fVar18 = *(float *)(param_3 + 0x35c8);
        local_c8._0_12_ = ZEXT412(0);
        local_c8 = CONCAT412(0x3f800000,local_c8._0_12_);
        if (1e-05 < fVar18) {
            if (param_3 == *(longlong *)(DAT_140c65898 + 0x78)) {
                iVar4 = DAT_140c47a90;
                if (*DAT_140c63750 < DAT_140c47a90) {
                    iVar4 = *DAT_140c63750;
                }
                puVar13 = &DAT_140c47aa0;
            }
            else {
                iVar4 = DAT_140c47b50;
                if (*DAT_140c63750 < DAT_140c47b50) {
                    iVar4 = *DAT_140c63750;
                }
                puVar13 = &DAT_140c47b60;
            }
            pfVar11 = (float *)(puVar13 + (longlong)iVar4 * 0x10);
            fVar21 = *pfVar11 * fVar18 + 0.0;
            fVar23 = pfVar11[1] * fVar18 + 0.0;
            fVar24 = pfVar11[2] * fVar18 + 0.0;
            fVar25 = pfVar11[3] * fVar18 + 1.0;
            local_c8 = CONCAT412(fVar25,CONCAT48(fVar24,CONCAT44(fVar23,fVar21)));
        }
        if (*(int *)(param_3 + 0x35c0) == 0) {
            *(undefined4 *)(param_3 + 0x35c4) = 0;
        }
        else {
            iVar4 = DAT_140c47970;
            if (*DAT_140c63750 < DAT_140c47970) {
                iVar4 = *DAT_140c63750;
            }
            *(float *)(param_3 + 0x35c4) =
                    param_2 * *(float *)(&DAT_140c47980 + (longlong)iVar4 * 4) + *(float *)(param_3 + 0x35c4)
                    ;
            iVar4 = *piVar3;
            FUN_1408fe3d0();
            iVar5 = DAT_140c479d0;
            if (iVar4 < DAT_140c479d0) {
                iVar5 = iVar4;
            }
            fVar18 = (extraout_XMM0_Da_02 + fVar20) * fVar28;
            lVar10 = (longlong)iVar5 * 0x10;
            local_c8 = CONCAT412(fVar18 * *(float *)(lVar10 + 0x140c479ec) + fVar25,
                                 CONCAT48(fVar18 * *(float *)(lVar10 + 0x140c479e8) + fVar24,
                                          CONCAT44(fVar18 * *(float *)(lVar10 + 0x140c479e4) + fVar23,
                                                   fVar18 * *(float *)(&DAT_140c479e0 + lVar10) + fVar21))
            );
        }
        (**(code **)(*plVar12 + 0xd8))();
        uVar6 = DAT_140dc28c0;
    }
    if (*(longlong *)(param_3 + 0x16f0) == 0) {
        return 0;
    }
    lVar10 = *(longlong *)(DAT_140c65898 + 0x6490);
    if (*(int *)(param_3 + 0x214) == 0) {
        if ((*(longlong *)(DAT_140c65898 + 0x71a8) == 0) ||
            (*(int *)(*(longlong *)(DAT_140c65898 + 0x71a8) + 0x2b8) == 0)) {
            if (lVar10 == param_3) {
                iVar4 = DAT_140c47870;
                if (*DAT_140c63750 < DAT_140c47870) {
                    iVar4 = *DAT_140c63750;
                }
                if ((*(float *)(*(longlong *)(DAT_140c65898 + 0x71a0) + 0x2a0) <=
                     *(float *)(&DAT_140c47880 + (longlong)iVar4 * 4)) &&
                    (iVar4 = FUN_14047bdc0(), uVar6 = DAT_140dc28c0, iVar4 == 0)) goto LAB_140459bf4;
            }
            FUN_14047b6d0();
            uVar6 = DAT_140dc28c0;
        }
        else if ((*(uint *)(param_3 + 8) & 0xc0000000) != 0x40000000) {
            if (*(int *)(param_3 + 0x80) == 0x14) {
                iVar4 = *(int *)(*(longlong *)(DAT_140c65898 + 0x7198) + 0x30);
            }
            else {
                iVar4 = *(int *)(*(longlong *)(DAT_140c65898 + 0x7198) + 0x2c);
            }
            if (iVar4 != 0) {
                FUN_140482550();
            }
        }
    }
    LAB_140459bf4:
    if (lVar10 == 0) goto LAB_14045a47c;
    if (0 < *(int *)(param_3 + 0x54)) {
        uVar22 = 0x3e99999a;
        if ((uVar6 & 4) == 0) {
            DAT_140dc28c0 = uVar6 | 4;
            lVar8 = FUN_140200220();
            uVar6 = DAT_140dc28c0;
            DAT_140dc28cc = uVar22;
            if (lVar8 != 0) {
                DAT_140dc28cc = *(undefined4 *)(lVar8 + 0x18);
            }
        }
        if ((uVar6 & 8) == 0) {
            DAT_140dc28c0 = uVar6 | 8;
            lVar8 = FUN_140200220();
            uVar6 = DAT_140dc28c0;
            if (lVar8 == 0) {
                DAT_140dc28d0 = 0x3f19999a;
            }
            else {
                DAT_140dc28d0 = *(undefined4 *)(lVar8 + 0x18);
            }
        }
        uVar27 = 0x3e4ccccd;
        if ((uVar6 & 0x10) == 0) {
            DAT_140dc28c0 = uVar6 | 0x10;
            lVar8 = FUN_140200220();
            uVar6 = DAT_140dc28c0;
            DAT_140dc28d4 = uVar27;
            if (lVar8 != 0) {
                DAT_140dc28d4 = *(undefined4 *)(lVar8 + 0x18);
            }
        }
        if ((uVar6 & 0x20) == 0) {
            DAT_140dc28c0 = uVar6 | 0x20;
            lVar8 = FUN_140200220();
            if (lVar8 == 0) {
                iVar4 = 1000;
            }
            else {
                iVar4 = *(int *)(lVar8 + 4);
            }
            _DAT_140dc28d8 = (float)iVar4;
            uVar6 = DAT_140dc28c0;
        }
        if ((uVar6 & 0x40) == 0) {
            DAT_140dc28c0 = uVar6 | 0x40;
            lVar8 = FUN_140200220();
            uVar6 = DAT_140dc28c0;
            DAT_140dc28dc = uVar22;
            if (lVar8 != 0) {
                DAT_140dc28dc = *(undefined4 *)(lVar8 + 0x18);
            }
        }
        if (-1 < (char)uVar6) {
            DAT_140dc28c0 = uVar6 | 0x80;
            lVar8 = FUN_140200220();
            uVar6 = DAT_140dc28c0;
            if (lVar8 == 0) {
                _DAT_140dc28e0 = 0x3dcccccd;
            }
            else {
                _DAT_140dc28e0 = *(undefined4 *)(lVar8 + 0x18);
            }
        }
        if ((uVar6 >> 8 & 1) == 0) {
            DAT_140dc28c0 = uVar6 | 0x100;
            lVar8 = FUN_140200220();
            uVar6 = DAT_140dc28c0;
            DAT_140dc28e4 = fVar20;
            if (lVar8 != 0) {
                DAT_140dc28e4 = *(float *)(lVar8 + 0x18);
            }
        }
        if ((uVar6 >> 9 & 1) == 0) {
            DAT_140dc28c0 = uVar6 | 0x200;
            lVar8 = FUN_140200220();
            uVar6 = DAT_140dc28c0;
            DAT_140dc28e8 = fVar26;
            if (lVar8 != 0) {
                DAT_140dc28e8 = *(float *)(lVar8 + 0x1c);
            }
        }
        if ((uVar6 >> 10 & 1) == 0) {
            DAT_140dc28c0 = uVar6 | 0x400;
            lVar8 = FUN_140200220();
            uVar6 = DAT_140dc28c0;
            _DAT_140dc28ec = fVar17;
            if (lVar8 != 0) {
                _DAT_140dc28ec = *(float *)(lVar8 + 0x18);
            }
        }
        if ((uVar6 >> 0xb & 1) == 0) {
            DAT_140dc28c0 = uVar6 | 0x800;
            lVar8 = FUN_140200220();
            uVar6 = DAT_140dc28c0;
            DAT_140dc28f0 = fVar28;
            if (lVar8 != 0) {
                DAT_140dc28f0 = *(float *)(lVar8 + 0x18);
            }
        }
        if ((uVar6 >> 0xc & 1) == 0) {
            DAT_140dc28c0 = uVar6 | 0x1000;
            lVar8 = FUN_140200220();
            DAT_140dc28f4 = uVar27;
            if (lVar8 != 0) {
                DAT_140dc28f4 = *(undefined4 *)(lVar8 + 0x18);
            }
        }
        if ((param_3 != lVar10) && (param_3 != *(longlong *)(DAT_140c65898 + 0x78))) {
            FUN_14045a950(lVar10,*(undefined4 *)(param_3 + 8));
        }
        if (*(int *)(param_3 + 0x54) == 1) {
            fVar17 = (float)(ulonglong)(uint)(DAT_140c636a8 - *(int *)(param_3 + 0x210)) / _DAT_140dc28d8;
            if (fVar20 <= fVar17) {
                fVar17 = fVar20;
            }
            fVar28 = fVar26;
            if (fVar26 <= fVar17) {
                fVar28 = fVar17;
            }
            if (fVar20 - fVar28 == fVar26) {
                *(undefined4 *)(param_3 + 0x210) = 0;
                *(undefined4 *)(param_3 + 0x54) = 0;
                if (*(longlong *)(param_3 + 0xcc0) != 0) {
                    uVar6 = FUN_140467ed0();
                    *(uint *)(param_3 + 0x142c) = *(uint *)(param_3 + 0x142c) | 0x20;
                    LAB_14045a118:
                    uVar14 = *(uint *)(param_3 + 0x142c);
                    if (((uVar6 & 0xfffffff6) == 0) && (uVar6 != 1)) {
                        uVar14 = 0x3f;
                    }
                    if (*(uint *)(param_3 + 0x1428) != uVar14) {
                        if (uVar14 == 0x3f) {
                            FUN_140195d70(param_3 + 0x1430);
                            FUN_140195d70(param_3 + 0x1478);
                            (**(code **)(**(longlong **)(param_3 + 0xcc0) + 0xa8))
                                    (*(longlong **)(param_3 + 0xcc0),3,3);
                            *(undefined4 *)(param_3 + 0x14c0) = 1;
                            if (*(longlong *)(param_3 + 0x16e8) != 0) {
                                FUN_140471ef0(param_3,1,1);
                                FUN_140471ef0(param_3,1,0);
                            }
                        }
                        else if (*(uint *)(param_3 + 0x1428) == 0x3f) {
                            local_b8[0] = 0;
                            local_a8 = FUN_140471e50;
                            local_a0 = 0;
                            local_b0 = param_3;
                            FUN_140195960(param_3 + 0x1430,0x96,local_b8,4);
                            local_a8 = FUN_140471ea0;
                            local_b8[0] = 0;
                            local_a0 = 0;
                            local_b0 = param_3;
                            FUN_140195960(param_3 + 0x1478,0x96,local_b8,4);
                            *(undefined4 *)(param_3 + 0x14c0) = 1;
                        }
                        if ((uVar14 & 4) != 0) {
                            FUN_140195d70();
                        }
                        if ((uVar14 & 0x10) != 0) {
                            FUN_140195d70();
                        }
                        *(uint *)(param_3 + 0x1428) = uVar14;
                    }
                }
            }
        }
        else if (*(int *)(param_3 + 0x54) == 2) {
            fVar17 = (float)(ulonglong)(uint)(DAT_140c636a8 - *(int *)(param_3 + 0x210)) / _DAT_140dc28d8;
            if (fVar20 <= fVar17) {
                fVar17 = fVar20;
            }
            if (fVar26 <= fVar17) {
                fVar26 = fVar17;
            }
            if (fVar26 == fVar20) {
                *(undefined4 *)(param_3 + 0x210) = 0;
                *(undefined4 *)(param_3 + 0x54) = 3;
                if (*(longlong *)(param_3 + 0xcc0) != 0) {
                    uVar6 = FUN_140467ed0();
                    *(uint *)(param_3 + 0x142c) = *(uint *)(param_3 + 0x142c) & 0xffffffdf;
                    goto LAB_14045a118;
                }
            }
        }
    }
    bVar1 = true;
    if (((*(longlong *)(DAT_140c65898 + 0x78) == 0) ||
         (*(int *)(param_3 + 8) != *(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 8))) &&
        ((*(longlong *)(DAT_140c65898 + 0x6490) == 0 ||
          (*(int *)(param_3 + 8) != *(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 8))))) {
        bVar1 = bVar2;
    }
    lVar8 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_3 + 0xc0));
    if ((((lVar8 == 0) || (*(int *)(lVar8 + 0x80) != 3)) &&
         ((lVar8 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_3 + 0xc0)), lVar8 == 0 ||
                                                                                 (*(int *)(lVar8 + 0x80) != 7)))) ||
        ((*(longlong *)(param_3 + 0x16e8) == 0 ||
          (lVar8 = FUN_14047b6d0(param_3), *(longlong *)(lVar8 + 0x16e8) == 0)))) {
        if ((bVar1) ||
            (((iVar4 = FUN_1403b48b0(param_3), iVar4 == 0 || (iVar4 = FUN_1403b48b0(lVar10), iVar4 == 0))
              || (iVar4 = FUN_14045a950(lVar10,*(undefined4 *)(param_3 + 8)), iVar4 != 0)))) {
            fVar26 = 1.0;
            fVar17 = 1.0;
            uVar22 = 0x3f800000;
            fVar20 = 1.0;
            pfVar11 = (float *)(**(code **)(**(longlong **)(param_3 + 0x16f0) + 0xc0))();
            auVar19 = CONCAT412(-(uint)(pfVar11[3] != in_xmmTmp2_Dd),
                                CONCAT48(-(uint)(pfVar11[2] != fVar20),
                                         CONCAT44(-(uint)(pfVar11[1] != fVar17),
                                                  -(uint)(*pfVar11 != fVar26))));
            iVar4 = movmskps((int)pfVar11,auVar19);
            if (iVar4 == 0) goto LAB_14045a47c;
            local_c8 = auVar19 & (undefined  [16])0x0;
            (**(code **)(**(longlong **)(param_3 + 0x16f0) + 0xd8))
                    (*(longlong **)(param_3 + 0x16f0),local_c8);
            local_c8 = CONCAT412(fVar20,CONCAT48(uVar22,CONCAT44(fVar17,fVar26)));
        }
        else {
            fVar26 = *(float *)(param_3 + 0x11e0) - *(float *)(lVar10 + 0x11e0);
            fVar17 = *(float *)(param_3 + 0x11e4) - *(float *)(lVar10 + 0x11e4);
            fVar26 = fVar26 * fVar26 + fVar17 * fVar17 + 0.0;
            if (2048.0 <= fVar26) {
                fVar26 = 2048.0;
            }
            fVar17 = 32.0;
            if (32.0 <= fVar26) {
                fVar17 = fVar26;
            }
            fVar26 = (fVar17 - 32.0) * 0.0004960318;
            local_c8 = CONCAT412(fVar26 * 1.0,CONCAT48(fVar26 * 0.0,CONCAT44(fVar26 * 0.0,fVar26 * 1.0)));
            (**(code **)(**(longlong **)(param_3 + 0x16f0) + 0xd8))
                    (*(longlong **)(param_3 + 0x16f0),local_c8);
            local_c8 = CONCAT412(fVar20,CONCAT48(fVar20 - fVar26,CONCAT44(fVar20 - fVar26,fVar20)));
        }
        (**(code **)(**(longlong **)(param_3 + 0x16f0) + 200))
                (*(longlong **)(param_3 + 0x16f0),local_c8);
    }
    else {
        local_c8 = extraout_XMM0 & (undefined  [16])0x0;
        (**(code **)(**(longlong **)(param_3 + 0x16e8) + 0xc0))
                (*(longlong **)(param_3 + 0x16e8),local_c8);
        local_c8._0_12_ = CONCAT48(0x3f800000,0x3f8000003f800000);
        local_c8 = CONCAT412(0x3f800000,local_c8._0_12_);
        (**(code **)(**(longlong **)(param_3 + 0x16e8) + 0xb0))
                (*(longlong **)(param_3 + 0x16e8),local_c8);
        FUN_14047b6d0(param_3);
    }
    LAB_14045a47c:
    (**(code **)(**(longlong **)(param_3 + 0x16f0) + 0x98))();
    (**(code **)(**(longlong **)(param_3 + 0x16f0) + 0xa8))();
    plVar12 = (longlong *)FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_3 + 0xc0));
    if (((plVar12 != (longlong *)0x0) && (iVar4 = (**(code **)(*plVar12 + 0x20))(plVar12), iVar4 != 0)
        ) && (lVar10 = (**(code **)(**(longlong **)(param_3 + 0x16f0) + 0x148))(), lVar10 != 0)) {
        plVar12 = (longlong *)(**(code **)(**(longlong **)(param_3 + 0x16f0) + 0x148))();
        (**(code **)(*plVar12 + 0x70))(plVar12);
        plVar12 = (longlong *)(**(code **)(**(longlong **)(param_3 + 0x16f0) + 0x148))();
        (**(code **)(*plVar12 + 0x80))(plVar12);
    }
    return 0;
}



undefined8
FUN_14045a590(float param_1,float param_2,longlong param_3,undefined8 param_4,undefined8 param_5,
              undefined8 param_6)

{
    undefined4 uVar1;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar2 [16];

    auVar2 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    if ((*(uint *)(param_3 + 0x1070) & 0x100) != 0) {
        param_1 = (float)FUN_1408fc7f0(param_2 * -0.6931472 * 12.0);
        *(float *)(param_3 + 0x1728) =
                (*(float *)(param_3 + 0x1728) - *(float *)(param_3 + 0x1774)) * param_1 +
                *(float *)(param_3 + 0x1774);
    }
    if ((*(longlong **)(param_3 + 0x16e8) != (longlong *)0x0) &&
        (*(longlong *)(param_3 + 0x16f8) == 0)) {
        (**(code **)(**(longlong **)(param_3 + 0x16e8) + 0xa0))
                (param_1,*(undefined4 *)(param_3 + 0x1728));
    }
    uVar1 = FUN_14046cdc0(param_3,0,0,param_6,auVar2);
    uVar1 = FUN_14046f1c0(uVar1,param_2,param_3);
    FUN_140469650(uVar1,param_2,param_3);
    return 0;
}



undefined8 FUN_14045a640(undefined8 param_1,undefined8 param_2,longlong param_3)

{
    int iVar1;
    undefined8 uVar2;
    undefined8 extraout_XMM0_Qa;
    undefined8 extraout_XMM0_Qa_00;
    undefined8 extraout_XMM0_Qa_01;
    undefined8 extraout_XMM0_Qa_02;
    float fVar3;
    float fVar4;

    FUN_140472f70();
    if ((*(longlong *)(param_3 + 0x1828) != 0) || (*(longlong *)(param_3 + 0x1848) != 0)) {
        FUN_1404762c0(param_3);
    }
    uVar2 = FUN_14062a160(DAT_140c65898 + 0x6bc8,param_3);
    fVar4 = 0.0;
    if ((*(char *)(param_3 + 0x2574) != '\0') && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        fVar3 = *(float *)(param_3 + 0x2580);
        if (fVar3 <= 0.0) {
            fVar3 = 5.0;
        }
        iVar1 = FUN_1403ad690(uVar2,param_2,0,fVar3,*(longlong *)(DAT_140c65898 + 0x78),param_3);
        uVar2 = extraout_XMM0_Qa;
        if (iVar1 != 0) {
            uVar2 = FUN_1404824c0();
        }
    }
    if ((*(char *)(param_3 + 0x318c) != '\0') && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        fVar3 = *(float *)(param_3 + 0x3198);
        if (fVar3 <= fVar4) {
            fVar3 = 5.0;
        }
        iVar1 = FUN_1403ad690(uVar2,param_2,fVar4,fVar3,*(longlong *)(DAT_140c65898 + 0x78),param_3);
        uVar2 = extraout_XMM0_Qa_00;
        if (iVar1 != 0) {
            uVar2 = FUN_1404824c0();
        }
    }
    if ((*(char *)(param_3 + 0x2f4c) != '\0') && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        fVar3 = *(float *)(param_3 + 0x2f58);
        if (fVar3 <= fVar4) {
            fVar3 = 5.0;
        }
        iVar1 = FUN_1403ad690(uVar2,param_2,fVar4,fVar3,*(longlong *)(DAT_140c65898 + 0x78),param_3);
        uVar2 = extraout_XMM0_Qa_01;
        if (iVar1 != 0) {
            uVar2 = FUN_1404824c0();
        }
    }
    if ((*(char *)(param_3 + 0x30fc) != '\0') && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        fVar3 = *(float *)(param_3 + 0x3108);
        if (fVar3 <= fVar4) {
            fVar3 = 5.0;
        }
        iVar1 = FUN_1403ad690(uVar2,param_2,fVar4,fVar3,*(longlong *)(DAT_140c65898 + 0x78),param_3);
        uVar2 = extraout_XMM0_Qa_02;
        if (iVar1 != 0) {
            uVar2 = FUN_1404824c0();
        }
    }
    if ((*(char *)(param_3 + 0x2bec) != '\0') && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        fVar3 = *(float *)(param_3 + 0x2bf8);
        if (fVar3 <= fVar4) {
            fVar3 = 5.0;
        }
        iVar1 = FUN_1403ad690(uVar2,param_2,fVar4,fVar3,*(longlong *)(DAT_140c65898 + 0x78),param_3);
        if (iVar1 != 0) {
            FUN_1404824c0();
        }
    }
    FUN_14047f770(param_3);
    return 0;
}



undefined8 FUN_14045a840(longlong param_1,int param_2,int param_3)

{
    longlong lVar1;
    longlong lVar2;

    if (param_3 != 0) {
        *(int *)(param_1 + 0xe8) = param_2;
    }
    if (*(int *)(param_1 + 0xd8) != param_2) {
        *(int *)(param_1 + 0xd8) = param_2;
        lVar2 = DAT_140c65898;
        *(undefined4 *)(param_1 + 0x18a8) = 1;
        lVar1 = *(longlong *)(lVar2 + 0x78);
        if ((lVar1 != 0) && (*(int *)(param_1 + 8) == *(int *)(lVar1 + 8))) {
            *(undefined4 *)(lVar2 + 0x6f98) = 1;
        }
        FUN_14045aec0(param_1);
    }
    return 0;
}



undefined8 FUN_14045a8b0(longlong param_1,undefined4 param_2)

{
    longlong lVar1;

    lVar1 = FUN_1401f31e0(param_2);
    *(undefined4 *)(param_1 + 0xdc) = param_2;
    if (lVar1 != 0) {
        *(longlong *)(param_1 + 0xe0) = lVar1;
    }
    return 0;
}



undefined8 FUN_14045a8f0(longlong param_1,int param_2,int param_3)

{
    longlong lVar1;
    longlong lVar2;

    if (param_3 != 0) {
        *(int *)(param_1 + 0xec) = param_2;
    }
    if (*(int *)(param_1 + 0x34) != param_2) {
        *(int *)(param_1 + 0x34) = param_2;
        lVar2 = DAT_140c65898;
        *(undefined4 *)(param_1 + 0x18a8) = 1;
        lVar1 = *(longlong *)(lVar2 + 0x78);
        if ((lVar1 != 0) && (*(int *)(param_1 + 8) == *(int *)(lVar1 + 8))) {
            *(undefined4 *)(lVar2 + 0x6f98) = 1;
        }
        FUN_14045aec0(param_1);
    }
    return 0;
}



undefined8 FUN_14045a950(ulonglong param_1)

{
    ulonglong uVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    undefined8 uVar8;
    longlong *plVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    longlong local_res18;

    uVar5 = FUN_1403d90d0(DAT_140c65898);
    if (uVar5 == 0) {
        return 1;
    }
    uVar6 = param_1;
    uVar11 = param_1;
    if ((((*(int *)(param_1 + 0x80) == 0x14) || (*(int *)(param_1 + 0x80) == 0x17)) ||
         ((uVar6 = FUN_1403d90d0(), uVar6 != 0 &&
                                    ((*(int *)(uVar6 + 0x80) == 0x14 || (*(int *)(uVar6 + 0x80) == 0x17)))))) && (uVar6 != 0)) {
        uVar11 = uVar6;
    }
    uVar6 = uVar5;
    uVar10 = uVar5;
    if ((((*(int *)(uVar5 + 0x80) == 0x14) || (*(int *)(uVar5 + 0x80) == 0x17)) ||
         ((uVar6 = FUN_1403d90d0(), uVar6 != 0 &&
                                    ((*(int *)(uVar6 + 0x80) == 0x14 || (*(int *)(uVar6 + 0x80) == 0x17)))))) && (uVar6 != 0)) {
        uVar10 = uVar6;
    }
    uVar7 = 0;
    uVar6 = uVar7;
    if (*(longlong **)(uVar10 + 0x118) != (longlong *)0x0) {
        uVar6 = (**(code **)(**(longlong **)(uVar10 + 0x118) + 0x18))();
        uVar6 = uVar6 & 0xffffffff;
    }
    uVar1 = *(ulonglong *)(DAT_140c65898 + 0x78);
    if (((uVar1 == uVar10) || (uVar1 == uVar11)) && (*(int *)(DAT_140c65898 + 0x6ee4) == 3)) {
        if (*(int *)(DAT_140c65898 + 0x6ee0) != 0) {
            uVar7 = FUN_1403d90d0(DAT_140c65898);
        }
        if (uVar7 == uVar10) {
            return 0;
        }
        if (uVar7 == uVar11) {
            return 0;
        }
    }
    lVar2 = *(longlong *)(uVar5 + 0x150);
    local_res18 = lVar2;
    lVar3 = *(longlong *)(lVar2 + 8);
    while (lVar3 != 0) {
        if (*(uint *)(lVar3 + 0x20) < *(uint *)(param_1 + 8)) {
            lVar3 = *(longlong *)(lVar3 + 0x18);
        }
        else {
            local_res18 = lVar3;
            lVar3 = *(longlong *)(lVar3 + 0x10);
        }
    }
    if ((local_res18 == lVar2) || (*(uint *)(param_1 + 8) < *(uint *)(local_res18 + 0x20))) {
        local_res18 = lVar2;
    }
    if ((local_res18 != lVar2) && (*(int *)(local_res18 + 0x24) != 0)) {
        return 0;
    }
    if ((*(longlong *)(DAT_140c65898 + 0x78) == 0) ||
        (((iVar4 = FUN_1403b48b0(), iVar4 == 0 || (uVar1 != uVar11)) ||
          (plVar9 = *(longlong **)(uVar11 + 0x118), plVar9 == (longlong *)0x0)))) {
        if (*(longlong *)(param_1 + 0x118) == 0) {
            return 1;
        }
        if (((uVar1 == param_1) && (DAT_140c65b70 != (longlong *)0x0)) &&
            (iVar4 = (**(code **)(*DAT_140c65b70 + 0x48))
                    (DAT_140c65b70,*(undefined4 *)(uVar1 + 8),*(undefined4 *)(uVar10 + 8)),
                    iVar4 != 0)) {
            return 2;
        }
        plVar9 = *(longlong **)(param_1 + 0x118);
    }
    uVar8 = (**(code **)(*plVar9 + 0x30))(plVar9,uVar6);
    return uVar8;
}



void FUN_14045ab70(longlong param_1,int param_2)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    undefined8 local_res8;

    if ((*(longlong **)(param_1 + 0x118) != (longlong *)0x0) &&
        (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x18))(), iVar3 == param_2)) {
        return;
    }
    if ((*(longlong **)(param_1 + 0x110) == (longlong *)0x0) ||
        (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x18))(), iVar3 != param_2)) {
        if (DAT_140c665d0 == 0) {
            return;
        }
        iVar3 = FUN_140716fa0();
        if (iVar3 < 0) {
            return;
        }
        if (*(longlong **)(param_1 + 0x118) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x118) + 8))();
            *(undefined8 *)(param_1 + 0x118) = 0;
        }
        *(undefined8 *)(param_1 + 0x118) = local_res8;
    }
    else {
        if (*(longlong **)(param_1 + 0x118) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x118) + 8))();
            *(undefined8 *)(param_1 + 0x118) = 0;
        }
        *(undefined8 **)(param_1 + 0x118) = *(undefined8 **)(param_1 + 0x110);
        (**(code **)**(undefined8 **)(param_1 + 0x110))();
    }
    lVar2 = DAT_140c65898;
    *(undefined4 *)(param_1 + 0x18a8) = 1;
    lVar1 = *(longlong *)(lVar2 + 0x78);
    if ((lVar1 != 0) && (*(int *)(param_1 + 8) == *(int *)(lVar1 + 8))) {
        *(undefined4 *)(lVar2 + 0x6f98) = 1;
    }
    return;
}



void FUN_14045ac60(longlong param_1,undefined8 param_2)

{
    int iVar1;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    if ((*(longlong *)(param_1 + 0x110) == 0) && (*(longlong *)(param_1 + 0x118) == 0)) {
        if (DAT_140c665d0 != 0) {
            iVar1 = FUN_140716fa0(param_1,param_2,param_1 + 0x110);
            if (-1 < iVar1) {
                *(undefined8 **)(param_1 + 0x118) = *(undefined8 **)(param_1 + 0x110);
                // WARNING: Could not recover jumptable at 0x00014045acc1. Too many branches
                // WARNING: Treating indirect jump as call
                (**(code **)**(undefined8 **)(param_1 + 0x110))();
                return;
            }
        }
    }
    else {
        local_40 = 0;
        local_48 = &PTR_LAB_140b5e648;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_48);
        local_28 = local_48;
        local_20 = local_40;
        local_res8 = 0x141e02310;
        local_18 = local_38;
        iVar1 = FUN_140196f30(&DAT_140c8ac6c,0x28,&local_res8,*(undefined4 *)(param_1 + 8),&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar1 != 0) {
            DebugBreak();
        }
    }
    return;
}



void FUN_14045ad90(longlong param_1,int param_2)

{
    undefined4 uVar1;
    int iVar2;

    if (*(longlong *)(param_1 + 0x138) != 0) {
        FUN_1403dea10(DAT_140c65898,param_1);
    }
    if (param_2 != 0) {
        if (*(longlong **)(param_1 + 0x118) == (longlong *)0x0) {
            uVar1 = 0;
        }
        else {
            uVar1 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x18))();
        }
        *(ulonglong *)(param_1 + 0x138) = CONCAT44(uVar1,param_2);
        iVar2 = FUN_1403de8c0(CONCAT44(uVar1,param_2),param_2,*(undefined4 *)(param_1 + 8));
        if (-1 < iVar2) {
            return;
        }
    }
    *(undefined8 *)(param_1 + 0x138) = 0;
    return;
}



undefined8 FUN_14045ae10(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;

    lVar2 = *(longlong *)(param_1 + 0x15c0);
    do {
        if (lVar2 == 0) {
            lVar2 = *(longlong *)(param_1 + 0x15c8);
            do {
                if (lVar2 == 0) {
                    return 0;
                }
                lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + 0x1c8);
                if (lVar1 != 0) {
                    do {
                        if (((*(int *)(param_1 + 8) == *(int *)(lVar1 + 900)) && (*(int *)(lVar1 + 0x2a4) == 0))
                            && ((*(uint *)(lVar1 + 0x380) & 0x200) == 0)) {
                            return 1;
                        }
                        lVar1 = *(longlong *)(lVar1 + 8);
                    } while (lVar1 != 0);
                }
                lVar2 = *(longlong *)(lVar2 + 0x18);
            } while( true );
        }
        lVar1 = *(longlong *)(lVar2 + 0x1c8);
        if (lVar1 != 0) {
            do {
                if (((*(int *)(param_1 + 8) == *(int *)(lVar1 + 900)) && (*(int *)(lVar1 + 0x2a4) == 0)) &&
                    ((*(uint *)(lVar1 + 0x380) & 0x200) == 0)) {
                    return 1;
                }
                lVar1 = *(longlong *)(lVar1 + 8);
            } while (lVar1 != 0);
        }
        lVar2 = *(longlong *)(lVar2 + 0x10);
    } while( true );
}



void FUN_14045aec0(longlong param_1)

{
    int iVar1;
    longlong *plVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    longlong lVar5;
    longlong lVar6;
    undefined8 uVar7;

    lVar5 = FUN_14022d500(*(undefined4 *)(param_1 + 0xd8));
    plVar2 = *(longlong **)(param_1 + 0x1588);
    if (plVar2 != (longlong *)0x0) {
        if (*(int *)(param_1 + 0x34) == 0) {
            uVar3 = FUN_1400518a0(DAT_140c63628,0x3d,4,1);
            uVar7 = 0x3d;
            LAB_14045af3b:
            uVar4 = FUN_1400518a0(DAT_140c63628,uVar7,4);
            (**(code **)(*plVar2 + 0x48))(plVar2,uVar4,uVar3);
        }
        else if (*(int *)(param_1 + 0x34) == 1) {
            uVar3 = FUN_1400518a0(DAT_140c63628,0x3c,4,1);
            uVar7 = 0x3c;
            goto LAB_14045af3b;
        }
        if (lVar5 == 0) goto LAB_14045afca;
        lVar6 = FUN_1402358c0(*(undefined4 *)(lVar5 + 0x78));
        if (lVar6 != 0) {
            (**(code **)(**(longlong **)(param_1 + 0x1588) + 0x48))
                    (*(longlong **)(param_1 + 0x1588),*(undefined4 *)(lVar6 + 8),
                     *(undefined4 *)(lVar6 + 4));
        }
    }
    if (lVar5 != 0) {
        if (*(int *)(param_1 + 0x34) == 0) {
            *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(lVar5 + 0x44);
            return;
        }
        *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(lVar5 + 0x48);
        return;
    }
    LAB_14045afca:
    if (*(longlong *)(param_1 + 0x18) == 0) {
        *(undefined4 *)(param_1 + 0x134) = 0;
    }
    else {
        iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x124);
        *(int *)(param_1 + 0x134) = iVar1;
        if ((iVar1 == 0) && (*(longlong *)(param_1 + 0xd0) != 0)) {
            *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(*(longlong *)(param_1 + 0xd0) + 0xc);
            return;
        }
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14045b030(longlong param_1,short *param_2)

{
    ulonglong uVar1;
    short sVar2;
    short *psVar3;
    bool bVar4;
    short *psVar5;
    undefined8 *puVar6;
    undefined2 *puVar7;
    longlong lVar8;
    longlong *plVar9;
    longlong *plVar10;
    longlong lVar11;
    undefined8 *puVar12;
    undefined8 *puVar13;
    short *psVar14;
    undefined8 *puVar15;
    short *psVar16;
    longlong local_120;
    undefined **local_108;
    undefined local_100 [8];
    undefined2 *local_f8;
    undefined2 *local_f0;
    undefined local_48 [16];
    undefined2 *local_38;

    psVar14 = (short *)0x0;
    if ((*(int *)(param_1 + 0x80) == 0x1b) || (psVar5 = psVar14, *(int *)(param_1 + 0x80) == 0x1f)) {
        psVar5 = (short *)FUN_14034bdd0();
    }
    if (((param_2 == (short *)0x0) || (*param_2 == 0)) && (*(longlong *)(param_1 + 0x18) != 0)) {
        param_2 = (short *)FUN_14034bdd0();
    }
    if ((psVar5 == (short *)0x0) || (*psVar5 == 0)) {
        psVar5 = (short *)FUN_14034bdd0();
    }
    if ((param_2 == (short *)0x0) || (*param_2 == 0)) {
        param_2 = (short *)FUN_14034bdd0();
    }
    psVar3 = *(short **)(param_1 + 0x88);
    if (psVar3 != param_2) {
        if (((psVar3 != (short *)0x0) && (param_2 != (short *)0x0)) &&
            (sVar2 = *psVar3, psVar16 = psVar14, sVar2 == *param_2)) {
            do {
                if (sVar2 == 0) {
                    return;
                }
                sVar2 = psVar3[(longlong)psVar16 + 1];
                lVar8 = (longlong)psVar16 + 1;
                psVar16 = (short *)((longlong)psVar16 + 1);
            } while (sVar2 == param_2[lVar8]);
        }
        if ((psVar3 == (short *)0x0) || (bVar4 = true, *psVar3 == 0)) {
            bVar4 = false;
        }
        if (param_2 == (short *)0x0) {
            *(undefined8 *)(param_1 + 0x88) = 0;
        }
        else {
            sVar2 = *param_2;
            while (sVar2 != 0) {
                psVar14 = (short *)((longlong)psVar14 + 1);
                sVar2 = param_2[(longlong)psVar14];
            }
            puVar6 = (undefined8 *)FUN_14018b280((longlong)psVar14 * 2 + 0x12,0);
            if (puVar6 == (undefined8 *)0x0) {
                puVar6 = (undefined8 *)0x0;
            }
            else {
                *puVar6 = &PTR_LAB_140b55060;
                puVar6[1] = psVar14;
            }
            puVar6 = puVar6 + 2;
            FUN_1407db590(puVar6,param_2,(longlong)psVar14 * 2);
            *(undefined2 *)((longlong)psVar14 * 2 + (longlong)puVar6) = 0;
            *(undefined8 **)(param_1 + 0x88) = puVar6;
        }
        plVar10 = (longlong *)0x0;
        if (psVar3 != (short *)0x0) {
            (**(code **)(*(longlong *)(psVar3 + -8) + 8))(psVar3 + -8);
        }
        puVar6 = (undefined8 *)FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x2b0));
        FUN_1400b6f30(&local_108);
        local_48 = ZEXT816(0);
        local_108 = &PTR_FUN_140b69230;
        local_38 = (undefined2 *)0x0;
        puVar7 = (undefined2 *)FUN_14018b280(0x10);
        local_38 = puVar7 + 8;
        local_48 = CONCAT88(puVar7,puVar7);
        if (puVar7 != (undefined2 *)0x0) {
            *puVar7 = 0;
        }
        if (psVar5 == (short *)0x0) {
            if (local_f8 != local_f0) {
                *local_f8 = 0;
                local_f0 = local_f8;
            }
        }
        else {
            sVar2 = *psVar5;
            plVar9 = plVar10;
            while (sVar2 != 0) {
                plVar9 = (longlong *)((longlong)plVar9 + 1);
                sVar2 = psVar5[(longlong)plVar9];
            }
            FUN_14001c480(local_100,psVar5,psVar5 + (longlong)plVar9);
        }
        lVar8 = FUN_14018b280(0x60);
        plVar9 = plVar10;
        if (lVar8 != 0) {
            plVar9 = (longlong *)FUN_1404db7e0(lVar8,param_1);
        }
        local_120 = 0;
        do {
            psVar14 = &DAT_140b07cc2 + (longlong)plVar10;
            plVar10 = (longlong *)((longlong)plVar10 + 1);
        } while (*psVar14 != 0);
        lVar8 = (longlong)plVar10 * 2 >> 1;
        uVar1 = lVar8 + 1;
        if (uVar1 < 0x7fffffffffffffff) {
            local_120 = FUN_14018b280(uVar1 * 2,0);
        }
        lVar8 = lVar8 * 2;
        FUN_1407db590(local_120,&DAT_140b07cc0,lVar8);
        puVar7 = (undefined2 *)(lVar8 + local_120);
        if (puVar7 != (undefined2 *)0x0) {
            *puVar7 = 0;
        }
        FUN_1400b7480(&local_108,plVar9);
        (**(code **)(*plVar9 + 0x48))(plVar9);
        if (local_120 != 0) {
            FUN_14018b900();
        }
        if (puVar6 != (undefined8 *)0x0) {
            lVar8 = FUN_14018b280(0x60);
            if (lVar8 == 0) {
                plVar10 = (longlong *)0x0;
            }
            else {
                plVar10 = (longlong *)FUN_1404db7e0(lVar8,puVar6);
            }
            puVar6 = (undefined8 *)0x0;
            local_120 = 0;
            puVar15 = puVar6;
            do {
                lVar8 = (longlong)puVar15 + 1;
                puVar15 = (undefined8 *)((longlong)puVar15 + 1);
            } while (L"owner"[lVar8] != L'\0');
            lVar8 = (longlong)puVar15 * 2 >> 1;
            uVar1 = lVar8 + 1;
            if (uVar1 < 0x7fffffffffffffff) {
                local_120 = FUN_14018b280(uVar1 * 2,0);
            }
            lVar8 = lVar8 * 2;
            FUN_1407db590(local_120,L"owner",lVar8);
            puVar7 = (undefined2 *)(lVar8 + local_120);
            if (puVar7 != (undefined2 *)0x0) {
                *puVar7 = 0;
            }
            FUN_1400b7480(&local_108,plVar10);
            (**(code **)(*plVar10 + 0x48))(plVar10);
            if (local_120 != 0) {
                FUN_14018b900();
            }
        }
        lVar11 = FUN_1400b7660(&local_108);
        lVar8 = *(longlong *)(param_1 + 0x10);
        psVar14 = *(short **)(lVar11 + 8);
        if (psVar14 == (short *)0x0) {
            *(undefined8 **)(param_1 + 0x10) = puVar6;
        }
        else {
            sVar2 = *psVar14;
            puVar15 = puVar6;
            while (sVar2 != 0) {
                puVar15 = (undefined8 *)((longlong)puVar15 + 1);
                sVar2 = psVar14[(longlong)puVar15];
            }
            puVar12 = (undefined8 *)FUN_14018b280((longlong)puVar15 * 2 + 0x12,0);
            puVar13 = puVar6;
            if (puVar12 != (undefined8 *)0x0) {
                puVar12[1] = puVar15;
                *puVar12 = &PTR_LAB_140b55060;
                puVar13 = puVar12;
            }
            puVar13 = puVar13 + 2;
            FUN_1407db590(puVar13,psVar14,(longlong)puVar15 * 2);
            *(short *)((longlong)puVar13 + (longlong)puVar15 * 2) = (short)puVar6;
            *(undefined8 **)(param_1 + 0x10) = puVar13;
        }
        if (lVar8 != 0) {
            (**(code **)(*(longlong *)(lVar8 + -0x10) + 8))(lVar8 + -0x10);
        }
        if (local_48._0_8_ != 0) {
            FUN_14018b900();
        }
        FUN_1400b7390(&local_108);
        if (*(int *)(param_1 + 0x168) != 0) {
            FUN_14045b6f0(param_1);
        }
        if (bVar4) {
            puVar7 = &DAT_140b7b704;
            if (*(undefined2 **)(param_1 + 0x10) != (undefined2 *)0x0) {
                puVar7 = *(undefined2 **)(param_1 + 0x10);
            }
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"UnitNameChanged",&DAT_1409edde4,
                          *(undefined4 *)(param_1 + 8),puVar7);
        }
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_14045b550(longlong *param_1)

{
    uint uVar1;
    undefined4 uVar2;
    ulonglong uVar3;
    longlong lVar4;
    int iVar5;
    float fVar6;
    float fVar7;
    float fVar8;

    iVar5 = 0;
    if ((DAT_140dc28f8 & 1) == 0) {
        DAT_140dc28f8 = DAT_140dc28f8 | 1;
        _DAT_140dc2904 = 0;
    }
    uVar1 = *(uint *)((longlong)param_1 + 0x3c);
    if (uVar1 == 0) {
        uVar1 = *(uint *)(param_1 + 7);
    }
    uVar3 = (ulonglong)uVar1;
    if ((*(byte *)((longlong)param_1 + 0x24) & 8) != 0) {
        lVar4 = *(longlong *)(DAT_140c65898 + 0x78);
        if (lVar4 == 0) {
            uVar3 = 0;
        }
        else {
            uVar3 = (ulonglong)*(uint *)(lVar4 + 0x3c);
            if (*(uint *)(lVar4 + 0x3c) == 0) {
                uVar3 = (ulonglong)*(uint *)(lVar4 + 0x38);
            }
        }
    }
    fVar8 = (float)uVar3;
    if (param_1[3] == 0) {
        uVar2 = 1;
    }
    else {
        uVar2 = *(undefined4 *)(param_1[3] + 0x18);
    }
    lVar4 = FUN_1401f6920(uVar2);
    fVar6 = 1.0;
    if (lVar4 == 0) {
        fVar7 = 1.0;
    }
    else {
        fVar7 = *(float *)(lVar4 + 4);
    }
    uVar2 = (**(code **)(*param_1 + 0x10))(param_1);
    lVar4 = FUN_1401f64e0(uVar2);
    if (lVar4 != 0) {
        iVar5 = *(int *)(lVar4 + 0x10);
    }
    uVar3 = (ulonglong)(uint)(float)iVar5;
    if (((param_1[3] != 0) && (*(int *)(param_1[3] + 0x10) == 0x1e)) &&
        (fVar6 = DAT_140dc2900, _DAT_140dc2904 == 0)) {
        _DAT_140dc2904 = 1;
        lVar4 = FUN_140200220(0x525);
        if (lVar4 == 0) {
            DAT_140dc2900 = 0.0;
            fVar6 = 0.0;
        }
        else {
            DAT_140dc2900 = *(float *)(lVar4 + 0x1c);
            fVar6 = DAT_140dc2900;
        }
    }
    return uVar3 & 0xffffffff00000000 | (ulonglong)(uint)(((float)uVar3 + fVar8) * fVar7 * fVar6);
}



int FUN_14045b6b0(longlong param_1)

{
    int *piVar1;
    ulonglong uVar2;

    uVar2 = 0;
    if (*(ulonglong *)(param_1 + 0x198) != 0) {
        piVar1 = *(int **)(param_1 + 400);
        do {
            if ((*piVar1 == 0) && (*(char *)(piVar1 + 1) == '\0')) {
                return (*(int **)(param_1 + 400))[uVar2 * 3 + 2];
            }
            uVar2 = uVar2 + 1;
            piVar1 = piVar1 + 3;
        } while (uVar2 < *(ulonglong *)(param_1 + 0x198));
    }
    return 0;
}



void FUN_14045b6f0(longlong param_1,undefined4 param_2)

{
    short sVar1;
    short *psVar2;
    short **ppsVar3;
    longlong lVar4;
    longlong local_res8 [4];

    if ((*(short **)(param_1 + 0x10) == (short *)0x0) || (**(short **)(param_1 + 0x10) == 0)) {
        if (*(undefined2 **)(param_1 + 0x178) != *(undefined2 **)(param_1 + 0x180)) {
            **(undefined2 **)(param_1 + 0x178) = 0;
            *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_1 + 0x178);
        }
    }
    else {
        *(undefined4 *)(param_1 + 0x168) = param_2;
        ppsVar3 = (short **)FUN_1403ca8b0(param_1,local_res8,param_2,param_1);
        psVar2 = *ppsVar3;
        lVar4 = 0;
        sVar1 = *psVar2;
        while (sVar1 != 0) {
            lVar4 = lVar4 + 1;
            sVar1 = psVar2[lVar4];
        }
        FUN_14001c480(param_1 + 0x170,psVar2,psVar2 + lVar4);
        if (local_res8[0] != 0) {
            (**(code **)(*(longlong *)(local_res8[0] + -0x10) + 8))(local_res8[0] + -0x10);
            return;
        }
    }
    return;
}



void FUN_14045b790(longlong param_1)

{
    FUN_14045b6f0();
    if ((param_1 != 0) &&
        ((*(longlong *)(DAT_140c65898 + 0x78) == param_1 ||
          (*(longlong *)(DAT_140c65898 + 0x6490) == param_1)))) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"PlayerTitleChange","");
        return;
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"UnitTitleChanged",&DAT_1409ee06c,
                  *(undefined4 *)(param_1 + 8));
    return;
}



bool FUN_14045b800(longlong param_1)

{
    int iVar1;

    if ((*(longlong *)(param_1 + 0x18) != 0) &&
        (iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x6c), iVar1 != 0)) {
        return *(int *)(DAT_140c65898 + 0x1694) == iVar1;
    }
    return false;
}



bool FUN_14045b830(longlong param_1)

{
    longlong *plVar1;
    int iVar2;
    longlong lVar3;

    iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x6c);
    if (iVar2 == 0) {
        return false;
    }
    if (*(longlong *)(param_1 + 0x18) == 0) {
        iVar2 = 0;
    }
    if (*(int *)(DAT_140c65898 + 0x1694) != iVar2) {
        lVar3 = FUN_1401ed460();
        if (lVar3 != 0) {
            iVar2 = *(int *)(lVar3 + 4);
            if (iVar2 == 0) {
                return true;
            }
            if (iVar2 == 1) {
                if ((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
                    (plVar1 = *(longlong **)(*(longlong *)(DAT_140c65898 + 0x78) + 0x118),
                            plVar1 != (longlong *)0x0)) {
                    iVar2 = (**(code **)(*plVar1 + 0x18))();
                    return iVar2 == 0xa7;
                }
                return false;
            }
            if (iVar2 == 2) {
                if ((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
                    (plVar1 = *(longlong **)(*(longlong *)(DAT_140c65898 + 0x78) + 0x118),
                            plVar1 != (longlong *)0x0)) {
                    iVar2 = (**(code **)(*plVar1 + 0x18))();
                    return iVar2 == 0xa6;
                }
                return false;
            }
        }
    }
    return false;
}

