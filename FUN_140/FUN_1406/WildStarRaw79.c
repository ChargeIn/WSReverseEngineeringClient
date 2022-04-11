//
// Created by flop on 04.04.22.
//
#include "../../include.h"

undefined8 FUN_1406b6e80(longlong param_1)

{
    uint uVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 uVar4;

    lVar2 = FUN_140056ab0(param_1,1,"Game.PetCustomization");
    if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 8), lVar2 != 0)) {
        lVar2 = FUN_1403a8810(DAT_140c65898,*(undefined4 *)(lVar2 + 8),*(undefined4 *)(lVar2 + 0xc));
        if (lVar2 != 0) {
            puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
            if (((puVar3 < *(undefined8 **)(param_1 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
                (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
                uVar1 = FUN_140056d60(param_1,2);
                if (uVar1 < 4) {
                    uVar4 = FUN_140224d00(*(undefined2 *)(lVar2 + 0x48 + (ulonglong)uVar1 * 2));
                    FUN_140434100(param_1,uVar4);
                    return 1;
                }
            }
        }
    }
    return 0;
}



undefined8 FUN_1406b6f30(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    uint uVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    undefined8 *puVar7;

    lVar5 = FUN_140056ab0(param_1,1,"Game.PetCustomization");
    if ((lVar5 == 0) || (lVar5 = *(longlong *)(lVar5 + 8), lVar5 == 0)) {
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
    }
    else {
        lVar6 = FUN_140056ab0(param_1,2,"Game.PetFlair");
        if ((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 8), lVar6 != 0)) {
            puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20);
            if ((puVar7 < *(undefined8 **)(param_1 + 0x10)) &&
                (((puVar7 != &DAT_140a12138 && (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x28))) &&
                  (uVar3 = FUN_140056d60(), uVar3 < 4)))) {
                iVar4 = FUN_1403a9770(DAT_140c65898,*(undefined4 *)(lVar5 + 8),*(undefined4 *)(lVar5 + 0xc),
                                      uVar3,**(undefined4 **)(lVar6 + 8));
                puVar1 = *(uint **)(param_1 + 0x10);
                puVar1[2] = 1;
                *puVar1 = (uint)(iVar4 != 0);
                goto LAB_1406b6ffe;
            }
        }
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
    }
    LAB_1406b6ffe:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406b7040(longlong param_1)

{
    undefined4 uVar1;
    uint *puVar2;
    undefined4 *puVar3;
    uint uVar4;
    int iVar5;
    longlong lVar6;
    longlong lVar7;
    undefined8 *puVar8;

    lVar6 = FUN_140056ab0(param_1,1,"Game.PetCustomization");
    if ((lVar6 == 0) || (lVar6 = *(longlong *)(lVar6 + 8), lVar6 == 0)) {
        puVar3 = *(undefined4 **)(param_1 + 0x10);
        *puVar3 = 0;
        puVar3[2] = 1;
    }
    else {
        lVar7 = FUN_140056ab0(param_1,2,"Game.PetFlair");
        if ((lVar7 != 0) && (lVar7 = *(longlong *)(lVar7 + 8), lVar7 != 0)) {
            puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20);
            if ((puVar8 < *(undefined8 **)(param_1 + 0x10)) &&
                (((puVar8 != &DAT_140a12138 && (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x28))) &&
                  (uVar4 = FUN_140056d60(), uVar4 < 4)))) {
                uVar1 = **(undefined4 **)(lVar7 + 8);
                iVar5 = FUN_1403a9940(uVar1,*(undefined4 *)(lVar6 + 8),*(undefined4 *)(lVar6 + 0xc),uVar4,
                                      uVar1);
                puVar2 = *(uint **)(param_1 + 0x10);
                puVar2[2] = 1;
                *puVar2 = (uint)(iVar5 != 0);
                goto LAB_1406b7103;
            }
        }
        puVar3 = *(undefined4 **)(param_1 + 0x10);
        *puVar3 = 0;
        puVar3[2] = 1;
    }
    LAB_1406b7103:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406b7140(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    uint uVar3;
    int iVar4;
    longlong lVar5;
    undefined8 *puVar6;

    lVar5 = FUN_140056ab0(param_1,1,"Game.PetCustomization");
    if ((lVar5 != 0) && (*(longlong *)(lVar5 + 8) != 0)) {
        puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        if ((puVar6 < *(undefined8 **)(param_1 + 0x10)) &&
            ((puVar6 != &DAT_140a12138 && (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))))) {
            uVar3 = FUN_140056d60(param_1,2);
            if (uVar3 < 4) {
                iVar4 = FUN_1403a9940();
                puVar1 = *(uint **)(param_1 + 0x10);
                puVar1[2] = 1;
                *puVar1 = (uint)(iVar4 != 0);
                goto LAB_1406b71dc;
            }
        }
    }
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    puVar2[2] = 1;
    *puVar2 = 0;
    LAB_1406b71dc:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406b7550(longlong param_1)

{
    double *pdVar1;
    uint uVar2;
    longlong lVar3;
    int *piVar4;
    undefined8 *puVar5;
    int iVar6;

    lVar3 = FUN_140056ab0();
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
        piVar4 = (int *)FUN_1403a8810(DAT_140c65898);
        if (piVar4 != (int *)0x0) {
            puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
            if (((puVar5 < *(undefined8 **)(param_1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
                (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
                uVar2 = FUN_140056d60();
                if (uVar2 < 4) {
                    iVar6 = 0;
                    if (*piVar4 - 1U < 2) {
                        if (uVar2 == 0) goto LAB_1406b75ee;
                        if (uVar2 == 1) {
                            iVar6 = 0x43;
                        }
                        else if (uVar2 == 2) {
                            iVar6 = 0x44;
                        }
                        else if (uVar2 == 3) {
                            iVar6 = 0x45;
                        }
                    }
                    else if ((*piVar4 == 0) && (uVar2 == 0)) {
                        LAB_1406b75ee:
                        iVar6 = 0x42;
                    }
                    pdVar1 = *(double **)(param_1 + 0x10);
                    *(undefined4 *)(pdVar1 + 1) = 3;
                    *pdVar1 = (double)iVar6;
                    goto LAB_1406b764a;
                }
            }
            puVar5 = *(undefined8 **)(param_1 + 0x10);
            *puVar5 = 0;
            *(undefined4 *)(puVar5 + 1) = 3;
            goto LAB_1406b764a;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    LAB_1406b764a:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406b7660(longlong param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 local_18;
    undefined4 local_10;

    puVar2 = (undefined8 *)FUN_140059170(param_1,0x10);
    puVar3 = (undefined8 *)FUN_14018b280(0x10);
    if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &PTR_FUN_140b6fe30;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_2 + 8);
        *(undefined4 *)((longlong)puVar3 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    }
    *puVar2 = 0x3950;
    puVar2[1] = puVar3;
    lVar1 = *(longlong *)(param_1 + 0x20);
    local_18 = FUN_140062650(param_1,"Game.PetCustomization",0x15);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



undefined8 FUN_1406b7720(longlong param_1)

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
        LAB_1406b7763:
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
                local_18 = FUN_140062650(param_1,"Game.PetCustomization",0x15);
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
                goto LAB_1406b7847;
            }
        }
    }
    else if (*(int *)(plVar6 + 1) == 7) {
        lVar7 = *plVar6 + 0x30;
        goto LAB_1406b7763;
    }
    *(undefined4 *)plVar4 = 0;
    *(undefined4 *)(plVar4 + 1) = 1;
    LAB_1406b7847:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406b7860(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong *plVar3;

    lVar2 = FUN_140056ab0(param_1,1,"Game.PetCustomization");
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



undefined8 FUN_1406b78e0(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    byte bVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;

    lVar4 = FUN_140056ab0(param_1,1,"Game.PetCustomization");
    lVar5 = 0;
    lVar6 = lVar5;
    if (lVar4 != 0) {
        lVar6 = *(longlong *)(lVar4 + 8);
    }
    lVar4 = FUN_140056ab0(param_1,2,"Game.PetCustomization");
    if (lVar4 != 0) {
        lVar5 = *(longlong *)(lVar4 + 8);
    }
    if ((lVar6 == 0) || (lVar5 == 0)) {
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
    }
    else {
        if ((*(int *)(lVar6 + 8) != *(int *)(lVar5 + 8)) ||
            (bVar3 = 1, *(int *)(lVar6 + 0xc) != *(int *)(lVar5 + 0xc))) {
            bVar3 = 0;
        }
        puVar1 = *(uint **)(param_1 + 0x10);
        puVar1[2] = 1;
        *puVar1 = (uint)bVar3;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406b7990(longlong param_1)

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
        LAB_1406b79d3:
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
                local_18 = FUN_140062650(param_1,"Game.PetFlair",0xd);
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
                goto LAB_1406b7ab7;
            }
        }
    }
    else if (*(int *)(plVar6 + 1) == 7) {
        lVar7 = *plVar6 + 0x30;
        goto LAB_1406b79d3;
    }
    *(undefined4 *)plVar4 = 0;
    *(undefined4 *)(plVar4 + 1) = 1;
    LAB_1406b7ab7:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406b7ad0(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong *plVar3;

    lVar2 = FUN_140056ab0(param_1,1,"Game.PetFlair");
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



undefined8 FUN_1406b7b50(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    bool bVar6;

    lVar3 = FUN_140056ab0(param_1,1,"Game.PetFlair");
    lVar4 = 0;
    lVar5 = lVar4;
    if (lVar3 != 0) {
        lVar5 = *(longlong *)(lVar3 + 8);
    }
    lVar3 = FUN_140056ab0(param_1,2,"Game.PetFlair");
    if (lVar3 != 0) {
        lVar4 = *(longlong *)(lVar3 + 8);
    }
    if ((lVar5 == 0) || (lVar4 == 0)) {
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
    }
    else {
        if ((*(int **)(lVar5 + 8) == (int *)0x0) || (*(int **)(lVar4 + 8) == (int *)0x0)) {
            bVar6 = false;
        }
        else {
            bVar6 = **(int **)(lVar5 + 8) == **(int **)(lVar4 + 8);
        }
        puVar1 = *(uint **)(param_1 + 0x10);
        puVar1[2] = 1;
        *puVar1 = (uint)bVar6;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}


// undefined4 FUN_1406b7c10(longlong param_1)
undefined4 LoadLiveEvent(longlong param_1)

{
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 uVar4;
    longlong lVar5;
    undefined **ppuVar6;
    undefined *puVar7;
    longlong lVar8;
    undefined8 local_18;
    undefined4 local_10;

    LuaElementLoaderOrSo(param_1,"Game.LiveEvent");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    lVar8 = 7;
    *puVar1 = puVar1[-2];
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar1 + -1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar5 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"__index",7);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar5 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    ppuVar6 = &PTR_DAT_140c5e020;
    lVar5 = 6;
    puVar7 = PTR_DAT_140c5e020;
    while (puVar7 != (undefined *)0x0) {
        puVar7 = ppuVar6[1];
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        lVar3 = FUN_140060ab0(param_1,0);
        *(undefined **)(lVar3 + 0x20) = puVar7;
        plVar2 = *(longlong **)(param_1 + 0x10);
        *plVar2 = lVar3;
        *(undefined4 *)(plVar2 + 1) = 6;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        puVar7 = *ppuVar6;
        uVar4 = FUN_1400580e0(param_1,0xfffffffe);
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (puVar7[lVar3] != '\0');
        local_18 = FUN_140062650(param_1,puVar7);
        local_10 = 4;
        FUN_14005ea50(param_1,uVar4,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        uVar4 = *(undefined8 *)(param_1 + 0x10);
        ppuVar6 = ppuVar6 + 2;
        puVar7 = *ppuVar6;
    }
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    FUN_140057020(param_1,"LiveEvent",&PTR_DAT_140b702b0);
    FUN_140058710(param_1,"LiveEventCategory",0x11);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    do {
        FUN_1400f06f0(param_1);
        lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"LiveEventFlags",0xe);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    do {
        FUN_1400f06f0(param_1);
        lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"LiveEventType",0xd);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    lVar5 = 2;
    *puVar1 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    do {
        FUN_1400f06f0(param_1);
        lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    return 1;
}



undefined8 FUN_1406b7f90(longlong param_1)

{
    int iVar1;
    int *piVar2;
    double *pdVar3;
    undefined8 *puVar4;
    longlong lVar5;

    lVar5 = FUN_140056ab0(param_1,1,"Game.LiveEvent");
    if (((lVar5 != 0) && (*(longlong *)(lVar5 + 8) != 0)) &&
        (piVar2 = *(int **)(*(longlong *)(lVar5 + 8) + 8), piVar2 != (int *)0x0)) {
        iVar1 = *piVar2;
        pdVar3 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar3 + 1) = 3;
        *pdVar3 = (double)iVar1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406b8010(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_140056ab0(param_1,1,"Game.LiveEvent");
    if (((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) &&
        (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 8) + 8), lVar3 != 0)) {
        iVar1 = *(int *)(lVar3 + 4);
        pdVar2 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)iVar1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406b8090(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_140056ab0(param_1,1,"Game.LiveEvent");
    if (((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) &&
        (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 8) + 8), lVar3 != 0)) {
        iVar1 = *(int *)(lVar3 + 8);
        pdVar2 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)iVar1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406b8110(longlong param_1)

{
    byte bVar1;
    uint *puVar2;
    longlong lVar3;

    lVar3 = FUN_140056ab0(param_1,1,"Game.LiveEvent");
    if (((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) &&
        (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 8) + 8), lVar3 != 0)) {
        bVar1 = *(byte *)(lVar3 + 0xc);
        puVar2 = *(uint **)(param_1 + 0x10);
        puVar2[2] = 1;
        *puVar2 = (uint)((bVar1 & 6) != 0);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406b8190(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_140056ab0(param_1,1,"Game.LiveEvent");
    if (((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) &&
        (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 8) + 8), lVar3 != 0)) {
        iVar1 = *(int *)(lVar3 + 0x10);
        pdVar2 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)iVar1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406b8210(longlong param_1)

{
    longlong lVar1;
    undefined8 uVar2;

    lVar1 = FUN_140056ab0(param_1,1,"Game.LiveEvent");
    if (((lVar1 == 0) || (*(longlong *)(lVar1 + 8) == 0)) ||
        (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 8) + 8), lVar1 == 0)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    if (*(int *)(lVar1 + 0x14) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    lVar1 = FUN_14020fd40();
    if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0xc) & 8) == 0)) {
        uVar2 = FUN_1406b91f0(param_1,lVar1);
        return uVar2;
    }
    return 0;
}



undefined8 FUN_1406b82b0(longlong param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    longlong lVar3;
    undefined local_28 [8];
    longlong local_20;

    lVar1 = FUN_140056ab0(param_1,1);
    if (((lVar1 == 0) || (*(longlong *)(lVar1 + 8) == 0)) ||
        (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 8) + 8), lVar1 == 0)) {
        lVar1 = FUN_14018f0e0(local_28,&DAT_1409f6d8c);
        if (*(longlong *)(lVar1 + 8) == 0) goto LAB_1406b8329;
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (*(char *)(*(longlong *)(lVar1 + 8) + lVar3) != '\0');
    }
    else {
        uVar2 = FUN_14034bdd0(lVar1,*(undefined4 *)(lVar1 + 0x18));
        lVar1 = FUN_14018f0e0(local_28,uVar2);
        if (*(longlong *)(lVar1 + 8) == 0) {
            LAB_1406b8329:
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            goto LAB_1406b8352;
        }
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (*(char *)(*(longlong *)(lVar1 + 8) + lVar3) != '\0');
    }
    FUN_140058710(param_1);
    LAB_1406b8352:
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
}



undefined8 FUN_1406b8370(longlong param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    longlong lVar3;
    undefined local_28 [8];
    longlong local_20;

    lVar1 = FUN_140056ab0(param_1,1);
    if (((lVar1 == 0) || (*(longlong *)(lVar1 + 8) == 0)) ||
        (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 8) + 8), lVar1 == 0)) {
        lVar1 = FUN_14018f0e0(local_28,&DAT_1409f6dac);
        if (*(longlong *)(lVar1 + 8) == 0) goto LAB_1406b83e9;
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (*(char *)(*(longlong *)(lVar1 + 8) + lVar3) != '\0');
    }
    else {
        uVar2 = FUN_14034bdd0(lVar1,*(undefined4 *)(lVar1 + 0x1c));
        lVar1 = FUN_14018f0e0(local_28,uVar2);
        if (*(longlong *)(lVar1 + 8) == 0) {
            LAB_1406b83e9:
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            goto LAB_1406b8412;
        }
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (*(char *)(*(longlong *)(lVar1 + 8) + lVar3) != '\0');
    }
    FUN_140058710(param_1);
    LAB_1406b8412:
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
}



undefined8 FUN_1406b8430(longlong param_1)

{
    ulonglong uVar1;
    longlong lVar2;
    longlong lVar3;
    undefined local_28 [8];
    longlong local_20;

    lVar2 = FUN_140056ab0(param_1,1);
    if (((lVar2 == 0) || (*(longlong *)(lVar2 + 8) == 0)) ||
        (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 8) + 8), lVar2 == 0)) {
        lVar2 = FUN_14018f0e0(local_28,&DAT_1409f6cd4);
        if (*(longlong *)(lVar2 + 8) == 0) goto LAB_1406b84c6;
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar3) != '\0');
    }
    else {
        uVar1 = *(ulonglong *)(lVar2 + 0x20);
        if (uVar1 == 0) {
            lVar2 = 0;
        }
        else if (DAT_140c3fe70 < uVar1) {
            lVar2 = 0;
        }
        else {
            lVar2 = DAT_140c3fe68 + uVar1;
        }
        lVar2 = FUN_14018f0e0(local_28,lVar2);
        if (*(longlong *)(lVar2 + 8) == 0) {
            LAB_1406b84c6:
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            goto LAB_1406b84f2;
        }
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar3) != '\0');
    }
    FUN_140058710(param_1);
    LAB_1406b84f2:
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
}



undefined8 FUN_1406b8510(longlong param_1)

{
    ulonglong uVar1;
    longlong lVar2;
    longlong lVar3;
    undefined local_28 [8];
    longlong local_20;

    lVar2 = FUN_140056ab0(param_1,1);
    if (((lVar2 == 0) || (*(longlong *)(lVar2 + 8) == 0)) ||
        (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 8) + 8), lVar2 == 0)) {
        lVar2 = FUN_14018f0e0(local_28,&DAT_1409f6d44);
        if (*(longlong *)(lVar2 + 8) == 0) goto LAB_1406b85a6;
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar3) != '\0');
    }
    else {
        uVar1 = *(ulonglong *)(lVar2 + 0x28);
        if (uVar1 == 0) {
            lVar2 = 0;
        }
        else if (DAT_140c3fe70 < uVar1) {
            lVar2 = 0;
        }
        else {
            lVar2 = DAT_140c3fe68 + uVar1;
        }
        lVar2 = FUN_14018f0e0(local_28,lVar2);
        if (*(longlong *)(lVar2 + 8) == 0) {
            LAB_1406b85a6:
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            goto LAB_1406b85d2;
        }
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar3) != '\0');
    }
    FUN_140058710(param_1);
    LAB_1406b85d2:
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
}



undefined8 FUN_1406b85f0(longlong param_1)

{
    ulonglong uVar1;
    longlong lVar2;
    longlong lVar3;
    undefined local_28 [8];
    longlong local_20;

    lVar2 = FUN_140056ab0(param_1,1);
    if (((lVar2 == 0) || (*(longlong *)(lVar2 + 8) == 0)) ||
        (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 8) + 8), lVar2 == 0)) {
        lVar2 = FUN_14018f0e0(local_28,&DAT_1409f6c74);
        if (*(longlong *)(lVar2 + 8) == 0) goto LAB_1406b8686;
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar3) != '\0');
    }
    else {
        uVar1 = *(ulonglong *)(lVar2 + 0x30);
        if (uVar1 == 0) {
            lVar2 = 0;
        }
        else if (DAT_140c3fe70 < uVar1) {
            lVar2 = 0;
        }
        else {
            lVar2 = DAT_140c3fe68 + uVar1;
        }
        lVar2 = FUN_14018f0e0(local_28,lVar2);
        if (*(longlong *)(lVar2 + 8) == 0) {
            LAB_1406b8686:
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            goto LAB_1406b86b2;
        }
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar3) != '\0');
    }
    FUN_140058710(param_1);
    LAB_1406b86b2:
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
}



undefined8 FUN_1406b86d0(longlong param_1)

{
    ulonglong uVar1;
    longlong lVar2;
    longlong lVar3;
    undefined local_28 [8];
    longlong local_20;

    lVar2 = FUN_140056ab0(param_1,1);
    if (((lVar2 == 0) || (*(longlong *)(lVar2 + 8) == 0)) ||
        (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 8) + 8), lVar2 == 0)) {
        lVar2 = FUN_14018f0e0(local_28,&DAT_1409f6c94);
        if (*(longlong *)(lVar2 + 8) == 0) goto LAB_1406b8766;
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar3) != '\0');
    }
    else {
        uVar1 = *(ulonglong *)(lVar2 + 0x38);
        if (uVar1 == 0) {
            lVar2 = 0;
        }
        else if (DAT_140c3fe70 < uVar1) {
            lVar2 = 0;
        }
        else {
            lVar2 = DAT_140c3fe68 + uVar1;
        }
        lVar2 = FUN_14018f0e0(local_28,lVar2);
        if (*(longlong *)(lVar2 + 8) == 0) {
            LAB_1406b8766:
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            goto LAB_1406b8792;
        }
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar3) != '\0');
    }
    FUN_140058710(param_1);
    LAB_1406b8792:
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
}



undefined8 FUN_1406b87b0(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    undefined8 *puVar3;
    longlong lVar4;

    lVar4 = FUN_140056ab0(param_1,1,"Game.LiveEvent");
    if (((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) &&
        (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + 8), lVar4 != 0)) {
        iVar1 = *(int *)(lVar4 + 0x40);
        pdVar2 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)iVar1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406b8830(longlong param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    longlong lVar3;
    undefined local_28 [8];
    longlong local_20;

    lVar1 = FUN_140056ab0(param_1,1);
    if (((lVar1 == 0) || (*(longlong *)(lVar1 + 8) == 0)) ||
        (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 8) + 8), lVar1 == 0)) {
        lVar1 = FUN_14018f0e0(local_28,&DAT_1409f6c44);
        if (*(longlong *)(lVar1 + 8) == 0) goto LAB_1406b88a9;
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (*(char *)(*(longlong *)(lVar1 + 8) + lVar3) != '\0');
    }
    else {
        uVar2 = FUN_14034bdd0(lVar1,*(undefined4 *)(lVar1 + 0x44));
        lVar1 = FUN_14018f0e0(local_28,uVar2);
        if (*(longlong *)(lVar1 + 8) == 0) {
            LAB_1406b88a9:
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            goto LAB_1406b88d2;
        }
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (*(char *)(*(longlong *)(lVar1 + 8) + lVar3) != '\0');
    }
    FUN_140058710(param_1);
    LAB_1406b88d2:
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
}



undefined4 FUN_1406b8f60(longlong param_1)

{
    int iVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    undefined local_58 [16];
    undefined **local_48;
    undefined4 local_40;
    longlong local_38;
    undefined4 local_30;
    undefined local_28 [8];
    undefined4 local_20;
    longlong local_18;

    lVar4 = FUN_140056ab0(param_1,1,"Game.LiveEvent");
    if ((((lVar4 == 0) || (*(longlong *)(lVar4 + 8) == 0)) ||
         (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + 8), lVar4 == 0)) || (DAT_140c658f8 == 0)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    if (*(longlong **)(DAT_140c65898 + 0x1bf0) != (longlong *)0x0) {
        iVar1 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))();
        if (iVar1 == 0xa7) {
            uVar2 = *(undefined4 *)(lVar4 + 0x48);
            goto LAB_1406b8fe2;
        }
    }
    uVar2 = *(undefined4 *)(lVar4 + 0x4c);
    LAB_1406b8fe2:
    lVar4 = FUN_14024b980(uVar2);
    if (lVar4 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        local_48 = &PTR_FUN_140b569f0;
        local_30 = 1;
        local_38 = param_1;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar6 = *(undefined8 **)(param_1 + 0x10);
        uVar5 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar6 + 1) = 5;
        *puVar6 = uVar5;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        uVar2 = FUN_1400578c0(param_1);
        local_58 = ZEXT1216(*(undefined (*) [12])(lVar4 + 0xc));
        local_40 = uVar2;
        FUN_1400fa3c0(local_28,param_1,local_58);
        FUN_1400fb2a0(&local_48,L"tPosition",local_20);
        uVar3 = 0;
        if (DAT_140c658f8 != 0) {
            puVar6 = (undefined8 *)FUN_140448be0();
            if (puVar6 != (undefined8 *)0x0) {
                uVar3 = (**(code **)*puVar6)(puVar6);
            }
        }
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
        puVar6 = *(undefined8 **)(param_1 + 0x10);
        *puVar6 = *puVar7;
        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f06f0(param_1,puVar6,L"nMapZoneId",uVar3);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        puVar6 = *(undefined8 **)(param_1 + 0x10);
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
        *puVar6 = *puVar7;
        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        if (local_18 != 0) {
            FUN_1400579e0();
        }
        FUN_1400579e0(param_1);
    }
    return 1;
}



undefined4 FUN_1406b91f0(longlong param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 local_18;
    undefined4 local_10;

    if (param_2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar2 = (undefined8 *)FUN_140059170(param_1,0x10);
    puVar3 = (undefined8 *)FUN_14018b280(0x10);
    if (puVar3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)0x0;
    }
    else {
        puVar3[1] = param_2;
        *puVar3 = &PTR_FUN_140b6fe30;
    }
    puVar2[1] = puVar3;
    *puVar2 = 0x3950;
    lVar1 = *(longlong *)(param_1 + 0x20);
    local_18 = FUN_140062650(param_1,"Game.LiveEvent",0xe);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



undefined8 FUN_1406b92d0(longlong param_1)

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
        LAB_1406b9313:
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
                local_18 = FUN_140062650(param_1,"Game.LiveEvent",0xe);
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
                goto LAB_1406b93f7;
            }
        }
    }
    else if (*(int *)(plVar6 + 1) == 7) {
        lVar7 = *plVar6 + 0x30;
        goto LAB_1406b9313;
    }
    *(undefined4 *)plVar4 = 0;
    *(undefined4 *)(plVar4 + 1) = 1;
    LAB_1406b93f7:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406b9410(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong *plVar3;

    lVar2 = FUN_140056ab0(param_1,1,"Game.LiveEvent");
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



undefined8 FUN_1406b9490(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    bool bVar6;

    lVar3 = FUN_140056ab0(param_1,1,"Game.LiveEvent");
    lVar4 = 0;
    lVar5 = lVar4;
    if (lVar3 != 0) {
        lVar5 = *(longlong *)(lVar3 + 8);
    }
    lVar3 = FUN_140056ab0(param_1,2,"Game.LiveEvent");
    if (lVar3 != 0) {
        lVar4 = *(longlong *)(lVar3 + 8);
    }
    if ((lVar5 == 0) || (lVar4 == 0)) {
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
    }
    else {
        if ((*(int **)(lVar5 + 8) == (int *)0x0) || (*(int **)(lVar4 + 8) == (int *)0x0)) {
            bVar6 = false;
        }
        else {
            bVar6 = **(int **)(lVar5 + 8) == **(int **)(lVar4 + 8);
        }
        puVar1 = *(uint **)(param_1 + 0x10);
        puVar1[2] = 1;
        *puVar1 = (uint)bVar6;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}


// undefined4 FUN_1406b9550(longlong param_1)
undefined4 LoadRewardTrack(longlong param_1)

{
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined **ppuVar5;
    undefined *puVar6;
    undefined8 local_18;
    undefined4 local_10;

    LuaElementLoaderOrSo(param_1,"Game.RewardTrack");
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
    ppuVar5 = &PTR_DAT_140c5e160;
    puVar6 = PTR_DAT_140c5e160;
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
    FUN_140057020(param_1,"RewardTrack",&PTR_DAT_140b702d0);
    FUN_140058710(param_1,"RewardTrackRewardType",0x15);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    lVar3 = 2;
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
    return 1;
}



undefined8 FUN_1406b9790(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    undefined8 uVar4;
    longlong local_res18;

    lVar1 = *(longlong *)(DAT_140c65a38 + 0x10);
    local_res18 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < param_2) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res18 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res18 == lVar1) || (param_2 < *(uint *)(local_res18 + 0x20))) {
        local_res18 = lVar1;
    }
    if (((local_res18 != lVar1) && (lVar1 = *(longlong *)(local_res18 + 0x28), lVar1 != 0)) &&
        ((iVar3 = *(int *)(*(longlong *)(lVar1 + 8) + 8), iVar3 == 0 ||
                                                          (iVar3 = (**(code **)(*DAT_140c659a0 + 0x18))
                                                                  (DAT_140c659a0,*(undefined8 *)(DAT_140c65898 + 0x78),iVar3,0,0,0),
                                                                  iVar3 != 0)))) {
        uVar4 = FUN_1404338e0(param_1,lVar1);
        return uVar4;
    }
    return 0;
}



undefined8 FUN_1406b9860(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_140056ab0(param_1,1,"Game.RewardTrack");
    if (((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) &&
        (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 8) + 8), lVar3 != 0)) {
        pdVar2 = *(double **)(param_1 + 0x10);
        iVar1 = **(int **)(lVar3 + 8);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)iVar1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406b98e0(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_140056ab0(param_1,1,"Game.RewardTrack");
    if (((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) &&
        (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 8) + 8), lVar3 != 0)) {
        pdVar2 = *(double **)(param_1 + 0x10);
        iVar1 = *(int *)(*(longlong *)(lVar3 + 8) + 4);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)iVar1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1406b9960(longlong param_1)

{
    short sVar1;
    longlong lVar2;
    short *psVar3;
    undefined2 *puVar4;
    longlong lVar5;
    longlong lVar6;
    undefined local_108 [8];
    longlong local_100;
    undefined **local_e8;
    undefined local_e0 [8];
    undefined2 *local_d8;
    undefined2 *local_d0;
    undefined local_28 [16];
    undefined2 *local_18;

    lVar2 = FUN_140056ab0(param_1,1);
    if ((((lVar2 == 0) || (*(longlong *)(lVar2 + 8) == 0)) ||
         (*(longlong *)(*(longlong *)(lVar2 + 8) + 8) == 0)) ||
        ((lVar2 = FUN_14034bdd0(), lVar2 == 0 || (psVar3 = (short *)FUN_14034bdd0(), *psVar3 == 0)))) {
        lVar2 = FUN_14018f0e0(local_108,&DAT_1409f6df4);
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
        if (local_100 != 0) {
            FUN_14018b900(local_100,0);
        }
    }
    else {
        FUN_1400b6f30(&local_e8);
        lVar2 = 0;
        local_18 = (undefined2 *)0x0;
        local_28 = ZEXT816(0);
        local_e8 = &PTR_FUN_140b69230;
        puVar4 = (undefined2 *)FUN_14018b280(0x10,0);
        local_28 = CONCAT88(puVar4,puVar4);
        local_18 = puVar4 + 8;
        if (puVar4 != (undefined2 *)0x0) {
            *puVar4 = 0;
        }
        lVar5 = FUN_14018b280(0x60);
        lVar6 = lVar2;
        if (lVar5 != 0) {
            lVar6 = FUN_1404db7e0(lVar5,*(undefined8 *)(DAT_140c65898 + 0x78));
        }
        FUN_1400b7480(&local_e8,lVar6);
        psVar3 = (short *)FUN_14034bdd0();
        if (psVar3 == (short *)0x0) {
            if (local_d8 != local_d0) {
                *local_d8 = 0;
                local_d0 = local_d8;
            }
        }
        else {
            sVar1 = *psVar3;
            while (sVar1 != 0) {
                lVar2 = lVar2 + 1;
                sVar1 = psVar3[lVar2];
            }
            FUN_14001c480(local_e0);
        }
        lVar2 = FUN_1400b7660(&local_e8);
        lVar2 = FUN_14018f0e0(local_108,*(undefined8 *)(lVar2 + 8));
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
        if (local_100 != 0) {
            FUN_14018b900(local_100,0);
        }
        if (local_28._0_8_ != 0) {
            FUN_14018b900(local_28._0_8_,0);
        }
        FUN_1400b7390(&local_e8);
    }
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1406b9ba0(longlong param_1)

{
    short sVar1;
    longlong lVar2;
    short *psVar3;
    undefined2 *puVar4;
    longlong lVar5;
    longlong lVar6;
    undefined local_108 [8];
    longlong local_100;
    undefined **local_e8;
    undefined local_e0 [8];
    undefined2 *local_d8;
    undefined2 *local_d0;
    undefined local_28 [16];
    undefined2 *local_18;

    lVar2 = FUN_140056ab0(param_1,1);
    if ((((lVar2 == 0) || (*(longlong *)(lVar2 + 8) == 0)) ||
         (*(longlong *)(*(longlong *)(lVar2 + 8) + 8) == 0)) ||
        ((lVar2 = FUN_14034bdd0(), lVar2 == 0 || (psVar3 = (short *)FUN_14034bdd0(), *psVar3 == 0)))) {
        lVar2 = FUN_14018f0e0(local_108,&DAT_1409f6e1c);
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
        if (local_100 != 0) {
            FUN_14018b900(local_100,0);
        }
    }
    else {
        FUN_1400b6f30(&local_e8);
        lVar2 = 0;
        local_18 = (undefined2 *)0x0;
        local_28 = ZEXT816(0);
        local_e8 = &PTR_FUN_140b69230;
        puVar4 = (undefined2 *)FUN_14018b280(0x10,0);
        local_28 = CONCAT88(puVar4,puVar4);
        local_18 = puVar4 + 8;
        if (puVar4 != (undefined2 *)0x0) {
            *puVar4 = 0;
        }
        lVar5 = FUN_14018b280(0x60);
        lVar6 = lVar2;
        if (lVar5 != 0) {
            lVar6 = FUN_1404db7e0(lVar5,*(undefined8 *)(DAT_140c65898 + 0x78));
        }
        FUN_1400b7480(&local_e8,lVar6);
        psVar3 = (short *)FUN_14034bdd0();
        if (psVar3 == (short *)0x0) {
            if (local_d8 != local_d0) {
                *local_d8 = 0;
                local_d0 = local_d8;
            }
        }
        else {
            sVar1 = *psVar3;
            while (sVar1 != 0) {
                lVar2 = lVar2 + 1;
                sVar1 = psVar3[lVar2];
            }
            FUN_14001c480(local_e0);
        }
        lVar2 = FUN_1400b7660(&local_e8);
        lVar2 = FUN_14018f0e0(local_108,*(undefined8 *)(lVar2 + 8));
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
        if (local_100 != 0) {
            FUN_14018b900(local_100,0);
        }
        if (local_28._0_8_ != 0) {
            FUN_14018b900(local_28._0_8_,0);
        }
        FUN_1400b7390(&local_e8);
    }
    return 1;
}



undefined8 FUN_1406b9de0(longlong param_1)

{
    ulonglong uVar1;
    longlong lVar2;
    short *psVar3;
    longlong lVar4;
    undefined local_28 [8];
    longlong local_20;

    lVar2 = FUN_140056ab0(param_1,1);
    if ((((lVar2 == 0) || (*(longlong *)(lVar2 + 8) == 0)) ||
         (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 8) + 8), lVar2 == 0)) ||
        (((uVar1 = *(ulonglong *)(*(longlong *)(lVar2 + 8) + 0x18), uVar1 == 0 ||
                                                                    (DAT_140c3fe70 < uVar1)) || (DAT_140c3fe68 + uVar1 == 0)))) {
        LAB_1406b9e9c:
        lVar2 = FUN_14018f0e0(local_28,&DAT_1409f6eac);
        if (*(longlong *)(lVar2 + 8) == 0) {
            LAB_1406b9eb6:
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            goto LAB_1406b9ee2;
        }
        lVar4 = -1;
        do {
            lVar4 = lVar4 + 1;
        } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar4) != '\0');
    }
    else {
        if (uVar1 == 0) {
            psVar3 = (short *)0x0;
        }
        else if (DAT_140c3fe70 < uVar1) {
            psVar3 = (short *)0x0;
        }
        else {
            psVar3 = (short *)(DAT_140c3fe68 + uVar1);
        }
        if (*psVar3 == 0) goto LAB_1406b9e9c;
        if (uVar1 == 0) {
            lVar2 = 0;
        }
        else if (DAT_140c3fe70 < uVar1) {
            lVar2 = 0;
        }
        else {
            lVar2 = DAT_140c3fe68 + uVar1;
        }
        lVar2 = FUN_14018f0e0(local_28,lVar2);
        if (*(longlong *)(lVar2 + 8) == 0) goto LAB_1406b9eb6;
        lVar4 = -1;
        do {
            lVar4 = lVar4 + 1;
        } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar4) != '\0');
    }
    FUN_140058710(param_1);
    LAB_1406b9ee2:
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
}



undefined8 FUN_1406b9f00(longlong param_1)

{
    ulonglong uVar1;
    longlong lVar2;
    short *psVar3;
    longlong lVar4;
    undefined local_28 [8];
    longlong local_20;

    lVar2 = FUN_140056ab0(param_1,1);
    if ((((lVar2 == 0) || (*(longlong *)(lVar2 + 8) == 0)) ||
         (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 8) + 8), lVar2 == 0)) ||
        (((uVar1 = *(ulonglong *)(*(longlong *)(lVar2 + 8) + 0x20), uVar1 == 0 ||
                                                                    (DAT_140c3fe70 < uVar1)) || (DAT_140c3fe68 + uVar1 == 0)))) {
        LAB_1406b9fbc:
        lVar2 = FUN_14018f0e0(local_28,&DAT_1409f6f44);
        if (*(longlong *)(lVar2 + 8) == 0) {
            LAB_1406b9fd6:
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            goto LAB_1406ba002;
        }
        lVar4 = -1;
        do {
            lVar4 = lVar4 + 1;
        } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar4) != '\0');
    }
    else {
        if (uVar1 == 0) {
            psVar3 = (short *)0x0;
        }
        else if (DAT_140c3fe70 < uVar1) {
            psVar3 = (short *)0x0;
        }
        else {
            psVar3 = (short *)(DAT_140c3fe68 + uVar1);
        }
        if (*psVar3 == 0) goto LAB_1406b9fbc;
        if (uVar1 == 0) {
            lVar2 = 0;
        }
        else if (DAT_140c3fe70 < uVar1) {
            lVar2 = 0;
        }
        else {
            lVar2 = DAT_140c3fe68 + uVar1;
        }
        lVar2 = FUN_14018f0e0(local_28,lVar2);
        if (*(longlong *)(lVar2 + 8) == 0) goto LAB_1406b9fd6;
        lVar4 = -1;
        do {
            lVar4 = lVar4 + 1;
        } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar4) != '\0');
    }
    FUN_140058710(param_1);
    LAB_1406ba002:
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
}



undefined8 FUN_1406ba020(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    int iVar3;
    int iVar4;

    lVar2 = FUN_140056ab0();
    if (((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) &&
        (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 8) + 8), lVar2 != 0)) {
        iVar4 = *(int *)(lVar2 + 0x18);
        iVar3 = -1;
        if (iVar4 != -1) {
            iVar3 = iVar4;
        }
        pdVar1 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar1 + 1) = 3;
        iVar4 = 0;
        if (iVar3 != 0) {
            iVar4 = iVar3;
        }
        *pdVar1 = (double)iVar4;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406ba0b0(longlong param_1)

{
    double *pdVar1;
    uint uVar2;
    int iVar3;
    longlong lVar4;
    undefined8 *puVar5;
    int iVar6;
    int iVar7;
    longlong lVar8;

    lVar4 = FUN_140056ab0(param_1,1,"Game.RewardTrack");
    lVar8 = 0;
    iVar7 = 0;
    if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
        lVar8 = *(longlong *)(*(longlong *)(lVar4 + 8) + 8);
    }
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (((puVar5 < *(undefined8 **)(param_1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
        uVar2 = FUN_140056d60();
    }
    else {
        uVar2 = 0xffffffff;
    }
    if ((lVar8 != 0) && (-1 < (int)uVar2)) {
        iVar6 = -1;
        if (*(int *)(lVar8 + 0x18) != -1) {
            iVar6 = *(int *)(lVar8 + 0x18);
        }
        iVar3 = iVar7;
        if (iVar6 != 0) {
            iVar3 = iVar6;
        }
        if ((int)uVar2 < iVar3) {
            if ((ulonglong)uVar2 < *(ulonglong *)(lVar8 + 0x18)) {
                iVar7 = *(int *)(*(longlong *)(lVar8 + 0x10) + (ulonglong)uVar2 * 4);
            }
            pdVar1 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar1 + 1) = 3;
            *pdVar1 = (double)iVar7;
            goto LAB_1406ba16c;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    LAB_1406ba16c:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406ba190(longlong param_1)

{
    int iVar1;
    int *piVar2;
    uint *puVar3;
    undefined4 *puVar4;
    byte bVar5;
    longlong lVar6;

    lVar6 = FUN_140056ab0(param_1,1,"Game.RewardTrack");
    if (((lVar6 != 0) && (*(longlong *)(lVar6 + 8) != 0)) &&
        (lVar6 = *(longlong *)(*(longlong *)(lVar6 + 8) + 8), lVar6 != 0)) {
        piVar2 = *(int **)(lVar6 + 8);
        iVar1 = piVar2[1];
        if (((4 < iVar1) ||
             (lVar6 = *(longlong *)(DAT_140c65a38 + 0xb8 + (longlong)iVar1 * 8), lVar6 == 0)) ||
            (bVar5 = 1, **(int **)(*(longlong *)(lVar6 + 8) + 8) != *piVar2)) {
            bVar5 = 0;
        }
        puVar3 = *(uint **)(param_1 + 0x10);
        puVar3[2] = 1;
        *puVar3 = (uint)bVar5;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar4 = *(undefined4 **)(param_1 + 0x10);
    *puVar4 = 0;
    puVar4[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406ba240(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    int iVar3;
    longlong lVar4;

    lVar4 = FUN_140056ab0(param_1,1,"Game.RewardTrack");
    if (((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) &&
        (*(longlong *)(*(longlong *)(lVar4 + 8) + 8) != 0)) {
        iVar3 = FUN_1404d1d50(DAT_140c65a38);
        puVar1 = *(uint **)(param_1 + 0x10);
        puVar1[2] = 1;
        *puVar1 = (uint)(iVar3 != 0);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    *puVar2 = 0;
    puVar2[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406ba2d0(longlong param_1)

{
    uint uVar1;
    uint *puVar2;
    undefined4 *puVar3;
    longlong lVar4;

    lVar4 = FUN_140056ab0(param_1,1,"Game.RewardTrack");
    if (((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) &&
        (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + 8), lVar4 != 0)) {
        puVar2 = *(uint **)(param_1 + 0x10);
        uVar1 = *(uint *)(*(longlong *)(lVar4 + 8) + 0x54);
        puVar2[2] = 1;
        *puVar2 = uVar1 & 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar3 = *(undefined4 **)(param_1 + 0x10);
    *puVar3 = 0;
    puVar3[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406bb870(longlong param_1)

{
    uint uVar1;
    int iVar2;
    longlong lVar3;
    double *pdVar4;
    longlong lVar5;
    longlong local_res10;

    lVar5 = FUN_140056ab0(param_1,1,"Game.RewardTrack");
    if (((lVar5 != 0) && (*(longlong *)(lVar5 + 8) != 0)) &&
        (lVar5 = *(longlong *)(*(longlong *)(lVar5 + 8) + 8), lVar5 != 0)) {
        lVar3 = *(longlong *)(DAT_140c65a38 + 0xa0);
        uVar1 = **(uint **)(lVar5 + 8);
        local_res10 = lVar3;
        lVar5 = *(longlong *)(lVar3 + 8);
        while (lVar5 != 0) {
            if (*(uint *)(lVar5 + 0x20) < uVar1) {
                lVar5 = *(longlong *)(lVar5 + 0x18);
            }
            else {
                local_res10 = lVar5;
                lVar5 = *(longlong *)(lVar5 + 0x10);
            }
        }
        if ((local_res10 == lVar3) || (uVar1 < *(uint *)(local_res10 + 0x20))) {
            local_res10 = lVar3;
        }
        if ((local_res10 != lVar3) && (*(longlong *)(local_res10 + 0x28) != 0)) {
            iVar2 = *(int *)(*(longlong *)(local_res10 + 0x28) + 0x24);
            pdVar4 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar4 + 1) = 3;
            *pdVar4 = (double)iVar2;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406bb960(longlong param_1)

{
    int iVar1;
    undefined4 uVar2;
    longlong lVar3;
    undefined8 *puVar4;
    longlong lVar5;
    int iVar6;
    int iVar7;

    lVar3 = FUN_140056ab0(param_1,1,"Game.RewardTrack");
    lVar5 = 0;
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 8) + 8);
    }
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (((puVar4 < *(undefined8 **)(param_1 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
        iVar1 = FUN_140056d60(param_1,2);
    }
    else {
        iVar1 = -1;
    }
    if ((lVar5 != 0) && (-1 < iVar1)) {
        iVar6 = -1;
        if (*(int *)(lVar5 + 0x18) != -1) {
            iVar6 = *(int *)(lVar5 + 0x18);
        }
        iVar7 = 0;
        if (iVar6 != 0) {
            iVar7 = iVar6;
        }
        if (iVar1 < iVar7) {
            puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20);
            uVar2 = 0xffffffff;
            if (((puVar4 < *(undefined8 **)(param_1 + 0x10)) &&
                 (uVar2 = 0xffffffff, puVar4 != &DAT_140a12138)) &&
                (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x28))) {
                uVar2 = FUN_140056d60(param_1,3);
            }
            lVar5 = FUN_1404d1b20(DAT_140c65a38,**(undefined4 **)(lVar5 + 8));
            if (lVar5 != 0) {
                FUN_1404d1490(lVar5,iVar1,uVar2);
                return 0;
            }
        }
    }
    FUN_1403cc530(DAT_140c65898,0x8b);
    return 0;
}



undefined8 FUN_1406bba80(longlong param_1)

{
    longlong lVar1;
    undefined8 uVar2;

    lVar1 = FUN_140056ab0(param_1,1,"Game.RewardTrack");
    if (((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) &&
        (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 8) + 8), lVar1 != 0)) {
        if (*(longlong *)(lVar1 + 0x20) == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
        uVar2 = FUN_1404338e0(param_1);
        return uVar2;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406bbb00(longlong param_1)

{
    longlong lVar1;
    undefined8 uVar2;

    lVar1 = FUN_140056ab0(param_1,1,"Game.RewardTrack");
    if (((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) &&
        (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 8) + 8), lVar1 != 0)) {
        if ((*(longlong *)(lVar1 + 0x30) != 0) && (**(longlong **)(lVar1 + 0x28) != 0)) {
            uVar2 = FUN_1404338e0(param_1);
            return uVar2;
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406bbb90(longlong param_1)

{
    undefined8 *puVar1;
    int iVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    ulonglong uVar6;
    undefined **local_28;
    uint local_20;
    longlong local_18;
    undefined4 local_10;

    lVar3 = FUN_140056ab0(param_1,1,"Game.RewardTrack");
    if (((lVar3 == 0) || (*(longlong *)(lVar3 + 8) == 0)) ||
        (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 8) + 8), lVar3 == 0)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    else {
        if (*(longlong *)(lVar3 + 0x30) != 0) {
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
            local_20 = FUN_1400578c0(param_1);
            uVar6 = 0;
            if (*(longlong *)(lVar3 + 0x30) != 0) {
                do {
                    iVar2 = FUN_1404338e0(param_1,*(undefined8 *)(*(longlong *)(lVar3 + 0x28) + uVar6 * 8));
                    if (iVar2 != 0) {
                        FUN_1400fb470(&local_28);
                        *(longlong *)(local_18 + 0x10) = *(longlong *)(local_18 + 0x10) + -0x10;
                        param_1 = local_18;
                    }
                    uVar6 = uVar6 + 1;
                } while (uVar6 < *(ulonglong *)(lVar3 + 0x30));
            }
            uVar6 = (ulonglong)local_20;
            puVar5 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar6);
            puVar1 = *(undefined8 **)(param_1 + 0x10);
            uVar4 = *puVar5;
            *puVar1 = uVar4;
            *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar5 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_1400579e0(param_1,uVar4,uVar6 & 0xffffffff);
            return 1;
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406bbe30(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong *plVar3;

    lVar2 = FUN_140056ab0(param_1,1,"Game.RewardTrack");
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



undefined8 FUN_1406bbeb0(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    bool bVar6;

    lVar3 = FUN_140056ab0(param_1,1,"Game.RewardTrack");
    lVar4 = 0;
    lVar5 = lVar4;
    if (lVar3 != 0) {
        lVar5 = *(longlong *)(lVar3 + 8);
    }
    lVar3 = FUN_140056ab0(param_1,2,"Game.RewardTrack");
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



undefined8 FUN_1406bc040(longlong param_1,longlong param_2)

{
    longlong *plVar1;
    undefined4 local_res8 [8];

    if ((*(longlong *)(param_1 + 0x18) != param_2) && (*(float *)(param_2 + 0x288) <= 0.0)) {
        return 0;
    }
    if (((*(uint *)(param_2 + 0x1b0) >> 0x1c & 1) != 0) &&
        (plVar1 = *(longlong **)(param_2 + 0x3b0), plVar1 != (longlong *)0x0)) {
        local_res8[0] = 0;
        (**(code **)(*plVar1 + 8))(plVar1,local_res8);
    }
    return 1;
}



void FUN_1406bc0b0(undefined8 param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 local_18;
    undefined4 local_10;

    lVar1 = *(longlong *)(param_2 + 0x20);
    local_18 = FUN_140062650(param_2,"Apollo.MiniMapWindow",0x14);
    local_10 = 4;
    FUN_14005e8e0(param_2,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_2 + 0x10));
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
    FUN_140058bf0(param_2,0xfffffffe);
    return;
}



// WARNING: Removing unreachable block (ram,0x0001406bc461)

void FUN_1406bc120(longlong param_1)

{
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
    longlong alStackX16 [3];
    undefined8 uStack40;
    ulonglong uVar13;
    ulonglong uVar17;

    uStack40 = 0x1406bc131;
    lVar4 = FUN_1407f0f60();
    lVar4 = -lVar4;
    *(ulonglong *)(&stack0x00004010 + lVar4) =
            DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffe0 + lVar4);
    lVar2 = *(longlong *)(param_1 + 400);
    *(undefined8 *)(&stack0x00004058 + lVar4) = unaff_RBX;
    *(undefined8 *)(&stack0x00004020 + lVar4) = unaff_R14;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406bc172;
    FUN_1407e4830((longlong)alStackX16 + lVar4);
    uVar15 = 0;
    uVar9 = uVar15;
    uVar13 = uVar15;
    uVar17 = uVar15;
    do {
        uVar12 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar12;
        uVar16 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar16;
        *(undefined8 *)((longlong)alStackX16 + uVar9 + lVar4) =
                *(undefined8 *)((longlong)&PTR_DAT_140c56a80 + uVar9);
        puVar8 = (undefined8 *)((longlong)&PTR_FUN_140c56a88 + uVar9);
        uVar9 = uVar9 + 0x10;
        *(undefined8 *)((longlong)alStackX16 + uVar9 + lVar4 + -8) = *puVar8;
    } while (uVar12 < 0x97);
    lVar14 = (longlong)&PTR_s_AddObject_140c5e2a0 +
                        ((longlong)(int)uVar16 * -0x10 - ((longlong)alStackX16 + lVar4));
    puVar8 = (undefined8 *)((longlong)alStackX16 + (longlong)(int)uVar16 * 0x10 + lVar4);
    uVar9 = uVar15;
    do {
        uVar12 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar12;
        *puVar8 = *(undefined8 *)(lVar14 + (longlong)puVar8);
        puVar8[1] = *(undefined8 *)(lVar14 + -8 + (longlong)(puVar8 + 2));
        puVar8 = puVar8 + 2;
    } while (uVar12 < 0x19);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406bc20f;
    LuaElementLoaderOrSo(lVar2,"Apollo.MiniMapWindow");
    puVar8 = *(undefined8 **)(lVar2 + 0x10);
    iVar1 = *(int *)(puVar8 + -1);
    if (iVar1 == 2) {
        LAB_1406bc231:
        if (*(int *)(puVar8 + -1) == 2) {
            LAB_1406bc24d:
            uVar9 = puVar8[-2];
        }
        else if (*(int *)(puVar8 + -1) == 7) {
            uVar9 = puVar8[-2] + 0x30;
        }
        else {
            uVar9 = 0;
        }
    }
    else {
        if ((iVar1 == 5) || (iVar1 == 6)) goto LAB_1406bc24d;
        if (iVar1 == 7) goto LAB_1406bc231;
        uVar9 = uVar15;
        if (iVar1 == 8) goto LAB_1406bc24d;
    }
    *puVar8 = puVar8[-2];
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar8 + -1);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    lVar14 = *(longlong *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406bc27c;
    uVar5 = FUN_140062650(lVar2,"__index",7);
    lVar11 = *(longlong *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar5;
    *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406bc2a2;
    FUN_14005ea50(lVar2,lVar14 + -0x20,(longlong)alStackX16 + lVar4 + -0x10,lVar11 + -0x10);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
    lVar11 = *(longlong *)((longlong)alStackX16 + lVar4);
    lVar6 = *(longlong *)(lVar2 + 0x10);
    lVar14 = (longlong)alStackX16 + lVar4;
    if (lVar11 != 0) {
        *(undefined8 *)(&stack0x00004060 + lVar4) = unaff_RBP;
        do {
            uVar5 = *(undefined8 *)(lVar14 + 8);
            if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406bc2ea;
                FUN_14005e2c0(lVar2);
            }
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406bc30f;
            lVar6 = FUN_140060ab0(lVar2,0);
            *(undefined8 *)(lVar6 + 0x20) = uVar5;
            plVar3 = *(longlong **)(lVar2 + 0x10);
            *plVar3 = lVar6;
            *(undefined4 *)(plVar3 + 1) = 6;
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406bc333;
            uVar5 = FUN_1400580e0(lVar2,0xfffffffe);
            lVar6 = -1;
            do {
                lVar6 = lVar6 + 1;
            } while (*(char *)(lVar11 + lVar6) != '\0');
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406bc354;
            uVar7 = FUN_140062650(lVar2,lVar11);
            lVar11 = *(longlong *)(lVar2 + 0x10);
            *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar7;
            *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406bc379;
            FUN_14005ea50(lVar2,uVar5,(longlong)alStackX16 + lVar4 + -0x10,lVar11 + -0x10);
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
            lVar11 = *(longlong *)(lVar14 + 0x10);
            lVar6 = *(longlong *)(lVar2 + 0x10);
            lVar14 = lVar14 + 0x10;
        } while (lVar11 != 0);
    }
    lVar14 = *(longlong *)(lVar2 + 0x20);
    *(longlong *)(lVar2 + 0x10) = lVar6 + -0x10;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406bc3bc;
    uVar7 = FUN_140062650(lVar2,"Apollo.Window",0xd);
    uVar5 = *(undefined8 *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar7;
    *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406bc3e1;
    FUN_14005e8e0(lVar2,lVar14 + 0xa0,(longlong)alStackX16 + lVar4 + -0x10,uVar5);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    lVar14 = *(longlong *)(lVar2 + 0x10);
    iVar1 = *(int *)(lVar14 + -8);
    puVar10 = (ulonglong *)(lVar14 + -0x10);
    if (iVar1 == 2) {
        LAB_1406bc41c:
        if (*(int *)(lVar14 + -8) != 2) {
            if (*(int *)(lVar14 + -8) == 7) {
                uVar15 = *puVar10 + 0x30;
            }
            goto LAB_1406bc435;
        }
    }
    else if ((iVar1 != 5) && (iVar1 != 6)) {
        if (iVar1 == 7) goto LAB_1406bc41c;
        if (iVar1 != 8) goto LAB_1406bc435;
    }
    uVar15 = *puVar10;
    LAB_1406bc435:
    *(ulonglong **)(lVar2 + 0x10) = puVar10;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406bc444;
    FUN_1400ed720(param_1,uVar9,uVar15);
    *(undefined **)((longlong)alStackX16 + lVar4 + -0x10) = &LAB_1406c2e00;
    *(code **)((longlong)&pcStackX8 + lVar4) = FUN_140001b30;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406bc47b;
    FUN_1400f85d0(param_1 + 0xa80,L"MiniMapWindow",(longlong)alStackX16 + lVar4 + -0x10);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406bc48b;
    FUN_1407db4f0(*(ulonglong *)(&stack0x00004010 + lVar4) ^
                  (ulonglong)(&stack0xffffffffffffffe0 + lVar4));
    return;
}



undefined8 *
FUN_1406bc4a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
              undefined8 param_5,undefined8 param_6)

{
    undefined8 *puVar1;
    longlong lVar2;
    char cVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    undefined8 uVar7;
    undefined8 uVar8;
    undefined4 uVar10;
    ulonglong uVar9;
    ulonglong uVar11;
    undefined8 in_stack_ffffffffffffff88;
    uint uVar13;
    undefined8 *puVar12;
    undefined8 local_68;
    undefined **local_60;
    undefined8 local_58;
    LPVOID local_50;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;

    uVar13 = (uint)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
    uVar11 = 0;
    FUN_1400c5920();
    *param_1 = &PTR_LAB_140b70300;
    FUN_140771790(param_1 + 0x80,param_2);
    param_1[0xea] = 0x3f800000;
    param_1[0x114] = 0;
    param_1[0x115] = 0;
    param_1[0x116] = 0;
    param_1[0x117] = 0;
    param_1[0x118] = 0;
    param_1[0x119] = 0;
    param_1[0x11a] = 0;
    param_1[0x11b] = 0;
    param_1[0x11c] = 0;
    param_1[0x122] = 0;
    param_1[0x123] = 0;
    param_1[0x124] = 0;
    param_1[0x125] = 0;
    param_1[0x126] = 0;
    param_1[0x12e] = 0;
    puVar1 = param_1 + 0x121;
    *puVar1 = 0;
    param_1[0x12f] = 0;
    param_1[0x130] = 0;
    param_1[0x131] = 0;
    FUN_1401095e0(param_1 + 0x132);
    FUN_1401095e0(param_1 + 0x138);
    FUN_1401095e0(param_1 + 0x13e);
    FUN_1401095e0(param_1 + 0x144);
    lVar5 = param_1[4];
    param_1[0x36] = param_1[0x36] | 0x40000000;
    if ((lVar5 != 0) &&
        ((param_1[0x132] == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0x134,L"sprMM_PlayerMarker"), cVar3 == '\0')))) {
        lVar5 = FUN_140108e80(lVar5 + 0xf0,L"sprMM_PlayerMarker");
        if (lVar5 != 0) {
            lVar6 = 0;
            do {
                lVar2 = lVar6 + 1;
                lVar6 = lVar6 + 1;
            } while (L"sprMM_PlayerMarker"[lVar2] != L'\0');
            FUN_14001c480(param_1 + 0x134,L"sprMM_PlayerMarker");
        }
        FUN_1401097f0(param_1 + 0x132,lVar5);
    }
    lVar5 = param_1[4];
    if ((lVar5 != 0) &&
        ((param_1[0x138] == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0x13a,L"MiniMapCameraCone"), cVar3 == '\0')))) {
        lVar5 = FUN_140108e80(lVar5 + 0xf0,L"MiniMapCameraCone");
        if (lVar5 != 0) {
            lVar6 = 0;
            do {
                lVar2 = lVar6 + 1;
                lVar6 = lVar6 + 1;
            } while (L"MiniMapCameraCone"[lVar2] != L'\0');
            FUN_14001c480(param_1 + 0x13a,L"MiniMapCameraCone");
        }
        FUN_1401097f0(param_1 + 0x138,lVar5);
    }
    lVar5 = param_1[4];
    if ((lVar5 != 0) &&
        ((param_1[0x13e] == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0x140,L"MiniMapCompass"), cVar3 == '\0')))) {
        lVar5 = FUN_140108e80(lVar5 + 0xf0,L"MiniMapCompass");
        if (lVar5 != 0) {
            lVar6 = 0;
            do {
                lVar2 = lVar6 + 1;
                lVar6 = lVar6 + 1;
            } while (L"MiniMapCompass"[lVar2] != L'\0');
            FUN_14001c480(param_1 + 0x140,L"MiniMapCompass");
        }
        FUN_1401097f0(param_1 + 0x13e,lVar5);
    }
    lVar5 = param_1[4];
    if ((lVar5 != 0) &&
        ((param_1[0x144] == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0x146,L"MiniMapCompassOverlay"), cVar3 == '\0')))) {
        lVar5 = FUN_140108e80(lVar5 + 0xf0,L"MiniMapCompassOverlay");
        if (lVar5 != 0) {
            lVar6 = 0;
            do {
                lVar2 = lVar6 + 1;
                lVar6 = lVar6 + 1;
            } while (L"MiniMapCompassOverlay"[lVar2] != L'\0');
            FUN_14001c480(param_1 + 0x146,L"MiniMapCompassOverlay");
        }
        FUN_1401097f0(param_1 + 0x144,lVar5);
    }
    *(undefined4 *)(param_1 + 0x14a) = 5;
    param_1[0x11d] = 0;
    param_1[0x11e] = 0;
    param_1[0x11f] = 0;
    *(undefined4 *)(param_1 + 0x120) = 0;
    if (param_1[0x4c] == 0) {
        lVar5 = FUN_14018b280(0x70,0);
        if (lVar5 != 0) {
            lVar5 = FUN_1400c5690(lVar5);
        }
        param_1[0x4c] = lVar5;
    }
    if (param_1[0x4c] != 0) {
        *(undefined4 *)(param_1[0x4c] + 0x28) = 0x3e800000;
    }
    if (param_1[0x4c] == 0) {
        lVar5 = FUN_14018b280(0x70);
        if (lVar5 != 0) {
            lVar5 = FUN_1400c5690(lVar5);
        }
        param_1[0x4c] = lVar5;
    }
    if (param_1[0x4c] != 0) {
        *(undefined4 *)(param_1[0x4c] + 0x24) = 0x3e800000;
    }
    lVar5 = param_1[2];
    if (lVar5 != 0) {
        if (*(longlong *)(lVar5 + 0x260) == 0) {
            lVar6 = FUN_14018b280(0x70);
            if (lVar6 != 0) {
                lVar6 = FUN_1400c5690(lVar6);
            }
            *(longlong *)(lVar5 + 0x260) = lVar6;
        }
        if (*(longlong *)(lVar5 + 0x260) != 0) {
            *(undefined4 *)(*(longlong *)(lVar5 + 0x260) + 0x28) = 0x3e800000;
        }
        lVar5 = param_1[2];
        if (*(longlong *)(lVar5 + 0x260) == 0) {
            lVar6 = FUN_14018b280(0x70);
            if (lVar6 != 0) {
                lVar6 = FUN_1400c5690(lVar6);
            }
            *(longlong *)(lVar5 + 0x260) = lVar6;
        }
        if (*(longlong *)(lVar5 + 0x260) != 0) {
            *(undefined4 *)(*(longlong *)(lVar5 + 0x260) + 0x24) = 0x3e800000;
        }
    }
    uVar8 = 0;
    param_1[0xee] = 0xffffffffffffffff;
    lVar5 = FUN_1401a6b80(param_6,L"CircularItems");
    if (lVar5 != 0) {
        uVar7 = FUN_1401a4f40(lVar5 + 0x20);
        FUN_1407df428(uVar7,&DAT_1409e4114);
    }
    *(undefined4 *)(param_1 + 0xeb) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x11d) = 0;
    lVar5 = FUN_1401a6b80(param_6,L"ItemRadius");
    if (lVar5 != 0) {
        uVar7 = FUN_1401a4f40(lVar5 + 0x20);
        FUN_1407df428(uVar7,&DAT_1409e441c);
    }
    *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0xeb);
    uVar10 = DAT_140c77760;
    *(undefined4 *)(param_1 + 0x11e) = DAT_140c77764;
    *(undefined4 *)((longlong)param_1 + 0x8ec) = uVar10;
    *(int *)((longlong)param_1 + 0x8f4) =
            *(int *)((longlong)param_1 + 0x2d4) - *(int *)((longlong)param_1 + 0x2cc);
    *(int *)(param_1 + 0x11f) = *(int *)(param_1 + 0x5b) - *(int *)(param_1 + 0x5a);
    lVar5 = FUN_1401a6b80(param_6,L"MapOrientation");
    if (lVar5 != 0) {
        uVar7 = FUN_1401a4f40(lVar5 + 0x20);
        FUN_1407df428(uVar7,&DAT_1409e4114,(longlong)param_1 + 0x8fc);
    }
    lVar5 = FUN_1401a6b80(param_6,L"Mask");
    if (lVar5 != 0) {
        uVar8 = FUN_1401a4f40(lVar5 + 0x20);
    }
    uVar11 = uVar11 & 0xffffffff00000000;
    param_4 = param_4 & 0xffffffff00000000;
    iVar4 = (**(code **)(*DAT_140c65670 + 0x58))
            (DAT_140c65670,1,1,1,param_4,CONCAT44(param_5._4_4_,1),uVar11,0x100,
             (ulonglong)uVar13 << 0x20,param_1 + 0x124);
    uVar10 = (undefined4)(param_4 >> 0x20);
    if (iVar4 < 0) {
        local_60 = &PTR_LAB_140b5e648;
        local_58 = 0;
        local_50 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_60);
        local_48 = local_60;
        local_68 = 0x141e32b40;
        local_38 = local_50;
        local_40 = local_58;
        iVar4 = FUN_140197770(0xd,&local_68,&local_48);
        local_60 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_50);
        if (iVar4 != 0) {
            DebugBreak();
        }
    }
    uVar11 = uVar11 & 0xffffffff00000000;
    uVar9 = CONCAT44(uVar10,1);
    puVar12 = puVar1;
    iVar4 = (**(code **)(*DAT_140c65670 + 0x50))(DAT_140c65670,uVar8,0,1,uVar9,0x100,uVar11,0,puVar1);
    if ((iVar4 < 0) &&
        (iVar4 = (**(code **)(*DAT_140c65670 + 0x58))
                (DAT_140c65670,1,1,1,uVar9 & 0xffffffff00000000,1,
                 uVar11 & 0xffffffff00000000,0x100,(ulonglong)puVar12 & 0xffffffff00000000,
                 puVar1), iVar4 < 0)) {
        local_60 = &PTR_LAB_140b5e648;
        local_58 = 0;
        local_50 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_60);
        local_48 = local_60;
        local_68 = 0x141e32b90;
        local_38 = local_50;
        local_40 = local_58;
        iVar4 = FUN_140197770(0xd,&local_68,&local_48);
        local_60 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_50);
        if (iVar4 != 0) {
            DebugBreak();
        }
    }
    iVar4 = (**(code **)(*DAT_140c65670 + 0x98))
            (DAT_140c65670,L"Shaders\\SimpleCbPS.sho",param_1 + 0x12f);
    if (iVar4 < 0) {
        local_60 = &PTR_LAB_140b5e648;
        local_58 = 0;
        local_50 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_60);
        local_48 = local_60;
        local_68 = 0x141e32af0;
        local_38 = local_50;
        local_40 = local_58;
        iVar4 = FUN_140197770(0xd,&local_68,&local_48);
        local_60 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_50);
        if (iVar4 != 0) {
            DebugBreak();
        }
    }
    iVar4 = (**(code **)(*DAT_140c65670 + 0x98))
            (DAT_140c65670,L"Shaders\\UIOverlayMaskPS.sho",param_1 + 0x130);
    if (iVar4 < 0) {
        local_60 = &PTR_LAB_140b5e648;
        local_58 = 0;
        local_50 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_60);
        local_48 = local_60;
        local_68 = 0x141e32a70;
        local_38 = local_50;
        local_40 = local_58;
        iVar4 = FUN_140197770(0xd,&local_68,&local_48);
        local_60 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_50);
        if (iVar4 != 0) {
            DebugBreak();
        }
    }
    FUN_1406bfc00(param_1);
    FUN_1406bd0d0(param_1);
    return param_1;
}



undefined8 FUN_1406bcd80(undefined8 param_1,ulonglong param_2)

{
    FUN_1406bcdc0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_1406bcdc0(undefined8 *param_1)

{
    longlong **pplVar1;
    int iVar2;
    undefined8 *puVar3;

    *param_1 = &PTR_LAB_140b70300;
    FUN_140774790();
    if ((longlong *)param_1[0x121] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x121] + 8))();
        param_1[0x121] = 0;
    }
    if ((longlong *)param_1[0x122] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x122] + 8))();
        param_1[0x122] = 0;
    }
    if ((longlong *)param_1[0x123] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x123] + 8))();
        param_1[0x123] = 0;
    }
    if ((longlong *)param_1[0x125] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x125] + 8))();
        param_1[0x125] = 0;
    }
    if ((longlong *)param_1[0x124] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x124] + 8))();
        param_1[0x124] = 0;
    }
    if ((longlong *)param_1[0x126] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x126] + 8))();
        param_1[0x126] = 0;
    }
    if ((longlong *)param_1[0x144] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x144] + 8))();
        param_1[0x144] = 0;
    }
    if (param_1[0x147] != 0) {
        FUN_14018b900(param_1[0x147],0);
    }
    if ((longlong *)param_1[0x13e] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x13e] + 8))();
        param_1[0x13e] = 0;
    }
    if (param_1[0x141] != 0) {
        FUN_14018b900(param_1[0x141],0);
    }
    if ((longlong *)param_1[0x138] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x138] + 8))();
        param_1[0x138] = 0;
    }
    if (param_1[0x13b] != 0) {
        FUN_14018b900(param_1[0x13b],0);
    }
    if ((longlong *)param_1[0x132] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x132] + 8))();
        param_1[0x132] = 0;
    }
    if (param_1[0x135] != 0) {
        FUN_14018b900(param_1[0x135],0);
    }
    if ((longlong *)param_1[0x130] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x130] + 8))();
    }
    if ((longlong *)param_1[0x12f] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x12f] + 8))();
    }
    puVar3 = param_1 + 0x11d;
    iVar2 = 8;
    do {
        pplVar1 = (longlong **)(puVar3 + -1);
        puVar3 = puVar3 + -1;
        if (*pplVar1 != (longlong *)0x0) {
            (**(code **)(**pplVar1 + 8))();
        }
        iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    FUN_140771ad0(param_1 + 0x80);
    FUN_1400c6030(param_1);
    return;
}



void FUN_1406bcfb0(longlong param_1)

{
    uint uVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    undefined4 uVar9;

    uVar9 = 0x40000000;
    uVar1 = *(uint *)(param_1 + 0x98c);
    if (*(uint *)(param_1 + 0x98c) < *(uint *)(param_1 + 0x988)) {
        uVar1 = *(uint *)(param_1 + 0x988);
    }
    if (DAT_140c4ad08 * 2.0 < (float)(ulonglong)uVar1 * *(float *)(param_1 + 0x750)) {
        fVar3 = -1.0;
        fVar4 = 100000.0;
        fVar6 = (DAT_140c4ad08 * 2.0) / (float)(ulonglong)uVar1;
        fVar5 = *(float *)(param_1 + 0x754);
        fVar7 = 0.25;
        fVar8 = 1.0;
        *(float *)(param_1 + 0x750) = fVar6;
        do {
            fVar2 = (float)FUN_1408fbfc0(uVar9,fVar3);
            fVar2 = (fVar2 - fVar6) * (fVar2 - fVar6);
            if (fVar2 < fVar4) {
                fVar4 = fVar2;
                fVar5 = fVar3;
            }
            fVar3 = fVar3 + fVar7;
        } while (fVar3 <= fVar8);
        *(float *)(param_1 + 0x754) = fVar5;
    }
    return;
}



undefined8 FUN_1406bd0d0(longlong param_1)

{
    longlong **pplVar1;
    longlong **pplVar2;
    longlong **pplVar3;
    longlong **pplVar4;
    undefined4 uVar5;
    undefined4 *puVar6;
    longlong lVar7;
    int iVar8;
    int iVar9;
    undefined8 local_res8;
    undefined **local_68;
    undefined8 local_60;
    LPVOID local_58;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;

    if ((*(byte *)(param_1 + 0x1d) & 0x80) == 0) {
        puVar6 = (undefined4 *)FUN_1400cb0e0();
        *(undefined4 *)(param_1 + 0x18c) = *puVar6;
        *(undefined4 *)(param_1 + 400) = puVar6[1];
        *(undefined4 *)(param_1 + 0x194) = puVar6[2];
        *(undefined4 *)(param_1 + 0x198) = puVar6[3];
        *(byte *)(param_1 + 0x1d) = *(byte *)(param_1 + 0x1d) | 0x80;
        lVar7 = param_1;
        do {
            if (*(int *)(lVar7 + 0x188) == 0) break;
            *(undefined4 *)(lVar7 + 0x188) = 0;
            lVar7 = *(longlong *)(lVar7 + 0x10);
        } while (lVar7 != 0);
    }
    iVar9 = *(int *)(param_1 + 0x194) - *(int *)(param_1 + 0x18c);
    iVar8 = *(int *)(param_1 + 0x198) - *(int *)(param_1 + 400);
    if (0xfff < iVar9 - 1U) {
        iVar9 = 1;
    }
    if (0xfff < iVar8 - 1U) {
        iVar8 = 1;
    }
    if ((*(int *)(param_1 + 0x98c) != iVar9) || (*(int *)(param_1 + 0x988) != iVar8)) {
        *(int *)(param_1 + 0x98c) = iVar9;
        *(int *)(param_1 + 0x988) = iVar8;
        uVar5 = DAT_140c77764;
        *(undefined4 *)(param_1 + 0x8ec) = DAT_140c77760;
        *(undefined4 *)(param_1 + 0x8f0) = uVar5;
        pplVar1 = (longlong **)(param_1 + 0x910);
        *(int *)(param_1 + 0x8f4) = *(int *)(param_1 + 0x2d4) - *(int *)(param_1 + 0x2cc);
        *(int *)(param_1 + 0x8f8) = *(int *)(param_1 + 0x2d8) - *(int *)(param_1 + 0x2d0);
        if (*pplVar1 != (longlong *)0x0) {
            (**(code **)(**pplVar1 + 8))();
            *pplVar1 = (longlong *)0x0;
        }
        pplVar2 = (longlong **)(param_1 + 0x918);
        if (*pplVar2 != (longlong *)0x0) {
            (**(code **)(**pplVar2 + 8))();
            *pplVar2 = (longlong *)0x0;
        }
        pplVar3 = (longlong **)(param_1 + 0x928);
        if (*pplVar3 != (longlong *)0x0) {
            (**(code **)(**pplVar3 + 8))();
            *pplVar3 = (longlong *)0x0;
        }
        pplVar4 = (longlong **)(param_1 + 0x930);
        if (*pplVar4 != (longlong *)0x0) {
            (**(code **)(**pplVar4 + 8))();
            *pplVar4 = (longlong *)0x0;
        }
        iVar8 = (**(code **)(*DAT_140c65670 + 0x58))
                (DAT_140c65670,*(undefined4 *)(param_1 + 0x98c),
                 *(undefined4 *)(param_1 + 0x988),1,0,5,1,0x100,0,pplVar1);
        if (iVar8 < 0) {
            local_68 = &PTR_LAB_140b5e648;
            local_60 = 0;
            local_58 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720,&local_68);
            local_48 = local_68;
            local_40 = local_60;
            local_38 = local_58;
            local_res8 = 0x141e32980;
            iVar8 = FUN_1401971e0(&DAT_140c8b034,0xd,&local_res8,&local_48);
            local_68 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720,local_58);
            if (iVar8 != 0) {
                DebugBreak();
            }
        }
        iVar8 = (**(code **)(*DAT_140c65670 + 0x58))
                (DAT_140c65670,*(undefined4 *)(param_1 + 0x98c),
                 *(undefined4 *)(param_1 + 0x988),1,0,5,1,0x100,0,pplVar2);
        if (iVar8 < 0) {
            local_68 = &PTR_LAB_140b5e648;
            local_60 = 0;
            local_58 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720,&local_68);
            local_48 = local_68;
            local_40 = local_60;
            local_38 = local_58;
            local_res8 = 0x141e329e0;
            iVar8 = FUN_1401971e0(&DAT_140c8b038,0xd,&local_res8,&local_48);
            local_68 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720,local_58);
            if (iVar8 != 0) {
                DebugBreak();
            }
        }
        iVar8 = (**(code **)(*DAT_140c65670 + 0x58))
                (DAT_140c65670,*(int *)(param_1 + 0x98c) * 2,*(int *)(param_1 + 0x988) * 2,1,0
                        ,3,1,0x100,0,pplVar3);
        if (iVar8 < 0) {
            local_68 = &PTR_LAB_140b5e648;
            local_60 = 0;
            local_58 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720,&local_68);
            local_48 = local_68;
            local_40 = local_60;
            local_38 = local_58;
            local_res8 = 0x141e32ce0;
            iVar8 = FUN_1401971e0(&DAT_140c8b03c,0xd,&local_res8,&local_48);
            local_68 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720,local_58);
            if (iVar8 != 0) {
                DebugBreak();
            }
        }
        iVar8 = (**(code **)(*DAT_140c65670 + 0x58))
                (DAT_140c65670,*(int *)(param_1 + 0x98c) * 2,*(int *)(param_1 + 0x988) * 2,1,
                 0x17,5,0,0x100,0,pplVar4);
        if (iVar8 < 0) {
            local_68 = &PTR_LAB_140b5e648;
            local_60 = 0;
            local_58 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720,&local_68);
            local_48 = local_68;
            local_40 = local_60;
            local_38 = local_58;
            local_res8 = 0x141e32d40;
            iVar8 = FUN_1401971e0(&DAT_140c8b040,0xd,&local_res8,&local_48);
            local_68 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720,local_58);
            if (iVar8 != 0) {
                DebugBreak();
            }
        }
        FUN_1406bcfb0(param_1);
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1406bd700(longlong *param_1)

{
    undefined4 *puVar1;
    undefined auVar2 [12];
    float fVar3;
    float fVar4;
    float fVar5;
    int iVar6;
    longlong *plVar7;
    longlong *plVar8;
    longlong lVar9;
    float *pfVar10;
    float *pfVar11;
    float *pfVar12;
    longlong lVar13;
    float *pfVar14;
    longlong *plVar15;
    ulonglong uVar16;
    longlong lVar17;
    undefined4 extraout_XMM0_Da;
    undefined4 uVar18;
    float fVar19;
    undefined extraout_XMM0 [16];
    float fVar20;
    float fVar21;
    float fVar22;
    undefined4 uVar23;
    undefined4 uVar24;
    undefined4 uVar25;
    undefined4 uVar26;
    undefined auVar27 [16];
    undefined4 uVar28;
    float fVar29;
    undefined4 uVar30;
    float fVar31;
    undefined4 uVar32;
    float fVar33;
    uint uVar34;
    float fVar35;
    float fVar36;
    float fVar37;
    float fVar38;
    float fVar39;
    float fVar40;
    float fVar41;
    float fVar42;
    float fVar43;
    float fVar44;
    undefined auStack3544 [32];
    undefined *local_db8;
    undefined local_d98 [12];
    float fStack3468;
    undefined local_d88 [8];
    float *pfStack3456;
    undefined local_d78 [4];
    undefined auStack3444 [12];
    undefined4 *local_d68;
    float local_d58;
    float fStack3412;
    float fStack3408;
    float fStack3404;
    float local_d48;
    float fStack3396;
    float fStack3392;
    float fStack3388;
    float local_d38;
    float fStack3380;
    float fStack3376;
    float fStack3372;
    float local_d28;
    float fStack3364;
    float fStack3360;
    float fStack3356;
    float local_d18;
    undefined8 uStack3348;
    undefined8 uStack3340;
    float fStack3332;
    undefined8 uStack3328;
    undefined8 local_cf8;
    float fStack3312;
    undefined8 uStack3308;
    undefined4 uStack3300;
    float fStack3296;
    undefined4 uStack3292;
    undefined4 local_cd8;
    undefined4 uStack3284;
    undefined4 uStack3280;
    undefined4 uStack3276;
    undefined4 local_cc8;
    undefined4 uStack3268;
    undefined4 uStack3264;
    undefined4 uStack3260;
    undefined4 local_cb8;
    undefined4 uStack3252;
    undefined4 uStack3248;
    undefined4 uStack3244;
    undefined local_ca8 [64];
    undefined8 local_c68;
    undefined8 uStack3168;
    undefined4 local_c58;
    undefined4 uStack3156;
    undefined4 uStack3152;
    undefined4 uStack3148;
    undefined4 local_c48;
    undefined4 local_c38;
    undefined4 uStack3124;
    undefined4 uStack3120;
    undefined4 uStack3116;
    undefined4 local_c28;
    undefined4 uStack3108;
    undefined4 uStack3104;
    undefined4 uStack3100;
    undefined4 local_c18;
    undefined4 local_c08;
    undefined4 uStack3076;
    undefined4 uStack3072;
    undefined4 uStack3068;
    undefined4 local_bf8;
    undefined4 uStack3060;
    undefined4 uStack3056;
    undefined4 uStack3052;
    undefined4 local_be8;
    float local_bd8 [27];
    undefined4 uStack2924;
    undefined4 local_b68;
    undefined4 uStack2916;
    undefined4 uStack2912;
    undefined4 uStack2908;
    undefined4 local_b58;
    undefined4 local_b48;
    undefined4 uStack2884;
    undefined4 uStack2880;
    undefined4 uStack2876;
    undefined4 local_b38;
    undefined4 uStack2868;
    undefined4 uStack2864;
    undefined4 uStack2860;
    undefined4 local_b28;
    undefined4 local_b18;
    undefined4 uStack2836;
    undefined4 uStack2832;
    undefined4 uStack2828;
    undefined4 local_b08;
    undefined4 uStack2820;
    undefined4 uStack2816;
    undefined4 uStack2812;
    undefined4 local_af8;
    undefined local_ae8 [16];
    undefined local_ad8 [16];
    undefined local_ac8 [16];
    undefined4 local_8c8;
    float local_868;
    float fStack2148;
    float fStack2144;
    float fStack2140;
    float local_858;
    float fStack2132;
    float fStack2128;
    float fStack2124;
    float local_848;
    float fStack2116;
    float fStack2112;
    float fStack2108;
    float local_838;
    float fStack2100;
    float fStack2096;
    float fStack2092;
    float local_828;
    undefined4 uStack2084;
    undefined4 uStack2080;
    undefined4 uStack2076;
    undefined4 local_818;
    float fStack2068;
    undefined4 uStack2064;
    undefined4 uStack2060;
    undefined4 local_808;
    undefined4 uStack2052;
    float fStack2048;
    undefined4 uStack2044;
    float local_7f8 [4];
    float local_7e8 [28];
    float local_778 [196];
    undefined4 *local_468;
    undefined4 *local_460;
    undefined4 *local_458;
    float local_3b8 [44];
    undefined local_308 [8];
    float fStack768;
    float local_2e8;
    float fStack740;
    float fStack736;
    float fStack732;
    undefined local_148 [160];
    ulonglong local_a8;

    local_a8 = DAT_140c0f7b0 ^ (ulonglong)auStack3544;
    lVar9 = *(longlong *)(DAT_140c65898 + 0x6490);
    fVar41 = *(float *)*(undefined (*) [16])(lVar9 + 0x11e0);
    fVar42 = *(float *)(lVar9 + 0x11e4);
    fVar43 = *(float *)(lVar9 + 0x11e8);
    fVar44 = *(float *)(lVar9 + 0x11ec);
    _local_d88 = *(undefined (*) [16])(lVar9 + 0x11e0);
    local_d98._0_8_ = CONCAT44(fVar42 + 0.1,fVar41 + 0.0);
    local_d98 = CONCAT48(fVar43 + 0.0,local_d98._0_8_);
    _local_d98 = CONCAT412(fVar44 + 0.0,local_d98);
    plVar7 = (longlong *)(**(code **)(**(longlong **)(DAT_140c65898 + 0x7248) + 0x1c8))();
    plVar15 = (longlong *)0x0;
    plVar8 = plVar15;
    if (plVar7 != (longlong *)0x0) {
        plVar8 = (longlong *)(**(code **)(*plVar7 + 0x10))(plVar7);
    }
    (**(code **)(*param_1 + 0x180))(param_1);
    if ((longlong *)param_1[0x125] == (longlong *)0x0) goto LAB_1406be654;
    lVar9 = (**(code **)(*(longlong *)param_1[0x125] + 0x18))();
    fVar22 = (float)(ulonglong)*(uint *)(lVar9 + 8);
    lVar9 = (**(code **)(*(longlong *)param_1[0x125] + 0x18))();
    uVar34 = *(uint *)(lVar9 + 4);
    *(float *)(param_1 + 0x128) = (float)(ulonglong)uVar34 * 0.25;
    *(float *)((longlong)param_1 + 0x944) = fVar22 * 0.25;
    *(undefined4 *)(param_1 + 0x129) = 0;
    *(undefined4 *)((longlong)param_1 + 0x94c) = 0;
    *(undefined (*) [16])(param_1 + 0x12a) =
            ZEXT816(CONCAT44(fVar22 * 0.75,(float)(ulonglong)uVar34 * 0.75));
    plVar7 = plVar8;
    if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0xd8))(plVar8);
        lVar9 = FUN_14043ed60();
        if ((lVar9 == 0) ||
            (plVar7 = plVar15, (*(uint *)(*(longlong *)(lVar9 + 8) + 0x1c) & 0x800) == 0)) {
            if ((plVar8 == (longlong *)param_1[0x12e]) &&
                (iVar6 = (**(code **)(*(longlong *)param_1[0x125] + 0x30))(), iVar6 != 0)) {
                uVar28 = *(undefined4 *)(param_1 + 0xea);
                uVar34 = 0x7fffffff;
                auVar27 = divps(CONCAT412(fVar44 - *(float *)((longlong)param_1 + 0x96c),
                                          CONCAT48(fVar43 - *(float *)(param_1 + 0x12d),
                                                   CONCAT44(fVar42 - *(float *)((longlong)param_1 + 0x964),
                                                            fVar41 - *(float *)(param_1 + 300)))),
                                CONCAT412(uVar28,CONCAT48(uVar28,CONCAT44(uVar28,uVar28))));
                fVar22 = (float)(SUB164(auVar27,0) & 0x7fffffff);
                _local_d98 = auVar27;
                lVar9 = (**(code **)(*(longlong *)param_1[0x125] + 0x18))();
                fVar19 = SUB164(auVar27,0);
                fVar39 = 0.24;
                if (fVar22 < (float)(ulonglong)*(uint *)(lVar9 + 4) * 0.24) {
                    fVar22 = (float)((uint)local_d98._8_4_ & uVar34);
                    lVar9 = (**(code **)(*(longlong *)param_1[0x125] + 0x18))();
                    if (fVar22 < (float)(ulonglong)*(uint *)(lVar9 + 8) * fVar39) {
                        *(float *)(param_1 + 0x128) = fVar19 + *(float *)(param_1 + 0x128);
                        *(float *)((longlong)param_1 + 0x944) =
                                local_d98._8_4_ + *(float *)((longlong)param_1 + 0x944);
                        *(float *)(param_1 + 0x12a) = fVar19 + *(float *)(param_1 + 0x12a);
                        *(float *)((longlong)param_1 + 0x954) =
                                local_d98._8_4_ + *(float *)((longlong)param_1 + 0x954);
                        plVar7 = plVar8;
                        goto LAB_1406be645;
                    }
                }
            }
            pfVar10 = (float *)(**(code **)(*plVar8 + 0x70))(plVar8);
            fVar19 = pfStack3456._0_4_;
            fStack3312 = 1.0;
            fVar22 = pfVar10[5];
            _local_d78 = CONCAT412(pfVar10[4] - *pfVar10,
                                   CONCAT48(pfStack3456._0_4_,CONCAT44(fVar22,local_d88._0_4_))) &
                         (undefined  [16])0xffffffffffffffff;
            fStack3408 = local_d88._0_4_ - local_d88._0_4_;
            fStack3392 = fVar22 - pfVar10[1];
            pfStack3456._0_4_ = pfStack3456._0_4_ - pfStack3456._0_4_;
            auVar2 = CONCAT48(pfStack3456._0_4_ * pfStack3456._0_4_,
                              CONCAT44(fStack3392 * fStack3392,fStack3408 * fStack3408));
            _local_d98 = ZEXT1216(auVar2);
            uVar16 = (ulonglong)(fStack3408 * fStack3408 < fStack3392 * fStack3392);
            lVar9 = 1 - uVar16;
            if (*(float *)(local_d98 + uVar16 * 4) <= 0.0 && *(float *)(local_d98 + uVar16 * 4) != 0.0) {
                uVar16 = 2;
            }
            auVar27 = ZEXT416((uint)(*(float *)(local_d88 + (lVar9 + uVar16) * -4 + -4) +
                                     *(float *)(local_d98 + lVar9 * 4))) &
                      (undefined  [16])0xffffffffffffffff;
            fVar39 = SUB164(auVar27,0) + *(float *)(local_d98 + uVar16 * 4);
            auVar27 = CONCAT124(SUB1612(auVar27 >> 0x20,0),fVar39);
            if (fVar39 <= DAT_140c3d7d8) {
                local_d98._0_4_ = 0.0;
                fStack3468 = 0.0;
                local_d98._8_4_ = 0.0;
                fStack3392 = 0.0;
                fStack3408 = 0.0;
            }
            else {
                pfStack3456._0_4_ =
                        SUB164(ZEXT1216(CONCAT48(pfStack3456._0_4_,CONCAT44(fStack3392,fStack3408))) >> 0x40,0)
                        ;
                auVar27 = sqrtps(auVar27,auVar27);
                local_d98._8_4_ = 1.0 / SUB164(auVar27,0);
                fStack3408 = fStack3408 * local_d98._8_4_;
                fStack3392 = fStack3392 * local_d98._8_4_;
                local_d98._8_4_ = pfStack3456._0_4_ * local_d98._8_4_;
                _local_d98 = CONCAT124(auVar2 >> 0x20,fStack3408) & (undefined  [16])0xffffffffffffffff;
            }
            local_d58 = local_d98._8_4_ * 0.0 - fStack3392 * -1.0;
            local_d48 = local_d98._0_4_ * 0.0 - 0.0;
            local_d38 = fStack3392 * 0.0 - local_d98._0_4_ * 0.0;
            fVar20 = fStack3468 * 0.0 - fStack3468 * 0.0;
            _local_d88 = CONCAT412(fVar20,CONCAT48(local_d38,CONCAT44(local_d48,local_d58)));
            fVar39 = local_d38 * local_d38;
            fVar20 = fVar20 * fVar20;
            local_d98._0_8_ = CONCAT44(local_d48 * local_d48,local_d58 * local_d58);
            local_d98 = CONCAT48(fVar39,local_d98._0_8_);
            _local_d98 = CONCAT412(fVar20,local_d98);
            uVar16 = (ulonglong)(local_d58 * local_d58 < local_d48 * local_d48);
            lVar9 = 1 - uVar16;
            if (*(float *)(local_d98 + uVar16 * 4) <= fVar39 &&
                fVar39 != *(float *)(local_d98 + uVar16 * 4)) {
                uVar16 = 2;
            }
            auVar27 = ZEXT416((uint)(*(float *)(local_d88 + (lVar9 + uVar16) * -4 + -4) +
                                     *(float *)(local_d98 + lVar9 * 4))) &
                      (undefined  [16])0xffffffffffffffff;
            fVar39 = SUB164(auVar27,0) + *(float *)(local_d98 + uVar16 * 4);
            auVar27 = CONCAT124(SUB1612(auVar27 >> 0x20,0),fVar39);
            if (fVar39 <= DAT_140c3d7d8) {
                local_d58 = 0.0;
                local_d48 = 0.0;
                local_d38 = 0.0;
                fVar20 = 0.0;
            }
            else {
                auVar27 = sqrtps(auVar27,auVar27);
                fVar39 = 1.0 / SUB164(auVar27,0);
                local_d58 = local_d58 * fVar39;
                local_d48 = local_d48 * fVar39;
                local_d38 = local_d38 * fVar39;
            }
            fStack3404 = 0.0;
            fStack3388 = 0.0;
            fStack3372 = 0.0;
            _local_d98 = CONCAT412(fVar20 * 0.0,
                                   CONCAT48(local_d38 * fVar19,
                                            CONCAT44(local_d48 * fVar22,local_d58 * local_d88._0_4_)));
            fStack3412 = local_d38 * fStack3392 - local_d48 * local_d98._8_4_;
            fStack3396 = local_d58 * local_d98._8_4_ - local_d98._0_4_ * 0.0;
            fStack3380 = local_d48 * local_d98._0_4_ - local_d58 * fStack3392;
            fVar39 = fStack3380 * fVar19;
            uVar16 = (ulonglong)(local_d58 * local_d88._0_4_ < local_d48 * fVar22);
            lVar9 = 1 - uVar16;
            if (*(float *)(local_d98 + uVar16 * 4) <= 0.0 && *(float *)(local_d98 + uVar16 * 4) != 0.0) {
                uVar16 = 2;
            }
            local_d98._0_8_ = CONCAT44(fStack3396 * fVar22,fStack3412 * local_d88._0_4_);
            local_d98 = CONCAT48(fVar39,local_d98._0_8_);
            _local_d98 = CONCAT412((fVar20 * fStack3468 - fVar20 * fStack3468) * 0.0,local_d98);
            local_d28 = (float)((uint)(*(float *)(local_d88 + (lVar9 + uVar16) * -4 + -4) +
                                       *(float *)(local_d98 + lVar9 * 4) +
                                       *(float *)(local_d98 + uVar16 * 4)) ^ 0x80000000);
            uVar16 = (ulonglong)(fStack3412 * local_d88._0_4_ < fStack3396 * fVar22);
            lVar9 = 1 - uVar16;
            if (*(float *)(local_d98 + uVar16 * 4) <= fVar39 &&
                fVar39 != *(float *)(local_d98 + uVar16 * 4)) {
                uVar16 = 2;
            }
            _local_d98 = CONCAT412(fStack3468 * 0.0,
                                   CONCAT48(local_d98._8_4_ * fVar19,
                                            CONCAT44(fStack3392 * fVar22,local_d98._0_4_ * local_d88._0_4_
                                            )));
            fStack3364 = (float)((uint)(*(float *)(local_d88 + (lVar9 + uVar16) * -4 + -4) +
                                        *(float *)(local_d98 + lVar9 * 4) +
                                        *(float *)(local_d98 + uVar16 * 4)) ^ 0x80000000);
            uVar16 = (ulonglong)(local_d98._0_4_ * local_d88._0_4_ < fStack3392 * fVar22);
            lVar9 = 1 - uVar16;
            if (*(float *)(local_d98 + uVar16 * 4) <= 0.0 && *(float *)(local_d98 + uVar16 * 4) != 0.0) {
                uVar16 = 2;
            }
            fStack3356 = 1.0;
            fStack3360 = (float)((uint)(*(float *)(local_d88 + (lVar9 + uVar16) * -4 + -4) +
                                        *(float *)(local_d98 + lVar9 * 4) +
                                        *(float *)(local_d98 + uVar16 * 4)) ^ 0x80000000);
            fStack3376 = local_d98._8_4_;
            plVar7 = (longlong *)(**(code **)(*plVar8 + 0x10))(plVar8);
            lVar9 = (**(code **)(*plVar7 + 0xf8))(plVar7);
            fVar40 = auStack3444._0_4_ - *(float *)(lVar9 + 4);
            auStack3444._0_4_ = auStack3444._0_4_ - *(float *)(lVar9 + 0x14);
            lVar9 = (**(code **)(*(longlong *)param_1[0x125] + 0x18))();
            fStack3332 = (float)(ulonglong)*(uint *)(lVar9 + 8) * *(float *)(param_1 + 0xea);
            lVar9 = (**(code **)(*(longlong *)param_1[0x125] + 0x18))();
            uStack3348 = 0;
            uStack3340 = 0;
            fStack3332 = 2.0 / fStack3332;
            uStack3328 = 0;
            local_cf8 = 0;
            uStack3308 = 0;
            uStack3300 = 0;
            uStack3292 = 0x3f800000;
            local_d18 = 2.0 / ((float)(ulonglong)*(uint *)(lVar9 + 4) * *(float *)(param_1 + 0xea));
            fStack3312 = fStack3312 / (auStack3444._0_4_ - fVar40);
            fStack3296 = fStack3312 * auStack3444._0_4_;
            auVar27 = CONCAT412(fStack3364,
                                CONCAT48(fStack3380,
                                         SUB168(CONCAT412(fStack3404,
                                                          CONCAT48(fStack3412,
                                                                   CONCAT44(fStack3412,local_d58))) >>
                                                                                                    0x40,0) & 0xffffffff | (ulonglong)(uint)fStack3396 << 0x20
            ));
            fVar22 = 0.0;
            fVar19 = fStack3388;
            fVar39 = fStack3372;
            fVar20 = fStack3356;
            fVar21 = local_d58;
            fVar29 = local_d48;
            fVar31 = local_d38;
            fVar33 = local_d28;
            fVar35 = fStack3408;
            fVar36 = fStack3392;
            fVar37 = fStack3376;
            fVar38 = fStack3360;
            pfVar10 = (float *)FUN_1401b20f0(&local_c68,&local_d18);
            if (pfVar10 < pfVar10 + 0x18) {
                pfVar11 = pfVar10;
                do {
                    fVar3 = *pfVar11;
                    fVar4 = pfVar11[1];
                    fVar5 = pfVar11[3];
                    pfVar12 = pfVar11 + 4;
                    pfVar11 = (float *)((longlong)pfVar11 + ((longlong)local_bd8 - (longlong)pfVar10));
                    *pfVar11 = fVar4 * SUB164(auVar27,0) + fVar3 * fVar21 + fVar35 * 0.0 + fVar5 * fVar22;
                    pfVar11[1] = fVar4 * SUB164(auVar27 >> 0x20,0) + fVar3 * fVar29 + fVar36 * 0.0 +
                                 fVar5 * fVar19;
                    pfVar11[2] = fVar4 * SUB164(auVar27 >> 0x40,0) + fVar3 * fVar31 + fVar37 * 0.0 +
                                 fVar5 * fVar39;
                    pfVar11[3] = fVar4 * SUB164(auVar27 >> 0x60,0) + fVar3 * fVar33 + fVar38 * 0.0 +
                                 fVar5 * fVar20;
                    pfVar11 = pfVar12;
                } while (pfVar12 < pfVar10 + 0x18);
            }
            lVar17 = 6;
            lVar9 = 6;
            pfVar10 = local_bd8;
            do {
                fVar19 = *pfVar10;
                fVar39 = pfVar10[1];
                fVar20 = pfVar10[2];
                fVar21 = pfVar10[3];
                auVar27 = CONCAT124(SUB1612(CONCAT412(fVar21 * fVar21,
                                                      CONCAT48(fVar20 * fVar20,
                                                               CONCAT44(fVar39 * fVar39,fVar19 * fVar19)))
                                                    >> 0x20,0),fVar19 * fVar19 + fVar39 * fVar39 + 0.0);
                auVar27 = rsqrtss(auVar27,auVar27);
                fVar22 = SUB164(auVar27,0);
                *pfVar10 = fVar22 * fVar19;
                pfVar10[1] = fVar22 * fVar39;
                pfVar10[2] = fVar22 * fVar20;
                pfVar10[3] = fVar22 * fVar21;
                lVar9 = lVar9 + -1;
                pfVar10 = pfVar10 + 4;
            } while (lVar9 != 0);
            FUN_1408fe3d0();
            uVar28 = 0x3f000000;
            uVar32 = 0x3f000000;
            uVar23 = 0x3f000000;
            uVar24 = 0x3f000000;
            uVar25 = 0x3f000000;
            uVar26 = 0x3f800000;
            uVar18 = 0;
            local_cb8 = 0;
            uStack3252 = 0x3f800000;
            uStack3248 = 0;
            uStack3244 = 0;
            local_cd8 = 0x3ee4dd2f;
            uStack3284 = 0x3ee4dd2f;
            uStack3280 = 0x3ee4dd2f;
            uStack3276 = 0x3f800000;
            local_cc8 = 0x3e8a3d71;
            uStack3268 = 0x3e8a3d71;
            uStack3264 = 0x3e8a3d71;
            uStack3260 = 0x3f800000;
            local_ad8 = _DAT_140b7b1a0;
            uVar30 = extraout_XMM0_Da;
            FUN_1407e4830(local_bd8 + 0x18,0,0x310);
            local_460 = &local_cc8;
            _local_d78 = CONCAT88(local_460,&local_cd8);
            local_d68 = &local_cb8;
            local_468 = &local_cd8;
            local_458 = local_d68;
            FUN_1401aefa0(&local_468,&local_c68);
            local_ae8 = CONCAT412(uVar26,CONCAT48(uVar25,CONCAT44(uVar24,uVar23)));
            local_b58 = local_c48;
            local_bd8[24] = (float)(undefined4)local_c68;
            local_bd8[25] = (float)local_c68._4_4_;
            local_bd8[26] = (float)(undefined4)uStack3168;
            uStack2924 = uStack3168._4_4_;
            local_b68 = local_c58;
            uStack2916 = uStack3156;
            uStack2912 = uStack3152;
            uStack2908 = uStack3148;
            local_b28 = local_c18;
            local_b48 = local_c38;
            uStack2884 = uStack3124;
            uStack2880 = uStack3120;
            uStack2876 = uStack3116;
            local_af8 = local_be8;
            local_b38 = local_c28;
            uStack2868 = uStack3108;
            uStack2864 = uStack3104;
            uStack2860 = uStack3100;
            local_b18 = local_c08;
            uStack2836 = uStack3076;
            uStack2832 = uStack3072;
            uStack2828 = uStack3068;
            local_8c8 = 0x41800000;
            local_b08 = local_bf8;
            uStack2820 = uStack3060;
            uStack2816 = uStack3056;
            uStack2812 = uStack3052;
            local_ac8 = CONCAT412(uVar18,CONCAT48(uVar32,CONCAT44(uVar30,uVar28)));
            if ((((uint)(local_bd8 + 0x18) | (uint)local_3b8) & 0xf) == 0) {
                lVar9 = 6;
                pfVar10 = local_3b8;
                pfVar11 = local_bd8 + 0x18;
                do {
                    pfVar14 = pfVar11;
                    pfVar12 = pfVar10;
                    fVar22 = pfVar14[1];
                    fVar19 = pfVar14[2];
                    fVar39 = pfVar14[3];
                    fVar20 = pfVar14[4];
                    fVar21 = pfVar14[5];
                    fVar29 = pfVar14[6];
                    fVar31 = pfVar14[7];
                    *pfVar12 = *pfVar14;
                    pfVar12[1] = fVar22;
                    pfVar12[2] = fVar19;
                    pfVar12[3] = fVar39;
                    fVar22 = pfVar14[8];
                    fVar19 = pfVar14[9];
                    fVar39 = pfVar14[10];
                    fVar33 = pfVar14[0xb];
                    pfVar12[4] = fVar20;
                    pfVar12[5] = fVar21;
                    pfVar12[6] = fVar29;
                    pfVar12[7] = fVar31;
                    fVar20 = pfVar14[0xc];
                    fVar21 = pfVar14[0xd];
                    fVar29 = pfVar14[0xe];
                    fVar31 = pfVar14[0xf];
                    pfVar12[8] = fVar22;
                    pfVar12[9] = fVar19;
                    pfVar12[10] = fVar39;
                    pfVar12[0xb] = fVar33;
                    fVar22 = pfVar14[0x10];
                    fVar19 = pfVar14[0x11];
                    fVar39 = pfVar14[0x12];
                    fVar33 = pfVar14[0x13];
                    pfVar12[0xc] = fVar20;
                    pfVar12[0xd] = fVar21;
                    pfVar12[0xe] = fVar29;
                    pfVar12[0xf] = fVar31;
                    fVar20 = pfVar14[0x14];
                    fVar21 = pfVar14[0x15];
                    fVar29 = pfVar14[0x16];
                    fVar31 = pfVar14[0x17];
                    pfVar12[0x10] = fVar22;
                    pfVar12[0x11] = fVar19;
                    pfVar12[0x12] = fVar39;
                    pfVar12[0x13] = fVar33;
                    fVar22 = pfVar14[0x18];
                    fVar19 = pfVar14[0x19];
                    fVar39 = pfVar14[0x1a];
                    fVar33 = pfVar14[0x1b];
                    pfVar12[0x14] = fVar20;
                    pfVar12[0x15] = fVar21;
                    pfVar12[0x16] = fVar29;
                    pfVar12[0x17] = fVar31;
                    fVar20 = pfVar14[0x1c];
                    fVar21 = pfVar14[0x1d];
                    fVar29 = pfVar14[0x1e];
                    fVar31 = pfVar14[0x1f];
                    pfVar12[0x18] = fVar22;
                    pfVar12[0x19] = fVar19;
                    pfVar12[0x1a] = fVar39;
                    pfVar12[0x1b] = fVar33;
                    pfVar12[0x1c] = fVar20;
                    pfVar12[0x1d] = fVar21;
                    pfVar12[0x1e] = fVar29;
                    pfVar12[0x1f] = fVar31;
                    lVar9 = lVar9 + -1;
                    pfVar10 = pfVar12 + 0x20;
                    pfVar11 = pfVar14 + 0x20;
                } while (lVar9 != 0);
                fVar22 = pfVar14[0x21];
                fVar19 = pfVar14[0x22];
                fVar39 = pfVar14[0x23];
                pfVar12[0x20] = pfVar14[0x20];
                pfVar12[0x21] = fVar22;
                pfVar12[0x22] = fVar19;
                pfVar12[0x23] = fVar39;
            }
            else {
                FUN_1407db590(local_3b8,local_bd8 + 0x18,0x310);
            }
            local_c68 = &local_d58;
            FUN_1401afc20(&local_c68,local_ca8);
            local_d88 = local_3b8;
            pfStack3456 = &local_d58;
            FUN_1401ae910(local_d88,local_3b8);
            local_c68 = (float *)local_ca8;
            uStack3168 = local_148;
            _local_d88 = CONCAT88(uStack3168,local_c68);
            _local_308 = CONCAT412(local_308._0_4_ * fStack3404 + local_308._4_4_ * fStack3388 +
                                   fStack768 * fStack3372,
                                   CONCAT48(local_308._0_4_ * fStack3408 + local_308._4_4_ * fStack3392 +
                                            fStack768 * fStack3376,
                                            CONCAT44(local_308._0_4_ * fStack3412 +
                                                     local_308._4_4_ * fStack3396 + fStack768 * fStack3380
                                                    ,local_308._0_4_ * local_d58 +
                                                     local_308._4_4_ * local_d48 + fStack768 * local_d38)
                                   ));
            FUN_1401afb10(&local_c68,local_148);
            fVar39 = local_2e8 * fStack3412;
            fVar20 = local_2e8 * fStack3408;
            fVar21 = local_2e8 * fStack3404;
            fVar22 = fStack740 * fStack3392;
            fVar19 = fStack740 * fStack3388;
            local_2e8 = local_2e8 * local_d58 + fStack740 * local_d48 + local_d38 * 0.0 + local_d28;
            fStack740 = fVar39 + fStack740 * fStack3396 + fStack3380 * 0.0 + fStack3364;
            fStack736 = fVar20 + fVar22 + fStack3376 * 0.0 + fStack3360;
            fStack732 = fVar21 + fVar19 + fStack3372 * 0.0 + fStack3356;
            (**(code **)(*DAT_140c65670 + 0x120))();
            (**(code **)(*DAT_140c65670 + 0x1f8))();
            (**(code **)(*DAT_140c65670 + 0x200))();
            _local_d78 = CONCAT88(param_1[0x125],_local_d78);
            _local_d78 = CONCAT124(auStack3444,1);
            local_d68 = (undefined4 *)((ulonglong)local_d68 & 0xffffffff);
            local_db8 = &DAT_140c3fe88;
            (**(code **)(*DAT_140c65670 + 0x208))(DAT_140c65670,local_d78,&DAT_140c3fe88,&DAT_140c3fe88);
            _local_d78 = CONCAT88(param_1[0x126],_local_d78);
            _local_d78 = CONCAT124(auStack3444,1);
            local_d68 = (undefined4 *)((ulonglong)local_d68 & 0xffffffff);
            (**(code **)(*DAT_140c65670 + 0x210))(DAT_140c65670,local_d78,1);
            _local_d78 = extraout_XMM0 & (undefined  [16])0x0;
            local_db8 = (undefined *)((ulonglong)local_db8 & 0xffffffff00000000);
            (**(code **)(*DAT_140c65670 + 0x270))(DAT_140c65670,3,local_d78);
            lVar9 = DAT_140c657f0;
            if (DAT_140c657f0 != 0) {
                lVar13 = *(longlong *)(DAT_140c657f0 + 0x4d8);
                while (lVar13 != 0) {
                    // WARNING: Read-only address (ram,0x000140b7b1a0) is written
                    lVar13 = *(longlong *)(lVar9 + 0x4d8);
                    if (*(undefined8 **)(lVar13 + 0x208) != (undefined8 *)0x0) {
                        **(undefined8 **)(lVar13 + 0x208) = *(undefined8 *)(lVar13 + 0x210);
                    }
                    if (*(longlong *)(lVar13 + 0x210) != 0) {
                        *(undefined8 *)(*(longlong *)(lVar13 + 0x210) + 0x208) = *(undefined8 *)(lVar13 + 0x208)
                                ;
                    }
                    *(undefined8 *)(lVar13 + 0x208) = 0;
                    *(undefined8 *)(lVar13 + 0x210) = 0;
                    lVar13 = *(longlong *)(lVar9 + 0x4d8);
                }
                // WARNING: Read-only address (ram,0x000140b7b1a0) is written
                lVar13 = *(longlong *)(lVar9 + 0x4e0);
                while (lVar13 != 0) {
                    if (*(undefined8 **)(lVar13 + 0x188) != (undefined8 *)0x0) {
                        **(undefined8 **)(lVar13 + 0x188) = *(undefined8 *)(lVar13 + 400);
                    }
                    if (*(longlong *)(lVar13 + 400) != 0) {
                        *(undefined8 *)(*(longlong *)(lVar13 + 400) + 0x188) = *(undefined8 *)(lVar13 + 0x188);
                    }
                    *(undefined8 *)(lVar13 + 0x188) = 0;
                    *(undefined8 *)(lVar13 + 400) = 0;
                    lVar13 = *(longlong *)(lVar9 + 0x4e0);
                }
                lVar13 = *(longlong *)(lVar9 + 0x4e8);
                while (lVar13 != 0) {
                    if (*(undefined8 **)(lVar13 + 0x170) != (undefined8 *)0x0) {
                        **(undefined8 **)(lVar13 + 0x170) = *(undefined8 *)(lVar13 + 0x178);
                    }
                    if (*(longlong *)(lVar13 + 0x178) != 0) {
                        *(undefined8 *)(*(longlong *)(lVar13 + 0x178) + 0x170) = *(undefined8 *)(lVar13 + 0x170)
                                ;
                    }
                    *(undefined8 *)(lVar13 + 0x170) = 0;
                    *(undefined8 *)(lVar13 + 0x178) = 0;
                    lVar13 = *(longlong *)(lVar9 + 0x4e8);
                }
                local_868 = local_d58;
                fStack2148 = fStack3412;
                fStack2144 = fStack3408;
                fStack2140 = fStack3404;
                local_858 = local_d48;
                fStack2132 = fStack3396;
                fStack2128 = fStack3392;
                fStack2124 = fStack3388;
                local_848 = local_d38;
                fStack2116 = fStack3380;
                fStack2112 = fStack3376;
                fStack2108 = fStack3372;
                local_838 = local_d28;
                fStack2100 = fStack3364;
                fStack2096 = fStack3360;
                fStack2092 = fStack3356;
                local_828 = local_d18;
                uStack2084 = (undefined4)uStack3348;
                uStack2080 = uStack3348._4_4_;
                uStack2076 = (undefined4)uStack3340;
                local_818 = uStack3340._4_4_;
                fStack2068 = fStack3332;
                uStack2064 = (undefined4)uStack3328;
                uStack2060 = uStack3328._4_4_;
                local_808 = (undefined4)local_cf8;
                uStack2052 = local_cf8._4_4_;
                fStack2048 = fStack3312;
                uStack2044 = (undefined4)uStack3308;
                local_7f8[0] = uStack3308._4_4_;
                local_7f8[1] = (float)uStack3300;
                local_7f8[2] = fStack3296;
                local_7f8[3] = (float)uStack3292;
                do {
                    puVar1 = (undefined4 *)((longlong)local_bd8 + (longlong)plVar15);
                    uVar28 = *(undefined4 *)((longlong)(local_bd8 + 1) + (longlong)plVar15);
                    uVar32 = *(undefined4 *)((longlong)(local_bd8 + 2) + (longlong)plVar15);
                    uVar23 = *(undefined4 *)((longlong)(local_bd8 + 3) + (longlong)plVar15);
                    plVar15 = plVar15 + 2;
                    *(undefined4 *)((longlong)local_7f8 + (longlong)plVar15) = *puVar1;
                    *(undefined4 *)((longlong)(local_7f8 + 1) + (longlong)plVar15) = uVar28;
                    *(undefined4 *)((longlong)(local_7f8 + 2) + (longlong)plVar15) = uVar32;
                    *(undefined4 *)((longlong)(local_7f8 + 3) + (longlong)plVar15) = uVar23;
                } while (plVar15 < &DAT_00000060);
                local_7e8[24] = auStack3444._0_4_;
                local_7e8[25] = fVar40;
                if ((((uint)(local_bd8 + 0x18) | (uint)local_778) & 0xf) == 0) {
                    lVar13 = 6;
                    pfVar10 = local_778;
                    pfVar11 = local_bd8 + 0x18;
                    do {
                        pfVar14 = pfVar11;
                        pfVar12 = pfVar10;
                        fVar22 = pfVar14[1];
                        fVar19 = pfVar14[2];
                        fVar39 = pfVar14[3];
                        fVar20 = pfVar14[4];
                        fVar21 = pfVar14[5];
                        fVar29 = pfVar14[6];
                        fVar31 = pfVar14[7];
                        *pfVar12 = *pfVar14;
                        pfVar12[1] = fVar22;
                        pfVar12[2] = fVar19;
                        pfVar12[3] = fVar39;
                        fVar22 = pfVar14[8];
                        fVar19 = pfVar14[9];
                        fVar39 = pfVar14[10];
                        fVar33 = pfVar14[0xb];
                        pfVar12[4] = fVar20;
                        pfVar12[5] = fVar21;
                        pfVar12[6] = fVar29;
                        pfVar12[7] = fVar31;
                        fVar20 = pfVar14[0xc];
                        fVar21 = pfVar14[0xd];
                        fVar29 = pfVar14[0xe];
                        fVar31 = pfVar14[0xf];
                        pfVar12[8] = fVar22;
                        pfVar12[9] = fVar19;
                        pfVar12[10] = fVar39;
                        pfVar12[0xb] = fVar33;
                        fVar22 = pfVar14[0x10];
                        fVar19 = pfVar14[0x11];
                        fVar39 = pfVar14[0x12];
                        fVar33 = pfVar14[0x13];
                        pfVar12[0xc] = fVar20;
                        pfVar12[0xd] = fVar21;
                        pfVar12[0xe] = fVar29;
                        pfVar12[0xf] = fVar31;
                        fVar20 = pfVar14[0x14];
                        fVar21 = pfVar14[0x15];
                        fVar29 = pfVar14[0x16];
                        fVar31 = pfVar14[0x17];
                        pfVar12[0x10] = fVar22;
                        pfVar12[0x11] = fVar19;
                        pfVar12[0x12] = fVar39;
                        pfVar12[0x13] = fVar33;
                        fVar22 = pfVar14[0x18];
                        fVar19 = pfVar14[0x19];
                        fVar39 = pfVar14[0x1a];
                        fVar33 = pfVar14[0x1b];
                        pfVar12[0x14] = fVar20;
                        pfVar12[0x15] = fVar21;
                        pfVar12[0x16] = fVar29;
                        pfVar12[0x17] = fVar31;
                        fVar20 = pfVar14[0x1c];
                        fVar21 = pfVar14[0x1d];
                        fVar29 = pfVar14[0x1e];
                        fVar31 = pfVar14[0x1f];
                        pfVar12[0x18] = fVar22;
                        pfVar12[0x19] = fVar19;
                        pfVar12[0x1a] = fVar39;
                        pfVar12[0x1b] = fVar33;
                        pfVar12[0x1c] = fVar20;
                        pfVar12[0x1d] = fVar21;
                        pfVar12[0x1e] = fVar29;
                        pfVar12[0x1f] = fVar31;
                        lVar13 = lVar13 + -1;
                        pfVar10 = pfVar12 + 0x20;
                        pfVar11 = pfVar14 + 0x20;
                    } while (lVar13 != 0);
                    fVar22 = pfVar14[0x21];
                    fVar19 = pfVar14[0x22];
                    fVar39 = pfVar14[0x23];
                    pfVar12[0x20] = pfVar14[0x20];
                    pfVar12[0x21] = fVar22;
                    pfVar12[0x22] = fVar19;
                    pfVar12[0x23] = fVar39;
                }
                else {
                    FUN_1407db590(local_778,local_bd8 + 0x18,0x310);
                }
                pfVar10 = local_7f8 + 4;
                *(float *)(lVar9 + 0xb0) = local_868;
                *(float *)(lVar9 + 0xb4) = fStack2148;
                *(float *)(lVar9 + 0xb8) = fStack2144;
                *(float *)(lVar9 + 0xbc) = fStack2140;
                *(float *)(lVar9 + 0xc0) = local_858;
                *(float *)(lVar9 + 0xc4) = fStack2132;
                *(float *)(lVar9 + 200) = fStack2128;
                *(float *)(lVar9 + 0xcc) = fStack2124;
                *(float *)(lVar9 + 0xd0) = local_848;
                *(float *)(lVar9 + 0xd4) = fStack2116;
                *(float *)(lVar9 + 0xd8) = fStack2112;
                *(float *)(lVar9 + 0xdc) = fStack2108;
                *(float *)(lVar9 + 0xe0) = local_838;
                *(float *)(lVar9 + 0xe4) = fStack2100;
                *(float *)(lVar9 + 0xe8) = fStack2096;
                *(float *)(lVar9 + 0xec) = fStack2092;
                *(float *)(lVar9 + 0xf0) = local_828;
                *(undefined4 *)(lVar9 + 0xf4) = uStack2084;
                *(undefined4 *)(lVar9 + 0xf8) = uStack2080;
                *(undefined4 *)(lVar9 + 0xfc) = uStack2076;
                *(undefined4 *)(lVar9 + 0x100) = local_818;
                *(float *)(lVar9 + 0x104) = fStack2068;
                *(undefined4 *)(lVar9 + 0x108) = uStack2064;
                *(undefined4 *)(lVar9 + 0x10c) = uStack2060;
                *(undefined4 *)(lVar9 + 0x110) = local_808;
                *(undefined4 *)(lVar9 + 0x114) = uStack2052;
                *(float *)(lVar9 + 0x118) = fStack2048;
                *(undefined4 *)(lVar9 + 0x11c) = uStack2044;
                *(float *)(lVar9 + 0x120) = local_7f8[0];
                *(float *)(lVar9 + 0x124) = local_7f8[1];
                *(float *)(lVar9 + 0x128) = local_7f8[2];
                *(float *)(lVar9 + 300) = local_7f8[3];
                do {
                    fVar22 = *pfVar10;
                    fVar19 = pfVar10[1];
                    fVar39 = pfVar10[2];
                    fVar20 = pfVar10[3];
                    pfVar10 = pfVar10 + 4;
                    pfVar11 = (float *)((lVar9 - (longlong)(local_7f8 + 4)) + 0x120 + (longlong)pfVar10);
                    *pfVar11 = fVar22;
                    pfVar11[1] = fVar19;
                    pfVar11[2] = fVar39;
                    pfVar11[3] = fVar20;
                    lVar17 = lVar17 + -1;
                } while (lVar17 != 0);
                *(ulonglong *)(lVar9 + 400) = CONCAT44(local_7e8[25],local_7e8[24]);
                FUN_1402c8730(lVar9 + 0x1a0,local_778);
                lVar17 = *plVar8;
                lVar13 = (**(code **)(lVar17 + 0x18))(plVar8);
                (**(code **)(lVar17 + 0xf0))(plVar8,local_bd8,*(undefined4 *)(lVar13 + 0x1a0));
                FUN_1402c8ae0(lVar9,local_bd8 + 0x18);
            }
            (**(code **)(*DAT_140c65670 + 0x2a0))();
            (**(code **)(*DAT_140c65670 + 0x220))();
            (**(code **)(*DAT_140c65670 + 0x228))();
            *(undefined (*) [16])(param_1 + 300) =
                    CONCAT412(fVar44,CONCAT48(fVar43,CONCAT44(fVar42,fVar41)));
            plVar7 = plVar8;
        }
    }
    LAB_1406be645:
    param_1[0x12e] = (longlong)plVar7;
    LAB_1406be654:
    FUN_1407db4f0(local_a8 ^ (ulonglong)auStack3544);
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1406be680(longlong *param_1)

{
    char cVar1;
    short sVar5;
    short sVar6;
    short sVar7;
    undefined8 uVar8;
    uint uVar9;
    undefined4 uVar10;
    uint uVar11;
    undefined4 *puVar12;
    float *pfVar13;
    int iVar14;
    longlong *plVar15;
    longlong *plVar16;
    longlong **pplVar17;
    longlong lVar18;
    longlong **pplVar19;
    longlong lVar20;
    undefined4 extraout_XMM0_Da;
    float fVar21;
    float extraout_XMM0_Da_00;
    undefined4 extraout_XMM0_Da_01;
    int iVar22;
    int iVar23;
    undefined extraout_XMM0 [16];
    undefined extraout_XMM0_00 [16];
    int iVar24;
    short sVar25;
    undefined auVar27 [12];
    float fVar28;
    ulonglong uVar29;
    float fVar30;
    float fVar31;
    undefined auVar32 [16];
    undefined auVar33 [16];
    float fVar34;
    float fVar35;
    float fVar36;
    float fVar37;
    undefined4 uVar38;
    undefined4 uVar39;
    undefined4 uVar40;
    float fVar41;
    float fVar42;
    undefined4 uVar43;
    undefined4 uVar44;
    undefined4 uVar45;
    undefined auStack1544 [32];
    undefined8 local_5e8;
    undefined8 local_5e0;
    undefined local_5d8 [20];
    undefined4 local_5c4;
    undefined local_5b8 [4];
    undefined auStack1460 [12];
    undefined local_5a8 [4];
    undefined auStack1444 [4];
    undefined8 uStack1440;
    undefined local_598 [4];
    undefined auStack1428 [4];
    undefined8 uStack1424;
    float local_588;
    float fStack1412;
    float fStack1408;
    float fStack1404;
    undefined8 local_578;
    uint local_570;
    uint local_56c;
    undefined local_568 [16];
    float local_558;
    float fStack1364;
    float fStack1360;
    float fStack1356;
    float local_548;
    float fStack1348;
    float fStack1344;
    float fStack1340;
    float local_538;
    float fStack1332;
    float fStack1328;
    float fStack1324;
    float local_528;
    float fStack1316;
    float fStack1312;
    float fStack1308;
    float local_518;
    float local_514;
    float local_508;
    float local_504;
    undefined4 local_4f8;
    uint uStack1268;
    uint uStack1264;
    undefined4 uStack1260;
    undefined4 local_4e8;
    undefined4 uStack1252;
    undefined4 uStack1248;
    undefined4 uStack1244;
    undefined4 local_4d8;
    undefined4 uStack1236;
    undefined4 uStack1232;
    undefined4 uStack1228;
    undefined4 local_4c8;
    undefined4 uStack1220;
    undefined4 uStack1216;
    undefined4 uStack1212;
    undefined local_4b8 [16];
    undefined local_4a8 [4];
    undefined auStack1188 [8];
    undefined4 uStack1180;
    undefined local_498 [4];
    undefined auStack1172 [8];
    undefined4 uStack1164;
    undefined4 local_448;
    undefined4 uStack1092;
    undefined4 uStack1088;
    undefined4 uStack1084;
    float local_438;
    undefined4 uStack1076;
    undefined4 uStack1072;
    undefined4 uStack1068;
    float local_3e8;
    float local_3e4;
    float local_3e0;
    float local_3dc;
    float local_3d8;
    float local_3d4;
    float local_3d0;
    float local_3cc;
    float local_3c8;
    float local_3b8;
    float local_3b4;
    float local_3b0;
    float local_3ac;
    float local_3a8;
    float local_3a4;
    float local_3a0;
    float local_39c;
    float local_398;
    float local_388;
    float local_384;
    float local_380;
    float local_37c;
    float local_378;
    float local_374;
    float local_370;
    float local_36c;
    float local_368;
    float local_358;
    float fStack852;
    float fStack848;
    float fStack844;
    ulonglong local_d8;
    char cVar2;
    char cVar3;
    char cVar4;
    undefined6 uVar26;

    local_d8 = DAT_140c0f7b0 ^ (ulonglong)auStack1544;
    (**(code **)(*param_1 + 0x180))();
    (**(code **)(*DAT_140c65670 + 0x120))();
    (**(code **)(*DAT_140c65670 + 0x1f8))();
    (**(code **)(*DAT_140c65670 + 0x200))();
    local_5d8._0_16_ = CONCAT88(param_1[0x123],local_5d8._0_8_);
    local_5d8._0_16_ = CONCAT124(local_5d8._4_12_,1);
    local_5c4 = 0;
    local_5e8 = (longlong *)&DAT_140c3fe88;
    (**(code **)(*DAT_140c65670 + 0x208))(DAT_140c65670,local_5d8,&DAT_140c3fe88,&DAT_140c3fe88);
    (**(code **)(*DAT_140c65670 + 0x210))(DAT_140c65670,&DAT_140c3fe88,1);
    fVar36 = 1.0;
    uVar38 = 0;
    uVar39 = 0;
    uVar40 = 0;
    _local_5b8 = CONCAT44(fRam0000000140c777d4,_DAT_140c777d0);
    _local_5b8 = CONCAT48(fRam0000000140c777d8,_local_5b8);
    _local_5b8 = CONCAT412(fRam0000000140c777dc,_local_5b8);
    local_5e8 = (longlong *)((ulonglong)local_5e8 & 0xffffffff00000000);
    (**(code **)(*DAT_140c65670 + 0x270))(DAT_140c65670,1,local_5b8);
    puVar12 = (undefined4 *)(**(code **)(*(longlong *)param_1[0x122] + 0x18))();
    local_4f8 = *puVar12;
    local_570 = puVar12[1];
    uVar9 = puVar12[2];
    uStack1260 = puVar12[3];
    local_4e8 = puVar12[4];
    uStack1252 = puVar12[5];
    uStack1248 = puVar12[6];
    uStack1244 = puVar12[7];
    local_4d8 = puVar12[8];
    uStack1236 = puVar12[9];
    uStack1232 = puVar12[10];
    uStack1228 = puVar12[0xb];
    local_4c8 = puVar12[0xc];
    uStack1220 = puVar12[0xd];
    uStack1216 = puVar12[0xe];
    uStack1212 = puVar12[0xf];
    local_578 = 0;
    local_568 = ZEXT816(CONCAT44((float)((int)uVar9 >> 1),(float)((int)local_570 >> 1)));
    local_56c = uVar9;
    uStack1268 = local_570;
    uStack1264 = uVar9;
    if (*(int *)((longlong)param_1 + 0x8fc) == 2) {
        plVar15 = *(longlong **)(DAT_140c65898 + 0x71a8);
        if (plVar15 == (longlong *)0x0) {
            plVar15 = *(longlong **)(DAT_140c65898 + 0x71a0);
        }
        (**(code **)(*plVar15 + 8))();
        fVar42 = SUB164(extraout_XMM0,0);
        uVar43 = SUB164(extraout_XMM0 >> 0x20,0);
        uVar44 = SUB164(extraout_XMM0 >> 0x40,0);
        uVar45 = SUB164(extraout_XMM0 >> 0x60,0);
    }
    else if (*(int *)((longlong)param_1 + 0x8fc) == 1) {
        fVar42 = *(float *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x12c0);
        uVar43 = 0;
        uVar44 = 0;
        uVar45 = 0;
    }
    else {
        fVar42 = 0.0;
        uVar43 = 0;
        uVar44 = 0;
        uVar45 = 0;
    }
    uStack1440 = local_568;
    _local_598 = CONCAT124(_auStack1428,fVar42);
    _local_5a8 = CONCAT124(_auStack1444,0x3f800000);
    _local_598 = _local_598 & (undefined  [16])0xffffffffffffffff;
    uStack1440._4_4_ = (float)((ulonglong)uStack1440 >> 0x20);
    _local_4a8 = CONCAT412(uStack1440._4_4_,CONCAT48((float)uStack1440,_local_5a8));
    _local_498 = _local_598;
    FUN_1401b0840(local_4a8,&local_558);
    local_578._0_4_ = local_570 + (int)local_578;
    local_578._4_4_ = local_56c + local_578._4_4_;
    uVar10 = FUN_1400c9d10();
    local_5d8._0_16_ =
            CONCAT88(SUB168(CONCAT412(extraout_XMM0_Da,
                                      CONCAT48(SUB164(_DAT_140b7a4c0 >> 0x20,0),SUB168(_DAT_140b7a4c0,0))
                     ) >> 0x40,0),
                     SUB168(_DAT_140b7a4c0,0) & 0xffffffff | (ulonglong)(uint)fVar36 << 0x20);
    fVar21 = (float)((int)local_578 >> 1);
    _local_5b8 = ZEXT816(CONCAT44((float)(local_578._4_4_ >> 1),fVar21));
    fVar30 = fVar36 / *(float *)(param_1 + 0xea);
    fVar28 = (fVar30 / (512.0 / DAT_140c4ad08)) * 512.0 + 0.5;
    auVar33 = CONCAT124(SUB1612(CONCAT412(uVar40,CONCAT48(uVar39,CONCAT44(uVar38,fVar30))) >> 0x20,0),
                        fVar28);
    iVar14 = (int)fVar28;
    if ((iVar14 != -0x80000000) && ((float)iVar14 != fVar28)) {
        uVar29 = SUB168(auVar33,0);
        uVar11 = movmskps(uVar10,CONCAT88(SUB168(CONCAT412(uVar38,CONCAT48(uVar38,uVar29)) >> 0x40,0),
                                          uVar29 & 0xffffffff | uVar29 << 0x20));
        auVar33 = ZEXT416((uint)(float)(iVar14 - (uVar11 & 1)));
    }
    auStack1460._0_4_ = SUB164(_local_5b8 >> 0x20,0);
    fVar28 = (*(float *)(param_1 + 0xf0) - *(float *)(param_1 + 0xec)) * fVar30 + fVar21 + 0.5;
    fVar21 = fVar30 * 0.0 + auStack1460._0_4_ + 0.5;
    fVar30 = (float)(int)SUB164(auVar33,0) + fVar21;
    auVar32 = ZEXT416((uint)fVar30) & (undefined  [16])0xffffffffffffffff;
    _local_5a8 = CONCAT44(fVar21,fVar28);
    _local_598 = CONCAT124(CONCAT84(uStack1424,fVar30),fVar28 + (float)(int)SUB164(auVar33,0));
    if (param_1[0x12e] == 0) {
        FUN_1407e4830(&local_3e8,0,0x310);
        (**(code **)(**(longlong **)(DAT_140c65898 + 0x7248) + 0x28))
                (*(longlong **)(DAT_140c65898 + 0x7248),&local_3e8);
        (**(code **)(*DAT_140c65670 + 0x178))(DAT_140c65670,param_1[0x12f],1);
        fStack1404 = fRam0000000140c777dc;
        fVar30 = fRam0000000140c77878 * 0.4886025;
        fVar28 = fRam0000000140c77874 * -0.4886025;
        fVar31 = _DAT_140c77870 * -0.4886025;
        fVar35 = fRam0000000140c77878 * fRam0000000140c77874 * -1.092548;
        fVar34 = _DAT_140c77870 * fRam0000000140c77874 * 1.092548;
        fVar36 = (fRam0000000140c77878 * 3.0 * fRam0000000140c77878 - fVar36) * 0.3153916;
        fVar37 = _DAT_140c77870 * fRam0000000140c77878 * -1.092548;
        fVar41 = (_DAT_140c77870 * _DAT_140c77870 - fRam0000000140c77874 * fRam0000000140c77874) *
                 0.5462742;
        local_588 = _DAT_140c777d0 + local_3e8 * 0.2820948 + local_3e4 * fVar28 + local_3e0 * fVar30 +
                    local_3dc * fVar31 + local_3d8 * fVar34 + local_3d4 * fVar35 + local_3d0 * fVar36 +
                    local_3cc * fVar37 + local_3c8 * fVar41;
        fStack1412 = fRam0000000140c777d4 + local_3b8 * 0.2820948 + local_3b4 * fVar28 +
                     local_3b0 * fVar30 + local_3ac * fVar31 + local_3a8 * fVar34 + local_3a4 * fVar35 +
                     local_3a0 * fVar36 + local_39c * fVar37 + local_398 * fVar41;
        fStack1408 = fRam0000000140c777d8 + local_388 * 0.2820948 + local_384 * fVar28 +
                     local_380 * fVar30 + local_37c * fVar31 + local_378 * fVar34 + local_374 * fVar35 +
                     local_370 * fVar36 + local_36c * fVar37 + local_368 * fVar41;
        local_358 = local_358 + local_588;
        fStack852 = fStack852 + fStack1412;
        uVar8 = CONCAT44(fStack852,local_358);
        fVar36 = 0.0;
        if (local_358 * local_358 + fStack852 * fStack852 + 0.0 <= 0.0289) {
            local_358 = 0.4;
            fVar36 = local_358;
            fStack852 = local_358;
        }
        local_5e0 = (ulonglong)local_5e0._4_4_ << 0x20;
        local_5e8 = (longlong *)((ulonglong)local_5e8 & 0xffffffff00000000);
        _local_5b8 = CONCAT124(SUB1612(CONCAT412(fStack844 + fRam0000000140c777dc,
                                                 CONCAT48(fStack848 + fStack1408,uVar8)) >> 0x20,0),
                               SQRT(local_358));
        _local_5b8 = CONCAT48(SQRT(fVar36),_local_5b8);
        _local_5b8 = CONCAT412(fStack844 + fRam0000000140c777dc,_local_5b8);
        _local_5b8 = _local_5b8 & 0xffffffff | (ulonglong)(uint)SQRT(fStack852) << 0x20;
        (**(code **)(*DAT_140c65670 + 0x180))(DAT_140c65670,0x10,local_5b8);
        if ((DAT_140dc4b98 & 1) == 0) {
            DAT_140dc4b98 = DAT_140dc4b98 | 1;
            DAT_140dc4bb0 = DAT_140c4ae28 + _DAT_140c4adc8;
            _DAT_140dc4ba0 =
                    CONCAT412(DAT_140c4ae28,CONCAT48(DAT_140c4ae28,CONCAT44(DAT_140c4ae28,DAT_140c4ae28)));
            DAT_140dc4bb4 = DAT_140dc4bb0;
            fRam0000000140dc4bb8 = DAT_140dc4bb0;
            fRam0000000140dc4bbc = DAT_140dc4bb0;
        }
        lVar20 = 3;
        pplVar17 = (longlong **)(param_1 + 0x114);
        while( true ) {
            auVar33 = CONCAT412(uStack1440._4_4_,
                                CONCAT48((float)uStack1440,CONCAT44(auStack1444,local_5a8)));
            lVar18 = 3;
            pplVar19 = pplVar17 + 3;
            _local_498 = CONCAT412(uStack1424._4_4_,
                                   CONCAT48((float)uStack1424,CONCAT44(auStack1428,local_598)));
            fVar36 = local_598;
            fVar28 = auStack1428;
            fVar30 = (float)uStack1424;
            fVar31 = uStack1424._4_4_;
            do {
                plVar15 = *pplVar17;
                local_4a8 = SUB164(auVar33,0);
                if (plVar15 != (longlong *)0x0) {
                    local_588 = 0.0;
                    _local_4a8 = auVar33;
                    iVar14 = (**(code **)(*plVar15 + 0x20))(plVar15,&local_588);
                    if (iVar14 != 0) {
                        pfVar13 = (float *)(**(code **)(*DAT_140c65670 + 0xe0))(DAT_140c65670,0x70,0);
                        if (pfVar13 != (float *)0x0) {
                            fVar34 = SUB164(auVar33 >> 0x20,0);
                            *pfVar13 = fVar34 * local_548 + local_4a8 * local_558 + local_538 * 0.0 + local_528;
                            pfVar13[1] = fVar34 * fStack1348 + local_4a8 * fStack1364 + fStack1332 * 0.0 +
                                         fStack1316;
                            pfVar13[2] = fVar34 * fStack1344 + local_4a8 * fStack1360 + fStack1328 * 0.0 +
                                         fStack1312;
                            pfVar13[3] = 1.0;
                            *(undefined8 *)(pfVar13 + 5) = DAT_140dc4ba0;
                            pfVar13[7] = auStack1428 * local_548 + local_4a8 * local_558 + local_538 * 0.0 +
                                         local_528;
                            pfVar13[8] = auStack1428 * fStack1348 + local_4a8 * fStack1364 + fStack1332 * 0.0 +
                                         fStack1316;
                            pfVar13[9] = auStack1428 * fStack1344 + local_4a8 * fStack1360 +
                                         SUB164(ZEXT1216(ZEXT812(0)) >> 0x40,0) * fStack1328 + fStack1312;
                            pfVar13[10] = 1.0;
                            local_4b8 = ZEXT816(CONCAT44(DAT_140dc4bb4,(undefined4)DAT_140dc4ba0));
                            *(ulonglong *)(pfVar13 + 0xc) = CONCAT44(DAT_140dc4bb4,(undefined4)DAT_140dc4ba0);
                            pfVar13[0xe] = fVar34 * local_548 + local_498 * local_558 + local_538 * 0.0 +
                                           local_528;
                            pfVar13[0xf] = fVar34 * fStack1348 + local_498 * fStack1364 + fStack1332 * 0.0 +
                                           fStack1316;
                            pfVar13[0x10] =
                                    fVar34 * fStack1344 + local_498 * fStack1360 + fStack1328 * 0.0 + fStack1312;
                            pfVar13[0x11] = 1.0;
                            local_5d8._0_16_ = ZEXT816(CONCAT44(DAT_140dc4ba0._4_4_,DAT_140dc4bb0));
                            *(ulonglong *)(pfVar13 + 0x13) = CONCAT44(DAT_140dc4ba0._4_4_,DAT_140dc4bb0);
                            fVar34 = auStack1428 * local_548 + local_498 * local_558 + local_538 * 0.0 + local_528
                                    ;
                            fVar35 = auStack1428 * fStack1348 + local_498 * fStack1364 + fStack1332 * 0.0 +
                                     fStack1316;
                            fVar37 = auStack1428 * fStack1344 + local_498 * fStack1360 + fStack1328 * 0.0 +
                                     fStack1312;
                            auVar27 = CONCAT48(fVar37,CONCAT44(fVar35,fVar34));
                            pfVar13[0x15] = fVar34;
                            pfVar13[0x16] = fVar35;
                            pfVar13[0x17] = fVar37;
                            pfVar13[0x18] = 1.0;
                            *(ulonglong *)(pfVar13 + 0x1a) = CONCAT44(DAT_140dc4bb4,DAT_140dc4bb0);
                            (**(code **)(*DAT_140c65670 + 0xe8))
                                    (SUB128(auVar27 >> 0x20,0),
                                     SUB168(CONCAT412(auStack1428 * fStack1340 + local_498 * fStack1356 +
                                                      fStack1324 * 0.0 + fStack1308,auVar27) >> 0x40,0));
                            local_5e8 = (longlong *)0x0;
                            (**(code **)(*DAT_140c65670 + 0x160))(DAT_140c65670,0,*pplVar17,0);
                            local_5e8 = (longlong *)CONCAT44(local_5e8._4_4_,1);
                            (**(code **)(*DAT_140c65670 + 0x288))(DAT_140c65670,4);
                        }
                    }
                }
                pplVar17 = pplVar17 + 1;
                auVar33 = CONCAT412(SUB164(auVar33 >> 0x60,0) + 0.0,
                                    CONCAT48(SUB164(auVar33 >> 0x40,0) + 0.0,
                                             CONCAT44(SUB164(auVar33 >> 0x20,0) + 0.0,
                                                      SUB164(auVar33,0) + (local_498 - local_4a8))));
                local_598 = local_598 + (local_498 - local_4a8);
                auStack1428 = auStack1428 + 0.0;
                uStack1424._0_4_ = (float)uStack1424 + 0.0;
                uStack1424._4_4_ = uStack1424._4_4_ + 0.0;
                _local_498 = CONCAT412(uStack1424._4_4_,
                                       CONCAT48((float)uStack1424,CONCAT44(auStack1428,local_598)));
                lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
            fVar21 = SUB164(auVar32,0) - fVar21;
            local_5a8 = local_5a8 + 0.0;
            auStack1444 = auStack1444 + fVar21;
            uStack1440._0_4_ = (float)uStack1440 + 0.0;
            uStack1440._4_4_ = uStack1440._4_4_ + 0.0;
            local_598 = fVar36 + 0.0;
            auStack1428 = fVar28 + fVar21;
            uStack1424._0_4_ = fVar30 + 0.0;
            uStack1424._4_4_ = fVar31 + 0.0;
            _local_5a8 = CONCAT412(uStack1440._4_4_,
                                   CONCAT48((float)uStack1440,CONCAT44(auStack1444,local_5a8)));
            _local_598 = CONCAT412(uStack1424._4_4_,
                                   CONCAT48((float)uStack1424,CONCAT44(auStack1428,local_598)));
            lVar20 = lVar20 + -1;
            if (lVar20 == 0) break;
            auVar32 = ZEXT416((uint)auStack1428);
            pplVar17 = pplVar19;
            fVar21 = auStack1444;
        }
        fVar36 = 1.0;
        _local_4a8 = auVar33;
    }
    local_504 = 0.5;
    (**(code **)(*DAT_140c65680 + 0x38))();
    if (param_1[0x12e] != 0) {
        (**(code **)(*(longlong *)param_1[0x123] + 0x18))();
        lVar18 = 0;
        lVar20 = (**(code **)(*(longlong *)param_1[0x123] + 0x18))();
        _local_5a8 = extraout_XMM0_00 & (undefined  [16])0x0;
        _local_598 = ZEXT816((ulonglong)(uint)(float)(ulonglong)*(uint *)(lVar20 + 4) | lVar18 << 0x20);
        (**(code **)(*DAT_140c65680 + 0x40))(DAT_140c65680,0x41);
        (**(code **)(*DAT_140c65680 + 0xd0))(DAT_140c65680,0);
        auVar33 = _local_4a8;
        _local_498 = CONCAT124(_auStack1172,fVar42);
        _local_4a8 = CONCAT124(_auStack1188,0x3f800000);
        _local_498 = _local_498 & (undefined  [16])0xffffffffffffffff;
        _local_4a8 = CONCAT88(local_568,_local_4a8);
        auStack1188._0_4_ = SUB164(auVar33,4);
        auStack1188._4_4_ = SUB84(local_568,0);
        uStack1180 = (undefined4)((ulonglong)local_568 >> 0x20);
        local_448 = 0x3f800000;
        uStack1092 = auStack1188._0_4_;
        uStack1088 = auStack1188._4_4_;
        uStack1084 = uStack1180;
        local_438 = local_498;
        uStack1076 = auStack1172._0_4_;
        uStack1072 = auStack1172._4_4_;
        uStack1068 = uStack1164;
        FUN_1401b0840(&local_448,local_4a8);
        (**(code **)(*DAT_140c65680 + 0x58))(DAT_140c65680,local_4a8);
        iVar14 = (**(code **)(*(longlong *)param_1[0x125] + 0x30))();
        if (iVar14 != 0) {
            local_5e8 = (longlong *)local_5d8;
            local_5d8._0_12_ = CONCAT48(0x3f800000,0x3f8000003f800000);
            local_5d8._0_16_ = CONCAT412(0x3f800000,local_5d8._0_12_);
            local_5e0 = CONCAT44(local_5e0._4_4_,1);
            (**(code **)(*DAT_140c65680 + 0xf0))(DAT_140c65680,param_1[0x125],param_1 + 0x128,local_5a8);
        }
        (**(code **)(*DAT_140c65680 + 0x48))();
        (**(code **)(*DAT_140c65680 + 0x90))(DAT_140c65680,1);
    }
    plVar15 = param_1 + 0x11d;
    local_5e0 = local_5e0 & 0xffffffff00000000;
    local_5e8 = plVar15;
    FUN_140773320(param_1 + 0x80,param_1 + 0xec);
    local_5e8 = plVar15;
    FUN_140773a90(param_1 + 0x80,param_1 + 0xec);
    (**(code **)(*DAT_140c65680 + 0x90))(DAT_140c65680,1);
    fVar21 = *(float *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x12c0);
    (**(code **)(*DAT_140c65680 + 0x40))(DAT_140c65680,0x41);
    (**(code **)(*DAT_140c65680 + 0xd0))(DAT_140c65680,0);
    auVar33 = _local_498;
    _local_4a8 = CONCAT124(_auStack1188,0x3f800000);
    _local_4a8 = _local_4a8 & (undefined  [16])0xffffffffffffffff;
    _local_498 = CONCAT88(local_568,_local_498);
    local_438 = fVar42 - fVar21;
    _local_498 = CONCAT124(_auStack1172,local_438);
    auStack1172._0_4_ = SUB164(auVar33,4);
    auStack1172._4_4_ = SUB84(local_568,0);
    uStack1164 = (undefined4)((ulonglong)local_568 >> 0x20);
    local_448 = local_4a8;
    uStack1092 = auStack1188._0_4_;
    uStack1088 = auStack1188._4_4_;
    uStack1084 = uStack1180;
    uStack1076 = auStack1172._0_4_;
    uStack1072 = auStack1172._4_4_;
    uStack1068 = uStack1164;
    FUN_1401b0840(&local_448,local_4a8);
    (**(code **)(*DAT_140c65680 + 0x58))(DAT_140c65680,local_4a8);
    uVar38 = 0x3f800000;
    uVar39 = 0x3f800000;
    uVar40 = 0x3f800000;
    uVar10 = 0x3f800000;
    local_5d8._0_12_ = CONCAT48(0x3f800000,0x3f8000003f800000);
    local_5d8._0_16_ = CONCAT412(0x3f800000,local_5d8._0_12_);
    if (param_1[0x132] != 0) {
        FUN_1401039e0(param_1[0x132],&DAT_140c77760,local_5d8);
    }
    (**(code **)(*DAT_140c65680 + 0x48))();
    (**(code **)(*DAT_140c65680 + 0x90))(DAT_140c65680,1);
    plVar16 = *(longlong **)(DAT_140c65898 + 0x71a8);
    if (plVar16 == (longlong *)0x0) {
        plVar16 = *(longlong **)(DAT_140c65898 + 0x71a0);
    }
    (**(code **)(*plVar16 + 8))();
    auVar32 = CONCAT124(SUB1612(CONCAT412(uVar45,CONCAT48(uVar44,CONCAT44(uVar43,fVar42))) >> 0x20,0),
                        fVar42 - extraout_XMM0_Da_00);
    (**(code **)(*DAT_140c65680 + 0x40))(DAT_140c65680,0x41);
    (**(code **)(*DAT_140c65680 + 0xd0))(DAT_140c65680,1);
    auVar33 = _local_498;
    local_438 = SUB164(auVar32,0);
    _local_498 = CONCAT124(_auStack1172,local_438);
    _local_4a8 = CONCAT124(_auStack1188,0x3f800000);
    _local_4a8 = _local_4a8 & (undefined  [16])0xffffffffffffffff;
    _local_498 = CONCAT88(local_568,_local_498);
    auStack1172._0_4_ = SUB164(auVar33,4);
    auStack1172._4_4_ = SUB84(local_568,0);
    uStack1164 = (undefined4)((ulonglong)local_568 >> 0x20);
    uStack1076 = auStack1172._0_4_;
    uStack1072 = auStack1172._4_4_;
    uStack1068 = uStack1164;
    local_448 = local_4a8;
    uStack1092 = auStack1188._0_4_;
    uStack1088 = auStack1188._4_4_;
    uStack1084 = uStack1180;
    FUN_1401b0840(&local_448,local_4a8);
    (**(code **)(*DAT_140c65680 + 0x58))(DAT_140c65680,local_4a8);
    local_5d8._0_16_ = CONCAT412(uVar10,CONCAT48(uVar40,CONCAT44(uVar39,uVar38)));
    if (param_1[0x138] != 0) {
        FUN_1401039e0(param_1[0x138],&DAT_140c77760,local_5d8);
    }
    (**(code **)(*DAT_140c65680 + 0x48))();
    local_508 = (float)(ulonglong)uStack1268 * local_504;
    local_518 = (float)(ulonglong)uStack1268 * -0.5;
    local_504 = (float)(ulonglong)uVar9 * local_504;
    local_514 = (float)(ulonglong)uVar9 * -0.5;
    (**(code **)(*DAT_140c65680 + 0x90))(DAT_140c65680,1);
    (**(code **)(*DAT_140c65680 + 0x40))(DAT_140c65680,0x41);
    (**(code **)(*DAT_140c65680 + 0xd0))(DAT_140c65680,0);
    auVar33 = _local_498;
    _local_498 = CONCAT124(_auStack1172,fVar42);
    _local_498 = CONCAT88(local_568,_local_498);
    _local_4a8 = CONCAT124(_auStack1188,0x3f800000);
    _local_4a8 = _local_4a8 & (undefined  [16])0xffffffffffffffff;
    auStack1172._0_4_ = SUB164(auVar33,4);
    auStack1172._4_4_ = SUB84(local_568,0);
    uStack1164 = (undefined4)((ulonglong)local_568 >> 0x20);
    uStack1076 = auStack1172._0_4_;
    uStack1072 = auStack1172._4_4_;
    uStack1068 = uStack1164;
    local_448 = local_4a8;
    uStack1092 = auStack1188._0_4_;
    uStack1088 = auStack1188._4_4_;
    uStack1084 = uStack1180;
    local_438 = fVar42;
    FUN_1401b0840(&local_448,&local_4f8);
    (**(code **)(*DAT_140c65680 + 0x58))(DAT_140c65680,&local_4f8);
    local_5d8._0_16_ = CONCAT412(uVar10,CONCAT48(uVar40,CONCAT44(uVar39,uVar38)));
    if (param_1[0x13e] != 0) {
        local_5e8 = (longlong *)
                ((ulonglong)local_5e8 & 0xffffffff00000000 |
                 (ulonglong)
                         (uint)((DAT_140c63664 - *(float *)(param_1 + 0x13f)) *
                                *(float *)((longlong)param_1 + 0x9fc)));
        FUN_140103e60(param_1[0x13e],&local_518,local_5d8,0);
    }
    (**(code **)(*DAT_140c65680 + 0x48))();
    (**(code **)(*DAT_140c65680 + 0x128))();
    (**(code **)(*DAT_140c65670 + 0x2a0))();
    local_5d8._0_16_ = CONCAT88(param_1[0x122],local_5d8._0_8_);
    local_5d8._0_16_ = CONCAT124(local_5d8._4_12_,1);
    local_5c4 = 0;
    local_5e8 = (longlong *)&DAT_140c3fe88;
    (**(code **)(*DAT_140c65670 + 0x208))(DAT_140c65670,local_5d8,&DAT_140c3fe88,&DAT_140c3fe88);
    (**(code **)(*DAT_140c65670 + 0x210))(DAT_140c65670,&DAT_140c3fe88,1);
    auVar32 = auVar32 & (undefined  [16])0x0;
    local_5e8 = (longlong *)((ulonglong)local_5e8 & 0xffffffff00000000);
    local_5d8._0_16_ = auVar32;
    (**(code **)(*DAT_140c65670 + 0x270))(DAT_140c65670,1,local_5d8);
    (**(code **)(*DAT_140c65670 + 0x120))();
    local_5e8 = (longlong *)0x0;
    (**(code **)(*DAT_140c65670 + 0x160))(DAT_140c65670,0,param_1[0x124],0);
    local_5e8 = (longlong *)0x0;
    (**(code **)(*DAT_140c65670 + 0x160))(DAT_140c65670,1,param_1[0x123]);
    local_5e8 = (longlong *)0x0;
    (**(code **)(*DAT_140c65670 + 0x160))(DAT_140c65670,2,param_1[0x121]);
    (**(code **)(*DAT_140c65670 + 0x178))(DAT_140c65670,param_1[0x130],0);
    FUN_1400c9c30(param_1[2]);
    local_5e0 = 0;
    auVar33 = maxps(auVar32,CONCAT88(SUB168(CONCAT412(extraout_XMM0_Da_01,
                                                      CONCAT48(SUB164(_DAT_140b7a4c0 >> 0x20,0),
                                                               SUB168(_DAT_140b7a4c0,0))) >> 0x40,0),
                                     SUB168(_DAT_140b7a4c0,0) & 0xffffffff |
                                     (ulonglong)(uint)fVar36 << 0x20));
    auVar33 = minps(auVar33,CONCAT412(uVar10,CONCAT48(uVar40,CONCAT44(uVar39,uVar38))));
    iVar14 = (int)(SUB164(auVar33,0) * 255.0 + 0.5);
    iVar22 = (int)(SUB164(auVar33 >> 0x20,0) * 255.0 + 0.5);
    iVar23 = (int)(SUB164(auVar33 >> 0x40,0) * 255.0 + 0.5);
    iVar24 = (int)(SUB164(auVar33 >> 0x60,0) * 255.0 + 0.5);
    sVar5 = (short)iVar23;
    cVar1 = (0 < sVar5) * (sVar5 < 0xff) * (char)iVar23 - (0xff < sVar5);
    sVar5 = (short)((uint)iVar23 >> 0x10);
    sVar25 = CONCAT11((0 < sVar5) * (sVar5 < 0xff) * (char)((uint)iVar23 >> 0x10) - (0xff < sVar5),
                      cVar1);
    sVar5 = (short)iVar22;
    cVar2 = (0 < sVar5) * (sVar5 < 0xff) * (char)iVar22 - (0xff < sVar5);
    sVar5 = (short)((uint)iVar22 >> 0x10);
    uVar43 = CONCAT13((0 < sVar5) * (sVar5 < 0xff) * (char)((uint)iVar22 >> 0x10) - (0xff < sVar5),
                      CONCAT12(cVar2,sVar25));
    sVar5 = (short)iVar14;
    cVar3 = (0 < sVar5) * (sVar5 < 0xff) * (char)iVar14 - (0xff < sVar5);
    sVar5 = (short)((uint)iVar14 >> 0x10);
    uVar26 = CONCAT15((0 < sVar5) * (sVar5 < 0xff) * (char)((uint)iVar14 >> 0x10) - (0xff < sVar5),
                      CONCAT14(cVar3,uVar43));
    sVar5 = (short)iVar24;
    cVar4 = (0 < sVar5) * (sVar5 < 0xff) * (char)iVar24 - (0xff < sVar5);
    sVar7 = (short)((uint)iVar24 >> 0x10);
    sVar5 = (short)((uint)uVar43 >> 0x10);
    sVar6 = (short)((uint6)uVar26 >> 0x20);
    sVar7 = (short)(CONCAT17((0 < sVar7) * (sVar7 < 0xff) * (char)((uint)iVar24 >> 0x10) -
                             (0xff < sVar7),CONCAT16(cVar4,uVar26)) >> 0x30);
    local_5e8 = (longlong *)0x0;
    (**(code **)(*DAT_140c65670 + 0x298))
            (DAT_140c65670,
             CONCAT13((0 < sVar7) * (sVar7 < 0xff) * cVar4 - (0xff < sVar7),
                      CONCAT12((0 < sVar6) * (sVar6 < 0xff) * cVar3 - (0xff < sVar6),
                               CONCAT11((0 < sVar5) * (sVar5 < 0xff) * cVar2 - (0xff < sVar5),
                                        (0 < sVar25) * (sVar25 < 0xff) * cVar1 - (0xff < sVar25)))))
            ;
    (**(code **)(*DAT_140c65680 + 0x38))();
    (**(code **)(*DAT_140c65680 + 0x90))(DAT_140c65680,1);
    (**(code **)(*DAT_140c65680 + 0x40))(DAT_140c65680,0x41);
    (**(code **)(*DAT_140c65680 + 0xd0))(DAT_140c65680,0);
    auVar33 = _local_498;
    _local_498 = CONCAT124(_auStack1172,fVar42);
    _local_498 = CONCAT88(local_568,_local_498);
    _local_4a8 = CONCAT124(_auStack1188,0x3f800000);
    _local_4a8 = _local_4a8 & (undefined  [16])0xffffffffffffffff;
    auStack1172._0_4_ = SUB164(auVar33,4);
    auStack1172._4_4_ = SUB84(local_568,0);
    uStack1164 = (undefined4)((ulonglong)local_568 >> 0x20);
    uStack1076 = auStack1172._0_4_;
    uStack1072 = auStack1172._4_4_;
    uStack1068 = uStack1164;
    local_448 = local_4a8;
    uStack1092 = auStack1188._0_4_;
    uStack1088 = auStack1188._4_4_;
    uStack1084 = uStack1180;
    local_438 = fVar42;
    FUN_1401b0840(&local_448,&local_4f8);
    (**(code **)(*DAT_140c65680 + 0x58))(DAT_140c65680,&local_4f8);
    local_5d8._0_16_ = CONCAT412(uVar10,CONCAT48(uVar40,CONCAT44(uVar39,uVar38)));
    if (param_1[0x144] != 0) {
        local_5e8 = (longlong *)
                ((ulonglong)local_5e8 & 0xffffffff00000000 |
                 (ulonglong)
                         (uint)((DAT_140c63664 - *(float *)(param_1 + 0x145)) *
                                *(float *)((longlong)param_1 + 0xa2c)));
        FUN_140103e60(param_1[0x144],&local_518,local_5d8,0);
    }
    (**(code **)(*DAT_140c65680 + 0x48))();
    (**(code **)(*DAT_140c65680 + 0x90))(DAT_140c65680,1);
    local_5e0 = CONCAT44(local_5e0._4_4_,1);
    local_5e8 = plVar15;
    FUN_140773320(param_1 + 0x80,param_1 + 0xec);
    (**(code **)(*DAT_140c65680 + 0x128))();
    (**(code **)(*DAT_140c65670 + 0x2a0))();
    (**(code **)(*DAT_140c65670 + 0x228))();
    (**(code **)(*DAT_140c65670 + 0x220))();
    FUN_1407db4f0(local_d8 ^ (ulonglong)auStack1544);
    return;
}



ulonglong FUN_1406bf980(longlong *param_1,undefined4 *param_2)

{
    ulonglong uVar1;

    uVar1 = FUN_1400d23b0();
    if ((int)uVar1 == 0) {
        return uVar1;
    }
    if ((*(byte *)((longlong)param_1 + 0x1c) & 0x80) != 0) {
        if (param_1[0x55] != 0) {
            FUN_1400c5810();
        }
        (**(code **)(*param_1 + 0x78))(param_1,&DAT_1409f7224,6,*param_2,param_2[1]);
    }
    return uVar1 & 0xffffffff;
}



void FUN_1406bfa00(longlong param_1,int param_2,int *param_3,undefined param_4)

{
    char cVar1;
    float local_38;
    undefined4 uStack52;
    float fStack48;
    undefined4 uStack44;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;
    ulonglong local_10;

    cVar1 = FUN_140001d30(param_1,param_3);
    if (((cVar1 != '\0') && (param_2 == 1)) && (*(longlong *)(DAT_140c65898 + 0x6490) != 0)) {
        uStack52 = *(undefined4 *)(param_1 + 0x764);
        uStack44 = *(undefined4 *)(param_1 + 0x76c);
        local_38 = *(float *)(param_1 + 0x760) +
                   (float)(*param_3 - (*(int *)(param_1 + 0x8f4) + *(int *)(param_1 + 0x8ec) >> 1)) *
                   *(float *)(param_1 + 0x750);
        fStack48 = *(float *)(param_1 + 0x768) +
                   (float)(param_3[1] - (*(int *)(param_1 + 0x8f8) + *(int *)(param_1 + 0x8f0) >> 1)) *
                   *(float *)(param_1 + 0x750);
        local_28 = *(undefined8 *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x1a0);
        local_20 = *(undefined8 *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x1a8);
        local_18 = CONCAT44(uStack52,local_38);
        local_10 = (ulonglong)(uint)fStack48;
        FUN_1403f4900(DAT_140c65898,0x459,&local_28);
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ZoneMapPing",&DAT_1409e9dc4,
                      *(undefined4 *)(*(longlong *)(DAT_140c65898 + 0x6490) + 8),&local_38);
    }
    FUN_1400d2120(param_1,param_2,param_3,param_4);
    return;
}



undefined8 FUN_1406bfb80(undefined8 param_1,undefined8 param_2,int param_3)

{
    char cVar1;
    undefined8 uVar2;

    cVar1 = FUN_140001d30();
    if (cVar1 == '\0') {
        uVar2 = FUN_1400d2660(param_1,param_2,param_3);
        return uVar2;
    }
    if (0 < param_3) {
        FUN_1406c0120();
        FUN_1406bcfb0(param_1);
        return 0;
    }
    FUN_1406c0170();
    FUN_1406bcfb0(param_1);
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1406bfc00(longlong param_1)

{
    char cVar1;
    short sVar5;
    short sVar6;
    short sVar7;
    int iVar8;
    undefined4 *puVar9;
    int iVar10;
    undefined extraout_XMM0 [16];
    int iVar11;
    undefined extraout_XMM0_00 [16];
    int iVar12;
    short sVar13;
    undefined in_XMM1 [16];
    undefined auVar16 [16];
    undefined auVar17 [16];
    undefined local_res8 [32];
    char cVar2;
    char cVar3;
    char cVar4;
    undefined4 uVar14;
    undefined6 uVar15;

    iVar8 = (**(code **)(**(longlong **)(param_1 + 0x920) + 0x30))();
    if (iVar8 == 0) {
        puVar9 = (undefined4 *)
                (**(code **)(**(longlong **)(param_1 + 0x920) + 0x48))
                (*(longlong **)(param_1 + 0x920),0,local_res8,2);
        if (puVar9 != (undefined4 *)0x0) {
            auVar16 = maxps(in_XMM1 & (undefined  [16])0x0,extraout_XMM0 & (undefined  [16])0x0);
            auVar17 = minps(auVar16,_DAT_140b7b240);
            auVar16 = ZEXT416((uint)(int)(SUB164(auVar17,0) * 255.0 + 0.5)) &
                    (undefined  [16])0xffffffffffffffff;
            iVar8 = (int)(SUB164(auVar17 >> 0x20,0) * 255.0 + 0.5);
            iVar10 = (int)(SUB164(auVar17 >> 0x40,0) * 255.0 + 0.5);
            iVar11 = (int)(SUB164(auVar17 >> 0x60,0) * 255.0 + 0.5);
            sVar5 = (short)iVar10;
            cVar1 = (0 < sVar5) * (sVar5 < 0xff) * (char)iVar10 - (0xff < sVar5);
            sVar5 = (short)((uint)iVar10 >> 0x10);
            sVar13 = CONCAT11((0 < sVar5) * (sVar5 < 0xff) * (char)((uint)iVar10 >> 0x10) - (0xff < sVar5)
                    ,cVar1);
            sVar5 = (short)iVar8;
            cVar2 = (0 < sVar5) * (sVar5 < 0xff) * (char)iVar8 - (0xff < sVar5);
            sVar5 = (short)((uint)iVar8 >> 0x10);
            uVar14 = CONCAT13((0 < sVar5) * (sVar5 < 0xff) * (char)((uint)iVar8 >> 0x10) - (0xff < sVar5),
                              CONCAT12(cVar2,sVar13));
            sVar5 = SUB162(auVar16,0);
            cVar3 = (0 < sVar5) * (sVar5 < 0xff) * SUB161(auVar16,0) - (0xff < sVar5);
            sVar5 = SUB162(auVar16 >> 0x10,0);
            uVar15 = CONCAT15((0 < sVar5) * (sVar5 < 0xff) * SUB161(auVar16 >> 0x10,0) - (0xff < sVar5),
                              CONCAT14(cVar3,uVar14));
            sVar5 = (short)iVar11;
            cVar4 = (0 < sVar5) * (sVar5 < 0xff) * (char)iVar11 - (0xff < sVar5);
            sVar7 = (short)((uint)iVar11 >> 0x10);
            sVar5 = (short)((uint)uVar14 >> 0x10);
            sVar6 = (short)((uint6)uVar15 >> 0x20);
            sVar7 = (short)(CONCAT17((0 < sVar7) * (sVar7 < 0xff) * (char)((uint)iVar11 >> 0x10) -
                                     (0xff < sVar7),CONCAT16(cVar4,uVar15)) >> 0x30);
            *puVar9 = CONCAT13((0 < sVar7) * (sVar7 < 0xff) * cVar4 - (0xff < sVar7),
                               CONCAT12((0 < sVar6) * (sVar6 < 0xff) * cVar3 - (0xff < sVar6),
                                        CONCAT11((0 < sVar5) * (sVar5 < 0xff) * cVar2 - (0xff < sVar5),
                                                 (0 < sVar13) * (sVar13 < 0xff) * cVar1 - (0xff < sVar13))
                               ));
            (**(code **)(**(longlong **)(param_1 + 0x920) + 0x50))(*(longlong **)(param_1 + 0x920),0);
        }
    }
    iVar8 = (**(code **)(**(longlong **)(param_1 + 0x908) + 0x30))();
    if (iVar8 == 0) {
        puVar9 = (undefined4 *)
                (**(code **)(**(longlong **)(param_1 + 0x908) + 0x48))
                (*(longlong **)(param_1 + 0x908),0,local_res8,2);
        if (puVar9 != (undefined4 *)0x0) {
            auVar16 = maxps(extraout_XMM0_00 & (undefined  [16])0x0,_DAT_140b7ad00);
            auVar16 = minps(auVar16,_DAT_140b7b240);
            iVar8 = (int)(SUB164(auVar16,0) * 255.0 + 0.5);
            iVar10 = (int)(SUB164(auVar16 >> 0x20,0) * 255.0 + 0.5);
            iVar11 = (int)(SUB164(auVar16 >> 0x40,0) * 255.0 + 0.5);
            iVar12 = (int)(SUB164(auVar16 >> 0x60,0) * 255.0 + 0.5);
            sVar5 = (short)iVar11;
            cVar1 = (0 < sVar5) * (sVar5 < 0xff) * (char)iVar11 - (0xff < sVar5);
            sVar5 = (short)((uint)iVar11 >> 0x10);
            sVar13 = CONCAT11((0 < sVar5) * (sVar5 < 0xff) * (char)((uint)iVar11 >> 0x10) - (0xff < sVar5)
                    ,cVar1);
            sVar5 = (short)iVar10;
            cVar2 = (0 < sVar5) * (sVar5 < 0xff) * (char)iVar10 - (0xff < sVar5);
            sVar5 = (short)((uint)iVar10 >> 0x10);
            uVar14 = CONCAT13((0 < sVar5) * (sVar5 < 0xff) * (char)((uint)iVar10 >> 0x10) - (0xff < sVar5)
                    ,CONCAT12(cVar2,sVar13));
            sVar5 = (short)iVar8;
            cVar3 = (0 < sVar5) * (sVar5 < 0xff) * (char)iVar8 - (0xff < sVar5);
            sVar5 = (short)((uint)iVar8 >> 0x10);
            uVar15 = CONCAT15((0 < sVar5) * (sVar5 < 0xff) * (char)((uint)iVar8 >> 0x10) - (0xff < sVar5),
                              CONCAT14(cVar3,uVar14));
            sVar5 = (short)iVar12;
            cVar4 = (0 < sVar5) * (sVar5 < 0xff) * (char)iVar12 - (0xff < sVar5);
            sVar7 = (short)((uint)iVar12 >> 0x10);
            sVar5 = (short)((uint)uVar14 >> 0x10);
            sVar6 = (short)((uint6)uVar15 >> 0x20);
            sVar7 = (short)(CONCAT17((0 < sVar7) * (sVar7 < 0xff) * (char)((uint)iVar12 >> 0x10) -
                                     (0xff < sVar7),CONCAT16(cVar4,uVar15)) >> 0x30);
            *puVar9 = CONCAT13((0 < sVar7) * (sVar7 < 0xff) * cVar4 - (0xff < sVar7),
                               CONCAT12((0 < sVar6) * (sVar6 < 0xff) * cVar3 - (0xff < sVar6),
                                        CONCAT11((0 < sVar5) * (sVar5 < 0xff) * cVar2 - (0xff < sVar5),
                                                 (0 < sVar13) * (sVar13 < 0xff) * cVar1 - (0xff < sVar13))
                               ));
            (**(code **)(**(longlong **)(param_1 + 0x908) + 0x50))(*(longlong **)(param_1 + 0x908),0);
        }
    }
    return;
}



void FUN_1406bfd00(undefined8 param_1,undefined8 param_2,longlong param_3,undefined param_4,
                   undefined8 param_5)

{
    longlong *plVar1;
    undefined4 uVar2;

    if (*(int *)(param_3 + 0x8fc) == 2) {
        plVar1 = *(longlong **)(DAT_140c65898 + 0x71a8);
        if (plVar1 == (longlong *)0x0) {
            plVar1 = *(longlong **)(DAT_140c65898 + 0x71a0);
        }
        (**(code **)(*plVar1 + 8))();
    }
    if (*(int *)(param_3 + 0x8fc) == 2) {
        plVar1 = *(longlong **)(DAT_140c65898 + 0x71a8);
        if (plVar1 == (longlong *)0x0) {
            plVar1 = *(longlong **)(DAT_140c65898 + 0x71a0);
        }
        uVar2 = (**(code **)(*plVar1 + 8))();
    }
    else if (*(int *)(param_3 + 0x8fc) == 1) {
        uVar2 = *(undefined4 *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x12c0);
    }
    else {
        uVar2 = 0;
    }
    FUN_140773e50(uVar2,param_2,uVar2,param_3 + 0x400,param_4,param_5,param_3 + 0x8e8);
    return;
}



void FUN_1406c0120(longlong param_1)

{
    float fVar1;
    undefined4 uVar2;

    fVar1 = *(float *)(param_1 + 0x754) - 0.25;
    if (fVar1 <= -1.0) {
        fVar1 = -1.0;
    }
    *(float *)(param_1 + 0x754) = fVar1;
    uVar2 = FUN_1408fbfc0(0x40000000);
    *(undefined4 *)(param_1 + 0x750) = uVar2;
    FUN_1406bfd00(param_1,1);
    return;
}



void FUN_1406c0170(longlong param_1)

{
    float fVar1;
    undefined4 uVar2;

    fVar1 = *(float *)(param_1 + 0x754) + 0.25;
    if (1.0 <= fVar1) {
        fVar1 = 1.0;
    }
    *(float *)(param_1 + 0x754) = fVar1;
    uVar2 = FUN_1408fbfc0(0x40000000);
    *(undefined4 *)(param_1 + 0x750) = uVar2;
    FUN_1406bfd00(param_1,1);
    return;
}



longlong FUN_1406c01c0(undefined8 param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    char *pcVar4;

    lVar1 = FUN_1400d66a0(param_1,1);
    if (lVar1 == 0) {
        return 0;
    }
    if ((*(uint *)(lVar1 + 0x1b0) >> 0x1e & 1) == 0) {
        puVar2 = (undefined8 *)FUN_1400580e0(param_1,1);
        if ((puVar2 == &DAT_140a12138) || (*(int *)(puVar2 + 1) == -1)) {
            pcVar4 = s_no_value_140c1dc88;
        }
        else {
            pcVar4 = (&PTR_DAT_140a123b0)[*(int *)(puVar2 + 1)];
        }
        uVar3 = FUN_140058780(param_1,s__s_expected__got__s_140c1db70,"Window",pcVar4);
        FUN_140056570(param_1,1,uVar3);
    }
    return lVar1;
}



undefined8 FUN_1406c0270(longlong param_1)

{
    longlong lVar1;
    double *pdVar2;
    int iVar3;

    lVar1 = FUN_1406c01c0();
    if (lVar1 == 0) {
        pdVar2 = *(double **)(param_1 + 0x10);
        *pdVar2 = 5.0;
    }
    else {
        iVar3 = *(int *)(lVar1 + 0xa50) + 1;
        *(int *)(lVar1 + 0xa50) = iVar3;
        pdVar2 = *(double **)(param_1 + 0x10);
        *pdVar2 = (double)iVar3;
    }
    *(undefined4 *)(pdVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406c0b80(longlong param_1,double *param_2)

{
    int iVar1;
    longlong lVar2;
    double *pdVar3;
    double *pdVar4;
    ulonglong uVar5;
    double local_res10 [3];
    double local_18;
    undefined4 local_10;

    lVar2 = FUN_1406c01c0();
    if (lVar2 == 0) {
        return 0;
    }
    pdVar3 = (double *)(*(longlong *)(param_1 + 0x18) + 0x10);
    pdVar4 = (double *)&DAT_140a12138;
    if (pdVar3 < *(double **)(param_1 + 0x10)) {
        pdVar4 = pdVar3;
    }
    if (*(int *)(pdVar4 + 1) == 3) {
        LAB_1406c0bec:
        uVar5 = (ulonglong)param_2 & 0xffffffff00000000 | (ulonglong)(uint)(int)*pdVar4;
    }
    else {
        if (*(int *)(pdVar4 + 1) == 4) {
            param_2 = local_res10;
            iVar1 = FUN_14005ac80((longlong)*pdVar4 + 0x20,param_2);
            if (iVar1 != 0) {
                local_10 = 3;
                pdVar4 = &local_18;
                local_18 = local_res10[0];
                goto LAB_1406c0bec;
            }
        }
        uVar5 = 0;
    }
    FUN_140774420(lVar2 + 0x400,uVar5);
    return 0;
}



undefined8 FUN_1406c0c10(undefined8 param_1)

{
    longlong lVar1;
    undefined4 *puVar2;
    longlong lVar3;

    lVar1 = FUN_1406c01c0();
    if (lVar1 != 0) {
        puVar2 = (undefined4 *)FUN_1406622c0(param_1,2);
        if (puVar2 != (undefined4 *)0x0) {
            lVar3 = FUN_1403d90d0(DAT_140c65898,*puVar2);
            if (lVar3 != 0) {
                FUN_1407744d0(lVar1 + 0x400,*(undefined4 *)(lVar3 + 8));
            }
        }
    }
    return 0;
}



undefined8 FUN_1406c0c70(longlong param_1,double *param_2)

{
    int iVar1;
    longlong lVar2;
    double *pdVar3;
    double *pdVar4;
    ulonglong uVar5;
    double local_res10 [3];
    double local_18;
    undefined4 local_10;

    lVar2 = FUN_1406c01c0();
    if (lVar2 == 0) {
        return 0;
    }
    pdVar3 = (double *)(*(longlong *)(param_1 + 0x18) + 0x10);
    pdVar4 = (double *)&DAT_140a12138;
    if (pdVar3 < *(double **)(param_1 + 0x10)) {
        pdVar4 = pdVar3;
    }
    if (*(int *)(pdVar4 + 1) == 3) {
        LAB_1406c0cdc:
        uVar5 = (ulonglong)param_2 & 0xffffffff00000000 | (ulonglong)(uint)(int)*pdVar4;
    }
    else {
        if (*(int *)(pdVar4 + 1) == 4) {
            param_2 = local_res10;
            iVar1 = FUN_14005ac80((longlong)*pdVar4 + 0x20,param_2);
            if (iVar1 != 0) {
                local_10 = 3;
                pdVar4 = &local_18;
                local_18 = local_res10[0];
                goto LAB_1406c0cdc;
            }
        }
        uVar5 = 0;
    }
    FUN_140774590(lVar2 + 0x400,uVar5);
    return 0;
}



undefined8 FUN_1406c0d00(void)

{
    longlong lVar1;

    lVar1 = FUN_1406c01c0();
    if (lVar1 != 0) {
        FUN_140774360(lVar1 + 0x400);
    }
    return 0;
}



undefined8 FUN_1406c2020(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    double *pdVar3;
    double *pdVar4;
    float fVar5;
    undefined4 uVar6;
    double dVar7;
    float fVar8;
    double local_res10 [3];
    double local_18;
    undefined4 local_10;

    lVar2 = FUN_1406c01c0();
    if (lVar2 == 0) {
        return 0;
    }
    pdVar3 = (double *)(*(longlong *)(param_1 + 0x18) + 0x10);
    pdVar4 = (double *)&DAT_140a12138;
    if (pdVar3 < *(double **)(param_1 + 0x10)) {
        pdVar4 = pdVar3;
    }
    if (*(int *)(pdVar4 + 1) == 3) {
        LAB_1406c2094:
        dVar7 = *pdVar4;
    }
    else {
        if (*(int *)(pdVar4 + 1) == 4) {
            iVar1 = FUN_14005ac80((longlong)*pdVar4 + 0x20,local_res10);
            if (iVar1 != 0) {
                local_10 = 3;
                pdVar4 = &local_18;
                local_18 = local_res10[0];
                goto LAB_1406c2094;
            }
        }
        dVar7 = 0.0;
    }
    fVar5 = (float)dVar7;
    if (1.0 <= fVar5) {
        fVar5 = 1.0;
    }
    fVar8 = -1.0;
    if (-1.0 <= fVar5) {
        fVar8 = fVar5;
    }
    *(float *)(lVar2 + 0x754) = fVar8;
    uVar6 = FUN_1408fbfc0(0x40000000);
    *(undefined4 *)(lVar2 + 0x750) = uVar6;
    FUN_1406bfd00(lVar2,1);
    return 0;
}



undefined8 FUN_1406c20f0(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;

    lVar2 = FUN_1406c01c0();
    if (lVar2 == 0) {
        return 0;
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *pdVar1 = (double)*(float *)(lVar2 + 0x754);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406c2140(void)

{
    longlong lVar1;
    float fVar2;
    undefined4 uVar3;

    lVar1 = FUN_1406c01c0();
    if (lVar1 != 0) {
        fVar2 = *(float *)(lVar1 + 0x754) - 0.25;
        if (fVar2 <= -1.0) {
            fVar2 = -1.0;
        }
        *(float *)(lVar1 + 0x754) = fVar2;
        uVar3 = FUN_1408fbfc0(0x40000000);
        *(undefined4 *)(lVar1 + 0x750) = uVar3;
        FUN_1406bfd00(lVar1,1);
    }
    return 0;
}



undefined8 FUN_1406c21a0(void)

{
    longlong lVar1;
    float fVar2;
    undefined4 uVar3;

    lVar1 = FUN_1406c01c0();
    if (lVar1 != 0) {
        fVar2 = *(float *)(lVar1 + 0x754) + 0.25;
        if (1.0 <= fVar2) {
            fVar2 = 1.0;
        }
        *(float *)(lVar1 + 0x754) = fVar2;
        uVar3 = FUN_1408fbfc0(0x40000000);
        *(undefined4 *)(lVar1 + 0x750) = uVar3;
        FUN_1406bfd00(lVar1,1);
    }
    return 0;
}



undefined8 FUN_1406c24e0(longlong param_1)

{
    undefined4 uVar1;
    longlong lVar2;
    undefined8 *puVar3;

    lVar2 = FUN_1406c01c0();
    if (lVar2 != 0) {
        uVar1 = *(undefined4 *)(lVar2 + 0x8fc);
        puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        if (((puVar3 < *(undefined8 **)(param_1 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
            (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
            uVar1 = FUN_140056d60(param_1,2);
        }
        *(undefined4 *)(lVar2 + 0x8fc) = uVar1;
        FUN_1406bfd00(lVar2,1);
    }
    return 0;
}



undefined8 FUN_1406c28f0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    uint uVar3;
    longlong lVar4;
    undefined8 *puVar5;
    undefined8 uVar6;
    longlong local_res10;

    lVar4 = FUN_1406c01c0();
    if (lVar4 != 0) {
        puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        if (((puVar5 < *(undefined8 **)(param_1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
            (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
            uVar3 = FUN_140056d60(param_1);
        }
        else {
            uVar3 = 0;
        }
        lVar4 = *(longlong *)(lVar4 + 0x738);
        lVar2 = lVar4;
        lVar1 = *(longlong *)(lVar4 + 8);
        while (lVar1 != 0) {
            if (*(uint *)(lVar1 + 0x20) < uVar3) {
                lVar1 = *(longlong *)(lVar1 + 0x18);
            }
            else {
                lVar2 = lVar1;
                lVar1 = *(longlong *)(lVar1 + 0x10);
            }
        }
        if ((lVar2 == lVar4) || (local_res10 = lVar2, uVar3 < *(uint *)(lVar2 + 0x20))) {
            local_res10 = lVar4;
        }
        if ((local_res10 != lVar4) && (*(longlong *)(local_res10 + 0x28) != 0)) {
            uVar6 = FUN_140774a40(lVar2,param_1);
            return uVar6;
        }
    }
    return 0;
}



undefined8 FUN_1406c29c0(void)

{
    longlong lVar1;

    lVar1 = FUN_1406c01c0();
    if (lVar1 != 0) {
        FUN_140774990(lVar1 + 0x400);
    }
    return 0;
}



undefined8 FUN_1406c29f0(longlong param_1)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    double *pdVar4;
    longlong *plVar5;
    double *pdVar6;
    ulonglong uVar7;
    double local_18;
    undefined4 local_10;

    lVar3 = FUN_1406c01c0();
    if (lVar3 == 0) {
        return 0;
    }
    pdVar4 = (double *)(*(longlong *)(param_1 + 0x18) + 0x10);
    pdVar6 = (double *)&DAT_140a12138;
    if (pdVar4 < *(double **)(param_1 + 0x10)) {
        pdVar6 = pdVar4;
    }
    if (*(int *)(pdVar6 + 1) != 3) {
        if ((*(int *)(pdVar6 + 1) != 4) || (iVar2 = FUN_14005ac80((longlong)*pdVar6 + 0x20), iVar2 == 0)
                ) {
            iVar2 = 0;
            goto LAB_1406c2a69;
        }
        local_10 = 3;
        pdVar6 = &local_18;
    }
    iVar2 = (int)*pdVar6;
    LAB_1406c2a69:
    plVar5 = (longlong *)**(longlong **)(lVar3 + 0x438);
    if (plVar5 != *(longlong **)(lVar3 + 0x438)) {
        do {
            uVar7 = 0;
            if (plVar5[4] != 0) {
                do {
                    lVar1 = *(longlong *)(plVar5[3] + uVar7 * 8);
                    if (*(int *)(lVar1 + 0xc) == iVar2) {
                        *(undefined4 *)(lVar1 + 0x178) = 1;
                    }
                    uVar7 = uVar7 + 1;
                } while (uVar7 < (ulonglong)plVar5[4]);
            }
            plVar5 = (longlong *)*plVar5;
        } while (plVar5 != (longlong *)*(longlong *)(lVar3 + 0x438));
    }
    return 0;
}



undefined8 FUN_1406c2cd0(longlong param_1)

{
    undefined8 *puVar1;
    int iVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    longlong lVar6;
    undefined **local_38;
    int local_30;
    longlong local_28;
    undefined **local_20;
    undefined4 local_18;
    longlong local_10;

    lVar3 = FUN_1406c01c0();
    if (lVar3 != 0) {
        local_30 = 0xfffffffe;
        local_38 = &PTR_FUN_140b56a08;
        local_28 = param_1;
        FUN_1400579e0(param_1);
        puVar1 = *(undefined8 **)(local_28 + 0x10);
        puVar4 = (undefined8 *)(*(longlong *)(local_28 + 0x18) + 0x10);
        puVar5 = &DAT_140a12138;
        if (puVar4 < puVar1) {
            puVar5 = puVar4;
        }
        *puVar1 = *puVar5;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar5 + 1);
        *(longlong *)(local_28 + 0x10) = *(longlong *)(local_28 + 0x10) + 0x10;
        local_30 = FUN_1400578c0(local_28);
        if (local_30 != 0) {
            local_20 = &PTR_FUN_140b56a08;
            local_10 = local_28;
            local_18 = 0xfffffffe;
            iVar2 = (*(code *)local_38[1])(&local_38);
            if (iVar2 != 0) {
                lVar6 = local_28;
                puVar5 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_28 + 0x20) + 0xa0),local_30);
                puVar1 = *(undefined8 **)(lVar6 + 0x10);
                *puVar1 = *puVar5;
                *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar5 + 1);
                *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
                local_18 = FUN_1400578c0(local_10);
            }
            FUN_140774020(lVar3 + 0x400,&local_20);
        }
        local_38 = &PTR_FUN_140b56a08;
        if (local_28 != 0) {
            FUN_1400579e0();
        }
    }
    return 0;
}



undefined8 * FUN_1406c2eb0(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_LAB_140b70540;
    if ((longlong *)param_1[0x86] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x86] + 8))();
        param_1[0x86] = 0;
    }
    FUN_1400c6030(param_1);
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_1406c2f10(longlong param_1,longlong param_2,undefined4 param_3)

{
    longlong **pplVar1;

    if (param_2 == 0) {
        if (*(longlong **)(param_1 + 0x430) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x430) + 8))();
            *(undefined8 *)(param_1 + 0x430) = 0;
        }
        *(undefined *)(param_1 + 0x43c) = 1;
    }
    else {
        pplVar1 = (longlong **)(param_1 + 0x430);
        if (pplVar1 != (longlong **)0x0) {
            if (*pplVar1 != (longlong *)0x0) {
                (**(code **)(**pplVar1 + 8))();
                *pplVar1 = (longlong *)0x0;
            }
            *pplVar1 = *(longlong **)(param_2 + 0x78);
            if (*(undefined8 **)(param_2 + 0x78) != (undefined8 *)0x0) {
                (**(code **)**(undefined8 **)(param_2 + 0x78))();
            }
        }
        *(undefined *)(param_1 + 0x43c) = 0;
    }
    *(undefined4 *)(param_1 + 0x438) = param_3;
    FUN_1406c2fc0(param_1,0);
    return;
}



void FUN_1406c2fc0(longlong param_1,char param_2)

{
    undefined4 *puVar1;
    char cVar2;
    longlong *plVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    char cVar8;
    int iVar9;
    int iVar10;
    longlong lVar11;
    longlong lVar12;
    longlong lVar13;
    longlong *plVar14;
    float fVar15;
    float fVar17;
    float fVar18;
    undefined auVar16 [16];
    float local_48;
    float fStack68;
    float fStack64;
    undefined4 uStack60;

    if (*(int *)(DAT_140c65898 + 0x7b48) != 0x7f) {
        return;
    }
    cVar2 = *(char *)(param_1 + 0x43d);
    cVar8 = *(char *)(param_1 + 0x43e);
    *(undefined2 *)(param_1 + 0x43d) = 0;
    if (*(char *)(param_1 + 0x43c) == '\0') {
        lVar13 = 0;
        if (*(longlong *)(param_1 + 0x430) != 0) {
            lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x430) + 0x10);
        }
        if (lVar13 != 0) {
            if (((((*(byte *)(param_1 + 0x298) >> 1 & 1) != 0) && (iVar9 = FUN_14047bd80(), iVar9 != 0))
                 && (lVar11 = FUN_14047b6d0(), lVar11 != 0)) && (*(int *)(lVar11 + 0x80) == 7)) {
                lVar13 = lVar11;
            }
            iVar10 = FUN_1403d2400();
            iVar9 = DAT_140c636a8;
            lVar11 = 1;
            if (iVar10 == *(int *)(param_1 + 0x420)) {
                *(undefined4 *)(param_1 + 0x424) = 0;
            }
            else {
                *(undefined4 *)(param_1 + 0x424) = 1;
                *(int *)(param_1 + 0x428) = iVar9;
            }
            if ((*(int *)(param_1 + 0x424) != 0) &&
                ((uint)(DAT_140c636a8 - *(int *)(param_1 + 0x428)) < 100)) {
                *(undefined4 *)(param_1 + 0x424) = 0;
                *(uint *)(param_1 + 0x420) = (uint)(*(int *)(param_1 + 0x420) == 0);
            }
            puVar1 = (undefined4 *)(param_1 + 0x400);
            if (*(int *)(param_1 + 0x420) == 0) {
                uVar4 = *(undefined4 *)(lVar13 + 0x11e0);
                uVar5 = *(undefined4 *)(lVar13 + 0x11e4);
                uVar6 = *(undefined4 *)(lVar13 + 0x11e8);
                uVar7 = *(undefined4 *)(lVar13 + 0x11ec);
                *puVar1 = uVar4;
                *(undefined4 *)(param_1 + 0x404) = uVar5;
                *(undefined4 *)(param_1 + 0x408) = uVar6;
                *(undefined4 *)(param_1 + 0x40c) = uVar7;
                *(undefined4 *)(param_1 + 0x410) = uVar4;
                *(undefined4 *)(param_1 + 0x414) = uVar5;
                *(undefined4 *)(param_1 + 0x418) = uVar6;
                *(undefined4 *)(param_1 + 0x41c) = uVar7;
            }
            else {
                *puVar1 = *(undefined4 *)(param_1 + 0x410);
                *(undefined4 *)(param_1 + 0x404) = *(undefined4 *)(param_1 + 0x414);
                *(undefined4 *)(param_1 + 0x408) = *(undefined4 *)(param_1 + 0x418);
                *(undefined4 *)(param_1 + 0x40c) = *(undefined4 *)(param_1 + 0x41c);
            }
            lVar12 = *(longlong *)(lVar13 + 0xf00);
            if (((lVar12 == 0) || ((*(int *)(lVar12 + 0x80) - 3U & 0xfffffff9) != 0)) ||
                (*(int *)(lVar12 + 0x80) == 5)) {
                lVar12 = lVar13;
            }
            plVar14 = *(longlong **)(lVar12 + 0x16f0);
            if ((plVar14 != (longlong *)0x0) ||
                (plVar14 = *(longlong **)(lVar12 + 0x16f8), plVar14 != (longlong *)0x0)) {
                iVar9 = (**(code **)(*plVar14 + 0x100))(plVar14);
                if (((iVar9 != 0) &&
                     ((plVar3 = *(longlong **)(lVar13 + 0x16e8), plVar3 != (longlong *)0x0 &&
                                                                 (iVar9 = (**(code **)(*plVar3 + 0x350))(plVar3,*(undefined4 *)(param_1 + 0x438)),
                                                                         iVar9 != 0)))) &&
                    ((*(longlong *)(DAT_140c65898 + 0x78) == 0 ||
                      (*(longlong *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x3c8) == 0)))) {
                    (**(code **)(*plVar3 + 0x368))(plVar3,*(undefined4 *)(param_1 + 0x438),puVar1,0);
                    *(undefined4 *)(param_1 + 0x410) = *puVar1;
                    *(undefined4 *)(param_1 + 0x414) = *(undefined4 *)(param_1 + 0x404);
                    *(undefined4 *)(param_1 + 0x418) = *(undefined4 *)(param_1 + 0x408);
                    *(undefined4 *)(param_1 + 0x41c) = *(undefined4 *)(param_1 + 0x40c);
                }
                iVar9 = (**(code **)(*plVar14 + 0x100))(plVar14);
                if ((iVar9 != 0) && (iVar9 = (**(code **)(*plVar14 + 0x108))(plVar14,0,1,1), iVar9 == 0)) {
                    lVar11 = 0;
                }
            }
            *(char *)(param_1 + 0x43e) = (char)lVar11;
            iVar9 = DAT_140c636a8;
            if ((char)lVar11 != cVar8) {
                if (*(char *)(param_1 + 0x43f) == '\0') {
                    *(undefined *)(param_1 + 0x43f) = 1;
                    *(int *)(param_1 + 0x440) = iVar9;
                }
                else {
                    *(undefined *)(param_1 + 0x43f) = 0;
                }
            }
        }
        lVar13 = *(longlong *)(DAT_140c65898 + 0x71a8);
        if (lVar13 == 0) {
            lVar13 = *(longlong *)(DAT_140c65898 + 0x71a0);
        }
        lVar11 = *(longlong *)(DAT_140c65898 + 0x71a8);
        if (lVar11 == 0) {
            lVar11 = *(longlong *)(DAT_140c65898 + 0x71a0);
        }
        fVar15 = *(float *)(param_1 + 0x400);
        fVar17 = *(float *)(param_1 + 0x404);
        fVar18 = fVar17 * *(float *)(lVar11 + 0x17c) + fVar15 * *(float *)(lVar11 + 0x16c) +
                 *(float *)(lVar11 + 0x18c) * 0.0 + *(float *)(lVar11 + 0x19c);
        auVar16 = divps(CONCAT412(fVar18,CONCAT48(fVar17 * *(float *)(lVar11 + 0x178) +
                                                  fVar15 * *(float *)(lVar11 + 0x168) +
                                                  *(float *)(lVar11 + 0x188) * 0.0 +
                                                  *(float *)(lVar11 + 0x198),
                                                  CONCAT44(fVar17 * *(float *)(lVar11 + 0x174) +
                                                           fVar15 * *(float *)(lVar11 + 0x164) +
                                                           *(float *)(lVar11 + 0x184) * 0.0 +
                                                           *(float *)(lVar11 + 0x194),
                                                           fVar17 * *(float *)(lVar11 + 0x170) +
                                                           fVar15 * *(float *)(lVar11 + 0x160) +
                                                           *(float *)(lVar11 + 0x180) * 0.0 +
                                                           *(float *)(lVar11 + 400)))),
                        CONCAT412(fVar18,CONCAT48(fVar18,CONCAT44(fVar18,fVar18))) &
                        (undefined  [16])0xffffffffffffffff);
        fStack64 = (*(float *)(lVar13 + 500) - *(float *)(lVar13 + 0x1f0)) * SUB164(auVar16 >> 0x40,0) +
                   *(float *)(lVar13 + 0x1f0);
        if (*(char *)(param_1 + 0x43e) != '\0') {
            iVar9 = DAT_140c53a80;
            if (*DAT_140c63750 < DAT_140c53a80) {
                iVar9 = *DAT_140c63750;
            }
            if ((&DAT_140c53a90)[iVar9] != '\0') {
                *(bool *)(param_1 + 0x43d) = 0.0 <= fStack64;
                goto LAB_1406c3457;
            }
        }
        fStack68 = 1.0 / *(float *)(*(longlong *)(DAT_140c65898 + 0x7340) + 0x58);
        iVar9 = *DAT_140c63750;
        iVar10 = DAT_140c539b0;
        if (iVar9 < DAT_140c539b0) {
            iVar10 = iVar9;
        }
        local_48 = ((SUB164(auVar16,0) + 1.0) * 0.5 * (float)(ulonglong)*(uint *)(lVar13 + 0x1e8) +
                    (float)(ulonglong)*(uint *)(lVar13 + 0x1e0)) * fStack68;
        fStack68 = ((0.5 - SUB164(auVar16 >> 0x20,0) * 0.5) *
                    (float)(ulonglong)*(uint *)(lVar13 + 0x1ec) +
                    (float)(ulonglong)*(uint *)(lVar13 + 0x1e4)) * fStack68;
        fVar15 = local_48 - *(float *)(param_1 + 0x40);
        fVar17 = fStack68 - *(float *)(param_1 + 0x44);
        fVar18 = fStack64 - *(float *)(param_1 + 0x48);
        if ((&DAT_140c539c0)[iVar10] != '\0') {
            iVar10 = DAT_140c539f0;
            if (iVar9 < DAT_140c539f0) {
                iVar10 = iVar9;
            }
            if (fVar15 * fVar15 + fVar17 * fVar17 + fVar18 * fVar18 <
                *(float *)(&DAT_140c53a00 + (longlong)iVar10 * 4)) {
                local_48 = *(float *)(param_1 + 0x40);
                fStack68 = *(float *)(param_1 + 0x44);
                fStack64 = *(float *)(param_1 + 0x48);
                uStack60 = *(undefined4 *)(param_1 + 0x4c);
            }
        }
        *(bool *)(param_1 + 0x43d) = 0.0 <= fStack64;
        if (((0.0 <= fStack64) && (0.0 < *(float *)(param_1 + 0x288))) &&
            ((*(longlong *)(param_1 + 0x10) == 0 || (cVar8 = FUN_1400d1a60(), cVar8 != '\0')))) {
            FUN_1400cc870(param_1,&local_48);
        }
    }
    LAB_1406c3457:
    if ((*(char *)(param_1 + 0x43f) != '\0') &&
        (100 < (uint)(DAT_140c636a8 - *(int *)(param_1 + 0x440)))) {
        *(undefined *)(param_1 + 0x43f) = 0;
        FUN_1400d4040(param_1,"UnitOcclusionChanged",param_1,&DAT_1409f73c4,
                      *(char *)(param_1 + 0x43e) != '\0');
    }
    if ((*(char *)(param_1 + 0x43d) != cVar2) && (param_2 != '\0')) {
        FUN_1400d4040(param_1,"WorldLocationOnScreen",param_1,&DAT_1409f7394,
                      *(char *)(param_1 + 0x43d) != '\0');
    }
    return;
}



void FUN_1406c3500(longlong param_1)

{
    longlong *plVar1;

    plVar1 = *(longlong **)(param_1 + 0x430);
    if (((plVar1 != (longlong *)0x0) && (plVar1[2] == 0)) && (plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 8))();
        *(undefined8 *)(param_1 + 0x430) = 0;
        if ((*(byte *)(param_1 + 0x298) & 1) != 0) {
            FUN_1400c6b20(param_1);
            return;
        }
    }
    FUN_1406c2fc0(param_1,1);
    return;
}



longlong FUN_1406c3560(undefined8 param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    char *pcVar4;

    lVar1 = FUN_1400d66a0(param_1,1);
    if (lVar1 == 0) {
        return 0;
    }
    if ((*(ulonglong *)(lVar1 + 0x1b0) >> 0x26 & 1) == 0) {
        puVar2 = (undefined8 *)FUN_1400580e0(param_1,1);
        if ((puVar2 == &DAT_140a12138) || (*(int *)(puVar2 + 1) == -1)) {
            pcVar4 = s_no_value_140c1dc88;
        }
        else {
            pcVar4 = (&PTR_DAT_140a123b0)[*(int *)(puVar2 + 1)];
        }
        uVar3 = FUN_140058780(param_1,s__s_expected__got__s_140c1db70,"Window",pcVar4);
        FUN_140056570(param_1,1,uVar3);
    }
    return lVar1;
}



undefined8 FUN_1406c3610(longlong param_1)

{
    uint *puVar1;
    longlong lVar2;
    bool bVar3;

    lVar2 = FUN_1406c3560();
    bVar3 = false;
    if (lVar2 != 0) {
        bVar3 = *(char *)(lVar2 + 0x43d) != '\0';
    }
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)bVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406c3660(longlong param_1)

{
    uint *puVar1;
    longlong lVar2;
    bool bVar3;

    lVar2 = FUN_1406c3560();
    bVar3 = false;
    if (lVar2 != 0) {
        bVar3 = *(char *)(lVar2 + 0x43e) != '\0';
    }
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)bVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406c36b0(void)

{
    longlong lVar1;

    lVar1 = FUN_1406c3560();
    if (lVar1 != 0) {
        if (*(longlong **)(lVar1 + 0x430) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(lVar1 + 0x430) + 8))();
            *(undefined8 *)(lVar1 + 0x430) = 0;
        }
        *(undefined *)(lVar1 + 0x43c) = 1;
        FUN_1406c2fc0(lVar1,0);
    }
    return 0;
}



undefined8 FUN_1406c3700(longlong param_1)

{
    undefined4 uVar1;
    longlong lVar2;
    undefined4 *puVar3;
    undefined8 uVar4;
    undefined8 *puVar5;

    lVar2 = FUN_1406c3560();
    if (lVar2 != 0) {
        puVar3 = (undefined4 *)FUN_1406622c0(param_1,2);
        if (puVar3 == (undefined4 *)0x0) {
            uVar4 = 0;
        }
        else {
            uVar4 = FUN_1403d90d0(DAT_140c65898,*puVar3);
        }
        puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20);
        if (((puVar5 < *(undefined8 **)(param_1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
            (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x28))) {
            uVar1 = FUN_140056d60(param_1,3);
        }
        else {
            uVar1 = 1;
        }
        FUN_1406c2f10(lVar2,uVar4,uVar1);
    }
    return 0;
}



undefined8 FUN_1406c37a0(longlong param_1)

{
    longlong lVar1;

    lVar1 = FUN_1406c3560();
    if (lVar1 == 0) {
        return 0;
    }
    lVar1 = *(longlong *)(lVar1 + 0x430);
    if (lVar1 != 0) {
        lVar1 = *(longlong *)(lVar1 + 0x10);
    }
    if (lVar1 != 0) {
        FUN_140649930(param_1);
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406c3800(undefined8 param_1)

{
    char cVar1;
    longlong lVar2;
    undefined4 local_18;
    undefined4 uStack20;
    undefined4 uStack16;
    undefined4 uStack12;

    lVar2 = FUN_1406c3560();
    if (lVar2 != 0) {
        cVar1 = FUN_1400f0960(param_1,2,&local_18);
        if (cVar1 != '\0') {
            if (*(longlong **)(lVar2 + 0x430) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(lVar2 + 0x430) + 8))();
                *(undefined8 *)(lVar2 + 0x430) = 0;
            }
            *(undefined *)(lVar2 + 0x43c) = 0;
            *(undefined4 *)(lVar2 + 0x400) = local_18;
            *(undefined4 *)(lVar2 + 0x404) = uStack20;
            *(undefined4 *)(lVar2 + 0x408) = uStack16;
            *(undefined4 *)(lVar2 + 0x40c) = uStack12;
            FUN_1406c2fc0(lVar2,0);
        }
    }
    return 0;
}



void FUN_1406c3880(undefined8 param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 local_18;
    undefined4 local_10;

    lVar1 = *(longlong *)(param_2 + 0x20);
    local_18 = FUN_140062650(param_2,"Apollo.WorldFixedWindow",0x17);
    local_10 = 4;
    FUN_14005e8e0(param_2,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_2 + 0x10));
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
    FUN_140058bf0(param_2,0xfffffffe);
    return;
}



// WARNING: Removing unreachable block (ram,0x0001406c3c31)

void FUN_1406c38f0(longlong param_1)

{
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
    longlong alStackX16 [3];
    undefined8 uStack40;
    ulonglong uVar13;
    ulonglong uVar17;

    uStack40 = 0x1406c3901;
    lVar4 = FUN_1407f0f60();
    lVar4 = -lVar4;
    *(ulonglong *)(&stack0x00004010 + lVar4) =
            DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffe0 + lVar4);
    lVar2 = *(longlong *)(param_1 + 400);
    *(undefined8 *)(&stack0x00004058 + lVar4) = unaff_RBX;
    *(undefined8 *)(&stack0x00004020 + lVar4) = unaff_R14;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406c3942;
    FUN_1407e4830((longlong)alStackX16 + lVar4);
    uVar15 = 0;
    uVar9 = uVar15;
    uVar13 = uVar15;
    uVar17 = uVar15;
    do {
        uVar12 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar12;
        uVar16 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar16;
        *(undefined8 *)((longlong)alStackX16 + uVar9 + lVar4) =
                *(undefined8 *)((longlong)&PTR_DAT_140c56a80 + uVar9);
        puVar8 = (undefined8 *)((longlong)&PTR_FUN_140c56a88 + uVar9);
        uVar9 = uVar9 + 0x10;
        *(undefined8 *)((longlong)alStackX16 + uVar9 + lVar4 + -8) = *puVar8;
    } while (uVar12 < 0x97);
    lVar14 = (longlong)&PTR_s_SetUnit_140c5e430 +
                        ((longlong)(int)uVar16 * -0x10 - ((longlong)alStackX16 + lVar4));
    puVar8 = (undefined8 *)((longlong)alStackX16 + (longlong)(int)uVar16 * 0x10 + lVar4);
    uVar9 = uVar15;
    do {
        uVar12 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar12;
        *puVar8 = *(undefined8 *)(lVar14 + (longlong)puVar8);
        puVar8[1] = *(undefined8 *)(lVar14 + -8 + (longlong)(puVar8 + 2));
        puVar8 = puVar8 + 2;
    } while (uVar12 < 6);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406c39df;
    LuaElementLoaderOrSo(lVar2,"Apollo.WorldFixedWindow");
    puVar8 = *(undefined8 **)(lVar2 + 0x10);
    iVar1 = *(int *)(puVar8 + -1);
    if (iVar1 == 2) {
        LAB_1406c3a01:
        if (*(int *)(puVar8 + -1) == 2) {
            LAB_1406c3a1d:
            uVar9 = puVar8[-2];
        }
        else if (*(int *)(puVar8 + -1) == 7) {
            uVar9 = puVar8[-2] + 0x30;
        }
        else {
            uVar9 = 0;
        }
    }
    else {
        if ((iVar1 == 5) || (iVar1 == 6)) goto LAB_1406c3a1d;
        if (iVar1 == 7) goto LAB_1406c3a01;
        uVar9 = uVar15;
        if (iVar1 == 8) goto LAB_1406c3a1d;
    }
    *puVar8 = puVar8[-2];
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar8 + -1);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    lVar14 = *(longlong *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406c3a4c;
    uVar5 = FUN_140062650(lVar2,"__index",7);
    lVar11 = *(longlong *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar5;
    *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406c3a72;
    FUN_14005ea50(lVar2,lVar14 + -0x20,(longlong)alStackX16 + lVar4 + -0x10,lVar11 + -0x10);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
    lVar11 = *(longlong *)((longlong)alStackX16 + lVar4);
    lVar6 = *(longlong *)(lVar2 + 0x10);
    lVar14 = (longlong)alStackX16 + lVar4;
    if (lVar11 != 0) {
        *(undefined8 *)(&stack0x00004060 + lVar4) = unaff_RBP;
        do {
            uVar5 = *(undefined8 *)(lVar14 + 8);
            if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406c3aba;
                FUN_14005e2c0(lVar2);
            }
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406c3adf;
            lVar6 = FUN_140060ab0(lVar2,0);
            *(undefined8 *)(lVar6 + 0x20) = uVar5;
            plVar3 = *(longlong **)(lVar2 + 0x10);
            *plVar3 = lVar6;
            *(undefined4 *)(plVar3 + 1) = 6;
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406c3b03;
            uVar5 = FUN_1400580e0(lVar2,0xfffffffe);
            lVar6 = -1;
            do {
                lVar6 = lVar6 + 1;
            } while (*(char *)(lVar11 + lVar6) != '\0');
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406c3b24;
            uVar7 = FUN_140062650(lVar2,lVar11);
            lVar11 = *(longlong *)(lVar2 + 0x10);
            *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar7;
            *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406c3b49;
            FUN_14005ea50(lVar2,uVar5,(longlong)alStackX16 + lVar4 + -0x10,lVar11 + -0x10);
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
            lVar11 = *(longlong *)(lVar14 + 0x10);
            lVar6 = *(longlong *)(lVar2 + 0x10);
            lVar14 = lVar14 + 0x10;
        } while (lVar11 != 0);
    }
    lVar14 = *(longlong *)(lVar2 + 0x20);
    *(longlong *)(lVar2 + 0x10) = lVar6 + -0x10;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406c3b8c;
    uVar7 = FUN_140062650(lVar2,"Apollo.Window",0xd);
    uVar5 = *(undefined8 *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar7;
    *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406c3bb1;
    FUN_14005e8e0(lVar2,lVar14 + 0xa0,(longlong)alStackX16 + lVar4 + -0x10,uVar5);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    lVar14 = *(longlong *)(lVar2 + 0x10);
    iVar1 = *(int *)(lVar14 + -8);
    puVar10 = (ulonglong *)(lVar14 + -0x10);
    if (iVar1 == 2) {
        LAB_1406c3bec:
        if (*(int *)(lVar14 + -8) != 2) {
            if (*(int *)(lVar14 + -8) == 7) {
                uVar15 = *puVar10 + 0x30;
            }
            goto LAB_1406c3c05;
        }
    }
    else if ((iVar1 != 5) && (iVar1 != 6)) {
        if (iVar1 == 7) goto LAB_1406c3bec;
        if (iVar1 != 8) goto LAB_1406c3c05;
    }
    uVar15 = *puVar10;
    LAB_1406c3c05:
    *(ulonglong **)(lVar2 + 0x10) = puVar10;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406c3c14;
    FUN_1400ed720(param_1,uVar9,uVar15);
    *(code **)((longlong)alStackX16 + lVar4 + -0x10) = FUN_1406c3c70;
    *(code **)((longlong)&pcStackX8 + lVar4) = FUN_140001b30;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406c3c4b;
    FUN_1400f85d0(param_1 + 0xa80,L"WorldFixedWindow",(longlong)alStackX16 + lVar4 + -0x10);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406c3c5b;
    FUN_1407db4f0(*(ulonglong *)(&stack0x00004010 + lVar4) ^
                  (ulonglong)(&stack0xffffffffffffffe0 + lVar4));
    return;
}



void FUN_1406c3c70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
    longlong lVar1;
    undefined8 uVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    undefined auStack248 [32];
    undefined *local_d8;
    undefined8 local_d0;
    ulonglong local_c8;
    char local_b8 [16];
    undefined local_a8 [96];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack248;
    uVar4 = 0;
    local_d8 = (undefined *)0x0;
    FUN_1400d45e0(local_a8,param_1,param_2,param_5);
    uVar5 = uVar4;
    do {
        local_b8[0] = '\0';
        lVar1 = FUN_1401a6b80(param_5,(&PTR_u_AutoDestroyWithUnit_140b38e28)[uVar4]);
        if (lVar1 != 0) {
            uVar2 = FUN_1401a4f40(lVar1 + 0x20);
            FUN_1401a52e0(uVar2,local_b8);
            if (local_b8[0] != '\0') {
                uVar5 = uVar5 | 1 << ((byte)uVar4 & 0x3f);
            }
        }
        uVar4 = uVar4 + 1;
    } while (uVar4 < 2);
    puVar3 = (undefined8 *)FUN_14018b280(0x450,0);
    if (puVar3 != (undefined8 *)0x0) {
        local_d8 = local_a8;
        local_d0 = param_4;
        local_c8 = uVar5;
        FUN_1400c5920(puVar3,param_1,param_2,param_3);
        puVar3[0x84] = 0;
        *(undefined4 *)(puVar3 + 0x85) = 0;
        *puVar3 = &PTR_LAB_140b70540;
        puVar3[0x86] = 0;
        puVar3[0x36] = puVar3[0x36] | 0x4000000000;
        *(undefined8 *)((longlong)puVar3 + 0x43c) = 0x10001;
    }
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack248);
    return;
}



void FUN_1406c3de0(undefined8 *param_1)

{
    undefined4 uVar1;
    longlong lVar2;
    char cVar3;
    uint uVar4;
    undefined2 *puVar5;
    longlong lVar6;
    undefined8 uVar7;
    longlong lVar8;
    longlong lVar9;
    undefined8 *puVar10;
    undefined8 *puVar11;
    undefined8 *puVar12;
    longlong lVar13;
    int iVar14;
    int iVar15;
    int iVar16;
    undefined8 in_stack_00000028;
    undefined8 in_stack_00000030;
    undefined8 in_stack_00000038;
    undefined auStack328 [32];
    undefined4 local_128;
    undefined8 local_120;
    undefined local_118;
    undefined8 local_110;
    undefined8 local_108;
    undefined8 local_100;
    undefined8 local_f8;
    undefined4 local_e8;
    undefined4 local_d8;
    undefined4 uStack212;
    undefined4 uStack208;
    undefined4 uStack204;
    undefined8 local_c8 [4];
    undefined4 local_a8 [4];
    undefined4 local_98 [4];
    uint local_88;
    undefined4 local_78 [4];
    undefined8 local_68;
    undefined4 local_60;
    undefined4 local_5c;
    ulonglong local_58;

    local_58 = DAT_140c0f7b0 ^ (ulonglong)auStack328;
    local_f8 = in_stack_00000038;
    local_100 = in_stack_00000030;
    local_108 = in_stack_00000028;
    local_110 = 0;
    local_118 = 0;
    local_120 = 0;
    local_128 = 0;
    FUN_14012fa20(param_1);
    *param_1 = &PTR_LAB_140b70780;
    uVar1 = DAT_140c636a8;
    *(undefined4 *)(param_1 + 0xc5) = DAT_140c636a8;
    param_1[0xc4] = &PTR_FUN_140b54e00;
    param_1[199] = 0;
    *(undefined4 *)(param_1 + 0xc6) = 0;
    *(undefined *)((longlong)param_1 + 0x634) = 0;
    *(undefined4 *)(param_1 + 0xc9) = uVar1;
    param_1[200] = &PTR_FUN_140b54e00;
    param_1[0xcb] = 0;
    *(undefined4 *)(param_1 + 0xca) = 0;
    *(undefined *)((longlong)param_1 + 0x654) = 0;
    *(undefined4 *)(param_1 + 0xcd) = uVar1;
    param_1[0xcc] = &PTR_FUN_140b54e00;
    param_1[0xcf] = 0;
    *(undefined4 *)(param_1 + 0xce) = 0;
    *(undefined *)((longlong)param_1 + 0x674) = 0;
    *(undefined4 *)(param_1 + 0xd1) = uVar1;
    param_1[0xd0] = &PTR_FUN_140b54e00;
    param_1[0xd3] = 0;
    *(undefined4 *)(param_1 + 0xd2) = 0;
    *(undefined *)((longlong)param_1 + 0x694) = 0;
    *(undefined4 *)(param_1 + 0xd5) = uVar1;
    param_1[0xd4] = &PTR_FUN_140b54e00;
    param_1[0xd7] = 0;
    *(undefined4 *)(param_1 + 0xd6) = 0;
    *(undefined *)((longlong)param_1 + 0x6b4) = 0;
    *(undefined4 *)(param_1 + 0xd9) = uVar1;
    param_1[0xd8] = &PTR_FUN_140b54e00;
    param_1[0xdb] = 0;
    *(undefined4 *)(param_1 + 0xda) = 0;
    *(undefined *)((longlong)param_1 + 0x6d4) = 0;
    *(undefined4 *)(param_1 + 0xdd) = uVar1;
    param_1[0xdc] = &PTR_FUN_140b54e00;
    param_1[0xdf] = 0;
    *(undefined4 *)(param_1 + 0xde) = 0;
    *(undefined *)((longlong)param_1 + 0x6f4) = 0;
    FUN_1401095e0(param_1 + 0xe1);
    FUN_1401095e0(param_1 + 0xe7);
    FUN_1401095e0(param_1 + 0xed);
    FUN_1401095e0(param_1 + 0xf3);
    FUN_1401095e0(param_1 + 0xf9);
    FUN_1401095e0(param_1 + 0xff);
    FUN_1401095e0(param_1 + 0x105);
    FUN_1401095e0(param_1 + 0x10b);
    FUN_1401095e0(param_1 + 0x111);
    FUN_1401095e0(param_1 + 0x117);
    FUN_1401095e0(param_1 + 0x11d);
    FUN_1401095e0(param_1 + 0x123);
    FUN_1401095e0(param_1 + 0x129);
    FUN_1401095e0(param_1 + 0x12f);
    puVar11 = param_1 + 0x135;
    iVar16 = 1;
    puVar10 = param_1 + 0x139;
    iVar15 = 1;
    iVar14 = 1;
    do {
        puVar10[-1] = 0;
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar5 = (undefined2 *)FUN_14018b280(0x10);
        puVar10[-1] = puVar5;
        *puVar10 = puVar5;
        puVar10[1] = puVar5 + 8;
        if (puVar5 != (undefined2 *)0x0) {
            *puVar5 = 0;
        }
        uVar1 = DAT_140c63664;
        *puVar11 = 0;
        *(undefined4 *)((longlong)puVar10 + -0x14) = 0x3f800000;
        *(undefined4 *)(puVar10 + -3) = uVar1;
        puVar10 = puVar10 + 6;
        puVar11 = puVar11 + 6;
        iVar14 = iVar14 + -1;
    } while (-1 < iVar14);
    puVar11 = param_1 + 0x141;
    puVar10 = param_1 + 0x145;
    do {
        puVar10[-1] = 0;
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar5 = (undefined2 *)FUN_14018b280(0x10);
        puVar10[-1] = puVar5;
        *puVar10 = puVar5;
        puVar10[1] = puVar5 + 8;
        if (puVar5 != (undefined2 *)0x0) {
            *puVar5 = 0;
        }
        uVar1 = DAT_140c63664;
        *puVar11 = 0;
        *(undefined4 *)((longlong)puVar10 + -0x14) = 0x3f800000;
        *(undefined4 *)(puVar10 + -3) = uVar1;
        puVar10 = puVar10 + 6;
        puVar11 = puVar11 + 6;
        iVar15 = iVar15 + -1;
    } while (-1 < iVar15);
    puVar11 = param_1 + 0x14d;
    iVar15 = 1;
    iVar14 = 1;
    lVar8 = 0;
    puVar10 = param_1 + 0x151;
    do {
        puVar10[-1] = 0;
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar5 = (undefined2 *)FUN_14018b280(0x10);
        puVar10[-1] = puVar5;
        *puVar10 = puVar5;
        puVar10[1] = puVar5 + 8;
        if (puVar5 != (undefined2 *)0x0) {
            *puVar5 = 0;
        }
        uVar1 = DAT_140c63664;
        *puVar11 = 0;
        *(undefined4 *)((longlong)puVar10 + -0x14) = 0x3f800000;
        *(undefined4 *)(puVar10 + -3) = uVar1;
        puVar10 = puVar10 + 6;
        puVar11 = puVar11 + 6;
        iVar14 = iVar14 + -1;
    } while (-1 < iVar14);
    puVar11 = param_1 + 0x159;
    puVar10 = param_1 + 0x15d;
    do {
        puVar10[-1] = 0;
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar5 = (undefined2 *)FUN_14018b280(0x10);
        puVar10[-1] = puVar5;
        *puVar10 = puVar5;
        puVar10[1] = puVar5 + 8;
        if (puVar5 != (undefined2 *)0x0) {
            *puVar5 = 0;
        }
        uVar1 = DAT_140c63664;
        *puVar11 = 0;
        *(undefined4 *)((longlong)puVar10 + -0x14) = 0x3f800000;
        *(undefined4 *)(puVar10 + -3) = uVar1;
        puVar10 = puVar10 + 6;
        puVar11 = puVar11 + 6;
        iVar15 = iVar15 + -1;
    } while (-1 < iVar15);
    puVar11 = param_1 + 0x165;
    lVar9 = 0;
    puVar10 = param_1 + 0x169;
    do {
        puVar10[-1] = 0;
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar5 = (undefined2 *)FUN_14018b280(0x10);
        puVar10[-1] = puVar5;
        *puVar10 = puVar5;
        puVar10[1] = puVar5 + 8;
        if (puVar5 != (undefined2 *)0x0) {
            *puVar5 = 0;
        }
        uVar1 = DAT_140c63664;
        *puVar11 = 0;
        *(undefined4 *)((longlong)puVar10 + -0x14) = 0x3f800000;
        *(undefined4 *)(puVar10 + -3) = uVar1;
        puVar10 = puVar10 + 6;
        puVar11 = puVar11 + 6;
        iVar16 = iVar16 + -1;
    } while (-1 < iVar16);
    *(undefined4 *)(param_1 + 0x171) = 0;
    puVar11 = (undefined8 *)((longlong)param_1 + 0xb8c);
    *(uint *)puVar11 = 0;
    lVar13 = 4;
    *(undefined4 *)(param_1 + 0x17c) = 0;
    puVar10 = param_1 + 0x17a;
    puVar12 = param_1 + 0x174;
    do {
        uVar1 = *(undefined4 *)
                ((longlong)L"VScrollLeftSide" + (0x10 - (longlong)(param_1 + 0x172)) +
                 (longlong)puVar10);
        *(undefined4 *)puVar10 = 0;
        *(undefined4 *)(puVar10 + -2) = uVar1;
        *puVar12 = 0;
        puVar10 = (undefined8 *)((longlong)puVar10 + 4);
        lVar13 = lVar13 + -1;
        puVar12 = puVar12 + 1;
    } while (lVar13 != 0);
    *(uint *)(param_1 + 0x17c) = *(uint *)(param_1 + 0x17c) | 0x300;
    param_1[0x36] = param_1[0x36] | 0x10000000;
    local_e8 = 0x3f800000;
    (**(code **)(param_1[0xc4] + 8))(param_1 + 0xc4,&local_e8);
    local_e8 = 0;
    (**(code **)(param_1[200] + 8))(param_1 + 200,&local_e8);
    local_e8 = 0;
    (**(code **)(param_1[0xcc] + 8))(param_1 + 0xcc,&local_e8);
    local_e8 = 0;
    (**(code **)(param_1[0xd0] + 8))(param_1 + 0xd0,&local_e8);
    local_e8 = 0;
    (**(code **)(param_1[0xd8] + 8))(param_1 + 0xd8,&local_e8);
    local_e8 = 0;
    (**(code **)(param_1[0xd4] + 8))(param_1 + 0xd4,&local_e8);
    lVar13 = param_1[4];
    *(byte *)((longlong)param_1 + 0x1d) = *(byte *)((longlong)param_1 + 0x1d) | 4;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    if ((lVar13 != 0) &&
        ((param_1[0xf9] == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0xfb,L"sprAS_ReadyFlash"), cVar3 == '\0')))) {
        lVar6 = FUN_140108e80(lVar13 + 0xf0,L"sprAS_ReadyFlash");
        lVar13 = lVar9;
        if (lVar6 != 0) {
            do {
                lVar2 = lVar13 + 1;
                lVar13 = lVar13 + 1;
            } while (L"sprAS_ReadyFlash"[lVar2] != L'\0');
            FUN_14001c480(param_1 + 0xfb,L"sprAS_ReadyFlash",L"sprAS_ReadyFlash" + lVar13);
        }
        FUN_1401097f0(param_1 + 0xf9,lVar6);
    }
    lVar13 = param_1[4];
    if ((lVar13 != 0) &&
        ((param_1[0xf3] == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0xf5,L"sprAS_ButtonPress"), cVar3 == '\0')))) {
        lVar13 = FUN_140108e80(lVar13 + 0xf0,L"sprAS_ButtonPress");
        if (lVar13 != 0) {
            do {
                lVar6 = lVar9 + 1;
                lVar9 = lVar9 + 1;
            } while (L"sprAS_ButtonPress"[lVar6] != L'\0');
            FUN_14001c480(param_1 + 0xf5,L"sprAS_ButtonPress",L"sprAS_ButtonPress" + lVar9);
        }
        FUN_1401097f0(param_1 + 0xf3,lVar13);
    }
    lVar9 = param_1[4];
    if ((lVar9 != 0) &&
        ((param_1[0xff] == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0x101,L"sprAS_Interrupt"), cVar3 == '\0')))) {
        lVar13 = FUN_140108e80(lVar9 + 0xf0,L"sprAS_Interrupt");
        lVar9 = lVar8;
        if (lVar13 != 0) {
            do {
                lVar6 = lVar9 + 1;
                lVar9 = lVar9 + 1;
            } while (L"sprAS_Interrupt"[lVar6] != L'\0');
            FUN_14001c480(param_1 + 0x101,L"sprAS_Interrupt",L"sprAS_Interrupt" + lVar9);
        }
        FUN_1401097f0(param_1 + 0xff,lVar13);
    }
    lVar9 = param_1[4];
    if ((lVar9 != 0) &&
        ((param_1[0xe7] == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0xe9,L"sprAS_Prompt_Resource"), cVar3 == '\0')))) {
        lVar13 = FUN_140108e80(lVar9 + 0xf0,L"sprAS_Prompt_Resource");
        lVar9 = lVar8;
        if (lVar13 != 0) {
            do {
                lVar6 = lVar9 + 1;
                lVar9 = lVar9 + 1;
            } while (L"sprAS_Prompt_Resource"[lVar6] != L'\0');
            FUN_14001c480(param_1 + 0xe9,L"sprAS_Prompt_Resource",L"sprAS_Prompt_Resource" + lVar9);
        }
        FUN_1401097f0(param_1 + 0xe7,lVar13);
    }
    lVar9 = param_1[4];
    if ((lVar9 != 0) &&
        ((param_1[0xed] == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0xef,L"sprAS_ChannelCast"), cVar3 == '\0')))) {
        lVar13 = FUN_140108e80(lVar9 + 0xf0,L"sprAS_ChannelCast");
        lVar9 = lVar8;
        if (lVar13 != 0) {
            do {
                lVar6 = lVar9 + 1;
                lVar9 = lVar9 + 1;
            } while (L"sprAS_ChannelCast"[lVar6] != L'\0');
            FUN_14001c480(param_1 + 0xef,L"sprAS_ChannelCast",L"sprAS_ChannelCast" + lVar9);
        }
        FUN_1401097f0(param_1 + 0xed,lVar13);
    }
    lVar9 = param_1[4];
    if ((lVar9 != 0) &&
        ((param_1[0x105] == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0x107,L"sprAS_GCD_OverlayFill"), cVar3 == '\0')))) {
        lVar13 = FUN_140108e80(lVar9 + 0xf0,L"sprAS_GCD_OverlayFill");
        lVar9 = lVar8;
        if (lVar13 != 0) {
            do {
                lVar6 = lVar9 + 1;
                lVar9 = lVar9 + 1;
            } while (L"sprAS_GCD_OverlayFill"[lVar6] != L'\0');
            FUN_14001c480(param_1 + 0x107,L"sprAS_GCD_OverlayFill",L"sprAS_GCD_OverlayFill" + lVar9);
        }
        FUN_1401097f0(param_1 + 0x105,lVar13);
    }
    lVar9 = param_1[4];
    if ((lVar9 != 0) &&
        ((param_1[0x10b] == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0x10d,L"sprAS_OffCooldownFlash"), cVar3 == '\0')))) {
        lVar13 = FUN_140108e80(lVar9 + 0xf0,L"sprAS_OffCooldownFlash");
        lVar9 = lVar8;
        if (lVar13 != 0) {
            do {
                lVar6 = lVar9 + 1;
                lVar9 = lVar9 + 1;
            } while (L"sprAS_OffCooldownFlash"[lVar6] != L'\0');
            FUN_14001c480(param_1 + 0x10d,L"sprAS_OffCooldownFlash",L"sprAS_OffCooldownFlash" + lVar9);
        }
        FUN_1401097f0(param_1 + 0x10b,lVar13);
    }
    lVar9 = param_1[4];
    if ((lVar9 != 0) &&
        ((param_1[0x11d] == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0x11f,L"UI_BK3_ItemDrag_DestinationNoGlow"), cVar3 == '\0')))
            ) {
        lVar13 = FUN_140108e80(lVar9 + 0xf0,L"UI_BK3_ItemDrag_DestinationNoGlow");
        lVar9 = lVar8;
        if (lVar13 != 0) {
            do {
                lVar6 = lVar9 + 1;
                lVar9 = lVar9 + 1;
            } while (L"UI_BK3_ItemDrag_DestinationNoGlow"[lVar6] != L'\0');
            FUN_14001c480(param_1 + 0x11f,L"UI_BK3_ItemDrag_DestinationNoGlow",
                          L"UI_BK3_ItemDrag_DestinationNoGlow" + lVar9);
        }
        FUN_1401097f0(param_1 + 0x11d,lVar13);
    }
    lVar9 = param_1[4];
    if ((lVar9 != 0) &&
        ((param_1[0x123] == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0x125,L"UI_BK3_ItemDrag_DestinationDeniedNoGlow"),
                  cVar3 == '\0')))) {
        lVar13 = FUN_140108e80(lVar9 + 0xf0,L"UI_BK3_ItemDrag_DestinationDeniedNoGlow");
        lVar9 = lVar8;
        if (lVar13 != 0) {
            do {
                lVar6 = lVar9 + 1;
                lVar9 = lVar9 + 1;
            } while (L"UI_BK3_ItemDrag_DestinationDeniedNoGlow"[lVar6] != L'\0');
            FUN_14001c480(param_1 + 0x125,L"UI_BK3_ItemDrag_DestinationDeniedNoGlow",
                          L"UI_BK3_ItemDrag_DestinationDeniedNoGlow" + lVar9);
        }
        FUN_1401097f0(param_1 + 0x123,lVar13);
    }
    lVar9 = param_1[4];
    if ((lVar9 != 0) &&
        ((param_1[0x129] == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 299,L"UI_BK3_ItemDrag_OriginalNoGlow"), cVar3 == '\0')))) {
        lVar13 = FUN_140108e80(lVar9 + 0xf0,L"UI_BK3_ItemDrag_OriginalNoGlow");
        lVar9 = lVar8;
        if (lVar13 != 0) {
            do {
                lVar6 = lVar9 + 1;
                lVar9 = lVar9 + 1;
            } while (L"UI_BK3_ItemDrag_OriginalNoGlow"[lVar6] != L'\0');
            FUN_14001c480(param_1 + 299,L"UI_BK3_ItemDrag_OriginalNoGlow",
                          L"UI_BK3_ItemDrag_OriginalNoGlow" + lVar9);
        }
        FUN_1401097f0(param_1 + 0x129,lVar13);
    }
    lVar9 = param_1[4];
    if ((lVar9 != 0) &&
        ((param_1[0x12f] == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0x131,L"BK3:UI_BK3_PremiumCalloutBanner_01"), cVar3 == '\0'))
        )) {
        lVar13 = FUN_140108e80(lVar9 + 0xf0,L"BK3:UI_BK3_PremiumCalloutBanner_01");
        lVar9 = lVar8;
        if (lVar13 != 0) {
            do {
                lVar6 = lVar9 + 1;
                lVar9 = lVar9 + 1;
            } while (L"BK3:UI_BK3_PremiumCalloutBanner_01"[lVar6] != L'\0');
            FUN_14001c480(param_1 + 0x131,L"BK3:UI_BK3_PremiumCalloutBanner_01",
                          L"BK3:UI_BK3_PremiumCalloutBanner_01" + lVar9);
        }
        FUN_1401097f0(param_1 + 0x12f,lVar13);
    }
    lVar9 = param_1[4];
    if ((lVar9 != 0) &&
        ((param_1[0x135] == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0x137,L"BK3:UI_BK3_MouseKey_BottomBar_Izq"), cVar3 == '\0')))
            ) {
        lVar13 = FUN_140108e80(lVar9 + 0xf0,L"BK3:UI_BK3_MouseKey_BottomBar_Izq");
        lVar9 = lVar8;
        if (lVar13 != 0) {
            do {
                lVar6 = lVar9 + 1;
                lVar9 = lVar9 + 1;
            } while (L"BK3:UI_BK3_MouseKey_BottomBar_Izq"[lVar6] != L'\0');
            FUN_14001c480(param_1 + 0x137,L"BK3:UI_BK3_MouseKey_BottomBar_Izq",
                          L"BK3:UI_BK3_MouseKey_BottomBar_Izq" + lVar9);
        }
        FUN_1401097f0(param_1 + 0x135,lVar13);
    }
    lVar9 = param_1[4];
    if ((lVar9 != 0) &&
        ((param_1[0x141] == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0x143,L"BK3:UI_BK3_MouseKey_BottomBar_Rght"), cVar3 == '\0'))
        )) {
        lVar13 = FUN_140108e80(lVar9 + 0xf0,L"BK3:UI_BK3_MouseKey_BottomBar_Rght");
        lVar9 = lVar8;
        if (lVar13 != 0) {
            do {
                lVar6 = lVar9 + 1;
                lVar9 = lVar9 + 1;
            } while (L"BK3:UI_BK3_MouseKey_BottomBar_Rght"[lVar6] != L'\0');
            FUN_14001c480(param_1 + 0x143,L"BK3:UI_BK3_MouseKey_BottomBar_Rght",
                          L"BK3:UI_BK3_MouseKey_BottomBar_Rght" + lVar9);
        }
        FUN_1401097f0(param_1 + 0x141,lVar13);
    }
    lVar9 = param_1[4];
    if ((lVar9 != 0) &&
        ((param_1[0x14d] == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0x14f,L"BK3:UI_BK3_MouseKey_BottomBar_Scrll"), cVar3 == '\0')
        ))) {
        lVar13 = FUN_140108e80(lVar9 + 0xf0,L"BK3:UI_BK3_MouseKey_BottomBar_Scrll");
        lVar9 = lVar8;
        if (lVar13 != 0) {
            do {
                lVar6 = lVar9 + 1;
                lVar9 = lVar9 + 1;
            } while (L"BK3:UI_BK3_MouseKey_BottomBar_Scrll"[lVar6] != L'\0');
            FUN_14001c480(param_1 + 0x14f,L"BK3:UI_BK3_MouseKey_BottomBar_Scrll",
                          L"BK3:UI_BK3_MouseKey_BottomBar_Scrll" + lVar9);
        }
        FUN_1401097f0(param_1 + 0x14d,lVar13);
    }
    lVar9 = param_1[4];
    if ((lVar9 != 0) &&
        ((param_1[0x159] == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0x15b,L"BK3:UI_BK3_MouseKey_BottomBar_ScrUp"), cVar3 == '\0')
        ))) {
        lVar13 = FUN_140108e80(lVar9 + 0xf0,L"BK3:UI_BK3_MouseKey_BottomBar_ScrUp");
        lVar9 = lVar8;
        if (lVar13 != 0) {
            do {
                lVar6 = lVar9 + 1;
                lVar9 = lVar9 + 1;
            } while (L"BK3:UI_BK3_MouseKey_BottomBar_ScrUp"[lVar6] != L'\0');
            FUN_14001c480(param_1 + 0x15b,L"BK3:UI_BK3_MouseKey_BottomBar_ScrUp",
                          L"BK3:UI_BK3_MouseKey_BottomBar_ScrUp" + lVar9);
        }
        FUN_1401097f0(param_1 + 0x159,lVar13);
    }
    lVar9 = param_1[4];
    if ((lVar9 != 0) &&
        ((param_1[0x165] == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0x167,L"BK3:UI_BK3_MouseKey_BottomBar_ScrDwn"), cVar3 == '\0'
          )))) {
        lVar13 = FUN_140108e80(lVar9 + 0xf0,L"BK3:UI_BK3_MouseKey_BottomBar_ScrDwn");
        lVar9 = lVar8;
        if (lVar13 != 0) {
            do {
                lVar6 = lVar9 + 1;
                lVar9 = lVar9 + 1;
            } while (L"BK3:UI_BK3_MouseKey_BottomBar_ScrDwn"[lVar6] != L'\0');
            FUN_14001c480(param_1 + 0x167,L"BK3:UI_BK3_MouseKey_BottomBar_ScrDwn",
                          L"BK3:UI_BK3_MouseKey_BottomBar_ScrDwn" + lVar9);
        }
        FUN_1401097f0(param_1 + 0x165,lVar13);
    }
    lVar9 = param_1[4];
    if ((lVar9 != 0) &&
        ((param_1[0x13b] == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0x13d,L"BK3:UI_BK3_MouseKey_BottomBar_Izq1_Red"),
                  cVar3 == '\0')))) {
        lVar13 = FUN_140108e80(lVar9 + 0xf0,L"BK3:UI_BK3_MouseKey_BottomBar_Izq1_Red");
        lVar9 = lVar8;
        if (lVar13 != 0) {
            do {
                lVar6 = lVar9 + 1;
                lVar9 = lVar9 + 1;
            } while (L"BK3:UI_BK3_MouseKey_BottomBar_Izq1_Red"[lVar6] != L'\0');
            FUN_14001c480(param_1 + 0x13d,L"BK3:UI_BK3_MouseKey_BottomBar_Izq1_Red",
                          L"BK3:UI_BK3_MouseKey_BottomBar_Izq1_Red" + lVar9);
        }
        FUN_1401097f0(param_1 + 0x13b,lVar13);
    }
    lVar9 = param_1[4];
    if ((lVar9 != 0) &&
        ((param_1[0x147] == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0x149,L"BK3:UI_BK3_MouseKey_BottomBar_Rght_Red"),
                  cVar3 == '\0')))) {
        lVar13 = FUN_140108e80(lVar9 + 0xf0,L"BK3:UI_BK3_MouseKey_BottomBar_Rght_Red");
        lVar9 = lVar8;
        if (lVar13 != 0) {
            do {
                lVar6 = lVar9 + 1;
                lVar9 = lVar9 + 1;
            } while (L"BK3:UI_BK3_MouseKey_BottomBar_Rght_Red"[lVar6] != L'\0');
            FUN_14001c480(param_1 + 0x149,L"BK3:UI_BK3_MouseKey_BottomBar_Rght_Red",
                          L"BK3:UI_BK3_MouseKey_BottomBar_Rght_Red" + lVar9);
        }
        FUN_1401097f0(param_1 + 0x147,lVar13);
    }
    lVar9 = param_1[4];
    if ((lVar9 != 0) &&
        ((param_1[0x153] == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0x155,L"BK3:UI_BK3_MouseKey_BottomBar_Scrll_Red"),
                  cVar3 == '\0')))) {
        lVar13 = FUN_140108e80(lVar9 + 0xf0,L"BK3:UI_BK3_MouseKey_BottomBar_Scrll_Red");
        lVar9 = lVar8;
        if (lVar13 != 0) {
            do {
                lVar6 = lVar9 + 1;
                lVar9 = lVar9 + 1;
            } while (L"BK3:UI_BK3_MouseKey_BottomBar_Scrll_Red"[lVar6] != L'\0');
            FUN_14001c480(param_1 + 0x155,L"BK3:UI_BK3_MouseKey_BottomBar_Scrll_Red",
                          L"BK3:UI_BK3_MouseKey_BottomBar_Scrll_Red" + lVar9);
        }
        FUN_1401097f0(param_1 + 0x153,lVar13);
    }
    lVar9 = param_1[4];
    if ((lVar9 != 0) &&
        ((param_1[0x15f] == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0x161,L"BK3:UI_BK3_MouseKey_BottomBar_ScrUp_Red"),
                  cVar3 == '\0')))) {
        lVar13 = FUN_140108e80(lVar9 + 0xf0,L"BK3:UI_BK3_MouseKey_BottomBar_ScrUp_Red");
        lVar9 = lVar8;
        if (lVar13 != 0) {
            do {
                lVar6 = lVar9 + 1;
                lVar9 = lVar9 + 1;
            } while (L"BK3:UI_BK3_MouseKey_BottomBar_ScrUp_Red"[lVar6] != L'\0');
            FUN_14001c480(param_1 + 0x161,L"BK3:UI_BK3_MouseKey_BottomBar_ScrUp_Red",
                          L"BK3:UI_BK3_MouseKey_BottomBar_ScrUp_Red" + lVar9);
        }
        FUN_1401097f0(param_1 + 0x15f,lVar13);
    }
    lVar9 = param_1[4];
    if ((lVar9 != 0) &&
        ((param_1[0x16b] == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0x16d,L"BK3:UI_BK3_MouseKey_BottomBar_ScrDwn_Red"),
                  cVar3 == '\0')))) {
        lVar13 = FUN_140108e80(lVar9 + 0xf0,L"BK3:UI_BK3_MouseKey_BottomBar_ScrDwn_Red");
        lVar9 = lVar8;
        if (lVar13 != 0) {
            do {
                lVar6 = lVar9 + 1;
                lVar9 = lVar9 + 1;
            } while (L"BK3:UI_BK3_MouseKey_BottomBar_ScrDwn_Red"[lVar6] != L'\0');
            FUN_14001c480(param_1 + 0x16d,L"BK3:UI_BK3_MouseKey_BottomBar_ScrDwn_Red",
                          L"BK3:UI_BK3_MouseKey_BottomBar_ScrDwn_Red" + lVar9);
        }
        FUN_1401097f0(param_1 + 0x16b,lVar13);
    }
    local_78[0] = 0;
    local_78[2] = 0;
    local_78[3] = 0x3f800000;
    local_68 = 2;
    local_60 = 6;
    local_78[1] = 0x3f000000;
    local_5c = 0xfffffffe;
    local_88 = 0;
    puVar10 = local_c8;
    do {
        lVar9 = lVar8 + 4;
        *(undefined4 *)((longlong)local_a8 + lVar8) = *(undefined4 *)((longlong)local_78 + lVar8);
        *(undefined4 *)((longlong)local_98 + lVar8) = *(undefined4 *)((longlong)&local_68 + lVar8);
        *puVar10 = 0;
        lVar8 = lVar9;
        puVar10 = puVar10 + 1;
    } while (lVar9 < 0x10);
    *(undefined4 *)(param_1 + 0x172) = local_d8;
    *(undefined4 *)((longlong)param_1 + 0xb94) = uStack212;
    *(undefined4 *)(param_1 + 0x173) = uStack208;
    *(undefined4 *)((longlong)param_1 + 0xb9c) = uStack204;
    param_1[0x174] = local_c8[0];
    param_1[0x175] = local_c8[1];
    *(undefined4 *)((longlong)param_1 + 0xbc4) = local_a8[1];
    *(undefined4 *)(param_1 + 0x178) = local_a8[0];
    param_1[0x176] = local_c8[2];
    *(undefined4 *)((longlong)param_1 + 0xbcc) = local_a8[3];
    *(undefined4 *)(param_1 + 0x179) = local_a8[2];
    param_1[0x177] = local_c8[3];
    *(undefined4 *)(param_1 + 0x17a) = local_98[0];
    *(undefined4 *)((longlong)param_1 + 0xbd4) = local_98[1];
    *(undefined4 *)(param_1 + 0x17b) = local_98[2];
    *(undefined4 *)((longlong)param_1 + 0xbdc) = local_98[3];
    *(uint *)(param_1 + 0x17c) = local_88 | 0x300;
    if (param_1[4] != 0) {
        FUN_140109710(param_1 + 0x117,param_1[4] + 0xf0,L"WhiteFill");
    }
    if (param_1[4] != 0) {
        FUN_140109710(param_1 + 0x111,param_1[4] + 0xf0,L"WhiteFill");
    }
    uVar4 = FUN_140142170(DAT_140c63678,L"blue");
    lVar8 = DAT_140c63678;
    if (puVar11 != (undefined8 *)&local_e8) {
        FUN_1401429a0(DAT_140c63678,*(uint *)puVar11);
        lVar8 = DAT_140c63678;
        *(uint *)puVar11 = uVar4;
        if ((ulonglong)uVar4 < *(ulonglong *)(lVar8 + 0x30)) {
            iVar14 = *(int *)(*(longlong *)(lVar8 + 0x28) + 0x10 + (ulonglong)uVar4 * 0x20);
            if (iVar14 - 1U < 0xfffffffe) {
                *(int *)(*(longlong *)(lVar8 + 0x28) + 0x10 + (ulonglong)uVar4 * 0x20) = iVar14 + 1;
            }
        }
    }
    FUN_1401429a0(lVar8,(ulonglong)uVar4);
    uVar4 = FUN_140142170(DAT_140c63678,L"black");
    puVar10 = param_1 + 0x171;
    lVar8 = DAT_140c63678;
    if (puVar10 != (undefined8 *)&local_e8) {
        FUN_1401429a0(DAT_140c63678,*(undefined4 *)puVar10);
        lVar8 = DAT_140c63678;
        *(uint *)puVar10 = uVar4;
        if ((ulonglong)uVar4 < *(ulonglong *)(lVar8 + 0x30)) {
            iVar14 = *(int *)((ulonglong)uVar4 * 0x20 + 0x10 + *(longlong *)(lVar8 + 0x28));
            if (iVar14 - 1U < 0xfffffffe) {
                *(int *)((ulonglong)uVar4 * 0x20 + 0x10 + *(longlong *)(lVar8 + 0x28)) = iVar14 + 1;
            }
        }
    }
    FUN_1401429a0(lVar8,(ulonglong)uVar4);
    uVar7 = FUN_1400e58c0(param_1[4],L"Thick");
    param_1[0x180] = uVar7;
    uVar7 = FUN_1400e58c0(param_1[4],L"CRB_Pixel_O");
    param_1[0x17e] = uVar7;
    uVar7 = FUN_1400e58c0(param_1[4],L"CRB_Pixel_O");
    param_1[0x17f] = uVar7;
    uVar7 = FUN_1400e58c0(param_1[4],L"CRB_HeaderMedium");
    param_1[0x181] = uVar7;
    FUN_1407db4f0(local_58 ^ (ulonglong)auStack328);
    return;
}



undefined8 FUN_1406c5010(undefined8 param_1,ulonglong param_2)

{
    FUN_1406c5050();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_1406c5050(longlong param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    undefined8 *puVar4;

    FUN_1401429a0(DAT_140c63678,*(undefined4 *)(param_1 + 0xb8c));
    FUN_1401429a0(DAT_140c63678,*(undefined4 *)(param_1 + 0xb88));
    iVar1 = 1;
    iVar3 = 1;
    puVar4 = (undefined8 *)(param_1 + 0xb88);
    iVar2 = iVar3;
    do {
        if ((longlong *)puVar4[-6] != (longlong *)0x0) {
            (**(code **)(*(longlong *)puVar4[-6] + 8))();
            puVar4[-6] = 0;
        }
        if (puVar4[-3] != 0) {
            FUN_14018b900(puVar4[-3],0);
        }
        iVar2 = iVar2 + -1;
        puVar4 = puVar4 + -6;
    } while (-1 < iVar2);
    puVar4 = (undefined8 *)(param_1 + 0xb28);
    do {
        if ((longlong *)puVar4[-6] != (longlong *)0x0) {
            (**(code **)(*(longlong *)puVar4[-6] + 8))();
            puVar4[-6] = 0;
        }
        if (puVar4[-3] != 0) {
            FUN_14018b900(puVar4[-3],0);
        }
        iVar3 = iVar3 + -1;
        puVar4 = puVar4 + -6;
    } while (-1 < iVar3);
    iVar3 = 1;
    puVar4 = (undefined8 *)(param_1 + 0xac8);
    iVar2 = iVar3;
    do {
        if ((longlong *)puVar4[-6] != (longlong *)0x0) {
            (**(code **)(*(longlong *)puVar4[-6] + 8))();
            puVar4[-6] = 0;
        }
        if (puVar4[-3] != 0) {
            FUN_14018b900(puVar4[-3],0);
        }
        iVar2 = iVar2 + -1;
        puVar4 = puVar4 + -6;
    } while (-1 < iVar2);
    puVar4 = (undefined8 *)(param_1 + 0xa68);
    do {
        if ((longlong *)puVar4[-6] != (longlong *)0x0) {
            (**(code **)(*(longlong *)puVar4[-6] + 8))();
            puVar4[-6] = 0;
        }
        if (puVar4[-3] != 0) {
            FUN_14018b900(puVar4[-3],0);
        }
        iVar3 = iVar3 + -1;
        puVar4 = puVar4 + -6;
    } while (-1 < iVar3);
    puVar4 = (undefined8 *)(param_1 + 0xa08);
    do {
        if ((longlong *)puVar4[-6] != (longlong *)0x0) {
            (**(code **)(*(longlong *)puVar4[-6] + 8))();
            puVar4[-6] = 0;
        }
        if (puVar4[-3] != 0) {
            FUN_14018b900(puVar4[-3],0);
        }
        iVar1 = iVar1 + -1;
        puVar4 = puVar4 + -6;
    } while (-1 < iVar1);
    if (*(longlong **)(param_1 + 0x978) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x978) + 8))();
        *(undefined8 *)(param_1 + 0x978) = 0;
    }
    if (*(longlong *)(param_1 + 0x990) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0x990),0);
    }
    if (*(longlong **)(param_1 + 0x948) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x948) + 8))();
        *(undefined8 *)(param_1 + 0x948) = 0;
    }
    if (*(longlong *)(param_1 + 0x960) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0x960),0);
    }
    if (*(longlong **)(param_1 + 0x918) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x918) + 8))();
        *(undefined8 *)(param_1 + 0x918) = 0;
    }
    if (*(longlong *)(param_1 + 0x930) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0x930),0);
    }
    if (*(longlong **)(param_1 + 0x8e8) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x8e8) + 8))();
        *(undefined8 *)(param_1 + 0x8e8) = 0;
    }
    if (*(longlong *)(param_1 + 0x900) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0x900),0);
    }
    if (*(longlong **)(param_1 + 0x8b8) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x8b8) + 8))();
        *(undefined8 *)(param_1 + 0x8b8) = 0;
    }
    if (*(longlong *)(param_1 + 0x8d0) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0x8d0),0);
    }
    if (*(longlong **)(param_1 + 0x888) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x888) + 8))();
        *(undefined8 *)(param_1 + 0x888) = 0;
    }
    if (*(longlong *)(param_1 + 0x8a0) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0x8a0),0);
    }
    if (*(longlong **)(param_1 + 0x858) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x858) + 8))();
        *(undefined8 *)(param_1 + 0x858) = 0;
    }
    if (*(longlong *)(param_1 + 0x870) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0x870),0);
    }
    if (*(longlong **)(param_1 + 0x828) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x828) + 8))();
        *(undefined8 *)(param_1 + 0x828) = 0;
    }
    if (*(longlong *)(param_1 + 0x840) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0x840),0);
    }
    if (*(longlong **)(param_1 + 0x7f8) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x7f8) + 8))();
        *(undefined8 *)(param_1 + 0x7f8) = 0;
    }
    if (*(longlong *)(param_1 + 0x810) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0x810),0);
    }
    if (*(longlong **)(param_1 + 0x7c8) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x7c8) + 8))();
        *(undefined8 *)(param_1 + 0x7c8) = 0;
    }
    if (*(longlong *)(param_1 + 0x7e0) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0x7e0),0);
    }
    if (*(longlong **)(param_1 + 0x798) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x798) + 8))();
        *(undefined8 *)(param_1 + 0x798) = 0;
    }
    if (*(longlong *)(param_1 + 0x7b0) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0x7b0),0);
    }
    if (*(longlong **)(param_1 + 0x768) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x768) + 8))();
        *(undefined8 *)(param_1 + 0x768) = 0;
    }
    if (*(longlong *)(param_1 + 0x780) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0x780),0);
    }
    if (*(longlong **)(param_1 + 0x738) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x738) + 8))();
        *(undefined8 *)(param_1 + 0x738) = 0;
    }
    if (*(longlong *)(param_1 + 0x750) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0x750),0);
    }
    if (*(longlong **)(param_1 + 0x708) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x708) + 8))();
        *(undefined8 *)(param_1 + 0x708) = 0;
    }
    if (*(longlong *)(param_1 + 0x720) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0x720),0);
    }
    FUN_14012fda0(param_1);
    return;
}



ulonglong FUN_1406c5440(longlong param_1)

{
    wchar_t wVar1;
    ushort uVar2;
    longlong lVar3;
    ulonglong *puVar4;
    char cVar5;
    int iVar6;
    longlong lVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    ulonglong uVar13;
    uint uVar14;
    ulonglong uVar15;

    uVar12 = 0;
    uVar13 = 0;
    lVar7 = param_1 + 0x5b8;
    uVar10 = uVar12;
    do {
        uVar10 = uVar10 + 1;
    } while (L"LASBar"[uVar10] != L'\0');
    lVar3 = *(longlong *)(param_1 + 0x5c0);
    uVar15 = *(longlong *)(param_1 + 0x5c8) - lVar3 >> 1;
    uVar9 = uVar12;
    if (uVar15 == uVar10) {
        uVar8 = uVar12;
        if (uVar10 != 0) {
            do {
                wVar1 = *(wchar_t *)(lVar3 + uVar8 * 2);
                if (wVar1 != L"LASBar"[uVar8]) {
                    iVar6 = 1;
                    if ((ushort)wVar1 < (ushort)L"LASBar"[uVar8]) {
                        iVar6 = -1;
                    }
                    if (iVar6 != 0) goto LAB_1406c5530;
                    break;
                }
                uVar8 = uVar8 + 1;
            } while (uVar8 < uVar10);
        }
        uVar10 = FUN_1403c1ea0(DAT_140c65898,*(uint *)(param_1 + 0x5d8) % 0xc,
                               *(undefined *)(DAT_140c65898 + 0x6dec));
    }
    else {
        LAB_1406c5530:
        do {
            uVar9 = uVar9 + 1;
        } while ((&DAT_140b39778)[uVar9] != 0);
        uVar8 = uVar12;
        if (uVar15 == uVar9) {
            uVar10 = uVar12;
            if (uVar9 != 0) {
                do {
                    uVar2 = *(ushort *)(lVar3 + uVar10 * 2);
                    if (uVar2 != (&DAT_140b39778)[uVar10]) {
                        iVar6 = 1;
                        if (uVar2 < (ushort)(&DAT_140b39778)[uVar10]) {
                            iVar6 = -1;
                        }
                        if (iVar6 != 0) goto LAB_1406c55b0;
                        break;
                    }
                    uVar10 = uVar10 + 1;
                } while (uVar10 < uVar9);
            }
            uVar10 = FUN_1403c1ea0(DAT_140c65898,*(undefined4 *)(param_1 + 0x5d8),
                                   *(undefined *)(DAT_140c65898 + 0x6dec));
        }
        else {
            LAB_1406c55b0:
            do {
                uVar8 = uVar8 + 1;
            } while ((&DAT_140b39768)[uVar8] != 0);
            uVar9 = uVar12;
            uVar10 = uVar13;
            if (uVar15 == uVar8) {
                uVar11 = uVar12;
                if (uVar8 != 0) {
                    do {
                        uVar2 = *(ushort *)(lVar3 + uVar11 * 2);
                        if (uVar2 != (&DAT_140b39768)[uVar11]) {
                            iVar6 = 1;
                            if (uVar2 < (ushort)(&DAT_140b39768)[uVar11]) {
                                iVar6 = -1;
                            }
                            if (iVar6 != 0) goto LAB_1406c5690;
                            break;
                        }
                        uVar11 = uVar11 + 1;
                    } while (uVar11 < uVar8);
                }
                uVar10 = uVar12;
                if (*(int *)(param_1 + 0x5d8) == 0) {
                    puVar4 = *(ulonglong **)(DAT_140c65898 + 0x7368);
                    if (*puVar4 < puVar4[2]) {
                        uVar10 = *(ulonglong *)(*(longlong *)(puVar4[1] + *puVar4 * 8) + 0x10);
                    }
                }
                else {
                    uVar9 = *(ulonglong *)(*(longlong *)(DAT_140c65898 + 0x7368) + 0x10);
                    if (uVar9 != 0) {
                        lVar7 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7368) + 8);
                        do {
                            if (*(int *)(*(longlong *)(lVar7 + uVar12 * 8) + 0xc) == *(int *)(param_1 + 0x5d8)) {
                                return *(ulonglong *)(*(longlong *)(lVar7 + uVar12 * 8) + 0x10);
                            }
                            uVar12 = (ulonglong)((int)uVar12 + 1);
                            uVar10 = uVar13;
                        } while (uVar12 < uVar9);
                    }
                }
            }
            else {
                LAB_1406c5690:
                do {
                    uVar9 = uVar9 + 1;
                } while ((&DAT_140b39788)[uVar9] != 0);
                if (uVar15 == uVar9) {
                    if (uVar9 != 0) {
                        do {
                            uVar2 = *(ushort *)(lVar3 + uVar12 * 2);
                            if (uVar2 != (&DAT_140b39788)[uVar12]) {
                                iVar6 = 1;
                                if (uVar2 < (ushort)(&DAT_140b39788)[uVar12]) {
                                    iVar6 = -1;
                                }
                                if (iVar6 != 0) goto LAB_1406c5748;
                                break;
                            }
                            uVar12 = uVar12 + 1;
                        } while (uVar12 < uVar9);
                    }
                }
                else {
                    LAB_1406c5748:
                    cVar5 = FUN_14002c740();
                    if (cVar5 == '\0') {
                        cVar5 = FUN_14002c740(lVar7,L"GCBar");
                        if (cVar5 != '\0') {
                            if (0x23 < *(uint *)(param_1 + 0x5d8)) {
                                return 0;
                            }
                            return (&DAT_140c89d80)[(int)*(uint *)(param_1 + 0x5d8)];
                        }
                        cVar5 = FUN_14002c740(lVar7,L"TSQBar");
                        if ((((cVar5 == '\0') && (cVar5 = FUN_14002c740(lVar7,L"TSQOBar"), cVar5 == '\0')) &&
                             (cVar5 = FUN_14002c740(lVar7,L"TSPEOBar"), cVar5 == '\0')) &&
                            ((cVar5 = FUN_14002c740(lVar7,L"TSMBar"), cVar5 == '\0' &&
                                                                      (cVar5 = FUN_14002c740(lVar7,L"TSCBar"), cVar5 == '\0')))) {
                            cVar5 = FUN_14002c740(lVar7,L"BTBar");
                            if ((cVar5 != '\0') && (lVar7 = FUN_140584690(), lVar7 != 0)) {
                                uVar10 = FUN_1405800e0(lVar7,*(undefined4 *)(param_1 + 0x5d8));
                                return uVar10;
                            }
                        }
                        else {
                            lVar7 = FUN_1403ba420();
                            if (lVar7 != 0) {
                                return *(ulonglong *)(lVar7 + 0x10);
                            }
                        }
                        return 0;
                    }
                }
                uVar12 = (ulonglong)*(uint *)(param_1 + 0x5d8) / 0xc;
                uVar14 = *(uint *)(param_1 + 0x5d8) % 0xc;
                if (((*(longlong *)(DAT_140c65898 + 0x78) != 0) && (uVar14 < 0xc)) && ((uint)uVar12 < 9)) {
                    uVar10 = *(ulonglong *)(DAT_140c65898 + 0x10e8 + ((ulonglong)uVar14 + uVar12 * 0xc) * 8);
                }
            }
        }
    }
    return uVar10;
}



ulonglong FUN_1406c59f0(undefined8 param_1)

{
    longlong *plVar1;
    uint extraout_XMM0_Da;
    ulonglong extraout_XMM0_Qa;
    ulonglong uVar2;

    FUN_140001c90();
    plVar1 = (longlong *)FUN_1406c5440(param_1);
    uVar2 = extraout_XMM0_Qa;
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x78))(plVar1);
        uVar2 = (ulonglong)extraout_XMM0_Da;
    }
    return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1406c5a40(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                   longlong *param_5,undefined4 *param_6,float param_7)

{
    int iVar1;
    longlong lVar2;
    uint uVar3;
    undefined *puVar4;
    undefined auStack232 [32];
    undefined4 *local_c8;
    undefined4 local_c0;
    undefined4 *local_b8;
    undefined4 *local_b0;
    undefined4 local_a8;
    undefined4 local_98;
    undefined4 uStack148;
    undefined4 uStack144;
    undefined4 uStack140;
    undefined4 local_88;
    float fStack132;
    undefined4 uStack128;
    undefined4 uStack124;
    undefined4 local_78;
    float fStack116;
    undefined4 uStack112;
    undefined4 uStack108;
    undefined4 local_68;
    undefined4 uStack100;
    undefined4 uStack96;
    undefined4 uStack92;
    undefined local_58 [2];
    undefined local_56 [30];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack232;
    local_88 = *param_6;
    fStack132 = (float)param_6[1];
    uStack128 = param_6[2];
    uStack124 = param_6[3];
    local_78 = param_6[4];
    fStack116 = (float)param_6[5];
    uStack112 = param_6[6];
    uStack108 = param_6[7];
    (**(code **)(*DAT_140c65680 + 0x90))(DAT_140c65680,1);
    if ((param_5 != (longlong *)0x0) && ((*(uint *)(param_1 + 0x298) >> 0xe & 1) == 0)) {
        (**(code **)(*DAT_140c65680 + 0x90))(DAT_140c65680,1);
        lVar2 = (**(code **)(*param_5 + 0x78))(param_5);
        if (*(int *)(lVar2 + 0x80) == 0) {
            if ((*(uint *)(param_1 + 0x298) >> 0xb & 1) == 0) {
                local_98 = 0x3e19999a;
                uStack148 = 0x3e19999a;
                uStack144 = 0x3e19999a;
                uStack140 = 0x3f400000;
                if (*param_3 != 0) {
                    local_c8 = (undefined4 *)
                            ((ulonglong)local_c8 & 0xffffffff00000000 |
                             (ulonglong)
                                     (uint)((DAT_140c63664 - *(float *)(param_3 + 1)) *
                                            *(float *)((longlong)param_3 + 0xc)));
                    FUN_140103e60(*param_3,&local_88,&local_98,0);
                }
            }
            lVar2 = (**(code **)(*param_5 + 0x78))(param_5);
            uVar3 = *(uint *)(lVar2 + 0x88);
            if (uVar3 < 1000) {
                lVar2 = FUN_14034bdd0();
                if (lVar2 == 0) goto LAB_1406c5cd6;
                iVar1 = FUN_14034bf80(local_58,0x10,lVar2,(double)((float)(ulonglong)uVar3 * 0.001));
                if (iVar1 < 0) goto LAB_1406c5cd6;
                puVar4 = local_56;
            }
            else {
                if (uVar3 < 100000) {
                    lVar2 = FUN_14034bdd0();
                    if (lVar2 == 0) goto LAB_1406c5cd6;
                    uVar3 = uVar3 / 1000;
                }
                else if (uVar3 < 3600000) {
                    lVar2 = FUN_14034bdd0();
                    if (lVar2 == 0) goto LAB_1406c5cd6;
                    uVar3 = (uVar3 + 30000) / 60000;
                }
                else {
                    lVar2 = FUN_14034bdd0();
                    if (lVar2 == 0) goto LAB_1406c5cd6;
                    uVar3 = uVar3 / 3600000;
                }
                iVar1 = FUN_14034bf80(local_58,0x10,lVar2,uVar3);
                if (iVar1 < 0) goto LAB_1406c5cd6;
                puVar4 = local_58;
            }
            local_a8 = 1;
            local_b0 = &local_98;
            local_b8 = &local_68;
            local_98 = _DAT_140c777d0;
            uStack148 = uRam0000000140c777d4;
            uStack144 = uRam0000000140c777d8;
            uStack140 = uRam0000000140c777dc;
            local_68 = 0x3f800000;
            uStack100 = 0x3f800000;
            uStack96 = 0x3f800000;
            uStack92 = 0x3f800000;
            local_c8 = &local_88;
            local_c0 = 5;
            (**(code **)(*DAT_140c65680 + 0x100))
                    (DAT_140c65680,*(undefined8 *)(param_2 + 0x60),puVar4,0xffffffffffffffff);
        }
        else {
            fStack116 = fStack116 - (fStack116 - fStack132) * param_7;
            local_98 = 0x3f800000;
            uStack148 = 0x3f800000;
            uStack144 = 0x3f800000;
            uStack140 = 0x3f800000;
            if (*param_4 != 0) {
                local_c8 = (undefined4 *)
                        ((ulonglong)local_c8 & 0xffffffff00000000 |
                         (ulonglong)
                                 (uint)((DAT_140c63664 - *(float *)(param_4 + 1)) *
                                        *(float *)((longlong)param_4 + 0xc)));
                FUN_140103e60(*param_4,&local_88,&local_98,0);
            }
        }
    }
    LAB_1406c5cd6:
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack232);
    return;
}



void FUN_1406c5d00(undefined8 param_1,undefined4 param_2,longlong param_3)

{
    undefined8 uVar1;
    undefined8 uVar2;
    undefined local_38 [48];

    uVar1 = FUN_1406c5d70(param_3,local_38);
    uVar2 = FUN_1406c5440(param_3);
    FUN_1406c5a40(param_3,*(undefined8 *)(param_3 + 0xc08),param_3 + 0x708,param_3 + 0x828,uVar2,uVar1
            ,param_2);
    return;
}



void FUN_1406c5d70(longlong param_1,undefined (*param_2) [16])

{
    int iVar1;
    undefined8 uVar2;
    uint uVar3;
    ulonglong uVar4;
    longlong lVar5;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    undefined auStack168 [32];
    float local_88;
    float fStack132;
    float fStack128;
    float fStack124;
    float local_78 [3];
    undefined8 local_6c;
    undefined4 local_64;
    undefined4 local_60;
    undefined4 local_5c;
    ulonglong local_58;

    local_58 = DAT_140c0f7b0 ^ (ulonglong)auStack168;
    iVar1 = *(int *)(param_1 + 0x2d8);
    uVar2 = *(undefined8 *)(param_1 + 0x2d4);
    *param_2 = ZEXT816(CONCAT44((float)*(int *)(param_1 + 0x2d0),
                                (float)(int)*(undefined8 *)(param_1 + 0x2cc)));
    param_2[1] = ZEXT816(CONCAT44((float)iVar1,(float)(int)uVar2));
    if ((*(uint *)(param_1 + 0x298) >> 0xd & 1) != 0) {
        lVar5 = *(longlong *)(param_1 + 0xbf8);
        uVar4 = 0;
        if (**(short **)(param_1 + 0x5e8) != 0) {
            do {
                uVar4 = uVar4 + 1;
            } while ((*(short **)(param_1 + 0x5e8))[uVar4] != 0);
            if (1 < uVar4) {
                lVar5 = *(longlong *)(param_1 + 0xbf0);
            }
        }
        if (lVar5 != 0) {
            *(float *)(param_2[1] + 4) = *(float *)(param_2[1] + 4) - *(float *)(lVar5 + 0x5c);
        }
    }
    fVar8 = *(float *)param_2[1] - *(float *)*param_2;
    (***(code ***)(param_1 + 0x620))(param_1 + 0x620);
    fVar8 = extraout_XMM0_Da * fVar8;
    fVar9 = *(float *)(param_2[1] + 4) - *(float *)(*param_2 + 4);
    (***(code ***)(param_1 + 0x620))(param_1 + 0x620);
    fVar9 = extraout_XMM0_Da_00 * fVar9;
    local_88 = (*(float *)param_2[1] + *(float *)*param_2) * 0.5;
    fStack132 = (*(float *)(param_2[1] + 4) + *(float *)(*param_2 + 4)) * 0.5;
    fStack128 = (*(float *)(param_2[1] + 8) + *(float *)(*param_2 + 8)) * 0.5;
    fStack124 = (*(float *)(param_2[1] + 0xc) + *(float *)(*param_2 + 0xc)) * 0.5;
    (***(code ***)(param_1 + 0x6c0))();
    fVar7 = local_88;
    if (0.0 < extraout_XMM0_Da_01) {
        *(int *)(param_1 + 0x700) = *(int *)(param_1 + 0x700) + 1;
        uVar3 = *(uint *)(param_1 + 0x700);
        local_78[0] = 0.0;
        local_78[1] = -2.0;
        local_78[2] = 0.0;
        if (7 < uVar3) {
            uVar3 = 0;
        }
        local_6c = 0x40000000;
        local_64 = 0xc0000000;
        *(uint *)(param_1 + 0x700) = uVar3;
        local_60 = 0;
        local_5c = 0x40000000;
        fVar7 = local_88 + local_78[uVar3];
    }
    fVar7 = fVar7 - fVar8 * 0.5;
    *(float *)*param_2 = fVar7;
    fVar6 = fStack132 - fVar9 * 0.5;
    *(float *)param_2[1] = fVar7 + fVar8;
    *(float *)(*param_2 + 4) = fVar6;
    *(float *)(param_2[1] + 4) = fVar6 + fVar9;
    FUN_1407db4f0(local_58 ^ (ulonglong)auStack168);
    return;
}



// WARNING: Removing unreachable block (ram,0x0001406c629f)
// WARNING: Removing unreachable block (ram,0x0001406c6896)
// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1406c5f80(longlong param_1)

{
    float fVar1;
    int iVar2;
    short *psVar3;
    int iVar4;
    int iVar5;
    uint uVar6;
    longlong *plVar7;
    longlong lVar8;
    float *pfVar9;
    longlong *plVar10;
    undefined *puVar11;
    uint uVar12;
    uint uVar13;
    longlong *plVar14;
    short *psVar15;
    longlong lVar16;
    uint uVar17;
    longlong *plVar18;
    float fVar19;
    undefined auVar20 [16];
    float fVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    undefined auStack440 [32];
    undefined8 local_198;
    uint local_190;
    longlong local_188;
    undefined4 local_180;
    float local_178;
    float fStack372;
    short *psStack368;
    undefined local_168 [8];
    undefined8 uStack352;
    undefined local_158 [8];
    undefined8 uStack336;
    undefined local_148 [4];
    undefined auStack324 [12];
    undefined local_138 [4];
    undefined auStack308 [8];
    float fStack300;
    uint local_128;
    undefined local_118 [8];
    longlong lStack272;
    undefined8 local_108;
    undefined4 local_100;
    float local_f8;
    float fStack244;
    float fStack240;
    float fStack236;
    float local_e8;
    float fStack228;
    float fStack224;
    float fStack220;
    float local_d8;
    float fStack212;
    float fStack208;
    float fStack204;
    undefined4 local_c8;
    undefined4 uStack196;
    undefined4 uStack192;
    undefined4 uStack188;
    undefined local_b8 [16];
    float local_a8;
    float fStack164;
    float fStack160;
    float fStack156;
    float local_98;
    float fStack148;
    float fStack144;
    float fStack140;
    ulonglong local_78;

    puVar11 = local_b8;
    local_78 = DAT_140c0f7b0 ^ (ulonglong)auStack440;
    plVar7 = (longlong *)FUN_1406c5440();
    if ((plVar7 == (longlong *)0x0) || (iVar4 = (**(code **)(*plVar7 + 8))(plVar7), iVar4 == 0))
        goto LAB_1406c6994;
    local_168 = (short *)FUN_14018b280(0x10);
    plVar7 = (longlong *)0x0;
    local_158._4_4_ = 0;
    _local_168 = CONCAT88(local_168 + 8,local_168);
    if (local_168 != (short *)0x0) {
        *local_168 = 0;
    }
    plVar10 = *(longlong **)(DAT_140c65898 + 0x7588);
    psStack368 = local_168;
    lVar8 = (**(code **)(*plVar10 + 0x150))(plVar10);
    uVar12 = local_158._4_4_;
    if ((DAT_140c65898 == 0) || (iVar4 = FUN_14055a260(DAT_140c65898 + 0x7330), iVar4 == 0)) {
        if ((lVar8 != 0) && (*(int *)(lVar8 + 0xb8) != 0)) {
            uVar12 = 1;
        }
    }
    else if ((lVar8 != 0) && (*(int *)(lVar8 + 0xd4) != 0)) {
        uVar12 = 2;
    }
    plVar18 = plVar7;
    plVar14 = plVar7;
    if (lVar8 == 0) {
        LAB_1406c6255:
        puVar11 = &DAT_140b39ff8;
        do {
            plVar14 = (longlong *)((longlong)plVar14 + 1);
        } while (*(short *)(&DAT_140b39ff8 + (longlong)plVar14 * 2) != 0);
        LAB_1406c6284:
        if ((longlong)plVar14 * 2 >> 1 == 0) {
            FUN_1407db590(local_168,puVar11,0);
            psVar15 = local_168;
        }
        else {
            FUN_14001c310(&local_178);
            psVar15 = psStack368;
        }
    }
    else {
        lVar16 = (ulonglong)uVar12 * 0x1c;
        iVar4 = *(int *)(lVar16 + 0x9c + lVar8);
        if (iVar4 != 2) {
            LAB_1406c61da:
            if (iVar4 == 0) goto LAB_1406c6255;
            local_100 = *(undefined4 *)(lVar16 + 0xb4 + lVar8);
            _local_118 = *(undefined (*) [16])(lVar16 + 0x9c + lVar8);
            local_108 = *(undefined8 *)(lVar16 + 0xac + lVar8);
            local_198 = (float *)CONCAT44(local_198._4_4_,1);
            (**(code **)(*plVar10 + 0xf8))(plVar10,local_118,puVar11);
            while (local_b8._0_2_ != 0) {
                plVar14 = (longlong *)((longlong)plVar14 + 1);
                local_b8._0_2_ = *(short *)(puVar11 + (longlong)plVar14 * 2);
            }
            goto LAB_1406c6284;
        }
        if ((ulonglong)*(uint *)(param_1 + 0x2c4) < *(ulonglong *)(DAT_140c63678 + 0x30)) {
            pfVar9 = (float *)((ulonglong)*(uint *)(param_1 + 0x2c4) * 0x20 +
                               *(longlong *)(DAT_140c63678 + 0x28));
        }
        else {
            pfVar9 = *(float **)(DAT_140c63678 + 0x28);
        }
        iVar2 = *(int *)(lVar16 + 0xa4 + lVar8);
        iVar5 = movmskps((int)pfVar9,
                         CONCAT412(-(uint)(pfVar9[3] != 1.0),
                                   CONCAT48(-(uint)(pfVar9[2] != 1.0),
                                            CONCAT44(-(uint)(pfVar9[1] != 1.0),-(uint)(*pfVar9 != 1.0)))
                         ));
        uVar12 = (uint)(iVar5 != 0);
        if (iVar2 == 0) {
            plVar18 = (longlong *)(param_1 + 0x9a8 + (longlong)(int)uVar12 * 0x30);
        }
        else if (iVar2 == 1) {
            plVar18 = (longlong *)(param_1 + 0xa08 + (longlong)(int)uVar12 * 0x30);
        }
        else if (iVar2 == 2) {
            plVar18 = (longlong *)(param_1 + 0xa68 + (longlong)(int)uVar12 * 0x30);
        }
        else if (iVar2 == 5) {
            plVar18 = (longlong *)(param_1 + 0xac8 + (longlong)(int)uVar12 * 0x30);
        }
        else {
            if (iVar2 != 6) goto LAB_1406c61da;
            plVar18 = (longlong *)(param_1 + 0xb28 + (longlong)(int)uVar12 * 0x30);
        }
        if (plVar18 == (longlong *)0x0) goto LAB_1406c61da;
        lVar8 = (**(code **)(*plVar10 + 0x100))
                (plVar10,local_118,*(undefined4 *)(lVar16 + 0xa0 + lVar8));
        psVar15 = *(short **)(lVar8 + 8);
        *(short **)(lVar8 + 8) = local_168;
        psVar3 = *(short **)(lVar8 + 0x10);
        *(short **)(lVar8 + 0x10) = local_168;
        *(undefined8 *)(lVar8 + 0x18) = uStack352;
        local_168 = psVar3;
        if (lStack272 != 0) {
            FUN_14018b900();
        }
    }
    lVar8 = *(longlong *)(param_1 + 0xbf8);
    plVar10 = plVar7;
    plVar14 = plVar7;
    if (*psVar15 != 0) {
        do {
            plVar10 = (longlong *)((longlong)plVar10 + 1);
        } while (psVar15[(longlong)plVar10] != 0);
        plVar14 = (longlong *)0x0;
        if ((longlong *)0x1 < plVar10) {
            lVar8 = *(longlong *)(param_1 + 0xbf0);
            plVar14 = (longlong *)&DAT_00000010;
        }
    }
    if (((*(uint *)(param_1 + 0x298) >> 0xd & 1) == 0) || (lVar8 == 0)) {
        pfVar9 = (float *)FUN_1406c5d70(param_1);
        local_138 = *(float *)*(undefined (*) [16])(pfVar9 + 4);
        auStack308._0_4_ = pfVar9[5];
        auStack308._4_4_ = pfVar9[6];
        fStack300 = pfVar9[7];
        _local_138 = *(undefined (*) [16])(pfVar9 + 4);
        _local_148 = CONCAT44((float)*(int *)(param_1 + 0xc14) + pfVar9[1],
                              (float)(int)*(undefined8 *)(param_1 + 0xc10) + *pfVar9);
        _local_148 = CONCAT48(pfVar9[2] + 0.0,_local_148);
        _local_148 = CONCAT412(pfVar9[3] + 0.0,_local_148);
    }
    else {
        plVar14 = (longlong *)0x1;
        local_138 = (float)(int)*(undefined8 *)(param_1 + 0x2d4);
        auStack308._0_4_ = (float)*(int *)(param_1 + 0x2d8);
        auStack308._4_4_ = 0.0;
        fStack300 = 0.0;
        _local_138 = ZEXT816(CONCAT44(auStack308._0_4_,local_138));
        _local_148 = CONCAT44(auStack308._0_4_ - *(float *)(*(longlong *)(param_1 + 0xbf0) + 0x5c),
                              (float)(int)*(undefined8 *)(param_1 + 0x2cc));
        _local_148 = ZEXT816(_local_148);
    }
    lVar16 = (longlong)local_168 - (longlong)psVar15 >> 1;
    uVar12 = 0;
    if (lVar16 != 0) {
        uVar13 = (uint)plVar14;
        if ((plVar18 != (longlong *)0x0) && (uVar17 = uVar13 & 1, ((ulonglong)plVar14 & 1) != 0)) {
            uVar6 = uVar12;
            if (*plVar18 != 0) {
                FUN_140101470();
                uVar6 = local_128;
            }
            auVar20 = _local_138;
            iVar4 = uVar6 + 1;
            if (uVar17 != 0) {
                iVar4 = iVar4 / 2;
            }
            local_138 = local_138 - (float)iVar4;
            _local_148 = CONCAT124(auStack324,local_148 - (float)iVar4);
            auStack308._0_4_ = SUB164(auVar20,4);
            auStack308._4_4_ = SUB164(auVar20,8);
            fStack300 = SUB164(auVar20,0xc);
        }
        local_178 = local_148;
        fStack372 = auStack324._0_4_;
        psStack368 = SUB168(_local_148 >> 0x40,0);
        _local_168 = CONCAT412(fStack300,CONCAT48(auStack308._4_4_,CONCAT44(auStack308._0_4_,local_138))
        );
        if ((ulonglong)*(uint *)(param_1 + 0x2c4) < *(ulonglong *)(DAT_140c63678 + 0x30)) {
            local_188 = (ulonglong)*(uint *)(param_1 + 0x2c4) * 0x20 + *(longlong *)(DAT_140c63678 + 0x28)
                    ;
        }
        else {
            local_188 = *(longlong *)(DAT_140c63678 + 0x28);
        }
        local_180 = 1;
        local_190 = uVar13 | 0x400;
        local_198 = &local_178;
        (**(code **)(*DAT_140c65680 + 0x108))(DAT_140c65680,*(undefined8 *)(lVar8 + 0x60),psVar15);
        fVar24 = 1.0;
        local_128 = (uint)(local_168._0_4_ + 1.0);
        if (plVar18 != (longlong *)0x0) {
            local_158._0_4_ = (float)uVar12;
            if (*plVar18 != 0) {
                FUN_140101470();
            }
            local_168._0_4_ = local_168._0_4_ + (float)((int)local_158._0_4_ + 1);
        }
        if (local_168._0_4_ - local_178 <= local_138 - local_148) {
            if ((ulonglong)*(uint *)(param_1 + 0x2c4) < *(ulonglong *)(DAT_140c63678 + 0x30)) {
                local_188 = (ulonglong)*(uint *)(param_1 + 0x2c4) * 0x20 +
                            *(longlong *)(DAT_140c63678 + 0x28);
            }
            else {
                local_188 = *(longlong *)(DAT_140c63678 + 0x28);
            }
            local_180 = 1;
            local_198 = (float *)local_148;
            local_190 = uVar13;
            (**(code **)(*DAT_140c65680 + 0x108))(DAT_140c65680,*(undefined8 *)(lVar8 + 0x60),psVar15);
        }
        else {
            (**(code **)(*DAT_140c65680 + 0x40))(DAT_140c65680,1);
            local_a8 = 1.0;
            fStack164 = 1.0;
            fStack160 = 1.0;
            fStack156 = 1.0;
            fVar23 = (local_138 - local_148) / (local_168._0_4_ - local_178);
            local_f8 = _DAT_140c78410 * fVar23;
            fStack244 = fRam0000000140c78414 * fVar23;
            fStack240 = fRam0000000140c78418 * fVar23;
            fStack236 = fRam0000000140c7841c * fVar23;
            local_e8 = _DAT_140c78420 * 1.0;
            fStack228 = fRam0000000140c78424 * 1.0;
            fStack224 = fRam0000000140c78428 * 1.0;
            fStack220 = fRam0000000140c7842c * 1.0;
            local_d8 = _DAT_140c78430 * 1.0;
            fStack212 = fRam0000000140c78434 * 1.0;
            fStack208 = fRam0000000140c78438 * 1.0;
            fStack204 = fRam0000000140c7843c * 1.0;
            local_c8 = _DAT_140c78440;
            uStack196 = uRam0000000140c78444;
            uStack192 = uRam0000000140c78448;
            uStack188 = uRam0000000140c7844c;
            (**(code **)(*DAT_140c65680 + 0x58))();
            fVar24 = fVar24 / fVar23;
            local_98 = _DAT_140c78430 * local_a8;
            fStack148 = fRam0000000140c78434 * fStack164;
            fStack144 = fRam0000000140c78438 * fStack160;
            fStack140 = fRam0000000140c7843c * fStack156;
            fVar21 = _DAT_140c78410 * fVar24;
            fVar22 = fRam0000000140c78414 * fVar24;
            local_a8 = _DAT_140c78420 * local_a8;
            fStack164 = fRam0000000140c78424 * fStack164;
            fStack160 = fRam0000000140c78428 * fStack160;
            fStack156 = fRam0000000140c7842c * fStack156;
            local_b8 = CONCAT412(fRam0000000140c7841c * fVar24,
                                 CONCAT48(fRam0000000140c78418 * fVar24,CONCAT44(fVar22,fVar21)));
            auVar20 = ZEXT1216(CONCAT48(uRam0000000140c78448,CONCAT44(uRam0000000140c78444,_DAT_140c78440)
            )) & (undefined  [16])0xffffffffffffffff;
            local_158._0_4_ = SUB164(auVar20,0);
            fVar24 = local_148;
            fVar23 = local_138;
            if (0.0 < fVar21) {
                fVar24 = local_138;
                fVar23 = local_148;
            }
            fVar1 = auStack308._0_4_;
            fVar19 = auStack324._0_4_;
            if (0.0 < local_a8) {
                fVar1 = auStack324._0_4_;
                fVar19 = auStack308._0_4_;
            }
            fVar19 = local_158._0_4_ + fVar21 * fVar24 + local_a8 * fVar19;
            fVar23 = local_158._0_4_ + fVar21 * fVar23 + local_a8 * fVar1;
            local_118._4_4_ = SUB164(auVar20 >> 0x20,0);
            fVar24 = local_138;
            if (0.0 < fVar22) {
                fVar24 = local_148;
                local_148 = local_138;
            }
            fVar21 = auStack308._0_4_;
            if (0.0 < fStack164) {
                fVar21 = auStack324._0_4_;
                auStack324._0_4_ = auStack308._0_4_;
            }
            fVar24 = local_118._4_4_ + fVar22 * fVar24 + fStack164 * fVar21;
            fVar21 = local_118._4_4_ + fVar22 * local_148 + fStack164 * auStack324._0_4_;
            uStack336 = SUB168(auVar20 >> 0x40,0);
            _local_118 = CONCAT88(uStack336,CONCAT44(fVar21,fVar19));
            uStack336._0_4_ = SUB164(auVar20 >> 0x40,0);
            uStack336._4_4_ = SUB164(auVar20 >> 0x60,0);
            _local_148 = CONCAT44(fVar24,fVar23);
            _local_148 = CONCAT48((undefined4)uStack336,_local_148);
            _local_148 = CONCAT412(uStack336._4_4_,_local_148);
            _local_138 = CONCAT412(uStack336._4_4_,CONCAT48((undefined4)uStack336,CONCAT44(fVar21,fVar19))
            );
            if ((ulonglong)*(uint *)(param_1 + 0x2c4) < *(ulonglong *)(DAT_140c63678 + 0x30)) {
                local_188 = (ulonglong)*(uint *)(param_1 + 0x2c4) * 0x20 +
                            *(longlong *)(DAT_140c63678 + 0x28);
            }
            else {
                local_188 = *(longlong *)(DAT_140c63678 + 0x28);
            }
            local_180 = 1;
            local_198 = (float *)local_148;
            local_190 = uVar13;
            (**(code **)(*DAT_140c65680 + 0x108))(DAT_140c65680,*(undefined8 *)(lVar8 + 0x60),psVar15);
            (**(code **)(*DAT_140c65680 + 0x48))();
        }
        plVar7 = (longlong *)(ulonglong)local_128;
    }
    iVar4 = (int)plVar7;
    if (plVar18 != (longlong *)0x0) {
        lVar8 = *plVar18;
        _local_168 = CONCAT412(fStack300,CONCAT48(auStack308._4_4_,CONCAT44(auStack308._0_4_,local_138))
        );
        local_178 = local_148;
        fStack372 = auStack324._0_4_;
        psStack368 = SUB168(_local_148 >> 0x40,0);
        if (lVar8 != 0) {
            FUN_140101470(lVar8,local_158);
            uVar12 = (uint)local_158._0_4_;
        }
        fVar24 = 0.5;
        if (lVar16 == 0) {
            if (((ulonglong)plVar14 & 1) != 0) {
                fVar23 = (float)(int)(((local_168._0_4_ - local_178) - (float)uVar12) * 0.5);
                local_178 = local_178 + fVar23;
                _local_168 = CONCAT124(stack0xfffffffffffffe9c,local_168._0_4_ - fVar23);
            }
        }
        else {
            local_178 = (float)iVar4;
            _local_168 = CONCAT124(stack0xfffffffffffffe9c,(float)(uVar12 + iVar4));
        }
        if (lVar8 != 0) {
            FUN_140101470(lVar8,local_158);
        }
        fVar24 = (float)(int)((*(float *)(*(longlong *)(param_1 + 0xbf0) + 0x5c) -
                               (float)local_158._4_4_) * fVar24);
        fStack372 = fStack372 + fVar24;
        _local_118 = CONCAT412(0x3f800000,CONCAT48(0x3f800000,0x3f8000003f800000));
        local_168 = (short *)CONCAT44((fStack372 + *(float *)(*(longlong *)(param_1 + 0xbf0) + 0x5c)) -
                                      fVar24,local_168._0_4_);
        if (lVar8 != 0) {
            local_198 = (float *)((ulonglong)local_198 & 0xffffffff00000000 |
                                  (ulonglong)
                                          (uint)((DAT_140c63664 - *(float *)(plVar18 + 1)) *
                                                 *(float *)((longlong)plVar18 + 0xc)));
            FUN_140103e60(lVar8,&local_178,local_118,0);
        }
    }
    FUN_14018b900(psVar15,0);
    LAB_1406c6994:
    FUN_1407db4f0(local_78 ^ (ulonglong)auStack440);
    return;
}



int FUN_1406c69b0(longlong param_1)

{
    longlong lVar1;
    ushort uVar2;
    wchar_t wVar3;
    longlong lVar4;
    uint uVar5;
    char cVar6;
    int iVar7;
    int iVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    ulonglong uVar13;
    uint uVar14;

    uVar13 = 0;
    lVar1 = param_1 + 0x5b8;
    uVar11 = uVar13;
    do {
        uVar11 = uVar11 + 1;
    } while ((&DAT_140b39788)[uVar11] != 0);
    lVar4 = *(longlong *)(param_1 + 0x5c0);
    iVar8 = -1;
    uVar12 = *(longlong *)(param_1 + 0x5c8) - lVar4 >> 1;
    uVar10 = uVar13;
    if (uVar12 == uVar11) {
        uVar9 = uVar13;
        if (uVar11 != 0) {
            do {
                uVar2 = *(ushort *)(lVar4 + uVar9 * 2);
                if (uVar2 != (&DAT_140b39788)[uVar9]) {
                    iVar7 = 1;
                    if (uVar2 < (ushort)(&DAT_140b39788)[uVar9]) {
                        iVar7 = -1;
                    }
                    if (iVar7 != 0) goto LAB_1406c6b20;
                    break;
                }
                uVar9 = uVar9 + 1;
            } while (uVar9 < uVar11);
        }
        uVar14 = *(uint *)(param_1 + 0x5d8) % 0xc;
        uVar5 = *(uint *)(param_1 + 0x5d8) / 0xc;
        if (uVar5 == 1) {
            iVar8 = uVar14 + 0xbe;
        }
        else if (uVar5 == 7) {
            switch(uVar14) {
                case 0:
                    iVar8 = 0x86;
                    break;
                case 1:
                    iVar8 = 0x87;
                    break;
                case 2:
                    iVar8 = 0x88;
                    break;
                case 3:
                    iVar8 = 0x89;
                    break;
                case 4:
                    iVar8 = 0x8a;
                    break;
                case 5:
                    iVar8 = 0x8b;
                    break;
                case 6:
                    iVar8 = 0xda;
            }
        }
    }
    else {
        LAB_1406c6b20:
        do {
            uVar10 = uVar10 + 1;
        } while (L"LASBar"[uVar10] != L'\0');
        uVar11 = uVar13;
        if (uVar12 == uVar10) {
            uVar9 = uVar13;
            if (uVar10 != 0) {
                do {
                    wVar3 = *(wchar_t *)(lVar4 + uVar9 * 2);
                    if (wVar3 != L"LASBar"[uVar9]) {
                        iVar8 = 1;
                        if ((ushort)wVar3 < (ushort)L"LASBar"[uVar9]) {
                            iVar8 = -1;
                        }
                        if (iVar8 != 0) goto LAB_1406c6b80;
                        break;
                    }
                    uVar9 = uVar9 + 1;
                } while (uVar9 < uVar10);
            }
        }
        else {
            LAB_1406c6b80:
            do {
                uVar11 = uVar11 + 1;
            } while ((&DAT_140b39758)[uVar11] != 0);
            uVar10 = uVar13;
            if (uVar12 != uVar11) {
                LAB_1406c6c03:
                do {
                    uVar10 = uVar10 + 1;
                } while ((&DAT_140b39778)[uVar10] != 0);
                if (uVar12 != uVar10) {
                    LAB_1406c6c5f:
                    cVar6 = FUN_14002c740(lVar1,L"TSQBar");
                    if ((((cVar6 != '\0') || (cVar6 = FUN_14002c740(lVar1,L"TSQOBar"), cVar6 != '\0')) ||
                         (cVar6 = FUN_14002c740(lVar1,L"TSPEOBar"), cVar6 != '\0')) ||
                        (cVar6 = FUN_14002c740(lVar1,L"TSCBar"), cVar6 != '\0')) {
                        return 0x30;
                    }
                    cVar6 = FUN_14002c740(lVar1,L"TSMBar");
                    if (cVar6 != '\0') {
                        return 0x23;
                    }
                    cVar6 = FUN_14002c740(lVar1,L"GCBar");
                    if ((cVar6 != '\0') && (*(int *)(param_1 + 0x5d8) == 5)) {
                        return 0x21;
                    }
                    cVar6 = FUN_14002c740(lVar1,L"GCBar");
                    if ((cVar6 != '\0') && (*(int *)(param_1 + 0x5d8) == 2)) {
                        return 0x7b;
                    }
                    cVar6 = FUN_14002c740(lVar1,L"GCBar");
                    if ((cVar6 != '\0') && (*(int *)(param_1 + 0x5d8) == 0x1a)) {
                        return 0xc5;
                    }
                    cVar6 = FUN_14002c740(lVar1,L"GCBar");
                    if (cVar6 == '\0') {
                        return -1;
                    }
                    if (*(int *)(param_1 + 0x5d8) != 0x1b) {
                        return -1;
                    }
                    return 0xc6;
                }
                if (uVar10 != 0) {
                    while (uVar2 = *(ushort *)(lVar4 + uVar13 * 2), uVar2 == (&DAT_140b39778)[uVar13]) {
                        uVar13 = uVar13 + 1;
                        if (uVar10 <= uVar13) {
                            return *(int *)(param_1 + 0x5d8) + 0x31;
                        }
                    }
                    iVar8 = 1;
                    if (uVar2 < (ushort)(&DAT_140b39778)[uVar13]) {
                        iVar8 = -1;
                    }
                    if (iVar8 != 0) goto LAB_1406c6c5f;
                }
                return *(int *)(param_1 + 0x5d8) + 0x31;
            }
            uVar9 = uVar13;
            if (uVar11 != 0) {
                do {
                    uVar2 = *(ushort *)(lVar4 + uVar9 * 2);
                    if (uVar2 != (&DAT_140b39758)[uVar9]) {
                        iVar8 = 1;
                        if (uVar2 < (ushort)(&DAT_140b39758)[uVar9]) {
                            iVar8 = -1;
                        }
                        if (iVar8 != 0) goto LAB_1406c6c03;
                        break;
                    }
                    uVar9 = uVar9 + 1;
                } while (uVar9 < uVar11);
            }
        }
        iVar8 = *(uint *)(param_1 + 0x5d8) % 0xc + 0x31;
    }
    return iVar8;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1406c6db0(longlong param_1)

{
    ulonglong uVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong lVar5;
    float *pfVar6;
    undefined2 *puVar7;
    undefined2 *puVar8;
    float fVar9;
    undefined *in_stack_ffffffffffffff08;
    int local_d8;
    int iStack212;
    undefined8 uStack208;
    undefined2 *local_c8;
    undefined2 *local_c0;
    float local_b8;
    float fStack180;
    float fStack176;
    float fStack172;
    float local_a8;
    float fStack164;
    float fStack160;
    float fStack156;
    undefined local_98 [16];
    undefined local_88 [8];
    float fStack128;
    float fStack124;
    undefined local_78 [16];
    undefined local_68 [16];

    plVar3 = (longlong *)FUN_1406c5440();
    if (plVar3 == (longlong *)0x0) {
        return;
    }
    (**(code **)(*plVar3 + 0x78))(plVar3);
    (**(code **)(*DAT_140c65680 + 0x90))(DAT_140c65680,1);
    if (((((byte)*(ulonglong *)(param_1 + 0x298) >> 2 & 1) != 0) ||
         ((*(ulonglong *)(param_1 + 0x298) >> 0xd & 1) != 0)) &&
        (iVar2 = FUN_1406c69b0(param_1), -1 < iVar2)) {
        FUN_1406c5f80(param_1,iVar2);
    }
    lVar4 = (**(code **)(*plVar3 + 0x78))(plVar3);
    lVar5 = *(longlong *)(lVar4 + 0x68);
    uStack208 = (undefined2 *)0x0;
    lVar4 = *(longlong *)(lVar4 + 0x70) - lVar5 >> 1;
    local_c0 = (undefined2 *)0x0;
    uVar1 = lVar4 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        uStack208 = (undefined2 *)FUN_14018b280(uVar1 * 2,0);
        local_c0 = uStack208 + uVar1;
    }
    puVar8 = uStack208;
    FUN_1407db590(uStack208,lVar5);
    puVar7 = puVar8 + lVar4;
    if (puVar7 != (undefined2 *)0x0) {
        *puVar7 = 0;
    }
    local_c8 = puVar7;
    if (puVar8 == puVar7) {
        lVar5 = (**(code **)(*plVar3 + 0x78))(plVar3);
        if ((int *)(lVar5 + 0x40) != &local_d8) {
            FUN_14001c480(&local_d8,*(undefined8 *)(lVar5 + 0x48));
            puVar7 = local_c8;
            puVar8 = uStack208;
        }
        if (puVar8 == puVar7) goto LAB_1406c6f9a;
    }
    FUN_1406c5d70(param_1,local_98);
    in_stack_ffffffffffffff08 = local_98;
    _local_88 = CONCAT412(fStack124 - 0.0,
                          CONCAT48(fStack128 - 0.0,
                                   CONCAT44(local_88._4_4_ - (float)*(int *)(param_1 + 0xc1c),
                                            local_88._0_4_ -
                                            (float)(int)*(undefined8 *)(param_1 + 0xc18))));
    local_d8 = 0x3f800000;
    iStack212 = 0x3f800000;
    uStack208 = (undefined2 *)0x3f8000003f800000;
    (**(code **)(*DAT_140c65680 + 0x108))
            (DAT_140c65680,*(undefined8 *)(*(longlong *)(param_1 + 0xc00) + 0x60),puVar8,
             0xffffffffffffffff,in_stack_ffffffffffffff08,2,&local_d8,1);
    LAB_1406c6f9a:
    lVar5 = (**(code **)(*plVar3 + 0x78))(plVar3);
    if ((*(longlong *)(lVar5 + 0x68) != *(longlong *)(lVar5 + 0x70)) &&
        (lVar5 = (**(code **)(*plVar3 + 0x78))(plVar3), 0.0 < *(float *)(lVar5 + 0x8c))) {
        pfVar6 = (float *)FUN_1406c5d70();
        fStack176 = (float)(int)pfVar6[4];
        fStack172 = (float)(int)pfVar6[5];
        local_b8 = (float)(int)*pfVar6;
        fStack180 = (float)(int)pfVar6[1];
        FUN_14014e8d0(param_1 + 0xb90,&local_d8);
        fVar9 = (float)uStack208._4_4_;
        local_98 = ZEXT816(CONCAT44((float)iStack212,(float)local_d8));
        local_68 = ZEXT816(CONCAT44(fVar9,(float)(int)uStack208));
        _local_88 = ZEXT816(CONCAT44(fVar9,(float)(int)uStack208));
        fVar9 = fVar9 - (float)iStack212;
        local_78 = local_98;
        lVar5 = (**(code **)(*plVar3 + 0x78))(plVar3);
        (**(code **)(*DAT_140c65680 + 0x90))(DAT_140c65680,1);
        if ((ulonglong)*(uint *)(param_1 + 0xb88) < *(ulonglong *)(DAT_140c63678 + 0x30)) {
            lVar5 = (ulonglong)*(uint *)(param_1 + 0xb88) * 0x20 + *(longlong *)(DAT_140c63678 + 0x28);
        }
        else {
            lVar5 = *(longlong *)(DAT_140c63678 + 0x28);
        }
        if (*(longlong *)(param_1 + 0x888) != 0) {
            in_stack_ffffffffffffff08 =
                    (undefined *)
                            ((ulonglong)in_stack_ffffffffffffff08 & 0xffffffff00000000 |
                             (ulonglong)
                                     (uint)((DAT_140c63664 - *(float *)(param_1 + 0x890)) * *(float *)(param_1 + 0x894)));
            FUN_140103e60(*(longlong *)(param_1 + 0x888),local_78,lVar5,0,in_stack_ffffffffffffff08);
        }
        (**(code **)(*DAT_140c65680 + 0x40))(DAT_140c65680,2);
        (**(code **)(*DAT_140c65680 + 0x68))(DAT_140c65680,local_98);
        if ((ulonglong)*(uint *)(param_1 + 0xb8c) < *(ulonglong *)(DAT_140c63678 + 0x30)) {
            lVar5 = (ulonglong)*(uint *)(param_1 + 0xb8c) * 0x20 + *(longlong *)(DAT_140c63678 + 0x28);
        }
        else {
            lVar5 = *(longlong *)(DAT_140c63678 + 0x28);
        }
        if (*(longlong *)(param_1 + 0x8b8) != 0) {
            in_stack_ffffffffffffff08 =
                    (undefined *)
                            ((ulonglong)in_stack_ffffffffffffff08 & 0xffffffff00000000 |
                             (ulonglong)
                                     (uint)((DAT_140c63664 - *(float *)(param_1 + 0x8c0)) * *(float *)(param_1 + 0x8c4)));
            FUN_140103e60(*(longlong *)(param_1 + 0x8b8),local_78,lVar5,0,in_stack_ffffffffffffff08);
        }
        (**(code **)(*DAT_140c65680 + 0x48))();
    }
    lVar5 = (**(code **)(*plVar3 + 0x78))(plVar3);
    if (*(int *)(lVar5 + 0xb0) != 0) {
        (**(code **)(*DAT_140c65680 + 0x90))(DAT_140c65680,1);
        (**(code **)(*DAT_140c65680 + 0x40))(DAT_140c65680,2);
        FUN_1406c5d70(param_1,&local_b8);
        local_a8 = local_a8 + 5.0;
        fStack164 = fStack164 + 5.0;
        fStack160 = fStack160 + 5.0;
        fStack156 = fStack156 + 5.0;
        local_b8 = local_b8 - 5.0;
        fStack180 = fStack180 - 5.0;
        fStack176 = fStack176 - 5.0;
        fStack172 = fStack172 - 5.0;
        (**(code **)(*DAT_140c65680 + 0x60))(DAT_140c65680,&local_b8);
        local_d8 = 0x3f800000;
        iStack212 = 0x3f800000;
        uStack208 = (undefined2 *)0x3f8000003f800000;
        if (*(longlong *)(param_1 + 0x978) != 0) {
            FUN_140103e60(*(longlong *)(param_1 + 0x978),&local_b8,&local_d8,0,
                          (ulonglong)in_stack_ffffffffffffff08 & 0xffffffff00000000 |
                          (ulonglong)
                                  (uint)((DAT_140c63664 - *(float *)(param_1 + 0x980)) *
                                         *(float *)(param_1 + 0x984)));
        }
        (**(code **)(*DAT_140c65680 + 0x48))();
    }
    if (puVar8 != (undefined2 *)0x0) {
        FUN_14018b900(puVar8,0);
    }
    return;
}



void FUN_1406c72a0(longlong *param_1)

{
    int iVar1;
    longlong lVar2;
    float fVar3;
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 uStack44;
    undefined local_28 [32];

    FUN_1406c5d70(param_1,local_28);
    if (*(longlong **)(param_1[4] + 0xd40) == param_1) {
        (**(code **)(*DAT_140c65680 + 0x90))(DAT_140c65680,1);
        iVar1 = (**(code **)(*param_1 + 0x160))(param_1,&DAT_140c77760);
        local_38 = 0x3f800000;
        uStack52 = 0x3f800000;
        uStack48 = 0x3f800000;
        uStack44 = 0x3f800000;
        if (iVar1 == 2) {
            lVar2 = param_1[0x11d];
            if (lVar2 == 0) {
                return;
            }
            fVar3 = (DAT_140c63664 - *(float *)(param_1 + 0x11e)) * *(float *)((longlong)param_1 + 0x8f4);
        }
        else {
            lVar2 = param_1[0x123];
            if (lVar2 == 0) {
                return;
            }
            fVar3 = (DAT_140c63664 - *(float *)(param_1 + 0x124)) * *(float *)((longlong)param_1 + 0x924);
        }
        FUN_140103e60(lVar2,local_28,&local_38,0,fVar3);
    }
    return;
}



void FUN_1406c7370(longlong param_1)

{
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 uStack44;
    undefined local_28 [32];

    FUN_1406c5d70(param_1,local_28);
    if (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0xd38) == param_1) {
        (**(code **)(*DAT_140c65680 + 0x90))(DAT_140c65680,1);
        local_38 = 0x3f800000;
        uStack52 = 0x3f800000;
        uStack48 = 0x3f800000;
        uStack44 = 0x3f800000;
        if (*(longlong *)(param_1 + 0x948) != 0) {
            FUN_140103e60(*(longlong *)(param_1 + 0x948),local_28,&local_38,0,
                          (DAT_140c63664 - *(float *)(param_1 + 0x950)) * *(float *)(param_1 + 0x954));
        }
    }
    return;
}



void FUN_1406c88c0(longlong param_1,undefined8 param_2)

{
    longlong *plVar1;

    if ((*(byte *)(param_1 + 0x1c) & 8) != 0) {
        plVar1 = (longlong *)FUN_1406c5440();
        if (plVar1 != (longlong *)0x0) {
            // WARNING: Could not recover jumptable at 0x0001406c88e7. Too many branches
            // WARNING: Treating indirect jump as call
            (**(code **)(*plVar1 + 0x98))(plVar1,param_2);
            return;
        }
    }
    return;
}



void FUN_1406c8900(longlong param_1,undefined8 param_2)

{
    char cVar1;
    longlong *plVar2;

    if (((*(byte *)(param_1 + 0x1c) & 8) == 0) && (cVar1 = FUN_140001d30(), cVar1 == '\0')) {
        return;
    }
    plVar2 = (longlong *)FUN_1406c5440(param_1);
    if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0xa0))(plVar2,param_2);
    }
    return;
}



void FUN_1406c8950(longlong param_1,byte param_2)

{
    ushort uVar1;
    wchar_t wVar2;
    longlong lVar3;
    int iVar4;
    longlong lVar5;
    ulonglong uVar6;
    longlong lVar7;
    ulonglong uVar8;
    longlong lVar9;
    ulonglong uVar10;

    iVar4 = FUN_1406c69b0();
    if (-1 < iVar4) {
        (**(code **)(**(longlong **)(DAT_140c65898 + 0x7588) + 0x110))();
    }
    lVar5 = DAT_140c65898;
    uVar6 = 0;
    do {
        uVar6 = uVar6 + 1;
    } while ((&DAT_140b39788)[uVar6] != 0);
    lVar7 = *(longlong *)(param_1 + 0x5c0);
    uVar10 = *(longlong *)(param_1 + 0x5c8) - lVar7 >> 1;
    if (uVar10 == uVar6) {
        uVar8 = 0;
        if (uVar6 != 0) {
            do {
                uVar1 = *(ushort *)(lVar7 + uVar8 * 2);
                if (uVar1 != (&DAT_140b39788)[uVar8]) {
                    iVar4 = 1;
                    if (uVar1 < (ushort)(&DAT_140b39788)[uVar8]) {
                        iVar4 = -1;
                    }
                    if (iVar4 != 0) goto LAB_1406c8a1c;
                    break;
                }
                uVar8 = uVar8 + 1;
            } while (uVar8 < uVar6);
        }
    }
    else {
        LAB_1406c8a1c:
        uVar6 = 0;
        do {
            uVar6 = uVar6 + 1;
        } while ((&DAT_140b39758)[uVar6] != 0);
        if (uVar10 != uVar6) {
            LAB_1406c8ad2:
            uVar6 = 0;
            do {
                uVar6 = uVar6 + 1;
            } while (L"LASBar"[uVar6] != L'\0');
            if (uVar10 == uVar6) {
                uVar10 = 0;
                if (uVar6 != 0) {
                    do {
                        wVar2 = *(wchar_t *)(lVar7 + uVar10 * 2);
                        if (wVar2 != L"LASBar"[uVar10]) {
                            iVar4 = 1;
                            if ((ushort)wVar2 < (ushort)L"LASBar"[uVar10]) {
                                iVar4 = -1;
                            }
                            if (iVar4 != 0) goto LAB_1406c8b4f;
                            break;
                        }
                        uVar10 = uVar10 + 1;
                    } while (uVar10 < uVar6);
                }
                lVar5 = FUN_1403c1ea0(DAT_140c65898,*(undefined4 *)(param_1 + 0x5d8),
                                      *(undefined *)(DAT_140c65898 + 0x6dec));
                if (lVar5 != 0) {
                    *(uint *)(lVar5 + 0x208) = (uint)param_2;
                }
            }
            goto LAB_1406c8b4f;
        }
        uVar8 = 0;
        if (uVar6 != 0) {
            do {
                uVar1 = *(ushort *)(lVar7 + uVar8 * 2);
                if (uVar1 != (&DAT_140b39758)[uVar8]) {
                    iVar4 = 1;
                    if (uVar1 < (ushort)(&DAT_140b39758)[uVar8]) {
                        iVar4 = -1;
                    }
                    if (iVar4 != 0) goto LAB_1406c8ad2;
                    break;
                }
                uVar8 = uVar8 + 1;
            } while (uVar8 < uVar6);
        }
    }
    lVar9 = 0;
    lVar7 = 0;
    do {
        if ((((*(longlong *)(lVar5 + 0x78) != 0) && (*(uint *)(param_1 + 0x5d8) < 0xc)) && (lVar9 < 9))
            && (lVar3 = *(longlong *)
                (lVar5 + 0x10e8 + ((ulonglong)*(uint *)(param_1 + 0x5d8) + lVar7) * 8),
                lVar3 != 0)) {
            *(uint *)(lVar3 + 0x208) = (uint)param_2;
        }
        lVar7 = lVar7 + 0xc;
        lVar9 = lVar9 + 1;
    } while (lVar7 < 0x6c);
    LAB_1406c8b4f:
    *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xf7;
    lVar5 = *(longlong *)(param_1 + 0x20);
    *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) | (param_2 & 1) << 3;
    if (((lVar5 != 0) && (*(longlong *)(lVar5 + 0xb40) == param_1)) &&
        (*(longlong **)(lVar5 + 0xb40) != (longlong *)0x0)) {
        (**(code **)(**(longlong **)(lVar5 + 0xb40) + 0x1a0))();
        FUN_1400d4070(*(undefined8 *)(lVar5 + 0xb40),0x10,*(undefined8 *)(lVar5 + 0xb40),&DAT_1409d0333)
                ;
        if (*(longlong **)(lVar5 + 0xb40) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(lVar5 + 0xb40) + 8))();
            *(undefined8 *)(lVar5 + 0xb40) = 0;
        }
    }
    *(byte *)(param_1 + 0x59c) = *(byte *)(param_1 + 0x59c) & 0xef;
    *(byte *)(param_1 + 0x59c) = *(byte *)(param_1 + 0x59c) | (param_2 & 1) << 4;
    return;
}



undefined4 FUN_1406c8bf0(longlong param_1)

{
    wchar_t wVar1;
    ushort uVar2;
    longlong lVar3;
    longlong *plVar4;
    int iVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    longlong lVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    ulonglong uVar12;

    lVar8 = *(longlong *)(param_1 + 0x20);
    uVar7 = 0;
    uVar12 = *(ulonglong *)(lVar8 + 0xd38);
    uVar6 = uVar7;
    uVar11 = uVar7;
    if ((uVar12 != 0) && (uVar11 = 0, (*(uint *)(uVar12 + 0x1b0) >> 0x1c & 1) != 0)) {
        uVar11 = uVar12;
    }
    do {
        uVar6 = uVar6 + 1;
    } while (L"LASBar"[uVar6] != L'\0');
    lVar3 = *(longlong *)(param_1 + 0x5c0);
    uVar12 = *(longlong *)(param_1 + 0x5c8) - lVar3 >> 1;
    if (uVar12 == uVar6) {
        uVar9 = uVar7;
        if (uVar6 != 0) {
            do {
                wVar1 = *(wchar_t *)(lVar3 + uVar9 * 2);
                if (wVar1 != L"LASBar"[uVar9]) {
                    iVar5 = 1;
                    if ((ushort)wVar1 < (ushort)L"LASBar"[uVar9]) {
                        iVar5 = -1;
                    }
                    if (iVar5 != 0) goto LAB_1406c8d22;
                    break;
                }
                uVar9 = uVar9 + 1;
            } while (uVar9 < uVar6);
        }
        plVar4 = *(longlong **)(lVar8 + 0xd70);
        if ((((*(longlong *)(lVar8 + 0xd78) - (longlong)plVar4 == 0xb) &&
              (*plVar4 == 0x6e6f697463414444)) && (*(short *)(plVar4 + 1) == 0x6142)) &&
            (*(char *)((longlong)plVar4 + 10) == 'r')) {
            if (uVar11 == 0) {
                return 3;
            }
            return 1;
        }
    }
    LAB_1406c8d22:
    uVar6 = uVar7;
    uVar9 = uVar7;
    if (uVar11 != 0) {
        do {
            uVar9 = uVar9 + 1;
        } while (L"LASBar"[uVar9] != L'\0');
        if (*(longlong *)(uVar11 + 0x5c8) - *(longlong *)(uVar11 + 0x5c0) >> 1 == uVar9) {
            uVar10 = uVar7;
            if (uVar9 == 0) {
                return 1;
            }
            while( true ) {
                wVar1 = *(wchar_t *)(*(longlong *)(uVar11 + 0x5c0) + uVar10 * 2);
                if (wVar1 != L"LASBar"[uVar10]) break;
                uVar10 = uVar10 + 1;
                if (uVar9 <= uVar10) {
                    return 1;
                }
            }
            iVar5 = 1;
            if ((ushort)wVar1 < (ushort)L"LASBar"[uVar10]) {
                iVar5 = -1;
            }
            if (iVar5 == 0) {
                return 1;
            }
        }
    }
    do {
        uVar6 = uVar6 + 1;
    } while ((&DAT_140b39778)[uVar6] != 0);
    if (uVar12 == uVar6) {
        if (uVar6 != 0) {
            do {
                uVar2 = *(ushort *)(lVar3 + uVar7 * 2);
                if (uVar2 != (&DAT_140b39778)[uVar7]) {
                    iVar5 = 1;
                    if (uVar2 < (ushort)(&DAT_140b39778)[uVar7]) {
                        iVar5 = -1;
                    }
                    if (iVar5 != 0) {
                        return 3;
                    }
                    break;
                }
                uVar7 = uVar7 + 1;
            } while (uVar7 < uVar6);
        }
        plVar4 = *(longlong **)(lVar8 + 0xd70);
        lVar8 = *(longlong *)(lVar8 + 0xd78) - (longlong)plVar4;
        if (((((((lVar8 == 9) && (*plVar4 == 0x6574496761424444)) && (*(char *)(plVar4 + 1) == 'm')) ||
               (((lVar8 == 0xb && (*plVar4 == 0x6e6f697463414444)) &&
                 ((*(short *)(plVar4 + 1) == 0x6142 && (*(char *)((longlong)plVar4 + 10) == 'r')))))) ||
              ((((lVar8 == 0xc && (*plVar4 == 0x6465726168534444)) &&
                 (*(int *)(plVar4 + 1) == 0x6d657449)) ||
                ((lVar8 == 0xf && (iVar5 = FUN_1407e6af0(plVar4,"DDSpellbookItem",0xf), iVar5 == 0))))))
             || (((lVar8 == 7 &&
                   ((*(int *)plVar4 == 0x614d4444 && (*(short *)((longlong)plVar4 + 4) == 0x7263)))) &&
                  (*(char *)((longlong)plVar4 + 6) == 'o')))) ||
            (((((lVar8 == 0xb && (*plVar4 == 0x6d6f436e6f4e4444)) && (*(short *)(plVar4 + 1) == 0x6162))
               && (*(char *)((longlong)plVar4 + 10) == 't')) ||
              (((lVar8 == 0xd && (*plVar4 == 0x6f43656d61474444)) &&
                ((*(int *)(plVar4 + 1) == 0x6e616d6d && (*(char *)((longlong)plVar4 + 0xc) == 'd')))))))) {
            return 2;
        }
    }
    return 3;
}



undefined FUN_1406c8f50(undefined8 param_1,undefined8 param_2)

{
    char cVar1;
    undefined uVar2;

    cVar1 = FUN_1406c9280();
    if (cVar1 != '\0') {
        return 1;
    }
    uVar2 = FUN_1400d2840(param_1,param_2);
    return uVar2;
}



undefined4 FUN_1406c8fb0(longlong *param_1,int param_2)

{
    ushort uVar1;
    uint uVar2;
    longlong lVar3;
    undefined8 *puVar4;
    int iVar5;
    longlong *plVar6;
    undefined8 uVar7;
    undefined2 *puVar8;
    undefined2 *puVar9;
    ulonglong uVar10;
    undefined2 *puVar11;
    uint local_28;
    undefined4 uStack36;
    undefined4 local_20;
    uint uStack28;

    *(byte *)((longlong)param_1 + 0x59c) = *(byte *)((longlong)param_1 + 0x59c) & 0x1f;
    if ((*(uint *)(param_1 + 0x53) >> 0xc & 1) != 0) {
        return 0;
    }
    plVar6 = (longlong *)FUN_1406c5440();
    if ((plVar6 == (longlong *)0x0) || (iVar5 = (**(code **)(*plVar6 + 8))(plVar6), iVar5 == 0)) {
        return 0;
    }
    uVar7 = (**(code **)(*plVar6 + 0x20))(plVar6);
    puVar9 = (undefined2 *)0x0;
    lVar3 = param_1[0xe1];
    puVar8 = puVar9;
    if (param_2 == 0) {
        puVar11 = puVar9;
        if (lVar3 != 0) {
            puVar11 = &DAT_140b7b704;
            if (*(undefined2 **)(lVar3 + 0x20) != (undefined2 *)0x0) {
                puVar11 = *(undefined2 **)(lVar3 + 0x20);
            }
        }
        FUN_1400e9500(param_1[4],param_1,"DDActionBar",puVar11,uVar7,0);
    }
    else {
        puVar11 = puVar9;
        if (lVar3 != 0) {
            puVar11 = &DAT_140b7b704;
            if (*(undefined2 **)(lVar3 + 0x20) != (undefined2 *)0x0) {
                puVar11 = *(undefined2 **)(lVar3 + 0x20);
            }
        }
        FUN_1400e9780(param_1[4],param_1,"DDActionBar",puVar11,uVar7,0);
    }
    do {
        lVar3 = DAT_140c65898;
        puVar8 = (undefined2 *)((longlong)puVar8 + 1);
    } while ((&DAT_140b39778)[(longlong)puVar8] != 0);
    if ((undefined2 *)(param_1[0xb9] - param_1[0xb8] >> 1) == puVar8) {
        if (puVar8 != (undefined2 *)0x0) {
            do {
                uVar1 = *(ushort *)(param_1[0xb8] + (longlong)puVar9 * 2);
                if (uVar1 != (&DAT_140b39778)[(longlong)puVar9]) {
                    iVar5 = 1;
                    if (uVar1 < (ushort)(&DAT_140b39778)[(longlong)puVar9]) {
                        iVar5 = -1;
                    }
                    if (iVar5 != 0) goto LAB_1406c9238;
                    break;
                }
                puVar9 = (undefined2 *)((longlong)puVar9 + 1);
            } while (puVar9 < puVar8);
        }
        uVar2 = *(uint *)(param_1 + 0xbb);
        uVar10 = (ulonglong)uVar2;
        if (((*(longlong *)(DAT_140c65898 + 0x78) != 0) && (uVar2 < 0x30)) &&
            ((plVar6 = *(longlong **)
                    (DAT_140c65898 + 0xac0 +
                     ((ulonglong)*(uint *)(DAT_140c65898 + 0x6dec) * 0x30 + uVar10) * 8),
                    plVar6 == (longlong *)0x0 ||
                    ((iVar5 = (**(code **)(*plVar6 + 8))(plVar6), iVar5 != 0 ||
                                                                  (*(int *)((longlong)plVar6 + 0x114) != 0)))))) {
            plVar6 = *(longlong **)
                    (lVar3 + 0xac0 + ((ulonglong)*(uint *)(lVar3 + 0x6dec) * 0x30 + uVar10) * 8);
            if ((plVar6 != (longlong *)0x0) &&
                ((iVar5 = (**(code **)(*plVar6 + 0x10))(), iVar5 == 0 &&
                                                           (puVar4 = *(undefined8 **)
                                                                   (lVar3 + 0xac0 + ((ulonglong)*(uint *)(lVar3 + 0x6dec) * 0x30 + uVar10) * 8),
                                                                   puVar4 != (undefined8 *)0x0)))) {
                (**(code **)*puVar4)(puVar4,1);
            }
            *(undefined8 *)(lVar3 + 0xac0 + ((ulonglong)*(uint *)(lVar3 + 0x6dec) * 0x30 + uVar10) * 8) =
                    0;
            uStack36 = 0;
            local_20 = 0;
            uStack28 = (uint)*(byte *)(lVar3 + 0x6dec);
            local_28 = uVar2 & 0xff;
            FUN_1403f4900(lVar3,0x16a,&local_28);
        }
    }
    LAB_1406c9238:
    if ((longlong *)param_1[0xe1] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xe1] + 8))();
        param_1[0xe1] = 0;
    }
    (**(code **)(*param_1 + 0x1e8))(param_1,0);
    *(undefined *)(param_1 + 0x184) = 0;
    return 1;
}



undefined8 FUN_1406c9280(longlong *param_1)

{
    ushort uVar1;
    wchar_t wVar2;
    longlong lVar3;
    undefined2 *puVar4;
    int iVar5;
    uint uVar6;
    int iVar7;
    longlong *plVar8;
    longlong lVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    undefined2 *puVar12;
    int iVar13;
    longlong lVar14;
    longlong lVar15;
    ulonglong local_res8;

    uVar11 = 0;
    do {
        uVar11 = uVar11 + 1;
    } while ((&DAT_140b39778)[uVar11] != 0);
    if (param_1[0xb9] - param_1[0xb8] >> 1 != uVar11) {
        LAB_1406c989f:
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ActionBarNonSpellShortcutAddFailed",
                      &DAT_1409d0caa);
        return 0;
    }
    uVar10 = 0;
    iVar13 = 1;
    iVar7 = 1;
    if (uVar11 != 0) {
        do {
            uVar1 = *(ushort *)((longlong)&DAT_140b39778 + param_1[0xb8] + -0x140b39778 + uVar10 * 2);
            if (uVar1 != (&DAT_140b39778)[uVar10]) {
                iVar5 = iVar7;
                if (uVar1 < (ushort)(&DAT_140b39778)[uVar10]) {
                    iVar5 = -1;
                }
                if (iVar5 != 0) goto LAB_1406c989f;
                break;
            }
            uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
    }
    lVar9 = param_1[4];
    lVar3 = *(longlong *)(lVar9 + 0xd40);
    if ((lVar3 == 0) || (((byte)((uint)*(undefined4 *)(lVar3 + 0x1b0) >> 0x1c) & 1) == 0)) {
        return 0;
    }
    lVar14 = *(longlong *)(lVar9 + 0xd38);
    lVar15 = 0;
    if ((lVar14 != 0) && (((byte)((uint)*(undefined4 *)(lVar14 + 0x1b0) >> 0x1c) & 1) != 0)) {
        uVar11 = 0;
        do {
            uVar11 = uVar11 + 1;
        } while (L"LASBar"[uVar11] != L'\0');
        lVar15 = lVar14;
        if (*(longlong *)(lVar14 + 0x5c8) - *(longlong *)(lVar14 + 0x5c0) >> 1 == uVar11) {
            uVar10 = 0;
            if (uVar11 != 0) {
                do {
                    wVar2 = *(wchar_t *)(*(longlong *)(lVar14 + 0x5c0) + uVar10 * 2);
                    if (wVar2 != L"LASBar"[uVar10]) {
                        if ((ushort)wVar2 < (ushort)L"LASBar"[uVar10]) {
                            iVar13 = -1;
                        }
                        if (iVar13 != 0) goto LAB_1406c945f;
                        break;
                    }
                    uVar10 = uVar10 + 1;
                } while (uVar10 < uVar11);
            }
            uVar11 = 0;
            do {
                uVar11 = uVar11 + 1;
            } while (L"LASBar"[uVar11] != L'\0');
            if (*(longlong *)(lVar3 + 0x5c8) - *(longlong *)(lVar3 + 0x5c0) >> 1 != uVar11) {
                return 0;
            }
            uVar10 = 0;
            if (uVar11 != 0) {
                do {
                    wVar2 = *(wchar_t *)(*(longlong *)(lVar3 + 0x5c0) + uVar10 * 2);
                    if (wVar2 != L"LASBar"[uVar10]) {
                        iVar13 = iVar7;
                        if ((ushort)wVar2 < (ushort)L"LASBar"[uVar10]) {
                            iVar13 = -1;
                        }
                        if (iVar13 != 0) {
                            return 0;
                        }
                        break;
                    }
                    uVar10 = uVar10 + 1;
                } while (uVar10 < uVar11);
            }
        }
    }
    LAB_1406c945f:
    uVar11 = 0;
    do {
        uVar11 = uVar11 + 1;
    } while (L"LASBar"[uVar11] != L'\0');
    if (*(longlong *)(lVar3 + 0x5c8) - *(longlong *)(lVar3 + 0x5c0) >> 1 == uVar11) {
        uVar10 = 0;
        if (uVar11 != 0) {
            do {
                wVar2 = *(wchar_t *)
                        ((longlong)L"LASBar" + *(longlong *)(lVar3 + 0x5c0) + -0x140b397a8 + uVar10 * 2);
                if (wVar2 != L"LASBar"[uVar10]) {
                    iVar13 = iVar7;
                    if ((ushort)wVar2 < (ushort)L"LASBar"[uVar10]) {
                        iVar13 = -1;
                    }
                    if (iVar13 != 0) goto LAB_1406c9531;
                    break;
                }
                uVar10 = uVar10 + 1;
            } while (uVar10 < uVar11);
        }
        if (lVar15 == 0) {
            return 0;
        }
        uVar11 = 0;
        do {
            uVar11 = uVar11 + 1;
        } while (L"LASBar"[uVar11] != L'\0');
        if (*(longlong *)(lVar15 + 0x5c8) - *(longlong *)(lVar15 + 0x5c0) >> 1 != uVar11) {
            return 0;
        }
        uVar10 = 0;
        if (uVar11 != 0) {
            do {
                wVar2 = *(wchar_t *)(*(longlong *)(lVar15 + 0x5c0) + uVar10 * 2);
                if (wVar2 != L"LASBar"[uVar10]) {
                    if ((ushort)wVar2 < (ushort)L"LASBar"[uVar10]) {
                        iVar7 = -1;
                    }
                    if (iVar7 != 0) {
                        return 0;
                    }
                    break;
                }
                uVar10 = uVar10 + 1;
            } while (uVar10 < uVar11);
        }
    }
    LAB_1406c9531:
    iVar13 = 0;
    uVar11 = 0;
    plVar8 = (longlong *)FUN_1406c5440(lVar3);
    if (plVar8 != (longlong *)0x0) {
        uVar6 = (**(code **)(*plVar8 + 0x18))(plVar8);
        uVar11 = (ulonglong)uVar6;
        iVar13 = (**(code **)(*plVar8 + 8))(plVar8);
        if ((iVar13 == 4) && (*(int *)(DAT_140c635f0 + 0x1648) != 0)) {
            return 0;
        }
    }
    plVar8 = *(longlong **)(lVar9 + 0xd70);
    lVar14 = *(longlong *)(lVar9 + 0xd78) - (longlong)plVar8;
    local_res8 = 0xffffffff0000012c;
    if (((lVar14 == 9) && (*plVar8 == 0x6574496761424444)) && (*(char *)(plVar8 + 1) == 'm')) {
        local_res8 = CONCAT44((int)*(undefined8 *)(lVar9 + 0xda0),
                              (int)((ulonglong)*(undefined8 *)(lVar9 + 0xda0) >> 8)) & 0xff000000ff;
        lVar9 = FUN_1403ac780(DAT_140c65898 + 0xa0,&local_res8);
        FUN_14053bba0();
    }
    else {
        if ((lVar14 == 0xf) && (iVar7 = FUN_1407e6af0(plVar8,"DDSpellbookItem",0xf), iVar7 == 0)) {
            uVar6 = *(uint *)(lVar9 + 0xda0);
            if (*(ulonglong *)(DAT_140c65898 + 0xa98) <= (ulonglong)uVar6) {
                return 0;
            }
            if (*(longlong *)(*(longlong *)(DAT_140c65898 + 0xa90) + (ulonglong)uVar6 * 8) == 0) {
                return 0;
            }
            local_res8 = CONCAT44(uVar6,4);
            goto LAB_1406c9802;
        }
        if (((lVar14 != 7) ||
             ((*(int *)plVar8 != 0x614d4444 || (*(short *)((longlong)plVar8 + 4) != 0x7263)))) ||
            (*(char *)((longlong)plVar8 + 6) != 'o')) {
            if ((((lVar14 == 0xb) && (*plVar8 == 0x6e6f697463414444)) &&
                 (*(short *)(plVar8 + 1) == 0x6142)) && (*(char *)((longlong)plVar8 + 10) == 'r')) {
                if ((int)((ulonglong)*(undefined8 *)(lVar9 + 0xda0) >> 0x20) == 0) {
                    return 0;
                }
            }
            else {
                if (((lVar14 == 0xc) && (*plVar8 == 0x6465726168534444)) &&
                    (*(int *)(plVar8 + 1) == 0x6d657449)) {
                    return 0;
                }
                if (((lVar14 == 0xb) && (*plVar8 == 0x6d6f436e6f4e4444)) &&
                    ((*(short *)(plVar8 + 1) == 0x6162 && (*(char *)((longlong)plVar8 + 10) == 't')))) {
                    lVar9 = FUN_1403c1780(DAT_140c65898,*(undefined4 *)(lVar9 + 0xda0));
                    if (lVar9 == 0) {
                        return 0;
                    }
                    local_res8 = CONCAT44(*(undefined4 *)(lVar9 + 0x24),4);
                }
                else {
                    if (lVar14 != 0xd) {
                        return 0;
                    }
                    if (*plVar8 != 0x6f43656d61474444) {
                        return 0;
                    }
                    if (*(int *)(plVar8 + 1) != 0x6e616d6d) {
                        return 0;
                    }
                    if (*(char *)((longlong)plVar8 + 0xc) != 'd') {
                        return 0;
                    }
                }
            }
            goto LAB_1406c9802;
        }
        lVar9 = FUN_140778230(*(undefined8 *)(DAT_140c65898 + 0x7350),*(undefined4 *)(lVar9 + 0xda0));
    }
    if (lVar9 == 0) {
        return 0;
    }
    LAB_1406c9802:
    if (*(longlong *)(lVar3 + 0x708) == 0) {
        puVar12 = (undefined2 *)0x0;
    }
    else {
        puVar4 = *(undefined2 **)(*(longlong *)(lVar3 + 0x708) + 0x20);
        puVar12 = &DAT_140b7b704;
        if (puVar4 != (undefined2 *)0x0) {
            puVar12 = puVar4;
        }
    }
    iVar7 = FUN_1403c2020();
    if ((-1 < iVar7) && (iVar13 != 0)) {
        FUN_1400e9780(param_1[4],lVar3,"DDActionBar",puVar12,(longlong)iVar13 << 0x20 | uVar11,0);
        (**(code **)(*param_1 + 0x1f8))(param_1,0);
        return 1;
    }
    return 0;
}



void FUN_1406c98e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
    ulonglong uVar1;
    short sVar2;
    int iVar3;
    uint uVar4;
    longlong lVar5;
    undefined8 uVar6;
    longlong lVar7;
    int *piVar8;
    undefined2 *puVar9;
    longlong *plVar10;
    short *psVar11;
    longlong lVar12;
    short *psVar13;
    short *psVar14;
    short *psVar15;
    short *psVar16;
    undefined auStack280 [32];
    wchar_t *local_f8;
    undefined8 local_f0;
    short *local_e8;
    char local_d8 [4];
    undefined4 local_d4;
    uint local_d0;
    longlong local_c8;
    undefined8 local_c0;
    undefined8 local_b8;
    undefined4 local_a8 [4];
    longlong local_98 [4];
    undefined8 local_78;
    undefined8 local_70;
    int local_68 [4];
    uint local_58;
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack280;
    psVar15 = (short *)0x0;
    local_f8 = (wchar_t *)0x0;
    local_c0 = param_2;
    local_b8 = param_4;
    FUN_1400d45e0(local_a8,param_1,param_2,param_5);
    psVar14 = psVar15;
    psVar16 = psVar15;
    do {
        local_d8[0] = '\0';
        lVar5 = FUN_1401a6b80(param_5,(&PTR_u_DrawAsCheckbox_140b395f0)[(longlong)psVar14]);
        if (lVar5 != 0) {
            uVar6 = FUN_1401a4f40(lVar5 + 0x20);
            FUN_1401a52e0(uVar6,local_d8);
            if (local_d8[0] != '\0') {
                psVar16 = (short *)((ulonglong)psVar16 | 1 << ((byte)psVar14 & 0x3f));
            }
        }
        psVar14 = (short *)((longlong)psVar14 + 1);
    } while (psVar14 < (short *)0xf);
    lVar5 = FUN_1401a6b80(param_5,L"Base");
    psVar14 = psVar15;
    if (lVar5 != 0) {
        psVar14 = (short *)FUN_1401a4f40(lVar5 + 0x20);
    }
    uVar6 = local_b8;
    psVar13 = (short *)&DAT_1409f777c;
    if (psVar14 != (short *)0x0) {
        psVar13 = psVar14;
    }
    local_c8 = 0;
    sVar2 = *psVar13;
    psVar14 = psVar15;
    while (sVar2 != 0) {
        psVar14 = (short *)((longlong)psVar14 + 1);
        sVar2 = psVar13[(longlong)psVar14];
    }
    lVar5 = (longlong)psVar14 * 2 >> 1;
    uVar1 = lVar5 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        local_c8 = FUN_14018b280(uVar1 * 2,0);
    }
    lVar5 = lVar5 * 2;
    FUN_1407db590(local_c8,psVar13,lVar5);
    puVar9 = (undefined2 *)(local_c8 + lVar5);
    if (puVar9 != (undefined2 *)0x0) {
        *puVar9 = 0;
    }
    lVar7 = FUN_14018b280(0xc30,0);
    lVar5 = local_c8;
    psVar14 = psVar15;
    if (lVar7 != 0) {
        local_f0 = uVar6;
        local_f8 = (wchar_t *)local_a8;
        local_e8 = psVar16;
        psVar14 = (short *)FUN_1406c3de0(lVar7,param_1,local_c0,local_c8);
    }
    *(undefined4 *)(psVar14 + 0x608) = DAT_140c7ed50;
    *(undefined4 *)(psVar14 + 0x60a) = DAT_140c7ed54;
    *(undefined4 *)(psVar14 + 0x60c) = DAT_140c7ed58;
    *(undefined4 *)(psVar14 + 0x60e) = DAT_140c7ed5c;
    local_d4 = 0;
    lVar7 = FUN_1401a6b80(param_5,L"LeftMargin");
    if (lVar7 != 0) {
        uVar6 = FUN_1401a4f40(lVar7 + 0x20);
        iVar3 = FUN_1407df428(uVar6,&DAT_1409e4114,&local_d4);
        if (iVar3 == 1) {
            *(undefined4 *)(psVar14 + 0x608) = local_d4;
        }
    }
    lVar7 = FUN_1401a6b80(param_5,L"TopMargin");
    if (lVar7 != 0) {
        uVar6 = FUN_1401a4f40(lVar7 + 0x20);
        iVar3 = FUN_1407df428(uVar6,&DAT_1409e4114,&local_d4);
        if (iVar3 == 1) {
            *(undefined4 *)(psVar14 + 0x60a) = local_d4;
        }
    }
    lVar7 = FUN_1401a6b80(param_5,L"RightMargin");
    if (lVar7 != 0) {
        uVar6 = FUN_1401a4f40(lVar7 + 0x20);
        iVar3 = FUN_1407df428(uVar6,&DAT_1409e4114,&local_d4);
        if (iVar3 == 1) {
            *(undefined4 *)(psVar14 + 0x60c) = local_d4;
        }
    }
    lVar7 = FUN_1401a6b80(param_5,L"BottomMargin");
    if (lVar7 != 0) {
        uVar6 = FUN_1401a4f40(lVar7 + 0x20);
        iVar3 = FUN_1407df428(uVar6,&DAT_1409e4114,&local_d4);
        if (iVar3 == 1) {
            *(undefined4 *)(psVar14 + 0x60e) = local_d4;
        }
    }
    local_f8 = L"RechargeBar";
    FUN_1400d45e0(local_a8,param_1);
    plVar10 = local_98;
    piVar8 = local_68;
    psVar16 = psVar15;
    do {
        if ((((float)piVar8[-4] != 0.0) || (*piVar8 != 0)) || (*plVar10 != 0)) goto LAB_1406c9bee;
        psVar16 = (short *)((longlong)psVar16 + 1);
        piVar8 = piVar8 + 1;
        plVar10 = plVar10 + 1;
    } while ((longlong)psVar16 < 4);
    if ((local_58 & 1) != 0) {
        LAB_1406c9bee:
        *(undefined4 *)(psVar14 + 0x5c8) = local_a8[0];
        *(undefined4 *)(psVar14 + 0x5ca) = local_a8[1];
        *(undefined4 *)(psVar14 + 0x5cc) = local_a8[2];
        *(undefined4 *)(psVar14 + 0x5ce) = local_a8[3];
        *(longlong *)(psVar14 + 0x5d0) = local_98[0];
        *(longlong *)(psVar14 + 0x5d4) = local_98[1];
        lVar12 = 4;
        *(longlong *)(psVar14 + 0x5d8) = local_98[2];
        *(longlong *)(psVar14 + 0x5dc) = local_98[3];
        *(undefined8 *)(psVar14 + 0x5e0) = local_78;
        *(undefined8 *)(psVar14 + 0x5e4) = local_70;
        lVar7 = 0x40;
        do {
            *(undefined4 *)(lVar7 + 0xb90 + (longlong)psVar14) =
                    *(undefined4 *)((longlong)local_a8 + lVar7);
            lVar12 = lVar12 + -1;
            lVar7 = lVar7 + 4;
        } while (lVar12 != 0);
        *(uint *)(psVar14 + 0x5f0) = local_58;
    }
    lVar7 = FUN_1401a6b80(param_5,L"RechargeBarEmptyAttribute");
    if (((lVar7 != 0) && (lVar7 = FUN_1401a4f40(lVar7 + 0x20), lVar7 != 0)) && (param_1 != 0)) {
        FUN_140109710(psVar14 + 0x444,param_1 + 0xf0,lVar7);
    }
    lVar7 = FUN_1401a6b80(param_5,L"RechargeBarFullAttribute");
    if (((lVar7 != 0) && (lVar7 = FUN_1401a4f40(lVar7 + 0x20), lVar7 != 0)) && (param_1 != 0)) {
        FUN_140109710(psVar14 + 0x45c,param_1 + 0xf0,lVar7);
    }
    lVar7 = FUN_1401a6b80(param_5,L"RechargeBarEmptyColorAttribute");
    if ((lVar7 != 0) && (lVar7 = FUN_1401a4f40(lVar7 + 0x20), lVar7 != 0)) {
        uVar4 = FUN_140142170(DAT_140c63678,lVar7);
        plVar10 = (longlong *)(psVar14 + 0x5c4);
        lVar7 = DAT_140c63678;
        if (plVar10 != &local_c8) {
            FUN_1401429a0(DAT_140c63678,*(uint *)plVar10);
            lVar7 = DAT_140c63678;
            *(uint *)plVar10 = uVar4;
            if ((ulonglong)uVar4 < *(ulonglong *)(lVar7 + 0x30)) {
                iVar3 = *(int *)((ulonglong)uVar4 * 0x20 + 0x10 + *(longlong *)(lVar7 + 0x28));
                if (iVar3 - 1U < 0xfffffffe) {
                    *(int *)((ulonglong)uVar4 * 0x20 + 0x10 + *(longlong *)(lVar7 + 0x28)) = iVar3 + 1;
                }
            }
        }
        FUN_1401429a0(lVar7,(ulonglong)uVar4);
    }
    lVar7 = FUN_1401a6b80(param_5,L"RechargeBarFullColorAttribute");
    if ((lVar7 != 0) && (lVar7 = FUN_1401a4f40(lVar7 + 0x20), lVar7 != 0)) {
        uVar4 = FUN_140142170(DAT_140c63678,lVar7);
        plVar10 = (longlong *)(psVar14 + 0x5c6);
        lVar7 = DAT_140c63678;
        if (plVar10 != &local_c8) {
            FUN_1401429a0(DAT_140c63678,*(uint *)plVar10);
            lVar7 = DAT_140c63678;
            *(uint *)plVar10 = uVar4;
            if ((ulonglong)uVar4 < *(ulonglong *)(lVar7 + 0x30)) {
                iVar3 = *(int *)((ulonglong)uVar4 * 0x20 + 0x10 + *(longlong *)(lVar7 + 0x28));
                if (iVar3 - 1U < 0xfffffffe) {
                    *(int *)((ulonglong)uVar4 * 0x20 + 0x10 + *(longlong *)(lVar7 + 0x28)) = iVar3 + 1;
                }
            }
        }
        FUN_1401429a0(lVar7,(ulonglong)uVar4);
    }
    lVar7 = FUN_1401a6b80(param_5,L"CountFontAttribute");
    if ((lVar7 != 0) && (lVar7 = FUN_1401a4f40(lVar7 + 0x20), lVar7 != 0)) {
        uVar6 = FUN_1400e58c0(*(undefined8 *)(psVar14 + 0x10),lVar7);
        *(undefined8 *)(psVar14 + 0x600) = uVar6;
    }
    lVar7 = FUN_1401a6b80(param_5,L"LongHotkeyFontAttribute");
    if ((lVar7 != 0) && (lVar7 = FUN_1401a4f40(lVar7 + 0x20), lVar7 != 0)) {
        uVar6 = FUN_1400e58c0(*(undefined8 *)(psVar14 + 0x10),lVar7);
        *(undefined8 *)(psVar14 + 0x5f8) = uVar6;
    }
    lVar7 = FUN_1401a6b80(param_5,L"ShortHotkeyFontAttribute");
    if ((lVar7 != 0) && (lVar7 = FUN_1401a4f40(lVar7 + 0x20), lVar7 != 0)) {
        uVar6 = FUN_1400e58c0(*(undefined8 *)(psVar14 + 0x10),lVar7);
        *(undefined8 *)(psVar14 + 0x5fc) = uVar6;
    }
    lVar7 = FUN_1401a6b80(param_5,L"CooldownFontAttribute");
    if ((lVar7 != 0) && (lVar7 = FUN_1401a4f40(lVar7 + 0x20), lVar7 != 0)) {
        uVar6 = FUN_1400e58c0(*(undefined8 *)(psVar14 + 0x10),lVar7);
        *(undefined8 *)(psVar14 + 0x604) = uVar6;
    }
    lVar7 = FUN_1401a6b80(param_5,L"ContentType");
    psVar16 = psVar15;
    if (lVar7 != 0) {
        psVar16 = (short *)FUN_1401a4f40(lVar7 + 0x20);
    }
    psVar13 = (short *)&DAT_1409f76fc;
    if (psVar16 != (short *)0x0) {
        psVar13 = psVar16;
    }
    sVar2 = *psVar13;
    psVar16 = psVar15;
    while (sVar2 != 0) {
        psVar16 = (short *)((longlong)psVar16 + 1);
        sVar2 = psVar13[(longlong)psVar16];
    }
    lVar7 = (longlong)psVar16 * 2 >> 1;
    psVar16 = psVar15;
    if (lVar7 + 1U < 0x7fffffffffffffff) {
        psVar16 = (short *)FUN_14018b280((lVar7 + 1U) * 2,0);
    }
    FUN_1407db590(psVar16,psVar13,lVar7 * 2);
    psVar13 = psVar16 + lVar7;
    if (psVar13 != (short *)0x0) {
        *psVar13 = 0;
    }
    local_d0 = 0;
    lVar7 = FUN_1401a6b80(param_5,L"ContentId");
    if (lVar7 != 0) {
        uVar6 = FUN_1401a4f40(lVar7 + 0x20);
        iVar3 = FUN_1407df428(uVar6,&DAT_1409e4114);
        if (iVar3 == 1) {
            psVar11 = psVar15;
            uVar4 = 0;
            if (0 < (int)local_d0) {
                uVar4 = local_d0;
            }
            do {
                local_d0 = uVar4;
                psVar11 = (short *)((longlong)psVar11 + 1);
                uVar4 = local_d0;
            } while ((&DAT_140b39778)[(longlong)psVar11] != 0);
            if ((short *)((longlong)psVar13 - (longlong)psVar16 >> 1) == psVar11) {
                psVar13 = psVar15;
                if (psVar11 != (short *)0x0) {
                    do {
                        if (psVar16[(longlong)psVar13] != (&DAT_140b39778)[(longlong)psVar13]) {
                            iVar3 = 1;
                            if ((ushort)psVar16[(longlong)psVar13] < (ushort)(&DAT_140b39778)[(longlong)psVar13])
                            {
                                iVar3 = -1;
                            }
                            if (iVar3 != 0) goto LAB_1406ca04c;
                            break;
                        }
                        psVar13 = (short *)((longlong)psVar13 + 1);
                    } while (psVar13 < psVar11);
                }
                if (local_d0 < 0xc) {
                    local_d0 = local_d0 + 0xc;
                }
            }
            LAB_1406ca04c:
            uVar4 = local_d0;
            sVar2 = *psVar16;
            while (sVar2 != 0) {
                psVar15 = (short *)((longlong)psVar15 + 1);
                sVar2 = psVar16[(longlong)psVar15];
            }
            FUN_14001c480(psVar14 + 0x2dc,psVar16,psVar16 + (longlong)psVar15);
            *(uint *)(psVar14 + 0x2ec) = uVar4;
        }
    }
    if (psVar16 != (short *)0x0) {
        FUN_14018b900(psVar16,0);
    }
    if (lVar5 != 0) {
        FUN_14018b900(lVar5,0);
    }
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack280);
    return;
}



longlong FUN_1406ca0c0(undefined8 param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    char *pcVar4;

    lVar1 = FUN_1400d66a0(param_1,1);
    if (lVar1 == 0) {
        return 0;
    }
    if ((*(uint *)(lVar1 + 0x1b0) >> 0x1c & 1) == 0) {
        puVar2 = (undefined8 *)FUN_1400580e0(param_1,1);
        if ((puVar2 == &DAT_140a12138) || (*(int *)(puVar2 + 1) == -1)) {
            pcVar4 = s_no_value_140c1dc88;
        }
        else {
            pcVar4 = (&PTR_DAT_140a123b0)[*(int *)(puVar2 + 1)];
        }
        uVar3 = FUN_140058780(param_1,s__s_expected__got__s_140c1db70,"Window",pcVar4);
        FUN_140056570(param_1,1,uVar3);
    }
    return lVar1;
}



undefined8 FUN_1406ca170(longlong param_1)

{
    undefined8 *puVar1;
    undefined4 *puVar2;
    longlong lVar3;
    undefined8 uVar4;
    longlong *plVar5;
    undefined *puVar6;
    undefined4 local_res10 [2];

    lVar3 = FUN_1406ca0c0();
    if (lVar3 == 0) {
        return 0;
    }
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f0090(param_1);
    plVar5 = (longlong *)FUN_1406c5440(lVar3);
    if (plVar5 == (longlong *)0x0) {
        FUN_1400f0090(param_1);
        FUN_1400f0090(param_1);
        FUN_140058710(param_1,"bReady",6);
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        puVar6 = (undefined *)FUN_1400580e0(param_1,0xfffffffd);
        lVar3 = *(longlong *)(param_1 + 0x10);
    }
    else {
        (**(code **)(*plVar5 + 0x78))(plVar5);
        FUN_1400f0090(param_1);
        FUN_1400f0090(param_1);
        FUN_1400efeb0(param_1);
        FUN_140058710(param_1,"spell",5);
        lVar3 = (**(code **)(*plVar5 + 0x80))(plVar5,0);
        if (lVar3 == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            lVar3 = *(longlong *)(param_1 + 0x10);
            puVar6 = &DAT_ffffffffffffffd0 + lVar3;
        }
        else {
            local_res10[0] = **(undefined4 **)(lVar3 + 0x70);
            FUN_1403d3470(param_1,local_res10);
            lVar3 = *(longlong *)(param_1 + 0x10);
            puVar6 = &DAT_ffffffffffffffd0 + lVar3;
        }
    }
    FUN_14005ea50(param_1,puVar6,lVar3 + -0x20,lVar3 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    return 1;
}



undefined8 FUN_1406ca9e0(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 *puVar2;

    FUN_1406ca0c0();
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    puVar2 = &DAT_140a12138;
    if (puVar1 < *(undefined8 **)(param_1 + 0x10)) {
        puVar2 = puVar1;
    }
    if ((*(int *)(puVar2 + 1) != 0) && ((*(int *)(puVar2 + 1) != 1 || (*(int *)puVar2 != 0)))) {
        DAT_140c1d18f = 1;
        return 0;
    }
    DAT_140c1d18f = 0;
    return 0;
}



undefined8 FUN_1406caa40(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 *puVar2;

    FUN_1406ca0c0();
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    puVar2 = &DAT_140a12138;
    if (puVar1 < *(undefined8 **)(param_1 + 0x10)) {
        puVar2 = puVar1;
    }
    if ((*(int *)(puVar2 + 1) != 0) && ((*(int *)(puVar2 + 1) != 1 || (*(int *)puVar2 != 0)))) {
        DAT_140c65c3c = 1;
        return 0;
    }
    DAT_140c65c3c = 0;
    return 0;
}



undefined8 FUN_1406caaa0(longlong param_1)

{
    undefined uVar1;
    longlong *plVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;

    plVar2 = (longlong *)FUN_1406ca0c0();
    if (plVar2 != (longlong *)0x0) {
        puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        puVar4 = &DAT_140a12138;
        if (puVar3 < *(undefined8 **)(param_1 + 0x10)) {
            puVar4 = puVar3;
        }
        if ((*(int *)(puVar4 + 1) == 0) || ((*(int *)(puVar4 + 1) == 1 && (*(int *)puVar4 == 0)))) {
            uVar1 = 0;
        }
        else {
            uVar1 = 1;
        }
        (**(code **)(*plVar2 + 0x68))(plVar2,uVar1);
    }
    return 0;
}



void FUN_1406cab00(undefined8 param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 local_18;
    undefined4 local_10;

    lVar1 = *(longlong *)(param_2 + 0x20);
    local_18 = FUN_140062650(param_2,"Apollo.ActionBarButton",0x16);
    local_10 = 4;
    FUN_14005e8e0(param_2,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_2 + 0x10));
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
    FUN_140058bf0(param_2,0xfffffffe);
    return;
}



// WARNING: Removing unreachable block (ram,0x0001406caeb1)

void FUN_1406cab70(longlong param_1)

{
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
    longlong alStackX16 [3];
    undefined8 uStack40;
    ulonglong uVar13;
    ulonglong uVar17;

    uStack40 = 0x1406cab81;
    lVar4 = FUN_1407f0f60();
    lVar4 = -lVar4;
    *(ulonglong *)(&stack0x00004010 + lVar4) =
            DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffe0 + lVar4);
    lVar2 = *(longlong *)(param_1 + 400);
    *(undefined8 *)(&stack0x00004058 + lVar4) = unaff_RBX;
    *(undefined8 *)(&stack0x00004020 + lVar4) = unaff_R14;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406cabc2;
    FUN_1407e4830((longlong)alStackX16 + lVar4);
    uVar15 = 0;
    uVar9 = uVar15;
    uVar13 = uVar15;
    uVar17 = uVar15;
    do {
        uVar12 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar12;
        uVar16 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar16;
        *(undefined8 *)((longlong)alStackX16 + uVar9 + lVar4) =
                *(undefined8 *)((longlong)&PTR_DAT_140c56a80 + uVar9);
        puVar8 = (undefined8 *)((longlong)&PTR_FUN_140c56a88 + uVar9);
        uVar9 = uVar9 + 0x10;
        *(undefined8 *)((longlong)alStackX16 + uVar9 + lVar4 + -8) = *puVar8;
    } while (uVar12 < 0x97);
    lVar14 = (longlong)&PTR_s_GetContent_140c5e490 +
                        ((longlong)(int)uVar16 * -0x10 - ((longlong)alStackX16 + lVar4));
    puVar8 = (undefined8 *)((longlong)alStackX16 + (longlong)(int)uVar16 * 0x10 + lVar4);
    uVar9 = uVar15;
    do {
        uVar12 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar12;
        *puVar8 = *(undefined8 *)(lVar14 + (longlong)puVar8);
        puVar8[1] = *(undefined8 *)(lVar14 + -8 + (longlong)(puVar8 + 2));
        puVar8 = puVar8 + 2;
    } while (uVar12 < 8);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406cac5f;
    LuaElementLoaderOrSo(lVar2,"Apollo.ActionBarButton");
    puVar8 = *(undefined8 **)(lVar2 + 0x10);
    iVar1 = *(int *)(puVar8 + -1);
    if (iVar1 == 2) {
        LAB_1406cac81:
        if (*(int *)(puVar8 + -1) == 2) {
            LAB_1406cac9d:
            uVar9 = puVar8[-2];
        }
        else if (*(int *)(puVar8 + -1) == 7) {
            uVar9 = puVar8[-2] + 0x30;
        }
        else {
            uVar9 = 0;
        }
    }
    else {
        if ((iVar1 == 5) || (iVar1 == 6)) goto LAB_1406cac9d;
        if (iVar1 == 7) goto LAB_1406cac81;
        uVar9 = uVar15;
        if (iVar1 == 8) goto LAB_1406cac9d;
    }
    *puVar8 = puVar8[-2];
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar8 + -1);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    lVar14 = *(longlong *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406caccc;
    uVar5 = FUN_140062650(lVar2,"__index",7);
    lVar11 = *(longlong *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar5;
    *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406cacf2;
    FUN_14005ea50(lVar2,lVar14 + -0x20,(longlong)alStackX16 + lVar4 + -0x10,lVar11 + -0x10);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
    lVar11 = *(longlong *)((longlong)alStackX16 + lVar4);
    lVar6 = *(longlong *)(lVar2 + 0x10);
    lVar14 = (longlong)alStackX16 + lVar4;
    if (lVar11 != 0) {
        *(undefined8 *)(&stack0x00004060 + lVar4) = unaff_RBP;
        do {
            uVar5 = *(undefined8 *)(lVar14 + 8);
            if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406cad3a;
                FUN_14005e2c0(lVar2);
            }
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406cad5f;
            lVar6 = FUN_140060ab0(lVar2,0);
            *(undefined8 *)(lVar6 + 0x20) = uVar5;
            plVar3 = *(longlong **)(lVar2 + 0x10);
            *plVar3 = lVar6;
            *(undefined4 *)(plVar3 + 1) = 6;
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406cad83;
            uVar5 = FUN_1400580e0(lVar2,0xfffffffe);
            lVar6 = -1;
            do {
                lVar6 = lVar6 + 1;
            } while (*(char *)(lVar11 + lVar6) != '\0');
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406cada4;
            uVar7 = FUN_140062650(lVar2,lVar11);
            lVar11 = *(longlong *)(lVar2 + 0x10);
            *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar7;
            *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406cadc9;
            FUN_14005ea50(lVar2,uVar5,(longlong)alStackX16 + lVar4 + -0x10,lVar11 + -0x10);
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
            lVar11 = *(longlong *)(lVar14 + 0x10);
            lVar6 = *(longlong *)(lVar2 + 0x10);
            lVar14 = lVar14 + 0x10;
        } while (lVar11 != 0);
    }
    lVar14 = *(longlong *)(lVar2 + 0x20);
    *(longlong *)(lVar2 + 0x10) = lVar6 + -0x10;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406cae0c;
    uVar7 = FUN_140062650(lVar2,"Apollo.Window",0xd);
    uVar5 = *(undefined8 *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar7;
    *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406cae31;
    FUN_14005e8e0(lVar2,lVar14 + 0xa0,(longlong)alStackX16 + lVar4 + -0x10,uVar5);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    lVar14 = *(longlong *)(lVar2 + 0x10);
    iVar1 = *(int *)(lVar14 + -8);
    puVar10 = (ulonglong *)(lVar14 + -0x10);
    if (iVar1 == 2) {
        LAB_1406cae6c:
        if (*(int *)(lVar14 + -8) != 2) {
            if (*(int *)(lVar14 + -8) == 7) {
                uVar15 = *puVar10 + 0x30;
            }
            goto LAB_1406cae85;
        }
    }
    else if ((iVar1 != 5) && (iVar1 != 6)) {
        if (iVar1 == 7) goto LAB_1406cae6c;
        if (iVar1 != 8) goto LAB_1406cae85;
    }
    uVar15 = *puVar10;
    LAB_1406cae85:
    *(ulonglong **)(lVar2 + 0x10) = puVar10;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406cae94;
    FUN_1400ed720(param_1,uVar9,uVar15);
    *(code **)((longlong)alStackX16 + lVar4 + -0x10) = FUN_1406c98e0;
    *(code **)((longlong)&pcStackX8 + lVar4) = FUN_140001b30;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406caecb;
    FUN_1400f85d0(param_1 + 0xa80,L"ActionBarButton",(longlong)alStackX16 + lVar4 + -0x10);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406caedb;
    FUN_1407db4f0(*(ulonglong *)(&stack0x00004010 + lVar4) ^
                  (ulonglong)(&stack0xffffffffffffffe0 + lVar4));
    return;
}



void FUN_1406caef0(undefined8 *param_1)

{
    undefined4 *puVar1;
    undefined8 *puVar2;
    int iVar3;

    puVar2 = param_1 + 0xb7;
    *param_1 = &PTR_LAB_140b709c0;
    iVar3 = 5;
    do {
        puVar1 = (undefined4 *)((longlong)puVar2 + -4);
        puVar2 = (undefined8 *)((longlong)puVar2 + -4);
        FUN_1401429a0(DAT_140c63678,*puVar1);
        iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    FUN_1400c4170(param_1 + 0x80);
    FUN_1400c6030(param_1);
    return;
}



undefined8 FUN_1406caf60(undefined8 param_1,ulonglong param_2)

{
    FUN_1406caef0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1406cafa0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
    uint uVar1;
    undefined4 uVar2;
    undefined4 *puVar3;
    undefined8 *puVar4;
    longlong lVar5;
    undefined8 uVar6;
    undefined extraout_XMM0 [16];
    undefined extraout_XMM0_00 [16];
    undefined auVar8 [16];
    int iVar11;
    undefined in_XMM6_Ba;
    byte bVar12;
    undefined in_XMM6_Bb;
    undefined uVar13;
    undefined in_XMM6_Bc;
    undefined uVar14;
    undefined in_XMM6_Bd;
    undefined uVar15;
    undefined in_XMM6_Be;
    undefined uVar16;
    undefined in_XMM6_Bf;
    undefined uVar17;
    undefined in_XMM6_Bg;
    undefined uVar18;
    undefined in_XMM6_Bh;
    undefined uVar19;
    float fVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    undefined4 auStack1544 [318];
    undefined8 uStack272;
    undefined auStack264 [32];
    undefined8 local_e8;
    undefined8 local_e0;
    undefined8 local_d8;
    undefined local_c8 [16];
    undefined8 local_b8;
    undefined local_b0;
    undefined local_a8 [16];
    undefined local_98 [16];
    undefined local_88 [16];
    undefined8 local_78;
    undefined8 local_68;
    undefined8 local_60;
    undefined4 local_58;
    undefined4 local_54;
    ulonglong local_50;
    undefined auVar7 [12];
    undefined auVar9 [16];
    undefined auVar10 [16];

    local_50 = DAT_140c0f7b0 ^ (ulonglong)auStack264;
    local_d8 = 0;
    local_e0 = 0;
    local_e8 = param_6;
    uStack272 = 0x1406caff4;
    FUN_1400c5920();
    *param_1 = &PTR_LAB_140b709c0;
    uStack272 = 0x1406cb00a;
    FUN_1400c35f0();
    param_1[0xb4] = 0;
    param_1[0xb5] = 0;
    param_1[0xb6] = 0;
    local_68 = 0xffffffffffe0e0e0;
    local_60 = 0xffffffffffe0e0e0;
    param_1[0x36] = param_1[0x36] | 0x8000000000;
    local_58 = 0xff808080;
    local_54 = 0xffe0e0e0;
    local_a8 = extraout_XMM0;
    if ((*(byte *)((longlong)param_1 + 0x1d) & 0x80) == 0) {
        uStack272 = 0x1406cb061;
        puVar3 = (undefined4 *)FUN_1400cb0e0(param_1,local_c8,param_1 + 8);
        *(undefined4 *)((longlong)param_1 + 0x18c) = *puVar3;
        *(undefined4 *)(param_1 + 0x32) = puVar3[1];
        *(undefined4 *)((longlong)param_1 + 0x194) = puVar3[2];
        *(undefined4 *)(param_1 + 0x33) = puVar3[3];
        *(byte *)((longlong)param_1 + 0x1d) = *(byte *)((longlong)param_1 + 0x1d) | 0x80;
        puVar4 = param_1;
        do {
            local_a8 = extraout_XMM0_00;
            if (*(int *)(puVar4 + 0x31) == 0) break;
            *(undefined4 *)(puVar4 + 0x31) = 0;
            puVar4 = (undefined8 *)puVar4[2];
        } while (puVar4 != (undefined8 *)0x0);
    }
    local_a8 = local_a8 & (undefined  [16])0x0;
    local_98 = ZEXT816(0);
    local_c8 = CONCAT412(*(int *)(param_1 + 0x33) - *(int *)(param_1 + 0x32),
                         CONCAT48(*(int *)((longlong)param_1 + 0x194) -
                                  *(int *)((longlong)param_1 + 0x18c),local_c8._0_8_));
    local_c8 = local_c8 & (undefined  [16])0xffffffffffffffff;
    local_b8 = 0;
    local_b0 = 0;
    local_78 = 0;
    uStack272 = 0x1406cb0ff;
    local_88 = local_a8;
    FUN_14010b330(&local_b8,param_1[4],param_4,0);
    uStack272 = 0x1406cb10f;
    FUN_1400c3730(param_1 + 0x80,&local_b8);
    uStack272 = 0x1406cb11f;
    FUN_1400c3ad0(param_1 + 0x80,local_c8);
    lVar5 = 6;
    fVar20 = 0.003921569;
    fVar21 = 0.003921569;
    fVar22 = 0.003921569;
    fVar23 = 0.003921569;
    uVar1 = CONCAT13(in_XMM6_Bd,CONCAT12(in_XMM6_Bc,CONCAT11(in_XMM6_Bb,in_XMM6_Ba))) ^
            CONCAT13(in_XMM6_Bd,CONCAT12(in_XMM6_Bc,CONCAT11(in_XMM6_Bb,in_XMM6_Ba)));
    bVar12 = (byte)uVar1;
    uVar13 = (undefined)(uVar1 >> 8);
    uVar14 = (undefined)(uVar1 >> 0x10);
    uVar15 = (undefined)(uVar1 >> 0x18);
    uVar1 = CONCAT13(in_XMM6_Bh,CONCAT12(in_XMM6_Bg,CONCAT11(in_XMM6_Bf,in_XMM6_Be))) ^
            CONCAT13(in_XMM6_Bh,CONCAT12(in_XMM6_Bg,CONCAT11(in_XMM6_Bf,in_XMM6_Be)));
    uVar16 = (undefined)uVar1;
    uVar17 = (undefined)(uVar1 >> 8);
    uVar18 = (undefined)(uVar1 >> 0x10);
    uVar19 = (undefined)(uVar1 >> 0x18);
    puVar4 = param_1 + 0xb4;
    do {
        uStack272 = 0x1406cb14e;
        FUN_1401429a0(DAT_140c63678,*(undefined4 *)puVar4);
        uVar2 = *(undefined4 *)(((longlong)auStack1544 - (longlong)param_1) + (longlong)puVar4);
        uVar6 = CONCAT44(uVar2,uVar2);
        auVar7 = CONCAT48(uVar2,uVar6);
        auVar10 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                             SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                              (uVar19,CONCAT114((char)((uint)uVar2 >> 0x18),
                                                                                                                                                SUB1614(CONCAT412(uVar2,auVar7),
                                                                                                                                                        0))) >> 0x70,0),
                                                                                                               CONCAT113(uVar18,SUB1613(CONCAT412(uVar2,auVar7),0
                                                                                                               ))) >> 0x68,0),
                                                                                              CONCAT112((char)((uint)uVar2 >> 0x10),auVar7)) >>
                                                                                                                                             0x60,0),CONCAT111(uVar17,SUB1211(auVar7,0))) >>
                                                                                                                                                                                          0x58,0),CONCAT110((char)((uint)uVar2 >> 8),
                                                                                                                                                                                                            SUB1210(auVar7,0))) >> 0x50,0),
                                                                     CONCAT19(uVar16,SUB129(auVar7,0))) >> 0x48,0),
                                                    CONCAT18((char)uVar2,uVar6)) >> 0x40,0),uVar15),
                           ((uint7)uVar6 >> 0x18) << 0x30);
        auVar9 = CONCAT115(CONCAT101(SUB1610(auVar10 >> 0x30,0),uVar14),((uint5)uVar6 >> 0x10) << 0x20);
        auVar8 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar9 >> 0x20,0),uVar13),
                                             ((uint3)uVar2 >> 8) << 0x10) >> 0x10,0),
                           (ushort)uVar2 & 0xff | (ushort)bVar12 << 8);
        iVar11 = SUB164(CONCAT214(CONCAT11(uVar19,uVar18),
                                  CONCAT212(SUB162(auVar10 >> 0x30,0),SUB1612(auVar8,0))) >> 0x60,0);
        auVar9 = CONCAT610(SUB166(CONCAT412(iVar11,CONCAT210(CONCAT11(uVar17,uVar16),SUB1610(auVar8,0)))
                                          >> 0x50,0),CONCAT28(SUB162(auVar9 >> 0x20,0),SUB168(auVar8,0)));
        local_c8 = CONCAT412((float)iVar11 * fVar23,
                             CONCAT48((float)(SUB164(auVar8,0) & 0xffff |
                                              (uint)CONCAT11(uVar13,bVar12) << 0x10) * fVar22,
                                      CONCAT44((float)SUB164(CONCAT106(CONCAT82(SUB168(auVar9 >> 0x40,0)
                                                                               ,CONCAT11(uVar15,uVar14)
                                                                       ),
                                                                       (SUB166(auVar8,0) >> 0x10) <<
                                                                                                  0x20) >> 0x20,0) * fVar21,
                                               (float)SUB164(auVar9 >> 0x40,0) * fVar20)));
        uStack272 = 0x1406cb184;
        uVar2 = FUN_140141f10(DAT_140c63678);
        *(undefined4 *)puVar4 = uVar2;
        lVar5 = lVar5 + -1;
        puVar4 = (undefined8 *)((longlong)puVar4 + 4);
    } while (lVar5 != 0);
    uStack272 = 0x1406cb19f;
    FUN_1407db4f0(local_50 ^ (ulonglong)auStack264);
    return;
}



ulonglong FUN_1406cb220(longlong param_1,int param_2,undefined4 *param_3)

{
    undefined4 uVar1;
    int iVar2;
    ulonglong uVar3;

    if (((*(byte *)(param_1 + 0x1c) & 0x80) != 0) && (param_2 == 0)) {
        uVar1 = *param_3;
        *(undefined4 *)(param_1 + 0x388) = uVar1;
        *(undefined4 *)(param_1 + 0x38c) = param_3[1];
        *(undefined4 *)(param_1 + 0x360) = uVar1;
        *(undefined4 *)(param_1 + 0x364) = *(undefined4 *)(param_1 + 0x38c);
        uVar1 = FUN_14018cdf0();
        *(undefined4 *)(param_1 + 0x3a4) = uVar1;
        *(undefined4 *)(param_1 + 0x390) = uVar1;
        iVar2 = FUN_1400c3d70(param_1 + 0x400,param_3);
        return (ulonglong)(iVar2 == 9);
    }
    uVar3 = FUN_1400d2120();
    return uVar3;
}



ulonglong FUN_1406cb2b0(longlong param_1,int param_2)

{
    int iVar1;
    ulonglong uVar2;

    if (param_2 != 0) {
        uVar2 = FUN_1400d2550();
        return uVar2;
    }
    iVar1 = FUN_1400c3e20(param_1 + 0x400);
    if (iVar1 == 2) {
        FUN_1403a6e00();
    }
    else if ((iVar1 != 5) && (1 < iVar1 - 7U)) {
        return (ulonglong)(~(uint)(*(byte *)(param_1 + 0x59c) >> 5) & 1);
    }
    return 0;
}



void FUN_1406cb310(longlong param_1)

{
    byte bVar1;
    int iVar2;
    bool bVar3;
    char cVar4;
    uint uVar5;
    undefined4 *puVar6;
    ulonglong uVar7;
    longlong lVar8;
    longlong lVar9;
    undefined8 uVar10;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float fVar11;
    uint local_res8 [2];
    undefined4 local_48;
    undefined4 uStack68;
    undefined4 uStack64;
    float fStack60;
    undefined local_38 [16];
    undefined local_28 [16];

    lVar8 = DAT_140c63678;
    uVar7 = (ulonglong)*(uint *)(param_1 + 0x2c8);
    if (uVar7 < *(ulonglong *)(DAT_140c63678 + 0x30)) {
        lVar9 = (ulonglong)*(uint *)(param_1 + 0x2c8) * 0x20;
        iVar2 = *(int *)(lVar9 + 0x10 + *(longlong *)(DAT_140c63678 + 0x28));
        if (iVar2 - 1U < 0xfffffffe) {
            *(int *)(lVar9 + 0x10 + *(longlong *)(DAT_140c63678 + 0x28)) = iVar2 + 1;
        }
        if (*(ulonglong *)(lVar8 + 0x30) <= uVar7) goto LAB_1406cb374;
        puVar6 = (undefined4 *)(uVar7 * 0x20 + *(longlong *)(lVar8 + 0x28));
    }
    else {
        LAB_1406cb374:
        puVar6 = *(undefined4 **)(lVar8 + 0x28);
    }
    local_48 = *puVar6;
    uStack68 = puVar6[1];
    uStack64 = puVar6[2];
    fStack60 = (float)puVar6[3];
    FUN_1401429a0(lVar8);
    FUN_1400c9d10(param_1);
    fVar11 = extraout_XMM0_Da;
    FUN_1400c9c30(param_1);
    fStack60 = fStack60 * fVar11 * extraout_XMM0_Da_00;
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xb50);
    if ((lVar8 == param_1) ||
        (((((*(byte *)(param_1 + 0x1c) & 0x80) != 0 && (lVar8 != 0)) &&
           (lVar8 = *(longlong *)(lVar8 + 0x10), lVar8 != 0)) &&
          ((lVar8 == param_1 || (cVar4 = FUN_1400d1a90(lVar8,param_1), cVar4 != '\0')))))) {
        uVar10 = 1;
    }
    else {
        uVar10 = 0;
    }
    FUN_1400c3cb0(param_1 + 0x400,&local_48,*(byte *)(param_1 + 0x1c) >> 3 & 1,uVar10);
    local_28 = ZEXT816(CONCAT44((float)*(int *)(param_1 + 0x57c),
                                (float)(int)*(undefined8 *)(param_1 + 0x578)));
    local_38 = ZEXT816(CONCAT44((float)*(int *)(param_1 + 0x574),
                                (float)(int)*(undefined8 *)(param_1 + 0x570)));
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xb50);
    if ((lVar8 == param_1) ||
        (((lVar8 != 0 && (*(longlong *)(lVar8 + 0x10) != 0)) &&
          ((*(longlong *)(lVar8 + 0x10) == param_1 || (cVar4 = FUN_1400d1a90(), cVar4 != '\0')))))) {
        bVar3 = true;
    }
    else {
        bVar3 = false;
    }
    lVar8 = DAT_140c63678;
    bVar1 = *(byte *)(param_1 + 0x59c);
    if ((bVar1 & 0x10) == 0) {
        uVar5 = 4;
        goto LAB_1406cb4f6;
    }
    if ((char)bVar1 < '\0') {
        if ((bVar1 & 0x40) != 0) {
            if (bVar3) {
                uVar5 = 3;
                goto LAB_1406cb4f6;
            }
            goto LAB_1406cb4cc;
        }
    }
    else {
        LAB_1406cb4cc:
        if ((bVar1 & 0x40) != 0) {
            uVar5 = 1;
            goto LAB_1406cb4f6;
        }
    }
    if (((char)bVar1 < '\0') && (bVar3)) {
        uVar5 = 2;
    }
    else {
        uVar5 = -(uint)((*(byte *)(param_1 + 0x59e) & 1) != 0) & 5;
    }
    LAB_1406cb4f6:
    uVar5 = *(uint *)(param_1 + 0x5a0 + (longlong)(int)uVar5 * 4);
    uVar7 = (ulonglong)uVar5;
    if (uVar7 < *(ulonglong *)(DAT_140c63678 + 0x30)) {
        lVar9 = (ulonglong)uVar5 * 0x20;
        iVar2 = *(int *)(lVar9 + 0x10 + *(longlong *)(DAT_140c63678 + 0x28));
        if (iVar2 - 1U < 0xfffffffe) {
            *(int *)(lVar9 + 0x10 + *(longlong *)(DAT_140c63678 + 0x28)) = iVar2 + 1;
        }
    }
    if (((*(uint *)(param_1 + 0x298) >> 8 & 1) != 0) && (local_res8 != (uint *)(param_1 + 0x2c4))) {
        FUN_1401429a0();
        lVar8 = DAT_140c63678;
        uVar5 = *(uint *)(param_1 + 0x2c4);
        uVar7 = (ulonglong)uVar5;
        if (uVar7 < *(ulonglong *)(DAT_140c63678 + 0x30)) {
            lVar9 = (ulonglong)uVar5 * 0x20;
            iVar2 = *(int *)(lVar9 + 0x10 + *(longlong *)(DAT_140c63678 + 0x28));
            if (iVar2 - 1U < 0xfffffffe) {
                *(int *)(lVar9 + 0x10 + *(longlong *)(DAT_140c63678 + 0x28)) = iVar2 + 1;
            }
        }
    }
    if (*(longlong *)(param_1 + 0x2b0) != 0) {
        if (uVar7 < *(ulonglong *)(lVar8 + 0x30)) {
            lVar8 = uVar7 * 0x20 + *(longlong *)(lVar8 + 0x28);
        }
        else {
            lVar8 = *(longlong *)(lVar8 + 0x28);
        }
        (**(code **)(*DAT_140c65680 + 0x118))
                (DAT_140c65680,*(longlong *)(param_1 + 0x2b0),0,0xffffffffffffffff,local_38,
                 *(undefined4 *)(param_1 + 0x2c0),lVar8,1,0);
        lVar8 = DAT_140c63678;
    }
    FUN_1401429a0(lVar8,uVar7);
    return;
}



void FUN_1406cb890(undefined8 param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 local_18;
    undefined4 local_10;

    lVar1 = *(longlong *)(param_2 + 0x20);
    local_18 = FUN_140062650(param_2,"Apollo.TradeCommitButton",0x18);
    local_10 = 4;
    FUN_14005e8e0(param_2,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_2 + 0x10));
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
    FUN_140058bf0(param_2,0xfffffffe);
    return;
}



// WARNING: Removing unreachable block (ram,0x0001406cbbf1)

void FUN_1406cb900(longlong param_1)

{
    ulonglong uVar1;
    int iVar2;
    longlong lVar3;
    undefined8 *puVar4;
    longlong *plVar5;
    longlong lVar6;
    undefined8 uVar7;
    longlong lVar8;
    undefined8 uVar9;
    ulonglong uVar10;
    ulonglong *puVar11;
    undefined8 unaff_RBX;
    longlong lVar12;
    undefined8 unaff_RBP;
    uint uVar13;
    ulonglong uVar15;
    undefined8 unaff_R14;
    longlong lVar16;
    code *pcStackX8;
    longlong alStackX16 [3];
    undefined8 uStack40;
    ulonglong uVar14;

    uStack40 = 0x1406cb911;
    lVar6 = FUN_1407f0f60();
    lVar6 = -lVar6;
    *(ulonglong *)(&stack0x00004010 + lVar6) =
            DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffe0 + lVar6);
    lVar3 = *(longlong *)(param_1 + 400);
    *(undefined8 *)(&stack0x00004058 + lVar6) = unaff_RBX;
    *(undefined8 *)(&stack0x00004020 + lVar6) = unaff_R14;
    *(undefined8 *)((longlong)&uStack40 + lVar6) = 0x1406cb952;
    FUN_1407e4830((longlong)alStackX16 + lVar6);
    uVar15 = 0;
    uVar10 = uVar15;
    uVar14 = uVar15;
    do {
        uVar13 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar13;
        uVar1 = uVar10 + 0x10;
        *(undefined8 *)((longlong)alStackX16 + uVar1 + lVar6 + -0x10) =
                *(undefined8 *)((longlong)&PTR_DAT_140c56a80 + uVar10);
        *(undefined8 *)((longlong)alStackX16 + uVar1 + lVar6 + -8) =
                *(undefined8 *)((longlong)&PTR_FUN_140c56a88 + uVar10);
        uVar10 = uVar1;
    } while (uVar13 < 0x97);
    *(undefined8 *)((longlong)&uStack40 + lVar6) = 0x1406cb9a4;
    LuaElementLoaderOrSo(lVar3,"Apollo.TradeCommitButton");
    puVar4 = *(undefined8 **)(lVar3 + 0x10);
    iVar2 = *(int *)(puVar4 + -1);
    if (iVar2 == 2) {
        LAB_1406cb9c6:
        if (*(int *)(puVar4 + -1) == 2) {
            LAB_1406cb9e2:
            uVar10 = puVar4[-2];
        }
        else if (*(int *)(puVar4 + -1) == 7) {
            uVar10 = puVar4[-2] + 0x30;
        }
        else {
            uVar10 = 0;
        }
    }
    else {
        if ((iVar2 == 5) || (iVar2 == 6)) goto LAB_1406cb9e2;
        if (iVar2 == 7) goto LAB_1406cb9c6;
        uVar10 = uVar15;
        if (iVar2 == 8) goto LAB_1406cb9e2;
    }
    *puVar4 = puVar4[-2];
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar4 + -1);
    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
    lVar16 = *(longlong *)(lVar3 + 0x10);
    *(undefined8 *)((longlong)&uStack40 + lVar6) = 0x1406cba11;
    uVar7 = FUN_140062650(lVar3,"__index",7);
    lVar12 = *(longlong *)(lVar3 + 0x10);
    *(undefined8 *)((longlong)alStackX16 + lVar6 + -0x10) = uVar7;
    *(undefined4 *)((longlong)&pcStackX8 + lVar6) = 4;
    *(undefined8 *)((longlong)&uStack40 + lVar6) = 0x1406cba37;
    FUN_14005ea50(lVar3,lVar16 + -0x20,(longlong)alStackX16 + lVar6 + -0x10,lVar12 + -0x10);
    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + -0x10;
    lVar12 = *(longlong *)((longlong)alStackX16 + lVar6);
    lVar8 = *(longlong *)(lVar3 + 0x10);
    lVar16 = (longlong)alStackX16 + lVar6;
    if (lVar12 != 0) {
        *(undefined8 *)(&stack0x00004060 + lVar6) = unaff_RBP;
        do {
            uVar7 = *(undefined8 *)(lVar16 + 8);
            if (*(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x78)) {
                *(undefined8 *)((longlong)&uStack40 + lVar6) = 0x1406cba7a;
                FUN_14005e2c0(lVar3);
            }
            *(undefined8 *)((longlong)&uStack40 + lVar6) = 0x1406cba9f;
            lVar8 = FUN_140060ab0(lVar3,0);
            *(undefined8 *)(lVar8 + 0x20) = uVar7;
            plVar5 = *(longlong **)(lVar3 + 0x10);
            *plVar5 = lVar8;
            *(undefined4 *)(plVar5 + 1) = 6;
            *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
            *(undefined8 *)((longlong)&uStack40 + lVar6) = 0x1406cbac3;
            uVar7 = FUN_1400580e0(lVar3,0xfffffffe);
            lVar8 = -1;
            do {
                lVar8 = lVar8 + 1;
            } while (*(char *)(lVar12 + lVar8) != '\0');
            *(undefined8 *)((longlong)&uStack40 + lVar6) = 0x1406cbae4;
            uVar9 = FUN_140062650(lVar3,lVar12);
            lVar12 = *(longlong *)(lVar3 + 0x10);
            *(undefined8 *)((longlong)alStackX16 + lVar6 + -0x10) = uVar9;
            *(undefined4 *)((longlong)&pcStackX8 + lVar6) = 4;
            *(undefined8 *)((longlong)&uStack40 + lVar6) = 0x1406cbb09;
            FUN_14005ea50(lVar3,uVar7,(longlong)alStackX16 + lVar6 + -0x10,lVar12 + -0x10);
            *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + -0x10;
            lVar12 = *(longlong *)(lVar16 + 0x10);
            lVar8 = *(longlong *)(lVar3 + 0x10);
            lVar16 = lVar16 + 0x10;
        } while (lVar12 != 0);
    }
    lVar16 = *(longlong *)(lVar3 + 0x20);
    *(longlong *)(lVar3 + 0x10) = lVar8 + -0x10;
    *(undefined8 *)((longlong)&uStack40 + lVar6) = 0x1406cbb4c;
    uVar9 = FUN_140062650(lVar3,"Apollo.Window",0xd);
    uVar7 = *(undefined8 *)(lVar3 + 0x10);
    *(undefined8 *)((longlong)alStackX16 + lVar6 + -0x10) = uVar9;
    *(undefined4 *)((longlong)&pcStackX8 + lVar6) = 4;
    *(undefined8 *)((longlong)&uStack40 + lVar6) = 0x1406cbb71;
    FUN_14005e8e0(lVar3,lVar16 + 0xa0,(longlong)alStackX16 + lVar6 + -0x10,uVar7);
    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
    lVar16 = *(longlong *)(lVar3 + 0x10);
    iVar2 = *(int *)(lVar16 + -8);
    puVar11 = (ulonglong *)(lVar16 + -0x10);
    if (iVar2 == 2) {
        LAB_1406cbbac:
        if (*(int *)(lVar16 + -8) != 2) {
            if (*(int *)(lVar16 + -8) == 7) {
                uVar15 = *puVar11 + 0x30;
            }
            goto LAB_1406cbbc5;
        }
    }
    else if ((iVar2 != 5) && (iVar2 != 6)) {
        if (iVar2 == 7) goto LAB_1406cbbac;
        if (iVar2 != 8) goto LAB_1406cbbc5;
    }
    uVar15 = *puVar11;
    LAB_1406cbbc5:
    *(ulonglong **)(lVar3 + 0x10) = puVar11;
    *(undefined8 *)((longlong)&uStack40 + lVar6) = 0x1406cbbd4;
    FUN_1400ed720(param_1,uVar10,uVar15);
    *(undefined **)((longlong)alStackX16 + lVar6 + -0x10) = &LAB_1406cb620;
    *(code **)((longlong)&pcStackX8 + lVar6) = FUN_140001b30;
    *(undefined8 *)((longlong)&uStack40 + lVar6) = 0x1406cbc0b;
    FUN_1400f85d0(param_1 + 0xa80,L"TradeCommitButton",(longlong)alStackX16 + lVar6 + -0x10);
    *(undefined8 *)((longlong)&uStack40 + lVar6) = 0x1406cbc1b;
    FUN_1407db4f0(*(ulonglong *)(&stack0x00004010 + lVar6) ^
                  (ulonglong)(&stack0xffffffffffffffe0 + lVar6));
    return;
}



void FUN_1406cbc30(undefined8 *param_1)

{
    undefined4 *puVar1;
    longlong lVar2;
    undefined8 *puVar3;
    int iVar4;

    *param_1 = &PTR_LAB_140b70c00;
    lVar2 = param_1[199];
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    if (param_1[0xc4] != 0) {
        FUN_14018b900(param_1[0xc4],0);
    }
    if (param_1[0xc0] != 0) {
        FUN_14018b900(param_1[0xc0],0);
    }
    if (param_1[0xbc] != 0) {
        FUN_14018b900(param_1[0xbc],0);
    }
    if (param_1[0xb8] != 0) {
        FUN_14018b900(param_1[0xb8],0);
    }
    puVar3 = param_1 + 0xb7;
    iVar4 = 5;
    do {
        puVar1 = (undefined4 *)((longlong)puVar3 + -4);
        puVar3 = (undefined8 *)((longlong)puVar3 + -4);
        FUN_1401429a0(DAT_140c63678,*puVar1);
        iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    FUN_1400c4170(param_1 + 0x80);
    FUN_1400c6030(param_1);
    return;
}



undefined8 FUN_1406cbd00(undefined8 param_1,ulonglong param_2)

{
    FUN_1406cbc30();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1406cbd40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
    uint uVar1;
    undefined4 uVar2;
    undefined2 *puVar3;
    undefined4 *puVar4;
    undefined8 *puVar5;
    longlong lVar6;
    undefined8 uVar7;
    undefined extraout_XMM0 [16];
    undefined extraout_XMM0_00 [16];
    undefined auVar9 [16];
    int iVar12;
    undefined in_XMM6_Ba;
    byte bVar13;
    undefined in_XMM6_Bb;
    undefined uVar14;
    undefined in_XMM6_Bc;
    undefined uVar15;
    undefined in_XMM6_Bd;
    undefined uVar16;
    undefined in_XMM6_Be;
    undefined uVar17;
    undefined in_XMM6_Bf;
    undefined uVar18;
    undefined in_XMM6_Bg;
    undefined uVar19;
    undefined in_XMM6_Bh;
    undefined uVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    undefined4 auStack1544 [318];
    undefined8 uStack272;
    undefined auStack264 [32];
    undefined8 local_e8;
    undefined8 local_e0;
    undefined8 local_d8;
    undefined local_c8 [16];
    undefined8 local_b8;
    undefined local_b0;
    undefined local_a8 [16];
    undefined local_98 [16];
    undefined local_88 [16];
    undefined8 local_78;
    undefined8 local_68;
    undefined8 local_60;
    undefined4 local_58;
    undefined4 local_54;
    ulonglong local_50;
    undefined auVar8 [12];
    undefined auVar10 [16];
    undefined auVar11 [16];

    local_50 = DAT_140c0f7b0 ^ (ulonglong)auStack264;
    local_d8 = 0;
    local_e0 = 0;
    local_e8 = param_6;
    uStack272 = 0x1406cbd94;
    FUN_1400c5920();
    *param_1 = &PTR_LAB_140b70c00;
    uStack272 = 0x1406cbdaa;
    FUN_1400c35f0(param_1 + 0x80);
    param_1[0xb4] = 0;
    param_1[0xb5] = 0;
    param_1[0xb6] = 0;
    param_1[0xb8] = 0;
    param_1[0xb9] = 0;
    param_1[0xba] = 0;
    uStack272 = 0x1406cbddb;
    puVar3 = (undefined2 *)FUN_14018b280(0x10);
    param_1[0xb8] = puVar3;
    param_1[0xb9] = puVar3;
    param_1[0xba] = puVar3 + 8;
    if (puVar3 != (undefined2 *)0x0) {
        *puVar3 = 0;
    }
    param_1[0xbc] = 0;
    param_1[0xbd] = 0;
    param_1[0xbe] = 0;
    uStack272 = 0x1406cbe1f;
    puVar3 = (undefined2 *)FUN_14018b280(0x10);
    param_1[0xbc] = puVar3;
    param_1[0xbd] = puVar3;
    param_1[0xbe] = puVar3 + 8;
    if (puVar3 != (undefined2 *)0x0) {
        *puVar3 = 0;
    }
    param_1[0xc0] = 0;
    param_1[0xc1] = 0;
    param_1[0xc2] = 0;
    uStack272 = 0x1406cbe63;
    puVar3 = (undefined2 *)FUN_14018b280(0x10);
    param_1[0xc0] = puVar3;
    param_1[0xc1] = puVar3;
    param_1[0xc2] = puVar3 + 8;
    if (puVar3 != (undefined2 *)0x0) {
        *puVar3 = 0;
    }
    param_1[0xc4] = 0;
    param_1[0xc5] = 0;
    param_1[0xc6] = 0;
    uStack272 = 0x1406cbea7;
    puVar3 = (undefined2 *)FUN_14018b280(0x10);
    param_1[0xc4] = puVar3;
    param_1[0xc5] = puVar3;
    param_1[0xc6] = puVar3 + 8;
    if (puVar3 != (undefined2 *)0x0) {
        *puVar3 = 0;
    }
    param_1[200] = 0;
    param_1[199] = 0;
    param_1[0x36] = param_1[0x36] | 0x10000000000;
    local_68 = 0xffffffffffe0e0e0;
    local_60 = 0xffffffffffe0e0e0;
    local_58 = 0xff808080;
    local_54 = 0xffe0e0e0;
    local_a8 = extraout_XMM0;
    if ((*(byte *)((longlong)param_1 + 0x1d) & 0x80) == 0) {
        uStack272 = 0x1406cbf1f;
        puVar4 = (undefined4 *)FUN_1400cb0e0(param_1,local_c8,param_1 + 8);
        *(undefined4 *)((longlong)param_1 + 0x18c) = *puVar4;
        *(undefined4 *)(param_1 + 0x32) = puVar4[1];
        *(undefined4 *)((longlong)param_1 + 0x194) = puVar4[2];
        *(undefined4 *)(param_1 + 0x33) = puVar4[3];
        *(byte *)((longlong)param_1 + 0x1d) = *(byte *)((longlong)param_1 + 0x1d) | 0x80;
        puVar5 = param_1;
        do {
            local_a8 = extraout_XMM0_00;
            if (*(int *)(puVar5 + 0x31) == 0) break;
            *(undefined4 *)(puVar5 + 0x31) = 0;
            puVar5 = (undefined8 *)puVar5[2];
        } while (puVar5 != (undefined8 *)0x0);
    }
    local_a8 = local_a8 & (undefined  [16])0x0;
    local_98 = ZEXT816(0);
    local_c8 = CONCAT412(*(int *)(param_1 + 0x33) - *(int *)(param_1 + 0x32),
                         CONCAT48(*(int *)((longlong)param_1 + 0x194) -
                                  *(int *)((longlong)param_1 + 0x18c),local_c8._0_8_));
    local_c8 = local_c8 & (undefined  [16])0xffffffffffffffff;
    local_b8 = 0;
    local_b0 = 0;
    local_78 = 0;
    uStack272 = 0x1406cbfbf;
    local_88 = local_a8;
    FUN_14010b330(&local_b8,param_1[4],param_4,0);
    uStack272 = 0x1406cbfcf;
    FUN_1400c3730(param_1 + 0x80,&local_b8);
    uStack272 = 0x1406cbfdf;
    FUN_1400c3ad0(param_1 + 0x80,local_c8);
    lVar6 = 6;
    fVar21 = 0.003921569;
    fVar22 = 0.003921569;
    fVar23 = 0.003921569;
    fVar24 = 0.003921569;
    uVar1 = CONCAT13(in_XMM6_Bd,CONCAT12(in_XMM6_Bc,CONCAT11(in_XMM6_Bb,in_XMM6_Ba))) ^
            CONCAT13(in_XMM6_Bd,CONCAT12(in_XMM6_Bc,CONCAT11(in_XMM6_Bb,in_XMM6_Ba)));
    bVar13 = (byte)uVar1;
    uVar14 = (undefined)(uVar1 >> 8);
    uVar15 = (undefined)(uVar1 >> 0x10);
    uVar16 = (undefined)(uVar1 >> 0x18);
    uVar1 = CONCAT13(in_XMM6_Bh,CONCAT12(in_XMM6_Bg,CONCAT11(in_XMM6_Bf,in_XMM6_Be))) ^
            CONCAT13(in_XMM6_Bh,CONCAT12(in_XMM6_Bg,CONCAT11(in_XMM6_Bf,in_XMM6_Be)));
    uVar17 = (undefined)uVar1;
    uVar18 = (undefined)(uVar1 >> 8);
    uVar19 = (undefined)(uVar1 >> 0x10);
    uVar20 = (undefined)(uVar1 >> 0x18);
    puVar5 = param_1 + 0xb4;
    do {
        uStack272 = 0x1406cc00e;
        FUN_1401429a0(DAT_140c63678,*(undefined4 *)puVar5);
        uVar2 = *(undefined4 *)(((longlong)auStack1544 - (longlong)param_1) + (longlong)puVar5);
        uVar7 = CONCAT44(uVar2,uVar2);
        auVar8 = CONCAT48(uVar2,uVar7);
        auVar11 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                             SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                              (uVar20,CONCAT114((char)((uint)uVar2 >> 0x18),
                                                                                                                                                SUB1614(CONCAT412(uVar2,auVar8),
                                                                                                                                                        0))) >> 0x70,0),
                                                                                                               CONCAT113(uVar19,SUB1613(CONCAT412(uVar2,auVar8),0
                                                                                                               ))) >> 0x68,0),
                                                                                              CONCAT112((char)((uint)uVar2 >> 0x10),auVar8)) >>
                                                                                                                                             0x60,0),CONCAT111(uVar18,SUB1211(auVar8,0))) >>
                                                                                                                                                                                          0x58,0),CONCAT110((char)((uint)uVar2 >> 8),
                                                                                                                                                                                                            SUB1210(auVar8,0))) >> 0x50,0),
                                                                     CONCAT19(uVar17,SUB129(auVar8,0))) >> 0x48,0),
                                                    CONCAT18((char)uVar2,uVar7)) >> 0x40,0),uVar16),
                           ((uint7)uVar7 >> 0x18) << 0x30);
        auVar10 = CONCAT115(CONCAT101(SUB1610(auVar11 >> 0x30,0),uVar15),((uint5)uVar7 >> 0x10) << 0x20)
                ;
        auVar9 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar10 >> 0x20,0),uVar14),
                                             ((uint3)uVar2 >> 8) << 0x10) >> 0x10,0),
                           (ushort)uVar2 & 0xff | (ushort)bVar13 << 8);
        iVar12 = SUB164(CONCAT214(CONCAT11(uVar20,uVar19),
                                  CONCAT212(SUB162(auVar11 >> 0x30,0),SUB1612(auVar9,0))) >> 0x60,0);
        auVar10 = CONCAT610(SUB166(CONCAT412(iVar12,CONCAT210(CONCAT11(uVar18,uVar17),SUB1610(auVar9,0))
                            ) >> 0x50,0),
                            CONCAT28(SUB162(auVar10 >> 0x20,0),SUB168(auVar9,0)));
        local_c8 = CONCAT412((float)iVar12 * fVar24,
                             CONCAT48((float)(SUB164(auVar9,0) & 0xffff |
                                              (uint)CONCAT11(uVar14,bVar13) << 0x10) * fVar23,
                                      CONCAT44((float)SUB164(CONCAT106(CONCAT82(SUB168(auVar10 >> 0x40,0
                                               ),CONCAT11(uVar16,
                                                          uVar15)),(SUB166(auVar9,0) >> 0x10) << 0x20) >>
                                                                                                       0x20,0) * fVar22,
                                               (float)SUB164(auVar10 >> 0x40,0) * fVar21)));
        uStack272 = 0x1406cc044;
        uVar2 = FUN_140141f10(DAT_140c63678);
        *(undefined4 *)puVar5 = uVar2;
        lVar6 = lVar6 + -1;
        puVar5 = (undefined8 *)((longlong)puVar5 + 4);
    } while (lVar6 != 0);
    param_1[0xcb] = 0;
    param_1[0xca] = 0;
    *(undefined4 *)(param_1 + 0xc9) = 2;
    uStack272 = 0x1406cc077;
    FUN_1407db4f0(local_50 ^ (ulonglong)auStack264);
    return;
}



byte FUN_1406cc0a0(longlong param_1,undefined4 *param_2)

{
    FUN_1400d23b0();
    *(undefined4 *)(param_1 + 0x350) = *param_2;
    *(undefined4 *)(param_1 + 0x354) = param_2[1];
    *(byte *)(param_1 + 0x59c) =
            *(byte *)(param_1 + 0x59c) ^
            ((byte)(*(uint *)(param_1 + 0x290) >> 0x15) ^ *(byte *)(param_1 + 0x59c)) & 1;
    FUN_1400c3f20(param_1 + 0x400,param_2);
    return ~(*(byte *)(param_1 + 0x59c) >> 5) & 1;
}



void FUN_1406cc110(longlong param_1)

{
    int iVar1;
    uint uVar2;
    undefined8 in_stack_ffffffffffffffc8;
    undefined8 uVar3;
    undefined4 uVar4;

    uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
    uVar2 = 0;
    if (*(longlong *)(param_1 + 0x640) == 0) {
        uVar3 = *(undefined8 *)(param_1 + 0x620);
        iVar1 = FUN_14062a4c0(DAT_140c65898 + 0x6bc8,*(undefined8 *)(param_1 + 0x5c0),
                              *(undefined8 *)(param_1 + 0x5e0),*(undefined8 *)(param_1 + 0x600),uVar3,
                              *(undefined4 *)(param_1 + 0x648),*(undefined8 *)(param_1 + 0x650));
        uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    else {
        iVar1 = FUN_1406b4cf0();
        if (iVar1 == 0) goto LAB_1406cc1e9;
        uVar3 = *(undefined8 *)(param_1 + 0x620);
        iVar1 = FUN_14062a5f0(DAT_140c65898 + 0x6bc8,*(undefined8 *)(param_1 + 0x5c0),
                              *(undefined8 *)(param_1 + 0x5e0),*(undefined8 *)(param_1 + 0x600),uVar3,
                              *(undefined4 *)(param_1 + 0x648),*(undefined8 *)(param_1 + 0x658),
                              *(undefined8 *)(param_1 + 0x650),param_1 + 0x638);
        uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    uVar2 = (uint)(-1 < iVar1);
    LAB_1406cc1e9:
    FUN_1400d4040(param_1,"EmailSent",param_1,&DAT_1409f787c,CONCAT44(uVar4,uVar2));
    return;
}



ulonglong FUN_1406cc220(longlong param_1,int param_2)

{
    int iVar1;
    ulonglong uVar2;

    if (param_2 != 0) {
        uVar2 = FUN_1400d2550();
        return uVar2;
    }
    iVar1 = FUN_1400c3e20(param_1 + 0x400);
    if (iVar1 == 2) {
        FUN_1406cc110(param_1);
    }
    else if ((iVar1 != 5) && (1 < iVar1 - 7U)) {
        return (ulonglong)(~(uint)(*(byte *)(param_1 + 0x59c) >> 5) & 1);
    }
    return 0;
}



void FUN_1406cd060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
    wchar_t wVar1;
    uint uVar2;
    int iVar3;
    longlong lVar4;
    wchar_t *pwVar5;
    wchar_t *pwVar6;
    uint *puVar7;
    uint *puVar8;
    wchar_t *pwVar9;
    undefined **ppuVar10;
    longlong lVar11;
    undefined auStack232 [32];
    undefined8 local_c8;
    undefined *local_c0;
    uint local_b8 [4];
    undefined local_a8 [96];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack232;
    lVar4 = FUN_1401a6b80(param_5,L"Base");
    pwVar6 = (wchar_t *)0x0;
    pwVar5 = pwVar6;
    if (lVar4 != 0) {
        pwVar5 = (wchar_t *)FUN_1401a4f40(lVar4 + 0x20);
    }
    pwVar9 = L"kitBtn_Metal_LargeGreen";
    if (pwVar5 != (wchar_t *)0x0) {
        pwVar9 = pwVar5;
    }
    wVar1 = *pwVar9;
    pwVar5 = pwVar6;
    while (wVar1 != L'\0') {
        pwVar5 = (wchar_t *)((longlong)pwVar5 + 1);
        wVar1 = pwVar9[(longlong)pwVar5];
    }
    lVar4 = (longlong)pwVar5 * 2 >> 1;
    pwVar5 = pwVar6;
    if (lVar4 + 1U < 0x7fffffffffffffff) {
        pwVar5 = (wchar_t *)FUN_14018b280((lVar4 + 1U) * 2,0);
    }
    FUN_1407db590(pwVar5,pwVar9,lVar4 * 2);
    if (pwVar5 + lVar4 != (wchar_t *)0x0) {
        pwVar5[lVar4] = L'\0';
    }
    local_c8 = 0;
    FUN_1400d45e0(local_a8,param_1,param_2,param_5);
    lVar4 = FUN_14018b280(0x660,0);
    if (lVar4 != 0) {
        local_c0 = local_a8;
        local_c8 = param_3;
        pwVar6 = (wchar_t *)FUN_1406cbd40(lVar4,param_1,param_2,pwVar5);
    }
    ppuVar10 = &PTR_u_NormalTextColor_140a20fb0;
    puVar8 = (uint *)(pwVar6 + 0x2d0);
    do {
        puVar7 = (uint *)FUN_1400f66f0(local_b8,param_5,*ppuVar10,
                                       *(undefined4 *)
                                               ((0x140c2c348 - (longlong)pwVar6) + (longlong)puVar8));
        lVar4 = DAT_140c63678;
        if (puVar8 != puVar7) {
            FUN_1401429a0(DAT_140c63678);
            lVar4 = DAT_140c63678;
            uVar2 = *puVar7;
            *puVar8 = uVar2;
            if ((ulonglong)uVar2 < *(ulonglong *)(lVar4 + 0x30)) {
                lVar11 = *(longlong *)(lVar4 + 0x28) + (ulonglong)uVar2 * 0x20;
                iVar3 = *(int *)(lVar11 + 0x10);
                if (iVar3 - 1U < 0xfffffffe) {
                    *(int *)(lVar11 + 0x10) = iVar3 + 1;
                }
            }
        }
        FUN_1401429a0(lVar4,local_b8[0]);
        ppuVar10 = ppuVar10 + 1;
        puVar8 = puVar8 + 1;
    } while ((longlong)ppuVar10 < 0x140a20fe0);
    FUN_1400f66f0(local_b8,param_5,L"TextColor",0xffffffff);
    lVar4 = DAT_140c63678;
    if ((uint *)(pwVar6 + 0x162) != local_b8) {
        FUN_1401429a0(DAT_140c63678);
        lVar4 = DAT_140c63678;
        *(uint *)(pwVar6 + 0x162) = local_b8[0];
        if ((ulonglong)local_b8[0] < *(ulonglong *)(lVar4 + 0x30)) {
            lVar11 = *(longlong *)(lVar4 + 0x28) + (ulonglong)local_b8[0] * 0x20;
            iVar3 = *(int *)(lVar11 + 0x10);
            if (iVar3 - 1U < 0xfffffffe) {
                *(int *)(lVar11 + 0x10) = iVar3 + 1;
            }
        }
    }
    *(ulonglong *)(pwVar6 + 0x148) = *(ulonglong *)(pwVar6 + 0x148) | 0x10000000;
    *(undefined4 *)(pwVar6 + 0x152) = 0;
    FUN_1401429a0(lVar4,(ulonglong)local_b8[0]);
    if (pwVar5 != (wchar_t *)0x0) {
        FUN_14018b900(pwVar5,0);
    }
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack232);
    return;
}



undefined8 FUN_1406cd2f0(undefined8 param_1)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 uVar3;
    undefined local_28 [8];
    undefined8 local_20;
    undefined8 local_18;
    undefined8 local_10;

    lVar2 = FUN_1406cd790();
    uVar3 = FUN_140056bb0(param_1,2);
    FUN_14018f2d0(local_28,uVar3);
    lVar1 = *(longlong *)(lVar2 + 0x5c0);
    *(undefined8 *)(lVar2 + 0x5c0) = local_20;
    *(undefined8 *)(lVar2 + 0x5c8) = local_18;
    *(undefined8 *)(lVar2 + 0x5d0) = local_10;
    if (lVar1 != 0) {
        FUN_14018b900(lVar1,0);
    }
    uVar3 = FUN_140056bb0(param_1,3);
    FUN_14018f2d0(local_28,uVar3);
    lVar1 = *(longlong *)(lVar2 + 0x5e0);
    *(undefined8 *)(lVar2 + 0x5e0) = local_20;
    *(undefined8 *)(lVar2 + 0x5e8) = local_18;
    *(undefined8 *)(lVar2 + 0x5f0) = local_10;
    if (lVar1 != 0) {
        FUN_14018b900(lVar1,0);
    }
    uVar3 = FUN_140056bb0(param_1,4);
    FUN_14018f2d0(local_28,uVar3);
    lVar1 = *(longlong *)(lVar2 + 0x600);
    *(undefined8 *)(lVar2 + 0x600) = local_20;
    *(undefined8 *)(lVar2 + 0x608) = local_18;
    *(undefined8 *)(lVar2 + 0x610) = local_10;
    if (lVar1 != 0) {
        FUN_14018b900(lVar1,0);
    }
    uVar3 = FUN_140056bb0(param_1,5);
    FUN_14018f2d0(local_28,uVar3);
    lVar1 = *(longlong *)(lVar2 + 0x620);
    *(undefined8 *)(lVar2 + 0x620) = local_20;
    *(undefined8 *)(lVar2 + 0x628) = local_18;
    *(undefined8 *)(lVar2 + 0x630) = local_10;
    if (lVar1 != 0) {
        FUN_14018b900(lVar1,0);
    }
    return 0;
}



void FUN_1406cd720(undefined8 param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 local_18;
    undefined4 local_10;

    lVar1 = *(longlong *)(param_2 + 0x20);
    local_18 = FUN_140062650(param_2,"Apollo.SendEmailButton",0x16);
    local_10 = 4;
    FUN_14005e8e0(param_2,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_2 + 0x10));
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
    FUN_140058bf0(param_2,0xfffffffe);
    return;
}



longlong FUN_1406cd790(undefined8 param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    char *pcVar4;

    lVar1 = FUN_1400d66a0(param_1,1);
    if (lVar1 == 0) {
        return 0;
    }
    if ((*(ulonglong *)(lVar1 + 0x1b0) >> 0x28 & 1) == 0) {
        puVar2 = (undefined8 *)FUN_1400580e0(param_1,1);
        if ((puVar2 == &DAT_140a12138) || (*(int *)(puVar2 + 1) == -1)) {
            pcVar4 = s_no_value_140c1dc88;
        }
        else {
            pcVar4 = (&PTR_DAT_140a123b0)[*(int *)(puVar2 + 1)];
        }
        uVar3 = FUN_140058780(param_1,s__s_expected__got__s_140c1db70,"SendEmailButton",pcVar4);
        FUN_140056570(param_1,1,uVar3);
    }
    return lVar1;
}



// WARNING: Removing unreachable block (ram,0x0001406cdb81)

void FUN_1406cd840(longlong param_1)

{
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
    longlong alStackX16 [3];
    undefined8 uStack40;
    ulonglong uVar13;
    ulonglong uVar17;

    uStack40 = 0x1406cd851;
    lVar4 = FUN_1407f0f60();
    lVar4 = -lVar4;
    *(ulonglong *)(&stack0x00004010 + lVar4) =
            DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffe0 + lVar4);
    lVar2 = *(longlong *)(param_1 + 400);
    *(undefined8 *)(&stack0x00004058 + lVar4) = unaff_RBX;
    *(undefined8 *)(&stack0x00004020 + lVar4) = unaff_R14;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406cd892;
    FUN_1407e4830((longlong)alStackX16 + lVar4);
    uVar15 = 0;
    uVar9 = uVar15;
    uVar13 = uVar15;
    uVar17 = uVar15;
    do {
        uVar12 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar12;
        uVar16 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar16;
        *(undefined8 *)((longlong)alStackX16 + uVar9 + lVar4) =
                *(undefined8 *)((longlong)&PTR_DAT_140c56a80 + uVar9);
        puVar8 = (undefined8 *)((longlong)&PTR_FUN_140c56a88 + uVar9);
        uVar9 = uVar9 + 0x10;
        *(undefined8 *)((longlong)alStackX16 + uVar9 + lVar4 + -8) = *puVar8;
    } while (uVar12 < 0x97);
    lVar14 = (longlong)&PTR_s_SetMessageInfo_140c5e510 +
                        ((longlong)(int)uVar16 * -0x10 - ((longlong)alStackX16 + lVar4));
    puVar8 = (undefined8 *)((longlong)alStackX16 + (longlong)(int)uVar16 * 0x10 + lVar4);
    uVar9 = uVar15;
    do {
        uVar12 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar12;
        *puVar8 = *(undefined8 *)(lVar14 + (longlong)puVar8);
        puVar8[1] = *(undefined8 *)(lVar14 + -8 + (longlong)(puVar8 + 2));
        puVar8 = puVar8 + 2;
    } while (uVar12 < 3);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406cd92f;
    LuaElementLoaderOrSo(lVar2,"Apollo.SendEmailButton");
    puVar8 = *(undefined8 **)(lVar2 + 0x10);
    iVar1 = *(int *)(puVar8 + -1);
    if (iVar1 == 2) {
        LAB_1406cd951:
        if (*(int *)(puVar8 + -1) == 2) {
            LAB_1406cd96d:
            uVar9 = puVar8[-2];
        }
        else if (*(int *)(puVar8 + -1) == 7) {
            uVar9 = puVar8[-2] + 0x30;
        }
        else {
            uVar9 = 0;
        }
    }
    else {
        if ((iVar1 == 5) || (iVar1 == 6)) goto LAB_1406cd96d;
        if (iVar1 == 7) goto LAB_1406cd951;
        uVar9 = uVar15;
        if (iVar1 == 8) goto LAB_1406cd96d;
    }
    *puVar8 = puVar8[-2];
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar8 + -1);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    lVar14 = *(longlong *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406cd99c;
    uVar5 = FUN_140062650(lVar2,"__index",7);
    lVar11 = *(longlong *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar5;
    *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406cd9c2;
    FUN_14005ea50(lVar2,lVar14 + -0x20,(longlong)alStackX16 + lVar4 + -0x10,lVar11 + -0x10);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
    lVar11 = *(longlong *)((longlong)alStackX16 + lVar4);
    lVar6 = *(longlong *)(lVar2 + 0x10);
    lVar14 = (longlong)alStackX16 + lVar4;
    if (lVar11 != 0) {
        *(undefined8 *)(&stack0x00004060 + lVar4) = unaff_RBP;
        do {
            uVar5 = *(undefined8 *)(lVar14 + 8);
            if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406cda0a;
                FUN_14005e2c0(lVar2);
            }
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406cda2f;
            lVar6 = FUN_140060ab0(lVar2,0);
            *(undefined8 *)(lVar6 + 0x20) = uVar5;
            plVar3 = *(longlong **)(lVar2 + 0x10);
            *plVar3 = lVar6;
            *(undefined4 *)(plVar3 + 1) = 6;
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406cda53;
            uVar5 = FUN_1400580e0(lVar2,0xfffffffe);
            lVar6 = -1;
            do {
                lVar6 = lVar6 + 1;
            } while (*(char *)(lVar11 + lVar6) != '\0');
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406cda74;
            uVar7 = FUN_140062650(lVar2,lVar11);
            lVar11 = *(longlong *)(lVar2 + 0x10);
            *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar7;
            *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406cda99;
            FUN_14005ea50(lVar2,uVar5,(longlong)alStackX16 + lVar4 + -0x10,lVar11 + -0x10);
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
            lVar11 = *(longlong *)(lVar14 + 0x10);
            lVar6 = *(longlong *)(lVar2 + 0x10);
            lVar14 = lVar14 + 0x10;
        } while (lVar11 != 0);
    }
    lVar14 = *(longlong *)(lVar2 + 0x20);
    *(longlong *)(lVar2 + 0x10) = lVar6 + -0x10;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406cdadc;
    uVar7 = FUN_140062650(lVar2,"Apollo.Window",0xd);
    uVar5 = *(undefined8 *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar7;
    *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406cdb01;
    FUN_14005e8e0(lVar2,lVar14 + 0xa0,(longlong)alStackX16 + lVar4 + -0x10,uVar5);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    lVar14 = *(longlong *)(lVar2 + 0x10);
    iVar1 = *(int *)(lVar14 + -8);
    puVar10 = (ulonglong *)(lVar14 + -0x10);
    if (iVar1 == 2) {
        LAB_1406cdb3c:
        if (*(int *)(lVar14 + -8) != 2) {
            if (*(int *)(lVar14 + -8) == 7) {
                uVar15 = *puVar10 + 0x30;
            }
            goto LAB_1406cdb55;
        }
    }
    else if ((iVar1 != 5) && (iVar1 != 6)) {
        if (iVar1 == 7) goto LAB_1406cdb3c;
        if (iVar1 != 8) goto LAB_1406cdb55;
    }
    uVar15 = *puVar10;
    LAB_1406cdb55:
    *(ulonglong **)(lVar2 + 0x10) = puVar10;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406cdb64;
    FUN_1400ed720(param_1,uVar9,uVar15);
    *(code **)((longlong)alStackX16 + lVar4 + -0x10) = FUN_1406cd060;
    *(code **)((longlong)&pcStackX8 + lVar4) = FUN_140001b30;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406cdb9b;
    FUN_1400f85d0(param_1 + 0xa80,L"SendEmailButton",(longlong)alStackX16 + lVar4 + -0x10);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406cdbab;
    FUN_1407db4f0(*(ulonglong *)(&stack0x00004010 + lVar4) ^
                  (ulonglong)(&stack0xffffffffffffffe0 + lVar4));
    return;
}



undefined8 * FUN_1406cdbc0(undefined8 *param_1)

{
    undefined4 uVar1;
    undefined2 *puVar2;
    undefined8 *puVar3;
    int iVar4;
    int iVar5;

    FUN_14012fa20();
    iVar4 = 5;
    iVar5 = 5;
    puVar3 = param_1 + 200;
    *param_1 = &PTR_LAB_140b70e40;
    do {
        puVar3[-1] = 0;
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar2 = (undefined2 *)FUN_14018b280(0x10);
        puVar3[-1] = puVar2;
        *puVar3 = puVar2;
        puVar3[1] = puVar2 + 8;
        if (puVar2 != (undefined2 *)0x0) {
            *puVar2 = 0;
        }
        uVar1 = DAT_140c63664;
        puVar3[-4] = 0;
        *(undefined4 *)((longlong)puVar3 + -0x14) = 0x3f800000;
        *(undefined4 *)(puVar3 + -3) = uVar1;
        puVar3 = puVar3 + 6;
        iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    puVar3 = param_1 + 0xec;
    do {
        puVar3[-1] = 0;
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar2 = (undefined2 *)FUN_14018b280(0x10);
        puVar3[-1] = puVar2;
        *puVar3 = puVar2;
        puVar3[1] = puVar2 + 8;
        if (puVar2 != (undefined2 *)0x0) {
            *puVar2 = 0;
        }
        uVar1 = DAT_140c63664;
        puVar3[-4] = 0;
        *(undefined4 *)((longlong)puVar3 + -0x14) = 0x3f800000;
        *(undefined4 *)(puVar3 + -3) = uVar1;
        puVar3 = puVar3 + 6;
        iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    FUN_1401095e0(param_1 + 0x10c);
    param_1[0x114] = 0;
    param_1[0x115] = 0xf;
    param_1[0x116] = 0;
    param_1[0x117] = 0;
    param_1[0x118] = 0;
    *(undefined4 *)(param_1 + 0x119) = 0;
    *(undefined4 *)((longlong)param_1 + 0x8cc) = 1;
    uVar1 = FUN_14018cdf0();
    param_1[0x36] = param_1[0x36] | 0x80000;
    *(undefined4 *)(param_1 + 0x11a) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x8d4) = 0;
    *(undefined4 *)((longlong)param_1 + 0x2a4) = 3;
    return param_1;
}



undefined8 FUN_1406cdd70(undefined8 param_1,ulonglong param_2)

{
    FUN_1406cddb0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_1406cddb0(longlong param_1)

{
    undefined8 *puVar1;
    int iVar2;
    int iVar3;

    if (*(longlong **)(param_1 + 0x860) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x860) + 8))();
        *(undefined8 *)(param_1 + 0x860) = 0;
    }
    if (*(longlong *)(param_1 + 0x878) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0x878),0);
    }
    iVar3 = 5;
    iVar2 = 5;
    puVar1 = (undefined8 *)(param_1 + 0x860);
    do {
        if ((longlong *)puVar1[-6] != (longlong *)0x0) {
            (**(code **)(*(longlong *)puVar1[-6] + 8))();
            puVar1[-6] = 0;
        }
        if (puVar1[-3] != 0) {
            FUN_14018b900(puVar1[-3],0);
        }
        iVar2 = iVar2 + -1;
        puVar1 = puVar1 + -6;
    } while (-1 < iVar2);
    puVar1 = (undefined8 *)(param_1 + 0x740);
    do {
        if ((longlong *)puVar1[-6] != (longlong *)0x0) {
            (**(code **)(*(longlong *)puVar1[-6] + 8))();
            puVar1[-6] = 0;
        }
        if (puVar1[-3] != 0) {
            FUN_14018b900(puVar1[-3],0);
        }
        iVar3 = iVar3 + -1;
        puVar1 = puVar1 + -6;
    } while (-1 < iVar3);
    FUN_14012fda0(param_1);
    return;
}



void FUN_1406ce710(undefined8 param_1,undefined4 param_2,longlong param_3)

{
    int iVar1;
    ulonglong uVar2;
    longlong lVar3;
    char cVar4;
    int iVar5;
    longlong lVar6;
    undefined *puVar7;
    longlong *plVar8;
    short *psVar9;
    short *psVar10;
    wchar_t *pwVar11;
    undefined8 extraout_XMM0_Qa;
    undefined8 extraout_XMM0_Qa_00;
    undefined8 extraout_XMM0_Qa_01;
    undefined8 extraout_XMM0_Qa_02;
    undefined8 extraout_XMM0_Qa_03;
    undefined8 extraout_XMM0_Qa_04;
    undefined8 extraout_XMM0_Qa_05;
    undefined8 extraout_XMM0_Qa_06;

    if (*(int *)(param_3 + 0x8cc) == 0) goto LAB_1406ceba8;
    iVar1 = *(int *)(param_3 + 0x8a0);
    psVar10 = (short *)0x0;
    if ((iVar1 == 0) || (*(longlong *)(param_3 + 0x8c0) == 0)) {
        if ((*(int *)(param_3 + 0x8a4) == 0) || (*(longlong *)(param_3 + 0x8c0) == 0)) {
            iVar1 = *(int *)(param_3 + 0x8a8);
            if ((iVar1 < 0xf) && (*(longlong *)(param_3 + 0x8c0) != 0)) {
                if (iVar1 == 1) {
                    lVar6 = *(longlong *)(param_3 + 0x20);
                    if ((lVar6 != 0) &&
                        ((pwVar11 = L"sprLargeCashPlatinum", *(longlong *)(param_3 + 0x860) == 0 ||
                                                             (cVar4 = FUN_14002c740(param_3 + 0x870,L"sprLargeCashPlatinum"),
                                                                     param_1 = extraout_XMM0_Qa_01, cVar4 == '\0')))) {
                        lVar6 = FUN_140108e80(lVar6 + 0xf0,L"sprLargeCashPlatinum");
                        if (lVar6 != 0) {
                            do {
                                lVar3 = (longlong)psVar10 + 1;
                                psVar10 = (short *)((longlong)psVar10 + 1);
                            } while (L"sprLargeCashPlatinum"[lVar3] != L'\0');
                            LAB_1406ceb0e:
                            FUN_14001c480(param_3 + 0x870,pwVar11,pwVar11 + (longlong)psVar10);
                        }
                        LAB_1406ceb21:
                        param_1 = FUN_1401097f0(param_3 + 0x860,lVar6);
                    }
                }
                else {
                    lVar6 = FUN_1401fa4a0(iVar1);
                    param_1 = extraout_XMM0_Qa_02;
                    if (lVar6 == 0) {
                        lVar6 = *(longlong *)(param_3 + 0x20);
                        if ((lVar6 != 0) &&
                            ((pwVar11 = L"Icon_ItemMisc_bag_0004", *(longlong *)(param_3 + 0x860) == 0 ||
                                                                   (cVar4 = FUN_14002c740(param_3 + 0x870,L"Icon_ItemMisc_bag_0004"),
                                                                           param_1 = extraout_XMM0_Qa_03, cVar4 == '\0')))) {
                            lVar6 = FUN_140108e80(lVar6 + 0xf0,L"Icon_ItemMisc_bag_0004");
                            if (lVar6 != 0) {
                                do {
                                    lVar3 = (longlong)psVar10 + 1;
                                    psVar10 = (short *)((longlong)psVar10 + 1);
                                } while (L"Icon_ItemMisc_bag_0004"[lVar3] != L'\0');
                                goto LAB_1406ceb0e;
                            }
                            goto LAB_1406ceb21;
                        }
                    }
                    else {
                        uVar2 = *(ulonglong *)(lVar6 + 0x18);
                        if ((uVar2 != 0) && (uVar2 <= DAT_140c3fe70)) {
                            psVar10 = (short *)(DAT_140c3fe68 + uVar2);
                        }
                        if (*(longlong *)(param_3 + 0x20) != 0) {
                            param_1 = FUN_140109710(param_3 + 0x860,*(longlong *)(param_3 + 0x20) + 0xf0,psVar10,0
                            );
                        }
                    }
                }
            }
            else if (((iVar1 == 0xf) && (*(int *)(param_3 + 0x8ac) == 1)) &&
                     (*(longlong *)(param_3 + 0x8c0) != 0)) {
                lVar6 = *(longlong *)(param_3 + 0x20);
                if ((lVar6 != 0) &&
                    ((pwVar11 = L"Icon_Windows_UI_CRB_Coin_War", *(longlong *)(param_3 + 0x860) == 0 ||
                                                                 (cVar4 = FUN_14002c740(param_3 + 0x870,L"Icon_Windows_UI_CRB_Coin_War"),
                                                                         param_1 = extraout_XMM0_Qa_04, cVar4 == '\0')))) {
                    lVar6 = FUN_140108e80(lVar6 + 0xf0,L"Icon_Windows_UI_CRB_Coin_War");
                    if (lVar6 != 0) {
                        do {
                            lVar3 = (longlong)psVar10 + 1;
                            psVar10 = (short *)((longlong)psVar10 + 1);
                        } while (L"Icon_Windows_UI_CRB_Coin_War"[lVar3] != L'\0');
                        goto LAB_1406ceb0e;
                    }
                    goto LAB_1406ceb21;
                }
            }
            else if (*(longlong *)(param_3 + 0x8b0) == 0) {
                if (*(int *)(param_3 + 0x8bc) == 0) {
                    if (*(int *)(param_3 + 0x8b8) == 0) {
                        if ((*(longlong *)(param_3 + 0x20) != 0) &&
                            (plVar8 = *(longlong **)(param_3 + 0x860), plVar8 != (longlong *)0x0)) {
                            puVar7 = &DAT_1409f7984;
                            goto LAB_1406ceb6e;
                        }
                    }
                    else if ((*(longlong *)(param_3 + 0x20) != 0) &&
                             (plVar8 = *(longlong **)(param_3 + 0x860), plVar8 != (longlong *)0x0)) {
                        puVar7 = &DAT_1409f7994;
                        LAB_1406ceb6e:
                        cVar4 = FUN_14002c740(param_3 + 0x870,puVar7);
                        param_1 = extraout_XMM0_Qa_06;
                        if (cVar4 == '\0') {
                            param_1 = (**(code **)(*plVar8 + 8))(plVar8);
                            *(undefined8 *)(param_3 + 0x860) = 0;
                        }
                    }
                }
                else {
                    lVar6 = *(longlong *)(param_3 + 0x20);
                    if ((lVar6 != 0) &&
                        ((pwVar11 = L"Icon_ItemMisc_UI_Item_Parchment", *(longlong *)(param_3 + 0x860) == 0 ||
                                                                        (cVar4 = FUN_14002c740(param_3 + 0x870,&DAT_140b3ad90), param_1 = extraout_XMM0_Qa_05,
                                                                                cVar4 == '\0')))) {
                        lVar6 = FUN_140108e80(lVar6 + 0xf0,&DAT_140b3ad90);
                        if (lVar6 != 0) {
                            do {
                                psVar9 = &DAT_140b3ad92 + (longlong)psVar10;
                                psVar10 = (short *)((longlong)psVar10 + 1);
                            } while (*psVar9 != 0);
                            goto LAB_1406ceb0e;
                        }
                        goto LAB_1406ceb21;
                    }
                }
            }
            else if (*(longlong *)(param_3 + 0x20) != 0) {
                param_1 = FUN_140109710(param_3 + 0x860,*(longlong *)(param_3 + 0x20) + 0xf0,
                                        **(undefined8 **)(*(longlong *)(param_3 + 0x8b0) + 8),0);
            }
        }
        else {
            lVar6 = *(longlong *)(param_3 + 0x20);
            if ((lVar6 != 0) &&
                ((pwVar11 = L"Icon_ItemMisc_UI_Item_Parchment", *(longlong *)(param_3 + 0x860) == 0 ||
                                                                (cVar4 = FUN_14002c740(param_3 + 0x870,L"Icon_ItemMisc_UI_Item_Parchment"),
                                                                        param_1 = extraout_XMM0_Qa_00, cVar4 == '\0')))) {
                lVar6 = FUN_140108e80(lVar6 + 0xf0,L"Icon_ItemMisc_UI_Item_Parchment");
                if (lVar6 != 0) {
                    do {
                        lVar3 = (longlong)psVar10 + 1;
                        psVar10 = (short *)((longlong)psVar10 + 1);
                    } while (L"Icon_ItemMisc_UI_Item_Parchment"[lVar3] != L'\0');
                    goto LAB_1406ceb0e;
                }
                goto LAB_1406ceb21;
            }
        }
    }
    else {
        iVar5 = FUN_140444550(DAT_140c658f0,iVar1);
        if ((iVar5 == 0) || (lVar6 = FUN_1402096e0(iVar1), lVar6 == 0)) {
            *(undefined8 *)(param_3 + 0x8a0) = 0;
            *(undefined8 *)(param_3 + 0x8a8) = 0xf;
            *(undefined8 *)(param_3 + 0x8b8) = 0;
            *(undefined8 *)(param_3 + 0x8c0) = 0;
            *(undefined4 *)(param_3 + 0x8c8) = 0;
            *(undefined4 *)(param_3 + 0x8d4) = 0;
            *(undefined4 *)(param_3 + 0x8cc) = 1;
            param_1 = FUN_1400d42f0(param_3,0,0);
        }
        else {
            uVar2 = *(ulonglong *)(lVar6 + 0xb8);
            if ((uVar2 == 0) ||
                (((DAT_140c3fe70 < uVar2 ||
                   (psVar9 = (short *)(DAT_140c3fe68 + uVar2), psVar9 == (short *)0x0)) || (*psVar9 == 0))))
            {
                uVar2 = *(ulonglong *)(lVar6 + 0xc0);
                psVar9 = psVar10;
                if ((uVar2 != 0) && (psVar9 = (short *)0x0, uVar2 <= DAT_140c3fe70)) {
                    psVar9 = (short *)(DAT_140c3fe68 + uVar2);
                }
            }
            param_1 = extraout_XMM0_Qa;
            if (*(longlong *)(param_3 + 0x20) != 0) {
                param_1 = FUN_140109710(param_3 + 0x860,*(longlong *)(param_3 + 0x20) + 0xf0,psVar9,0);
            }
        }
    }
    *(undefined4 *)(param_3 + 0x8cc) = 0;
    LAB_1406ceba8:
    FUN_140131130(param_1,param_2,param_3);
    return;
}
