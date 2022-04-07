//
// Created by flop on 04.04.22.
//
#include "../../include.h"

undefined8 FUN_140356160(longlong param_1)

{
    longlong lVar1;
    longlong *plVar2;

    lVar1 = *(longlong *)(param_1 + 0x13b0);
    while (lVar1 != 0) {
        if (*(longlong *)(lVar1 + 0x4a0) != 0) {
            FUN_140378110(lVar1);
            FUN_1403786a0(lVar1);
            if (*(undefined8 **)(lVar1 + 0x4a0) != (undefined8 *)0x0) {
                **(undefined8 **)(lVar1 + 0x4a0) = *(undefined8 *)(lVar1 + 0x4a8);
            }
            if (*(longlong *)(lVar1 + 0x4a8) != 0) {
                *(undefined8 *)(*(longlong *)(lVar1 + 0x4a8) + 0x4a0) = *(undefined8 *)(lVar1 + 0x4a0);
            }
            *(undefined8 *)(lVar1 + 0x4a0) = 0;
            *(undefined8 *)(lVar1 + 0x4a8) = 0;
        }
        lVar1 = *(longlong *)(param_1 + 0x13b0);
    }
    lVar1 = *(longlong *)(param_1 + 0x1490);
    while (lVar1 != 0) {
        if (*(longlong *)(lVar1 + 0x410) != 0) {
            FUN_14038bdb0(lVar1);
            FUN_14038c060(lVar1);
            if (*(undefined8 **)(lVar1 + 0x410) != (undefined8 *)0x0) {
                **(undefined8 **)(lVar1 + 0x410) = *(undefined8 *)(lVar1 + 0x418);
            }
            if (*(longlong *)(lVar1 + 0x418) != 0) {
                *(undefined8 *)(*(longlong *)(lVar1 + 0x418) + 0x410) = *(undefined8 *)(lVar1 + 0x410);
            }
            *(undefined8 *)(lVar1 + 0x410) = 0;
            *(undefined8 *)(lVar1 + 0x418) = 0;
        }
        lVar1 = *(longlong *)(param_1 + 0x1490);
    }
    lVar1 = *(longlong *)(param_1 + 0x14e8);
    while (lVar1 != 0) {
        FUN_14038dc80(lVar1);
        lVar1 = *(longlong *)(param_1 + 0x14e8);
    }
    lVar1 = *(longlong *)(param_1 + 0x1500);
    while (lVar1 != 0) {
        FUN_14038e9a0(lVar1);
        lVar1 = *(longlong *)(param_1 + 0x1500);
    }
    plVar2 = *(longlong **)(param_1 + 0x1568);
    while (plVar2 != (longlong *)0x0) {
        (**(code **)*plVar2)(plVar2);
        FUN_14037aa70(plVar2);
        *(undefined4 *)((longlong)plVar2 + 0xc) = 0;
        if (*(float *)(plVar2 + 10) < *(float *)((longlong)plVar2 + 0x44) ||
            *(float *)(plVar2 + 10) == *(float *)((longlong)plVar2 + 0x44)) {
            *(undefined4 *)((longlong)plVar2 + 0xc) = 1;
        }
        if (*(float *)((longlong)plVar2 + 0x34) <= *(float *)((longlong)plVar2 + 0x54)) {
            *(uint *)((longlong)plVar2 + 0xc) = *(uint *)((longlong)plVar2 + 0xc) | 2;
        }
        if ((longlong *)plVar2[0xd] != (longlong *)0x0) {
            *(longlong *)plVar2[0xd] = plVar2[0xe];
        }
        if (plVar2[0xe] != 0) {
            *(longlong *)(plVar2[0xe] + 0x68) = plVar2[0xd];
        }
        plVar2[0xd] = 0;
        plVar2[0xe] = 0;
        (**(code **)(*plVar2 + 8))(plVar2);
        plVar2 = *(longlong **)(param_1 + 0x1568);
    }
    return 0;
}



undefined8 FUN_140356330(longlong param_1)

{
    longlong *plVar1;
    longlong *plVar2;

    plVar1 = *(longlong **)(param_1 + 0x1498);
    while (plVar2 = plVar1, plVar2 != (longlong *)0x0) {
        plVar1 = (longlong *)plVar2[0x85];
        if (-1 < *(int *)(param_1 + 0x370) - *(int *)((longlong)plVar2 + 0xfc)) {
            if ((longlong **)plVar2[0x84] != (longlong **)0x0) {
                *(longlong **)plVar2[0x84] = plVar1;
            }
            if (plVar2[0x85] != 0) {
                *(longlong *)(plVar2[0x85] + 0x420) = plVar2[0x84];
            }
            plVar2[0x84] = 0;
            plVar2[0x85] = 0;
            (**(code **)(*plVar2 + 8))();
        }
    }
    return 0;
}



undefined8 FUN_1403563c0(longlong param_1)

{
    uint uVar1;
    ulonglong uVar2;
    longlong lVar3;
    float fVar4;
    float fVar5;

    if (*(int *)(param_1 + 0x648) == 0) {
        fVar4 = *(float *)(param_1 + 0x3a0) - *(float *)(param_1 + 0x390);
        fVar5 = *(float *)(param_1 + 0x3a4) - *(float *)(param_1 + 0x394);
        if (1024.0 < fVar4 * fVar4 + fVar5 * fVar5 + 0.0) {
            uVar1 = *(int *)(param_1 + 0x8a0) * *(int *)(param_1 + 0x89c);
            if (uVar1 != 0) {
                lVar3 = 0;
                uVar2 = (ulonglong)uVar1;
                do {
                    if (*(longlong *)(lVar3 + *(longlong *)(param_1 + 0x8e0)) != 0) {
                        FUN_14037d540();
                    }
                    lVar3 = lVar3 + 8;
                    uVar2 = uVar2 - 1;
                } while (uVar2 != 0);
            }
            for (lVar3 = *(longlong *)(param_1 + 0x13a8); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x498)
                    ) {
                FUN_1403788a0(lVar3);
            }
            for (lVar3 = *(longlong *)(param_1 + 0x1480); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x3f8)
                    ) {
                FUN_14038c1c0(lVar3);
            }
            *(undefined4 *)(param_1 + 0x3a0) = *(undefined4 *)(param_1 + 0x390);
            *(undefined4 *)(param_1 + 0x3a4) = *(undefined4 *)(param_1 + 0x394);
            *(undefined4 *)(param_1 + 0x3a8) = *(undefined4 *)(param_1 + 0x398);
            *(undefined4 *)(param_1 + 0x3ac) = *(undefined4 *)(param_1 + 0x39c);
            *(int *)(param_1 + 0x3b0) = *(int *)(param_1 + 0x370) + 0xfa;
            return 0;
        }
        lVar3 = *(longlong *)(param_1 + 0x928);
        while (lVar3 != 0) {
            FUN_14037d540(*(undefined8 *)(param_1 + 0x928));
            lVar3 = *(longlong *)(param_1 + 0x928);
        }
        lVar3 = *(longlong *)(param_1 + 0x13e0);
        while (lVar3 != 0) {
            FUN_1403788a0(*(undefined8 *)(param_1 + 0x13e0));
            lVar3 = *(longlong *)(param_1 + 0x13e0);
        }
        lVar3 = *(longlong *)(param_1 + 0x14c8);
        while (lVar3 != 0) {
            FUN_14038c1c0(*(undefined8 *)(param_1 + 0x14c8));
            lVar3 = *(longlong *)(param_1 + 0x14c8);
        }
        if (-1 < *(int *)(param_1 + 0x370) - *(int *)(param_1 + 0x3b0)) {
            *(undefined4 *)(param_1 + 0x3a0) = *(undefined4 *)(param_1 + 0x390);
            *(undefined4 *)(param_1 + 0x3a4) = *(undefined4 *)(param_1 + 0x394);
            *(undefined4 *)(param_1 + 0x3a8) = *(undefined4 *)(param_1 + 0x398);
            *(undefined4 *)(param_1 + 0x3ac) = *(undefined4 *)(param_1 + 0x39c);
            *(int *)(param_1 + 0x3b0) = *(int *)(param_1 + 0x370) + 0xfa;
        }
    }
    return 0;
}



// WARNING: Type propagation algorithm not settling

void FUN_140356560(longlong *param_1,int param_2)

{
    longlong *plVar1;
    int iVar2;
    undefined8 *puVar3;
    longlong lVar4;
    longlong **pplVar5;
    uint uVar6;
    longlong lVar8;
    undefined8 *puVar9;
    longlong **pplVar10;
    longlong lVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    longlong *aplStack3016 [313];
    undefined8 uStack512;
    undefined auStack504 [32];
    undefined4 *local_1d8;
    undefined4 local_1d0;
    longlong local_1c8;
    longlong *local_1c0;
    int local_1b8;
    undefined8 local_1a8 [4];
    undefined4 local_188;
    float local_184;
    float local_180;
    undefined4 local_178;
    undefined4 local_174;
    undefined4 local_170;
    undefined local_168 [176];
    float afStack184 [8];
    undefined8 local_98;
    undefined8 local_90;
    undefined8 local_88;
    undefined8 local_80;
    ulonglong local_78;
    ulonglong uVar7;

    local_78 = DAT_140c0f7b0 ^ (ulonglong)auStack504;
    if ((*(byte *)(param_1 + 0x1d) & 1) != 0) {
        fVar14 = 0.0;
        if (param_2 == 0) {
            uStack512 = 0x1403565fd;
            local_180 = (float)FUN_1403726d0(param_1 + 0x14c,2);
            local_184 = fVar14;
        }
        else {
            if (((param_1[0x2a7] == 0) || (param_1[0x151] != 0)) || (param_1[0x152] != 0)) {
                uStack512 = 0x14035669a;
                local_180 = (float)FUN_1403726d0(param_1 + 0x14c,2);
                fVar12 = *(float *)((longlong)param_1 + 0xa7c);
                if (fVar12 == fVar14) {
                    uStack512 = 0x1403566ba;
                    fVar12 = (float)(**(code **)(*(longlong *)param_1[0x140] + 0x100))();
                }
                fVar12 = fVar12 * *(float *)((longlong)param_1 + 0x37c) + *(float *)(param_1 + 0x77);
                if (fVar12 <= local_180) {
                    local_180 = fVar12;
                }
                *(float *)(param_1 + 0x77) = local_180;
            }
            else {
                fVar12 = *(float *)((longlong)param_1 + 0xa7c);
                if (fVar12 == 0.0) {
                    uStack512 = 0x140356645;
                    fVar12 = (float)(**(code **)(*(longlong *)param_1[0x140] + 0x100))();
                }
                fVar13 = *(float *)(param_1 + 0x77) - fVar12 * *(float *)((longlong)param_1 + 0x37c);
                fVar12 = fVar14;
                if (fVar14 <= fVar13) {
                    fVar12 = fVar13;
                }
                *(float *)(param_1 + 0x77) = fVar12;
                if (fVar14 < fVar12) {
                    uStack512 = 0x14035667e;
                    FUN_1403726d0(param_1 + 0x14c,2);
                }
                local_180 = *(float *)(param_1 + 0x77);
            }
            if ((param_1[0x2a7] != 0) ||
                (local_184 = fVar14, fVar14 < *(float *)((longlong)param_1 + 0x3b4))) {
                uStack512 = 0x14035670f;
                local_184 = (float)FUN_1403726d0(param_1 + 0x148,1);
            }
        }
        uVar7 = 0;
        local_1d8 = (undefined4 *)0x0;
        uStack512 = 0x140356738;
        iVar2 = (**(code **)(*param_1 + 0x1b8))(param_1,param_1 + 0x6c,local_168,0x40018000);
        if (iVar2 == 0) {
            local_98 = 0;
            local_90 = 0;
        }
        puVar3 = local_1a8;
        puVar9 = &local_98;
        do {
            if (*(int *)puVar9 == 0) {
                LAB_140356777:
                *puVar3 = 0;
            }
            else {
                uStack512 = 0x140356773;
                iVar2 = FUN_1403543e0(param_1,*(int *)puVar9,param_1[0x140],
                                      (undefined4 *)((longlong)local_1a8 + uVar7 * 2 * 4));
                if (iVar2 < 0) goto LAB_140356777;
            }
            uVar6 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar6;
            puVar9 = (undefined8 *)((longlong)puVar9 + 4);
            puVar3 = puVar3 + 1;
        } while (uVar6 < 4);
        pplVar10 = (longlong **)(param_1 + 0x144);
        lVar8 = 4;
        lVar4 = 4;
        pplVar5 = pplVar10;
        do {
            if (*pplVar5 != (longlong *)0x0) {
                uStack512 = 0x1403567b2;
                (**(code **)(**pplVar5 + 8))();
                *pplVar5 = (longlong *)0x0;
            }
            *pplVar5 = *(longlong **)(((longlong)aplStack3016 - (longlong)param_1) + (longlong)pplVar5);
            lVar4 = lVar4 + -1;
            pplVar5 = pplVar5 + 1;
        } while (lVar4 != 0);
        lVar4 = 0;
        lVar11 = 4;
        local_88 = 0;
        local_80 = 0;
        pplVar5 = pplVar10;
        fVar12 = fVar14;
        do {
            if (*pplVar5 != (longlong *)0x0) {
                local_1a8[0]._0_4_ = 0;
                plVar1 = (longlong *)(*pplVar5)[5];
                if (plVar1 != (longlong *)0x0) {
                    uStack512 = 0x140356807;
                    iVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,local_1a8);
                    if (iVar2 == 0) goto LAB_14035681b;
                }
                *(float *)((longlong)&local_88 + lVar4) = *(float *)((longlong)afStack184 + lVar4);
                fVar14 = fVar14 + *(float *)((longlong)afStack184 + lVar4);
            }
            LAB_14035681b:
            pplVar5 = pplVar5 + 1;
            lVar4 = lVar4 + 4;
            lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
        if (fVar14 <= 1e-05) {
            plVar1 = *(longlong **)(param_1[0x142] + 0x28);
            if (plVar1 != (longlong *)0x0) {
                uStack512 = 0x140356894;
                (**(code **)(*plVar1 + 0x70))(plVar1,0);
            }
        }
        else {
            do {
                if ((*pplVar10 != (longlong *)0x0) &&
                    (plVar1 = (longlong *)(*pplVar10)[5], plVar1 != (longlong *)0x0)) {
                    uStack512 = 0x140356865;
                    (**(code **)(*plVar1 + 0x70))(plVar1,0);
                }
                pplVar10 = pplVar10 + 1;
                lVar8 = lVar8 + -1;
            } while (lVar8 != 0);
        }
        local_188 = 0x3f800000;
        if (param_2 == 0) {
            local_184 = 0.0;
        }
        else {
            if ((param_1[0x2a7] == 0) && (fVar12 < *(float *)((longlong)param_1 + 0x3b4))) {
                fVar14 = *(float *)((longlong)param_1 + 0xa5c);
                if (fVar14 == fVar12) {
                    uStack512 = 0x1403568f1;
                    fVar14 = (float)(**(code **)(*(longlong *)param_1[0x140] + 0x100))();
                }
                fVar14 = *(float *)((longlong)param_1 + 0x3b4) -
                         fVar14 * *(float *)((longlong)param_1 + 0x37c);
                local_184 = fVar12;
                if (fVar12 <= fVar14) {
                    local_184 = fVar14;
                }
            }
            if (local_184 < fVar12) {
                local_184 = fVar12;
            }
            *(float *)((longlong)param_1 + 0x3b4) = local_184;
        }
        local_178 = 0x3f800000;
        local_174 = 0x3f800000;
        if (param_1[0x149] == 0) {
            local_174 = 0;
        }
        local_170 = 0x3f800000;
        if (param_1[0x14d] == 0) {
            local_170 = 0;
        }
        local_1c0 = param_1 + 0x72;
        local_1c8 = (longlong)param_1 + 0x774;
        local_1b8 = 2 - (uint)(param_2 != 0);
        local_1d0 = *(undefined4 *)(param_1 + 0xc9);
        local_1d8 = &local_178;
        uStack512 = 0x1403569ee;
        iVar2 = (**(code **)(*(longlong *)param_1[0x140] + 0x38))
                ((longlong *)param_1[0x140],*(undefined4 *)(param_1 + 0x6e),
                 *(undefined4 *)(param_1 + 0x70),&local_188);
        if (-1 < iVar2) {
            *(undefined4 *)(param_1 + 0x14c) = 0;
            *(undefined8 *)((longlong)param_1 + 0xa7c) = 0;
            *(undefined4 *)((longlong)param_1 + 0xa9c) = 0;
        }
    }
    uStack512 = 0x140356a16;
    FUN_1407db4f0(local_78 ^ (ulonglong)auStack504);
    return;
}



undefined8 FUN_140356a30(longlong param_1)

{
    longlong **pplVar1;
    longlong **pplVar2;
    longlong *plVar3;
    float fVar4;
    int iVar5;
    longlong *plVar6;
    longlong *plVar7;
    int iVar8;
    longlong lVar9;
    longlong *plVar10;
    longlong lVar11;
    longlong lVar12;
    int iVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    undefined4 local_48 [12];

    if ((*(uint *)(param_1 + 0x80) & 0x800000) == 0) {
        fVar17 = 1.21;
        fVar16 = 0.0;
        for (plVar6 = *(longlong **)(param_1 + 0x1488); plVar6 != (longlong *)0x0;
             plVar6 = (longlong *)plVar6[0x81]) {
            lVar9 = (**(code **)(*plVar6 + 0x50))();
            fVar4 = *(float *)(lVar9 + 0x30);
            if (fVar4 != fVar16) {
                fVar14 = *(float *)(param_1 + 0x360) - *(float *)(lVar9 + 0x20);
                fVar15 = *(float *)(param_1 + 0x364) - *(float *)(lVar9 + 0x24);
                fVar14 = fVar14 * fVar14 + fVar15 * fVar15 + 0.0;
                if (fVar14 <= fVar4 * fVar4 * fVar17) {
                    if ((*(int *)(plVar6 + 0x1d) != 0) || (fVar4 * fVar4 < fVar14)) {
                        if ((longlong *)plVar6[4] != (longlong *)0x0) {
                            (**(code **)(*(longlong *)plVar6[4] + 0x160))();
                        }
                    }
                    else {
                        if ((longlong *)plVar6[4] != (longlong *)0x0) {
                            (**(code **)(*(longlong *)plVar6[4] + 0x160))();
                        }
                        plVar10 = (longlong *)(**(code **)(*plVar6 + 0x148))(plVar6);
                        if (plVar10 != (longlong *)0x0) {
                            (**(code **)(*plVar10 + 0x128))(plVar10);
                        }
                    }
                    pplVar1 = (longlong **)(param_1 + 0x14b0);
                    if (plVar6[0x8a] == 0) {
                        plVar6[0x8a] = (longlong)pplVar1;
                        pplVar2 = (longlong **)(plVar6 + 0x8b);
                        *pplVar2 = *pplVar1;
                        *pplVar1 = plVar6;
                        if (*pplVar2 != (longlong *)0x0) {
                            (*pplVar2)[0x8a] = (longlong)pplVar2;
                        }
                    }
                }
            }
        }
        iVar13 = (int)((*(float *)(param_1 + 0x360) * DAT_140c43fb8 + 0.5) * 2048.0);
        iVar8 = (int)((DAT_140c43fb8 * 0.0 + 0.5) * 2048.0);
        if ((((*(int *)(param_1 + 0x88c) <= iVar13) && (iVar13 < *(int *)(param_1 + 0x894))) &&
             (*(int *)(param_1 + 0x890) <= iVar8)) && (iVar8 < *(int *)(param_1 + 0x898))) {
            iVar5 = *(int *)(param_1 + 0x89c);
            iVar8 = iVar8 % *(int *)(param_1 + 0x8a0);
            lVar9 = *(longlong *)
                    (*(longlong *)(param_1 + 0x8e0) +
                     (ulonglong)
                             ((uint)(iVar13 % iVar5 < 0) * iVar5 +
                              ((uint)(iVar8 < 0) * *(int *)(param_1 + 0x8a0) + iVar8) * iVar5 + iVar13 % iVar5) * 8
                    );
            if ((lVar9 != 0) &&
                ((local_48[0] = 0, *(longlong *)(lVar9 + 0x5a8) == 0 ||
                                   (iVar8 = FUN_14037cc30(lVar9,local_48), iVar8 != 0)))) {
                for (lVar12 = *(longlong *)(*(longlong *)(lVar9 + 0x18) + 0x38); lVar12 != 0;
                     lVar12 = *(longlong *)(lVar12 + 0x18)) {
                    plVar6 = *(longlong **)(lVar12 + 8);
                    lVar11 = (**(code **)(*plVar6 + 0x50))(plVar6,3);
                    fVar4 = *(float *)(lVar11 + 0x30);
                    if (fVar4 != fVar16) {
                        fVar14 = *(float *)(param_1 + 0x360) - *(float *)(lVar11 + 0x20);
                        fVar15 = *(float *)(param_1 + 0x364) - *(float *)(lVar11 + 0x24);
                        fVar14 = fVar14 * fVar14 + fVar15 * fVar15 + 0.0;
                        if (fVar14 <= fVar4 * fVar4 * fVar17) {
                            if (fVar14 <= fVar4 * fVar4) {
                                if (*(int *)((longlong)plVar6 + 0x134) != 2) {
                                    (**(code **)(*(longlong *)plVar6[6] + 0xb8))((longlong *)plVar6[6],2);
                                    *(undefined4 *)((longlong)plVar6 + 0x134) = 2;
                                }
                                plVar10 = (longlong *)(**(code **)(*plVar6 + 0x150))(plVar6);
                                if (plVar10 != (longlong *)0x0) {
                                    (**(code **)(*plVar10 + 0x128))(plVar10,1);
                                }
                            }
                            else if (*(int *)((longlong)plVar6 + 0x134) != 1) {
                                (**(code **)(*(longlong *)plVar6[6] + 0xb8))((longlong *)plVar6[6],1);
                                *(undefined4 *)((longlong)plVar6 + 0x134) = 1;
                            }
                            pplVar1 = (longlong **)(param_1 + 0x13c0);
                            if (plVar6[0x9a] == 0) {
                                plVar6[0x9a] = (longlong)pplVar1;
                                pplVar2 = (longlong **)(plVar6 + 0x9b);
                                *pplVar2 = *pplVar1;
                                *pplVar1 = plVar6;
                                if (*pplVar2 != (longlong *)0x0) {
                                    (*pplVar2)[0x9a] = (longlong)pplVar2;
                                }
                            }
                        }
                    }
                }
                for (lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0x18) + 0x40); lVar9 != 0;
                     lVar9 = *(longlong *)(lVar9 + 0x18)) {
                    plVar6 = *(longlong **)(lVar9 + 8);
                    lVar12 = (**(code **)(*plVar6 + 0x50))(plVar6,3);
                    fVar4 = *(float *)(lVar12 + 0x30);
                    if (fVar4 != fVar16) {
                        fVar14 = *(float *)(param_1 + 0x360) - *(float *)(lVar12 + 0x20);
                        fVar15 = *(float *)(param_1 + 0x364) - *(float *)(lVar12 + 0x24);
                        fVar14 = fVar14 * fVar14 + fVar15 * fVar15 + 0.0;
                        if (fVar14 <= fVar4 * fVar4 * fVar17) {
                            if ((*(int *)(plVar6 + 0x1d) != 0) || (fVar4 * fVar4 < fVar14)) {
                                plVar10 = (longlong *)plVar6[4];
                                if (plVar10 != (longlong *)0x0) {
                                    (**(code **)(*plVar10 + 0x160))(plVar10,0);
                                }
                            }
                            else {
                                plVar10 = (longlong *)plVar6[4];
                                if (plVar10 != (longlong *)0x0) {
                                    (**(code **)(*plVar10 + 0x160))(plVar10,1);
                                }
                                plVar10 = (longlong *)(**(code **)(*plVar6 + 0x148))(plVar6);
                                if (plVar10 != (longlong *)0x0) {
                                    (**(code **)(*plVar10 + 0x128))(plVar10,1);
                                }
                            }
                            pplVar1 = (longlong **)(param_1 + 0x14b0);
                            if (plVar6[0x8a] == 0) {
                                plVar6[0x8a] = (longlong)pplVar1;
                                pplVar2 = (longlong **)(plVar6 + 0x8b);
                                *pplVar2 = *pplVar1;
                                *pplVar1 = plVar6;
                                if (*pplVar2 != (longlong *)0x0) {
                                    (*pplVar2)[0x8a] = (longlong)pplVar2;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    plVar6 = (longlong *)(param_1 + 0x13b8);
    lVar9 = *plVar6;
    while (lVar12 = lVar9, lVar12 != 0) {
        plVar10 = (longlong *)(lVar12 + 0x4c8);
        lVar9 = *plVar10;
        if (*(undefined8 **)(lVar12 + 0x4d0) == (undefined8 *)0x0) {
            if (*(longlong **)(lVar12 + 0x4c0) != (longlong *)0x0) {
                **(longlong **)(lVar12 + 0x4c0) = lVar9;
            }
            if (*plVar10 != 0) {
                *(undefined8 *)(*plVar10 + 0x4c0) = *(undefined8 *)(lVar12 + 0x4c0);
            }
            *(undefined8 *)(lVar12 + 0x4c0) = 0;
            *plVar10 = 0;
            if (*(int *)(lVar12 + 0x134) != 0) {
                (**(code **)(**(longlong **)(lVar12 + 0x30) + 0xb8))(*(longlong **)(lVar12 + 0x30),0);
                *(undefined4 *)(lVar12 + 0x134) = 0;
            }
        }
        else {
            **(undefined8 **)(lVar12 + 0x4d0) = *(undefined8 *)(lVar12 + 0x4d8);
            if (*(longlong *)(lVar12 + 0x4d8) != 0) {
                *(undefined8 *)(*(longlong *)(lVar12 + 0x4d8) + 0x4d0) = *(undefined8 *)(lVar12 + 0x4d0);
            }
            *(undefined8 *)(lVar12 + 0x4d0) = 0;
            *(undefined8 *)(lVar12 + 0x4d8) = 0;
        }
    }
    plVar10 = (longlong *)(param_1 + 0x14a0);
    lVar9 = *plVar10;
    while (lVar9 != 0) {
        plVar3 = (longlong *)(lVar9 + 0x438);
        lVar12 = *plVar3;
        if (*(undefined8 **)(lVar9 + 0x450) == (undefined8 *)0x0) {
            if (*(longlong **)(lVar9 + 0x430) != (longlong *)0x0) {
                **(longlong **)(lVar9 + 0x430) = lVar12;
            }
            if (*plVar3 != 0) {
                *(undefined8 *)(*plVar3 + 0x430) = *(undefined8 *)(lVar9 + 0x430);
            }
            *(undefined8 *)(lVar9 + 0x430) = 0;
            plVar7 = *(longlong **)(lVar9 + 0x20);
            *plVar3 = 0;
            lVar9 = lVar12;
            if (plVar7 != (longlong *)0x0) {
                (**(code **)(*plVar7 + 0x160))(plVar7,0);
            }
        }
        else {
            **(undefined8 **)(lVar9 + 0x450) = *(undefined8 *)(lVar9 + 0x458);
            if (*(longlong *)(lVar9 + 0x458) != 0) {
                *(undefined8 *)(*(longlong *)(lVar9 + 0x458) + 0x450) = *(undefined8 *)(lVar9 + 0x450);
            }
            *(undefined8 *)(lVar9 + 0x450) = 0;
            *(undefined8 *)(lVar9 + 0x458) = 0;
            lVar9 = lVar12;
        }
    }
    lVar9 = *(longlong *)(param_1 + 0x13c0);
    while (lVar9 != 0) {
        if (*(undefined8 **)(lVar9 + 0x4d0) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar9 + 0x4d0) = *(undefined8 *)(lVar9 + 0x4d8);
        }
        if (*(longlong *)(lVar9 + 0x4d8) != 0) {
            *(undefined8 *)(*(longlong *)(lVar9 + 0x4d8) + 0x4d0) = *(undefined8 *)(lVar9 + 0x4d0);
        }
        *(undefined8 *)(lVar9 + 0x4d0) = 0;
        *(undefined8 *)(lVar9 + 0x4d8) = 0;
        if (*(longlong *)(lVar9 + 0x4c0) == 0) {
            *(longlong **)(lVar9 + 0x4c0) = plVar6;
            plVar3 = (longlong *)(lVar9 + 0x4c8);
            *plVar3 = *plVar6;
            *plVar6 = lVar9;
            if (*plVar3 != 0) {
                *(longlong **)(*plVar3 + 0x4c0) = plVar3;
            }
        }
        lVar9 = *(longlong *)(param_1 + 0x13c0);
    }
    lVar9 = *(longlong *)(param_1 + 0x14b0);
    while (lVar9 != 0) {
        if (*(undefined8 **)(lVar9 + 0x450) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar9 + 0x450) = *(undefined8 *)(lVar9 + 0x458);
        }
        if (*(longlong *)(lVar9 + 0x458) != 0) {
            *(undefined8 *)(*(longlong *)(lVar9 + 0x458) + 0x450) = *(undefined8 *)(lVar9 + 0x450);
        }
        *(undefined8 *)(lVar9 + 0x450) = 0;
        *(undefined8 *)(lVar9 + 0x458) = 0;
        if (*(longlong *)(lVar9 + 0x430) == 0) {
            *(longlong **)(lVar9 + 0x430) = plVar10;
            plVar6 = (longlong *)(lVar9 + 0x438);
            *plVar6 = *plVar10;
            *plVar10 = lVar9;
            if (*plVar6 != 0) {
                *(longlong **)(*plVar6 + 0x430) = plVar6;
            }
        }
        lVar9 = *(longlong *)(param_1 + 0x14b0);
    }
    return 0;
}



int FUN_140357140(longlong param_1)

{
    longlong *plVar1;
    int iVar2;
    longlong *local_res8;
    longlong *local_res10;

    if ((*(uint *)(param_1 + 0xe8) & 0x20001) != 0x20001) {
        return 0;
    }
    local_res8 = (longlong *)0x0;
    local_res10 = (longlong *)0x0;
    iVar2 = (**(code **)(*DAT_140c65670 + 0x58))
            (DAT_140c65670,*(undefined4 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb0),1
                    ,0x18,5,0,0,0,&local_res8);
    if ((-1 < iVar2) &&
        (iVar2 = (**(code **)(*DAT_140c65670 + 0x58))
                (DAT_140c65670,*(undefined4 *)(param_1 + 0xb0),
                 *(undefined4 *)(param_1 + 0xb0),1,0x15,5,1,0,0,&local_res10), -1 < iVar2))
    {
        if (*(longlong **)(param_1 + 0x1570) != local_res8) {
            if (local_res8 != (longlong *)0x0) {
                (**(code **)*local_res8)();
            }
            plVar1 = *(longlong **)(param_1 + 0x1570);
            if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 8))(plVar1);
            }
            *(longlong **)(param_1 + 0x1570) = local_res8;
        }
        if (*(longlong **)(param_1 + 0x1578) != local_res10) {
            if (local_res10 != (longlong *)0x0) {
                (**(code **)*local_res10)(local_res10);
            }
            plVar1 = *(longlong **)(param_1 + 0x1578);
            if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 8))(plVar1);
            }
            *(longlong **)(param_1 + 0x1578) = local_res10;
        }
        if (local_res10 != (longlong *)0x0) {
            (**(code **)(*local_res10 + 8))(local_res10);
        }
        if (local_res8 == (longlong *)0x0) {
            return 0;
        }
        (**(code **)(*local_res8 + 8))();
        return 0;
    }
    if (local_res10 != (longlong *)0x0) {
        (**(code **)(*local_res10 + 8))();
    }
    if (local_res8 != (longlong *)0x0) {
        (**(code **)(*local_res8 + 8))();
    }
    return iVar2;
}



int FUN_140357300(longlong param_1)

{
    longlong *plVar1;
    uint uVar2;
    int iVar3;
    undefined4 in_XMM6_Da;
    float fVar4;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined4 in_XMM7_Da;
    float fVar5;
    undefined4 in_XMM7_Db;
    undefined4 in_XMM7_Dc;
    undefined4 in_XMM7_Dd;
    longlong *local_res8;
    longlong *local_res10;
    longlong *local_res18;

    if ((*(uint *)(param_1 + 0xe8) & 0x4800) != 0) {
        fVar5 = 1.0;
        local_res18 = (longlong *)0x0;
        local_res8 = (longlong *)0x0;
        local_res10 = (longlong *)0x0;
        if (*(float *)(param_1 + 0x94) == 0.0) {
            fVar4 = 1.0;
        }
        else {
            fVar4 = *(float *)(param_1 + 0x94) * 2.0;
        }
        uVar2 = (int)(longlong)fVar4 * 2;
        iVar3 = (**(code **)(*DAT_140c65670 + 0x58))
                (DAT_140c65670,uVar2,uVar2,1,0x12,5,1,0x15,0,&local_res18,
                 CONCAT412(in_XMM7_Dd,CONCAT48(in_XMM7_Dc,CONCAT44(in_XMM7_Db,in_XMM7_Da))),
                 CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da))));
        if (((iVar3 < 0) ||
             (iVar3 = (**(code **)(*DAT_140c65670 + 0x58))
                     (DAT_140c65670,uVar2,uVar2,1,0x12,3,1,0x15,0,&local_res8), iVar3 < 0)) ||
            (iVar3 = (**(code **)(*DAT_140c65670 + 0x58))
                    (DAT_140c65670,uVar2,uVar2,1,0x12,3,1,0x15,0,&local_res10), iVar3 < 0)) {
            if (local_res10 != (longlong *)0x0) {
                (**(code **)(*local_res10 + 8))();
            }
            if (local_res8 != (longlong *)0x0) {
                (**(code **)(*local_res8 + 8))();
            }
            if (local_res18 == (longlong *)0x0) {
                return iVar3;
            }
            (**(code **)(*local_res18 + 8))();
            return iVar3;
        }
        *(float *)(param_1 + 0x1580) = fVar4;
        *(uint *)(param_1 + 0x1588) = uVar2;
        *(float *)(param_1 + 0x1594) = fVar4 * 1.525879e-05;
        *(float *)(param_1 + 0x1584) = fVar5 / fVar4;
        *(float *)(param_1 + 0x1590) = (fVar5 / fVar4) * 65536.0;
        *(float *)(param_1 + 0x158c) = fVar5 / (float)(ulonglong)uVar2;
        if (*(longlong **)(param_1 + 0x1598) != local_res18) {
            if (local_res18 != (longlong *)0x0) {
                (**(code **)*local_res18)();
            }
            if (*(longlong **)(param_1 + 0x1598) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(param_1 + 0x1598) + 8))();
            }
            *(longlong **)(param_1 + 0x1598) = local_res18;
        }
        if (*(longlong **)(param_1 + 0x15a0) != local_res8) {
            if (local_res8 != (longlong *)0x0) {
                (**(code **)*local_res8)();
            }
            plVar1 = *(longlong **)(param_1 + 0x15a0);
            if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 8))(plVar1);
            }
            *(longlong **)(param_1 + 0x15a0) = local_res8;
        }
        if (*(longlong **)(param_1 + 0x15a8) != local_res10) {
            if (local_res10 != (longlong *)0x0) {
                (**(code **)*local_res10)(local_res10);
            }
            plVar1 = *(longlong **)(param_1 + 0x15a8);
            if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 8))(plVar1);
            }
            *(longlong **)(param_1 + 0x15a8) = local_res10;
        }
        if (local_res10 != (longlong *)0x0) {
            (**(code **)(*local_res10 + 8))(local_res10);
        }
        if (local_res8 != (longlong *)0x0) {
            (**(code **)(*local_res8 + 8))();
        }
        if (local_res18 != (longlong *)0x0) {
            (**(code **)(*local_res18 + 8))();
        }
    }
    return 0;
}



int FUN_140357620(longlong param_1)

{
    longlong *plVar1;
    int iVar2;
    longlong *local_res8;
    longlong *local_res10;

    if ((*(byte *)(param_1 + 0x80) & 0x10) == 0) {
        return 0;
    }
    local_res8 = (longlong *)0x0;
    local_res10 = (longlong *)0x0;
    iVar2 = (**(code **)(*DAT_140c65670 + 0x58))
            (DAT_140c65670,*(undefined4 *)(param_1 + 0xac),*(undefined4 *)(param_1 + 0xac),0
                    ,0,5,2,0x95,0,&local_res8);
    if ((-1 < iVar2) &&
        (iVar2 = (**(code **)(*DAT_140c65670 + 0x58))
                (DAT_140c65670,*(undefined4 *)(param_1 + 0xac),
                 *(undefined4 *)(param_1 + 0xac),0,0,5,2,0x95,0,&local_res10), -1 < iVar2))
    {
        if (*(longlong **)(&DAT_000015b0 + param_1) != local_res8) {
            if (local_res8 != (longlong *)0x0) {
                (**(code **)*local_res8)();
            }
            plVar1 = *(longlong **)(&DAT_000015b0 + param_1);
            if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 8))(plVar1);
            }
            *(longlong **)(&DAT_000015b0 + param_1) = local_res8;
        }
        if (*(longlong **)(param_1 + 0x15b8) != local_res10) {
            if (local_res10 != (longlong *)0x0) {
                (**(code **)*local_res10)(local_res10);
            }
            plVar1 = *(longlong **)(param_1 + 0x15b8);
            if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 8))(plVar1);
            }
            *(longlong **)(param_1 + 0x15b8) = local_res10;
        }
        if (local_res10 != (longlong *)0x0) {
            (**(code **)(*local_res10 + 8))(local_res10);
        }
        if (local_res8 == (longlong *)0x0) {
            return 0;
        }
        (**(code **)(*local_res8 + 8))();
        return 0;
    }
    if (local_res10 != (longlong *)0x0) {
        (**(code **)(*local_res10 + 8))();
    }
    if (local_res8 != (longlong *)0x0) {
        (**(code **)(*local_res8 + 8))();
    }
    return iVar2;
}



longlong FUN_1403577d0(longlong param_1,float *param_2)

{
    longlong *plVar1;
    longlong *plVar2;
    int iVar3;
    longlong lVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    uint uVar8;
    undefined8 in_RAX;
    int iVar9;
    int iVar10;
    longlong lVar11;
    int iVar12;
    undefined auVar13 [16];
    undefined auVar14 [16];
    float fVar15;
    undefined auVar17 [16];
    undefined auVar16 [16];

    uVar8 = (uint)in_RAX;
    plVar1 = (longlong *)(param_1 + 0x918);
    lVar11 = 0;
    lVar4 = *plVar1;
    while (lVar4 != 0) {
        if (*(undefined8 **)(lVar4 + 0x578) != (undefined8 *)0x0) {
            in_RAX = *(undefined8 *)(lVar4 + 0x580);
            **(undefined8 **)(lVar4 + 0x578) = in_RAX;
        }
        if (*(longlong *)(lVar4 + 0x580) != 0) {
            in_RAX = *(undefined8 *)(lVar4 + 0x578);
            *(undefined8 *)(*(longlong *)(lVar4 + 0x580) + 0x578) = in_RAX;
        }
        uVar8 = (uint)in_RAX;
        *(undefined8 *)(lVar4 + 0x578) = 0;
        *(undefined8 *)(lVar4 + 0x580) = 0;
        lVar4 = *plVar1;
    }
    fVar15 = (DAT_140c43fb8 * *param_2 + 0.5) * 2048.0;
    auVar16 = ZEXT416((uint)fVar15) & (undefined  [16])0xffffffffffffffff;
    iVar9 = (int)fVar15;
    if ((iVar9 != -0x80000000) && ((float)iVar9 != fVar15)) {
        uVar8 = movmskps(uVar8,ZEXT816(SUB168(auVar16,0) | SUB168(auVar16,0) << 0x20));
        uVar8 = uVar8 & 1;
        auVar16 = ZEXT416((uint)(float)(iVar9 - uVar8));
    }
    auVar13 = ZEXT416((uint)(DAT_140c43fb8 * param_2[2])) & (undefined  [16])0xffffffffffffffff;
    fVar15 = (SUB164(auVar13,0) + 0.5) * 2048.0;
    auVar17 = CONCAT124(SUB1612(auVar13 >> 0x20,0),fVar15);
    iVar9 = (int)fVar15;
    if ((iVar9 != -0x80000000) && ((float)iVar9 != fVar15)) {
        uVar8 = movmskps(uVar8,CONCAT88(SUB168(auVar13 >> 0x40,0),
                                        SUB168(auVar17,0) | SUB168(auVar17,0) << 0x20) &
                               (undefined  [16])0xffffffffffffffff);
        uVar8 = uVar8 & 1;
        auVar17 = ZEXT416((uint)(float)(iVar9 - uVar8));
    }
    auVar13 = ZEXT416((uint)(DAT_140c43fb8 * param_2[4])) & (undefined  [16])0xffffffffffffffff;
    fVar15 = (SUB164(auVar13,0) + 0.5) * 2048.0;
    auVar14 = CONCAT124(SUB1612(auVar13 >> 0x20,0),fVar15);
    iVar9 = (int)fVar15;
    if ((iVar9 != -0x80000000) && ((float)iVar9 != fVar15)) {
        uVar8 = movmskps(uVar8,CONCAT88(SUB168(auVar13 >> 0x40,0),
                                        SUB168(auVar14,0) | SUB168(auVar14,0) << 0x20) &
                               (undefined  [16])0xffffffffffffffff);
        uVar8 = uVar8 & 1;
        auVar14 = ZEXT416((uint)(float)(iVar9 - uVar8));
    }
    auVar13 = ZEXT416((uint)(DAT_140c43fb8 * param_2[6])) & (undefined  [16])0xffffffffffffffff;
    iVar9 = (int)SUB164(auVar14,0) + 1;
    fVar15 = (SUB164(auVar13,0) + 0.5) * 2048.0;
    auVar14 = CONCAT124(SUB1612(auVar13 >> 0x20,0),fVar15);
    iVar10 = (int)fVar15;
    if ((iVar10 != -0x80000000) && ((float)iVar10 != fVar15)) {
        uVar8 = movmskps(uVar8,CONCAT88(SUB168(auVar13 >> 0x40,0),
                                        SUB168(auVar14,0) | SUB168(auVar14,0) << 0x20) &
                               (undefined  [16])0xffffffffffffffff);
        auVar14 = ZEXT416((uint)(float)(iVar10 - (uVar8 & 1)));
    }
    iVar10 = (int)SUB164(auVar14,0) + 1;
    if (*(int *)(param_1 + 0x8d8) < iVar9) {
        iVar9 = *(int *)(param_1 + 0x8d8);
    }
    if (*(int *)(param_1 + 0x8dc) < iVar10) {
        iVar10 = *(int *)(param_1 + 0x8dc);
    }
    iVar5 = (int)SUB164(auVar16,0);
    if ((int)SUB164(auVar16,0) < *(int *)(param_1 + 0x8d0)) {
        iVar5 = *(int *)(param_1 + 0x8d0);
    }
    iVar12 = (int)SUB164(auVar17,0);
    if ((int)SUB164(auVar17,0) < *(int *)(param_1 + 0x8d4)) {
        iVar12 = *(int *)(param_1 + 0x8d4);
    }
    if ((iVar5 < iVar9) && (iVar7 = iVar5, iVar12 < iVar10)) {
        do {
            for (; iVar7 < iVar9; iVar7 = iVar7 + 1) {
                iVar3 = *(int *)(param_1 + 0x89c);
                iVar6 = iVar12 % *(int *)(param_1 + 0x8a0);
                lVar4 = *(longlong *)
                        (*(longlong *)(param_1 + 0x8e0) +
                         (ulonglong)
                                 ((uint)(iVar7 % iVar3 < 0) * iVar3 +
                                  ((uint)(iVar6 < 0) * *(int *)(param_1 + 0x8a0) + iVar6) * iVar3 + iVar7 % iVar3) *
                         8);
                if (lVar4 != 0) {
                    if (*(longlong *)(lVar4 + 0x578) == 0) {
                        *(longlong **)(lVar4 + 0x578) = plVar1;
                        plVar2 = (longlong *)(lVar4 + 0x580);
                        *plVar2 = *plVar1;
                        *plVar1 = lVar4;
                        if (*plVar2 != 0) {
                            *(longlong **)(*plVar2 + 0x578) = plVar2;
                        }
                    }
                    lVar11 = lVar11 + 1;
                }
            }
            iVar12 = iVar12 + 1;
            iVar7 = iVar5;
        } while (iVar12 < iVar10);
    }
    else {
        lVar11 = 0;
    }
    return lVar11;
}



longlong FUN_140357aa0(longlong param_1,undefined (*param_2) [16])

{
    longlong *plVar1;
    longlong *plVar2;
    int iVar3;
    longlong lVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    uint uVar8;
    undefined8 in_RAX;
    longlong lVar9;
    int iVar10;
    int iVar11;
    longlong lVar12;
    int iVar13;
    undefined auVar14 [16];
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar21;
    undefined auVar20 [16];
    undefined auVar18 [16];
    undefined auVar19 [16];

    uVar8 = (uint)in_RAX;
    fVar16 = *(float *)*param_2;
    fVar21 = *(float *)(*param_2 + 8);
    fVar17 = *(float *)param_2[1];
    plVar1 = (longlong *)(param_1 + 0x918);
    lVar12 = 0;
    lVar4 = *plVar1;
    while (lVar4 != 0) {
        if (*(undefined8 **)(lVar4 + 0x578) != (undefined8 *)0x0) {
            in_RAX = *(undefined8 *)(lVar4 + 0x580);
            **(undefined8 **)(lVar4 + 0x578) = in_RAX;
        }
        if (*(longlong *)(lVar4 + 0x580) != 0) {
            in_RAX = *(undefined8 *)(lVar4 + 0x578);
            *(undefined8 *)(*(longlong *)(lVar4 + 0x580) + 0x578) = in_RAX;
        }
        uVar8 = (uint)in_RAX;
        *(undefined8 *)(lVar4 + 0x578) = 0;
        *(undefined8 *)(lVar4 + 0x580) = 0;
        lVar4 = *plVar1;
    }
    auVar14 = ZEXT416((uint)((fVar16 - fVar17) * DAT_140c43fb8)) & (undefined  [16])0xffffffffffffffff
            ;
    fVar15 = (SUB164(auVar14,0) + 0.5) * 2048.0;
    auVar18 = CONCAT124(SUB1612(auVar14 >> 0x20,0),fVar15);
    iVar10 = (int)fVar15;
    if ((iVar10 != -0x80000000) && ((float)iVar10 != fVar15)) {
        uVar8 = movmskps(uVar8,CONCAT88(SUB168(auVar14 >> 0x40,0),
                                        SUB168(auVar18,0) | SUB168(auVar18,0) << 0x20) &
                               (undefined  [16])0xffffffffffffffff);
        uVar8 = uVar8 & 1;
        auVar18 = ZEXT416((uint)(float)(iVar10 - uVar8));
    }
    auVar14 = ZEXT416((uint)((fVar21 - fVar17) * DAT_140c43fb8)) & (undefined  [16])0xffffffffffffffff
            ;
    fVar15 = (SUB164(auVar14,0) + 0.5) * 2048.0;
    auVar20 = CONCAT124(SUB1612(auVar14 >> 0x20,0),fVar15);
    iVar10 = (int)fVar15;
    if ((iVar10 != -0x80000000) && ((float)iVar10 != fVar15)) {
        uVar8 = movmskps(uVar8,CONCAT88(SUB168(auVar14 >> 0x40,0),
                                        SUB168(auVar20,0) | SUB168(auVar20,0) << 0x20) &
                               (undefined  [16])0xffffffffffffffff);
        uVar8 = uVar8 & 1;
        auVar20 = ZEXT416((uint)(float)(iVar10 - uVar8));
    }
    auVar14 = ZEXT416((uint)((fVar17 + fVar16) * DAT_140c43fb8)) & (undefined  [16])0xffffffffffffffff
            ;
    fVar16 = (SUB164(auVar14,0) + 0.5) * 2048.0;
    auVar19 = CONCAT124(SUB1612(auVar14 >> 0x20,0),fVar16);
    iVar10 = (int)fVar16;
    if ((iVar10 != -0x80000000) && ((float)iVar10 != fVar16)) {
        uVar8 = movmskps(uVar8,CONCAT88(SUB168(auVar14 >> 0x40,0),
                                        SUB168(auVar19,0) | SUB168(auVar19,0) << 0x20) &
                               (undefined  [16])0xffffffffffffffff);
        uVar8 = uVar8 & 1;
        auVar19 = ZEXT416((uint)(float)(iVar10 - uVar8));
    }
    auVar14 = ZEXT416((uint)((fVar17 + fVar21) * DAT_140c43fb8)) & (undefined  [16])0xffffffffffffffff
            ;
    iVar10 = (int)SUB164(auVar19,0) + 1;
    fVar17 = (SUB164(auVar14,0) + 0.5) * 2048.0;
    auVar19 = CONCAT124(SUB1612(auVar14 >> 0x20,0),fVar17);
    iVar11 = (int)fVar17;
    if ((iVar11 != -0x80000000) && ((float)iVar11 != fVar17)) {
        uVar8 = movmskps(uVar8,CONCAT88(SUB168(auVar14 >> 0x40,0),
                                        SUB168(auVar19,0) | SUB168(auVar19,0) << 0x20) &
                               (undefined  [16])0xffffffffffffffff);
        auVar19 = ZEXT416((uint)(float)(iVar11 - (uVar8 & 1)));
    }
    iVar11 = (int)SUB164(auVar19,0) + 1;
    if (*(int *)(param_1 + 0x8d8) < iVar10) {
        iVar10 = *(int *)(param_1 + 0x8d8);
    }
    if (*(int *)(param_1 + 0x8dc) < iVar11) {
        iVar11 = *(int *)(param_1 + 0x8dc);
    }
    iVar5 = (int)SUB164(auVar18,0);
    if ((int)SUB164(auVar18,0) < *(int *)(param_1 + 0x8d0)) {
        iVar5 = *(int *)(param_1 + 0x8d0);
    }
    iVar13 = (int)SUB164(auVar20,0);
    if ((int)SUB164(auVar20,0) < *(int *)(param_1 + 0x8d4)) {
        iVar13 = *(int *)(param_1 + 0x8d4);
    }
    if ((iVar5 < iVar10) && (iVar13 < iVar11)) {
        fVar17 = *(float *)param_2[1] * *(float *)param_2[1];
        iVar7 = iVar5;
        do {
            for (; iVar7 < iVar10; iVar7 = iVar7 + 1) {
                iVar3 = *(int *)(param_1 + 0x89c);
                iVar6 = iVar13 % *(int *)(param_1 + 0x8a0);
                lVar4 = *(longlong *)
                        (*(longlong *)(param_1 + 0x8e0) +
                         (ulonglong)
                                 ((uint)(iVar7 % iVar3 < 0) * iVar3 +
                                  ((uint)(iVar6 < 0) * *(int *)(param_1 + 0x8a0) + iVar6) * iVar3 + iVar7 % iVar3) *
                         8);
                if (lVar4 != 0) {
                    lVar9 = (**(code **)(**(longlong **)(lVar4 + 0x10) + 0x28))();
                    auVar14 = minps(*param_2,*(undefined (*) [16])(lVar9 + 0x30));
                    auVar14 = maxps(*(undefined (*) [16])(lVar9 + 0x20),auVar14);
                    fVar16 = SUB164(auVar14,0) - *(float *)*param_2;
                    fVar21 = SUB164(auVar14 >> 0x40,0) - *(float *)(*param_2 + 8);
                    if (fVar21 * fVar21 + fVar16 * fVar16 <= fVar17) {
                        if (*(longlong *)(lVar4 + 0x578) == 0) {
                            *(longlong **)(lVar4 + 0x578) = plVar1;
                            plVar2 = (longlong *)(lVar4 + 0x580);
                            *plVar2 = *plVar1;
                            *plVar1 = lVar4;
                            if (*plVar2 != 0) {
                                *(longlong **)(*plVar2 + 0x578) = plVar2;
                            }
                        }
                        lVar12 = lVar12 + 1;
                    }
                }
            }
            iVar13 = iVar13 + 1;
            iVar7 = iVar5;
        } while (iVar13 < iVar11);
    }
    else {
        lVar12 = 0;
    }
    return lVar12;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140357df0(longlong param_1)

{
    ulonglong uVar1;
    float **ppfVar2;
    float **ppfVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    int iVar7;
    int iVar8;
    float fVar9;
    float fVar10;
    uint uVar11;
    uint uVar12;
    undefined (*pauVar13) [16];
    float *pfVar14;
    float *pfVar15;
    int iVar16;
    int iVar17;
    longlong lVar18;
    uint *puVar19;
    uint uVar20;
    undefined (*pauVar21) [16];
    float *pfVar22;
    ulonglong uVar23;
    float fVar24;
    ulonglong uVar25;
    ulonglong uVar26;
    ulonglong uVar27;
    ulonglong uVar28;
    ulonglong uVar29;
    longlong lVar30;
    undefined auVar31 [16];
    float fVar32;
    float fVar33;
    float fVar35;
    float fVar36;
    undefined in_XMM7 [16];
    undefined in_XMM8 [16];
    undefined auVar37 [16];
    undefined in_XMM9 [16];
    undefined auStack776 [32];
    undefined8 local_2e8;
    int local_2e0;
    int local_2d8;
    float local_2d4;
    float local_2d0;
    int local_2cc;
    float local_2c8;
    float fStack708;
    float local_2c0;
    float fStack700;
    ulonglong local_2b8;
    float fStack688;
    float fStack684;
    float local_2a8;
    float fStack676;
    float local_2a0;
    float fStack668;
    longlong local_298;
    uint uStack652;
    undefined local_288 [4];
    uint uStack644;
    float afStack640 [2];
    undefined local_278 [16];
    float local_268 [32];
    float local_1e8 [4];
    float local_1d8 [4];
    float local_1c8 [16];
    undefined local_188 [32];
    float local_168 [32];
    ulonglong local_e8;
    undefined local_78 [16];
    undefined local_68 [16];
    undefined local_58 [16];
    undefined auVar34 [16];

    local_e8 = DAT_140c0f7b0 ^ (ulonglong)auStack776;
    ppfVar2 = (float **)(param_1 + 0x918);
    pfVar15 = *ppfVar2;
    while (pfVar15 != (float *)0x0) {
        if (*(undefined8 **)(pfVar15 + 0x15e) != (undefined8 *)0x0) {
            **(undefined8 **)(pfVar15 + 0x15e) = *(undefined8 *)(pfVar15 + 0x160);
        }
        if (*(longlong *)(pfVar15 + 0x160) != 0) {
            *(undefined8 *)(*(longlong *)(pfVar15 + 0x160) + 0x578) = *(undefined8 *)(pfVar15 + 0x15e);
        }
        *(undefined8 *)(pfVar15 + 0x15e) = 0;
        *(undefined8 *)(pfVar15 + 0x160) = 0;
        pfVar15 = *ppfVar2;
    }
    local_298 = param_1;
    FUN_1401b2280();
    fVar10 = DAT_140c44018;
    fVar9 = DAT_140c43fb8;
    lVar30 = 8;
    pauVar13 = (undefined (*) [16])local_268;
    lVar18 = 8;
    _local_288 = _DAT_140c798c0;
    local_278 = _DAT_140c798d0;
    do {
        local_278 = maxps(local_278,*pauVar13);
        _local_288 = minps(_local_288,*pauVar13);
        pauVar13 = pauVar13[1];
        lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    auVar31 = ZEXT416((uint)(local_288 * DAT_140c43fb8)) & (undefined  [16])0xffffffffffffffff;
    fVar32 = (SUB164(auVar31,0) + 0.5) * 2048.0;
    auVar34 = CONCAT124(SUB1612(auVar31 >> 0x20,0),fVar32);
    iVar16 = (int)fVar32;
    if ((iVar16 != -0x80000000) && ((float)iVar16 != fVar32)) {
        uVar11 = movmskps((int)pauVar13,
                          CONCAT88(SUB168(auVar31 >> 0x40,0),
                                   SUB168(auVar34,0) | SUB168(auVar34,0) << 0x20) &
                          (undefined  [16])0xffffffffffffffff);
        pauVar13 = (undefined (*) [16])(ulonglong)(uVar11 & 1);
        auVar34 = ZEXT416((uint)(float)(iVar16 - (uVar11 & 1)));
    }
    uVar11 = (uint)pauVar13;
    afStack640[0] = SUB164(_local_288 >> 0x40,0);
    local_2d8 = (int)SUB164(auVar34,0);
    auVar31 = ZEXT416((uint)(afStack640[0] * DAT_140c43fb8)) & (undefined  [16])0xffffffffffffffff;
    fVar32 = (SUB164(auVar31,0) + 0.5) * 2048.0;
    auVar34 = CONCAT124(SUB1612(auVar31 >> 0x20,0),fVar32);
    iVar16 = (int)fVar32;
    if ((iVar16 != -0x80000000) && ((float)iVar16 != fVar32)) {
        uVar11 = movmskps(uVar11,CONCAT88(SUB168(auVar31 >> 0x40,0),
                                          SUB168(auVar34,0) | SUB168(auVar34,0) << 0x20) &
                                 (undefined  [16])0xffffffffffffffff);
        uVar11 = uVar11 & 1;
        auVar34 = ZEXT416((uint)(float)(iVar16 - uVar11));
    }
    local_2d4 = (float)(int)SUB164(auVar34,0);
    auVar31 = ZEXT416((uint)(local_278._0_4_ * DAT_140c43fb8)) & (undefined  [16])0xffffffffffffffff;
    fVar32 = (SUB164(auVar31,0) + 0.5) * 2048.0;
    auVar34 = CONCAT124(SUB1612(auVar31 >> 0x20,0),fVar32);
    iVar16 = (int)fVar32;
    if ((iVar16 != -0x80000000) && ((float)iVar16 != fVar32)) {
        uVar11 = movmskps(uVar11,CONCAT88(SUB168(auVar31 >> 0x40,0),
                                          SUB168(auVar34,0) | SUB168(auVar34,0) << 0x20) &
                                 (undefined  [16])0xffffffffffffffff);
        uVar11 = uVar11 & 1;
        auVar34 = ZEXT416((uint)(float)(iVar16 - uVar11));
    }
    local_278._8_4_ = SUB164(local_278 >> 0x40,0);
    auVar31 = ZEXT416((uint)(local_278._8_4_ * DAT_140c43fb8)) & (undefined  [16])0xffffffffffffffff;
    local_2d0 = (float)((int)SUB164(auVar34,0) + 1);
    fVar32 = (SUB164(auVar31,0) + 0.5) * 2048.0;
    auVar34 = CONCAT124(SUB1612(auVar31 >> 0x20,0),fVar32);
    iVar16 = (int)fVar32;
    if ((iVar16 != -0x80000000) && ((float)iVar16 != fVar32)) {
        uVar11 = movmskps(uVar11,CONCAT88(SUB168(auVar31 >> 0x40,0),
                                          SUB168(auVar34,0) | SUB168(auVar34,0) << 0x20) &
                                 (undefined  [16])0xffffffffffffffff);
        auVar34 = ZEXT416((uint)(float)(iVar16 - (uVar11 & 1)));
    }
    local_2cc = (int)SUB164(auVar34,0) + 1;
    fVar32 = local_2d0;
    if ((int)*(float *)(param_1 + 0x8d8) < (int)local_2d0) {
        fVar32 = *(float *)(param_1 + 0x8d8);
    }
    iVar16 = local_2cc;
    if (*(int *)(param_1 + 0x8dc) < local_2cc) {
        iVar16 = *(int *)(param_1 + 0x8dc);
    }
    local_2e8 = (float *)CONCAT44(local_2e8._4_4_,iVar16);
    local_2e0 = local_2d8;
    if (local_2d8 < *(int *)(param_1 + 0x8d0)) {
        local_2e0 = *(int *)(param_1 + 0x8d0);
    }
    fVar24 = local_2d4;
    if ((int)local_2d4 < (int)*(float *)(param_1 + 0x8d4)) {
        fVar24 = *(float *)(param_1 + 0x8d4);
    }
    local_2c8 = fVar24;
    local_2c0 = fVar32;
    if ((local_2e0 < (int)fVar32) && ((int)fVar24 < iVar16)) {
        uVar29 = 4;
        uVar28 = 7;
        local_2b8 = 1;
        _local_288 = CONCAT412(3,CONCAT48(2,0x100000000));
        local_278 = CONCAT412(7,CONCAT48(6,0x500000004));
        uVar25 = 9;
        do {
            uVar11 = *(uint *)(local_288 + uVar29 * 4 + -4);
            uVar29 = uVar29 - 1;
            uVar25 = uVar25 - 2;
            uVar23 = uVar29;
            if (uVar25 < 8) {
                fVar36 = local_268[(ulonglong)uVar11 * 4 + 2];
                uVar27 = uVar25;
                do {
                    uVar20 = *(uint *)(local_288 + uVar27 * 4);
                    uVar1 = uVar27 + 1;
                    uVar26 = uVar27;
                    if (uVar1 < 8) {
                        uVar12 = *(uint *)(local_288 + uVar1 * 4);
                        if ((local_268[(ulonglong)uVar20 * 4 + 2] <= local_268[(ulonglong)uVar12 * 4 + 2]) &&
                            ((local_268[(ulonglong)uVar20 * 4 + 2] < local_268[(ulonglong)uVar12 * 4 + 2] ||
                              (uVar20 < uVar12)))) {
                            uVar26 = uVar1;
                            uVar20 = uVar12;
                        }
                    }
                    if ((local_268[(ulonglong)uVar20 * 4 + 2] < fVar36) ||
                        ((local_268[(ulonglong)uVar20 * 4 + 2] <= fVar36 && (uVar20 <= uVar11)))) break;
                    *(uint *)(local_288 + uVar23 * 4) = uVar20;
                    uVar27 = uVar26 * 2 + 1;
                    uVar23 = uVar26;
                } while (uVar27 < 8);
            }
            *(uint *)(local_288 + uVar23 * 4) = uVar11;
        } while (1 < uVar25);
        do {
            uVar11 = *(uint *)(local_288 + uVar28 * 4);
            uVar25 = 1;
            *(float *)(local_288 + uVar28 * 4) = local_288;
            uVar29 = 0;
            if (1 < uVar28) {
                fVar36 = local_268[(ulonglong)uVar11 * 4 + 2];
                do {
                    uVar20 = *(uint *)(local_288 + uVar25 * 4);
                    uVar23 = uVar25 + 1;
                    uVar27 = uVar25;
                    if (uVar23 < uVar28) {
                        uVar12 = *(uint *)(local_288 + uVar23 * 4);
                        if ((local_268[(ulonglong)uVar20 * 4 + 2] <= local_268[(ulonglong)uVar12 * 4 + 2]) &&
                            ((local_268[(ulonglong)uVar20 * 4 + 2] < local_268[(ulonglong)uVar12 * 4 + 2] ||
                              (uVar20 < uVar12)))) {
                            uVar27 = uVar23;
                            uVar20 = uVar12;
                        }
                    }
                    if ((local_268[(ulonglong)uVar20 * 4 + 2] < fVar36) ||
                        ((local_268[(ulonglong)uVar20 * 4 + 2] <= fVar36 && (uVar20 <= uVar11)))) break;
                    *(uint *)(local_288 + uVar29 * 4) = uVar20;
                    uVar25 = uVar27 * 2 + 1;
                    uVar29 = uVar27;
                } while (uVar25 < uVar28);
            }
            *(uint *)(local_288 + uVar29 * 4) = uVar11;
            uVar28 = uVar28 - 1;
        } while (uVar28 != 0);
        puVar19 = (uint *)local_288;
        pfVar15 = local_1e8;
        do {
            uVar25 = (ulonglong)*puVar19;
            puVar19 = puVar19 + 1;
            fVar36 = local_268[uVar25 * 4 + 1];
            fVar33 = local_268[uVar25 * 4 + 2];
            fVar4 = local_268[uVar25 * 4 + 3];
            *pfVar15 = local_268[uVar25 * 4];
            pfVar15[1] = fVar36;
            pfVar15[2] = fVar33;
            pfVar15[3] = fVar4;
            lVar30 = lVar30 + -1;
            pfVar15 = pfVar15 + 4;
        } while (lVar30 != 0);
        pfVar15 = local_1d8;
        local_268[0] = local_1e8[0];
        local_268[1] = local_1e8[1];
        local_268[2] = local_1e8[2];
        local_268[3] = local_1e8[3];
        pfVar14 = local_1c8;
        fVar33 = local_1e8[2] + 1e-05;
        fVar36 = local_1e8[0];
        do {
            if (fVar33 < pfVar14[-2]) goto LAB_140358333;
            fVar4 = *pfVar15;
            if (fVar4 < fVar36) {
                local_268[0] = fVar4;
                fVar36 = fVar4;
            }
            if (fVar33 < pfVar14[2]) {
                pfVar15 = pfVar15 + 4;
                goto LAB_140358333;
            }
            fVar4 = *pfVar14;
            if (fVar4 < fVar36) {
                local_268[0] = fVar4;
                fVar36 = fVar4;
            }
            if (fVar33 < pfVar14[6]) {
                pfVar15 = pfVar15 + 8;
                goto LAB_140358333;
            }
            fVar4 = pfVar14[4];
            if (fVar4 < fVar36) {
                local_268[0] = fVar4;
                fVar36 = fVar4;
            }
            if (fVar33 < pfVar14[10]) {
                pfVar15 = pfVar15 + 0xc;
                goto LAB_140358333;
            }
            fVar4 = pfVar14[8];
            if (fVar4 < fVar36) {
                local_268[0] = fVar4;
                fVar36 = fVar4;
            }
            pfVar14 = pfVar14 + 0x10;
            pfVar15 = pfVar15 + 0x10;
        } while ((longlong)pfVar14 < (longlong)local_188);
        if (pfVar15 < local_168) {
            do {
                if (fVar33 < pfVar15[2]) break;
                fVar4 = *pfVar15;
                if (fVar4 < fVar36) {
                    local_268[0] = fVar4;
                    fVar36 = fVar4;
                }
                pfVar15 = pfVar15 + 4;
            } while (pfVar15 < local_168);
        }
        LAB_140358333:
        uVar11 = 1;
        while( true ) {
            uVar25 = (ulonglong)(uVar11 - 1);
            pfVar14 = (float *)0x0;
            if (local_168 <= pfVar15) break;
            fVar36 = DAT_140c440d8;
            do {
                fStack688 = pfVar15[2] - local_268[uVar25 * 4 + 2];
                fStack684 = pfVar15[3] - local_268[uVar25 * 4 + 3];
                local_2b8 = CONCAT44(pfVar15[1] - local_268[uVar25 * 4 + 1],*pfVar15 - local_268[uVar25 * 4]
                );
                if ((1e-05 <= fStack688) &&
                    (fVar33 = (*pfVar15 - local_268[uVar25 * 4]) / fStack688, fVar33 < fVar36)) {
                    pfVar14 = pfVar15;
                    fVar36 = fVar33;
                }
                pfVar15 = pfVar15 + 4;
            } while (pfVar15 < local_168);
            if (pfVar14 == (float *)0x0) break;
            fVar36 = pfVar14[1];
            fVar33 = pfVar14[2];
            fVar4 = pfVar14[3];
            uVar25 = (ulonglong)uVar11;
            pfVar15 = pfVar14 + 4;
            uVar11 = uVar11 + 1;
            local_268[uVar25 * 4] = *pfVar14;
            local_268[uVar25 * 4 + 1] = fVar36;
            local_268[uVar25 * 4 + 2] = fVar33;
            local_268[uVar25 * 4 + 3] = fVar4;
        }
        local_2d8 = local_2e0;
        local_2d4 = fVar24;
        local_2d0 = fVar32;
        local_2cc = iVar16;
        if (1 < uVar11) {
            local_168[0] = local_1e8[0];
            local_168[1] = local_1e8[1];
            local_168[2] = local_1e8[2];
            local_168[3] = local_1e8[3];
            pauVar13 = (undefined (*) [16])local_1d8;
            pfVar15 = local_1c8;
            do {
                if (1e-05 < pfVar15[-2]) goto LAB_1403584b6;
                fVar36 = *(float *)*pauVar13;
                if (local_1e8[0] < fVar36) {
                    local_168[0] = fVar36;
                    local_1e8[0] = fVar36;
                }
                if (1e-05 < pfVar15[2]) {
                    pauVar13 = pauVar13[1];
                    goto LAB_1403584b6;
                }
                fVar36 = *pfVar15;
                if (local_1e8[0] < fVar36) {
                    local_168[0] = fVar36;
                    local_1e8[0] = fVar36;
                }
                if (1e-05 < pfVar15[6]) {
                    pauVar13 = pauVar13[2];
                    goto LAB_1403584b6;
                }
                fVar36 = pfVar15[4];
                if (local_1e8[0] < fVar36) {
                    local_168[0] = fVar36;
                    local_1e8[0] = fVar36;
                }
                if (1e-05 < pfVar15[10]) {
                    pauVar13 = pauVar13[3];
                    goto LAB_1403584b6;
                }
                fVar36 = pfVar15[8];
                if (local_1e8[0] < fVar36) {
                    local_168[0] = fVar36;
                    local_1e8[0] = fVar36;
                }
                pfVar15 = pfVar15 + 0x10;
                pauVar13 = pauVar13[4];
            } while ((longlong)pfVar15 < (longlong)local_188);
            if (pauVar13 < (undefined (*) [16])local_168) {
                do {
                    if (1e-05 < *(float *)(*pauVar13 + 8)) break;
                    fVar36 = *(float *)*pauVar13;
                    if (local_1e8[0] < fVar36) {
                        local_168[0] = fVar36;
                        local_1e8[0] = fVar36;
                    }
                    pauVar13 = pauVar13[1];
                } while (pauVar13 < (undefined (*) [16])local_168);
            }
            LAB_1403584b6:
            local_2b8 = 1;
            while( true ) {
                uVar20 = (uint)local_2b8;
                uVar25 = (ulonglong)(uVar20 - 1);
                pauVar21 = (undefined (*) [16])0x0;
                if ((undefined (*) [16])local_168 <= pauVar13) break;
                fVar36 = (float)((uint)DAT_140c440d8 ^ 0x80000000);
                do {
                    fStack688 = *(float *)(*pauVar13 + 8) - local_168[uVar25 * 4 + 2];
                    fStack684 = *(float *)(*pauVar13 + 0xc) - local_168[uVar25 * 4 + 3];
                    if ((1e-05 <= fStack688) &&
                        (fVar33 = (*(float *)*pauVar13 - local_168[uVar25 * 4]) / fStack688, fVar36 < fVar33))
                    {
                        pauVar21 = pauVar13;
                        fVar36 = fVar33;
                    }
                    pauVar13 = pauVar13[1];
                } while (pauVar13 < (undefined (*) [16])local_168);
                if (pauVar21 == (undefined (*) [16])0x0) break;
                pauVar13 = pauVar21[1];
                *(undefined (*) [16])(local_168 + local_2b8 * 4) = *pauVar21;
                local_2b8 = (ulonglong)(uVar20 + 1);
            }
            pfVar15 = local_168;
            if (1 < uVar20) {
                local_58 = in_XMM7;
                local_68 = in_XMM8;
                local_78 = in_XMM9;
                do {
                    auVar31 = ZEXT416(DAT_140c79888);
                    auVar34 = ZEXT416(DAT_140c7988c);
                    fVar36 = ((float)(int)fVar24 * 0.0004882813 - 0.5) * 65536.0;
                    fVar33 = fVar36 + fVar10;
                    if (1 < uVar11) {
                        pfVar14 = local_268 + 6;
                        pfVar22 = local_268 + 2;
                        uVar25 = (ulonglong)(uVar11 - 1);
                        do {
                            fVar4 = *pfVar14;
                            if ((fVar36 < fVar4) && (fVar5 = *pfVar22, fVar5 < fVar33)) {
                                fVar6 = pfVar22[-2];
                                fVar35 = fVar6;
                                if (fVar5 < fVar36) {
                                    fVar35 = ((pfVar14[-2] - fVar6) * (fVar36 - fVar5)) / (fVar4 - fVar5) + fVar6;
                                }
                                auVar31 = auVar31 & (undefined  [16])0xffffffff;
                                if (fVar35 <= SUB164(auVar31,0)) {
                                    auVar31 = CONCAT124(SUB1612(auVar31 >> 0x20,0),fVar35);
                                }
                                fStack708 = SUB164(auVar34,0);
                                if (SUB164(auVar34,0) <= fVar35) {
                                    fStack708 = fVar35;
                                }
                                fVar35 = pfVar14[-2];
                                local_2c8 = SUB164(auVar31,0);
                                if (fVar33 < fVar4) {
                                    fVar35 = ((fVar35 - fVar6) * (fVar33 - fVar5)) / (fVar4 - fVar5) + fVar6;
                                }
                                fStack700 = fStack708;
                                if (fStack708 <= fVar35) {
                                    fStack700 = fVar35;
                                }
                                local_2c0 = local_2c8;
                                if (fVar35 <= local_2c8) {
                                    local_2c0 = fVar35;
                                }
                                pfVar15 = (float *)CONCAT44(fStack700,local_2c0);
                                auVar34 = ZEXT416((uint)fStack700);
                                auVar31 = ZEXT416((uint)local_2c0);
                                local_2e8 = pfVar15;
                            }
                            pfVar22 = pfVar22 + 4;
                            pfVar14 = pfVar14 + 4;
                            uVar25 = uVar25 - 1;
                        } while (uVar25 != 0);
                    }
                    if (1 < uVar20) {
                        pfVar14 = local_168 + 6;
                        pfVar22 = local_168 + 2;
                        uVar25 = (ulonglong)(uVar20 - 1);
                        do {
                            fVar4 = *pfVar14;
                            if ((fVar36 < fVar4) && (fVar5 = *pfVar22, fVar5 < fVar33)) {
                                fVar6 = pfVar22[-2];
                                fVar35 = fVar6;
                                if (fVar5 < fVar36) {
                                    fVar35 = ((pfVar14[-2] - fVar6) * (fVar36 - fVar5)) / (fVar4 - fVar5) + fVar6;
                                }
                                auVar31 = auVar31 & (undefined  [16])0xffffffff;
                                if (fVar35 <= SUB164(auVar31,0)) {
                                    auVar31 = CONCAT124(SUB1612(auVar31 >> 0x20,0),fVar35);
                                }
                                fStack668 = SUB164(auVar34,0);
                                if (SUB164(auVar34,0) <= fVar35) {
                                    fStack668 = fVar35;
                                }
                                fVar35 = pfVar14[-2];
                                local_2a0 = SUB164(auVar31,0);
                                if (fVar33 < fVar4) {
                                    fVar35 = ((fVar35 - fVar6) * (fVar33 - fVar5)) / (fVar4 - fVar5) + fVar6;
                                }
                                fStack676 = fStack668;
                                if (fStack668 <= fVar35) {
                                    fStack676 = fVar35;
                                }
                                local_2a8 = local_2a0;
                                if (fVar35 <= local_2a0) {
                                    local_2a8 = fVar35;
                                }
                                pfVar15 = (float *)CONCAT44(fStack676,local_2a8);
                                auVar34 = ZEXT416((uint)fStack676);
                                auVar31 = ZEXT416((uint)local_2a8);
                                local_2e8 = pfVar15;
                            }
                            pfVar22 = pfVar22 + 4;
                            pfVar14 = pfVar14 + 4;
                            uVar25 = uVar25 - 1;
                        } while (uVar25 != 0);
                    }
                    fVar36 = (SUB164(auVar31,0) * fVar9 + 0.5) * 2048.0;
                    auVar37 = CONCAT124(SUB1612(auVar31 >> 0x20,0),fVar36);
                    iVar17 = (int)fVar36;
                    if ((iVar17 != -0x80000000) && ((float)iVar17 != fVar36)) {
                        uVar12 = movmskps((int)pfVar15,
                                          CONCAT88(SUB168(auVar31 >> 0x40,0),
                                                   SUB168(auVar37,0) | SUB168(auVar37,0) << 0x20) &
                                          (undefined  [16])0xffffffffffffffff);
                        pfVar15 = (float *)(ulonglong)(uVar12 & 1);
                        auVar37 = ZEXT416((uint)(float)(iVar17 - (uVar12 & 1)));
                    }
                    fVar36 = (SUB164(auVar34,0) * fVar9 + 0.5) * 2048.0;
                    auVar31 = CONCAT124(SUB1612(auVar34 >> 0x20,0),fVar36);
                    iVar17 = (int)fVar36;
                    if ((iVar17 != -0x80000000) && ((float)iVar17 != fVar36)) {
                        uVar12 = movmskps((int)pfVar15,
                                          CONCAT88(SUB168(auVar34 >> 0x40,0),
                                                   SUB168(auVar31,0) | SUB168(auVar31,0) << 0x20) &
                                          (undefined  [16])0xffffffffffffffff);
                        pfVar15 = (float *)(ulonglong)(uVar12 & 1);
                        auVar31 = ZEXT416((uint)(float)(iVar17 - (uVar12 & 1)));
                    }
                    fVar36 = (float)((int)SUB164(auVar31,0) + 1);
                    iVar17 = (int)SUB164(auVar37,0);
                    if ((int)SUB164(auVar37,0) < local_2e0) {
                        iVar17 = local_2e0;
                    }
                    if ((int)fVar32 < (int)fVar36) {
                        fVar36 = fVar32;
                    }
                    for (; iVar17 < (int)fVar36; iVar17 = iVar17 + 1) {
                        iVar7 = *(int *)(local_298 + 0x89c);
                        iVar8 = (int)fVar24 % *(int *)(local_298 + 0x8a0);
                        pfVar15 = *(float **)(local_298 + 0x8e0);
                        pfVar14 = *(float **)
                                (pfVar15 +
                                 (ulonglong)
                                         ((uint)(iVar17 % iVar7 < 0) * iVar7 +
                                          ((uint)(iVar8 < 0) * *(int *)(local_298 + 0x8a0) + iVar8) * iVar7 +
                                          iVar17 % iVar7) * 2);
                        if ((pfVar14 != (float *)0x0) && (*(longlong *)(pfVar14 + 0x15e) == 0)) {
                            *(float ***)(pfVar14 + 0x15e) = ppfVar2;
                            ppfVar3 = (float **)(pfVar14 + 0x160);
                            *ppfVar3 = *ppfVar2;
                            *ppfVar2 = pfVar14;
                            pfVar15 = *ppfVar3;
                            if (pfVar15 != (float *)0x0) {
                                *(float ***)(pfVar15 + 0x15e) = ppfVar3;
                            }
                        }
                    }
                    fVar24 = (float)((int)fVar24 + 1);
                } while ((int)fVar24 < iVar16);
            }
        }
    }
    FUN_1407db4f0(local_e8 ^ (ulonglong)auStack776);
    return;
}



longlong * FUN_1403589f0(longlong param_1,float *param_2)

{
    ulonglong *puVar1;
    longlong lVar2;
    longlong *plVar3;
    int iVar4;
    ulonglong uVar5;
    int local_res8;
    int local_resc;

    local_res8 = (int)((*param_2 * DAT_140c43fb8 + 0.5) * 2048.0);
    local_resc = (int)((DAT_140c43fb8 * 0.0 + 0.5) * 2048.0);
    uVar5 = (**(code **)(param_1 + 0x950))(&local_res8);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x948) + (uVar5 % *(ulonglong *)(param_1 + 0x940)) * 8);
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return (longlong *)0x0;
        }
        if ((uVar5 == *puVar1) &&
            (iVar4 = (**(code **)(param_1 + 0x958))(&local_res8,puVar1 + 2), iVar4 != 0)) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    if (puVar1 + 3 == (ulonglong *)0x0) {
        return (longlong *)0x0;
    }
    uVar5 = puVar1[3];
    if (uVar5 == 0) {
        return (longlong *)0x0;
    }
    lVar2 = *(longlong *)(uVar5 + 0x28);
    while( true ) {
        if (lVar2 == 0) {
            return (longlong *)0x0;
        }
        plVar3 = *(longlong **)(lVar2 + 8);
        iVar4 = (**(code **)(*plVar3 + 0x18))(plVar3);
        if ((iVar4 == 0) && (iVar4 = (**(code **)(*plVar3 + 0x20))(plVar3,param_2,0,0), iVar4 != 0))
            break;
        lVar2 = *(longlong *)(lVar2 + 0x18);
    }
    return plVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_140358b00(undefined8 param_1,float *param_2,float *param_3)

{
    ulonglong uVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    longlong lVar6;
    float *pfVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    undefined local_c8 [16];
    ulonglong local_b8 [20];

    if ((DAT_140dc1558 & 1) == 0) {
        DAT_140dc1558 = DAT_140dc1558 | 1;
        _DAT_140dc1560 = ZEXT816(0);
        _DAT_140dc1570 = 0xbf800000;
        uRam0000000140dc1574 = 0;
        uRam0000000140dc1578 = 0;
        uRam0000000140dc157c = 0;
        _DAT_140dc1580 = 0x3f800000;
        uRam0000000140dc1584 = 0;
        uRam0000000140dc1588 = 0;
        uRam0000000140dc158c = 0;
        _DAT_140dc15a0 = 0;
        uRam0000000140dc15a4 = 0x3f800000;
        uRam0000000140dc15a8 = 0;
        uRam0000000140dc15ac = 0;
        _DAT_140dc1590 = 0;
        uRam0000000140dc1594 = 0xbf800000;
        uRam0000000140dc1598 = 0;
        uRam0000000140dc159c = 0;
        _DAT_140dc15c0 = 0;
        uRam0000000140dc15c4 = 0;
        uRam0000000140dc15c8 = 0x3f800000;
        uRam0000000140dc15cc = 0;
        _DAT_140dc15b0 = 0;
        uRam0000000140dc15b4 = 0;
        uRam0000000140dc15b8 = 0xbf800000;
        uRam0000000140dc15bc = 0;
        _DAT_140dc15e0 = 0x3f13cd3a;
        uRam0000000140dc15e4 = 0xbf13cd3a;
        uRam0000000140dc15e8 = 0xbf13cd3a;
        uRam0000000140dc15ec = 0;
        _DAT_140dc15d0 = 0xbf13cd3a;
        uRam0000000140dc15d4 = 0xbf13cd3a;
        uRam0000000140dc15d8 = 0xbf13cd3a;
        uRam0000000140dc15dc = 0;
        _DAT_140dc1600 = 0x3f13cd3a;
        uRam0000000140dc1604 = 0x3f13cd3a;
        uRam0000000140dc1608 = 0xbf13cd3a;
        uRam0000000140dc160c = 0;
        _DAT_140dc15f0 = 0xbf13cd3a;
        uRam0000000140dc15f4 = 0x3f13cd3a;
        uRam0000000140dc15f8 = 0xbf13cd3a;
        uRam0000000140dc15fc = 0;
        _DAT_140dc1620 = 0x3f13cd3a;
        uRam0000000140dc1624 = 0xbf13cd3a;
        uRam0000000140dc1628 = 0x3f13cd3a;
        uRam0000000140dc162c = 0;
        _DAT_140dc1610 = 0xbf13cd3a;
        uRam0000000140dc1614 = 0xbf13cd3a;
        uRam0000000140dc1618 = 0x3f13cd3a;
        uRam0000000140dc161c = 0;
        _DAT_140dc1640 = 0x3f13cd3a;
        uRam0000000140dc1644 = 0x3f13cd3a;
        uRam0000000140dc1648 = 0x3f13cd3a;
        uRam0000000140dc164c = 0;
        _DAT_140dc1630 = 0xbf13cd3a;
        uRam0000000140dc1634 = 0x3f13cd3a;
        uRam0000000140dc1638 = 0x3f13cd3a;
        uRam0000000140dc163c = 0;
    }
    uVar5 = 0;
    pfVar7 = (float *)&DAT_140dc1560;
    lVar6 = 0xf;
    fVar10 = (param_2[4] + *param_2) * 0.5;
    fVar11 = (param_2[5] + param_2[1]) * 0.5;
    fVar12 = fVar10 - *param_2;
    fVar13 = fVar11 - param_2[1];
    uVar4 = uVar5;
    do {
        fVar8 = *pfVar7 * fVar12 + fVar10;
        fVar9 = pfVar7[1] * fVar13 + fVar11;
        local_c8 = CONCAT412(fVar9 * param_3[7] + fVar8 * param_3[3] + param_3[0xb] * 0.0 + param_3[0xf]
                ,CONCAT48(fVar9 * param_3[6] + fVar8 * param_3[2] + param_3[10] * 0.0 +
                          param_3[0xe],
                          CONCAT44(fVar9 * param_3[5] + fVar8 * param_3[1] +
                                   param_3[9] * 0.0 + param_3[0xd],
                                   fVar9 * param_3[4] + fVar8 * *param_3 + param_3[8] * 0.0
                                   + param_3[0xc])));
        uVar1 = FUN_1403589f0(param_1,local_c8);
        if (uVar1 != 0) {
            local_b8[uVar4] = uVar1;
            uVar4 = uVar4 + 1;
        }
        pfVar7 = pfVar7 + 4;
        lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    if (uVar4 == 0) {
        local_b8[0] = 0;
    }
    else {
        FUN_140370470();
        if (local_b8[0] != *(ulonglong *)(local_c8 + uVar4 * 8 + 8)) {
            uVar2 = 1;
            uVar3 = 1;
            uVar1 = uVar5;
            if (1 < uVar4) {
                do {
                    if (local_b8[0] == local_b8[uVar3]) {
                        uVar2 = uVar2 + 1;
                    }
                    else {
                        if (uVar1 < uVar2) {
                            uVar5 = local_b8[0];
                            uVar1 = uVar2;
                        }
                        uVar2 = 1;
                        local_b8[0] = local_b8[uVar3];
                    }
                    uVar3 = uVar3 + 1;
                } while (uVar3 < uVar4);
                if (uVar2 <= uVar1) {
                    return uVar5;
                }
            }
        }
    }
    return local_b8[0];
}



ulonglong FUN_140358d20(longlong param_1,longlong param_2,undefined (*param_3) [16])

{
    longlong **pplVar1;
    longlong lVar2;
    ulonglong *puVar3;
    longlong *plVar4;
    uint uVar5;
    int iVar6;
    int iVar7;
    ulonglong in_RAX;
    ulonglong uVar8;
    int iVar9;
    int iVar10;
    ulonglong uVar11;
    undefined auVar12 [16];
    float fVar13;
    undefined auVar14 [16];
    undefined auVar15 [16];
    undefined auVar16 [16];
    int local_res8;
    int local_resc;
    longlong *local_res10;
    float fStack68;
    float fStack64;
    float fStack52;
    float fStack48;

    lVar2 = *(longlong *)(param_1 + 0x1550);
    while (lVar2 != 0) {
        if (*(ulonglong **)(lVar2 + 0x130) != (ulonglong *)0x0) {
            in_RAX = *(ulonglong *)(lVar2 + 0x138);
            **(ulonglong **)(lVar2 + 0x130) = in_RAX;
        }
        if (*(longlong *)(lVar2 + 0x138) != 0) {
            in_RAX = *(ulonglong *)(lVar2 + 0x130);
            *(ulonglong *)(*(longlong *)(lVar2 + 0x138) + 0x130) = in_RAX;
        }
        *(undefined8 *)(lVar2 + 0x130) = 0;
        *(undefined8 *)(lVar2 + 0x138) = 0;
        lVar2 = *(longlong *)(param_1 + 0x1550);
    }
    if (param_2 == 0) {
        uVar11 = 1;
    }
    else {
        in_RAX = FUN_140390c00();
        uVar11 = in_RAX & 0xffffffff;
        if ((int)in_RAX == 0) {
            return in_RAX;
        }
    }
    uVar5 = (uint)in_RAX;
    fVar13 = (DAT_140c43fb8 * *(float *)*param_3 + 0.5) * 2048.0;
    auVar12 = ZEXT416((uint)fVar13) & (undefined  [16])0xffffffffffffffff;
    iVar9 = (int)fVar13;
    if ((iVar9 != -0x80000000) && ((float)iVar9 != fVar13)) {
        uVar5 = movmskps(uVar5,ZEXT816(SUB168(auVar12,0) | SUB168(auVar12,0) << 0x20));
        uVar5 = uVar5 & 1;
        auVar12 = ZEXT416((uint)(float)(iVar9 - uVar5));
    }
    auVar15 = ZEXT416((uint)(DAT_140c43fb8 * *(float *)(*param_3 + 8))) &
              (undefined  [16])0xffffffffffffffff;
    fVar13 = (SUB164(auVar15,0) + 0.5) * 2048.0;
    auVar16 = CONCAT124(SUB1612(auVar15 >> 0x20,0),fVar13);
    iVar9 = (int)fVar13;
    if ((iVar9 != -0x80000000) && ((float)iVar9 != fVar13)) {
        uVar5 = movmskps(uVar5,CONCAT88(SUB168(auVar15 >> 0x40,0),
                                        SUB168(auVar16,0) | SUB168(auVar16,0) << 0x20) &
                               (undefined  [16])0xffffffffffffffff);
        uVar5 = uVar5 & 1;
        auVar16 = ZEXT416((uint)(float)(iVar9 - uVar5));
    }
    auVar15 = ZEXT416((uint)(DAT_140c43fb8 * *(float *)param_3[1])) &
              (undefined  [16])0xffffffffffffffff;
    fVar13 = (SUB164(auVar15,0) + 0.5) * 2048.0;
    auVar14 = CONCAT124(SUB1612(auVar15 >> 0x20,0),fVar13);
    iVar9 = (int)fVar13;
    if ((iVar9 != -0x80000000) && ((float)iVar9 != fVar13)) {
        uVar5 = movmskps(uVar5,CONCAT88(SUB168(auVar15 >> 0x40,0),
                                        SUB168(auVar14,0) | SUB168(auVar14,0) << 0x20) &
                               (undefined  [16])0xffffffffffffffff);
        uVar5 = uVar5 & 1;
        auVar14 = ZEXT416((uint)(float)(iVar9 - uVar5));
    }
    auVar15 = ZEXT416((uint)(DAT_140c43fb8 * *(float *)(param_3[1] + 8))) &
              (undefined  [16])0xffffffffffffffff;
    iVar10 = (int)SUB164(auVar14,0) + 1;
    fVar13 = (SUB164(auVar15,0) + 0.5) * 2048.0;
    auVar14 = CONCAT124(SUB1612(auVar15 >> 0x20,0),fVar13);
    iVar9 = (int)fVar13;
    if ((iVar9 != -0x80000000) && ((float)iVar9 != fVar13)) {
        uVar5 = movmskps(uVar5,CONCAT88(SUB168(auVar15 >> 0x40,0),
                                        SUB168(auVar14,0) | SUB168(auVar14,0) << 0x20) &
                               (undefined  [16])0xffffffffffffffff);
        auVar14 = ZEXT416((uint)(float)(iVar9 - (uVar5 & 1)));
    }
    iVar6 = (int)SUB164(auVar14,0) + 1;
    local_res10 = (longlong *)0x0;
    iVar9 = DAT_140c44538;
    if (iVar10 < DAT_140c44538) {
        iVar9 = iVar10;
    }
    iVar10 = DAT_140c4453c;
    if (iVar6 < DAT_140c4453c) {
        iVar10 = iVar6;
    }
    iVar6 = DAT_140c44530;
    if (DAT_140c44530 < (int)SUB164(auVar12,0)) {
        iVar6 = (int)SUB164(auVar12,0);
    }
    local_resc = DAT_140c44534;
    if (DAT_140c44534 < (int)SUB164(auVar16,0)) {
        local_resc = (int)SUB164(auVar16,0);
    }
    if ((iVar6 < iVar9) && (iVar7 = iVar6, local_resc < iVar10)) {
        do {
            while (local_res8 = iVar7, local_res8 < iVar9) {
                uVar8 = (**(code **)(param_1 + 0x950))(&local_res8);
                for (puVar3 = *(ulonglong **)
                        (*(longlong *)(param_1 + 0x948) +
                         (uVar8 % *(ulonglong *)(param_1 + 0x940)) * 8); puVar3 != (ulonglong *)0x0;
                     puVar3 = (ulonglong *)puVar3[1]) {
                    if ((uVar8 == *puVar3) && (iVar7 = (**(code **)(param_1 + 0x958))(), iVar7 != 0)) {
                        if ((puVar3 + 3 != (ulonglong *)0x0) && (uVar8 = puVar3[3], uVar8 != 0)) {
                            for (lVar2 = *(longlong *)(uVar8 + 0x28); lVar2 != 0;
                                 lVar2 = *(longlong *)(lVar2 + 0x18)) {
                                plVar4 = *(longlong **)(lVar2 + 8);
                                if (((plVar4[0x26] == 0) && (iVar7 = (**(code **)(*plVar4 + 0x18))(), iVar7 != 0))
                                    && (plVar4[0x26] == 0)) {
                                    pplVar1 = (longlong **)(plVar4 + 0x27);
                                    plVar4[0x26] = (longlong)&local_res10;
                                    *pplVar1 = local_res10;
                                    local_res10 = plVar4;
                                    if (*pplVar1 != (longlong *)0x0) {
                                        (*pplVar1)[0x26] = (longlong)pplVar1;
                                    }
                                }
                            }
                        }
                        break;
                    }
                }
                iVar7 = local_res8 + 1;
            }
            local_resc = local_resc + 1;
            iVar7 = iVar6;
        } while (local_resc < iVar10);
        while (local_res10 != (longlong *)0x0) {
            if ((longlong *)local_res10[0x26] != (longlong *)0x0) {
                *(longlong *)local_res10[0x26] = local_res10[0x27];
            }
            if (local_res10[0x27] != 0) {
                *(longlong *)(local_res10[0x27] + 0x130) = local_res10[0x26];
            }
            local_res10[0x26] = 0;
            local_res10[0x27] = 0;
            auVar15 = minps(*(undefined (*) [16])(local_res10 + 6),param_3[1]);
            auVar12 = maxps(*(undefined (*) [16])(local_res10 + 4),*param_3);
            if (SUB164(auVar12,0) < SUB164(auVar15,0)) {
                fStack68 = SUB164(auVar12 >> 0x20,0);
                fStack52 = SUB164(auVar15 >> 0x20,0);
                if (fStack68 < fStack52) {
                    fStack64 = SUB164(auVar12 >> 0x40,0);
                    fStack48 = SUB164(auVar15 >> 0x40,0);
                    if (fStack64 < fStack48) {
                        FUN_140390c00(local_res10,param_3);
                    }
                }
            }
        }
    }
    return uVar11;
}



// WARNING: Could not reconcile some variable overlaps

uint FUN_140359110(longlong param_1,undefined8 param_2,undefined8 param_3,undefined (*param_4) [16])

{
    longlong **pplVar1;
    longlong **pplVar2;
    ulonglong *puVar3;
    longlong lVar4;
    longlong *plVar5;
    uint uVar6;
    uint uVar7;
    ulonglong uVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    undefined auVar12 [16];
    undefined auVar13 [16];
    float fVar14;
    undefined auVar16 [16];
    int local_res20;
    int local_res24;
    longlong *local_68;
    int local_60;
    int local_5c;
    int local_58;
    int local_54;
    undefined local_48 [8];
    float fStack64;
    undefined local_38 [8];
    float fStack48;
    undefined auVar15 [16];

    uVar6 = FUN_140358d20();
    fVar14 = (DAT_140c43fb8 * *(float *)*param_4 + 0.5) * 2048.0;
    auVar15 = ZEXT416((uint)fVar14) & (undefined  [16])0xffffffffffffffff;
    iVar9 = (int)fVar14;
    uVar7 = uVar6;
    if ((iVar9 != -0x80000000) && ((float)iVar9 != fVar14)) {
        uVar7 = movmskps(uVar6,ZEXT816(SUB168(auVar15,0) | SUB168(auVar15,0) << 0x20));
        uVar7 = uVar7 & 1;
        auVar15 = ZEXT416((uint)(float)(iVar9 - uVar7));
    }
    auVar12 = ZEXT416((uint)(DAT_140c43fb8 * *(float *)(*param_4 + 8))) &
              (undefined  [16])0xffffffffffffffff;
    fVar14 = (SUB164(auVar12,0) + 0.5) * 2048.0;
    auVar16 = CONCAT124(SUB1612(auVar12 >> 0x20,0),fVar14);
    iVar9 = (int)fVar14;
    if ((iVar9 != -0x80000000) && ((float)iVar9 != fVar14)) {
        uVar7 = movmskps(uVar7,CONCAT88(SUB168(auVar12 >> 0x40,0),
                                        SUB168(auVar16,0) | SUB168(auVar16,0) << 0x20) &
                               (undefined  [16])0xffffffffffffffff);
        uVar7 = uVar7 & 1;
        auVar16 = ZEXT416((uint)(float)(iVar9 - uVar7));
    }
    auVar12 = ZEXT416((uint)(DAT_140c43fb8 * *(float *)param_4[1])) &
              (undefined  [16])0xffffffffffffffff;
    fVar14 = (SUB164(auVar12,0) + 0.5) * 2048.0;
    auVar13 = CONCAT124(SUB1612(auVar12 >> 0x20,0),fVar14);
    iVar9 = (int)fVar14;
    if ((iVar9 != -0x80000000) && ((float)iVar9 != fVar14)) {
        uVar7 = movmskps(uVar7,CONCAT88(SUB168(auVar12 >> 0x40,0),
                                        SUB168(auVar13,0) | SUB168(auVar13,0) << 0x20) &
                               (undefined  [16])0xffffffffffffffff);
        uVar7 = uVar7 & 1;
        auVar13 = ZEXT416((uint)(float)(iVar9 - uVar7));
    }
    auVar12 = ZEXT416((uint)(DAT_140c43fb8 * *(float *)(param_4[1] + 8))) &
              (undefined  [16])0xffffffffffffffff;
    iVar10 = (int)SUB164(auVar13,0) + 1;
    fVar14 = (SUB164(auVar12,0) + 0.5) * 2048.0;
    auVar13 = CONCAT124(SUB1612(auVar12 >> 0x20,0),fVar14);
    iVar9 = (int)fVar14;
    if ((iVar9 != -0x80000000) && ((float)iVar9 != fVar14)) {
        uVar7 = movmskps(uVar7,CONCAT88(SUB168(auVar12 >> 0x40,0),
                                        SUB168(auVar13,0) | SUB168(auVar13,0) << 0x20) &
                               (undefined  [16])0xffffffffffffffff);
        auVar13 = ZEXT416((uint)(float)(iVar9 - (uVar7 & 1)));
    }
    iVar9 = (int)SUB164(auVar13,0) + 1;
    local_68 = (longlong *)0x0;
    local_58 = DAT_140c44538;
    if (iVar10 < DAT_140c44538) {
        local_58 = iVar10;
    }
    local_54 = DAT_140c4453c;
    if (iVar9 < DAT_140c4453c) {
        local_54 = iVar9;
    }
    local_60 = DAT_140c44530;
    if (DAT_140c44530 < (int)SUB164(auVar15,0)) {
        local_60 = (int)SUB164(auVar15,0);
    }
    local_res24 = DAT_140c44534;
    if (DAT_140c44534 < (int)SUB164(auVar16,0)) {
        local_res24 = (int)SUB164(auVar16,0);
    }
    if ((local_58 <= local_60) ||
        (local_5c = local_res24, iVar9 = local_58, iVar10 = local_54, iVar11 = local_60,
                local_54 <= local_res24)) {
        return uVar6;
    }
    do {
        local_res20 = iVar11;
        iVar11 = local_res20;
        if (local_res20 < iVar9) {
            do {
                uVar8 = (**(code **)(param_1 + 0x950))(&local_res20);
                for (puVar3 = *(ulonglong **)
                        (*(longlong *)(param_1 + 0x948) +
                         (uVar8 % *(ulonglong *)(param_1 + 0x940)) * 8); puVar3 != (ulonglong *)0x0;
                     puVar3 = (ulonglong *)puVar3[1]) {
                    if ((uVar8 == *puVar3) && (iVar9 = (**(code **)(param_1 + 0x958))(), iVar9 != 0)) {
                        if ((puVar3 + 3 != (ulonglong *)0x0) && (uVar8 = puVar3[3], uVar8 != 0)) {
                            for (lVar4 = *(longlong *)(uVar8 + 0x28); lVar4 != 0;
                                 lVar4 = *(longlong *)(lVar4 + 0x18)) {
                                plVar5 = *(longlong **)(lVar4 + 8);
                                if (plVar5[0x26] == 0) {
                                    pplVar1 = (longlong **)(plVar5 + 0x27);
                                    plVar5[0x26] = (longlong)&local_68;
                                    *pplVar1 = local_68;
                                    local_68 = plVar5;
                                    if (*pplVar1 != (longlong *)0x0) {
                                        (*pplVar1)[0x26] = (longlong)pplVar1;
                                    }
                                }
                            }
                        }
                        break;
                    }
                }
                local_res20 = local_res20 + 1;
                iVar9 = local_58;
                iVar10 = local_54;
                iVar11 = local_60;
            } while (local_res20 < local_58);
        }
        local_res24 = local_res24 + 1;
        if (iVar10 <= local_res24) {
            while (plVar5 = local_68, plVar5 != (longlong *)0x0) {
                if ((longlong *)plVar5[0x26] != (longlong *)0x0) {
                    *(longlong *)plVar5[0x26] = plVar5[0x27];
                }
                pplVar1 = (longlong **)(plVar5 + 0x27);
                if (*pplVar1 != (longlong *)0x0) {
                    (*pplVar1)[0x26] = plVar5[0x26];
                }
                plVar5[0x26] = 0;
                *pplVar1 = (longlong *)0x0;
                local_68 = plVar5;
                iVar9 = (**(code **)(*plVar5 + 0x18))(plVar5);
                if (iVar9 == 0) {
                    _local_38 = minps(*(undefined (*) [16])(plVar5 + 6),param_4[1]);
                    _local_48 = maxps(*(undefined (*) [16])(plVar5 + 4),*param_4);
                    if (SUB164(_local_48,0) < SUB164(_local_38,0)) {
                        local_48._4_4_ = SUB164(_local_48 >> 0x20,0);
                        local_38._4_4_ = SUB164(_local_38 >> 0x20,0);
                        if (local_48._4_4_ < local_38._4_4_) {
                            fStack64 = SUB164(_local_48 >> 0x40,0);
                            fStack48 = SUB164(_local_38 >> 0x40,0);
                            if ((fStack64 < fStack48) &&
                                (pplVar2 = (longlong **)(param_1 + 0x1550), plVar5[0x26] == 0)) {
                                plVar5[0x26] = (longlong)pplVar2;
                                *pplVar1 = *pplVar2;
                                *pplVar2 = plVar5;
                                if (*pplVar1 != (longlong *)0x0) {
                                    (*pplVar1)[0x26] = (longlong)pplVar1;
                                }
                            }
                        }
                    }
                }
            }
            return uVar6;
        }
    } while( true );
}



void FUN_140359490(longlong param_1,undefined (*param_2) [16])

{
    longlong **pplVar1;
    longlong **pplVar2;
    longlong *plVar3;
    ulonglong *puVar4;
    longlong lVar5;
    longlong *plVar6;
    int iVar7;
    uint uVar8;
    int iVar9;
    int iVar10;
    longlong in_RAX;
    ulonglong uVar11;
    int iVar12;
    int iVar13;
    undefined auVar14 [16];
    float fVar15;
    undefined auVar16 [16];
    undefined auVar17 [16];
    undefined auVar18 [16];
    int local_res8;
    int local_resc;
    float fStack68;
    float fStack64;
    float fStack52;
    float fStack48;

    uVar8 = (uint)in_RAX;
    pplVar1 = (longlong **)(param_1 + 0x1550);
    plVar3 = *pplVar1;
    while (plVar3 != (longlong *)0x0) {
        if ((longlong *)plVar3[0x26] != (longlong *)0x0) {
            in_RAX = plVar3[0x27];
            *(longlong *)plVar3[0x26] = in_RAX;
        }
        if (plVar3[0x27] != 0) {
            in_RAX = plVar3[0x26];
            *(longlong *)(plVar3[0x27] + 0x130) = in_RAX;
        }
        uVar8 = (uint)in_RAX;
        plVar3[0x26] = 0;
        plVar3[0x27] = 0;
        plVar3 = *pplVar1;
    }
    fVar15 = (DAT_140c43fb8 * *(float *)*param_2 + 0.5) * 2048.0;
    auVar14 = ZEXT416((uint)fVar15) & (undefined  [16])0xffffffffffffffff;
    iVar12 = (int)fVar15;
    if ((iVar12 != -0x80000000) && ((float)iVar12 != fVar15)) {
        uVar8 = movmskps(uVar8,ZEXT816(SUB168(auVar14,0) | SUB168(auVar14,0) << 0x20));
        uVar8 = uVar8 & 1;
        auVar14 = ZEXT416((uint)(float)(iVar12 - uVar8));
    }
    auVar17 = ZEXT416((uint)(DAT_140c43fb8 * *(float *)(*param_2 + 8))) &
              (undefined  [16])0xffffffffffffffff;
    fVar15 = (SUB164(auVar17,0) + 0.5) * 2048.0;
    auVar18 = CONCAT124(SUB1612(auVar17 >> 0x20,0),fVar15);
    iVar12 = (int)fVar15;
    if ((iVar12 != -0x80000000) && ((float)iVar12 != fVar15)) {
        uVar8 = movmskps(uVar8,CONCAT88(SUB168(auVar17 >> 0x40,0),
                                        SUB168(auVar18,0) | SUB168(auVar18,0) << 0x20) &
                               (undefined  [16])0xffffffffffffffff);
        uVar8 = uVar8 & 1;
        auVar18 = ZEXT416((uint)(float)(iVar12 - uVar8));
    }
    auVar17 = ZEXT416((uint)(DAT_140c43fb8 * *(float *)param_2[1])) &
              (undefined  [16])0xffffffffffffffff;
    fVar15 = (SUB164(auVar17,0) + 0.5) * 2048.0;
    auVar16 = CONCAT124(SUB1612(auVar17 >> 0x20,0),fVar15);
    iVar12 = (int)fVar15;
    if ((iVar12 != -0x80000000) && ((float)iVar12 != fVar15)) {
        uVar8 = movmskps(uVar8,CONCAT88(SUB168(auVar17 >> 0x40,0),
                                        SUB168(auVar16,0) | SUB168(auVar16,0) << 0x20) &
                               (undefined  [16])0xffffffffffffffff);
        uVar8 = uVar8 & 1;
        auVar16 = ZEXT416((uint)(float)(iVar12 - uVar8));
    }
    auVar17 = ZEXT416((uint)(DAT_140c43fb8 * *(float *)(param_2[1] + 8))) &
              (undefined  [16])0xffffffffffffffff;
    iVar13 = (int)SUB164(auVar16,0) + 1;
    fVar15 = (SUB164(auVar17,0) + 0.5) * 2048.0;
    auVar16 = CONCAT124(SUB1612(auVar17 >> 0x20,0),fVar15);
    iVar12 = (int)fVar15;
    if ((iVar12 != -0x80000000) && ((float)iVar12 != fVar15)) {
        uVar8 = movmskps(uVar8,CONCAT88(SUB168(auVar17 >> 0x40,0),
                                        SUB168(auVar16,0) | SUB168(auVar16,0) << 0x20) &
                               (undefined  [16])0xffffffffffffffff);
        auVar16 = ZEXT416((uint)(float)(iVar12 - (uVar8 & 1)));
    }
    iVar9 = (int)SUB164(auVar16,0) + 1;
    iVar12 = DAT_140c44538;
    if (iVar13 < DAT_140c44538) {
        iVar12 = iVar13;
    }
    iVar13 = DAT_140c4453c;
    if (iVar9 < DAT_140c4453c) {
        iVar13 = iVar9;
    }
    iVar9 = DAT_140c44530;
    if (DAT_140c44530 < (int)SUB164(auVar14,0)) {
        iVar9 = (int)SUB164(auVar14,0);
    }
    iVar10 = DAT_140c44534;
    if (DAT_140c44534 < (int)SUB164(auVar18,0)) {
        iVar10 = (int)SUB164(auVar18,0);
    }
    if (iVar9 < iVar12) {
        while (iVar7 = iVar9, iVar10 < iVar13) {
            while (local_resc = iVar10, local_res8 = iVar7, local_res8 < iVar12) {
                uVar11 = (**(code **)(param_1 + 0x950))(&local_res8);
                for (puVar4 = *(ulonglong **)
                        (*(longlong *)(param_1 + 0x948) +
                         (uVar11 % *(ulonglong *)(param_1 + 0x940)) * 8); puVar4 != (ulonglong *)0x0;
                     puVar4 = (ulonglong *)puVar4[1]) {
                    if ((uVar11 == *puVar4) && (iVar10 = (**(code **)(param_1 + 0x958))(), iVar10 != 0)) {
                        if ((puVar4 + 3 != (ulonglong *)0x0) && (uVar11 = puVar4[3], uVar11 != 0)) {
                            for (lVar5 = *(longlong *)(uVar11 + 0x28); lVar5 != 0;
                                 lVar5 = *(longlong *)(lVar5 + 0x18)) {
                                plVar3 = *(longlong **)(lVar5 + 8);
                                if (plVar3[0x26] == 0) {
                                    plVar3[0x26] = (longlong)pplVar1;
                                    pplVar2 = (longlong **)(plVar3 + 0x27);
                                    *pplVar2 = *pplVar1;
                                    *pplVar1 = plVar3;
                                    if (*pplVar2 != (longlong *)0x0) {
                                        (*pplVar2)[0x26] = (longlong)pplVar2;
                                    }
                                }
                            }
                        }
                        break;
                    }
                }
                iVar10 = local_resc;
                iVar7 = local_res8 + 1;
            }
            iVar10 = local_resc + 1;
            local_resc = iVar10;
        }
    }
    plVar3 = *pplVar1;
    do {
        plVar6 = plVar3;
        if (plVar6 == (longlong *)0x0) {
            return;
        }
        plVar3 = (longlong *)plVar6[0x27];
        iVar12 = (**(code **)(*plVar6 + 0x18))(plVar6);
        if (iVar12 == 0) goto LAB_1403597e8;
        auVar17 = minps(*(undefined (*) [16])(plVar6 + 6),param_2[1]);
        auVar14 = maxps(*(undefined (*) [16])(plVar6 + 4),*param_2);
        if (SUB164(auVar17,0) <= SUB164(auVar14,0)) goto LAB_1403597e8;
        fStack68 = SUB164(auVar14 >> 0x20,0);
        fStack52 = SUB164(auVar17 >> 0x20,0);
        if (fStack52 <= fStack68) goto LAB_1403597e8;
        fStack64 = SUB164(auVar14 >> 0x40,0);
        fStack48 = SUB164(auVar17 >> 0x40,0);
        if (fStack48 <= fStack64) {
            LAB_1403597e8:
            if ((longlong *)plVar6[0x26] != (longlong *)0x0) {
                *(longlong *)plVar6[0x26] = plVar6[0x27];
            }
            if (plVar6[0x27] != 0) {
                *(longlong *)(plVar6[0x27] + 0x130) = plVar6[0x26];
            }
            plVar6[0x26] = 0;
            plVar6[0x27] = 0;
        }
    } while( true );
}



float * FUN_140359840(longlong param_1,float *param_2,float *param_3)

{
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;

    fVar7 = *(float *)(param_1 + 0x660);
    fVar5 = *(float *)(param_1 + 0x664);
    fVar2 = *(float *)(param_1 + 0x670);
    fVar4 = *(float *)(param_1 + 0x674);
    fVar1 = *param_3;
    fVar3 = param_3[1];
    *(undefined8 *)(param_2 + 1) = 0;
    *(undefined8 *)(param_2 + 3) = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    fVar1 = fVar1 * fVar7 + fVar2;
    fVar3 = fVar3 * fVar5 + fVar4;
    fVar2 = param_3[4] * fVar7 + fVar2;
    fVar4 = param_3[5] * fVar5 + fVar4;
    if (*(int *)(param_1 + 0x648) != 0) {
        *(undefined8 *)(param_2 + 8) = 0;
        param_2[0xb] = 0.0;
        param_2[0xf] = 1.0;
        fVar7 = *(float *)(param_1 + 0x64c);
        *param_2 = 2.0 / (fVar2 - fVar1);
        fVar5 = *(float *)(param_1 + 0x650);
        param_2[5] = 2.0 / (fVar4 - fVar3);
        param_2[0xd] = (fVar3 + fVar4) / (fVar3 - fVar4);
        fVar5 = 1.0 / (fVar7 - fVar5);
        param_2[10] = fVar5;
        param_2[0xc] = (fVar1 + fVar2) / (fVar1 - fVar2);
        param_2[0xe] = fVar5 * fVar7;
        return param_2;
    }
    *(undefined8 *)(param_2 + 0xc) = 0;
    param_2[0xf] = 0.0;
    param_2[0xb] = -1.0;
    fVar7 = *(float *)(param_1 + 0x650);
    fVar6 = *(float *)(param_1 + 0x64c) * 2.0;
    fVar5 = 1.0 / (fVar2 - fVar1);
    param_2[8] = (fVar1 + fVar2) * fVar5;
    *param_2 = fVar5 * fVar6;
    fVar5 = 1.0 / (fVar4 - fVar3);
    param_2[9] = (fVar3 + fVar4) * fVar5;
    param_2[5] = fVar5 * fVar6;
    fVar7 = fVar7 / (*(float *)(param_1 + 0x64c) - fVar7);
    param_2[10] = fVar7;
    param_2[0xe] = fVar7 * *(float *)(param_1 + 0x64c);
    return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140359a20(longlong param_1)

{
    undefined4 *puVar1;
    int iVar2;
    longlong *plVar3;
    float fVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
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
    int iVar26;
    undefined4 *puVar27;
    undefined8 uVar28;
    float *pfVar29;
    float *pfVar30;
    float *pfVar31;
    longlong lVar32;
    int iVar33;
    int iVar34;
    longlong lVar35;
    undefined auVar36 [16];
    undefined auStack424 [32];
    longlong local_188;
    longlong local_180;
    float local_178;
    undefined4 uStack372;
    undefined4 uStack368;
    undefined4 uStack364;
    undefined4 local_168;
    undefined4 uStack356;
    undefined4 uStack352;
    undefined4 uStack348;
    undefined local_158 [64];
    float local_118 [24];
    undefined local_b8 [96];
    ulonglong local_58;

    local_58 = DAT_140c0f7b0 ^ (ulonglong)auStack424;
    lVar35 = 6;
    lVar32 = 6;
    puVar27 = (undefined4 *)(param_1 + 0x6f0);
    do {
        puVar1 = (undefined4 *)
                ((param_1 - (longlong)(undefined4 *)(param_1 + 0x6f0)) + 0x690 + (longlong)puVar27);
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        *puVar27 = *puVar1;
        puVar27[1] = uVar5;
        puVar27[2] = uVar6;
        puVar27[3] = uVar7;
        lVar32 = lVar32 + -1;
        puVar27 = puVar27 + 4;
    } while (lVar32 != 0);
    if (DAT_140c657f0 != 0) {
        local_180 = param_1 + 0xdb0;
        local_188 = param_1 + 0x640;
        FUN_1402c8500();
    }
    iVar33 = 0;
    lVar32 = *(longlong *)(param_1 + 0x1558);
    while (lVar32 != 0) {
        lVar32 = *(longlong *)(param_1 + 0x1558);
        if (*(undefined8 **)(lVar32 + 0x140) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar32 + 0x140) = *(undefined8 *)(lVar32 + 0x148);
        }
        if (*(longlong *)(lVar32 + 0x148) != 0) {
            *(undefined8 *)(*(longlong *)(lVar32 + 0x148) + 0x140) = *(undefined8 *)(lVar32 + 0x140);
        }
        *(undefined8 *)(lVar32 + 0x140) = 0;
        *(undefined8 *)(lVar32 + 0x148) = 0;
        lVar32 = *(longlong *)(param_1 + 0x1558);
    }
    *(undefined8 *)(param_1 + 0x1538) = 0;
    if (*(int *)(param_1 + 0x648) == 0) {
        pfVar29 = (float *)(param_1 + 0x750);
        local_178 = *pfVar29;
        uStack372 = *(undefined4 *)(param_1 + 0x754);
        uStack368 = *(undefined4 *)(param_1 + 0x758);
        uStack364 = *(undefined4 *)(param_1 + 0x75c);
        local_168 = *(undefined4 *)(param_1 + 0x760);
        uStack356 = *(undefined4 *)(param_1 + 0x764);
        uStack352 = *(undefined4 *)(param_1 + 0x768);
        uStack348 = *(undefined4 *)(param_1 + 0x76c);
        iVar34 = (int)((*(float *)(param_1 + 0x390) * DAT_140c43fb8 + 0.5) * 2048.0);
        iVar26 = (int)((DAT_140c43fb8 * 0.0 + 0.5) * 2048.0);
        if ((((*(int *)(param_1 + 0x88c) <= iVar34) && (iVar34 < *(int *)(param_1 + 0x894))) &&
             (*(int *)(param_1 + 0x890) <= iVar26)) && (iVar26 < *(int *)(param_1 + 0x898))) {
            iVar2 = *(int *)(param_1 + 0x89c);
            iVar26 = iVar26 % *(int *)(param_1 + 0x8a0);
            lVar32 = *(longlong *)
                    (*(longlong *)(param_1 + 0x8e0) +
                     (ulonglong)
                             ((uint)(iVar34 % iVar2 < 0) * iVar2 +
                              ((uint)(iVar26 < 0) * *(int *)(param_1 + 0x8a0) + iVar26) * iVar2 + iVar34 % iVar2)
                     * 8);
            if (lVar32 != 0) {
                for (lVar32 = *(longlong *)(*(longlong *)(lVar32 + 0x18) + 0x28); lVar32 != 0;
                     lVar32 = *(longlong *)(lVar32 + 0x18)) {
                    plVar3 = *(longlong **)(lVar32 + 8);
                    iVar26 = (**(code **)(*plVar3 + 0x18))(plVar3);
                    if ((iVar26 == 0) &&
                        (iVar26 = (**(code **)(*plVar3 + 0x20))(plVar3,param_1 + 0x390,0,0), iVar26 != 0)) {
                        local_178 = _DAT_140c78500;
                        uStack372 = uRam0000000140c78504;
                        uStack368 = uRam0000000140c78508;
                        uStack364 = uRam0000000140c7850c;
                        local_168 = _DAT_140c78510;
                        uStack356 = uRam0000000140c78514;
                        uStack352 = uRam0000000140c78518;
                        uStack348 = uRam0000000140c7851c;
                        FUN_140390f20(plVar3,pfVar29,&local_178);
                        *(longlong **)(param_1 + 0x1538) = plVar3;
                        break;
                    }
                }
            }
        }
        if ((*(uint *)(param_1 + 0x80) & 0x1000000) != 0) {
            *pfVar29 = local_178;
            *(undefined4 *)(param_1 + 0x754) = uStack372;
            *(undefined4 *)(param_1 + 0x758) = uStack368;
            *(undefined4 *)(param_1 + 0x75c) = uStack364;
            *(undefined4 *)(param_1 + 0x760) = local_168;
            *(undefined4 *)(param_1 + 0x764) = uStack356;
            *(undefined4 *)(param_1 + 0x768) = uStack352;
            *(undefined4 *)(param_1 + 0x76c) = uStack348;
            if ((*(float *)(param_1 + 0x760) < *pfVar29 || *(float *)(param_1 + 0x760) == *pfVar29) ||
                (*(float *)(param_1 + 0x764) < *(float *)(param_1 + 0x754) ||
                 *(float *)(param_1 + 0x764) == *(float *)(param_1 + 0x754))) {
                iVar33 = 1;
            }
            *(int *)(param_1 + 0x770) = iVar33;
            if (iVar33 == 0) {
                uVar28 = FUN_140359840(param_1,local_158,pfVar29);
                pfVar29 = (float *)FUN_1401b20f0(local_b8,uVar28);
                fVar4 = *(float *)(param_1 + 0x400);
                fVar8 = *(float *)(param_1 + 0x404);
                fVar9 = *(float *)(param_1 + 0x408);
                fVar10 = *(float *)(param_1 + 0x40c);
                fVar11 = *(float *)(param_1 + 0x410);
                fVar12 = *(float *)(param_1 + 0x414);
                fVar13 = *(float *)(param_1 + 0x418);
                fVar14 = *(float *)(param_1 + 0x41c);
                fVar15 = *(float *)(param_1 + 0x420);
                fVar16 = *(float *)(param_1 + 0x424);
                fVar17 = *(float *)(param_1 + 0x428);
                fVar18 = *(float *)(param_1 + 0x42c);
                fVar19 = *(float *)(param_1 + 0x430);
                fVar20 = *(float *)(param_1 + 0x434);
                fVar21 = *(float *)(param_1 + 0x438);
                fVar22 = *(float *)(param_1 + 0x43c);
                if (pfVar29 < pfVar29 + 0x18) {
                    pfVar30 = pfVar29;
                    do {
                        fVar23 = *pfVar30;
                        fVar24 = pfVar30[1];
                        fVar25 = pfVar30[3];
                        pfVar31 = pfVar30 + 4;
                        pfVar30 = (float *)((longlong)pfVar30 + ((longlong)local_118 - (longlong)pfVar29));
                        *pfVar30 = fVar24 * fVar11 + fVar23 * fVar4 + fVar15 * 0.0 + fVar25 * fVar19;
                        pfVar30[1] = fVar24 * fVar12 + fVar23 * fVar8 + fVar16 * 0.0 + fVar25 * fVar20;
                        pfVar30[2] = fVar24 * fVar13 + fVar23 * fVar9 + fVar17 * 0.0 + fVar25 * fVar21;
                        pfVar30[3] = fVar24 * fVar14 + fVar23 * fVar10 + fVar18 * 0.0 + fVar25 * fVar22;
                        pfVar30 = pfVar31;
                    } while (pfVar31 < pfVar29 + 0x18);
                }
                lVar32 = 6;
                pfVar29 = local_118;
                do {
                    fVar8 = *pfVar29;
                    fVar9 = pfVar29[1];
                    fVar10 = pfVar29[2];
                    fVar11 = pfVar29[3];
                    auVar36 = CONCAT124(SUB1612(CONCAT412(fVar11 * fVar11,
                                                          CONCAT48(fVar10 * fVar10,
                                                                   CONCAT44(fVar9 * fVar9,fVar8 * fVar8))) >>
                                                                                                           0x20,0),fVar8 * fVar8 + fVar9 * fVar9 + 0.0);
                    auVar36 = rsqrtss(auVar36,auVar36);
                    fVar4 = SUB164(auVar36,0);
                    *pfVar29 = fVar4 * fVar8;
                    pfVar29[1] = fVar4 * fVar9;
                    pfVar29[2] = fVar4 * fVar10;
                    pfVar29[3] = fVar4 * fVar11;
                    lVar32 = lVar32 + -1;
                    pfVar29 = pfVar29 + 4;
                } while (lVar32 != 0);
                pfVar29 = local_118;
                do {
                    fVar4 = *pfVar29;
                    fVar8 = pfVar29[1];
                    fVar9 = pfVar29[2];
                    fVar10 = pfVar29[3];
                    pfVar29 = pfVar29 + 4;
                    pfVar30 = (float *)((param_1 - (longlong)local_118) + 0x680 + (longlong)pfVar29);
                    *pfVar30 = fVar4;
                    pfVar30[1] = fVar8;
                    pfVar30[2] = fVar9;
                    pfVar30[3] = fVar10;
                    lVar35 = lVar35 + -1;
                } while (lVar35 != 0);
            }
        }
        *(undefined8 *)(param_1 + 0x1540) = *(undefined8 *)(param_1 + 0x1558);
    }
    else {
        *(undefined8 *)(param_1 + 0x1540) = *(undefined8 *)(param_1 + 0x1558);
    }
    FUN_1407db4f0(local_58 ^ (ulonglong)auStack424);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140359e70(longlong param_1)

{
    longlong *plVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong lVar4;
    int iVar5;
    uint uVar6;
    int *piVar7;
    uint uVar8;
    uint uVar9;
    uint uVar10;
    undefined auVar11 [16];
    undefined auVar12 [16];
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    LARGE_INTEGER local_res10;

    plVar1 = (longlong *)(param_1 + 0x920);
    lVar3 = *plVar1;
    while (lVar3 != 0) {
        if (*(undefined8 **)(lVar3 + 0x588) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar3 + 0x588) = *(undefined8 *)(lVar3 + 0x590);
        }
        if (*(longlong *)(lVar3 + 0x590) != 0) {
            *(undefined8 *)(*(longlong *)(lVar3 + 0x590) + 0x588) = *(undefined8 *)(lVar3 + 0x588);
        }
        *(undefined8 *)(lVar3 + 0x588) = 0;
        *(undefined8 *)(lVar3 + 0x590) = 0;
        lVar3 = *plVar1;
    }
    if (*(int *)(param_1 + 0x770) == 0) {
        FUN_140357df0(param_1);
        fVar19 = *(float *)(param_1 + 0x88);
        fVar17 = fVar19 * fVar19;
        fVar18 = fVar17 * 0.25;
        fVar13 = *(float *)(param_1 + 0x390) * DAT_140c43fb8;
        fVar14 = DAT_140c43fb8 * 0.0;
        fVar19 = (fVar19 + 32.0) * (fVar19 + 32.0);
        lVar3 = *(longlong *)(param_1 + 0x918);
        while (lVar4 = lVar3, lVar4 != 0) {
            lVar3 = *(longlong *)(lVar4 + 0x580);
            piVar7 = (int *)(**(code **)(**(longlong **)(lVar4 + 0x10) + 0x28))();
            auVar11 = minps(*(undefined (*) [16])(param_1 + 0x360),*(undefined (*) [16])(piVar7 + 0xc));
            auVar11 = maxps(*(undefined (*) [16])(piVar7 + 8),auVar11);
            fVar15 = SUB164(auVar11,0) - SUB164(*(undefined (*) [16])(param_1 + 0x360),0);
            fVar15 = fVar15 * fVar15 + 0.0;
            if (fVar15 <= fVar19) {
                iVar5 = -1;
                if (fVar18 < fVar15) {
                    iVar5 = 0;
                }
                if (0 < iVar5) {
                    QueryPerformanceCounter(&local_res10);
                }
                if (((*(longlong *)(lVar4 + 0x5b8) == 0) || (iVar5 = FUN_14037d060(), iVar5 != 0)) &&
                    (fVar15 <= fVar17)) {
                    auVar11 = *(undefined (*) [16])(param_1 + 0x390);
                    auVar12 = minps(auVar11,*(undefined (*) [16])(piVar7 + 0xc));
                    auVar12 = maxps(*(undefined (*) [16])(piVar7 + 8),auVar12);
                    fVar15 = SUB164(auVar12,0) - SUB164(auVar11,0);
                    fVar16 = SUB164(auVar12 >> 0x40,0) - SUB164(auVar11 >> 0x40,0);
                    *(float *)(lVar4 + 0x30) = fVar16 * fVar16 + fVar15 * fVar15;
                    uVar6 = piVar7[1] - (int)((fVar14 + 0.5) * 2048.0);
                    uVar10 = *piVar7 - (int)((fVar13 + 0.5) * 2048.0);
                    uVar8 = (int)uVar6 >> 0x1f;
                    uVar9 = (int)uVar10 >> 0x1f;
                    *(uint *)(lVar4 + 0x34) = ((uVar6 ^ uVar8) - uVar8) + ((uVar10 ^ uVar9) - uVar9);
                    if (*(longlong *)(lVar4 + 0x588) == 0) {
                        *(longlong **)(lVar4 + 0x588) = plVar1;
                        plVar2 = (longlong *)(lVar4 + 0x590);
                        *plVar2 = *plVar1;
                        *plVar1 = lVar4;
                        if (*plVar2 != 0) {
                            *(longlong **)(*plVar2 + 0x588) = plVar2;
                        }
                    }
                }
            }
        }
        FUN_140371550(plVar1);
    }
    return;
}



// WARNING: Removing unreachable block (ram,0x00014035a3ec)
// WARNING: Could not reconcile some variable overlaps

void FUN_14035a150(longlong param_1)

{
    int iVar1;
    undefined8 uVar2;
    int iVar3;
    longlong lVar4;
    float *pfVar5;
    float **ppfVar6;
    float *pfVar7;
    int iVar8;
    int *piVar9;
    float *pfVar10;
    float *pfVar11;
    longlong lVar12;
    float *pfVar13;
    int iVar14;
    longlong lVar15;
    longlong lVar16;
    int iVar17;
    longlong lVar18;
    undefined auVar19 [16];
    undefined auVar20 [16];
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
    float fVar32;
    undefined4 uVar33;
    undefined4 uVar34;
    undefined4 uVar35;
    float fVar36;
    int local_res18;
    int local_res1c;
    int local_res20;
    int local_res24;
    float local_198;
    float local_194;
    float *local_190;
    undefined8 local_188;
    int local_180;
    int local_17c;
    longlong local_178;
    undefined local_168 [16];
    undefined local_158 [16];
    float local_148;
    float local_144;
    float *local_140;
    undefined8 local_138;
    undefined local_128 [16];
    undefined local_118 [16];
    undefined local_108 [16];
    undefined local_f8 [184];

    *(undefined4 *)(param_1 + 0x354) = 0;
    if (((*(uint *)(param_1 + 0x80) & 0x1000000) != 0) &&
        (fVar31 = 0.0, *(float *)(param_1 + 0x52c) != 0.0)) {
        iVar14 = (int)((*(float *)(param_1 + 0x390) * DAT_140c43fb8 + 0.5) * 2048.0);
        iVar3 = (int)((*(float *)(param_1 + 0x398) * DAT_140c43fb8 + 0.5) * 2048.0);
        if ((*(int *)(param_1 + 0x88c) <= iVar14) &&
            (((iVar14 < *(int *)(param_1 + 0x894) && (*(int *)(param_1 + 0x890) <= iVar3)) &&
              (iVar3 < *(int *)(param_1 + 0x898))))) {
            iVar8 = *(int *)(param_1 + 0x89c);
            iVar17 = iVar3 % *(int *)(param_1 + 0x8a0);
            lVar12 = *(longlong *)
                    (*(longlong *)(param_1 + 0x8e0) +
                     (ulonglong)
                             ((uint)(iVar14 % iVar8 < 0) * iVar8 +
                              ((uint)(iVar17 < 0) * *(int *)(param_1 + 0x8a0) + iVar17) * iVar8 + iVar14 % iVar8)
                     * 8);
            if ((lVar12 != 0) &&
                (fVar30 = *(float *)(lVar12 + 0xc4),
                        *(float *)(param_1 + 0x394) <= fVar30 && fVar30 != *(float *)(param_1 + 0x394))) {
                return;
            }
        }
        lVar12 = *(longlong *)(param_1 + 0x920);
        local_190 = &local_148;
        local_148 = DAT_140c440d8;
        local_198 = (float)((uint)DAT_140c440d8 ^ 0x80000000);
        local_188 = 0;
        local_140 = &local_198;
        local_138 = 0;
        local_194 = local_198;
        local_144 = local_198;
        if (lVar12 != 0) {
            fVar36 = 1.0;
            fVar30 = 3.141593;
            fVar32 = 0.0;
            uVar33 = 0;
            uVar34 = 0;
            uVar35 = 0;
            do {
                lVar15 = 0;
                fVar25 = *(float *)(lVar12 + 0x140) - *(float *)(param_1 + 0x390);
                fVar27 = *(float *)(lVar12 + 0x144) - *(float *)(param_1 + 0x394);
                fVar28 = *(float *)(lVar12 + 0x148) - *(float *)(param_1 + 0x398);
                fVar29 = *(float *)(lVar12 + 0x14c) - *(float *)(param_1 + 0x39c);
                fVar21 = *(float *)(lVar12 + 0x150) - *(float *)(param_1 + 0x390);
                fVar22 = *(float *)(lVar12 + 0x154) - *(float *)(param_1 + 0x394);
                fVar23 = *(float *)(lVar12 + 0x158) - *(float *)(param_1 + 0x398);
                fVar24 = *(float *)(lVar12 + 0x15c) - *(float *)(param_1 + 0x39c);
                local_168 = CONCAT412(fVar29,CONCAT48(fVar28,CONCAT44(fVar27,fVar25)));
                local_158 = CONCAT412(fVar24,CONCAT48(fVar23,CONCAT44(fVar22,fVar21)));
                local_118 = CONCAT412(uVar35,CONCAT48(uVar34,CONCAT44(uVar33,fVar32)));
                auVar19 = minps(CONCAT412(uVar35,CONCAT48(uVar34,CONCAT44(uVar33,fVar32))),
                                CONCAT412(fVar24,CONCAT48(fVar23,CONCAT44(fVar22,fVar21))));
                fVar26 = (fVar25 + fVar21) * 0.5;
                auVar19 = maxps(CONCAT412(fVar29,CONCAT48(fVar28,CONCAT44(fVar27,fVar25))),auVar19);
                local_108 = CONCAT412((fVar29 + fVar24) * 0.5,
                                      CONCAT48((fVar28 + fVar23) * 0.5,
                                               CONCAT44((fVar27 + fVar22) * 0.5,fVar26)));
                fVar22 = SUB164(auVar19 >> 0x40,0);
                fVar22 = fVar36 / SQRT(fVar22 * fVar22 + SUB164(auVar19,0) * SUB164(auVar19,0));
                *(float *)(lVar12 + 0x514) = fVar22;
                if (fVar26 < fVar32) {
                    fVar21 = fVar25;
                }
                fVar21 = fVar36 / SQRT(fVar21 * fVar21 + 0.0);
                *(float *)(lVar12 + 0x518) = fVar21;
                if (fVar31 <= fVar27) {
                    *(float *)(lVar12 + 0x510) = fVar21 * fVar27;
                }
                else {
                    *(float *)(lVar12 + 0x510) = fVar22 * fVar27;
                }
                iVar8 = *(int *)(lVar12 + 0xc);
                iVar17 = *(int *)(lVar12 + 8);
                if (iVar8 < iVar3) {
                    if (iVar17 < iVar14) {
                        fVar22 = (float)FUN_1408fd190(fVar23);
                        fVar23 = fVar28;
                    }
                    else {
                        if (iVar17 != iVar14) {
                            fVar22 = (float)FUN_1408fd190(fVar28);
                            fVar21 = (float)FUN_1408fd190(fVar23);
                            iVar17 = iVar17 + -1;
                            if ((((iVar17 < *(int *)(param_1 + 0x88c)) || (*(int *)(param_1 + 0x894) <= iVar17))
                                 || (iVar8 < *(int *)(param_1 + 0x890))) || (*(int *)(param_1 + 0x898) <= iVar8))
                                goto LAB_14035a62c;
                            iVar1 = *(int *)(param_1 + 0x89c);
                            iVar8 = iVar8 % *(int *)(param_1 + 0x8a0);
                            lVar4 = *(longlong *)
                                    (*(longlong *)(param_1 + 0x8e0) +
                                     (ulonglong)
                                             ((uint)(iVar17 % iVar1 < 0) * iVar1 +
                                              ((uint)(iVar8 < 0) * *(int *)(param_1 + 0x8a0) + iVar8) * iVar1 +
                                              iVar17 % iVar1) * 8);
                            goto LAB_14035a93b;
                        }
                        fVar22 = (float)FUN_1408fd190(fVar23);
                    }
                    fVar21 = (float)FUN_1408fd190(fVar23);
                    iVar8 = iVar8 + 1;
                    if (((iVar17 < *(int *)(param_1 + 0x88c)) || (*(int *)(param_1 + 0x894) <= iVar17)) ||
                        ((iVar8 < *(int *)(param_1 + 0x890) || (*(int *)(param_1 + 0x898) <= iVar8))))
                        goto LAB_14035a62c;
                    iVar1 = *(int *)(param_1 + 0x89c);
                    iVar8 = iVar8 % *(int *)(param_1 + 0x8a0);
                    lVar4 = *(longlong *)
                            (*(longlong *)(param_1 + 0x8e0) +
                             (ulonglong)
                                     ((uint)(iVar17 % iVar1 < 0) * iVar1 +
                                      ((uint)(iVar8 < 0) * *(int *)(param_1 + 0x8a0) + iVar8) * iVar1 + iVar17 % iVar1)
                             * 8);
                    LAB_14035a93b:
                    if (((lVar4 == 0) || (*(longlong *)(lVar4 + 0x588) == 0)) ||
                        ((pfVar10 = (float *)(lVar4 + 0x520), fVar22 < *pfVar10 || fVar22 == *pfVar10 ||
                                                              (*(float *)(lVar12 + 0x30) < *(float *)(lVar4 + 0x30) ||
                                                               *(float *)(lVar12 + 0x30) == *(float *)(lVar4 + 0x30))))) goto LAB_14035a62c;
                    for (pfVar11 = *(float **)(lVar4 + 0x530); pfVar11 != (float *)0x0;
                         pfVar11 = *(float **)(pfVar11 + 4)) {
                        pfVar10 = pfVar11;
                    }
                }
                else {
                    if (iVar8 != iVar3) {
                        if (iVar17 < iVar14) {
                            fVar22 = (float)FUN_1408fd190(fVar23);
                            goto LAB_14035a846;
                        }
                        if (iVar17 == iVar14) {
                            fVar22 = (float)FUN_1408fd190(fVar28);
                            fVar21 = (float)FUN_1408fd190(fVar28);
                            local_res24 = iVar8 + -1;
                            piVar9 = &local_res20;
                            local_res20 = iVar17;
                        }
                        else {
                            fVar22 = (float)FUN_1408fd190(fVar28);
                            fVar21 = (float)FUN_1408fd190(fVar23);
                            local_17c = iVar8 + -1;
                            piVar9 = &local_180;
                            local_180 = iVar17;
                        }
                        LAB_14035a930:
                        lVar4 = FUN_14035bf90(param_1,piVar9);
                        goto LAB_14035a93b;
                    }
                    if (iVar14 <= iVar17) {
                        if (iVar17 == iVar14) {
                            fVar22 = -3.141593;
                            fVar21 = fVar30;
                            goto LAB_14035a62c;
                        }
                        fVar22 = (float)FUN_1408fd190(fVar28);
                        fVar21 = (float)FUN_1408fd190(fVar23);
                        local_res18 = iVar17 + -1;
                        piVar9 = &local_res18;
                        local_res1c = iVar8;
                        goto LAB_14035a930;
                    }
                    fVar22 = (float)FUN_1408fd190(fVar23);
                    LAB_14035a846:
                    fVar21 = (float)FUN_1408fd190(fVar28);
                    iVar17 = iVar17 + 1;
                    if (((*(int *)(param_1 + 0x88c) <= iVar17) && (iVar17 < *(int *)(param_1 + 0x894))) &&
                        ((*(int *)(param_1 + 0x890) <= iVar8 && (iVar8 < *(int *)(param_1 + 0x898))))) {
                        iVar1 = *(int *)(param_1 + 0x89c);
                        iVar8 = iVar8 % *(int *)(param_1 + 0x8a0);
                        lVar4 = *(longlong *)
                                (*(longlong *)(param_1 + 0x8e0) +
                                 (ulonglong)
                                         ((uint)(iVar17 % iVar1 < 0) * iVar1 +
                                          ((uint)(iVar8 < 0) * *(int *)(param_1 + 0x8a0) + iVar8) * iVar1 +
                                          iVar17 % iVar1) * 8);
                        goto LAB_14035a93b;
                    }
                    LAB_14035a62c:
                    pfVar10 = &local_198;
                }
                if (**(float **)(pfVar10 + 2) <= fVar22 && fVar22 != **(float **)(pfVar10 + 2)) {
                    do {
                        pfVar10 = *(float **)(pfVar10 + 2);
                    } while (**(float **)(pfVar10 + 2) <= fVar22 && fVar22 != **(float **)(pfVar10 + 2));
                }
                pfVar11 = (float *)(lVar12 + 0x520);
                *pfVar11 = fVar22;
                pfVar5 = &local_198;
                if (fVar22 <= fVar21) {
                    pfVar5 = pfVar11;
                }
                *(float *)(lVar12 + 0x524) = pfVar10[1];
                uVar2 = *(undefined8 *)(pfVar10 + 2);
                *(undefined8 *)(lVar12 + 0x530) = 0;
                *(undefined8 *)(lVar12 + 0x528) = uVar2;
                fVar23 = DAT_140c440d8;
                *(float **)(pfVar10 + 2) = pfVar11;
                fVar28 = **(float **)(pfVar5 + 2);
                while (fVar28 <= fVar21) {
                    pfVar5 = *(float **)(pfVar5 + 2);
                    fVar28 = **(float **)(pfVar5 + 2);
                }
                lVar4 = *(longlong *)(pfVar5 + 2);
                pfVar7 = (float *)(lVar12 + 0x538);
                local_178 = lVar4;
                *pfVar7 = fVar21;
                *(float *)(lVar12 + 0x53c) = pfVar5[1];
                uVar2 = *(undefined8 *)(pfVar5 + 2);
                *(undefined8 *)(lVar12 + 0x548) = 0;
                *(undefined8 *)(lVar12 + 0x540) = uVar2;
                *(float **)(pfVar5 + 2) = pfVar7;
                for (pfVar5 = pfVar11; pfVar5 != pfVar7; pfVar5 = *(float **)(pfVar5 + 2)) {
                    fVar21 = *(float *)(lVar12 + 0x510);
                    if (*(float *)(lVar12 + 0x510) <= pfVar5[1]) {
                        fVar21 = pfVar5[1];
                    }
                    pfVar5[1] = fVar21;
                    if (fVar21 <= fVar23) {
                        fVar23 = fVar21;
                    }
                }
                *(float *)(lVar12 + 0x510) = fVar23;
                if (*(longlong *)(lVar12 + 0x568) != 0) {
                    lVar16 = (*(longlong *)(lVar12 + 0x568) - 1U >> 1) + 1;
                    lVar18 = lVar15;
                    do {
                        pfVar5 = (float *)(lVar15 + *(longlong *)(lVar12 + 0x560));
                        pfVar7 = (float *)(lVar15 + 0x10 + *(longlong *)(lVar12 + 0x560));
                        fVar28 = *pfVar5 - *(float *)(param_1 + 0x390);
                        fVar21 = pfVar5[1] - *(float *)(param_1 + 0x394);
                        fVar24 = pfVar5[2] - *(float *)(param_1 + 0x398);
                        fVar23 = *pfVar7 - *(float *)(param_1 + 0x390);
                        fVar22 = pfVar7[1] - *(float *)(param_1 + 0x394);
                        local_128 = CONCAT412(pfVar5[3] - *(float *)(param_1 + 0x39c),
                                              CONCAT48(fVar24,CONCAT44(fVar21,fVar28)));
                        local_f8._0_16_ =
                                CONCAT412(pfVar7[3] - *(float *)(param_1 + 0x39c),
                                          CONCAT48(pfVar7[2] - *(float *)(param_1 + 0x398),CONCAT44(fVar22,fVar23))
                                );
                        if (fVar22 <= fVar21) {
                            fVar21 = fVar22;
                        }
                        if (fVar31 <= fVar21) {
                            fVar28 = fVar28 * fVar28 + 0.0;
                            fVar23 = fVar23 * fVar23 + 0.0;
                            if (fVar28 <= fVar23) {
                                fVar28 = fVar23;
                            }
                        }
                        else {
                            fVar23 = fVar23 - fVar28;
                            fVar22 = (float)((uint)((fVar23 * fVar28 + 0.0) / (fVar23 * fVar23 + 0.0)) ^
                                             0x80000000);
                            if (fVar36 <= fVar22) {
                                fVar22 = fVar36;
                            }
                            fVar25 = fVar32;
                            if (fVar32 <= fVar22) {
                                fVar25 = fVar22;
                            }
                            fVar28 = fVar25 * fVar23 + fVar28;
                            fVar23 = fVar25 * 0.0 + 0.0;
                            fVar28 = fVar28 * fVar28 + fVar23 * fVar23;
                        }
                        fVar21 = fVar21 / SQRT(fVar28);
                        fVar23 = (float)FUN_1408fd190(fVar24);
                        fVar28 = (float)FUN_1408fd190(local_f8._8_4_);
                        if (((fVar23 < fVar28) && (fVar30 < fVar28 - fVar23)) ||
                            ((fVar22 = fVar23, fVar28 < fVar23 && (fVar23 - fVar28 < fVar30)))) {
                            fVar22 = fVar28;
                            fVar28 = fVar23;
                        }
                        pfVar5 = &local_198;
                        if (*pfVar11 <= fVar22) {
                            pfVar5 = pfVar11;
                        }
                        ppfVar6 = (float **)(pfVar5 + 2);
                        if (**ppfVar6 <= fVar22 && fVar22 != **ppfVar6) {
                            do {
                                pfVar5 = *ppfVar6;
                                ppfVar6 = (float **)(pfVar5 + 2);
                            } while (**(float **)(pfVar5 + 2) <= fVar22 && fVar22 != **(float **)(pfVar5 + 2));
                        }
                        pfVar7 = (float *)(*(longlong *)(lVar12 + 0x550) + lVar18);
                        *pfVar7 = fVar22;
                        pfVar7[1] = pfVar5[1];
                        uVar2 = *(undefined8 *)(pfVar5 + 2);
                        *(undefined8 *)(pfVar7 + 4) = 0;
                        *(undefined8 *)(pfVar7 + 2) = uVar2;
                        *(float **)(pfVar5 + 2) = pfVar7;
                        pfVar5 = &local_198;
                        if (*pfVar11 <= fVar28) {
                            pfVar5 = pfVar11;
                        }
                        ppfVar6 = (float **)(pfVar5 + 2);
                        fVar23 = **ppfVar6;
                        while (fVar23 <= fVar28) {
                            pfVar5 = *ppfVar6;
                            ppfVar6 = (float **)(pfVar5 + 2);
                            fVar23 = **(float **)(pfVar5 + 2);
                        }
                        pfVar13 = (float *)(*(longlong *)(lVar12 + 0x550) + 0x18 + lVar18);
                        *pfVar13 = fVar28;
                        pfVar13[1] = pfVar5[1];
                        uVar2 = *(undefined8 *)(pfVar5 + 2);
                        *(undefined8 *)(pfVar13 + 4) = 0;
                        *(undefined8 *)(pfVar13 + 2) = uVar2;
                        *(float **)(pfVar5 + 2) = pfVar13;
                        if (pfVar7 != pfVar13) {
                            auVar19 = ZEXT416((uint)fVar21) & (undefined  [16])0xffffffffffffffff;
                            do {
                                auVar20 = auVar19;
                                if (SUB164(auVar19,0) <= pfVar7[1]) {
                                    auVar20 = CONCAT124(SUB1612(auVar19 >> 0x20,0),pfVar7[1]);
                                }
                                pfVar7[1] = SUB164(auVar20,0);
                                pfVar7 = *(float **)(pfVar7 + 2);
                            } while (pfVar7 != pfVar13);
                        }
                        lVar15 = lVar15 + 0x20;
                        lVar18 = lVar18 + 0x30;
                        lVar16 = lVar16 + -1;
                        lVar4 = local_178;
                    } while (lVar16 != 0);
                }
                lVar15 = *(longlong *)(pfVar10 + 2);
                while (lVar15 != lVar4) {
                    pfVar11 = *(float **)(pfVar10 + 2);
                    if (pfVar11 == &local_148) {
                        pfVar11 = &local_198;
                    }
                    else if ((pfVar11[1] == pfVar10[1]) || (*pfVar11 == *pfVar10)) {
                        *(float **)(pfVar11 + 4) = pfVar10;
                        pfVar10[1] = *(float *)(*(longlong *)(pfVar10 + 2) + 4);
                        *(undefined8 *)(pfVar10 + 2) = *(undefined8 *)(*(longlong *)(pfVar10 + 2) + 8);
                        pfVar11 = pfVar10;
                    }
                    pfVar10 = pfVar11;
                    lVar15 = *(longlong *)(pfVar11 + 2);
                }
                lVar12 = *(longlong *)(lVar12 + 0x590);
            } while (lVar12 != 0);
        }
        *(undefined4 *)(param_1 + 0x354) = 1;
    }
    return;
}



void FUN_14035b0e0(longlong param_1)

{
    longlong **pplVar1;
    longlong **pplVar2;
    float fVar3;
    longlong *plVar4;
    longlong lVar5;
    longlong lVar6;
    longlong *plVar7;
    int iVar8;
    ulonglong uVar9;
    float *pfVar10;
    longlong *plVar11;
    float *pfVar12;
    longlong *plVar13;
    ulonglong uVar14;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    float extraout_XMM0_Da_02;
    float extraout_XMM0_Da_03;
    float extraout_XMM0_Da_04;
    float fVar15;
    float extraout_XMM0_Da_05;
    float extraout_XMM0_Da_06;
    float extraout_XMM0_Da_07;
    undefined auVar16 [16];
    undefined auVar17 [16];
    float fVar18;
    uint uVar19;
    float fStack80;
    float fStack64;

    pplVar1 = (longlong **)(param_1 + 0x14a8);
    uVar14 = 0;
    plVar4 = *pplVar1;
    while (plVar4 != (longlong *)0x0) {
        if ((longlong *)plVar4[0x88] != (longlong *)0x0) {
            *(longlong *)plVar4[0x88] = plVar4[0x89];
        }
        if (plVar4[0x89] != 0) {
            *(longlong *)(plVar4[0x89] + 0x440) = plVar4[0x88];
        }
        plVar4[0x88] = 0;
        plVar4[0x89] = 0;
        plVar4 = *pplVar1;
    }
    fVar18 = 0.0;
    for (plVar4 = *(longlong **)(param_1 + 0x1488); plVar4 != (longlong *)0x0;
         plVar4 = (longlong *)plVar4[0x81]) {
        if (((((longlong *)plVar4[4] != (longlong *)0x0) &&
              (iVar8 = (**(code **)(*(longlong *)plVar4[4] + 0x3b0))(), iVar8 == 0)) &&
             (plVar4[0x94] == 0)) &&
            ((FUN_14038c510(plVar4,*(undefined4 *)(param_1 + 0x370)), extraout_XMM0_Da != fVar18 &&
                                                                      (((**(code **)(*plVar4 + 0x90))(), extraout_XMM0_Da_00 != fVar18 ||
                                                                                                         ((**(code **)(*plVar4 + 0xa0))(plVar4), extraout_XMM0_Da_01 != fVar18)))))) {
            pfVar12 = (float *)(param_1 + 0x6f0);
            uVar9 = uVar14;
            pfVar10 = pfVar12;
            do {
                if (*(float *)(plVar4 + 0x26) <
                    *(float *)(plVar4 + 0x24) * *pfVar10 + *(float *)((longlong)plVar4 + 0x124) * pfVar10[1]
                    + *(float *)(plVar4 + 0x25) * pfVar10[2] + pfVar10[3]) goto LAB_14035b2c2;
                uVar9 = uVar9 + 1;
                pfVar10 = pfVar10 + 4;
            } while (uVar9 < 6);
            uVar9 = uVar14;
            do {
                if (0.0 < (float)(~-(uint)(0.0 < *pfVar12) & *(uint *)(plVar4 + 0x22) |
                                  -(uint)(0.0 < *pfVar12) & *(uint *)(plVar4 + 0x20)) * *pfVar12 +
                          (float)(~-(uint)(0.0 < pfVar12[1]) & *(uint *)((longlong)plVar4 + 0x114) |
                                  -(uint)(0.0 < pfVar12[1]) & *(uint *)((longlong)plVar4 + 0x104)) *
                          pfVar12[1] +
                          (float)(~-(uint)(0.0 < pfVar12[2]) & *(uint *)(plVar4 + 0x23) |
                                  -(uint)(0.0 < pfVar12[2]) & *(uint *)(plVar4 + 0x21)) * pfVar12[2] +
                          pfVar12[3]) goto LAB_14035b2c2;
                uVar9 = uVar9 + 1;
                pfVar12 = pfVar12 + 4;
            } while (uVar9 < 6);
            if (plVar4[0x88] == 0) {
                plVar4[0x88] = (longlong)pplVar1;
                pplVar2 = (longlong **)(plVar4 + 0x89);
                *pplVar2 = *pplVar1;
                *pplVar1 = plVar4;
                if (*pplVar2 != (longlong *)0x0) {
                    (*pplVar2)[0x88] = (longlong)pplVar2;
                }
            }
        }
        LAB_14035b2c2:
    }
    lVar5 = *(longlong *)(param_1 + 0x920);
    do {
        if (lVar5 == 0) {
            if (*(int *)(param_1 + 0x1818) != 2) {
                for (plVar4 = *(longlong **)(param_1 + 0x1558); plVar4 != (longlong *)0x0;
                     plVar4 = (longlong *)plVar4[0x29]) {
                    iVar8 = (**(code **)(*plVar4 + 0x18))(plVar4);
                    if (iVar8 == 0) {
                        for (lVar5 = plVar4[0x10]; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x18)) {
                            plVar7 = *(longlong **)(lVar5 + 8);
                            if ((((plVar7[0x88] == 0) && ((longlong *)plVar7[4] != (longlong *)0x0)) &&
                                 (iVar8 = (**(code **)(*(longlong *)plVar7[4] + 0x3b0))(), iVar8 == 0)) &&
                                (((plVar7[0x94] == 0 &&
                                   (FUN_14038c510(plVar7,*(undefined4 *)(param_1 + 0x370)),
                                           extraout_XMM0_Da_05 != fVar18)) &&
                                  (((**(code **)(*plVar7 + 0x90))(), extraout_XMM0_Da_06 != fVar18 ||
                                                                     ((**(code **)(*plVar7 + 0xa0))(plVar7), extraout_XMM0_Da_07 != fVar18)))))) {
                                plVar13 = plVar4 + 0x1a;
                                uVar9 = uVar14;
                                plVar11 = plVar13;
                                do {
                                    if (*(float *)(plVar7 + 0x26) <
                                        *(float *)(plVar7 + 0x24) * *(float *)plVar11 +
                                        *(float *)((longlong)plVar7 + 0x124) * *(float *)((longlong)plVar11 + 4) +
                                        *(float *)(plVar7 + 0x25) * *(float *)(plVar11 + 1) +
                                        *(float *)((longlong)plVar11 + 0xc)) goto LAB_14035b5f2;
                                    uVar9 = uVar9 + 1;
                                    plVar11 = plVar11 + 2;
                                } while (uVar9 < 6);
                                uVar9 = uVar14;
                                do {
                                    uVar19 = -(uint)(0.0 < *(float *)((longlong)plVar13 + 4));
                                    if (0.0 < (float)(~-(uint)(0.0 < *(float *)plVar13) & *(uint *)(plVar7 + 0x22) |
                                                      -(uint)(0.0 < *(float *)plVar13) & *(uint *)(plVar7 + 0x20)) *
                                              *(float *)plVar13 +
                                              (float)(~uVar19 & *(uint *)((longlong)plVar7 + 0x114) |
                                                      uVar19 & *(uint *)((longlong)plVar7 + 0x104)) *
                                              *(float *)((longlong)plVar13 + 4) +
                                              (float)(~-(uint)(0.0 < *(float *)(plVar13 + 1)) &
                                                      *(uint *)(plVar7 + 0x23) |
                                                      -(uint)(0.0 < *(float *)(plVar13 + 1)) & *(uint *)(plVar7 + 0x21)
                                              ) * *(float *)(plVar13 + 1) + *(float *)((longlong)plVar13 + 0xc)
                                            ) goto LAB_14035b5f2;
                                    uVar9 = uVar9 + 1;
                                    plVar13 = plVar13 + 2;
                                } while (uVar9 < 6);
                                if (plVar7[0x88] == 0) {
                                    plVar7[0x88] = (longlong)pplVar1;
                                    pplVar2 = (longlong **)(plVar7 + 0x89);
                                    *pplVar2 = *pplVar1;
                                    *pplVar1 = plVar7;
                                    if (*pplVar2 != (longlong *)0x0) {
                                        (*pplVar2)[0x88] = (longlong)pplVar2;
                                    }
                                }
                            }
                            LAB_14035b5f2:
                        }
                    }
                }
            }
            return;
        }
        for (lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x18) + 0x40); lVar6 != 0;
             lVar6 = *(longlong *)(lVar6 + 0x18)) {
            plVar4 = *(longlong **)(lVar6 + 8);
            if (((plVar4[0x88] == 0) && (*(int *)(plVar4 + 0x73) != 0)) &&
                (((longlong *)plVar4[4] != (longlong *)0x0 &&
                  ((((iVar8 = (**(code **)(*(longlong *)plVar4[4] + 0x3b0))(), iVar8 == 0 &&
                                                                               (plVar4[0x94] == 0)) &&
                     (FUN_14038c510(plVar4,*(undefined4 *)(param_1 + 0x370)), extraout_XMM0_Da_02 != fVar18))
                    && (((**(code **)(*plVar4 + 0x90))(), extraout_XMM0_Da_03 != fVar18 ||
                                                          ((**(code **)(*plVar4 + 0xa0))(plVar4), extraout_XMM0_Da_04 != fVar18)))))))) {
                auVar17 = minps(*(undefined (*) [16])(lVar5 + 0xd0),*(undefined (*) [16])(plVar4 + 0x22));
                auVar16 = maxps(*(undefined (*) [16])(lVar5 + 0xc0),*(undefined (*) [16])(plVar4 + 0x20));
                if (SUB164(auVar16,0) < SUB164(auVar17,0)) {
                    fStack80 = SUB164(auVar16 >> 0x40,0);
                    fStack64 = SUB164(auVar17 >> 0x40,0);
                    if (fStack80 < fStack64) {
                        if (*(int *)(param_1 + 0x354) != 0) {
                            fVar15 = *(float *)((longlong)plVar4 + 0x114) - *(float *)(param_1 + 0x394);
                            if (fVar15 <= fVar18) {
                                fVar3 = *(float *)(lVar5 + 0x518);
                            }
                            else {
                                fVar3 = *(float *)(lVar5 + 0x514);
                            }
                            if (fVar15 * fVar3 < *(float *)(lVar5 + 0x510)) goto LAB_14035b439;
                        }
                        iVar8 = FUN_14035bdf0(param_1);
                        if ((iVar8 != 0) && (plVar4[0x88] == 0)) {
                            plVar4[0x88] = (longlong)pplVar1;
                            pplVar2 = (longlong **)(plVar4 + 0x89);
                            *pplVar2 = *pplVar1;
                            *pplVar1 = plVar4;
                            if (*pplVar2 != (longlong *)0x0) {
                                (*pplVar2)[0x88] = (longlong)pplVar2;
                            }
                        }
                    }
                }
            }
            LAB_14035b439:
        }
        lVar5 = *(longlong *)(lVar5 + 0x590);
    } while( true );
}



void FUN_14035b640(longlong param_1)

{
    longlong *plVar1;
    longlong *plVar2;
    float fVar3;
    int iVar4;
    ulonglong uVar5;
    longlong *plVar6;
    longlong *plVar7;
    longlong lVar8;
    longlong lVar9;
    longlong lVar10;
    float fVar11;
    undefined auVar12 [16];
    undefined auVar13 [16];
    float fVar14;
    uint uVar15;
    float fStack48;
    float fStack32;

    plVar1 = (longlong *)(param_1 + 0x14f0);
    lVar10 = *plVar1;
    while (lVar10 != 0) {
        if (*(undefined8 **)(lVar10 + 0x388) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar10 + 0x388) = *(undefined8 *)(lVar10 + 0x390);
        }
        if (*(longlong *)(lVar10 + 0x390) != 0) {
            *(undefined8 *)(*(longlong *)(lVar10 + 0x390) + 0x388) = *(undefined8 *)(lVar10 + 0x388);
        }
        *(undefined8 *)(lVar10 + 0x388) = 0;
        *(undefined8 *)(lVar10 + 0x390) = 0;
        lVar10 = *plVar1;
    }
    lVar10 = *(longlong *)(param_1 + 0x920);
    if (lVar10 != 0) {
        fVar14 = 0.0;
        do {
            for (lVar9 = *(longlong *)(*(longlong *)(lVar10 + 0x18) + 0x48); lVar9 != 0;
                 lVar9 = *(longlong *)(lVar9 + 0x18)) {
                lVar8 = *(longlong *)(lVar9 + 8);
                if ((*(longlong *)(lVar8 + 0x388) == 0) && (*(int *)(lVar8 + 0x360) != 0)) {
                    auVar13 = minps(*(undefined (*) [16])(lVar10 + 0xd0),*(undefined (*) [16])(lVar8 + 0x310))
                            ;
                    auVar12 = maxps(*(undefined (*) [16])(lVar10 + 0xc0),*(undefined (*) [16])(lVar8 + 0x300))
                            ;
                    if (SUB164(auVar12,0) < SUB164(auVar13,0)) {
                        fStack48 = SUB164(auVar12 >> 0x40,0);
                        fStack32 = SUB164(auVar13 >> 0x40,0);
                        if (fStack48 < fStack32) {
                            if (*(int *)(param_1 + 0x354) != 0) {
                                fVar11 = *(float *)(lVar8 + 0x314) - *(float *)(param_1 + 0x394);
                                if (fVar11 <= fVar14) {
                                    fVar3 = *(float *)(lVar10 + 0x518);
                                }
                                else {
                                    fVar3 = *(float *)(lVar10 + 0x514);
                                }
                                if (fVar11 * fVar3 < *(float *)(lVar10 + 0x510)) goto LAB_14035b79e;
                            }
                            iVar4 = FUN_14035bdf0(param_1);
                            if (iVar4 != 0) {
                                *(longlong **)(lVar8 + 0x388) = plVar1;
                                plVar2 = (longlong *)(lVar8 + 0x390);
                                *plVar2 = *plVar1;
                                *plVar1 = lVar8;
                                if (*plVar2 != 0) {
                                    *(longlong **)(*plVar2 + 0x388) = plVar2;
                                }
                            }
                        }
                    }
                }
                LAB_14035b79e:
            }
            lVar10 = *(longlong *)(lVar10 + 0x590);
        } while (lVar10 != 0);
    }
    plVar2 = *(longlong **)(param_1 + 0x1558);
    do {
        if (plVar2 == (longlong *)0x0) {
            return;
        }
        iVar4 = (**(code **)(*plVar2 + 0x18))(plVar2);
        if (iVar4 == 0) {
            for (lVar10 = plVar2[0x11]; lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0x18)) {
                lVar9 = *(longlong *)(lVar10 + 8);
                if (*(longlong *)(lVar9 + 0x388) == 0) {
                    plVar7 = plVar2 + 0x1a;
                    uVar5 = 0;
                    plVar6 = plVar7;
                    do {
                        if (*(float *)(lVar9 + 0x330) <
                            *(float *)(lVar9 + 800) * *(float *)plVar6 +
                            *(float *)(lVar9 + 0x324) * *(float *)((longlong)plVar6 + 4) +
                            *(float *)(lVar9 + 0x328) * *(float *)(plVar6 + 1) +
                            *(float *)((longlong)plVar6 + 0xc)) goto LAB_14035b8d9;
                        uVar5 = uVar5 + 1;
                        plVar6 = plVar6 + 2;
                    } while (uVar5 < 6);
                    uVar5 = 0;
                    do {
                        uVar15 = -(uint)(0.0 < *(float *)((longlong)plVar7 + 4));
                        if (0.0 < (float)(~-(uint)(0.0 < *(float *)plVar7) & *(uint *)(lVar9 + 0x310) |
                                          -(uint)(0.0 < *(float *)plVar7) & *(uint *)(lVar9 + 0x300)) *
                                  *(float *)plVar7 +
                                  (float)(~uVar15 & *(uint *)(lVar9 + 0x314) | uVar15 & *(uint *)(lVar9 + 0x304)
                                  ) * *(float *)((longlong)plVar7 + 4) +
                                  (float)(~-(uint)(0.0 < *(float *)(plVar7 + 1)) & *(uint *)(lVar9 + 0x318) |
                                          -(uint)(0.0 < *(float *)(plVar7 + 1)) & *(uint *)(lVar9 + 0x308)) *
                                  *(float *)(plVar7 + 1) + *(float *)((longlong)plVar7 + 0xc))
                            goto LAB_14035b8d9;
                        uVar5 = uVar5 + 1;
                        plVar7 = plVar7 + 2;
                    } while (uVar5 < 6);
                    *(longlong **)(lVar9 + 0x388) = plVar1;
                    plVar7 = (longlong *)(lVar9 + 0x390);
                    *plVar7 = *plVar1;
                    *plVar1 = lVar9;
                    if (*plVar7 != 0) {
                        *(longlong **)(*plVar7 + 0x388) = plVar7;
                    }
                }
                LAB_14035b8d9:
            }
        }
        plVar2 = (longlong *)plVar2[0x29];
    } while( true );
}



void FUN_14035b910(longlong param_1)

{
    longlong *plVar1;
    longlong *plVar2;
    float fVar3;
    int iVar4;
    ulonglong uVar5;
    longlong *plVar6;
    longlong *plVar7;
    longlong lVar8;
    longlong lVar9;
    longlong lVar10;
    float fVar11;
    undefined auVar12 [16];
    undefined auVar13 [16];
    float fVar14;
    uint uVar15;
    float fStack64;
    float fStack48;

    plVar1 = (longlong *)(param_1 + 0x1508);
    lVar10 = *plVar1;
    while (lVar10 != 0) {
        if (*(undefined8 **)(lVar10 + 0x1e8) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar10 + 0x1e8) = *(undefined8 *)(lVar10 + 0x1f0);
        }
        if (*(longlong *)(lVar10 + 0x1f0) != 0) {
            *(undefined8 *)(*(longlong *)(lVar10 + 0x1f0) + 0x1e8) = *(undefined8 *)(lVar10 + 0x1e8);
        }
        *(undefined8 *)(lVar10 + 0x1e8) = 0;
        *(undefined8 *)(lVar10 + 0x1f0) = 0;
        lVar10 = *plVar1;
    }
    lVar10 = *(longlong *)(param_1 + 0x920);
    fVar14 = 0.0;
    do {
        if (lVar10 == 0) {
            plVar2 = *(longlong **)(param_1 + 0x1558);
            do {
                if (plVar2 == (longlong *)0x0) {
                    return;
                }
                iVar4 = (**(code **)(*plVar2 + 0x18))(plVar2);
                if (iVar4 == 0) {
                    for (lVar10 = plVar2[0x12]; lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0x18)) {
                        lVar9 = *(longlong *)(lVar10 + 8);
                        if (((*(longlong *)(lVar9 + 0x1e8) == 0) && (fVar14 < *(float *)(lVar9 + 0x110))) &&
                            (*(longlong *)(lVar9 + 0x1f8) == 0)) {
                            plVar7 = plVar2 + 0x1a;
                            uVar5 = 0;
                            plVar6 = plVar7;
                            do {
                                if (*(float *)(lVar9 + 400) <
                                    *(float *)(lVar9 + 0x180) * *(float *)plVar6 +
                                    *(float *)(lVar9 + 0x184) * *(float *)((longlong)plVar6 + 4) +
                                    *(float *)(lVar9 + 0x188) * *(float *)(plVar6 + 1) +
                                    *(float *)((longlong)plVar6 + 0xc)) goto LAB_14035bbfc;
                                uVar5 = uVar5 + 1;
                                plVar6 = plVar6 + 2;
                            } while (uVar5 < 6);
                            uVar5 = 0;
                            do {
                                uVar15 = -(uint)(0.0 < *(float *)((longlong)plVar7 + 4));
                                if (0.0 < (float)(~-(uint)(0.0 < *(float *)plVar7) & *(uint *)(lVar9 + 0x170) |
                                                  -(uint)(0.0 < *(float *)plVar7) & *(uint *)(lVar9 + 0x160)) *
                                          *(float *)plVar7 +
                                          (float)(~uVar15 & *(uint *)(lVar9 + 0x174) |
                                                  uVar15 & *(uint *)(lVar9 + 0x164)) *
                                          *(float *)((longlong)plVar7 + 4) +
                                          (float)(~-(uint)(0.0 < *(float *)(plVar7 + 1)) & *(uint *)(lVar9 + 0x178)
                                                  | -(uint)(0.0 < *(float *)(plVar7 + 1)) & *(uint *)(lVar9 + 0x168))
                                          * *(float *)(plVar7 + 1) + *(float *)((longlong)plVar7 + 0xc))
                                    goto LAB_14035bbfc;
                                uVar5 = uVar5 + 1;
                                plVar7 = plVar7 + 2;
                            } while (uVar5 < 6);
                            *(longlong **)(lVar9 + 0x1e8) = plVar1;
                            plVar7 = (longlong *)(lVar9 + 0x1f0);
                            *plVar7 = *plVar1;
                            *plVar1 = lVar9;
                            if (*plVar7 != 0) {
                                *(longlong **)(*plVar7 + 0x1e8) = plVar7;
                            }
                        }
                        LAB_14035bbfc:
                    }
                }
                plVar2 = (longlong *)plVar2[0x29];
            } while( true );
        }
        for (lVar9 = *(longlong *)(*(longlong *)(lVar10 + 0x18) + 0x50); lVar9 != 0;
             lVar9 = *(longlong *)(lVar9 + 0x18)) {
            lVar8 = *(longlong *)(lVar9 + 8);
            if (((*(longlong *)(lVar8 + 0x1e8) == 0) && (*(int *)(lVar8 + 0x1c0) != 0)) &&
                ((fVar14 < *(float *)(lVar8 + 0x110) && (*(longlong *)(lVar8 + 0x1f8) == 0)))) {
                auVar13 = minps(*(undefined (*) [16])(lVar10 + 0xd0),*(undefined (*) [16])(lVar8 + 0x170));
                auVar12 = maxps(*(undefined (*) [16])(lVar10 + 0xc0),*(undefined (*) [16])(lVar8 + 0x160));
                if (SUB164(auVar12,0) < SUB164(auVar13,0)) {
                    fStack64 = SUB164(auVar12 >> 0x40,0);
                    fStack48 = SUB164(auVar13 >> 0x40,0);
                    if (fStack64 < fStack48) {
                        if (*(int *)(param_1 + 0x354) != 0) {
                            fVar11 = *(float *)(lVar8 + 0x174) - *(float *)(param_1 + 0x394);
                            if (fVar11 <= fVar14) {
                                fVar3 = *(float *)(lVar10 + 0x518);
                            }
                            else {
                                fVar3 = *(float *)(lVar10 + 0x514);
                            }
                            if (fVar11 * fVar3 < *(float *)(lVar10 + 0x510)) goto LAB_14035ba99;
                        }
                        iVar4 = FUN_14035bdf0(param_1);
                        if (iVar4 != 0) {
                            *(longlong **)(lVar8 + 0x1e8) = plVar1;
                            plVar2 = (longlong *)(lVar8 + 0x1f0);
                            *plVar2 = *plVar1;
                            *plVar1 = lVar8;
                            if (*plVar2 != 0) {
                                *(longlong **)(*plVar2 + 0x1e8) = plVar2;
                            }
                        }
                    }
                }
            }
            LAB_14035ba99:
        }
        lVar10 = *(longlong *)(lVar10 + 0x590);
    } while( true );
}



void FUN_14035bc40(longlong param_1)

{
    longlong **pplVar1;
    longlong **pplVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong lVar5;

    pplVar1 = (longlong **)(param_1 + 0x1528);
    plVar3 = *pplVar1;
    while (plVar3 != (longlong *)0x0) {
        if ((longlong *)plVar3[8] != (longlong *)0x0) {
            *(longlong *)plVar3[8] = plVar3[9];
        }
        if (plVar3[9] != 0) {
            *(longlong *)(plVar3[9] + 0x40) = plVar3[8];
        }
        plVar3[8] = 0;
        plVar3[9] = 0;
        plVar3 = *pplVar1;
    }
    pplVar2 = (longlong **)(param_1 + 0x1530);
    plVar3 = *pplVar2;
    while (plVar3 != (longlong *)0x0) {
        if ((longlong *)plVar3[8] != (longlong *)0x0) {
            *(longlong *)plVar3[8] = plVar3[9];
        }
        if (plVar3[9] != 0) {
            *(longlong *)(plVar3[9] + 0x40) = plVar3[8];
        }
        plVar3[8] = 0;
        plVar3[9] = 0;
        plVar3 = *pplVar2;
    }
    lVar4 = *(longlong *)(param_1 + 0x1520);
    do {
        if (lVar4 == 0) {
            FUN_140371430(pplVar1,0x40,&LAB_140390460);
            for (lVar4 = *(longlong *)(param_1 + 0x1558); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x148)
                    ) {
                FUN_140371430(lVar4 + 0x98,0x20,&LAB_140390480);
            }
            return;
        }
        for (plVar3 = *(longlong **)(lVar4 + 0xe0); plVar3 != (longlong *)0x0;
             plVar3 = (longlong *)plVar3[7]) {
            if (*plVar3 == 0) {
                if ((*(int *)(param_1 + 0x770) == 0) && (plVar3[8] == 0)) {
                    plVar3[8] = (longlong)pplVar1;
                    plVar3[9] = (longlong)*pplVar1;
                    *pplVar1 = plVar3;
                    LAB_14035bd3a:
                    lVar5 = plVar3[9];
                    if (lVar5 != 0) {
                        *(longlong **)(lVar5 + 0x40) = plVar3 + 9;
                    }
                }
            }
            else if ((*(longlong *)(*plVar3 + 0x140) != 0) && (plVar3[8] == 0)) {
                plVar3[8] = (longlong)pplVar2;
                plVar3[9] = (longlong)*pplVar2;
                *pplVar2 = plVar3;
                goto LAB_14035bd3a;
            }
        }
        if (*(undefined8 **)(lVar4 + 0xf8) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar4 + 0xf8) = *(undefined8 *)(lVar4 + 0x100);
        }
        if (*(longlong *)(lVar4 + 0x100) != 0) {
            *(undefined8 *)(*(longlong *)(lVar4 + 0x100) + 0xf8) = *(undefined8 *)(lVar4 + 0xf8);
        }
        *(undefined8 *)(lVar4 + 0xf8) = 0;
        *(undefined8 *)(lVar4 + 0x100) = 0;
        lVar4 = *(longlong *)(param_1 + 0x1520);
    } while( true );
}



undefined8 FUN_14035bdf0(longlong param_1,uint *param_2)

{
    ulonglong uVar1;
    float *pfVar2;
    float *pfVar3;

    if (*(int *)(param_1 + 0x770) == 0) {
        pfVar3 = (float *)(param_1 + 0x690);
        uVar1 = 0;
        pfVar2 = pfVar3;
        do {
            if ((float)param_2[0xc] <
                (float)param_2[8] * *pfVar2 + (float)param_2[9] * pfVar2[1] + 0.0 + pfVar2[3]) {
                return 0;
            }
            uVar1 = uVar1 + 1;
            pfVar2 = pfVar2 + 4;
        } while (uVar1 < 6);
        uVar1 = 0;
        while ((float)(~-(uint)(0.0 < *pfVar3) & param_2[4] | -(uint)(0.0 < *pfVar3) & *param_2) *
               *pfVar3 + (float)(~-(uint)(0.0 < pfVar3[1]) & param_2[5] |
                                 -(uint)(0.0 < pfVar3[1]) & param_2[1]) * pfVar3[1] +
               (float)(~-(uint)(0.0 < pfVar3[2]) & param_2[6] | -(uint)(0.0 < pfVar3[2]) & param_2[2]) *
               pfVar3[2] + pfVar3[3] <= 0.0) {
            uVar1 = uVar1 + 1;
            pfVar3 = pfVar3 + 4;
            if (5 < uVar1) {
                return 1;
            }
        }
    }
    return 0;
}



undefined8 FUN_14035bec0(longlong param_1,undefined8 param_2,longlong *param_3)

{
    ulonglong *puVar1;
    undefined8 *puVar2;
    int iVar3;
    ulonglong uVar4;
    longlong lVar5;

    uVar4 = (**(code **)(param_1 + 0x950))(param_2);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x948) + (uVar4 % *(ulonglong *)(param_1 + 0x940)) * 8);
    do {
        if (puVar1 == (ulonglong *)0x0) {
            LAB_14035bf27:
            lVar5 = FUN_14018b280(0x70);
            if (lVar5 == 0) {
                *param_3 = 0;
            }
            else {
                lVar5 = FUN_14038f6a0(lVar5,param_1,param_2);
                *param_3 = lVar5;
            }
            return 0;
        }
        if ((uVar4 == *puVar1) &&
            (iVar3 = (**(code **)(param_1 + 0x958))(param_2,puVar1 + 2), iVar3 != 0)) {
            if (puVar1 + 3 != (ulonglong *)0x0) {
                puVar2 = (undefined8 *)puVar1[3];
                (**(code **)*puVar2)(puVar2);
                *param_3 = (longlong)puVar2;
                return 0;
            }
            goto LAB_14035bf27;
        }
        puVar1 = (ulonglong *)puVar1[1];
    } while( true );
}



undefined8 FUN_14035bf90(longlong param_1,int *param_2)

{
    int iVar1;
    int iVar2;
    int iVar3;

    iVar1 = *param_2;
    if ((((*(int *)(param_1 + 0x88c) <= iVar1) && (iVar1 < *(int *)(param_1 + 0x894))) &&
         (iVar2 = param_2[1], *(int *)(param_1 + 0x890) <= iVar2)) &&
        (iVar2 < *(int *)(param_1 + 0x898))) {
        iVar3 = *(int *)(param_1 + 0x89c);
        iVar2 = iVar2 % *(int *)(param_1 + 0x8a0);
        return *(undefined8 *)
                (*(longlong *)(param_1 + 0x8e0) +
                 (ulonglong)
                         ((uint)(iVar1 % iVar3 < 0) * iVar3 +
                          ((uint)(iVar2 < 0) * *(int *)(param_1 + 0x8a0) + iVar2) * iVar3 + iVar1 % iVar3) * 8);
    }
    return 0;
}



undefined8 FUN_14035c010(longlong param_1,int *param_2)

{
    int iVar1;
    int iVar2;
    int iVar3;

    iVar1 = *param_2;
    if ((((*(int *)(param_1 + 0x968) <= iVar1) && (iVar1 < *(int *)(param_1 + 0x970))) &&
         (iVar2 = param_2[1], *(int *)(param_1 + 0x96c) <= iVar2)) &&
        (iVar2 < *(int *)(param_1 + 0x974))) {
        iVar3 = *(int *)(param_1 + 0x978);
        iVar2 = iVar2 % *(int *)(param_1 + 0x97c);
        return *(undefined8 *)
                (*(longlong *)(param_1 + 0x990) +
                 (ulonglong)
                         ((uint)(iVar1 % iVar3 < 0) * iVar3 +
                          ((uint)(iVar2 < 0) * *(int *)(param_1 + 0x97c) + iVar2) * iVar3 + iVar1 % iVar3) * 8);
    }
    return 0;
}



// WARNING: Removing unreachable block (ram,0x00014035c3a9)
// WARNING: Removing unreachable block (ram,0x00014035c3e2)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14035c090(longlong param_1,int *param_2,undefined (*param_3) [16])

{
    int iVar1;
    int iVar2;
    int iVar3;
    longlong lVar4;
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
    undefined auVar19 [16];
    float fVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    undefined auVar25 [16];
    undefined4 local_158 [12];
    float local_128;

    iVar1 = *param_2;
    if ((((*(int *)(param_1 + 0x8d0) <= iVar1) && (iVar1 < *(int *)(param_1 + 0x8d8))) &&
         (iVar2 = param_2[1], *(int *)(param_1 + 0x8d4) <= iVar2)) &&
        (iVar2 < *(int *)(param_1 + 0x8dc))) {
        iVar3 = *(int *)(param_1 + 0x89c);
        local_158[0] = 0xffffffff;
        iVar2 = iVar2 % *(int *)(param_1 + 0x8a0);
        lVar4 = *(longlong *)
                (*(longlong *)(param_1 + 0x8e0) +
                 (ulonglong)
                         ((uint)(iVar1 % iVar3 < 0) * iVar3 +
                          ((uint)(iVar2 < 0) * *(int *)(param_1 + 0x8a0) + iVar2) * iVar3 + iVar1 % iVar3) * 8);
        if (*(longlong *)(lVar4 + 0x5a8) != 0) {
            FUN_14037cc30(lVar4,local_158);
        }
        fVar5 = DAT_140c7ac64;
        auVar25 = maxps(*(undefined (*) [16])(lVar4 + 0xd0),*(undefined (*) [16])(lVar4 + 0x3c0));
        auVar19 = ZEXT416((uint)(0.0 - _DAT_140c77870)) & (undefined  [16])0xffffffffffffffff;
        fVar6 = SUB164(auVar19,0);
        fVar7 = 0.0 - fRam0000000140c77874;
        fVar8 = SUB164(auVar19 >> 0x40,0) - fRam0000000140c77878;
        fVar9 = fRam0000000140c77874 * 0.0 - DAT_140c7ac54 * fRam0000000140c77878;
        fVar12 = DAT_140c7ac50 * fRam0000000140c77878 - _DAT_140c77870 * 0.0;
        fVar15 = DAT_140c7ac54 * _DAT_140c77870 - DAT_140c7ac50 * fRam0000000140c77874;
        fVar17 = fRam0000000140c7ac5c * fRam0000000140c7787c -
                 fRam0000000140c7ac5c * fRam0000000140c7787c;
        auVar19 = CONCAT124(SUB1612(CONCAT412(fVar17 * fVar17,
                                              CONCAT48(fVar15 * fVar15,
                                                       CONCAT44(fVar12 * fVar12,fVar9 * fVar9))) >> 0x20
                ,0),fVar9 * fVar9 + fVar12 * fVar12 + 0.0);
        auVar19 = rsqrtss(auVar19,auVar19);
        fVar20 = SUB164(auVar19,0);
        fVar9 = fVar20 * fVar9;
        fVar12 = fVar20 * fVar12;
        fVar15 = fVar20 * fVar15;
        fVar20 = fVar20 * fVar17;
        fVar24 = 0.0 - fVar9;
        fVar10 = DAT_140c7ac54 * 0.0 - fVar12 * DAT_140c7ac58;
        fVar13 = fVar9 * 0.0 - DAT_140c7ac50 * 0.0;
        fVar17 = fVar12 * DAT_140c7ac50 - fVar9 * DAT_140c7ac54;
        fVar18 = fVar20 * fRam0000000140c7ac5c - fVar20 * fRam0000000140c7ac5c;
        auVar19 = CONCAT124(SUB1612(CONCAT412(fVar18 * fVar18,
                                              CONCAT48(fVar17 * fVar17,
                                                       CONCAT44(fVar13 * fVar13,fVar10 * fVar10))) >>
                                                                                                   0x20,0),fVar10 * fVar10 + fVar13 * fVar13 + 0.0);
        auVar19 = rsqrtss(auVar19,auVar19);
        fVar10 = SUB164(auVar19,0) * fVar10;
        fVar13 = SUB164(auVar19,0) * fVar13;
        fVar11 = fVar12 * 0.0 - fRam0000000140c77874 * fVar15;
        fVar14 = _DAT_140c77870 * fVar15 - fVar9 * 0.0;
        fVar16 = fRam0000000140c77874 * fVar9 - _DAT_140c77870 * fVar12;
        fVar20 = fRam0000000140c7787c * fVar20 - fRam0000000140c7787c * fVar20;
        auVar19 = minps(*(undefined (*) [16])(lVar4 + 0xc0),*(undefined (*) [16])(lVar4 + 0x3b0));
        fVar18 = SUB164(auVar19,0);
        auVar19 = CONCAT124(SUB1612(CONCAT412(fVar20 * fVar20,
                                              CONCAT48(fVar16 * fVar16,
                                                       CONCAT44(fVar14 * fVar14,fVar11 * fVar11))) >>
                                                                                                   0x20,0),fVar11 * fVar11 + fVar14 * fVar14 + 0.0);
        auVar19 = rsqrtss(auVar19,auVar19);
        fVar20 = SUB164(auVar19,0);
        fVar11 = fVar20 * fVar11;
        fVar17 = SUB164(auVar25 >> 0x20,0);
        local_128 = SUB164(auVar25,0);
        fVar21 = local_128;
        if (fVar9 < 0.0) {
            fVar21 = fVar18;
        }
        fVar22 = local_128;
        if (fVar24 < 0.0) {
            fVar22 = fVar18;
        }
        fVar23 = local_128;
        if (fVar10 < 0.0) {
            fVar23 = fVar18;
        }
        if (0.0 <= fVar11) {
            fVar18 = local_128;
        }
        *param_3 = CONCAT412(_DAT_140c77870 * 0.0 + fVar17 * fRam0000000140c77874 + 0.0,
                             CONCAT48(fRam0000000140c77878,CONCAT44(fRam0000000140c77874,_DAT_140c77870)
                             )) ^ (undefined  [16])0x8000000000000000;
        param_3[1] = CONCAT412(fVar6 * 0.0 + fVar5 * fVar7 + 0.0,CONCAT48(fVar8,CONCAT44(fVar7,fVar6)))
                     ^ (undefined  [16])0x8000000000000000;
        param_3[3] = CONCAT412(fVar21 * fVar9 + fVar17 * fVar12 + 0.0,
                               CONCAT48(fVar15,CONCAT44(fVar12,fVar9))) ^
                     (undefined  [16])0x8000000000000000;
        param_3[2] = CONCAT412(fVar22 * fVar24 + fVar17 * (0.0 - fVar12) + 0.0,
                               ZEXT812(CONCAT44(0.0 - fVar12,fVar24))) ^
                     (undefined  [16])0x8000000000000000;
        param_3[5] = CONCAT412(fVar23 * fVar10 + fVar17 * fVar13 + 0.0,ZEXT812(CONCAT44(fVar13,fVar10)))
                     ^ (undefined  [16])0x8000000000000000;
        param_3[4] = CONCAT412(fVar18 * fVar11 + fVar17 * fVar20 * fVar14 + 0.0,
                               CONCAT48(fVar20 * fVar16,CONCAT44(fVar20 * fVar14,fVar11))) ^
                     (undefined  [16])0x8000000000000000;
        return 0;
    }
    return 0x80004005;
}



longlong FUN_14035c650(longlong param_1,float *param_2,float *param_3,float *param_4,uint *param_5)

{
    longlong *plVar1;
    longlong *plVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    longlong lVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    undefined auVar14 [16];
    undefined auVar15 [16];
    float fVar16;
    int local_res8;
    int local_res18;

    fVar12 = *param_4;
    fVar11 = param_4[1];
    iVar8 = *(int *)(param_1 + 0x8d0);
    fVar13 = fVar12 * *param_3 + *param_2;
    iVar3 = *(int *)(param_1 + 0x8d8);
    iVar10 = (int)(fVar11 * *param_3 + *param_2);
    iVar9 = (int)fVar13;
    if ((int)fVar13 < iVar8) {
        iVar9 = iVar8;
    }
    if (iVar3 <= iVar9) {
        iVar9 = iVar3 + -1;
    }
    iVar4 = *(int *)(param_1 + 0x8d4);
    iVar5 = *(int *)(param_1 + 0x8dc);
    iVar7 = 0;
    if (0 < iVar4) {
        iVar7 = iVar4;
    }
    if (iVar5 <= iVar7) {
        iVar7 = iVar5 + -1;
    }
    if (iVar10 < iVar8) {
        iVar10 = iVar8;
    }
    if (iVar3 <= iVar10) {
        iVar10 = iVar3 + -1;
    }
    iVar8 = 0;
    if (0 < iVar4) {
        iVar8 = iVar4;
    }
    if (iVar5 <= iVar8) {
        iVar8 = iVar5 + -1;
    }
    local_res18 = 1;
    if (iVar9 < iVar10) {
        local_res8 = 1;
        fVar16 = 1.0 / *param_3;
        auVar15 = ZEXT416((uint)(((float)(iVar9 + 1) - fVar13) * fVar16 + fVar12)) &
                  (undefined  [16])0xffffffffffffffff;
    }
    else if (iVar10 < iVar9) {
        local_res8 = -1;
        fVar16 = -1.0 / *param_3;
        auVar15 = CONCAT124(SUB1612(CONCAT412(fVar12 * param_3[3] + param_2[3],
                                              CONCAT48(fVar12 * param_3[2] + param_2[2],
                                                       CONCAT44(fVar12 * param_3[1] + param_2[1],fVar13)
                                              )) >> 0x20,0),
                            (fVar13 - (float)iVar9) * fVar16 + fVar12);
    }
    else {
        local_res8 = 0;
        auVar15 = ZEXT416((uint)fVar11);
        fVar16 = 0.0;
    }
    if (iVar7 < iVar8) {
        fVar13 = 1.0 / param_3[2];
        auVar14 = ZEXT416((uint)(((float)(iVar7 + 1) - 0.0) * fVar13 + fVar12)) &
                  (undefined  [16])0xffffffffffffffff;
    }
    else if (iVar8 < iVar7) {
        local_res18 = -1;
        fVar13 = -1.0 / param_3[2];
        auVar14 = ZEXT416((uint)((0.0 - (float)iVar7) * fVar13 + fVar12)) &
                  (undefined  [16])0xffffffffffffffff;
    }
    else {
        local_res18 = 0;
        auVar14 = ZEXT416((uint)fVar11);
        fVar13 = 0.0;
    }
    if (fVar12 < fVar11) {
        do {
            iVar3 = *(int *)(param_1 + 0x89c);
            iVar4 = iVar7 % *(int *)(param_1 + 0x8a0);
            fVar11 = SUB164(auVar14,0);
            fVar12 = SUB164(auVar15,0);
            lVar6 = *(longlong *)
                    (*(longlong *)(param_1 + 0x8e0) +
                     (ulonglong)
                             ((uint)(iVar9 % iVar3 < 0) * iVar3 +
                              ((uint)(iVar4 < 0) * *(int *)(param_1 + 0x8a0) + iVar4) * iVar3 + iVar9 % iVar3) * 8)
                    ;
            if (fVar11 <= fVar12) {
                fVar12 = fVar11;
                if ((lVar6 != 0) && (lVar6 = FUN_140385130(), lVar6 != 0)) {
                    return lVar6;
                }
                iVar7 = iVar7 + local_res18;
                fVar11 = param_4[1];
                if (iVar7 == iVar8) {
                    auVar14 = ZEXT416((uint)fVar11);
                }
                else {
                    auVar14 = ZEXT416((uint)(fVar12 + fVar13));
                    if (fVar11 <= fVar12 + fVar13) {
                        auVar14 = ZEXT416((uint)fVar11) & (undefined  [16])0xffffffffffffffff;
                    }
                }
            }
            else {
                if ((lVar6 != 0) && (lVar6 = FUN_140385130(), lVar6 != 0)) {
                    return lVar6;
                }
                iVar9 = iVar9 + local_res8;
                fVar11 = param_4[1];
                if (iVar9 == iVar10) {
                    auVar15 = ZEXT416((uint)fVar11);
                }
                else {
                    auVar15 = ZEXT416((uint)(fVar12 + fVar16));
                    if (fVar11 <= fVar12 + fVar16) {
                        auVar15 = ZEXT416((uint)fVar11) & (undefined  [16])0xffffffffffffffff;
                    }
                }
            }
        } while (fVar12 < fVar11);
    }
    if (((*param_5 & 0xf800) != 0) && (lVar6 = *(longlong *)(param_1 + 0x1488), lVar6 != 0)) {
        plVar1 = (longlong *)(param_1 + 0x14b0);
        do {
            if (*(longlong *)(lVar6 + 0x450) == 0) {
                *(longlong **)(lVar6 + 0x450) = plVar1;
                plVar2 = (longlong *)(lVar6 + 0x458);
                *plVar2 = *plVar1;
                *plVar1 = lVar6;
                if (*plVar2 != 0) {
                    *(longlong **)(*plVar2 + 0x450) = plVar2;
                }
            }
            lVar6 = *(longlong *)(lVar6 + 0x408);
        } while (lVar6 != 0);
    }
    return 0;
}



undefined8 * FUN_14035c9f0(longlong param_1,float *param_2,float *param_3,float *param_4)

{
    float fVar1;
    int iVar2;
    int iVar3;
    longlong lVar4;
    undefined8 *puVar5;
    int iVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    undefined4 in_XMM6_Da;
    float fVar10;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;

    fVar10 = param_3[1];
    fVar1 = param_2[1];
    fVar7 = param_4[1] * fVar10 + fVar1;
    fVar9 = *param_4 * fVar10 + fVar1;
    fVar8 = fVar9;
    if (fVar7 <= fVar9) {
        fVar8 = fVar7;
    }
    if (fVar8 < -1000.0) {
        if (fVar9 <= fVar7) {
            fVar9 = fVar7;
        }
        if (((-1000.0 < fVar9) && (fVar10 = (-1000.0 - fVar1) / fVar10, *param_4 <= fVar10)) &&
            (fVar10 < param_4[1])) {
            iVar6 = (int)(*param_2 + *param_3 * fVar10);
            if (((*(int *)(param_1 + 0x88c) <= iVar6) && (iVar6 < *(int *)(param_1 + 0x894))) &&
                ((*(int *)(param_1 + 0x890) < 1 && (0 < *(int *)(param_1 + 0x898))))) {
                iVar2 = *(int *)(param_1 + 0x8a0);
                iVar3 = *(int *)(param_1 + 0x89c);
                lVar4 = *(longlong *)
                        (*(longlong *)(param_1 + 0x8e0) +
                         (ulonglong)
                                 ((uint)(iVar6 % iVar3 < 0) * iVar3 +
                                  ((uint)(0 % iVar2 < 0) * iVar2 + 0 % iVar2) * iVar3 + iVar6 % iVar3) * 8);
                if ((lVar4 != 0) && ((*(byte *)(lVar4 + 0x460) & 1) != 0)) {
                    puVar5 = (undefined8 *)
                            FUN_14018b280(0x100,0,iVar2,iVar3,
                                          CONCAT412(in_XMM6_Dd,
                                                    CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da))));
                    if (puVar5 != (undefined8 *)0x0) {
                        *(float *)((longlong)puVar5 + 0xc) = fVar10;
                        *(undefined4 *)(puVar5 + 1) = 1;
                        puVar5[2] = 0;
                        puVar5[3] = 0;
                        *puVar5 = &PTR_LAB_140b65fc8;
                        return puVar5;
                    }
                }
            }
        }
    }
    return (undefined8 *)0x0;
}



undefined8 FUN_14035cb60(longlong param_1,float *param_2,undefined8 param_3)

{
    int iVar1;
    longlong lVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    float fVar6;
    float fVar7;
    undefined local_18 [16];

    fVar6 = (*param_2 * DAT_140c43fb8 + 0.5) * 2048.0;
    fVar7 = (param_2[2] * DAT_140c43fb8 + 0.5) * 2048.0;
    iVar4 = (int)fVar6;
    iVar5 = (int)fVar7;
    if ((((*(int *)(param_1 + 0x88c) <= iVar4) && (iVar4 < *(int *)(param_1 + 0x894))) &&
         (*(int *)(param_1 + 0x890) <= iVar5)) && (iVar5 < *(int *)(param_1 + 0x898))) {
        iVar1 = *(int *)(param_1 + 0x89c);
        iVar3 = iVar5 % *(int *)(param_1 + 0x8a0);
        lVar2 = *(longlong *)
                (*(longlong *)(param_1 + 0x8e0) +
                 (ulonglong)
                         ((uint)(iVar4 % iVar1 < 0) * iVar1 +
                          ((uint)(iVar3 < 0) * *(int *)(param_1 + 0x8a0) + iVar3) * iVar1 + iVar4 % iVar1) * 8);
        if (lVar2 != 0) {
            local_18 = CONCAT412((param_2[2] * DAT_140c43fb8 + 0.5) * 2048.0 - 0.0,
                                 CONCAT48((*param_2 * DAT_140c43fb8 + 0.5) * 2048.0 - 0.0,
                                          CONCAT44(fVar7 - (float)iVar5,fVar6 - (float)iVar4)));
            FUN_140387780(lVar2,local_18,param_3);
            return 1;
        }
    }
    return 0;
}



undefined8 FUN_14035cc90(longlong param_1,float *param_2,undefined8 param_3,undefined4 param_4)

{
    int iVar1;
    longlong lVar2;
    int iVar3;
    int iVar4;

    iVar4 = (int)((*param_2 * DAT_140c43fb8 + 0.5) * 2048.0);
    iVar3 = (int)((DAT_140c43fb8 * 0.0 + 0.5) * 2048.0);
    if ((((*(int *)(param_1 + 0x88c) <= iVar4) && (iVar4 < *(int *)(param_1 + 0x894))) &&
         (*(int *)(param_1 + 0x890) <= iVar3)) && (iVar3 < *(int *)(param_1 + 0x898))) {
        iVar1 = *(int *)(param_1 + 0x89c);
        iVar3 = iVar3 % *(int *)(param_1 + 0x8a0);
        lVar2 = *(longlong *)
                (*(longlong *)(param_1 + 0x8e0) +
                 (ulonglong)
                         ((uint)(iVar4 % iVar1 < 0) * iVar1 +
                          ((uint)(iVar3 < 0) * *(int *)(param_1 + 0x8a0) + iVar3) * iVar1 + iVar4 % iVar1) * 8);
        if (lVar2 != 0) {
            FUN_140387910(lVar2,param_2,param_3,param_4);
            return 1;
        }
    }
    return 0;
}



undefined8 FUN_14035cd90(longlong param_1,float *param_2,undefined8 param_3,undefined4 param_4)

{
    int iVar1;
    longlong lVar2;
    int iVar3;
    int iVar4;

    iVar4 = (int)((*param_2 * DAT_140c43fb8 + 0.5) * 2048.0);
    iVar3 = (int)((DAT_140c43fb8 * 0.0 + 0.5) * 2048.0);
    if ((((*(int *)(param_1 + 0x88c) <= iVar4) && (iVar4 < *(int *)(param_1 + 0x894))) &&
         (*(int *)(param_1 + 0x890) <= iVar3)) && (iVar3 < *(int *)(param_1 + 0x898))) {
        iVar1 = *(int *)(param_1 + 0x89c);
        iVar3 = iVar3 % *(int *)(param_1 + 0x8a0);
        lVar2 = *(longlong *)
                (*(longlong *)(param_1 + 0x8e0) +
                 (ulonglong)
                         ((uint)(iVar4 % iVar1 < 0) * iVar1 +
                          ((uint)(iVar3 < 0) * *(int *)(param_1 + 0x8a0) + iVar3) * iVar1 + iVar4 % iVar1) * 8);
        if (lVar2 != 0) {
            FUN_140388a30(lVar2,param_2,param_3,param_4);
            return 1;
        }
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14035ce90(longlong *param_1)

{
    int iVar1;
    longlong *plVar2;
    undefined8 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    int iVar7;
    undefined (*pauVar8) [16];
    longlong lVar9;
    int *piVar10;
    undefined4 *puVar11;
    ulonglong uVar12;
    uint uVar13;
    longlong **pplVar15;
    longlong lVar16;
    uint extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    float extraout_XMM0_Da_02;
    undefined auVar17 [16];
    undefined extraout_XMM0 [16];
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
    undefined auStack1240 [32];
    ulonglong local_4b8;
    undefined4 local_4b0;
    undefined4 local_4a8;
    undefined4 local_4a0;
    undefined local_498 [16];
    float local_488;
    float fStack1156;
    float fStack1152;
    undefined4 uStack1148;
    float local_478;
    float fStack1140;
    float fStack1136;
    uint uStack1132;
    float local_468;
    float fStack1124;
    float fStack1120;
    undefined4 uStack1116;
    undefined local_458 [8];
    undefined4 uStack1104;
    undefined4 uStack1100;
    longlong *local_448 [6];
    undefined4 local_418;
    undefined4 uStack1044;
    undefined4 uStack1040;
    undefined4 uStack1036;
    undefined4 local_408;
    undefined4 uStack1028;
    undefined4 uStack1024;
    undefined4 uStack1020;
    undefined4 local_3f8;
    undefined4 uStack1012;
    undefined4 uStack1008;
    undefined4 uStack1004;
    undefined4 local_3e8;
    undefined4 uStack996;
    undefined4 uStack992;
    undefined4 uStack988;
    undefined4 local_3d8;
    undefined4 uStack980;
    undefined4 uStack976;
    undefined4 uStack972;
    undefined4 local_3c8;
    undefined8 uStack964;
    undefined4 uStack956;
    undefined4 local_3b8 [2];
    undefined4 uStack944;
    undefined4 local_3a8;
    uint uStack932;
    undefined4 uStack928;
    uint uStack924;
    undefined4 local_398;
    undefined4 uStack912;
    undefined4 local_388;
    undefined4 uStack900;
    undefined4 uStack896;
    undefined4 uStack892;
    float local_378;
    float fStack884;
    float fStack880;
    float fStack876;
    float local_368;
    float fStack868;
    float fStack864;
    float fStack860;
    float local_358;
    float local_348;
    float fStack836;
    float fStack832;
    float fStack828;
    float local_338;
    float fStack820;
    float fStack816;
    float fStack812;
    float local_328;
    float local_318;
    float fStack788;
    float fStack784;
    float fStack780;
    float local_308;
    float fStack772;
    float fStack768;
    float fStack764;
    float local_2f8;
    undefined8 local_2e8;
    undefined8 local_2e0;
    float local_2d8;
    float local_2d4;
    float local_2d0;
    float local_2cc;
    float local_2c8;
    float local_2b8;
    float local_2b4;
    float local_2b0;
    float local_2ac;
    float local_2a8;
    float local_2a4;
    float local_2a0;
    float local_29c;
    float local_298;
    float local_288;
    float local_284;
    float local_280;
    float local_27c;
    float local_278;
    float local_274;
    float local_270;
    float local_26c;
    float local_268;
    longlong *local_258;
    longlong *local_250;
    undefined local_248 [144];
    undefined local_1b8 [80];
    undefined4 local_168;
    undefined4 uStack356;
    undefined4 uStack352;
    undefined4 uStack348;
    undefined4 local_158;
    undefined4 uStack340;
    undefined4 uStack336;
    undefined4 uStack332;
    undefined4 local_148;
    undefined4 uStack324;
    undefined4 uStack320;
    undefined4 uStack316;
    undefined4 local_120 [18];
    ulonglong local_d8;
    ulonglong uVar14;

    local_d8 = DAT_140c0f7b0 ^ (ulonglong)auStack1240;
    uVar12 = 0;
    local_4b8 = 0;
    (**(code **)(*param_1 + 0x1b8))(param_1,param_1 + 0x72,local_1b8,0xe00);
    local_358 = *(float *)(param_1 + 0x158);
    local_378 = *(float *)(param_1 + 0x154);
    fStack884 = *(float *)((longlong)param_1 + 0xaa4);
    fStack880 = *(float *)(param_1 + 0x155);
    fStack876 = *(float *)((longlong)param_1 + 0xaac);
    local_368 = *(float *)(param_1 + 0x156);
    fStack868 = *(float *)((longlong)param_1 + 0xab4);
    fStack864 = *(float *)(param_1 + 0x157);
    fStack860 = *(float *)((longlong)param_1 + 0xabc);
    local_348 = *(float *)(param_1 + 0x15a);
    fStack836 = *(float *)((longlong)param_1 + 0xad4);
    fStack832 = *(float *)(param_1 + 0x15b);
    fStack828 = *(float *)((longlong)param_1 + 0xadc);
    local_328 = *(float *)(param_1 + 0x15e);
    local_2f8 = *(float *)(param_1 + 0x164);
    local_338 = *(float *)(param_1 + 0x15c);
    fStack820 = *(float *)((longlong)param_1 + 0xae4);
    fStack816 = *(float *)(param_1 + 0x15d);
    fStack812 = *(float *)((longlong)param_1 + 0xaec);
    local_318 = *(float *)(param_1 + 0x160);
    fStack788 = *(float *)((longlong)param_1 + 0xb04);
    fStack784 = *(float *)(param_1 + 0x161);
    fStack780 = *(float *)((longlong)param_1 + 0xb0c);
    local_308 = *(float *)(param_1 + 0x162);
    fStack772 = *(float *)((longlong)param_1 + 0xb14);
    fStack768 = *(float *)(param_1 + 0x163);
    fStack764 = *(float *)((longlong)param_1 + 0xb1c);
    local_258 = param_1 + 0x166;
    local_250 = param_1 + 0x16a;
    local_498 = CONCAT88(local_250,local_258);
    FUN_1401af0b0(&local_258,&local_2e8);
    fStack884 = fStack884 + local_2e8._4_4_;
    fStack836 = fStack836 + local_2b4;
    local_378 = local_378 + (float)local_2e8;
    fStack788 = fStack788 + local_284;
    fStack880 = fStack880 + (float)local_2e0;
    local_348 = local_348 + local_2b8;
    fStack832 = fStack832 + local_2b0;
    fStack784 = fStack784 + local_280;
    fStack876 = fStack876 + local_2e0._4_4_;
    local_318 = local_318 + local_288;
    fStack828 = fStack828 + local_2ac;
    fStack780 = fStack780 + local_27c;
    local_368 = local_368 + local_2d8;
    local_338 = local_338 + local_2a8;
    local_308 = local_308 + local_278;
    fVar27 = *(float *)(param_1 + 0x16a);
    fVar28 = *(float *)((longlong)param_1 + 0xb54);
    fVar29 = *(float *)(param_1 + 0x16b);
    fVar30 = *(float *)((longlong)param_1 + 0xb5c);
    fVar31 = 1.0;
    fStack868 = fStack868 + local_2d4;
    fStack820 = fStack820 + local_2a4;
    fStack772 = fStack772 + local_274;
    fStack864 = fStack864 + local_2d0;
    fStack816 = fStack816 + local_2a0;
    fStack768 = fStack768 + local_270;
    fStack860 = fStack860 + local_2cc;
    fStack812 = fStack812 + local_29c;
    fStack764 = fStack764 + local_26c;
    local_358 = local_358 + local_2c8;
    local_328 = local_328 + local_298;
    local_2f8 = local_2f8 + local_268;
    local_418 = *(undefined4 *)(param_1 + 0x166);
    uStack1044 = *(undefined4 *)((longlong)param_1 + 0xb34);
    uStack1040 = *(undefined4 *)(param_1 + 0x167);
    uStack1036 = *(undefined4 *)((longlong)param_1 + 0xd54);
    local_408 = *(undefined4 *)(param_1 + 0x168);
    uStack1028 = *(undefined4 *)((longlong)param_1 + 0xb44);
    uStack1024 = *(undefined4 *)(param_1 + 0x169);
    local_488 = _DAT_140c78390;
    fStack1156 = fRam0000000140c78394;
    fStack1152 = fRam0000000140c78398;
    uStack1148 = uRam0000000140c7839c;
    uStack1020 = *(undefined4 *)(param_1 + 0x1aa);
    local_468 = _DAT_140c783b0;
    fStack1124 = fRam0000000140c783b4;
    fStack1120 = fRam0000000140c783b8;
    uStack1116 = uRam0000000140c783bc;
    local_478 = _DAT_140c783a0;
    fStack1140 = fRam0000000140c783a4;
    fStack1136 = fRam0000000140c783a8;
    uStack1132 = uRam0000000140c783ac;
    _local_458 = _DAT_140c783c0;
    if ((fVar27 != 0.0) || (fVar29 != 0.0)) {
        fVar24 = 0.0;
        fVar26 = 3.0;
        fVar20 = fVar28 * 0.0 - fVar29 * 1.0;
        fVar21 = fVar29 * 0.0 - fVar27 * 0.0;
        fVar22 = fVar27 * 1.0 - fVar28 * 0.0;
        fVar23 = fVar30 * 0.0 - fVar30 * 0.0;
        fVar18 = fVar21 * fVar21;
        fVar19 = fVar20 * fVar20 + fVar18 + fVar22 * fVar22;
        auVar17 = rsqrtss(CONCAT412(fVar18,CONCAT48(fVar18,CONCAT44(fVar18,fVar18))),
                          CONCAT412(fVar23 * fVar23,CONCAT48(fVar22 * fVar22,CONCAT44(fVar18,fVar19))));
        fVar18 = SUB164(auVar17,0);
        fVar18 = (3.0 - fVar19 * fVar18 * fVar18) * 0.5 * fVar18;
        if (fVar18 <= 0.0) {
            fVar18 = 0.0;
        }
        fVar20 = fVar18 * fVar20;
        fVar21 = fVar18 * fVar21;
        fVar22 = fVar18 * fVar22;
        fVar18 = fVar18 * fVar23;
        FUN_1408fccb0();
        local_2d8 = (float)(extraout_XMM0_Da ^ 0x80000000);
        FUN_1408fe3d0();
        fVar19 = extraout_XMM0_Da_00;
        FUN_1408fc950();
        fStack1120 = SUB164(extraout_XMM0,0);
        fVar25 = fVar31 - fStack1120;
        fVar23 = fVar20 * fVar20 + fVar21 * fVar21 + 0.0;
        auVar17 = rsqrtss(extraout_XMM0,
                          CONCAT412(fVar18 * fVar18,
                                    CONCAT48(fVar22 * fVar22,CONCAT44(fVar21 * fVar21,fVar23))));
        fVar18 = SUB164(auVar17,0);
        fVar18 = (fVar26 - fVar23 * fVar18 * fVar18) * 0.5 * fVar18;
        if (fVar18 <= fVar24) {
            fVar18 = fVar24;
        }
        fVar20 = fVar18 * fVar20;
        fVar18 = fVar18 * fVar21;
        local_478 = fVar18 * fVar20 * fVar25;
        fStack1124 = fVar18 * 0.0 * fVar25;
        local_488 = fVar20 * fVar20 * fVar25 + fStack1120;
        local_468 = fVar20 * 0.0 * fVar25;
        uStack1148 = 0;
        uStack1132 = 0;
        uStack1116 = 0;
        fStack1140 = fVar18 * fVar18 * fVar25 + fStack1120;
        fStack1156 = fVar19 * 0.0 + local_478;
        local_478 = local_478 - fVar19 * 0.0;
        fStack1120 = fVar25 * 0.0 + fStack1120;
        fStack1152 = local_468 - fVar18 * fVar19;
        local_468 = local_468 + fVar18 * fVar19;
        fStack1136 = fStack1124 + fVar20 * fVar19;
        fStack1124 = fStack1124 - fVar20 * fVar19;
        _local_458 = CONCAT412(0x3f800000,ZEXT412(0));
    }
    fVar18 = 0.0;
    puVar11 = local_120;
    local_448[0] = (longlong *)0x0;
    local_448[1] = (longlong *)0x0;
    local_448[2] = (longlong *)0x0;
    local_448[3] = (longlong *)0x0;
    uVar14 = uVar12;
    do {
        iVar7 = FUN_140354aa0(param_1,*puVar11,local_448 + uVar14);
        if (iVar7 < 0) {
            pplVar15 = local_448;
            lVar9 = 4;
            do {
                if (*pplVar15 != (longlong *)0x0) {
                    (**(code **)(**pplVar15 + 8))();
                    *pplVar15 = (longlong *)0x0;
                }
                pplVar15 = pplVar15 + 1;
                lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
            goto LAB_14035db9a;
        }
        uVar13 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar13;
        puVar11 = puVar11 + 1;
    } while (uVar13 < 4);
    local_4b8 = local_4b8 & 0xffffffff00000000;
    pauVar8 = (undefined (*) [16])(**(code **)(*DAT_140c65670 + 0x100))(DAT_140c65670,0xc0,0,0);
    if (pauVar8 != (undefined (*) [16])0x0) {
        local_3f8 = *(undefined4 *)(param_1 + 0x78);
        uStack1012 = *(undefined4 *)((longlong)param_1 + 0x3c4);
        uStack1008 = *(undefined4 *)(param_1 + 0x79);
        uStack1004 = *(undefined4 *)((longlong)param_1 + 0x3cc);
        local_3e8 = *(undefined4 *)(param_1 + 0x7a);
        uStack996 = *(undefined4 *)((longlong)param_1 + 0x3d4);
        uStack992 = *(undefined4 *)(param_1 + 0x7b);
        uStack988 = *(undefined4 *)((longlong)param_1 + 0x3dc);
        local_258 = (longlong *)&local_488;
        local_250 = (longlong *)&local_3f8;
        local_3d8 = *(undefined4 *)(param_1 + 0x7c);
        uStack980 = *(undefined4 *)((longlong)param_1 + 0x3e4);
        uStack976 = *(undefined4 *)(param_1 + 0x7d);
        uStack972 = *(undefined4 *)((longlong)param_1 + 0x3ec);
        uStack956 = *(undefined4 *)((longlong)param_1 + 0x3fc);
        uStack964 = 0;
        local_3c8 = 0;
        local_498._0_8_ = local_258;
        local_498._8_8_ = local_250;
        FUN_1401afb10(&local_258,local_248);
        local_2e8 = local_248;
        local_2e0 = param_1 + 0xa0;
        local_498 = CONCAT88(local_2e0,local_2e8);
        FUN_1401afb10(&local_2e8,local_3b8);
        *pauVar8 = CONCAT412(local_388,CONCAT48(local_398,CONCAT44(local_3a8,local_3b8[0])));
        pauVar8[1] = CONCAT412(uStack900,ZEXT412(uStack932) << 0x20);
        pauVar8[2] = CONCAT412(uStack896,CONCAT48(uStack912,CONCAT44(uStack928,uStack944)));
        pauVar8[3] = CONCAT412(uStack892,ZEXT412(uStack924) << 0x20);
        pauVar8[4] = CONCAT412(local_458._0_4_,CONCAT48(local_468,CONCAT44(local_478,local_488)));
        pauVar8[5] = CONCAT412(local_458._4_4_,ZEXT412((uint)fStack1140) << 0x20);
        auVar17 = CONCAT412(uStack1104,CONCAT48(fStack1120,CONCAT44(fStack1136,fStack1152)));
        pauVar8[6] = auVar17;
        pauVar8[7] = CONCAT412(uStack1100,ZEXT412(uStack1132) << 0x20);
        pauVar8[8] = auVar17 & (undefined  [16])0x0;
        uVar4 = *(undefined4 *)((longlong)param_1 + 0x394);
        uVar5 = *(undefined4 *)(param_1 + 0x73);
        uVar6 = *(undefined4 *)((longlong)param_1 + 0x39c);
        *(undefined4 *)pauVar8[9] = *(undefined4 *)(param_1 + 0x72);
        *(undefined4 *)(pauVar8[9] + 4) = uVar4;
        *(undefined4 *)(pauVar8[9] + 8) = uVar5;
        *(undefined4 *)(pauVar8[9] + 0xc) = uVar6;
        *(undefined4 *)pauVar8[10] = local_158;
        *(undefined4 *)(pauVar8[10] + 4) = uStack340;
        *(undefined4 *)(pauVar8[10] + 8) = uStack336;
        *(undefined4 *)(pauVar8[10] + 0xc) = uStack332;
        *(undefined4 *)pauVar8[0xb] = local_148;
        *(undefined4 *)(pauVar8[0xb] + 4) = uStack324;
        *(undefined4 *)(pauVar8[0xb] + 8) = uStack320;
        *(undefined4 *)(pauVar8[0xb] + 0xc) = uStack316;
        (**(code **)(*DAT_140c65670 + 0x108))();
    }
    local_4b8 = local_4b8 & 0xffffffff00000000;
    lVar9 = (**(code **)(*DAT_140c65670 + 0x110))(DAT_140c65670,400,0,0);
    if (lVar9 != 0) {
        lVar16 = lVar9;
        FUN_140262d50();
        piVar10 = DAT_140c63750;
        *(undefined (*) [16])(lVar16 + 0x70) =
                CONCAT412(fVar30,CONCAT48(fVar29,CONCAT44(fVar28,fVar27)));
        *(undefined4 *)(lVar16 + 0x80) = local_418;
        *(undefined4 *)(lVar16 + 0x84) = uStack1044;
        *(undefined4 *)(lVar16 + 0x88) = uStack1040;
        *(undefined4 *)(lVar16 + 0x8c) = uStack1036;
        *(undefined4 *)(lVar16 + 0x90) = local_408;
        *(undefined4 *)(lVar16 + 0x94) = uStack1028;
        *(undefined4 *)(lVar16 + 0x98) = uStack1024;
        *(undefined4 *)(lVar16 + 0x9c) = uStack1020;
        *(undefined4 *)(lVar16 + 0xa0) = 0x3f800000;
        iVar7 = DAT_140c43f70;
        if (*piVar10 < DAT_140c43f70) {
            iVar7 = *piVar10;
        }
        *(undefined4 *)(lVar16 + 0xa4) = *(undefined4 *)(&DAT_140c43f80 + (longlong)iVar7 * 4);
        iVar7 = DAT_140c43fd0;
        if (*piVar10 < DAT_140c43fd0) {
            iVar7 = *piVar10;
        }
        *(undefined4 *)(lVar16 + 0xa8) = *(undefined4 *)(&DAT_140c43fe0 + (longlong)iVar7 * 4);
        FUN_1408fc950();
        *(float *)(lVar9 + 0xac) = extraout_XMM0_Da_01;
        *(float *)(lVar9 + 0xb0) = fVar31 / (fVar31 - extraout_XMM0_Da_01);
        iVar7 = DAT_140c44090;
        if (*piVar10 < DAT_140c44090) {
            iVar7 = *piVar10;
        }
        *(undefined4 *)(lVar9 + 0xb4) = *(undefined4 *)(&DAT_140c440a0 + (longlong)iVar7 * 4);
        iVar7 = DAT_140c440f0;
        if (*piVar10 < DAT_140c440f0) {
            iVar7 = *piVar10;
        }
        *(undefined4 *)(lVar9 + 0xb8) = *(undefined4 *)(&DAT_140c44100 + (longlong)iVar7 * 4);
        *(undefined4 *)(lVar9 + 0xbc) = *(undefined4 *)((longlong)param_1 + 0xd94);
        iVar7 = DAT_140c44150;
        if (*piVar10 < DAT_140c44150) {
            iVar7 = *piVar10;
        }
        *(float *)(lVar9 + 0xc0) = fVar31 / *(float *)(&DAT_140c44160 + (longlong)iVar7 * 4);
        FUN_1408fc950();
        *(float *)(lVar9 + 0xc4) = extraout_XMM0_Da_02;
        *(float *)(lVar9 + 200) = fVar31 / (fVar31 - extraout_XMM0_Da_02);
        iVar7 = DAT_140c441b0;
        if (*piVar10 < DAT_140c441b0) {
            iVar7 = *piVar10;
        }
        *(undefined4 *)(lVar9 + 0xcc) = *(undefined4 *)(&DAT_140c441c0 + (longlong)iVar7 * 4);
        *(undefined4 *)(lVar9 + 0xd0) = *(undefined4 *)(param_1 + 0x218);
        *(undefined4 *)(lVar9 + 0xd4) = 0;
        piVar10 = (int *)(**(code **)(*DAT_140c65670 + 0x230))();
        iVar7 = *piVar10;
        iVar1 = piVar10[1];
        pplVar15 = local_448;
        puVar11 = (undefined4 *)(lVar9 + 0x100);
        *(ulonglong *)(lVar9 + 0xe0) = CONCAT44(fVar31 / (float)iVar1,fVar31 / (float)iVar7);
        uVar3 = CONCAT44((fVar31 / (float)iVar1) * 0.5,(fVar31 / (float)iVar7) * 0.5);
        local_498 = CONCAT412(fVar18 * 0.5,CONCAT48(fVar18 * 0.5,uVar3));
        *(undefined8 *)(lVar9 + 0xe8) = uVar3;
        *(undefined4 *)(lVar9 + 0xf0) = local_168;
        *(undefined4 *)(lVar9 + 0xf4) = uStack356;
        *(undefined4 *)(lVar9 + 0xf8) = uStack352;
        *(undefined4 *)(lVar9 + 0xfc) = uStack348;
        do {
            plVar2 = *pplVar15;
            local_4b8 = 0;
            uVar4 = *(undefined4 *)((longlong)plVar2 + 0x84);
            uVar5 = *(undefined4 *)(plVar2 + 0x11);
            uVar6 = *(undefined4 *)((longlong)plVar2 + 0x8c);
            *puVar11 = *(undefined4 *)(plVar2 + 0x10);
            puVar11[1] = uVar4;
            puVar11[2] = uVar5;
            puVar11[3] = uVar6;
            uVar4 = *(undefined4 *)((longlong)plVar2 + 0x94);
            uVar5 = *(undefined4 *)(plVar2 + 0x13);
            uVar6 = *(undefined4 *)((longlong)plVar2 + 0x9c);
            puVar11[4] = *(undefined4 *)(plVar2 + 0x12);
            puVar11[5] = uVar4;
            puVar11[6] = uVar5;
            puVar11[7] = uVar6;
            (**(code **)(*DAT_140c65670 + 0x160))(DAT_140c65670,uVar12,plVar2[0xb],0);
            uVar13 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar13;
            puVar11 = puVar11 + 8;
            pplVar15 = pplVar15 + 1;
        } while (uVar13 < 4);
        puVar11 = (undefined4 *)(**(code **)(*DAT_140c65688 + 0xf8))();
        uVar4 = puVar11[1];
        uVar5 = puVar11[2];
        uVar6 = puVar11[3];
        *(undefined4 *)(lVar9 + 0x180) = *puVar11;
        *(undefined4 *)(lVar9 + 0x184) = uVar4;
        *(undefined4 *)(lVar9 + 0x188) = uVar5;
        *(undefined4 *)(lVar9 + 0x18c) = uVar6;
        (**(code **)(*DAT_140c65670 + 0x118))();
    }
    lVar9 = (**(code **)(*DAT_140c65688 + 0xc0))();
    lVar16 = 4;
    local_4b8 = 0;
    (**(code **)(*DAT_140c65670 + 0x160))(DAT_140c65670,4,*(undefined8 *)(lVar9 + 0x38),0);
    uVar12 = (**(code **)(*DAT_140c65688 + 0xd8))();
    lVar9 = (**(code **)(*DAT_140c65688 + 0xc0))();
    local_4b8 = uVar12;
    (**(code **)(*DAT_140c65670 + 0x160))(DAT_140c65670,5,*(undefined8 *)(lVar9 + 0x48),0);
    (**(code **)(*DAT_140c65688 + 0x50))();
    (**(code **)(*DAT_140c65670 + 0x140))(DAT_140c65670,*(undefined8 *)(param_1[2] + 400),0);
    (**(code **)(*DAT_140c65670 + 0x178))(DAT_140c65670,*(undefined8 *)(param_1[2] + 0x198),1);
    (**(code **)(*DAT_140c65670 + 0x1d0))(DAT_140c65670,0,2,0);
    (**(code **)(*DAT_140c65670 + 0x130))(DAT_140c65670,*(undefined8 *)(param_1[2] + 0x1a0),3,0);
    (**(code **)(*DAT_140c65670 + 0x138))(DAT_140c65670,*(undefined8 *)(param_1[2] + 0x1b0));
    local_4b0 = *(undefined4 *)(param_1[2] + 0x1a8);
    local_4a0 = 1;
    local_4a8 = 0;
    local_4b8 = local_4b8 & 0xffffffff00000000;
    (**(code **)(*DAT_140c65670 + 0x290))(DAT_140c65670,3,0,*(undefined4 *)(param_1[2] + 0x1b8));
    pplVar15 = local_448;
    do {
        if (*pplVar15 != (longlong *)0x0) {
            (**(code **)(**pplVar15 + 8))();
            *pplVar15 = (longlong *)0x0;
        }
        pplVar15 = pplVar15 + 1;
        lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    LAB_14035db9a:
    FUN_1407db4f0(local_d8 ^ (ulonglong)auStack1240);
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14035dbe0(longlong param_1)

{
    int *piVar1;
    int iVar2;
    undefined4 *puVar3;
    float *pfVar4;
    float fVar5;
    undefined extraout_XMM0 [16];
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    undefined auVar12 [16];
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    undefined auStack1176 [32];
    undefined *local_478;
    undefined8 local_470;
    undefined local_468 [16];
    undefined local_458 [16];
    undefined local_448 [16];
    undefined local_438 [16];
    float local_428;
    float fStack1060;
    undefined4 uStack1056;
    undefined4 uStack1052;
    float local_418;
    float fStack1044;
    undefined4 uStack1040;
    undefined4 uStack1036;
    int local_408;
    int local_404;
    undefined4 local_400;
    undefined4 local_3fc;
    float local_3f8;
    float fStack1012;
    float fStack1008;
    float fStack1004;
    float local_3e8;
    float fStack996;
    float fStack992;
    float fStack988;
    float local_3d8;
    float fStack980;
    undefined4 uStack976;
    undefined4 uStack972;
    float local_3c8;
    float fStack964;
    undefined4 uStack960;
    undefined4 uStack956;
    float local_3b8;
    float fStack948;
    undefined4 uStack944;
    undefined4 uStack940;
    float local_3a8;
    float fStack932;
    undefined4 uStack928;
    undefined4 uStack924;
    undefined4 local_398;
    float fStack916;
    float fStack912;
    float fStack908;
    float local_388;
    float fStack900;
    float fStack896;
    float fStack892;
    float local_378;
    float fStack884;
    undefined4 uStack880;
    undefined4 uStack876;
    float local_368;
    float fStack868;
    undefined4 uStack864;
    undefined4 uStack860;
    float local_358;
    float fStack852;
    undefined4 uStack848;
    undefined4 uStack844;
    float local_348;
    float fStack836;
    undefined4 uStack832;
    undefined4 uStack828;
    undefined8 local_338;
    float fStack816;
    float fStack812;
    float local_328;
    float fStack804;
    float fStack800;
    float fStack796;
    float local_318;
    undefined4 uStack788;
    float fStack784;
    float fStack780;
    float local_308;
    float fStack772;
    float fStack768;
    float fStack764;
    undefined4 local_2f8 [2];
    undefined8 local_2f0;
    undefined4 local_2e4;
    undefined4 local_2e0;
    undefined8 local_2d8;
    undefined4 local_2cc;
    undefined4 local_2c8 [2];
    undefined8 local_2c0;
    undefined4 local_2b4;
    undefined4 local_2b0 [2];
    undefined8 local_2a8;
    undefined4 local_29c;
    undefined4 local_298 [2];
    undefined8 local_290;
    undefined4 local_284;
    undefined4 local_280 [2];
    undefined8 local_278;
    undefined4 local_26c;
    undefined local_268 [16];
    int *local_258;
    undefined4 *local_250;
    undefined local_238 [16];
    undefined4 local_228;
    undefined4 uStack548;
    undefined4 uStack544;
    undefined4 uStack540;
    undefined local_218 [16];
    undefined local_208 [16];
    undefined local_1f8 [16];
    undefined local_1e8 [16];
    undefined local_1d8 [16];
    undefined local_1c8 [16];
    undefined local_1b8 [16];
    undefined local_1a8 [16];
    undefined local_198 [16];
    undefined local_188 [16];
    undefined local_178 [16];
    undefined local_168 [16];
    undefined4 local_158;
    undefined4 uStack340;
    undefined4 uStack336;
    undefined4 uStack332;
    undefined4 local_148;
    undefined4 uStack324;
    undefined4 uStack320;
    undefined4 uStack316;
    undefined local_138 [16];
    undefined local_128 [16];
    undefined local_118 [16];
    undefined local_108 [16];
    undefined local_f8 [16];
    undefined local_e8 [16];
    float local_d8;
    float fStack212;
    float fStack208;
    float fStack204;
    undefined4 local_c8;
    undefined4 local_c4;
    undefined4 local_c0;
    undefined4 local_bc;
    undefined4 local_b8;
    undefined4 local_b4;
    ulonglong local_b0;

    local_b0 = DAT_140c0f7b0 ^ (ulonglong)auStack1176;
    (**(code **)(*DAT_140c65670 + 0x1f8))();
    (**(code **)(*DAT_140c65670 + 0x200))();
    (**(code **)(*DAT_140c65670 + 0x120))();
    (**(code **)(*DAT_140c65670 + 0x128))();
    (**(code **)(*DAT_140c65670 + 0x210))(DAT_140c65670,&DAT_140c3fe88,1);
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x15a8) + 0x30))();
    fVar21 = 1.0;
    if (iVar2 == 0) {
        local_2d8 = *(undefined8 *)(param_1 + 0x1598);
        local_2e0 = 1;
        local_2c0 = *(undefined8 *)(param_1 + 0x15a0);
        local_2cc = 0;
        local_278 = *(undefined8 *)(param_1 + 0x15a8);
        local_2c8[0] = 1;
        local_2b4 = 0;
        local_280[0] = 1;
        local_26c = 0;
        local_478 = &DAT_140c3fe88;
        (**(code **)(*DAT_140c65670 + 0x208))(DAT_140c65670,local_280,local_2c8);
        local_268 = extraout_XMM0 & (undefined  [16])0x0;
        local_478 = (undefined *)((ulonglong)local_478 & 0xffffffff00000000);
        (**(code **)(*DAT_140c65670 + 0x270))(DAT_140c65670,1,local_268);
        (**(code **)(*DAT_140c65670 + 0x2a0))();
    }
    local_478 = (undefined *)((ulonglong)local_478 & 0xffffffff00000000);
    puVar3 = (undefined4 *)(**(code **)(*DAT_140c65670 + 0x110))(DAT_140c65670,0x10,0);
    piVar1 = DAT_140c63750;
    if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0x3f800000;
        iVar2 = DAT_140c44440;
        if (*piVar1 < DAT_140c44440) {
            iVar2 = *piVar1;
        }
        puVar3[1] = *(float *)(&DAT_140c44450 + (longlong)iVar2 * 4) * -1.0;
        (**(code **)(*DAT_140c65670 + 0x118))();
    }
    local_290 = *(undefined8 *)(param_1 + 0x1598);
    local_298[0] = 1;
    local_284 = 0;
    local_478 = &DAT_140c3fe88;
    (**(code **)(*DAT_140c65670 + 0x208))(DAT_140c65670,local_298,&DAT_140c3fe88,&DAT_140c3fe88);
    (**(code **)(*DAT_140c65670 + 0x278))(DAT_140c65670,3);
    local_478 = (undefined *)0x0;
    (**(code **)(*DAT_140c65670 + 0x160))(DAT_140c65670,0,*(undefined8 *)(param_1 + 0x15a8),0);
    (**(code **)(*DAT_140c65670 + 0x178))
            (DAT_140c65670,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x1e0));
    local_470 = 0;
    local_478 = (undefined *)0x0;
    (**(code **)(*DAT_140c65670 + 0x298))(DAT_140c65670,0xffffffff);
    local_478 = (undefined *)0x0;
    (**(code **)(*DAT_140c65670 + 0x160))(DAT_140c65670,0,0,0);
    (**(code **)(*DAT_140c65670 + 0x1d0))();
    local_b8 = 0;
    local_b4 = 0x3f800000;
    fVar5 = *(float *)(param_1 + 0x1580);
    fVar8 = *(float *)(param_1 + 0x390) - fVar5 * 0.5;
    fVar6 = *(float *)(param_1 + 0x398) - fVar5 * 0.5;
    local_218 = ZEXT816(CONCAT44(fVar6,fVar8));
    fVar14 = DAT_140c43fb8 * fVar8 + 0.5;
    fVar9 = *(float *)(param_1 + 0x1590) * fVar14;
    fVar13 = DAT_140c43fb8 * fVar6 + 0.5;
    fVar7 = fVar13 * *(float *)(param_1 + 0x1590);
    fVar17 = 0.5;
    fVar18 = 0.5;
    fVar19 = 0.5;
    fVar20 = 0.5;
    fVar14 = fVar14 * 131072.0;
    local_258 = &local_408;
    local_250 = &local_400;
    local_400 = 1;
    fVar13 = fVar13 * 131072.0;
    local_3fc = 1;
    local_148 = 0x3f000000;
    uStack324 = 0x3f000000;
    uStack320 = 0x3f000000;
    uStack316 = 0x3f000000;
    fVar16 = *(float *)(param_1 + 0x1594);
    local_228 = 0x3f000000;
    uStack548 = 0x3f000000;
    uStack544 = 0x3f000000;
    uStack540 = 0x3f000000;
    local_408 = (int)fVar9;
    local_1d8 = ZEXT816(CONCAT44(fVar7,fVar9));
    local_158 = 0x3f000000;
    uStack340 = 0x3f000000;
    uStack336 = 0x3f000000;
    uStack332 = 0x3f000000;
    local_404 = (int)fVar7;
    local_1a8 = ZEXT816(CONCAT44((float)(local_404 + 1),(float)(local_408 + 1)));
    fVar7 = (float)(local_408 + 1) * fVar16;
    fVar9 = (float)(local_404 + 1) * fVar16;
    local_208 = ZEXT816(CONCAT44((float)local_404,(float)local_408));
    local_448._0_4_ = (float)local_408 * fVar16;
    local_448._4_4_ = (float)local_404 * fVar16;
    local_108 = CONCAT412(fVar16 * 0.0,CONCAT48(fVar16 * 0.0,CONCAT44(fVar9,fVar7)));
    local_1e8 = CONCAT412(fVar16 * 0.0,
                          CONCAT48(fVar16 * 0.0,CONCAT44(local_448._4_4_,local_448._0_4_)));
    fVar7 = fVar7 - 0.5;
    fVar9 = fVar9 - 0.5;
    fVar10 = fVar16 * 0.0 - 0.5;
    fVar11 = fVar16 * 0.0 - 0.5;
    local_448._0_4_ = local_448._0_4_ - 0.5;
    local_448._4_4_ = local_448._4_4_ - 0.5;
    fVar15 = fVar16 * 0.0 - 0.5;
    fVar16 = fVar16 * 0.0 - 0.5;
    local_188 = CONCAT412(fVar11,CONCAT48(fVar10,CONCAT44(fVar9,fVar7)));
    local_1b8 = CONCAT412(fVar16,CONCAT48(fVar15,CONCAT44(local_448._4_4_,local_448._0_4_)));
    fVar7 = fVar7 * 65536.0;
    fVar9 = fVar9 * 65536.0;
    fVar10 = fVar10 * 65536.0;
    fVar11 = fVar11 * 65536.0;
    local_448._0_4_ = local_448._0_4_ * 65536.0;
    local_448._4_4_ = local_448._4_4_ * 65536.0;
    fVar15 = fVar15 * 65536.0;
    fVar16 = fVar16 * 65536.0;
    local_128 = CONCAT412(fVar11,CONCAT48(fVar10,CONCAT44(fVar9,fVar7)));
    local_438 = CONCAT412(fVar11,CONCAT48(fVar10,CONCAT44(fVar9,fVar7)));
    local_198 = CONCAT412(fVar16,CONCAT48(fVar15,CONCAT44(local_448._4_4_,local_448._0_4_)));
    local_448 = CONCAT412(fVar16,CONCAT48(fVar15,CONCAT44(local_448._4_4_,local_448._0_4_)));
    local_178 = ZEXT816(CONCAT44(fVar6 - local_448._4_4_,fVar8 - local_448._0_4_));
    local_138 = ZEXT816(CONCAT44(fVar13,fVar14));
    fVar10 = 2.0;
    local_118 = ZEXT816(CONCAT44((float)(int)fVar13,(float)(int)fVar14));
    local_f8 = divps(local_118,_DAT_140b7b4d0);
    local_d8 = SUB164(local_f8,0) - 0.5;
    fStack212 = SUB164(local_f8 >> 0x20,0) - 0.5;
    fStack208 = SUB164(local_f8 >> 0x40,0) - 0.5;
    fStack204 = SUB164(local_f8 >> 0x60,0) - 0.5;
    fVar8 = local_d8 * 65536.0;
    fVar9 = fStack212 * 65536.0;
    auVar12 = CONCAT412(fStack204 * 65536.0,CONCAT48(fStack208 * 65536.0,CONCAT44(fVar9,fVar8)));
    fVar16 = (float)((longlong)((fVar8 - local_448._0_4_) * 2.0) & 0xffffffff);
    fVar6 = (float)((longlong)((fVar9 - local_448._4_4_) * 2.0) & 0xffffffff);
    fVar7 = (float)(ulonglong)*(uint *)(param_1 + 0x1588);
    local_3f8 = fVar16;
    fStack1012 = fVar6;
    local_3e8 = fVar7;
    fStack996 = fVar7;
    local_1c8 = auVar12;
    if ((fVar16 < fVar7) && (fVar6 < fVar7)) {
        local_418 = fVar5 + local_448._0_4_;
        local_c8 = (undefined4)(longlong)fVar16;
        uStack1056 = uStack976;
        uStack1052 = uStack972;
        local_c4 = (undefined4)(longlong)fVar6;
        fStack1044 = fVar5 + local_448._4_4_;
        uStack1040 = uStack960;
        uStack1036 = uStack956;
        local_c0 = (undefined4)(longlong)(fVar7 - fVar16);
        local_bc = (undefined4)(longlong)(fVar7 - fVar6);
        fVar5 = fVar7;
        local_428 = fVar8;
        fStack1060 = fVar9;
        local_3d8 = fVar8;
        fStack980 = fVar9;
        local_3c8 = local_418;
        fStack964 = fStack1044;
        (**(code **)(*DAT_140c65670 + 0x250))(DAT_140c65670,&local_c8);
        local_238 = CONCAT412(fVar20,CONCAT48(fVar19,CONCAT44(fVar18,fVar17)));
        local_468 = CONCAT412(fStack1004 - fVar20,
                              CONCAT48(fStack1008 - fVar19,CONCAT44(fVar6 - fVar18,fVar16 - fVar17)));
        local_458 = CONCAT412(fStack988 - fVar20,
                              CONCAT48(fStack992 - fVar19,CONCAT44(fVar5 - fVar18,fVar7 - fVar17)));
        FUN_14035e960(param_1,&local_428,local_468);
        (**(code **)(*DAT_140c65670 + 0x2a0))();
    }
    local_398 = 0;
    fVar7 = SUB164(auVar12,0);
    fVar16 = (float)((longlong)((fVar9 - local_448._4_4_) * fVar10) & 0xffffffff);
    fVar8 = (float)(ulonglong)*(uint *)(param_1 + 0x1588);
    fVar5 = 0.0;
    fVar6 = (float)((longlong)((fVar7 - local_448._0_4_) * fVar10) & 0xffffffff);
    fStack916 = fVar16;
    local_388 = fVar6;
    fStack900 = fVar8;
    if ((0.0 < fVar6) && (fVar16 < fVar8)) {
        fStack1044 = *(float *)(param_1 + 0x1580);
        local_418 = fVar7 + fStack1044;
        local_428 = local_448._0_4_ + fStack1044;
        local_c8 = 0;
        fStack1044 = local_448._4_4_ + fStack1044;
        local_c4 = (undefined4)(longlong)fVar16;
        uStack1056 = uStack848;
        uStack1052 = uStack844;
        uStack1040 = uStack832;
        uStack1036 = uStack828;
        local_c0 = (undefined4)(longlong)(fVar6 - 0.0);
        local_bc = (undefined4)(longlong)(fVar8 - fVar16);
        fStack1060 = fVar9;
        local_358 = local_428;
        fStack852 = fVar9;
        local_348 = local_418;
        fStack836 = fStack1044;
        (**(code **)(*DAT_140c65670 + 0x250))(DAT_140c65670,&local_c8);
        local_168 = CONCAT412(fVar20,CONCAT48(fVar19,CONCAT44(fVar18,fVar17)));
        local_468 = CONCAT412(fStack908 - fVar20,
                              CONCAT48(fStack912 - fVar19,CONCAT44(fVar16 - fVar18,fVar5 - fVar17)));
        local_458 = CONCAT412(fStack892 - fVar20,
                              CONCAT48(fStack896 - fVar19,CONCAT44(fVar8 - fVar18,fVar6 - fVar17)));
        FUN_14035e960(param_1,&local_428,local_468);
        (**(code **)(*DAT_140c65670 + 0x2a0))();
    }
    uStack788 = 0;
    fVar16 = (float)((longlong)((fVar7 - local_448._0_4_) * fVar10) & 0xffffffff);
    fVar5 = 0.0;
    fVar6 = (float)(ulonglong)*(uint *)(param_1 + 0x1588);
    fVar8 = (float)((longlong)((fVar9 - local_448._4_4_) * fVar10) & 0xffffffff);
    local_318 = fVar16;
    local_308 = fVar6;
    fStack772 = fVar8;
    if ((fVar16 < fVar6) && (0.0 < fVar8)) {
        local_418 = *(float *)(param_1 + 0x1580);
        fStack1044 = fVar9 + local_418;
        fStack1060 = local_448._4_4_ + local_418;
        local_c8 = (undefined4)(longlong)fVar16;
        local_c4 = 0;
        local_418 = local_448._0_4_ + local_418;
        uStack1056 = uStack944;
        uStack1052 = uStack940;
        uStack1040 = uStack928;
        uStack1036 = uStack924;
        local_c0 = (undefined4)(longlong)(fVar6 - fVar16);
        local_bc = (undefined4)(longlong)(fVar8 - 0.0);
        local_428 = fVar7;
        local_3b8 = fVar7;
        fStack948 = fStack1060;
        local_3a8 = local_418;
        fStack932 = fStack1044;
        (**(code **)(*DAT_140c65670 + 0x250))(DAT_140c65670,&local_c8);
        local_1f8 = CONCAT412(fVar20,CONCAT48(fVar19,CONCAT44(fVar18,fVar17)));
        local_468 = CONCAT412(fStack780 - fVar20,
                              CONCAT48(fStack784 - fVar19,CONCAT44(fVar5 - fVar18,fVar16 - fVar17)));
        local_458 = CONCAT412(fStack764 - fVar20,
                              CONCAT48(fStack768 - fVar19,CONCAT44(fVar8 - fVar18,fVar6 - fVar17)));
        FUN_14035e960(param_1,&local_428,local_468);
        (**(code **)(*DAT_140c65670 + 0x2a0))();
    }
    local_338 = 0;
    local_338._0_4_ = 0.0;
    local_338._4_4_ = 0.0;
    local_468 = ZEXT816(CONCAT44(fStack812,fStack816)) << 0x40;
    fVar5 = (float)((longlong)((fVar7 - local_448._0_4_) * fVar10) & 0xffffffff);
    fVar16 = (float)((longlong)((fVar9 - local_448._4_4_) * fVar10) & 0xffffffff);
    local_458 = CONCAT412(fStack796,CONCAT48(fStack800,CONCAT44(fVar16,fVar5)));
    local_328 = fVar5;
    fStack804 = fVar16;
    if ((0.0 < fVar5) && (0.0 < fVar16)) {
        fStack1044 = *(float *)(param_1 + 0x1580);
        local_428 = local_448._0_4_ + fStack1044;
        fStack1060 = local_448._4_4_ + fStack1044;
        local_418 = fVar7 + fStack1044;
        local_c8 = 0;
        fStack1044 = fVar9 + fStack1044;
        local_c4 = 0;
        uStack1056 = uStack880;
        uStack1052 = uStack876;
        uStack1040 = uStack864;
        uStack1036 = uStack860;
        local_c0 = (undefined4)(longlong)(fVar5 - 0.0);
        local_bc = (undefined4)(longlong)(fVar16 - 0.0);
        local_378 = local_428;
        fStack884 = fStack1060;
        local_368 = local_418;
        fStack868 = fStack1044;
        (**(code **)(*DAT_140c65670 + 0x250))(DAT_140c65670,&local_c8);
        local_e8 = CONCAT412(fVar20,CONCAT48(fVar19,CONCAT44(fVar18,fVar17)));
        local_468 = CONCAT412(fStack812 - fVar20,
                              CONCAT48(fStack816 - fVar19,
                                       CONCAT44(local_338._4_4_ - fVar18,(float)local_338 - fVar17)));
        local_458 = CONCAT412(fStack796 - fVar20,
                              CONCAT48(fStack800 - fVar19,CONCAT44(fVar16 - fVar18,fVar5 - fVar17)));
        FUN_14035e960(param_1,&local_428,local_468);
        (**(code **)(*DAT_140c65670 + 0x2a0))();
    }
    local_478 = (undefined *)((ulonglong)local_478 & 0xffffffff00000000);
    pfVar4 = (float *)(**(code **)(*DAT_140c65670 + 0x110))(DAT_140c65670,0x10,0);
    if (pfVar4 != (float *)0x0) {
        iVar2 = DAT_140c444a0;
        if (*DAT_140c63750 < DAT_140c444a0) {
            iVar2 = *DAT_140c63750;
        }
        *pfVar4 = fVar21 - *(float *)(&DAT_140c444b0 + (longlong)iVar2 * 4);
        fVar21 = *(float *)(param_1 + 0x37c);
        if (0.05 <= *(float *)(param_1 + 0x37c)) {
            fVar21 = 0.05;
        }
        pfVar4[1] = fVar21;
        (**(code **)(*DAT_140c65670 + 0x118))();
    }
    local_2a8 = *(undefined8 *)(param_1 + 0x15a0);
    local_2b0[0] = 1;
    local_29c = 0;
    local_478 = &DAT_140c3fe88;
    (**(code **)(*DAT_140c65670 + 0x208))(DAT_140c65670,local_2b0,&DAT_140c3fe88,&DAT_140c3fe88);
    local_478 = (undefined *)0x0;
    (**(code **)(*DAT_140c65670 + 0x160))(DAT_140c65670,0,*(undefined8 *)(param_1 + 0x1598),0);
    (**(code **)(*DAT_140c65670 + 0x1d0))(DAT_140c65670,1,4);
    (**(code **)(*DAT_140c65670 + 0x178))
            (DAT_140c65670,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x1e0),0);
    local_470 = 0;
    local_478 = (undefined *)0x0;
    (**(code **)(*DAT_140c65670 + 0x298))(DAT_140c65670,0xffffffff);
    (**(code **)(*DAT_140c65670 + 0x2a0))();
    local_2f0 = *(undefined8 *)(param_1 + 0x15a8);
    local_2f8[0] = 1;
    local_2e4 = 0;
    local_478 = &DAT_140c3fe88;
    (**(code **)(*DAT_140c65670 + 0x208))(DAT_140c65670,local_2f8,&DAT_140c3fe88,&DAT_140c3fe88);
    local_478 = (undefined *)0x0;
    (**(code **)(*DAT_140c65670 + 0x160))(DAT_140c65670,0,*(undefined8 *)(param_1 + 0x15a0),0);
    (**(code **)(*DAT_140c65670 + 0x1d0))(DAT_140c65670,1,4);
    local_470 = 0;
    local_478 = (undefined *)0x0;
    (**(code **)(*DAT_140c65670 + 0x298))(DAT_140c65670,0xffffffff);
    (**(code **)(*DAT_140c65670 + 0x2a0))();
    (**(code **)(*DAT_140c65670 + 0x228))();
    (**(code **)(*DAT_140c65670 + 0x220))();
    FUN_1407db4f0(local_b0 ^ (ulonglong)auStack1176);
    return;
}



undefined8
FUN_14035e960(longlong param_1,undefined (*param_2) [16],undefined8 param_3,undefined8 param_4)

{
    longlong lVar1;
    longlong *plVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    int iVar6;
    ulonglong uVar7;
    uint uVar8;
    undefined auVar9 [16];
    undefined auVar10 [16];
    float fStack84;
    float fStack68;

    (**(code **)(*DAT_140c65670 + 0x178))
            (DAT_140c65670,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x1d0),0);
    lVar3 = *(longlong *)(param_1 + 0x12f8);
    uVar4 = 0;
    uVar7 = uVar4;
    if (lVar3 != 0) {
        plVar2 = *(longlong **)(param_1 + 0x12f0);
        do {
            auVar10 = minps(*(undefined (*) [16])(*plVar2 + 0x60),param_2[1]);
            auVar9 = maxps(*(undefined (*) [16])(*plVar2 + 0x50),*param_2);
            if (SUB164(auVar9,0) < SUB164(auVar10,0)) {
                fStack84 = SUB164(auVar9 >> 0x20,0);
                fStack68 = SUB164(auVar10 >> 0x20,0);
                if (fStack84 < fStack68) {
                    uVar7 = (ulonglong)((int)uVar7 + 1);
                }
            }
            plVar2 = plVar2 + 1;
            lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
    }
    uVar8 = (uint)uVar7;
    while (uVar8 != 0) {
        uVar5 = 0;
        uVar8 = (uint)uVar7;
        if (1000 < uVar8) {
            uVar7 = 1000;
        }
        iVar6 = (int)uVar7;
        uVar8 = uVar8 - iVar6;
        lVar3 = (**(code **)(*DAT_140c65670 + 0xe0))(DAT_140c65670,iVar6 * 0x90,0x13);
        if (lVar3 != 0) {
            if (iVar6 != 0) {
                do {
                    if (*(ulonglong *)(param_1 + 0x12f8) <= uVar4) break;
                    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x12f0) + uVar4 * 8);
                    auVar10 = minps(*(undefined (*) [16])(lVar1 + 0x60),param_2[1]);
                    auVar9 = maxps(*(undefined (*) [16])(lVar1 + 0x50),*param_2);
                    if (SUB164(auVar9,0) < SUB164(auVar10,0)) {
                        fStack84 = SUB164(auVar9 >> 0x20,0);
                        fStack68 = SUB164(auVar10 >> 0x20,0);
                        if (fStack84 < fStack68) {
                            FUN_140391f40(lVar1,lVar3,param_2,param_3,param_4);
                            lVar3 = lVar3 + 0x90;
                            uVar5 = uVar5 + 1;
                        }
                    }
                    uVar4 = (ulonglong)((int)uVar4 + 1);
                } while (uVar5 < uVar7);
            }
            (**(code **)(*DAT_140c65670 + 0xe8))();
            (**(code **)(*DAT_140c65670 + 0x138))();
            (**(code **)(*DAT_140c65670 + 0x290))();
        }
        uVar7 = (ulonglong)uVar8;
    }
    uVar4 = 0;
    (**(code **)(*DAT_140c65670 + 0x178))
            (DAT_140c65670,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x1d8),0);
    lVar3 = *(longlong *)(param_1 + 0x1308);
    uVar7 = uVar4;
    if (lVar3 != 0) {
        plVar2 = *(longlong **)(param_1 + 0x1300);
        do {
            auVar10 = minps(*(undefined (*) [16])(*plVar2 + 0x60),param_2[1]);
            auVar9 = maxps(*(undefined (*) [16])(*plVar2 + 0x50),*param_2);
            if (SUB164(auVar9,0) < SUB164(auVar10,0)) {
                fStack84 = SUB164(auVar9 >> 0x20,0);
                fStack68 = SUB164(auVar10 >> 0x20,0);
                if (fStack84 < fStack68) {
                    uVar7 = (ulonglong)((int)uVar7 + 1);
                }
            }
            plVar2 = plVar2 + 1;
            lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
    }
    uVar8 = (uint)uVar7;
    do {
        if (uVar8 == 0) {
            return 0;
        }
        uVar5 = 0;
        uVar8 = (uint)uVar7;
        if (1000 < uVar8) {
            uVar7 = 1000;
        }
        iVar6 = (int)uVar7;
        uVar8 = uVar8 - iVar6;
        lVar3 = (**(code **)(*DAT_140c65670 + 0xe0))(DAT_140c65670,iVar6 << 7,0x14);
        if (lVar3 != 0) {
            if (iVar6 != 0) {
                do {
                    if (*(ulonglong *)(param_1 + 0x1308) <= uVar4) break;
                    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1300) + uVar4 * 8);
                    auVar10 = minps(*(undefined (*) [16])(lVar1 + 0x60),param_2[1]);
                    auVar9 = maxps(*(undefined (*) [16])(lVar1 + 0x50),*param_2);
                    if (SUB164(auVar9,0) < SUB164(auVar10,0)) {
                        fStack84 = SUB164(auVar9 >> 0x20,0);
                        fStack68 = SUB164(auVar10 >> 0x20,0);
                        if (fStack84 < fStack68) {
                            FUN_140391f40(lVar1,lVar3,param_2,param_3,param_4);
                            lVar3 = lVar3 + 0x80;
                            uVar5 = uVar5 + 1;
                        }
                    }
                    uVar4 = (ulonglong)((int)uVar4 + 1);
                } while (uVar5 < uVar7);
            }
            (**(code **)(*DAT_140c65670 + 0xe8))();
            (**(code **)(*DAT_140c65670 + 0x138))();
            (**(code **)(*DAT_140c65670 + 0x290))();
        }
        uVar7 = (ulonglong)uVar8;
    } while( true );
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14035ed70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,longlong *param_6)

{
    longlong lVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 *puVar6;
    uint uVar7;
    undefined4 *puVar8;
    undefined4 *puVar9;
    undefined4 extraout_XMM0_Da;
    undefined4 uVar10;
    undefined *puVar11;
    undefined local_58 [4];
    undefined auStack84 [8];
    undefined4 uStack76;
    undefined4 local_44;
    undefined4 local_38 [2];
    undefined8 local_30;
    undefined4 local_24;

    _local_58 = CONCAT124(_auStack84,1);
    local_38[0] = 1;
    _local_58 = CONCAT88(param_5,_local_58);
    uVar7 = 0;
    local_44 = 0;
    local_24 = 0;
    puVar11 = &DAT_140c3fe88;
    local_30 = param_4;
    (**(code **)(*DAT_140c65670 + 0x208))
            (DAT_140c65670,local_38,local_58,&DAT_140c3fe88,&DAT_140c3fe88);
    (**(code **)(*DAT_140c65670 + 0x278))(DAT_140c65670,1);
    puVar6 = (undefined4 *)
            (**(code **)(*DAT_140c65670 + 0x110))
            (DAT_140c65670,0x90,0,0,(ulonglong)puVar11 & 0xffffffff00000000);
    uVar10 = extraout_XMM0_Da;
    if (puVar6 != (undefined4 *)0x0) {
        _local_58 = ZEXT816(0);
        puVar9 = (undefined4 *)local_58;
        puVar8 = puVar6;
        do {
            lVar1 = *param_6;
            if (lVar1 != 0) {
                uVar10 = *(undefined4 *)(lVar1 + 0x4c);
                uVar2 = *(undefined4 *)(lVar1 + 0x84);
                uVar3 = *(undefined4 *)(lVar1 + 0x88);
                uVar4 = *(undefined4 *)(lVar1 + 0x8c);
                *puVar8 = *(undefined4 *)(lVar1 + 0x80);
                puVar8[1] = uVar2;
                puVar8[2] = uVar3;
                puVar8[3] = uVar4;
                uVar2 = *(undefined4 *)(lVar1 + 0x90);
                uVar3 = *(undefined4 *)(lVar1 + 0x94);
                uVar4 = *(undefined4 *)(lVar1 + 0x98);
                uVar5 = *(undefined4 *)(lVar1 + 0x9c);
                *puVar9 = uVar10;
                puVar8[4] = uVar2;
                puVar8[5] = uVar3;
                puVar8[6] = uVar4;
                puVar8[7] = uVar5;
                (**(code **)(*DAT_140c65670 + 0x160))
                        (DAT_140c65670,uVar7,*(undefined8 *)(*param_6 + 0x50),0,0);
                (**(code **)(*DAT_140c65670 + 0x160))
                        (DAT_140c65670,uVar7 + 4,*(undefined8 *)(*param_6 + 0x58),0,0);
            }
            uVar7 = uVar7 + 1;
            puVar8 = puVar8 + 8;
            puVar9 = puVar9 + 1;
            param_6 = param_6 + 1;
        } while (uVar7 < 4);
        puVar6[0x20] = local_58;
        puVar6[0x21] = auStack84._0_4_;
        puVar6[0x22] = auStack84._4_4_;
        puVar6[0x23] = uStack76;
        uVar10 = (**(code **)(*DAT_140c65670 + 0x118))();
    }
    (**(code **)(*DAT_140c65670 + 0x298))(uVar10,param_2,0x3f800000,DAT_140c65670,0xffffffff);
    // WARNING: Could not recover jumptable at 0x00014035ef17. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*DAT_140c65670 + 0x2a0))();
    return;
}



undefined8 FUN_14035ef20(longlong param_1)

{
    (**(code **)(*DAT_140c65670 + 0x1f8))();
    (**(code **)(*DAT_140c65670 + 0x200))();
    (**(code **)(*DAT_140c65670 + 0x120))();
    (**(code **)(*DAT_140c65670 + 0x128))();
    (**(code **)(*DAT_140c65670 + 0x210))(DAT_140c65670,&DAT_140c3fe88,1);
    (**(code **)(*DAT_140c65670 + 0x178))
            (DAT_140c65670,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x188),0);
    FUN_14035ed70();
    (**(code **)(*DAT_140c65670 + 0x228))();
    (**(code **)(*DAT_140c65670 + 0x220))();
    return 0;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14035eff0(longlong param_1)

{
    char cVar1;
    short sVar5;
    short sVar6;
    short sVar7;
    ulonglong uVar8;
    undefined4 uVar9;
    int iVar10;
    longlong lVar11;
    longlong lVar12;
    undefined8 uVar13;
    undefined8 *puVar14;
    undefined4 *puVar15;
    ulonglong *puVar16;
    undefined8 uVar17;
    int iVar19;
    int iVar20;
    undefined extraout_XMM0 [16];
    undefined extraout_XMM0_00 [16];
    undefined auVar18 [16];
    int iVar21;
    short sVar22;
    float fVar25;
    undefined4 uVar26;
    undefined4 uVar27;
    undefined8 in_stack_ffffffffffffff98;
    ulonglong uVar28;
    undefined local_58 [20];
    undefined4 local_44;
    char cVar2;
    char cVar3;
    char cVar4;
    undefined4 uVar23;
    undefined6 uVar24;

    uVar23 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
    if ((*(longlong *)(param_1 + 0x240) != 0) || ((*(uint *)(param_1 + 0x84) & 0x400000) != 0)) {
        iVar10 = (**(code **)(*DAT_140c65688 + 0x38))(DAT_140c65688,6);
        fVar25 = 1.0;
        if (iVar10 != 0) {
            local_58._0_16_ = extraout_XMM0 & (undefined  [16])0x0;
            (**(code **)(*DAT_140c65670 + 0x270))(DAT_140c65670,1,local_58);
        }
        lVar11 = (**(code **)(*DAT_140c65688 + 0xc0))();
        lVar12 = (**(code **)(*DAT_140c65688 + 0xd0))();
        if ((*(uint *)(param_1 + 0x84) & 0x400000) == 0) {
            (**(code **)(*DAT_140c65670 + 0x1a8))(DAT_140c65670,0x40,0x40,0x40);
            (**(code **)(*DAT_140c65670 + 0x1b0))(DAT_140c65670,0,0,0,CONCAT44(uVar23,2));
            local_58._0_16_ = CONCAT88(*(undefined8 *)(lVar12 + 8),local_58._0_8_);
            local_58._0_16_ = CONCAT124(local_58._4_12_,1);
            local_44 = 0;
            (**(code **)(*DAT_140c65670 + 0x208))
                    (DAT_140c65670,local_58,&DAT_140c3fe88,&DAT_140c3fe88,&DAT_140c3fe88);
            (**(code **)(*DAT_140c65670 + 0x178))
                    (DAT_140c65670,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x58),0);
            uVar27 = SUB164(_DAT_140b7b240,0);
            uVar26 = 0;
            auVar18 = maxps(extraout_XMM0_00 & (undefined  [16])0x0,_DAT_140b7b240);
            auVar18 = minps(auVar18,_DAT_140b7b240);
            iVar10 = (int)(SUB164(auVar18,0) * 255.0 + 0.5);
            iVar19 = (int)(SUB164(auVar18 >> 0x20,0) * 255.0 + 0.5);
            iVar20 = (int)(SUB164(auVar18 >> 0x40,0) * 255.0 + 0.5);
            iVar21 = (int)(SUB164(auVar18 >> 0x60,0) * 255.0 + 0.5);
            sVar5 = (short)iVar20;
            cVar1 = (0 < sVar5) * (sVar5 < 0xff) * (char)iVar20 - (0xff < sVar5);
            sVar5 = (short)((uint)iVar20 >> 0x10);
            sVar22 = CONCAT11((0 < sVar5) * (sVar5 < 0xff) * (char)((uint)iVar20 >> 0x10) - (0xff < sVar5)
                    ,cVar1);
            sVar5 = (short)iVar19;
            cVar2 = (0 < sVar5) * (sVar5 < 0xff) * (char)iVar19 - (0xff < sVar5);
            sVar5 = (short)((uint)iVar19 >> 0x10);
            uVar23 = CONCAT13((0 < sVar5) * (sVar5 < 0xff) * (char)((uint)iVar19 >> 0x10) - (0xff < sVar5)
                    ,CONCAT12(cVar2,sVar22));
            sVar5 = (short)iVar10;
            cVar3 = (0 < sVar5) * (sVar5 < 0xff) * (char)iVar10 - (0xff < sVar5);
            sVar5 = (short)((uint)iVar10 >> 0x10);
            uVar24 = CONCAT15((0 < sVar5) * (sVar5 < 0xff) * (char)((uint)iVar10 >> 0x10) - (0xff < sVar5)
                    ,CONCAT14(cVar3,uVar23));
            sVar5 = (short)iVar21;
            cVar4 = (0 < sVar5) * (sVar5 < 0xff) * (char)iVar21 - (0xff < sVar5);
            sVar7 = (short)((uint)iVar21 >> 0x10);
            sVar5 = (short)((uint)uVar23 >> 0x10);
            sVar6 = (short)((uint6)uVar24 >> 0x20);
            sVar7 = (short)(CONCAT17((0 < sVar7) * (sVar7 < 0xff) * (char)((uint)iVar21 >> 0x10) -
                                     (0xff < sVar7),CONCAT16(cVar4,uVar24)) >> 0x30);
            (**(code **)(*DAT_140c65670 + 0x298))
                    (DAT_140c65670,
                     CONCAT13((0 < sVar7) * (sVar7 < 0xff) * cVar4 - (0xff < sVar7),
                              CONCAT12((0 < sVar6) * (sVar6 < 0xff) * cVar3 - (0xff < sVar6),
                                       CONCAT11((0 < sVar5) * (sVar5 < 0xff) * cVar2 - (0xff < sVar5),
                                                (0 < sVar22) * (sVar22 < 0xff) * cVar1 - (0xff < sVar22)
                                       ))),*DAT_140c65670,lVar11 + 0x58,lVar11 + 0x60,
                     lVar11 + 0x60);
            (**(code **)(*DAT_140c65670 + 0x2a0))();
            (**(code **)(*DAT_140c65688 + 0x48))();
            uVar13 = (**(code **)(*DAT_140c65688 + 0xd8))();
            (**(code **)(*DAT_140c65670 + 0x160))(DAT_140c65670,0,*(undefined8 *)(lVar11 + 0x48),0,uVar13)
                    ;
            uVar28 = 0;
            (**(code **)(*DAT_140c65670 + 0x160))(DAT_140c65670,1,*(undefined8 *)(lVar12 + 8),0,0);
            uVar28 = uVar28 & 0xffffffff00000000;
            puVar14 = (undefined8 *)(**(code **)(*DAT_140c65670 + 0x110))(DAT_140c65670,0x30,0,0,uVar28);
            uVar23 = (undefined4)(uVar28 >> 0x20);
            if (puVar14 != (undefined8 *)0x0) {
                uVar13 = CONCAT44(fVar25 / (float)*(int *)(lVar11 + 0x5c),
                                  fVar25 / (float)*(int *)(lVar11 + 0x58));
                local_58._0_16_ = CONCAT412(uVar26,CONCAT48(uVar26,uVar13));
                *puVar14 = uVar13;
                *(undefined4 *)(puVar14 + 1) = uVar27;
                uVar26 = *(undefined4 *)(param_1 + 0x204);
                uVar27 = *(undefined4 *)(param_1 + 0x208);
                uVar9 = *(undefined4 *)(param_1 + 0x20c);
                *(undefined4 *)(puVar14 + 2) = *(undefined4 *)(param_1 + 0x200);
                *(undefined4 *)((longlong)puVar14 + 0x14) = uVar26;
                *(undefined4 *)(puVar14 + 3) = uVar27;
                *(undefined4 *)((longlong)puVar14 + 0x1c) = uVar9;
                puVar15 = (undefined4 *)(**(code **)(*DAT_140c65688 + 0xf8))();
                uVar26 = puVar15[1];
                uVar27 = puVar15[2];
                uVar9 = puVar15[3];
                *(undefined4 *)(puVar14 + 4) = *puVar15;
                *(undefined4 *)((longlong)puVar14 + 0x24) = uVar26;
                *(undefined4 *)(puVar14 + 5) = uVar27;
                *(undefined4 *)((longlong)puVar14 + 0x2c) = uVar9;
                (**(code **)(*DAT_140c65670 + 0x118))();
            }
            (**(code **)(*DAT_140c65670 + 0x178))
                    (DAT_140c65670,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x1c0),0);
            uVar13 = CONCAT44(uVar23,7);
            iVar10 = DAT_140c40550;
            if (*DAT_140c63750 < DAT_140c40550) {
                iVar10 = *DAT_140c63750;
            }
            lVar12 = *DAT_140c65670;
            if ((&DAT_140c40560)[iVar10] == '\0') {
                uVar17 = 1;
            }
            else {
                uVar17 = 2;
            }
        }
        else {
            uVar13 = (**(code **)(*DAT_140c65688 + 0xd8))();
            (**(code **)(*DAT_140c65670 + 0x160))(DAT_140c65670,0,*(undefined8 *)(lVar11 + 0x48),0,uVar13)
                    ;
            uVar28 = 0;
            (**(code **)(*DAT_140c65670 + 0x160))(DAT_140c65670,1,*(undefined8 *)(lVar11 + 0x40),0,0);
            uVar28 = uVar28 & 0xffffffff00000000;
            puVar16 = (ulonglong *)(**(code **)(*DAT_140c65670 + 0x110))(DAT_140c65670,0x30,0,0,uVar28);
            if (puVar16 != (ulonglong *)0x0) {
                uVar8 = CONCAT44(fVar25 / (float)*(int *)(lVar11 + 0x5c),
                                 fVar25 / (float)*(int *)(lVar11 + 0x58));
                local_58._0_16_ = ZEXT816(uVar8);
                *puVar16 = uVar8;
                *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(param_1 + 0x1690);
                uVar23 = *(undefined4 *)(param_1 + 0x204);
                uVar26 = *(undefined4 *)(param_1 + 0x208);
                uVar27 = *(undefined4 *)(param_1 + 0x20c);
                *(undefined4 *)(puVar16 + 2) = *(undefined4 *)(param_1 + 0x200);
                *(undefined4 *)((longlong)puVar16 + 0x14) = uVar23;
                *(undefined4 *)(puVar16 + 3) = uVar26;
                *(undefined4 *)((longlong)puVar16 + 0x1c) = uVar27;
                puVar15 = (undefined4 *)(**(code **)(*DAT_140c65688 + 0xf8))();
                uVar23 = puVar15[1];
                uVar26 = puVar15[2];
                uVar27 = puVar15[3];
                *(undefined4 *)(puVar16 + 4) = *puVar15;
                *(undefined4 *)((longlong)puVar16 + 0x24) = uVar23;
                *(undefined4 *)(puVar16 + 5) = uVar26;
                *(undefined4 *)((longlong)puVar16 + 0x2c) = uVar27;
                (**(code **)(*DAT_140c65670 + 0x118))();
            }
            uVar28 = uVar28 & 0xffffffff00000000;
            puVar14 = (undefined8 *)(**(code **)(*DAT_140c65670 + 0x110))(DAT_140c65670,0x60,1,3,uVar28);
            uVar23 = (undefined4)(uVar28 >> 0x20);
            if (puVar14 != (undefined8 *)0x0) {
                *puVar14 = *(undefined8 *)(param_1 + 0x1650);
                puVar14[1] = *(undefined8 *)(param_1 + 0x1680);
                uVar26 = *(undefined4 *)(param_1 + 0x214);
                uVar27 = *(undefined4 *)(param_1 + 0x218);
                uVar9 = *(undefined4 *)(param_1 + 0x21c);
                *(undefined4 *)(puVar14 + 2) = *(undefined4 *)(param_1 + 0x210);
                *(undefined4 *)((longlong)puVar14 + 0x14) = uVar26;
                *(undefined4 *)(puVar14 + 3) = uVar27;
                *(undefined4 *)((longlong)puVar14 + 0x1c) = uVar9;
                puVar14[4] = *(undefined8 *)(param_1 + 0x1648);
                puVar14[5] = *(undefined8 *)(param_1 + 0x1688);
                uVar26 = *(undefined4 *)(param_1 + 0x224);
                uVar27 = *(undefined4 *)(param_1 + 0x228);
                uVar9 = *(undefined4 *)(param_1 + 0x22c);
                *(undefined4 *)(puVar14 + 6) = *(undefined4 *)(param_1 + 0x220);
                *(undefined4 *)((longlong)puVar14 + 0x34) = uVar26;
                *(undefined4 *)(puVar14 + 7) = uVar27;
                *(undefined4 *)((longlong)puVar14 + 0x3c) = uVar9;
                puVar14[8] = *(undefined8 *)(param_1 + 0x1658);
                puVar14[9] = *(undefined8 *)(param_1 + 0x1678);
                uVar26 = *(undefined4 *)(param_1 + 0x234);
                uVar27 = *(undefined4 *)(param_1 + 0x238);
                uVar9 = *(undefined4 *)(param_1 + 0x23c);
                *(undefined4 *)(puVar14 + 10) = *(undefined4 *)(param_1 + 0x230);
                *(undefined4 *)((longlong)puVar14 + 0x54) = uVar26;
                *(undefined4 *)(puVar14 + 0xb) = uVar27;
                *(undefined4 *)((longlong)puVar14 + 0x5c) = uVar9;
                (**(code **)(*DAT_140c65670 + 0x118))();
            }
            (**(code **)(*DAT_140c65670 + 0x178))
                    (DAT_140c65670,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x1c0),1);
            uVar13 = CONCAT44(uVar23,7);
            iVar10 = DAT_140c40550;
            if (*DAT_140c63750 < DAT_140c40550) {
                iVar10 = *DAT_140c63750;
            }
            lVar12 = *DAT_140c65670;
            if ((&DAT_140c40560)[iVar10] == '\0') {
                uVar17 = 0;
            }
            else {
                uVar17 = 2;
            }
        }
        (**(code **)(lVar12 + 0x1b0))(DAT_140c65670,0,0,uVar17,uVar13);
        (**(code **)(*DAT_140c65670 + 0x298))
                (DAT_140c65670,0xffffffff,*DAT_140c65670,lVar11 + 0x58,lVar11 + 0x60,lVar11 + 0x60);
    }
    return 0;
}



undefined8 FUN_14035f590(undefined8 param_1,undefined8 param_2,longlong param_3)

{
    int iVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 uVar4;

    iVar1 = (**(code **)(*DAT_140c65688 + 0x38))(DAT_140c65688,7);
    if ((iVar1 != 0) && (iVar1 = (**(code **)(*DAT_140c65688 + 0x38))(DAT_140c65688,6), iVar1 != 0)) {
        return 0;
    }
    lVar2 = (**(code **)(*DAT_140c65688 + 0xc0))();
    puVar3 = (undefined8 *)(**(code **)(*DAT_140c65688 + 0xd0))();
    (**(code **)(*DAT_140c65688 + 0x50))();
    (**(code **)(*DAT_140c65670 + 0x160))(DAT_140c65670,0,*puVar3,0,0);
    (**(code **)(*DAT_140c65670 + 0x178))
            (DAT_140c65670,*(undefined8 *)(*(longlong *)(param_3 + 0x10) + 0x58),3);
    uVar4 = (**(code **)(*DAT_140c65670 + 0x1d0))(DAT_140c65670,1,5);
    (**(code **)(*DAT_140c65670 + 0x298))
            (uVar4,param_2,0,DAT_140c65670,0xffffffff,*DAT_140c65670,lVar2 + 0x58,lVar2 + 0x60,
             lVar2 + 0x60);
    return 0;
}



undefined8 FUN_14035f6a0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
    undefined4 uVar1;
    undefined4 uVar2;
    longlong lVar3;
    undefined4 *puVar4;
    undefined4 *puVar5;
    undefined4 uVar6;
    float fVar7;
    ulonglong uVar8;

    (**(code **)(*DAT_140c65688 + 0x48))();
    (**(code **)(*DAT_140c65688 + 0x50))();
    (**(code **)(*DAT_140c65670 + 0x1c0))(DAT_140c65670,0x77);
    (**(code **)(*DAT_140c65670 + 0x1d0))(DAT_140c65670,4,5);
    lVar3 = (**(code **)(*DAT_140c65688 + 0xc0))();
    uVar8 = 0;
    (**(code **)(*DAT_140c65670 + 0x160))(DAT_140c65670,0,*(undefined8 *)(lVar3 + 0x28),0,0);
    puVar4 = (undefined4 *)
            (**(code **)(*DAT_140c65670 + 0x110))(DAT_140c65670,0x30,0,0,uVar8 & 0xffffffff00000000);
    if (puVar4 != (undefined4 *)0x0) {
        uVar6 = *(undefined4 *)(param_3 + 0x3d4);
        uVar1 = *(undefined4 *)(param_3 + 0x3d8);
        uVar2 = *(undefined4 *)(param_3 + 0x3dc);
        puVar4[4] = *(undefined4 *)(param_3 + 0x3d0);
        puVar4[5] = uVar6;
        puVar4[6] = uVar1;
        puVar4[7] = uVar2;
        puVar5 = (undefined4 *)(**(code **)(*DAT_140c65688 + 0xe8))();
        fVar7 = DAT_140c3b438 * 0.005555556;
        uVar6 = puVar5[1];
        uVar1 = puVar5[2];
        uVar2 = puVar5[3];
        *puVar4 = *puVar5;
        puVar4[1] = uVar6;
        puVar4[2] = uVar1;
        puVar4[3] = uVar2;
        uVar6 = FUN_1408fc950(fVar7 * *(float *)(param_3 + 0x280));
        puVar4[8] = uVar6;
        uVar6 = FUN_1408fc950(fVar7 * *(float *)(param_3 + 0x284));
        puVar4[9] = uVar6;
        (**(code **)(*DAT_140c65670 + 0x118))();
    }
    uVar6 = (**(code **)(*DAT_140c65670 + 0x178))
            (DAT_140c65670,*(undefined8 *)(*(longlong *)(param_3 + 0x10) + 0x100),0);
    (**(code **)(*DAT_140c65670 + 0x298))
            (uVar6,param_2,0,DAT_140c65670,0xffffffff,*DAT_140c65670,lVar3 + 0x58,lVar3 + 0x60,0);
    (**(code **)(*DAT_140c65670 + 0x2a0))();
    return 0;
}



undefined8 FUN_14035f840(longlong param_1)

{
    uint uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    uint uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    longlong lVar9;
    ulonglong uVar10;
    undefined4 *puVar11;
    undefined4 *puVar12;

    (**(code **)(*DAT_140c65688 + 0x48))();
    (**(code **)(*DAT_140c65688 + 0x50))();
    (**(code **)(*DAT_140c65670 + 0x1c0))(DAT_140c65670,7);
    (**(code **)(*DAT_140c65670 + 0x1d0))(DAT_140c65670,1,5);
    lVar9 = (**(code **)(*DAT_140c65688 + 0xc0))();
    uVar10 = (**(code **)(*DAT_140c65688 + 0xd8))();
    (**(code **)(*DAT_140c65670 + 0x160))(DAT_140c65670,0,*(undefined8 *)(lVar9 + 0x48),0,uVar10);
    puVar11 = (undefined4 *)
            (**(code **)(*DAT_140c65670 + 0x110))
            (DAT_140c65670,0xa0,0,0,uVar10 & 0xffffffff00000000);
    if (puVar11 != (undefined4 *)0x0) {
        uVar2 = *(undefined4 *)(param_1 + 0x254);
        uVar3 = *(undefined4 *)(param_1 + 600);
        uVar4 = *(undefined4 *)(param_1 + 0x25c);
        puVar11[4] = *(undefined4 *)(param_1 + 0x250);
        puVar11[5] = uVar2;
        puVar11[6] = uVar3;
        puVar11[7] = uVar4;
        uVar2 = *(undefined4 *)(param_1 + 0x264);
        uVar3 = *(undefined4 *)(param_1 + 0x268);
        uVar4 = *(undefined4 *)(param_1 + 0x26c);
        puVar11[8] = *(undefined4 *)(param_1 + 0x260);
        puVar11[9] = uVar2;
        puVar11[10] = uVar3;
        puVar11[0xb] = uVar4;
        uVar2 = *(undefined4 *)(param_1 + 0x274);
        uVar3 = *(undefined4 *)(param_1 + 0x278);
        uVar4 = *(undefined4 *)(param_1 + 0x27c);
        puVar11[0xc] = *(undefined4 *)(param_1 + 0x270);
        puVar11[0xd] = uVar2;
        puVar11[0xe] = uVar3;
        puVar11[0xf] = uVar4;
        puVar12 = (undefined4 *)(**(code **)(*DAT_140c65688 + 0xe8))();
        uVar2 = puVar12[1];
        uVar3 = puVar12[2];
        uVar4 = puVar12[3];
        *puVar11 = *puVar12;
        puVar11[1] = uVar2;
        puVar11[2] = uVar3;
        puVar11[3] = uVar4;
        puVar12 = (undefined4 *)(**(code **)(*DAT_140c65688 + 0xf0))();
        uVar2 = puVar12[1];
        uVar3 = puVar12[2];
        uVar4 = puVar12[3];
        puVar11[0x10] = *puVar12;
        puVar11[0x11] = uVar2;
        puVar11[0x12] = uVar3;
        puVar11[0x13] = uVar4;
        uVar1 = *(uint *)(param_1 + 0x454);
        uVar2 = *(undefined4 *)(param_1 + 0x458);
        uVar5 = *(uint *)(param_1 + 0x45c);
        uVar3 = *(undefined4 *)(param_1 + 0x448);
        uVar4 = *(undefined4 *)(param_1 + 0x468);
        uVar6 = *(undefined4 *)(param_1 + 0x474);
        uVar7 = *(undefined4 *)(param_1 + 0x478);
        uVar8 = *(undefined4 *)(param_1 + 0x47c);
        *(undefined (*) [16])(puVar11 + 0x14) =
                CONCAT412(*(undefined4 *)(param_1 + 0x470),
                          CONCAT48(*(undefined4 *)(param_1 + 0x460),
                                   CONCAT44(*(undefined4 *)(param_1 + 0x450),
                                            *(undefined4 *)(param_1 + 0x440))));
        *(undefined (*) [16])(puVar11 + 0x18) = CONCAT412(uVar6,ZEXT412(uVar1) << 0x20);
        *(undefined (*) [16])(puVar11 + 0x1c) = CONCAT412(uVar7,CONCAT48(uVar4,CONCAT44(uVar2,uVar3)));
        *(undefined (*) [16])(puVar11 + 0x20) = CONCAT412(uVar8,ZEXT412(uVar5) << 0x20);
        puVar12 = (undefined4 *)(**(code **)(*DAT_140c65688 + 0xf8))();
        uVar2 = puVar12[1];
        uVar3 = puVar12[2];
        uVar4 = puVar12[3];
        puVar11[0x24] = *puVar12;
        puVar11[0x25] = uVar2;
        puVar11[0x26] = uVar3;
        puVar11[0x27] = uVar4;
        (**(code **)(*DAT_140c65670 + 0x118))();
    }
    uVar1 = *(uint *)(param_1 + 0x84);
    (**(code **)(*DAT_140c65670 + 0x178))
            (DAT_140c65670,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xf8),
             (uVar1 >> 0x19 & 1) +
             ((uVar1 >> 2 & 1) +
              ((uVar1 >> 0x15 & 1) + (uint)(*(int *)(param_1 + 0x648) != 0) * 2) * 2) * 2);
    (**(code **)(*DAT_140c65670 + 0x298))
            (DAT_140c65670,0xffffffff,*DAT_140c65670,lVar9 + 0x58,lVar9 + 0x60,0);
    (**(code **)(*DAT_140c65670 + 0x2a0))();
    return 0;
}



undefined8 FUN_14035fa80(longlong param_1)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    uint uVar4;
    uint uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    longlong lVar9;
    undefined8 uVar10;
    undefined4 *puVar11;
    undefined4 *puVar12;
    ulonglong uVar13;

    (**(code **)(*DAT_140c65688 + 0x48))();
    (**(code **)(*DAT_140c65688 + 0x50))();
    (**(code **)(*DAT_140c65670 + 0x1c0))(DAT_140c65670,7);
    (**(code **)(*DAT_140c65670 + 0x1d0))(DAT_140c65670,8,0);
    lVar9 = (**(code **)(*DAT_140c65688 + 0xc0))();
    uVar10 = (**(code **)(*DAT_140c65688 + 0xd8))();
    (**(code **)(*DAT_140c65670 + 0x160))(DAT_140c65670,0,*(undefined8 *)(lVar9 + 0x48),0,uVar10);
    uVar13 = 0;
    (**(code **)(*DAT_140c65670 + 0x160))(DAT_140c65670,1,*(undefined8 *)(lVar9 + 0x28),0,0);
    puVar11 = (undefined4 *)
            (**(code **)(*DAT_140c65670 + 0x110))
            (DAT_140c65670,0x70,0,0,uVar13 & 0xffffffff00000000);
    if (puVar11 != (undefined4 *)0x0) {
        puVar12 = (undefined4 *)(**(code **)(*DAT_140c65688 + 0xe8))();
        uVar1 = puVar12[1];
        uVar2 = puVar12[2];
        uVar3 = puVar12[3];
        *puVar11 = *puVar12;
        puVar11[1] = uVar1;
        puVar11[2] = uVar2;
        puVar11[3] = uVar3;
        puVar12 = (undefined4 *)(**(code **)(*DAT_140c65688 + 0xf0))();
        uVar1 = puVar12[1];
        uVar2 = puVar12[2];
        uVar3 = puVar12[3];
        puVar11[4] = *puVar12;
        puVar11[5] = uVar1;
        puVar11[6] = uVar2;
        puVar11[7] = uVar3;
        uVar4 = *(uint *)(param_1 + 0x454);
        uVar1 = *(undefined4 *)(param_1 + 0x458);
        uVar5 = *(uint *)(param_1 + 0x45c);
        uVar2 = *(undefined4 *)(param_1 + 0x448);
        uVar3 = *(undefined4 *)(param_1 + 0x468);
        uVar6 = *(undefined4 *)(param_1 + 0x474);
        uVar7 = *(undefined4 *)(param_1 + 0x478);
        uVar8 = *(undefined4 *)(param_1 + 0x47c);
        *(undefined (*) [16])(puVar11 + 8) =
                CONCAT412(*(undefined4 *)(param_1 + 0x470),
                          CONCAT48(*(undefined4 *)(param_1 + 0x460),
                                   CONCAT44(*(undefined4 *)(param_1 + 0x450),
                                            *(undefined4 *)(param_1 + 0x440))));
        *(undefined (*) [16])(puVar11 + 0xc) = CONCAT412(uVar6,ZEXT412(uVar4) << 0x20);
        *(undefined (*) [16])(puVar11 + 0x10) = CONCAT412(uVar7,CONCAT48(uVar3,CONCAT44(uVar1,uVar2)));
        *(undefined (*) [16])(puVar11 + 0x14) = CONCAT412(uVar8,ZEXT412(uVar5) << 0x20);
        puVar12 = (undefined4 *)(**(code **)(*DAT_140c65688 + 0xf8))();
        uVar1 = puVar12[1];
        uVar2 = puVar12[2];
        uVar3 = puVar12[3];
        puVar11[0x18] = *puVar12;
        puVar11[0x19] = uVar1;
        puVar11[0x1a] = uVar2;
        puVar11[0x1b] = uVar3;
        (**(code **)(*DAT_140c65670 + 0x118))();
    }
    (**(code **)(*DAT_140c65670 + 0x178))
            (DAT_140c65670,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x150),
             *(int *)(param_1 + 0x648) != 0);
    (**(code **)(*DAT_140c65670 + 0x298))
            (DAT_140c65670,0xffffffff,*DAT_140c65670,lVar9 + 0x58,lVar9 + 0x60,0);
    (**(code **)(*DAT_140c65670 + 0x2a0))();
    return 0;
}



int FUN_14035fc90(longlong param_1)

{
    int iVar1;

    *(undefined4 *)(param_1 + 0x1818) = 1;
    (**(code **)(**(longlong **)(param_1 + 0x1820) + 0x58))();
    (**(code **)(**(longlong **)(param_1 + 0x1828) + 0x48))
            (*(longlong **)(param_1 + 0x1828),*(undefined8 *)(param_1 + 0x1820));
    (**(code **)(**(longlong **)(param_1 + 0x1828) + 0x58))();
    (**(code **)(**(longlong **)(param_1 + 0x1850) + 0x48))
            (*(longlong **)(param_1 + 0x1850),*(undefined8 *)(param_1 + 0x1828));
    (**(code **)(**(longlong **)(param_1 + 0x1850) + 0x58))();
    iVar1 = FUN_14035ff70(param_1);
    if (-1 < iVar1) {
        iVar1 = 0;
    }
    (**(code **)(**(longlong **)(param_1 + 0x1850) + 0x70))();
    (**(code **)(**(longlong **)(param_1 + 0x1828) + 0x70))();
    (**(code **)(**(longlong **)(param_1 + 0x1820) + 0x70))();
    return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14035fd40(longlong param_1)

{
    longlong *plVar1;
    int iVar2;
    undefined8 *puVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    undefined4 uVar7;
    undefined4 uVar8;
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

    if ((*(uint *)(param_1 + 0x80) & 0x880) == 0x880) {
        (**(code **)(**(longlong **)(param_1 + 0x1830) + 0x58))();
    }
    if ((*(byte *)(param_1 + 0x80) & 0x60) != 0) {
        iVar2 = FUN_1403640d0(param_1);
        if (iVar2 < 0) goto LAB_14035ff53;
    }
    if ((*(uint *)(param_1 + 0x80) & 0x880) == 0x880) {
        iVar2 = FUN_1403647d0(param_1);
        if (iVar2 < 0) goto LAB_14035ff53;
    }
    lVar4 = param_1 + 0x15c0;
    lVar5 = 9;
    puVar3 = (undefined8 *)(param_1 + 0x15e8);
    lVar6 = param_1 - lVar4;
    do {
        uVar7 = FUN_1407c2c10(lVar4,puVar3[-1]);
        uVar8 = FUN_1407c2c10(lVar4,*puVar3);
        puVar3 = puVar3 + 1;
        *(ulonglong *)(lVar6 + 0x1618 + (longlong)puVar3) = CONCAT44(uVar8,uVar7);
        lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    if (*(longlong **)(param_1 + 0x240) == (longlong *)0x0) {
        *(undefined4 *)(param_1 + 0x1690) = 0x7f7fffff;
    }
    else {
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x240) + 0x18))();
        if (iVar2 == 0) {
            plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x240) + 200);
            if (plVar1 == (longlong *)0x0) {
                LAB_14035fe79:
                *(undefined4 *)(param_1 + 0x1690) = 0;
            }
            else {
                uVar7 = FUN_1407c2c10(plVar1,*(undefined8 *)
                        (*plVar1 +
                         *(longlong *)(*(longlong *)(param_1 + 0x240) + 0xd8) * 8));
                *(undefined4 *)(param_1 + 0x1690) = uVar7;
            }
        }
        else if (iVar2 == 1) {
            plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x240) + 0x150);
            if (plVar1 == (longlong *)0x0) goto LAB_14035fe79;
            uVar7 = FUN_1407c2c10(plVar1,*(undefined8 *)
                    (*plVar1 +
                     *(longlong *)(*(longlong *)(param_1 + 0x240) + 0x160) * 8));
            *(undefined4 *)(param_1 + 0x1690) = uVar7;
        }
    }
    if ((((*(byte *)(param_1 + 0x80) & 0x10) != 0) && (*(int *)(param_1 + 0x10f0) != 0)) &&
        (*(longlong *)(param_1 + 0x12b0) != 0)) {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x12b0) + 0x30);
        (**(code **)(*plVar1 + 0x140))(plVar1,1);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x12b0) + 0x30);
        (**(code **)(*plVar1 + 0x128))(plVar1,1);
        local_48 = _DAT_140c78410;
        uStack68 = uRam0000000140c78414;
        uStack64 = uRam0000000140c78418;
        uStack60 = uRam0000000140c7841c;
        local_28 = _DAT_140c78430;
        uStack36 = uRam0000000140c78434;
        uStack32 = uRam0000000140c78438;
        uStack28 = uRam0000000140c7843c;
        local_38 = _DAT_140c78420;
        uStack52 = uRam0000000140c78424;
        uStack48 = uRam0000000140c78428;
        uStack44 = uRam0000000140c7842c;
        local_18 = CONCAT412(0x3f800000,
                             ZEXT812(CONCAT44(*(float *)(param_1 + 0x474) - *(float *)(param_1 + 0x464),
                                              *(float *)(param_1 + 0x470) - *(float *)(param_1 + 0x460))
                             ));
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x12b0) + 0x30);
        (**(code **)(*plVar1 + 0x48))(plVar1,&local_48);
    }
    iVar2 = 0;
    LAB_14035ff53:
    (**(code **)(**(longlong **)(param_1 + 0x1830) + 0x70))();
    return iVar2;
}



void FUN_14035ff70(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong *plVar3;
    int iVar4;
    uint uVar5;
    longlong lVar6;
    longlong lVar7;
    uint uVar8;
    float fVar9;
    undefined auStack456 [32];
    ulonglong local_1a8;
    float *local_1a0;
    longlong local_198;
    undefined8 local_190;
    float local_188;
    undefined4 uStack388;
    undefined4 uStack384;
    undefined4 uStack380;
    float local_178;
    float fStack372;
    undefined4 uStack368;
    undefined4 uStack364;
    float local_168;
    undefined4 uStack356;
    undefined4 uStack352;
    undefined4 uStack348;
    float local_158;
    float fStack340;
    undefined4 uStack336;
    undefined4 uStack332;
    undefined local_148 [24];
    float local_130;
    undefined8 local_e8;
    undefined local_d8 [64];
    longlong local_98;
    longlong local_90;
    longlong local_88;
    longlong local_78;
    longlong local_70;
    longlong local_68;
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack456;
    lVar6 = param_1 + 0x500;
    lVar1 = param_1 + 0x3c0;
    local_198 = param_1 + 0x10f0;
    local_1a0 = (float *)((ulonglong)local_1a0 & 0xffffffff00000000 |
                          (ulonglong)*(uint *)(param_1 + 0x31c));
    local_1a8 = local_1a8 & 0xffffffff00000000 | (ulonglong)*(uint *)(param_1 + 0x318);
    iVar4 = (**(code **)(*DAT_140c65688 + 0x28))(DAT_140c65688,lVar1,lVar6);
    if (iVar4 < 0) goto LAB_14036101a;
    FUN_1407c1fe0();
    if ((*(uint *)(param_1 + 0x80) & 0x200) != 0) {
        (**(code **)(**(longlong **)(param_1 + 0x1838) + 0x48))
                (*(longlong **)(param_1 + 0x1838),*(undefined8 *)(param_1 + 0x1828));
        (**(code **)(**(longlong **)(param_1 + 0x1838) + 0x58))();
    }
    if ((*(uint *)(param_1 + 0x80) & 0x100) != 0) {
        (**(code **)(**(longlong **)(param_1 + 0x1840) + 0x48))
                (*(longlong **)(param_1 + 0x1840),*(undefined8 *)(param_1 + 0x1828));
        (**(code **)(**(longlong **)(param_1 + 0x1840) + 0x58))();
    }
    iVar4 = DAT_140c44400;
    if (*DAT_140c63750 < DAT_140c44400) {
        iVar4 = *DAT_140c63750;
    }
    if (((((&DAT_140c44410)[iVar4] == '\0') || ((*(uint *)(param_1 + 0x80) & 0x8000000) == 0)) ||
         (iVar4 = FUN_14035dbe0(param_1), -1 < iVar4)) &&
        ((((**(code **)(**(longlong **)(param_1 + 0x120) + 0x50))
                (*(longlong **)(param_1 + 0x120),lVar6,lVar1),
                (*(byte *)(param_1 + 0x80) & 0x10) == 0 || (iVar4 = FUN_14035ef20(param_1), -1 < iVar4)) &&
          (iVar4 = FUN_140356560(param_1,1), -1 < iVar4)))) {
        (**(code **)(**(longlong **)(param_1 + 0x120) + 0x48))
                (*(longlong **)(param_1 + 0x120),lVar1,param_1 + 0x440);
        (**(code **)(*DAT_140c65688 + 0x30))(DAT_140c65688,0);
        local_188 = -NAN;
        (**(code **)(**(longlong **)(param_1 + 0x1820) + 0x20))
                (*(longlong **)(param_1 + 0x1820),&local_188);
        if (((*(byte *)(param_1 + 0x80) & 4) == 0) ||
            ((iVar4 = FUN_1403613f0(param_1), -1 < iVar4 &&
                                              (((*(byte *)(param_1 + 0x80) & 4) == 0 ||
                                                (((((byte)*(undefined4 *)(param_1 + 0x84) & 0x18) != 8 ||
                                                   (iVar4 = FUN_140361ce0(param_1), -1 < iVar4)) &&
                                                  (((*(byte *)(param_1 + 0x80) & 4) == 0 ||
                                                    ((((byte)*(undefined4 *)(param_1 + 0x84) & 0x90) != 0x80 ||
                                                      (iVar4 = FUN_140365f00(param_1), -1 < iVar4)))))))))))) {
            local_188 = -NAN;
            (**(code **)(**(longlong **)(param_1 + 0x1850) + 0x20))();
            if ((*(uint *)(param_1 + 0x80) >> 0xc & 1) != 0) {
                uVar5 = *(uint *)(param_1 + 0x84);
                uVar8 = 1;
                if ((uVar5 & 0x40) != 0) {
                    uVar8 = 0x10001;
                }
                if ((uVar5 >> 0xb & 1) == 0) {
                    if (((uVar5 >> 10 & 1) != 0) || ((*(uint *)(param_1 + 0x80) >> 0x1a & 1) != 0)) {
                        uVar8 = uVar8 | 0x40000;
                    }
                }
                else {
                    uVar8 = uVar8 | 0x20000;
                }
                if ((DAT_140c657f0 != 0) && (iVar4 = FUN_1402c89c0(DAT_140c657f0,local_d8,uVar8), iVar4 < 0)
                        ) goto LAB_140360fd3;
            }
            uVar5 = 0;
            if ((*(uint *)(param_1 + 0x80) & 0x800) == 0) {
                LAB_140360346:
                (**(code **)(**(longlong **)(param_1 + 0x1848) + 0x58))();
                if ((local_98 == 0) || (iVar4 = FUN_1407c2170(local_d8,0,0xffffffff), -1 < iVar4)) {
                    iVar4 = FUN_1400f4750(param_1 + 0x2c8);
                    if (iVar4 != -1) {
                        (**(code **)(param_1 + 0x2d0))(*(undefined8 *)(param_1 + 0x2c8));
                    }
                    if ((*(byte *)(param_1 + 0x80) & 0x40) != 0) {
                        for (lVar2 = *(longlong *)(param_1 + 0x1558); lVar2 != 0;
                             lVar2 = *(longlong *)(lVar2 + 0x148)) {
                            FUN_140391300(lVar2);
                        }
                    }
                    (**(code **)(*DAT_140c65688 + 0x30))(DAT_140c65688,1);
                    if ((((*(uint *)(param_1 + 0x80) & 0x2000000) == 0) ||
                         (iVar4 = FUN_140364e90(param_1), -1 < iVar4)) &&
                        (((**(code **)(*DAT_140c65688 + 0x30))(DAT_140c65688,2),
                                (*(byte *)(param_1 + 0x80) & 0x10) == 0 ||
                                (iVar4 = FUN_140363090(param_1), -1 < iVar4)))) {
                        (**(code **)(*DAT_140c65688 + 0x30))(DAT_140c65688,3);
                        plVar3 = *(longlong **)(param_1 + 0x120);
                        if ((*(uint *)(param_1 + 0x80) >> 0xd & 1) == 0) {
                            (**(code **)(*plVar3 + 0x58))();
                        }
                        else {
                            uVar5 = 0x1c;
                            if ((*(uint *)(param_1 + 0x80) >> 0x1a & 1) != 0) {
                                uVar5 = 0x5c;
                            }
                            local_1a8 = local_1a8 & 0xffffffff00000000 | (ulonglong)uVar5;
                            (**(code **)(*plVar3 + 0x40))(plVar3,lVar6,lVar1);
                        }
                        (**(code **)(*DAT_140c65688 + 0x30))();
                        if (((*(uint *)(param_1 + 0x80) & 0x2008) != 0x2008) ||
                            (iVar4 = FUN_140362750(param_1), -1 < iVar4)) {
                            if ((*(uint *)(param_1 + 0x80) >> 0xd & 1) != 0) {
                                local_1a8 = local_1a8 & 0xffffffff00000000 |
                                            (ulonglong)*(uint *)(param_1 + 0x80) & 0xffffffff04000000;
                                (**(code **)(**(longlong **)(param_1 + 0x120) + 0x80))
                                        (*(longlong **)(param_1 + 0x120),lVar6,lVar1);
                            }
                            iVar4 = (**(code **)(*DAT_140c65688 + 0x30))(DAT_140c65688,5);
                            if (((iVar4 == 0) ||
                                 ((((((*(byte *)(param_1 + 0x80) & 4) == 0 ||
                                      ((*(uint *)(param_1 + 0x84) & 0x10) != 0)) ||
                                     ((*(uint *)(param_1 + 0x84) & 0x2200004) == 0)) ||
                                    (iVar4 = FUN_14035f840(), -1 < iVar4)) &&
                                   (((((*(uint *)(param_1 + 0x84) & 0x200) == 0 ||
                                       (iVar4 = FUN_14035f6a0(), -1 < iVar4)) &&
                                      ((((*(uint *)(param_1 + 0x80) & 0x40880) != 0x880 &&
                                         ((*(uint *)(param_1 + 0x80) & 0x880) != 0x880)) ||
                                        (iVar4 = FUN_140364970(param_1), -1 < iVar4)))) &&
                                     (((*(uint *)(param_1 + 0x80) & 0x200) == 0 ||
                                       (((local_88 == 0 || (iVar4 = FUN_1407c2170(local_d8,2,0xffffffff), -1 < iVar4))
                                         && (iVar4 = FUN_140366690(param_1), -1 < iVar4)))))))))) &&
                                (((((iVar4 = (**(code **)(*DAT_140c65688 + 0x30))(DAT_140c65688,6), iVar4 == 0 ||
                                                                                                    ((*(uint *)(param_1 + 0x80) & 0x100) == 0)) ||
                                    (iVar4 = FUN_140366270(param_1), -1 < iVar4)) &&
                                   ((iVar4 = (**(code **)(*DAT_140c65688 + 0x30))(DAT_140c65688,7), iVar4 == 0 ||
                                                                                                    (iVar4 = FUN_14035eff0(param_1), -1 < iVar4)))) &&
                                  ((iVar4 = (**(code **)(*DAT_140c65688 + 0x30))(DAT_140c65688,8), iVar4 == 0 ||
                                                                                                   ((iVar4 = FUN_140366730(param_1,8), -1 < iVar4 &&
                                                                                                                                       (((*(uint *)(param_1 + 0x84) & 0x4000000) == 0 ||
                                                                                                                                         (iVar4 = FUN_14035fa80(param_1), -1 < iVar4)))))))))) {
                                iVar4 = (**(code **)(*DAT_140c65688 + 0x30))(DAT_140c65688,9);
                                if (iVar4 != 0) {
                                    (**(code **)(*DAT_140c65688 + 0x90))(DAT_140c65688,param_1 + 0xdb0);
                                    if ((*(uint *)(param_1 + 0x80) & 0x10000) != 0) {
                                        for (lVar2 = *(longlong *)(param_1 + 0x1558); lVar2 != 0;
                                             lVar2 = *(longlong *)(lVar2 + 0x148)) {
                                            iVar4 = FUN_1403915c0(lVar2,param_1 + 0xdb0,1);
                                            if (iVar4 != 0) {
                                                if (*(longlong *)(param_1 + 0x1538) == lVar2) {
                                                    if (*(longlong *)(lVar2 + 0x18) == 0) {
                                                        lVar7 = *(longlong *)(*(longlong *)(lVar2 + 8) + 0x10) + 0xdb0;
                                                    }
                                                    else {
                                                        lVar7 = *(longlong *)(lVar2 + 0x18) + 0x40;
                                                    }
                                                    (**(code **)(*DAT_140c65688 + 0xb0))(DAT_140c65688,lVar7);
                                                }
                                                else {
                                                    FUN_1403916d0(lVar2);
                                                }
                                            }
                                        }
                                        if (*(longlong *)(param_1 + 0x1538) != 0) goto LAB_140360736;
                                    }
                                    (**(code **)(*DAT_140c65688 + 0xb0))(DAT_140c65688,param_1 + 0xdb0);
                                }
                                LAB_140360736:
                                (**(code **)(*DAT_140c65688 + 0x30))(DAT_140c65688,10);
                                if (((((*(uint *)(param_1 + 0x80) & 0x4004) != 0x4004) ||
                                      ((*(byte *)(param_1 + 0x84) & 0x10) != 0)) ||
                                     (iVar4 = FUN_1403621e0(param_1), -1 < iVar4)) &&
                                    ((local_90 == 0 || (iVar4 = FUN_1407c2170(local_d8,1,0xffffffff), -1 < iVar4))))
                                {
                                    iVar4 = FUN_1400f4750(param_1 + 0x2d8);
                                    if (iVar4 != -1) {
                                        (**(code **)(param_1 + 0x2e0))(*(undefined8 *)(param_1 + 0x2d8));
                                    }
                                    iVar4 = (**(code **)(*DAT_140c65688 + 0x30))(DAT_140c65688,0xb);
                                    if (((iVar4 == 0) ||
                                         (((((*(uint *)(param_1 + 0x80) & 0x40880) != 0x880 &&
                                             ((*(uint *)(param_1 + 0x80) & 0x880) != 0x880)) ||
                                            (iVar4 = FUN_140364970(param_1), -1 < iVar4)) &&
                                           (((*(uint *)(param_1 + 0x80) & 0x200) == 0 ||
                                             (((local_88 == 0 ||
                                                (iVar4 = FUN_1407c2170(local_d8,2,0xffffffff), -1 < iVar4)) &&
                                               (iVar4 = FUN_140366690(param_1), -1 < iVar4)))))))) &&
                                        ((iVar4 = (**(code **)(*DAT_140c65688 + 0x30))(DAT_140c65688,0xc), iVar4 == 0
                                                                                                           || ((iVar4 = FUN_140366730(param_1,0xc), -1 < iVar4 &&
                                                                                                                                                    (((*(uint *)(param_1 + 0x84) & 0x4000000) == 0 ||
                                                                                                                                                      (iVar4 = FUN_14035fa80(param_1), -1 < iVar4)))))))) {
                                        iVar4 = (**(code **)(*DAT_140c65688 + 0x30))(DAT_140c65688,0xd);
                                        if (iVar4 != 0) {
                                            (**(code **)(*DAT_140c65688 + 0x90))(DAT_140c65688,param_1 + 0xdb0);
                                            if ((*(uint *)(param_1 + 0x80) & 0x10000) != 0) {
                                                for (lVar2 = *(longlong *)(param_1 + 0x1558); lVar2 != 0;
                                                     lVar2 = *(longlong *)(lVar2 + 0x148)) {
                                                    iVar4 = FUN_1403915c0(lVar2,param_1 + 0xdb0,0);
                                                    if (iVar4 != 0) {
                                                        if (*(longlong *)(param_1 + 0x1538) == lVar2) {
                                                            if (*(longlong *)(lVar2 + 0x18) == 0) {
                                                                lVar7 = *(longlong *)(*(longlong *)(lVar2 + 8) + 0x10) + 0xdb0;
                                                            }
                                                            else {
                                                                lVar7 = *(longlong *)(lVar2 + 0x18) + 0x40;
                                                            }
                                                            (**(code **)(*DAT_140c65688 + 0xb0))(DAT_140c65688,lVar7);
                                                        }
                                                        else {
                                                            FUN_1403916d0(lVar2);
                                                        }
                                                    }
                                                }
                                                if (*(longlong *)(param_1 + 0x1538) != 0) goto LAB_140360973;
                                            }
                                            (**(code **)(*DAT_140c65688 + 0xb0))(DAT_140c65688,param_1 + 0xdb0);
                                        }
                                        LAB_140360973:
                                        fVar9 = 0.0;
                                        if ((*(byte *)(param_1 + 0x80) & 0x10) == 0) {
                                            (**(code **)(*DAT_140c65688 + 0x30))(DAT_140c65688,0x13);
                                            if (((*(uint *)(param_1 + 0x80) & 0x100000) != 0) && (local_70 != 0)) {
                                                iVar4 = -1;
                                                LAB_140360b61:
                                                iVar4 = FUN_1407c2170(local_d8,5,iVar4);
                                                if (iVar4 < 0) goto LAB_140360fd3;
                                            }
                                            LAB_140360b79:
                                            iVar4 = FUN_1400f4750(param_1 + 0x2f8);
                                            if (iVar4 != -1) {
                                                (**(code **)(param_1 + 0x300))(*(undefined8 *)(param_1 + 0x2f8));
                                            }
                                            (**(code **)(*DAT_140c65688 + 0x30))(DAT_140c65688,0x14);
                                            if ((((*(uint *)(param_1 + 0x80) & 0x100000) == 0) || (local_78 == 0)) ||
                                                (iVar4 = FUN_1407c2170(local_d8,4,0xffffffff), -1 < iVar4)) {
                                                if ((*(uint *)(param_1 + 0x80) & 0x200000) != 0) {
                                                    (**(code **)(*DAT_140c65688 + 0x30))(DAT_140c65688,0x15);
                                                    if (local_68 != 0) {
                                                        FUN_1407c2170(local_d8,6,0xffffffff);
                                                    }
                                                    (**(code **)(**(longlong **)(param_1 + 0x120) + 0xb8))
                                                            (*(longlong **)(param_1 + 0x120),local_148);
                                                    local_e8 = *(undefined8 *)(param_1 + 0x120);
                                                    if (*(float *)(param_1 + 0x248) != fVar9) {
                                                        local_130 = local_130 * *(float *)(param_1 + 0x248);
                                                    }
                                                    (**(code **)(*DAT_140c65688 + 0x50))();
                                                    (**(code **)(*DAT_140c65688 + 0xb8))(DAT_140c65688,local_148);
                                                }
                                                (**(code **)(*DAT_140c65688 + 0x30))(DAT_140c65688,0x16);
                                                if ((*(uint *)(param_1 + 0x80) & 0x8000) != 0) {
                                                    local_1a0 = (float *)(param_1 + 0xdb0);
                                                    local_1a8 = param_1 + 0x390;
                                                    (**(code **)(**(longlong **)(param_1 + 0x120) + 0x60))
                                                            (*(longlong **)(param_1 + 0x120),lVar6,lVar1);
                                                }
                                                if (*(float *)(param_1 + 0x10a4) <= fVar9) {
                                                    if ((*(uint *)(param_1 + 0x80) >> 0xd & 1) != 0) {
                                                        (**(code **)(**(longlong **)(param_1 + 0x120) + 0x88))
                                                                (*(longlong **)(param_1 + 0x120),lVar6,lVar1,
                                                                 *(uint *)(param_1 + 0x80) & 0x4000000);
                                                    }
                                                }
                                                else if (((*(uint *)(param_1 + 0x80) & 0x400010) == 0x400010) &&
                                                         (iVar4 = FUN_14035ce90(param_1), iVar4 < 0)) goto LAB_140360fd3;
                                                FUN_14035f590();
                                                iVar4 = DAT_140c44500;
                                                if (*DAT_140c63750 < DAT_140c44500) {
                                                    iVar4 = *DAT_140c63750;
                                                }
                                                if ((&DAT_140c44510)[iVar4] != '\0') {
                                                    (**(code **)(*DAT_140c65688 + 0x50))();
                                                    local_1a8 = 0;
                                                    (**(code **)(*DAT_140c65670 + 0x160))
                                                            (DAT_140c65670,0,*(undefined8 *)(param_1 + 0x15a8),0);
                                                    (**(code **)(*DAT_140c65670 + 0x178))
                                                            (DAT_140c65670,
                                                             *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x1e8),0);
                                                    lVar6 = (**(code **)(**(longlong **)(param_1 + 0x15a8) + 0x18))();
                                                    local_1a0 = &local_188;
                                                    local_1a8 = 0;
                                                    local_188 = 0.0;
                                                    uStack388 = 0x43160000;
                                                    fStack372 = (float)(ulonglong)*(uint *)(lVar6 + 8) + 150.0;
                                                    local_178 = (float)(ulonglong)*(uint *)(lVar6 + 4);
                                                    (**(code **)(*DAT_140c65670 + 0x298))
                                                            (local_178,fStack372,0x3f800000,DAT_140c65670,0xffffffff);
                                                    local_1a8 = 0;
                                                    (**(code **)(*DAT_140c65670 + 0x160))
                                                            (DAT_140c65670,0,*(undefined8 *)(param_1 + 0x15a0),0);
                                                    (**(code **)(*DAT_140c65670 + 0x178))
                                                            (DAT_140c65670,
                                                             *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x1e8),0);
                                                    local_1a0 = &local_188;
                                                    uStack356 = 0x43160000;
                                                    local_188 = (float)(ulonglong)*(uint *)(lVar6 + 4) + 20.0;
                                                    local_178 = (float)(ulonglong)*(uint *)(lVar6 + 4) * 2.0 + 20.0;
                                                    local_1a8 = 0;
                                                    fStack372 = (float)(ulonglong)*(uint *)(lVar6 + 8) + 150.0;
                                                    uStack388 = 0x43160000;
                                                    uStack384 = uStack352;
                                                    uStack380 = uStack348;
                                                    uStack368 = uStack336;
                                                    uStack364 = uStack332;
                                                    local_168 = local_188;
                                                    local_158 = local_178;
                                                    fStack340 = fStack372;
                                                    (**(code **)(*DAT_140c65670 + 0x298))
                                                            (local_188,local_178,0x3f800000,DAT_140c65670,0xffffffff);
                                                    local_1a8 = 0;
                                                    (**(code **)(*DAT_140c65670 + 0x160))
                                                            (DAT_140c65670,0,*(undefined8 *)(param_1 + 0x1598),0);
                                                    (**(code **)(*DAT_140c65670 + 0x178))
                                                            (DAT_140c65670,
                                                             *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x1e8),0);
                                                    local_1a0 = &local_188;
                                                    uStack356 = 0x43160000;
                                                    local_178 = (float)(ulonglong)*(uint *)(lVar6 + 4) * 3.0 + 40.0;
                                                    local_1a8 = 0;
                                                    local_188 = (float)(ulonglong)*(uint *)(lVar6 + 4) * 2.0 + 40.0;
                                                    fStack372 = (float)(ulonglong)*(uint *)(lVar6 + 8) + 150.0;
                                                    uStack388 = 0x43160000;
                                                    uStack384 = uStack352;
                                                    uStack380 = uStack348;
                                                    uStack368 = uStack336;
                                                    uStack364 = uStack332;
                                                    local_168 = local_188;
                                                    local_158 = local_178;
                                                    fStack340 = fStack372;
                                                    (**(code **)(*DAT_140c65670 + 0x298))
                                                            (local_188,local_178,0x3f800000,DAT_140c65670,0xffffffff,
                                                             local_1a0,0);
                                                }
                                            }
                                        }
                                        else {
                                            iVar4 = (**(code **)(*DAT_140c65688 + 0x30))(DAT_140c65688,0xe);
                                            if (((((iVar4 == 0) || ((*(uint *)(param_1 + 0x80) & 0x100000) == 0)) ||
                                                  (local_70 == 0)) ||
                                                 (iVar4 = FUN_1407c2170(local_d8,5,
                                                                        2 - (uint)(fVar9 < *(float *)(param_1 + 0x10a4))),
                                                         -1 < iVar4)) &&
                                                ((iVar4 = (**(code **)(*DAT_140c65688 + 0x30))(DAT_140c65688,0xf),
                                                        iVar4 == 0 || (iVar4 = FUN_1403638c0(param_1), -1 < iVar4)))) {
                                                iVar4 = (**(code **)(*DAT_140c65688 + 0x30))(DAT_140c65688,0x10);
                                                if ((iVar4 != 0) && ((*(uint *)(param_1 + 0x80) & 0x200) != 0)) {
                                                    if ((local_88 != 0) &&
                                                        (iVar4 = FUN_1407c2170(local_d8,2,0xffffffff), iVar4 < 0))
                                                        goto LAB_140360fd3;
                                                    for (plVar3 = *(longlong **)(param_1 + 0x1508); plVar3 != (longlong *)0x0;
                                                         plVar3 = (longlong *)plVar3[0x3e]) {
                                                        if ((*(byte *)((longlong)plVar3 + 300) & 0x40) != 0) {
                                                            local_188 = -NAN;
                                                            (**(code **)(*plVar3 + 0x38))(plVar3,&local_188);
                                                            (**(code **)(*DAT_140c65688 + 0x68))(DAT_140c65688,plVar3 + 4);
                                                        }
                                                    }
                                                }
                                                iVar4 = (**(code **)(*DAT_140c65688 + 0x30))(DAT_140c65688,0x11);
                                                if (((iVar4 == 0) ||
                                                     ((iVar4 = FUN_140366730(param_1,0x11), -1 < iVar4 &&
                                                                                            (((*(uint *)(param_1 + 0x84) & 0x4000000) == 0 ||
                                                                                              (iVar4 = FUN_14035fa80(param_1), -1 < iVar4)))))) &&
                                                    ((iVar4 = (**(code **)(*DAT_140c65688 + 0x30))(DAT_140c65688,0x12),
                                                            iVar4 == 0 || (iVar4 = FUN_140366bd0(param_1,0x12), -1 < iVar4)))) {
                                                    (**(code **)(*DAT_140c65688 + 0x30))(DAT_140c65688,0x13);
                                                    if (((*(uint *)(param_1 + 0x80) & 0x100000) != 0) && (local_70 != 0)) {
                                                        iVar4 = (fVar9 < *(float *)(param_1 + 0x10a4)) + 1;
                                                        goto LAB_140360b61;
                                                    }
                                                    goto LAB_140360b79;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            else {
                iVar4 = FUN_1400f4750(param_1 + 0x2a8);
                if (iVar4 != -1) {
                    (**(code **)(param_1 + 0x2b0))(*(undefined8 *)(param_1 + 0x2a8));
                }
                if ((*(uint *)(param_1 + 0x84) & 0x4000) != 0) {
                    uVar5 = 2;
                }
                local_1a8 = local_1a8 & 0xffffffff00000000 | (ulonglong)uVar5;
                iVar4 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x50))
                        (*(longlong **)(param_1 + 0x28),lVar1,param_1 + 0x440,param_1 + 0x640);
                if (-1 < iVar4) {
                    iVar4 = FUN_1400f4750(param_1 + 0x2b8);
                    if (iVar4 != -1) {
                        (**(code **)(param_1 + 0x2c0))(*(undefined8 *)(param_1 + 0x2b8));
                    }
                    uVar5 = *(uint *)(param_1 + 0x84);
                    uVar8 = 1;
                    if ((uVar5 & 0x40) != 0) {
                        uVar8 = 0x11;
                    }
                    if ((uVar5 >> 0xb & 1) == 0) {
                        if (((uVar5 >> 10 & 1) != 0) || ((*(uint *)(param_1 + 0x80) & 0x4000000) != 0)) {
                            uVar8 = uVar8 | 0x100;
                        }
                    }
                    else {
                        uVar8 = uVar8 | 0x80;
                    }
                    if ((uVar5 >> 0x16 & 1) != 0) {
                        uVar8 = uVar8 | 0x1000;
                    }
                    lVar2 = **(longlong **)(param_1 + 0x28);
                    local_198 = (**(code **)(**(longlong **)(param_1 + 0x120) + 0xf0))();
                    local_190 = 0;
                    local_1a0 = (float *)((ulonglong)local_1a0 & 0xffffffff00000000 |
                                          (ulonglong)
                                          *(uint *)(&DAT_140b65808 + (longlong)*(int *)(param_1 + 0x90) * 4));
                    local_1a8 = local_1a8 & 0xffffffff00000000 | (ulonglong)uVar8;
                    iVar4 = (**(code **)(lVar2 + 0x78))(*(undefined8 *)(param_1 + 0x28),local_d8,lVar6);
                    if (-1 < iVar4) goto LAB_140360346;
                }
            }
        }
    }
    LAB_140360fd3:
    (**(code **)(**(longlong **)(param_1 + 0x1838) + 0x70))();
    (**(code **)(**(longlong **)(param_1 + 0x1840) + 0x70))();
    (**(code **)(**(longlong **)(param_1 + 0x1848) + 0x70))();
    (**(code **)(*DAT_140c65688 + 0x40))();
    FUN_1407c20b0(local_d8);
    LAB_14036101a:
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack456);
    return;
}



int FUN_140361040(longlong param_1)

{
    int iVar1;

    *(undefined4 *)(param_1 + 0x1818) = 2;
    (**(code **)(**(longlong **)(param_1 + 0x1820) + 0x58))();
    (**(code **)(**(longlong **)(param_1 + 0x1828) + 0x48))
            (*(longlong **)(param_1 + 0x1828),*(undefined8 *)(param_1 + 0x1820));
    (**(code **)(**(longlong **)(param_1 + 0x1828) + 0x58))();
    (**(code **)(**(longlong **)(param_1 + 0x1858) + 0x48))
            (*(longlong **)(param_1 + 0x1858),*(undefined8 *)(param_1 + 0x1828));
    (**(code **)(**(longlong **)(param_1 + 0x1858) + 0x58))();
    iVar1 = FUN_140361170(param_1);
    if (-1 < iVar1) {
        iVar1 = 0;
    }
    (**(code **)(**(longlong **)(param_1 + 0x1858) + 0x70))();
    (**(code **)(**(longlong **)(param_1 + 0x1828) + 0x70))();
    (**(code **)(**(longlong **)(param_1 + 0x1820) + 0x70))();
    return iVar1;
}



int FUN_1403610f0(longlong param_1)

{
    int iVar1;

    if ((*(uint *)(param_1 + 0x80) & 0x880) == 0x880) {
        (**(code **)(**(longlong **)(param_1 + 0x1830) + 0x58))();
    }
    if ((*(byte *)(param_1 + 0x80) & 0x60) != 0) {
        iVar1 = FUN_1403640d0(param_1);
        if (iVar1 < 0) goto LAB_140361155;
    }
    if ((*(uint *)(param_1 + 0x80) & 0x880) == 0x880) {
        iVar1 = FUN_1403647d0(param_1);
        if (iVar1 < 0) goto LAB_140361155;
    }
    iVar1 = 0;
    LAB_140361155:
    (**(code **)(**(longlong **)(param_1 + 0x1830) + 0x70))();
    return iVar1;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140361170(longlong param_1)

{
    longlong lVar1;
    int iVar2;
    undefined8 uVar3;
    undefined4 uVar4;
    undefined auStack248 [32];
    undefined4 local_d8;
    undefined4 local_d0;
    undefined8 local_c8;
    undefined8 local_c0;
    undefined local_b8 [16];
    undefined local_a8 [64];
    longlong local_68;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack248;
    FUN_1407c1fe0(local_a8);
    (**(code **)(*DAT_140c65670 + 0x120))();
    if ((*(byte *)(param_1 + 0x80) & 2) == 0) {
        (**(code **)(*DAT_140c65670 + 0x278))(DAT_140c65670,1);
        uVar3 = 6;
        uVar4 = 0;
    }
    else {
        uVar3 = 7;
        uVar4 = DAT_140c440d8;
    }
    local_b8 = CONCAT412(uVar4,CONCAT48(uVar4,CONCAT44(uVar4,uVar4)));
    local_d8 = 0;
    (**(code **)(*DAT_140c65670 + 0x270))(DAT_140c65670,uVar3,local_b8);
    local_b8 = CONCAT124(local_b8._4_12_,0xffffffff);
    (**(code **)(**(longlong **)(param_1 + 0x1820) + 0x20))(*(longlong **)(param_1 + 0x1820),local_b8)
            ;
    if (((*(byte *)(param_1 + 0x80) & 4) != 0) && (iVar2 = FUN_140361a10(param_1), iVar2 < 0))
        goto LAB_1403613b4;
    local_b8 = CONCAT124(local_b8._4_12_,0xffffffff);
    (**(code **)(**(longlong **)(param_1 + 0x1858) + 0x20))(*(longlong **)(param_1 + 0x1858),local_b8)
            ;
    uVar4 = 4;
    if ((*(uint *)(param_1 + 0x80) >> 0xc & 1) != 0) {
        uVar3 = 4;
        if (((*(uint *)(param_1 + 0x84) & 0x400) != 0) || ((*(uint *)(param_1 + 0x80) >> 0x1a & 1) != 0)
                ) {
            uVar3 = 0x40004;
        }
        if ((DAT_140c657f0 != 0) && (iVar2 = FUN_1402c89c0(DAT_140c657f0,local_a8,uVar3), iVar2 < 0))
            goto LAB_1403613b4;
    }
    if ((*(uint *)(param_1 + 0x80) & 0x800) != 0) {
        local_d8 = 1;
        if ((*(uint *)(param_1 + 0x84) & 0x4000) != 0) {
            local_d8 = 3;
        }
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x50))
                (*(longlong **)(param_1 + 0x28),param_1 + 0x480,param_1 + 0x4c0,
                 param_1 + 0x640);
        if (iVar2 < 0) goto LAB_1403613b4;
        if (((*(uint *)(param_1 + 0x84) & 0x400) != 0) || ((*(uint *)(param_1 + 0x80) & 0x4000000) != 0)
                ) {
            uVar4 = 0x104;
        }
        lVar1 = **(longlong **)(param_1 + 0x28);
        local_c8 = (**(code **)(**(longlong **)(param_1 + 0x120) + 0xf0))();
        local_c0 = 0;
        local_d0 = 0;
        local_d8 = uVar4;
        iVar2 = (**(code **)(lVar1 + 0x78))
                (*(undefined8 *)(param_1 + 0x28),local_a8,param_1 + 0x540,param_1 + 0xdb0);
        if (iVar2 < 0) goto LAB_1403613b4;
    }
    if (((local_68 == 0) || (iVar2 = FUN_1407c2170(local_a8,0,0xffffffff), -1 < iVar2)) &&
        ((*(byte *)(param_1 + 0x80) & 2) == 0)) {
        FUN_140364cc0(param_1);
    }
    LAB_1403613b4:
    FUN_1407c20b0(local_a8);
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack248);
    return;
}



undefined8 FUN_1403613f0(longlong param_1)

{
    float fVar1;
    undefined auVar2 [16];
    int iVar3;
    int iVar4;
    uint uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    undefined4 uVar10;
    uint uVar11;
    undefined4 uVar12;
    int iVar13;
    longlong lVar14;
    undefined (*pauVar15) [16];
    undefined4 *puVar16;
    undefined8 uVar17;
    float fVar18;
    float fVar19;

    lVar14 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))();
    (**(code **)(*DAT_140c65670 + 0x128))();
    (**(code **)(*DAT_140c65688 + 0x50))();
    (**(code **)(*DAT_140c65688 + 0x108))(DAT_140c65688,8,0x38);
    if ((*(uint *)(param_1 + 0x84) >> 0xb & 1) == 0) {
        if (((*(uint *)(param_1 + 0x84) >> 10 & 1) == 0) &&
            ((*(uint *)(param_1 + 0x80) & 0x4000000) == 0)) goto LAB_140361487;
        uVar17 = 2;
    }
    else {
        uVar17 = 0;
    }
    (**(code **)(*DAT_140c65670 + 0x150))(DAT_140c65670,uVar17);
    LAB_140361487:
    if ((*(byte *)(param_1 + 0x84) & 0x10) != 0) {
        (**(code **)(*DAT_140c65670 + 0x158))(DAT_140c65670,0);
    }
    uVar5 = *(uint *)(param_1 + 0x84);
    iVar3 = *(int *)(&DAT_140b65808 + (longlong)*(int *)(param_1 + 0x90) * 4);
    iVar4 = *(int *)(&DAT_140b65808 + (longlong)*(int *)(param_1 + 0x90) * 4);
    pauVar15 = (undefined (*) [16])(**(code **)(*DAT_140c65670 + 0x100))(DAT_140c65670,0x90,0,0,0);
    if (pauVar15 != (undefined (*) [16])0x0) {
        uVar6 = *(undefined4 *)(param_1 + 0x3d4);
        uVar7 = *(undefined4 *)(param_1 + 0x3d8);
        uVar8 = *(undefined4 *)(param_1 + 0x3f4);
        uVar9 = *(undefined4 *)(param_1 + 0x3f8);
        auVar2 = *(undefined (*) [16])(param_1 + 0x3c0);
        uVar10 = *(undefined4 *)(param_1 + 1000);
        *pauVar15 = CONCAT412(*(undefined4 *)(param_1 + 0x3f0),
                              CONCAT48(*(undefined4 *)(param_1 + 0x3e0),
                                       SUB168(auVar2,0) & 0xffffffff |
                                       (ulonglong)*(uint *)(param_1 + 0x3d0) << 0x20));
        pauVar15[1] = CONCAT412(uVar8,ZEXT812(SUB168(CONCAT412(uVar6,CONCAT48(SUB164(auVar2 >> 0x20,0),
                                                                              SUB168(auVar2,0))) >> 0x40
                ,0)));
        pauVar15[2] = CONCAT412(uVar9,CONCAT48(uVar10,CONCAT44(uVar7,SUB164(auVar2 >> 0x40,0))));
        uVar6 = *(undefined4 *)(param_1 + 0x514);
        uVar7 = *(undefined4 *)(param_1 + 0x518);
        uVar11 = *(uint *)(param_1 + 0x51c);
        auVar2 = *(undefined (*) [16])(param_1 + 0x500);
        uVar8 = *(undefined4 *)(param_1 + 0x528);
        uVar9 = *(undefined4 *)(param_1 + 0x534);
        uVar10 = *(undefined4 *)(param_1 + 0x538);
        uVar12 = *(undefined4 *)(param_1 + 0x53c);
        pauVar15[3] = CONCAT412(*(undefined4 *)(param_1 + 0x530),
                                CONCAT48(*(undefined4 *)(param_1 + 0x520),
                                         SUB168(auVar2,0) & 0xffffffff |
                                         (ulonglong)*(uint *)(param_1 + 0x510) << 0x20));
        pauVar15[4] = CONCAT412(uVar9,ZEXT812(SUB168(CONCAT412(uVar6,CONCAT48(SUB164(auVar2 >> 0x20,0),
                                                                              SUB168(auVar2,0))) >> 0x40
                ,0)));
        pauVar15[5] = CONCAT412(uVar10,CONCAT48(uVar8,CONCAT44(uVar7,SUB164(auVar2 >> 0x40,0))));
        pauVar15[6] = CONCAT412(uVar12,ZEXT412(uVar11) << 0x20);
        *(float *)pauVar15[7] = -1.0 / DAT_140c44018;
        *(ulonglong *)pauVar15[8] =
                CONCAT44(*(undefined4 *)(param_1 + 0x368),*(undefined4 *)(param_1 + 0x360));
        *(undefined4 *)(pauVar15[8] + 8) = 0x3f800000;
        *(uint *)(pauVar15[8] + 0xc) = *(uint *)(param_1 + 0x10a0) ^ 0x80000000;
        (**(code **)(*DAT_140c65670 + 0x108))();
    }
    puVar16 = (undefined4 *)(**(code **)(*DAT_140c65670 + 0x110))(DAT_140c65670,0x50,0,0,0);
    fVar19 = 0.0;
    if (puVar16 != (undefined4 *)0x0) {
        uVar6 = *(undefined4 *)(param_1 + 0x1e4);
        uVar7 = *(undefined4 *)(param_1 + 0x1e8);
        uVar8 = *(undefined4 *)(param_1 + 0x1ec);
        *puVar16 = *(undefined4 *)(param_1 + 0x1e0);
        puVar16[1] = uVar6;
        puVar16[2] = uVar7;
        puVar16[3] = uVar8;
        uVar6 = *(undefined4 *)(param_1 + 500);
        uVar7 = *(undefined4 *)(param_1 + 0x1f8);
        uVar8 = *(undefined4 *)(param_1 + 0x1fc);
        puVar16[4] = *(undefined4 *)(param_1 + 0x1f0);
        puVar16[5] = uVar6;
        puVar16[6] = uVar7;
        puVar16[7] = uVar8;
        *(undefined (*) [16])(puVar16 + 8) =
                ZEXT816(CONCAT44((float)(uint)*(byte *)(lVar14 + 0x21),
                                 (float)(uint)*(byte *)(lVar14 + 0x20)));
        uVar6 = *(undefined4 *)(param_1 + 0x330);
        uVar7 = *(undefined4 *)(param_1 + 0x334);
        uVar8 = *(undefined4 *)(param_1 + 0x338);
        uVar9 = *(undefined4 *)(param_1 + 0x33c);
        puVar16[0xc] = uVar6;
        puVar16[0xd] = uVar7;
        puVar16[0xe] = uVar8;
        puVar16[0xf] = uVar9;
        if ((*(uint *)(param_1 + 0x84) & 0x40000) == 0) {
            puVar16[0x10] = 0x40000000;
            puVar16[0x12] = 0;
        }
        else {
            puVar16[0x10] = 0;
            puVar16[0x12] = 0x3f800000;
        }
        if ((*(uint *)(param_1 + 0x84) & 0x10000) == 0) {
            puVar16[0x11] = 0x3f800000;
            puVar16[0x13] = 0;
        }
        else {
            puVar16[0x11] = 0;
            puVar16[0x13] = 0x3f800000;
        }
        (**(code **)(*DAT_140c65670 + 0x118))(uVar6,0);
    }
    lVar14 = *(longlong *)(param_1 + 0x920);
    do {
        if (lVar14 == 0) {
            return 0;
        }
        if (*(int *)(param_1 + 0x354) == 0) {
            LAB_140361731:
            iVar13 = FUN_14035bdf0(param_1,lVar14 + 0x100);
            if ((iVar13 != 0) &&
                (uVar17 = FUN_140383920(lVar14,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x68),iVar3,
                                        iVar3 + 4,*(undefined4 *)(param_1 + 0x90),
                                        (iVar4 + (uint)((uVar5 & 0x1809023) != 0) * 4) * 0x100),
                        (int)uVar17 < 0)) {
                return uVar17;
            }
        }
        else {
            fVar18 = *(float *)(lVar14 + 0x114) - *(float *)(param_1 + 0x394);
            if (fVar18 <= fVar19) {
                fVar1 = *(float *)(lVar14 + 0x518);
            }
            else {
                fVar1 = *(float *)(lVar14 + 0x514);
            }
            if (*(float *)(lVar14 + 0x510) <= fVar18 * fVar1) goto LAB_140361731;
        }
        lVar14 = *(longlong *)(lVar14 + 0x590);
    } while( true );
}



undefined8 FUN_1403617a0(longlong param_1)

{
    float fVar1;
    int iVar2;
    uint uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    uint uVar9;
    undefined4 uVar10;
    int iVar11;
    undefined (*pauVar12) [16];
    undefined8 uVar13;
    longlong lVar14;
    float fVar15;
    float fVar16;
    undefined local_28 [16];

    FUN_14035a150();
    (**(code **)(*DAT_140c65670 + 0x120))();
    local_28 = ZEXT816(0);
    (**(code **)(*DAT_140c65670 + 0x270))(DAT_140c65670,7,local_28);
    iVar2 = *(int *)(&DAT_140b65808 + (longlong)*(int *)(param_1 + 0x90) * 4);
    pauVar12 = (undefined (*) [16])(**(code **)(*DAT_140c65670 + 0x100))(DAT_140c65670,0x90,0,0,0);
    if (pauVar12 != (undefined (*) [16])0x0) {
        uVar3 = *(uint *)(param_1 + 0x3d4);
        uVar4 = *(undefined4 *)(param_1 + 0x3d8);
        uVar5 = *(undefined4 *)(param_1 + 0x3f4);
        uVar6 = *(undefined4 *)(param_1 + 0x3f8);
        uVar7 = *(undefined4 *)(param_1 + 0x3c8);
        uVar8 = *(undefined4 *)(param_1 + 1000);
        *pauVar12 = CONCAT412(*(undefined4 *)(param_1 + 0x3f0),
                              CONCAT48(*(undefined4 *)(param_1 + 0x3e0),
                                       CONCAT44(*(undefined4 *)(param_1 + 0x3d0),
                                                *(undefined4 *)(param_1 + 0x3c0))));
        pauVar12[1] = CONCAT412(uVar5,ZEXT412(uVar3) << 0x20);
        pauVar12[2] = CONCAT412(uVar6,CONCAT48(uVar8,CONCAT44(uVar4,uVar7)));
        uVar3 = *(uint *)(param_1 + 0x514);
        uVar4 = *(undefined4 *)(param_1 + 0x518);
        uVar9 = *(uint *)(param_1 + 0x51c);
        uVar5 = *(undefined4 *)(param_1 + 0x508);
        uVar6 = *(undefined4 *)(param_1 + 0x528);
        uVar7 = *(undefined4 *)(param_1 + 0x534);
        uVar8 = *(undefined4 *)(param_1 + 0x538);
        uVar10 = *(undefined4 *)(param_1 + 0x53c);
        pauVar12[3] = CONCAT412(*(undefined4 *)(param_1 + 0x530),
                                CONCAT48(*(undefined4 *)(param_1 + 0x520),
                                         CONCAT44(*(undefined4 *)(param_1 + 0x510),
                                                  *(undefined4 *)(param_1 + 0x500))));
        pauVar12[4] = CONCAT412(uVar7,ZEXT412(uVar3) << 0x20);
        pauVar12[5] = CONCAT412(uVar8,CONCAT48(uVar6,CONCAT44(uVar4,uVar5)));
        pauVar12[6] = CONCAT412(uVar10,ZEXT412(uVar9) << 0x20);
        *(float *)pauVar12[7] = -1.0 / DAT_140c44018;
        *(ulonglong *)pauVar12[8] =
                CONCAT44(*(undefined4 *)(param_1 + 0x368),*(undefined4 *)(param_1 + 0x360));
        *(undefined4 *)(pauVar12[8] + 8) = 0x3f800000;
        *(uint *)(pauVar12[8] + 0xc) = *(uint *)(param_1 + 0x10a0) ^ 0x80000000;
        (**(code **)(*DAT_140c65670 + 0x108))();
    }
    (**(code **)(*DAT_140c65670 + 0x140))
            (DAT_140c65670,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x68),iVar2);
    lVar14 = *(longlong *)(param_1 + 0x920);
    if (lVar14 != 0) {
        fVar16 = 0.0;
        do {
            if (*(int *)(param_1 + 0x354) == 0) {
                LAB_1403619b7:
                iVar11 = FUN_14035bdf0(param_1,lVar14 + 0x100);
                if ((iVar11 != 0) &&
                    (uVar13 = FUN_140384320(lVar14,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x68),
                                            iVar2,iVar2 + 4), (int)uVar13 < 0)) {
                    return uVar13;
                }
            }
            else {
                fVar15 = *(float *)(lVar14 + 0x114) - *(float *)(param_1 + 0x394);
                if (fVar15 <= fVar16) {
                    fVar1 = *(float *)(lVar14 + 0x518);
                }
                else {
                    fVar1 = *(float *)(lVar14 + 0x514);
                }
                if (*(float *)(lVar14 + 0x510) <= fVar15 * fVar1) goto LAB_1403619b7;
            }
            lVar14 = *(longlong *)(lVar14 + 0x590);
        } while (lVar14 != 0);
    }
    return 0;
}



undefined8 FUN_140361a10(longlong param_1)

{
    float fVar1;
    uint uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    uint uVar8;
    undefined4 uVar9;
    int iVar10;
    undefined (*pauVar11) [16];
    undefined8 uVar12;
    longlong lVar13;
    float fVar14;
    float fVar15;

    (**(code **)(*DAT_140c65670 + 0x120))();
    (**(code **)(*DAT_140c65670 + 0x128))();
    (**(code **)(*DAT_140c65670 + 0x1d0))(DAT_140c65670,1,1,3);
    (**(code **)(*DAT_140c65670 + 0x188))(DAT_140c65670,8);
    if (((*(uint *)(param_1 + 0x84) & 0x400) != 0) || ((*(uint *)(param_1 + 0x80) & 0x4000000) != 0))
    {
        (**(code **)(*DAT_140c65670 + 0x150))(DAT_140c65670,2);
    }
    (**(code **)(*DAT_140c65670 + 0x178))
            (DAT_140c65670,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x90),0);
    pauVar11 = (undefined (*) [16])(**(code **)(*DAT_140c65670 + 0x100))(DAT_140c65670,0x80,0,0,0);
    if (pauVar11 != (undefined (*) [16])0x0) {
        uVar2 = *(uint *)(param_1 + 0x3d4);
        uVar3 = *(undefined4 *)(param_1 + 0x3d8);
        uVar4 = *(undefined4 *)(param_1 + 0x3f4);
        uVar5 = *(undefined4 *)(param_1 + 0x3f8);
        uVar6 = *(undefined4 *)(param_1 + 0x3c8);
        uVar7 = *(undefined4 *)(param_1 + 1000);
        *pauVar11 = CONCAT412(*(undefined4 *)(param_1 + 0x3f0),
                              CONCAT48(*(undefined4 *)(param_1 + 0x3e0),
                                       CONCAT44(*(undefined4 *)(param_1 + 0x3d0),
                                                *(undefined4 *)(param_1 + 0x3c0))));
        pauVar11[1] = CONCAT412(uVar4,ZEXT412(uVar2) << 0x20);
        pauVar11[2] = CONCAT412(uVar5,CONCAT48(uVar7,CONCAT44(uVar3,uVar6)));
        uVar2 = *(uint *)(param_1 + 0x514);
        uVar3 = *(undefined4 *)(param_1 + 0x518);
        uVar8 = *(uint *)(param_1 + 0x51c);
        uVar4 = *(undefined4 *)(param_1 + 0x534);
        uVar5 = *(undefined4 *)(param_1 + 0x538);
        uVar6 = *(undefined4 *)(param_1 + 0x53c);
        uVar7 = *(undefined4 *)(param_1 + 0x508);
        uVar9 = *(undefined4 *)(param_1 + 0x528);
        pauVar11[3] = CONCAT412(*(undefined4 *)(param_1 + 0x530),
                                CONCAT48(*(undefined4 *)(param_1 + 0x520),
                                         CONCAT44(*(undefined4 *)(param_1 + 0x510),
                                                  *(undefined4 *)(param_1 + 0x500))));
        pauVar11[4] = CONCAT412(uVar4,ZEXT412(uVar2) << 0x20);
        pauVar11[5] = CONCAT412(uVar5,CONCAT48(uVar9,CONCAT44(uVar3,uVar7)));
        pauVar11[6] = CONCAT412(uVar6,ZEXT412(uVar8) << 0x20);
        *(ulonglong *)pauVar11[7] =
                CONCAT44(*(undefined4 *)(param_1 + 0x368),*(undefined4 *)(param_1 + 0x360));
        *(undefined4 *)(pauVar11[7] + 8) = 0x3f800000;
        *(uint *)(pauVar11[7] + 0xc) = *(uint *)(param_1 + 0x10a0) ^ 0x80000000;
        (**(code **)(*DAT_140c65670 + 0x108))();
    }
    lVar13 = *(longlong *)(param_1 + 0x920);
    if (lVar13 != 0) {
        fVar15 = 0.0;
        do {
            if (*(int *)(param_1 + 0x354) == 0) {
                LAB_140361c36:
                iVar10 = FUN_14035bdf0(param_1,lVar13 + 0x100);
                if (iVar10 != 0) {
                    pauVar11 = (undefined (*) [16])
                            (**(code **)(*DAT_140c65670 + 0x100))(DAT_140c65670,0x10,1,8,0);
                    if (pauVar11 != (undefined (*) [16])0x0) {
                        *pauVar11 = ZEXT1216(CONCAT48(*(uint *)(lVar13 + 0xc0),
                                                      (ulonglong)*(uint *)(lVar13 + 0xc0)));
                        (**(code **)(*DAT_140c65670 + 0x108))();
                    }
                    uVar12 = FUN_140384480(lVar13,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x88));
                    if ((int)uVar12 < 0) {
                        return uVar12;
                    }
                }
            }
            else {
                fVar14 = *(float *)(lVar13 + 0x114) - *(float *)(param_1 + 0x394);
                if (fVar14 <= fVar15) {
                    fVar1 = *(float *)(lVar13 + 0x518);
                }
                else {
                    fVar1 = *(float *)(lVar13 + 0x514);
                }
                if (*(float *)(lVar13 + 0x510) <= fVar14 * fVar1) goto LAB_140361c36;
            }
            lVar13 = *(longlong *)(lVar13 + 0x590);
        } while (lVar13 != 0);
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140361ce0(longlong param_1)

{
    undefined auVar1 [16];
    longlong lVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    uint uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    int iVar10;
    undefined (*pauVar11) [16];
    undefined4 *puVar12;
    undefined auVar13 [16];
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    undefined auStack376 [32];
    undefined4 local_158;
    undefined4 local_150;
    undefined4 local_148;
    undefined4 local_140;
    longlong local_138;
    undefined *local_130;
    undefined local_128 [16];
    float local_118;
    float fStack276;
    float fStack272;
    float fStack268;
    undefined local_108 [16];
    undefined4 local_f8;
    undefined4 uStack244;
    undefined4 uStack240;
    undefined4 uStack236;
    undefined local_e8 [16];
    uint local_d8;
    uint uStack212;
    undefined4 uStack208;
    undefined4 local_c8;
    undefined4 uStack192;
    undefined4 local_b8;
    undefined4 uStack180;
    undefined4 uStack176;
    longlong local_a8;
    undefined *local_a0;
    ulonglong local_58;

    local_58 = DAT_140c0f7b0 ^ (ulonglong)auStack376;
    (**(code **)(*DAT_140c65670 + 0x128))();
    (**(code **)(*DAT_140c65688 + 0x50))();
    local_158 = 2;
    (**(code **)(*DAT_140c65670 + 0x1b0))(DAT_140c65670,0,0,0);
    (**(code **)(*DAT_140c65670 + 0x158))(DAT_140c65670,0);
    (**(code **)(*DAT_140c65670 + 0x1d0))(DAT_140c65670,1,1,0);
    (**(code **)(*DAT_140c65670 + 0x1c0))(DAT_140c65670,7);
    (**(code **)(*DAT_140c65670 + 0x198))(DAT_140c65670,0);
    (**(code **)(*DAT_140c65670 + 0x150))(DAT_140c65670,0);
    fVar16 = *(float *)(param_1 + 0x88) * 0.25;
    fVar17 = fVar16 * 0.25;
    fVar15 = fVar16 * fVar16;
    local_158 = 0;
    pauVar11 = (undefined (*) [16])(**(code **)(*DAT_140c65670 + 0x100))(DAT_140c65670,0x80,0,0);
    if (pauVar11 != (undefined (*) [16])0x0) {
        local_138 = param_1 + 0x3c0;
        local_130 = local_128;
        local_128 = CONCAT412(fRam0000000140c7841c * 0.99,
                              CONCAT48(fRam0000000140c78418 * 0.99,
                                       CONCAT44(fRam0000000140c78414 * 0.99,_DAT_140c78410 * 0.99)));
        local_118 = _DAT_140c78420 * 0.99;
        fStack276 = fRam0000000140c78424 * 0.99;
        fStack272 = fRam0000000140c78428 * 0.99;
        fStack268 = fRam0000000140c7842c * 0.99;
        local_f8 = _DAT_140c78440;
        uStack244 = uRam0000000140c78444;
        uStack240 = uRam0000000140c78448;
        uStack236 = uRam0000000140c7844c;
        local_108 = CONCAT412(fRam0000000140c7843c * 0.99,
                              CONCAT48(fRam0000000140c78438 * 0.99,
                                       CONCAT44(fRam0000000140c78434 * 0.99,_DAT_140c78430 * 0.99)));
        local_a8 = local_138;
        local_a0 = local_130;
        FUN_1401afb10(&local_a8,local_e8);
        *pauVar11 = CONCAT412(local_b8,CONCAT48(local_c8,SUB168(local_e8,0) & 0xffffffff |
                                                         (ulonglong)local_d8 << 0x20));
        pauVar11[1] = CONCAT412(uStack180,
                                ZEXT812(SUB168(CONCAT412(SUB164(local_e8 >> 0x60,0),
                                                         CONCAT48(SUB164(local_e8 >> 0x20,0),
                                                                  SUB168(local_e8,0))) >> 0x40,0) &
                                        0xffffffff | (ulonglong)uStack212 << 0x20));
        pauVar11[2] = CONCAT412(uStack176,
                                CONCAT48(uStack192,CONCAT44(uStack208,SUB164(local_e8 >> 0x40,0))));
        uVar3 = *(undefined4 *)(param_1 + 0x514);
        uVar4 = *(undefined4 *)(param_1 + 0x518);
        uVar5 = *(uint *)(param_1 + 0x51c);
        uVar6 = *(undefined4 *)(param_1 + 0x508);
        auVar1 = *(undefined (*) [16])(param_1 + 0x520);
        uVar7 = *(undefined4 *)(param_1 + 0x534);
        uVar8 = *(undefined4 *)(param_1 + 0x538);
        uVar9 = *(undefined4 *)(param_1 + 0x53c);
        pauVar11[3] = CONCAT412(*(undefined4 *)(param_1 + 0x530),
                                CONCAT48(SUB164(auVar1,0),
                                         CONCAT44(*(undefined4 *)(param_1 + 0x510),
                                                  *(undefined4 *)(param_1 + 0x500)))) &
                      (undefined  [16])0xffffffffffffffff;
        pauVar11[4] = ZEXT1216(CONCAT48(uVar7,CONCAT44(SUB164(auVar1 >> 0x20,0),uVar3))) << 0x20;
        pauVar11[5] = CONCAT412(uVar8,CONCAT48(SUB164(auVar1 >> 0x40,0),CONCAT44(uVar4,uVar6)));
        pauVar11[6] = CONCAT412(uVar9,ZEXT412(uVar5) << 0x20);
        fVar16 = 1.0 / (fVar16 - fVar17);
        *(float *)pauVar11[7] = fVar16;
        *(uint *)(pauVar11[7] + 4) = (uint)(fVar16 * fVar17) ^ 0x80000000;
        (**(code **)(*DAT_140c65670 + 0x108))();
    }
    (**(code **)(*DAT_140c65670 + 0x140))
            (DAT_140c65670,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xe0),0);
    local_158 = 0;
    puVar12 = (undefined4 *)(**(code **)(*DAT_140c65670 + 0x110))(DAT_140c65670,0x10,0);
    if (puVar12 != (undefined4 *)0x0) {
        *puVar12 = 0x3ccccccd;
        puVar12[1] = 0x3ccccccd;
        puVar12[2] = 0x3ccccccd;
        puVar12[3] = 0;
        (**(code **)(*DAT_140c65670 + 0x118))();
    }
    (**(code **)(*DAT_140c65670 + 0x178))
            (DAT_140c65670,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xe8),0);
    (**(code **)(*DAT_140c65670 + 0x138))
            (DAT_140c65670,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xf0));
    (**(code **)(*DAT_140c65670 + 0x130))
            (DAT_140c65670,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x78),4);
    for (lVar2 = *(longlong *)(param_1 + 0x920);
         (lVar2 != 0 && (*(float *)(lVar2 + 0x30) <= fVar15 && fVar15 != *(float *)(lVar2 + 0x30)));
         lVar2 = *(longlong *)(lVar2 + 0x590)) {
        auVar1 = *(undefined (*) [16])(param_1 + 0x390);
        auVar13 = minps(auVar1,*(undefined (*) [16])(lVar2 + 0xd0));
        auVar13 = maxps(*(undefined (*) [16])(lVar2 + 0xc0),auVar13);
        fVar16 = SUB164(auVar13,0) - SUB164(auVar1,0);
        fVar17 = SUB164(auVar13 >> 0x20,0) - SUB164(auVar1 >> 0x20,0);
        fVar14 = SUB164(auVar13 >> 0x40,0) - SUB164(auVar1 >> 0x40,0);
        if ((fVar16 * fVar16 + fVar17 * fVar17 + fVar14 * fVar14 < fVar15) &&
            (iVar10 = FUN_14035bdf0(param_1,lVar2 + 0xc0), iVar10 != 0)) {
            local_158 = 0;
            puVar12 = (undefined4 *)(**(code **)(*DAT_140c65670 + 0x100))(DAT_140c65670,0x10,1,8);
            if (puVar12 != (undefined4 *)0x0) {
                uVar3 = *(undefined4 *)(lVar2 + 0xc0);
                uVar4 = *(undefined4 *)(lVar2 + 200);
                *puVar12 = uVar3;
                puVar12[1] = uVar4;
                puVar12[2] = uVar3;
                puVar12[3] = uVar4;
                (**(code **)(*DAT_140c65670 + 0x108))();
            }
            (**(code **)(*DAT_140c65670 + 0x130))
                    (DAT_140c65670,*(undefined8 *)(*(longlong *)(lVar2 + 0xa0) + 0x20));
            local_140 = 1;
            local_148 = 0;
            local_150 = 0x221;
            local_158 = 0;
            (**(code **)(*DAT_140c65670 + 0x290))(DAT_140c65670,3);
        }
    }
    FUN_1407db4f0(local_58 ^ (ulonglong)auStack376);
    return;
}



undefined8 FUN_1403621e0(longlong param_1)

{
    undefined auVar1 [16];
    int iVar2;
    uint uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    uint uVar8;
    undefined4 uVar9;
    bool bVar10;
    bool bVar11;
    bool bVar12;
    int iVar13;
    longlong lVar14;
    undefined (*pauVar15) [16];
    ulonglong *puVar16;
    undefined8 uVar17;
    undefined auVar18 [16];
    float fVar19;
    float fVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    longlong *local_res8;
    ulonglong local_68;
    undefined8 uStack96;

    lVar14 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))();
    (**(code **)(*DAT_140c65670 + 0x128))();
    (**(code **)(*DAT_140c65688 + 0x50))();
    bVar12 = false;
    bVar11 = true;
    iVar13 = DAT_140c44400;
    if (*DAT_140c63750 < DAT_140c44400) {
        iVar13 = *DAT_140c63750;
    }
    if (((&DAT_140c44410)[iVar13] == '\0') ||
        (bVar10 = bVar11, (*(uint *)(param_1 + 0x80) & 0x8000000) == 0)) {
        bVar10 = false;
    }
    iVar13 = *(int *)(&DAT_140b657f8 + (longlong)*(int *)(param_1 + 0x90) * 4);
    uVar3 = *(uint *)(param_1 + 0x84);
    iVar2 = *(int *)(&DAT_140b657f8 + (longlong)*(int *)(param_1 + 0x90) * 4);
    pauVar15 = (undefined (*) [16])(**(code **)(*DAT_140c65670 + 0x100))(DAT_140c65670,0x90,0,0,0);
    fVar23 = 0.0;
    if (pauVar15 != (undefined (*) [16])0x0) {
        uVar4 = *(undefined4 *)(param_1 + 0x3d4);
        uVar5 = *(undefined4 *)(param_1 + 0x3d8);
        uVar6 = *(undefined4 *)(param_1 + 0x3f4);
        uVar7 = *(undefined4 *)(param_1 + 0x3f8);
        auVar1 = *(undefined (*) [16])(param_1 + 0x3c0);
        auVar18 = *(undefined (*) [16])(param_1 + 0x3e0);
        fVar22 = *(float *)(param_1 + 0x94);
        *pauVar15 = CONCAT412(*(undefined4 *)(param_1 + 0x3f0),
                              CONCAT48(SUB164(auVar18,0),
                                       SUB168(auVar1,0) & 0xffffffff |
                                       (ulonglong)*(uint *)(param_1 + 0x3d0) << 0x20)) &
                    (undefined  [16])0xffffffffffffffff;
        pauVar15[1] = CONCAT412(uVar6,CONCAT48(SUB164(auVar18 >> 0x20,0),
                                               SUB168(CONCAT412(uVar4,CONCAT48(SUB164(auVar1 >> 0x20,0),
                                                                               SUB168(auVar1,0))) >>
                                                                                                  0x40,0)));
        pauVar15[2] = CONCAT412(uVar7,CONCAT48(SUB164(auVar18 >> 0x40,0),
                                               CONCAT44(uVar5,SUB164(auVar1 >> 0x40,0))));
        uVar4 = *(undefined4 *)(param_1 + 0x514);
        uVar5 = *(undefined4 *)(param_1 + 0x518);
        uVar8 = *(uint *)(param_1 + 0x51c);
        uVar6 = *(undefined4 *)(param_1 + 0x534);
        uVar7 = *(undefined4 *)(param_1 + 0x538);
        uVar9 = *(undefined4 *)(param_1 + 0x53c);
        auVar1 = *(undefined (*) [16])(param_1 + 0x500);
        auVar18 = *(undefined (*) [16])(param_1 + 0x520);
        pauVar15[3] = CONCAT412(*(undefined4 *)(param_1 + 0x530),
                                CONCAT48(SUB164(auVar18,0),
                                         SUB168(auVar1,0) & 0xffffffff |
                                         (ulonglong)*(uint *)(param_1 + 0x510) << 0x20)) &
                      (undefined  [16])0xffffffffffffffff;
        pauVar15[4] = CONCAT412(uVar6,CONCAT48(SUB164(auVar18 >> 0x20,0),
                                               SUB168(CONCAT412(uVar4,CONCAT48(SUB164(auVar1 >> 0x20,0),
                                                                               SUB168(auVar1,0))) >>
                                                                                                  0x40,0)));
        pauVar15[5] = CONCAT412(uVar7,CONCAT48(SUB164(auVar18 >> 0x40,0),
                                               CONCAT44(uVar5,SUB164(auVar1 >> 0x40,0))));
        pauVar15[6] = CONCAT412(uVar9,ZEXT412(uVar8) << 0x20);
        fVar19 = -1.0 / (fVar22 - fVar22 * 0.75);
        local_res8 = (longlong *)(CONCAT44(fVar19 * fVar22,fVar19) ^ 0x8000000000000000);
        *(longlong **)pauVar15[7] = local_res8;
        *(undefined4 *)(pauVar15[7] + 8) = *(undefined4 *)(param_1 + 0x1584);
        fVar19 = *(float *)(param_1 + 0x1580) * 0.5;
        fVar22 = *(float *)(param_1 + 0x1594);
        pauVar15[8] = CONCAT412((fVar22 * 0.0 - 0.5) * 65536.0,
                                CONCAT48((fVar22 * 0.0 - 0.5) * 65536.0,
                                         CONCAT44((fVar22 * (float)(int)((DAT_140c43fb8 *
                                                                          (*(float *)(param_1 + 0x398) -
                                                                           fVar19) + 0.5) *
                                                                         *(float *)(param_1 + 0x1590)) -
                                                   0.5) * 65536.0,
                                                  (fVar22 * (float)(int)((DAT_140c43fb8 *
                                                                          (*(float *)(param_1 + 0x390) -
                                                                           fVar19) + 0.5) *
                                                                         *(float *)(param_1 + 0x1590)) -
                                                   0.5) * 65536.0)));
        (**(code **)(*DAT_140c65670 + 0x108))();
    }
    (**(code **)(*DAT_140c65670 + 0x140))
            (DAT_140c65670,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x140),
             (uint)bVar10 + iVar13 * 2);
    puVar16 = (ulonglong *)(**(code **)(*DAT_140c65670 + 0x110))(DAT_140c65670,0x40,0,0,0);
    if (puVar16 != (ulonglong *)0x0) {
        uStack96 = SUB168(CONCAT412(fVar23,CONCAT48(fVar23,CONCAT44(fVar23,(float)(uint)*(byte *)(lVar14
                                                                                                  + 0x22)
        ))) >> 0x40,0);
        local_68 = CONCAT44((float)(uint)*(byte *)(lVar14 + 0x23),(float)(uint)*(byte *)(lVar14 + 0x22))
                ;
        *puVar16 = local_68;
        *(undefined4 *)(puVar16 + 1) = 0x3f000000;
        uVar4 = *(undefined4 *)(param_1 + 0x1e4);
        uVar5 = *(undefined4 *)(param_1 + 0x1e8);
        uVar6 = *(undefined4 *)(param_1 + 0x1ec);
        *(undefined4 *)(puVar16 + 2) = *(undefined4 *)(param_1 + 0x1e0);
        *(undefined4 *)((longlong)puVar16 + 0x14) = uVar4;
        *(undefined4 *)(puVar16 + 3) = uVar5;
        *(undefined4 *)((longlong)puVar16 + 0x1c) = uVar6;
        uVar4 = *(undefined4 *)(param_1 + 500);
        uVar5 = *(undefined4 *)(param_1 + 0x1f8);
        uVar6 = *(undefined4 *)(param_1 + 0x1fc);
        *(undefined4 *)(puVar16 + 4) = *(undefined4 *)(param_1 + 0x1f0);
        *(undefined4 *)((longlong)puVar16 + 0x24) = uVar4;
        *(undefined4 *)(puVar16 + 5) = uVar5;
        *(undefined4 *)((longlong)puVar16 + 0x2c) = uVar6;
        uVar4 = *(undefined4 *)(param_1 + 0x334);
        uVar5 = *(undefined4 *)(param_1 + 0x338);
        uVar6 = *(undefined4 *)(param_1 + 0x33c);
        *(undefined4 *)(puVar16 + 6) = *(undefined4 *)(param_1 + 0x330);
        *(undefined4 *)((longlong)puVar16 + 0x34) = uVar4;
        *(undefined4 *)(puVar16 + 7) = uVar5;
        *(undefined4 *)((longlong)puVar16 + 0x3c) = uVar6;
        (**(code **)(*DAT_140c65670 + 0x118))();
    }
    (**(code **)(*DAT_140c65670 + 0x178))
            (DAT_140c65670,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x148),
             (uint)((uVar3 & 0x1809023) != 0) + iVar2 * 2);
    if (bVar10) {
        local_res8 = *(longlong **)(param_1 + 0x15a8);
        if (local_res8 != (longlong *)0x0) {
            (**(code **)*local_res8)(local_res8);
        }
    }
    else {
        local_res8 = (longlong *)0x0;
        bVar12 = true;
        bVar11 = false;
    }
    (**(code **)(*DAT_140c65670 + 0x170))(DAT_140c65670,0,local_res8,0);
    if ((bVar12) && (local_res8 != (longlong *)0x0)) {
        (**(code **)(*local_res8 + 8))(local_res8);
    }
    if ((bVar11 != false) && (local_res8 != (longlong *)0x0)) {
        (**(code **)(*local_res8 + 8))(local_res8);
    }
    lVar14 = *(longlong *)(param_1 + 0x920);
    fVar22 = *(float *)(param_1 + 0x94) * *(float *)(param_1 + 0x94);
    do {
        if ((lVar14 == 0) || (fVar22 < *(float *)(lVar14 + 0x30) || fVar22 == *(float *)(lVar14 + 0x30))
                ) {
            return 0;
        }
        if (*(int *)(lVar14 + 0x310) != 0) {
            auVar1 = *(undefined (*) [16])(param_1 + 0x390);
            auVar18 = minps(auVar1,*(undefined (*) [16])(lVar14 + 0x330));
            auVar18 = maxps(*(undefined (*) [16])(lVar14 + 800),auVar18);
            fVar19 = SUB164(auVar18,0) - SUB164(auVar1,0);
            fVar20 = SUB164(auVar18 >> 0x20,0) - SUB164(auVar1 >> 0x20,0);
            fVar21 = SUB164(auVar18 >> 0x40,0) - SUB164(auVar1 >> 0x40,0);
            if (fVar19 * fVar19 + fVar20 * fVar20 + fVar21 * fVar21 < fVar22) {
                if (*(int *)(param_1 + 0x354) != 0) {
                    fVar19 = *(float *)(lVar14 + 0x334) - *(float *)(param_1 + 0x394);
                    if (fVar19 <= fVar23) {
                        fVar20 = *(float *)(lVar14 + 0x518);
                    }
                    else {
                        fVar20 = *(float *)(lVar14 + 0x514);
                    }
                    if (fVar19 * fVar20 < *(float *)(lVar14 + 0x510)) goto LAB_140362723;
                }
                iVar13 = FUN_14035bdf0(param_1);
                if (iVar13 != 0) {
                    local_68 = local_68 & 0xffffffff00000000;
                    iVar13 = FUN_14037d3e0(lVar14,&local_68);
                    if ((iVar13 != 0) && (uVar17 = FUN_140384690(lVar14), (int)uVar17 < 0)) {
                        return uVar17;
                    }
                }
            }
        }
        LAB_140362723:
        lVar14 = *(longlong *)(lVar14 + 0x590);
    } while( true );
}



undefined8 FUN_140362750(longlong param_1)

{
    longlong *plVar1;
    longlong *plVar2;
    int iVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    int iVar10;
    undefined (*pauVar11) [16];
    float *pfVar12;
    undefined8 uVar13;
    ulonglong uVar14;
    undefined4 *puVar15;
    int iVar16;
    longlong lVar17;
    int iVar18;
    int iVar19;
    uint uVar20;
    ulonglong uVar21;
    uint uVar22;
    int iVar23;
    float fVar24;
    undefined auVar25 [16];
    float fVar26;
    float fVar27;
    float fVar28;
    float fVar29;
    float fVar30;
    uint uVar31;
    ulonglong local_res20;
    undefined8 in_stack_ffffffffffffff38;

    uVar31 = (uint)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
    if (*(longlong *)(param_1 + 0x20) != 0) {
        uVar20 = *(uint *)(param_1 + 0x80) >> 0x15 & 1;
        (**(code **)(*DAT_140c65688 + 0xc0))();
        (**(code **)(*DAT_140c65670 + 0x128))();
        (**(code **)(*DAT_140c65688 + 0x50))();
        (**(code **)(*DAT_140c65670 + 400))(DAT_140c65670,1);
        (**(code **)(*DAT_140c65670 + 0x150))(DAT_140c65670,0);
        (**(code **)(*DAT_140c65670 + 0x1c0))();
        if ((*(byte *)(param_1 + 0x84) & 0x10) != 0) {
            (**(code **)(*DAT_140c65670 + 0x158))();
        }
        uVar21 = (ulonglong)uVar31 << 0x20;
        pauVar11 = (undefined (*) [16])
                (**(code **)(*DAT_140c65670 + 0x100))(DAT_140c65670,0x50,0,0,uVar21);
        if (pauVar11 != (undefined (*) [16])0x0) {
            uVar31 = *(uint *)(param_1 + 0x5d4);
            uVar4 = *(undefined4 *)(param_1 + 0x5d8);
            uVar22 = *(uint *)(param_1 + 0x5dc);
            uVar5 = *(undefined4 *)(param_1 + 0x5c8);
            uVar6 = *(undefined4 *)(param_1 + 0x5e8);
            uVar7 = *(undefined4 *)(param_1 + 0x5f4);
            uVar8 = *(undefined4 *)(param_1 + 0x5f8);
            uVar9 = *(undefined4 *)(param_1 + 0x5fc);
            *pauVar11 = CONCAT412(*(undefined4 *)(param_1 + 0x5f0),
                                  CONCAT48(*(undefined4 *)(param_1 + 0x5e0),
                                           CONCAT44(*(undefined4 *)(param_1 + 0x5d0),
                                                    *(undefined4 *)(param_1 + 0x5c0))));
            pauVar11[1] = CONCAT412(uVar7,ZEXT412(uVar31) << 0x20);
            pauVar11[2] = CONCAT412(uVar8,CONCAT48(uVar6,CONCAT44(uVar4,uVar5)));
            pauVar11[3] = CONCAT412(uVar9,ZEXT412(uVar22) << 0x20);
            uVar4 = *(undefined4 *)(param_1 + 0x364);
            uVar5 = *(undefined4 *)(param_1 + 0x368);
            uVar6 = *(undefined4 *)(param_1 + 0x36c);
            *(undefined4 *)pauVar11[4] = *(undefined4 *)(param_1 + 0x360);
            *(undefined4 *)(pauVar11[4] + 4) = uVar4;
            *(undefined4 *)(pauVar11[4] + 8) = uVar5;
            *(undefined4 *)(pauVar11[4] + 0xc) = uVar6;
            (**(code **)(*DAT_140c65670 + 0x108))();
        }
        pfVar12 = (float *)(**(code **)(*DAT_140c65670 + 0x110))
                (DAT_140c65670,0x40,0,0,uVar21 & 0xffffffff00000000);
        if (pfVar12 != (float *)0x0) {
            fVar27 = *(float *)(param_1 + 0x109c);
            fVar24 = *(float *)(param_1 + 0x10a0);
            uVar31 = 0x80000000;
            fVar29 = 1.0;
            if (fVar24 <= fVar27) {
                *pfVar12 = 0.0;
                pfVar12[1] = -1.0;
            }
            else {
                fVar26 = 1.0 / (fVar24 - fVar27);
                *pfVar12 = fVar26;
                pfVar12[1] = (float)((uint)(fVar26 * fVar27) ^ 0x80000000) - 1.0;
            }
            if (*(float *)(param_1 + 0x8c) <= fVar24) {
                pfVar12[2] = 0.0;
                pfVar12[3] = -1.0;
            }
            else {
                fVar27 = 1.0 / (fVar24 - *(float *)(param_1 + 0x8c));
                pfVar12[2] = fVar27;
                pfVar12[3] = (float)((uint)(fVar27 * *(float *)(param_1 + 0x8c)) ^ 0x80000000);
            }
            uVar13 = (**(code **)(**(longlong **)(param_1 + 0x120) + 0xe8))();
            (**(code **)(*DAT_140c65688 + 0x100))(DAT_140c65688,uVar13,pfVar12 + 4);
            fVar24 = DAT_140c44078 * 1.414214 + fVar24;
            if (DAT_140c44204 <= fVar24) {
                *(undefined8 *)(pfVar12 + 8) = 0;
            }
            else {
                fVar29 = fVar29 / (DAT_140c44204 - fVar24);
                pfVar12[8] = fVar29;
                pfVar12[9] = (float)((uint)(fVar29 * fVar24) ^ uVar31);
            }
            fVar27 = *(float *)(param_1 + 0x1014);
            fVar24 = *(float *)(param_1 + 0x1018);
            fVar29 = *(float *)(param_1 + 0x101c);
            pfVar12[0xc] = *(float *)(param_1 + 0x1010) * 2.0;
            pfVar12[0xd] = fVar27 * 2.0;
            pfVar12[0xe] = fVar24 * 2.0;
            pfVar12[0xf] = fVar29 * 2.0;
            (**(code **)(*DAT_140c65670 + 0x118))();
        }
        (**(code **)(**(longlong **)(param_1 + 0x120) + 0xe8))();
        (**(code **)(*DAT_140c65670 + 0x160))();
        iVar23 = *(int *)(param_1 + 0x984);
        fVar27 = 0.5;
        fVar24 = 0.5;
        uVar21 = 0;
        local_res20 = 0;
        fVar26 = *(float *)(param_1 + 0x8c) * 0.9 - DAT_140c44078 * 1.414214;
        fVar30 = *(float *)(param_1 + 0x88) * *(float *)(param_1 + 0x88);
        fVar29 = 0.0;
        if (0.0 <= fVar26) {
            fVar29 = fVar26;
        }
        fVar29 = fVar29 * fVar29;
        iVar16 = (int)((*(float *)(param_1 + 0x390) * DAT_140c43fb8 + 0.5) * 256.0);
        iVar19 = (int)((*(float *)(param_1 + 0x398) * DAT_140c43fb8 + 0.5) * 256.0);
        uVar14 = uVar21;
        if (iVar23 < *(int *)(param_1 + 0x98c)) {
            uVar31 = iVar23 - iVar19;
            do {
                iVar18 = *(int *)(param_1 + 0x980);
                if (iVar18 < *(int *)(param_1 + 0x988)) {
                    uVar22 = iVar18 - iVar16;
                    do {
                        iVar10 = *(int *)(param_1 + 0x978);
                        iVar3 = iVar23 % *(int *)(param_1 + 0x97c);
                        lVar17 = *(longlong *)
                                (*(longlong *)(param_1 + 0x990) +
                                 (ulonglong)
                                         ((uint)(iVar18 % iVar10 < 0) * iVar10 +
                                          ((uint)(iVar3 < 0) * *(int *)(param_1 + 0x97c) + iVar3) * iVar10 +
                                          iVar18 % iVar10) * 8);
                        if (lVar17 != 0) {
                            if (*(float *)(param_1 + 0x398) <=
                                (*(float *)(lVar17 + 0x48) + *(float *)(lVar17 + 0x38)) * fVar24) {
                                fVar26 = *(float *)(lVar17 + 0x48);
                            }
                            else {
                                fVar26 = *(float *)(lVar17 + 0x38);
                            }
                            if (*(float *)(param_1 + 0x390) <=
                                (*(float *)(lVar17 + 0x40) + *(float *)(lVar17 + 0x30)) * fVar27) {
                                fVar28 = *(float *)(lVar17 + 0x40);
                            }
                            else {
                                fVar28 = *(float *)(lVar17 + 0x30);
                            }
                            fVar28 = fVar28 - *(float *)(param_1 + 0x390);
                            fVar26 = fVar26 - *(float *)(param_1 + 0x398);
                            if (fVar30 <= fVar26 * fVar26 + fVar28 * fVar28) {
                                if (*(longlong *)(lVar17 + 0x80) != 0) {
                                    iVar10 = (**(code **)(**(longlong **)(lVar17 + 0x10) + 0x30))();
                                    if (iVar10 == 0) goto LAB_140362dc0;
                                    FUN_14038a590(lVar17);
                                    if (*(undefined8 **)(lVar17 + 0x80) != (undefined8 *)0x0) {
                                        **(undefined8 **)(lVar17 + 0x80) = *(undefined8 *)(lVar17 + 0x88);
                                    }
                                    if (*(longlong *)(lVar17 + 0x88) != 0) {
                                        *(undefined8 *)(*(longlong *)(lVar17 + 0x88) + 0x80) =
                                                *(undefined8 *)(lVar17 + 0x80);
                                    }
                                    *(undefined8 *)(lVar17 + 0x80) = 0;
                                    *(undefined8 *)(lVar17 + 0x88) = 0;
                                }
                                iVar10 = FUN_14035bdf0();
                                if (iVar10 != 0) {
                                    if (*(longlong *)(lVar17 + 0x90) != 0) {
                                        if (*(longlong *)(lVar17 + 0x80) != 0) {
                                            iVar10 = (**(code **)(**(longlong **)(lVar17 + 0x10) + 0x30))();
                                            if (iVar10 == 0) goto LAB_140362dc0;
                                            FUN_14038a590(lVar17);
                                            if (*(undefined8 **)(lVar17 + 0x80) != (undefined8 *)0x0) {
                                                **(undefined8 **)(lVar17 + 0x80) = *(undefined8 *)(lVar17 + 0x88);
                                            }
                                            if (*(longlong *)(lVar17 + 0x88) != 0) {
                                                *(undefined8 *)(*(longlong *)(lVar17 + 0x88) + 0x80) =
                                                        *(undefined8 *)(lVar17 + 0x80);
                                            }
                                            *(undefined8 *)(lVar17 + 0x80) = 0;
                                            *(undefined8 *)(lVar17 + 0x88) = 0;
                                        }
                                        FUN_14038a680(lVar17);
                                        if (*(undefined8 **)(lVar17 + 0x90) != (undefined8 *)0x0) {
                                            **(undefined8 **)(lVar17 + 0x90) = *(undefined8 *)(lVar17 + 0x98);
                                        }
                                        if (*(longlong *)(lVar17 + 0x98) != 0) {
                                            *(undefined8 *)(*(longlong *)(lVar17 + 0x98) + 0x90) =
                                                    *(undefined8 *)(lVar17 + 0x90);
                                        }
                                        *(undefined8 *)(lVar17 + 0x90) = 0;
                                        *(undefined8 *)(lVar17 + 0x98) = 0;
                                    }
                                    plVar2 = (longlong *)(param_1 + 0x9b8);
                                    if (*(longlong *)(lVar17 + 0x70) == 0) {
                                        *(longlong **)(lVar17 + 0x70) = plVar2;
                                        plVar1 = (longlong *)(lVar17 + 0x78);
                                        *plVar1 = *plVar2;
                                        *plVar2 = lVar17;
                                        if (*plVar1 != 0) {
                                            *(longlong **)(*plVar1 + 0x70) = plVar1;
                                        }
                                    }
                                    uVar21 = uVar21 + 1;
                                    auVar25 = minps(*(undefined (*) [16])(param_1 + 0x390),
                                                    *(undefined (*) [16])(lVar17 + 0x40));
                                    auVar25 = maxps(*(undefined (*) [16])(lVar17 + 0x30),auVar25);
                                    fVar26 = SUB164(auVar25,0) - *(float *)(param_1 + 0x360);
                                    fVar28 = SUB164(auVar25 >> 0x40,0) - *(float *)(param_1 + 0x368);
                                    *(uint *)(lVar17 + 0x1c) =
                                            ((uVar31 ^ (int)uVar31 >> 0x1f) - ((int)uVar31 >> 0x1f)) +
                                            ((uVar22 ^ (int)uVar22 >> 0x1f) - ((int)uVar22 >> 0x1f));
                                    *(float *)(lVar17 + 0x18) = fVar28 * fVar28 + fVar26 * fVar26;
                                }
                            }
                        }
                        LAB_140362dc0:
                        iVar18 = iVar18 + 1;
                        uVar22 = uVar22 + 1;
                        local_res20 = uVar21;
                    } while (iVar18 < *(int *)(param_1 + 0x988));
                }
                iVar23 = iVar23 + 1;
                uVar31 = uVar31 + 1;
                uVar14 = local_res20;
            } while (iVar23 < *(int *)(param_1 + 0x98c));
        }
        FUN_140370f00(param_1 + 0x9b8);
        iVar23 = 3;
        (**(code **)(*DAT_140c65670 + 0x130))
                (DAT_140c65670,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x118),6,0,uVar14);
        lVar17 = *(longlong *)(param_1 + 0x9b8);
        if (lVar17 != 0) {
            do {
                uVar14 = uVar14 & 0xffffffff00000000;
                puVar15 = (undefined4 *)(**(code **)(*DAT_140c65670 + 0x100))(DAT_140c65670,0x10,1,5,uVar14)
                        ;
                if (puVar15 != (undefined4 *)0x0) {
                    uVar4 = *(undefined4 *)(lVar17 + 0x30);
                    uVar5 = *(undefined4 *)(lVar17 + 0x38);
                    *puVar15 = uVar4;
                    puVar15[1] = uVar5;
                    puVar15[2] = uVar4;
                    puVar15[3] = uVar5;
                    (**(code **)(*DAT_140c65670 + 0x108))();
                }
                if (fVar30 <= *(float *)(lVar17 + 0x18)) {
                    if (fVar29 <= *(float *)(lVar17 + 0x18)) {
                        if (iVar23 != 2) {
                            iVar23 = 2;
                            (**(code **)(*DAT_140c65670 + 0x140))
                                    (DAT_140c65670,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x108),2);
                            uVar31 = uVar20 + 4;
                            goto LAB_140362f4a;
                        }
                    }
                    else if (iVar23 != 1) {
                        iVar23 = 1;
                        (**(code **)(*DAT_140c65670 + 0x140))
                                (DAT_140c65670,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x108),1);
                        uVar31 = uVar20 + 2;
                        LAB_140362f4a:
                        (**(code **)(*DAT_140c65670 + 0x178))
                                (DAT_140c65670,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x110),uVar31);
                    }
                }
                else if (iVar23 != 0) {
                    (**(code **)(*DAT_140c65670 + 0x140))
                            (DAT_140c65670,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x108),0);
                    iVar23 = 0;
                    uVar31 = uVar20;
                    goto LAB_140362f4a;
                }
                (**(code **)(*DAT_140c65670 + 0x138))
                        (DAT_140c65670,
                         *(undefined8 *)
                                 (*(longlong *)(param_1 + 0x10) + 0x120 +
                                  ((ulonglong)(*(int *)(lVar17 + 8) < iVar16) +
                                   (ulonglong)(*(int *)(lVar17 + 0xc) < iVar19) * 2) * 8));
                (**(code **)(*DAT_140c65670 + 0x130))
                        (DAT_140c65670,*(undefined8 *)(*(longlong *)(lVar17 + 0x20) + 0x20));
                uVar14 = uVar14 & 0xffffffff00000000;
                (**(code **)(*DAT_140c65670 + 0x290))(DAT_140c65670,3);
                if (*(undefined8 **)(lVar17 + 0x70) != (undefined8 *)0x0) {
                    **(undefined8 **)(lVar17 + 0x70) = *(undefined8 *)(lVar17 + 0x78);
                }
                if (*(longlong *)(lVar17 + 0x78) != 0) {
                    *(undefined8 *)(*(longlong *)(lVar17 + 0x78) + 0x70) = *(undefined8 *)(lVar17 + 0x70);
                }
                *(undefined8 *)(lVar17 + 0x70) = 0;
                *(undefined8 *)(lVar17 + 0x78) = 0;
                lVar17 = *(longlong *)(param_1 + 0x9b8);
            } while (lVar17 != 0);
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140363090(longlong param_1)

{
    longlong lVar1;
    longlong *plVar2;
    longlong *plVar3;
    float fVar4;
    undefined auVar5 [16];
    longlong lVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    undefined4 uVar10;
    uint uVar11;
    undefined4 uVar12;
    int iVar13;
    longlong lVar14;
    longlong lVar15;
    ulonglong uVar16;
    undefined (*pauVar17) [16];
    undefined4 *puVar18;
    undefined4 *puVar19;
    undefined8 uVar20;
    ulonglong uVar21;
    float fVar22;
    undefined auVar23 [16];
    float fVar24;

    plVar2 = (longlong *)(param_1 + 0x12b8);
    FUN_1400523e0(plVar2);
    plVar3 = (longlong *)(param_1 + 0x12d0);
    FUN_1400523e0(plVar3);
    lVar15 = *(longlong *)(param_1 + 0x920);
    if (lVar15 != 0) {
        fVar24 = 0.0;
        do {
            if (*(longlong *)(lVar15 + 0x408) != 0) {
                if (*(int *)(param_1 + 0x354) != 0) {
                    fVar22 = *(float *)(lVar15 + 0x434) - *(float *)(param_1 + 0x394);
                    if (fVar22 <= fVar24) {
                        fVar4 = *(float *)(lVar15 + 0x518);
                    }
                    else {
                        fVar4 = *(float *)(lVar15 + 0x514);
                    }
                    if (fVar22 * fVar4 < *(float *)(lVar15 + 0x510)) goto LAB_1403631a3;
                }
                iVar13 = FUN_14035bdf0(param_1,lVar15 + 0x420);
                if (iVar13 != 0) {
                    lVar6 = *(longlong *)(param_1 + 0x12c0);
                    lVar1 = lVar6 + 1;
                    lVar14 = FUN_14018db00(*plVar2,lVar1,8);
                    *(longlong *)(lVar14 + lVar6 * 8) = lVar15;
                    if (*plVar2 != lVar14) {
                        FUN_1407db590(lVar14,*plVar2,*(longlong *)(param_1 + 0x12c0) << 3);
                        lVar6 = *plVar2;
                        if (lVar6 != 0) {
                            (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))(lVar6 + -0x10);
                        }
                        *plVar2 = lVar14;
                    }
                    *(longlong *)(param_1 + 0x12c0) = lVar1;
                }
            }
            LAB_1403631a3:
            if ((*(byte *)(lVar15 + 0x460) & 1) != 0) {
                if (*(int *)(param_1 + 0x354) != 0) {
                    fVar22 = *(float *)(lVar15 + 0x4b4) - *(float *)(param_1 + 0x394);
                    if (fVar22 <= fVar24) {
                        fVar4 = *(float *)(lVar15 + 0x518);
                    }
                    else {
                        fVar4 = *(float *)(lVar15 + 0x514);
                    }
                    if (fVar22 * fVar4 < *(float *)(lVar15 + 0x510)) goto LAB_140363256;
                }
                iVar13 = FUN_14035bdf0(param_1,lVar15 + 0x4a0);
                if (iVar13 != 0) {
                    lVar6 = *(longlong *)(param_1 + 0x12d8);
                    lVar1 = lVar6 + 1;
                    lVar14 = FUN_14018db00(*plVar3,lVar1,8);
                    *(longlong *)(lVar14 + lVar6 * 8) = lVar15;
                    if (*plVar3 != lVar14) {
                        FUN_1407db590(lVar14,*plVar3,*(longlong *)(param_1 + 0x12d8) << 3);
                        lVar6 = *plVar3;
                        if (lVar6 != 0) {
                            (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))(lVar6 + -0x10);
                        }
                        *plVar3 = lVar14;
                    }
                    *(longlong *)(param_1 + 0x12d8) = lVar1;
                }
            }
            LAB_140363256:
            lVar15 = *(longlong *)(lVar15 + 0x590);
        } while (lVar15 != 0);
    }
    if ((*(longlong *)(param_1 + 0x12c0) != 0) || (*(longlong *)(param_1 + 0x12d8) != 0)) {
        lVar15 = (**(code **)(*DAT_140c65688 + 0xc0))();
        (**(code **)(*DAT_140c65670 + 0x160))(DAT_140c65670,0,*(undefined8 *)(lVar15 + 0x28),0,0);
        uVar16 = (**(code **)(*DAT_140c65688 + 0xd8))();
        (**(code **)(*DAT_140c65670 + 0x160))(DAT_140c65670,1,*(undefined8 *)(lVar15 + 0x48),0,uVar16);
        if ((*(uint *)(param_1 + 0x84) & 0x8000000) != 0) {
            (**(code **)(*DAT_140c65670 + 0x158))(DAT_140c65670,0);
        }
        if (*(longlong *)(param_1 + 0x12d8) != 0) {
            uVar16 = uVar16 & 0xffffffff00000000;
            pauVar17 = (undefined (*) [16])
                    (**(code **)(*DAT_140c65670 + 0x100))(DAT_140c65670,0x80,0,0,uVar16);
            if (pauVar17 != (undefined (*) [16])0x0) {
                uVar7 = *(undefined4 *)(param_1 + 0x3d4);
                uVar8 = *(undefined4 *)(param_1 + 0x3d8);
                uVar9 = *(undefined4 *)(param_1 + 0x3f4);
                uVar10 = *(undefined4 *)(param_1 + 0x3f8);
                auVar5 = *(undefined (*) [16])(param_1 + 0x3c0);
                auVar23 = *(undefined (*) [16])(param_1 + 0x3e0);
                *pauVar17 = CONCAT412(*(undefined4 *)(param_1 + 0x3f0),
                                      CONCAT48(SUB164(auVar23,0),
                                               SUB168(auVar5,0) & 0xffffffff |
                                               (ulonglong)*(uint *)(param_1 + 0x3d0) << 0x20)) &
                            (undefined  [16])0xffffffffffffffff;
                pauVar17[1] = CONCAT412(uVar9,CONCAT48(SUB164(auVar23 >> 0x20,0),
                                                       SUB168(CONCAT412(uVar7,CONCAT48(SUB164(auVar5 >> 0x20
                                                                                               ,0),
                                                                                       SUB168(auVar5,0))) >>
                                                                                                          0x40,0)));
                pauVar17[2] = CONCAT412(uVar10,CONCAT48(SUB164(auVar23 >> 0x40,0),
                                                        CONCAT44(uVar8,SUB164(auVar5 >> 0x40,0))));
                uVar7 = *(undefined4 *)(param_1 + 0x514);
                uVar8 = *(undefined4 *)(param_1 + 0x518);
                uVar11 = *(uint *)(param_1 + 0x51c);
                auVar5 = *(undefined (*) [16])(param_1 + 0x500);
                auVar23 = *(undefined (*) [16])(param_1 + 0x520);
                uVar9 = *(undefined4 *)(param_1 + 0x534);
                uVar10 = *(undefined4 *)(param_1 + 0x538);
                uVar12 = *(undefined4 *)(param_1 + 0x53c);
                pauVar17[3] = CONCAT412(*(undefined4 *)(param_1 + 0x530),
                                        CONCAT48(SUB164(auVar23,0),
                                                 SUB168(auVar5,0) & 0xffffffff |
                                                 (ulonglong)*(uint *)(param_1 + 0x510) << 0x20)) &
                              (undefined  [16])0xffffffffffffffff;
                pauVar17[4] = CONCAT412(uVar9,CONCAT48(SUB164(auVar23 >> 0x20,0),
                                                       SUB168(CONCAT412(uVar7,CONCAT48(SUB164(auVar5 >> 0x20
                                                                                               ,0),
                                                                                       SUB168(auVar5,0))) >>
                                                                                                          0x40,0)));
                pauVar17[5] = CONCAT412(uVar10,CONCAT48(SUB164(auVar23 >> 0x40,0),
                                                        CONCAT44(uVar8,SUB164(auVar5 >> 0x40,0))));
                pauVar17[6] = CONCAT412(uVar12,ZEXT412(uVar11) << 0x20);
                *(float *)pauVar17[7] = (float)(ulonglong)*(uint *)(*(longlong *)(param_1 + 0x12c8) + 0x24);
                (**(code **)(*DAT_140c65670 + 0x108))();
            }
            uVar16 = uVar16 & 0xffffffff00000000;
            puVar18 = (undefined4 *)(**(code **)(*DAT_140c65670 + 0x110))(DAT_140c65670,0x60,0,0,uVar16);
            if (puVar18 != (undefined4 *)0x0) {
                puVar19 = (undefined4 *)(**(code **)(*DAT_140c65688 + 0xe8))();
                uVar7 = puVar19[1];
                uVar8 = puVar19[2];
                uVar9 = puVar19[3];
                *puVar18 = *puVar19;
                puVar18[1] = uVar7;
                puVar18[2] = uVar8;
                puVar18[3] = uVar9;
                auVar5 = *(undefined (*) [16])(param_1 + 0x440);
                uVar7 = *(undefined4 *)(param_1 + 0x454);
                uVar8 = *(undefined4 *)(param_1 + 0x458);
                auVar23 = *(undefined (*) [16])(param_1 + 0x460);
                uVar9 = *(undefined4 *)(param_1 + 0x474);
                uVar10 = *(undefined4 *)(param_1 + 0x478);
                *(undefined (*) [16])(puVar18 + 4) =
                        CONCAT412(*(undefined4 *)(param_1 + 0x470),
                                  CONCAT48(SUB164(auVar23,0),
                                           SUB168(auVar5,0) & 0xffffffff |
                                           (ulonglong)*(uint *)(param_1 + 0x450) << 0x20)) &
                        (undefined  [16])0xffffffffffffffff;
                *(undefined (*) [16])(puVar18 + 8) =
                        CONCAT412(uVar9,CONCAT48(SUB164(auVar23 >> 0x20,0),
                                                 SUB168(CONCAT412(uVar7,CONCAT48(SUB164(auVar5 >> 0x20,0),
                                                                                 SUB168(auVar5,0))) >> 0x40,0))
                        );
                *(undefined (*) [16])(puVar18 + 0xc) =
                        CONCAT412(uVar10,CONCAT48(SUB164(auVar23 >> 0x40,0),
                                                  CONCAT44(uVar8,SUB164(auVar5 >> 0x40,0))));
                lVar15 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))();
                puVar18[0x10] = *(undefined4 *)(lVar15 + 0x14);
                puVar19 = (undefined4 *)(**(code **)(*DAT_140c65688 + 0xf8))();
                uVar7 = puVar19[1];
                uVar8 = puVar19[2];
                uVar9 = puVar19[3];
                puVar18[0x14] = *puVar19;
                puVar18[0x15] = uVar7;
                puVar18[0x16] = uVar8;
                puVar18[0x17] = uVar9;
                (**(code **)(*DAT_140c65670 + 0x118))();
            }
            (**(code **)(*DAT_140c65670 + 0x140))
                    (DAT_140c65670,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xb8),0);
            (**(code **)(*DAT_140c65670 + 0x178))
                    (DAT_140c65670,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xc0),0);
            (**(code **)(*DAT_140c65670 + 0x150))
                    (DAT_140c65670,(*(int *)(param_1 + 0x10f0) != 0) + '\x01');
            (**(code **)(*DAT_140c65670 + 0x130))
                    (DAT_140c65670,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xd8),0x12);
            lVar15 = (**(code **)(*DAT_140c65670 + 0xe0))
                    (DAT_140c65670,(int)*(undefined8 *)(param_1 + 0x12d8) * 8,0x12);
            auVar5 = _DAT_140b7b490;
            if (lVar15 != 0) {
                uVar21 = 0;
                if (*(longlong *)(param_1 + 0x12d8) != 0) {
                    do {
                        uVar21 = uVar21 + 1;
                        lVar1 = *(longlong *)(*plVar3 + -8 + uVar21 * 8);
                        auVar23 = divps(ZEXT816(CONCAT44((float)*(int *)(lVar1 + 0xc),
                                                         (float)(int)*(undefined8 *)(lVar1 + 8))),auVar5);
                        *(ulonglong *)(lVar15 + -8 + uVar21 * 8) =
                                CONCAT44((SUB164(auVar23 >> 0x20,0) - 0.5) * 65536.0,
                                         (SUB164(auVar23,0) - 0.5) * 65536.0);
                    } while (uVar21 < *(ulonglong *)(param_1 + 0x12d8));
                }
                (**(code **)(*DAT_140c65670 + 0xe8))();
            }
            uVar16 = uVar16 & 0xffffffff00000000 | (ulonglong)*(uint *)(param_1 + 0x12d8);
            (**(code **)(*DAT_140c65670 + 0x288))(DAT_140c65670,4,0,4,uVar16);
        }
        if (*(longlong *)(param_1 + 0x12c0) != 0) {
            uVar16 = uVar16 & 0xffffffff00000000;
            pauVar17 = (undefined (*) [16])
                    (**(code **)(*DAT_140c65670 + 0x100))(DAT_140c65670,0x70,0,0,uVar16);
            if (pauVar17 != (undefined (*) [16])0x0) {
                uVar7 = *(undefined4 *)(param_1 + 0x3d4);
                uVar8 = *(undefined4 *)(param_1 + 0x3d8);
                uVar9 = *(undefined4 *)(param_1 + 0x3f4);
                uVar10 = *(undefined4 *)(param_1 + 0x3f8);
                auVar5 = *(undefined (*) [16])(param_1 + 0x3c0);
                auVar23 = *(undefined (*) [16])(param_1 + 0x3e0);
                *pauVar17 = CONCAT412(*(undefined4 *)(param_1 + 0x3f0),
                                      CONCAT48(SUB164(auVar23,0),
                                               SUB168(auVar5,0) & 0xffffffff |
                                               (ulonglong)*(uint *)(param_1 + 0x3d0) << 0x20)) &
                            (undefined  [16])0xffffffffffffffff;
                pauVar17[1] = CONCAT412(uVar9,CONCAT48(SUB164(auVar23 >> 0x20,0),
                                                       SUB168(CONCAT412(uVar7,CONCAT48(SUB164(auVar5 >> 0x20
                                                                                               ,0),
                                                                                       SUB168(auVar5,0))) >>
                                                                                                          0x40,0)));
                pauVar17[2] = CONCAT412(uVar10,CONCAT48(SUB164(auVar23 >> 0x40,0),
                                                        CONCAT44(uVar8,SUB164(auVar5 >> 0x40,0))));
                uVar7 = *(undefined4 *)(param_1 + 0x514);
                uVar8 = *(undefined4 *)(param_1 + 0x518);
                uVar11 = *(uint *)(param_1 + 0x51c);
                auVar5 = *(undefined (*) [16])(param_1 + 0x500);
                auVar23 = *(undefined (*) [16])(param_1 + 0x520);
                uVar9 = *(undefined4 *)(param_1 + 0x534);
                uVar10 = *(undefined4 *)(param_1 + 0x538);
                uVar12 = *(undefined4 *)(param_1 + 0x53c);
                pauVar17[3] = CONCAT412(*(undefined4 *)(param_1 + 0x530),
                                        CONCAT48(SUB164(auVar23,0),
                                                 SUB168(auVar5,0) & 0xffffffff |
                                                 (ulonglong)*(uint *)(param_1 + 0x510) << 0x20)) &
                              (undefined  [16])0xffffffffffffffff;
                pauVar17[4] = CONCAT412(uVar9,CONCAT48(SUB164(auVar23 >> 0x20,0),
                                                       SUB168(CONCAT412(uVar7,CONCAT48(SUB164(auVar5 >> 0x20
                                                                                               ,0),
                                                                                       SUB168(auVar5,0))) >>
                                                                                                          0x40,0)));
                pauVar17[5] = CONCAT412(uVar10,CONCAT48(SUB164(auVar23 >> 0x40,0),
                                                        CONCAT44(uVar8,SUB164(auVar5 >> 0x40,0))));
                pauVar17[6] = CONCAT412(uVar12,ZEXT412(uVar11) << 0x20);
                (**(code **)(*DAT_140c65670 + 0x108))();
            }
            puVar18 = (undefined4 *)
                    (**(code **)(*DAT_140c65670 + 0x110))
                    (DAT_140c65670,0x50,0,0,uVar16 & 0xffffffff00000000);
            if (puVar18 != (undefined4 *)0x0) {
                puVar19 = (undefined4 *)(**(code **)(*DAT_140c65688 + 0xe8))();
                uVar7 = puVar19[1];
                uVar8 = puVar19[2];
                uVar9 = puVar19[3];
                *puVar18 = *puVar19;
                puVar18[1] = uVar7;
                puVar18[2] = uVar8;
                puVar18[3] = uVar9;
                auVar5 = *(undefined (*) [16])(param_1 + 0x440);
                uVar7 = *(undefined4 *)(param_1 + 0x454);
                uVar8 = *(undefined4 *)(param_1 + 0x458);
                auVar23 = *(undefined (*) [16])(param_1 + 0x460);
                uVar9 = *(undefined4 *)(param_1 + 0x474);
                uVar10 = *(undefined4 *)(param_1 + 0x478);
                *(undefined (*) [16])(puVar18 + 4) =
                        CONCAT412(*(undefined4 *)(param_1 + 0x470),
                                  CONCAT48(SUB164(auVar23,0),
                                           SUB168(auVar5,0) & 0xffffffff |
                                           (ulonglong)*(uint *)(param_1 + 0x450) << 0x20)) &
                        (undefined  [16])0xffffffffffffffff;
                *(undefined (*) [16])(puVar18 + 8) =
                        CONCAT412(uVar9,CONCAT48(SUB164(auVar23 >> 0x20,0),
                                                 SUB168(CONCAT412(uVar7,CONCAT48(SUB164(auVar5 >> 0x20,0),
                                                                                 SUB168(auVar5,0))) >> 0x40,0))
                        );
                *(undefined (*) [16])(puVar18 + 0xc) =
                        CONCAT412(uVar10,CONCAT48(SUB164(auVar23 >> 0x40,0),
                                                  CONCAT44(uVar8,SUB164(auVar5 >> 0x40,0))));
                puVar19 = (undefined4 *)(**(code **)(*DAT_140c65688 + 0xf8))();
                uVar7 = puVar19[1];
                uVar8 = puVar19[2];
                uVar9 = puVar19[3];
                puVar18[0x10] = *puVar19;
                puVar18[0x11] = uVar7;
                puVar18[0x12] = uVar8;
                puVar18[0x13] = uVar9;
                (**(code **)(*DAT_140c65670 + 0x118))();
            }
            (**(code **)(*DAT_140c65670 + 0x140))
                    (DAT_140c65670,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x98),0);
            (**(code **)(*DAT_140c65670 + 0x178))
                    (DAT_140c65670,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xa0),0);
            (**(code **)(*DAT_140c65670 + 0x150))
                    (DAT_140c65670,2 - (uint)(*(int *)(param_1 + 0x10f0) != 0));
            lVar15 = *(longlong *)(param_1 + 0x12c0);
            while (lVar15 != 0) {
                // WARNING: Read-only address (ram,0x000140b7b490) is written
                lVar1 = *(longlong *)(*plVar2 + -8 + lVar15 * 8);
                lVar15 = lVar15 + -1;
                (**(code **)(*DAT_140c65670 + 0x1d0))(DAT_140c65670,1,0);
                uVar16 = 0;
                if (*(longlong *)(lVar1 + 0x408) != 0) {
                    do {
                        if ((*(longlong *)(*(longlong *)(lVar1 + 0x410) + uVar16 * 8) != 0) &&
                            (uVar20 = FUN_140393160(), (int)uVar20 < 0)) {
                            return uVar20;
                        }
                        uVar16 = (ulonglong)((int)uVar16 + 1);
                    } while (uVar16 < *(ulonglong *)(lVar1 + 0x408));
                }
            }
        }
    }
    // WARNING: Read-only address (ram,0x000140b7b490) is written
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1403638c0(longlong param_1)

{
    undefined auVar1 [16];
    undefined auVar2 [16];
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    uint uVar8;
    int iVar9;
    int iVar10;
    longlong lVar11;
    undefined8 *puVar12;
    longlong lVar13;
    undefined (*pauVar14) [16];
    undefined4 *puVar15;
    undefined4 *puVar16;
    undefined8 uVar17;
    ulonglong uVar18;
    ulonglong uVar19;
    float fVar20;
    ulonglong uVar21;

    if ((*(longlong *)(param_1 + 0x12c0) == 0) && (*(longlong *)(param_1 + 0x12d8) == 0)) {
        return 0;
    }
    lVar11 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))();
    (**(code **)(*DAT_140c65688 + 0x50))();
    (**(code **)(*DAT_140c65670 + 0x128))();
    (**(code **)(*DAT_140c65670 + 0x150))(DAT_140c65670,0);
    if ((*(uint *)(param_1 + 0x84) & 0x8000000) != 0) {
        (**(code **)(*DAT_140c65670 + 0x158))(DAT_140c65670,0);
    }
    puVar12 = (undefined8 *)(**(code **)(*DAT_140c65688 + 0xc0))();
    uVar19 = 0;
    (**(code **)(*DAT_140c65670 + 0x160))(DAT_140c65670,10,*puVar12,0,0);
    lVar13 = (**(code **)(*DAT_140c65688 + 0xc0))();
    (**(code **)(*DAT_140c65670 + 0x160))(DAT_140c65670,0xb,*(undefined8 *)(lVar13 + 0x30),0,0);
    lVar13 = (**(code **)(*DAT_140c65688 + 0xc0))();
    uVar21 = 0;
    (**(code **)(*DAT_140c65670 + 0x160))(DAT_140c65670,0xc,*(undefined8 *)(lVar13 + 0x38),0,0);
    fVar20 = 0.0;
    if (*(longlong *)(param_1 + 0x12c0) != 0) {
        (**(code **)(*DAT_140c65670 + 0x140))
                (DAT_140c65670,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xa8),0);
        uVar21 = uVar21 & 0xffffffff00000000;
        pauVar14 = (undefined (*) [16])
                (**(code **)(*DAT_140c65670 + 0x100))(DAT_140c65670,0xb0,0,0,uVar21);
        if (pauVar14 != (undefined (*) [16])0x0) {
            uVar3 = *(undefined4 *)(param_1 + 0x3d4);
            uVar4 = *(undefined4 *)(param_1 + 0x3d8);
            uVar5 = *(undefined4 *)(param_1 + 0x3f4);
            uVar6 = *(undefined4 *)(param_1 + 0x3f8);
            auVar1 = *(undefined (*) [16])(param_1 + 0x3c0);
            uVar7 = *(undefined4 *)(param_1 + 1000);
            *pauVar14 = CONCAT412(*(undefined4 *)(param_1 + 0x3f0),
                                  CONCAT48(*(undefined4 *)(param_1 + 0x3e0),
                                           SUB168(auVar1,0) & 0xffffffff |
                                           (ulonglong)*(uint *)(param_1 + 0x3d0) << 0x20));
            pauVar14[1] = CONCAT412(uVar5,ZEXT812(SUB168(CONCAT412(uVar3,CONCAT48(SUB164(auVar1 >> 0x20,0)
                    ,SUB168(auVar1,0))) >>
                                        0x40,0)));
            pauVar14[2] = CONCAT412(uVar6,CONCAT48(uVar7,CONCAT44(uVar4,SUB164(auVar1 >> 0x40,0))));
            uVar3 = *(undefined4 *)(param_1 + 0x514);
            uVar4 = *(undefined4 *)(param_1 + 0x518);
            uVar8 = *(uint *)(param_1 + 0x51c);
            uVar5 = *(undefined4 *)(param_1 + 0x534);
            uVar6 = *(undefined4 *)(param_1 + 0x538);
            uVar7 = *(undefined4 *)(param_1 + 0x53c);
            auVar1 = *(undefined (*) [16])(param_1 + 0x500);
            auVar2 = *(undefined (*) [16])(param_1 + 0x520);
            pauVar14[3] = CONCAT412(*(undefined4 *)(param_1 + 0x530),
                                    CONCAT48(SUB164(auVar2,0),
                                             SUB168(auVar1,0) & 0xffffffff |
                                             (ulonglong)*(uint *)(param_1 + 0x510) << 0x20)) &
                          (undefined  [16])0xffffffffffffffff;
            pauVar14[4] = CONCAT412(uVar5,CONCAT48(SUB164(auVar2 >> 0x20,0),
                                                   SUB168(CONCAT412(uVar3,CONCAT48(SUB164(auVar1 >> 0x20,0
                                                   ),SUB168(auVar1,0
                                                   ))) >> 0x40,0)));
            pauVar14[5] = CONCAT412(uVar6,CONCAT48(SUB164(auVar2 >> 0x40,0),
                                                   CONCAT44(uVar4,SUB164(auVar1 >> 0x40,0))));
            pauVar14[6] = CONCAT412(uVar7,ZEXT412(uVar8) << 0x20);
            pauVar14[7] = CONCAT412(-1.0 / DAT_140c44018,*(undefined (*) [12])(param_1 + 0x390));
            uVar3 = *(undefined4 *)(param_1 + 0xe64);
            uVar4 = *(undefined4 *)(param_1 + 0xe68);
            uVar5 = *(undefined4 *)(param_1 + 0xe6c);
            *(undefined4 *)pauVar14[8] = *(undefined4 *)(param_1 + 0xe60);
            *(undefined4 *)(pauVar14[8] + 4) = uVar3;
            *(undefined4 *)(pauVar14[8] + 8) = uVar4;
            *(undefined4 *)(pauVar14[8] + 0xc) = uVar5;
            *(undefined4 *)pauVar14[9] = *(undefined4 *)(param_1 + 0xe40);
            *(undefined4 *)(pauVar14[9] + 4) = *(undefined4 *)(param_1 + 0xe44);
            *(undefined4 *)(pauVar14[9] + 8) = *(undefined4 *)(param_1 + 0xe48);
            *(undefined4 *)(pauVar14[9] + 0xc) = *(undefined4 *)(param_1 + 0x1064);
            *(undefined4 *)pauVar14[10] = *(undefined4 *)(param_1 + 0xe50);
            *(undefined4 *)(pauVar14[10] + 4) = *(undefined4 *)(param_1 + 0xe54);
            *(undefined4 *)(pauVar14[10] + 8) = *(undefined4 *)(param_1 + 0xe58);
            *(undefined4 *)(pauVar14[10] + 0xc) = *(undefined4 *)(param_1 + 0x1060);
            (**(code **)(*DAT_140c65670 + 0x108))();
        }
        uVar21 = uVar21 & 0xffffffff00000000;
        puVar15 = (undefined4 *)(**(code **)(*DAT_140c65670 + 0x110))(DAT_140c65670,0xa0,0,0,uVar21);
        if (puVar15 != (undefined4 *)0x0) {
            uVar3 = *(undefined4 *)(param_1 + 0xe64);
            uVar4 = *(undefined4 *)(param_1 + 0xe68);
            uVar5 = *(undefined4 *)(param_1 + 0xe6c);
            *puVar15 = *(undefined4 *)(param_1 + 0xe60);
            puVar15[1] = uVar3;
            puVar15[2] = uVar4;
            puVar15[3] = uVar5;
            puVar15[4] = *(undefined4 *)(param_1 + 0xe40);
            puVar15[5] = *(undefined4 *)(param_1 + 0xe44);
            puVar15[6] = *(undefined4 *)(param_1 + 0xe48);
            puVar15[7] = *(undefined4 *)(param_1 + 0x1064);
            puVar15[8] = *(undefined4 *)(param_1 + 0xe50);
            puVar15[9] = *(undefined4 *)(param_1 + 0xe54);
            puVar15[10] = *(undefined4 *)(param_1 + 0xe58);
            puVar15[0xb] = *(undefined4 *)(param_1 + 0x1060);
            iVar9 = DAT_140c44240;
            if (*DAT_140c63750 < DAT_140c44240) {
                iVar9 = *DAT_140c63750;
            }
            puVar15[0xc] = *(undefined4 *)(&DAT_140c44250 + (longlong)iVar9 * 4);
            puVar15[0xd] = 0x3f800000;
            uVar3 = *(undefined4 *)(param_1 + 0x474);
            uVar4 = *(undefined4 *)(param_1 + 0x478);
            auVar1 = *(undefined (*) [16])(param_1 + 0x440);
            uVar5 = *(undefined4 *)(param_1 + 0x454);
            uVar6 = *(undefined4 *)(param_1 + 0x458);
            uVar7 = *(undefined4 *)(param_1 + 0x468);
            *(undefined (*) [16])(puVar15 + 0x10) =
                    CONCAT412(*(undefined4 *)(param_1 + 0x470),
                              CONCAT48(*(undefined4 *)(param_1 + 0x460),
                                       SUB168(auVar1,0) & 0xffffffff |
                                       (ulonglong)*(uint *)(param_1 + 0x450) << 0x20));
            *(undefined (*) [16])(puVar15 + 0x14) =
                    CONCAT412(uVar3,ZEXT812(SUB168(CONCAT412(uVar5,CONCAT48(SUB164(auVar1 >> 0x20,0),
                                                                            SUB168(auVar1,0))) >> 0x40,0)));
            *(undefined (*) [16])(puVar15 + 0x18) =
                    CONCAT412(uVar4,CONCAT48(uVar7,CONCAT44(uVar6,SUB164(auVar1 >> 0x40,0))));
            *(ulonglong *)(puVar15 + 0x1c) =
                    CONCAT44((float)(uint)*(byte *)(lVar11 + 0x25),(float)(uint)*(byte *)(lVar11 + 0x24));
            puVar16 = (undefined4 *)(**(code **)(*DAT_140c65688 + 0xe8))(fVar20,fVar20);
            uVar3 = puVar16[1];
            uVar4 = puVar16[2];
            uVar5 = puVar16[3];
            puVar15[0x20] = *puVar16;
            puVar15[0x21] = uVar3;
            puVar15[0x22] = uVar4;
            puVar15[0x23] = uVar5;
            puVar16 = (undefined4 *)(**(code **)(*DAT_140c65688 + 0xf0))();
            uVar3 = puVar16[1];
            uVar4 = puVar16[2];
            uVar5 = puVar16[3];
            puVar15[0x24] = *puVar16;
            puVar15[0x25] = uVar3;
            puVar15[0x26] = uVar4;
            puVar15[0x27] = uVar5;
            (**(code **)(*DAT_140c65670 + 0x118))();
        }
        uVar18 = uVar19;
        if (*(longlong *)(param_1 + 0x12c0) != 0) {
            do {
                uVar17 = FUN_140384d10(*(undefined8 *)(*(longlong *)(param_1 + 0x12b8) + uVar18 * 8));
                if ((int)uVar17 < 0) {
                    return uVar17;
                }
                uVar18 = uVar18 + 1;
            } while (uVar18 < *(ulonglong *)(param_1 + 0x12c0));
        }
    }
    if (*(longlong *)(param_1 + 0x12d8) != 0) {
        uVar21 = uVar21 & 0xffffffff00000000;
        pauVar14 = (undefined (*) [16])
                (**(code **)(*DAT_140c65670 + 0x100))(DAT_140c65670,0x70,0,0,uVar21);
        if (pauVar14 != (undefined (*) [16])0x0) {
            uVar3 = *(undefined4 *)(param_1 + 0x3d4);
            uVar4 = *(undefined4 *)(param_1 + 0x3d8);
            uVar5 = *(undefined4 *)(param_1 + 0x3f4);
            uVar6 = *(undefined4 *)(param_1 + 0x3f8);
            auVar1 = *(undefined (*) [16])(param_1 + 0x3c0);
            uVar7 = *(undefined4 *)(param_1 + 1000);
            *pauVar14 = CONCAT412(*(undefined4 *)(param_1 + 0x3f0),
                                  CONCAT48(*(undefined4 *)(param_1 + 0x3e0),
                                           SUB168(auVar1,0) & 0xffffffff |
                                           (ulonglong)*(uint *)(param_1 + 0x3d0) << 0x20));
            pauVar14[1] = CONCAT412(uVar5,ZEXT812(SUB168(CONCAT412(uVar3,CONCAT48(SUB164(auVar1 >> 0x20,0)
                    ,SUB168(auVar1,0))) >>
                                        0x40,0)));
            pauVar14[2] = CONCAT412(uVar6,CONCAT48(uVar7,CONCAT44(uVar4,SUB164(auVar1 >> 0x40,0))));
            uVar3 = *(undefined4 *)(param_1 + 0x514);
            uVar4 = *(undefined4 *)(param_1 + 0x518);
            uVar8 = *(uint *)(param_1 + 0x51c);
            auVar1 = *(undefined (*) [16])(param_1 + 0x500);
            auVar2 = *(undefined (*) [16])(param_1 + 0x520);
            uVar5 = *(undefined4 *)(param_1 + 0x534);
            uVar6 = *(undefined4 *)(param_1 + 0x538);
            uVar7 = *(undefined4 *)(param_1 + 0x53c);
            pauVar14[3] = CONCAT412(*(undefined4 *)(param_1 + 0x530),
                                    CONCAT48(SUB164(auVar2,0),
                                             SUB168(auVar1,0) & 0xffffffff |
                                             (ulonglong)*(uint *)(param_1 + 0x510) << 0x20)) &
                          (undefined  [16])0xffffffffffffffff;
            pauVar14[4] = CONCAT412(uVar5,CONCAT48(SUB164(auVar2 >> 0x20,0),
                                                   SUB168(CONCAT412(uVar3,CONCAT48(SUB164(auVar1 >> 0x20,0
                                                   ),SUB168(auVar1,0
                                                   ))) >> 0x40,0)));
            pauVar14[5] = CONCAT412(uVar6,CONCAT48(SUB164(auVar2 >> 0x40,0),
                                                   CONCAT44(uVar4,SUB164(auVar1 >> 0x40,0))));
            pauVar14[6] = CONCAT412(uVar7,ZEXT412(uVar8) << 0x20);
            (**(code **)(*DAT_140c65670 + 0x108))();
        }
        puVar12 = (undefined8 *)
                (**(code **)(*DAT_140c65670 + 0x110))
                (DAT_140c65670,0x50,0,0,uVar21 & 0xffffffff00000000);
        if (puVar12 != (undefined8 *)0x0) {
            *puVar12 = CONCAT44((float)(uint)*(byte *)(lVar11 + 0x27),
                                (float)(uint)*(byte *)(lVar11 + 0x26));
            iVar9 = DAT_140c443a0;
            if (*DAT_140c63750 < DAT_140c443a0) {
                iVar9 = *DAT_140c63750;
            }
            *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(&DAT_140c443b0 + (longlong)iVar9 * 4);
            *(undefined4 *)((longlong)puVar12 + 0xc) = *(undefined4 *)(param_1 + 0x12a8);
            puVar15 = (undefined4 *)(**(code **)(*DAT_140c65688 + 0xe8))(fVar20,fVar20);
            uVar3 = puVar15[1];
            uVar4 = puVar15[2];
            uVar5 = puVar15[3];
            *(undefined4 *)(puVar12 + 2) = *puVar15;
            *(undefined4 *)((longlong)puVar12 + 0x14) = uVar3;
            *(undefined4 *)(puVar12 + 3) = uVar4;
            *(undefined4 *)((longlong)puVar12 + 0x1c) = uVar5;
            puVar15 = (undefined4 *)(**(code **)(*DAT_140c65688 + 0xf0))();
            uVar3 = puVar15[1];
            uVar4 = puVar15[2];
            uVar5 = puVar15[3];
            *(undefined4 *)(puVar12 + 4) = *puVar15;
            *(undefined4 *)((longlong)puVar12 + 0x24) = uVar3;
            *(undefined4 *)(puVar12 + 5) = uVar4;
            *(undefined4 *)((longlong)puVar12 + 0x2c) = uVar5;
            lVar11 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))();
            if (*(int *)(lVar11 + 0x1c) == 0) {
                (**(code **)(*DAT_140c65670 + 0x160))
                        (DAT_140c65670,0xd,*(undefined8 *)(&DAT_000015b0 + param_1),0,0);
                (**(code **)(*DAT_140c65670 + 0x160))
                        (DAT_140c65670,0xe,*(undefined8 *)(param_1 + 0x15b8),0,0);
                uVar5 = uRam0000000140c7786c;
                uVar4 = uRam0000000140c77868;
                uVar3 = uRam0000000140c77864;
                *(undefined4 *)(puVar12 + 6) = _DAT_140c77860;
                *(undefined4 *)((longlong)puVar12 + 0x34) = uVar3;
                *(undefined4 *)(puVar12 + 7) = uVar4;
                *(undefined4 *)((longlong)puVar12 + 0x3c) = uVar5;
                uVar5 = uRam0000000140c7787c;
                uVar4 = uRam0000000140c77878;
                uVar3 = uRam0000000140c77874;
                *(undefined4 *)(puVar12 + 8) = _DAT_140c77870;
                *(undefined4 *)((longlong)puVar12 + 0x44) = uVar3;
                *(undefined4 *)(puVar12 + 9) = uVar4;
                *(undefined4 *)((longlong)puVar12 + 0x4c) = uVar5;
            }
            else {
                (**(code **)(*DAT_140c65670 + 0x160))
                        (DAT_140c65670,0xd,*(undefined8 *)(*(longlong *)(param_1 + 0x12a0) + 0x50));
                (**(code **)(*DAT_140c65670 + 0x160))
                        (DAT_140c65670,0xe,*(undefined8 *)(*(longlong *)(param_1 + 0x12a0) + 0x58),0,0);
                lVar11 = *(longlong *)(param_1 + 0x12a0);
                uVar3 = *(undefined4 *)(lVar11 + 0x84);
                uVar4 = *(undefined4 *)(lVar11 + 0x88);
                uVar5 = *(undefined4 *)(lVar11 + 0x8c);
                *(undefined4 *)(puVar12 + 6) = *(undefined4 *)(lVar11 + 0x80);
                *(undefined4 *)((longlong)puVar12 + 0x34) = uVar3;
                *(undefined4 *)(puVar12 + 7) = uVar4;
                *(undefined4 *)((longlong)puVar12 + 0x3c) = uVar5;
                uVar3 = *(undefined4 *)(lVar11 + 0x94);
                uVar4 = *(undefined4 *)(lVar11 + 0x98);
                uVar5 = *(undefined4 *)(lVar11 + 0x9c);
                *(undefined4 *)(puVar12 + 8) = *(undefined4 *)(lVar11 + 0x90);
                *(undefined4 *)((longlong)puVar12 + 0x44) = uVar3;
                *(undefined4 *)(puVar12 + 9) = uVar4;
                *(undefined4 *)((longlong)puVar12 + 0x4c) = uVar5;
            }
            (**(code **)(*DAT_140c65670 + 0x118))();
        }
        (**(code **)(*DAT_140c65670 + 0x140))
                (DAT_140c65670,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 200),0);
        if (*(longlong *)(param_1 + 0x12c8) == 0) {
            iVar9 = 0;
        }
        else {
            iVar9 = *(int *)(*(longlong *)(param_1 + 0x12c8) + 0x28);
        }
        iVar10 = DAT_140c44360;
        if (*DAT_140c63750 < DAT_140c44360) {
            iVar10 = *DAT_140c63750;
        }
        (**(code **)(*DAT_140c65670 + 0x178))
                (DAT_140c65670,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xd0),
                 (uint)((&DAT_140c44370)[iVar10] != '\0') +
                 ((uint)(fVar20 < *(float *)(param_1 + 0x10a4)) +
                  (iVar9 + (uint)((*(uint *)(param_1 + 0x84) & 0x9023) != 0) * 2) * 2) * 2);
        (**(code **)(*DAT_140c65670 + 0x130))
                (DAT_140c65670,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xd8),0x12);
        if (*(longlong *)(param_1 + 0x12d8) != 0) {
            do {
                uVar17 = FUN_140384d90(*(undefined8 *)(*(longlong *)(param_1 + 0x12d0) + uVar19 * 8));
                if ((int)uVar17 < 0) {
                    return uVar17;
                }
                uVar19 = uVar19 + 1;
            } while (uVar19 < *(ulonglong *)(param_1 + 0x12d8));
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1403640d0(longlong param_1)

{
    longlong **pplVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    byte bVar5;
    int iVar6;
    ulonglong uVar7;
    longlong *plVar8;
    longlong *plVar9;
    longlong *plVar10;
    longlong *plVar11;
    longlong **pplVar12;
    float fVar13;
    undefined auVar14 [16];
    float fVar15;
    float fVar17;
    float fVar18;
    float fVar19;
    undefined auVar16 [16];
    float fVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    uint uVar26;
    uint uVar27;
    float local_res8;

    fVar23 = 0.0;
    fVar25 = *(float *)(param_1 + 0x10a0);
    iVar6 = DAT_140c43f10;
    if (*DAT_140c63750 < DAT_140c43f10) {
        iVar6 = *DAT_140c63750;
    }
    fVar24 = *(float *)(&DAT_140c43f20 + (longlong)iVar6 * 4) * 0.01 * 0.75;
    if (fVar25 <= 0.0) {
        local_res8 = 0.0;
        fVar25 = 1.0;
    }
    else {
        local_res8 = 1.0 / (fVar25 * 0.95 - fVar25);
        fVar25 = (float)((uint)(local_res8 * fVar25) ^ 0x80000000);
    }
    for (lVar2 = *(longlong *)(param_1 + 0x920); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x590)) {
        for (lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x30); lVar3 != 0;
             lVar3 = *(longlong *)(lVar3 + 0x18)) {
            lVar4 = *(longlong *)(lVar3 + 8);
            if ((*(longlong *)(lVar4 + 0x4d0) == 0) && (*(int *)(lVar4 + 0x418) != 0)) {
                if (*(int *)(param_1 + 0x354) != 0) {
                    fVar13 = *(float *)(lVar4 + 0x284) - *(float *)(param_1 + 0x394);
                    if (fVar13 <= 0.0) {
                        fVar21 = *(float *)(lVar2 + 0x518);
                    }
                    else {
                        fVar21 = *(float *)(lVar2 + 0x514);
                    }
                    if (fVar13 * fVar21 < *(float *)(lVar2 + 0x510)) goto LAB_140364266;
                }
                plVar11 = (longlong *)(param_1 + 0x13c0);
                plVar8 = (longlong *)(lVar4 + 0x4d8);
                *(longlong **)(lVar4 + 0x4d0) = plVar11;
                *plVar8 = *plVar11;
                *plVar11 = lVar4;
                if (*plVar8 != 0) {
                    *(longlong **)(*plVar8 + 0x4d0) = plVar8;
                }
            }
            LAB_140364266:
        }
    }
    pplVar1 = (longlong **)(param_1 + 0x13c0);
    plVar11 = *pplVar1;
    while (plVar8 = plVar11, plVar8 != (longlong *)0x0) {
        pplVar12 = (longlong **)(plVar8 + 0x9b);
        plVar11 = *pplVar12;
        iVar6 = FUN_14035bdf0(param_1,plVar8 + 0x4e);
        if (iVar6 == 0) {
            if ((longlong **)plVar8[0x9a] != (longlong **)0x0) {
                *(longlong **)plVar8[0x9a] = plVar11;
            }
            if (*pplVar12 != (longlong *)0x0) {
                (*pplVar12)[0x9a] = plVar8[0x9a];
            }
            plVar8[0x9a] = 0;
            *pplVar12 = (longlong *)0x0;
        }
    }
    for (plVar11 = *(longlong **)(param_1 + 0x1558); plVar11 != (longlong *)0x0;
         plVar11 = (longlong *)plVar11[0x29]) {
        if (((*(int *)(param_1 + 0x1818) != 2) ||
             (iVar6 = (**(code **)(*plVar11 + 0x18))(plVar11), iVar6 != 0)) &&
            (plVar8 = (longlong *)plVar11[1], plVar8 != *(longlong **)(param_1 + 0x340))) {
            if ((*(byte *)(param_1 + 0x80) & 0x40) != 0) {
                (**(code **)(*(longlong *)plVar11[2] + 0xa0))((longlong *)plVar11[2],1,1);
            }
            if (plVar8[0x9a] == 0) {
                plVar8[0x9a] = (longlong)pplVar1;
                pplVar12 = (longlong **)(plVar8 + 0x9b);
                *pplVar12 = *pplVar1;
                *pplVar1 = plVar8;
                if (*pplVar12 != (longlong *)0x0) {
                    (*pplVar12)[0x9a] = (longlong)pplVar12;
                }
            }
            for (lVar2 = plVar11[0xf]; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x18)) {
                plVar8 = *(longlong **)(lVar2 + 8);
                if (plVar8[0x9a] == 0) {
                    auVar14 = *(undefined (*) [16])(plVar8 + 0x52);
                    plVar10 = plVar11 + 0x1a;
                    uVar7 = 0;
                    plVar9 = plVar10;
                    do {
                        if (*(float *)(plVar8 + 0x54) <
                            SUB164(auVar14,0) * *(float *)plVar9 +
                            SUB164(auVar14 >> 0x20,0) * *(float *)((longlong)plVar9 + 4) +
                            SUB164(auVar14 >> 0x40,0) * *(float *)(plVar9 + 1) +
                            *(float *)((longlong)plVar9 + 0xc)) goto LAB_140364489;
                        uVar7 = uVar7 + 1;
                        plVar9 = plVar9 + 2;
                    } while (uVar7 < 6);
                    uVar7 = 0;
                    do {
                        uVar26 = -(uint)(0.0 < *(float *)((longlong)plVar10 + 4));
                        uVar27 = -(uint)(SUB164(ZEXT1216(ZEXT812(0)) >> 0x40,0) < *(float *)(plVar10 + 1));
                        if (0.0 < (float)(~-(uint)(0.0 < *(float *)plVar10) & *(uint *)(plVar8 + 0x50) |
                                          -(uint)(0.0 < *(float *)plVar10) & *(uint *)(plVar8 + 0x4e)) *
                                  *(float *)plVar10 +
                                  (float)(~uVar26 & *(uint *)((longlong)plVar8 + 0x284) |
                                          uVar26 & *(uint *)((longlong)plVar8 + 0x274)) *
                                  *(float *)((longlong)plVar10 + 4) +
                                  (float)(~uVar27 & *(uint *)(plVar8 + 0x51) | uVar27 & *(uint *)(plVar8 + 0x4f)
                                  ) * *(float *)(plVar10 + 1) + *(float *)((longlong)plVar10 + 0xc))
                            goto LAB_140364489;
                        uVar7 = uVar7 + 1;
                        plVar10 = plVar10 + 2;
                    } while (uVar7 < 6);
                    plVar8[0x9a] = (longlong)pplVar1;
                    pplVar12 = (longlong **)(plVar8 + 0x9b);
                    *pplVar12 = *pplVar1;
                    *pplVar1 = plVar8;
                    if (*pplVar12 != (longlong *)0x0) {
                        (*pplVar12)[0x9a] = (longlong)pplVar12;
                    }
                }
                LAB_140364489:
            }
        }
    }
    lVar2 = *(longlong *)(param_1 + 0x340);
    if (lVar2 != 0) {
        if (*(undefined8 **)(lVar2 + 0x4d0) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar2 + 0x4d0) = *(undefined8 *)(lVar2 + 0x4d8);
        }
        if (*(longlong *)(lVar2 + 0x4d8) != 0) {
            *(undefined8 *)(*(longlong *)(lVar2 + 0x4d8) + 0x4d0) = *(undefined8 *)(lVar2 + 0x4d0);
        }
        *(undefined8 *)(lVar2 + 0x4d0) = 0;
        *(undefined8 *)(lVar2 + 0x4d8) = 0;
    }
    plVar11 = *pplVar1;
    if (plVar11 != (longlong *)0x0) {
        fVar13 = 3.0;
        fVar21 = -0.5;
        fVar22 = 2.0;
        do {
            if ((longlong *)plVar11[0x9a] != (longlong *)0x0) {
                *(longlong *)plVar11[0x9a] = plVar11[0x9b];
            }
            if (plVar11[0x9b] != 0) {
                *(longlong *)(plVar11[0x9b] + 0x4d0) = plVar11[0x9a];
            }
            plVar11[0x9a] = 0;
            plVar11[0x9b] = 0;
            plVar8 = (longlong *)(**(code **)(*plVar11 + 0x158))(plVar11);
            if (plVar8 != (longlong *)0x0) {
                (**(code **)(*plVar8 + 0x80))(plVar8);
            }
            iVar6 = (**(code **)(*plVar11 + 0x138))(plVar11);
            if (iVar6 == 0) {
                bVar5 = *(byte *)(param_1 + 0x80) & 0x20;
                LAB_1403645e5:
                if (bVar5 != 0) {
                    LAB_1403645eb:
                    if (((*(int *)(param_1 + 0x1818) != 2) ||
                         (((~(*(uint *)(plVar11 + 0x2d) >> 7) & 1) != 0 &&
                           (fVar23 != *(float *)(plVar11 + 0x10))))) &&
                        ((*(float *)(plVar11 + 0xe) != fVar23 || (*(float *)(plVar11 + 0xf) != fVar23)))) {
                        if (fVar23 != *(float *)(param_1 + 0x52c)) {
                            fVar15 = *(float *)(plVar11 + 0x52) - *(float *)(param_1 + 0x390);
                            fVar17 = *(float *)((longlong)plVar11 + 0x294) - *(float *)(param_1 + 0x394);
                            fVar18 = *(float *)(plVar11 + 0x53) - *(float *)(param_1 + 0x398);
                            fVar19 = *(float *)((longlong)plVar11 + 0x29c) - *(float *)(param_1 + 0x39c);
                            fVar15 = fVar15 * fVar15;
                            fVar17 = fVar17 * fVar17;
                            fVar18 = fVar18 * fVar18;
                            fVar20 = fVar15 + fVar17 + fVar18;
                            if (_DAT_140c44288 < fVar20) {
                                auVar14 = rsqrtss(ZEXT416((uint)fVar20) & (undefined  [16])0xffffffffffffffff,
                                                  CONCAT124(SUB1612(CONCAT412(fVar19 * fVar19,
                                                                              CONCAT48(fVar18,CONCAT44(fVar17,fVar15
                                                                              ))) >> 0x20,0)
                                                          ,fVar20));
                                fVar15 = SUB164(auVar14,0);
                                if ((fVar15 * fVar20 * fVar15 - fVar13) * fVar15 * fVar21 *
                                    *(float *)(plVar11 + 0x54) * fVar22 * *(float *)(param_1 + 0x514) <= fVar24)
                                    goto LAB_140364762;
                            }
                        }
                        auVar14 = *(undefined (*) [16])(param_1 + 0x360);
                        auVar16 = minps(auVar14,*(undefined (*) [16])(plVar11 + 0x58));
                        auVar16 = maxps(*(undefined (*) [16])(plVar11 + 0x56),auVar16);
                        fVar15 = SUB164(auVar16,0) - SUB164(auVar14,0);
                        fVar17 = SUB164(auVar16 >> 0x40,0) - SUB164(auVar14 >> 0x40,0);
                        fVar15 = SQRT(fVar15 * fVar15 + fVar17 * fVar17) * local_res8 + fVar25;
                        if (1.0 <= fVar15) {
                            fVar15 = 1.0;
                        }
                        fVar17 = 0.0;
                        if (0.0 <= fVar15) {
                            fVar17 = fVar15;
                        }
                        if ((fVar23 < fVar17) &&
                            ((**(code **)(*(longlong *)plVar11[6] + 200))((longlong *)plVar11[6],1),
                                    *(int *)(param_1 + 0x1818) == 1)) {
                            *(undefined4 *)((longlong)plVar11 + 0x46c) = *(undefined4 *)(param_1 + 0x350);
                        }
                    }
                }
            }
            else {
                if (iVar6 == 1) {
                    bVar5 = *(byte *)(param_1 + 0x80) & 0x40;
                    goto LAB_1403645e5;
                }
                if ((iVar6 != 2) ||
                    (((*(byte *)(param_1 + 0x80) & 0x20) != 0 && ((*(uint *)(param_1 + 0x84) & 0x100) != 0)))
                        ) goto LAB_1403645eb;
            }
            LAB_140364762:
            plVar11 = *pplVar1;
        } while (plVar11 != (longlong *)0x0);
    }
    return 0;
}



undefined8 FUN_1403647d0(longlong param_1)

{
    longlong *plVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong *plVar4;
    undefined8 uVar5;
    float fVar6;
    float fVar7;
    undefined4 uVar8;
    undefined4 local_28 [8];

    local_28[0] = 0xffffffff;
    (**(code **)(**(longlong **)(param_1 + 0x1830) + 0x20))(*(longlong **)(param_1 + 0x1830),local_28)
            ;
    for (plVar1 = *(longlong **)(param_1 + 0x14a8); plVar1 != (longlong *)0x0;
         plVar1 = (longlong *)plVar1[0x89]) {
        plVar2 = (longlong *)plVar1[4];
        (**(code **)(*plVar2 + 0x128))(plVar2,1);
        (**(code **)(*plVar2 + 0x140))(plVar2,1);
        lVar3 = *plVar2;
        fVar6 = (float)FUN_14038c510(plVar1,*(undefined4 *)(param_1 + 0x370));
        fVar7 = (float)(**(code **)(*plVar1 + 0x90))();
        (**(code **)(lVar3 + 0x70))(fVar7,fVar6 * fVar7,plVar2);
        lVar3 = *plVar2;
        fVar6 = (float)FUN_14038c510(plVar1,*(undefined4 *)(param_1 + 0x370));
        fVar7 = (float)(**(code **)(*plVar1 + 0xa0))();
        (**(code **)(lVar3 + 0x80))(fVar7,fVar6 * fVar7,plVar2);
        lVar3 = *plVar2;
        uVar8 = (**(code **)(*plVar1 + 0xb0))(plVar1);
        (**(code **)(lVar3 + 0x90))(uVar8,uVar8,plVar2);
        lVar3 = *plVar2;
        uVar5 = (**(code **)(*plVar1 + 0xc0))(plVar1);
        (**(code **)(lVar3 + 0xb0))(plVar2,uVar5);
        lVar3 = *plVar2;
        uVar5 = (**(code **)(*plVar1 + 0xd0))(plVar1);
        (**(code **)(lVar3 + 0xc0))(plVar2,uVar5);
        plVar4 = (longlong *)plVar1[0x19];
        if (plVar4 == (longlong *)0x0) {
            uVar8 = 0;
        }
        else {
            uVar8 = FUN_1407c2c10(plVar4,*(undefined8 *)(*plVar4 + plVar1[0x1b] * 8));
        }
        (**(code **)(*plVar2 + 0x100))(uVar8,uVar8,plVar2);
        if (*(int *)(param_1 + 0x1818) == 1) {
            *(undefined4 *)(plVar1 + 0x78) = *(undefined4 *)(param_1 + 0x350);
        }
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140364970(longlong param_1,undefined8 param_2,undefined4 param_3)

{
    int iVar1;
    longlong lVar2;
    undefined4 *puVar3;
    longlong *plVar4;
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
    undefined4 uVar18;
    float fVar19;
    undefined auStack760 [32];
    undefined *local_2d8;
    undefined4 *local_2d0;
    undefined local_2c8 [16];
    undefined local_2b8 [16];
    undefined local_298 [16];
    undefined local_288 [16];
    undefined4 local_278;
    undefined4 uStack628;
    undefined4 uStack624;
    undefined4 uStack620;
    undefined local_268 [16];
    undefined local_258 [16];
    undefined local_248 [16];
    undefined4 local_238;
    undefined4 uStack564;
    undefined4 uStack560;
    undefined4 uStack556;
    undefined4 local_228;
    undefined4 uStack548;
    undefined4 uStack544;
    undefined4 uStack540;
    undefined4 local_218;
    undefined4 uStack532;
    undefined4 uStack528;
    undefined4 uStack524;
    undefined4 local_208;
    undefined4 uStack516;
    undefined4 uStack512;
    undefined4 uStack508;
    undefined local_1f8 [128];
    undefined4 local_178;
    undefined4 uStack372;
    undefined4 uStack368;
    undefined4 uStack364;
    float local_168;
    undefined8 local_164;
    float local_158;
    float local_154;
    undefined4 local_14c;
    undefined4 local_148;
    undefined8 local_138;
    undefined *local_128;
    undefined4 *local_120;
    undefined local_118 [32];
    undefined4 local_f8;
    undefined4 local_f0;
    undefined *local_d8 [10];
    ulonglong local_88;

    local_88 = DAT_140c0f7b0 ^ (ulonglong)auStack760;
    FUN_1407e4830(local_258,0,0x130);
    uVar18 = 0x3f800000;
    fVar14 = 0.0;
    local_178 = 0x3f800000;
    uStack372 = 0x3f800000;
    uStack368 = 0x3f800000;
    uStack364 = 0x3f800000;
    plVar4 = *(longlong **)(param_1 + 0x14a8);
    local_164 = 0x3f800000;
    local_14c = 0x4a0;
    local_138 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x180);
    local_148 = param_3;
    if (plVar4 != (longlong *)0x0) {
        fVar17 = 0.25;
        fVar19 = 0.5;
        do {
            iVar1 = (**(code **)(*plVar4 + 0x158))(plVar4);
            if (iVar1 != 0) {
                fVar5 = (float)FUN_14038c510(plVar4,*(undefined4 *)(param_1 + 0x370));
                fVar6 = (float)(**(code **)(*plVar4 + 0x90))();
                fVar5 = fVar5 * fVar6;
                if (fVar14 < fVar5) {
                    lVar2 = (**(code **)(*(longlong *)plVar4[4] + 0x1a8))((longlong *)plVar4[4],0x96,0);
                    fVar6 = *(float *)(lVar2 + 0x40) - 0.5;
                    fVar7 = *(float *)(lVar2 + 0x44) - 0.0;
                    fVar8 = *(float *)(lVar2 + 0x48) - 0.5;
                    fVar9 = *(float *)(lVar2 + 0x4c) - 0.0;
                    fVar10 = *(float *)(lVar2 + 0x50) + 0.5;
                    fVar11 = *(float *)(lVar2 + 0x54) + 0.0;
                    fVar12 = *(float *)(lVar2 + 0x58) + 0.5;
                    fVar13 = *(float *)(lVar2 + 0x5c) + 0.0;
                    local_2b8 = CONCAT412(fVar9,CONCAT48(fVar8,CONCAT44(fVar7,fVar6)));
                    fVar15 = fVar11 - fVar7;
                    local_2c8 = CONCAT412(fVar13 - fVar9,
                                          CONCAT48(fVar12 - fVar8,CONCAT44(fVar15,fVar10 - fVar6)));
                    fVar16 = fVar15 * fVar19;
                    puVar3 = (undefined4 *)(**(code **)(*plVar4 + 0x38))(plVar4);
                    local_238 = *puVar3;
                    uStack564 = puVar3[1];
                    uStack560 = puVar3[2];
                    uStack556 = puVar3[3];
                    local_228 = puVar3[4];
                    uStack548 = puVar3[5];
                    uStack544 = puVar3[6];
                    uStack540 = puVar3[7];
                    local_218 = puVar3[8];
                    uStack532 = puVar3[9];
                    uStack528 = puVar3[10];
                    uStack524 = puVar3[0xb];
                    local_208 = puVar3[0xc];
                    uStack516 = puVar3[0xd];
                    uStack512 = puVar3[0xe];
                    uStack508 = puVar3[0xf];
                    iVar1 = (**(code **)(*(longlong *)plVar4[4] + 0x1d0))((longlong *)plVar4[4],0x80);
                    if (iVar1 != 0) {
                        (**(code **)(*(longlong *)plVar4[4] + 0x1e0))((longlong *)plVar4[4],0x80);
                        local_208 = local_f8;
                        uStack512 = local_f0;
                    }
                    local_2d8 = local_298;
                    local_2d0 = &local_238;
                    local_278 = _DAT_140c78420;
                    uStack628 = uRam0000000140c78424;
                    uStack624 = uRam0000000140c78428;
                    uStack620 = uRam0000000140c7842c;
                    local_298 = ZEXT1216(CONCAT48(fVar14,(ulonglong)local_2c8._0_4_));
                    local_288 = ZEXT1216(CONCAT48(local_2c8._8_4_,(ulonglong)(uint)fVar14));
                    local_268 = CONCAT412(uVar18,SUB1612(local_2b8,0));
                    local_128 = local_2d8;
                    local_120 = local_2d0;
                    FUN_1401afb10(&local_128,local_118);
                    local_d8[0] = local_118;
                    FUN_1401afc20(local_d8,local_1f8);
                    local_158 = fVar15 * fVar17;
                    local_168 = fVar5;
                    local_154 = fVar16;
                    (**(code **)(*DAT_140c65688 + 0x68))();
                }
            }
            plVar4 = (longlong *)plVar4[0x89];
        } while (plVar4 != (longlong *)0x0);
    }
    FUN_1407db4f0(local_88 ^ (ulonglong)auStack760);
    return;
}



undefined8 FUN_140364cc0(longlong param_1)

{
    int iVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    int local_res8 [8];
    undefined local_48 [16];
    undefined local_38 [16];
    undefined local_28 [16];
    undefined local_18 [16];

    if (*(int *)(param_1 + 0x10d0) != 0) {
        iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10c8) + 0x28))
                (*(longlong **)(param_1 + 0x10c8),local_res8,0);
        if (iVar1 != 0) {
            return 0;
        }
        if (local_res8[0] == 0) {
            uVar3 = 0;
        }
        else {
            uVar3 = 0x3f800000;
        }
        *(undefined4 *)(param_1 + 0x10c4) = uVar3;
        *(undefined4 *)(param_1 + 0x10d0) = 0;
    }
    (**(code **)(*DAT_140c65670 + 0x120))();
    (**(code **)(*DAT_140c65670 + 0x178))
            (DAT_140c65670,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x58),0);
    (**(code **)(*DAT_140c65670 + 0x140))
            (DAT_140c65670,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x50),1);
    puVar2 = (undefined8 *)(**(code **)(*DAT_140c65670 + 0xe0))(DAT_140c65670,0x10,1);
    if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined4 *)puVar2 = *(undefined4 *)(param_1 + 0x390);
        *(undefined4 *)((longlong)puVar2 + 4) = *(undefined4 *)(param_1 + 0x394);
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 0x398);
        (**(code **)(*DAT_140c65670 + 0xe8))();
        local_48 = CONCAT412(*(undefined4 *)(param_1 + 0x5f0),
                             CONCAT48(*(undefined4 *)(param_1 + 0x5e0),
                                      CONCAT44(*(undefined4 *)(param_1 + 0x5d0),
                                               *(undefined4 *)(param_1 + 0x5c0))));
        local_38 = CONCAT412(*(undefined4 *)(param_1 + 0x5f4),
                             ZEXT412(*(uint *)(param_1 + 0x5d4)) << 0x20);
        local_28 = CONCAT412(*(undefined4 *)(param_1 + 0x5f8),
                             CONCAT48(*(undefined4 *)(param_1 + 0x5e8),
                                      CONCAT44(*(undefined4 *)(param_1 + 0x5d8),
                                               *(undefined4 *)(param_1 + 0x5c8))));
        local_18 = CONCAT412(*(undefined4 *)(param_1 + 0x5fc),
                             ZEXT412(*(uint *)(param_1 + 0x5dc)) << 0x20);
        (**(code **)(*DAT_140c65670 + 0x148))(DAT_140c65670,0x40,local_48,0,0,0);
        (**(code **)(**(longlong **)(param_1 + 0x10c8) + 0x18))();
        (**(code **)(*DAT_140c65670 + 0x288))(DAT_140c65670,0,0,1,1);
        (**(code **)(**(longlong **)(param_1 + 0x10c8) + 0x20))();
        *(undefined4 *)(param_1 + 0x10d0) = 1;
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140364e90(longlong param_1)

{
    longlong *plVar1;
    undefined auVar2 [12];
    int iVar3;
    undefined4 *puVar4;
    undefined auStack408 [32];
    undefined4 local_178;
    undefined4 local_170;
    undefined4 local_168;
    undefined4 local_160;
    undefined8 local_158;
    longlong local_150;
    undefined4 local_148;
    undefined4 local_144;
    undefined4 local_140;
    undefined4 local_138;
    undefined4 local_134;
    undefined4 local_130;
    undefined local_128 [16];
    undefined local_118 [8];
    undefined4 uStack272;
    uint uStack268;
    undefined local_108 [16];
    undefined local_f8 [8];
    undefined4 uStack240;
    undefined4 uStack236;
    undefined local_e8 [16];
    undefined local_d8 [8];
    undefined4 uStack208;
    uint uStack204;
    undefined local_c8 [16];
    undefined local_b8 [8];
    undefined4 uStack176;
    undefined4 uStack172;
    undefined8 local_a8;
    longlong local_a0;
    ulonglong local_58;

    local_58 = DAT_140c0f7b0 ^ (ulonglong)auStack408;
    if ((((*(longlong *)(param_1 + 0x14b8) != 0) || (*(longlong *)(param_1 + 0x13c8) != 0)) ||
         (*(longlong *)(param_1 + 0x14c0) != 0)) || (*(longlong *)(param_1 + 0x13d0) != 0)) {
        (**(code **)(*DAT_140c65670 + 0x150))(DAT_140c65670,0);
        (**(code **)(*DAT_140c65670 + 0x188))(DAT_140c65670,0xfffffff8);
        (**(code **)(*DAT_140c65670 + 0x138))
                (DAT_140c65670,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x158));
        (**(code **)(*DAT_140c65670 + 0x178))
                (DAT_140c65670,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x58),0);
        (**(code **)(*DAT_140c65670 + 0x140))
                (DAT_140c65670,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x50),1);
        plVar1 = *(longlong **)(param_1 + 0x14b8);
        while (plVar1 != (longlong *)0x0) {
            iVar3 = (**(code **)(*plVar1 + 0x100))(plVar1);
            if (iVar3 != 0) {
                if (plVar1[0x7a] == 0) {
                    *(undefined4 *)(plVar1 + 0x7c) = 0;
                    iVar3 = (**(code **)(*DAT_140c65670 + 0xb0))(DAT_140c65670,plVar1 + 0x7a);
                    if (iVar3 < 0) goto LAB_140365e66;
                }
                else if ((*(int *)(plVar1 + 0x7c) != 0) &&
                         ((**(code **)(*plVar1 + 0x108))(plVar1,0,0), *(int *)(plVar1 + 0x7c) != 0))
                    goto LAB_140365303;
                puVar4 = (undefined4 *)(**(code **)(*DAT_140c65670 + 0xe0))();
                if (puVar4 != (undefined4 *)0x0) {
                    FUN_1407e4830(puVar4,0,0x80);
                    (**(code **)(*plVar1 + 0x58))(plVar1,&local_148,0);
                    *puVar4 = local_148;
                    puVar4[1] = local_144;
                    puVar4[2] = local_140;
                    puVar4[4] = local_138;
                    puVar4[5] = local_144;
                    puVar4[6] = SUB164(ZEXT1216(CONCAT48(local_140,CONCAT44(local_144,local_138))) >> 0x40,0);
                    puVar4[8] = local_148;
                    puVar4[9] = local_134;
                    puVar4[10] = SUB164(ZEXT1216(CONCAT48(local_140,CONCAT44(local_134,local_148))) >> 0x40,0)
                            ;
                    puVar4[0xc] = local_138;
                    puVar4[0xd] = local_134;
                    puVar4[0xe] = SUB164(ZEXT1216(CONCAT48(local_140,CONCAT44(local_134,local_138))) >> 0x40,0
                    );
                    puVar4[0x10] = local_148;
                    puVar4[0x11] = local_144;
                    puVar4[0x12] = SUB164(ZEXT1216(CONCAT48(local_130,CONCAT44(local_144,local_148))) >> 0x40,
                                          0);
                    puVar4[0x14] = local_138;
                    puVar4[0x15] = local_144;
                    puVar4[0x16] = SUB164(ZEXT1216(CONCAT48(local_130,CONCAT44(local_144,local_138))) >> 0x40,
                                          0);
                    auVar2 = CONCAT48(local_130,CONCAT44(local_134,local_148));
                    puVar4[0x18] = local_148;
                    puVar4[0x19] = local_134;
                    puVar4[0x1a] = SUB164(ZEXT1216(auVar2) >> 0x40,0);
                    puVar4[0x1c] = local_138;
                    puVar4[0x1d] = local_134;
                    puVar4[0x1e] = local_130;
                    (**(code **)(*DAT_140c65670 + 0xe8))(SUB128(auVar2 >> 0x20,0),0,local_134,local_130);
                    local_158 = (**(code **)(*plVar1 + 0x38))(plVar1);
                    local_150 = param_1 + 0x5c0;
                    local_a8 = local_158;
                    local_a0 = local_150;
                    FUN_1401afb10(&local_a8);
                    local_170 = 0;
                    local_178 = 0;
                    local_e8 = CONCAT412(local_f8._0_4_,
                                         CONCAT48(local_108._0_4_,
                                                  SUB168(local_128,0) & 0xffffffff |
                                                  (ulonglong)local_118._0_4_ << 0x20));
                    _local_d8 = CONCAT412(local_f8._4_4_,
                                          ZEXT812(SUB168(CONCAT412(SUB164(local_128 >> 0x60,0),
                                                                   CONCAT48(SUB164(local_128 >> 0x20,0),
                                                                            SUB168(local_128,0))) >> 0x40,0) &
                                                  0xffffffff | (ulonglong)local_118._4_4_ << 0x20));
                    local_c8 = CONCAT412(uStack240,
                                         CONCAT48(local_108._8_4_,
                                                  CONCAT44(uStack272,SUB164(local_128 >> 0x40,0))));
                    _local_b8 = CONCAT412(uStack236,ZEXT412(uStack268) << 0x20);
                    (**(code **)(*DAT_140c65670 + 0x148))();
                    (**(code **)(*(longlong *)plVar1[0x7a] + 0x18))();
                    local_160 = 1;
                    local_168 = 0;
                    local_170 = 8;
                    local_178 = 0;
                    (**(code **)(*DAT_140c65670 + 0x290))();
                    (**(code **)(*(longlong *)plVar1[0x7a] + 0x20))();
                    *(undefined4 *)(plVar1 + 0x7c) = 1;
                }
            }
            LAB_140365303:
            if ((longlong *)plVar1[0x8c] != (longlong *)0x0) {
                *(longlong *)plVar1[0x8c] = plVar1[0x8d];
            }
            if (plVar1[0x8d] != 0) {
                *(longlong *)(plVar1[0x8d] + 0x460) = plVar1[0x8c];
            }
            plVar1[0x8d] = 0;
            plVar1[0x8c] = 0;
            plVar1 = *(longlong **)(param_1 + 0x14b8);
        }
        plVar1 = *(longlong **)(param_1 + 0x14c0);
        while (plVar1 != (longlong *)0x0) {
            iVar3 = (**(code **)(*plVar1 + 0x100))(plVar1);
            if (iVar3 != 0) {
                if (plVar1[0x7b] == 0) {
                    *(undefined4 *)((longlong)plVar1 + 0x3e4) = 0;
                    iVar3 = (**(code **)(*DAT_140c65670 + 0xb0))(DAT_140c65670,plVar1 + 0x7b);
                    if (iVar3 < 0) goto LAB_140365e66;
                }
                else if ((*(int *)((longlong)plVar1 + 0x3e4) != 0) &&
                         ((**(code **)(*plVar1 + 0x108))(plVar1,0,1), *(int *)((longlong)plVar1 + 0x3e4) != 0
                         )) goto LAB_1403656b7;
                puVar4 = (undefined4 *)(**(code **)(*DAT_140c65670 + 0xe0))();
                if (puVar4 != (undefined4 *)0x0) {
                    FUN_1407e4830(puVar4,0,0x80);
                    (**(code **)(*plVar1 + 0x58))(plVar1,&local_148,1);
                    *puVar4 = local_148;
                    puVar4[1] = local_144;
                    puVar4[2] = local_140;
                    puVar4[4] = local_138;
                    puVar4[5] = local_144;
                    puVar4[6] = SUB164(ZEXT1216(CONCAT48(local_140,CONCAT44(local_144,local_138))) >> 0x40,0);
                    puVar4[8] = local_148;
                    puVar4[9] = local_134;
                    puVar4[10] = SUB164(ZEXT1216(CONCAT48(local_140,CONCAT44(local_134,local_148))) >> 0x40,0)
                            ;
                    puVar4[0xc] = local_138;
                    puVar4[0xd] = local_134;
                    puVar4[0xe] = SUB164(ZEXT1216(CONCAT48(local_140,CONCAT44(local_134,local_138))) >> 0x40,0
                    );
                    puVar4[0x10] = local_148;
                    puVar4[0x11] = local_144;
                    puVar4[0x12] = SUB164(ZEXT1216(CONCAT48(local_130,CONCAT44(local_144,local_148))) >> 0x40,
                                          0);
                    puVar4[0x14] = local_138;
                    puVar4[0x15] = local_144;
                    puVar4[0x16] = SUB164(ZEXT1216(CONCAT48(local_130,CONCAT44(local_144,local_138))) >> 0x40,
                                          0);
                    auVar2 = CONCAT48(local_130,CONCAT44(local_134,local_148));
                    puVar4[0x18] = local_148;
                    puVar4[0x19] = local_134;
                    puVar4[0x1a] = SUB164(ZEXT1216(auVar2) >> 0x40,0);
                    puVar4[0x1c] = local_138;
                    puVar4[0x1d] = local_134;
                    puVar4[0x1e] = local_130;
                    (**(code **)(*DAT_140c65670 + 0xe8))(SUB128(auVar2 >> 0x20,0),0,local_134,local_130);
                    local_158 = (**(code **)(*plVar1 + 0x38))(plVar1);
                    local_150 = param_1 + 0x5c0;
                    local_a8 = local_158;
                    local_a0 = local_150;
                    FUN_1401afb10(&local_a8);
                    local_170 = 0;
                    local_178 = 0;
                    local_128 = CONCAT412(local_b8._0_4_,
                                          CONCAT48(local_c8._0_4_,
                                                   SUB168(local_e8,0) & 0xffffffff |
                                                   (ulonglong)local_d8._0_4_ << 0x20));
                    _local_118 = CONCAT412(local_b8._4_4_,
                                           ZEXT812(SUB168(CONCAT412(SUB164(local_e8 >> 0x60,0),
                                                                    CONCAT48(SUB164(local_e8 >> 0x20,0),
                                                                             SUB168(local_e8,0))) >> 0x40,0) &
                                                   0xffffffff | (ulonglong)local_d8._4_4_ << 0x20));
                    local_108 = CONCAT412(uStack176,
                                          CONCAT48(local_c8._8_4_,
                                                   CONCAT44(uStack208,SUB164(local_e8 >> 0x40,0))));
                    _local_f8 = CONCAT412(uStack172,ZEXT412(uStack204) << 0x20);
                    (**(code **)(*DAT_140c65670 + 0x148))();
                    (**(code **)(*(longlong *)plVar1[0x7b] + 0x18))();
                    local_160 = 1;
                    local_168 = 0;
                    local_170 = 8;
                    local_178 = 0;
                    (**(code **)(*DAT_140c65670 + 0x290))();
                    (**(code **)(*(longlong *)plVar1[0x7b] + 0x20))();
                    *(undefined4 *)((longlong)plVar1 + 0x3e4) = 1;
                }
            }
            LAB_1403656b7:
            if ((longlong *)plVar1[0x8e] != (longlong *)0x0) {
                *(longlong *)plVar1[0x8e] = plVar1[0x8f];
            }
            if (plVar1[0x8f] != 0) {
                *(longlong *)(plVar1[0x8f] + 0x470) = plVar1[0x8e];
            }
            plVar1[0x8f] = 0;
            plVar1[0x8e] = 0;
            plVar1 = *(longlong **)(param_1 + 0x14c0);
        }
        plVar1 = *(longlong **)(param_1 + 0x13c8);
        while (plVar1 != (longlong *)0x0) {
            iVar3 = (**(code **)(*plVar1 + 0x100))(plVar1);
            if (iVar3 == 0) {
                LAB_140365a4a:
                if ((longlong *)plVar1[0x9c] != (longlong *)0x0) {
                    *(longlong *)plVar1[0x9c] = plVar1[0x9d];
                }
                if (plVar1[0x9d] != 0) {
                    *(longlong *)(plVar1[0x9d] + 0x4e0) = plVar1[0x9c];
                }
                plVar1[0x9c] = 0;
                plVar1[0x9d] = 0;
            }
            else {
                if (plVar1[0x8e] == 0) {
                    *(undefined4 *)(plVar1 + 0x90) = 0;
                    iVar3 = (**(code **)(*DAT_140c65670 + 0xb0))(DAT_140c65670,plVar1 + 0x8e);
                    if (-1 < iVar3) {
                        LAB_140365767:
                        puVar4 = (undefined4 *)(**(code **)(*DAT_140c65670 + 0xe0))();
                        if (puVar4 != (undefined4 *)0x0) {
                            FUN_1407e4830(puVar4,0,0x80);
                            (**(code **)(*plVar1 + 0x58))(plVar1,&local_148,0);
                            *puVar4 = local_148;
                            puVar4[1] = local_144;
                            puVar4[2] = local_140;
                            puVar4[4] = local_138;
                            puVar4[5] = local_144;
                            puVar4[6] = SUB164(ZEXT1216(CONCAT48(local_140,CONCAT44(local_144,local_138))) >> 0x40
                                    ,0);
                            puVar4[8] = local_148;
                            puVar4[9] = local_134;
                            puVar4[10] = SUB164(ZEXT1216(CONCAT48(local_140,CONCAT44(local_134,local_148))) >>
                                                                                                            0x40,0);
                            puVar4[0xc] = local_138;
                            puVar4[0xd] = local_134;
                            puVar4[0xe] = SUB164(ZEXT1216(CONCAT48(local_140,CONCAT44(local_134,local_138))) >>
                                                                                                             0x40,0);
                            puVar4[0x10] = local_148;
                            puVar4[0x11] = local_144;
                            puVar4[0x12] = SUB164(ZEXT1216(CONCAT48(local_130,CONCAT44(local_144,local_148))) >>
                                                                                                              0x40,0);
                            puVar4[0x14] = local_138;
                            puVar4[0x15] = local_144;
                            puVar4[0x16] = SUB164(ZEXT1216(CONCAT48(local_130,CONCAT44(local_144,local_138))) >>
                                                                                                              0x40,0);
                            auVar2 = CONCAT48(local_130,CONCAT44(local_134,local_148));
                            puVar4[0x18] = local_148;
                            puVar4[0x19] = local_134;
                            puVar4[0x1a] = SUB164(ZEXT1216(auVar2) >> 0x40,0);
                            puVar4[0x1c] = local_138;
                            puVar4[0x1d] = local_134;
                            puVar4[0x1e] = local_130;
                            (**(code **)(*DAT_140c65670 + 0xe8))(SUB128(auVar2 >> 0x20,0),0,local_134,local_130);
                            local_158 = (**(code **)(*plVar1 + 0x38))(plVar1);
                            local_150 = param_1 + 0x5c0;
                            local_a8 = local_158;
                            local_a0 = local_150;
                            FUN_1401afb10(&local_a8);
                            local_170 = 0;
                            local_178 = 0;
                            local_128 = CONCAT412(local_b8._0_4_,
                                                  CONCAT48(local_c8._0_4_,
                                                           SUB168(local_e8,0) & 0xffffffff |
                                                           (ulonglong)local_d8._0_4_ << 0x20));
                            _local_118 = CONCAT412(local_b8._4_4_,
                                                   ZEXT812(SUB168(CONCAT412(SUB164(local_e8 >> 0x60,0),
                                                                            CONCAT48(SUB164(local_e8 >> 0x20,0),
                                                                                     SUB168(local_e8,0))) >> 0x40,
                                                                  0) & 0xffffffff |
                                                           (ulonglong)local_d8._4_4_ << 0x20));
                            local_108 = CONCAT412(uStack176,
                                                  CONCAT48(local_c8._8_4_,
                                                           CONCAT44(uStack208,SUB164(local_e8 >> 0x40,0))));
                            _local_f8 = CONCAT412(uStack172,ZEXT412(uStack204) << 0x20);
                            (**(code **)(*DAT_140c65670 + 0x148))();
                            (**(code **)(*(longlong *)plVar1[0x8e] + 0x18))();
                            local_160 = 1;
                            local_168 = 0;
                            local_170 = 8;
                            local_178 = 0;
                            (**(code **)(*DAT_140c65670 + 0x290))();
                            (**(code **)(*(longlong *)plVar1[0x8e] + 0x20))();
                            *(undefined4 *)(plVar1 + 0x90) = 1;
                        }
                        goto LAB_140365a4a;
                    }
                    goto LAB_140365e66;
                }
                if ((*(int *)(plVar1 + 0x90) == 0) ||
                    ((**(code **)(*plVar1 + 0x108))(plVar1,0,0), *(int *)(plVar1 + 0x90) == 0))
                    goto LAB_140365767;
                FUN_140370ae0(plVar1);
            }
            plVar1 = *(longlong **)(param_1 + 0x13c8);
        }
        plVar1 = *(longlong **)(param_1 + 0x13d0);
        while (plVar1 != (longlong *)0x0) {
            iVar3 = (**(code **)(*plVar1 + 0x100))(plVar1);
            if (iVar3 == 0) {
                LAB_140365ddd:
                if ((longlong *)plVar1[0x9e] != (longlong *)0x0) {
                    *(longlong *)plVar1[0x9e] = plVar1[0x9f];
                }
                if (plVar1[0x9f] != 0) {
                    *(longlong *)(plVar1[0x9f] + 0x4f0) = plVar1[0x9e];
                }
                plVar1[0x9e] = 0;
                plVar1[0x9f] = 0;
            }
            else {
                if (plVar1[0x8f] == 0) {
                    *(undefined4 *)((longlong)plVar1 + 0x484) = 0;
                    iVar3 = (**(code **)(*DAT_140c65670 + 0xb0))(DAT_140c65670,plVar1 + 0x8f);
                    if (-1 < iVar3) {
                        LAB_140365af7:
                        puVar4 = (undefined4 *)(**(code **)(*DAT_140c65670 + 0xe0))();
                        if (puVar4 != (undefined4 *)0x0) {
                            FUN_1407e4830(puVar4,0,0x80);
                            (**(code **)(*plVar1 + 0x58))(plVar1,&local_148,1);
                            *puVar4 = local_148;
                            puVar4[1] = local_144;
                            puVar4[2] = local_140;
                            puVar4[4] = local_138;
                            puVar4[5] = local_144;
                            puVar4[6] = SUB164(ZEXT1216(CONCAT48(local_140,CONCAT44(local_144,local_138))) >> 0x40
                                    ,0);
                            puVar4[8] = local_148;
                            puVar4[9] = local_134;
                            puVar4[10] = SUB164(ZEXT1216(CONCAT48(local_140,CONCAT44(local_134,local_148))) >>
                                                                                                            0x40,0);
                            puVar4[0xc] = local_138;
                            puVar4[0xd] = local_134;
                            puVar4[0xe] = SUB164(ZEXT1216(CONCAT48(local_140,CONCAT44(local_134,local_138))) >>
                                                                                                             0x40,0);
                            puVar4[0x10] = local_148;
                            puVar4[0x11] = local_144;
                            puVar4[0x12] = SUB164(ZEXT1216(CONCAT48(local_130,CONCAT44(local_144,local_148))) >>
                                                                                                              0x40,0);
                            puVar4[0x14] = local_138;
                            puVar4[0x15] = local_144;
                            puVar4[0x16] = SUB164(ZEXT1216(CONCAT48(local_130,CONCAT44(local_144,local_138))) >>
                                                                                                              0x40,0);
                            auVar2 = CONCAT48(local_130,CONCAT44(local_134,local_148));
                            puVar4[0x18] = local_148;
                            puVar4[0x19] = local_134;
                            puVar4[0x1a] = SUB164(ZEXT1216(auVar2) >> 0x40,0);
                            puVar4[0x1c] = local_138;
                            puVar4[0x1d] = local_134;
                            puVar4[0x1e] = local_130;
                            (**(code **)(*DAT_140c65670 + 0xe8))(SUB128(auVar2 >> 0x20,0),0,local_134,local_130);
                            local_158 = (**(code **)(*plVar1 + 0x38))(plVar1);
                            local_150 = param_1 + 0x5c0;
                            local_a8 = local_158;
                            local_a0 = local_150;
                            FUN_1401afb10(&local_a8);
                            local_170 = 0;
                            local_178 = 0;
                            local_128 = CONCAT412(local_b8._0_4_,
                                                  CONCAT48(local_c8._0_4_,
                                                           SUB168(local_e8,0) & 0xffffffff |
                                                           (ulonglong)local_d8._0_4_ << 0x20));
                            _local_118 = CONCAT412(local_b8._4_4_,
                                                   ZEXT812(SUB168(CONCAT412(SUB164(local_e8 >> 0x60,0),
                                                                            CONCAT48(SUB164(local_e8 >> 0x20,0),
                                                                                     SUB168(local_e8,0))) >> 0x40,
                                                                  0) & 0xffffffff |
                                                           (ulonglong)local_d8._4_4_ << 0x20));
                            local_108 = CONCAT412(uStack176,
                                                  CONCAT48(local_c8._8_4_,
                                                           CONCAT44(uStack208,SUB164(local_e8 >> 0x40,0))));
                            _local_f8 = CONCAT412(uStack172,ZEXT412(uStack204) << 0x20);
                            (**(code **)(*DAT_140c65670 + 0x148))();
                            (**(code **)(*(longlong *)plVar1[0x8f] + 0x18))();
                            local_160 = 1;
                            local_168 = 0;
                            local_170 = 8;
                            local_178 = 0;
                            (**(code **)(*DAT_140c65670 + 0x290))();
                            (**(code **)(*(longlong *)plVar1[0x8f] + 0x20))();
                            *(undefined4 *)((longlong)plVar1 + 0x484) = 1;
                        }
                        goto LAB_140365ddd;
                    }
                    break;
                }
                if ((*(int *)((longlong)plVar1 + 0x484) == 0) ||
                    ((**(code **)(*plVar1 + 0x108))(plVar1,0,1), *(int *)((longlong)plVar1 + 0x484) == 0))
                    goto LAB_140365af7;
                FUN_140370a90(plVar1);
            }
            plVar1 = *(longlong **)(param_1 + 0x13d0);
        }
    }
    LAB_140365e66:
    FUN_1407db4f0(local_58 ^ (ulonglong)auStack408);
    return;
}



undefined8 FUN_140365f00(longlong param_1)

{
    longlong lVar1;
    uint uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    uint uVar8;
    undefined4 uVar9;
    int iVar10;
    undefined (*pauVar11) [16];
    float fVar12;

    (**(code **)(*DAT_140c65670 + 0x128))();
    (**(code **)(*DAT_140c65688 + 0x50))();
    (**(code **)(*DAT_140c65670 + 0x1c0))(DAT_140c65670,7);
    (**(code **)(*DAT_140c65670 + 0x1d0))(DAT_140c65670,1,1,0);
    (**(code **)(*DAT_140c65670 + 0x198))(DAT_140c65670,0);
    (**(code **)(*DAT_140c65670 + 0x188))(DAT_140c65670,0xfffffff8);
    (**(code **)(*DAT_140c65670 + 0x1b0))(DAT_140c65670,0,0,0,2);
    pauVar11 = (undefined (*) [16])(**(code **)(*DAT_140c65670 + 0x100))(DAT_140c65670,0x80,0,0,0);
    if (pauVar11 != (undefined (*) [16])0x0) {
        uVar2 = *(uint *)(param_1 + 0x3d4);
        uVar3 = *(undefined4 *)(param_1 + 0x3d8);
        uVar4 = *(undefined4 *)(param_1 + 0x3f4);
        uVar5 = *(undefined4 *)(param_1 + 0x3f8);
        uVar6 = *(undefined4 *)(param_1 + 1000);
        uVar7 = *(undefined4 *)(param_1 + 0x3c8);
        *pauVar11 = CONCAT412(*(undefined4 *)(param_1 + 0x3f0),
                              CONCAT48(*(undefined4 *)(param_1 + 0x3e0),
                                       CONCAT44(*(undefined4 *)(param_1 + 0x3d0),
                                                *(undefined4 *)(param_1 + 0x3c0))));
        pauVar11[1] = CONCAT412(uVar4,ZEXT412(uVar2) << 0x20);
        pauVar11[2] = CONCAT412(uVar5,CONCAT48(uVar6,CONCAT44(uVar3,uVar7)));
        uVar2 = *(uint *)(param_1 + 0x514);
        uVar3 = *(undefined4 *)(param_1 + 0x518);
        uVar8 = *(uint *)(param_1 + 0x51c);
        uVar4 = *(undefined4 *)(param_1 + 0x508);
        uVar5 = *(undefined4 *)(param_1 + 0x528);
        uVar6 = *(undefined4 *)(param_1 + 0x534);
        uVar7 = *(undefined4 *)(param_1 + 0x538);
        uVar9 = *(undefined4 *)(param_1 + 0x53c);
        pauVar11[3] = CONCAT412(*(undefined4 *)(param_1 + 0x530),
                                CONCAT48(*(undefined4 *)(param_1 + 0x520),
                                         CONCAT44(*(undefined4 *)(param_1 + 0x510),
                                                  *(undefined4 *)(param_1 + 0x500))));
        pauVar11[4] = CONCAT412(uVar6,ZEXT412(uVar2) << 0x20);
        pauVar11[5] = CONCAT412(uVar7,CONCAT48(uVar5,CONCAT44(uVar3,uVar4)));
        pauVar11[6] = CONCAT412(uVar9,ZEXT412(uVar8) << 0x20);
        *(undefined8 *)pauVar11[7] = 0;
        (**(code **)(*DAT_140c65670 + 0x108))();
    }
    (**(code **)(*DAT_140c65670 + 0x140))
            (DAT_140c65670,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xe0),1);
    pauVar11 = (undefined (*) [16])(**(code **)(*DAT_140c65670 + 0x110))(DAT_140c65670,0x10,0,0,0);
    if (pauVar11 != (undefined (*) [16])0x0) {
        fVar12 = (float)FUN_1408fe3d0((float)(ulonglong)(*(uint *)(param_1 + 0x370) % 1000) *
                                      0.006283185);
        *pauVar11 = ZEXT816(CONCAT44((fVar12 + 1.0) * 0.5,0x3f800000));
        (**(code **)(*DAT_140c65670 + 0x118))();
    }
    (**(code **)(*DAT_140c65670 + 0x178))
            (DAT_140c65670,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xe8),0);
    for (lVar1 = *(longlong *)(param_1 + 0x920); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x590)) {
        if ((*(longlong *)(lVar1 + 0x3f0) != 0) &&
            (iVar10 = FUN_14035bdf0(param_1,lVar1 + 0x100), iVar10 != 0)) {
            pauVar11 = (undefined (*) [16])(**(code **)(*DAT_140c65670 + 0x100))(DAT_140c65670,0x10,1,8,0)
                    ;
            if (pauVar11 != (undefined (*) [16])0x0) {
                *pauVar11 = ZEXT1216(CONCAT48(*(uint *)(lVar1 + 0xc0),(ulonglong)*(uint *)(lVar1 + 0xc0)));
                (**(code **)(*DAT_140c65670 + 0x108))();
            }
            (**(code **)(*DAT_140c65670 + 0x138))(DAT_140c65670,*(undefined8 *)(lVar1 + 0x3f0));
            (**(code **)(*DAT_140c65670 + 0x130))(DAT_140c65670,*(undefined8 *)(lVar1 + 0x3d0));
            (**(code **)(*DAT_140c65670 + 0x290))
                    (DAT_140c65670,1,0,*(undefined4 *)(lVar1 + 0x3f8),0,*(undefined4 *)(lVar1 + 0x3d8),0
                            ,1);
        }
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_140366270(longlong param_1)

{
    char cVar1;
    int iVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 uVar5;
    undefined (*pauVar6) [16];
    longlong lVar7;
    undefined4 *puVar8;
    undefined4 uVar9;
    float fVar10;
    undefined4 uVar11;
    undefined4 uVar12;
    undefined4 uVar13;
    float fVar14;
    ulonglong uVar15;
    undefined local_48 [20];
    undefined4 local_34;

    local_48._0_16_ = CONCAT124(local_48._4_12_,0xffffffff);
    (**(code **)(**(longlong **)(param_1 + 0x1840) + 0x20))(*(longlong **)(param_1 + 0x1840),local_48)
            ;
    if (*(longlong *)(param_1 + 0x14f0) != 0) {
        uVar9 = 0;
        uVar11 = 0;
        uVar12 = 0;
        uVar13 = 0;
        fVar14 = 1.0;
        local_48._0_16_ = ZEXT816(0);
        (**(code **)(*DAT_140c65670 + 0x270))(DAT_140c65670,1,local_48);
        for (lVar3 = *(longlong *)(param_1 + 0x14f0); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x390))
        {
            (**(code **)(*DAT_140c65688 + 0x60))(DAT_140c65688,lVar3 + 0x20);
        }
        (**(code **)(*DAT_140c65670 + 0x2a0))();
        lVar3 = (**(code **)(*DAT_140c65688 + 0xc0))();
        puVar4 = (undefined8 *)(**(code **)(*DAT_140c65688 + 0xd0))();
        local_48._0_16_ = CONCAT124(local_48._4_12_,1);
        local_34 = 0;
        local_48._0_16_ = CONCAT88(*puVar4,local_48._0_8_);
        (**(code **)(*DAT_140c65670 + 0x208))
                (DAT_140c65670,local_48,&DAT_140c3fe88,&DAT_140c3fe88,&DAT_140c3fe88);
        local_48._0_16_ = CONCAT412(uVar13,CONCAT48(uVar12,CONCAT44(uVar11,uVar9)));
        (**(code **)(*DAT_140c65670 + 0x270))(DAT_140c65670,1,local_48);
        uVar5 = (**(code **)(*DAT_140c65688 + 0xd8))();
        (**(code **)(*DAT_140c65670 + 0x160))(DAT_140c65670,0,*(undefined8 *)(lVar3 + 0x48),0,uVar5);
        (**(code **)(*DAT_140c65670 + 0x160))(DAT_140c65670,1,*(undefined8 *)(lVar3 + 0x28),0,0);
        (**(code **)(*DAT_140c65670 + 0x160))(DAT_140c65670,2,puVar4[1],0,0);
        uVar15 = 0;
        (**(code **)(*DAT_140c65670 + 0x160))
                (DAT_140c65670,3,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x200),0,0);
        uVar15 = uVar15 & 0xffffffff00000000;
        pauVar6 = (undefined (*) [16])
                (**(code **)(*DAT_140c65670 + 0x110))(DAT_140c65670,0xe0,0,0,uVar15);
        uVar9 = (undefined4)(uVar15 >> 0x20);
        if (pauVar6 != (undefined (*) [16])0x0) {
            lVar7 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + 0x200) + 0x18))();
            fVar10 = fVar14 / (float)(ulonglong)*(uint *)(lVar7 + 8);
            *pauVar6 = ZEXT816(CONCAT44(fVar14 / (float)*(int *)(lVar3 + 0x5c),
                                        fVar14 / (float)*(int *)(lVar3 + 0x58)));
            uVar11 = *(undefined4 *)(param_1 + 0x144);
            uVar12 = *(undefined4 *)(param_1 + 0x148);
            uVar13 = *(undefined4 *)(param_1 + 0x14c);
            *(undefined4 *)pauVar6[1] = *(undefined4 *)(param_1 + 0x140);
            *(undefined4 *)(pauVar6[1] + 4) = uVar11;
            *(undefined4 *)(pauVar6[1] + 8) = uVar12;
            *(undefined4 *)(pauVar6[1] + 0xc) = uVar13;
            pauVar6[2] = CONCAT412(fVar14,CONCAT48(fVar14,CONCAT44(fVar10 * 1.5,fVar10 * 0.5)));
            uVar11 = *(undefined4 *)(param_1 + 0x164);
            uVar12 = *(undefined4 *)(param_1 + 0x168);
            uVar13 = *(undefined4 *)(param_1 + 0x16c);
            *(undefined4 *)pauVar6[5] = *(undefined4 *)(param_1 + 0x160);
            *(undefined4 *)(pauVar6[5] + 4) = uVar11;
            *(undefined4 *)(pauVar6[5] + 8) = uVar12;
            *(undefined4 *)(pauVar6[5] + 0xc) = uVar13;
            uVar11 = *(undefined4 *)(param_1 + 0x174);
            uVar12 = *(undefined4 *)(param_1 + 0x178);
            uVar13 = *(undefined4 *)(param_1 + 0x17c);
            *(undefined4 *)pauVar6[6] = *(undefined4 *)(param_1 + 0x170);
            *(undefined4 *)(pauVar6[6] + 4) = uVar11;
            *(undefined4 *)(pauVar6[6] + 8) = uVar12;
            *(undefined4 *)(pauVar6[6] + 0xc) = uVar13;
            uVar11 = *(undefined4 *)(param_1 + 0x184);
            uVar12 = *(undefined4 *)(param_1 + 0x188);
            uVar13 = *(undefined4 *)(param_1 + 0x18c);
            *(undefined4 *)pauVar6[7] = *(undefined4 *)(param_1 + 0x180);
            *(undefined4 *)(pauVar6[7] + 4) = uVar11;
            *(undefined4 *)(pauVar6[7] + 8) = uVar12;
            *(undefined4 *)(pauVar6[7] + 0xc) = uVar13;
            uVar11 = *(undefined4 *)(param_1 + 0x194);
            uVar12 = *(undefined4 *)(param_1 + 0x198);
            uVar13 = *(undefined4 *)(param_1 + 0x19c);
            *(undefined4 *)pauVar6[8] = *(undefined4 *)(param_1 + 400);
            *(undefined4 *)(pauVar6[8] + 4) = uVar11;
            *(undefined4 *)(pauVar6[8] + 8) = uVar12;
            *(undefined4 *)(pauVar6[8] + 0xc) = uVar13;
            uVar11 = *(undefined4 *)(param_1 + 0x1a4);
            uVar12 = *(undefined4 *)(param_1 + 0x1a8);
            uVar13 = *(undefined4 *)(param_1 + 0x1ac);
            *(undefined4 *)pauVar6[9] = *(undefined4 *)(param_1 + 0x1a0);
            *(undefined4 *)(pauVar6[9] + 4) = uVar11;
            *(undefined4 *)(pauVar6[9] + 8) = uVar12;
            *(undefined4 *)(pauVar6[9] + 0xc) = uVar13;
            uVar11 = *(undefined4 *)(param_1 + 0x1b4);
            uVar12 = *(undefined4 *)(param_1 + 0x1b8);
            uVar13 = *(undefined4 *)(param_1 + 0x1bc);
            *(undefined4 *)pauVar6[10] = *(undefined4 *)(param_1 + 0x1b0);
            *(undefined4 *)(pauVar6[10] + 4) = uVar11;
            *(undefined4 *)(pauVar6[10] + 8) = uVar12;
            *(undefined4 *)(pauVar6[10] + 0xc) = uVar13;
            uVar11 = *(undefined4 *)(param_1 + 0x1c4);
            uVar12 = *(undefined4 *)(param_1 + 0x1c8);
            uVar13 = *(undefined4 *)(param_1 + 0x1cc);
            *(undefined4 *)pauVar6[0xb] = *(undefined4 *)(param_1 + 0x1c0);
            *(undefined4 *)(pauVar6[0xb] + 4) = uVar11;
            *(undefined4 *)(pauVar6[0xb] + 8) = uVar12;
            *(undefined4 *)(pauVar6[0xb] + 0xc) = uVar13;
            uVar11 = *(undefined4 *)(param_1 + 0x1d4);
            uVar12 = *(undefined4 *)(param_1 + 0x1d8);
            uVar13 = *(undefined4 *)(param_1 + 0x1dc);
            *(undefined4 *)pauVar6[0xc] = *(undefined4 *)(param_1 + 0x1d0);
            *(undefined4 *)(pauVar6[0xc] + 4) = uVar11;
            *(undefined4 *)(pauVar6[0xc] + 8) = uVar12;
            *(undefined4 *)(pauVar6[0xc] + 0xc) = uVar13;
            uVar11 = *(undefined4 *)(param_1 + 0x154);
            uVar12 = *(undefined4 *)(param_1 + 0x158);
            uVar13 = *(undefined4 *)(param_1 + 0x15c);
            *(undefined4 *)pauVar6[3] = *(undefined4 *)(param_1 + 0x150);
            *(undefined4 *)(pauVar6[3] + 4) = uVar11;
            *(undefined4 *)(pauVar6[3] + 8) = uVar12;
            *(undefined4 *)(pauVar6[3] + 0xc) = uVar13;
            uVar11 = *(undefined4 *)(param_1 + 0x3d4);
            uVar12 = *(undefined4 *)(param_1 + 0x3d8);
            uVar13 = *(undefined4 *)(param_1 + 0x3dc);
            *(undefined4 *)pauVar6[4] = *(undefined4 *)(param_1 + 0x3d0);
            *(undefined4 *)(pauVar6[4] + 4) = uVar11;
            *(undefined4 *)(pauVar6[4] + 8) = uVar12;
            *(undefined4 *)(pauVar6[4] + 0xc) = uVar13;
            puVar8 = (undefined4 *)(**(code **)(*DAT_140c65688 + 0xf8))();
            uVar11 = puVar8[1];
            uVar12 = puVar8[2];
            uVar13 = puVar8[3];
            *(undefined4 *)pauVar6[0xd] = *puVar8;
            *(undefined4 *)(pauVar6[0xd] + 4) = uVar11;
            *(undefined4 *)(pauVar6[0xd] + 8) = uVar12;
            *(undefined4 *)(pauVar6[0xd] + 0xc) = uVar13;
            (**(code **)(*DAT_140c65670 + 0x118))();
        }
        (**(code **)(*DAT_140c65670 + 0x178))
                (DAT_140c65670,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x208),0);
        iVar2 = DAT_140c40550;
        if (*DAT_140c63750 < DAT_140c40550) {
            iVar2 = *DAT_140c63750;
        }
        cVar1 = (&DAT_140c40560)[iVar2];
        if (cVar1 == '\0') {
            (**(code **)(*DAT_140c65670 + 0x1a8))(DAT_140c65670,0x80,0x80,0x80);
        }
        else {
            (**(code **)(*DAT_140c65670 + 0x1a8))();
        }
        (**(code **)(*DAT_140c65670 + 0x1b0))(DAT_140c65670,0,0,cVar1 == '\0',CONCAT44(uVar9,2));
        (**(code **)(*DAT_140c65670 + 0x298))
                (DAT_140c65670,0xffffffff,*DAT_140c65670,lVar3 + 0x58,lVar3 + 0x60,lVar3 + 0x60);
    }
    return 0;
}



undefined8 FUN_140366690(longlong param_1)

{
    longlong *plVar1;
    undefined4 local_18 [4];

    local_18[0] = 0xffffffff;
    (**(code **)(**(longlong **)(param_1 + 0x1838) + 0x20))(*(longlong **)(param_1 + 0x1838),local_18)
            ;
    for (plVar1 = *(longlong **)(param_1 + 0x1508); plVar1 != (longlong *)0x0;
         plVar1 = (longlong *)plVar1[0x3e]) {
        if ((*(uint *)((longlong)plVar1 + 300) & 0x3a0) != 0) {
            local_18[0] = 0xffffffff;
            (**(code **)(*plVar1 + 0x38))(plVar1,local_18);
            (**(code **)(*DAT_140c65688 + 0x68))(DAT_140c65688,plVar1 + 4);
        }
    }
    if ((*(longlong *)(param_1 + 0x2e8) != 0) || (*(longlong *)(param_1 + 0x2f0) != 0)) {
        (**(code **)(param_1 + 0x2f0))();
    }
    return 0;
}



undefined8 FUN_140366730(longlong param_1,int param_2)

{
    undefined8 uVar1;
    longlong *plVar2;
    bool bVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    int iVar7;
    longlong **pplVar8;
    longlong lVar9;
    longlong lVar10;
    longlong lVar11;
    longlong *plVar12;
    uint uVar13;
    byte bVar14;
    longlong *plVar15;
    bool bVar16;
    longlong *local_res8;
    uint local_res10;
    longlong *local_res18;
    undefined4 local_48 [4];

    local_48[0] = 0xffffffff;
    local_res10 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x1848) + 0x20))(*(longlong **)(param_1 + 0x1848),local_48)
            ;
    bVar16 = param_2 == 8;
    local_res10 = (uint)bVar16;
    if (param_2 != 0x11) {
        uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x210);
        lVar11 = *(longlong *)(param_1 + 0x1558);
        if (lVar11 != *(longlong *)(param_1 + 0x1548)) {
            do {
                iVar5 = FUN_1403913a0(lVar11,bVar16,uVar1);
                if (iVar5 != 0) {
                    if ((*(uint *)(param_1 + 0x80) & 0x400) != 0) {
                        for (lVar9 = *(longlong *)(lVar11 + 0x98);
                             (lVar9 != 0 && (*(longlong *)(lVar9 + 0x40) != 0));
                             lVar9 = *(longlong *)(lVar9 + 0x28)) {
                            FUN_140390390(lVar9,0x80);
                        }
                    }
                    FUN_1403914b0(lVar11,0x80);
                    if (*(longlong *)(lVar11 + 0x18) == 0) {
                        lVar9 = *(longlong *)(*(longlong *)(lVar11 + 8) + 0x10) + 0xdb0;
                    }
                    else {
                        lVar9 = *(longlong *)(lVar11 + 0x18) + 0x40;
                    }
                    (**(code **)(*DAT_140c65688 + 0x80))(DAT_140c65688,lVar9,lVar11 + 0xb0,uVar1);
                }
                lVar11 = *(longlong *)(lVar11 + 0x148);
            } while (lVar11 != *(longlong *)(param_1 + 0x1548));
        }
        plVar12 = *(longlong **)(param_1 + 0x1538);
        if ((plVar12 == (longlong *)0x0) ||
            (*(longlong *)(param_1 + 0x1548) != *(longlong *)(param_1 + 0x1540))) {
            bVar14 = -(plVar12 != (longlong *)0x0) & 0x80;
            if (plVar12 == (longlong *)0x0) {
                local_res8 = plVar12;
                bVar4 = false;
                bVar3 = true;
            }
            else {
                bVar4 = true;
                bVar3 = false;
                plVar12 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x210);
                local_res8 = plVar12;
                if (plVar12 != (longlong *)0x0) {
                    (**(code **)*plVar12)(plVar12);
                }
            }
            plVar15 = local_res8;
            if ((bVar3) && (local_res8 != (longlong *)0x0)) {
                (**(code **)(*local_res8 + 8))();
            }
            if ((bVar4) && (plVar12 != (longlong *)0x0)) {
                (**(code **)(*plVar12 + 8))(plVar12);
            }
            uVar13 = 0;
            if (plVar15 != (longlong *)0x0) {
                (**(code **)(*plVar15 + 0x18))(plVar15);
            }
            lVar11 = *(longlong *)(param_1 + 0x1548);
            if (lVar11 != *(longlong *)(param_1 + 0x1540)) {
                do {
                    uVar6 = FUN_1403913a0(lVar11,bVar16,0);
                    lVar11 = *(longlong *)(lVar11 + 0x148);
                    uVar13 = uVar13 | uVar6;
                } while (lVar11 != *(longlong *)(param_1 + 0x1540));
            }
            if (plVar15 != (longlong *)0x0) {
                (**(code **)(*plVar15 + 0x20))(plVar15);
            }
            if ((uVar13 != 0) || (bVar14 == 0)) {
                if ((*(uint *)(param_1 + 0x80) & 0x400) != 0) {
                    for (lVar11 = *(longlong *)(param_1 + 0x1528); lVar11 != 0;
                         lVar11 = *(longlong *)(lVar11 + 0x48)) {
                        FUN_140390390(lVar11,bVar14);
                    }
                }
                lVar11 = *(longlong *)(param_1 + 0x1548);
                if (lVar11 != *(longlong *)(param_1 + 0x1540)) {
                    do {
                        FUN_1403914b0(lVar11,bVar14);
                        lVar11 = *(longlong *)(lVar11 + 0x148);
                    } while (lVar11 != *(longlong *)(param_1 + 0x1540));
                }
                if (bVar14 == 0) {
                    lVar11 = 0;
                }
                else {
                    lVar11 = param_1 + 0x750;
                }
                (**(code **)(*DAT_140c65688 + 0x80))(DAT_140c65688,param_1 + 0xdb0,lVar11,plVar15);
            }
        }
        bVar3 = false;
        bVar16 = false;
        plVar12 = local_res8;
        plVar15 = local_res18;
        for (lVar11 = *(longlong *)(param_1 + 0x1540); lVar11 != 0;
             lVar11 = *(longlong *)(lVar11 + 0x148)) {
            iVar5 = 0;
            if (*(longlong *)(param_1 + 0x1538) == lVar11) {
                bVar16 = true;
                plVar15 = (longlong *)0x0;
                pplVar8 = &local_res18;
                local_res18 = (longlong *)0x0;
            }
            else {
                iVar5 = 0x80;
                bVar3 = true;
                plVar12 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x210);
                local_res8 = plVar12;
                if (plVar12 != (longlong *)0x0) {
                    (**(code **)*plVar12)(plVar12);
                }
                pplVar8 = &local_res8;
            }
            plVar2 = *pplVar8;
            if ((bVar16) && (bVar16 = false, plVar15 != (longlong *)0x0)) {
                (**(code **)(*plVar15 + 8))(plVar15);
            }
            if ((bVar3) && (bVar3 = false, plVar12 != (longlong *)0x0)) {
                (**(code **)(*plVar12 + 8))(plVar12);
            }
            iVar7 = FUN_1403913a0(lVar11,local_res10,plVar2);
            if ((iVar7 != 0) || (iVar5 == 0)) {
                if ((*(uint *)(param_1 + 0x80) & 0x400) != 0) {
                    for (lVar9 = *(longlong *)(lVar11 + 0x98);
                         (lVar9 != 0 && (*(longlong *)(lVar9 + 0x40) != 0));
                         lVar9 = *(longlong *)(lVar9 + 0x28)) {
                        FUN_140390390(lVar9,iVar5);
                    }
                }
                FUN_1403914b0(lVar11,iVar5);
                if (iVar5 == 0) {
                    lVar9 = 0;
                }
                else {
                    lVar9 = lVar11 + 0xb0;
                }
                if (*(longlong *)(lVar11 + 0x18) == 0) {
                    lVar10 = *(longlong *)(*(longlong *)(lVar11 + 8) + 0x10) + 0xdb0;
                }
                else {
                    lVar10 = *(longlong *)(lVar11 + 0x18) + 0x40;
                }
                (**(code **)(*DAT_140c65688 + 0x80))(DAT_140c65688,lVar10,lVar9,plVar2);
            }
        }
        return 0;
    }
    (**(code **)(*DAT_140c65688 + 0x80))(DAT_140c65688,param_1 + 0xdb0,0,0);
    return 0;
}



undefined8 FUN_140366bd0(longlong param_1,int param_2)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;

    (**(code **)(*DAT_140c65688 + 0x90))(DAT_140c65688,param_1 + 0xdb0);
    if ((*(int *)(param_1 + 0x10f0) == 0) || (param_2 != 0x12)) {
        if ((*(uint *)(param_1 + 0x80) & 0x10000) != 0) {
            for (lVar1 = *(longlong *)(param_1 + 0x1558); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x148)
                    ) {
                iVar2 = FUN_1403915c0(lVar1,param_1 + 0xdb0,param_2 == 9);
                if (iVar2 != 0) {
                    if (*(longlong *)(param_1 + 0x1538) == lVar1) {
                        if (*(longlong *)(lVar1 + 0x18) == 0) {
                            lVar3 = *(longlong *)(*(longlong *)(lVar1 + 8) + 0x10) + 0xdb0;
                        }
                        else {
                            lVar3 = *(longlong *)(lVar1 + 0x18) + 0x40;
                        }
                        (**(code **)(*DAT_140c65688 + 0xb0))(DAT_140c65688,lVar3);
                    }
                    else {
                        FUN_1403916d0(lVar1);
                    }
                }
            }
            if (*(longlong *)(param_1 + 0x1538) != 0) {
                return 0;
            }
        }
        (**(code **)(*DAT_140c65688 + 0xb0))(DAT_140c65688,param_1 + 0xdb0);
    }
    return 0;
}



void FUN_140366cd0(longlong param_1)

{
    longlong **pplVar1;
    longlong *plVar2;
    uint uVar3;
    longlong **pplVar4;
    longlong lVar5;
    ulonglong uVar6;
    longlong lVar7;

    lVar7 = 0;
    if ((*(longlong *)(param_1 + 0x8e0) != 0) &&
        (uVar3 = *(int *)(param_1 + 0x8a0) * *(int *)(param_1 + 0x89c), uVar3 != 0)) {
        uVar6 = (ulonglong)uVar3;
        lVar5 = lVar7;
        do {
            if (*(longlong *)(lVar5 + *(longlong *)(param_1 + 0x8e0)) != 0) {
                FUN_140382d50();
            }
            lVar5 = lVar5 + 8;
            uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
    }
    if ((*(longlong *)(param_1 + 0x990) != 0) &&
        (uVar3 = *(int *)(param_1 + 0x97c) * *(int *)(param_1 + 0x978), uVar3 != 0)) {
        uVar6 = (ulonglong)uVar3;
        do {
            plVar2 = *(longlong **)(lVar7 + *(longlong *)(param_1 + 0x990));
            if ((plVar2 != (longlong *)0x0) && (plVar2[0x12] == 0)) {
                pplVar1 = (longlong **)(plVar2 + 0x13);
                pplVar4 = (longlong **)(*plVar2 + 0x9a8);
                plVar2[0x12] = (longlong)pplVar4;
                *pplVar1 = *pplVar4;
                *pplVar4 = plVar2;
                if (*pplVar1 != (longlong *)0x0) {
                    (*pplVar1)[0x12] = (longlong)pplVar1;
                }
                *(undefined4 *)(*plVar2 + 0x9b0) = 0;
            }
            lVar7 = lVar7 + 8;
            uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
    }
    return;
}



void FUN_140366dd0(undefined8 param_1,longlong param_2)

{
    ulonglong *puVar1;
    int iVar2;
    uint uVar3;
    DWORD DVar4;
    undefined4 *puVar5;
    HANDLE hObject;
    int iVar6;
    ulonglong uVar7;
    longlong **pplVar8;
    ulonglong uVar9;
    longlong lVar10;
    longlong **pplVar11;
    float fVar12;
    float fVar13;

    pplVar11 = (longlong **)(param_2 + 0x1280);
    lVar10 = 4;
    uVar7 = 0;
    pplVar8 = pplVar11;
    do {
        if (*pplVar8 != (longlong *)0x0) {
            (**(code **)(**pplVar8 + 8))();
            *pplVar8 = (longlong *)0x0;
        }
        pplVar8 = pplVar8 + 1;
        lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    fVar13 = 1.0;
    uVar9 = uVar7;
    do {
        lVar10 = (**(code **)(**(longlong **)(param_2 + 0x18) + 0x40))();
        if (*(int *)(lVar10 + 4 + uVar9) != 0) {
            lVar10 = (**(code **)(**(longlong **)(param_2 + 0x18) + 0x40))();
            iVar2 = FUN_140354aa0(param_2,*(undefined4 *)(lVar10 + 4 + uVar9),pplVar11);
            if (iVar2 < 0) {
                iVar2 = (**(code **)(**(longlong **)(param_2 + 0x18) + 0x40))();
            }
            fVar12 = *(float *)((longlong)*pplVar11 + 0x24);
            iVar6 = (int)fVar12;
            if ((iVar6 != -0x80000000) && ((float)iVar6 != fVar12)) {
                uVar3 = movmskps(iVar2,ZEXT816(CONCAT44(fVar12,fVar12)));
                fVar12 = (float)(iVar6 + (uVar3 & 1 ^ 1));
            }
            if (fVar12 <= fVar13) {
                fVar12 = fVar13;
            }
            *(float *)((longlong)*pplVar11 + 0x24) = fVar12;
        }
        uVar9 = uVar9 + 4;
        pplVar11 = pplVar11 + 1;
    } while (uVar9 < 0x10);
    if (*(longlong **)(param_2 + 0x12a0) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_2 + 0x12a0) + 8))();
        *(undefined8 *)(param_2 + 0x12a0) = 0;
    }
    lVar10 = (**(code **)(**(longlong **)(param_2 + 0x18) + 0x40))();
    if (*(int *)(lVar10 + 0x1c) != 0) {
        lVar10 = (**(code **)(**(longlong **)(param_2 + 0x18) + 0x40))();
        iVar2 = FUN_140354aa0(param_2,*(undefined4 *)(lVar10 + 0x1c),param_2 + 0x12a0);
        if (iVar2 < 0) {
            iVar2 = (**(code **)(**(longlong **)(param_2 + 0x18) + 0x40))();
        }
        fVar12 = *(float *)(*(longlong *)(param_2 + 0x12a0) + 0x24);
        iVar6 = (int)fVar12;
        if ((iVar6 != -0x80000000) && ((float)iVar6 != fVar12)) {
            uVar3 = movmskps(iVar2,ZEXT816(CONCAT44(fVar12,fVar12)));
            fVar12 = (float)(iVar6 + (uVar3 & 1 ^ 1));
        }
        if (fVar12 <= fVar13) {
            fVar12 = fVar13;
        }
        *(float *)(*(longlong *)(param_2 + 0x12a0) + 0x24) = fVar12;
    }
    if (*(longlong **)(param_2 + 0x12c8) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_2 + 0x12c8) + 8))();
        *(undefined8 *)(param_2 + 0x12c8) = 0;
    }
    puVar5 = (undefined4 *)(**(code **)(**(longlong **)(param_2 + 0x18) + 0x40))();
    FUN_140354930(param_2,*puVar5,param_2 + 0x12c8);
    DVar4 = GetCurrentThreadId();
    if (*(DWORD *)(param_2 + 0x50) == DVar4) {
        *(longlong *)(param_2 + 0x58) = *(longlong *)(param_2 + 0x58) + 1;
    }
    else {
        do {
            LOCK();
            puVar1 = (ulonglong *)(param_2 + 0x58);
            uVar9 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar9 == 0) * (*puVar1 ^ 1);
            if (uVar9 == 0) {
                *(DWORD *)(param_2 + 0x50) = DVar4;
                goto LAB_140366fd6;
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < 0x400);
        FUN_14019fb60(param_2 + 0x50);
    }
    LAB_140366fd6:
    for (lVar10 = *(longlong *)(param_2 + 0x17e8); lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0x110)
            ) {
        *(uint *)(lVar10 + 0x100) = *(uint *)(lVar10 + 0x100) & 0xfffffeff;
    }
    if (*(ulonglong *)(param_2 + 0x58) < 2) {
        *(undefined4 *)(param_2 + 0x50) = 0;
        *(undefined8 *)(param_2 + 0x58) = 0;
        if (*(longlong *)(param_2 + 0x60) != 0) {
            if (*(longlong *)(param_2 + 0x68) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                puVar1 = (ulonglong *)(param_2 + 0x68);
                uVar7 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar7 == 0) * (*puVar1 ^ (ulonglong)hObject);
                if (uVar7 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE *)(param_2 + 0x68));
        }
    }
    else {
        *(longlong *)(param_2 + 0x58) = *(longlong *)(param_2 + 0x58) + -1;
    }
    return;
}



void FUN_1403670b0(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
    undefined8 uVar1;
    longlong lVar2;

    uVar1 = (**(code **)(*param_1 + 0x28))();
    lVar2 = FUN_14035bf90(param_3,uVar1);
    if (lVar2 != 0) {
        FUN_1403830c0(lVar2,param_2);
    }
    return;
}



void FUN_1403670f0(longlong *param_1,undefined8 param_2)

{
    undefined8 uVar1;
    longlong lVar2;

    uVar1 = (**(code **)(*param_1 + 0x28))();
    lVar2 = FUN_14035bf90(param_2,uVar1);
    if (lVar2 != 0) {
        FUN_140383310(lVar2);
        return;
    }
    return;
}



void FUN_140367130(longlong *param_1,undefined8 param_2)

{
    undefined8 uVar1;
    longlong lVar2;

    uVar1 = (**(code **)(*param_1 + 0x28))();
    lVar2 = FUN_14035bf90(param_2,uVar1);
    if (lVar2 != 0) {
        FUN_140382e90(lVar2);
        return;
    }
    return;
}



void FUN_140367170(longlong *param_1,undefined8 param_2)

{
    undefined8 uVar1;
    longlong *plVar2;
    longlong **pplVar3;
    longlong **pplVar4;

    uVar1 = (**(code **)(*param_1 + 0x28))();
    plVar2 = (longlong *)FUN_14035bf90(param_2,uVar1);
    if (plVar2 != (longlong *)0x0) {
        *(uint *)((longlong)plVar2 + 0x24) = *(uint *)((longlong)plVar2 + 0x24) & 0xffffffbe;
        *(uint *)(plVar2 + 5) = *(uint *)(plVar2 + 5) & 0xffffeffe;
        *(uint *)((longlong)plVar2 + 0x2c) = *(uint *)((longlong)plVar2 + 0x2c) & 0xfffffffe;
        if (plVar2[0xb5] == 0) {
            pplVar3 = (longlong **)(plVar2 + 0xb6);
            pplVar4 = (longlong **)(*plVar2 + 0x8e8);
            plVar2[0xb5] = (longlong)pplVar4;
            *pplVar3 = *pplVar4;
            *pplVar4 = plVar2;
            if (*pplVar3 != (longlong *)0x0) {
                (*pplVar3)[0xb5] = (longlong)pplVar3;
            }
            *(undefined4 *)(*plVar2 + 0x8f0) = 0;
            *(int *)(*plVar2 + 0x874) = *(int *)(*plVar2 + 0x874) + 1;
        }
        if (plVar2[0xb7] == 0) {
            pplVar3 = (longlong **)(plVar2 + 0xb8);
            pplVar4 = (longlong **)(*plVar2 + 0x8f8);
            plVar2[0xb7] = (longlong)pplVar4;
            *pplVar3 = *pplVar4;
            *pplVar4 = plVar2;
            if (*pplVar3 != (longlong *)0x0) {
                (*pplVar3)[0xb7] = (longlong)pplVar3;
            }
            *(undefined4 *)(*plVar2 + 0x900) = 0;
            *(int *)(*plVar2 + 0x878) = *(int *)(*plVar2 + 0x878) + 1;
        }
        if (plVar2[0xb9] == 0) {
            pplVar3 = (longlong **)(plVar2 + 0xba);
            pplVar4 = (longlong **)(*plVar2 + 0x908);
            plVar2[0xb9] = (longlong)pplVar4;
            *pplVar3 = *pplVar4;
            *pplVar4 = plVar2;
            if (*pplVar3 != (longlong *)0x0) {
                (*pplVar3)[0xb9] = (longlong)pplVar3;
            }
            *(undefined4 *)(*plVar2 + 0x910) = 0;
            *(int *)(*plVar2 + 0x87c) = *(int *)(*plVar2 + 0x87c) + 1;
        }
        FUN_140389c40(plVar2);
        return;
    }
    return;
}



void FUN_1403671b0(longlong *param_1,undefined8 param_2)

{
    undefined8 uVar1;
    longlong *plVar2;
    longlong **pplVar3;
    longlong **pplVar4;

    uVar1 = (**(code **)(*param_1 + 0x28))();
    plVar2 = (longlong *)FUN_14035bf90(param_2,uVar1);
    if (plVar2 != (longlong *)0x0) {
        *(uint *)((longlong)plVar2 + 0x24) = *(uint *)((longlong)plVar2 + 0x24) & 0xfffffeff;
        *(uint *)(plVar2 + 5) = *(uint *)(plVar2 + 5) & 0xfffffffe;
        *(uint *)((longlong)plVar2 + 0x2c) = *(uint *)((longlong)plVar2 + 0x2c) & 0xfffffffe;
        if (plVar2[0xb5] == 0) {
            pplVar3 = (longlong **)(plVar2 + 0xb6);
            pplVar4 = (longlong **)(*plVar2 + 0x8e8);
            plVar2[0xb5] = (longlong)pplVar4;
            *pplVar3 = *pplVar4;
            *pplVar4 = plVar2;
            if (*pplVar3 != (longlong *)0x0) {
                (*pplVar3)[0xb5] = (longlong)pplVar3;
            }
            *(undefined4 *)(*plVar2 + 0x8f0) = 0;
            *(int *)(*plVar2 + 0x874) = *(int *)(*plVar2 + 0x874) + 1;
        }
        if (plVar2[0xb7] == 0) {
            pplVar3 = (longlong **)(plVar2 + 0xb8);
            pplVar4 = (longlong **)(*plVar2 + 0x8f8);
            plVar2[0xb7] = (longlong)pplVar4;
            *pplVar3 = *pplVar4;
            *pplVar4 = plVar2;
            if (*pplVar3 != (longlong *)0x0) {
                (*pplVar3)[0xb7] = (longlong)pplVar3;
            }
            *(undefined4 *)(*plVar2 + 0x900) = 0;
            *(int *)(*plVar2 + 0x878) = *(int *)(*plVar2 + 0x878) + 1;
        }
        if (plVar2[0xb9] == 0) {
            pplVar3 = (longlong **)(plVar2 + 0xba);
            pplVar4 = (longlong **)(*plVar2 + 0x908);
            plVar2[0xb9] = (longlong)pplVar4;
            *pplVar3 = *pplVar4;
            *pplVar4 = plVar2;
            if (*pplVar3 != (longlong *)0x0) {
                (*pplVar3)[0xb9] = (longlong)pplVar3;
            }
            *(undefined4 *)(*plVar2 + 0x910) = 0;
            *(int *)(*plVar2 + 0x87c) = *(int *)(*plVar2 + 0x87c) + 1;
        }
        return;
    }
    return;
}



ulonglong FUN_1403671f0(undefined8 param_1,longlong param_2)

{
    ulonglong uVar1;
    ulonglong uVar2;
    ulonglong *puVar3;
    undefined8 local_res8;

    local_res8 = param_1;
    uVar1 = (**(code **)(param_2 + 0x1400))(&local_res8);
    uVar2 = uVar1 / *(ulonglong *)(param_2 + 0x13f0);
    puVar3 = *(ulonglong **)
            (*(longlong *)(param_2 + 0x13f8) + (uVar1 % *(ulonglong *)(param_2 + 0x13f0)) * 8);
    if (puVar3 == (ulonglong *)0x0) {
        return uVar2;
    }
    while ((uVar1 != *puVar3 ||
            (uVar2 = (**(code **)(param_2 + 0x1408))(&local_res8,puVar3 + 2), (int)uVar2 == 0))) {
        puVar3 = (ulonglong *)puVar3[1];
        if (puVar3 == (ulonglong *)0x0) {
            return uVar2;
        }
    }
    if (puVar3 + 3 == (ulonglong *)0x0) {
        return uVar2;
    }
    uVar1 = FUN_140376f30(puVar3[3]);
    return uVar1;
}



void FUN_140367290(longlong *param_1,undefined8 param_2)

{
    undefined8 uVar1;
    longlong *plVar2;
    longlong **pplVar3;
    longlong **pplVar4;

    uVar1 = (**(code **)(*param_1 + 0x28))();
    plVar2 = (longlong *)FUN_14035c010(param_2,uVar1);
    if (plVar2 != (longlong *)0x0) {
        if (plVar2[0x10] == 0) {
            pplVar3 = (longlong **)(plVar2 + 0x11);
            pplVar4 = (longlong **)(*plVar2 + 0x998);
            plVar2[0x10] = (longlong)pplVar4;
            *pplVar3 = *pplVar4;
            *pplVar4 = plVar2;
            if (*pplVar3 != (longlong *)0x0) {
                (*pplVar3)[0x10] = (longlong)pplVar3;
            }
            *(undefined4 *)(*plVar2 + 0x9a0) = 0;
        }
        if (plVar2[0x12] == 0) {
            pplVar3 = (longlong **)(plVar2 + 0x13);
            pplVar4 = (longlong **)(*plVar2 + 0x9a8);
            plVar2[0x12] = (longlong)pplVar4;
            *pplVar3 = *pplVar4;
            *pplVar4 = plVar2;
            if (*pplVar3 != (longlong *)0x0) {
                (*pplVar3)[0x12] = (longlong)pplVar3;
            }
            *(undefined4 *)(*plVar2 + 0x9b0) = 0;
        }
        return;
    }
    return;
}



void FUN_1403672d0(longlong *param_1,int param_2,undefined8 param_3)

{
    longlong **pplVar1;
    undefined8 uVar2;
    longlong *plVar3;
    longlong **pplVar4;

    uVar2 = (**(code **)(*param_1 + 0x28))();
    plVar3 = (longlong *)FUN_14035c010(param_3,uVar2);
    if (((plVar3 != (longlong *)0x0) && (param_2 - 9U < 2)) && (plVar3[0x12] == 0)) {
        pplVar1 = (longlong **)(plVar3 + 0x13);
        pplVar4 = (longlong **)(*plVar3 + 0x9a8);
        plVar3[0x12] = (longlong)pplVar4;
        *pplVar1 = *pplVar4;
        *pplVar4 = plVar3;
        if (*pplVar1 != (longlong *)0x0) {
            (*pplVar1)[0x12] = (longlong)pplVar1;
        }
        *(undefined4 *)(*plVar3 + 0x9b0) = 0;
    }
    return;
}



undefined8 FUN_140367360(longlong param_1,longlong param_2)

{
    int iVar1;
    longlong lVar2;
    int iVar3;
    uint uVar4;
    longlong *plVar5;
    int iVar6;
    int iVar7;

    iVar7 = *(int *)(param_1 + 0x890);
    if (iVar7 < *(int *)(param_1 + 0x898)) {
        do {
            iVar6 = *(int *)(param_1 + 0x88c);
            if (iVar6 < *(int *)(param_1 + 0x894)) {
                do {
                    iVar1 = *(int *)(param_1 + 0x89c);
                    iVar3 = iVar7 % *(int *)(param_1 + 0x8a0);
                    lVar2 = *(longlong *)
                            (*(longlong *)(param_1 + 0x8e0) +
                             (ulonglong)
                                     ((uint)(iVar6 % iVar1 < 0) * iVar1 +
                                      ((uint)(iVar3 < 0) * *(int *)(param_1 + 0x8a0) + iVar3) * iVar1 + iVar6 % iVar1)
                             * 8);
                    if (lVar2 != 0) {
                        uVar4 = 0;
                        plVar5 = (longlong *)(lVar2 + 0x38);
                        do {
                            if (*plVar5 == param_2) break;
                            uVar4 = uVar4 + 1;
                            plVar5 = plVar5 + 1;
                        } while (uVar4 < 4);
                        if (uVar4 != 4) {
                            FUN_140383610();
                        }
                    }
                    iVar6 = iVar6 + 1;
                } while (iVar6 < *(int *)(param_1 + 0x894));
            }
            iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(param_1 + 0x898));
    }
    return 0;
}



undefined8 FUN_140367440(longlong param_1,longlong param_2)

{
    longlong **pplVar1;
    int iVar2;
    longlong *plVar3;
    int iVar4;
    longlong *plVar5;
    uint uVar6;
    longlong **pplVar7;
    int iVar8;
    int iVar9;

    iVar9 = *(int *)(param_1 + 0x9c4);
    if (iVar9 < *(int *)(param_1 + 0x9cc)) {
        do {
            iVar8 = *(int *)(param_1 + 0x9c0);
            if (iVar8 < *(int *)(param_1 + 0x9c8)) {
                do {
                    iVar2 = *(int *)(param_1 + 0x89c);
                    iVar4 = iVar9 % *(int *)(param_1 + 0x8a0);
                    plVar3 = *(longlong **)
                            (*(longlong *)(param_1 + 0x8e0) +
                             (ulonglong)
                                     ((uint)(iVar8 % iVar2 < 0) * iVar2 +
                                      ((uint)(iVar4 < 0) * *(int *)(param_1 + 0x8a0) + iVar4) * iVar2 + iVar8 % iVar2)
                             * 8);
                    if (plVar3 != (longlong *)0x0) {
                        uVar6 = 0;
                        plVar5 = plVar3 + 0x40;
                        do {
                            if (*plVar5 == param_2) break;
                            if (plVar5[1] == param_2) {
                                uVar6 = uVar6 + 1;
                                break;
                            }
                            if (plVar5[2] == param_2) {
                                uVar6 = uVar6 + 2;
                                break;
                            }
                            if (plVar5[3] == param_2) {
                                uVar6 = uVar6 + 3;
                                break;
                            }
                            uVar6 = uVar6 + 4;
                            plVar5 = plVar5 + 4;
                        } while (uVar6 < 0x10);
                        if ((uVar6 != 0x10) && (*(int *)(plVar3 + 0x62) != 0)) {
                            FUN_140383760();
                            *(uint *)((longlong)plVar3 + 0x2c) = *(uint *)((longlong)plVar3 + 0x2c) & 0xfffffff5;
                            if (plVar3[0xb9] == 0) {
                                pplVar1 = (longlong **)(plVar3 + 0xba);
                                pplVar7 = (longlong **)(*plVar3 + 0x908);
                                plVar3[0xb9] = (longlong)pplVar7;
                                *pplVar1 = *pplVar7;
                                *pplVar7 = plVar3;
                                if (*pplVar1 != (longlong *)0x0) {
                                    (*pplVar1)[0xb9] = (longlong)pplVar1;
                                }
                                *(int *)(*plVar3 + 0x87c) = *(int *)(*plVar3 + 0x87c) + 1;
                            }
                        }
                    }
                    iVar8 = iVar8 + 1;
                } while (iVar8 < *(int *)(param_1 + 0x9c8));
            }
            iVar9 = iVar9 + 1;
        } while (iVar9 < *(int *)(param_1 + 0x9cc));
    }
    return 0;
}



void FUN_1403675c0(longlong param_1,longlong *param_2)

{
    undefined4 uVar1;
    longlong *plVar2;
    int iVar3;
    longlong lVar4;
    undefined4 local_28 [2];
    longlong *local_20;

    lVar4 = (**(code **)(*param_2 + 0x148))(param_2);
    if (((lVar4 != 0) && (param_2 == (longlong *)param_2[4])) &&
        (*(code **)(param_1 + 0x1458) != (code *)0x0)) {
        (**(code **)(param_1 + 0x1458))(param_2,0,*(undefined8 *)(param_1 + 0x1460));
    }
    if (param_2[0xb] != 0) {
        iVar3 = FUN_14036fd60(param_1 + 0x1410,param_2 + 0xb,local_28);
        uVar1 = local_28[0];
        if (iVar3 == 0) {
            local_28[0] = 0;
            local_20 = param_2;
            FUN_14036fcb0(param_1 + 0x1410,param_2 + 0xb,local_28);
            return;
        }
        if (local_20 != param_2) {
            if (local_20 != (longlong *)0x0) {
                if (*(code **)(param_1 + 0x1438) != (code *)0x0) {
                    (**(code **)(param_1 + 0x1438))(local_28[0],0,*(undefined8 *)(param_1 + 0x1440));
                    FUN_1403790a0(local_20);
                }
                if (*(code **)(param_1 + 0x1458) != (code *)0x0) {
                    (**(code **)(param_1 + 0x1458))(local_20,3,*(undefined8 *)(param_1 + 0x1460));
                }
                if (*(longlong *)(param_1 + 0x1438) != 0) {
                    FUN_1403791a0(local_20);
                }
            }
            *(undefined4 *)(param_2 + 0xd) = uVar1;
            local_20 = param_2;
            FUN_14036fe00(param_1 + 0x1410,param_2 + 0xb,local_28);
            plVar2 = local_20;
            if (*(code **)(param_1 + 0x1458) != (code *)0x0) {
                (**(code **)(param_1 + 0x1458))(param_2,2,*(undefined8 *)(param_1 + 0x1460));
                FUN_1403790a0(plVar2);
            }
            if (*(code **)(param_1 + 0x1438) != (code *)0x0) {
                (**(code **)(param_1 + 0x1438))(local_28[0],param_2,*(undefined8 *)(param_1 + 0x1440));
            }
            if (*(longlong *)(param_1 + 0x1458) != 0) {
                FUN_1403791a0(plVar2);
            }
        }
    }
    return;
}



void FUN_140367760(longlong param_1,longlong *param_2)

{
    int iVar1;
    longlong lVar2;
    int local_18 [2];
    longlong *local_10;

    lVar2 = (**(code **)(*param_2 + 0x148))(param_2);
    if (((param_2[0xb] != 0) &&
         (iVar1 = FUN_14036fd60(param_1 + 0x1410,param_2 + 0xb,local_18), iVar1 != 0)) &&
        (local_10 == param_2)) {
        if (local_18[0] == 0) {
            FUN_1400b6120(param_1 + 0x1410,param_2 + 0xb);
        }
        else {
            if (*(code **)(param_1 + 0x1438) != (code *)0x0) {
                (**(code **)(param_1 + 0x1438))(local_18[0],0,*(undefined8 *)(param_1 + 0x1440));
            }
            if (*(code **)(param_1 + 0x1458) != (code *)0x0) {
                (**(code **)(param_1 + 0x1458))(param_2,3,*(undefined8 *)(param_1 + 0x1460));
            }
            *(undefined4 *)(param_2 + 0xd) = 0;
            local_10 = (longlong *)0x0;
            FUN_14036fe00(param_1 + 0x1410,param_2 + 0xb,local_18);
        }
    }
    if (((lVar2 != 0) && (param_2 == (longlong *)param_2[4])) &&
        (*(code **)(param_1 + 0x1458) != (code *)0x0)) {
        (**(code **)(param_1 + 0x1458))(param_2,1,*(undefined8 *)(param_1 + 0x1460));
    }
    return;
}



void FUN_140367870(longlong param_1,float *param_2)

{
    int iVar1;
    int iVar2;
    int iVar3;
    uint in_EAX;
    uint uVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    undefined auVar9 [16];
    undefined auVar10 [16];
    float fVar11;
    undefined auVar13 [16];
    undefined auVar12 [16];

    fVar11 = (DAT_140c43fb8 * *param_2 + 0.5) * 2048.0;
    auVar12 = ZEXT416((uint)fVar11) & (undefined  [16])0xffffffffffffffff;
    iVar6 = (int)fVar11;
    if ((iVar6 != -0x80000000) && ((float)iVar6 != fVar11)) {
        uVar4 = movmskps(in_EAX,ZEXT816(SUB168(auVar12,0) | SUB168(auVar12,0) << 0x20));
        in_EAX = uVar4 & 1;
        auVar12 = ZEXT416((uint)(float)(iVar6 - in_EAX));
    }
    auVar9 = ZEXT416((uint)(DAT_140c43fb8 * param_2[2])) & (undefined  [16])0xffffffffffffffff;
    fVar11 = (SUB164(auVar9,0) + 0.5) * 2048.0;
    auVar13 = CONCAT124(SUB1612(auVar9 >> 0x20,0),fVar11);
    iVar6 = (int)fVar11;
    if ((iVar6 != -0x80000000) && ((float)iVar6 != fVar11)) {
        uVar4 = movmskps(in_EAX,CONCAT88(SUB168(auVar9 >> 0x40,0),
                                         SUB168(auVar13,0) | SUB168(auVar13,0) << 0x20) &
                                (undefined  [16])0xffffffffffffffff);
        in_EAX = uVar4 & 1;
        auVar13 = ZEXT416((uint)(float)(iVar6 - in_EAX));
    }
    auVar9 = ZEXT416((uint)(DAT_140c43fb8 * param_2[4])) & (undefined  [16])0xffffffffffffffff;
    fVar11 = (SUB164(auVar9,0) + 0.5) * 2048.0;
    auVar10 = CONCAT124(SUB1612(auVar9 >> 0x20,0),fVar11);
    iVar6 = (int)fVar11;
    if ((iVar6 != -0x80000000) && ((float)iVar6 != fVar11)) {
        uVar4 = movmskps(in_EAX,CONCAT88(SUB168(auVar9 >> 0x40,0),
                                         SUB168(auVar10,0) | SUB168(auVar10,0) << 0x20) &
                                (undefined  [16])0xffffffffffffffff);
        in_EAX = uVar4 & 1;
        auVar10 = ZEXT416((uint)(float)(iVar6 - in_EAX));
    }
    auVar9 = ZEXT416((uint)(DAT_140c43fb8 * param_2[6])) & (undefined  [16])0xffffffffffffffff;
    iVar7 = (int)SUB164(auVar10,0) + 1;
    fVar11 = (SUB164(auVar9,0) + 0.5) * 2048.0;
    auVar10 = CONCAT124(SUB1612(auVar9 >> 0x20,0),fVar11);
    iVar6 = (int)fVar11;
    if ((iVar6 != -0x80000000) && ((float)iVar6 != fVar11)) {
        uVar4 = movmskps(in_EAX,CONCAT88(SUB168(auVar9 >> 0x40,0),
                                         SUB168(auVar10,0) | SUB168(auVar10,0) << 0x20) &
                                (undefined  [16])0xffffffffffffffff);
        auVar10 = ZEXT416((uint)(float)(iVar6 - (uVar4 & 1)));
    }
    iVar5 = (int)SUB164(auVar10,0) + 1;
    iVar6 = *(int *)(param_1 + 0x894);
    if (iVar7 < *(int *)(param_1 + 0x894)) {
        iVar6 = iVar7;
    }
    iVar7 = *(int *)(param_1 + 0x898);
    if (iVar5 < *(int *)(param_1 + 0x898)) {
        iVar7 = iVar5;
    }
    iVar5 = *(int *)(param_1 + 0x88c);
    if (*(int *)(param_1 + 0x88c) < (int)SUB164(auVar12,0)) {
        iVar5 = (int)SUB164(auVar12,0);
    }
    iVar8 = *(int *)(param_1 + 0x890);
    if (*(int *)(param_1 + 0x890) < (int)SUB164(auVar13,0)) {
        iVar8 = (int)SUB164(auVar13,0);
    }
    if (iVar5 < iVar6) {
        for (; iVar3 = iVar5, iVar8 < iVar7; iVar8 = iVar8 + 1) {
            for (; iVar3 < iVar6; iVar3 = iVar3 + 1) {
                if ((((*(int *)(param_1 + 0x88c) <= iVar3) && (iVar3 < *(int *)(param_1 + 0x894))) &&
                     (*(int *)(param_1 + 0x890) <= iVar8)) &&
                    ((iVar8 < *(int *)(param_1 + 0x898) &&
                      (iVar1 = *(int *)(param_1 + 0x89c), iVar2 = iVar8 % *(int *)(param_1 + 0x8a0),
                              *(longlong *)
                                      (*(longlong *)(param_1 + 0x8e0) +
                                       (ulonglong)
                                               ((uint)(iVar3 % iVar1 < 0) * iVar1 +
                                                ((uint)(iVar2 < 0) * *(int *)(param_1 + 0x8a0) + iVar2) * iVar1 + iVar3 % iVar1) * 8)
                              != 0)))) {
                    FUN_140389c40();
                }
            }
        }
    }
    if (*(code **)(param_1 + 0x1448) != (code *)0x0) {
        (**(code **)(param_1 + 0x1448))(param_2,*(undefined8 *)(param_1 + 0x1450));
    }
    return;
}



int FUN_140367ad0(longlong param_1)

{
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *)(param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_1403522c0();
            FUN_14018b900(param_1,0);
        }
        iVar2 = 0;
    }
    return iVar2;
}



void FUN_140367b30(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined8 uVar4;

    (**(code **)(*param_2 + 0x98))();
    if ((*(uint *)(param_1 + 0x80) & 0x10000) == 0) {
        *(undefined8 *)(param_3 + 0x2b8) = 0;
    }
    else if (param_4 == 0) {
        *(undefined8 *)(param_3 + 0x2c0) = 0;
        *(undefined8 *)(param_3 + 0x2c8) = 0;
    }
    else {
        *(undefined4 *)(param_3 + 0x2c0) =
                *(undefined4 *)
                        ((ulonglong)*(uint *)(param_4 + 0x24) * 0x80 + 0x4f8 + *(longlong *)(param_1 + 0x10));
        *(undefined4 *)(param_3 + 0x2c4) =
                *(undefined4 *)
                        ((ulonglong)*(uint *)(param_4 + 0x24) * 0x80 + 0x4fc + *(longlong *)(param_1 + 0x10));
        *(undefined4 *)(param_3 + 0x2c8) =
                *(undefined4 *)
                        (((ulonglong)*(uint *)(param_4 + 0x24) + 10) * 0x80 + *(longlong *)(param_1 + 0x10));
        *(undefined4 *)(param_3 + 0x2cc) =
                *(undefined4 *)
                        ((ulonglong)*(uint *)(param_4 + 0x24) * 0x80 + 0x504 + *(longlong *)(param_1 + 0x10));
    }
    uVar1 = *(undefined4 *)(param_1 + 0x364);
    uVar2 = *(undefined4 *)(param_1 + 0x368);
    uVar3 = *(undefined4 *)(param_1 + 0x36c);
    *(undefined4 *)(param_3 + 0xd0) = *(undefined4 *)(param_1 + 0x360);
    *(undefined4 *)(param_3 + 0xd4) = uVar1;
    *(undefined4 *)(param_3 + 0xd8) = uVar2;
    *(undefined4 *)(param_3 + 0xdc) = uVar3;
    *(float *)(param_3 + 0x2ec) = *(float *)(param_1 + 0x88) * 0.75;
    *(undefined4 *)(param_3 + 0x2f0) = *(undefined4 *)(param_1 + 0x88);
    if ((*(uint *)(param_1 + 0x80) & 0x80000) == 0) {
        *(undefined4 *)(param_3 + 0x2e8) = 0;
    }
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x120) + 0xe0))();
    *(undefined8 *)(param_3 + 0x2f8) = uVar4;
    return;
}



undefined8 FUN_140367c70(longlong param_1,undefined4 *param_2)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined8 uVar4;
    float fVar5;
    float fVar6;

    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *(undefined4 *)(param_1 + 0x360) = *param_2;
    *(undefined4 *)(param_1 + 0x364) = uVar1;
    *(undefined4 *)(param_1 + 0x368) = uVar2;
    *(undefined4 *)(param_1 + 0x36c) = uVar3;
    *(longlong *)(param_1 + 0x17d0) = param_1 + 0x16a0;
    if (*(int *)(param_1 + 0x350) == 0) {
        uVar1 = param_2[1];
        uVar2 = param_2[2];
        uVar3 = param_2[3];
        *(undefined4 *)(param_1 + 0x390) = *param_2;
        *(undefined4 *)(param_1 + 0x394) = uVar1;
        *(undefined4 *)(param_1 + 0x398) = uVar2;
        *(undefined4 *)(param_1 + 0x39c) = uVar3;
        uVar1 = param_2[1];
        uVar2 = param_2[2];
        uVar3 = param_2[3];
        *(undefined4 *)(param_1 + 0x3a0) = *param_2;
        *(undefined4 *)(param_1 + 0x3a4) = uVar1;
        *(undefined4 *)(param_1 + 0x3a8) = uVar2;
        *(undefined4 *)(param_1 + 0x3ac) = uVar3;
        *(undefined4 *)(param_1 + 0x3b0) = *(undefined4 *)(param_1 + 0x370);
    }
    fVar5 = *(float *)(param_1 + 0x390) - *(float *)(param_1 + 0x360);
    fVar6 = *(float *)(param_1 + 0x394) - *(float *)(param_1 + 0x364);
    *(float *)(param_1 + 0x3bc) = SQRT(fVar5 * fVar5 + fVar6 * fVar6 + 0.0);
    uVar4 = FUN_140354f90();
    if (-1 < (int)uVar4) {
        if ((*(longlong *)(param_1 + 0x20) != 0) && (uVar4 = FUN_140355150(param_1), (int)uVar4 < 0)) {
            return uVar4;
        }
        uVar4 = 0;
    }
    return uVar4;
}



undefined8 FUN_140368740(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    undefined auVar1 [16];
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined auVar7 [16];
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    undefined4 in_XMM6_Da;
    float fVar12;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar13 [16];

    uVar5 = (**(code **)(*param_1 + 0x90))();
    if ((int)uVar5 == 0) {
        return uVar5;
    }
    auVar13 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    FUN_140357df0(param_1,param_1 + 0xd2);
    fVar12 = *(float *)(param_1 + 0x11) * *(float *)(param_1 + 0x11);
    fVar8 = (*(float *)(param_1 + 0x72) * DAT_140c43fb8 + 0.5) * 2048.0;
    fVar10 = (*(float *)(param_1 + 0x72) * DAT_140c43fb8 + 0.5) * 2048.0;
    lVar2 = param_1[0x123];
    while( true ) {
        lVar3 = lVar2;
        if (lVar3 == 0) {
            return 1;
        }
        lVar2 = *(longlong *)(lVar3 + 0x580);
        if ((*(longlong *)(lVar3 + 0x5a8) != 0) && (iVar4 = FUN_14037cc30(lVar3,param_2), iVar4 == 0))
            break;
        lVar6 = (**(code **)(**(longlong **)(lVar3 + 0x10) + 0x28))();
        auVar1 = *(undefined (*) [16])(param_1 + 0x6c);
        auVar7 = minps(auVar1,*(undefined (*) [16])(lVar6 + 0x30));
        auVar7 = maxps(*(undefined (*) [16])(lVar6 + 0x20),auVar7);
        fVar9 = SUB164(auVar7,0) - SUB164(auVar1,0);
        fVar11 = SUB164(auVar7 >> 0x40,0) - SUB164(auVar1 >> 0x40,0);
        if (((fVar11 * fVar11 + fVar9 * fVar9 <= fVar12) && (*(longlong *)(lVar3 + 0x5b8) != 0)) &&
            (iVar4 = FUN_14037d060(lVar3,param_2,1,param_4,fVar8,fVar10,auVar13), iVar4 == 0)) {
            return 0;
        }
    }
    return 0;
}



int FUN_1403688a0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,longlong *param_7,undefined4 param_8)

{
    int iVar1;
    longlong lVar2;

    if (param_7 == (longlong *)0x0) {
        iVar1 = -0x7ff8ffa9;
    }
    else {
        lVar2 = FUN_14018b280(0x4b0,0);
        if (lVar2 == 0) {
            lVar2 = 0;
        }
        else {
            lVar2 = FUN_14038aa40(lVar2,param_1);
        }
        iVar1 = FUN_14038b170(lVar2,param_2,param_3,param_4,param_5,param_6,param_8);
        if (iVar1 < 0) {
            if (lVar2 != 0) {
                FUN_14038acf0(lVar2);
                FUN_14018b900(lVar2,0);
            }
        }
        else {
            *param_7 = lVar2;
            iVar1 = 0;
        }
    }
    return iVar1;
}



int FUN_140368970(undefined8 param_1,undefined4 param_2,undefined8 param_3,short *param_4,
                  undefined4 param_5,undefined4 param_6,longlong *param_7)

{
    int iVar1;
    longlong lVar2;

    if (((param_4 == (short *)0x0) || (*param_4 == 0)) || (param_7 == (longlong *)0x0)) {
        iVar1 = -0x7ff8ffa9;
    }
    else {
        lVar2 = FUN_14018b280(0x4b0,0);
        if (lVar2 == 0) {
            lVar2 = 0;
        }
        else {
            lVar2 = FUN_14038aa40(lVar2,param_1);
        }
        iVar1 = FUN_14038b300(lVar2,param_2,param_3,param_4,param_5,param_6);
        if (iVar1 < 0) {
            if (lVar2 != 0) {
                FUN_14038acf0(lVar2);
                FUN_14018b900(lVar2,0);
            }
        }
        else {
            *param_7 = lVar2;
            iVar1 = 0;
        }
    }
    return iVar1;
}



int FUN_140368a40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5,undefined8 param_6)

{
    int iVar1;
    longlong lVar2;

    if (param_5 == (longlong *)0x0) {
        iVar1 = -0x7ff8ffa9;
    }
    else {
        lVar2 = FUN_14018b280(0x520,0);
        if (lVar2 == 0) {
            lVar2 = 0;
        }
        else {
            lVar2 = FUN_1403757e0(lVar2,param_1);
        }
        iVar1 = FUN_140376c10(lVar2,param_2,param_3,param_4,param_6);
        if (iVar1 < 0) {
            if (lVar2 != 0) {
                FUN_140375b60(lVar2);
                FUN_14018b900(lVar2,0);
            }
        }
        else {
            *param_5 = lVar2;
            iVar1 = 0;
        }
    }
    return iVar1;
}



int FUN_140368b00(undefined8 param_1,undefined8 param_2,short *param_3,undefined8 param_4,
                  longlong *param_5,undefined8 param_6)

{
    int iVar1;
    longlong lVar2;

    if (((param_3 == (short *)0x0) || (*param_3 == 0)) || (param_5 == (longlong *)0x0)) {
        iVar1 = -0x7ff8ffa9;
    }
    else {
        lVar2 = FUN_14018b280(0x520,0);
        if (lVar2 == 0) {
            lVar2 = 0;
        }
        else {
            lVar2 = FUN_1403757e0(lVar2,param_1);
        }
        iVar1 = FUN_140376d60(lVar2,param_2,param_3,param_4,param_6);
        if (iVar1 < 0) {
            if (lVar2 != 0) {
                FUN_140375b60(lVar2);
                FUN_14018b900(lVar2,0);
            }
        }
        else {
            *param_5 = lVar2;
            iVar1 = 0;
        }
    }
    return iVar1;
}



undefined8 FUN_140368bd0(undefined8 param_1,undefined8 param_2,longlong **param_3)

{
    longlong lVar1;
    longlong *plVar2;

    if (param_3 == (longlong **)0x0) {
        return 0x80070057;
    }
    lVar1 = FUN_14018b280(0x3a0,8);
    if (lVar1 == 0) {
        plVar2 = (longlong *)0x0;
    }
    else {
        plVar2 = (longlong *)FUN_14038da00(lVar1,param_1);
    }
    (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
    *param_3 = plVar2;
    return 0;
}



undefined8 FUN_140368c50(undefined8 param_1,undefined8 param_2,longlong **param_3)

{
    longlong lVar1;
    longlong *plVar2;

    if (param_3 == (longlong **)0x0) {
        return 0x80070057;
    }
    lVar1 = FUN_14018b280(0x210,0);
    if (lVar1 == 0) {
        plVar2 = (longlong *)0x0;
    }
    else {
        plVar2 = (longlong *)FUN_14038e5b0(lVar1,param_1);
    }
    (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
    *param_3 = plVar2;
    return 0;
}