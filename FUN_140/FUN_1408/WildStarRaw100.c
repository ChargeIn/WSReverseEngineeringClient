//
// Created by flop on 04.04.22.
//
#include "../../include.h"
#include "../../include.h"

ulonglong FUN_140863240(longlong param_1)

{
    ulonglong uVar1;

    uVar1 = *(ulonglong *)(param_1 + 0x420);
    if (uVar1 != 0) {
        return (ulonglong)(*(byte *)(uVar1 + 0x5b) >> 2 & 1);
    }
    return uVar1;
}



void FUN_140863260(undefined2 *param_1,longlong param_2,longlong param_3,char param_4)

{
    int iVar1;

    iVar1 = *(int *)(param_2 + 8);
    if ((iVar1 == *(int *)(param_3 + 8)) && (param_4 == '\0')) {
        if (iVar1 == 3) {
            FUN_14087b910();
            *(undefined2 *)(param_3 + 0x12) = *param_1;
            return;
        }
        if (iVar1 == 4) {
            FUN_14087b8e0();
            *(undefined2 *)(param_3 + 0x12) = *param_1;
            return;
        }
        if (iVar1 == 0x33) {
            FUN_14087b800();
            *(undefined2 *)(param_3 + 0x12) = *param_1;
            return;
        }
        if (iVar1 == 0x3f) {
            FUN_14087b6c0();
            *(undefined2 *)(param_3 + 0x12) = *param_1;
            return;
        }
    }
    else {
        FUN_14087acf0();
    }
    *(undefined2 *)(param_3 + 0x12) = *param_1;
    return;
}



void FUN_140863310(undefined8 param_1,float param_2,longlong param_3,undefined8 param_4,int param_5)

{
    if (param_5 == 0xb) {
        *(float *)(param_3 + 0x324) = param_2;
    }
    else {
        if (param_5 == 0x14) {
            *(float *)(param_3 + 0x31c) = param_2;
            return;
        }
        if (param_5 == 0x15) {
            *(float *)(param_3 + 800) = param_2;
            return;
        }
        if (param_5 == 0x40) {
            *(bool *)(param_3 + 0x328) = 0.0 < param_2;
            return;
        }
    }
    return;
}



void FUN_140863360(longlong param_1)

{
    longlong *plVar1;
    byte bVar2;
    byte *pbVar3;
    longlong lVar4;

    if (*(int *)(param_1 + 0x428) == 1) {
        lVar4 = 4;
        pbVar3 = (byte *)(param_1 + 0x398);
        do {
            if ((*(int *)(param_1 + 0x428) == 1) &&
                (plVar1 = *(longlong **)(pbVar3 + -0x10), plVar1 != (longlong *)0x0)) {
                bVar2 = *(byte *)(param_1 + 0x418) | *pbVar3;
                if ((bVar2 & 1) == 0) {
                    (**(code **)(*plVar1 + 0x38))(plVar1,param_1 + 0x350);
                }
                else if ((bVar2 & 2) == 0) {
                    (**(code **)(*plVar1 + 0x10))();
                }
                bVar2 = *pbVar3;
                *pbVar3 = (bVar2 * '\x02' ^ bVar2) & 2 ^ bVar2;
            }
            pbVar3 = pbVar3 + 0x28;
            lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
    }
    return;
}



void FUN_140863400(longlong param_1)

{
    undefined4 uVar1;

    if (*(longlong *)(param_1 + 0x350) != 0) {
        uVar1 = 1;
        if (*(int *)(param_1 + 0x35c) == 0x11) {
            uVar1 = 4;
        }
        *(undefined4 *)(param_1 + 0x35c) = 0x11;
        *(undefined4 *)(param_1 + 0x428) = uVar1;
        *(undefined2 *)(param_1 + 0x362) = 0;
    }
    FUN_1407e4830(*(longlong *)(param_1 + 0x350),0,*(undefined4 *)(param_1 + 0x370));
    return;
}



void FUN_140863450(longlong param_1)

{
    longlong lVar1;

    FUN_140833a10();
    lVar1 = *(longlong *)(param_1 + 0x420);
    if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x5b) & 4) != 0)) {
        *(byte *)(param_1 + 0x308) = *(byte *)(param_1 + 0x308) | 1;
        FUN_1408524d0(lVar1,0,param_1 + 0x31c);
        return;
    }
    *(byte *)(param_1 + 0x308) = *(byte *)(param_1 + 0x308) & 0xfe;
    *(undefined4 *)(param_1 + 0x31c) = 0x3f000000;
    *(undefined4 *)(param_1 + 800) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x324) = 0x42c80000;
    *(undefined *)(param_1 + 0x328) = 0;
    return;
}



undefined4 FUN_1408634c0(longlong param_1)

{
    byte bVar1;
    undefined4 uVar2;
    uint uVar3;

    uVar3 = 0;
    do {
        uVar2 = FUN_140863540(param_1,param_1 + 0x420,uVar3);
        uVar3 = uVar3 + 1;
    } while (uVar3 < 4);
    *(undefined *)(param_1 + 0x430) = 1;
    bVar1 = FUN_14085ce70(param_1 + 0x420);
    *(byte *)(param_1 + 0x418) = *(byte *)(param_1 + 0x418) & 0xfe;
    *(byte *)(param_1 + 0x418) = *(byte *)(param_1 + 0x418) | bVar1 & 1;
    return uVar2;
}



int FUN_140863540(longlong param_1,undefined8 param_2,ulonglong param_3)

{
    undefined4 uVar1;
    undefined8 *puVar2;
    longlong lVar3;
    ulonglong uVar4;
    uint uVar5;
    int iVar6;
    uint uVar7;
    ulonglong uVar8;
    undefined4 *puVar9;
    undefined4 local_res20;
    uint local_res24;
    undefined local_48 [4];
    char local_44;
    char local_3b;
    longlong *local_38;
    byte local_30;

    param_3 = param_3 & 0xffffffff;
    FUN_140862d80();
    uVar8 = 0;
    uVar7 = 0;
    local_38 = (longlong *)0x0;
    FUN_14085ceb0(param_2,param_3,&local_38);
    if (local_38 == (longlong *)0x0) {
        iVar6 = 1;
    }
    else {
        uVar1 = *(undefined4 *)(local_38 + 4);
        puVar9 = (undefined4 *)(param_3 * 0x28 + 0x378 + param_1);
        *puVar9 = uVar1;
        iVar6 = FUN_14082faf0(&PTR_PTR_FUN_140c10f70,uVar1,puVar9 + 4);
        if (iVar6 == 1) {
            (**(code **)(**(longlong **)(puVar9 + 4) + 0x18))(*(longlong **)(puVar9 + 4),local_48);
            if (local_44 == '\0') {
                (**(code **)(**(longlong **)(puVar9 + 4) + 8))();
                puVar2 = *(undefined8 **)(puVar9 + 6);
                *(undefined8 *)(puVar9 + 4) = 0;
                uVar1 = DAT_140c10f28;
                if (puVar2 != (undefined8 *)0x0) {
                    (**(code **)*puVar2)(puVar2,0);
                    FUN_140881720(uVar1,puVar2);
                    *(undefined8 *)(puVar9 + 6) = 0;
                }
                iVar6 = 2;
            }
            else {
                lVar3 = (**(code **)(*(longlong *)local_38[5] + 0x10))
                        ((longlong *)local_38[5],&PTR_PTR_FUN_140c10f70);
                *(longlong *)(puVar9 + 2) = lVar3;
                if (lVar3 == 0) {
                    iVar6 = 2;
                }
                else {
                    FUN_140857d10(local_38,lVar3,0);
                    lVar3 = FUN_1408819f0(DAT_140c10f28,0x38);
                    uVar4 = uVar8;
                    if (lVar3 != 0) {
                        uVar4 = FUN_140861fe0(lVar3,param_1,param_3,param_2);
                    }
                    *(ulonglong *)(puVar9 + 6) = uVar4;
                    iVar6 = 2;
                    if (uVar4 != 0) {
                        *(byte *)(puVar9 + 8) = *(byte *)(puVar9 + 8) & 0xfe;
                        *(byte *)(puVar9 + 8) = *(byte *)(puVar9 + 8) | local_30 & 1;
                        iVar6 = (**(code **)(**(longlong **)(puVar9 + 4) + 0x18))();
                        if (local_3b == '\0') {
                            if (iVar6 == 1) {
                                for (uVar5 = *(uint *)(param_1 + 0x358); uVar5 != 0; uVar5 = uVar5 & uVar5 - 1) {
                                    uVar7 = (int)uVar8 + 1;
                                    uVar8 = (ulonglong)uVar7;
                                }
                                local_res20 = DAT_140c110b4;
                                local_res24 = (uVar7 & 7) << 0x1a | *(uint *)(param_1 + 0x358) & 0x3ffff |
                                              0xa0800000;
                                iVar6 = (**(code **)(**(longlong **)(puVar9 + 4) + 0x30))
                                        (*(longlong **)(puVar9 + 4),&PTR_PTR_FUN_140c10f70,
                                         *(undefined8 *)(puVar9 + 6),*(undefined8 *)(puVar9 + 2),
                                         &local_res20);
                                if ((iVar6 == 1) &&
                                    (iVar6 = (**(code **)(**(longlong **)(puVar9 + 4) + 0x10))(), iVar6 == 1))
                                    goto LAB_140863765;
                            }
                        }
                        else {
                            iVar6 = 2;
                        }
                    }
                }
                FUN_140862d80(param_1,param_3);
            }
        }
    }
    LAB_140863765:
    if (local_38 != (longlong *)0x0) {
        (**(code **)(*local_38 + 0x10))(local_38);
    }
    return iVar6;
}



void FUN_1408637a0(longlong param_1,uint param_2,byte param_3)

{
    if ((param_3 & 1) != 0) {
        *(byte *)(param_1 + 0x398) = *(byte *)(param_1 + 0x398) & 0xfe;
        *(byte *)(param_1 + 0x398) = *(byte *)(param_1 + 0x398) | (byte)param_2 & 1;
    }
    if ((param_3 & 2) != 0) {
        *(byte *)(param_1 + 0x3c0) = *(byte *)(param_1 + 0x3c0) & 0xfe;
        *(byte *)(param_1 + 0x3c0) = *(byte *)(param_1 + 0x3c0) | (byte)(param_2 >> 1) & 1;
    }
    if ((param_3 & 4) != 0) {
        *(byte *)(param_1 + 1000) = *(byte *)(param_1 + 1000) & 0xfe;
        *(byte *)(param_1 + 1000) = *(byte *)(param_1 + 1000) | (byte)(param_2 >> 2) & 1;
    }
    if ((param_3 & 8) != 0) {
        *(byte *)(param_1 + 0x410) = *(byte *)(param_1 + 0x410) & 0xfe;
        *(byte *)(param_1 + 0x410) = *(byte *)(param_1 + 0x410) | (byte)(param_2 >> 3) & 1;
    }
    if ((param_3 & 0x10) != 0) {
        *(byte *)(param_1 + 0x418) = *(byte *)(param_1 + 0x418) & 0xfe;
        *(byte *)(param_1 + 0x418) = *(byte *)(param_1 + 0x418) | (byte)(param_2 >> 4) & 1;
    }
    return;
}



void FUN_140863880(longlong param_1)

{
    byte bVar1;

    bVar1 = FUN_14085ce70(param_1 + 0x420);
    *(byte *)(param_1 + 0x418) = *(byte *)(param_1 + 0x418) & 0xfe;
    *(byte *)(param_1 + 0x418) = *(byte *)(param_1 + 0x418) | bVar1 & 1;
    return;
}



void FUN_1408638b0(longlong param_1)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    float *pfVar3;
    float *pfVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    undefined4 uVar9;
    undefined4 uVar10;
    undefined4 uVar11;
    ulonglong uVar12;
    longlong lVar13;
    ulonglong uVar14;
    longlong lVar15;
    uint uVar16;
    uint uVar17;
    uint uVar18;

    uVar17 = 0;
    for (uVar16 = *(uint *)(param_1 + 0x300); uVar18 = 0, uVar16 != 0; uVar16 = uVar16 & uVar16 - 1) {
        uVar17 = uVar17 + 1;
    }
    do {
        uVar14 = (ulonglong)uVar18;
        uVar12 = (ulonglong)uVar18;
        uVar18 = uVar18 + 1;
        lVar15 = uVar14 * 0x40;
        lVar13 = (uVar12 + 6) * 0x40;
        puVar1 = (undefined4 *)(lVar15 + 0x20 + param_1);
        uVar9 = puVar1[1];
        uVar10 = puVar1[2];
        uVar11 = puVar1[3];
        puVar2 = (undefined4 *)(lVar15 + 0x1a0 + param_1);
        *puVar2 = *puVar1;
        puVar2[1] = uVar9;
        puVar2[2] = uVar10;
        puVar2[3] = uVar11;
        puVar1 = (undefined4 *)(lVar15 + 0x30 + param_1);
        uVar9 = puVar1[1];
        uVar10 = puVar1[2];
        uVar11 = puVar1[3];
        puVar2 = (undefined4 *)(lVar15 + 0x1b0 + param_1);
        *puVar2 = *puVar1;
        puVar2[1] = uVar9;
        puVar2[2] = uVar10;
        puVar2[3] = uVar11;
        puVar1 = (undefined4 *)(lVar15 + param_1);
        uVar9 = puVar1[1];
        uVar10 = puVar1[2];
        uVar11 = puVar1[3];
        puVar2 = (undefined4 *)(lVar13 + param_1);
        *puVar2 = *puVar1;
        puVar2[1] = uVar9;
        puVar2[2] = uVar10;
        puVar2[3] = uVar11;
        puVar1 = (undefined4 *)(lVar15 + 0x10 + param_1);
        uVar9 = puVar1[1];
        uVar10 = puVar1[2];
        uVar11 = puVar1[3];
        puVar2 = (undefined4 *)(lVar13 + 0x10 + param_1);
        *puVar2 = *puVar1;
        puVar2[1] = uVar9;
        puVar2[2] = uVar10;
        puVar2[3] = uVar11;
        pfVar3 = (float *)(lVar15 + 0x1b0 + param_1);
        fVar5 = *(float *)(param_1 + 0x310);
        pfVar4 = (float *)(lVar15 + 0x1a0 + param_1);
        fVar6 = pfVar4[1];
        fVar7 = pfVar4[2];
        fVar8 = pfVar4[3];
        *(undefined (*) [16])(lVar15 + 0x1b0 + param_1) =
                CONCAT412(pfVar3[3] * fVar5,
                          CONCAT48(pfVar3[2] * fVar5,CONCAT44(pfVar3[1] * fVar5,*pfVar3 * fVar5)));
        *(undefined (*) [16])(lVar15 + 0x1a0 + param_1) =
                CONCAT412(fVar5 * fVar8,CONCAT48(fVar5 * fVar7,CONCAT44(fVar5 * fVar6,fVar5 * *pfVar4)));
        fVar5 = *(float *)(param_1 + 0x30c);
        pfVar3 = (float *)(lVar13 + param_1);
        pfVar4 = (float *)(lVar13 + 0x10 + param_1);
        fVar6 = pfVar4[1];
        fVar7 = pfVar4[2];
        fVar8 = pfVar4[3];
        *(undefined (*) [16])(lVar13 + param_1) =
                CONCAT412(pfVar3[3] * fVar5,
                          CONCAT48(pfVar3[2] * fVar5,CONCAT44(pfVar3[1] * fVar5,*pfVar3 * fVar5)));
        *(undefined (*) [16])(lVar13 + 0x10 + param_1) =
                CONCAT412(fVar5 * fVar8,CONCAT48(fVar5 * fVar7,CONCAT44(fVar5 * fVar6,fVar5 * *pfVar4)));
    } while (uVar18 < uVar17);
    return;
}



void FUN_140863990(longlong param_1)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    char cVar10;
    longlong lVar11;
    longlong *plVar12;
    uint uVar13;
    ulonglong uVar14;
    ulonglong uVar15;
    uint uVar16;
    ulonglong uVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    int local_108;
    undefined4 local_104;
    longlong local_100 [7];
    undefined4 local_c8 [48];

    uVar17 = 0;
    uVar15 = uVar17;
    for (uVar13 = *(uint *)(param_1 + 0x300); uVar14 = uVar17, uVar13 != 0;
         uVar13 = uVar13 & uVar13 - 1) {
        uVar15 = (ulonglong)((uint)uVar15 + 1);
    }
    do {
        uVar13 = (int)uVar14 + 1;
        lVar11 = uVar14 * 0x40;
        puVar1 = (undefined4 *)(lVar11 + param_1);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        puVar2 = (undefined4 *)(lVar11 + 0x20 + param_1);
        *puVar2 = *puVar1;
        puVar2[1] = uVar3;
        puVar2[2] = uVar4;
        puVar2[3] = uVar5;
        puVar1 = (undefined4 *)(lVar11 + 0x10 + param_1);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        puVar2 = (undefined4 *)(lVar11 + 0x30 + param_1);
        *puVar2 = *puVar1;
        puVar2[1] = uVar3;
        puVar2[2] = uVar4;
        puVar2[3] = uVar5;
        uVar14 = (ulonglong)uVar13;
    } while (uVar13 < (uint)uVar15);
    fVar20 = *(float *)(param_1 + 0x31c);
    if ((((fVar20 != *(float *)(param_1 + 0x32c)) ||
          (*(float *)(param_1 + 0x330) != *(float *)(param_1 + 800))) ||
         (*(float *)(param_1 + 0x334) != *(float *)(param_1 + 0x324))) ||
        (*(char *)(param_1 + 0x328) != *(char *)(param_1 + 0x338))) {
        fVar20 = (fVar20 + 100.0) * 0.005;
        if (0.0 <= fVar20) {
            if (1.0 < fVar20) {
                fVar20 = 1.0;
            }
        }
        else {
            fVar20 = 0.0;
        }
        fVar18 = (*(float *)(param_1 + 800) + 100.0) * 0.005;
        if (0.0 <= fVar18) {
            if (1.0 < fVar18) {
                fVar18 = 1.0;
            }
        }
        else {
            fVar18 = 0.0;
        }
        fVar19 = *(float *)(param_1 + 0x324) * 0.01;
        if ((*(byte *)(param_1 + 0x308) & 1) == 0) {
            fVar19 = 1.0;
        }
        FUN_1408642d0(fVar20,fVar18,fVar19);
        uVar16 = 0;
        uVar15 = uVar17;
        for (uVar13 = *(uint *)(param_1 + 0x300); uVar14 = uVar17, uVar13 != 0;
             uVar13 = uVar13 & uVar13 - 1) {
            uVar16 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar16;
        }
        do {
            uVar13 = (int)uVar14 + 1;
            uVar3 = local_c8[uVar14 * 8 + 1];
            uVar4 = local_c8[uVar14 * 8 + 2];
            uVar5 = local_c8[uVar14 * 8 + 3];
            uVar6 = local_c8[uVar14 * 8 + 4];
            uVar7 = local_c8[uVar14 * 8 + 5];
            uVar8 = local_c8[uVar14 * 8 + 6];
            uVar9 = local_c8[uVar14 * 8 + 7];
            puVar1 = (undefined4 *)(uVar14 * 0x40 + param_1);
            *puVar1 = local_c8[uVar14 * 8];
            puVar1[1] = uVar3;
            puVar1[2] = uVar4;
            puVar1[3] = uVar5;
            puVar1 = (undefined4 *)(uVar14 * 0x40 + 0x10 + param_1);
            *puVar1 = uVar6;
            puVar1[1] = uVar7;
            puVar1[2] = uVar8;
            puVar1[3] = uVar9;
            uVar14 = (ulonglong)uVar13;
        } while (uVar13 < uVar16);
        if ((*(byte *)(param_1 + 0x300) & 8) != 0) {
            lVar11 = (ulonglong)(uVar16 - 1) * 0x40;
            *(undefined (*) [16])(lVar11 + param_1) = ZEXT816(0);
            *(undefined (*) [16])(lVar11 + 0x10 + param_1) = ZEXT816(0);
            *(undefined4 *)(lVar11 + 0x14 + param_1) = 0x3f800000;
        }
        if (((*(byte *)(param_1 + 0x308) & 2) != 0) &&
            (local_108 = *(int *)(param_1 + 0x304), local_108 != 0)) {
            local_104 = *(undefined4 *)(param_1 + 0x300);
            if (uVar16 != 0) {
                plVar12 = local_100;
                uVar17 = (ulonglong)uVar16;
                uVar15 = (ulonglong)uVar16;
                lVar11 = param_1;
                do {
                    *plVar12 = lVar11;
                    lVar11 = lVar11 + 0x40;
                    plVar12 = plVar12 + 1;
                    uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
            }
            if ((uint)uVar17 < 6) {
                plVar12 = local_100 + uVar17;
                for (uVar15 = (ulonglong)(6 - (uint)uVar17); uVar15 != 0; uVar15 = uVar15 - 1) {
                    *plVar12 = 0;
                    plVar12 = plVar12 + 1;
                }
            }
            cVar10 = FUN_14083b200(DAT_140c61b88,&local_108);
            if (cVar10 != '\0') {
                return;
            }
        }
        *(float *)(param_1 + 0x32c) = *(float *)(param_1 + 0x31c);
        *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(param_1 + 800);
        *(undefined4 *)(param_1 + 0x334) = *(undefined4 *)(param_1 + 0x324);
        *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(param_1 + 0x328);
    }
    return;
}



void FUN_140863bc0(longlong *param_1)

{
    ulonglong uVar1;
    uint uVar2;
    ulonglong uVar3;
    uint uVar4;
    undefined4 *puVar5;
    ulonglong uVar6;
    uint uVar7;

    uVar7 = (uint)*(ushort *)(param_1 + 2) - (uint)*(ushort *)((longlong)param_1 + 0x12);
    if (uVar7 != 0) {
        uVar6 = 0;
        uVar4 = 0;
        uVar3 = uVar6;
        for (uVar2 = *(uint *)(param_1 + 1); uVar2 != 0; uVar2 = uVar2 & uVar2 - 1) {
            uVar4 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar4;
        }
        if (uVar4 != 0) {
            uVar3 = (ulonglong)uVar4;
            do {
                if (uVar7 != 0) {
                    puVar5 = (undefined4 *)
                            (*param_1 +
                             (*(ushort *)(param_1 + 2) * uVar6 +
                              (ulonglong)*(ushort *)((longlong)param_1 + 0x12)) * 4);
                    for (uVar1 = (ulonglong)uVar7; uVar1 != 0; uVar1 = uVar1 - 1) {
                        *puVar5 = 0;
                        puVar5 = puVar5 + 1;
                    }
                }
                uVar6 = uVar6 + 1;
                uVar3 = uVar3 - 1;
            } while (uVar3 != 0);
        }
    }
    return;
}



void FUN_140863c40(longlong param_1)

{
    undefined4 uVar1;

    if (*(int *)(param_1 + 0x420) != 1) {
        uVar1 = FUN_14085cf60(&DAT_140c62458,0);
        FUN_140833a10(uVar1,uVar1,param_1);
        *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_1 + 0x30c);
        *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_1 + 0x314);
    }
    return;
}



undefined8 FUN_140863c90(longlong param_1,longlong *param_2,undefined param_3,undefined8 param_4)

{
    uint uVar1;

    if (*(short *)(*param_2 + 0x12) != 0) {
        *(undefined4 *)(param_1 + 0x35c) = 0x2d;
        if (*(int *)(param_1 + 0x420) == 2) {
            uVar1 = 0;
            do {
                FUN_140863540(param_1,&DAT_140c62458,uVar1);
                uVar1 = uVar1 + 1;
            } while (uVar1 < 4);
        }
        *(undefined4 *)(param_1 + 0x420) = 1;
        FUN_140863260(param_1 + 0x348,*param_2,param_1 + 0x350,param_3,param_4);
    }
    return 1;
}



void FUN_140863d50(longlong param_1,longlong param_2)

{
    longlong *plVar1;
    byte bVar2;
    byte *pbVar3;
    longlong lVar4;

    if (*(int *)(param_1 + 0x420) == 1) {
        lVar4 = 4;
        pbVar3 = (byte *)(param_1 + 0x398);
        do {
            plVar1 = *(longlong **)(pbVar3 + -0x10);
            if (plVar1 != (longlong *)0x0) {
                bVar2 = *(byte *)(param_1 + 0x418) | *pbVar3;
                if ((bVar2 & 1) == 0) {
                    (**(code **)(*plVar1 + 0x38))(plVar1,param_1 + 0x350);
                }
                else if ((bVar2 & 2) == 0) {
                    (**(code **)(*plVar1 + 0x10))();
                }
                bVar2 = *pbVar3;
                *pbVar3 = (bVar2 * '\x02' ^ bVar2) & 2 ^ bVar2;
            }
            pbVar3 = pbVar3 + 0x28;
            lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
        bVar2 = *(byte *)(param_1 + 0x418);
        *(byte *)(param_1 + 0x418) = (bVar2 * '\x02' ^ bVar2) & 2 ^ bVar2;
        *(undefined2 *)(param_2 + 0x12) = *(undefined2 *)(param_1 + 0x360);
    }
    *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(param_1 + 0x30c);
    *(undefined4 *)(param_1 + 0x36c) = *(undefined4 *)(param_1 + 0x310);
    if (*(int *)(param_1 + 0x358) == 3) {
        thunk_FUN_14087b0b0(param_1 + 0x348,param_1 + 0x350,param_2);
    }
    else if (*(int *)(param_1 + 0x358) == 0x3f) {
        thunk_FUN_14087aeb0(param_1 + 0x348,param_1 + 0x350,param_2);
    }
    *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_1 + 0x30c);
    *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_1 + 0x314);
    return;
}



undefined4 FUN_140863e80(longlong param_1,uint param_2)

{
    undefined4 uVar1;
    longlong lVar2;
    uint uVar3;
    int iVar4;
    int iVar5;

    FUN_140863130(param_1,0,param_2);
    FUN_14087acd0();
    *(byte *)(param_1 + 0x398) = *(byte *)(param_1 + 0x398) & 0xfc;
    *(undefined4 *)(param_1 + 0x378) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3a0) = 0xffffffff;
    iVar4 = 0;
    *(undefined8 *)(param_1 + 0x380) = 0;
    *(undefined8 *)(param_1 + 0x388) = 0;
    *(undefined8 *)(param_1 + 0x390) = 0;
    *(undefined8 *)(param_1 + 0x3a8) = 0;
    *(undefined8 *)(param_1 + 0x3b0) = 0;
    *(undefined8 *)(param_1 + 0x3b8) = 0;
    *(byte *)(param_1 + 0x3c0) = *(byte *)(param_1 + 0x3c0) & 0xfc;
    *(undefined4 *)(param_1 + 0x3c8) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x3d0) = 0;
    *(undefined8 *)(param_1 + 0x3d8) = 0;
    *(undefined8 *)(param_1 + 0x3e0) = 0;
    *(byte *)(param_1 + 1000) = *(byte *)(param_1 + 1000) & 0xfc;
    *(undefined4 *)(param_1 + 0x3f0) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x3f8) = 0;
    *(undefined8 *)(param_1 + 0x400) = 0;
    *(undefined8 *)(param_1 + 0x408) = 0;
    *(byte *)(param_1 + 0x410) = *(byte *)(param_1 + 0x410) & 0xfc;
    *(byte *)(param_1 + 0x418) = *(byte *)(param_1 + 0x418) & 0xfc;
    *(undefined4 *)(param_1 + 0x310) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x30c) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x314) = 0;
    *(undefined4 *)(param_1 + 0x420) = 2;
    *(undefined8 *)(param_1 + 0x350) = 0;
    *(undefined8 *)(param_1 + 0x35c) = 0x2b;
    *(undefined4 *)(param_1 + 0x35c) = 0x11;
    iVar5 = 0;
    uVar3 = param_2;
    if (param_2 != 0) {
        do {
            iVar5 = iVar4 + 1;
            uVar3 = uVar3 & uVar3 - 1;
            iVar4 = iVar5;
        } while (uVar3 != 0);
    }
    *(int *)(param_1 + 0x370) = iVar5 << 0xc;
    lVar2 = FUN_140881960(DAT_140c10f28,iVar5 << 0xc,0x10);
    if (lVar2 == 0) {
        uVar1 = 0x34;
    }
    else {
        FUN_1407e4830(lVar2,0,*(undefined4 *)(param_1 + 0x370));
        *(longlong *)(param_1 + 0x350) = lVar2;
        *(undefined4 *)(param_1 + 0x360) = 0x400;
        *(uint *)(param_1 + 0x358) = param_2;
        uVar1 = 1;
    }
    return uVar1;
}



undefined8 FUN_140864030(longlong param_1)

{
    int iVar1;

    iVar1 = *(int *)(param_1 + 0x35c);
    *(undefined4 *)(param_1 + 0x35c) = 0x11;
    *(undefined2 *)(param_1 + 0x362) = 0;
    *(uint *)(param_1 + 0x420) = (iVar1 == 0x11) + 1;
    if (*(longlong *)(param_1 + 0x350) != 0) {
        FUN_1407e4830(*(longlong *)(param_1 + 0x350),0,*(undefined4 *)(param_1 + 0x370));
    }
    return 1;
}



undefined8 FUN_140864080(longlong param_1)

{
    if (*(longlong *)(param_1 + 0x350) != 0) {
        FUN_140881720(DAT_140c10f28);
        *(undefined8 *)(param_1 + 0x350) = 0;
    }
    FUN_140862e30(param_1);
    return 1;
}



int FUN_1408640c0(uint param_1)

{
    DAT_140c110b4 = param_1;
    DAT_140c110b8 = (int)(longlong)(1024.0 / ((float)(ulonglong)param_1 * 0.001));
    DAT_140c110bc = (int)(longlong)((1024000.0 / (float)(ulonglong)param_1) * 0.5);
    DAT_140c110c0 = (param_1 * 0x80) / 48000;
    return param_1 * -0x44f30780;
}



void FUN_140864130(undefined8 param_1,float param_2,int param_3,undefined8 param_4,float *param_5)

{
    longlong lVar1;
    float fVar2;
    float fVar3;
    float fVar4;

    if (DAT_140c61c54 != 0) {
        if (DAT_140c61c54 == 1) {
            if (0xff < param_3) {
                param_3 = 0x200 - param_3;
            }
            fVar2 = 1.0;
            if (param_3 < 0x100) {
                fVar2 = *(float *)((longlong)&DAT_140c62470 + (longlong)(param_3 / 2) * 4);
            }
            *(undefined8 *)(param_5 + 2) = 0;
            *(undefined8 *)(param_5 + 4) = 0;
            param_5[1] = (1.0 - fVar2) + param_5[1];
            *param_5 = fVar2 + *param_5;
        }
        return;
    }
    lVar1 = (longlong)param_3;
    if (0xff < param_3) {
        fVar2 = (float)(&DAT_140c62070)[lVar1];
        if (0x17f < param_3) {
            param_5[1] = (1.0 - fVar2) + param_5[1];
            param_5[4] = fVar2 + param_5[4];
            return;
        }
        param_5[3] = (1.0 - fVar2) + param_5[3];
        param_5[4] = fVar2 + param_5[4];
        return;
    }
    fVar2 = *(float *)((longlong)&DAT_140c62470 + lVar1 * 4);
    fVar3 = 1.0 - fVar2;
    if (0x7f < param_3) {
        *param_5 = fVar2 + *param_5;
        param_5[3] = fVar3 + param_5[3];
        return;
    }
    if (0.0 < param_2) {
        fVar4 = (1.0 - *(float *)(&DAT_140c62470 + lVar1)) * param_2;
        param_5[2] = *(float *)(&DAT_140c62470 + lVar1) * param_2 + param_5[2];
        fVar3 = (1.0 - param_2) * fVar3;
        fVar2 = (1.0 - param_2) * fVar2;
        if (0x3f < param_3) {
            param_5[1] = fVar3 + param_5[1];
            *param_5 = fVar2 + fVar4 + *param_5;
            return;
        }
        *param_5 = fVar2 + *param_5;
        param_5[1] = fVar3 + fVar4 + param_5[1];
        return;
    }
    *param_5 = fVar2 + *param_5;
    param_5[1] = fVar3 + param_5[1];
    return;
}



void FUN_1408642d0(void)

{
    int iVar1;
    char param_4;
    undefined auVar2 [16];
    undefined auVar3 [16];
    float fVar4;
    float fVar5;
    uint in_stack_00000028;
    undefined8 *in_stack_00000030;
    float local_48;
    float fStack68;
    float fStack64;
    float fStack60;
    float local_38;
    float fStack52;
    float fStack48;
    float fStack44;

    in_stack_00000028 = in_stack_00000028 & 0xfffffff7;
    if (in_stack_00000028 == 3) {
        *in_stack_00000030 = 0;
        in_stack_00000030[1] = 0;
        in_stack_00000030[2] = 0;
        in_stack_00000030[3] = 0;
        in_stack_00000030[4] = 0;
        in_stack_00000030[5] = 0;
        in_stack_00000030[6] = 0;
        in_stack_00000030[7] = 0;
        *(undefined4 *)in_stack_00000030 = 0x3f800000;
        *(undefined4 *)((longlong)in_stack_00000030 + 0x24) = 0x3f800000;
        if (param_4 != '\0') {
            *(undefined4 *)((longlong)in_stack_00000030 + 0xc) = 0x3f800000;
            *(undefined4 *)(in_stack_00000030 + 6) = 0x3f800000;
            FUN_140864b80();
            *(float *)(in_stack_00000030 + 2) = *(float *)(in_stack_00000030 + 2) * local_38;
            *(float *)((longlong)in_stack_00000030 + 0x14) =
                    *(float *)((longlong)in_stack_00000030 + 0x14) * fStack52;
            *(float *)(in_stack_00000030 + 3) = *(float *)(in_stack_00000030 + 3) * fStack48;
            *(float *)((longlong)in_stack_00000030 + 0x1c) =
                    *(float *)((longlong)in_stack_00000030 + 0x1c) * fStack44;
            *(float *)in_stack_00000030 = local_48 * *(float *)in_stack_00000030;
            *(float *)((longlong)in_stack_00000030 + 4) =
                    fStack68 * *(float *)((longlong)in_stack_00000030 + 4);
            *(float *)(in_stack_00000030 + 1) = fStack64 * *(float *)(in_stack_00000030 + 1);
            *(float *)((longlong)in_stack_00000030 + 0xc) =
                    fStack60 * *(float *)((longlong)in_stack_00000030 + 0xc);
            *(undefined (*) [16])(in_stack_00000030 + 4) =
                    CONCAT412(fStack60 * *(float *)((longlong)in_stack_00000030 + 0x2c),
                              CONCAT48(fStack64 * *(float *)(in_stack_00000030 + 5),
                                       CONCAT44(fStack68 * *(float *)((longlong)in_stack_00000030 + 0x24),
                                                local_48 * *(float *)(in_stack_00000030 + 4))));
            *(float *)(in_stack_00000030 + 6) = *(float *)(in_stack_00000030 + 6) * local_38;
            *(float *)((longlong)in_stack_00000030 + 0x34) =
                    *(float *)((longlong)in_stack_00000030 + 0x34) * fStack52;
            *(float *)(in_stack_00000030 + 7) = *(float *)(in_stack_00000030 + 7) * fStack48;
            *(float *)((longlong)in_stack_00000030 + 0x3c) =
                    *(float *)((longlong)in_stack_00000030 + 0x3c) * fStack44;
        }
    }
    else if (in_stack_00000028 == 4) {
        if (param_4 == '\0') {
            FUN_140864b80();
        }
        else {
            FUN_140864b80();
        }
    }
    else if (in_stack_00000028 == 7) {
        FUN_1407e4830(in_stack_00000030,0,0x60);
        *(undefined4 *)in_stack_00000030 = 0x3f800000;
        *(undefined4 *)((longlong)in_stack_00000030 + 0x24) = 0x3f800000;
        if (DAT_140c61c54 == 0) {
            *(undefined4 *)(in_stack_00000030 + 9) = 0x3f800000;
        }
        else if (DAT_140c61c54 == 1) {
            *(undefined4 *)(in_stack_00000030 + 8) = 0x3f000000;
            *(undefined4 *)((longlong)in_stack_00000030 + 0x44) = 0x3f000000;
        }
        if (param_4 != '\0') {
            if (DAT_140c61c54 == 0) {
                *(undefined4 *)((longlong)in_stack_00000030 + 0xc) = 0x3f800000;
                *(undefined4 *)(in_stack_00000030 + 6) = 0x3f800000;
                *(undefined4 *)((longlong)in_stack_00000030 + 0x4c) = 0x3f000000;
                *(undefined4 *)(in_stack_00000030 + 10) = 0x3f000000;
                FUN_140864d00();
                *(float *)(in_stack_00000030 + 2) = *(float *)(in_stack_00000030 + 2) * local_38;
                *(float *)((longlong)in_stack_00000030 + 0x14) =
                        *(float *)((longlong)in_stack_00000030 + 0x14) * fStack52;
                *(float *)(in_stack_00000030 + 3) = *(float *)(in_stack_00000030 + 3) * fStack48;
                *(float *)((longlong)in_stack_00000030 + 0x1c) =
                        *(float *)((longlong)in_stack_00000030 + 0x1c) * fStack44;
                *(float *)in_stack_00000030 = local_48 * *(float *)in_stack_00000030;
                *(float *)((longlong)in_stack_00000030 + 4) =
                        fStack68 * *(float *)((longlong)in_stack_00000030 + 4);
                *(float *)(in_stack_00000030 + 1) = fStack64 * *(float *)(in_stack_00000030 + 1);
                *(float *)((longlong)in_stack_00000030 + 0xc) =
                        fStack60 * *(float *)((longlong)in_stack_00000030 + 0xc);
                *(float *)(in_stack_00000030 + 4) = local_48 * *(float *)(in_stack_00000030 + 4);
                *(float *)((longlong)in_stack_00000030 + 0x24) =
                        fStack68 * *(float *)((longlong)in_stack_00000030 + 0x24);
                *(float *)(in_stack_00000030 + 5) = fStack64 * *(float *)(in_stack_00000030 + 5);
                *(float *)((longlong)in_stack_00000030 + 0x2c) =
                        fStack60 * *(float *)((longlong)in_stack_00000030 + 0x2c);
                *(float *)(in_stack_00000030 + 6) = *(float *)(in_stack_00000030 + 6) * local_38;
                *(float *)((longlong)in_stack_00000030 + 0x34) =
                        *(float *)((longlong)in_stack_00000030 + 0x34) * fStack52;
                *(float *)(in_stack_00000030 + 7) = *(float *)(in_stack_00000030 + 7) * fStack48;
                *(float *)((longlong)in_stack_00000030 + 0x3c) =
                        *(float *)((longlong)in_stack_00000030 + 0x3c) * fStack44;
                *(undefined (*) [16])(in_stack_00000030 + 8) =
                        CONCAT412(fStack60 * *(float *)((longlong)in_stack_00000030 + 0x4c),
                                  CONCAT48(fStack64 * *(float *)(in_stack_00000030 + 9),
                                           CONCAT44(fStack68 * *(float *)((longlong)in_stack_00000030 + 0x44),
                                                    local_48 * *(float *)(in_stack_00000030 + 8))));
                *(float *)(in_stack_00000030 + 10) = *(float *)(in_stack_00000030 + 10) * local_38;
                *(float *)((longlong)in_stack_00000030 + 0x54) =
                        *(float *)((longlong)in_stack_00000030 + 0x54) * fStack52;
                *(float *)(in_stack_00000030 + 0xb) = *(float *)(in_stack_00000030 + 0xb) * fStack48;
                *(float *)((longlong)in_stack_00000030 + 0x5c) =
                        *(float *)((longlong)in_stack_00000030 + 0x5c) * fStack44;
            }
            else if (DAT_140c61c54 == 1) {
                FUN_140864d00();
                auVar2 = ZEXT416((uint)(local_48 * local_48)) & (undefined  [16])0xffffffffffffffff;
                fVar5 = fStack60 * 0.5 * fStack60;
                auVar2 = sqrtps(ZEXT416((uint)fStack60),
                                CONCAT124(SUB1612(auVar2 >> 0x20,0),SUB164(auVar2,0) + fVar5));
                *(int *)in_stack_00000030 = SUB164(auVar2,0);
                auVar2 = ZEXT416((uint)(fStack68 * fStack68)) & (undefined  [16])0xffffffffffffffff;
                fVar4 = local_38 * 0.5 * local_38;
                auVar2 = CONCAT124(SUB1612(auVar2 >> 0x20,0),SUB164(auVar2,0) + fVar4);
                auVar2 = sqrtps(auVar2,auVar2);
                *(int *)((longlong)in_stack_00000030 + 0x24) = SUB164(auVar2,0);
                auVar2 = ZEXT416((uint)(fStack64 * fStack64 + fVar4)) & (undefined  [16])0xffffffffffffffff;
                auVar3 = sqrtps(ZEXT416((uint)local_38),auVar2);
                auVar2 = sqrtps(auVar2,ZEXT416((uint)(fStack64 * fStack64 + fVar5)));
                *(float *)(in_stack_00000030 + 8) = SUB164(auVar2,0) * 0.7071068;
                *(float *)((longlong)in_stack_00000030 + 0x44) = SUB164(auVar3,0) * 0.7071068;
            }
        }
    }
    else if (in_stack_00000028 == 0x33) {
        FUN_1407e4830(in_stack_00000030,0,0x80);
        *(undefined4 *)in_stack_00000030 = 0x3f800000;
        *(undefined4 *)((longlong)in_stack_00000030 + 0x24) = 0x3f800000;
        if (DAT_140c61c54 == 0) {
            *(undefined4 *)((longlong)in_stack_00000030 + 0x4c) = 0x3f800000;
            *(undefined4 *)(in_stack_00000030 + 0xe) = 0x3f800000;
        }
        else if (DAT_140c61c54 == 1) {
            *(undefined4 *)(in_stack_00000030 + 8) = 0x3f3504f3;
            *(undefined4 *)((longlong)in_stack_00000030 + 100) = 0x3f3504f3;
        }
        iVar1 = DAT_140c61c54;
        if (param_4 != '\0') {
            FUN_140864b80();
            if (iVar1 == 0) {
                *(float *)(in_stack_00000030 + 2) = *(float *)(in_stack_00000030 + 2) * local_38;
                *(float *)((longlong)in_stack_00000030 + 0x14) =
                        *(float *)((longlong)in_stack_00000030 + 0x14) * fStack52;
                *(float *)(in_stack_00000030 + 3) = *(float *)(in_stack_00000030 + 3) * fStack48;
                *(float *)((longlong)in_stack_00000030 + 0x1c) =
                        *(float *)((longlong)in_stack_00000030 + 0x1c) * fStack44;
                *(float *)in_stack_00000030 = local_48 * *(float *)in_stack_00000030;
                *(float *)((longlong)in_stack_00000030 + 4) =
                        fStack68 * *(float *)((longlong)in_stack_00000030 + 4);
                *(float *)(in_stack_00000030 + 1) = fStack64 * *(float *)(in_stack_00000030 + 1);
                *(float *)((longlong)in_stack_00000030 + 0xc) =
                        fStack60 * *(float *)((longlong)in_stack_00000030 + 0xc);
                *(float *)(in_stack_00000030 + 4) = local_48 * *(float *)(in_stack_00000030 + 4);
                *(float *)((longlong)in_stack_00000030 + 0x24) =
                        fStack68 * *(float *)((longlong)in_stack_00000030 + 0x24);
                *(float *)(in_stack_00000030 + 5) = fStack64 * *(float *)(in_stack_00000030 + 5);
                *(float *)((longlong)in_stack_00000030 + 0x2c) =
                        fStack60 * *(float *)((longlong)in_stack_00000030 + 0x2c);
                *(float *)(in_stack_00000030 + 6) = *(float *)(in_stack_00000030 + 6) * local_38;
                *(float *)((longlong)in_stack_00000030 + 0x34) =
                        *(float *)((longlong)in_stack_00000030 + 0x34) * fStack52;
                *(float *)(in_stack_00000030 + 7) = *(float *)(in_stack_00000030 + 7) * fStack48;
                *(float *)((longlong)in_stack_00000030 + 0x3c) =
                        *(float *)((longlong)in_stack_00000030 + 0x3c) * fStack44;
                *(float *)(in_stack_00000030 + 8) = local_48 * *(float *)(in_stack_00000030 + 8);
                *(float *)((longlong)in_stack_00000030 + 0x44) =
                        fStack68 * *(float *)((longlong)in_stack_00000030 + 0x44);
                *(float *)(in_stack_00000030 + 9) = fStack64 * *(float *)(in_stack_00000030 + 9);
                *(float *)((longlong)in_stack_00000030 + 0x4c) =
                        fStack60 * *(float *)((longlong)in_stack_00000030 + 0x4c);
                *(float *)(in_stack_00000030 + 10) = *(float *)(in_stack_00000030 + 10) * local_38;
                *(float *)((longlong)in_stack_00000030 + 0x54) =
                        *(float *)((longlong)in_stack_00000030 + 0x54) * fStack52;
                *(float *)(in_stack_00000030 + 0xb) = *(float *)(in_stack_00000030 + 0xb) * fStack48;
                *(float *)((longlong)in_stack_00000030 + 0x5c) =
                        *(float *)((longlong)in_stack_00000030 + 0x5c) * fStack44;
                *(undefined (*) [16])(in_stack_00000030 + 0xc) =
                        CONCAT412(fStack60 * *(float *)((longlong)in_stack_00000030 + 0x6c),
                                  CONCAT48(fStack64 * *(float *)(in_stack_00000030 + 0xd),
                                           CONCAT44(fStack68 * *(float *)((longlong)in_stack_00000030 + 100),
                                                    local_48 * *(float *)(in_stack_00000030 + 0xc))));
                *(float *)(in_stack_00000030 + 0xe) = *(float *)(in_stack_00000030 + 0xe) * local_38;
                *(float *)((longlong)in_stack_00000030 + 0x74) =
                        *(float *)((longlong)in_stack_00000030 + 0x74) * fStack52;
                *(float *)(in_stack_00000030 + 0xf) = *(float *)(in_stack_00000030 + 0xf) * fStack48;
                *(float *)((longlong)in_stack_00000030 + 0x7c) =
                        *(float *)((longlong)in_stack_00000030 + 0x7c) * fStack44;
            }
            else {
                *(float *)in_stack_00000030 = local_48;
                *(float *)((longlong)in_stack_00000030 + 0x24) = fStack68;
                *(float *)(in_stack_00000030 + 8) = fStack60 * 0.7071068;
                *(float *)((longlong)in_stack_00000030 + 100) = local_38 * 0.7071068;
            }
        }
    }
    else if (in_stack_00000028 == 0x37) {
        FUN_1407e4830(in_stack_00000030,0,0xa0);
        *(undefined4 *)in_stack_00000030 = 0x3f800000;
        *(undefined4 *)((longlong)in_stack_00000030 + 0x24) = 0x3f800000;
        if (DAT_140c61c54 == 0) {
            *(undefined4 *)(in_stack_00000030 + 9) = 0x3f800000;
            *(undefined4 *)((longlong)in_stack_00000030 + 0x6c) = 0x3f800000;
            *(undefined4 *)(in_stack_00000030 + 0x12) = 0x3f800000;
        }
        else if (DAT_140c61c54 == 1) {
            *(undefined4 *)(in_stack_00000030 + 0xc) = 0x3f3504f3;
            *(undefined4 *)((longlong)in_stack_00000030 + 0x84) = 0x3f3504f3;
            *(undefined4 *)(in_stack_00000030 + 8) = 0x3f3504f3;
            *(undefined4 *)((longlong)in_stack_00000030 + 0x44) = 0x3f3504f3;
        }
        iVar1 = DAT_140c61c54;
        if (param_4 != '\0') {
            FUN_140864d00();
            if (iVar1 == 0) {
                *(float *)(in_stack_00000030 + 2) = *(float *)(in_stack_00000030 + 2) * local_38;
                *(float *)((longlong)in_stack_00000030 + 0x14) =
                        *(float *)((longlong)in_stack_00000030 + 0x14) * fStack52;
                *(float *)(in_stack_00000030 + 3) = *(float *)(in_stack_00000030 + 3) * fStack48;
                *(float *)((longlong)in_stack_00000030 + 0x1c) =
                        *(float *)((longlong)in_stack_00000030 + 0x1c) * fStack44;
                *(float *)in_stack_00000030 = local_48 * *(float *)in_stack_00000030;
                *(float *)((longlong)in_stack_00000030 + 4) =
                        fStack68 * *(float *)((longlong)in_stack_00000030 + 4);
                *(float *)(in_stack_00000030 + 1) = fStack64 * *(float *)(in_stack_00000030 + 1);
                *(float *)((longlong)in_stack_00000030 + 0xc) =
                        fStack60 * *(float *)((longlong)in_stack_00000030 + 0xc);
                *(float *)(in_stack_00000030 + 4) = local_48 * *(float *)(in_stack_00000030 + 4);
                *(float *)((longlong)in_stack_00000030 + 0x24) =
                        fStack68 * *(float *)((longlong)in_stack_00000030 + 0x24);
                *(float *)(in_stack_00000030 + 5) = fStack64 * *(float *)(in_stack_00000030 + 5);
                *(float *)((longlong)in_stack_00000030 + 0x2c) =
                        fStack60 * *(float *)((longlong)in_stack_00000030 + 0x2c);
                *(float *)(in_stack_00000030 + 6) = *(float *)(in_stack_00000030 + 6) * local_38;
                *(float *)((longlong)in_stack_00000030 + 0x34) =
                        *(float *)((longlong)in_stack_00000030 + 0x34) * fStack52;
                *(float *)(in_stack_00000030 + 7) = *(float *)(in_stack_00000030 + 7) * fStack48;
                *(float *)((longlong)in_stack_00000030 + 0x3c) =
                        *(float *)((longlong)in_stack_00000030 + 0x3c) * fStack44;
                *(float *)(in_stack_00000030 + 8) = local_48 * *(float *)(in_stack_00000030 + 8);
                *(float *)((longlong)in_stack_00000030 + 0x44) =
                        fStack68 * *(float *)((longlong)in_stack_00000030 + 0x44);
                *(float *)(in_stack_00000030 + 9) = fStack64 * *(float *)(in_stack_00000030 + 9);
                *(float *)((longlong)in_stack_00000030 + 0x4c) =
                        fStack60 * *(float *)((longlong)in_stack_00000030 + 0x4c);
                *(float *)(in_stack_00000030 + 10) = *(float *)(in_stack_00000030 + 10) * local_38;
                *(float *)((longlong)in_stack_00000030 + 0x54) =
                        *(float *)((longlong)in_stack_00000030 + 0x54) * fStack52;
                *(float *)(in_stack_00000030 + 0xb) = *(float *)(in_stack_00000030 + 0xb) * fStack48;
                *(float *)((longlong)in_stack_00000030 + 0x5c) =
                        *(float *)((longlong)in_stack_00000030 + 0x5c) * fStack44;
                *(float *)(in_stack_00000030 + 0xc) = local_48 * *(float *)(in_stack_00000030 + 0xc);
                *(float *)((longlong)in_stack_00000030 + 100) =
                        fStack68 * *(float *)((longlong)in_stack_00000030 + 100);
                *(float *)(in_stack_00000030 + 0xd) = fStack64 * *(float *)(in_stack_00000030 + 0xd);
                *(float *)((longlong)in_stack_00000030 + 0x6c) =
                        fStack60 * *(float *)((longlong)in_stack_00000030 + 0x6c);
                *(float *)(in_stack_00000030 + 0xe) = *(float *)(in_stack_00000030 + 0xe) * local_38;
                *(float *)((longlong)in_stack_00000030 + 0x74) =
                        *(float *)((longlong)in_stack_00000030 + 0x74) * fStack52;
                *(float *)(in_stack_00000030 + 0xf) = *(float *)(in_stack_00000030 + 0xf) * fStack48;
                *(float *)((longlong)in_stack_00000030 + 0x7c) =
                        *(float *)((longlong)in_stack_00000030 + 0x7c) * fStack44;
                *(float *)(in_stack_00000030 + 0x10) = *(float *)(in_stack_00000030 + 0x10) * local_48;
                *(float *)((longlong)in_stack_00000030 + 0x84) =
                        *(float *)((longlong)in_stack_00000030 + 0x84) * fStack68;
                *(float *)(in_stack_00000030 + 0x11) = *(float *)(in_stack_00000030 + 0x11) * fStack64;
                *(float *)((longlong)in_stack_00000030 + 0x8c) =
                        *(float *)((longlong)in_stack_00000030 + 0x8c) * fStack60;
                *(float *)(in_stack_00000030 + 0x12) = *(float *)(in_stack_00000030 + 0x12) * local_38;
                *(float *)((longlong)in_stack_00000030 + 0x94) =
                        *(float *)((longlong)in_stack_00000030 + 0x94) * fStack52;
                *(float *)(in_stack_00000030 + 0x13) = *(float *)(in_stack_00000030 + 0x13) * fStack48;
                *(float *)((longlong)in_stack_00000030 + 0x9c) =
                        *(float *)((longlong)in_stack_00000030 + 0x9c) * fStack44;
            }
            else {
                *(float *)in_stack_00000030 = local_48;
                *(float *)((longlong)in_stack_00000030 + 0x24) = fStack68;
                *(float *)((longlong)in_stack_00000030 + 0x44) = fStack64 * 0.7071068;
                *(float *)(in_stack_00000030 + 8) = fStack64 * 0.7071068;
                *(float *)((longlong)in_stack_00000030 + 0x84) = local_38 * 0.7071068;
                *(float *)(in_stack_00000030 + 0xc) = fStack60 * 0.7071068;
            }
        }
    }
    return;
}



void FUN_140864810(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5_00,undefined8 param_6,longlong param_7,uint param_5)

{
    float fVar1;
    float fVar2;
    float fVar3;
    uint uVar4;
    int iVar5;
    undefined (*pauVar6) [16];
    ulonglong uVar7;
    uint uVar8;
    undefined4 uVar9;
    undefined auVar10 [16];
    float fVar11;
    undefined4 in_XMM2_Dc;
    undefined4 in_XMM2_Dd;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    undefined4 uVar17;
    undefined4 uVar18;
    undefined4 uVar19;
    float fVar20;
    float fVar21;
    float fVar22;
    float fVar23;

    uVar17 = (undefined4)((ulonglong)param_3 >> 0x20);
    fVar15 = 0.5;
    fVar16 = ((float)param_3 * 512.0 * 0.01) / (float)(ulonglong)param_5;
    fVar13 = (DAT_140c62870 - param_1) * 0.1591549 * 512.0 + (float)(ulonglong)(param_5 >> 1) * fVar16
            ;
    if ((param_5 & 1) == 0) {
        fVar13 = fVar13 - fVar16 * 0.5;
    }
    fVar11 = fVar16 * 0.0078125;
    auVar10 = CONCAT124(SUB1612(CONCAT412(in_XMM2_Dd,CONCAT48(in_XMM2_Dc,param_3)) >> 0x20,0) &
                        SUB1612((undefined  [16])0xffffffffffffffff >> 0x20,0),fVar11);
    iVar5 = (int)fVar11;
    if ((iVar5 != -0x80000000) && ((float)iVar5 != fVar11)) {
        uVar7 = SUB168(auVar10,0);
        uVar4 = movmskps(param_5 >> 1,
                         CONCAT88(SUB168(CONCAT412(uVar17,CONCAT48(uVar17,uVar7)) >> 0x40,0),
                                  uVar7 & 0xffffffff | uVar7 << 0x20));
        auVar10 = ZEXT416((uint)(float)(iVar5 + (uVar4 & 1 ^ 1)));
    }
    uVar4 = (int)(longlong)SUB164(auVar10,0) + 1;
    fVar11 = 1.0 / (float)(ulonglong)(uVar4 * param_5);
    fVar14 = fVar16 / (float)(ulonglong)uVar4;
    if ((uVar4 & 1) == 0) {
        fVar13 = fVar13 - fVar14 * 0.5;
    }
    uVar7 = 0;
    uVar9 = 0;
    fVar23 = (float)(ulonglong)(uVar4 >> 1) * fVar14;
    uVar17 = uVar9;
    uVar18 = uVar9;
    uVar19 = uVar9;
    fVar20 = fVar11;
    fVar21 = fVar11;
    fVar22 = fVar11;
    do {
        fVar12 = fVar23 + fVar13;
        pauVar6 = (undefined (*) [16])
                ((ulonglong)*(ushort *)(&DAT_140c110c8 + (uVar7 + (ulonglong)(param_5 - 1) * 5) * 2) *
                 0x20 + param_7);
        uVar8 = 0;
        *pauVar6 = CONCAT412(uVar19,CONCAT48(uVar18,CONCAT44(uVar17,uVar9)));
        pauVar6[1] = CONCAT412(uVar19,CONCAT48(uVar18,CONCAT44(uVar17,uVar9)));
        do {
            FUN_140864130((int)(fVar12 + fVar15) & 0x1ff,param_5_00,pauVar6);
            uVar8 = uVar8 + 1;
            fVar12 = fVar12 - fVar14;
        } while (uVar8 < uVar4);
        uVar8 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar8;
        fVar13 = fVar13 - fVar16;
        fVar12 = *(float *)pauVar6[1];
        fVar1 = *(float *)(pauVar6[1] + 4);
        fVar2 = *(float *)(pauVar6[1] + 8);
        fVar3 = *(float *)(pauVar6[1] + 0xc);
        auVar10 = CONCAT412(*(float *)(*pauVar6 + 0xc) * fVar22,
                            CONCAT48(*(float *)(*pauVar6 + 8) * fVar21,
                                     CONCAT44(*(float *)(*pauVar6 + 4) * fVar20,
                                              *(float *)*pauVar6 * fVar11)));
        auVar10 = sqrtps(auVar10,auVar10);
        *pauVar6 = auVar10;
        auVar10 = sqrtps(auVar10,CONCAT412(fVar22 * fVar3,
                                           CONCAT48(fVar21 * fVar2,
                                                    CONCAT44(fVar20 * fVar1,fVar11 * fVar12))));
        pauVar6[1] = auVar10;
    } while (uVar8 < param_5);
    return;
}



void FUN_140864a80(void)

{
    int iVar1;
    undefined8 *puVar2;
    undefined extraout_XMM0 [16];
    double dVar3;
    undefined extraout_XMM0_00 [16];

    iVar1 = 0;
    puVar2 = &DAT_140c62470;
    do {
        FUN_1408fd620();
        dVar3 = SUB168(extraout_XMM0 >> 0x40,0);
        *puVar2 = CONCAT44((float)(dVar3 * dVar3),
                           (float)(SUB168(extraout_XMM0,0) * SUB168(extraout_XMM0,0)));
        FUN_1408fd620();
        iVar1 = iVar1 + 4;
        dVar3 = SUB168(extraout_XMM0_00 >> 0x40,0);
        puVar2[1] = CONCAT44((float)(dVar3 * dVar3),
                             (float)(SUB168(extraout_XMM0_00,0) * SUB168(extraout_XMM0_00,0)));
        puVar2 = puVar2 + 2;
    } while (iVar1 < 0x100);
    if (DAT_140c61c54 == 0) {
        DAT_140c62870 = 0x3f490fdb;
    }
    else {
        DAT_140c62870 = 0x3fc90fdb;
    }
    return;
}


/*
Unable to decompile 'FUN_140864b80'
Cause:
Low-level Error: Overlapping input varnodes
*/


void FUN_140864d00(float param_1,float param_2,undefined8 param_3,undefined8 param_4,
                   undefined4 *param_5)

{
    undefined auVar1 [16];
    float fVar2;
    float fVar3;
    float fVar4;

    fVar4 = (2.0 - param_1 * 2.0) * 0.3333333;
    if (param_2 < 0.5) {
        fVar2 = 1.0 - param_2 * 6.0 * 0.2;
    }
    else {
        fVar2 = (4.0 - param_2 * 4.0) * 0.2;
    }
    fVar3 = 1.0 - fVar2;
    param_5[5] = 0;
    auVar1 = ZEXT416((uint)(fVar3 * 0.3333333)) & (undefined  [16])0xffffffffffffffff;
    auVar1 = sqrtps(auVar1,auVar1);
    param_5[2] = SUB164(auVar1,0);
    auVar1 = sqrtps(auVar1,ZEXT416((uint)(fVar3 * fVar4)));
    *param_5 = SUB164(auVar1,0);
    auVar1 = sqrtps(auVar1,ZEXT416((uint)(fVar3 * (1.0 - (fVar4 + 0.3333333)))));
    param_5[1] = SUB164(auVar1,0);
    auVar1 = sqrtps(auVar1,ZEXT416((uint)(fVar2 * (1.0 - param_1))));
    param_5[3] = SUB164(auVar1,0);
    auVar1 = sqrtps(auVar1,ZEXT416((uint)(fVar2 * param_1)));
    param_5[4] = SUB164(auVar1,0);
    return;
}



void FUN_140864e00(undefined8 *param_1)

{
    int iVar1;
    ulonglong uVar2;
    longlong lVar3;
    longlong *plVar4;

    *param_1 = &PTR_FUN_1409a47b0;
    uVar2 = 1;
    iVar1 = *(int *)(param_1 + 7);
    while (iVar1 != 0) {
        if ((uVar2 & *(uint *)(param_1 + 7)) != 0) {
            FUN_140838e30(DAT_140c61bb0,param_1);
            *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) & ~(uint)uVar2;
        }
        uVar2 = uVar2 << 1 | (ulonglong)((longlong)uVar2 < 0);
        iVar1 = *(int *)(param_1 + 7);
    }
    if (*(int *)(param_1 + 9) != 0) {
        FUN_140839530(DAT_140c61bb0,param_1);
    }
    lVar3 = param_1[4];
    if (lVar3 != param_1[5]) {
        plVar4 = (longlong *)(lVar3 + 0x10);
        do {
            if (*plVar4 != 0) {
                FUN_14084d390(*plVar4,param_1);
                *plVar4 = 0;
            }
            *plVar4 = 0;
            *(undefined4 *)(plVar4 + -1) = 0;
            if (plVar4[1] != 0) {
                FUN_140881720(DAT_140c10f20);
                plVar4[1] = 0;
            }
            plVar4[2] = 0;
            lVar3 = lVar3 + 0x28;
            plVar4 = plVar4 + 5;
        } while (lVar3 != param_1[5]);
    }
    if (param_1[4] != 0) {
        param_1[5] = param_1[4];
        FUN_140881720(DAT_140c10f20);
        param_1[4] = 0;
        param_1[5] = 0;
        *(undefined4 *)(param_1 + 6) = 0;
    }
    FUN_140865e30(param_1);
    return;
}



undefined8 FUN_140864f10(undefined8 param_1,uint param_2)

{
    FUN_140864e00();
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



longlong FUN_140864f40(longlong *param_1)

{
    longlong lVar1;
    uint uVar2;
    char cVar3;

    uVar2 = (uint)((param_1[1] - *param_1) / 0x28);
    if ((*(uint *)(param_1 + 2) <= uVar2) && (cVar3 = FUN_1408652b0(param_1,1), cVar3 == '\0')) {
        return 0;
    }
    if (*(uint *)(param_1 + 2) <= uVar2) {
        return 0;
    }
    lVar1 = param_1[1];
    if (lVar1 != 0) {
        *(undefined4 *)(lVar1 + 8) = 0;
        *(undefined8 *)(lVar1 + 0x10) = 0;
        *(undefined8 *)(lVar1 + 0x18) = 0;
        *(undefined8 *)(lVar1 + 0x20) = 0;
    }
    lVar1 = param_1[1];
    param_1[1] = lVar1 + 0x28;
    return lVar1;
}



int FUN_140864fd0(longlong param_1)

{
    longlong lVar1;
    int iVar2;

    lVar1 = DAT_140c61ba8;
    EnterCriticalSection((LPCRITICAL_SECTION)(DAT_140c61ba8 + 0x1f18));
    iVar2 = *(int *)(param_1 + 8) + 1;
    *(int *)(param_1 + 8) = iVar2;
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x1f18));
    return iVar2;
}



void FUN_140865020(PRTL_CRITICAL_SECTION_DEBUG param_1)

{
    longlong lVar1;
    LPCRITICAL_SECTION lpCriticalSection;
    uint uVar2;

    lVar1 = DAT_140c61ba8;
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_140c61ba8 + 0x1f18);
    EnterCriticalSection(lpCriticalSection);
    uVar2 = *(uint *)&(param_1->ProcessLocksList).Blink % 0xc1;
    (param_1->ProcessLocksList).Flink = (_LIST_ENTRY *)(&lpCriticalSection[1].DebugInfo)[uVar2];
    (&lpCriticalSection[1].DebugInfo)[uVar2] = param_1;
    *(int *)(lVar1 + 0x2548) = *(int *)(lVar1 + 0x2548) + 1;
    // WARNING: Could not recover jumptable at 0x00014086507f. Too many branches
    // WARNING: Treating indirect jump as call
    LeaveCriticalSection(lpCriticalSection);
    return;
}



undefined8 * FUN_140865090(undefined4 param_1)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x50);
    if (puVar1 != (undefined8 *)0x0) {
        FUN_140865e10(puVar1,param_1);
        *puVar1 = &PTR_FUN_1409a47b0;
        puVar1[4] = 0;
        puVar1[5] = 0;
        *(undefined4 *)(puVar1 + 6) = 0;
        *(undefined4 *)(puVar1 + 7) = 0;
        puVar1[8] = 0;
        *(undefined4 *)(puVar1 + 9) = 0;
        FUN_140865020(puVar1);
        return puVar1;
    }
    return (undefined8 *)0x0;
}



undefined8
FUN_140865100(longlong param_1,longlong param_2,float *param_3,uint param_4,undefined8 param_5,
              undefined8 param_6)

{
    char cVar1;
    int *piVar2;
    float fVar3;
    undefined4 local_res8 [6];
    char local_res20 [8];
    longlong local_38;
    uint uStack48;

    for (piVar2 = *(int **)(param_1 + 0x20);
         (piVar2 != *(int **)(param_1 + 0x28) && (*piVar2 != *(int *)(param_2 + 0x18)));
         piVar2 = piVar2 + 10) {
    }
    if (((param_4 & 1) != 0) && ((*(byte *)(param_1 + 0x38) & 1) != 0)) {
        fVar3 = (float)FUN_140836340(DAT_140c61bb0,param_1,0,param_6);
        *param_3 = fVar3 + *param_3;
    }
    if (((param_4 & 2) != 0) && ((*(uint *)(param_1 + 0x38) >> 2 & 1) != 0)) {
        fVar3 = (float)FUN_140836340(DAT_140c61bb0,param_1,2,param_6);
        param_3[2] = fVar3 + param_3[2];
    }
    if (((param_4 & 4) != 0) && ((*(uint *)(param_1 + 0x38) >> 3 & 1) != 0)) {
        fVar3 = (float)FUN_140836340(DAT_140c61bb0,param_1,3,param_6);
        param_3[3] = fVar3 + param_3[3];
    }
    if ((*(int *)(param_1 + 0x48) != 0) && (*(longlong *)(piVar2 + 6) != 0)) {
        local_res20[0] = '\x01';
        cVar1 = FUN_140836940(DAT_140c61bb0,*(int *)(param_1 + 0x48),param_6,local_res8,local_res20);
        if (cVar1 == '\0') {
            local_res20[0] = cVar1;
            local_res8[0] = FUN_1408362f0(DAT_140c61bb0,*(undefined4 *)(param_1 + 0x48),0);
        }
        fVar3 = (float)FUN_140835ca0(local_res8[0],local_res8[0]);
        if ((fVar3 != 1.0) || (local_res20[0] != '\0')) {
            uStack48 = (uint)(local_res20[0] == '\0') | uStack48 & 0xfffffffc;
            local_38 = param_1;
            FUN_14084f8a0(param_5,&local_38);
        }
    }
    return 1;
}



undefined8 FUN_1408652b0(longlong *param_1,int param_2)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;
    undefined8 *puVar5;
    ulonglong uVar6;

    iVar1 = *(int *)(param_1 + 2);
    lVar2 = FUN_1408819f0(DAT_140c10f20,(ulonglong)(uint)(iVar1 + param_2) * 0x28);
    if (lVar2 != 0) {
        uVar6 = (param_1[1] - *param_1) / 0x28;
        uVar4 = uVar6 & 0xffffffff;
        if (*param_1 != 0) {
            if ((int)uVar6 != 0) {
                lVar3 = lVar2 + 0x24;
                uVar6 = uVar4;
                do {
                    if ((undefined8 *)(lVar3 + -0x24) != (undefined8 *)0x0) {
                        *(undefined4 *)(lVar3 + -0x1c) = 0;
                        *(undefined8 *)(lVar3 + -0x14) = 0;
                        *(undefined8 *)(lVar3 + -0xc) = 0;
                        *(undefined8 *)(lVar3 + -4) = 0;
                    }
                    puVar5 = (undefined8 *)((-0x24 - lVar2) + lVar3 + *param_1);
                    *(undefined8 *)(lVar3 + -0x24) = *puVar5;
                    *(undefined8 *)(lVar3 + -0x1c) = puVar5[1];
                    *(undefined8 *)(lVar3 + -0x14) = puVar5[2];
                    *(undefined8 *)(lVar3 + -0xc) = puVar5[3];
                    *(undefined8 *)(lVar3 + -4) = puVar5[4];
                    uVar6 = uVar6 - 1;
                    lVar3 = lVar3 + 0x28;
                } while (uVar6 != 0);
            }
            FUN_140881720(DAT_140c10f20,*param_1);
        }
        *(int *)(param_1 + 2) = iVar1 + param_2;
        *param_1 = lVar2;
        param_1[1] = lVar2 + uVar4 * 0x28;
        return CONCAT71((int7)(uVar4 * 5 >> 8),1);
    }
    return 0;
}



longlong FUN_1408653e0(longlong param_1)

{
    longlong lVar1;
    uint7 uVar3;
    longlong lVar2;

    lVar2 = *(longlong *)(param_1 + 0x20);
    while( true ) {
        uVar3 = (uint7)((ulonglong)lVar2 >> 8);
        if (lVar2 == *(longlong *)(param_1 + 0x28)) {
            return (ulonglong)uVar3 << 8;
        }
        if (((*(longlong *)(lVar2 + 0x10) != 0) &&
             (lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x38), lVar1 != 0)) &&
            (*(short *)(lVar1 + 0x48) != 0)) break;
        lVar2 = lVar2 + 0x28;
    }
    return CONCAT71(uVar3,1);
}



void FUN_140865420(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
                   undefined4 param_5_00,undefined8 param_6,undefined8 param_7,undefined8 param_5)

{
    longlong *plVar1;
    longlong lVar2;
    undefined4 local_38 [2];
    undefined8 local_30;
    undefined local_28;
    undefined8 local_20;
    undefined4 local_18;

    lVar2 = *(longlong *)(param_4 + 0x20);
    local_28 = 0;
    local_20 = param_5;
    local_38[0] = param_5_00;
    local_30 = param_7;
    local_18 = param_3;
    if (lVar2 != *(longlong *)(param_4 + 0x28)) {
        do {
            plVar1 = *(longlong **)(lVar2 + 0x10);
            if (((plVar1 != (longlong *)0x0) && (plVar1[7] != 0)) && (*(short *)(plVar1[7] + 0x48) != 0))
            {
                (**(code **)(*plVar1 + 0xa0))(plVar1,local_38);
            }
            lVar2 = lVar2 + 0x28;
        } while (lVar2 != *(longlong *)(param_4 + 0x28));
    }
    return;
}



void FUN_1408654a0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
                   longlong param_5)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_38;
    uint local_30;
    longlong local_28;
    undefined4 local_20;
    undefined local_18;

    lVar2 = *(longlong *)(param_4 + 0x20);
    if (*(longlong *)(param_4 + 0x28) != lVar2) {
        local_30 = (uint)(param_5 == 0) | local_30 & 0xfffffffc;
        local_38 = param_4;
        local_20 = param_3;
        if (lVar2 != *(longlong *)(param_4 + 0x28)) {
            do {
                if (((*(longlong *)(lVar2 + 0x10) != 0) &&
                     (lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x38), lVar1 != 0)) &&
                    (*(short *)(lVar1 + 0x48) != 0)) {
                    local_18 = 0;
                    local_28 = lVar2 + 0x18;
                    (**(code **)(**(longlong **)(lVar2 + 0x10) + 0xd0))
                            (*(longlong **)(lVar2 + 0x10),FUN_140865db0,param_5,&local_38);
                }
                lVar2 = lVar2 + 0x28;
            } while (lVar2 != *(longlong *)(param_4 + 0x28));
        }
    }
    return;
}



void FUN_140865550(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;

    lVar2 = *(longlong *)(param_1 + 0x20);
    if (lVar2 != *(longlong *)(param_1 + 0x28)) {
        do {
            plVar1 = *(longlong **)(lVar2 + 0x10);
            if (((plVar1 != (longlong *)0x0) && (plVar1[7] != 0)) && (*(short *)(plVar1[7] + 0x48) != 0))
            {
                (**(code **)(*plVar1 + 0x198))();
            }
            lVar2 = lVar2 + 0x28;
        } while (lVar2 != *(longlong *)(param_1 + 0x28));
    }
    return;
}



undefined8 FUN_140865630(longlong *param_1,uint param_2)

{
    longlong lVar1;

    if (param_2 != 0) {
        lVar1 = FUN_1408819f0(DAT_140c10f20,(ulonglong)param_2 * 0x28);
        *param_1 = lVar1;
        param_1[1] = lVar1;
        if (lVar1 == 0) {
            return 0x34;
        }
        *(uint *)(param_1 + 2) = param_2;
    }
    return 1;
}



int FUN_140865690(longlong param_1,int param_2,undefined8 param_3,int param_4)

{
    int *piVar1;
    int iVar2;
    int *piVar3;
    int *piVar4;

    piVar1 = *(int **)(param_1 + 0x28);
    piVar3 = *(int **)(param_1 + 0x20);
    for (piVar4 = piVar3; (piVar4 != piVar1 && (*piVar4 != param_2)); piVar4 = piVar4 + 10) {
    }
    if (piVar4 != *(int **)(param_1 + 0x28)) {
        piVar4 = piVar4 + 2;
        iVar2 = 1;
        goto LAB_1408656e3;
    }
    if (piVar3 == piVar1) {
        LAB_140865723:
        piVar4 = (int *)0x0;
        LAB_140865725:
        piVar3 = (int *)FUN_140864f40(param_1 + 0x20);
        if (piVar3 != (int *)0x0) {
            *piVar3 = param_2;
            piVar4 = piVar3 + 2;
        }
        if (piVar4 == (int *)0x0) {
            return 0x34;
        }
    }
    else {
        do {
            if (*piVar3 == param_2) break;
            piVar3 = piVar3 + 10;
        } while (piVar3 != piVar1);
        if (piVar3 == piVar1) goto LAB_140865723;
        piVar4 = piVar3 + 2;
        if (piVar4 == (int *)0x0) goto LAB_140865725;
    }
    *piVar4 = param_2;
    iVar2 = FUN_140865ce0(piVar4,param_1);
    if (iVar2 != 1) {
        FUN_140865b50(param_1 + 0x20,param_2);
        return iVar2;
    }
    LAB_1408656e3:
    if (param_4 == 0) {
        if (*(longlong *)(piVar4 + 4) != 0) {
            FUN_140881720(DAT_140c10f20);
            *(undefined8 *)(piVar4 + 4) = 0;
        }
        *(undefined8 *)(piVar4 + 6) = 0;
    }
    else {
        iVar2 = FUN_140837e30(piVar4 + 4,param_3,param_4,0);
    }
    if (*(longlong **)(piVar4 + 2) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(piVar4 + 2) + 0x198))();
    }
    return iVar2;
}



int FUN_1408657c0(longlong param_1,int param_2)

{
    longlong *plVar1;
    int iVar2;
    longlong lVar3;

    iVar2 = 1;
    if (*(int *)(param_1 + 0x48) != param_2) {
        if (*(int *)(param_1 + 0x48) != 0) {
            FUN_140839530(DAT_140c61bb0,param_1);
        }
        *(int *)(param_1 + 0x48) = param_2;
        if (param_2 != 0) {
            iVar2 = FUN_1408377b0(DAT_140c61bb0,param_1,param_2);
            if (iVar2 != 1) {
                *(undefined4 *)(param_1 + 0x48) = 0;
            }
        }
        lVar3 = *(longlong *)(param_1 + 0x20);
        if (lVar3 != *(longlong *)(param_1 + 0x28)) {
            do {
                plVar1 = *(longlong **)(lVar3 + 0x10);
                if (((plVar1 != (longlong *)0x0) && (plVar1[7] != 0)) && (*(short *)(plVar1[7] + 0x48) != 0)
                        ) {
                    (**(code **)(*plVar1 + 0x198))();
                }
                lVar3 = lVar3 + 0x28;
            } while (lVar3 != *(longlong *)(param_1 + 0x28));
        }
    }
    return iVar2;
}



undefined8 FUN_140865870(longlong param_1,ushort **param_2,int *param_3)

{
    undefined uVar1;
    ushort uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 *puVar6;
    ulonglong uVar7;

    uVar2 = **param_2;
    *param_2 = *param_2 + 1;
    if (uVar2 != 0) {
        uVar7 = (ulonglong)uVar2;
        do {
            puVar6 = (undefined4 *)*param_2;
            uVar3 = *puVar6;
            *param_2 = (ushort *)(puVar6 + 1);
            uVar4 = puVar6[1];
            *param_2 = (ushort *)(puVar6 + 2);
            uVar5 = puVar6[2];
            *param_2 = (ushort *)(puVar6 + 3);
            uVar1 = *(undefined *)(puVar6 + 3);
            *param_2 = (ushort *)((longlong)puVar6 + 0xd);
            uVar2 = *(ushort *)((longlong)puVar6 + 0xd);
            *param_2 = (ushort *)((longlong)puVar6 + 0xf);
            *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | (uint)(1 << ((byte)uVar4 & 0x3f));
            FUN_1408382f0(DAT_140c61bb0,param_1,uVar3,uVar4,uVar5,uVar1,(ushort *)((longlong)puVar6 + 0xf)
                    ,(uint)uVar2,0,3);
            *param_2 = *param_2 + (ulonglong)uVar2 * 6;
            *param_3 = *param_3 + (uint)uVar2 * -0xc;
            uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
    }
    return 1;
}



void FUN_140865960(longlong param_1,uint **param_2,int *param_3)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    uint *puVar4;
    int iVar5;
    uint uVar6;

    *param_2 = *param_2 + 1;
    iVar5 = FUN_140865870();
    if (iVar5 == 1) {
        uVar1 = **param_2;
        *param_2 = *param_2 + 1;
        iVar5 = FUN_1408657c0(param_1,uVar1);
        if (iVar5 == 1) {
            uVar1 = **param_2;
            *param_2 = *param_2 + 1;
            if (((uVar1 != 0) && (iVar5 = FUN_140865630(param_1 + 0x20,uVar1), iVar5 == 1)) &&
                (uVar6 = 0, uVar1 != 0)) {
                do {
                    puVar4 = *param_2;
                    uVar2 = *puVar4;
                    *param_2 = puVar4 + 1;
                    uVar3 = puVar4[1];
                    *param_2 = puVar4 + 2;
                    iVar5 = FUN_140865690(param_1,uVar2,puVar4 + 2,uVar3);
                    if (iVar5 != 1) {
                        return;
                    }
                    uVar6 = uVar6 + 1;
                    *param_2 = *param_2 + (ulonglong)uVar3 * 3;
                    *param_3 = *param_3 + uVar3 * -0xc;
                } while (uVar6 < uVar1);
            }
        }
    }
    return;
}



void FUN_140865a40(longlong param_1,longlong param_2)

{
    longlong lVar1;
    longlong *plVar2;

    if ((*(longlong *)(param_1 + 0x40) != 0) &&
        (lVar1 = *(longlong *)(param_1 + 0x20), lVar1 != *(longlong *)(param_1 + 0x28))) {
        plVar2 = (longlong *)(lVar1 + 0x10);
        do {
            if (*plVar2 != 0) {
                FUN_14084d390(*plVar2,param_1);
                *plVar2 = 0;
            }
            lVar1 = lVar1 + 0x28;
            plVar2 = plVar2 + 5;
        } while (lVar1 != *(longlong *)(param_1 + 0x28));
    }
    *(longlong *)(param_1 + 0x40) = param_2;
    if ((param_2 != 0) &&
        (lVar1 = *(longlong *)(param_1 + 0x20), lVar1 != *(longlong *)(param_1 + 0x28))) {
        do {
            FUN_140865ce0(lVar1 + 8,param_1);
            lVar1 = lVar1 + 0x28;
        } while (lVar1 != *(longlong *)(param_1 + 0x28));
    }
    return;
}



undefined8
FUN_140865af0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined4 param_5_00,undefined8 param_6_00,float param_5,undefined8 param_6)

{
    float fVar1;

    fVar1 = (float)FUN_1408364e0(DAT_140c61bb0,param_4,param_6);
    FUN_140865420(fVar1,param_2,param_5 - fVar1,param_3,param_5_00);
    return 1;
}



undefined8 * FUN_140865b50(undefined8 *param_1,int param_2)

{
    undefined8 *puVar1;
    ulonglong uVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;

    puVar4 = (undefined8 *)*param_1;
    puVar1 = (undefined8 *)param_1[1];
    if (puVar4 != puVar1) {
        do {
            if (*(int *)puVar4 == param_2) break;
            puVar4 = puVar4 + 5;
        } while (puVar4 != puVar1);
        if (puVar4 != puVar1) {
            if (puVar4 < puVar1 + -5) {
                uVar2 = (longlong)(puVar1 + -5) + (-1 - (longlong)puVar4);
                puVar1 = (undefined8 *)(uVar2 * -0x3333333333333333);
                puVar3 = puVar4 + 5;
                for (uVar2 = (uVar2 / 0x28 + 1) * 5 & 0x1fffffffffffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
                    *puVar4 = *puVar3;
                    puVar3 = puVar3 + 1;
                    puVar4 = puVar4 + 1;
                }
            }
            param_1[1] = param_1[1] + -0x28;
        }
    }
    return puVar1;
}



undefined4 FUN_140865bc0(longlong param_1,int param_2)

{
    undefined4 uVar1;
    undefined8 *puVar2;
    ulonglong uVar3;
    undefined8 *puVar4;

    puVar4 = *(undefined8 **)(param_1 + 0x20);
    puVar2 = *(undefined8 **)(param_1 + 0x28);
    if (puVar4 != puVar2) {
        do {
            if (*(int *)puVar4 == param_2) break;
            puVar4 = puVar4 + 5;
        } while (puVar4 != puVar2);
        if (puVar4 != puVar2) {
            uVar1 = 1;
            if (puVar4[2] != 0) {
                uVar1 = FUN_14084d390(puVar4[2],param_1);
                puVar4[2] = 0;
            }
            puVar4[2] = 0;
            *(undefined4 *)(puVar4 + 1) = 0;
            if (puVar4[3] != 0) {
                FUN_140881720(DAT_140c10f20);
                puVar4[3] = 0;
            }
            puVar4[4] = 0;
            puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + -0x28);
            if (puVar4 < puVar2) {
                uVar3 = ((ulonglong)((longlong)puVar2 + (-1 - (longlong)puVar4)) / 0x28 + 1) * 5 &
                        0x1fffffffffffffff;
                puVar2 = puVar4 + 5;
                for (; uVar3 != 0; uVar3 = uVar3 - 1) {
                    *puVar4 = *puVar2;
                    puVar2 = puVar2 + 1;
                    puVar4 = puVar4 + 1;
                }
            }
            *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -0x28;
            return uVar1;
        }
    }
    return 0x10;
}



void FUN_140865cb0(longlong param_1,int param_2)

{
    int *piVar1;
    int *piVar2;

    piVar2 = *(int **)(param_1 + 0x20);
    piVar1 = *(int **)(param_1 + 0x28);
    if (piVar2 != piVar1) {
        do {
            if (*piVar2 == param_2) break;
            piVar2 = piVar2 + 10;
        } while (piVar2 != piVar1);
        if (piVar2 != piVar1) {
            FUN_140865ce0(piVar2 + 2,param_1);
            return;
        }
    }
    return;
}



int FUN_140865ce0(undefined4 *param_1,longlong param_2)

{
    int iVar1;
    longlong *plVar2;

    if (*(longlong *)(param_1 + 2) == 0) {
        iVar1 = 1;
        plVar2 = (longlong *)FUN_140830f00(DAT_140c61ba8,*param_1,0);
        if (plVar2 != (longlong *)0x0) {
            if ((*(longlong *)(param_2 + 0x40) == 0) || (plVar2[8] == 0)) {
                iVar1 = 3;
            }
            else {
                iVar1 = 2;
                if (plVar2[8] == *(longlong *)(param_2 + 0x40)) {
                    iVar1 = 1;
                }
            }
            if (iVar1 == 1) {
                *(longlong **)(param_1 + 2) = plVar2;
                iVar1 = FUN_14084cd00(plVar2,param_2);
                if (iVar1 != 1) {
                    *(undefined8 *)(param_1 + 2) = 0;
                }
            }
            else if (iVar1 == 3) {
                iVar1 = 1;
            }
            (**(code **)(*plVar2 + 0x10))(plVar2);
        }
        return iVar1;
    }
    return 1;
}



void FUN_140865db0(undefined4 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
    undefined local_res18 [16];

    if (*(char *)(param_4 + 0x20) == '\0') {
        param_1 = FUN_140835ca0(param_1,*(undefined4 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x10),
                                param_3,0,local_res18);
        *(undefined *)(param_4 + 0x20) = 1;
        *(undefined4 *)(param_4 + 0x1c) = param_1;
    }
    FUN_14085f320(param_1,*(undefined4 *)(param_4 + 0x1c),param_2,param_3,param_4,1);
    return;
}



undefined8 * FUN_140865e10(undefined8 *param_1,undefined4 param_2)

{
    *(undefined4 *)(param_1 + 1) = 1;
    *(undefined4 *)(param_1 + 3) = param_2;
    *param_1 = &PTR_FUN_1409a47e8;
    return param_1;
}



void FUN_140865e30(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_1409a47d0;
    return;
}



undefined8 * FUN_140865e40(undefined8 *param_1,byte param_2)

{
    *param_1 = &PTR_FUN_1409a47d0;
    if ((param_2 & 1) != 0) {
        FUN_140001e60();
    }
    return param_1;
}



undefined8 * FUN_140865e70(undefined8 *param_1)

{
    *param_1 = 0;
    param_1[1] = 0;
    *(byte *)((longlong)param_1 + 0x12) = *(byte *)((longlong)param_1 + 0x12) & 0xfc;
    *(undefined2 *)(param_1 + 2) = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    return param_1;
}



void FUN_140865e90(longlong **param_1)

{
    if (param_1[1] != (longlong *)0x0) {
        (**(code **)(*param_1[1] + 8))();
        param_1[1] = (longlong *)0x0;
    }
    if (param_1[3] != (longlong *)0x0) {
        (**(code **)(*param_1[3] + 0x10))();
        param_1[3] = (longlong *)0x0;
    }
    if (*param_1 != (longlong *)0x0) {
        (**(code **)(**param_1 + 0x10))();
        *param_1 = (longlong *)0x0;
    }
    return;
}



longlong ** FUN_140865ef0(longlong **param_1,longlong **param_2)

{
    longlong *plVar1;
    longlong lVar2;
    undefined4 uVar3;
    longlong *plVar4;

    if (param_2 != param_1) {
        plVar4 = *param_2;
        if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 8))(plVar4);
        }
        plVar1 = *param_1;
        *param_1 = plVar4;
        if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x10))();
        }
        if (param_2[1] == (longlong *)0x0) {
            param_1[1] = (longlong *)0x0;
        }
        else {
            lVar2 = *param_2[1];
            uVar3 = FUN_14086d210(*param_1);
            plVar4 = (longlong *)(**(code **)(lVar2 + 0x18))(param_2[1],uVar3);
            param_1[1] = plVar4;
        }
        *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
        plVar4 = param_2[3];
        if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 8))(plVar4);
        }
        plVar1 = param_1[3];
        param_1[3] = plVar4;
        if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x10))();
        }
        param_1[4] = param_2[4];
    }
    return param_1;
}



void FUN_140865fb0(longlong param_1)

{
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    return;
}



undefined8 * FUN_140865fc0(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x20);
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined4 *)(puVar1 + 2) = 0;
        *(undefined4 *)(puVar1 + 3) = 1;
        return puVar1;
    }
    return (undefined8 *)0x0;
}



void FUN_140866000(longlong param_1)

{
    int *piVar1;

    piVar1 = (int *)(param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
        FUN_1408660d0();
        FUN_140881720(DAT_140c10f20,param_1);
        return;
    }
    return;
}



void FUN_140866030(longlong **param_1)

{
    longlong **pplVar1;
    longlong **pplVar2;

    pplVar2 = (longlong **)*param_1;
    pplVar1 = (longlong **)param_1[1];
    if (pplVar2 == pplVar1) {
        param_1[1] = (longlong *)pplVar2;
        return;
    }
    do {
        if (pplVar2[1] != (longlong *)0x0) {
            (**(code **)(*pplVar2[1] + 8))();
            pplVar2[1] = (longlong *)0x0;
        }
        if (pplVar2[3] != (longlong *)0x0) {
            (**(code **)(*pplVar2[3] + 0x10))();
            pplVar2[3] = (longlong *)0x0;
        }
        if (*pplVar2 != (longlong *)0x0) {
            (**(code **)(**pplVar2 + 0x10))();
            *pplVar2 = (longlong *)0x0;
        }
        pplVar2 = pplVar2 + 5;
    } while (pplVar2 != pplVar1);
    param_1[1] = *param_1;
    return;
}



void FUN_1408660d0(longlong *param_1)

{
    longlong lVar1;

    lVar1 = *param_1;
    if (lVar1 != param_1[1]) {
        do {
            if ((*(longlong *)(lVar1 + 0x18) != 0) && (*(longlong *)(lVar1 + 0x20) != 0)) {
                FUN_140874450();
            }
            lVar1 = lVar1 + 0x28;
        } while (lVar1 != param_1[1]);
    }
    if (*param_1 != 0) {
        FUN_140866030(param_1);
        FUN_140881720(DAT_140c10f20,*param_1);
        *param_1 = 0;
        param_1[1] = 0;
        *(undefined4 *)(param_1 + 2) = 0;
    }
    return;
}



void FUN_140866140(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_1409a2f10;
    FUN_140865e30();
    return;
}



undefined8 *
FUN_140866210(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 *param_5,undefined8 param_6,undefined8 param_7,byte param_8,
              undefined4 param_9,longlong *param_10,undefined8 param_11,undefined param_12,
              undefined8 param_13,undefined8 param_14)

{
    longlong lVar1;
    int iVar2;
    undefined8 uVar3;
    undefined4 uVar4;

    uVar4 = 0;
    uVar3 = param_7;
    FUN_14085cfe0();
    *param_1 = &PTR_FUN_1409a4810;
    param_1[2] = &PTR_FUN_1409a48a0;
    lVar1 = param_5[4];
    param_1[0x44] = lVar1;
    if (lVar1 != 0) {
        FUN_140865fb0();
    }
    *(undefined4 *)((longlong)param_1 + 0x26c) = 0;
    *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) & 0xfffffff0;
    param_1[0x4e] = param_10;
    param_1[0x4f] = 0;
    *(byte *)((longlong)param_1 + 0x284) = *(byte *)((longlong)param_1 + 0x284) & 0xf8 | param_8 & 1;
    (**(code **)(*param_10 + 8))();
    if (*(int *)(param_1 + 0x13) == 0) {
        iVar2 = DAT_140c110fc + 1;
        *(int *)(param_1 + 0x13) = DAT_140c110fc;
        DAT_140c110fc = iVar2;
    }
    *(undefined4 *)((longlong)param_1 + 0x194) = *(undefined4 *)(param_5 + 5);
    if (param_1[0x10] == 0) {
        param_1[0x10] = *param_5;
        *param_5 = 0;
        *(byte *)(param_1 + 0x12) =
                *(byte *)(param_1 + 0x12) ^ (*(byte *)(param_5 + 3) ^ *(byte *)(param_1 + 0x12)) & 1;
    }
    if (param_1[0x11] == 0) {
        param_1[0x11] = param_5[1];
        param_5[1] = 0;
        *(byte *)(param_1 + 0x12) =
                *(byte *)(param_1 + 0x12) ^
                (*(char *)((longlong)param_5 + 0x19) * '\x02' ^ *(byte *)(param_1 + 0x12)) & 2;
    }
    *(undefined4 *)(param_1 + 0x45) = 0;
    FUN_1408668e0(param_1,param_7,param_3,param_4,param_6,uVar3,param_9,param_11,param_12,uVar4,
                  param_13,param_14);
    return param_1;
}



undefined8 * FUN_1408663b0(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a4810;
    param_1[2] = &PTR_FUN_1409a48a0;
    (**(code **)(*(longlong *)param_1[0x4e] + 0x10))();
    if (param_1[0x44] != 0) {
        FUN_140866000();
        param_1[0x44] = 0;
    }
    FUN_14085d300(param_1);
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



ulonglong FUN_140866430(longlong param_1)

{
    bool bVar1;
    int iVar2;
    ulonglong uVar3;
    longlong *plVar4;
    ulonglong uVar5;

    bVar1 = false;
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + 0x40);
    uVar5 = 1;
    if (plVar4 != (longlong *)0x0) {
        do {
            iVar2 = (**(code **)(*plVar4 + 0x70))(plVar4);
            if (iVar2 == 2) {
                uVar3 = FUN_14086df90(plVar4);
                if ((((int)uVar3 == 1) || (uVar3 = FUN_14086df90(plVar4), (int)uVar3 == 2)) ||
                    (uVar3 = FUN_14086df90(plVar4), (int)uVar3 == 5)) {
                    return uVar3 & 0xffffffffffffff00;
                }
                iVar2 = FUN_14086df90(plVar4);
                if (iVar2 == 4) {
                    bVar1 = true;
                }
            }
            plVar4 = (longlong *)plVar4[8];
        } while (plVar4 != (longlong *)0x0);
        if ((bVar1) && ((*(byte *)(param_1 + 0x284) & 1) == 0)) {
            uVar5 = 0;
        }
    }
    return uVar5;
}



ulonglong FUN_1408664e0(longlong *param_1)

{
    char cVar1;
    int iVar2;
    int iVar3;
    ulonglong uVar4;

    uVar4 = FUN_14085ed00();
    if ((int)uVar4 != 1) {
        return uVar4;
    }
    iVar3 = (int)(uVar4 & 0xffffffff);
    if (param_1[0x10] != 0) {
        iVar2 = FUN_14083ab00(DAT_140c61b70,param_1[0x10],param_1 + 2);
        if (iVar2 == iVar3) {
            cVar1 = FUN_14083aec0(DAT_140c61b70,param_1[0x10]);
            if (cVar1 == '\0') {
                (**(code **)(*param_1 + 0x80))(param_1,iVar3 + 0xd,0xffffffff);
            }
            else {
                FUN_14083b060(DAT_140c61b70,param_1[0x10],param_1 + 2);
                param_1[0x10] = 0;
                LAB_14086658a:
                if ((*(byte *)(param_1 + 0x12) & 1) != 0) {
                    *(byte *)((longlong)param_1 + 0x17a) = *(byte *)((longlong)param_1 + 0x17a) & 0xfa;
                    *(byte *)((longlong)param_1 + 0x17a) = *(byte *)((longlong)param_1 + 0x17a) | 2;
                    *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xfe;
                }
            }
        }
        else {
            if (iVar2 != 0x1c) {
                param_1[0x10] = 0;
            }
            if (iVar2 == 0x18) goto LAB_14086658a;
        }
    }
    if (param_1[0x11] != 0) {
        iVar3 = FUN_14083ab00(DAT_140c61b70,param_1[0x11],param_1 + 2);
        if (iVar3 == 1) {
            cVar1 = FUN_14083aec0(DAT_140c61b70,param_1[0x11]);
            if (cVar1 == '\0') {
                (**(code **)(*param_1 + 0x80))(param_1,0xe);
                goto LAB_140866658;
            }
            FUN_14083b060(DAT_140c61b70,param_1[0x11],param_1 + 2);
            param_1[0x11] = 0;
        }
        else {
            if (iVar3 != 0x1c) {
                param_1[0x11] = 0;
            }
            if (iVar3 != 0x18) goto LAB_140866658;
        }
        if ((*(byte *)(param_1 + 0x12) & 2) != 0) {
            if ((*(byte *)((longlong)param_1 + 0x17a) & 7) == 0) {
                *(byte *)((longlong)param_1 + 0x17a) = *(byte *)((longlong)param_1 + 0x17a) & 0xf9 | 1;
            }
            *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xfd;
        }
    }
    LAB_140866658:
    if ((((*(byte *)((longlong)param_1 + 0x17a) & 7) == 0) &&
         (*(int *)((longlong)param_1 + 0x194) != 0)) && (param_1[0x11] == 0)) {
        *(byte *)((longlong)param_1 + 0x17a) = *(byte *)((longlong)param_1 + 0x17a) & 0xf9 | 1;
    }
    return uVar4 & 0xffffffff;
}



int FUN_1408666a0(double param_1)

{
    double dVar1;

    dVar1 = (double)(ulonglong)DAT_140c110b4 * param_1 * 0.001;
    if (0.0 < dVar1) {
        return (int)(dVar1 + 0.5);
    }
    return (int)(dVar1 + -0.5);
}



void FUN_1408668e0(longlong param_1,undefined4 *param_2)

{
    uint uVar1;

    *(undefined4 *)(param_1 + 0x228) = *param_2;
    *(undefined4 *)(param_1 + 0x22c) = param_2[1];
    *(undefined4 *)(param_1 + 0x230) = param_2[2];
    *(undefined4 *)(param_1 + 0x234) = param_2[3];
    *(undefined4 *)(param_1 + 0x238) = param_2[4];
    *(undefined4 *)(param_1 + 0x23c) = param_2[5];
    *(undefined4 *)(param_1 + 0x240) = param_2[6];
    *(undefined4 *)(param_1 + 0x244) = param_2[7];
    *(undefined4 *)(param_1 + 0x248) = param_2[8];
    *(undefined4 *)(param_1 + 0x24c) = param_2[9];
    *(undefined4 *)(param_1 + 0x250) = param_2[10];
    *(undefined4 *)(param_1 + 0x254) = param_2[0xb];
    *(undefined4 *)(param_1 + 600) = param_2[0xc];
    *(undefined4 *)(param_1 + 0x25c) = param_2[0xd];
    *(undefined4 *)(param_1 + 0x260) = param_2[0xe];
    *(undefined4 *)(param_1 + 0x264) = param_2[0xf];
    *(undefined4 *)(param_1 + 0x268) = param_2[0x10];
    *(undefined4 *)(param_1 + 0x26c) = param_2[0x11];
    uVar1 = *(uint *)(param_1 + 0x228);
    while ((uVar1 != 0 &&
            ((uVar1 = *(int *)(param_1 + 0x228) - 1, 0x1f < uVar1 ||
                                                     ((*(uint *)(param_1 + 0x26c) >> ((ulonglong)uVar1 & 0x3f) & 1) == 0))))) {
        *(uint *)(param_1 + 0x228) = uVar1;
    }
    return;
}



void FUN_140866c80(longlong *param_1)

{
    undefined4 uVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;
    undefined4 uStackX12;

    if ((((*(byte *)((longlong)param_1 + 0x17d) & 0x10) == 0) &&
         ((**(code **)(*param_1 + 0x88))(param_1,1), ((byte)*(undefined4 *)(param_1 + 0x50) & 0xf) == 4
         )) && (*(int *)((longlong)param_1 + 0x27c) != 0)) {
        plVar3 = (longlong *)FUN_140856d40(0x503,0,param_1 + 0x44);
        if (plVar3 != (longlong *)0x0) {
            lVar4 = FUN_1408819f0(DAT_140c10f20,0x50);
            if ((lVar4 != 0) &&
                (plVar5 = (longlong *)FUN_14082b2c0(lVar4,param_1[0x16]), plVar5 != (longlong *)0x0)) {
                *(undefined4 *)(plVar3 + 0x1e) = *(undefined4 *)((longlong)param_1 + 0x194);
                FUN_140857160(plVar3,param_1 + 0x45);
                (**(code **)(*plVar3 + 0x28))
                        (plVar3,CONCAT44(uStackX12,*(undefined4 *)((longlong)param_1 + 0x27c)) &
                                0xffffff00ffffffff);
                FUN_140857210(plVar3,param_1[0x4e]);
                iVar2 = FUN_140857370(plVar3,param_1[0x10],*(byte *)(param_1 + 0x12) & 1,plVar5);
                if ((iVar2 == 1) &&
                    (iVar2 = FUN_1408572d0(plVar3,param_1[0x11],*(byte *)(param_1 + 0x12) >> 1 & 1,plVar5),
                            iVar2 == 1)) {
                    FUN_140857240(plVar3,param_1 + 0x3f);
                    if ((*(byte *)((longlong)param_1 + 0x17d) & 0x40) != 0) {
                        FUN_140857410(plVar3);
                    }
                    FUN_140857400(plVar3,*(undefined4 *)(param_1 + 0x13));
                    plVar5[1] = (longlong)plVar3;
                    FUN_14082b460(plVar5 + 4,param_1 + 0xc);
                    FUN_14082bb80(DAT_140c61b68,plVar5);
                }
                else {
                    uVar1 = DAT_140c10f20;
                    (**(code **)(*plVar5 + 8))(plVar5,0);
                    FUN_140881720(uVar1,plVar5);
                }
            }
            (**(code **)(*plVar3 + 0x10))(plVar3);
            *(byte *)((longlong)param_1 + 0x17d) = *(byte *)((longlong)param_1 + 0x17d) | 2;
        }
        lVar4 = param_1[0x44];
        param_1[0x44] = 0;
        if (lVar4 != 0) {
            FUN_140866000();
        }
        *(undefined4 *)((longlong)param_1 + 0x27c) = 0;
    }
    return;
}



void FUN_140866e70(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                   undefined param_5,undefined8 param_6)

{
    char cVar1;
    undefined8 extraout_XMM0_Qa;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar2 [16];

    auVar2 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    cVar1 = FUN_140866430();
    if (cVar1 != '\0') {
        FUN_14085ff70(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,auVar2);
    }
    return;
}



void FUN_140866ec0(undefined8 param_1,undefined4 param_2,undefined param_3)

{
    char cVar1;

    cVar1 = FUN_140866430();
    if (cVar1 != '\0') {
        FUN_14085ffb0(param_1,param_2,param_3);
    }
    return;
}



void FUN_140866f00(undefined8 param_1,float param_2,longlong *param_3)

{
    uint uVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong *plVar4;
    int iVar5;
    uint uVar6;
    ulonglong uVar7;
    undefined4 uVar8;
    float fVar9;
    undefined4 uStackX12;

    if (((*(byte *)((longlong)param_3 + 0x17d) & 0x10) == 0) &&
        ((*(byte *)((longlong)param_3 + 0x17d) & 0x20) == 0)) {
        (**(code **)(*param_3 + 0x88))(param_3,1);
        iVar5 = (*(int *)(param_3 + 0x50) << 0x1c) >> 0x1c;
        if (iVar5 - 1U < 2) {
            if (param_2 < 50.0) {
                return;
            }
        }
        else if (iVar5 != 5) {
            return;
        }
        if (*(int *)((longlong)param_3 + 0x27c) != 0) {
            plVar2 = (longlong *)FUN_140856d40(0x503,0,param_3 + 0x44);
            if (plVar2 != (longlong *)0x0) {
                lVar3 = FUN_1408819f0(DAT_140c10f20,0x50);
                if ((lVar3 != 0) &&
                    (plVar4 = (longlong *)FUN_14082b2c0(lVar3,param_3[0x16]), plVar4 != (longlong *)0x0)) {
                    *(undefined4 *)(plVar2 + 0x1e) = *(undefined4 *)((longlong)param_3 + 0x194);
                    FUN_140857160(plVar2,param_3 + 0x45);
                    (**(code **)(*plVar2 + 0x28))
                            (plVar2,CONCAT44(uStackX12,*(undefined4 *)((longlong)param_3 + 0x27c)) &
                                    0xffffff00ffffffff);
                    FUN_140857210(plVar2,param_3[0x4e]);
                    uVar7 = (ulonglong)(*(byte *)(param_3 + 0x12) >> 1 & 1);
                    FUN_1408572d0(plVar2,param_3[0x11],uVar7,plVar4);
                    uVar8 = (undefined4)(uVar7 >> 0x20);
                    FUN_140857240();
                    if (((*(int *)(param_3 + 0x50) << 0x1c) >> 0x1c) - 1U < 2) {
                        fVar9 = *(float *)(param_3 + 0x4f);
                        if (param_2 * 0.5 <= *(float *)(param_3 + 0x4f)) {
                            fVar9 = param_2 * 0.5;
                        }
                        uVar1 = FUN_1408666a0((double)(param_2 - fVar9));
                        FUN_140857140(plVar2,param_3,CONCAT44(uVar8,(int)fVar9));
                    }
                    else {
                        uVar1 = FUN_1408666a0((double)*(float *)(param_3 + 0x4f));
                        if (*(char *)((longlong)param_3 + 0x17e) < '\0') {
                            uVar6 = (uint)(0x5dc00 / (ulonglong)DAT_140c110b4) & 0xffff;
                        }
                        else {
                            uVar6 = 0x400;
                        }
                        if ((int)uVar1 < (int)uVar6) {
                            uVar1 = uVar6;
                        }
                        if (*(char *)((longlong)param_3 + 0x17e) < '\0') {
                            iVar5 = ((uint)(0x5dc00 / (ulonglong)DAT_140c110b4) & 0xffff) +
                                    *(int *)(param_3 + 0x33);
                        }
                        else {
                            iVar5 = *(int *)(param_3 + 0x33) + 0x400;
                        }
                        if (0 < iVar5) {
                            uVar1 = uVar1 + iVar5;
                        }
                        FUN_140857370(plVar2,param_3[0x10],*(byte *)(param_3 + 0x12) & 1,plVar4);
                    }
                    iVar5 = (**(code **)(*plVar2 + 0x30))(plVar2,0xe,uVar1,0,0);
                    uVar8 = DAT_140c10f20;
                    if (iVar5 == 1) {
                        plVar4[1] = (longlong)plVar2;
                        FUN_14082b460(plVar4 + 4,param_3 + 0xc);
                        FUN_14082bb80(DAT_140c61b68,plVar4);
                        if ((0x3ff < (int)uVar1) && (*(int *)((longlong)param_3 + 0x194) != 0)) {
                            FUN_14082c2b0(DAT_140c61b68,plVar4);
                        }
                    }
                    else {
                        (**(code **)(*plVar4 + 8))(plVar4,0);
                        FUN_140881720(uVar8,plVar4);
                    }
                }
                (**(code **)(*plVar2 + 0x10))(plVar2);
                *(byte *)((longlong)param_3 + 0x17d) = *(byte *)((longlong)param_3 + 0x17d) | 2;
            }
            lVar3 = param_3[0x44];
            param_3[0x44] = 0;
            if (lVar3 != 0) {
                FUN_140866000();
            }
            *(undefined4 *)((longlong)param_3 + 0x27c) = 0;
        }
    }
    return;
}



void FUN_140867580(longlong param_1,undefined4 param_2,undefined param_3,undefined param_4)

{
    longlong lVar1;

    *(byte *)(param_1 + 0x284) = *(byte *)(param_1 + 0x284) | 4;
    *(undefined4 *)(param_1 + 0x27c) = 0;
    lVar1 = *(longlong *)(param_1 + 0x220);
    *(undefined8 *)(param_1 + 0x220) = 0;
    if (lVar1 != 0) {
        FUN_140866000();
    }
    FUN_1408610b0(param_1,param_2,param_3,param_4);
    return;
}



undefined4 * FUN_1408675f0(undefined4 *param_1)

{
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    param_1[0x10] = 0;
    *param_1 = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined2 *)((longlong)param_1 + 0x22) = 0;
    param_1[10] = 0;
    *(undefined2 *)(param_1 + 0xb) = 0;
    *(undefined2 *)(param_1 + 0x12) = 0;
    *(undefined8 *)(param_1 + 0x13) = 0;
    param_1[0x15] = 0;
    param_1[0x18] = 0;
    *(undefined8 *)(param_1 + 0x1f) = 0;
    *(undefined8 *)(param_1 + 0x22) = 0;
    return param_1;
}



undefined8 FUN_140867640(longlong param_1)

{
    uint uVar1;
    char cVar2;

    if (*(longlong *)(param_1 + 0x18) == 0) {
        return 0x11;
    }
    uVar1 = *(uint *)(param_1 + 0x28);
    if ((uVar1 & 1) == 0) {
        *(short *)(param_1 + 0x20) = *(short *)(param_1 + 0x20) + 1;
        cVar2 = '\0';
        if (*(ushort *)(param_1 + 0x20) < *(ushort *)(param_1 + 0x22)) {
            if ((uVar1 & 2) != 0) {
                *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 0x18;
            }
        }
        else {
            if ((uVar1 & 2) != 0) {
                *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 8);
            }
            *(undefined2 *)(param_1 + 0x20) = 0;
            cVar2 = '\x01';
        }
    }
    else {
        cVar2 = FUN_1408679a0();
    }
    if (((*(byte *)(param_1 + 0x28) & 2) != 0) &&
        ((cVar2 == '\0' || (*(char *)(param_1 + 0x2d) != '\0')))) {
        *(undefined2 *)(param_1 + 0x24) = 0;
        return 1;
    }
    return 0x11;
}



undefined4 FUN_1408676e0(longlong param_1,uint param_2)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    ulonglong uVar3;

    if (*(longlong *)(param_1 + 0x88) == 0) {
        puVar1 = (undefined4 *)
                FUN_1408819f0(DAT_140c10f20,
                              ((param_2 & 1) + (param_2 >> 1 & 1) + (param_2 >> 2 & 1) +
                               (param_2 >> 3 & 1) + (param_2 >> 4 & 1) + (param_2 >> 5 & 1) +
                               (param_2 >> 6 & 1) + (param_2 >> 7 & 1)) * 0x24);
        *(undefined4 **)(param_1 + 0x88) = puVar1;
        if (puVar1 == (undefined4 *)0x0) {
            return 2;
        }
        uVar3 = 0;
        if (param_2 != 0) {
            do {
                puVar2 = puVar1;
                if ((param_2 & 1) != 0) {
                    puVar2 = puVar1 + 9;
                    *puVar1 = (&DAT_140c62050)[uVar3 * 0x20];
                    puVar1[1] = (&DAT_140c6205c)[uVar3 * 0x20];
                    puVar1[2] = (&DAT_140c62068)[uVar3 * 0x20];
                    puVar1[3] = (&DAT_140c62054)[uVar3 * 0x20];
                    puVar1[4] = (&DAT_140c62060)[uVar3 * 0x20];
                    puVar1[5] = (&DAT_140c6206c)[uVar3 * 0x20];
                    puVar1[6] = (&DAT_140c62058)[uVar3 * 0x20];
                    puVar1[7] = (&DAT_140c62064)[uVar3 * 0x20];
                    puVar1[8] = (&DAT_140c62070)[uVar3 * 0x20];
                }
                uVar3 = (ulonglong)((int)uVar3 + 1);
                param_2 = param_2 >> 1;
                puVar1 = puVar2;
            } while (param_2 != 0);
        }
    }
    return 1;
}



bool FUN_1408677e0(int *param_1)

{
    return *param_1 == 0;
}



void FUN_1408677f0(undefined4 *param_1)

{
    float fVar1;
    ushort uVar2;
    uint uVar3;
    longlong lVar4;
    int iVar5;
    ulonglong uVar6;
    undefined4 *puVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;

    uVar2 = *(ushort *)(param_1 + 9);
    if ((int)(uint)uVar2 < *(int *)(*(longlong **)(param_1 + 6) + 1)) {
        puVar7 = (undefined4 *)((ulonglong)uVar2 * 0x10 + **(longlong **)(param_1 + 6));
        *(ushort *)(param_1 + 9) = uVar2 + 1;
        param_1[0x19] = *puVar7;
        param_1[0x1a] = puVar7[1];
        param_1[0x1b] = puVar7[2];
        FUN_140867a50(param_1);
        iVar5 = (puVar7[3] + -1 + DAT_140c110b8) / DAT_140c110b8;
        if (iVar5 == 0) {
            iVar5 = 1;
        }
        param_1[0x15] = iVar5;
    }
    if (*(int *)(*(longlong *)(param_1 + 6) + 8) <= (int)(uint)*(ushort *)(param_1 + 9)) {
        iVar5 = FUN_140867640(param_1);
        if (iVar5 != 1) {
            *param_1 = 0;
            return;
        }
    }
    uVar6 = (ulonglong)*(ushort *)(param_1 + 9);
    lVar4 = **(longlong **)(param_1 + 6);
    fVar8 = *(float *)(lVar4 + uVar6 * 0x10);
    fVar9 = *(float *)(lVar4 + 4 + uVar6 * 0x10);
    fVar10 = *(float *)(lVar4 + 8 + uVar6 * 0x10);
    iVar5 = rand();
    fVar11 = 1.0;
    fVar8 = fVar8 + ((float)iVar5 * 6.103888e-05 - 1.0) * *(float *)(*(longlong *)(param_1 + 6) + 0xc)
            ;
    iVar5 = rand();
    uVar3 = param_1[0x14];
    fVar1 = *(float *)(*(longlong *)(param_1 + 6) + 0x10);
    param_1[0x1c] = fVar8 - (float)param_1[0x19];
    param_1[0x1d] = fVar9 - (float)param_1[0x1a];
    param_1[0x13] = uVar3;
    param_1[0x14] = param_1[0x15] + uVar3;
    fVar8 = fVar11 / (float)(ulonglong)(uint)param_1[0x15];
    param_1[0x1e] = (fVar10 + ((float)iVar5 * 6.103888e-05 - fVar11) * fVar1) - (float)param_1[0x1b];
    param_1[0x16] = fVar8;
    param_1[0x17] = (uint)((float)(ulonglong)uVar3 * fVar8) ^ 0x80000000;
    return;
}



void FUN_140867990(undefined4 *param_1,undefined4 param_2)

{
    param_1[0x18] = param_2;
    *param_1 = 2;
    return;
}



bool FUN_1408679a0(longlong param_1)

{
    ushort uVar1;
    bool bVar2;
    int iVar3;
    char *pcVar4;
    uint uVar5;
    ulonglong uVar6;
    char *pcVar7;

    uVar1 = *(ushort *)(param_1 + 0x22);
    pcVar7 = *(char **)(param_1 + 0x10);
    bVar2 = true;
    if (uVar1 != 0) {
        uVar6 = (ulonglong)(uint)uVar1;
        pcVar4 = pcVar7;
        do {
            if ((bVar2) && (*pcVar4 != '\0')) {
                bVar2 = true;
            }
            else {
                bVar2 = false;
            }
            pcVar4 = pcVar4 + 1;
            uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
        if (bVar2 == false) goto LAB_140867a01;
    }
    if ((pcVar7 != (char *)0x0) && (uVar5 = 0, uVar1 != 0)) {
        do {
            *pcVar7 = '\0';
            uVar5 = uVar5 + 1;
            pcVar7 = pcVar7 + 1;
        } while (uVar5 < *(ushort *)(param_1 + 0x22));
    }
    LAB_140867a01:
    iVar3 = rand();
    uVar6 = (longlong)iVar3 % (longlong)(int)(uint)*(ushort *)(param_1 + 0x22);
    *(short *)(param_1 + 0x20) = (short)uVar6;
    if ((*(byte *)(param_1 + 0x28) & 2) != 0) {
        *(ulonglong *)(param_1 + 0x18) = *(longlong *)(param_1 + 8) + (uVar6 & 0xffff) * 0x18;
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
        *(undefined *)((uVar6 & 0xffff) + *(longlong *)(param_1 + 0x10)) = 1;
    }
    return bVar2;
}



void FUN_140867a50(longlong param_1,float *param_2)

{
    int iVar1;

    iVar1 = rand();
    *param_2 = ((float)iVar1 * 6.103888e-05 - 1.0) * *(float *)(*(longlong *)(param_1 + 0x18) + 0xc) +
               *param_2;
    iVar1 = rand();
    param_2[2] = ((float)iVar1 * 6.103888e-05 - 1.0) *
                 *(float *)(*(longlong *)(param_1 + 0x18) + 0x10) + param_2[2];
    return;
}



void FUN_140867ad0(undefined4 *param_1,int param_2)

{
    *param_1 = 1;
    param_1[0x13] = param_1[0x13] + (param_2 - param_1[0x18]);
    param_1[0x14] = param_1[0x14] + (param_2 - param_1[0x18]);
    param_1[0x17] = (uint)((float)(ulonglong)(uint)param_1[0x13] * (float)param_1[0x16]) ^ 0x80000000;
    return;
}



void FUN_140867b00(longlong param_1,undefined param_2)

{
    *(undefined *)(param_1 + 0x2d) = param_2;
    return;
}



undefined8
FUN_140867b10(int *param_1,longlong param_2,undefined4 param_3,uint param_4,undefined param_5,
              ushort *param_6)

{
    ushort uVar1;
    undefined *puVar2;
    undefined8 uVar3;
    uint uVar4;

    uVar3 = 2;
    if (*param_1 == 0) {
        *(longlong *)(param_1 + 2) = param_2;
        *(short *)((longlong)param_1 + 0x22) = (short)param_3;
        *(undefined *)((longlong)param_1 + 0x2d) = param_5;
        param_1[10] = param_4;
        if (*(longlong *)(param_6 + 4) == 0) {
            *(longlong *)(param_1 + 6) = param_2;
            uVar4 = 0;
            *(undefined2 *)(param_1 + 8) = 0;
            puVar2 = (undefined *)FUN_1408819f0(DAT_140c10f20,param_3);
            *(undefined **)(param_1 + 4) = puVar2;
            if (puVar2 == (undefined *)0x0) {
                return 2;
            }
            if (*(short *)((longlong)param_1 + 0x22) != 0) {
                do {
                    *puVar2 = 0;
                    uVar4 = uVar4 + 1;
                    puVar2 = puVar2 + 1;
                } while (uVar4 < *(ushort *)((longlong)param_1 + 0x22));
            }
            if ((param_4 & 1) != 0) {
                FUN_1408679a0(param_1);
            }
        }
        else {
            *(longlong *)(param_1 + 4) = *(longlong *)(param_6 + 4);
            uVar1 = *param_6;
            *(ushort *)(param_1 + 8) = uVar1;
            *(ulonglong *)(param_1 + 6) = param_2 + (ulonglong)uVar1 * 0x18;
        }
        uVar3 = 1;
    }
    return uVar3;
}



void FUN_140867be0(longlong param_1,undefined4 param_2)

{
    *(undefined4 *)(param_1 + 0x80) = param_2;
    return;
}



void FUN_140867bf0(longlong param_1,undefined4 param_2)

{
    *(undefined4 *)(param_1 + 0x7c) = param_2;
    return;
}



undefined8 FUN_140867c00(undefined4 *param_1,uint param_2)

{
    undefined4 *puVar1;
    longlong lVar2;
    undefined auVar3 [16];
    undefined auVar4 [16];
    undefined auVar5 [16];
    undefined auVar6 [16];
    int iVar7;
    longlong *plVar8;
    undefined4 in_XMM7_Da;
    float fVar9;
    undefined4 in_XMM7_Db;
    undefined4 in_XMM7_Dc;
    undefined4 in_XMM7_Dd;
    undefined4 in_XMM8_Da;
    float fVar10;
    undefined4 in_XMM8_Db;
    undefined4 in_XMM8_Dc;
    undefined4 in_XMM8_Dd;
    undefined4 in_XMM9_Da;
    float fVar11;
    undefined4 in_XMM9_Db;
    undefined4 in_XMM9_Dc;
    undefined4 in_XMM9_Dd;
    undefined4 in_XMM10_Da;
    float fVar12;
    undefined4 in_XMM10_Db;
    undefined4 in_XMM10_Dc;
    undefined4 in_XMM10_Dd;

    plVar8 = *(longlong **)(param_1 + 6);
    if (plVar8 == (longlong *)0x0) {
        return 2;
    }
    *(undefined *)(param_1 + 0xb) = 1;
    if (0 < *(int *)(plVar8 + 1)) {
        *(undefined2 *)(param_1 + 9) = 0;
        puVar1 = (undefined4 *)*plVar8;
        *(undefined2 *)(param_1 + 9) = 1;
        param_1[0x19] = *puVar1;
        auVar6 = CONCAT412(in_XMM10_Dd,CONCAT48(in_XMM10_Dc,CONCAT44(in_XMM10_Db,in_XMM10_Da)));
        fVar12 = 1.0;
        param_1[0x1a] = puVar1[1];
        param_1[0x1b] = puVar1[2];
        iVar7 = (puVar1[3] + -1 + DAT_140c110b8) / DAT_140c110b8;
        if (iVar7 == 0) {
            iVar7 = 1;
        }
        param_1[0x15] = iVar7;
        if (*(int *)(plVar8 + 1) < 2) {
            *(undefined8 *)(param_1 + 0x1c) = 0;
            param_1[0x1e] = 0;
        }
        else {
            lVar2 = *plVar8;
            auVar3 = CONCAT412(in_XMM7_Dd,CONCAT48(in_XMM7_Dc,CONCAT44(in_XMM7_Db,in_XMM7_Da)));
            auVar4 = CONCAT412(in_XMM8_Dd,CONCAT48(in_XMM8_Dc,CONCAT44(in_XMM8_Db,in_XMM8_Da)));
            auVar5 = CONCAT412(in_XMM9_Dd,CONCAT48(in_XMM9_Dc,CONCAT44(in_XMM9_Db,in_XMM9_Da)));
            fVar10 = *(float *)(lVar2 + 0x10);
            fVar9 = *(float *)(lVar2 + 0x18);
            fVar11 = *(float *)(lVar2 + 0x14);
            if ((((fVar10 == (float)param_1[0x19]) && (fVar11 == (float)param_1[0x1a])) &&
                 (fVar9 == (float)param_1[0x1b])) && (*(int *)(plVar8 + 1) < 3)) {
                FUN_140867a50(param_1,param_1 + 0x19,plVar8,0,auVar6,auVar5,auVar4,auVar3);
                fVar10 = (float)param_1[0x19];
                fVar11 = (float)param_1[0x1a];
                fVar9 = (float)param_1[0x1b];
            }
            else {
                FUN_140867a50(param_1,param_1 + 0x19,plVar8,0,auVar6,auVar5,auVar4,auVar3);
                iVar7 = rand();
                fVar10 = fVar10 + ((float)iVar7 * 6.103888e-05 - fVar12) *
                                  *(float *)(*(longlong *)(param_1 + 6) + 0xc);
                iVar7 = rand();
                fVar9 = fVar9 + ((float)iVar7 * 6.103888e-05 - fVar12) *
                                *(float *)(*(longlong *)(param_1 + 6) + 0x10);
            }
            param_1[0x1c] = fVar10 - (float)param_1[0x19];
            param_1[0x1d] = fVar11 - (float)param_1[0x1a];
            param_1[0x1e] = fVar9 - (float)param_1[0x1b];
        }
        plVar8 = *(longlong **)(param_1 + 0xc);
        if (plVar8 != *(longlong **)(param_1 + 0xe)) {
            do {
                lVar2 = *(longlong *)(*plVar8 + 0x58);
                if ((*(byte *)(lVar2 + 0x4c) & 4) == 0) {
                    *(undefined4 *)(lVar2 + 0x18) = param_1[0x19];
                    *(undefined4 *)(lVar2 + 0x1c) = param_1[0x1a];
                    *(undefined4 *)(lVar2 + 0x20) = param_1[0x1b];
                }
                plVar8 = plVar8 + 1;
            } while (plVar8 != *(longlong **)(param_1 + 0xe));
        }
        *param_1 = 1;
        param_1[0x13] = param_2;
        param_1[0x14] = param_1[0x15] + param_2;
        fVar12 = fVar12 / (float)(ulonglong)(uint)param_1[0x15];
        param_1[0x16] = fVar12;
        param_1[0x17] = (uint)((float)(ulonglong)param_2 * fVar12) ^ 0x80000000;
        return 1;
    }
    return 0x25;
}



void FUN_140867e40(undefined4 *param_1)

{
    *param_1 = 0;
    if (*(longlong *)(param_1 + 0xc) != 0) {
        *(longlong *)(param_1 + 0xe) = *(longlong *)(param_1 + 0xc);
        FUN_140881720(DAT_140c10f20);
        *(undefined8 *)(param_1 + 0xc) = 0;
        *(undefined8 *)(param_1 + 0xe) = 0;
        param_1[0x10] = 0;
    }
    if (((*(byte *)(param_1 + 10) & 2) != 0) && (*(longlong *)(param_1 + 4) != 0)) {
        FUN_140881720(DAT_140c10f20);
        *(undefined8 *)(param_1 + 4) = 0;
    }
    if (*(longlong *)(param_1 + 0x22) != 0) {
        FUN_140881720(DAT_140c10f20);
    }
    return;
}



void FUN_140867ec0(longlong param_1,ulonglong param_2)

{
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    longlong lVar7;
    longlong *plVar8;
    float fVar9;

    fVar9 = (float)(param_2 & 0xffffffff) * *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x5c);
    fVar1 = 1.0;
    if ((1.0 <= fVar9) || (fVar1 = 0.0, fVar9 <= 0.0)) {
        fVar9 = fVar1;
    }
    plVar8 = *(longlong **)(param_1 + 0x30);
    fVar1 = *(float *)(param_1 + 0x78);
    fVar2 = *(float *)(param_1 + 0x70);
    fVar3 = *(float *)(param_1 + 0x74);
    fVar4 = *(float *)(param_1 + 0x6c);
    fVar5 = *(float *)(param_1 + 100);
    fVar6 = *(float *)(param_1 + 0x68);
    if (plVar8 != *(longlong **)(param_1 + 0x38)) {
        do {
            lVar7 = *(longlong *)(*plVar8 + 0x58);
            if ((*(byte *)(lVar7 + 0x4c) & 4) == 0) {
                *(float *)(lVar7 + 0x18) = fVar9 * fVar2 + fVar5;
                *(float *)(lVar7 + 0x1c) = fVar9 * fVar3 + fVar6;
                *(float *)(lVar7 + 0x20) = fVar9 * fVar1 + fVar4;
            }
            plVar8 = plVar8 + 1;
        } while (plVar8 != *(longlong **)(param_1 + 0x38));
    }
    if (*(uint *)(param_1 + 0x50) <= (uint)(param_2 & 0xffffffff)) {
        FUN_1408677f0(param_1);
        return;
    }
    return;
}



void FUN_140867f60(longlong param_1)

{
    longlong lVar1;
    longlong *plVar2;

    plVar2 = *(longlong **)(param_1 + 0x30);
    if (plVar2 != *(longlong **)(param_1 + 0x38)) {
        do {
            lVar1 = *(longlong *)(*plVar2 + 0x58);
            if ((*(byte *)(lVar1 + 0x4c) & 4) == 0) {
                *(undefined4 *)(lVar1 + 0x18) = *(undefined4 *)(param_1 + 100);
                *(undefined4 *)(lVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x68);
                *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(param_1 + 0x6c);
            }
            plVar2 = plVar2 + 1;
        } while (plVar2 != *(longlong **)(param_1 + 0x38));
    }
    return;
}



undefined8 * FUN_140867fa0(undefined8 *param_1)

{
    param_1[5] = 0;
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 7) = 0;
    *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0xfc;
    *(undefined *)((longlong)param_1 + 0x49) = 0;
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    *param_1 = 0x20000000;
    return param_1;
}



undefined8 FUN_140867fd0(undefined8 *param_1,ulonglong param_2)

{
    code **ppcVar1;
    float fVar2;
    byte bVar3;
    undefined8 *puVar4;
    undefined8 uVar5;
    float fVar6;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined4 in_XMM7_Da;
    float fVar7;
    undefined4 in_XMM7_Db;
    undefined4 in_XMM7_Dc;
    undefined4 in_XMM7_Dd;
    undefined auVar8 [16];
    undefined auVar9 [16];

    auVar9 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    uVar5 = 0;
    auVar8 = CONCAT412(in_XMM7_Dd,CONCAT48(in_XMM7_Dc,CONCAT44(in_XMM7_Db,in_XMM7_Da)));
    fVar7 = 1.0;
    if (*(float *)(param_1 + 3) != 0.0) {
        fVar6 = ((float)(param_2 & 0xffffffff) - *(float *)((longlong)param_1 + 0x14)) /
                *(float *)(param_1 + 3);
        *(float *)((longlong)param_1 + 0x1c) = fVar6;
        if (fVar6 < 1.0) {
            if (fVar6 < 0.0) {
                *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
            }
            fVar6 = (float)FUN_140837010(*(undefined4 *)((longlong)param_1 + 0x1c),
                                         *(undefined4 *)(param_1 + 1),
                                         *(undefined4 *)((longlong)param_1 + 0xc));
            bVar3 = *(byte *)(param_1 + 9);
            goto LAB_14086805a;
        }
    }
    fVar6 = *(float *)((longlong)param_1 + 0xc);
    bVar3 = *(byte *)(param_1 + 9);
    uVar5 = 1;
    LAB_14086805a:
    if ((bVar3 & 1) != 0) {
        fVar2 = (float)(((uint)fVar6 & 0x7fffff) + 0x3f800000);
        fVar2 = (fVar2 - fVar7) / (fVar2 + fVar7);
        fVar6 = ((fVar2 * fVar2 * 0.3333333 + fVar7) * fVar2 * 2.0 +
                 ((float)(ulonglong)((uint)fVar6 >> 0x17 & 0xff) - 127.0) * 0.6931472) * 0.4342945 * 20.0
                ;
    }
    puVar4 = (undefined8 *)param_1[5];
    *(float *)(param_1 + 2) = fVar6;
    *(byte *)(param_1 + 9) = bVar3 | 2;
    if (puVar4 != (undefined8 *)param_1[6]) {
        do {
            ppcVar1 = *(code ***)(undefined8 *)*puVar4;
            (**ppcVar1)((undefined8 *)*puVar4,*param_1,ppcVar1,uVar5,auVar8,auVar9);
            puVar4 = puVar4 + 1;
        } while (puVar4 != (undefined8 *)param_1[6]);
    }
    return uVar5;
}



undefined8 FUN_140868140(longlong *param_1,longlong *param_2,ulonglong param_3)

{
    int iVar1;
    longlong *plVar2;
    longlong lVar3;
    uint uVar4;
    longlong *plVar5;
    bool bVar6;
    float fVar7;
    float fVar8;

    *param_1 = param_2[1];
    *(byte *)(param_1 + 9) =
            *(byte *)(param_1 + 9) ^ (*(byte *)(param_1 + 9) ^ *(byte *)(param_2 + 4)) & 1;
    fVar8 = *(float *)(param_2 + 2);
    fVar7 = *(float *)((longlong)param_2 + 0x14);
    if (*(char *)(param_2 + 4) != '\0') {
        if (-37.0 <= fVar8 * 0.05) {
            if ((DAT_140c61bfc & 1) == 0) {
                DAT_140c61bfc = DAT_140c61bfc | 1;
                DAT_140c61bf8 = 2.786635e+07;
            }
            uVar4 = (uint)(longlong)(fVar8 * 0.05 * DAT_140c61bf8 + 1.065353e+09);
            fVar8 = (float)((uVar4 & 0x7fffff) + 0x3f800000);
            fVar8 = ((fVar8 * 0.3251898 + 0.02080577) * fVar8 + 0.6530434) * (float)(uVar4 & 0xff800000);
        }
        else {
            fVar8 = 0.0;
        }
        if (-37.0 <= fVar7 * 0.05) {
            if ((DAT_140c61bfc & 1) == 0) {
                DAT_140c61bfc = DAT_140c61bfc | 1;
                DAT_140c61bf8 = 2.786635e+07;
            }
            uVar4 = (uint)(longlong)(fVar7 * 0.05 * DAT_140c61bf8 + 1.065353e+09);
            fVar7 = (float)((uVar4 & 0x7fffff) + 0x3f800000);
            fVar7 = ((fVar7 * 0.3251898 + 0.02080577) * fVar7 + 0.6530434) * (float)(uVar4 & 0xff800000);
        }
        else {
            fVar7 = 0.0;
        }
    }
    *(float *)(param_1 + 1) = fVar8;
    *(float *)(param_1 + 2) = fVar8;
    *(float *)((longlong)param_1 + 0xc) = fVar7;
    if (((*(char *)((longlong)param_2 + 0x21) == '\0') || (fVar8 < fVar7)) ||
        ((*(int *)((longlong)param_2 + 0x1c) - 3U & 0xfffffffd) == 0)) {
        iVar1 = *(int *)((longlong)param_2 + 0x1c);
    }
    else {
        iVar1 = 8 - *(int *)((longlong)param_2 + 0x1c);
    }
    *(int *)(param_1 + 8) = iVar1;
    *(float *)((longlong)param_1 + 0x14) = (float)(param_3 & 0xffffffff);
    iVar1 = *(int *)(param_2 + 3) + -1 + DAT_140c110b8;
    lVar3 = (longlong)DAT_140c110b8;
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    *(float *)(param_1 + 3) = (float)((longlong)iVar1 / lVar3 & 0xffffffff);
    plVar2 = (longlong *)param_1[5];
    plVar5 = (longlong *)param_1[6];
    bVar6 = plVar2 == plVar5;
    if (!bVar6) {
        do {
            if (*plVar2 == *param_2) break;
            plVar2 = plVar2 + 1;
        } while (plVar2 != plVar5);
        bVar6 = plVar2 == plVar5;
    }
    plVar5 = (longlong *)0x0;
    if (!bVar6) {
        plVar5 = plVar2;
    }
    if (plVar5 == (longlong *)0x0) {
        lVar3 = FUN_14084ca80();
        if (lVar3 == 0) {
            return 2;
        }
        *(char *)((longlong)param_1 + 0x49) = *(char *)((longlong)param_1 + 0x49) + '\x01';
    }
    return 1;
}



void FUN_140868370(undefined8 *param_1)

{
    param_1[6] = param_1[5];
    *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0xfc;
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    *(undefined *)((longlong)param_1 + 0x49) = 0;
    *param_1 = 0x20000000;
    return;
}



void FUN_140868390(longlong param_1)

{
    if (*(longlong *)(param_1 + 0x28) != 0) {
        *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x28);
        FUN_140881720(DAT_140c10f20);
        *(undefined8 *)(param_1 + 0x28) = 0;
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined4 *)(param_1 + 0x38) = 0;
    }
    return;
}



void FUN_1408683d0(longlong param_1)

{
    if (*(longlong *)(param_1 + 0x20) != 0) {
        FUN_140881720(DAT_140c10f28);
    }
    *(undefined2 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    return;
}



undefined8 FUN_140868400(longlong *param_1,ushort param_2,uint param_3)

{
    longlong lVar1;
    undefined8 uVar2;
    uint uVar3;
    int iVar4;

    iVar4 = 0;
    uVar3 = param_3;
    if (param_3 != 0) {
        do {
            iVar4 = iVar4 + 1;
            uVar3 = uVar3 & uVar3 - 1;
        } while (uVar3 != 0);
    }
    lVar1 = FUN_140832b30((uint)param_2 * iVar4 * 4);
    if (lVar1 == 0) {
        uVar2 = 0x34;
    }
    else {
        *param_1 = lVar1;
        *(ushort *)(param_1 + 2) = param_2;
        *(uint *)(param_1 + 1) = param_3;
        uVar2 = 1;
        *(undefined2 *)((longlong)param_1 + 0x12) = 0;
    }
    return uVar2;
}



void FUN_140868480(undefined8 *param_1)

{
    uint uVar1;
    int iVar2;

    iVar2 = 0;
    for (uVar1 = *(uint *)(param_1 + 1); uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
        iVar2 = iVar2 + 1;
    }
    FUN_140833130((uint)*(ushort *)(param_1 + 2) * iVar2 * 4,*param_1);
    *param_1 = 0;
    *(undefined2 *)(param_1 + 2) = 0;
    return;
}



void FUN_1408684d0(undefined8 *param_1)

{
    longlong *plVar1;
    longlong lVar2;

    *param_1 = &PTR_FUN_1409a48b0;
    FUN_140868600();
    if (param_1[0x11] != 0) {
        param_1[0x12] = param_1[0x11];
        FUN_140881720(DAT_140c10f20);
        param_1[0x11] = 0;
        param_1[0x12] = 0;
        *(undefined4 *)(param_1 + 0x13) = 0;
    }
    plVar1 = param_1 + 6;
    lVar2 = 5;
    do {
        if (*plVar1 != 0) {
            FUN_140881720(DAT_140c10f20);
            *plVar1 = 0;
        }
        plVar1[1] = 0;
        plVar1 = plVar1 + 2;
        lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    FUN_140865e30(param_1);
    return;
}



undefined8 FUN_140868580(undefined8 param_1,uint param_2)

{
    FUN_1408684d0();
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



void FUN_140868600(longlong param_1)

{
    longlong lVar1;

    lVar1 = *(longlong *)(param_1 + 0x88);
    if (lVar1 == *(longlong *)(param_1 + 0x90)) {
        *(longlong *)(param_1 + 0x90) = lVar1;
        return;
    }
    do {
        if (*(longlong *)(lVar1 + 0x10) != 0) {
            FUN_140881720(DAT_140c10f20);
            *(undefined8 *)(lVar1 + 0x10) = 0;
        }
        *(undefined8 *)(lVar1 + 0x18) = 0;
        lVar1 = lVar1 + 0x20;
    } while (lVar1 != *(longlong *)(param_1 + 0x90));
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x88);
    return;
}



longlong * FUN_140868680(undefined4 param_1)

{
    int iVar1;
    longlong *plVar2;

    plVar2 = (longlong *)FUN_1408819f0(DAT_140c10f20,0xa0);
    if (plVar2 == (longlong *)0x0) {
        return (longlong *)0x0;
    }
    FUN_140865e10(plVar2,param_1);
    *plVar2 = (longlong)&PTR_FUN_1409a48b0;
    plVar2[6] = 0;
    plVar2[7] = 0;
    plVar2[8] = 0;
    plVar2[9] = 0;
    plVar2[10] = 0;
    plVar2[0xb] = 0;
    plVar2[0xc] = 0;
    plVar2[0xd] = 0;
    plVar2[0xe] = 0;
    plVar2[0xf] = 0;
    plVar2[0x11] = 0;
    plVar2[0x12] = 0;
    *(undefined4 *)(plVar2 + 0x13) = 0;
    iVar1 = FUN_140868740(plVar2);
    if (iVar1 != 1) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        return (longlong *)0x0;
    }
    return plVar2;
}



undefined8 FUN_140868740(PRTL_CRITICAL_SECTION_DEBUG param_1)

{
    longlong lVar1;
    longlong lVar2;
    PRTL_CRITICAL_SECTION_DEBUG p_Var3;
    LPCRITICAL_SECTION lpCriticalSection;
    uint uVar4;

    lVar2 = 0;
    p_Var3 = param_1 + 1;
    do {
        *(undefined *)((longlong)&param_1[2].EntryCount + lVar2) = 0xff;
        lVar2 = lVar2 + 1;
        *(undefined8 *)p_Var3 = 0;
        lVar1 = DAT_140c61ba8;
        p_Var3 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var3->ProcessLocksList;
    } while (lVar2 < 5);
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_140c61ba8 + 0x2550);
    EnterCriticalSection(lpCriticalSection);
    uVar4 = *(uint *)&(param_1->ProcessLocksList).Blink % 0xc1;
    (param_1->ProcessLocksList).Flink = (_LIST_ENTRY *)(&lpCriticalSection[1].DebugInfo)[uVar4];
    (&lpCriticalSection[1].DebugInfo)[uVar4] = param_1;
    *(int *)(lVar1 + 0x2b80) = *(int *)(lVar1 + 0x2b80) + 1;
    LeaveCriticalSection(lpCriticalSection);
    return 1;
}



undefined4 FUN_1408687e0(undefined8 *param_1)

{
    undefined8 *puVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    longlong lVar4;

    lVar4 = DAT_140c61ba8;
    EnterCriticalSection((LPCRITICAL_SECTION)(DAT_140c61ba8 + 0x2550));
    puVar1 = param_1 + 1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    uVar2 = *(undefined4 *)(param_1 + 1);
    if (*(int *)puVar1 == 0) {
        FUN_140868870(DAT_140c61ba8 + 0x2550,*(undefined4 *)(param_1 + 3));
        uVar3 = DAT_140c10f20;
        (**(code **)*param_1)(param_1,0);
        FUN_140881720(uVar3,param_1);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x2550));
    return uVar2;
}



void FUN_140868870(LPCRITICAL_SECTION param_1,ulonglong param_2)

{
    PRTL_CRITICAL_SECTION_DEBUG p_Var1;
    PRTL_CRITICAL_SECTION_DEBUG p_Var2;
    PRTL_CRITICAL_SECTION_DEBUG p_Var3;
    uint uVar4;
    int iVar5;

    EnterCriticalSection(param_1);
    iVar5 = (int)(param_2 & 0xffffffff);
    uVar4 = iVar5 + (int)((param_2 & 0xffffffff) / 0xc1) * -0xc1;
    p_Var1 = (&param_1[1].DebugInfo)[uVar4];
    p_Var3 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    do {
        p_Var2 = p_Var1;
        if (p_Var2 == (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
            LAB_1408688dc:
            // WARNING: Could not recover jumptable at 0x0001408688e9. Too many branches
            // WARNING: Treating indirect jump as call
            LeaveCriticalSection(param_1);
            return;
        }
        if (*(int *)&(p_Var2->ProcessLocksList).Blink == iVar5) {
            p_Var1 = (PRTL_CRITICAL_SECTION_DEBUG)(p_Var2->ProcessLocksList).Flink;
            if (p_Var3 == (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
                (&param_1[1].DebugInfo)[uVar4] = p_Var1;
            }
            else {
                (p_Var3->ProcessLocksList).Flink = (_LIST_ENTRY *)p_Var1;
            }
            *(int *)&param_1[0x27].LockSemaphore = *(int *)&param_1[0x27].LockSemaphore + -1;
            goto LAB_1408688dc;
        }
        p_Var1 = (PRTL_CRITICAL_SECTION_DEBUG)(p_Var2->ProcessLocksList).Flink;
        p_Var3 = p_Var2;
    } while( true );
}



int FUN_1408688f0(longlong param_1,longlong param_2)

{
    byte bVar1;
    undefined uVar2;
    ushort uVar3;
    ushort uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    longlong lVar8;
    char cVar9;
    int iVar10;
    ulonglong uVar11;
    uint uVar12;
    undefined4 *puVar13;
    ushort *puVar14;
    undefined *puVar15;
    uint uVar16;
    int *piVar17;
    float fVar18;

    cVar9 = *(char *)(param_2 + 4);
    *(byte *)(param_1 + 0x85) = *(byte *)(param_1 + 0x85) & 0xfe;
    puVar13 = (undefined4 *)(param_2 + 5);
    *(byte *)(param_1 + 0x85) = *(byte *)(param_1 + 0x85) | cVar9 != '\0';
    if ((*(byte *)(param_1 + 0x85) & 1) != 0) {
        fVar18 = (float)FUN_1408296a0(*puVar13);
        *(float *)(param_1 + 0x20) = fVar18 * 0.5;
        fVar18 = (float)FUN_1408296a0(*(undefined4 *)(param_2 + 9));
        puVar13 = (undefined4 *)(param_2 + 0x15);
        *(float *)(param_1 + 0x24) = fVar18 * 0.5;
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0xd);
        *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x11);
    }
    puVar14 = (ushort *)((longlong)puVar13 + 6);
    *(undefined *)(param_1 + 0x80) = *(undefined *)puVar13;
    *(undefined *)(param_1 + 0x81) = *(undefined *)((longlong)puVar13 + 1);
    *(undefined *)(param_1 + 0x82) = *(undefined *)((longlong)puVar13 + 2);
    iVar10 = 2;
    *(undefined *)(param_1 + 0x83) = *(undefined *)((longlong)puVar13 + 3);
    uVar16 = 0;
    *(undefined *)(param_1 + 0x84) = *(undefined *)(puVar13 + 1);
    bVar1 = *(byte *)((longlong)puVar13 + 5);
    if (bVar1 != 0) {
        fVar18 = 1.0;
        piVar17 = (int *)(param_1 + 0x3c);
        do {
            uVar3 = *(ushort *)((longlong)puVar14 + 1);
            uVar2 = *(undefined *)puVar14;
            puVar14 = (ushort *)((longlong)puVar14 + 3);
            iVar10 = FUN_140837e30(((ulonglong)uVar16 + 3) * 0x10 + param_1,puVar14,(uint)uVar3,uVar2);
            if (iVar10 != 1) break;
            if (((*(byte *)(param_1 + 0x80) == uVar16) || (*(byte *)(param_1 + 0x81) == uVar16)) ||
                (*(byte *)(param_1 + 0x82) == uVar16)) {
                if (*piVar17 == 0) {
                    *piVar17 = 4;
                }
                else if (*piVar17 == 2) {
                    uVar12 = 0;
                    if (piVar17[-1] != 0) {
                        do {
                            uVar11 = (ulonglong)uVar12;
                            uVar12 = uVar12 + 1;
                            *(float *)(*(longlong *)(piVar17 + -3) + 4 + uVar11 * 0xc) =
                                    *(float *)(*(longlong *)(piVar17 + -3) + 4 + uVar11 * 0xc) + fVar18;
                        } while (uVar12 < (uint)piVar17[-1]);
                    }
                    *piVar17 = 0;
                }
            }
            uVar16 = uVar16 + 1;
            piVar17 = piVar17 + 4;
            puVar14 = puVar14 + (ulonglong)(uint)uVar3 * 6;
        } while (uVar16 < bVar1);
    }
    uVar3 = *puVar14;
    puVar13 = (undefined4 *)(puVar14 + 1);
    uVar16 = 0;
    if (uVar3 != 0) {
        do {
            uVar5 = puVar13[2];
            uVar6 = *puVar13;
            uVar7 = puVar13[1];
            uVar4 = *(ushort *)((longlong)puVar13 + 0xd);
            uVar2 = *(undefined *)(puVar13 + 3);
            puVar15 = (undefined *)((longlong)puVar13 + 0xf);
            iVar10 = 1;
            FUN_140868bd0(param_1,uVar7,uVar5);
            uVar11 = *(longlong *)(param_1 + 0x90) - *(longlong *)(param_1 + 0x88) >> 5 & 0xffffffff;
            if (((uVar11 < *(uint *)(param_1 + 0x98)) ||
                 (cVar9 = FUN_140857780((longlong *)(param_1 + 0x88),2), cVar9 != '\0')) &&
                (uVar11 < *(uint *)(param_1 + 0x98))) {
                lVar8 = *(longlong *)(param_1 + 0x90);
                if (lVar8 != 0) {
                    *(undefined8 *)(lVar8 + 0x10) = 0;
                    *(undefined8 *)(lVar8 + 0x18) = 0;
                }
                puVar13 = *(undefined4 **)(param_1 + 0x90);
                *(undefined4 **)(param_1 + 0x90) = puVar13 + 8;
                if (puVar13 == (undefined4 *)0x0) goto LAB_140868b7d;
                puVar13[1] = uVar7;
                puVar13[2] = uVar5;
                *puVar13 = uVar6;
                if ((puVar15 != (undefined *)0x0) && (uVar4 != 0)) {
                    iVar10 = FUN_140837e30(puVar13 + 4,puVar15,(ulonglong)uVar4,uVar2);
                }
            }
            else {
                LAB_140868b7d:
                iVar10 = 2;
            }
            if (iVar10 != 1) {
                return iVar10;
            }
            uVar16 = uVar16 + 1;
            puVar13 = (undefined4 *)(puVar15 + (ulonglong)uVar4 * 0xc);
        } while (uVar16 < uVar3);
    }
    return iVar10;
}



void FUN_140868bd0(longlong param_1,int param_2,int param_3)

{
    undefined8 *puVar1;
    ulonglong uVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    longlong lVar5;

    puVar3 = *(undefined8 **)(param_1 + 0x88);
    if (puVar3 != *(undefined8 **)(param_1 + 0x90)) {
        lVar5 = (longlong)puVar3 + 0x1c;
        do {
            if ((*(int *)(&DAT_ffffffffffffffe8 + lVar5) == param_2) &&
                (*(int *)(lVar5 + -0x14) == param_3)) {
                if (*(longlong *)(lVar5 + -0xc) != 0) {
                    FUN_140881720(DAT_140c10f20);
                    *(undefined8 *)(lVar5 + -0xc) = 0;
                }
                *(undefined8 *)(lVar5 + -4) = 0;
                puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x90) + -0x20);
                if (puVar3 < puVar1) {
                    uVar2 = ((ulonglong)((longlong)puVar1 + (-1 - (longlong)puVar3)) >> 3 & 0xfffffffffffffffc
                            ) + 4 & 0x1ffffffffffffffc;
                    puVar1 = (undefined8 *)(lVar5 + 4);
                    puVar4 = puVar3;
                    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
                        *puVar4 = *puVar1;
                        puVar1 = puVar1 + 1;
                        puVar4 = puVar4 + 1;
                    }
                }
                *(longlong *)(param_1 + 0x90) = *(longlong *)(param_1 + 0x90) + -0x20;
            }
            else {
                puVar3 = puVar3 + 4;
                lVar5 = lVar5 + 0x20;
            }
        } while (puVar3 != *(undefined8 **)(param_1 + 0x90));
    }
    return;
}



int * FUN_140868cc0(longlong param_1,undefined8 *param_2)

{
    int *piVar1;

    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140c62878);
    for (piVar1 = *(int **)(param_1 + (ulonglong)((uint)((int)param_2[1] + (int)*param_2) % 0x1f) * 8)
            ; piVar1 != (int *)0x0; piVar1 = *(int **)(piVar1 + 4)) {
        if ((*piVar1 == (int)*param_2) && (*(longlong *)(piVar1 + 2) == param_2[1])) goto LAB_140868d45;
    }
    piVar1 = (int *)0x0;
    LAB_140868d45:
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c62878);
    return piVar1;
}



void FUN_140868d60(undefined8 *param_1)

{
    longlong lVar1;
    undefined8 *puVar2;

    *(undefined4 *)(param_1 + 0x1f) = 0;
    lVar1 = 3;
    do {
        puVar2 = param_1;
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        lVar1 = lVar1 + -1;
        param_1 = puVar2 + 8;
    } while (lVar1 != 0);
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    return;
}



void FUN_140868dc0(undefined8 param_1,undefined8 param_2)

{
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140c62878);
    FUN_140868f00(param_1,param_2);
    // WARNING: Could not recover jumptable at 0x000140868df9. Too many branches
    // WARNING: Treating indirect jump as call
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c62878);
    return;
}



void FUN_140868e00(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
    int *piVar1;
    ulonglong uVar2;

    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140c62878);
    for (piVar1 = *(int **)(param_1 +
                            (ulonglong)((uint)(*(int *)(param_2 + 1) + *(int *)param_2) % 0x1f) * 8);
         piVar1 != (int *)0x0; piVar1 = *(int **)(piVar1 + 4)) {
        if ((*piVar1 == *(int *)param_2) && (*(longlong *)(piVar1 + 2) == param_2[1]))
            goto LAB_140868ed9;
    }
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    uVar2 = (ulonglong)((uint)(*(int *)(param_2 + 1) + *(int *)param_2) % 0x1f);
    param_3[2] = *(undefined8 *)(param_1 + uVar2 * 8);
    *(undefined8 **)(param_1 + uVar2 * 8) = param_3;
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
    LAB_140868ed9:
    // WARNING: Could not recover jumptable at 0x000140868eef. Too many branches
    // WARNING: Treating indirect jump as call
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c62878);
    return;
}



void FUN_140868f00(longlong param_1,int *param_2)

{
    int *piVar1;
    int *piVar2;
    int *piVar3;
    ulonglong uVar4;

    uVar4 = (ulonglong)((uint)(param_2[2] + *param_2) % 0x1f);
    piVar1 = *(int **)(param_1 + uVar4 * 8);
    if (piVar1 != (int *)0x0) {
        piVar3 = (int *)0x0;
        do {
            piVar2 = piVar1;
            if ((*piVar2 == *param_2) && (*(longlong *)(piVar2 + 2) == *(longlong *)(param_2 + 2))) {
                if (piVar3 == (int *)0x0) {
                    *(undefined8 *)(param_1 + uVar4 * 8) = *(undefined8 *)(piVar2 + 4);
                    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + -1;
                    return;
                }
                *(undefined8 *)(piVar3 + 4) = *(undefined8 *)(piVar2 + 4);
                *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + -1;
                return;
            }
            piVar1 = *(int **)(piVar2 + 4);
            piVar3 = piVar2;
        } while (*(int **)(piVar2 + 4) != (int *)0x0);
    }
    return;
}



int FUN_140868ff0(longlong param_1)

{
    longlong lVar1;
    int iVar2;

    lVar1 = DAT_140c61ba8;
    EnterCriticalSection((LPCRITICAL_SECTION)(DAT_140c61ba8 + 0xc70));
    iVar2 = *(int *)(param_1 + 8) + 1;
    *(int *)(param_1 + 8) = iVar2;
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0xc70));
    return iVar2;
}



void FUN_140869040(PRTL_CRITICAL_SECTION_DEBUG param_1)

{
    longlong lVar1;
    LPCRITICAL_SECTION lpCriticalSection;
    uint uVar2;

    lVar1 = DAT_140c61ba8;
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_140c61ba8 + 0xc70);
    EnterCriticalSection(lpCriticalSection);
    uVar2 = *(uint *)&(param_1->ProcessLocksList).Blink % 0xc1;
    (param_1->ProcessLocksList).Flink = (_LIST_ENTRY *)(&lpCriticalSection[1].DebugInfo)[uVar2];
    (&lpCriticalSection[1].DebugInfo)[uVar2] = param_1;
    *(int *)(lVar1 + 0x12a0) = *(int *)(lVar1 + 0x12a0) + 1;
    // WARNING: Could not recover jumptable at 0x00014086909f. Too many branches
    // WARNING: Treating indirect jump as call
    LeaveCriticalSection(lpCriticalSection);
    return;
}



undefined8 * FUN_1408690b0(undefined4 param_1)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x30);
    if (puVar1 != (undefined8 *)0x0) {
        FUN_140865e10(puVar1,param_1);
        *puVar1 = &PTR_LAB_1409a48d0;
        puVar1[4] = 0;
        puVar1[5] = 0;
        FUN_140869040(puVar1);
        return puVar1;
    }
    return (undefined8 *)0x0;
}



void FUN_140869120(longlong param_1,undefined8 param_2)

{
    *(undefined8 *)(param_1 + 0x28) = param_2;
    return;
}



undefined4 FUN_140869130(undefined8 *param_1)

{
    undefined8 *puVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    longlong lVar4;

    lVar4 = DAT_140c61ba8;
    EnterCriticalSection((LPCRITICAL_SECTION)(DAT_140c61ba8 + 0xc70));
    puVar1 = param_1 + 1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    uVar2 = *(undefined4 *)(param_1 + 1);
    if (*(int *)puVar1 == 0) {
        FUN_140868870(DAT_140c61ba8 + 0xc70,*(undefined4 *)(param_1 + 3));
        uVar3 = DAT_140c10f20;
        (**(code **)*param_1)(param_1,0);
        FUN_140881720(uVar3,param_1);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0xc70));
    return uVar2;
}



undefined4 FUN_1408691c0(longlong param_1,longlong param_2)

{
    byte bVar1;
    byte *pbVar2;
    uint uVar3;

    bVar1 = *(byte *)(param_2 + 4);
    if (bVar1 != 0) {
        uVar3 = bVar1 + 4 & 0xfffffffc;
        pbVar2 = (byte *)FUN_1408819f0(DAT_140c10f20,uVar3 + (uint)bVar1 * 4);
        if (pbVar2 == (byte *)0x0) {
            return 0x34;
        }
        *pbVar2 = bVar1;
        FUN_1407db590(pbVar2 + 1,param_2 + 5,bVar1);
        FUN_1407db590(pbVar2 + uVar3,(ulonglong)bVar1 + param_2 + 5,(ulonglong)bVar1 * 4);
        *(byte **)(param_1 + 0x20) = pbVar2;
    }
    return 1;
}



void FUN_140869260(longlong param_1)

{
    *(undefined8 *)(param_1 + 0x28) = 0;
    return;
}



int FUN_140869270(longlong *param_1,longlong *param_2)

{
    int iVar1;
    longlong **pplVar2;

    iVar1 = (**(code **)(*param_1 + 0x298))();
    if (iVar1 == 1) {
        pplVar2 = (longlong **)FUN_140859140(param_1 + 0x15,*(undefined4 *)(param_2 + 3));
        if (pplVar2 == (longlong **)0x0) {
            iVar1 = 2;
        }
        else {
            *pplVar2 = param_2;
            (**(code **)(*param_2 + 0x30))(param_2,param_1);
            (**(code **)(*param_1 + 8))(param_1);
        }
    }
    (**(code **)(*param_2 + 0x10))(param_2);
    return iVar1;
}



undefined4 FUN_1408692f0(longlong param_1,longlong param_2)

{
    int iVar1;
    undefined4 uVar2;
    longlong lVar3;

    if (*(longlong *)(param_2 + 0x40) != 0) {
        return 0x15;
    }
    iVar1 = *(int *)(param_2 + 0x18);
    lVar3 = FUN_1408591d0(param_1 + 0xa8,iVar1);
    if (lVar3 != 0) {
        return 5;
    }
    uVar2 = 1;
    if (*(int *)(param_1 + 0x18) == iVar1) {
        uVar2 = 0x17;
    }
    return uVar2;
}



undefined8 * FUN_140869390(undefined4 param_1)

{
    char cVar1;
    uint uVar2;
    undefined8 *puVar3;

    puVar3 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0xc0);
    if (puVar3 != (undefined8 *)0x0) {
        FUN_14084c610(puVar3,param_1);
        puVar3[0x15] = 0;
        puVar3[0x16] = 0;
        *(undefined4 *)(puVar3 + 0x17) = 0;
        *puVar3 = &PTR_FUN_1409a4b90;
        uVar2 = FUN_14001d310(puVar3);
        if ((uVar2 < 0xd) && ((0x1401U >> (uVar2 & 0x1f) & 1) != 0)) {
            cVar1 = '\x01';
        }
        else {
            cVar1 = '\0';
        }
        *(byte *)((longlong)puVar3 + 0x5b) = *(byte *)((longlong)puVar3 + 0x5b) & 0xfd;
        *(byte *)((longlong)puVar3 + 0x5b) = *(byte *)((longlong)puVar3 + 0x5b) | cVar1 * '\x02';
        FUN_140851a00(puVar3);
        return puVar3;
    }
    return (undefined8 *)0x0;
}



ulonglong FUN_140869430(longlong *param_1,int *param_2)

{
    longlong *plVar1;
    uint uVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    longlong lVar5;

    lVar5 = param_1[7];
    if ((lVar5 == 0) ||
        ((*(short *)(lVar5 + 0x48) == 0 && ((lVar5 == 0 || (*(short *)(lVar5 + 0x4a) == 0)))))) {
        return 1;
    }
    if (*(char *)((longlong)param_2 + 0x1d) != '\0') {
        (**(code **)(*param_1 + 0x158))
                (param_1,(ulonglong)param_2 & 0xffffffffffffff00 | (ulonglong)(*param_2 == 1));
    }
    uVar3 = param_1[0x16] - param_1[0x15] >> 3;
    if ((int)uVar3 != 0) {
        lVar5 = (uVar3 & 0xffffffff) << 3;
        do {
            uVar4 = uVar3;
            lVar5 = lVar5 + -8;
            uVar2 = (int)uVar4 - 1;
            plVar1 = *(longlong **)(lVar5 + param_1[0x15]);
            if ((*(char *)(param_2 + 7) == '\0') || (plVar1[9] == 0)) {
                (**(code **)(*plVar1 + 0x80))(plVar1,param_2);
            }
            uVar3 = (ulonglong)uVar2;
        } while (uVar2 != 0);
        return uVar4 & 0xffffffff;
    }
    return 1;
}



undefined8 FUN_140869520(longlong *param_1,int *param_2)

{
    longlong *plVar1;
    char cVar2;
    uint uVar3;
    ulonglong uVar4;
    longlong lVar5;

    if (*(longlong *)(param_2 + 4) == 0) {
        (**(code **)(*param_1 + 0x158))
                (param_1,(ulonglong)param_2 & 0xffffffffffffff00 | (ulonglong)(*param_2 == 1));
    }
    uVar4 = param_1[0x16] - param_1[0x15] >> 3;
    if ((int)uVar4 != 0) {
        lVar5 = (uVar4 & 0xffffffff) << 3;
        do {
            lVar5 = lVar5 + -8;
            uVar3 = (int)uVar4 - 1;
            uVar4 = (ulonglong)uVar3;
            plVar1 = *(longlong **)(lVar5 + param_1[0x15]);
            if (((*(char *)(param_2 + 9) == '\0') || (plVar1[9] == 0)) &&
                (cVar2 = FUN_140853640(plVar1,*(undefined8 *)(param_2 + 2)), cVar2 == '\0')) {
                (**(code **)(*plVar1 + 0x88))(plVar1,param_2);
            }
        } while (uVar3 != 0);
    }
    return 1;
}



void FUN_1408695e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    longlong *plVar1;
    longlong **pplVar2;

    pplVar2 = *(longlong ***)(param_1 + 0xa8);
    if (pplVar2 != *(longlong ***)(param_1 + 0xb0)) {
        do {
            plVar1 = *pplVar2;
            if ((plVar1[7] != 0) && (*(short *)(plVar1[7] + 0x48) != 0)) {
                (**(code **)(*plVar1 + 0xd0))(plVar1,param_2,param_3,param_4);
            }
            pplVar2 = pplVar2 + 1;
        } while (pplVar2 != *(longlong ***)(param_1 + 0xb0));
    }
    return;
}



void FUN_140869670(longlong param_1,uint *param_2,longlong param_3,uint *param_4,int param_5)

{
    longlong **pplVar1;

    pplVar1 = *(longlong ***)(param_1 + 0xa8);
    if (pplVar1 != *(longlong ***)(param_1 + 0xb0)) {
        do {
            if (*param_4 < *param_2) {
                *(undefined4 *)(param_3 + (ulonglong)*param_4 * 0xc) = *(undefined4 *)(*pplVar1 + 3);
                *(undefined4 *)(param_3 + 4 + (ulonglong)*param_4 * 0xc) =
                        *(undefined4 *)((*pplVar1)[8] + 0x18);
                *(int *)(param_3 + 8 + (ulonglong)*param_4 * 0xc) = param_5;
            }
            *param_4 = *param_4 + 1;
        } while (((*param_4 != *param_2) &&
                  ((**(code **)(**pplVar1 + 0x68))(*pplVar1,param_2,param_3,param_4,param_5 + 1),
                          *param_4 != *param_2)) &&
                 (pplVar1 = pplVar1 + 1, pplVar1 != *(longlong ***)(param_1 + 0xb0)));
    }
    return;
}



void FUN_140869730(undefined8 param_1,undefined4 param_2,longlong param_3,undefined8 param_4,
                   undefined8 param_5,char param_6)

{
    longlong *plVar1;
    longlong **pplVar2;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar3 [16];

    pplVar2 = *(longlong ***)(param_3 + 0xa8);
    auVar3 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    if (pplVar2 != *(longlong ***)(param_3 + 0xb0)) {
        do {
            if ((param_6 == '\0') || ((*pplVar2)[9] == 0)) {
                plVar1 = *pplVar2;
                if ((plVar1[7] != 0) && (*(short *)(plVar1[7] + 0x48) != 0)) {
                    param_1 = (**(code **)(*plVar1 + 0xc0))
                            (param_1,param_2,plVar1,param_4,param_5,param_6,auVar3);
                }
            }
            pplVar2 = pplVar2 + 1;
        } while (pplVar2 != *(longlong ***)(param_3 + 0xb0));
    }
    return;
}



void FUN_1408697d0(undefined8 param_1,undefined4 param_2,longlong param_3,undefined8 param_4,
                   undefined8 param_5_00,undefined8 param_6,undefined param_5)

{
    longlong *plVar1;
    longlong **pplVar2;

    pplVar2 = *(longlong ***)(param_3 + 0xa8);
    if (pplVar2 != *(longlong ***)(param_3 + 0xb0)) {
        do {
            plVar1 = *pplVar2;
            if ((plVar1[7] != 0) && (*(short *)(plVar1[7] + 0x48) != 0)) {
                param_1 = (**(code **)(*plVar1 + 0xb8))
                        (param_1,param_2,plVar1,param_4,param_5_00,param_6,param_5);
            }
            pplVar2 = pplVar2 + 1;
        } while (pplVar2 != *(longlong ***)(param_3 + 0xb0));
    }
    return;
}



void FUN_140869870(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                   undefined8 param_5)

{
    longlong *plVar1;
    longlong **pplVar2;

    pplVar2 = *(longlong ***)(param_1 + 0xa8);
    if (pplVar2 != *(longlong ***)(param_1 + 0xb0)) {
        do {
            plVar1 = *pplVar2;
            if (((plVar1[7] != 0) && (*(short *)(plVar1[7] + 0x48) != 0)) &&
                ((*(byte *)((longlong)plVar1 + 0x5b) & 0x40) == 0)) {
                (**(code **)(*plVar1 + 0xd8))(plVar1,param_2,param_3,param_4,param_5);
            }
            pplVar2 = pplVar2 + 1;
        } while (pplVar2 != *(longlong ***)(param_1 + 0xb0));
    }
    return;
}



void FUN_140869910(longlong param_1,undefined4 *param_2)

{
    longlong *plVar1;
    char cVar2;
    longlong **pplVar3;

    pplVar3 = *(longlong ***)(param_1 + 0xa8);
    if (pplVar3 != *(longlong ***)(param_1 + 0xb0)) {
        do {
            if ((*(char *)(param_2 + 4) == '\0') || ((*pplVar3)[9] == 0)) {
                plVar1 = *pplVar3;
                if ((plVar1[7] != 0) && (*(short *)(plVar1[7] + 0x48) != 0)) {
                    cVar2 = (**(code **)(*plVar1 + 0x1e8))(plVar1,*param_2);
                    if (cVar2 == '\0') {
                        (**(code **)(**pplVar3 + 0xa0))();
                    }
                }
            }
            pplVar3 = pplVar3 + 1;
        } while (pplVar3 != *(longlong ***)(param_1 + 0xb0));
    }
    return;
}



undefined8 FUN_1408699a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
    undefined8 uVar1;
    longlong **pplVar2;

    pplVar2 = *(longlong ***)(param_1 + 0xa8);
    if (pplVar2 == *(longlong ***)(param_1 + 0xb0)) {
        uVar1 = 1;
    }
    else {
        do {
            uVar1 = (**(code **)(**pplVar2 + 0x98))(*pplVar2,param_2,param_3,param_4);
            if ((int)uVar1 != 1) {
                return uVar1;
            }
            pplVar2 = pplVar2 + 1;
        } while (pplVar2 != *(longlong ***)(param_1 + 0xb0));
    }
    return uVar1;
}



ulonglong FUN_140869a30(longlong param_1)

{
    ulonglong uVar1;
    longlong **pplVar2;
    longlong **pplVar3;

    pplVar2 = *(longlong ***)(param_1 + 0xa8);
    if (pplVar2 == *(longlong ***)(param_1 + 0xb0)) {
        return 1;
    }
    do {
        uVar1 = (**(code **)(**pplVar2 + 0x140))();
        if ((int)uVar1 != 1) {
            pplVar3 = *(longlong ***)(param_1 + 0xa8);
            if (pplVar3 == pplVar2) {
                return uVar1;
            }
            do {
                (**(code **)(**pplVar3 + 0x148))();
                pplVar3 = pplVar3 + 1;
            } while (pplVar3 != pplVar2);
            return uVar1 & 0xffffffff;
        }
        pplVar2 = pplVar2 + 1;
    } while (pplVar2 != *(longlong ***)(param_1 + 0xb0));
    return uVar1;
}



void FUN_140869ad0(longlong param_1,undefined8 param_2)

{
    longlong *plVar1;
    longlong **pplVar2;

    pplVar2 = *(longlong ***)(param_1 + 0xa8);
    if (pplVar2 != *(longlong ***)(param_1 + 0xb0)) {
        do {
            plVar1 = *pplVar2;
            if ((((*(byte *)((longlong)plVar1 + 0x5a) & 0x40) == 0) && (plVar1[7] != 0)) &&
                (*(short *)(plVar1[7] + 0x48) != 0)) {
                (**(code **)(*plVar1 + 0xa8))(plVar1,param_2);
            }
            pplVar2 = pplVar2 + 1;
        } while (pplVar2 != *(longlong ***)(param_1 + 0xb0));
    }
    return;
}



void FUN_140869b40(undefined8 param_1,undefined4 param_2,longlong param_3,undefined8 param_4,
                   undefined4 param_5_00,undefined8 param_6,undefined8 param_5)

{
    longlong *plVar1;
    longlong **pplVar2;

    pplVar2 = *(longlong ***)(param_3 + 0xa8);
    if (pplVar2 != *(longlong ***)(param_3 + 0xb0)) {
        do {
            plVar1 = *pplVar2;
            if ((((*(byte *)((longlong)plVar1 + 0x5b) & 0x10) == 0) && (plVar1[7] != 0)) &&
                (*(short *)(plVar1[7] + 0x48) != 0)) {
                param_1 = (**(code **)(*plVar1 + 200))
                        (param_1,param_2,plVar1,param_4,param_5_00,param_6,param_5);
            }
            pplVar2 = pplVar2 + 1;
        } while (pplVar2 != *(longlong ***)(param_3 + 0xb0));
    }
    return;
}



void FUN_140869be0(longlong param_1)

{
    longlong lVar1;
    longlong **pplVar2;

    pplVar2 = *(longlong ***)(param_1 + 0xa8);
    if (pplVar2 != *(longlong ***)(param_1 + 0xb0)) {
        do {
            lVar1 = (*pplVar2)[7];
            if ((lVar1 != 0) && (*(short *)(lVar1 + 0x48) != 0)) {
                (**(code **)(**pplVar2 + 0x198))();
            }
            pplVar2 = pplVar2 + 1;
        } while (pplVar2 != *(longlong ***)(param_1 + 0xb0));
    }
    return;
}



void FUN_140869c40(longlong *param_1,longlong *param_2)

{
    if ((longlong *)param_2[8] == param_1) {
        (**(code **)(*param_2 + 0x30))(param_2,0);
        FUN_140859270(param_1 + 0x15,*(undefined4 *)(param_2 + 3));
        (**(code **)(*param_1 + 0x10))(param_1);
    }
    return;
}



void FUN_140869c90(longlong *param_1)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_1408591d0(param_1 + 0x15);
    if (puVar1 != (undefined8 *)0x0) {
        (**(code **)(*param_1 + 0x60))(param_1,*puVar1);
    }
    return;
}



int FUN_140869cc0(longlong *param_1,uint **param_2)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    int iVar4;
    longlong lVar5;
    uint uVar6;
    uint uStackX20;

    uVar1 = **param_2;
    iVar4 = 1;
    *param_2 = *param_2 + 1;
    if (uVar1 != 0) {
        lVar5 = FUN_1408819f0(DAT_140c10f20,(ulonglong)uVar1 << 3);
        param_1[0x15] = lVar5;
        param_1[0x16] = lVar5;
        if (lVar5 == 0) {
            return 0x34;
        }
        uVar6 = 0;
        *(uint *)(param_1 + 0x17) = uVar1;
        if (uVar1 != 0) {
            do {
                uVar3 = uStackX20;
                uStackX20 = uStackX20 & 0xffffff00;
                uVar2 = **param_2;
                *param_2 = *param_2 + 1;
                iVar4 = (**(code **)(*param_1 + 0x50))(param_1,CONCAT44(uVar3,uVar2) & 0xffffff00ffffffff);
                if (iVar4 != 1) {
                    return iVar4;
                }
                uVar6 = uVar6 + 1;
            } while (uVar6 < uVar1);
        }
    }
    return iVar4;
}



void FUN_140869d80(undefined8 param_1,longlong param_2,undefined4 param_3)

{
    int iVar1;
    longlong local_res10;
    undefined4 local_res18 [4];

    local_res10 = param_2 + 4;
    local_res18[0] = param_3;
    iVar1 = FUN_1408546e0(param_1,&local_res10,local_res18,0);
    if (iVar1 == 1) {
        FUN_140869cc0(param_1,&local_res10,local_res18);
    }
    return;
}



void FUN_140869dd0(longlong param_1)

{
    longlong **pplVar1;

    pplVar1 = *(longlong ***)(param_1 + 0xa8);
    if (pplVar1 != *(longlong ***)(param_1 + 0xb0)) {
        do {
            (**(code **)(**pplVar1 + 0x148))();
            pplVar1 = pplVar1 + 1;
        } while (pplVar1 != *(longlong ***)(param_1 + 0xb0));
    }
    return;
}



void FUN_140869e20(longlong param_1,undefined4 param_2)

{
    longlong *plVar1;
    longlong **pplVar2;

    pplVar2 = *(longlong ***)(param_1 + 0xa8);
    if (pplVar2 != *(longlong ***)(param_1 + 0xb0)) {
        do {
            plVar1 = *pplVar2;
            if ((plVar1[7] != 0) && (*(short *)(plVar1[7] + 0x48) != 0)) {
                (**(code **)(*plVar1 + 0x108))(plVar1,param_2);
            }
            pplVar2 = pplVar2 + 1;
        } while (pplVar2 != *(longlong ***)(param_1 + 0xb0));
    }
    return;
}



longlong * FUN_140869ec0(undefined4 param_1)

{
    int iVar1;
    longlong *plVar2;

    plVar2 = (longlong *)FUN_1408819f0(DAT_140c10f20,0x168);
    if (plVar2 != (longlong *)0x0) {
        FUN_140859300(plVar2,param_1);
        *plVar2 = (longlong)&PTR_LAB_1409a4e30;
        *(undefined (*) [16])(plVar2 + 0x2a) =
                CONCAT412(0x3f800000,CONCAT48(0x3f800000,0x3f8000003f800000));
        plVar2[0x2c] = 0x3f8000003f800000;
        iVar1 = FUN_14085ad70(plVar2);
        if (iVar1 == 1) {
            return plVar2;
        }
        (**(code **)(*plVar2 + 0x10))(plVar2);
    }
    return (longlong *)0x0;
}



undefined4 * FUN_140869f50(undefined4 *param_1,undefined4 *param_2)

{
    int *piVar1;

    *param_1 = *param_2;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 0xc) = 0;
    param_1[0xe] = param_2[0xe];
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    param_1[10] = param_2[10];
    piVar1 = *(int **)(param_2 + 0xc);
    if (piVar1 != (int *)0x0) {
        *piVar1 = *piVar1 + 1;
    }
    *(int **)(param_1 + 0xc) = piVar1;
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x13] = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x15] = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x17] = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x19] = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x1b] = param_2[0x1b];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1e] = param_2[0x1e];
    param_1[0x1f] = param_2[0x1f];
    param_1[0x20] = param_2[0x20];
    param_1[0x21] = param_2[0x21];
    param_1[0x22] = param_2[0x22];
    param_1[0x23] = param_2[0x23];
    *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
    param_1[0x26] = param_2[0x26];
    *(undefined *)(param_1 + 0x27) = *(undefined *)(param_2 + 0x27);
    *(undefined *)((longlong)param_1 + 0x9d) = *(undefined *)((longlong)param_2 + 0x9d);
    *(undefined *)((longlong)param_1 + 0x9e) = *(undefined *)((longlong)param_2 + 0x9e);
    return param_1;
}



undefined8 * FUN_14086a070(undefined8 *param_1)

{
    FUN_140874010();
    FUN_14087b9a0();
    param_1[0x1d] = 0;
    *(undefined4 *)(param_1 + 0x1e) = 0;
    param_1[0x1f] = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *param_1 = &PTR_LAB_1409a50c0;
    param_1[0x1b] = &PTR_LAB_1409a5368;
    param_1[0x1c] = &PTR_FUN_1409a5378;
    param_1[0x24] = 0;
    *(undefined4 *)(param_1 + 0x25) = 0;
    param_1[0x2a] = 0;
    *(undefined4 *)(param_1 + 0x2b) = 0;
    param_1[0x30] = 0;
    *(undefined4 *)(param_1 + 0x31) = 0;
    return param_1;
}



void FUN_14086a110(undefined8 *param_1)

{
    *param_1 = &PTR_LAB_1409a50c0;
    param_1[0x1b] = &PTR_LAB_1409a5368;
    param_1[0x1c] = &PTR_FUN_1409a5378;
    FUN_14087bae0();
    FUN_14086a3d0(param_1);
    FUN_14086c050(param_1 + 0x2d);
    FUN_14086beb0(param_1 + 0x27);
    FUN_14086bf80(param_1 + 0x21);
    FUN_1408747f0(param_1);
    FUN_14087b9b0(param_1 + 0x1b);
    *param_1 = &PTR_LAB_1409a60a0;
    FUN_14087bc50();
    return;
}



undefined8 * FUN_14086a1a0(undefined8 *param_1,undefined8 *param_2)

{
    int *piVar1;

    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    piVar1 = (int *)param_2[2];
    if (param_1[2] != 0) {
        FUN_140828460();
    }
    if (piVar1 != (int *)0x0) {
        *piVar1 = *piVar1 + 1;
    }
    param_1[2] = piVar1;
    param_1[4] = param_2[4];
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
    *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
    *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
    *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
    *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
    *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 100);
    *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
    *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
    *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
    return param_1;
}



undefined8 FUN_14086a2b0(longlong param_1)

{
    undefined8 *puVar1;

    if (*(longlong *)(param_1 + 0x10) != 0) {
        return 1;
    }
    if ((*(uint *)(param_1 + 0x20) < *(uint *)(param_1 + 0x1c)) &&
        (puVar1 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x80), puVar1 != (undefined8 *)0x0)) {
        if (puVar1 + 1 != (undefined8 *)0x0) {
            *(undefined4 *)(puVar1 + 4) = 0;
            puVar1[1] = 0;
            *(undefined4 *)(puVar1 + 2) = 0;
            puVar1[3] = 0;
            *(undefined4 *)((longlong)puVar1 + 0x74) = 0;
        }
        *puVar1 = *(undefined8 *)(param_1 + 0x10);
        *(undefined8 **)(param_1 + 0x10) = puVar1;
        return 1;
    }
    return 0;
}



void FUN_14086a320(longlong *param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined4 uVar3;
    uint uVar4;

    if (*(int *)((longlong)param_1 + 0x184) != 0) {
        for (puVar1 = (undefined8 *)param_1[0x2d]; puVar1 != (undefined8 *)0x0;
             puVar1 = (undefined8 *)*puVar1) {
            FUN_14083c260(DAT_140c61b80,*(undefined4 *)(puVar1 + 4));
            (**(code **)(*param_1 + 0x138))();
            lVar2 = puVar1[5];
            uVar4 = *(uint *)(lVar2 + 0x88);
            uVar4 = (uVar4 - 1 ^ uVar4) & 0x3fffffff ^ uVar4;
            *(uint *)(lVar2 + 0x88) = uVar4;
            uVar3 = DAT_140c10f20;
            if ((uVar4 & 0x3fffffff) == 0) {
                FUN_14084bd30(lVar2);
                FUN_140881720(uVar3);
            }
        }
    }
    return;
}



void FUN_14086a3d0(longlong param_1)

{
    undefined8 *puVar1;

    if (*(int *)(param_1 + 0x124) != 0) {
        for (puVar1 = *(undefined8 **)(param_1 + 0x108); puVar1 != (undefined8 *)0x0;
             puVar1 = (undefined8 *)*puVar1) {
            if (puVar1[2] != 0) {
                puVar1[3] = puVar1[2];
                FUN_140881720(DAT_140c10f20);
                puVar1[2] = 0;
                puVar1[3] = 0;
                *(undefined4 *)(puVar1 + 4) = 0;
            }
        }
        while (puVar1 = *(undefined8 **)(param_1 + 0x108), puVar1 != (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 0x108) = *puVar1;
            if (puVar1 == *(undefined8 **)(param_1 + 0x110)) {
                *(undefined8 *)(param_1 + 0x110) = 0;
            }
            *puVar1 = *(undefined8 *)(param_1 + 0x118);
            *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + -1;
            *(undefined8 **)(param_1 + 0x118) = puVar1;
        }
    }
    return;
}



longlong * FUN_14086a480(undefined4 param_1)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;

    lVar2 = FUN_1408819f0(DAT_140c10f20,0x198);
    if (lVar2 != 0) {
        plVar3 = (longlong *)FUN_14086a070(lVar2,param_1);
        if (plVar3 == (longlong *)0x0) {
            return (longlong *)0x0;
        }
        iVar1 = FUN_14086a660(plVar3);
        if (iVar1 == 1) {
            return plVar3;
        }
        (**(code **)(*plVar3 + 0x10))(plVar3);
    }
    return (longlong *)0x0;
}



void FUN_14086a4e0(longlong param_1,int *param_2)

{
    int iVar1;
    undefined8 *puVar2;
    longlong lVar3;

    iVar1 = *param_2;
    if (iVar1 != 0) {
        if (iVar1 == 1) {
            iVar1 = param_2[4];
            lVar3 = *(longlong *)(param_2 + 2);
            for (puVar2 = *(undefined8 **)(param_1 + 0x168); puVar2 != (undefined8 *)0x0;
                 puVar2 = (undefined8 *)*puVar2) {
                if ((((lVar3 == 0) || (lVar3 == puVar2[5])) &&
                     ((iVar1 == 0 || (*(int *)(puVar2 + 4) == iVar1)))) && (*(int *)(puVar2 + 0xf) != 1)) {
                    *(undefined4 *)(puVar2 + 0xf) = 1;
                }
            }
            goto LAB_14086a514;
        }
        if (iVar1 == 2) {
            iVar1 = param_2[4];
            lVar3 = *(longlong *)(param_2 + 2);
            for (puVar2 = *(undefined8 **)(param_1 + 0x168); puVar2 != (undefined8 *)0x0;
                 puVar2 = (undefined8 *)*puVar2) {
                if (((lVar3 == 0) || (lVar3 == puVar2[5])) &&
                    (((iVar1 == 0 || (*(int *)(puVar2 + 4) == iVar1)) && (*(int *)(puVar2 + 0xf) != 0)))) {
                    *(undefined4 *)(puVar2 + 0xf) = 0;
                }
            }
            goto LAB_14086a514;
        }
        if (iVar1 != 3) goto LAB_14086a514;
    }
    FUN_14086bb50(param_1,*(undefined8 *)(param_2 + 2),param_2[4]);
    LAB_14086a514:
    FUN_140869430(param_1,param_2);
    return;
}



undefined8 FUN_14086a660(longlong param_1)

{
    undefined8 uVar1;

    uVar1 = FUN_1408745c0();
    if ((int)uVar1 == 1) {
        *(undefined4 *)(param_1 + 0x124) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x128) = 0;
        *(undefined8 *)(param_1 + 0x118) = 0;
        *(undefined8 *)(param_1 + 0x130) = 0;
        *(undefined8 *)(param_1 + 0x108) = 0;
        *(undefined8 *)(param_1 + 0x110) = 0;
        *(undefined4 *)(param_1 + 0x158) = 0;
        *(undefined8 *)(param_1 + 0x148) = 0;
        *(undefined8 *)(param_1 + 0x160) = 0;
        *(undefined8 *)(param_1 + 0x138) = 0;
        *(undefined8 *)(param_1 + 0x140) = 0;
        *(undefined4 *)(param_1 + 0x154) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x188) = 0;
        *(undefined8 *)(param_1 + 0x178) = 0;
        *(undefined8 *)(param_1 + 400) = 0;
        *(undefined8 *)(param_1 + 0x168) = 0;
        *(undefined8 *)(param_1 + 0x170) = 0;
        *(undefined4 *)(param_1 + 0x184) = 0xffffffff;
        uVar1 = 1;
    }
    return uVar1;
}



undefined8 FUN_14086a720(longlong param_1,int param_2,char param_3)

{
    undefined8 *puVar1;
    undefined8 uVar2;
    undefined4 *puVar3;

    if (*(int *)(param_1 + 0x10) != 0) {
        for (puVar1 = *(undefined8 **)(param_1 + 0x28); puVar1 != (undefined8 *)0x0;
             puVar1 = (undefined8 *)*puVar1) {
            if (*(int *)(puVar1 + 1) == param_2) {
                if (puVar1 == (undefined8 *)0x0) {
                    return 1;
                }
                if (param_3 != '\0') {
                    uVar2 = FUN_14086b390(param_1 + -0xe0,puVar1 + 2);
                    return uVar2;
                }
                puVar3 = (undefined4 *)puVar1[2];
                if (puVar3 != (undefined4 *)puVar1[3]) {
                    do {
                        FUN_1408552b0(*puVar3);
                        puVar3 = puVar3 + 1;
                    } while (puVar3 != (undefined4 *)puVar1[3]);
                }
                return 1;
            }
        }
    }
    return 1;
}



void FUN_14086a7b0(undefined8 param_1)

{
    FUN_14086a320();
    FUN_140852400(param_1);
    return;
}



undefined8 FUN_14086a7d0(longlong param_1,undefined4 param_2,longlong param_3)

{
    uint uVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    ulonglong uVar5;
    ulonglong uVar6;

    if (param_3 != 0) {
        FUN_14086a8e0();
        return 1;
    }
    uVar1 = *(uint *)(param_1 + 0x188);
    uVar5 = (ulonglong)uVar1;
    if (uVar1 != 0) {
        puVar2 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,uVar1 * 8);
        if (puVar2 == (undefined8 *)0x0) {
            uVar3 = 2;
        }
        else {
            uVar6 = 0;
            for (puVar4 = *(undefined8 **)(param_1 + 0x168); puVar4 != (undefined8 *)0x0;
                 puVar4 = (undefined8 *)*puVar4) {
                puVar2[uVar6] = puVar4[5];
                uVar6 = (ulonglong)((int)uVar6 + 1);
            }
            puVar4 = puVar2;
            if (uVar1 != 0) {
                do {
                    FUN_14086a8e0(param_1,param_2,*puVar4);
                    uVar5 = uVar5 - 1;
                    puVar4 = puVar4 + 1;
                } while (uVar5 != 0);
            }
            FUN_140881720(DAT_140c10f20,puVar2);
            uVar3 = 1;
        }
        return uVar3;
    }
    FUN_140830190(DAT_140c61ba0,*(undefined4 *)(param_1 + 0x18),0);
    return 1;
}



undefined4 FUN_14086a8e0(longlong param_1,uint param_2,longlong param_3)

{
    int iVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    int *piVar5;
    int **ppiVar6;
    int **ppiVar7;
    int *piVar8;
    uint uVar9;
    int **ppiVar10;
    int **ppiVar11;
    int **ppiVar12;
    undefined4 local_res8;
    uint local_res10;
    uint local_res20;
    uint local_res24;

    ppiVar7 = (int **)(ulonglong)param_2;
    FUN_140830370(DAT_140c61ba0,&local_res20);
    if (param_2 == local_res20) {
        return 1;
    }
    ppiVar6 = (int **)0x0;
    puVar2 = *(undefined8 **)(param_1 + 0x108);
    for (puVar3 = puVar2; puVar4 = puVar2, ppiVar11 = ppiVar6, puVar3 != (undefined8 *)0x0;
         puVar3 = (undefined8 *)*puVar3) {
        if (*(uint *)(puVar3 + 1) == local_res20) {
            ppiVar11 = (int **)(puVar3 + 2);
            break;
        }
    }
    do {
        if (puVar4 == (undefined8 *)0x0) break;
        if (*(uint *)(puVar4 + 1) == param_2) {
            ppiVar12 = (int **)(puVar4 + 2);
            local_res10 = param_2;
            if ((int **)(puVar4 + 2) != (int **)0x0) goto LAB_14086a9a1;
            break;
        }
        puVar4 = (undefined8 *)*puVar4;
    } while( true );
    local_res10 = *(uint *)(param_1 + 0x100);
    ppiVar7 = (int **)(ulonglong)local_res10;
    do {
        ppiVar12 = ppiVar6;
        if (puVar2 == (undefined8 *)0x0) {
            LAB_14086a9a1:
            local_res8 = FUN_14086bd80(param_1,ppiVar11,ppiVar12,param_3);
            FUN_140830190(DAT_140c61ba0,*(undefined4 *)(param_1 + 0x18),param_3);
            puVar2 = *(undefined8 **)(param_1 + 0x168);
            local_res24 = 0;
            local_res20 = 0;
            ppiVar10 = ppiVar6;
            do {
                if (puVar2 == (undefined8 *)0x0) {
                    FUN_140830ae0(DAT_140c61ba0,param_3,*(undefined4 *)(param_1 + 0x18),&local_res20);
                    return local_res8;
                }
                if (puVar2[5] == param_3) {
                    if ((uint)ppiVar6 == (uint)ppiVar7) {
                        ppiVar10 = (int **)(ulonglong)((int)ppiVar10 + 1);
                    }
                    else {
                        ppiVar10 = (int **)0x1;
                        ppiVar6 = ppiVar7;
                        local_res20 = (uint)ppiVar7;
                    }
                    local_res24 = (uint)ppiVar10;
                    if ((ppiVar12 != (int **)0x0) && (piVar8 = *ppiVar12, piVar8 != ppiVar12[1])) {
                        do {
                            iVar1 = *piVar8;
                            for (puVar3 = *(undefined8 **)(param_1 + 0x138); puVar3 != (undefined8 *)0x0;
                                 puVar3 = (undefined8 *)*puVar3) {
                                if (*(int *)(puVar3 + 1) == iVar1) {
                                    if (puVar3 != (undefined8 *)0xfffffffffffffff4) {
                                        uVar9 = *(uint *)((longlong)puVar3 + 0x14) & 0xff;
                                        goto LAB_14086aa75;
                                    }
                                    break;
                                }
                            }
                            uVar9 = 0;
                            LAB_14086aa75:
                            if (((uVar9 & 0x10) != 0) && (ppiVar11 != (int **)0x0)) {
                                for (piVar5 = *ppiVar11; piVar5 != ppiVar11[1]; piVar5 = piVar5 + 1) {
                                    if (*piVar5 == iVar1) goto LAB_14086aab0;
                                }
                            }
                            local_res8 = FUN_14086b080(param_1,iVar1,puVar2 + 1);
                            LAB_14086aab0:
                            piVar8 = piVar8 + 1;
                        } while (piVar8 != ppiVar12[1]);
                        ppiVar10 = (int **)(ulonglong)local_res24;
                        ppiVar6 = (int **)(ulonglong)local_res20;
                    }
                }
                puVar2 = (undefined8 *)*puVar2;
                ppiVar7 = (int **)(ulonglong)local_res10;
            } while( true );
        }
        if (*(uint *)(puVar2 + 1) == local_res10) {
            ppiVar12 = (int **)(puVar2 + 2);
            goto LAB_14086a9a1;
        }
        puVar2 = (undefined8 *)*puVar2;
    } while( true );
}



int FUN_14086b080(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    undefined4 local_res20;
    undefined4 local_res24;
    undefined4 local_b8 [2];
    longlong *local_b0;
    undefined8 local_a8;
    undefined4 *local_a0;
    undefined8 local_98;
    undefined4 local_90;
    int *local_88;
    undefined4 local_80;
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
    undefined4 local_48;
    undefined4 uStack68;
    undefined4 uStack64;
    undefined4 uStack60;
    undefined8 local_38;
    undefined4 local_30;
    undefined4 local_2c;
    undefined8 local_28;
    undefined4 local_20;
    undefined local_1c;
    undefined2 local_1b;

    plVar3 = (longlong *)FUN_140830f00(DAT_140c61ba8,param_2,0);
    if (plVar3 == (longlong *)0x0) {
        iVar2 = 2;
    }
    else {
        puVar1 = *(undefined8 **)(param_1 + 0x138);
        local_res24 = 4;
        local_res20 = 0;
        for (; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
            if (*(int *)(puVar1 + 1) == (int)param_2) {
                if (puVar1 != (undefined8 *)0xfffffffffffffff4) {
                    local_res20 = *(undefined4 *)(puVar1 + 2);
                }
                break;
            }
        }
        local_78 = *(undefined4 *)(param_3 + 5);
        uStack116 = *(undefined4 *)((longlong)param_3 + 0x2c);
        uStack112 = *(undefined4 *)(param_3 + 6);
        uStack108 = *(undefined4 *)((longlong)param_3 + 0x34);
        local_68 = *(undefined4 *)(param_3 + 7);
        uStack100 = *(undefined4 *)((longlong)param_3 + 0x3c);
        uStack96 = *(undefined4 *)(param_3 + 8);
        uStack92 = *(undefined4 *)((longlong)param_3 + 0x44);
        local_a8 = param_3[4];
        local_1b = 1;
        local_a0 = &local_res20;
        local_58 = *(undefined4 *)(param_3 + 9);
        uStack84 = *(undefined4 *)((longlong)param_3 + 0x4c);
        uStack80 = *(undefined4 *)(param_3 + 10);
        uStack76 = *(undefined4 *)((longlong)param_3 + 0x54);
        local_48 = *(undefined4 *)(param_3 + 0xb);
        uStack68 = *(undefined4 *)((longlong)param_3 + 0x5c);
        uStack64 = *(undefined4 *)(param_3 + 0xc);
        uStack60 = *(undefined4 *)((longlong)param_3 + 100);
        local_80 = *(undefined4 *)(param_3 + 3);
        local_1c = 0;
        local_38 = param_3[0xd];
        local_98 = *param_3;
        local_b8[0] = 0;
        local_90 = *(undefined4 *)(param_3 + 1);
        local_88 = (int *)param_3[2];
        if (local_88 != (int *)0x0) {
            *local_88 = *local_88 + 1;
        }
        local_30 = *(undefined4 *)(param_3 + 0xe);
        local_2c = 0;
        local_28 = 0;
        local_20 = 0;
        local_b0 = plVar3;
        iVar2 = FUN_14084ed10(plVar3,local_b8);
        if (iVar2 == 3) {
            iVar2 = 1;
        }
        else if (iVar2 == 1) {
            iVar2 = (**(code **)(*plVar3 + 0x278))(plVar3,local_b8);
        }
        (**(code **)(*plVar3 + 0x10))(plVar3);
        if (local_88 != (int *)0x0) {
            FUN_140828460();
        }
    }
    return iVar2;
}



int FUN_14086b390(undefined8 param_1,undefined8 *param_2)

{
    int iVar1;
    undefined4 *puVar2;
    undefined4 *puVar3;

    puVar3 = (undefined4 *)*param_2;
    if (puVar3 != (undefined4 *)param_2[1]) {
        do {
            iVar1 = FUN_140853b00(*puVar3);
            if (iVar1 != 1) {
                for (puVar2 = (undefined4 *)*param_2; puVar2 != puVar3; puVar2 = puVar2 + 1) {
                    FUN_1408552b0();
                }
            }
            puVar3 = puVar3 + 1;
        } while (puVar3 != (undefined4 *)param_2[1]);
        return iVar1;
    }
    return 1;
}



void FUN_14086b410(longlong *param_1,longlong *param_2)

{
    int iVar1;
    longlong *plVar2;
    longlong **pplVar3;
    longlong **pplVar4;
    longlong **pplVar5;

    iVar1 = *(int *)(param_2 + 3);
    plVar2 = (longlong *)param_2[8];
    if (plVar2 == param_1) {
        (**(code **)(*param_2 + 0x30))(param_2);
        FUN_140859270(param_1 + 0x15);
    }
    pplVar5 = (longlong **)param_1[0x27];
    pplVar4 = (longlong **)0x0;
    do {
        pplVar3 = pplVar5;
        if (pplVar3 == (longlong **)0x0) {
            LAB_14086b4ad:
            if (plVar2 == param_1) {
                (**(code **)(*param_1 + 0x10))(param_1);
            }
            return;
        }
        if (*(int *)(pplVar3 + 1) == iVar1) {
            if (pplVar3 == (longlong **)param_1[0x27]) {
                param_1[0x27] = (longlong)*pplVar3;
            }
            else {
                *pplVar4 = *pplVar3;
            }
            if (pplVar3 == (longlong **)param_1[0x28]) {
                param_1[0x28] = (longlong)pplVar4;
            }
            *pplVar3 = (longlong *)param_1[0x29];
            *(int *)(param_1 + 0x2b) = *(int *)(param_1 + 0x2b) + -1;
            param_1[0x29] = (longlong)pplVar3;
            goto LAB_14086b4ad;
        }
        pplVar5 = (longlong **)*pplVar3;
        pplVar4 = pplVar3;
    } while( true );
}



undefined4 FUN_14086b4d0(longlong param_1,int param_2)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    uint uVar3;
    undefined8 *puVar4;

    if (param_2 != 0) {
        puVar1 = (undefined8 *)FUN_1408819f0(DAT_140c10f20);
        *(undefined8 **)(param_1 + 0x28) = puVar1;
        if (puVar1 == (undefined8 *)0x0) {
            return 0x34;
        }
        uVar3 = 0;
        *(int *)(param_1 + 0x18) = param_2;
        *(undefined8 **)(param_1 + 0x10) = puVar1;
        if (param_2 != 0) {
            puVar2 = puVar1 + 4;
            puVar4 = puVar1;
            do {
                if (puVar2 != (undefined8 *)&DAT_00000018) {
                    puVar2[-2] = 0;
                    puVar2[-1] = 0;
                    *(undefined4 *)puVar2 = 0;
                }
                uVar3 = uVar3 + 1;
                puVar1 = puVar4 + 5;
                *puVar4 = puVar2 + 1;
                puVar2 = puVar2 + 5;
                puVar4 = puVar1;
            } while (uVar3 < *(uint *)(param_1 + 0x18));
        }
        puVar1[-5] = 0;
    }
    return 1;
}



undefined4 * FUN_14086b570(undefined8 *param_1,int param_2,undefined4 *param_3)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined4 *puVar3;

    puVar2 = (undefined8 *)*param_1;
    do {
        if (puVar2 == (undefined8 *)0x0) {
            puVar3 = (undefined4 *)0x0;
            LAB_14086b5a4:
            if (param_1[2] == 0) {
                if (*(uint *)((longlong)param_1 + 0x1c) <= *(uint *)(param_1 + 4)) {
                    return puVar3;
                }
                puVar2 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x18);
                if (puVar2 == (undefined8 *)0x0) {
                    return puVar3;
                }
                *puVar2 = param_1[2];
                param_1[2] = puVar2;
            }
            if ((undefined8 *)param_1[1] == (undefined8 *)0x0) {
                *param_1 = param_1[2];
            }
            else {
                *(undefined8 *)param_1[1] = param_1[2];
            }
            puVar2 = (undefined8 *)param_1[2];
            param_1[1] = puVar2;
            param_1[2] = *puVar2;
            *puVar2 = 0;
            lVar1 = param_1[1];
            *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
            if ((int *)(lVar1 + 8) != (int *)0x0) {
                *(int *)(lVar1 + 8) = param_2;
                puVar3 = (undefined4 *)(lVar1 + 0xc);
                *puVar3 = *param_3;
                *(undefined4 *)(lVar1 + 0x10) = param_3[1];
                *(undefined4 *)(lVar1 + 0x14) = param_3[2];
            }
            return puVar3;
        }
        if (*(int *)(puVar2 + 1) == param_2) {
            puVar3 = (undefined4 *)((longlong)puVar2 + 0xc);
            if (puVar3 != (undefined4 *)0x0) {
                *puVar3 = *param_3;
                *(undefined4 *)(puVar2 + 2) = param_3[1];
                *(undefined4 *)((longlong)puVar2 + 0x14) = param_3[2];
                return puVar3;
            }
            goto LAB_14086b5a4;
        }
        puVar2 = (undefined8 *)*puVar2;
    } while( true );
}



ulonglong FUN_14086b660(longlong param_1,longlong param_2,undefined4 param_3)

{
    undefined8 *puVar1;
    char cVar2;
    uint uVar3;
    uint uVar4;
    ulonglong uVar5;
    undefined8 *puVar6;
    uint *puVar7;
    uint **ppuVar8;
    longlong *plVar9;
    longlong lVar10;
    longlong *plVar11;
    uint **ppuVar12;
    uint **ppuVar13;
    uint uVar14;
    uint **ppuVar15;
    ulonglong uVar16;
    uint **ppuVar17;
    uint uVar18;
    uint *local_res10;
    undefined4 local_res18;
    uint local_res20;
    uint local_78;
    uint local_74;

    local_res10 = (uint *)(param_2 + 4);
    local_res18 = param_3;
    uVar5 = FUN_1408546e0();
    if ((int)uVar5 == 1) {
        uVar3 = *local_res10;
        puVar7 = local_res10 + 1;
        uVar18 = local_res10[2];
        cVar2 = *(char *)(local_res10 + 3);
        local_res10 = (uint *)((longlong)local_res10 + 0xd);
        uVar5 = 1;
        if ((*puVar7 != *(uint *)(param_1 + 0xfc)) || (uVar3 != *(uint *)(param_1 + 0xf8))) {
            *(uint *)(param_1 + 0xfc) = *puVar7;
            *(uint *)(param_1 + 0xf8) = uVar3;
            uVar5 = FUN_14087ba30(param_1 + 0xd8);
        }
        if ((int)uVar5 == 1) {
            *(byte *)(param_1 + 0x5b) = *(byte *)(param_1 + 0x5b) & 0x7f;
            *(uint *)(param_1 + 0x100) = uVar18;
            *(byte *)(param_1 + 0x5b) = *(byte *)(param_1 + 0x5b) | (cVar2 != '\0') << 7;
            uVar5 = FUN_140869cc0(param_1,&local_res10);
            uVar16 = uVar5 & 0xffffffff;
            if ((int)uVar5 == 1) {
                uVar3 = *local_res10;
                local_res10 = local_res10 + 1;
                puVar1 = (undefined8 *)(param_1 + 0x108);
                FUN_14086b4d0(puVar1,uVar3);
                ppuVar17 = (uint **)0x0;
                local_74 = 0;
                uVar5 = uVar16;
                if (uVar3 != 0) {
                    do {
                        uVar18 = *local_res10;
                        local_res10 = local_res10 + 1;
                        for (puVar6 = (undefined8 *)*puVar1; ppuVar13 = ppuVar17, puVar6 != (undefined8 *)0x0;
                             puVar6 = (undefined8 *)*puVar6) {
                            if (*(uint *)(puVar6 + 1) == uVar18) {
                                ppuVar13 = (uint **)(puVar6 + 2);
                                if (ppuVar13 != (uint **)0x0) goto LAB_14086b848;
                                break;
                            }
                        }
                        if (*(longlong *)(param_1 + 0x118) == 0) {
                            if ((*(uint *)(param_1 + 0x128) < *(uint *)(param_1 + 0x124)) &&
                                (puVar6 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x28),
                                        puVar6 != (undefined8 *)0x0)) {
                                if (puVar6 != (undefined8 *)&DAT_fffffffffffffff8) {
                                    puVar6[2] = 0;
                                    puVar6[3] = 0;
                                    *(undefined4 *)(puVar6 + 4) = 0;
                                }
                                *puVar6 = *(undefined8 *)(param_1 + 0x118);
                                *(undefined8 **)(param_1 + 0x118) = puVar6;
                                goto LAB_14086b7f8;
                            }
                        }
                        else {
                            LAB_14086b7f8:
                            if (*(undefined8 **)(param_1 + 0x110) == (undefined8 *)0x0) {
                                *puVar1 = *(undefined8 *)(param_1 + 0x118);
                            }
                            else {
                                **(undefined8 **)(param_1 + 0x110) = *(undefined8 *)(param_1 + 0x118);
                            }
                            puVar6 = *(undefined8 **)(param_1 + 0x118);
                            *(undefined8 **)(param_1 + 0x110) = puVar6;
                            *(undefined8 *)(param_1 + 0x118) = *puVar6;
                            *puVar6 = 0;
                            lVar10 = *(longlong *)(param_1 + 0x110);
                            *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
                            puVar7 = (uint *)(lVar10 + 8);
                            if (puVar7 != (uint *)0x0) {
                                *puVar7 = uVar18;
                                ppuVar13 = (uint **)(lVar10 + 0x10);
                            }
                        }
                        if (ppuVar13 == (uint **)0x0) {
                            return 2;
                        }
                        LAB_14086b848:
                        uVar18 = *local_res10;
                        local_res10 = local_res10 + 1;
                        local_res20 = uVar18;
                        if (uVar18 != 0) {
                            puVar7 = (uint *)FUN_1408819f0(DAT_140c10f20,(ulonglong)uVar18 << 2);
                            *ppuVar13 = puVar7;
                            ppuVar13[1] = puVar7;
                            if (puVar7 != (uint *)0x0) {
                                *(uint *)(ppuVar13 + 2) = uVar18;
                            }
                        }
                        local_78 = 0;
                        ppuVar15 = ppuVar17;
                        if (uVar18 != 0) {
                            do {
                                uVar14 = (uint)ppuVar15;
                                uVar4 = *local_res10;
                                local_res10 = local_res10 + 1;
                                uVar16 = 0x39;
                                ppuVar15 = (uint **)ppuVar13[1];
                                for (ppuVar8 = (uint **)*ppuVar13;
                                     (ppuVar8 != ppuVar15 && (*(uint *)ppuVar8 != uVar4));
                                     ppuVar8 = (uint **)((longlong)ppuVar8 + 4)) {
                                }
                                ppuVar12 = ppuVar17;
                                if (ppuVar8 != ppuVar15) {
                                    ppuVar12 = ppuVar8;
                                }
                                if (ppuVar12 == (uint **)0x0) {
                                    uVar5 = (longlong)ppuVar15 - (longlong)*ppuVar13 >> 2 & 0xffffffff;
                                    if (uVar5 < *(uint *)(ppuVar13 + 2)) {
                                        LAB_14086b967:
                                        if (uVar5 < *(uint *)(ppuVar13 + 2)) {
                                            puVar7 = ppuVar13[1];
                                            ppuVar13[1] = puVar7 + 1;
                                            if (puVar7 != (uint *)0x0) {
                                                *puVar7 = uVar4;
                                                uVar16 = 1;
                                                uVar18 = local_res20;
                                                goto LAB_14086b99b;
                                            }
                                        }
                                    }
                                    else {
                                        uVar18 = *(uint *)(ppuVar13 + 2) + 1;
                                        puVar7 = (uint *)FUN_1408819f0(DAT_140c10f20,(ulonglong)uVar18 << 2);
                                        if (puVar7 != (uint *)0x0) {
                                            uVar16 = (longlong)ppuVar13[1] - (longlong)*ppuVar13 >> 2;
                                            ppuVar15 = (uint **)(uVar16 & 0xffffffff);
                                            if (*ppuVar13 != (uint *)0x0) {
                                                ppuVar8 = ppuVar17;
                                                if ((int)uVar16 != 0) {
                                                    do {
                                                        ppuVar12 = (uint **)((longlong)ppuVar8 + 1);
                                                        puVar7[(longlong)ppuVar8] = (*ppuVar13)[(longlong)ppuVar8];
                                                        ppuVar8 = ppuVar12;
                                                    } while (ppuVar12 < ppuVar15);
                                                }
                                                FUN_140881720();
                                            }
                                            *ppuVar13 = puVar7;
                                            ppuVar13[1] = puVar7 + (longlong)ppuVar15;
                                            *(uint *)(ppuVar13 + 2) = uVar18;
                                            uVar14 = local_78;
                                            goto LAB_14086b967;
                                        }
                                    }
                                    uVar16 = 2;
                                    uVar18 = local_res20;
                                }
                                LAB_14086b99b:
                                if ((int)uVar16 != 1) {
                                    return uVar16;
                                }
                                local_78 = uVar14 + 1;
                                ppuVar15 = (uint **)(ulonglong)local_78;
                            } while (local_78 < uVar18);
                        }
                        local_74 = local_74 + 1;
                        uVar5 = uVar16;
                    } while (local_74 < uVar3);
                }
                uVar3 = *local_res10;
                local_res10 = local_res10 + 1;
                if (uVar3 != 0) {
                    plVar9 = (longlong *)FUN_1408819f0(DAT_140c10f20);
                    *(longlong **)(param_1 + 0x160) = plVar9;
                    if (plVar9 != (longlong *)0x0) {
                        *(uint *)(param_1 + 0x150) = uVar3;
                        *(longlong **)(param_1 + 0x148) = plVar9;
                        plVar11 = plVar9;
                        ppuVar13 = ppuVar17;
                        if (uVar3 != 0) {
                            do {
                                plVar9 = plVar11 + 3;
                                uVar18 = (int)ppuVar13 + 1;
                                ppuVar13 = (uint **)(ulonglong)uVar18;
                                *plVar11 = (longlong)plVar9;
                                plVar11 = plVar9;
                            } while (uVar18 < *(uint *)(param_1 + 0x150));
                        }
                        plVar9[-3] = 0;
                    }
                    if (uVar3 != 0) {
                        do {
                            local_res10 = (uint *)((longlong)local_res10 + 0x12);
                            lVar10 = FUN_14086b570();
                            uVar18 = 2 - (lVar10 != 0);
                            uVar5 = (ulonglong)uVar18;
                            if (uVar18 != 1) {
                                return uVar5;
                            }
                            uVar18 = (int)ppuVar17 + 1;
                            ppuVar17 = (uint **)(ulonglong)uVar18;
                        } while (uVar18 < uVar3);
                    }
                }
            }
        }
    }
    return uVar5;
}



void FUN_14086bb50(longlong *param_1,longlong *param_2,int param_3)

{
    bool bVar1;
    longlong **pplVar2;
    uint uVar3;
    longlong **pplVar4;
    longlong **pplVar5;

    pplVar2 = (longlong **)0x0;
    bVar1 = false;
    pplVar4 = (longlong **)param_1[0x2d];
    if (pplVar4 != (longlong **)0x0) {
        do {
            if (((param_2 == (longlong *)0x0) || (param_2 == pplVar4[5])) &&
                ((param_3 == 0 || (*(int *)(pplVar4 + 4) == param_3)))) {
                pplVar5 = (longlong **)*pplVar4;
                if (pplVar4 == (longlong **)param_1[0x2d]) {
                    param_1[0x2d] = (longlong)pplVar5;
                }
                else {
                    *pplVar2 = (longlong *)pplVar5;
                }
                if (pplVar4 == (longlong **)param_1[0x2e]) {
                    param_1[0x2e] = (longlong)pplVar2;
                }
                *pplVar4 = (longlong *)param_1[0x2f];
                *(int *)(param_1 + 0x31) = *(int *)(param_1 + 0x31) + -1;
                param_1[0x2f] = (longlong)pplVar4;
                FUN_14083c260(DAT_140c61b80,*(undefined4 *)(pplVar4 + 4));
                (**(code **)(*param_1 + 0x138))();
                uVar3 = *(uint *)(pplVar4[5] + 0x11);
                uVar3 = (uVar3 - 1 ^ uVar3) & 0x3fffffff ^ uVar3;
                *(uint *)(pplVar4[5] + 0x11) = uVar3;
                if ((uVar3 & 0x3fffffff) == 0) {
                    FUN_14084bd30();
                    FUN_140881720();
                }
                bVar1 = true;
            }
            else {
                pplVar5 = (longlong **)*pplVar4;
                pplVar2 = pplVar4;
            }
            pplVar4 = pplVar5;
        } while (pplVar5 != (longlong **)0x0);
        if (bVar1) {
            FUN_140830190(DAT_140c61ba0,*(undefined4 *)(param_1 + 3),param_2);
        }
    }
    return;
}



undefined4
FUN_14086bca0(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
    undefined4 uVar1;
    longlong *plVar2;
    undefined4 local_38 [2];
    undefined8 local_30;
    undefined4 local_28;
    undefined4 local_24;
    undefined4 local_20;
    undefined2 local_1c;
    undefined local_1a;

    uVar1 = 1;
    plVar2 = (longlong *)FUN_140830f00(DAT_140c61ba8,param_2,0);
    if (plVar2 != (longlong *)0x0) {
        FUN_14082f330(DAT_140c61b68,plVar2,param_4,0);
        if ((*(byte *)(param_3 + 2) & 7) == 1) {
            local_1c = 0;
            local_38[0] = 0;
            local_28 = 0;
            local_24 = *param_3;
            local_1a = 0;
            local_20 = 4;
            local_30 = param_4;
            uVar1 = (**(code **)(*plVar2 + 0x80))(plVar2,local_38);
        }
        else {
            (**(code **)(*plVar2 + 0x98))(plVar2,param_4,param_1,0);
        }
        (**(code **)(*plVar2 + 0x10))(plVar2);
    }
    return uVar1;
}



// WARNING: Could not reconcile some variable overlaps

ulonglong FUN_14086bd80(longlong param_1,int **param_2,int **param_3,undefined8 param_4)

{
    int iVar1;
    undefined8 *puVar2;
    int *piVar3;
    ulonglong uVar4;
    int *piVar5;
    ulonglong uVar6;
    undefined8 local_28;
    uint local_20;

    uVar6 = 1;
    if (param_2 == (int **)0x0) {
        return 1;
    }
    piVar5 = *param_2;
    if (piVar5 == param_2[1]) {
        uVar6 = 1;
    }
    else {
        do {
            iVar1 = *piVar5;
            for (puVar2 = *(undefined8 **)(param_1 + 0x138); puVar2 != (undefined8 *)0x0;
                 puVar2 = (undefined8 *)*puVar2) {
                if (*(int *)(puVar2 + 1) == iVar1) {
                    if ((undefined8 *)((longlong)puVar2 + 0xc) != (undefined8 *)0x0) {
                        local_28 = *(undefined8 *)((longlong)puVar2 + 0xc);
                        local_20 = *(uint *)((longlong)puVar2 + 0x14);
                        goto LAB_14086bdff;
                    }
                    break;
                }
            }
            local_28 = 0;
            local_20 = local_20 & 0xffffff00 | (byte)local_20 & 0xffffffe0;
            local_20._0_1_ = (byte)local_20 & 0xe0;
            LAB_14086bdff:
            if ((((*(byte *)(param_1 + 0x5b) & 0x80) != 0) && (((byte)local_20 & 0x10) != 0)) &&
                (param_3 != (int **)0x0)) {
                for (piVar3 = *param_3; piVar3 != param_3[1]; piVar3 = piVar3 + 1) {
                    if (*piVar3 == iVar1) goto LAB_14086be45;
                }
            }
            uVar4 = FUN_14086bca0(param_1,iVar1,&local_28,param_4);
            uVar6 = uVar4 & 0xffffffff;
            if ((int)uVar4 != 1) {
                return uVar4;
            }
            LAB_14086be45:
            piVar5 = piVar5 + 1;
        } while (piVar5 != param_2[1]);
    }
    return uVar6;
}



undefined8 FUN_14086beb0(longlong *param_1)

{
    longlong *plVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    bool bVar4;

    if (*(int *)((longlong)param_1 + 0x1c) != 0) {
        while (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0) {
            *param_1 = *plVar1;
            if (plVar1 == (longlong *)param_1[1]) {
                param_1[1] = 0;
            }
            *plVar1 = param_1[2];
            *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
            param_1[2] = (longlong)plVar1;
        }
        puVar3 = (undefined8 *)param_1[2];
        while (puVar3 != (undefined8 *)0x0) {
            puVar2 = (undefined8 *)*puVar3;
            if ((puVar3 < (undefined8 *)param_1[5]) ||
                (bVar4 = (undefined8 *)param_1[5] + (ulonglong)*(uint *)(param_1 + 3) * 3 <= puVar3,
                        puVar3 = puVar2, bVar4)) {
                FUN_140881720(DAT_140c10f20);
                puVar3 = puVar2;
            }
        }
        if (param_1[5] != 0) {
            FUN_140881720(DAT_140c10f20);
        }
        param_1[3] = 0;
        *param_1 = 0;
        param_1[1] = 0;
    }
    return 1;
}



undefined8 FUN_14086bf80(longlong *param_1)

{
    longlong *plVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    bool bVar4;

    if (*(int *)((longlong)param_1 + 0x1c) != 0) {
        while (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0) {
            *param_1 = *plVar1;
            if (plVar1 == (longlong *)param_1[1]) {
                param_1[1] = 0;
            }
            *plVar1 = param_1[2];
            *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
            param_1[2] = (longlong)plVar1;
        }
        puVar3 = (undefined8 *)param_1[2];
        while (puVar3 != (undefined8 *)0x0) {
            puVar2 = (undefined8 *)*puVar3;
            if ((puVar3 < (undefined8 *)param_1[5]) ||
                (bVar4 = (undefined8 *)param_1[5] + (ulonglong)*(uint *)(param_1 + 3) * 5 <= puVar3,
                        puVar3 = puVar2, bVar4)) {
                FUN_140881720(DAT_140c10f20);
                puVar3 = puVar2;
            }
        }
        if (param_1[5] != 0) {
            FUN_140881720(DAT_140c10f20);
        }
        param_1[3] = 0;
        *param_1 = 0;
        param_1[1] = 0;
    }
    return 1;
}



undefined8 FUN_14086c050(longlong *param_1)

{
    longlong *plVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    uint uVar5;

    if (*(int *)((longlong)param_1 + 0x1c) != 0) {
        uVar4 = 0;
        while (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0) {
            *param_1 = *plVar1;
            if (plVar1 == (longlong *)param_1[1]) {
                param_1[1] = 0;
            }
            *plVar1 = param_1[2];
            *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
            param_1[2] = (longlong)plVar1;
        }
        puVar2 = (undefined8 *)param_1[2];
        while (puVar3 = puVar2, puVar3 != (undefined8 *)0x0) {
            puVar2 = (undefined8 *)*puVar3;
            if ((puVar3 < (undefined8 *)param_1[5]) ||
                ((undefined8 *)param_1[5] + (ulonglong)*(uint *)(param_1 + 3) * 0x10 <= puVar3)) {
                if (puVar3[3] != 0) {
                    FUN_140828460();
                }
                FUN_140881720(DAT_140c10f20,puVar3);
            }
        }
        if (param_1[5] != 0) {
            if (*(int *)(param_1 + 3) != 0) {
                do {
                    if (*(longlong *)(uVar4 * 0x80 + 0x18 + param_1[5]) != 0) {
                        FUN_140828460();
                    }
                    uVar5 = (int)uVar4 + 1;
                    uVar4 = (ulonglong)uVar5;
                } while (uVar5 < *(uint *)(param_1 + 3));
            }
            FUN_140881720(DAT_140c10f20,param_1[5]);
        }
        param_1[3] = 0;
        *param_1 = 0;
        param_1[1] = 0;
    }
    return 1;
}



int FUN_14086c280(short *param_1)

{
    short sVar1;
    short sVar2;
    int iVar3;
    uint uVar4;

    sVar2 = param_1[2];
    uVar4 = 0;
    sVar1 = param_1[1];
    if ((short)(sVar2 - sVar1) != 0) {
        iVar3 = rand();
        uVar4 = (uint)((double)iVar3 * 3.051850947599719e-05 * (double)(int)(short)(sVar2 - sVar1) + 0.5
        );
    }
    return (uVar4 & 0xffff0000 | (uint)(ushort)((short)uVar4 + param_1[1])) + (int)*param_1;
}



undefined8 FUN_14086c2e0(float *param_1)

{
    int iVar1;
    float fVar2;
    float fVar3;
    float fVar4;

    fVar2 = 0.0;
    fVar3 = 0.0;
    fVar4 = param_1[2] - param_1[1];
    if (fVar4 != 0.0) {
        iVar1 = rand();
        fVar3 = (float)(int)((ulonglong)(double)iVar1 >> 0x20);
        fVar2 = (float)((double)iVar1 * 3.051850947599719e-05 * (double)fVar4);
    }
    return CONCAT44(fVar3,fVar2 + param_1[1] + *param_1);
}



undefined8 * FUN_14086c340(undefined8 *param_1,undefined8 param_2,byte param_3)

{
    FUN_14087bc10();
    *param_1 = &PTR_FUN_1409a5380;
    param_1[0x18] = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    *(undefined4 *)(param_1 + 0x3b) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined2 *)((longlong)param_1 + 0x1e4) = 0;
    *(byte *)((longlong)param_1 + 0x1de) = *(byte *)((longlong)param_1 + 0x1de) & 0xc0;
    *(byte *)((longlong)param_1 + 0x1df) = param_3 & 7 | 0x90;
    *(undefined2 *)(param_1 + 0x3c) = 1;
    *(undefined *)((longlong)param_1 + 0x1e6) = 0;
    *(undefined2 *)((longlong)param_1 + 0x1dc) = 0;
    return param_1;
}



undefined8 * FUN_14086c3d0(undefined8 *param_1,uint param_2)

{
    int iVar1;

    *param_1 = &PTR_FUN_1409a5380;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
        iVar1 = (**(code **)(*(longlong *)param_1[0x18] + 0x18))();
        if (iVar1 != 0) {
            (**(code **)(*(longlong *)param_1[0x18] + 0x38))();
            *(byte *)((longlong)param_1 + 0x1df) = *(byte *)((longlong)param_1 + 0x1df) & 0xf7;
            FUN_14086c9f0(param_1);
        }
        (**(code **)(*(longlong *)param_1[0x18] + 0x10))();
    }
    FUN_14087bc50(param_1);
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



undefined2 * FUN_14086c450(longlong *param_1,undefined2 param_2)

{
    undefined2 *puVar1;
    char cVar2;
    ulonglong uVar3;

    uVar3 = param_1[1] - *param_1 >> 1 & 0xffffffff;
    if (((uVar3 < *(uint *)(param_1 + 2)) || (cVar2 = FUN_14086d230(param_1,1), cVar2 != '\0')) &&
        (uVar3 < *(uint *)(param_1 + 2))) {
        puVar1 = (undefined2 *)param_1[1];
        param_1[1] = (longlong)(puVar1 + 1);
        if (puVar1 == (undefined2 *)0x0) {
            return (undefined2 *)0x0;
        }
        *puVar1 = param_2;
        return puVar1;
    }
    return (undefined2 *)0x0;
}



longlong FUN_14086c4d0(longlong *param_1)

{
    longlong lVar1;
    uint uVar2;
    char cVar3;

    uVar2 = (uint)((param_1[1] - *param_1) / 0x28);
    if ((*(uint *)(param_1 + 2) <= uVar2) && (cVar3 = FUN_14086d2e0(param_1,2), cVar3 == '\0')) {
        return 0;
    }
    if (*(uint *)(param_1 + 2) <= uVar2) {
        return 0;
    }
    if (param_1[1] != 0) {
        FUN_140865e70();
    }
    lVar1 = param_1[1];
    param_1[1] = lVar1 + 0x28;
    return lVar1;
}



ulonglong FUN_14086c560(longlong param_1,undefined4 param_2,int param_3)

{
    char cVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    if (param_3 != 50000) {
        *(byte *)(param_1 + 0x1df) = *(byte *)(param_1 + 0x1df) | 8;
    }
    if (((*(byte *)(param_1 + 0x1df) & 7) != 1) &&
        (cVar1 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x40))(), cVar1 != '\0')) {
        return 0x23;
    }
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x28))
            (*(longlong **)(param_1 + 0xc0),param_2,param_3);
    uVar3 = uVar2;
    if (((int)uVar2 == 1) &&
        (FUN_14086c9f0(param_1), uVar3 = uVar2 & 0xffffffff, *(char *)(param_1 + 0x1e6) != '\0')) {
        if (DAT_140c61b68 != 0) {
            FUN_14082e400(DAT_140c61b68,param_1);
            FUN_14082e5b0(DAT_140c61b68,param_1);
        }
        FUN_1408551c0(param_1,0,0,0,4);
    }
    return uVar3;
}



void FUN_14086c640(longlong param_1,short param_2)

{
    if (*(short *)(param_1 + 0x1dc) != param_2) {
        *(short *)(param_1 + 0x1dc) = param_2;
        FUN_14086c9f0();
        if (*(char *)(param_1 + 0x1e6) != '\0') {
            if (DAT_140c61b68 != 0) {
                FUN_14082e400(DAT_140c61b68,param_1);
                FUN_14082e5b0(DAT_140c61b68,param_1);
            }
            FUN_1408551c0(param_1,0,0,0,4);
        }
    }
    return;
}



bool FUN_14086c6b0(longlong param_1,undefined8 param_2,undefined2 param_3)

{
    char cVar1;

    if ((*(byte *)(param_1 + 0x1de) & 0x30) != 0) {
        cVar1 = FUN_14087c2d0(param_2,param_3);
        if (cVar1 == '\0') {
            cVar1 = FUN_14087c2a0(param_2,param_3);
            if (cVar1 == '\0') {
                return true;
            }
        }
        return false;
    }
    if (*(short *)(param_1 + 0x1dc) != 0) {
        cVar1 = FUN_14087c2a0(param_2,param_3);
        return cVar1 == '\0';
    }
    return true;
}



void FUN_14086c740(longlong param_1,byte param_2)

{
    byte bVar1;

    bVar1 = *(byte *)(param_1 + 0x1df);
    if ((bVar1 >> 6 & 1) != param_2) {
        *(byte *)(param_1 + 0x1df) = (param_2 << 6 ^ bVar1) & 0x40 ^ bVar1;
        FUN_14086c9f0(param_1);
        if (*(char *)(param_1 + 0x1e6) != '\0') {
            if (DAT_140c61b68 != 0) {
                FUN_14082e400(DAT_140c61b68,param_1);
                FUN_14082e5b0(DAT_140c61b68,param_1);
            }
            FUN_1408551c0(param_1,0,0,0,4);
        }
    }
    return;
}



longlong * FUN_14086c7c0(undefined4 param_1,undefined4 param_2)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;

    lVar2 = FUN_1408819f0(DAT_140c10f20,0x1e8);
    if (lVar2 != 0) {
        plVar3 = (longlong *)FUN_14086c340(lVar2,param_1,param_2);
        if (plVar3 == (longlong *)0x0) {
            return (longlong *)0x0;
        }
        iVar1 = FUN_14086d3f0(plVar3);
        if (iVar1 == 1) {
            return plVar3;
        }
        (**(code **)(*plVar3 + 0x10))(plVar3);
    }
    return (longlong *)0x0;
}



void FUN_14086c830(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
    longlong lVar1;
    ulonglong in_stack_ffffffffffffffc0;
    ulonglong in_stack_ffffffffffffffd8;
    uint in_stack_ffffffffffffffe0;

    if (*param_4 != 1) {
        lVar1 = FUN_1408819f0(DAT_140c10f20,0x220);
        if (lVar1 != 0) {
            FUN_14085cfe0(lVar1,param_2,param_3,*(undefined8 *)(param_4 + 4),param_4 + 8,param_4 + 0x10,0,
                          param_5,in_stack_ffffffffffffffd8 & 0xffffffffffffff00 |
                                  (ulonglong)*(byte *)(param_4 + 0x27),0,param_6,param_7);
            return;
        }
        return;
    }
    lVar1 = FUN_1408819f0(DAT_140c10f20,0x288);
    if (lVar1 != 0) {
        FUN_140866210(lVar1,param_2,param_3,*(undefined8 *)(param_4 + 4),*(undefined8 *)(param_4 + 0x24)
                ,param_4 + 8,param_4 + 0x10,
                      in_stack_ffffffffffffffc0 & 0xffffffffffffff00 |
                      (ulonglong)*(byte *)((longlong)param_4 + 0x9d),param_4[0x26],
                      *(undefined8 *)(param_4 + 2),param_5,
                      in_stack_ffffffffffffffe0 & 0xffffff00 | (uint)*(byte *)(param_4 + 0x27),param_6,
                      param_7);
        return;
    }
    return;
}



longlong * FUN_14086c930(longlong param_1,undefined2 param_2)

{
    int iVar1;
    undefined4 uVar2;
    longlong lVar3;
    longlong *plVar4;

    lVar3 = FUN_1408819f0(DAT_140c10f20,0x50);
    if (lVar3 != 0) {
        plVar4 = (longlong *)FUN_14087bde0(lVar3,param_2);
        if (plVar4 != (longlong *)0x0) {
            iVar1 = FUN_14087c1e0(plVar4,*(undefined2 *)(param_1 + 0x1dc));
            if (iVar1 == 1) {
                if ((*(byte *)(param_1 + 0x1df) & 8) != 0) {
                    uVar2 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x60))();
                    *(undefined4 *)((longlong)plVar4 + 0x1c) = uVar2;
                    *(undefined4 *)(plVar4 + 3) = uVar2;
                }
                return plVar4;
            }
            (**(code **)(*plVar4 + 8))(plVar4);
        }
    }
    return (longlong *)0x0;
}



void FUN_14086c9c0(void)

{
    longlong lVar1;

    lVar1 = FUN_1408819f0(DAT_140c10f20,0x20);
    if (lVar1 != 0) {
        FUN_14087be20(lVar1);
        return;
    }
    return;
}



// WARNING: Removing unreachable block (ram,0x00014086ca74)

void FUN_14086c9f0(longlong param_1)

{
    longlong **pplVar1;
    longlong *plVar2;
    ulonglong uVar3;
    uint uVar4;
    ulonglong uVar5;
    longlong *plVar6;
    uint local_40;

    pplVar1 = (longlong **)(param_1 + 200);
    uVar5 = 0;
    plVar6 = *pplVar1;
    while (plVar6 == (longlong *)0x0) {
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        if (0x1e < uVar4) goto LAB_14086caa7;
        plVar6 = pplVar1[uVar5];
    }
    do {
        local_40 = (uint)uVar5;
        plVar2 = (longlong *)plVar6[2];
        uVar3 = uVar5;
        while (plVar2 == (longlong *)0x0) {
            local_40 = (int)uVar3 + 1;
            uVar3 = (ulonglong)local_40;
            if (0x1e < local_40) break;
            plVar2 = pplVar1[uVar3];
        }
        pplVar1[uVar5] = (longlong *)plVar6[2];
        *(int *)(param_1 + 0x1c0) = *(int *)(param_1 + 0x1c0) + -1;
        (**(code **)(*plVar6 + 8))();
        if (plVar2 == (longlong *)0x0) {
            LAB_14086caa7:
            if (*(longlong **)(param_1 + 0x1c8) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(param_1 + 0x1c8) + 8))();
                *(undefined8 *)(param_1 + 0x1c8) = 0;
            }
            return;
        }
        uVar5 = (ulonglong)local_40;
        plVar6 = plVar2;
    } while( true );
}



void FUN_14086cae0(longlong *param_1,uint param_2)

{
    longlong lVar1;
    undefined2 *puVar2;
    undefined2 *puVar3;

    puVar2 = (undefined2 *)(*param_1 + (ulonglong)param_2 * 2);
    if (puVar2 < (undefined2 *)(param_1[1] + -2)) {
        puVar3 = puVar2;
        for (lVar1 = ((ulonglong)((longlong)(undefined2 *)(param_1[1] + -2) + (-1 - (longlong)puVar2))
                >> 1) + 1; puVar2 = puVar2 + 1, lVar1 != 0; lVar1 = lVar1 + -1) {
            *puVar3 = *puVar2;
            puVar3 = puVar3 + 1;
        }
    }
    param_1[1] = param_1[1] + -2;
    return;
}



longlong * FUN_14086cb20(longlong param_1,undefined2 param_2,ulonglong param_3)

{
    longlong lVar1;
    int iVar2;
    int iVar3;
    undefined8 uVar4;
    longlong *plVar5;

    if ((*(byte *)(param_1 + 0x1df) & 0x80) != 0) {
        if (*(longlong *)(param_1 + 0x1c8) == 0) {
            uVar4 = FUN_14086c930();
            *(undefined8 *)(param_1 + 0x1c8) = uVar4;
        }
        if (*(longlong **)(param_1 + 0x1c8) == (longlong *)0x0) {
            return (longlong *)0x0;
        }
        return *(longlong **)(param_1 + 0x1c8);
    }
    iVar2 = (int)param_3;
    iVar3 = (int)((param_3 & 0xffffffff) * 0x8421085 >> 0x20);
    plVar5 = *(longlong **)
            (param_1 + 200 +
             (ulonglong)(iVar2 + (((uint)(iVar2 - iVar3) >> 1) + iVar3 >> 4) * -0x1f) * 8);
    do {
        if (plVar5 == (longlong *)0x0) {
            LAB_14086cbb8:
            plVar5 = (longlong *)FUN_14086c930(param_1,param_2);
            if (plVar5 != (longlong *)0x0) {
                iVar3 = FUN_14084c3a0();
                if (iVar3 == 1) {
                    plVar5[1] = param_3;
                    iVar3 = (int)((param_3 & 0xffffffff) * 0x8421085 >> 0x20);
                    lVar1 = param_1 + (ulonglong)(iVar2 + (((uint)(iVar2 - iVar3) >> 1) + iVar3 >> 4) * -0x1f)
                                      * 8;
                    plVar5[2] = *(longlong *)(lVar1 + 200);
                    *(longlong **)(lVar1 + 200) = plVar5;
                    *(int *)(param_1 + 0x1c0) = *(int *)(param_1 + 0x1c0) + 1;
                    return plVar5;
                }
                (**(code **)(*plVar5 + 8))(plVar5);
            }
            return (longlong *)0x0;
        }
        if (plVar5[1] == param_3) {
            if (plVar5 != (longlong *)0x0) {
                return plVar5;
            }
            goto LAB_14086cbb8;
        }
        plVar5 = (longlong *)plVar5[2];
    } while( true );
}



longlong * FUN_14086cc50(longlong param_1,ulonglong param_2)

{
    int iVar1;
    int iVar2;
    longlong lVar3;
    undefined8 uVar4;
    longlong *plVar5;

    uVar4 = 0;
    if ((*(byte *)(param_1 + 0x1df) & 0x80) != 0) {
        if (*(longlong *)(param_1 + 0x1c8) == 0) {
            lVar3 = FUN_1408819f0(DAT_140c10f20,0x20);
            if (lVar3 != 0) {
                uVar4 = FUN_14087be20(lVar3);
            }
            *(undefined8 *)(param_1 + 0x1c8) = uVar4;
        }
        if (*(longlong **)(param_1 + 0x1c8) == (longlong *)0x0) {
            return (longlong *)0x0;
        }
        return *(longlong **)(param_1 + 0x1c8);
    }
    iVar1 = (int)param_2;
    iVar2 = (int)((param_2 & 0xffffffff) * 0x8421085 >> 0x20);
    plVar5 = *(longlong **)
            (param_1 + 200 +
             (ulonglong)(iVar1 + (((uint)(iVar1 - iVar2) >> 1) + iVar2 >> 4) * -0x1f) * 8);
    do {
        if (plVar5 == (longlong *)0x0) {
            LAB_14086cd0a:
            lVar3 = FUN_1408819f0(DAT_140c10f20,0x20);
            if ((lVar3 != 0) && (plVar5 = (longlong *)FUN_14087be20(lVar3), plVar5 != (longlong *)0x0)) {
                iVar2 = FUN_14084c3a0();
                if (iVar2 == 1) {
                    plVar5[1] = param_2;
                    iVar2 = (int)((param_2 & 0xffffffff) * 0x8421085 >> 0x20);
                    lVar3 = param_1 + (ulonglong)(iVar1 + (((uint)(iVar1 - iVar2) >> 1) + iVar2 >> 4) * -0x1f)
                                      * 8;
                    plVar5[2] = *(longlong *)(lVar3 + 200);
                    *(longlong **)(lVar3 + 200) = plVar5;
                    *(int *)(param_1 + 0x1c0) = *(int *)(param_1 + 0x1c0) + 1;
                    return plVar5;
                }
                (**(code **)(*plVar5 + 8))(plVar5);
            }
            return (longlong *)0x0;
        }
        if (plVar5[1] == param_2) {
            if (plVar5 != (longlong *)0x0) {
                return plVar5;
            }
            goto LAB_14086cd0a;
        }
        plVar5 = (longlong *)plVar5[2];
    } while( true );
}



longlong *
FUN_14086cdb0(longlong param_1,undefined8 param_2,undefined2 *param_3,undefined4 *param_4)

{
    short sVar1;
    bool bVar2;
    longlong *plVar3;
    char cVar4;
    uint uVar5;
    int iVar6;
    undefined4 uVar7;
    longlong *plVar8;
    longlong *plVar9;
    ushort uVar10;
    uint uVar12;
    char local_res8 [8];
    longlong *local_48;
    longlong *plVar11;
    longlong *plVar13;

    plVar11 = (longlong *)0x0;
    *param_3 = 0;
    *param_4 = 0;
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x18))();
    plVar9 = plVar11;
    if (uVar5 != 0) {
        if (uVar5 == 1) {
            uVar7 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x20))
                    (*(longlong **)(param_1 + 0xc0),0);
            *param_4 = uVar7;
            plVar9 = (longlong *)FUN_140830f00(DAT_140c61ba8,uVar7,0);
        }
        else {
            plVar8 = (longlong *)0x0;
            bVar2 = false;
            local_48 = (longlong *)0x0;
            if ((*(byte *)(param_1 + 0x1df) & 7) == 1) {
                plVar8 = (longlong *)FUN_14086cc50(param_1,param_2);
                plVar9 = plVar8;
            }
            else {
                local_48 = (longlong *)FUN_14086cb20(param_1,uVar5 & 0xffff,param_2);
                plVar9 = local_48;
            }
            plVar13 = plVar11;
            plVar3 = plVar11;
            if (plVar9 != (longlong *)0x0) {
                do {
                    plVar9 = plVar3;
                    local_res8[0] = '\x01';
                    if (bVar2) {
                        uVar10 = (short)plVar11 + 1;
                        plVar11 = (longlong *)(ulonglong)uVar10;
                        if (uVar5 <= uVar10) {
                            plVar11 = (longlong *)0x0;
                        }
                        cVar4 = FUN_14086c6b0(param_1,local_48,plVar11);
                        if (cVar4 != '\0') {
                            FUN_14086e1e0(param_1,local_48);
                            LAB_14086cf3d:
                            if (cVar4 != '\0') goto LAB_14086cf42;
                        }
                        if (!bVar2) {
                            return plVar9;
                        }
                    }
                    else {
                        if ((*(byte *)(param_1 + 0x1df) & 7) != 1) {
                            uVar10 = FUN_14086d8f0(param_1,local_48,local_res8,0);
                            plVar11 = (longlong *)(ulonglong)uVar10;
                            cVar4 = local_res8[0];
                            goto LAB_14086cf3d;
                        }
                        if (*(char *)(plVar8 + 3) == '\0') {
                            if (*(short *)((longlong)plVar8 + 0x1a) == 0) {
                                *(undefined2 *)((longlong)plVar8 + 0x1a) = 1;
                                *(undefined *)(plVar8 + 3) = 1;
                                plVar11 = (longlong *)0x1;
                            }
                            else {
                                uVar10 = *(short *)((longlong)plVar8 + 0x1a) - 1;
                                *(ushort *)((longlong)plVar8 + 0x1a) = uVar10;
                                plVar11 = (longlong *)(ulonglong)uVar10;
                            }
                        }
                        else {
                            sVar1 = *(short *)((longlong)plVar8 + 0x1a);
                            iVar6 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x18))();
                            if (sVar1 + 1 == iVar6) {
                                if ((*(byte *)(param_1 + 0x1df) & 0x20) == 0) {
                                    *(undefined2 *)((longlong)plVar8 + 0x1a) = 0;
                                    plVar11 = (longlong *)0x0;
                                }
                                else {
                                    plVar11 = (longlong *)(ulonglong)(ushort)(sVar1 - 1U);
                                    *(undefined *)(plVar8 + 3) = 0;
                                    *(ushort *)((longlong)plVar8 + 0x1a) = sVar1 - 1U;
                                }
                            }
                            else {
                                plVar11 = (longlong *)(ulonglong)(ushort)(sVar1 + 1U);
                                *(ushort *)((longlong)plVar8 + 0x1a) = sVar1 + 1U;
                            }
                        }
                        LAB_14086cf42:
                        uVar7 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x20))
                                (*(longlong **)(param_1 + 0xc0),plVar11);
                        *param_4 = uVar7;
                        plVar9 = (longlong *)FUN_140830f00(DAT_140c61ba8,uVar7);
                        if (plVar9 != (longlong *)0x0) {
                            cVar4 = (**(code **)(*plVar9 + 0x78))(plVar9);
                            if (cVar4 != '\0') {
                                *param_3 = (short)plVar11;
                                return plVar9;
                            }
                            (**(code **)(*plVar9 + 0x10))(plVar9);
                            plVar9 = (longlong *)0x0;
                        }
                    }
                    if ((((int)plVar13 == 0) && ((*(byte *)(param_1 + 0x1df) & 7) == 0)) &&
                        ((*(byte *)(param_1 + 0x1de) & 0x30) != 0x10)) {
                        bVar2 = true;
                    }
                    uVar12 = (int)plVar13 + 1;
                    plVar13 = (longlong *)(ulonglong)uVar12;
                    plVar3 = plVar9;
                } while (uVar12 < uVar5);
            }
        }
    }
    return plVar9;
}



undefined8
FUN_14086d020(longlong param_1,undefined8 param_2,undefined2 *param_3,undefined4 *param_4,
              longlong *param_5,short *param_6)

{
    byte bVar1;
    undefined2 uVar2;
    uint uVar3;
    undefined4 uVar4;
    longlong lVar5;
    longlong lVar6;
    undefined8 uVar7;
    char local_res8 [8];

    *param_4 = 0;
    *param_3 = 0;
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x18))();
    if (uVar3 == 0) {
        return 0;
    }
    if (uVar3 == 1) {
        if (*param_6 < 1) {
            return 0;
        }
        if ((*(byte *)(param_6 + 1) & 2) == 0) {
            *param_6 = *param_6 + -1;
        }
        uVar2 = 0;
    }
    else {
        bVar1 = *(byte *)(param_1 + 0x1df);
        local_res8[0] = '\x01';
        if ((((bVar1 & 0x10) == 0) && (*param_5 == 0)) && ((bVar1 & 7) == 1)) {
            lVar5 = FUN_14086cc50(param_1,param_2);
            if ((lVar5 == 0) || (lVar6 = FUN_14086c9c0(param_1), lVar6 == 0)) {
                return 0;
            }
            *(undefined8 *)(lVar6 + 8) = *(undefined8 *)(lVar5 + 8);
            *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar5 + 0x10);
            *(undefined *)(lVar6 + 0x18) = *(undefined *)(lVar5 + 0x18);
            *(undefined2 *)(lVar6 + 0x1a) = *(undefined2 *)(lVar5 + 0x1a);
            uVar2 = FUN_14086dbf0(param_1,lVar6,local_res8,param_6);
            *param_5 = lVar6;
        }
        else if ((bVar1 & 7) == 1) {
            if (*param_5 == 0) {
                lVar5 = FUN_14086c9c0(param_1);
                *param_5 = lVar5;
                if (lVar5 == 0) {
                    return 0;
                }
                lVar6 = *(longlong *)(param_1 + 0x1c8);
                if (lVar6 != 0) {
                    *(undefined2 *)(lVar5 + 0x1a) = *(undefined2 *)(lVar6 + 0x1a);
                    *(undefined2 *)(lVar6 + 0x1a) = 0xffff;
                }
            }
            lVar5 = *param_5;
            uVar2 = FUN_14086dbf0(param_1,lVar5,local_res8,param_6);
            if ((*(byte *)(param_1 + 0x1df) & 0x10) == 0) {
                FUN_14086e300(param_1,lVar5,param_2);
            }
        }
        else {
            lVar5 = *param_5;
            if (lVar5 == 0) {
                lVar5 = FUN_14086c930(param_1,uVar3 & 0xffff);
                if (lVar5 == 0) {
                    return 0;
                }
                *param_5 = lVar5;
            }
            uVar2 = FUN_14086d8f0(param_1,lVar5,local_res8,param_6);
        }
        if (local_res8[0] == '\0') {
            return 0;
        }
        *param_3 = uVar2;
    }
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x20))
            (*(longlong **)(param_1 + 0xc0),uVar2);
    *param_4 = uVar4;
    uVar7 = FUN_140830f00(DAT_140c61ba8,uVar4,0);
    return uVar7;
}



undefined8 FUN_14086d210(longlong param_1)

{
    undefined8 uVar1;

    if (*(longlong **)(param_1 + 0xc0) != (longlong *)0x0) {
        // WARNING: Could not recover jumptable at 0x00014086d21f. Too many branches
        // WARNING: Treating indirect jump as call
        uVar1 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x18))();
        return uVar1;
    }
    return 0;
}



undefined8 FUN_14086d230(longlong *param_1,int param_2)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;

    iVar2 = *(int *)(param_1 + 2);
    lVar3 = FUN_1408819f0(DAT_140c10f20);
    if (lVar3 == 0) {
        return 0;
    }
    uVar4 = param_1[1] - *param_1 >> 1;
    uVar6 = uVar4 & 0xffffffff;
    if (*param_1 != 0) {
        uVar5 = 0;
        if ((int)uVar4 != 0) {
            do {
                uVar5 = uVar5 + 1;
                *(undefined2 *)(lVar3 + -2 + uVar5 * 2) = *(undefined2 *)(*param_1 + -2 + uVar5 * 2);
            } while (uVar5 < uVar6);
        }
        FUN_140881720(DAT_140c10f20,*param_1);
    }
    lVar1 = lVar3 + uVar6 * 2;
    *(int *)(param_1 + 2) = iVar2 + param_2;
    param_1[1] = lVar1;
    *param_1 = lVar3;
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}



undefined8 FUN_14086d2e0(longlong *param_1,int param_2)

{
    int iVar1;
    longlong lVar2;
    ulonglong uVar3;
    longlong lVar4;
    ulonglong uVar5;

    iVar1 = *(int *)(param_1 + 2);
    lVar2 = FUN_1408819f0(DAT_140c10f20,(ulonglong)(uint)(iVar1 + param_2) * 0x28);
    if (lVar2 != 0) {
        uVar3 = (param_1[1] - *param_1) / 0x28;
        uVar5 = uVar3 & 0xffffffff;
        if (*param_1 != 0) {
            if ((int)uVar3 != 0) {
                uVar3 = uVar5;
                lVar4 = lVar2;
                do {
                    if (lVar4 != 0) {
                        FUN_140865e70(lVar4);
                    }
                    FUN_140865ef0(lVar4,*param_1 + (lVar4 - lVar2));
                    FUN_140865e90(*param_1 + (lVar4 - lVar2));
                    lVar4 = lVar4 + 0x28;
                    uVar3 = uVar3 - 1;
                } while (uVar3 != 0);
            }
            FUN_140881720(DAT_140c10f20,*param_1);
        }
        *param_1 = lVar2;
        *(int *)(param_1 + 2) = iVar1 + param_2;
        param_1[1] = lVar2 + uVar5 * 0x28;
        return CONCAT71((int7)(uVar5 * 5 >> 8),1);
    }
    return 0;
}



undefined8 FUN_14086d3f0(longlong *param_1)

{
    longlong *plVar1;
    char cVar2;
    uint uVar3;
    longlong *plVar4;
    longlong *plVar5;
    undefined8 uVar6;
    longlong lVar7;

    uVar3 = (**(code **)(*param_1 + 0x70))();
    if ((uVar3 < 0xd) && ((0x1401U >> (uVar3 & 0x1f) & 1) != 0)) {
        cVar2 = '\x01';
    }
    else {
        cVar2 = '\0';
    }
    *(byte *)((longlong)param_1 + 0x5b) = *(byte *)((longlong)param_1 + 0x5b) & 0xfd;
    *(byte *)((longlong)param_1 + 0x5b) = *(byte *)((longlong)param_1 + 0x5b) | cVar2 * '\x02';
    FUN_140851a00();
    plVar5 = (longlong *)0x0;
    lVar7 = 3;
    *(undefined4 *)(param_1 + 0x38) = 0;
    plVar1 = param_1 + 0x19;
    do {
        plVar4 = plVar1;
        *plVar4 = 0;
        plVar4[1] = 0;
        plVar4[2] = 0;
        plVar4[3] = 0;
        plVar4[4] = 0;
        plVar4[5] = 0;
        plVar4[6] = 0;
        plVar4[7] = 0;
        lVar7 = lVar7 + -1;
        plVar1 = plVar4 + 8;
    } while (lVar7 != 0);
    plVar4[8] = 0;
    plVar4[9] = 0;
    plVar4[10] = 0;
    plVar4[0xb] = 0;
    plVar4[0xc] = 0;
    plVar4[0xd] = 0;
    plVar4[0xe] = 0;
    if ((*(byte *)((longlong)param_1 + 0x1df) & 7) == 1) {
        lVar7 = FUN_1408819f0(DAT_140c10f20,0x20);
        if (lVar7 != 0) {
            plVar5 = (longlong *)FUN_14087c3c0(lVar7);
        }
    }
    else {
        lVar7 = FUN_1408819f0(DAT_140c10f20,0x20);
        if (lVar7 != 0) {
            plVar5 = (longlong *)FUN_14087c3a0(lVar7);
        }
    }
    param_1[0x18] = (longlong)plVar5;
    if (plVar5 == (longlong *)0x0) {
        return 2;
    }
    // WARNING: Could not recover jumptable at 0x00014086d4de. Too many branches
    // WARNING: Treating indirect jump as call
    uVar6 = (**(code **)(*plVar5 + 8))(plVar5);
    return uVar6;
}



void FUN_14086d500(longlong param_1,byte param_2)

{
    if (*(byte *)(param_1 + 0x1df) >> 7 != param_2) {
        *(byte *)(param_1 + 0x1df) = *(byte *)(param_1 + 0x1df) & 0x7f | param_2 << 7;
        FUN_14086c9f0(param_1);
        if (*(char *)(param_1 + 0x1e6) != '\0') {
            if (DAT_140c61b68 != 0) {
                FUN_14082e400(DAT_140c61b68,param_1);
                FUN_14082e5b0(DAT_140c61b68,param_1);
            }
            FUN_1408551c0(param_1,0,0,0,4);
        }
    }
    return;
}



int FUN_14086d580(longlong param_1,uint param_2)

{
    byte bVar1;
    int iVar2;
    longlong lVar3;
    longlong *plVar4;

    bVar1 = *(byte *)(param_1 + 0x1df);
    if (param_2 == (bVar1 & 7)) {
        return 1;
    }
    *(byte *)(param_1 + 0x1df) = (bVar1 ^ (byte)param_2) & 7 ^ bVar1;
    if (*(longlong **)(param_1 + 0xc0) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x10))();
    }
    if ((*(byte *)(param_1 + 0x1df) & 7) == 1) {
        lVar3 = FUN_1408819f0(DAT_140c10f20,0x20);
        if (lVar3 != 0) {
            plVar4 = (longlong *)FUN_14087c3c0(lVar3);
            goto LAB_14086d600;
        }
    }
    else {
        lVar3 = FUN_1408819f0(DAT_140c10f20,0x20);
        if (lVar3 != 0) {
            plVar4 = (longlong *)FUN_14087c3a0(lVar3);
            goto LAB_14086d600;
        }
    }
    plVar4 = (longlong *)0x0;
    LAB_14086d600:
    *(longlong **)(param_1 + 0xc0) = plVar4;
    if (plVar4 == (longlong *)0x0) {
        iVar2 = 2;
    }
    else {
        iVar2 = (**(code **)(*plVar4 + 8))(plVar4);
        if (iVar2 != 1) {
            (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x10))();
            *(undefined8 *)(param_1 + 0xc0) = 0;
        }
    }
    FUN_14086c9f0(param_1);
    if (*(char *)(param_1 + 0x1e6) != '\0') {
        if (DAT_140c61b68 != 0) {
            FUN_14082e400(DAT_140c61b68,param_1);
            FUN_14082e5b0(DAT_140c61b68,param_1);
        }
        FUN_1408551c0(param_1,0,0,0,4);
    }
    return iVar2;
}



ulonglong FUN_14086d6b0(longlong param_1,int *param_2)

{
    uint uVar1;
    longlong lVar2;
    undefined8 uVar3;
    ulonglong uVar4;
    bool bVar5;
    undefined8 local_48;
    undefined4 local_40;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 *local_28;
    undefined2 local_20;
    longlong local_18;
    undefined4 local_10;

    *(undefined *)(param_1 + 0x1e6) = 1;
    if ((*(byte *)(param_1 + 0x1df) & 0x40) == 0) {
        uVar4 = FUN_14086e3e0();
        return uVar4;
    }
    if (*param_2 == 0) {
        local_28 = &local_48;
        *(longlong *)(param_2 + 2) = param_1;
        local_38 = 0;
        local_30 = 0;
        local_20 = 0;
        local_48 = 0;
        local_18 = 0;
        local_10 = 0;
        *param_2 = 1;
        local_40 = 0;
        lVar2 = FUN_140865fc0();
        bVar5 = local_18 != 0;
        local_18 = lVar2;
        if (bVar5) {
            FUN_140866000();
        }
        if (local_18 == 0) {
            return 2;
        }
        *(undefined8 **)(param_2 + 0x24) = &local_38;
        uVar1 = FUN_14086e4d0(param_1,param_2);
        if (local_18 != 0) {
            FUN_140866000();
        }
        return (ulonglong)uVar1;
    }
    if ((*(longlong *)(param_2 + 0x24) != 0) &&
        (*(longlong *)(*(longlong *)(param_2 + 0x24) + 0x20) == 0)) {
        uVar3 = FUN_140865fc0();
        lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x24) + 0x20);
        *(undefined8 *)(*(longlong *)(param_2 + 0x24) + 0x20) = uVar3;
        if (lVar2 != 0) {
            FUN_140866000();
        }
        if (*(longlong *)(*(longlong *)(param_2 + 0x24) + 0x20) == 0) {
            return 2;
        }
    }
    uVar4 = FUN_14086e4d0(param_1,param_2);
    return uVar4;
}



void FUN_14086d7f0(longlong param_1,uint param_2)

{
    byte bVar1;

    bVar1 = *(byte *)(param_1 + 0x1de);
    if ((bVar1 >> 4 & 3) != param_2) {
        *(byte *)(param_1 + 0x1de) = ((char)param_2 << 4 ^ bVar1) & 0x30 ^ bVar1;
        FUN_14086c9f0(param_1);
        if (*(char *)(param_1 + 0x1e6) != '\0') {
            if (DAT_140c61b68 != 0) {
                FUN_14082e400(DAT_140c61b68,param_1);
                FUN_14082e5b0(DAT_140c61b68,param_1);
            }
            FUN_1408551c0(param_1,0,0,0,4);
        }
    }
    return;
}



void FUN_14086d870(longlong param_1,byte param_2)

{
    byte bVar1;

    bVar1 = *(byte *)(param_1 + 0x1df);
    if ((bVar1 >> 4 & 1) != param_2) {
        *(byte *)(param_1 + 0x1df) = (param_2 << 4 ^ bVar1) & 0x10 ^ bVar1;
        FUN_14086c9f0(param_1);
        if (*(char *)(param_1 + 0x1e6) != '\0') {
            if (DAT_140c61b68 != 0) {
                FUN_14082e400(DAT_140c61b68,param_1);
                FUN_14082e5b0(DAT_140c61b68,param_1);
            }
            FUN_1408551c0(param_1,0,0,0,4);
        }
    }
    return;
}



short FUN_14086d8f0(longlong param_1,longlong param_2,undefined *param_3,short *param_4)

{
    longlong *plVar1;
    char cVar2;
    undefined2 uVar3;
    short sVar4;
    ushort uVar5;
    int iVar6;
    int iVar7;
    short sVar8;
    undefined2 *puVar9;
    ushort uVar10;
    longlong lVar11;
    undefined2 *puVar12;
    int iVar13;

    *param_3 = 1;
    plVar1 = *(longlong **)(param_1 + 0xc0);
    sVar8 = 0;
    iVar13 = -1;
    if (*(short *)(param_2 + 0x22) == 0) {
        if ((param_4 != (short *)0x0) &&
            (((*(byte *)(param_4 + 1) & 1) == 0 ||
              (((*(byte *)(param_4 + 1) & 2) == 0 && (*param_4 = *param_4 + -1, *param_4 == 0)))))) {
            *param_3 = 0;
            return 0;
        }
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x18))();
        *(undefined2 *)(param_2 + 0x22) = uVar3;
        (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x18))();
        FUN_14087c360();
        if ((*(byte *)(param_1 + 0x1de) & 0x30) == 0x10) {
            lVar11 = *(longlong *)(param_2 + 0x28);
            *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_2 + 0x18);
            if (lVar11 != *(longlong *)(param_2 + 0x30)) {
                do {
                    iVar6 = (**(code **)(*plVar1 + 0x50))();
                    lVar11 = lVar11 + 2;
                    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) - iVar6;
                } while (lVar11 != *(longlong *)(param_2 + 0x30));
            }
        }
        *(short *)(param_2 + 0x20) =
                *(short *)(param_2 + 0x20) -
                (short)((longlong)(ulonglong)(uint)(*(int *)(param_2 + 0x30) - *(int *)(param_2 + 0x28)) >>
                                                                                                         1);
    }
    if ((*(byte *)(param_1 + 0x1df) & 8) == 0) {
        iVar6 = rand();
        uVar10 = *(ushort *)(param_2 + 0x20);
        do {
            if ((*(byte *)(param_1 + 0x1de) & 0x30) == 0) {
                if (*(short *)(param_1 + 0x1dc) != 0) {
                    cVar2 = FUN_14087c2a0(param_2);
                    joined_r0x00014086da91:
                    if (cVar2 != '\0') goto LAB_14086da96;
                }
                iVar13 = iVar13 + 1;
            }
            else {
                cVar2 = FUN_14087c2d0(param_2,sVar8);
                if (cVar2 == '\0') {
                    cVar2 = FUN_14087c2a0(param_2);
                    goto joined_r0x00014086da91;
                }
            }
            LAB_14086da96:
            sVar8 = sVar8 + 1;
        } while (iVar13 < (int)(iVar6 % (int)(uint)uVar10 & 0xffffU));
    }
    else {
        iVar6 = FUN_14087c1b0(param_2);
        if (-1 < iVar6) {
            do {
                if ((*(byte *)(param_1 + 0x1de) & 0x30) == 0) {
                    if (*(short *)(param_1 + 0x1dc) != 0) {
                        cVar2 = FUN_14087c2a0(param_2);
                        joined_r0x00014086da23:
                        if (cVar2 != '\0') goto LAB_14086da34;
                    }
                    iVar7 = (**(code **)(*plVar1 + 0x50))(plVar1);
                    iVar13 = iVar13 + iVar7;
                }
                else {
                    cVar2 = FUN_14087c2d0(param_2,sVar8);
                    if (cVar2 == '\0') {
                        cVar2 = FUN_14087c2a0(param_2);
                        goto joined_r0x00014086da23;
                    }
                }
                LAB_14086da34:
                sVar8 = sVar8 + 1;
            } while (iVar13 < iVar6);
        }
    }
    sVar8 = sVar8 + -1;
    if ((*(byte *)(param_1 + 0x1de) & 0x30) == 0) {
        cVar2 = FUN_14087c2d0(param_2,sVar8);
        if (cVar2 == '\0') {
            FUN_14087c180(param_2,sVar8);
            *(short *)(param_2 + 0x22) = *(short *)(param_2 + 0x22) + -1;
        }
        FUN_14086e1e0(param_1,param_2,sVar8);
    }
    else {
        uVar10 = *(ushort *)(param_1 + 0x1dc);
        if (uVar10 == 0) {
            uVar10 = 1;
        }
        iVar13 = (**(code **)(*plVar1 + 0x50))(plVar1,sVar8);
        *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) - iVar13;
        *(short *)(param_2 + 0x20) = *(short *)(param_2 + 0x20) + -1;
        *(short *)(param_2 + 0x22) = *(short *)(param_2 + 0x22) + -1;
        FUN_14087c180(param_2,sVar8);
        lVar11 = FUN_14086c450(param_2 + 0x28,sVar8);
        if (lVar11 == 0) {
            *(undefined2 *)(param_2 + 0x22) = 0;
        }
        else {
            FUN_14087c120(param_2,sVar8);
            sVar4 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x18))();
            uVar5 = sVar4 - 1U;
            if (uVar10 < (ushort)(sVar4 - 1U)) {
                uVar5 = uVar10;
            }
            if ((uint)uVar5 < (uint)(*(longlong *)(param_2 + 0x30) - *(longlong *)(param_2 + 0x28) >> 1))
            {
                puVar9 = *(undefined2 **)(param_2 + 0x28);
                puVar12 = (undefined2 *)(*(longlong *)(param_2 + 0x30) - 2);
                uVar3 = *puVar9;
                if (puVar9 < puVar12) {
                    lVar11 = ((ulonglong)((longlong)puVar12 + (-1 - (longlong)puVar9)) >> 1) + 1;
                    puVar12 = puVar9;
                    for (; puVar9 = puVar9 + 1, lVar11 != 0; lVar11 = lVar11 + -1) {
                        *puVar12 = *puVar9;
                        puVar12 = puVar12 + 1;
                    }
                }
                *(longlong *)(param_2 + 0x30) = *(longlong *)(param_2 + 0x30) + -2;
                FUN_14087c150(param_2,uVar3);
                cVar2 = FUN_14087c2d0(param_2,uVar3);
                if (cVar2 == '\0') {
                    iVar13 = (**(code **)(*plVar1 + 0x50))(plVar1,uVar3);
                    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + iVar13;
                    *(short *)(param_2 + 0x20) = *(short *)(param_2 + 0x20) + 1;
                }
            }
        }
    }
    return sVar8;
}



undefined2 FUN_14086dbf0(longlong param_1,longlong param_2,undefined *param_3,short *param_4)

{
    short sVar1;
    int iVar2;

    *param_3 = 1;
    if (*(char *)(param_2 + 0x18) == '\0') {
        if (*(short *)(param_2 + 0x1a) == 0) {
            *(undefined2 *)(param_2 + 0x1a) = 1;
            *(undefined *)(param_2 + 0x18) = 1;
            if ((param_4 != (short *)0x0) &&
                (((*(byte *)(param_4 + 1) & 1) == 0 ||
                  (((*(byte *)(param_4 + 1) & 2) == 0 && (*param_4 = *param_4 + -1, *param_4 == 0)))))) {
                *param_3 = 0;
                return 0;
            }
        }
        else {
            *(short *)(param_2 + 0x1a) = *(short *)(param_2 + 0x1a) + -1;
        }
    }
    else {
        sVar1 = *(short *)(param_2 + 0x1a);
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x18))();
        if (sVar1 + 1 == iVar2) {
            if ((*(byte *)(param_1 + 0x1df) & 0x20) == 0) {
                *(undefined2 *)(param_2 + 0x1a) = 0;
                if ((param_4 != (short *)0x0) &&
                    (((*(byte *)(param_4 + 1) & 1) == 0 ||
                      (((*(byte *)(param_4 + 1) & 2) == 0 && (*param_4 = *param_4 + -1, *param_4 == 0)))))) {
                    *param_3 = 0;
                    return 0;
                }
            }
            else {
                *(undefined *)(param_2 + 0x18) = 0;
                *(short *)(param_2 + 0x1a) = sVar1 + -1;
            }
        }
        else {
            *(short *)(param_2 + 0x1a) = sVar1 + 1;
        }
    }
    return *(undefined2 *)(param_2 + 0x1a);
}



ulonglong FUN_14086dcf0(longlong param_1,longlong param_2,undefined4 param_3)

{
    short *psVar1;
    undefined uVar2;
    byte bVar3;
    char cVar4;
    char cVar5;
    char cVar6;
    short sVar7;
    short sVar8;
    ushort uVar9;
    uint uVar10;
    ulonglong uVar11;
    undefined4 *puVar12;
    uint uVar13;
    undefined4 uVar14;
    undefined4 uVar15;
    undefined4 uVar16;
    undefined4 *local_res10;
    undefined4 local_res18 [2];
    char local_res20;

    local_res10 = (undefined4 *)(param_2 + 4);
    local_res18[0] = param_3;
    uVar11 = FUN_1408546e0(param_1,&local_res10,local_res18,0);
    if ((int)uVar11 == 1) {
        sVar7 = *(short *)((longlong)local_res10 + 2);
        sVar8 = *(short *)(local_res10 + 1);
        uVar13 = 0;
        if (*(short *)local_res10 == 0) {
            *(undefined4 *)(param_1 + 0x1e0) = 0;
            *(undefined2 *)(param_1 + 0x1e4) = 0;
        }
        else {
            *(short *)(param_1 + 0x1e0) = *(short *)local_res10;
            *(short *)(param_1 + 0x1e2) = sVar7;
            *(short *)(param_1 + 0x1e4) = sVar8;
        }
        uVar14 = *(undefined4 *)((longlong)local_res10 + 6);
        uVar15 = *(undefined4 *)((longlong)local_res10 + 10);
        uVar16 = *(undefined4 *)((longlong)local_res10 + 0xe);
        sVar7 = *(short *)((longlong)local_res10 + 0x12);
        uVar2 = *(undefined *)(local_res10 + 5);
        bVar3 = *(byte *)((longlong)local_res10 + 0x15);
        psVar1 = (short *)((longlong)local_res10 + 0x16);
        cVar4 = *(char *)(local_res10 + 6);
        cVar5 = *(char *)((longlong)local_res10 + 0x19);
        local_res20 = *(char *)((longlong)local_res10 + 0x1a);
        cVar6 = *(char *)((longlong)local_res10 + 0x1b);
        local_res10 = local_res10 + 7;
        uVar11 = FUN_14086d580(param_1,*(undefined *)psVar1);
        if ((int)uVar11 == 1) {
            *(undefined4 *)(param_1 + 0x1d0) = uVar14;
            *(undefined4 *)(param_1 + 0x1d4) = uVar15;
            *(undefined4 *)(param_1 + 0x1d8) = uVar16;
            FUN_14086c640(param_1,sVar7);
            FUN_14086dfa0(param_1,uVar2);
            uVar11 = (ulonglong)bVar3;
            FUN_14086d7f0(param_1,uVar11);
            uVar11 = uVar11 & 0xffffffffffffff00 | (ulonglong)(cVar4 != '\0');
            FUN_14086d870(param_1,uVar11);
            *(byte *)(param_1 + 0x1df) = *(byte *)(param_1 + 0x1df) & 0xdf;
            *(byte *)(param_1 + 0x1df) = *(byte *)(param_1 + 0x1df) | (cVar5 != '\0') << 5;
            uVar11 = uVar11 & 0xffffffffffffff00 | (ulonglong)(local_res20 != '\0');
            FUN_14086c740(param_1,uVar11);
            FUN_14086d500(param_1,uVar11 & 0xffffffffffffff00 | (ulonglong)(cVar6 != '\0'));
            uVar11 = FUN_140869cc0(param_1,&local_res10,local_res18);
            if ((int)uVar11 == 1) {
                uVar11 = uVar11 & 0xffffffff;
                uVar9 = *(ushort *)local_res10;
                local_res10 = (undefined4 *)((longlong)local_res10 + 2);
                if (uVar9 != 0) {
                    do {
                        uVar14 = *local_res10;
                        puVar12 = local_res10 + 1;
                        local_res10 = local_res10 + 2;
                        uVar10 = FUN_14086c560(param_1,uVar14,*puVar12);
                        uVar11 = (ulonglong)uVar10;
                        if (uVar10 == 0xf) {
                            uVar11 = 1;
                        }
                        else if (uVar10 != 1) {
                            return uVar11;
                        }
                        uVar13 = uVar13 + 1;
                    } while (uVar13 < uVar9);
                }
            }
        }
    }
    return uVar11;
}



byte FUN_14086df90(longlong param_1)

{
    return *(byte *)(param_1 + 0x1de) & 0xf;
}



void FUN_14086dfa0(longlong param_1,uint param_2)

{
    byte bVar1;

    bVar1 = *(byte *)(param_1 + 0x1de);
    if ((bVar1 & 0xf) != param_2) {
        *(byte *)(param_1 + 0x1de) = (bVar1 ^ (byte)param_2) & 0xf ^ bVar1;
        FUN_14086c9f0(param_1);
        if (*(char *)(param_1 + 0x1e6) != '\0') {
            if (DAT_140c61b68 != 0) {
                FUN_14082e400(DAT_140c61b68,param_1);
                FUN_14082e5b0(DAT_140c61b68,param_1);
            }
            FUN_1408551c0(param_1,0,0,0,4);
        }
    }
    return;
}



undefined8 FUN_14086e020(longlong param_1,undefined8 param_2)

{
    int iVar1;
    float fVar2;
    float fVar3;
    float fVar5;
    undefined8 uVar4;
    undefined4 in_XMM6_Da;
    float fVar6;
    undefined4 in_XMM6_Db;
    undefined4 uVar7;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined4 in_XMM7_Da;
    float fVar8;
    undefined4 in_XMM7_Db;
    undefined4 in_XMM7_Dc;
    undefined4 in_XMM7_Dd;
    undefined4 in_XMM8_Da;
    undefined4 in_XMM8_Db;
    undefined4 in_XMM8_Dc;
    undefined4 in_XMM8_Dd;

    if ((*(byte *)(param_1 + 0x60) >> 5 & 1) == 0) {
        fVar6 = 0.0;
        uVar7 = 0;
        fVar3 = *(float *)(param_1 + 0x1d8) - *(float *)(param_1 + 0x1d4);
        fVar2 = 0.0;
        fVar5 = 0.0;
        if (fVar3 != 0.0) {
            iVar1 = rand();
            fVar5 = (float)(int)((ulonglong)(double)iVar1 >> 0x20);
            fVar2 = (float)((double)iVar1 * 3.051850947599719e-05 * (double)fVar3);
        }
        uVar4 = CONCAT44(fVar5,fVar2 + *(float *)(param_1 + 0x1d4) + *(float *)(param_1 + 0x1d0));
    }
    else {
        fVar2 = (float)FUN_140836340(DAT_140c61bb0,param_1,5,param_2,
                                     CONCAT412(in_XMM8_Dd,
                                               CONCAT48(in_XMM8_Dc,CONCAT44(in_XMM8_Db,in_XMM8_Da))),
                                     CONCAT412(in_XMM7_Dd,
                                               CONCAT48(in_XMM7_Dc,CONCAT44(in_XMM7_Db,in_XMM7_Da))),
                                     CONCAT412(in_XMM6_Dd,
                                               CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da))));
        fVar6 = 0.0;
        uVar7 = 0;
        fVar8 = *(float *)(param_1 + 0x1d8) - *(float *)(param_1 + 0x1d4);
        fVar3 = 0.0;
        fVar5 = 0.0;
        fVar2 = fVar2 * 1000.0;
        if (fVar8 != 0.0) {
            iVar1 = rand();
            fVar5 = (float)(int)((ulonglong)(double)iVar1 >> 0x20);
            fVar3 = (float)((double)iVar1 * 3.051850947599719e-05 * (double)fVar8);
        }
        uVar4 = CONCAT44(fVar5,fVar3 + *(float *)(param_1 + 0x1d4) + *(float *)(param_1 + 0x1d0) + fVar2
        );
    }
    if ((float)uVar4 < fVar6) {
        uVar4 = CONCAT44(uVar7,fVar6);
    }
    return uVar4;
}



undefined8 FUN_14086e1e0(longlong param_1,longlong param_2,undefined2 param_3)

{
    undefined8 *puVar1;
    undefined2 uVar2;
    longlong *plVar3;
    short sVar4;
    ushort uVar5;
    int iVar6;
    longlong lVar7;
    undefined2 *puVar8;
    undefined2 *puVar9;

    plVar3 = *(longlong **)(param_1 + 0xc0);
    if (*(short *)(param_1 + 0x1dc) != 0) {
        puVar1 = (undefined8 *)(param_2 + 0x28);
        *(short *)(param_2 + 0x20) = *(short *)(param_2 + 0x20) + -1;
        lVar7 = FUN_14086c450(puVar1,param_3);
        if (lVar7 == 0) {
            *(undefined2 *)(param_2 + 0x22) = 0;
            return 2;
        }
        FUN_14087c120(param_2,param_3);
        iVar6 = (**(code **)(*plVar3 + 0x50))(plVar3,param_3);
        *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) - iVar6;
        sVar4 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x18))();
        uVar5 = sVar4 - 1U;
        if (*(ushort *)(param_1 + 0x1dc) < (ushort)(sVar4 - 1U)) {
            uVar5 = *(ushort *)(param_1 + 0x1dc);
        }
        if ((uint)uVar5 < (uint)(*(longlong *)(param_2 + 0x30) - (longlong)(undefined2 *)*puVar1 >> 1))
        {
            uVar2 = *(undefined2 *)*puVar1;
            FUN_14087c150(param_2,uVar2);
            iVar6 = (**(code **)(*plVar3 + 0x50))(plVar3,uVar2);
            *(short *)(param_2 + 0x20) = *(short *)(param_2 + 0x20) + 1;
            *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + iVar6;
            puVar9 = (undefined2 *)*puVar1;
            puVar8 = (undefined2 *)(*(longlong *)(param_2 + 0x30) + -2);
            if (puVar9 < puVar8) {
                lVar7 = ((ulonglong)((longlong)puVar8 + (-1 - (longlong)puVar9)) >> 1) + 1;
                puVar8 = puVar9;
                for (; puVar9 = puVar9 + 1, lVar7 != 0; lVar7 = lVar7 + -1) {
                    *puVar8 = *puVar9;
                    puVar8 = puVar8 + 1;
                }
            }
            *(longlong *)(param_2 + 0x30) = *(longlong *)(param_2 + 0x30) + -2;
        }
    }
    return 1;
}



void FUN_14086e300(longlong param_1,longlong param_2,longlong param_3)

{
    char cVar1;
    short sVar2;
    int iVar3;
    longlong lVar4;

    if ((*(byte *)(param_1 + 0x1df) & 0x80) == 0) {
        for (lVar4 = *(longlong *)(param_1 + 200 + (ulonglong)((uint)param_3 % 0x1f) * 8); lVar4 != 0;
             lVar4 = *(longlong *)(lVar4 + 0x10)) {
            if (*(longlong *)(lVar4 + 8) == param_3) goto LAB_14086e361;
        }
        lVar4 = 0;
    }
    else {
        lVar4 = *(longlong *)(param_1 + 0x1c8);
    }
    LAB_14086e361:
    cVar1 = *(char *)(param_2 + 0x18);
    *(char *)(lVar4 + 0x18) = cVar1;
    if (cVar1 == '\0') {
        sVar2 = *(short *)(param_2 + 0x1a) + 1;
    }
    else {
        sVar2 = *(short *)(param_2 + 0x1a) + -1;
    }
    *(short *)(lVar4 + 0x1a) = sVar2;
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x18))();
    if ((sVar2 + 1 == iVar3) && ((*(byte *)(param_1 + 0x1df) & 0x20) == 0)) {
        *(undefined2 *)(lVar4 + 0x1a) = 0xffff;
        return;
    }
    if ((sVar2 == 0) && (*(char *)(lVar4 + 0x18) == '\0')) {
        *(undefined *)(lVar4 + 0x18) = 1;
    }
    return;
}



int FUN_14086e3e0(longlong *param_1,int *param_2)

{
    uint uVar1;
    int iVar2;
    int iVar3;
    longlong *plVar4;
    undefined2 local_res10 [4];
    undefined local_res18 [8];

    plVar4 = (longlong *)FUN_14086cdb0(param_1,*(undefined8 *)(param_2 + 4),local_res10,local_res18);
    if (plVar4 != (longlong *)0x0) {
        uVar1 = param_2[0x10];
        if (uVar1 < 0x20) {
            param_2[0x21] = param_2[0x21] & ~(uint)(1 << ((byte)uVar1 & 0x3f));
            *(undefined2 *)((longlong)param_2 + (ulonglong)(uint)param_2[0x10] * 2 + 0x44) =
            local_res10[0];
            param_2[0x10] = param_2[0x10] + 1;
        }
        else {
            param_2[0x10] = uVar1 + 1;
        }
        iVar2 = FUN_14084ed10(plVar4,param_2);
        iVar3 = 1;
        if ((iVar2 != 3) && (iVar3 = iVar2, iVar2 == 1)) {
            iVar3 = (**(code **)(*plVar4 + 0x278))(plVar4,param_2);
        }
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return iVar3;
    }
    if (*param_2 != 0) {
        iVar3 = (**(code **)(*param_1 + 0x288))(param_1,param_2);
        if (iVar3 == 3) {
            iVar3 = 1;
        }
        return iVar3;
    }
    return 2;
}



int FUN_14086e4d0(longlong *param_1,longlong param_2)

{
    uint uVar1;
    longlong lVar2;
    short sVar3;
    int iVar4;
    int iVar5;
    longlong **pplVar6;
    longlong *plVar7;
    byte bVar8;
    undefined2 local_res10 [4];
    undefined local_res18 [16];

    pplVar6 = (longlong **)FUN_14086c4d0(*(undefined8 *)(*(longlong *)(param_2 + 0x90) + 0x20));
    if (pplVar6 != (longlong **)0x0) {
        if (param_1 != (longlong *)0x0) {
            (**(code **)(*param_1 + 8))(param_1);
        }
        plVar7 = *pplVar6;
        *pplVar6 = param_1;
        if (plVar7 != (longlong *)0x0) {
            (**(code **)(*plVar7 + 0x10))();
        }
        *(byte *)((longlong)pplVar6 + 0x12) =
                *(byte *)((longlong)pplVar6 + 0x12) ^
                (*(short *)(param_1 + 0x3c) != 1 ^ *(byte *)((longlong)pplVar6 + 0x12)) & 1;
        bVar8 = ((*(short *)(param_1 + 0x3c) == 0) * '\x02' ^ *(byte *)((longlong)pplVar6 + 0x12)) & 2 ^
                *(byte *)((longlong)pplVar6 + 0x12);
        *(byte *)((longlong)pplVar6 + 0x12) = bVar8;
        if ((bVar8 & 1) == 0) {
            *(undefined2 *)(pplVar6 + 2) = 1;
        }
        else if ((bVar8 & 2) == 0) {
            sVar3 = FUN_14086c280(param_1 + 0x3c);
            if (sVar3 < 1) {
                sVar3 = 1;
            }
            else if (0x7fff < sVar3) {
                sVar3 = 0x7fff;
            }
            *(short *)(pplVar6 + 2) = sVar3;
        }
        else {
            *(undefined2 *)(pplVar6 + 2) = 1;
        }
        plVar7 = (longlong *)
                FUN_14086d020(*pplVar6,*(undefined8 *)(param_2 + 0x10),local_res10,local_res18,
                              pplVar6 + 1,pplVar6 + 2);
        if (plVar7 != (longlong *)0x0) {
            uVar1 = *(uint *)(param_2 + 0x40);
            if (uVar1 < 0x20) {
                *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) | (uint)(1 << ((byte)uVar1 & 0x3f));
                *(undefined2 *)(param_2 + 0x44 + (ulonglong)*(uint *)(param_2 + 0x40) * 2) = local_res10[0];
                *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
            }
            else {
                *(uint *)(param_2 + 0x40) = uVar1 + 1;
            }
            iVar4 = FUN_14084ed10(plVar7,param_2);
            iVar5 = 1;
            if ((iVar4 != 3) && (iVar5 = iVar4, iVar4 == 1)) {
                iVar5 = (**(code **)(*plVar7 + 0x278))(plVar7,param_2);
            }
            (**(code **)(*plVar7 + 0x10))(plVar7);
            return iVar5;
        }
        lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x90) + 0x20);
        FUN_140865e90(*(longlong *)(lVar2 + 8) + -0x28);
        plVar7 = (longlong *)(lVar2 + 8);
        *plVar7 = *plVar7 + -0x28;
    }
    iVar5 = (**(code **)(*param_1 + 0x288))(param_1,param_2);
    if (iVar5 == 3) {
        iVar5 = 1;
    }
    return iVar5;
}



void FUN_14086e670(undefined8 *param_1)

{
    longlong **pplVar1;
    longlong **pplVar2;

    pplVar2 = (longlong **)param_1[0x1b];
    pplVar1 = (longlong **)param_1[0x1c];
    *param_1 = &PTR_LAB_1409a5620;
    for (; pplVar2 != pplVar1; pplVar2 = pplVar2 + 1) {
        FUN_140865a40(*pplVar2,0);
        (**(code **)(**pplVar2 + 0x10))();
    }
    if (param_1[0x1b] != 0) {
        param_1[0x1c] = param_1[0x1b];
        FUN_140881720(DAT_140c10f20);
        param_1[0x1b] = 0;
        param_1[0x1c] = 0;
        *(undefined4 *)(param_1 + 0x1d) = 0;
    }
    FUN_1408747f0(param_1);
    *param_1 = &PTR_LAB_1409a60a0;
    FUN_14087bc50();
    return;
}



longlong * FUN_14086e7e0(undefined4 param_1)

{
    int iVar1;
    longlong *plVar2;

    plVar2 = (longlong *)FUN_1408819f0(DAT_140c10f20,0xf0);
    if (plVar2 == (longlong *)0x0) {
        return (longlong *)0x0;
    }
    FUN_140874010(plVar2,param_1);
    *plVar2 = (longlong)&PTR_LAB_1409a5620;
    plVar2[0x1b] = 0;
    plVar2[0x1c] = 0;
    *(undefined4 *)(plVar2 + 0x1d) = 0;
    iVar1 = FUN_1408745c0(plVar2);
    if (iVar1 != 1) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        return (longlong *)0x0;
    }
    return plVar2;
}



void FUN_14086ea90(longlong *param_1,longlong *param_2)

{
    undefined8 *puVar1;
    undefined8 *puVar2;

    puVar1 = (undefined8 *)param_1[0x1c];
    for (puVar2 = (undefined8 *)param_1[0x1b]; puVar2 != puVar1; puVar2 = puVar2 + 1) {
        FUN_140865bc0(*puVar2,*(undefined4 *)(param_2 + 3));
    }
    if ((longlong *)param_2[8] == param_1) {
        (**(code **)(*param_2 + 0x30))(param_2,0);
        FUN_140859270(param_1 + 0x15,*(undefined4 *)(param_2 + 3));
        (**(code **)(*param_1 + 0x10))(param_1);
    }
    return;
}



ulonglong FUN_14086eb20(longlong param_1,longlong param_2,undefined4 param_3)

{
    uint uVar1;
    uint uVar2;
    ulonglong uVar3;
    longlong *plVar4;
    longlong lVar5;
    uint uVar6;
    uint *local_res10;
    undefined4 local_res18 [2];

    local_res10 = (uint *)(param_2 + 4);
    local_res18[0] = param_3;
    uVar3 = FUN_1408546e0(param_1,&local_res10,local_res18,0);
    if (((int)uVar3 == 1) &&
        (uVar3 = FUN_140869cc0(param_1,&local_res10,local_res18), (int)uVar3 == 1)) {
        uVar1 = *local_res10;
        local_res10 = local_res10 + 1;
        uVar6 = 0;
        if (uVar1 != 0) {
            do {
                plVar4 = (longlong *)FUN_140865090(*local_res10);
                if (plVar4 == (longlong *)0x0) {
                    return 2;
                }
                FUN_140865a40(plVar4,param_1);
                uVar2 = FUN_140865960(plVar4,&local_res10,local_res18);
                uVar3 = (ulonglong)uVar2;
                if (uVar2 != 1) {
                    (**(code **)(*plVar4 + 0x10))(plVar4);
                    return uVar3;
                }
                lVar5 = FUN_14084ca80(param_1 + 0xd8,plVar4);
                if (lVar5 == 0) {
                    (**(code **)(*plVar4 + 0x10))(plVar4);
                    return 2;
                }
                uVar6 = uVar6 + 1;
            } while (uVar6 < uVar1);
        }
    }
    return uVar3;
}



undefined8 * FUN_14086ec30(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a58d0;
    if (DAT_140c628a0 == param_1) {
        DAT_140c628a0 = (undefined8 *)0x0;
    }
    FUN_1408593a0(param_1);
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



int FUN_14086ec90(longlong *param_1,longlong *param_2)

{
    int iVar1;
    longlong **pplVar2;
    longlong *plVar3;

    iVar1 = (**(code **)(*param_1 + 0x280))();
    if (iVar1 == 1) {
        plVar3 = param_1 + 0x11;
        if ((*(byte *)((longlong)param_2 + 0x5b) & 2) == 0) {
            plVar3 = param_1 + 0xe;
        }
        pplVar2 = (longlong **)FUN_140859140(plVar3,*(undefined4 *)(param_2 + 3));
        if (pplVar2 == (longlong **)0x0) {
            iVar1 = 2;
        }
        else {
            *pplVar2 = param_2;
            (**(code **)(*param_2 + 0x218))(param_2,param_1);
            (**(code **)(*param_1 + 8))(param_1);
        }
    }
    (**(code **)(*param_2 + 0x10))(param_2);
    return iVar1;
}



longlong * FUN_14086edb0(void)

{
    longlong *plVar1;
    LPCRITICAL_SECTION lpCriticalSection;

    lpCriticalSection = (LPCRITICAL_SECTION)FUN_140830ed0(DAT_140c61ba8,1);
    EnterCriticalSection(lpCriticalSection);
    plVar1 = DAT_140c628a0;
    DAT_140c628a0 = (longlong *)0x0;
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1);
    }
    LeaveCriticalSection(lpCriticalSection);
    return plVar1;
}



longlong * FUN_14086ee10(undefined4 param_1)

{
    int iVar1;
    longlong *plVar2;
    undefined8 *puVar3;

    plVar2 = (longlong *)FUN_1408819f0(DAT_140c10f20,0x150);
    if (plVar2 != (longlong *)0x0) {
        FUN_140859300(plVar2,param_1);
        *plVar2 = (longlong)&PTR_FUN_1409a58d0;
        puVar3 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,8);
        plVar2[0xd] = (longlong)puVar3;
        if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = 0;
        }
        if (DAT_140c628a0 == (longlong *)0x0) {
            DAT_140c628a0 = plVar2;
        }
        iVar1 = FUN_14085ad70(plVar2);
        if (iVar1 == 1) {
            return plVar2;
        }
        (**(code **)(*plVar2 + 0x10))(plVar2);
    }
    return (longlong *)0x0;
}



longlong * FUN_14086f180(void)

{
    longlong *plVar1;
    LPCRITICAL_SECTION lpCriticalSection;

    lpCriticalSection = (LPCRITICAL_SECTION)FUN_140830ed0(DAT_140c61ba8,1);
    EnterCriticalSection(lpCriticalSection);
    if (DAT_140c628a0 != (longlong *)0x0) {
        (**(code **)(*DAT_140c628a0 + 8))(DAT_140c628a0);
    }
    plVar1 = DAT_140c628a0;
    LeaveCriticalSection(lpCriticalSection);
    return plVar1;
}



void FUN_14086f210(longlong *param_1,longlong *param_2)

{
    longlong *plVar1;

    plVar1 = (longlong *)(**(code **)(*param_2 + 0x210))(param_2);
    if (plVar1 == param_1) {
        (**(code **)(*param_2 + 0x218))(param_2,0);
        plVar1 = param_1 + 0x11;
        if ((*(byte *)((longlong)param_2 + 0x5b) & 2) == 0) {
            plVar1 = param_1 + 0xe;
        }
        FUN_140859270(plVar1,*(undefined4 *)(param_2 + 3));
        (**(code **)(*param_1 + 0x10))(param_1);
    }
    return;
}



void FUN_14086f270(longlong param_1)

{
    LPCRITICAL_SECTION lpCriticalSection;

    lpCriticalSection = (LPCRITICAL_SECTION)FUN_140830ed0(DAT_140c61ba8,1);
    EnterCriticalSection(lpCriticalSection);
    if ((DAT_140c628a0 == 0) && (param_1 != 0)) {
        DAT_140c628a0 = param_1;
    }
    // WARNING: Could not recover jumptable at 0x00014086f2c1. Too many branches
    // WARNING: Treating indirect jump as call
    LeaveCriticalSection(lpCriticalSection);
    return;
}



undefined8 * FUN_14086f2d0(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_FUN_1409a5b60;
    FUN_14086f950();
    if (param_1[0x15] != 0) {
        param_1[0x16] = param_1[0x15];
        FUN_140881720(DAT_140c10f20);
        param_1[0x15] = 0;
        param_1[0x16] = 0;
        *(undefined4 *)(param_1 + 0x17) = 0;
    }
    FUN_14086fc60(param_1);
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



undefined8 FUN_14086f350(longlong param_1,int param_2,undefined2 param_3,undefined2 param_4)

{
    int **ppiVar1;
    int *piVar2;
    int *piVar3;
    longlong lVar4;
    int *piVar5;
    longlong *plVar6;

    ppiVar1 = (int **)(param_1 + 0xa8);
    piVar2 = *(int **)(param_1 + 0xb0);
    piVar3 = *ppiVar1;
    for (piVar5 = piVar3; (piVar5 != piVar2 && (*piVar5 != param_2)); piVar5 = piVar5 + 4) {
    }
    if ((piVar5 != piVar2) && (piVar5 != (int *)&DAT_fffffffffffffff8)) {
        return 1;
    }
    for (; (piVar3 != piVar2 && (*piVar3 != param_2)); piVar3 = piVar3 + 4) {
    }
    if (piVar3 == piVar2) {
        plVar6 = (longlong *)0x0;
    }
    else {
        plVar6 = (longlong *)(piVar3 + 2);
        if (plVar6 != (longlong *)0x0) goto LAB_14086f3ed;
    }
    piVar3 = (int *)FUN_1408458b0(ppiVar1);
    if (piVar3 != (int *)0x0) {
        *piVar3 = param_2;
        plVar6 = (longlong *)(piVar3 + 2);
    }
    if (plVar6 == (longlong *)0x0) {
        return 2;
    }
    LAB_14086f3ed:
    lVar4 = FUN_1408819f0(DAT_140c10f20,0x30);
    if (lVar4 == 0) {
        lVar4 = 0;
    }
    else {
        FUN_1408562a0(lVar4);
    }
    *plVar6 = lVar4;
    if (lVar4 == 0) {
        FUN_140894f00(ppiVar1,param_2);
    }
    else {
        FUN_1408564b0(lVar4);
        *(undefined2 *)(*plVar6 + 0x28) = param_3;
        *(undefined2 *)(*plVar6 + 0x2a) = param_4;
        *(undefined4 *)(*plVar6 + 0x2c) = 0;
    }
    if (*plVar6 == 0) {
        return 2;
    }
    return 1;
}



longlong * FUN_14086f480(undefined4 param_1)

{
    char cVar1;
    uint uVar2;
    longlong *plVar3;

    plVar3 = (longlong *)FUN_1408819f0(DAT_140c10f20,0xc0);
    if (plVar3 != (longlong *)0x0) {
        FUN_14086fc30(plVar3,param_1);
        *plVar3 = (longlong)&PTR_FUN_1409a5b60;
        plVar3[0x15] = 0;
        plVar3[0x16] = 0;
        *(undefined4 *)(plVar3 + 0x17) = 0;
        uVar2 = (**(code **)(*plVar3 + 0x70))(plVar3);
        if ((uVar2 < 0xd) && ((0x1401U >> (uVar2 & 0x1f) & 1) != 0)) {
            cVar1 = '\x01';
        }
        else {
            cVar1 = '\0';
        }
        *(byte *)((longlong)plVar3 + 0x5b) = *(byte *)((longlong)plVar3 + 0x5b) & 0xfd;
        *(byte *)((longlong)plVar3 + 0x5b) = *(byte *)((longlong)plVar3 + 0x5b) | cVar1 * '\x02';
        FUN_140851a00(plVar3);
        return plVar3;
    }
    return (longlong *)0x0;
}



undefined8 FUN_14086f520(longlong *param_1,int *param_2)

{
    int iVar1;
    undefined8 uVar2;

    if (*(char *)((longlong)param_2 + 0x1d) != '\0') {
        (**(code **)(*param_1 + 0x158))
                (param_1,(ulonglong)param_2 & 0xffffffffffffff00 | (ulonglong)(*param_2 == 1));
    }
    if ((param_1[7] != 0) && (*(short *)(param_1[7] + 0x48) != 0)) {
        iVar1 = *param_2;
        if (iVar1 == 0) {
            uVar2 = FUN_140844aa0(param_1,*(undefined8 *)(param_2 + 2),param_2 + 5,param_2[4]);
            return uVar2;
        }
        if (iVar1 == 1) {
            uVar2 = FUN_140844120(param_1,*(undefined8 *)(param_2 + 2),param_2 + 5,param_2[4]);
            return uVar2;
        }
        if (iVar1 == 2) {
            uVar2 = FUN_140844a10(param_1,*(undefined8 *)(param_2 + 2),param_2 + 5,
                                  *(undefined *)((longlong)param_2 + 0x1e),param_2[4]);
            return uVar2;
        }
        if (iVar1 == 3) {
            (**(code **)(*param_1 + 0x98))
                    (param_1,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 8),param_2[4]);
        }
    }
    return 1;
}



undefined8 FUN_14086f600(longlong *param_1,int *param_2)

{
    int iVar1;
    undefined8 uVar2;

    if (*(longlong *)(param_2 + 4) == 0) {
        (**(code **)(*param_1 + 0x158))
                (param_1,(ulonglong)param_2 & 0xffffffffffffff00 | (ulonglong)(*param_2 == 1));
    }
    if ((param_1[7] != 0) && (*(short *)(param_1[7] + 0x48) != 0)) {
        iVar1 = *param_2;
        if (iVar1 == 0) {
            uVar2 = FUN_140844aa0(param_1,*(undefined8 *)(param_2 + 4),param_2 + 7,param_2[6]);
            return uVar2;
        }
        if (iVar1 == 1) {
            uVar2 = FUN_140844120(param_1,*(undefined8 *)(param_2 + 4),param_2 + 7,param_2[6]);
            return uVar2;
        }
        if (iVar1 == 2) {
            uVar2 = FUN_140844a10(param_1,*(undefined8 *)(param_2 + 4),param_2 + 7,
                                  *(undefined *)((longlong)param_2 + 0x25),param_2[6]);
            return uVar2;
        }
    }
    return 1;
}



undefined8 FUN_14086f6e0(longlong param_1,longlong **param_2,longlong param_3,undefined8 param_4)

{
    undefined2 uVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 uVar4;

    plVar2 = (longlong *)FUN_140852c90();
    if (plVar2 == (longlong *)0x0) {
        uVar4 = 2;
    }
    else {
        for (lVar3 = *(longlong *)(param_1 + 0xa8);
             (lVar3 != *(longlong *)(param_1 + 0xb0) && (*(longlong *)(lVar3 + 8) != param_3));
             lVar3 = lVar3 + 0x10) {
        }
        if (*(short *)((longlong)param_2 + 0x32) == 0) {
            *(undefined2 *)((longlong)param_2 + 0x32) = *(undefined2 *)(*(longlong *)(lVar3 + 8) + 0x2a);
            uVar1 = *(undefined2 *)(*(longlong *)(lVar3 + 8) + 0x28);
            *param_2 = plVar2;
            *(undefined2 *)(param_2 + 6) = uVar1;
        }
        *(undefined4 *)(param_2 + 1) = 0;
        *(undefined4 *)((longlong)param_2 + 0x14) = 0;
        uVar4 = (**(code **)(*plVar2 + 0x200))(plVar2,param_2,param_3,param_4,0);
    }
    return uVar4;
}



undefined4 FUN_14086f790(longlong param_1,longlong param_2)

{
    longlong lVar1;

    for (lVar1 = *(longlong *)(param_1 + 0xa8);
         (lVar1 != *(longlong *)(param_1 + 0xb0) && (*(longlong *)(lVar1 + 8) != param_2));
         lVar1 = lVar1 + 0x10) {
    }
    return *(undefined4 *)(*(longlong *)(lVar1 + 8) + 0x2c);
}



void FUN_14086f7c0(longlong *param_1,undefined8 param_2)

{
    longlong *plVar1;
    longlong lVar2;

    lVar2 = (**(code **)(*param_1 + 0x210))();
    if (lVar2 == 0) {
        for (plVar1 = (longlong *)param_1[8]; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[8])
        {
            lVar2 = (**(code **)(*plVar1 + 0x210))(plVar1);
            if (lVar2 != 0) goto LAB_14086f817;
        }
        FUN_140852c90(param_1);
    }
    LAB_14086f817:
    FUN_14084eef0(param_1,param_2);
    return;
}



undefined8 FUN_14086f830(longlong param_1,longlong param_2)

{
    longlong lVar1;
    char cVar2;
    longlong lVar3;

    *(undefined *)(param_2 + 0x9c) = 1;
    *(uint *)(param_2 + 0x8c) =
            ((uint)(0x5dc00 / (ulonglong)DAT_140c110b4) & 0xffff) * *(int *)(param_2 + 0x8c) >> 10;
    lVar1 = DAT_140c61fe0;
    if ((DAT_140c61fe0 != 0) &&
        (lVar3 = *(longlong *)(param_1 + 0xa8), lVar3 != *(longlong *)(param_1 + 0xb0))) {
        do {
            cVar2 = FUN_140846220(lVar1,*(undefined2 *)(*(longlong *)(lVar3 + 8) + 0x28),
                                  *(undefined2 *)(*(longlong *)(lVar3 + 8) + 0x2a));
            if (cVar2 != '\0') {
                FUN_140844340(param_1);
            }
            lVar3 = lVar3 + 0x10;
        } while (lVar3 != *(longlong *)(param_1 + 0xb0));
    }
    return 1;
}



void FUN_14086f950(longlong param_1)

{
    longlong lVar1;
    undefined4 uVar2;
    longlong lVar3;

    lVar3 = *(longlong *)(param_1 + 0xa8);
    if (lVar3 == *(longlong *)(param_1 + 0xb0)) {
        *(longlong *)(param_1 + 0xb0) = lVar3;
        return;
    }
    do {
        uVar2 = DAT_140c10f20;
        lVar1 = *(longlong *)(lVar3 + 8);
        if (lVar1 != 0) {
            FUN_1408562d0(lVar1);
            FUN_140881720(uVar2,lVar1);
        }
        lVar3 = lVar3 + 0x10;
    } while (lVar3 != *(longlong *)(param_1 + 0xb0));
    *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0xa8);
    return;
}



ulonglong FUN_14086f9f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                        undefined4 param_5_00,undefined8 param_6,undefined param_5)

{
    undefined2 uVar1;
    undefined2 uVar2;
    uint uVar3;
    uint uVar4;
    ulonglong uVar5;
    uint uVar6;
    undefined8 extraout_XMM0_Qa;
    undefined4 uVar7;
    undefined2 *local_res10;
    undefined4 local_res18 [2];
    undefined local_58 [8];
    undefined4 local_50;

    uVar6 = 0;
    uVar3 = *(uint *)(param_4 + 4);
    local_res10 = (undefined2 *)(param_4 + 8);
    uVar4 = 1;
    local_res18[0] = param_5_00;
    if (uVar3 != 0) {
        do {
            if (uVar4 != 1) goto LAB_14086fac6;
            uVar1 = *local_res10;
            uVar2 = local_res10[1];
            uVar7 = *(undefined4 *)(local_res10 + 2);
            local_res10 = local_res10 + 4;
            uVar5 = FUN_14083fd40(&local_res10,local_res18,local_58);
            if ((int)uVar5 != 1) {
                return uVar5;
            }
            uVar4 = FUN_14086f350(param_3,local_50,uVar1,uVar2);
            FUN_14086fb10(extraout_XMM0_Qa,param_2,uVar7,param_3,local_50);
            uVar6 = uVar6 + 1;
        } while (uVar6 < uVar3);
        if (uVar4 != 1) {
            LAB_14086fac6:
            return (ulonglong)uVar4;
        }
    }
    uVar5 = FUN_1408546e0(param_3,&local_res10,local_res18,param_5);
    return uVar5;
}



void FUN_14086fb10(undefined8 param_1,undefined8 param_2,float param_3,longlong param_4,int param_5)

{
    longlong *plVar1;
    int *piVar2;
    longlong lVar3;
    int *piVar4;
    undefined4 local_48 [2];
    undefined8 local_40;
    undefined local_38;
    undefined8 local_30;
    float local_28;

    piVar4 = *(int **)(param_4 + 0xa8);
    piVar2 = *(int **)(param_4 + 0xb0);
    if (piVar4 != piVar2) {
        do {
            if (*piVar4 == param_5) break;
            piVar4 = piVar4 + 4;
        } while (piVar4 != piVar2);
        if ((piVar4 != piVar2) && (plVar1 = (longlong *)(piVar4 + 2), plVar1 != (longlong *)0x0)) {
            local_48[0] = 0;
            local_38 = 0;
            local_40 = 0;
            local_28 = param_3 - *(float *)(*plVar1 + 0x2c);
            local_30 = 0;
            if (*(longlong *)(param_4 + 0x38) != 0) {
                for (lVar3 = *(longlong *)(*(longlong *)(param_4 + 0x38) + 0x18); lVar3 != 0;
                     lVar3 = *(longlong *)(lVar3 + 0x20)) {
                    if (*(longlong *)(lVar3 + 0xa8) == *plVar1) {
                        FUN_14085f530(lVar3,local_48);
                    }
                }
            }
            *(float *)(*plVar1 + 0x2c) = param_3;
        }
    }
    return;
}



void FUN_14086fbe0(longlong param_1)

{
    longlong lVar1;

    lVar1 = *(longlong *)(param_1 + 0xa8);
    if (lVar1 != *(longlong *)(param_1 + 0xb0)) {
        do {
            FUN_1408567b0(*(undefined8 *)(lVar1 + 8));
            lVar1 = lVar1 + 0x10;
        } while (lVar1 != *(longlong *)(param_1 + 0xb0));
    }
    return;
}



undefined8 * FUN_14086fc30(undefined8 *param_1)

{
    FUN_14084c610();
    *param_1 = &PTR_LAB_1409a5df0;
    return param_1;
}



void FUN_14086fc60(undefined8 *param_1)

{
    *param_1 = &PTR_LAB_1409a5df0;
    FUN_14084c670();
    return;
}



void FUN_14086fcb0(longlong param_1,code *param_2,longlong param_3,undefined8 param_4)

{
    longlong lVar1;

    if (*(longlong *)(param_1 + 0x38) != 0) {
        for (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x18); lVar1 != 0;
             lVar1 = *(longlong *)(lVar1 + 0x20)) {
            if ((param_3 == 0) || (param_3 == *(longlong *)(lVar1 + 0xb0))) {
                (*param_2)(lVar1,param_3,param_4);
            }
        }
    }
    return;
}



uint FUN_14086fd20(longlong param_1)

{
    int *piVar1;
    int iVar2;
    int iVar3;
    byte *pbVar4;
    int iVar5;
    uint *puVar6;
    uint uVar7;
    uint *puVar8;
    uint *puVar9;
    uint uVar10;
    uint local_res8 [2];

    pbVar4 = *(byte **)(param_1 + 0x50);
    puVar9 = (uint *)0x0;
    iVar5 = 0;
    local_res8[0] = 1;
    puVar8 = puVar9;
    if (pbVar4 != (byte *)0x0) {
        puVar6 = puVar9;
        do {
            uVar7 = (int)puVar6 + 1;
            if (pbVar4[uVar7] == 7) {
                puVar8 = (uint *)(pbVar4 + (longlong)puVar6 * 4 + ((ulonglong)(*pbVar4 + 4) & 0xfffffffc));
                break;
            }
            puVar6 = (uint *)(ulonglong)uVar7;
        } while (uVar7 < *pbVar4);
    }
    pbVar4 = *(byte **)(param_1 + 0x80);
    puVar6 = local_res8;
    if (puVar8 != (uint *)0x0) {
        puVar6 = puVar8;
    }
    uVar7 = *puVar6;
    if (pbVar4 != (byte *)0x0) {
        do {
            uVar10 = (int)puVar9 + 1;
            if (*(byte *)((longlong)(uint *)(ulonglong)uVar10 + (longlong)pbVar4) == 7) {
                piVar1 = (int *)(pbVar4 + (longlong)puVar9 * 8 + ((ulonglong)(*pbVar4 + 4) & 0xfffffffc));
                if (piVar1 != (int *)0x0) {
                    iVar2 = piVar1[1];
                    iVar3 = *piVar1;
                    if (iVar2 - iVar3 != 0) {
                        iVar5 = rand();
                        iVar5 = (int)((double)iVar5 * 3.051850947599719e-05 * (double)(iVar2 - iVar3) + 0.5);
                    }
                    return *piVar1 + iVar5 + uVar7;
                }
                break;
            }
            puVar9 = (uint *)(ulonglong)uVar10;
        } while (uVar10 < *pbVar4);
    }
    return uVar7 & 0xffff;
}



void FUN_14086fe20(undefined8 param_1,undefined4 param_2,longlong param_3,undefined8 param_4,
                   undefined8 param_5)

{
    longlong lVar1;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar2 [16];

    auVar2 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    if (*(longlong *)(param_3 + 0x38) != 0) {
        for (lVar1 = *(longlong *)(*(longlong *)(param_3 + 0x38) + 0x18); lVar1 != 0;
             lVar1 = *(longlong *)(lVar1 + 0x20)) {
            param_1 = FUN_14085f320(param_1,param_2,lVar1,param_4,param_5,0,auVar2);
        }
    }
    return;
}



void FUN_14086fe80(undefined8 param_1,undefined4 param_2,longlong param_3,undefined8 param_4,
                   longlong param_5_00,undefined8 param_6,undefined param_5)

{
    longlong lVar1;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar2 [16];

    auVar2 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    if (*(longlong *)(param_3 + 0x38) != 0) {
        for (lVar1 = *(longlong *)(*(longlong *)(param_3 + 0x38) + 0x18); lVar1 != 0;
             lVar1 = *(longlong *)(lVar1 + 0x20)) {
            if ((param_5_00 == 0) || (*(longlong *)(lVar1 + 0xb0) == param_5_00)) {
                param_1 = FUN_14085f320(param_1,param_2,lVar1,param_4,param_6,param_5,auVar2);
            }
        }
    }
    return;
}



undefined8 FUN_140870050(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
    longlong *plVar1;

    if (*(longlong *)(param_1 + 0x38) != 0) {
        for (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x18); plVar1 != (longlong *)0x0;
             plVar1 = (longlong *)plVar1[4]) {
            if (((param_2 == 0) || (plVar1[0x16] == param_2)) &&
                ((param_4 == 0 || (param_4 == *(int *)(plVar1 + 0xf))))) {
                (**(code **)(*plVar1 + 0x38))(plVar1,param_3);
            }
        }
    }
    return 1;
}



void FUN_1408700d0(undefined8 param_1,undefined4 param_2,longlong param_3,undefined8 param_4,
                   undefined8 param_5_00,longlong param_6,longlong **param_5)

{
    longlong lVar1;
    longlong *plVar2;

    if (*(longlong *)(param_3 + 0x38) != 0) {
        for (lVar1 = *(longlong *)(*(longlong *)(param_3 + 0x38) + 0x18); lVar1 != 0;
             lVar1 = *(longlong *)(lVar1 + 0x20)) {
            if (param_5 == (longlong **)0x0) {
                if (param_6 != 0) goto LAB_140870145;
                LAB_14087014e:
                param_1 = FUN_14085f8c0(param_1,param_2,lVar1);
            }
            else {
                if (param_6 == 0) {
                    plVar2 = *param_5;
                    if (plVar2 != param_5[1]) {
                        do {
                            if (*plVar2 == *(longlong *)(lVar1 + 0xb0)) goto LAB_14087015c;
                            plVar2 = plVar2 + 1;
                        } while (plVar2 != param_5[1]);
                    }
                    goto LAB_14087014e;
                }
                LAB_140870145:
                if (*(longlong *)(lVar1 + 0xb0) == param_6) goto LAB_14087014e;
            }
            LAB_14087015c:
        }
    }
    return;
}



void FUN_140870180(longlong param_1)

{
    longlong lVar1;

    if (*(longlong *)(param_1 + 0x38) != 0) {
        for (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x18); lVar1 != 0;
             lVar1 = *(longlong *)(lVar1 + 0x20)) {
            FUN_14085fba0(lVar1);
        }
    }
    return;
}



undefined8 * FUN_1408701f0(undefined8 *param_1,ushort param_2,ushort param_3)

{
    ushort uVar1;

    uVar1 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 6) = 0;
    param_1[4] = 0x3f8000003f800000;
    param_1[5] = 0x3f8000003f800000;
    *(ushort *)((longlong)param_1 + 0x36) = *(ushort *)((longlong)param_1 + 0x36) & 0xffc7;
    *(ushort *)((longlong)param_1 + 0x36) = *(ushort *)((longlong)param_1 + 0x36) | (param_2 & 7) << 3
            ;
    param_3 = param_3 & 0xfff7;
    *(ushort *)((longlong)param_1 + 0x34) = param_3;
    for (; param_3 != 0; param_3 = param_3 & param_3 - 1) {
        uVar1 = uVar1 + 1;
    }
    *(ushort *)((longlong)param_1 + 0x36) =
            *(ushort *)((longlong)param_1 + 0x36) & 0xfff8 | uVar1 & 7 | 0x40;
    return param_1;
}



// WARNING: Could not reconcile some variable overlaps

float FUN_140870280(longlong param_1,uint param_2)

{
    undefined (*pauVar1) [16];
    float *pfVar2;
    longlong lVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    undefined local_28 [12];
    float fStack28;
    float local_18;

    uVar5 = 1;
    uVar6 = *(ushort *)(param_1 + 0x36) & 7;
    lVar3 = ((ulonglong)param_2 + 1) * 0x40;
    pauVar1 = (undefined (*) [16])(lVar3 + param_1);
    fVar7 = *(float *)*pauVar1;
    fVar8 = *(float *)(*pauVar1 + 4);
    fVar9 = *(float *)(*pauVar1 + 8);
    fVar10 = *(float *)(*pauVar1 + 0xc);
    _local_28 = *pauVar1;
    pauVar1 = (undefined (*) [16])(lVar3 + 0x10 + param_1);
    fVar11 = *(float *)*pauVar1;
    local_18 = SUB164(*pauVar1,0);
    if (1 < uVar6) {
        do {
            uVar4 = uVar5 + param_2;
            uVar5 = uVar5 + 1;
            lVar3 = ((ulonglong)uVar4 + 1) * 0x40;
            pfVar2 = (float *)(lVar3 + param_1);
            fVar7 = fVar7 + *pfVar2;
            fVar8 = fVar8 + pfVar2[1];
            fVar9 = fVar9 + pfVar2[2];
            fVar10 = fVar10 + pfVar2[3];
            fVar11 = fVar11 + *(float *)(lVar3 + 0x10 + param_1);
        } while (uVar5 < uVar6);
        _local_28 = CONCAT412(fVar10,CONCAT48(fVar9,CONCAT44(fVar8,fVar7)));
        local_18 = fVar11;
    }
    if (local_28._0_4_ <= local_28._4_4_) {
        local_28._0_4_ = local_28._4_4_;
    }
    if (local_28._0_4_ <= fStack28) {
        local_28._0_4_ = fStack28;
    }
    if (local_28._0_4_ <= local_18) {
        local_28._0_4_ = local_18;
    }
    fVar7 = 0.0;
    if (local_28._0_4_ != 0.0) {
        fVar7 = 1.0 / local_28._0_4_;
    }
    return fVar7;
}



void FUN_140870330(longlong param_1,longlong param_2,longlong param_3)

{
    float *pfVar1;
    undefined4 *puVar2;
    undefined4 *puVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    undefined4 uVar10;
    undefined4 uVar11;
    undefined4 uVar12;
    byte bVar13;
    uint uVar14;
    float fVar15;
    uint uVar16;
    int iVar17;
    ulonglong uVar18;
    longlong lVar19;
    ushort uVar20;
    int iVar21;
    float fVar22;
    float fVar23;
    float extraout_XMM0_Da;
    float fVar24;
    float fVar25;
    float fVar26;
    float fVar27;
    float fVar28;
    float fVar29;
    float fVar30;
    float fVar31;
    float in_xmmTmp2_Dd;

    *(ushort *)(param_1 + 0x36) = *(ushort *)(param_1 + 0x36) | 0x80;
    uVar14 = FUN_140845ed0();
    fVar27 = 0.05;
    fVar28 = -37.0;
    uVar20 = 0;
    fVar26 = 2.786635e+07;
    fVar29 = 0.3251898;
    fVar30 = 0.02080577;
    fVar31 = 0.6530434;
    fVar23 = 1.0;
    do {
        uVar16 = (uint)uVar20;
        fVar25 = fVar23;
        if ((uVar14 >> (uVar20 & 0x1f) & 1) != 0) {
            iVar21 = 0;
            fVar22 = (float)FUN_140870920(*(float *)(param_1 + 8) - *(float *)(param_1 + 0xc));
            fVar22 = fVar22 * *(float *)(param_1 + 0x20 + (ulonglong)uVar20 * 4);
            bVar13 = *(byte *)(param_2 + 0x17b) & 3;
            fVar15 = (float)(uint)bVar13;
            fVar25 = fVar23;
            if (bVar13 == 1) {
                iVar21 = (*(ushort *)(param_1 + 0x36) & 7) * uVar16;
                fVar23 = (float)FUN_140870280(param_1);
                fVar15 = (float)FUN_14085eb50();
                fVar24 = (extraout_XMM0_Da + *(float *)(param_2 + 200)) * fVar27;
                if (fVar28 <= fVar24) {
                    if ((DAT_140c61bfc & 1) == 0) {
                        DAT_140c61bfc = DAT_140c61bfc | 1;
                        DAT_140c61bf8 = fVar26;
                    }
                    uVar16 = (uint)(longlong)(DAT_140c61bf8 * fVar24 + 1.065353e+09);
                    fVar15 = (float)(uVar16 & 0xff800000);
                    fVar24 = (float)((uVar16 & 0x7fffff) + 0x3f800000);
                    fVar22 = fVar22 * ((fVar24 * fVar29 + fVar30) * fVar24 + fVar31) * fVar15 *
                             *(float *)(param_2 + 0xcc);
                }
                else {
                    fVar22 = fVar22 * *(float *)(param_2 + 0xcc) * 0.0;
                }
            }
            else {
                uVar18 = 0;
                if ((*(byte *)(param_1 + 0x36) & 7) != 0) {
                    do {
                        fVar24 = (float)((int)uVar18 + 1);
                        lVar19 = uVar18 * 0x40;
                        puVar2 = (undefined4 *)(lVar19 + param_3);
                        uVar10 = puVar2[1];
                        uVar11 = puVar2[2];
                        uVar12 = puVar2[3];
                        puVar3 = (undefined4 *)(lVar19 + 0x40 + param_1);
                        *puVar3 = *puVar2;
                        puVar3[1] = uVar10;
                        puVar3[2] = uVar11;
                        puVar3[3] = uVar12;
                        puVar2 = (undefined4 *)(lVar19 + 0x10 + param_3);
                        uVar10 = puVar2[1];
                        uVar11 = puVar2[2];
                        uVar12 = puVar2[3];
                        puVar3 = (undefined4 *)(lVar19 + 0x50 + param_1);
                        *puVar3 = *puVar2;
                        puVar3[1] = uVar10;
                        puVar3[2] = uVar11;
                        puVar3[3] = uVar12;
                        fVar15 = (float)(*(ushort *)(param_1 + 0x36) & 7);
                        uVar18 = (ulonglong)(uint)fVar24;
                    } while ((uint)fVar24 < (uint)fVar15);
                }
            }
            bVar13 = 0;
            fVar22 = fVar22 * fVar23;
            if ((*(byte *)(param_1 + 0x36) & 7) != 0) {
                do {
                    lVar19 = ((ulonglong)((uint)bVar13 + iVar21) + 1) * 0x40;
                    pfVar1 = (float *)(lVar19 + param_1);
                    fVar23 = *pfVar1;
                    fVar24 = pfVar1[1];
                    fVar4 = pfVar1[2];
                    fVar5 = pfVar1[3];
                    pfVar1 = (float *)(lVar19 + 0x10 + param_1);
                    fVar6 = *pfVar1;
                    fVar7 = pfVar1[1];
                    fVar8 = pfVar1[2];
                    fVar9 = pfVar1[3];
                    *(undefined (*) [16])(lVar19 + 0x10 + param_1) =
                            CONCAT412(fVar22 * fVar9,
                                      CONCAT48(fVar22 * fVar8,CONCAT44(fVar22 * fVar7,fVar22 * fVar6)));
                    *(undefined (*) [16])(lVar19 + param_1) =
                            CONCAT412(fVar5 * fVar22,
                                      CONCAT48(fVar4 * fVar22,CONCAT44(fVar24 * fVar22,fVar23 * fVar22)));
                    uVar16 = movmskps(fVar15,CONCAT412(-(uint)(fVar22 * fVar9 <= in_xmmTmp2_Dd),
                                                       CONCAT48(-(uint)(fVar22 * fVar8 <= DAT_140c10f58),
                                                                CONCAT44(-(uint)(fVar22 * fVar7 <=
                                                                                 DAT_140c10f58),
                                                                         -(uint)(fVar22 * fVar6 <=
                                                                                 DAT_140c10f58)))));
                    iVar17 = movmskps(uVar16 & 3,
                                      CONCAT412(-(uint)(fVar5 * fVar22 <= in_xmmTmp2_Dd),
                                                CONCAT48(-(uint)(fVar4 * fVar22 <= DAT_140c10f58),
                                                         CONCAT44(-(uint)(fVar24 * fVar22 <= DAT_140c10f58),
                                                                  -(uint)(fVar23 * fVar22 <= DAT_140c10f58))))
                    );
                    bVar13 = bVar13 + 1;
                    fVar15 = (float)(uint)bVar13;
                    *(ushort *)(param_1 + 0x36) =
                            *(ushort *)(param_1 + 0x36) &
                            ((ushort)(iVar17 == 0xf && (char)(uVar16 & 3) == '\x03') << 7 | 0xff7f);
                } while ((ushort)bVar13 < (*(ushort *)(param_1 + 0x36) & 7));
            }
            if (((*(ushort *)(param_1 + 0x36) & 0x40) != 0) &&
                (uVar16 = 0, (*(ushort *)(param_1 + 0x36) & 7) != 0)) {
                do {
                    bVar13 = (char)uVar16 + 1;
                    lVar19 = (ulonglong)(uVar16 + iVar21) * 0x40;
                    puVar2 = (undefined4 *)(lVar19 + 0x40 + param_1);
                    uVar10 = puVar2[1];
                    uVar11 = puVar2[2];
                    uVar12 = puVar2[3];
                    puVar3 = (undefined4 *)(lVar19 + 0x60 + param_1);
                    *puVar3 = *puVar2;
                    puVar3[1] = uVar10;
                    puVar3[2] = uVar11;
                    puVar3[3] = uVar12;
                    puVar2 = (undefined4 *)(lVar19 + 0x50 + param_1);
                    uVar10 = puVar2[1];
                    uVar11 = puVar2[2];
                    uVar12 = puVar2[3];
                    puVar3 = (undefined4 *)(lVar19 + 0x70 + param_1);
                    *puVar3 = *puVar2;
                    puVar3[1] = uVar10;
                    puVar3[2] = uVar11;
                    puVar3[3] = uVar12;
                    uVar16 = (uint)bVar13;
                } while ((ushort)bVar13 < (*(ushort *)(param_1 + 0x36) & 7));
            }
            if ((*(byte *)(param_2 + 0x17b) & 3) == 0) {
                return;
            }
        }
        uVar20 = uVar20 + 1;
        fVar23 = fVar25;
        if (3 < uVar20) {
            return;
        }
    } while( true );
}



longlong FUN_140870690(ushort param_1,uint param_2,int param_3,int param_4)

{
    uint uVar1;
    longlong lVar2;
    int iVar3;

    if ((param_3 != 1) || (param_4 != 1)) {
        param_1 = 1;
    }
    iVar3 = 0;
    uVar1 = param_2 & 0xfffffff7;
    if (uVar1 != 0) {
        do {
            iVar3 = iVar3 + 1;
            uVar1 = uVar1 & uVar1 - 1;
        } while (uVar1 != 0);
        if (iVar3 != 0) {
            lVar2 = FUN_140881960(DAT_140c10f20,(iVar3 * (uint)param_1 + 1) * 0x40,0x10);
            if (lVar2 != 0) {
                FUN_1408701f0(lVar2,param_1,param_2);
                return lVar2;
            }
            return 0;
        }
    }
    return 0;
}



uint FUN_140870740(longlong param_1)

{
    undefined8 *puVar1;
    undefined4 uVar2;
    uint uVar3;
    ulonglong uVar4;

    uVar4 = FUN_140881960(DAT_140c10f20,0xd0,0x10);
    if (uVar4 != 0) {
        uVar4 = FUN_1408717e0(uVar4);
    }
    *(ulonglong *)(param_1 + 0x18) = uVar4;
    if (uVar4 != 0) {
        uVar3 = FUN_140871cb0(uVar4,*(undefined2 *)(param_1 + 0x34),1);
        uVar4 = (ulonglong)uVar3;
        if (uVar3 == 1) {
            return 1;
        }
    }
    uVar3 = (uint)uVar4;
    if (*(longlong *)(param_1 + 0x18) != 0) {
        uVar3 = FUN_140872290();
        uVar2 = DAT_140c10f20;
        puVar1 = *(undefined8 **)(param_1 + 0x18);
        if (puVar1 != (undefined8 *)0x0) {
            (**(code **)*puVar1)(puVar1,0);
            uVar3 = FUN_140881720(uVar2,puVar1);
        }
        *(undefined8 *)(param_1 + 0x18) = 0;
    }
    return uVar3 & 0xffffff00;
}



void FUN_1408707f0(longlong param_1)

{
    undefined8 *puVar1;
    undefined4 uVar2;

    if (*(longlong *)(param_1 + 0x18) != 0) {
        FUN_140872290();
        uVar2 = DAT_140c10f20;
        puVar1 = *(undefined8 **)(param_1 + 0x18);
        if (puVar1 != (undefined8 *)0x0) {
            (**(code **)*puVar1)(puVar1,0);
            FUN_140881720(uVar2,puVar1);
        }
        *(undefined8 *)(param_1 + 0x18) = 0;
    }
    FUN_140881720(DAT_140c10f20,param_1);
    return;
}



void FUN_140870860(longlong param_1)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    ulonglong uVar6;
    longlong lVar7;
    ushort uVar8;
    ushort uVar9;

    uVar9 = 0;
    uVar8 = (*(ushort *)(param_1 + 0x36) >> 3 & 7) * (*(ushort *)(param_1 + 0x36) & 7);
    if (uVar8 != 0) {
        do {
            uVar6 = (ulonglong)uVar9;
            uVar9 = uVar9 + 1;
            lVar7 = uVar6 * 0x40;
            puVar1 = (undefined4 *)(lVar7 + 0x40 + param_1);
            uVar3 = puVar1[1];
            uVar4 = puVar1[2];
            uVar5 = puVar1[3];
            puVar2 = (undefined4 *)(lVar7 + 0x60 + param_1);
            *puVar2 = *puVar1;
            puVar2[1] = uVar3;
            puVar2[2] = uVar4;
            puVar2[3] = uVar5;
            puVar1 = (undefined4 *)(lVar7 + 0x50 + param_1);
            uVar3 = puVar1[1];
            uVar4 = puVar1[2];
            uVar5 = puVar1[3];
            puVar2 = (undefined4 *)(lVar7 + 0x70 + param_1);
            *puVar2 = *puVar1;
            puVar2[1] = uVar3;
            puVar2[2] = uVar4;
            puVar2[3] = uVar5;
        } while (uVar9 < uVar8);
    }
    return;
}



void FUN_1408708b0(longlong param_1)

{
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    return;
}



void FUN_1408708c0(longlong param_1)

{
    ushort uVar1;
    ulonglong uVar2;
    longlong lVar3;
    ushort uVar4;

    uVar4 = (*(ushort *)(param_1 + 0x36) >> 3 & 7) * (*(ushort *)(param_1 + 0x36) & 7);
    uVar1 = 0;
    if (uVar4 != 0) {
        do {
            uVar2 = (ulonglong)uVar1;
            uVar1 = uVar1 + 1;
            lVar3 = (uVar2 + 1) * 0x40;
            *(undefined (*) [16])(lVar3 + param_1) = ZEXT816(0);
            *(undefined (*) [16])(lVar3 + 0x10 + param_1) = ZEXT816(0);
        } while (uVar1 < uVar4);
    }
    return;
}



float FUN_140870920(float param_1)

{
    uint uVar1;
    float fVar2;

    fVar2 = 0.0;
    if (param_1 <= 0.0) {
        if (-37.0 <= param_1 * 0.05) {
            if ((DAT_140c61bfc & 1) == 0) {
                DAT_140c61bfc = DAT_140c61bfc | 1;
                DAT_140c61bf8 = 2.786635e+07;
            }
            uVar1 = (uint)(longlong)(param_1 * 0.05 * DAT_140c61bf8 + 1.065353e+09);
            fVar2 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
            fVar2 = ((fVar2 * 0.3251898 + 0.02080577) * fVar2 + 0.6530434) * (float)(uVar1 & 0xff800000);
        }
        return fVar2;
    }
    if (-37.0 <= param_1 * -0.05) {
        if ((DAT_140c61bfc & 1) == 0) {
            DAT_140c61bfc = DAT_140c61bfc | 1;
            DAT_140c61bf8 = 2.786635e+07;
        }
        uVar1 = (uint)(longlong)(param_1 * -0.05 * DAT_140c61bf8 + 1.065353e+09);
        fVar2 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
        fVar2 = ((fVar2 * 0.3251898 + 0.02080577) * fVar2 + 0.6530434) * (float)(uVar1 & 0xff800000);
        if (0.0 < fVar2) {
            return 1.0 / fVar2;
        }
    }
    return 65535.0;
}



undefined8 * FUN_140870a80(undefined8 *param_1)

{
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined2 *)(param_1 + 3) = 0;
    return param_1;
}



undefined8 thunk_FUN_140871690(longlong *param_1)

{
    longlong lVar1;
    uint uVar2;
    ulonglong uVar3;

    uVar3 = 0;
    if ((int)((param_1[1] - *param_1) / 0x18) != 0) {
        do {
            FUN_140871750(*param_1 + uVar3 * 0x18);
            uVar2 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar2;
        } while (uVar2 < (uint)((param_1[1] - *param_1) / 0x18));
    }
    lVar1 = *param_1;
    if (lVar1 != 0) {
        param_1[1] = lVar1;
        FUN_140881720(DAT_140c10f20,lVar1);
        *param_1 = 0;
        param_1[1] = 0;
        *(undefined4 *)(param_1 + 2) = 0;
    }
    return 1;
}



int FUN_140870ab0(longlong *param_1,byte param_2,int param_3,undefined4 param_4)

{
    longlong lVar1;
    byte bVar2;
    byte bVar3;
    undefined4 uVar4;
    char cVar5;
    longlong lVar6;
    byte bVar7;
    ulonglong uVar8;
    int iVar9;
    uint uVar10;
    uint uVar11;
    ulonglong uVar12;
    bool bVar13;

    bVar2 = *(byte *)((longlong)param_1 + 0x19);
    bVar3 = *(byte *)(param_1 + 3);
    uVar8 = 0;
    uVar11 = (uint)bVar2;
    if (bVar2 != 0) {
        do {
            if (*(int *)(*param_1 + 0x10 + uVar8 * 0x18) == param_3) break;
            uVar10 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar10;
        } while (uVar10 < uVar11);
    }
    bVar13 = (uint)uVar8 == uVar11;
    if ((bVar3 <= param_2) || (bVar13)) {
        bVar7 = (byte)(param_2 + 1);
        if (param_2 + 1 < (uint)bVar3) {
            bVar7 = bVar3;
        }
        *(byte *)(param_1 + 3) = bVar7;
        if (bVar13) {
            *(byte *)((longlong)param_1 + 0x19) = bVar2 + 1;
        }
        cVar5 = FUN_1408715b0();
        if (cVar5 != '\0') {
            if (bVar13) {
                iVar9 = bVar3 - 1;
                if (-1 < iVar9) {
                    uVar10 = iVar9 * uVar11;
                    do {
                        FUN_1407db590(*param_1 +
                                      (ulonglong)((uint)*(byte *)((longlong)param_1 + 0x19) * iVar9) * 0x18,
                                      *param_1 + (ulonglong)uVar10 * 0x18,(ulonglong)bVar2 * 0x18);
                        uVar10 = uVar10 - uVar11;
                        iVar9 = iVar9 + -1;
                    } while (-1 < iVar9);
                }
                iVar9 = 0;
                if (*(char *)(param_1 + 3) != '\0') {
                    do {
                        iVar9 = iVar9 + 1;
                        *(int *)(*param_1 + 0x10 +
                                 (ulonglong)((uint)*(byte *)((longlong)param_1 + 0x19) * iVar9 - 1) * 0x18) =
                                param_3;
                    } while (iVar9 < (int)(uint)*(byte *)(param_1 + 3));
                }
            }
            if (bVar3 <= param_2) {
                bVar2 = *(byte *)((longlong)param_1 + 0x19);
                bVar3 = *(byte *)(param_1 + 3);
                uVar12 = 0;
                if (bVar2 != 0) {
                    do {
                        iVar9 = (int)uVar12;
                        lVar1 = uVar12 * 0x18;
                        uVar11 = iVar9 + 1;
                        uVar12 = (ulonglong)uVar11;
                        *(undefined4 *)(*param_1 + 0x10 + (ulonglong)(iVar9 + (bVar3 - 1) * (uint)bVar2) * 0x18)
                                = *(undefined4 *)(*param_1 + 0x10 + lVar1);
                    } while (uVar11 < *(byte *)((longlong)param_1 + 0x19));
                }
            }
            goto LAB_140870c2a;
        }
        LAB_140870cca:
        iVar9 = 2;
    }
    else {
        LAB_140870c2a:
        uVar8 = (ulonglong)((uint)param_2 * (uint)*(byte *)((longlong)param_1 + 0x19) + (uint)uVar8);
        lVar1 = *param_1 + uVar8 * 0x18;
        if (*(longlong *)(*param_1 + 8 + uVar8 * 0x18) == 0) {
            lVar6 = FUN_1408819f0(DAT_140c10f28,0x440);
            if (lVar6 == 0) goto LAB_140870cca;
            FUN_140862a10(lVar6);
            *(undefined8 *)(lVar6 + 0x420) = 0;
            *(undefined4 *)(lVar1 + 0x14) = param_4;
            iVar9 = FUN_140862f90(lVar6,param_4,0x5dc00 / (ulonglong)DAT_140c110b4,0);
            uVar4 = DAT_140c10f28;
            if (iVar9 != 1) {
                FUN_140862b80();
                FUN_140881720(uVar4,lVar6);
                return iVar9;
            }
            FUN_140862be0(lVar6);
            *(longlong *)(lVar1 + 8) = lVar6;
        }
        iVar9 = 1;
    }
    return iVar9;
}



void FUN_140870cf0(longlong param_1,int param_2,longlong param_3)

{
    uint uVar1;
    undefined4 *puVar2;
    undefined4 *puVar3;
    ushort uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    ulonglong uVar8;
    longlong lVar9;
    longlong lVar10;
    uint uVar11;

    uVar4 = *(ushort *)(param_1 + 0x36);
    uVar11 = 0;
    if ((uVar4 & 7) != 0) {
        do {
            uVar1 = uVar11 + (uVar4 & 7) * param_2;
            uVar8 = (ulonglong)uVar11;
            uVar11 = uVar11 + 1;
            lVar9 = uVar8 * 0x40;
            lVar10 = ((ulonglong)uVar1 + 1) * 0x40;
            puVar2 = (undefined4 *)(lVar10 + param_1);
            uVar5 = puVar2[1];
            uVar6 = puVar2[2];
            uVar7 = puVar2[3];
            puVar3 = (undefined4 *)(lVar9 + param_3);
            *puVar3 = *puVar2;
            puVar3[1] = uVar5;
            puVar3[2] = uVar6;
            puVar3[3] = uVar7;
            puVar2 = (undefined4 *)(lVar10 + 0x10 + param_1);
            uVar5 = puVar2[1];
            uVar6 = puVar2[2];
            uVar7 = puVar2[3];
            puVar3 = (undefined4 *)(lVar9 + 0x10 + param_3);
            *puVar3 = *puVar2;
            puVar3[1] = uVar5;
            puVar3[2] = uVar6;
            puVar3[3] = uVar7;
            puVar2 = (undefined4 *)(lVar10 + 0x20 + param_1);
            uVar5 = puVar2[1];
            uVar6 = puVar2[2];
            uVar7 = puVar2[3];
            puVar3 = (undefined4 *)(lVar9 + 0x20 + param_3);
            *puVar3 = *puVar2;
            puVar3[1] = uVar5;
            puVar3[2] = uVar6;
            puVar3[3] = uVar7;
            puVar2 = (undefined4 *)(lVar10 + 0x30 + param_1);
            uVar5 = puVar2[1];
            uVar6 = puVar2[2];
            uVar7 = puVar2[3];
            puVar3 = (undefined4 *)(lVar9 + 0x30 + param_3);
            *puVar3 = *puVar2;
            puVar3[1] = uVar5;
            puVar3[2] = uVar6;
            puVar3[3] = uVar7;
        } while (uVar11 < (*(ushort *)(param_1 + 0x36) & 7));
    }
    return;
}



void FUN_140870d60(longlong *param_1,byte param_2,int param_3,undefined8 *param_4,
                   undefined8 *param_5)

{
    longlong lVar1;
    longlong lVar2;
    int *piVar3;
    ulonglong uVar4;
    uint uVar5;
    uint uVar6;

    uVar5 = 0;
    *param_4 = 0;
    *param_5 = 0;
    if (param_2 < *(byte *)(param_1 + 3)) {
        uVar6 = (uint)*(byte *)((longlong)param_1 + 0x19);
        if (*(byte *)((longlong)param_1 + 0x19) != 0) {
            piVar3 = (int *)(*param_1 + 0x10);
            uVar5 = 0;
            do {
                if (*piVar3 == param_3) break;
                uVar5 = uVar5 + 1;
                piVar3 = piVar3 + 6;
            } while (uVar5 < uVar6);
        }
        if (uVar5 != uVar6) {
            uVar4 = (ulonglong)(param_2 * uVar6 + uVar5);
            lVar1 = *param_1;
            lVar2 = *(longlong *)(lVar1 + uVar4 * 0x18);
            if (lVar2 != 0) {
                FUN_140862f00(lVar2,param_4);
            }
            lVar1 = *(longlong *)(lVar1 + uVar4 * 0x18 + 8);
            if (lVar1 != 0) {
                FUN_140862f00(lVar1,param_5);
            }
        }
    }
    return;
}



undefined8 FUN_140870df0(longlong *param_1,int param_2)

{
    int iVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    undefined8 *puVar5;
    ulonglong uVar6;

    iVar1 = *(int *)(param_1 + 2);
    puVar2 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,(ulonglong)(uint)(iVar1 + param_2) * 0x18);
    if (puVar2 == (undefined8 *)0x0) {
        return 0;
    }
    uVar6 = (param_1[1] - *param_1) / 0x18;
    uVar4 = uVar6 & 0xffffffff;
    if (*param_1 != 0) {
        if ((int)uVar6 != 0) {
            puVar3 = puVar2;
            uVar6 = uVar4;
            do {
                if (puVar3 != (undefined8 *)0x0) {
                    puVar3[1] = 0;
                    *puVar3 = 0;
                    *(undefined4 *)(puVar3 + 2) = 0;
                }
                puVar5 = (undefined8 *)((longlong)puVar3 + (*param_1 - (longlong)puVar2));
                *puVar3 = *puVar5;
                puVar3[1] = puVar5[1];
                puVar3[2] = puVar5[2];
                uVar6 = uVar6 - 1;
                puVar3 = puVar3 + 3;
            } while (uVar6 != 0);
        }
        FUN_140881720(DAT_140c10f20,*param_1);
    }
    *(int *)(param_1 + 2) = iVar1 + param_2;
    *param_1 = (longlong)puVar2;
    param_1[1] = (longlong)(puVar2 + uVar4 * 3);
    return CONCAT71((int7)(uVar4 * 3 >> 8),1);
}



void FUN_140870ef0(longlong *param_1,longlong *param_2,uint param_3)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    longlong *plVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    int iVar7;
    longlong lVar8;
    longlong lVar9;
    longlong lVar10;
    byte bVar11;
    ushort uVar12;
    longlong lVar13;
    uint uVar14;
    ulonglong uVar15;
    ulonglong uVar16;
    ulonglong uVar17;
    ulonglong uVar18;
    longlong lVar19;
    byte local_res10;
    undefined8 auStack208 [5];
    uint local_a8;
    longlong local_a0;
    longlong local_98;
    longlong local_88;
    uint local_80;
    undefined2 local_78;
    undefined2 local_76;
    undefined2 local_70;
    undefined8 local_68;

    uVar16 = 0;
    uVar17 = uVar16;
    if (*(longlong *)(param_2[8] + 0x10) != 0) {
        uVar17 = *(ulonglong *)(*(longlong *)(param_2[8] + 0x10) + 0x18);
    }
    if ((*(byte *)(uVar17 + 0x17e) & 0x40) == 0) {
        auStack208[0] = 0x140870f44;
        FUN_1408605d0();
    }
    lVar19 = *(longlong *)(uVar17 + 0x1f0);
    local_a8 = 0;
    uVar18 = uVar16;
    for (uVar12 = *(ushort *)(lVar19 + 0x34); uVar12 != 0; uVar12 = uVar12 & uVar12 - 1) {
        local_a8 = (int)uVar18 + 1;
        uVar18 = (ulonglong)local_a8;
    }
    auStack208[0] = 0x140870f97;
    local_98 = lVar19;
    lVar8 = FUN_1407f0f60();
    lVar8 = -lVar8;
    local_a0 = (longlong)&local_a8 + lVar8;
    if (((*(byte *)(uVar17 + 0x17b) & 0xc) != 4) ||
        (bVar11 = *(byte *)(uVar17 + 0x17b) & 3, bVar11 != 1)) {
        bVar11 = 0;
    }
    plVar3 = (longlong *)param_2[10];
    local_70 = 0;
    local_68 = 0;
    if (*plVar3 == 0) {
        local_88 = *param_2;
        local_80 = (uint)*(ushort *)(lVar19 + 0x34);
        local_78 = *(undefined2 *)(param_2 + 2);
        local_76 = *(undefined2 *)((longlong)param_2 + 0x12);
    }
    else {
        local_76 = *(undefined2 *)((longlong)plVar3 + 0x12);
        local_78 = *(undefined2 *)(plVar3 + 2);
        local_80 = (uint)*(ushort *)(lVar19 + 0x34);
        local_88 = *plVar3;
    }
    if (bVar11 == 0) {
        *(undefined8 *)((longlong)auStack208 + lVar8) = 0x14087102e;
        FUN_140870cf0();
        uVar18 = (ulonglong)local_a8;
    }
    local_res10 = 0;
    uVar17 = uVar16;
    if (*(char *)(param_1 + 3) != '\0') {
        do {
            lVar10 = local_a0;
            if ((param_3 >> (local_res10 & 0x1f) & 1) == 0) {
                uVar17 = (ulonglong)((int)uVar17 + (uint)*(byte *)((longlong)param_1 + 0x19));
            }
            else {
                if ((bVar11 != 0) && (uVar12 = *(ushort *)(lVar19 + 0x36), (uVar12 & 7) != 0)) {
                    uVar15 = uVar16;
                    do {
                        uVar14 = (int)uVar15 + 1;
                        lVar9 = (uVar15 + (int)uVar18 * (uint)local_res10) * 0x40;
                        lVar13 = ((ulonglong)((int)uVar15 + (uVar12 & 7) * (uint)local_res10) + 1) * 0x40;
                        puVar1 = (undefined4 *)(lVar13 + lVar19);
                        uVar4 = puVar1[1];
                        uVar5 = puVar1[2];
                        uVar6 = puVar1[3];
                        puVar2 = (undefined4 *)(lVar9 + lVar10);
                        *puVar2 = *puVar1;
                        puVar2[1] = uVar4;
                        puVar2[2] = uVar5;
                        puVar2[3] = uVar6;
                        puVar1 = (undefined4 *)(lVar13 + 0x10 + lVar19);
                        uVar4 = puVar1[1];
                        uVar5 = puVar1[2];
                        uVar6 = puVar1[3];
                        puVar2 = (undefined4 *)(lVar9 + 0x10 + lVar10);
                        *puVar2 = *puVar1;
                        puVar2[1] = uVar4;
                        puVar2[2] = uVar5;
                        puVar2[3] = uVar6;
                        puVar1 = (undefined4 *)(lVar13 + 0x20 + lVar19);
                        uVar4 = puVar1[1];
                        uVar5 = puVar1[2];
                        uVar6 = puVar1[3];
                        puVar2 = (undefined4 *)(lVar9 + 0x20 + lVar10);
                        *puVar2 = *puVar1;
                        puVar2[1] = uVar4;
                        puVar2[2] = uVar5;
                        puVar2[3] = uVar6;
                        puVar1 = (undefined4 *)(lVar13 + 0x30 + lVar19);
                        uVar4 = puVar1[1];
                        uVar5 = puVar1[2];
                        uVar6 = puVar1[3];
                        puVar2 = (undefined4 *)(lVar9 + 0x30 + lVar10);
                        *puVar2 = *puVar1;
                        puVar2[1] = uVar4;
                        puVar2[2] = uVar5;
                        puVar2[3] = uVar6;
                        uVar15 = (ulonglong)uVar14;
                    } while (uVar14 < (*(ushort *)(lVar19 + 0x36) & 7));
                }
                uVar18 = uVar16;
                if (*(char *)((longlong)param_1 + 0x19) != '\0') {
                    do {
                        lVar19 = *param_1;
                        if (*(longlong *)(lVar19 + 8 + uVar17 * 0x18) == 0) {
                            LAB_1408711da:
                            uVar17 = (ulonglong)((int)uVar17 + 1);
                        }
                        else {
                            if (*(longlong *)(lVar19 + uVar17 * 0x18) != 0) {
                                LAB_1408711b0:
                                *(undefined8 *)((longlong)auStack208 + lVar8) = 0x1408711da;
                                FUN_140862c40();
                                goto LAB_1408711da;
                            }
                            *(undefined8 *)((longlong)auStack208 + lVar8) = 0x140871130;
                            lVar10 = FUN_1408819f0(DAT_140c10f28);
                            *(longlong *)(lVar19 + uVar17 * 0x18) = lVar10;
                            if (lVar10 != 0) {
                                *(undefined8 *)((longlong)auStack208 + lVar8) = 0x140871144;
                                FUN_140862a10(lVar10);
                                *(undefined8 *)(lVar10 + 0x420) = 0;
                            }
                            if (*(longlong *)(lVar19 + uVar17 * 0x18) != 0) {
                                *(undefined8 *)((longlong)auStack208 + lVar8) = 0x14087116a;
                                iVar7 = FUN_140862f90();
                                if (iVar7 == 1) {
                                    *(undefined8 *)((longlong)auStack208 + lVar8) = 0x1408711a8;
                                    FUN_140862be0();
                                    goto LAB_1408711b0;
                                }
                                if (*(longlong *)(lVar19 + uVar17 * 0x18) != 0) {
                                    *(undefined8 *)((longlong)auStack208 + lVar8) = 0x140871187;
                                    FUN_140862b80();
                                    *(undefined8 *)((longlong)auStack208 + lVar8) = 0x140871192;
                                    FUN_140881720();
                                }
                                *(undefined8 *)(lVar19 + uVar17 * 0x18) = 0;
                            }
                        }
                        uVar14 = (int)uVar18 + 1;
                        lVar19 = local_98;
                        uVar18 = (ulonglong)uVar14;
                    } while (uVar14 < *(byte *)((longlong)param_1 + 0x19));
                }
            }
            uVar18 = (ulonglong)local_a8;
            local_res10 = local_res10 + 1;
        } while (local_res10 < *(byte *)(param_1 + 3));
    }
    *(undefined8 *)((longlong)auStack208 + lVar8) = 0x140871232;
    FUN_140870860(lVar19);
    return;
}



void FUN_140871250(longlong *param_1,undefined4 *param_2,uint param_3)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    byte bVar3;
    longlong lVar4;
    int iVar5;
    int iVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    longlong lVar10;
    ulonglong uVar11;
    longlong lVar12;
    byte bVar13;
    ushort uVar14;
    longlong lVar15;
    uint uVar16;
    ulonglong uVar17;
    byte bVar18;
    uint uVar19;
    uint uVar20;
    undefined8 auStack144 [5];
    undefined4 local_68 [4];
    undefined4 local_58 [4];
    undefined4 local_48 [4];
    undefined4 local_38 [4];

    lVar10 = 0;
    if (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x10) != 0) {
        lVar10 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x10) + 0x18);
    }
    if ((*(byte *)(lVar10 + 0x17e) & 0x40) == 0) {
        auStack144[0] = 0x1408712a5;
        FUN_1408605d0();
    }
    uVar17 = 0;
    lVar4 = *(longlong *)(lVar10 + 0x1f0);
    if (((*(byte *)(lVar10 + 0x17b) & 0xc) != 4) ||
        (bVar13 = *(byte *)(lVar10 + 0x17b) & 3, bVar13 != 1)) {
        bVar13 = 0;
    }
    local_68[0] = *param_2;
    local_68[1] = param_2[1];
    local_68[2] = param_2[2];
    local_68[3] = param_2[3];
    local_58[0] = param_2[4];
    local_58[1] = param_2[5];
    local_58[2] = param_2[6];
    local_58[3] = param_2[7];
    uVar20 = 0;
    local_48[0] = param_2[8];
    local_48[1] = param_2[9];
    local_48[2] = param_2[10];
    local_48[3] = param_2[0xb];
    local_38[0] = param_2[0xc];
    local_38[1] = param_2[0xd];
    local_38[2] = param_2[0xe];
    local_38[3] = param_2[0xf];
    uVar11 = uVar17;
    for (uVar14 = *(ushort *)(lVar4 + 0x34); uVar14 != 0; uVar14 = uVar14 & uVar14 - 1) {
        uVar20 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar20;
    }
    auStack144[0] = 0x140871333;
    lVar10 = FUN_1407f0f60();
    lVar10 = -lVar10;
    if (bVar13 == 0) {
        *(undefined8 *)((longlong)auStack144 + lVar10) = 0x14087134d;
        FUN_140870cf0();
        uVar17 = 0;
    }
    iVar6 = *(int *)(lVar4 + 0x30);
    bVar18 = 0;
    if (*(char *)(param_1 + 3) != '\0') {
        do {
            if ((param_3 >> (bVar18 & 0x1f) & 1) != 0) {
                if (bVar13 != 0) {
                    uVar14 = *(ushort *)(lVar4 + 0x36);
                    if ((uVar14 & 7) != 0) {
                        do {
                            iVar5 = (int)uVar17;
                            uVar11 = uVar17 & 0xffffffff;
                            uVar16 = iVar5 + 1;
                            uVar17 = (ulonglong)uVar16;
                            lVar12 = (uVar11 + bVar18 * uVar20) * 0x40;
                            lVar15 = ((ulonglong)(iVar5 + (uVar14 & 7) * (uint)bVar18) + 1) * 0x40;
                            puVar1 = (undefined4 *)(lVar15 + lVar4);
                            uVar7 = puVar1[1];
                            uVar8 = puVar1[2];
                            uVar9 = puVar1[3];
                            puVar2 = (undefined4 *)((longlong)local_68 + lVar12 + lVar10);
                            *puVar2 = *puVar1;
                            puVar2[1] = uVar7;
                            puVar2[2] = uVar8;
                            puVar2[3] = uVar9;
                            puVar1 = (undefined4 *)(lVar15 + 0x10 + lVar4);
                            uVar7 = puVar1[1];
                            uVar8 = puVar1[2];
                            uVar9 = puVar1[3];
                            puVar2 = (undefined4 *)((longlong)local_58 + lVar12 + lVar10);
                            *puVar2 = *puVar1;
                            puVar2[1] = uVar7;
                            puVar2[2] = uVar8;
                            puVar2[3] = uVar9;
                            puVar1 = (undefined4 *)(lVar15 + 0x20 + lVar4);
                            uVar7 = puVar1[1];
                            uVar8 = puVar1[2];
                            uVar9 = puVar1[3];
                            puVar2 = (undefined4 *)((longlong)local_48 + lVar12 + lVar10);
                            *puVar2 = *puVar1;
                            puVar2[1] = uVar7;
                            puVar2[2] = uVar8;
                            puVar2[3] = uVar9;
                            puVar1 = (undefined4 *)(lVar15 + 0x30 + lVar4);
                            uVar7 = puVar1[1];
                            uVar8 = puVar1[2];
                            uVar9 = puVar1[3];
                            puVar2 = (undefined4 *)((longlong)local_38 + lVar12 + lVar10);
                            *puVar2 = *puVar1;
                            puVar2[1] = uVar7;
                            puVar2[2] = uVar8;
                            puVar2[3] = uVar9;
                        } while (uVar16 < (*(ushort *)(lVar4 + 0x36) & 7));
                    }
                    uVar17 = 0;
                }
                bVar3 = *(byte *)((longlong)param_1 + 0x19);
                uVar11 = uVar17 & 0xffffffff;
                if (bVar3 != 0) {
                    uVar16 = (uint)bVar3 * (uint)bVar18;
                    do {
                        if (*(int *)(*param_1 + 0x10 + (ulonglong)uVar16 * 0x18) == iVar6) {
                            if (*(longlong *)(*param_1 + (ulonglong)uVar16 * 0x18 + 8) != 0) {
                                *(undefined8 *)((longlong)auStack144 + lVar10) = 0x140871457;
                                FUN_140862c40();
                            }
                            break;
                        }
                        uVar19 = (int)uVar11 + 1;
                        uVar11 = (ulonglong)uVar19;
                        uVar16 = uVar16 + 1;
                    } while (uVar19 < bVar3);
                    uVar17 = 0;
                }
            }
            bVar18 = bVar18 + 1;
        } while (bVar18 < *(byte *)(param_1 + 3));
    }
    *(undefined8 *)((longlong)auStack144 + lVar10) = 0x14087146d;
    FUN_140870860(lVar4);
    return;
}



void FUN_140871490(longlong *param_1)

{
    longlong lVar1;
    uint uVar2;
    ulonglong uVar3;

    uVar3 = 0;
    if ((int)((param_1[1] - *param_1) / 0x18) != 0) {
        do {
            lVar1 = *param_1;
            if (*(longlong *)(lVar1 + uVar3 * 0x18) != 0) {
                FUN_140863400();
            }
            if (*(longlong *)(lVar1 + uVar3 * 0x18 + 8) != 0) {
                FUN_140863400();
            }
            uVar2 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar2;
        } while (uVar2 < (uint)((param_1[1] - *param_1) / 0x18));
    }
    return;
}



undefined8 FUN_140871540(longlong *param_1,byte param_2,int param_3)

{
    int *piVar1;
    uint uVar2;
    uint uVar3;

    if (param_2 < *(byte *)(param_1 + 3)) {
        uVar2 = 0;
        uVar3 = (uint)*(byte *)((longlong)param_1 + 0x19);
        if (*(byte *)((longlong)param_1 + 0x19) != 0) {
            piVar1 = (int *)(*param_1 + 0x10);
            do {
                if (*piVar1 == param_3) break;
                uVar2 = uVar2 + 1;
                piVar1 = piVar1 + 6;
            } while (uVar2 < uVar3);
        }
        if (uVar2 != uVar3) {
            FUN_140871750(*param_1 + (ulonglong)(param_2 * uVar3 + uVar2) * 0x18);
            return 1;
        }
    }
    return 2;
}



undefined8 FUN_1408715b0(longlong *param_1,uint param_2)

{
    undefined8 uVar1;
    undefined8 *puVar2;
    longlong lVar3;
    uint uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    longlong lVar7;

    uVar6 = (ulonglong)param_2;
    lVar7 = param_1[1] - *param_1;
    lVar7 = lVar7 / 6 + (lVar7 >> 0x3f);
    uVar5 = (lVar7 >> 2) - (lVar7 >> 0x3f);
    uVar4 = (uint)uVar5;
    if (param_2 < uVar4) {
        lVar7 = *param_1 + uVar6 * 0x18;
        param_1[1] = lVar7;
        return CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
    }
    if (*(uint *)(param_1 + 2) <= param_2 && param_2 != *(uint *)(param_1 + 2)) {
        uVar1 = FUN_140870df0(param_1,param_2 - uVar4);
        if ((char)uVar1 == '\0') {
            return uVar1;
        }
    }
    uVar5 = uVar5 & 0xffffffff;
    if (uVar5 < uVar6) {
        lVar7 = uVar5 * 0x18;
        lVar3 = uVar6 - uVar5;
        do {
            puVar2 = (undefined8 *)(*param_1 + lVar7);
            if (puVar2 != (undefined8 *)0x0) {
                puVar2[1] = 0;
                *puVar2 = 0;
                *(undefined4 *)(puVar2 + 2) = 0;
            }
            lVar7 = lVar7 + 0x18;
            lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
    }
    param_1[1] = *param_1 + uVar6 * 0x18;
    return CONCAT71((int7)((ulonglong)*param_1 >> 8),1);
}



undefined8 FUN_140871690(longlong *param_1)

{
    longlong lVar1;
    uint uVar2;
    ulonglong uVar3;

    uVar3 = 0;
    if ((int)((param_1[1] - *param_1) / 0x18) != 0) {
        do {
            FUN_140871750(*param_1 + uVar3 * 0x18);
            uVar2 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar2;
        } while (uVar2 < (uint)((param_1[1] - *param_1) / 0x18));
    }
    lVar1 = *param_1;
    if (lVar1 != 0) {
        param_1[1] = lVar1;
        FUN_140881720(DAT_140c10f20,lVar1);
        *param_1 = 0;
        param_1[1] = 0;
        *(undefined4 *)(param_1 + 2) = 0;
    }
    return 1;
}



void FUN_140871750(longlong *param_1)

{
    longlong lVar1;
    undefined4 uVar2;

    if (param_1[1] != 0) {
        FUN_140862d70();
        uVar2 = DAT_140c10f28;
        lVar1 = param_1[1];
        if (lVar1 != 0) {
            FUN_140862b80(lVar1);
            FUN_140881720(uVar2,lVar1);
        }
        param_1[1] = 0;
    }
    if (*param_1 != 0) {
        FUN_140862d70();
        uVar2 = DAT_140c10f28;
        lVar1 = *param_1;
        if (lVar1 != 0) {
            FUN_140862b80(lVar1);
            FUN_140881720(uVar2,lVar1);
        }
        *param_1 = 0;
    }
    return;
}



undefined8 * FUN_1408717e0(undefined8 param_1,undefined8 *param_2)

{
    *param_2 = &PTR_FUN_1409a6080;
    param_2[0x16] = 0;
    *(undefined4 *)(param_2 + 0x17) = 0;
    FUN_1408a8e90(param_1,0x3f800000,0,0);
    param_2[0x18] = 0;
    return param_2;
}



void FUN_140871840(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_1409a6080;
    if (param_1[0x16] != 0) {
        FUN_140881720(DAT_140c10f28);
        param_1[0x16] = 0;
    }
    return;
}



undefined8 * FUN_140871880(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a6080;
    if (param_1[0x16] != 0) {
        FUN_140881720(DAT_140c10f28);
        param_1[0x16] = 0;
    }
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



void FUN_1408718e0(longlong param_1,longlong *param_2)

{
    ushort uVar1;
    longlong lVar2;
    uint uVar3;
    longlong lVar4;
    uint uVar5;
    uint uVar6;
    undefined4 *puVar8;
    ushort uVar9;
    ulonglong uVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    ulonglong uVar7;

    FUN_1408722d0(param_1 + 0x10);
    if (*(char *)(param_1 + 0xcd) == '\0') {
        uVar10 = 0;
        uVar6 = 0;
        uVar7 = uVar10;
        for (uVar3 = *(uint *)(param_2 + 1); uVar3 != 0; uVar3 = uVar3 & uVar3 - 1) {
            uVar6 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar6;
        }
        uVar1 = *(ushort *)((longlong)param_2 + 0x12);
        if (*(ushort *)(param_1 + 200) < 8) {
            fVar11 = *(float *)(param_1 + 0xc0);
            fVar14 = 0.1;
            fVar12 = *(float *)(param_1 + 0xc4) - fVar11;
            if (fVar11 <= 0.1) {
                if (uVar1 < 2) {
                    return;
                }
                uVar9 = 0;
                if (uVar6 != 0) {
                    do {
                        lVar2 = *param_2;
                        uVar7 = (ulonglong)uVar9;
                        uVar9 = uVar9 + 1;
                        lVar4 = *(ushort *)(param_2 + 2) * uVar7;
                        puVar8 = (undefined4 *)(uVar7 * 0x10 + *(longlong *)(param_1 + 0xb0));
                        puVar8[2] = *(undefined4 *)(lVar2 + 4 + lVar4 * 4);
                        puVar8[3] = *(undefined4 *)(lVar2 + lVar4 * 4);
                        *puVar8 = *(undefined4 *)(lVar2 + 4 + lVar4 * 4);
                        puVar8[1] = *(undefined4 *)(lVar2 + lVar4 * 4);
                    } while (uVar9 < uVar6);
                }
                uVar10 = 2;
            }
            if ((uint)uVar10 < (uint)uVar1) {
                fVar13 = 0.125;
                do {
                    uVar5 = 0;
                    uVar3 = (uint)uVar1 - (int)uVar10;
                    if (DAT_140c110c0 < uVar3) {
                        uVar3 = DAT_140c110c0;
                    }
                    if (*(ushort *)(param_1 + 200) < 8) {
                        uVar9 = *(ushort *)(param_1 + 200) + 1;
                        *(ushort *)(param_1 + 200) = uVar9;
                        *(float *)(param_1 + 0xc0) = (float)(uint)uVar9 * fVar12 * fVar13 + fVar11;
                        FUN_14087c7e0();
                        FUN_1408fd8a4();
                        FUN_1408a8e90();
                    }
                    if (uVar6 != 0) {
                        do {
                            FUN_140871d50();
                            uVar5 = uVar5 + 1;
                        } while (uVar5 < uVar6);
                    }
                    uVar3 = (int)uVar10 + uVar3;
                    uVar10 = (ulonglong)uVar3;
                } while (uVar3 < uVar1);
            }
            if (7 < *(ushort *)(param_1 + 200)) {
                *(bool *)(param_1 + 0xcd) = *(float *)(param_1 + 0xc4) <= fVar14;
            }
        }
        else {
            uVar7 = uVar10;
            if (uVar6 != 0) {
                do {
                    FUN_140871d50(param_1 + 0x10,*param_2 + *(ushort *)(param_2 + 2) * uVar10 * 4,uVar1,uVar7)
                            ;
                    uVar3 = (int)uVar7 + 1;
                    uVar10 = uVar10 + 1;
                    uVar7 = (ulonglong)uVar3;
                } while (uVar3 < uVar6);
            }
        }
    }
    return;
}



undefined8 FUN_140871cb0(longlong param_1,uint param_2,undefined param_3)

{
    longlong lVar1;
    int iVar2;

    *(undefined *)(param_1 + 0xcc) = param_3;
    iVar2 = 0;
    *(short *)(param_1 + 0xca) = (short)param_2;
    *(undefined2 *)(param_1 + 0xcd) = 0x101;
    *(undefined2 *)(param_1 + 200) = 8;
    *(undefined *)(param_1 + 0xcf) = 1;
    if (param_2 != 0) {
        do {
            iVar2 = iVar2 + 1;
            param_2 = param_2 & param_2 - 1;
        } while (param_2 != 0);
    }
    *(int *)(param_1 + 0xb8) = iVar2 << 4;
    lVar1 = FUN_1408819f0(DAT_140c10f28);
    *(longlong *)(param_1 + 0xb0) = lVar1;
    if (lVar1 == 0) {
        return 0x34;
    }
    FUN_1407e4830(lVar1,0,*(undefined4 *)(param_1 + 0xb8));
    return 1;
}



void FUN_140871d50(float *param_1,undefined (*param_2) [16],uint param_3,uint param_4)

{
    longlong lVar1;
    float fVar2;
    float fVar3;
    float fVar4;
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
    float fVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    float fVar26;
    float fVar27;
    float fVar28;
    float fVar29;
    float fVar30;
    float fVar31;
    undefined *puVar32;
    uint uVar33;
    ulonglong uVar34;
    undefined (*pauVar35) [16];
    ulonglong uVar36;
    float fVar37;
    float fVar38;
    float fVar39;
    float fVar40;
    float fVar41;
    float fVar42;
    float fVar43;
    float fVar44;
    float local_e8;
    float local_d8;
    float local_c8;
    float local_b8;

    uVar36 = (ulonglong)param_4;
    if (((ulonglong)param_2 & 0xf) != 0) {
        uVar34 = (ulonglong)param_3;
        uVar33 = 0x10 - ((uint)param_2 & 0xf) >> 2;
        if (uVar33 < param_3) {
            uVar34 = (ulonglong)uVar33;
        }
        FUN_140871fc0(param_1,param_2,uVar34,uVar36);
        param_2 = (undefined (*) [16])(*param_2 + uVar34 * 4);
        param_3 = param_3 - (int)uVar34;
    }
    lVar1 = *(longlong *)(param_1 + 0x28);
    uVar33 = param_3 & 3;
    local_e8 = *(float *)(lVar1 + uVar36 * 0x10);
    local_d8 = *(float *)(lVar1 + 4 + uVar36 * 0x10);
    local_c8 = *(float *)(lVar1 + 8 + uVar36 * 0x10);
    puVar32 = *param_2;
    local_b8 = *(float *)(lVar1 + 0xc + uVar36 * 0x10);
    if (param_2 < (undefined (*) [16])(puVar32 + (ulonglong)(param_3 - uVar33) * 4)) {
        fVar2 = param_1[0x10];
        fVar3 = param_1[0x11];
        fVar4 = param_1[0x12];
        fVar5 = param_1[0x13];
        fVar6 = param_1[0x14];
        fVar7 = param_1[0x15];
        fVar8 = param_1[0x16];
        fVar9 = param_1[0x17];
        fVar10 = param_1[0x1c];
        fVar11 = param_1[0x1d];
        fVar12 = param_1[0x1e];
        fVar13 = param_1[0x1f];
        fVar14 = param_1[0x18];
        fVar15 = param_1[0x19];
        fVar16 = param_1[0x1a];
        fVar17 = param_1[0x1b];
        fVar18 = param_1[4];
        fVar19 = param_1[5];
        fVar20 = param_1[6];
        fVar21 = param_1[7];
        fVar22 = *param_1;
        fVar23 = param_1[1];
        fVar24 = param_1[2];
        fVar25 = param_1[3];
        fVar26 = param_1[8];
        fVar27 = param_1[9];
        fVar28 = param_1[10];
        fVar29 = param_1[0xb];
        pauVar35 = param_2;
        fVar44 = local_e8;
        do {
            fVar30 = *(float *)*pauVar35;
            fVar31 = *(float *)(*pauVar35 + 4);
            local_e8 = *(float *)(*pauVar35 + 0xc);
            param_2 = pauVar35[1];
            fVar40 = fVar6 * local_d8;
            fVar41 = fVar7 * local_d8;
            fVar42 = fVar8 * local_d8;
            fVar43 = fVar9 * local_d8;
            fVar37 = fVar14 * local_c8;
            fVar38 = fVar15 * local_c8;
            fVar39 = fVar16 * local_c8;
            local_d8 = 0.0;
            local_c8 = local_b8 * fVar13 + fVar17 * local_c8 + fVar21 * 0.0 +
                       fVar25 * local_e8 + fVar43 + fVar5 * fVar44 +
                       fVar30 * param_1[0xf] + fVar31 * fVar29;
            *pauVar35 = CONCAT412(local_c8,CONCAT48(local_b8 * fVar12 + fVar39 + fVar20 * 0.0 +
                                                    fVar24 * *(float *)(*pauVar35 + 8) +
                                                    fVar42 + fVar4 * fVar44 +
                                                    fVar30 * param_1[0xe] + fVar31 * fVar28,
                                                    CONCAT44(local_b8 * fVar11 + fVar38 + fVar19 * 0.0 +
                                                             fVar23 * fVar31 + fVar41 + fVar3 * fVar44 +
                                                             fVar30 * param_1[0xd] + fVar31 * fVar27,
                                                             local_b8 * fVar10 + fVar37 + fVar18 * 0.0 +
                                                             fVar22 * fVar30 + fVar40 + fVar2 * fVar44 +
                                                             fVar30 * param_1[0xc] + fVar31 * fVar26)));
            local_b8 = 0.0;
            pauVar35 = param_2;
            fVar44 = local_e8;
        } while (param_2 < (undefined (*) [16])(puVar32 + (ulonglong)(param_3 - uVar33) * 4));
        local_b8 = 0.0;
        local_d8 = 0.0;
    }
    *(float *)(lVar1 + uVar36 * 0x10) = local_e8;
    *(float *)(lVar1 + 4 + uVar36 * 0x10) = local_d8;
    *(float *)(lVar1 + 8 + uVar36 * 0x10) = local_c8;
    *(float *)(lVar1 + 0xc + uVar36 * 0x10) = local_b8;
    if (uVar33 != 0) {
        FUN_140871fc0(param_1,param_2,uVar33,uVar36);
    }
    return;
}



void FUN_140871fc0(longlong param_1,float *param_2,ulonglong param_3,ulonglong param_4)

{
    float *pfVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    longlong lVar7;
    longlong lVar8;
    float *pfVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;

    param_4 = param_4 & 0xffffffff;
    lVar7 = *(longlong *)(param_1 + 0xa0);
    pfVar1 = param_2 + (param_3 & 0xffffffff);
    fVar18 = *(float *)(lVar7 + param_4 * 0x10);
    fVar16 = *(float *)(lVar7 + 4 + param_4 * 0x10);
    fVar12 = *(float *)(lVar7 + 8 + param_4 * 0x10);
    fVar11 = *(float *)(lVar7 + 0xc + param_4 * 0x10);
    if (param_2 < pfVar1) {
        lVar8 = (longlong)pfVar1 + (3 - (longlong)param_2);
        if (3 < (longlong)(lVar8 + (ulonglong)((uint)(lVar8 >> 0x3f) & 3)) >> 2) {
            fVar2 = *(float *)(param_1 + 0x88);
            fVar3 = *(float *)(param_1 + 0x80);
            fVar4 = *(float *)(param_1 + 0x84);
            fVar5 = *(float *)(param_1 + 0x8c);
            fVar6 = *(float *)(param_1 + 0x90);
            pfVar9 = param_2;
            do {
                fVar13 = *pfVar9;
                fVar15 = pfVar9[1];
                fVar14 = fVar16 * fVar2;
                fVar10 = fVar4 * fVar18;
                param_2 = pfVar9 + 4;
                fVar17 = fVar18 * fVar2;
                fVar16 = pfVar9[2];
                fVar18 = pfVar9[3];
                fVar11 = fVar13 * fVar3 + fVar14 + fVar10 + fVar11 * fVar6 + fVar5 * fVar12;
                *pfVar9 = fVar11;
                fVar12 = fVar15 * fVar3 + fVar17 + fVar4 * fVar13 + fVar12 * fVar6 + fVar5 * fVar11;
                pfVar9[1] = fVar12;
                fVar11 = fVar16 * fVar3 + fVar13 * fVar2 + fVar4 * fVar15 + fVar11 * fVar6 + fVar5 * fVar12;
                pfVar9[2] = fVar11;
                fVar12 = fVar18 * fVar3 + fVar15 * fVar2 + fVar4 * fVar16 + fVar12 * fVar6 + fVar5 * fVar11;
                pfVar9[3] = fVar12;
                pfVar9 = param_2;
            } while ((longlong)param_2 < (longlong)(pfVar1 + -3));
        }
        if (param_2 < pfVar1) {
            fVar2 = *(float *)(param_1 + 0x88);
            fVar3 = *(float *)(param_1 + 0x80);
            fVar4 = *(float *)(param_1 + 0x84);
            fVar5 = *(float *)(param_1 + 0x90);
            fVar6 = *(float *)(param_1 + 0x8c);
            fVar13 = fVar11;
            fVar15 = fVar16;
            do {
                fVar16 = fVar18;
                fVar11 = fVar12;
                fVar18 = *param_2;
                pfVar9 = param_2 + 1;
                fVar12 = fVar18 * fVar3 + fVar15 * fVar2 + fVar4 * fVar16 + fVar13 * fVar5 + fVar6 * fVar11;
                *param_2 = fVar12;
                param_2 = pfVar9;
                fVar13 = fVar11;
                fVar15 = fVar16;
            } while (pfVar9 < pfVar1);
        }
    }
    *(float *)(lVar7 + param_4 * 0x10) = fVar18;
    *(float *)(lVar7 + 4 + param_4 * 0x10) = fVar16;
    *(float *)(lVar7 + 8 + param_4 * 0x10) = fVar12;
    *(float *)(lVar7 + 0xc + param_4 * 0x10) = fVar11;
    return;
}



void FUN_140872260(longlong param_1)

{
    *(undefined *)(param_1 + 0xcf) = 1;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
        FUN_1407e4830(*(longlong *)(param_1 + 0xb0),0,*(undefined4 *)(param_1 + 0xb8));
        return;
    }
    return;
}



void FUN_140872290(longlong param_1)

{
    if (*(longlong *)(param_1 + 0xb0) != 0) {
        FUN_140881720(DAT_140c10f28);
        *(undefined8 *)(param_1 + 0xb0) = 0;
    }
    return;
}



void FUN_1408722d0(longlong param_1)

{
    char cVar1;
    float fVar2;
    float fVar3;

    if (*(char *)(param_1 + 0xbe) != '\0') {
        *(undefined *)(param_1 + 0xbe) = 0;
        if (*(char *)(param_1 + 0xbf) == '\0') {
            if ((0.1 < *(float *)(param_1 + 0xb0)) || (0.1 < *(float *)(param_1 + 0xb4))) {
                cVar1 = '\0';
            }
            else {
                cVar1 = '\x01';
            }
            *(char *)(param_1 + 0xbd) = cVar1;
            *(ushort *)(param_1 + 0xb8) = -(ushort)(cVar1 != '\0') & 8;
        }
        else {
            fVar3 = *(float *)(param_1 + 0xb4);
            *(undefined *)(param_1 + 0xbf) = 0;
            *(undefined2 *)(param_1 + 0xb8) = 8;
            *(float *)(param_1 + 0xb0) = fVar3;
            *(bool *)(param_1 + 0xbd) = fVar3 <= 0.1;
            if (fVar3 > 0.1) {
                fVar2 = (float)FUN_14087c7e0(param_1,*(undefined *)(param_1 + 0xbc));
                fVar3 = 0.45;
                if (fVar2 / (float)(ulonglong)DAT_140c110b4 <= 0.45) {
                    fVar3 = fVar2 / (float)(ulonglong)DAT_140c110b4;
                }
                fVar3 = (float)FUN_1408fd8a4(fVar3 * 3.141593);
                fVar3 = 1.0 / fVar3;
                fVar3 = fVar3 * 1.414214 + 1.0 + fVar3 * fVar3;
                fVar2 = 1.0 / fVar3;
                FUN_1408a8e90(fVar3,fVar2,fVar2 * 2.0,fVar2,param_1);
                return;
            }
        }
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_140872430(undefined8 param_1,undefined8 *param_2)

{
    undefined8 uVar1;
    undefined8 local_48;
    undefined8 local_40;
    ulonglong local_38;
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;

    local_48 = *param_2;
    local_40 = param_2[1];
    local_38 = param_2[2];
    local_30 = param_2[3];
    local_28 = param_2[4];
    local_20 = param_2[5];
    local_18 = param_2[6];
    uVar1 = FUN_140868400(&local_48,*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 1));
    if ((int)uVar1 == 1) {
        local_38._0_4_ = CONCAT22(*(undefined2 *)((longlong)param_2 + 0x12),(undefined2)local_38);
        local_38 = local_38 & 0xffffffff00000000 | (ulonglong)(uint)local_38;
        FUN_14087e070(param_2,&local_48);
        FUN_140868480(param_2);
        *param_2 = local_48;
        param_2[1] = local_40;
        param_2[2] = local_38;
        uVar1 = 1;
    }
    return uVar1;
}



undefined4 FUN_1408724d0(longlong param_1,longlong param_2,longlong param_3)

{
    undefined4 uVar1;

    if (*(short *)(param_2 + 0x12) != 0) {
        do {
            uVar1 = (*(code *)(&PTR_FUN_140c11100)
            [(ulonglong)*(byte *)(param_1 + 0x44) +
             (longlong)*(int *)(param_1 + 0x38) * 8])
                    (param_2,param_3,*(undefined4 *)(param_1 + 0x34),param_1);
            if ((*(int *)(param_1 + 0x38) == 2) && (0x3ff < *(uint *)(param_1 + 0x2c))) {
                *(undefined4 *)(param_1 + 0x38) = 1;
                *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x28);
            }
        } while ((*(short *)(param_2 + 0x12) != 0) &&
                 ((uint)*(ushort *)(param_3 + 0x12) < *(uint *)(param_1 + 0x34)));
        return uVar1;
    }
    return 0x11;
}



float FUN_140872580(longlong param_1)

{
    return ((float)(ulonglong)*(uint *)(param_1 + 0x24) * 1.525879e-05) / *(float *)(param_1 + 0x3c);
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1408726a0(undefined8 param_1,undefined8 *param_2)

{
    undefined8 uVar1;
    undefined8 local_48;
    undefined8 local_40;
    ulonglong local_38;
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;

    local_48 = *param_2;
    local_40 = param_2[1];
    local_38 = param_2[2];
    local_30 = param_2[3];
    local_28 = param_2[4];
    local_20 = param_2[5];
    local_18 = param_2[6];
    uVar1 = FUN_140868400(&local_48,*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 1));
    if ((int)uVar1 == 1) {
        local_38._0_4_ = CONCAT22(*(undefined2 *)((longlong)param_2 + 0x12),(undefined2)local_38);
        local_38 = local_38 & 0xffffffff00000000 | (ulonglong)(uint)local_38;
        FUN_14087e8f0(param_2,&local_48);
        FUN_140868480(param_2);
        *param_2 = local_48;
        param_2[1] = local_40;
        param_2[2] = local_38;
        uVar1 = 1;
    }
    return uVar1;
}



ulonglong FUN_140872740(longlong param_1)

{
    ulonglong in_RAX;

    if (((*(int *)(param_1 + 0x38) == 0) && (2 < *(byte *)(param_1 + 0x45))) &&
        (in_RAX = 0, 3 < (byte)(*(char *)(param_1 + 0x44) - 4U))) {
        return 1;
    }
    return in_RAX & 0xffffffffffffff00;
}



void FUN_140872760(undefined8 param_1,float param_2,longlong param_3)

{
    undefined4 uVar1;
    int iVar2;
    float fVar3;

    fVar3 = -2400.0;
    if ((param_2 <= -2400.0) || (fVar3 = 2400.0, 2400.0 <= param_2)) {
        param_2 = fVar3;
    }
    if (*(char *)(param_3 + 0x47) != '\0') {
        fVar3 = (float)FUN_1408fbfc0(0x40000000,param_2 * 0.0008333334);
        *(float *)(param_3 + 0x40) = param_2;
        *(undefined4 *)(param_3 + 0x2c) = 0x400;
        *(undefined *)(param_3 + 0x47) = 0;
        uVar1 = (undefined4)(longlong)(fVar3 * *(float *)(param_3 + 0x3c) * 65536.0 + 0.5);
        *(undefined4 *)(param_3 + 0x24) = uVar1;
        *(undefined4 *)(param_3 + 0x28) = uVar1;
    }
    if (param_2 != *(float *)(param_3 + 0x40)) {
        if (*(int *)(param_3 + 0x38) == 2) {
            iVar2 = (*(int *)(param_3 + 0x28) - *(int *)(param_3 + 0x24)) * *(int *)(param_3 + 0x2c);
            *(int *)(param_3 + 0x24) =
                    *(int *)(param_3 + 0x24) + ((int)(iVar2 + (iVar2 >> 0x1f & 0x3ffU)) >> 10);
        }
        *(undefined4 *)(param_3 + 0x2c) = 0;
        fVar3 = (float)FUN_1408fbfc0(0x40000000,param_2 * 0.0008333334);
        *(float *)(param_3 + 0x40) = param_2;
        *(int *)(param_3 + 0x28) = (int)(longlong)(fVar3 * *(float *)(param_3 + 0x3c) * 65536.0 + 0.5);
    }
    if (*(int *)(param_3 + 0x24) != *(int *)(param_3 + 0x28)) {
        *(undefined4 *)(param_3 + 0x38) = 2;
        return;
    }
    *(uint *)(param_3 + 0x38) = (uint)(*(int *)(param_3 + 0x24) != 0x10000);
    return;
}



void FUN_140872880(undefined8 param_1,float param_2,longlong param_3)

{
    undefined4 uVar1;
    float fVar2;

    if ((*(char *)(param_3 + 0x47) != '\0') || (param_2 != *(float *)(param_3 + 0x40))) {
        fVar2 = -2400.0;
        if ((param_2 <= -2400.0) || (fVar2 = 2400.0, 2400.0 <= param_2)) {
            param_2 = fVar2;
        }
        fVar2 = (float)FUN_1408fbfc0(0x40000000,param_2 * 0.0008333334);
        *(float *)(param_3 + 0x40) = param_2;
        *(undefined4 *)(param_3 + 0x2c) = 0x400;
        *(undefined *)(param_3 + 0x47) = 0;
        uVar1 = (undefined4)(longlong)(fVar2 * *(float *)(param_3 + 0x3c) * 65536.0 + 0.5);
        *(undefined4 *)(param_3 + 0x24) = uVar1;
        *(undefined4 *)(param_3 + 0x28) = uVar1;
    }
    return;
}



void FUN_140872910(short *param_1,uint *param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
    byte bVar1;
    short sVar2;
    bool bVar3;
    char cVar4;
    uint uVar5;
    float *pfVar6;
    short *psVar7;
    ulonglong uVar8;
    float fVar9;
    float local_38 [12];

    bVar1 = *(byte *)(param_1 + 0x22);
    if (bVar1 < 4) {
        if (*(byte *)((longlong)param_1 + 0x45) != 0) {
            uVar8 = (ulonglong)*(byte *)((longlong)param_1 + 0x45);
            pfVar6 = local_38;
            psVar7 = param_1;
            do {
                sVar2 = *psVar7;
                psVar7 = psVar7 + 1;
                *pfVar6 = (float)(int)sVar2 * 3.051758e-05;
                uVar8 = uVar8 - 1;
                pfVar6 = pfVar6 + 1;
            } while (uVar8 != 0);
        }
    }
    else if (((byte)(bVar1 - 4) < 4) && (*(byte *)((longlong)param_1 + 0x45) != 0)) {
        FUN_1407db590(local_38,param_1,(ulonglong)*(byte *)((longlong)param_1 + 0x45) << 2);
    }
    if (((*(int *)(param_1 + 0x1c) == 0) && (2 < *(byte *)((longlong)param_1 + 0x45))) &&
        (3 < (byte)(bVar1 - 4))) {
        bVar3 = true;
    }
    else {
        bVar3 = false;
    }
    if ((float)(ulonglong)*param_2 / (float)(ulonglong)param_5 != *(float *)(param_1 + 0x1e)) {
        *(float *)(param_1 + 0x1e) = (float)(ulonglong)*param_2 / (float)(ulonglong)param_5;
        *(undefined *)((longlong)param_1 + 0x47) = 1;
    }
    FUN_140872760(param_1);
    uVar5 = param_2[1] >> 0x12 & 0x3f;
    if (uVar5 == 0x10) {
        cVar4 = *(char *)((longlong)param_1 + 0x45);
        if (cVar4 == '\x01') {
            cVar4 = '\0';
        }
        else if (cVar4 == '\x02') {
            cVar4 = '\x01';
        }
        else {
            cVar4 = (1 < (byte)(cVar4 - 3U)) + '\x02';
        }
    }
    else if (uVar5 == 0x20) {
        cVar4 = *(char *)((longlong)param_1 + 0x45);
        if (cVar4 == '\x01') {
            cVar4 = '\x04';
        }
        else if (cVar4 == '\x02') {
            cVar4 = '\x05';
        }
        else {
            cVar4 = (1 < (byte)(cVar4 - 3U)) + '\x06';
        }
    }
    else {
        cVar4 = -1;
    }
    *(char *)(param_1 + 0x22) = cVar4;
    if (((*(int *)(param_1 + 0x1c) == 0) && (2 < *(byte *)((longlong)param_1 + 0x45))) &&
        (3 < (byte)(cVar4 - 4U))) {
        if (!bVar3) {
            FUN_1408726a0(param_1);
        }
    }
    else if (bVar3) {
        FUN_140872430(param_1);
    }
    if (*(byte *)(param_1 + 0x22) < 4) {
        uVar8 = 0;
        if (*(char *)((longlong)param_1 + 0x45) != '\0') {
            do {
                fVar9 = local_38[uVar8] * 32767.0;
                if (32767.0 <= fVar9) {
                    LAB_140872aee:
                    fVar9 = 32767.0;
                }
                else if (-32768.0 < fVar9) {
                    if (32767.0 <= fVar9) goto LAB_140872aee;
                }
                else {
                    fVar9 = -32768.0;
                }
                param_1[uVar8] = (short)(int)fVar9;
                uVar5 = (int)uVar8 + 1;
                uVar8 = (ulonglong)uVar5;
            } while (uVar5 < *(byte *)((longlong)param_1 + 0x45));
        }
    }
    else if (((byte)(*(byte *)(param_1 + 0x22) - 4) < 4) &&
             (uVar8 = 0, *(char *)((longlong)param_1 + 0x45) != '\0')) {
        do {
            *(float *)(param_1 + uVar8 * 2) = local_38[uVar8];
            uVar5 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar5;
        } while (uVar5 < *(byte *)((longlong)param_1 + 0x45));
    }
    return;
}



void FUN_140872b20(longlong param_1,longlong param_2,uint param_3,int param_4)

{
    undefined8 uVar1;
    longlong lVar2;
    uint *puVar3;
    undefined8 *puVar4;
    ushort uVar5;
    uint uVar6;
    ulonglong uVar7;
    undefined8 *puVar8;
    undefined8 *puVar9;
    undefined8 *puVar10;
    undefined8 *puVar11;

    if (*(longlong *)(param_1 + 0x20) != 0) {
        uVar6 = 0;
        uVar5 = 0;
        if (*(ushort *)(param_1 + 0x18) != 0) {
            puVar3 = (uint *)(*(longlong *)(param_1 + 0x20) + 8);
            uVar7 = (ulonglong)*(ushort *)(param_1 + 0x18);
            do {
                if ((param_3 <= *puVar3) && (*puVar3 < param_3 + param_4)) {
                    uVar5 = uVar5 + 1;
                }
                puVar3 = puVar3 + 8;
                uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
            if (uVar5 != 0) {
                lVar2 = FUN_1408819f0(DAT_140c10f28,
                                      (longlong)(int)((uint)uVar5 + (uint)*(ushort *)(param_2 + 0x18)) << 5)
                ;
                if (lVar2 == 0) {
                    FUN_1408683d0(param_2);
                }
                else {
                    if (*(longlong *)(param_2 + 0x20) != 0) {
                        FUN_1407db590(lVar2);
                    }
                    puVar4 = *(undefined8 **)(param_1 + 0x20);
                    puVar10 = (undefined8 *)((ulonglong)*(ushort *)(param_2 + 0x18) * 0x20 + lVar2);
                    if (*(short *)(param_1 + 0x18) != 0) {
                        puVar8 = puVar10 + 2;
                        do {
                            puVar9 = puVar8;
                            puVar11 = puVar10;
                            if ((param_3 <= *(uint *)(puVar4 + 1)) && (*(uint *)(puVar4 + 1) < param_3 + param_4))
                            {
                                uVar1 = *puVar4;
                                *(undefined4 *)(puVar8 + -1) = 0;
                                puVar11 = puVar10 + 4;
                                *puVar10 = uVar1;
                                puVar9 = puVar8 + 4;
                                *puVar8 = puVar4[2];
                                puVar8[1] = puVar4[3];
                            }
                            uVar6 = uVar6 + 1;
                            puVar4 = puVar4 + 4;
                            puVar8 = puVar9;
                            puVar10 = puVar11;
                        } while (uVar6 < *(ushort *)(param_1 + 0x18));
                    }
                    FUN_1408683d0(param_2);
                    *(short *)(param_2 + 0x18) = *(short *)(param_2 + 0x18) + uVar5;
                    *(longlong *)(param_2 + 0x20) = lVar2;
                }
            }
        }
    }
    return;
}



undefined8
FUN_140872c70(longlong param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
              longlong param_5)

{
    longlong lVar1;
    longlong lVar2;

    *(undefined4 *)(param_1 + 0x30) = param_4;
    lVar2 = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined2 *)(param_1 + 0x2c) = 0;
    *(undefined *)(param_1 + 0x2e) = 0;
    *(longlong *)(param_1 + 0x10) = param_5;
    lVar1 = (**(code **)(**(longlong **)(*param_3 + 0x28) + 0x10))
            (*(longlong **)(*param_3 + 0x28),&PTR_PTR_FUN_140c10f70);
    *(longlong *)(param_1 + 0x20) = lVar1;
    if (lVar1 != 0) {
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*param_3 + 0x20);
        lVar1 = FUN_1408819f0(DAT_140c10f28,0x30);
        if (lVar1 != 0) {
            lVar2 = FUN_140862010(lVar1,param_5,param_4);
        }
        *(longlong *)(param_1 + 0x18) = lVar2;
        if (lVar2 != 0) {
            FUN_140857d10(*param_3,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_5 + 0xb0));
            return 1;
        }
    }
    return 2;
}
