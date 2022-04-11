//
// Created by flop on 04.04.22.
//
#include "../../include.h"

void FUN_1406411f0(undefined8 param_1,char param_2)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;

    if ((DAT_140c65898 != 0) && (param_2 != '\0')) {
        iVar1 = DAT_140c536f0;
        if (*DAT_140c63750 < DAT_140c536f0) {
            iVar1 = *DAT_140c63750;
        }
        FUN_14001a6c0(&PTR_PTR_LAB_140c536e0,iVar1,0);
        lVar2 = DAT_140c65898;
        lVar3 = FUN_1403d90d0();
        if (lVar3 != 0) {
            *(undefined4 *)(lVar2 + 0x71d8) = *(undefined4 *)(*(longlong *)(lVar2 + 0x6490) + 0x108);
        }
        iVar1 = DAT_140c536b0;
        if (*DAT_140c63750 < DAT_140c536b0) {
            iVar1 = *DAT_140c63750;
        }
        FUN_14001a6c0(&PTR_PTR_LAB_140c536a0,iVar1,lVar3 != 0);
        return;
    }
    return;
}



void FUN_1406412a0(undefined8 param_1,char param_2)

{
    int iVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    longlong lVar5;
    longlong lVar6;

    if ((DAT_140c65898 != 0) && (param_2 != '\0')) {
        iVar1 = DAT_140c536b0;
        if (*DAT_140c63750 < DAT_140c536b0) {
            iVar1 = *DAT_140c63750;
        }
        FUN_14001a6c0(&PTR_PTR_LAB_140c536a0,iVar1,0);
        lVar5 = DAT_140c65898;
        lVar6 = FUN_1403d90d0(DAT_140c65898);
        if (lVar6 != 0) {
            uVar2 = *(undefined4 *)(lVar6 + 0x11e4);
            uVar3 = *(undefined4 *)(lVar6 + 0x11e8);
            uVar4 = *(undefined4 *)(lVar6 + 0x11ec);
            *(undefined4 *)(lVar5 + 0x71e0) = *(undefined4 *)(lVar6 + 0x11e0);
            *(undefined4 *)(lVar5 + 0x71e4) = uVar2;
            *(undefined4 *)(lVar5 + 0x71e8) = uVar3;
            *(undefined4 *)(lVar5 + 0x71ec) = uVar4;
        }
        iVar1 = DAT_140c536f0;
        if (*DAT_140c63750 < DAT_140c536f0) {
            iVar1 = *DAT_140c63750;
        }
        FUN_14001a6c0(&PTR_PTR_LAB_140c536e0,iVar1,lVar6 != 0);
        return;
    }
    return;
}



undefined8 FUN_140641350(undefined8 param_1,undefined4 param_2,longlong param_3)

{
    int iVar1;
    undefined8 uVar2;

    FUN_1404dacf0();
    FUN_1404dad90(param_3);
    iVar1 = FUN_14039e1a0(param_3);
    if (((iVar1 == 0) && (iVar1 = FUN_14055a260(param_3 + 0x7330), iVar1 == 0)) &&
        ((iVar1 = (**(code **)(**(longlong **)(param_3 + 0x7588) + 200))
                (*(longlong **)(param_3 + 0x7588),0x20), iVar1 == 0 ||
                                                         (*(int *)(param_3 + 0x7230) != 2)))) {
        (**(code **)(**(longlong **)(param_3 + 0x7588) + 200))(*(longlong **)(param_3 + 0x7588),0x2f);
    }
    FUN_1404daf50(param_3);
    iVar1 = FUN_1404dac20(param_3);
    if (iVar1 == 0) {
        (**(code **)(**(longlong **)(param_3 + 0x7588) + 200))(*(longlong **)(param_3 + 0x7588),0x1c);
    }
    iVar1 = FUN_1404dac20(param_3);
    if (iVar1 == 0) {
        (**(code **)(**(longlong **)(param_3 + 0x7588) + 200))(*(longlong **)(param_3 + 0x7588),0x1d);
    }
    (**(code **)(**(longlong **)(param_3 + 0x7588) + 200))(*(longlong **)(param_3 + 0x7588),0x2b);
    (**(code **)(**(longlong **)(param_3 + 0x7588) + 200))(*(longlong **)(param_3 + 0x7588),0x2c);
    (**(code **)(**(longlong **)(param_3 + 0x7588) + 200))(*(longlong **)(param_3 + 0x7588),0x29);
    uVar2 = (**(code **)(**(longlong **)(param_3 + 0x7588) + 200))
            (*(longlong **)(param_3 + 0x7588),0x2a);
    FUN_14062c2d0(uVar2,param_2,param_3 + 0x71a0);
    return 0;
}



undefined8 FUN_140641520(longlong param_1)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    longlong lVar4;

    if (*(longlong *)(param_1 + 0x78) != 0) {
        FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0xc0));
    }
    FUN_14062b9f0(param_1 + 0x71a0);
    lVar4 = *(longlong *)(param_1 + 0x71a8);
    if (lVar4 == 0) {
        lVar4 = *(longlong *)(param_1 + 0x71a0);
    }
    uVar1 = *(undefined4 *)(lVar4 + 0x44);
    uVar2 = *(undefined4 *)(lVar4 + 0x48);
    uVar3 = *(undefined4 *)(lVar4 + 0x4c);
    *(undefined4 *)(param_1 + 0x7260) = *(undefined4 *)(lVar4 + 0x40);
    *(undefined4 *)(param_1 + 0x7264) = uVar1;
    *(undefined4 *)(param_1 + 0x7268) = uVar2;
    *(undefined4 *)(param_1 + 0x726c) = uVar3;
    return 0;
}



undefined8 FUN_1406415c0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
    longlong lVar1;
    undefined8 uVar2;

    uVar2 = FUN_14062bf20();
    lVar1 = *(longlong *)(param_4 + 0x71a8);
    if (lVar1 == 0) {
        lVar1 = *(longlong *)(param_4 + 0x71a0);
    }
    FUN_1405d2cc0(uVar2,param_2,param_3,lVar1,*(undefined8 *)(param_4 + 0x7248));
    return 0;
}



undefined8 FUN_1406416d0(longlong param_1,int *param_2,int param_3)

{
    short sVar1;
    int iVar2;
    longlong lVar3;
    char *pcVar4;
    undefined4 uVar5;
    longlong lVar6;
    longlong *plVar7;
    undefined8 uVar8;
    short *psVar9;
    longlong lVar10;
    longlong *plVar11;
    uint uVar12;
    longlong *plVar13;
    undefined8 *puVar14;
    uint local_res10;
    undefined **local_res20;
    undefined *local_68;
    wchar_t *local_60;
    undefined local_58 [8];
    longlong local_50;

    lVar3 = *(longlong *)(param_2 + 4);
    plVar13 = (longlong *)0x0;
    local_68 = &DAT_140b0a7c8;
    local_60 = L"target";
    local_res10 = 0;
    if (*(char *)(param_2 + 2) != '\0') {
        local_res20 = &local_68;
        puVar14 = (undefined8 *)(lVar3 + 8);
        plVar11 = plVar13;
        do {
            uVar12 = (uint)plVar11;
            plVar11 = plVar13;
            switch(*(undefined4 *)(puVar14 + -1)) {
                case 0:
                    lVar10 = FUN_14018b280(0x58);
                    if (lVar10 != 0) {
                        plVar11 = (longlong *)FUN_1404dc400(lVar10,*(undefined4 *)puVar14);
                    }
                    break;
                case 1:
                    lVar10 = FUN_14018b280(0x60);
                    if (lVar10 != 0) {
                        plVar11 = (longlong *)FUN_1404ddb40(lVar10,*puVar14);
                    }
                    break;
                case 2:
                    plVar7 = (longlong *)FUN_14018b280(0x60);
                    if (plVar7 != (longlong *)0x0) {
                        FUN_1400b6390(plVar7);
                        *plVar7 = (longlong)&PTR_FUN_140b69170;
                        *(undefined4 *)(plVar7 + 0xb) = 1;
                        FUN_1400b6d70(plVar7,L"name");
                        plVar11 = plVar7;
                        uVar12 = local_res10;
                    }
                    break;
                case 3:
                    lVar10 = FUN_14018b280(0x58);
                    if (lVar10 != 0) {
                        plVar11 = (longlong *)FUN_1404dc000(lVar10,puVar14);
                    }
                    break;
                case 4:
                    lVar10 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)puVar14);
                    if (lVar10 == 0) {
                        lVar10 = FUN_14018b280(0x58);
                        uVar12 = local_res10;
                        if (lVar10 != 0) {
                            plVar11 = (longlong *)FUN_1404dc400(lVar10,*(undefined4 *)((longlong)puVar14 + 4));
                        }
                    }
                    else {
                        lVar6 = FUN_14018b280(0x60);
                        uVar12 = local_res10;
                        if (lVar6 != 0) {
                            plVar11 = (longlong *)FUN_1404db7e0(lVar6,lVar10);
                        }
                    }
                    break;
                case 5:
                    lVar10 = FUN_14018b280(0x60);
                    if (lVar10 != 0) {
                        plVar11 = (longlong *)FUN_1404db7e0(lVar10,*(undefined8 *)(DAT_140c65898 + 0x78));
                    }
                    break;
                default:
                    return 0x80004005;
            }
            pcVar4 = (char *)puVar14[7];
            if ((pcVar4 != (char *)0x0) && (plVar7 = plVar13, *pcVar4 != '\0')) {
                do {
                    plVar7 = (longlong *)((longlong)plVar7 + 1);
                } while (*(char *)((longlong)plVar7 + (longlong)pcVar4) != '\0');
                if (plVar7 != (longlong *)0x0) {
                    lVar10 = *plVar11;
                    uVar8 = FUN_14018f2d0(local_58,pcVar4);
                    (**(code **)(lVar10 + 0x48))(plVar11,uVar8);
                    uVar12 = local_res10;
                    if (local_50 != 0) {
                        FUN_14018b900(local_50,0);
                    }
                }
            }
            if (uVar12 < 2) {
                (**(code **)(*plVar11 + 0x50))(plVar11,*local_res20);
            }
            (**(code **)(*plVar11 + 0x68))(plVar11,*(undefined4 *)(puVar14 + 6));
            FUN_1400b7480(param_1,plVar11);
            local_res20 = local_res20 + 1;
            local_res10 = uVar12 + 1;
            plVar11 = (longlong *)(ulonglong)local_res10;
            puVar14 = puVar14 + 9;
        } while ((int)local_res10 < (int)(uint)*(byte *)(param_2 + 2));
    }
    if (param_3 == 0) {
        if (*param_2 == 0) {
            if (*(byte *)(param_2 + 2) < 2) {
                return 0;
            }
            iVar2 = *(int *)(*(longlong *)(param_2 + 4) + 0x48);
            if (iVar2 == 0) {
                FUN_1404835c0(DAT_140c65918,*(undefined4 *)(lVar3 + 0x50));
            }
            else if ((iVar2 != 3) && (iVar2 == 4)) {
                FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(lVar3 + 0x50));
            }
            uVar5 = FUN_140612e30();
            FUN_1400b75f0(param_1,uVar5);
            return 0;
        }
        psVar9 = (short *)FUN_14034bdd0();
        if (psVar9 != (short *)0x0) {
            sVar1 = *psVar9;
            while (sVar1 != 0) {
                plVar13 = (longlong *)((longlong)plVar13 + 1);
                sVar1 = psVar9[(longlong)plVar13];
            }
            goto LAB_1406419ea;
        }
    }
    else {
        psVar9 = (short *)FUN_14034bdd0();
        if (psVar9 != (short *)0x0) {
            sVar1 = *psVar9;
            while (sVar1 != 0) {
                plVar13 = (longlong *)((longlong)plVar13 + 1);
                sVar1 = psVar9[(longlong)plVar13];
            }
            LAB_1406419ea:
            FUN_14001c480(param_1 + 8,psVar9,psVar9 + (longlong)plVar13);
            return 0;
        }
    }
    if (*(undefined2 **)(param_1 + 0x10) != *(undefined2 **)(param_1 + 0x18)) {
        **(undefined2 **)(param_1 + 0x10) = 0;
        *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_140641ae0(undefined8 param_1,undefined8 param_2)

{
    int iVar1;
    undefined2 *puVar2;
    longlong lVar3;
    undefined **local_e8 [24];
    undefined local_28 [16];
    undefined2 *local_18;

    FUN_1400b6f30(local_e8);
    local_18 = (undefined2 *)0x0;
    local_28 = ZEXT816(0);
    local_e8[0] = &PTR_FUN_140b69230;
    puVar2 = (undefined2 *)FUN_14018b280(0x10,0);
    local_18 = puVar2 + 8;
    local_28 = CONCAT88(puVar2,puVar2);
    if (puVar2 != (undefined2 *)0x0) {
        *puVar2 = 0;
    }
    iVar1 = FUN_1406416d0(local_e8,param_2,0);
    if (-1 < iVar1) {
        lVar3 = FUN_1400b7660(local_e8);
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"GenericFloater",&DAT_1409eeefc,
                      *(undefined4 *)(*(longlong *)(DAT_140c65898 + 0x78) + 8),
                      *(undefined8 *)(lVar3 + 8));
    }
    if (local_28._0_8_ != 0) {
        FUN_14018b900(local_28._0_8_,0);
    }
    FUN_1400b7390(local_e8);
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_140641bd0(undefined8 param_1,undefined4 *param_2)

{
    int iVar1;
    undefined4 uVar2;
    longlong lVar3;
    undefined2 *puVar4;
    longlong lVar5;
    undefined **local_e8 [24];
    undefined local_28 [16];
    undefined2 *local_18;

    lVar3 = FUN_1403d90d0(DAT_140c65898,param_2[6]);
    if (lVar3 != 0) {
        FUN_1400b6f30(local_e8);
        local_18 = (undefined2 *)0x0;
        local_28 = ZEXT816(0);
        local_e8[0] = &PTR_FUN_140b69230;
        puVar4 = (undefined2 *)FUN_14018b280(0x10,0);
        local_18 = puVar4 + 8;
        local_28 = CONCAT88(puVar4,puVar4);
        if (puVar4 != (undefined2 *)0x0) {
            *puVar4 = 0;
        }
        iVar1 = FUN_1406416d0(local_e8,param_2,0);
        if (-1 < iVar1) {
            if (param_2[7] == 0) {
                if (param_2[8] == 0) {
                    lVar5 = FUN_1400b7660(local_e8);
                    FUN_1403e0020(lVar3,*(undefined8 *)(lVar5 + 8),1);
                }
                else {
                    lVar5 = FUN_1400b7660(local_e8);
                    FUN_140475ef0(lVar3,*(undefined8 *)(lVar5 + 8),1);
                }
            }
            else {
                lVar5 = FUN_1400b7660(local_e8);
                if (*(longlong *)(lVar5 + 8) != 0) {
                    puVar4 = &DAT_140b7b704;
                    if (*(undefined2 **)(lVar3 + 0x10) != (undefined2 *)0x0) {
                        puVar4 = *(undefined2 **)(lVar3 + 0x10);
                    }
                    FUN_140003890(DAT_140c658a0,8,0,*(longlong *)(lVar5 + 8),*(undefined4 *)(lVar3 + 8),puVar4
                    );
                }
            }
            iVar1 = FUN_140472ed0(lVar3,*param_2);
            if (iVar1 == 0) {
                uVar2 = FUN_140612de0();
                FUN_140472ed0(lVar3,uVar2);
            }
        }
        if (local_28._0_8_ != 0) {
            FUN_14018b900(local_28._0_8_,0);
        }
        FUN_1400b7390(local_e8);
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_140641d80(undefined8 param_1,undefined4 *param_2)

{
    int iVar1;
    undefined4 uVar2;
    undefined2 *puVar3;
    longlong lVar4;
    longlong lVar5;
    undefined8 uVar6;
    undefined **local_f8 [24];
    undefined local_38 [16];
    undefined2 *local_28;

    FUN_1400b6f30(local_f8);
    local_38 = ZEXT816(0);
    local_28 = (undefined2 *)0x0;
    local_f8[0] = &PTR_FUN_140b69230;
    puVar3 = (undefined2 *)FUN_14018b280(0x10,0);
    local_38 = CONCAT88(puVar3,puVar3);
    local_28 = puVar3 + 8;
    if (puVar3 != (undefined2 *)0x0) {
        *puVar3 = 0;
    }
    iVar1 = FUN_1406416d0(local_f8,param_2,0);
    if (-1 < iVar1) {
        lVar4 = FUN_1403d90d0(DAT_140c65898,param_2[6]);
        if (lVar4 == 0) {
            lVar4 = FUN_1404835c0(DAT_140c65918,param_2[7]);
            if (lVar4 != 0) {
                uVar6 = FUN_14034bdd0();
                lVar4 = FUN_1400b7660(local_f8);
                FUN_140003890(DAT_140c658a0,0x15,0,*(undefined8 *)(lVar4 + 8),0,uVar6);
                iVar1 = FUN_1406132e0(*param_2);
                if (iVar1 == 0) {
                    uVar2 = FUN_140612de0();
                    iVar1 = FUN_1406132e0(uVar2);
                }
                if ((DAT_140c7dc80 != 0) && (iVar1 != 0)) {
                    FUN_140712c00(DAT_140c7dc80,iVar1,&LAB_140472eb0,0);
                }
            }
        }
        else {
            lVar5 = FUN_1400b7660(local_f8);
            lVar5 = *(longlong *)(lVar5 + 8);
            if (lVar5 != 0) {
                puVar3 = &DAT_140b7b704;
                if (*(undefined2 **)(lVar4 + 0x10) != (undefined2 *)0x0) {
                    puVar3 = *(undefined2 **)(lVar4 + 0x10);
                }
                FUN_140003890(DAT_140c658a0,0x15,0,lVar5,*(undefined4 *)(lVar4 + 8),puVar3);
                FUN_140475ef0(lVar4,lVar5,1);
            }
            iVar1 = FUN_140472ed0(lVar4,*param_2);
            if (iVar1 == 0) {
                uVar2 = FUN_140612de0();
                FUN_140472ed0(lVar4,uVar2);
            }
        }
    }
    if (local_38._0_8_ != 0) {
        FUN_14018b900(local_38._0_8_,0);
    }
    FUN_1400b7390(local_f8);
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_140641fa0(undefined8 param_1,undefined8 param_2)

{
    int iVar1;
    undefined2 *puVar2;
    undefined **local_e8 [24];
    undefined local_28 [16];
    undefined2 *local_18;

    FUN_1400b6f30(local_e8);
    local_18 = (undefined2 *)0x0;
    local_28 = ZEXT816(0);
    local_e8[0] = &PTR_FUN_140b69230;
    puVar2 = (undefined2 *)FUN_14018b280(0x10,0);
    local_18 = puVar2 + 8;
    local_28 = CONCAT88(puVar2,puVar2);
    if (puVar2 != (undefined2 *)0x0) {
        *puVar2 = 0;
    }
    iVar1 = FUN_1406416d0(local_e8,param_2,0);
    if (-1 < iVar1) {
        FUN_14043b880();
    }
    if (local_28._0_8_ != 0) {
        FUN_14018b900(local_28._0_8_,0);
    }
    FUN_1400b7390(local_e8);
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_140642060(undefined8 param_1,undefined4 *param_2)

{
    ulonglong uVar1;
    longlong lVar2;
    longlong *plVar3;
    int iVar4;
    longlong lVar5;
    undefined2 *puVar6;
    longlong lVar7;
    longlong lVar8;
    ulonglong in_stack_fffffffffffffef8;
    undefined **local_e8 [24];
    undefined local_28 [16];
    undefined2 *local_18;

    lVar5 = FUN_1402402c0(*param_2);
    if (lVar5 != 0) {
        FUN_1400b6f30(local_e8);
        lVar8 = 0;
        local_e8[0] = &PTR_FUN_140b69230;
        local_28 = ZEXT816(0);
        local_18 = (undefined2 *)0x0;
        puVar6 = (undefined2 *)FUN_14018b280(0x10);
        local_18 = puVar6 + 8;
        local_28 = CONCAT88(puVar6,puVar6);
        if (puVar6 != (undefined2 *)0x0) {
            *puVar6 = 0;
        }
        iVar4 = FUN_1406416d0(local_e8,param_2,*(undefined4 *)(lVar5 + 4));
        if (-1 < iVar4) {
            lVar7 = FUN_1400b7660(local_e8);
            lVar2 = *(longlong *)(lVar7 + 8);
            lVar7 = *(longlong *)(lVar7 + 0x10) - lVar2 >> 1;
            uVar1 = lVar7 + 1;
            if (uVar1 < 0x7fffffffffffffff) {
                lVar8 = FUN_14018b280(uVar1 * 2,0);
            }
            lVar7 = lVar7 * 2;
            FUN_1407db590(lVar8,lVar2,lVar7);
            puVar6 = (undefined2 *)(lVar7 + lVar8);
            if (puVar6 != (undefined2 *)0x0) {
                *puVar6 = 0;
            }
            if ((lVar8 != 0) && (*(int *)(lVar5 + 0x10) != 0)) {
                in_stack_fffffffffffffef8 = in_stack_fffffffffffffef8 & 0xffffffff00000000;
                FUN_14042a360(*(undefined8 *)(DAT_140c65898 + 0x7340));
                FUN_140003890(DAT_140c658a0,0x17,0,lVar8,in_stack_fffffffffffffef8 & 0xffffffff00000000,0);
            }
            if ((*(int *)(lVar5 + 8) != 0) &&
                (plVar3 = *(longlong **)(DAT_140c63628 + 0x2d8), plVar3 != (longlong *)0x0)) {
                (**(code **)(*plVar3 + 0x10))(plVar3,*(int *)(lVar5 + 8),0,0,0,0,0);
            }
            if (lVar8 != 0) {
                FUN_14018b900(lVar8,0);
            }
        }
        if (local_28._0_8_ != 0) {
            FUN_14018b900(local_28._0_8_,0);
        }
        FUN_1400b7390(local_e8);
    }
    return 0;
}



undefined8 FUN_140642430(undefined8 param_1,undefined4 *param_2)

{
    undefined local_28 [16];
    undefined local_18 [16];

    local_28 = ZEXT1216(*(undefined (*) [12])(param_2 + 4));
    local_18 = ZEXT1216(*(undefined (*) [12])(param_2 + 1));
    FUN_140780830(param_1,*param_2,local_18,local_28,param_2[7]);
    return 0;
}



undefined8 FUN_1406424a0(undefined8 param_1,longlong param_2)

{
    longlong lVar1;
    uint uVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong *plVar5;
    longlong *plVar6;
    longlong *plVar7;
    uint uVar8;
    longlong *plVar9;
    longlong *plVar10;
    double dVar11;
    longlong local_res10;
    longlong local_res18;
    longlong *local_res20;
    undefined4 uVar12;
    wchar_t *pwVar13;
    undefined4 uVar14;
    ulonglong uVar15;
    undefined4 uVar16;
    int iVar17;
    wchar_t *pwVar18;
    longlong local_58;

    local_res10 = param_2;
    plVar4 = (longlong *)FUN_14018b280(0x12);
    plVar10 = (longlong *)0x0;
    plVar7 = plVar10;
    if (plVar4 != (longlong *)0x0) {
        plVar4[1] = 0;
        *plVar4 = (longlong)&PTR_LAB_140b55060;
        plVar7 = plVar4;
    }
    plVar4 = plVar7 + 2;
    pwVar18 = L"ppa(us)";
    *(undefined2 *)plVar4 = 0;
    iVar17 = 1;
    uVar16 = 1;
    pwVar13 = L"name";
    uVar12 = 1;
    plVar5 = (longlong *)FUN_14018d540();
    plVar6 = plVar4;
    if (*plVar5 != 0) {
        lVar1 = *(longlong *)(*plVar5 + -8) + plVar7[1];
        plVar6 = (longlong *)FUN_14018d140(plVar4,lVar1);
        FUN_1407db590();
        *(undefined2 *)((longlong)plVar6 + lVar1 * 2) = 0;
        param_2 = local_res10;
        if (plVar4 != plVar6) {
            (**(code **)(*plVar7 + 8))();
            param_2 = local_res10;
        }
    }
    if (local_res18 != 0) {
        (**(code **)(*(longlong *)(local_res18 + -0x10) + 8))();
    }
    uVar14 = (undefined4)((ulonglong)pwVar13 >> 0x20);
    plVar9 = (longlong *)(ulonglong)*(uint *)(param_2 + 0x18);
    plVar7 = plVar6;
    plVar4 = plVar10;
    plVar5 = plVar10;
    if (plVar9 != (longlong *)0x0) {
        do {
            lVar1 = *(longlong *)(param_2 + 0x20);
            uVar15 = *(ulonglong *)((longlong)plVar5 + lVar1 + 0x18);
            plVar6 = plVar10;
            if (uVar15 != 0) {
                plVar6 = (longlong *)(*(ulonglong *)((longlong)plVar5 + lVar1 + 0x10) / uVar15);
            }
            iVar17 = (int)((ulonglong)((longlong)plVar6 * 1000) / DAT_140c636b0) >> 0x1f;
            pwVar13 = (wchar_t *)((ulonglong)pwVar13 & 0xffffffff00000000);
            uVar12 = (undefined4)((ulonglong)*(undefined8 *)((longlong)plVar5 + lVar1 + 8) >> 0x20);
            local_res20 = (longlong *)FUN_14018d540();
            uVar16 = (undefined4)(uVar15 >> 0x20);
            plVar6 = plVar7;
            if (*local_res20 != 0) {
                plVar6 = plVar10;
                if (plVar7 != (longlong *)0x0) {
                    plVar6 = (longlong *)plVar7[-1];
                }
                lVar1 = *(longlong *)(*local_res20 + -8) + (longlong)plVar6;
                plVar6 = (longlong *)FUN_14018d140(plVar7,lVar1);
                FUN_1407db590();
                *(undefined2 *)((longlong)plVar6 + lVar1 * 2) = 0;
                param_2 = local_res10;
                if ((plVar7 != plVar6) && (plVar7 != (longlong *)0x0)) {
                    (**(code **)(plVar7[-2] + 8))();
                    param_2 = local_res10;
                }
            }
            if (local_58 != 0) {
                (**(code **)(*(longlong *)(local_58 + -0x10) + 8))();
            }
            uVar14 = (undefined4)((ulonglong)pwVar13 >> 0x20);
            plVar4 = (longlong *)((longlong)plVar4 + 1);
            plVar7 = plVar6;
            plVar5 = plVar5 + 6;
        } while (plVar4 < plVar9);
    }
    uVar2 = *(uint *)(param_2 + 0x10);
    if (uVar2 == 0) {
        uVar8 = 0;
    }
    else {
        uVar8 = (uint)(*(int *)(param_2 + 0xc) * 1000) / uVar2;
    }
    dVar11 = 0.0;
    if (0.0 < (double)(ulonglong)*(uint *)(param_2 + 8)) {
        dVar11 = ((double)(ulonglong)*(uint *)(param_2 + 0xc) * 100.0) /
                 (double)(ulonglong)*(uint *)(param_2 + 8);
    }
    plVar4 = (longlong *)
            FUN_14018d540(&local_res10,
                          L"%3Iu | %-40s | %10u | %7u | %8u | %7u | %7u | %7u\r\nRavel took %.2f%% of the total runtime\r\n"
                    ,plVar9,L"TOTAL",CONCAT44(uVar12,*(undefined4 *)(param_2 + 0x14)),
                          CONCAT44(uVar14,*(undefined4 *)(param_2 + 0xc)),CONCAT44(uVar16,uVar2),
                          CONCAT44(iVar17,uVar8),0,0,dVar11,pwVar18);
    plVar7 = plVar6;
    if (*plVar4 != 0) {
        if (plVar6 != (longlong *)0x0) {
            plVar10 = (longlong *)plVar6[-1];
        }
        lVar3 = *(longlong *)(*plVar4 + -8);
        lVar1 = lVar3 + (longlong)plVar10;
        plVar7 = (longlong *)FUN_14018d140(plVar6,lVar1);
        FUN_1407db590((undefined2 *)((longlong)plVar7 + (longlong)plVar10 * 2),*plVar4,lVar3 * 2);
        *(undefined2 *)((longlong)plVar7 + lVar1 * 2) = 0;
        if ((plVar6 != plVar7) && (plVar6 != (longlong *)0x0)) {
            (**(code **)(plVar6[-2] + 8))(plVar6 + -2);
        }
    }
    if (local_res10 != 0) {
        (**(code **)(*(longlong *)(local_res10 + -0x10) + 8))(local_res10 + -0x10);
    }
    FUN_14063ad00(plVar7);
    if (plVar7 != (longlong *)0x0) {
        (**(code **)(plVar7[-2] + 8))(plVar7 + -2);
    }
    return 0;
}



undefined8 FUN_1406428d0(longlong *param_1)

{
    switch(*(undefined4 *)(*param_1 + 4)) {
        default:
            return 0;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 0x10:
        case 0x1c:
        case 0x50:
        case 0x65:
        case 0x68:
        case 0x79:
        case 0x8c:
        case 0x8d:
            return 1;
        case 0xd:
        case 0x26:
        case 0x27:
        case 0x28:
        case 0x2c:
        case 0x2f:
        case 0x31:
        case 0x33:
            return 5;
        case 0x16:
            return 3;
        case 0x25:
        case 0x2a:
        case 0x35:
        case 0x37:
        case 0x41:
        case 0x42:
        case 0x45:
        case 0x46:
        case 0x49:
        case 0x4a:
        case 0x52:
        case 0x60:
        case 0x6a:
        case 0x6b:
        case 0x6c:
        case 0x6d:
        case 0x72:
        case 0x86:
        case 0x9d:
            return 4;
        case 0x2d:
        case 0x34:
        case 0x4c:
        case 0x4d:
        case 0x75:
            return 7;
        case 0x36:
        case 0x40:
        case 0x5e:
        case 0x66:
        case 0x6f:
        case 0x70:
        case 0x76:
        case 0x8a:
        case 0x8b:
            return 8;
        case 99:
            return 2;
        case 0x74:
            return 9;
    }
}



uint FUN_140642a00(longlong param_1,uint param_2)

{
    int iVar1;
    undefined8 local_res18 [2];
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    if (param_2 < 0x20) {
        return 1 << ((byte)param_2 & 0x1f) & *(uint *)(param_1 + 0x14);
    }
    if (param_2 < 0x40) {
        return 1 << ((byte)param_2 - 0x20 & 0x1f) & *(uint *)(param_1 + 0x18);
    }
    local_48 = &PTR_LAB_140b5e648;
    local_40 = 0;
    local_38 = TlsGetValue(DAT_140c63720);
    TlsSetValue(DAT_140c63720,&local_48);
    local_res18[0] = 0x141e24358;
    local_28 = local_48;
    local_20 = local_40;
    local_18 = local_38;
    iVar1 = FUN_140196f30(&DAT_140c8affc,0x29,local_res18,param_2,*(undefined4 *)(param_1 + 0x10),
                          &local_28);
    local_48 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720,local_38);
    if (iVar1 != 0) {
        DebugBreak();
    }
    return 0;
}



int FUN_140642b30(longlong param_1)

{
    undefined4 uVar1;
    uint uVar2;
    uint uVar3;

    uVar1 = FUN_1406428d0(*(undefined8 *)(param_1 + 0x28));
    switch(uVar1) {
        case 0:
        case 2:
        case 4:
        case 6:
        case 7:
        case 8:
        case 9:
            return *(int *)(param_1 + 0x14);
        case 1:
        case 3:
        case 5:
            uVar2 = *(uint *)(param_1 + 0x14);
            uVar3 = (uVar2 - (uVar2 >> 2 & 0x9249249)) - (uVar2 >> 1 & 0x5b6db6db);
            uVar2 = *(uint *)(param_1 + 0x18);
            uVar2 = (uVar2 - (uVar2 >> 2 & 0x9249249)) - (uVar2 >> 1 & 0x5b6db6db);
            return ((uVar3 >> 3) + uVar3 & 0xc71c71c7) % 0x3f + ((uVar2 >> 3) + uVar2 & 0xc71c71c7) % 0x3f;
        default:
            return 0;
    }
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int * FUN_140642d10(int *param_1)

{
    code *pcVar1;
    undefined4 uVar2;
    int iVar3;
    ulonglong uVar4;
    undefined8 uVar5;
    undefined *puVar6;

    iVar3 = DAT_140c636a8;
    param_1[2] = 60000;
    uVar2 = 0;
    param_1[1] = 0;
    param_1[3] = 0x14;
    *param_1 = iVar3 + -60000;
    pcVar1 = DAT_140c63838;
    param_1[4] = 3000;
    *(undefined8 *)(param_1 + 6) = 0;
    if (pcVar1 == (code *)0x0) {
        if ((_DAT_140c64944 == 0) && (iVar3 = FUN_1401e9240(), -1 < iVar3)) {
            uVar2 = (**(code **)(*DAT_140c64218 + 0x28))();
        }
    }
    else {
        uVar2 = (*pcVar1)(&PTR_u_Achievement_140a69138,DAT_140c63858);
    }
    *(undefined8 *)(param_1 + 8) = 0;
    uVar4 = FUN_1401a40c0(uVar2);
    *(ulonglong *)(param_1 + 10) = uVar4;
    uVar5 = SUB168(ZEXT816(8) * ZEXT816(uVar4),0);
    if (SUB168(ZEXT816(8) * ZEXT816(uVar4) >> 0x40,0) != 0) {
        uVar5 = 0xffffffffffffffff;
    }
    uVar5 = FUN_14018b280(uVar5,0);
    *(undefined8 *)(param_1 + 0xc) = uVar5;
    FUN_1407e4830(uVar5,0,*(longlong *)(param_1 + 10) << 3);
    *(undefined **)(param_1 + 0xe) = &LAB_1400522d0;
    *(undefined **)(param_1 + 0x10) = &LAB_1400522e0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x16) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    puVar6 = (undefined *)FUN_14018b280(0x30);
    *(undefined8 *)(param_1 + 0x1e) = 0;
    *(undefined **)(param_1 + 0x1c) = puVar6;
    *puVar6 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x1c) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x1c) + 0x10) = *(longlong *)(param_1 + 0x1c);
    *(longlong *)(*(longlong *)(param_1 + 0x1c) + 0x18) = *(longlong *)(param_1 + 0x1c);
    param_1[0x22] = 0;
    *(undefined8 *)(param_1 + 0x26) = 0;
    *(undefined8 *)(param_1 + 0x24) = 0;
    puVar6 = (undefined *)FUN_14018b280(0x30);
    *(undefined8 *)(param_1 + 0x2c) = 0;
    *(undefined **)(param_1 + 0x2a) = puVar6;
    *puVar6 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x10) = *(longlong *)(param_1 + 0x2a);
    *(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x18) = *(longlong *)(param_1 + 0x2a);
    puVar6 = (undefined *)FUN_14018b280(0x30);
    *(undefined8 *)(param_1 + 0x34) = 0;
    *(undefined **)(param_1 + 0x32) = puVar6;
    *puVar6 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x32) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x32) + 0x10) = *(longlong *)(param_1 + 0x32);
    *(longlong *)(*(longlong *)(param_1 + 0x32) + 0x18) = *(longlong *)(param_1 + 0x32);
    puVar6 = (undefined *)FUN_14018b280(0x28);
    *(undefined8 *)(param_1 + 0x3c) = 0;
    *(undefined **)(param_1 + 0x3a) = puVar6;
    *puVar6 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x3a) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x3a) + 0x10) = *(longlong *)(param_1 + 0x3a);
    *(longlong *)(*(longlong *)(param_1 + 0x3a) + 0x18) = *(longlong *)(param_1 + 0x3a);
    *(undefined8 *)(param_1 + 0x42) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    puVar6 = (undefined *)FUN_14018b280(0x38);
    *(undefined **)(param_1 + 0x46) = puVar6;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *puVar6 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x46) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x46) + 0x10) = *(longlong *)(param_1 + 0x46);
    *(longlong *)(*(longlong *)(param_1 + 0x46) + 0x18) = *(longlong *)(param_1 + 0x46);
    return param_1;
}



void FUN_140642f40(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 *puVar4;
    int iVar5;
    longlong local_res8;

    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x10);
    if (lVar2 != *(longlong *)(param_1 + 0x70)) {
        do {
            lVar3 = *(longlong *)(lVar2 + 0x18);
            if (lVar3 == 0) {
                lVar1 = *(longlong *)(lVar2 + 8);
                lVar3 = lVar2;
                if (lVar2 == *(longlong *)(lVar1 + 0x18)) {
                    do {
                        lVar3 = lVar1;
                        lVar1 = *(longlong *)(lVar3 + 8);
                    } while (lVar3 == *(longlong *)(lVar1 + 0x18));
                }
                if (*(longlong *)(lVar3 + 0x18) != lVar1) {
                    lVar3 = lVar1;
                }
            }
            else {
                for (lVar1 = *(longlong *)(lVar3 + 0x10); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x10)) {
                    lVar3 = lVar1;
                }
            }
            puVar4 = *(undefined8 **)(lVar2 + 0x28);
            if (puVar4 != (undefined8 *)0x0) {
                (**(code **)*puVar4)(puVar4,1);
            }
            local_res8 = lVar2;
            FUN_140645210(param_1 + 0x68,&local_res8);
            lVar2 = lVar3;
        } while (lVar3 != *(longlong *)(param_1 + 0x70));
    }
    *(undefined8 *)(param_1 + 0x108) = 0;
    FUN_140008410(param_1 + 0x68);
    FUN_140019490(param_1 + 0x20);
    lVar2 = *(longlong *)(param_1 + 0x18);
    if (lVar2 != 0) {
        iVar5 = *(int *)(lVar2 + -8) + -1;
        if (-1 < iVar5) {
            puVar4 = (undefined8 *)((longlong)*(int *)(lVar2 + -8) * 0x30 + 0x18 + lVar2);
            do {
                puVar4[-9] = 0;
                FUN_14018b900(puVar4[-6],0);
                iVar5 = iVar5 + -1;
                puVar4[-6] = 0;
                puVar4 = puVar4 + -6;
            } while (-1 < iVar5);
        }
        FUN_14018b900(lVar2 + -8,0);
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    lVar2 = *(longlong *)(param_1 + 0x58);
    lVar3 = *(longlong *)(param_1 + 0x50);
    FUN_1407db590(lVar3,lVar2,0);
    *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + (lVar2 - lVar3 >> 3) * -8;
    if (*(longlong *)(param_1 + 0x120) != 0) {
        FUN_14001a270(param_1 + 0x110,*(undefined8 *)(*(longlong *)(param_1 + 0x118) + 8));
        *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x10) = *(longlong *)(param_1 + 0x118);
        *(undefined8 *)(*(longlong *)(param_1 + 0x118) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x18) = *(longlong *)(param_1 + 0x118);
        *(undefined8 *)(param_1 + 0x120) = 0;
    }
    FUN_14018b900(*(undefined8 *)(param_1 + 0x118),0);
    lVar2 = *(longlong *)(param_1 + 0x100);
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    FUN_140008410(param_1 + 0xe0);
    FUN_14018b900(*(undefined8 *)(param_1 + 0xe8),0);
    FUN_140008410(param_1 + 0xc0);
    FUN_14018b900(*(undefined8 *)(param_1 + 200),0);
    FUN_140008410(param_1 + 0xa0);
    FUN_14018b900(*(undefined8 *)(param_1 + 0xa8),0);
    FUN_140644fb0(param_1 + 0x90);
    FUN_140008410(param_1 + 0x68);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x70),0);
    if (*(longlong *)(param_1 + 0x50) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0x50),0);
    }
    FUN_140019490(param_1 + 0x20);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x30),0);
    *(undefined8 *)(param_1 + 0x30) = 0;
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1406431b0(ulonglong param_1)

{
    ulonglong **ppuVar1;
    uint uVar2;
    ulonglong *puVar3;
    longlong **pplVar4;
    char *pcVar5;
    char *pcVar6;
    longlong lVar7;
    uint uVar8;
    uint uVar9;
    int iVar10;
    int *piVar11;
    undefined8 *puVar12;
    undefined4 *puVar13;
    ulonglong uVar14;
    ulonglong *puVar15;
    longlong lVar16;
    longlong lVar17;
    undefined8 uVar18;
    uint *puVar19;
    longlong lVar20;
    int iVar21;
    char *pcVar22;
    char *pcVar23;
    int *piVar24;
    longlong *plVar25;
    bool bVar26;
    ulonglong local_res8;
    undefined4 local_res10 [2];
    int local_res18;
    longlong local_res20;
    ulonglong local_98;
    longlong local_90;
    longlong local_88;
    undefined local_80 [8];
    longlong *local_78;
    uint local_68;
    undefined8 local_60;
    undefined8 local_58;

    lVar7 = DAT_140c65c28;
    local_res8 = param_1;
    if (DAT_140c63838 == (code *)0x0) {
        if (_DAT_140c64944 != 0) {
            local_98 = 0;
            goto LAB_140643216;
        }
        iVar10 = FUN_1401e9240();
        if (iVar10 < 0) {
            local_98 = 0;
            goto LAB_140643216;
        }
        uVar8 = (**(code **)(*DAT_140c64218 + 0x28))();
    }
    else {
        uVar8 = (*DAT_140c63838)(&PTR_u_Achievement_140a69138,DAT_140c63858);
    }
    local_98 = (ulonglong)uVar8;
    LAB_140643216:
    iVar10 = (int)local_98;
    local_res8 = local_res8 & 0xffffffff00000000 | local_98;
    piVar11 = (int *)FUN_14018b280();
    if (piVar11 == (int *)0x0) {
        piVar24 = (int *)0x0;
    }
    else {
        iVar21 = iVar10 + -1;
        *piVar11 = iVar10;
        piVar24 = piVar11 + 2;
        if (-1 < iVar21) {
            puVar12 = (undefined8 *)(piVar11 + 6);
            do {
                iVar21 = iVar21 + -1;
                puVar12[-2] = 0;
                puVar12[-1] = 0;
                *puVar12 = 0;
                puVar12[1] = 0;
                puVar12[2] = 0;
                puVar12[3] = 0;
                puVar12 = puVar12 + 6;
            } while (-1 < iVar21);
        }
    }
    uVar8 = 0;
    *(int **)(lVar7 + 0x18) = piVar24;
    if (iVar10 != 0) {
        local_res20 = 0;
        do {
            lVar17 = local_res20;
            puVar13 = (undefined4 *)0x0;
            plVar25 = (longlong *)(*(longlong *)(lVar7 + 0x18) + local_res20);
            local_78 = plVar25;
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c64944 == 0) && (iVar10 = FUN_1401e9240(), -1 < iVar10)) {
                    puVar13 = (undefined4 *)(**(code **)(*DAT_140c64218 + 0x20))();
                }
            }
            else {
                puVar13 = (undefined4 *)(*DAT_140c63848)(&PTR_u_Achievement_140a69138);
            }
            *plVar25 = (longlong)puVar13;
            local_res10[0] = *puVar13;
            if (*(longlong *)(lVar7 + 0x20) == *(longlong *)(lVar7 + 0x28)) {
                FUN_1400290d0(lVar7 + 0x20);
            }
            uVar14 = (**(code **)(lVar7 + 0x38))(local_res10);
            ppuVar1 = (ulonglong **)
                    (*(longlong *)(lVar7 + 0x30) + (uVar14 % *(ulonglong *)(lVar7 + 0x28)) * 8);
            puVar15 = (ulonglong *)FUN_14018b280();
            if (puVar15 != (ulonglong *)0x0) {
                puVar3 = *ppuVar1;
                *puVar15 = uVar14;
                puVar15[1] = (ulonglong)puVar3;
                puVar15[3] = (ulonglong)plVar25;
                *(undefined4 *)(puVar15 + 2) = local_res10[0];
            }
            *ppuVar1 = puVar15;
            *(longlong *)(lVar7 + 0x20) = *(longlong *)(lVar7 + 0x20) + 1;
            uVar9 = *(uint *)(*plVar25 + 0x10);
            iVar10 = *(int *)(*plVar25 + 8);
            local_res18 = iVar10;
            if ((uVar9 != 0) && (iVar10 != 0)) {
                if (DAT_140c63840 == (code *)0x0) {
                    if ((_DAT_140c64634 != 0) || (iVar21 = FUN_14024d920(), iVar21 < 0)) goto LAB_1406434c1;
                    lVar16 = (**(code **)(*DAT_140c64270 + 0x18))();
                }
                else {
                    lVar16 = (*DAT_140c63840)();
                }
                if ((lVar16 != 0) && (*(int *)(lVar16 + 0xc) != 0)) {
                    lVar17 = *(longlong *)(lVar7 + 0x118);
                    lVar20 = lVar17;
                    lVar16 = *(longlong *)(lVar17 + 8);
                    while (lVar16 != 0) {
                        if (*(uint *)(lVar16 + 0x20) < uVar9) {
                            lVar16 = *(longlong *)(lVar16 + 0x18);
                        }
                        else {
                            lVar20 = lVar16;
                            lVar16 = *(longlong *)(lVar16 + 0x10);
                        }
                    }
                    if ((lVar20 == lVar17) || (uVar9 < *(uint *)(lVar20 + 0x20))) {
                        local_58 = 0;
                        local_60 = 0;
                        local_90 = lVar20;
                        local_68 = uVar9;
                        FUN_140451770(lVar7 + 0x110,&local_88,&local_90);
                        lVar20 = local_88;
                    }
                    uVar14 = 0;
                    if (*(ulonglong *)(lVar20 + 0x30) != 0) {
                        piVar11 = *(int **)(lVar20 + 0x28);
                        do {
                            lVar17 = local_res20;
                            if (*piVar11 == iVar10) goto LAB_1406434c1;
                            uVar14 = uVar14 + 1;
                            piVar11 = piVar11 + 1;
                        } while (uVar14 < *(ulonglong *)(lVar20 + 0x30));
                    }
                    lVar17 = *(longlong *)(lVar7 + 0x118);
                    lVar20 = lVar17;
                    lVar16 = *(longlong *)(lVar17 + 8);
                    while (lVar16 != 0) {
                        if (*(uint *)(lVar16 + 0x20) < uVar9) {
                            lVar16 = *(longlong *)(lVar16 + 0x18);
                        }
                        else {
                            lVar20 = lVar16;
                            lVar16 = *(longlong *)(lVar16 + 0x10);
                        }
                    }
                    if ((lVar20 == lVar17) || (uVar9 < *(uint *)(lVar20 + 0x20))) {
                        local_58 = 0;
                        local_60 = 0;
                        local_90 = lVar20;
                        local_68 = uVar9;
                        FUN_140451770(lVar7 + 0x110,local_80);
                    }
                    FUN_140003460();
                    lVar17 = local_res20;
                }
            }
            LAB_1406434c1:
            if (*(int *)(*plVar25 + 4) == 0x25) {
                pplVar4 = *(longlong ***)(lVar7 + 0x58);
                if (pplVar4 == *(longlong ***)(lVar7 + 0x60)) {
                    FUN_14010a1c0();
                }
                else {
                    if (pplVar4 != (longlong **)0x0) {
                        *pplVar4 = plVar25;
                    }
                    *(longlong *)(lVar7 + 0x58) = *(longlong *)(lVar7 + 0x58) + 8;
                }
            }
            local_res20 = lVar17 + 0x30;
            uVar8 = uVar8 + 1;
        } while (uVar8 < (uint)local_res8);
    }
    uVar8 = 0;
    if (DAT_140c63838 == (code *)0x0) {
        uVar9 = 0;
        if ((_DAT_140c64aa8 == 0) && (iVar10 = FUN_1401ea340(), -1 < iVar10)) {
            uVar9 = (**(code **)(*DAT_140c63a90 + 0x28))();
        }
    }
    else {
        uVar9 = (*DAT_140c63838)();
    }
    if (uVar9 != 0) {
        do {
            lVar17 = 0;
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c64aa8 == 0) && (iVar10 = FUN_1401ea340(), -1 < iVar10)) {
                    lVar17 = (**(code **)(*DAT_140c63a90 + 0x20))();
                }
            }
            else {
                lVar17 = (*DAT_140c63848)(&PTR_u_AchievementChecklist_140a69218);
            }
            uVar14 = (**(code **)(lVar7 + 0x38))(lVar17 + 4);
            for (puVar15 = *(ulonglong **)
                    (*(longlong *)(lVar7 + 0x30) + (uVar14 % *(ulonglong *)(lVar7 + 0x28)) * 8);
                 puVar15 != (ulonglong *)0x0; puVar15 = (ulonglong *)puVar15[1]) {
                if ((uVar14 == *puVar15) && (iVar10 = (**(code **)(lVar7 + 0x40))(), iVar10 != 0)) {
                    if ((puVar15 + 3 == (ulonglong *)0x0) ||
                        (((uVar14 = puVar15[3], *(int *)(lVar17 + 0xc) == 0 &&
                                                (iVar10 = FUN_1406428d0(), iVar10 != 5)) || (0x1f < *(uint *)(lVar17 + 8))))) break;
                    if (*(longlong *)(uVar14 + 0x18) == 0) {
                        uVar18 = FUN_14018b280(0x100);
                        *(undefined8 *)(uVar14 + 0x18) = uVar18;
                        FUN_1407e4830();
                    }
                    else if (*(longlong *)
                            (*(longlong *)(uVar14 + 0x18) + (ulonglong)*(uint *)(lVar17 + 8) * 8) != 0)
                        break;
                    if (*(uint *)(lVar17 + 8) < 0x20) {
                        *(longlong *)(*(longlong *)(uVar14 + 0x18) + (ulonglong)*(uint *)(lVar17 + 8) * 8) =
                                lVar17;
                    }
                    break;
                }
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < uVar9);
    }
    lVar17 = 0;
    if ((uint)local_res8 != 0) {
        do {
            plVar25 = (longlong *)(*(longlong *)(lVar7 + 0x18) + lVar17);
            local_res8 = local_res8 & 0xffffffff00000000 | (ulonglong)*(uint *)(*plVar25 + 0x44);
            if (*(uint *)(*plVar25 + 0x44) != 0) {
                uVar14 = (**(code **)(lVar7 + 0x38))(&local_res8);
                for (puVar15 = *(ulonglong **)
                        (*(longlong *)(lVar7 + 0x30) + (uVar14 % *(ulonglong *)(lVar7 + 0x28)) * 8);
                     puVar15 != (ulonglong *)0x0; puVar15 = (ulonglong *)puVar15[1]) {
                    if ((uVar14 == *puVar15) && (iVar10 = (**(code **)(lVar7 + 0x40))(), iVar10 != 0)) {
                        if ((puVar15 + 3 != (ulonglong *)0x0) &&
                            (uVar14 = puVar15[3], *(longlong *)(uVar14 + 0x10) == 0)) {
                            *(longlong **)(uVar14 + 0x10) = plVar25;
                            plVar25[1] = uVar14;
                        }
                        break;
                    }
                }
            }
            lVar17 = lVar17 + 0x30;
            local_98 = local_98 - 1;
        } while (local_98 != 0);
    }
    if (DAT_140c63838 == (code *)0x0) {
        if (_DAT_140c638bc == 0) {
            iVar10 = FUN_1401e9680();
            if (iVar10 < 0) {
                uVar8 = 0;
            }
            else {
                uVar8 = (**(code **)(*DAT_140c64768 + 0x28))();
            }
        }
        else {
            uVar8 = 0;
        }
    }
    else {
        uVar8 = (*DAT_140c63838)(&PTR_u_AchievementCategory_140a69170,DAT_140c63858);
    }
    uVar9 = 0;
    if (uVar8 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c638bc == 0) && (iVar10 = FUN_1401e9680(), -1 < iVar10)) {
                    (**(code **)(*DAT_140c64768 + 0x20))(DAT_140c64768,uVar9);
                }
            }
            else {
                (*DAT_140c63848)(&PTR_u_AchievementCategory_140a69170,uVar9);
            }
            puVar19 = (uint *)FUN_140644c60(lVar7);
            if (puVar19 != (uint *)0x0) {
                pcVar5 = *(char **)(lVar7 + 0xa8);
                uVar2 = *puVar19;
                bVar26 = true;
                local_78 = (longlong *)((ulonglong)local_78 & 0xffffffff00000000 | (ulonglong)uVar2);
                pcVar6 = pcVar5;
                pcVar23 = *(char **)(pcVar5 + 8);
                while (pcVar23 != (char *)0x0) {
                    bVar26 = uVar2 < *(uint *)(pcVar23 + 0x20);
                    pcVar6 = pcVar23;
                    if (bVar26) {
                        pcVar23 = *(char **)(pcVar23 + 0x10);
                    }
                    else {
                        pcVar23 = *(char **)(pcVar23 + 0x18);
                    }
                }
                pcVar23 = pcVar6;
                if (bVar26) {
                    if (pcVar6 != *(char **)(pcVar5 + 0x10)) {
                        if ((*pcVar6 == '\0') && (*(char **)(*(longlong *)(pcVar6 + 8) + 8) == pcVar6)) {
                            pcVar23 = *(char **)(pcVar6 + 0x18);
                        }
                        else {
                            pcVar23 = *(char **)(pcVar6 + 0x10);
                            if (pcVar23 == (char *)0x0) {
                                pcVar23 = *(char **)(pcVar6 + 8);
                                pcVar22 = pcVar23;
                                if (pcVar6 == *(char **)(pcVar23 + 0x10)) {
                                    do {
                                        pcVar23 = *(char **)(pcVar22 + 8);
                                        bVar26 = pcVar22 == *(char **)(pcVar23 + 0x10);
                                        pcVar22 = pcVar23;
                                    } while (bVar26);
                                }
                            }
                            else {
                                for (pcVar22 = *(char **)(pcVar23 + 0x18); pcVar22 != (char *)0x0;
                                     pcVar22 = *(char **)(pcVar22 + 0x18)) {
                                    pcVar23 = pcVar22;
                                }
                            }
                        }
                        goto LAB_14064391d;
                    }
                    if ((pcVar6 != pcVar5) && (*(uint *)(pcVar6 + 0x20) <= uVar2)) goto LAB_140643815;
                    LAB_14064384d:
                    lVar17 = FUN_14018b280(0x30);
                    if ((longlong **)(lVar17 + 0x20) != (longlong **)0x0) {
                        *(longlong **)(lVar17 + 0x20) = local_78;
                        *(uint **)(lVar17 + 0x28) = puVar19;
                    }
                    *(longlong *)(pcVar6 + 0x10) = lVar17;
                    pcVar5 = *(char **)(lVar7 + 0xa8);
                    if (pcVar6 == pcVar5) {
                        *(longlong *)(pcVar5 + 8) = lVar17;
                        *(longlong *)(*(longlong *)(lVar7 + 0xa8) + 0x18) = lVar17;
                    }
                    else if (pcVar6 == *(char **)(pcVar5 + 0x10)) {
                        *(longlong *)(pcVar5 + 0x10) = lVar17;
                    }
                }
                else {
                    LAB_14064391d:
                    if (uVar2 <= *(uint *)(pcVar23 + 0x20)) goto LAB_140643946;
                    if ((pcVar6 == pcVar5) || (uVar2 < *(uint *)(pcVar6 + 0x20))) goto LAB_14064384d;
                    LAB_140643815:
                    lVar17 = FUN_14018b280(0x30);
                    if ((longlong **)(lVar17 + 0x20) != (longlong **)0x0) {
                        *(longlong **)(lVar17 + 0x20) = local_78;
                        *(uint **)(lVar17 + 0x28) = puVar19;
                    }
                    *(longlong *)(pcVar6 + 0x18) = lVar17;
                    if (pcVar6 == *(char **)(*(longlong *)(lVar7 + 0xa8) + 0x18)) {
                        *(longlong *)(*(longlong *)(lVar7 + 0xa8) + 0x18) = lVar17;
                    }
                }
                *(char **)(lVar17 + 8) = pcVar6;
                *(undefined8 *)(lVar17 + 0x10) = 0;
                *(undefined8 *)(lVar17 + 0x18) = 0;
                FUN_1400081c0();
                *(longlong *)(lVar7 + 0xb0) = *(longlong *)(lVar7 + 0xb0) + 1;
            }
            LAB_140643946:
            uVar9 = uVar9 + 1;
        } while (uVar9 < uVar8);
    }
    uVar8 = 0;
    if (DAT_140c63838 == (code *)0x0) {
        uVar9 = 0;
        if ((_DAT_140c64b14 == 0) && (iVar10 = FUN_140242f20(), -1 < iVar10)) {
            uVar9 = (**(code **)(*DAT_140c63e50 + 0x28))();
        }
    }
    else {
        uVar9 = (*DAT_140c63838)(&PTR_u_TradeskillAchievementLayout_140a6db28,DAT_140c63858);
    }
    if (uVar9 != 0) {
        do {
            lVar17 = 0;
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c64b14 == 0) && (iVar10 = FUN_140242f20(), -1 < iVar10)) {
                    lVar17 = (**(code **)(*DAT_140c63e50 + 0x20))(DAT_140c63e50,uVar8);
                }
            }
            else {
                lVar17 = (*DAT_140c63848)(&PTR_u_TradeskillAchievementLayout_140a6db28,uVar8);
            }
            pcVar5 = *(char **)(lVar7 + 200);
            uVar2 = *(uint *)(lVar17 + 4);
            bVar26 = true;
            local_78 = (longlong *)((ulonglong)local_78 & 0xffffffff00000000 | (ulonglong)uVar2);
            pcVar6 = pcVar5;
            pcVar23 = *(char **)(pcVar5 + 8);
            while (pcVar23 != (char *)0x0) {
                bVar26 = uVar2 < *(uint *)(pcVar23 + 0x20);
                pcVar6 = pcVar23;
                if (bVar26) {
                    pcVar23 = *(char **)(pcVar23 + 0x10);
                }
                else {
                    pcVar23 = *(char **)(pcVar23 + 0x18);
                }
            }
            pcVar23 = pcVar6;
            if (bVar26) {
                if (pcVar6 != *(char **)(pcVar5 + 0x10)) {
                    if ((*pcVar6 == '\0') && (*(char **)(*(longlong *)(pcVar6 + 8) + 8) == pcVar6)) {
                        pcVar23 = *(char **)(pcVar6 + 0x18);
                    }
                    else {
                        pcVar23 = *(char **)(pcVar6 + 0x10);
                        if (pcVar23 == (char *)0x0) {
                            pcVar23 = *(char **)(pcVar6 + 8);
                            pcVar22 = pcVar23;
                            if (pcVar6 == *(char **)(pcVar23 + 0x10)) {
                                do {
                                    pcVar23 = *(char **)(pcVar22 + 8);
                                    bVar26 = pcVar22 == *(char **)(pcVar23 + 0x10);
                                    pcVar22 = pcVar23;
                                } while (bVar26);
                            }
                        }
                        else {
                            for (pcVar22 = *(char **)(pcVar23 + 0x18); pcVar22 != (char *)0x0;
                                 pcVar22 = *(char **)(pcVar22 + 0x18)) {
                                pcVar23 = pcVar22;
                            }
                        }
                    }
                    goto LAB_140643b5d;
                }
                if ((pcVar6 != pcVar5) && (*(uint *)(pcVar6 + 0x20) <= uVar2)) goto LAB_140643a62;
                LAB_140643a9a:
                lVar16 = FUN_14018b280(0x30);
                if ((longlong **)(lVar16 + 0x20) != (longlong **)0x0) {
                    *(longlong **)(lVar16 + 0x20) = local_78;
                    *(longlong *)(lVar16 + 0x28) = lVar17;
                }
                *(longlong *)(pcVar6 + 0x10) = lVar16;
                pcVar5 = *(char **)(lVar7 + 200);
                if (pcVar6 == pcVar5) {
                    *(longlong *)(pcVar5 + 8) = lVar16;
                    *(longlong *)(*(longlong *)(lVar7 + 200) + 0x18) = lVar16;
                }
                else if (pcVar6 == *(char **)(pcVar5 + 0x10)) {
                    *(longlong *)(pcVar5 + 0x10) = lVar16;
                }
                LAB_140643ae6:
                *(char **)(lVar16 + 8) = pcVar6;
                *(undefined8 *)(lVar16 + 0x10) = 0;
                *(undefined8 *)(lVar16 + 0x18) = 0;
                FUN_1400081c0();
                *(longlong *)(lVar7 + 0xd0) = *(longlong *)(lVar7 + 0xd0) + 1;
            }
            else {
                LAB_140643b5d:
                if (*(uint *)(pcVar23 + 0x20) < uVar2) {
                    if ((pcVar6 == pcVar5) || (uVar2 < *(uint *)(pcVar6 + 0x20))) goto LAB_140643a9a;
                    LAB_140643a62:
                    lVar16 = FUN_14018b280(0x30);
                    if ((longlong **)(lVar16 + 0x20) != (longlong **)0x0) {
                        *(longlong **)(lVar16 + 0x20) = local_78;
                        *(longlong *)(lVar16 + 0x28) = lVar17;
                    }
                    *(longlong *)(pcVar6 + 0x18) = lVar16;
                    if (pcVar6 == *(char **)(*(longlong *)(lVar7 + 200) + 0x18)) {
                        *(longlong *)(*(longlong *)(lVar7 + 200) + 0x18) = lVar16;
                    }
                    goto LAB_140643ae6;
                }
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < uVar9);
    }
    uVar8 = 0;
    if (DAT_140c63838 == (code *)0x0) {
        uVar9 = 0;
        if ((_DAT_140c63d5c == 0) && (iVar10 = FUN_140243360(), -1 < iVar10)) {
            uVar9 = (**(code **)(*DAT_140c643a0 + 0x28))();
        }
    }
    else {
        uVar9 = (*DAT_140c63838)(&PTR_u_TradeskillAchievementReward_140a6db60,DAT_140c63858);
    }
    if (uVar9 != 0) {
        do {
            lVar17 = 0;
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c63d5c == 0) && (iVar10 = FUN_140243360(), -1 < iVar10)) {
                    lVar17 = (**(code **)(*DAT_140c643a0 + 0x20))(DAT_140c643a0,uVar8);
                }
            }
            else {
                lVar17 = (*DAT_140c63848)(&PTR_u_TradeskillAchievementReward_140a6db60);
            }
            puVar19 = (uint *)(lVar17 + 0x14);
            lVar16 = 8;
            do {
                uVar2 = *puVar19;
                if (uVar2 != 0) {
                    pcVar5 = *(char **)(lVar7 + 0xe8);
                    local_res8 = CONCAT44(*(undefined4 *)(lVar17 + 4),uVar2);
                    bVar26 = true;
                    pcVar6 = pcVar5;
                    pcVar23 = *(char **)(pcVar5 + 8);
                    while (pcVar23 != (char *)0x0) {
                        bVar26 = uVar2 < *(uint *)(pcVar23 + 0x20);
                        pcVar6 = pcVar23;
                        if (bVar26) {
                            pcVar23 = *(char **)(pcVar23 + 0x10);
                        }
                        else {
                            pcVar23 = *(char **)(pcVar23 + 0x18);
                        }
                    }
                    pcVar23 = pcVar6;
                    if (bVar26) {
                        if (pcVar6 != *(char **)(pcVar5 + 0x10)) {
                            if ((*pcVar6 == '\0') && (*(char **)(*(longlong *)(pcVar6 + 8) + 8) == pcVar6)) {
                                pcVar23 = *(char **)(pcVar6 + 0x18);
                            }
                            else {
                                pcVar23 = *(char **)(pcVar6 + 0x10);
                                if (pcVar23 == (char *)0x0) {
                                    pcVar23 = *(char **)(pcVar6 + 8);
                                    pcVar22 = pcVar23;
                                    if (pcVar6 == *(char **)(pcVar23 + 0x10)) {
                                        do {
                                            pcVar23 = *(char **)(pcVar22 + 8);
                                            bVar26 = pcVar22 == *(char **)(pcVar23 + 0x10);
                                            pcVar22 = pcVar23;
                                        } while (bVar26);
                                    }
                                }
                                else {
                                    for (pcVar22 = *(char **)(pcVar23 + 0x18); pcVar22 != (char *)0x0;
                                         pcVar22 = *(char **)(pcVar22 + 0x18)) {
                                        pcVar23 = pcVar22;
                                    }
                                }
                            }
                            goto LAB_140643dbd;
                        }
                        if ((pcVar6 != pcVar5) && (*(uint *)(pcVar6 + 0x20) <= uVar2)) goto LAB_140643cc2;
                        LAB_140643cf6:
                        lVar20 = FUN_14018b280(0x28);
                        if ((ulonglong *)(lVar20 + 0x20) != (ulonglong *)0x0) {
                            *(ulonglong *)(lVar20 + 0x20) = local_res8;
                        }
                        *(longlong *)(pcVar6 + 0x10) = lVar20;
                        pcVar5 = *(char **)(lVar7 + 0xe8);
                        if (pcVar6 == pcVar5) {
                            *(longlong *)(pcVar5 + 8) = lVar20;
                            *(longlong *)(*(longlong *)(lVar7 + 0xe8) + 0x18) = lVar20;
                        }
                        else if (pcVar6 == *(char **)(pcVar5 + 0x10)) {
                            *(longlong *)(pcVar5 + 0x10) = lVar20;
                        }
                    }
                    else {
                        LAB_140643dbd:
                        if (uVar2 <= *(uint *)(pcVar23 + 0x20)) goto LAB_140643de6;
                        if ((pcVar6 == pcVar5) || (uVar2 < *(uint *)(pcVar6 + 0x20))) goto LAB_140643cf6;
                        LAB_140643cc2:
                        lVar20 = FUN_14018b280(0x28);
                        if ((ulonglong *)(lVar20 + 0x20) != (ulonglong *)0x0) {
                            *(ulonglong *)(lVar20 + 0x20) = local_res8;
                        }
                        *(longlong *)(pcVar6 + 0x18) = lVar20;
                        if (pcVar6 == *(char **)(*(longlong *)(lVar7 + 0xe8) + 0x18)) {
                            *(longlong *)(*(longlong *)(lVar7 + 0xe8) + 0x18) = lVar20;
                        }
                    }
                    *(char **)(lVar20 + 8) = pcVar6;
                    *(undefined8 *)(lVar20 + 0x10) = 0;
                    *(undefined8 *)(lVar20 + 0x18) = 0;
                    FUN_1400081c0();
                    *(longlong *)(lVar7 + 0xf0) = *(longlong *)(lVar7 + 0xf0) + 1;
                }
                LAB_140643de6:
                puVar19 = puVar19 + 1;
                lVar16 = lVar16 + -1;
            } while (lVar16 != 0);
            uVar8 = uVar8 + 1;
        } while (uVar8 < uVar9);
    }
    return 0;
}



ulonglong FUN_140643e20(longlong param_1,undefined4 param_2)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;
    undefined4 local_res10 [2];

    local_res10[0] = param_2;
    uVar3 = (**(code **)(param_1 + 0x38))(local_res10);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x30) + (uVar3 % *(ulonglong *)(param_1 + 0x28)) * 8);
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar3 == *puVar1) &&
            (iVar2 = (**(code **)(param_1 + 0x40))(local_res10,puVar1 + 2), iVar2 != 0)) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    if (puVar1 + 3 == (ulonglong *)0x0) {
        return 0;
    }
    return puVar1[3];
}



undefined8 FUN_140643ea0(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x70);
    local_res8 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < param_2) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res8 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res8 == lVar1) || (param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    if (local_res8 != lVar1) {
        return *(undefined8 *)(local_res8 + 0x28);
    }
    return 0;
}



void FUN_140643f00(longlong param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                   longlong param_5,int param_6,int param_7)

{
    short sVar1;
    uint uVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    undefined8 uVar5;
    longlong lVar6;
    int iVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    int iVar10;
    longlong *plVar11;
    short *psVar12;
    longlong lVar13;
    longlong *plVar14;
    longlong *plVar15;
    longlong *plVar16;
    uint local_res10 [2];
    undefined4 local_res18;
    ulonglong local_148;
    longlong *local_140;
    undefined local_138 [8];
    longlong local_130;
    undefined2 *local_128;
    longlong local_120;
    undefined local_118 [8];
    undefined local_110 [8];
    undefined2 *local_108;
    undefined2 *local_100;
    longlong local_58;

    uVar3 = *(ulonglong *)(param_1 + 0x70);
    local_148 = uVar3;
    uVar4 = *(ulonglong *)(uVar3 + 8);
    while (uVar4 != 0) {
        if (*(uint *)(uVar4 + 0x20) < param_2) {
            uVar4 = *(ulonglong *)(uVar4 + 0x18);
        }
        else {
            local_148 = uVar4;
            uVar4 = *(ulonglong *)(uVar4 + 0x10);
        }
    }
    if ((local_148 == uVar3) || (param_2 < *(uint *)(local_148 + 0x20))) {
        local_148 = uVar3;
    }
    plVar15 = (longlong *)0x0;
    iVar10 = 0;
    plVar16 = plVar15;
    if (local_148 != *(ulonglong *)(param_1 + 0x70)) {
        plVar16 = *(longlong **)(local_148 + 0x28);
    }
    local_res10[0] = param_2;
    local_res18 = param_3;
    if (plVar16 == (longlong *)0x0) {
        if (param_7 == 0) {
            lVar13 = FUN_140643e20(param_1,param_2);
            if (lVar13 == 0) {
                return;
            }
            plVar11 = (longlong *)FUN_14018b280(0x30,0);
            plVar16 = plVar15;
            if (plVar11 != (longlong *)0x0) {
                plVar11[1] = 0;
                *(uint *)(plVar11 + 2) = param_2;
                *(undefined4 *)((longlong)plVar11 + 0x14) = local_res18;
                *(undefined4 *)(plVar11 + 3) = param_4;
                plVar11[4] = param_5;
                *(undefined4 *)((longlong)plVar11 + 0x1c) = 0;
                *plVar11 = (longlong)&PTR_FUN_140b67218;
                plVar11[5] = lVar13;
                plVar16 = plVar11;
            }
            local_148 = local_148 & 0xffffffff00000000 | (ulonglong)param_2;
            local_140 = plVar16;
            FUN_140055f80(param_1 + 0x68,local_138,&local_148);
        }
    }
    else if (param_7 == 0) {
        *(undefined4 *)((longlong)plVar16 + 0x14) = param_3;
        *(undefined4 *)(plVar16 + 3) = param_4;
        plVar16[4] = param_5;
    }
    else {
        (**(code **)*plVar16)(plVar16,1);
        FUN_140645120(param_1 + 0x68,local_res10);
        plVar16 = plVar15;
    }
    plVar11 = (longlong *)FUN_140643e20(param_1,param_2);
    if (param_6 == 0) {
        if (plVar16 == (longlong *)0x0) goto LAB_14064448f;
        if (((param_7 == 0) && ((*(byte *)(*plVar11 + 0xc) & 2) == 0)) &&
            (*(int *)(*plVar11 + 0x14) != 0)) {
            if (plVar16[4] == 0) {
                iVar7 = FUN_140644d30();
                if ((iVar7 == 5) && (iVar7 = FUN_1406428d0(plVar11), iVar7 != 5)) {
                    uVar5 = *(undefined8 *)(DAT_140c65898 + 0x7340);
                    uVar8 = FUN_14048c320(plVar11);
                    uVar9 = FUN_14048c3d0(plVar11);
                    FUN_1400ea3e0(uVar5,"TradeskillAchievementUpdate",&DAT_1409ef29c,plVar11,uVar9,uVar8);
                }
            }
            else {
                iVar7 = FUN_1400a7fd0(param_1);
                if (iVar7 != 0) {
                    FUN_1404dde90(local_118);
                    psVar12 = (short *)FUN_14034bdd0();
                    if (psVar12 == (short *)0x0) {
                        if (local_108 != local_100) {
                            *local_108 = 0;
                            local_100 = local_108;
                        }
                    }
                    else {
                        sVar1 = *psVar12;
                        plVar14 = plVar15;
                        while (sVar1 != 0) {
                            plVar14 = (longlong *)((longlong)plVar14 + 1);
                            sVar1 = psVar12[(longlong)plVar14];
                        }
                        FUN_14001c480(local_110,psVar12,psVar12 + (longlong)plVar14);
                    }
                    lVar13 = FUN_14018b280(0x60);
                    plVar14 = plVar15;
                    if (lVar13 != 0) {
                        plVar14 = (longlong *)FUN_1404ddaf0(lVar13,*(undefined4 *)(*plVar11 + 0x14));
                    }
                    (**(code **)(*plVar14 + 0x78))
                            (plVar14,*(undefined4 *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x34));
                    local_130 = 0;
                    local_128 = (undefined2 *)0x0;
                    local_120 = 0;
                    do {
                        lVar13 = (longlong)plVar15 + 1;
                        plVar15 = (longlong *)((longlong)plVar15 + 1);
                    } while (L"achievement"[lVar13] != L'\0');
                    local_148 = (longlong)plVar15 * 2 >> 1;
                    if (local_148 + 1 < 0x7fffffffffffffff) {
                        lVar13 = (local_148 + 1) * 2;
                        local_128 = (undefined2 *)FUN_14018b280(lVar13,0);
                        local_120 = lVar13 + (longlong)local_128;
                    }
                    lVar6 = (longlong)local_128;
                    lVar13 = local_148 * 2;
                    local_130 = (longlong)local_128;
                    FUN_1407db590(local_128,L"achievement",lVar13);
                    local_128 = (undefined2 *)(lVar13 + lVar6);
                    if (local_128 != (undefined2 *)0x0) {
                        *local_128 = 0;
                    }
                    FUN_1400b7480(local_118,plVar14);
                    (**(code **)(*plVar14 + 0x48))(plVar14,local_138);
                    if (local_130 != 0) {
                        FUN_14018b900(local_130,0);
                    }
                    lVar13 = FUN_1400b7660(local_118);
                    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"AlertAchievement",&DAT_1409eed2c,
                                  *(undefined8 *)(lVar13 + 8));
                    FUN_140437a10(DAT_140c658d8,0x48,0,0,0,0,1);
                    if (local_58 != 0) {
                        FUN_14018b900(local_58,0);
                    }
                    FUN_1400b7390(local_118);
                }
                iVar7 = FUN_140644d30();
                if (iVar7 == 5) {
                    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"TradeskillAchievementComplete",
                                  &DAT_1409ef2f4,*(undefined4 *)*plVar11);
                }
            }
        }
        if (plVar16[4] != 0) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"AchievementGranted",&DAT_1409e956c,
                          plVar11);
        }
        iVar7 = FUN_1406428d0(plVar11);
        if ((iVar7 == 3) && (DAT_140c65b78 != 0)) {
            FUN_140575dd0();
        }
    }
    if ((plVar16 == (longlong *)0x0) || (plVar16[4] == 0)) goto LAB_14064448f;
    if (DAT_140c65b78 != 0) {
        FUN_140575dd0();
    }
    lVar13 = *plVar11;
    uVar2 = *(uint *)(lVar13 + 0xc);
    if ((uVar2 & 4) == 0) {
        if ((uVar2 & 2) == 0) {
            iVar7 = *(int *)(lVar13 + 0x54);
            if (iVar7 == 1) {
                iVar10 = 10;
            }
            else if (iVar7 == 2) {
                iVar10 = 0x19;
            }
            else if (iVar7 == 3) {
                iVar10 = 0x32;
            }
        }
        *(int *)(DAT_140c65898 + 0x7f74) = *(int *)(DAT_140c65898 + 0x7f74) + iVar10;
        goto LAB_140644416;
    }
    if ((uVar2 & 2) == 0) {
        iVar7 = *(int *)(lVar13 + 0x54);
        if (iVar7 == 1) {
            iVar10 = 10;
            goto LAB_1406443d6;
        }
        if (iVar7 == 2) {
            *(int *)(DAT_140c65898 + 0x7f78) = *(int *)(DAT_140c65898 + 0x7f78) + 0x19;
        }
        else {
            if (iVar7 != 3) goto LAB_1406443d6;
            *(int *)(DAT_140c65898 + 0x7f78) = *(int *)(DAT_140c65898 + 0x7f78) + 0x32;
        }
    }
    else {
        LAB_1406443d6:
        *(int *)(DAT_140c65898 + 0x7f78) = *(int *)(DAT_140c65898 + 0x7f78) + iVar10;
    }
    LAB_140644416:
    plVar15 = (longlong *)FUN_140643e20(param_1,*(undefined4 *)(plVar16 + 2));
    if ((((plVar15 != (longlong *)0x0) && ((*(byte *)(*plVar15 + 0xc) & 2) == 0)) &&
         (iVar10 = FUN_140644d30(), iVar10 != 5)) && (iVar10 != 0x2e)) {
        local_res10[0] = *(uint *)(plVar16 + 2);
        FUN_140003460(param_1 + 0x100,local_res10);
        FUN_140029250(param_1 + 0x100,&LAB_140642c30,0);
    }
    if ((DAT_140c63630 != 0) && (*(int *)(DAT_140c63630 + 0x38) != 0)) {
        FUN_140055450();
    }
    LAB_14064448f:
    *(undefined4 *)(DAT_140c65898 + 0x6f98) = 1;
    return;
}



void FUN_1406444c0(undefined8 param_1,longlong param_2,uint param_3)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    longlong *plVar4;
    longlong lVar5;
    longlong lVar6;

    lVar2 = DAT_140c65c28;
    lVar6 = *(longlong *)(*(longlong *)(DAT_140c65c28 + 0x70) + 0x10);
    if (lVar6 != *(longlong *)(DAT_140c65c28 + 0x70)) {
        do {
            plVar4 = *(longlong **)(*(longlong *)(lVar6 + 0x28) + 0x28);
            lVar5 = *plVar4;
            if (((((*(uint *)(lVar5 + 0xc) & 2) == 0) && (param_3 == (*(uint *)(lVar5 + 0xc) >> 2 & 1)))
                 && (iVar3 = FUN_140644d30(lVar5,*(undefined4 *)(lVar5 + 8)), iVar3 != 5)) &&
                ((iVar3 != 0x2e &&
                  ((*(int *)(*plVar4 + 0x34) == 0 ||
                    (iVar3 = (**(code **)(*DAT_140c659a0 + 0x18))(), iVar3 != 0)))))) {
                lVar5 = *(longlong *)(param_2 + 8);
                plVar4 = (longlong *)FUN_14018b280(0x18);
                if (plVar4 + 2 != (longlong *)0x0) {
                    plVar4[2] = *(longlong *)(lVar6 + 0x28);
                }
                *plVar4 = lVar5;
                plVar4[1] = *(longlong *)(lVar5 + 8);
                **(longlong ***)(lVar5 + 8) = plVar4;
                *(longlong **)(lVar5 + 8) = plVar4;
            }
            lVar5 = *(longlong *)(lVar6 + 0x18);
            if (lVar5 == 0) {
                lVar5 = *(longlong *)(lVar6 + 8);
                if (lVar6 == *(longlong *)(lVar5 + 0x18)) {
                    do {
                        lVar6 = lVar5;
                        lVar5 = *(longlong *)(lVar6 + 8);
                    } while (lVar6 == *(longlong *)(lVar5 + 0x18));
                }
                if (*(longlong *)(lVar6 + 0x18) != lVar5) {
                    lVar6 = lVar5;
                }
            }
            else {
                for (lVar1 = *(longlong *)(lVar5 + 0x10); lVar6 = lVar5, lVar1 != 0;
                     lVar1 = *(longlong *)(lVar1 + 0x10)) {
                    lVar5 = lVar1;
                }
            }
        } while (lVar6 != *(longlong *)(lVar2 + 0x70));
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140644610(undefined8 param_1,int param_2,longlong param_3,uint param_4,int param_5,
                   int param_6)

{
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    int iVar5;
    longlong lVar6;
    longlong *plVar7;
    longlong lVar8;

    lVar3 = DAT_140c65c28;
    lVar8 = *(longlong *)(*(longlong *)(DAT_140c65c28 + 0x70) + 0x10);
    if (lVar8 != *(longlong *)(DAT_140c65c28 + 0x70)) {
        do {
            plVar7 = *(longlong **)(*(longlong *)(lVar8 + 0x28) + 0x28);
            lVar6 = *plVar7;
            uVar1 = *(uint *)(lVar6 + 0xc);
            if (((((uVar1 & 2) == 0) && (param_4 == (uVar1 >> 2 & 1))) &&
                 ((iVar4 = *(int *)(lVar6 + 0x34), iVar4 == 0 ||
                                                   (iVar4 = (**(code **)(*DAT_140c659a0 + 0x18))
                                                           (DAT_140c659a0,*(undefined8 *)(DAT_140c65898 + 0x78),iVar4,0,0,0),
                                                           iVar4 != 0)))) &&
                ((iVar4 = *(int *)(*plVar7 + 8), param_6 == 0 ||
                                                 ((iVar5 = FUN_140644d30(), iVar5 != 5 && (iVar5 != 0x2e)))))) {
                if (param_5 == 0) {
                    if (iVar4 == param_2) {
                        LAB_140644752:
                        lVar6 = *(longlong *)(param_3 + 8);
                        plVar7 = (longlong *)FUN_14018b280(0x18);
                        if (plVar7 + 2 != (longlong *)0x0) {
                            plVar7[2] = *(longlong *)(lVar8 + 0x28);
                        }
                        *plVar7 = lVar6;
                        plVar7[1] = *(longlong *)(lVar6 + 8);
                        **(longlong ***)(lVar6 + 8) = plVar7;
                        *(longlong **)(lVar6 + 8) = plVar7;
                    }
                }
                else if (iVar4 != 0) {
                    do {
                        if (iVar4 == param_2) goto LAB_140644752;
                        if (DAT_140c63840 == (code *)0x0) {
                            if ((_DAT_140c638bc != 0) || (iVar4 = FUN_1401e9680(), iVar4 < 0)) break;
                            lVar6 = (**(code **)(*DAT_140c64768 + 0x18))();
                        }
                        else {
                            lVar6 = (*DAT_140c63840)();
                        }
                        if ((lVar6 == 0) || (iVar4 = *(int *)(lVar6 + 0xc), iVar4 == 0)) break;
                    } while( true );
                }
            }
            lVar6 = *(longlong *)(lVar8 + 0x18);
            if (lVar6 == 0) {
                lVar6 = *(longlong *)(lVar8 + 8);
                if (lVar8 == *(longlong *)(lVar6 + 0x18)) {
                    do {
                        lVar8 = lVar6;
                        lVar6 = *(longlong *)(lVar8 + 8);
                    } while (lVar8 == *(longlong *)(lVar6 + 0x18));
                }
                if (*(longlong *)(lVar8 + 0x18) != lVar6) {
                    lVar8 = lVar6;
                }
            }
            else {
                for (lVar2 = *(longlong *)(lVar6 + 0x10); lVar8 = lVar6, lVar2 != 0;
                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                    lVar6 = lVar2;
                }
            }
        } while (lVar8 != *(longlong *)(lVar3 + 0x70));
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140644800(longlong param_1,longlong param_2)

{
    undefined4 uVar1;
    longlong lVar2;
    uint uVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    longlong *plVar9;
    longlong lVar10;
    ulonglong uVar11;
    longlong lVar12;
    longlong local_res8;
    longlong local_res18 [2];

    lVar2 = DAT_140c65c28;
    lVar12 = 0;
    local_res8 = param_1;
    if (DAT_140c63838 == (code *)0x0) {
        uVar3 = 0;
        if (_DAT_140c64944 == 0) {
            iVar4 = FUN_1401e9240();
            if (iVar4 < 0) {
                uVar3 = 0;
            }
            else {
                uVar3 = (**(code **)(*DAT_140c64218 + 0x28))();
            }
        }
    }
    else {
        uVar3 = (*DAT_140c63838)(&PTR_u_Achievement_140a69138,DAT_140c63858);
    }
    if (uVar3 != 0) {
        uVar11 = (ulonglong)uVar3;
        do {
            lVar6 = *(longlong *)(lVar2 + 0x18);
            uVar1 = *(undefined4 *)(*(longlong *)(lVar6 + lVar12) + 0x10);
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c64634 == 0) && (iVar4 = FUN_14024d920(), -1 < iVar4)) {
                    lVar5 = (**(code **)(*DAT_140c64270 + 0x18))(DAT_140c64270,uVar1);
                    goto LAB_1406448d4;
                }
            }
            else {
                lVar5 = (*DAT_140c63840)(&PTR_u_WorldZone_140a6e3e8);
                LAB_1406448d4:
                if (lVar5 != 0) {
                    lVar5 = *(longlong *)(param_2 + 8);
                    lVar6 = *(longlong *)(lVar6 + lVar12);
                    lVar10 = lVar5;
                    if (*(longlong *)(lVar5 + 8) != 0) {
                        lVar7 = *(longlong *)(lVar5 + 8);
                        do {
                            if (*(uint *)(lVar7 + 0x20) < *(uint *)(lVar6 + 0x10)) {
                                lVar8 = *(longlong *)(lVar7 + 0x18);
                            }
                            else {
                                lVar8 = *(longlong *)(lVar7 + 0x10);
                                lVar10 = lVar7;
                            }
                            lVar7 = lVar8;
                        } while (lVar8 != 0);
                    }
                    if ((lVar10 == lVar5) || (*(uint *)(lVar6 + 0x10) < *(uint *)(lVar10 + 0x20))) {
                        local_res18[0] = lVar5;
                        plVar9 = local_res18;
                    }
                    else {
                        local_res8 = lVar10;
                        plVar9 = &local_res8;
                    }
                    if ((*plVar9 == lVar5) && (lVar6 = FUN_14034bdd0(), lVar6 != 0)) {
                        FUN_140055f80(param_2);
                    }
                }
            }
            lVar12 = lVar12 + 0x30;
            uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1406449a0(undefined8 param_1,longlong param_2,uint param_3)

{
    longlong *plVar1;
    char *pcVar2;
    char *pcVar3;
    longlong lVar4;
    longlong lVar5;
    int iVar6;
    longlong lVar7;
    char *pcVar8;
    char *pcVar9;
    longlong lVar10;
    uint uVar11;
    bool bVar12;

    lVar5 = DAT_140c65c28;
    lVar10 = *(longlong *)(*(longlong *)(DAT_140c65c28 + 0x70) + 0x10);
    if (lVar10 != *(longlong *)(DAT_140c65c28 + 0x70)) {
        do {
            plVar1 = *(longlong **)(*(longlong *)(lVar10 + 0x28) + 0x28);
            lVar7 = *plVar1;
            if ((((((*(uint *)(lVar7 + 0xc) & 2) == 0) && (param_3 == (*(uint *)(lVar7 + 0xc) >> 2 & 1)))
                  && (iVar6 = FUN_140644d30(lVar7,*(undefined4 *)(lVar7 + 8)), iVar6 != 5)) &&
                 (iVar6 != 0x2e)) &&
                (((*(int *)(*plVar1 + 0x34) == 0 ||
                   (iVar6 = (**(code **)(*DAT_140c659a0 + 0x18))(), iVar6 != 0)) &&
                  (uVar11 = *(uint *)(*plVar1 + 8), uVar11 != 0)))) {
                do {
                    pcVar2 = *(char **)(param_2 + 8);
                    bVar12 = true;
                    pcVar3 = pcVar2;
                    pcVar9 = *(char **)(pcVar2 + 8);
                    while (pcVar9 != (char *)0x0) {
                        bVar12 = uVar11 < *(uint *)(pcVar9 + 0x20);
                        pcVar3 = pcVar9;
                        if (bVar12) {
                            pcVar9 = *(char **)(pcVar9 + 0x10);
                        }
                        else {
                            pcVar9 = *(char **)(pcVar9 + 0x18);
                        }
                    }
                    pcVar9 = pcVar3;
                    if (bVar12) {
                        if (pcVar3 != *(char **)(pcVar2 + 0x10)) {
                            if ((*pcVar3 == '\0') && (*(char **)(*(longlong *)(pcVar3 + 8) + 8) == pcVar3)) {
                                pcVar9 = *(char **)(pcVar3 + 0x18);
                            }
                            else {
                                pcVar9 = *(char **)(pcVar3 + 0x10);
                                if (pcVar9 == (char *)0x0) {
                                    pcVar9 = *(char **)(pcVar3 + 8);
                                    pcVar8 = pcVar9;
                                    if (pcVar3 == *(char **)(pcVar9 + 0x10)) {
                                        do {
                                            pcVar9 = *(char **)(pcVar8 + 8);
                                            bVar12 = pcVar8 == *(char **)(pcVar9 + 0x10);
                                            pcVar8 = pcVar9;
                                        } while (bVar12);
                                    }
                                }
                                else {
                                    for (pcVar8 = *(char **)(pcVar9 + 0x18); pcVar8 != (char *)0x0;
                                         pcVar8 = *(char **)(pcVar8 + 0x18)) {
                                        pcVar9 = pcVar8;
                                    }
                                }
                            }
                            goto LAB_140644afd;
                        }
                        LAB_140644b06:
                        if ((pcVar3 == pcVar2) || (uVar11 < *(uint *)(pcVar3 + 0x20))) {
                            lVar7 = FUN_14018b280(0x28);
                            if ((uint *)(lVar7 + 0x20) != (uint *)0x0) {
                                *(uint *)(lVar7 + 0x20) = uVar11;
                            }
                            *(longlong *)(pcVar3 + 0x10) = lVar7;
                            pcVar2 = *(char **)(param_2 + 8);
                            if (pcVar3 == pcVar2) {
                                *(longlong *)(pcVar2 + 8) = lVar7;
                                *(longlong *)(*(longlong *)(param_2 + 8) + 0x18) = lVar7;
                            }
                            else if (pcVar3 == *(char **)(pcVar2 + 0x10)) {
                                *(longlong *)(pcVar2 + 0x10) = lVar7;
                            }
                        }
                        else {
                            lVar7 = FUN_14018b280(0x28);
                            if ((uint *)(lVar7 + 0x20) != (uint *)0x0) {
                                *(uint *)(lVar7 + 0x20) = uVar11;
                            }
                            *(longlong *)(pcVar3 + 0x18) = lVar7;
                            if (pcVar3 == *(char **)(*(longlong *)(param_2 + 8) + 0x18)) {
                                *(longlong *)(*(longlong *)(param_2 + 8) + 0x18) = lVar7;
                            }
                        }
                        *(char **)(lVar7 + 8) = pcVar3;
                        *(undefined8 *)(lVar7 + 0x10) = 0;
                        *(undefined8 *)(lVar7 + 0x18) = 0;
                        FUN_1400081c0();
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 1;
                    }
                    else {
                        LAB_140644afd:
                        if (*(uint *)(pcVar9 + 0x20) < uVar11) goto LAB_140644b06;
                    }
                    if (DAT_140c63840 == (code *)0x0) {
                        if ((_DAT_140c638bc != 0) || (iVar6 = FUN_1401e9680(), iVar6 < 0)) break;
                        lVar7 = (**(code **)(*DAT_140c64768 + 0x18))();
                    }
                    else {
                        lVar7 = (*DAT_140c63840)(&PTR_u_AchievementCategory_140a69170);
                    }
                    if ((lVar7 == 0) || (uVar11 = *(uint *)(lVar7 + 0xc), uVar11 == 0)) break;
                } while( true );
            }
            lVar7 = *(longlong *)(lVar10 + 0x18);
            if (lVar7 == 0) {
                lVar7 = *(longlong *)(lVar10 + 8);
                if (lVar10 == *(longlong *)(lVar7 + 0x18)) {
                    do {
                        lVar10 = lVar7;
                        lVar7 = *(longlong *)(lVar10 + 8);
                    } while (lVar10 == *(longlong *)(lVar7 + 0x18));
                }
                if (*(longlong *)(lVar10 + 0x18) != lVar7) {
                    lVar10 = lVar7;
                }
            }
            else {
                for (lVar4 = *(longlong *)(lVar7 + 0x10); lVar10 = lVar7, lVar4 != 0;
                     lVar4 = *(longlong *)(lVar4 + 0x10)) {
                    lVar7 = lVar4;
                }
            }
        } while (lVar10 != *(longlong *)(lVar5 + 0x70));
    }
    return;
}



int * FUN_140644c60(longlong param_1,int *param_2)

{
    longlong lVar1;
    undefined8 uVar2;
    ulonglong uVar3;
    longlong lVar4;
    int *piVar5;
    int local_28 [2];
    undefined8 local_20;
    undefined8 local_18;

    if (param_2 != (int *)0x0) {
        if (param_2[3] == 0) {
            param_1 = param_1 + 0x88;
        }
        else {
            uVar2 = FUN_1401e98e0();
            param_1 = FUN_140644c60(param_1,uVar2);
        }
        if (param_1 != 0) {
            uVar3 = 0;
            if (*(ulonglong *)(param_1 + 0x10) != 0) {
                piVar5 = *(int **)(param_1 + 8);
                do {
                    if (*piVar5 == *param_2) {
                        return *(int **)(param_1 + 8) + uVar3 * 6;
                    }
                    uVar3 = uVar3 + 1;
                    piVar5 = piVar5 + 6;
                } while (uVar3 < *(ulonglong *)(param_1 + 0x10));
            }
            local_28[0] = *param_2;
            local_18 = 0;
            local_20 = 0;
            lVar4 = FUN_140645020(param_1 + 8,local_28);
            lVar1 = *(longlong *)(param_1 + 8);
            FUN_140644fb0(&local_20);
            return (int *)(lVar1 + lVar4 * 0x18);
        }
    }
    return (int *)0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140644d30(undefined8 param_1,int param_2)

{
    int iVar1;
    longlong lVar2;
    int iVar3;

    if (param_2 == 0) {
        return 0;
    }
    do {
        iVar3 = param_2;
        if (DAT_140c63840 == (code *)0x0) {
            if ((_DAT_140c638bc != 0) || (iVar1 = FUN_1401e9680(), iVar1 < 0)) {
                return iVar3;
            }
            lVar2 = (**(code **)(*DAT_140c64768 + 0x18))(DAT_140c64768,iVar3);
        }
        else {
            lVar2 = (*DAT_140c63840)(&PTR_u_AchievementCategory_140a69170,iVar3,DAT_140c63858);
        }
        if (lVar2 == 0) {
            return iVar3;
        }
        param_2 = *(int *)(lVar2 + 0xc);
    } while (*(int *)(lVar2 + 0xc) != 0);
    return iVar3;
}



undefined8 FUN_140644db0(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(DAT_140c65c28 + 200);
    local_res8 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < param_2) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res8 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res8 == lVar1) || (param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    if (local_res8 == lVar1) {
        return 0;
    }
    return *(undefined8 *)(local_res8 + 0x28);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_140644e10(undefined8 param_1,int param_2,int param_3)

{
    undefined4 uVar1;
    longlong *plVar2;
    longlong lVar3;
    int iVar4;
    longlong lVar5;
    longlong **pplVar6;
    code *pcVar7;

    lVar3 = DAT_140c65c28;
    pplVar6 = *(longlong ***)(DAT_140c65c28 + 0x50);
    pcVar7 = DAT_140c63840;
    if (pplVar6 != *(longlong ***)(DAT_140c65c28 + 0x58)) {
        do {
            plVar2 = *pplVar6;
            uVar1 = *(undefined4 *)(*plVar2 + 0x24);
            if (pcVar7 == (code *)0x0) {
                if ((_DAT_140c63e34 == 0) && (iVar4 = FUN_140246220(), pcVar7 = DAT_140c63840, -1 < iVar4))
                {
                    lVar5 = (**(code **)(*DAT_140c64160 + 0x18))(DAT_140c64160,uVar1);
                    goto LAB_140644e94;
                }
            }
            else {
                lVar5 = (*pcVar7)(&PTR_u_TradeskillTier_140a6ddc8,uVar1,DAT_140c63858);
                LAB_140644e94:
                pcVar7 = DAT_140c63840;
                if (((lVar5 != 0) && (*(int *)(lVar5 + 4) == param_2)) && (*(int *)(lVar5 + 8) == param_3))
                {
                    return *(undefined4 *)*plVar2;
                }
            }
            pplVar6 = pplVar6 + 1;
        } while (pplVar6 != *(longlong ***)(lVar3 + 0x58));
    }
    return 0;
}



void FUN_140644ee0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong *plVar6;
    longlong local_res8;
    longlong local_res20;

    lVar4 = DAT_140c65c28;
    local_res8 = param_1;
    for (lVar5 = FUN_14043ed60(); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x10)) {
        lVar1 = *(longlong *)(lVar4 + 0x118);
        lVar3 = lVar1;
        lVar2 = *(longlong *)(lVar1 + 8);
        while (lVar2 != 0) {
            if (*(uint *)(lVar2 + 0x20) < **(uint **)(lVar5 + 8)) {
                lVar2 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                lVar3 = lVar2;
                lVar2 = *(longlong *)(lVar2 + 0x10);
            }
        }
        if ((lVar3 == lVar1) || (**(uint **)(lVar5 + 8) < *(uint *)(lVar3 + 0x20))) {
            local_res20 = lVar1;
            plVar6 = &local_res20;
        }
        else {
            local_res8 = lVar3;
            plVar6 = &local_res8;
        }
        if (*plVar6 != lVar1) {
            FUN_1400291a0(param_3,*(undefined8 *)(*plVar6 + 0x28));
        }
    }
    FUN_1403d2b70(param_3);
    return;
}



void FUN_140644fb0(longlong *param_1)

{
    longlong lVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    uVar2 = 0;
    uVar3 = uVar2;
    if (param_1[1] != 0) {
        do {
            FUN_140644fb0(*param_1 + 8 + uVar3);
            uVar2 = uVar2 + 1;
            uVar3 = uVar3 + 0x18;
        } while (uVar2 < (ulonglong)param_1[1]);
    }
    lVar1 = *param_1;
    if (lVar1 == 0) {
        return;
    }
    // WARNING: Could not recover jumptable at 0x00014064500f. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    return;
}



longlong FUN_140645020(longlong *param_1,undefined4 *param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined4 *puVar3;
    undefined4 *puVar4;
    ulonglong uVar5;

    lVar1 = param_1[1];
    puVar3 = (undefined4 *)FUN_14018db00(*param_1,lVar1 + 1,0x18);
    puVar4 = puVar3 + lVar1 * 6;
    if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *param_2;
        FUN_140645310(puVar4 + 2,param_2 + 2);
    }
    if ((undefined4 *)*param_1 != puVar3) {
        uVar5 = 0;
        if (param_1[1] != 0) {
            puVar4 = puVar3;
            do {
                if (puVar4 != (undefined4 *)0x0) {
                    *puVar4 = *(undefined4 *)((longlong)puVar4 + *param_1 + -(longlong)puVar3);
                    FUN_140645310(puVar4 + 2);
                }
                FUN_140644fb0((longlong)puVar4 + *param_1 + -(longlong)puVar3 + 8);
                uVar5 = uVar5 + 1;
                puVar4 = puVar4 + 6;
            } while (uVar5 < (ulonglong)param_1[1]);
        }
        lVar2 = *param_1;
        if (lVar2 != 0) {
            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        *param_1 = (longlong)puVar3;
    }
    param_1[1] = lVar1 + 1;
    return lVar1;
}



longlong FUN_140645120(longlong param_1,uint *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong local_res8;
    longlong local_res18 [2];

    local_res18[0] = *(longlong *)(param_1 + 8);
    lVar4 = *(longlong *)(local_res18[0] + 8);
    local_res8 = local_res18[0];
    if (lVar4 != 0) {
        lVar2 = lVar4;
        do {
            if (*param_2 < *(uint *)(lVar2 + 0x20)) {
                lVar3 = *(longlong *)(lVar2 + 0x10);
                local_res8 = lVar2;
            }
            else {
                lVar3 = *(longlong *)(lVar2 + 0x18);
            }
            lVar2 = lVar3;
        } while (lVar3 != 0);
        if (lVar4 != 0) {
            do {
                if (*(uint *)(lVar4 + 0x20) < *param_2) {
                    lVar2 = *(longlong *)(lVar4 + 0x18);
                }
                else {
                    lVar2 = *(longlong *)(lVar4 + 0x10);
                    local_res18[0] = lVar4;
                }
                lVar4 = lVar2;
            } while (lVar2 != 0);
        }
    }
    lVar4 = 0;
    lVar2 = local_res18[0];
    while (lVar2 != local_res8) {
        lVar3 = *(longlong *)(lVar2 + 0x18);
        if (lVar3 == 0) {
            lVar3 = *(longlong *)(lVar2 + 8);
            if (lVar2 == *(longlong *)(lVar3 + 0x18)) {
                do {
                    lVar2 = lVar3;
                    lVar3 = *(longlong *)(lVar2 + 8);
                } while (lVar2 == *(longlong *)(lVar3 + 0x18));
            }
            if (*(longlong *)(lVar2 + 0x18) != lVar3) {
                lVar2 = lVar3;
            }
        }
        else {
            for (lVar1 = *(longlong *)(lVar3 + 0x10); lVar2 = lVar3, lVar1 != 0;
                 lVar1 = *(longlong *)(lVar1 + 0x10)) {
                lVar3 = lVar1;
            }
        }
        lVar4 = lVar4 + 1;
    }
    FUN_1406453d0(param_1,local_res18,&local_res8);
    return lVar4;
}



void FUN_140645210(longlong param_1,longlong *param_2)

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
        iVar2 = FUN_1401971e0(&DAT_140c8aff8,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001406452d6. Too many branches
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



longlong * FUN_140645310(longlong *param_1,longlong *param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    lVar1 = param_2[1];
    param_1[1] = lVar1;
    if (lVar1 == 0) {
        puVar3 = (undefined8 *)0x0;
    }
    else {
        puVar2 = (undefined8 *)FUN_14018b280(lVar1 * 0x18 + 0x10,0);
        if (puVar2 == (undefined8 *)0x0) {
            puVar3 = (undefined8 *)&DAT_00000010;
        }
        else {
            puVar2[1] = lVar1;
            puVar3 = puVar2 + 2;
            *puVar2 = &PTR_LAB_140b55060;
        }
    }
    uVar4 = 0;
    *param_1 = (longlong)puVar3;
    uVar5 = uVar4;
    if (param_1[1] != 0) {
        do {
            if ((undefined4 *)(*param_1 + uVar5) != (undefined4 *)0x0) {
                *(undefined4 *)(*param_1 + uVar5) = *(undefined4 *)(*param_2 + uVar5);
                FUN_140645310();
            }
            uVar4 = uVar4 + 1;
            uVar5 = uVar5 + 0x18;
        } while (uVar4 < (ulonglong)param_1[1]);
    }
    return param_1;
}



void FUN_1406453d0(longlong param_1,longlong *param_2,longlong *param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    if ((*param_2 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x10)) &&
        (*param_3 == *(longlong *)(param_1 + 8))) {
        FUN_140008410();
        return;
    }
    if (*param_2 != *param_3) {
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
            FUN_140645210(param_1,&local_res8);
        } while (*param_2 != *param_3);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1406454b0(void)

{
    ulonglong uVar1;
    uint uVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    longlong *plVar8;
    uint uVar9;
    undefined8 *puVar10;
    ulonglong uVar11;

    uVar9 = 0;
    _DAT_140c7e6a4 = 0;
    _DAT_140c7e6ac = 0;
    _DAT_140c7e6b4 = 0;
    _DAT_140c7e6bc = 0;
    do {
        if (DAT_140c63838 == (code *)0x0) {
            if (_DAT_140c63e88 != 0) {
                _DAT_140c7e6a0 = 1;
                return;
            }
            iVar3 = FUN_140248420();
            if (iVar3 < 0) {
                _DAT_140c7e6a0 = 1;
                return;
            }
            uVar2 = (**(code **)(*DAT_140c63aa0 + 0x28))();
        }
        else {
            uVar2 = (*DAT_140c63838)(&PTR_u_VeteranTier_140a6df88,DAT_140c63858);
        }
        if (uVar2 <= uVar9) {
            _DAT_140c7e6a0 = 1;
            return;
        }
        if (DAT_140c63848 == (code *)0x0) {
            if ((_DAT_140c63e88 == 0) && (iVar3 = FUN_140248420(), -1 < iVar3)) {
                lVar4 = (**(code **)(*DAT_140c63aa0 + 0x20))(DAT_140c63aa0,uVar9);
                goto LAB_140645596;
            }
        }
        else {
            lVar4 = (*DAT_140c63848)(&PTR_u_VeteranTier_140a6df88,uVar9,DAT_140c63858);
            LAB_140645596:
            if (lVar4 != 0) {
                iVar3 = *(int *)(lVar4 + 8);
                if ((iVar3 != 0) && (iVar3 < 7)) {
                    uVar2 = *(uint *)(lVar4 + 4);
                    if (*(ulonglong *)(&DAT_140c7e6c8 + (longlong)iVar3 * 0x10) < (ulonglong)uVar2 ||
                        *(ulonglong *)(&DAT_140c7e6c8 + (longlong)iVar3 * 0x10) == (ulonglong)uVar2) {
                        lVar7 = (longlong)iVar3 * 0x10;
                        uVar11 = (ulonglong)(uVar2 + 1);
                        plVar8 = (longlong *)(&DAT_140c7e6c0 + lVar7);
                        if (*(ulonglong *)(&DAT_140c7e6c8 + lVar7) < uVar11 ||
                            *(ulonglong *)(&DAT_140c7e6c8 + lVar7) == uVar11) {
                            lVar5 = FUN_14018db00(*plVar8,uVar11,8);
                            uVar1 = *(ulonglong *)(&DAT_140c7e6c8 + lVar7);
                            if (uVar1 < uVar11) {
                                puVar10 = (undefined8 *)(lVar5 + uVar1 * 8);
                                for (lVar6 = (uVar2 + 1) - uVar1; lVar6 != 0; lVar6 = lVar6 + -1) {
                                    *puVar10 = 0;
                                    puVar10 = puVar10 + 1;
                                }
                            }
                            if (*plVar8 != lVar5) {
                                FUN_1407db590(lVar5,*plVar8,*(longlong *)(&DAT_140c7e6c8 + lVar7) << 3);
                                if (*plVar8 != 0) {
                                    (**(code **)(*(longlong *)(*plVar8 + -0x10) + 8))();
                                }
                                *plVar8 = lVar5;
                            }
                        }
                        *(ulonglong *)(&DAT_140c7e6c8 + lVar7) = uVar11;
                    }
                    *(longlong *)
                            (*(longlong *)(&DAT_140c7e6c0 + (longlong)*(int *)(lVar4 + 8) * 0x10) +
                             (ulonglong)*(uint *)(lVar4 + 4) * 8) = lVar4;
                    uVar2 = *(uint *)(lVar4 + 4);
                    if (*(uint *)(&DAT_140c7e6a4 + (longlong)*(int *)(lVar4 + 8) * 4) <= uVar2 &&
                        uVar2 != *(uint *)(&DAT_140c7e6a4 + (longlong)*(int *)(lVar4 + 8) * 4)) {
                        *(uint *)(&DAT_140c7e6a4 + (longlong)*(int *)(lVar4 + 8) * 4) = uVar2;
                    }
                }
            }
        }
        uVar9 = uVar9 + 1;
    } while( true );
}



undefined8 * FUN_1406456e0(undefined8 *param_1)

{
    undefined8 *puVar1;
    longlong *plVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;

    puVar4 = (undefined8 *)0x0;
    puVar1 = param_1 + 6;
    *param_1 = &PTR_LAB_140b55048;
    *(undefined4 *)(param_1 + 1) = 1;
    param_1[3] = 0;
    param_1[4] = 0;
    *param_1 = &PTR_LAB_140b6fc48;
    FUN_1401a72e0(puVar1);
    plVar2 = param_1 + 0x16;
    *(undefined4 *)(param_1 + 0x57) = 0;
    *(undefined *)((longlong)param_1 + 700) = 0;
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x10))(plVar2);
    if (puVar3 != (undefined8 *)0x0) {
        puVar3[1] = puVar1;
        puVar3[2] = 0;
        *(undefined4 *)(puVar3 + 3) = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3[8] = 0;
        puVar3[9] = 0;
        puVar3[10] = 0;
        *(undefined4 *)(puVar3 + 0xb) = 0;
        *puVar3 = &PTR_FUN_140b5eba0;
        puVar3[0xc] = 0;
        puVar4 = puVar3;
    }
    puVar4[10] = plVar2;
    FUN_1401a4c50(puVar4 + 3,L"Root");
    param_1[0x56] = puVar4;
    FUN_1401a5a70(puVar1,puVar4);
    return param_1;
}



undefined8 * FUN_1406457e0(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_LAB_140b6fc48;
    param_1[2] = 0;
    param_1[3] = 0;
    if (DAT_140c65c30 == param_1) {
        DAT_140c65c30 = (undefined8 *)0x0;
    }
    param_1[4] = 0;
    param_1[5] = 0;
    FUN_1401a76a0(param_1 + 6);
    *param_1 = &PTR_LAB_140b55048;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 FUN_140645850(longlong param_1)

{
    ushort *puVar1;
    wchar_t *pwVar2;
    longlong lVar3;
    longlong *plVar4;
    ulonglong uVar5;
    undefined8 uVar6;
    undefined *puVar7;
    wchar_t *pwVar8;
    longlong lVar9;
    longlong lVar10;
    ulonglong uVar11;

    lVar9 = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (DAT_140c65c30 == param_1) {
        DAT_140c65c30 = lVar9;
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (DAT_140c65898 == 0) {
        return 0x80004005;
    }
    lVar3 = FUN_1400f52e0(*(longlong *)(DAT_140c65898 + 0x7340) + 0xa80,L"UI\\ChatControl.xml",
                          L"ChatForm",0,0,0xfffffffe);
    *(longlong *)(param_1 + 0x10) = lVar3;
    if (lVar3 == 0) {
        return 0x80004005;
    }
    puVar7 = &DAT_140b29ef0;
    lVar10 = lVar9;
    uVar5 = 0x45;
    do {
        puVar1 = (ushort *)(puVar7 + 2);
        puVar7 = puVar7 + 2;
        lVar10 = lVar10 * 0xaa7f8ea9 + uVar5;
        uVar5 = (ulonglong)*puVar1;
    } while (*puVar1 != 0);
    lVar10 = FUN_1400d3940(lVar3,&DAT_140b29ef0,lVar10);
    *(longlong *)(param_1 + 0x20) = lVar10;
    if ((lVar10 == 0) || ((*(byte *)(lVar10 + 0x1b0) >> 2 & 1) == 0)) {
        return 0x80004005;
    }
    pwVar8 = L"Display";
    lVar10 = lVar9;
    uVar5 = 0x44;
    do {
        pwVar2 = pwVar8 + 1;
        pwVar8 = pwVar8 + 1;
        lVar10 = lVar10 * 0xaa7f8ea9 + uVar5;
        uVar5 = (ulonglong)(ushort)*pwVar2;
    } while (*pwVar2 != L'\0');
    lVar10 = FUN_1400d3940(lVar3,L"Display",lVar10);
    *(longlong *)(param_1 + 0x18) = lVar10;
    if (lVar10 == 0) {
        return 0x80004005;
    }
    if ((*(uint *)(lVar10 + 0x1b0) >> 0x14 & 1) == 0) {
        return 0x80004005;
    }
    pwVar8 = L"CloseBtn";
    lVar10 = lVar9;
    uVar5 = 0x43;
    do {
        pwVar2 = pwVar8 + 1;
        pwVar8 = pwVar8 + 1;
        lVar10 = lVar10 * 0xaa7f8ea9 + uVar5;
        uVar5 = (ulonglong)(ushort)*pwVar2;
    } while (*pwVar2 != L'\0');
    lVar10 = FUN_1400d3940(lVar3,L"CloseBtn",lVar10);
    *(longlong *)(param_1 + 0x28) = lVar10;
    if (lVar10 != 0) {
        if ((*(byte *)(lVar10 + 0x1b0) >> 1 & 1) == 0) {
            return 0x80004005;
        }
        uVar11 = 0x42;
        pwVar8 = L"BGTitle";
        lVar10 = lVar9;
        uVar5 = 0x42;
        do {
            pwVar2 = pwVar8 + 1;
            pwVar8 = pwVar8 + 1;
            lVar10 = lVar10 * 0xaa7f8ea9 + uVar5;
            uVar5 = (ulonglong)(ushort)*pwVar2;
        } while (*pwVar2 != L'\0');
        plVar4 = (longlong *)FUN_1400d3940(lVar3,L"BGTitle",lVar10);
        if (plVar4 != (longlong *)0x0) {
            pwVar8 = L"BGIcon";
            do {
                uVar5 = uVar11 & 0xffff;
                pwVar2 = pwVar8 + 1;
                uVar11 = (ulonglong)(ushort)*pwVar2;
                pwVar8 = pwVar8 + 1;
                lVar9 = lVar9 * 0xaa7f8ea9 + uVar5;
            } while (*pwVar2 != L'\0');
            lVar9 = FUN_1400d3940(lVar3,L"BGIcon",lVar9);
            if (lVar9 != 0) {
                uVar6 = FUN_14034bdd0();
                (**(code **)(*plVar4 + 0x50))(plVar4,uVar6);
                FUN_1400d2d60(lVar9,L"Icon_Windows_UI_GMIcon");
                FUN_1400d42f0(*(undefined8 *)(param_1 + 0x10),*(undefined *)(param_1 + 700),1);
                if (*(char *)(param_1 + 700) != '\0') {
                    FUN_140116200(*(undefined8 *)(param_1 + 0x18),param_1 + 0x30);
                }
                FUN_1400d3410(*(undefined8 *)(param_1 + 0x20),PTR_s_EditBoxReturn_140c2c610,
                              "OnGmChatControlReturn");
                FUN_1400f2390(*(longlong *)(DAT_140c65898 + 0x7340) + 0x180,"OnGmChatControlReturn",
                              FUN_140646ee0);
                FUN_1400d3410(*(undefined8 *)(param_1 + 0x28),PTR_s_ButtonUp_140c2c5e0,
                              "OnGmChatControlClose");
                FUN_1400f2390(*(longlong *)(DAT_140c65898 + 0x7340) + 0x180,"OnGmChatControlClose",
                              FUN_140646f80);
                DAT_140c65c30 = param_1;
                return 0;
            }
        }
        return 0x80004005;
    }
    return 0x80004005;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140645bb0(longlong param_1,longlong param_2,longlong *param_3,uint param_4)

{
    char cVar1;
    short sVar2;
    uint uVar3;
    longlong *plVar4;
    longlong lVar5;
    longlong lVar6;
    undefined auVar7 [16];
    undefined8 *puVar8;
    undefined8 uVar9;
    longlong lVar10;
    undefined8 *puVar11;
    undefined4 *puVar12;
    undefined8 *puVar13;
    wchar_t *pwVar14;
    longlong *plVar15;
    undefined8 *puVar16;
    undefined8 *puVar17;
    undefined auStack600 [32];
    uint local_238;
    longlong *local_228;
    undefined4 *local_220;
    undefined8 *local_218;
    longlong *local_210;
    undefined8 local_208;
    longlong local_200;
    undefined8 local_1f8;
    undefined8 local_1f0;
    longlong local_1e8;
    _SYSTEMTIME local_1e0;
    short local_1c8 [200];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack600;
    cVar1 = *(char *)(param_1 + 700);
    local_220 = (undefined4 *)((ulonglong)local_220 & 0xffffffff00000000 | (ulonglong)param_4);
    *(undefined *)(param_1 + 700) = 1;
    local_218 = (undefined8 *)param_2;
    local_210 = param_3;
    local_1e8 = param_1;
    if (cVar1 == '\0') {
        local_208 = 0;
        local_200 = 0;
        local_1f8 = 0;
        local_1f0 = 0;
        local_208 = FUN_14034bdd0(param_1,0x8b0db);
        if (DAT_140c65c30 == param_1) {
            FUN_140645bb0(param_1,&DAT_1409f4164,&local_208,1);
        }
    }
    FUN_1400d42f0(*(undefined8 *)(param_1 + 0x10),*(undefined *)(param_1 + 700),0);
    FUN_1400e8b00(*(undefined8 *)(DAT_140c65898 + 0x7340),*(undefined8 *)(param_1 + 0x10));
    *(int *)(param_1 + 0x2b8) = *(int *)(param_1 + 0x2b8) + 1;
    uVar3 = *(uint *)(param_1 + 0x2b8);
    while ((100 < uVar3 &&
            (plVar15 = *(longlong **)(*(longlong *)(param_1 + 0x2b0) + 0x30),
                    plVar15 != (longlong *)0x0))) {
        plVar4 = (longlong *)plVar15[10];
        (**(code **)(*plVar15 + 0x78))(plVar15,0);
        (**(code **)(*plVar4 + 0x18))(plVar4);
        *(int *)(param_1 + 0x2b8) = *(int *)(param_1 + 0x2b8) + -1;
        uVar3 = *(uint *)(param_1 + 0x2b8);
    }
    GetLocalTime(&local_1e0);
    local_238 = (uint)local_1e0.wSecond;
    FUN_14018efa0(&local_208,L"[%d:%02d:%02d] ",local_1e0.wHour,local_1e0.wMinute);
    plVar15 = (longlong *)(param_1 + 0xb0);
    local_228 = (longlong *)(param_1 + 0x30);
    puVar8 = (undefined8 *)(**(code **)(*plVar15 + 0x10))(plVar15);
    if (puVar8 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)0x0;
    }
    else {
        puVar8[1] = (longlong *)(param_1 + 0x30);
        puVar8[2] = 0;
        *(undefined4 *)(puVar8 + 3) = 0;
        puVar8[4] = 0;
        puVar8[5] = 0;
        puVar8[6] = 0;
        puVar8[7] = 0;
        puVar8[8] = 0;
        puVar8[9] = 0;
        puVar8[10] = 0;
        *puVar8 = &PTR_FUN_140b5eba0;
        *(undefined4 *)(puVar8 + 0xb) = 0;
        puVar8[0xc] = 0;
    }
    puVar16 = (undefined8 *)0x0;
    puVar8[10] = plVar15;
    if ((*(uint *)(puVar8 + 3) & 0x200) != 0) {
        FUN_14018b900(puVar8[4],0);
    }
    *(undefined4 *)(puVar8 + 3) = 0;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar17 = puVar16;
    do {
        puVar11 = puVar17;
        puVar17 = (undefined8 *)((longlong)puVar11 + 1);
    } while ((&DAT_1409db474)[(longlong)puVar17] != 0);
    auVar7 = ZEXT816(2) * ZEXT816((longlong)puVar11 + 2);
    uVar9 = SUB168(auVar7,0);
    if (SUB168(auVar7 >> 0x40,0) != 0) {
        uVar9 = 0xffffffffffffffff;
    }
    uVar9 = FUN_14018b280(uVar9,0);
    puVar8[4] = uVar9;
    FUN_1407db590(uVar9,&DAT_1409db474,(longlong)puVar17 * 2 + 2);
    *(undefined4 *)(puVar8 + 3) = 0x200;
    puVar8[5] = puVar8[4] + (longlong)puVar17 * 2;
    lVar10 = FUN_1401a6c70(puVar8,L"TextColor");
    pwVar14 = L"FF7FFFFF";
    if (param_4 != 0) {
        pwVar14 = L"FFFF9FFF";
    }
    FUN_1401a4c50(lVar10 + 0x20,pwVar14);
    lVar10 = FUN_1401a6c70(puVar8,&DAT_140a31aa8);
    if ((*(uint *)(lVar10 + 0x20) & 0x200) != 0) {
        FUN_14018b900(*(undefined8 *)(lVar10 + 0x28),0);
    }
    *(undefined4 *)(lVar10 + 0x20) = 0;
    *(undefined8 *)(lVar10 + 0x28) = 0;
    *(undefined8 *)(lVar10 + 0x30) = 0;
    puVar17 = puVar16;
    do {
        puVar11 = puVar17;
        puVar17 = (undefined8 *)((longlong)puVar11 + 1);
    } while (L"Default"[(longlong)puVar11 + 1] != L'\0');
    auVar7 = ZEXT816(2) * ZEXT816((longlong)puVar11 + 2);
    uVar9 = SUB168(auVar7,0);
    if (SUB168(auVar7 >> 0x40,0) != 0) {
        uVar9 = 0xffffffffffffffff;
    }
    uVar9 = FUN_14018b280(uVar9,0);
    *(undefined8 *)(lVar10 + 0x28) = uVar9;
    FUN_1407db590(uVar9,L"Default",(longlong)puVar17 * 2 + 2);
    *(undefined4 *)(lVar10 + 0x20) = 0x200;
    *(longlong *)(lVar10 + 0x30) = *(longlong *)(lVar10 + 0x28) + (longlong)puVar17 * 2;
    lVar10 = FUN_1401a6c70(puVar8,L"Align");
    if ((*(uint *)(lVar10 + 0x20) & 0x200) != 0) {
        FUN_14018b900(*(undefined8 *)(lVar10 + 0x28),0);
    }
    *(undefined4 *)(lVar10 + 0x20) = 0;
    *(undefined8 *)(lVar10 + 0x28) = 0;
    *(undefined8 *)(lVar10 + 0x30) = 0;
    puVar17 = puVar16;
    do {
        puVar11 = puVar17;
        puVar17 = (undefined8 *)((longlong)puVar11 + 1);
    } while ((&DAT_140b29f9a)[(longlong)puVar11] != 0);
    auVar7 = ZEXT816(2) * ZEXT816((longlong)puVar11 + 2);
    uVar9 = SUB168(auVar7,0);
    if (SUB168(auVar7 >> 0x40,0) != 0) {
        uVar9 = 0xffffffffffffffff;
    }
    uVar9 = FUN_14018b280(uVar9,0);
    *(undefined8 *)(lVar10 + 0x28) = uVar9;
    FUN_1407db590(uVar9,&DAT_140b29f98,(longlong)puVar17 * 2 + 2);
    *(undefined4 *)(lVar10 + 0x20) = 0x200;
    *(longlong *)(lVar10 + 0x30) = *(longlong *)(lVar10 + 0x28) + (longlong)puVar17 * 2;
    plVar15 = local_228 + 0x10;
    puVar11 = (undefined8 *)(**(code **)(*plVar15 + 0x10))(plVar15);
    puVar17 = puVar16;
    if (puVar11 != (undefined8 *)0x0) {
        puVar11[2] = 0;
        puVar11[1] = local_228;
        *(undefined4 *)(puVar11 + 3) = 0;
        puVar11[4] = 0;
        puVar11[5] = 0;
        puVar11[6] = 0;
        puVar11[7] = 0;
        puVar11[8] = 0;
        puVar11[9] = 0;
        *puVar11 = &PTR_FUN_140b5eba0;
        puVar11[10] = 0;
        *(undefined4 *)(puVar11 + 0xb) = 0;
        puVar11[0xc] = 0;
        puVar17 = puVar11;
    }
    puVar17[10] = plVar15;
    if ((*(uint *)(puVar17 + 3) & 0x200) != 0) {
        FUN_14018b900(puVar17[4],0);
    }
    *(undefined4 *)(puVar17 + 3) = 0;
    puVar17[4] = 0;
    puVar17[5] = 0;
    puVar11 = puVar16;
    do {
        puVar13 = puVar11;
        puVar11 = (undefined8 *)((longlong)puVar13 + 1);
    } while (*(short *)(&DAT_140a31d20 + (longlong)puVar11 * 2) != 0);
    auVar7 = ZEXT816(2) * ZEXT816((longlong)puVar13 + 2);
    uVar9 = SUB168(auVar7,0);
    if (SUB168(auVar7 >> 0x40,0) != 0) {
        uVar9 = 0xffffffffffffffff;
    }
    uVar9 = FUN_14018b280(uVar9,0);
    puVar17[4] = uVar9;
    FUN_1407db590(uVar9,&DAT_140a31d20,(longlong)puVar11 * 2 + 2);
    *(undefined4 *)(puVar17 + 3) = 0x200;
    puVar17[5] = puVar17[4] + (longlong)puVar11 * 2;
    lVar10 = FUN_1401a7880(local_228,local_200);
    if (*(longlong *)(lVar10 + 8) == puVar17[1]) {
        lVar5 = *(longlong *)(lVar10 + 0x10);
        if (lVar5 == 0) {
            (**(code **)(**(longlong **)(lVar10 + 0x50) + 0x20))();
        }
        else {
            if (lVar10 == *(longlong *)(lVar5 + 0x30)) {
                *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)(*(longlong *)(lVar5 + 0x30) + 0x48);
            }
            if (lVar10 == *(longlong *)(lVar5 + 0x38)) {
                *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)(*(longlong *)(lVar5 + 0x38) + 0x40);
            }
            if (*(longlong *)(lVar10 + 0x40) != 0) {
                *(undefined8 *)(*(longlong *)(lVar10 + 0x40) + 0x48) = *(undefined8 *)(lVar10 + 0x48);
            }
            if (*(longlong *)(lVar10 + 0x48) != 0) {
                *(undefined8 *)(*(longlong *)(lVar10 + 0x48) + 0x40) = *(undefined8 *)(lVar10 + 0x40);
            }
            *(undefined8 *)(lVar10 + 0x10) = 0;
        }
        if (puVar17[7] == 0) {
            puVar17[7] = lVar10;
            puVar17[6] = lVar10;
            *(undefined8 *)(lVar10 + 0x40) = 0;
        }
        else {
            *(longlong *)(puVar17[7] + 0x48) = lVar10;
            *(undefined8 *)(lVar10 + 0x40) = puVar17[7];
            puVar17[7] = lVar10;
        }
        *(undefined8 *)(lVar10 + 0x48) = 0;
        *(undefined8 **)(lVar10 + 0x10) = puVar17;
    }
    if (puVar17[1] == puVar8[1]) {
        lVar10 = puVar17[2];
        if (lVar10 == 0) {
            (**(code **)(*(longlong *)puVar17[10] + 0x20))();
        }
        else {
            if (puVar17 == *(undefined8 **)(lVar10 + 0x30)) {
                *(undefined8 *)(lVar10 + 0x30) = (*(undefined8 **)(lVar10 + 0x30))[9];
            }
            if (puVar17 == *(undefined8 **)(lVar10 + 0x38)) {
                *(undefined8 *)(lVar10 + 0x38) = (*(undefined8 **)(lVar10 + 0x38))[8];
            }
            if (puVar17[8] != 0) {
                *(undefined8 *)(puVar17[8] + 0x48) = puVar17[9];
            }
            if (puVar17[9] != 0) {
                *(undefined8 *)(puVar17[9] + 0x40) = puVar17[8];
            }
            puVar17[2] = 0;
        }
        if (puVar8[7] == 0) {
            puVar8[7] = puVar17;
            puVar8[6] = puVar17;
            puVar17[8] = 0;
        }
        else {
            *(undefined8 **)(puVar8[7] + 0x48) = puVar17;
            puVar17[8] = puVar8[7];
            puVar8[7] = puVar17;
        }
        puVar17[9] = 0;
        puVar17[2] = puVar8;
    }
    if ((int)local_220 != 0) {
        plVar15 = local_228 + 0x10;
        puVar11 = (undefined8 *)(**(code **)(*plVar15 + 0x10))(plVar15);
        puVar17 = puVar16;
        if (puVar11 != (undefined8 *)0x0) {
            puVar11[2] = 0;
            puVar11[1] = local_228;
            *(undefined4 *)(puVar11 + 3) = 0;
            puVar11[4] = 0;
            puVar11[5] = 0;
            puVar11[6] = 0;
            puVar11[7] = 0;
            puVar11[8] = 0;
            puVar11[9] = 0;
            *puVar11 = &PTR_FUN_140b5eba0;
            puVar11[10] = 0;
            *(undefined4 *)(puVar11 + 0xb) = 0;
            puVar11[0xc] = 0;
            puVar17 = puVar11;
        }
        puVar17[10] = plVar15;
        if ((*(uint *)(puVar17 + 3) & 0x200) != 0) {
            FUN_14018b900(puVar17[4],0);
        }
        *(undefined4 *)(puVar17 + 3) = 0;
        puVar17[4] = 0;
        puVar17[5] = 0;
        puVar11 = puVar16;
        do {
            puVar13 = puVar11;
            puVar11 = (undefined8 *)((longlong)puVar13 + 1);
        } while (*(short *)(&DAT_140a31d70 + (longlong)puVar11 * 2) != 0);
        auVar7 = ZEXT816(2) * ZEXT816((longlong)puVar13 + 2);
        uVar9 = SUB168(auVar7,0);
        if (SUB168(auVar7 >> 0x40,0) != 0) {
            uVar9 = 0xffffffffffffffff;
        }
        uVar9 = FUN_14018b280(uVar9,0);
        puVar17[4] = uVar9;
        FUN_1407db590(uVar9,&DAT_140a31d70,(longlong)puVar11 * 2 + 2);
        *(undefined4 *)(puVar17 + 3) = 0x200;
        puVar17[5] = puVar17[4] + (longlong)puVar11 * 2;
        lVar10 = FUN_1401a6c70(puVar17,L"Image");
        puVar12 = (undefined4 *)(lVar10 + 0x20);
        local_220 = puVar12;
        if ((*(uint *)(lVar10 + 0x20) & 0x200) != 0) {
            FUN_14018b900(*(undefined8 *)(lVar10 + 0x28),0);
        }
        *puVar12 = 0;
        *(undefined8 *)(lVar10 + 0x28) = 0;
        *(undefined8 *)(lVar10 + 0x30) = 0;
        puVar11 = puVar16;
        do {
            puVar13 = puVar11;
            puVar11 = (undefined8 *)((longlong)puVar13 + 1);
        } while (L"Icon_Windows_UI_GMIcon"[(longlong)puVar11] != L'\0');
        auVar7 = ZEXT816(2) * ZEXT816((longlong)puVar13 + 2);
        uVar9 = SUB168(auVar7,0);
        if (SUB168(auVar7 >> 0x40,0) != 0) {
            uVar9 = 0xffffffffffffffff;
        }
        uVar9 = FUN_14018b280(uVar9,0);
        *(undefined8 *)(local_220 + 2) = uVar9;
        FUN_1407db590(uVar9,L"Icon_Windows_UI_GMIcon",(longlong)puVar11 * 2 + 2);
        *local_220 = 0x200;
        *(longlong *)(local_220 + 4) = *(longlong *)(local_220 + 2) + (longlong)puVar11 * 2;
        lVar10 = FUN_1401a6c70(puVar17,L"Width");
        local_220 = (undefined4 *)lVar10;
        FUN_1401a4c20(local_1c8,200,&DAT_1409e41b4,0x10);
        if ((*(uint *)(lVar10 + 0x20) & 0x200) != 0) {
            FUN_14018b900(*(undefined8 *)(lVar10 + 0x28),0);
        }
        *(undefined4 *)(lVar10 + 0x20) = 0;
        *(undefined8 *)(lVar10 + 0x28) = 0;
        *(undefined8 *)(lVar10 + 0x30) = 0;
        puVar11 = puVar16;
        sVar2 = local_1c8[0];
        while (sVar2 != 0) {
            puVar11 = (undefined8 *)((longlong)puVar11 + 1);
            sVar2 = local_1c8[(longlong)puVar11];
        }
        auVar7 = ZEXT816(2) * ZEXT816((longlong)puVar11 + 1);
        uVar9 = SUB168(auVar7,0);
        if (SUB168(auVar7 >> 0x40,0) != 0) {
            uVar9 = 0xffffffffffffffff;
        }
        uVar9 = FUN_14018b280(uVar9,0);
        *(undefined8 *)((longlong)local_220 + 0x28) = uVar9;
        FUN_1407db590(uVar9,local_1c8,(longlong)puVar11 * 2 + 2);
        *(undefined4 *)((longlong)local_220 + 0x20) = 0x200;
        *(longlong *)((longlong)local_220 + 0x30) =
                *(longlong *)((longlong)local_220 + 0x28) + (longlong)puVar11 * 2;
        puVar12 = (undefined4 *)FUN_1401a6c70(puVar17,L"Height");
        local_220 = puVar12;
        FUN_1401a4c20(local_1c8,200,&DAT_1409e41b4,0x10);
        if ((puVar12[8] & 0x200) != 0) {
            FUN_14018b900(*(undefined8 *)(puVar12 + 10),0);
        }
        puVar12[8] = 0;
        *(undefined8 *)(puVar12 + 10) = 0;
        *(undefined8 *)(puVar12 + 0xc) = 0;
        puVar11 = puVar16;
        while (local_1c8[0] != 0) {
            puVar11 = (undefined8 *)((longlong)puVar11 + 1);
            local_1c8[0] = local_1c8[(longlong)puVar11];
        }
        auVar7 = ZEXT816(2) * ZEXT816((longlong)puVar11 + 1);
        uVar9 = SUB168(auVar7,0);
        if (SUB168(auVar7 >> 0x40,0) != 0) {
            uVar9 = 0xffffffffffffffff;
        }
        uVar9 = FUN_14018b280(uVar9,0);
        *(undefined8 *)(local_220 + 10) = uVar9;
        FUN_1407db590(uVar9,local_1c8,(longlong)puVar11 * 2 + 2);
        local_220[8] = 0x200;
        *(longlong *)(local_220 + 0xc) = *(longlong *)(local_220 + 10) + (longlong)puVar11 * 2;
        if (puVar17[1] == puVar8[1]) {
            lVar10 = puVar17[2];
            if (lVar10 == 0) {
                (**(code **)(*(longlong *)puVar17[10] + 0x20))();
            }
            else {
                if (puVar17 == *(undefined8 **)(lVar10 + 0x30)) {
                    *(undefined8 *)(lVar10 + 0x30) = (*(undefined8 **)(lVar10 + 0x30))[9];
                }
                if (puVar17 == *(undefined8 **)(lVar10 + 0x38)) {
                    *(undefined8 *)(lVar10 + 0x38) = (*(undefined8 **)(lVar10 + 0x38))[8];
                }
                if (puVar17[8] != 0) {
                    *(undefined8 *)(puVar17[8] + 0x48) = puVar17[9];
                }
                if (puVar17[9] != 0) {
                    *(undefined8 *)(puVar17[9] + 0x40) = puVar17[8];
                }
                puVar17[2] = 0;
            }
            if (puVar8[7] == 0) {
                puVar8[7] = puVar17;
                puVar8[6] = puVar17;
                puVar17[8] = 0;
            }
            else {
                *(undefined8 **)(puVar8[7] + 0x48) = puVar17;
                puVar17[8] = puVar8[7];
                puVar8[7] = puVar17;
            }
            puVar17[9] = 0;
            puVar17[2] = puVar8;
        }
    }
    if (local_218 != (undefined8 *)0x0) {
        plVar15 = local_228 + 0x10;
        puVar11 = (undefined8 *)(**(code **)(*plVar15 + 0x10))(plVar15);
        puVar17 = puVar16;
        if (puVar11 != (undefined8 *)0x0) {
            puVar11[2] = 0;
            puVar11[1] = local_228;
            *(undefined4 *)(puVar11 + 3) = 0;
            puVar11[4] = 0;
            puVar11[5] = 0;
            puVar11[6] = 0;
            puVar11[7] = 0;
            puVar11[8] = 0;
            puVar11[9] = 0;
            *puVar11 = &PTR_FUN_140b5eba0;
            puVar11[10] = 0;
            *(undefined4 *)(puVar11 + 0xb) = 0;
            puVar11[0xc] = 0;
            puVar17 = puVar11;
        }
        puVar17[10] = plVar15;
        if ((*(uint *)(puVar17 + 3) & 0x200) != 0) {
            FUN_14018b900(puVar17[4],0);
        }
        *(undefined4 *)(puVar17 + 3) = 0;
        puVar17[4] = 0;
        puVar17[5] = 0;
        puVar11 = puVar16;
        do {
            puVar13 = puVar11;
            puVar11 = (undefined8 *)((longlong)puVar13 + 1);
        } while (*(short *)(&DAT_140a31d20 + (longlong)puVar11 * 2) != 0);
        auVar7 = ZEXT816(2) * ZEXT816((longlong)puVar13 + 2);
        uVar9 = SUB168(auVar7,0);
        if (SUB168(auVar7 >> 0x40,0) != 0) {
            uVar9 = 0xffffffffffffffff;
        }
        uVar9 = FUN_14018b280(uVar9,0);
        puVar17[4] = uVar9;
        FUN_1407db590(uVar9,&DAT_140a31d20,(longlong)puVar11 * 2 + 2);
        *(undefined4 *)(puVar17 + 3) = 0x200;
        puVar17[5] = puVar17[4] + (longlong)puVar11 * 2;
        lVar10 = FUN_1401a6c70(puVar17,L"TextColor");
        puVar12 = (undefined4 *)(lVar10 + 0x20);
        local_220 = puVar12;
        if ((*(uint *)(lVar10 + 0x20) & 0x200) != 0) {
            FUN_14018b900(*(undefined8 *)(lVar10 + 0x28),0);
        }
        *puVar12 = 0;
        *(undefined8 *)(lVar10 + 0x28) = 0;
        *(undefined8 *)(lVar10 + 0x30) = 0;
        puVar11 = puVar16;
        do {
            puVar13 = puVar11;
            puVar11 = (undefined8 *)((longlong)puVar13 + 1);
        } while (L"FFFFFFFF"[(longlong)puVar13 + 1] != L'\0');
        auVar7 = ZEXT816(2) * ZEXT816((longlong)puVar13 + 2);
        uVar9 = SUB168(auVar7,0);
        if (SUB168(auVar7 >> 0x40,0) != 0) {
            uVar9 = 0xffffffffffffffff;
        }
        uVar9 = FUN_14018b280(uVar9,0);
        *(undefined8 *)(local_220 + 2) = uVar9;
        FUN_1407db590(uVar9,L"FFFFFFFF",(longlong)puVar11 * 2 + 2);
        *local_220 = 0x200;
        *(longlong *)(local_220 + 4) = *(longlong *)(local_220 + 2) + (longlong)puVar11 * 2;
        lVar10 = FUN_1401a7880(local_228,local_218);
        if (*(longlong *)(lVar10 + 8) == puVar17[1]) {
            lVar5 = *(longlong *)(lVar10 + 0x10);
            if (lVar5 == 0) {
                (**(code **)(**(longlong **)(lVar10 + 0x50) + 0x20))();
            }
            else {
                if (lVar10 == *(longlong *)(lVar5 + 0x30)) {
                    *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)(*(longlong *)(lVar5 + 0x30) + 0x48);
                }
                if (lVar10 == *(longlong *)(lVar5 + 0x38)) {
                    *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)(*(longlong *)(lVar5 + 0x38) + 0x40);
                }
                if (*(longlong *)(lVar10 + 0x40) != 0) {
                    *(undefined8 *)(*(longlong *)(lVar10 + 0x40) + 0x48) = *(undefined8 *)(lVar10 + 0x48);
                }
                if (*(longlong *)(lVar10 + 0x48) != 0) {
                    *(undefined8 *)(*(longlong *)(lVar10 + 0x48) + 0x40) = *(undefined8 *)(lVar10 + 0x40);
                }
                *(undefined8 *)(lVar10 + 0x10) = 0;
            }
            if (puVar17[7] == 0) {
                puVar17[7] = lVar10;
                puVar17[6] = lVar10;
                *(undefined8 *)(lVar10 + 0x40) = 0;
            }
            else {
                *(longlong *)(puVar17[7] + 0x48) = lVar10;
                *(undefined8 *)(lVar10 + 0x40) = puVar17[7];
                puVar17[7] = lVar10;
            }
            *(undefined8 *)(lVar10 + 0x48) = 0;
            *(undefined8 **)(lVar10 + 0x10) = puVar17;
        }
        if (puVar17[1] == puVar8[1]) {
            lVar10 = puVar17[2];
            if (lVar10 == 0) {
                (**(code **)(*(longlong *)puVar17[10] + 0x20))();
            }
            else {
                if (puVar17 == *(undefined8 **)(lVar10 + 0x30)) {
                    *(undefined8 *)(lVar10 + 0x30) = (*(undefined8 **)(lVar10 + 0x30))[9];
                }
                if (puVar17 == *(undefined8 **)(lVar10 + 0x38)) {
                    *(undefined8 *)(lVar10 + 0x38) = (*(undefined8 **)(lVar10 + 0x38))[8];
                }
                if (puVar17[8] != 0) {
                    *(undefined8 *)(puVar17[8] + 0x48) = puVar17[9];
                }
                if (puVar17[9] != 0) {
                    *(undefined8 *)(puVar17[9] + 0x40) = puVar17[8];
                }
                puVar17[2] = 0;
            }
            if (puVar8[7] == 0) {
                puVar8[7] = puVar17;
                puVar8[6] = puVar17;
                puVar17[8] = 0;
            }
            else {
                *(undefined8 **)(puVar8[7] + 0x48) = puVar17;
                puVar17[8] = puVar8[7];
                puVar8[7] = puVar17;
            }
            puVar17[9] = 0;
            puVar17[2] = puVar8;
        }
    }
    plVar15 = local_228 + 0x10;
    puVar11 = (undefined8 *)(**(code **)(*plVar15 + 0x10))(plVar15);
    puVar17 = puVar16;
    if (puVar11 != (undefined8 *)0x0) {
        puVar11[2] = 0;
        puVar11[1] = local_228;
        *(undefined4 *)(puVar11 + 3) = 0;
        puVar11[4] = 0;
        puVar11[5] = 0;
        puVar11[6] = 0;
        puVar11[7] = 0;
        puVar11[8] = 0;
        puVar11[9] = 0;
        *puVar11 = &PTR_FUN_140b5eba0;
        puVar11[10] = 0;
        *(undefined4 *)(puVar11 + 0xb) = 0;
        puVar11[0xc] = 0;
        puVar17 = puVar11;
    }
    puVar17[10] = plVar15;
    if ((*(uint *)(puVar17 + 3) & 0x200) != 0) {
        FUN_14018b900(puVar17[4],0);
    }
    *(undefined4 *)(puVar17 + 3) = 0;
    puVar17[4] = 0;
    puVar17[5] = 0;
    puVar11 = puVar16;
    do {
        puVar13 = puVar11;
        puVar11 = (undefined8 *)((longlong)puVar13 + 1);
    } while (*(short *)(&DAT_140a31d20 + (longlong)puVar11 * 2) != 0);
    auVar7 = ZEXT816(2) * ZEXT816((longlong)puVar13 + 2);
    uVar9 = SUB168(auVar7,0);
    if (SUB168(auVar7 >> 0x40,0) != 0) {
        uVar9 = 0xffffffffffffffff;
    }
    uVar9 = FUN_14018b280(uVar9,0);
    puVar17[4] = uVar9;
    FUN_1407db590(uVar9,&DAT_140a31d20,(longlong)puVar11 * 2 + 2);
    *(undefined4 *)(puVar17 + 3) = 0x200;
    puVar17[5] = puVar17[4] + (longlong)puVar11 * 2;
    puVar13 = (undefined8 *)(**(code **)(local_228[0x30] + 0x10))();
    puVar11 = puVar16;
    if (puVar13 != (undefined8 *)0x0) {
        puVar13[2] = 0;
        puVar13[1] = local_228;
        *(undefined4 *)(puVar13 + 3) = 0;
        puVar13[4] = 0;
        puVar13[5] = 0;
        puVar13[6] = 0;
        puVar13[7] = 0;
        puVar13[8] = 0;
        puVar13[9] = 0;
        *puVar13 = &PTR_LAB_140b5ee70;
        puVar13[10] = 0;
        *(undefined *)(puVar13 + 0xb) = 0;
        puVar11 = puVar13;
    }
    puVar11[10] = local_228 + 0x30;
    if ((*(uint *)(puVar11 + 3) & 0x200) != 0) {
        FUN_14018b900(puVar11[4],0);
    }
    *(undefined4 *)(puVar11 + 3) = 0;
    puVar11[4] = 0;
    puVar11[5] = 0;
    local_218 = puVar16;
    do {
        puVar13 = local_218;
        local_218 = (undefined8 *)((longlong)puVar13 + 1);
    } while (*(short *)(&DAT_140b29f8c + (longlong)local_218 * 2) != 0);
    auVar7 = ZEXT816(2) * ZEXT816((longlong)puVar13 + 2);
    uVar9 = SUB168(auVar7,0);
    if (SUB168(auVar7 >> 0x40,0) != 0) {
        uVar9 = 0xffffffffffffffff;
    }
    uVar9 = FUN_14018b280(uVar9,0);
    puVar11[4] = uVar9;
    FUN_1407db590(uVar9,&DAT_140b29f8c,(longlong)local_218 * 2 + 2);
    *(undefined4 *)(puVar11 + 3) = 0x200;
    puVar11[5] = puVar11[4] + (longlong)local_218 * 2;
    if (puVar11[1] == puVar17[1]) {
        lVar10 = puVar11[2];
        if (lVar10 == 0) {
            (**(code **)(*(longlong *)puVar11[10] + 0x20))();
        }
        else {
            if (puVar11 == *(undefined8 **)(lVar10 + 0x30)) {
                *(undefined8 *)(lVar10 + 0x30) = (*(undefined8 **)(lVar10 + 0x30))[9];
            }
            if (puVar11 == *(undefined8 **)(lVar10 + 0x38)) {
                *(undefined8 *)(lVar10 + 0x38) = (*(undefined8 **)(lVar10 + 0x38))[8];
            }
            if (puVar11[8] != 0) {
                *(undefined8 *)(puVar11[8] + 0x48) = puVar11[9];
            }
            if (puVar11[9] != 0) {
                *(undefined8 *)(puVar11[9] + 0x40) = puVar11[8];
            }
            puVar11[2] = 0;
        }
        if (puVar17[7] == 0) {
            puVar17[7] = puVar11;
            puVar17[6] = puVar11;
            puVar11[8] = 0;
        }
        else {
            *(undefined8 **)(puVar17[7] + 0x48) = puVar11;
            puVar11[8] = puVar17[7];
            puVar17[7] = puVar11;
        }
        puVar11[9] = 0;
        puVar11[2] = puVar17;
    }
    if (puVar17[1] == puVar8[1]) {
        lVar10 = puVar17[2];
        if (lVar10 == 0) {
            (**(code **)(*(longlong *)puVar17[10] + 0x20))();
        }
        else {
            if (puVar17 == *(undefined8 **)(lVar10 + 0x30)) {
                *(undefined8 *)(lVar10 + 0x30) = (*(undefined8 **)(lVar10 + 0x30))[9];
            }
            if (puVar17 == *(undefined8 **)(lVar10 + 0x38)) {
                *(undefined8 *)(lVar10 + 0x38) = (*(undefined8 **)(lVar10 + 0x38))[8];
            }
            if (puVar17[8] != 0) {
                *(undefined8 *)(puVar17[8] + 0x48) = puVar17[9];
            }
            if (puVar17[9] != 0) {
                *(undefined8 *)(puVar17[9] + 0x40) = puVar17[8];
            }
            puVar17[2] = 0;
        }
        if (puVar8[7] == 0) {
            puVar8[7] = puVar17;
            puVar8[6] = puVar17;
            puVar17[8] = 0;
        }
        else {
            *(undefined8 **)(puVar8[7] + 0x48) = puVar17;
            puVar17[8] = puVar8[7];
            puVar8[7] = puVar17;
        }
        puVar17[9] = 0;
        puVar17[2] = puVar8;
    }
    if (*local_210 != 0) {
        plVar15 = local_228 + 0x10;
        puVar11 = (undefined8 *)(**(code **)(*plVar15 + 0x10))(plVar15);
        puVar17 = puVar16;
        if (puVar11 != (undefined8 *)0x0) {
            puVar11[2] = 0;
            puVar11[1] = local_228;
            *(undefined4 *)(puVar11 + 3) = 0;
            puVar11[4] = 0;
            puVar11[5] = 0;
            puVar11[6] = 0;
            puVar11[7] = 0;
            puVar11[8] = 0;
            puVar11[9] = 0;
            *puVar11 = &PTR_FUN_140b5eba0;
            puVar11[10] = 0;
            *(undefined4 *)(puVar11 + 0xb) = 0;
            puVar11[0xc] = 0;
            puVar17 = puVar11;
        }
        puVar17[10] = plVar15;
        if ((*(uint *)(puVar17 + 3) & 0x200) != 0) {
            FUN_14018b900(puVar17[4],0);
        }
        *(undefined4 *)(puVar17 + 3) = 0;
        puVar17[4] = 0;
        puVar17[5] = 0;
        do {
            puVar11 = puVar16;
            puVar16 = (undefined8 *)((longlong)puVar11 + 1);
        } while (*(short *)(&DAT_140a31d20 + (longlong)puVar16 * 2) != 0);
        auVar7 = ZEXT816(2) * ZEXT816((longlong)puVar11 + 2);
        uVar9 = SUB168(auVar7,0);
        if (SUB168(auVar7 >> 0x40,0) != 0) {
            uVar9 = 0xffffffffffffffff;
        }
        uVar9 = FUN_14018b280(uVar9,0);
        puVar17[4] = uVar9;
        FUN_1407db590(uVar9,&DAT_140a31d20,(longlong)puVar16 * 2 + 2);
        *(undefined4 *)(puVar17 + 3) = 0x200;
        puVar17[5] = puVar17[4] + (longlong)puVar16 * 2;
        lVar10 = FUN_1401a7880(local_228,*local_210);
        if (*(longlong *)(lVar10 + 8) == puVar17[1]) {
            lVar5 = *(longlong *)(lVar10 + 0x10);
            if (lVar5 == 0) {
                (**(code **)(**(longlong **)(lVar10 + 0x50) + 0x20))();
            }
            else {
                if (lVar10 == *(longlong *)(lVar5 + 0x30)) {
                    *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)(*(longlong *)(lVar5 + 0x30) + 0x48);
                }
                if (lVar10 == *(longlong *)(lVar5 + 0x38)) {
                    *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)(*(longlong *)(lVar5 + 0x38) + 0x40);
                }
                if (*(longlong *)(lVar10 + 0x40) != 0) {
                    *(undefined8 *)(*(longlong *)(lVar10 + 0x40) + 0x48) = *(undefined8 *)(lVar10 + 0x48);
                }
                if (*(longlong *)(lVar10 + 0x48) != 0) {
                    *(undefined8 *)(*(longlong *)(lVar10 + 0x48) + 0x40) = *(undefined8 *)(lVar10 + 0x40);
                }
                *(undefined8 *)(lVar10 + 0x10) = 0;
            }
            if (puVar17[7] == 0) {
                puVar17[7] = lVar10;
                puVar17[6] = lVar10;
                *(undefined8 *)(lVar10 + 0x40) = 0;
            }
            else {
                *(longlong *)(puVar17[7] + 0x48) = lVar10;
                *(undefined8 *)(lVar10 + 0x40) = puVar17[7];
                puVar17[7] = lVar10;
            }
            *(undefined8 *)(lVar10 + 0x48) = 0;
            *(undefined8 **)(lVar10 + 0x10) = puVar17;
        }
        if (puVar17[1] == puVar8[1]) {
            lVar10 = puVar17[2];
            if (lVar10 == 0) {
                (**(code **)(*(longlong *)puVar17[10] + 0x20))();
            }
            else {
                if (puVar17 == *(undefined8 **)(lVar10 + 0x30)) {
                    *(undefined8 *)(lVar10 + 0x30) = (*(undefined8 **)(lVar10 + 0x30))[9];
                }
                if (puVar17 == *(undefined8 **)(lVar10 + 0x38)) {
                    *(undefined8 *)(lVar10 + 0x38) = (*(undefined8 **)(lVar10 + 0x38))[8];
                }
                if (puVar17[8] != 0) {
                    *(undefined8 *)(puVar17[8] + 0x48) = puVar17[9];
                }
                if (puVar17[9] != 0) {
                    *(undefined8 *)(puVar17[9] + 0x40) = puVar17[8];
                }
                puVar17[2] = 0;
            }
            if (puVar8[7] == 0) {
                puVar8[7] = puVar17;
                puVar8[6] = puVar17;
                puVar17[8] = 0;
            }
            else {
                *(undefined8 **)(puVar8[7] + 0x48) = puVar17;
                puVar17[8] = puVar8[7];
                puVar8[7] = puVar17;
            }
            puVar17[9] = 0;
            puVar17[2] = puVar8;
        }
    }
    lVar5 = local_1e8;
    lVar10 = *(longlong *)(local_1e8 + 0x2b0);
    if (puVar8[1] == *(longlong *)(lVar10 + 8)) {
        lVar6 = puVar8[2];
        if (lVar6 == 0) {
            (**(code **)(*(longlong *)puVar8[10] + 0x20))();
        }
        else {
            if (puVar8 == *(undefined8 **)(lVar6 + 0x30)) {
                *(undefined8 *)(lVar6 + 0x30) = (*(undefined8 **)(lVar6 + 0x30))[9];
            }
            if (puVar8 == *(undefined8 **)(lVar6 + 0x38)) {
                *(undefined8 *)(lVar6 + 0x38) = (*(undefined8 **)(lVar6 + 0x38))[8];
            }
            if (puVar8[8] != 0) {
                *(undefined8 *)(puVar8[8] + 0x48) = puVar8[9];
            }
            if (puVar8[9] != 0) {
                *(undefined8 *)(puVar8[9] + 0x40) = puVar8[8];
            }
            puVar8[2] = 0;
        }
        if (*(longlong *)(lVar10 + 0x38) == 0) {
            *(undefined8 **)(lVar10 + 0x38) = puVar8;
            *(undefined8 **)(lVar10 + 0x30) = puVar8;
            puVar8[8] = 0;
        }
        else {
            *(undefined8 **)(*(longlong *)(lVar10 + 0x38) + 0x48) = puVar8;
            puVar8[8] = *(undefined8 *)(lVar10 + 0x38);
            *(undefined8 **)(lVar10 + 0x38) = puVar8;
        }
        puVar8[9] = 0;
        puVar8[2] = lVar10;
    }
    plVar4 = local_228;
    lVar10 = *(longlong *)(lVar5 + 0x18);
    plVar15 = (longlong *)(lVar10 + 0x418);
    if (plVar15 != local_228) {
        (**(code **)(*plVar15 + 0x78))(plVar15,0);
        FUN_1401a7460(plVar15,plVar4);
    }
    FUN_1401411c0(lVar10 + 0x400);
    FUN_140116010(lVar10);
    if (local_200 != 0) {
        FUN_14018b900(local_200,0);
    }
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack600);
    return;
}



undefined8 FUN_140646ee0(undefined8 param_1)

{
    longlong *plVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong lVar4;

    plVar1 = (longlong *)FUN_1400d66a0(param_1,1);
    plVar2 = (longlong *)FUN_1400d66a0(param_1,2);
    if (((DAT_140c65c30 != 0) && (*(longlong **)(DAT_140c65c30 + 0x20) == plVar2)) &&
        (plVar1 == plVar2)) {
        lVar3 = (**(code **)(**(longlong **)(DAT_140c65c30 + 0x20) + 0x70))();
        lVar4 = FUN_140401220(DAT_140c658a0,0x13);
        if ((lVar3 != 0) && (lVar4 != 0)) {
            FUN_140401e40(lVar4,lVar3);
        }
        (**(code **)(**(longlong **)(DAT_140c65c30 + 0x20) + 0x50))
                (*(longlong **)(DAT_140c65c30 + 0x20),&DAT_1409f41c4);
    }
    return 0;
}



undefined8 FUN_140646f80(undefined8 param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar2 = FUN_1400d66a0(param_1,1);
    lVar3 = FUN_1400d66a0(param_1,2);
    lVar1 = DAT_140c65c30;
    if (((DAT_140c65c30 != 0) && (*(longlong *)(DAT_140c65c30 + 0x28) == lVar3)) && (lVar2 == lVar3))
    {
        *(undefined *)(DAT_140c65c30 + 700) = 0;
        FUN_1400d42f0(*(undefined8 *)(lVar1 + 0x10),0,0);
    }
    return 0;
}



longlong * FUN_140646ff0(longlong param_1)

{
    short sVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong *plVar4;
    longlong *plVar5;
    longlong *plVar6;
    longlong *plVar7;
    undefined4 local_res8 [2];
    longlong local_18;
    longlong lStack16;

    plVar4 = *(longlong **)(param_1 + 0x28);
    if ((longlong *)*plVar4 == plVar4) {
        return (longlong *)0x8000ffff;
    }
    local_18 = *(longlong *)(*plVar4 + 0x10);
    lVar2 = *(longlong *)(local_18 + -8);
    lStack16 = lVar2;
    plVar3 = (longlong *)FUN_14018b280(lVar2 * 2 + 0x12,0);
    plVar6 = (longlong *)0x0;
    plVar4 = plVar6;
    if (plVar3 != (longlong *)0x0) {
        plVar3[1] = lVar2;
        *plVar3 = (longlong)&PTR_LAB_140b55060;
        plVar4 = plVar3;
    }
    plVar3 = plVar4 + 2;
    FUN_1401b2410(&local_18,plVar3);
    *(short *)((longlong)plVar3 + lVar2 * 2) = 0;
    plVar5 = **(longlong ***)(param_1 + 0x28);
    lVar2 = *plVar5;
    plVar7 = (longlong *)plVar5[1];
    *plVar7 = lVar2;
    *(longlong **)(lVar2 + 8) = plVar7;
    lVar2 = plVar5[2];
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    FUN_14018b900(plVar5,0);
    plVar5 = (longlong *)FUN_14034bdd0();
    if (plVar3 != plVar5) {
        if (((plVar3 != (longlong *)0x0) && (plVar5 != (longlong *)0x0)) &&
            (sVar1 = *(short *)plVar3, plVar7 = plVar6, sVar1 == *(short *)plVar5)) {
            do {
                if (sVar1 == 0) goto LAB_14064716b;
                sVar1 = *(short *)((longlong)plVar4 + (longlong)plVar7 * 2 + 0x12);
                lVar2 = (longlong)plVar7 * 2;
                plVar7 = (longlong *)((longlong)plVar7 + 1);
            } while (sVar1 == *(short *)((longlong)plVar5 + lVar2 + 2));
        }
        plVar5 = (longlong *)FUN_14034bdd0();
        if (plVar3 == plVar5) {
            LAB_140647144:
            if (*(ulonglong *)(param_1 + 0x48) < 0xffffffff) {
                local_res8[0] = *(undefined4 *)(param_1 + 0x38);
                FUN_140003460(param_1 + 0x40,local_res8);
            }
            else {
                plVar6 = (longlong *)0x8007000e;
            }
        }
        else {
            if (((plVar3 != (longlong *)0x0) && (plVar5 != (longlong *)0x0)) &&
                (sVar1 = *(short *)plVar3, plVar7 = plVar6, sVar1 == *(short *)plVar5)) {
                do {
                    if (sVar1 == 0) goto LAB_140647144;
                    sVar1 = *(short *)((longlong)plVar4 + (longlong)plVar7 * 2 + 0x12);
                    lVar2 = (longlong)plVar7 * 2;
                    plVar7 = (longlong *)((longlong)plVar7 + 1);
                } while (sVar1 == *(short *)((longlong)plVar5 + lVar2 + 2));
            }
            plVar6 = (longlong *)0x80070057;
        }
    }
    LAB_14064716b:
    if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 8))(plVar4);
    }
    return plVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140647190(undefined8 *param_1,undefined4 *param_2)

{
    undefined8 uVar1;
    bool bVar2;
    bool bVar3;
    bool bVar4;
    uint uVar5;
    int iVar6;
    undefined4 *puVar7;
    longlong lVar8;
    longlong lVar9;
    longlong lVar10;
    uint uVar11;
    undefined4 local_res18;

    if (DAT_140c63838 == (code *)0x0) {
        if (_DAT_140c65254 == 0) {
            iVar6 = FUN_1401f2f80();
            if (iVar6 < 0) {
                uVar5 = 0;
            }
            else {
                uVar5 = (**(code **)(*DAT_140c63c28 + 0x28))();
            }
        }
        else {
            uVar5 = 0;
        }
    }
    else {
        uVar5 = (*DAT_140c63838)(&PTR_u_Class_140a69950);
    }
    bVar4 = false;
    uVar11 = 0;
    bVar3 = false;
    if (uVar5 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if (_DAT_140c65254 == 0) {
                    iVar6 = FUN_1401f2f80();
                    if (iVar6 < 0) {
                        puVar7 = (undefined4 *)0x0;
                    }
                    else {
                        puVar7 = (undefined4 *)(**(code **)(*DAT_140c63c28 + 0x20))();
                    }
                }
                else {
                    puVar7 = (undefined4 *)0x0;
                }
            }
            else {
                puVar7 = (undefined4 *)(*DAT_140c63848)(&PTR_u_Class_140a69950,uVar11,DAT_140c63858);
            }
            bVar2 = bVar3;
            if ((puVar7[4] != 0) && (puVar7[5] != 0)) {
                lVar8 = FUN_14034bdd0();
                lVar9 = FUN_14034bdd0();
                uVar1 = *param_1;
                iVar6 = FUN_14018e2c0(lVar8,uVar1);
                if ((iVar6 == 0) || ((lVar8 != lVar9 && (iVar6 = FUN_14018e2c0(lVar9,uVar1), iVar6 == 0))))
                {
                    local_res18 = *puVar7;
                    goto LAB_140647327;
                }
                lVar10 = FUN_14018e5e0(lVar8);
                if ((lVar10 == lVar8) ||
                    ((lVar8 != lVar9 && (lVar8 = FUN_14018e5e0(lVar9), lVar8 == lVar9)))) {
                    local_res18 = *puVar7;
                    bVar2 = true;
                    bVar4 = bVar3;
                }
            }
            uVar11 = uVar11 + 1;
            bVar3 = bVar2;
        } while (uVar11 < uVar5);
        if ((bVar2) && (!bVar4)) {
            LAB_140647327:
            *param_2 = local_res18;
            return 0;
        }
    }
    return 0x80070490;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140647340(undefined8 *param_1,undefined4 *param_2)

{
    bool bVar1;
    bool bVar2;
    bool bVar3;
    uint uVar4;
    int iVar5;
    undefined4 *puVar6;
    longlong lVar7;
    longlong lVar8;
    uint uVar9;
    undefined4 local_res18;

    if (DAT_140c63838 == (code *)0x0) {
        if (_DAT_140c64634 == 0) {
            iVar5 = FUN_14024d920();
            if (iVar5 < 0) {
                uVar4 = 0;
            }
            else {
                uVar4 = (**(code **)(*DAT_140c64270 + 0x28))();
            }
        }
        else {
            uVar4 = 0;
        }
    }
    else {
        uVar4 = (*DAT_140c63838)(&PTR_u_WorldZone_140a6e3e8);
    }
    bVar3 = false;
    bVar2 = false;
    uVar9 = 0;
    if (uVar4 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if (_DAT_140c64634 == 0) {
                    iVar5 = FUN_14024d920();
                    if (iVar5 < 0) {
                        puVar6 = (undefined4 *)0x0;
                    }
                    else {
                        puVar6 = (undefined4 *)(**(code **)(*DAT_140c64270 + 0x20))();
                    }
                }
                else {
                    puVar6 = (undefined4 *)0x0;
                }
            }
            else {
                puVar6 = (undefined4 *)(*DAT_140c63848)(&PTR_u_WorldZone_140a6e3e8,uVar9,DAT_140c63858);
            }
            bVar1 = bVar2;
            if ((puVar6[2] == 0) && (puVar6[1] != 0)) {
                lVar7 = FUN_14034bdd0();
                iVar5 = FUN_14018e2c0(lVar7,*param_1);
                if (iVar5 == 0) {
                    *param_2 = *puVar6;
                    return 0;
                }
                lVar8 = FUN_14018e5e0(lVar7);
                if (lVar8 == lVar7) {
                    local_res18 = *puVar6;
                    bVar1 = true;
                    bVar3 = bVar2;
                }
            }
            uVar9 = uVar9 + 1;
            bVar2 = bVar1;
        } while (uVar9 < uVar4);
        if ((bVar1) && (!bVar3)) {
            *param_2 = local_res18;
            return 0;
        }
    }
    return 0x80070490;
}



undefined8 FUN_1406474c0(undefined8 *param_1,undefined4 *param_2)

{
    bool bVar1;
    bool bVar2;
    bool bVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    undefined8 uVar7;
    undefined4 *puVar8;
    ulonglong uVar9;
    undefined4 local_res18;

    bVar3 = false;
    puVar8 = &DAT_140b6fc60;
    uVar9 = 0;
    bVar2 = false;
    do {
        lVar5 = FUN_14034bdd0();
        iVar4 = FUN_14018e2c0(lVar5,*param_1);
        if (iVar4 == 0) {
            *param_2 = *puVar8;
            goto LAB_14064755b;
        }
        lVar6 = FUN_14018e5e0(lVar5);
        bVar1 = bVar2;
        if (lVar6 == lVar5) {
            local_res18 = *puVar8;
            bVar1 = true;
            bVar3 = bVar2;
        }
        uVar9 = uVar9 + 8;
        puVar8 = puVar8 + 2;
        bVar2 = bVar1;
    } while (uVar9 < 0x20);
    if ((!bVar1) || (bVar3)) {
        uVar7 = 0x80070490;
    }
    else {
        *param_2 = local_res18;
        LAB_14064755b:
        uVar7 = 0;
    }
    return uVar7;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140647580(undefined8 *param_1,undefined4 *param_2)

{
    undefined8 uVar1;
    bool bVar2;
    bool bVar3;
    bool bVar4;
    uint uVar5;
    int iVar6;
    undefined4 *puVar7;
    longlong lVar8;
    longlong lVar9;
    longlong lVar10;
    uint uVar11;
    undefined4 uVar12;

    bVar4 = false;
    if (DAT_140c63838 == (code *)0x0) {
        if (_DAT_140c64c3c == 0) {
            iVar6 = FUN_14022d2a0();
            if (iVar6 < 0) {
                uVar5 = 0;
            }
            else {
                uVar5 = (**(code **)(*DAT_140c63918 + 0x28))();
            }
        }
        else {
            uVar5 = 0;
        }
    }
    else {
        uVar5 = (*DAT_140c63838)();
    }
    uVar11 = 0;
    if (uVar5 != 0) {
        uVar12 = 0;
        bVar3 = false;
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if (_DAT_140c64c3c == 0) {
                    iVar6 = FUN_14022d2a0();
                    if (iVar6 < 0) {
                        puVar7 = (undefined4 *)0x0;
                    }
                    else {
                        puVar7 = (undefined4 *)(**(code **)(*DAT_140c63918 + 0x20))();
                    }
                }
                else {
                    puVar7 = (undefined4 *)0x0;
                }
            }
            else {
                puVar7 = (undefined4 *)(*DAT_140c63848)(&PTR_u_Race_140a6c938,uVar11,DAT_140c63858);
            }
            bVar2 = bVar3;
            if ((puVar7[4] != 0) && (puVar7[5] != 0)) {
                lVar8 = FUN_14034bdd0();
                lVar9 = FUN_14034bdd0();
                uVar1 = *param_1;
                iVar6 = FUN_14018e2c0(lVar8,uVar1);
                if ((iVar6 == 0) || ((lVar8 != lVar9 && (iVar6 = FUN_14018e2c0(lVar9,uVar1), iVar6 == 0))))
                {
                    *param_2 = *puVar7;
                    return 0;
                }
                lVar10 = FUN_14018e5e0();
                if ((lVar10 == lVar8) || ((lVar8 != lVar9 && (lVar8 = FUN_14018e5e0(), lVar8 == lVar9)))) {
                    uVar12 = *puVar7;
                    bVar2 = true;
                    bVar4 = bVar3;
                }
            }
            uVar11 = uVar11 + 1;
            bVar3 = bVar2;
        } while (uVar11 < uVar5);
        if ((bVar2) && (!bVar4)) {
            *param_2 = uVar12;
            return 0;
        }
    }
    return 0x80070490;
}



// WARNING: Could not reconcile some variable overlaps

longlong * FUN_140647740(longlong *param_1)

{
    longlong **pplVar1;
    int iVar2;
    uint uVar3;
    uint uVar4;
    longlong **pplVar5;
    longlong *plVar6;
    short *psVar7;
    longlong *plVar8;
    longlong *plVar9;
    longlong lVar10;
    longlong lVar11;
    longlong *plVar12;
    uint *puVar13;
    int iVar14;
    longlong *plVar15;
    longlong *plVar16;
    int iVar17;
    longlong *plVar18;
    longlong *plVar19;
    uint local_res8;
    longlong *local_res10;
    longlong *local_res18;
    longlong local_78;
    longlong lStack112;
    undefined4 local_68 [2];
    ulonglong local_60 [5];

    pplVar1 = (longlong **)param_1[5];
    plVar19 = (longlong *)0x0;
    pplVar5 = (longlong **)*pplVar1;
    plVar16 = plVar19;
    if (pplVar5 == pplVar1) {
        return (longlong *)0x80070057;
    }
    do {
        pplVar5 = (longlong **)*pplVar5;
        plVar16 = (longlong *)((longlong)plVar16 + 1);
    } while (pplVar5 != pplVar1);
    if (plVar16 < (longlong *)0x2) {
        return (longlong *)0x80070057;
    }
    local_78 = (*pplVar1)[2];
    lVar10 = **pplVar1;
    lVar11 = *(longlong *)(local_78 + -8);
    lStack112 = lVar11;
    plVar6 = (longlong *)FUN_14018b280(lVar11 * 2 + 0x12,0);
    plVar16 = plVar19;
    if (plVar6 != (longlong *)0x0) {
        *plVar6 = (longlong)&PTR_LAB_140b55060;
        plVar6[1] = lVar11;
        plVar16 = plVar6;
    }
    plVar16 = plVar16 + 2;
    local_res18 = plVar16;
    FUN_1401b2410(&local_78,plVar16);
    *(short *)((longlong)plVar16 + lVar11 * 2) = 0;
    local_78 = *(longlong *)(lVar10 + 0x10);
    lVar10 = *(longlong *)(local_78 + -8);
    lStack112 = lVar10;
    plVar6 = (longlong *)FUN_14018b280(lVar10 * 2 + 0x12,0);
    plVar16 = plVar19;
    if (plVar6 != (longlong *)0x0) {
        *plVar6 = (longlong)&PTR_LAB_140b55060;
        plVar6[1] = lVar10;
        plVar16 = plVar6;
    }
    plVar6 = plVar16 + 2;
    FUN_1401b2410(&local_78,plVar6);
    *(undefined2 *)((longlong)plVar6 + lVar10 * 2) = 0;
    plVar12 = plVar19;
    plVar8 = plVar19;
    plVar9 = plVar19;
    plVar18 = param_1;
    local_res10 = plVar6;
    do {
        iVar14 = (int)plVar8;
        iVar17 = (int)plVar9;
        psVar7 = (short *)FUN_14034bdd0();
        iVar2 = FUN_14018e2c0();
        if (iVar2 == 0) {
            if (plVar12 < &DAT_00000008) goto LAB_1406478da;
            break;
        }
        plVar15 = plVar8;
        if ((local_res18[-1] == 1) && (*psVar7 == *(short *)local_res18)) {
            plVar15 = (longlong *)0x1;
            plVar9 = plVar8;
            plVar18 = plVar12;
        }
        iVar14 = (int)plVar15;
        iVar17 = (int)plVar9;
        plVar12 = (longlong *)((longlong)plVar12 + 1);
        plVar8 = plVar15;
    } while (plVar12 < &DAT_00000008);
    plVar12 = plVar18;
    if ((iVar17 != 0) || (iVar14 == 0)) goto switchD_1406478fc_caseD_7;
    LAB_1406478da:
    local_res8 = (uint)param_1;
    switch((&DAT_140b29ff4)[(longlong)plVar12 * 2]) {
        case 0:
            uVar4 = FUN_14018e820(plVar6);
            if (uVar4 != 0) {
                plVar12 = (longlong *)plVar16[1];
                local_60[0] = local_60[0] & 0xffffffff00000000 | (ulonglong)uVar4;
                local_68[0] = 0;
                plVar8 = plVar19;
                if (plVar12 != (longlong *)0x0) {
                    do {
                        if (*(short *)((longlong)plVar6 + (longlong)plVar8 * 2) == 0x2d) {
                            lVar10 = (longlong)plVar12 - (longlong)(undefined *)((longlong)plVar8 + 1);
                            plVar9 = (longlong *)FUN_14018b280(lVar10 * 2 + 0x12,0);
                            plVar12 = plVar19;
                            if (plVar9 != (longlong *)0x0) {
                                plVar9[1] = lVar10;
                                *plVar9 = (longlong)&PTR_LAB_140b55060;
                                plVar12 = plVar9;
                            }
                            plVar9 = plVar12 + 2;
                            FUN_1407db590(plVar9,(undefined *)
                                    ((longlong)plVar6 +
                                     (longlong)(undefined *)((longlong)plVar8 + 1) * 2),lVar10 * 2);
                            *(undefined2 *)(lVar10 * 2 + (longlong)plVar9) = 0;
                            uVar3 = FUN_14018e820(plVar9);
                            if (uVar4 < uVar3) {
                                uVar4 = uVar3;
                            }
                            local_60[0] = local_60[0] & 0xffffffff | (ulonglong)(uVar4 + 1) << 0x20;
                            if (plVar9 != (longlong *)0x0) {
                                (**(code **)(*plVar12 + 8))(plVar12);
                            }
                            goto LAB_140647b6a;
                        }
                        plVar8 = (longlong *)((longlong)plVar8 + 1);
                    } while (plVar8 < plVar12);
                }
                local_60[0] = CONCAT44(uVar4 + 1,uVar4);
                goto LAB_140647b6a;
            }
        default:
        switchD_1406478fc_caseD_7:
            uVar4 = 0x80070057;
            goto LAB_140647bfe;
        case 1:
            local_68[0] = 1;
            uVar4 = FUN_140647580(&local_res10,local_60);
            break;
        case 2:
            local_68[0] = 2;
            local_res10 = (longlong *)((ulonglong)local_res10 & 0xffffffff00000000);
            puVar13 = &DAT_140b6fc60;
            plVar12 = plVar19;
            plVar8 = plVar19;
            do {
                local_res10._0_4_ = (int)plVar8;
                lVar10 = FUN_14034bdd0();
                iVar2 = FUN_14018e2c0(lVar10,plVar6);
                if (iVar2 == 0) goto LAB_140647b65;
                lVar11 = FUN_14018e5e0(lVar10);
                if (lVar11 == lVar10) {
                    local_res8 = *puVar13;
                    local_res10 = (longlong *)((ulonglong)local_res10 & 0xffffffff00000000 | (ulonglong)plVar8);
                    plVar8 = (longlong *)0x1;
                }
                else {
                }
                iVar2 = (int)plVar8;
                plVar12 = plVar12 + 1;
                puVar13 = puVar13 + 2;
            } while (plVar12 < &DAT_00000020);
            goto LAB_140647b4c;
        case 3:
            local_68[0] = 3;
            uVar4 = FUN_140647190(&local_res10,local_60);
            break;
        case 4:
            local_68[0] = 4;
            uVar4 = FUN_140647340(&local_res10,local_60);
            break;
        case 5:
            FUN_140647ff0(param_1 + 10,&local_res10);
            local_68[0] = 5;
            goto LAB_140647a9f;
        case 6:
            FUN_140647ff0(param_1 + 10,&local_res10);
            local_68[0] = 6;
        LAB_140647a9f:
            local_60[0] = *(ulonglong *)(param_1[10] + -8 + param_1[0xb] * 8);
            goto LAB_140647b6a;
        case 8:
            FUN_140647ff0(param_1 + 10,&local_res10);
            local_68[0] = 8;
            local_res10 = (longlong *)((ulonglong)local_res10 & 0xffffffff00000000);
            puVar13 = &DAT_140b6fc80;
            plVar12 = plVar19;
            plVar8 = plVar19;
            do {
                local_res10._0_4_ = (int)plVar8;
                lVar10 = FUN_14034bdd0();
                iVar2 = FUN_14018e2c0(lVar10,plVar6);
                if (iVar2 == 0) goto LAB_140647b65;
                lVar11 = FUN_14018e5e0(lVar10);
                if (lVar11 == lVar10) {
                    local_res8 = *puVar13;
                    local_res10 = (longlong *)((ulonglong)local_res10 & 0xffffffff00000000 | (ulonglong)plVar8);
                    plVar8 = (longlong *)0x1;
                }
                else {
                }
                iVar2 = (int)plVar8;
                plVar12 = plVar12 + 1;
                puVar13 = puVar13 + 2;
            } while (plVar12 < &DAT_00000010);
        LAB_140647b4c:
            if ((iVar2 != 0) && ((int)local_res10 == 0)) {
                local_60[0] = local_60[0] & 0xffffffff00000000 | (ulonglong)local_res8;
                goto LAB_140647b6a;
            }
            uVar4 = 0x80070490;
            goto LAB_140647bfe;
    }
    if (-1 < (int)uVar4) {
        LAB_140647b6a:
        if ((ulonglong)param_1[7] < 0xffffffff) {
            FUN_140647f30(param_1 + 6,local_68);
            plVar12 = *(longlong **)param_1[5];
            lVar10 = *plVar12;
            plVar8 = (longlong *)plVar12[1];
            *plVar8 = lVar10;
            *(longlong **)(lVar10 + 8) = plVar8;
            lVar10 = plVar12[2];
            if (lVar10 != 0) {
                (**(code **)(*(longlong *)(lVar10 + -0x10) + 8))(lVar10 + -0x10);
            }
            FUN_14018b900(plVar12,0);
            plVar12 = *(longlong **)param_1[5];
            lVar10 = *plVar12;
            plVar8 = (longlong *)plVar12[1];
            *plVar8 = lVar10;
            *(longlong **)(lVar10 + 8) = plVar8;
            lVar10 = plVar12[2];
            if (lVar10 != 0) {
                (**(code **)(*(longlong *)(lVar10 + -0x10) + 8))(lVar10 + -0x10);
            }
            FUN_14018b900(plVar12,0);
            goto LAB_140647c01;
        }
        uVar4 = 0x8007000e;
    }
    LAB_140647bfe:
    plVar19 = (longlong *)(ulonglong)uVar4;
    LAB_140647c01:
    if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar16 + 8))(plVar16);
    }
    if (local_res18 != (longlong *)0x0) {
        (**(code **)(local_res18[-2] + 8))(local_res18 + -2);
    }
    return plVar19;
    LAB_140647b65:
    local_60[0] = local_60[0] & 0xffffffff00000000 | (ulonglong)*puVar13;
    goto LAB_140647b6a;
}



// WARNING: Could not reconcile some variable overlaps

int FUN_140647c90(longlong param_1)

{
    short **ppsVar1;
    longlong lVar2;
    short *psVar3;
    int iVar4;
    uint uVar5;
    uint uVar6;
    longlong *plVar7;
    longlong *plVar8;
    longlong *plVar9;
    short *psVar10;
    longlong lVar11;
    undefined4 local_48 [2];
    undefined8 local_40;
    undefined4 local_38;
    undefined4 local_34;
    undefined4 local_30;
    undefined4 local_2c;
    undefined4 local_28 [4];

    iVar4 = FUN_140647740();
    if (iVar4 != 0) {
        if (((iVar4 + 0x80000000U & 0x80000000) == 0) && (iVar4 != -0x7ff8ffa9)) {
            return iVar4;
        }
        plVar8 = *(longlong **)(param_1 + 0x28);
        if ((longlong *)*plVar8 == plVar8) {
            return -0x7fff0001;
        }
        lVar11 = *(longlong *)(param_1 + 0x58);
        FUN_140647ff0(param_1 + 0x50,*plVar8 + 0x10);
        plVar8 = **(longlong ***)(param_1 + 0x28);
        lVar2 = *plVar8;
        plVar9 = (longlong *)plVar8[1];
        *plVar9 = lVar2;
        *(longlong **)(lVar2 + 8) = plVar9;
        lVar2 = plVar8[2];
        if (lVar2 != 0) {
            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        FUN_14018b900(plVar8,0);
        ppsVar1 = (short **)(*(longlong *)(param_1 + 0x50) + lVar11 * 8);
        uVar5 = FUN_14018e820(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + lVar11 * 8));
        if (uVar5 == 0) {
            local_40 = *ppsVar1;
            local_48[0] = 7;
            iVar4 = FUN_140647580(ppsVar1,&local_38);
            if (iVar4 < 0) {
                local_38 = 0;
            }
            iVar4 = FUN_1406474c0(ppsVar1,&local_34);
            if (iVar4 < 0) {
                local_34 = 4;
            }
            iVar4 = FUN_140647190(ppsVar1);
            if (iVar4 < 0) {
                local_30 = 0;
            }
            iVar4 = FUN_140647340(ppsVar1);
            if (iVar4 < 0) {
                local_2c = 0;
            }
            iVar4 = FUN_140647340(ppsVar1,local_28);
            if (iVar4 < 0) {
                local_28[0] = 0;
            }
        }
        else {
            psVar3 = *ppsVar1;
            plVar9 = (longlong *)0x0;
            local_40 = (short *)CONCAT44(local_40._4_4_,uVar5);
            plVar8 = *(longlong **)(psVar3 + -4);
            local_48[0] = 0;
            plVar7 = plVar9;
            psVar10 = psVar3;
            if (plVar8 != (longlong *)0x0) {
                do {
                    if (*psVar10 == 0x2d) {
                        lVar11 = (longlong)plVar8 - ((longlong)plVar7 + 1);
                        plVar8 = (longlong *)FUN_14018b280(lVar11 * 2 + 0x12,0);
                        if (plVar8 != (longlong *)0x0) {
                            plVar8[1] = lVar11;
                            *plVar8 = (longlong)&PTR_LAB_140b55060;
                            plVar9 = plVar8;
                        }
                        plVar8 = plVar9 + 2;
                        FUN_1407db590(plVar8,psVar3 + (longlong)plVar7 + 1,lVar11 * 2);
                        *(undefined2 *)(lVar11 * 2 + (longlong)plVar8) = 0;
                        uVar6 = FUN_14018e820(plVar8);
                        if (uVar5 < uVar6) {
                            uVar5 = uVar6;
                        }
                        local_40 = (short *)((ulonglong)local_40 & 0xffffffff | (ulonglong)(uVar5 + 1) << 0x20);
                        if (plVar8 != (longlong *)0x0) {
                            (**(code **)(*plVar9 + 8))(plVar9);
                        }
                        goto LAB_140647ea8;
                    }
                    plVar7 = (longlong *)((longlong)plVar7 + 1);
                    psVar10 = psVar10 + 1;
                } while (plVar7 < plVar8);
            }
            local_40 = (short *)CONCAT44(uVar5 + 1,uVar5);
        }
        LAB_140647ea8:
        if (0xfffffffe < *(ulonglong *)(param_1 + 0x38)) {
            return -0x7ff8fff2;
        }
        FUN_140647f30(param_1 + 0x30,local_48);
    }
    return 0;
}



undefined8 FUN_140647ef0(longlong param_1)

{
    undefined8 uVar1;

    uVar1 = FUN_140647c90();
    if ((int)uVar1 < 0) {
        return uVar1;
    }
    if ((longlong *)**(longlong **)(param_1 + 0x28) != *(longlong **)(param_1 + 0x28)) {
        uVar1 = FUN_140646ff0(param_1);
        if ((int)uVar1 < 0) {
            return uVar1;
        }
        uVar1 = FUN_140647ef0(param_1);
        if ((int)uVar1 < 0) {
            return uVar1;
        }
    }
    return 0;
}



longlong FUN_140647f30(longlong *param_1,undefined8 *param_2)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    lVar2 = param_1[1];
    lVar4 = FUN_14018db00(*param_1,lVar2 + 1,0x28);
    puVar1 = (undefined8 *)(lVar4 + lVar2 * 0x28);
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    puVar1[3] = param_2[3];
    puVar1[4] = param_2[4];
    if (*param_1 != lVar4) {
        FUN_1407db590(lVar4,*param_1,param_1[1] * 0x28);
        lVar3 = *param_1;
        if (lVar3 != 0) {
            (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
        }
        *param_1 = lVar4;
    }
    param_1[1] = lVar2 + 1;
    return lVar2;
}



longlong FUN_140647ff0(longlong *param_1,longlong *param_2)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    ulonglong uVar7;

    lVar2 = param_1[1];
    lVar4 = FUN_14018db00(*param_1,lVar2 + 1,8);
    puVar6 = (undefined8 *)0x0;
    plVar1 = (longlong *)(lVar4 + lVar2 * 8);
    if (plVar1 != (longlong *)0x0) {
        if (*param_2 == 0) {
            *plVar1 = 0;
        }
        else {
            lVar3 = *(longlong *)(*param_2 + -8);
            puVar5 = (undefined8 *)FUN_14018b280(lVar3 * 2 + 0x12,0);
            if (puVar5 != (undefined8 *)0x0) {
                puVar5[1] = lVar3;
                *puVar5 = &PTR_LAB_140b55060;
                puVar6 = puVar5;
            }
            puVar6 = puVar6 + 2;
            FUN_1407db590(puVar6,*param_2,lVar3 * 2);
            *(undefined2 *)(lVar3 * 2 + (longlong)puVar6) = 0;
            *plVar1 = (longlong)puVar6;
        }
    }
    uVar7 = 0;
    if (*param_1 != lVar4) {
        if (param_1[1] != 0) {
            do {
                puVar6 = (undefined8 *)(lVar4 + uVar7 * 8);
                if (puVar6 != (undefined8 *)0x0) {
                    lVar3 = *param_1;
                    *puVar6 = *(undefined8 *)(lVar3 + uVar7 * 8);
                    *(undefined8 *)(lVar3 + uVar7 * 8) = 0;
                }
                lVar3 = *(longlong *)(*param_1 + uVar7 * 8);
                if (lVar3 != 0) {
                    (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
                }
                uVar7 = uVar7 + 1;
            } while (uVar7 < (ulonglong)param_1[1]);
        }
        lVar3 = *param_1;
        if (lVar3 != 0) {
            (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
        }
        *param_1 = lVar4;
    }
    param_1[1] = lVar2 + 1;
    return lVar2;
}



undefined8 FUN_140648120(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    float fVar5;
    undefined4 uVar6;

    fVar5 = 1.0;
    uVar6 = 0;
    if (param_2 != 0) {
        if (param_3 == (undefined4 *)0x0) {
            param_3 = (undefined4 *)(param_2 + 8);
        }
        lVar1 = FUN_140209f60(*(undefined4 *)(param_2 + 0x140));
        lVar2 = FUN_140209b20(*(undefined4 *)(param_2 + 0x148));
        lVar3 = FUN_14020a3a0(*(undefined4 *)(param_2 + 0x144));
        lVar4 = FUN_14020ce20(*param_3);
        if (lVar1 != 0) {
            fVar5 = *(float *)(lVar1 + 0x14);
            uVar6 = 0;
        }
        if (lVar2 != 0) {
            fVar5 = fVar5 * *(float *)(lVar2 + 0x1c);
        }
        if (lVar3 != 0) {
            fVar5 = fVar5 * *(float *)(lVar3 + 0x1c);
        }
        if (lVar4 != 0) {
            fVar5 = fVar5 * *(float *)(lVar4 + 8);
        }
    }
    return CONCAT44(uVar6,fVar5);
}


//undefined8 FUN_1406481d0(longlong param_1)
undefined8 LoadUnit(longlong param_1)
{
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined **ppuVar5;
    undefined *puVar6;
    undefined8 local_38;
    undefined4 local_30;

    LuaElementLoaderOrSo(param_1,"Game.Unit");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = puVar1[-2];
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar1 + -1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"__index",7);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    ppuVar5 = &PTR_DAT_140c5a770;
    puVar6 = PTR_DAT_140c5a770;
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
        local_38 = FUN_140062650(param_1,puVar6);
        local_30 = 4;
        FUN_14005ea50(param_1,uVar4,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        uVar4 = *(undefined8 *)(param_1 + 0x10);
        ppuVar5 = ppuVar5 + 2;
        puVar6 = *ppuVar5;
    }
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    FUN_140057020(param_1,&DAT_140b2b760,&PTR_DAT_140b6fc90);
    FUN_140058710(param_1,"CodeEnumDisposition",0x13);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,"Hostile",7);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Neutral",7);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Friendly",8);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Unknown",7);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar3 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar3,lVar3 + -0x20,lVar3 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumCCState",0xf);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    lVar3 = 0x1c;
    *puVar1 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    do {
        FUN_1400f06f0(param_1);
        lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumCCStateStunVictimGameplay",0x21);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,"Forward",7);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Backward",8);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,&DAT_140b2b8ac,4);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4010000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Right",5);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4020000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar3 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar3,lVar3 + -0x20,lVar3 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumEliteness",0x11);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    lVar3 = 4;
    *puVar1 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    do {
        FUN_1400f06f0(param_1);
        lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumRank",0xc);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    lVar3 = 6;
    *puVar1 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    do {
        FUN_1400f06f0(param_1);
        lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumCastBarType",0x13);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,&DAT_140b2b850,4);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Normal",6);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Telegraph_Backlash",0x12);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Telegraph_Evade",0xf);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar3 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar3,lVar3 + -0x20,lVar3 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumProperties",0x12);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    lVar3 = 0x96;
    *puVar1 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    do {
        FUN_1400f06f0(param_1);
        lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumLevelDifferentialAttribute",0x22);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,&DAT_140b2b7d4,4);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Green",5);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,&DAT_140b2b7c4,4);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,&DAT_140b2b7cc,4);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4010000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"White",5);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4014000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Yellow",6);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4018000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Orange",6);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x401c000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,&DAT_1409f426c,3);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4020000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Magenta",7);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4022000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar3 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar3,lVar3 + -0x20,lVar3 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumResourceConversionType",0x1e);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,"Item2Item",9);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Item2Rep",8);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Prereq2Rep",10);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"AccountCurrency2Rep",0x13);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar3 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar3,lVar3 + -0x20,lVar3 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumFlightPathType",0x16);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,"Local",5);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Transfer",8);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar3 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar3,lVar3 + -0x20,lVar3 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumFaction",0xf);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,"DominionPlayer",0xe);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4064c00000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"ExilesPlayer",0xc);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4064e00000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar3 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar3,lVar3 + -0x20,lVar3 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumGender",0xe);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,&DAT_140b2ba60,4);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Female",6);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,&DAT_1409f4294,3);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar3 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar3,lVar3 + -0x20,lVar3 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumDiminishingReturnState",0x1e);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,"Linear",6);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"SoftCap",7);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"HardCap",7);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar3 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar3,lVar3 + -0x20,lVar3 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumSpellMechanic",0x15);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    lVar3 = 7;
    *puVar1 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    do {
        FUN_1400f06f0(param_1);
        lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumLootItemType",0x14);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,"StaticItem",10);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,&DAT_140b2b9e4,4);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    lVar3 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar3,lVar3 + -0x20,lVar3 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumEUnitStatType",0x15);
    FUN_140058900(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    lVar3 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar3,lVar3 + -0x20,lVar3 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_1400f0490(param_1);
    FUN_1400f0490(param_1);
    FUN_1400f0490(param_1);
    return 1;
}



undefined8 FUN_140649870(longlong param_1,undefined4 param_2)

{
    longlong lVar1;
    undefined4 *puVar2;
    undefined8 local_18;
    undefined4 local_10;

    lVar1 = FUN_1403d90d0();
    if (lVar1 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar2 = (undefined4 *)FUN_140059170(param_1,0x30);
    *(undefined8 *)(puVar2 + 8) = 0;
    puVar2[10] = 0;
    *puVar2 = param_2;
    *(undefined (*) [16])(puVar2 + 4) = ZEXT816(0);
    lVar1 = *(longlong *)(param_1 + 0x20);
    local_18 = FUN_140062650(param_1,"Game.Unit",9);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



undefined4 FUN_140649930(longlong param_1,longlong param_2)

{
    longlong lVar1;
    undefined4 *puVar2;
    undefined8 local_18;
    undefined4 local_10;

    if (param_2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar2 = (undefined4 *)FUN_140059170(param_1,0x30);
    *puVar2 = *(undefined4 *)(param_2 + 8);
    *(undefined8 *)(puVar2 + 8) = 0;
    puVar2[10] = 0;
    *(undefined (*) [16])(puVar2 + 4) = ZEXT816(0);
    lVar1 = *(longlong *)(param_1 + 0x20);
    local_18 = FUN_140062650(param_1,"Game.Unit",9);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



longlong FUN_1406499e0(undefined8 param_1)

{
    longlong *plVar1;
    int iVar2;
    int iVar3;
    undefined4 *puVar4;
    longlong lVar5;
    bool bVar6;

    puVar4 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (((puVar4 == (undefined4 *)0x0) || (lVar5 = FUN_1403d90d0(DAT_140c65898,*puVar4), lVar5 == 0))
        || (DAT_140c65898 == 0)) {
        return 0;
    }
    if (lVar5 != *(longlong *)(DAT_140c65898 + 0x78)) {
        if (*(longlong *)(DAT_140c65898 + 0x6490) == 0) {
            iVar3 = 0;
            iVar2 = 0;
            if (*(longlong **)(lVar5 + 0x118) != (longlong *)0x0) {
                iVar2 = (**(code **)(**(longlong **)(lVar5 + 0x118) + 0x18))();
            }
            if ((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
                (plVar1 = *(longlong **)(*(longlong *)(DAT_140c65898 + 0x78) + 0x118),
                        plVar1 != (longlong *)0x0)) {
                iVar3 = (**(code **)(*plVar1 + 0x18))();
            }
            bVar6 = iVar2 != iVar3;
        }
        else {
            iVar2 = FUN_14045a950(*(longlong *)(DAT_140c65898 + 0x6490),*(undefined4 *)(lVar5 + 8));
            bVar6 = iVar2 == 0;
        }
        if ((bVar6) && ((*(byte *)(lVar5 + 0x15a8) & 3) != 0)) {
            return 0;
        }
    }
    return lVar5;
}



undefined8 FUN_140649ad0(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    longlong lVar3;

    puVar2 = (undefined4 *)FUN_1406622c0(param_1,1);
    lVar3 = 0;
    if (puVar2 != (undefined4 *)0x0) {
        lVar3 = FUN_1403d90d0(DAT_140c65898,*puVar2);
    }
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(lVar3 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140649b30(longlong param_1)

{
    undefined4 *puVar1;
    uint *puVar2;
    longlong lVar3;
    longlong *plVar4;
    uint uVar5;
    float fVar6;

    lVar3 = FUN_1406622c0();
    if (lVar3 == 0) {
        LAB_140649b97:
        uVar5 = 0;
    }
    else {
        plVar4 = (longlong *)FUN_1403d90d0(DAT_140c65898);
        if (plVar4 == (longlong *)0x0) goto LAB_140649b97;
        if (*(int *)(plVar4 + 0x10) != 0x14) {
            puVar1 = *(undefined4 **)(param_1 + 0x10);
            *puVar1 = 0;
            puVar1[2] = 1;
            goto LAB_140649ba6;
        }
        fVar6 = (float)(**(code **)(*plVar4 + 0x60))();
        uVar5 = (uint)(*(float *)((longlong)plVar4 + 0x44) <= fVar6 &&
                       fVar6 != *(float *)((longlong)plVar4 + 0x44));
    }
    puVar2 = *(uint **)(param_1 + 0x10);
    puVar2[2] = 1;
    *puVar2 = uVar5;
    LAB_140649ba6:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140649bc0(longlong param_1)

{
    undefined4 *puVar1;
    longlong lVar2;

    puVar1 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar1 != (undefined4 *)0x0) {
        lVar2 = FUN_1403d90d0(DAT_140c65898,*puVar1);
        if ((lVar2 != 0) && (*(int *)(lVar2 + 0x80) != 0x14)) {
            puVar1 = *(undefined4 **)(param_1 + 0x10);
            *puVar1 = 0;
            puVar1[2] = 1;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar1 = *(undefined4 **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140649c40(longlong param_1)

{
    undefined4 *puVar1;
    longlong lVar2;
    int *piVar3;
    ulonglong uVar4;

    puVar1 = (undefined4 *)FUN_1406622c0(param_1,1);
    if ((puVar1 == (undefined4 *)0x0) || (lVar2 = FUN_1403d90d0(DAT_140c65898,*puVar1), lVar2 == 0)) {
        LAB_140649d08:
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        puVar1[2] = 1;
        *puVar1 = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    if ((*(longlong *)(lVar2 + 0x18) != 0) && ((*(byte *)(lVar2 + 0x28) & 0x20) != 0)) {
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        *puVar1 = 0;
        puVar1[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    if (*(int *)(lVar2 + 0x80) == 7) {
        uVar4 = 0;
        if (*(ulonglong *)(lVar2 + 0x198) != 0) {
            piVar3 = *(int **)(lVar2 + 400);
            do {
                if ((*piVar3 == 0) && (*(char *)(piVar3 + 1) == '\0')) {
                    if ((*(int **)(lVar2 + 400))[uVar4 * 3 + 2] != 0) goto LAB_140649d08;
                    break;
                }
                uVar4 = uVar4 + 1;
                piVar3 = piVar3 + 3;
            } while (uVar4 < *(ulonglong *)(lVar2 + 0x198));
        }
    }
    puVar1 = *(undefined4 **)(param_1 + 0x10);
    *puVar1 = 1;
    puVar1[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140649d30(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    undefined4 *puVar3;
    longlong lVar4;

    puVar3 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar3 != (undefined4 *)0x0) {
        lVar4 = FUN_1403d90d0(DAT_140c65898,*puVar3);
        if (lVar4 != 0) {
            iVar1 = *(int *)(lVar4 + 8);
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



undefined8 FUN_140649da0(longlong param_1)

{
    undefined8 *puVar1;
    undefined4 *puVar2;
    longlong lVar3;
    undefined8 uVar4;

    puVar2 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar2 != (undefined4 *)0x0) {
        lVar3 = FUN_1403d90d0(DAT_140c65898,*puVar2);
        if (lVar3 != 0) {
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar1 = *(undefined8 **)(param_1 + 0x10);
            uVar4 = FUN_14005c1b0(param_1,0,0);
            *(undefined4 *)(puVar1 + 1) = 5;
            *puVar1 = uVar4;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    return 0;
}



undefined8 FUN_14064a080(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    undefined4 *puVar3;
    longlong lVar4;

    puVar3 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar3 != (undefined4 *)0x0) {
        lVar4 = FUN_1403d90d0(DAT_140c65898,*puVar3);
        if (lVar4 != 0) {
            iVar1 = *(int *)(lVar4 + 0xd8);
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



undefined8 FUN_14064a100(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    undefined4 *puVar3;
    longlong lVar4;

    puVar3 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar3 != (undefined4 *)0x0) {
        lVar4 = FUN_1403d90d0(DAT_140c65898,*puVar3);
        if (lVar4 != 0) {
            if (*(int **)(lVar4 + 0xd0) == (int *)0x0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
            iVar1 = **(int **)(lVar4 + 0xd0);
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



undefined8 FUN_14064a1a0(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    undefined4 *puVar3;
    longlong lVar4;

    puVar3 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar3 != (undefined4 *)0x0) {
        lVar4 = FUN_1403d90d0(DAT_140c65898,*puVar3);
        if (lVar4 != 0) {
            iVar1 = *(int *)(lVar4 + 0xdc);
            pdVar2 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)iVar1;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    return 0;
}



undefined8 FUN_14064a200(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    undefined4 *puVar3;
    longlong lVar4;

    puVar3 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar3 != (undefined4 *)0x0) {
        lVar4 = FUN_1403d90d0(DAT_140c65898,*puVar3);
        if (lVar4 != 0) {
            iVar1 = *(int *)(lVar4 + 0x34);
            pdVar2 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)iVar1;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    return 0;
}



undefined4 FUN_14064a260(longlong param_1)

{
    undefined4 uVar1;
    undefined4 *puVar2;
    longlong lVar3;
    uint *puVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    ulonglong uVar8;

    puVar2 = (undefined4 *)FUN_1406622c0(param_1,1);
    if ((puVar2 == (undefined4 *)0x0) || (lVar3 = FUN_1403d90d0(DAT_140c65898,*puVar2), lVar3 == 0)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    if (*(longlong *)(lVar3 + 0x18) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar4 = (uint *)FUN_1401f60a0(*(undefined4 *)(*(longlong *)(lVar3 + 0x18) + 0x10));
    if (puVar4 != (uint *)0x0) {
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar7 = *(undefined8 **)(param_1 + 0x10);
        uVar5 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar7 + 1) = 5;
        *puVar7 = uVar5;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        uVar1 = FUN_1400578c0(param_1);
        uVar8 = (ulonglong)*puVar4;
        puVar6 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
        puVar7 = *(undefined8 **)(param_1 + 0x10);
        *puVar7 = *puVar6;
        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f06f0(param_1,puVar7,L"idArchetype",uVar8 & 0xffffffff);
        puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + -0x10);
        *(undefined8 **)(param_1 + 0x10) = puVar6;
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
        *puVar6 = *puVar7;
        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f0870(param_1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        puVar7 = *(undefined8 **)(param_1 + 0x10);
        puVar6 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
        *puVar7 = *puVar6;
        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400579e0(param_1);
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064a440(longlong param_1)

{
    double *pdVar1;
    int iVar2;
    undefined4 *puVar3;
    longlong lVar4;
    longlong *plVar5;

    puVar3 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar3 != (undefined4 *)0x0) {
        lVar4 = FUN_1403d90d0(DAT_140c65898,*puVar3);
        if (lVar4 != 0) {
            if (*(longlong *)(DAT_140c65898 + 0x78) == lVar4) {
                plVar5 = *(longlong **)(DAT_140c65898 + 0x6d90);
            }
            else {
                plVar5 = (longlong *)0x0;
            }
            iVar2 = 7;
            if (plVar5 != (longlong *)0x0) {
                iVar2 = (**(code **)(*plVar5 + 8))();
            }
            pdVar1 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar1 + 1) = 3;
            *pdVar1 = (double)iVar2;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064a4e0(longlong param_1)

{
    double *pdVar1;
    int iVar2;
    undefined4 *puVar3;
    longlong *plVar4;

    puVar3 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar3 != (undefined4 *)0x0) {
        plVar4 = (longlong *)FUN_1403d90d0(DAT_140c65898,*puVar3);
        if ((plVar4 != (longlong *)0x0) && ((*(byte *)(plVar4 + 5) & 1) == 0)) {
            if (*(int *)(plVar4 + 0x10) == 0x1e) {
                if (*(int *)(plVar4 + 0x37) == 3) {
                    LAB_14064a545:
                    iVar2 = (**(code **)(*plVar4 + 0x40))(plVar4);
                    pdVar1 = *(double **)(param_1 + 0x10);
                    *(undefined4 *)(pdVar1 + 1) = 3;
                    *pdVar1 = (double)iVar2;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    return 1;
                }
            }
            else if (*(int *)(plVar4 + 0x10) != 0x17) goto LAB_14064a545;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064a580(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    int iVar3;

    lVar2 = FUN_1406622c0();
    if (lVar2 != 0) {
        lVar2 = FUN_1403d90d0();
        if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x28) & 1) == 0)) {
            if (*(int *)(lVar2 + 0x80) == 0x1e) {
                if (*(int *)(lVar2 + 0x1b8) == 3) {
                    LAB_14064a5e1:
                    iVar3 = 0;
                    if (0 < *(int *)(lVar2 + 0x24c)) {
                        iVar3 = *(int *)(lVar2 + 0x24c);
                    }
                    pdVar1 = *(double **)(param_1 + 0x10);
                    *(undefined4 *)(pdVar1 + 1) = 3;
                    *pdVar1 = (double)iVar3;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    return 1;
                }
            }
            else if (*(int *)(lVar2 + 0x80) != 0x17) goto LAB_14064a5e1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064a620(longlong param_1)

{
    double *pdVar1;
    int iVar2;
    longlong lVar3;
    longlong *plVar4;

    lVar3 = FUN_1406622c0();
    if (lVar3 != 0) {
        plVar4 = (longlong *)FUN_1403d90d0();
        if ((plVar4 != (longlong *)0x0) && ((*(byte *)(plVar4 + 5) & 1) == 0)) {
            if (*(int *)(plVar4 + 0x10) == 0x1e) {
                if (*(int *)(plVar4 + 0x37) == 3) {
                    LAB_14064a685:
                    iVar2 = *(int *)(plVar4 + 0x49);
                    if (iVar2 < 1) {
                        iVar2 = (**(code **)(*plVar4 + 0x48))(plVar4);
                    }
                    pdVar1 = *(double **)(param_1 + 0x10);
                    *(undefined4 *)(pdVar1 + 1) = 3;
                    *pdVar1 = (double)iVar2;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    return 1;
                }
            }
            else if (*(int *)(plVar4 + 0x10) != 0x17) goto LAB_14064a685;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064a6d0(longlong param_1)

{
    double *pdVar1;
    int iVar2;
    undefined4 *puVar3;
    longlong *plVar4;

    puVar3 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar3 != (undefined4 *)0x0) {
        plVar4 = (longlong *)FUN_1403d90d0(DAT_140c65898,*puVar3);
        if ((plVar4 != (longlong *)0x0) && ((*(byte *)(plVar4 + 5) & 1) == 0)) {
            if (*(int *)(plVar4 + 0x10) == 0x1e) {
                if (*(int *)(plVar4 + 0x37) == 3) {
                    LAB_14064a73f:
                    iVar2 = (**(code **)(*plVar4 + 0x48))();
                    if (*(int *)(plVar4 + 0x10) == 10) {
                        iVar2 = 0;
                    }
                    pdVar1 = *(double **)(param_1 + 0x10);
                    *(undefined4 *)(pdVar1 + 1) = 3;
                    *pdVar1 = (double)iVar2;
                    goto LAB_14064a725;
                }
            }
            else if (*(int *)(plVar4 + 0x10) != 0x17) goto LAB_14064a73f;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    LAB_14064a725:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064a770(longlong param_1)

{
    double *pdVar1;
    undefined4 *puVar2;
    longlong lVar3;

    puVar2 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar2 != (undefined4 *)0x0) {
        lVar3 = FUN_1403d90d0(DAT_140c65898,*puVar2);
        if (lVar3 != 0) {
            if ((~(*(uint *)(lVar3 + 0x28) >> 1) & 1) == 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
            pdVar1 = *(double **)(param_1 + 0x10);
            *pdVar1 = (double)*(float *)(lVar3 + 0x218);
            *(undefined4 *)(pdVar1 + 1) = 3;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064a810(longlong param_1)

{
    double *pdVar1;
    undefined4 *puVar2;
    longlong lVar3;

    puVar2 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar2 != (undefined4 *)0x0) {
        lVar3 = FUN_1403d90d0(DAT_140c65898,*puVar2);
        if (lVar3 != 0) {
            if ((~(*(uint *)(lVar3 + 0x28) >> 1) & 1) == 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
            pdVar1 = *(double **)(param_1 + 0x10);
            *pdVar1 = (double)*(float *)(lVar3 + 0x5ec);
            *(undefined4 *)(pdVar1 + 1) = 3;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064a8b0(longlong param_1)

{
    double *pdVar1;
    undefined4 uVar2;
    uint uVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined8 *puVar7;
    longlong lVar8;
    ulonglong uVar9;
    undefined8 *puVar10;
    float fVar11;
    float fVar12;
    undefined local_48 [8];
    longlong local_40;

    lVar4 = FUN_1406499e0();
    if (lVar4 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar10 = *(undefined8 **)(param_1 + 0x10);
        uVar5 = FUN_14005c1b0(param_1);
        *(undefined4 *)(puVar10 + 1) = 5;
        *puVar10 = uVar5;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        uVar2 = FUN_1400578c0(param_1);
        if (*(float *)(lVar4 + 0x5ec) <= 0.0) {
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
            puVar10 = *(undefined8 **)(param_1 + 0x10);
            *puVar10 = *puVar7;
            *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            lVar6 = FUN_14018f0e0(local_48,L"nAmount");
            if (*(longlong *)(lVar6 + 8) == 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            }
            else {
                lVar8 = -1;
                do {
                    lVar8 = lVar8 + 1;
                } while (*(char *)(*(longlong *)(lVar6 + 8) + lVar8) != '\0');
                FUN_140058710(param_1);
            }
            if (local_40 != 0) {
                FUN_14018b900(local_40,0);
            }
            puVar10 = *(undefined8 **)(param_1 + 0x10);
            *puVar10 = 0;
            *(undefined4 *)(puVar10 + 1) = 3;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            uVar5 = FUN_1400580e0(param_1,0xfffffffd);
            FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                          *(longlong *)(param_1 + 0x10) + -0x10);
        }
        else {
            lVar6 = FUN_140200220(0x58);
            if (lVar6 == 0) {
                uVar3 = 500;
            }
            else {
                uVar3 = *(uint *)(lVar6 + 4);
            }
            fVar12 = *(float *)(lVar4 + 0x5ec);
            fVar11 = (float)FUN_1404602f0();
            fVar12 = ((fVar11 * (float)(1000 / (ulonglong)uVar3)) / fVar12) * 100.0;
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
            puVar10 = *(undefined8 **)(param_1 + 0x10);
            *puVar10 = *puVar7;
            *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            lVar6 = FUN_14018f0e0(local_48,L"nAmount");
            if (*(longlong *)(lVar6 + 8) == 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            }
            else {
                lVar8 = -1;
                do {
                    lVar8 = lVar8 + 1;
                } while (*(char *)(*(longlong *)(lVar6 + 8) + lVar8) != '\0');
                FUN_140058710(param_1);
            }
            if (local_40 != 0) {
                FUN_14018b900(local_40,0);
            }
            pdVar1 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar1 + 1) = 3;
            *pdVar1 = (double)fVar12;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            uVar5 = FUN_1400580e0(param_1,0xfffffffd);
            FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                          *(longlong *)(param_1 + 0x10) + -0x10);
        }
        *(longlong *)(param_1 + 0x10) =
                (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
        uVar3 = FUN_1404604d0(lVar4);
        uVar9 = (ulonglong)uVar3;
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
        puVar10 = *(undefined8 **)(param_1 + 0x10);
        *puVar10 = *puVar7;
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f06f0(param_1,puVar10,L"eDRState",uVar9 & 0xffffffff);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        puVar10 = *(undefined8 **)(param_1 + 0x10);
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
        *puVar10 = *puVar7;
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400579e0(param_1);
    }
    return 1;
}



undefined8 FUN_14064abb0(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    longlong lVar3;
    uint uVar4;
    float fVar5;
    float fVar6;
    float fVar7;

    lVar2 = FUN_1406499e0();
    if (lVar2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    else {
        lVar3 = FUN_140200220(0x58);
        if (lVar3 == 0) {
            uVar4 = 500;
        }
        else {
            uVar4 = *(uint *)(lVar3 + 4);
        }
        fVar6 = *(float *)(lVar2 + 0x5ec);
        fVar7 = *(float *)(lVar2 + 0x91c);
        fVar5 = (float)FUN_1404602f0();
        pdVar1 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar1 + 1) = 3;
        *pdVar1 = (double)(((fVar5 * (float)(1000 / (ulonglong)uVar4)) / fVar6 - fVar7) * 100.0);
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064ac80(longlong param_1)

{
    float fVar1;
    float fVar2;
    double *pdVar3;
    longlong lVar4;

    lVar4 = FUN_1406499e0();
    pdVar3 = *(double **)(param_1 + 0x10);
    if (lVar4 == 0) {
        *(undefined4 *)(pdVar3 + 1) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar1 = *(float *)(lVar4 + 0x924);
    fVar2 = *(float *)(lVar4 + 0x5ec);
    *(undefined4 *)(pdVar3 + 1) = 3;
    *pdVar3 = (double)(fVar1 * fVar2);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064aed0(longlong param_1)

{
    float fVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1406499e0();
    pdVar2 = *(double **)(param_1 + 0x10);
    if (lVar3 == 0) {
        *(undefined4 *)(pdVar2 + 1) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar1 = *(float *)(lVar3 + 0xa94);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)fVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064af30(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    float fVar3;
    float fVar4;

    lVar2 = FUN_1406499e0();
    if (lVar2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar4 = *(float *)(lVar2 + 0xa94);
    fVar3 = (float)FUN_140460670(lVar2);
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)((fVar3 - fVar4) * 100.0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined4 FUN_14064afb0(longlong param_1)

{
    double *pdVar1;
    undefined4 uVar2;
    uint uVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong lVar8;
    ulonglong uVar9;
    undefined8 *puVar10;
    float fVar11;
    undefined local_38 [8];
    longlong local_30;

    lVar4 = FUN_1406499e0();
    if (lVar4 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0);
    *(undefined4 *)(puVar10 + 1) = 5;
    *puVar10 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(param_1);
    fVar11 = (float)FUN_140460a30(lVar4);
    fVar11 = fVar11 * 100.0;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar7 = FUN_14018f0e0(local_38,L"nAmount");
    if (*(longlong *)(lVar7 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar8 = -1;
        do {
            lVar8 = lVar8 + 1;
        } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar8) != '\0');
        FUN_140058710(param_1);
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)fVar11;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    uVar3 = FUN_140460c10(lVar4);
    uVar9 = (ulonglong)uVar3;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1,puVar10,L"eDRState",uVar9 & 0xffffffff);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1);
    return 1;
}



undefined8 FUN_14064b1a0(longlong param_1)

{
    float fVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1406499e0();
    pdVar2 = *(double **)(param_1 + 0x10);
    if (lVar3 == 0) {
        *(undefined4 *)(pdVar2 + 1) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar1 = *(float *)(lVar3 + 0x944);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)fVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064b200(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    float fVar3;
    float fVar4;

    lVar2 = FUN_1406499e0();
    if (lVar2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar4 = *(float *)(lVar2 + 0x944);
    fVar3 = (float)FUN_140460a30(lVar2);
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)((fVar3 - fVar4) * 100.0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined4 FUN_14064b280(longlong param_1)

{
    double *pdVar1;
    undefined4 uVar2;
    uint uVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong lVar8;
    ulonglong uVar9;
    undefined8 *puVar10;
    float fVar11;
    undefined local_38 [8];
    longlong local_30;

    lVar4 = FUN_1406499e0();
    if (lVar4 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0);
    *(undefined4 *)(puVar10 + 1) = 5;
    *puVar10 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(param_1);
    fVar11 = (float)FUN_140460df0(lVar4);
    fVar11 = fVar11 * 100.0;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar7 = FUN_14018f0e0(local_38,L"nAmount");
    if (*(longlong *)(lVar7 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar8 = -1;
        do {
            lVar8 = lVar8 + 1;
        } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar8) != '\0');
        FUN_140058710(param_1);
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)fVar11;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    uVar3 = FUN_140460fd0(lVar4);
    uVar9 = (ulonglong)uVar3;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1,puVar10,L"eDRState",uVar9 & 0xffffffff);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1);
    return 1;
}



undefined8 FUN_14064b470(longlong param_1)

{
    float fVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1406499e0();
    pdVar2 = *(double **)(param_1 + 0x10);
    if (lVar3 == 0) {
        *(undefined4 *)(pdVar2 + 1) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar1 = *(float *)(lVar3 + 0x6ec);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)fVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064b4d0(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    float fVar3;
    float fVar4;

    lVar2 = FUN_1406499e0();
    if (lVar2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar4 = *(float *)(lVar2 + 0xaac);
    fVar3 = (float)FUN_140460df0(lVar2);
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)((fVar3 - fVar4) * 100.0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined4 FUN_14064b550(longlong param_1)

{
    double *pdVar1;
    undefined4 uVar2;
    uint uVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong lVar8;
    ulonglong uVar9;
    undefined8 *puVar10;
    float fVar11;
    undefined local_38 [8];
    longlong local_30;

    lVar4 = FUN_1406499e0();
    if (lVar4 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0);
    *(undefined4 *)(puVar10 + 1) = 5;
    *puVar10 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(param_1);
    fVar11 = (float)FUN_140462af0(lVar4);
    fVar11 = fVar11 * 100.0;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar7 = FUN_14018f0e0(local_38,L"nAmount");
    if (*(longlong *)(lVar7 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar8 = -1;
        do {
            lVar8 = lVar8 + 1;
        } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar8) != '\0');
        FUN_140058710(param_1);
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)fVar11;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    uVar3 = FUN_140462cf0(lVar4);
    uVar9 = (ulonglong)uVar3;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1,puVar10,L"eDRState",uVar9 & 0xffffffff);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1);
    return 1;
}



undefined8 FUN_14064b740(longlong param_1)

{
    float fVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1406499e0();
    pdVar2 = *(double **)(param_1 + 0x10);
    if (lVar3 == 0) {
        *(undefined4 *)(pdVar2 + 1) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar1 = *(float *)(lVar3 + 0x784);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)fVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064b7a0(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    float fVar3;
    float fVar4;

    lVar2 = FUN_1406499e0();
    if (lVar2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar4 = *(float *)(lVar2 + 0xab4);
    fVar3 = (float)FUN_140462af0(lVar2);
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)((fVar3 - fVar4) * 100.0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined4 FUN_14064b820(longlong param_1)

{
    double *pdVar1;
    undefined4 uVar2;
    uint uVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong lVar8;
    ulonglong uVar9;
    undefined8 *puVar10;
    float fVar11;
    undefined local_38 [8];
    longlong local_30;

    lVar4 = FUN_1406499e0();
    if (lVar4 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0);
    *(undefined4 *)(puVar10 + 1) = 5;
    *puVar10 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(param_1);
    fVar11 = (float)FUN_1404611b0(lVar4);
    fVar11 = fVar11 * 100.0 - 100.0;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar7 = FUN_14018f0e0(local_38,L"nAmount");
    if (*(longlong *)(lVar7 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar8 = -1;
        do {
            lVar8 = lVar8 + 1;
        } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar8) != '\0');
        FUN_140058710(param_1);
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)fVar11;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    uVar3 = FUN_1404613d0(lVar4);
    uVar9 = (ulonglong)uVar3;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1,puVar10,L"eDRState",uVar9 & 0xffffffff);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1);
    return 1;
}



undefined8 FUN_14064ba10(longlong param_1)

{
    float fVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1406499e0();
    pdVar2 = *(double **)(param_1 + 0x10);
    if (lVar3 == 0) {
        *(undefined4 *)(pdVar2 + 1) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar1 = *(float *)(lVar3 + 0xbe4);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)fVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064ba70(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    float fVar3;
    float fVar4;

    lVar2 = FUN_1406499e0();
    if (lVar2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar4 = *(float *)(lVar2 + 0xbe4);
    fVar3 = (float)FUN_1404611b0(lVar2);
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)((fVar3 - fVar4) * 100.0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined4 FUN_14064baf0(longlong param_1)

{
    double *pdVar1;
    undefined4 uVar2;
    uint uVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong lVar8;
    ulonglong uVar9;
    undefined8 *puVar10;
    float fVar11;
    undefined local_38 [8];
    longlong local_30;

    lVar4 = FUN_1406499e0();
    if (lVar4 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0);
    *(undefined4 *)(puVar10 + 1) = 5;
    *puVar10 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(param_1);
    fVar11 = (float)FUN_1404615f0(lVar4);
    fVar11 = fVar11 * 100.0;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar7 = FUN_14018f0e0(local_38,L"nAmount");
    if (*(longlong *)(lVar7 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar8 = -1;
        do {
            lVar8 = lVar8 + 1;
        } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar8) != '\0');
        FUN_140058710(param_1);
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)fVar11;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    uVar3 = FUN_140461810(lVar4);
    uVar9 = (ulonglong)uVar3;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1,puVar10,L"eDRState",uVar9 & 0xffffffff);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1);
    return 1;
}



undefined8 FUN_14064bce0(longlong param_1)

{
    float fVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1406499e0();
    pdVar2 = *(double **)(param_1 + 0x10);
    if (lVar3 == 0) {
        *(undefined4 *)(pdVar2 + 1) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar1 = *(float *)(lVar3 + 0xbdc);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)fVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064bd40(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    float fVar3;
    float fVar4;

    lVar2 = FUN_1406499e0();
    if (lVar2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar4 = *(float *)(lVar2 + 0xbdc);
    fVar3 = (float)FUN_1404615f0(lVar2);
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)((fVar3 - fVar4) * 100.0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined4 FUN_14064bdc0(longlong param_1)

{
    double *pdVar1;
    undefined4 uVar2;
    uint uVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong lVar8;
    ulonglong uVar9;
    undefined8 *puVar10;
    float fVar11;
    undefined local_38 [8];
    longlong local_30;

    lVar4 = FUN_1406499e0();
    if (lVar4 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0);
    *(undefined4 *)(puVar10 + 1) = 5;
    *puVar10 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(param_1);
    fVar11 = (float)FUN_140461a30(lVar4);
    fVar11 = fVar11 * 100.0;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar7 = FUN_14018f0e0(local_38,L"nAmount");
    if (*(longlong *)(lVar7 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar8 = -1;
        do {
            lVar8 = lVar8 + 1;
        } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar8) != '\0');
        FUN_140058710(param_1);
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)fVar11;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    uVar3 = FUN_140461c10(lVar4);
    uVar9 = (ulonglong)uVar3;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1,puVar10,L"eDRState",uVar9 & 0xffffffff);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1);
    return 1;
}



undefined8 FUN_14064bfb0(longlong param_1)

{
    float fVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1406499e0();
    pdVar2 = *(double **)(param_1 + 0x10);
    if (lVar3 == 0) {
        *(undefined4 *)(pdVar2 + 1) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar1 = *(float *)(lVar3 + 0xae4);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)fVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064c010(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    float fVar3;
    float fVar4;

    lVar2 = FUN_1406499e0();
    if (lVar2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar4 = *(float *)(lVar2 + 0xae4);
    fVar3 = (float)FUN_140461a30(lVar2);
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)((fVar3 - fVar4) * 100.0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined4 FUN_14064c090(longlong param_1)

{
    double *pdVar1;
    undefined4 uVar2;
    uint uVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong lVar8;
    ulonglong uVar9;
    undefined8 *puVar10;
    float fVar11;
    undefined local_38 [8];
    longlong local_30;

    lVar4 = FUN_1406499e0();
    if (lVar4 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0);
    *(undefined4 *)(puVar10 + 1) = 5;
    *puVar10 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(param_1);
    fVar11 = (float)FUN_140461df0(lVar4);
    fVar11 = fVar11 * 100.0;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar7 = FUN_14018f0e0(local_38,L"nAmount");
    if (*(longlong *)(lVar7 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar8 = -1;
        do {
            lVar8 = lVar8 + 1;
        } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar8) != '\0');
        FUN_140058710(param_1);
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)fVar11;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    uVar3 = FUN_140461fd0(lVar4);
    uVar9 = (ulonglong)uVar3;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1,puVar10,L"eDRState",uVar9 & 0xffffffff);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1);
    return 1;
}



undefined8 FUN_14064c280(longlong param_1)

{
    float fVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1406499e0();
    pdVar2 = *(double **)(param_1 + 0x10);
    if (lVar3 == 0) {
        *(undefined4 *)(pdVar2 + 1) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar1 = *(float *)(lVar3 + 0x994);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)fVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064c2e0(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    float fVar3;
    float fVar4;

    lVar2 = FUN_1406499e0();
    if (lVar2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar4 = *(float *)(lVar2 + 0x994);
    fVar3 = (float)FUN_140461df0(lVar2);
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)((fVar3 - fVar4) * 100.0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined4 FUN_14064c360(longlong param_1)

{
    double *pdVar1;
    undefined4 uVar2;
    uint uVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong lVar8;
    ulonglong uVar9;
    undefined8 *puVar10;
    float fVar11;
    undefined local_38 [8];
    longlong local_30;

    lVar4 = FUN_1406499e0();
    if (lVar4 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0);
    *(undefined4 *)(puVar10 + 1) = 5;
    *puVar10 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(param_1);
    fVar11 = (float)FUN_1404621b0(lVar4);
    fVar11 = fVar11 * 100.0;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar7 = FUN_14018f0e0(local_38,L"nAmount");
    if (*(longlong *)(lVar7 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar8 = -1;
        do {
            lVar8 = lVar8 + 1;
        } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar8) != '\0');
        FUN_140058710(param_1);
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)fVar11;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    uVar3 = FUN_140462390(lVar4);
    uVar9 = (ulonglong)uVar3;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1,puVar10,L"eDRState",uVar9 & 0xffffffff);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1);
    return 1;
}



undefined8 FUN_14064c550(longlong param_1)

{
    float fVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1406499e0();
    pdVar2 = *(double **)(param_1 + 0x10);
    if (lVar3 == 0) {
        *(undefined4 *)(pdVar2 + 1) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar1 = *(float *)(lVar3 + 0xa9c);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)fVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064c5b0(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    float fVar3;
    float fVar4;

    lVar2 = FUN_1406499e0();
    if (lVar2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar4 = *(float *)(lVar2 + 0xa9c);
    fVar3 = (float)FUN_1404621b0(lVar2);
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)((fVar3 - fVar4) * 100.0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined4 FUN_14064c630(longlong param_1)

{
    double *pdVar1;
    undefined4 uVar2;
    uint uVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong lVar8;
    ulonglong uVar9;
    undefined8 *puVar10;
    float fVar11;
    undefined local_38 [8];
    longlong local_30;

    lVar4 = FUN_1406499e0();
    if (lVar4 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0);
    *(undefined4 *)(puVar10 + 1) = 5;
    *puVar10 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(param_1);
    fVar11 = (float)FUN_140462570(lVar4);
    fVar11 = fVar11 * 100.0;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar7 = FUN_14018f0e0(local_38,L"nAmount");
    if (*(longlong *)(lVar7 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar8 = -1;
        do {
            lVar8 = lVar8 + 1;
        } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar8) != '\0');
        FUN_140058710(param_1);
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)fVar11;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    uVar3 = FUN_140462750(lVar4);
    uVar9 = (ulonglong)uVar3;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1,puVar10,L"eDRState",uVar9 & 0xffffffff);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1);
    return 1;
}



undefined8 FUN_14064c820(longlong param_1)

{
    float fVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1406499e0();
    pdVar2 = *(double **)(param_1 + 0x10);
    if (lVar3 == 0) {
        *(undefined4 *)(pdVar2 + 1) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar1 = *(float *)(lVar3 + 0xaa4);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)fVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064c880(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    float fVar3;
    float fVar4;

    lVar2 = FUN_1406499e0();
    if (lVar2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar4 = *(float *)(lVar2 + 0xaa4);
    fVar3 = (float)FUN_140462570(lVar2);
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)((fVar3 - fVar4) * 100.0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064c900(longlong param_1)

{
    float fVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1406499e0();
    pdVar2 = *(double **)(param_1 + 0x10);
    if (lVar3 == 0) {
        *(undefined4 *)(pdVar2 + 1) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar1 = *(float *)(lVar3 + 0xaec);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)fVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064c960(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    float fVar3;
    float fVar4;

    lVar2 = FUN_1406499e0();
    if (lVar2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar4 = *(float *)(lVar2 + 0x6dc);
    lVar2 = FUN_140200220(0x4f2);
    if (lVar2 == 0) {
        fVar3 = 0.25;
    }
    else {
        fVar3 = *(float *)(lVar2 + 0x18);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *pdVar1 = (double)(fVar4 * fVar3);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064c9f0(longlong param_1)

{
    float fVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1406499e0();
    pdVar2 = *(double **)(param_1 + 0x10);
    if (lVar3 == 0) {
        *(undefined4 *)(pdVar2 + 1) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar1 = *(float *)(lVar3 + 0x6dc);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)fVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064ca50(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    float fVar3;
    float fVar4;

    lVar2 = FUN_1406499e0();
    if (lVar2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar4 = *(float *)(lVar2 + 0x6e4);
    lVar2 = FUN_140200220(0x4f2);
    if (lVar2 == 0) {
        fVar3 = 0.25;
    }
    else {
        fVar3 = *(float *)(lVar2 + 0x1c);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *pdVar1 = (double)(fVar4 * fVar3);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064cae0(longlong param_1)

{
    float fVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1406499e0();
    pdVar2 = *(double **)(param_1 + 0x10);
    if (lVar3 == 0) {
        *(undefined4 *)(pdVar2 + 1) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar1 = *(float *)(lVar3 + 0x6e4);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)fVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064cb40(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    float fVar3;

    lVar2 = FUN_1406499e0();
    if (lVar2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar3 = (float)FUN_1404629d0(lVar2);
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)fVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined4 FUN_14064cba0(longlong param_1)

{
    double *pdVar1;
    undefined4 uVar2;
    uint uVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong lVar8;
    ulonglong uVar9;
    undefined8 *puVar10;
    float fVar11;
    undefined local_38 [8];
    longlong local_30;

    lVar4 = FUN_1406499e0();
    if (lVar4 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0);
    *(undefined4 *)(puVar10 + 1) = 5;
    *puVar10 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(param_1);
    fVar11 = (float)FUN_140462ef0(lVar4);
    fVar11 = fVar11 * 100.0;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar7 = FUN_14018f0e0(local_38,L"nAmount");
    if (*(longlong *)(lVar7 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar8 = -1;
        do {
            lVar8 = lVar8 + 1;
        } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar8) != '\0');
        FUN_140058710(param_1);
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)fVar11;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    uVar3 = FUN_140463120(lVar4);
    uVar9 = (ulonglong)uVar3;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1,puVar10,L"eDRState",uVar9 & 0xffffffff);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1);
    return 1;
}



undefined8 FUN_14064cd90(longlong param_1)

{
    float fVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1406499e0();
    pdVar2 = *(double **)(param_1 + 0x10);
    if (lVar3 == 0) {
        *(undefined4 *)(pdVar2 + 1) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar1 = *(float *)(lVar3 + 0x904);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)fVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064cdf0(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    float fVar3;
    float fVar4;

    lVar2 = FUN_1406499e0();
    if (lVar2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar4 = *(float *)(lVar2 + 0x904);
    fVar3 = (float)FUN_140462ef0(lVar2);
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)((fVar3 - fVar4) * 100.0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined4 FUN_14064ce70(longlong param_1)

{
    double *pdVar1;
    undefined4 uVar2;
    uint uVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong lVar8;
    ulonglong uVar9;
    undefined8 *puVar10;
    float fVar11;
    undefined local_38 [8];
    longlong local_30;

    lVar4 = FUN_1406499e0();
    if (lVar4 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0);
    *(undefined4 *)(puVar10 + 1) = 5;
    *puVar10 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(param_1);
    fVar11 = (float)FUN_140463700(lVar4);
    fVar11 = fVar11 * 100.0;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar7 = FUN_14018f0e0(local_38,L"nAmount");
    if (*(longlong *)(lVar7 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar8 = -1;
        do {
            lVar8 = lVar8 + 1;
        } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar8) != '\0');
        FUN_140058710(param_1);
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)fVar11;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    uVar3 = FUN_1404638e0(lVar4);
    uVar9 = (ulonglong)uVar3;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1,puVar10,L"eDRState",uVar9 & 0xffffffff);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1);
    return 1;
}



undefined8 FUN_14064d060(longlong param_1)

{
    float fVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1406499e0();
    pdVar2 = *(double **)(param_1 + 0x10);
    if (lVar3 == 0) {
        *(undefined4 *)(pdVar2 + 1) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar1 = *(float *)(lVar3 + 0x8f4);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)fVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064d0c0(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    float fVar3;
    float fVar4;

    lVar2 = FUN_1406499e0();
    if (lVar2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar4 = *(float *)(lVar2 + 0x8f4);
    fVar3 = (float)FUN_140463700(lVar2);
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)((fVar3 - fVar4) * 100.0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined4 FUN_14064d140(longlong param_1)

{
    double *pdVar1;
    undefined4 uVar2;
    uint uVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong lVar8;
    ulonglong uVar9;
    undefined8 *puVar10;
    float fVar11;
    undefined local_38 [8];
    longlong local_30;

    lVar4 = FUN_1406499e0();
    if (lVar4 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0);
    *(undefined4 *)(puVar10 + 1) = 5;
    *puVar10 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(param_1);
    fVar11 = (float)FUN_140463e80(lVar4);
    fVar11 = fVar11 * 100.0;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar7 = FUN_14018f0e0(local_38,L"nAmount");
    if (*(longlong *)(lVar7 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar8 = -1;
        do {
            lVar8 = lVar8 + 1;
        } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar8) != '\0');
        FUN_140058710(param_1);
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)fVar11;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    uVar3 = FUN_140464060(lVar4);
    uVar9 = (ulonglong)uVar3;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1,puVar10,L"eDRState",uVar9 & 0xffffffff);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1);
    return 1;
}



undefined8 FUN_14064d330(longlong param_1)

{
    float fVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1406499e0();
    pdVar2 = *(double **)(param_1 + 0x10);
    if (lVar3 == 0) {
        *(undefined4 *)(pdVar2 + 1) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar1 = *(float *)(lVar3 + 0x9bc);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)fVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064d390(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    float fVar3;
    float fVar4;

    lVar2 = FUN_1406499e0();
    if (lVar2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar4 = *(float *)(lVar2 + 0x9bc);
    fVar3 = (float)FUN_140463e80(lVar2);
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)((fVar3 - fVar4) * 100.0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined4 FUN_14064d410(longlong param_1)

{
    double *pdVar1;
    undefined4 uVar2;
    uint uVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong lVar8;
    ulonglong uVar9;
    undefined8 *puVar10;
    float fVar11;
    undefined local_38 [8];
    longlong local_30;

    lVar4 = FUN_1406499e0();
    if (lVar4 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0);
    *(undefined4 *)(puVar10 + 1) = 5;
    *puVar10 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(param_1);
    fVar11 = (float)FUN_140463340(lVar4);
    fVar11 = fVar11 * 100.0;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar7 = FUN_14018f0e0(local_38,L"nAmount");
    if (*(longlong *)(lVar7 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar8 = -1;
        do {
            lVar8 = lVar8 + 1;
        } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar8) != '\0');
        FUN_140058710(param_1);
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)fVar11;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    uVar3 = FUN_140463520(lVar4);
    uVar9 = (ulonglong)uVar3;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1,puVar10,L"eDRState",uVar9 & 0xffffffff);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1);
    return 1;
}



undefined8 FUN_14064d600(longlong param_1)

{
    float fVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1406499e0();
    pdVar2 = *(double **)(param_1 + 0x10);
    if (lVar3 == 0) {
        *(undefined4 *)(pdVar2 + 1) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar1 = *(float *)(lVar3 + 0x6cc);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)fVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064d660(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    float fVar3;
    float fVar4;

    lVar2 = FUN_1406499e0();
    if (lVar2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar4 = *(float *)(lVar2 + 0x8ec);
    fVar3 = (float)FUN_140463340(lVar2);
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)((fVar3 - fVar4) * 100.0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined4 FUN_14064d6e0(longlong param_1)

{
    double *pdVar1;
    undefined4 uVar2;
    uint uVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong lVar8;
    ulonglong uVar9;
    undefined8 *puVar10;
    float fVar11;
    undefined local_38 [8];
    longlong local_30;

    lVar4 = FUN_1406499e0();
    if (lVar4 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0);
    *(undefined4 *)(puVar10 + 1) = 5;
    *puVar10 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(param_1);
    fVar11 = (float)FUN_140463ac0(lVar4);
    fVar11 = fVar11 * 100.0;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar7 = FUN_14018f0e0(local_38,L"nAmount");
    if (*(longlong *)(lVar7 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar8 = -1;
        do {
            lVar8 = lVar8 + 1;
        } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar8) != '\0');
        FUN_140058710(param_1);
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)fVar11;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    uVar3 = FUN_140463ca0(lVar4);
    uVar9 = (ulonglong)uVar3;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1,puVar10,L"eDRState",uVar9 & 0xffffffff);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1);
    return 1;
}



undefined8 FUN_14064d8d0(longlong param_1)

{
    float fVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1406499e0();
    pdVar2 = *(double **)(param_1 + 0x10);
    if (lVar3 == 0) {
        *(undefined4 *)(pdVar2 + 1) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar1 = *(float *)(lVar3 + 0x90c);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)fVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064d930(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    float fVar3;
    float fVar4;

    lVar2 = FUN_1406499e0();
    if (lVar2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar4 = *(float *)(lVar2 + 0x90c);
    fVar3 = (float)FUN_140463ac0(lVar2);
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)((fVar3 - fVar4) * 100.0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined4 FUN_14064d9b0(longlong param_1)

{
    double *pdVar1;
    undefined4 uVar2;
    uint uVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong lVar8;
    ulonglong uVar9;
    undefined8 *puVar10;
    float fVar11;
    undefined8 extraout_XMM0_Qa;
    undefined local_38 [8];
    longlong local_30;

    lVar4 = FUN_1406499e0();
    if (lVar4 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0);
    *(undefined4 *)(puVar10 + 1) = 5;
    *puVar10 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(param_1);
    fVar11 = (float)FUN_140464240(extraout_XMM0_Qa,
                                  *(float *)(lVar4 + 0x714) + *(float *)(lVar4 + 0x694),
                                  *(float *)(lVar4 + 0x8fc) + *(float *)(lVar4 + 0xa44),lVar4);
    fVar11 = fVar11 * 100.0;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar7 = FUN_14018f0e0(local_38,L"nAmount");
    if (*(longlong *)(lVar7 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar8 = -1;
        do {
            lVar8 = lVar8 + 1;
        } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar8) != '\0');
        FUN_140058710(param_1);
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)fVar11;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    uVar5 = FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                          *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    uVar3 = FUN_140464430(uVar5,*(float *)(lVar4 + 0x714) + *(float *)(lVar4 + 0x694),lVar4);
    uVar9 = (ulonglong)uVar3;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1,puVar10,L"eDRState",uVar9 & 0xffffffff);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1);
    return 1;
}



undefined8 FUN_14064dbd0(longlong param_1)

{
    float fVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1406499e0();
    pdVar2 = *(double **)(param_1 + 0x10);
    if (lVar3 == 0) {
        *(undefined4 *)(pdVar2 + 1) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar1 = *(float *)(lVar3 + 0x694);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)fVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064dc30(longlong param_1)

{
    float fVar1;
    float fVar2;
    double *pdVar3;
    longlong lVar4;
    float fVar5;
    undefined8 extraout_XMM0_Qa;

    lVar4 = FUN_1406499e0();
    if (lVar4 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    else {
        fVar5 = (float)FUN_140464240(extraout_XMM0_Qa,
                                     *(float *)(lVar4 + 0x714) + *(float *)(lVar4 + 0x694),
                                     *(float *)(lVar4 + 0x8fc) + *(float *)(lVar4 + 0xa44),lVar4);
        pdVar3 = *(double **)(param_1 + 0x10);
        fVar1 = *(float *)(lVar4 + 0xa44);
        fVar2 = *(float *)(lVar4 + 0x8fc);
        *(undefined4 *)(pdVar3 + 1) = 3;
        *pdVar3 = (double)(((fVar5 - fVar1) - fVar2) * 100.0);
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined4 FUN_14064dcc0(longlong param_1)

{
    double *pdVar1;
    undefined4 uVar2;
    uint uVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong lVar8;
    ulonglong uVar9;
    undefined8 *puVar10;
    float fVar11;
    undefined8 extraout_XMM0_Qa;
    undefined local_38 [8];
    longlong local_30;

    lVar4 = FUN_1406499e0();
    if (lVar4 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0);
    *(undefined4 *)(puVar10 + 1) = 5;
    *puVar10 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(param_1);
    fVar11 = (float)FUN_140464240(extraout_XMM0_Qa,
                                  *(float *)(lVar4 + 0x714) + *(float *)(lVar4 + 0x69c),
                                  *(float *)(lVar4 + 0x8fc) + *(float *)(lVar4 + 0xa4c),lVar4);
    fVar11 = fVar11 * 100.0;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar7 = FUN_14018f0e0(local_38,L"nAmount");
    if (*(longlong *)(lVar7 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar8 = -1;
        do {
            lVar8 = lVar8 + 1;
        } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar8) != '\0');
        FUN_140058710(param_1);
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)fVar11;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    uVar5 = FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                          *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    uVar3 = FUN_140464430(uVar5,*(float *)(lVar4 + 0x714) + *(float *)(lVar4 + 0x69c),lVar4);
    uVar9 = (ulonglong)uVar3;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1,puVar10,L"eDRState",uVar9 & 0xffffffff);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1);
    return 1;
}



undefined8 FUN_14064dee0(longlong param_1)

{
    float fVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1406499e0();
    pdVar2 = *(double **)(param_1 + 0x10);
    if (lVar3 == 0) {
        *(undefined4 *)(pdVar2 + 1) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar1 = *(float *)(lVar3 + 0x69c);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)fVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064df40(longlong param_1)

{
    float fVar1;
    float fVar2;
    double *pdVar3;
    longlong lVar4;
    float fVar5;
    undefined8 extraout_XMM0_Qa;

    lVar4 = FUN_1406499e0();
    if (lVar4 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    else {
        fVar5 = (float)FUN_140464240(extraout_XMM0_Qa,
                                     *(float *)(lVar4 + 0x714) + *(float *)(lVar4 + 0x69c),
                                     *(float *)(lVar4 + 0x8fc) + *(float *)(lVar4 + 0xa4c),lVar4);
        pdVar3 = *(double **)(param_1 + 0x10);
        fVar1 = *(float *)(lVar4 + 0xa4c);
        fVar2 = *(float *)(lVar4 + 0x8fc);
        *(undefined4 *)(pdVar3 + 1) = 3;
        *pdVar3 = (double)(((fVar5 - fVar1) - fVar2) * 100.0);
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined4 FUN_14064dfd0(longlong param_1)

{
    double *pdVar1;
    undefined4 uVar2;
    uint uVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong lVar8;
    ulonglong uVar9;
    undefined8 *puVar10;
    float fVar11;
    undefined8 extraout_XMM0_Qa;
    undefined local_38 [8];
    longlong local_30;

    lVar4 = FUN_1406499e0();
    if (lVar4 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0);
    *(undefined4 *)(puVar10 + 1) = 5;
    *puVar10 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(param_1);
    fVar11 = (float)FUN_140464240(extraout_XMM0_Qa,
                                  *(float *)(lVar4 + 0x714) + *(float *)(lVar4 + 0x6a4),
                                  *(float *)(lVar4 + 0x8fc) + *(float *)(lVar4 + 0xa54),lVar4);
    fVar11 = fVar11 * 100.0;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar7 = FUN_14018f0e0(local_38,L"nAmount");
    if (*(longlong *)(lVar7 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar8 = -1;
        do {
            lVar8 = lVar8 + 1;
        } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar8) != '\0');
        FUN_140058710(param_1);
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)fVar11;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    uVar5 = FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                          *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    uVar3 = FUN_140464430(uVar5,*(float *)(lVar4 + 0x714) + *(float *)(lVar4 + 0x6a4),lVar4);
    uVar9 = (ulonglong)uVar3;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1,puVar10,L"eDRState",uVar9 & 0xffffffff);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1);
    return 1;
}



undefined8 FUN_14064e1f0(longlong param_1)

{
    float fVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1406499e0();
    pdVar2 = *(double **)(param_1 + 0x10);
    if (lVar3 == 0) {
        *(undefined4 *)(pdVar2 + 1) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar1 = *(float *)(lVar3 + 0x6a4);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)fVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064e250(longlong param_1)

{
    float fVar1;
    float fVar2;
    double *pdVar3;
    longlong lVar4;
    float fVar5;
    undefined8 extraout_XMM0_Qa;

    lVar4 = FUN_1406499e0();
    if (lVar4 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    else {
        fVar5 = (float)FUN_140464240(extraout_XMM0_Qa,
                                     *(float *)(lVar4 + 0x714) + *(float *)(lVar4 + 0x6a4),
                                     *(float *)(lVar4 + 0x8fc) + *(float *)(lVar4 + 0xa54),lVar4);
        pdVar3 = *(double **)(param_1 + 0x10);
        fVar1 = *(float *)(lVar4 + 0xa54);
        fVar2 = *(float *)(lVar4 + 0x8fc);
        *(undefined4 *)(pdVar3 + 1) = 3;
        *pdVar3 = (double)(((fVar5 - fVar1) - fVar2) * 100.0);
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064e2e0(longlong param_1)

{
    float fVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1406499e0();
    pdVar2 = *(double **)(param_1 + 0x10);
    if (lVar3 == 0) {
        *(undefined4 *)(pdVar2 + 1) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar1 = *(float *)(lVar3 + 0x74c);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)fVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064e340(longlong param_1)

{
    float fVar1;
    double *pdVar2;
    longlong *plVar3;
    float fVar4;

    plVar3 = (longlong *)FUN_1406499e0();
    if (plVar3 == (longlong *)0x0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    else {
        fVar4 = (float)(**(code **)(*plVar3 + 0xa8))(plVar3,1);
        pdVar2 = *(double **)(param_1 + 0x10);
        fVar1 = *(float *)((longlong)plVar3 + 0xafc);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)((fVar4 - fVar1) * 100.0);
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064e3b0(longlong param_1)

{
    float fVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1406499e0();
    pdVar2 = *(double **)(param_1 + 0x10);
    if (lVar3 == 0) {
        *(undefined4 *)(pdVar2 + 1) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar1 = *(float *)(lVar3 + 0x744);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)fVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064e410(longlong param_1)

{
    float fVar1;
    double *pdVar2;
    longlong *plVar3;
    float fVar4;

    plVar3 = (longlong *)FUN_1406499e0();
    if (plVar3 == (longlong *)0x0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    else {
        fVar4 = (float)(**(code **)(*plVar3 + 0xa8))(plVar3,1);
        pdVar2 = *(double **)(param_1 + 0x10);
        fVar1 = *(float *)((longlong)plVar3 + 0xaf4);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)((fVar4 - fVar1) * 100.0);
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined4 FUN_14064e480(longlong param_1)

{
    double *pdVar1;
    undefined4 uVar2;
    uint uVar3;
    longlong *plVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong lVar8;
    ulonglong uVar9;
    undefined8 *puVar10;
    float fVar11;
    undefined local_38 [8];
    longlong local_30;

    plVar4 = (longlong *)FUN_1406499e0();
    if (plVar4 == (longlong *)0x0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar10 + 1) = 5;
    *puVar10 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(param_1);
    fVar11 = (float)(**(code **)(*plVar4 + 0xa8))(plVar4,1);
    fVar11 = fVar11 * 100.0;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar7 = FUN_14018f0e0(local_38,L"nAmount");
    if (*(longlong *)(lVar7 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar8 = -1;
        do {
            lVar8 = lVar8 + 1;
        } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar8) != '\0');
        FUN_140058710(param_1);
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)fVar11;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    uVar3 = FUN_140464de0(plVar4,1);
    uVar9 = (ulonglong)uVar3;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1,puVar10,L"eDRState",uVar9 & 0xffffffff);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1);
    return 1;
}



undefined4 FUN_14064e680(longlong param_1)

{
    double *pdVar1;
    undefined4 uVar2;
    uint uVar3;
    longlong *plVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong lVar8;
    ulonglong uVar9;
    undefined8 *puVar10;
    float fVar11;
    undefined local_38 [8];
    longlong local_30;

    plVar4 = (longlong *)FUN_1406499e0();
    if (plVar4 == (longlong *)0x0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar10 + 1) = 5;
    *puVar10 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(param_1);
    fVar11 = (float)(**(code **)(*plVar4 + 0xa8))(plVar4,0);
    fVar11 = fVar11 * 100.0;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar7 = FUN_14018f0e0(local_38,L"nAmount");
    if (*(longlong *)(lVar7 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar8 = -1;
        do {
            lVar8 = lVar8 + 1;
        } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar8) != '\0');
        FUN_140058710(param_1);
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)fVar11;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    uVar3 = FUN_140464de0(plVar4,0);
    uVar9 = (ulonglong)uVar3;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1,puVar10,L"eDRState",uVar9 & 0xffffffff);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1);
    return 1;
}



undefined8 FUN_14064e870(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    float fVar3;

    lVar2 = FUN_1406499e0();
    if (lVar2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar3 = (float)FUN_140464600(lVar2,1);
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)(fVar3 * 100.0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064e8e0(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    float fVar3;

    lVar2 = FUN_1406499e0();
    if (lVar2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar3 = (float)FUN_140464600(lVar2,0);
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)(fVar3 * 100.0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064e950(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    float fVar3;

    lVar2 = FUN_1406499e0();
    if (lVar2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar3 = (float)FUN_140464750(lVar2,1);
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)(fVar3 * 100.0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064e9c0(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    float fVar3;

    lVar2 = FUN_1406499e0();
    if (lVar2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar3 = (float)FUN_140464750(lVar2,0);
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)(fVar3 * 100.0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064ea30(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    float fVar3;

    lVar2 = FUN_1406499e0();
    if (lVar2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar3 = (float)FUN_140464930(lVar2,1);
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)((1.0 - fVar3) * 100.0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064eab0(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    float fVar3;

    lVar2 = FUN_1406499e0();
    if (lVar2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar3 = (float)FUN_140464930(lVar2,0);
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)((1.0 - fVar3) * 100.0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064eb20(longlong param_1)

{
    uint uVar1;
    uint *puVar2;
    longlong lVar3;

    lVar3 = FUN_1406499e0();
    puVar2 = *(uint **)(param_1 + 0x10);
    if (lVar3 == 0) {
        puVar2[2] = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar1 = *(uint *)(lVar3 + 0x38);
    puVar2[2] = 1;
    *puVar2 = (uint)(0x31 < uVar1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064eb70(longlong param_1)

{
    float fVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1406499e0();
    pdVar2 = *(double **)(param_1 + 0x10);
    if (lVar3 == 0) {
        *(undefined4 *)(pdVar2 + 1) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar1 = *(float *)(lVar3 + 0xa8c);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)fVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064ebd0(longlong param_1)

{
    float fVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1406499e0();
    pdVar2 = *(double **)(param_1 + 0x10);
    if (lVar3 == 0) {
        *(undefined4 *)(pdVar2 + 1) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar1 = *(float *)(lVar3 + 0xb2c);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)fVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined4 FUN_14064ec30(longlong param_1)

{
    double *pdVar1;
    undefined4 uVar2;
    uint uVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong lVar8;
    ulonglong uVar9;
    undefined8 *puVar10;
    float fVar11;
    undefined local_38 [8];
    longlong local_30;

    lVar4 = FUN_1406499e0();
    if (lVar4 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0);
    *(undefined4 *)(puVar10 + 1) = 5;
    *puVar10 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(param_1);
    fVar11 = (float)FUN_140465160(lVar4);
    fVar11 = fVar11 * 100.0;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar7 = FUN_14018f0e0(local_38,L"nAmount");
    if (*(longlong *)(lVar7 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar8 = -1;
        do {
            lVar8 = lVar8 + 1;
        } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar8) != '\0');
        FUN_140058710(param_1);
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)fVar11;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    uVar3 = FUN_140465330(lVar4);
    uVar9 = (ulonglong)uVar3;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1,puVar10,L"eDRState",uVar9 & 0xffffffff);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1);
    return 1;
}



undefined4 FUN_14064ee20(longlong param_1)

{
    double *pdVar1;
    undefined4 uVar2;
    uint uVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong lVar8;
    ulonglong uVar9;
    undefined8 *puVar10;
    float fVar11;
    undefined local_38 [8];
    longlong local_30;

    lVar4 = FUN_1406499e0();
    if (lVar4 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0);
    *(undefined4 *)(puVar10 + 1) = 5;
    *puVar10 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(param_1);
    fVar11 = (float)FUN_140465500(lVar4);
    fVar11 = fVar11 * 100.0;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar7 = FUN_14018f0e0(local_38,L"nAmount");
    if (*(longlong *)(lVar7 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar8 = -1;
        do {
            lVar8 = lVar8 + 1;
        } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar8) != '\0');
        FUN_140058710(param_1);
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)fVar11;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    uVar3 = FUN_1404656d0(lVar4);
    uVar9 = (ulonglong)uVar3;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1,puVar10,L"eDRState",uVar9 & 0xffffffff);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1);
    return 1;
}



undefined4 FUN_14064f010(longlong param_1)

{
    double *pdVar1;
    undefined4 uVar2;
    uint uVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong lVar8;
    ulonglong uVar9;
    undefined8 *puVar10;
    float fVar11;
    undefined local_38 [8];
    longlong local_30;

    lVar4 = FUN_1406499e0();
    if (lVar4 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0);
    *(undefined4 *)(puVar10 + 1) = 5;
    *puVar10 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(param_1);
    fVar11 = (float)FUN_1404658a0(lVar4);
    fVar11 = fVar11 * 100.0;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar7 = FUN_14018f0e0(local_38,L"nAmount");
    if (*(longlong *)(lVar7 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar8 = -1;
        do {
            lVar8 = lVar8 + 1;
        } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar8) != '\0');
        FUN_140058710(param_1);
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)fVar11;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    uVar3 = FUN_140465a70(lVar4);
    uVar9 = (ulonglong)uVar3;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1,puVar10,L"eDRState",uVar9 & 0xffffffff);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1);
    return 1;
}



undefined4 FUN_14064f200(longlong param_1)

{
    double *pdVar1;
    undefined4 uVar2;
    uint uVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong lVar8;
    ulonglong uVar9;
    undefined8 *puVar10;
    float fVar11;
    undefined local_38 [8];
    longlong local_30;

    lVar4 = FUN_1406499e0();
    if (lVar4 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0);
    *(undefined4 *)(puVar10 + 1) = 5;
    *puVar10 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(param_1);
    fVar11 = (float)FUN_140465c40(lVar4);
    fVar11 = fVar11 * 100.0;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar7 = FUN_14018f0e0(local_38,L"nAmount");
    if (*(longlong *)(lVar7 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar8 = -1;
        do {
            lVar8 = lVar8 + 1;
        } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar8) != '\0');
        FUN_140058710(param_1);
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)fVar11;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    uVar3 = FUN_140465e20(lVar4);
    uVar9 = (ulonglong)uVar3;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1,puVar10,L"eDRState",uVar9 & 0xffffffff);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1);
    return 1;
}



undefined8 FUN_14064f3f0(longlong param_1)

{
    float fVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1406499e0();
    pdVar2 = *(double **)(param_1 + 0x10);
    if (lVar3 == 0) {
        *(undefined4 *)(pdVar2 + 1) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar1 = *(float *)(lVar3 + 0xa0c);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)fVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064f450(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    float fVar3;
    float fVar4;

    lVar2 = FUN_1406499e0();
    if (lVar2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar4 = *(float *)(lVar2 + 0xa0c);
    fVar3 = (float)FUN_140465c40(lVar2);
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)((fVar3 - fVar4) * 100.0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064f4d0(longlong param_1)

{
    float fVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1406499e0();
    pdVar2 = *(double **)(param_1 + 0x10);
    if (lVar3 == 0) {
        *(undefined4 *)(pdVar2 + 1) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar1 = *(float *)(lVar3 + 0xa04);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)((1.0 - fVar1) * 100.0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064f540(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    float fVar3;

    lVar2 = FUN_1406499e0();
    if (lVar2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar3 = (float)FUN_140462a90(lVar2);
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)(fVar3 * 100.0 - 100.0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064f5b0(longlong param_1)

{
    float fVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1406499e0();
    pdVar2 = *(double **)(param_1 + 0x10);
    if (lVar3 == 0) {
        *(undefined4 *)(pdVar2 + 1) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar1 = *(float *)(lVar3 + 0x99c);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)fVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064f610(longlong param_1)

{
    float fVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1406499e0();
    pdVar2 = *(double **)(param_1 + 0x10);
    if (lVar3 == 0) {
        *(undefined4 *)(pdVar2 + 1) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar1 = *(float *)(lVar3 + 0xb44);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)(fVar1 * 100.0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064f670(longlong param_1)

{
    float fVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1406499e0();
    pdVar2 = *(double **)(param_1 + 0x10);
    if (lVar3 == 0) {
        *(undefined4 *)(pdVar2 + 1) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar1 = *(float *)(lVar3 + 0xb54);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)(fVar1 * 0.001);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064f6d0(longlong param_1)

{
    float fVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1406499e0();
    pdVar2 = *(double **)(param_1 + 0x10);
    if (lVar3 == 0) {
        *(undefined4 *)(pdVar2 + 1) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar1 = *(float *)(lVar3 + 0xb4c);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)(fVar1 * 0.001);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064f730(longlong param_1)

{
    float fVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1406499e0();
    pdVar2 = *(double **)(param_1 + 0x10);
    if (lVar3 == 0) {
        *(undefined4 *)(pdVar2 + 1) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar1 = *(float *)(lVar3 + 0xb3c);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)(fVar1 * 100.0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064f980(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    float fVar3;
    float fVar4;

    lVar2 = FUN_1406499e0();
    if (lVar2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    fVar4 = *(float *)(lVar2 + 0xaec);
    fVar3 = (float)FUN_140466000(lVar2);
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)((fVar3 - fVar4) * 100.0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064fa00(longlong param_1)

{
    double *pdVar1;
    int iVar2;
    undefined4 *puVar3;
    longlong *plVar4;

    puVar3 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar3 != (undefined4 *)0x0) {
        plVar4 = (longlong *)FUN_1403d90d0(DAT_140c65898,*puVar3);
        if ((plVar4 != (longlong *)0x0) && ((*(byte *)(plVar4 + 5) & 1) == 0)) {
            if (*(int *)(plVar4 + 0x10) == 0x1e) {
                if (*(int *)(plVar4 + 0x37) == 3) {
                    LAB_14064fa65:
                    iVar2 = (**(code **)(*plVar4 + 0x70))(plVar4);
                    pdVar1 = *(double **)(param_1 + 0x10);
                    *(undefined4 *)(pdVar1 + 1) = 3;
                    *pdVar1 = (double)iVar2;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    return 1;
                }
            }
            else if (*(int *)(plVar4 + 0x10) != 0x17) goto LAB_14064fa65;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064faa0(longlong param_1)

{
    double *pdVar1;
    int iVar2;
    undefined4 *puVar3;
    longlong *plVar4;

    puVar3 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar3 != (undefined4 *)0x0) {
        plVar4 = (longlong *)FUN_1403d90d0(DAT_140c65898,*puVar3);
        if ((plVar4 != (longlong *)0x0) && ((*(byte *)(plVar4 + 5) & 1) == 0)) {
            if (*(int *)(plVar4 + 0x10) == 0x1e) {
                if (*(int *)(plVar4 + 0x37) == 3) {
                    LAB_14064fb05:
                    iVar2 = (**(code **)(*plVar4 + 0x78))(plVar4);
                    pdVar1 = *(double **)(param_1 + 0x10);
                    *(undefined4 *)(pdVar1 + 1) = 3;
                    *pdVar1 = (double)iVar2;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    return 1;
                }
            }
            else if (*(int *)(plVar4 + 0x10) != 0x17) goto LAB_14064fb05;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064fb40(longlong param_1)

{
    double *pdVar1;
    int iVar2;
    undefined4 *puVar3;
    longlong *plVar4;

    puVar3 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar3 != (undefined4 *)0x0) {
        plVar4 = (longlong *)FUN_1403d90d0(DAT_140c65898,*puVar3);
        if ((plVar4 != (longlong *)0x0) && ((*(byte *)(plVar4 + 5) & 1) == 0)) {
            if (*(int *)(plVar4 + 0x10) == 0x1e) {
                if (*(int *)(plVar4 + 0x37) == 3) {
                    LAB_14064fba5:
                    iVar2 = (**(code **)(*plVar4 + 0x88))(plVar4);
                    pdVar1 = *(double **)(param_1 + 0x10);
                    *(undefined4 *)(pdVar1 + 1) = 3;
                    *pdVar1 = (double)iVar2;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    return 1;
                }
            }
            else if (*(int *)(plVar4 + 0x10) != 0x17) goto LAB_14064fba5;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064fbe0(longlong param_1)

{
    double *pdVar1;
    int iVar2;
    undefined4 *puVar3;
    longlong *plVar4;

    puVar3 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar3 != (undefined4 *)0x0) {
        plVar4 = (longlong *)FUN_1403d90d0(DAT_140c65898,*puVar3);
        if ((plVar4 != (longlong *)0x0) && ((*(byte *)(plVar4 + 5) & 1) == 0)) {
            if (*(int *)(plVar4 + 0x10) == 0x1e) {
                if (*(int *)(plVar4 + 0x37) == 3) {
                    LAB_14064fc45:
                    iVar2 = (**(code **)(*plVar4 + 0x90))(plVar4);
                    pdVar1 = *(double **)(param_1 + 0x10);
                    *(undefined4 *)(pdVar1 + 1) = 3;
                    *pdVar1 = (double)iVar2;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    return 1;
                }
            }
            else if (*(int *)(plVar4 + 0x10) != 0x17) goto LAB_14064fc45;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064fc80(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    undefined4 *puVar3;
    longlong lVar4;

    puVar3 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar3 != (undefined4 *)0x0) {
        lVar4 = FUN_1403d90d0(DAT_140c65898,*puVar3);
        if ((lVar4 != 0) && ((*(byte *)(lVar4 + 0x28) & 1) == 0)) {
            if (*(int *)(lVar4 + 0x80) == 0x1e) {
                if (*(int *)(lVar4 + 0x1b8) == 3) {
                    LAB_14064fce5:
                    iVar1 = *(int *)(lVar4 + 0x50);
                    pdVar2 = *(double **)(param_1 + 0x10);
                    *(undefined4 *)(pdVar2 + 1) = 3;
                    *pdVar2 = (double)iVar1;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    return 1;
                }
            }
            else if (*(int *)(lVar4 + 0x80) != 0x17) goto LAB_14064fce5;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064fd10(longlong param_1)

{
    float fVar1;
    double *pdVar2;
    undefined4 *puVar3;
    longlong lVar4;

    puVar3 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar3 != (undefined4 *)0x0) {
        lVar4 = FUN_1403d90d0(DAT_140c65898,*puVar3);
        if ((lVar4 != 0) && ((*(byte *)(lVar4 + 0x28) & 1) == 0)) {
            if (*(int *)(lVar4 + 0x80) == 0x1e) {
                if (*(int *)(lVar4 + 0x1b8) == 3) {
                    LAB_14064fd75:
                    fVar1 = *(float *)(lVar4 + 0xcbc);
                    pdVar2 = *(double **)(param_1 + 0x10);
                    *(undefined4 *)(pdVar2 + 1) = 3;
                    *pdVar2 = (double)(int)(longlong)fVar1;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    return 1;
                }
            }
            else if (*(int *)(lVar4 + 0x80) != 0x17) goto LAB_14064fd75;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064fdb0(longlong param_1)

{
    double *pdVar1;
    undefined4 *puVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined4 uVar5;
    uint uVar6;
    int iVar7;
    undefined8 uVar8;
    longlong lVar9;
    float fVar10;
    double extraout_XMM0_Qa;
    double dVar11;

    puVar2 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar2 != (undefined4 *)0x0) {
        uVar8 = DAT_140c65898;
        lVar3 = FUN_1403d90d0(DAT_140c65898,*puVar2);
        uVar5 = (undefined4)uVar8;
        if (lVar3 != 0) {
            puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
            if (((puVar4 < *(undefined8 **)(param_1 + 0x10)) &&
                 (uVar5 = 0x40a12138, puVar4 != &DAT_140a12138)) &&
                (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
                lVar9 = param_1;
                FUN_140056c40(param_1,2);
                uVar5 = (undefined4)lVar9;
                dVar11 = extraout_XMM0_Qa;
            }
            else {
                dVar11 = -1.0;
            }
            lVar9 = (longlong)dVar11;
            if ((lVar9 != -0x8000000000000000) && ((double)lVar9 != dVar11)) {
                uVar6 = movmskpd(uVar5,CONCAT88(dVar11,dVar11));
                dVar11 = (double)(lVar9 - (ulonglong)(uVar6 & 1));
            }
            iVar7 = (int)dVar11;
            if (iVar7 < 0) {
                puVar4 = *(undefined8 **)(param_1 + 0x10);
                *puVar4 = 0;
                *(undefined4 *)(puVar4 + 1) = 3;
            }
            else {
                if (iVar7 < 0xb) {
                    fVar10 = *(float *)(lVar3 + 0x21c + (longlong)iVar7 * 4);
                }
                else {
                    fVar10 = 0.0;
                }
                pdVar1 = *(double **)(param_1 + 0x10);
                *(undefined4 *)(pdVar1 + 1) = 3;
                *pdVar1 = (double)(int)fVar10;
            }
            goto LAB_14064feb7;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    LAB_14064feb7:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14064fed0(longlong param_1)

{
    longlong *plVar1;
    double *pdVar2;
    undefined4 *puVar3;
    longlong lVar4;
    undefined8 *puVar5;
    uint uVar6;
    ulonglong uVar7;
    float fVar8;
    double dVar9;
    double dVar10;

    puVar3 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar3 != (undefined4 *)0x0) {
        lVar4 = FUN_1403d90d0(DAT_140c65898,*puVar3);
        if (lVar4 != 0) {
            if ((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
                (*(int *)(lVar4 + 8) == *(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 8))) {
                puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
                if ((puVar5 < *(undefined8 **)(param_1 + 0x10)) &&
                    ((puVar5 != &DAT_140a12138 && (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))))) {
                    dVar9 = (double)FUN_140056c40(param_1,2);
                }
                else {
                    dVar9 = -1.0;
                }
                plVar1 = *(longlong **)(DAT_140c65898 + 0x6d90);
                if (plVar1 != (longlong *)0x0) {
                    lVar4 = (longlong)dVar9;
                    dVar10 = 0.0;
                    uVar7 = DAT_140c65898;
                    if ((lVar4 != -0x8000000000000000) && (dVar10 = (double)lVar4, dVar10 != dVar9)) {
                        uVar6 = movmskpd((int)DAT_140c65898,
                                         CONCAT412((int)((ulonglong)dVar9 >> 0x20),
                                                   CONCAT48(SUB84(dVar9,0),dVar9)));
                        uVar7 = (ulonglong)(uVar6 & 1);
                        dVar9 = (double)(lVar4 - uVar7);
                    }
                    fVar8 = (float)(**(code **)(*plVar1 + 0x40))
                            (SUB84(dVar9,0),dVar10,plVar1,
                             uVar7 & 0xffffffff00000000 | (ulonglong)(uint)(int)dVar9);
                    pdVar2 = *(double **)(param_1 + 0x10);
                    *(undefined4 *)(pdVar2 + 1) = 3;
                    *pdVar2 = (double)fVar8;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    return 1;
                }
            }
            puVar5 = *(undefined8 **)(param_1 + 0x10);
            *puVar5 = 0;
            *(undefined4 *)(puVar5 + 1) = 3;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140650190(longlong param_1)

{
    longlong *plVar1;
    uint uVar2;
    undefined4 *puVar3;
    longlong lVar4;
    undefined8 *puVar5;
    undefined8 uVar6;
    ulonglong uVar7;
    longlong lVar8;
    double dVar9;
    double dVar10;
    undefined local_28 [8];
    longlong local_20;

    puVar3 = (undefined4 *)FUN_1406622c0(param_1,1);
    if ((((puVar3 != (undefined4 *)0x0) && (lVar4 = FUN_1403d90d0(DAT_140c65898,*puVar3), lVar4 != 0))
         && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) &&
        (*(int *)(lVar4 + 8) == *(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 8))) {
        puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        if (((puVar5 < *(undefined8 **)(param_1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
            (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
            dVar9 = (double)FUN_140056c40(param_1,2);
        }
        else {
            dVar9 = -1.0;
        }
        plVar1 = *(longlong **)(DAT_140c65898 + 0x6d90);
        if (plVar1 != (longlong *)0x0) {
            uVar7 = (ulonglong)dVar9;
            dVar10 = 0.0;
            if ((uVar7 != 0x8000000000000000) && (dVar10 = (double)uVar7, dVar10 != dVar9)) {
                uVar2 = movmskpd(0,CONCAT412((int)((ulonglong)dVar9 >> 0x20),CONCAT48(SUB84(dVar9,0),dVar9))
                );
                uVar7 = uVar7 - (uVar2 & 1);
                dVar9 = (double)uVar7;
            }
            uVar6 = (**(code **)(*plVar1 + 0x58))
                    (SUB84(dVar9,0),dVar10,plVar1,
                     uVar7 & 0xffffffff00000000 | (ulonglong)(uint)(int)dVar9);
            lVar4 = FUN_14018f0e0(local_28,uVar6);
            if (*(longlong *)(lVar4 + 8) == 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            }
            else {
                lVar8 = -1;
                do {
                    lVar8 = lVar8 + 1;
                } while (*(char *)(*(longlong *)(lVar4 + 8) + lVar8) != '\0');
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



undefined8 FUN_140650300(longlong param_1)

{
    longlong *plVar1;
    uint uVar2;
    undefined4 *puVar3;
    longlong lVar4;
    undefined8 *puVar5;
    longlong lVar6;
    double *pdVar7;
    float fVar8;
    double dVar9;

    puVar3 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar3 != (undefined4 *)0x0) {
        lVar4 = FUN_1403d90d0(DAT_140c65898,*puVar3);
        if (lVar4 != 0) {
            puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
            if (((puVar5 < *(undefined8 **)(param_1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
                (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
                dVar9 = (double)FUN_140056c40(param_1,2);
            }
            else {
                dVar9 = -1.0;
            }
            lVar6 = (longlong)dVar9;
            if ((lVar6 != -0x8000000000000000) && ((double)lVar6 != dVar9)) {
                uVar2 = movmskpd(0,CONCAT412((int)((ulonglong)dVar9 >> 0x20),CONCAT48(SUB84(dVar9,0),dVar9))
                );
                dVar9 = (double)(lVar6 - (ulonglong)(uVar2 & 1));
            }
            uVar2 = (uint)dVar9;
            if (uVar2 < 0xb) {
                if ((*(longlong *)(DAT_140c65898 + 0x78) == 0) ||
                    (*(int *)(lVar4 + 8) != *(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 8))) {
                    pdVar7 = *(double **)(param_1 + 0x10);
                    fVar8 = (float)FUN_140466360(lVar4,uVar2);
                    *(undefined4 *)(pdVar7 + 1) = 3;
                    *pdVar7 = (double)(int)fVar8;
                }
                else {
                    plVar1 = *(longlong **)(DAT_140c65898 + 0x6d90);
                    if (plVar1 == (longlong *)0x0) {
                        puVar5 = *(undefined8 **)(param_1 + 0x10);
                        *puVar5 = 0;
                        *(undefined4 *)(puVar5 + 1) = 3;
                    }
                    else {
                        fVar8 = (float)(**(code **)(*plVar1 + 0x38))(plVar1,uVar2);
                        pdVar7 = *(double **)(param_1 + 0x10);
                        *(undefined4 *)(pdVar7 + 1) = 3;
                        *pdVar7 = (double)(int)fVar8;
                    }
                }
            }
            else {
                puVar5 = *(undefined8 **)(param_1 + 0x10);
                *puVar5 = 0;
                *(undefined4 *)(puVar5 + 1) = 3;
            }
            goto LAB_14065046a;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    LAB_14065046a:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 * FUN_140651400(undefined8 *param_1,longlong param_2,longlong param_3,uint *param_4)

{
    undefined8 *puVar1;
    double *pdVar2;
    int iVar3;
    undefined4 uVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong lVar8;
    longlong lVar9;
    longlong lVar10;
    ulonglong uVar11;
    float fVar12;
    float fVar13;
    undefined **local_78;
    undefined4 local_70;
    longlong local_68;
    undefined4 local_60;
    undefined local_58 [8];
    longlong local_50;

    local_60 = 1;
    local_70 = 0xfffffffe;
    local_78 = &PTR_FUN_140b569f0;
    local_68 = param_2;
    if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_2);
    }
    puVar1 = *(undefined8 **)(param_2 + 0x10);
    uVar5 = FUN_14005c1b0(param_2,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar5;
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
    local_70 = FUN_1400578c0(param_2);
    if (param_4 == (uint *)0x0) {
        *param_1 = &PTR_FUN_140b569f0;
        param_1[2] = local_68;
        *(undefined4 *)(param_1 + 3) = 1;
        *(undefined4 *)(param_1 + 1) = 0xfffffffe;
        iVar3 = (*(code *)local_78[1])(&local_78);
        if (iVar3 != 0) {
            *(undefined4 *)(param_1 + 3) = local_60;
            lVar8 = local_68;
            puVar6 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_68 + 0x20) + 0xa0),local_70);
            puVar1 = *(undefined8 **)(lVar8 + 0x10);
            *puVar1 = *puVar6;
            *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar6 + 1);
            *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
            uVar4 = FUN_1400578c0(param_1[2]);
            *(undefined4 *)(param_1 + 1) = uVar4;
        }
    }
    else if ((param_4[9] & 4) == 0) {
        FUN_1400fa770(param_1,&local_78);
    }
    else if ((param_4[9] & 8) == 0) {
        uVar11 = (ulonglong)*param_4;
        lVar8 = local_68;
        puVar6 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_68 + 0x20) + 0xa0),local_70);
        puVar1 = *(undefined8 **)(lVar8 + 0x10);
        *puVar1 = *puVar6;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
        FUN_1400f06f0(local_68,puVar1,L"idProperty",uVar11 & 0xffffffff);
        fVar13 = 0.0;
        *(longlong *)(local_68 + 0x10) = *(longlong *)(local_68 + 0x10) + -0x10;
        if (*param_4 < 0xc5) {
            fVar12 = *(float *)(param_3 + 0x5c4 + (longlong)(int)*param_4 * 8);
        }
        else {
            fVar12 = 0.0;
        }
        lVar7 = local_68;
        puVar6 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_68 + 0x20) + 0xa0),local_70);
        lVar8 = local_68;
        puVar1 = *(undefined8 **)(lVar7 + 0x10);
        *puVar1 = *puVar6;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
        lVar7 = FUN_14018f0e0(local_58,L"fValue");
        lVar9 = -1;
        if (*(longlong *)(lVar7 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar8 + 0x10) + 8) = 0;
            *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
        }
        else {
            lVar10 = -1;
            do {
                lVar10 = lVar10 + 1;
            } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar10) != '\0');
            FUN_140058710(lVar8);
        }
        if (local_50 != 0) {
            FUN_14018b900(local_50,0);
        }
        pdVar2 = *(double **)(lVar8 + 0x10);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)fVar12;
        *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
        uVar5 = FUN_1400580e0(lVar8,0xfffffffd);
        FUN_14005ea50(lVar8,uVar5,*(longlong *)(lVar8 + 0x10) + -0x20,
                      *(longlong *)(lVar8 + 0x10) + -0x10);
        *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + -0x20;
        *(longlong *)(local_68 + 0x10) = *(longlong *)(local_68 + 0x10) + -0x10;
        if (*param_4 < 0xc5) {
            fVar13 = *(float *)(param_3 + 0x5c0 + (longlong)(int)*param_4 * 8);
        }
        lVar8 = local_68;
        puVar6 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_68 + 0x20) + 0xa0),local_70);
        lVar7 = local_68;
        puVar1 = *(undefined8 **)(lVar8 + 0x10);
        *puVar1 = *puVar6;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
        lVar8 = FUN_14018f0e0(local_58,L"fBase");
        lVar8 = *(longlong *)(lVar8 + 8);
        if (lVar8 == 0) {
            *(undefined4 *)(*(longlong *)(lVar7 + 0x10) + 8) = 0;
            *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
        }
        else {
            do {
                lVar9 = lVar9 + 1;
            } while (*(char *)(lVar8 + lVar9) != '\0');
            FUN_140058710(lVar7,lVar8,lVar9);
        }
        if (local_50 != 0) {
            FUN_14018b900(local_50,0);
        }
        pdVar2 = *(double **)(lVar7 + 0x10);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)fVar13;
        *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
        uVar5 = FUN_1400580e0(lVar7,0xfffffffd);
        FUN_14005ea50(lVar7,uVar5,*(longlong *)(lVar7 + 0x10) + -0x20,
                      *(longlong *)(lVar7 + 0x10) + -0x10);
        *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + -0x20;
        *(longlong *)(local_68 + 0x10) = *(longlong *)(local_68 + 0x10) + -0x10;
        uVar5 = FUN_14034bdd0();
        lVar8 = local_68;
        puVar6 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_68 + 0x20) + 0xa0),local_70);
        puVar1 = *(undefined8 **)(lVar8 + 0x10);
        *puVar1 = *puVar6;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
        FUN_1400f0870(local_68,puVar1,L"strDisplayName",uVar5);
        *(longlong *)(local_68 + 0x10) = *(longlong *)(local_68 + 0x10) + -0x10;
        uVar11 = (ulonglong)param_4[10];
        lVar8 = local_68;
        puVar6 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_68 + 0x20) + 0xa0),local_70);
        puVar1 = *(undefined8 **)(lVar8 + 0x10);
        *puVar1 = *puVar6;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
        FUN_1400f06f0(local_68,puVar1,L"nTooltipDisplayOrder",uVar11 & 0xffffffff);
        *(longlong *)(local_68 + 0x10) = *(longlong *)(local_68 + 0x10) + -0x10;
        FUN_1400fa770(param_1,&local_78);
    }
    else {
        FUN_1400fa770(param_1,&local_78);
    }
    local_78 = &PTR_FUN_140b56a08;
    if (local_68 != 0) {
        FUN_1400579e0();
    }
    return param_1;
}



undefined8 FUN_140651850(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 uVar2;
    longlong lVar3;
    longlong lVar4;
    undefined8 *puVar5;
    undefined local_28 [8];
    undefined4 local_20;
    longlong local_18;

    lVar3 = FUN_1406499e0();
    if ((lVar3 != 0) && ((*(int *)(lVar3 + 0x80) == 0x14 || (*(int *)(lVar3 + 0x80) == 0x17)))) {
        FUN_140056d60(param_1,2);
        lVar4 = FUN_1402479c0();
        if ((lVar4 != 0) &&
            (((*(uint *)(lVar4 + 0x24) & 0x20) != 0 ||
              (((*(int *)(lVar3 + 0x80) == 0x14 || (*(int *)(lVar3 + 0x80) == 0x17)) &&
                ((*(uint *)(lVar4 + 0x24) & 0x40) != 0)))))) {
            FUN_140651400(local_28,param_1,lVar3,lVar4);
            puVar5 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_18 + 0x20) + 0xa0),local_20);
            puVar1 = *(undefined8 **)(local_18 + 0x10);
            uVar2 = *puVar5;
            *puVar1 = uVar2;
            *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar5 + 1);
            *(longlong *)(local_18 + 0x10) = *(longlong *)(local_18 + 0x10) + 0x10;
            FUN_1400579e0(local_18,uVar2,local_20);
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140651bd0(longlong param_1)

{
    undefined4 *puVar1;
    longlong lVar2;
    undefined2 *puVar3;
    longlong lVar4;
    undefined local_28 [8];
    longlong local_20;

    puVar1 = (undefined4 *)FUN_1406622c0(param_1,1);
    if ((puVar1 == (undefined4 *)0x0) || (lVar2 = FUN_1403d90d0(DAT_140c65898,*puVar1), lVar2 == 0)) {
        lVar2 = FUN_14018f0e0(local_28,&DAT_1409f43d4);
        if (*(longlong *)(lVar2 + 8) == 0) goto LAB_140651c4a;
        lVar4 = -1;
        do {
            lVar4 = lVar4 + 1;
        } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar4) != '\0');
    }
    else {
        puVar3 = &DAT_140b7b704;
        if (*(undefined2 **)(lVar2 + 0x10) != (undefined2 *)0x0) {
            puVar3 = *(undefined2 **)(lVar2 + 0x10);
        }
        lVar2 = FUN_14018f0e0(local_28,puVar3);
        if (*(longlong *)(lVar2 + 8) == 0) {
            LAB_140651c4a:
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            goto LAB_140651c72;
        }
        lVar4 = -1;
        do {
            lVar4 = lVar4 + 1;
        } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar4) != '\0');
    }
    FUN_140058710(param_1);
    LAB_140651c72:
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
}



undefined8 FUN_140652020(longlong param_1)

{
    double *pdVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    undefined4 uVar5;
    undefined4 *puVar6;
    longlong lVar7;
    undefined8 uVar8;
    undefined8 *puVar9;
    longlong lVar10;
    longlong lVar11;
    undefined8 *puVar12;
    undefined local_28 [8];
    longlong local_20;

    puVar6 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar6 != (undefined4 *)0x0) {
        lVar7 = FUN_1403d90d0(DAT_140c65898,*puVar6);
        if (lVar7 != 0) {
            fVar2 = *(float *)(lVar7 + 0x1140);
            fVar3 = *(float *)(lVar7 + 0x1144);
            fVar4 = *(float *)(lVar7 + 0x1148);
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar12 = *(undefined8 **)(param_1 + 0x10);
            uVar8 = FUN_14005c1b0(param_1,0,0);
            *(undefined4 *)(puVar12 + 1) = 5;
            *puVar12 = uVar8;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            uVar5 = FUN_1400578c0(param_1);
            puVar9 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar5);
            puVar12 = *(undefined8 **)(param_1 + 0x10);
            *puVar12 = *puVar9;
            *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar9 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            lVar7 = FUN_14018f0e0(local_28,&DAT_1409f434c);
            lVar10 = -1;
            if (*(longlong *)(lVar7 + 8) == 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            }
            else {
                lVar11 = -1;
                do {
                    lVar11 = lVar11 + 1;
                } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar11) != '\0');
                FUN_140058710(param_1);
            }
            if (local_20 != 0) {
                FUN_14018b900(local_20,0);
            }
            pdVar1 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar1 + 1) = 3;
            *pdVar1 = (double)fVar2;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            uVar8 = FUN_1400580e0(param_1,0xfffffffd);
            FUN_14005ea50(param_1,uVar8,*(longlong *)(param_1 + 0x10) + -0x20,
                          *(longlong *)(param_1 + 0x10) + -0x10);
            *(longlong *)(param_1 + 0x10) =
                    (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
            puVar12 = *(undefined8 **)(param_1 + 0x10);
            puVar9 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar5);
            *puVar12 = *puVar9;
            *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar9 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            lVar7 = FUN_14018f0e0(local_28,&DAT_1409f4534);
            if (*(longlong *)(lVar7 + 8) == 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            }
            else {
                lVar11 = -1;
                do {
                    lVar11 = lVar11 + 1;
                } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar11) != '\0');
                FUN_140058710(param_1);
            }
            if (local_20 != 0) {
                FUN_14018b900(local_20,0);
            }
            pdVar1 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar1 + 1) = 3;
            *pdVar1 = (double)fVar3;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            uVar8 = FUN_1400580e0(param_1,0xfffffffd);
            FUN_14005ea50(param_1,uVar8,*(longlong *)(param_1 + 0x10) + -0x20,
                          *(longlong *)(param_1 + 0x10) + -0x10);
            *(longlong *)(param_1 + 0x10) =
                    (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
            puVar12 = *(undefined8 **)(param_1 + 0x10);
            puVar9 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar5);
            *puVar12 = *puVar9;
            *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar9 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            lVar7 = FUN_14018f0e0(local_28,&DAT_1409f455c);
            lVar7 = *(longlong *)(lVar7 + 8);
            if (lVar7 == 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            }
            else {
                do {
                    lVar10 = lVar10 + 1;
                } while (*(char *)(lVar7 + lVar10) != '\0');
                FUN_140058710(param_1,lVar7,lVar10);
            }
            if (local_20 != 0) {
                FUN_14018b900(local_20,0);
            }
            pdVar1 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar1 + 1) = 3;
            *pdVar1 = (double)fVar4;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            uVar8 = FUN_1400580e0(param_1,0xfffffffd);
            FUN_14005ea50(param_1,uVar8,*(longlong *)(param_1 + 0x10) + -0x20,
                          *(longlong *)(param_1 + 0x10) + -0x10);
            *(longlong *)(param_1 + 0x10) =
                    (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
            puVar12 = *(undefined8 **)(param_1 + 0x10);
            puVar9 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar5);
            *puVar12 = *puVar9;
            *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar9 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_1400579e0(param_1);
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140652350(longlong param_1)

{
    float fVar1;
    double *pdVar2;
    undefined4 *puVar3;
    longlong lVar4;

    puVar3 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar3 != (undefined4 *)0x0) {
        lVar4 = FUN_1403d90d0(DAT_140c65898,*puVar3);
        if (lVar4 != 0) {
            fVar1 = *(float *)(lVar4 + 0x12c0);
            pdVar2 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)fVar1;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140652910(longlong param_1)

{
    undefined4 *puVar1;
    longlong lVar2;
    longlong lVar3;
    undefined local_28 [8];
    longlong local_20;

    puVar1 = (undefined4 *)FUN_1406622c0(param_1,1);
    if ((puVar1 == (undefined4 *)0x0) || (lVar2 = FUN_1403d90d0(DAT_140c65898,*puVar1), lVar2 == 0)) {
        lVar2 = FUN_14018f0e0(local_28,&DAT_1409f446c);
        if (*(longlong *)(lVar2 + 8) == 0) goto LAB_14065298b;
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar3) != '\0');
    }
    else {
        lVar3 = *(longlong *)(lVar2 + 0x90);
        if (lVar3 == 0) {
            lVar3 = *(longlong *)(lVar2 + 0xb0);
        }
        lVar2 = FUN_14018f0e0(local_28,lVar3);
        if (*(longlong *)(lVar2 + 8) == 0) {
            LAB_14065298b:
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            goto LAB_1406529b3;
        }
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar3) != '\0');
    }
    FUN_140058710(param_1);
    LAB_1406529b3:
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
}



undefined8 FUN_1406529d0(longlong param_1)

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
            iVar1 = *(int *)(lVar4 + 0x168);
            puVar2[2] = 1;
            *puVar2 = (uint)(iVar1 != 0);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar3 = *(undefined4 **)(param_1 + 0x10);
    *puVar3 = 0;
    puVar3[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140652b00(longlong param_1)

{
    undefined4 *puVar1;
    longlong lVar2;
    undefined2 *puVar3;
    longlong lVar4;
    undefined local_28 [8];
    longlong local_20;

    puVar1 = (undefined4 *)FUN_1406622c0(param_1,1);
    if ((puVar1 == (undefined4 *)0x0) || (lVar2 = FUN_1403d90d0(DAT_140c65898,*puVar1), lVar2 == 0)) {
        lVar2 = FUN_14018f0e0(local_28,&DAT_1409f4434);
        if (*(longlong *)(lVar2 + 8) == 0) goto LAB_140652ba8;
        lVar4 = -1;
        do {
            lVar4 = lVar4 + 1;
        } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar4) != '\0');
    }
    else if (*(int *)(lVar2 + 0x168) == 0) {
        puVar3 = &DAT_140b7b704;
        if (*(undefined2 **)(lVar2 + 0x10) != (undefined2 *)0x0) {
            puVar3 = *(undefined2 **)(lVar2 + 0x10);
        }
        lVar2 = FUN_14018f0e0(local_28,puVar3);
        if (*(longlong *)(lVar2 + 8) == 0) {
            LAB_140652ba8:
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            goto LAB_140652bd2;
        }
        lVar4 = -1;
        do {
            lVar4 = lVar4 + 1;
        } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar4) != '\0');
    }
    else {
        lVar2 = FUN_14018f0e0(local_28,*(undefined8 *)(lVar2 + 0x178));
        if (*(longlong *)(lVar2 + 8) == 0) goto LAB_140652ba8;
        lVar4 = -1;
        do {
            lVar4 = lVar4 + 1;
        } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar4) != '\0');
    }
    FUN_140058710(param_1);
    LAB_140652bd2:
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
}



undefined8 FUN_140652bf0(longlong param_1)

{
    undefined4 *puVar1;
    longlong lVar2;

    puVar1 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar1 != (undefined4 *)0x0) {
        lVar2 = FUN_1403d90d0(DAT_140c65898,*puVar1);
        if (lVar2 != 0) {
            FUN_140649870(param_1,*(undefined4 *)(lVar2 + 0x108));
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140652c50(longlong param_1)

{
    undefined4 *puVar1;
    longlong lVar2;

    puVar1 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar1 != (undefined4 *)0x0) {
        lVar2 = FUN_1403d90d0(DAT_140c65898,*puVar1);
        if (lVar2 != 0) {
            lVar2 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(lVar2 + 0x108));
            if (lVar2 == 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
            FUN_140649870(param_1,*(undefined4 *)(lVar2 + 0x108));
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140652ce0(undefined8 param_1)

{
    FUN_140649870(param_1,*(undefined4 *)(DAT_140c65898 + 0x6400));
    return 1;
}



undefined8 FUN_140652dd0(longlong param_1)

{
    undefined4 uVar1;
    undefined8 *puVar2;
    uint uVar3;
    int iVar4;
    undefined4 *puVar5;
    longlong lVar6;
    undefined8 uVar7;
    longlong lVar8;
    undefined8 *puVar9;
    ulonglong uVar10;
    ulonglong uVar11;

    puVar5 = (undefined4 *)FUN_1406622c0(param_1,1);
    if ((puVar5 == (undefined4 *)0x0) || (lVar6 = FUN_1403d90d0(DAT_140c65898,*puVar5), lVar6 == 0)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
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
        uVar11 = (ulonglong)uVar3;
        lVar8 = FUN_1403dec00();
        if ((lVar8 != 0) && (uVar10 = 0, *(longlong *)(lVar8 + 0x18) != 0)) {
            do {
                if ((*(int *)(*(longlong *)(lVar8 + 0x10) + uVar10 * 4) != *(int *)(lVar6 + 8)) &&
                    (iVar4 = FUN_140649870(), iVar4 != 0)) {
                    FUN_1400fb470();
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                }
                uVar10 = (ulonglong)((int)uVar10 + 1);
            } while (uVar10 < *(ulonglong *)(lVar8 + 0x18));
            uVar11 = (ulonglong)uVar3;
        }
        puVar9 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar11 & 0xffffffff
                );
        puVar2 = *(undefined8 **)(param_1 + 0x10);
        *puVar2 = *puVar9;
        uVar1 = *(undefined4 *)(puVar9 + 1);
        *(undefined4 *)(puVar2 + 1) = uVar1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400579e0(param_1,uVar1,uVar11 & 0xffffffff);
    }
    return 1;
}



undefined8 FUN_140653210(longlong param_1)

{
    double *pdVar1;
    undefined4 *puVar2;
    longlong lVar3;
    int iVar4;

    puVar2 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar2 != (undefined4 *)0x0) {
        lVar3 = FUN_1403d90d0(DAT_140c65898,*puVar2);
        if (lVar3 != 0) {
            if ((~(*(uint *)(lVar3 + 0x28) >> 2) & 1) == 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
            iVar4 = *(int *)(lVar3 + 0x3c);
            if (iVar4 == 0) {
                iVar4 = *(int *)(lVar3 + 0x38);
            }
            pdVar1 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar1 + 1) = 3;
            *pdVar1 = (double)iVar4;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406533d0(longlong param_1)

{
    double *pdVar1;
    int iVar2;
    longlong lVar3;

    lVar3 = FUN_1406622c0();
    if (lVar3 != 0) {
        lVar3 = FUN_1403d90d0();
        if (lVar3 != 0) {
            if ((~(*(uint *)(lVar3 + 0x28) >> 3) & 1) == 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
            if (*(longlong **)(lVar3 + 0x118) == (longlong *)0x0) {
                iVar2 = 0;
            }
            else {
                iVar2 = (**(code **)(**(longlong **)(lVar3 + 0x118) + 0x18))();
            }
            pdVar1 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar1 + 1) = 3;
            *pdVar1 = (double)iVar2;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140653480(longlong param_1)

{
    double *pdVar1;
    int iVar2;
    longlong lVar3;

    lVar3 = FUN_1406622c0();
    if (lVar3 != 0) {
        lVar3 = FUN_1403d90d0();
        if (lVar3 != 0) {
            if ((~(*(uint *)(lVar3 + 0x28) >> 3) & 1) == 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
            if (*(longlong **)(lVar3 + 0x110) == (longlong *)0x0) {
                iVar2 = 0;
            }
            else {
                iVar2 = (**(code **)(**(longlong **)(lVar3 + 0x110) + 0x18))();
            }
            pdVar1 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar1 + 1) = 3;
            *pdVar1 = (double)iVar2;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140653530(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    longlong lVar3;
    longlong lVar4;

    puVar2 = (undefined4 *)FUN_1406622c0(param_1,1);
    if ((puVar2 != (undefined4 *)0x0) && (lVar3 = FUN_1403d90d0(DAT_140c65898,*puVar2), lVar3 != 0)) {
        lVar4 = FUN_140561c30(DAT_140c65b70,*(undefined4 *)(lVar3 + 0x1600));
        if ((lVar4 == 0) &&
            ((*(longlong *)(DAT_140c65898 + 0x78) == lVar3 &&
              (lVar3 = FUN_14039df50(), lVar4 = 0, lVar3 != 0)))) {
            lVar4 = FUN_1404695e0(lVar3);
        }
        puVar1 = *(uint **)(param_1 + 0x10);
        puVar1[2] = 1;
        *puVar1 = (uint)(lVar4 != 0);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    return 0;
}



undefined8 FUN_1406535f0(longlong param_1)

{
    uint *puVar1;
    byte bVar2;
    undefined4 *puVar3;
    longlong lVar4;

    puVar3 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar3 != (undefined4 *)0x0) {
        lVar4 = FUN_1403d90d0(DAT_140c65898,*puVar3);
        if ((lVar4 != 0) && (bVar2 = 1, *(int *)(lVar4 + 0x250) != 0)) goto LAB_14065362e;
    }
    bVar2 = 0;
    LAB_14065362e:
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)bVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140653660(longlong param_1)

{
    uint *puVar1;
    byte bVar2;
    int iVar3;
    undefined4 *puVar4;
    longlong lVar5;
    longlong *plVar6;
    longlong *plVar7;

    puVar4 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar4 != (undefined4 *)0x0) {
        lVar5 = FUN_1403d90d0(DAT_140c65898,*puVar4);
        if (lVar5 != 0) {
            plVar6 = *(longlong **)(lVar5 + 0x16f0);
            plVar7 = plVar6;
            if (plVar6 == (longlong *)0x0) {
                plVar7 = *(longlong **)(lVar5 + 0x16f8);
            }
            if (plVar7 != (longlong *)0x0) {
                if (plVar6 == (longlong *)0x0) {
                    plVar6 = *(longlong **)(lVar5 + 0x16f8);
                }
                iVar3 = (**(code **)(*plVar6 + 0x108))(plVar6,0,1);
                bVar2 = 1;
                if (iVar3 == 1) goto LAB_1406536d8;
            }
        }
    }
    bVar2 = 0;
    LAB_1406536d8:
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)bVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140653790(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    byte bVar3;
    longlong lVar4;

    lVar4 = FUN_1406622c0();
    if (lVar4 != 0) {
        lVar4 = FUN_1403d90d0(DAT_140c65898);
        if (lVar4 != 0) {
            bVar3 = 0;
            if ((*(int *)(lVar4 + 0x80) == 0x17) && (*(longlong *)(DAT_140c65898 + 0x6490) == lVar4)) {
                bVar3 = 1;
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



undefined8 FUN_140653820(longlong param_1)

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
            iVar1 = *(int *)(lVar4 + 0x80);
            puVar2[2] = 1;
            *puVar2 = (uint)(iVar1 == 0x14);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar3 = *(undefined4 **)(param_1 + 0x10);
    *puVar3 = 0;
    puVar3[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140653d70(longlong param_1)

{
    undefined8 *puVar1;
    double *pdVar2;
    int iVar3;
    uint uVar4;
    undefined4 *puVar5;
    longlong lVar6;

    puVar5 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar5 != (undefined4 *)0x0) {
        lVar6 = FUN_1403d90d0(DAT_140c65898,*puVar5);
        if (lVar6 != 0) {
            iVar3 = FUN_140056d60(param_1,2);
            if (iVar3 < 0x1c) {
                uVar4 = FUN_14045e4f0(lVar6,iVar3);
                pdVar2 = *(double **)(param_1 + 0x10);
                *(undefined4 *)(pdVar2 + 1) = 3;
                *pdVar2 = (double)((float)(ulonglong)uVar4 * 0.001);
            }
            else {
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                *puVar1 = 0;
                *(undefined4 *)(puVar1 + 1) = 3;
            }
            goto LAB_140653e03;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    LAB_140653e03:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140653e20(longlong param_1)

{
    undefined4 *puVar1;
    uint *puVar2;
    uint uVar3;
    longlong lVar4;

    lVar4 = FUN_1406622c0();
    if (lVar4 == 0) {
        LAB_140653e9d:
        uVar3 = 0;
    }
    else {
        lVar4 = FUN_1403d90d0(DAT_140c65898);
        if (lVar4 == 0) goto LAB_140653e9d;
        uVar3 = FUN_140056d60();
        if (0x1b < uVar3) {
            puVar1 = *(undefined4 **)(param_1 + 0x10);
            *puVar1 = 0;
            puVar1[2] = 1;
            goto LAB_140653eac;
        }
        if ((int)uVar3 < 0x1c) {
            uVar3 = (uint)(*(longlong *)(lVar4 + 0x2d8 + (longlong)(int)uVar3 * 0x10) != 0);
        }
        else {
            uVar3 = 0;
        }
    }
    puVar2 = *(uint **)(param_1 + 0x10);
    puVar2[2] = 1;
    *puVar2 = uVar3;
    LAB_140653eac:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140653ed0(longlong param_1)

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
            iVar1 = *(int *)(lVar4 + 0x2ac);
            puVar2[2] = 1;
            *puVar2 = (uint)(iVar1 != 0);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar3 = *(undefined4 **)(param_1 + 0x10);
    *puVar3 = 0;
    puVar3[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140653fc0(longlong param_1)

{
    double *pdVar1;
    undefined8 *puVar2;
    int iVar3;
    undefined4 *puVar4;
    longlong lVar5;

    puVar4 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar4 != (undefined4 *)0x0) {
        lVar5 = FUN_1403d90d0(DAT_140c65898,*puVar4);
        if (lVar5 != 0) {
            if ((int)*(float *)(lVar5 + 0x724) == -1) {
                iVar3 = -1;
            }
            else {
                iVar3 = (int)*(float *)(lVar5 + 0xc94) + (int)*(float *)(lVar5 + 0x724);
            }
            pdVar1 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar1 + 1) = 3;
            *pdVar1 = (double)iVar3;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140654050(longlong param_1)

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
            iVar1 = *(int *)(lVar4 + 0x1604);
            puVar2[2] = 1;
            *puVar2 = (uint)(iVar1 != 0);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar3 = *(undefined4 **)(param_1 + 0x10);
    *puVar3 = 0;
    puVar3[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140654160(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    byte bVar3;
    longlong lVar4;

    lVar4 = FUN_1406622c0();
    if (lVar4 != 0) {
        lVar4 = FUN_1403d90d0(DAT_140c65898);
        if ((lVar4 != 0) && (*(int *)(lVar4 + 0x3c) != 0)) {
            bVar3 = 0;
            if ((*(longlong *)(DAT_140c65898 + 0x7258) != 0) &&
                (*(int *)(*(longlong *)(DAT_140c65898 + 0x7258) + 0x14) != 0)) {
                bVar3 = 1;
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



undefined8 FUN_140654200(longlong param_1)

{
    int iVar1;
    uint *puVar2;
    undefined4 *puVar3;
    longlong lVar4;
    bool bVar5;

    lVar4 = FUN_1406622c0();
    if (lVar4 != 0) {
        lVar4 = FUN_1403d90d0();
        if (lVar4 != 0) {
            if ((*(longlong *)(lVar4 + 0x18) == 0) ||
                (iVar1 = *(int *)(*(longlong *)(lVar4 + 0x18) + 0x6c), iVar1 == 0)) {
                bVar5 = false;
            }
            else {
                bVar5 = *(int *)(DAT_140c65898 + 0x1694) == iVar1;
            }
            puVar2 = *(uint **)(param_1 + 0x10);
            puVar2[2] = 1;
            *puVar2 = (uint)bVar5;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar3 = *(undefined4 **)(param_1 + 0x10);
    *puVar3 = 0;
    puVar3[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406542a0(longlong param_1)

{
    undefined4 *puVar1;
    longlong lVar2;
    undefined8 uVar3;
    undefined4 uVar4;
    char *pcVar5;
    longlong lVar6;
    undefined local_28 [8];
    longlong local_20;

    puVar1 = (undefined4 *)FUN_1406622c0(param_1,1);
    if ((puVar1 == (undefined4 *)0x0) || (lVar2 = FUN_1403d90d0(DAT_140c65898,*puVar1), lVar2 == 0)) {
        pcVar5 = "";
    }
    else {
        if (*(longlong *)(lVar2 + 0x18) == 0) {
            uVar4 = 0;
        }
        else {
            uVar4 = *(undefined4 *)(*(longlong *)(lVar2 + 0x18) + 0x6c);
        }
        lVar2 = FUN_1401ed460(uVar4);
        if (lVar2 != 0) {
            uVar3 = FUN_14034bdd0();
            lVar2 = FUN_14018f0e0(local_28,uVar3);
            if (*(longlong *)(lVar2 + 8) == 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            }
            else {
                lVar6 = -1;
                do {
                    lVar6 = lVar6 + 1;
                } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar6) != '\0');
                FUN_140058710(param_1);
            }
            if (local_20 == 0) {
                return 1;
            }
            FUN_14018b900(local_20,0);
            return 1;
        }
        pcVar5 = "";
    }
    FUN_140058710(param_1,pcVar5,0);
    return 1;
}

