//
// Created by flop on 04.04.22.
//
#include "../../include.h"

longlong FUN_1404803f0(longlong param_1,longlong param_2,longlong param_3)

{
    longlong lVar1;
    longlong lVar2;

    lVar1 = FUN_140482150(param_3,*(undefined8 *)(param_1 + 0x10),param_2);
    lVar2 = *(longlong *)(param_1 + 0x10);
    for (; lVar1 != lVar2; lVar1 = lVar1 + 0x28) {
        if (*(longlong *)(lVar1 + 0x10) != 0) {
            FUN_14018b900(*(longlong *)(lVar1 + 0x10),0);
        }
    }
    lVar2 = SUB168(SEXT816(-0x6666666666666667) * SEXT816(param_3 - param_2) >> 0x40,0);
    *(longlong *)(param_1 + 0x10) =
            *(longlong *)(param_1 + 0x10) + ((lVar2 >> 4) - (lVar2 >> 0x3f)) * 0x28;
    return param_2;
}



longlong FUN_1404804a0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;

    lVar1 = *(longlong *)(param_1 + 0x40);
    iVar3 = FUN_140491ef0(param_3);
    lVar5 = *(longlong *)(lVar1 + 0x10);
    while( true ) {
        if (lVar5 == lVar1) {
            return 0;
        }
        if ((*(int *)(**(longlong **)(*(longlong *)(lVar5 + 0x28) + 0x48) + 0x14) == iVar3) &&
            (lVar4 = FUN_140572e80(*(longlong *)(lVar5 + 0x28),param_2,param_3), lVar4 != 0)) break;
        lVar4 = *(longlong *)(lVar5 + 0x18);
        if (lVar4 == 0) {
            lVar4 = *(longlong *)(lVar5 + 8);
            if (lVar5 == *(longlong *)(lVar4 + 0x18)) {
                do {
                    lVar5 = lVar4;
                    lVar4 = *(longlong *)(lVar5 + 8);
                } while (lVar5 == *(longlong *)(lVar4 + 0x18));
            }
            if (*(longlong *)(lVar5 + 0x18) != lVar4) {
                lVar5 = lVar4;
            }
        }
        else {
            for (lVar2 = *(longlong *)(lVar4 + 0x10); lVar5 = lVar4, lVar2 != 0;
                 lVar2 = *(longlong *)(lVar2 + 0x10)) {
                lVar4 = lVar2;
            }
        }
    }
    return lVar4;
}



undefined8 FUN_140480580(undefined8 param_1,uint param_2,undefined8 param_3)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;

    lVar1 = DAT_140c65970;
    if (*(longlong *)(DAT_140c65970 + 0x58) == 0) {
        return 0;
    }
    lVar6 = *(longlong *)(DAT_140c65968 + 0x70);
    lVar3 = *(longlong *)(lVar6 + 8);
    lVar4 = lVar3;
    lVar7 = lVar6;
    if (lVar3 != 0) {
        do {
            if (param_2 < *(uint *)(lVar4 + 0x20)) {
                lVar5 = *(longlong *)(lVar4 + 0x10);
                lVar7 = lVar4;
            }
            else {
                lVar5 = *(longlong *)(lVar4 + 0x18);
            }
            lVar4 = lVar5;
        } while (lVar5 != 0);
        while (lVar3 != 0) {
            if (*(uint *)(lVar3 + 0x20) < param_2) {
                lVar3 = *(longlong *)(lVar3 + 0x18);
            }
            else {
                lVar6 = lVar3;
                lVar3 = *(longlong *)(lVar3 + 0x10);
            }
        }
    }
    while( true ) {
        if (lVar6 == lVar7) {
            return 0;
        }
        iVar2 = FUN_1404818e0(lVar1,*(undefined8 *)(lVar6 + 0x28),param_3);
        if (iVar2 != 0) break;
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
            for (lVar4 = *(longlong *)(lVar3 + 0x10); lVar6 = lVar3, lVar4 != 0;
                 lVar4 = *(longlong *)(lVar4 + 0x10)) {
                lVar3 = lVar4;
            }
        }
    }
    return 1;
}



undefined8 FUN_1404806a0(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res18;

    if (param_2 != 0) {
        lVar1 = *(longlong *)(param_1 + 0x10);
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
        if (local_res18 != lVar1) {
            return *(undefined8 *)(local_res18 + 0x28);
        }
    }
    return 0;
}



undefined8 FUN_140480700(longlong param_1,longlong param_2)

{
    int iVar1;
    longlong lVar2;
    int iVar3;
    longlong lVar4;
    uint uVar5;

    uVar5 = 0;
    lVar4 = 0x30;
    do {
        iVar1 = *(int *)(lVar4 + *(longlong *)(param_1 + 8));
        for (lVar2 = *(longlong *)(param_2 + 0x15c8); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x18)) {
            iVar3 = (**(code **)(**(longlong **)(lVar2 + 0x38) + 8))();
            if (iVar3 == iVar1) {
                return 1;
            }
        }
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 4;
    } while (uVar5 < 3);
    return 0;
}



undefined8 FUN_140480790(longlong param_1,longlong param_2,int param_3)

{
    int iVar1;
    longlong lVar2;
    int iVar3;
    longlong lVar4;
    uint uVar5;
    uint uVar6;

    uVar6 = 0;
    lVar4 = 0x30;
    do {
        iVar1 = *(int *)(lVar4 + *(longlong *)(param_1 + 8));
        if (param_3 == iVar1) {
            uVar5 = 0;
            for (lVar2 = *(longlong *)(param_2 + 0x15c8); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x18))
            {
                iVar3 = (**(code **)(**(longlong **)(lVar2 + 0x38) + 8))();
                if (iVar3 == iVar1) {
                    uVar5 = uVar5 + *(int *)(lVar2 + 0x50);
                }
            }
            if (*(uint *)(lVar4 + 0xc + *(longlong *)(param_1 + 8)) <= uVar5) {
                return 1;
            }
        }
        uVar6 = uVar6 + 1;
        lVar4 = lVar4 + 4;
        if (2 < uVar6) {
            return 0;
        }
    } while( true );
}



undefined8 FUN_140480840(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(DAT_140c65960 + 0x10);
    local_res8 = lVar1;
    for (lVar2 = *(longlong *)(lVar1 + 8); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x10)) {
        local_res8 = lVar2;
    }
    if ((local_res8 == lVar1) || (*(int *)(local_res8 + 0x20) != 0)) {
        local_res8 = lVar1;
    }
    if ((local_res8 != lVar1) && (local_res8 != -0x28)) {
        lVar1 = *(longlong *)(local_res8 + 0xf0);
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
    }
    return 0;
}



undefined8 FUN_1404808f0(undefined8 param_1,uint param_2,int param_3)

{
    longlong *plVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    longlong local_res8;

    plVar1 = DAT_140c65960;
    lVar6 = DAT_140c65960[2];
    local_res8 = lVar6;
    for (lVar3 = *(longlong *)(lVar6 + 8); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x10)) {
        local_res8 = lVar3;
    }
    if ((local_res8 == lVar6) || (*(int *)(local_res8 + 0x20) != 0)) {
        local_res8 = lVar6;
    }
    if ((local_res8 != lVar6) && (local_res8 != -0x28)) {
        lVar6 = *(longlong *)(local_res8 + 0xd0);
        lVar3 = *(longlong *)(lVar6 + 8);
        lVar4 = lVar3;
        lVar7 = lVar6;
        if (lVar3 != 0) {
            do {
                if (param_2 < *(uint *)(lVar4 + 0x20)) {
                    lVar5 = *(longlong *)(lVar4 + 0x10);
                    lVar7 = lVar4;
                }
                else {
                    lVar5 = *(longlong *)(lVar4 + 0x18);
                }
                lVar4 = lVar5;
            } while (lVar5 != 0);
            while (lVar3 != 0) {
                if (*(uint *)(lVar3 + 0x20) < param_2) {
                    lVar3 = *(longlong *)(lVar3 + 0x18);
                }
                else {
                    lVar6 = lVar3;
                    lVar3 = *(longlong *)(lVar3 + 0x10);
                }
            }
        }
        while( true ) {
            if (lVar6 == lVar7) {
                return 0;
            }
            iVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,*(undefined8 *)(lVar6 + 0x28));
            if ((iVar2 == 0) || (iVar2 == param_3)) break;
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
                for (lVar4 = *(longlong *)(lVar3 + 0x10); lVar6 = lVar3, lVar4 != 0;
                     lVar4 = *(longlong *)(lVar4 + 0x10)) {
                    lVar3 = lVar4;
                }
            }
        }
        return *(undefined8 *)(lVar6 + 0x28);
    }
    return 0;
}



char ** FUN_140480a60(longlong param_1,char **param_2,int *param_3)

{
    int iVar1;
    int iVar2;
    int iVar3;
    char **ppcVar4;
    char *pcVar5;
    char *pcVar6;
    char *pcVar7;
    char *pcVar8;
    bool bVar9;
    undefined local_res8 [8];

    pcVar5 = *(char **)(param_1 + 8);
    pcVar7 = *(char **)(pcVar5 + 8);
    bVar9 = true;
    pcVar8 = pcVar5;
    if (pcVar7 != (char *)0x0) {
        iVar1 = *param_3;
        do {
            pcVar8 = pcVar7;
            iVar2 = *(int *)(pcVar8 + 0x20);
            bVar9 = SBORROW4(iVar1,iVar2);
            iVar3 = iVar1 - iVar2;
            if (iVar1 == iVar2) {
                bVar9 = SBORROW4(param_3[1],*(int *)(pcVar8 + 0x24));
                iVar3 = param_3[1] - *(int *)(pcVar8 + 0x24);
            }
            bVar9 = bVar9 != iVar3 < 0;
            if (bVar9) {
                pcVar7 = *(char **)(pcVar8 + 0x10);
            }
            else {
                pcVar7 = *(char **)(pcVar8 + 0x18);
            }
        } while (pcVar7 != (char *)0x0);
    }
    pcVar6 = pcVar8;
    if (bVar9) {
        if (pcVar8 == *(char **)(pcVar5 + 0x10)) goto LAB_140480acb;
        if ((*pcVar8 == '\0') && (*(char **)(*(longlong *)(pcVar8 + 8) + 8) == pcVar8)) {
            pcVar6 = *(char **)(pcVar8 + 0x18);
        }
        else {
            pcVar6 = *(char **)(pcVar8 + 0x10);
            if (pcVar6 == (char *)0x0) {
                pcVar6 = *(char **)(pcVar8 + 8);
                pcVar5 = pcVar6;
                if (pcVar8 == *(char **)(pcVar6 + 0x10)) {
                    do {
                        pcVar6 = *(char **)(pcVar5 + 8);
                        bVar9 = pcVar5 == *(char **)(pcVar6 + 0x10);
                        pcVar5 = pcVar6;
                    } while (bVar9);
                }
            }
            else {
                for (pcVar5 = *(char **)(pcVar6 + 0x18); pcVar5 != (char *)0x0;
                     pcVar5 = *(char **)(pcVar5 + 0x18)) {
                    pcVar6 = pcVar5;
                }
            }
        }
    }
    iVar1 = *(int *)(pcVar6 + 0x20);
    iVar2 = *param_3;
    bVar9 = SBORROW4(iVar1,iVar2);
    iVar3 = iVar1 - iVar2;
    if (iVar1 == iVar2) {
        bVar9 = SBORROW4(*(int *)(pcVar6 + 0x24),param_3[1]);
        iVar3 = *(int *)(pcVar6 + 0x24) - param_3[1];
    }
    bVar9 = bVar9 != iVar3 < 0;
    if (!bVar9) {
        *param_2 = pcVar6;
        *(bool *)(param_2 + 1) = bVar9;
        return param_2;
    }
    LAB_140480acb:
    ppcVar4 = (char **)FUN_140481980(param_1,local_res8,pcVar7,pcVar8,param_3);
    *param_2 = *ppcVar4;
    *(undefined *)(param_2 + 1) = 1;
    return param_2;
}



void FUN_140480b80(longlong param_1,int param_2)

{
    float *pfVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    int *piVar8;
    uint uVar9;
    int iVar10;
    undefined4 *puVar11;
    longlong lVar12;
    float *pfVar13;
    undefined4 *puVar14;
    ulonglong uVar15;
    float in_xmmTmp2_Dd;
    float local_18;
    float fStack20;
    float fStack16;
    float fStack12;

    piVar8 = DAT_140c63750;
    if (param_2 == 0) {
        puVar14 = (undefined4 *)(param_1 + 0x90);
    }
    else {
        puVar14 = (undefined4 *)(((longlong)(param_2 + -1) + 2) * 0x10 + param_1);
    }
    uVar15 = (ulonglong)param_2;
    pfVar13 = (float *)(param_1 + ((longlong)*DAT_140c63750 + 2) * 0x10);
    local_18 = *pfVar13;
    fStack20 = pfVar13[1];
    fStack16 = pfVar13[2];
    fStack12 = pfVar13[3];
    if (uVar15 < 5) {
        lVar12 = 5 - uVar15;
        puVar11 = (undefined4 *)((uVar15 + 2) * 0x10 + param_1);
        do {
            uVar5 = puVar14[1];
            uVar6 = puVar14[2];
            uVar7 = puVar14[3];
            *puVar11 = *puVar14;
            puVar11[1] = uVar5;
            puVar11[2] = uVar6;
            puVar11[3] = uVar7;
            lVar12 = lVar12 + -1;
            puVar11 = puVar11 + 4;
        } while (lVar12 != 0);
    }
    uVar9 = (1 << ((byte)param_2 & 0x1f)) - 1;
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & uVar9;
    pfVar13 = (float *)(((longlong)*piVar8 + 2) * 0x10 + param_1);
    fVar2 = pfVar13[1];
    fVar3 = pfVar13[2];
    fVar4 = pfVar13[3];
    iVar10 = movmskps(uVar9,CONCAT412(-(uint)(fStack12 != in_xmmTmp2_Dd),
                                      CONCAT48(-(uint)(fStack16 != fVar4),
                                               CONCAT44(-(uint)(fStack20 != fVar2),
                                                        -(uint)(local_18 != *pfVar13)))));
    if (iVar10 != 0) {
        pfVar1 = *(float **)(param_1 + 0xa0);
        if (pfVar1 != (float *)0x0) {
            *pfVar1 = *pfVar13;
            pfVar1[1] = fVar2;
            pfVar1[2] = fVar3;
            pfVar1[3] = fVar4;
        }
        if (*(code **)(param_1 + 0xb0) != (code *)0x0) {
            (**(code **)(param_1 + 0xb0))(&local_18);
        }
    }
    return;
}



void FUN_140480c50(longlong param_1,int param_2,int param_3)

{
    float fVar1;
    float fVar2;
    float fVar3;
    uint uVar4;
    int iVar5;
    float *pfVar6;
    longlong lVar7;
    float *pfVar8;
    ulonglong uVar9;
    float in_xmmTmp2_Dd;
    float local_18;
    float fStack20;
    float fStack16;
    float fStack12;

    if (param_3 < param_2) {
        pfVar8 = (float *)(((longlong)param_3 + 2) * 0x10 + param_1);
        pfVar6 = (float *)(param_1 + ((longlong)param_2 + 2) * 0x10);
        local_18 = *pfVar6;
        fStack20 = pfVar6[1];
        fStack16 = pfVar6[2];
        fStack12 = pfVar6[3];
        uVar9 = (ulonglong)(param_3 + 1);
        if (uVar9 < 5) {
            lVar7 = 5 - uVar9;
            pfVar6 = (float *)((uVar9 + 2) * 0x10 + param_1);
            do {
                fVar1 = pfVar8[1];
                fVar2 = pfVar8[2];
                fVar3 = pfVar8[3];
                *pfVar6 = *pfVar8;
                pfVar6[1] = fVar1;
                pfVar6[2] = fVar2;
                pfVar6[3] = fVar3;
                lVar7 = lVar7 + -1;
                pfVar6 = pfVar6 + 4;
            } while (lVar7 != 0);
        }
        uVar4 = (2 << ((byte)param_3 & 0x1f)) - 1;
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & uVar4;
        if (*(code **)(param_1 + 0xb0) != (code *)0x0) {
            iVar5 = movmskps(uVar4,CONCAT412(-(uint)(pfVar8[3] != in_xmmTmp2_Dd),
                                             CONCAT48(-(uint)(pfVar8[2] != fStack12),
                                                      CONCAT44(-(uint)(pfVar8[1] != fStack20),
                                                               -(uint)(*pfVar8 != local_18)))));
            if (iVar5 != 0) {
                (**(code **)(param_1 + 0xb0))(&local_18);
            }
        }
    }
    return;
}



longlong FUN_140480d00(longlong *param_1,undefined4 *param_2)

{
    undefined4 *puVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    lVar2 = param_1[1];
    lVar4 = FUN_14018db00(*param_1,lVar2 + 1,0xc);
    puVar1 = (undefined4 *)(lVar4 + lVar2 * 0xc);
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    if (*param_1 != lVar4) {
        FUN_1407db590(lVar4,*param_1,param_1[1] * 0xc);
        lVar3 = *param_1;
        if (lVar3 != 0) {
            (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
        }
        *param_1 = lVar4;
    }
    param_1[1] = lVar2 + 1;
    return lVar2;
}



void FUN_140480db0(longlong *param_1,longlong param_2)

{
    int iVar1;
    longlong lVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    lVar2 = *param_1 + param_2 * 0xc;
    uVar4 = param_1[1] - 1;
    FUN_1407db590(lVar2,lVar2 + 0xc,(uVar4 - param_2) * 0xc);
    puVar3 = (undefined8 *)*param_1;
    if (uVar4 == 0) goto LAB_140480e95;
    if (puVar3 == (undefined8 *)0x0) {
        lVar2 = uVar4 * 0xc + 0x10;
        uVar5 = uVar4;
    }
    else {
        if (uVar4 < (ulonglong)puVar3[-1] || uVar4 == puVar3[-1]) goto LAB_140480e95;
        lVar2 = FUN_14018a3e0(uVar4 * 0xc + 0x10);
        uVar5 = (lVar2 - 0x10U) / 0xc;
        lVar2 = uVar5 * 0xc + 0x10;
        iVar1 = (**(code **)puVar3[-2])(puVar3 + -2,lVar2);
        if (iVar1 != 0) {
            puVar3[-1] = uVar5;
            goto LAB_140480e95;
        }
    }
    puVar3 = (undefined8 *)FUN_14018b280(lVar2,0);
    if (puVar3 != (undefined8 *)0x0) {
        puVar3[1] = uVar5;
        *puVar3 = &PTR_LAB_140b55060;
    }
    puVar3 = puVar3 + 2;
    LAB_140480e95:
    if ((undefined8 *)*param_1 != puVar3) {
        FUN_1407db590(puVar3,(undefined8 *)*param_1,uVar4 * 0xc);
        lVar2 = *param_1;
        if (lVar2 != 0) {
            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        *param_1 = (longlong)puVar3;
    }
    param_1[1] = uVar4;
    return;
}



longlong FUN_140480ed0(longlong *param_1,undefined4 *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    undefined4 *puVar4;
    undefined4 *puVar5;
    ulonglong uVar6;

    lVar1 = param_1[1];
    lVar3 = FUN_14018db00(*param_1,lVar1 + 1);
    puVar4 = (undefined4 *)(lVar1 * 0x58 + lVar3);
    if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *param_2;
        puVar4[1] = param_2[1];
        puVar4[2] = param_2[2];
        puVar4[3] = param_2[3];
        puVar4[4] = param_2[4];
        *(undefined *)(puVar4 + 5) = *(undefined *)(param_2 + 5);
        *(undefined8 *)(puVar4 + 6) = *(undefined8 *)(param_2 + 6);
        *(undefined *)(puVar4 + 8) = *(undefined *)(param_2 + 8);
        *(undefined8 *)(puVar4 + 10) = *(undefined8 *)(param_2 + 10);
        *(undefined *)(puVar4 + 0xc) = *(undefined *)(param_2 + 0xc);
        *(undefined8 *)(puVar4 + 0xe) = *(undefined8 *)(param_2 + 0xe);
        *(undefined *)(puVar4 + 0x10) = *(undefined *)(param_2 + 0x10);
        *(undefined8 *)(puVar4 + 0x12) = *(undefined8 *)(param_2 + 0x12);
        *(undefined *)(puVar4 + 0x14) = *(undefined *)(param_2 + 0x14);
    }
    if (*param_1 != lVar3) {
        uVar6 = 0;
        if (param_1[1] != 0) {
            puVar4 = (undefined4 *)(lVar3 + 0x10);
            do {
                if (puVar4 + -4 != (undefined4 *)0x0) {
                    puVar5 = (undefined4 *)((longlong)puVar4 + *param_1 + (-0x10 - lVar3));
                    puVar4[-4] = *puVar5;
                    puVar4[-3] = puVar5[1];
                    puVar4[-2] = puVar5[2];
                    puVar4[-1] = puVar5[3];
                    *puVar4 = puVar5[4];
                    *(undefined *)(puVar4 + 1) = *(undefined *)(puVar5 + 5);
                    *(undefined8 *)(puVar4 + 2) = *(undefined8 *)(puVar5 + 6);
                    *(undefined *)(puVar4 + 4) = *(undefined *)(puVar5 + 8);
                    *(undefined8 *)(puVar4 + 6) = *(undefined8 *)(puVar5 + 10);
                    *(undefined *)(puVar4 + 8) = *(undefined *)(puVar5 + 0xc);
                    *(undefined8 *)(puVar4 + 10) = *(undefined8 *)(puVar5 + 0xe);
                    *(undefined *)(puVar4 + 0xc) = *(undefined *)(puVar5 + 0x10);
                    *(undefined8 *)(puVar4 + 0xe) = *(undefined8 *)(puVar5 + 0x12);
                    *(undefined *)(puVar4 + 0x10) = *(undefined *)(puVar5 + 0x14);
                }
                uVar6 = uVar6 + 1;
                puVar4 = puVar4 + 0x16;
            } while (uVar6 < (ulonglong)param_1[1]);
        }
        lVar2 = *param_1;
        if (lVar2 != 0) {
            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        *param_1 = lVar3;
    }
    param_1[1] = lVar1 + 1;
    return lVar1;
}



longlong FUN_140481060(longlong *param_1,undefined4 *param_2)

{
    undefined4 *puVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    lVar2 = param_1[1];
    lVar4 = FUN_14018db00(*param_1,lVar2 + 1,0x14);
    puVar1 = (undefined4 *)(lVar4 + lVar2 * 0x14);
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    puVar1[3] = param_2[3];
    puVar1[4] = param_2[4];
    if (*param_1 != lVar4) {
        FUN_1407db590(lVar4,*param_1,param_1[1] * 0x14);
        lVar3 = *param_1;
        if (lVar3 != 0) {
            (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
        }
        *param_1 = lVar4;
    }
    param_1[1] = lVar2 + 1;
    return lVar2;
}



void FUN_140481120(longlong *param_1,ulonglong param_2)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    longlong lVar4;
    longlong lVar5;
    undefined4 *puVar6;
    undefined8 *puVar7;
    undefined4 *puVar8;
    ulonglong uVar9;

    if ((ulonglong)param_1[1] < param_2 || param_1[1] == param_2) {
        lVar4 = FUN_14018db00(*param_1);
        uVar9 = param_1[1];
        if (uVar9 < param_2) {
            puVar7 = (undefined8 *)(uVar9 * 0x40 + lVar4);
            lVar5 = param_2 - uVar9;
            do {
                if (puVar7 != (undefined8 *)0x0) {
                    *puVar7 = 0;
                    puVar7[1] = 0;
                    *(undefined4 *)(puVar7 + 2) = 0;
                }
                puVar7 = puVar7 + 8;
                lVar5 = lVar5 + -1;
            } while (lVar5 != 0);
        }
        if (*param_1 != lVar4) {
            uVar9 = 0;
            if (param_1[1] != 0) {
                puVar8 = (undefined4 *)(lVar4 + 0x30);
                do {
                    if (puVar8 + -0xc != (undefined4 *)0x0) {
                        puVar6 = (undefined4 *)
                                ((longlong)puVar8 + (longlong)(&DAT_ffffffffffffffd0 + (*param_1 - lVar4)));
                        puVar8[-0xc] = *puVar6;
                        puVar8[-0xb] = puVar6[1];
                        puVar8[-10] = puVar6[2];
                        puVar8[-9] = puVar6[3];
                        puVar8[-8] = puVar6[4];
                        uVar1 = puVar6[9];
                        uVar2 = puVar6[10];
                        uVar3 = puVar6[0xb];
                        puVar8[-4] = puVar6[8];
                        puVar8[-3] = uVar1;
                        puVar8[-2] = uVar2;
                        puVar8[-1] = uVar3;
                        *puVar8 = puVar6[0xc];
                        puVar8[1] = puVar6[0xd];
                        puVar8[2] = puVar6[0xe];
                    }
                    uVar9 = uVar9 + 1;
                    puVar8 = puVar8 + 0x10;
                } while (uVar9 < (ulonglong)param_1[1]);
            }
            lVar5 = *param_1;
            if (lVar5 != 0) {
                (**(code **)(*(longlong *)(lVar5 + -0x10) + 8))(lVar5 + -0x10);
            }
            *param_1 = lVar4;
        }
        param_1[1] = param_2;
        return;
    }
    param_1[1] = param_2;
    return;
}



void FUN_140481240(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
    undefined4 uVar1;
    longlong lVar2;
    ulonglong uVar3;
    longlong lVar4;
    undefined4 *puVar5;
    undefined8 uVar6;
    longlong lVar7;
    longlong lVar8;
    undefined4 local_40 [2];
    longlong local_38;
    undefined8 local_30;
    undefined8 local_28;

    puVar5 = *(undefined4 **)(param_1 + 0x10);
    if (puVar5 == *(undefined4 **)(param_1 + 0x18)) {
        lVar7 = ((longlong)puVar5 - *(longlong *)(param_1 + 8)) / 0x28;
        if (lVar7 == 0) {
            lVar7 = 1;
        }
        else {
            lVar7 = lVar7 * 2;
        }
        uVar3 = FUN_14018a3e0(lVar7 * 0x28);
        lVar7 = (uVar3 / 0x28) * 0x28;
        lVar4 = FUN_14018b280(lVar7,0);
        puVar5 = (undefined4 *)FUN_1404820c0(*(undefined8 *)(param_1 + 8),param_2,lVar4);
        if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = *param_3;
            *(undefined8 *)(puVar5 + 4) = 0;
            *(undefined8 *)(puVar5 + 6) = 0;
            *(undefined8 *)(puVar5 + 8) = 0;
            FUN_14001c1b0(puVar5 + 2,*(undefined8 *)(param_3 + 4),*(undefined8 *)(param_3 + 6));
        }
        uVar6 = FUN_1404820c0(param_2,*(undefined8 *)(param_1 + 0x10),puVar5 + 10);
        lVar2 = *(longlong *)(param_1 + 0x10);
        for (lVar8 = *(longlong *)(param_1 + 8); lVar8 != lVar2; lVar8 = lVar8 + 0x28) {
            if (*(longlong *)(lVar8 + 0x10) != 0) {
                FUN_14018b900(*(longlong *)(lVar8 + 0x10),0);
            }
        }
        if (*(longlong *)(param_1 + 8) != 0) {
            FUN_14018b900(*(longlong *)(param_1 + 8),0);
        }
        *(longlong *)(param_1 + 8) = lVar4;
        *(longlong *)(param_1 + 0x18) = lVar7 + lVar4;
        *(undefined8 *)(param_1 + 0x10) = uVar6;
    }
    else {
        if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = puVar5[-10];
            *(undefined8 *)(puVar5 + 4) = 0;
            *(undefined8 *)(puVar5 + 6) = 0;
            *(undefined8 *)(puVar5 + 8) = 0;
            FUN_14001c1b0(puVar5 + 2,*(undefined8 *)(puVar5 + -6),*(undefined8 *)(puVar5 + -4));
        }
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x28;
        uVar1 = *param_3;
        local_38 = 0;
        local_30 = 0;
        local_28 = 0;
        FUN_14001c1b0(local_40,*(undefined8 *)(param_3 + 4),*(undefined8 *)(param_3 + 6));
        FUN_140482020(param_2,&DAT_ffffffffffffffb0 + *(longlong *)(param_1 + 0x10),
                      *(longlong *)(param_1 + 0x10) + -0x28);
        lVar7 = local_38;
        *param_2 = uVar1;
        if (local_40 != param_2 + 2) {
            FUN_14001c480(param_2 + 2,local_38,local_30);
        }
        if (lVar7 != 0) {
            FUN_14018b900(lVar7,0);
            return;
        }
    }
    return;
}



longlong FUN_140481460(longlong param_1,uint *param_2)

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
    FUN_140481aa0(param_1,local_res18,&local_res8);
    return lVar4;
}



void FUN_140481550(undefined8 param_1,longlong param_2)

{
    longlong lVar1;

    if (param_2 != 0) {
        do {
            FUN_140481550(param_1,*(undefined8 *)(param_2 + 0x18));
            lVar1 = *(longlong *)(param_2 + 0x10);
            FUN_1403fe250(param_2 + 0x28);
            FUN_14018b900(*(undefined8 *)(param_2 + 0x30),0);
            FUN_14018b900(param_2,0);
            param_2 = lVar1;
        } while (lVar1 != 0);
    }
    return;
}



longlong * FUN_1404815c0(longlong param_1,longlong *param_2,char **param_3,int *param_4)

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
            LAB_14048160e:
            plVar4 = (longlong *)FUN_140481c40(param_1,local_18,param_4);
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
                    lVar5 = FUN_140481ea0(iVar1,param_4);
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
                    lVar5 = FUN_140481ea0(iVar1,param_4);
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
            plVar4 = (longlong *)FUN_140481c40(param_1,local_18,param_4);
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
        if ((*param_4 <= *(int *)(lVar5 + 0x20)) || (*(int *)(pcVar3 + 0x20) <= *param_4))
            goto LAB_14048160e;
        if (*(longlong *)(lVar5 + 0x18) == 0) {
            FUN_140481b80(param_1,param_2,0,lVar5,param_4);
            return param_2;
        }
    }
    FUN_140481b80();
    return param_2;
}



void FUN_1404817b0(longlong param_1,longlong *param_2)

{
    int iVar1;
    longlong lVar2;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    lVar2 = *(longlong *)(param_1 + 8);
    if (*param_2 == lVar2) {
        local_40 = 0;
        local_48 = &PTR_LAB_140b5e648;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_48);
        local_28 = local_48;
        local_res8 = 0x141e4f6b0;
        local_18 = local_38;
        local_20 = local_40;
        iVar1 = FUN_1401971e0(&DAT_140c8acc0,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar1 != 0) {
            // WARNING: Could not recover jumptable at 0x000140481882. Too many branches
            // WARNING: Treating indirect jump as call
            DebugBreak();
            return;
        }
    }
    else {
        lVar2 = FUN_140007db0(*param_2,lVar2 + 8,lVar2 + 0x10,lVar2 + 0x18);
        FUN_1403fe250(lVar2 + 0x28);
        FUN_14018b900(*(undefined8 *)(lVar2 + 0x30),0);
        FUN_14018b900(lVar2,0);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    }
    return;
}



undefined8 FUN_1404818e0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
    longlong *plVar1;
    int **ppiVar2;
    longlong lVar3;
    undefined8 uVar4;

    uVar4 = DAT_140c65968;
    plVar1 = (longlong *)FUN_140491c60(DAT_140c65968,*(undefined4 *)*param_2);
    if ((((plVar1 != (longlong *)0x0) &&
          (ppiVar2 = (int **)FUN_140491bd0(uVar4,*(undefined4 *)(*plVar1 + 0x20)),
                  ppiVar2 != (int **)0x0)) && (**ppiVar2 == ***(int ***)(*(longlong *)(param_1 + 0x58) + 0x48))
        ) && (lVar3 = FUN_140489580(*(longlong *)(param_1 + 0x58),*(undefined4 *)*param_2), lVar3 == 0
        )) {
        uVar4 = FUN_1403d7c30(param_2,param_3,0);
        return uVar4;
    }
    return 0;
}



longlong *
FUN_140481980(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,int *param_5)

{
    int iVar1;
    int iVar2;
    longlong lVar3;
    int iVar4;
    longlong lVar5;
    bool bVar6;

    if ((param_4 != *(longlong *)(param_1 + 8)) && (param_3 == 0)) {
        iVar1 = *param_5;
        iVar2 = *(int *)(param_4 + 0x20);
        bVar6 = SBORROW4(iVar1,iVar2);
        iVar4 = iVar1 - iVar2;
        if (iVar1 == iVar2) {
            bVar6 = SBORROW4(param_5[1],*(int *)(param_4 + 0x24));
            iVar4 = param_5[1] - *(int *)(param_4 + 0x24);
        }
        if (bVar6 == iVar4 < 0) {
            lVar5 = FUN_14018b280();
            if ((int *)(lVar5 + 0x20) != (int *)0x0) {
                *(int *)(lVar5 + 0x20) = *param_5;
                *(int *)(lVar5 + 0x24) = param_5[1];
                *(int *)(lVar5 + 0x28) = param_5[2];
            }
            *(longlong *)(param_4 + 0x18) = lVar5;
            if (param_4 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x18)) {
                *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar5;
            }
            goto LAB_140481a55;
        }
    }
    lVar5 = FUN_14018b280(0x30);
    if ((int *)(lVar5 + 0x20) != (int *)0x0) {
        *(int *)(lVar5 + 0x20) = *param_5;
        *(int *)(lVar5 + 0x24) = param_5[1];
        *(int *)(lVar5 + 0x28) = param_5[2];
    }
    *(longlong *)(param_4 + 0x10) = lVar5;
    lVar3 = *(longlong *)(param_1 + 8);
    if (param_4 == lVar3) {
        *(longlong *)(lVar3 + 8) = lVar5;
        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar5;
    }
    else if (param_4 == *(longlong *)(lVar3 + 0x10)) {
        *(longlong *)(lVar3 + 0x10) = lVar5;
    }
    LAB_140481a55:
    *(longlong *)(lVar5 + 8) = param_4;
    *(undefined8 *)(lVar5 + 0x10) = 0;
    *(undefined8 *)(lVar5 + 0x18) = 0;
    FUN_1400081c0(lVar5,*(longlong *)(param_1 + 8) + 8);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    *param_2 = lVar5;
    return param_2;
}



void FUN_140481aa0(longlong param_1,longlong *param_2,longlong *param_3)

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
            FUN_140481f20(param_1,&local_res8);
        } while (*param_2 != *param_3);
    }
    return;
}



longlong *
FUN_140481b80(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,int *param_5)

{
    longlong lVar1;
    longlong lVar2;

    if (((param_4 == *(longlong *)(param_1 + 8)) || (param_3 != 0)) ||
        (*param_5 < *(int *)(param_4 + 0x20))) {
        lVar2 = FUN_140481ea0();
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
        lVar2 = FUN_140481ea0();
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



char ** FUN_140481c40(longlong param_1,char **param_2,int *param_3)

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
            bVar7 = *param_3 < *(int *)(pcVar6 + 0x20);
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
            ppcVar2 = (char **)FUN_140481b80(param_1,local_res8,pcVar3,pcVar6,param_3);
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
    if (*(int *)(pcVar5 + 0x20) < *param_3) {
        if (((pcVar6 == pcVar1) || (pcVar3 != (char *)0x0)) || (*param_3 < *(int *)(pcVar6 + 0x20))) {
            pcVar3 = (char *)FUN_140481ea0(pcVar5,param_3);
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
            pcVar3 = (char *)FUN_140481ea0(pcVar5,param_3);
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



void FUN_140481e00(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
    longlong lVar1;
    longlong *plVar2;
    longlong *local_res18;

    local_res18 = param_3;
    if (param_3 != param_4) {
        do {
            lVar1 = *param_2;
            plVar2 = (longlong *)FUN_14018b280(0x80,0);
            if (plVar2 != (longlong *)&DAT_fffffffffffffff0) {
                FUN_140474e10();
            }
            *plVar2 = lVar1;
            plVar2[1] = *(longlong *)(lVar1 + 8);
            **(longlong ***)(lVar1 + 8) = plVar2;
            *(longlong **)(lVar1 + 8) = plVar2;
            local_res18 = (longlong *)*local_res18;
        } while (local_res18 != param_4);
    }
    return;
}



longlong FUN_140481ea0(undefined8 param_1,undefined4 *param_2)

{
    longlong lVar1;
    undefined8 uVar2;

    lVar1 = FUN_14018b280();
    if ((undefined4 *)(lVar1 + 0x20) != (undefined4 *)0x0) {
        *(undefined4 *)(lVar1 + 0x20) = *param_2;
        uVar2 = FUN_14018b280(0x80,0);
        *(undefined8 *)(lVar1 + 0x30) = uVar2;
        *(undefined8 *)uVar2 = uVar2;
        *(longlong *)(*(longlong *)(lVar1 + 0x30) + 8) = *(longlong *)(lVar1 + 0x30);
        FUN_140481e00();
    }
    return lVar1;
}



void FUN_140481f20(longlong param_1,longlong *param_2)

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
        iVar2 = FUN_1401971e0(&DAT_140c8acbc,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x000140481fe6. Too many branches
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



undefined4 * FUN_140482020(longlong param_1,longlong param_2,undefined4 *param_3)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 *puVar3;

    lVar2 = (param_2 - param_1) / 0x28;
    if (0 < lVar2) {
        puVar3 = (undefined8 *)(param_3 + 2);
        puVar1 = (undefined8 *)(param_2 + 0x10);
        do {
            param_3 = param_3 + -10;
            *param_3 = *(undefined4 *)(puVar1 + -7);
            puVar3 = puVar3 + -5;
            if (puVar1 + -6 != puVar3) {
                FUN_14001c480(puVar3,puVar1[-5],puVar1[-4]);
            }
            lVar2 = lVar2 + -1;
            puVar1 = puVar1 + -5;
        } while (0 < lVar2);
    }
    return param_3;
}



undefined4 * FUN_1404820c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
    undefined8 *puVar1;

    if (param_1 != param_2) {
        puVar1 = (undefined8 *)(param_3 + 6);
        do {
            if (param_3 != (undefined4 *)0x0) {
                *param_3 = *param_1;
                puVar1[-1] = 0;
                *puVar1 = 0;
                puVar1[1] = 0;
                FUN_14001c1b0(puVar1 + -2,*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 6));
            }
            param_1 = param_1 + 10;
            param_3 = param_3 + 10;
            puVar1 = puVar1 + 5;
        } while (param_1 != param_2);
    }
    return param_3;
}



undefined4 * FUN_140482150(longlong param_1,longlong param_2,undefined4 *param_3)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 *puVar3;

    lVar2 = (param_2 - param_1) / 0x28;
    if (0 < lVar2) {
        puVar3 = (undefined8 *)(param_3 + 2);
        puVar1 = (undefined8 *)(param_1 + 0x10);
        do {
            *param_3 = *(undefined4 *)(puVar1 + -2);
            if (puVar1 + -1 != puVar3) {
                FUN_14001c480(puVar3,*puVar1,puVar1[1]);
            }
            lVar2 = lVar2 + -1;
            param_3 = param_3 + 10;
            puVar1 = puVar1 + 5;
            puVar3 = puVar3 + 5;
        } while (0 < lVar2);
    }
    return param_3;
}



undefined8 FUN_140482220(longlong param_1,int param_2)

{
    longlong lVar1;
    longlong lVar2;

    lVar2 = DAT_140c65898;
    if (*(int *)(param_1 + 0x34) != param_2) {
        *(int *)(param_1 + 0x34) = param_2;
        *(undefined4 *)(param_1 + 0x18a8) = 1;
        lVar1 = *(longlong *)(lVar2 + 0x78);
        if ((lVar1 != 0) && (*(int *)(param_1 + 8) == *(int *)(lVar1 + 8))) {
            *(undefined4 *)(lVar2 + 0x6f98) = 1;
        }
        FUN_14045aec0();
    }
    return 0;
}



ushort * FUN_140482270(ushort *param_1,uint *param_2)

{
    uint uVar1;
    uint uVar2;
    ushort uVar3;

    uVar1 = *param_2;
    uVar2 = uVar1 & 0x7fffffff;
    uVar3 = (ushort)(uVar1 >> 0x10) & 0x8000;
    if (uVar2 < 0x33800000) {
        *param_1 = uVar3;
        return param_1;
    }
    if (uVar2 < 0x387ff000) {
        *param_1 = (ushort)(((uVar1 & 0x7fffff | 0x800000) >> (0x71U - (char)(uVar2 >> 0x17) & 0x1f)) +
                            0x1000 >> 0xd) | uVar3;
        return param_1;
    }
    if (uVar2 < 0x47fff000) {
        *param_1 = (ushort)(uVar2 + 0xc8001000 >> 0xd) | uVar3;
        return param_1;
    }
    *param_1 = uVar3 | 0x43ff;
    return param_1;
}



undefined8 FUN_140482310(longlong *param_1,int param_2)

{
    ulonglong uVar1;

    uVar1 = 0;
    if (param_1[1] != 0) {
        do {
            if (*(int *)(*(longlong *)(*param_1 + uVar1 * 8) + 8) == param_2) {
                return *(undefined8 *)(*param_1 + uVar1 * 8);
            }
            uVar1 = (ulonglong)((int)uVar1 + 1);
        } while (uVar1 < (ulonglong)param_1[1]);
    }
    return 0;
}



undefined8 FUN_140482370(longlong param_1)

{
    if ((((*(int *)(param_1 + 0x2ac) == 0) && (*(int *)(param_1 + 0x1354) == 0)) &&
         ((*(uint *)(param_1 + 0x142c) & 4) != 0)) && ((*(uint *)(param_1 + 0x142c) & 0x10) != 0)) {
        return 0;
    }
    return 1;
}



ulonglong FUN_1404823a0(longlong param_1)

{
    ulonglong uVar1;

    uVar1 = *(ulonglong *)(param_1 + 0xb0);
    if (uVar1 != 0) {
        return (ulonglong)((*(byte *)(uVar1 + 0x3c) & 2) != 0);
    }
    return uVar1;
}



undefined8 FUN_1404823c0(longlong param_1)

{
    int *piVar1;
    int *piVar2;
    ulonglong uVar3;

    uVar3 = 0;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x70) + 0x198);
    piVar2 = piVar1;
    do {
        if (*piVar2 == 1) {
            return 1;
        }
        uVar3 = uVar3 + 1;
        piVar2 = piVar2 + 1;
    } while (uVar3 < 5);
    uVar3 = 0;
    piVar2 = piVar1;
    do {
        if (*piVar2 == 2) {
            return 1;
        }
        uVar3 = uVar3 + 1;
        piVar2 = piVar2 + 1;
    } while (uVar3 < 5);
    uVar3 = 0;
    do {
        if (*piVar1 == 7) {
            return 1;
        }
        uVar3 = uVar3 + 1;
        piVar1 = piVar1 + 1;
    } while (uVar3 < 5);
    return 0;
}



undefined8 FUN_140482450(longlong param_1)

{
    longlong lVar1;

    if (((((*(longlong *)(param_1 + 0x18) == 0) ||
           ((*(uint *)(*(longlong *)(param_1 + 0x18) + 0x90) & 0x40000000) == 0)) &&
          ((*(int *)(param_1 + 0x124) != 0 || (*(longlong *)(param_1 + 0x128) != 0)))) &&
         (*(int *)(param_1 + 0x130) == 0)) &&
        ((lVar1 = *(longlong *)(DAT_140c65898 + 0x78), lVar1 == 0 ||
                                                       ((*(int *)(param_1 + 0x124) != *(int *)(lVar1 + 8) &&
                                                         ((*(longlong *)(param_1 + 0x128) == 0 ||
                                                           (*(longlong *)(&DAT_000018a0 + lVar1) != *(longlong *)(param_1 + 0x128))))))))) {
        return 1;
    }
    return 0;
}



void FUN_1404824c0(undefined8 param_1,uint param_2,undefined4 param_3)

{
    longlong lVar1;
    longlong lVar2;
    ulonglong local_res8 [3];
    longlong local_res20;
    longlong local_18 [2];

    lVar1 = *(longlong *)(DAT_140c65898 + 0x66c8);
    local_res20 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x20) < (int)param_2) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res20 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res20 == lVar1) || ((int)param_2 < *(int *)(local_res20 + 0x20))) {
        local_res8[0] = (ulonglong)param_2;
        FUN_1403d3e70(DAT_140c65898 + 0x66c0,local_18,&local_res20,local_res8);
        local_res20 = local_18[0];
    }
    *(undefined4 *)(local_res20 + 0x24) = param_3;
    return;
}



bool FUN_140482550(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0xa8);
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
    return local_res8 != lVar1;
}



ulonglong FUN_1404825a0(undefined8 param_1,int param_2,int param_3)

{
    ulonglong *puVar1;
    longlong lVar2;
    int iVar3;
    ulonglong uVar4;
    int local_res10 [2];

    lVar2 = DAT_140c65918;
    local_res10[0] = param_2 * 0x400 + param_3;
    uVar4 = (**(code **)(DAT_140c65918 + 0xa8))(local_res10);
    puVar1 = *(ulonglong **)(*(longlong *)(lVar2 + 0xa0) + (uVar4 % *(ulonglong *)(lVar2 + 0x98)) * 8)
            ;
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar4 == *puVar1) &&
            (iVar3 = (**(code **)(lVar2 + 0xb0))(local_res10,puVar1 + 2), iVar3 != 0)) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    if (puVar1 + 3 == (ulonglong *)0x0) {
        return 0;
    }
    return puVar1[3];
}



void FUN_140482640(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
    longlong *plVar1;
    longlong lVar2;
    int iVar3;

    if (*(longlong *)(param_1 + 0x58) == 0) {
        lVar2 = *param_2;
        while ((lVar2 != 0 && (iVar3 = FUN_1403e84d0(*param_2,param_1,param_4), iVar3 < 0))) {
            param_2 = (longlong *)(*param_2 + 0x60);
            lVar2 = *param_2;
        }
        *(longlong **)(param_1 + 0x58) = param_2;
        plVar1 = (longlong *)(param_1 + 0x60);
        *plVar1 = *param_2;
        *param_2 = param_1;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x58) = plVar1;
        }
    }
    return;
}



void FUN_1404826c0(void)

{
    longlong lVar1;

    if ((DAT_140c8acb4 & 1) != 0) {
        return;
    }
    DAT_140c8acb4 = DAT_140c8acb4 | 1;
    lVar1 = FUN_140200220(0x37);
    if (lVar1 != 0) {
        DAT_140c8acb0 = (float)*(int *)(lVar1 + 4);
        return;
    }
    DAT_140c8acb0 = 0.0;
    return;
}



undefined4 * FUN_140482720(undefined4 *param_1)

{
    undefined *puVar1;

    *(undefined8 *)(param_1 + 1) = 0x1a;
    *(undefined8 *)(param_1 + 3) = 2;
    *(undefined8 *)(param_1 + 5) = 0x19;
    *(undefined8 *)(param_1 + 0xb) = 4;
    *(undefined8 *)(param_1 + 0xd) = 0x3f800000;
    *param_1 = 0;
    *(undefined8 *)(param_1 + 7) = 0;
    *(undefined8 *)(param_1 + 9) = 0;
    *(undefined8 *)(param_1 + 0xf) = 0;
    *(undefined8 *)(param_1 + 0x11) = 0;
    *(undefined8 *)(param_1 + 0x13) = 0;
    *(undefined8 *)(param_1 + 0x16) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x1b) = 0;
    *(undefined8 *)(param_1 + 0x1d) = 0;
    *(undefined8 *)(param_1 + 0x1f) = 0;
    param_1[0x21] = 0;
    *(undefined8 *)(param_1 + 0x22) = 0;
    *(undefined **)(param_1 + 0x30) = &DAT_140c66620;
    *(undefined8 *)(param_1 + 0x24) = 0;
    *(undefined **)(param_1 + 0x32) = &DAT_140c66640;
    *(undefined8 *)(param_1 + 0x26) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined **)(param_1 + 0x34) = &DAT_140c665f8;
    puVar1 = (undefined *)FUN_14018b280(0x28,0);
    *(undefined8 *)(param_1 + 0x62) = 0;
    *(undefined **)(param_1 + 0x60) = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x10) = *(longlong *)(param_1 + 0x60);
    *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x18) = *(longlong *)(param_1 + 0x60);
    puVar1 = (undefined *)FUN_14018b280(0x28,0);
    *(undefined8 *)(param_1 + 0x6a) = 0;
    *(undefined **)(param_1 + 0x68) = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x10) = *(longlong *)(param_1 + 0x68);
    *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x18) = *(longlong *)(param_1 + 0x68);
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    *(undefined8 *)(param_1 + 0x72) = 0;
    *(undefined **)(param_1 + 0x70) = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x10) = *(longlong *)(param_1 + 0x70);
    *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18) = *(longlong *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x36) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x3a) = 0;
    *(undefined8 *)(param_1 + 0x3c) = 0;
    *(undefined8 **)(param_1 + 0x4a) = &DAT_140c7cf90;
    *(undefined8 *)(param_1 + 0x3e) = 0;
    *(undefined8 *)(param_1 + 0x42) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    param_1[0x56] = 6;
    *(undefined8 *)(param_1 + 0x44) = 0;
    *(undefined8 *)(param_1 + 0x46) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x4c) = 0;
    *(undefined8 *)(param_1 + 0x4e) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x52) = 0;
    *(undefined8 *)(param_1 + 0x54) = 0;
    *(undefined8 *)(param_1 + 0x57) = 0;
    *(undefined8 *)(param_1 + 0x59) = 0;
    *(undefined8 *)(param_1 + 0x5b) = 0;
    *(undefined8 *)(param_1 + 0x76) = 0;
    return param_1;
}



void FUN_140482930(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;

    plVar1 = *(longlong **)(param_1 + 0x128);
    if ((plVar1 != &DAT_140c7cf90) && (plVar1 != (longlong *)0x0)) {
        lVar2 = plVar1[4];
        if (lVar2 != 0) {
            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        lVar2 = plVar1[2];
        if (lVar2 != 0) {
            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        lVar2 = *plVar1;
        if (lVar2 != 0) {
            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        FUN_14018b900(plVar1,0);
    }
    FUN_140008410(param_1 + 0x1b8);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x1c0),0);
    FUN_140008410(param_1 + 0x198);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x1a0),0);
    FUN_140008410(param_1 + 0x178);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x180),0);
    FUN_14079b560(param_1);
    return;
}



uint * FUN_140482a00(uint *param_1,uint param_2,uint param_3,uint param_4,longlong param_5,
                     ulonglong param_6)

{
    uint uVar1;
    longlong lVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    uVar5 = 0;
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    uVar4 = param_6;
    uVar3 = param_6;
    if (param_6 != 0) {
        do {
            uVar4 = (uVar3 - uVar5 >> 1) + uVar5;
            uVar1 = *(uint *)(param_5 + uVar4 * 0x30);
            if ((uVar1 <= param_2) &&
                ((uVar1 < param_2 ||
                  ((uVar1 = *(uint *)(param_5 + 4 + uVar4 * 0x30), uVar1 <= param_3 &&
                                                                   ((uVar1 < param_3 || (*(uint *)(param_5 + 8 + uVar4 * 0x30) < param_4)))))))) {
                uVar5 = uVar4 + 1;
                uVar4 = uVar3;
            }
            uVar3 = uVar4;
        } while (uVar5 < uVar4);
    }
    *(ulonglong *)(param_1 + 4) = uVar5 * 0x30 + param_5;
    lVar2 = 1;
    while (((uVar3 = uVar4, uVar4 = param_6, uVar3 < param_6 &&
                                             (uVar1 = *(uint *)(param_5 + uVar3 * 0x30), uVar4 = uVar3, uVar1 <= param_2)) &&
            ((uVar1 < param_2 ||
              ((uVar1 = *(uint *)(param_5 + 4 + uVar3 * 0x30), uVar1 <= param_3 &&
                                                               ((uVar1 < param_3 || (*(uint *)(param_5 + 8 + uVar3 * 0x30) <= param_4))))))))) {
        uVar4 = uVar3 + lVar2;
        lVar2 = lVar2 * 2;
        uVar5 = uVar3;
    }
    if (uVar5 < uVar4) {
        do {
            uVar3 = (uVar4 - uVar5 >> 1) + uVar5;
            uVar1 = *(uint *)(param_5 + uVar3 * 0x30);
            if ((uVar1 <= param_2) &&
                ((uVar1 < param_2 ||
                  ((uVar1 = *(uint *)(param_5 + 4 + uVar3 * 0x30), uVar1 <= param_3 &&
                                                                   ((uVar1 < param_3 || (*(uint *)(param_5 + 8 + uVar3 * 0x30) <= param_4)))))))) {
                uVar5 = uVar3 + 1;
                uVar3 = uVar4;
            }
            uVar4 = uVar3;
        } while (uVar5 < uVar3);
    }
    *(longlong *)(param_1 + 6) =
            (longlong)((uVar5 * 0x30 - *(longlong *)(param_1 + 4)) + param_5) / 0x30;
    return param_1;
}



int FUN_140482b70(void)

{
    int iVar1;
    longlong lVar2;
    undefined8 *puVar3;

    if (DAT_140c65918 != (undefined8 *)0x0) {
        return 0;
    }
    lVar2 = FUN_14018b280(0xb8,0);
    if (lVar2 == 0) {
        puVar3 = (undefined8 *)0x0;
    }
    else {
        puVar3 = (undefined8 *)FUN_140482c00(lVar2);
    }
    iVar1 = FUN_140482ea0(puVar3);
    if (iVar1 < 0) {
        if (puVar3 != (undefined8 *)0x0) {
            (**(code **)*puVar3)(puVar3,1);
        }
        return iVar1;
    }
    DAT_140c65918 = puVar3;
    return 0;
}



undefined8 * FUN_140482c00(undefined8 *param_1)

{
    undefined *puVar1;

    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = &PTR_FUN_140b67130;
    param_1[7] = 0;
    param_1[6] = 0;
    puVar1 = (undefined *)FUN_14018b280(0x48,0);
    param_1[0xc] = 0;
    param_1[0xb] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0xb] + 8) = 0;
    *(undefined8 *)(param_1[0xb] + 0x10) = param_1[0xb];
    *(undefined8 *)(param_1[0xb] + 0x18) = param_1[0xb];
    puVar1 = (undefined *)FUN_14018b280(0x48,0);
    param_1[0x10] = 0;
    param_1[0xf] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0xf] + 8) = 0;
    *(undefined8 *)(param_1[0xf] + 0x10) = param_1[0xf];
    *(undefined8 *)(param_1[0xf] + 0x18) = param_1[0xf];
    FUN_1400522f0(param_1 + 0x12);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[8] = 0;
    return param_1;
}



undefined8 FUN_140482cb0(undefined8 param_1,ulonglong param_2)

{
    FUN_140482cf0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_140482cf0(undefined8 *param_1)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;

    lVar2 = param_1[3];
    *param_1 = &PTR_FUN_140b67130;
    if (lVar2 != 0) {
        FUN_140019490(lVar2);
        FUN_14018b900(*(undefined8 *)(lVar2 + 0x10),0);
        *(undefined8 *)(lVar2 + 0x10) = 0;
        FUN_14018b900(lVar2,0);
    }
    lVar2 = param_1[4];
    if (lVar2 != 0) {
        iVar1 = *(int *)(lVar2 + -8);
        lVar3 = (longlong)iVar1 * 0x1e0 + lVar2;
        while (iVar1 = iVar1 + -1, -1 < iVar1) {
            lVar3 = lVar3 + -0x1e0;
            FUN_140482930(lVar3);
        }
        FUN_14018b900(lVar2 + -8,0);
    }
    FUN_14018b900(param_1[8],0);
    FUN_140019490(param_1 + 0x12);
    FUN_14018b900(param_1[0x14],0);
    param_1[0x14] = 0;
    if (param_1[0x10] != 0) {
        FUN_1401de580(param_1 + 0xe,*(undefined8 *)(param_1[0xf] + 8));
        *(undefined8 *)(param_1[0xf] + 0x10) = param_1[0xf];
        *(undefined8 *)(param_1[0xf] + 8) = 0;
        *(undefined8 *)(param_1[0xf] + 0x18) = param_1[0xf];
        param_1[0x10] = 0;
    }
    FUN_14018b900(param_1[0xf],0);
    if (param_1[0xc] != 0) {
        FUN_1401de580(param_1 + 10,*(undefined8 *)(param_1[0xb] + 8));
        *(undefined8 *)(param_1[0xb] + 0x10) = param_1[0xb];
        *(undefined8 *)(param_1[0xb] + 8) = 0;
        *(undefined8 *)(param_1[0xb] + 0x18) = param_1[0xb];
        param_1[0xc] = 0;
    }
    FUN_14018b900(param_1[0xb],0);
    lVar2 = param_1[6];
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    *param_1 = &PTR_FUN_140b78258;
    param_1[2] = 0;
    lVar2 = param_1[1];
    if (lVar2 != 0) {
        // WARNING: Could not recover jumptable at 0x000140482e8b. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        return;
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140482ea0(longlong param_1)

{
    longlong *plVar1;
    longlong *plVar2;
    ulonglong **ppuVar3;
    undefined4 uVar4;
    undefined8 *puVar5;
    code *pcVar6;
    uint uVar7;
    uint uVar8;
    int iVar9;
    longlong lVar10;
    ulonglong *puVar11;
    uint *puVar12;
    ulonglong uVar13;
    ulonglong uVar14;
    ulonglong *puVar15;
    ulonglong *puVar16;
    ulonglong uVar17;
    uint uVar18;
    ulonglong *puVar19;
    ulonglong *puVar20;
    ulonglong local_res8;
    undefined4 local_38;
    undefined4 uStack52;
    ulonglong *local_30;

    puVar20 = (ulonglong *)0x0;
    if (*(longlong *)(param_1 + 0x60) != 0) {
        FUN_1401de580();
        *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x10) = *(longlong *)(param_1 + 0x58);
        *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x18) = *(longlong *)(param_1 + 0x58);
        *(undefined8 *)(param_1 + 0x60) = 0;
    }
    uVar7 = 0;
    uVar8 = 0;
    if (DAT_140c63838 == (code *)0x0) {
        if ((_DAT_140c63a24 == 0) && (iVar9 = FUN_1401f8d00(), uVar7 = uVar8, -1 < iVar9)) {
            uVar7 = (**(code **)(*DAT_140c65098 + 0x28))();
        }
    }
    else {
        uVar7 = (*DAT_140c63838)();
    }
    puVar19 = puVar20;
    if (uVar7 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c63a24 == 0) && (iVar9 = FUN_1401f8d00(), -1 < iVar9)) {
                    lVar10 = (**(code **)(*DAT_140c65098 + 0x20))();
                    goto LAB_140482f99;
                }
            }
            else {
                lVar10 = (*DAT_140c63848)(&PTR_u_Creature2DisplayGroupEntry_140a69e20,puVar19,DAT_140c63858)
                        ;
                LAB_140482f99:
                if (lVar10 != 0) {
                    uVar4 = *(undefined4 *)(lVar10 + 8);
                    if (DAT_140c63840 == (code *)0x0) {
                        puVar11 = puVar20;
                        if (_DAT_140c6550c == 0) {
                            iVar9 = FUN_1401f88c0();
                            if (iVar9 < 0) {
                                puVar11 = (ulonglong *)0x0;
                            }
                            else {
                                puVar11 = (ulonglong *)(**(code **)(*DAT_140c64a40 + 0x18))(DAT_140c64a40,uVar4);
                            }
                        }
                    }
                    else {
                        puVar11 = (ulonglong *)
                                (*DAT_140c63840)(&PTR_u_Creature2DisplayInfo_140a69de8,uVar4,DAT_140c63858);
                    }
                    local_38 = *(undefined4 *)(lVar10 + 0xc);
                    local_30 = puVar11;
                    lVar10 = FUN_140484600(param_1 + 0x50,lVar10 + 4);
                    puVar5 = *(undefined8 **)(lVar10 + 0x10);
                    if (puVar5 == *(undefined8 **)(lVar10 + 0x18)) {
                        FUN_1400b4c50(lVar10,puVar5,&local_38);
                    }
                    else {
                        if (puVar5 != (undefined8 *)0x0) {
                            *puVar5 = CONCAT44(uStack52,local_38);
                            puVar5[1] = puVar11;
                        }
                        *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                    }
                }
            }
            uVar18 = (int)puVar19 + 1;
            puVar19 = (ulonglong *)(ulonglong)uVar18;
        } while (uVar18 < uVar7);
    }
    uVar14 = *(ulonglong *)(*(ulonglong *)(param_1 + 0x58) + 0x10);
    if (uVar14 != *(ulonglong *)(param_1 + 0x58)) {
        do {
            puVar12 = *(uint **)(uVar14 + 0x30);
            puVar19 = puVar20;
            if (puVar12 == *(uint **)(uVar14 + 0x38)) {
                uVar13 = *(ulonglong *)(uVar14 + 0x18);
                if (uVar13 == 0) {
                    uVar17 = *(ulonglong *)(uVar14 + 8);
                    uVar13 = uVar14;
                    if (uVar14 == *(ulonglong *)(uVar17 + 0x18)) {
                        do {
                            uVar13 = uVar17;
                            uVar17 = *(ulonglong *)(uVar13 + 8);
                        } while (uVar13 == *(ulonglong *)(uVar17 + 0x18));
                    }
                    if (*(ulonglong *)(uVar13 + 0x18) != uVar17) {
                        uVar13 = uVar17;
                    }
                }
                else {
                    for (uVar17 = *(ulonglong *)(uVar13 + 0x10); uVar17 != 0;
                         uVar17 = *(ulonglong *)(uVar17 + 0x10)) {
                        uVar13 = uVar17;
                    }
                }
                local_res8 = uVar14;
                FUN_1404849f0();
                uVar14 = uVar13;
            }
            else {
                do {
                    *puVar12 = *puVar12 + (int)puVar19;
                    uVar7 = *puVar12;
                    puVar12 = puVar12 + 4;
                    puVar19 = (ulonglong *)(ulonglong)uVar7;
                } while (puVar12 != *(uint **)(uVar14 + 0x38));
                uVar13 = *(ulonglong *)(uVar14 + 0x18);
                if (uVar13 == 0) {
                    uVar13 = *(ulonglong *)(uVar14 + 8);
                    if (uVar14 == *(ulonglong *)(uVar13 + 0x18)) {
                        do {
                            uVar14 = uVar13;
                            uVar13 = *(ulonglong *)(uVar14 + 8);
                        } while (uVar14 == *(ulonglong *)(uVar13 + 0x18));
                    }
                    if (*(ulonglong *)(uVar14 + 0x18) != uVar13) {
                        uVar14 = uVar13;
                    }
                }
                else {
                    for (uVar17 = *(ulonglong *)(uVar13 + 0x10); uVar14 = uVar13, uVar17 != 0;
                         uVar17 = *(ulonglong *)(uVar17 + 0x10)) {
                        uVar13 = uVar17;
                    }
                }
            }
        } while (uVar14 != *(ulonglong *)(param_1 + 0x58));
    }
    if (*(longlong *)(param_1 + 0x80) != 0) {
        lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 8);
        while (lVar10 != 0) {
            FUN_1401de580(param_1 + 0x70);
            plVar1 = (longlong *)(lVar10 + 0x30);
            lVar10 = *(longlong *)(lVar10 + 0x10);
            if (*plVar1 != 0) {
                FUN_14018b900();
            }
            FUN_14018b900();
        }
        *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x10) = *(longlong *)(param_1 + 0x78);
        *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x18) = *(longlong *)(param_1 + 0x78);
        *(undefined8 *)(param_1 + 0x80) = 0;
    }
    if (DAT_140c63838 == (code *)0x0) {
        uVar7 = uVar8;
        if ((_DAT_140c64974 == 0) && (iVar9 = FUN_1401f9580(), -1 < iVar9)) {
            uVar7 = (**(code **)(*DAT_140c64398 + 0x28))();
        }
    }
    else {
        uVar7 = (*DAT_140c63838)();
    }
    puVar19 = puVar20;
    if (uVar7 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c64974 == 0) && (iVar9 = FUN_1401f9580(), -1 < iVar9)) {
                    lVar10 = (**(code **)(*DAT_140c64398 + 0x20))();
                    goto LAB_140483249;
                }
            }
            else {
                lVar10 = (*DAT_140c63848)(&PTR_u_Creature2OutfitGroupEntry_140a69e90,puVar19,DAT_140c63858);
                LAB_140483249:
                if (lVar10 != 0) {
                    uVar4 = *(undefined4 *)(lVar10 + 8);
                    if (DAT_140c63840 == (code *)0x0) {
                        puVar11 = puVar20;
                        if (_DAT_140c64708 == 0) {
                            iVar9 = FUN_1401f9140();
                            if (iVar9 < 0) {
                                puVar11 = (ulonglong *)0x0;
                            }
                            else {
                                puVar11 = (ulonglong *)(**(code **)(*DAT_140c65028 + 0x18))(DAT_140c65028,uVar4);
                            }
                        }
                    }
                    else {
                        puVar11 = (ulonglong *)
                                (*DAT_140c63840)(&PTR_u_Creature2OutfitInfo_140a69e58,uVar4,DAT_140c63858);
                    }
                    local_38 = *(undefined4 *)(lVar10 + 0xc);
                    local_30 = puVar11;
                    lVar10 = FUN_140484600(param_1 + 0x70,lVar10 + 4);
                    puVar5 = *(undefined8 **)(lVar10 + 0x10);
                    if (puVar5 == *(undefined8 **)(lVar10 + 0x18)) {
                        FUN_1400b4c50(lVar10,puVar5,&local_38);
                    }
                    else {
                        if (puVar5 != (undefined8 *)0x0) {
                            *puVar5 = CONCAT44(uStack52,local_38);
                            puVar5[1] = puVar11;
                        }
                        *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                    }
                }
            }
            uVar18 = (int)puVar19 + 1;
            puVar19 = (ulonglong *)(ulonglong)uVar18;
        } while (uVar18 < uVar7);
    }
    uVar14 = *(ulonglong *)(*(ulonglong *)(param_1 + 0x78) + 0x10);
    if (uVar14 != *(ulonglong *)(param_1 + 0x78)) {
        do {
            puVar12 = *(uint **)(uVar14 + 0x30);
            puVar19 = puVar20;
            if (puVar12 == *(uint **)(uVar14 + 0x38)) {
                uVar13 = *(ulonglong *)(uVar14 + 0x18);
                if (uVar13 == 0) {
                    uVar17 = *(ulonglong *)(uVar14 + 8);
                    uVar13 = uVar14;
                    if (uVar14 == *(ulonglong *)(uVar17 + 0x18)) {
                        do {
                            uVar13 = uVar17;
                            uVar17 = *(ulonglong *)(uVar13 + 8);
                        } while (uVar13 == *(ulonglong *)(uVar17 + 0x18));
                    }
                    if (*(ulonglong *)(uVar13 + 0x18) != uVar17) {
                        uVar13 = uVar17;
                    }
                }
                else {
                    for (uVar17 = *(ulonglong *)(uVar13 + 0x10); uVar17 != 0;
                         uVar17 = *(ulonglong *)(uVar17 + 0x10)) {
                        uVar13 = uVar17;
                    }
                }
                local_res8 = uVar14;
                FUN_140484b00();
                uVar14 = uVar13;
            }
            else {
                do {
                    *puVar12 = *puVar12 + (int)puVar19;
                    uVar7 = *puVar12;
                    puVar12 = puVar12 + 4;
                    puVar19 = (ulonglong *)(ulonglong)uVar7;
                } while (puVar12 != *(uint **)(uVar14 + 0x38));
                uVar13 = *(ulonglong *)(uVar14 + 0x18);
                if (uVar13 == 0) {
                    uVar13 = *(ulonglong *)(uVar14 + 8);
                    if (uVar14 == *(ulonglong *)(uVar13 + 0x18)) {
                        do {
                            uVar14 = uVar13;
                            uVar13 = *(ulonglong *)(uVar14 + 8);
                        } while (uVar14 == *(ulonglong *)(uVar13 + 0x18));
                    }
                    if (*(ulonglong *)(uVar14 + 0x18) != uVar13) {
                        uVar14 = uVar13;
                    }
                }
                else {
                    for (uVar17 = *(ulonglong *)(uVar13 + 0x10); uVar14 = uVar13, uVar17 != 0;
                         uVar17 = *(ulonglong *)(uVar17 + 0x10)) {
                        uVar13 = uVar17;
                    }
                }
            }
        } while (uVar14 != *(ulonglong *)(param_1 + 0x78));
    }
    plVar1 = (longlong *)(param_1 + 0x90);
    puVar19 = puVar20;
    if (*(longlong *)(param_1 + 0x98) != 0) {
        do {
            plVar2 = (longlong *)(*(longlong *)(param_1 + 0xa0) + (longlong)puVar19 * 8);
            lVar10 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (longlong)puVar19 * 8);
            while (lVar10 != 0) {
                *plVar2 = *(longlong *)(*plVar2 + 8);
                FUN_14018b900();
                lVar10 = *plVar2;
            }
            puVar19 = (ulonglong *)((longlong)puVar19 + 1);
        } while (puVar19 < *(ulonglong **)(param_1 + 0x98));
    }
    pcVar6 = DAT_140c63838;
    *plVar1 = 0;
    if (pcVar6 == (code *)0x0) {
        if ((_DAT_140c63fac == 0) && (iVar9 = FUN_1401f9e00(), -1 < iVar9)) {
            uVar8 = (**(code **)(*DAT_140c64dd0 + 0x28))();
        }
    }
    else {
        uVar8 = (*pcVar6)(&PTR_u_Creature2OverrideProperties_140a69f00);
    }
    puVar19 = puVar20;
    if (uVar8 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                puVar11 = puVar20;
                if (_DAT_140c63fac == 0) {
                    iVar9 = FUN_1401f9e00();
                    if (iVar9 < 0) {
                        puVar11 = (ulonglong *)0x0;
                    }
                    else {
                        puVar11 = (ulonglong *)(**(code **)(*DAT_140c64dd0 + 0x20))();
                    }
                }
            }
            else {
                puVar11 = (ulonglong *)
                        (*DAT_140c63848)(&PTR_u_Creature2OverrideProperties_140a69f00,puVar19,
                                         DAT_140c63858);
            }
            local_res8 = local_res8 & 0xffffffff00000000 |
                         (ulonglong)
                                 (uint)(*(int *)((longlong)puVar11 + 4) * 0x400 + *(int *)(puVar11 + 1));
            uVar14 = (**(code **)(param_1 + 0xa8))(&local_res8);
            for (puVar16 = *(ulonglong **)
                    (*(longlong *)(param_1 + 0xa0) + (uVar14 % *(ulonglong *)(param_1 + 0x98)) * 8
                    ); puVar16 != (ulonglong *)0x0; puVar16 = (ulonglong *)puVar16[1]) {
                if ((uVar14 == *puVar16) && (iVar9 = (**(code **)(param_1 + 0xb0))(&local_res8), iVar9 != 0)
                        ) {
                    if (puVar16 != (ulonglong *)&DAT_ffffffffffffffe8) goto LAB_140483582;
                    break;
                }
            }
            if (*plVar1 == *(longlong *)(param_1 + 0x98)) {
                FUN_1400290d0(plVar1);
            }
            uVar14 = (**(code **)(param_1 + 0xa8))(&local_res8);
            ppuVar3 = (ulonglong **)
                    (*(longlong *)(param_1 + 0xa0) + (uVar14 % *(ulonglong *)(param_1 + 0x98)) * 8);
            puVar15 = (ulonglong *)FUN_14018b280(0x20);
            puVar16 = puVar20;
            if (puVar15 != (ulonglong *)0x0) {
                puVar16 = *ppuVar3;
                *puVar15 = uVar14;
                puVar15[1] = (ulonglong)puVar16;
                puVar15[3] = (ulonglong)puVar11;
                *(undefined4 *)(puVar15 + 2) = (undefined4)local_res8;
                puVar16 = puVar15;
            }
            *ppuVar3 = puVar16;
            *plVar1 = *plVar1 + 1;
            LAB_140483582:
            uVar7 = (int)puVar19 + 1;
            puVar19 = (ulonglong *)(ulonglong)uVar7;
        } while (uVar7 < uVar8);
    }
    FUN_140485790(param_1);
    return;
}



ulonglong FUN_1404835c0(longlong param_1,int param_2)

{
    longlong lVar1;
    ulonglong *puVar2;
    int iVar3;
    ulonglong uVar4;
    int local_res10 [2];

    if (param_2 == 0) {
        return 0;
    }
    lVar1 = *(longlong *)(param_1 + 0x18);
    local_res10[0] = param_2;
    uVar4 = (**(code **)(lVar1 + 0x18))(local_res10);
    puVar2 = *(ulonglong **)(*(longlong *)(lVar1 + 0x10) + (uVar4 % *(ulonglong *)(lVar1 + 8)) * 8);
    while( true ) {
        if (puVar2 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar4 == *puVar2) &&
            (iVar3 = (**(code **)(lVar1 + 0x20))(local_res10,puVar2 + 2), iVar3 != 0)) break;
        puVar2 = (ulonglong *)puVar2[1];
    }
    if (puVar2 + 3 == (ulonglong *)0x0) {
        return 0;
    }
    return puVar2[3];
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1404836c0(longlong *param_1,longlong *param_2)

{
    undefined4 uVar1;
    longlong *plVar2;
    ulonglong uVar3;
    uint uVar4;
    int iVar5;
    undefined8 uVar6;
    longlong lVar7;
    ulonglong uVar8;
    ulonglong *puVar9;
    uint *puVar10;
    ulonglong uVar11;
    ulonglong *puVar12;
    ulonglong *puVar13;
    uint *puVar14;
    longlong lVar15;
    ulonglong *puVar16;
    undefined4 *puVar17;
    float fVar18;
    longlong *local_res10;
    ulonglong local_res18;
    ulonglong local_res20;
    longlong local_88;
    ulonglong local_80;
    longlong local_78;
    ulonglong *local_70;
    ulonglong local_68;
    ulonglong local_60;
    longlong local_58;

    if (param_2[1] == 0) {
        return 0x80004005;
    }
    puVar13 = (ulonglong *)0x0;
    uVar4 = 0;
    local_res10 = param_2;
    if (DAT_140c63838 == (code *)0x0) {
        if (_DAT_140c65514 == 0) {
            iVar5 = FUN_1401f7380();
            if (iVar5 < 0) {
                uVar4 = 0;
            }
            else {
                uVar4 = (**(code **)(*DAT_140c63a48 + 0x28))();
            }
        }
    }
    else {
        uVar4 = (*DAT_140c63838)(&PTR_u_Creature2Action_140a69cd0,DAT_140c63858);
    }
    *(uint *)(param_1 + 9) = uVar4;
    if (uVar4 != 0) {
        uVar6 = SUB168(ZEXT816(0x30) * ZEXT416(uVar4),0);
        if (SUB168(ZEXT816(0x30) * ZEXT416(uVar4) >> 0x40,0) != 0) {
            uVar6 = 0xffffffffffffffff;
        }
        lVar7 = FUN_14018b280(uVar6,0);
        param_1[8] = lVar7;
        uVar8 = FUN_1401f7640();
        local_80 = (ulonglong)*(uint *)(param_1 + 9);
        local_88 = 0;
        local_res18 = uVar8;
        FUN_1401d3110(&local_68,&LAB_140483660,&local_88,uVar8,2);
        puVar12 = puVar13;
        puVar16 = puVar13;
        if (*(int *)(param_1 + 9) != 0) {
            do {
                lVar15 = *(longlong *)(local_58 + (longlong)puVar16 * 8) * 0x38 + uVar8;
                lVar7 = param_1[8];
                *(undefined4 *)((longlong)puVar12 + lVar7) = *(undefined4 *)(lVar15 + 0x10);
                *(undefined4 *)((longlong)puVar12 + lVar7 + 4) = *(undefined4 *)(lVar15 + 0x14);
                *(undefined4 *)((longlong)puVar12 + lVar7 + 8) = *(undefined4 *)(lVar15 + 0x18);
                *(undefined4 *)((longlong)puVar12 + lVar7 + 0xc) = *(undefined4 *)(lVar15 + 0x1c);
                *(undefined4 *)((longlong)puVar12 + lVar7 + 0x10) = *(undefined4 *)(lVar15 + 0x20);
                *(undefined4 *)((longlong)puVar12 + lVar7 + 0x14) = *(undefined4 *)(lVar15 + 0x24);
                *(undefined4 *)((longlong)puVar12 + lVar7 + 0x18) = *(undefined4 *)(lVar15 + 0x28);
                *(undefined4 *)((longlong)puVar12 + lVar7 + 0x1c) = *(undefined4 *)(lVar15 + 0x2c);
                uVar1 = *(undefined4 *)(lVar15 + 0x30);
                if (DAT_140c63840 == (code *)0x0) {
                    puVar9 = puVar13;
                    if ((_DAT_140c64c04 == 0) && (iVar5 = FUN_140248ca0(), -1 < iVar5)) {
                        puVar9 = (ulonglong *)(**(code **)(*DAT_140c63b40 + 0x18))(DAT_140c63b40,uVar1);
                    }
                }
                else {
                    puVar9 = (ulonglong *)(*DAT_140c63840)(&PTR_u_VisualEffect_140a6dff8,uVar1,DAT_140c63858);
                }
                *(ulonglong **)((longlong)puVar12 + lVar7 + 0x20) = puVar9;
                puVar16 = (ulonglong *)((longlong)puVar16 + 1);
                *(undefined4 *)((longlong)puVar12 + lVar7 + 0x28) = *(undefined4 *)(lVar15 + 0x34);
                puVar12 = puVar12 + 6;
                uVar8 = local_res18;
            } while (puVar16 < (ulonglong *)(ulonglong)*(uint *)(param_1 + 9));
        }
        param_2 = local_res10;
        if (local_68 < local_60) {
            FUN_14018b900(local_68 * 8 + local_58,0);
            param_2 = local_res10;
        }
    }
    if (DAT_140c63850 == (code *)0x0) {
        if ((_DAT_140c65514 == 0) && (_DAT_140c65514 = 1, DAT_140c63a48 != (longlong *)0x0)) {
            (**(code **)(*DAT_140c63a48 + 8))();
            DAT_140c63a48 = (longlong *)0x0;
        }
    }
    else {
        (*DAT_140c63850)(&PTR_u_Creature2Action_140a69cd0,DAT_140c63858);
    }
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 1);
    puVar16 = (ulonglong *)FUN_14018b280(0x28);
    puVar12 = puVar13;
    if (puVar16 != (ulonglong *)0x0) {
        uVar1 = *(undefined4 *)(param_1 + 5);
        *puVar16 = 0;
        uVar8 = FUN_1401a40c0(uVar1);
        puVar16[1] = uVar8;
        uVar6 = SUB168(ZEXT816(8) * ZEXT816(uVar8),0);
        if (SUB168(ZEXT816(8) * ZEXT816(uVar8) >> 0x40,0) != 0) {
            uVar6 = 0xffffffffffffffff;
        }
        uVar8 = FUN_14018b280(uVar6,0);
        puVar16[2] = uVar8;
        FUN_1407e4830(uVar8,0,puVar16[1] << 3);
        puVar16[3] = (ulonglong)&LAB_1400522d0;
        puVar16[4] = (ulonglong)&LAB_1400522e0;
        puVar12 = puVar16;
    }
    uVar4 = *(uint *)(param_1 + 5);
    param_1[3] = (longlong)puVar12;
    uVar8 = SUB168(ZEXT816(0x1e0) * ZEXT416(uVar4),0);
    if (SUB168(ZEXT816(0x1e0) * ZEXT416(uVar4) >> 0x40,0) != 0) {
        uVar8 = 0xffffffffffffffff;
    }
    lVar7 = uVar8 + 8;
    if (0xfffffffffffffff7 < uVar8) {
        lVar7 = -1;
    }
    puVar10 = (uint *)FUN_14018b280(lVar7,0);
    if (puVar10 == (uint *)0x0) {
        puVar14 = (uint *)0x0;
    }
    else {
        puVar14 = puVar10 + 2;
        *puVar10 = uVar4;
        puVar10 = puVar14;
        while (uVar4 = uVar4 - 1, -1 < (int)uVar4) {
            FUN_140482720(puVar10);
            puVar10 = puVar10 + 0x78;
        }
    }
    param_1[4] = (longlong)puVar14;
    local_70 = (ulonglong *)0x0;
    local_78 = 0;
    local_res20 = 0;
    if (param_2[1] != 0) {
        fVar18 = 0.0;
        local_88 = 0;
        do {
            puVar10 = *(uint **)(*param_2 + local_res20 * 8);
            puVar17 = (undefined4 *)(param_1[4] + local_88);
            iVar5 = (**(code **)(*param_1 + 0x10))(param_1);
            if (-1 < iVar5) {
                if (((puVar17[0x12] != 0) || (fVar18 < (float)puVar17[0x13])) ||
                    (fVar18 < (float)puVar17[0x14])) {
                    local_res18 = local_res18 & 0xffffffff00000000 | (ulonglong)*puVar10;
                    if ((ulonglong *)param_1[2] != (ulonglong *)0x0) {
                        puVar14 = (uint *)param_1[1];
                        puVar12 = puVar13;
                        do {
                            if (*puVar14 == *puVar10) goto LAB_140483a9e;
                            puVar12 = (ulonglong *)((longlong)puVar12 + 1);
                            puVar14 = puVar14 + 1;
                        } while (puVar12 < (ulonglong *)param_1[2]);
                    }
                    FUN_140003460();
                }
                LAB_140483a9e:
                plVar2 = (longlong *)param_1[3];
                if (*plVar2 == plVar2[1]) {
                    FUN_1400290d0(plVar2);
                }
                uVar11 = (*(code *)plVar2[3])(puVar17);
                lVar7 = plVar2[2];
                uVar8 = plVar2[1];
                puVar16 = (ulonglong *)FUN_14018b280(0x20);
                puVar12 = puVar13;
                if (puVar16 != (ulonglong *)0x0) {
                    uVar3 = *(ulonglong *)(lVar7 + (uVar11 % uVar8) * 8);
                    *puVar16 = uVar11;
                    puVar16[1] = uVar3;
                    uVar1 = *puVar17;
                    puVar16[3] = (ulonglong)puVar17;
                    *(undefined4 *)(puVar16 + 2) = uVar1;
                    puVar12 = puVar16;
                }
                *(ulonglong **)(lVar7 + (uVar11 % uVar8) * 8) = puVar12;
                *plVar2 = *plVar2 + 1;
                puVar14 = puVar10 + 0x1f;
                if (puVar10[0x1f] != 0) {
                    lVar7 = FUN_140484c10(&local_78);
                    lVar7 = local_78 + lVar7 * 0x18;
                    puVar12 = puVar13;
                    do {
                        if (*puVar14 == 0) break;
                        FUN_140003460(lVar7,puVar14);
                        puVar12 = (ulonglong *)((longlong)puVar12 + 1);
                        puVar14 = puVar14 + 1;
                    } while (puVar12 < (ulonglong *)0x19);
                    *(undefined4 **)(lVar7 + 0x10) = puVar17 + 0x16;
                }
                puVar10 = puVar10 + 0x38;
                if (*puVar10 != 0) {
                    lVar7 = FUN_140484c10(&local_78);
                    lVar7 = local_78 + lVar7 * 0x18;
                    puVar12 = puVar13;
                    do {
                        if (*puVar10 == 0) break;
                        FUN_140003460(lVar7,puVar10);
                        puVar12 = (ulonglong *)((longlong)puVar12 + 1);
                        puVar10 = puVar10 + 1;
                    } while (puVar12 < (ulonglong *)0x19);
                    *(undefined4 **)(lVar7 + 0x10) = puVar17 + 0x18;
                }
            }
            local_res20 = local_res20 + 1;
            local_88 = local_88 + 0x1e0;
            param_2 = local_res10;
        } while (local_res20 < (ulonglong)local_res10[1]);
    }
    local_res10 = (longlong *)((ulonglong)local_res10 & 0xffffffff00000000);
    FUN_140484d00(&local_78,param_1 + 6,&local_res10);
    DAT_140c66650 = param_1[6];
    if (DAT_140c63850 == (code *)0x0) {
        if ((_DAT_140c63ec0 == 0) && (_DAT_140c63ec0 = 1, DAT_140c63d10 != (longlong *)0x0)) {
            (**(code **)(*DAT_140c63d10 + 8))();
            DAT_140c63d10 = (longlong *)0x0;
            goto LAB_140483c62;
        }
    }
    else {
        (*DAT_140c63850)(&PTR_u_Creature2_140a69c60,DAT_140c63858);
        LAB_140483c62:
        if (DAT_140c63850 != (code *)0x0) {
            (*DAT_140c63850)(&PTR_u_Creature2ModelInfo_140a69db0,DAT_140c63858);
            goto LAB_140483cab;
        }
    }
    if ((_DAT_140c63cd8 == 0) && (_DAT_140c63cd8 = 1, DAT_140c63af0 != (longlong *)0x0)) {
        (**(code **)(*DAT_140c63af0 + 8))();
        DAT_140c63af0 = (longlong *)0x0;
    }
    LAB_140483cab:
    lVar7 = local_78;
    puVar12 = local_70;
    puVar16 = puVar13;
    if (local_70 != (ulonglong *)0x0) {
        do {
            lVar15 = *(longlong *)((longlong)puVar13 + lVar7);
            if (lVar15 != 0) {
                (**(code **)(*(longlong *)(lVar15 + -0x10) + 8))(lVar15 + -0x10);
                lVar7 = local_78;
                puVar12 = local_70;
            }
            puVar16 = (ulonglong *)((longlong)puVar16 + 1);
            puVar13 = puVar13 + 3;
        } while (puVar16 < puVar12);
    }
    if (lVar7 != 0) {
        (**(code **)(*(longlong *)(lVar7 + -0x10) + 8))(lVar7 + -0x10);
    }
    return 0;
}



undefined8 FUN_140483d20(longlong param_1,undefined4 *param_2,int *param_3)

{
    undefined uVar1;
    uint uVar2;
    longlong lVar3;
    int iVar4;
    short *psVar5;
    int *piVar6;
    undefined8 *puVar7;
    longlong lVar8;
    undefined8 uVar9;
    int iVar10;
    undefined8 *puVar11;
    ulonglong uVar12;
    undefined8 *puVar13;
    undefined8 *puVar14;
    undefined8 *puVar15;
    int *piVar16;
    int *piVar17;
    longlong local_res10;

    FUN_140485490();
    param_2[0x47] = param_3[0x6f];
    param_2[0x46] = param_3[0x6e];
    param_2[0x45] = param_3[0x6d];
    param_2[0x48] = param_3[0x70];
    param_2[0x3a] = param_3[0x85];
    param_2[0x49] = param_3[0x96];
    param_2[0x38] = param_3[0x94];
    psVar5 = (short *)FUN_14034bdd0();
    puVar15 = (undefined8 *)0x0;
    iVar10 = 0;
    iVar4 = iVar10;
    if ((psVar5 != (short *)0x0) && (*psVar5 != 0)) {
        iVar4 = param_3[0x86];
    }
    param_2[0x39] = iVar4;
    psVar5 = (short *)FUN_14034bdd0();
    iVar4 = iVar10;
    if ((psVar5 != (short *)0x0) && (*psVar5 != 0)) {
        iVar4 = param_3[0x91];
    }
    param_2[0x3b] = iVar4;
    psVar5 = (short *)FUN_14034bdd0();
    if ((psVar5 != (short *)0x0) && (*psVar5 != 0)) {
        iVar10 = param_3[0x93];
    }
    param_2[0x3d] = iVar10;
    param_2[0x3c] = param_3[0x92];
    psVar5 = (short *)FUN_14034bdd0();
    *(short **)(param_2 + 0x4e) = psVar5;
    iVar10 = param_3[0x1b];
    param_2[0x50] = iVar10;
    if (((psVar5 != (short *)0x0) && (*psVar5 != 0)) || (iVar10 != 0)) {
        if (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) {
            piVar6 = *(int **)(param_1 + 8);
            puVar11 = puVar15;
            do {
                if (*piVar6 == *param_3) goto LAB_140483e7b;
                puVar11 = (undefined8 *)((longlong)puVar11 + 1);
                piVar6 = piVar6 + 1;
            } while (puVar11 < *(undefined8 **)(param_1 + 0x10));
        }
        FUN_140003460();
    }
    LAB_140483e7b:
    piVar6 = param_3 + 0x87;
    if (((*piVar6 != 0) || (param_3[0x71] != 0)) || (param_3[0x7b] != 0)) {
        puVar7 = (undefined8 *)FUN_14018b280();
        puVar11 = puVar15;
        if (puVar7 != (undefined8 *)0x0) {
            puVar7[1] = 0;
            *puVar7 = 0;
            puVar7[3] = 0;
            puVar7[2] = 0;
            piVar17 = param_3 + 0x71;
            puVar7[5] = 0;
            puVar7[4] = 0;
            piVar16 = param_3 + 0x7b;
            do {
                puVar13 = puVar15;
                if (*piVar6 == 0) break;
                FUN_140003460();
                puVar11 = (undefined8 *)((longlong)puVar11 + 1);
                piVar6 = piVar6 + 1;
            } while (puVar11 < &DAT_0000000a);
            do {
                puVar14 = puVar15;
                if (*piVar17 == 0) break;
                FUN_140003460();
                puVar13 = (undefined8 *)((longlong)puVar13 + 1);
                piVar17 = piVar17 + 1;
            } while (puVar13 < &DAT_0000000a);
            do {
                puVar11 = puVar7;
                if (*piVar16 == 0) break;
                FUN_140003460();
                puVar14 = (undefined8 *)((longlong)puVar14 + 1);
                piVar16 = piVar16 + 1;
            } while (puVar14 < &DAT_0000000a);
        }
        *(undefined8 **)(param_2 + 0x4a) = puVar11;
    }
    if ((param_3[0x95] != 0) && (lVar8 = FUN_140201fe0(), lVar8 != 0)) {
        param_2[0x36] = param_3[0x95];
    }
    if ((param_3[0x9a] != 0) && (lVar8 = FUN_1401f7e60(), lVar8 != 0)) {
        param_2[0x37] = param_3[0x9a];
    }
    if ((param_3[0x69] != 0) && (lVar8 = FUN_1401f82a0(), lVar8 != 0)) {
        uVar9 = FUN_14034bdd0();
        *(undefined8 *)(param_2 + 0x3e) = uVar9;
        param_2[0x42] = *(undefined4 *)(lVar8 + 8);
        uVar12 = *(ulonglong *)(lVar8 + 0x10);
        puVar11 = puVar15;
        if ((uVar12 != 0) && (uVar12 <= DAT_140c3fe70)) {
            puVar11 = (undefined8 *)(DAT_140c3fe68 + uVar12);
        }
        *(undefined8 **)(param_2 + 0x40) = puVar11;
        if (puVar11 != (undefined8 *)0x0) {
            if (*(short *)puVar11 == 0) {
                puVar11 = puVar15;
            }
            *(undefined8 **)(param_2 + 0x40) = puVar11;
        }
    }
    if ((param_3[7] != 0) && (lVar8 = FUN_1401f64e0(), lVar8 != 0)) {
        iVar10 = param_3[7];
        if (0 < iVar10) {
            if (iVar10 < 0x19) {
                iVar10 = iVar10 + -1;
                uVar12 = (longlong)iVar10 / 6 + ((longlong)iVar10 >> 0x3f) & 0xffffffff;
                puVar15 = (undefined8 *)
                        (ulonglong)(uint)(iVar10 + ((int)uVar12 + (int)(uVar12 >> 0x1f)) * -6);
            }
            else {
                puVar15 = (undefined8 *)&DAT_00000005;
            }
        }
        *(char *)(param_2 + 0x56) = (char)puVar15;
        *(undefined *)((longlong)param_2 + 0x159) = *(undefined *)(lVar8 + 0x14);
    }
    if (param_3[0x6c] != 0) {
        FUN_140233b00();
        param_2[0x43] = param_3[0x6c];
    }
    if (param_3[0x6b] != 0) {
        FUN_140233b00();
        param_2[0x44] = param_3[0x6b];
    }
    if ((param_3[0x98] != 0) && (lVar8 = FUN_140200ee0(), lVar8 != 0)) {
        param_2[0x4d] = param_3[0x98];
    }
    if ((param_3[0x6a] != 0) && (lVar8 = FUN_14020bd20(), lVar8 != 0)) {
        param_2[0x51] = param_3[0x6a];
    }
    if (param_3[0x9b] != 0) {
        lVar8 = FUN_14021f3c0();
        if (lVar8 == 0) {
            return 0x80004005;
        }
        param_2[0x52] = param_3[0x9b];
    }
    if (param_3[0x9c] != 0) {
        lVar8 = FUN_1402092a0();
        if (lVar8 == 0) {
            return 0x80004005;
        }
        param_2[0x53] = param_3[0x9c];
    }
    param_2[0x5b] = param_3[0xa7];
    param_2[0x5c] = param_3[0xa8];
    uVar2 = param_3[0xb];
    if (uVar2 != 0) {
        lVar8 = *(longlong *)(param_1 + 0x58);
        local_res10 = lVar8;
        lVar3 = *(longlong *)(lVar8 + 8);
        while (lVar3 != 0) {
            if (*(uint *)(lVar3 + 0x20) < uVar2) {
                lVar3 = *(longlong *)(lVar3 + 0x18);
            }
            else {
                local_res10 = lVar3;
                lVar3 = *(longlong *)(lVar3 + 0x10);
            }
        }
        if ((local_res10 == lVar8) || (uVar2 < *(uint *)(local_res10 + 0x20))) {
            local_res10 = lVar8;
        }
        if (local_res10 == lVar8) {
            return 0x80004005;
        }
        param_2[0x57] = uVar2;
    }
    uVar2 = param_3[0xc];
    if (uVar2 != 0) {
        lVar8 = *(longlong *)(param_1 + 0x78);
        local_res10 = lVar8;
        lVar3 = *(longlong *)(lVar8 + 8);
        while (lVar3 != 0) {
            if (*(uint *)(lVar3 + 0x20) < uVar2) {
                lVar3 = *(longlong *)(lVar3 + 0x18);
            }
            else {
                local_res10 = lVar3;
                lVar3 = *(longlong *)(lVar3 + 0x10);
            }
        }
        if ((local_res10 == lVar8) || (uVar2 < *(uint *)(local_res10 + 0x20))) {
            local_res10 = lVar8;
        }
        if (local_res10 == lVar8) {
            return 0x80004005;
        }
        param_2[0x58] = uVar2;
    }
    lVar8 = FUN_1404835c0(param_1,*param_2);
    if ((lVar8 != 0) && (*(int *)(lVar8 + 0x15c) != 0)) {
        FUN_140484600(param_1 + 0x50);
        lVar8 = FUN_1404846c0();
        if (lVar8 != 0) {
            uVar1 = *(undefined *)(lVar8 + 0xb8);
            *(byte *)((longlong)param_2 + 0x15b) = *(byte *)((longlong)param_2 + 0x15b) & 0xfc;
            *(undefined *)((longlong)param_2 + 0x15a) = uVar1;
        }
    }
    param_2[0x59] = param_3[0xad];
    if (param_3[0x99] != 0) {
        uVar9 = FUN_1401f7a20();
        *(undefined8 *)(param_2 + 0x54) = uVar9;
    }
    param_2[0x5a] = param_3[0x97];
    param_2[0x5d] = param_3[0xac];
    param_2[4] = param_3[8];
    return 0;
}



ulonglong FUN_140484530(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
    longlong lVar1;
    ulonglong *puVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    undefined4 local_res10 [2];

    lVar1 = *(longlong *)(DAT_140c65918 + 0x18);
    local_res10[0] = param_2;
    uVar3 = (**(code **)(lVar1 + 0x18))(local_res10);
    uVar4 = uVar3 / *(ulonglong *)(lVar1 + 8);
    puVar2 = *(ulonglong **)(*(longlong *)(lVar1 + 0x10) + (uVar3 % *(ulonglong *)(lVar1 + 8)) * 8);
    while( true ) {
        if (puVar2 == (ulonglong *)0x0) {
            return uVar4;
        }
        if ((uVar3 == *puVar2) &&
            (uVar4 = (**(code **)(lVar1 + 0x20))(local_res10,puVar2 + 2), (int)uVar4 != 0)) break;
        puVar2 = (ulonglong *)puVar2[1];
    }
    if (puVar2 + 3 == (ulonglong *)0x0) {
        return 0;
    }
    uVar4 = puVar2[3];
    *(undefined8 *)(uVar4 + 0x1d8) = param_3;
    return uVar4;
}



undefined8 FUN_1404845c0(longlong param_1)

{
    longlong lVar1;
    undefined8 uVar2;

    lVar1 = FUN_1404835c0();
    if ((lVar1 != 0) && (*(int *)(lVar1 + 0x15c) != 0)) {
        uVar2 = FUN_140484600(param_1 + 0x50);
        uVar2 = FUN_1404846c0(uVar2);
        return uVar2;
    }
    return 0;
}



longlong FUN_140484600(longlong param_1,uint *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong local_res8;
    longlong local_res18 [2];
    undefined local_58 [8];
    undefined8 local_50;
    undefined8 local_48;
    undefined8 local_40;
    uint local_38 [2];
    undefined local_30 [8];
    longlong local_28;

    lVar3 = *(longlong *)(param_1 + 8);
    local_res8 = lVar3;
    if (*(longlong *)(lVar3 + 8) != 0) {
        lVar1 = *(longlong *)(lVar3 + 8);
        do {
            if (*(uint *)(lVar1 + 0x20) < *param_2) {
                lVar2 = *(longlong *)(lVar1 + 0x18);
            }
            else {
                lVar2 = *(longlong *)(lVar1 + 0x10);
                local_res8 = lVar1;
            }
            lVar1 = lVar2;
        } while (lVar2 != 0);
    }
    if ((local_res8 == lVar3) || (lVar3 = local_res8, *param_2 < *(uint *)(local_res8 + 0x20))) {
        local_50 = 0;
        local_48 = 0;
        local_40 = 0;
        local_38[0] = *param_2;
        FUN_140484740(local_30,local_58);
        FUN_1404847e0(param_1,local_res18,&local_res8,local_38);
        lVar3 = local_res18[0];
        if (local_28 != 0) {
            FUN_14018b900(local_28,0);
        }
    }
    return lVar3 + 0x28;
}



undefined8 FUN_1404846c0(longlong param_1)

{
    longlong lVar1;
    uint uVar2;
    longlong lVar3;
    longlong lVar4;

    if (*(longlong *)(param_1 + 8) == *(longlong *)(param_1 + 0x10)) {
        return 0;
    }
    uVar2 = FUN_1401ae6f0(1,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + -0x10));
    lVar4 = *(longlong *)(param_1 + 8);
    lVar3 = *(longlong *)(param_1 + 0x10) - lVar4 >> 4;
    while (lVar1 = lVar3, 0 < lVar1) {
        lVar3 = lVar1 >> 1;
        if (*(uint *)(lVar4 + lVar3 * 0x10) < uVar2) {
            lVar4 = lVar4 + lVar3 * 0x10 + 0x10;
            lVar3 = lVar1 + (-1 - lVar3);
        }
    }
    return *(undefined8 *)(lVar4 + 8);
}



longlong FUN_140484740(longlong param_1,longlong param_2)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    longlong lVar5;

    lVar5 = *(longlong *)(param_2 + 0x10) - *(longlong *)(param_2 + 8) >> 4;
    if (lVar5 == 0) {
        *(undefined8 *)(param_1 + 8) = 0;
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined8 *)(param_1 + 0x18) = 0;
    }
    else {
        lVar5 = lVar5 * 0x10;
        lVar2 = FUN_14018b280(lVar5,0);
        *(longlong *)(param_1 + 8) = lVar2;
        *(longlong *)(param_1 + 0x10) = lVar2;
        *(longlong *)(param_1 + 0x18) = lVar2 + lVar5;
    }
    puVar1 = *(undefined8 **)(param_2 + 0x10);
    puVar3 = *(undefined8 **)(param_1 + 8);
    for (puVar4 = *(undefined8 **)(param_2 + 8); puVar4 != puVar1; puVar4 = puVar4 + 2) {
        if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = *puVar4;
            puVar3[1] = puVar4[1];
        }
        puVar3 = puVar3 + 2;
    }
    *(undefined8 **)(param_1 + 0x10) = puVar3;
    return param_1;
}



longlong * FUN_1404847e0(longlong param_1,longlong *param_2,char **param_3,uint *param_4)

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
            LAB_14048483a:
            plVar4 = (longlong *)FUN_1404850b0(param_1,local_18,param_4);
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
                        FUN_140484740(lVar5 + 0x28,param_4 + 2);
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
                    lVar5 = FUN_140485270(uVar1,param_4);
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
                plVar4 = (longlong *)FUN_1404850b0(param_1,local_18,param_4);
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
            goto LAB_14048483a;
        if (*(longlong *)(lVar5 + 0x18) == 0) {
            FUN_140484fc0(param_1,param_2,0,lVar5,param_4);
            return param_2;
        }
    }
    FUN_140484fc0();
    return param_2;
}



void FUN_1404849f0(longlong param_1,longlong *param_2)

{
    int iVar1;
    longlong lVar2;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    lVar2 = *(longlong *)(param_1 + 8);
    if (*param_2 == lVar2) {
        local_40 = 0;
        local_48 = &PTR_LAB_140b5e648;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_48);
        local_28 = local_48;
        local_res8 = 0x141e4f6b0;
        local_18 = local_38;
        local_20 = local_40;
        iVar1 = FUN_1401971e0(&DAT_140c8acec,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar1 != 0) {
            // WARNING: Could not recover jumptable at 0x000140484ab5. Too many branches
            // WARNING: Treating indirect jump as call
            DebugBreak();
            return;
        }
    }
    else {
        lVar2 = FUN_140007db0(*param_2,lVar2 + 8,lVar2 + 0x10,lVar2 + 0x18);
        if (*(longlong *)(lVar2 + 0x30) != 0) {
            FUN_14018b900(*(longlong *)(lVar2 + 0x30),0);
        }
        FUN_14018b900(lVar2,0);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    }
    return;
}



void FUN_140484b00(longlong param_1,longlong *param_2)

{
    int iVar1;
    longlong lVar2;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    lVar2 = *(longlong *)(param_1 + 8);
    if (*param_2 == lVar2) {
        local_40 = 0;
        local_48 = &PTR_LAB_140b5e648;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_48);
        local_28 = local_48;
        local_res8 = 0x141e4f6b0;
        local_18 = local_38;
        local_20 = local_40;
        iVar1 = FUN_1401971e0(&DAT_140c8ace8,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar1 != 0) {
            // WARNING: Could not recover jumptable at 0x000140484bc5. Too many branches
            // WARNING: Treating indirect jump as call
            DebugBreak();
            return;
        }
    }
    else {
        lVar2 = FUN_140007db0(*param_2,lVar2 + 8,lVar2 + 0x10,lVar2 + 0x18);
        if (*(longlong *)(lVar2 + 0x30) != 0) {
            FUN_14018b900(*(longlong *)(lVar2 + 0x30),0);
        }
        FUN_14018b900(lVar2,0);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    }
    return;
}



longlong FUN_140484c10(longlong *param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    ulonglong uVar5;
    longlong lVar6;

    lVar2 = param_1[1];
    lVar3 = FUN_14018db00(*param_1,lVar2 + 1,0x18);
    uVar5 = 0;
    puVar1 = (undefined8 *)(lVar3 + lVar2 * 0x18);
    if (puVar1 != (undefined8 *)0x0) {
        puVar1[1] = 0;
        *puVar1 = 0;
    }
    if (*param_1 != lVar3) {
        if (param_1[1] != 0) {
            lVar4 = lVar3;
            do {
                if (lVar4 != 0) {
                    lVar6 = -lVar3 + lVar4 + *param_1;
                    FUN_1403b4f00(lVar4,lVar6);
                    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar6 + 0x10);
                }
                lVar6 = *(longlong *)(-lVar3 + lVar4 + *param_1);
                if (lVar6 != 0) {
                    (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))(lVar6 + -0x10);
                }
                uVar5 = uVar5 + 1;
                lVar4 = lVar4 + 0x18;
            } while (uVar5 < (ulonglong)param_1[1]);
        }
        lVar4 = *param_1;
        if (lVar4 != 0) {
            (**(code **)(*(longlong *)(lVar4 + -0x10) + 8))(lVar4 + -0x10);
        }
        *param_1 = lVar3;
    }
    param_1[1] = lVar2 + 1;
    return lVar2;
}



void FUN_140484d00(longlong *param_1,longlong *param_2,undefined8 param_3)

{
    longlong *plVar1;
    longlong lVar2;
    uint uVar3;
    undefined8 *puVar4;
    int iVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    uint *puVar8;
    undefined8 *puVar9;
    undefined8 *puVar10;
    undefined8 *puVar11;
    longlong lVar12;
    ulonglong uVar13;
    ulonglong uVar14;
    bool bVar15;
    undefined8 local_58;
    longlong local_50;
    ulonglong local_48;
    ulonglong local_40;
    longlong local_38;

    puVar7 = (undefined8 *)0x0;
    param_2[1] = 0;
    puVar9 = puVar7;
    puVar10 = puVar7;
    if (param_1[1] != 0) {
        do {
            FUN_140029250(*param_1 + (longlong)puVar9,&LAB_1404851b0,0);
            puVar10 = (undefined8 *)((longlong)puVar10 + 1);
            puVar9 = puVar9 + 3;
        } while (puVar10 < (undefined8 *)param_1[1]);
    }
    local_50 = param_1[1];
    local_58 = 0;
    FUN_1401d3110(&local_48,&LAB_1404851d0,&local_58,param_1,2);
    FUN_140003460(param_2,param_3);
    uVar13 = 1;
    puVar9 = puVar7;
    if (param_1[1] != 0) {
        do {
            lVar12 = *(longlong *)(local_38 + (longlong)puVar9 * 8);
            if (*(longlong *)(*param_1 + 8 + lVar12 * 0x18) != 0) break;
            puVar9 = (undefined8 *)((longlong)puVar9 + 1);
            **(undefined8 **)(*param_1 + 0x10 + lVar12 * 0x18) = 0;
        } while (puVar9 < (undefined8 *)param_1[1]);
        puVar10 = puVar7;
        if (puVar9 < (undefined8 *)param_1[1]) {
            do {
                uVar14 = param_2[1];
                plVar1 = (longlong *)(*param_1 + *(longlong *)(local_38 + (longlong)puVar9 * 8) * 0x18);
                if (uVar13 < uVar14) {
                    puVar4 = (undefined8 *)plVar1[1];
                    puVar8 = (uint *)(*param_2 + uVar13 * 4);
                    puVar11 = puVar4;
                    if (puVar10 < puVar4) {
                        puVar11 = puVar10;
                    }
                    if (puVar11 != (undefined8 *)0x0) {
                        lVar12 = *plVar1 - (longlong)puVar8;
                        puVar6 = puVar7;
                        do {
                            uVar3 = *(uint *)(lVar12 + (longlong)puVar8);
                            bVar15 = uVar3 < *puVar8;
                            if (uVar3 != *puVar8) goto LAB_140484e71;
                            puVar6 = (undefined8 *)((longlong)puVar6 + 1);
                            puVar8 = puVar8 + 1;
                        } while (puVar6 < puVar11);
                    }
                    bVar15 = puVar4 < puVar10;
                    if (puVar4 != puVar10) {
                        LAB_140484e71:
                        iVar5 = 1;
                        if (bVar15) {
                            iVar5 = -1;
                        }
                        if (iVar5 != 0) goto LAB_140484e8f;
                    }
                    *(ulonglong *)plVar1[2] = uVar13;
                    uVar14 = uVar13;
                }
                else {
                    LAB_140484e8f:
                    puVar10 = (undefined8 *)plVar1[1];
                    FUN_1400291a0(param_2,*plVar1,puVar10);
                    FUN_140003460(param_2,param_3);
                    *(ulonglong *)plVar1[2] = uVar14;
                }
                puVar9 = (undefined8 *)((longlong)puVar9 + 1);
                uVar13 = uVar14;
            } while (puVar9 < (undefined8 *)param_1[1]);
        }
    }
    lVar12 = param_2[1];
    puVar9 = (undefined8 *)*param_2;
    if (lVar12 != 0) {
        lVar2 = lVar12 * 4 + 0x10;
        if ((puVar9 == (undefined8 *)0x0) ||
            (iVar5 = (**(code **)puVar9[-2])(puVar9 + -2,lVar2), iVar5 == 0)) {
            puVar9 = (undefined8 *)FUN_14018b280(lVar2,0);
            if (puVar9 != (undefined8 *)0x0) {
                puVar9[1] = lVar12;
                *puVar9 = &PTR_LAB_140b55060;
                puVar7 = puVar9;
            }
            puVar7 = puVar7 + 2;
        }
        else {
            puVar9[-1] = lVar12;
            puVar7 = puVar9;
        }
    }
    if ((undefined8 *)*param_2 != puVar7) {
        FUN_1407db590(puVar7,(undefined8 *)*param_2,param_2[1] * 4);
        lVar12 = *param_2;
        if (lVar12 != 0) {
            (**(code **)(*(longlong *)(lVar12 + -0x10) + 8))(lVar12 + -0x10);
        }
        *param_2 = (longlong)puVar7;
    }
    if (local_48 < local_40) {
        FUN_14018b900(local_38 + local_48 * 8,0);
    }
    return;
}



longlong *
FUN_140484fc0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,uint *param_5)

{
    longlong lVar1;
    longlong lVar2;

    if (((param_4 == *(longlong *)(param_1 + 8)) || (param_3 != 0)) ||
        (*param_5 < *(uint *)(param_4 + 0x20))) {
        lVar2 = FUN_14018b280(0x48);
        if ((uint *)(lVar2 + 0x20) != (uint *)0x0) {
            *(uint *)(lVar2 + 0x20) = *param_5;
            FUN_140484740(lVar2 + 0x28,param_5 + 2);
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
        lVar2 = FUN_140485270(param_1,param_5);
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



char ** FUN_1404850b0(longlong param_1,char **param_2,uint *param_3)

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
        if (pcVar5 == *(char **)(pcVar2 + 0x10)) goto LAB_14048510e;
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
    LAB_14048510e:
    ppcVar1 = (char **)FUN_140484fc0(param_1,local_res8,pcVar4,pcVar5,param_3);
    *param_2 = *ppcVar1;
    *(undefined *)(param_2 + 1) = 1;
    return param_2;
}



undefined8 FUN_140485200(longlong param_1,ulonglong param_2,uint *param_3,ulonglong param_4)

{
    uint uVar1;
    ulonglong uVar2;
    undefined8 uVar3;
    ulonglong uVar4;

    uVar4 = param_2;
    if (param_4 < param_2) {
        uVar4 = param_4;
    }
    uVar2 = 0;
    if (uVar4 != 0) {
        param_1 = param_1 - (longlong)param_3;
        do {
            uVar1 = *(uint *)(param_1 + (longlong)param_3);
            if (uVar1 != *param_3) {
                uVar3 = 1;
                if (uVar1 < *param_3) {
                    uVar3 = 0xffffffff;
                }
                return uVar3;
            }
            uVar2 = uVar2 + 1;
            param_3 = param_3 + 1;
        } while (uVar2 < uVar4);
    }
    if (param_2 == param_4) {
        return 0;
    }
    uVar3 = 1;
    if (param_2 < param_4) {
        uVar3 = 0xffffffff;
    }
    return uVar3;
}



longlong FUN_140485270(undefined8 param_1,undefined4 *param_2)

{
    longlong lVar1;

    lVar1 = FUN_14018b280();
    if ((undefined4 *)(lVar1 + 0x20) != (undefined4 *)0x0) {
        *(undefined4 *)(lVar1 + 0x20) = *param_2;
        FUN_140484740(lVar1 + 0x28,param_2 + 2);
    }
    return lVar1;
}



void FUN_1404852b0(undefined8 param_1,undefined4 *param_2)

{
    undefined4 uVar1;
    undefined4 *puVar2;
    longlong lVar3;
    uint uVar4;
    int iVar5;
    ulonglong uVar6;

    puVar2 = (undefined4 *)FUN_1401f6d60();
    *param_2 = *puVar2;
    param_2[2] = puVar2[4];
    param_2[3] = puVar2[5];
    param_2[4] = puVar2[8];
    param_2[6] = puVar2[9];
    param_2[7] = puVar2[6];
    param_2[8] = puVar2[0x5c];
    param_2[9] = puVar2[0x5d];
    param_2[10] = puVar2[0xab];
    param_2[0xe] = puVar2[0xd];
    param_2[0x24] = puVar2[0x54];
    param_2[0x25] = puVar2[0x55];
    param_2[0x26] = puVar2[0x56];
    param_2[0xf] = puVar2[0x1c];
    param_2[0x10] = puVar2[0x1d];
    param_2[0x11] = puVar2[0x1e];
    param_2[0x12] = puVar2[0x17];
    param_2[0x13] = puVar2[0x18];
    param_2[0x14] = puVar2[0x19];
    param_2[0x1b] = puVar2[0x5e];
    param_2[0x1c] = puVar2[0x5f];
    param_2[0x1d] = puVar2[0x60];
    param_2[0x1e] = puVar2[0x61];
    param_2[0x1f] = puVar2[0x62];
    param_2[0x20] = puVar2[99];
    param_2[0x21] = puVar2[100];
    *(undefined8 *)(param_2 + 0x22) = *(undefined8 *)(puVar2 + 0x5a);
    param_2[0x27] = puVar2[0x52];
    param_2[0x28] = puVar2[0x51];
    param_2[0x29] = puVar2[0x53];
    param_2[1] = puVar2[1];
    uVar1 = puVar2[0xe];
    param_2[0xd] = 0x3f800000;
    param_2[0x1a] = uVar1;
    iVar5 = puVar2[7];
    if (iVar5 != 0) {
        param_2[5] = iVar5;
        if (iVar5 < 1) {
            iVar5 = 0;
        }
        else if (iVar5 < 0x19) {
            uVar6 = (longlong)(iVar5 + -1) / 6 + ((longlong)(iVar5 + -1) >> 0x3f) & 0xffffffff;
            iVar5 = (int)uVar6 + (int)(uVar6 >> 0x1f);
        }
        else {
            iVar5 = 3;
        }
        param_2[0xb] = iVar5;
        lVar3 = FUN_1401f64e0();
        if (lVar3 != 0) {
            param_2[0xd] = *(undefined4 *)(lVar3 + 8);
            param_2[0xc] = *(undefined4 *)(lVar3 + 0xc);
        }
    }
    param_2[0x2a] = puVar2[0xa9];
    param_2[0x2b] = puVar2[0xaa];
    uVar4 = 0xffff;
    if ((uint)puVar2[0x65] < 0xffff) {
        uVar4 = puVar2[0x65];
    }
    *(short *)(param_2 + 0x2c) = (short)uVar4;
    uVar4 = 0xffff;
    if ((uint)puVar2[0x66] < 0xffff) {
        uVar4 = puVar2[0x66];
    }
    *(short *)((longlong)param_2 + 0xb2) = (short)uVar4;
    param_2[0x2d] = puVar2[0x67];
    param_2[0x2e] = puVar2[0x68];
    return;
}



void FUN_140485490(undefined8 param_1,longlong param_2,undefined4 param_3)

{
    longlong lVar1;
    undefined4 *puVar2;
    int *piVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    uint uVar6;

    lVar1 = FUN_1401f6d60(param_3);
    FUN_1404852b0();
    uVar5 = 0;
    uVar6 = 0;
    piVar3 = (int *)(lVar1 + 0x3c);
    do {
        if (*piVar3 != 0) goto LAB_1404854f8;
        uVar6 = uVar6 + 1;
        piVar3 = piVar3 + 1;
    } while (uVar6 < 4);
    piVar3 = (int *)(lVar1 + 0x4c);
    uVar4 = uVar5;
    do {
        if (*piVar3 != 0) goto LAB_1404854f8;
        uVar6 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar6;
        piVar3 = piVar3 + 1;
    } while (uVar6 < 4);
    LAB_140485569:
    if (((*(float *)(lVar1 + 0x15c) != 0.0) || (*(float *)(lVar1 + 0x160) != 0.0)) ||
        (*(float *)(lVar1 + 0x164) != 0.0)) {
        puVar2 = (undefined4 *)FUN_14018b280();
        *(undefined4 **)(param_2 + 200) = puVar2;
        *puVar2 = *(undefined4 *)(lVar1 + 0x15c);
        *(undefined4 *)(*(longlong *)(param_2 + 200) + 4) = *(undefined4 *)(lVar1 + 0x160);
        *(undefined4 *)(*(longlong *)(param_2 + 200) + 8) = *(undefined4 *)(lVar1 + 0x164);
    }
    piVar3 = (int *)(lVar1 + 0x274);
    uVar4 = uVar5;
    do {
        if (*piVar3 != 0) goto LAB_1404855ff;
        uVar4 = uVar4 + 1;
        piVar3 = piVar3 + 1;
    } while (uVar4 < 5);
    piVar3 = (int *)(lVar1 + 0x288);
    while (*piVar3 == 0) {
        uVar5 = uVar5 + 1;
        piVar3 = piVar3 + 1;
        if (4 < uVar5) {
            return;
        }
    }
    LAB_1404855ff:
    puVar2 = (undefined4 *)FUN_14018b280();
    *(undefined4 **)(param_2 + 0xd0) = puVar2;
    *puVar2 = *(undefined4 *)(lVar1 + 0x274);
    *(undefined4 *)(*(longlong *)(param_2 + 0xd0) + 4) = *(undefined4 *)(lVar1 + 0x278);
    *(undefined4 *)(*(longlong *)(param_2 + 0xd0) + 8) = *(undefined4 *)(lVar1 + 0x27c);
    *(undefined4 *)(*(longlong *)(param_2 + 0xd0) + 0xc) = *(undefined4 *)(lVar1 + 0x280);
    *(undefined4 *)(*(longlong *)(param_2 + 0xd0) + 0x10) = *(undefined4 *)(lVar1 + 0x284);
    *(undefined4 *)(*(longlong *)(param_2 + 0xd0) + 0x14) = *(undefined4 *)(lVar1 + 0x288);
    *(undefined4 *)(*(longlong *)(param_2 + 0xd0) + 0x18) = *(undefined4 *)(lVar1 + 0x28c);
    *(undefined4 *)(*(longlong *)(param_2 + 0xd0) + 0x1c) = *(undefined4 *)(lVar1 + 0x290);
    *(undefined4 *)(*(longlong *)(param_2 + 0xd0) + 0x20) = *(undefined4 *)(lVar1 + 0x294);
    *(undefined4 *)(*(longlong *)(param_2 + 0xd0) + 0x24) = *(undefined4 *)(lVar1 + 0x298);
    return;
    LAB_1404854f8:
    puVar2 = (undefined4 *)FUN_14018b280();
    *(undefined4 **)(param_2 + 0xc0) = puVar2;
    *puVar2 = *(undefined4 *)(lVar1 + 0x3c);
    *(undefined4 *)(*(longlong *)(param_2 + 0xc0) + 0x10) = *(undefined4 *)(lVar1 + 0x4c);
    *(undefined4 *)(*(longlong *)(param_2 + 0xc0) + 4) = *(undefined4 *)(lVar1 + 0x40);
    *(undefined4 *)(*(longlong *)(param_2 + 0xc0) + 0x14) = *(undefined4 *)(lVar1 + 0x50);
    *(undefined4 *)(*(longlong *)(param_2 + 0xc0) + 8) = *(undefined4 *)(lVar1 + 0x44);
    *(undefined4 *)(*(longlong *)(param_2 + 0xc0) + 0x18) = *(undefined4 *)(lVar1 + 0x54);
    *(undefined4 *)(*(longlong *)(param_2 + 0xc0) + 0xc) = *(undefined4 *)(lVar1 + 0x48);
    *(undefined4 *)(*(longlong *)(param_2 + 0xc0) + 0x1c) = *(undefined4 *)(lVar1 + 0x58);
    goto LAB_140485569;
}



void FUN_1404856c0(uint param_1,int param_2,undefined4 *param_3,longlong param_4)

{
    longlong lVar1;
    longlong lVar2;
    uint local_res8 [6];
    longlong local_res20;
    undefined local_18 [16];

    lVar1 = *(longlong *)(param_4 + 8);
    local_res20 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < param_1) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res20 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res20 == lVar1) || (param_1 < *(uint *)(local_res20 + 0x20))) {
        local_res20 = lVar1;
    }
    if (local_res20 == lVar1) {
        local_res8[0] = param_1;
        if (param_3 == (undefined4 *)0x0) {
            FUN_1400035b0(0x25,1,0,param_1,(&PTR_u_UnknownId_140c38950)[param_2]);
        }
        else {
            FUN_1400035b0(0x25,1,0,param_1,(&PTR_u_UnknownId_140c38950)[param_2],*param_3);
        }
        FUN_1400293c0(param_4,local_18,local_res8);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_140485790(longlong *param_1)

{
    longlong lVar1;
    uint uVar2;
    int iVar3;
    undefined4 uVar4;
    uint *puVar5;
    longlong lVar6;
    undefined *puVar7;
    undefined *puVar8;
    longlong lVar9;
    undefined *puVar10;
    uint uVar11;
    ulonglong uVar12;
    uint *puVar13;
    uint uVar14;
    float fVar15;
    longlong local_98;
    longlong local_90;
    undefined local_58 [8];
    undefined *local_50;
    undefined8 local_48;

    local_50 = (undefined *)FUN_14018b280(0x28);
    local_48 = 0;
    *local_50 = 0;
    *(undefined8 *)(local_50 + 8) = 0;
    *(undefined **)(local_50 + 0x10) = local_50;
    *(undefined **)(local_50 + 0x18) = local_50;
    local_90 = 0;
    local_98 = 0;
    if (DAT_140c63838 == (code *)0x0) {
        if (_DAT_140c63ec0 == 0) {
            iVar3 = FUN_1401f6b00();
            if (iVar3 < 0) {
                uVar2 = 0;
            }
            else {
                uVar2 = (**(code **)(*DAT_140c63d10 + 0x28))();
            }
        }
        else {
            uVar2 = 0;
        }
    }
    else {
        uVar2 = (*DAT_140c63838)(&PTR_u_Creature2_140a69c60,DAT_140c63858);
    }
    uVar14 = 0;
    if (uVar2 != 0) {
        fVar15 = 0.0;
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if (_DAT_140c63ec0 == 0) {
                    iVar3 = FUN_1401f6b00();
                    if (iVar3 < 0) {
                        puVar5 = (uint *)0x0;
                    }
                    else {
                        puVar5 = (uint *)(**(code **)(*DAT_140c63d10 + 0x20))(DAT_140c63d10,uVar14);
                    }
                }
                else {
                    puVar5 = (uint *)0x0;
                }
            }
            else {
                puVar5 = (uint *)(*DAT_140c63848)(&PTR_u_Creature2_140a69c60,uVar14,DAT_140c63858);
            }
            lVar1 = local_98;
            lVar6 = local_90;
            if (fVar15 < (float)puVar5[0xe]) {
                if (puVar5[1] < 0x1a) {
                    if (DAT_140c63840 == (code *)0x0) {
                        if ((_DAT_140c64f08 == 0) && (iVar3 = FUN_1401f5e40(), -1 < iVar3)) {
                            lVar6 = (**(code **)(*DAT_140c64260 + 0x18))();
                            goto LAB_1404859f5;
                        }
                    }
                    else {
                        lVar6 = (*DAT_140c63840)(&PTR_u_Creature2ArcheType_140a69bb8,puVar5[8],DAT_140c63858);
                        LAB_1404859f5:
                        if (((lVar6 != 0) && ((puVar5[7] == 0 || (lVar6 = FUN_1401f64e0(), lVar6 != 0)))) &&
                            ((puVar5[0xab] == 0 || (lVar6 = FUN_1401f71a0(), lVar6 != 0)))) {
                            if (puVar5[0xb] == 0) {
                                puVar7 = *(undefined **)(local_50 + 8);
                                puVar10 = local_50;
                                if (*(undefined **)(local_50 + 8) != (undefined *)0x0) {
                                    do {
                                        if (*(uint *)(puVar7 + 0x20) < *puVar5) {
                                            puVar8 = *(undefined **)(puVar7 + 0x18);
                                        }
                                        else {
                                            puVar8 = *(undefined **)(puVar7 + 0x10);
                                            puVar10 = puVar7;
                                        }
                                        puVar7 = puVar8;
                                    } while (puVar8 != (undefined *)0x0);
                                    if ((puVar10 != local_50) &&
                                        (lVar1 = local_98, lVar6 = local_90, *(uint *)(puVar10 + 0x20) <= *puVar5))
                                        goto LAB_140485b64;
                                }
                                FUN_1400035b0(0x25);
                                FUN_1400293c0(local_58);
                                lVar1 = local_98;
                                lVar6 = local_90;
                            }
                            else {
                                uVar12 = 0;
                                puVar13 = puVar5 + 0x5a;
                                do {
                                    if ((*puVar13 != 0) && (lVar6 = FUN_1402096e0(), lVar6 == 0)) {
                                        FUN_1404856c0(*puVar5,8,puVar5 + uVar12 + 0x5a);
                                    }
                                    lVar1 = local_90;
                                    uVar11 = (int)uVar12 + 1;
                                    uVar12 = (ulonglong)uVar11;
                                    puVar13 = puVar13 + 1;
                                } while (uVar11 < 2);
                                lVar6 = local_90 + 1;
                                lVar9 = FUN_14018db00(local_98,lVar6);
                                *(uint **)(lVar9 + lVar1 * 8) = puVar5;
                                lVar1 = local_98;
                                if ((local_98 != lVar9) && (FUN_1407db590(lVar9), lVar1 = lVar9, local_98 != 0)) {
                                    (**(code **)(*(longlong *)(local_98 + -0x10) + 8))(local_98 + -0x10);
                                }
                            }
                            goto LAB_140485b64;
                        }
                    }
                    FUN_1404856c0(*puVar5);
                    lVar1 = local_98;
                    lVar6 = local_90;
                }
                else {
                    puVar7 = *(undefined **)(local_50 + 8);
                    puVar10 = local_50;
                    if (puVar7 != (undefined *)0x0) {
                        do {
                            if (*(uint *)(puVar7 + 0x20) < *puVar5) {
                                puVar8 = *(undefined **)(puVar7 + 0x18);
                            }
                            else {
                                puVar8 = *(undefined **)(puVar7 + 0x10);
                                puVar10 = puVar7;
                            }
                            puVar7 = puVar8;
                        } while (puVar8 != (undefined *)0x0);
                        if ((puVar10 != local_50) && (*(uint *)(puVar10 + 0x20) <= *puVar5)) goto LAB_140485b64;
                    }
                    FUN_1400035b0(0x25);
                    FUN_1400293c0();
                    lVar1 = local_98;
                    lVar6 = local_90;
                }
            }
            else {
                puVar7 = *(undefined **)(local_50 + 8);
                puVar10 = local_50;
                if (*(undefined **)(local_50 + 8) != (undefined *)0x0) {
                    do {
                        if (*(uint *)(puVar7 + 0x20) < *puVar5) {
                            puVar8 = *(undefined **)(puVar7 + 0x18);
                        }
                        else {
                            puVar8 = *(undefined **)(puVar7 + 0x10);
                            puVar10 = puVar7;
                        }
                        puVar7 = puVar8;
                    } while (puVar8 != (undefined *)0x0);
                    if ((puVar10 != local_50) && (*(uint *)(puVar10 + 0x20) <= *puVar5)) goto LAB_140485b64;
                }
                FUN_1400035b0(0x25);
                FUN_1400293c0();
                lVar1 = local_98;
                lVar6 = local_90;
            }
            LAB_140485b64:
            local_90 = lVar6;
            local_98 = lVar1;
            uVar14 = uVar14 + 1;
        } while (uVar14 < uVar2);
    }
    uVar4 = (**(code **)(*param_1 + 8))(param_1,&local_98);
    if (local_98 != 0) {
        (**(code **)(*(longlong *)(local_98 + -0x10) + 8))(local_98 + -0x10);
    }
    FUN_140008410(local_58);
    FUN_14018b900(local_50,0);
    return uVar4;
}



undefined8 FUN_140485bf0(undefined8 param_1,ulonglong param_2)

{
    FUN_140485c30();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_140485c30(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_140b67198;
    if ((longlong *)param_1[5] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[5] + 8))();
        param_1[5] = 0;
    }
    if ((longlong *)param_1[6] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[6] + 8))();
        param_1[6] = 0;
    }
    if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[3] = param_1[4];
    }
    if (param_1[4] != 0) {
        *(undefined8 *)(param_1[4] + 0x18) = param_1[3];
    }
    param_1[3] = 0;
    param_1[4] = 0;
    if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[1] = param_1[2];
    }
    if (param_1[2] != 0) {
        *(undefined8 *)(param_1[2] + 8) = param_1[1];
    }
    param_1[2] = 0;
    param_1[1] = 0;
    return;
}



undefined8 FUN_140485cd0(longlong param_1,undefined4 *param_2)

{
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
    undefined4 local_28;
    undefined4 uStack36;
    undefined4 uStack32;
    undefined4 uStack28;
    undefined8 local_18;

    local_58 = *param_2;
    uStack84 = param_2[1];
    uStack80 = param_2[2];
    uStack76 = param_2[3];
    local_48 = param_2[4];
    uStack68 = param_2[5];
    uStack64 = param_2[6];
    uStack60 = param_2[7];
    local_18 = 0;
    local_38 = param_2[8];
    uStack52 = param_2[9];
    uStack48 = param_2[10];
    uStack44 = param_2[0xb];
    local_28 = param_2[0xc];
    uStack36 = param_2[0xd];
    uStack32 = param_2[0xe];
    uStack28 = param_2[0xf];
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x140))(*(longlong **)(param_1 + 0x30),&local_58);
    return 0;
}



undefined8 FUN_140485d20(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
    int iVar1;
    undefined8 uVar2;
    undefined8 local_78;
    undefined4 local_70;
    undefined8 local_6c;
    undefined8 local_64;
    undefined4 local_5c;
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
    undefined4 local_28;
    undefined4 uStack36;
    undefined4 uStack32;
    undefined4 uStack28;
    undefined8 local_18;

    iVar1 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x7250) + 0x28))
            (*(longlong **)(DAT_140c65898 + 0x7250),param_2,param_1 + 0x28,0);
    if (iVar1 < 0) {
        uVar2 = 0x80004005;
    }
    else {
        local_78 = 0x96;
        local_70 = 0x3f800000;
        local_6c = 0;
        local_64 = 0;
        local_5c = 0;
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x248))
                (*(longlong **)(param_1 + 0x28),0,&local_78);
        local_58 = *param_3;
        uStack84 = param_3[1];
        uStack80 = param_3[2];
        uStack76 = param_3[3];
        local_48 = param_3[4];
        uStack68 = param_3[5];
        uStack64 = param_3[6];
        uStack60 = param_3[7];
        local_38 = param_3[8];
        uStack52 = param_3[9];
        uStack48 = param_3[10];
        uStack44 = param_3[0xb];
        local_18 = 0;
        local_28 = param_3[0xc];
        uStack36 = param_3[0xd];
        uStack32 = param_3[0xe];
        uStack28 = param_3[0xf];
        iVar1 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x7248) + 0xb8))
                (*(longlong **)(DAT_140c65898 + 0x7248),0,&local_58,
                 *(undefined8 *)(param_1 + 0x28),1,0,param_1 + 0x30,0);
        if (iVar1 < 0) {
            if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(param_1 + 0x28) + 8))();
                *(undefined8 *)(param_1 + 0x28) = 0;
            }
            uVar2 = 0x80004005;
        }
        else {
            uVar2 = 0;
        }
    }
    return uVar2;
}



ulonglong FUN_140485e90(longlong param_1)

{
    longlong lVar1;
    int iVar2;
    ulonglong uVar3;
    undefined4 extraout_XMM0_Da;
    float local_28;
    float fStack36;
    undefined local_18 [16];

    if (*(undefined4 **)(param_1 + 0x68) != (undefined4 *)0x0) {
        if (*(int *)(param_1 + 0x70) != 0) {
            iVar2 = FUN_14043e6d0(DAT_140c65898,*(int *)(param_1 + 0x70),**(undefined4 **)(param_1 + 0x68)
                    ,local_18);
            if (iVar2 != 0) {
                uVar3 = FUN_1404860d0(extraout_XMM0_Da,*(undefined4 *)(*(longlong *)(param_1 + 0x68) + 4),
                                      *(undefined4 *)(*(longlong *)(param_1 + 0x68) + 8),local_18);
                return uVar3;
            }
        }
        lVar1 = *(longlong *)(param_1 + 0x68);
        if ((*(float *)(lVar1 + 8) <= 0.0) ||
            (fStack36 = SUB164(ZEXT1216(*(undefined (*) [12])(lVar1 + 0xc)) >> 0x20,0),
                    (float)((uint)(*(float *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x11e4) - fStack36) &
                            0x7fffffff) <= *(float *)(lVar1 + 8))) {
            local_28 = SUB124(*(undefined (*) [12])(lVar1 + 0xc),0);
            local_28 = local_28 - *(float *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x11e0);
            return (ulonglong)
                    (local_28 * local_28 + 0.0 + 0.0 <= *(float *)(lVar1 + 4) * *(float *)(lVar1 + 4));
        }
    }
    return 0;
}



ulonglong FUN_140485fa0(undefined4 param_1,int param_2)

{
    int iVar1;
    longlong lVar2;
    ulonglong uVar3;
    undefined4 extraout_XMM0_Da;
    float local_28;
    float fStack36;
    undefined local_18 [16];

    lVar2 = FUN_14024b980();
    if (lVar2 != 0) {
        if (param_2 != 0) {
            iVar1 = FUN_14043e6d0(DAT_140c65898,param_2,param_1,local_18);
            if (iVar1 != 0) {
                uVar3 = FUN_1404860d0(extraout_XMM0_Da,*(undefined4 *)(lVar2 + 4),*(undefined4 *)(lVar2 + 8)
                        ,local_18);
                return uVar3;
            }
        }
        if ((*(float *)(lVar2 + 8) <= 0.0) ||
            (fStack36 = SUB164(ZEXT1216(*(undefined (*) [12])(lVar2 + 0xc)) >> 0x20,0),
                    (float)((uint)(*(float *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x11e4) - fStack36) &
                            0x7fffffff) <= *(float *)(lVar2 + 8))) {
            local_28 = SUB124(*(undefined (*) [12])(lVar2 + 0xc),0);
            local_28 = local_28 - *(float *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x11e0);
            return (ulonglong)
                    (local_28 * local_28 + 0.0 + 0.0 <= *(float *)(lVar2 + 4) * *(float *)(lVar2 + 4));
        }
    }
    return 0;
}



bool FUN_1404860d0(undefined8 param_1,float param_2,float param_3,float *param_4)

{
    float fVar1;

    if ((0.0 < param_3) &&
        (param_3 < (float)((uint)(*(float *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x11e4) - param_4[1]
        ) & 0x7fffffff))) {
        return false;
    }
    fVar1 = *param_4 - *(float *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x11e0);
    return fVar1 * fVar1 + 0.0 + 0.0 <= param_2 * param_2;
}



undefined8 FUN_140486160(longlong param_1)

{
    undefined8 local_28;
    undefined4 local_20;
    undefined8 local_1c;
    undefined8 local_14;
    undefined4 local_c;

    if (*(int *)(param_1 + 0x60) != 0) {
        return 1;
    }
    if ((*(longlong *)(param_1 + 0x50) != 0) || (*(longlong *)(param_1 + 0x58) != 0)) {
        (**(code **)(param_1 + 0x58))(*(longlong *)(param_1 + 0x50),param_1,1);
    }
    *(undefined4 *)(param_1 + 0x60) = 1;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    local_20 = 0x3f800000;
    local_28 = 0xa5;
    local_1c = 0;
    local_14 = 0;
    local_c = 0;
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x248))(*(longlong **)(param_1 + 0x28),0,&local_28)
            ;
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HintArrowDistanceUpdate",&DAT_1409e9e64,
                  0xbff0000000000000);
    return 0;
}



undefined8 FUN_140486220(longlong param_1)

{
    int iVar1;

    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x268))(*(longlong **)(param_1 + 0x28),0);
    if ((*(longlong *)(param_1 + 0x50) != 0) || (*(longlong *)(param_1 + 0x58) != 0)) {
        (**(code **)(param_1 + 0x58))(*(longlong *)(param_1 + 0x50),param_1,iVar1);
    }
    if (iVar1 != 0) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HintArrowDistanceUpdate",&DAT_1409e9e64,
                      0xbff0000000000000);
        return 0x80004005;
    }
    return 0;
}



undefined8 FUN_1404862b0(longlong param_1)

{
    int iVar1;
    undefined8 uVar2;
    undefined local_18 [16];

    if (*(undefined4 **)(param_1 + 0x68) == (undefined4 *)0x0) {
        return 0x80004005;
    }
    if ((*(int *)(param_1 + 0x70) == 0) ||
        (iVar1 = FUN_14043e6d0(DAT_140c65898,*(int *)(param_1 + 0x70),**(undefined4 **)(param_1 + 0x68)
                ,local_18), iVar1 == 0)) {
        local_18 = ZEXT1216(*(undefined (*) [12])(*(longlong *)(param_1 + 0x68) + 0xc));
    }
    if (*(longlong *)(DAT_140c65898 + 0x6490) == 0) {
        return 0x80004005;
    }
    uVar2 = FUN_140486340(param_1,local_18);
    return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140486340(longlong *param_1,float *param_2,undefined8 param_3,undefined8 param_4)

{
    longlong lVar1;
    int iVar2;
    undefined8 uVar3;
    undefined auVar4 [16];
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
    undefined8 local_88;
    float fStack128;
    float fStack124;
    undefined8 local_78;
    float fStack112;
    undefined4 uStack108;
    float local_68;
    float fStack100;
    float fStack96;
    float fStack92;
    undefined8 local_58;
    float fStack80;
    undefined4 uStack76;

    lVar1 = *(longlong *)(DAT_140c65898 + 0x6490);
    uStack108 = uRam0000000140c783ac;
    fVar13 = *(float *)(lVar1 + 0x11e0) + 0.0;
    fVar14 = *(float *)(lVar1 + 0x11e4) + 1.2;
    fStack80 = *(float *)(lVar1 + 0x11e8) + 0.0;
    fVar9 = *param_2 - fVar13;
    fVar10 = param_2[1] - fVar14;
    fVar11 = param_2[2] - fStack80;
    fVar12 = param_2[3] - (*(float *)(lVar1 + 0x11ec) + 0.0);
    uStack76 = uRam0000000140c783cc;
    fStack124 = fRam0000000140c7839c;
    fStack92 = fRam0000000140c783bc;
    fVar5 = fVar10 * fVar10;
    fVar6 = fVar9 * fVar9 + fVar5 + fVar11 * fVar11;
    auVar4 = rsqrtss(CONCAT412(fVar5,CONCAT48(fVar5,CONCAT44(fVar5,fVar5))),
                     CONCAT412(fVar12 * fVar12,CONCAT48(fVar11 * fVar11,CONCAT44(fVar5,fVar6))));
    fStack96 = SUB164(auVar4,0);
    fStack96 = (3.0 - fVar6 * fStack96 * fStack96) * 0.5 * fStack96;
    if (fStack96 <= 0.0) {
        fStack96 = 0.0;
    }
    local_68 = fStack96 * fVar9;
    fStack100 = fStack96 * fVar10;
    fStack96 = fStack96 * fVar11;
    if ((1e-05 < (float)((uint)local_68 & 0x7fffffff)) ||
        (1e-05 < (float)((uint)fStack96 & 0x7fffffff))) {
        fVar5 = fStack96 * fRam0000000140c77874 - fStack100 * fRam0000000140c77878;
        fVar11 = local_68 * 0.0 - fStack96 * _DAT_140c77870;
        fVar7 = fStack100 * _DAT_140c77870 - local_68 * fRam0000000140c77874;
        fVar8 = fRam0000000140c783bc * fRam0000000140c7787c -
                fRam0000000140c783bc * fRam0000000140c7787c;
        fVar6 = fVar11 * fVar11;
        fVar12 = fVar5 * fVar5 + fVar6 + fVar7 * fVar7;
        auVar4 = rsqrtss(CONCAT412(fVar6,CONCAT48(fVar6,CONCAT44(fVar6,fVar6))),
                         CONCAT412(fVar8 * fVar8,CONCAT48(fVar7 * fVar7,CONCAT44(fVar6,fVar12))));
        fStack128 = SUB164(auVar4,0);
        fStack128 = (3.0 - fVar12 * fStack128 * fStack128) * 0.5 * fStack128;
        if (fStack128 <= 0.0) {
            fStack128 = 0.0;
        }
        fVar5 = fStack128 * fVar5;
        fVar11 = fStack128 * fVar11;
        local_88 = CONCAT44(fVar11,fVar5);
        fStack128 = fStack128 * fVar7;
        fVar12 = fStack128 * fStack100 - fVar11 * fStack96;
        fVar7 = fVar5 * fStack96 - fStack128 * local_68;
        fVar11 = fVar11 * local_68 - fVar5 * fStack100;
        fVar8 = fRam0000000140c7839c * fRam0000000140c783bc -
                fRam0000000140c7839c * fRam0000000140c783bc;
        fVar5 = fVar7 * fVar7;
        fVar6 = fVar12 * fVar12 + fVar5 + fVar11 * fVar11;
        auVar4 = rsqrtss(CONCAT412(fVar5,CONCAT48(fVar5,CONCAT44(fVar5,fVar5))),
                         CONCAT412(fVar8 * fVar8,CONCAT48(fVar11 * fVar11,CONCAT44(fVar5,fVar6))));
        fStack112 = SUB164(auVar4,0);
        fStack112 = (3.0 - fVar6 * fStack112 * fStack112) * 0.5 * fStack112;
        if (fStack112 <= 0.0) {
            fStack112 = 0.0;
        }
        local_78 = CONCAT44(fStack112 * fVar7,fStack112 * fVar12);
        fStack112 = fStack112 * fVar11;
    }
    else {
        local_78 = 0x3f800000;
        fStack112 = 0.0;
        local_88 = CONCAT44(local_68 * 0.0 - fStack96 * 1.0,fStack96 * 0.0 - fStack100 * 0.0);
        fStack128 = fStack100 * 1.0 - local_68 * 0.0;
    }
    local_58 = CONCAT44(fStack100 + fVar14,local_68 + fVar13);
    fStack80 = fStack96 + fStack80;
    uVar3 = (**(code **)(*param_1 + 0x18))(param_1,&local_88,lVar1,param_4,local_68);
    if (-1 < (int)uVar3) {
        iVar2 = DAT_140c49e10;
        if (*DAT_140c63750 < DAT_140c49e10) {
            iVar2 = *DAT_140c63750;
        }
        if ((&DAT_140c49e20)[iVar2] != '\0') {
            fVar5 = SQRT(fVar9 * fVar9 + fVar10 * fVar10 + 0.0);
            if (param_1[0xd] != 0) {
                fVar6 = fVar5 - *(float *)(param_1[0xd] + 4);
                fVar5 = 0.0;
                if (0.0 <= fVar6) {
                    fVar5 = fVar6;
                }
            }
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HintArrowDistanceUpdate",&DAT_1409e9e64
                    ,(double)fVar5);
        }
        uVar3 = 0;
    }
    return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1404866d0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
    undefined (*pauVar1) [12];
    longlong lVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    int iVar9;
    undefined8 uVar10;
    undefined4 *puVar11;
    longlong lVar12;
    undefined auVar13 [16];
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    undefined local_78 [16];
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
    undefined local_38 [16];

    iVar9 = FUN_140633cb0(param_1,param_3,param_1 + 0x68);
    lVar12 = DAT_140c65898;
    if ((iVar9 < 0) || (*(longlong *)(DAT_140c65898 + 0x6490) == 0)) {
        uVar10 = 0x80004005;
    }
    else {
        *(undefined4 *)(param_1 + 0x38) = *param_4;
        fVar19 = 0.0;
        *(undefined4 *)(param_1 + 0x3c) = param_4[1];
        pauVar1 = (undefined (*) [12])(param_1 + 0x80);
        *(undefined4 *)(param_1 + 0x40) = param_4[2];
        lVar2 = *(longlong *)(lVar12 + 0x6490);
        uVar6 = *(undefined4 *)(lVar2 + 0x11e4);
        uVar7 = *(undefined4 *)(lVar2 + 0x11e8);
        uVar8 = *(undefined4 *)(lVar2 + 0x11ec);
        *(undefined4 *)*pauVar1 = *(undefined4 *)(lVar2 + 0x11e0);
        *(undefined4 *)(param_1 + 0x84) = uVar6;
        *(undefined4 *)(param_1 + 0x88) = uVar7;
        *(undefined4 *)(param_1 + 0x8c) = uVar8;
        lVar12 = *(longlong *)(lVar12 + 0x6490);
        fVar14 = *(float *)(lVar12 + 0x1140);
        fVar15 = *(float *)(lVar12 + 0x1144);
        fVar3 = *(float *)(lVar12 + 0x1148);
        fVar4 = *(float *)(lVar12 + 0x114c);
        fVar16 = fVar15 * fVar15;
        fVar17 = fVar14 * fVar14 + fVar16 + 0.0;
        local_78 = ZEXT816(0);
        auVar13 = rsqrtss(CONCAT412(fVar16,CONCAT48(fVar16,CONCAT44(fVar16,fVar16))),
                          CONCAT412(fVar4 * fVar4,CONCAT48(fVar3 * fVar3,CONCAT44(fVar16,fVar17))));
        fVar18 = SUB164(auVar13,0);
        fVar18 = (3.0 - fVar17 * fVar18 * fVar18) * 0.5 * fVar18;
        fVar16 = *(float *)(param_1 + 0x84);
        fVar17 = *(float *)(param_1 + 0x88);
        fVar5 = *(float *)(param_1 + 0x8c);
        if (fVar18 <= 0.0) {
            fVar18 = 0.0;
        }
        *(float *)*pauVar1 = *(float *)*pauVar1 + fVar18 * fVar14;
        *(float *)(param_1 + 0x84) = fVar16 + fVar18 * fVar15;
        *(float *)(param_1 + 0x88) = fVar17 + fVar18 * fVar3;
        *(float *)(param_1 + 0x8c) = fVar5 + fVar18 * fVar4;
        *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x84) + 2.0;
        lVar12 = **(longlong **)(param_1 + 0x68);
        iVar9 = (**(code **)(lVar12 + 0x98))
                (*(longlong **)(param_1 + 0x68),pauVar1,param_1 + 0x90,lVar12,param_1 + 0xa0,0
                        ,local_78,0xbf800000);
        if (iVar9 < 0) {
            puVar11 = (undefined4 *)
                    (**(code **)(**(longlong **)(param_1 + 0x68) + 0x28))
                    (*(longlong **)(param_1 + 0x68),1);
            uVar6 = puVar11[1];
            uVar7 = puVar11[2];
            uVar8 = puVar11[3];
            *(undefined4 *)*pauVar1 = *puVar11;
            *(undefined4 *)(param_1 + 0x84) = uVar6;
            *(undefined4 *)(param_1 + 0x88) = uVar7;
            *(undefined4 *)(param_1 + 0x8c) = uVar8;
            *(undefined4 *)(param_1 + 100) = 1;
        }
        else {
            fVar14 = *(float *)(param_1 + 0x90) - *(float *)*pauVar1;
            fVar15 = *(float *)(param_1 + 0x94) - *(float *)(param_1 + 0x84);
            fVar14 = SQRT(fVar14 * fVar14 + fVar15 * fVar15 + 0.0);
            if (fVar14 != fVar19) {
                lVar12 = FUN_140200220(0x1d9);
                if (lVar12 != 0) {
                    fVar19 = *(float *)(lVar12 + 0x1c);
                }
                *(float *)(param_1 + 0xa8) = fVar19 / fVar14;
            }
        }
        local_68 = _DAT_140c78410;
        uStack100 = uRam0000000140c78414;
        uStack96 = uRam0000000140c78418;
        uStack92 = uRam0000000140c7841c;
        local_58 = _DAT_140c78420;
        uStack84 = uRam0000000140c78424;
        uStack80 = uRam0000000140c78428;
        uStack76 = uRam0000000140c7842c;
        local_48 = _DAT_140c78430;
        uStack68 = uRam0000000140c78434;
        uStack64 = uRam0000000140c78438;
        uStack60 = uRam0000000140c7843c;
        local_38 = CONCAT412(0x3f800000,*pauVar1);
        uVar10 = FUN_140485d20(param_1,L"Art\\FX\\Model\\Cast\\Generic_Power_YLW\\Generic_Power_YLW.m3",
                               &local_68);
    }
    return uVar10;
}



undefined8 FUN_140486920(longlong param_1)

{
    undefined8 local_28;
    undefined4 local_20;
    undefined8 local_1c;
    undefined8 local_14;
    undefined4 local_c;

    if (*(int *)(param_1 + 0x60) != 0) {
        return 1;
    }
    if ((*(longlong *)(param_1 + 0x50) != 0) || (*(longlong *)(param_1 + 0x58) != 0)) {
        (**(code **)(param_1 + 0x58))(*(longlong *)(param_1 + 0x50),param_1,1);
    }
    *(undefined4 *)(param_1 + 0x60) = 1;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    local_20 = 0x3f800000;
    local_28 = 0xa5;
    local_1c = 0;
    local_14 = 0;
    local_c = 0;
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x248))(*(longlong **)(param_1 + 0x28),0,&local_28)
            ;
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"SplineHintObjectEnd","");
    return 0;
}



undefined8 * FUN_140486bd0(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_FUN_140b67170;
    FUN_140485c30();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140486c10(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
    int iVar1;
    longlong lVar2;
    undefined8 uVar3;
    undefined4 local_48;
    undefined4 uStack68;
    undefined4 uStack64;
    undefined4 uStack60;
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 uStack44;
    undefined4 local_28;
    undefined4 uStack36;
    undefined4 uStack32;
    undefined4 uStack28;
    undefined local_18 [16];

    iVar1 = FUN_1403f8270(DAT_140c65898,param_3[2],0);
    if (iVar1 != 0) {
        lVar2 = FUN_14024b980(param_3[2]);
        if (lVar2 != 0) {
            *(undefined4 *)(param_1 + 0x38) = *param_3;
            *(undefined4 *)(param_1 + 0x3c) = param_3[1];
            *(undefined4 *)(param_1 + 0x40) = param_3[2];
            local_38 = _DAT_140c78420;
            uStack52 = uRam0000000140c78424;
            uStack48 = uRam0000000140c78428;
            uStack44 = uRam0000000140c7842c;
            local_48 = _DAT_140c78410;
            uStack68 = uRam0000000140c78414;
            uStack64 = uRam0000000140c78418;
            uStack60 = uRam0000000140c7841c;
            local_28 = _DAT_140c78430;
            uStack36 = uRam0000000140c78434;
            uStack32 = uRam0000000140c78438;
            uStack28 = uRam0000000140c7843c;
            local_18 = CONCAT412(0x3f800000,ZEXT812(*(ulonglong *)(lVar2 + 0xc)));
            uVar3 = FUN_140485d20(param_1,param_2,&local_48);
            return uVar3;
        }
    }
    return 0x80004005;
}



undefined8 FUN_140486d00(longlong param_1)

{
    undefined8 local_28;
    undefined4 local_20;
    undefined8 local_1c;
    undefined8 local_14;
    undefined4 local_c;

    if (*(int *)(param_1 + 0x60) != 0) {
        return 1;
    }
    if ((*(longlong *)(param_1 + 0x50) != 0) || (*(longlong *)(param_1 + 0x58) != 0)) {
        (**(code **)(param_1 + 0x58))(*(longlong *)(param_1 + 0x50),param_1,1);
    }
    *(undefined4 *)(param_1 + 0x60) = 1;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    local_20 = 0x3f800000;
    local_28 = 0xa5;
    local_1c = 0;
    local_14 = 0;
    local_c = 0;
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x248))(*(longlong **)(param_1 + 0x28),0,&local_28)
            ;
    return 0;
}



uint FUN_140486d90(longlong param_1)

{
    int iVar1;

    if (*(int *)(param_1 + 0x60) != 0) {
        iVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x268))(*(longlong **)(param_1 + 0x28),0)
                ;
        return -(uint)(iVar1 != 0) & 0x80004005;
    }
    return 0;
}



undefined8
FUN_140486dc0(longlong param_1,undefined8 param_2,undefined4 *param_3,longlong *param_4,int param_5,
              undefined4 param_6)

{
    longlong *plVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 uVar5;
    undefined8 *puVar6;

    puVar4 = (undefined8 *)FUN_14018b280();
    puVar6 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[4] = 0;
        puVar4[7] = 10;
        *(undefined4 *)(puVar4 + 8) = 0;
        puVar4[5] = 0;
        puVar4[6] = 0;
        puVar4[9] = DAT_140c59420;
        DAT_140c59420 = DAT_140c59420 + 1;
        *puVar4 = &PTR_LAB_140b671c0;
        puVar4[0xb] = 0;
        puVar4[10] = 0;
        *(undefined4 *)(puVar4 + 0xc) = 0;
        puVar4[0xd] = 0;
        *(undefined4 *)(puVar4 + 0xe) = 0;
        puVar6 = puVar4;
    }
    *(undefined4 *)(puVar6 + 7) = *param_3;
    *(undefined4 *)((longlong)puVar6 + 0x3c) = param_3[1];
    *(undefined4 *)(puVar6 + 8) = param_3[2];
    if (param_5 != 0) {
        uVar5 = FUN_14024b980();
        puVar6[0xd] = uVar5;
        *(undefined4 *)(puVar6 + 0xe) = param_6;
    }
    FUN_140485d20(puVar6,param_2,&DAT_140c78390);
    lVar3 = *param_4;
    if (*(int *)(puVar6 + 0xc) == 0) {
        puVar6[0xb] = param_4[1];
        puVar6[10] = lVar3;
    }
    plVar1 = (longlong *)(param_1 + 8);
    if (puVar6[3] == 0) {
        puVar6[3] = plVar1;
        plVar2 = puVar6 + 4;
        *plVar2 = *plVar1;
        *plVar1 = (longlong)puVar6;
        if (*plVar2 != 0) {
            *(longlong **)(*plVar2 + 0x18) = plVar2;
        }
    }
    if ((*param_4 != 0) || (param_4[1] != 0)) {
        (*(code *)param_4[1])(*param_4,puVar6,0);
    }
    return puVar6[9];
}



undefined8
FUN_140486f10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
              undefined8 *param_5)

{
    longlong *plVar1;
    longlong *plVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;

    puVar4 = (undefined8 *)FUN_14018b280(0x78);
    puVar5 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[4] = 0;
        puVar4[7] = 10;
        *(undefined4 *)(puVar4 + 8) = 0;
        puVar4[5] = 0;
        puVar4[6] = 0;
        puVar4[9] = DAT_140c59420;
        DAT_140c59420 = DAT_140c59420 + 1;
        *puVar4 = &PTR_LAB_140b671c0;
        puVar4[0xb] = 0;
        puVar4[10] = 0;
        *(undefined4 *)(puVar4 + 0xc) = 0;
        puVar4[0xd] = 0;
        *(undefined4 *)(puVar4 + 0xe) = 0;
        puVar5 = puVar4;
    }
    *(undefined4 *)(puVar5 + 7) = *param_4;
    *(undefined4 *)((longlong)puVar5 + 0x3c) = param_4[1];
    *(undefined4 *)(puVar5 + 8) = param_4[2];
    FUN_140485d20(puVar5,param_2,param_3);
    uVar3 = *param_5;
    if (*(int *)(puVar5 + 0xc) == 0) {
        puVar5[0xb] = param_5[1];
        puVar5[10] = uVar3;
    }
    plVar1 = (longlong *)(param_1 + 8);
    if (puVar5[3] == 0) {
        puVar5[3] = plVar1;
        plVar2 = puVar5 + 4;
        *plVar2 = *plVar1;
        *plVar1 = (longlong)puVar5;
        if (*plVar2 != 0) {
            *(longlong **)(*plVar2 + 0x18) = plVar2;
        }
    }
    return puVar5[9];
}



undefined8 FUN_140487030(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
    longlong *plVar1;
    longlong *plVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;

    puVar4 = (undefined8 *)FUN_14018b280(0xb0,0);
    puVar5 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[4] = 0;
        puVar4[7] = 10;
        *(undefined4 *)(puVar4 + 8) = 0;
        puVar4[5] = 0;
        puVar4[6] = 0;
        puVar4[9] = DAT_140c59420;
        DAT_140c59420 = DAT_140c59420 + 1;
        *puVar4 = &PTR_LAB_140b67148;
        puVar4[0xb] = 0;
        puVar4[10] = 0;
        puVar4[0xc] = 0;
        puVar4[0xd] = 0;
        *(undefined (*) [16])(puVar4 + 0xe) = ZEXT816(0);
        *(undefined (*) [16])(puVar4 + 0x10) = ZEXT816(0);
        *(undefined (*) [16])(puVar4 + 0x12) = ZEXT816(0);
        puVar4[0x14] = 0;
        *(undefined4 *)(puVar4 + 0x15) = 0;
        puVar5 = puVar4;
    }
    FUN_1404866d0(puVar5);
    uVar3 = *param_4;
    if (*(int *)(puVar5 + 0xc) == 0) {
        puVar5[0xb] = param_4[1];
        puVar5[10] = uVar3;
    }
    plVar1 = (longlong *)(param_1 + 8);
    if (puVar5[3] == 0) {
        puVar5[3] = plVar1;
        plVar2 = puVar5 + 4;
        *plVar2 = *plVar1;
        *plVar1 = (longlong)puVar5;
        if (*plVar2 != 0) {
            *(longlong **)(*plVar2 + 0x18) = plVar2;
        }
    }
    return puVar5[9];
}



undefined8
FUN_140487160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
    longlong *plVar1;
    longlong *plVar2;
    int *piVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;

    piVar3 = DAT_140c65920;
    if (*DAT_140c65920 == 0) {
        uVar4 = 0;
    }
    else {
        puVar5 = (undefined8 *)FUN_14018b280();
        puVar6 = (undefined8 *)0x0;
        if (puVar5 != (undefined8 *)0x0) {
            puVar5[1] = 0;
            puVar5[2] = 0;
            puVar5[3] = 0;
            puVar5[4] = 0;
            puVar5[7] = 10;
            *(undefined4 *)(puVar5 + 8) = 0;
            puVar5[5] = 0;
            puVar5[6] = 0;
            puVar5[9] = DAT_140c59420;
            DAT_140c59420 = DAT_140c59420 + 1;
            *puVar5 = &PTR_FUN_140b67170;
            puVar5[0xb] = 0;
            puVar5[10] = 0;
            *(undefined4 *)(puVar5 + 0xc) = 0;
            puVar6 = puVar5;
        }
        FUN_140486c10(puVar6,param_2,param_3);
        uVar4 = *param_4;
        if (*(int *)(puVar6 + 0xc) == 0) {
            puVar6[0xb] = param_4[1];
            puVar6[10] = uVar4;
        }
        plVar1 = (longlong *)(piVar3 + 2);
        if (puVar6[3] == 0) {
            puVar6[3] = plVar1;
            plVar2 = puVar6 + 4;
            *plVar2 = *plVar1;
            *plVar1 = (longlong)puVar6;
            if (*plVar2 != 0) {
                *(longlong **)(*plVar2 + 0x18) = plVar2;
            }
        }
        uVar4 = puVar6[9];
    }
    return uVar4;
}



undefined8 FUN_140487270(undefined8 param_1,undefined4 param_2)

{
    longlong **pplVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    longlong *plVar5;
    longlong *plVar6;
    undefined8 extraout_XMM0_Qa;
    longlong *local_res8;

    lVar3 = DAT_140c65920;
    plVar5 = (longlong *)0x0;
    plVar6 = *(longlong **)(DAT_140c65920 + 8);
    local_res8 = (longlong *)0x0;
    if (plVar6 != (longlong *)0x0) {
        do {
            if (plVar6[1] == 0) {
                pplVar1 = (longlong **)(plVar6 + 2);
                plVar6[1] = (longlong)&local_res8;
                *pplVar1 = local_res8;
                plVar5 = plVar6;
                local_res8 = plVar6;
                if (*pplVar1 != (longlong *)0x0) {
                    (*pplVar1)[1] = (longlong)pplVar1;
                }
            }
            plVar6 = (longlong *)plVar6[4];
        } while (plVar6 != (longlong *)0x0);
        joined_r0x0001404872e4:
        if (plVar5 != (longlong *)0x0) {
            if ((longlong *)plVar5[1] != (longlong *)0x0) {
                *(longlong *)plVar5[1] = plVar5[2];
            }
            if (plVar5[2] != 0) {
                *(longlong *)(plVar5[2] + 8) = plVar5[1];
            }
            lVar2 = plVar5[9];
            plVar5[1] = 0;
            plVar5[2] = 0;
            iVar4 = (**(code **)(*plVar5 + 0x10))(param_1,param_2);
            plVar5 = local_res8;
            param_1 = extraout_XMM0_Qa;
            if (iVar4 < 0) {
                for (plVar6 = *(longlong **)(lVar3 + 8); plVar6 != (longlong *)0x0;
                     plVar6 = (longlong *)plVar6[4]) {
                    if (plVar6[9] == lVar2) {
                        (**(code **)(*plVar6 + 8))(plVar6);
                        param_1 = (**(code **)*plVar6)(plVar6,1);
                        plVar5 = local_res8;
                        break;
                    }
                }
            }
            goto joined_r0x0001404872e4;
        }
    }
    return 0;
}



bool FUN_140487390(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 8);
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
    return local_res8 != lVar1;
}



undefined8 FUN_1404873e0(void)

{
    int iVar1;
    longlong lVar2;
    undefined *puVar3;

    if (DAT_140c65928 != 0) {
        return 0;
    }
    lVar2 = FUN_14018b280(0x20);
    if (lVar2 == 0) {
        DAT_140c65928 = 0;
    }
    else {
        puVar3 = (undefined *)FUN_14018b280(0x30);
        *(undefined8 *)(lVar2 + 0x10) = 0;
        DAT_140c65928 = lVar2;
        *(undefined **)(lVar2 + 8) = puVar3;
        *puVar3 = 0;
        *(undefined8 *)(*(longlong *)(lVar2 + 8) + 8) = 0;
        *(longlong *)(*(longlong *)(lVar2 + 8) + 0x10) = *(longlong *)(lVar2 + 8);
        *(longlong *)(*(longlong *)(lVar2 + 8) + 0x18) = *(longlong *)(lVar2 + 8);
    }
    iVar1 = FUN_140487570();
    lVar2 = DAT_140c65928;
    if (iVar1 < 0) {
        if (DAT_140c65928 != 0) {
            FUN_1404874b0(DAT_140c65928);
            FUN_14018b900(lVar2,0);
        }
        DAT_140c65928 = 0;
        return 0x80004005;
    }
    return 0;
}



void FUN_1404874b0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
    if (lVar3 != *(longlong *)(param_1 + 8)) {
        do {
            lVar2 = *(longlong *)(lVar3 + 0x28);
            if (lVar2 != 0) {
                FUN_140487db0(lVar2);
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
        } while (lVar3 != *(longlong *)(param_1 + 8));
    }
    FUN_140008410(param_1);
    FUN_140008410(param_1);
    FUN_14018b900(*(undefined8 *)(param_1 + 8),0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140487570(longlong param_1)

{
    longlong lVar1;
    uint uVar2;
    int iVar3;
    undefined8 *puVar4;
    longlong lVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong lVar8;
    longlong lVar9;
    undefined8 *puVar10;
    undefined8 *puVar11;
    longlong local_res8;
    longlong local_res10;
    undefined4 local_28 [2];
    undefined8 local_20;

    lVar1 = DAT_140c65928;
    local_res8 = param_1;
    puVar4 = (undefined8 *)FUN_14018b280(0x18);
    puVar11 = (undefined8 *)0x0;
    puVar10 = puVar11;
    if (puVar4 != (undefined8 *)0x0) {
        puVar4[2] = 0;
        puVar4[1] = 0;
        *puVar4 = 0;
        puVar10 = puVar4;
    }
    lVar5 = *(longlong *)(lVar1 + 8);
    lVar7 = lVar5;
    for (lVar8 = *(longlong *)(lVar5 + 8); lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x10)) {
        lVar7 = lVar8;
    }
    if ((lVar7 == lVar5) || (*(int *)(lVar7 + 0x20) != 0)) {
        local_28[0] = 0;
        local_20 = 0;
        local_res8 = lVar7;
        FUN_140055c60(lVar1,&local_res10,&local_res8,local_28);
        lVar7 = local_res10;
    }
    *(undefined8 **)(lVar7 + 0x28) = puVar10;
    puVar10 = puVar11;
    do {
        if (DAT_140c63838 == (code *)0x0) {
            if ((_DAT_140c6462c != 0) || (iVar3 = FUN_14022b4e0(), iVar3 < 0)) {
                return 0;
            }
            uVar2 = (**(code **)(*DAT_140c64df0 + 0x28))();
        }
        else {
            uVar2 = (*DAT_140c63838)(&PTR_u_QuestDirection_140a6c7b0);
        }
        if (uVar2 <= (uint)puVar10) {
            return 0;
        }
        if (DAT_140c63848 == (code *)0x0) {
            puVar4 = puVar11;
            if (_DAT_140c6462c == 0) {
                iVar3 = FUN_14022b4e0();
                if (iVar3 < 0) {
                    puVar4 = (undefined8 *)0x0;
                }
                else {
                    puVar4 = (undefined8 *)(**(code **)(*DAT_140c64df0 + 0x20))();
                }
            }
        }
        else {
            puVar4 = (undefined8 *)(*DAT_140c63848)(&PTR_u_QuestDirection_140a6c7b0,puVar10,DAT_140c63858)
                    ;
        }
        lVar5 = FUN_14018b280(0x18);
        puVar6 = puVar11;
        if (lVar5 != 0) {
            puVar6 = (undefined8 *)FUN_140487c50(lVar5);
        }
        lVar5 = *(longlong *)(lVar1 + 8);
        lVar7 = lVar5;
        if (*(longlong *)(lVar5 + 8) != 0) {
            lVar8 = *(longlong *)(lVar5 + 8);
            do {
                if (*(uint *)(lVar8 + 0x20) < *(uint *)puVar4) {
                    lVar9 = *(longlong *)(lVar8 + 0x18);
                }
                else {
                    lVar9 = *(longlong *)(lVar8 + 0x10);
                    lVar7 = lVar8;
                }
                lVar8 = lVar9;
            } while (lVar9 != 0);
        }
        if ((lVar7 == lVar5) || (*(uint *)puVar4 < *(uint *)(lVar7 + 0x20))) {
            local_28[0] = *(undefined4 *)puVar4;
            local_20 = 0;
            local_res8 = lVar7;
            FUN_140055c60(lVar1,&local_res10,&local_res8,local_28);
            lVar7 = local_res10;
        }
        *(undefined8 **)(lVar7 + 0x28) = puVar6;
        puVar10 = (undefined8 *)(ulonglong)((uint)puVar10 + 1);
    } while( true );
}



undefined8 FUN_140487750(undefined8 param_1,uint param_2,int param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong local_res8;

    lVar1 = *(longlong *)(DAT_140c65928 + 8);
    lVar2 = *(longlong *)(lVar1 + 8);
    local_res8 = lVar1;
    lVar3 = lVar2;
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
    if (local_res8 == lVar1) {
        local_res8 = lVar1;
        if (param_3 != 0) {
            for (; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x10)) {
                local_res8 = lVar2;
            }
            if ((local_res8 == lVar1) || (*(int *)(local_res8 + 0x20) != 0)) {
                local_res8 = lVar1;
            }
            if (local_res8 != lVar1) goto LAB_1404877ee;
        }
        return 0;
    }
    LAB_1404877ee:
    return *(undefined8 *)(local_res8 + 0x28);
}



// WARNING: Could not reconcile some variable overlaps

longlong FUN_140487800(longlong param_1,undefined8 param_2)

{
    longlong lVar1;
    undefined *puVar2;
    longlong *plVar3;
    longlong **pplVar4;
    longlong *plVar5;
    longlong lVar6;
    longlong lVar7;
    longlong **pplVar8;
    longlong **pplVar9;
    longlong **pplVar10;
    longlong **pplVar11;
    undefined4 local_res10 [2];
    longlong *local_res18;
    undefined local_a8 [16];
    undefined local_98 [8];
    longlong **local_90;
    longlong **local_88;
    longlong **local_80;
    undefined local_78 [16];
    longlong **local_68;
    longlong **pplStack96;
    undefined local_58 [16];
    longlong **local_48;

    puVar2 = (undefined *)FUN_14018b280(0x28);
    local_90 = (longlong **)0x0;
    *(undefined **)(param_1 + 8) = puVar2;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *puVar2 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 8) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 8) + 0x10) = *(longlong *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = *(longlong *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x20) = param_2;
    plVar3 = (longlong *)FUN_14043ed60();
    if (plVar3 == (longlong *)0x0) {
        return param_1;
    }
    local_78 = ZEXT816(0);
    local_58 = ZEXT816(0);
    local_68 = (longlong **)0x0;
    pplStack96 = (longlong **)0x0;
    local_88 = local_90;
    local_80 = local_90;
    local_48 = local_90;
    FUN_140172f70();
    if (pplStack96 == local_58._8_8_ + -1) {
        if ((ulonglong)((longlong)local_88 - ((longlong)local_48 - (longlong)local_90 >> 3)) < 2) {
            FUN_140173030(local_98);
        }
        pplVar9 = pplStack96;
        pplVar10 = local_90;
        pplVar8 = local_48 + 1;
        plVar5 = (longlong *)FUN_14018b280(0x1f0,0);
        *pplVar8 = plVar5;
        if (pplVar9 != (longlong **)0x0) {
            *pplVar9 = plVar3;
        }
        pplVar9 = (longlong **)*pplVar8;
        local_58._8_8_ = pplVar9 + 0x3e;
        local_58 = CONCAT88(local_58._8_8_,pplVar9);
        local_58._0_8_ = pplVar9;
        local_48 = pplVar8;
    }
    else {
        if (pplStack96 != (longlong **)0x0) {
            *pplStack96 = plVar3;
        }
        pplVar9 = pplStack96 + 1;
        pplVar10 = local_90;
    }
    pplVar8 = local_48;
    pplVar11 = local_80;
    if (pplVar9 != local_80) {
        do {
            pplVar4 = pplVar9;
            if (pplVar9 == local_58._0_8_) {
                pplVar4 = (longlong **)(pplVar8[-1] + 0x3e);
            }
            local_res18 = pplVar4[-1];
            local_res10[0] = *(undefined4 *)local_res18[1];
            FUN_1400293c0(param_1,local_a8,local_res10);
            if (pplVar9 == local_58._0_8_) {
                FUN_14018b900(local_58._0_8_,0);
                local_58._0_8_ = (longlong **)pplVar8[-1];
                pplVar8 = pplVar8 + -1;
                local_58._8_8_ = local_58._0_8_ + 0x3e;
                pplStack96 = local_58._0_8_ + 0x3d;
                local_48 = pplVar8;
            }
            else {
                pplStack96 = pplVar9 + -1;
            }
            lVar7 = *(longlong *)(local_res18[4] + 0x10);
            plVar3 = local_res18;
            if (lVar7 != local_res18[4]) {
                do {
                    if (pplStack96 == local_58._8_8_ + -1) {
                        plVar3 = *(longlong **)(lVar7 + 0x20);
                        if ((ulonglong)((longlong)local_88 - ((longlong)pplVar8 - (longlong)pplVar10 >> 3)) < 2)
                        {
                            FUN_140173030(local_98);
                            pplVar8 = local_48;
                            pplVar10 = local_90;
                        }
                        pplVar9 = pplStack96;
                        pplVar8 = pplVar8 + 1;
                        plVar5 = (longlong *)FUN_14018b280(0x1f0,0);
                        *pplVar8 = plVar5;
                        if (pplVar9 != (longlong **)0x0) {
                            *pplVar9 = plVar3;
                        }
                        pplStack96 = (longlong **)*pplVar8;
                        local_58._8_8_ = pplStack96 + 0x3e;
                        local_58 = CONCAT88(local_58._8_8_,pplStack96);
                        plVar3 = local_res18;
                        local_58._0_8_ = pplStack96;
                        local_48 = pplVar8;
                    }
                    else {
                        if (pplStack96 != (longlong **)0x0) {
                            *pplStack96 = *(longlong **)(lVar7 + 0x20);
                        }
                        pplStack96 = pplStack96 + 1;
                    }
                    lVar6 = *(longlong *)(lVar7 + 0x18);
                    if (lVar6 == 0) {
                        lVar6 = *(longlong *)(lVar7 + 8);
                        if (lVar7 == *(longlong *)(lVar6 + 0x18)) {
                            do {
                                lVar7 = lVar6;
                                lVar6 = *(longlong *)(lVar7 + 8);
                            } while (lVar7 == *(longlong *)(lVar6 + 0x18));
                        }
                        if (*(longlong *)(lVar7 + 0x18) != lVar6) {
                            lVar7 = lVar6;
                        }
                    }
                    else {
                        for (lVar1 = *(longlong *)(lVar6 + 0x10); lVar7 = lVar6, lVar1 != 0;
                             lVar1 = *(longlong *)(lVar1 + 0x10)) {
                            lVar6 = lVar1;
                        }
                    }
                    pplVar11 = local_80;
                } while (lVar7 != plVar3[4]);
            }
            pplVar9 = pplStack96;
        } while (pplStack96 != pplVar11);
    }
    if (pplVar10 != (longlong **)0x0) {
        for (pplVar9 = local_68; pplVar9 < pplVar8 + 1; pplVar9 = pplVar9 + 1) {
            FUN_14018b900(*pplVar9,0);
        }
        FUN_14018b900(pplVar10,0);
    }
    return param_1;
}



bool FUN_140487b40(longlong param_1,float *param_2)

{
    longlong lVar1;
    float fVar2;
    float fVar3;

    lVar1 = FUN_14024b980(*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 4));
    if (lVar1 == 0) {
        return false;
    }
    fVar2 = *param_2 - *(float *)(lVar1 + 0xc);
    fVar3 = param_2[1] - *(float *)(lVar1 + 0x10);
    return fVar2 * fVar2 + fVar3 * fVar3 + 0.0 < *(float *)(lVar1 + 4) * *(float *)(lVar1 + 4);
}



bool FUN_140487bc0(longlong param_1)

{
    int iVar1;
    int iVar2;

    iVar2 = 0;
    if (*(longlong **)(DAT_140c65898 + 0x1bf0) != (longlong *)0x0) {
        iVar2 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))();
    }
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x14);
    if (iVar1 == 0) {
        return true;
    }
    if (iVar1 == 1) {
        return iVar2 == 0xa7;
    }
    if (iVar1 == 2) {
        return iVar2 == 0xa6;
    }
    return false;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_140487c50(longlong *param_1,longlong param_2)

{
    undefined4 uVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined4 *puVar7;
    uint uVar8;

    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = param_2;
    if (param_2 == 0) {
        return param_1;
    }
    uVar8 = 0;
    puVar7 = (undefined4 *)(param_2 + 8);
    do {
        uVar1 = *puVar7;
        if (DAT_140c63840 == (code *)0x0) {
            if (_DAT_140c63a18 != 0) {
                return param_1;
            }
            iVar2 = FUN_14022b920();
            if (iVar2 < 0) {
                return param_1;
            }
            lVar3 = (**(code **)(*DAT_140c63d00 + 0x18))(DAT_140c63d00,uVar1);
        }
        else {
            lVar3 = (*DAT_140c63840)(&PTR_u_QuestDirectionEntry_140a6c7e8,uVar1,DAT_140c63858);
        }
        if (lVar3 == 0) {
            return param_1;
        }
        lVar4 = FUN_14018b280(0x28);
        if (lVar4 == 0) {
            uVar5 = 0;
        }
        else {
            uVar5 = FUN_140487800(lVar4,lVar3);
        }
        lVar4 = param_1[2];
        lVar3 = lVar4 + 1;
        lVar6 = FUN_14018db00(param_1[1],lVar3,8);
        *(undefined8 *)(lVar6 + lVar4 * 8) = uVar5;
        if (param_1[1] != lVar6) {
            FUN_1407db590(lVar6,param_1[1],param_1[2] << 3);
            lVar4 = param_1[1];
            if (lVar4 != 0) {
                (**(code **)(*(longlong *)(lVar4 + -0x10) + 8))(lVar4 + -0x10);
            }
            param_1[1] = lVar6;
        }
        uVar8 = uVar8 + 1;
        puVar7 = puVar7 + 1;
        param_1[2] = lVar3;
    } while (uVar8 < 0x10);
    return param_1;
}



void FUN_140487db0(longlong param_1)

{
    longlong lVar1;
    ulonglong uVar2;

    uVar2 = 0;
    if (*(longlong *)(param_1 + 0x10) != 0) {
        do {
            lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + uVar2 * 8);
            if (lVar1 != 0) {
                FUN_140008410(lVar1);
                FUN_14018b900(*(undefined8 *)(lVar1 + 8),0);
                FUN_14018b900(lVar1);
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(ulonglong *)(param_1 + 0x10));
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 == 0) {
        return;
    }
    // WARNING: Could not recover jumptable at 0x000140487e2f. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    return;
}



ulonglong FUN_140487e40(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                        undefined4 param_5,int param_6,undefined4 *param_7)

{
    int iVar1;
    uint uVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    uVar4 = 0;
    if (param_7 != (undefined4 *)0x0) {
        *param_7 = 0;
    }
    param_7._0_4_ = 0;
    if (*param_1 != 0) {
        if ((*(int *)(*param_1 + 0x48) != 0) &&
            (iVar1 = FUN_1403c9450(param_1,*(undefined4 *)(DAT_140c65898 + 0x7150)), iVar1 != 0)) {
            if (*(longlong *)(DAT_140c65898 + 0x78) == 0) {
                return 0;
            }
            FUN_1403f7e50(DAT_140c65898,param_3,param_4,&param_7,0,0,0);
            return (ulonglong)(uint)param_7;
        }
        if ((*(byte *)(*param_1 + 4) & 1) == 0) {
            uVar3 = FUN_140487f50(param_1,param_5,param_7);
            iVar1 = (int)uVar3;
        }
        else {
            uVar3 = FUN_1404880f0(param_1,param_2,param_5);
            iVar1 = (int)uVar3;
        }
        if (iVar1 != 0) {
            return uVar3;
        }
    }
    if (param_6 == 0) {
        uVar2 = FUN_1404883b0();
        uVar4 = (ulonglong)uVar2;
    }
    return uVar4;
}



undefined4 FUN_140487f50(longlong param_1,int param_2,undefined4 *param_3)

{
    undefined4 uVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    longlong lVar9;

    if (param_3 != (undefined4 *)0x0) {
        *param_3 = 0;
    }
    if (((DAT_140c65898 == 0) || (lVar2 = *(longlong *)(DAT_140c65898 + 0x6490), lVar2 == 0)) ||
        (uVar7 = *(ulonglong *)(param_1 + 0x10), uVar7 == 0)) {
        return 0;
    }
    uVar1 = *(undefined4 *)(lVar2 + 0x17e8);
    uVar8 = 0;
    if (uVar7 != 0) {
        do {
            lVar9 = 0;
            lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + uVar8 * 8);
            lVar5 = uVar8 * 8;
            uVar8 = uVar8 + 1;
            if (uVar8 < uVar7) {
                lVar9 = *(longlong *)(*(longlong *)(param_1 + 8) + lVar5 + 8);
            }
            iVar4 = FUN_140487bc0(lVar3);
            if (iVar4 != 0) {
                if (lVar9 == 0) {
                    if (*(longlong *)(lVar3 + 0x10) == 0) {
                        lVar5 = FUN_14043ed60();
                        if (((lVar5 != 0) && (*(int *)(*(longlong *)(lVar5 + 8) + 0x18) != 0)) &&
                            (lVar6 = FUN_14024b980(*(undefined4 *)(*(longlong *)(lVar5 + 8) + 0x18)), lVar6 != 0)
                                ) {
                            if (param_3 != (undefined4 *)0x0) {
                                *param_3 = 1;
                            }
                            return *(undefined4 *)(*(longlong *)(lVar5 + 8) + 0x18);
                        }
                        goto LAB_140488037;
                    }
                }
                else {
                    LAB_140488037:
                    if (*(longlong *)(lVar3 + 0x10) == 0) goto LAB_1404880da;
                }
                iVar4 = FUN_140487390(lVar3,uVar1);
                if ((iVar4 != 0) ||
                    (((lVar9 != 0 && ((*(byte *)(*(longlong *)(lVar9 + 0x20) + 0x10) & 1) == 0)) &&
                      (iVar4 = FUN_140487b40(lVar9,lVar2 + 0x11e0), iVar4 != 0)))) {
                    LAB_1404880da:
                    if (param_2 != 0) {
                        return *(undefined4 *)(*(longlong *)(lVar3 + 0x20) + 8);
                    }
                    return *(undefined4 *)(*(longlong *)(lVar3 + 0x20) + 4);
                }
            }
            uVar7 = *(ulonglong *)(param_1 + 0x10);
        } while (uVar8 < uVar7);
    }
    return 0;
}



undefined4 FUN_1404880f0(longlong param_1,uint param_2,int param_3)

{
    ulonglong uVar1;
    longlong lVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    undefined4 uVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    longlong lVar11;
    ulonglong uVar12;
    undefined4 local_res20 [2];

    if (((DAT_140c65898 == 0) || (lVar2 = *(longlong *)(DAT_140c65898 + 0x6490), lVar2 == 0)) ||
        (uVar9 = *(ulonglong *)(param_1 + 0x10), uVar9 == 0)) {
        return 0;
    }
    lVar6 = 0;
    local_res20[0] = *(undefined4 *)(DAT_140c65898 + 0x74ec);
    uVar12 = 0;
    uVar10 = 0;
    lVar11 = 0;
    uVar8 = 0;
    if (uVar9 != 0) {
        do {
            lVar4 = 0;
            uVar1 = uVar8 + 1;
            lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + uVar8 * 8);
            if (uVar1 < uVar9) {
                lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 8 + uVar8 * 8);
            }
            iVar3 = FUN_140487bc0(lVar5);
            if ((iVar3 != 0) && ((param_2 >> ((uint)uVar8 & 0x1f) & 1) == 0)) {
                if (*(longlong *)(lVar5 + 0x10) == 0) {
                    if (param_3 == 0) {
                        uVar7 = *(undefined4 *)(*(longlong *)(lVar5 + 0x20) + 4);
                    }
                    else {
                        uVar7 = *(undefined4 *)(*(longlong *)(lVar5 + 0x20) + 8);
                    }
                    lVar4 = FUN_14018db00(lVar11,uVar10 + 1,4);
                    *(undefined4 *)(uVar10 * 4 + lVar4) = uVar7;
                    lVar5 = lVar11;
                    if ((lVar11 != lVar4) && (FUN_1407db590(lVar4,lVar11), lVar5 = lVar4, lVar11 != 0)) {
                        (**(code **)(*(longlong *)(lVar11 + -0x10) + 8))(lVar11 + -0x10);
                    }
                    uVar10 = uVar10 + 1;
                    lVar11 = lVar5;
                }
                else {
                    iVar3 = FUN_140487390(lVar5,local_res20[0]);
                    if (iVar3 == 0) {
                        if (((lVar4 != 0) && ((*(byte *)(*(longlong *)(lVar4 + 0x20) + 0x10) & 1) == 0)) &&
                            (iVar3 = FUN_140487b40(lVar4,lVar2 + 0x11e0), iVar3 != 0)) {
                            if (param_3 == 0) {
                                uVar7 = *(undefined4 *)(*(longlong *)(lVar5 + 0x20) + 4);
                            }
                            else {
                                uVar7 = *(undefined4 *)(*(longlong *)(lVar5 + 0x20) + 8);
                            }
                            goto LAB_140488351;
                        }
                    }
                    else {
                        if (param_3 == 0) {
                            uVar7 = *(undefined4 *)(*(longlong *)(lVar5 + 0x20) + 4);
                        }
                        else {
                            uVar7 = *(undefined4 *)(*(longlong *)(lVar5 + 0x20) + 8);
                        }
                        lVar4 = FUN_14018db00(lVar6,uVar12 + 1,4);
                        *(undefined4 *)(uVar12 * 4 + lVar4) = uVar7;
                        lVar5 = lVar6;
                        if ((lVar6 != lVar4) && (FUN_1407db590(lVar4,lVar6), lVar5 = lVar4, lVar6 != 0)) {
                            (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))(lVar6 + -0x10);
                        }
                        uVar12 = uVar12 + 1;
                        lVar6 = lVar5;
                    }
                }
            }
            uVar9 = *(ulonglong *)(param_1 + 0x10);
            uVar8 = uVar1;
        } while (uVar1 < uVar9);
    }
    local_res20[0] = 0;
    if (uVar12 == 0) {
        lVar2 = *(longlong *)(DAT_140c65898 + 0x78);
        uVar12 = uVar10;
        lVar5 = lVar11;
    }
    else {
        lVar2 = *(longlong *)(DAT_140c65898 + 0x78);
        lVar5 = lVar6;
    }
    uVar7 = local_res20[0];
    if (lVar2 != 0) {
        FUN_1403f7e50(DAT_140c65898,lVar5,uVar12 & 0xffffffff,local_res20,0,0,0);
        uVar7 = local_res20[0];
    }
    LAB_140488351:
    if (lVar11 != 0) {
        (**(code **)(*(longlong *)(lVar11 + -0x10) + 8))(lVar11 + -0x10);
    }
    if (lVar6 != 0) {
        (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))(lVar6 + -0x10);
    }
    return uVar7;
}



// WARNING: Could not reconcile some variable overlaps

int FUN_1404883b0(ulonglong param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
    longlong lVar1;
    longlong lVar2;
    int *piVar3;
    int iVar4;
    float fVar5;
    float fVar6;
    ulonglong local_res8;

    if ((DAT_140c65898 == 0) || (lVar1 = *(longlong *)(DAT_140c65898 + 0x6490), lVar1 == 0)) {
        return 0;
    }
    local_res8 = param_1;
    lVar2 = FUN_14043ed60(param_1,*(undefined4 *)(DAT_140c65898 + 0x74ec));
    if (lVar2 == 0) {
        return 0;
    }
    iVar4 = 0;
    do {
        if ((*(int *)(*(longlong *)(lVar2 + 8) + 0x18) != 0) &&
            (piVar3 = (int *)FUN_14024b980(*(undefined4 *)(*(longlong *)(lVar2 + 8) + 0x18)),
                    piVar3 != (int *)0x0)) {
            fVar6 = (float)piVar3[4];
            fVar5 = (float)piVar3[3];
            if (param_4 != (undefined4 *)0x0) {
                *param_4 = 1;
            }
            if (((*(byte *)(*(longlong *)(lVar2 + 8) + 0x1c) & 1) != 0) ||
                (fVar5 = *(float *)(lVar1 + 0x11e0) - fVar5, fVar6 = *(float *)(lVar1 + 0x11e4) - fVar6,
                        (float)piVar3[1] * (float)piVar3[1] <= fVar5 * fVar5 + fVar6 * fVar6 + 0.0)) {
                return *(int *)(*(longlong *)(lVar2 + 8) + 0x18);
            }
            iVar4 = *piVar3;
        }
        lVar2 = *(longlong *)(lVar2 + 0x10);
        if (lVar2 == 0) {
            local_res8 = local_res8 & 0xffffffff00000000;
            if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
                FUN_1403f7e50(DAT_140c65898,param_2,param_3,&local_res8,0,0,0);
                if ((int)local_res8 != 0) {
                    return (int)local_res8;
                }
            }
            return iVar4;
        }
    } while( true );
}



undefined8 FUN_140488520(longlong *param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    if ((ulonglong)(param_1[0xb] + param_1[7]) < (ulonglong)*(uint *)(*param_1 + 0xc)) {
        lVar1 = param_1[2];
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
            return 1;
        }
    }
    return 0;
}



undefined8 * FUN_140488590(undefined8 *param_1,undefined8 param_2)

{
    undefined *puVar1;

    *param_1 = param_2;
    puVar1 = (undefined *)FUN_14018b280(0x28);
    param_1[2] = puVar1;
    param_1[3] = 0;
    *puVar1 = 0;
    *(undefined8 *)(param_1[2] + 8) = 0;
    *(undefined8 *)(param_1[2] + 0x10) = param_1[2];
    *(undefined8 *)(param_1[2] + 0x18) = param_1[2];
    puVar1 = (undefined *)FUN_14018b280(0x28,0);
    param_1[7] = 0;
    param_1[6] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[6] + 8) = 0;
    *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
    *(undefined8 *)(param_1[6] + 0x18) = param_1[6];
    puVar1 = (undefined *)FUN_14018b280(0x28,0);
    param_1[0xb] = 0;
    param_1[10] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[10] + 8) = 0;
    *(undefined8 *)(param_1[10] + 0x10) = param_1[10];
    *(undefined8 *)(param_1[10] + 0x18) = param_1[10];
    return param_1;
}



undefined8 FUN_140488640(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    uint local_res10 [2];
    longlong local_res18;
    undefined local_18 [16];

    local_res10[0] = param_2;
    iVar3 = FUN_140488520();
    if (iVar3 != 0) {
        lVar1 = *(longlong *)(param_1 + 0x50);
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
        if (local_res18 == lVar1) {
            FUN_1400ee810(param_1 + 8,local_res10);
            FUN_1400293c0(param_1 + 0x28,local_18,local_res10);
            return 0;
        }
    }
    return 0x80004005;
}



undefined8 FUN_1404886f0(longlong *param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;
    uint local_res10 [2];
    undefined local_18 [16];

    lVar1 = param_1[10];
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
    if ((local_res8 == lVar1) && ((ulonglong)param_1[0xb] < (ulonglong)*(uint *)(*param_1 + 0xc))) {
        local_res10[0] = param_2;
        FUN_1400ee810(param_1 + 1,local_res10);
        FUN_1400ee810(param_1 + 5,local_res10);
        FUN_1400293c0(param_1 + 9,local_18,local_res10);
        return 0;
    }
    return 0x80004005;
}



undefined8 FUN_1404887a0(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;
    uint local_res10 [2];
    undefined local_18 [16];

    lVar1 = *(longlong *)(param_1 + 0x30);
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
        lVar1 = *(longlong *)(param_1 + 0x50);
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
            return 0x80004005;
        }
    }
    local_res10[0] = param_2;
    FUN_1400ee810(param_1 + 0x48,local_res10);
    FUN_1400ee810(param_1 + 0x28,local_res10);
    FUN_1400293c0(param_1 + 8,local_18,local_res10);
    return 0;
}



undefined8 * FUN_140488890(undefined8 *param_1)

{
    undefined *puVar1;

    *param_1 = &PTR_FUN_140b67200;
    puVar1 = (undefined *)FUN_14018b280(0x30);
    param_1[2] = puVar1;
    param_1[3] = 0;
    *puVar1 = 0;
    *(undefined8 *)(param_1[2] + 8) = 0;
    *(undefined8 *)(param_1[2] + 0x10) = param_1[2];
    *(undefined8 *)(param_1[2] + 0x18) = param_1[2];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[7] = 0;
    param_1[6] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[6] + 8) = 0;
    *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
    *(undefined8 *)(param_1[6] + 0x18) = param_1[6];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0xb] = 0;
    param_1[10] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[10] + 8) = 0;
    *(undefined8 *)(param_1[10] + 0x10) = param_1[10];
    *(undefined8 *)(param_1[10] + 0x18) = param_1[10];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0xf] = 0;
    param_1[0xe] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0xe] + 8) = 0;
    *(undefined8 *)(param_1[0xe] + 0x10) = param_1[0xe];
    *(undefined8 *)(param_1[0xe] + 0x18) = param_1[0xe];
    return param_1;
}



undefined8 FUN_140488970(undefined8 param_1,ulonglong param_2)

{
    FUN_1404889b0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_1404889b0(undefined8 *param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    *param_1 = &PTR_FUN_140b67200;
    FUN_14018b900(DAT_140c65940,0);
    lVar4 = *(longlong *)(param_1[6] + 0x10);
    if (lVar4 != param_1[6]) {
        do {
            lVar3 = *(longlong *)(lVar4 + 0x28);
            if (lVar3 != 0) {
                FUN_14048a4c0(lVar3);
                FUN_14018b900(lVar3,0);
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
        } while (lVar4 != param_1[6]);
    }
    FUN_140008410(param_1 + 5);
    FUN_140008410(param_1 + 9);
    FUN_140008410(param_1 + 0xd);
    lVar4 = *(longlong *)(param_1[2] + 0x10);
    if (lVar4 != param_1[2]) {
        do {
            puVar1 = *(undefined8 **)(lVar4 + 0x28);
            if (puVar1 != (undefined8 *)0x0) {
                *puVar1 = 0;
                if (puVar1[3] != 0) {
                    lVar3 = *(longlong *)(puVar1[2] + 8);
                    while (lVar3 != 0) {
                        FUN_1400083b0(puVar1 + 1,*(undefined8 *)(lVar3 + 0x18));
                        lVar2 = *(longlong *)(lVar3 + 0x10);
                        FUN_14018b900(lVar3,0);
                        lVar3 = lVar2;
                    }
                    *(undefined8 *)(puVar1[2] + 0x10) = puVar1[2];
                    *(undefined8 *)(puVar1[2] + 8) = 0;
                    *(undefined8 *)(puVar1[2] + 0x18) = puVar1[2];
                    puVar1[3] = 0;
                }
                if (puVar1[7] != 0) {
                    lVar3 = *(longlong *)(puVar1[6] + 8);
                    while (lVar3 != 0) {
                        FUN_1400083b0(puVar1 + 5,*(undefined8 *)(lVar3 + 0x18));
                        lVar2 = *(longlong *)(lVar3 + 0x10);
                        FUN_14018b900(lVar3,0);
                        lVar3 = lVar2;
                    }
                    *(undefined8 *)(puVar1[6] + 0x10) = puVar1[6];
                    *(undefined8 *)(puVar1[6] + 8) = 0;
                    *(undefined8 *)(puVar1[6] + 0x18) = puVar1[6];
                    puVar1[7] = 0;
                }
                if (puVar1[0xb] != 0) {
                    lVar3 = *(longlong *)(puVar1[10] + 8);
                    while (lVar3 != 0) {
                        FUN_1400083b0(puVar1 + 9,*(undefined8 *)(lVar3 + 0x18));
                        lVar2 = *(longlong *)(lVar3 + 0x10);
                        FUN_14018b900(lVar3,0);
                        lVar3 = lVar2;
                    }
                    *(undefined8 *)(puVar1[10] + 0x10) = puVar1[10];
                    *(undefined8 *)(puVar1[10] + 8) = 0;
                    *(undefined8 *)(puVar1[10] + 0x18) = puVar1[10];
                    puVar1[0xb] = 0;
                }
                if (puVar1[0xb] != 0) {
                    lVar3 = *(longlong *)(puVar1[10] + 8);
                    while (lVar3 != 0) {
                        FUN_1400083b0(puVar1 + 9,*(undefined8 *)(lVar3 + 0x18));
                        lVar2 = *(longlong *)(lVar3 + 0x10);
                        FUN_14018b900(lVar3,0);
                        lVar3 = lVar2;
                    }
                    *(undefined8 *)(puVar1[10] + 0x10) = puVar1[10];
                    *(undefined8 *)(puVar1[10] + 8) = 0;
                    *(undefined8 *)(puVar1[10] + 0x18) = puVar1[10];
                    puVar1[0xb] = 0;
                }
                FUN_14018b900(puVar1[10],0);
                if (puVar1[7] != 0) {
                    lVar3 = *(longlong *)(puVar1[6] + 8);
                    while (lVar3 != 0) {
                        FUN_1400083b0(puVar1 + 5);
                        lVar2 = *(longlong *)(lVar3 + 0x10);
                        FUN_14018b900(lVar3,0);
                        lVar3 = lVar2;
                    }
                    *(undefined8 *)(puVar1[6] + 0x10) = puVar1[6];
                    *(undefined8 *)(puVar1[6] + 8) = 0;
                    *(undefined8 *)(puVar1[6] + 0x18) = puVar1[6];
                    puVar1[7] = 0;
                }
                FUN_14018b900(puVar1[6],0);
                if (puVar1[3] != 0) {
                    lVar3 = *(longlong *)(puVar1[2] + 8);
                    while (lVar3 != 0) {
                        FUN_1400083b0(puVar1 + 1);
                        lVar2 = *(longlong *)(lVar3 + 0x10);
                        FUN_14018b900(lVar3,0);
                        lVar3 = lVar2;
                    }
                    *(undefined8 *)(puVar1[2] + 0x10) = puVar1[2];
                    *(undefined8 *)(puVar1[2] + 8) = 0;
                    *(undefined8 *)(puVar1[2] + 0x18) = puVar1[2];
                    puVar1[3] = 0;
                }
                FUN_14018b900(puVar1[2],0);
                FUN_14018b900(puVar1);
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
        } while (lVar4 != param_1[2]);
    }
    if (param_1[3] != 0) {
        lVar4 = *(longlong *)(param_1[2] + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 1,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(undefined8 *)(param_1[2] + 0x10) = param_1[2];
        *(undefined8 *)(param_1[2] + 8) = 0;
        *(undefined8 *)(param_1[2] + 0x18) = param_1[2];
        param_1[3] = 0;
    }
    if (param_1[0xf] != 0) {
        lVar4 = *(longlong *)(param_1[0xe] + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 0xd,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(undefined8 *)(param_1[0xe] + 0x10) = param_1[0xe];
        *(undefined8 *)(param_1[0xe] + 8) = 0;
        *(undefined8 *)(param_1[0xe] + 0x18) = param_1[0xe];
        param_1[0xf] = 0;
    }
    FUN_14018b900(param_1[0xe],0);
    if (param_1[0xb] != 0) {
        lVar4 = *(longlong *)(param_1[10] + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 9,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(undefined8 *)(param_1[10] + 0x10) = param_1[10];
        *(undefined8 *)(param_1[10] + 8) = 0;
        *(undefined8 *)(param_1[10] + 0x18) = param_1[10];
        param_1[0xb] = 0;
    }
    FUN_14018b900(param_1[10],0);
    if (param_1[7] != 0) {
        lVar4 = *(longlong *)(param_1[6] + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 5,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
        *(undefined8 *)(param_1[6] + 8) = 0;
        *(undefined8 *)(param_1[6] + 0x18) = param_1[6];
        param_1[7] = 0;
    }
    FUN_14018b900(param_1[6],0);
    if (param_1[3] != 0) {
        lVar4 = *(longlong *)(param_1[2] + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 1,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(undefined8 *)(param_1[2] + 0x10) = param_1[2];
        *(undefined8 *)(param_1[2] + 8) = 0;
        *(undefined8 *)(param_1[2] + 0x18) = param_1[2];
        param_1[3] = 0;
    }
    FUN_14018b900(param_1[2],0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140488fa0(longlong param_1)

{
    undefined4 uVar1;
    char *pcVar2;
    longlong lVar3;
    char *pcVar4;
    longlong lVar5;
    uint uVar6;
    int iVar7;
    longlong lVar8;
    ulonglong uVar9;
    uint *puVar10;
    uint *puVar11;
    undefined4 *puVar12;
    longlong *plVar13;
    undefined4 *puVar14;
    undefined4 *puVar15;
    undefined *puVar16;
    char *pcVar17;
    char *pcVar18;
    uint uVar19;
    ulonglong uVar20;
    bool bVar21;
    longlong local_res10;
    longlong local_res18;
    longlong local_res20;
    uint local_108;
    undefined4 uStack260;
    uint *local_100;
    longlong local_f8;
    uint local_f0 [2];
    uint *local_e8;
    undefined8 local_e0;
    uint *local_d8;
    undefined8 local_d0;
    undefined4 *local_c8;
    undefined4 local_c0 [2];
    undefined4 *local_b8;
    undefined4 local_b0 [2];
    undefined4 *local_a8;
    undefined local_a0 [8];
    undefined local_98 [16];
    undefined local_88 [16];
    undefined local_78 [16];
    undefined local_68 [40];

    lVar8 = FUN_14018b280(0x9e0);
    uVar20 = 0;
    uVar9 = uVar20;
    if (lVar8 != 0) {
        uVar9 = FUN_1401ae3c0(lVar8);
    }
    DAT_140c65940 = uVar9;
    FUN_1407e4830(param_1 + 0x88);
    LAB_140489010:
    do {
        puVar11 = (uint *)0x0;
        if (DAT_140c63838 == (code *)0x0) {
            if ((_DAT_140c648b0 != 0) || (iVar7 = FUN_1401fb780(), iVar7 < 0)) {
                return 0;
            }
            uVar6 = (**(code **)(*DAT_140c645a0 + 0x28))();
        }
        else {
            uVar6 = (*DAT_140c63838)(&PTR_u_PeriodicQuestGroup_140a6a050,DAT_140c63858);
        }
        uVar19 = (uint)uVar20;
        if (uVar6 <= uVar19) {
            return 0;
        }
        if (DAT_140c63848 == (code *)0x0) {
            puVar10 = puVar11;
            if ((_DAT_140c648b0 == 0) && (iVar7 = FUN_1401fb780(), -1 < iVar7)) {
                puVar10 = (uint *)(**(code **)(*DAT_140c645a0 + 0x20))(DAT_140c645a0,uVar20);
            }
        }
        else {
            puVar10 = (uint *)(*DAT_140c63848)(&PTR_u_PeriodicQuestGroup_140a6a050,uVar20);
        }
        lVar8 = FUN_14018b280(0x68);
        if (lVar8 != 0) {
            puVar11 = (uint *)FUN_140488590(lVar8,puVar10);
        }
        pcVar2 = *(char **)(param_1 + 0x10);
        local_108 = *puVar10;
        bVar21 = true;
        pcVar4 = pcVar2;
        pcVar18 = *(char **)(pcVar2 + 8);
        while (pcVar18 != (char *)0x0) {
            bVar21 = local_108 < *(uint *)(pcVar18 + 0x20);
            pcVar4 = pcVar18;
            if (bVar21) {
                pcVar18 = *(char **)(pcVar18 + 0x10);
            }
            else {
                pcVar18 = *(char **)(pcVar18 + 0x18);
            }
        }
        pcVar18 = pcVar4;
        local_100 = puVar11;
        if (bVar21) {
            if (pcVar4 != *(char **)(pcVar2 + 0x10)) {
                if ((*pcVar4 == '\0') && (*(char **)(*(longlong *)(pcVar4 + 8) + 8) == pcVar4)) {
                    pcVar18 = *(char **)(pcVar4 + 0x18);
                }
                else {
                    pcVar18 = *(char **)(pcVar4 + 0x10);
                    if (pcVar18 == (char *)0x0) {
                        pcVar18 = *(char **)(pcVar4 + 8);
                        pcVar17 = pcVar18;
                        if (pcVar4 == *(char **)(pcVar18 + 0x10)) {
                            do {
                                pcVar18 = *(char **)(pcVar17 + 8);
                                bVar21 = pcVar17 == *(char **)(pcVar18 + 0x10);
                                pcVar17 = pcVar18;
                            } while (bVar21);
                        }
                    }
                    else {
                        for (pcVar17 = *(char **)(pcVar18 + 0x18); pcVar17 != (char *)0x0;
                             pcVar17 = *(char **)(pcVar17 + 0x18)) {
                            pcVar18 = pcVar17;
                        }
                    }
                }
                goto LAB_14048919d;
            }
            FUN_140055e80(param_1 + 8,local_a0,0,pcVar4,&local_108);
        }
        else {
            LAB_14048919d:
            if (*(uint *)(pcVar18 + 0x20) < local_108) {
                if ((pcVar4 == pcVar2) || (local_108 < *(uint *)(pcVar4 + 0x20))) {
                    lVar8 = FUN_14018b280(0x30);
                    if ((undefined8 *)(lVar8 + 0x20) != (undefined8 *)0x0) {
                        *(undefined8 *)(lVar8 + 0x20) = CONCAT44(uStack260,local_108);
                        *(uint **)(lVar8 + 0x28) = puVar11;
                    }
                    *(longlong *)(pcVar4 + 0x10) = lVar8;
                    pcVar2 = *(char **)(param_1 + 0x10);
                    if (pcVar4 == pcVar2) {
                        *(longlong *)(pcVar2 + 8) = lVar8;
                        *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) = lVar8;
                    }
                    else if (pcVar4 == *(char **)(pcVar2 + 0x10)) {
                        *(longlong *)(pcVar2 + 0x10) = lVar8;
                    }
                }
                else {
                    lVar8 = FUN_14018b280(0x30);
                    if ((undefined8 *)(lVar8 + 0x20) != (undefined8 *)0x0) {
                        *(undefined8 *)(lVar8 + 0x20) = CONCAT44(uStack260,local_108);
                        *(uint **)(lVar8 + 0x28) = puVar11;
                    }
                    *(longlong *)(pcVar4 + 0x18) = lVar8;
                    if (pcVar4 == *(char **)(*(longlong *)(param_1 + 0x10) + 0x18)) {
                        *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) = lVar8;
                    }
                }
                *(char **)(lVar8 + 8) = pcVar4;
                *(undefined8 *)(lVar8 + 0x10) = 0;
                *(undefined8 *)(lVar8 + 0x18) = 0;
                FUN_1400081c0(lVar8,*(longlong *)(param_1 + 0x10) + 8);
                *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
            }
        }
        lVar8 = *(longlong *)(param_1 + 0x50);
        lVar5 = lVar8;
        lVar3 = *(longlong *)(lVar8 + 8);
        while (lVar3 != 0) {
            if (*(uint *)(lVar3 + 0x20) < puVar10[1]) {
                lVar3 = *(longlong *)(lVar3 + 0x18);
            }
            else {
                lVar5 = lVar3;
                lVar3 = *(longlong *)(lVar3 + 0x10);
            }
        }
        if ((lVar5 == lVar8) || (puVar10[1] < *(uint *)(lVar5 + 0x20))) {
            local_res18 = lVar8;
            plVar13 = &local_res18;
        }
        else {
            local_res10 = lVar5;
            plVar13 = &local_res10;
        }
        if ((*plVar13 != *(longlong *)(param_1 + 0x50)) &&
            (puVar14 = *(undefined4 **)(*plVar13 + 0x28), puVar14 != (undefined4 *)0x0)) {
            LAB_140489489:
            puVar11 = (uint *)FUN_14018b280();
            if (puVar11 == (uint *)0x0) {
                puVar11 = (uint *)0x0;
            }
            else {
                uVar6 = puVar10[2];
                *puVar11 = *puVar10;
                puVar11[4] = uVar6;
                *(undefined8 *)(puVar11 + 2) = 0;
                puVar16 = (undefined *)FUN_14018b280(0x30,0);
                *(undefined8 *)(puVar11 + 10) = 0;
                *(undefined **)(puVar11 + 8) = puVar16;
                *puVar16 = 0;
                *(undefined8 *)(*(longlong *)(puVar11 + 8) + 8) = 0;
                *(longlong *)(*(longlong *)(puVar11 + 8) + 0x10) = *(longlong *)(puVar11 + 8);
                *(longlong *)(*(longlong *)(puVar11 + 8) + 0x18) = *(longlong *)(puVar11 + 8);
            }
            local_f0[0] = *puVar11;
            local_e8 = puVar11;
            FUN_140055f80(param_1 + 0x68,local_78,local_f0);
            *(ulonglong *)(puVar14 + 2) = *(longlong *)(puVar14 + 2) + (ulonglong)puVar10[4];
            local_e0 = *(undefined8 *)(puVar14 + 2);
            local_d8 = puVar11;
            FUN_1400eedd0(puVar14 + 6);
            uVar20 = (ulonglong)(uVar19 + 1);
            *(uint **)(param_1 + 0x88 + ((longlong)(int)puVar10[5] * 5 + (longlong)(int)puVar10[6]) * 8) =
            puVar11;
            goto LAB_140489010;
        }
        if (DAT_140c63840 == (code *)0x0) {
            if ((_DAT_140c65190 == 0) && (iVar7 = FUN_1401fb340(), -1 < iVar7)) {
                puVar12 = (undefined4 *)(**(code **)(*DAT_140c651b8 + 0x18))();
                goto LAB_140489302;
            }
        }
        else {
            puVar12 = (undefined4 *)(*DAT_140c63840)(&PTR_u_PeriodicQuestSet_140a6a018);
            LAB_140489302:
            if (puVar12 != (undefined4 *)0x0) {
                lVar8 = *(longlong *)(param_1 + 0x30);
                lVar5 = lVar8;
                lVar3 = *(longlong *)(lVar8 + 8);
                while (lVar3 != 0) {
                    if (*(uint *)(lVar3 + 0x20) < (uint)puVar12[1]) {
                        lVar3 = *(longlong *)(lVar3 + 0x18);
                    }
                    else {
                        lVar5 = lVar3;
                        lVar3 = *(longlong *)(lVar3 + 0x10);
                    }
                }
                if ((lVar5 == lVar8) || ((uint)puVar12[1] < *(uint *)(lVar5 + 0x20))) {
                    local_f8 = lVar8;
                    plVar13 = &local_f8;
                }
                else {
                    plVar13 = &local_res20;
                    local_res20 = lVar5;
                }
                if ((*plVar13 == *(longlong *)(param_1 + 0x30)) ||
                    (puVar15 = *(undefined4 **)(*plVar13 + 0x28), puVar15 == (undefined4 *)0x0)) {
                    puVar14 = (undefined4 *)FUN_1401fb160();
                    if (puVar14 == (undefined4 *)0x0) goto LAB_14048954e;
                    puVar15 = (undefined4 *)FUN_14018b280();
                    if (puVar15 == (undefined4 *)0x0) {
                        puVar15 = (undefined4 *)0x0;
                    }
                    else {
                        uVar1 = puVar14[1];
                        *puVar15 = *puVar14;
                        puVar15[4] = uVar1;
                        *(undefined8 *)(puVar15 + 2) = 0;
                        puVar16 = (undefined *)FUN_14018b280(0x30,0);
                        *(undefined8 *)(puVar15 + 10) = 0;
                        *(undefined **)(puVar15 + 8) = puVar16;
                        *puVar16 = 0;
                        *(undefined8 *)(*(longlong *)(puVar15 + 8) + 8) = 0;
                        *(longlong *)(*(longlong *)(puVar15 + 8) + 0x10) = *(longlong *)(puVar15 + 8);
                        *(longlong *)(*(longlong *)(puVar15 + 8) + 0x18) = *(longlong *)(puVar15 + 8);
                    }
                    local_c0[0] = *puVar15;
                    local_b8 = puVar15;
                    FUN_140055f80(param_1 + 0x28,local_98,local_c0);
                }
                puVar14 = (undefined4 *)FUN_14018b280();
                if (puVar14 == (undefined4 *)0x0) {
                    puVar14 = (undefined4 *)0x0;
                }
                else {
                    uVar1 = *puVar12;
                    puVar14[4] = puVar12[2];
                    *puVar14 = uVar1;
                    *(undefined8 *)(puVar14 + 2) = 0;
                    puVar16 = (undefined *)FUN_14018b280(0x30);
                    *(undefined8 *)(puVar14 + 10) = 0;
                    *(undefined **)(puVar14 + 8) = puVar16;
                    *puVar16 = 0;
                    *(undefined8 *)(*(longlong *)(puVar14 + 8) + 8) = 0;
                    *(longlong *)(*(longlong *)(puVar14 + 8) + 0x10) = *(longlong *)(puVar14 + 8);
                    *(longlong *)(*(longlong *)(puVar14 + 8) + 0x18) = *(longlong *)(puVar14 + 8);
                }
                local_b0[0] = *puVar14;
                local_a8 = puVar14;
                FUN_140055f80(param_1 + 0x48,local_68,local_b0);
                *(ulonglong *)(puVar15 + 2) = *(longlong *)(puVar15 + 2) + (ulonglong)(uint)puVar12[3];
                local_d0 = *(undefined8 *)(puVar15 + 2);
                local_c8 = puVar14;
                FUN_1400eedd0(puVar15 + 6,local_88,&local_d0);
                goto LAB_140489489;
            }
        }
        LAB_14048954e:
        uVar20 = (ulonglong)(uVar19 + 1);
    } while( true );
}



undefined8 FUN_140489580(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
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
    if (local_res8 != lVar1) {
        return *(undefined8 *)(local_res8 + 0x28);
    }
    return 0;
}



void FUN_1404895e0(longlong param_1)

{
    uint uVar1;
    uint *puVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    ulonglong uVar6;
    int iVar7;
    longlong *plVar8;
    longlong lVar9;
    longlong lVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    ulonglong uVar13;
    undefined4 local_res10 [2];
    longlong local_res18;
    ulonglong local_res20;
    longlong local_98;
    longlong local_90;
    longlong local_88;
    ulonglong local_80;
    longlong local_78;
    ulonglong local_70;
    longlong local_68;
    ulonglong local_60;
    undefined local_58 [24];

    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
    if (lVar10 != *(longlong *)(param_1 + 0x10)) {
        do {
            lVar9 = *(longlong *)(lVar10 + 0x28);
            FUN_140008410(lVar9 + 8);
            FUN_140008410(lVar9 + 0x28);
            FUN_140008410(lVar9 + 0x48);
            lVar9 = *(longlong *)(lVar10 + 0x18);
            if (lVar9 == 0) {
                lVar9 = *(longlong *)(lVar10 + 8);
                if (lVar10 == *(longlong *)(lVar9 + 0x18)) {
                    do {
                        lVar10 = lVar9;
                        lVar9 = *(longlong *)(lVar10 + 8);
                    } while (lVar10 == *(longlong *)(lVar9 + 0x18));
                }
                if (*(longlong *)(lVar10 + 0x18) != lVar9) {
                    lVar10 = lVar9;
                }
            }
            else {
                for (lVar3 = *(longlong *)(lVar9 + 0x10); lVar10 = lVar9, lVar3 != 0;
                     lVar3 = *(longlong *)(lVar3 + 0x10)) {
                    lVar9 = lVar3;
                }
            }
        } while (lVar10 != *(longlong *)(param_1 + 0x10));
    }
    local_res18 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10);
    if (local_res18 != *(longlong *)(param_1 + 0x30)) {
        do {
            lVar10 = local_res18;
            local_80 = 0;
            local_88 = 0;
            iVar7 = FUN_14048a580(*(undefined8 *)(local_res18 + 0x28),&local_88);
            if ((-1 < iVar7) && (local_res20 = 0, uVar13 = local_80, local_80 != 0)) {
                do {
                    uVar11 = local_res20;
                    uVar12 = 0;
                    local_60 = 0;
                    local_68 = 0;
                    iVar7 = FUN_14048a9e0(*(undefined8 *)(local_88 + local_res20 * 8),&local_68);
                    uVar6 = local_60;
                    lVar10 = local_68;
                    if ((-1 < iVar7) && (local_60 != 0)) {
                        do {
                            uVar11 = 0;
                            puVar2 = *(uint **)(lVar10 + uVar12 * 8);
                            local_70 = 0;
                            local_78 = 0;
                            iVar7 = FUN_14048ae40(puVar2);
                            uVar13 = local_70;
                            lVar9 = local_78;
                            if (iVar7 < 0) {
                                LAB_14048976c:
                                if (local_78 != 0) {
                                    (**(code **)(*(longlong *)(local_78 + -0x10) + 8))(local_78 + -0x10);
                                }
                            }
                            else {
                                lVar3 = *(longlong *)(param_1 + 0x10);
                                uVar1 = *puVar2;
                                lVar5 = lVar3;
                                lVar4 = *(longlong *)(lVar3 + 8);
                                while (lVar4 != 0) {
                                    if (*(uint *)(lVar4 + 0x20) < uVar1) {
                                        lVar4 = *(longlong *)(lVar4 + 0x18);
                                    }
                                    else {
                                        lVar5 = lVar4;
                                        lVar4 = *(longlong *)(lVar4 + 0x10);
                                    }
                                }
                                if ((lVar5 == lVar3) || (uVar1 < *(uint *)(lVar5 + 0x20))) {
                                    local_90 = lVar3;
                                    plVar8 = &local_90;
                                }
                                else {
                                    local_98 = lVar5;
                                    plVar8 = &local_98;
                                }
                                if ((*plVar8 == lVar3) || (lVar3 = *(longlong *)(*plVar8 + 0x28), lVar3 == 0))
                                    goto LAB_14048976c;
                                if (local_70 != 0) {
                                    do {
                                        local_res10[0] = **(undefined4 **)(lVar9 + uVar11 * 8);
                                        FUN_1400293c0(lVar3 + 8,local_58,local_res10);
                                        uVar11 = uVar11 + 1;
                                    } while (uVar11 < uVar13);
                                }
                                if (lVar9 != 0) {
                                    (**(code **)(*(longlong *)(lVar9 + -0x10) + 8))(lVar9 + -0x10);
                                }
                            }
                            uVar12 = uVar12 + 1;
                            uVar11 = local_res20;
                            uVar13 = local_80;
                        } while (uVar12 < uVar6);
                    }
                    if (local_68 != 0) {
                        (**(code **)(*(longlong *)(local_68 + -0x10) + 8))();
                    }
                    local_res20 = uVar11 + 1;
                    lVar10 = local_res18;
                } while (local_res20 < uVar13);
            }
            if (local_88 != 0) {
                (**(code **)(*(longlong *)(local_88 + -0x10) + 8))();
            }
            local_res18 = *(longlong *)(lVar10 + 0x18);
            if (local_res18 == 0) {
                lVar9 = *(longlong *)(lVar10 + 8);
                if (lVar10 == *(longlong *)(lVar9 + 0x18)) {
                    do {
                        lVar10 = lVar9;
                        lVar9 = *(longlong *)(lVar10 + 8);
                    } while (lVar10 == *(longlong *)(lVar9 + 0x18));
                }
                local_res18 = lVar10;
                if (*(longlong *)(lVar10 + 0x18) != lVar9) {
                    local_res18 = lVar9;
                }
            }
            else {
                for (lVar10 = *(longlong *)(local_res18 + 0x10); lVar10 != 0;
                     lVar10 = *(longlong *)(lVar10 + 0x10)) {
                    local_res18 = lVar10;
                }
            }
        } while (local_res18 != *(longlong *)(param_1 + 0x30));
    }
    return;
}



undefined8 FUN_140489910(void)

{
    int iVar1;
    longlong *plVar2;
    undefined *puVar3;

    if (DAT_140c65930 == (longlong *)0x0) {
        plVar2 = (longlong *)FUN_14018b280(0x130,0);
        if (plVar2 == (longlong *)0x0) {
            plVar2 = (longlong *)0x0;
        }
        else {
            FUN_140488890(plVar2);
            *plVar2 = (longlong)&PTR_LAB_140b671e8;
            puVar3 = (undefined *)FUN_14018b280(0x30);
            plVar2[0x22] = 0;
            plVar2[0x21] = (longlong)puVar3;
            *puVar3 = 0;
            *(undefined8 *)(plVar2[0x21] + 8) = 0;
            *(longlong *)(plVar2[0x21] + 0x10) = plVar2[0x21];
            *(longlong *)(plVar2[0x21] + 0x18) = plVar2[0x21];
        }
        DAT_140c65930 = plVar2;
        iVar1 = (**(code **)(*plVar2 + 8))(plVar2);
        if (iVar1 < 0) {
            if (DAT_140c65930 != (longlong *)0x0) {
                (**(code **)*DAT_140c65930)(DAT_140c65930,1);
            }
            DAT_140c65930 = (longlong *)0x0;
            return 0x80004005;
        }
    }
    return 0;
}



undefined8 FUN_140489a60(longlong param_1)

{
    int iVar1;

    iVar1 = FUN_140488fa0();
    if (iVar1 < 0) {
        return 0x80004005;
    }
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined4 *)(param_1 + 0x128) = 0;
    return 0;
}



void FUN_140489aa0(ulonglong param_1,uint param_2)

{
    uint uVar1;
    char *pcVar2;
    longlong lVar3;
    longlong lVar4;
    ulonglong uVar5;
    char *pcVar6;
    undefined8 *puVar7;
    uint uVar8;
    int iVar9;
    longlong lVar10;
    ulonglong uVar11;
    undefined *puVar12;
    undefined *puVar13;
    longlong lVar14;
    ulonglong *puVar15;
    char *pcVar16;
    char *pcVar17;
    undefined *puVar18;
    ulonglong uVar19;
    bool bVar20;
    ulonglong local_res8;
    uint local_res10;
    ulonglong local_res18;
    longlong local_res20;
    uint local_a0;
    undefined4 uStack156;
    undefined local_90 [8];
    undefined *local_88;
    longlong local_80;
    undefined local_70 [8];
    longlong local_68;
    longlong local_60;

    lVar4 = DAT_140c65930;
    *(undefined4 *)(DAT_140c65898 + 0x6f98) = 1;
    local_res8 = param_1;
    local_res10 = param_2;
    local_88 = (undefined *)FUN_14018b280(0x28);
    local_80 = 0;
    *local_88 = 0;
    *(undefined8 *)(local_88 + 8) = 0;
    *(undefined **)(local_88 + 0x10) = local_88;
    *(undefined **)(local_88 + 0x18) = local_88;
    lVar14 = *(longlong *)(*(longlong *)(lVar4 + 0x108) + 0x10);
    if (lVar14 != *(longlong *)(lVar4 + 0x108)) {
        do {
            uVar19 = *(ulonglong *)(*(longlong *)(lVar14 + 0x28) + 0x50);
            uVar5 = uVar19;
            uVar11 = *(ulonglong *)(uVar19 + 8);
            while (uVar11 != 0) {
                if (*(uint *)(uVar11 + 0x20) < *(uint *)(lVar14 + 0x20)) {
                    uVar11 = *(ulonglong *)(uVar11 + 0x18);
                }
                else {
                    uVar5 = uVar11;
                    uVar11 = *(ulonglong *)(uVar11 + 0x10);
                }
            }
            if ((uVar5 == uVar19) || (*(uint *)(lVar14 + 0x20) < *(uint *)(uVar5 + 0x20))) {
                local_res18 = uVar19;
                puVar15 = &local_res18;
            }
            else {
                local_res8 = uVar5;
                puVar15 = &local_res8;
            }
            if (*puVar15 != uVar19) {
                FUN_1400293c0(local_90,&local_a0);
            }
            lVar10 = *(longlong *)(lVar14 + 0x18);
            if (lVar10 == 0) {
                lVar10 = *(longlong *)(lVar14 + 8);
                if (lVar14 == *(longlong *)(lVar10 + 0x18)) {
                    do {
                        lVar14 = lVar10;
                        lVar10 = *(longlong *)(lVar14 + 8);
                    } while (lVar14 == *(longlong *)(lVar10 + 0x18));
                }
                if (*(longlong *)(lVar14 + 0x18) != lVar10) {
                    lVar14 = lVar10;
                }
            }
            else {
                for (lVar3 = *(longlong *)(lVar10 + 0x10); lVar14 = lVar10, lVar3 != 0;
                     lVar3 = *(longlong *)(lVar3 + 0x10)) {
                    lVar10 = lVar3;
                }
            }
        } while (lVar14 != *(longlong *)(lVar4 + 0x108));
    }
    FUN_140008410(lVar4 + 0x100);
    FUN_1404895e0(lVar4);
    local_res20 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x10);
    if (local_res20 != *(longlong *)(lVar4 + 0x10)) {
        do {
            lVar10 = local_res20;
            uVar19 = *(ulonglong *)(local_res20 + 0x28);
            local_res18 = uVar19;
            FUN_1403d2aa0(local_70,uVar19 + 8);
            uVar8 = local_res10;
            lVar14 = *(longlong *)(local_68 + 0x10);
            if (lVar14 != local_68) {
                LAB_140489c60:
                pcVar2 = *(char **)(lVar4 + 0x108);
                uVar1 = *(uint *)(lVar14 + 0x20);
                bVar20 = true;
                pcVar6 = pcVar2;
                pcVar17 = *(char **)(pcVar2 + 8);
                while (pcVar17 != (char *)0x0) {
                    bVar20 = uVar1 < *(uint *)(pcVar17 + 0x20);
                    pcVar6 = pcVar17;
                    if (bVar20) {
                        pcVar17 = *(char **)(pcVar17 + 0x10);
                    }
                    else {
                        pcVar17 = *(char **)(pcVar17 + 0x18);
                    }
                }
                pcVar17 = pcVar6;
                local_a0 = uVar1;
                if (bVar20) {
                    if (pcVar6 != *(char **)(pcVar2 + 0x10)) {
                        if ((*pcVar6 == '\0') && (*(char **)(*(longlong *)(pcVar6 + 8) + 8) == pcVar6)) {
                            pcVar17 = *(char **)(pcVar6 + 0x18);
                        }
                        else {
                            pcVar17 = *(char **)(pcVar6 + 0x10);
                            if (pcVar17 == (char *)0x0) {
                                pcVar17 = *(char **)(pcVar6 + 8);
                                pcVar16 = pcVar17;
                                if (pcVar6 == *(char **)(pcVar17 + 0x10)) {
                                    do {
                                        pcVar17 = *(char **)(pcVar16 + 8);
                                        bVar20 = pcVar16 == *(char **)(pcVar17 + 0x10);
                                        pcVar16 = pcVar17;
                                    } while (bVar20);
                                }
                            }
                            else {
                                for (pcVar16 = *(char **)(pcVar17 + 0x18); pcVar16 != (char *)0x0;
                                     pcVar16 = *(char **)(pcVar16 + 0x18)) {
                                    pcVar17 = pcVar16;
                                }
                            }
                        }
                        goto LAB_140489cfd;
                    }
                    LAB_140489d07:
                    if ((pcVar6 == pcVar2) || (uVar1 < *(uint *)(pcVar6 + 0x20))) {
                        lVar10 = FUN_14018b280(0x30);
                        if ((undefined8 *)(lVar10 + 0x20) != (undefined8 *)0x0) {
                            *(undefined8 *)(lVar10 + 0x20) = CONCAT44(uStack156,local_a0);
                            *(ulonglong *)(lVar10 + 0x28) = uVar19;
                        }
                        *(longlong *)(pcVar6 + 0x10) = lVar10;
                        pcVar2 = *(char **)(lVar4 + 0x108);
                        if (pcVar6 == pcVar2) {
                            *(longlong *)(pcVar2 + 8) = lVar10;
                            *(longlong *)(*(longlong *)(lVar4 + 0x108) + 0x18) = lVar10;
                        }
                        else if (pcVar6 == *(char **)(pcVar2 + 0x10)) {
                            *(longlong *)(pcVar2 + 0x10) = lVar10;
                        }
                    }
                    else {
                        lVar10 = FUN_14018b280(0x30);
                        if ((undefined8 *)(lVar10 + 0x20) != (undefined8 *)0x0) {
                            *(undefined8 *)(lVar10 + 0x20) = CONCAT44(uStack156,local_a0);
                            *(ulonglong *)(lVar10 + 0x28) = uVar19;
                        }
                        *(longlong *)(pcVar6 + 0x18) = lVar10;
                        if (pcVar6 == *(char **)(*(longlong *)(lVar4 + 0x108) + 0x18)) {
                            *(longlong *)(*(longlong *)(lVar4 + 0x108) + 0x18) = lVar10;
                        }
                    }
                    *(char **)(lVar10 + 8) = pcVar6;
                    *(undefined8 *)(lVar10 + 0x10) = 0;
                    *(undefined8 *)(lVar10 + 0x18) = 0;
                    FUN_1400081c0();
                    *(longlong *)(lVar4 + 0x110) = *(longlong *)(lVar4 + 0x110) + 1;
                }
                else {
                    LAB_140489cfd:
                    if (*(uint *)(pcVar17 + 0x20) < uVar1) goto LAB_140489d07;
                }
                puVar7 = DAT_140c65b80;
                local_res8 = local_res8 & 0xffffffff00000000 | (ulonglong)uVar1;
                uVar11 = (*(code *)DAT_140c65b80[4])(&local_res8);
                for (puVar15 = *(ulonglong **)(puVar7[3] + (uVar11 % (ulonglong)puVar7[2]) * 8);
                     uVar19 = local_res18, puVar15 != (ulonglong *)0x0; puVar15 = (ulonglong *)puVar15[1]) {
                    if ((uVar11 == *puVar15) &&
                        (iVar9 = (*(code *)puVar7[5])(&local_res8,puVar15 + 2), uVar19 = local_res18,
                                iVar9 != 0)) {
                        if ((puVar15 + 3 != (ulonglong *)0x0) && (uVar11 = puVar15[3], uVar11 != 0)) {
                            puVar12 = *(undefined **)(local_88 + 8);
                            puVar18 = local_88;
                            if (*(undefined **)(local_88 + 8) != (undefined *)0x0) goto LAB_140489e30;
                            goto LAB_140489f08;
                        }
                        break;
                    }
                }
                goto LAB_140489eb7;
            }
            LAB_140489f8d:
            if (local_60 != 0) {
                lVar14 = *(longlong *)(local_68 + 8);
                while (lVar14 != 0) {
                    FUN_1400083b0(local_70,*(undefined8 *)(lVar14 + 0x18));
                    lVar3 = *(longlong *)(lVar14 + 0x10);
                    FUN_14018b900(lVar14,0);
                    lVar14 = lVar3;
                }
                *(longlong *)(local_68 + 0x10) = local_68;
                *(undefined8 *)(local_68 + 8) = 0;
                *(longlong *)(local_68 + 0x18) = local_68;
                local_60 = 0;
            }
            FUN_14018b900(local_68,0);
            local_res20 = *(longlong *)(lVar10 + 0x18);
            if (local_res20 == 0) {
                lVar14 = *(longlong *)(lVar10 + 8);
                if (lVar10 == *(longlong *)(lVar14 + 0x18)) {
                    do {
                        lVar10 = lVar14;
                        lVar14 = *(longlong *)(lVar10 + 8);
                    } while (lVar10 == *(longlong *)(lVar14 + 0x18));
                }
                local_res20 = lVar10;
                if (*(longlong *)(lVar10 + 0x18) != lVar14) {
                    local_res20 = lVar14;
                }
            }
            else {
                for (lVar14 = *(longlong *)(local_res20 + 0x10); lVar14 != 0;
                     lVar14 = *(longlong *)(lVar14 + 0x10)) {
                    local_res20 = lVar14;
                }
            }
        } while (local_res20 != *(longlong *)(lVar4 + 0x10));
    }
    if (local_80 != 0) {
        lVar14 = *(longlong *)(local_88 + 8);
        while (lVar14 != 0) {
            FUN_1400083b0(local_90,*(undefined8 *)(lVar14 + 0x18));
            lVar4 = *(longlong *)(lVar14 + 0x10);
            FUN_14018b900(lVar14,0);
            lVar14 = lVar4;
        }
        *(undefined **)(local_88 + 0x10) = local_88;
        *(undefined8 *)(local_88 + 8) = 0;
        *(undefined **)(local_88 + 0x18) = local_88;
        local_80 = 0;
    }
    FUN_14018b900(local_88,0);
    return;
    LAB_140489e30:
    do {
        if (*(uint *)(puVar12 + 0x20) < uVar1) {
            puVar13 = *(undefined **)(puVar12 + 0x18);
        }
        else {
            puVar13 = *(undefined **)(puVar12 + 0x10);
            puVar18 = puVar12;
        }
        puVar12 = puVar13;
    } while (puVar13 != (undefined *)0x0);
    if ((puVar18 == local_88) || (uVar1 < *(uint *)(puVar18 + 0x20))) {
        LAB_140489f08:
        iVar9 = FUN_1405fbc40(*DAT_140c65b80,**(undefined4 **)(uVar11 + 8));
        if ((iVar9 == 1) ||
            (iVar9 = FUN_1405fbc40(*DAT_140c65b80,**(undefined4 **)(uVar11 + 8)), uVar19 = local_res18,
                    iVar9 == 2)) {
            uVar19 = local_res18;
            FUN_140488640(local_res18,uVar1);
        }
    }
    else {
        iVar9 = (*(undefined4 **)(uVar11 + 8))[0x6d];
        if (iVar9 == 1) {
            if ((uVar8 & 1) != 0) goto LAB_140489eb7;
        }
        else {
            if (iVar9 == 2) {
                bVar20 = (uVar8 & 2) == 0;
            }
            else if (iVar9 == 3) {
                bVar20 = (uVar8 & 4) == 0;
            }
            else {
                if (iVar9 != 4) {
                    local_res8 = 0x141e030e0;
                    FUN_1401a3130(0x1a,0,&local_res8,iVar9,**(undefined4 **)(uVar11 + 8));
                    uVar19 = local_res18;
                    FUN_1404886f0(local_res18,uVar1);
                    goto LAB_140489eb7;
                }
                bVar20 = (uVar8 & 8) == 0;
            }
            if (!bVar20) goto LAB_140489eb7;
        }
        FUN_1404886f0(local_res18,uVar1);
    }
    LAB_140489eb7:
    lVar10 = *(longlong *)(lVar14 + 0x18);
    if (lVar10 == 0) {
        lVar10 = *(longlong *)(lVar14 + 8);
        if (lVar14 == *(longlong *)(lVar10 + 0x18)) {
            do {
                lVar14 = lVar10;
                lVar10 = *(longlong *)(lVar14 + 8);
            } while (lVar14 == *(longlong *)(lVar10 + 0x18));
        }
        if (*(longlong *)(lVar14 + 0x18) != lVar10) {
            lVar14 = lVar10;
        }
    }
    else {
        for (lVar3 = *(longlong *)(lVar10 + 0x10); lVar14 = lVar10, lVar3 != 0;
             lVar3 = *(longlong *)(lVar3 + 0x10)) {
            lVar10 = lVar3;
        }
    }
    lVar10 = local_res20;
    if (lVar14 == local_68) goto LAB_140489f8d;
    goto LAB_140489c60;
}



undefined8 FUN_14048a0f0(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 uVar3;
    longlong local_res8;

    lVar1 = *(longlong *)(DAT_140c65930 + 0x108);
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
    if ((local_res8 != lVar1) && (*(longlong *)(local_res8 + 0x28) != 0)) {
        uVar3 = FUN_140488640();
        return uVar3;
    }
    return 0x80004005;
}



undefined8 FUN_14048a170(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 uVar3;
    longlong local_res8;

    lVar1 = *(longlong *)(DAT_140c65930 + 0x108);
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
    if ((local_res8 != lVar1) && (*(longlong *)(local_res8 + 0x28) != 0)) {
        uVar3 = FUN_1404887a0();
        return uVar3;
    }
    return 0x80004005;
}



ulonglong FUN_14048a1f0(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong *plVar3;
    ulonglong uVar4;
    longlong local_res8;

    lVar1 = *(longlong *)(DAT_140c65930 + 0x108);
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
    if ((local_res8 == lVar1) ||
        (plVar3 = *(longlong **)(local_res8 + 0x28), plVar3 == (longlong *)0x0)) {
        uVar4 = 0x80004005;
    }
    else {
        uVar4 = FUN_1404886f0(plVar3,param_2);
        if ((-1 < (int)uVar4) &&
            ((*(int *)(*plVar3 + 0x18) != 1 || (uVar4 = FUN_1404887a0(plVar3,param_2), -1 < (int)uVar4)))
                ) {
            return uVar4 & 0xffffffff;
        }
    }
    return uVar4;
}



bool FUN_14048a2b0(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    longlong *plVar2;
    undefined4 *puVar3;
    longlong lVar4;
    int iVar5;
    int iVar6;
    uint uVar7;
    longlong lVar8;
    uint uVar9;
    int iVar10;
    uint uVar11;
    uint uVar12;
    longlong local_res8;
    longlong local_28 [2];

    lVar4 = DAT_140c65930;
    lVar8 = *(longlong *)(DAT_140c65930 + 0x108);
    local_res8 = lVar8;
    lVar1 = *(longlong *)(lVar8 + 8);
    while (lVar1 != 0) {
        if (*(uint *)(lVar1 + 0x20) < param_2) {
            lVar1 = *(longlong *)(lVar1 + 0x18);
        }
        else {
            local_res8 = lVar1;
            lVar1 = *(longlong *)(lVar1 + 0x10);
        }
    }
    if ((local_res8 == lVar8) || (param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar8;
    }
    if ((local_res8 != lVar8) &&
        (plVar2 = *(longlong **)(local_res8 + 0x28), plVar2 != (longlong *)0x0)) {
        iVar10 = *(int *)(*plVar2 + 0x14);
        if ((iVar10 != 0) &&
            ((iVar6 = *(int *)(*plVar2 + 0x18), iVar6 != 0 &&
                                                (iVar5 = FUN_140488520(plVar2,param_2), iVar5 != 0)))) {
            if (iVar6 == 4) {
                iVar10 = -1;
                if (*(int *)(plVar2 + 7) != -1) {
                    iVar10 = *(int *)(plVar2 + 7);
                }
                iVar6 = 0;
                if (iVar10 != 0) {
                    iVar6 = iVar10;
                }
                return iVar6 == 0;
            }
            if ((iVar6 != 1) || (*(uint *)(lVar4 + 0x120 + (longlong)iVar10 * 4) == param_2)) {
                lVar8 = FUN_1405fd1d0(*DAT_140c65b80,local_28,iVar10);
                uVar7 = 0xffffffff;
                if (*(uint *)(lVar8 + 8) != 0xffffffff) {
                    uVar7 = *(uint *)(lVar8 + 8);
                }
                uVar12 = 0;
                if (uVar7 != 0) {
                    uVar12 = uVar7;
                }
                if (local_28[0] != 0) {
                    (**(code **)(*(longlong *)(local_28[0] + -0x10) + 8))(local_28[0] + -0x10);
                }
                uVar7 = FUN_1403abfe0(DAT_140c65898 + 0x1bf8,0x25);
                if ((((uVar7 <= uVar12) && (*(int *)(*plVar2 + 0x14) < 3)) &&
                     (puVar3 = *(undefined4 **)
                             (DAT_140c65930 + 0xa8 + (longlong)*(int *)(*plVar2 + 0x14) * 0x28),
                             puVar3 != (undefined4 *)0x0)) &&
                    (lVar8 = FUN_140489580(DAT_140c65930,*puVar3), lVar8 != 0)) {
                    uVar11 = 0xffffffff;
                    if (*(int *)(lVar8 + 0x38) != -1) {
                        uVar11 = *(uint *)(lVar8 + 0x38);
                    }
                    uVar9 = 0;
                    if (uVar11 != 0) {
                        uVar9 = uVar11;
                    }
                    uVar12 = uVar12 - uVar9;
                }
                return uVar12 < uVar7;
            }
        }
    }
    return false;
}



undefined8 FUN_14048a460(undefined8 param_1,undefined4 *param_2)

{
    undefined4 uVar1;
    longlong lVar2;

    lVar2 = DAT_140c65930;
    *(undefined4 *)(DAT_140c65930 + 0x120) = *param_2;
    *(undefined4 *)(lVar2 + 0x124) = param_2[1];
    uVar1 = param_2[2];
    *(undefined4 *)(lVar2 + 0x128) = uVar1;
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ContractGoodQualityChanged",&DAT_1409e9234,
                  *(undefined4 *)(lVar2 + 0x124),uVar1);
    return 0;
}



void FUN_14048a4c0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
    if (lVar3 != *(longlong *)(param_1 + 0x20)) {
        do {
            lVar2 = *(longlong *)(lVar3 + 0x28);
            if (lVar2 != 0) {
                FUN_14048b580(lVar2);
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
        } while (lVar3 != *(longlong *)(param_1 + 0x20));
    }
    FUN_140008410(param_1 + 0x18);
    FUN_140008410(param_1 + 0x18);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x20),0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_14048a580(int *param_1,longlong param_2)

{
    undefined8 uVar1;
    char *pcVar2;
    longlong lVar3;
    uint uVar4;
    longlong lVar5;
    longlong lVar6;
    char *pcVar7;
    uint uVar8;
    char *pcVar9;
    char *pcVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    bool bVar13;
    double dVar14;
    double dVar15;
    undefined4 uVar16;
    undefined4 uVar17;
    ulonglong local_res18;
    undefined local_80 [8];
    char *local_78;
    longlong local_70;

    *(undefined8 *)(param_2 + 8) = 0;
    if ((ulonglong)(uint)param_1[4] < *(ulonglong *)(param_1 + 10)) {
        FUN_14048b2a0(local_80,param_1 + 6);
        uVar8 = param_1[4];
        local_res18 = *(ulonglong *)(param_1 + 2);
        if ((uint)param_1[10] < uVar8) {
            uVar8 = param_1[10];
        }
        uVar12 = (ulonglong)uVar8;
        if (uVar8 != 0) {
            uVar16 = 0;
            uVar17 = 0x43f00000;
            do {
                uVar8 = 0;
                uVar4 = uVar8;
                if (1 < local_res18) {
                    (**(code **)(*DAT_140c65940 + 0x10))
                            (DAT_140c65940,*param_1 + (int)uVar12 + _DAT_140c65938);
                    dVar14 = (double)(**(code **)(*DAT_140c65940 + 0x30))();
                    dVar15 = (double)local_res18;
                    if ((longlong)local_res18 < 0) {
                        dVar15 = dVar15 + (double)CONCAT44(uVar17,uVar16);
                    }
                    uVar4 = (uint)(longlong)(dVar14 * dVar15);
                }
                pcVar7 = *(char **)(local_78 + 8);
                pcVar10 = local_78;
                while (pcVar2 = pcVar7, pcVar2 != (char *)0x0) {
                    if (*(ulonglong *)(pcVar2 + 0x20) < (ulonglong)(uVar4 + 1)) {
                        pcVar7 = *(char **)(pcVar2 + 0x18);
                    }
                    else {
                        pcVar7 = *(char **)(pcVar2 + 0x10);
                        pcVar10 = pcVar2;
                    }
                }
                if (pcVar10 == local_78) {
                    FUN_140008410(local_80);
                    FUN_14018b900(local_78,0);
                    return 0x80004005;
                }
                FUN_140033260();
                if (1 < uVar12) {
                    if ((*(undefined4 **)(pcVar10 + 0x28) != (undefined4 *)0x0) &&
                        (lVar6 = FUN_1401fb5a0(**(undefined4 **)(pcVar10 + 0x28)), lVar6 != 0)) {
                        uVar8 = *(uint *)(lVar6 + 0xc);
                    }
                    pcVar7 = *(char **)(pcVar10 + 0x18);
                    if (pcVar7 == (char *)0x0) {
                        pcVar7 = *(char **)(pcVar10 + 8);
                        if (pcVar10 == *(char **)(pcVar7 + 0x18)) {
                            do {
                                pcVar10 = pcVar7;
                                pcVar7 = *(char **)(pcVar10 + 8);
                            } while (pcVar10 == *(char **)(pcVar7 + 0x18));
                        }
                        if (*(char **)(pcVar10 + 0x18) != pcVar7) {
                            pcVar10 = pcVar7;
                        }
                    }
                    else {
                        for (pcVar2 = *(char **)(pcVar7 + 0x10); pcVar10 = pcVar7, pcVar2 != (char *)0x0;
                             pcVar2 = *(char **)(pcVar2 + 0x10)) {
                            pcVar7 = pcVar2;
                        }
                    }
                    FUN_14048b480();
                    if (pcVar10 != local_78) {
                        do {
                            uVar1 = *(undefined8 *)(pcVar10 + 0x28);
                            uVar11 = *(longlong *)(pcVar10 + 0x20) - (ulonglong)uVar8;
                            bVar13 = true;
                            pcVar7 = *(char **)(local_78 + 8);
                            pcVar2 = local_78;
                            while (pcVar7 != (char *)0x0) {
                                bVar13 = uVar11 < *(ulonglong *)(pcVar7 + 0x20);
                                pcVar2 = pcVar7;
                                if (bVar13) {
                                    pcVar7 = *(char **)(pcVar7 + 0x10);
                                }
                                else {
                                    pcVar7 = *(char **)(pcVar7 + 0x18);
                                }
                            }
                            pcVar7 = pcVar2;
                            if (bVar13) {
                                if (pcVar2 != *(char **)(local_78 + 0x10)) {
                                    if ((*pcVar2 == '\0') && (*(char **)(*(longlong *)(pcVar2 + 8) + 8) == pcVar2)) {
                                        pcVar7 = *(char **)(pcVar2 + 0x18);
                                    }
                                    else {
                                        pcVar7 = *(char **)(pcVar2 + 0x10);
                                        if (pcVar7 == (char *)0x0) {
                                            pcVar7 = *(char **)(pcVar2 + 8);
                                            pcVar9 = pcVar7;
                                            if (pcVar2 == *(char **)(pcVar7 + 0x10)) {
                                                do {
                                                    pcVar7 = *(char **)(pcVar9 + 8);
                                                    bVar13 = pcVar9 == *(char **)(pcVar7 + 0x10);
                                                    pcVar9 = pcVar7;
                                                } while (bVar13);
                                            }
                                        }
                                        else {
                                            for (pcVar9 = *(char **)(pcVar7 + 0x18); pcVar9 != (char *)0x0;
                                                 pcVar9 = *(char **)(pcVar9 + 0x18)) {
                                                pcVar7 = pcVar9;
                                            }
                                        }
                                    }
                                    goto LAB_14048a83d;
                                }
                                LAB_14048a847:
                                if ((pcVar2 == local_78) || (uVar11 < *(ulonglong *)(pcVar2 + 0x20))) {
                                    lVar6 = FUN_14018b280(0x30);
                                    if ((ulonglong *)(lVar6 + 0x20) != (ulonglong *)0x0) {
                                        *(ulonglong *)(lVar6 + 0x20) = uVar11;
                                        *(undefined8 *)(lVar6 + 0x28) = uVar1;
                                    }
                                    *(longlong *)(pcVar2 + 0x10) = lVar6;
                                    if (pcVar2 == local_78) {
                                        *(longlong *)(local_78 + 8) = lVar6;
                                        *(longlong *)(local_78 + 0x18) = lVar6;
                                    }
                                    else if (pcVar2 == *(char **)(local_78 + 0x10)) {
                                        *(longlong *)(local_78 + 0x10) = lVar6;
                                    }
                                }
                                else {
                                    lVar6 = FUN_14018b280(0x30);
                                    if ((ulonglong *)(lVar6 + 0x20) != (ulonglong *)0x0) {
                                        *(ulonglong *)(lVar6 + 0x20) = uVar11;
                                        *(undefined8 *)(lVar6 + 0x28) = uVar1;
                                    }
                                    *(longlong *)(pcVar2 + 0x18) = lVar6;
                                    if (pcVar2 == *(char **)(local_78 + 0x18)) {
                                        *(longlong *)(local_78 + 0x18) = lVar6;
                                    }
                                }
                                *(char **)(lVar6 + 8) = pcVar2;
                                *(undefined8 *)(lVar6 + 0x10) = 0;
                                *(undefined8 *)(lVar6 + 0x18) = 0;
                                FUN_1400081c0(lVar6,local_78 + 8);
                                local_70 = local_70 + 1;
                            }
                            else {
                                LAB_14048a83d:
                                if (*(ulonglong *)(pcVar7 + 0x20) < uVar11) goto LAB_14048a847;
                            }
                            pcVar7 = *(char **)(pcVar10 + 0x18);
                            if (pcVar7 == (char *)0x0) {
                                pcVar7 = *(char **)(pcVar10 + 8);
                                if (pcVar10 == *(char **)(pcVar7 + 0x18)) {
                                    do {
                                        pcVar10 = pcVar7;
                                        pcVar7 = *(char **)(pcVar10 + 8);
                                    } while (pcVar10 == *(char **)(pcVar7 + 0x18));
                                }
                                if (*(char **)(pcVar10 + 0x18) != pcVar7) {
                                    pcVar10 = pcVar7;
                                }
                            }
                            else {
                                for (pcVar2 = *(char **)(pcVar7 + 0x10); pcVar10 = pcVar7, pcVar2 != (char *)0x0;
                                     pcVar2 = *(char **)(pcVar2 + 0x10)) {
                                    pcVar7 = pcVar2;
                                }
                            }
                            FUN_14048b480();
                        } while (pcVar10 != local_78);
                    }
                    local_res18 = local_res18 - uVar8;
                }
                uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
        }
        FUN_140008410(local_80);
        FUN_14018b900(local_78,0);
    }
    else {
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
        if (lVar6 != *(longlong *)(param_1 + 8)) {
            do {
                FUN_140033260(param_2,lVar6 + 0x28);
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
                    for (lVar3 = *(longlong *)(lVar5 + 0x10); lVar6 = lVar5, lVar3 != 0;
                         lVar3 = *(longlong *)(lVar3 + 0x10)) {
                        lVar5 = lVar3;
                    }
                }
            } while (lVar6 != *(longlong *)(param_1 + 8));
        }
    }
    return (ulonglong)(*(longlong *)(param_2 + 8) == 0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_14048a9e0(int *param_1,longlong param_2)

{
    undefined8 uVar1;
    char *pcVar2;
    longlong lVar3;
    uint uVar4;
    longlong lVar5;
    longlong lVar6;
    char *pcVar7;
    uint uVar8;
    char *pcVar9;
    char *pcVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    bool bVar13;
    double dVar14;
    double dVar15;
    undefined4 uVar16;
    undefined4 uVar17;
    ulonglong local_res18;
    undefined local_80 [8];
    char *local_78;
    longlong local_70;

    *(undefined8 *)(param_2 + 8) = 0;
    if ((ulonglong)(uint)param_1[4] < *(ulonglong *)(param_1 + 10)) {
        FUN_14048b2a0(local_80,param_1 + 6);
        uVar8 = param_1[4];
        local_res18 = *(ulonglong *)(param_1 + 2);
        if ((uint)param_1[10] < uVar8) {
            uVar8 = param_1[10];
        }
        uVar12 = (ulonglong)uVar8;
        if (uVar8 != 0) {
            uVar16 = 0;
            uVar17 = 0x43f00000;
            do {
                uVar8 = 0;
                uVar4 = uVar8;
                if (1 < local_res18) {
                    (**(code **)(*DAT_140c65940 + 0x10))
                            (DAT_140c65940,*param_1 + (int)uVar12 + _DAT_140c65938);
                    dVar14 = (double)(**(code **)(*DAT_140c65940 + 0x30))();
                    dVar15 = (double)local_res18;
                    if ((longlong)local_res18 < 0) {
                        dVar15 = dVar15 + (double)CONCAT44(uVar17,uVar16);
                    }
                    uVar4 = (uint)(longlong)(dVar14 * dVar15);
                }
                pcVar7 = *(char **)(local_78 + 8);
                pcVar10 = local_78;
                while (pcVar2 = pcVar7, pcVar2 != (char *)0x0) {
                    if (*(ulonglong *)(pcVar2 + 0x20) < (ulonglong)(uVar4 + 1)) {
                        pcVar7 = *(char **)(pcVar2 + 0x18);
                    }
                    else {
                        pcVar7 = *(char **)(pcVar2 + 0x10);
                        pcVar10 = pcVar2;
                    }
                }
                if (pcVar10 == local_78) {
                    FUN_140008410(local_80);
                    FUN_14018b900(local_78,0);
                    return 0x80004005;
                }
                FUN_140033260();
                if (1 < uVar12) {
                    if ((*(undefined4 **)(pcVar10 + 0x28) != (undefined4 *)0x0) &&
                        (lVar6 = FUN_1401fb9e0(**(undefined4 **)(pcVar10 + 0x28)), lVar6 != 0)) {
                        uVar8 = *(uint *)(lVar6 + 0x10);
                    }
                    pcVar7 = *(char **)(pcVar10 + 0x18);
                    if (pcVar7 == (char *)0x0) {
                        pcVar7 = *(char **)(pcVar10 + 8);
                        if (pcVar10 == *(char **)(pcVar7 + 0x18)) {
                            do {
                                pcVar10 = pcVar7;
                                pcVar7 = *(char **)(pcVar10 + 8);
                            } while (pcVar10 == *(char **)(pcVar7 + 0x18));
                        }
                        if (*(char **)(pcVar10 + 0x18) != pcVar7) {
                            pcVar10 = pcVar7;
                        }
                    }
                    else {
                        for (pcVar2 = *(char **)(pcVar7 + 0x10); pcVar10 = pcVar7, pcVar2 != (char *)0x0;
                             pcVar2 = *(char **)(pcVar2 + 0x10)) {
                            pcVar7 = pcVar2;
                        }
                    }
                    FUN_14048b640();
                    if (pcVar10 != local_78) {
                        do {
                            uVar1 = *(undefined8 *)(pcVar10 + 0x28);
                            uVar11 = *(longlong *)(pcVar10 + 0x20) - (ulonglong)uVar8;
                            bVar13 = true;
                            pcVar7 = *(char **)(local_78 + 8);
                            pcVar2 = local_78;
                            while (pcVar7 != (char *)0x0) {
                                bVar13 = uVar11 < *(ulonglong *)(pcVar7 + 0x20);
                                pcVar2 = pcVar7;
                                if (bVar13) {
                                    pcVar7 = *(char **)(pcVar7 + 0x10);
                                }
                                else {
                                    pcVar7 = *(char **)(pcVar7 + 0x18);
                                }
                            }
                            pcVar7 = pcVar2;
                            if (bVar13) {
                                if (pcVar2 != *(char **)(local_78 + 0x10)) {
                                    if ((*pcVar2 == '\0') && (*(char **)(*(longlong *)(pcVar2 + 8) + 8) == pcVar2)) {
                                        pcVar7 = *(char **)(pcVar2 + 0x18);
                                    }
                                    else {
                                        pcVar7 = *(char **)(pcVar2 + 0x10);
                                        if (pcVar7 == (char *)0x0) {
                                            pcVar7 = *(char **)(pcVar2 + 8);
                                            pcVar9 = pcVar7;
                                            if (pcVar2 == *(char **)(pcVar7 + 0x10)) {
                                                do {
                                                    pcVar7 = *(char **)(pcVar9 + 8);
                                                    bVar13 = pcVar9 == *(char **)(pcVar7 + 0x10);
                                                    pcVar9 = pcVar7;
                                                } while (bVar13);
                                            }
                                        }
                                        else {
                                            for (pcVar9 = *(char **)(pcVar7 + 0x18); pcVar9 != (char *)0x0;
                                                 pcVar9 = *(char **)(pcVar9 + 0x18)) {
                                                pcVar7 = pcVar9;
                                            }
                                        }
                                    }
                                    goto LAB_14048ac9d;
                                }
                                LAB_14048aca7:
                                if ((pcVar2 == local_78) || (uVar11 < *(ulonglong *)(pcVar2 + 0x20))) {
                                    lVar6 = FUN_14018b280(0x30);
                                    if ((ulonglong *)(lVar6 + 0x20) != (ulonglong *)0x0) {
                                        *(ulonglong *)(lVar6 + 0x20) = uVar11;
                                        *(undefined8 *)(lVar6 + 0x28) = uVar1;
                                    }
                                    *(longlong *)(pcVar2 + 0x10) = lVar6;
                                    if (pcVar2 == local_78) {
                                        *(longlong *)(local_78 + 8) = lVar6;
                                        *(longlong *)(local_78 + 0x18) = lVar6;
                                    }
                                    else if (pcVar2 == *(char **)(local_78 + 0x10)) {
                                        *(longlong *)(local_78 + 0x10) = lVar6;
                                    }
                                }
                                else {
                                    lVar6 = FUN_14018b280(0x30);
                                    if ((ulonglong *)(lVar6 + 0x20) != (ulonglong *)0x0) {
                                        *(ulonglong *)(lVar6 + 0x20) = uVar11;
                                        *(undefined8 *)(lVar6 + 0x28) = uVar1;
                                    }
                                    *(longlong *)(pcVar2 + 0x18) = lVar6;
                                    if (pcVar2 == *(char **)(local_78 + 0x18)) {
                                        *(longlong *)(local_78 + 0x18) = lVar6;
                                    }
                                }
                                *(char **)(lVar6 + 8) = pcVar2;
                                *(undefined8 *)(lVar6 + 0x10) = 0;
                                *(undefined8 *)(lVar6 + 0x18) = 0;
                                FUN_1400081c0(lVar6,local_78 + 8);
                                local_70 = local_70 + 1;
                            }
                            else {
                                LAB_14048ac9d:
                                if (*(ulonglong *)(pcVar7 + 0x20) < uVar11) goto LAB_14048aca7;
                            }
                            pcVar7 = *(char **)(pcVar10 + 0x18);
                            if (pcVar7 == (char *)0x0) {
                                pcVar7 = *(char **)(pcVar10 + 8);
                                if (pcVar10 == *(char **)(pcVar7 + 0x18)) {
                                    do {
                                        pcVar10 = pcVar7;
                                        pcVar7 = *(char **)(pcVar10 + 8);
                                    } while (pcVar10 == *(char **)(pcVar7 + 0x18));
                                }
                                if (*(char **)(pcVar10 + 0x18) != pcVar7) {
                                    pcVar10 = pcVar7;
                                }
                            }
                            else {
                                for (pcVar2 = *(char **)(pcVar7 + 0x10); pcVar10 = pcVar7, pcVar2 != (char *)0x0;
                                     pcVar2 = *(char **)(pcVar2 + 0x10)) {
                                    pcVar7 = pcVar2;
                                }
                            }
                            FUN_14048b640();
                        } while (pcVar10 != local_78);
                    }
                    local_res18 = local_res18 - uVar8;
                }
                uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
        }
        FUN_140008410(local_80);
        FUN_14018b900(local_78,0);
    }
    else {
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
        if (lVar6 != *(longlong *)(param_1 + 8)) {
            do {
                FUN_140033260(param_2,lVar6 + 0x28);
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
                    for (lVar3 = *(longlong *)(lVar5 + 0x10); lVar6 = lVar5, lVar3 != 0;
                         lVar3 = *(longlong *)(lVar3 + 0x10)) {
                        lVar5 = lVar3;
                    }
                }
            } while (lVar6 != *(longlong *)(param_1 + 8));
        }
    }
    return (ulonglong)(*(longlong *)(param_2 + 8) == 0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_14048ae40(int *param_1,longlong param_2)

{
    undefined8 uVar1;
    char *pcVar2;
    longlong lVar3;
    uint uVar4;
    longlong lVar5;
    longlong lVar6;
    char *pcVar7;
    uint uVar8;
    char *pcVar9;
    char *pcVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    bool bVar13;
    double dVar14;
    double dVar15;
    undefined4 uVar16;
    undefined4 uVar17;
    ulonglong local_res18;
    undefined local_80 [8];
    char *local_78;
    longlong local_70;

    *(undefined8 *)(param_2 + 8) = 0;
    if ((ulonglong)(uint)param_1[4] < *(ulonglong *)(param_1 + 10)) {
        FUN_14048b2a0(local_80,param_1 + 6);
        uVar8 = param_1[4];
        local_res18 = *(ulonglong *)(param_1 + 2);
        if ((uint)param_1[10] < uVar8) {
            uVar8 = param_1[10];
        }
        uVar12 = (ulonglong)uVar8;
        if (uVar8 != 0) {
            uVar16 = 0;
            uVar17 = 0x43f00000;
            do {
                uVar8 = 0;
                uVar4 = uVar8;
                if (1 < local_res18) {
                    (**(code **)(*DAT_140c65940 + 0x10))
                            (DAT_140c65940,*param_1 + (int)uVar12 + _DAT_140c65938);
                    dVar14 = (double)(**(code **)(*DAT_140c65940 + 0x30))();
                    dVar15 = (double)local_res18;
                    if ((longlong)local_res18 < 0) {
                        dVar15 = dVar15 + (double)CONCAT44(uVar17,uVar16);
                    }
                    uVar4 = (uint)(longlong)(dVar14 * dVar15);
                }
                pcVar7 = *(char **)(local_78 + 8);
                pcVar10 = local_78;
                while (pcVar2 = pcVar7, pcVar2 != (char *)0x0) {
                    if (*(ulonglong *)(pcVar2 + 0x20) < (ulonglong)(uVar4 + 1)) {
                        pcVar7 = *(char **)(pcVar2 + 0x18);
                    }
                    else {
                        pcVar7 = *(char **)(pcVar2 + 0x10);
                        pcVar10 = pcVar2;
                    }
                }
                if (pcVar10 == local_78) {
                    FUN_140008410(local_80);
                    FUN_14018b900(local_78,0);
                    return 0x80004005;
                }
                FUN_140033260();
                if (1 < uVar12) {
                    if ((*(undefined4 **)(pcVar10 + 0x28) != (undefined4 *)0x0) &&
                        (lVar6 = FUN_14022aa80(**(undefined4 **)(pcVar10 + 0x28)), lVar6 != 0)) {
                        uVar8 = *(uint *)(lVar6 + 0x1b0);
                    }
                    pcVar7 = *(char **)(pcVar10 + 0x18);
                    if (pcVar7 == (char *)0x0) {
                        pcVar7 = *(char **)(pcVar10 + 8);
                        if (pcVar10 == *(char **)(pcVar7 + 0x18)) {
                            do {
                                pcVar10 = pcVar7;
                                pcVar7 = *(char **)(pcVar10 + 8);
                            } while (pcVar10 == *(char **)(pcVar7 + 0x18));
                        }
                        if (*(char **)(pcVar10 + 0x18) != pcVar7) {
                            pcVar10 = pcVar7;
                        }
                    }
                    else {
                        for (pcVar2 = *(char **)(pcVar7 + 0x10); pcVar10 = pcVar7, pcVar2 != (char *)0x0;
                             pcVar2 = *(char **)(pcVar2 + 0x10)) {
                            pcVar7 = pcVar2;
                        }
                    }
                    FUN_14048b740();
                    if (pcVar10 != local_78) {
                        do {
                            uVar1 = *(undefined8 *)(pcVar10 + 0x28);
                            uVar11 = *(longlong *)(pcVar10 + 0x20) - (ulonglong)uVar8;
                            bVar13 = true;
                            pcVar7 = *(char **)(local_78 + 8);
                            pcVar2 = local_78;
                            while (pcVar7 != (char *)0x0) {
                                bVar13 = uVar11 < *(ulonglong *)(pcVar7 + 0x20);
                                pcVar2 = pcVar7;
                                if (bVar13) {
                                    pcVar7 = *(char **)(pcVar7 + 0x10);
                                }
                                else {
                                    pcVar7 = *(char **)(pcVar7 + 0x18);
                                }
                            }
                            pcVar7 = pcVar2;
                            if (bVar13) {
                                if (pcVar2 != *(char **)(local_78 + 0x10)) {
                                    if ((*pcVar2 == '\0') && (*(char **)(*(longlong *)(pcVar2 + 8) + 8) == pcVar2)) {
                                        pcVar7 = *(char **)(pcVar2 + 0x18);
                                    }
                                    else {
                                        pcVar7 = *(char **)(pcVar2 + 0x10);
                                        if (pcVar7 == (char *)0x0) {
                                            pcVar7 = *(char **)(pcVar2 + 8);
                                            pcVar9 = pcVar7;
                                            if (pcVar2 == *(char **)(pcVar7 + 0x10)) {
                                                do {
                                                    pcVar7 = *(char **)(pcVar9 + 8);
                                                    bVar13 = pcVar9 == *(char **)(pcVar7 + 0x10);
                                                    pcVar9 = pcVar7;
                                                } while (bVar13);
                                            }
                                        }
                                        else {
                                            for (pcVar9 = *(char **)(pcVar7 + 0x18); pcVar9 != (char *)0x0;
                                                 pcVar9 = *(char **)(pcVar9 + 0x18)) {
                                                pcVar7 = pcVar9;
                                            }
                                        }
                                    }
                                    goto LAB_14048b0fd;
                                }
                                LAB_14048b107:
                                if ((pcVar2 == local_78) || (uVar11 < *(ulonglong *)(pcVar2 + 0x20))) {
                                    lVar6 = FUN_14018b280(0x30);
                                    if ((ulonglong *)(lVar6 + 0x20) != (ulonglong *)0x0) {
                                        *(ulonglong *)(lVar6 + 0x20) = uVar11;
                                        *(undefined8 *)(lVar6 + 0x28) = uVar1;
                                    }
                                    *(longlong *)(pcVar2 + 0x10) = lVar6;
                                    if (pcVar2 == local_78) {
                                        *(longlong *)(local_78 + 8) = lVar6;
                                        *(longlong *)(local_78 + 0x18) = lVar6;
                                    }
                                    else if (pcVar2 == *(char **)(local_78 + 0x10)) {
                                        *(longlong *)(local_78 + 0x10) = lVar6;
                                    }
                                }
                                else {
                                    lVar6 = FUN_14018b280(0x30);
                                    if ((ulonglong *)(lVar6 + 0x20) != (ulonglong *)0x0) {
                                        *(ulonglong *)(lVar6 + 0x20) = uVar11;
                                        *(undefined8 *)(lVar6 + 0x28) = uVar1;
                                    }
                                    *(longlong *)(pcVar2 + 0x18) = lVar6;
                                    if (pcVar2 == *(char **)(local_78 + 0x18)) {
                                        *(longlong *)(local_78 + 0x18) = lVar6;
                                    }
                                }
                                *(char **)(lVar6 + 8) = pcVar2;
                                *(undefined8 *)(lVar6 + 0x10) = 0;
                                *(undefined8 *)(lVar6 + 0x18) = 0;
                                FUN_1400081c0(lVar6,local_78 + 8);
                                local_70 = local_70 + 1;
                            }
                            else {
                                LAB_14048b0fd:
                                if (*(ulonglong *)(pcVar7 + 0x20) < uVar11) goto LAB_14048b107;
                            }
                            pcVar7 = *(char **)(pcVar10 + 0x18);
                            if (pcVar7 == (char *)0x0) {
                                pcVar7 = *(char **)(pcVar10 + 8);
                                if (pcVar10 == *(char **)(pcVar7 + 0x18)) {
                                    do {
                                        pcVar10 = pcVar7;
                                        pcVar7 = *(char **)(pcVar10 + 8);
                                    } while (pcVar10 == *(char **)(pcVar7 + 0x18));
                                }
                                if (*(char **)(pcVar10 + 0x18) != pcVar7) {
                                    pcVar10 = pcVar7;
                                }
                            }
                            else {
                                for (pcVar2 = *(char **)(pcVar7 + 0x10); pcVar10 = pcVar7, pcVar2 != (char *)0x0;
                                     pcVar2 = *(char **)(pcVar2 + 0x10)) {
                                    pcVar7 = pcVar2;
                                }
                            }
                            FUN_14048b740();
                        } while (pcVar10 != local_78);
                    }
                    local_res18 = local_res18 - uVar8;
                }
                uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
        }
        FUN_140008410(local_80);
        FUN_14018b900(local_78,0);
    }
    else {
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
        if (lVar6 != *(longlong *)(param_1 + 8)) {
            do {
                FUN_140033260(param_2,lVar6 + 0x28);
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
                    for (lVar3 = *(longlong *)(lVar5 + 0x10); lVar6 = lVar5, lVar3 != 0;
                         lVar3 = *(longlong *)(lVar3 + 0x10)) {
                        lVar5 = lVar3;
                    }
                }
            } while (lVar6 != *(longlong *)(param_1 + 8));
        }
    }
    return (ulonglong)(*(longlong *)(param_2 + 8) == 0);
}



longlong FUN_14048b2a0(longlong param_1,longlong param_2)

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
        uVar4 = FUN_14048b370(param_1,*(undefined8 *)(*(longlong *)(param_2 + 8) + 8),lVar1);
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



undefined * FUN_14048b370(undefined8 param_1,undefined *param_2,undefined8 param_3)

{
    undefined uVar1;
    undefined *puVar2;
    undefined8 uVar3;
    undefined *puVar4;
    undefined *puVar5;
    undefined *puVar6;

    puVar2 = (undefined *)FUN_14018b280();
    if ((undefined8 *)(puVar2 + 0x20) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar2 + 0x20) = *(undefined8 *)(param_2 + 0x20);
        *(undefined8 *)(puVar2 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    }
    uVar1 = *param_2;
    *(undefined8 *)(puVar2 + 8) = param_3;
    *(undefined8 *)(puVar2 + 0x10) = 0;
    *(undefined8 *)(puVar2 + 0x18) = 0;
    *puVar2 = uVar1;
    if (*(longlong *)(param_2 + 0x18) != 0) {
        uVar3 = FUN_14048b370(param_1,*(longlong *)(param_2 + 0x18),puVar2);
        *(undefined8 *)(puVar2 + 0x18) = uVar3;
    }
    puVar6 = *(undefined **)(param_2 + 0x10);
    puVar5 = puVar2;
    if (puVar6 == (undefined *)0x0) {
        return puVar2;
    }
    do {
        puVar4 = (undefined *)FUN_14018b280(0x30);
        if ((undefined8 *)(puVar4 + 0x20) != (undefined8 *)0x0) {
            *(undefined8 *)(puVar4 + 0x20) = *(undefined8 *)(puVar6 + 0x20);
            *(undefined8 *)(puVar4 + 0x28) = *(undefined8 *)(puVar6 + 0x28);
        }
        *puVar4 = *puVar6;
        *(undefined8 *)(puVar4 + 0x10) = 0;
        *(undefined8 *)(puVar4 + 0x18) = 0;
        *(undefined **)(puVar5 + 0x10) = puVar4;
        *(undefined **)(puVar4 + 8) = puVar5;
        if (*(longlong *)(puVar6 + 0x18) != 0) {
            uVar3 = FUN_14048b370(param_1,*(longlong *)(puVar6 + 0x18),puVar4);
            *(undefined8 *)(puVar4 + 0x18) = uVar3;
        }
        puVar6 = *(undefined **)(puVar6 + 0x10);
        puVar5 = puVar4;
    } while (puVar6 != (undefined *)0x0);
    return puVar2;
}



void FUN_14048b480(longlong param_1,longlong *param_2)

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
        iVar2 = FUN_1401971e0(&DAT_140c8acf4,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x00014048b546. Too many branches
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



void FUN_14048b580(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
    if (lVar3 != *(longlong *)(param_1 + 0x20)) {
        do {
            lVar2 = *(longlong *)(lVar3 + 0x28);
            if (lVar2 != 0) {
                FUN_14048b840(lVar2);
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
        } while (lVar3 != *(longlong *)(param_1 + 0x20));
    }
    FUN_140008410(param_1 + 0x18);
    FUN_140008410(param_1 + 0x18);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x20),0);
    return;
}



void FUN_14048b640(longlong param_1,longlong *param_2)

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
        iVar2 = FUN_1401971e0(&DAT_140c8acf0,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x00014048b706. Too many branches
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



void FUN_14048b740(longlong param_1,longlong *param_2)

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
        iVar2 = FUN_1401971e0(&DAT_140c8acf8,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x00014048b806. Too many branches
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



void FUN_14048b840(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
    if (lVar3 != *(longlong *)(param_1 + 0x20)) {
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
        } while (lVar3 != *(longlong *)(param_1 + 0x20));
    }
    FUN_140008410(param_1 + 0x18);
    FUN_140008410(param_1 + 0x18);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x20),0);
    return;
}



int FUN_14048b8f0(void)

{
    int iVar1;
    longlong lVar2;

    if (DAT_140c65b80 == 0) {
        lVar2 = FUN_14018b280(0x98,0);
        if (lVar2 == 0) {
            DAT_140c65b80 = 0;
        }
        else {
            DAT_140c65b80 = FUN_1405a7910(lVar2);
        }
        iVar1 = FUN_1405a7c90();
        lVar2 = DAT_140c65b80;
        if ((iVar1 < 0) && (DAT_140c65b80 != 0)) {
            FUN_1405a7a30(DAT_140c65b80);
            FUN_14018b900(lVar2,0);
        }
        return iVar1;
    }
    return 0;
}



undefined8 FUN_14048b980(void)

{
    longlong lVar1;

    if (DAT_140c65b80 != (longlong *)0x0) {
        lVar1 = *DAT_140c65b80;
        *(undefined4 *)(lVar1 + 0x90) = 0;
        FUN_1403fc230(lVar1 + 0x60);
        if (*(longlong *)(lVar1 + 0x10) != 0) {
            FUN_1405a9660(lVar1,*(undefined8 *)(*(longlong *)(lVar1 + 8) + 8));
            *(longlong *)(*(longlong *)(lVar1 + 8) + 0x10) = *(longlong *)(lVar1 + 8);
            *(undefined8 *)(*(longlong *)(lVar1 + 8) + 8) = 0;
            *(longlong *)(*(longlong *)(lVar1 + 8) + 0x18) = *(longlong *)(lVar1 + 8);
            *(undefined8 *)(lVar1 + 0x10) = 0;
        }
        FUN_140008410(lVar1 + 0x20);
        FUN_140008410(lVar1 + 0x40);
        FUN_1405a89b0();
    }
    return 0;
}



void FUN_14048ba10(longlong param_1,longlong param_2)

{
    short sVar1;
    uint uVar2;
    int iVar3;
    undefined4 uVar4;
    undefined2 *puVar5;
    undefined8 uVar6;
    undefined8 uVar7;
    longlong lVar8;
    short *psVar9;
    longlong lVar10;
    longlong lVar11;
    undefined4 uVar12;
    undefined auStack696 [32];
    undefined4 local_298;
    undefined local_288 [8];
    longlong local_280;
    undefined local_268 [8];
    longlong local_260;
    undefined local_248 [8];
    longlong local_240;
    undefined local_228 [8];
    longlong local_220;
    undefined local_208 [8];
    longlong local_200;
    undefined local_1e8 [8];
    longlong local_1e0;
    undefined local_1c8 [8];
    undefined local_1c0 [8];
    undefined2 *local_1b8;
    undefined2 *local_1b0;
    longlong local_108;
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack696;
    lVar11 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    puVar5 = (undefined2 *)FUN_14018b280(0x10,0);
    *(undefined2 **)(param_1 + 8) = puVar5;
    *(undefined2 **)(param_1 + 0x10) = puVar5;
    *(undefined2 **)(param_1 + 0x18) = puVar5 + 8;
    if (puVar5 != (undefined2 *)0x0) {
        *puVar5 = 0;
    }
    uVar2 = *(int *)(param_2 + 8) - 1;
    if (8 < uVar2) goto LAB_14048beaa;
    switch(*(int *)(param_2 + 8)) {
        case 1:
            uVar4 = *(undefined4 *)(param_2 + 0xc);
            iVar3 = FUN_140444550(DAT_140c658f0,uVar4);
            if ((iVar3 == 0) || (lVar8 = FUN_1402096e0(uVar4), lVar8 == 0)) goto LAB_14048beaa;
            if (*(int *)(param_2 + 0x10) < 2) {
                psVar9 = (short *)FUN_14034bdd0();
                sVar1 = *psVar9;
                while (sVar1 != 0) {
                    lVar11 = lVar11 + 1;
                    sVar1 = psVar9[lVar11];
                }
                FUN_14001c480(param_1,psVar9,psVar9 + lVar11);
                goto LAB_14048beaa;
            }
            uVar6 = FUN_14034bdd0();
            uVar7 = FUN_14034bdd0();
            lVar11 = FUN_14018efa0(local_268,uVar7,uVar6,*(undefined4 *)(param_2 + 0x10));
            local_200 = local_260;
            if (lVar11 != param_1) {
                FUN_14001c480(param_1,*(undefined8 *)(lVar11 + 8),*(undefined8 *)(lVar11 + 0x10));
                local_200 = local_260;
            }
            break;
        case 2:
            lVar11 = FUN_1401ff120(*(undefined4 *)(param_2 + 0xc));
            if (lVar11 == 0) goto LAB_14048beaa;
            uVar6 = FUN_14034bdd0();
            uVar7 = FUN_14034bdd0();
            lVar11 = FUN_14018efa0(local_1e8,uVar7,uVar6,*(undefined4 *)(param_2 + 0x10));
            local_200 = local_1e0;
            if (lVar11 != param_1) {
                FUN_14001c480(param_1,*(undefined8 *)(lVar11 + 8),*(undefined8 *)(lVar11 + 0x10));
                local_200 = local_1e0;
            }
            break;
        case 3:
            FUN_140503450(local_1c8);
            uVar12 = *(undefined4 *)(param_2 + 0xc);
            local_298 = 0;
            goto LAB_14048bd89;
        case 4:
            lVar11 = FUN_140246480(*(undefined4 *)(param_2 + 0xc));
            if ((lVar11 == 0) || (lVar11 = FUN_1405be150(), lVar11 == 0)) goto LAB_14048beaa;
            uVar4 = FUN_1405be210();
            uVar6 = FUN_14034bdd0();
            uVar7 = FUN_14034bdd0();
            lVar11 = FUN_14018efa0(local_228,uVar7,uVar6,uVar4);
            local_200 = local_220;
            if (lVar11 != param_1) {
                FUN_14001c480(param_1,*(undefined8 *)(lVar11 + 8),*(undefined8 *)(lVar11 + 0x10));
                local_200 = local_220;
            }
            break;
        case 5:
            lVar11 = FUN_1405be150(IMAGE_DOS_HEADER_140000000.e_magic +
                                   (&switchD_14048ba97::switchdataD_14048becc)[uVar2],
                                   *(undefined4 *)(param_2 + 0xc));
            if (lVar11 == 0) goto LAB_14048beaa;
            uVar6 = FUN_14034bdd0();
            uVar7 = FUN_14034bdd0();
            lVar11 = FUN_14018efa0(local_288,uVar7,uVar6);
            local_200 = local_280;
            if (lVar11 != param_1) {
                FUN_14001c480(param_1,*(undefined8 *)(lVar11 + 8),*(undefined8 *)(lVar11 + 0x10));
                local_200 = local_280;
            }
            break;
        case 6:
            lVar11 = FUN_1401e8c20(*(undefined4 *)(param_2 + 0xc));
            if (lVar11 == 0) goto LAB_14048beaa;
            lVar8 = FUN_1400b5df0(DAT_140c658f0,*(undefined4 *)(lVar11 + 8),0);
            lVar11 = FUN_1401fe020(*(undefined4 *)(lVar11 + 0xc));
            if (lVar8 == 0) {
                if (lVar11 == 0) goto LAB_14048beaa;
                uVar6 = FUN_14034bdd0();
                uVar7 = FUN_14034bdd0();
                lVar11 = FUN_14018efa0(local_208,uVar7,uVar6);
                if (lVar11 != param_1) {
                    FUN_14001c480(param_1,*(undefined8 *)(lVar11 + 8),*(undefined8 *)(lVar11 + 0x10));
                }
            }
            else {
                uVar6 = FUN_14034bdd0();
                uVar7 = FUN_14034bdd0();
                lVar11 = FUN_14018efa0(local_248,uVar7,uVar6);
                local_200 = local_240;
                if (lVar11 != param_1) {
                    FUN_14001c480(param_1,*(undefined8 *)(lVar11 + 8),*(undefined8 *)(lVar11 + 0x10));
                    local_200 = local_240;
                }
            }
            break;
        case 7:
            uVar4 = *(undefined4 *)(param_2 + 0xc);
            lVar11 = FUN_1401e87e0(uVar4);
            if ((lVar11 == 0) || (lVar11 = FUN_1401e8c20(*(undefined4 *)(lVar11 + 0x10)), lVar11 == 0))
                goto LAB_14048beaa;
            FUN_140503450(local_1c8);
            uVar12 = 0xf;
            local_298 = uVar4;
        LAB_14048bd89:
            FUN_140503600(local_1c8,uVar12,0,0);
            FUN_140505290(local_1c8,param_1,(longlong)*(int *)(param_2 + 0x10),1);
            FUN_140503580(local_1c8);
            goto LAB_14048beaa;
        default:
            lVar8 = FUN_140201320(*(undefined4 *)(param_2 + 0xc));
            if (lVar8 != 0) {
                FUN_1404dde90(local_1c8);
                psVar9 = (short *)FUN_14034bdd0();
                if (psVar9 == (short *)0x0) {
                    if (local_1b8 != local_1b0) {
                        *local_1b8 = 0;
                        local_1b0 = local_1b8;
                    }
                }
                else {
                    sVar1 = *psVar9;
                    lVar10 = lVar11;
                    while (sVar1 != 0) {
                        lVar10 = lVar10 + 1;
                        sVar1 = psVar9[lVar10];
                    }
                    FUN_14001c480(local_1c0,psVar9,psVar9 + lVar10);
                }
                lVar10 = FUN_14018b280(0x60);
                if (lVar10 != 0) {
                    lVar11 = FUN_1404ddaf0(lVar10,*(undefined4 *)(lVar8 + 4));
                }
                FUN_1400b7480(local_1c8,lVar11);
                lVar11 = FUN_1400b7660(local_1c8);
                if (lVar11 != param_1) {
                    FUN_14001c480(param_1,*(undefined8 *)(lVar11 + 8),*(undefined8 *)(lVar11 + 0x10));
                }
                if (local_108 != 0) {
                    FUN_14018b900(local_108,0);
                }
                FUN_1400b7390(local_1c8);
            }
            goto LAB_14048beaa;
    }
    if (local_200 != 0) {
        FUN_14018b900(local_200,0);
    }
    LAB_14048beaa:
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack696);
    return;
}



undefined8 FUN_14048bef0(void)

{
    int iVar1;
    longlong lVar2;

    if (DAT_140c665d8 == 0) {
        lVar2 = FUN_14018b280(0x70);
        if (lVar2 == 0) {
            DAT_140c665d8 = 0;
        }
        else {
            DAT_140c665d8 = FUN_140723a50(lVar2);
        }
        iVar1 = FUN_140723ce0();
        lVar2 = DAT_140c665d8;
        if (iVar1 < 0) {
            if (DAT_140c665d8 != 0) {
                FUN_140723b70(DAT_140c665d8);
                FUN_14018b900(lVar2,0);
            }
            DAT_140c665d8 = 0;
            return 0x80004005;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14048bf80(longlong param_1,FILETIME *param_2)

{
    BOOL BVar1;
    DWORD DVar2;
    int iVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    FILETIME FVar6;
    undefined auStack72 [32];
    FILETIME local_28;
    _SYSTEMTIME local_20;
    ulonglong local_10;

    local_10 = DAT_140c0f7b0 ^ (ulonglong)auStack72;
    if (*(FILETIME *)(param_1 + 0x20) == (FILETIME)0x0) {
        puVar4 = (undefined8 *)FUN_14018b280(0x12,0);
        if (puVar4 == (undefined8 *)0x0) {
            _DAT_00000010 = 0;
            *param_2 = (FILETIME)0x10;
        }
        else {
            puVar4[1] = 0;
            *puVar4 = &PTR_LAB_140b55060;
            *(undefined2 *)(puVar4 + 2) = 0;
            *param_2 = (FILETIME)(puVar4 + 2);
        }
        goto LAB_14048c0d6;
    }
    local_28 = *(FILETIME *)(param_1 + 0x20);
    BVar1 = FileTimeToSystemTime(&local_28,&local_20);
    if (BVar1 == 0) {
        DVar2 = GetLastError();
        if (0 < (int)DVar2) {
            DVar2 = DVar2 & 0xffff | 0x80070000;
        }
        if (-1 < (int)DVar2) goto LAB_14048c054;
        puVar4 = (undefined8 *)FUN_14018b280(0x12);
        if (puVar4 == (undefined8 *)0x0) {
            _DAT_00000010 = 0;
            FVar6 = (FILETIME)0x10;
        }
        else {
            puVar4[1] = 0;
            *puVar4 = &PTR_LAB_140b55060;
            *(undefined2 *)(puVar4 + 2) = 0;
            FVar6 = (FILETIME)(puVar4 + 2);
        }
    }
    else {
        LAB_14048c054:
        puVar4 = (undefined8 *)0x0;
        local_28 = (FILETIME)0x0;
        iVar3 = FUN_14034bfc0(&local_20,&local_28);
        FVar6 = local_28;
        if (iVar3 < 0) {
            FUN_1400035b0(0x29,0,0,*(longlong *)(param_1 + 0x28) +
                                   (ulonglong)*(uint *)(param_1 + 0x10) * -0x30);
            puVar5 = (undefined8 *)FUN_14018b280(0x12);
            if (puVar5 != (undefined8 *)0x0) {
                puVar5[1] = 0;
                *puVar5 = &PTR_LAB_140b55060;
                puVar4 = puVar5;
            }
            *(undefined2 *)(puVar4 + 2) = 0;
            *param_2 = (FILETIME)(puVar4 + 2);
            if (local_28 != (FILETIME)0x0) {
                (**(code **)(*(longlong *)((longlong)local_28 + -0x10) + 8))
                        ((undefined8 *)((longlong)local_28 + -0x10));
            }
            goto LAB_14048c0d6;
        }
    }
    *param_2 = FVar6;
    LAB_14048c0d6:
    FUN_1407db4f0(local_10 ^ (ulonglong)auStack72);
    return;
}



undefined8 FUN_14048c100(longlong *param_1,uint param_2)

{
    undefined4 uVar1;
    int iVar2;
    longlong lVar3;
    undefined8 uVar4;

    if (((0x1f < param_2) || (param_1[3] == 0)) ||
        (lVar3 = *(longlong *)(param_1[3] + (ulonglong)param_2 * 8), lVar3 == 0)) {
        return 0;
    }
    uVar1 = *(undefined4 *)(lVar3 + 0xc);
    switch(*(undefined4 *)(*param_1 + 4)) {
        case 5:
        case 0x10:
        case 0x68:
            lVar3 = FUN_1404835c0(DAT_140c65918,uVar1);
            if (lVar3 == 0) {
                return 0;
            }
            uVar4 = FUN_14034bdd0();
            return uVar4;
        case 6:
            lVar3 = FUN_14022aa80(uVar1);
            break;
        case 7:
            lVar3 = FUN_1401e94a0(uVar1);
            if (lVar3 == 0) {
                return 0;
            }
            uVar4 = FUN_14034bdd0();
            return uVar4;
        case 8:
            lVar3 = FUN_14024db80(uVar1);
            break;
        case 9:
        case 0x26:
        case 0x28:
        case 0x50:
        case 0x8d:
            iVar2 = FUN_140444550(DAT_140c658f0,uVar1);
            if (iVar2 == 0) {
                return 0;
            }
            lVar3 = FUN_1402096e0(uVar1);
            if (lVar3 == 0) {
                return 0;
            }
            uVar4 = FUN_14034bdd0();
            return uVar4;
        default:
            goto switchD_14048c15c_caseD_a;
        case 0xd:
            lVar3 = FUN_1401ea9e0(uVar1);
            break;
        case 0x2c:
            lVar3 = FUN_140245c00(uVar1);
            break;
        case 0x65:
            lVar3 = FUN_1402413c0(uVar1);
            break;
        case 0x79:
            lVar3 = FUN_14048d310(DAT_140c65948,uVar1);
            if (lVar3 == 0) {
                return 0;
            }
            uVar4 = FUN_14034bdd0();
            return uVar4;
        case 0x8c:
            lVar3 = FUN_140206c60(uVar1);
            if (lVar3 == 0) {
                return 0;
            }
            goto LAB_14048c24c;
    }
    if (lVar3 != 0) {
        LAB_14048c24c:
        uVar4 = FUN_14034bdd0();
        return uVar4;
    }
    switchD_14048c15c_caseD_a:
    return 0;
}



int FUN_14048c320(longlong *param_1)

{
    int iVar1;
    longlong lVar2;
    uint uVar3;
    int iVar4;
    float fVar5;

    iVar1 = FUN_1406428d0();
    if (((iVar1 == 1) || (iVar1 == 3)) || (iVar1 == 5)) {
        iVar1 = 0;
        uVar3 = 0;
        do {
            lVar2 = FUN_14048c100(param_1,uVar3);
            if (lVar2 != 0) {
                iVar1 = iVar1 + 1;
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < 0x20);
        return iVar1;
    }
    if (*(int *)(*param_1 + 4) != 0x2a) {
        return *(int *)(*param_1 + 0x2c);
    }
    fVar5 = (float)FUN_1407a2950();
    if (fVar5 <= 0.0) {
        return 0;
    }
    iVar1 = -1;
    if ((int)(longlong)fVar5 != -1) {
        iVar1 = (int)(longlong)fVar5;
    }
    iVar4 = 0;
    if (iVar1 != 0) {
        iVar4 = iVar1;
    }
    return iVar4;
}



// WARNING: Could not reconcile some variable overlaps

uint FUN_14048c3d0(uint **param_1)

{
    longlong lVar1;
    int iVar2;
    uint uVar3;
    longlong lVar4;
    uint uVar5;
    uint uVar6;
    uint *puVar7;
    longlong local_res8;

    puVar7 = *param_1;
    lVar1 = *(longlong *)(DAT_140c65c28 + 0x70);
    local_res8 = lVar1;
    lVar4 = *(longlong *)(lVar1 + 8);
    while (lVar4 != 0) {
        if (*(uint *)(lVar4 + 0x20) < *puVar7) {
            lVar4 = *(longlong *)(lVar4 + 0x18);
        }
        else {
            local_res8 = lVar4;
            lVar4 = *(longlong *)(lVar4 + 0x10);
        }
    }
    if ((local_res8 == lVar1) || (*puVar7 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    if ((local_res8 != lVar1) && (lVar1 = *(longlong *)(local_res8 + 0x28), lVar1 != 0)) {
        uVar5 = 0;
        iVar2 = FUN_1406428d0(param_1);
        uVar6 = uVar5;
        if ((iVar2 == 1) || ((iVar2 == 3 || (iVar2 == 5)))) {
            do {
                lVar4 = FUN_14048c100(param_1,uVar6);
                if ((lVar4 != 0) && (iVar2 = FUN_140642a00(lVar1), iVar2 != 0)) {
                    uVar5 = uVar5 + 1;
                }
                uVar6 = uVar6 + 1;
                uVar3 = uVar5;
            } while (uVar6 < 0x20);
        }
        else if (puVar7[1] == 0x2a) {
            iVar2 = FUN_1403cac00(DAT_140c65898,puVar7[9],&local_res8);
            uVar3 = 0;
            if ((-1 < iVar2) && (0.0 < (float)local_res8)) {
                uVar6 = 0xffffffff;
                if ((uint)(longlong)(float)local_res8 != 0xffffffff) {
                    uVar6 = (uint)(longlong)(float)local_res8;
                }
                uVar3 = uVar5;
                if (uVar6 != 0) {
                    uVar3 = uVar6;
                }
            }
        }
        else if (puVar7[1] == 0x36) {
            uVar3 = uVar5;
            if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
                uVar3 = *(uint *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x38);
            }
        }
        else {
            uVar3 = FUN_140642b30(lVar1);
        }
        if ((param_1[1] != (uint *)0x0) && (uVar3 == 0)) {
            uVar3 = FUN_14048c3d0();
        }
        return uVar3;
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14048c540(void)

{
    uint uVar1;
    undefined8 *puVar2;
    uint *puVar3;
    code *pcVar4;
    int iVar5;
    longlong lVar6;
    longlong lVar7;
    ulonglong uVar8;
    longlong *plVar9;
    longlong lVar10;
    longlong lVar11;
    ulonglong uVar12;
    float fVar13;
    longlong local_res8;
    longlong local_res10;

    if (DAT_140c65c28 != 0) {
        return 0;
    }
    lVar6 = FUN_14018b280(0x130);
    uVar12 = 0;
    if (lVar6 == 0) {
        DAT_140c65c28 = 0;
    }
    else {
        DAT_140c65c28 = FUN_140642d10(lVar6);
    }
    iVar5 = FUN_1406431b0();
    lVar6 = DAT_140c65c28;
    if (-1 < iVar5) {
        if (DAT_140c65c28 != 0) {
            lVar10 = *(longlong *)(*(longlong *)(DAT_140c65c28 + 0x70) + 0x10);
            if (lVar10 != *(longlong *)(DAT_140c65c28 + 0x70)) {
                do {
                    lVar11 = *(longlong *)(lVar10 + 0x18);
                    if (lVar11 == 0) {
                        lVar7 = *(longlong *)(lVar10 + 8);
                        lVar11 = lVar10;
                        if (lVar10 == *(longlong *)(lVar7 + 0x18)) {
                            do {
                                lVar11 = lVar7;
                                lVar7 = *(longlong *)(lVar11 + 8);
                            } while (lVar11 == *(longlong *)(lVar7 + 0x18));
                        }
                        if (*(longlong *)(lVar11 + 0x18) != lVar7) {
                            lVar11 = lVar7;
                        }
                    }
                    else {
                        for (lVar7 = *(longlong *)(lVar11 + 0x10); lVar7 != 0;
                             lVar7 = *(longlong *)(lVar7 + 0x10)) {
                            lVar11 = lVar7;
                        }
                    }
                    puVar2 = *(undefined8 **)(lVar10 + 0x28);
                    if (puVar2 != (undefined8 *)0x0) {
                        (**(code **)*puVar2)(puVar2,1);
                    }
                    local_res8 = lVar10;
                    FUN_140645210(lVar6 + 0x68);
                    lVar10 = lVar11;
                } while (lVar11 != *(longlong *)(lVar6 + 0x70));
            }
            lVar10 = DAT_140c65c28;
            pcVar4 = DAT_140c63838;
            *(undefined8 *)(lVar6 + 0x108) = 0;
            if (pcVar4 == (code *)0x0) {
                uVar8 = uVar12;
                if (_DAT_140c64944 == 0) {
                    iVar5 = FUN_1401e9240();
                    if (iVar5 < 0) {
                        uVar8 = 0;
                    }
                    else {
                        uVar8 = (**(code **)(*DAT_140c64218 + 0x28))();
                    }
                }
            }
            else {
                uVar8 = (*pcVar4)(&PTR_u_Achievement_140a69138);
            }
            if ((int)uVar8 != 0) {
                uVar8 = uVar8 & 0xffffffff;
                fVar13 = 0.0;
                do {
                    puVar3 = *(uint **)(uVar12 + *(longlong *)(lVar10 + 0x18));
                    if ((float)puVar3[8] <= fVar13) {
                        lVar6 = *(longlong *)(lVar10 + 0x70);
                        uVar1 = *puVar3;
                        lVar7 = lVar6;
                        lVar11 = *(longlong *)(lVar6 + 8);
                        while (lVar11 != 0) {
                            if (*(uint *)(lVar11 + 0x20) < uVar1) {
                                lVar11 = *(longlong *)(lVar11 + 0x18);
                            }
                            else {
                                lVar7 = lVar11;
                                lVar11 = *(longlong *)(lVar11 + 0x10);
                            }
                        }
                        if ((lVar7 == lVar6) || (uVar1 < *(uint *)(lVar7 + 0x20))) {
                            local_res10 = lVar6;
                            plVar9 = &local_res10;
                        }
                        else {
                            local_res8 = lVar7;
                            plVar9 = &local_res8;
                        }
                        if ((*plVar9 == lVar6) || (*(longlong *)(*plVar9 + 0x28) == 0)) {
                            FUN_140643f00(lVar10,uVar1,0,0,0,1,0);
                        }
                    }
                    uVar12 = uVar12 + 0x30;
                    uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
            }
        }
        return 0;
    }
    if (DAT_140c65c28 != 0) {
        FUN_140642f40(DAT_140c65c28);
        FUN_14018b900(lVar6,0);
    }
    DAT_140c65c28 = 0;
    return 0x80004005;
}



undefined8 * FUN_14048c7e0(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_FUN_140b68f20;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



int FUN_14048c810(void)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;

    if (DAT_140c65948 != (longlong *)0x0) {
        return 0;
    }
    lVar2 = FUN_14018b280(0x100,0);
    if (lVar2 == 0) {
        plVar3 = (longlong *)0x0;
    }
    else {
        plVar3 = (longlong *)FUN_14048c8a0(lVar2);
    }
    iVar1 = (**(code **)(*plVar3 + 8))(plVar3);
    if (iVar1 < 0) {
        (**(code **)*plVar3)(plVar3,1);
        return iVar1;
    }
    DAT_140c65948 = plVar3;
    return 0;
}



undefined8 * FUN_14048c8a0(undefined8 *param_1)

{
    undefined *puVar1;

    *param_1 = &PTR_FUN_140b67220;
    puVar1 = (undefined *)FUN_14018b280(0x30);
    param_1[2] = puVar1;
    param_1[3] = 0;
    *puVar1 = 0;
    *(undefined8 *)(param_1[2] + 8) = 0;
    *(undefined8 *)(param_1[2] + 0x10) = param_1[2];
    *(undefined8 *)(param_1[2] + 0x18) = param_1[2];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[7] = 0;
    param_1[6] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[6] + 8) = 0;
    *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
    *(undefined8 *)(param_1[6] + 0x18) = param_1[6];
    puVar1 = (undefined *)FUN_14018b280(0x28,0);
    param_1[0xb] = 0;
    param_1[10] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[10] + 8) = 0;
    *(undefined8 *)(param_1[10] + 0x10) = param_1[10];
    *(undefined8 *)(param_1[10] + 0x18) = param_1[10];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0x17] = 0;
    param_1[0x16] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0x16] + 8) = 0;
    *(undefined8 *)(param_1[0x16] + 0x10) = param_1[0x16];
    *(undefined8 *)(param_1[0x16] + 0x18) = param_1[0x16];
    puVar1 = (undefined *)FUN_14018b280(0x28,0);
    param_1[0x1b] = 0;
    param_1[0x1a] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0x1a] + 8) = 0;
    *(undefined8 *)(param_1[0x1a] + 0x10) = param_1[0x1a];
    *(undefined8 *)(param_1[0x1a] + 0x18) = param_1[0x1a];
    return param_1;
}



undefined8 FUN_14048c9d0(undefined8 param_1,ulonglong param_2)

{
    FUN_14048ca10();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_14048ca10(undefined8 *param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    *param_1 = &PTR_FUN_140b67220;
    lVar3 = *(longlong *)(param_1[2] + 0x10);
    if (lVar3 != param_1[2]) {
        do {
            if (*(longlong *)(lVar3 + 0x28) != 0) {
                FUN_14018b900(*(longlong *)(lVar3 + 0x28),0);
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
        } while (lVar3 != param_1[2]);
    }
    FUN_140008410(param_1 + 1);
    FUN_14048d060(param_1);
    FUN_140008410(param_1 + 0x19);
    FUN_14018b900(param_1[0x1a],0);
    FUN_140008410(param_1 + 0x15);
    FUN_14018b900(param_1[0x16],0);
    FUN_140008410(param_1 + 9);
    FUN_14018b900(param_1[10],0);
    FUN_140008410(param_1 + 5);
    FUN_14018b900(param_1[6],0);
    FUN_140008410(param_1 + 1);
    FUN_14018b900(param_1[2],0);
    *param_1 = &PTR_FUN_140b78360;
    return;
}



void FUN_14048d060(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10);
    if (lVar3 != *(longlong *)(param_1 + 0x30)) {
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
        } while (lVar3 != *(longlong *)(param_1 + 0x30));
    }
    FUN_140008410(param_1 + 0x28);
    FUN_140008410(param_1 + 0x48);
    FUN_14048d860(param_1);
    if (DAT_140c65898 != 0) {
        *(undefined4 *)(DAT_140c65898 + 0x6f98) = 1;
    }
    return;
}



void FUN_14048d120(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x30);
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
    lVar2 = local_res8;
    if (local_res8 != lVar1) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ChallengeAbandon",&DAT_1409e9514,param_2,
                      &DAT_1409f0584);
        FUN_14048d7a0(param_1,param_2);
        FUN_14018b900(*(undefined8 *)(lVar2 + 0x28),0);
        local_res8 = lVar2;
        FUN_14048fb60(param_1 + 0x28,&local_res8);
    }
    FUN_14048d200(param_1);
    return;
}



void FUN_14048d200(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong lVar5;
    undefined4 local_res8;
    undefined4 local_resc;
    longlong local_res10;
    longlong local_res18 [2];
    undefined local_28 [16];

    FUN_140008410(param_1 + 0x48);
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10);
    if (lVar5 != *(longlong *)(param_1 + 0x30)) {
        do {
            lVar4 = *(longlong *)(param_1 + 0x10);
            lVar2 = lVar4;
            lVar1 = *(longlong *)(lVar4 + 8);
            while (lVar1 != 0) {
                if (*(uint *)(lVar1 + 0x20) < **(uint **)(lVar5 + 0x28)) {
                    lVar1 = *(longlong *)(lVar1 + 0x18);
                }
                else {
                    lVar2 = lVar1;
                    lVar1 = *(longlong *)(lVar1 + 0x10);
                }
            }
            if ((lVar2 == lVar4) || (**(uint **)(lVar5 + 0x28) < *(uint *)(lVar2 + 0x20))) {
                local_res18[0] = lVar4;
                plVar3 = local_res18;
            }
            else {
                local_res10 = lVar2;
                plVar3 = &local_res10;
            }
            if ((*plVar3 != lVar4) && (lVar4 = *(longlong *)(*plVar3 + 0x28), lVar4 != 0)) {
                local_res8 = *(undefined4 *)(lVar4 + 0x38);
                local_resc = *(undefined4 *)(lVar4 + 0x14);
                FUN_140032f50(param_1 + 0x48,local_28,&local_res8);
            }
            lVar4 = *(longlong *)(lVar5 + 0x18);
            if (lVar4 == 0) {
                lVar4 = *(longlong *)(lVar5 + 8);
                if (lVar5 == *(longlong *)(lVar4 + 0x18)) {
                    do {
                        lVar5 = lVar4;
                        lVar4 = *(longlong *)(lVar5 + 8);
                    } while (lVar5 == *(longlong *)(lVar4 + 0x18));
                }
                if (*(longlong *)(lVar5 + 0x18) != lVar4) {
                    lVar5 = lVar4;
                }
            }
            else {
                for (lVar1 = *(longlong *)(lVar4 + 0x10); lVar5 = lVar4, lVar1 != 0;
                     lVar1 = *(longlong *)(lVar1 + 0x10)) {
                    lVar4 = lVar1;
                }
            }
        } while (lVar5 != *(longlong *)(param_1 + 0x30));
    }
    return;
}



undefined8 FUN_14048d310(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
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
    return *(undefined8 *)(local_res8 + 0x28);
}



undefined8 FUN_14048d370(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x30);
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



undefined8 * FUN_14048d3d0(longlong param_1,undefined8 *param_2)

{
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong *plVar5;
    longlong lVar6;
    longlong lVar7;
    longlong local_res8;
    longlong local_res10;

    lVar4 = DAT_140c65948;
    local_res8 = param_1;
    param_2[1] = 0;
    *param_2 = 0;
    lVar7 = *(longlong *)(*(longlong *)(lVar4 + 0x30) + 0x10);
    if (lVar7 != *(longlong *)(lVar4 + 0x30)) {
        do {
            if ((*(uint **)(lVar7 + 0x28))[0xc] != 0) {
                lVar6 = *(longlong *)(lVar4 + 0x10);
                uVar1 = **(uint **)(lVar7 + 0x28);
                lVar3 = lVar6;
                lVar2 = *(longlong *)(lVar6 + 8);
                while (lVar2 != 0) {
                    if (*(uint *)(lVar2 + 0x20) < uVar1) {
                        lVar2 = *(longlong *)(lVar2 + 0x18);
                    }
                    else {
                        lVar3 = lVar2;
                        lVar2 = *(longlong *)(lVar2 + 0x10);
                    }
                }
                if ((lVar3 == lVar6) || (uVar1 < *(uint *)(lVar3 + 0x20))) {
                    local_res10 = lVar6;
                    plVar5 = &local_res10;
                }
                else {
                    local_res8 = lVar3;
                    plVar5 = &local_res8;
                }
                if (((*plVar5 != lVar6) && (lVar6 = *(longlong *)(*plVar5 + 0x28), lVar6 != 0)) &&
                    ((*(int *)(lVar6 + 0x40) != 0 || (*(int *)(lVar6 + 4) == 5)))) {
                    FUN_140480d00(param_2);
                }
            }
            lVar6 = *(longlong *)(lVar7 + 0x18);
            if (lVar6 == 0) {
                lVar6 = *(longlong *)(lVar7 + 8);
                if (lVar7 == *(longlong *)(lVar6 + 0x18)) {
                    do {
                        lVar7 = lVar6;
                        lVar6 = *(longlong *)(lVar7 + 8);
                    } while (lVar7 == *(longlong *)(lVar6 + 0x18));
                }
                if (*(longlong *)(lVar7 + 0x18) != lVar6) {
                    lVar7 = lVar6;
                }
            }
            else {
                for (lVar2 = *(longlong *)(lVar6 + 0x10); lVar7 = lVar6, lVar2 != 0;
                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                    lVar6 = lVar2;
                }
            }
        } while (lVar7 != *(longlong *)(lVar4 + 0x30));
    }
    return param_2;
}



undefined4 FUN_14048d530(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(DAT_140c65948 + 0x30);
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
    return *(undefined4 *)(*(longlong *)(local_res8 + 0x28) + 0x30);
}



undefined4 FUN_14048d5a0(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(DAT_140c65948 + 0x30);
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
    return *(undefined4 *)(*(longlong *)(local_res8 + 0x28) + 0x2c);
}



bool FUN_14048d610(undefined8 param_1,uint param_2,uint param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(DAT_140c65948 + 0x30);
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
        return false;
    }
    return (*(uint *)(*(longlong *)(local_res8 + 0x28) + 0x1c) >> (param_3 & 0x1f) & 1) != 0;
}



void FUN_14048d680(undefined8 param_1,undefined4 param_2)

{
    longlong lVar1;
    uint uVar2;
    int iVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    undefined4 local_res10 [2];
    ulonglong in_stack_ffffffffffffffc8;
    undefined4 local_28;
    undefined4 local_24;
    undefined4 local_20;
    longlong local_18;
    code *local_10;

    lVar1 = DAT_140c65948;
    if (*(longlong *)(DAT_140c65898 + 0x6490) != 0) {
        local_res10[0] = param_2;
        FUN_14048d7a0(DAT_140c65948);
        uVar2 = FUN_14048d940(lVar1,param_2);
        if ((uVar2 != 0) && (lVar4 = FUN_14024b980(uVar2), lVar4 != 0)) {
            uVar5 = 0;
            local_28 = 7;
            local_20 = 0;
            local_24 = param_2;
            iVar3 = FUN_140485fa0(uVar2,0);
            local_18 = lVar1;
            if (iVar3 == 0) {
                local_10 = FUN_14048da90;
                if (*DAT_140c65920 != 0) {
                    uVar5 = FUN_140486dc0(DAT_140c65920,
                                          L"Art\\FX\\Model\\Props\\Explorer_Arrow_01_BLU\\Explorer_Arrow_01_BLU.m3"
                            ,&local_28,&local_18,
                                          in_stack_ffffffffffffffc8 & 0xffffffff00000000 | (ulonglong)uVar2,0)
                            ;
                }
            }
            else {
                local_10 = FUN_14048dae0;
                if (*DAT_140c65920 != 0) {
                    uVar5 = FUN_140486f10(DAT_140c65920,
                                          L"Art\\FX\\Model\\Props\\Destination_Arrow_01_BLU\\Destination_Arrow_01_BLU.m3"
                            ,*(longlong *)(DAT_140c65898 + 0x6490) + 0x11b0,&local_28,&local_18)
                            ;
                }
            }
            puVar6 = (undefined8 *)FUN_140055be0(lVar1 + 0xa8,local_res10);
            *puVar6 = uVar5;
        }
    }
    return;
}



void FUN_14048d7a0(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong local_res8;
    uint local_res10 [2];

    lVar1 = *(longlong *)(param_1 + 0xb0);
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
    if (local_res8 != *(longlong *)(param_1 + 0xb0)) {
        for (plVar3 = *(longlong **)(DAT_140c65920 + 8); local_res10[0] = param_2,
                plVar3 != (longlong *)0x0; plVar3 = (longlong *)plVar3[4]) {
            if (plVar3[9] == *(longlong *)(local_res8 + 0x28)) {
                (**(code **)(*plVar3 + 8))(plVar3);
                (**(code **)*plVar3)(plVar3,1);
                break;
            }
        }
        FUN_14048fc60(param_1 + 0xa8,local_res10);
    }
    return;
}



void FUN_14048d860(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x10);
    if (lVar4 != *(longlong *)(param_1 + 0xb0)) {
        do {
            for (plVar1 = *(longlong **)(DAT_140c65920 + 8); plVar1 != (longlong *)0x0;
                 plVar1 = (longlong *)plVar1[4]) {
                if (plVar1[9] == *(longlong *)(lVar4 + 0x28)) {
                    (**(code **)(*plVar1 + 8))(plVar1);
                    (**(code **)*plVar1)(plVar1,1);
                    break;
                }
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
        } while (lVar4 != *(longlong *)(param_1 + 0xb0));
    }
    FUN_140008410(param_1 + 0xa8);
    return;
}



ulonglong FUN_14048d940(longlong param_1,uint param_2)

{
    int iVar1;
    uint uVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    ulonglong uVar6;
    longlong lVar7;
    longlong local_res8;

    lVar3 = *(longlong *)(param_1 + 0x10);
    local_res8 = lVar3;
    lVar7 = *(longlong *)(lVar3 + 8);
    while (lVar7 != 0) {
        if (*(uint *)(lVar7 + 0x20) < param_2) {
            lVar7 = *(longlong *)(lVar7 + 0x18);
        }
        else {
            local_res8 = lVar7;
            lVar7 = *(longlong *)(lVar7 + 0x10);
        }
    }
    if ((local_res8 == lVar3) || (param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar3;
    }
    if ((local_res8 == lVar3) || (lVar3 = *(longlong *)(local_res8 + 0x28), lVar3 == 0)) {
        return 0;
    }
    lVar7 = *(longlong *)(param_1 + 0x30);
    lVar4 = lVar7;
    lVar5 = *(longlong *)(lVar7 + 8);
    while (lVar5 != 0) {
        if (*(uint *)(lVar5 + 0x20) < param_2) {
            lVar5 = *(longlong *)(lVar5 + 0x18);
        }
        else {
            lVar4 = lVar5;
            lVar5 = *(longlong *)(lVar5 + 0x10);
        }
    }
    if ((lVar4 == lVar7) || (local_res8 = lVar4, param_2 < *(uint *)(lVar4 + 0x20))) {
        local_res8 = lVar7;
    }
    if (local_res8 == lVar7) {
        lVar7 = 0;
        LAB_14048da4a:
        if (*(int *)(lVar3 + 0x1c) == 0) goto LAB_14048da50;
    }
    else {
        lVar7 = *(longlong *)(local_res8 + 0x28);
        if (lVar7 == 0) goto LAB_14048da4a;
        if (*(int *)(lVar7 + 0x30) != 0) {
            iVar1 = *(int *)(lVar3 + 0x58);
            LAB_14048da13:
            if (((iVar1 != 0) && (lVar5 = FUN_140487750(lVar4,iVar1,1), lVar5 != 0)) &&
                (uVar6 = FUN_140487e40(lVar5,0,0,0,0,0,0), (int)uVar6 != 0)) {
                return uVar6;
            }
            goto LAB_14048da4a;
        }
        if (*(int *)(lVar3 + 0x1c) != 0) {
            iVar1 = *(int *)(lVar3 + 0x5c);
            goto LAB_14048da13;
        }
        LAB_14048da50:
        if (*(int *)(lVar3 + 0x20) == 0) goto LAB_14048da68;
    }
    uVar2 = *(uint *)(lVar3 + 0x24);
    if (uVar2 != 0) {
        if (lVar7 == 0) {
            return (ulonglong)uVar2;
        }
        if (*(int *)(lVar7 + 0x30) == 0) {
            return (ulonglong)uVar2;
        }
    }
    LAB_14048da68:
    return (ulonglong)*(uint *)(lVar3 + 0x3c);
}



void FUN_14048da90(longlong param_1,longlong *param_2,int param_3)

{
    int iVar1;
    undefined4 local_res18 [4];

    local_res18[0] = *(undefined4 *)((longlong)param_2 + 0x3c);
    if ((param_3 == 0) && (*(int *)(param_2 + 0xc) == 0)) {
        iVar1 = FUN_1404862b0(param_2);
        if (iVar1 < 0) {
            // WARNING: Could not recover jumptable at 0x00014048dac2. Too many branches
            // WARNING: Treating indirect jump as call
            (**(code **)(*param_2 + 8))(param_2);
            return;
        }
    }
    else {
        FUN_14048fc60(param_1 + 0xa8,local_res18);
    }
    return;
}



void FUN_14048dae0(longlong param_1,longlong param_2,int param_3)

{
    undefined4 local_res18 [4];

    local_res18[0] = *(undefined4 *)(param_2 + 0x3c);
    if ((param_3 != 0) || (*(int *)(param_2 + 0x60) != 0)) {
        FUN_14048fc60(param_1 + 0xa8,local_res18);
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14048db10(undefined8 param_1,uint param_2)

{
    short sVar1;
    undefined2 *puVar2;
    longlong lVar3;
    longlong lVar4;
    short *psVar5;
    longlong lVar6;
    longlong lVar7;
    longlong local_res8;
    undefined **local_e8;
    undefined local_e0 [8];
    undefined2 *local_d8;
    undefined2 *local_d0;
    undefined local_28 [16];
    undefined2 *local_18;

    lVar6 = *(longlong *)(DAT_140c65948 + 0x30);
    local_res8 = lVar6;
    lVar7 = *(longlong *)(lVar6 + 8);
    while (lVar7 != 0) {
        if (*(uint *)(lVar7 + 0x20) < param_2) {
            lVar7 = *(longlong *)(lVar7 + 0x18);
        }
        else {
            local_res8 = lVar7;
            lVar7 = *(longlong *)(lVar7 + 0x10);
        }
    }
    if ((local_res8 == lVar6) || (param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar6;
    }
    if ((local_res8 != lVar6) && (*(longlong *)(local_res8 + 0x28) != 0)) {
        lVar6 = *(longlong *)(DAT_140c65948 + 0x10);
        local_res8 = lVar6;
        lVar7 = *(longlong *)(lVar6 + 8);
        while (lVar7 != 0) {
            if (*(uint *)(lVar7 + 0x20) < param_2) {
                lVar7 = *(longlong *)(lVar7 + 0x18);
            }
            else {
                local_res8 = lVar7;
                lVar7 = *(longlong *)(lVar7 + 0x10);
            }
        }
        if ((local_res8 == lVar6) || (param_2 < *(uint *)(local_res8 + 0x20))) {
            local_res8 = lVar6;
        }
        if ((local_res8 != lVar6) && (lVar6 = *(longlong *)(local_res8 + 0x28), lVar6 != 0)) {
            FUN_1400b6f30(&local_e8);
            lVar7 = 0;
            local_18 = (undefined2 *)0x0;
            local_28 = ZEXT816(0);
            local_e8 = &PTR_FUN_140b69230;
            puVar2 = (undefined2 *)FUN_14018b280(0x10,0);
            local_18 = puVar2 + 8;
            local_28 = CONCAT88(puVar2,puVar2);
            if (puVar2 != (undefined2 *)0x0) {
                *puVar2 = 0;
            }
            lVar3 = FUN_14018b280(0x60);
            lVar4 = lVar7;
            if (lVar3 != 0) {
                lVar4 = FUN_1404ddaf0(lVar3,*(undefined4 *)(lVar6 + 0x44));
            }
            FUN_1400b7480(&local_e8,lVar4);
            psVar5 = (short *)FUN_14034bdd0();
            if (psVar5 == (short *)0x0) {
                if (local_d8 != local_d0) {
                    *local_d8 = 0;
                    local_d0 = local_d8;
                }
            }
            else {
                sVar1 = *psVar5;
                while (sVar1 != 0) {
                    lVar7 = lVar7 + 1;
                    sVar1 = psVar5[lVar7];
                }
                FUN_14001c480(local_e0,psVar5,psVar5 + lVar7);
            }
            lVar6 = FUN_1400b7660(&local_e8);
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ChallengeAbandon",&DAT_1409e9514,
                          param_2,*(undefined8 *)(lVar6 + 8));
            if (local_28._0_8_ != 0) {
                FUN_14018b900(local_28._0_8_,0);
            }
            FUN_1400b7390(&local_e8);
        }
    }
    return;
}



float FUN_14048dd20(undefined8 param_1,uint param_2,byte param_3)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    longlong local_res8;

    lVar1 = *(longlong *)(DAT_140c65948 + 0x30);
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
    if ((local_res8 == lVar1) || (lVar1 = *(longlong *)(local_res8 + 0x28), lVar1 == 0)) {
        return 0.0;
    }
    if ((*(int *)(lVar1 + 0x30) == 0) || ((param_3 & 2) == 0)) {
        if ((*(int *)(lVar1 + 0x34) == 0) || ((param_3 & 4) == 0)) {
            if (*(int *)(lVar1 + 0x38) == 0) {
                return 0.0;
            }
            if ((param_3 & 8) == 0) {
                return 0.0;
            }
            iVar3 = *(int *)(lVar1 + 0x4c);
        }
        else {
            iVar3 = *(int *)(lVar1 + 0x44);
        }
    }
    else {
        iVar3 = *(int *)(lVar1 + 0x3c);
    }
    return (float)(ulonglong)(uint)(iVar3 - DAT_140c636a8) * 0.001;
}



void FUN_14048dde0(longlong param_1,uint param_2,uint param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8 [4];
    undefined local_18 [16];

    lVar1 = *(longlong *)(param_1 + 0x10);
    local_res8[0] = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < param_2) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res8[0] = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res8[0] == lVar1) || (param_2 < *(uint *)(local_res8[0] + 0x20))) {
        local_res8[0] = lVar1;
    }
    if (((local_res8[0] != lVar1) && (*(longlong *)(local_res8[0] + 0x28) != 0)) && (param_3 < 4)) {
        lVar1 = *(longlong *)(param_1 + 0xd0);
        local_res8[0] = lVar1;
        lVar2 = *(longlong *)(lVar1 + 8);
        while (lVar2 != 0) {
            if (*(uint *)(lVar2 + 0x20) < param_2) {
                lVar2 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                local_res8[0] = lVar2;
                lVar2 = *(longlong *)(lVar2 + 0x10);
            }
        }
        if ((local_res8[0] == lVar1) || (param_2 < *(uint *)(local_res8[0] + 0x20))) {
            local_res8[0] = lVar1;
        }
        if (local_res8[0] == lVar1) {
            local_res8[0] = CONCAT44(param_3,param_2);
            FUN_140032f50(param_1 + 200,local_18,local_res8);
            return;
        }
        *(uint *)(local_res8[0] + 0x24) = param_3;
    }
    return;
}



undefined8 FUN_14048ded0(longlong param_1,uint *param_2)

{
    longlong lVar1;
    longlong lVar2;
    bool bVar3;
    longlong lVar4;
    int iVar5;
    longlong lVar6;
    undefined4 *puVar7;
    longlong *plVar8;
    uint uVar9;
    ulonglong uVar10;
    longlong lVar11;
    uint uVar12;
    ulonglong uVar13;
    longlong local_res8;
    longlong local_res10;
    longlong local_res18;
    longlong local_res20;
    longlong local_78;
    longlong local_70;
    uint local_68 [2];
    undefined4 *local_60;
    undefined local_58 [24];

    lVar6 = DAT_140c65948;
    local_res8 = param_1;
    if (param_2 == (uint *)0x0) {
        return 0x80004005;
    }
    uVar13 = 0;
    if (*param_2 != 0) {
        do {
            lVar1 = *(longlong *)(lVar6 + 0x30);
            lVar11 = uVar13 * 0x60;
            bVar3 = false;
            uVar12 = *(uint *)(lVar11 + *(longlong *)(param_2 + 2));
            lVar4 = lVar1;
            lVar2 = *(longlong *)(lVar1 + 8);
            while (lVar2 != 0) {
                if (*(uint *)(lVar2 + 0x20) < uVar12) {
                    lVar2 = *(longlong *)(lVar2 + 0x18);
                }
                else {
                    lVar4 = lVar2;
                    lVar2 = *(longlong *)(lVar2 + 0x10);
                }
            }
            if ((lVar4 == lVar1) || (uVar12 < *(uint *)(lVar4 + 0x20))) {
                local_res10 = lVar1;
                plVar8 = &local_res10;
            }
            else {
                local_res8 = lVar4;
                plVar8 = &local_res8;
            }
            if ((*plVar8 == *(longlong *)(lVar6 + 0x30)) ||
                (puVar7 = *(undefined4 **)(*plVar8 + 0x28), puVar7 == (undefined4 *)0x0)) {
                puVar7 = (undefined4 *)FUN_14018b280(0x60);
                FUN_1407e4830(puVar7,0,0x60);
                bVar3 = true;
                local_68[0] = uVar12;
                local_60 = puVar7;
                FUN_140055f80(lVar6 + 0x28,local_58,local_68);
            }
            lVar1 = *(longlong *)(param_2 + 2);
            *puVar7 = *(undefined4 *)(lVar11 + lVar1);
            puVar7[1] = *(undefined4 *)(lVar11 + 4 + lVar1);
            puVar7[2] = *(undefined4 *)(lVar11 + 8 + lVar1);
            puVar7[3] = *(undefined4 *)(lVar11 + 0xc + lVar1);
            puVar7[4] = *(undefined4 *)(lVar11 + 0x10 + lVar1);
            puVar7[5] = *(undefined4 *)(lVar11 + 0x14 + lVar1);
            puVar7[6] = *(undefined4 *)(lVar11 + 0x18 + lVar1);
            puVar7[7] = *(undefined4 *)(lVar11 + 0x1c + lVar1);
            puVar7[8] = *(undefined4 *)(lVar11 + 0x20 + lVar1);
            puVar7[9] = *(undefined4 *)(lVar11 + 0x24 + lVar1);
            puVar7[10] = *(undefined4 *)(lVar11 + 0x28 + lVar1);
            puVar7[0xb] = *(undefined4 *)(lVar11 + 0x2c + lVar1);
            puVar7[0xc] = *(undefined4 *)(lVar11 + 0x30 + lVar1);
            puVar7[0xd] = *(undefined4 *)(lVar11 + 0x34 + lVar1);
            puVar7[0xe] = *(undefined4 *)(lVar11 + 0x38 + lVar1);
            puVar7[0xf] = *(undefined4 *)(lVar11 + 0x3c + lVar1);
            puVar7[0x10] = *(undefined4 *)(lVar11 + 0x40 + lVar1);
            puVar7[0x11] = *(undefined4 *)(lVar11 + 0x44 + lVar1);
            puVar7[0x12] = *(undefined4 *)(lVar11 + 0x48 + lVar1);
            puVar7[0x13] = *(undefined4 *)(lVar11 + 0x4c + lVar1);
            puVar7[0x14] = *(undefined4 *)(lVar11 + 0x50 + lVar1);
            puVar7[0x15] = *(undefined4 *)(lVar11 + 0x54 + lVar1);
            puVar7[0x16] = *(undefined4 *)(lVar11 + 0x58 + lVar1);
            lVar2 = DAT_140c65898;
            puVar7[0x17] = *(undefined4 *)(lVar11 + 0x5c + lVar1);
            iVar5 = DAT_140c636a8;
            puVar7[0xf] = puVar7[0xf] + DAT_140c636a8;
            puVar7[0x11] = puVar7[0x11] + iVar5;
            puVar7[0x13] = puVar7[0x13] + iVar5;
            FUN_1400ea3e0(*(undefined8 *)(lVar2 + 0x7340),"ChallengeTimeUpdated",&DAT_1409e997c,uVar12);
            if (bVar3) {
                FUN_14048dde0(lVar6,uVar12);
                lVar1 = *(longlong *)(lVar6 + 0x10);
                lVar4 = lVar1;
                lVar2 = *(longlong *)(lVar1 + 8);
                while (lVar2 != 0) {
                    if (*(uint *)(lVar2 + 0x20) < uVar12) {
                        lVar2 = *(longlong *)(lVar2 + 0x18);
                    }
                    else {
                        lVar4 = lVar2;
                        lVar2 = *(longlong *)(lVar2 + 0x10);
                    }
                }
                if ((lVar4 == lVar1) || (uVar12 < *(uint *)(lVar4 + 0x20))) {
                    local_res20 = lVar1;
                    plVar8 = &local_res20;
                }
                else {
                    local_res18 = lVar4;
                    plVar8 = &local_res18;
                }
                if (((*plVar8 != lVar1) && (lVar1 = *(longlong *)(*plVar8 + 0x28), lVar1 != 0)) &&
                    (uVar10 = 0, *(int *)(lVar1 + 0x28) != 0)) {
                    do {
                        *(undefined4 *)(lVar1 + 0x2c + uVar10 * 4) = puVar7[uVar10 + 0x15];
                        uVar9 = (int)uVar10 + 1;
                        uVar10 = (ulonglong)uVar9;
                    } while (uVar9 < *(uint *)(lVar1 + 0x28));
                }
                if (puVar7[10] != 0) {
                    FUN_1404cf010(lVar4,2);
                }
            }
            lVar1 = lVar6 + (longlong)(int)puVar7[1] * 8;
            if (*(undefined4 **)(lVar6 + 0x68 + (longlong)(int)puVar7[1] * 8) == puVar7) {
                if (puVar7[0xc] == 0) {
                    *(undefined8 *)(lVar1 + 0x68) = 0;
                    if (puVar7[10] == 1) {
                        lVar1 = *(longlong *)(lVar6 + 0x10);
                        lVar4 = lVar1;
                        lVar2 = *(longlong *)(lVar1 + 8);
                        while (lVar2 != 0) {
                            if (*(uint *)(lVar2 + 0x20) < uVar12) {
                                lVar2 = *(longlong *)(lVar2 + 0x18);
                            }
                            else {
                                lVar4 = lVar2;
                                lVar2 = *(longlong *)(lVar2 + 0x10);
                            }
                        }
                        if ((lVar4 == lVar1) || (uVar12 < *(uint *)(lVar4 + 0x20))) {
                            local_70 = lVar1;
                            plVar8 = &local_70;
                        }
                        else {
                            local_78 = lVar4;
                            plVar8 = &local_78;
                        }
                        if ((*plVar8 != lVar1) && (lVar1 = *(longlong *)(*plVar8 + 0x28), lVar1 != 0)) {
                            FUN_1404cf010(lVar1,2);
                        }
                    }
                }
                else {
                    LAB_14048e22a:
                    *(undefined4 **)(lVar1 + 0x68) = puVar7;
                    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ChallengeUpdated");
                }
            }
            else if (puVar7[0xc] != 0) goto LAB_14048e22a;
            uVar12 = (int)uVar13 + 1;
            uVar13 = (ulonglong)uVar12;
        } while (uVar12 < *param_2);
    }
    *(undefined4 *)(DAT_140c65898 + 0x6f98) = 1;
    FUN_14048d200(lVar6);
    return 0;
}

