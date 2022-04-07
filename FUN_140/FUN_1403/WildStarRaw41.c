//
// Created by flop on 04.04.22.
//
#include "../../include.h"

void FUN_1403d3150(longlong *param_1,longlong param_2)

{
    int iVar1;
    undefined8 *puVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    uVar5 = param_1[1] - 1;
    lVar3 = param_2 * 0x100 + *param_1;
    FUN_1407db590(lVar3,lVar3 + 0x100,(uVar5 - param_2) * 0x100);
    puVar2 = (undefined8 *)*param_1;
    if (uVar5 == 0) goto LAB_1403d3222;
    if (puVar2 == (undefined8 *)0x0) {
        lVar3 = uVar5 * 0x100 + 0x10;
        uVar4 = uVar5;
    }
    else {
        if (uVar5 < (ulonglong)puVar2[-1] || uVar5 == puVar2[-1]) goto LAB_1403d3222;
        lVar3 = FUN_14018a3e0(uVar5 * 0x100 + 0x10);
        uVar4 = lVar3 - 0x10U >> 8;
        lVar3 = (lVar3 - 0x10U & 0xffffffffffffff00) + 0x10;
        iVar1 = (**(code **)puVar2[-2])(puVar2 + -2,lVar3);
        if (iVar1 != 0) {
            puVar2[-1] = uVar4;
            goto LAB_1403d3222;
        }
    }
    puVar2 = (undefined8 *)FUN_14018b280(lVar3,0);
    if (puVar2 != (undefined8 *)0x0) {
        puVar2[1] = uVar4;
        *puVar2 = &PTR_LAB_140b55060;
    }
    puVar2 = puVar2 + 2;
    LAB_1403d3222:
    if ((undefined8 *)*param_1 != puVar2) {
        FUN_1407db590(puVar2,(undefined8 *)*param_1,uVar5 * 0x100);
        lVar3 = *param_1;
        if (lVar3 != 0) {
            (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
        }
        *param_1 = (longlong)puVar2;
    }
    param_1[1] = uVar5;
    return;
}



void FUN_1403d3260(longlong *param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    longlong lVar5;
    ulonglong uVar6;
    ulonglong uVar7;

    if ((ulonglong)param_1[1] < 8) {
        puVar2 = (undefined8 *)FUN_14018db00(*param_1,7,0x10);
        uVar7 = param_1[1];
        uVar6 = 0;
        if (uVar7 < 7) {
            puVar4 = puVar2 + uVar7 * 2;
            lVar5 = 7 - uVar7;
            do {
                if (puVar4 != (undefined8 *)0x0) {
                    puVar4[1] = 0;
                    *puVar4 = 0;
                }
                puVar4 = puVar4 + 2;
                lVar5 = lVar5 + -1;
            } while (lVar5 != 0);
        }
        if ((undefined8 *)*param_1 != puVar2) {
            if (param_1[1] != 0) {
                puVar4 = puVar2;
                do {
                    if (puVar4 != (undefined8 *)0x0) {
                        puVar3 = (undefined8 *)((longlong)puVar4 + *param_1 + -(longlong)puVar2);
                        puVar4[1] = puVar3[1];
                        *puVar4 = *puVar3;
                        puVar3[1] = 0;
                        *puVar3 = 0;
                    }
                    lVar5 = *(longlong *)((longlong)puVar4 + *param_1 + -(longlong)puVar2);
                    if (lVar5 != 0) {
                        (**(code **)(*(longlong *)(lVar5 + -0x10) + 8))(lVar5 + -0x10);
                    }
                    uVar6 = uVar6 + 1;
                    puVar4 = puVar4 + 2;
                } while (uVar6 < (ulonglong)param_1[1]);
            }
            lVar5 = *param_1;
            if (lVar5 != 0) {
                (**(code **)(*(longlong *)(lVar5 + -0x10) + 8))(lVar5 + -0x10);
            }
            *param_1 = (longlong)puVar2;
        }
        param_1[1] = 7;
        return;
    }
    uVar7 = 7;
    if ((ulonglong)param_1[1] < 8) {
        param_1[1] = 7;
        return;
    }
    lVar5 = 0x70;
    do {
        lVar1 = *(longlong *)(lVar5 + *param_1);
        if (lVar1 != 0) {
            (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        }
        uVar7 = uVar7 + 1;
        lVar5 = lVar5 + 0x10;
    } while (uVar7 < (ulonglong)param_1[1]);
    param_1[1] = 7;
    return;
}



longlong FUN_1403d33d0(longlong *param_1,undefined8 param_2,longlong param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar1 = param_1[1];
    if (param_3 != 0) {
        lVar3 = FUN_14018db00(*param_1,lVar1 + param_3,2);
        FUN_1407db590(lVar3 + lVar1 * 2,param_2,param_3 * 2);
        if (*param_1 != lVar3) {
            FUN_1407db590(lVar3,*param_1,param_1[1] * 2);
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



undefined8 FUN_1403d3470(longlong param_1,undefined4 *param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 local_18;
    undefined4 local_10;

    puVar2 = (undefined8 *)FUN_140059170();
    puVar3 = (undefined8 *)FUN_14018b280(0x10);
    if (puVar3 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar3 + 1) = *param_2;
        *puVar3 = &PTR_FUN_140b6fe30;
    }
    *puVar2 = 0x3950;
    puVar2[1] = puVar3;
    lVar1 = *(longlong *)(param_1 + 0x20);
    local_18 = FUN_140062650(param_1,"Game.Spell",10);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



ulonglong FUN_1403d3520(undefined8 param_1,uint param_2,undefined8 param_3)

{
    undefined8 uVar1;
    int iVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    longlong lVar6;

    uVar1 = DAT_140c65b70;
    uVar5 = (ulonglong)param_2;
    if (param_2 == 0) {
        return 0;
    }
    uVar3 = FUN_1403acd90(DAT_140c65b70);
    uVar4 = uVar3;
    if (uVar3 != 0) {
        iVar2 = *(int *)(*(longlong *)(uVar3 + 0x70) + 0x18);
        uVar4 = uVar5;
        if (((((iVar2 - 2U & 0xfffffffa) == 0) && (iVar2 != 3)) &&
             (*(int *)(*(longlong *)(uVar3 + 0x70) + 0x184) == 0)) &&
            (uVar5 = 0, *(int *)(uVar3 + 0x28) != 0)) {
            lVar6 = 0;
            do {
                if (((*(int *)(*(longlong *)(uVar3 + 0x30) + 0x10 + lVar6) == 0x1a) &&
                     (*(int *)(*(longlong *)(uVar3 + 0x30) + 0x74 + lVar6) != 0)) &&
                    (iVar2 = (**(code **)(*DAT_140c659a0 + 0x18))(), iVar2 != 0)) {
                    uVar5 = (ulonglong)*(uint *)(uVar5 * 0xa8 + 0x40 + *(longlong *)(uVar3 + 0x30));
                    lVar6 = FUN_1403acd90(uVar1,uVar5,param_3);
                    if (lVar6 != 0) {
                        return uVar5;
                    }
                    return (ulonglong)param_2;
                }
                uVar5 = uVar5 + 1;
                lVar6 = lVar6 + 0xa8;
            } while (uVar5 < *(uint *)(uVar3 + 0x28));
        }
    }
    return uVar4;
}



undefined4 FUN_1403d3650(longlong param_1,undefined4 param_2)

{
    int iVar1;

    switch(param_2) {
        case 1:
            return 0x2c;
        case 3:
            return 0xb0;
        case 5:
            return 0x32;
        case 6:
            return 0x33;
        case 7:
            return 0x34;
        case 8:
            return 0x35;
        case 9:
            return 0x36;
        case 10:
            return 0x37;
        case 0xb:
            return 0x38;
        case 0xf:
            return 0xa7;
        case 0x10:
            return 0xb1;
        case 0x14:
            return 0xfa;
        case 0x15:
            return 0xfe;
        case 0x16:
            return 0x113;
        case 0x17:
            return 0x114;
        case 0x18:
            return 0x115;
        case 0x1b:
            return 0x147;
        case 0x1c:
            return 0x148;
        case 0x1d:
            return 0x149;
    }
    if (((*(longlong *)(DAT_140c65898 + 0x78) == param_1) &&
         (*(longlong **)(DAT_140c65898 + 0x6d90) != (longlong *)0x0)) &&
        (iVar1 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x6d90) + 0x60))(), iVar1 < 0xb)) {
        return *(undefined4 *)(&DAT_140c38838 + (longlong)iVar1 * 4);
    }
    return 0xaf;
}



undefined8 FUN_1403d3800(longlong param_1,uint param_2,undefined8 param_3,undefined8 *param_4)

{
    undefined4 uVar1;
    longlong lVar2;
    longlong lVar3;
    int *piVar4;
    ulonglong uVar5;

    if (param_1 != 0) {
        *param_4 = 0;
        param_4[1] = 0;
        *(undefined4 *)(param_4 + 2) = 1;
        uVar1 = *(undefined4 *)(param_4 + 2);
        *(uint *)param_4 = param_2;
        if (4 < param_2) {
            uVar1 = 0;
        }
        *(undefined4 *)(param_4 + 2) = uVar1;
        if (param_2 != 0) {
            uVar5 = (ulonglong)param_2;
            do {
                lVar2 = FUN_1403ac780(param_3,param_1);
                lVar3 = FUN_1403acab0(param_3,param_1);
                piVar4 = (int *)FUN_1403d6540(param_3,param_1);
                if (((lVar2 == 0) || (lVar3 == 0)) || (piVar4 == (int *)0x0)) {
                    *(undefined4 *)(param_4 + 2) = 0;
                }
                else {
                    if (1 < *(uint *)(lVar2 + 0x78)) {
                        *(undefined4 *)(param_4 + 2) = 0;
                    }
                    if ((*(uint *)(lVar3 + 0x154) & 0x20000) == 0) {
                        *(undefined4 *)(param_4 + 2) = 0;
                    }
                    *(int *)((longlong)param_4 + 4) = *(int *)((longlong)param_4 + 4) + piVar4[3];
                    if (*(int *)(param_4 + 1) == 0) {
                        *(int *)(param_4 + 1) = *piVar4;
                    }
                    else if (*(int *)(param_4 + 1) != *piVar4) {
                        *(undefined4 *)(param_4 + 1) = 8;
                        *(undefined4 *)(param_4 + 2) = 0;
                    }
                    if (*(int *)((longlong)param_4 + 0xc) == 0) {
                        *(undefined4 *)((longlong)param_4 + 0xc) = *(undefined4 *)(lVar3 + 0x17c);
                    }
                    else if (*(int *)((longlong)param_4 + 0xc) != *(int *)(lVar3 + 0x17c)) {
                        *(undefined4 *)((longlong)param_4 + 0xc) = 0x48;
                    }
                }
                param_1 = param_1 + 8;
                uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
        }
        if (*(int *)(param_4 + 1) < 3) {
            *(undefined4 *)(param_4 + 2) = 0;
        }
        if (6 < *(int *)(param_4 + 1)) {
            *(undefined4 *)(param_4 + 2) = 0;
        }
        return 0;
    }
    return 0x80004005;
}



longlong FUN_1403d3950(undefined8 param_1,uint param_2,undefined8 param_3)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    longlong local_res8;

    lVar1 = DAT_140c65960;
    lVar3 = FUN_1404835c0(DAT_140c65918);
    if (lVar3 != 0) {
        lVar1 = *(longlong *)(lVar1 + 0x10);
        local_res8 = lVar1;
        for (lVar3 = *(longlong *)(lVar1 + 8); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x10)) {
            local_res8 = lVar3;
        }
        if ((local_res8 == lVar1) || (*(int *)(local_res8 + 0x20) != 0)) {
            local_res8 = lVar1;
        }
        if ((local_res8 != lVar1) && (local_res8 != -0x28)) {
            lVar1 = *(longlong *)(local_res8 + 0x90);
            local_res8 = lVar1;
            lVar3 = *(longlong *)(lVar1 + 8);
            while (lVar3 != 0) {
                if (*(uint *)(lVar3 + 0x20) < param_2) {
                    lVar3 = *(longlong *)(lVar3 + 0x18);
                }
                else {
                    local_res8 = lVar3;
                    lVar3 = *(longlong *)(lVar3 + 0x10);
                }
            }
            if ((local_res8 == lVar1) || (param_2 < *(uint *)(local_res8 + 0x20))) {
                local_res8 = lVar1;
            }
            if (((local_res8 != lVar1) && (lVar1 = *(longlong *)(local_res8 + 0x28), lVar1 != 0)) &&
                (iVar2 = FUN_1403d6310(lVar1,param_3), iVar2 != 0)) {
                return lVar1;
            }
        }
    }
    return 0;
}



ulonglong FUN_1403d3a60(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                        int param_5)

{
    int iVar1;
    longlong *plVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    uint uVar6;
    ulonglong *puVar7;

    uVar5 = 0;
    plVar2 = (longlong *)(param_1 + 0x2d8);
    puVar7 = (ulonglong *)(DAT_140c65a08 + 0x28);
    uVar3 = uVar5;
    do {
        if (*plVar2 != 0) {
            uVar4 = uVar5;
            if ((int)uVar3 < 0x1c) {
                uVar4 = *puVar7;
            }
            if ((*(byte *)(uVar4 + 0x10) & 4) != 0) {
                return 0x3c;
            }
        }
        uVar6 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar6;
        puVar7 = puVar7 + 1;
        plVar2 = plVar2 + 2;
    } while (uVar6 < 0x1c);
    if (*(int *)(param_1 + 0x250) != 0) {
        return 2;
    }
    if (*(int *)(param_2 + 0x250) == 0) {
        iVar1 = FUN_14045e5e0(param_2);
        if (iVar1 != 0) {
            return 0x3d;
        }
        if (param_5 != 0) {
            uVar3 = FUN_1403d6a10(param_4);
            if (((int)uVar3 == 0) && (iVar1 = FUN_1403ad690(param_1,param_2), uVar3 = uVar5, iVar1 == 0))
            {
                uVar3 = 0x11;
            }
            return uVar3;
        }
        return 0x18;
    }
    return 0x17;
}



void FUN_1403d3b90(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
    undefined4 *puVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    longlong lVar9;
    ulonglong uVar10;
    undefined4 *puVar11;
    longlong lVar12;
    undefined4 *puVar13;
    undefined4 *puVar14;

    puVar14 = *(undefined4 **)(param_1 + 0x10);
    if (puVar14 == *(undefined4 **)(param_1 + 0x18)) {
        lVar9 = (longlong)puVar14 - *(longlong *)(param_1 + 8) >> 4;
        lVar12 = lVar9 * 2;
        if (lVar9 == 0) {
            lVar12 = 1;
        }
        uVar10 = FUN_14018a3e0(lVar12 << 4);
        puVar11 = (undefined4 *)FUN_14018b280(uVar10 & 0xfffffffffffffff0,0);
        puVar13 = puVar11;
        for (puVar14 = *(undefined4 **)(param_1 + 8); puVar14 != param_2; puVar14 = puVar14 + 4) {
            if (puVar13 != (undefined4 *)0x0) {
                uVar2 = puVar14[1];
                uVar3 = puVar14[2];
                uVar4 = puVar14[3];
                *puVar13 = *puVar14;
                puVar13[1] = uVar2;
                puVar13[2] = uVar3;
                puVar13[3] = uVar4;
            }
            puVar13 = puVar13 + 4;
        }
        if (puVar13 != (undefined4 *)0x0) {
            uVar2 = param_3[1];
            uVar3 = param_3[2];
            uVar4 = param_3[3];
            *puVar13 = *param_3;
            puVar13[1] = uVar2;
            puVar13[2] = uVar3;
            puVar13[3] = uVar4;
        }
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        puVar14 = puVar13 + 4;
        if (param_2 != puVar1) {
            param_2 = (undefined4 *)((longlong)param_2 + (longlong)puVar14 + (-0x10 - (longlong)puVar13));
            do {
                if (puVar14 != (undefined4 *)0x0) {
                    uVar2 = param_2[1];
                    uVar3 = param_2[2];
                    uVar4 = param_2[3];
                    *puVar14 = *param_2;
                    puVar14[1] = uVar2;
                    puVar14[2] = uVar3;
                    puVar14[3] = uVar4;
                }
                param_2 = param_2 + 4;
                puVar14 = puVar14 + 4;
            } while (param_2 != puVar1);
        }
        if (*(longlong *)(param_1 + 8) != 0) {
            FUN_14018b900(*(longlong *)(param_1 + 8),0);
        }
        *(undefined4 **)(param_1 + 8) = puVar11;
        *(undefined4 **)(param_1 + 0x10) = puVar14;
        *(ulonglong *)(param_1 + 0x18) = (uVar10 & 0xfffffffffffffff0) + (longlong)puVar11;
        return;
    }
    if (puVar14 != (undefined4 *)0x0) {
        *puVar14 = puVar14[-4];
        puVar14[1] = puVar14[-3];
        puVar14[2] = puVar14[-2];
        puVar14[3] = puVar14[-1];
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    lVar12 = *(longlong *)(param_1 + 0x10) + -0x20;
    puVar14 = (undefined4 *)(*(longlong *)(param_1 + 0x10) + -0x10);
    for (lVar9 = lVar12 - (longlong)param_2 >> 4; 0 < lVar9; lVar9 = lVar9 + -1) {
        puVar13 = (undefined4 *)(lVar12 + -0x10);
        uVar6 = *(undefined4 *)(lVar12 + -0xc);
        uVar7 = *(undefined4 *)(lVar12 + -8);
        uVar8 = *(undefined4 *)(lVar12 + -4);
        lVar12 = lVar12 + -0x10;
        puVar14[-4] = *puVar13;
        puVar14[-3] = uVar6;
        puVar14[-2] = uVar7;
        puVar14[-1] = uVar8;
        puVar14 = puVar14 + -4;
    }
    *param_2 = uVar2;
    param_2[1] = uVar3;
    param_2[2] = uVar4;
    param_2[3] = uVar5;
    return;
}



longlong FUN_1403d3d00(longlong param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;
    longlong lVar4;
    ulonglong uVar5;

    if (param_2 != param_1) {
        lVar1 = *(longlong *)(param_2 + 0x10);
        lVar2 = *(longlong *)(param_2 + 8);
        lVar4 = (lVar1 - lVar2) / 0x12 + (lVar1 - lVar2 >> 0x3f);
        uVar5 = (lVar4 >> 2) - (lVar4 >> 0x3f);
        if ((ulonglong)((*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 8)) / 0x48) < uVar5) {
            lVar4 = FUN_14018b280(uVar5 * 0x48,0);
            FUN_1403d84e0(lVar2,lVar1,lVar4);
            if (*(longlong *)(param_1 + 8) != 0) {
                FUN_14018b900(*(longlong *)(param_1 + 8),0);
            }
            *(longlong *)(param_1 + 8) = lVar4;
            *(ulonglong *)(param_1 + 0x18) = uVar5 * 0x48 + lVar4;
        }
        else {
            uVar3 = (*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8)) / 0x48;
            if (uVar3 < uVar5) {
                FUN_1403d8590(lVar2,lVar2 + uVar3 * 0x48);
                FUN_1403d84e0(*(longlong *)(param_2 + 8) +
                              ((*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8)) / 0x48) * 0x48,
                              *(undefined8 *)(param_2 + 0x10));
            }
            else {
                FUN_1403d8590(lVar2,lVar1);
            }
        }
        *(ulonglong *)(param_1 + 0x10) = *(longlong *)(param_1 + 8) + uVar5 * 0x48;
    }
    return param_1;
}



longlong * FUN_1403d3e70(longlong param_1,longlong *param_2,char **param_3,undefined8 *param_4)

{
    char *pcVar1;
    char *pcVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong lVar5;
    bool bVar6;
    undefined local_18 [16];

    pcVar1 = *(char **)(param_1 + 8);
    pcVar2 = *param_3;
    if (pcVar2 == *(char **)(pcVar1 + 0x10)) {
        if ((*(longlong *)(param_1 + 0x10) == 0) || (*(int *)(pcVar2 + 0x20) <= *(int *)param_4)) {
            LAB_1403d3eca:
            plVar3 = (longlong *)FUN_1403d6c10(param_1,local_18,param_4);
            *param_2 = *plVar3;
            return param_2;
        }
    }
    else {
        if (pcVar2 == pcVar1) {
            pcVar2 = *(char **)(pcVar1 + 0x18);
            if (*(int *)(pcVar2 + 0x20) < *(int *)param_4) {
                if ((pcVar2 == pcVar1) || (*(int *)param_4 < *(int *)(pcVar2 + 0x20))) {
                    lVar4 = FUN_14018b280(0x28);
                    if ((undefined8 *)(lVar4 + 0x20) != (undefined8 *)0x0) {
                        *(undefined8 *)(lVar4 + 0x20) = *param_4;
                    }
                    *(longlong *)(pcVar2 + 0x10) = lVar4;
                    pcVar1 = *(char **)(param_1 + 8);
                    if (pcVar2 == pcVar1) {
                        *(longlong *)(pcVar1 + 8) = lVar4;
                        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar4;
                    }
                    else if (pcVar2 == *(char **)(pcVar1 + 0x10)) {
                        *(longlong *)(pcVar1 + 0x10) = lVar4;
                    }
                }
                else {
                    lVar4 = FUN_14018b280(0x28);
                    if ((undefined8 *)(lVar4 + 0x20) != (undefined8 *)0x0) {
                        *(undefined8 *)(lVar4 + 0x20) = *param_4;
                    }
                    *(longlong *)(pcVar2 + 0x18) = lVar4;
                    if (pcVar2 == *(char **)(*(longlong *)(param_1 + 8) + 0x18)) {
                        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar4;
                    }
                }
                *(char **)(lVar4 + 8) = pcVar2;
                *(undefined8 *)(lVar4 + 0x10) = 0;
                *(undefined8 *)(lVar4 + 0x18) = 0;
                FUN_1400081c0(lVar4,*(longlong *)(param_1 + 8) + 8);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
                *param_2 = lVar4;
            }
            else {
                plVar3 = (longlong *)FUN_1403d6c10(param_1,local_18,param_4);
                *param_2 = *plVar3;
            }
            return param_2;
        }
        if ((*pcVar2 == '\0') && (*(char **)(*(longlong *)(pcVar2 + 8) + 8) == pcVar2)) {
            lVar4 = *(longlong *)(pcVar2 + 0x18);
        }
        else {
            lVar4 = *(longlong *)(pcVar2 + 0x10);
            if (lVar4 == 0) {
                lVar4 = *(longlong *)(pcVar2 + 8);
                lVar5 = lVar4;
                if (pcVar2 == *(char **)(lVar4 + 0x10)) {
                    do {
                        lVar4 = *(longlong *)(lVar5 + 8);
                        bVar6 = lVar5 == *(longlong *)(lVar4 + 0x10);
                        lVar5 = lVar4;
                    } while (bVar6);
                }
            }
            else {
                for (lVar5 = *(longlong *)(lVar4 + 0x18); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x18)) {
                    lVar4 = lVar5;
                }
            }
        }
        if ((*(int *)param_4 <= *(int *)(lVar4 + 0x20)) || (*(int *)(pcVar2 + 0x20) <= *(int *)param_4))
            goto LAB_1403d3eca;
        if (*(longlong *)(lVar4 + 0x18) == 0) {
            FUN_1403d6b20(param_1,param_2,0,lVar4,param_4);
            return param_2;
        }
    }
    FUN_1403d6b20();
    return param_2;
}



undefined8 FUN_1403d4080(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 uVar3;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x10);
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
    uVar3 = FUN_1403d6d10(local_res8 + 0x28);
    return uVar3;
}



void FUN_1403d40e0(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
    if (lVar4 != *(longlong *)(param_1 + 8)) {
        do {
            puVar1 = *(undefined8 **)(lVar4 + 0x28);
            if (puVar1 != (undefined8 *)0x0) {
                (**(code **)*puVar1)(puVar1,1);
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
        } while (lVar4 != *(longlong *)(param_1 + 8));
    }
    FUN_140008410(param_1);
    return;
}



void FUN_1403d4180(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
    if (lVar3 != *(longlong *)(param_1 + 8)) {
        do {
            FUN_14018b900(*(undefined8 *)(lVar3 + 0x28),0);
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
        } while (lVar3 != *(longlong *)(param_1 + 8));
    }
    FUN_140008410(param_1);
    return;
}



void FUN_1403d4210(undefined8 param_1,longlong param_2,longlong param_3)

{
    uint uVar1;
    int iVar2;
    uint uVar3;
    longlong lVar4;
    bool bVar5;
    longlong lVar6;
    float *pfVar7;
    undefined8 uVar8;
    int iVar9;
    longlong lVar10;
    longlong *plVar11;
    float *pfVar12;
    ulonglong uVar13;
    ulonglong uVar14;
    longlong lVar15;
    longlong lVar16;
    uint uVar17;
    ulonglong uVar18;
    uint uVar19;
    float *pfVar20;
    ulonglong uVar21;
    float fVar22;
    float fVar23;
    undefined8 *local_c8;
    undefined local_c0 [8];
    float *local_b8;
    float *local_b0;
    float *local_a8;
    longlong local_a0;
    longlong local_98;
    longlong local_90;
    uint local_88 [2];
    undefined8 *local_80;
    undefined local_78 [56];

    uVar8 = DAT_140c65b70;
    lVar16 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x10);
    if (lVar16 != *(longlong *)(param_2 + 8)) {
        do {
            uVar1 = *(uint *)(lVar16 + 0x20);
            if ((*(longlong *)(lVar16 + 0x30) != 0) &&
                (lVar10 = FUN_1407a0fd0(uVar8,uVar1), local_90 = lVar10, lVar10 != 0)) {
                lVar15 = *(longlong *)(param_3 + 8);
                lVar6 = lVar15;
                lVar4 = *(longlong *)(lVar15 + 8);
                while (lVar4 != 0) {
                    if (*(uint *)(lVar4 + 0x20) < uVar1) {
                        lVar4 = *(longlong *)(lVar4 + 0x18);
                    }
                    else {
                        lVar6 = lVar4;
                        lVar4 = *(longlong *)(lVar4 + 0x10);
                    }
                }
                if ((lVar6 == lVar15) || (uVar1 < *(uint *)(lVar6 + 0x20))) {
                    local_a0 = lVar15;
                    plVar11 = &local_a0;
                }
                else {
                    local_98 = lVar6;
                    plVar11 = &local_98;
                }
                bVar5 = false;
                if (*plVar11 == lVar15) {
                    local_c8 = (undefined8 *)FUN_14018b280(0x88,0);
                    if (local_c8 == (undefined8 *)0x0) {
                        local_c8 = (undefined8 *)0x0;
                    }
                    else {
                        local_c8[4] = 0;
                        local_c8[3] = 0;
                        local_c8[0xd] = 0;
                        local_c8[0xc] = 0;
                        local_c8[0xe] = 0;
                        *(undefined4 *)(local_c8 + 0xf) = 0;
                        *local_c8 = &PTR_FUN_140b667d0;
                        *(undefined4 *)(local_c8 + 0x10) = 0;
                    }
                    FUN_1403d8810(local_c8,lVar10);
                    bVar5 = true;
                }
                else {
                    local_c8 = *(undefined8 **)(*plVar11 + 0x28);
                }
                uVar17 = *(uint *)(**(longlong **)(lVar16 + 0x28) + 8);
                iVar2 = *(int *)((*(longlong **)(lVar16 + 0x28))[*(longlong *)(lVar16 + 0x30) + -1] + 8);
                if ((int)uVar17 <= iVar2) {
                    LAB_1403d43a0:
                    uVar14 = *(ulonglong *)(lVar16 + 0x30);
                    uVar21 = 0;
                    if (uVar14 != 0) {
                        lVar10 = *(longlong *)(lVar16 + 0x28);
                        uVar18 = uVar14;
                        do {
                            uVar13 = (uVar18 - uVar21 >> 1) + uVar21;
                            lVar15 = *(longlong *)(lVar10 + uVar13 * 8);
                            if (lVar15 == 0) {
                                iVar9 = 0;
                            }
                            else {
                                iVar9 = uVar17 - *(int *)(lVar15 + 8);
                            }
                            if (-1 < iVar9) {
                                if (iVar9 < 1) {
                                    uVar21 = uVar13;
                                    if (uVar13 == 0) goto LAB_1403d442f;
                                    lVar15 = lVar10 + uVar13 * 8;
                                    goto LAB_1403d4410;
                                }
                                uVar21 = uVar13 + 1;
                                uVar13 = uVar18;
                            }
                            uVar18 = uVar13;
                        } while (uVar21 < uVar13);
                    }
                    goto LAB_1403d481e;
                }
                LAB_1403d4833:
                if (bVar5) {
                    local_88[0] = uVar1;
                    local_80 = local_c8;
                    FUN_140055f80(param_3,local_78,local_88);
                }
            }
            lVar10 = *(longlong *)(lVar16 + 0x18);
            if (lVar10 == 0) {
                lVar10 = *(longlong *)(lVar16 + 8);
                if (lVar16 == *(longlong *)(lVar10 + 0x18)) {
                    do {
                        lVar16 = lVar10;
                        lVar10 = *(longlong *)(lVar16 + 8);
                    } while (lVar16 == *(longlong *)(lVar10 + 0x18));
                }
                if (*(longlong *)(lVar16 + 0x18) != lVar10) {
                    lVar16 = lVar10;
                }
            }
            else {
                for (lVar15 = *(longlong *)(lVar10 + 0x10); lVar16 = lVar10, lVar15 != 0;
                     lVar15 = *(longlong *)(lVar15 + 0x10)) {
                    lVar10 = lVar15;
                }
            }
        } while (lVar16 != *(longlong *)(param_2 + 8));
    }
    return;
    while (uVar21 = uVar18, uVar18 != 0) {
        LAB_1403d4410:
        plVar11 = (longlong *)(lVar15 + -8);
        lVar15 = lVar15 + -8;
        uVar18 = uVar21 - 1;
        if ((*plVar11 != 0) && (uVar17 != *(uint *)(*plVar11 + 8))) break;
    }
    LAB_1403d442f:
    uVar13 = uVar13 + 1;
    if (uVar13 < uVar14) {
        plVar11 = (longlong *)(lVar10 + uVar13 * 8);
        do {
            if ((*plVar11 != 0) && (uVar17 != *(uint *)(*plVar11 + 8))) break;
            uVar13 = uVar13 + 1;
            plVar11 = plVar11 + 1;
        } while (uVar13 < uVar14);
    }
    if (uVar21 != uVar13) {
        uVar19 = *(uint *)(*(longlong *)(lVar10 + uVar21 * 8) + 0xc);
        uVar3 = *(uint *)(*(longlong *)(lVar10 + -8 + uVar13 * 8) + 0xc);
        fVar22 = (float)FUN_1407a18c0(uVar17);
        fVar23 = fVar22;
        if ((uVar17 < 0x16) && ((0x31bf6fU >> (uVar17 & 0x1f) & 1) != 0)) {
            if (uVar19 <= uVar3) {
                LAB_1403d44b0:
                uVar14 = *(ulonglong *)(lVar16 + 0x30);
                uVar21 = 0;
                if (uVar14 != 0) {
                    lVar10 = *(longlong *)(lVar16 + 0x28);
                    uVar18 = uVar14;
                    do {
                        uVar13 = (uVar18 - uVar21 >> 1) + uVar21;
                        lVar15 = *(longlong *)(lVar10 + uVar13 * 8);
                        if (lVar15 == 0) {
                            iVar9 = 0;
                        }
                        else {
                            iVar9 = uVar17 - *(int *)(lVar15 + 8);
                            if ((iVar9 == 0) && (uVar19 != 0xffffffff)) {
                                iVar9 = uVar19 - *(int *)(lVar15 + 0xc);
                            }
                        }
                        if (-1 < iVar9) {
                            if (iVar9 < 1) {
                                uVar21 = uVar13;
                                if (uVar13 == 0) goto LAB_1403d455b;
                                lVar15 = lVar10 + uVar13 * 8;
                                goto LAB_1403d4530;
                            }
                            uVar21 = uVar13 + 1;
                            uVar13 = uVar18;
                        }
                        uVar18 = uVar13;
                    } while (uVar21 < uVar13);
                }
                goto LAB_1403d46a1;
            }
        }
        else if ((uVar17 == 0xe) || (uVar17 - 0x11 < 2)) {
            if (uVar19 <= uVar3) {
                uVar21 = *(ulonglong *)(lVar16 + 0x30);
                LAB_1403d46f2:
                uVar14 = 0;
                if (uVar21 != 0) {
                    lVar10 = *(longlong *)(lVar16 + 0x28);
                    uVar18 = uVar21;
                    do {
                        uVar13 = (uVar18 - uVar14 >> 1) + uVar14;
                        lVar15 = *(longlong *)(lVar10 + uVar13 * 8);
                        if (lVar15 == 0) {
                            iVar9 = 0;
                        }
                        else {
                            iVar9 = uVar17 - *(int *)(lVar15 + 8);
                            if ((iVar9 == 0) && (uVar19 != 0xffffffff)) {
                                iVar9 = uVar19 - *(int *)(lVar15 + 0xc);
                            }
                        }
                        if (-1 < iVar9) {
                            if (iVar9 < 1) {
                                uVar14 = uVar13;
                                if (uVar13 == 0) goto LAB_1403d479b;
                                lVar15 = lVar10 + uVar13 * 8;
                                goto LAB_1403d4770;
                            }
                            uVar14 = uVar13 + 1;
                            uVar13 = uVar18;
                        }
                        uVar18 = uVar13;
                    } while (uVar14 < uVar13);
                }
                goto LAB_1403d4800;
            }
        }
        else {
            fVar22 = (float)FUN_1403d6d70();
            fVar23 = fVar22;
        }
        LAB_1403d4814:
        FUN_1407a1eb0(fVar22,fVar23,uVar17);
    }
    LAB_1403d481e:
    uVar17 = uVar17 + 1;
    if (iVar2 < (int)uVar17) goto LAB_1403d4833;
    goto LAB_1403d43a0;
    while (uVar14 = uVar18, uVar18 != 0) {
        LAB_1403d4770:
        lVar4 = *(longlong *)(lVar15 + -8);
        lVar15 = lVar15 + -8;
        uVar18 = uVar14 - 1;
        if ((lVar4 != 0) &&
            ((uVar17 != *(uint *)(lVar4 + 8) ||
              ((uVar19 != 0xffffffff && (uVar19 != *(uint *)(lVar4 + 0xc))))))) break;
    }
    LAB_1403d479b:
    uVar13 = uVar13 + 1;
    if (uVar13 < uVar21) {
        plVar11 = (longlong *)(lVar10 + uVar13 * 8);
        do {
            lVar10 = *plVar11;
            if ((lVar10 != 0) &&
                ((uVar17 != *(uint *)(lVar10 + 8) ||
                  ((uVar19 != 0xffffffff && (uVar19 != *(uint *)(lVar10 + 0xc))))))) break;
            uVar13 = uVar13 + 1;
            plVar11 = plVar11 + 1;
        } while (uVar13 < uVar21);
    }
    if (uVar14 < uVar13) {
        lVar10 = uVar13 - uVar14;
        do {
            fVar22 = (float)FUN_1403d6d70();
            lVar10 = lVar10 + -1;
            fVar23 = fVar22;
        } while (lVar10 != 0);
    }
    LAB_1403d4800:
    uVar19 = uVar19 + 1;
    if (uVar3 < uVar19) goto LAB_1403d4814;
    goto LAB_1403d46f2;
    while (uVar21 = uVar18, uVar18 != 0) {
        LAB_1403d4530:
        lVar4 = *(longlong *)(lVar15 + -8);
        lVar15 = lVar15 + -8;
        uVar18 = uVar21 - 1;
        if ((lVar4 != 0) &&
            ((uVar17 != *(uint *)(lVar4 + 8) ||
              ((uVar19 != 0xffffffff && (uVar19 != *(uint *)(lVar4 + 0xc))))))) break;
    }
    LAB_1403d455b:
    uVar13 = uVar13 + 1;
    if (uVar13 < uVar14) {
        plVar11 = (longlong *)(lVar10 + uVar13 * 8);
        do {
            lVar10 = *plVar11;
            if ((lVar10 != 0) &&
                ((uVar17 != *(uint *)(lVar10 + 8) ||
                  ((uVar19 != 0xffffffff && (uVar19 != *(uint *)(lVar10 + 0xc))))))) break;
            uVar13 = uVar13 + 1;
            plVar11 = plVar11 + 1;
        } while (uVar13 < uVar14);
    }
    if (uVar21 != uVar13) {
        local_b8 = (float *)0x0;
        local_b0 = (float *)0x0;
        local_a8 = (float *)0x0;
        lVar10 = uVar13 - uVar21;
        if (lVar10 != 0) {
            pfVar12 = (float *)FUN_14018b280(lVar10 * 4);
            FUN_1407db590(pfVar12);
            local_a8 = pfVar12 + lVar10;
            local_b0 = pfVar12;
        }
        pfVar12 = local_b0;
        pfVar7 = local_b0;
        pfVar20 = local_a8;
        while ((lVar10 = 0, local_b8 = pfVar12, local_b0 = pfVar7, uVar21 < uVar13 &&
                                                                   (lVar10 = *(longlong *)(*(longlong *)(lVar16 + 0x28) + uVar21 * 8),
                                                                           *(int *)(lVar10 + 0x10) != 2))) {
            fVar22 = (float)FUN_1403d6d70();
            if (pfVar7 == pfVar20) {
                FUN_1401e4420(local_c0);
                pfVar20 = local_a8;
            }
            else {
                if (pfVar7 != (float *)0x0) {
                    *pfVar7 = fVar22;
                }
                local_b0 = pfVar7 + 1;
            }
            uVar21 = uVar21 + 1;
            pfVar12 = local_b8;
            pfVar7 = local_b0;
        }
        fVar22 = 0.0;
        for (pfVar20 = pfVar12; pfVar20 != pfVar7; pfVar20 = pfVar20 + 1) {
            fVar22 = fVar22 + *pfVar20;
        }
        if (lVar10 != 0) {
            fVar22 = (float)FUN_1403d6d70(lVar10);
        }
        fVar23 = fVar23 + fVar22;
        if (pfVar12 != (float *)0x0) {
            fVar22 = (float)FUN_14018b900(pfVar12);
        }
    }
    LAB_1403d46a1:
    uVar19 = uVar19 + 1;
    if (uVar3 < uVar19) goto LAB_1403d4814;
    goto LAB_1403d44b0;
}



void FUN_1403d4910(undefined8 param_1,longlong param_2,longlong param_3)

{
    uint uVar1;
    int iVar2;
    uint uVar3;
    longlong lVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    bool bVar8;
    float *pfVar9;
    undefined8 uVar10;
    undefined4 *puVar11;
    int iVar12;
    undefined4 *puVar13;
    longlong *plVar14;
    undefined4 *puVar15;
    float *pfVar16;
    longlong lVar17;
    ulonglong uVar18;
    undefined4 *puVar19;
    ulonglong uVar20;
    longlong lVar21;
    longlong lVar22;
    uint uVar23;
    ulonglong uVar24;
    uint uVar25;
    float *pfVar26;
    ulonglong uVar27;
    float fVar28;
    float fVar29;
    undefined4 *local_c8;
    undefined local_c0 [8];
    float *local_b8;
    float *local_b0;
    float *local_a8;
    undefined4 *local_a0;
    longlong local_98;
    longlong local_90;
    uint local_88 [2];
    undefined4 *local_80;
    undefined local_78 [56];

    uVar10 = DAT_140c65b70;
    lVar22 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x10);
    if (lVar22 != *(longlong *)(param_2 + 8)) {
        do {
            uVar1 = *(uint *)(lVar22 + 0x20);
            if ((*(longlong *)(lVar22 + 0x30) != 0) &&
                (puVar13 = (undefined4 *)FUN_1407a1080(uVar10,uVar1), local_a0 = puVar13,
                        puVar13 != (undefined4 *)0x0)) {
                lVar17 = *(longlong *)(param_3 + 8);
                lVar4 = lVar17;
                lVar21 = *(longlong *)(lVar17 + 8);
                while (lVar21 != 0) {
                    if (*(uint *)(lVar21 + 0x20) < uVar1) {
                        lVar21 = *(longlong *)(lVar21 + 0x18);
                    }
                    else {
                        lVar4 = lVar21;
                        lVar21 = *(longlong *)(lVar21 + 0x10);
                    }
                }
                if ((lVar4 == lVar17) || (uVar1 < *(uint *)(lVar4 + 0x20))) {
                    local_98 = lVar17;
                    plVar14 = &local_98;
                }
                else {
                    local_90 = lVar4;
                    plVar14 = &local_90;
                }
                bVar8 = false;
                if (*plVar14 == lVar17) {
                    local_c8 = (undefined4 *)FUN_14018b280(0xa8,0);
                    if ((((uint)puVar13 | (uint)local_c8) & 0xf) == 0) {
                        lVar17 = 1;
                        puVar11 = local_c8;
                        do {
                            puVar19 = puVar11;
                            puVar15 = puVar13;
                            uVar5 = puVar15[1];
                            uVar6 = puVar15[2];
                            uVar7 = puVar15[3];
                            *puVar19 = *puVar15;
                            puVar19[1] = uVar5;
                            puVar19[2] = uVar6;
                            puVar19[3] = uVar7;
                            uVar5 = puVar15[5];
                            uVar6 = puVar15[6];
                            uVar7 = puVar15[7];
                            puVar19[4] = puVar15[4];
                            puVar19[5] = uVar5;
                            puVar19[6] = uVar6;
                            puVar19[7] = uVar7;
                            uVar5 = puVar15[9];
                            uVar6 = puVar15[10];
                            uVar7 = puVar15[0xb];
                            puVar19[8] = puVar15[8];
                            puVar19[9] = uVar5;
                            puVar19[10] = uVar6;
                            puVar19[0xb] = uVar7;
                            uVar5 = puVar15[0xd];
                            uVar6 = puVar15[0xe];
                            uVar7 = puVar15[0xf];
                            puVar19[0xc] = puVar15[0xc];
                            puVar19[0xd] = uVar5;
                            puVar19[0xe] = uVar6;
                            puVar19[0xf] = uVar7;
                            uVar5 = puVar15[0x11];
                            uVar6 = puVar15[0x12];
                            uVar7 = puVar15[0x13];
                            puVar19[0x10] = puVar15[0x10];
                            puVar19[0x11] = uVar5;
                            puVar19[0x12] = uVar6;
                            puVar19[0x13] = uVar7;
                            uVar5 = puVar15[0x15];
                            uVar6 = puVar15[0x16];
                            uVar7 = puVar15[0x17];
                            puVar19[0x14] = puVar15[0x14];
                            puVar19[0x15] = uVar5;
                            puVar19[0x16] = uVar6;
                            puVar19[0x17] = uVar7;
                            uVar5 = puVar15[0x19];
                            uVar6 = puVar15[0x1a];
                            uVar7 = puVar15[0x1b];
                            puVar19[0x18] = puVar15[0x18];
                            puVar19[0x19] = uVar5;
                            puVar19[0x1a] = uVar6;
                            puVar19[0x1b] = uVar7;
                            uVar5 = puVar15[0x1d];
                            uVar6 = puVar15[0x1e];
                            uVar7 = puVar15[0x1f];
                            puVar19[0x1c] = puVar15[0x1c];
                            puVar19[0x1d] = uVar5;
                            puVar19[0x1e] = uVar6;
                            puVar19[0x1f] = uVar7;
                            lVar17 = lVar17 + -1;
                            puVar13 = puVar15 + 0x20;
                            puVar11 = puVar19 + 0x20;
                        } while (lVar17 != 0);
                        uVar5 = puVar15[0x21];
                        uVar6 = puVar15[0x22];
                        uVar7 = puVar15[0x23];
                        bVar8 = true;
                        puVar19[0x20] = puVar15[0x20];
                        puVar19[0x21] = uVar5;
                        puVar19[0x22] = uVar6;
                        puVar19[0x23] = uVar7;
                        uVar5 = puVar15[0x25];
                        uVar6 = puVar15[0x26];
                        uVar7 = puVar15[0x27];
                        puVar19[0x24] = puVar15[0x24];
                        puVar19[0x25] = uVar5;
                        puVar19[0x26] = uVar6;
                        puVar19[0x27] = uVar7;
                        *(undefined8 *)(puVar19 + 0x28) = *(undefined8 *)(puVar15 + 0x28);
                    }
                    else {
                        FUN_1407db590(local_c8,puVar13,0xa8);
                        bVar8 = true;
                    }
                }
                else {
                    local_c8 = *(undefined4 **)(*plVar14 + 0x28);
                }
                uVar23 = *(uint *)(**(longlong **)(lVar22 + 0x28) + 0xc);
                iVar2 = *(int *)((*(longlong **)(lVar22 + 0x28))[*(longlong *)(lVar22 + 0x30) + -1] + 0xc);
                if ((int)uVar23 <= iVar2) {
                    LAB_1403d4ae0:
                    uVar20 = *(ulonglong *)(lVar22 + 0x30);
                    uVar27 = 0;
                    if (uVar20 != 0) {
                        lVar17 = *(longlong *)(lVar22 + 0x28);
                        uVar24 = uVar20;
                        do {
                            uVar18 = (uVar24 - uVar27 >> 1) + uVar27;
                            lVar21 = *(longlong *)(lVar17 + uVar18 * 8);
                            if (lVar21 == 0) {
                                iVar12 = 0;
                            }
                            else {
                                iVar12 = uVar23 - *(int *)(lVar21 + 0xc);
                            }
                            if (-1 < iVar12) {
                                if (iVar12 < 1) {
                                    uVar27 = uVar18;
                                    if (uVar18 == 0) goto LAB_1403d4b6f;
                                    lVar21 = lVar17 + uVar18 * 8;
                                    goto LAB_1403d4b50;
                                }
                                uVar27 = uVar18 + 1;
                                uVar18 = uVar24;
                            }
                            uVar24 = uVar18;
                        } while (uVar27 < uVar18);
                    }
                    goto LAB_1403d4f69;
                }
                LAB_1403d4f7e:
                if (bVar8) {
                    local_88[0] = uVar1;
                    local_80 = local_c8;
                    FUN_140055f80(param_3,local_78,local_88);
                }
            }
            lVar17 = *(longlong *)(lVar22 + 0x18);
            if (lVar17 == 0) {
                lVar17 = *(longlong *)(lVar22 + 8);
                if (lVar22 == *(longlong *)(lVar17 + 0x18)) {
                    do {
                        lVar22 = lVar17;
                        lVar17 = *(longlong *)(lVar22 + 8);
                    } while (lVar22 == *(longlong *)(lVar17 + 0x18));
                }
                if (*(longlong *)(lVar22 + 0x18) != lVar17) {
                    lVar22 = lVar17;
                }
            }
            else {
                for (lVar21 = *(longlong *)(lVar17 + 0x10); lVar22 = lVar17, lVar21 != 0;
                     lVar21 = *(longlong *)(lVar21 + 0x10)) {
                    lVar17 = lVar21;
                }
            }
        } while (lVar22 != *(longlong *)(param_2 + 8));
    }
    return;
    while (uVar27 = uVar24, uVar24 != 0) {
        LAB_1403d4b50:
        plVar14 = (longlong *)(lVar21 + -8);
        lVar21 = lVar21 + -8;
        uVar24 = uVar27 - 1;
        if ((*plVar14 != 0) && (uVar23 != *(uint *)(*plVar14 + 0xc))) break;
    }
    LAB_1403d4b6f:
    uVar18 = uVar18 + 1;
    if (uVar18 < uVar20) {
        plVar14 = (longlong *)(lVar17 + uVar18 * 8);
        do {
            if ((*plVar14 != 0) && (uVar23 != *(uint *)(*plVar14 + 0xc))) break;
            uVar18 = uVar18 + 1;
            plVar14 = plVar14 + 1;
        } while (uVar18 < uVar20);
    }
    if (uVar27 != uVar18) {
        uVar25 = *(uint *)(*(longlong *)(lVar17 + uVar27 * 8) + 0x10);
        uVar3 = *(uint *)(*(longlong *)(lVar17 + -8 + uVar18 * 8) + 0x10);
        fVar28 = (float)FUN_1407a1c30(uVar23);
        fVar29 = fVar28;
        if ((uVar23 < 0x12) && ((0x30fdcU >> (uVar23 & 0x1f) & 1) != 0)) {
            if (uVar25 <= uVar3) {
                LAB_1403d4bf0:
                uVar20 = *(ulonglong *)(lVar22 + 0x30);
                uVar27 = 0;
                if (uVar20 != 0) {
                    lVar17 = *(longlong *)(lVar22 + 0x28);
                    uVar24 = uVar20;
                    do {
                        uVar18 = (uVar24 - uVar27 >> 1) + uVar27;
                        lVar21 = *(longlong *)(lVar17 + uVar18 * 8);
                        if (lVar21 == 0) {
                            iVar12 = 0;
                        }
                        else {
                            iVar12 = uVar23 - *(int *)(lVar21 + 0xc);
                            if ((iVar12 == 0) && (uVar25 != 0xffffffff)) {
                                iVar12 = uVar25 - *(int *)(lVar21 + 0x10);
                            }
                        }
                        if (-1 < iVar12) {
                            if (iVar12 < 1) {
                                uVar27 = uVar18;
                                if (uVar18 == 0) goto LAB_1403d4c9b;
                                lVar21 = lVar17 + uVar18 * 8;
                                goto LAB_1403d4c70;
                            }
                            uVar27 = uVar18 + 1;
                            uVar18 = uVar24;
                        }
                        uVar24 = uVar18;
                    } while (uVar27 < uVar18);
                }
                goto LAB_1403d4de1;
            }
        }
        else if (((uVar23 & 0xfffffffa) == 0) && (uVar23 != 4)) {
            if (uVar25 <= uVar3) {
                uVar27 = *(ulonglong *)(lVar22 + 0x30);
                LAB_1403d4e20:
                uVar20 = 0;
                if (uVar27 != 0) {
                    lVar17 = *(longlong *)(lVar22 + 0x28);
                    uVar24 = uVar27;
                    do {
                        uVar18 = (uVar24 - uVar20 >> 1) + uVar20;
                        lVar21 = *(longlong *)(lVar17 + uVar18 * 8);
                        if (lVar21 == 0) {
                            iVar12 = 0;
                        }
                        else {
                            iVar12 = uVar23 - *(int *)(lVar21 + 0xc);
                            if ((iVar12 == 0) && (uVar25 != 0xffffffff)) {
                                iVar12 = uVar25 - *(int *)(lVar21 + 0x10);
                            }
                        }
                        if (-1 < iVar12) {
                            if (iVar12 < 1) {
                                uVar20 = uVar18;
                                if (uVar18 == 0) goto LAB_1403d4ecb;
                                lVar21 = lVar17 + uVar18 * 8;
                                goto LAB_1403d4ea0;
                            }
                            uVar20 = uVar18 + 1;
                            uVar18 = uVar24;
                        }
                        uVar24 = uVar18;
                    } while (uVar20 < uVar18);
                }
                goto LAB_1403d4f30;
            }
        }
        else {
            fVar28 = (float)FUN_1403d6f20();
            fVar29 = fVar28;
        }
        LAB_1403d4f5f:
        FUN_1407a2620(fVar28,fVar29,uVar23);
    }
    LAB_1403d4f69:
    uVar23 = uVar23 + 1;
    if (iVar2 < (int)uVar23) goto LAB_1403d4f7e;
    goto LAB_1403d4ae0;
    while (uVar20 = uVar24, uVar24 != 0) {
        LAB_1403d4ea0:
        lVar4 = *(longlong *)(lVar21 + -8);
        lVar21 = lVar21 + -8;
        uVar24 = uVar20 - 1;
        if ((lVar4 != 0) &&
            ((uVar23 != *(uint *)(lVar4 + 0xc) ||
              ((uVar25 != 0xffffffff && (uVar25 != *(uint *)(lVar4 + 0x10))))))) break;
    }
    LAB_1403d4ecb:
    uVar18 = uVar18 + 1;
    if (uVar18 < uVar27) {
        plVar14 = (longlong *)(lVar17 + uVar18 * 8);
        do {
            lVar17 = *plVar14;
            if ((lVar17 != 0) &&
                ((uVar23 != *(uint *)(lVar17 + 0xc) ||
                  ((uVar25 != 0xffffffff && (uVar25 != *(uint *)(lVar17 + 0x10))))))) break;
            uVar18 = uVar18 + 1;
            plVar14 = plVar14 + 1;
        } while (uVar18 < uVar27);
    }
    if (uVar20 < uVar18) {
        lVar17 = uVar18 - uVar20;
        do {
            fVar28 = (float)FUN_1403d6f20();
            lVar17 = lVar17 + -1;
            fVar29 = fVar28;
        } while (lVar17 != 0);
    }
    LAB_1403d4f30:
    uVar25 = uVar25 + 1;
    if (uVar3 < uVar25) goto LAB_1403d4f5f;
    goto LAB_1403d4e20;
    while (uVar27 = uVar24, uVar24 != 0) {
        LAB_1403d4c70:
        lVar4 = *(longlong *)(lVar21 + -8);
        lVar21 = lVar21 + -8;
        uVar24 = uVar27 - 1;
        if ((lVar4 != 0) &&
            ((uVar23 != *(uint *)(lVar4 + 0xc) ||
              ((uVar25 != 0xffffffff && (uVar25 != *(uint *)(lVar4 + 0x10))))))) break;
    }
    LAB_1403d4c9b:
    uVar18 = uVar18 + 1;
    if (uVar18 < uVar20) {
        plVar14 = (longlong *)(lVar17 + uVar18 * 8);
        do {
            lVar17 = *plVar14;
            if ((lVar17 != 0) &&
                ((uVar23 != *(uint *)(lVar17 + 0xc) ||
                  ((uVar25 != 0xffffffff && (uVar25 != *(uint *)(lVar17 + 0x10))))))) break;
            uVar18 = uVar18 + 1;
            plVar14 = plVar14 + 1;
        } while (uVar18 < uVar20);
    }
    if (uVar27 != uVar18) {
        local_b8 = (float *)0x0;
        local_b0 = (float *)0x0;
        local_a8 = (float *)0x0;
        lVar17 = uVar18 - uVar27;
        if (lVar17 != 0) {
            pfVar16 = (float *)FUN_14018b280(lVar17 * 4);
            FUN_1407db590(pfVar16);
            local_a8 = pfVar16 + lVar17;
            local_b0 = pfVar16;
        }
        pfVar16 = local_b0;
        pfVar9 = local_b0;
        pfVar26 = local_a8;
        while ((lVar17 = 0, local_b8 = pfVar16, local_b0 = pfVar9, uVar27 < uVar18 &&
                                                                   (lVar17 = *(longlong *)(*(longlong *)(lVar22 + 0x28) + uVar27 * 8),
                                                                           *(int *)(lVar17 + 0x14) != 2))) {
            fVar28 = (float)FUN_1403d6f20();
            if (pfVar9 == pfVar26) {
                FUN_1401e4420(local_c0);
                pfVar26 = local_a8;
            }
            else {
                if (pfVar9 != (float *)0x0) {
                    *pfVar9 = fVar28;
                }
                local_b0 = pfVar9 + 1;
            }
            uVar27 = uVar27 + 1;
            pfVar16 = local_b8;
            pfVar9 = local_b0;
        }
        fVar28 = 0.0;
        for (pfVar26 = pfVar16; pfVar26 != pfVar9; pfVar26 = pfVar26 + 1) {
            fVar28 = fVar28 + *pfVar26;
        }
        if (lVar17 != 0) {
            fVar28 = (float)FUN_1403d6f20(lVar17);
        }
        fVar29 = fVar29 + fVar28;
        if (pfVar16 != (float *)0x0) {
            fVar28 = (float)FUN_14018b900(pfVar16);
        }
    }
    LAB_1403d4de1:
    uVar25 = uVar25 + 1;
    if (uVar3 < uVar25) goto LAB_1403d4f5f;
    goto LAB_1403d4bf0;
}



longlong * FUN_1403d5050(longlong param_1,longlong *param_2,char **param_3,uint *param_4)

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
            LAB_1403d509e:
            plVar4 = (longlong *)FUN_1403d7190(param_1,local_18,param_4);
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
                    lVar5 = FUN_1403d7d40(uVar1,param_4);
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
                    lVar5 = FUN_1403d7d40(uVar1,param_4);
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
                return param_2;
            }
            plVar4 = (longlong *)FUN_1403d7190(param_1,local_18,param_4);
            *param_2 = *plVar4;
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
            goto LAB_1403d509e;
        if (*(longlong *)(lVar5 + 0x18) == 0) {
            FUN_1403d70d0(param_1,param_2,0,lVar5,param_4);
            return param_2;
        }
    }
    FUN_1403d70d0();
    return param_2;
}



longlong * FUN_1403d5240(longlong param_1,longlong *param_2,char **param_3,uint *param_4)

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
            LAB_1403d528e:
            plVar4 = (longlong *)FUN_1403d7410(param_1,local_18,param_4);
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
                    lVar5 = FUN_1403d7dc0(uVar1,param_4);
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
                    lVar5 = FUN_1403d7dc0(uVar1,param_4);
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
                return param_2;
            }
            plVar4 = (longlong *)FUN_1403d7410(param_1,local_18,param_4);
            *param_2 = *plVar4;
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
            goto LAB_1403d528e;
        if (*(longlong *)(lVar5 + 0x18) == 0) {
            FUN_1403d7350(param_1,param_2,0,lVar5,param_4);
            return param_2;
        }
    }
    FUN_1403d7350();
    return param_2;
}



longlong * FUN_1403d5430(longlong param_1,longlong *param_2,char **param_3,uint *param_4)

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
            LAB_1403d548a:
            plVar4 = (longlong *)FUN_1403d76c0(param_1,local_18,param_4);
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
                    lVar5 = FUN_14018b280(0x48);
                    if ((uint *)(lVar5 + 0x20) != (uint *)0x0) {
                        *(uint *)(lVar5 + 0x20) = *param_4;
                        FUN_1403d2aa0(lVar5 + 0x28,param_4 + 2);
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
                    lVar5 = FUN_1403d7e50(uVar1,param_4);
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
                plVar4 = (longlong *)FUN_1403d76c0(param_1,local_18,param_4);
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
            goto LAB_1403d548a;
        if (*(longlong *)(lVar5 + 0x18) == 0) {
            FUN_1403d75d0(param_1,param_2,0,lVar5,param_4);
            return param_2;
        }
    }
    FUN_1403d75d0();
    return param_2;
}



ulonglong FUN_1403d5640(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
    uint uVar1;
    longlong lVar2;
    longlong lVar3;

    if (param_1 != param_2) {
        do {
            if (param_3 == param_4) break;
            uVar1 = *(uint *)(param_3 + 0x20);
            if (uVar1 < *(uint *)(param_1 + 0x20)) {
                return (ulonglong)(uint3)(uVar1 >> 8) << 8;
            }
            lVar3 = *(longlong *)(param_1 + 0x18);
            if (*(uint *)(param_1 + 0x20) < uVar1) {
                if (lVar3 == 0) {
                    lVar3 = *(longlong *)(param_1 + 8);
                    if (param_1 == *(longlong *)(lVar3 + 0x18)) {
                        do {
                            param_1 = lVar3;
                            lVar3 = *(longlong *)(param_1 + 8);
                        } while (param_1 == *(longlong *)(lVar3 + 0x18));
                    }
                    if (*(longlong *)(param_1 + 0x18) != lVar3) {
                        param_1 = lVar3;
                    }
                }
                else {
                    for (lVar2 = *(longlong *)(lVar3 + 0x10); param_1 = lVar3, lVar2 != 0;
                         lVar2 = *(longlong *)(lVar2 + 0x10)) {
                        lVar3 = lVar2;
                    }
                }
            }
            else {
                if (lVar3 == 0) {
                    lVar3 = *(longlong *)(param_1 + 8);
                    if (param_1 == *(longlong *)(lVar3 + 0x18)) {
                        do {
                            param_1 = lVar3;
                            lVar3 = *(longlong *)(param_1 + 8);
                        } while (param_1 == *(longlong *)(lVar3 + 0x18));
                    }
                    if (*(longlong *)(param_1 + 0x18) != lVar3) {
                        param_1 = lVar3;
                    }
                }
                else {
                    for (lVar2 = *(longlong *)(lVar3 + 0x10); param_1 = lVar3, lVar2 != 0;
                         lVar2 = *(longlong *)(lVar2 + 0x10)) {
                        lVar3 = lVar2;
                    }
                }
                lVar3 = *(longlong *)(param_3 + 0x18);
                if (lVar3 == 0) {
                    lVar3 = *(longlong *)(param_3 + 8);
                    if (param_3 == *(longlong *)(lVar3 + 0x18)) {
                        do {
                            param_3 = lVar3;
                            lVar3 = *(longlong *)(param_3 + 8);
                        } while (param_3 == *(longlong *)(lVar3 + 0x18));
                    }
                    if (*(longlong *)(param_3 + 0x18) != lVar3) {
                        param_3 = lVar3;
                    }
                }
                else {
                    for (lVar2 = *(longlong *)(lVar3 + 0x10); param_3 = lVar3, lVar2 != 0;
                         lVar2 = *(longlong *)(lVar2 + 0x10)) {
                        lVar3 = lVar2;
                    }
                }
            }
        } while (param_1 != param_2);
    }
    return (ulonglong)(param_3 == param_4);
}



longlong FUN_1403d57b0(longlong param_1,uint *param_2)

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
    FUN_1403d77c0(param_1,local_res18,&local_res8);
    return lVar4;
}



void FUN_1403d58a0(longlong param_1,longlong *param_2)

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
        iVar2 = FUN_1401971e0(&DAT_140c8a740,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001403d5966. Too many branches
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



undefined * FUN_1403d59a0(undefined8 param_1,undefined *param_2,undefined8 param_3)

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
    }
    uVar1 = *param_2;
    *(undefined8 *)(puVar2 + 8) = param_3;
    *(undefined8 *)(puVar2 + 0x10) = 0;
    *(undefined8 *)(puVar2 + 0x18) = 0;
    *puVar2 = uVar1;
    if (*(longlong *)(param_2 + 0x18) != 0) {
        uVar3 = FUN_1403d59a0(param_1,*(longlong *)(param_2 + 0x18),puVar2);
        *(undefined8 *)(puVar2 + 0x18) = uVar3;
    }
    puVar6 = *(undefined **)(param_2 + 0x10);
    puVar5 = puVar2;
    if (puVar6 == (undefined *)0x0) {
        return puVar2;
    }
    do {
        puVar4 = (undefined *)FUN_14018b280(0x28);
        if ((undefined4 *)(puVar4 + 0x20) != (undefined4 *)0x0) {
            *(undefined4 *)(puVar4 + 0x20) = *(undefined4 *)(puVar6 + 0x20);
        }
        *puVar4 = *puVar6;
        *(undefined8 *)(puVar4 + 0x10) = 0;
        *(undefined8 *)(puVar4 + 0x18) = 0;
        *(undefined **)(puVar5 + 0x10) = puVar4;
        *(undefined **)(puVar4 + 8) = puVar5;
        if (*(longlong *)(puVar6 + 0x18) != 0) {
            uVar3 = FUN_1403d59a0(param_1,*(longlong *)(puVar6 + 0x18),puVar4);
            *(undefined8 *)(puVar4 + 0x18) = uVar3;
        }
        puVar6 = *(undefined **)(puVar6 + 0x10);
        puVar5 = puVar4;
    } while (puVar6 != (undefined *)0x0);
    return puVar2;
}



void FUN_1403d5a90(longlong param_1,longlong *param_2)

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
        iVar2 = FUN_1401971e0(&DAT_140c8a730,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001403d5b56. Too many branches
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



void FUN_1403d5b90(longlong param_1,longlong *param_2)

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
        iVar2 = FUN_1401971e0(&DAT_140c8a728,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001403d5c56. Too many branches
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



char ** FUN_1403d5c90(longlong param_1,char **param_2,uint *param_3)

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
            if (*param_3 == *(uint *)(pcVar5 + 0x20)) {
                if (param_3[1] == *(uint *)(pcVar5 + 0x24)) {
                    bVar6 = param_3[2] < *(uint *)(pcVar5 + 0x28);
                }
                else {
                    bVar6 = (int)param_3[1] < (int)*(uint *)(pcVar5 + 0x24);
                }
            }
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
        if (pcVar5 == *(char **)(pcVar2 + 0x10)) goto LAB_1403d5d0c;
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
    bVar6 = *(uint *)(pcVar3 + 0x20) < *param_3;
    if (*(uint *)(pcVar3 + 0x20) == *param_3) {
        if (*(uint *)(pcVar3 + 0x24) == param_3[1]) {
            bVar6 = *(uint *)(pcVar3 + 0x28) < param_3[2];
        }
        else {
            bVar6 = (int)*(uint *)(pcVar3 + 0x24) < (int)param_3[1];
        }
    }
    if (!bVar6) {
        *param_2 = pcVar3;
        *(undefined *)(param_2 + 1) = 0;
        return param_2;
    }
    LAB_1403d5d0c:
    ppcVar1 = (char **)FUN_1403d78a0(param_1,local_res8,pcVar4,pcVar5,param_3);
    *param_2 = *ppcVar1;
    *(undefined *)(param_2 + 1) = 1;
    return param_2;
}



void FUN_1403d5dd0(longlong param_1,longlong *param_2)

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
        iVar2 = FUN_1401971e0(&DAT_140c8a72c,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001403d5e96. Too many branches
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



void FUN_1403d5ed0(longlong param_1,longlong *param_2)

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
        iVar2 = FUN_1401971e0(&DAT_140c8a738,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001403d5f96. Too many branches
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



void FUN_1403d5fd0(longlong param_1,longlong *param_2)

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
        iVar2 = FUN_1401971e0(&DAT_140c8a73c,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001403d6096. Too many branches
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



void FUN_1403d60d0(longlong param_1,longlong *param_2)

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
        iVar2 = FUN_1401971e0(&DAT_140c8a734,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001403d6196. Too many branches
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



longlong FUN_1403d61d0(longlong param_1,uint *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong local_res8 [2];
    longlong local_res18 [2];
    uint local_38 [2];
    undefined **local_30;
    undefined8 local_28;
    undefined8 local_20;
    undefined4 local_18;
    uint uStack20;
    longlong local_10;

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
        local_38[0] = *param_2;
        local_28 = 0;
        local_20 = 0;
        local_18 = 0;
        local_10 = (ulonglong)uStack20 << 0x20;
        local_30 = &PTR_LAB_140b66868;
        FUN_1403d79d0(param_1,local_res18,local_res8,local_38);
        local_res8[0] = local_res18[0];
    }
    return local_res8[0] + 0x28;
}



void FUN_1403d6270(longlong param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar1 = *(longlong *)(param_1 + 0x10);
    lVar2 = *(longlong *)(param_1 + 8);
    lVar3 = FUN_14018b280(param_2 * 4,0);
    FUN_1407db590(lVar3,lVar2,lVar1 - lVar2 & 0xfffffffffffffffc);
    if (*(longlong *)(param_1 + 8) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 8),0);
    }
    *(longlong *)(param_1 + 0x10) = lVar3 + (lVar1 - lVar2 >> 2) * 4;
    *(longlong *)(param_1 + 8) = lVar3;
    *(longlong *)(param_1 + 0x18) = param_2 * 4 + lVar3;
    return;
}



undefined8 FUN_1403d6310(longlong param_1,longlong param_2)

{
    int iVar1;
    undefined8 uVar2;
    longlong lVar3;
    ulonglong uVar4;

    if (param_2 != 0) {
        if ((*(byte *)(*(longlong *)(param_1 + 8) + 0x24) & 1) != 0) {
            uVar2 = FUN_1403d6400();
            return uVar2;
        }
        if ((((DAT_140c65898 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) == param_2)) &&
             (DAT_140c65970 != 0)) && (*(int *)(DAT_140c65970 + 8) == 1)) {
            uVar4 = 0;
            if (*(longlong *)(param_1 + 0x78) != 0) {
                do {
                    iVar1 = FUN_1403d7c30(*(undefined8 *)(uVar4 * 8 + *(longlong *)(param_1 + 0x70)),param_2,0
                    );
                    if (iVar1 != 0) {
                        uVar2 = FUN_14047c430(param_2,*(undefined4 *)
                                                      **(undefined8 **)
                                (uVar4 * 8 + *(longlong *)(param_1 + 0x70)));
                        lVar3 = FUN_1403d7bc0(uVar2);
                        if (lVar3 != 0) {
                            return 1;
                        }
                    }
                    uVar4 = (ulonglong)((int)uVar4 + 1);
                } while (uVar4 < *(ulonglong *)(param_1 + 0x78));
            }
            return 0;
        }
    }
    return 0;
}



undefined8 FUN_1403d6400(longlong param_1)

{
    int iVar1;
    uint uVar2;
    longlong lVar3;

    uVar2 = 0;
    lVar3 = 0x34;
    do {
        iVar1 = (**(code **)(*DAT_140c65980 + 0x60))
                (DAT_140c65980,*(undefined4 *)(*(longlong *)(param_1 + 8) + lVar3),
                 *(undefined4 *)(param_1 + 0x80));
        if (iVar1 != 0) {
            return 1;
        }
        uVar2 = uVar2 + 1;
        lVar3 = lVar3 + 4;
    } while (uVar2 < 3);
    return 0;
}



void FUN_1403d6480(longlong param_1,longlong *param_2)

{
    ulonglong uVar1;
    longlong lVar2;
    int iVar3;
    ulonglong uVar4;

    if (*param_2 == param_1) {
        *param_2 = 0;
        uVar1 = param_2[1];
        uVar4 = *(longlong *)(param_1 + 0x10) - 1;
        if (uVar4 <= uVar1) {
            FUN_1403d8090(param_1 + 8);
            return;
        }
        lVar2 = *(longlong *)(param_1 + 8);
        *(undefined8 *)(lVar2 + uVar1 * 0x10) = *(undefined8 *)(lVar2 + uVar4 * 0x10);
        *(undefined8 *)(lVar2 + 8 + uVar1 * 0x10) = *(undefined8 *)(lVar2 + 8 + uVar4 * 0x10);
        FUN_1403d8090(param_1 + 8);
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + uVar1 * 0x10);
        *(ulonglong *)(lVar2 + 8) = uVar1;
        iVar3 = FUN_1403d7e90(param_1,lVar2);
        if (iVar3 == 0) {
            FUN_1403d7f70(param_1,lVar2);
        }
    }
    return;
}



longlong FUN_1403d6540(longlong param_1,int *param_2)

{
    int iVar1;
    longlong lVar2;
    ulonglong uVar3;

    iVar1 = *param_2;
    if (iVar1 == 0) {
        uVar3 = (ulonglong)(uint)param_2[1];
        if (*(uint *)(param_1 + 4) <= (uint)param_2[1]) {
            return 0;
        }
        lVar2 = *(longlong *)(param_1 + 0x10);
    }
    else if (iVar1 == 1) {
        uVar3 = (ulonglong)(uint)param_2[1];
        if (*(uint *)(param_1 + 0x1c) <= (uint)param_2[1]) {
            return 0;
        }
        lVar2 = *(longlong *)(param_1 + 0x28);
    }
    else if (iVar1 == 2) {
        uVar3 = (ulonglong)(uint)param_2[1];
        if (*(uint *)(param_1 + 0x34) <= (uint)param_2[1]) {
            return 0;
        }
        lVar2 = *(longlong *)(param_1 + 0x40);
    }
    else if (iVar1 == 10) {
        uVar3 = (ulonglong)(uint)param_2[1];
        if (*(uint *)(param_1 + 0x4c) <= (uint)param_2[1]) {
            return 0;
        }
        lVar2 = *(longlong *)(param_1 + 0x58);
    }
    else if (iVar1 == 5) {
        uVar3 = (ulonglong)(uint)param_2[1];
        if (*(uint *)(param_1 + 100) <= (uint)param_2[1]) {
            return 0;
        }
        lVar2 = *(longlong *)(param_1 + 0x70);
    }
    else {
        if ((iVar1 == 6) && ((uint)param_2[1] < 0x200)) {
            lVar2 = FUN_140244f40(param_2[1]);
            if (lVar2 == 0) {
                return 0;
            }
            lVar2 = FUN_1400b5df0(DAT_140c658f0,*(undefined4 *)(lVar2 + 4),0);
            if (lVar2 == 0) {
                return 0;
            }
            goto LAB_1403d6634;
        }
        if (iVar1 == 8) {
            uVar3 = (ulonglong)(uint)param_2[1];
            if (*(uint *)(param_1 + 0x7c) <= (uint)param_2[1]) {
                return 0;
            }
            lVar2 = *(longlong *)(param_1 + 0x88);
        }
        else {
            if (iVar1 != 9) {
                return 0;
            }
            uVar3 = (ulonglong)(uint)param_2[1];
            if (*(uint *)(param_1 + 0x94) <= (uint)param_2[1]) {
                return 0;
            }
            lVar2 = *(longlong *)(param_1 + 0xa0);
        }
    }
    lVar2 = *(longlong *)(lVar2 + uVar3 * 8);
    if (lVar2 == 0) {
        return 0;
    }
    if (*(longlong *)(lVar2 + 0x48) != 0) {
        return *(longlong *)(lVar2 + 0x48);
    }
    lVar2 = *(longlong *)(lVar2 + 0x40);
    LAB_1403d6634:
    return lVar2 + 8;
}



undefined8 FUN_1403d6640(undefined4 *param_1,uint param_2,longlong param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong *plVar3;
    ulonglong uVar4;
    undefined4 local_res8;
    uint local_resc;

    uVar4 = (ulonglong)param_2;
    if ((uint)param_1[1] <= param_2) {
        return 0x80004005;
    }
    lVar2 = *(longlong *)(param_1 + 4);
    if (param_3 == 0) {
        plVar3 = *(longlong **)(uVar4 * 8 + lVar2);
        if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 8))();
            *(undefined8 *)(uVar4 * 8 + *(longlong *)(param_1 + 4)) = 0;
            return 0;
        }
    }
    else {
        lVar1 = uVar4 * 8;
        if (*(longlong *)(lVar2 + uVar4 * 8) == 0) {
            *(longlong *)(lVar2 + lVar1) = param_3;
            (**(code **)**(undefined8 **)(lVar1 + *(longlong *)(param_1 + 4)))();
            local_res8 = *param_1;
            local_resc = param_2;
            (**(code **)(**(longlong **)(lVar1 + *(longlong *)(param_1 + 4)) + 0x28))
                    (*(longlong **)(lVar1 + *(longlong *)(param_1 + 4)),&local_res8);
            return 0;
        }
    }
    return 0x80004005;
}



void FUN_1403d6710(longlong param_1,longlong *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    uint uVar5;
    ulonglong uVar6;

    uVar6 = 0;
    if (*(int *)(param_1 + 4) != 0) {
        do {
            lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar6 * 8);
            if (lVar2 != 0) {
                lVar3 = param_2[1];
                lVar1 = lVar3 + 1;
                lVar4 = FUN_14018db00(*param_2,lVar1,8);
                *(longlong *)(lVar4 + lVar3 * 8) = lVar2;
                if (*param_2 != lVar4) {
                    FUN_1407db590(lVar4,*param_2,param_2[1] << 3);
                    lVar2 = *param_2;
                    if (lVar2 != 0) {
                        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
                    }
                    *param_2 = lVar4;
                }
                param_2[1] = lVar1;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
        } while (uVar5 < *(uint *)(param_1 + 4));
    }
    return;
}



// WARNING: Removing unreachable block (ram,0x0001403d68d9)
// WARNING: Removing unreachable block (ram,0x0001403d68e8)
// WARNING: Removing unreachable block (ram,0x0001403d68f0)
// WARNING: Removing unreachable block (ram,0x0001403d68fe)
// WARNING: Removing unreachable block (ram,0x0001403d68f9)
// WARNING: Removing unreachable block (ram,0x0001403d6900)
// WARNING: Removing unreachable block (ram,0x0001403d6912)
// WARNING: Removing unreachable block (ram,0x0001403d691b)
// WARNING: Removing unreachable block (ram,0x0001403d6932)
// WARNING: Removing unreachable block (ram,0x0001403d691f)
// WARNING: Removing unreachable block (ram,0x0001403d6938)
// WARNING: Removing unreachable block (ram,0x0001403d693c)
// WARNING: Removing unreachable block (ram,0x0001403d694b)
// WARNING: Removing unreachable block (ram,0x0001403d6980)
// WARNING: Removing unreachable block (ram,0x0001403d694f)
// WARNING: Removing unreachable block (ram,0x0001403d6975)
// WARNING: Removing unreachable block (ram,0x0001403d6968)
// WARNING: Removing unreachable block (ram,0x0001403d6987)
// WARNING: Removing unreachable block (ram,0x0001403d699c)
// WARNING: Removing unreachable block (ram,0x0001403d69c8)
// WARNING: Removing unreachable block (ram,0x0001403d69a4)
// WARNING: Removing unreachable block (ram,0x0001403d69bd)
// WARNING: Removing unreachable block (ram,0x0001403d69c0)
// WARNING: Removing unreachable block (ram,0x0001403d69ce)
// WARNING: Removing unreachable block (ram,0x0001403d69e6)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_1403d67d0(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
    int iVar1;
    longlong lVar2;
    uint uVar3;

    if (param_2 == (undefined4 *)0x0) {
        return 6;
    }
    if (param_3 == (undefined4 *)0x0) {
        param_3 = param_2 + 2;
    }
    if ((param_2[0x53] & 0x100) != 0) {
        return 0x48;
    }
    iVar1 = FUN_1404aa7d0(param_1,param_2[0x51],*param_2,param_3[1]);
    if (iVar1 == 0) {
        return 0x48;
    }
    uVar3 = 0;
    if ((DAT_140c8a718 & 1) == 0) {
        DAT_140c8a718 = DAT_140c8a718 | 1;
        DAT_140c8a724 = 0;
    }
    if (*(longlong *)(param_1 + 0x78) != 0) {
        uVar3 = *(uint *)(*(longlong *)(param_1 + 0x78) + 0x38);
    }
    if (DAT_140c8a724 == 0) {
        DAT_140c8a724 = 1;
        lVar2 = FUN_140200220();
        if (lVar2 == 0) {
            DAT_140c8a720 = 0;
            return 0;
        }
        DAT_140c8a720 = *(uint *)(lVar2 + 4);
    }
    if (DAT_140c8a720 <= uVar3) {
        return 0;
    }
    return 0x2a;
}



undefined4 FUN_1403d6a10(longlong *param_1,uint param_2)

{
    int iVar1;
    undefined4 uVar2;
    int *piVar3;
    longlong lVar4;
    uint uVar5;
    undefined local_res8 [8];

    uVar5 = 1;
    if (*(uint *)(param_1 + 0xf) != 0) {
        uVar5 = *(uint *)(param_1 + 0xf);
    }
    if (uVar5 < param_2) {
        return 0x13;
    }
    if ((*(byte *)(param_1 + 0x10) & 0x20) == 0) {
        if (((*(byte *)(param_1[8] + 0x154) & 4) == 0) && (1 < param_2)) {
            return 0xb;
        }
        piVar3 = (int *)(**(code **)(*param_1 + 0x20))(param_1,local_res8);
        if (*piVar3 != 2) {
            piVar3 = (int *)(**(code **)(*param_1 + 0x20))(param_1,local_res8);
            if (*piVar3 != 3) {
                if (((*(uint *)(param_1[8] + 0x154) & 0x100) != 0) && (*(int *)(param_1 + 4) == 0)) {
                    return 0x19;
                }
                lVar4 = param_1[9];
                if ((lVar4 == 0) && (lVar4 = param_1[8] + 8, lVar4 == 0)) {
                    return 0x17;
                }
                if ((~(*(uint *)(param_1 + 0x10) >> 3) & 1) != 0) {
                    iVar1 = FUN_1403d8cb0(param_1 + 0x1e);
                    if (iVar1 != 0) {
                        return 0;
                    }
                }
                uVar2 = 0;
                if (*(longlong *)(lVar4 + 0x58) == 0) {
                    uVar2 = 0x17;
                }
                return uVar2;
            }
        }
    }
    return 0x17;
}



longlong *
FUN_1403d6b20(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
              undefined8 *param_5)

{
    longlong lVar1;
    longlong lVar2;

    if (((param_4 == *(longlong *)(param_1 + 8)) || (param_3 != 0)) ||
        (*(int *)param_5 < *(int *)(param_4 + 0x20))) {
        lVar2 = FUN_14018b280(0x28);
        if ((undefined8 *)(lVar2 + 0x20) != (undefined8 *)0x0) {
            *(undefined8 *)(lVar2 + 0x20) = *param_5;
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
        lVar2 = FUN_14018b280(0x28);
        if ((undefined8 *)(lVar2 + 0x20) != (undefined8 *)0x0) {
            *(undefined8 *)(lVar2 + 0x20) = *param_5;
        }
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



char ** FUN_1403d6c10(longlong param_1,char **param_2,int *param_3)

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
        if (pcVar5 == *(char **)(pcVar2 + 0x10)) goto LAB_1403d6c6e;
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
    LAB_1403d6c6e:
    ppcVar1 = (char **)FUN_1403d6b20(param_1,local_res8,pcVar4,pcVar5,param_3);
    *param_2 = *ppcVar1;
    *(undefined *)(param_2 + 1) = 1;
    return param_2;
}



undefined8 FUN_1403d6d10(undefined8 *param_1)

{
    longlong lVar1;

    if (*(int *)((longlong)param_1 + 0x14) == 0) {
        lVar1 = (**(code **)*param_1)(param_1,*(undefined4 *)(param_1 + 1));
        if ((*(int *)(lVar1 + 0x14) == 0) ||
            (DAT_140c636a8 < (uint)(*(int *)(param_1 + 2) + *(int *)((longlong)param_1 + 0xc)))) {
            lVar1 = (**(code **)*param_1)(param_1,*(undefined4 *)(param_1 + 1));
            if ((*(int *)(lVar1 + 0x1c) == 0) || (*(int *)(param_1 + 3) != 0)) {
                return 1;
            }
        }
    }
    return 0;
}



undefined8
FUN_1403d6d70(undefined8 param_1,undefined8 param_2,float param_3,undefined8 param_4,
              longlong param_5,int param_6)

{
    uint uVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    undefined4 uVar5;
    undefined4 uVar6;

    uVar5 = (undefined4)((ulonglong)param_4 >> 0x20);
    fVar4 = (float)param_4;
    if (param_6 == 0) {
        fVar4 = *(float *)(param_5 + 0x1c) - fVar4;
        if ((int)*(float *)(param_5 + 0x20) == 0) {
            if (fVar4 <= 0.0) {
                fVar4 = 0.0;
            }
            fVar3 = (*(float *)(param_5 + 0x14) - 1.0) * param_3 + *(float *)(param_5 + 0x18);
            if (fVar3 <= 0.0) {
                fVar3 = 0.0;
            }
            if (fVar4 <= fVar3) {
                fVar3 = fVar4;
            }
            uVar6 = 0;
        }
        else {
            if (0.0 <= fVar4) {
                fVar4 = 0.0;
            }
            fVar3 = (*(float *)(param_5 + 0x14) - 1.0) * param_3 + *(float *)(param_5 + 0x18);
            if (0.0 <= fVar3) {
                fVar3 = 0.0;
            }
            if (fVar3 <= fVar4) {
                fVar3 = fVar4;
            }
            uVar6 = 0;
        }
    }
    else if (param_6 == 1) {
        fVar2 = *(float *)(param_5 + 0x18) - fVar4;
        if ((int)*(float *)(param_5 + 0x1c) == 0) {
            if (fVar2 <= 0.0) {
                fVar2 = 0.0;
            }
            fVar3 = (*(float *)(param_5 + 0x14) - 1.0) * fVar4;
            if (fVar3 <= 0.0) {
                fVar3 = 0.0;
            }
            if (fVar2 <= fVar3) {
                fVar3 = fVar2;
            }
            uVar6 = 0;
        }
        else {
            if (0.0 <= fVar2) {
                fVar2 = 0.0;
            }
            fVar3 = (*(float *)(param_5 + 0x14) - 1.0) * fVar4;
            if (0.0 <= fVar3) {
                fVar3 = 0.0;
            }
            uVar6 = 0;
            if (fVar3 <= fVar2) {
                fVar3 = fVar2;
            }
        }
    }
    else if (param_6 == 2) {
        fVar3 = *(float *)(param_5 + 0x14);
        uVar6 = 0;
        if ((int)*(float *)(param_5 + 0x18) == 0) {
            if (fVar4 <= fVar3) {
                fVar3 = fVar4;
                uVar6 = uVar5;
            }
        }
        else if (fVar3 <= fVar4) {
            fVar3 = fVar4;
            uVar6 = uVar5;
        }
    }
    else if (param_6 == 3) {
        fVar3 = *(float *)(param_5 + 0x14);
        uVar6 = 0;
    }
    else {
        fVar3 = 0.0;
        uVar6 = 0;
        if (param_6 == 4) {
            uVar1 = (uint)(longlong)*(float *)(param_5 + 0x14);
            if ((int)*(float *)(param_5 + 0x18) == 0) {
                fVar3 = (float)(ulonglong)((uint)(longlong)fVar4 & ~uVar1);
                uVar6 = 0;
            }
            else {
                fVar3 = (float)(ulonglong)((uint)(longlong)fVar4 | uVar1);
                uVar6 = 0;
            }
        }
    }
    return CONCAT44(uVar6,fVar3);
}



undefined8
FUN_1403d6f20(undefined8 param_1,undefined8 param_2,float param_3,undefined8 param_4,
              longlong param_5,int param_6)

{
    uint uVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    undefined4 uVar5;
    undefined4 uVar6;

    uVar5 = (undefined4)((ulonglong)param_4 >> 0x20);
    fVar4 = (float)param_4;
    if (param_6 == 0) {
        fVar4 = *(float *)(param_5 + 0x20) - fVar4;
        if ((int)*(float *)(param_5 + 0x24) == 0) {
            if (fVar4 <= 0.0) {
                fVar4 = 0.0;
            }
            fVar3 = (*(float *)(param_5 + 0x18) - 1.0) * param_3 + *(float *)(param_5 + 0x1c);
            if (fVar3 <= 0.0) {
                fVar3 = 0.0;
            }
            if (fVar4 <= fVar3) {
                fVar3 = fVar4;
            }
            uVar6 = 0;
        }
        else {
            if (0.0 <= fVar4) {
                fVar4 = 0.0;
            }
            fVar3 = (*(float *)(param_5 + 0x18) - 1.0) * param_3 + *(float *)(param_5 + 0x1c);
            if (0.0 <= fVar3) {
                fVar3 = 0.0;
            }
            if (fVar3 <= fVar4) {
                fVar3 = fVar4;
            }
            uVar6 = 0;
        }
    }
    else if (param_6 == 1) {
        fVar2 = *(float *)(param_5 + 0x1c) - fVar4;
        if ((int)*(float *)(param_5 + 0x20) == 0) {
            if (fVar2 <= 0.0) {
                fVar2 = 0.0;
            }
            fVar3 = (*(float *)(param_5 + 0x18) - 1.0) * fVar4;
            if (fVar3 <= 0.0) {
                fVar3 = 0.0;
            }
            if (fVar2 <= fVar3) {
                fVar3 = fVar2;
            }
            uVar6 = 0;
        }
        else {
            if (0.0 <= fVar2) {
                fVar2 = 0.0;
            }
            fVar3 = (*(float *)(param_5 + 0x18) - 1.0) * fVar4;
            if (0.0 <= fVar3) {
                fVar3 = 0.0;
            }
            uVar6 = 0;
            if (fVar3 <= fVar2) {
                fVar3 = fVar2;
            }
        }
    }
    else if (param_6 == 2) {
        fVar3 = *(float *)(param_5 + 0x18);
        uVar6 = 0;
        if ((int)*(float *)(param_5 + 0x1c) == 0) {
            if (fVar4 <= fVar3) {
                fVar3 = fVar4;
                uVar6 = uVar5;
            }
        }
        else if (fVar3 <= fVar4) {
            fVar3 = fVar4;
            uVar6 = uVar5;
        }
    }
    else if (param_6 == 3) {
        fVar3 = *(float *)(param_5 + 0x18);
        uVar6 = 0;
    }
    else {
        fVar3 = 0.0;
        uVar6 = 0;
        if (param_6 == 4) {
            uVar1 = (uint)(longlong)*(float *)(param_5 + 0x18);
            if ((int)*(float *)(param_5 + 0x1c) == 0) {
                fVar3 = (float)(ulonglong)((uint)(longlong)fVar4 & ~uVar1);
                uVar6 = 0;
            }
            else {
                fVar3 = (float)(ulonglong)((uint)(longlong)fVar4 | uVar1);
                uVar6 = 0;
            }
        }
    }
    return CONCAT44(uVar6,fVar3);
}



longlong *
FUN_1403d70d0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,uint *param_5)

{
    longlong lVar1;
    longlong lVar2;

    if (((param_4 == *(longlong *)(param_1 + 8)) || (param_3 != 0)) ||
        (*param_5 < *(uint *)(param_4 + 0x20))) {
        lVar2 = FUN_1403d7d40();
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
        lVar2 = FUN_1403d7d40();
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



char ** FUN_1403d7190(longlong param_1,char **param_2,uint *param_3)

{
    char *pcVar1;
    char **ppcVar2;
    char *pcVar3;
    char *pcVar4;
    char *pcVar5;
    char *pcVar6;
    bool bVar7;
    undefined local_res8 [8];

    pcVar1 = *(char **)(param_1 + 8);
    pcVar3 = *(char **)(pcVar1 + 8);
    bVar7 = true;
    pcVar6 = pcVar1;
    if (pcVar3 != (char *)0x0) {
        do {
            pcVar6 = pcVar3;
            bVar7 = *param_3 < *(uint *)(pcVar6 + 0x20);
            if (bVar7) {
                pcVar3 = *(char **)(pcVar6 + 0x10);
            }
            else {
                pcVar3 = *(char **)(pcVar6 + 0x18);
            }
        } while (pcVar3 != (char *)0x0);
    }
    pcVar5 = pcVar6;
    if (bVar7) {
        if (pcVar6 == *(char **)(pcVar1 + 0x10)) {
            ppcVar2 = (char **)FUN_1403d70d0(param_1,local_res8,pcVar3,pcVar6,param_3);
            *param_2 = *ppcVar2;
            *(undefined *)(param_2 + 1) = 1;
            return param_2;
        }
        if ((*pcVar6 == '\0') && (*(char **)(*(longlong *)(pcVar6 + 8) + 8) == pcVar6)) {
            pcVar5 = *(char **)(pcVar6 + 0x18);
        }
        else {
            pcVar5 = *(char **)(pcVar6 + 0x10);
            if (pcVar5 == (char *)0x0) {
                pcVar5 = *(char **)(pcVar6 + 8);
                pcVar4 = pcVar5;
                if (pcVar6 == *(char **)(pcVar5 + 0x10)) {
                    do {
                        pcVar5 = *(char **)(pcVar4 + 8);
                        bVar7 = pcVar4 == *(char **)(pcVar5 + 0x10);
                        pcVar4 = pcVar5;
                    } while (bVar7);
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
    if (*(uint *)(pcVar5 + 0x20) < *param_3) {
        if (((pcVar6 == pcVar1) || (pcVar3 != (char *)0x0)) || (*param_3 < *(uint *)(pcVar6 + 0x20))) {
            pcVar3 = (char *)FUN_1403d7d40(pcVar5,param_3);
            *(char **)(pcVar6 + 0x10) = pcVar3;
            pcVar1 = *(char **)(param_1 + 8);
            if (pcVar6 == pcVar1) {
                *(char **)(pcVar1 + 8) = pcVar3;
                *(char **)(*(longlong *)(param_1 + 8) + 0x18) = pcVar3;
            }
            else if (pcVar6 == *(char **)(pcVar1 + 0x10)) {
                *(char **)(pcVar1 + 0x10) = pcVar3;
            }
        }
        else {
            pcVar3 = (char *)FUN_1403d7d40(pcVar5,param_3);
            *(char **)(pcVar6 + 0x18) = pcVar3;
            if (pcVar6 == *(char **)(*(longlong *)(param_1 + 8) + 0x18)) {
                *(char **)(*(longlong *)(param_1 + 8) + 0x18) = pcVar3;
            }
        }
        *(char **)(pcVar3 + 8) = pcVar6;
        *(undefined8 *)(pcVar3 + 0x10) = 0;
        *(undefined8 *)(pcVar3 + 0x18) = 0;
        FUN_1400081c0(pcVar3,*(longlong *)(param_1 + 8) + 8);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
        *param_2 = pcVar3;
        *(undefined *)(param_2 + 1) = 1;
        return param_2;
    }
    *param_2 = pcVar5;
    *(undefined *)(param_2 + 1) = 0;
    return param_2;
}



longlong *
FUN_1403d7350(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,uint *param_5)

{
    longlong lVar1;
    longlong lVar2;

    if (((param_4 == *(longlong *)(param_1 + 8)) || (param_3 != 0)) ||
        (*param_5 < *(uint *)(param_4 + 0x20))) {
        lVar2 = FUN_1403d7dc0();
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
        lVar2 = FUN_1403d7dc0();
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



char ** FUN_1403d7410(longlong param_1,char **param_2,uint *param_3)

{
    char *pcVar1;
    char **ppcVar2;
    char *pcVar3;
    char *pcVar4;
    char *pcVar5;
    char *pcVar6;
    bool bVar7;
    undefined local_res8 [8];

    pcVar1 = *(char **)(param_1 + 8);
    pcVar3 = *(char **)(pcVar1 + 8);
    bVar7 = true;
    pcVar6 = pcVar1;
    if (pcVar3 != (char *)0x0) {
        do {
            pcVar6 = pcVar3;
            bVar7 = *param_3 < *(uint *)(pcVar6 + 0x20);
            if (bVar7) {
                pcVar3 = *(char **)(pcVar6 + 0x10);
            }
            else {
                pcVar3 = *(char **)(pcVar6 + 0x18);
            }
        } while (pcVar3 != (char *)0x0);
    }
    pcVar5 = pcVar6;
    if (bVar7) {
        if (pcVar6 == *(char **)(pcVar1 + 0x10)) {
            ppcVar2 = (char **)FUN_1403d7350(param_1,local_res8,pcVar3,pcVar6,param_3);
            *param_2 = *ppcVar2;
            *(undefined *)(param_2 + 1) = 1;
            return param_2;
        }
        if ((*pcVar6 == '\0') && (*(char **)(*(longlong *)(pcVar6 + 8) + 8) == pcVar6)) {
            pcVar5 = *(char **)(pcVar6 + 0x18);
        }
        else {
            pcVar5 = *(char **)(pcVar6 + 0x10);
            if (pcVar5 == (char *)0x0) {
                pcVar5 = *(char **)(pcVar6 + 8);
                pcVar4 = pcVar5;
                if (pcVar6 == *(char **)(pcVar5 + 0x10)) {
                    do {
                        pcVar5 = *(char **)(pcVar4 + 8);
                        bVar7 = pcVar4 == *(char **)(pcVar5 + 0x10);
                        pcVar4 = pcVar5;
                    } while (bVar7);
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
    if (*(uint *)(pcVar5 + 0x20) < *param_3) {
        if (((pcVar6 == pcVar1) || (pcVar3 != (char *)0x0)) || (*param_3 < *(uint *)(pcVar6 + 0x20))) {
            pcVar3 = (char *)FUN_1403d7dc0(pcVar5,param_3);
            *(char **)(pcVar6 + 0x10) = pcVar3;
            pcVar1 = *(char **)(param_1 + 8);
            if (pcVar6 == pcVar1) {
                *(char **)(pcVar1 + 8) = pcVar3;
                *(char **)(*(longlong *)(param_1 + 8) + 0x18) = pcVar3;
            }
            else if (pcVar6 == *(char **)(pcVar1 + 0x10)) {
                *(char **)(pcVar1 + 0x10) = pcVar3;
            }
        }
        else {
            pcVar3 = (char *)FUN_1403d7dc0(pcVar5,param_3);
            *(char **)(pcVar6 + 0x18) = pcVar3;
            if (pcVar6 == *(char **)(*(longlong *)(param_1 + 8) + 0x18)) {
                *(char **)(*(longlong *)(param_1 + 8) + 0x18) = pcVar3;
            }
        }
        *(char **)(pcVar3 + 8) = pcVar6;
        *(undefined8 *)(pcVar3 + 0x10) = 0;
        *(undefined8 *)(pcVar3 + 0x18) = 0;
        FUN_1400081c0(pcVar3,*(longlong *)(param_1 + 8) + 8);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
        *param_2 = pcVar3;
        *(undefined *)(param_2 + 1) = 1;
        return param_2;
    }
    *param_2 = pcVar5;
    *(undefined *)(param_2 + 1) = 0;
    return param_2;
}



longlong *
FUN_1403d75d0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,uint *param_5)

{
    longlong lVar1;
    longlong lVar2;

    if (((param_4 == *(longlong *)(param_1 + 8)) || (param_3 != 0)) ||
        (*param_5 < *(uint *)(param_4 + 0x20))) {
        lVar2 = FUN_14018b280(0x48);
        if ((uint *)(lVar2 + 0x20) != (uint *)0x0) {
            *(uint *)(lVar2 + 0x20) = *param_5;
            FUN_1403d2aa0(lVar2 + 0x28,param_5 + 2);
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
        lVar2 = FUN_1403d7e50(param_1,param_5);
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



char ** FUN_1403d76c0(longlong param_1,char **param_2,uint *param_3)

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
        if (pcVar5 == *(char **)(pcVar2 + 0x10)) goto LAB_1403d771e;
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
    LAB_1403d771e:
    ppcVar1 = (char **)FUN_1403d75d0(param_1,local_res8,pcVar4,pcVar5,param_3);
    *param_2 = *ppcVar1;
    *(undefined *)(param_2 + 1) = 1;
    return param_2;
}



void FUN_1403d77c0(longlong param_1,longlong *param_2,longlong *param_3)

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
            FUN_1403d58a0(param_1,&local_res8);
        } while (*param_2 != *param_3);
    }
    return;
}



longlong *
FUN_1403d78a0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
              undefined8 *param_5)

{
    longlong lVar1;
    longlong lVar2;
    bool bVar3;

    if ((param_4 != *(longlong *)(param_1 + 8)) && (param_3 == 0)) {
        bVar3 = *(uint *)param_5 < *(uint *)(param_4 + 0x20);
        if (*(uint *)param_5 == *(uint *)(param_4 + 0x20)) {
            if (*(uint *)((longlong)param_5 + 4) == *(uint *)(param_4 + 0x24)) {
                bVar3 = *(uint *)(param_5 + 1) < *(uint *)(param_4 + 0x28);
            }
            else {
                bVar3 = (int)*(uint *)((longlong)param_5 + 4) < (int)*(uint *)(param_4 + 0x24);
            }
        }
        if (!bVar3) {
            lVar2 = FUN_14018b280(0x38);
            if ((undefined8 *)(lVar2 + 0x20) != (undefined8 *)0x0) {
                *(undefined8 *)(lVar2 + 0x20) = *param_5;
                *(undefined8 *)(lVar2 + 0x28) = param_5[1];
                *(undefined8 *)(lVar2 + 0x30) = param_5[2];
            }
            *(longlong *)(param_4 + 0x18) = lVar2;
            if (param_4 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x18)) {
                *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar2;
            }
            goto LAB_1403d7989;
        }
    }
    lVar2 = FUN_14018b280(0x38);
    if ((undefined8 *)(lVar2 + 0x20) != (undefined8 *)0x0) {
        *(undefined8 *)(lVar2 + 0x20) = *param_5;
        *(undefined8 *)(lVar2 + 0x28) = param_5[1];
        *(undefined8 *)(lVar2 + 0x30) = param_5[2];
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
    LAB_1403d7989:
    *(longlong *)(lVar2 + 8) = param_4;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    FUN_1400081c0(lVar2,*(longlong *)(param_1 + 8) + 8);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    *param_2 = lVar2;
    return param_2;
}



longlong * FUN_1403d79d0(longlong param_1,longlong *param_2,char **param_3,uint *param_4)

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
            LAB_1403d7a1e:
            plVar4 = (longlong *)FUN_1403d8200(param_1,local_18,param_4);
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
                    lVar5 = FUN_1403d8470(uVar1,param_4);
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
                    lVar5 = FUN_1403d8470(uVar1,param_4);
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
                return param_2;
            }
            plVar4 = (longlong *)FUN_1403d8200(param_1,local_18,param_4);
            *param_2 = *plVar4;
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
            goto LAB_1403d7a1e;
        if (*(longlong *)(lVar5 + 0x18) == 0) {
            FUN_1403d8140(param_1,param_2,0,lVar5,param_4);
            return param_2;
        }
    }
    FUN_1403d8140();
    return param_2;
}



undefined8 FUN_1403d7bc0(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res18;

    lVar2 = FUN_1403d83c0();
    if (lVar2 != 0) {
        lVar2 = *(longlong *)(lVar2 + 0x10);
        local_res18 = lVar2;
        lVar1 = *(longlong *)(lVar2 + 8);
        while (lVar1 != 0) {
            if (*(uint *)(lVar1 + 0x20) < param_2) {
                lVar1 = *(longlong *)(lVar1 + 0x18);
            }
            else {
                local_res18 = lVar1;
                lVar1 = *(longlong *)(lVar1 + 0x10);
            }
        }
        if ((local_res18 == lVar2) || (param_2 < *(uint *)(local_res18 + 0x20))) {
            local_res18 = lVar2;
        }
        if (local_res18 != lVar2) {
            return *(undefined8 *)(local_res18 + 0x28);
        }
    }
    return 0;
}



undefined8 FUN_1403d7c30(longlong *param_1,longlong param_2,int param_3)

{
    uint uVar1;
    int iVar2;
    longlong lVar3;
    bool bVar4;

    if (param_2 == 0) {
        return 0;
    }
    lVar3 = *param_1;
    if (param_3 == 0) {
        iVar2 = FUN_140491ef0(*(undefined4 *)(lVar3 + 0xc));
        if (*(int *)(param_2 + 0x3700) != iVar2) {
            return 0;
        }
    }
    else {
        uVar1 = FUN_140491ef0(*(undefined4 *)(lVar3 + 0xc));
        if (param_2 == *(longlong *)(DAT_140c65898 + 0x78)) {
            if (DAT_140c65970 == 0) {
                return 0;
            }
            bVar4 = (*(uint *)(DAT_140c65970 + 0xc) >> (uVar1 & 0x1f) & 1) != 0;
        }
        else {
            bVar4 = *(uint *)(param_2 + 0x3700) == uVar1;
        }
        if (!bVar4) {
            return 0;
        }
    }
    if (*(int *)(lVar3 + 0x38) != 0) {
        if (*(int *)(lVar3 + 0x38) == 2) {
            if (*(longlong **)(param_2 + 0x110) == (longlong *)0x0) {
                return 0;
            }
            iVar2 = (**(code **)(**(longlong **)(param_2 + 0x110) + 0x18))();
            if (iVar2 != 0xa6) {
                return 0;
            }
        }
        if (*(int *)(*param_1 + 0x38) == 1) {
            if (*(longlong **)(param_2 + 0x110) == (longlong *)0x0) {
                return 0;
            }
            iVar2 = (**(code **)(**(longlong **)(param_2 + 0x110) + 0x18))();
            if (iVar2 != 0xa7) {
                return 0;
            }
        }
    }
    if ((*(int *)(*param_1 + 0x3c) != 0) &&
        (iVar2 = (**(code **)(*DAT_140c659a0 + 0x18))
                (DAT_140c659a0,param_2,*(int *)(*param_1 + 0x3c),0,0,0), iVar2 == 0)) {
        return 0;
    }
    return 1;
}



longlong FUN_1403d7d40(undefined8 param_1,undefined8 *param_2)

{
    longlong lVar1;

    lVar1 = FUN_14018b280(0x70);
    if ((undefined8 *)(lVar1 + 0x20) != (undefined8 *)0x0) {
        *(undefined8 *)(lVar1 + 0x20) = *param_2;
        *(undefined8 *)(lVar1 + 0x28) = param_2[1];
        *(undefined8 *)(lVar1 + 0x30) = param_2[2];
        *(undefined8 *)(lVar1 + 0x38) = param_2[3];
        *(undefined8 *)(lVar1 + 0x40) = param_2[4];
        *(undefined8 *)(lVar1 + 0x48) = param_2[5];
        *(undefined8 *)(lVar1 + 0x50) = param_2[6];
        *(undefined8 *)(lVar1 + 0x58) = param_2[7];
        *(undefined8 *)(lVar1 + 0x60) = param_2[8];
        *(undefined8 *)(lVar1 + 0x68) = param_2[9];
    }
    return lVar1;
}



longlong FUN_1403d7dc0(undefined8 param_1,undefined4 *param_2)

{
    longlong lVar1;

    lVar1 = FUN_14018b280();
    if ((undefined4 *)(lVar1 + 0x20) != (undefined4 *)0x0) {
        *(undefined4 *)(lVar1 + 0x20) = *param_2;
        *(undefined4 *)(lVar1 + 0x24) = param_2[1];
        *(undefined4 *)(lVar1 + 0x28) = param_2[2];
        *(undefined4 *)(lVar1 + 0x2c) = param_2[3];
        *(undefined4 *)(lVar1 + 0x30) = param_2[4];
        *(undefined4 *)(lVar1 + 0x34) = param_2[5];
        *(undefined4 *)(lVar1 + 0x38) = param_2[6];
        *(undefined4 *)(lVar1 + 0x3c) = param_2[7];
        *(undefined4 *)(lVar1 + 0x40) = param_2[8];
        *(undefined4 *)(lVar1 + 0x44) = param_2[9];
        *(undefined4 *)(lVar1 + 0x48) = param_2[10];
        *(undefined4 *)(lVar1 + 0x4c) = param_2[0xb];
        *(undefined4 *)(lVar1 + 0x50) = param_2[0xc];
    }
    return lVar1;
}



longlong FUN_1403d7e50(undefined8 param_1,undefined4 *param_2)

{
    longlong lVar1;

    lVar1 = FUN_14018b280();
    if ((undefined4 *)(lVar1 + 0x20) != (undefined4 *)0x0) {
        *(undefined4 *)(lVar1 + 0x20) = *param_2;
        FUN_1403d2aa0(lVar1 + 0x28,param_2 + 2);
    }
    return lVar1;
}



undefined8 FUN_1403d7e90(code **param_1,longlong param_2)

{
    code *pcVar1;
    undefined8 uVar2;
    undefined8 uVar3;
    ulonglong uVar4;
    int iVar5;
    undefined8 *puVar6;
    longlong lVar7;
    ulonglong uVar8;
    longlong lVar9;

    uVar4 = *(ulonglong *)(param_2 + 8);
    while (uVar4 != 0) {
        uVar8 = uVar4 - 1 >> 1;
        lVar9 = uVar8 * 0x10;
        lVar7 = uVar4 * 0x10;
        iVar5 = (**param_1)(param_1[1] + lVar7 + 8,param_1[1] + lVar9 + 8,param_1[3]);
        if (-1 < iVar5) break;
        pcVar1 = param_1[1];
        uVar2 = *(undefined8 *)(pcVar1 + lVar7);
        uVar3 = *(undefined8 *)(pcVar1 + lVar7 + 8);
        puVar6 = (undefined8 *)(pcVar1 + lVar7);
        if (puVar6 != (undefined8 *)0x0) {
            *puVar6 = *(undefined8 *)(pcVar1 + lVar9);
            puVar6[1] = *(undefined8 *)(pcVar1 + lVar9 + 8);
        }
        puVar6 = (undefined8 *)(param_1[1] + lVar9);
        if (puVar6 != (undefined8 *)0x0) {
            *puVar6 = uVar2;
            puVar6[1] = uVar3;
        }
        *(ulonglong *)(*(longlong *)(param_1[1] + lVar7) + 8) = uVar4;
        uVar4 = uVar8;
    }
    if (*(ulonglong *)(param_2 + 8) != uVar4) {
        *(ulonglong *)(param_2 + 8) = uVar4;
        return 1;
    }
    return 0;
}



void FUN_1403d7f70(code **param_1,longlong param_2)

{
    code *pcVar1;
    undefined8 uVar2;
    undefined8 uVar3;
    int iVar4;
    undefined8 *puVar5;
    code *pcVar6;
    code *pcVar7;
    code *pcVar8;
    longlong lVar9;
    longlong lVar10;

    pcVar8 = *(code **)(param_2 + 8);
    pcVar1 = param_1[2];
    pcVar6 = (code *)((longlong)pcVar8 * 2 + 1);
    if (pcVar1 <= pcVar6) {
        *(code **)(param_2 + 8) = pcVar8;
        return;
    }
    do {
        pcVar7 = pcVar6;
        if ((pcVar6 + 1 < pcVar1) &&
            (iVar4 = (**param_1)(param_1[1] + (longlong)pcVar6 * 0x10 + 8,
                                 param_1[1] + (longlong)pcVar6 * 0x10 + 0x18,param_1[3]), -1 < iVar4)) {
            pcVar7 = pcVar6 + 1;
        }
        lVar10 = (longlong)pcVar8 * 0x10;
        lVar9 = (longlong)pcVar7 * 0x10;
        iVar4 = (**param_1)(param_1[1] + lVar9 + 8,param_1[1] + lVar10 + 8,param_1[3]);
        if (-1 < iVar4) break;
        pcVar6 = param_1[1];
        uVar2 = *(undefined8 *)(pcVar6 + lVar10);
        uVar3 = *(undefined8 *)(pcVar6 + lVar10 + 8);
        puVar5 = (undefined8 *)(pcVar6 + lVar10);
        if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = *(undefined8 *)(pcVar6 + lVar9);
            puVar5[1] = *(undefined8 *)(pcVar6 + lVar9 + 8);
        }
        puVar5 = (undefined8 *)(param_1[1] + lVar9);
        if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = uVar2;
            puVar5[1] = uVar3;
        }
        *(code **)(*(longlong *)(param_1[1] + lVar10) + 8) = pcVar8;
        pcVar6 = (code *)((longlong)pcVar7 * 2 + 1);
        pcVar8 = pcVar7;
    } while (pcVar6 < pcVar1);
    *(code **)(param_2 + 8) = pcVar8;
    return;
}



void FUN_1403d8090(longlong *param_1,ulonglong param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    ulonglong uVar5;

    if ((ulonglong)param_1[1] < param_2 || param_1[1] == param_2) {
        puVar2 = (undefined8 *)FUN_14018db00(*param_1);
        if ((undefined8 *)*param_1 != puVar2) {
            uVar5 = 0;
            if (param_1[1] != 0) {
                puVar3 = puVar2;
                do {
                    if (puVar3 != (undefined8 *)0x0) {
                        puVar4 = (undefined8 *)((longlong)puVar3 + (*param_1 - (longlong)puVar2));
                        *puVar3 = *puVar4;
                        puVar3[1] = puVar4[1];
                    }
                    uVar5 = uVar5 + 1;
                    puVar3 = puVar3 + 2;
                } while (uVar5 < (ulonglong)param_1[1]);
            }
            lVar1 = *param_1;
            if (lVar1 != 0) {
                (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
            }
            *param_1 = (longlong)puVar2;
        }
        param_1[1] = param_2;
        return;
    }
    param_1[1] = param_2;
    return;
}



longlong *
FUN_1403d8140(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,uint *param_5)

{
    longlong lVar1;
    longlong lVar2;

    if (((param_4 == *(longlong *)(param_1 + 8)) || (param_3 != 0)) ||
        (*param_5 < *(uint *)(param_4 + 0x20))) {
        lVar2 = FUN_1403d8470();
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
        lVar2 = FUN_1403d8470();
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



char ** FUN_1403d8200(longlong param_1,char **param_2,uint *param_3)

{
    char *pcVar1;
    char **ppcVar2;
    char *pcVar3;
    char *pcVar4;
    char *pcVar5;
    char *pcVar6;
    bool bVar7;
    undefined local_res8 [8];

    pcVar1 = *(char **)(param_1 + 8);
    pcVar3 = *(char **)(pcVar1 + 8);
    bVar7 = true;
    pcVar6 = pcVar1;
    if (pcVar3 != (char *)0x0) {
        do {
            pcVar6 = pcVar3;
            bVar7 = *param_3 < *(uint *)(pcVar6 + 0x20);
            if (bVar7) {
                pcVar3 = *(char **)(pcVar6 + 0x10);
            }
            else {
                pcVar3 = *(char **)(pcVar6 + 0x18);
            }
        } while (pcVar3 != (char *)0x0);
    }
    pcVar5 = pcVar6;
    if (bVar7) {
        if (pcVar6 == *(char **)(pcVar1 + 0x10)) {
            ppcVar2 = (char **)FUN_1403d8140(param_1,local_res8,pcVar3,pcVar6,param_3);
            *param_2 = *ppcVar2;
            *(undefined *)(param_2 + 1) = 1;
            return param_2;
        }
        if ((*pcVar6 == '\0') && (*(char **)(*(longlong *)(pcVar6 + 8) + 8) == pcVar6)) {
            pcVar5 = *(char **)(pcVar6 + 0x18);
        }
        else {
            pcVar5 = *(char **)(pcVar6 + 0x10);
            if (pcVar5 == (char *)0x0) {
                pcVar5 = *(char **)(pcVar6 + 8);
                pcVar4 = pcVar5;
                if (pcVar6 == *(char **)(pcVar5 + 0x10)) {
                    do {
                        pcVar5 = *(char **)(pcVar4 + 8);
                        bVar7 = pcVar4 == *(char **)(pcVar5 + 0x10);
                        pcVar4 = pcVar5;
                    } while (bVar7);
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
    if (*(uint *)(pcVar5 + 0x20) < *param_3) {
        if (((pcVar6 == pcVar1) || (pcVar3 != (char *)0x0)) || (*param_3 < *(uint *)(pcVar6 + 0x20))) {
            pcVar3 = (char *)FUN_1403d8470(pcVar5,param_3);
            *(char **)(pcVar6 + 0x10) = pcVar3;
            pcVar1 = *(char **)(param_1 + 8);
            if (pcVar6 == pcVar1) {
                *(char **)(pcVar1 + 8) = pcVar3;
                *(char **)(*(longlong *)(param_1 + 8) + 0x18) = pcVar3;
            }
            else if (pcVar6 == *(char **)(pcVar1 + 0x10)) {
                *(char **)(pcVar1 + 0x10) = pcVar3;
            }
        }
        else {
            pcVar3 = (char *)FUN_1403d8470(pcVar5,param_3);
            *(char **)(pcVar6 + 0x18) = pcVar3;
            if (pcVar6 == *(char **)(*(longlong *)(param_1 + 8) + 0x18)) {
                *(char **)(*(longlong *)(param_1 + 8) + 0x18) = pcVar3;
            }
        }
        *(char **)(pcVar3 + 8) = pcVar6;
        *(undefined8 *)(pcVar3 + 0x10) = 0;
        *(undefined8 *)(pcVar3 + 0x18) = 0;
        FUN_1400081c0(pcVar3,*(longlong *)(param_1 + 8) + 8);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
        *param_2 = pcVar3;
        *(undefined *)(param_2 + 1) = 1;
        return param_2;
    }
    *param_2 = pcVar5;
    *(undefined *)(param_2 + 1) = 0;
    return param_2;
}



undefined8 FUN_1403d83c0(longlong param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    longlong lVar3;
    uint **ppuVar4;
    longlong local_res18;

    uVar2 = DAT_140c65968;
    lVar3 = FUN_140491c60(DAT_140c65968);
    if ((lVar3 != 0) && (ppuVar4 = (uint **)FUN_140491bd0(uVar2), ppuVar4 != (uint **)0x0)) {
        lVar3 = *(longlong *)(param_1 + 0x40);
        local_res18 = lVar3;
        lVar1 = *(longlong *)(lVar3 + 8);
        while (lVar1 != 0) {
            if (*(uint *)(lVar1 + 0x20) < **ppuVar4) {
                lVar1 = *(longlong *)(lVar1 + 0x18);
            }
            else {
                local_res18 = lVar1;
                lVar1 = *(longlong *)(lVar1 + 0x10);
            }
        }
        if ((local_res18 == lVar3) || (**ppuVar4 < *(uint *)(local_res18 + 0x20))) {
            local_res18 = lVar3;
        }
        if (local_res18 != lVar3) {
            return *(undefined8 *)(local_res18 + 0x28);
        }
    }
    return 0;
}



longlong FUN_1403d8470(undefined8 param_1,undefined4 *param_2)

{
    longlong lVar1;

    lVar1 = FUN_14018b280();
    if ((undefined4 *)(lVar1 + 0x20) != (undefined4 *)0x0) {
        *(undefined4 *)(lVar1 + 0x20) = *param_2;
        *(undefined ***)(lVar1 + 0x28) = &PTR_FUN_140b66870;
        *(undefined4 *)(lVar1 + 0x30) = param_2[4];
        *(undefined4 *)(lVar1 + 0x34) = param_2[5];
        *(undefined4 *)(lVar1 + 0x38) = param_2[6];
        *(undefined4 *)(lVar1 + 0x3c) = param_2[7];
        *(undefined4 *)(lVar1 + 0x40) = param_2[8];
        *(undefined8 *)(lVar1 + 0x48) = *(undefined8 *)(param_2 + 10);
        *(undefined ***)(lVar1 + 0x28) = &PTR_LAB_140b66868;
    }
    return lVar1;
}



undefined4 * FUN_1403d84e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
    if (param_1 != param_2) {
        do {
            if (param_3 != (undefined4 *)0x0) {
                *param_3 = *param_1;
                param_3[1] = param_1[1];
                param_3[2] = param_1[2];
                param_3[3] = param_1[3];
                param_3[4] = param_1[4];
                param_3[5] = param_1[5];
                param_3[6] = param_1[6];
                param_3[7] = param_1[7];
                param_3[8] = param_1[8];
                param_3[9] = param_1[9];
                param_3[10] = param_1[10];
                param_3[0xb] = param_1[0xb];
                param_3[0xc] = param_1[0xc];
                param_3[0xd] = param_1[0xd];
                param_3[0xe] = param_1[0xe];
                param_3[0xf] = param_1[0xf];
                param_3[0x10] = param_1[0x10];
                param_3[0x11] = param_1[0x11];
            }
            param_1 = param_1 + 0x12;
            param_3 = param_3 + 0x12;
        } while (param_1 != param_2);
    }
    return param_3;
}



undefined4 * FUN_1403d8590(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
    longlong lVar1;

    lVar1 = (param_2 - (longlong)param_1) / 0x48;
    for (; 0 < lVar1; lVar1 = lVar1 + -1) {
        *param_3 = *param_1;
        param_3[1] = param_1[1];
        param_3[2] = param_1[2];
        param_3[3] = param_1[3];
        param_3[4] = param_1[4];
        param_3[5] = param_1[5];
        param_3[6] = param_1[6];
        param_3[7] = param_1[7];
        param_3[8] = param_1[8];
        param_3[9] = param_1[9];
        param_3[10] = param_1[10];
        param_3[0xb] = param_1[0xb];
        param_3[0xc] = param_1[0xc];
        param_3[0xd] = param_1[0xd];
        param_3[0xe] = param_1[0xe];
        param_3[0xf] = param_1[0xf];
        param_3[0x10] = param_1[0x10];
        param_3[0x11] = param_1[0x11];
        param_1 = param_1 + 0x12;
        param_3 = param_3 + 0x12;
    }
    return param_3;
}



void FUN_1403d8660(undefined4 *param_1,undefined4 *param_2)

{
    if (param_1 != (undefined4 *)0x0) {
        *param_1 = *param_2;
        param_1[1] = param_2[1];
        param_1[2] = param_2[2];
        param_1[3] = param_2[3];
        param_1[4] = param_2[4];
        param_1[5] = param_2[5];
        param_1[6] = param_2[6];
        param_1[7] = param_2[7];
        param_1[8] = param_2[8];
        param_1[9] = param_2[9];
        param_1[10] = param_2[10];
        param_1[0xb] = param_2[0xb];
        param_1[0xc] = param_2[0xc];
        param_1[0xd] = param_2[0xd];
        param_1[0xe] = param_2[0xe];
        param_1[0xf] = param_2[0xf];
        param_1[0x10] = param_2[0x10];
        param_1[0x11] = param_2[0x11];
    }
    return;
}



longlong * FUN_1403d86e0(longlong *param_1,undefined8 *param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;

    lVar1 = param_2[1];
    if (lVar1 == 0) {
        puVar4 = (undefined8 *)0x0;
    }
    else {
        puVar3 = (undefined8 *)FUN_14018b280(lVar1 * 8 + 0x10,0);
        if (puVar3 == (undefined8 *)0x0) {
            puVar4 = (undefined8 *)&DAT_00000010;
        }
        else {
            puVar3[1] = lVar1;
            puVar4 = puVar3 + 2;
            *puVar3 = &PTR_LAB_140b55060;
        }
    }
    FUN_1407db590(puVar4,*param_2,lVar1 * 8);
    lVar2 = *param_1;
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    param_1[1] = lVar1;
    *param_1 = (longlong)puVar4;
    return param_1;
}



undefined8 * FUN_1403d8790(undefined8 *param_1,undefined8 *param_2)

{
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    FUN_140003500(param_1 + 2,param_2 + 2);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    param_1[5] = param_2[5];
    param_1[6] = param_2[6];
    param_1[7] = param_2[7];
    param_1[8] = param_2[8];
    param_1[9] = param_2[9];
    param_1[10] = param_2[10];
    FUN_1403d86e0(param_1 + 0xb,param_2 + 0xb);
    return param_1;
}



longlong FUN_1403d8810(longlong param_1,longlong param_2)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined8 uVar6;
    longlong lVar7;
    undefined4 *puVar8;
    longlong lVar9;
    undefined4 *puVar10;

    lVar7 = 0;
    lVar9 = lVar7;
    if (param_2 != 0) {
        lVar9 = param_2 + 8;
    }
    if (param_1 != 0) {
        lVar7 = param_1 + 8;
    }
    FUN_1403d8790(lVar7,lVar9);
    if (*(int *)(param_1 + 0x78) == 0) {
        uVar6 = FUN_14018b280(0x1b0,0);
        *(undefined4 *)(param_1 + 0x78) = 1;
        *(undefined8 *)(param_1 + 0x70) = uVar6;
    }
    puVar1 = *(undefined4 **)(param_2 + 0x70);
    puVar2 = *(undefined4 **)(param_1 + 0x70);
    if ((((uint)puVar1 | (uint)puVar2) & 0xf) != 0) {
        FUN_1407db590(puVar2,puVar1,0x1b0);
        return param_1;
    }
    lVar7 = 3;
    do {
        puVar10 = puVar1;
        puVar8 = puVar2;
        uVar3 = puVar10[1];
        uVar4 = puVar10[2];
        uVar5 = puVar10[3];
        *puVar8 = *puVar10;
        puVar8[1] = uVar3;
        puVar8[2] = uVar4;
        puVar8[3] = uVar5;
        uVar3 = puVar10[5];
        uVar4 = puVar10[6];
        uVar5 = puVar10[7];
        puVar8[4] = puVar10[4];
        puVar8[5] = uVar3;
        puVar8[6] = uVar4;
        puVar8[7] = uVar5;
        uVar3 = puVar10[9];
        uVar4 = puVar10[10];
        uVar5 = puVar10[0xb];
        puVar8[8] = puVar10[8];
        puVar8[9] = uVar3;
        puVar8[10] = uVar4;
        puVar8[0xb] = uVar5;
        uVar3 = puVar10[0xd];
        uVar4 = puVar10[0xe];
        uVar5 = puVar10[0xf];
        puVar8[0xc] = puVar10[0xc];
        puVar8[0xd] = uVar3;
        puVar8[0xe] = uVar4;
        puVar8[0xf] = uVar5;
        uVar3 = puVar10[0x11];
        uVar4 = puVar10[0x12];
        uVar5 = puVar10[0x13];
        puVar8[0x10] = puVar10[0x10];
        puVar8[0x11] = uVar3;
        puVar8[0x12] = uVar4;
        puVar8[0x13] = uVar5;
        uVar3 = puVar10[0x15];
        uVar4 = puVar10[0x16];
        uVar5 = puVar10[0x17];
        puVar8[0x14] = puVar10[0x14];
        puVar8[0x15] = uVar3;
        puVar8[0x16] = uVar4;
        puVar8[0x17] = uVar5;
        uVar3 = puVar10[0x19];
        uVar4 = puVar10[0x1a];
        uVar5 = puVar10[0x1b];
        puVar8[0x18] = puVar10[0x18];
        puVar8[0x19] = uVar3;
        puVar8[0x1a] = uVar4;
        puVar8[0x1b] = uVar5;
        uVar3 = puVar10[0x1d];
        uVar4 = puVar10[0x1e];
        uVar5 = puVar10[0x1f];
        puVar8[0x1c] = puVar10[0x1c];
        puVar8[0x1d] = uVar3;
        puVar8[0x1e] = uVar4;
        puVar8[0x1f] = uVar5;
        lVar7 = lVar7 + -1;
        puVar2 = puVar8 + 0x20;
        puVar1 = puVar10 + 0x20;
    } while (lVar7 != 0);
    uVar3 = puVar10[0x21];
    uVar4 = puVar10[0x22];
    uVar5 = puVar10[0x23];
    puVar8[0x20] = puVar10[0x20];
    puVar8[0x21] = uVar3;
    puVar8[0x22] = uVar4;
    puVar8[0x23] = uVar5;
    uVar3 = puVar10[0x25];
    uVar4 = puVar10[0x26];
    uVar5 = puVar10[0x27];
    puVar8[0x24] = puVar10[0x24];
    puVar8[0x25] = uVar3;
    puVar8[0x26] = uVar4;
    puVar8[0x27] = uVar5;
    uVar3 = puVar10[0x29];
    uVar4 = puVar10[0x2a];
    uVar5 = puVar10[0x2b];
    puVar8[0x28] = puVar10[0x28];
    puVar8[0x29] = uVar3;
    puVar8[0x2a] = uVar4;
    puVar8[0x2b] = uVar5;
    return param_1;
}



undefined8 FUN_1403d8910(undefined8 param_1,ulonglong param_2)

{
    FUN_1403d8af0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_1403d8950(longlong param_1)

{
    undefined4 *puVar1;
    undefined4 *puVar2;

    if ((*(longlong *)(param_1 + 0x40) != 0) && ((*(byte *)(param_1 + 0x80) & 2) == 0)) {
        puVar2 = (undefined4 *)FUN_14018b280();
        puVar1 = *(undefined4 **)(param_1 + 0x40);
        *puVar2 = *puVar1;
        puVar2[1] = puVar1[1];
        puVar2[2] = puVar1[2];
        puVar2[3] = puVar1[3];
        puVar2[4] = puVar1[4];
        puVar2[5] = puVar1[5];
        puVar2[6] = puVar1[6];
        puVar2[7] = puVar1[7];
        puVar2[8] = puVar1[8];
        *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 2;
        *(undefined4 **)(param_1 + 0x40) = puVar2;
    }
    return;
}



void FUN_1403d89d0(longlong param_1,ulonglong param_2)

{
    undefined4 *puVar1;
    undefined4 *puVar2;

    if ((((param_2 & 1) != 0) && (*(longlong *)(param_1 + 0x38) != 0)) &&
        ((*(byte *)(param_1 + 0x80) & 1) == 0)) {
        puVar2 = (undefined4 *)FUN_14018b280();
        puVar1 = *(undefined4 **)(param_1 + 0x38);
        *puVar2 = *puVar1;
        puVar2[1] = puVar1[1];
        puVar2[2] = puVar1[2];
        puVar2[3] = puVar1[3];
        *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 1;
        *(undefined4 **)(param_1 + 0x38) = puVar2;
    }
    if ((param_2 & 2) != 0) {
        FUN_1403d8950();
    }
    if ((((param_2 & 4) != 0) && (*(longlong *)(param_1 + 0x50) != 0)) &&
        ((*(byte *)(param_1 + 0x80) & 4) == 0)) {
        puVar2 = (undefined4 *)FUN_14018b280();
        puVar1 = *(undefined4 **)(param_1 + 0x50);
        *puVar2 = *puVar1;
        puVar2[1] = puVar1[1];
        puVar2[2] = puVar1[2];
        puVar2[3] = puVar1[3];
        *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 4;
        *(undefined4 **)(param_1 + 0x50) = puVar2;
    }
    return;
}



void FUN_1403d8a90(undefined8 *param_1)

{
    longlong lVar1;

    *param_1 = &PTR_FUN_140b667e0;
    if (*(int *)(param_1 + 0xf) != 0) {
        FUN_14018b900(param_1[0xe],0);
    }
    lVar1 = param_1[0xc];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = param_1[3];
    if (lVar1 != 0) {
        // WARNING: Could not recover jumptable at 0x0001403d8ade. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        return;
    }
    return;
}



void FUN_1403d8af0(undefined8 *param_1)

{
    longlong lVar1;

    *param_1 = &PTR_FUN_140b667d0;
    if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
        FUN_14018b900(param_1[7],0);
    }
    if ((*(byte *)(param_1 + 0x10) & 2) != 0) {
        FUN_14018b900(param_1[8],0);
    }
    if ((*(byte *)(param_1 + 0x10) & 4) != 0) {
        FUN_14018b900(param_1[10],0);
    }
    *param_1 = &PTR_FUN_140b667e0;
    if (*(int *)(param_1 + 0xf) != 0) {
        FUN_14018b900(param_1[0xe],0);
    }
    lVar1 = param_1[0xc];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = param_1[3];
    if (lVar1 != 0) {
        // WARNING: Could not recover jumptable at 0x0001403d8b84. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        return;
    }
    return;
}



longlong FUN_1403d8b90(void)

{
    if (*(longlong *)(DAT_140c65898 + 0x71a8) != 0) {
        return *(longlong *)(DAT_140c65898 + 0x71a8) + 0x160;
    }
    return *(longlong *)(DAT_140c65898 + 0x71a0) + 0x160;
}



int FUN_1403d8bc0(longlong param_1)

{
    int iVar1;

    if ((~(*(uint *)(param_1 + 0x80) >> 3) & 1) != 0) {
        iVar1 = FUN_14018cdf0();
        if (0 < *(int *)(param_1 + 0xec) - iVar1) {
            iVar1 = FUN_14018cdf0();
            return *(int *)(param_1 + 0xec) - iVar1;
        }
    }
    return 0;
}



undefined8 FUN_1403d8c10(longlong param_1)

{
    int *piVar1;
    int *piVar2;
    ulonglong uVar3;

    uVar3 = 0;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x70) + 0x198);
    piVar2 = piVar1;
    do {
        if (*piVar2 == 5) {
            return 1;
        }
        uVar3 = uVar3 + 1;
        piVar2 = piVar2 + 1;
    } while (uVar3 < 5);
    uVar3 = 0;
    piVar2 = piVar1;
    do {
        if (*piVar2 == 4) {
            return 1;
        }
        uVar3 = uVar3 + 1;
        piVar2 = piVar2 + 1;
    } while (uVar3 < 5);
    uVar3 = 0;
    piVar2 = piVar1;
    do {
        if (*piVar2 == 3) {
            return 1;
        }
        uVar3 = uVar3 + 1;
        piVar2 = piVar2 + 1;
    } while (uVar3 < 5);
    uVar3 = 0;
    do {
        if (*piVar1 == 10) {
            return 1;
        }
        uVar3 = uVar3 + 1;
        piVar1 = piVar1 + 1;
    } while (uVar3 < 5);
    return 0;
}



undefined8 FUN_1403d8c80(longlong *param_1)

{
    if ((*param_1 != 0) &&
        ((*(int *)(param_1 + 1) < 0xf ||
          ((*(int *)(param_1 + 1) == 0xf &&
            (((*(int *)(param_1 + 2) != 0 || (*(int *)((longlong)param_1 + 0xc) == 1)) ||
              (*(int *)((longlong)param_1 + 0x14) != 0)))))))) {
        return 1;
    }
    return 0;
}



undefined8 FUN_1403d8cb0(longlong *param_1)

{
    if (((*param_1 == 0) ||
         ((0xe < *(int *)(param_1 + 1) &&
           ((*(int *)(param_1 + 1) != 0xf ||
             (((*(int *)(param_1 + 2) == 0 && (*(int *)((longlong)param_1 + 0xc) != 1)) &&
               (*(int *)((longlong)param_1 + 0x14) == 0)))))))) &&
        ((param_1[3] == 0 ||
          ((0xe < *(int *)(param_1 + 4) &&
            ((*(int *)(param_1 + 4) != 0xf ||
              (((*(int *)(param_1 + 5) == 0 && (*(int *)((longlong)param_1 + 0x24) != 1)) &&
                (*(int *)((longlong)param_1 + 0x2c) == 0)))))))))) {
        return 0;
    }
    return 1;
}



undefined8 FUN_1403d8d00(longlong param_1,longlong param_2)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;
    undefined8 uVar4;
    undefined4 *puVar5;
    undefined4 local_res8 [2];

    uVar3 = (**(code **)(param_1 + 0x88))(param_2);
    for (puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x80) + (uVar3 % *(ulonglong *)(param_1 + 0x78)) * 8);
         puVar1 != (ulonglong *)0x0; puVar1 = (ulonglong *)puVar1[1]) {
        if ((uVar3 == *puVar1) && (iVar2 = (**(code **)(param_1 + 0x90))(param_2), iVar2 != 0)) {
            puVar5 = (undefined4 *)((longlong)puVar1 + 0x14);
            if (puVar5 != (undefined4 *)0x0) goto LAB_1403d8e9e;
            break;
        }
    }
    local_res8[0] = *(undefined4 *)(param_2 + 0x144);
    uVar3 = (**(code **)(param_1 + 0xd8))(local_res8);
    for (puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0xd0) + (uVar3 % *(ulonglong *)(param_1 + 200)) * 8);
         puVar1 != (ulonglong *)0x0; puVar1 = (ulonglong *)puVar1[1]) {
        if ((uVar3 == *puVar1) && (iVar2 = (**(code **)(param_1 + 0xe0))(local_res8), iVar2 != 0)) {
            puVar5 = (undefined4 *)((longlong)puVar1 + 0x14);
            if (puVar5 != (undefined4 *)0x0) goto LAB_1403d8e9e;
            break;
        }
    }
    local_res8[0] = *(undefined4 *)(param_2 + 0x148);
    uVar3 = (**(code **)(param_1 + 0x100))(local_res8);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0xf8) + (uVar3 % *(ulonglong *)(param_1 + 0xf0)) * 8);
    do {
        if (puVar1 == (ulonglong *)0x0) {
            LAB_1403d8e29:
            local_res8[0] = *(undefined4 *)(param_2 + 0x140);
            uVar3 = (**(code **)(param_1 + 0x128))(local_res8);
            puVar1 = *(ulonglong **)
                    (*(longlong *)(param_1 + 0x120) + (uVar3 % *(ulonglong *)(param_1 + 0x118)) * 8);
            while( true ) {
                if (puVar1 == (ulonglong *)0x0) {
                    return 0;
                }
                if ((uVar3 == *puVar1) &&
                    (iVar2 = (**(code **)(param_1 + 0x130))(local_res8,puVar1 + 2), iVar2 != 0)) break;
                puVar1 = (ulonglong *)puVar1[1];
            }
            puVar5 = (undefined4 *)((longlong)puVar1 + 0x14);
            if (puVar5 == (undefined4 *)0x0) {
                return 0;
            }
            LAB_1403d8e9e:
            uVar4 = FUN_1402116c0(*puVar5);
            return uVar4;
        }
        if ((uVar3 == *puVar1) && (iVar2 = (**(code **)(param_1 + 0x108))(local_res8), iVar2 != 0)) {
            puVar5 = (undefined4 *)((longlong)puVar1 + 0x14);
            if (puVar5 != (undefined4 *)0x0) goto LAB_1403d8e9e;
            goto LAB_1403d8e29;
        }
        puVar1 = (ulonglong *)puVar1[1];
    } while( true );
}



undefined8 FUN_1403d8eb0(longlong param_1,longlong param_2)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;
    undefined8 uVar4;
    undefined4 local_res10 [2];

    if (param_2 == 0) {
        return 0;
    }
    uVar3 = (**(code **)(param_1 + 0xb0))(param_2);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0xa8) + (uVar3 % *(ulonglong *)(param_1 + 0xa0)) * 8);
    do {
        if (puVar1 == (ulonglong *)0x0) {
            LAB_1403d8f20:
            iVar2 = FUN_1400bd540(param_1 + 0xc0,param_2 + 0x10,local_res10);
            if (iVar2 == 0) {
                uVar4 = 0;
            }
            else {
                LAB_1403d8f4b:
                uVar4 = FUN_1402116c0(local_res10[0]);
            }
            return uVar4;
        }
        if ((uVar3 == *puVar1) &&
            (iVar2 = (**(code **)(param_1 + 0xb8))(param_2,puVar1 + 2), iVar2 != 0)) {
            if ((undefined4 *)((longlong)puVar1 + 0x14) != (undefined4 *)0x0) {
                local_res10[0] = *(undefined4 *)((longlong)puVar1 + 0x14);
                goto LAB_1403d8f4b;
            }
            goto LAB_1403d8f20;
        }
        puVar1 = (ulonglong *)puVar1[1];
    } while( true );
}



undefined8 FUN_1403d8f70(longlong param_1,undefined4 param_2)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;
    undefined8 uVar4;
    undefined4 local_res10 [2];

    local_res10[0] = param_2;
    uVar3 = (**(code **)(param_1 + 0x150))(local_res10);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x148) + (uVar3 % *(ulonglong *)(param_1 + 0x140)) * 8);
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar3 == *puVar1) &&
            (iVar2 = (**(code **)(param_1 + 0x158))(local_res10,puVar1 + 2), iVar2 != 0)) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    if ((undefined4 *)((longlong)puVar1 + 0x14) == (undefined4 *)0x0) {
        return 0;
    }
    uVar4 = FUN_1402116c0(*(undefined4 *)((longlong)puVar1 + 0x14));
    return uVar4;
}



void FUN_1403d9000(longlong param_1)

{
    ulonglong uVar1;
    longlong lVar2;
    longlong *plVar3;
    ulonglong uVar4;

    uVar1 = *(ulonglong *)(param_1 + 0x7db8);
    if (*(longlong *)(param_1 + 0x78) != 0) {
        lVar2 = 0xc5;
        plVar3 = (longlong *)(*(longlong *)(param_1 + 0x78) + 0x5c0);
        do {
            uVar1 = uVar1 * 0xaa7f8ea9 + *plVar3;
            lVar2 = lVar2 + -1;
            plVar3 = plVar3 + 1;
        } while (lVar2 != 0);
    }
    if (((*(ulonglong *)(param_1 + 0x7db0) != uVar1) && (uVar1 != 0)) &&
        (*(ulonglong *)(param_1 + 0x7db0) != 0)) {
        if ((DAT_140c8a75c & 1) == 0) {
            DAT_140c8a75c = DAT_140c8a75c | 1;
            DAT_140c8a760 = 0x141cccf9c;
        }
        uVar4 = (ulonglong)*(uint *)(DAT_140c8a760 + -0x12fa640) ^ *(ulonglong *)(param_1 + 0x7db0);
        *(ulonglong *)(param_1 + 0x7dc8) = uVar4;
        *(ulonglong *)(param_1 + 0x7dc0) = uVar4 ^ uVar1;
    }
    return;
}



ulonglong FUN_1403d90d0(longlong param_1,undefined4 param_2)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;
    undefined4 local_res10 [2];

    local_res10[0] = param_2;
    uVar3 = (**(code **)(param_1 + 0x6f20))(local_res10);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x6f18) + (uVar3 % *(ulonglong *)(param_1 + 0x6f10)) * 8);
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar3 == *puVar1) &&
            (iVar2 = (**(code **)(param_1 + 0x6f28))(local_res10,puVar1 + 2), iVar2 != 0)) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    if (puVar1 + 3 == (ulonglong *)0x0) {
        return 0;
    }
    return puVar1[3];
}



undefined8 FUN_1403d9160(undefined8 param_1,undefined8 param_2)

{
    ulonglong uVar1;
    longlong lVar2;
    undefined2 *puVar3;
    longlong lVar4;
    int iVar5;
    undefined2 *puVar6;
    ulonglong uVar7;
    longlong *plVar8;

    uVar7 = 0;
    uVar1 = *(ulonglong *)(DAT_140c65898 + 0x6f10);
    if (uVar1 != 0) {
        plVar8 = *(longlong **)(DAT_140c65898 + 0x6f18);
        do {
            lVar2 = *plVar8;
            while (lVar4 = lVar2, lVar4 != 0) {
                lVar2 = *(longlong *)(lVar4 + 8);
                puVar3 = *(undefined2 **)(*(longlong *)(lVar4 + 0x18) + 0x10);
                puVar6 = &DAT_140b7b704;
                if (puVar3 != (undefined2 *)0x0) {
                    puVar6 = puVar3;
                }
                iVar5 = FUN_14018e2c0(puVar6,param_2);
                if (iVar5 == 0) {
                    return *(undefined8 *)(lVar4 + 0x18);
                }
            }
            uVar7 = uVar7 + 1;
            plVar8 = plVar8 + 1;
        } while (uVar7 < uVar1);
    }
    return 0;
}



ulonglong FUN_1403d9200(void)

{
    longlong lVar1;
    ulonglong *puVar2;
    undefined2 *puVar3;
    longlong lVar4;
    longlong lVar5;
    int iVar6;
    ulonglong uVar7;
    longlong lVar8;
    undefined2 *puVar9;
    longlong lVar10;

    lVar5 = DAT_140c65898;
    lVar1 = *(longlong *)(DAT_140c65898 + 0x6f60);
    lVar10 = *(longlong *)(lVar1 + 0x10);
    do {
        if (lVar10 == lVar1) {
            return 0;
        }
        uVar7 = (**(code **)(lVar5 + 0x6f20))(lVar10 + 0x30);
        for (puVar2 = *(ulonglong **)
                (*(longlong *)(lVar5 + 0x6f18) + (uVar7 % *(ulonglong *)(lVar5 + 0x6f10)) * 8);
             puVar2 != (ulonglong *)0x0; puVar2 = (ulonglong *)puVar2[1]) {
            if ((uVar7 == *puVar2) && (iVar6 = (**(code **)(lVar5 + 0x6f28))(lVar10 + 0x30), iVar6 != 0))
            {
                if (puVar2 + 3 != (ulonglong *)0x0) {
                    uVar7 = puVar2[3];
                    puVar3 = *(undefined2 **)(uVar7 + 0x10);
                    puVar9 = &DAT_140b7b704;
                    if (puVar3 != (undefined2 *)0x0) {
                        puVar9 = puVar3;
                    }
                    iVar6 = FUN_14018e2c0(puVar9);
                    if (iVar6 == 0) {
                        return uVar7;
                    }
                }
                break;
            }
        }
        lVar8 = *(longlong *)(lVar10 + 0x18);
        if (lVar8 == 0) {
            lVar8 = *(longlong *)(lVar10 + 8);
            if (lVar10 == *(longlong *)(lVar8 + 0x18)) {
                do {
                    lVar10 = lVar8;
                    lVar8 = *(longlong *)(lVar10 + 8);
                } while (lVar10 == *(longlong *)(lVar8 + 0x18));
            }
            if (*(longlong *)(lVar10 + 0x18) != lVar8) {
                lVar10 = lVar8;
            }
        }
        else {
            for (lVar4 = *(longlong *)(lVar8 + 0x10); lVar10 = lVar8, lVar4 != 0;
                 lVar4 = *(longlong *)(lVar4 + 0x10)) {
                lVar8 = lVar4;
            }
        }
    } while( true );
}



undefined8 FUN_1403d9340(longlong param_1,longlong param_2)

{
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    uint uVar5;
    longlong local_res8;
    longlong local_res10;
    undefined8 local_38;
    ulonglong local_30;
    undefined8 local_28;
    ulonglong local_20;
    undefined4 local_18;

    lVar3 = DAT_140c65898;
    if ((*(int *)(param_2 + 0x80) != 0x14) ||
        (uVar1 = *(uint *)(param_2 + 8), (uVar1 & 0xc0000000) != 0)) {
        return 1;
    }
    local_38 = *(undefined8 *)(param_2 + 0x1a0);
    local_30 = *(ulonglong *)(param_2 + 0x1a8);
    uVar5 = (uint)local_38;
    if ((uVar5 != 0) && (local_30 != 0)) {
        lVar4 = *(longlong *)(DAT_140c65898 + 0x6f60);
        local_res8 = lVar4;
        lVar2 = *(longlong *)(lVar4 + 8);
        while (lVar2 != 0) {
            if ((*(uint *)(lVar2 + 0x20) < uVar5) ||
                ((*(uint *)(lVar2 + 0x20) <= uVar5 && (*(ulonglong *)(lVar2 + 0x28) < local_30)))) {
                lVar2 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                local_res8 = lVar2;
                lVar2 = *(longlong *)(lVar2 + 0x10);
            }
        }
        if (((local_res8 == lVar4) || (uVar5 < *(uint *)(local_res8 + 0x20))) ||
            ((lVar4 = local_res8, lVar2 = param_1, uVar5 <= *(uint *)(local_res8 + 0x20) &&
                                                   (lVar2 = param_1, local_30 < *(ulonglong *)(local_res8 + 0x28))))) {
            local_18 = 0;
            local_28 = local_38;
            local_20 = local_30;
            FUN_1403df7e0(DAT_140c65898 + 0x6f58,&local_res10,&local_res8,&local_28);
            lVar4 = local_res10;
            lVar2 = local_res8;
        }
        local_res8 = lVar2;
        *(uint *)(lVar4 + 0x30) = uVar1;
        FUN_1405fe1c0(*(undefined8 *)(lVar3 + 0x7d90),&local_38);
        return 0;
    }
    return 0x80004005;
}



undefined8 FUN_1403d9480(undefined8 param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 local_18;
    longlong local_10;

    lVar1 = DAT_140c65898;
    if ((*(int *)(param_2 + 0x80) != 0x14) || ((*(uint *)(param_2 + 8) & 0xc0000000) != 0)) {
        return 1;
    }
    local_18 = *(undefined8 *)(param_2 + 0x1a0);
    local_10 = *(longlong *)(param_2 + 0x1a8);
    if (((int)local_18 != 0) && (local_10 != 0)) {
        FUN_1403df940(DAT_140c65898 + 0x6f58,&local_18);
        FUN_1405fe1c0(*(undefined8 *)(lVar1 + 0x7d90),&local_18);
        return 0;
    }
    return 0x80004005;
}



undefined4 FUN_1403d9500(longlong param_1,uint *param_2)

{
    uint uVar1;
    ulonglong uVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong local_res10;

    uVar1 = *param_2;
    if ((uVar1 != 0) && (uVar2 = *(ulonglong *)(param_2 + 2), uVar2 != 0)) {
        lVar3 = *(longlong *)(param_1 + 0x6f60);
        lVar5 = lVar3;
        lVar4 = *(longlong *)(lVar3 + 8);
        while (lVar4 != 0) {
            if ((*(uint *)(lVar4 + 0x20) < uVar1) ||
                ((*(uint *)(lVar4 + 0x20) <= uVar1 && (*(ulonglong *)(lVar4 + 0x28) < uVar2)))) {
                lVar4 = *(longlong *)(lVar4 + 0x18);
            }
            else {
                lVar5 = lVar4;
                lVar4 = *(longlong *)(lVar4 + 0x10);
            }
        }
        local_res10 = lVar3;
        if (((lVar5 != lVar3) && (*(uint *)(lVar5 + 0x20) <= uVar1)) &&
            ((*(uint *)(lVar5 + 0x20) < uVar1 || (*(ulonglong *)(lVar5 + 0x28) <= uVar2)))) {
            local_res10 = lVar5;
        }
        if (local_res10 != lVar3) {
            return *(undefined4 *)(local_res10 + 0x30);
        }
    }
    return 0;
}



undefined8 FUN_1403d9590(longlong param_1,undefined8 *param_2)

{
    ulonglong *puVar1;
    int iVar2;
    longlong lVar3;
    undefined8 uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    ulonglong **ppuVar7;
    undefined4 local_res10 [2];

    if (param_2 != (undefined8 *)0x0) {
        local_res10[0] = *(undefined4 *)(param_2 + 1);
        FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x7340),"UnitDestroyed",&DAT_1409eddfc);
        lVar3 = DAT_140c65b88;
        if ((DAT_140c65b88 == 0) && (lVar3 = FUN_14018b280(0x48,0), lVar3 != 0)) {
            lVar3 = FUN_1405b92d0(lVar3);
        }
        DAT_140c65b88 = lVar3;
        FUN_1405bc270(DAT_140c65b88,param_2);
        FUN_1403dea10(param_1);
        if ((*(longlong *)(param_1 + 0x78) != 0) &&
            (*(int *)(*(longlong *)(param_1 + 0x78) + 0x108) == *(int *)(param_2 + 1))) {
            FUN_14055b0e0(param_1);
        }
        if (param_2 == *(undefined8 **)(param_1 + 0x78)) {
            FUN_1403a0c50(param_1);
            FUN_14045dd00(*(undefined8 *)(param_1 + 0x78));
            *(undefined8 *)(param_1 + 0x78) = 0;
            FUN_1403b55e0(param_1);
        }
        if (param_2 == *(undefined8 **)(param_1 + 0x6490)) {
            *(undefined8 *)(param_1 + 0x6490) = *(undefined8 *)(param_1 + 0x78);
        }
        if ((*(int *)(param_2 + 0x10) == 0xf) && (uVar4 = FUN_1403dd120(param_1), (int)uVar4 < 0)) {
            return uVar4;
        }
        uVar5 = (**(code **)(param_1 + 0x6f20))(local_res10);
        uVar6 = uVar5 % *(ulonglong *)(param_1 + 0x6f10);
        ppuVar7 = (ulonglong **)(*(longlong *)(param_1 + 0x6f18) + uVar6 * 8);
        puVar1 = *(ulonglong **)(*(longlong *)(param_1 + 0x6f18) + uVar6 * 8);
        while (puVar1 != (ulonglong *)0x0) {
            if ((uVar5 == **ppuVar7) &&
                (iVar2 = (**(code **)(param_1 + 0x6f28))(local_res10,*ppuVar7 + 2), iVar2 != 0)) {
                puVar1 = *ppuVar7;
                *ppuVar7 = (ulonglong *)puVar1[1];
                FUN_14018b900(puVar1,0);
                *(longlong *)(param_1 + 0x6f08) = *(longlong *)(param_1 + 0x6f08) + -1;
                break;
            }
            ppuVar7 = (ulonglong **)(*ppuVar7 + 1);
            puVar1 = *ppuVar7;
        }
        if ((undefined8 *)param_2[0xb] != (undefined8 *)0x0) {
            *(undefined8 *)param_2[0xb] = param_2[0xc];
        }
        if (param_2[0xc] != 0) {
            *(undefined8 *)(param_2[0xc] + 0x58) = param_2[0xb];
        }
        param_2[0xb] = 0;
        param_2[0xc] = 0;
        FUN_140608900(*(undefined8 *)(param_1 + 0x73f8),local_res10[0]);
        (**(code **)*param_2)(param_2,1);
    }
    return 0;
}



int FUN_1403d9760(longlong param_1,uint *param_2)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    undefined8 *puVar4;
    longlong lVar5;
    longlong lVar6;
    longlong local_res10;

    lVar3 = FUN_1403d90d0(param_1,*param_2);
    if (lVar3 == 0) {
        lVar3 = FUN_14018b280(0x37b0,0);
        puVar4 = (undefined8 *)0x0;
        if (lVar3 != 0) {
            puVar4 = (undefined8 *)FUN_140454380(lVar3);
        }
        iVar2 = FUN_140456960(puVar4,param_2);
        if (iVar2 < 0) {
            if (puVar4 != (undefined8 *)0x0) {
                (**(code **)*puVar4)(puVar4,1);
            }
        }
        else {
            lVar3 = DAT_140c65898;
            if (*(uint *)(DAT_140c65898 + 0x6480) == *param_2) {
                if (*(longlong *)(param_1 + 0x6490) != 0) {
                    *(undefined4 *)(*(longlong *)(param_1 + 0x6490) + 0xd50) = 0;
                }
                FUN_1403968b0();
                lVar3 = DAT_140c65898;
                *(undefined4 *)(DAT_140c65898 + 0x6480) = 0;
                *(undefined4 *)((longlong)puVar4 + 0xd54) = 1;
                if ((*(int *)((longlong)puVar4 + 0xdf4) != 1) && (*(int *)(puVar4 + 0x1aa) == 0)) {
                    FUN_14057a450();
                    lVar3 = DAT_140c65898;
                }
            }
            if (*(longlong *)(param_1 + 0x67c8) != 0) {
                lVar1 = *(longlong *)(param_1 + 0x67c0);
                local_res10 = lVar1;
                if (*(longlong *)(lVar1 + 8) != 0) {
                    lVar5 = *(longlong *)(lVar1 + 8);
                    do {
                        if (*(uint *)(lVar5 + 0x20) < *param_2) {
                            lVar6 = *(longlong *)(lVar5 + 0x18);
                        }
                        else {
                            lVar6 = *(longlong *)(lVar5 + 0x10);
                            local_res10 = lVar5;
                        }
                        lVar5 = lVar6;
                    } while (lVar6 != 0);
                }
                if ((local_res10 == lVar1) || (*param_2 < *(uint *)(local_res10 + 0x20))) {
                    local_res10 = lVar1;
                }
                lVar5 = local_res10;
                if (local_res10 != lVar1) {
                    FUN_1403dc1e0(lVar3,local_res10 + 0x24);
                    local_res10 = lVar5;
                    FUN_1403df5e0(param_1 + 0x67b8,&local_res10);
                }
            }
            FUN_1404ca550();
            iVar2 = 0;
        }
        return iVar2;
    }
    return 0;
}



void FUN_1403d98f0(undefined8 param_1,undefined4 *param_2)

{
    longlong lVar1;

    lVar1 = FUN_1403d90d0(param_1,*param_2);
    if (lVar1 == 0) {
        return;
    }
    if ((*(int *)(lVar1 + 0x80) == 1) && (param_2[1] != 0)) {
        *(undefined4 *)(lVar1 + 0x1350) = 1;
    }
    FUN_1403d9590(param_1,lVar1);
    return;
}



undefined8 FUN_1403d9950(longlong param_1,uint *param_2)

{
    longlong lVar1;
    longlong lVar2;
    uint uVar3;
    bool bVar4;
    float fVar5;

    if ((*(longlong *)(param_1 + 0x78) != 0) && (uVar3 = 0, *param_2 != 0)) {
        fVar5 = 0.0;
        do {
            lVar1 = *(longlong *)(param_1 + 0x78);
            lVar2 = (ulonglong)uVar3 * 0x10 + *(longlong *)(param_2 + 2);
            if (lVar2 == 0) {
                return 0;
            }
            if (*(int *)(lVar2 + 4) == 0) {
                return 0;
            }
            if (lVar1 == 0) {
                LAB_1403d99ef:
                lVar1 = FUN_1407a0fd0(DAT_140c65b70);
                if (lVar1 == 0) {
                    return 0;
                }
            }
            else {
                if (*(longlong *)(DAT_140c65898 + 0x78) == lVar1) {
                    bVar4 = true;
                }
                else {
                    bVar4 = *(longlong *)(DAT_140c65898 + 0x6490) == lVar1;
                }
                lVar1 = 0;
                if (bVar4) {
                    lVar1 = DAT_140c65898;
                }
                if ((lVar1 == 0) || (lVar1 = FUN_1405a5b90(lVar1), lVar1 == 0)) goto LAB_1403d99ef;
            }
            if ((float)(ulonglong)*(uint *)(lVar2 + 0xc) <= fVar5) {
                return 0;
            }
            FUN_14046a3d0();
            uVar3 = uVar3 + 1;
        } while (uVar3 < *param_2);
    }
    return 0;
}



undefined8 FUN_1403da270(longlong param_1,undefined4 *param_2)

{
    longlong *plVar1;

    plVar1 = (longlong *)FUN_1403d90d0(param_1,*param_2);
    if ((plVar1 != (longlong *)0x0) &&
        ((*(longlong *)(param_1 + 0x78) == 0 ||
          (*(int *)(plVar1 + 1) != *(int *)(*(longlong *)(param_1 + 0x78) + 8))))) {
        (**(code **)(*plVar1 + 0x50))(plVar1,param_2[1]);
        if ((param_2[2] != 0) && (param_2[1] == 0)) {
            FUN_14045ec90(plVar1,1);
        }
        FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x7340),"RefreshHealthShieldBar",&DAT_1409d08f2);
    }
    return 0;
}



undefined8 FUN_1403da300(longlong param_1)

{
    longlong lVar1;

    if (*(longlong *)(param_1 + 0x78) != 0) {
        lVar1 = FUN_14039def0();
        if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0xb8) != 0)) &&
            (*(int *)(*(longlong *)(lVar1 + 0xb8) + 0x68) != 0)) {
            (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x78) + 0x1588) + 0x10))();
        }
    }
    return 0;
}



undefined8 FUN_1403da5c0(undefined8 param_1,undefined4 *param_2)

{
    longlong lVar1;
    undefined local_28 [8];
    longlong local_20;
    undefined8 local_18;
    undefined8 local_10;

    lVar1 = FUN_1403d90d0(param_1,*param_2);
    if (lVar1 != 0) {
        local_20 = 0;
        local_18 = 0;
        local_10 = 0;
        FUN_140020590(local_28,*(longlong *)(param_2 + 2),
                      *(longlong *)(param_2 + 2) + (ulonglong)(uint)param_2[1] * 4);
        *(undefined4 *)(lVar1 + 0xf4) = 1;
        FUN_14004edb0(lVar1 + 0xd28,local_28);
        if (local_20 != 0) {
            FUN_14018b900(local_20,0);
        }
    }
    return 0;
}



void FUN_1403da640(longlong param_1)

{
    longlong *plVar1;
    longlong *plVar2;
    int iVar3;
    undefined4 uVar4;
    undefined8 *puVar5;
    longlong lVar6;
    uint uVar7;
    undefined8 *puVar8;
    undefined8 *puVar9;
    ulonglong uVar10;

    puVar5 = (undefined8 *)FUN_14018b280(0x100);
    puVar8 = (undefined8 *)0x0;
    puVar9 = puVar8;
    if (puVar5 != (undefined8 *)0x0) {
        FUN_1407e4830(puVar5,0,0xd0);
        FUN_1407e4830(puVar5,0,0x100);
        puVar9 = puVar5;
    }
    FUN_1407e4830();
    *(undefined4 *)(puVar9 + 0x1a) = *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 8);
    *puVar9 = 0;
    *(undefined4 *)((longlong)puVar9 + 0xd4) = 0;
    puVar9[0x13] = L"Art\\FX\\Placeholder\\IM_TS_Loot.m3";
    *(undefined4 *)((longlong)puVar9 + 0xdc) = 0xe;
    *(undefined4 *)(puVar9 + 0x18) = 0x96;
    uVar4 = FUN_1400518a0();
    *(undefined4 *)((longlong)puVar9 + 0x54) = uVar4;
    iVar3 = *(int *)(puVar9 + 0x1a);
    uVar10 = 0;
    FUN_1400035b0();
    if (((iVar3 == 0) || (lVar6 = FUN_1403d90d0(), lVar6 == 0)) ||
        (*(longlong *)(lVar6 + 0x16e8) != 0)) {
        FUN_1400035b0();
        uVar7 = DAT_140c8af30 + 1 & 0x3fffffff;
        if ((uVar7 == 0) || (DAT_140c8af30 = uVar7, uVar7 == 0x3fffffff)) {
            DAT_140c8af30 = 1;
        }
        FUN_140576bf0(uVar7,puVar9);
        FUN_14018b900(puVar9,0);
    }
    else {
        puVar5 = (undefined8 *)FUN_14018b280(0x40);
        if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = puVar9;
            *(undefined4 *)(puVar5 + 1) = 0;
            *(undefined4 *)((longlong)puVar5 + 0xc) = 5;
            puVar5[2] = 0;
            puVar5[3] = 0;
            puVar5[4] = 0;
            puVar5[5] = 0;
            puVar5[6] = 0;
            puVar5[7] = 0;
            puVar8 = puVar5;
        }
        plVar2 = (longlong *)(lVar6 + 0x5b8);
        if (puVar8[2] == 0) {
            puVar8[2] = plVar2;
            plVar1 = puVar8 + 3;
            *plVar1 = *plVar2;
            *plVar2 = (longlong)puVar8;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 0x10) = plVar1;
            }
        }
        FUN_1400035b0(0x4b,3,0,iVar3,*(undefined4 *)(puVar9 + 5),uVar10 & 0xffffffff00000000,0,0);
    }
    return;
}



int FUN_1403da850(undefined8 param_1,int param_2,undefined4 param_3,uint param_4)

{
    longlong lVar1;
    uint *puVar2;
    longlong lVar3;
    int iVar4;
    int iVar5;

    iVar4 = 0x4468;
    if (param_2 == 0) {
        lVar1 = FUN_1400b5df0(DAT_140c658f0,param_3,0);
        iVar4 = 0x4468;
        if (lVar1 == 0) goto LAB_1403da9a1;
        lVar1 = FUN_1403d8d00(DAT_140c658f0,lVar1);
    }
    else if (param_2 == 6) {
        lVar1 = FUN_140248ac0(param_3);
        if (lVar1 == 0) goto LAB_1403da9a1;
        lVar1 = FUN_1403d8eb0(DAT_140c658f0,lVar1);
    }
    else {
        if (param_2 == 7) {
            lVar1 = FUN_140211b00(param_3);
            if (lVar1 != 0) {
                iVar4 = *(int *)(lVar1 + 0xc);
            }
            goto LAB_1403da9a1;
        }
        if (param_2 == 2) {
            iVar4 = 3;
            puVar2 = &DAT_140af6b24;
            do {
                if (*puVar2 <= param_4) {
                    return *(int *)(&DAT_140c58bc8 + (longlong)iVar4 * 4);
                }
                puVar2 = puVar2 + -1;
                iVar4 = iVar4 + -1;
            } while (0x140af6b17 < (longlong)puVar2);
            return 0x4d76;
        }
        if (param_2 == 8) {
            lVar1 = FUN_1401e8c20(param_3);
            if (lVar1 == 0) goto LAB_1403da9a1;
            lVar3 = FUN_1400b5df0(DAT_140c658f0,*(undefined4 *)(lVar1 + 8),0);
            if (lVar3 == 0) {
                if (*(int *)(lVar1 + 0x1c) != 0) {
                    iVar4 = 0x4d76;
                }
                goto LAB_1403da9a1;
            }
            lVar1 = FUN_1403d8d00(DAT_140c658f0,lVar3);
        }
        else {
            if (param_2 != 9) goto LAB_1403da9a1;
            lVar1 = FUN_1403d8f70(DAT_140c658f0,param_3);
        }
    }
    if (lVar1 == 0) {
        iVar4 = 0;
    }
    else {
        iVar4 = *(int *)(lVar1 + 0x1c);
    }
    LAB_1403da9a1:
    iVar5 = 0x4468;
    if (iVar4 != 0) {
        iVar5 = iVar4;
    }
    return iVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1403da9c0(undefined8 param_1,int param_2,int param_3,undefined4 *param_4,int param_5)

{
    char cVar1;
    short sVar5;
    short sVar6;
    short sVar7;
    short sVar8;
    ulonglong uVar9;
    unkbyte10 Var10;
    undefined auVar11 [12];
    undefined auVar12 [14];
    short sVar13;
    undefined6 uVar14;
    ulonglong uVar15;
    longlong lVar16;
    int iVar17;
    uint uVar19;
    int iVar20;
    undefined extraout_XMM0 [16];
    undefined auVar18 [16];
    int iVar21;
    char cVar22;
    char cVar23;
    undefined4 in_XMM6_Da;
    undefined4 uVar24;
    undefined4 in_XMM6_Db;
    undefined4 uVar25;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined4 uVar26;
    undefined4 uStack28;
    char cVar2;
    char cVar3;
    char cVar4;

    if ((DAT_140dc235c & 1) == 0) {
        DAT_140dc235c = DAT_140dc235c | 1;
        _DAT_140dc2360 = 0x3f000000;
        uRam0000000140dc2364 = 0x3f000000;
        uRam0000000140dc2368 = 0;
        uRam0000000140dc236c = 0x3f800000;
    }
    uVar24 = 0x3ec9ba5e;
    uVar25 = 0x3ec9ba5e;
    uVar19 = 0x3ec9ba5e;
    uVar26 = 0x3f800000;
    uStack28 = 0x3f800000;
    if (param_5 == 8) {
        if (param_2 == 6) {
            lVar16 = FUN_140248ac0(param_3);
            if ((lVar16 != 0) && (*(int *)(lVar16 + 0x1c) != 0)) {
                param_5 = *(int *)(lVar16 + 0x1c);
            }
            uStack28 = uRam0000000140dc236c;
            uVar24 = _DAT_140dc2360;
            uVar25 = uRam0000000140dc2364;
            uVar19 = uRam0000000140dc2368;
            uVar26 = uRam0000000140dc236c;
        }
        else {
            if (param_2 == 0) {
                lVar16 = FUN_1400b5df0(DAT_140c658f0,param_3,0,param_4,0x3ec9ba5e,0x3ec9ba5e,
                                       CONCAT412(in_XMM6_Dd,
                                                 CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da))));
                if (lVar16 == 0) goto LAB_1403daab5;
                if (*(int *)(lVar16 + 0x140) == 0x18) {
                    uStack28 = uRam0000000140dc236c;
                    uVar24 = _DAT_140dc2360;
                    uVar25 = uRam0000000140dc2364;
                    uVar19 = uRam0000000140dc2368;
                    uVar26 = uRam0000000140dc236c;
                    goto LAB_1403daab5;
                }
            }
            else {
                if (param_2 != 8) {
                    if (param_2 == 9) {
                        if (param_3 == 6) {
                            param_5 = 7;
                        }
                        else {
                            param_5 = 4;
                            if (param_3 != 9) {
                                param_5 = 0;
                            }
                        }
                    }
                    goto LAB_1403daab5;
                }
                lVar16 = FUN_1401e8c20(param_3);
                if ((lVar16 == 0) ||
                    (lVar16 = FUN_1400b5df0(DAT_140c658f0,*(undefined4 *)(lVar16 + 8),0), lVar16 == 0))
                    goto LAB_1403daab5;
            }
            param_5 = *(int *)(lVar16 + 0x158);
        }
    }
    LAB_1403daab5:
    lVar16 = FUN_14020ce20(param_5);
    auVar18 = extraout_XMM0;
    if (lVar16 != 0) {
        uVar24 = *(undefined4 *)(lVar16 + 0x18);
        uVar25 = *(undefined4 *)(lVar16 + 0x1c);
        uVar19 = *(uint *)(lVar16 + 0x20);
        auVar18 = ZEXT416(uVar19) & (undefined  [16])0xffffffff;
        uVar26 = uStack28;
    }
    *param_4 = 3;
    param_4[1] = 0x38;
    auVar18 = maxps(auVar18 & (undefined  [16])0x0,
                    CONCAT412(uVar26,CONCAT48(uVar19,CONCAT44(uVar25,uVar24))));
    auVar18 = minps(auVar18,_DAT_140b7b240);
    iVar17 = (int)(SUB164(auVar18,0) * 255.0 + 0.5);
    uVar19 = (uint)(SUB164(auVar18 >> 0x20,0) * 255.0 + 0.5);
    iVar20 = (int)(SUB164(auVar18 >> 0x40,0) * 255.0 + 0.5);
    iVar21 = (int)(SUB164(auVar18 >> 0x60,0) * 255.0 + 0.5);
    cVar22 = (char)((uint)iVar17 >> 0x10);
    cVar23 = (char)((uint)iVar21 >> 0x10);
    uVar15 = (ulonglong)
            CONCAT16((char)(uVar19 >> 0x10),
                     CONCAT15((char)(uVar19 >> 8),CONCAT14((char)uVar19,iVar20)));
    uVar9 = ((ulonglong)uVar19 & 0xff000000) << 0x20 | uVar15;
    Var10 = CONCAT19((char)((uint)iVar17 >> 8),CONCAT18((char)iVar17,uVar9));
    auVar11 = CONCAT111((char)((uint)iVar17 >> 0x18),CONCAT110(cVar22,Var10));
    auVar12 = CONCAT113((char)((uint)iVar21 >> 8),CONCAT112((char)iVar21,auVar11));
    sVar5 = (short)iVar20;
    cVar1 = (0 < sVar5) * (sVar5 < 0xff) * (char)iVar20 - (0xff < sVar5);
    sVar5 = (short)(uVar15 >> 0x10);
    sVar6 = (short)(uVar15 >> 0x20);
    cVar2 = (0 < sVar6) * (sVar6 < 0xff) * (char)(uVar15 >> 0x20) - (0xff < sVar6);
    sVar6 = (short)(uVar9 >> 0x30);
    sVar7 = (short)((unkuint10)Var10 >> 0x40);
    cVar3 = (0 < sVar7) * (sVar7 < 0xff) * (char)iVar17 - (0xff < sVar7);
    sVar7 = SUB122(auVar11 >> 0x50,0);
    sVar8 = SUB142(auVar12 >> 0x60,0);
    cVar4 = (0 < sVar8) * (sVar8 < 0xff) * (char)iVar21 - (0xff < sVar8);
    sVar8 = SUB162(CONCAT115((char)((uint)iVar21 >> 0x18),CONCAT114(cVar23,auVar12)) >> 0x70,0);
    sVar13 = CONCAT11((0 < sVar5) * (sVar5 < 0xff) * (char)(uVar15 >> 0x10) - (0xff < sVar5),cVar1);
    uVar24 = CONCAT13((0 < sVar6) * (sVar6 < 0xff) * (char)(uVar15 >> 0x30) - (0xff < sVar6),
                      CONCAT12(cVar2,sVar13));
    uVar14 = CONCAT15((0 < sVar7) * (sVar7 < 0xff) * cVar22 - (0xff < sVar7),CONCAT14(cVar3,uVar24));
    sVar5 = (short)((uint)uVar24 >> 0x10);
    sVar6 = (short)((uint6)uVar14 >> 0x20);
    sVar7 = (short)(CONCAT17((0 < sVar8) * (sVar8 < 0xff) * cVar23 - (0xff < sVar8),
                             CONCAT16(cVar4,uVar14)) >> 0x30);
    param_4[2] = CONCAT13((0 < sVar7) * (sVar7 < 0xff) * cVar4 - (0xff < sVar7),
                          CONCAT12((0 < sVar6) * (sVar6 < 0xff) * cVar3 - (0xff < sVar6),
                                   CONCAT11((0 < sVar5) * (sVar5 < 0xff) * cVar2 - (0xff < sVar5),
                                            (0 < sVar13) * (sVar13 < 0xff) * cVar1 - (0xff < sVar13)))
    );
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1403dab40(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,int param_5
        ,int param_6,uint param_7)

{
    int iVar1;
    ulonglong uVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;
    longlong lVar6;
    undefined8 uVar7;
    uint uVar8;
    uint uVar9;
    longlong lVar10;
    undefined8 uVar11;
    float fVar12;
    float fVar13;
    longlong *local_res10;
    undefined local_a8 [16];
    undefined4 local_98;
    undefined4 uStack148;
    undefined4 uStack144;
    undefined4 uStack140;
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

    lVar4 = DAT_140c65918;
    if (param_2 == 0) {
        return;
    }
    if (param_3 == 0) {
        return;
    }
    uVar8 = 8;
    if (param_7 != 0) {
        uVar8 = param_7 >> 0x10 & 0xff;
    }
    fVar13 = 1.0;
    lVar10 = 0;
    local_res10 = (longlong *)0x0;
    local_98 = _DAT_140c78390;
    uStack148 = uRam0000000140c78394;
    uStack144 = uRam0000000140c78398;
    uStack140 = uRam0000000140c7839c;
    local_88 = _DAT_140c783a0;
    uStack132 = uRam0000000140c783a4;
    uStack128 = uRam0000000140c783a8;
    uStack124 = uRam0000000140c783ac;
    uVar11 = 0xf3a;
    local_78 = _DAT_140c783b0;
    uStack116 = uRam0000000140c783b4;
    uStack112 = uRam0000000140c783b8;
    uStack108 = uRam0000000140c783bc;
    local_68 = _DAT_140c783c0;
    uStack100 = uRam0000000140c783c4;
    uStack96 = uRam0000000140c783c8;
    uStack92 = uRam0000000140c783cc;
    if ((*(int *)(param_2 + 0x80) != 0x12) || (*(longlong **)(param_2 + 0x3698) == (longlong *)0x0)) {
        if ((*(longlong *)(param_2 + 0x16e8) == 0) || (*(int *)(param_2 + 0x80) != 8)) {
            lVar6 = FUN_1404835c0(DAT_140c65918,param_4);
            if ((lVar6 != 0) && (*(int *)(lVar6 + 0x15c) != 0)) {
                uVar7 = FUN_140484600(lVar4 + 0x50);
                lVar4 = FUN_1404846c0(uVar7);
                if (lVar4 != 0) {
                    uVar2 = *(ulonglong *)(lVar4 + 8);
                    plVar5 = local_res10;
                    if ((uVar2 != 0) && (uVar2 <= DAT_140c3fe70)) {
                        lVar10 = DAT_140c3fe68 + uVar2;
                    }
                    goto LAB_1403dae07;
                }
            }
            plVar5 = (longlong *)0x0;
        }
        else {
            fVar12 = *(float *)(param_2 + 0xe8c);
            fVar13 = (float)FUN_14047a940(param_2);
            *(undefined *)(param_2 + 0x1b1) = 1;
            fVar13 = fVar13 * fVar12;
            if ((*(uint *)(param_2 + 0x28) & 0x8000) == 0) {
                uVar11 = 0xf74;
                plVar5 = (longlong *)(**(code **)(**(longlong **)(param_2 + 0x16e8) + 0x30))();
            }
            else {
                lVar10 = (**(code **)(**(longlong **)(param_2 + 0x16e8) + 0x30))();
                local_98 = *(undefined4 *)(param_2 + 0x11b0);
                uStack148 = *(undefined4 *)(param_2 + 0x11b4);
                uStack144 = *(undefined4 *)(param_2 + 0x11b8);
                uStack140 = *(undefined4 *)(param_2 + 0x11bc);
                local_88 = *(undefined4 *)(param_2 + 0x11c0);
                uStack132 = *(undefined4 *)(param_2 + 0x11c4);
                uStack128 = *(undefined4 *)(param_2 + 0x11c8);
                uStack124 = *(undefined4 *)(param_2 + 0x11cc);
                local_78 = *(undefined4 *)(param_2 + 0x11d0);
                uStack116 = *(undefined4 *)(param_2 + 0x11d4);
                uStack112 = *(undefined4 *)(param_2 + 0x11d8);
                uStack108 = *(undefined4 *)(param_2 + 0x11dc);
                local_68 = *(undefined4 *)(param_2 + 0x11e0);
                uStack100 = *(undefined4 *)(param_2 + 0x11e4);
                uStack96 = *(undefined4 *)(param_2 + 0x11e8);
                uStack92 = *(undefined4 *)(param_2 + 0x11ec);
                plVar5 = local_res10;
            }
        }
        goto LAB_1403dae07;
    }
    lVar10 = (**(code **)(**(longlong **)(param_2 + 0x3698) + 0x30))();
    uVar9 = uVar8;
    if (uVar8 == 8) {
        iVar1 = param_6;
        if (param_5 == 0) {
            LAB_1403dac6d:
            lVar4 = FUN_1400b5df0(DAT_140c658f0,iVar1,0);
            if (lVar4 != 0) {
                uVar9 = *(uint *)(lVar4 + 0x158);
                goto LAB_1403dacab;
            }
        }
        else if (param_5 == 6) {
            lVar4 = FUN_140248ac0(param_6);
            if ((lVar4 != 0) && (uVar9 = *(uint *)(lVar4 + 0x1c), uVar9 != 0)) goto LAB_1403dacab;
        }
        else if (param_5 == 8) {
            lVar4 = FUN_1401e8c20(param_6);
            if (lVar4 != 0) {
                iVar1 = *(int *)(lVar4 + 8);
                goto LAB_1403dac6d;
            }
        }
        else if (param_5 == 9) {
            if (param_6 == 6) {
                uVar9 = 7;
            }
            else {
                uVar9 = 4;
                if (param_6 != 9) {
                    uVar9 = 0;
                }
            }
            goto LAB_1403dacab;
        }
    }
    else {
        LAB_1403dacab:
        plVar5 = local_res10;
        uVar8 = uVar9;
        if (uVar9 == 0) goto LAB_1403dae07;
    }
    plVar5 = local_res10;
    if ((int)uVar8 < *(int *)(DAT_140c658f0 + 0x168)) {
        fVar13 = *(float *)(*(longlong *)(DAT_140c658f0 + 0x160) + (longlong)(int)uVar8 * 4);
    }
    LAB_1403dae07:
    lVar4 = FUN_140237680(uVar11);
    if (lVar4 != 0) {
        local_res10 = (longlong *)0x0;
        FUN_1406008c0(param_1 + 0x6760,lVar4,0,0,0,*(undefined4 *)(param_2 + 8),param_2 + 0x11e0,
                      &local_98,*(undefined4 *)(param_3 + 8),param_3 + 0x11e0,fVar13,lVar10,plVar5,
                      param_1 + 0x6760,&local_res10,0);
        plVar5 = local_res10;
        if (local_res10 != (longlong *)0x0) {
            lVar4 = FUN_14001c280(param_1);
            *(undefined4 *)(plVar5 + 0xb3) = 0;
            plVar5[0xb4] = lVar4;
            plVar5[0xb5] = (longlong)FUN_1403da640;
            plVar5[0xb6] = 0;
            FUN_1403da9c0(FUN_1403da640,param_5,param_6,local_a8,param_7 >> 0x10 & 0xff);
            local_res10 = (longlong *)0x0;
            FUN_1402d9b70(1,local_a8,&local_res10);
            plVar3 = local_res10;
            plVar5 = (longlong *)plVar5[6];
            if (plVar5 != (longlong *)0x0) {
                (**(code **)(*plVar5 + 0x180))(plVar5,local_res10);
            }
            if (plVar3 != (longlong *)0x0) {
                (**(code **)(*plVar3 + 8))(plVar3);
            }
        }
    }
    return;
}



undefined8 FUN_1403db050(longlong param_1,undefined4 *param_2)

{
    undefined4 uVar1;
    longlong lVar2;
    undefined8 uVar3;
    longlong lVar4;
    longlong lVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    undefined8 in_stack_ffffffffffffffa8;
    undefined4 uVar9;
    longlong lVar8;
    undefined8 in_stack_ffffffffffffffb0;
    undefined4 uVar11;
    undefined8 uVar10;
    undefined8 in_stack_ffffffffffffffb8;
    undefined4 uVar13;
    undefined8 uVar12;
    undefined local_18 [16];

    uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
    uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffffb0 >> 0x20);
    uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
    FUN_140427d40(*(undefined8 *)(param_1 + 0x7340),param_2[2],param_2[1]);
    FUN_1405fefc0(*(undefined8 *)(param_1 + 0x7d90),param_2[2]);
    lVar2 = FUN_1403d90d0(param_1,param_2[2]);
    uVar3 = FUN_1403d90d0(param_1,param_2[1]);
    lVar4 = lVar2;
    if (lVar2 == 0) {
        lVar4 = FUN_1403d90d0(param_1,*param_2);
    }
    uVar1 = FUN_1403da850();
    uVar12 = CONCAT44(uVar13,param_2[0xf]);
    uVar10 = CONCAT44(uVar11,param_2[4]);
    lVar8 = CONCAT44(uVar9,param_2[3]);
    FUN_1403dab40(param_1,lVar4,uVar3,uVar1,lVar8,uVar10,uVar12);
    uVar6 = 0;
    if ((((param_2[3] == 7) && (lVar5 = FUN_140211b00(), lVar5 != 0)) && (*(int *)(lVar5 + 0x20) != 0)
        ) && (lVar5 = FUN_140248f00(), lVar5 != 0)) {
        local_18 = ZEXT816(0);
        uVar12 = 0;
        uVar10 = 0;
        FUN_1405787d0(local_18,0,param_2[1]);
        lVar8 = lVar5;
    }
    if (lVar2 == 0) {
        if ((lVar4 != 0) && (uVar7 = uVar6, *(longlong *)(lVar4 + 0x3640) != 0)) {
            do {
                if (*(int *)(*(longlong *)(lVar4 + 0x3638) + uVar6) == param_2[2]) {
                    *(undefined4 *)(*(longlong *)(lVar4 + 0x3638) + 0x38 + uVar6) = 1;
                }
                uVar7 = uVar7 + 1;
                uVar6 = uVar6 + 0x40;
            } while (uVar7 < *(ulonglong *)(lVar4 + 0x3640));
        }
    }
    else {
        FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x7340),"UnitDestroyed",&DAT_1409eddfc,param_2[2],lVar8,
                      uVar10,uVar12);
        FUN_1403d9590(param_1,lVar2);
    }
    return 0;
}



void FUN_1403db510(longlong param_1,int *param_2)

{
    longlong lVar1;
    int iVar2;
    undefined auStack184 [32];
    undefined4 local_98;
    undefined8 *local_90;
    undefined8 local_88;
    undefined8 local_78;
    undefined8 local_70;
    undefined local_68 [80];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack184;
    if (*param_2 != 0) {
        local_90 = &local_78;
        local_88 = 0;
        local_70 = 0;
        local_78 = 0;
        local_98 = 0x21;
        iVar2 = FUN_1403f82f0(DAT_140c65898,5,param_2 + 2,local_68);
        if (iVar2 != 0) {
            if (param_2[7] == 2) {
                FUN_140428840();
            }
            else {
                FUN_140428500(*(undefined8 *)(param_1 + 0x7340),local_68,*param_2,param_2[7] == 0);
            }
        }
    }
    lVar1 = *(longlong *)(DAT_140c65898 + 0x78);
    if (((lVar1 != 0) && (param_2[2] == *(int *)(lVar1 + 0x1a0))) &&
        (*(longlong *)(param_2 + 4) == *(longlong *)(lVar1 + 0x1a8))) {
        FUN_1405ff370(*(undefined8 *)(param_1 + 0x7d90),*param_2);
    }
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack184);
    return;
}



undefined8 FUN_1403db7f0(longlong param_1,int *param_2)

{
    undefined4 uVar1;
    longlong lVar2;

    lVar2 = FUN_1403d90d0();
    if (lVar2 != 0) {
        FUN_14045bdc0(lVar2,param_2[1],param_2[2]);
        if ((*(longlong *)(param_1 + 0x6490) == 0) ||
            (*param_2 != *(int *)(*(longlong *)(param_1 + 0x6490) + 8))) {
            if (*(int *)(lVar2 + 0x108) != param_2[1]) {
                *(int *)(lVar2 + 0x108) = param_2[1];
                uVar1 = FUN_14045a950(lVar2);
                *(undefined4 *)(lVar2 + 0x10c) = uVar1;
            }
        }
    }
    return 0;
}



undefined8 FUN_1403db920(longlong param_1,undefined4 *param_2)

{
    longlong lVar1;

    lVar1 = FUN_1403d90d0(param_1,*param_2);
    if ((lVar1 != 0) && (param_2[1] == 4)) {
        lVar1 = FUN_14034bdd0();
        if (lVar1 != 0) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"UnitEvaded",&DAT_140b01220,*param_2,
                          *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 8),param_2[1],lVar1);
        }
    }
    return 0;
}



undefined8 FUN_1403db9a0(longlong param_1,int *param_2)

{
    int *piVar1;
    longlong lVar2;
    ulonglong uVar3;
    int *piVar4;
    uint uVar5;

    if (*(longlong *)(param_1 + 0x78) == 0) {
        return 0x80004005;
    }
    if ((*(int *)(param_1 + 0x6640) == *param_2) && (lVar2 = FUN_1403d90d0(), lVar2 != 0)) {
        if (param_2[10] != 0) {
            if (param_2[0xc] != 0) {
                FUN_1403a71f0(param_1,0,0x65,1);
                return 0;
            }
            FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x7340),"InvokeVendorWindow",&DAT_1409e9e94,*param_2);
        }
        *(int *)(lVar2 + 0x36dc) = param_2[8];
        *(int *)(lVar2 + 0x36e0) = param_2[9];
        if (((param_2[0xb] == 0) && (param_2[10] == 0)) && (param_2[4] == 1)) {
            piVar1 = *(int **)(param_2 + 6);
            uVar3 = 0;
            if (*(ulonglong *)(lVar2 + 0x36b8) != 0) {
                piVar4 = *(int **)(lVar2 + 14000);
                do {
                    if (*piVar4 == *piVar1) {
                        if (*(int **)(lVar2 + 14000) + uVar3 * 0x40 != (int *)0x0) {
                            FUN_14047b160(lVar2,piVar1);
                            goto LAB_1403dbb02;
                        }
                        break;
                    }
                    uVar3 = uVar3 + 1;
                    piVar4 = piVar4 + 0x40;
                } while (uVar3 < *(ulonglong *)(lVar2 + 0x36b8));
            }
            FUN_14047aba0(lVar2,piVar1);
        }
        else {
            FUN_1403d2fc0(lVar2 + 14000);
            uVar3 = 0;
            if (param_2[4] != 0) {
                do {
                    FUN_14047aba0(lVar2,uVar3 * 0x50 + *(longlong *)(param_2 + 6));
                    uVar5 = (int)uVar3 + 1;
                    uVar3 = (ulonglong)uVar5;
                } while (uVar5 < (uint)param_2[4]);
            }
        }
        LAB_1403dbb02:
        uVar3 = 0;
        if ((param_2[1] != 0) && (FUN_1400523e0(lVar2 + 0x36c0), param_2[1] != 0)) {
            do {
                FUN_14047b500(lVar2,*(longlong *)(param_2 + 2) + uVar3 * 8);
                uVar5 = (int)uVar3 + 1;
                uVar3 = (ulonglong)uVar5;
            } while (uVar5 < (uint)param_2[1]);
        }
        FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x7340),"VendorItemsUpdated",&DAT_1409d0d66);
    }
    return 0;
}



undefined8 FUN_1403dbb70(longlong param_1,longlong param_2)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    undefined8 uVar4;
    longlong *plVar5;
    ulonglong uVar6;
    uint uVar7;
    undefined8 in_stack_ffffffffffffffa8;
    undefined4 uVar8;
    ulonglong in_stack_ffffffffffffffb0;
    undefined8 local_48;
    undefined8 local_40;
    longlong local_38;
    ulonglong local_30;

    lVar3 = FUN_1403d90d0();
    if ((lVar3 == 0) || (*(longlong *)(lVar3 + 0xcc0) == 0)) {
        return 0;
    }
    FUN_14045a840(lVar3);
    FUN_14045a8f0(lVar3);
    FUN_14047c210(lVar3);
    FUN_14047c320(lVar3);
    uVar8 = *(undefined4 *)(param_2 + 0xc);
    uVar4 = FUN_1404835c0(DAT_140c65918);
    *(undefined4 *)(lVar3 + 0x20) = uVar8;
    *(undefined8 *)(lVar3 + 0x18) = uVar4;
    (**(code **)(**(longlong **)(lVar3 + 0xcc0) + 0x68))();
    *(undefined4 *)(lVar3 + 0xf0) = *(undefined4 *)(param_2 + 0x1c);
    uVar4 = FUN_1404674c0(lVar3);
    uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
    if (-1 < (int)uVar4) {
        uVar7 = 0;
        if (*(int *)(param_2 + 0x20) != 0) {
            do {
                FUN_14020b8e0(*(undefined4 *)((ulonglong)uVar7 * 0x10 + *(longlong *)(param_2 + 0x28) + 8));
                FUN_1401dc0d0();
                uVar4 = FUN_140466d20();
                uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
                if ((int)uVar4 < 0) {
                    return uVar4;
                }
                uVar7 = uVar7 + 1;
            } while (uVar7 < *(uint *)(param_2 + 0x20));
        }
        FUN_1404718e0(lVar3,0,0,1,CONCAT44(uVar8,1));
        FUN_140472d80(lVar3);
        FUN_140472e10(lVar3);
        if ((((((*(uint *)(lVar3 + 0x28) & 0x40000) != 0) && (*(longlong *)(lVar3 + 0xf8) != 0)) &&
              (lVar1 = *(longlong *)(*(longlong *)(lVar3 + 0xf8) + 0x150), lVar1 != 0)) &&
             ((iVar2 = *(int *)(lVar1 + 0x10), iVar2 == 0 ||
                                               (iVar2 = (**(code **)(*DAT_140c659a0 + 0x18))
                                                       (DAT_140c659a0,0,iVar2,0,0,
                                                        in_stack_ffffffffffffffb0 & 0xffffffff00000000), iVar2 != 0)))) &&
            ((lVar1 = DAT_140c65918, *(int *)(lVar3 + 0x250) == 0 && (*(int *)(lVar3 + 0x254) == 0)))) {
            uVar8 = **(undefined4 **)(*(longlong *)(lVar3 + 0xf8) + 0x150);
            FUN_140482a00(&local_48,uVar8,*(int *)(lVar3 + 0x2ac) != 0,6,
                          *(undefined8 *)(DAT_140c65918 + 0x40),*(undefined4 *)(DAT_140c65918 + 0x48));
            uVar6 = 0;
            if (local_30 != 0) {
                plVar5 = (longlong *)(local_38 + 0x20);
                do {
                    if (*(int *)((longlong)plVar5 + -0x14) != 0) break;
                    if (*plVar5 != 0) goto LAB_1403dbf20;
                    uVar6 = uVar6 + 1;
                    plVar5 = plVar5 + 6;
                } while (uVar6 < local_30);
            }
            FUN_140482a00(&local_48,uVar8,2,6,*(undefined8 *)(lVar1 + 0x40),*(undefined4 *)(lVar1 + 0x48))
                    ;
            uVar6 = 0;
            if (local_30 != 0) {
                plVar5 = (longlong *)(local_38 + 0x20);
                do {
                    if (*(int *)((longlong)plVar5 + -0x14) != 0) break;
                    if (*plVar5 != 0) goto LAB_1403dbf20;
                    uVar6 = uVar6 + 1;
                    plVar5 = plVar5 + 6;
                } while (uVar6 < local_30);
            }
            FUN_140482a00(&local_48,uVar8,*(int *)(lVar3 + 0x2ac) != 0,6,*(undefined8 *)(lVar1 + 0x40),
                          *(undefined4 *)(lVar1 + 0x48));
            uVar6 = 0;
            if (local_30 != 0) {
                plVar5 = (longlong *)(local_38 + 0x20);
                do {
                    if (*(int *)((longlong)plVar5 + -0x14) != 0) break;
                    if (*plVar5 != 0) goto LAB_1403dbf20;
                    uVar6 = uVar6 + 1;
                    plVar5 = plVar5 + 6;
                } while (uVar6 < local_30);
            }
            FUN_140482a00(&local_48,uVar8,2,6,*(undefined8 *)(lVar1 + 0x40),*(undefined4 *)(lVar1 + 0x48))
                    ;
            LAB_1403dbf20:
            if (((*(longlong *)(lVar3 + 0x14e0) == 0) || ((int)local_48 != *(int *)(lVar3 + 0x14c8))) ||
                (((int)((ulonglong)local_48 >> 0x20) != *(int *)(lVar3 + 0x14cc) ||
                  ((int)local_40 != *(int *)(lVar3 + 0x14d0))))) {
                FUN_140195d70(lVar3 + 0x1540);
                FUN_140195d70(lVar3 + 0x14f8);
                lVar1 = *(longlong *)(lVar3 + 0x590);
                *(undefined8 *)(lVar3 + 0x14c8) = local_48;
                *(undefined8 *)(lVar3 + 0x14d0) = local_40;
                *(longlong *)(lVar3 + 0x14d8) = local_38;
                *(undefined4 *)(lVar3 + 0x14c4) = 0;
                *(ulonglong *)(lVar3 + 0x14e0) = local_30;
                while (lVar1 != 0) {
                    (**(code **)(**(longlong **)(lVar3 + 0x590) + 0x20))();
                    lVar1 = *(longlong *)(lVar3 + 0x590);
                }
                FUN_14047cab0(lVar3);
            }
        }
        if (lVar3 == *(longlong *)(param_1 + 0x78)) {
            FUN_1400a8020(*(longlong *)(param_1 + 0x7340) + 0x15f8);
        }
        uVar4 = 0;
    }
    return uVar4;
}



undefined8 FUN_1403dc1e0(undefined8 param_1,int *param_2)

{
    longlong lVar1;
    longlong lVar2;

    if (*param_2 != 0) {
        lVar1 = FUN_1403d90d0();
        if (lVar1 == 0) {
            if (param_2[2] != 0) {
                FUN_1403a1090();
                return 0;
            }
        }
        else {
            lVar2 = FUN_1403d90d0(param_1);
            if ((param_2[1] != 0) && (lVar2 == 0)) {
                FUN_1403a1090();
                return 0;
            }
            FUN_14047fc40(lVar1);
        }
    }
    return 0;
}



undefined8 FUN_1403dc280(longlong param_1,undefined4 *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar3 = FUN_1403d90d0(param_1,*param_2);
    lVar2 = DAT_140c65898;
    if (((lVar3 != 0) && (*(longlong *)(param_1 + 0x78) != lVar3)) &&
        (*(int *)(lVar3 + 0x35f8) != param_2[1])) {
        *(undefined4 *)(lVar3 + 0x35f8) = param_2[1];
        *(undefined4 *)(lVar3 + 0x18a8) = 1;
        lVar1 = *(longlong *)(lVar2 + 0x78);
        if ((lVar1 != 0) && (*(int *)(lVar3 + 8) == *(int *)(lVar1 + 8))) {
            *(undefined4 *)(lVar2 + 0x6f98) = 1;
        }
    }
    return 0;
}



undefined8 FUN_1403dc950(longlong param_1,longlong param_2)

{
    longlong *plVar1;
    longlong lVar2;
    int iVar3;

    lVar2 = FUN_1403d90d0();
    if (lVar2 == 0) {
        return 0;
    }
    plVar1 = *(longlong **)(lVar2 + 0x1588);
    if (plVar1 == (longlong *)0x0) {
        return 0;
    }
    if (*(longlong *)(param_1 + 0x78) == 0) {
        return 0;
    }
    if (*(int *)(param_2 + 4) != *(int *)(*(longlong *)(param_1 + 0x78) + 8)) {
        return 0;
    }
    if (*(longlong *)(lVar2 + 0x18) != 0) {
        iVar3 = *(int *)(*(longlong *)(lVar2 + 0x18) + 0x110);
        if (iVar3 != 0) goto LAB_1403dc9bb;
        if (*(longlong *)(lVar2 + 0xd0) != 0) {
            iVar3 = *(int *)(*(longlong *)(lVar2 + 0xd0) + 0x10);
            goto LAB_1403dc9bb;
        }
    }
    iVar3 = 0;
    LAB_1403dc9bb:
    (**(code **)(*plVar1 + 0x10))(plVar1,iVar3,0,0,0,0,0);
    return 0;
}



undefined8 FUN_1403dc9f0(undefined8 param_1,uint param_2,ulonglong param_3,undefined4 param_4)

{
    longlong *plVar1;
    longlong *plVar2;
    ulonglong uVar3;
    int iVar4;
    undefined4 uVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    longlong lVar9;
    undefined *puVar10;
    LPVOID lpTlsValue;
    wchar_t *pwVar11;
    undefined8 extraout_XMM0_Qa;
    longlong *local_res8;
    ulonglong in_stack_fffffffffffffeb8;
    undefined8 in_stack_fffffffffffffec0;
    undefined4 uVar12;
    undefined **local_128;
    undefined8 local_120;
    LPVOID local_118;
    longlong *local_110;
    undefined8 local_108;
    undefined **local_100;
    wchar_t *local_f8;
    LPVOID local_f0;
    wchar_t *local_e8;
    undefined **local_e0;
    wchar_t *local_d8;
    LPVOID local_d0;
    wchar_t *local_c8;
    undefined **local_b8;
    undefined8 local_b0;
    LPVOID local_a8;
    longlong local_98;
    longlong local_90;
    longlong *local_88 [2];
    undefined **local_78;
    wchar_t *local_70;
    LPVOID local_68;
    wchar_t *local_60;
    undefined **local_58;
    wchar_t *local_50;
    LPVOID local_48;
    wchar_t *local_40;

    uVar12 = (undefined4)((ulonglong)in_stack_fffffffffffffec0 >> 0x20);
    local_e8 = (wchar_t *)(ulonglong)param_2;
    pwVar11 = (wchar_t *)(param_3 & 0xffffffff);
    local_98 = DAT_140c65898;
    local_90 = DAT_140c65898 + 0x7270;
    plVar1 = *(longlong **)(DAT_140c65898 + 0x7278);
    local_res8 = plVar1;
    plVar2 = (longlong *)plVar1[1];
    while (plVar2 != (longlong *)0x0) {
        if (*(uint *)(plVar2 + 4) < param_2) {
            plVar2 = (longlong *)plVar2[3];
        }
        else {
            local_res8 = plVar2;
            plVar2 = (longlong *)plVar2[2];
        }
    }
    if ((local_res8 == plVar1) || (param_2 < *(uint *)(local_res8 + 4))) {
        local_res8 = plVar1;
    }
    if (local_res8 != *(longlong **)(DAT_140c65898 + 0x7278)) {
        return 0;
    }
    lVar6 = FUN_14024c200(local_e8);
    lVar7 = FUN_14024acc0(pwVar11);
    if (lVar6 == 0) {
        local_128 = &PTR_LAB_140b5e648;
        local_120 = 0;
        local_118 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_128);
        local_b8 = local_128;
        local_b0 = local_120;
        local_100 = &PTR_LAB_140b5e648;
        local_f8 = L"RecordId";
        local_a8 = local_118;
        local_f0 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_100);
        local_70 = local_f8;
        local_100 = &PTR_LAB_140b5e630;
        local_e0 = &PTR_LAB_140b5e648;
        local_d8 = L"TableName";
        local_78 = &PTR_LAB_140b5e630;
        local_68 = local_f0;
        local_60 = local_e8;
        local_d0 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_e0);
        local_50 = local_d8;
        local_c8 = L"WorldSocket";
        local_40 = L"WorldSocket";
        local_e0 = &PTR_LAB_140b5e638;
        local_58 = &PTR_LAB_140b5e638;
        local_110 = (longlong *)0x141df0fe8;
        local_48 = local_d0;
        iVar4 = FUN_140197770(5,&local_110,param_2,&local_58,&local_78,&local_b8);
        local_e0 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_d0);
        local_100 = &PTR_LAB_140b5e648;
        lpTlsValue = local_f0;
        LAB_1403dcdd2:
        TlsSetValue(DAT_140c63720,lpTlsValue);
        local_128 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_118);
        if (iVar4 != 0) {
            DebugBreak();
        }
        return 0x80004005;
    }
    if (lVar7 == 0) {
        local_128 = &PTR_LAB_140b5e648;
        local_120 = 0;
        local_118 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_128);
        local_b8 = local_128;
        local_b0 = local_120;
        local_e0 = &PTR_LAB_140b5e648;
        local_d8 = L"RecordId";
        local_a8 = local_118;
        local_d0 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_e0);
        local_50 = local_d8;
        local_e0 = &PTR_LAB_140b5e630;
        local_100 = &PTR_LAB_140b5e648;
        local_f8 = L"TableName";
        local_58 = &PTR_LAB_140b5e630;
        local_48 = local_d0;
        local_c8 = pwVar11;
        local_40 = pwVar11;
        local_f0 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_100);
        local_70 = local_f8;
        local_e8 = L"World";
        local_60 = L"World";
        local_100 = &PTR_LAB_140b5e638;
        local_78 = &PTR_LAB_140b5e638;
        local_110 = (longlong *)0x141df0fa0;
        local_68 = local_f0;
        iVar4 = FUN_140197770(5,&local_110,pwVar11,&local_78,&local_58,&local_b8);
        local_100 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_f0);
        local_e0 = &PTR_LAB_140b5e648;
        lpTlsValue = local_d0;
        goto LAB_1403dcdd2;
    }
    if ((*(int *)(lVar7 + 0x30) == *(int *)(lVar7 + 0x28)) ||
        (*(int *)(lVar7 + 0x34) == *(int *)(lVar7 + 0x2c))) {
        return 1;
    }
    uVar5 = (**(code **)(*(longlong *)(DAT_140c65898 + 0x48) + 8))(DAT_140c65898 + 0x48);
    lVar8 = FUN_14024acc0(uVar5);
    if (lVar8 == 0) {
        return 0x80004005;
    }
    uVar3 = *(ulonglong *)(lVar7 + 8);
    lVar9 = 0;
    lVar8 = lVar9;
    if (uVar3 != 0) {
        if (DAT_140c3fe70 < uVar3) {
            lVar8 = 0;
        }
        else {
            lVar8 = uVar3 + DAT_140c3fe68;
        }
    }
    lVar8 = FUN_1407dd8d8(lVar8,0x5c);
    if (lVar8 == 0) {
        uVar3 = *(ulonglong *)(lVar7 + 8);
        lVar8 = lVar9;
        if ((uVar3 != 0) && (uVar3 <= DAT_140c3fe70)) {
            lVar8 = uVar3 + DAT_140c3fe68;
        }
    }
    else {
        lVar8 = lVar8 + 2;
    }
    local_res8 = (longlong *)0x0;
    uVar3 = *(ulonglong *)(lVar7 + 8);
    local_110 = (longlong *)0x0;
    if ((uVar3 != 0) && (uVar3 <= DAT_140c3fe70)) {
        lVar9 = uVar3 + DAT_140c3fe68;
    }
    iVar4 = FUN_1402d9ab0(lVar9,lVar8,&local_110);
    plVar1 = local_110;
    if (iVar4 < 0) {
        local_120 = 0;
        local_128 = &PTR_LAB_140b5e648;
        local_118 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_128);
        local_110 = (longlong *)0x141df1020;
        puVar10 = &DAT_140c8a758;
    }
    else {
        in_stack_fffffffffffffeb8 = in_stack_fffffffffffffeb8 & 0xffffffff00000000 | (ulonglong)pwVar11;
        iVar4 = (**(code **)(*local_110 + 0xd0))
                (local_110,lVar7 + 0x28,*(undefined4 *)(lVar7 + 0x38),&local_res8,
                 in_stack_fffffffffffffeb8);
        if (-1 < iVar4) {
            iVar4 = (**(code **)(**(longlong **)(local_98 + 0x7240) + 0x100))
                    (*(longlong **)(local_98 + 0x7240),local_res8,param_2,lVar6 + 8,
                     in_stack_fffffffffffffeb8 & 0xffffffff00000000 |
                     (ulonglong)*(uint *)(lVar6 + 0x18),CONCAT44(uVar12,param_4),local_88);
            if (-1 < iVar4) {
                (**(code **)(*local_88[0] + 0x30))(extraout_XMM0_Qa,0x3f800000);
                lVar9 = local_90;
                lVar6 = *(longlong *)(local_90 + 8);
                lVar8 = lVar6;
                lVar7 = *(longlong *)(lVar6 + 8);
                while (lVar7 != 0) {
                    if (*(uint *)(lVar7 + 0x20) < param_2) {
                        lVar7 = *(longlong *)(lVar7 + 0x18);
                    }
                    else {
                        lVar8 = lVar7;
                        lVar7 = *(longlong *)(lVar7 + 0x10);
                    }
                }
                if ((lVar8 == lVar6) || (param_2 < *(uint *)(lVar8 + 0x20))) {
                    local_110 = (longlong *)((ulonglong)local_110 & 0xffffffff00000000 | (ulonglong)param_2);
                    local_108 = 0;
                    local_90 = lVar8;
                    FUN_140055c60(lVar9,&local_98,&local_90,&local_110);
                    lVar8 = local_98;
                }
                *(longlong **)(lVar8 + 0x28) = local_88[0];
            }
            goto LAB_1403dd0bf;
        }
        local_120 = 0;
        local_128 = &PTR_LAB_140b5e648;
        local_118 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_128);
        local_110 = (longlong *)0x141df10a0;
        puVar10 = &DAT_140c8a754;
    }
    local_b8 = local_128;
    local_b0 = local_120;
    local_a8 = local_118;
    iVar4 = FUN_1401971e0(puVar10,5,&local_110,local_e8,
                          in_stack_fffffffffffffeb8 & 0xffffffff00000000 | (ulonglong)pwVar11,
                          &local_b8);
    local_128 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720,local_118);
    if (iVar4 != 0) {
        DebugBreak();
    }
    LAB_1403dd0bf:
    if (local_res8 != (longlong *)0x0) {
        (**(code **)(*local_res8 + 8))();
    }
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1);
    }
    return 0;
}



undefined8 FUN_1403dd120(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x7278);
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
    lVar1 = local_res8;
    if (local_res8 == *(longlong *)(param_1 + 0x7278)) {
        return 1;
    }
    (**(code **)(**(longlong **)(local_res8 + 0x28) + 8))();
    local_res8 = lVar1;
    FUN_1403dfa70(param_1 + 0x7270,&local_res8);
    return 0;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1403dd1c0(void)

{
    short sVar1;
    undefined8 uVar2;
    undefined8 uVar3;
    double dVar4;
    int iVar5;
    uint uVar6;
    int iVar7;
    int iVar8;
    undefined4 uVar9;
    longlong lVar10;
    undefined *puVar11;
    undefined *puVar12;
    short *psVar13;
    undefined2 *puVar14;
    longlong lVar15;
    longlong *plVar16;
    longlong *plVar17;
    int *piVar18;
    undefined *puVar19;
    ulonglong uVar20;
    uint uVar21;
    undefined *puVar22;
    longlong lVar23;
    undefined8 local_res18;
    int local_res20 [2];
    undefined4 local_158;
    int local_154;
    longlong local_150;
    undefined4 local_148;
    undefined4 uStack324;
    undefined4 local_140;
    undefined4 uStack316;
    undefined local_138 [8];
    undefined *local_130;
    undefined8 local_128;
    undefined **local_118;
    undefined local_110 [8];
    undefined8 local_108;
    undefined local_c0 [8];
    undefined2 *local_b8;
    undefined2 *local_b0;
    undefined local_58 [16];
    undefined2 *local_48;

    lVar10 = FUN_1403d90d0();
    if (lVar10 == 0) {
        return 0;
    }
    lVar15 = *(longlong *)(lVar10 + 0x18);
    if (lVar15 == 0) {
        return 0;
    }
    lVar23 = 0;
    iVar8 = 0;
    if ((lVar15 != 0) &&
        (iVar5 = FUN_140612f70(DAT_140c65898,*(undefined8 *)(*(longlong *)(lVar15 + 0x128) + 0x20),
                               *(undefined8 *)(*(longlong *)(lVar15 + 0x128) + 0x28),
                               *(undefined4 *)(lVar10 + 0x3604),*(undefined4 *)(lVar10 + 0x34),
                               *(undefined4 *)(lVar10 + 0xdc),*(undefined4 *)(lVar10 + 0xd8)),
                iVar5 != 0)) {
        *(int *)(lVar10 + 0x3604) = iVar5;
        iVar8 = iVar5;
    }
    uVar21 = 8;
    uVar2 = *DAT_140c65b80;
    local_res18 = (short *)((ulonglong)local_res18._4_4_ << 0x20);
    local_130 = (undefined *)FUN_14018b280(0x28);
    local_128 = 0;
    *local_130 = 0;
    *(undefined8 *)(local_130 + 8) = 0;
    *(undefined **)(local_130 + 0x10) = local_130;
    *(undefined **)(local_130 + 0x18) = local_130;
    local_res20[0] = *(int *)(DAT_140c66650 + *(longlong *)(lVar15 + 0x60) * 4);
    while (local_res20[0] != 0) {
        FUN_1400293c0(local_138,&local_158,local_res20);
        uVar6 = FUN_1405fbc40(uVar2);
        if (((uVar21 & 0xfffffff7) == 0) || ((uVar21 == 3 && (uVar6 != 0)))) {
            uVar21 = uVar6;
        }
        lVar23 = lVar23 + 1;
        local_res20[0] = *(int *)(DAT_140c66650 + (*(longlong *)(lVar15 + 0x60) + lVar23) * 4);
    }
    lVar23 = 0;
    uVar6 = *(uint *)(DAT_140c66650 + *(longlong *)(lVar15 + 0x58) * 4);
    puVar22 = local_130;
    while (uVar6 != 0) {
        puVar11 = *(undefined **)(puVar22 + 8);
        puVar19 = puVar22;
        if (*(undefined **)(puVar22 + 8) == (undefined *)0x0) {
            LAB_1403dd381:
            uVar6 = FUN_1405fbc40(uVar2);
            puVar22 = local_130;
            if (((uVar21 & 0xfffffff7) == 0) || ((uVar21 == 3 && (uVar6 != 0)))) {
                uVar21 = uVar6;
            }
        }
        else {
            do {
                if (*(uint *)(puVar11 + 0x20) < uVar6) {
                    puVar12 = *(undefined **)(puVar11 + 0x18);
                }
                else {
                    puVar12 = *(undefined **)(puVar11 + 0x10);
                    puVar19 = puVar11;
                }
                puVar11 = puVar12;
            } while (puVar12 != (undefined *)0x0);
            if ((puVar19 == puVar22) || (uVar6 < *(uint *)(puVar19 + 0x20))) goto LAB_1403dd381;
        }
        lVar23 = lVar23 + 1;
        uVar6 = *(uint *)(DAT_140c66650 + (*(longlong *)(lVar15 + 0x58) + lVar23) * 4);
    }
    if (uVar21 == 0) {
        LAB_1403dd4ba:
    }
    else {
        if (uVar21 == 3) {
            iVar5 = *(int *)(lVar15 + 0xf0);
            iVar8 = *(int *)(lVar15 + 0xf4);
            if (iVar5 != 0) {
                if (DAT_140c63840 == (code *)0x0) {
                    if ((_DAT_140c65234 != 0) || (iVar7 = FUN_14022d6e0(), iVar7 < 0)) goto LAB_1403dd4ba;
                    lVar15 = (**(code **)(*DAT_140c64a50 + 0x18))(DAT_140c64a50,iVar5);
                }
                else {
                    lVar15 = (*DAT_140c63840)(&PTR_u_RandomTextLine_140a6c970,iVar5,DAT_140c63858);
                }
                if (lVar15 != 0) {
                    local_res18._0_4_ = *(uint *)(lVar15 + 4);
                    local_res18 = (short *)((ulonglong)local_res18 & 0xffffffff00000000 |
                                            (ulonglong)(uint)local_res18);
                    goto LAB_1403dd4c0;
                }
            }
            goto LAB_1403dd4ba;
        }
        if (uVar21 == 8) goto LAB_1403dd4ba;
        iVar8 = *(int *)(lVar15 + 0xec);
        lVar23 = *(longlong *)(DAT_140c65898 + 0x78);
        uVar2 = (*(undefined8 **)(lVar15 + 0x128))[1];
        uVar3 = **(undefined8 **)(lVar15 + 0x128);
        if (lVar23 == 0) {
            local_res18._0_4_ = FUN_140612f70(DAT_140c65898,uVar3,uVar2,0,3,0x17,0x11);
            local_res18 = (short *)((ulonglong)local_res18 & 0xffffffff00000000 |
                                    (ulonglong)(uint)local_res18);
        }
        else {
            local_res18._0_4_ =
                    FUN_140612f70(DAT_140c65898,uVar3,uVar2,0,*(undefined4 *)(lVar23 + 0x34),
                                  *(undefined4 *)(lVar23 + 0xdc),*(undefined4 *)(lVar23 + 0xd8));
            local_res18 = (short *)((ulonglong)local_res18 & 0xffffffff00000000 |
                                    (ulonglong)(uint)local_res18);
        }
    }
    LAB_1403dd4c0:
    if ((iVar8 == 0) && ((uint)local_res18 == 0)) goto LAB_1403ddc04;
    psVar13 = (short *)FUN_14034bdd0();
    if ((psVar13 == (short *)0x0) || (*psVar13 == 0)) {
        psVar13 = (short *)FUN_14034bdd0();
    }
    if ((psVar13 != (short *)0x0) && (*psVar13 != 0)) {
        FUN_1400b6f30(&local_118);
        plVar17 = (longlong *)0x0;
        local_48 = (undefined2 *)0x0;
        local_58 = ZEXT816(0);
        local_118 = &PTR_FUN_140b69230;
        puVar14 = (undefined2 *)FUN_14018b280(0x10,0);
        local_48 = puVar14 + 8;
        local_58 = CONCAT88(puVar14,puVar14);
        if (puVar14 != (undefined2 *)0x0) {
            *puVar14 = 0;
        }
        lVar15 = FUN_14018b280(0x60);
        plVar16 = plVar17;
        if (lVar15 != 0) {
            plVar16 = (longlong *)FUN_1404db7e0(lVar15,lVar10);
        }
        local_150 = 0;
        local_148 = 0;
        uStack324 = 0;
        local_140 = 0;
        uStack316 = 0;
        do {
            plVar17 = (longlong *)((longlong)plVar17 + 1);
        } while (*(short *)(&DAT_140b0a7c8 + (longlong)plVar17 * 2) != 0);
        lVar15 = (longlong)plVar17 * 2 >> 1;
        uVar20 = lVar15 + 1;
        if (uVar20 < 0x7fffffffffffffff) {
            lVar23 = uVar20 * 2;
            local_150 = FUN_14018b280(lVar23,0);
            local_148 = (undefined4)local_150;
            uStack324 = (undefined4)((ulonglong)local_150 >> 0x20);
            lVar23 = lVar23 + local_150;
            local_140 = (undefined4)lVar23;
            uStack316 = (undefined4)((ulonglong)lVar23 >> 0x20);
        }
        lVar23 = local_150;
        lVar15 = lVar15 * 2;
        FUN_1407db590(local_150,&DAT_140b0a7c8,lVar15);
        puVar14 = (undefined2 *)(lVar15 + lVar23);
        plVar17 = (longlong *)0x0;
        local_148 = SUB84(puVar14,0);
        uStack324 = (undefined4)((ulonglong)puVar14 >> 0x20);
        if (puVar14 != (undefined2 *)0x0) {
            *puVar14 = 0;
        }
        FUN_1400b7480(&local_118,plVar16);
        (**(code **)(*plVar16 + 0x48))(plVar16,&local_158);
        if (local_150 != 0) {
            FUN_14018b900(local_150,0);
        }
        lVar15 = FUN_14018b280(0x60);
        plVar16 = plVar17;
        if (lVar15 != 0) {
            plVar16 = (longlong *)FUN_1404db7e0(lVar15,*(undefined8 *)(DAT_140c65898 + 0x78));
        }
        local_150 = 0;
        local_148 = 0;
        uStack324 = 0;
        local_140 = 0;
        uStack316 = 0;
        do {
            plVar17 = (longlong *)((longlong)plVar17 + 1);
        } while (L"target"[(longlong)plVar17] != L'\0');
        lVar15 = (longlong)plVar17 * 2 >> 1;
        uVar20 = lVar15 + 1;
        if (uVar20 < 0x7fffffffffffffff) {
            lVar23 = uVar20 * 2;
            local_150 = FUN_14018b280(lVar23,0);
            local_148 = (undefined4)local_150;
            uStack324 = (undefined4)((ulonglong)local_150 >> 0x20);
            lVar23 = lVar23 + local_150;
            local_140 = (undefined4)lVar23;
            uStack316 = (undefined4)((ulonglong)lVar23 >> 0x20);
        }
        lVar23 = local_150;
        lVar15 = lVar15 * 2;
        FUN_1407db590(local_150,L"target",lVar15);
        puVar14 = (undefined2 *)(lVar15 + lVar23);
        lVar15 = 0;
        local_148 = SUB84(puVar14,0);
        uStack324 = (undefined4)((ulonglong)puVar14 >> 0x20);
        if (puVar14 != (undefined2 *)0x0) {
            *puVar14 = 0;
        }
        FUN_1400b7480(&local_118,plVar16);
        (**(code **)(*plVar16 + 0x48))(plVar16,&local_158);
        if (local_150 != 0) {
            FUN_14018b900(local_150,0);
        }
        sVar1 = *psVar13;
        lVar23 = lVar15;
        while (sVar1 != 0) {
            lVar23 = lVar23 + 1;
            sVar1 = psVar13[lVar23];
        }
        FUN_14001c480(local_110,psVar13,psVar13 + lVar23);
        if ((uint)local_res18 == 0) {
            if ((local_b8 == local_b0) && (DAT_140c63648 != (undefined8 *)0x0)) {
                local_res18 = (short *)0x0;
                (**(code **)*DAT_140c63648)(DAT_140c63648,local_108,&local_118,&local_res18);
                if (local_res18 == (short *)0x0) {
                    if (local_b8 == local_b0) goto LAB_1403dd813;
                    *local_b8 = 0;
                    local_b0 = local_b8;
                }
                else {
                    sVar1 = *local_res18;
                    while (sVar1 != 0) {
                        lVar15 = lVar15 + 1;
                        sVar1 = local_res18[lVar15];
                    }
                    FUN_14001c480(local_c0,local_res18,local_res18 + lVar15);
                }
                if (local_res18 != (short *)0x0) {
                    (**(code **)(*(longlong *)(local_res18 + -8) + 8))(local_res18 + -8,local_b8);
                }
            }
            LAB_1403dd813:
            FUN_140475ef0(lVar10,local_b8,1);
        }
        else {
            lVar15 = FUN_1400b7660(&local_118);
            FUN_1403e0020(lVar10,*(undefined8 *)(lVar15 + 8),1);
        }
        if (local_58._0_8_ != 0) {
            FUN_14018b900(local_58._0_8_,0);
        }
        FUN_1400b7390(&local_118);
    }
    iVar8 = FUN_140472ed0(lVar10,iVar8);
    if ((iVar8 == 0) && ((uint)local_res18 != 0)) {
        FUN_140472ed0(lVar10,(uint)local_res18);
    }
    if ((((*(byte *)(lVar10 + 0x1070) & 2) == 0) && (*(int *)(lVar10 + 0x2ac) == 0)) &&
        ((*(uint *)(*(longlong *)(lVar10 + 0x18) + 0x90) & 0x10000) == 0)) {
        *(undefined4 *)(lVar10 + 0xea4) = *(undefined4 *)(*(longlong *)(DAT_140c65898 + 0x6490) + 8);
        if (*(int *)(lVar10 + 0xef0) == 0) {
            *(undefined4 *)(lVar10 + 0xef4) = *(undefined4 *)(lVar10 + 0x1100);
            *(undefined4 *)(lVar10 + 0xef8) = *(undefined4 *)(lVar10 + 0x1104);
            *(undefined4 *)(lVar10 + 0xefc) = *(undefined4 *)(lVar10 + 0x1108);
        }
        *(undefined4 *)(lVar10 + 0xef0) = 1;
        local_148 = 0x405b92b0;
        uStack324 = 1;
        local_158 = 0;
        local_140 = 0;
        uStack316 = 0;
        local_150 = lVar10;
        FUN_140195960(lVar10 + 0x1628,5000,&local_158,4);
        FUN_140470650(lVar10,1,1);
        dVar4 = (double)(**(code **)(DAT_140c77890 + 0x30))(&DAT_140c77890);
        iVar8 = (int)(dVar4 * 65536.0);
        if (*(longlong *)(lVar10 + 0x16e8) != 0) {
            uVar9 = FUN_140470540(lVar10,0x116);
            piVar18 = (int *)(**(code **)(**(longlong **)(lVar10 + 0x16e8) + 0x1a8))
                    (*(longlong **)(lVar10 + 0x16e8),uVar9,iVar8);
            if (*piVar18 != 0x96) {
                iVar5 = *(int *)(lVar10 + 0x1428);
                FUN_140471230(lVar10,~piVar18[2] & 1,piVar18[2] & 8);
                if ((*(int *)(lVar10 + 0x1428) == 0x3f) != (iVar5 == 0x3f)) {
                    uVar9 = FUN_140470540(lVar10,0x116);
                    piVar18 = (int *)(**(code **)(**(longlong **)(lVar10 + 0x16e8) + 0x1a8))
                            (*(longlong **)(lVar10 + 0x16e8),uVar9,iVar8);
                    if (*piVar18 == 0x96) {
                        uVar21 = *(uint *)(lVar10 + 0x1428);
                        if (*(longlong *)(lVar10 + 0xcc0) != 0) {
                            uVar6 = FUN_140467ed0(lVar10);
                            *(uint *)(lVar10 + 0x142c) = *(uint *)(lVar10 + 0x142c) & 0xffffffef;
                            *(uint *)(lVar10 + 0x142c) = *(uint *)(lVar10 + 0x142c) | ~uVar21 & 0x10;
                            uVar21 = *(uint *)(lVar10 + 0x142c);
                            if (((uVar6 & 0xfffffff6) == 0) && (uVar6 != 1)) {
                                uVar21 = 0x3f;
                            }
                            if (*(uint *)(lVar10 + 0x1428) != uVar21) {
                                if (uVar21 == 0x3f) {
                                    FUN_140195d70(lVar10 + 0x1430);
                                    FUN_140195d70(lVar10 + 0x1478);
                                    (**(code **)(**(longlong **)(lVar10 + 0xcc0) + 0xa8))
                                            (*(longlong **)(lVar10 + 0xcc0),3,3);
                                    *(undefined4 *)(lVar10 + 0x14c0) = 1;
                                    if (*(longlong *)(lVar10 + 0x16e8) != 0) {
                                        FUN_140471ef0(lVar10,1,1);
                                        FUN_140471ef0(lVar10,1,0);
                                    }
                                }
                                else if (*(uint *)(lVar10 + 0x1428) == 0x3f) {
                                    local_158 = 0;
                                    local_148 = 0x40471e50;
                                    uStack324 = 1;
                                    local_140 = 0;
                                    uStack316 = 0;
                                    local_150 = lVar10;
                                    FUN_140195960(lVar10 + 0x1430,0x96,&local_158,4);
                                    local_148 = 0x40471ea0;
                                    uStack324 = 1;
                                    local_158 = 0;
                                    local_140 = 0;
                                    uStack316 = 0;
                                    local_150 = lVar10;
                                    FUN_140195960(lVar10 + 0x1478,0x96,&local_158,4);
                                    *(undefined4 *)(lVar10 + 0x14c0) = 1;
                                }
                                if ((uVar21 & 4) != 0) {
                                    FUN_140195d70(lVar10 + 0x1398);
                                }
                                if ((uVar21 & 0x10) != 0) {
                                    FUN_140195d70(lVar10 + 0x13e0);
                                }
                                *(uint *)(lVar10 + 0x1428) = uVar21;
                            }
                        }
                        goto LAB_1403ddc04;
                    }
                }
                uVar20 = (ulonglong)piVar18[4];
                if (*piVar18 == 0x116) {
                    if (uVar20 < 8) {
                        local_148 = *(undefined4 *)(&DAT_140b670f0 + uVar20 * 4);
                    }
                    else {
                        local_148 = 9;
                    }
                }
                else if (uVar20 < 8) {
                    local_148 = *(undefined4 *)(&DAT_140b67110 + uVar20 * 4);
                }
                else {
                    local_148 = 0xd;
                }
                local_150 = 0x3f800000;
                uStack324 = 2;
                local_140 = 0;
                uStack316 = 0;
                local_158 = uVar9;
                local_154 = iVar8;
                (**(code **)(**(longlong **)(lVar10 + 0x16e8) + 0x248))
                        (*(longlong **)(lVar10 + 0x16e8),5,&local_158);
                if (*(longlong *)(lVar10 + 0x15e8) != 0) {
                    FUN_14071a9f0(*(longlong *)(lVar10 + 0x15e8),1);
                }
            }
        }
    }
    LAB_1403ddc04:
    FUN_140008410(local_138);
    FUN_14018b900(local_130,0);
    return 0;
}



undefined8 FUN_1403ddc60(longlong param_1,undefined4 *param_2)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    uint uVar4;
    ulonglong uVar5;

    lVar3 = FUN_1403d90d0(param_1,*param_2);
    if (lVar3 != 0) {
        if ((((*(byte *)(lVar3 + 0x15a8) & 1) == 0) && ((*(byte *)(param_2 + 1) & 1) != 0)) &&
            ((*(longlong *)(DAT_140c65898 + 0x7258) == 0 ||
              ((iVar1 = *(int *)(*(longlong *)(DAT_140c65898 + 0x7258) + 0x14), iVar1 != 3 && (iVar1 != 8)
              ))))) {
            FUN_140051af0(0,0xae);
        }
        lVar2 = DAT_140c65898;
        uVar5 = 0;
        *(uint *)(lVar3 + 0x15a8) = (uint)*(byte *)(param_2 + 1);
        if (*(int *)(lVar2 + 0xa4) != 0) {
            do {
                if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + uVar5 * 8) != 0) {
                    FUN_14056a430();
                }
                uVar4 = (int)uVar5 + 1;
                uVar5 = (ulonglong)uVar4;
            } while (uVar4 < *(uint *)(lVar2 + 0xa4));
        }
        uVar5 = 0;
        if (*(int *)(lVar2 + 0xbc) != 0) {
            do {
                if (*(longlong *)(*(longlong *)(lVar2 + 200) + uVar5 * 8) != 0) {
                    FUN_14056a430();
                }
                uVar4 = (int)uVar5 + 1;
                uVar5 = (ulonglong)uVar4;
            } while (uVar4 < *(uint *)(lVar2 + 0xbc));
        }
        uVar5 = 0;
        if (*(int *)(lVar2 + 0xd4) != 0) {
            do {
                if (*(longlong *)(*(longlong *)(lVar2 + 0xe0) + uVar5 * 8) != 0) {
                    FUN_14056a430();
                }
                uVar4 = (int)uVar5 + 1;
                uVar5 = (ulonglong)uVar4;
            } while (uVar4 < *(uint *)(lVar2 + 0xd4));
        }
        uVar5 = 0;
        if (*(int *)(lVar2 + 0xec) != 0) {
            do {
                if (*(longlong *)(*(longlong *)(lVar2 + 0xf8) + uVar5 * 8) != 0) {
                    FUN_14056a430();
                }
                uVar4 = (int)uVar5 + 1;
                uVar5 = (ulonglong)uVar4;
            } while (uVar4 < *(uint *)(lVar2 + 0xec));
        }
        uVar5 = 0;
        if (*(int *)(lVar2 + 0x104) != 0) {
            do {
                if (*(longlong *)(*(longlong *)(lVar2 + 0x110) + uVar5 * 8) != 0) {
                    FUN_14056a430();
                }
                uVar4 = (int)uVar5 + 1;
                uVar5 = (ulonglong)uVar4;
            } while (uVar4 < *(uint *)(lVar2 + 0x104));
        }
        uVar5 = 0;
        if (*(int *)(lVar2 + 0x11c) != 0) {
            do {
                if (*(longlong *)(*(longlong *)(lVar2 + 0x128) + uVar5 * 8) != 0) {
                    FUN_14056a430();
                }
                uVar4 = (int)uVar5 + 1;
                uVar5 = (ulonglong)uVar4;
            } while (uVar4 < *(uint *)(lVar2 + 0x11c));
        }
        uVar5 = 0;
        if (*(int *)(lVar2 + 0x134) != 0) {
            do {
                if (*(longlong *)(*(longlong *)(lVar2 + 0x140) + uVar5 * 8) != 0) {
                    FUN_14056a430();
                }
                uVar4 = (int)uVar5 + 1;
                uVar5 = (ulonglong)uVar4;
            } while (uVar4 < *(uint *)(lVar2 + 0x134));
        }
        if (lVar3 == *(longlong *)(param_1 + 0x78)) {
            if ((*(byte *)(param_2 + 1) & 1) == 0) {
                *(undefined4 *)(param_1 + 0x6de8) = 0;
            }
            if ((lVar3 == *(longlong *)(param_1 + 0x78)) && ((*(byte *)(param_2 + 1) & 1) != 0)) {
                FUN_140437a10(DAT_140c658d8,0x18e,0,0,0,0,1);
            }
        }
        FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x7340),"UnitPvpFlagsChanged",&DAT_1409eec0c,*param_2);
    }
    return 0;
}



// WARNING: Removing unreachable block (ram,0x0001403de002)
// WARNING: Removing unreachable block (ram,0x0001403de117)

undefined8 FUN_1403ddec0(longlong param_1,int *param_2)

{
    short sVar1;
    undefined2 *puVar2;
    longlong lVar3;
    short *psVar4;
    undefined2 *puVar5;
    undefined *puVar6;
    longlong lVar7;
    undefined2 *puVar8;
    longlong lVar9;
    int iVar10;
    undefined local_58 [8];
    undefined2 *local_50;
    undefined2 *local_48;
    undefined2 *local_40;
    undefined local_38 [8];
    longlong local_30;

    lVar9 = 0;
    iVar10 = 0;
    if (*(longlong *)(param_1 + 0x78) != 0) {
        iVar10 = *(int *)(*(longlong *)(param_1 + 0x78) + 8);
    }
    puVar2 = (undefined2 *)FUN_14018b280(2);
    local_40 = puVar2 + 1;
    local_50 = puVar2;
    FUN_1407db590(puVar2,&DAT_1409e7dac,0);
    if (puVar2 != (undefined2 *)0x0) {
        *puVar2 = 0;
    }
    lVar3 = lVar9;
    local_48 = puVar2;
    if ((iVar10 == *param_2) && (iVar10 != 0)) {
        *(undefined4 *)(param_1 + 0x6ee4) = 2;
        iVar10 = param_2[1];
        *(int *)(param_1 + 0x6ee0) = iVar10;
        if (iVar10 != 0) {
            lVar3 = FUN_1403d90d0(param_1);
        }
        psVar4 = (short *)FUN_14034bdd0();
        sVar1 = *psVar4;
        while (sVar1 != 0) {
            lVar9 = lVar9 + 1;
            sVar1 = psVar4[lVar9];
        }
    }
    else {
        if ((iVar10 != param_2[1]) || (iVar10 == 0)) {
            lVar3 = FUN_1403d90d0(DAT_140c65898);
            lVar7 = FUN_1403d90d0(DAT_140c65898,param_2[1]);
            psVar4 = (short *)FUN_14034bdd0();
            sVar1 = *psVar4;
            while (sVar1 != 0) {
                lVar9 = lVar9 + 1;
                sVar1 = psVar4[lVar9];
            }
            if (lVar9 * 2 >> 1 == 0) {
                FUN_1407db590(puVar2,psVar4,0);
            }
            else {
                FUN_14001c310(local_58,psVar4);
                puVar2 = local_50;
            }
            if (lVar7 == 0) {
                puVar5 = (undefined2 *)FUN_14034bdd0();
            }
            else {
                puVar5 = &DAT_140b7b704;
                if (*(undefined2 **)(lVar7 + 0x10) != (undefined2 *)0x0) {
                    puVar5 = *(undefined2 **)(lVar7 + 0x10);
                }
            }
            if (lVar3 == 0) {
                puVar8 = (undefined2 *)FUN_14034bdd0();
            }
            else {
                puVar8 = &DAT_140b7b704;
                if (*(undefined2 **)(lVar3 + 0x10) != (undefined2 *)0x0) {
                    puVar8 = *(undefined2 **)(lVar3 + 0x10);
                }
            }
            puVar6 = (undefined *)FUN_14018efa0(local_38,puVar2,puVar8,puVar5);
            if (puVar6 != local_58) {
                FUN_14001c480(local_58,*(undefined8 *)(puVar6 + 8),*(undefined8 *)(puVar6 + 0x10));
                puVar2 = local_50;
            }
            if (local_30 != 0) {
                FUN_14018b900(local_30,0);
            }
            goto LAB_1403de1da;
        }
        *(undefined4 *)(param_1 + 0x6ee4) = 1;
        iVar10 = *param_2;
        *(int *)(param_1 + 0x6ee0) = iVar10;
        if (iVar10 != 0) {
            lVar3 = FUN_1403d90d0(param_1);
        }
        psVar4 = (short *)FUN_14034bdd0();
        sVar1 = *psVar4;
        while (sVar1 != 0) {
            lVar9 = lVar9 + 1;
            sVar1 = psVar4[lVar9];
        }
    }
    if (lVar9 * 2 >> 1 == 0) {
        FUN_1407db590(puVar2,psVar4,0);
    }
    else {
        FUN_14001c310(local_58,psVar4);
        puVar2 = local_50;
    }
    if (lVar3 == 0) {
        puVar5 = (undefined2 *)FUN_14034bdd0();
    }
    else {
        puVar5 = &DAT_140b7b704;
        if (*(undefined2 **)(lVar3 + 0x10) != (undefined2 *)0x0) {
            puVar5 = *(undefined2 **)(lVar3 + 0x10);
        }
    }
    puVar6 = (undefined *)FUN_14018efa0(local_38,puVar2,puVar5);
    if (puVar6 != local_58) {
        FUN_14001c480(local_58,*(undefined8 *)(puVar6 + 8),*(undefined8 *)(puVar6 + 0x10));
        puVar2 = local_50;
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    FUN_14042cea0(*(undefined8 *)(param_1 + 0x7340));
    LAB_1403de1da:
    FUN_140003890(DAT_140c658a0,10,0,puVar2,0,0);
    if (puVar2 != (undefined2 *)0x0) {
        FUN_14018b900(puVar2,0);
    }
    return 0;
}



// WARNING: Removing unreachable block (ram,0x0001403de552)
// WARNING: Removing unreachable block (ram,0x0001403de686)
// WARNING: Removing unreachable block (ram,0x0001403de312)
// WARNING: Removing unreachable block (ram,0x0001403de782)

undefined8 FUN_1403de240(longlong param_1,int *param_2)

{
    short sVar1;
    int iVar2;
    undefined2 *puVar3;
    short *psVar4;
    longlong lVar5;
    undefined2 *puVar6;
    undefined *puVar7;
    undefined2 *puVar8;
    longlong lVar9;
    longlong lVar10;
    undefined8 uVar11;
    undefined local_78 [8];
    undefined2 *local_70;
    undefined2 *local_68;
    undefined2 *local_60;
    undefined local_58 [8];
    longlong local_50;
    undefined local_38 [8];
    longlong local_30;

    lVar9 = 0;
    iVar2 = 0;
    if (*(longlong *)(param_1 + 0x78) != 0) {
        iVar2 = *(int *)(*(longlong *)(param_1 + 0x78) + 8);
    }
    puVar3 = (undefined2 *)FUN_14018b280(2);
    local_60 = puVar3 + 1;
    local_70 = puVar3;
    FUN_1407db590(puVar3,&DAT_1409e7dec,0);
    if (puVar3 != (undefined2 *)0x0) {
        *puVar3 = 0;
    }
    local_68 = puVar3;
    if (param_2[2] == 5) {
        iVar2 = *(int *)(param_1 + 0x6ee0);
        *(undefined8 *)(param_1 + 0x6ee0) = 0;
        psVar4 = (short *)FUN_14034bdd0();
        sVar1 = *psVar4;
        while (sVar1 != 0) {
            lVar9 = lVar9 + 1;
            sVar1 = psVar4[lVar9];
        }
        if (lVar9 * 2 >> 1 == 0) {
            FUN_1407db590(puVar3,psVar4,0);
        }
        else {
            FUN_14001c310(local_78,psVar4);
            puVar3 = local_70;
        }
        if ((*(longlong *)(param_1 + 0x78) != 0) &&
            (*(int *)(*(longlong *)(param_1 + 0x78) + 0x108) == iVar2)) {
            FUN_14055bac0(param_1);
            FUN_14042cea0(*(undefined8 *)(param_1 + 0x7340));
            goto LAB_1403de848;
        }
    }
    else {
        if ((iVar2 == *param_2) && (iVar2 != 0)) {
            lVar5 = lVar9;
            if (*(int *)(param_1 + 0x6ee0) != 0) {
                lVar5 = FUN_1403d90d0();
            }
            *(undefined8 *)(param_1 + 0x6ee0) = 0;
            if ((*(longlong *)(param_1 + 0x78) != 0) &&
                (*(int *)(*(longlong *)(param_1 + 0x78) + 0x108) == param_2[1])) {
                FUN_14055bac0(param_1);
            }
            if (param_2[2] == 0) {
                psVar4 = (short *)FUN_14034bdd0();
                lVar10 = 0;
                sVar1 = *psVar4;
                while (lVar9 = lVar5, sVar1 != 0) {
                    lVar10 = lVar10 + 1;
                    sVar1 = psVar4[lVar10];
                }
            }
            else {
                lVar10 = lVar9;
                if (param_2[2] == 4) {
                    psVar4 = (short *)FUN_14034bdd0();
                    sVar1 = *psVar4;
                    while (lVar9 = lVar5, sVar1 != 0) {
                        lVar10 = lVar10 + 1;
                        sVar1 = psVar4[lVar10];
                    }
                }
                else {
                    psVar4 = (short *)FUN_14034bdd0();
                    sVar1 = *psVar4;
                    while (lVar9 = lVar5, sVar1 != 0) {
                        lVar10 = lVar10 + 1;
                        sVar1 = psVar4[lVar10];
                    }
                }
            }
        }
        else {
            if ((iVar2 != param_2[1]) || (iVar2 == 0)) {
                if (param_2[2] != 4) {
                    lVar10 = FUN_1403d90d0(DAT_140c65898);
                    lVar5 = FUN_1403d90d0(DAT_140c65898,param_2[1]);
                    iVar2 = param_2[2];
                    if (iVar2 == 0) {
                        psVar4 = (short *)FUN_14034bdd0(0,0x694f8);
                        sVar1 = *psVar4;
                        while (sVar1 != 0) {
                            lVar9 = lVar9 + 1;
                            sVar1 = psVar4[lVar9];
                        }
                        if (lVar9 * 2 >> 1 == 0) {
                            FUN_1407db590(puVar3,psVar4,0);
                        }
                        else {
                            FUN_14001c310(local_78,psVar4);
                            puVar3 = local_70;
                        }
                        if (lVar5 == 0) {
                            puVar6 = (undefined2 *)FUN_14034bdd0();
                        }
                        else {
                            puVar6 = &DAT_140b7b704;
                            if (*(undefined2 **)(lVar5 + 0x10) != (undefined2 *)0x0) {
                                puVar6 = *(undefined2 **)(lVar5 + 0x10);
                            }
                        }
                        if (lVar10 == 0) {
                            puVar8 = (undefined2 *)FUN_14034bdd0();
                        }
                        else {
                            puVar8 = &DAT_140b7b704;
                            if (*(undefined2 **)(lVar10 + 0x10) != (undefined2 *)0x0) {
                                puVar8 = *(undefined2 **)(lVar10 + 0x10);
                            }
                        }
                        puVar7 = (undefined *)FUN_14018efa0(local_38,puVar3,puVar8,puVar6);
                        if (puVar7 != local_78) {
                            FUN_14001c480(local_78,*(undefined8 *)(puVar7 + 8),*(undefined8 *)(puVar7 + 0x10));
                            puVar3 = local_70;
                        }
                    }
                    else {
                        if (iVar2 == 4) goto LAB_1403de848;
                        psVar4 = (short *)FUN_14034bdd0(iVar2,0x69601);
                        sVar1 = *psVar4;
                        while (sVar1 != 0) {
                            lVar9 = lVar9 + 1;
                            sVar1 = psVar4[lVar9];
                        }
                        if (lVar9 * 2 >> 1 == 0) {
                            FUN_1407db590(puVar3,psVar4,0);
                        }
                        else {
                            FUN_14001c310(local_78,psVar4);
                            puVar3 = local_70;
                        }
                        if (lVar10 == 0) {
                            puVar6 = (undefined2 *)FUN_14034bdd0();
                        }
                        else {
                            puVar6 = &DAT_140b7b704;
                            if (*(undefined2 **)(lVar10 + 0x10) != (undefined2 *)0x0) {
                                puVar6 = *(undefined2 **)(lVar10 + 0x10);
                            }
                        }
                        if (lVar5 == 0) {
                            puVar8 = (undefined2 *)FUN_14034bdd0();
                        }
                        else {
                            puVar8 = &DAT_140b7b704;
                            if (*(undefined2 **)(lVar5 + 0x10) != (undefined2 *)0x0) {
                                puVar8 = *(undefined2 **)(lVar5 + 0x10);
                            }
                        }
                        puVar7 = (undefined *)FUN_14018efa0(local_58,puVar3,puVar8,puVar6);
                        local_30 = local_50;
                        if (puVar7 != local_78) {
                            FUN_14001c480(local_78,*(undefined8 *)(puVar7 + 8),*(undefined8 *)(puVar7 + 0x10));
                            local_30 = local_50;
                            puVar3 = local_70;
                        }
                    }
                    if (local_30 != 0) {
                        FUN_14018b900(local_30,0);
                    }
                }
                goto LAB_1403de848;
            }
            if (*(int *)(param_1 + 0x6ee0) != 0) {
                lVar9 = FUN_1403d90d0();
            }
            *(undefined8 *)(param_1 + 0x6ee0) = 0;
            if ((*(longlong *)(param_1 + 0x78) != 0) &&
                (*(int *)(*(longlong *)(param_1 + 0x78) + 0x108) == *param_2)) {
                FUN_14055bac0(param_1);
            }
            if (param_2[2] == 0) {
                psVar4 = (short *)FUN_14034bdd0();
                lVar10 = 0;
                sVar1 = *psVar4;
                while (sVar1 != 0) {
                    lVar10 = lVar10 + 1;
                    sVar1 = psVar4[lVar10];
                }
            }
            else if (param_2[2] == 4) {
                iVar2 = FUN_1403c9210();
                uVar11 = 0x695c1;
                if (iVar2 == 3) {
                    uVar11 = 0x6d76b;
                }
                psVar4 = (short *)FUN_14034bdd0(0x6d76b,uVar11);
                lVar10 = 0;
                sVar1 = *psVar4;
                while (sVar1 != 0) {
                    lVar10 = lVar10 + 1;
                    sVar1 = psVar4[lVar10];
                }
            }
            else {
                iVar2 = FUN_1403c9210();
                uVar11 = 0x69602;
                if (iVar2 == 3) {
                    uVar11 = 0x6d76d;
                }
                psVar4 = (short *)FUN_14034bdd0(0x6d76d,uVar11);
                lVar10 = 0;
                sVar1 = *psVar4;
                while (sVar1 != 0) {
                    lVar10 = lVar10 + 1;
                    sVar1 = psVar4[lVar10];
                }
            }
        }
        if (lVar10 * 2 >> 1 == 0) {
            FUN_1407db590(puVar3,psVar4,0);
        }
        else {
            FUN_14001c310(local_78,psVar4);
            puVar3 = local_70;
        }
        if (lVar9 == 0) {
            puVar6 = (undefined2 *)FUN_14034bdd0();
        }
        else {
            puVar6 = &DAT_140b7b704;
            if (*(undefined2 **)(lVar9 + 0x10) != (undefined2 *)0x0) {
                puVar6 = *(undefined2 **)(lVar9 + 0x10);
            }
        }
        puVar7 = (undefined *)FUN_14018efa0(local_58,puVar3,puVar6);
        if (puVar7 != local_78) {
            FUN_14001c480(local_78,*(undefined8 *)(puVar7 + 8),*(undefined8 *)(puVar7 + 0x10));
            puVar3 = local_70;
        }
        if (local_50 != 0) {
            FUN_14018b900(local_50,0);
        }
    }
    FUN_14042cea0(*(undefined8 *)(param_1 + 0x7340));
    LAB_1403de848:
    if (((longlong)local_68 - (longlong)puVar3 & 0xfffffffffffffffeU) != 0) {
        FUN_140003890(DAT_140c658a0,10,0,puVar3,0,0);
    }
    if (puVar3 != (undefined2 *)0x0) {
        FUN_14018b900(puVar3,0);
    }
    return 0;
}



undefined8 * FUN_1403de8c0(undefined8 param_1,int param_2,int param_3)

{
    longlong lVar1;
    undefined4 uVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    int *piVar6;
    undefined8 *puVar7;
    int local_res10 [2];
    undefined8 local_38;
    undefined8 *local_30;
    undefined local_28 [16];

    lVar1 = DAT_140c65898;
    if ((param_2 != 0) && (param_3 != 0)) {
        lVar3 = FUN_1403d90d0(DAT_140c65898,param_3);
        if (lVar3 == 0) {
            puVar7 = (undefined8 *)0x80004005;
        }
        else {
            puVar4 = (undefined8 *)FUN_1403deb80(lVar1,param_2,param_3);
            puVar7 = (undefined8 *)0x0;
            if (puVar4 == (undefined8 *)0x0) {
                puVar5 = (undefined8 *)FUN_14018b280(0x20,0);
                puVar4 = puVar7;
                if (puVar5 != (undefined8 *)0x0) {
                    uVar2 = 0;
                    if (*(longlong **)(lVar3 + 0x118) != (longlong *)0x0) {
                        uVar2 = (**(code **)(**(longlong **)(lVar3 + 0x118) + 0x18))();
                    }
                    *(undefined4 *)(puVar5 + 1) = 0;
                    puVar5[3] = 0;
                    puVar5[2] = 0;
                    *puVar5 = CONCAT44(uVar2,param_2);
                    puVar4 = puVar5;
                }
                local_38 = *puVar4;
                local_30 = puVar4;
                FUN_1400eedd0(lVar1 + 0x6ee8,local_28,&local_38);
            }
            if ((undefined8 *)puVar4[3] != (undefined8 *)0x0) {
                piVar6 = (int *)puVar4[2];
                puVar5 = puVar7;
                do {
                    if (*piVar6 == param_3) {
                        return (undefined8 *)0x80004005;
                    }
                    puVar5 = (undefined8 *)((longlong)puVar5 + 1);
                    piVar6 = piVar6 + 1;
                } while (puVar5 < (undefined8 *)puVar4[3]);
            }
            local_res10[0] = param_3;
            FUN_140003460(puVar4 + 2,local_res10);
            uVar2 = FUN_140625e00(puVar4);
            *(undefined4 *)(puVar4 + 1) = uVar2;
        }
        return puVar7;
    }
    return (undefined8 *)0x80004005;
}



ulonglong FUN_1403dea10(longlong param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined4 uVar3;
    int *piVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    longlong local_res10;

    if (param_2 == 0) {
        return 0x80004005;
    }
    lVar1 = *(longlong *)(param_1 + 0x6ef0);
    local_res10 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(ulonglong *)(lVar2 + 0x20) < *(ulonglong *)(param_2 + 0x138)) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res10 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res10 == lVar1) ||
        (*(ulonglong *)(param_2 + 0x138) < *(ulonglong *)(local_res10 + 0x20))) {
        local_res10 = lVar1;
    }
    lVar1 = local_res10;
    if (local_res10 == *(longlong *)(param_1 + 0x6ef0)) {
        return 0x80004005;
    }
    lVar2 = *(longlong *)(local_res10 + 0x28);
    if (lVar2 == 0) {
        return 0x80004005;
    }
    uVar6 = 0;
    if (*(ulonglong *)(lVar2 + 0x18) != 0) {
        piVar4 = *(int **)(lVar2 + 0x10);
        uVar5 = uVar6;
        do {
            if (*piVar4 == *(int *)(param_2 + 8)) {
                FUN_1401c2f20(lVar2 + 0x10);
                uVar3 = FUN_140625e00(lVar2);
                *(undefined4 *)(lVar2 + 8) = uVar3;
                goto LAB_1403deb06;
            }
            uVar5 = uVar5 + 1;
            piVar4 = piVar4 + 1;
        } while (uVar5 < *(ulonglong *)(lVar2 + 0x18));
    }
    uVar6 = 0x80004005;
    LAB_1403deb06:
    if (*(longlong *)(lVar2 + 0x18) == 0) {
        local_res10 = lVar1;
        FUN_1403df6e0(param_1 + 0x6ee8,&local_res10);
        lVar1 = *(longlong *)(lVar2 + 0x10);
        if (lVar1 != 0) {
            (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        }
        FUN_14018b900(lVar2,0);
    }
    return uVar6;
}



undefined8 FUN_1403deb80(longlong param_1,int param_2,undefined4 param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong local_res20;

    if ((param_2 != 0) && (lVar3 = FUN_1403d90d0(param_1,param_3), lVar3 != 0)) {
        lVar1 = *(longlong *)(param_1 + 0x6ef0);
        local_res20 = lVar1;
        lVar2 = *(longlong *)(lVar1 + 8);
        while (lVar2 != 0) {
            if (*(ulonglong *)(lVar2 + 0x20) < *(ulonglong *)(lVar3 + 0x138)) {
                lVar2 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                local_res20 = lVar2;
                lVar2 = *(longlong *)(lVar2 + 0x10);
            }
        }
        if ((local_res20 == lVar1) ||
            (*(ulonglong *)(lVar3 + 0x138) < *(ulonglong *)(local_res20 + 0x20))) {
            local_res20 = lVar1;
        }
        if (local_res20 != lVar1) {
            return *(undefined8 *)(local_res20 + 0x28);
        }
    }
    return 0;
}



undefined8 FUN_1403dec00(longlong param_1,longlong param_2)

{
    ulonglong uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong local_res10;

    if ((param_2 != 0) && (uVar1 = *(ulonglong *)(param_2 + 0x138), uVar1 != 0)) {
        lVar2 = *(longlong *)(param_1 + 0x6ef0);
        local_res10 = lVar2;
        lVar3 = *(longlong *)(lVar2 + 8);
        while (lVar3 != 0) {
            if (*(ulonglong *)(lVar3 + 0x20) < uVar1) {
                lVar3 = *(longlong *)(lVar3 + 0x18);
            }
            else {
                local_res10 = lVar3;
                lVar3 = *(longlong *)(lVar3 + 0x10);
            }
        }
        if ((local_res10 == lVar2) || (uVar1 < *(ulonglong *)(local_res10 + 0x20))) {
            local_res10 = lVar2;
        }
        if (local_res10 != lVar2) {
            return *(undefined8 *)(local_res10 + 0x28);
        }
    }
    return 0;
}



void FUN_1403dec70(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x6ef0) + 0x10);
    if (lVar3 != *(longlong *)(param_1 + 0x6ef0)) {
        do {
            lVar2 = *(longlong *)(lVar3 + 0x28);
            if (lVar2 != 0) {
                lVar1 = *(longlong *)(lVar2 + 0x10);
                if (lVar1 != 0) {
                    (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
                }
                FUN_14018b900(lVar2,0);
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
        } while (lVar3 != *(longlong *)(param_1 + 0x6ef0));
    }
    FUN_140008410(param_1 + 0x6ee8);
    return;
}



undefined8 FUN_1403ded30(undefined8 param_1,undefined4 *param_2)

{
    undefined4 uVar1;
    longlong lVar2;
    longlong lVar3;

    lVar3 = FUN_1403d90d0(param_1,*param_2);
    lVar2 = DAT_140c65898;
    if (lVar3 != 0) {
        uVar1 = param_2[1];
        *(undefined4 *)(lVar3 + 0x18a8) = 1;
        *(undefined4 *)(lVar3 + 0x3750) = uVar1;
        if ((*(longlong *)(lVar2 + 0x78) != 0) &&
            (*(int *)(lVar3 + 8) == *(int *)(*(longlong *)(lVar2 + 0x78) + 8))) {
            *(undefined4 *)(lVar2 + 0x6f98) = 1;
        }
        if (*(int *)(lVar3 + 0x3754) != param_2[2]) {
            *(undefined4 *)(lVar3 + 0x3754) = param_2[2];
            *(undefined4 *)(lVar3 + 0x18a8) = 1;
            if ((*(longlong *)(lVar2 + 0x78) != 0) &&
                (*(int *)(lVar3 + 8) == *(int *)(*(longlong *)(lVar2 + 0x78) + 8))) {
                *(undefined4 *)(lVar2 + 0x6f98) = 1;
                return 0;
            }
        }
    }
    return 0;
}



undefined8 FUN_1403deec0(undefined8 param_1,int param_2,int param_3,int param_4,undefined8 *param_5)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    longlong local_res8;

    lVar1 = *(longlong *)(DAT_140c65898 + 0x6f80);
    local_res8 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        iVar4 = *(int *)(lVar2 + 0x20) - param_2;
        if ((iVar4 == 0) && (iVar4 = *(int *)(lVar2 + 0x24) - param_3, iVar4 == 0)) {
            iVar4 = *(int *)(lVar2 + 0x28) - param_4;
        }
        if (iVar4 < 0) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res8 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if (local_res8 == lVar1) {
        LAB_1403def43:
        local_res8 = lVar1;
    }
    else {
        iVar4 = param_2 - *(int *)(local_res8 + 0x20);
        if ((iVar4 == 0) && (iVar4 = param_3 - *(int *)(local_res8 + 0x24), iVar4 == 0)) {
            iVar4 = param_4 - *(int *)(local_res8 + 0x28);
        }
        if (iVar4 < 0) goto LAB_1403def43;
    }
    lVar3 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    if (local_res8 != lVar1) goto LAB_1403defcf;
    while (lVar2 != 0) {
        iVar4 = *(int *)(lVar2 + 0x20) - param_2;
        if ((iVar4 == 0) && (iVar4 = *(int *)(lVar2 + 0x24), iVar4 == 0)) {
            iVar4 = *(int *)(lVar2 + 0x28) - param_4;
        }
        if (iVar4 < 0) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            lVar3 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if (lVar3 == lVar1) {
        LAB_1403defb0:
        local_res8 = lVar1;
    }
    else {
        param_2 = param_2 - *(int *)(lVar3 + 0x20);
        if ((param_2 == 0) && (param_2 = -*(int *)(lVar3 + 0x24), param_2 == 0)) {
            param_2 = param_4 - *(int *)(lVar3 + 0x28);
        }
        local_res8 = lVar3;
        if (param_2 < 0) goto LAB_1403defb0;
    }
    if (local_res8 == lVar1) {
        return 0;
    }
    LAB_1403defcf:
    if (param_5 != (undefined8 *)0x0) {
        *param_5 = *(undefined8 *)(local_res8 + 0x30);
    }
    return 1;
}



undefined8 FUN_1403df570(undefined8 param_1,longlong param_2)

{
    undefined4 uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    lVar4 = FUN_1403d90d0();
    lVar3 = DAT_140c65898;
    if (lVar4 != 0) {
        uVar1 = *(undefined4 *)(param_2 + 4);
        *(undefined4 *)(lVar4 + 0x18a8) = 1;
        *(undefined4 *)(lVar4 + 0x130) = uVar1;
        lVar2 = *(longlong *)(lVar3 + 0x78);
        if ((lVar2 != 0) && (*(int *)(lVar4 + 8) == *(int *)(lVar2 + 8))) {
            *(undefined4 *)(lVar3 + 0x6f98) = 1;
            return 0;
        }
    }
    return 0;
}



void FUN_1403df5e0(longlong param_1,longlong *param_2)

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
        iVar2 = FUN_1401971e0(&DAT_140c8a748,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001403df6a6. Too many branches
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



void FUN_1403df6e0(longlong param_1,longlong *param_2)

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
        iVar2 = FUN_1401971e0(&DAT_140c8a74c,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001403df7a6. Too many branches
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



undefined8 * FUN_1403df7e0(longlong param_1,undefined8 *param_2,char **param_3,uint *param_4)

{
    uint uVar1;
    undefined8 *puVar2;
    char *pcVar3;
    char *pcVar4;
    char *pcVar5;
    char *pcVar6;
    bool bVar7;
    undefined local_18 [16];

    pcVar3 = *param_3;
    pcVar5 = *(char **)(param_1 + 8);
    pcVar6 = pcVar3;
    if (pcVar3 != *(char **)(pcVar5 + 0x10)) {
        if (pcVar3 == pcVar5) {
            pcVar5 = *(char **)(pcVar5 + 0x18);
            if ((*param_4 <= *(uint *)(pcVar5 + 0x20)) &&
                ((*param_4 < *(uint *)(pcVar5 + 0x20) ||
                  (*(ulonglong *)(param_4 + 2) <= *(ulonglong *)(pcVar5 + 0x28))))) goto LAB_1403df824;
        }
        else {
            if ((*pcVar3 == '\0') && (*(char **)(*(longlong *)(pcVar3 + 8) + 8) == pcVar3)) {
                pcVar5 = *(char **)(pcVar3 + 0x18);
            }
            else {
                pcVar5 = *(char **)(pcVar3 + 0x10);
                if (pcVar5 == (char *)0x0) {
                    pcVar5 = *(char **)(pcVar3 + 8);
                    pcVar4 = pcVar5;
                    if (pcVar3 == *(char **)(pcVar5 + 0x10)) {
                        do {
                            pcVar5 = *(char **)(pcVar4 + 8);
                            bVar7 = pcVar4 == *(char **)(pcVar5 + 0x10);
                            pcVar4 = pcVar5;
                        } while (bVar7);
                    }
                }
                else {
                    for (pcVar4 = *(char **)(pcVar5 + 0x18); pcVar4 != (char *)0x0;
                         pcVar4 = *(char **)(pcVar4 + 0x18)) {
                        pcVar5 = pcVar4;
                    }
                }
            }
            uVar1 = *param_4;
            if (((uVar1 <= *(uint *)(pcVar5 + 0x20)) &&
                 ((uVar1 < *(uint *)(pcVar5 + 0x20) ||
                   (*(ulonglong *)(param_4 + 2) <= *(ulonglong *)(pcVar5 + 0x28))))) ||
                ((*(uint *)(pcVar3 + 0x20) <= uVar1 &&
                  ((*(uint *)(pcVar3 + 0x20) < uVar1 ||
                    (*(ulonglong *)(pcVar3 + 0x28) <= *(ulonglong *)(param_4 + 2))))))) goto LAB_1403df824;
            if (*(longlong *)(pcVar5 + 0x18) != 0) goto LAB_1403df920;
        }
        pcVar3 = (char *)0x0;
        pcVar6 = pcVar5;
        LAB_1403df920:
        FUN_1403dfb70(param_1,param_2,pcVar3,pcVar6,param_4);
        return param_2;
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
        if ((*param_4 < *(uint *)(pcVar3 + 0x20)) ||
            ((*param_4 <= *(uint *)(pcVar3 + 0x20) &&
              (*(ulonglong *)(param_4 + 2) < *(ulonglong *)(pcVar3 + 0x28))))) goto LAB_1403df920;
    }
    LAB_1403df824:
    puVar2 = (undefined8 *)FUN_1403dfc90(param_1,local_18,param_4);
    *param_2 = *puVar2;
    return param_2;
}



longlong FUN_1403df940(longlong param_1,uint *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong local_res8;
    longlong local_res18;

    local_res18 = *(longlong *)(param_1 + 8);
    lVar4 = *(longlong *)(local_res18 + 8);
    local_res8 = local_res18;
    if (lVar4 != 0) {
        lVar2 = lVar4;
        do {
            if ((*param_2 < *(uint *)(lVar2 + 0x20)) ||
                ((*param_2 <= *(uint *)(lVar2 + 0x20) &&
                  (*(ulonglong *)(param_2 + 2) < *(ulonglong *)(lVar2 + 0x28))))) {
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
                if ((*(uint *)(lVar4 + 0x20) < *param_2) ||
                    ((*(uint *)(lVar4 + 0x20) <= *param_2 &&
                      (*(ulonglong *)(lVar4 + 0x28) < *(ulonglong *)(param_2 + 2))))) {
                    lVar2 = *(longlong *)(lVar4 + 0x18);
                }
                else {
                    lVar2 = *(longlong *)(lVar4 + 0x10);
                    local_res18 = lVar4;
                }
                lVar4 = lVar2;
            } while (lVar2 != 0);
        }
    }
    lVar4 = 0;
    lVar2 = local_res18;
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
    FUN_1403dfdc0(param_1,&local_res18,&local_res8);
    return lVar4;
}



void FUN_1403dfa70(longlong param_1,longlong *param_2)

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
        iVar2 = FUN_1401971e0(&DAT_140c8a750,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001403dfb36. Too many branches
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



longlong *
FUN_1403dfb70(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
              undefined8 *param_5)

{
    longlong lVar1;
    longlong lVar2;

    if ((param_4 != *(longlong *)(param_1 + 8)) && (param_3 == 0)) {
        if ((*(uint *)(param_4 + 0x20) <= *(uint *)param_5) &&
            ((*(uint *)(param_4 + 0x20) < *(uint *)param_5 ||
              (*(ulonglong *)(param_4 + 0x28) <= (ulonglong)param_5[1])))) {
            lVar2 = FUN_14018b280(0x38);
            if ((undefined8 *)(lVar2 + 0x20) != (undefined8 *)0x0) {
                *(undefined8 *)(lVar2 + 0x20) = *param_5;
                *(undefined8 *)(lVar2 + 0x28) = param_5[1];
                *(undefined8 *)(lVar2 + 0x30) = param_5[2];
            }
            *(longlong *)(param_4 + 0x18) = lVar2;
            if (param_4 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x18)) {
                *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar2;
            }
            goto LAB_1403dfc4d;
        }
    }
    lVar2 = FUN_14018b280(0x38);
    if ((undefined8 *)(lVar2 + 0x20) != (undefined8 *)0x0) {
        *(undefined8 *)(lVar2 + 0x20) = *param_5;
        *(undefined8 *)(lVar2 + 0x28) = param_5[1];
        *(undefined8 *)(lVar2 + 0x30) = param_5[2];
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
    LAB_1403dfc4d:
    *(longlong *)(lVar2 + 8) = param_4;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    FUN_1400081c0(lVar2,*(longlong *)(param_1 + 8) + 8);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    *param_2 = lVar2;
    return param_2;
}



char ** FUN_1403dfc90(longlong param_1,char **param_2,uint *param_3)

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
            if (*param_3 < *(uint *)(pcVar5 + 0x20)) {
                pcVar4 = *(char **)(pcVar5 + 0x10);
                bVar6 = true;
            }
            else {
                if (*(uint *)(pcVar5 + 0x20) < *param_3) {
                    bVar6 = false;
                }
                else {
                    bVar6 = *(ulonglong *)(param_3 + 2) < *(ulonglong *)(pcVar5 + 0x28);
                    if (bVar6) {
                        pcVar4 = *(char **)(pcVar5 + 0x10);
                        goto LAB_1403dfcdc;
                    }
                }
                pcVar4 = *(char **)(pcVar5 + 0x18);
            }
            LAB_1403dfcdc:
        } while (pcVar4 != (char *)0x0);
    }
    pcVar3 = pcVar5;
    if (bVar6) {
        if (pcVar5 == *(char **)(pcVar2 + 0x10)) goto LAB_1403dfd8d;
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
    if ((*param_3 <= *(uint *)(pcVar3 + 0x20)) &&
        ((*param_3 < *(uint *)(pcVar3 + 0x20) ||
          (*(ulonglong *)(param_3 + 2) <= *(ulonglong *)(pcVar3 + 0x28))))) {
        *param_2 = pcVar3;
        *(undefined *)(param_2 + 1) = 0;
        return param_2;
    }
    LAB_1403dfd8d:
    ppcVar1 = (char **)FUN_1403dfb70(param_1,local_res8,pcVar4,pcVar5,param_3);
    *param_2 = *ppcVar1;
    *(undefined *)(param_2 + 1) = 1;
    return param_2;
}



void FUN_1403dfdc0(longlong param_1,longlong *param_2,longlong *param_3)

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
            FUN_1403dfea0(param_1,&local_res8);
        } while (*param_2 != *param_3);
    }
    return;
}



void FUN_1403dfea0(longlong param_1,longlong *param_2)

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
        iVar2 = FUN_1401971e0(&DAT_140c8a744,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001403dff66. Too many branches
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



void FUN_1403dffa0(longlong param_1,undefined4 param_2)

{
    longlong lVar1;
    longlong lVar2;

    lVar2 = DAT_140c65898;
    *(undefined4 *)(param_1 + 0x130) = param_2;
    *(undefined4 *)(param_1 + 0x18a8) = 1;
    lVar1 = *(longlong *)(lVar2 + 0x78);
    if ((lVar1 != 0) && (*(int *)(param_1 + 8) == *(int *)(lVar1 + 8))) {
        *(undefined4 *)(lVar2 + 0x6f98) = 1;
    }
    return;
}



longlong FUN_1403dffe0(longlong param_1)

{
    if (*(int *)(param_1 + 0x498) != 0) {
        return param_1 + 0x20;
    }
    return 0;
}



undefined8 FUN_1403e0000(longlong param_1)

{
    if (*(int *)(param_1 + 0x4a0) != 0) {
        return *(undefined8 *)(param_1 + 8);
    }
    return 0;
}



void FUN_1403e0020(longlong param_1,longlong param_2,undefined4 param_3)

{
    undefined2 *puVar1;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;

    if (param_2 != 0) {
        puVar1 = &DAT_140b7b704;
        if (*(undefined2 **)(param_1 + 0x10) != (undefined2 *)0x0) {
            puVar1 = *(undefined2 **)(param_1 + 0x10);
        }
        FUN_140003890(DAT_140c658a0,0x14,0,param_2,*(undefined4 *)(param_1 + 8),puVar1,
                      CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da))));
        FUN_140475ef0(param_1,param_2,param_3);
    }
    return;
}



undefined4 FUN_1403e00a0(undefined8 param_1,int param_2,undefined4 param_3)

{
    longlong lVar1;

    lVar1 = FUN_140200220();
    if (lVar1 != 0) {
        return *(undefined4 *)(lVar1 + 4 + (longlong)param_2 * 4);
    }
    return param_3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_1403e00e0(int param_1)

{
    longlong lVar1;

    if ((DAT_140dc2370 & 1) == 0) {
        DAT_140dc2370 = DAT_140dc2370 | 1;
        lVar1 = FUN_140200220(0x32f);
        if (lVar1 == 0) {
            _DAT_140c8a7a0 = 1;
        }
        else {
            _DAT_140c8a7a0 = *(undefined4 *)(lVar1 + 4);
        }
        lVar1 = FUN_140200220(0x32f);
        if (lVar1 == 0) {
            _DAT_140c8a7a4 = 1;
        }
        else {
            _DAT_140c8a7a4 = *(undefined4 *)(lVar1 + 4);
        }
        lVar1 = FUN_140200220(0x32f);
        if (lVar1 == 0) {
            _DAT_140c8a7a8 = 1;
        }
        else {
            _DAT_140c8a7a8 = *(undefined4 *)(lVar1 + 4);
        }
        lVar1 = FUN_140200220(0x32f);
        if (lVar1 == 0) {
            _DAT_140c8a7ac = 1;
        }
        else {
            _DAT_140c8a7ac = *(undefined4 *)(lVar1 + 4);
        }
        lVar1 = FUN_140200220(0x32f);
        _DAT_140c8a7b0 = 1;
        if (lVar1 != 0) {
            _DAT_140c8a7b0 = *(undefined4 *)(lVar1 + 8);
        }
    }
    if ((ulonglong)(longlong)param_1 < 5) {
        return *(undefined4 *)(&DAT_140c8a7a0 + (longlong)param_1 * 4);
    }
    return 0;
}



longlong FUN_1403e01c0(longlong param_1,uint param_2)

{
    int iVar1;
    longlong lVar2;

    if ((DAT_140dc2374 & 1) == 0) {
        DAT_140dc2374 = DAT_140dc2374 | 1;
        lVar2 = FUN_140200220(0x419);
        if (lVar2 == 0) {
            iVar1 = 100;
        }
        else {
            iVar1 = *(int *)(lVar2 + 4);
        }
        DAT_140dc2378 = (longlong)iVar1;
    }
    if ((DAT_140dc2374 & 2) == 0) {
        DAT_140dc2374 = DAT_140dc2374 | 2;
        lVar2 = FUN_140200220(0x419);
        if (lVar2 == 0) {
            DAT_140dc2380 = 0.25;
        }
        else {
            DAT_140dc2380 = *(float *)(lVar2 + 0x18);
        }
    }
    lVar2 = (longlong)((float)*(longlong *)(param_1 + 0x58) * DAT_140dc2380);
    if (lVar2 < DAT_140dc2378) {
        lVar2 = DAT_140dc2378;
    }
    return lVar2 * (ulonglong)param_2;
}



longlong FUN_1403e0290(longlong param_1,uint param_2)

{
    int iVar1;
    longlong lVar2;

    if ((DAT_140dc2384 & 1) == 0) {
        DAT_140dc2384 = DAT_140dc2384 | 1;
        lVar2 = FUN_140200220(0x46a);
        if (lVar2 == 0) {
            iVar1 = 500;
        }
        else {
            iVar1 = *(int *)(lVar2 + 4);
        }
        DAT_140dc2388 = (longlong)iVar1;
    }
    if ((DAT_140dc2384 & 2) == 0) {
        DAT_140dc2384 = DAT_140dc2384 | 2;
        lVar2 = FUN_140200220(0x46a);
        if (lVar2 == 0) {
            DAT_140dc2390 = 0.02;
        }
        else {
            DAT_140dc2390 = *(float *)(lVar2 + 0x18);
        }
    }
    lVar2 = (longlong)((float)((ulonglong)param_2 * param_1) * DAT_140dc2390);
    if (lVar2 < DAT_140dc2388) {
        lVar2 = DAT_140dc2388;
    }
    return lVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined * FUN_1403e0370(int param_1,int param_2)

{
    int iVar1;
    longlong lVar2;
    undefined *puVar3;
    int iVar4;
    undefined4 uVar5;
    undefined4 uVar6;

    uVar5 = 0x3f800000;
    iVar4 = 0x32;
    uVar6 = 0;
    if ((DAT_140dc2394 & 1) == 0) {
        DAT_140dc2394 = DAT_140dc2394 | 1;
        lVar2 = FUN_140200220(0x35c);
        if (lVar2 == 0) {
            iVar1 = 0x32;
        }
        else {
            iVar1 = *(int *)(lVar2 + 4);
        }
        _DAT_140dc2398 = (longlong)iVar1;
        lVar2 = FUN_140200220(0x35c);
        if (lVar2 == 0) {
            iVar1 = 0x32;
        }
        else {
            iVar1 = *(int *)(lVar2 + 8);
        }
        _DAT_140dc23a0 = (longlong)iVar1;
        lVar2 = FUN_140200220(0x35c);
        _DAT_140dc23a8 = uVar6;
        if (lVar2 != 0) {
            _DAT_140dc23a8 = *(undefined4 *)(lVar2 + 0x1c);
        }
        lVar2 = FUN_140200220(0x35c);
        _DAT_140dc23ac = uVar5;
        if (lVar2 != 0) {
            _DAT_140dc23ac = *(undefined4 *)(lVar2 + 0x18);
        }
    }
    if ((DAT_140dc2394 & 2) == 0) {
        DAT_140dc2394 = DAT_140dc2394 | 2;
        lVar2 = FUN_140200220(0x35d);
        if (lVar2 == 0) {
            iVar1 = 0x32;
        }
        else {
            iVar1 = *(int *)(lVar2 + 4);
        }
        _DAT_140dc23b0 = (longlong)iVar1;
        lVar2 = FUN_140200220(0x35d);
        if (lVar2 == 0) {
            iVar1 = 0x32;
        }
        else {
            iVar1 = *(int *)(lVar2 + 8);
        }
        _DAT_140dc23b8 = (longlong)iVar1;
        lVar2 = FUN_140200220(0x35d);
        _DAT_140dc23c0 = uVar6;
        if (lVar2 != 0) {
            _DAT_140dc23c0 = *(undefined4 *)(lVar2 + 0x1c);
        }
        lVar2 = FUN_140200220(0x35d);
        _DAT_140dc23c4 = uVar5;
        if (lVar2 != 0) {
            _DAT_140dc23c4 = *(undefined4 *)(lVar2 + 0x18);
        }
    }
    if ((DAT_140dc2394 & 4) == 0) {
        DAT_140dc2394 = DAT_140dc2394 | 4;
        lVar2 = FUN_140200220(0x35e);
        if (lVar2 == 0) {
            iVar1 = 0x32;
        }
        else {
            iVar1 = *(int *)(lVar2 + 4);
        }
        _DAT_140dc23c8 = (longlong)iVar1;
        lVar2 = FUN_140200220(0x35e);
        if (lVar2 == 0) {
            iVar1 = 0x32;
        }
        else {
            iVar1 = *(int *)(lVar2 + 8);
        }
        _DAT_140dc23d0 = (longlong)iVar1;
        lVar2 = FUN_140200220(0x35e);
        _DAT_140dc23d8 = uVar6;
        if (lVar2 != 0) {
            _DAT_140dc23d8 = *(undefined4 *)(lVar2 + 0x1c);
        }
        lVar2 = FUN_140200220(0x35e);
        _DAT_140dc23dc = uVar5;
        if (lVar2 != 0) {
            _DAT_140dc23dc = *(undefined4 *)(lVar2 + 0x18);
        }
    }
    if ((DAT_140dc2394 & 8) == 0) {
        DAT_140dc2394 = DAT_140dc2394 | 8;
        lVar2 = FUN_140200220(0x35f);
        if (lVar2 == 0) {
            iVar1 = 0x32;
        }
        else {
            iVar1 = *(int *)(lVar2 + 4);
        }
        _DAT_140dc23e0 = (longlong)iVar1;
        lVar2 = FUN_140200220(0x35f);
        if (lVar2 != 0) {
            iVar4 = *(int *)(lVar2 + 8);
        }
        _DAT_140dc23e8 = (longlong)iVar4;
        lVar2 = FUN_140200220(0x35f);
        if (lVar2 != 0) {
            uVar6 = *(undefined4 *)(lVar2 + 0x1c);
        }
        _DAT_140dc23f0 = uVar6;
        lVar2 = FUN_140200220(0x35f);
        _DAT_140dc23f4 = uVar5;
        if (lVar2 != 0) {
            _DAT_140dc23f4 = *(undefined4 *)(lVar2 + 0x18);
        }
    }
    if (param_1 == 0) {
        puVar3 = &DAT_140dc2398;
    }
    else if (param_2 == 1) {
        puVar3 = &DAT_140dc23c8;
    }
    else if (param_2 == 2) {
        puVar3 = &DAT_140dc23e0;
    }
    else {
        puVar3 = &DAT_140dc23b0;
    }
    return puVar3;
}



longlong FUN_1403e0630(longlong param_1,ulonglong param_2,undefined4 param_3)

{
    float fVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong *plVar4;
    ulonglong uVar5;
    longlong lVar6;
    longlong lVar7;

    uVar5 = 0;
    plVar3 = (longlong *)FUN_1403e0370(param_2 != 0,param_3);
    lVar6 = *plVar3;
    if (3 < (longlong)param_2) {
        plVar4 = (longlong *)(param_1 + 0x10);
        lVar7 = (param_2 - 4 >> 2) + 1;
        uVar5 = lVar7 * 4;
        do {
            lVar2 = plVar4[-2];
            if (lVar2 != 0) {
                fVar1 = *(float *)(plVar3 + 2);
                lVar6 = lVar6 + plVar3[1];
                if (fVar1 != 0.0) {
                    if (*(int *)(lVar2 + 0x60) == 1) {
                        lVar6 = lVar6 + (longlong)((float)*(longlong *)(lVar2 + 0x58) * fVar1);
                    }
                    if (*(int *)(lVar2 + 0x78) == 1) {
                        lVar6 = lVar6 + (longlong)((float)*(longlong *)(lVar2 + 0x70) * fVar1);
                    }
                }
            }
            lVar2 = plVar4[-1];
            if (lVar2 != 0) {
                fVar1 = *(float *)(plVar3 + 2);
                lVar6 = lVar6 + plVar3[1];
                if (fVar1 != 0.0) {
                    if (*(int *)(lVar2 + 0x60) == 1) {
                        lVar6 = lVar6 + (longlong)((float)*(longlong *)(lVar2 + 0x58) * fVar1);
                    }
                    if (*(int *)(lVar2 + 0x78) == 1) {
                        lVar6 = lVar6 + (longlong)((float)*(longlong *)(lVar2 + 0x70) * fVar1);
                    }
                }
            }
            lVar2 = *plVar4;
            if (lVar2 != 0) {
                fVar1 = *(float *)(plVar3 + 2);
                lVar6 = lVar6 + plVar3[1];
                if (fVar1 != 0.0) {
                    if (*(int *)(lVar2 + 0x60) == 1) {
                        lVar6 = lVar6 + (longlong)((float)*(longlong *)(lVar2 + 0x58) * fVar1);
                    }
                    if (*(int *)(lVar2 + 0x78) == 1) {
                        lVar6 = lVar6 + (longlong)((float)*(longlong *)(lVar2 + 0x70) * fVar1);
                    }
                }
            }
            lVar2 = plVar4[1];
            if (lVar2 != 0) {
                fVar1 = *(float *)(plVar3 + 2);
                lVar6 = lVar6 + plVar3[1];
                if (fVar1 != 0.0) {
                    if (*(int *)(lVar2 + 0x60) == 1) {
                        lVar6 = lVar6 + (longlong)((float)*(longlong *)(lVar2 + 0x58) * fVar1);
                    }
                    if (*(int *)(lVar2 + 0x78) == 1) {
                        lVar6 = lVar6 + (longlong)((float)*(longlong *)(lVar2 + 0x70) * fVar1);
                    }
                }
            }
            plVar4 = plVar4 + 4;
            lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
    }
    for (; uVar5 < param_2; uVar5 = uVar5 + 1) {
        lVar7 = *(longlong *)(param_1 + uVar5 * 8);
        if (lVar7 != 0) {
            fVar1 = *(float *)(plVar3 + 2);
            lVar6 = lVar6 + plVar3[1];
            if (fVar1 != 0.0) {
                if (*(int *)(lVar7 + 0x60) == 1) {
                    lVar6 = lVar6 + (longlong)((float)*(longlong *)(lVar7 + 0x58) * fVar1);
                }
                if (*(int *)(lVar7 + 0x78) == 1) {
                    lVar6 = lVar6 + (longlong)((float)*(longlong *)(lVar7 + 0x70) * fVar1);
                }
            }
        }
    }
    return lVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_1403e0840(longlong *param_1,uint param_2,uint param_3)

{
    uint uVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    uint uVar7;
    longlong lVar8;

    lVar8 = 0;
    lVar5 = 0;
    if (param_3 < param_2) {
        param_1[1] = 0;
        *param_1 = 0;
        return param_1;
    }
    if (DAT_140c63838 == (code *)0x0) {
        if (_DAT_140c6531c == 0) {
            iVar2 = FUN_1401fbbc0();
            if (iVar2 < 0) {
                uVar1 = 0;
            }
            else {
                uVar1 = (**(code **)(*DAT_140c63f60 + 0x28))();
            }
        }
        else {
            uVar1 = 0;
        }
    }
    else {
        uVar1 = (*DAT_140c63838)(&PTR_u_DailyLoginReward_140a6a088,DAT_140c63858);
    }
    uVar7 = 0;
    lVar6 = lVar5;
    if (uVar1 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if (_DAT_140c6531c == 0) {
                    iVar2 = FUN_1401fbbc0();
                    if (iVar2 < 0) {
                        lVar3 = 0;
                    }
                    else {
                        lVar3 = (**(code **)(*DAT_140c63f60 + 0x20))(DAT_140c63f60,uVar7);
                    }
                }
                else {
                    lVar3 = 0;
                }
            }
            else {
                lVar3 = (*DAT_140c63848)(&PTR_u_DailyLoginReward_140a6a088,uVar7,DAT_140c63858);
            }
            lVar6 = lVar5;
            if (param_2 <= *(uint *)(lVar3 + 4)) {
                if (param_3 < *(uint *)(lVar3 + 4)) break;
                if ((*(int *)(lVar3 + 8) == 0) &&
                    (lVar4 = FUN_1401e8c20(*(undefined4 *)(lVar3 + 0xc)), lVar4 != 0)) {
                    lVar4 = FUN_14018db00(lVar5,lVar8 + 1,8);
                    *(longlong *)(lVar8 * 8 + lVar4) = lVar3;
                    if ((lVar5 != lVar4) && (FUN_1407db590(), lVar6 = lVar4, lVar5 != 0)) {
                        (**(code **)(*(longlong *)(lVar5 + -0x10) + 8))();
                    }
                    lVar8 = lVar8 + 1;
                }
            }
            uVar7 = uVar7 + 1;
            lVar5 = lVar6;
        } while (uVar7 < uVar1);
    }
    param_1[1] = lVar8;
    *param_1 = lVar6;
    return param_1;
}



undefined8 FUN_1403e09d0(short param_1)

{
    switch(param_1) {
        case 0xc0:
        case 0xc1:
        case 0xc2:
        case 0xc4:
        case 0xc6:
        case 199:
        case 200:
        case 0xc9:
        case 0xca:
        case 0xcb:
        case 0xcc:
        case 0xcd:
        case 0xce:
        case 0xcf:
        case 0xd1:
        case 0xd2:
        case 0xd3:
        case 0xd4:
        case 0xd6:
        case 0xd9:
        case 0xda:
        case 0xdb:
        case 0xdc:
        case 0xdd:
        case 0xdf:
        case 0xe0:
        case 0xe1:
        case 0xe2:
        case 0xe4:
        case 0xe6:
        case 0xe7:
        case 0xe8:
        case 0xe9:
        case 0xea:
        case 0xeb:
        case 0xec:
        case 0xed:
        case 0xee:
        case 0xef:
        case 0xf1:
        case 0xf2:
        case 0xf3:
        case 0xf4:
        case 0xf6:
        case 0xf9:
        case 0xfa:
        case 0xfb:
        case 0xfc:
        case 0xfd:
        case 0xff:
        case 0x152:
        case 0x153:
        case 0x178:
            break;
        default:
            if ((0x19 < (ushort)(param_1 - 0x41U)) && (0x19 < (ushort)(param_1 - 0x61U))) {
                return 0;
            }
    }
    return 1;
}



bool FUN_1403e0ae0(ushort param_1)

{
    if ((((0x1e < param_1) &&
          (((0x2e < (ushort)(param_1 - 0x7f) ||
             ((0x400200000001U >> ((ulonglong)(param_1 - 0x7f) & 0x3f) & 1) == 0)) &&
            (1 < (ushort)(param_1 + 0xdfd8))))) &&
         (((0x1f < (ushort)(param_1 - 0x80) && (param_1 != 0xd0a)) && (param_1 < 0xfffe)))) &&
        (param_1 != 0xfeff)) {
        return 0x1f < (ushort)(param_1 + 0x230);
    }
    return false;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1403e0b60(int param_1)

{
    int iVar1;
    undefined4 uVar2;
    uint uVar3;
    longlong lVar4;
    ulonglong uVar5;
    longlong *plVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    uint uVar9;
    ulonglong uVar10;
    ulonglong uVar11;

    if (DAT_140c65890 != (longlong *)0x0) {
        return 0;
    }
    if (DAT_140c63838 == (code *)0x0) {
        if ((_DAT_140c64bc0 == 0) && (iVar1 = FUN_14024a1e0(), -1 < iVar1)) {
            iVar1 = (**(code **)(*DAT_140c65460 + 0x28))();
            goto LAB_1403e0bca;
        }
        LAB_1403e0cc4:
        plVar6 = (longlong *)FUN_14018b280(0x18);
        uVar8 = 0;
        if (plVar6 == (longlong *)0x0) {
            DAT_140c65890 = (longlong *)0x0;
        }
        else {
            DAT_140c65890 = plVar6;
            *plVar6 = (longlong)&PTR_FUN_140b78268;
            plVar6[2] = 0;
            plVar6[1] = 0;
        }
        uVar3 = FUN_14024a830();
        uVar10 = uVar8;
        if (uVar3 != 0) {
            do {
                if (DAT_140c63848 == (code *)0x0) {
                    uVar5 = uVar8;
                    if ((_DAT_140c640c0 == 0) && (iVar1 = FUN_14024a620(), -1 < iVar1)) {
                        uVar5 = (**(code **)(*DAT_140c65660 + 0x20))(DAT_140c65660,uVar10);
                    }
                }
                else {
                    uVar5 = (*DAT_140c63848)(&PTR_u_WordFilterChina_140a6e148,uVar10,DAT_140c63858);
                }
                uVar5 = *(ulonglong *)(uVar5 + 8);
                uVar7 = uVar8;
                if ((uVar5 != 0) && (uVar5 <= DAT_140c3fe70)) {
                    uVar7 = DAT_140c3fe68 + uVar5;
                }
                (**(code **)(*DAT_140c65890 + 0x18))(DAT_140c65890,uVar7,2);
                uVar9 = (int)uVar10 + 1;
                uVar10 = (ulonglong)uVar9;
            } while (uVar9 < uVar3);
        }
    }
    else {
        iVar1 = (*DAT_140c63838)(&PTR_u_WordFilter_140a6e110,DAT_140c63858);
        LAB_1403e0bca:
        if (iVar1 == 0) goto LAB_1403e0cc4;
        lVar4 = FUN_14018b280(0xb0,0);
        uVar8 = 0;
        if (lVar4 == 0) {
            DAT_140c65890 = (longlong *)0x0;
        }
        else {
            uVar2 = FUN_14024a3f0();
            DAT_140c65890 = (longlong *)FUN_14079c320(lVar4,uVar2);
        }
        uVar3 = FUN_14024a3f0();
        uVar10 = uVar8;
        if (uVar3 != 0) {
            do {
                if (DAT_140c63848 == (code *)0x0) {
                    uVar5 = uVar8;
                    if (_DAT_140c64bc0 == 0) {
                        iVar1 = FUN_14024a1e0();
                        if (iVar1 < 0) {
                            uVar5 = 0;
                        }
                        else {
                            uVar5 = (**(code **)(*DAT_140c65460 + 0x20))(DAT_140c65460,uVar10);
                        }
                    }
                }
                else {
                    uVar5 = (*DAT_140c63848)(&PTR_u_WordFilter_140a6e110,uVar10,DAT_140c63858);
                }
                if ((param_1 == 0) || (param_1 == *(int *)(uVar5 + 0x18))) {
                    uVar7 = *(ulonglong *)(uVar5 + 8);
                    uVar11 = uVar8;
                    if ((uVar7 != 0) && (uVar7 <= DAT_140c3fe70)) {
                        uVar11 = DAT_140c3fe68 + uVar7;
                    }
                    (**(code **)(*DAT_140c65890 + 0x18))
                            (DAT_140c65890,uVar11,*(undefined4 *)(uVar5 + 0x10),
                             *(undefined4 *)(uVar5 + 0x1c));
                }
                uVar9 = (int)uVar10 + 1;
                uVar10 = (ulonglong)uVar9;
            } while (uVar9 < uVar3);
        }
    }
    FUN_1407e4830(&DAT_140c89730,0,0x2b8);
    _DAT_140c89730 = 0x506;
    _DAT_140c89738 = 5;
    _DAT_140c89740 = 0x1f;
    _DAT_140c89748 = 0x27;
    _DAT_140c89750 = 3;
    _DAT_140c89758 = 0x11;
    _DAT_140c89760 = 0x23;
    _DAT_140c89768 = 3;
    _DAT_140c89770 = 0x1a;
    _DAT_140c89790 = 2;
    _DAT_140c89798 = 1;
    _DAT_140c897a0 = 0x11;
    _DAT_140c89880 = 0xc0;
    _DAT_140c89888 = 0;
    _DAT_140c89890 = 0xc9;
    _DAT_140c898c8 = 0xc0;
    _DAT_140c898d0 = 0;
    _DAT_140c898d8 = 0x191;
    _DAT_140c89898 = 0x80;
    _DAT_140c898a0 = 0;
    _DAT_140c898a8 = 0x21;
    _DAT_140c898b0 = 0xc0;
    _DAT_140c898b8 = 0;
    _DAT_140c898c0 = 0x191;
    _DAT_140c897a8 = 2;
    _DAT_140c897b0 = 1;
    _DAT_140c897b8 = 0x15;
    _DAT_140c897c0 = 0x27;
    _DAT_140c897c8 = 3;
    _DAT_140c897d0 = 0x19;
    _DAT_140c89808 = 0xc0;
    _DAT_140c89810 = 0;
    _DAT_140c89818 = 500;
    _DAT_140c897d8 = 0;
    _DAT_140c897e0 = 1;
    _DAT_140c897e8 = 500;
    _DAT_140c897f0 = 0;
    _DAT_140c897f8 = 1;
    _DAT_140c89800 = 0x32;
    _DAT_140c89820 = 0x30;
    _DAT_140c89828 = 1;
    _DAT_140c89830 = 0x15;
    _DAT_140c89838 = 0x82;
    _DAT_140c89840 = 0;
    _DAT_140c89848 = 500;
    _DAT_140c89850 = 0x80;
    _DAT_140c89858 = 0;
    _DAT_140c89860 = 0x21;
    _DAT_140c89868 = 0x80;
    _DAT_140c89870 = 0;
    _DAT_140c89878 = 0x15;
    _DAT_140c898e0 = 0x30;
    _DAT_140c898e8 = 3;
    _DAT_140c898f0 = 0x21;
    _DAT_140c898f8 = 0x80;
    _DAT_140c89900 = 0;
    _DAT_140c89908 = 0x41;
    _DAT_140c89910 = 0x80;
    _DAT_140c89918 = 0;
    _DAT_140c89920 = 0x81;
    _DAT_140c89928 = 0x10;
    _DAT_140c89930 = 5;
    _DAT_140c89938 = 0xfb;
    _DAT_140c89940 = 0x80;
    _DAT_140c89948 = 0;
    _DAT_140c89950 = 0x81;
    _DAT_140c89958 = 0x706;
    _DAT_140c89960 = 5;
    _DAT_140c89968 = 0x1f;
    _DAT_140c89970 = 0;
    _DAT_140c89978 = 1;
    _DAT_140c89980 = 0x1ec;
    _DAT_140c89988 = 0x116;
    _DAT_140c89990 = 1;
    _DAT_140c89998 = 0x1d;
    _DAT_140c899a0 = 0;
    _DAT_140c899a8 = 1;
    _DAT_140c899b0 = 0x5b;
    _DAT_140c899b8 = 0x40;
    _DAT_140c899c0 = 1;
    if (DAT_140c63840 == (code *)0x0) {
        if ((_DAT_140c638ac == 0) && (iVar1 = FUN_1401fffc0(), -1 < iVar1)) {
            lVar4 = (**(code **)(*DAT_140c64c58 + 0x18))(DAT_140c64c58,0x4bd);
            goto LAB_1403e1126;
        }
    }
    else {
        lVar4 = (*DAT_140c63840)(&PTR_u_GameFormula_140a6a408,0x4bd,DAT_140c63858);
        LAB_1403e1126:
        if (lVar4 != 0) {
            iVar1 = *(int *)(lVar4 + 4);
            goto LAB_1403e1135;
        }
    }
    iVar1 = 500000;
    LAB_1403e1135:
    _DAT_140c899c8 = (longlong)iVar1;
    _DAT_140c899d0 = 0x200;
    _DAT_140c899d8 = 1;
    _DAT_140c899e0 = 0x400;
    return 0;
}



bool FUN_1403e1170(void *param_1,uint param_2)

{
    longlong lVar1;
    short sVar2;
    uint uVar3;
    bool bVar4;
    bool bVar5;
    short sVar6;
    int iVar7;
    int iVar8;
    BOOL BVar9;
    ulonglong uVar10;
    int iVar11;
    ulonglong uVar13;
    void *lpv;
    bool bVar14;
    ulonglong uVar15;
    ulonglong uVar16;
    ulonglong uVar17;
    bool bVar18;
    int local_res10 [2];
    ulonglong local_res18;
    ulonglong local_res20;
    ulonglong uVar12;

    if (0x1c < param_2) {
        return false;
    }
    lVar1 = (longlong)(int)param_2 * 0x18;
    if ((uint *)(&DAT_140c89730 + lVar1) == (uint *)0x0) {
        return false;
    }
    local_res18 = *(ulonglong *)(&DAT_140c89738 + lVar1);
    uVar13 = *(ulonglong *)(&DAT_140c89740 + lVar1);
    uVar3 = *(uint *)(&DAT_140c89730 + lVar1);
    uVar16 = 0;
    iVar8 = 0;
    bVar14 = true;
    bVar4 = false;
    uVar12 = 1;
    iVar11 = 1;
    lpv = param_1;
    uVar17 = uVar16;
    iVar7 = iVar8;
    local_res20 = uVar13;
    if (param_1 != (void *)0x0) {
        uVar10 = uVar16;
        uVar15 = uVar16;
        iVar7 = 0;
        if (uVar13 != 0) {
            do {
                iVar7 = (int)uVar15;
                iVar8 = (int)uVar10;
                iVar11 = (int)uVar12;
                sVar2 = *(short *)((longlong)lpv + uVar17 * 2);
                if (sVar2 == 0) {
                    if (uVar17 < uVar13) goto LAB_1403e13a2;
                    break;
                }
                if (sVar2 == 0x20) {
                    if ((uVar3 & 0x10) != 0) {
                        return false;
                    }
                    if ((iVar8 != 0) && ((uVar3 & 1) != 0)) {
                        return false;
                    }
                    if ((bVar14) && ((uVar3 & 2) != 0)) {
                        return false;
                    }
                    if ((iVar7 != 0) && ((uVar3 >> 10 & 1) != 0)) {
                        return false;
                    }
                    uVar15 = 1;
                    uVar10 = 1;
                }
                else if ((sVar2 == 10) || (sVar2 == 0xd)) {
                    if ((uVar3 & 0x40) == 0) {
                        return false;
                    }
                }
                else if ((sVar2 != 0x5f) || ((uVar3 >> 9 & 1) == 0)) {
                    iVar7 = FUN_1403e09d0();
                    bVar5 = bVar4;
                    if (iVar7 == 0) {
                        if ((ushort)(sVar2 - 0x30U) < 10) {
                            bVar5 = true;
                            goto LAB_1403e12d7;
                        }
                        iVar8 = FUN_1403e0ae0(sVar2);
                        LAB_1403e12b2:
                        bVar18 = true;
                        if (iVar8 == 0) {
                            return false;
                        }
                    }
                    else {
                        LAB_1403e12d7:
                        iVar8 = 1;
                        if (iVar7 == 0) goto LAB_1403e12b2;
                        sVar6 = FUN_140056430();
                        bVar18 = sVar2 == sVar6;
                        uVar13 = local_res20;
                        lpv = param_1;
                    }
                    if ((bVar14) && ((uVar3 & 4) != 0)) {
                        if (iVar7 == 0) {
                            return false;
                        }
                    }
                    else if (iVar7 == 0) {
                        if ((!bVar5) && ((uVar3 & 0x20) != 0)) {
                            return false;
                        }
                        if ((uVar3 >> 8 & 1) != 0) {
                            return false;
                        }
                    }
                    if ((uVar3 & 8) != 0) {
                        if (bVar14) {
                            uVar10 = uVar16;
                            uVar12 = uVar16;
                            bVar14 = bVar4;
                            if (bVar18) {
                                return false;
                            }
                            goto LAB_1403e1343;
                        }
                        if (!bVar18) {
                            return false;
                        }
                    }
                    uVar10 = 0;
                    uVar12 = 0;
                    bVar14 = bVar4;
                }
                LAB_1403e1343:
                iVar7 = (int)uVar15;
                iVar8 = (int)uVar10;
                iVar11 = (int)uVar12;
                uVar17 = uVar17 + 1;
            } while (uVar17 < uVar13);
            if ((uVar13 != 0) && (*(short *)((longlong)lpv + uVar13 * 2 + -2) != 0)) {
                return false;
            }
        }
        LAB_1403e13a2:
        if ((iVar8 != 0) && ((uVar3 & 2) != 0)) {
            return false;
        }
        if (iVar11 == 0) goto LAB_1403e13b5;
    }
    if (-1 < (char)uVar3) {
        return false;
    }
    LAB_1403e13b5:
    if ((local_res18 <= uVar17) && ((iVar7 != 0 || ((uVar3 >> 10 & 1) == 0)))) {
        if (uVar17 != 0) {
            local_res10[0] = 0x100;
            BVar9 = IsTextUnicode(lpv,(int)uVar17 * 2,local_res10);
            return BVar9 == 0;
        }
        return true;
    }
    return false;
}
