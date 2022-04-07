//
// Created by flop on 04.04.22.
//
#include "../../include.h"

void FUN_1403091c0(undefined4 param_1,uint *param_2,uint param_3,float *param_4,
                   undefined8 param_5_00,undefined8 *param_5)

{
    uint *puVar1;
    longlong lVar2;
    longlong lVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    ulonglong uVar8;
    float fVar9;
    float fVar10;
    undefined8 local_res20;
    ulonglong uVar7;

    uVar4 = *param_2;
    local_res20 = param_5_00;
    if (uVar4 == 0) {
        FUN_1401c96d0(param_1,0,&local_res20);
        fVar9 = (float)FUN_1401c9770(&local_res20);
        *param_4 = fVar9;
        return;
    }
    if (uVar4 == 1) {
        fVar9 = (float)FUN_1401c9770(*(undefined8 *)(param_2 + 4));
        *param_4 = fVar9;
        return;
    }
    if (param_5 == (undefined8 *)0x0) {
        param_5 = &local_res20;
    }
    else {
        uVar6 = *(uint *)param_5;
        uVar4 = *(uint *)(*(longlong *)(param_2 + 2) + (ulonglong)uVar6 * 4);
        if (uVar4 <= param_3) {
            uVar5 = *(uint *)(*(longlong *)(param_2 + 2) + (ulonglong)(uVar6 + 1) * 4);
            if (param_3 < uVar5) {
                lVar2 = *(longlong *)(param_2 + 4);
                fVar9 = (float)FUN_1401c9770(lVar2 + (ulonglong)uVar6 * 2);
                fVar10 = (float)FUN_1401c9770(lVar2 + (ulonglong)(uVar6 + 1) * 2);
                *param_4 = (fVar10 - fVar9) *
                           ((float)(ulonglong)(param_3 - uVar4) / (float)(ulonglong)(uVar5 - uVar4)) + fVar9
                        ;
                return;
            }
        }
        uVar5 = uVar6 + 1;
        uVar7 = (ulonglong)uVar5;
        *(uint *)param_5 = uVar5;
        uVar4 = *param_2;
        if (((uVar5 < uVar4 - 1) &&
             (lVar2 = *(longlong *)(param_2 + 2), puVar1 = (uint *)(lVar2 + uVar7 * 4),
                     *puVar1 < param_3 || *puVar1 == param_3)) &&
            (param_3 < *(uint *)(lVar2 + (ulonglong)(uVar6 + 2) * 4))) {
            lVar3 = *(longlong *)(param_2 + 4);
            fVar9 = (float)FUN_1401c9770(lVar3 + uVar7 * 2);
            fVar10 = (float)FUN_1401c9770(lVar3 + (ulonglong)((int)uVar7 + 1) * 2);
            *param_4 = (fVar10 - fVar9) *
                       ((float)(ulonglong)(param_3 - *(int *)(lVar2 + uVar7 * 4)) /
                        (float)(ulonglong)
                                (uint)(*(int *)(lVar2 + (ulonglong)((int)uVar7 + 1) * 4) -
                                       *(int *)(lVar2 + uVar7 * 4))) + fVar9;
            return;
        }
    }
    uVar7 = 0;
    if (uVar4 != 0) {
        uVar6 = uVar4;
        do {
            uVar5 = (uVar6 - (int)uVar7 >> 1) + (int)uVar7;
            if (*(uint *)(*(longlong *)(param_2 + 2) + (ulonglong)uVar5 * 4) <= param_3) {
                uVar7 = (ulonglong)(uVar5 + 1);
                uVar5 = uVar6;
            }
            uVar6 = uVar5;
        } while ((uint)uVar7 < uVar6);
    }
    uVar6 = (uint)uVar7;
    uVar8 = (ulonglong)(uVar6 - 1);
    if (uVar6 == 0) {
        fVar9 = (float)FUN_1401c9770(*(undefined8 *)(param_2 + 4));
        *param_4 = fVar9;
        *(uint *)param_5 = uVar6;
    }
    else if (uVar4 == uVar6) {
        fVar9 = (float)FUN_1401c9770(*(longlong *)(param_2 + 4) + uVar8 * 2);
        *param_4 = fVar9;
        *(uint *)param_5 = *param_2 - 2;
    }
    else {
        lVar2 = *(longlong *)(param_2 + 4);
        fVar9 = (float)FUN_1401c9770(lVar2 + uVar8 * 2);
        lVar3 = *(longlong *)(param_2 + 2);
        fVar10 = (float)FUN_1401c9770(lVar2 + (uVar7 & 0xffffffff) * 2);
        *param_4 = (fVar10 - fVar9) *
                   ((float)(ulonglong)(param_3 - *(int *)(lVar3 + uVar8 * 4)) /
                    (float)(ulonglong)
                            (uint)(*(int *)(lVar3 + (uVar7 & 0xffffffff) * 4) -
                                   *(int *)(lVar3 + uVar8 * 4))) + fVar9;
        *(uint *)param_5 = uVar6 - 1;
    }
    return;
}



void FUN_140309410(uint *param_1,uint param_2,float *param_3,undefined8 param_4,uint *param_5)

{
    uint *puVar1;
    longlong lVar2;
    longlong lVar3;
    uint uVar4;
    ulonglong uVar5;
    uint uVar6;
    ulonglong uVar7;
    uint uVar8;
    uint local_res20 [2];

    uVar8 = *param_1;
    if (uVar8 == 0) {
        *param_3 = 0.0;
        return;
    }
    if (uVar8 == 1) {
        *param_3 = **(float **)(param_1 + 4);
        return;
    }
    if (param_5 == (uint *)0x0) {
        param_5 = local_res20;
    }
    else {
        uVar4 = *param_5;
        uVar5 = (ulonglong)uVar4;
        uVar8 = *(uint *)(*(longlong *)(param_1 + 2) + uVar5 * 4);
        if (uVar8 <= param_2) {
            uVar6 = *(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)(uVar4 + 1) * 4);
            if (param_2 < uVar6) {
                lVar2 = *(longlong *)(param_1 + 4);
                *param_3 = ((float)(ulonglong)(param_2 - uVar8) / (float)(ulonglong)(uVar6 - uVar8)) *
                           (*(float *)(lVar2 + (ulonglong)(uVar4 + 1) * 4) - *(float *)(lVar2 + uVar5 * 4))
                           + *(float *)(lVar2 + uVar5 * 4);
                return;
            }
        }
        uVar6 = uVar4 + 1;
        uVar5 = (ulonglong)uVar6;
        *param_5 = uVar6;
        uVar8 = *param_1;
        if (((uVar6 < uVar8 - 1) &&
             (lVar2 = *(longlong *)(param_1 + 2), puVar1 = (uint *)(lVar2 + uVar5 * 4),
                     *puVar1 < param_2 || *puVar1 == param_2)) &&
            (param_2 < *(uint *)(lVar2 + (ulonglong)(uVar4 + 2) * 4))) {
            lVar3 = *(longlong *)(param_1 + 4);
            *param_3 = ((float)(ulonglong)(param_2 - *(int *)(lVar2 + uVar5 * 4)) /
                        (float)(ulonglong)
                                (uint)(*(int *)(lVar2 + (ulonglong)(uVar4 + 2) * 4) -
                                       *(int *)(lVar2 + uVar5 * 4))) *
                       (*(float *)(lVar3 + (ulonglong)(uVar4 + 2) * 4) - *(float *)(lVar3 + uVar5 * 4)) +
                       *(float *)(lVar3 + uVar5 * 4);
            return;
        }
    }
    uVar5 = 0;
    if (uVar8 != 0) {
        uVar4 = uVar8;
        do {
            uVar6 = (uVar4 - (int)uVar5 >> 1) + (int)uVar5;
            if (*(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar6 * 4) <= param_2) {
                uVar5 = (ulonglong)(uVar6 + 1);
                uVar6 = uVar4;
            }
            uVar4 = uVar6;
        } while ((uint)uVar5 < uVar4);
    }
    uVar4 = (uint)uVar5;
    uVar7 = (ulonglong)(uVar4 - 1);
    if (uVar4 != 0) {
        if (uVar8 != uVar4) {
            lVar2 = *(longlong *)(param_1 + 2);
            lVar3 = *(longlong *)(param_1 + 4);
            *param_3 = ((float)(ulonglong)(param_2 - *(int *)(lVar2 + uVar7 * 4)) /
                        (float)(ulonglong)(uint)(*(int *)(lVar2 + uVar5 * 4) - *(int *)(lVar2 + uVar7 * 4))
                       ) * (*(float *)(lVar3 + uVar5 * 4) - *(float *)(lVar3 + uVar7 * 4)) +
                       *(float *)(lVar3 + uVar7 * 4);
            *param_5 = uVar4 - 1;
            return;
        }
        *param_3 = *(float *)(*(longlong *)(param_1 + 4) + uVar7 * 4);
        *param_5 = *param_1 - 2;
        return;
    }
    *param_3 = **(float **)(param_1 + 4);
    *param_5 = 0;
    return;
}



void FUN_140309620(uint *param_1,uint param_2,undefined (*param_3) [16],undefined8 param_4,
                   undefined8 *param_5)

{
    uint *puVar1;
    undefined8 *puVar2;
    ulonglong uVar3;
    uint uVar4;
    uint uVar5;
    longlong lVar6;
    longlong lVar7;
    uint uVar8;
    ulonglong uVar9;
    float fVar10;
    undefined8 local_res20;
    float local_38;
    float fStack52;
    float fStack48;
    float fStack44;
    float local_28;
    float fStack36;
    float fStack32;
    float fStack28;

    uVar5 = *param_1;
    local_res20 = param_4;
    if (uVar5 == 0) {
        if ((DAT_140c8a5a0 & 1) == 0) {
            DAT_140c8a5a0 = DAT_140c8a5a0 | 1;
        }
        FUN_1401c95b0(&local_res20,&DAT_140c8a590);
        puVar2 = &local_res20;
    }
    else {
        if (uVar5 != 1) {
            if (param_5 == (undefined8 *)0x0) {
                param_5 = &local_res20;
            }
            else {
                uVar4 = *(uint *)param_5;
                uVar3 = (ulonglong)uVar4;
                uVar5 = *(uint *)(*(longlong *)(param_1 + 2) + uVar3 * 4);
                if (uVar5 <= param_2) {
                    uVar8 = *(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)(uVar4 + 1) * 4);
                    if (param_2 < uVar8) {
                        lVar7 = *(longlong *)(param_1 + 4);
                        FUN_1401b2ce0(&local_28,lVar7 + (ulonglong)(uVar4 + 1) * 4);
                        FUN_1401b2ce0(&local_38,lVar7 + uVar3 * 4);
                        fVar10 = (float)(ulonglong)(param_2 - uVar5) / (float)(ulonglong)(uVar8 - uVar5);
                        *param_3 = CONCAT412(fVar10 * (fStack28 - fStack44) + fStack44,
                                             CONCAT48(fVar10 * (fStack32 - fStack48) + fStack48,
                                                      CONCAT44(fVar10 * (fStack36 - fStack52) + fStack52,
                                                               fVar10 * (local_28 - local_38) + local_38)));
                        return;
                    }
                }
                uVar8 = uVar4 + 1;
                uVar3 = (ulonglong)uVar8;
                *(uint *)param_5 = uVar8;
                uVar5 = *param_1;
                if (((uVar8 < uVar5 - 1) &&
                     (lVar7 = *(longlong *)(param_1 + 2), puVar1 = (uint *)(lVar7 + uVar3 * 4),
                             *puVar1 < param_2 || *puVar1 == param_2)) &&
                    (param_2 < *(uint *)(lVar7 + (ulonglong)(uVar4 + 2) * 4))) {
                    lVar6 = *(longlong *)(param_1 + 4);
                    FUN_1401b2ce0(&local_38,lVar6 + (ulonglong)(uVar4 + 2) * 4);
                    FUN_1401b2ce0(&local_28,lVar6 + uVar3 * 4);
                    fVar10 = (float)(ulonglong)(param_2 - *(int *)(lVar7 + uVar3 * 4)) /
                             (float)(ulonglong)
                                     (uint)(*(int *)(lVar7 + (ulonglong)((int)uVar3 + 1) * 4) -
                                            *(int *)(lVar7 + uVar3 * 4));
                    *param_3 = CONCAT412(fVar10 * (fStack44 - fStack28) + fStack28,
                                         CONCAT48(fVar10 * (fStack48 - fStack32) + fStack32,
                                                  CONCAT44(fVar10 * (fStack52 - fStack36) + fStack36,
                                                           fVar10 * (local_38 - local_28) + local_28)));
                    return;
                }
            }
            uVar3 = 0;
            if (uVar5 != 0) {
                uVar4 = uVar5;
                do {
                    uVar8 = (uVar4 - (int)uVar3 >> 1) + (int)uVar3;
                    if (*(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar8 * 4) <= param_2) {
                        uVar3 = (ulonglong)(uVar8 + 1);
                        uVar8 = uVar4;
                    }
                    uVar4 = uVar8;
                } while ((uint)uVar3 < uVar4);
            }
            uVar4 = (uint)uVar3;
            uVar9 = (ulonglong)(uVar4 - 1);
            if (uVar4 == 0) {
                FUN_1401b2ce0(&local_28,*(undefined8 *)(param_1 + 4));
                *(float *)*param_3 = local_28;
                *(float *)(*param_3 + 4) = fStack36;
                *(float *)(*param_3 + 8) = fStack32;
                *(float *)(*param_3 + 0xc) = fStack28;
                *(uint *)param_5 = 0;
            }
            else if (uVar5 == uVar4) {
                FUN_1401b2ce0(&local_28,*(longlong *)(param_1 + 4) + uVar9 * 4);
                *(float *)*param_3 = local_28;
                *(float *)(*param_3 + 4) = fStack36;
                *(float *)(*param_3 + 8) = fStack32;
                *(float *)(*param_3 + 0xc) = fStack28;
                *(uint *)param_5 = *param_1 - 2;
            }
            else {
                lVar7 = *(longlong *)(param_1 + 4);
                FUN_1401b2ce0(&local_38,lVar7 + uVar3 * 4);
                FUN_1401b2ce0(&local_28,lVar7 + uVar9 * 4);
                lVar7 = *(longlong *)(param_1 + 2);
                fVar10 = (float)(ulonglong)(param_2 - *(int *)(lVar7 + uVar9 * 4)) /
                         (float)(ulonglong)(uint)(*(int *)(lVar7 + uVar3 * 4) - *(int *)(lVar7 + uVar9 * 4))
                        ;
                *param_3 = CONCAT412(fVar10 * (fStack44 - fStack28) + fStack28,
                                     CONCAT48(fVar10 * (fStack48 - fStack32) + fStack32,
                                              CONCAT44(fVar10 * (fStack52 - fStack36) + fStack36,
                                                       fVar10 * (local_38 - local_28) + local_28)));
                *(uint *)param_5 = uVar4 - 1;
            }
            return;
        }
        puVar2 = *(undefined8 **)(param_1 + 4);
    }
    FUN_1401b2ce0(&local_38,puVar2);
    *(float *)*param_3 = local_38;
    *(float *)(*param_3 + 4) = fStack52;
    *(float *)(*param_3 + 8) = fStack48;
    *(float *)(*param_3 + 0xc) = fStack44;
    return;
}



void FUN_1403098c0(uint *param_1,uint param_2,undefined (*param_3) [16],undefined8 param_4,
                   undefined8 *param_5)

{
    uint *puVar1;
    undefined8 *puVar2;
    ulonglong uVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    longlong lVar7;
    longlong lVar8;
    ulonglong uVar9;
    float fVar10;
    undefined8 local_res20;
    float local_48;
    float fStack68;
    float fStack64;
    float fStack60;
    float local_38;
    float fStack52;
    float fStack48;
    float fStack44;

    uVar6 = *param_1;
    local_res20 = param_4;
    if (uVar6 == 0) {
        if ((DAT_140dc0de0 & 1) == 0) {
            DAT_140dc0de0 = DAT_140dc0de0 | 1;
        }
        FUN_1401c9940(&local_res20);
        puVar2 = &local_res20;
    }
    else {
        if (uVar6 != 1) {
            if (param_5 == (undefined8 *)0x0) {
                param_5 = &local_res20;
            }
            else {
                uVar5 = *(uint *)param_5;
                uVar6 = *(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar5 * 4);
                if (uVar6 <= param_2) {
                    uVar4 = *(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)(uVar5 + 1) * 4);
                    if (param_2 < uVar4) {
                        lVar8 = *(longlong *)(param_1 + 4);
                        FUN_1401b1980(&local_38,lVar8 + (ulonglong)(uVar5 + 1) * 8);
                        FUN_1401b1980(&local_48,lVar8 + (ulonglong)uVar5 * 8);
                        fVar10 = (float)(ulonglong)(param_2 - uVar6) / (float)(ulonglong)(uVar4 - uVar6);
                        *param_3 = CONCAT412(fVar10 * (fStack44 - fStack60) + fStack60,
                                             CONCAT48(fVar10 * (fStack48 - fStack64) + fStack64,
                                                      CONCAT44(fVar10 * (fStack52 - fStack68) + fStack68,
                                                               fVar10 * (local_38 - local_48) + local_48)));
                        return;
                    }
                }
                uVar4 = uVar5 + 1;
                uVar3 = (ulonglong)uVar4;
                *(uint *)param_5 = uVar4;
                uVar6 = *param_1;
                if (((uVar4 < uVar6 - 1) &&
                     (lVar8 = *(longlong *)(param_1 + 2), puVar1 = (uint *)(lVar8 + uVar3 * 4),
                             *puVar1 < param_2 || *puVar1 == param_2)) &&
                    (param_2 < *(uint *)(lVar8 + (ulonglong)(uVar5 + 2) * 4))) {
                    lVar7 = *(longlong *)(param_1 + 4);
                    FUN_1401b1980(&local_48,lVar7 + (ulonglong)(uVar5 + 2) * 8);
                    FUN_1401b1980(&local_38,lVar7 + uVar3 * 8);
                    fVar10 = (float)(ulonglong)(param_2 - *(int *)(lVar8 + uVar3 * 4)) /
                             (float)(ulonglong)
                                     (uint)(*(int *)(lVar8 + (ulonglong)(uVar5 + 2) * 4) -
                                            *(int *)(lVar8 + uVar3 * 4));
                    *param_3 = CONCAT412(fVar10 * (fStack60 - fStack44) + fStack44,
                                         CONCAT48(fVar10 * (fStack64 - fStack48) + fStack48,
                                                  CONCAT44(fVar10 * (fStack68 - fStack52) + fStack52,
                                                           fVar10 * (local_48 - local_38) + local_38)));
                    return;
                }
            }
            uVar3 = 0;
            if (uVar6 != 0) {
                uVar5 = uVar6;
                do {
                    uVar4 = (uVar5 - (int)uVar3 >> 1) + (int)uVar3;
                    if (*(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar4 * 4) <= param_2) {
                        uVar3 = (ulonglong)(uVar4 + 1);
                        uVar4 = uVar5;
                    }
                    uVar5 = uVar4;
                } while ((uint)uVar3 < uVar5);
            }
            uVar5 = (uint)uVar3;
            uVar9 = (ulonglong)(uVar5 - 1);
            if (uVar5 == 0) {
                FUN_1401b1980(&local_38,*(undefined8 *)(param_1 + 4));
                *(float *)*param_3 = local_38;
                *(float *)(*param_3 + 4) = fStack52;
                *(float *)(*param_3 + 8) = fStack48;
                *(float *)(*param_3 + 0xc) = fStack44;
                *(uint *)param_5 = 0;
            }
            else if (uVar6 == uVar5) {
                FUN_1401b1980(&local_38,*(longlong *)(param_1 + 4) + uVar9 * 8);
                *(float *)*param_3 = local_38;
                *(float *)(*param_3 + 4) = fStack52;
                *(float *)(*param_3 + 8) = fStack48;
                *(float *)(*param_3 + 0xc) = fStack44;
                *(uint *)param_5 = *param_1 - 2;
            }
            else {
                lVar8 = *(longlong *)(param_1 + 4);
                FUN_1401b1980(&local_48,lVar8 + uVar3 * 8);
                FUN_1401b1980(&local_38,lVar8 + uVar9 * 8);
                lVar8 = *(longlong *)(param_1 + 2);
                fVar10 = (float)(ulonglong)(param_2 - *(int *)(lVar8 + uVar9 * 4)) /
                         (float)(ulonglong)(uint)(*(int *)(lVar8 + uVar3 * 4) - *(int *)(lVar8 + uVar9 * 4))
                        ;
                *param_3 = CONCAT412(fVar10 * (fStack60 - fStack44) + fStack44,
                                     CONCAT48(fVar10 * (fStack64 - fStack48) + fStack48,
                                              CONCAT44(fVar10 * (fStack68 - fStack52) + fStack52,
                                                       fVar10 * (local_48 - local_38) + local_38)));
                *(uint *)param_5 = uVar5 - 1;
            }
            return;
        }
        puVar2 = *(undefined8 **)(param_1 + 4);
    }
    FUN_1401b1980(&local_48,puVar2);
    *(float *)*param_3 = local_48;
    *(float *)(*param_3 + 4) = fStack68;
    *(float *)(*param_3 + 8) = fStack64;
    *(float *)(*param_3 + 0xc) = fStack60;
    return;
}



void FUN_140309b80(uint *param_1,uint param_2,undefined2 *param_3,undefined8 param_4,uint *param_5)

{
    uint *puVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    ulonglong uVar5;
    uint uVar6;
    uint local_res20 [2];

    uVar6 = *param_1;
    if (uVar6 == 0) {
        *param_3 = 0;
        return;
    }
    if (uVar6 == 1) {
        *param_3 = **(undefined2 **)(param_1 + 4);
        return;
    }
    if (param_5 == (uint *)0x0) {
        param_5 = local_res20;
        LAB_140309c16:
        uVar4 = 0;
        if (uVar6 != 0) {
            uVar3 = uVar6;
            do {
                uVar2 = (uVar3 - uVar4 >> 1) + uVar4;
                if (*(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar2 * 4) <= param_2) {
                    uVar4 = uVar2 + 1;
                    uVar2 = uVar3;
                }
                uVar3 = uVar2;
            } while (uVar4 < uVar3);
        }
        if (uVar4 != 0) {
            *param_3 = (*(undefined2 **)(param_1 + 4))[uVar4 - 1];
            if (uVar6 != uVar4) {
                *param_5 = uVar4 - 1;
                return;
            }
            *param_5 = *param_1 - 2;
            return;
        }
        *param_3 = **(undefined2 **)(param_1 + 4);
        *param_5 = 0;
        return;
    }
    uVar4 = *param_5;
    uVar5 = (ulonglong)uVar4;
    puVar1 = (uint *)(*(longlong *)(param_1 + 2) + uVar5 * 4);
    if ((param_2 <= *puVar1 && *puVar1 != param_2) ||
        (*(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)(uVar4 + 1) * 4) <= param_2)) {
        uVar3 = uVar4 + 1;
        uVar5 = (ulonglong)uVar3;
        *param_5 = uVar3;
        uVar6 = *param_1;
        if ((uVar6 - 1 <= uVar3) ||
            ((puVar1 = (uint *)(*(longlong *)(param_1 + 2) + uVar5 * 4),
                    param_2 <= *puVar1 && *puVar1 != param_2 ||
                    (*(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)(uVar4 + 2) * 4) <= param_2))))
            goto LAB_140309c16;
    }
    *param_3 = *(undefined2 *)(*(longlong *)(param_1 + 4) + uVar5 * 2);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140309ca0(uint *param_1,uint param_2,undefined4 *param_3,undefined8 param_4,uint *param_5)

{
    uint *puVar1;
    undefined4 uVar2;
    longlong lVar3;
    undefined4 *puVar4;
    char cVar5;
    short sVar9;
    short sVar10;
    short sVar11;
    short sVar12;
    unkbyte10 Var13;
    undefined auVar14 [14];
    short sVar15;
    undefined6 uVar16;
    undefined2 uVar17;
    undefined2 uVar18;
    uint uVar19;
    float fVar20;
    uint uVar21;
    ulonglong uVar22;
    ulonglong uVar23;
    uint uVar24;
    uint uVar25;
    int iVar26;
    undefined8 uVar27;
    uint uVar34;
    int iVar35;
    undefined auVar29 [16];
    undefined auVar30 [16];
    undefined auVar33 [16];
    int iVar36;
    undefined in_XMM1_Ba;
    undefined in_XMM1_Bb;
    undefined uVar37;
    undefined in_XMM1_Bc;
    undefined uVar38;
    undefined in_XMM1_Bd;
    undefined uVar39;
    undefined in_XMM1_Be;
    undefined in_XMM1_Bf;
    undefined uVar40;
    undefined in_XMM1_Bg;
    undefined uVar41;
    undefined in_XMM1_Bh;
    undefined uVar42;
    char cVar43;
    char cVar44;
    undefined in_XMM2_Ba;
    undefined in_XMM2_Bb;
    undefined in_XMM2_Bc;
    undefined in_XMM2_Bd;
    undefined in_XMM2_Be;
    undefined in_XMM2_Bf;
    undefined in_XMM2_Bg;
    undefined in_XMM2_Bh;
    float fVar45;
    float fVar46;
    float fVar47;
    float fVar48;
    uint local_res20 [2];
    char cVar6;
    char cVar7;
    char cVar8;
    undefined auVar28 [12];
    undefined auVar31 [16];
    undefined auVar32 [16];

    uVar34 = *param_1;
    if (uVar34 == 0) {
        if ((DAT_140dc0e00 & 1) == 0) {
            DAT_140dc0e00 = DAT_140dc0e00 | 1;
        }
        *param_3 = DAT_140dc0e04;
        return;
    }
    if (uVar34 == 1) {
        *param_3 = **(undefined4 **)(param_1 + 4);
        return;
    }
    if (param_5 == (uint *)0x0) {
        param_5 = local_res20;
    }
    else {
        uVar25 = *param_5;
        uVar34 = *(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar25 * 4);
        if (uVar34 <= param_2) {
            uVar24 = *(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)(uVar25 + 1) * 4);
            if (param_2 < uVar24) {
                uVar19 = CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ^
                         CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba)));
                uVar37 = (undefined)(uVar19 >> 8);
                uVar38 = (undefined)(uVar19 >> 0x10);
                uVar39 = (undefined)(uVar19 >> 0x18);
                uVar21 = CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ^
                         CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be)));
                uVar40 = (undefined)(uVar21 >> 8);
                uVar41 = (undefined)(uVar21 >> 0x10);
                uVar42 = (undefined)(uVar21 >> 0x18);
                uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 4) + (ulonglong)(uVar25 + 1) * 4);
                uVar27 = CONCAT44(uVar2,uVar2);
                auVar28 = CONCAT48(uVar2,uVar27);
                auVar30 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(
                                                                                     CONCAT412(SUB164(CONCAT313(SUB163(CONCAT214(SUB162
                                                                                                                                         (CONCAT115(uVar42,CONCAT114((char)((uint)uVar2 >>
                                                                                                                                                                                        0x18),
                                                                                                                                                                     SUB1614(CONCAT412(
                                                                                                                                                                             uVar2,auVar28),0))) >> 0x70,0),
                                                                                                                                 CONCAT113(uVar41,SUB1613(CONCAT412(uVar2,auVar28),
                                                                                                                                                          0))) >> 0x68,0),
                                                                                                                CONCAT112((char)((uint)uVar2 >> 0x10),auVar28)) >>
                                                                                                                                                                0x60,0),CONCAT111(uVar40,SUB1211(auVar28,0))) >>
                                                                                                                                                                                                              0x58,0),CONCAT110((char)((uint)uVar2 >> 8),
                                                                                                                                                                                                                                SUB1210(auVar28,0))) >> 0x50,0),
                                                                             CONCAT19((char)uVar21,SUB129(auVar28,0))) >> 0x48,
                                                                   0),CONCAT18((char)uVar2,uVar27)) >> 0x40,0),uVar39
                ),((uint7)uVar27 >> 0x18) << 0x30);
                auVar29 = CONCAT115(CONCAT101(SUB1610(auVar30 >> 0x30,0),uVar38),
                                    ((uint5)uVar27 >> 0x10) << 0x20);
                auVar33 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar29 >> 0x20,0),uVar37),
                                                      ((uint3)uVar2 >> 8) << 0x10) >> 0x10,0),
                                    (ushort)uVar2 & 0xff | (ushort)(byte)uVar19 << 8);
                uVar18 = (undefined2)(uVar21 >> 0x10);
                iVar26 = SUB164(CONCAT214(uVar18,CONCAT212(SUB162(auVar30 >> 0x30,0),SUB1612(auVar33,0))) >>
                                                                                                          0x60,0);
                auVar29 = CONCAT610(SUB166(CONCAT412(iVar26,CONCAT210((short)uVar21,SUB1610(auVar33,0))) >>
                                                                                                         0x50,0),CONCAT28(SUB162(auVar29 >> 0x20,0),SUB168(auVar33,0)));
                uVar17 = (undefined2)(uVar19 >> 0x10);
                uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 4) + (ulonglong)uVar25 * 4);
                uVar27 = CONCAT44(uVar2,uVar2);
                auVar28 = CONCAT48(uVar2,uVar27);
                auVar32 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(
                                                                                     CONCAT412(SUB164(CONCAT313(SUB163(CONCAT214(SUB162
                                                                                                                                         (CONCAT115(uVar42,CONCAT114((char)((uint)uVar2 >>
                                                                                                                                                                                        0x18),
                                                                                                                                                                     SUB1614(CONCAT412(
                                                                                                                                                                             uVar2,auVar28),0))) >> 0x70,0),
                                                                                                                                 CONCAT113(uVar41,SUB1613(CONCAT412(uVar2,auVar28),
                                                                                                                                                          0))) >> 0x68,0),
                                                                                                                CONCAT112((char)((uint)uVar2 >> 0x10),auVar28)) >>
                                                                                                                                                                0x60,0),CONCAT111(uVar40,SUB1211(auVar28,0))) >>
                                                                                                                                                                                                              0x58,0),CONCAT110((char)((uint)uVar2 >> 8),
                                                                                                                                                                                                                                SUB1210(auVar28,0))) >> 0x50,0),
                                                                             CONCAT19((char)uVar21,SUB129(auVar28,0))) >> 0x48,
                                                                   0),CONCAT18((char)uVar2,uVar27)) >> 0x40,0),uVar39
                ),((uint7)uVar27 >> 0x18) << 0x30);
                auVar31 = CONCAT115(CONCAT101(SUB1610(auVar32 >> 0x30,0),uVar38),
                                    ((uint5)uVar27 >> 0x10) << 0x20);
                auVar30 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar31 >> 0x20,0),uVar37),
                                                      ((uint3)uVar2 >> 8) << 0x10) >> 0x10,0),
                                    (ushort)uVar2 & 0xff | (ushort)(byte)uVar19 << 8);
                iVar35 = SUB164(CONCAT214(uVar18,CONCAT212(SUB162(auVar32 >> 0x30,0),SUB1612(auVar30,0))) >>
                                                                                                          0x60,0);
                auVar31 = CONCAT610(SUB166(CONCAT412(iVar35,CONCAT210((short)uVar21,SUB1610(auVar30,0))) >>
                                                                                                         0x50,0),CONCAT28(SUB162(auVar31 >> 0x20,0),SUB168(auVar30,0)));
                fVar45 = (float)SUB164(auVar31 >> 0x40,0) * 0.003921569;
                fVar46 = (float)SUB164(CONCAT106(CONCAT82(SUB168(auVar31 >> 0x40,0),uVar17),
                                                 (SUB166(auVar30,0) >> 0x10) << 0x20) >> 0x20,0) *
                         0.003921569;
                fVar47 = (float)(SUB164(auVar30,0) & 0xffff | uVar19 << 0x10) * 0.003921569;
                fVar48 = (float)iVar35 * 0.003921569;
                fVar20 = (float)(ulonglong)(param_2 - uVar34) / (float)(ulonglong)(uVar24 - uVar34);
                fVar46 = fVar20 * ((float)SUB164(CONCAT106(CONCAT82(SUB168(auVar29 >> 0x40,0),uVar17),
                                                           (SUB166(auVar33,0) >> 0x10) << 0x20) >> 0x20,0) *
                                   0.003921569 - fVar46) + fVar46;
                auVar33 = maxps(ZEXT416(0) << 0x20 & (undefined  [16])0xffffffff,
                                CONCAT412(fVar20 * ((float)iVar26 * 0.003921569 - fVar48) + fVar48,
                                          CONCAT48(fVar20 * ((float)(SUB164(auVar33,0) & 0xffff |
                                                                     uVar19 << 0x10) * 0.003921569 - fVar47)
                                                   + fVar47,CONCAT17((char)((uint)fVar46 >> 0x18),
                                                                     CONCAT16((char)((uint)fVar46 >> 0x10),
                                                                              CONCAT15((char)((uint)fVar46
                                                                                               >> 8),
                                                                                       CONCAT14(SUB41(fVar46
                                                                                               ,0),fVar20 * ((float)SUB164(auVar29 >> 0x40,0) *
                                                                                                             0.003921569 - fVar45) + fVar45))))))
                );
                auVar33 = minps(auVar33,_DAT_140b7b240);
                iVar26 = (int)(SUB164(auVar33,0) * 255.0 + 0.5);
                uVar34 = (uint)(SUB164(auVar33 >> 0x20,0) * 255.0 + 0.5);
                iVar35 = (int)(SUB164(auVar33 >> 0x40,0) * 255.0 + 0.5);
                iVar36 = (int)(SUB164(auVar33 >> 0x60,0) * 255.0 + 0.5);
                cVar43 = (char)((uint)iVar26 >> 0x10);
                cVar44 = (char)((uint)iVar36 >> 0x10);
                uVar23 = (ulonglong)
                        CONCAT16((char)(uVar34 >> 0x10),
                                 CONCAT15((char)(uVar34 >> 8),CONCAT14((char)uVar34,iVar35)));
                uVar22 = ((ulonglong)uVar34 & 0xff000000) << 0x20 | uVar23;
                Var13 = CONCAT19((char)((uint)iVar26 >> 8),CONCAT18((char)iVar26,uVar22));
                auVar28 = CONCAT111((char)((uint)iVar26 >> 0x18),CONCAT110(cVar43,Var13));
                auVar14 = CONCAT113((char)((uint)iVar36 >> 8),CONCAT112((char)iVar36,auVar28));
                sVar9 = (short)iVar35;
                cVar5 = (0 < sVar9) * (sVar9 < 0xff) * (char)iVar35 - (0xff < sVar9);
                sVar9 = (short)(uVar23 >> 0x10);
                sVar10 = (short)(uVar23 >> 0x20);
                cVar6 = (0 < sVar10) * (sVar10 < 0xff) * (char)(uVar23 >> 0x20) - (0xff < sVar10);
                sVar10 = (short)(uVar22 >> 0x30);
                sVar11 = (short)((unkuint10)Var13 >> 0x40);
                cVar7 = (0 < sVar11) * (sVar11 < 0xff) * (char)iVar26 - (0xff < sVar11);
                sVar11 = SUB122(auVar28 >> 0x50,0);
                sVar12 = SUB142(auVar14 >> 0x60,0);
                cVar8 = (0 < sVar12) * (sVar12 < 0xff) * (char)iVar36 - (0xff < sVar12);
                sVar12 = SUB162(CONCAT115((char)((uint)iVar36 >> 0x18),CONCAT114(cVar44,auVar14)) >> 0x70,0)
                        ;
                sVar15 = CONCAT11((0 < sVar9) * (sVar9 < 0xff) * (char)(uVar23 >> 0x10) - (0xff < sVar9),
                                  cVar5);
                uVar2 = CONCAT13((0 < sVar10) * (sVar10 < 0xff) * (char)(uVar23 >> 0x30) - (0xff < sVar10),
                                 CONCAT12(cVar6,sVar15));
                uVar16 = CONCAT15((0 < sVar11) * (sVar11 < 0xff) * cVar43 - (0xff < sVar11),
                                  CONCAT14(cVar7,uVar2));
                sVar9 = (short)((uint)uVar2 >> 0x10);
                sVar10 = (short)((uint6)uVar16 >> 0x20);
                sVar11 = (short)(CONCAT17((0 < sVar12) * (sVar12 < 0xff) * cVar44 - (0xff < sVar12),
                                          CONCAT16(cVar8,uVar16)) >> 0x30);
                *param_3 = CONCAT13((0 < sVar11) * (sVar11 < 0xff) * cVar8 - (0xff < sVar11),
                                    CONCAT12((0 < sVar10) * (sVar10 < 0xff) * cVar7 - (0xff < sVar10),
                                             CONCAT11((0 < sVar9) * (sVar9 < 0xff) * cVar6 - (0xff < sVar9),
                                                      (0 < sVar15) * (sVar15 < 0xff) * cVar5 -
                                                      (0xff < sVar15))));
                return;
            }
        }
        uVar24 = uVar25 + 1;
        uVar22 = (ulonglong)uVar24;
        *param_5 = uVar24;
        uVar34 = *param_1;
        if (((uVar24 < uVar34 - 1) &&
             (lVar3 = *(longlong *)(param_1 + 2), puVar1 = (uint *)(lVar3 + uVar22 * 4),
                     *puVar1 < param_2 || *puVar1 == param_2)) &&
            (param_2 < *(uint *)(lVar3 + (ulonglong)(uVar25 + 2) * 4))) {
            uVar34 = CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ^
                     CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba)));
            uVar37 = (undefined)(uVar34 >> 8);
            uVar38 = (undefined)(uVar34 >> 0x10);
            uVar39 = (undefined)(uVar34 >> 0x18);
            uVar24 = CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ^
                     CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be)));
            uVar40 = (undefined)(uVar24 >> 8);
            uVar41 = (undefined)(uVar24 >> 0x10);
            uVar42 = (undefined)(uVar24 >> 0x18);
            uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 4) + (ulonglong)(uVar25 + 2) * 4);
            uVar27 = CONCAT44(uVar2,uVar2);
            auVar28 = CONCAT48(uVar2,uVar27);
            auVar30 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412
                                                                                                         (SUB164(CONCAT313(SUB163(CONCAT214(SUB162(
                                                                                                                                                    CONCAT115(uVar42,CONCAT114((char)((uint)uVar2 >>
                                                                                                                                                                                                  0x18),
                                                                                                                                                                               SUB1614(CONCAT412(uVar2
                                                                                                                                                                                       ,auVar28),0))) >> 0x70,0),
                                                                                                                                            CONCAT113(uVar41,SUB1613(CONCAT412(uVar2,auVar28),
                                                                                                                                                                     0))) >> 0x68,0),
                                                                                                                           CONCAT112((char)((uint)uVar2 >> 0x10),auVar28)) >>
                                                                                                                                                                           0x60,0),CONCAT111(uVar40,SUB1211(auVar28,0))) >>
                                                                                                                                                                                                                         0x58,0),CONCAT110((char)((uint)uVar2 >> 8),
                                                                                                                                                                                                                                           SUB1210(auVar28,0))) >> 0x50,0),
                                                                         CONCAT19((char)uVar24,SUB129(auVar28,0))) >> 0x48,
                                                               0),CONCAT18((char)uVar2,uVar27)) >> 0x40,0),uVar39
            ),((uint7)uVar27 >> 0x18) << 0x30);
            auVar29 = CONCAT115(CONCAT101(SUB1610(auVar30 >> 0x30,0),uVar38),
                                ((uint5)uVar27 >> 0x10) << 0x20);
            auVar33 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar29 >> 0x20,0),uVar37),
                                                  ((uint3)uVar2 >> 8) << 0x10) >> 0x10,0),
                                (ushort)uVar2 & 0xff | (ushort)(byte)uVar34 << 8);
            uVar18 = (undefined2)(uVar24 >> 0x10);
            iVar26 = SUB164(CONCAT214(uVar18,CONCAT212(SUB162(auVar30 >> 0x30,0),SUB1612(auVar33,0))) >>
                                                                                                      0x60,0);
            auVar29 = CONCAT610(SUB166(CONCAT412(iVar26,CONCAT210((short)uVar24,SUB1610(auVar33,0))) >>
                                                                                                     0x50,0),CONCAT28(SUB162(auVar29 >> 0x20,0),SUB168(auVar33,0)));
            uVar17 = (undefined2)(uVar34 >> 0x10);
            uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 4) + uVar22 * 4);
            uVar27 = CONCAT44(uVar2,uVar2);
            auVar28 = CONCAT48(uVar2,uVar27);
            auVar32 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412
                                                                                                         (SUB164(CONCAT313(SUB163(CONCAT214(SUB162(
                                                                                                                                                    CONCAT115(uVar42,CONCAT114((char)((uint)uVar2 >>
                                                                                                                                                                                                  0x18),
                                                                                                                                                                               SUB1614(CONCAT412(uVar2
                                                                                                                                                                                       ,auVar28),0))) >> 0x70,0),
                                                                                                                                            CONCAT113(uVar41,SUB1613(CONCAT412(uVar2,auVar28),
                                                                                                                                                                     0))) >> 0x68,0),
                                                                                                                           CONCAT112((char)((uint)uVar2 >> 0x10),auVar28)) >>
                                                                                                                                                                           0x60,0),CONCAT111(uVar40,SUB1211(auVar28,0))) >>
                                                                                                                                                                                                                         0x58,0),CONCAT110((char)((uint)uVar2 >> 8),
                                                                                                                                                                                                                                           SUB1210(auVar28,0))) >> 0x50,0),
                                                                         CONCAT19((char)uVar24,SUB129(auVar28,0))) >> 0x48,
                                                               0),CONCAT18((char)uVar2,uVar27)) >> 0x40,0),uVar39
            ),((uint7)uVar27 >> 0x18) << 0x30);
            auVar31 = CONCAT115(CONCAT101(SUB1610(auVar32 >> 0x30,0),uVar38),
                                ((uint5)uVar27 >> 0x10) << 0x20);
            auVar30 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar31 >> 0x20,0),uVar37),
                                                  ((uint3)uVar2 >> 8) << 0x10) >> 0x10,0),
                                (ushort)uVar2 & 0xff | (ushort)(byte)uVar34 << 8);
            iVar35 = SUB164(CONCAT214(uVar18,CONCAT212(SUB162(auVar32 >> 0x30,0),SUB1612(auVar30,0))) >>
                                                                                                      0x60,0);
            auVar31 = CONCAT610(SUB166(CONCAT412(iVar35,CONCAT210((short)uVar24,SUB1610(auVar30,0))) >>
                                                                                                     0x50,0),CONCAT28(SUB162(auVar31 >> 0x20,0),SUB168(auVar30,0)));
            fVar45 = (float)SUB164(auVar31 >> 0x40,0) * 0.003921569;
            fVar46 = (float)SUB164(CONCAT106(CONCAT82(SUB168(auVar31 >> 0x40,0),uVar17),
                                             (SUB166(auVar30,0) >> 0x10) << 0x20) >> 0x20,0) * 0.003921569
                    ;
            fVar47 = (float)(SUB164(auVar30,0) & 0xffff | uVar34 << 0x10) * 0.003921569;
            fVar48 = (float)iVar35 * 0.003921569;
            fVar20 = (float)(ulonglong)(param_2 - *(int *)(lVar3 + uVar22 * 4)) /
                     (float)(ulonglong)
                             (uint)(*(int *)(lVar3 + (ulonglong)(uVar25 + 2) * 4) -
                                    *(int *)(lVar3 + uVar22 * 4));
            fVar46 = fVar20 * ((float)SUB164(CONCAT106(CONCAT82(SUB168(auVar29 >> 0x40,0),uVar17),
                                                       (SUB166(auVar33,0) >> 0x10) << 0x20) >> 0x20,0) *
                               0.003921569 - fVar46) + fVar46;
            auVar33 = maxps(ZEXT416(0) << 0x20 & (undefined  [16])0xffffffff,
                            CONCAT412(fVar20 * ((float)iVar26 * 0.003921569 - fVar48) + fVar48,
                                      CONCAT48(fVar20 * ((float)(SUB164(auVar33,0) & 0xffff |
                                                                 uVar34 << 0x10) * 0.003921569 - fVar47) +
                                               fVar47,CONCAT17((char)((uint)fVar46 >> 0x18),
                                                               CONCAT16((char)((uint)fVar46 >> 0x10),
                                                                        CONCAT15((char)((uint)fVar46 >> 8)
                                                                                ,CONCAT14(SUB41(fVar46,0)
                                                                                        ,fVar20 * ((
                                                                                                           float)SUB164(auVar29 >> 0x40,0) * 0.003921569 -
                                                                                                   fVar45) + fVar45)))))));
            auVar33 = minps(auVar33,_DAT_140b7b240);
            iVar26 = (int)(SUB164(auVar33,0) * 255.0 + 0.5);
            uVar34 = (uint)(SUB164(auVar33 >> 0x20,0) * 255.0 + 0.5);
            iVar35 = (int)(SUB164(auVar33 >> 0x40,0) * 255.0 + 0.5);
            iVar36 = (int)(SUB164(auVar33 >> 0x60,0) * 255.0 + 0.5);
            cVar43 = (char)((uint)iVar26 >> 0x10);
            cVar44 = (char)((uint)iVar36 >> 0x10);
            uVar23 = (ulonglong)
                    CONCAT16((char)(uVar34 >> 0x10),
                             CONCAT15((char)(uVar34 >> 8),CONCAT14((char)uVar34,iVar35)));
            uVar22 = ((ulonglong)uVar34 & 0xff000000) << 0x20 | uVar23;
            Var13 = CONCAT19((char)((uint)iVar26 >> 8),CONCAT18((char)iVar26,uVar22));
            auVar28 = CONCAT111((char)((uint)iVar26 >> 0x18),CONCAT110(cVar43,Var13));
            auVar14 = CONCAT113((char)((uint)iVar36 >> 8),CONCAT112((char)iVar36,auVar28));
            sVar9 = (short)iVar35;
            cVar5 = (0 < sVar9) * (sVar9 < 0xff) * (char)iVar35 - (0xff < sVar9);
            sVar9 = (short)(uVar23 >> 0x10);
            sVar10 = (short)(uVar23 >> 0x20);
            cVar6 = (0 < sVar10) * (sVar10 < 0xff) * (char)(uVar23 >> 0x20) - (0xff < sVar10);
            sVar10 = (short)(uVar22 >> 0x30);
            sVar11 = (short)((unkuint10)Var13 >> 0x40);
            cVar7 = (0 < sVar11) * (sVar11 < 0xff) * (char)iVar26 - (0xff < sVar11);
            sVar11 = SUB122(auVar28 >> 0x50,0);
            sVar12 = SUB142(auVar14 >> 0x60,0);
            cVar8 = (0 < sVar12) * (sVar12 < 0xff) * (char)iVar36 - (0xff < sVar12);
            sVar12 = SUB162(CONCAT115((char)((uint)iVar36 >> 0x18),CONCAT114(cVar44,auVar14)) >> 0x70,0);
            sVar15 = CONCAT11((0 < sVar9) * (sVar9 < 0xff) * (char)(uVar23 >> 0x10) - (0xff < sVar9),cVar5
            );
            uVar2 = CONCAT13((0 < sVar10) * (sVar10 < 0xff) * (char)(uVar23 >> 0x30) - (0xff < sVar10),
                             CONCAT12(cVar6,sVar15));
            uVar16 = CONCAT15((0 < sVar11) * (sVar11 < 0xff) * cVar43 - (0xff < sVar11),
                              CONCAT14(cVar7,uVar2));
            sVar9 = (short)((uint)uVar2 >> 0x10);
            sVar10 = (short)((uint6)uVar16 >> 0x20);
            sVar11 = (short)(CONCAT17((0 < sVar12) * (sVar12 < 0xff) * cVar44 - (0xff < sVar12),
                                      CONCAT16(cVar8,uVar16)) >> 0x30);
            *param_3 = CONCAT13((0 < sVar11) * (sVar11 < 0xff) * cVar8 - (0xff < sVar11),
                                CONCAT12((0 < sVar10) * (sVar10 < 0xff) * cVar7 - (0xff < sVar10),
                                         CONCAT11((0 < sVar9) * (sVar9 < 0xff) * cVar6 - (0xff < sVar9),
                                                  (0 < sVar15) * (sVar15 < 0xff) * cVar5 - (0xff < sVar15)
                                         )));
            return;
        }
    }
    uVar22 = 0;
    if (uVar34 != 0) {
        uVar25 = uVar34;
        do {
            uVar24 = (uVar25 - (int)uVar22 >> 1) + (int)uVar22;
            if (*(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar24 * 4) <= param_2) {
                uVar22 = (ulonglong)(uVar24 + 1);
                uVar24 = uVar25;
            }
            uVar25 = uVar24;
        } while ((uint)uVar22 < uVar25);
    }
    puVar4 = *(undefined4 **)(param_1 + 4);
    uVar25 = (uint)uVar22;
    uVar23 = (ulonglong)(uVar25 - 1);
    if (uVar25 != 0) {
        if (uVar34 != uVar25) {
            uVar2 = puVar4[uVar22];
            lVar3 = *(longlong *)(param_1 + 2);
            uVar34 = CONCAT13(in_XMM2_Bd,CONCAT12(in_XMM2_Bc,CONCAT11(in_XMM2_Bb,in_XMM2_Ba))) ^
                     CONCAT13(in_XMM2_Bd,CONCAT12(in_XMM2_Bc,CONCAT11(in_XMM2_Bb,in_XMM2_Ba)));
            uVar37 = (undefined)(uVar34 >> 8);
            uVar38 = (undefined)(uVar34 >> 0x10);
            uVar39 = (undefined)(uVar34 >> 0x18);
            uVar24 = CONCAT13(in_XMM2_Bh,CONCAT12(in_XMM2_Bg,CONCAT11(in_XMM2_Bf,in_XMM2_Be))) ^
                     CONCAT13(in_XMM2_Bh,CONCAT12(in_XMM2_Bg,CONCAT11(in_XMM2_Bf,in_XMM2_Be)));
            uVar40 = (undefined)(uVar24 >> 8);
            uVar41 = (undefined)(uVar24 >> 0x10);
            uVar42 = (undefined)(uVar24 >> 0x18);
            uVar27 = CONCAT44(uVar2,uVar2);
            auVar28 = CONCAT48(uVar2,uVar27);
            auVar30 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412
                                                                                                         (SUB164(CONCAT313(SUB163(CONCAT214(SUB162(
                                                                                                                                                    CONCAT115(uVar42,CONCAT114((char)((uint)uVar2 >>
                                                                                                                                                                                                  0x18),
                                                                                                                                                                               SUB1614(CONCAT412(uVar2
                                                                                                                                                                                       ,auVar28),0))) >> 0x70,0),
                                                                                                                                            CONCAT113(uVar41,SUB1613(CONCAT412(uVar2,auVar28),
                                                                                                                                                                     0))) >> 0x68,0),
                                                                                                                           CONCAT112((char)((uint)uVar2 >> 0x10),auVar28)) >>
                                                                                                                                                                           0x60,0),CONCAT111(uVar40,SUB1211(auVar28,0))) >>
                                                                                                                                                                                                                         0x58,0),CONCAT110((char)((uint)uVar2 >> 8),
                                                                                                                                                                                                                                           SUB1210(auVar28,0))) >> 0x50,0),
                                                                         CONCAT19((char)uVar24,SUB129(auVar28,0))) >> 0x48,
                                                               0),CONCAT18((char)uVar2,uVar27)) >> 0x40,0),uVar39
            ),((uint7)uVar27 >> 0x18) << 0x30);
            auVar29 = CONCAT115(CONCAT101(SUB1610(auVar30 >> 0x30,0),uVar38),
                                ((uint5)uVar27 >> 0x10) << 0x20);
            auVar33 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar29 >> 0x20,0),uVar37),
                                                  ((uint3)uVar2 >> 8) << 0x10) >> 0x10,0),
                                (ushort)uVar2 & 0xff | (ushort)(byte)uVar34 << 8);
            uVar18 = (undefined2)(uVar24 >> 0x10);
            iVar26 = SUB164(CONCAT214(uVar18,CONCAT212(SUB162(auVar30 >> 0x30,0),SUB1612(auVar33,0))) >>
                                                                                                      0x60,0);
            auVar29 = CONCAT610(SUB166(CONCAT412(iVar26,CONCAT210((short)uVar24,SUB1610(auVar33,0))) >>
                                                                                                     0x50,0),CONCAT28(SUB162(auVar29 >> 0x20,0),SUB168(auVar33,0)));
            uVar17 = (undefined2)(uVar34 >> 0x10);
            uVar2 = puVar4[uVar23];
            uVar27 = CONCAT44(uVar2,uVar2);
            auVar28 = CONCAT48(uVar2,uVar27);
            auVar32 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412
                                                                                                         (SUB164(CONCAT313(SUB163(CONCAT214(SUB162(
                                                                                                                                                    CONCAT115(uVar42,CONCAT114((char)((uint)uVar2 >>
                                                                                                                                                                                                  0x18),
                                                                                                                                                                               SUB1614(CONCAT412(uVar2
                                                                                                                                                                                       ,auVar28),0))) >> 0x70,0),
                                                                                                                                            CONCAT113(uVar41,SUB1613(CONCAT412(uVar2,auVar28),
                                                                                                                                                                     0))) >> 0x68,0),
                                                                                                                           CONCAT112((char)((uint)uVar2 >> 0x10),auVar28)) >>
                                                                                                                                                                           0x60,0),CONCAT111(uVar40,SUB1211(auVar28,0))) >>
                                                                                                                                                                                                                         0x58,0),CONCAT110((char)((uint)uVar2 >> 8),
                                                                                                                                                                                                                                           SUB1210(auVar28,0))) >> 0x50,0),
                                                                         CONCAT19((char)uVar24,SUB129(auVar28,0))) >> 0x48,
                                                               0),CONCAT18((char)uVar2,uVar27)) >> 0x40,0),uVar39
            ),((uint7)uVar27 >> 0x18) << 0x30);
            auVar31 = CONCAT115(CONCAT101(SUB1610(auVar32 >> 0x30,0),uVar38),
                                ((uint5)uVar27 >> 0x10) << 0x20);
            auVar30 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar31 >> 0x20,0),uVar37),
                                                  ((uint3)uVar2 >> 8) << 0x10) >> 0x10,0),
                                (ushort)uVar2 & 0xff | (ushort)(byte)uVar34 << 8);
            iVar35 = SUB164(CONCAT214(uVar18,CONCAT212(SUB162(auVar32 >> 0x30,0),SUB1612(auVar30,0))) >>
                                                                                                      0x60,0);
            auVar31 = CONCAT610(SUB166(CONCAT412(iVar35,CONCAT210((short)uVar24,SUB1610(auVar30,0))) >>
                                                                                                     0x50,0),CONCAT28(SUB162(auVar31 >> 0x20,0),SUB168(auVar30,0)));
            fVar45 = (float)SUB164(auVar31 >> 0x40,0) * 0.003921569;
            fVar46 = (float)SUB164(CONCAT106(CONCAT82(SUB168(auVar31 >> 0x40,0),uVar17),
                                             (SUB166(auVar30,0) >> 0x10) << 0x20) >> 0x20,0) * 0.003921569
                    ;
            fVar47 = (float)(SUB164(auVar30,0) & 0xffff | uVar34 << 0x10) * 0.003921569;
            fVar48 = (float)iVar35 * 0.003921569;
            fVar20 = (float)(ulonglong)(param_2 - *(int *)(lVar3 + uVar23 * 4)) /
                     (float)(ulonglong)(uint)(*(int *)(lVar3 + uVar22 * 4) - *(int *)(lVar3 + uVar23 * 4))
                    ;
            fVar46 = fVar20 * ((float)SUB164(CONCAT106(CONCAT82(SUB168(auVar29 >> 0x40,0),uVar17),
                                                       (SUB166(auVar33,0) >> 0x10) << 0x20) >> 0x20,0) *
                               0.003921569 - fVar46) + fVar46;
            auVar33 = maxps(ZEXT416(0) << 0x20 & (undefined  [16])0xffffffff,
                            CONCAT412(fVar20 * ((float)iVar26 * 0.003921569 - fVar48) + fVar48,
                                      CONCAT48(fVar20 * ((float)(SUB164(auVar33,0) & 0xffff |
                                                                 uVar34 << 0x10) * 0.003921569 - fVar47) +
                                               fVar47,CONCAT17((char)((uint)fVar46 >> 0x18),
                                                               CONCAT16((char)((uint)fVar46 >> 0x10),
                                                                        CONCAT15((char)((uint)fVar46 >> 8)
                                                                                ,CONCAT14(SUB41(fVar46,0)
                                                                                        ,fVar20 * ((
                                                                                                           float)SUB164(auVar29 >> 0x40,0) * 0.003921569 -
                                                                                                   fVar45) + fVar45)))))));
            auVar33 = minps(auVar33,_DAT_140b7b240);
            iVar26 = (int)(SUB164(auVar33,0) * 255.0 + 0.5);
            uVar34 = (uint)(SUB164(auVar33 >> 0x20,0) * 255.0 + 0.5);
            iVar35 = (int)(SUB164(auVar33 >> 0x40,0) * 255.0 + 0.5);
            iVar36 = (int)(SUB164(auVar33 >> 0x60,0) * 255.0 + 0.5);
            cVar43 = (char)((uint)iVar26 >> 0x10);
            cVar44 = (char)((uint)iVar36 >> 0x10);
            uVar23 = (ulonglong)
                    CONCAT16((char)(uVar34 >> 0x10),
                             CONCAT15((char)(uVar34 >> 8),CONCAT14((char)uVar34,iVar35)));
            uVar22 = ((ulonglong)uVar34 & 0xff000000) << 0x20 | uVar23;
            Var13 = CONCAT19((char)((uint)iVar26 >> 8),CONCAT18((char)iVar26,uVar22));
            auVar28 = CONCAT111((char)((uint)iVar26 >> 0x18),CONCAT110(cVar43,Var13));
            auVar14 = CONCAT113((char)((uint)iVar36 >> 8),CONCAT112((char)iVar36,auVar28));
            sVar9 = (short)iVar35;
            cVar5 = (0 < sVar9) * (sVar9 < 0xff) * (char)iVar35 - (0xff < sVar9);
            sVar9 = (short)(uVar23 >> 0x10);
            sVar10 = (short)(uVar23 >> 0x20);
            cVar6 = (0 < sVar10) * (sVar10 < 0xff) * (char)(uVar23 >> 0x20) - (0xff < sVar10);
            sVar10 = (short)(uVar22 >> 0x30);
            sVar11 = (short)((unkuint10)Var13 >> 0x40);
            cVar7 = (0 < sVar11) * (sVar11 < 0xff) * (char)iVar26 - (0xff < sVar11);
            sVar11 = SUB122(auVar28 >> 0x50,0);
            sVar12 = SUB142(auVar14 >> 0x60,0);
            cVar8 = (0 < sVar12) * (sVar12 < 0xff) * (char)iVar36 - (0xff < sVar12);
            sVar12 = SUB162(CONCAT115((char)((uint)iVar36 >> 0x18),CONCAT114(cVar44,auVar14)) >> 0x70,0);
            sVar15 = CONCAT11((0 < sVar9) * (sVar9 < 0xff) * (char)(uVar23 >> 0x10) - (0xff < sVar9),cVar5
            );
            uVar2 = CONCAT13((0 < sVar10) * (sVar10 < 0xff) * (char)(uVar23 >> 0x30) - (0xff < sVar10),
                             CONCAT12(cVar6,sVar15));
            uVar16 = CONCAT15((0 < sVar11) * (sVar11 < 0xff) * cVar43 - (0xff < sVar11),
                              CONCAT14(cVar7,uVar2));
            sVar9 = (short)((uint)uVar2 >> 0x10);
            sVar10 = (short)((uint6)uVar16 >> 0x20);
            sVar11 = (short)(CONCAT17((0 < sVar12) * (sVar12 < 0xff) * cVar44 - (0xff < sVar12),
                                      CONCAT16(cVar8,uVar16)) >> 0x30);
            *param_3 = CONCAT13((0 < sVar11) * (sVar11 < 0xff) * cVar8 - (0xff < sVar11),
                                CONCAT12((0 < sVar10) * (sVar10 < 0xff) * cVar7 - (0xff < sVar10),
                                         CONCAT11((0 < sVar9) * (sVar9 < 0xff) * cVar6 - (0xff < sVar9),
                                                  (0 < sVar15) * (sVar15 < 0xff) * cVar5 - (0xff < sVar15)
                                         )));
            *param_5 = uVar25 - 1;
            return;
        }
        *param_3 = puVar4[uVar23];
        *param_5 = *param_1 - 2;
        return;
    }
    *param_3 = *puVar4;
    *param_5 = 0;
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14030a000(uint *param_1,uint param_2,uint *param_3,undefined8 param_4,uint *param_5)

{
    uint *puVar1;
    longlong lVar2;
    longlong lVar3;
    uint uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    uint uVar7;
    uint uVar8;
    uint uVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    uint local_res20 [2];

    uVar7 = *param_1;
    if (uVar7 == 0) {
        if ((DAT_140dc0e08 & 1) == 0) {
            DAT_140dc0e08 = DAT_140dc0e08 | 1;
        }
        *param_3 = DAT_140dc0e0c;
        return;
    }
    if (uVar7 == 1) {
        *param_3 = **(uint **)(param_1 + 4);
        return;
    }
    if (param_5 == (uint *)0x0) {
        param_5 = local_res20;
        LAB_14030a292:
        uVar6 = 0;
        if (uVar7 != 0) {
            uVar9 = uVar7;
            do {
                uVar8 = (uVar9 - (int)uVar6 >> 1) + (int)uVar6;
                if (*(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar8 * 4) <= param_2) {
                    uVar6 = (ulonglong)(uVar8 + 1);
                    uVar8 = uVar9;
                }
                uVar9 = uVar8;
            } while ((uint)uVar6 < uVar9);
        }
        uVar9 = (uint)uVar6;
        uVar5 = (ulonglong)(uVar9 - 1);
        if (uVar9 == 0) {
            *param_3 = **(uint **)(param_1 + 4);
            *param_5 = 0;
        }
        else if (uVar7 == uVar9) {
            *param_3 = *(uint *)(*(longlong *)(param_1 + 4) + uVar5 * 4);
            *param_5 = *param_1 - 2;
        }
        else {
            lVar2 = *(longlong *)(param_1 + 4);
            fVar10 = (float)(int)*(char *)(lVar2 + uVar5 * 4);
            fVar12 = (float)(int)*(char *)(lVar2 + 1 + uVar5 * 4);
            lVar3 = *(longlong *)(param_1 + 2);
            fVar11 = (float)(int)*(char *)(lVar2 + 2 + uVar5 * 4);
            fVar13 = (float)(int)*(char *)(lVar2 + 3 + uVar5 * 4);
            fVar14 = (float)(ulonglong)(param_2 - *(int *)(lVar3 + uVar5 * 4)) /
                     (float)(ulonglong)(uint)(*(int *)(lVar3 + uVar6 * 4) - *(int *)(lVar3 + uVar5 * 4));
            local_res20[0]._0_2_ =
                    CONCAT11((char)(int)(fVar14 * ((float)(int)*(char *)(lVar2 + 1 + uVar6 * 4) - fVar12) +
                                         fVar12),
                             (char)(int)(fVar14 * ((float)(int)*(char *)(lVar2 + uVar6 * 4) - fVar10) +
                                         fVar10));
            local_res20[0]._0_3_ =
                    CONCAT12((char)(int)(fVar14 * ((float)(int)*(char *)(lVar2 + 2 + uVar6 * 4) - fVar11) +
                                         fVar11),(undefined2)local_res20[0]);
            local_res20[0] =
                    CONCAT13((char)(int)(fVar14 * ((float)(int)*(char *)(lVar2 + 3 + uVar6 * 4) - fVar13) +
                                         fVar13),(undefined3)local_res20[0]);
            *param_3 = local_res20[0];
            *param_5 = uVar9 - 1;
        }
    }
    else {
        uVar9 = *param_5;
        uVar6 = (ulonglong)uVar9;
        uVar7 = *(uint *)(*(longlong *)(param_1 + 2) + uVar6 * 4);
        if (param_2 < uVar7) {
            LAB_14030a15b:
            uVar8 = uVar9 + 1;
            uVar6 = (ulonglong)uVar8;
            *param_5 = uVar8;
            uVar7 = *param_1;
            if (((uVar7 - 1 <= uVar8) ||
                 (lVar2 = *(longlong *)(param_1 + 2), puVar1 = (uint *)(lVar2 + uVar6 * 4),
                         param_2 <= *puVar1 && *puVar1 != param_2)) ||
                (*(uint *)(lVar2 + (ulonglong)(uVar9 + 2) * 4) <= param_2)) goto LAB_14030a292;
            lVar3 = *(longlong *)(param_1 + 4);
            uVar5 = (ulonglong)(uVar9 + 2);
            fVar10 = (float)(int)*(char *)(lVar3 + uVar6 * 4);
            fVar12 = (float)(int)*(char *)(lVar3 + 1 + uVar6 * 4);
            fVar11 = (float)(int)*(char *)(lVar3 + 2 + uVar6 * 4);
            fVar13 = (float)(int)*(char *)(lVar3 + 3 + uVar6 * 4);
            fVar14 = (float)(ulonglong)(param_2 - *(int *)(lVar2 + uVar6 * 4)) /
                     (float)(ulonglong)
                             (uint)(*(int *)(lVar2 + (ulonglong)(uVar9 + 2) * 4) -
                                    *(int *)(lVar2 + uVar6 * 4));
            fVar10 = fVar14 * ((float)(int)*(char *)(lVar3 + (ulonglong)(uVar9 + 2) * 4) - fVar10) +
                     fVar10;
            fVar12 = fVar14 * ((float)(int)*(char *)(lVar3 + 1 + uVar5 * 4) - fVar12) + fVar12;
            fVar11 = fVar14 * ((float)(int)*(char *)(lVar3 + 2 + uVar5 * 4) - fVar11) + fVar11;
            fVar13 = fVar14 * ((float)(int)*(char *)(lVar3 + 3 + uVar5 * 4) - fVar13) + fVar13;
        }
        else {
            uVar4 = uVar9 + 1;
            uVar5 = (ulonglong)uVar4;
            uVar8 = *(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar4 * 4);
            if (uVar8 <= param_2) goto LAB_14030a15b;
            lVar2 = *(longlong *)(param_1 + 4);
            fVar10 = (float)(int)*(char *)(lVar2 + uVar6 * 4);
            fVar12 = (float)(int)*(char *)(lVar2 + 1 + uVar6 * 4);
            fVar11 = (float)(int)*(char *)(lVar2 + 2 + uVar6 * 4);
            fVar13 = (float)(int)*(char *)(lVar2 + 3 + uVar6 * 4);
            fVar14 = (float)(ulonglong)(param_2 - uVar7) / (float)(ulonglong)(uVar8 - uVar7);
            fVar10 = fVar14 * ((float)(int)*(char *)(lVar2 + (ulonglong)uVar4 * 4) - fVar10) + fVar10;
            fVar12 = fVar14 * ((float)(int)*(char *)(lVar2 + 1 + uVar5 * 4) - fVar12) + fVar12;
            fVar11 = fVar14 * ((float)(int)*(char *)(lVar2 + 2 + uVar5 * 4) - fVar11) + fVar11;
            fVar13 = fVar14 * ((float)(int)*(char *)(lVar2 + 3 + uVar5 * 4) - fVar13) + fVar13;
        }
        local_res20[0]._0_2_ = CONCAT11((char)(int)fVar12,(char)(int)fVar10);
        local_res20[0]._0_3_ = CONCAT12((char)(int)fVar11,(undefined2)local_res20[0]);
        local_res20[0] = CONCAT13((char)(int)fVar13,(undefined3)local_res20[0]);
        *param_3 = local_res20[0];
    }
    return;
}



void FUN_14030a400(uint *param_1,uint param_2,uint *param_3,undefined8 param_4,uint *param_5)

{
    uint *puVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    ulonglong uVar5;
    uint uVar6;
    uint local_res20 [2];

    uVar6 = *param_1;
    if (uVar6 == 0) {
        *param_3 = 0;
        return;
    }
    if (uVar6 == 1) {
        *param_3 = (uint)**(byte **)(param_1 + 4);
        return;
    }
    if (param_5 == (uint *)0x0) {
        param_5 = local_res20;
        LAB_14030a492:
        uVar4 = 0;
        if (uVar6 != 0) {
            uVar3 = uVar6;
            do {
                uVar2 = (uVar3 - uVar4 >> 1) + uVar4;
                if (*(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar2 * 4) <= param_2) {
                    uVar4 = uVar2 + 1;
                    uVar2 = uVar3;
                }
                uVar3 = uVar2;
            } while (uVar4 < uVar3);
        }
        if (uVar4 != 0) {
            *param_3 = (uint)(*(byte **)(param_1 + 4))[uVar4 - 1];
            if (uVar6 != uVar4) {
                *param_5 = uVar4 - 1;
                return;
            }
            *param_5 = *param_1 - 2;
            return;
        }
        *param_3 = (uint)**(byte **)(param_1 + 4);
        *param_5 = 0;
        return;
    }
    uVar4 = *param_5;
    uVar5 = (ulonglong)uVar4;
    puVar1 = (uint *)(*(longlong *)(param_1 + 2) + uVar5 * 4);
    if ((param_2 <= *puVar1 && *puVar1 != param_2) ||
        (*(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)(uVar4 + 1) * 4) <= param_2)) {
        uVar3 = uVar4 + 1;
        uVar5 = (ulonglong)uVar3;
        *param_5 = uVar3;
        uVar6 = *param_1;
        if ((uVar6 - 1 <= uVar3) ||
            ((puVar1 = (uint *)(*(longlong *)(param_1 + 2) + uVar5 * 4),
                    param_2 <= *puVar1 && *puVar1 != param_2 ||
                    (*(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)(uVar4 + 2) * 4) <= param_2))))
            goto LAB_14030a492;
    }
    *param_3 = (uint)*(byte *)(*(longlong *)(param_1 + 4) + uVar5);
    return;
}



undefined8 FUN_14030a510(code **param_1,longlong param_2)

{
    undefined4 uVar1;
    code *pcVar2;
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
        pcVar2 = param_1[1];
        uVar3 = *(undefined8 *)(pcVar2 + lVar7);
        uVar1 = *(undefined4 *)(pcVar2 + lVar7 + 8);
        puVar6 = (undefined8 *)(pcVar2 + lVar7);
        if (puVar6 != (undefined8 *)0x0) {
            *puVar6 = *(undefined8 *)(pcVar2 + lVar9);
            *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(pcVar2 + lVar9 + 8);
        }
        puVar6 = (undefined8 *)(param_1[1] + lVar9);
        if (puVar6 != (undefined8 *)0x0) {
            *puVar6 = uVar3;
            *(undefined4 *)(puVar6 + 1) = uVar1;
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



void FUN_14030a5f0(code **param_1,longlong param_2)

{
    undefined4 uVar1;
    code *pcVar2;
    undefined8 uVar3;
    int iVar4;
    undefined8 *puVar5;
    code *pcVar6;
    code *pcVar7;
    code *pcVar8;
    longlong lVar9;
    longlong lVar10;

    pcVar8 = *(code **)(param_2 + 8);
    pcVar2 = param_1[2];
    pcVar6 = (code *)((longlong)pcVar8 * 2 + 1);
    if (pcVar2 <= pcVar6) {
        *(code **)(param_2 + 8) = pcVar8;
        return;
    }
    do {
        pcVar7 = pcVar6;
        if ((pcVar6 + 1 < pcVar2) &&
            (iVar4 = (**param_1)(param_1[1] + (longlong)pcVar6 * 0x10 + 8,
                                 param_1[1] + (longlong)pcVar6 * 0x10 + 0x18,param_1[3]), -1 < iVar4)) {
            pcVar7 = pcVar6 + 1;
        }
        lVar10 = (longlong)pcVar8 * 0x10;
        lVar9 = (longlong)pcVar7 * 0x10;
        iVar4 = (**param_1)(param_1[1] + lVar9 + 8,param_1[1] + lVar10 + 8,param_1[3]);
        if (-1 < iVar4) break;
        pcVar6 = param_1[1];
        uVar3 = *(undefined8 *)(pcVar6 + lVar10);
        uVar1 = *(undefined4 *)(pcVar6 + lVar10 + 8);
        puVar5 = (undefined8 *)(pcVar6 + lVar10);
        if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = *(undefined8 *)(pcVar6 + lVar9);
            *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(pcVar6 + lVar9 + 8);
        }
        puVar5 = (undefined8 *)(param_1[1] + lVar9);
        if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = uVar3;
            *(undefined4 *)(puVar5 + 1) = uVar1;
        }
        *(code **)(*(longlong *)(param_1[1] + lVar10) + 8) = pcVar8;
        pcVar6 = (code *)((longlong)pcVar7 * 2 + 1);
        pcVar8 = pcVar7;
    } while (pcVar6 < pcVar2);
    *(code **)(param_2 + 8) = pcVar8;
    return;
}



void FUN_14030a710(longlong *param_1,ulonglong param_2)

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
                        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar4 + 1);
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



longlong FUN_14030a7c0(longlong *param_1,undefined8 *param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    ulonglong uVar6;

    lVar1 = param_1[1];
    puVar3 = (undefined8 *)FUN_14018db00(*param_1,lVar1 + 1);
    puVar4 = puVar3 + lVar1 * 2;
    if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = *param_2;
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_2 + 1);
    }
    if ((undefined8 *)*param_1 != puVar3) {
        uVar6 = 0;
        if (param_1[1] != 0) {
            puVar4 = puVar3;
            do {
                if (puVar4 != (undefined8 *)0x0) {
                    puVar5 = (undefined8 *)((longlong)puVar4 + (*param_1 - (longlong)puVar3));
                    *puVar4 = *puVar5;
                    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar5 + 1);
                }
                uVar6 = uVar6 + 1;
                puVar4 = puVar4 + 2;
            } while (uVar6 < (ulonglong)param_1[1]);
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



undefined (*) [16] FUN_14030a8a0(longlong *param_1,undefined (*param_2) [16],longlong param_3)

{
short sVar1;
short sVar2;
short sVar3;
short *psVar4;

if (*(int *)(param_1 + 0x16) == 1) {
*param_2 = ZEXT1216(*(undefined (*) [12])(param_1[0xb] * param_3 + *param_1));
return param_2;
}
psVar4 = (short *)(param_1[0xb] * param_3 + *param_1);
sVar1 = *psVar4;
sVar2 = psVar4[1];
sVar3 = psVar4[2];
*(float *)*param_2 = (float)(int)sVar1 * 0.0009765625;
*(float *)(*param_2 + 4) = (float)(int)sVar2 * 0.0009765625;
*(float *)(*param_2 + 8) =
SUB164(ZEXT1216(CONCAT48((float)(int)sVar3,CONCAT44((float)(int)sVar2,(float)(int)sVar1))) >>
0x40,0) * 0.0009765625;
*(undefined4 *)(*param_2 + 0xc) = 0;
return param_2;
}



undefined8 FUN_14030a9d0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
    undefined8 uVar1;

    uVar1 = FUN_1402ca3c0(param_1,param_2,param_3 + 0x18);
    if (-1 < (int)uVar1) {
        uVar1 = FUN_1402ca3c0(param_1,param_2,param_3 + 0x30);
        if (-1 < (int)uVar1) {
            uVar1 = FUN_1402ca3c0(param_1,param_2,param_3 + 0x48);
            if (-1 < (int)uVar1) {
                uVar1 = FUN_1402ca3c0(param_1,param_2,param_3 + 0x60);
                if (-1 < (int)uVar1) {
                    uVar1 = FUN_1402ca3c0(param_1,param_2,param_3 + 0x78);
                    if (-1 < (int)uVar1) {
                        uVar1 = FUN_1402ca3c0(param_1,param_2,param_3 + 0xa8);
                        if (-1 < (int)uVar1) {
                            uVar1 = FUN_1402ca3c0(param_1,param_2,param_3 + 0xc0);
                            if (-1 < (int)uVar1) {
                                uVar1 = FUN_1402ca3c0(param_1,param_2,param_3 + 0xd8);
                                if (-1 < (int)uVar1) {
                                    uVar1 = FUN_1402ca3c0(param_1,param_2,param_3 + 0xf0);
                                    if (-1 < (int)uVar1) {
                                        uVar1 = FUN_14030eb00(param_1,param_2,param_3 + 0x108);
                                        if (-1 < (int)uVar1) {
                                            uVar1 = 0;
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
    return uVar1;
}



undefined8 FUN_14030aab0(ulonglong *param_1,longlong param_2,uint *param_3)

{
    ulonglong uVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    uVar1 = *(longlong *)(param_3 + 2) + param_2;
    if ((*param_1 <= uVar1) &&
        (uVar2 = (ulonglong)*param_3 * 0x10 + *(longlong *)(param_3 + 2) + param_2,
                uVar2 < param_1[1] || uVar2 == param_1[1])) {
        uVar3 = 0;
        uVar2 = uVar3;
        if (*param_3 != 0) {
            uVar2 = uVar1;
        }
        *(ulonglong *)(param_3 + 2) = uVar2;
        uVar1 = *(longlong *)(param_3 + 6) + param_2;
        if ((*param_1 <= uVar1) &&
            (uVar2 = *(longlong *)(param_3 + 6) + (ulonglong)param_3[4] * 0xc + param_2,
                    uVar2 < param_1[1] || uVar2 == param_1[1])) {
            uVar2 = uVar3;
            if (param_3[4] != 0) {
                uVar2 = uVar1;
            }
            *(ulonglong *)(param_3 + 6) = uVar2;
            uVar1 = *(longlong *)(param_3 + 10) + param_2;
            if ((*param_1 <= uVar1) &&
                (uVar2 = *(longlong *)(param_3 + 10) + (ulonglong)param_3[8] * 4 + param_2,
                        uVar2 < param_1[1] || uVar2 == param_1[1])) {
                uVar2 = uVar3;
                if (param_3[8] != 0) {
                    uVar2 = uVar1;
                }
                *(ulonglong *)(param_3 + 10) = uVar2;
                uVar1 = *(longlong *)(param_3 + 0xe) + param_2;
                if ((*param_1 <= uVar1) &&
                    (uVar2 = *(longlong *)(param_3 + 0xe) + (ulonglong)param_3[0xc] * 0x14 + param_2,
                            uVar2 < param_1[1] || uVar2 == param_1[1])) {
                    if (param_3[0xc] != 0) {
                        uVar3 = uVar1;
                    }
                    *(ulonglong *)(param_3 + 0xe) = uVar3;
                    return 0;
                }
            }
        }
    }
    return 0x80004005;
}



undefined8 FUN_14030aba0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
    undefined8 uVar1;

    uVar1 = FUN_1402ca3c0(param_1,param_2,param_3 + 8);
    if (-1 < (int)uVar1) {
        uVar1 = FUN_1402ca3c0(param_1,param_2,param_3 + 0x20);
        if (-1 < (int)uVar1) {
            uVar1 = FUN_14030eb90(param_1,param_2,param_3 + 0x38);
            if (-1 < (int)uVar1) {
                uVar1 = FUN_14030eb90(param_1,param_2,param_3 + 0x50);
                if (-1 < (int)uVar1) {
                    uVar1 = FUN_14030eb90(param_1,param_2,param_3 + 0x68);
                    if (-1 < (int)uVar1) {
                        uVar1 = FUN_14030eb90(param_1,param_2,param_3 + 0x80);
                        if (-1 < (int)uVar1) {
                            uVar1 = FUN_1402ca3c0(param_1,param_2,param_3 + 0x98);
                            if (-1 < (int)uVar1) {
                                uVar1 = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    return uVar1;
}



undefined8 FUN_14030ac30(ulonglong *param_1,longlong param_2,uint *param_3)

{
    ulonglong uVar1;
    uint uVar2;
    ulonglong uVar3;
    undefined8 uVar4;
    ulonglong uVar5;

    uVar1 = *(longlong *)(param_3 + 2) + param_2;
    if (*param_1 <= uVar1) {
        uVar2 = *param_3;
        uVar3 = *(longlong *)(param_3 + 2) + (ulonglong)uVar2 * 4 + param_2;
        if (uVar3 < param_1[1] || uVar3 == param_1[1]) {
            uVar5 = 0;
            uVar3 = uVar5;
            if (uVar2 != 0) {
                uVar3 = uVar1;
            }
            *(ulonglong *)(param_3 + 2) = uVar3;
            uVar1 = *(longlong *)(param_3 + 4) + param_2;
            if ((*param_1 <= uVar1) &&
                (uVar3 = *(longlong *)(param_3 + 4) + (ulonglong)uVar2 * 4 + param_2,
                        uVar3 < param_1[1] || uVar3 == param_1[1])) {
                uVar3 = uVar5;
                if (uVar2 != 0) {
                    uVar3 = uVar1;
                }
                *(ulonglong *)(param_3 + 4) = uVar3;
                uVar1 = *(longlong *)(param_3 + 8) + param_2;
                if (*param_1 <= uVar1) {
                    uVar2 = param_3[6];
                    uVar3 = *(longlong *)(param_3 + 8) + (ulonglong)uVar2 * 4 + param_2;
                    if (uVar3 < param_1[1] || uVar3 == param_1[1]) {
                        uVar3 = uVar5;
                        if (uVar2 != 0) {
                            uVar3 = uVar1;
                        }
                        *(ulonglong *)(param_3 + 8) = uVar3;
                        uVar1 = *(longlong *)(param_3 + 10) + param_2;
                        if ((*param_1 <= uVar1) &&
                            (uVar3 = *(longlong *)(param_3 + 10) + (ulonglong)uVar2 * 4 + param_2,
                                    uVar3 < param_1[1] || uVar3 == param_1[1])) {
                            if (uVar2 != 0) {
                                uVar5 = uVar1;
                            }
                            *(ulonglong *)(param_3 + 10) = uVar5;
                            uVar4 = FUN_14030eb90(param_1,param_2,param_3 + 0xc);
                            if (-1 < (int)uVar4) {
                                uVar4 = FUN_14030eb90(param_1);
                                if (-1 < (int)uVar4) {
                                    uVar4 = FUN_1402ca3c0(param_1);
                                    if (-1 < (int)uVar4) {
                                        uVar4 = 0;
                                    }
                                }
                            }
                            return uVar4;
                        }
                    }
                }
            }
        }
    }
    return 0x80004005;
}



undefined8 FUN_14030ad40(ulonglong *param_1,longlong param_2,longlong param_3)

{
    ulonglong uVar1;
    uint uVar2;
    undefined8 uVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    uVar3 = FUN_14030ebf0(param_1,param_2,param_3 + 0x10);
    if (((((int)uVar3 < 0) || (uVar3 = FUN_14030ebf0(param_1,param_2,param_3 + 0x28), (int)uVar3 < 0))
         || (uVar3 = FUN_14030ebf0(param_1,param_2,param_3 + 0x40), (int)uVar3 < 0)) ||
        (uVar3 = FUN_14030ebf0(param_1,param_2), (int)uVar3 < 0)) {
        return uVar3;
    }
    uVar1 = *(longlong *)(param_3 + 0x78) + param_2;
    if (*param_1 <= uVar1) {
        uVar2 = *(uint *)(param_3 + 0x70);
        uVar4 = *(longlong *)(param_3 + 0x78) + (ulonglong)uVar2 * 4 + param_2;
        if (uVar4 < param_1[1] || uVar4 == param_1[1]) {
            uVar5 = 0;
            uVar4 = uVar5;
            if (uVar2 != 0) {
                uVar4 = uVar1;
            }
            *(ulonglong *)(param_3 + 0x78) = uVar4;
            uVar1 = *(longlong *)(param_3 + 0x80) + param_2;
            if ((*param_1 <= uVar1) &&
                (uVar4 = *(longlong *)(param_3 + 0x80) + (ulonglong)uVar2 * 8 + param_2,
                        uVar4 < param_1[1] || uVar4 == param_1[1])) {
                uVar4 = uVar5;
                if (uVar2 != 0) {
                    uVar4 = uVar1;
                }
                *(ulonglong *)(param_3 + 0x80) = uVar4;
                uVar1 = *(longlong *)(param_3 + 0x90) + param_2;
                if (*param_1 <= uVar1) {
                    uVar2 = *(uint *)(param_3 + 0x88);
                    uVar4 = *(longlong *)(param_3 + 0x90) + (ulonglong)uVar2 * 4 + param_2;
                    if (uVar4 < param_1[1] || uVar4 == param_1[1]) {
                        uVar4 = uVar5;
                        if (uVar2 != 0) {
                            uVar4 = uVar1;
                        }
                        *(ulonglong *)(param_3 + 0x90) = uVar4;
                        uVar1 = *(longlong *)(param_3 + 0x98) + param_2;
                        if ((*param_1 <= uVar1) &&
                            (uVar4 = *(longlong *)(param_3 + 0x98) + (ulonglong)uVar2 * 8 + param_2,
                                    uVar4 < param_1[1] || uVar4 == param_1[1])) {
                            if (uVar2 != 0) {
                                uVar5 = uVar1;
                            }
                            *(ulonglong *)(param_3 + 0x98) = uVar5;
                            uVar3 = FUN_14030eb00(param_1,param_2,param_3 + 0xa0);
                            if ((int)uVar3 < 0) {
                                return uVar3;
                            }
                            uVar3 = FUN_14030eb00(param_1,param_2,param_3 + 0xb8);
                            if ((int)uVar3 < 0) {
                                return uVar3;
                            }
                            return 0;
                        }
                    }
                }
            }
        }
    }
    return 0x80004005;
}



undefined8 FUN_14030aed0(ulonglong *param_1,longlong param_2,longlong param_3)

{
    ulonglong uVar1;
    uint uVar2;
    ulonglong uVar3;
    undefined8 uVar4;
    ulonglong uVar5;

    uVar1 = *(longlong *)(param_3 + 0x10) + param_2;
    if (*param_1 <= uVar1) {
        uVar2 = *(uint *)(param_3 + 8);
        uVar3 = *(longlong *)(param_3 + 0x10) + (ulonglong)uVar2 * 4 + param_2;
        if (uVar3 < param_1[1] || uVar3 == param_1[1]) {
            uVar5 = 0;
            uVar3 = uVar5;
            if (uVar2 != 0) {
                uVar3 = uVar1;
            }
            uVar1 = *(longlong *)(param_3 + 0x18) + param_2;
            *(ulonglong *)(param_3 + 0x10) = uVar3;
            if ((*param_1 <= uVar1) &&
                (uVar3 = *(longlong *)(param_3 + 0x18) + (ulonglong)uVar2 * 6 + param_2,
                        uVar3 < param_1[1] || uVar3 == param_1[1])) {
                uVar3 = uVar5;
                if (uVar2 != 0) {
                    uVar3 = uVar1;
                }
                *(ulonglong *)(param_3 + 0x18) = uVar3;
                uVar1 = *(longlong *)(param_3 + 0x28) + param_2;
                if (*param_1 <= uVar1) {
                    uVar2 = *(uint *)(param_3 + 0x20);
                    uVar3 = *(longlong *)(param_3 + 0x28) + (ulonglong)uVar2 * 4 + param_2;
                    if (uVar3 < param_1[1] || uVar3 == param_1[1]) {
                        uVar3 = uVar5;
                        if (uVar2 != 0) {
                            uVar3 = uVar1;
                        }
                        uVar1 = *(longlong *)(param_3 + 0x30) + param_2;
                        *(ulonglong *)(param_3 + 0x28) = uVar3;
                        if ((*param_1 <= uVar1) &&
                            (uVar3 = *(longlong *)(param_3 + 0x30) + (ulonglong)uVar2 * 6 + param_2,
                                    uVar3 < param_1[1] || uVar3 == param_1[1])) {
                            if (uVar2 != 0) {
                                uVar5 = uVar1;
                            }
                            *(ulonglong *)(param_3 + 0x30) = uVar5;
                            uVar4 = FUN_14030ec80(param_1,param_2,param_3 + 0x38);
                            if (-1 < (int)uVar4) {
                                uVar4 = FUN_14030ec80(param_1);
                                if (-1 < (int)uVar4) {
                                    uVar4 = FUN_14030eb00(param_1);
                                    if (-1 < (int)uVar4) {
                                        uVar4 = FUN_14030eb00(param_1,param_2,param_3 + 0x80);
                                        if (-1 < (int)uVar4) {
                                            uVar4 = 0;
                                        }
                                    }
                                }
                            }
                            return uVar4;
                        }
                    }
                }
            }
        }
    }
    return 0x80004005;
}



undefined8 FUN_14030b010(ulonglong *param_1,longlong param_2,longlong param_3)

{
    ulonglong uVar1;
    uint uVar2;
    ulonglong uVar3;
    undefined8 uVar4;
    uint uVar5;
    ulonglong uVar6;

    uVar1 = *(longlong *)(param_3 + 0x28) + param_2;
    if (*param_1 <= uVar1) {
        uVar2 = *(uint *)(param_3 + 0x20);
        uVar3 = *(longlong *)(param_3 + 0x28) + (ulonglong)uVar2 * 0x128 + param_2;
        if (uVar3 < param_1[1] || uVar3 == param_1[1]) {
            uVar6 = 0;
            uVar3 = uVar6;
            if (uVar2 != 0) {
                uVar3 = uVar1;
            }
            *(ulonglong *)(param_3 + 0x28) = uVar3;
            if (uVar2 != 0) {
                do {
                    uVar4 = FUN_14030a9d0(param_1,((ulonglong)uVar2 * 0x128 + 0xf & 0xfffffffffffffff0) +
                                                  uVar3,
                                          uVar6 * 0x128 + *(longlong *)(param_3 + 0x28) + param_1[2]);
                    if ((int)uVar4 < 0) {
                        return uVar4;
                    }
                    uVar5 = (int)uVar6 + 1;
                    uVar6 = (ulonglong)uVar5;
                } while (uVar5 < *(uint *)(param_3 + 0x20));
            }
            return 0;
        }
    }
    return 0x80004005;
}



undefined8 FUN_14030b0c0(ulonglong *param_1,longlong param_2,uint *param_3)

{
    ulonglong uVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    uVar1 = *(longlong *)(param_3 + 2) + param_2;
    if ((*param_1 <= uVar1) &&
        (uVar2 = (ulonglong)*param_3 * 0x4c + *(longlong *)(param_3 + 2) + param_2,
                uVar2 < param_1[1] || uVar2 == param_1[1])) {
        uVar3 = 0;
        uVar2 = uVar3;
        if (*param_3 != 0) {
            uVar2 = uVar1;
        }
        *(ulonglong *)(param_3 + 2) = uVar2;
        uVar1 = *(longlong *)(param_3 + 6) + param_2;
        if ((*param_1 <= uVar1) &&
            (uVar2 = *(longlong *)(param_3 + 6) + (ulonglong)param_3[4] * 4 + param_2,
                    uVar2 < param_1[1] || uVar2 == param_1[1])) {
            uVar2 = uVar3;
            if (param_3[4] != 0) {
                uVar2 = uVar1;
            }
            *(ulonglong *)(param_3 + 6) = uVar2;
            uVar1 = *(longlong *)(param_3 + 10) + param_2;
            if ((*param_1 <= uVar1) &&
                (uVar2 = (ulonglong)param_3[8] * 0x70 + *(longlong *)(param_3 + 10) + param_2,
                        uVar2 < param_1[1] || uVar2 == param_1[1])) {
                if (param_3[8] != 0) {
                    uVar3 = uVar1;
                }
                *(ulonglong *)(param_3 + 10) = uVar3;
                return 0;
            }
        }
    }
    return 0x80004005;
}



undefined8 FUN_14030b170(ulonglong *param_1,longlong param_2,longlong param_3)

{
    ulonglong uVar1;
    ulonglong uVar2;
    undefined8 uVar3;
    ulonglong uVar4;

    uVar1 = *(longlong *)(param_3 + 0x10) + param_2;
    if ((*param_1 <= uVar1) &&
        (uVar2 = *(longlong *)(param_3 + 0x10) + (ulonglong)*(uint *)(param_3 + 8) * 4 + param_2,
                uVar2 < param_1[1] || uVar2 == param_1[1])) {
        uVar4 = 0;
        uVar2 = uVar4;
        if (*(uint *)(param_3 + 8) != 0) {
            uVar2 = uVar1;
        }
        *(ulonglong *)(param_3 + 0x10) = uVar2;
        uVar1 = *(longlong *)(param_3 + 0x40) + param_2;
        if ((*param_1 <= uVar1) &&
            (uVar2 = *(longlong *)(param_3 + 0x40) + (ulonglong)*(uint *)(param_3 + 0x38) + param_2,
                    uVar2 < param_1[1] || uVar2 == param_1[1])) {
            uVar2 = uVar4;
            if (*(uint *)(param_3 + 0x38) != 0) {
                uVar2 = uVar1;
            }
            *(ulonglong *)(param_3 + 0x40) = uVar2;
            uVar1 = *(longlong *)(param_3 + 0x50) + param_2;
            if ((*param_1 <= uVar1) &&
                (uVar2 = *(longlong *)(param_3 + 0x50) + (ulonglong)*(uint *)(param_3 + 0x48) * 4 + param_2
                        , uVar2 < param_1[1] || uVar2 == param_1[1])) {
                uVar2 = uVar4;
                if (*(uint *)(param_3 + 0x48) != 0) {
                    uVar2 = uVar1;
                }
                *(ulonglong *)(param_3 + 0x50) = uVar2;
                uVar1 = *(longlong *)(param_3 + 0x60) + param_2;
                if ((*param_1 <= uVar1) &&
                    (uVar2 = *(longlong *)(param_3 + 0x60) + (ulonglong)*(uint *)(param_3 + 0x58) * 4 +
                             param_2, uVar2 < param_1[1] || uVar2 == param_1[1])) {
                    uVar2 = uVar4;
                    if (*(uint *)(param_3 + 0x58) != 0) {
                        uVar2 = uVar1;
                    }
                    *(ulonglong *)(param_3 + 0x60) = uVar2;
                    uVar1 = *(longlong *)(param_3 + 0x78) + param_2;
                    if ((*param_1 <= uVar1) &&
                        (uVar2 = *(longlong *)(param_3 + 0x78) + (ulonglong)*(uint *)(param_3 + 0x70) + param_2
                                , uVar2 < param_1[1] || uVar2 == param_1[1])) {
                        uVar2 = uVar4;
                        if (*(uint *)(param_3 + 0x70) != 0) {
                            uVar2 = uVar1;
                        }
                        *(ulonglong *)(param_3 + 0x78) = uVar2;
                        uVar3 = FUN_14030ece0(param_1);
                        if ((int)uVar3 < 0) {
                            return uVar3;
                        }
                        uVar1 = *(longlong *)(param_3 + 0xa0) + param_2;
                        if ((*param_1 <= uVar1) &&
                            (uVar2 = *(longlong *)(param_3 + 0xa0) + (ulonglong)*(uint *)(param_3 + 0x98) * 4 +
                                     param_2, uVar2 < param_1[1] || uVar2 == param_1[1])) {
                            uVar2 = uVar4;
                            if (*(uint *)(param_3 + 0x98) != 0) {
                                uVar2 = uVar1;
                            }
                            *(ulonglong *)(param_3 + 0xa0) = uVar2;
                            uVar1 = *(longlong *)(param_3 + 0xb0) + param_2;
                            if ((*param_1 <= uVar1) &&
                                (uVar2 = *(longlong *)(param_3 + 0xb0) + (ulonglong)*(uint *)(param_3 + 0xa8) * 2 +
                                         param_2, uVar2 < param_1[1] || uVar2 == param_1[1])) {
                                if (*(uint *)(param_3 + 0xa8) != 0) {
                                    uVar4 = uVar1;
                                }
                                *(ulonglong *)(param_3 + 0xb0) = uVar4;
                                uVar3 = FUN_1402cb010(param_1);
                                if ((int)uVar3 < 0) {
                                    return uVar3;
                                }
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0x80004005;
}



undefined8 FUN_14030b340(ulonglong *param_1,longlong param_2,uint *param_3)

{
    ulonglong uVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    uVar1 = *(longlong *)(param_3 + 2) + param_2;
    if ((*param_1 <= uVar1) &&
        (uVar2 = (ulonglong)*param_3 * 0x10 + *(longlong *)(param_3 + 2) + param_2,
                uVar2 < param_1[1] || uVar2 == param_1[1])) {
        uVar3 = 0;
        uVar2 = uVar3;
        if (*param_3 != 0) {
            uVar2 = uVar1;
        }
        *(ulonglong *)(param_3 + 2) = uVar2;
        uVar1 = *(longlong *)(param_3 + 6) + param_2;
        if ((*param_1 <= uVar1) &&
            (uVar2 = *(longlong *)(param_3 + 6) + (ulonglong)param_3[4] * 4 + param_2,
                    uVar2 < param_1[1] || uVar2 == param_1[1])) {
            uVar2 = uVar3;
            if (param_3[4] != 0) {
                uVar2 = uVar1;
            }
            *(ulonglong *)(param_3 + 6) = uVar2;
            uVar1 = *(longlong *)(param_3 + 10) + param_2;
            if ((*param_1 <= uVar1) &&
                (uVar2 = *(longlong *)(param_3 + 10) + (ulonglong)param_3[8] * 4 + param_2,
                        uVar2 < param_1[1] || uVar2 == param_1[1])) {
                if (param_3[8] != 0) {
                    uVar3 = uVar1;
                }
                *(ulonglong *)(param_3 + 10) = uVar3;
                return 0;
            }
        }
    }
    return 0x80004005;
}



undefined8 FUN_14030b3e0(ulonglong *param_1,longlong param_2,uint *param_3)

{
    ulonglong uVar1;
    uint uVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    uVar1 = *(longlong *)(param_3 + 2) + param_2;
    if (*param_1 <= uVar1) {
        uVar2 = *param_3;
        uVar3 = *(longlong *)(param_3 + 2) + (ulonglong)uVar2 * 4 + param_2;
        if (uVar3 < param_1[1] || uVar3 == param_1[1]) {
            uVar4 = 0;
            uVar3 = uVar4;
            if (uVar2 != 0) {
                uVar3 = uVar1;
            }
            *(ulonglong *)(param_3 + 2) = uVar3;
            uVar1 = *(longlong *)(param_3 + 4) + param_2;
            if ((*param_1 <= uVar1) &&
                (uVar3 = *(longlong *)(param_3 + 4) + (ulonglong)uVar2 * 2 + param_2,
                        uVar3 < param_1[1] || uVar3 == param_1[1])) {
                uVar3 = uVar4;
                if (uVar2 != 0) {
                    uVar3 = uVar1;
                }
                *(ulonglong *)(param_3 + 4) = uVar3;
                uVar1 = *(longlong *)(param_3 + 8) + param_2;
                if (*param_1 <= uVar1) {
                    uVar2 = param_3[6];
                    uVar3 = *(longlong *)(param_3 + 8) + (ulonglong)uVar2 * 4 + param_2;
                    if (uVar3 < param_1[1] || uVar3 == param_1[1]) {
                        uVar3 = uVar4;
                        if (uVar2 != 0) {
                            uVar3 = uVar1;
                        }
                        *(ulonglong *)(param_3 + 8) = uVar3;
                        uVar1 = *(longlong *)(param_3 + 10) + param_2;
                        if ((*param_1 <= uVar1) &&
                            (uVar3 = *(longlong *)(param_3 + 10) + (ulonglong)uVar2 * 2 + param_2,
                                    uVar3 < param_1[1] || uVar3 == param_1[1])) {
                            if (uVar2 != 0) {
                                uVar4 = uVar1;
                            }
                            *(ulonglong *)(param_3 + 10) = uVar4;
                            return 0;
                        }
                    }
                }
            }
        }
    }
    return 0x80004005;
}



undefined8 FUN_14030b4a0(ulonglong *param_1,longlong param_2,uint *param_3)

{
    ulonglong uVar1;
    uint uVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    uVar1 = *(longlong *)(param_3 + 2) + param_2;
    if (*param_1 <= uVar1) {
        uVar2 = *param_3;
        uVar3 = *(longlong *)(param_3 + 2) + (ulonglong)uVar2 * 4 + param_2;
        if (uVar3 < param_1[1] || uVar3 == param_1[1]) {
            uVar4 = 0;
            uVar3 = uVar4;
            if (uVar2 != 0) {
                uVar3 = uVar1;
            }
            *(ulonglong *)(param_3 + 2) = uVar3;
            uVar1 = *(longlong *)(param_3 + 4) + param_2;
            if ((*param_1 <= uVar1) &&
                (uVar3 = *(longlong *)(param_3 + 4) + (ulonglong)uVar2 * 2 + param_2,
                        uVar3 < param_1[1] || uVar3 == param_1[1])) {
                uVar3 = uVar4;
                if (uVar2 != 0) {
                    uVar3 = uVar1;
                }
                *(ulonglong *)(param_3 + 4) = uVar3;
                uVar1 = *(longlong *)(param_3 + 8) + param_2;
                if (*param_1 <= uVar1) {
                    uVar2 = param_3[6];
                    uVar3 = *(longlong *)(param_3 + 8) + (ulonglong)uVar2 * 4 + param_2;
                    if (uVar3 < param_1[1] || uVar3 == param_1[1]) {
                        uVar3 = uVar4;
                        if (uVar2 != 0) {
                            uVar3 = uVar1;
                        }
                        *(ulonglong *)(param_3 + 8) = uVar3;
                        uVar1 = *(longlong *)(param_3 + 10) + param_2;
                        if ((*param_1 <= uVar1) &&
                            (uVar3 = *(longlong *)(param_3 + 10) + (ulonglong)uVar2 * 2 + param_2,
                                    uVar3 < param_1[1] || uVar3 == param_1[1])) {
                            uVar3 = uVar4;
                            if (uVar2 != 0) {
                                uVar3 = uVar1;
                            }
                            *(ulonglong *)(param_3 + 10) = uVar3;
                            uVar1 = *(longlong *)(param_3 + 0xe) + param_2;
                            if (*param_1 <= uVar1) {
                                uVar2 = param_3[0xc];
                                uVar3 = *(longlong *)(param_3 + 0xe) + (ulonglong)uVar2 * 4 + param_2;
                                if (uVar3 < param_1[1] || uVar3 == param_1[1]) {
                                    uVar3 = uVar4;
                                    if (uVar2 != 0) {
                                        uVar3 = uVar1;
                                    }
                                    *(ulonglong *)(param_3 + 0xe) = uVar3;
                                    uVar1 = *(longlong *)(param_3 + 0x10) + param_2;
                                    if ((*param_1 <= uVar1) &&
                                        (uVar3 = *(longlong *)(param_3 + 0x10) + (ulonglong)uVar2 * 2 + param_2,
                                                uVar3 < param_1[1] || uVar3 == param_1[1])) {
                                        if (uVar2 != 0) {
                                            uVar4 = uVar1;
                                        }
                                        *(ulonglong *)(param_3 + 0x10) = uVar4;
                                        return 0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0x80004005;
}



undefined8 FUN_14030b5c0(ulonglong *param_1,longlong param_2,uint *param_3)

{
    ulonglong uVar1;
    uint uVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    uVar1 = *(longlong *)(param_3 + 2) + param_2;
    if (*param_1 <= uVar1) {
        uVar2 = *param_3;
        uVar3 = *(longlong *)(param_3 + 2) + (ulonglong)uVar2 * 4 + param_2;
        if (uVar3 < param_1[1] || uVar3 == param_1[1]) {
            uVar4 = 0;
            uVar3 = uVar4;
            if (uVar2 != 0) {
                uVar3 = uVar1;
            }
            *(ulonglong *)(param_3 + 2) = uVar3;
            uVar1 = *(longlong *)(param_3 + 4) + param_2;
            if ((*param_1 <= uVar1) &&
                (uVar3 = *(longlong *)(param_3 + 4) + (ulonglong)uVar2 * 2 + param_2,
                        uVar3 < param_1[1] || uVar3 == param_1[1])) {
                uVar3 = uVar4;
                if (uVar2 != 0) {
                    uVar3 = uVar1;
                }
                *(ulonglong *)(param_3 + 4) = uVar3;
                uVar1 = *(longlong *)(param_3 + 8) + param_2;
                if (*param_1 <= uVar1) {
                    uVar2 = param_3[6];
                    uVar3 = *(longlong *)(param_3 + 8) + (ulonglong)uVar2 * 4 + param_2;
                    if (uVar3 < param_1[1] || uVar3 == param_1[1]) {
                        uVar3 = uVar4;
                        if (uVar2 != 0) {
                            uVar3 = uVar1;
                        }
                        *(ulonglong *)(param_3 + 8) = uVar3;
                        uVar1 = *(longlong *)(param_3 + 10) + param_2;
                        if ((*param_1 <= uVar1) &&
                            (uVar3 = *(longlong *)(param_3 + 10) + (ulonglong)uVar2 * 2 + param_2,
                                    uVar3 < param_1[1] || uVar3 == param_1[1])) {
                            uVar3 = uVar4;
                            if (uVar2 != 0) {
                                uVar3 = uVar1;
                            }
                            *(ulonglong *)(param_3 + 10) = uVar3;
                            uVar1 = *(longlong *)(param_3 + 0xe) + param_2;
                            if (*param_1 <= uVar1) {
                                uVar2 = param_3[0xc];
                                uVar3 = *(longlong *)(param_3 + 0xe) + (ulonglong)uVar2 * 4 + param_2;
                                if (uVar3 < param_1[1] || uVar3 == param_1[1]) {
                                    uVar3 = uVar4;
                                    if (uVar2 != 0) {
                                        uVar3 = uVar1;
                                    }
                                    *(ulonglong *)(param_3 + 0xe) = uVar3;
                                    uVar1 = *(longlong *)(param_3 + 0x10) + param_2;
                                    if ((*param_1 <= uVar1) &&
                                        (uVar3 = *(longlong *)(param_3 + 0x10) + (ulonglong)uVar2 * 2 + param_2,
                                                uVar3 < param_1[1] || uVar3 == param_1[1])) {
                                        uVar3 = uVar4;
                                        if (uVar2 != 0) {
                                            uVar3 = uVar1;
                                        }
                                        *(ulonglong *)(param_3 + 0x10) = uVar3;
                                        uVar1 = *(longlong *)(param_3 + 0x14) + param_2;
                                        if (*param_1 <= uVar1) {
                                            uVar2 = param_3[0x12];
                                            uVar3 = *(longlong *)(param_3 + 0x14) + (ulonglong)uVar2 * 4 + param_2;
                                            if (uVar3 < param_1[1] || uVar3 == param_1[1]) {
                                                uVar3 = uVar4;
                                                if (uVar2 != 0) {
                                                    uVar3 = uVar1;
                                                }
                                                *(ulonglong *)(param_3 + 0x14) = uVar3;
                                                uVar1 = *(longlong *)(param_3 + 0x16) + param_2;
                                                if ((*param_1 <= uVar1) &&
                                                    (uVar3 = *(longlong *)(param_3 + 0x16) + (ulonglong)uVar2 * 2 + param_2,
                                                            uVar3 < param_1[1] || uVar3 == param_1[1])) {
                                                    if (uVar2 != 0) {
                                                        uVar4 = uVar1;
                                                    }
                                                    *(ulonglong *)(param_3 + 0x16) = uVar4;
                                                    return 0;
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
        }
    }
    return 0x80004005;
}



undefined8 FUN_14030b740(ulonglong *param_1,longlong param_2,uint *param_3)

{
    ulonglong uVar1;
    undefined8 uVar2;
    ulonglong uVar3;

    uVar1 = *(longlong *)(param_3 + 2) + param_2;
    if ((*param_1 <= uVar1) &&
        (uVar3 = *(longlong *)(param_3 + 2) + (ulonglong)*param_3 * 0xc + param_2,
                uVar3 < param_1[1] || uVar3 == param_1[1])) {
        uVar3 = 0;
        if (*param_3 != 0) {
            uVar3 = uVar1;
        }
        *(ulonglong *)(param_3 + 2) = uVar3;
        uVar2 = FUN_14030ed20(param_1,param_2,param_3 + 4);
        if (-1 < (int)uVar2) {
            uVar2 = FUN_14030ed20(param_1);
            if (-1 < (int)uVar2) {
                uVar2 = 0;
            }
        }
        return uVar2;
    }
    return 0x80004005;
}



undefined8 FUN_14030b7c0(ulonglong *param_1,longlong param_2,uint *param_3)

{
    ulonglong uVar1;
    uint uVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    uVar1 = *(longlong *)(param_3 + 2) + param_2;
    if (*param_1 <= uVar1) {
        uVar2 = *param_3;
        uVar3 = *(longlong *)(param_3 + 2) + (ulonglong)uVar2 * 4 + param_2;
        if (uVar3 < param_1[1] || uVar3 == param_1[1]) {
            uVar4 = 0;
            uVar3 = uVar4;
            if (uVar2 != 0) {
                uVar3 = uVar1;
            }
            *(ulonglong *)(param_3 + 2) = uVar3;
            uVar1 = *(longlong *)(param_3 + 4) + param_2;
            if ((*param_1 <= uVar1) &&
                (uVar3 = *(longlong *)(param_3 + 4) + (ulonglong)uVar2 * 2 + param_2,
                        uVar3 < param_1[1] || uVar3 == param_1[1])) {
                uVar3 = uVar4;
                if (uVar2 != 0) {
                    uVar3 = uVar1;
                }
                *(ulonglong *)(param_3 + 4) = uVar3;
                uVar1 = *(longlong *)(param_3 + 8) + param_2;
                if (*param_1 <= uVar1) {
                    uVar2 = param_3[6];
                    uVar3 = *(longlong *)(param_3 + 8) + (ulonglong)uVar2 * 4 + param_2;
                    if (uVar3 < param_1[1] || uVar3 == param_1[1]) {
                        uVar3 = uVar4;
                        if (uVar2 != 0) {
                            uVar3 = uVar1;
                        }
                        *(ulonglong *)(param_3 + 8) = uVar3;
                        uVar1 = *(longlong *)(param_3 + 10) + param_2;
                        if ((*param_1 <= uVar1) &&
                            (uVar3 = *(longlong *)(param_3 + 10) + (ulonglong)uVar2 * 2 + param_2,
                                    uVar3 < param_1[1] || uVar3 == param_1[1])) {
                            uVar3 = uVar4;
                            if (uVar2 != 0) {
                                uVar3 = uVar1;
                            }
                            *(ulonglong *)(param_3 + 10) = uVar3;
                            uVar1 = *(longlong *)(param_3 + 0xe) + param_2;
                            if (*param_1 <= uVar1) {
                                uVar2 = param_3[0xc];
                                uVar3 = *(longlong *)(param_3 + 0xe) + (ulonglong)uVar2 * 4 + param_2;
                                if (uVar3 < param_1[1] || uVar3 == param_1[1]) {
                                    uVar3 = uVar4;
                                    if (uVar2 != 0) {
                                        uVar3 = uVar1;
                                    }
                                    *(ulonglong *)(param_3 + 0xe) = uVar3;
                                    uVar1 = *(longlong *)(param_3 + 0x10) + param_2;
                                    if ((*param_1 <= uVar1) &&
                                        (uVar3 = *(longlong *)(param_3 + 0x10) + (ulonglong)uVar2 * 2 + param_2,
                                                uVar3 < param_1[1] || uVar3 == param_1[1])) {
                                        uVar3 = uVar4;
                                        if (uVar2 != 0) {
                                            uVar3 = uVar1;
                                        }
                                        *(ulonglong *)(param_3 + 0x10) = uVar3;
                                        uVar1 = *(longlong *)(param_3 + 0x14) + param_2;
                                        if (*param_1 <= uVar1) {
                                            uVar2 = param_3[0x12];
                                            uVar3 = *(longlong *)(param_3 + 0x14) + (ulonglong)uVar2 * 4 + param_2;
                                            if (uVar3 < param_1[1] || uVar3 == param_1[1]) {
                                                uVar3 = uVar4;
                                                if (uVar2 != 0) {
                                                    uVar3 = uVar1;
                                                }
                                                *(ulonglong *)(param_3 + 0x14) = uVar3;
                                                uVar1 = *(longlong *)(param_3 + 0x16) + param_2;
                                                if ((*param_1 <= uVar1) &&
                                                    (uVar3 = *(longlong *)(param_3 + 0x16) + (ulonglong)uVar2 * 2 + param_2,
                                                            uVar3 < param_1[1] || uVar3 == param_1[1])) {
                                                    uVar3 = uVar4;
                                                    if (uVar2 != 0) {
                                                        uVar3 = uVar1;
                                                    }
                                                    *(ulonglong *)(param_3 + 0x16) = uVar3;
                                                    uVar1 = *(longlong *)(param_3 + 0x1a) + param_2;
                                                    if (*param_1 <= uVar1) {
                                                        uVar2 = param_3[0x18];
                                                        uVar3 = *(longlong *)(param_3 + 0x1a) + (ulonglong)uVar2 * 4 + param_2;
                                                        if (uVar3 < param_1[1] || uVar3 == param_1[1]) {
                                                            uVar3 = uVar4;
                                                            if (uVar2 != 0) {
                                                                uVar3 = uVar1;
                                                            }
                                                            *(ulonglong *)(param_3 + 0x1a) = uVar3;
                                                            uVar1 = *(longlong *)(param_3 + 0x1c) + param_2;
                                                            if ((*param_1 <= uVar1) &&
                                                                (uVar3 = *(longlong *)(param_3 + 0x1c) + (ulonglong)uVar2 * 2 +
                                                                         param_2, uVar3 < param_1[1] || uVar3 == param_1[1])) {
                                                                uVar3 = uVar4;
                                                                if (uVar2 != 0) {
                                                                    uVar3 = uVar1;
                                                                }
                                                                *(ulonglong *)(param_3 + 0x1c) = uVar3;
                                                                uVar1 = *(longlong *)(param_3 + 0x20) + param_2;
                                                                if (*param_1 <= uVar1) {
                                                                    uVar2 = param_3[0x1e];
                                                                    uVar3 = *(longlong *)(param_3 + 0x20) + (ulonglong)uVar2 * 4 +
                                                                            param_2;
                                                                    if (uVar3 < param_1[1] || uVar3 == param_1[1]) {
                                                                        uVar3 = uVar4;
                                                                        if (uVar2 != 0) {
                                                                            uVar3 = uVar1;
                                                                        }
                                                                        *(ulonglong *)(param_3 + 0x20) = uVar3;
                                                                        uVar1 = *(longlong *)(param_3 + 0x22) + param_2;
                                                                        if ((*param_1 <= uVar1) &&
                                                                            (uVar3 = *(longlong *)(param_3 + 0x22) + (ulonglong)uVar2 * 2
                                                                                     + param_2, uVar3 < param_1[1] || uVar3 == param_1[1]
                                                                            )) {
                                                                            if (uVar2 != 0) {
                                                                                uVar4 = uVar1;
                                                                            }
                                                                            *(ulonglong *)(param_3 + 0x22) = uVar4;
                                                                            return 0;
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
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0x80004005;
}



undefined8 FUN_14030ba20(ulonglong *param_1,longlong param_2,longlong param_3)

{
    ulonglong uVar1;
    undefined8 uVar2;
    ulonglong uVar3;
    uint *puVar4;

    if (*(longlong *)(param_3 + 0x18) == -1) {
        *(undefined8 *)(param_3 + 0x18) = 0;
    }
    else {
        uVar3 = *(longlong *)(param_3 + 0x18) + param_2;
        if (uVar3 < *param_1) {
            return 0x80004005;
        }
        if (param_1[1] <= uVar3 + 1 && uVar3 + 1 != param_1[1]) {
            return 0x80004005;
        }
        *(ulonglong *)(param_3 + 0x18) = uVar3;
    }
    uVar2 = FUN_14030ef10(param_1);
    if ((int)uVar2 < 0) {
        return uVar2;
    }
    if (*(longlong *)(param_3 + 0x28) == -1) {
        *(undefined8 *)(param_3 + 0x28) = 0;
    }
    else {
        uVar3 = *(longlong *)(param_3 + 0x28) + param_2;
        if (uVar3 < *param_1) {
            return 0x80004005;
        }
        if (param_1[1] <= uVar3 + 0x10 && uVar3 + 0x10 != param_1[1]) {
            return 0x80004005;
        }
        *(ulonglong *)(param_3 + 0x28) = uVar3;
        puVar4 = (uint *)(param_1[2] + uVar3);
        uVar1 = *(longlong *)(puVar4 + 2) + uVar3 + 0x10;
        if (uVar1 < *param_1) {
            return 0x80004005;
        }
        uVar3 = *(longlong *)(puVar4 + 2) + (ulonglong)*puVar4 * 0xc + uVar3 + 0x10;
        if (param_1[1] <= uVar3 && uVar3 != param_1[1]) {
            return 0x80004005;
        }
        uVar3 = 0;
        if (*puVar4 != 0) {
            uVar3 = uVar1;
        }
        *(ulonglong *)(puVar4 + 2) = uVar3;
    }
    if (*(longlong *)(param_3 + 0x30) == -1) {
        *(undefined8 *)(param_3 + 0x30) = 0;
    }
    else {
        uVar3 = *(longlong *)(param_3 + 0x30) + param_2;
        if (uVar3 < *param_1) {
            return 0x80004005;
        }
        if (param_1[1] <= uVar3 + 0x30 && uVar3 + 0x30 != param_1[1]) {
            return 0x80004005;
        }
        *(ulonglong *)(param_3 + 0x30) = uVar3;
        uVar2 = FUN_14030b3e0(param_1,uVar3 + 0x30,param_1[2] + uVar3);
        if ((int)uVar2 < 0) {
            return uVar2;
        }
    }
    if (*(longlong *)(param_3 + 0x38) == -1) {
        *(undefined8 *)(param_3 + 0x38) = 0;
    }
    else {
        uVar3 = *(longlong *)(param_3 + 0x38) + param_2;
        if (uVar3 < *param_1) {
            return 0x80004005;
        }
        if (param_1[1] <= uVar3 + 0x48 && uVar3 + 0x48 != param_1[1]) {
            return 0x80004005;
        }
        *(ulonglong *)(param_3 + 0x38) = uVar3;
        uVar2 = FUN_14030b4a0(param_1,uVar3 + 0x50,param_1[2] + uVar3);
        if ((int)uVar2 < 0) {
            return uVar2;
        }
    }
    if (*(longlong *)(param_3 + 0x40) == -1) {
        *(undefined8 *)(param_3 + 0x40) = 0;
    }
    else {
        uVar3 = *(longlong *)(param_3 + 0x40) + param_2;
        if (uVar3 < *param_1) {
            return 0x80004005;
        }
        if (param_1[1] <= uVar3 + 0x60 && uVar3 + 0x60 != param_1[1]) {
            return 0x80004005;
        }
        *(ulonglong *)(param_3 + 0x40) = uVar3;
        uVar2 = FUN_14030b5c0(param_1,uVar3 + 0x60,param_1[2] + uVar3);
        if ((int)uVar2 < 0) {
            return uVar2;
        }
    }
    if (*(longlong *)(param_3 + 0x48) == -1) {
        *(undefined8 *)(param_3 + 0x48) = 0;
    }
    else {
        uVar3 = *(longlong *)(param_3 + 0x48) + param_2;
        if (uVar3 < *param_1) {
            return 0x80004005;
        }
        if (param_1[1] <= uVar3 + 0x30 && uVar3 + 0x30 != param_1[1]) {
            return 0x80004005;
        }
        *(ulonglong *)(param_3 + 0x48) = uVar3;
        uVar2 = FUN_14030b3e0(param_1,uVar3 + 0x30,param_1[2] + uVar3);
        if ((int)uVar2 < 0) {
            return uVar2;
        }
    }
    if (*(longlong *)(param_3 + 0x50) == -1) {
        *(undefined8 *)(param_3 + 0x50) = 0;
    }
    else {
        uVar3 = *(longlong *)(param_3 + 0x50) + param_2;
        if (uVar3 < *param_1) {
            return 0x80004005;
        }
        if (param_1[1] <= uVar3 + 0x40 && uVar3 + 0x40 != param_1[1]) {
            return 0x80004005;
        }
        *(ulonglong *)(param_3 + 0x50) = uVar3;
        uVar2 = FUN_14030b740(param_1,uVar3 + 0x40,param_1[2] + uVar3);
        if ((int)uVar2 < 0) {
            return uVar2;
        }
    }
    if (*(longlong *)(param_3 + 0x58) == -1) {
        *(undefined8 *)(param_3 + 0x58) = 0;
    }
    else {
        uVar3 = *(longlong *)(param_3 + 0x58) + param_2;
        if ((uVar3 < *param_1) || (param_1[1] <= uVar3 + 0x90 && uVar3 + 0x90 != param_1[1])) {
            return 0x80004005;
        }
        *(ulonglong *)(param_3 + 0x58) = uVar3;
        uVar2 = FUN_14030b7c0(param_1,uVar3 + 0x90,param_1[2] + uVar3);
        if ((int)uVar2 < 0) {
            return uVar2;
        }
    }
    return 0;
}



undefined8 FUN_14030bcc0(ulonglong *param_1,longlong param_2,longlong param_3)

{
    undefined8 uVar1;
    ulonglong uVar2;
    uint uVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    uVar1 = FUN_14030ba20(param_1,param_2,param_3 + 8);
    if ((((((((-1 < (int)uVar1) &&
              (uVar1 = FUN_14030ed20(param_1,param_2,param_3 + 0x68), -1 < (int)uVar1)) &&
             (uVar1 = FUN_14030ed20(param_1), -1 < (int)uVar1)) &&
            ((uVar1 = FUN_1402ca3c0(param_1), -1 < (int)uVar1 &&
                                              (uVar1 = FUN_1402ca3c0(param_1), -1 < (int)uVar1)))) &&
           (uVar1 = FUN_14030ed20(param_1), -1 < (int)uVar1)) &&
          (((uVar1 = FUN_14030ed20(param_1), -1 < (int)uVar1 &&
                                             (uVar1 = FUN_1402ca3c0(param_1), -1 < (int)uVar1)) &&
            ((uVar1 = FUN_1402ca3c0(param_1), -1 < (int)uVar1 &&
                                              (((uVar1 = FUN_14030ebf0(param_1), -1 < (int)uVar1 &&
                                                                                 (uVar1 = FUN_14030ebf0(param_1,param_2,param_3 + 0x140), -1 < (int)uVar1)) &&
                                                (uVar1 = FUN_14030ed20(param_1,param_2,param_3 + 0x158), -1 < (int)uVar1)))))))) &&
         ((uVar1 = FUN_14030ed20(param_1), -1 < (int)uVar1 &&
                                           (uVar1 = FUN_14030ebf0(param_1), -1 < (int)uVar1)))) &&
        (((uVar1 = FUN_14030ed20(param_1,param_2,param_3 + 0x1a0), -1 < (int)uVar1 &&
                                                                   (((uVar1 = FUN_14030ed20(param_1), -1 < (int)uVar1 &&
                                                                                                      (uVar1 = FUN_14030ed20(param_1), -1 < (int)uVar1)) &&
                                                                     ((uVar1 = FUN_14030ed20(param_1), -1 < (int)uVar1 &&
                                                                                                       (((uVar1 = FUN_14030ed20(param_1), -1 < (int)uVar1 &&
                                                                                                                                          (uVar1 = FUN_14030ed20(param_1), -1 < (int)uVar1)) &&
                                                                                                         (uVar1 = FUN_14030ed20(param_1), -1 < (int)uVar1)))))))) &&
          (((uVar1 = FUN_14030ed20(param_1), -1 < (int)uVar1 &&
                                             (uVar1 = FUN_1402ca3c0(param_1), -1 < (int)uVar1)) &&
            (uVar1 = FUN_14030eb00(param_1), -1 < (int)uVar1)))))) {
        uVar5 = 0;
        uVar4 = uVar5;
        do {
            uVar2 = uVar5;
            do {
                uVar1 = FUN_1402ca3c0(param_1,param_2,param_3 + ((uVar2 + uVar4 * 5) * 3 + 0x53) * 8);
                if ((int)uVar1 < 0) {
                    return uVar1;
                }
                uVar3 = (int)uVar2 + 1;
                uVar2 = (ulonglong)uVar3;
            } while (uVar3 < 5);
            uVar3 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar3;
            uVar2 = uVar5;
        } while (uVar3 < 2);
        do {
            uVar1 = FUN_14030eb90(param_1,param_2,param_3 + uVar2 * 0x18 + 0x388);
            if ((int)uVar1 < 0) {
                return uVar1;
            }
            uVar3 = (int)uVar2 + 1;
            uVar4 = uVar5;
            uVar2 = (ulonglong)uVar3;
        } while (uVar3 < 5);
        do {
            uVar1 = FUN_14030eb90(param_1,param_2,param_3 + (uVar4 + 0x2b) * 0x18);
            if ((int)uVar1 < 0) {
                return uVar1;
            }
            uVar3 = (int)uVar4 + 1;
            uVar2 = uVar5;
            uVar4 = (ulonglong)uVar3;
        } while (uVar3 < 5);
        do {
            uVar1 = FUN_14030eb90(param_1,param_2,param_3 + (uVar2 + 0x30) * 0x18);
            if ((int)uVar1 < 0) {
                return uVar1;
            }
            uVar3 = (int)uVar2 + 1;
            uVar4 = uVar5;
            uVar2 = (ulonglong)uVar3;
        } while (uVar3 < 5);
        do {
            uVar1 = FUN_14030ed20(param_1,param_2,param_3 + uVar4 * 0x18 + 0x500);
            if ((int)uVar1 < 0) {
                return uVar1;
            }
            uVar3 = (int)uVar4 + 1;
            uVar2 = uVar5;
            uVar4 = (ulonglong)uVar3;
        } while (uVar3 < 5);
        do {
            uVar1 = FUN_14030eb90(param_1,param_2,param_3 + uVar2 * 0x18 + 0x578);
            if ((int)uVar1 < 0) {
                return uVar1;
            }
            uVar3 = (int)uVar2 + 1;
            uVar4 = uVar5;
            uVar2 = (ulonglong)uVar3;
        } while (uVar3 < 5);
        do {
            uVar1 = FUN_14030ed20(param_1,param_2,param_3 + uVar4 * 0x18 + 0x5f8);
            if ((int)uVar1 < 0) {
                return uVar1;
            }
            uVar3 = (int)uVar4 + 1;
            uVar2 = uVar5;
            uVar4 = (ulonglong)uVar3;
        } while (uVar3 < 5);
        do {
            uVar1 = FUN_14030eb90(param_1,param_2,param_3 + uVar2 * 0x18 + 0x670);
            if ((int)uVar1 < 0) {
                return uVar1;
            }
            uVar3 = (int)uVar2 + 1;
            uVar4 = uVar5;
            uVar2 = (ulonglong)uVar3;
        } while (uVar3 < 5);
        do {
            uVar1 = FUN_1402ca3c0(param_1,param_2,param_3 + (uVar4 + 0x4a) * 0x18);
            if ((int)uVar1 < 0) {
                return uVar1;
            }
            uVar3 = (int)uVar4 + 1;
            uVar2 = uVar5;
            uVar4 = (ulonglong)uVar3;
        } while (uVar3 < 5);
        do {
            uVar1 = FUN_14030eb90(param_1,param_2,param_3 + (uVar2 + 0x4f) * 0x18);
            if ((int)uVar1 < 0) {
                return uVar1;
            }
            uVar3 = (int)uVar2 + 1;
            uVar4 = uVar5;
            uVar2 = (ulonglong)uVar3;
        } while (uVar3 < 5);
        do {
            uVar1 = FUN_14030ed20(param_1,param_2,param_3 + (uVar4 + 0x5a) * 0x18);
            if ((int)uVar1 < 0) {
                return uVar1;
            }
            uVar3 = (int)uVar4 + 1;
            uVar2 = uVar5;
            uVar4 = (ulonglong)uVar3;
        } while (uVar3 < 5);
        do {
            uVar1 = FUN_14030eb90(param_1,param_2,param_3 + (uVar2 + 0x5f) * 0x18);
            if ((int)uVar1 < 0) {
                return uVar1;
            }
            uVar3 = (int)uVar2 + 1;
            uVar2 = (ulonglong)uVar3;
        } while (uVar3 < 5);
        uVar1 = FUN_14030ed20(param_1);
        uVar4 = uVar5;
        if (-1 < (int)uVar1) {
            do {
                uVar1 = FUN_14030ed20(param_1,param_2,param_3 + uVar4 * 0x18 + 0x9a0);
                if ((int)uVar1 < 0) {
                    return uVar1;
                }
                uVar3 = (int)uVar4 + 1;
                uVar2 = uVar5;
                uVar4 = (ulonglong)uVar3;
            } while (uVar3 < 5);
            do {
                uVar1 = FUN_14030eb90(param_1,param_2,param_3 + uVar2 * 0x18 + 0xa18);
                if ((int)uVar1 < 0) {
                    return uVar1;
                }
                uVar3 = (int)uVar2 + 1;
                uVar4 = uVar5;
                uVar2 = (ulonglong)uVar3;
            } while (uVar3 < 5);
            do {
                uVar1 = FUN_14030ed20(param_1,param_2,param_3 + (uVar4 + 0x71) * 0x18);
                if ((int)uVar1 < 0) {
                    return uVar1;
                }
                uVar3 = (int)uVar4 + 1;
                uVar2 = uVar5;
                uVar4 = (ulonglong)uVar3;
            } while (uVar3 < 5);
            do {
                uVar1 = FUN_14030eb90(param_1,param_2,param_3 + (uVar2 + 0x76) * 0x18);
                if ((int)uVar1 < 0) {
                    return uVar1;
                }
                uVar3 = (int)uVar2 + 1;
                uVar4 = uVar5;
                uVar2 = (ulonglong)uVar3;
            } while (uVar3 < 5);
            do {
                uVar1 = FUN_14030ed20(param_1,param_2,param_3 + uVar4 * 0x18 + 0xb90);
                if ((int)uVar1 < 0) {
                    return uVar1;
                }
                uVar3 = (int)uVar4 + 1;
                uVar2 = uVar5;
                uVar4 = (ulonglong)uVar3;
            } while (uVar3 < 5);
            do {
                uVar1 = FUN_14030eb90(param_1,param_2,param_3 + uVar2 * 0x18 + 0xc08);
                if ((int)uVar1 < 0) {
                    return uVar1;
                }
                uVar3 = (int)uVar2 + 1;
                uVar4 = uVar5;
                uVar2 = (ulonglong)uVar3;
            } while (uVar3 < 5);
            do {
                uVar1 = FUN_14030ed20(param_1,param_2,param_3 + uVar4 * 0x18 + 0xc88);
                if ((int)uVar1 < 0) {
                    return uVar1;
                }
                uVar3 = (int)uVar4 + 1;
                uVar2 = uVar5;
                uVar4 = (ulonglong)uVar3;
            } while (uVar3 < 5);
            do {
                uVar1 = FUN_14030eb90(param_1,param_2,param_3 + uVar2 * 0x18 + 0xd00);
                if ((int)uVar1 < 0) {
                    return uVar1;
                }
                uVar3 = (int)uVar2 + 1;
                uVar4 = uVar5;
                uVar2 = (ulonglong)uVar3;
            } while (uVar3 < 5);
            do {
                uVar1 = FUN_14030ed20(param_1,param_2,param_3 + (uVar4 + 0x90) * 0x18);
                if ((int)uVar1 < 0) {
                    return uVar1;
                }
                uVar3 = (int)uVar4 + 1;
                uVar2 = uVar5;
                uVar4 = (ulonglong)uVar3;
            } while (uVar3 < 5);
            do {
                uVar1 = FUN_14030eb90(param_1,param_2,param_3 + (uVar2 + 0x95) * 0x18);
                if ((int)uVar1 < 0) {
                    return uVar1;
                }
                uVar3 = (int)uVar2 + 1;
                uVar2 = (ulonglong)uVar3;
            } while (uVar3 < 5);
            uVar4 = *(longlong *)(param_3 + 0xec0) + param_2;
            if ((uVar4 < *param_1) ||
                (uVar2 = *(longlong *)(param_3 + 0xec0) + (ulonglong)*(uint *)(param_3 + 0xeb8) * 2 +
                         param_2, param_1[1] <= uVar2 && uVar2 != param_1[1])) {
                uVar1 = 0x80004005;
            }
            else {
                if (*(uint *)(param_3 + 0xeb8) != 0) {
                    uVar5 = uVar4;
                }
                uVar1 = 0;
                *(ulonglong *)(param_3 + 0xec0) = uVar5;
            }
        }
    }
    return uVar1;
}



undefined8 FUN_14030c3d0(ulonglong *param_1,longlong param_2,longlong param_3)

{
    uint uVar1;
    undefined8 uVar2;
    ulonglong uVar3;
    ulonglong *puVar4;
    uint uVar5;
    ulonglong uVar6;

    uVar6 = *(longlong *)(param_3 + 0x10) + param_2;
    if ((uVar6 < *param_1) ||
        (uVar3 = *(longlong *)(param_3 + 0x10) + (ulonglong)*(uint *)(param_3 + 8) * 0xc + param_2,
                param_1[1] <= uVar3 && uVar3 != param_1[1])) {
        return 0x80004005;
    }
    uVar3 = 0;
    if (*(uint *)(param_3 + 8) != 0) {
        uVar3 = uVar6;
    }
    *(ulonglong *)(param_3 + 0x10) = uVar3;
    uVar2 = FUN_14030ebf0(param_1,param_2,param_3 + 0x30);
    if (-1 < (int)uVar2) {
        uVar6 = 0;
        do {
            uVar3 = 0;
            do {
                uVar2 = FUN_1402ca3c0(param_1,param_2,param_3 + ((uVar3 + uVar6 * 5) * 3 + 10) * 8);
                if ((int)uVar2 < 0) {
                    return uVar2;
                }
                uVar5 = (int)uVar3 + 1;
                uVar3 = (ulonglong)uVar5;
            } while (uVar5 < 5);
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
        } while (uVar5 < 2);
        uVar6 = 0;
        do {
            uVar2 = FUN_14030eb90(param_1,param_2,param_3 + uVar6 * 0x18 + 0x140);
            if ((int)uVar2 < 0) {
                return uVar2;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
        } while (uVar5 < 5);
        uVar6 = 0;
        do {
            uVar2 = FUN_14030eb90(param_1,param_2,param_3 + uVar6 * 0x18 + 0x1c0);
            if ((int)uVar2 < 0) {
                return uVar2;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
        } while (uVar5 < 5);
        uVar6 = 0;
        do {
            uVar2 = FUN_14030eb90(param_1,param_2,param_3 + (uVar6 * 3 + 0x47) * 8);
            if ((int)uVar2 < 0) {
                return uVar2;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
        } while (uVar5 < 5);
        uVar5 = 0;
        puVar4 = (ulonglong *)(param_3 + 0x2c8);
        do {
            uVar6 = puVar4[-1] + param_2;
            if (uVar6 < *param_1) {
                return 0x80004005;
            }
            uVar1 = *(uint *)(puVar4 + -2);
            uVar3 = puVar4[-1] + (ulonglong)uVar1 * 4 + param_2;
            if (param_1[1] <= uVar3 && uVar3 != param_1[1]) {
                return 0x80004005;
            }
            uVar3 = 0;
            if (uVar1 != 0) {
                uVar3 = uVar6;
            }
            puVar4[-1] = uVar3;
            uVar6 = *puVar4 + param_2;
            if (uVar6 < *param_1) {
                return 0x80004005;
            }
            uVar3 = *puVar4 + (ulonglong)uVar1 * 2 + param_2;
            if (param_1[1] <= uVar3 && uVar3 != param_1[1]) {
                return 0x80004005;
            }
            uVar3 = 0;
            if (uVar1 != 0) {
                uVar3 = uVar6;
            }
            uVar5 = uVar5 + 1;
            *puVar4 = uVar3;
            puVar4 = puVar4 + 3;
        } while (uVar5 < 5);
        uVar5 = 0;
        puVar4 = (ulonglong *)(param_3 + 0x340);
        do {
            uVar6 = puVar4[-1] + param_2;
            if (uVar6 < *param_1) {
                return 0x80004005;
            }
            uVar1 = *(uint *)(puVar4 + -2);
            uVar3 = puVar4[-1] + (ulonglong)uVar1 * 4 + param_2;
            if (param_1[1] <= uVar3 && uVar3 != param_1[1]) {
                return 0x80004005;
            }
            uVar3 = 0;
            if (uVar1 != 0) {
                uVar3 = uVar6;
            }
            puVar4[-1] = uVar3;
            uVar6 = *puVar4 + param_2;
            if (uVar6 < *param_1) {
                return 0x80004005;
            }
            uVar3 = *puVar4 + (ulonglong)uVar1 + param_2;
            if (param_1[1] <= uVar3 && uVar3 != param_1[1]) {
                return 0x80004005;
            }
            uVar3 = 0;
            if (uVar1 != 0) {
                uVar3 = uVar6;
            }
            uVar5 = uVar5 + 1;
            *puVar4 = uVar3;
            puVar4 = puVar4 + 3;
        } while (uVar5 < 5);
        uVar2 = FUN_14030ed20(param_1,param_2,param_3 + 0x418);
        if ((((-1 < (int)uVar2) && (uVar2 = FUN_14030ed20(param_1), -1 < (int)uVar2)) &&
             (uVar2 = FUN_14030ed20(param_1), -1 < (int)uVar2)) &&
            ((uVar2 = FUN_14030ed20(param_1), -1 < (int)uVar2 &&
                                              (uVar2 = FUN_14030ed20(param_1), -1 < (int)uVar2)))) {
            uVar2 = 0;
        }
    }
    return uVar2;
}



undefined8 FUN_14030c6a0(ulonglong *param_1,longlong param_2,longlong param_3)

{
    ulonglong uVar1;
    undefined8 uVar2;
    longlong lVar3;

    lVar3 = param_2;
    uVar2 = FUN_14030ed20(param_1,param_2,param_3 + 0x38);
    if (-1 < (int)uVar2) {
        uVar2 = FUN_14030eb90(param_1);
        if ((int)uVar2 < 0) {
            return uVar2;
        }
        if (*(longlong *)(param_3 + 0x90) == -1) {
            *(undefined8 *)(param_3 + 0x90) = 0;
        }
        else {
            uVar1 = *(longlong *)(param_3 + 0x90) + lVar3;
            if (uVar1 < *param_1) {
                return 0x80004005;
            }
            if (param_1[1] <= uVar1 + 0xed0 && uVar1 + 0xed0 != param_1[1]) {
                return 0x80004005;
            }
            *(ulonglong *)(param_3 + 0x90) = uVar1;
            uVar2 = FUN_14030bcc0(param_1,uVar1 + 0xed0,param_1[2] + uVar1);
            if ((int)uVar2 < 0) {
                return uVar2;
            }
        }
        if (*(longlong *)(param_3 + 0x98) == -1) {
            *(undefined8 *)(param_3 + 0x98) = 0;
        }
        else {
            uVar1 = *(longlong *)(param_3 + 0x98) + param_2;
            if ((uVar1 < *param_1) || (param_1[1] <= uVar1 + 0x4a8 && uVar1 + 0x4a8 != param_1[1])) {
                return 0x80004005;
            }
            *(ulonglong *)(param_3 + 0x98) = uVar1;
            uVar2 = FUN_14030c3d0(param_1,uVar1 + 0x4b0,param_1[2] + uVar1);
            if ((int)uVar2 < 0) {
                return uVar2;
            }
        }
        uVar2 = 0;
    }
    return uVar2;
}



undefined8 FUN_14030c7d0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
    undefined8 uVar1;

    uVar1 = FUN_14030ed20(param_1,param_2,param_3 + 0x10);
    if (-1 < (int)uVar1) {
        uVar1 = FUN_14030ed20(param_1,param_2,param_3 + 0x28);
        if (-1 < (int)uVar1) {
            uVar1 = FUN_14030ed20(param_1,param_2,param_3 + 0x40);
            if (-1 < (int)uVar1) {
                uVar1 = FUN_1402ca3c0(param_1,param_2,param_3 + 0x58);
                if (-1 < (int)uVar1) {
                    uVar1 = FUN_1402ca3c0(param_1,param_2,param_3 + 0x70);
                    if (-1 < (int)uVar1) {
                        uVar1 = FUN_14030ed20(param_1,param_2,param_3 + 0x88);
                        if (-1 < (int)uVar1) {
                            uVar1 = FUN_14030ed20(param_1,param_2,param_3 + 0xa0);
                            if (-1 < (int)uVar1) {
                                uVar1 = FUN_14030ed20(param_1,param_2,param_3 + 0xb8);
                                if (-1 < (int)uVar1) {
                                    uVar1 = FUN_14030ed20(param_1,param_2,param_3 + 0xd0);
                                    if (-1 < (int)uVar1) {
                                        uVar1 = FUN_14030ed20(param_1,param_2,param_3 + 0xe8);
                                        if (-1 < (int)uVar1) {
                                            uVar1 = FUN_14030ed20(param_1,param_2,param_3 + 0x100);
                                            if (-1 < (int)uVar1) {
                                                uVar1 = FUN_14030ed20(param_1,param_2,param_3 + 0x118);
                                                if (-1 < (int)uVar1) {
                                                    uVar1 = FUN_14030ed20(param_1,param_2,param_3 + 0x130);
                                                    if (-1 < (int)uVar1) {
                                                        uVar1 = FUN_14030ed20(param_1,param_2,param_3 + 0x148);
                                                        if (-1 < (int)uVar1) {
                                                            uVar1 = FUN_14030ed20(param_1,param_2,param_3 + 0x160);
                                                            if (-1 < (int)uVar1) {
                                                                uVar1 = FUN_14030ed20(param_1,param_2,param_3 + 0x178);
                                                                if (-1 < (int)uVar1) {
                                                                    uVar1 = 0;
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
                        }
                    }
                }
            }
        }
    }
    return uVar1;
}



undefined8 FUN_14030c930(ulonglong *param_1,longlong param_2,longlong param_3)

{
    ulonglong uVar1;
    uint uVar2;
    undefined8 uVar3;
    ulonglong uVar4;

    uVar3 = FUN_14030ed20(param_1,param_2,param_3 + 0x28);
    if ((int)uVar3 < 0) {
        return uVar3;
    }
    uVar1 = *(longlong *)(param_3 + 0x48) + param_2;
    if (*param_1 <= uVar1) {
        uVar2 = *(uint *)(param_3 + 0x40);
        uVar4 = *(longlong *)(param_3 + 0x48) + (ulonglong)uVar2 * 4 + param_2;
        if (uVar4 < param_1[1] || uVar4 == param_1[1]) {
            uVar4 = 0;
            if (uVar2 != 0) {
                uVar4 = uVar1;
            }
            *(ulonglong *)(param_3 + 0x48) = uVar4;
            uVar1 = *(longlong *)(param_3 + 0x50) + param_2;
            if ((*param_1 <= uVar1) &&
                (uVar4 = *(longlong *)(param_3 + 0x50) + (ulonglong)uVar2 * 2 + param_2,
                        uVar4 < param_1[1] || uVar4 == param_1[1])) {
                uVar4 = 0;
                if (uVar2 != 0) {
                    uVar4 = uVar1;
                }
                *(ulonglong *)(param_3 + 0x50) = uVar4;
                uVar3 = FUN_1402ca3c0(param_1);
                if ((int)uVar3 < 0) {
                    return uVar3;
                }
                uVar3 = FUN_1402ca3c0(param_1);
                if ((int)uVar3 < 0) {
                    return uVar3;
                }
                uVar3 = FUN_1402ca3c0(param_1);
                if ((int)uVar3 < 0) {
                    return uVar3;
                }
                return 0;
            }
        }
    }
    return 0x80004005;
}



undefined8 FUN_14030ca00(ulonglong *param_1,longlong param_2,longlong param_3)

{
    ulonglong uVar1;
    uint uVar2;
    undefined8 uVar3;
    ulonglong uVar4;

    uVar3 = FUN_14030ed20(param_1,param_2,param_3 + 8);
    if ((((int)uVar3 < 0) || (uVar3 = FUN_1402ca3c0(param_1), (int)uVar3 < 0)) ||
        (uVar3 = FUN_14030ebf0(), (int)uVar3 < 0)) {
        return uVar3;
    }
    uVar1 = *(longlong *)(param_3 + 0x58) + param_2;
    if (*param_1 <= uVar1) {
        uVar2 = *(uint *)(param_3 + 0x50);
        uVar4 = *(longlong *)(param_3 + 0x58) + (ulonglong)uVar2 * 4 + param_2;
        if (uVar4 < param_1[1] || uVar4 == param_1[1]) {
            uVar4 = 0;
            if (uVar2 != 0) {
                uVar4 = uVar1;
            }
            *(ulonglong *)(param_3 + 0x58) = uVar4;
            uVar1 = *(longlong *)(param_3 + 0x60) + param_2;
            if ((*param_1 <= uVar1) &&
                (uVar4 = *(longlong *)(param_3 + 0x60) + (ulonglong)uVar2 * 8 + param_2,
                        uVar4 < param_1[1] || uVar4 == param_1[1])) {
                uVar4 = 0;
                if (uVar2 != 0) {
                    uVar4 = uVar1;
                }
                *(ulonglong *)(param_3 + 0x60) = uVar4;
                return 0;
            }
        }
    }
    return 0x80004005;
}



undefined8 FUN_14030cac0(ulonglong *param_1,longlong param_2,int *param_3)

{
    ulonglong uVar1;
    undefined8 uVar2;
    ulonglong uVar3;
    uint uVar4;
    uint uVar5;
    int *piVar6;
    int iVar7;
    ulonglong uVar8;

    if (*param_3 != 0x4d4f444c) {
        return 0xa0060001;
    }
    if (param_3[1] != 100) {
        return 0xa0060002;
    }
    uVar3 = param_2 + *(longlong *)(param_3 + 6);
    if ((uVar3 < *param_1) ||
        (uVar5 = param_3[4], uVar1 = *(longlong *)(param_3 + 6) + (ulonglong)uVar5 * 0x70 + param_2,
                param_1[1] <= uVar1 && uVar1 != param_1[1])) {
        return 0x80004005;
    }
    uVar8 = 0;
    uVar1 = uVar8;
    if (uVar5 != 0) {
        uVar1 = uVar3;
    }
    *(ulonglong *)(param_3 + 6) = uVar1;
    uVar3 = uVar8;
    if (uVar5 != 0) {
        do {
            iVar7 = (int)uVar3;
            uVar2 = FUN_1402ca420(param_1);
            if ((int)uVar2 < 0) {
                return uVar2;
            }
            uVar3 = (ulonglong)(iVar7 + 1U);
        } while (iVar7 + 1U < (uint)param_3[4]);
    }
    piVar6 = param_3 + 8;
    uVar3 = uVar8;
    do {
        uVar2 = FUN_14030eb90(param_1,param_2,piVar6);
        if ((int)uVar2 < 0) {
            return uVar2;
        }
        uVar3 = uVar3 + 1;
        piVar6 = piVar6 + 6;
    } while (uVar3 < 4);
    uVar2 = FUN_14030efa0(param_1);
    if (-1 < (int)uVar2) {
        piVar6 = param_3 + 0x24;
        uVar3 = uVar8;
        do {
            uVar2 = FUN_14030eb90(param_1,param_2,piVar6);
            if ((int)uVar2 < 0) {
                return uVar2;
            }
            uVar3 = uVar3 + 1;
            piVar6 = piVar6 + 6;
        } while (uVar3 < 4);
        uVar2 = FUN_14030f080(param_1);
        if ((((((-1 < (int)uVar2) &&
                (uVar2 = FUN_14030ac30(param_1,param_2,param_3 + 0x40), -1 < (int)uVar2)) &&
               (uVar2 = FUN_14030f130(param_1), -1 < (int)uVar2)) &&
              ((uVar2 = FUN_1402ca420(param_1,param_2,param_3 + 100), -1 < (int)uVar2 &&
                                                                      (uVar2 = FUN_1402ca420(param_1), -1 < (int)uVar2)))) &&
             ((uVar2 = FUN_1402ca420(param_1), -1 < (int)uVar2 &&
                                               ((uVar2 = FUN_1402ca530(param_1), -1 < (int)uVar2 &&
                                                                                 (uVar2 = FUN_1402ca420(param_1,param_2,param_3 + 0x74), -1 < (int)uVar2)))))) &&
            ((uVar2 = FUN_14030f1e0(param_1), -1 < (int)uVar2 &&
                                              (uVar2 = FUN_14030f290(param_1,param_2,param_3 + 0x7c), -1 < (int)uVar2)))) {
            uVar3 = *(longlong *)(param_3 + 0x82) + param_2;
            if ((*param_1 <= uVar3) &&
                (uVar1 = *(longlong *)(param_3 + 0x82) + (ulonglong)(uint)param_3[0x80] * 4 + param_2,
                        uVar1 < param_1[1] || uVar1 == param_1[1])) {
                uVar1 = uVar8;
                if (param_3[0x80] != 0) {
                    uVar1 = uVar3;
                }
                *(ulonglong *)(param_3 + 0x82) = uVar1;
                uVar3 = *(longlong *)(param_3 + 0x86) + param_2;
                if ((*param_1 <= uVar3) &&
                    (uVar1 = *(longlong *)(param_3 + 0x86) + (ulonglong)(uint)param_3[0x84] * 2 + param_2,
                            uVar1 < param_1[1] || uVar1 == param_1[1])) {
                    uVar1 = uVar8;
                    if (param_3[0x84] != 0) {
                        uVar1 = uVar3;
                    }
                    *(ulonglong *)(param_3 + 0x86) = uVar1;
                    uVar2 = FUN_14030b0c0(param_1,param_2,param_3 + 0x88);
                    if ((int)uVar2 < 0) {
                        return uVar2;
                    }
                    uVar2 = FUN_14030f340();
                    if ((int)uVar2 < 0) {
                        return uVar2;
                    }
                    uVar3 = *(longlong *)(param_3 + 0x9a) + param_2;
                    if ((*param_1 <= uVar3) &&
                        (uVar1 = *(longlong *)(param_3 + 0x9a) + (ulonglong)(uint)param_3[0x98] * 4 + param_2,
                                uVar1 < param_1[1] || uVar1 == param_1[1])) {
                        uVar1 = uVar8;
                        if (param_3[0x98] != 0) {
                            uVar1 = uVar3;
                        }
                        *(ulonglong *)(param_3 + 0x9a) = uVar1;
                        uVar3 = *(longlong *)(param_3 + 0x9e) + param_2;
                        if ((*param_1 <= uVar3) &&
                            (uVar1 = *(longlong *)(param_3 + 0x9e) + (ulonglong)(uint)param_3[0x9c] * 2 + param_2
                                    , uVar1 < param_1[1] || uVar1 == param_1[1])) {
                            uVar1 = uVar8;
                            if (param_3[0x9c] != 0) {
                                uVar1 = uVar3;
                            }
                            *(ulonglong *)(param_3 + 0x9e) = uVar1;
                            uVar3 = *(longlong *)(param_3 + 0xa2) + param_2;
                            if ((*param_1 <= uVar3) &&
                                (uVar1 = *(longlong *)(param_3 + 0xa2) + (ulonglong)(uint)param_3[0xa0] * 8 +
                                                                                          param_2, uVar1 < param_1[1] || uVar1 == param_1[1])) {
                                uVar1 = uVar8;
                                if (param_3[0xa0] != 0) {
                                    uVar1 = uVar3;
                                }
                                *(ulonglong *)(param_3 + 0xa2) = uVar1;
                                uVar3 = *(longlong *)(param_3 + 0xa6) + param_2;
                                if (*param_1 <= uVar3) {
                                    uVar5 = param_3[0xa4];
                                    uVar1 = *(longlong *)(param_3 + 0xa6) + (ulonglong)uVar5 * 4 + param_2;
                                    if (uVar1 < param_1[1] || uVar1 == param_1[1]) {
                                        uVar1 = uVar8;
                                        if (uVar5 != 0) {
                                            uVar1 = uVar3;
                                        }
                                        *(ulonglong *)(param_3 + 0xa6) = uVar1;
                                        uVar3 = *(longlong *)(param_3 + 0xa8) + param_2;
                                        if ((*param_1 <= uVar3) &&
                                            (uVar1 = *(longlong *)(param_3 + 0xa8) + (ulonglong)uVar5 * 2 + param_2,
                                                    uVar1 < param_1[1] || uVar1 == param_1[1])) {
                                            uVar1 = uVar8;
                                            if (uVar5 != 0) {
                                                uVar1 = uVar3;
                                            }
                                            *(ulonglong *)(param_3 + 0xa8) = uVar1;
                                            uVar2 = FUN_1402d4b30(param_1,param_2,param_3 + 0xaa);
                                            if ((int)uVar2 < 0) {
                                                return uVar2;
                                            }
                                            uVar2 = FUN_14030f3f0(param_1,param_2,param_3 + 0xae);
                                            if ((int)uVar2 < 0) {
                                                return uVar2;
                                            }
                                            uVar3 = *(longlong *)(param_3 + 0xb4) + param_2;
                                            if ((*param_1 <= uVar3) &&
                                                (uVar1 = *(longlong *)(param_3 + 0xb4) + (ulonglong)(uint)param_3[0xb2] * 8
                                                                                                          + param_2, uVar1 < param_1[1] || uVar1 == param_1[1])) {
                                                uVar1 = uVar8;
                                                if (param_3[0xb2] != 0) {
                                                    uVar1 = uVar3;
                                                }
                                                *(ulonglong *)(param_3 + 0xb4) = uVar1;
                                                uVar3 = *(longlong *)(param_3 + 0xb8) + param_2;
                                                if ((*param_1 <= uVar3) &&
                                                    (uVar1 = *(longlong *)(param_3 + 0xb8) +
                                                             (ulonglong)(uint)param_3[0xb6] * 2 + param_2,
                                                            uVar1 < param_1[1] || uVar1 == param_1[1])) {
                                                    uVar1 = uVar8;
                                                    if (param_3[0xb6] != 0) {
                                                        uVar1 = uVar3;
                                                    }
                                                    *(ulonglong *)(param_3 + 0xb8) = uVar1;
                                                    uVar3 = *(longlong *)(param_3 + 0xbc) + param_2;
                                                    if ((*param_1 <= uVar3) &&
                                                        (uVar1 = *(longlong *)(param_3 + 0xbc) +
                                                                 (ulonglong)(uint)param_3[0xba] * 8 + param_2,
                                                                uVar1 < param_1[1] || uVar1 == param_1[1])) {
                                                        uVar1 = uVar8;
                                                        if (param_3[0xba] != 0) {
                                                            uVar1 = uVar3;
                                                        }
                                                        *(ulonglong *)(param_3 + 0xbc) = uVar1;
                                                        uVar3 = *(longlong *)(param_3 + 0xc0) + param_2;
                                                        if (*param_1 <= uVar3) {
                                                            uVar5 = param_3[0xbe];
                                                            uVar1 = *(longlong *)(param_3 + 0xc0) + (ulonglong)uVar5 * 0xa0 +
                                                                    param_2;
                                                            if (uVar1 < param_1[1] || uVar1 == param_1[1]) {
                                                                uVar1 = uVar8;
                                                                if (uVar5 != 0) {
                                                                    uVar1 = uVar3;
                                                                }
                                                                *(ulonglong *)(param_3 + 0xc0) = uVar1;
                                                                uVar3 = uVar8;
                                                                if (uVar5 != 0) {
                                                                    do {
                                                                        uVar2 = FUN_14030c6a0(param_1,(ulonglong)uVar5 * 0xa0 + uVar1,
                                                                                              uVar3 * 0xa0 +
                                                                                              *(longlong *)(param_3 + 0xc0) + param_1[2]
                                                                        );
                                                                        if ((int)uVar2 < 0) {
                                                                            return uVar2;
                                                                        }
                                                                        uVar4 = (int)uVar3 + 1;
                                                                        uVar3 = (ulonglong)uVar4;
                                                                    } while (uVar4 < (uint)param_3[0xbe]);
                                                                }
                                                                uVar2 = FUN_14030f4e0(param_1,param_2);
                                                                if ((int)uVar2 < 0) {
                                                                    return uVar2;
                                                                }
                                                                uVar3 = *(longlong *)(param_3 + 200) + param_2;
                                                                if ((*param_1 <= uVar3) &&
                                                                    (uVar5 = param_3[0xc6],
                                                                            uVar1 = *(longlong *)(param_3 + 200) + (ulonglong)uVar5 * 400 +
                                                                                    param_2, uVar1 < param_1[1] || uVar1 == param_1[1])) {
                                                                    uVar1 = uVar8;
                                                                    if (uVar5 != 0) {
                                                                        uVar1 = uVar3;
                                                                    }
                                                                    *(ulonglong *)(param_3 + 200) = uVar1;
                                                                    uVar3 = uVar8;
                                                                    if (uVar5 != 0) {
                                                                        do {
                                                                            uVar2 = FUN_14030c7d0();
                                                                            if ((int)uVar2 < 0) {
                                                                                return uVar2;
                                                                            }
                                                                            uVar5 = (int)uVar3 + 1;
                                                                            uVar3 = (ulonglong)uVar5;
                                                                        } while (uVar5 < (uint)param_3[0xc6]);
                                                                    }
                                                                    uVar3 = *(longlong *)(param_3 + 0xcc) + param_2;
                                                                    if ((*param_1 <= uVar3) &&
                                                                        (uVar5 = param_3[0xca],
                                                                                uVar1 = *(longlong *)(param_3 + 0xcc) + (ulonglong)uVar5 * 0x38
                                                                                        + param_2, uVar1 < param_1[1] || uVar1 == param_1[1]))
                                                                    {
                                                                        uVar1 = uVar8;
                                                                        if (uVar5 != 0) {
                                                                            uVar1 = uVar3;
                                                                        }
                                                                        *(ulonglong *)(param_3 + 0xcc) = uVar1;
                                                                        uVar3 = uVar8;
                                                                        if (uVar5 != 0) {
                                                                            do {
                                                                                uVar2 = FUN_14030ed20(param_1);
                                                                                if ((int)uVar2 < 0) {
                                                                                    return uVar2;
                                                                                }
                                                                                uVar5 = (int)uVar3 + 1;
                                                                                uVar3 = (ulonglong)uVar5;
                                                                            } while (uVar5 < (uint)param_3[0xca]);
                                                                        }
                                                                        uVar2 = FUN_1402ca420(param_1,param_2,param_3 + 0xce);
                                                                        if ((int)uVar2 < 0) {
                                                                            return uVar2;
                                                                        }
                                                                        uVar2 = FUN_1402ca3c0(param_1);
                                                                        if ((int)uVar2 < 0) {
                                                                            return uVar2;
                                                                        }
                                                                        uVar2 = FUN_1402ca3c0(param_1);
                                                                        if ((int)uVar2 < 0) {
                                                                            return uVar2;
                                                                        }
                                                                        uVar2 = FUN_14030f5b0(param_1);
                                                                        if ((int)uVar2 < 0) {
                                                                            return uVar2;
                                                                        }
                                                                        uVar3 = *(longlong *)(param_3 + 0x12a) + param_2;
                                                                        if ((*param_1 <= uVar3) &&
                                                                            (uVar1 = *(longlong *)(param_3 + 0x12a) +
                                                                                     (ulonglong)(uint)param_3[0x128] * 4 + param_2,
                                                                                    uVar1 < param_1[1] || uVar1 == param_1[1])) {
                                                                            uVar1 = uVar8;
                                                                            if (param_3[0x128] != 0) {
                                                                                uVar1 = uVar3;
                                                                            }
                                                                            *(ulonglong *)(param_3 + 0x12a) = uVar1;
                                                                            uVar2 = FUN_14030b340(param_1,param_2,param_3 + 0x144);
                                                                            if ((int)uVar2 < 0) {
                                                                                return uVar2;
                                                                            }
                                                                            uVar2 = FUN_14030f660();
                                                                            if ((int)uVar2 < 0) {
                                                                                return uVar2;
                                                                            }
                                                                            uVar2 = FUN_1402ca420(param_1,param_2,param_3 + 0x154);
                                                                            if ((int)uVar2 < 0) {
                                                                                return uVar2;
                                                                            }
                                                                            uVar2 = FUN_14030f710(param_1);
                                                                            if ((int)uVar2 < 0) {
                                                                                return uVar2;
                                                                            }
                                                                            uVar2 = FUN_14030ee60(param_1,param_2,param_3 + 0x15c);
                                                                            if ((int)uVar2 < 0) {
                                                                                return uVar2;
                                                                            }
                                                                            uVar2 = FUN_14030f7c0(param_1,param_2);
                                                                            if ((int)uVar2 < 0) {
                                                                                return uVar2;
                                                                            }
                                                                            uVar3 = *(longlong *)(param_3 + 0x168) + param_2;
                                                                            if ((*param_1 <= uVar3) &&
                                                                                (uVar1 = (ulonglong)(uint)param_3[0x166] * 0x4c +
                                                                                                          *(longlong *)(param_3 + 0x168) + param_2,
                                                                                        uVar1 < param_1[1] || uVar1 == param_1[1])) {
                                                                                if (param_3[0x166] != 0) {
                                                                                    uVar8 = uVar3;
                                                                                }
                                                                                *(ulonglong *)(param_3 + 0x168) = uVar8;
                                                                                uVar2 = FUN_1402ca420(param_1,param_2,param_3 + 0x16a);
                                                                                if ((int)uVar2 < 0) {
                                                                                    return uVar2;
                                                                                }
                                                                                uVar2 = FUN_14030eb90(param_1);
                                                                                if ((int)uVar2 < 0) {
                                                                                    return uVar2;
                                                                                }
                                                                                return 0;
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
                                    }
                                }
                            }
                        }
                    }
                }
            }
            uVar2 = 0x80004005;
        }
    }
    return uVar2;
}



undefined8 * FUN_14030d310(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_140b640b8;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[10] = 0;
    *(undefined4 *)(param_1 + 0xb) = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x17] = 0;
    FUN_140327110(param_1 + 0x1b);
    param_1[0x37] = 0;
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    FUN_14030ea80(param_1 + 0x3c);
    *(undefined4 *)(param_1 + 1) = 1;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[9] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    *(undefined4 *)(param_1 + 0x15) = 0x17;
    param_1[0x16] = 0;
    param_1[0x18] = 0;
    param_1[0x1a] = 0;
    return param_1;
}



void FUN_14030d400(undefined8 *param_1)

{
    ulonglong *puVar1;
    longlong lVar2;
    ulonglong uVar3;
    DWORD DVar4;
    HANDLE hObject;
    ulonglong uVar5;
    undefined4 local_18 [4];

    uVar5 = 0;
    *param_1 = &PTR_FUN_140b640b8;
    if ((longlong *)param_1[9] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[9] + 8))();
        param_1[9] = 0;
    }
    if (*(int *)(param_1 + 4) != 0) {
        lVar2 = param_1[2];
        DVar4 = GetCurrentThreadId();
        if (*(DWORD *)(lVar2 + 8) == DVar4) {
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 1;
        }
        else {
            do {
                LOCK();
                puVar1 = (ulonglong *)(lVar2 + 0x10);
                uVar3 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
                if (uVar3 == 0) {
                    *(DWORD *)(lVar2 + 8) = DVar4;
                    goto LAB_14030d486;
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 < 0x400);
            FUN_14019fb60(lVar2 + 8);
        }
        LAB_14030d486:
        FUN_1400b6120(param_1[2] + 0x38,param_1 + 3);
        if (*(ulonglong *)(lVar2 + 0x10) < 2) {
            *(undefined4 *)(lVar2 + 8) = 0;
            *(undefined8 *)(lVar2 + 0x10) = 0;
            if (*(longlong *)(lVar2 + 0x18) != 0) {
                if (*(longlong *)(lVar2 + 0x20) == 0) {
                    hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                    LOCK();
                    puVar1 = (ulonglong *)(lVar2 + 0x20);
                    uVar5 = *puVar1;
                    *puVar1 = *puVar1 ^ (ulonglong)(uVar5 == 0) * (*puVar1 ^ (ulonglong)hObject);
                    if (uVar5 != 0) {
                        CloseHandle(hObject);
                    }
                }
                SetEvent(*(HANDLE *)(lVar2 + 0x20));
            }
        }
        else {
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -1;
        }
    }
    if ((longlong *)param_1[5] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[5] + 0x68))();
        local_18[0] = 0xffffffff;
        (**(code **)(*(longlong *)param_1[5] + 0x20))((longlong *)param_1[5],local_18);
        (**(code **)(*(longlong *)param_1[5] + 8))();
        param_1[5] = 0;
    }
    FUN_14018b900(param_1[3],0);
    FUN_14018b900(param_1[0x12],0);
    FUN_14018b900(param_1[0x13],0);
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x14] + 8))();
        param_1[0x14] = 0;
    }
    FUN_14018b900(param_1[0x16],0);
    FUN_14018b900(param_1[0x18],0);
    FUN_14018b900(param_1[0x1a],0);
    if ((longlong *)param_1[6] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[6] + 8))();
        param_1[6] = 0;
    }
    FUN_140019490(param_1 + 0x3c);
    FUN_14018b900(param_1[0x3e],0);
    param_1[0x3e] = 0;
    if (param_1[0x3b] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x3a] != 0) {
        CloseHandle((HANDLE)param_1[0x3a]);
    }
    if ((longlong *)param_1[0x17] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x17] + 8))();
    }
    if ((undefined8 *)param_1[0x10] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x10] = param_1[0x11];
    }
    if (param_1[0x11] != 0) {
        *(undefined8 *)(param_1[0x11] + 0x80) = param_1[0x10];
    }
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    if ((undefined8 *)param_1[0xe] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xe] = param_1[0xf];
    }
    if (param_1[0xf] != 0) {
        *(undefined8 *)(param_1[0xf] + 0x20) = param_1[0xe];
    }
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    if ((undefined8 *)param_1[0xc] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xc] = param_1[0xd];
    }
    if (param_1[0xd] != 0) {
        *(undefined8 *)(param_1[0xd] + 0x10) = param_1[0xc];
    }
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    return;
}



undefined8 FUN_14030d6a0(ulonglong param_1,longlong param_2,short *param_3)

{
    ulonglong **ppuVar1;
    undefined auVar2 [16];
    longlong lVar3;
    longlong lVar4;
    undefined8 uVar5;
    ulonglong uVar6;
    ulonglong *puVar7;
    ulonglong *puVar8;

    *(longlong *)(param_1 + 0x10) = param_2;
    puVar8 = (ulonglong *)(param_2 + 0x30);
    if (*(longlong *)(param_1 + 0x80) == 0) {
        *(ulonglong **)(param_1 + 0x80) = puVar8;
        puVar7 = (ulonglong *)(param_1 + 0x88);
        *puVar7 = *puVar8;
        *puVar8 = param_1;
        if (*puVar7 != 0) {
            *(ulonglong **)(*puVar7 + 0x80) = puVar7;
        }
    }
    if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
        lVar4 = -1;
        do {
            lVar3 = lVar4 + 1;
            lVar4 = lVar4 + 1;
        } while (param_3[lVar3] != 0);
        uVar6 = (ulonglong)((int)lVar4 + 1);
        auVar2 = ZEXT816(2) * ZEXT816(uVar6);
        uVar5 = SUB168(auVar2,0);
        if (SUB168(auVar2 >> 0x40,0) != 0) {
            uVar5 = 0xffffffffffffffff;
        }
        uVar5 = FUN_14018b280(uVar5,0);
        *(undefined8 *)(param_1 + 0x18) = uVar5;
        FUN_1407db590(uVar5,param_3,uVar6 * 2);
        puVar8 = (ulonglong *)0x0;
        uVar5 = FUN_1401b6de0();
        if (-1 < (int)uVar5) {
            lVar4 = *(longlong *)(param_1 + 0x10);
            *(undefined4 *)(param_1 + 0x20) = 1;
            if (*(longlong *)(lVar4 + 0x38) == *(longlong *)(lVar4 + 0x40)) {
                FUN_1400290d0(lVar4 + 0x38);
            }
            uVar6 = (**(code **)(lVar4 + 0x50))(param_1 + 0x18);
            ppuVar1 = (ulonglong **)
                    (*(longlong *)(lVar4 + 0x48) + (uVar6 % *(ulonglong *)(lVar4 + 0x40)) * 8);
            puVar7 = (ulonglong *)FUN_14018b280(0x20);
            if (puVar7 != (ulonglong *)0x0) {
                puVar8 = *ppuVar1;
                *puVar7 = uVar6;
                puVar7[1] = (ulonglong)puVar8;
                uVar6 = *(ulonglong *)(param_1 + 0x18);
                puVar7[3] = param_1;
                puVar7[2] = uVar6;
                puVar8 = puVar7;
            }
            *ppuVar1 = puVar8;
            *(longlong *)(lVar4 + 0x38) = *(longlong *)(lVar4 + 0x38) + 1;
            FUN_1401b6bf0();
            uVar5 = 0;
        }
        return uVar5;
    }
    return 0x80070057;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_14030d8a0(longlong param_1)

{
int iVar1;
undefined4 uVar2;
undefined8 uVar3;
longlong lVar4;
undefined8 local_res8;
undefined8 in_stack_ffffffffffffff08;
undefined4 uVar5;
undefined **local_d8;
longlong local_d0;
LPVOID local_c8;
undefined **local_c0;
wchar_t *local_b8;
LPVOID local_b0;
undefined8 local_a8;
undefined **local_a0;
undefined8 uStack152;
undefined8 local_90;
int iStack136;
undefined4 uStack132;
undefined **local_78;
longlong local_70;
LPVOID local_68;
undefined **local_58;
wchar_t *local_50;
LPVOID local_48;
undefined8 local_40;
undefined4 local_38;
undefined4 uStack52;
undefined4 uStack48;
undefined4 uStack44;
undefined4 local_28;
undefined4 uStack36;
int iStack32;
undefined4 uStack28;

uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff08 >> 0x20);
uVar3 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x20))();
if ((int)uVar3 == 0) {
return uVar3;
}
iVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x28))(*(longlong **)(param_1 + 0x28),0);
if (-1 < iVar1) {
local_d0 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
local_d8 = (undefined **)(**(code **)(**(longlong **)(param_1 + 0x30) + 0x20))();
local_c8 = (LPVOID)0x0;
local_d0 = (longlong)local_d8 + local_d0;
iVar1 = FUN_14030cac0(&local_d8,local_d8 + 0xc6,local_d8);
if (-1 < iVar1) {
if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
(**(code **)(**(longlong **)(param_1 + 0x28) + 8))();
*(undefined8 *)(param_1 + 0x28) = 0;
}
lVar4 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x20))();
goto LAB_14030db81;
}
}
if (*(longlong **)(param_1 + 0x30) == (longlong *)0x0) {
uVar3 = 0xffffffffffffffff;
}
else {
uVar3 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
}
local_res8 = 0x141debaa0;
uVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x28))(*(longlong **)(param_1 + 0x28),0);
FUN_1401a3130(0xe,0,&local_res8,iVar1,CONCAT44(uVar5,uVar2),uVar3);
local_d0 = 0;
local_d8 = &PTR_LAB_140b5e648;
local_c8 = TlsGetValue(DAT_140c63720);
TlsSetValue(DAT_140c63720,&local_d8);
local_78 = local_d8;
local_70 = local_d0;
local_a0 = &PTR_LAB_140b5e648;
uStack152 = L"Result";
local_68 = local_c8;
local_90 = TlsGetValue(DAT_140c63720);
TlsSetValue(DAT_140c63720,&local_a0);
local_a8 = *(undefined8 *)(param_1 + 0x18);
local_c0 = &PTR_LAB_140b5e648;
local_28 = (undefined4)local_90;
uStack36 = local_90._4_4_;
uStack28 = uStack132;
local_a0 = &PTR_LAB_140b5e640;
local_b8 = L"FileName";
local_38 = 0x40b5e640;
uStack52 = 1;
uStack48 = (undefined4)uStack152;
uStack44 = uStack152._4_4_;
iStack136 = iVar1;
iStack32 = iVar1;
local_b0 = TlsGetValue(DAT_140c63720);
TlsSetValue(DAT_140c63720,&local_c0);
local_50 = local_b8;
local_c0 = &PTR_LAB_140b5e638;
local_res8 = 0x141deba68;
local_58 = &PTR_LAB_140b5e638;
local_48 = local_b0;
local_40 = local_a8;
iVar1 = FUN_1401971e0(&DAT_140c8a604,6,&local_res8,*(undefined8 *)(param_1 + 0x18),&local_58,
                      &local_38,&local_78);
local_c0 = &PTR_LAB_140b5e648;
TlsSetValue(DAT_140c63720,local_b0);
local_a0 = &PTR_LAB_140b5e648;
TlsSetValue(DAT_140c63720,local_90);
local_d8 = &PTR_LAB_140b5e648;
TlsSetValue(DAT_140c63720,local_c8);
if (iVar1 != 0) {
DebugBreak();
}
if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
(**(code **)(**(longlong **)(param_1 + 0x28) + 8))();
*(undefined8 *)(param_1 + 0x28) = 0;
}
if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
(**(code **)(**(longlong **)(param_1 + 0x30) + 8))();
*(undefined8 *)(param_1 + 0x30) = 0;
}
lVar4 = *(longlong *)(param_1 + 0x10) + 0x70;
LAB_14030db81:
*(longlong *)(param_1 + 0x38) = lVar4;
FUN_14030dbb0(param_1);
return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14030dbb0(longlong param_1)

{
uint *puVar1;
undefined2 uVar2;
ushort uVar3;
int iVar4;
undefined auVar5 [16];
undefined4 uVar6;
undefined4 uVar7;
int iVar8;
undefined4 uVar9;
undefined8 uVar10;
ulonglong uVar11;
undefined8 *puVar12;
ulonglong uVar13;
longlong lVar14;
int *piVar15;
ushort *puVar16;
undefined4 *puVar17;
undefined4 *puVar18;
longlong lVar19;
longlong lVar20;
ulonglong uVar21;
ulonglong uVar22;
longlong lVar23;
uint uVar24;
uint *puVar25;
longlong lVar26;
undefined4 *puVar27;
undefined4 *puVar28;
uint uVar29;
int iVar30;

uVar29 = *(uint *)(*(longlong *)(param_1 + 0x38) + 0x10);
uVar21 = 0;
iVar30 = 0;
if (uVar29 != 0) {
auVar5 = ZEXT816(0x70) * ZEXT416(uVar29);
uVar10 = SUB168(auVar5,0);
if (SUB168(auVar5 >> 0x40,0) != 0) {
uVar10 = 0xffffffffffffffff;
}
uVar10 = FUN_14018b280(uVar10,0);
*(undefined8 *)(param_1 + 0x90) = uVar10;
uVar22 = uVar21;
uVar13 = uVar21;
if (*(int *)(*(longlong *)(param_1 + 0x38) + 0x10) != 0) {
do {
lVar14 = *(longlong *)(param_1 + 0x90);
lVar20 = uVar22 * 0x70;
lVar23 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x18);
uVar2 = *(undefined2 *)(lVar20 + lVar23);
if (DAT_140c63840 == (code *)0x0) {
uVar11 = uVar21;
if (_DAT_140c64964 == 0) {
iVar8 = FUN_14021a4e0();
if (iVar8 < 0) {
uVar11 = 0;
}
else {
uVar11 = (**(code **)(*DAT_140c652e8 + 0x18))(DAT_140c652e8,uVar2);
}
}
}
else {
uVar11 = (*DAT_140c63840)(&PTR_u_ModelSequence_140a6b9b0);
}
*(uint *)(lVar20 + lVar14) = (uint)*(ushort *)(lVar20 + lVar23);
*(uint *)(lVar20 + 4 + lVar14) = (uint)*(ushort *)(lVar20 + 2 + lVar23);
iVar8 = iVar30;
if (uVar11 != 0) {
iVar8 = *(int *)(uVar11 + 0x14);
}
*(int *)(lVar20 + 8 + lVar14) = iVar8;
*(uint *)(lVar20 + 0xc + lVar14) = (uint)*(ushort *)(lVar20 + 4 + lVar23);
*(uint *)(lVar20 + 0x10 + lVar14) = (uint)*(ushort *)(lVar20 + 6 + lVar23);
*(int *)(lVar20 + 0x14 + lVar14) =
*(int *)(lVar20 + 0x10 + lVar23) - *(int *)(lVar20 + 0xc + lVar23);
*(uint *)(lVar20 + 0x18 + lVar14) = (uint)*(ushort *)(lVar20 + 10 + lVar23);
*(undefined4 *)(lVar20 + 0x1c + lVar14) = *(undefined4 *)(lVar20 + 0x14 + lVar23);
puVar17 = (undefined4 *)(lVar20 + 0x20 + lVar23);
uVar9 = puVar17[1];
uVar6 = puVar17[2];
uVar7 = puVar17[3];
puVar27 = (undefined4 *)(lVar20 + 0x20 + lVar14);
*puVar27 = *puVar17;
puVar27[1] = uVar9;
puVar27[2] = uVar6;
puVar27[3] = uVar7;
puVar17 = (undefined4 *)(lVar20 + 0x30 + lVar23);
uVar9 = puVar17[1];
uVar6 = puVar17[2];
uVar7 = puVar17[3];
puVar27 = (undefined4 *)(lVar20 + 0x30 + lVar14);
*puVar27 = *puVar17;
puVar27[1] = uVar9;
puVar27[2] = uVar6;
puVar27[3] = uVar7;
puVar17 = (undefined4 *)(lVar20 + 0x40 + lVar23);
uVar9 = puVar17[1];
uVar6 = puVar17[2];
uVar7 = puVar17[3];
puVar27 = (undefined4 *)(lVar20 + 0x40 + lVar14);
*puVar27 = *puVar17;
puVar27[1] = uVar9;
puVar27[2] = uVar6;
puVar27[3] = uVar7;
puVar17 = (undefined4 *)(lVar20 + 0x50 + lVar23);
uVar9 = puVar17[1];
uVar6 = puVar17[2];
uVar7 = puVar17[3];
puVar27 = (undefined4 *)(lVar20 + 0x50 + lVar14);
*puVar27 = *puVar17;
puVar27[1] = uVar9;
puVar27[2] = uVar6;
puVar27[3] = uVar7;
*(undefined4 *)(lVar20 + 0x60 + lVar14) = 0;
if (*(int *)(lVar20 + lVar14) != (int)uVar13) {
uVar13 = (ulonglong)*(uint *)(lVar20 + lVar14);
}
*(undefined8 *)(lVar20 + 0x68 + lVar14) = *(undefined8 *)(lVar20 + 0x68 + lVar23);
uVar29 = (int)uVar22 + 1;
uVar22 = (ulonglong)uVar29;
} while (uVar29 < *(uint *)(*(longlong *)(param_1 + 0x38) + 0x10));
}
}
uVar29 = *(uint *)(*(longlong *)(param_1 + 0x38) + 0x80);
if (uVar29 != 0) {
auVar5 = ZEXT816(0x20) * ZEXT416(uVar29);
uVar10 = SUB168(auVar5,0);
if (SUB168(auVar5 >> 0x40,0) != 0) {
uVar10 = 0xffffffffffffffff;
}
uVar10 = FUN_14018b280(uVar10,0);
*(undefined8 *)(param_1 + 0x98) = uVar10;
uVar22 = uVar21;
uVar13 = uVar21;
if (*(int *)(*(longlong *)(param_1 + 0x38) + 0x80) != 0) {
do {
puVar25 = (uint *)(uVar13 * 0x20 + *(longlong *)(param_1 + 0x98));
puVar16 = (ushort *)(uVar13 * 0x30 + *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x88));
uVar3 = *puVar16;
*puVar25 = (uint)uVar3;
puVar25[1] = (uint)puVar16[1];
puVar25[2] = *(int *)(puVar16 + 6) - *(int *)(puVar16 + 4);
if ((uint)uVar3 != (uint)uVar22) {
uVar22 = (ulonglong)uVar3;
}
puVar25[3] = (uint)puVar16[3];
uVar29 = *(uint *)(puVar16 + 8);
puVar25[5] = 0;
puVar25[4] = uVar29;
uVar29 = (int)uVar13 + 1;
*(undefined8 *)(puVar25 + 6) = *(undefined8 *)(puVar16 + 0x14);
uVar13 = (ulonglong)uVar29;
} while (uVar29 < *(uint *)(*(longlong *)(param_1 + 0x38) + 0x80));
}
}
*(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 600);
FUN_140327210();
lVar14 = *(longlong *)(param_1 + 0x40);
if (((*(char *)(lVar14 + 0x20) != '\x01') && ((*(ushort *)(lVar14 + 0x1e) & 0x200) == 0)) &&
(*(byte *)(lVar14 + 0x1c) < 0x21)) {
if ((*(ushort *)(lVar14 + 0x1e) & 0xf0) != 0) {
*(undefined4 *)(param_1 + 0xa8) = 8;
goto LAB_14030de68;
}
if (*(byte *)(lVar14 + 0x1c) < 0x11) {
*(undefined4 *)(param_1 + 0xa8) = 7;
goto LAB_14030de68;
}
FUN_1400035b0(6,0,0);
}
*(undefined4 *)(param_1 + 0xa8) = 9;
LAB_14030de68:
uVar29 = *(uint *)(*(longlong *)(param_1 + 0x40) + 0x80);
if (uVar29 != 0) {
auVar5 = ZEXT816(8) * ZEXT416(uVar29);
uVar10 = SUB168(auVar5,0);
if (SUB168(auVar5 >> 0x40,0) != 0) {
uVar10 = 0xffffffffffffffff;
}
uVar10 = FUN_14018b280(uVar10,0);
*(undefined8 *)(param_1 + 0xb0) = uVar10;
uVar22 = uVar21;
if (*(int *)(*(longlong *)(param_1 + 0x40) + 0x80) != 0) {
do {
lVar14 = *(longlong *)(param_1 + 0xb0);
lVar23 = uVar22 * 0x70 + *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x88);
uVar9 = FUN_14030e510(param_1,lVar23);
*(undefined4 *)(lVar14 + uVar22 * 8) = uVar9;
uVar9 = FUN_14030e690(param_1,lVar23);
uVar29 = (int)uVar22 + 1;
*(undefined4 *)(lVar14 + 4 + uVar22 * 8) = uVar9;
uVar22 = (ulonglong)uVar29;
} while (uVar29 < *(uint *)(*(longlong *)(param_1 + 0x40) + 0x80));
}
}
puVar12 = (undefined8 *)
        FUN_1402eca50(*(undefined8 *)(param_1 + 0x10),*(longlong *)(param_1 + 0x38) + 0x10);
if (*(undefined8 **)(param_1 + 0xb8) != puVar12) {
if (puVar12 != (undefined8 *)0x0) {
(**(code **)*puVar12)(puVar12);
}
if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
(**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
}
*(undefined8 **)(param_1 + 0xb8) = puVar12;
}
auVar5 = ZEXT816(4) * ZEXT416(*(uint *)(*(longlong *)(param_1 + 0x38) + 0x180));
uVar10 = SUB168(auVar5,0);
if (SUB168(auVar5 >> 0x40,0) != 0) {
uVar10 = 0xffffffffffffffff;
}
uVar10 = FUN_14018b280(uVar10,0);
*(undefined8 *)(param_1 + 0xd0) = uVar10;
FUN_1407e4830(uVar10,0,(ulonglong)*(uint *)(*(longlong *)(param_1 + 0x38) + 0x180) << 2);
auVar5 = ZEXT816(4) *
         ZEXT416((uint)(*(int *)(*(longlong *)(param_1 + 0x10) + 0x8c4) +
                        *(int *)(*(longlong *)(param_1 + 0x38) + 0x180)));
uVar10 = SUB168(auVar5,0);
if (SUB168(auVar5 >> 0x40,0) != 0) {
uVar10 = 0xffffffffffffffff;
}
puVar25 = (uint *)FUN_14018b280(uVar10);
uVar29 = 1;
*puVar25 = 0;
uVar22 = 1;
if (1 < *(uint *)(*(longlong *)(param_1 + 0x10) + 0x8c4)) {
do {
lVar14 = *(longlong *)(param_1 + 0x38);
uVar24 = *(uint *)(uVar22 * 0xc4 + *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x8c8));
if ((uVar24 < *(uint *)(lVar14 + 400)) &&
(uVar3 = *(ushort *)(*(longlong *)(lVar14 + 0x198) + (ulonglong)uVar24 * 2),
(uint)uVar3 < *(uint *)(lVar14 + 0x180))) {
*(uint *)(*(longlong *)(param_1 + 0xd0) + (ulonglong)uVar3 * 4) = uVar29;
uVar13 = (ulonglong)uVar29;
uVar29 = uVar29 + 1;
puVar25[uVar13] = (uint)uVar22;
}
uVar24 = (uint)uVar22 + 1;
uVar22 = (ulonglong)uVar24;
} while (uVar24 < *(uint *)(*(longlong *)(param_1 + 0x10) + 0x8c4));
}
uVar22 = uVar21;
if (*(int *)(*(longlong *)(param_1 + 0x38) + 0x180) != 0) {
do {
lVar14 = *(longlong *)(param_1 + 0xd0);
puVar1 = (uint *)(lVar14 + uVar22 * 4);
if (*(int *)(lVar14 + uVar22 * 4) == 0) {
lVar23 = *(longlong *)(param_1 + 0x38);
lVar20 = uVar22 * 0x160 + *(longlong *)(lVar23 + 0x188);
uVar3 = *(ushort *)(lVar20 + 4);
if ((uint)uVar3 < *(uint *)(lVar23 + 0x180)) {
if (((*(ushort *)
((ulonglong)
*(ushort *)((ulonglong)uVar3 * 0x160 + 6 + *(longlong *)(lVar23 + 0x188)) * 0xb8 +
*(longlong *)(lVar23 + 0xf8)) ^
*(ushort *)((ulonglong)*(ushort *)(lVar20 + 6) * 0xb8 + *(longlong *)(lVar23 + 0xf8))
) & 0x7f8) == 0) {
*puVar1 = *(uint *)(lVar14 + (ulonglong)(uint)uVar3 * 4);
}
else {
*puVar1 = uVar29;
uVar13 = (ulonglong)uVar29;
uVar29 = uVar29 + 1;
puVar25[uVar13] =
*(uint *)(*(longlong *)(param_1 + 0xd0) + (ulonglong)*(ushort *)(lVar20 + 4) * 4);
}
}
}
uVar24 = (int)uVar22 + 1;
uVar22 = (ulonglong)uVar24;
} while (uVar24 < *(uint *)(*(longlong *)(param_1 + 0x38) + 0x180));
}
uVar22 = (ulonglong)uVar29;
*(uint *)(param_1 + 200) = uVar29;
uVar10 = SUB168(ZEXT816(0xc4) * ZEXT816(uVar22),0);
if (SUB168(ZEXT816(0xc4) * ZEXT816(uVar22) >> 0x40,0) != 0) {
uVar10 = 0xffffffffffffffff;
}
uVar10 = FUN_14018b280(uVar10);
*(undefined8 *)(param_1 + 0xc0) = uVar10;
uVar13 = uVar21;
if (uVar29 != 0) {
do {
puVar17 = (undefined4 *)
        ((ulonglong)*puVar25 * 0xc4 + *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x8c8));
puVar27 = (undefined4 *)(*(longlong *)(param_1 + 0xc0) + uVar13);
if ((((uint)puVar17 | (uint)puVar27) & 0xf) == 0) {
lVar14 = 1;
do {
puVar28 = puVar27;
puVar18 = puVar17;
uVar9 = puVar18[1];
uVar6 = puVar18[2];
uVar7 = puVar18[3];
*puVar28 = *puVar18;
puVar28[1] = uVar9;
puVar28[2] = uVar6;
puVar28[3] = uVar7;
uVar9 = puVar18[5];
uVar6 = puVar18[6];
uVar7 = puVar18[7];
puVar28[4] = puVar18[4];
puVar28[5] = uVar9;
puVar28[6] = uVar6;
puVar28[7] = uVar7;
uVar9 = puVar18[9];
uVar6 = puVar18[10];
uVar7 = puVar18[0xb];
puVar28[8] = puVar18[8];
puVar28[9] = uVar9;
puVar28[10] = uVar6;
puVar28[0xb] = uVar7;
uVar9 = puVar18[0xd];
uVar6 = puVar18[0xe];
uVar7 = puVar18[0xf];
puVar28[0xc] = puVar18[0xc];
puVar28[0xd] = uVar9;
puVar28[0xe] = uVar6;
puVar28[0xf] = uVar7;
uVar9 = puVar18[0x11];
uVar6 = puVar18[0x12];
uVar7 = puVar18[0x13];
puVar28[0x10] = puVar18[0x10];
puVar28[0x11] = uVar9;
puVar28[0x12] = uVar6;
puVar28[0x13] = uVar7;
uVar9 = puVar18[0x15];
uVar6 = puVar18[0x16];
uVar7 = puVar18[0x17];
puVar28[0x14] = puVar18[0x14];
puVar28[0x15] = uVar9;
puVar28[0x16] = uVar6;
puVar28[0x17] = uVar7;
uVar9 = puVar18[0x19];
uVar6 = puVar18[0x1a];
uVar7 = puVar18[0x1b];
puVar28[0x18] = puVar18[0x18];
puVar28[0x19] = uVar9;
puVar28[0x1a] = uVar6;
puVar28[0x1b] = uVar7;
uVar9 = puVar18[0x1d];
uVar6 = puVar18[0x1e];
uVar7 = puVar18[0x1f];
puVar28[0x1c] = puVar18[0x1c];
puVar28[0x1d] = uVar9;
puVar28[0x1e] = uVar6;
puVar28[0x1f] = uVar7;
lVar14 = lVar14 + -1;
puVar17 = puVar18 + 0x20;
puVar27 = puVar28 + 0x20;
} while (lVar14 != 0);
uVar9 = puVar18[0x21];
uVar6 = puVar18[0x22];
uVar7 = puVar18[0x23];
puVar28[0x20] = puVar18[0x20];
puVar28[0x21] = uVar9;
puVar28[0x22] = uVar6;
puVar28[0x23] = uVar7;
uVar9 = puVar18[0x25];
uVar6 = puVar18[0x26];
uVar7 = puVar18[0x27];
puVar28[0x24] = puVar18[0x24];
puVar28[0x25] = uVar9;
puVar28[0x26] = uVar6;
puVar28[0x27] = uVar7;
uVar9 = puVar18[0x29];
uVar6 = puVar18[0x2a];
uVar7 = puVar18[0x2b];
puVar28[0x28] = puVar18[0x28];
puVar28[0x29] = uVar9;
puVar28[0x2a] = uVar6;
puVar28[0x2b] = uVar7;
uVar9 = puVar18[0x2d];
uVar6 = puVar18[0x2e];
uVar7 = puVar18[0x2f];
puVar28[0x2c] = puVar18[0x2c];
puVar28[0x2d] = uVar9;
puVar28[0x2e] = uVar6;
puVar28[0x2f] = uVar7;
puVar28[0x30] = puVar18[0x30];
}
else {
FUN_1407db590(puVar27);
}
puVar25 = puVar25 + 1;
uVar22 = uVar22 - 1;
uVar13 = uVar13 + 0xc4;
} while (uVar22 != 0);
}
FUN_14018b900();
if (*(int *)(*(longlong *)(param_1 + 0x38) + 0x180) != 0) {
do {
lVar14 = *(longlong *)(param_1 + 0xc0);
uVar29 = *(uint *)(*(longlong *)(param_1 + 0xd0) + uVar21 * 4);
lVar20 = uVar21 * 0x160 + *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x188);
lVar23 = (ulonglong)uVar29 * 0xc4;
uVar3 = *(ushort *)(lVar20 + 4);
if ((uint)uVar3 < *(uint *)(*(longlong *)(param_1 + 0x38) + 0x180)) {
uVar24 = *(uint *)(*(longlong *)(param_1 + 0xd0) + (ulonglong)uVar3 * 4);
if (uVar29 != uVar24) {
piVar15 = (int *)(lVar14 + 8 + lVar23);
lVar19 = 0x2f;
lVar26 = (lVar14 + 8 + (ulonglong)uVar24 * 0xc4) - (longlong)piVar15;
do {
if (*piVar15 == -1) {
*piVar15 = *(int *)(lVar26 + (longlong)piVar15);
}
piVar15 = piVar15 + 1;
lVar19 = lVar19 + -1;
} while (lVar19 != 0);
goto LAB_14030e2c3;
}
}
else {
lVar19 = 0x2f;
piVar15 = (int *)(lVar14 + 8 + lVar23);
do {
if (*piVar15 == -1) {
*piVar15 = 0;
}
piVar15 = piVar15 + 1;
lVar19 = lVar19 + -1;
} while (lVar19 != 0);
LAB_14030e2c3:
*(uint *)(lVar23 + 4 + lVar14) =
(uint)*(ushort *)
((ulonglong)*(ushort *)(lVar20 + 6) * 0xb8 +
*(longlong *)(*(longlong *)(param_1 + 0x38) + 0xf8));
}
uVar29 = (int)uVar21 + 1;
uVar21 = (ulonglong)uVar29;
} while (uVar29 < *(uint *)(*(longlong *)(param_1 + 0x38) + 0x180));
}
iVar8 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x18);
if (iVar8 != 0) {
iVar4 = *(int *)(param_1 + 0xa8);
if (iVar4 == 7) {
iVar30 = 0x10;
}
else if (iVar4 == 8) {
iVar30 = 0x20;
}
else if (iVar4 == 9) {
iVar30 = 0x30;
}
(**(code **)(*DAT_140c65670 + 0x38))(DAT_140c65670,iVar8 * iVar30,1,param_1 + 0xa0);
}
if (*(longlong *)(param_1 + 0xa0) != 0) {
iVar30 = *(int *)(param_1 + 0xa8);
if (iVar30 == 7) {
FUN_14030f870(param_1);
}
else if (iVar30 == 8) {
FUN_14030fa00(param_1);
}
else if (iVar30 == 9) {
FUN_14030fbf0(param_1);
}
}
for (lVar14 = *(longlong *)(param_1 + 0x1d8); lVar14 != 0; lVar14 = *(longlong *)(lVar14 + 0x68))
{
FUN_140326380(lVar14);
}
return;
}



undefined2 FUN_14030e3b0(longlong param_1,int param_2)

{
longlong lVar1;
uint uVar2;
uint uVar3;
uint uVar4;
uint uVar5;

lVar1 = *(longlong *)(param_1 + 0xb8);
uVar4 = 0;
uVar5 = *(uint *)(lVar1 + 0x20);
if (uVar5 != 0) {
do {
uVar2 = (uVar5 - uVar4 >> 1) + uVar4;
uVar3 = (uint)*(ushort *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)uVar2 * 2);
if ((int)uVar3 <= param_2) {
if (param_2 <= (int)uVar3) {
return *(undefined2 *)(*(longlong *)(lVar1 + 0x30) + (ulonglong)uVar2 * 2);
}
uVar4 = uVar2 + 1;
uVar2 = uVar5;
}
uVar5 = uVar2;
} while (uVar4 < uVar5);
}
return *(undefined2 *)(lVar1 + 0x1c);
}



int FUN_14030e510(longlong param_1,longlong param_2)

{
uint uVar1;
int iVar2;
longlong lVar3;
ulonglong uVar4;
uint uVar5;
int iVar6;
int iVar7;
uint uVar8;
uint uVar9;
uint uVar10;
int local_res8;

iVar6 = *(ushort *)(param_2 + 0x14) - 1;
uVar9 = (uint)(*(short *)(param_2 + 0x30) != -1);
uVar10 = (uint)(*(short *)(param_2 + 0x32) != -1);
uVar5 = (uint)(*(short *)(param_2 + 0x34) != -1);
uVar4 = (ulonglong)*(ushort *)(param_2 + 0x16);
uVar8 = (uint)(*(short *)(param_2 + 0x36) != -1);
lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x1f8);
uVar1 = *(uint *)(lVar3 + 0x20 + uVar4 * 0x30);
if ((uVar1 != 0) && (*(int *)(*(longlong *)(lVar3 + 0x28 + uVar4 * 0x30) + 0x120) != 3)) {
uVar9 = 1;
}
if ((1 < uVar1) && (*(int *)(*(longlong *)(lVar3 + 0x28 + uVar4 * 0x30) + 0x248) != 3)) {
uVar10 = 1;
}
if ((2 < uVar1) && (*(int *)(*(longlong *)(lVar3 + 0x28 + uVar4 * 0x30) + 0x370) != 3)) {
uVar5 = 1;
}
if ((3 < uVar1) && (*(int *)(*(longlong *)(lVar3 + 0x28 + uVar4 * 0x30) + 0x498) != 3)) {
uVar8 = 1;
}
iVar2 = *(int *)(param_1 + 0xa8);
iVar7 = 2;
if (((iVar2 != 9) && (iVar7 = 1, iVar2 != 8)) && (iVar7 = local_res8, iVar2 == 7)) {
iVar7 = 0;
}
if (*(int *)(lVar3 + 8 + uVar4 * 0x30) == 1) {
iVar6 = iVar6 + iVar7 * 4;
}
else {
iVar6 = uVar8 + (uVar5 + (uVar10 + (uVar9 + (((uint)(*(short *)(param_2 + 0x2c) == 2) +
                                              ((uint)(*(short *)(param_2 + 0x2a) == 2) +
                                               ((uint)(*(short *)(param_2 + 0x28) == 2) +
                                                (iVar7 * 0x10 + iVar6) * 2) * 2) * 2) * 2 +
                                             (uint)(*(short *)(param_2 + 0x2e) == 2)) * 2) * 2) *
                         2) * 2;
}
return iVar6;
}



int FUN_14030e690(longlong param_1,longlong param_2)

{
int *piVar1;
uint uVar2;
uint uVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
longlong lVar8;
int iVar9;
int iVar10;

iVar4 = 0;
iVar10 = 0;
lVar8 = (ulonglong)*(ushort *)(param_2 + 0x16) * 0x30 +
        *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x1f8);
if (*(int *)(lVar8 + 0x10) < 0xc) {
iVar10 = *(int *)(&DAT_140b64088 + (longlong)*(int *)(lVar8 + 0x10) * 4);
}
uVar3 = *(uint *)(lVar8 + 0x20);
iVar7 = 0;
if (uVar3 != 0) {
piVar1 = *(int **)(lVar8 + 0x28);
uVar2 = 0;
do {
piVar1 = piVar1 + 1;
if (*piVar1 != 0) {
iVar7 = 1;
break;
}
uVar2 = uVar2 + 1;
} while (uVar2 < 5);
}
iVar6 = 0;
if ((0 < iVar10) && (iVar6 = 0, 1 < uVar3)) {
uVar2 = 0;
piVar1 = (int *)(*(longlong *)(lVar8 + 0x28) + 300);
do {
if (*piVar1 != 0) {
iVar6 = 1;
break;
}
uVar2 = uVar2 + 1;
piVar1 = piVar1 + 1;
iVar6 = 0;
} while (uVar2 < 5);
}
iVar9 = 0;
iVar5 = 0;
if (5 < iVar10) {
if (2 < uVar3) {
uVar2 = 0;
piVar1 = (int *)(*(longlong *)(lVar8 + 0x28) + 0x254);
do {
if (*piVar1 != 0) {
iVar9 = 1;
break;
}
uVar2 = uVar2 + 1;
piVar1 = piVar1 + 1;
} while (uVar2 < 5);
}
iVar5 = iVar4;
if ((5 < iVar10) && (3 < uVar3)) {
uVar3 = 0;
piVar1 = (int *)(*(longlong *)(lVar8 + 0x28) + 0x37c);
do {
if (*piVar1 != 0) {
iVar5 = 1;
break;
}
uVar3 = uVar3 + 1;
piVar1 = piVar1 + 1;
} while (uVar3 < 5);
}
}
return (iVar5 + (iVar9 + (iVar6 + (iVar7 + iVar10 * 8) * 2) * 2) * 2) * 2;
}



int FUN_14030e7b0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4)

{
DWORD *pDVar1;
ulonglong *puVar2;
DWORD DVar3;
int iVar4;
ulonglong uVar5;
undefined8 *puVar6;
HANDLE hObject;
undefined8 *puVar7;
ulonglong *puVar8;
undefined4 local_48 [2];
undefined8 local_40;

pDVar1 = (DWORD *)(param_1 + 0x1b8);
DVar3 = GetCurrentThreadId();
puVar7 = (undefined8 *)0x0;
puVar8 = (ulonglong *)(param_1 + 0x1c0);
puVar6 = puVar7;
if (*pDVar1 == DVar3) {
*puVar8 = *puVar8 + 1;
}
else {
do {
LOCK();
uVar5 = *puVar8;
*puVar8 = *puVar8 ^ (ulonglong)(uVar5 == 0) * (*puVar8 ^ 1);
if (uVar5 == 0) {
*pDVar1 = DVar3;
goto LAB_14030e831;
}
puVar6 = (undefined8 *)((longlong)puVar6 + 1);
} while (puVar6 < &DAT_00000400);
FUN_14019fb60(pDVar1);
}
LAB_14030e831:
local_48[0] = param_2;
local_40 = param_3;
uVar5 = (**(code **)(param_1 + 0x1f8))(local_48);
puVar2 = *(ulonglong **)
        (*(longlong *)(param_1 + 0x1f0) + (uVar5 % *(ulonglong *)(param_1 + 0x1e8)) * 8);
do {
if (puVar2 == (ulonglong *)0x0) {
LAB_14030e885:
puVar6 = (undefined8 *)FUN_14018b280(0x98,0);
if (puVar6 != (undefined8 *)0x0) {
*puVar6 = &PTR_LAB_140b64458;
puVar6[0xc] = 0;
puVar6[0xd] = 0;
FUN_140326d00(puVar6 + 0xe);
puVar6[2] = 1;
puVar6[1] = 0;
puVar6[3] = 0;
puVar6[4] = 0;
puVar6[7] = 0;
*(undefined4 *)(puVar6 + 6) = 0;
puVar6[8] = 0;
puVar6[9] = 0;
puVar6[10] = 0;
*(undefined4 *)(puVar6 + 0xb) = 0;
puVar7 = puVar6;
}
iVar4 = FUN_1403258c0(puVar7,param_1,param_2,param_3);
if (iVar4 < 0) {
if (puVar7 != (undefined8 *)0x0) {
FUN_140325690(puVar7);
FUN_14018b900(puVar7,0);
}
}
else {
LAB_14030e8f9:
*param_4 = puVar7;
iVar4 = 0;
}
if (*puVar8 < 2) {
*pDVar1 = 0;
*puVar8 = 0;
if (*(longlong *)(param_1 + 0x1c8) != 0) {
if (*(longlong *)(param_1 + 0x1d0) == 0) {
hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
LOCK();
puVar8 = (ulonglong *)(param_1 + 0x1d0);
uVar5 = *puVar8;
*puVar8 = *puVar8 ^ (ulonglong)(uVar5 == 0) * (*puVar8 ^ (ulonglong)hObject);
if (uVar5 != 0) {
CloseHandle(hObject);
}
}
SetEvent(*(HANDLE *)(param_1 + 0x1d0));
}
}
else {
*puVar8 = *puVar8 - 1;
}
return iVar4;
}
if ((uVar5 == *puVar2) &&
(iVar4 = (**(code **)(param_1 + 0x200))(local_48,puVar2 + 2), iVar4 != 0)) {
if (puVar2 + 4 != (ulonglong *)0x0) {
puVar7 = (undefined8 *)puVar2[4];
(**(code **)*puVar7)(puVar7);
goto LAB_14030e8f9;
}
goto LAB_14030e885;
}
puVar2 = (ulonglong *)puVar2[1];
} while( true );
}



int FUN_14030e9c0(longlong param_1)

{
int *piVar1;
int iVar2;

LOCK();
piVar1 = (int *)(param_1 + 8);
iVar2 = *piVar1;
*piVar1 = *piVar1 + 1;
if (iVar2 + 1 == 1) {
FUN_1401984d0(param_1 + 0x50);
}
return iVar2 + 1;
}



int FUN_14030e9f0(longlong param_1)

{
int *piVar1;
int iVar2;
undefined4 local_18 [4];

LOCK();
piVar1 = (int *)(param_1 + 8);
iVar2 = *piVar1;
*piVar1 = *piVar1 + -1;
iVar2 = iVar2 + -1;
if (iVar2 == 0) {
FUN_140198370(param_1 + 0x50,param_1,*(longlong *)(param_1 + 0x10) + 0x60);
iVar2 = 0;
}
else if (iVar2 == -1) {
local_18[0] = 0;
if (*(longlong *)(param_1 + 0x28) != 0) {
iVar2 = FUN_14030d8a0(param_1,local_18);
if (iVar2 == 0) {
LOCK();
*(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
FUN_140198370(param_1 + 0x50,param_1,*(longlong *)(param_1 + 0x10) + 0x60);
}
}
FUN_14030d400(param_1);
FUN_14018b900(param_1,0);
return 0;
}
return iVar2;
}



undefined8 * FUN_14030ea80(undefined8 *param_1)

{
    ulonglong uVar1;
    undefined8 uVar2;

    *param_1 = 0;
    uVar1 = FUN_1401a40c0(1);
    param_1[1] = uVar1;
    uVar2 = SUB168(ZEXT816(8) * ZEXT816(uVar1),0);
    if (SUB168(ZEXT816(8) * ZEXT816(uVar1) >> 0x40,0) != 0) {
        uVar2 = 0xffffffffffffffff;
    }
    uVar2 = FUN_14018b280(uVar2,0);
    param_1[2] = uVar2;
    FUN_1407e4830(uVar2,0,param_1[1] << 3);
    param_1[3] = &LAB_140325610;
    param_1[4] = FUN_140325650;
    return param_1;
}



undefined8 FUN_14030eb00(ulonglong *param_1,longlong param_2,uint *param_3)

{
    ulonglong uVar1;
    uint uVar2;
    ulonglong uVar3;

    uVar1 = *(longlong *)(param_3 + 2) + param_2;
    if (*param_1 <= uVar1) {
        uVar2 = *param_3;
        uVar3 = *(longlong *)(param_3 + 2) + (ulonglong)uVar2 * 4 + param_2;
        if (uVar3 < param_1[1] || uVar3 == param_1[1]) {
            uVar3 = 0;
            if (uVar2 != 0) {
                uVar3 = uVar1;
            }
            uVar1 = *(longlong *)(param_3 + 4) + param_2;
            *(ulonglong *)(param_3 + 2) = uVar3;
            if ((*param_1 <= uVar1) &&
                (uVar3 = *(longlong *)(param_3 + 4) + (ulonglong)uVar2 * 0xc + param_2,
                        uVar3 < param_1[1] || uVar3 == param_1[1])) {
                uVar3 = 0;
                if (uVar2 != 0) {
                    uVar3 = uVar1;
                }
                *(ulonglong *)(param_3 + 4) = uVar3;
                return 0;
            }
            return 0x80004005;
        }
    }
    return 0x80004005;
}



undefined8 FUN_14030eb90(ulonglong *param_1,longlong param_2,uint *param_3)

{
    ulonglong uVar1;
    uint uVar2;
    ulonglong uVar3;

    uVar1 = *(longlong *)(param_3 + 2) + param_2;
    if (*param_1 <= uVar1) {
        uVar2 = *param_3;
        uVar3 = *(longlong *)(param_3 + 2) + (ulonglong)uVar2 * 4 + param_2;
        if (uVar3 < param_1[1] || uVar3 == param_1[1]) {
            uVar3 = 0;
            if (uVar2 != 0) {
                uVar3 = uVar1;
            }
            *(ulonglong *)(param_3 + 2) = uVar3;
            uVar1 = *(longlong *)(param_3 + 4) + param_2;
            if ((*param_1 <= uVar1) &&
                (uVar3 = *(longlong *)(param_3 + 4) + (ulonglong)uVar2 + param_2,
                        uVar3 < param_1[1] || uVar3 == param_1[1])) {
                uVar3 = 0;
                if (uVar2 != 0) {
                    uVar3 = uVar1;
                }
                *(ulonglong *)(param_3 + 4) = uVar3;
                return 0;
            }
        }
    }
    return 0x80004005;
}



undefined8 FUN_14030ebf0(ulonglong *param_1,longlong param_2,uint *param_3)

{
    ulonglong uVar1;
    uint uVar2;
    ulonglong uVar3;

    uVar1 = *(longlong *)(param_3 + 2) + param_2;
    if (*param_1 <= uVar1) {
        uVar2 = *param_3;
        uVar3 = *(longlong *)(param_3 + 2) + (ulonglong)uVar2 * 4 + param_2;
        if (uVar3 < param_1[1] || uVar3 == param_1[1]) {
            uVar3 = 0;
            if (uVar2 != 0) {
                uVar3 = uVar1;
            }
            uVar1 = *(longlong *)(param_3 + 4) + param_2;
            *(ulonglong *)(param_3 + 2) = uVar3;
            if ((*param_1 <= uVar1) &&
                (uVar3 = *(longlong *)(param_3 + 4) + (ulonglong)uVar2 * 6 + param_2,
                        uVar3 < param_1[1] || uVar3 == param_1[1])) {
                uVar3 = 0;
                if (uVar2 != 0) {
                    uVar3 = uVar1;
                }
                *(ulonglong *)(param_3 + 4) = uVar3;
                return 0;
            }
            return 0x80004005;
        }
    }
    return 0x80004005;
}



undefined8 FUN_14030ec80(ulonglong *param_1,longlong param_2,uint *param_3)

{
    ulonglong uVar1;
    uint uVar2;
    ulonglong uVar3;

    uVar1 = *(longlong *)(param_3 + 2) + param_2;
    if (*param_1 <= uVar1) {
        uVar2 = *param_3;
        uVar3 = *(longlong *)(param_3 + 2) + (ulonglong)uVar2 * 4 + param_2;
        if (uVar3 < param_1[1] || uVar3 == param_1[1]) {
            uVar3 = 0;
            if (uVar2 != 0) {
                uVar3 = uVar1;
            }
            *(ulonglong *)(param_3 + 2) = uVar3;
            uVar1 = *(longlong *)(param_3 + 4) + param_2;
            if ((*param_1 <= uVar1) &&
                (uVar3 = *(longlong *)(param_3 + 4) + (ulonglong)uVar2 * 8 + param_2,
                        uVar3 < param_1[1] || uVar3 == param_1[1])) {
                uVar3 = 0;
                if (uVar2 != 0) {
                    uVar3 = uVar1;
                }
                *(ulonglong *)(param_3 + 4) = uVar3;
                return 0;
            }
        }
    }
    return 0x80004005;
}



undefined8 FUN_14030ece0(ulonglong *param_1,longlong param_2,uint *param_3)

{
    ulonglong uVar1;
    ulonglong uVar2;

    uVar1 = *(longlong *)(param_3 + 2) + param_2;
    if ((*param_1 <= uVar1) &&
        (uVar2 = (ulonglong)*param_3 * 0x70 + *(longlong *)(param_3 + 2) + param_2,
                uVar2 < param_1[1] || uVar2 == param_1[1])) {
        uVar2 = 0;
        if (*param_3 != 0) {
            uVar2 = uVar1;
        }
        *(ulonglong *)(param_3 + 2) = uVar2;
        return 0;
    }
    return 0x80004005;
}



undefined8 FUN_14030ed20(ulonglong *param_1,longlong param_2,uint *param_3)

{
    ulonglong uVar1;
    uint uVar2;
    ulonglong uVar3;

    uVar1 = *(longlong *)(param_3 + 2) + param_2;
    if (*param_1 <= uVar1) {
        uVar2 = *param_3;
        uVar3 = *(longlong *)(param_3 + 2) + (ulonglong)uVar2 * 4 + param_2;
        if (uVar3 < param_1[1] || uVar3 == param_1[1]) {
            uVar3 = 0;
            if (uVar2 != 0) {
                uVar3 = uVar1;
            }
            *(ulonglong *)(param_3 + 2) = uVar3;
            uVar1 = *(longlong *)(param_3 + 4) + param_2;
            if ((*param_1 <= uVar1) &&
                (uVar3 = *(longlong *)(param_3 + 4) + (ulonglong)uVar2 * 2 + param_2,
                        uVar3 < param_1[1] || uVar3 == param_1[1])) {
                uVar3 = 0;
                if (uVar2 != 0) {
                    uVar3 = uVar1;
                }
                *(ulonglong *)(param_3 + 4) = uVar3;
                return 0;
            }
        }
    }
    return 0x80004005;
}



undefined8 FUN_14030ed80(ulonglong *param_1,longlong param_2,uint *param_3)

{
    ulonglong uVar1;
    ulonglong uVar2;
    longlong lVar3;
    longlong lVar4;
    uint uVar5;
    ulonglong uVar6;

    uVar6 = *(longlong *)(param_3 + 2) + param_2;
    if (*param_1 <= uVar6) {
        uVar5 = *param_3;
        uVar1 = *(longlong *)(param_3 + 2) + (ulonglong)uVar5 * 0x20 + param_2;
        if (uVar1 < param_1[1] || uVar1 == param_1[1]) {
            uVar1 = 0;
            if (uVar5 != 0) {
                uVar1 = uVar6;
            }
            uVar6 = 0;
            *(ulonglong *)(param_3 + 2) = uVar1;
            lVar4 = (ulonglong)uVar5 * 0x20 + uVar1;
            if (uVar5 != 0) {
                do {
                    lVar3 = uVar6 * 0x20 + param_1[2] + *(longlong *)(param_3 + 2);
                    uVar1 = *(longlong *)(lVar3 + 0x10) + lVar4;
                    if (uVar1 < *param_1) {
                        return 0x80004005;
                    }
                    uVar5 = *(uint *)(lVar3 + 8);
                    uVar2 = *(longlong *)(lVar3 + 0x10) + (ulonglong)uVar5 * 4 + lVar4;
                    if (param_1[1] <= uVar2 && uVar2 != param_1[1]) {
                        return 0x80004005;
                    }
                    uVar2 = 0;
                    if (uVar5 != 0) {
                        uVar2 = uVar1;
                    }
                    *(ulonglong *)(lVar3 + 0x10) = uVar2;
                    uVar1 = *(longlong *)(lVar3 + 0x18) + lVar4;
                    if (uVar1 < *param_1) {
                        return 0x80004005;
                    }
                    uVar2 = *(longlong *)(lVar3 + 0x18) + (ulonglong)uVar5 * 2 + lVar4;
                    if (param_1[1] <= uVar2 && uVar2 != param_1[1]) {
                        return 0x80004005;
                    }
                    uVar2 = 0;
                    if (uVar5 != 0) {
                        uVar2 = uVar1;
                    }
                    uVar5 = (int)uVar6 + 1;
                    uVar6 = (ulonglong)uVar5;
                    *(ulonglong *)(lVar3 + 0x18) = uVar2;
                } while (uVar5 < *param_3);
            }
            return 0;
        }
    }
    return 0x80004005;
}



undefined8 FUN_14030ee60(ulonglong *param_1,longlong param_2,uint *param_3)

{
    ulonglong uVar1;
    ulonglong uVar2;
    undefined8 uVar3;
    uint uVar4;
    ulonglong uVar5;

    uVar1 = *(longlong *)(param_3 + 2) + param_2;
    if ((*param_1 <= uVar1) &&
        (uVar4 = *param_3, uVar2 = *(longlong *)(param_3 + 2) + (ulonglong)uVar4 * 0x20 + param_2,
                uVar2 < param_1[1] || uVar2 == param_1[1])) {
        uVar5 = 0;
        uVar2 = uVar5;
        if (uVar4 != 0) {
            uVar2 = uVar1;
        }
        *(ulonglong *)(param_3 + 2) = uVar2;
        if (uVar4 != 0) {
            do {
                uVar3 = FUN_14030eb90(param_1);
                if ((int)uVar3 < 0) {
                    return uVar3;
                }
                uVar4 = (int)uVar5 + 1;
                uVar5 = (ulonglong)uVar4;
            } while (uVar4 < *param_3);
        }
        return 0;
    }
    return 0x80004005;
}



undefined8 FUN_14030ef10(ulonglong *param_1,longlong param_2,ulonglong *param_3)

{
    longlong lVar1;
    uint uVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    uint *puVar5;

    if (*param_3 == 0xffffffffffffffff) {
        *param_3 = 0;
        return 0;
    }
    uVar4 = param_2 + *param_3;
    if ((*param_1 <= uVar4) && (uVar4 + 0x18 < param_1[1] || uVar4 + 0x18 == param_1[1])) {
        *param_3 = uVar4;
        lVar1 = uVar4 + 0x20;
        puVar5 = (uint *)(param_1[2] + uVar4);
        uVar4 = *(longlong *)(puVar5 + 2) + lVar1;
        if (*param_1 <= uVar4) {
            uVar2 = *puVar5;
            uVar3 = *(longlong *)(puVar5 + 2) + (ulonglong)uVar2 * 4 + lVar1;
            if (uVar3 < param_1[1] || uVar3 == param_1[1]) {
                uVar3 = 0;
                if (uVar2 != 0) {
                    uVar3 = uVar4;
                }
                *(ulonglong *)(puVar5 + 2) = uVar3;
                uVar4 = *(longlong *)(puVar5 + 4) + lVar1;
                if ((*param_1 <= uVar4) &&
                    (uVar3 = *(longlong *)(puVar5 + 4) + (ulonglong)uVar2 * 2 + lVar1,
                            uVar3 < param_1[1] || uVar3 == param_1[1])) {
                    uVar3 = 0;
                    if (uVar2 != 0) {
                        uVar3 = uVar4;
                    }
                    *(ulonglong *)(puVar5 + 4) = uVar3;
                    return 0;
                }
            }
        }
    }
    return 0x80004005;
}



undefined8 FUN_14030efa0(ulonglong *param_1,longlong param_2,uint *param_3)

{
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    longlong lVar5;
    uint uVar6;
    ulonglong uVar7;
    longlong lVar8;

    uVar7 = *(longlong *)(param_3 + 2) + param_2;
    if (uVar7 < *param_1) {
        return 0x80004005;
    }
    uVar6 = *param_3;
    uVar3 = *(longlong *)(param_3 + 2) + (ulonglong)uVar6 * 0x30 + param_2;
    if (param_1[1] <= uVar3 && uVar3 != param_1[1]) {
        return 0x80004005;
    }
    uVar3 = 0;
    if (uVar6 != 0) {
        uVar3 = uVar7;
    }
    uVar7 = 0;
    *(ulonglong *)(param_3 + 2) = uVar3;
    lVar8 = (ulonglong)uVar6 * 0x30 + uVar3;
    if (uVar6 != 0) {
        do {
            lVar1 = *(longlong *)(param_3 + 2);
            lVar5 = uVar7 * 0x30 + param_1[2];
            lVar2 = *(longlong *)(lVar5 + 0x28 + lVar1);
            uVar3 = lVar2 + lVar8;
            if ((uVar3 < *param_1) ||
                (uVar6 = *(uint *)(lVar5 + 0x20 + lVar1), uVar4 = lVar2 + (ulonglong)uVar6 * 2 + lVar8,
                        param_1[1] <= uVar4 && uVar4 != param_1[1])) {
                return 0x80004005;
            }
            uVar4 = 0;
            if (uVar6 != 0) {
                uVar4 = uVar3;
            }
            uVar6 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar6;
            *(ulonglong *)(lVar5 + 0x28 + lVar1) = uVar4;
        } while (uVar6 < *param_3);
    }
    return 0;
}



undefined8 FUN_14030f080(ulonglong *param_1,longlong param_2,uint *param_3)

{
    ulonglong uVar1;
    ulonglong uVar2;
    undefined8 uVar3;
    uint uVar4;
    ulonglong uVar5;

    uVar1 = *(longlong *)(param_3 + 2) + param_2;
    if ((*param_1 <= uVar1) &&
        (uVar4 = *param_3, uVar2 = *(longlong *)(param_3 + 2) + (ulonglong)uVar4 * 0xb8 + param_2,
                uVar2 < param_1[1] || uVar2 == param_1[1])) {
        uVar5 = 0;
        uVar2 = uVar5;
        if (uVar4 != 0) {
            uVar2 = uVar1;
        }
        *(ulonglong *)(param_3 + 2) = uVar2;
        if (uVar4 != 0) {
            do {
                uVar3 = FUN_14030aba0(param_1);
                if ((int)uVar3 < 0) {
                    return uVar3;
                }
                uVar4 = (int)uVar5 + 1;
                uVar5 = (ulonglong)uVar4;
            } while (uVar4 < *param_3);
        }
        return 0;
    }
    return 0x80004005;
}



undefined8 FUN_14030f130(ulonglong *param_1,longlong param_2,uint *param_3)

{
    ulonglong uVar1;
    uint uVar2;
    ulonglong uVar3;
    undefined8 uVar4;
    uint uVar5;
    ulonglong uVar6;

    uVar1 = *(longlong *)(param_3 + 2) + param_2;
    if (*param_1 <= uVar1) {
        uVar2 = *param_3;
        uVar3 = *(longlong *)(param_3 + 2) + (ulonglong)uVar2 * 0x160 + param_2;
        if (uVar3 < param_1[1] || uVar3 == param_1[1]) {
            uVar6 = 0;
            uVar3 = uVar6;
            if (uVar2 != 0) {
                uVar3 = uVar1;
            }
            *(ulonglong *)(param_3 + 2) = uVar3;
            if (uVar2 != 0) {
                do {
                    uVar4 = FUN_14030ad40(param_1,(ulonglong)uVar2 * 0x160 + uVar3,
                                          uVar6 * 0x160 + param_1[2] + *(longlong *)(param_3 + 2));
                    if ((int)uVar4 < 0) {
                        return uVar4;
                    }
                    uVar5 = (int)uVar6 + 1;
                    uVar6 = (ulonglong)uVar5;
                } while (uVar5 < *param_3);
            }
            return 0;
        }
    }
    return 0x80004005;
}



undefined8 FUN_14030f1e0(ulonglong *param_1,longlong param_2,uint *param_3)

{
    ulonglong uVar1;
    uint uVar2;
    ulonglong uVar3;
    undefined8 uVar4;
    uint uVar5;
    ulonglong uVar6;

    uVar1 = *(longlong *)(param_3 + 2) + param_2;
    if (*param_1 <= uVar1) {
        uVar2 = *param_3;
        uVar3 = *(longlong *)(param_3 + 2) + (ulonglong)uVar2 * 0x98 + param_2;
        if (uVar3 < param_1[1] || uVar3 == param_1[1]) {
            uVar6 = 0;
            uVar3 = uVar6;
            if (uVar2 != 0) {
                uVar3 = uVar1;
            }
            *(ulonglong *)(param_3 + 2) = uVar3;
            if (uVar2 != 0) {
                do {
                    uVar4 = FUN_14030aed0(param_1,((ulonglong)uVar2 * 0x98 + 0xf & 0xfffffffffffffff0) + uVar3
                            ,uVar6 * 0x98 + param_1[2] + *(longlong *)(param_3 + 2));
                    if ((int)uVar4 < 0) {
                        return uVar4;
                    }
                    uVar5 = (int)uVar6 + 1;
                    uVar6 = (ulonglong)uVar5;
                } while (uVar5 < *param_3);
            }
            return 0;
        }
    }
    return 0x80004005;
}



undefined8 FUN_14030f290(ulonglong *param_1,longlong param_2,uint *param_3)

{
    ulonglong uVar1;
    uint uVar2;
    ulonglong uVar3;
    undefined8 uVar4;
    uint uVar5;
    ulonglong uVar6;

    uVar1 = *(longlong *)(param_3 + 2) + param_2;
    if (*param_1 <= uVar1) {
        uVar2 = *param_3;
        uVar3 = *(longlong *)(param_3 + 2) + (ulonglong)uVar2 * 0x30 + param_2;
        if (uVar3 < param_1[1] || uVar3 == param_1[1]) {
            uVar6 = 0;
            uVar3 = uVar6;
            if (uVar2 != 0) {
                uVar3 = uVar1;
            }
            *(ulonglong *)(param_3 + 2) = uVar3;
            if (uVar2 != 0) {
                do {
                    uVar4 = FUN_14030b010(param_1,(ulonglong)uVar2 * 0x30 + uVar3,
                                          uVar6 * 0x30 + param_1[2] + *(longlong *)(param_3 + 2));
                    if ((int)uVar4 < 0) {
                        return uVar4;
                    }
                    uVar5 = (int)uVar6 + 1;
                    uVar6 = (ulonglong)uVar5;
                } while (uVar5 < *param_3);
            }
            return 0;
        }
    }
    return 0x80004005;
}



undefined8 FUN_14030f340(ulonglong *param_1,longlong param_2,uint *param_3)

{
    ulonglong uVar1;
    ulonglong uVar2;
    undefined8 uVar3;
    uint uVar4;
    ulonglong uVar5;

    uVar1 = *(longlong *)(param_3 + 2) + param_2;
    if ((*param_1 <= uVar1) &&
        (uVar4 = *param_3, uVar2 = *(longlong *)(param_3 + 2) + (ulonglong)uVar4 * 200 + param_2,
                uVar2 < param_1[1] || uVar2 == param_1[1])) {
        uVar5 = 0;
        uVar2 = uVar5;
        if (uVar4 != 0) {
            uVar2 = uVar1;
        }
        *(ulonglong *)(param_3 + 2) = uVar2;
        if (uVar4 != 0) {
            do {
                uVar3 = FUN_14030b170(param_1);
                if ((int)uVar3 < 0) {
                    return uVar3;
                }
                uVar4 = (int)uVar5 + 1;
                uVar5 = (ulonglong)uVar4;
            } while (uVar4 < *param_3);
        }
        return 0;
    }
    return 0x80004005;
}



undefined8 FUN_14030f3f0(ulonglong *param_1,longlong param_2,uint *param_3)

{
    ulonglong uVar1;
    ulonglong uVar2;
    undefined8 uVar3;
    uint uVar4;
    ulonglong uVar5;
    longlong lVar6;
    longlong lVar7;

    uVar1 = *(longlong *)(param_3 + 2) + param_2;
    if (uVar1 < *param_1) {
        return 0x80004005;
    }
    uVar4 = *param_3;
    uVar2 = (ulonglong)uVar4 * 0x28 + *(longlong *)(param_3 + 2) + param_2;
    if (param_1[1] <= uVar2 && uVar2 != param_1[1]) {
        return 0x80004005;
    }
    uVar5 = 0;
    uVar2 = uVar5;
    if (uVar4 != 0) {
        uVar2 = uVar1;
    }
    *(ulonglong *)(param_3 + 2) = uVar2;
    lVar7 = ((ulonglong)uVar4 * 0x28 + 0xf & 0xfffffffffffffff0) + uVar2;
    if (uVar4 != 0) {
        do {
            lVar6 = param_1[2] + uVar5 * 0x28 + *(longlong *)(param_3 + 2);
            uVar3 = FUN_14030ed80(param_1,lVar7,lVar6 + 8);
            if ((int)uVar3 < 0) {
                return uVar3;
            }
            uVar3 = FUN_14030ee60(param_1,lVar7,lVar6 + 0x18);
            if ((int)uVar3 < 0) {
                return uVar3;
            }
            uVar4 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar4;
        } while (uVar4 < *param_3);
    }
    return 0;
}



undefined8 FUN_14030f4e0(ulonglong *param_1,longlong param_2,uint *param_3)

{
    ulonglong uVar1;
    ulonglong uVar2;
    undefined8 uVar3;
    uint uVar4;
    ulonglong uVar5;

    uVar1 = *(longlong *)(param_3 + 2) + param_2;
    if ((uVar1 < *param_1) ||
        (uVar4 = *param_3, uVar2 = *(longlong *)(param_3 + 2) + (ulonglong)uVar4 * 0x50 + param_2,
                param_1[1] <= uVar2 && uVar2 != param_1[1])) {
        return 0x80004005;
    }
    uVar5 = 0;
    uVar2 = uVar5;
    if (uVar4 != 0) {
        uVar2 = uVar1;
    }
    *(ulonglong *)(param_3 + 2) = uVar2;
    if (uVar4 != 0) {
        do {
            uVar3 = FUN_14030ed20(param_1);
            if ((int)uVar3 < 0) {
                return uVar3;
            }
            uVar3 = FUN_14030ed20(param_1);
            if ((int)uVar3 < 0) {
                return uVar3;
            }
            uVar3 = FUN_14030ed20(param_1);
            if ((int)uVar3 < 0) {
                return uVar3;
            }
            uVar4 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar4;
        } while (uVar4 < *param_3);
    }
    return 0;
}



undefined8 FUN_14030f5b0(ulonglong *param_1,longlong param_2,uint *param_3)

{
    ulonglong uVar1;
    ulonglong uVar2;
    undefined8 uVar3;
    uint uVar4;
    ulonglong uVar5;

    uVar1 = *(longlong *)(param_3 + 2) + param_2;
    if ((*param_1 <= uVar1) &&
        (uVar4 = *param_3, uVar2 = *(longlong *)(param_3 + 2) + (ulonglong)uVar4 * 0x40 + param_2,
                uVar2 < param_1[1] || uVar2 == param_1[1])) {
        uVar5 = 0;
        uVar2 = uVar5;
        if (uVar4 != 0) {
            uVar2 = uVar1;
        }
        *(ulonglong *)(param_3 + 2) = uVar2;
        if (uVar4 != 0) {
            do {
                uVar3 = FUN_14030aab0(param_1);
                if ((int)uVar3 < 0) {
                    return uVar3;
                }
                uVar4 = (int)uVar5 + 1;
                uVar5 = (ulonglong)uVar4;
            } while (uVar4 < *param_3);
        }
        return 0;
    }
    return 0x80004005;
}



undefined8 FUN_14030f660(ulonglong *param_1,longlong param_2,uint *param_3)

{
    ulonglong uVar1;
    uint uVar2;
    ulonglong uVar3;
    undefined8 uVar4;
    uint uVar5;
    ulonglong uVar6;

    uVar1 = *(longlong *)(param_3 + 2) + param_2;
    if (*param_1 <= uVar1) {
        uVar2 = *param_3;
        uVar3 = *(longlong *)(param_3 + 2) + (ulonglong)uVar2 * 0x68 + param_2;
        if (uVar3 < param_1[1] || uVar3 == param_1[1]) {
            uVar6 = 0;
            uVar3 = uVar6;
            if (uVar2 != 0) {
                uVar3 = uVar1;
            }
            *(ulonglong *)(param_3 + 2) = uVar3;
            if (uVar2 != 0) {
                do {
                    uVar4 = FUN_14030ca00(param_1,((ulonglong)uVar2 * 0x68 + 0xf & 0xfffffffffffffff0) + uVar3
                            ,uVar6 * 0x68 + param_1[2] + *(longlong *)(param_3 + 2));
                    if ((int)uVar4 < 0) {
                        return uVar4;
                    }
                    uVar5 = (int)uVar6 + 1;
                    uVar6 = (ulonglong)uVar5;
                } while (uVar5 < *param_3);
            }
            return 0;
        }
    }
    return 0x80004005;
}



undefined8 FUN_14030f710(ulonglong *param_1,longlong param_2,uint *param_3)

{
    ulonglong uVar1;
    ulonglong uVar2;
    undefined8 uVar3;
    uint uVar4;
    ulonglong uVar5;

    uVar1 = *(longlong *)(param_3 + 2) + param_2;
    if ((*param_1 <= uVar1) &&
        (uVar4 = *param_3, uVar2 = *(longlong *)(param_3 + 2) + (ulonglong)uVar4 * 0xa0 + param_2,
                uVar2 < param_1[1] || uVar2 == param_1[1])) {
        uVar5 = 0;
        uVar2 = uVar5;
        if (uVar4 != 0) {
            uVar2 = uVar1;
        }
        *(ulonglong *)(param_3 + 2) = uVar2;
        if (uVar4 != 0) {
            do {
                uVar3 = FUN_14030c930(param_1);
                if ((int)uVar3 < 0) {
                    return uVar3;
                }
                uVar4 = (int)uVar5 + 1;
                uVar5 = (ulonglong)uVar4;
            } while (uVar4 < *param_3);
        }
        return 0;
    }
    return 0x80004005;
}



undefined8 FUN_14030f7c0(ulonglong *param_1,longlong param_2,uint *param_3)

{
    ulonglong uVar1;
    ulonglong uVar2;
    undefined8 uVar3;
    uint uVar4;
    ulonglong uVar5;

    uVar1 = *(longlong *)(param_3 + 2) + param_2;
    if ((*param_1 <= uVar1) &&
        (uVar4 = *param_3, uVar2 = *(longlong *)(param_3 + 2) + (ulonglong)uVar4 * 0x20 + param_2,
                uVar2 < param_1[1] || uVar2 == param_1[1])) {
        uVar5 = 0;
        uVar2 = uVar5;
        if (uVar4 != 0) {
            uVar2 = uVar1;
        }
        *(ulonglong *)(param_3 + 2) = uVar2;
        if (uVar4 != 0) {
            do {
                uVar3 = FUN_14030ed20(param_1);
                if ((int)uVar3 < 0) {
                    return uVar3;
                }
                uVar4 = (int)uVar5 + 1;
                uVar5 = (ulonglong)uVar4;
            } while (uVar4 < *param_3);
        }
        return 0;
    }
    return 0x80004005;
}



void FUN_14030f870(longlong param_1)

{
ushort uVar1;
longlong lVar2;
byte *pbVar3;
ulonglong uVar4;
uint uVar5;
short sVar6;
short sVar7;
ulonglong uVar8;
undefined4 *puVar9;

lVar2 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x38))();
if (lVar2 != 0) {
uVar5 = 0;
if (*(int *)(*(longlong *)(param_1 + 0x40) + 0x18) != 0) {
puVar9 = (undefined4 *)(lVar2 + 0xc);
do {
uVar8 = (ulonglong)uVar5;
uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x140) * uVar8 + *(longlong *)(param_1 + 0xe8));
*(ulonglong *)(puVar9 + -3) =
CONCAT26(((uVar1 >> 8) - 0x80) * 0x100 + (uVar1 & 0xff),
*(undefined6 *)
((ulonglong)uVar5 * *(longlong *)(param_1 + 0x130) +
*(longlong *)(param_1 + 0xd8)));
pbVar3 = (byte *)((ulonglong)uVar5 * *(longlong *)(param_1 + 0x148) +
                  *(longlong *)(param_1 + 0xf0));
sVar7 = (ushort)pbVar3[1] * 0x100 + (ushort)*pbVar3;
uVar4 = (ulonglong)uVar5;
uVar5 = uVar5 + 1;
pbVar3 = (byte *)(uVar4 * *(longlong *)(param_1 + 0x138) + *(longlong *)(param_1 + 0xe0));
sVar6 = (ushort)pbVar3[1] * 0x100 + (ushort)*pbVar3;
puVar9[-1] = (uint)(byte)((ushort)sVar7 >> 8) * 0x1000000 +
(uint)(byte)((ushort)sVar6 >> 8) * 0x100 + (uint)(byte)sVar6 * 0x10000 +
(uint)(byte)sVar7;
*puVar9 = *(undefined4 *)
        (uVar8 * *(longlong *)(param_1 + 0x170) + *(longlong *)(param_1 + 0x118));
puVar9 = puVar9 + 4;
} while (uVar5 < *(uint *)(*(longlong *)(param_1 + 0x40) + 0x18));
}
(**(code **)(**(longlong **)(param_1 + 0xa0) + 0x40))();
}
return;
}



void FUN_14030fa00(longlong param_1)

{
ushort uVar1;
longlong lVar2;
byte *pbVar3;
ulonglong uVar4;
uint uVar5;
short sVar6;
short sVar7;
ulonglong uVar8;
undefined4 *puVar9;

lVar2 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x38))();
if (lVar2 != 0) {
uVar5 = 0;
if (*(int *)(*(longlong *)(param_1 + 0x40) + 0x18) != 0) {
puVar9 = (undefined4 *)(lVar2 + 0xc);
do {
uVar8 = (ulonglong)uVar5;
uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x140) * uVar8 + *(longlong *)(param_1 + 0xe8));
*(ulonglong *)(puVar9 + -3) =
CONCAT26(((uVar1 >> 8) - 0x80) * 0x100 + (uVar1 & 0xff),
*(undefined6 *)
((ulonglong)uVar5 * *(longlong *)(param_1 + 0x130) +
*(longlong *)(param_1 + 0xd8)));
pbVar3 = (byte *)((ulonglong)uVar5 * *(longlong *)(param_1 + 0x148) +
                  *(longlong *)(param_1 + 0xf0));
sVar7 = (ushort)pbVar3[1] * 0x100 + (ushort)*pbVar3;
pbVar3 = (byte *)((ulonglong)uVar5 * *(longlong *)(param_1 + 0x138) +
                  *(longlong *)(param_1 + 0xe0));
sVar6 = (ushort)pbVar3[1] * 0x100 + (ushort)*pbVar3;
puVar9[-1] = (uint)(byte)((ushort)sVar7 >> 8) * 0x1000000 +
(uint)(byte)((ushort)sVar6 >> 8) * 0x100 + (uint)(byte)sVar6 * 0x10000 +
(uint)(byte)sVar7;
*puVar9 = *(undefined4 *)
        ((ulonglong)uVar5 * *(longlong *)(param_1 + 0x170) +
         *(longlong *)(param_1 + 0x118));
puVar9[1] = *(undefined4 *)
(*(longlong *)(param_1 + 0x150) * uVar8 + *(longlong *)(param_1 + 0xf8));
uVar4 = (ulonglong)uVar5;
uVar5 = uVar5 + 1;
puVar9[2] = *(undefined4 *)
(uVar4 * *(longlong *)(param_1 + 0x158) + *(longlong *)(param_1 + 0x100));
puVar9[3] = *(undefined4 *)
(*(longlong *)(param_1 + 0x160) * uVar8 + *(longlong *)(param_1 + 0x108));
puVar9[4] = *(undefined4 *)
(uVar8 * *(longlong *)(param_1 + 0x168) + *(longlong *)(param_1 + 0x110));
puVar9 = puVar9 + 8;
} while (uVar5 < *(uint *)(*(longlong *)(param_1 + 0x40) + 0x18));
}
(**(code **)(**(longlong **)(param_1 + 0xa0) + 0x40))();
}
return;
}



void FUN_14030fbf0(longlong param_1)

{
short sVar1;
short sVar2;
longlong lVar3;
byte *pbVar4;
short *psVar5;
short sVar6;
longlong lVar7;
int *piVar8;
ulonglong uVar9;
uint uVar10;

lVar3 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x38))(*(longlong **)(param_1 + 0xa0),0,0);
if (lVar3 != 0) {
uVar10 = 0;
if (*(int *)(*(longlong *)(param_1 + 0x40) + 0x18) != 0) {
piVar8 = (int *)(lVar3 + 0x10);
do {
uVar9 = (ulonglong)uVar10;
if (*(int *)(param_1 + 0x188) == 1) {
lVar3 = *(longlong *)(param_1 + 0xd8);
lVar7 = uVar9 * *(longlong *)(param_1 + 0x130);
piVar8[-4] = *(int *)(lVar7 + lVar3);
piVar8[-3] = *(int *)(lVar7 + 4 + lVar3);
piVar8[-2] = *(int *)(lVar7 + 8 + lVar3);
}
else {
psVar5 = (short *)(uVar9 * *(longlong *)(param_1 + 0x130) + *(longlong *)(param_1 + 0xd8))
;
sVar6 = *psVar5;
sVar1 = psVar5[1];
sVar2 = psVar5[2];
piVar8[-4] = (int)((float)(int)sVar6 * 0.0009765625);
piVar8[-3] = (int)((float)(int)sVar1 * 0.0009765625);
piVar8[-2] = (int)(SUB164(ZEXT1216(CONCAT48((float)(int)sVar2,
                                   CONCAT44((float)(int)sVar1,(float)(int)sVar6))
) >> 0x40,0) * 0.0009765625);
}
uVar10 = uVar10 + 1;
pbVar4 = (byte *)(uVar9 * *(longlong *)(param_1 + 0x138) + *(longlong *)(param_1 + 0xe0));
sVar6 = (ushort)pbVar4[1] * 0x100 + (ushort)*pbVar4;
piVar8[-1] = (uint)(byte)((ushort)sVar6 >> 8) * 0x100 + (uint)(byte)sVar6 * 0x10000;
pbVar4 = (byte *)(uVar9 * *(longlong *)(param_1 + 0x140) + *(longlong *)(param_1 + 0xe8));
sVar6 = (ushort)pbVar4[1] * 0x100 + (ushort)*pbVar4;
*piVar8 = (uint)(byte)((ushort)sVar6 >> 8) * 0x100 + (uint)(byte)sVar6 * 0x10000;
pbVar4 = (byte *)(*(longlong *)(param_1 + 0x148) * uVar9 + *(longlong *)(param_1 + 0xf0));
sVar6 = (ushort)pbVar4[1] * 0x100 + (ushort)*pbVar4;
piVar8[1] = (uint)(byte)((ushort)sVar6 >> 8) * 0x100 + (uint)(byte)sVar6 * 0x10000;
piVar8[2] = *(int *)(uVar9 * *(longlong *)(param_1 + 0x150) + *(longlong *)(param_1 + 0xf8))
;
piVar8[3] = *(int *)(uVar9 * *(longlong *)(param_1 + 0x158) + *(longlong *)(param_1 + 0x100)
);
piVar8[4] = *(int *)(uVar9 * *(longlong *)(param_1 + 0x160) + *(longlong *)(param_1 + 0x108)
);
piVar8[5] = *(int *)(uVar9 * *(longlong *)(param_1 + 0x168) + *(longlong *)(param_1 + 0x110)
);
piVar8[6] = *(int *)(uVar9 * *(longlong *)(param_1 + 0x170) + *(longlong *)(param_1 + 0x118)
);
piVar8[7] = *(int *)(uVar9 * *(longlong *)(param_1 + 0x178) + *(longlong *)(param_1 + 0x120)
);
piVar8 = piVar8 + 0xc;
} while (uVar10 < *(uint *)(*(longlong *)(param_1 + 0x40) + 0x18));
}
// WARNING: Could not recover jumptable at 0x00014030fe42. Too many branches
// WARNING: Treating indirect jump as call
(**(code **)(**(longlong **)(param_1 + 0xa0) + 0x40))();
return;
}
return;
}



undefined8 * FUN_14030fe50(undefined8 *param_1)

{
    *param_1 = &PTR_LAB_140b64180;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x14] = 0;
    param_1[0x13] = 0;
    param_1[0x16] = 0;
    param_1[0x15] = 0;
    param_1[0x19] = 0;
    param_1[0x38] = 0;
    param_1[0x37] = 0;
    param_1[0x39] = 0;
    param_1[0x3b] = 0;
    param_1[0x3a] = 0;
    param_1[0x40] = 0;
    param_1[0x3f] = 0;
    param_1[0x43] = 0;
    param_1[0x42] = 0;
    param_1[0x41] = &LAB_140306440;
    FUN_140312f60();
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    FUN_1407e4830(param_1 + 0x46,0,0x310);
    param_1[0xaf] = 0;
    param_1[0xb0] = 0;
    param_1[0xb1] = 0;
    param_1[0xba] = &PTR_FUN_140b640f8;
    param_1[0xbd] = &PTR_FUN_140b640d8;
    param_1[0xc0] = &PTR_FUN_140b64158;
    param_1[0xc3] = &PTR_FUN_140b64138;
    param_1[0xc6] = &PTR_FUN_140b64118;
    param_1[2] = 0;
    param_1[0x3d] = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 1) = 1;
    return param_1;
}



void FUN_14030fff0(undefined8 *param_1)

{
    longlong *plVar1;
    undefined8 *puVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    longlong lVar5;

    uVar3 = 0;
    *param_1 = &PTR_LAB_140b64180;
    param_1[0x3d] = 0;
    lVar5 = param_1[0x39];
    while (lVar5 != 0) {
        puVar2 = (undefined8 *)param_1[0x39];
        if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2,1);
        }
        lVar5 = param_1[0x39];
    }
    plVar1 = param_1 + 0x11;
    for (lVar5 = *plVar1; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x20)) {
        FUN_1400035b0(6);
    }
    lVar5 = *plVar1;
    while (lVar5 != 0) {
        *(undefined8 *)(*plVar1 + 0x10) = 0;
        lVar5 = *plVar1;
        if (*(undefined8 **)(lVar5 + 0x18) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar5 + 0x18) = *(undefined8 *)(lVar5 + 0x20);
        }
        if (*(longlong *)(lVar5 + 0x20) != 0) {
            *(undefined8 *)(*(longlong *)(lVar5 + 0x20) + 0x18) = *(undefined8 *)(lVar5 + 0x18);
        }
        *(undefined8 *)(lVar5 + 0x18) = 0;
        *(undefined8 *)(lVar5 + 0x20) = 0;
        lVar5 = *plVar1;
    }
    param_1[0xc6] = &PTR_FUN_140b627d0;
    param_1[0xc3] = &PTR_FUN_140b627d0;
    param_1[0xc0] = &PTR_FUN_140b627d0;
    param_1[0xbd] = &PTR_FUN_140b627d0;
    param_1[0xba] = &PTR_FUN_140b627d0;
    if ((longlong *)param_1[0xb1] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xb1] + 8))();
    }
    if ((longlong *)param_1[0xb0] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xb0] + 8))();
    }
    if ((longlong *)param_1[0xaf] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xaf] + 8))();
    }
    if ((longlong *)param_1[0x45] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x45] + 8))();
    }
    uVar4 = uVar3;
    if (param_1[0x43] != 0) {
        do {
            uVar3 = uVar3 + 1;
            **(undefined8 **)(uVar4 + param_1[0x42]) = 0;
            uVar4 = uVar4 + 0x10;
        } while (uVar3 < (ulonglong)param_1[0x43]);
    }
    lVar5 = param_1[0x42];
    if (lVar5 != 0) {
        (**(code **)(*(longlong *)(lVar5 + -0x10) + 8))(lVar5 + -0x10);
    }
    lVar5 = param_1[0x3f];
    if (lVar5 != 0) {
        (**(code **)(*(longlong *)(lVar5 + -0x10) + 8))(lVar5 + -0x10);
    }
    lVar5 = param_1[0x3a];
    if (lVar5 != 0) {
        (**(code **)(*(longlong *)(lVar5 + -0x10) + 8))(lVar5 + -0x10);
    }
    if (param_1[0x39] != 0) {
        FUN_1401a4a00(param_1 + 0x39);
    }
    lVar5 = param_1[0x37];
    if (lVar5 != 0) {
        (**(code **)(*(longlong *)(lVar5 + -0x10) + 8))(lVar5 + -0x10);
    }
    if (param_1[0x19] != 0) {
        FUN_1401a4a00();
    }
    lVar5 = param_1[0x15];
    if (lVar5 != 0) {
        (**(code **)(*(longlong *)(lVar5 + -0x10) + 8))(lVar5 + -0x10);
    }
    lVar5 = param_1[0x13];
    if (lVar5 != 0) {
        (**(code **)(*(longlong *)(lVar5 + -0x10) + 8))(lVar5 + -0x10);
    }
    if (param_1[0x12] != 0) {
        FUN_1401a4a00();
    }
    if (*plVar1 != 0) {
        FUN_1401a4a00(plVar1);
    }
    if (param_1[0x10] != 0) {
        CloseHandle((HANDLE)param_1[0x10]);
    }
    if (param_1[0xc] != 0) {
        CloseHandle((HANDLE)param_1[0xc]);
    }
    if (param_1[8] != 0) {
        CloseHandle((HANDLE)param_1[8]);
    }
    if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[3] = param_1[4];
    }
    if (param_1[4] != 0) {
        *(undefined8 *)(param_1[4] + 0x18) = param_1[3];
    }
    param_1[4] = 0;
    param_1[3] = 0;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1403102b0(longlong param_1,longlong param_2)

{
longlong *plVar1;
longlong *plVar2;
longlong lVar3;
undefined4 uVar4;
undefined4 uVar5;
undefined4 uVar6;
int iVar7;
int iVar8;
undefined4 local_38;
undefined4 local_34;
longlong local_30;
code *local_28;
undefined8 local_20;
undefined4 local_18;

*(longlong *)(param_1 + 0x10) = param_2;
plVar1 = (longlong *)(param_2 + 0x28);
if (*(longlong *)(param_1 + 0x18) == 0) {
*(longlong **)(param_1 + 0x18) = plVar1;
plVar2 = (longlong *)(param_1 + 0x20);
*plVar2 = *plVar1;
*plVar1 = param_1;
if (*plVar2 != 0) {
*(longlong **)(*plVar2 + 0x18) = plVar2;
}
}
lVar3 = DAT_140c63758;
*(undefined4 *)(param_1 + 0x1f0) = 0xa8c0;
*(undefined8 *)(param_1 + 0xd0) = 0;
*(undefined8 *)(param_1 + 0xd8) = 0;
local_18 = 0;
*(undefined4 *)(param_1 + 0xe0) = 0;
uVar6 = uRam0000000140c7839c;
uVar5 = uRam0000000140c78398;
uVar4 = uRam0000000140c78394;
*(undefined4 *)(param_1 + 0xf0) = _DAT_140c78390;
*(undefined4 *)(param_1 + 0xf4) = uVar4;
*(undefined4 *)(param_1 + 0xf8) = uVar5;
*(undefined4 *)(param_1 + 0xfc) = uVar6;
uVar6 = uRam0000000140c783ac;
uVar5 = uRam0000000140c783a8;
uVar4 = uRam0000000140c783a4;
*(undefined4 *)(param_1 + 0x100) = _DAT_140c783a0;
*(undefined4 *)(param_1 + 0x104) = uVar4;
*(undefined4 *)(param_1 + 0x108) = uVar5;
*(undefined4 *)(param_1 + 0x10c) = uVar6;
uVar6 = uRam0000000140c783bc;
uVar5 = uRam0000000140c783b8;
uVar4 = uRam0000000140c783b4;
*(undefined4 *)(param_1 + 0x110) = _DAT_140c783b0;
*(undefined4 *)(param_1 + 0x114) = uVar4;
*(undefined4 *)(param_1 + 0x118) = uVar5;
*(undefined4 *)(param_1 + 0x11c) = uVar6;
uVar6 = uRam0000000140c783cc;
uVar5 = uRam0000000140c783c8;
uVar4 = uRam0000000140c783c4;
*(undefined4 *)(param_1 + 0x120) = _DAT_140c783c0;
*(undefined4 *)(param_1 + 0x124) = uVar4;
*(undefined4 *)(param_1 + 0x128) = uVar5;
*(undefined4 *)(param_1 + 300) = uVar6;
uVar6 = uRam0000000140c7839c;
uVar5 = uRam0000000140c78398;
uVar4 = uRam0000000140c78394;
*(undefined4 *)(param_1 + 0x130) = _DAT_140c78390;
*(undefined4 *)(param_1 + 0x134) = uVar4;
*(undefined4 *)(param_1 + 0x138) = uVar5;
*(undefined4 *)(param_1 + 0x13c) = uVar6;
uVar6 = uRam0000000140c783ac;
uVar5 = uRam0000000140c783a8;
uVar4 = uRam0000000140c783a4;
*(undefined4 *)(param_1 + 0x140) = _DAT_140c783a0;
*(undefined4 *)(param_1 + 0x144) = uVar4;
*(undefined4 *)(param_1 + 0x148) = uVar5;
*(undefined4 *)(param_1 + 0x14c) = uVar6;
uVar6 = uRam0000000140c783bc;
uVar5 = uRam0000000140c783b8;
uVar4 = uRam0000000140c783b4;
*(undefined4 *)(param_1 + 0x150) = _DAT_140c783b0;
*(undefined4 *)(param_1 + 0x154) = uVar4;
*(undefined4 *)(param_1 + 0x158) = uVar5;
*(undefined4 *)(param_1 + 0x15c) = uVar6;
uVar6 = uRam0000000140c783cc;
uVar5 = uRam0000000140c783c8;
uVar4 = uRam0000000140c783c4;
*(undefined4 *)(param_1 + 0x160) = _DAT_140c783c0;
*(undefined4 *)(param_1 + 0x164) = uVar4;
*(undefined4 *)(param_1 + 0x168) = uVar5;
*(undefined4 *)(param_1 + 0x16c) = uVar6;
uVar6 = uRam0000000140c7839c;
uVar5 = uRam0000000140c78398;
uVar4 = uRam0000000140c78394;
*(undefined4 *)(param_1 + 0x170) = _DAT_140c78390;
*(undefined4 *)(param_1 + 0x174) = uVar4;
*(undefined4 *)(param_1 + 0x178) = uVar5;
*(undefined4 *)(param_1 + 0x17c) = uVar6;
uVar6 = uRam0000000140c783ac;
uVar5 = uRam0000000140c783a8;
uVar4 = uRam0000000140c783a4;
*(undefined4 *)(param_1 + 0x180) = _DAT_140c783a0;
*(undefined4 *)(param_1 + 0x184) = uVar4;
*(undefined4 *)(param_1 + 0x188) = uVar5;
*(undefined4 *)(param_1 + 0x18c) = uVar6;
uVar6 = uRam0000000140c783bc;
uVar5 = uRam0000000140c783b8;
uVar4 = uRam0000000140c783b4;
*(undefined4 *)(param_1 + 400) = _DAT_140c783b0;
*(undefined4 *)(param_1 + 0x194) = uVar4;
*(undefined4 *)(param_1 + 0x198) = uVar5;
*(undefined4 *)(param_1 + 0x19c) = uVar6;
uVar6 = uRam0000000140c783cc;
uVar5 = uRam0000000140c783c8;
uVar4 = uRam0000000140c783c4;
*(undefined4 *)(param_1 + 0x1a0) = _DAT_140c783c0;
*(undefined4 *)(param_1 + 0x1a4) = uVar4;
*(undefined4 *)(param_1 + 0x1a8) = uVar5;
*(undefined4 *)(param_1 + 0x1ac) = uVar6;
*(undefined4 *)(param_1 + 0x5d8) = 0;
*(longlong *)(param_1 + 0x5e0) = param_1;
*(undefined4 *)(param_1 + 0x5f0) = 0xffffffff;
*(longlong *)(param_1 + 0x5f8) = param_1;
*(undefined4 *)(param_1 + 0x608) = 0;
*(longlong *)(param_1 + 0x610) = param_1;
*(undefined4 *)(param_1 + 0x620) = 0;
*(longlong *)(param_1 + 0x628) = param_1;
*(undefined4 *)(param_1 + 0x638) = 0;
*(longlong *)(param_1 + 0x640) = param_1;
if (lVar3 != 0) {
local_18 = *(undefined4 *)(lVar3 + 0xb8);
}
local_28 = FUN_140310e70;
local_38 = 0x14;
local_34 = 5;
local_20 = 0;
local_30 = param_1;
iVar7 = FUN_14019dca0(&local_38,1,0,param_1 + 0x228);
iVar8 = 0;
if (iVar7 < 0) {
iVar8 = iVar7;
}
return iVar8;
}



undefined4 FUN_140310460(longlong param_1)

{
int *piVar1;
undefined4 uVar2;

piVar1 = (int *)(param_1 + 8);
*piVar1 = *piVar1 + -1;
uVar2 = *(undefined4 *)(param_1 + 8);
if (*piVar1 == 0) {
FUN_14030fff0();
FUN_14018b900(param_1,0);
uVar2 = 0;
}
return uVar2;
}



int FUN_1403104b0(longlong param_1,undefined8 param_2,longlong *param_3,uint param_4)

{
int iVar1;
longlong lVar2;
longlong *plVar3;
longlong *local_res18;

if (param_3 == (longlong *)0x0) {
return -0x7ff8ffa9;
}
local_res18 = (longlong *)0x0;
iVar1 = FUN_1402ec620(*(undefined8 *)(param_1 + 0x10),param_2,&local_res18);
if (iVar1 < 0) {
plVar3 = local_res18;
if ((param_4 & 2) != 0) goto LAB_14031058f;
param_4 = param_4 | 4;
iVar1 = FUN_1402ec800(*(longlong *)(param_1 + 0x10),*(longlong *)(param_1 + 0x10) + 0x70,
                      &local_res18);
plVar3 = local_res18;
if (iVar1 < 0) goto LAB_14031058f;
}
lVar2 = FUN_14018b280(0x730,0);
if (lVar2 == 0) {
lVar2 = 0;
}
else {
lVar2 = FUN_1402f22e0(lVar2);
}
plVar3 = local_res18;
iVar1 = FUN_1402f3780(lVar2,param_2,param_1,local_res18,param_4);
if (iVar1 < 0) {
if (lVar2 != 0) {
FUN_1402f27b0(lVar2);
FUN_14018b900(lVar2,0);
}
}
else {
*param_3 = lVar2;
iVar1 = 0;
}
LAB_14031058f:
if (plVar3 != (longlong *)0x0) {
(**(code **)(*plVar3 + 8))(plVar3);
}
return iVar1;
}



void FUN_140310730(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4,
        undefined4 param_5)

{
ulonglong *puVar1;
longlong *plVar2;
longlong lVar3;
undefined8 uVar4;
ulonglong uVar5;
longlong *plVar6;
undefined4 uVar7;
undefined4 uVar8;
undefined4 uVar9;
int iVar10;
undefined4 uVar11;
DWORD DVar12;
longlong lVar13;
longlong lVar14;
longlong lVar15;
HANDLE pvVar16;
ulonglong uVar17;
ulonglong uVar18;
undefined auStack184 [32];
undefined4 local_98 [4];
undefined4 *local_88;
ulonglong local_38;

local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack184;
iVar10 = FUN_1407e6af0(param_1 + 0xf0,param_2,0x40);
if (iVar10 != 0) {
uVar11 = param_2[1];
uVar7 = param_2[2];
uVar8 = param_2[3];
local_88 = (undefined4 *)(param_1 + 0x130);
*(undefined4 *)(param_1 + 0xf0) = *param_2;
*(undefined4 *)(param_1 + 0xf4) = uVar11;
*(undefined4 *)(param_1 + 0xf8) = uVar7;
*(undefined4 *)(param_1 + 0xfc) = uVar8;
uVar11 = param_2[5];
uVar7 = param_2[6];
uVar8 = param_2[7];
*(undefined4 *)(param_1 + 0x100) = param_2[4];
*(undefined4 *)(param_1 + 0x104) = uVar11;
*(undefined4 *)(param_1 + 0x108) = uVar7;
*(undefined4 *)(param_1 + 0x10c) = uVar8;
uVar11 = param_2[9];
uVar7 = param_2[10];
uVar8 = param_2[0xb];
*(undefined4 *)(param_1 + 0x110) = param_2[8];
*(undefined4 *)(param_1 + 0x114) = uVar11;
*(undefined4 *)(param_1 + 0x118) = uVar7;
*(undefined4 *)(param_1 + 0x11c) = uVar8;
uVar11 = param_2[0xd];
uVar7 = param_2[0xe];
uVar8 = param_2[0xf];
*(undefined4 *)(param_1 + 0x120) = param_2[0xc];
*(undefined4 *)(param_1 + 0x124) = uVar11;
*(undefined4 *)(param_1 + 0x128) = uVar7;
*(undefined4 *)(param_1 + 300) = uVar8;
uVar11 = param_3[1];
uVar7 = param_3[2];
uVar8 = param_3[3];
*local_88 = *param_3;
*(undefined4 *)(param_1 + 0x134) = uVar11;
*(undefined4 *)(param_1 + 0x138) = uVar7;
*(undefined4 *)(param_1 + 0x13c) = uVar8;
uVar11 = param_3[5];
uVar7 = param_3[6];
uVar8 = param_3[7];
*(undefined4 *)(param_1 + 0x140) = param_3[4];
*(undefined4 *)(param_1 + 0x144) = uVar11;
*(undefined4 *)(param_1 + 0x148) = uVar7;
*(undefined4 *)(param_1 + 0x14c) = uVar8;
uVar11 = param_3[9];
uVar7 = param_3[10];
uVar8 = param_3[0xb];
*(undefined4 *)(param_1 + 0x150) = param_3[8];
*(undefined4 *)(param_1 + 0x154) = uVar11;
*(undefined4 *)(param_1 + 0x158) = uVar7;
*(undefined4 *)(param_1 + 0x15c) = uVar8;
uVar11 = param_3[0xc];
uVar7 = param_3[0xd];
uVar8 = param_3[0xe];
uVar9 = param_3[0xf];
*(undefined4 *)(param_1 + 0x160) = uVar11;
*(undefined4 *)(param_1 + 0x164) = uVar7;
*(undefined4 *)(param_1 + 0x168) = uVar8;
*(undefined4 *)(param_1 + 0x16c) = uVar9;
*(undefined (*) [16])(param_1 + 0x170) =
CONCAT412(uVar11,CONCAT48(*(undefined4 *)(param_1 + 0x150),
                          CONCAT44(*(undefined4 *)(param_1 + 0x140),*local_88)));
*(undefined (*) [16])(param_1 + 0x180) =
CONCAT412(uVar7,ZEXT412(*(uint *)(param_1 + 0x144)) << 0x20);
*(undefined (*) [16])(param_1 + 400) =
CONCAT412(uVar8,CONCAT48(*(undefined4 *)(param_1 + 0x158),
                         CONCAT44(*(undefined4 *)(param_1 + 0x148),
                                  *(undefined4 *)(param_1 + 0x138))));
*(undefined (*) [16])(param_1 + 0x1a0) =
CONCAT412(uVar9,ZEXT412(*(uint *)(param_1 + 0x14c)) << 0x20);
*(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
}
uVar18 = 0;
*(undefined8 *)(param_1 + 0x1b0) = *param_4;
*(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0xdc);
*(undefined4 *)(param_1 + 0xe8) = param_5;
lVar14 = *(longlong *)(param_1 + 0x90);
while (lVar14 != 0) {
plVar2 = *(longlong **)(param_1 + 0x90);
(**(code **)*plVar2)(plVar2);
local_98[0] = 0;
(**(code **)(*plVar2 + 0x10))(plVar2,local_98,1);
if ((longlong *)plVar2[0x2b] != (longlong *)0x0) {
*(longlong *)plVar2[0x2b] = plVar2[0x2c];
}
if (plVar2[0x2c] != 0) {
*(longlong *)(plVar2[0x2c] + 0x158) = plVar2[0x2b];
}
plVar2[0x2b] = 0;
plVar2[0x2c] = 0;
lVar3 = *(longlong *)(param_1 + 0xa0);
lVar14 = lVar3 + 1;
lVar13 = FUN_14018db00(*(undefined8 *)(param_1 + 0x98),lVar14);
*(longlong **)(lVar13 + lVar3 * 8) = plVar2;
if (*(longlong *)(param_1 + 0x98) != lVar13) {
FUN_1407db590(lVar13);
lVar3 = *(longlong *)(param_1 + 0x98);
if (lVar3 != 0) {
(**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
}
*(longlong *)(param_1 + 0x98) = lVar13;
}
*(longlong *)(param_1 + 0xa0) = lVar14;
lVar14 = *(longlong *)(param_1 + 0x90);
}
uVar11 = 0x7e7b;
if ((*(byte *)(param_1 + 0xe8) & 1) != 0) {
uVar11 = 0x63b;
}
*(undefined4 *)(param_1 + 0xe4) = 0;
*(undefined4 *)(param_1 + 0xec) = uVar11;
lVar14 = *(longlong *)(param_1 + 0xa0);
while (lVar14 != 0) {
uVar17 = *(ulonglong *)(param_1 + 0xa0);
if (*(ulonglong *)(param_1 + 0xb0) < uVar17 || *(ulonglong *)(param_1 + 0xb0) == uVar17) {
lVar14 = FUN_14018db00(*(undefined8 *)(param_1 + 0xa8),uVar17,8);
if (*(longlong *)(param_1 + 0xa8) != lVar14) {
FUN_1407db590(lVar14,*(longlong *)(param_1 + 0xa8),*(longlong *)(param_1 + 0xb0) << 3);
lVar3 = *(longlong *)(param_1 + 0xa8);
if (lVar3 != 0) {
(**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
}
*(longlong *)(param_1 + 0xa8) = lVar14;
}
}
*(ulonglong *)(param_1 + 0xb0) = uVar17;
*(undefined8 *)(param_1 + 0xb8) = 0;
*(undefined8 *)(param_1 + 0xc0) = 0;
if (*(ulonglong *)(param_1 + 0xa0) < 2) {
FUN_140310e70(param_1);
}
else {
(**(code **)(**(longlong **)(param_1 + 0x228) + 0x58))();
(**(code **)(**(longlong **)(param_1 + 0x228) + 0x70))();
}
uVar17 = *(ulonglong *)(param_1 + 0xc0);
*(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + 1;
if (*(ulonglong *)(param_1 + 0xb0) < uVar17 || *(ulonglong *)(param_1 + 0xb0) == uVar17) {
lVar14 = FUN_14018db00(*(undefined8 *)(param_1 + 0xa8),uVar17,8);
if (*(longlong *)(param_1 + 0xa8) != lVar14) {
FUN_1407db590(lVar14,*(longlong *)(param_1 + 0xa8),*(longlong *)(param_1 + 0xb0) << 3);
lVar3 = *(longlong *)(param_1 + 0xa8);
if (lVar3 != 0) {
(**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
}
*(longlong *)(param_1 + 0xa8) = lVar14;
}
}
*(ulonglong *)(param_1 + 0xb0) = uVar17;
uVar4 = *(undefined8 *)(param_1 + 0xa8);
*(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x98);
*(undefined8 *)(param_1 + 0x98) = uVar4;
lVar14 = *(longlong *)(param_1 + 0xb0);
*(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0xa0);
*(longlong *)(param_1 + 0xa0) = lVar14;
}
if ((*(byte *)(param_1 + 0xe8) & 1) == 0) {
DVar12 = GetCurrentThreadId();
uVar17 = uVar18;
if (*(DWORD *)(param_1 + 0x68) == DVar12) {
*(longlong *)(param_1 + 0x70) = *(longlong *)(param_1 + 0x70) + 1;
}
else {
do {
LOCK();
puVar1 = (ulonglong *)(param_1 + 0x70);
uVar5 = *puVar1;
*puVar1 = *puVar1 ^ (ulonglong)(uVar5 == 0) * (*puVar1 ^ 1);
if (uVar5 == 0) {
*(DWORD *)(param_1 + 0x68) = DVar12;
goto LAB_140310b17;
}
uVar17 = uVar17 + 1;
} while (uVar17 < 0x400);
FUN_14019fb60();
}
LAB_140310b17:
lVar14 = *(longlong *)(param_1 + 0x218);
while ((lVar14 != 0 &&
(*(int *)(**(longlong **)(param_1 + 0x210) + -8) - *(int *)(param_1 + 0xd0) < 1))) {
iVar10 = FUN_140305fc0();
if (iVar10 < 0) {
if (*(ulonglong *)(param_1 + 0x70) < 2) {
*(undefined4 *)(param_1 + 0x68) = 0;
*(undefined8 *)(param_1 + 0x70) = 0;
if (*(longlong *)(param_1 + 0x78) != 0) {
if (*(longlong *)(param_1 + 0x80) == 0) {
pvVar16 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
LOCK();
puVar1 = (ulonglong *)(param_1 + 0x80);
uVar18 = *puVar1;
*puVar1 = *puVar1 ^ (ulonglong)(uVar18 == 0) * (*puVar1 ^ (ulonglong)pvVar16);
if (uVar18 != 0) {
CloseHandle(pvVar16);
}
}
SetEvent(*(HANDLE *)(param_1 + 0x80));
}
}
else {
*(longlong *)(param_1 + 0x70) = *(longlong *)(param_1 + 0x70) + -1;
}
goto LAB_140310e3f;
}
lVar14 = *(longlong *)(param_1 + 0x218);
}
if (*(ulonglong *)(param_1 + 0x70) < 2) {
*(undefined4 *)(param_1 + 0x68) = 0;
*(undefined8 *)(param_1 + 0x70) = 0;
if (*(longlong *)(param_1 + 0x78) != 0) {
if (*(longlong *)(param_1 + 0x80) == 0) {
pvVar16 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
LOCK();
puVar1 = (ulonglong *)(param_1 + 0x80);
uVar17 = *puVar1;
*puVar1 = *puVar1 ^ (ulonglong)(uVar17 == 0) * (*puVar1 ^ (ulonglong)pvVar16);
if (uVar17 != 0) {
CloseHandle(pvVar16);
}
}
SetEvent(*(HANDLE *)(param_1 + 0x80));
}
}
else {
*(longlong *)(param_1 + 0x70) = *(longlong *)(param_1 + 0x70) + -1;
}
}
if ((*(byte *)(param_1 + 0xe8) & 4) == 0) {
DVar12 = GetCurrentThreadId();
if (*(DWORD *)(param_1 + 0x68) == DVar12) {
*(longlong *)(param_1 + 0x70) = *(longlong *)(param_1 + 0x70) + 1;
}
else {
do {
LOCK();
puVar1 = (ulonglong *)(param_1 + 0x70);
uVar17 = *puVar1;
*puVar1 = *puVar1 ^ (ulonglong)(uVar17 == 0) * (*puVar1 ^ 1);
if (uVar17 == 0) {
*(DWORD *)(param_1 + 0x68) = DVar12;
goto LAB_140310c76;
}
uVar18 = uVar18 + 1;
} while (uVar18 < 0x400);
FUN_14019fb60(param_1 + 0x68);
}
LAB_140310c76:
plVar2 = (longlong *)(param_1 + 0x1d0);
FUN_1400523e0();
lVar14 = *(longlong *)(param_1 + 0x1c8);
while (lVar3 = lVar14, lVar3 != 0) {
lVar14 = *(longlong *)(lVar3 + 0x28);
if (((*(int *)(lVar3 + 0x18) == 0) || (*(longlong **)(lVar3 + 0x10) == (longlong *)0x0)) ||
(iVar10 = (**(code **)(**(longlong **)(lVar3 + 0x10) + 0x3f0))(), iVar10 == 0)) {
if (*(undefined8 **)(lVar3 + 0x20) != (undefined8 *)0x0) {
**(undefined8 **)(lVar3 + 0x20) = *(undefined8 *)(lVar3 + 0x28);
}
if (*(longlong *)(lVar3 + 0x28) != 0) {
*(undefined8 *)(*(longlong *)(lVar3 + 0x28) + 0x20) = *(undefined8 *)(lVar3 + 0x20);
}
*(undefined8 *)(lVar3 + 0x20) = 0;
*(undefined8 *)(lVar3 + 0x28) = 0;
lVar13 = *(longlong *)(param_1 + 0x1d8);
lVar15 = FUN_14018db00(*plVar2,lVar13 + 1,8);
*(longlong *)(lVar15 + lVar13 * 8) = lVar3;
if (*plVar2 != lVar15) {
FUN_1407db590(lVar15,*plVar2,*(longlong *)(param_1 + 0x1d8) << 3);
if (*plVar2 != 0) {
(**(code **)(*(longlong *)(*plVar2 + -0x10) + 8))();
}
*plVar2 = lVar15;
}
*(longlong *)(param_1 + 0x1d8) = lVar13 + 1;
}
}
if (*(ulonglong *)(param_1 + 0x70) < 2) {
*(undefined4 *)(param_1 + 0x68) = 0;
*(undefined8 *)(param_1 + 0x70) = 0;
if (*(longlong *)(param_1 + 0x78) != 0) {
if (*(longlong *)(param_1 + 0x80) == 0) {
pvVar16 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
LOCK();
puVar1 = (ulonglong *)(param_1 + 0x80);
uVar18 = *puVar1;
*puVar1 = *puVar1 ^ (ulonglong)(uVar18 == 0) * (*puVar1 ^ (ulonglong)pvVar16);
if (uVar18 != 0) {
CloseHandle(pvVar16);
}
}
SetEvent(*(HANDLE *)(param_1 + 0x80));
}
}
else {
*(longlong *)(param_1 + 0x70) = *(longlong *)(param_1 + 0x70) + -1;
}
uVar18 = *(ulonglong *)(param_1 + 0x1d8);
FUN_140312bf0();
*(undefined4 *)(param_1 + 0x1e0) = 0;
if (uVar18 != 0) {
do {
plVar6 = *(longlong **)(*plVar2 + (ulonglong)*(uint *)(param_1 + 0x1e0) * 8);
if (plVar6 != (longlong *)0x0) {
*(int *)(plVar6 + 1) =
*(int *)(plVar6 + 1) + (*(int *)(param_1 + 0xd4) - *(int *)(param_1 + 0xd0));
(**(code **)(*plVar6 + 8))();
if (*(longlong *)(*plVar2 + (ulonglong)*(uint *)(param_1 + 0x1e0) * 8) != 0) {
(**(code **)*plVar6)();
}
}
*(int *)(param_1 + 0x1e0) = *(int *)(param_1 + 0x1e0) + 1;
} while (*(uint *)(param_1 + 0x1e0) < uVar18);
}
FUN_1400523e0(plVar2);
}
LAB_140310e3f:
FUN_1407db4f0(local_38 ^ (ulonglong)auStack184);
return;
}



void FUN_140310e70(longlong param_1)

{
ulonglong *puVar1;
longlong *plVar2;
longlong *plVar3;
longlong lVar4;
int iVar5;
ulonglong uVar6;
uint uVar7;

LOCK();
puVar1 = (ulonglong *)(param_1 + 0xb8);
uVar6 = *puVar1;
*puVar1 = *puVar1 + 1;
if (uVar6 < *(ulonglong *)(param_1 + 0xa0)) {
do {
plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x98) + uVar6 * 8);
if (*(uint *)((longlong)plVar3 + 0x134) < *(uint *)(param_1 + 0xe4) ||
*(uint *)((longlong)plVar3 + 0x134) == *(uint *)(param_1 + 0xe4)) {
uVar7 = *(uint *)(param_1 + 0xec);
if (plVar3[0x2d] == 0) {
uVar7 = uVar7 & 0x7800;
iVar5 = (**(code **)(*plVar3 + 400))(plVar3);
if (iVar5 != 0) {
uVar7 = uVar7 | *(uint *)(param_1 + 0xec) & 1;
}
}
FUN_140300dd0(plVar3,uVar7 | 0x10000);
(**(code **)(*plVar3 + 8))(plVar3);
}
else {
LOCK();
plVar2 = (longlong *)(param_1 + 0xc0);
lVar4 = *plVar2;
*plVar2 = *plVar2 + 1;
*(longlong **)(*(longlong *)(param_1 + 0xa8) + lVar4 * 8) = plVar3;
}
LOCK();
puVar1 = (ulonglong *)(param_1 + 0xb8);
uVar6 = *puVar1;
*puVar1 = *puVar1 + 1;
} while (uVar6 < *(ulonglong *)(param_1 + 0xa0));
}
return;
}



undefined8
        FUN_140310f70(longlong param_1,longlong param_2,undefined4 *param_3,longlong param_4,uint param_5,
int param_6,undefined8 *param_7,undefined8 *param_8)

{
float *pfVar1;
int **ppiVar2;
longlong **pplVar3;
int **ppiVar4;
float fVar5;
ushort uVar6;
undefined4 uVar7;
uint uVar8;
longlong *plVar9;
longlong lVar10;
longlong *plVar11;
longlong lVar12;
int *piVar13;
byte bVar14;
undefined4 uVar15;
undefined4 uVar16;
uint uVar17;
int iVar18;
int iVar19;
uint uVar20;
undefined8 *puVar21;
longlong *plVar22;
longlong *plVar23;
longlong lVar24;
longlong *plVar25;
longlong lVar26;
longlong lVar27;
longlong lVar28;
ushort *puVar29;
longlong **pplVar30;
byte bVar31;
uint uVar32;
longlong lVar33;
ulonglong uVar34;
longlong lVar35;
ulonglong uVar36;
uint uVar37;
ulonglong uVar38;
longlong lVar39;
float fVar40;
float fVar41;
uint local_ac;
uint local_a4;
longlong local_a0;
longlong *local_88;
undefined4 local_68 [12];

uVar7 = param_3[1];
uVar15 = param_3[2];
uVar16 = param_3[3];
*(undefined4 *)(param_1 + 0x590) = *param_3;
*(undefined4 *)(param_1 + 0x594) = uVar7;
*(undefined4 *)(param_1 + 0x598) = uVar15;
*(undefined4 *)(param_1 + 0x59c) = uVar16;
uVar7 = param_3[5];
uVar15 = param_3[6];
uVar16 = param_3[7];
*(undefined4 *)(param_1 + 0x5a0) = param_3[4];
*(undefined4 *)(param_1 + 0x5a4) = uVar7;
*(undefined4 *)(param_1 + 0x5a8) = uVar15;
*(undefined4 *)(param_1 + 0x5ac) = uVar16;
uVar7 = param_3[9];
uVar15 = param_3[10];
uVar16 = param_3[0xb];
*(undefined4 *)(param_1 + 0x5b0) = param_3[8];
*(undefined4 *)(param_1 + 0x5b4) = uVar7;
*(undefined4 *)(param_1 + 0x5b8) = uVar15;
*(undefined4 *)(param_1 + 0x5bc) = uVar16;
uVar7 = param_3[0xd];
uVar15 = param_3[0xe];
uVar16 = param_3[0xf];
*(undefined4 *)(param_1 + 0x5c0) = param_3[0xc];
*(undefined4 *)(param_1 + 0x5c4) = uVar7;
*(undefined4 *)(param_1 + 0x5c8) = uVar15;
*(undefined4 *)(param_1 + 0x5cc) = uVar16;
if ((param_5 & 1) == 0) {
if ((param_5 & 2) == 0) {
if ((param_5 & 4) == 0) {
param_5 = param_5 | 1;
}
else {
param_5 = param_5 & 0xfffffffc;
}
}
else {
param_5 = param_5 & 0xfffffffa;
}
}
else {
param_5 = param_5 & 0xfffffff9;
}
FUN_1402c8730(param_1 + 0x230,param_4);
puVar21 = (undefined8 *)0x0;
uVar17 = param_5 & 4;
*(uint *)(param_1 + 0x570) = param_5;
if (uVar17 == 0) {
puVar21 = *(undefined8 **)(param_4 + 0x300);
}
if (*(undefined8 **)(param_1 + 0x578) != puVar21) {
if (puVar21 != (undefined8 *)0x0) {
(**(code **)*puVar21)(puVar21);
}
if (*(longlong **)(param_1 + 0x578) != (longlong *)0x0) {
(**(code **)(**(longlong **)(param_1 + 0x578) + 8))();
}
*(undefined8 **)(param_1 + 0x578) = puVar21;
}
(**(code **)(*DAT_140c65688 + 0x100))
(DAT_140c65688,*(undefined8 *)(param_1 + 0x578),param_1 + 0x560);
if (*(undefined8 **)(param_1 + 0x580) != param_7) {
if (param_7 != (undefined8 *)0x0) {
(**(code **)*param_7)(param_7);
}
if (*(longlong **)(param_1 + 0x580) != (longlong *)0x0) {
(**(code **)(**(longlong **)(param_1 + 0x580) + 8))();
}
*(undefined8 **)(param_1 + 0x580) = param_7;
}
if (*(undefined8 **)(param_1 + 0x588) != param_8) {
if (param_8 != (undefined8 *)0x0) {
(**(code **)*param_8)(param_8);
}
if (*(longlong **)(param_1 + 0x588) != (longlong *)0x0) {
(**(code **)(**(longlong **)(param_1 + 0x588) + 8))();
}
*(undefined8 **)(param_1 + 0x588) = param_8;
}
puVar21 = (undefined8 *)(**(code **)(*DAT_140c65670 + 0x230))();
fVar40 = 0.0;
*(undefined (*) [16])(param_1 + 0x540) =
ZEXT816(CONCAT44((float)*(int *)((longlong)puVar21 + 4),(float)(int)*puVar21));
*(undefined (*) [16])(param_1 + 0x550) =
ZEXT816(CONCAT44(1.0 / *(float *)(param_1 + 0x544),1.0 / *(float *)(param_1 + 0x540)));
if (*(longlong *)(param_1 + 200) != 0) {
fVar41 = 0.9960784;
do {
plVar9 = *(longlong **)(param_1 + 200);
if ((longlong *)plVar9[0x2d] != (longlong *)0x0) {
*(longlong *)plVar9[0x2d] = plVar9[0x2e];
}
if (plVar9[0x2e] != 0) {
*(longlong *)(plVar9[0x2e] + 0x168) = plVar9[0x2d];
}
plVar9[0x2d] = 0;
plVar9[0x2e] = 0;
if (((*(uint *)(param_1 + 0x570) & 0x400) == 0) || ((*(byte *)(plVar9[8] + 8) & 1) != 0)) {
plVar9[0x92] = 0;
plVar9[0x95] = 0;
iVar18 = (**(code **)(*plVar9 + 0x138))(plVar9);
if ((iVar18 != 0) && (*(short *)((longlong)plVar9 + 0x1c4) != 0)) {
local_68[0] = 0;
iVar18 = (**(code **)(*plVar9 + 0x18))(plVar9,local_68,0);
if ((iVar18 != 0) && (plVar9[0x8e] != 0)) {
pplVar3 = (longlong **)(param_1 + 0x1f8);
lVar10 = *(longlong *)(plVar9[7] + 0x38);
uVar32 = *(uint *)(plVar9[0x8e] + 0x30);
FUN_1400523e0(pplVar3);
plVar23 = plVar9;
do {
for (plVar25 = (longlong *)plVar23[0xb9]; plVar25 != (longlong *)0x0;
plVar25 = (longlong *)plVar25[3]) {
if ((*(short *)(*plVar25 + 6) != 0) &&
((*(short *)(*plVar25 + 0xc) != 3 || (plVar9 == plVar23)))) {
lVar35 = *(longlong *)(param_1 + 0x200);
lVar28 = lVar35 + 1;
plVar22 = (longlong *)FUN_14018db00(*pplVar3,lVar28,8);
plVar22[lVar35] = (longlong)plVar25;
if (*pplVar3 != plVar22) {
FUN_1407db590(plVar22,*pplVar3,*(longlong *)(param_1 + 0x200) << 3);
plVar11 = *pplVar3;
if (plVar11 != (longlong *)0x0) {
(**(code **)(plVar11[-2] + 8))(plVar11 + -2);
}
*pplVar3 = plVar22;
}
*(longlong *)(param_1 + 0x200) = lVar28;
}
}
} while (((*(byte *)(plVar23 + 5) & 1) == 0) &&
(plVar23 = (longlong *)plVar23[0x98], plVar23 != (longlong *)0x0));
FUN_140312d80();
local_ac = 0;
uVar37 = 0xffffffff;
plVar23 = plVar9;
do {
for (plVar25 = (longlong *)plVar23[0xbb]; plVar25 != (longlong *)0x0;
plVar25 = (longlong *)plVar25[5]) {
if (*(ushort *)(*plVar25 + 2) < uVar37) {
uVar37 = (uint)*(ushort *)(*plVar25 + 2);
local_ac = (uint)*(byte *)(plVar25 + 1);
}
}
} while (((*(byte *)(plVar23 + 5) & 1) == 0) &&
(plVar23 = (longlong *)plVar23[0x98], plVar23 != (longlong *)0x0));
local_a4 = 0;
local_a0 = 0;
if (uVar32 != 0) {
do {
uVar38 = 0;
lVar28 = *(longlong *)(plVar9[0x8e] + 0x48);
lVar35 = local_a0 * 0x70 + *(longlong *)(plVar9[0x8e] + 0x40);
if ((uVar17 == 0) || ((param_5 & 0x800) != 0)) {
bVar31 = *(byte *)(lVar35 + 0x38);
bVar14 = bVar31 & 2;
}
else {
bVar31 = *(byte *)(lVar35 + 0x38);
bVar14 = bVar31 & 8;
}
if ((bVar14 == 0) &&
((((bVar31 & 4) == 0 || ((*(byte *)(param_1 + 0xe8) & 2) == 0)) &&
(uVar6 = *(ushort *)(lVar35 + 0x16), (uint)uVar6 < *(uint *)(lVar10 + 0x1f0)))))
{
lVar12 = *(longlong *)(lVar10 + 0x1f8);
lVar33 = (ulonglong)uVar6 * 0x30;
lVar24 = plVar9[0x8a];
lVar39 = (ulonglong)*(ushort *)(lVar35 + 0x18) * 0x60 + plVar9[0x3e];
if ((*(short *)(lVar39 + 0x34) != 0) &&
((fVar5 = *(float *)(lVar39 + 0x20), fVar5 != fVar40 ||
(fVar40 != *(float *)(lVar39 + 0x24))))) {
iVar18 = *(int *)(lVar12 + 8 + lVar33);
if ((iVar18 == 2) || ((*(byte *)(lVar39 + 0x36) & 1) != 0)) {
if (fVar5 != fVar40) {
lVar28 = FUN_1402fa120(plVar9);
plVar23 = (longlong *)(param_2 + 0x10);
*(longlong *)(lVar28 + 0x18) = param_1 + 0x600;
*(undefined4 *)(lVar28 + 0xc) = *(undefined4 *)(plVar9 + 0x26);
uVar7 = *(undefined4 *)(plVar9 + 0xae);
*(longlong **)(lVar28 + 0x30) = plVar9;
*(longlong *)(lVar28 + 0x38) = lVar39;
*(longlong *)(lVar28 + 0x40) = lVar35;
*(undefined4 *)(lVar28 + 0x10) = uVar7;
if (*(longlong *)(lVar28 + 0x20) == 0) {
plVar25 = (longlong *)(lVar28 + 0x28);
*(longlong **)(lVar28 + 0x20) = plVar23;
*plVar25 = *plVar23;
*plVar23 = lVar28;
if (*plVar25 != 0) {
*(longlong **)(*plVar25 + 0x20) = plVar25;
}
}
*(longlong *)(param_2 + 0x50) = *(longlong *)(param_2 + 0x50) + 1;
if (((*(uint *)(lVar12 + 0xc + lVar33) & 0x200) != 0) &&
(lVar28 = plVar9[0x99], *(int *)(lVar28 + 0x720) != 1)) {
*(undefined4 *)(lVar28 + 0x720) = 1;
for (lVar28 = *(longlong *)(lVar28 + 0x4d0); lVar28 != 0;
lVar28 = *(longlong *)(lVar28 + 0x4e0)) {
lVar28 = FUN_1402f6470(lVar28,1);
}
}
}
}
else if (iVar18 == 0) {
uVar36 = *(ulonglong *)(param_1 + 0x200);
iVar18 = *(int *)(&DAT_140b640c8 + (longlong)param_6 * 4) * 0x400 +
*(int *)(lVar28 + local_a0 * 8);
param_8._0_4_ =
*(int *)(&DAT_140b640c8 + (longlong)param_6 * 4) * 0x480 +
*(int *)(lVar28 + 4 + local_a0 * 8);
uVar34 = (ulonglong)(uint)param_8;
param_7._0_2_ = -1;
if (uVar36 != 0) {
pplVar30 = (longlong **)*pplVar3;
do {
plVar23 = *pplVar30;
if ((*(short *)(*plVar23 + 0xc) == 3) &&
(*(short *)(lVar35 + 0x1c) ==
(short)(((longlong)plVar23 - plVar9[0xb8]) / 0x88))) {
param_7._0_2_ = *(short *)(*plVar23 + 0x14);
break;
}
uVar38 = uVar38 + 1;
pplVar30 = pplVar30 + 1;
} while (uVar38 < uVar36);
}
uVar38 = 0;
local_88 = (longlong *)0x0;
if (uVar36 != 0) {
pplVar30 = (longlong **)*pplVar3;
do {
lVar27 = **pplVar30;
if (*(short *)(lVar27 + 6) != 1) break;
if ((*(short *)(lVar27 + 0xc) != 3) ||
(*(short *)(lVar27 + 0x14) == (short)param_7)) {
param_8._0_4_ = (uint)param_8 + (uint)*(ushort *)(lVar27 + 6) * 0x20;
uVar34 = (ulonglong)(uint)param_8;
local_88 = *pplVar30;
break;
}
uVar38 = uVar38 + 1;
pplVar30 = pplVar30 + 1;
} while (uVar38 < uVar36);
}
uVar37 = local_ac;
if ((uint)*(ushort *)(lVar35 + 0x1a) < *(uint *)(lVar10 + 0x570)) {
uVar37 = (uint)*(byte *)(plVar9[0xba] + 8 +
                         (ulonglong)*(ushort *)(lVar35 + 0x1a) * 0x30);
}
uVar20 = (uint)uVar34;
if (fVar5 != fVar40) {
uVar20 = *(uint *)(param_1 + 0x570);
if ((((uVar20 & 0x20) == 0) && ((*(byte *)(lVar33 + 0xc + lVar12) & 2) == 0)
) && (iVar19 = *(int *)(lVar33 + 0x14 + lVar12), -1 < iVar19)) {
if (iVar19 < 2) {
if (fVar41 <= fVar5) {
if ((bVar31 & 1) != 0) goto joined_r0x00014031167f;
LAB_140311681:
iVar19 = 0;
lVar27 = 0;
goto LAB_14031168e;
}
}
else if (iVar19 != 2) {
if (iVar19 != 7) goto LAB_140311687;
joined_r0x00014031167f:
if ((uVar20 & 4) != 0) goto LAB_140311681;
}
iVar19 = 1;
lVar27 = 1;
}
else {
LAB_140311687:
iVar19 = 5;
lVar27 = 5;
}
LAB_14031168e:
if ((uVar20 & 4) == 0) {
if (iVar19 == 0) {
if ((uVar20 & 1) == 0) {
LAB_140311730:
uVar34 = (ulonglong)((uint)param_8 + 0x5a00);
}
else if (*(int *)(lVar33 + 0x14 + lVar12) == 0) {
plVar23 = (longlong *)(**(code **)(*DAT_140c65688 + 0xe0))();
if (*(int *)(*plVar23 +
(ulonglong)
*(byte *)((ulonglong)uVar6 * 0x60 + lVar24 + 0x58) * 4) ==
1) {
uVar34 = (ulonglong)((uint)param_8 + 0x3600);
}
else {
uVar34 = (ulonglong)((uint)param_8 + 0x2400);
}
}
else {
uVar34 = (ulonglong)((uint)param_8 + 0x4800);
}
}
else if (iVar19 == 1) {
if (*(int *)(lVar33 + 0x14 + lVar12) != 7) goto LAB_140311730;
uVar34 = (ulonglong)((uint)param_8 + 0x6c00);
}
}
else if (*(int *)(lVar33 + 0x14 + lVar12) == 1) {
uVar34 = (ulonglong)((uint)param_8 + 0x1200);
}
if ((*(uint *)(lVar33 + 0xc + lVar12) & 0x10002) != 0x10002) {
lVar24 = FUN_1402fa240(plVar9);
plVar23 = (longlong *)(param_2 + lVar27 * 8);
*(longlong *)(lVar24 + 0x18) = param_1 + 0x5d0;
*(undefined4 *)(lVar24 + 0xc) = *(undefined4 *)(plVar9 + 0x26);
uVar7 = *(undefined4 *)(plVar9 + 0xae);
*(longlong **)(lVar24 + 0x30) = plVar9;
*(longlong *)(lVar24 + 0x38) = lVar39;
*(undefined4 *)(lVar24 + 0x10) = uVar7;
*(longlong *)(lVar24 + 0x40) = lVar35;
*(int *)(lVar24 + 0x58) = (int)uVar34;
*(longlong **)(lVar24 + 0x48) = local_88;
*(uint *)(lVar24 + 0x50) = uVar37;
*(int *)(lVar24 + 0x54) = iVar18;
if (*(longlong *)(lVar24 + 0x20) == 0) {
*(longlong **)(lVar24 + 0x20) = plVar23;
plVar25 = (longlong *)(lVar24 + 0x28);
*plVar25 = *plVar23;
*plVar23 = lVar24;
if (*plVar25 != 0) {
*(longlong **)(*plVar25 + 0x20) = plVar25;
}
}
plVar23 = (longlong *)(param_2 + 0x40 + lVar27 * 8);
*plVar23 = *plVar23 + 1;
}
uVar38 = 0;
if (*(longlong *)(param_1 + 0x200) != 0) {
do {
plVar23 = (longlong *)(*pplVar3)[uVar38];
lVar24 = *plVar23;
if (*(short *)(lVar24 + 6) == 2) break;
if (((*(short *)(lVar24 + 0xc) != 3) ||
(*(short *)(lVar24 + 0x14) == (short)param_7)) &&
(*(short *)(lVar24 + 6) == 3)) {
lVar24 = FUN_1402fa240(plVar9);
plVar25 = (longlong *)(param_2 + lVar27 * 8);
*(longlong *)(lVar24 + 0x18) = param_1 + 0x5d0;
*(undefined4 *)(lVar24 + 0xc) = *(undefined4 *)(plVar9 + 0x26);
uVar7 = *(undefined4 *)(plVar9 + 0xae);
*(longlong **)(lVar24 + 0x30) = plVar9;
*(undefined4 *)(lVar24 + 0x10) = uVar7;
*(longlong *)(lVar24 + 0x38) = lVar39;
*(longlong *)(lVar24 + 0x40) = lVar35;
*(uint *)(lVar24 + 0x50) = uVar37;
*(int *)(lVar24 + 0x54) = iVar18;
*(longlong **)(lVar24 + 0x48) = plVar23;
*(uint *)(lVar24 + 0x58) =
(3 - ((uint)(uVar34 >> 5) & 3)) * 0x20 + (int)uVar34;
if (*(longlong *)(lVar24 + 0x20) == 0) {
*(longlong **)(lVar24 + 0x20) = plVar25;
plVar23 = (longlong *)(lVar24 + 0x28);
*plVar23 = *plVar25;
*plVar25 = lVar24;
if (*plVar23 != 0) {
*(longlong **)(*plVar23 + 0x20) = plVar23;
}
}
plVar23 = (longlong *)(param_2 + 0x40 + lVar27 * 8);
*plVar23 = *plVar23 + 1;
}
uVar38 = uVar38 + 1;
} while (uVar38 < *(ulonglong *)(param_1 + 0x200));
}
lVar24 = *(longlong *)(param_1 + 0x200);
while (uVar20 = (uint)param_8, lVar24 != 0) {
lVar24 = lVar24 + -1;
plVar23 = (longlong *)(*pplVar3)[lVar24];
lVar27 = *plVar23;
if (*(short *)(lVar27 + 6) != 2) break;
if ((*(short *)(lVar27 + 0xc) != 3) ||
(*(short *)(lVar27 + 0x14) == (short)param_7)) {
if ((*(byte *)(lVar27 + 0x12) & 4) == 0) {
lVar27 = FUN_1402fa240(plVar9);
*(longlong *)(lVar27 + 0x18) = param_1 + 0x5d0;
*(undefined4 *)(lVar27 + 0xc) = *(undefined4 *)(plVar9 + 0x26);
uVar7 = *(undefined4 *)(plVar9 + 0xae);
*(longlong **)(lVar27 + 0x30) = plVar9;
*(longlong *)(lVar27 + 0x38) = lVar39;
*(undefined4 *)(lVar27 + 0x10) = uVar7;
*(longlong *)(lVar27 + 0x40) = lVar35;
*(longlong **)(lVar27 + 0x48) = plVar23;
*(undefined4 *)(lVar27 + 0x50) = 0;
*(undefined4 *)(lVar27 + 0x54) =
*(undefined4 *)(lVar28 + local_a0 * 8);
plVar25 = (longlong *)(param_2 + 0x28);
*(uint *)(lVar27 + 0x58) =
(uint)*(ushort *)(*plVar23 + 6) * 0x20 +
*(int *)(lVar28 + 4 + local_a0 * 8);
if (*(longlong *)(lVar27 + 0x20) == 0) {
*(longlong **)(lVar27 + 0x20) = plVar25;
plVar23 = (longlong *)(lVar27 + 0x28);
*plVar23 = *plVar25;
*plVar25 = lVar27;
if (*plVar23 != 0) {
*(longlong **)(*plVar23 + 0x20) = plVar23;
}
}
*(longlong *)(param_2 + 0x68) = *(longlong *)(param_2 + 0x68) + 1;
}
else {
plVar25 = (longlong *)FUN_1403266d0(plVar9[0x8e],lVar27 + 0x1e);
uVar38 = 0;
if (plVar25[1] != 0) {
plVar22 = (longlong *)(param_2 + 0x28);
uVar36 = uVar38;
do {
lVar26 = FUN_1402fa240();
*(longlong *)(lVar26 + 0x18) = param_1 + 0x5d0;
*(undefined4 *)(lVar26 + 0xc) = *(undefined4 *)(plVar9 + 0x26);
uVar7 = *(undefined4 *)(plVar9 + 0xae);
*(longlong **)(lVar26 + 0x30) = plVar9;
*(undefined4 *)(lVar26 + 0x10) = uVar7;
*(longlong *)(lVar26 + 0x38) = lVar39;
lVar27 = *plVar25;
*(longlong **)(lVar26 + 0x48) = plVar23;
*(undefined4 *)(lVar26 + 0x50) = 0;
*(ulonglong *)(lVar26 + 0x40) = lVar27 + uVar36;
*(undefined4 *)(lVar26 + 0x54) =
*(undefined4 *)(plVar25[2] + uVar38 * 8);
*(uint *)(lVar26 + 0x58) =
(uint)*(ushort *)(*plVar23 + 6) * 0x20 +
*(int *)(plVar25[2] + 4 + uVar38 * 8);
if (*(longlong *)(lVar26 + 0x20) == 0) {
*(longlong **)(lVar26 + 0x20) = plVar22;
plVar11 = (longlong *)(lVar26 + 0x28);
*plVar11 = *plVar22;
*plVar22 = lVar26;
if (*plVar11 != 0) {
*(longlong **)(*plVar11 + 0x20) = plVar11;
}
}
*(longlong *)(param_2 + 0x68) = *(longlong *)(param_2 + 0x68) + 1;
uVar38 = uVar38 + 1;
uVar36 = uVar36 + 0x70;
} while (uVar38 < (ulonglong)plVar25[1]);
}
}
}
}
}
if (((fVar40 != *(float *)(lVar39 + 0x24)) &&
((*(byte *)(param_1 + 0x570) & 4) == 0)) &&
((uVar8 = *(uint *)(lVar33 + 0x14 + lVar12), uVar8 < 3 || (uVar8 == 7)))) {
lVar28 = FUN_1402fa240(plVar9);
plVar23 = (longlong *)(param_2 + 0x20);
*(longlong *)(lVar28 + 0x18) = param_1 + 0x5d0;
*(undefined4 *)(lVar28 + 0xc) = *(undefined4 *)(plVar9 + 0x26);
*(undefined4 *)(lVar28 + 0x10) = *(undefined4 *)(plVar9 + 0xae);
*(longlong **)(lVar28 + 0x30) = plVar9;
*(longlong *)(lVar28 + 0x38) = lVar39;
*(longlong *)(lVar28 + 0x40) = lVar35;
*(longlong **)(lVar28 + 0x48) = local_88;
*(uint *)(lVar28 + 0x58) = uVar20 + 0x7e00;
*(uint *)(lVar28 + 0x50) = uVar37;
*(int *)(lVar28 + 0x54) = iVar18;
if (*(longlong *)(lVar28 + 0x20) == 0) {
*(longlong **)(lVar28 + 0x20) = plVar23;
plVar25 = (longlong *)(lVar28 + 0x28);
*plVar25 = *plVar23;
*plVar23 = lVar28;
if (*plVar25 != 0) {
*(longlong **)(*plVar25 + 0x20) = plVar25;
}
}
*(longlong *)(param_2 + 0x60) = *(longlong *)(param_2 + 0x60) + 1;
}
}
else if (iVar18 == 1) {
lVar24 = FUN_1402fa240(plVar9);
uVar38 = 0;
*(longlong *)(lVar24 + 0x18) = param_1 + 0x5d0;
*(undefined4 *)(lVar24 + 0xc) = *(undefined4 *)(plVar9 + 0x26);
uVar7 = *(undefined4 *)(plVar9 + 0xae);
*(longlong **)(lVar24 + 0x30) = plVar9;
*(undefined4 *)(lVar24 + 0x10) = uVar7;
*(longlong *)(lVar24 + 0x38) = lVar39;
*(longlong *)(lVar24 + 0x40) = lVar35;
*(undefined8 *)(lVar24 + 0x48) = 0;
*(undefined4 *)(lVar24 + 0x50) = 0;
*(undefined4 *)(lVar24 + 0x54) = *(undefined4 *)(lVar28 + local_a0 * 8);
uVar37 = *(uint *)(lVar28 + 4 + local_a0 * 8);
*(uint *)(lVar24 + 0x58) = uVar37;
uVar20 = (byte)~**(byte **)(param_1 + 0x10) & 1;
if ((uVar37 & 1) != uVar20) {
*(uint *)(lVar24 + 0x58) = (uVar37 - (uVar37 & 1)) + uVar20;
}
if (((*(byte *)(lVar12 + 0xc + lVar33) & 2) == 0) &&
(iVar18 = *(int *)(lVar12 + 0x14 + lVar33), -1 < iVar18)) {
if (iVar18 < 2) {
if ((*(float *)(lVar39 + 0x20) <= fVar41 &&
        fVar41 != *(float *)(lVar39 + 0x20)) ||
(((*(byte *)(lVar35 + 0x38) & 1) != 0 &&
((*(byte *)(param_1 + 0x570) & 4) == 0)))) goto LAB_140311e86;
}
else if (iVar18 == 2) {
LAB_140311e86:
uVar38 = 1;
}
else {
if (iVar18 != 7) goto LAB_140311e8d;
uVar38 = (ulonglong)((byte)~*(byte *)(param_1 + 0x570) >> 2 & 1);
}
}
else {
LAB_140311e8d:
uVar38 = 5;
}
plVar23 = (longlong *)(param_2 + uVar38 * 8);
if (*(longlong *)(lVar24 + 0x20) == 0) {
*(longlong **)(lVar24 + 0x20) = plVar23;
plVar25 = (longlong *)(lVar24 + 0x28);
*plVar25 = *plVar23;
*plVar23 = lVar24;
if (*plVar25 != 0) {
*(longlong **)(*plVar25 + 0x20) = plVar25;
}
}
plVar23 = (longlong *)(param_2 + 0x40 + uVar38 * 8);
*plVar23 = *plVar23 + 1;
}
}
}
local_a4 = local_a4 + 1;
local_a0 = local_a0 + 1;
} while (local_a4 < uVar32);
}
if (uVar17 == 0) {
iVar18 = (**(code **)(*plVar9 + 0x3f0))();
if (iVar18 == 0) {
for (piVar13 = (int *)plVar9[0xd4]; piVar13 != (int *)0x0;
piVar13 = *(int **)(piVar13 + 0x1e)) {
if ((((*(code **)(piVar13 + 4) == (code *)0x0) ||
(iVar18 = (**(code **)(piVar13 + 4))(), iVar18 != 0)) &&
(*(longlong *)(piVar13 + 6) != 0)) &&
(*(short *)(*(longlong *)(piVar13 + 2) + 0x34) != 0)) {
iVar18 = *piVar13;
if ((iVar18 == 0) &&
(pfVar1 = (float *)(*(longlong *)(piVar13 + 2) + 0x20),
        *pfVar1 <= fVar41 && fVar41 != *pfVar1)) {
iVar18 = 1;
}
*(longlong *)(piVar13 + 0x10) = param_1 + 0x5e8;
piVar13[0xd] = *(int *)(plVar9 + 0x26);
iVar19 = *(int *)(plVar9 + 0xae);
*(longlong **)(piVar13 + 0x16) = plVar9;
piVar13[0xe] = iVar19;
*(int **)(piVar13 + 0x1a) = piVar13;
*(undefined8 *)(piVar13 + 0x18) = *(undefined8 *)(piVar13 + 2);
ppiVar4 = (int **)(param_2 + (longlong)iVar18 * 8);
if (*(longlong *)(piVar13 + 0x12) == 0) {
*(int ***)(piVar13 + 0x12) = ppiVar4;
ppiVar2 = (int **)(piVar13 + 0x14);
*ppiVar2 = *ppiVar4;
*ppiVar4 = piVar13 + 10;
if (*ppiVar2 != (int *)0x0) {
*(int ***)(*ppiVar2 + 8) = ppiVar2;
}
}
plVar23 = (longlong *)(param_2 + 0x40 + (longlong)iVar18 * 8);
*plVar23 = *plVar23 + 1;
}
}
}
if (((*(int *)(plVar9 + 0xb4) != 0) && (*(int *)((longlong)plVar9 + 0x5a4) != 0)) &&
((iVar18 = (**(code **)(*plVar9 + 0x158))(), iVar18 != 0 &&
(uVar38 = 0, *(int *)(lVar10 + 0x318) != 0)))) {
do {
lVar28 = (ulonglong)
         *(ushort *)
                 ((ulonglong)*(ushort *)(uVar38 * 400 + 2 + *(longlong *)(lVar10 + 800))
                  * 0x160 + 6 + *(longlong *)(lVar10 + 0x188)) * 0x60 + plVar9[0x3e];
if (*(short *)(lVar28 + 0x34) != 0) {
if ((*(longlong *)(param_1 + 0x1e8) == 0) ||
(plVar23 = *(longlong **)(uVar38 * 0x1b0 + 0x1a8 + plVar9[0xb7]),
        plVar23 == (longlong *)0x0)) {
plVar23 = (longlong *)(param_2 + 0x18);
lVar35 = plVar9[0xb7] + 0x160 + uVar38 * 0x1b0;
*(longlong *)(lVar35 + 0x18) = param_1 + 0x618;
*(undefined4 *)(lVar35 + 0xc) = *(undefined4 *)(plVar9 + 0x26);
uVar7 = *(undefined4 *)(plVar9 + 0xae);
*(longlong **)(lVar35 + 0x30) = plVar9;
*(longlong *)(lVar35 + 0x38) = lVar28;
*(int *)(lVar35 + 0x40) = (int)uVar38;
*(undefined4 *)(lVar35 + 0x10) = uVar7;
if (*(longlong *)(lVar35 + 0x20) == 0) {
*(longlong **)(lVar35 + 0x20) = plVar23;
plVar25 = (longlong *)(lVar35 + 0x28);
*plVar25 = *plVar23;
*plVar23 = lVar35;
if (*plVar25 != 0) {
*(longlong **)(*plVar25 + 0x20) = plVar25;
}
}
*(longlong *)(param_2 + 0x58) = *(longlong *)(param_2 + 0x58) + 1;
}
else {
lVar28 = *plVar9;
(**(code **)(*plVar23 + 0x18))(plVar23);
iVar18 = (**(code **)(lVar28 + 0x418))();
if (-1 < iVar18) {
(**(code **)(*plVar23 + 0x20))();
}
}
}
uVar32 = (int)uVar38 + 1;
uVar38 = (ulonglong)uVar32;
} while (uVar32 < *(uint *)(lVar10 + 0x318));
}
uVar38 = 0;
if (*(int *)(plVar9[8] + 0x2f8) != 0) {
do {
plVar23 = *(longlong **)(plVar9[0xb2] + uVar38 * 8);
if (plVar23 != (longlong *)0x0) {
puVar29 = (ushort *)(**(code **)(*plVar23 + 0x20))();
if ((uint)puVar29[1] < *(uint *)(lVar10 + 0x200)) {
uVar6 = *(ushort *)(*(longlong *)(lVar10 + 0x208) + (ulonglong)puVar29[1] * 4)
;
if ((((*(ulonglong *)(plVar9[0x99] + 0x418) <= (ulonglong)(uVar6 >> 3)) ||
((*(byte *)((ulonglong)(uVar6 >> 3) + *(longlong *)(plVar9[0x99] + 0x410)
) & '\x01' << ((byte)uVar6 & 7)) == 0)) ||
((ulonglong)plVar9[0x83] <= (ulonglong)(uVar6 >> 3))) ||
((*(byte *)((ulonglong)(uVar6 >> 3) + plVar9[0x82]) &
'\x01' << ((byte)uVar6 & 7)) == 0)) goto LAB_140312210;
}
lVar28 = (ulonglong)
         *(ushort *)
                 ((ulonglong)*puVar29 * 0x160 + 6 + *(longlong *)(lVar10 + 0x188)) *
         0x60 + plVar9[0x3e];
if (*(short *)(lVar28 + 0x34) != 0) {
plVar23[0x29] = param_1 + 0x630;
*(undefined4 *)((longlong)plVar23 + 0x13c) = *(undefined4 *)(plVar9 + 0x26);
uVar7 = *(undefined4 *)(plVar9 + 0xae);
plVar23[0x2c] = (longlong)plVar9;
plVar23[0x2d] = lVar28;
plVar23[0x2e] = (longlong)plVar23;
*(undefined4 *)(plVar23 + 0x27) = 0;
*(undefined4 *)(plVar23 + 0x28) = uVar7;
lVar28 = (**(code **)(*plVar23 + 0x20))(plVar23);
if ((*(byte *)(lVar28 + 0x10) & 1) != 0) {
*(uint *)(plVar23 + 0x27) = *(uint *)(plVar23 + 0x27) | 1;
}
lVar28 = (**(code **)(*plVar23 + 0x20))();
if ((*(byte *)(lVar28 + 0x10) & 2) != 0) {
*(uint *)(plVar23 + 0x27) = *(uint *)(plVar23 + 0x27) | 2;
}
pplVar3 = (longlong **)(param_2 + 0x28);
if (plVar23[0x2a] == 0) {
plVar23[0x2a] = (longlong)pplVar3;
pplVar30 = (longlong **)(plVar23 + 0x2b);
*pplVar30 = *pplVar3;
*pplVar3 = plVar23 + 0x26;
if (*pplVar30 != (longlong *)0x0) {
(*pplVar30)[4] = (longlong)pplVar30;
}
}
*(longlong *)(param_2 + 0x68) = *(longlong *)(param_2 + 0x68) + 1;
if ((*(int *)(puVar29 + 2) == 0) && (**(char **)(puVar29 + 0x48) == '\x01')) {
(**(code **)(*plVar23 + 0x58))();
}
}
}
LAB_140312210:
uVar32 = (int)uVar38 + 1;
uVar38 = (ulonglong)uVar32;
} while (uVar32 < *(uint *)(plVar9[8] + 0x2f8));
}
}
}
}
plVar23 = (longlong *)(param_1 + 200);
for (lVar10 = plVar9[0x9a]; lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0x4e0)) {
if (((*(short *)(lVar10 + 0x1c4) != 0) &&
((*(int *)(lVar10 + 0x4b0) == 0 || (*(longlong *)(lVar10 + 0x4b8) != 0)))) &&
(*(longlong *)(lVar10 + 0x168) == 0)) {
*(longlong **)(lVar10 + 0x168) = plVar23;
plVar9 = (longlong *)(lVar10 + 0x170);
*plVar9 = *plVar23;
*plVar23 = lVar10;
if (*plVar9 != 0) {
*(longlong **)(*plVar9 + 0x168) = plVar9;
}
}
}
}
} while (*(longlong *)(param_1 + 200) != 0);
}
return 0;
}



void FUN_140312840(longlong param_1,int param_2)

{
uint uVar1;
undefined8 uVar2;

(**(code **)(*DAT_140c65670 + 0x128))();
if ((*(uint *)(param_1 + 0x570) & 4) == 0) {
if ((*(uint *)(param_1 + 0x570) >> 9 & 1) == 0) {
(**(code **)(*DAT_140c65688 + 0x50))();
}
else {
(**(code **)(*DAT_140c65670 + 0x120))();
if (param_2 == 1) {
(**(code **)(*DAT_140c65670 + 0x1d0))(DAT_140c65670,4,5,0);
}
}
}
else {
(**(code **)(*DAT_140c65670 + 0x120))();
(**(code **)(*DAT_140c65670 + 0x1d0))(DAT_140c65670,1,1,3);
}
uVar1 = *(uint *)(param_1 + 0x570);
if ((uVar1 & 0x20) != 0) {
if ((uVar1 & 8) == 0) {
if ((uVar1 & 0x40) == 0) goto LAB_140312978;
(**(code **)(*DAT_140c65670 + 0x1a0))(DAT_140c65670,1);
(**(code **)(*DAT_140c65670 + 0x1a8))(DAT_140c65670,0,1);
uVar2 = 2;
}
else {
(**(code **)(*DAT_140c65670 + 0x1a0))(DAT_140c65670,1);
(**(code **)(*DAT_140c65670 + 0x1a8))(DAT_140c65670,0,1);
uVar2 = 0;
}
(**(code **)(*DAT_140c65670 + 0x1b0))(DAT_140c65670,0,0,uVar2,2);
}
LAB_140312978:
if ((*(byte *)(param_1 + 0x570) & 0x10) != 0) {
(**(code **)(*DAT_140c65670 + 0x158))(DAT_140c65670,0);
}
return;
}



void FUN_1403129a0(longlong param_1,longlong param_2)

{
longlong *plVar1;
longlong *plVar2;
ulonglong *puVar3;
ulonglong uVar4;
DWORD DVar5;
HANDLE hObject;
ulonglong uVar6;

DVar5 = GetCurrentThreadId();
uVar6 = 0;
if (*(DWORD *)(param_1 + 0x68) == DVar5) {
*(longlong *)(param_1 + 0x70) = *(longlong *)(param_1 + 0x70) + 1;
}
else {
do {
LOCK();
puVar3 = (ulonglong *)(param_1 + 0x70);
uVar4 = *puVar3;
*puVar3 = *puVar3 ^ (ulonglong)(uVar4 == 0) * (*puVar3 ^ 1);
if (uVar4 == 0) {
*(DWORD *)(param_1 + 0x68) = DVar5;
goto LAB_140312a06;
}
uVar6 = uVar6 + 1;
} while (uVar6 < 0x400);
FUN_14019fb60(param_1 + 0x68);
}
LAB_140312a06:
plVar2 = (longlong *)(param_1 + 0x1c8);
if (*(longlong *)(param_2 + 0x20) == 0) {
*(longlong **)(param_2 + 0x20) = plVar2;
plVar1 = (longlong *)(param_2 + 0x28);
*plVar1 = *plVar2;
*plVar2 = param_2;
if (*plVar1 != 0) {
*(longlong **)(*plVar1 + 0x20) = plVar1;
}
}
if (*(ulonglong *)(param_1 + 0x70) < 2) {
*(undefined4 *)(param_1 + 0x68) = 0;
*(undefined8 *)(param_1 + 0x70) = 0;
if (*(longlong *)(param_1 + 0x78) != 0) {
if (*(longlong *)(param_1 + 0x80) == 0) {
hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
LOCK();
puVar3 = (ulonglong *)(param_1 + 0x80);
uVar6 = *puVar3;
*puVar3 = *puVar3 ^ (ulonglong)(uVar6 == 0) * (*puVar3 ^ (ulonglong)hObject);
if (uVar6 != 0) {
CloseHandle(hObject);
}
}
SetEvent(*(HANDLE *)(param_1 + 0x80));
}
}
else {
*(longlong *)(param_1 + 0x70) = *(longlong *)(param_1 + 0x70) + -1;
}
return;
}



void FUN_140312ab0(longlong param_1,longlong param_2)

{
ulonglong *puVar1;
DWORD DVar2;
uint uVar3;
HANDLE hObject;
ulonglong uVar4;
ulonglong uVar5;

DVar2 = GetCurrentThreadId();
uVar4 = 0;
if (*(DWORD *)(param_1 + 0x68) == DVar2) {
*(longlong *)(param_1 + 0x70) = *(longlong *)(param_1 + 0x70) + 1;
}
else {
do {
LOCK();
puVar1 = (ulonglong *)(param_1 + 0x70);
uVar5 = *puVar1;
*puVar1 = *puVar1 ^ (ulonglong)(uVar5 == 0) * (*puVar1 ^ 1);
if (uVar5 == 0) {
*(DWORD *)(param_1 + 0x68) = DVar2;
goto LAB_140312b16;
}
uVar4 = uVar4 + 1;
} while (uVar4 < 0x400);
FUN_14019fb60(param_1 + 0x68);
}
LAB_140312b16:
if (*(undefined8 **)(param_2 + 0x20) != (undefined8 *)0x0) {
**(undefined8 **)(param_2 + 0x20) = *(undefined8 *)(param_2 + 0x28);
}
if (*(longlong *)(param_2 + 0x28) != 0) {
*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x20) = *(undefined8 *)(param_2 + 0x20);
}
*(undefined8 *)(param_2 + 0x20) = 0;
*(undefined8 *)(param_2 + 0x28) = 0;
uVar4 = (ulonglong)*(uint *)(param_1 + 0x1e0);
uVar5 = (ulonglong)*(uint *)(param_1 + 0x1e0);
if (uVar4 < *(ulonglong *)(param_1 + 0x1d8)) {
do {
if (param_2 == *(longlong *)(*(longlong *)(param_1 + 0x1d0) + uVar5 * 8)) {
*(undefined8 *)(*(longlong *)(param_1 + 0x1d0) + uVar4 * 8) = 0;
break;
}
uVar3 = (int)uVar4 + 1;
uVar4 = (ulonglong)uVar3;
uVar5 = (ulonglong)uVar3;
} while (uVar5 < *(ulonglong *)(param_1 + 0x1d8));
}
if (*(ulonglong *)(param_1 + 0x70) < 2) {
*(undefined4 *)(param_1 + 0x68) = 0;
*(undefined8 *)(param_1 + 0x70) = 0;
if (*(longlong *)(param_1 + 0x78) != 0) {
if (*(longlong *)(param_1 + 0x80) == 0) {
hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
LOCK();
puVar1 = (ulonglong *)(param_1 + 0x80);
uVar4 = *puVar1;
*puVar1 = *puVar1 ^ (ulonglong)(uVar4 == 0) * (*puVar1 ^ (ulonglong)hObject);
if (uVar4 != 0) {
CloseHandle(hObject);
}
}
SetEvent(*(HANDLE *)(param_1 + 0x80));
}
}
else {
*(longlong *)(param_1 + 0x70) = *(longlong *)(param_1 + 0x70) + -1;
}
return;
}



void FUN_140312bf0(undefined8 param_1,longlong *param_2,ulonglong param_3)

{
longlong lVar1;
ulonglong uVar2;
ulonglong uVar3;
ulonglong uVar4;
ulonglong uVar5;
ulonglong uVar6;
ulonglong uVar7;
ulonglong uVar8;
ulonglong uVar9;

if (param_3 == 2) {
lVar1 = *param_2;
if (*(uint *)(param_2[1] + 8) < *(uint *)(lVar1 + 8)) {
*param_2 = param_2[1];
param_2[1] = lVar1;
return;
}
}
else if (1 < param_3) {
uVar7 = param_3 >> 1;
if (uVar7 != 0) {
uVar9 = (param_3 & 0xfffffffffffffffe) + 1;
do {
uVar2 = param_2[uVar7 - 1];
uVar7 = uVar7 - 1;
uVar9 = uVar9 - 2;
uVar4 = uVar7;
uVar8 = uVar9;
while (uVar8 < param_3) {
uVar3 = param_2[uVar8];
uVar6 = uVar8 + 1;
uVar5 = uVar8;
if (uVar6 < param_3) {
uVar8 = param_2[uVar6];
if ((*(uint *)(uVar3 + 8) <= *(uint *)(uVar8 + 8)) &&
((*(uint *)(uVar3 + 8) < *(uint *)(uVar8 + 8) || (uVar3 < uVar8)))) {
uVar3 = uVar8;
uVar5 = uVar6;
}
}
if ((*(uint *)(uVar3 + 8) < *(uint *)(uVar2 + 8)) ||
((*(uint *)(uVar3 + 8) <= *(uint *)(uVar2 + 8) && (uVar3 <= uVar2)))) break;
param_2[uVar4] = uVar3;
uVar4 = uVar5;
uVar8 = uVar5 * 2 + 1;
}
param_2[uVar4] = uVar2;
} while (uVar7 != 0);
}
for (param_3 = param_3 - 1; param_3 != 0; param_3 = param_3 - 1) {
uVar9 = param_2[param_3];
uVar7 = 1;
uVar8 = 0;
param_2[param_3] = *param_2;
if (1 < param_3) {
do {
uVar4 = param_2[uVar7];
uVar2 = uVar7 + 1;
uVar6 = uVar7;
if (uVar2 < param_3) {
uVar7 = param_2[uVar2];
if ((*(uint *)(uVar4 + 8) <= *(uint *)(uVar7 + 8)) &&
((*(uint *)(uVar4 + 8) < *(uint *)(uVar7 + 8) || (uVar4 < uVar7)))) {
uVar4 = uVar7;
uVar6 = uVar2;
}
}
if ((*(uint *)(uVar4 + 8) < *(uint *)(uVar9 + 8)) ||
((*(uint *)(uVar4 + 8) <= *(uint *)(uVar9 + 8) && (uVar4 <= uVar9)))) break;
param_2[uVar8] = uVar4;
uVar7 = uVar6 * 2 + 1;
uVar8 = uVar6;
} while (uVar7 < param_3);
}
param_2[uVar8] = uVar9;
}
}
return;
}



void FUN_140312d80(undefined8 param_1,undefined8 *param_2,ulonglong param_3)

{
undefined8 uVar1;
ulonglong uVar2;
int iVar3;
ulonglong uVar4;
ulonglong uVar5;
ulonglong uVar6;
ulonglong uVar7;
ulonglong uVar8;
ulonglong uVar9;
ulonglong uVar10;

if (param_3 == 2) {
iVar3 = FUN_1402f12b0(*param_2,param_2[1],0);
if (0 < iVar3) {
uVar1 = *param_2;
*param_2 = param_2[1];
param_2[1] = uVar1;
return;
}
}
else if (1 < param_3) {
uVar4 = param_3 >> 1;
if (uVar4 != 0) {
uVar5 = (param_3 & 0xfffffffffffffffe) + 1;
do {
uVar2 = param_2[uVar4 - 1];
uVar4 = uVar4 - 1;
uVar5 = uVar5 - 2;
uVar9 = uVar4;
uVar10 = uVar5;
while (uVar10 < param_3) {
uVar8 = param_2[uVar10];
uVar7 = uVar10 + 1;
uVar6 = uVar10;
if (uVar7 < param_3) {
uVar10 = param_2[uVar7];
iVar3 = FUN_1402f12b0(uVar10,uVar8,0);
if ((0 < iVar3) || ((iVar3 == 0 && (uVar8 < uVar10)))) {
uVar6 = uVar7;
uVar8 = uVar10;
}
}
iVar3 = FUN_1402f12b0(uVar8,uVar2,0);
if ((iVar3 < 1) && ((iVar3 != 0 || (uVar8 <= uVar2)))) break;
param_2[uVar9] = uVar8;
uVar9 = uVar6;
uVar10 = uVar6 * 2 + 1;
}
param_2[uVar9] = uVar2;
} while (uVar4 != 0);
}
for (param_3 = param_3 - 1; param_3 != 0; param_3 = param_3 - 1) {
uVar5 = param_2[param_3];
uVar4 = 1;
uVar10 = 0;
param_2[param_3] = *param_2;
if (1 < param_3) {
do {
uVar9 = param_2[uVar4];
uVar2 = uVar4 + 1;
uVar7 = uVar4;
if (uVar2 < param_3) {
uVar4 = param_2[uVar2];
iVar3 = FUN_1402f12b0(uVar4,uVar9,0);
if ((0 < iVar3) || ((iVar3 == 0 && (uVar9 < uVar4)))) {
uVar7 = uVar2;
uVar9 = uVar4;
}
}
iVar3 = FUN_1402f12b0(uVar9,uVar5,0);
if ((iVar3 < 1) && ((iVar3 != 0 || (uVar9 <= uVar5)))) break;
param_2[uVar10] = uVar9;
uVar4 = uVar7 * 2 + 1;
uVar10 = uVar7;
} while (uVar4 < param_3);
}
param_2[uVar10] = uVar5;
}
}
return;
}



void FUN_140312f60(longlong *param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    ulonglong uVar5;

    uVar5 = 0;
    if (param_1[1] != 0) {
        param_1[1] = 0;
    }
    puVar2 = (undefined8 *)FUN_14018dbc0(*param_1,0,0x10);
    if ((undefined8 *)*param_1 != puVar2) {
        if (param_1[1] != 0) {
            puVar3 = puVar2;
            do {
                if (puVar3 != (undefined8 *)0x0) {
                    puVar4 = (undefined8 *)((longlong)puVar3 + (*param_1 - (longlong)puVar2));
                    *puVar3 = *puVar4;
                    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar4 + 1);
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
    return;
}



undefined8 * FUN_140312ff0(undefined8 *param_1)

{
    FUN_14032d190();
    *param_1 = &PTR_LAB_140b64260;
    param_1[0x8d] = 0;
    param_1[0x8c] = 0;
    param_1[0x8f] = 0;
    param_1[0x8e] = 0;
    param_1[0x90] = 0;
    param_1[0x91] = 0;
    param_1[0x92] = 0;
    param_1[0x93] = 0;
    param_1[0x94] = 0;
    param_1[0x95] = 0;
    param_1[0x96] = 0;
    param_1[0x97] = 0;
    param_1[0x98] = 0;
    param_1[0x99] = 0;
    param_1[0x9a] = 0;
    param_1[0x9b] = 0;
    param_1[0x9c] = 0;
    param_1[0x9d] = 0;
    param_1[0x9e] = 0;
    param_1[0x9f] = 0;
    param_1[0xa0] = 0;
    param_1[0xa1] = 0;
    param_1[0xa2] = 0;
    param_1[0xa3] = 0;
    param_1[0xa4] = 0;
    param_1[0xa5] = 0;
    param_1[0xa6] = 0;
    param_1[0xa7] = 0;
    param_1[0xa8] = 0;
    param_1[0xa9] = 0;
    return param_1;
}



undefined8 FUN_1403130f0(undefined8 param_1,ulonglong param_2)

{
FUN_140313130();
if ((param_2 & 1) != 0) {
FUN_14018b900(param_1,0);
}
return param_1;
}



void FUN_140313130(undefined8 *param_1)

{
    longlong lVar1;

    *param_1 = &PTR_LAB_140b64260;
    FUN_14018b900(param_1[0x90],0);
    if (param_1[0x93] != 0) {
        FUN_1403131d0();
    }
    if (param_1[0x98] != 0) {
        FUN_140313290();
    }
    if (param_1[0x9c] != 0) {
        FUN_140313290();
    }
    if (param_1[0x92] != 0) {
        FUN_140317c90();
    }
    lVar1 = param_1[0x8e];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = param_1[0x8c];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    FUN_14032d3f0(param_1);
    return;
}



// WARNING: Removing unreachable block (ram,0x00014031324e)

longlong FUN_1403131d0(longlong param_1)

{
undefined8 *puVar1;
longlong lVar2;
int iVar3;

iVar3 = *(int *)(param_1 + -8) + -1;
if (-1 < iVar3) {
lVar2 = (longlong)*(int *)(param_1 + -8) * 0x10 + 8 + param_1;
do {
puVar1 = *(undefined8 **)(lVar2 + -0x10);
lVar2 = lVar2 + -0x10;
if (puVar1 != (undefined8 *)0x0) {
*puVar1 = &PTR_FUN_140b66870;
if ((undefined8 *)puVar1[1] != (undefined8 *)0x0) {
*(undefined8 *)puVar1[1] = puVar1[2];
}
if (puVar1[2] != 0) {
*(undefined8 *)(puVar1[2] + 8) = puVar1[1];
}
puVar1[1] = 0;
puVar1[2] = 0;
puVar1[1] = 0;
puVar1[2] = 0;
FUN_14018b900(puVar1,0);
}
iVar3 = iVar3 + -1;
} while (-1 < iVar3);
}
FUN_14018b900(param_1 + -8,0);
return param_1 + -8;
}



// WARNING: Removing unreachable block (ram,0x00014031330e)

longlong FUN_140313290(longlong param_1)

{
undefined8 *puVar1;
longlong lVar2;
int iVar3;

iVar3 = *(int *)(param_1 + -0x10) + -1;
if (-1 < iVar3) {
lVar2 = (longlong)*(int *)(param_1 + -0x10) * 0x20 + 0x10 + param_1;
do {
puVar1 = *(undefined8 **)(lVar2 + -0x20);
lVar2 = lVar2 + -0x20;
if (puVar1 != (undefined8 *)0x0) {
*puVar1 = &PTR_FUN_140b66870;
if ((undefined8 *)puVar1[1] != (undefined8 *)0x0) {
*(undefined8 *)puVar1[1] = puVar1[2];
}
if (puVar1[2] != 0) {
*(undefined8 *)(puVar1[2] + 8) = puVar1[1];
}
puVar1[1] = 0;
puVar1[2] = 0;
puVar1[1] = 0;
puVar1[2] = 0;
FUN_14018b900(puVar1,0);
}
iVar3 = iVar3 + -1;
} while (-1 < iVar3);
}
FUN_14018b900(param_1 + -0x10,0);
return param_1 + -0x10;
}



void FUN_1403135b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
int iVar1;
undefined8 uVar2;
longlong lVar3;
uint uVar4;
longlong lVar5;
bool bVar6;
undefined4 extraout_XMM0_Da;
undefined4 uVar7;
uint uVar8;
uint extraout_XMM0_Da_00;
uint extraout_XMM0_Da_01;
undefined4 extraout_XMM0_Da_02;
undefined4 in_XMM6_Da;
uint uVar9;
undefined4 in_XMM6_Db;
undefined4 in_XMM6_Dc;
undefined4 in_XMM6_Dd;
undefined4 in_XMM7_Da;
undefined4 uVar10;
undefined4 in_XMM7_Db;
undefined4 in_XMM7_Dc;
undefined4 in_XMM7_Dd;

if (*(longlong *)(param_1 + 0x480) == 0) {
uVar2 = FUN_14018b280(0x800,0,param_3,param_4,
                      CONCAT412(in_XMM7_Dd,CONCAT48(in_XMM7_Dc,CONCAT44(in_XMM7_Db,in_XMM7_Da)))
        ,CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da))
        ));
lVar5 = *(longlong *)(param_1 + 0x1a0);
*(undefined8 *)(param_1 + 0x480) = uVar2;
uVar9 = *(uint *)(lVar5 + 0xec8);
bVar6 = (uVar9 >> 0xd & 1) != 0;
uVar4 = (uint)bVar6;
if ((uVar9 >> 0xe & 1) != 0) {
uVar4 = bVar6 | 2;
}
if ((uVar9 >> 0xf & 1) != 0) {
uVar4 = uVar4 | 4;
}
if ((uVar9 >> 0x10 & 1) != 0) {
uVar4 = uVar4 | 8;
}
if (*(short *)(lVar5 + 0x980) == 1) {
uVar4 = uVar4 | 0x10;
}
if (*(short *)(lVar5 + 0x982) == 1) {
uVar4 = uVar4 | 0x20;
}
uVar9 = 0x80000000;
uVar10 = 0x3f800000;
lVar3 = 0x20;
lVar5 = 0;
uVar7 = extraout_XMM0_Da;
do {
uVar7 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))(uVar7,0,uVar10);
*(undefined4 *)(lVar5 + 0x30 + *(longlong *)(param_1 + 0x480)) = uVar7;
uVar7 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))
        (uVar7,*(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x808),
         *(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x80c));
*(undefined4 *)(lVar5 + 8 + *(longlong *)(param_1 + 0x480)) = uVar7;
uVar7 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))
        (uVar7,*(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x810),
         *(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x814));
*(undefined4 *)(lVar5 + 0x18 + *(longlong *)(param_1 + 0x480)) = uVar7;
uVar8 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))
        (uVar7,*(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x818),
         *(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x81c));
*(uint *)(lVar5 + 0x28 + *(longlong *)(param_1 + 0x480)) = uVar8;
if (((*(byte *)(*(longlong *)(param_1 + 0x1a0) + 0xec8) & 0x10) != 0) &&
(iVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x40))
        (*(longlong **)(param_1 + 0x38),0,1), uVar8 = extraout_XMM0_Da_00,
        iVar1 != 0)) {
*(uint *)(lVar5 + 8 + *(longlong *)(param_1 + 0x480)) =
*(uint *)(lVar5 + 8 + *(longlong *)(param_1 + 0x480)) ^ uVar9;
*(uint *)(lVar5 + 0x18 + *(longlong *)(param_1 + 0x480)) =
*(uint *)(lVar5 + 0x18 + *(longlong *)(param_1 + 0x480)) ^ uVar9;
uVar8 = *(uint *)(lVar5 + 0x28 + *(longlong *)(param_1 + 0x480)) ^ uVar9;
*(uint *)(lVar5 + 0x28 + *(longlong *)(param_1 + 0x480)) = uVar8;
}
uVar7 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))
        (uVar8,*(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x820),
         *(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x824));
*(undefined4 *)(lVar5 + *(longlong *)(param_1 + 0x480)) = uVar7;
uVar7 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))
        (uVar7,*(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x828),
         *(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x82c));
*(undefined4 *)(lVar5 + 0x10 + *(longlong *)(param_1 + 0x480)) = uVar7;
uVar8 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))
        (uVar7,*(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x830),
         *(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x834));
*(uint *)(lVar5 + 0x20 + *(longlong *)(param_1 + 0x480)) = uVar8;
if (((*(byte *)(*(longlong *)(param_1 + 0x1a0) + 0xec8) & 0x20) != 0) &&
(iVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x40))
        (*(longlong **)(param_1 + 0x38),0), uVar8 = extraout_XMM0_Da_01,
        iVar1 != 0)) {
*(uint *)(lVar5 + *(longlong *)(param_1 + 0x480)) =
*(uint *)(lVar5 + *(longlong *)(param_1 + 0x480)) ^ uVar9;
*(uint *)(lVar5 + 0x10 + *(longlong *)(param_1 + 0x480)) =
*(uint *)(lVar5 + 0x10 + *(longlong *)(param_1 + 0x480)) ^ uVar9;
uVar8 = *(uint *)(lVar5 + 0x20 + *(longlong *)(param_1 + 0x480)) ^ uVar9;
*(uint *)(lVar5 + 0x20 + *(longlong *)(param_1 + 0x480)) = uVar8;
}
uVar7 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))
        (uVar8,*(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x838),
         *(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x83c));
*(undefined4 *)(lVar5 + 4 + *(longlong *)(param_1 + 0x480)) = uVar7;
uVar7 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))
        (uVar7,*(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x840),
         *(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x844));
*(undefined4 *)(lVar5 + 0x14 + *(longlong *)(param_1 + 0x480)) = uVar7;
uVar7 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))
        (uVar7,*(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x848),
         *(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x84c));
*(undefined4 *)(lVar5 + 0x24 + *(longlong *)(param_1 + 0x480)) = uVar7;
if (((*(byte *)(*(longlong *)(param_1 + 0x1a0) + 0xec8) & 0x40) != 0) &&
(iVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x40))
        (*(longlong **)(param_1 + 0x38),0), iVar1 != 0)) {
*(uint *)(lVar5 + 4 + *(longlong *)(param_1 + 0x480)) =
*(uint *)(lVar5 + 4 + *(longlong *)(param_1 + 0x480)) ^ uVar9;
*(uint *)(lVar5 + 0x14 + *(longlong *)(param_1 + 0x480)) =
*(uint *)(lVar5 + 0x14 + *(longlong *)(param_1 + 0x480)) ^ uVar9;
*(uint *)(lVar5 + 0x24 + *(longlong *)(param_1 + 0x480)) =
*(uint *)(lVar5 + 0x24 + *(longlong *)(param_1 + 0x480)) ^ uVar9;
}
uVar8 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))();
*(uint *)(lVar5 + 0x34 + *(longlong *)(param_1 + 0x480)) = uVar8 & uVar4;
uVar7 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x40))
        (*(longlong **)(param_1 + 0x38),
         *(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0xe70));
*(undefined4 *)(lVar5 + 0x38 + *(longlong *)(param_1 + 0x480)) = uVar7;
uVar7 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x40))
        (*(longlong **)(param_1 + 0x38),
         *(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x85c));
*(undefined4 *)(lVar5 + 0x3c + *(longlong *)(param_1 + 0x480)) = uVar7;
lVar3 = lVar3 + -1;
lVar5 = lVar5 + 0x40;
uVar7 = extraout_XMM0_Da_02;
} while (lVar3 != 0);
}
return;
}



void FUN_140313a00(undefined4 *param_1,undefined4 *param_2)

{
    uint uVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    undefined4 uStack16;
    undefined4 uStack12;

    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    param_1[6] = param_2[6];
    param_1[8] = param_2[8];
    param_1[9] = param_2[9];
    param_1[10] = param_2[10];
    param_1[3] = param_2[0xc];
    param_1[7] = (float)(ulonglong)(uint)param_2[0xe];
    fVar2 = 3.0;
    param_1[0xb] = (float)(ulonglong)(uint)param_2[0xf];
    uVar1 = param_2[0xd];
    if ((uVar1 & 1) == 0) {
        fVar3 = 3.0;
    }
    else {
        fVar3 = 1.0;
    }
    if ((uVar1 & 2) != 0) {
        fVar2 = 1.0;
    }
    uStack16 = 0x3f800000;
    if ((uVar1 & 4) == 0) {
        uStack16 = 0x40400000;
    }
    uStack12 = 0x3f800000;
    if ((uVar1 & 8) == 0) {
        uStack12 = 0x40400000;
    }
    fVar4 = -1.0;
    if ((uVar1 & 0x10) == 0) {
        fVar5 = 1.0;
    }
    else {
        fVar5 = -1.0;
    }
    if ((uVar1 & 0x20) == 0) {
        fVar4 = 1.0;
    }
    param_1[0xc] = fVar3 * fVar5;
    param_1[0xd] = fVar2 * fVar4;
    param_1[0xe] = uStack16;
    param_1[0xf] = uStack12;
    return;
}



void FUN_140313b30(longlong param_1)

{
if (*(longlong *)(param_1 + 0x4c0) != 0) {
FUN_140313290();
}
*(undefined8 *)(param_1 + 0x4c0) = 0;
if (*(longlong *)(param_1 + 0x4e0) != 0) {
FUN_140313290();
}
*(undefined8 *)(param_1 + 0x4e0) = 0;
if (*(longlong *)(param_1 + 0x498) != 0) {
FUN_1403131d0();
}
*(undefined8 *)(param_1 + 0x498) = 0;
*(undefined8 *)(param_1 + 0x4a0) = 0;
*(undefined8 *)(param_1 + 0x4a8) = 0;
*(undefined8 *)(param_1 + 0x4b0) = 0;
*(undefined8 *)(param_1 + 0x4b8) = 0;
*(undefined8 *)(param_1 + 0x4c8) = 0;
*(undefined8 *)(param_1 + 0x4d0) = 0;
*(undefined8 *)(param_1 + 0x4d8) = 0;
*(undefined8 *)(param_1 + 0x4e8) = 0;
*(undefined8 *)(param_1 + 0x4f0) = 0;
*(undefined8 *)(param_1 + 0x4f8) = 0;
*(undefined8 *)(param_1 + 0x500) = 0;
*(undefined8 *)(param_1 + 0x508) = 0;
*(undefined8 *)(param_1 + 0x510) = 0;
*(undefined8 *)(param_1 + 0x518) = 0;
*(undefined8 *)(param_1 + 0x520) = 0;
*(undefined8 *)(param_1 + 0x528) = 0;
*(undefined8 *)(param_1 + 0x530) = 0;
*(undefined8 *)(param_1 + 0x538) = 0;
*(undefined8 *)(param_1 + 0x540) = 0;
*(undefined8 *)(param_1 + 0x548) = 0;
return;
}



void FUN_140313c20(longlong param_1)

{
ushort uVar1;
ulonglong uVar2;
longlong lVar3;
uint *puVar4;
ulonglong uVar5;
longlong lVar6;
uint uVar7;
ulonglong uVar8;

if (*(char *)(param_1 + 400) == '\0') {
FUN_140313b30();
lVar3 = *(longlong *)(param_1 + 0x1a0);
uVar7 = (uint)*(ushort *)(lVar3 + 0x6e8) +
        ((uint)*(ushort *)(lVar3 + 0xd78) + (uint)*(ushort *)(lVar3 + 0xc80) +
         (uint)*(ushort *)(lVar3 + 0xb88) + (uint)*(ushort *)(lVar3 + 0xa90) +
         (uint)*(ushort *)(lVar3 + 0x99c) + (uint)*(ushort *)(lVar3 + 0x86c) +
         (uint)*(ushort *)(lVar3 + 0x5f0) + (uint)*(ushort *)(lVar3 + 0x4f8) +
         (uint)*(ushort *)(lVar3 + 0x400)) * 2 + (uint)*(ushort *)(lVar3 + 0x294);
uVar2 = SUB168(ZEXT816(0x10) * ZEXT416(uVar7),0);
if (SUB168(ZEXT816(0x10) * ZEXT416(uVar7) >> 0x40,0) != 0) {
uVar2 = 0xffffffffffffffff;
}
lVar3 = uVar2 + 8;
if (0xfffffffffffffff7 < uVar2) {
lVar3 = -1;
}
puVar4 = (uint *)FUN_14018b280(lVar3,0);
uVar2 = 0;
if (puVar4 == (uint *)0x0) {
puVar4 = (uint *)0x0;
}
else {
*puVar4 = uVar7;
puVar4 = puVar4 + 2;
if (-1 < (int)(uVar7 - 1)) {
FUN_1407e4830(puVar4,0,(ulonglong)uVar7 << 4);
}
}
lVar3 = *(longlong *)(param_1 + 0x1a0);
*(uint **)(param_1 + 0x498) = puVar4;
*(uint **)(param_1 + 0x4a0) = puVar4;
uVar1 = *(ushort *)(lVar3 + 0x4f8);
*(uint **)(param_1 + 0x4a8) = puVar4 + (ulonglong)uVar1 * 4;
uVar7 = (uint)uVar1 + (uint)*(ushort *)(lVar3 + 0x4f8);
*(uint **)(param_1 + 0x4b0) = puVar4 + (ulonglong)uVar7 * 4;
uVar7 = uVar7 + *(ushort *)(lVar3 + 0x5f0);
*(uint **)(param_1 + 0x4b8) = puVar4 + (ulonglong)uVar7 * 4;
uVar7 = uVar7 + *(ushort *)(lVar3 + 0x5f0);
*(uint **)(param_1 + 0x4c8) = puVar4 + (ulonglong)uVar7 * 4;
uVar7 = uVar7 + *(ushort *)(lVar3 + 0x294);
*(uint **)(param_1 + 0x4d0) = puVar4 + (ulonglong)uVar7 * 4;
uVar7 = uVar7 + *(ushort *)(lVar3 + 0x400);
*(uint **)(param_1 + 0x4d8) = puVar4 + (ulonglong)uVar7 * 4;
uVar7 = uVar7 + *(ushort *)(lVar3 + 0x400);
*(uint **)(param_1 + 0x4e8) = puVar4 + (ulonglong)uVar7 * 4;
uVar7 = uVar7 + *(ushort *)(lVar3 + 0x6e8);
*(uint **)(param_1 + 0x4f0) = puVar4 + (ulonglong)uVar7 * 4;
uVar7 = uVar7 + *(ushort *)(lVar3 + 0x86c);
*(uint **)(param_1 + 0x4f8) = puVar4 + (ulonglong)uVar7 * 4;
uVar7 = uVar7 + *(ushort *)(lVar3 + 0x86c);
*(uint **)(param_1 + 0x500) = puVar4 + (ulonglong)uVar7 * 4;
uVar7 = uVar7 + *(ushort *)(lVar3 + 0x99c);
*(uint **)(param_1 + 0x508) = puVar4 + (ulonglong)uVar7 * 4;
uVar7 = uVar7 + *(ushort *)(lVar3 + 0x99c);
*(uint **)(param_1 + 0x510) = puVar4 + (ulonglong)uVar7 * 4;
uVar7 = uVar7 + *(ushort *)(lVar3 + 0xa90);
*(uint **)(param_1 + 0x518) = puVar4 + (ulonglong)uVar7 * 4;
uVar7 = uVar7 + *(ushort *)(lVar3 + 0xa90);
*(uint **)(param_1 + 0x520) = puVar4 + (ulonglong)uVar7 * 4;
uVar7 = uVar7 + *(ushort *)(lVar3 + 0xb88);
*(uint **)(param_1 + 0x528) = puVar4 + (ulonglong)uVar7 * 4;
uVar7 = uVar7 + *(ushort *)(lVar3 + 0xb88);
*(uint **)(param_1 + 0x530) = puVar4 + (ulonglong)uVar7 * 4;
uVar7 = uVar7 + *(ushort *)(lVar3 + 0xc80);
*(uint **)(param_1 + 0x538) = puVar4 + (ulonglong)uVar7 * 4;
uVar7 = uVar7 + *(ushort *)(lVar3 + 0xc80);
*(uint **)(param_1 + 0x540) = puVar4 + (ulonglong)uVar7 * 4;
*(uint **)(param_1 + 0x548) = puVar4 + (ulonglong)(uVar7 + *(ushort *)(lVar3 + 0xd78)) * 4;
uVar7 = (uint)*(ushort *)(lVar3 + 0x294) * 2;
uVar5 = SUB168(ZEXT816(0x20) * ZEXT816((ulonglong)(longlong)(int)uVar7),0);
if (SUB168(ZEXT816(0x20) * ZEXT816((ulonglong)(longlong)(int)uVar7) >> 0x40,0) != 0) {
uVar5 = 0xffffffffffffffff;
}
lVar3 = uVar5 + 0x10;
if (0xffffffffffffffef < uVar5) {
lVar3 = -1;
}
puVar4 = (uint *)FUN_14018b280(lVar3,0);
if (puVar4 == (uint *)0x0) {
puVar4 = (uint *)0x0;
}
else {
*puVar4 = uVar7;
puVar4 = puVar4 + 4;
if (-1 < (int)(uVar7 - 1)) {
FUN_1407e4830(puVar4,0,(ulonglong)uVar7 << 5);
}
}
*(uint **)(param_1 + 0x4c0) = puVar4;
uVar5 = uVar2;
if (*(short *)(*(longlong *)(param_1 + 0x1a0) + 0x4f8) != 0) {
do {
FUN_140317ec0(*(longlong *)(param_1 + 0x1a0) + 0x500 + uVar5 * 0x18,
*(longlong *)(param_1 + 0x4a0) + uVar5 * 0x10,param_1 + 0x180);
FUN_140317fc0(*(longlong *)(param_1 + 0x1a0) + 0x578 + uVar5 * 0x18,
*(longlong *)(param_1 + 0x4a8) + uVar5 * 0x10,param_1 + 0x180);
uVar7 = (int)uVar5 + 1;
uVar5 = (ulonglong)uVar7;
} while (uVar7 < *(ushort *)(*(longlong *)(param_1 + 0x1a0) + 0x4f8));
}
uVar5 = uVar2;
if (*(short *)(*(longlong *)(param_1 + 0x1a0) + 0x5f0) != 0) {
do {
FUN_140317ec0(*(longlong *)(param_1 + 0x1a0) + 0x5f8 + uVar5 * 0x18,
*(longlong *)(param_1 + 0x4b0) + uVar5 * 0x10,param_1 + 0x180);
FUN_140317fc0(*(longlong *)(param_1 + 0x1a0) + 0x670 + uVar5 * 0x18,
*(longlong *)(param_1 + 0x4b8) + uVar5 * 0x10,param_1 + 0x180);
uVar7 = (int)uVar5 + 1;
uVar5 = (ulonglong)uVar7;
} while (uVar7 < *(ushort *)(*(longlong *)(param_1 + 0x1a0) + 0x5f0));
}
lVar3 = param_1 + 0x180;
FUN_140317ec0(*(longlong *)(param_1 + 8) + 0x38,param_1 + 0x60,lVar3);
FUN_1403180d0(*(longlong *)(param_1 + 0x1a0) + 0x188,param_1 + 0x2d0,lVar3);
if ((*(byte *)(*(longlong *)(param_1 + 0x1a0) + 0xec8) & 2) != 0) {
FUN_1403181e0(*(longlong *)(param_1 + 0x1a0) + 0x278,param_1 + 0x370,lVar3);
}
FUN_140317ec0(*(longlong *)(param_1 + 0x1a0) + 0x960,param_1 + 0x488,lVar3);
uVar5 = uVar2;
if (*(short *)(*(longlong *)(param_1 + 0x1a0) + 0x400) != 0) {
do {
FUN_140317fc0(*(longlong *)(param_1 + 0x1a0) + (uVar5 + 0x2b) * 0x18,
*(longlong *)(param_1 + 0x4d0) + uVar5 * 0x10,lVar3);
FUN_140317fc0(*(longlong *)(param_1 + 0x1a0) + (uVar5 + 0x30) * 0x18,
*(longlong *)(param_1 + 0x4d8) + uVar5 * 0x10,lVar3);
uVar7 = (int)uVar5 + 1;
uVar5 = (ulonglong)uVar7;
} while (uVar7 < *(ushort *)(*(longlong *)(param_1 + 0x1a0) + 0x400));
}
uVar5 = uVar2;
if (*(short *)(*(longlong *)(param_1 + 0x1a0) + 0x294) != 0) {
do {
lVar6 = uVar5 * 0x18;
uVar8 = uVar2;
do {
FUN_140318300(*(longlong *)(param_1 + 0x1a0) + 0x298 + lVar6,
(ulonglong)
((uint)*(ushort *)(*(longlong *)(param_1 + 0x1a0) + 0x294) * (int)uVar8 +
(int)uVar5) * 0x20 + *(longlong *)(param_1 + 0x4c0),lVar3);
uVar7 = (int)uVar8 + 1;
uVar8 = (ulonglong)uVar7;
lVar6 = lVar6 + 0x78;
} while (uVar7 < 2);
FUN_140317fc0(*(longlong *)(param_1 + 0x1a0) + 0x388 + uVar5 * 0x18,
uVar5 * 0x10 + *(longlong *)(param_1 + 0x4c8),lVar3);
uVar7 = (int)uVar5 + 1;
uVar5 = (ulonglong)uVar7;
} while (uVar7 < *(ushort *)(*(longlong *)(param_1 + 0x1a0) + 0x294));
}
if ((*(byte *)(*(longlong *)(param_1 + 0x1a0) + 0xec8) & 8) != 0) {
uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x1a0) + 0x6e8);
uVar5 = SUB168(ZEXT816(0x20) * ZEXT216(uVar1),0);
if (SUB168(ZEXT816(0x20) * ZEXT216(uVar1) >> 0x40,0) != 0) {
uVar5 = 0xffffffffffffffff;
}
lVar6 = uVar5 + 0x10;
if (0xffffffffffffffef < uVar5) {
lVar6 = -1;
}
puVar4 = (uint *)FUN_14018b280(lVar6,0);
if (puVar4 == (uint *)0x0) {
puVar4 = (uint *)0x0;
}
else {
*puVar4 = (uint)uVar1;
puVar4 = puVar4 + 4;
if (-1 < (int)(uVar1 - 1)) {
FUN_1407e4830(puVar4,0,(ulonglong)(uint)uVar1 << 5);
}
}
*(uint **)(param_1 + 0x4e0) = puVar4;
uVar5 = uVar2;
if (*(short *)(*(longlong *)(param_1 + 0x1a0) + 0x6e8) != 0) {
do {
FUN_140318430(*(longlong *)(param_1 + 0x1a0) + (uVar5 + 0x4a) * 0x18,
uVar5 * 0x20 + *(longlong *)(param_1 + 0x4e0),lVar3);
FUN_140317fc0(*(longlong *)(param_1 + 0x1a0) + (uVar5 + 0x4f) * 0x18,
uVar5 * 0x10 + *(longlong *)(param_1 + 0x4e8),lVar3);
uVar7 = (int)uVar5 + 1;
uVar5 = (ulonglong)uVar7;
} while (uVar7 < *(ushort *)(*(longlong *)(param_1 + 0x1a0) + 0x6e8));
}
}
if (((*(byte *)(*(longlong *)(param_1 + 0x1a0) + 0xec8) & 0x80) != 0) &&
(uVar5 = uVar2, *(short *)(*(longlong *)(param_1 + 0x1a0) + 0x86c) != 0)) {
do {
FUN_140317ec0(*(longlong *)(param_1 + 0x1a0) + (uVar5 + 0x5a) * 0x18,
*(longlong *)(param_1 + 0x4f0) + uVar5 * 0x10,lVar3);
FUN_140317fc0(*(longlong *)(param_1 + 0x1a0) + (uVar5 + 0x5f) * 0x18,
*(longlong *)(param_1 + 0x4f8) + uVar5 * 0x10,lVar3);
uVar7 = (int)uVar5 + 1;
uVar5 = (ulonglong)uVar7;
} while (uVar7 < *(ushort *)(*(longlong *)(param_1 + 0x1a0) + 0x86c));
}
if (*(short *)(*(longlong *)(param_1 + 0x1a0) + 0x998) == 2) {
uVar5 = uVar2;
if (*(short *)(*(longlong *)(param_1 + 0x1a0) + 0x99c) != 0) {
do {
FUN_140317ec0(*(longlong *)(param_1 + 0x1a0) + 0x9a0 + uVar5 * 0x18,
*(longlong *)(param_1 + 0x500) + uVar5 * 0x10,lVar3);
FUN_140317fc0(*(longlong *)(param_1 + 0x1a0) + 0xa18 + uVar5 * 0x18,
*(longlong *)(param_1 + 0x508) + uVar5 * 0x10,lVar3);
uVar7 = (int)uVar5 + 1;
uVar5 = (ulonglong)uVar7;
} while (uVar7 < *(ushort *)(*(longlong *)(param_1 + 0x1a0) + 0x99c));
}
uVar5 = uVar2;
if (*(short *)(*(longlong *)(param_1 + 0x1a0) + 0xa90) != 0) {
do {
FUN_140317ec0(*(longlong *)(param_1 + 0x1a0) + (uVar5 + 0x71) * 0x18,
*(longlong *)(param_1 + 0x510) + uVar5 * 0x10,lVar3);
FUN_140317fc0(*(longlong *)(param_1 + 0x1a0) + (uVar5 + 0x76) * 0x18,
*(longlong *)(param_1 + 0x518) + uVar5 * 0x10,lVar3);
uVar7 = (int)uVar5 + 1;
uVar5 = (ulonglong)uVar7;
} while (uVar7 < *(ushort *)(*(longlong *)(param_1 + 0x1a0) + 0xa90));
}
uVar5 = uVar2;
if (*(short *)(*(longlong *)(param_1 + 0x1a0) + 0xb88) != 0) {
do {
FUN_140317ec0(*(longlong *)(param_1 + 0x1a0) + 0xb90 + uVar5 * 0x18,
*(longlong *)(param_1 + 0x520) + uVar5 * 0x10,lVar3);
FUN_140317fc0(*(longlong *)(param_1 + 0x1a0) + 0xc08 + uVar5 * 0x18,
*(longlong *)(param_1 + 0x528) + uVar5 * 0x10,lVar3);
uVar7 = (int)uVar5 + 1;
uVar5 = (ulonglong)uVar7;
} while (uVar7 < *(ushort *)(*(longlong *)(param_1 + 0x1a0) + 0xb88));
}
uVar5 = uVar2;
if (*(short *)(*(longlong *)(param_1 + 0x1a0) + 0xc80) != 0) {
do {
FUN_140317ec0(*(longlong *)(param_1 + 0x1a0) + 0xc88 + uVar5 * 0x18,
*(longlong *)(param_1 + 0x530) + uVar5 * 0x10,lVar3);
FUN_140317fc0(*(longlong *)(param_1 + 0x1a0) + 0xd00 + uVar5 * 0x18,
*(longlong *)(param_1 + 0x538) + uVar5 * 0x10,lVar3);
uVar7 = (int)uVar5 + 1;
uVar5 = (ulonglong)uVar7;
} while (uVar7 < *(ushort *)(*(longlong *)(param_1 + 0x1a0) + 0xc80));
}
if (*(short *)(*(longlong *)(param_1 + 0x1a0) + 0xd78) != 0) {
do {
FUN_140317ec0(*(longlong *)(param_1 + 0x1a0) + (uVar2 + 0x90) * 0x18,
*(longlong *)(param_1 + 0x540) + uVar2 * 0x10,lVar3);
FUN_140317fc0(*(longlong *)(param_1 + 0x1a0) + (uVar2 + 0x95) * 0x18,
*(longlong *)(param_1 + 0x548) + uVar2 * 0x10,lVar3);
uVar7 = (int)uVar2 + 1;
uVar2 = (ulonglong)uVar7;
} while (uVar7 < *(ushort *)(*(longlong *)(param_1 + 0x1a0) + 0xd78));
}
}
*(undefined *)(param_1 + 400) = 1;
}
return;
}



void FUN_1403146b0(longlong param_1)

{
undefined4 *puVar1;
longlong lVar2;
undefined8 *puVar3;
undefined4 *puVar4;

if (*(char *)(param_1 + 0x427) != '\0') {
return;
}
FUN_14032d650();
switch(*(undefined2 *)(*(longlong *)(param_1 + 0x1a0) + 8)) {
case 1:
puVar1 = (undefined4 *)FUN_14018b280(0x18);
if (puVar1 == (undefined4 *)0x0) {
puVar3 = (undefined8 *)0x0;
}
else {
puVar3 = (undefined8 *)(puVar1 + 2);
*puVar1 = 1;
*puVar3 = 0;
*(undefined8 *)(puVar1 + 4) = 0;
}
*(undefined8 **)(param_1 + 0x1a8) = puVar3;
*(undefined8 **)(param_1 + 0x1b0) = puVar3;
lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1a0) + 0x28);
break;
default:
goto LAB_140314b10;
case 3:
puVar1 = (undefined4 *)FUN_14018b280(0x28);
if (puVar1 == (undefined4 *)0x0) {
puVar3 = (undefined8 *)0x0;
}
else {
puVar3 = (undefined8 *)(puVar1 + 2);
*puVar1 = 2;
*puVar3 = 0;
*(undefined8 *)(puVar1 + 4) = 0;
*(undefined8 *)(puVar1 + 6) = 0;
*(undefined8 *)(puVar1 + 8) = 0;
}
*(undefined8 **)(param_1 + 0x1a8) = puVar3;
*(undefined8 **)(param_1 + 0x1b0) = puVar3;
*(undefined8 **)(param_1 + 0x1b8) = puVar3 + 2;
FUN_140317ec0(*(undefined8 *)(*(longlong *)(param_1 + 0x1a0) + 0x38),puVar3,param_1 + 0x428);
lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1a0) + 0x38);
goto LAB_1403147bb;
case 4:
puVar1 = (undefined4 *)FUN_14018b280(0x38);
if (puVar1 == (undefined4 *)0x0) {
puVar3 = (undefined8 *)0x0;
}
else {
puVar3 = (undefined8 *)(puVar1 + 2);
*puVar1 = 3;
*puVar3 = 0;
*(undefined8 *)(puVar1 + 4) = 0;
*(undefined8 *)(puVar1 + 6) = 0;
*(undefined8 *)(puVar1 + 8) = 0;
*(undefined8 *)(puVar1 + 10) = 0;
*(undefined8 *)(puVar1 + 0xc) = 0;
}
*(undefined8 **)(param_1 + 0x1a8) = puVar3;
*(undefined8 **)(param_1 + 0x1b8) = puVar3 + 2;
*(undefined8 **)(param_1 + 0x1b0) = puVar3;
*(undefined8 **)(param_1 + 0x1c0) = puVar3 + 4;
FUN_140317ec0(*(undefined8 *)(*(longlong *)(param_1 + 0x1a0) + 0x40),puVar3,param_1 + 0x428);
FUN_140317ec0(*(longlong *)(*(longlong *)(param_1 + 0x1a0) + 0x40) + 0x18,
*(undefined8 *)(param_1 + 0x1b8),param_1 + 0x428);
puVar3 = *(undefined8 **)(param_1 + 0x1c0);
lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1a0) + 0x40) + 0x30;
break;
case 5:
puVar1 = (undefined4 *)FUN_14018b280(0x48);
if (puVar1 == (undefined4 *)0x0) {
puVar3 = (undefined8 *)0x0;
}
else {
puVar3 = (undefined8 *)(puVar1 + 2);
*puVar1 = 4;
*puVar3 = 0;
*(undefined8 *)(puVar1 + 4) = 0;
*(undefined8 *)(puVar1 + 6) = 0;
*(undefined8 *)(puVar1 + 8) = 0;
*(undefined8 *)(puVar1 + 10) = 0;
*(undefined8 *)(puVar1 + 0xc) = 0;
*(undefined8 *)(puVar1 + 0xe) = 0;
*(undefined8 *)(puVar1 + 0x10) = 0;
}
*(undefined8 **)(param_1 + 0x1a8) = puVar3;
*(undefined8 **)(param_1 + 0x1b8) = puVar3 + 2;
*(undefined8 **)(param_1 + 0x1b0) = puVar3;
*(undefined8 **)(param_1 + 0x1c0) = puVar3 + 4;
*(undefined8 **)(param_1 + 0x1c8) = puVar3 + 6;
FUN_140317ec0(*(undefined8 *)(*(longlong *)(param_1 + 0x1a0) + 0x48),puVar3,param_1 + 0x428);
FUN_140317ec0(*(longlong *)(*(longlong *)(param_1 + 0x1a0) + 0x48) + 0x18,
*(undefined8 *)(param_1 + 0x1b8),param_1 + 0x428);
FUN_140317ec0(*(longlong *)(*(longlong *)(param_1 + 0x1a0) + 0x48) + 0x30,
*(undefined8 *)(param_1 + 0x1c0),param_1 + 0x428);
puVar3 = *(undefined8 **)(param_1 + 0x1c8);
lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1a0) + 0x48) + 0x48;
break;
case 6:
puVar1 = (undefined4 *)FUN_14018b280(0x28);
if (puVar1 == (undefined4 *)0x0) {
puVar3 = (undefined8 *)0x0;
}
else {
puVar3 = (undefined8 *)(puVar1 + 2);
*puVar1 = 2;
*puVar3 = 0;
*(undefined8 *)(puVar1 + 4) = 0;
*(undefined8 *)(puVar1 + 6) = 0;
*(undefined8 *)(puVar1 + 8) = 0;
}
*(undefined8 **)(param_1 + 0x1a8) = puVar3;
*(undefined8 **)(param_1 + 0x1b0) = puVar3;
*(undefined8 **)(param_1 + 0x1b8) = puVar3 + 2;
FUN_140317ec0(*(undefined8 *)(*(longlong *)(param_1 + 0x1a0) + 0x50),puVar3,param_1 + 0x428);
lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1a0) + 0x50);
LAB_1403147bb:
puVar3 = *(undefined8 **)(param_1 + 0x1b8);
lVar2 = lVar2 + 0x18;
break;
case 8:
case 9:
case 10:
case 0xb:
puVar1 = (undefined4 *)FUN_14018b280(0x68);
if (puVar1 == (undefined4 *)0x0) {
puVar4 = (undefined4 *)0x0;
}
else {
puVar4 = puVar1 + 2;
*puVar1 = 6;
FUN_1407e4830(puVar4,0,0x60);
}
*(undefined4 **)(param_1 + 0x1a8) = puVar4;
*(undefined4 **)(param_1 + 0x1b8) = puVar4 + 4;
*(undefined4 **)(param_1 + 0x1b0) = puVar4;
*(undefined4 **)(param_1 + 0x1c0) = puVar4 + 8;
lVar2 = param_1 + 0x428;
*(undefined4 **)(param_1 + 0x1c8) = puVar4 + 0xc;
*(undefined4 **)(param_1 + 0x1d0) = puVar4 + 0x10;
*(undefined4 **)(param_1 + 0x1d8) = puVar4 + 0x14;
FUN_140317ec0(*(undefined8 *)(*(longlong *)(param_1 + 0x1a0) + 0x60),puVar4,lVar2);
FUN_140317ec0(*(longlong *)(*(longlong *)(param_1 + 0x1a0) + 0x60) + 0x18,
*(undefined8 *)(param_1 + 0x1b8),lVar2);
FUN_140317ec0(*(longlong *)(*(longlong *)(param_1 + 0x1a0) + 0x60) + 0x30,
*(undefined8 *)(param_1 + 0x1c0),lVar2);
FUN_140317ec0(*(longlong *)(*(longlong *)(param_1 + 0x1a0) + 0x60) + 0x48,
*(undefined8 *)(param_1 + 0x1c8),lVar2);
FUN_140317ec0(*(longlong *)(*(longlong *)(param_1 + 0x1a0) + 0x60) + 0x60,
*(undefined8 *)(param_1 + 0x1d0),lVar2);
puVar3 = *(undefined8 **)(param_1 + 0x1d8);
lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1a0) + 0x60) + 0x78;
}
FUN_140317ec0(lVar2,puVar3,param_1 + 0x428);
LAB_140314b10:
lVar2 = param_1 + 0x428;
FUN_140318640(*(longlong *)(param_1 + 0x1a0) + 0x68,param_1 + 0x1e0,lVar2);
FUN_140318640(*(longlong *)(param_1 + 0x1a0) + 0x80,param_1 + 0x1f0,lVar2);
FUN_140318740(*(longlong *)(param_1 + 0x1a0) + 0x98,param_1 + 0x200,lVar2);
FUN_140318740(*(longlong *)(param_1 + 0x1a0) + 0xb0,param_1 + 0x210,lVar2);
FUN_140318740(*(longlong *)(param_1 + 0x1a0) + 0xf8,param_1 + 0x240,lVar2);
FUN_140318740(*(longlong *)(param_1 + 0x1a0) + 0x110,param_1 + 0x250,lVar2);
FUN_140318740(*(longlong *)(param_1 + 0x1a0) + 0x260,param_1 + 0x260,lVar2);
FUN_1403180d0(*(longlong *)(param_1 + 0x1a0) + 0x128,param_1 + 0x270,lVar2);
FUN_1403180d0(*(longlong *)(param_1 + 0x1a0) + 0x140,param_1 + 0x290,lVar2);
FUN_140317ec0(*(longlong *)(param_1 + 0x1a0) + 0x158,param_1 + 0x2b0,lVar2);
FUN_140317ec0(*(longlong *)(param_1 + 0x1a0) + 0x170,param_1 + 0x2c0,lVar2);
FUN_140317ec0(*(longlong *)(param_1 + 0x1a0) + 0x1a0,param_1 + 0x2f0,lVar2);
FUN_140317ec0(*(longlong *)(param_1 + 0x1a0) + 0x1b8,param_1 + 0x300,lVar2);
FUN_140317ec0(*(longlong *)(param_1 + 0x1a0) + 0x1d0,param_1 + 0x310,lVar2);
FUN_140317ec0(*(longlong *)(param_1 + 0x1a0) + 0x1e8,param_1 + 800,lVar2);
FUN_140317ec0(*(longlong *)(param_1 + 0x1a0) + 0x200,param_1 + 0x330,lVar2);
FUN_140317ec0(*(longlong *)(param_1 + 0x1a0) + 0x218,param_1 + 0x340,lVar2);
FUN_140317ec0(*(longlong *)(param_1 + 0x1a0) + 0x230,param_1 + 0x350,lVar2);
FUN_140317ec0(*(longlong *)(param_1 + 0x1a0) + 0x248,param_1 + 0x360,lVar2);
*(undefined *)(param_1 + 0x427) = 1;
return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140314d80(longlong *param_1,float *param_2,float *param_3,float *param_4)

{
    undefined (*pauVar1) [16];
    undefined4 *puVar2;
    float *pfVar3;
    float fVar4;
    short sVar5;
    longlong lVar6;
    undefined8 *puVar7;
    int iVar8;
    uint uVar9;
    longlong lVar10;
    undefined4 *puVar11;
    undefined (*pauVar12) [12];
    longlong *plVar13;
    longlong lVar14;
    ulonglong uVar15;
    ulonglong uVar16;
    ulonglong uVar17;
    undefined2 uVar18;
    uint uVar19;
    float *pfVar20;
    undefined4 *puVar21;
    longlong lVar22;
    uint uVar23;
    uint uVar24;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    float extraout_XMM0_Da_02;
    float extraout_XMM0_Da_03;
    float extraout_XMM0_Da_04;
    undefined4 extraout_XMM0_Da_05;
    undefined4 extraout_XMM0_Da_06;
    undefined4 extraout_XMM0_Da_07;
    float extraout_XMM0_Da_08;
    undefined auVar25 [16];
    float fVar26;
    float fVar27;
    float fVar28;
    undefined auVar29 [16];
    float fVar30;
    undefined4 uVar31;
    undefined4 uVar32;
    undefined4 uVar33;
    undefined4 uVar34;
    undefined4 uVar35;
    undefined4 uVar36;
    undefined4 uVar37;
    undefined auStack1064 [32];
    undefined (*local_408) [16];
    float *local_400;
    undefined *local_3f8;
    float *local_3f0;
    float *local_3e8;
    undefined local_3d8 [8];
    undefined4 uStack976;
    undefined8 local_3c8;
    undefined local_3b8 [16];
    float local_3a8;
    float fStack932;
    float fStack928;
    float fStack924;
    float local_398;
    float fStack916;
    float fStack912;
    float fStack908;
    float local_388;
    float fStack900;
    float fStack896;
    float fStack892;
    undefined local_378 [8];
    undefined8 uStack880;
    undefined local_368 [16];
    float local_358;
    float fStack852;
    float fStack848;
    float fStack844;
    undefined local_348 [16];
    undefined local_328 [16];
    undefined local_318 [16];
    undefined local_308 [64];
    undefined *local_2c8 [2];
    undefined4 local_2b8;
    undefined4 uStack688;
    undefined4 local_2a8;
    undefined4 uStack676;
    undefined4 uStack672;
    uint uStack668;
    undefined local_298 [16];
    undefined4 local_288;
    undefined4 uStack644;
    undefined4 uStack640;
    undefined4 uStack636;
    float *local_278;
    float *local_270;
    undefined local_228 [32];
    undefined4 local_208;
    undefined local_148 [64];
    undefined local_108 [64];
    ulonglong local_c8;

    local_c8 = DAT_140c0f7b0 ^ (ulonglong)auStack1064;
    local_3a8 = *param_2;
    fStack932 = param_2[1];
    fStack928 = param_2[2];
    fStack924 = param_2[3];
    local_398 = param_2[4];
    fStack916 = param_2[5];
    fStack912 = param_2[6];
    fStack908 = param_2[7];
    uVar16 = 0;
    fVar30 = 0.0;
    uVar31 = 0;
    uVar32 = 0;
    uVar33 = 0;
    local_388 = param_2[8];
    fStack900 = param_2[9];
    fStack896 = param_2[10];
    fStack892 = param_2[0xb];
    _local_378 = *(undefined (*) [16])(param_2 + 0xc);
    local_3c8 = param_3;
    if ((*(int *)(param_1[1] + 0x28) != 0) && (*(int *)(param_1[1] + 8) == 2)) {
        uVar34 = 0;
        plVar13 = *(longlong **)(*(longlong *)(param_1[5] + 0x10) + 0x1e8);
        if (plVar13 != (longlong *)0x0) {
            local_3b8 = CONCAT412(SUB164(_local_378 >> 0x60,0) + fRam0000000140c7787c,
                                  CONCAT48(SUB164(_local_378 >> 0x40,0) + fRam0000000140c77878,
                                           CONCAT44(SUB164(_local_378 >> 0x20,0) + fRam0000000140c77874,
                                                    SUB164(_local_378,0) + _DAT_140c77870)));
            local_408 = (undefined (*) [16])0x0;
            iVar8 = (**(code **)(*plVar13 + 0x1b8))(plVar13,local_3b8,local_228,1);
            if (iVar8 != 0) {
                uVar34 = local_208;
            }
        }
    }
    FUN_140313c20(param_1);
    FUN_14032fe20(param_1,&local_3a8);
    local_278 = &local_3a8;
    FUN_1401afc20(&local_278);
    fVar28 = 1.0;
    uVar23 = *(uint *)(param_1[5] + 0x5b0);
    uVar24 = 100;
    if (uVar23 < 100) {
        uVar24 = uVar23;
    }
    uVar23 = 0;
    if ((*(short *)(param_1[0x34] + 8) == 0xc) && (param_1[2] != *(longlong *)(param_1[5] + 0x4c0))) {
        puVar21 = &DAT_140af1508;
        *(undefined4 *)((longlong)param_1 + 0x3dc) = 0;
        auVar29 = CONCAT412(uVar33,CONCAT48(uVar32,CONCAT44(uVar31,fVar30)));
        uVar15 = uVar16;
        do {
            uVar19 = (uint)uVar15;
            iVar8 = (**(code **)(**(longlong **)(param_1[5] + 0x4c0) + 0x350))();
            if (iVar8 == 0) break;
            if (param_1[4] == 0) {
                lVar10 = FUN_14018b280(0x40);
                param_1[4] = lVar10;
            }
            puVar11 = (undefined4 *)(**(code **)(**(longlong **)(param_1[5] + 0x4c0) + 0x358))();
            uVar34 = puVar11[1];
            uVar35 = puVar11[2];
            uVar36 = puVar11[3];
            puVar2 = (undefined4 *)(param_1[4] + uVar15 * 0x10);
            *puVar2 = *puVar11;
            puVar2[1] = uVar34;
            puVar2[2] = uVar35;
            puVar2[3] = uVar36;
            if (uVar19 != 0) {
                pfVar20 = (float *)(param_1[4] + uVar15 * 0x10);
                pfVar3 = (float *)(param_1[4] + (ulonglong)(uVar19 - 1) * 0x10);
                fVar26 = *pfVar20 - *pfVar3;
                fVar27 = pfVar20[1] - pfVar3[1];
                auVar29 = CONCAT124(SUB1612(auVar29 >> 0x20,0),
                                    SUB164(auVar29,0) + SQRT(fVar26 * fVar26 + fVar27 * fVar27 + 0.0));
            }
            uVar19 = uVar19 + 1;
            uVar15 = (ulonglong)uVar19;
            *(int *)((longlong)param_1 + (longlong)(puVar21 + -0x502bc44b)) = SUB164(auVar29,0);
            puVar21 = puVar21 + 1;
        } while (uVar19 < 4);
        *(uint *)(param_1 + 3) = uVar19;
        if (uVar19 == 0) goto LAB_140315df8;
        uVar15 = uVar16;
        if (3 < (int)uVar19) {
            uVar9 = (uVar19 - 4 >> 2) + 1;
            uVar17 = (ulonglong)uVar9;
            fVar26 = fVar28 / SUB164(auVar29,0);
            uVar23 = uVar9 * 4;
            uVar15 = (ulonglong)uVar9 * 4;
            plVar13 = param_1 + 0x7c;
            do {
                *(float *)((longlong)plVar13 + -4) = fVar26 * *(float *)((longlong)plVar13 + -4);
                *(float *)plVar13 = fVar26 * *(float *)plVar13;
                *(float *)((longlong)plVar13 + 4) = fVar26 * *(float *)((longlong)plVar13 + 4);
                *(float *)(plVar13 + 1) = fVar26 * *(float *)(plVar13 + 1);
                uVar17 = uVar17 - 1;
                plVar13 = plVar13 + 2;
            } while (uVar17 != 0);
        }
        if (uVar23 < uVar19) {
            uVar17 = (ulonglong)(uVar19 - uVar23);
            pfVar20 = (float *)((longlong)param_1 + (uVar15 + 0xf7) * 4);
            do {
                *pfVar20 = (fVar28 / SUB164(auVar29,0)) * *pfVar20;
                uVar17 = uVar17 - 1;
                pfVar20 = pfVar20 + 1;
            } while (uVar17 != 0);
        }
        param_1[2] = *(longlong *)(param_1[5] + 0x4c0);
        param_3 = local_3c8;
    }
    fVar26 = *(float *)(param_1 + 0x5a);
    fVar27 = *(float *)((longlong)param_1 + 0x2d4);
    fVar4 = *(float *)(param_1 + 0x5b);
    *(undefined (*) [16])(param_1 + 0x76) =
            CONCAT412(fVar27 * param_4[7] + fVar26 * param_4[3] + fVar4 * param_4[0xb],
                      CONCAT48(fVar27 * param_4[6] + fVar26 * param_4[2] + fVar4 * param_4[10],
                               CONCAT44(fVar27 * param_4[5] + fVar26 * param_4[1] + fVar4 * param_4[9],
                                        fVar27 * param_4[4] + fVar26 * *param_4 + fVar4 * param_4[8])));
    if ((*(byte *)(param_1[0x34] + 0xec8) & 2) == 0) {
        *(undefined (*) [16])(param_1 + 0x78) = _local_378;
    }
    else {
        fVar26 = *(float *)(param_1 + 0x6e);
        fVar27 = *(float *)((longlong)param_1 + 0x374);
        fVar4 = *(float *)(param_1 + 0x6f);
        *(undefined (*) [16])(param_1 + 0x78) =
                CONCAT412(fVar27 * fStack908 + fVar26 * fStack924 + fVar4 * fStack892 + uStack880._4_4_,
                          CONCAT48(fVar27 * fStack912 + fVar26 * fStack928 + fVar4 * fStack896 +
                                   (float)uStack880,
                                   CONCAT44(fVar27 * fStack916 + fVar26 * fStack932 + fVar4 * fStack900 +
                                            local_378._4_4_,
                                            fVar27 * local_398 + fVar26 * local_3a8 + fVar4 * local_388 +
                                            local_378._0_4_)));
    }
    uVar15 = uVar16;
    if (*(int *)(*(longlong *)(param_1[5] + 0x40) + 0x308) != 0) {
        do {
            lVar10 = param_1[5];
            lVar22 = *(longlong *)(*(longlong *)(lVar10 + 0x40) + 0x310);
            sVar5 = *(short *)(lVar22 + 2 + uVar15 * 0x50);
            if (sVar5 == 0) {
                pfVar20 = (float *)((ulonglong)*(ushort *)(lVar22 + uVar15 * 0x50) * 0x40 + 0x30 +
                                    *(longlong *)(lVar10 + 0x338));
                fVar26 = *pfVar20;
                fVar27 = pfVar20[1];
                fVar4 = pfVar20[2];
                *(undefined (*) [16])(local_108 + uVar15 * 0x10) =
                        CONCAT412(fVar27 * param_3[7] + fVar26 * param_3[3] + fVar4 * param_3[0xb] +
                                  param_3[0xf],
                                  CONCAT48(fVar27 * param_3[6] + fVar26 * param_3[2] + fVar4 * param_3[10] +
                                           param_3[0xe],
                                           CONCAT44(fVar27 * param_3[5] + fVar26 * param_3[1] +
                                                    fVar4 * param_3[9] + param_3[0xd],
                                                    fVar27 * param_3[4] + fVar26 * *param_3 +
                                                    fVar4 * param_3[8] + param_3[0xc])));
            }
            else if (sVar5 == 1) {
                local_278 = (float *)((ulonglong)*(ushort *)(lVar22 + uVar15 * 0x50) * 0x40 +
                                      *(longlong *)(lVar10 + 0x338));
                _local_3d8 = CONCAT88(param_3,local_278);
                uVar17 = uVar15;
                local_270 = param_3;
                FUN_1401afb10(&local_278,local_348);
                local_2c8[0] = local_348;
                FUN_1401afc20(local_2c8);
                local_348 = CONCAT412(local_288,CONCAT48(SUB164(local_298,0),CONCAT44(local_2a8,local_2b8)))
                            & (undefined  [16])0xffffffffffffffff;
                *(undefined (*) [16])(local_148 + uVar15 * 0x10) =
                        ZEXT1216(CONCAT48(uStack644,CONCAT44(SUB164(local_298 >> 0x20,0),uStack676))) << 0x20;
                local_328 = CONCAT412(uStack640,
                                      CONCAT48(SUB164(local_298 >> 0x40,0),CONCAT44(uStack672,uStack688)));
                local_318 = CONCAT412(uStack636,ZEXT412(uStack668) << 0x20);
                uVar15 = uVar17;
            }
            uVar23 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar23;
        } while (uVar23 < *(uint *)(*(longlong *)(param_1[5] + 0x40) + 0x308));
    }
    lVar10 = param_1[5];
    uVar34 = 0;
    uVar35 = 0;
    uVar36 = 0;
    uVar37 = 0;
    auVar29 = ZEXT416((uint)(0.0 - *(float *)(lVar10 + 0xb0))) & (undefined  [16])0xffffffffffffffff;
    fVar26 = 0.0 - *(float *)(lVar10 + 0xb4);
    fVar27 = SUB164(auVar29 >> 0x40,0) - *(float *)(lVar10 + 0xb8);
    _local_3d8 = CONCAT412(SUB164(auVar29 >> 0x60,0) - *(float *)(lVar10 + 0xbc),
                           CONCAT48(fVar27,CONCAT44(fVar26,SUB164(auVar29,0))));
    if ((*(char *)param_1[0x34] == '\x02') && (lVar10 = param_1[0x8d], lVar10 != 0)) {
        lVar22 = lVar10 * 0x1c;
        do {
            lVar6 = param_1[0x8c];
            lVar14 = lVar22 + -0x1c;
            fVar4 = *(float *)(&DAT_ffffffffffffffe8 + lVar6 + lVar22);
            *(float *)(lVar14 + lVar6) = SUB164(auVar29,0) + *(float *)(lVar14 + lVar6);
            *(float *)(&DAT_ffffffffffffffe8 + lVar6 + lVar22) = fVar26 + fVar4;
            *(float *)(lVar22 + -0x14 + lVar6) = fVar27 + *(float *)(lVar22 + -0x14 + lVar6);
            lVar10 = lVar10 + -1;
            lVar22 = lVar14;
        } while (lVar10 != 0);
        uVar23 = *(uint *)((longlong)param_1 + 0x584);
        uVar19 = *(uint *)(*(longlong *)(param_1[5] + 0x10) + 0xd0);
        if (uVar19 < uVar23) {
            fVar27 = (float)(ulonglong)(uVar19 - *(int *)(param_1 + 0xb0));
            fVar26 = (float)(ulonglong)(uVar23 - *(int *)(param_1 + 0xb0));
            auVar29 = divps(CONCAT412(fVar27 * (*(float *)((longlong)param_1 + 0x57c) -
                    *(float *)((longlong)param_1 + 0x56c)),
            CONCAT48(fVar27 * (*(float *)(param_1 + 0xaf) -
                               *(float *)(param_1 + 0xad)),
                     CONCAT44(fVar27 * (*(float *)((longlong)param_1 + 0x574) -
                    *(float *)((longlong)param_1 + 0x564)),
            fVar27 * (*(float *)(param_1 + 0xae) -
                      *(float *)(param_1 + 0xac))))),
            CONCAT412(fVar26,CONCAT48(fVar26,CONCAT44(fVar26,fVar26))) &
            (undefined  [16])0xffffffffffffffff);
            *(undefined (*) [16])(param_1 + 0xaa) =
                    CONCAT412(SUB164(auVar29 >> 0x60,0) + *(float *)((longlong)param_1 + 0x56c),
            CONCAT48(SUB164(auVar29 >> 0x40,0) + *(float *)(param_1 + 0xad),
                     CONCAT44(SUB164(auVar29 >> 0x20,0) +
                              *(float *)((longlong)param_1 + 0x564),
            SUB164(auVar29,0) + *(float *)(param_1 + 0xac))));
        }
        else {
            plVar13 = (longlong *)param_1[7];
            lVar10 = param_1[0x34];
            *(uint *)(param_1 + 0xb0) = uVar23;
            if (*(int *)(param_1 + 0xb1) == 0) {
                iVar8 = (**(code **)(*plVar13 + 0x40))
                        (plVar13,*(undefined4 *)(lVar10 + 0xeac),*(undefined4 *)(lVar10 + 0xeb0));
                pauVar1 = (undefined (*) [16])(param_1 + 0xae);
                local_3b8 = CONCAT412(uVar37,CONCAT48(uVar36,CONCAT44(uVar35,uVar34)));
                *(int *)((longlong)param_1 + 0x584) =
                iVar8 + *(int *)(*(longlong *)(param_1[5] + 0x10) + 0xd0);
                local_3e8 = (float *)local_3b8;
                *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)*pauVar1;
                *(undefined4 *)((longlong)param_1 + 0x564) = *(undefined4 *)((longlong)param_1 + 0x574);
                *(undefined4 *)(param_1 + 0xad) = *(undefined4 *)(param_1 + 0xaf);
                *(undefined4 *)((longlong)param_1 + 0x56c) = *(undefined4 *)((longlong)param_1 + 0x57c);
                local_3f8 = local_308;
                local_400 = &local_3a8;
                local_408 = pauVar1;
                local_3f0 = param_3;
                iVar8 = FUN_14032da00(param_1,0,1,local_368);
                if (iVar8 == 0) {
                    auVar29 = *(undefined (*) [16])(param_1 + 0xac);
                    *pauVar1 = auVar29;
                    goto LAB_14031545f;
                }
                fVar27 = (float)(ulonglong)
                        (uint)(*(int *)(*(longlong *)(param_1[5] + 0x10) + 0xd0) -
                               *(int *)(param_1 + 0xb0));
                fVar26 = (float)(ulonglong)
                        (uint)(*(int *)((longlong)param_1 + 0x584) - *(int *)(param_1 + 0xb0));
                auVar29 = divps(CONCAT412(fVar27 * (*(float *)((longlong)param_1 + 0x57c) -
                        *(float *)((longlong)param_1 + 0x56c)),
                CONCAT48(fVar27 * (*(float *)(param_1 + 0xaf) -
                                   *(float *)(param_1 + 0xad)),
                         CONCAT44(fVar27 * (*(float *)((longlong)param_1 + 0x574)
                - *(float *)((longlong)param_1 + 0x564)
                ),
                fVar27 * (*(float *)*pauVar1 -
                          *(float *)(param_1 + 0xac))))),
                CONCAT412(fVar26,CONCAT48(fVar26,CONCAT44(fVar26,fVar26))) &
                (undefined  [16])0xffffffffffffffff);
                *(undefined (*) [16])(param_1 + 0xaa) =
                        CONCAT412(SUB164(auVar29 >> 0x60,0) + *(float *)((longlong)param_1 + 0x56c),
                CONCAT48(SUB164(auVar29 >> 0x40,0) + *(float *)(param_1 + 0xad),
                         CONCAT44(SUB164(auVar29 >> 0x20,0) +
                                  *(float *)((longlong)param_1 + 0x564),
                SUB164(auVar29,0) + *(float *)(param_1 + 0xac))));
            }
            else {
                iVar8 = (**(code **)(*plVar13 + 0x40))
                        (plVar13,*(undefined4 *)(lVar10 + 0xea4),*(undefined4 *)(lVar10 + 0xea8));
                *(int *)((longlong)param_1 + 0x584) =
                iVar8 + *(int *)(*(longlong *)(param_1[5] + 0x10) + 0xd0);
                auVar29 = *(undefined (*) [16])(param_1 + 0xae);
                *(undefined (*) [16])(param_1 + 0xac) = auVar29;
                LAB_14031545f:
                *(undefined (*) [16])(param_1 + 0xaa) = auVar29;
            }
            *(uint *)(param_1 + 0xb1) = (uint)(*(int *)(param_1 + 0xb1) == 0);
        }
    }
    if ((uVar24 != 0) && (lVar10 = param_1[0x8d], lVar10 != 0)) {
        auVar29 = ZEXT1216(ZEXT812(0x41200000));
        lVar22 = lVar10 * 0x1c;
        do {
            lVar22 = lVar22 + -0x1c;
            lVar10 = lVar10 + -1;
            pfVar20 = (float *)(param_1[0x8c] + lVar22);
            if (0 < *(short *)(pfVar20 + 5)) {
                local_408 = (undefined (*) [16])local_148;
                FUN_1403174a0(param_1,pfVar20,uVar24,local_108);
            }
            if (*(char *)param_1[0x34] == '\x02') {
                if (*pfVar20 < fVar30) {
                    FUN_1408fde98();
                    fVar26 = extraout_XMM0_Da_00 + SUB164(auVar29,0);
                }
                else {
                    FUN_1408fde98();
                    fVar26 = extraout_XMM0_Da - SUB164(auVar29,0);
                }
                *pfVar20 = fVar26;
                if (pfVar20[1] < fVar30) {
                    FUN_1408fde98();
                    fVar26 = extraout_XMM0_Da_02 + SUB164(auVar29,0);
                }
                else {
                    FUN_1408fde98();
                    fVar26 = extraout_XMM0_Da_01 - SUB164(auVar29,0);
                }
                pfVar20[1] = fVar26;
                if (pfVar20[2] < fVar30) {
                    FUN_1408fde98();
                    fVar26 = extraout_XMM0_Da_04 + SUB164(auVar29,0);
                }
                else {
                    FUN_1408fde98();
                    fVar26 = extraout_XMM0_Da_03 - SUB164(auVar29,0);
                }
                pfVar20[2] = fVar26;
            }
            if (*(short *)(pfVar20 + 5) < 1) {
                if (lVar10 != param_1[0x8d] + -1) {
                    lVar6 = param_1[0x8c];
                    lVar14 = param_1[0x8d] * 0x1c;
                    *(undefined4 *)(lVar6 + lVar22) = *(undefined4 *)(lVar14 + -0x1c + lVar6);
                    *(undefined4 *)(lVar6 + 4 + lVar22) =
                            *(undefined4 *)(&DAT_ffffffffffffffe8 + lVar6 + lVar14);
                    *(undefined4 *)(lVar6 + 8 + lVar22) = *(undefined4 *)(lVar14 + -0x14 + lVar6);
                    *(undefined4 *)(lVar6 + 0xc + lVar22) = *(undefined4 *)(lVar14 + -0x10 + lVar6);
                    *(undefined2 *)(lVar6 + 0x10 + lVar22) = *(undefined2 *)(lVar14 + -0xc + lVar6);
                    *(undefined2 *)(lVar6 + 0x12 + lVar22) = *(undefined2 *)(lVar14 + -10 + lVar6);
                    *(undefined2 *)(lVar6 + 0x14 + lVar22) = *(undefined2 *)(lVar14 + -8 + lVar6);
                    *(undefined2 *)(lVar6 + 0x16 + lVar22) = *(undefined2 *)(lVar14 + -6 + lVar6);
                    *(undefined2 *)(lVar6 + 0x18 + lVar22) = *(undefined2 *)(lVar14 + -4 + lVar6);
                    *(undefined2 *)(lVar6 + 0x1a + lVar22) = *(undefined2 *)(lVar14 + -2 + lVar6);
                }
                FUN_140317cf0(param_1 + 0x8c);
            }
        } while (lVar10 != 0);
    }
    iVar8 = (**(code **)(*param_1 + 0x48))();
    if ((iVar8 == 0) ||
        ((*(short *)(param_1[0x34] + 8) == 0xc &&
          (*(float *)((ulonglong)
                      *(ushort *)
                              ((ulonglong)*(ushort *)param_1[1] * 0x160 + 6 +
                               *(longlong *)(*(longlong *)(param_1[5] + 0x40) + 0x188)) * 0x60 + 0x30 +
                      *(longlong *)(param_1[5] + 0x1f0)) <= 0.5)))) {
        LAB_140315c3f:
    }
    else {
        if (*(char *)((longlong)param_1 + 0x191) == '\0') {
            FUN_140318540(param_1[1] + 0x50,param_1 + 10,param_1 + 0x31);
            *(undefined *)((longlong)param_1 + 0x191) = 1;
        }
        iVar8 = *(int *)(param_1 + 10);
        for (puVar7 = (undefined8 *)param_1[0x31]; puVar7 != (undefined8 *)0x0;
        puVar7 = (undefined8 *)puVar7[2]) {
            (**(code **)*puVar7)(puVar7,param_1[6]);
        }
        if (*(int *)(param_1 + 10) == 0) goto LAB_140315c3f;
        FUN_1403146b0(param_1);
        for (puVar7 = (undefined8 *)param_1[0x85]; puVar7 != (undefined8 *)0x0;
        puVar7 = (undefined8 *)puVar7[2]) {
            (**(code **)*puVar7)(puVar7,param_1[6]);
        }
        if (iVar8 == 0) {
            fVar26 = *(float *)(param_1 + 0x84);
            if (*(float *)(param_1 + 0x84) <= fVar28) {
                fVar26 = fVar28;
            }
            *(float *)(param_1 + 0x84) = fVar26;
        }
        iVar8 = (**(code **)(*(longlong *)param_1[7] + 0x40))
        ((longlong *)param_1[7],*(undefined4 *)(param_1 + 0x40),
                *(undefined4 *)(param_1 + 0x42));
        if (iVar8 < 1) {
            uVar23 = 1;
        }
        else {
            uVar23 = (**(code **)(*(longlong *)param_1[7] + 0x40))
            ((longlong *)param_1[7],*(undefined4 *)(param_1 + 0x40),
                    *(undefined4 *)(param_1 + 0x42));
        }
        uVar24 = *(uint *)((longlong *)param_1[5] + 0xb6);
        uVar15 = (ulonglong)uVar24;
        if (100 < uVar24) {
            uVar15 = 100;
        }
        uVar24 = DAT_140c42500;
        if ((int)*DAT_140c63750 < (int)DAT_140c42500) {
            uVar24 = *DAT_140c63750;
        }
        uVar17 = (ulonglong)(int)uVar24;
        auVar29 = CONCAT124(SUB1612((ZEXT416((uint)(float)uVar15) & (undefined  [16])0xffffffffffffffff)
        >> 0x20,0),
        SUB164(ZEXT416((uint)(float)uVar15) & (undefined  [16])0xffffffffffffffff,0)
        / (float)(ulonglong)uVar23);
        if (((&DAT_140c42510)[uVar17] != '\0') &&
            (uVar17 = (**(code **)(*(longlong *)param_1[5] + 0xf8))(), 1e-05 < *(float *)(uVar17 + 8))) {
            lVar10 = (**(code **)(*(longlong *)param_1[5] + 0xf8))();
            fVar28 = *(float *)((longlong)param_1 + 0x394) / *(float *)(lVar10 + 8);
            uVar23 = *DAT_140c63750;
            uVar24 = DAT_140c42540;
            if ((int)uVar23 < (int)DAT_140c42540) {
                uVar24 = uVar23;
            }
            uVar17 = (ulonglong)uVar24;
            if (*(float *)(&DAT_140c42550 + (longlong)(int)uVar24 * 4) <= fVar28) {
                uVar24 = DAT_140c425a0;
                if ((int)uVar23 < (int)DAT_140c425a0) {
                    uVar24 = uVar23;
                }
                uVar17 = (ulonglong)(int)uVar24;
                if (fVar28 < *(float *)(&DAT_140c425b0 + uVar17 * 4)) {
                    uVar24 = DAT_140c42540;
                    if ((int)uVar23 < (int)DAT_140c42540) {
                        uVar24 = uVar23;
                    }
                    uVar17 = (ulonglong)(int)uVar24;
                    auVar29 = CONCAT124(SUB1612(auVar29 >> 0x20,0),
                                        SUB164(auVar29,0) *
                                        (fVar28 - *(float *)(&DAT_140c42550 + uVar17 * 4)) * _DAT_140c79e08);
                }
            }
            else {
                auVar29 = CONCAT412(uVar33,CONCAT48(uVar32,CONCAT44(uVar31,fVar30)));
            }
        }
        uVar23 = (uint)uVar17;
        if (*(char *)((longlong)param_1 + 0x426) == '\0') {
            uVar23 = DAT_140c42600;
            if ((int)*DAT_140c63750 < (int)DAT_140c42600) {
                uVar23 = *DAT_140c63750;
            }
            auVar29 = CONCAT124(SUB1612(auVar29 >> 0x20,0),
                                SUB164(auVar29,0) * *(float *)(&DAT_140c42610 + (longlong)(int)uVar23 * 4)
            );
        }
        fVar28 = SUB164(auVar29,0) + *(float *)(param_1 + 0x84);
        auVar25 = CONCAT124(SUB1612(auVar29 >> 0x20,0),fVar28);
        iVar8 = (int)fVar28;
        *(float *)(param_1 + 0x84) = fVar28;
        if ((iVar8 != -0x80000000) && ((float)iVar8 != fVar28)) {
            uVar31 = SUB164(auVar29 >> 0x20,0);
            uVar15 = SUB168(auVar25,0);
            uVar23 = movmskps(uVar23,CONCAT88(SUB168(CONCAT412(uVar31,CONCAT48(uVar31,uVar15)) >> 0x40,0),
                                              uVar15 & 0xffffffff | uVar15 << 0x20));
            auVar25 = ZEXT416((uint)(float)(iVar8 - (uVar23 & 1)));
        }
        fVar28 = SUB164(auVar25,0);
        iVar8 = (**(code **)(*(longlong *)param_1[7] + 0x40))
        ((longlong *)param_1[7],*(undefined4 *)(param_1 + 0x3c),
                *(undefined4 *)(param_1 + 0x3e));
        uVar23 = *(uint *)(param_1 + 0x4c);
        uVar24 = iVar8 * (int)(longlong)fVar28;
        if (0x400 < uVar23) {
            uVar23 = 0x400;
        }
        *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x84) - fVar28;
        if (((ulonglong)uVar23 < (ulonglong)uVar24 + param_1[0x8d]) &&
        (uVar24 = 0, *(uint *)(param_1 + 0x8d) < uVar23)) {
            uVar24 = uVar23 - *(uint *)(param_1 + 0x8d);
        }
        if ((*(byte *)(param_1[0x34] + 10) & 1) != 0) {
            sVar5 = *(short *)(param_1[0x34] + 8);
            if (sVar5 == 1) {
                (**(code **)(*(longlong *)param_1[7] + 0x38))();
                *(undefined4 *)((longlong)param_1 + 0x3d4) = extraout_XMM0_Da_07;
            }
            else if (sVar5 == 5) {
                (**(code **)(*(longlong *)param_1[7] + 0x38))();
                *(undefined4 *)((longlong)param_1 + 0x3d4) = extraout_XMM0_Da_05;
                (**(code **)(*(longlong *)param_1[7] + 0x38))();
                *(undefined4 *)(param_1 + 0x7b) = extraout_XMM0_Da_06;
            }
        }
        pfVar20 = local_3c8;
        fVar28 = (float)(ulonglong)uVar24;
        auVar29 = divps(CONCAT412(*(float *)((longlong)param_1 + 0x3ac) - uStack880._4_4_,
                CONCAT48(*(float *)(param_1 + 0x75) - (float)uStack880,
                         CONCAT44(*(float *)((longlong)param_1 + 0x3a4) -
                local_378._4_4_,
                *(float *)(param_1 + 0x74) - local_378._0_4_))),
        CONCAT412(fVar28,CONCAT48(fVar28,CONCAT44(fVar28,fVar28))) &
        (undefined  [16])0xffffffffffffffff);
        if (uVar24 != 0) {
            fVar28 = 127.0;
            fVar26 = 255.0;
            do {
                if (*(int *)(param_1 + 0x72) == 0) {
                    local_368 = CONCAT412(uVar37,CONCAT48(uVar36,CONCAT44(uVar35,uVar34)));
                    local_3e8 = (float *)local_368;
                }
                else {
                    fStack844 = (float)(ulonglong)((uVar24 - (int)uVar16) - 1);
                    local_3e8 = &local_358;
                    local_358 = fStack844 * SUB164(auVar29,0);
                    fStack852 = fStack844 * SUB164(auVar29 >> 0x20,0);
                    fStack848 = fStack844 * SUB164(auVar29 >> 0x40,0);
                    fStack844 = fStack844 * SUB164(auVar29 >> 0x60,0);
                }
                local_3f0 = pfVar20;
                local_3f8 = local_308;
                local_400 = &local_3a8;
                local_408 = (undefined (*) [16])local_3b8;
                iVar8 = FUN_14032da00(param_1,uVar16,uVar24,local_3d8);
                if (iVar8 != 0) {
                    iVar8 = (**(code **)(*(longlong *)param_1[7] + 0x40))
                    ((longlong *)param_1[7],*(undefined4 *)(param_1 + 0x48));
                    (**(code **)(*(longlong *)param_1[7] + 0x38))();
                    lVar10 = param_1[0x8d];
                    plVar13 = param_1 + 0x8c;
                    fVar27 = extraout_XMM0_Da_08;
                    FUN_140317cf0(plVar13,lVar10 + 1);
                    lVar10 = lVar10 * 0x1c;
                    *(undefined2 *)(lVar10 + 0x1a + *plVar13) = *(undefined2 *)((longlong)param_1 + 0x424);
                    lVar22 = *plVar13;
                    *(undefined4 *)(lVar10 + lVar22) = local_3d8._0_4_;
                    *(undefined4 *)(lVar10 + 4 + lVar22) = local_3d8._4_4_;
                    *(undefined4 *)(lVar10 + 8 + lVar22) = uStack976;
                    FUN_1401c9800(&local_3c8,local_3b8);
                    lVar22 = *plVar13;
                    if (fVar28 <= fVar27) {
                        fVar27 = fVar28;
                    }
                    *(undefined4 *)(lVar10 + 0xc + lVar22) = (undefined4)local_3c8;
                    *(undefined2 *)(lVar10 + 0x10 + lVar22) = local_3c8._4_2_;
                    uVar18 = (undefined2)iVar8;
                    if (0x7fff < iVar8) {
                        uVar18 = 0x7fff;
                    }
                    *(undefined2 *)(lVar10 + 0x16 + *plVar13) = uVar18;
                    *(undefined2 *)(lVar10 + 0x14 + *plVar13) = uVar18;
                    *(short *)(lVar10 + 0x18 + *plVar13) = (short)(int)(fVar27 * fVar26);
                    *(short *)((longlong)param_1 + 0x424) = *(short *)((longlong)param_1 + 0x424) + 1;
                    if ((*(int *)(param_1 + 0x2f) != -1) &&
                        (iVar8 = *(int *)(param_1 + 0x2f) + -1, *(int *)(param_1 + 0x2f) = iVar8, iVar8 == 0))
                        break;
                }
                uVar23 = (int)uVar16 + 1;
                uVar16 = (ulonglong)uVar23;
            } while (uVar23 < uVar24);
            goto LAB_140315c3f;
        }
    }
    uVar33 = uRam0000000140c798cc;
    uVar32 = uRam0000000140c798c8;
    uVar31 = uRam0000000140c798c4;
    uVar15 = 0;
    *(undefined4 *)(param_1 + 0x1a) = _DAT_140c798c0;
    *(undefined4 *)((longlong)param_1 + 0xd4) = uVar31;
    *(undefined4 *)(param_1 + 0x1b) = uVar32;
    *(undefined4 *)((longlong)param_1 + 0xdc) = uVar33;
    uVar33 = uRam0000000140c798dc;
    uVar32 = uRam0000000140c798d8;
    uVar31 = uRam0000000140c798d4;
    *(undefined4 *)(param_1 + 0x1c) = _DAT_140c798d0;
    *(undefined4 *)((longlong)param_1 + 0xe4) = uVar31;
    *(undefined4 *)(param_1 + 0x1d) = uVar32;
    *(undefined4 *)((longlong)param_1 + 0xec) = uVar33;
    uVar16 = uVar15;
    if (param_1[0x8d] != 0) {
        do {
            uVar17 = (ulonglong)((int)uVar16 + 1);
            pauVar12 = (undefined (*) [12])(uVar16 * 0x1c + param_1[0x8c]);
            auVar29 = minps(*(undefined (*) [16])(param_1 + 0x1a),CONCAT412(fVar30,*pauVar12));
            auVar25 = maxps(*(undefined (*) [16])(param_1 + 0x1c),CONCAT412(fVar30,*pauVar12));
            *(undefined (*) [16])(param_1 + 0x1a) = auVar29;
            *(undefined (*) [16])(param_1 + 0x1c) = auVar25;
            uVar16 = uVar17;
        } while (uVar17 < (ulonglong)param_1[0x8d]);
        fVar30 = *(float *)((longlong)param_1 + 0x394);
        *(float *)(param_1 + 0x1a) = *(float *)(param_1 + 0x1a) - fVar30;
        *(float *)((longlong)param_1 + 0xd4) = *(float *)((longlong)param_1 + 0xd4) - fVar30;
        *(float *)(param_1 + 0x1b) = *(float *)(param_1 + 0x1b) - fVar30;
        *(float *)((longlong)param_1 + 0xdc) = *(float *)((longlong)param_1 + 0xdc) - fVar30;
        *(undefined (*) [16])(param_1 + 0x1c) =
                CONCAT412(*(float *)((longlong)param_1 + 0xec) + fVar30,
                CONCAT48(*(float *)(param_1 + 0x1d) + fVar30,
                         CONCAT44(*(float *)((longlong)param_1 + 0xe4) + fVar30,
                *(float *)(param_1 + 0x1c) + fVar30)));
    }
    *(undefined4 *)(param_1 + 0x72) = 1;
    *(undefined (*) [16])(param_1 + 0x74) =
            CONCAT412(uStack880._4_4_,
                      CONCAT48((float)uStack880,CONCAT44(local_378._4_4_,local_378._0_4_)));
    if (*(int *)(param_1 + 0x86) != 0) {
        uVar16 = param_1[0x8d];
        if ((ulonglong)param_1[0x8f] < uVar16 || param_1[0x8f] == uVar16) {
            lVar10 = FUN_14018db00(param_1[0x8e],uVar16,4);
            if (param_1[0x8e] != lVar10) {
                FUN_1407db590(lVar10,param_1[0x8e],param_1[0x8f] << 2);
                lVar22 = param_1[0x8e];
                if (lVar22 != 0) {
                    (**(code **)(*(longlong *)(lVar22 + -0x10) + 8))(lVar22 + -0x10);
                }
                param_1[0x8e] = lVar10;
            }
        }
        param_1[0x8f] = uVar16;
        if (param_1[0x8d] != 0) {
            do {
                *(int *)(param_1[0x8e] + uVar15 * 4) = (int)uVar15;
                uVar15 = uVar15 + 1;
            } while (uVar15 < (ulonglong)param_1[0x8d]);
        }
        FUN_1401c3280(&LAB_140313390,param_1[0x8e],param_1[0x8f],param_1[0x8c]);
    }
    LAB_140315df8:
    FUN_1407db4f0(local_c8 ^ (ulonglong)auStack1064);
    return;
}



uint FUN_140315e40(longlong param_1)

{
uint uVar1;

uVar1 = *(uint *)(*(longlong *)(param_1 + 0x1a0) + 0xec8);
if (-1 < (char)uVar1) {
return 0;
}
if (((uVar1 & 0x400) != 0) && ((uVar1 >> 9 & 1) != 0)) {
return 4;
}
if ((uVar1 & 0x400) != 0) {
return 2;
}
return (uVar1 & 0x200 | 0x100) >> 8;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1403174a0(longlong *param_1,undefined (*param_2) [12],float param_3,longlong param_4,
        longlong param_5)

{
undefined (*pauVar1) [12];
float fVar2;
short sVar3;
uint uVar4;
longlong lVar5;
longlong lVar6;
longlong lVar7;
longlong *plVar8;
int iVar9;
float *pfVar10;
float *pfVar11;
int iVar12;
ulonglong uVar13;
uint uVar14;
ulonglong uVar15;
uint uVar16;
float extraout_XMM0_Da;
float extraout_XMM0_Da_00;
float fVar18;
float fVar19;
float fVar20;
undefined auVar21 [16];
float fVar22;
float fVar23;
float fVar24;
float fVar25;
float fVar26;
uint uVar27;
float fVar28;
float fVar29;
float fVar30;
float fVar31;
undefined8 local_res8;
float local_res10 [2];
float local_res18;
longlong local_res20;
undefined local_118 [8];
undefined8 uStack272;
undefined local_108 [8];
float fStack256;
float fStack252;
undefined local_f8 [16];
ulonglong uVar17;

uStack272 = local_118;
fVar26 = (float)(int)param_3 * 0.001;
fVar24 = (float)((int)*(short *)(param_2[1] + 10) - (int)*(short *)(param_2[1] + 8)) /
         (float)(int)*(short *)(param_2[1] + 10);
local_res8 = param_1;
local_res18 = param_3;
local_res20 = param_4;
fVar18 = fVar24;
FUN_1401adb90(local_108,param_2[1]);
FUN_140318840(*(undefined2 *)(param_1[0x34] + 0x5f0),param_1[0x97],param_1[0x96],local_res10,
*(undefined2 *)(param_1[0x34] + 0x5f0));
pfVar10 = (float *)(**(code **)(*param_1 + 0x90))(param_1);
pfVar11 = (float *)(**(code **)(*param_1 + 0x68))(param_1);
lVar5 = param_1[1];
uVar27 = 0x7fffffff;
fVar25 = 1.0;
fVar22 = 0.0;
uVar13 = 0;
_local_118 = CONCAT88(uStack272,lVar5);
local_f8 = CONCAT412(fVar26,CONCAT48(fVar26,CONCAT44(fVar26,fVar26)));
local_108._0_4_ = (*pfVar10 + *pfVar11) * fVar26 + local_108._0_4_;
local_108._4_4_ = (pfVar10[1] + pfVar11[1]) * fVar26 + local_108._4_4_;
fStack256 = (pfVar10[2] + pfVar11[2]) * fVar26 + fStack256;
fStack252 = (pfVar10[3] + pfVar11[3]) * fVar26 + fStack252;
_local_108 = CONCAT412(fStack252,CONCAT48(fStack256,CONCAT44(local_108._4_4_,local_108._0_4_)));
if (*(ushort *)(lVar5 + 0x68) != 0) {
plVar8 = param_1 + 5;
lVar6 = *(longlong *)(*plVar8 + 0x40);
fVar28 = 0.0;
fVar29 = 0.0;
fVar30 = 0.0;
fVar31 = 0.0;
uVar14 = 1;
uVar4 = *(uint *)(lVar6 + 0x308);
if (uVar4 != 0) {
pfVar10 = (float *)(param_5 + 8);
uVar15 = uVar13;
uVar17 = uVar13;
auVar21 = local_f8;
fVar19 = local_res18;
do {
if ((uVar14 & *(ushort *)(lVar5 + 0x68)) != 0) {
lVar7 = *(longlong *)(*plVar8 + 0x588);
sVar3 = *(short *)(*(longlong *)(lVar6 + 0x310) + 2 + uVar13);
fVar18 = *(float *)(lVar7 + 0x30 + uVar15);
fVar2 = *(float *)(lVar7 + 0x1c + uVar15);
fVar23 = fVar18 - fVar2;
if (sVar3 == 0) {
pfVar11 = (float *)(uVar17 * 0x10 + local_res20);
fVar18 = *pfVar11 - *(float *)*param_2;
fVar19 = pfVar11[1] - *(float *)(*param_2 + 4);
fVar18 = SQRT(fVar18 * fVar18 + fVar19 * fVar19 + 0.0);
if (fVar23 == 0.0) {
if (fVar2 <= fVar18) {
fVar19 = 0.0;
}
else {
fVar19 = 1.0;
}
}
else {
fVar23 = (fVar18 - fVar2) / fVar23;
if (1.0 <= fVar23) {
fVar23 = 1.0;
}
fVar19 = 0.0;
if (0.0 <= fVar23) {
fVar19 = fVar23;
}
fVar19 = 1.0 - fVar19;
}
auVar21 = divps(CONCAT412(pfVar11[3] - 0.0,
                          CONCAT48(pfVar11[2] - *(float *)(*param_2 + 8),
                                   CONCAT44(pfVar11[1] - *(float *)(*param_2 + 4),
                                            *pfVar11 - *(float *)*param_2))),
                CONCAT412(fVar18,CONCAT48(fVar18,CONCAT44(fVar18,fVar18))));
}
else if (sVar3 == 1) {
pfVar11 = (float *)(param_5 + uVar17 * 0x10);
fVar20 = *(float *)*param_2 * *pfVar11 + *(float *)(*param_2 + 4) * pfVar11[1] + 0.0 +
         *(float *)(param_5 + 0xc + uVar17 * 0x10);
fVar19 = (float)((uint)fVar20 & 0x7fffffff);
if (fVar23 == 0.0) {
if (fVar2 <= fVar19) {
fVar19 = 0.0;
}
else {
fVar19 = 1.0;
}
}
else {
fVar23 = (fVar18 - fVar19) / fVar23;
if (1.0 <= fVar23) {
fVar23 = 1.0;
}
fVar19 = 0.0;
if (0.0 <= fVar23) {
fVar19 = fVar23;
}
}
if (0.0 <= fVar20) {
auVar21 = ZEXT416((uint)(0.0 - pfVar10[-2])) & (undefined  [16])0xffffffffffffffff;
auVar21 = CONCAT412(SUB164(auVar21 >> 0x60,0) - 0.0,
                    CONCAT48(SUB164(auVar21 >> 0x40,0) - *pfVar10,
                             CONCAT44(0.0 - pfVar10[-1],SUB164(auVar21,0))));
}
else {
auVar21 = ZEXT1216(CONCAT48(*pfVar10,CONCAT44(pfVar10[-1],pfVar10[-2])));
}
}
fVar18 = *(float *)(lVar7 + 8 + uVar15);
fVar28 = fVar18 * SUB164(auVar21,0) * fVar19 * fVar26 + fVar28;
fVar29 = fVar18 * SUB164(auVar21 >> 0x20,0) * fVar19 * fVar26 + fVar29;
fVar30 = fVar18 * SUB164(auVar21 >> 0x40,0) * fVar19 * fVar26 + fVar30;
fVar31 = fVar18 * SUB164(auVar21 >> 0x60,0) * fVar19 * fVar26 + fVar31;
}
uVar14 = uVar14 << 1 | (uint)((int)uVar14 < 0);
uVar16 = (int)uVar17 + 1;
uVar17 = (ulonglong)uVar16;
uVar13 = uVar13 + 0x50;
pfVar10 = pfVar10 + 4;
uVar15 = uVar15 + 0x48;
param_1 = local_res8;
fVar18 = fVar24;
} while (uVar16 < uVar4);
}
local_108._0_4_ = fVar28 + local_108._0_4_;
local_108._4_4_ = fVar29 + local_108._4_4_;
fStack256 = fVar30 + fStack256;
fStack252 = fVar31 + fStack252;
_local_108 = CONCAT412(fStack252,CONCAT48(fStack256,CONCAT44(local_108._4_4_,local_108._0_4_)));
param_3 = local_res18;
}
iVar12 = 0;
fVar24 = fVar26;
fVar28 = fVar26;
if ((0.0 < *(float *)(lVar5 + 0x30)) &&
((*(int *)(lVar5 + 8) == 2 || (*(char *)param_1[0x34] == '\x02')))) {
plVar8 = *(longlong **)(*(longlong *)(param_1[5] + 0x10) + 0x1e8);
if (plVar8 != (longlong *)0x0) {
if (*(char *)param_1[0x34] == '\x02') {
pauVar1 = (undefined (*) [12])(param_1[5] + 0x80);
local_f8._0_12_ =
CONCAT48(*(float *)(*param_2 + 8) + 0.0,
         CONCAT44(SUB164(ZEXT1216(*pauVar1) >> 0x20,0) + *(float *)(*param_2 + 4),
                  *(float *)*pauVar1 + *(float *)*param_2));
}
else {
local_f8._0_12_ =
CONCAT48(*(undefined4 *)(*param_2 + 8),
         CONCAT44(*(undefined4 *)(*param_2 + 4),*(float *)*param_2));
}
local_f8 = ZEXT1216(local_f8._0_12_);
(**(code **)(*plVar8 + 0x1c0))(plVar8,local_f8,local_118,3);
fVar29 = fVar28 * *(float *)(param_1[1] + 0x30);
_local_108 = CONCAT412(fVar29 * uStack272._4_4_ + fStack252,
                       CONCAT48(fVar29 * (float)uStack272 + fStack256,
                                CONCAT44(fVar29 * local_118._4_4_ + local_108._4_4_,
                                         fVar29 * local_118._0_4_ + local_108._0_4_)));
}
}
FUN_1401c9800(&local_res8,local_108);
*(undefined4 *)param_2[1] = (undefined4)local_res8;
*(undefined2 *)(param_2[1] + 4) = local_res8._4_2_;
_local_118 = CONCAT412(fVar22,*param_2);
if (*(char *)param_1[0x34] == '\x02') {
fVar26 = (*(float *)(param_1 + 0xaa) + local_108._0_4_ * local_res10[0]) * fVar26;
fVar24 = (*(float *)((longlong)param_1 + 0x554) + local_108._4_4_ * local_res10[0]) * fVar24;
}
else {
fVar26 = local_res10[0] * fVar28 * local_108._0_4_;
fVar24 = local_res10[0] * fVar28 * local_108._4_4_;
}
*(float *)*param_2 = fVar26 + *(float *)*param_2;
*(float *)(*param_2 + 8) = *(float *)(*param_2 + 8) + 0.0;
*(float *)(*param_2 + 4) = fVar24 + *(float *)(*param_2 + 4);
if ((*(int *)(param_1[1] + 0x6c) != 0) &&
((**(code **)(*(longlong *)param_1[5] + 0x58))(), fVar22 < extraout_XMM0_Da)) {
lVar5 = param_1[1];
fVar24 = fVar28 * *(float *)(lVar5 + 0x70);
fVar29 = fVar25 - ((*(float *)(lVar5 + 0x78) - *(float *)(lVar5 + 0x74)) * fVar18 +
                   *(float *)(lVar5 + 0x74));
(**(code **)(*(longlong *)param_1[5] + 0x58))();
fVar26 = fVar22;
if (fVar22 <= fVar25 - (fVar24 / extraout_XMM0_Da_00) * fVar29) {
fVar28 = fVar28 * *(float *)(param_1[1] + 0x70);
fVar26 = 0.0;
(**(code **)(*(longlong *)param_1[5] + 0x58))();
fVar26 = fVar25 - (fVar28 / fVar26) * fVar29;
}
fVar28 = *(float *)(param_1[5] + 0xb4);
fVar24 = *(float *)(*param_2 + 8);
fVar25 = *(float *)(*param_2 + 4);
*(float *)*param_2 = *(float *)(param_1[5] + 0xb0) * fVar26 + *(float *)*param_2;
*(float *)(*param_2 + 8) = fVar24 + 0.0;
*(float *)(*param_2 + 4) = fVar28 * fVar26 + fVar25;
}
lVar5 = param_1[1];
if (*(int *)(lVar5 + 0x7c) != 0) {
fVar26 = *(float *)(param_1 + 0x24);
fVar24 = *(float *)((longlong)param_1 + 0x124);
if (fVar22 < fVar26 * fVar26 + fVar24 * fVar24 + 0.0) {
fVar18 = (*(float *)(lVar5 + 0x84) - *(float *)(lVar5 + 0x80)) * fVar18 +
         *(float *)(lVar5 + 0x80);
if (fVar18 < fVar22) {
fVar18 = fVar22;
}
if (*(int *)(lVar5 + 8) == 2) {
fVar26 = fVar26 - *(float *)(param_1 + 0x18);
fVar24 = fVar24 - *(float *)((longlong)param_1 + 0xc4);
}
fVar25 = *(float *)(*param_2 + 8);
fVar28 = *(float *)(*param_2 + 4);
*(float *)*param_2 = fVar26 * fVar18 + *(float *)*param_2;
*(float *)(*param_2 + 8) = fVar25 + 0.0;
*(float *)(*param_2 + 4) = fVar24 * fVar18 + fVar28;
}
}
lVar5 = param_1[0x34];
uVar4 = *(uint *)(lVar5 + 0x850);
if (uVar4 != 0) {
if ((uVar4 & 1) != 0) {
if ((local_118._0_4_ * *(float *)*param_2 <= fVar22) ||
(fVar18 = (float)((uint)(*(float *)*param_2 - *(float *)(param_1 + 0x78)) & uVar27),
        fVar18 < *(float *)(lVar5 + 0x854) || fVar18 == *(float *)(lVar5 + 0x854))) {
iVar12 = 1;
}
}
if ((uVar4 & 2) != 0) {
if ((local_118._4_4_ * *(float *)(*param_2 + 4) <= fVar22) ||
(fVar18 = (float)((uint)(*(float *)(*param_2 + 4) - *(float *)((longlong)param_1 + 0x3c4))
& uVar27),
fVar18 < *(float *)(lVar5 + 0x854) || fVar18 == *(float *)(lVar5 + 0x854))) {
iVar12 = iVar12 + 1;
}
}
if ((uVar4 & 4) != 0) {
if (((float)uStack272 * *(float *)(*param_2 + 8) <= fVar22) ||
(fVar18 = (float)((uint)(*(float *)(*param_2 + 8) - *(float *)(param_1 + 0x79)) & uVar27),
        fVar18 < *(float *)(lVar5 + 0x854) || fVar18 == *(float *)(lVar5 + 0x854))) {
iVar12 = iVar12 + 1;
}
}
iVar9 = (**(code **)(*param_1 + 0x80))(param_1);
if (iVar12 == iVar9) {
*(undefined2 *)(param_2[1] + 8) = 0;
return;
}
}
*(short *)(param_2[1] + 8) = *(short *)(param_2[1] + 8) - SUB42(param_3,0);
return;
}



// WARNING: Removing unreachable block (ram,0x000140317cd0)

undefined8 * FUN_140317c90(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_140b66870;
    if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[1] = param_1[2];
    }
    if (param_1[2] != 0) {
        *(undefined8 *)(param_1[2] + 8) = param_1[1];
    }
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_14018b900(param_1);
    return param_1;
}



void FUN_140317cf0(longlong *param_1,ulonglong param_2)

{
longlong lVar1;
longlong lVar2;
undefined4 *puVar3;
undefined4 *puVar4;
ulonglong uVar5;

if ((ulonglong)param_1[1] < param_2 || param_1[1] == param_2) {
lVar2 = FUN_14018db00(*param_1);
if (*param_1 != lVar2) {
uVar5 = 0;
if (param_1[1] != 0) {
puVar4 = (undefined4 *)(lVar2 + 8);
do {
if (puVar4 + -2 != (undefined4 *)0x0) {
puVar3 = (undefined4 *)((longlong)puVar4 + *param_1 + (-8 - lVar2));
puVar4[-2] = *puVar3;
puVar4[-1] = puVar3[1];
*puVar4 = puVar3[2];
puVar4[1] = puVar3[3];
*(undefined2 *)(puVar4 + 2) = *(undefined2 *)(puVar3 + 4);
*(undefined2 *)((longlong)puVar4 + 10) = *(undefined2 *)((longlong)puVar3 + 0x12);
*(undefined2 *)(puVar4 + 3) = *(undefined2 *)(puVar3 + 5);
*(undefined2 *)((longlong)puVar4 + 0xe) = *(undefined2 *)((longlong)puVar3 + 0x16);
*(undefined2 *)(puVar4 + 4) = *(undefined2 *)(puVar3 + 6);
*(undefined2 *)((longlong)puVar4 + 0x12) = *(undefined2 *)((longlong)puVar3 + 0x1a);
}
uVar5 = uVar5 + 1;
puVar4 = puVar4 + 7;
} while (uVar5 < (ulonglong)param_1[1]);
}
lVar1 = *param_1;
if (lVar1 != 0) {
(**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
}
*param_1 = lVar2;
}
param_1[1] = param_2;
return;
}
param_1[1] = param_2;
return;
}



void FUN_140317de0(longlong *param_1,ulonglong param_2)

{
longlong lVar1;
longlong lVar2;
undefined4 *puVar3;
undefined4 *puVar4;
ulonglong uVar5;

if (param_2 <= (ulonglong)param_1[1] && param_1[1] != param_2) {
param_1[1] = param_2;
}
lVar2 = FUN_14018dbc0(*param_1);
if (*param_1 != lVar2) {
uVar5 = 0;
if (param_1[1] != 0) {
puVar4 = (undefined4 *)(lVar2 + 8);
do {
if (puVar4 + -2 != (undefined4 *)0x0) {
puVar3 = (undefined4 *)((longlong)puVar4 + *param_1 + (-8 - lVar2));
puVar4[-2] = *puVar3;
puVar4[-1] = puVar3[1];
*puVar4 = puVar3[2];
puVar4[1] = puVar3[3];
*(undefined2 *)(puVar4 + 2) = *(undefined2 *)(puVar3 + 4);
*(undefined2 *)((longlong)puVar4 + 10) = *(undefined2 *)((longlong)puVar3 + 0x12);
*(undefined2 *)(puVar4 + 3) = *(undefined2 *)(puVar3 + 5);
*(undefined2 *)((longlong)puVar4 + 0xe) = *(undefined2 *)((longlong)puVar3 + 0x16);
*(undefined2 *)(puVar4 + 4) = *(undefined2 *)(puVar3 + 6);
*(undefined2 *)((longlong)puVar4 + 0x12) = *(undefined2 *)((longlong)puVar3 + 0x1a);
}
uVar5 = uVar5 + 1;
puVar4 = puVar4 + 7;
} while (uVar5 < (ulonglong)param_1[1]);
}
lVar1 = *param_1;
if (lVar1 != 0) {
(**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
}
*param_1 = lVar2;
}
return;
}



void FUN_140317ec0(uint *param_1,undefined8 *param_2,longlong *param_3)

{
    longlong *plVar1;
    undefined8 *puVar2;
    undefined4 uVar3;

    if (1 < *param_1) {
        puVar2 = (undefined8 *)FUN_14018b280(0x38);
        if (puVar2 != (undefined8 *)0x0) {
            puVar2[1] = 0;
            puVar2[2] = 0;
            *puVar2 = &PTR_FUN_140b64230;
            puVar2[3] = param_2;
            puVar2[4] = param_1;
            *(undefined8 *)((longlong)puVar2 + 0x2c) = 0;
            *(undefined4 *)(puVar2 + 5) = 0;
        }
        if (param_2[1] != 0) {
            FUN_140317c90();
        }
        param_2[1] = puVar2;
        if ((param_3 != (longlong *)0x0) && (puVar2[1] == 0)) {
            puVar2[1] = param_3;
            plVar1 = puVar2 + 2;
            *plVar1 = *param_3;
            *param_3 = (longlong)puVar2;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 8) = plVar1;
            }
        }
        return;
    }
    if (*param_1 == 0) {
        if (param_2[1] != 0) {
            FUN_140317c90();
        }
        *param_2 = 0;
        param_2[1] = 0;
        return;
    }
    uVar3 = FUN_1401c9770(*(undefined8 *)(param_1 + 4));
    *(undefined4 *)param_2 = uVar3;
    return;
}



void FUN_140317fc0(uint *param_1,undefined8 *param_2,longlong *param_3)

{
    longlong *plVar1;
    undefined8 *puVar2;

    if (1 < *param_1) {
        puVar2 = (undefined8 *)FUN_14018b280(0x38);
        if (puVar2 != (undefined8 *)0x0) {
            puVar2[1] = 0;
            puVar2[2] = 0;
            *puVar2 = &PTR_FUN_140b64228;
            puVar2[3] = param_2;
            puVar2[4] = param_1;
            *(undefined8 *)((longlong)puVar2 + 0x2c) = 0;
            *(undefined4 *)(puVar2 + 5) = 0;
        }
        if (param_2[1] != 0) {
            FUN_140317c90();
        }
        param_2[1] = puVar2;
        if ((param_3 != (longlong *)0x0) && (puVar2[1] == 0)) {
            puVar2[1] = param_3;
            plVar1 = puVar2 + 2;
            *plVar1 = *param_3;
            *param_3 = (longlong)puVar2;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 8) = plVar1;
            }
        }
        return;
    }
    if (*param_1 == 0) {
        if (param_2[1] != 0) {
            FUN_140317c90();
        }
        *param_2 = 0;
        param_2[1] = 0;
        return;
    }
    *(float *)param_2 = (float)(uint)**(byte **)(param_1 + 4) * 0.003921569;
    return;
}



void FUN_1403180d0(uint *param_1,undefined8 *param_2,longlong *param_3)

{
    longlong *plVar1;
    undefined8 *puVar2;
    undefined4 local_18;
    undefined4 uStack20;
    undefined4 uStack16;
    undefined4 uStack12;

    if (1 < *param_1) {
        puVar2 = (undefined8 *)FUN_14018b280(0x38);
        if (puVar2 != (undefined8 *)0x0) {
            puVar2[1] = 0;
            puVar2[2] = 0;
            *puVar2 = &PTR_FUN_140b64220;
            puVar2[3] = param_2;
            puVar2[4] = param_1;
            *(undefined8 *)((longlong)puVar2 + 0x2c) = 0;
            *(undefined4 *)(puVar2 + 5) = 0;
        }
        if (param_2[2] != 0) {
            FUN_140317c90();
        }
        param_2[2] = puVar2;
        if ((param_3 != (longlong *)0x0) && (puVar2[1] == 0)) {
            puVar2[1] = param_3;
            plVar1 = puVar2 + 2;
            *plVar1 = *param_3;
            *param_3 = (longlong)puVar2;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 8) = plVar1;
            }
        }
        return;
    }
    if (*param_1 == 0) {
        if (param_2[2] != 0) {
            FUN_140317c90();
        }
        *param_2 = 0;
        param_2[1] = 0;
        param_2[2] = 0;
        param_2[3] = 0;
        return;
    }
    FUN_1401adb90(&local_18,*(undefined8 *)(param_1 + 4));
    *(undefined4 *)param_2 = local_18;
    *(undefined4 *)((longlong)param_2 + 4) = uStack20;
    *(undefined4 *)(param_2 + 1) = uStack16;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack12;
    return;
}



void FUN_1403181e0(uint *param_1,undefined (*param_2) [16],longlong *param_3)

{
    longlong *plVar1;
    undefined8 *puVar2;

    if (1 < *param_1) {
        puVar2 = (undefined8 *)FUN_14018b280(0x38);
        if (puVar2 != (undefined8 *)0x0) {
            puVar2[1] = 0;
            puVar2[2] = 0;
            *puVar2 = &PTR_FUN_140b64218;
            puVar2[3] = param_2;
            puVar2[4] = param_1;
            *(undefined8 *)((longlong)puVar2 + 0x2c) = 0;
            *(undefined4 *)(puVar2 + 5) = 0;
        }
        if (*(longlong *)param_2[1] != 0) {
            FUN_140317c90();
        }
        *(undefined8 **)param_2[1] = puVar2;
        if ((param_3 != (longlong *)0x0) && (puVar2[1] == 0)) {
            puVar2[1] = param_3;
            plVar1 = puVar2 + 2;
            *plVar1 = *param_3;
            *param_3 = (longlong)puVar2;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 8) = plVar1;
            }
        }
        return;
    }
    if (*param_1 == 0) {
        if (*(longlong *)param_2[1] != 0) {
            FUN_140317c90();
        }
        *(undefined8 *)*param_2 = 0;
        *(undefined8 *)(*param_2 + 8) = 0;
        *(undefined8 *)param_2[1] = 0;
        *(undefined8 *)(param_2[1] + 8) = 0;
        return;
    }
    *param_2 = ZEXT1216(**(undefined (**) [12])(param_1 + 4));
    return;
}



void FUN_140318300(uint *param_1,undefined (*param_2) [16],longlong *param_3)

{
    longlong *plVar1;
    undefined4 uVar2;
    uint uVar3;
    uint uVar4;
    float fVar5;
    undefined8 *puVar6;
    undefined auVar7 [15];
    undefined auVar8 [16];
    int iVar11;
    undefined in_XMM1_Ba;
    undefined in_XMM1_Bb;
    undefined in_XMM1_Bc;
    undefined in_XMM1_Bd;
    undefined in_XMM1_Be;
    undefined in_XMM1_Bf;
    undefined in_XMM1_Bg;
    undefined in_XMM1_Bh;
    undefined auVar9 [16];
    undefined auVar10 [16];

    if (1 < *param_1) {
        puVar6 = (undefined8 *)FUN_14018b280(0x38);
        if (puVar6 != (undefined8 *)0x0) {
            puVar6[1] = 0;
            puVar6[2] = 0;
            *puVar6 = &PTR_FUN_140b64250;
            puVar6[3] = param_2;
            puVar6[4] = param_1;
            *(undefined8 *)((longlong)puVar6 + 0x2c) = 0;
            *(undefined4 *)(puVar6 + 5) = 0;
        }
        if (*(longlong *)param_2[1] != 0) {
            FUN_140317c90();
        }
        *(undefined8 **)param_2[1] = puVar6;
        if ((param_3 != (longlong *)0x0) && (puVar6[1] == 0)) {
            puVar6[1] = param_3;
            plVar1 = puVar6 + 2;
            *plVar1 = *param_3;
            *param_3 = (longlong)puVar6;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 8) = plVar1;
            }
        }
        return;
    }
    if (*param_1 == 0) {
        if (*(longlong *)param_2[1] != 0) {
            FUN_140317c90();
        }
        *(undefined8 *)*param_2 = 0;
        *(undefined8 *)(*param_2 + 8) = 0;
        *(undefined8 *)param_2[1] = 0;
        *(undefined8 *)(param_2[1] + 8) = 0;
        return;
    }
    uVar3 = CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ^
            CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba)));
    uVar4 = CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ^
            CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be)));
    uVar2 = **(undefined4 **)(param_1 + 4);
    auVar7 = SUB1615(CONCAT412(uVar2,CONCAT48(uVar2,CONCAT44(uVar2,uVar2))),0) |
             SUB1615((undefined  [16])0xff000000,0) | SUB1615((undefined  [16])0xff00000000000000,0) |
             SUB1615((undefined  [16])0xff000000,0) | SUB1615((undefined  [16])0xff00000000000000,0);
    auVar10 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                                          SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                                           ((char)(uVar4 >> 0x18),
                                                                                                                                            CONCAT114(SUB151(auVar7 >> 0x38,0),
                                                                                                                                                      SUB1514(auVar7,0))) >> 0x70,0),
                                                                                                                            CONCAT113((char)(uVar4 >> 0x10),SUB1513(auVar7,0))
                                                                                                           ) >> 0x68,0),
                                                                                                           CONCAT112(SUB151(auVar7 >> 0x30,0),
                                                                                                                     SUB1512(auVar7,0))) >> 0x60,0),
                                                                                          CONCAT111((char)(uVar4 >> 8),SUB1511(auVar7,0)))
                                                                                                 >> 0x58,0),
                                                                                  CONCAT110(SUB151(auVar7 >> 0x28,0),
                                                                                            SUB1510(auVar7,0))) >> 0x50,0),
                                                                 CONCAT19((char)uVar4,SUB159(auVar7,0))) >> 0x48,0)
                               ,CONCAT18(SUB151(auVar7 >> 0x20,0),SUB158(auVar7,0)))
                                               >> 0x40,0),(char)(uVar3 >> 0x18)),
                       (SUB157(auVar7,0) >> 0x18) << 0x30);
    auVar9 = CONCAT115(CONCAT101(SUB1610(auVar10 >> 0x30,0),(char)(uVar3 >> 0x10)),
                       (SUB155(auVar7,0) >> 0x10) << 0x20);
    auVar8 = CONCAT142(SUB1614(CONCAT133(SUB1613(CONCAT124(SUB1612(auVar9 >> 0x20,0),
                                                           (uVar3 >> 8) << 0x18) >> 0x18,0),
                                         (SUB153(auVar7,0) >> 8) << 0x10) >> 0x10,0),
                       SUB152(auVar7,0) & 0xff | (ushort)(byte)uVar3 << 8);
    iVar11 = SUB164(CONCAT214((short)(uVar4 >> 0x10),
                              CONCAT212(SUB162(auVar10 >> 0x30,0),SUB1612(auVar8,0))) >> 0x60,0);
    auVar9 = CONCAT610(SUB166(CONCAT412(iVar11,CONCAT210((short)uVar4,SUB1610(auVar8,0))) >> 0x50,0),
                       CONCAT28(SUB162(auVar9 >> 0x20,0),SUB168(auVar8,0)));
    fVar5 = (float)SUB164(CONCAT106(CONCAT82(SUB168(auVar9 >> 0x40,0),(short)(uVar3 >> 0x10)),
                                    (SUB166(auVar8,0) >> 0x10) << 0x20) >> 0x20,0) * 0.003921569;
    *param_2 = CONCAT412((float)iVar11 * 0.003921569,
                         CONCAT48((float)(SUB164(auVar8,0) & 0xffff | uVar3 << 0x10) * 0.003921569,
                                  CONCAT17((char)((uint)fVar5 >> 0x18),
    CONCAT16((char)((uint)fVar5 >> 0x10),
    CONCAT15((char)((uint)fVar5 >> 8),
    CONCAT14(SUB41(fVar5,0),
             (float)SUB164(auVar9 >> 0x40,0)
             * 0.003921569))))));
    return;
}



void FUN_140318430(uint *param_1,undefined8 *param_2,longlong *param_3)

{
    longlong *plVar1;
    undefined8 *puVar2;
    undefined4 local_18;
    undefined4 uStack20;
    undefined4 uStack16;
    undefined4 uStack12;

    if (1 < *param_1) {
        puVar2 = (undefined8 *)FUN_14018b280(0x38);
        if (puVar2 != (undefined8 *)0x0) {
            puVar2[1] = 0;
            puVar2[2] = 0;
            *puVar2 = &PTR_FUN_140b64248;
            puVar2[3] = param_2;
            puVar2[4] = param_1;
            *(undefined8 *)((longlong)puVar2 + 0x2c) = 0;
            *(undefined4 *)(puVar2 + 5) = 0;
        }
        if (param_2[2] != 0) {
            FUN_140317c90();
        }
        param_2[2] = puVar2;
        if ((param_3 != (longlong *)0x0) && (puVar2[1] == 0)) {
            puVar2[1] = param_3;
            plVar1 = puVar2 + 2;
            *plVar1 = *param_3;
            *param_3 = (longlong)puVar2;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 8) = plVar1;
            }
        }
        return;
    }
    if (*param_1 == 0) {
        if (param_2[2] != 0) {
            FUN_140317c90();
        }
        *param_2 = 0;
        param_2[1] = 0;
        param_2[2] = 0;
        param_2[3] = 0;
        return;
    }
    FUN_1401b2ce0(&local_18,*(undefined8 *)(param_1 + 4));
    *(undefined4 *)param_2 = local_18;
    *(undefined4 *)((longlong)param_2 + 4) = uStack20;
    *(undefined4 *)(param_2 + 1) = uStack16;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack12;
    return;
}



void FUN_140318540(uint *param_1,undefined8 *param_2,longlong *param_3)

{
    longlong *plVar1;
    undefined8 *puVar2;

    if (1 < *param_1) {
        puVar2 = (undefined8 *)FUN_14018b280(0x38);
        if (puVar2 != (undefined8 *)0x0) {
            puVar2[1] = 0;
            puVar2[2] = 0;
            *puVar2 = &PTR_FUN_140b64240;
            puVar2[3] = param_2;
            puVar2[4] = param_1;
            *(undefined8 *)((longlong)puVar2 + 0x2c) = 0;
            *(undefined4 *)(puVar2 + 5) = 0;
        }
        if (param_2[1] != 0) {
            FUN_140317c90();
        }
        param_2[1] = puVar2;
        if ((param_3 != (longlong *)0x0) && (puVar2[1] == 0)) {
            puVar2[1] = param_3;
            plVar1 = puVar2 + 2;
            *plVar1 = *param_3;
            *param_3 = (longlong)puVar2;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 8) = plVar1;
            }
        }
        return;
    }
    if (*param_1 == 0) {
        if (param_2[1] != 0) {
            FUN_140317c90();
        }
        *param_2 = 0;
        param_2[1] = 0;
        return;
    }
    *(uint *)param_2 = (uint)**(byte **)(param_1 + 4);
    return;
}



void FUN_140318640(uint *param_1,undefined8 *param_2,longlong *param_3)

{
    longlong *plVar1;
    undefined8 *puVar2;

    if (1 < *param_1) {
        puVar2 = (undefined8 *)FUN_14018b280(0x38);
        if (puVar2 != (undefined8 *)0x0) {
            puVar2[1] = 0;
            puVar2[2] = 0;
            *puVar2 = &PTR_FUN_140b64238;
            puVar2[3] = param_2;
            puVar2[4] = param_1;
            *(undefined8 *)((longlong)puVar2 + 0x2c) = 0;
            *(undefined4 *)(puVar2 + 5) = 0;
        }
        if (param_2[1] != 0) {
            FUN_140317c90();
        }
        param_2[1] = puVar2;
        if ((param_3 != (longlong *)0x0) && (puVar2[1] == 0)) {
            puVar2[1] = param_3;
            plVar1 = puVar2 + 2;
            *plVar1 = *param_3;
            *param_3 = (longlong)puVar2;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 8) = plVar1;
            }
        }
        return;
    }
    if (*param_1 == 0) {
        if (param_2[1] != 0) {
            FUN_140317c90();
        }
        *param_2 = 0;
        param_2[1] = 0;
        return;
    }
    *(uint *)param_2 = (uint)**(ushort **)(param_1 + 4);
    return;
}



void FUN_140318740(uint *param_1,undefined8 *param_2,longlong *param_3)

{
    longlong *plVar1;
    undefined8 *puVar2;

    if (1 < *param_1) {
        puVar2 = (undefined8 *)FUN_14018b280(0x38);
        if (puVar2 != (undefined8 *)0x0) {
            puVar2[1] = 0;
            puVar2[2] = 0;
            *puVar2 = &PTR_FUN_140b64210;
            puVar2[3] = param_2;
            puVar2[4] = param_1;
            *(undefined8 *)((longlong)puVar2 + 0x2c) = 0;
            *(undefined4 *)(puVar2 + 5) = 0;
        }
        if (param_2[1] != 0) {
            FUN_140317c90();
        }
        param_2[1] = puVar2;
        if ((param_3 != (longlong *)0x0) && (puVar2[1] == 0)) {
            puVar2[1] = param_3;
            plVar1 = puVar2 + 2;
            *plVar1 = *param_3;
            *param_3 = (longlong)puVar2;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 8) = plVar1;
            }
        }
        return;
    }
    if (*param_1 == 0) {
        if (param_2[1] != 0) {
            FUN_140317c90();
        }
        *param_2 = 0;
        param_2[1] = 0;
        return;
    }
    *(undefined4 *)param_2 = **(undefined4 **)(param_1 + 4);
    return;
}



void FUN_140318840(float param_1,undefined8 param_2,longlong param_3,longlong param_4,
                   float *param_5_00,uint param_5)

{
    float fVar1;
    float fVar2;
    uint uVar3;
    ulonglong uVar4;
    uint uVar5;
    ulonglong uVar6;

    if (param_5 == 0) {
        return;
    }
    uVar5 = 0;
    if (1 < param_5) {
        uVar4 = 1;
        do {
            if (param_1 < *(float *)(param_3 + uVar4 * 0x10)) break;
            uVar3 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar3;
            uVar5 = uVar5 + 1;
        } while (uVar3 < param_5);
    }
    if (uVar5 == param_5 - 1) {
        if (1 < param_5) {
            uVar4 = (ulonglong)uVar5;
            uVar6 = (ulonglong)(uVar5 - 1);
            fVar1 = *(float *)(param_3 + uVar6 * 0x10);
            fVar2 = *(float *)(param_3 + uVar4 * 0x10);
            if (fVar2 == fVar1) {
                *param_5_00 = *(float *)(param_4 + uVar4 * 0x10);
                return;
            }
            *param_5_00 = ((*(float *)(param_4 + uVar4 * 0x10) - *(float *)(param_4 + uVar6 * 0x10)) /
                           (fVar2 - fVar1)) * (param_1 - fVar1) + *(float *)(param_4 + uVar6 * 0x10);
            return;
        }
    }
    else {
        uVar4 = (ulonglong)uVar5;
        fVar1 = *(float *)(param_3 + (ulonglong)(uVar5 + 1) * 0x10);
        fVar2 = *(float *)(param_3 + uVar4 * 0x10);
        if (fVar1 != fVar2) {
            *param_5_00 = ((param_1 - fVar2) / (fVar1 - fVar2)) *
                          (*(float *)(param_4 + (ulonglong)(uVar5 + 1) * 0x10) -
                           *(float *)(param_4 + uVar4 * 0x10)) + *(float *)(param_4 + uVar4 * 0x10);
            return;
        }
    }
    *param_5_00 = *(float *)(param_4 + (ulonglong)uVar5 * 0x10);
    return;
}



void FUN_140318930(float param_1,undefined8 param_2,longlong param_3,longlong param_4,
                   undefined (*param_5_00) [16],uint param_5)

{
    undefined4 *puVar1;
    float *pfVar2;
    float *pfVar3;
    float *pfVar4;
    float fVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    uint uVar9;
    ulonglong uVar10;
    longlong lVar11;
    uint uVar12;
    float fVar13;
    undefined auVar14 [16];

    if (param_5 == 0) {
        return;
    }
    uVar12 = 0;
    if (1 < param_5) {
        uVar10 = 1;
        do {
            if (param_1 < *(float *)(param_3 + uVar10 * 0x10)) break;
            uVar9 = (int)uVar10 + 1;
            uVar10 = (ulonglong)uVar9;
            uVar12 = uVar12 + 1;
        } while (uVar9 < param_5);
    }
    if (uVar12 == param_5 - 1) {
        if (param_5 < 2) {
            puVar1 = (undefined4 *)((ulonglong)uVar12 * 0x20 + param_4);
            uVar6 = puVar1[1];
            uVar7 = puVar1[2];
            uVar8 = puVar1[3];
            *(undefined4 *)*param_5_00 = *puVar1;
            *(undefined4 *)(*param_5_00 + 4) = uVar6;
            *(undefined4 *)(*param_5_00 + 8) = uVar7;
            *(undefined4 *)(*param_5_00 + 0xc) = uVar8;
            return;
        }
        uVar10 = (ulonglong)uVar12;
        fVar13 = *(float *)(param_3 + uVar10 * 0x10);
        fVar5 = *(float *)(param_3 + (ulonglong)(uVar12 - 1) * 0x10);
        if (fVar13 != fVar5) {
            fVar13 = fVar13 - fVar5;
            lVar11 = (ulonglong)(uVar12 - 1) * 0x20;
            param_1 = param_1 - fVar5;
            pfVar2 = (float *)(uVar10 * 0x20 + param_4);
            pfVar3 = (float *)(lVar11 + param_4);
            auVar14 = divps(CONCAT412(pfVar2[3] - pfVar3[3],
                                      CONCAT48(pfVar2[2] - pfVar3[2],
                                               CONCAT44(pfVar2[1] - pfVar3[1],*pfVar2 - *pfVar3))),
                            CONCAT412(fVar13,CONCAT48(fVar13,CONCAT44(fVar13,fVar13))));
            pfVar2 = (float *)(lVar11 + param_4);
            *param_5_00 = CONCAT412(param_1 * SUB164(auVar14 >> 0x60,0) + pfVar2[3],
                                    CONCAT48(param_1 * SUB164(auVar14 >> 0x40,0) + pfVar2[2],
                                             CONCAT44(param_1 * SUB164(auVar14 >> 0x20,0) + pfVar2[1],
                                                      param_1 * SUB164(auVar14,0) + *pfVar2)));
            return;
        }
        lVar11 = uVar10 << 5;
    }
    else {
        lVar11 = (ulonglong)uVar12 * 0x20;
        fVar13 = *(float *)(param_3 + (ulonglong)(uVar12 + 1) * 0x10);
        fVar5 = *(float *)(param_3 + (ulonglong)uVar12 * 0x10);
        if (fVar13 != fVar5) {
            pfVar2 = (float *)((ulonglong)(uVar12 + 1) * 0x20 + param_4);
            fVar13 = (param_1 - fVar5) / (fVar13 - fVar5);
            pfVar3 = (float *)(lVar11 + param_4);
            pfVar4 = (float *)(lVar11 + param_4);
            *param_5_00 = CONCAT412(fVar13 * (pfVar2[3] - pfVar3[3]) + pfVar4[3],
                                    CONCAT48(fVar13 * (pfVar2[2] - pfVar3[2]) + pfVar4[2],
                                             CONCAT44(fVar13 * (pfVar2[1] - pfVar3[1]) + pfVar4[1],
                                                      fVar13 * (*pfVar2 - *pfVar3) + *pfVar4)));
            return;
        }
    }
    puVar1 = (undefined4 *)(lVar11 + param_4);
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    *(undefined4 *)*param_5_00 = *puVar1;
    *(undefined4 *)(*param_5_00 + 4) = uVar6;
    *(undefined4 *)(*param_5_00 + 8) = uVar7;
    *(undefined4 *)(*param_5_00 + 0xc) = uVar8;
    return;
}



void FUN_140318a40(float param_1,undefined8 param_2,longlong param_3,longlong param_4,
                   undefined8 *param_5_00,uint param_5)

{
    float *pfVar1;
    float *pfVar2;
    float fVar3;
    uint uVar4;
    ulonglong uVar5;
    longlong lVar6;
    uint uVar7;
    float fVar8;
    undefined auVar9 [16];

    if (param_5 == 0) {
        return;
    }
    uVar7 = 0;
    if (1 < param_5) {
        uVar5 = 1;
        do {
            if (param_1 < *(float *)(param_3 + uVar5 * 0x10)) break;
            uVar4 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar4;
            uVar7 = uVar7 + 1;
        } while (uVar4 < param_5);
    }
    if (uVar7 == param_5 - 1) {
        if (param_5 < 2) {
            *param_5_00 = *(undefined8 *)((ulonglong)uVar7 * 0x20 + param_4);
            return;
        }
        uVar5 = (ulonglong)uVar7;
        fVar8 = *(float *)(param_3 + uVar5 * 0x10);
        fVar3 = *(float *)(param_3 + (ulonglong)(uVar7 - 1) * 0x10);
        if (fVar8 != fVar3) {
            fVar8 = fVar8 - fVar3;
            lVar6 = (ulonglong)(uVar7 - 1) * 0x20;
            pfVar1 = (float *)(uVar5 * 0x20 + param_4);
            pfVar2 = (float *)(lVar6 + param_4);
            auVar9 = divps(CONCAT412(pfVar1[3] - pfVar2[3],
                                     CONCAT48(pfVar1[2] - pfVar2[2],
                                              CONCAT44(pfVar1[1] - pfVar2[1],*pfVar1 - *pfVar2))),
                           CONCAT412(fVar8,CONCAT48(fVar8,CONCAT44(fVar8,fVar8))));
            pfVar1 = (float *)(lVar6 + param_4);
            *param_5_00 = CONCAT44((param_1 - fVar3) * SUB164(auVar9 >> 0x20,0) + pfVar1[1],
                                   (param_1 - fVar3) * SUB164(auVar9,0) + *pfVar1);
            return;
        }
        lVar6 = uVar5 << 5;
    }
    else {
        lVar6 = (ulonglong)uVar7 * 0x20;
        fVar8 = *(float *)(param_3 + (ulonglong)(uVar7 + 1) * 0x10);
        fVar3 = *(float *)(param_3 + (ulonglong)uVar7 * 0x10);
        if (fVar8 != fVar3) {
            pfVar1 = (float *)((ulonglong)(uVar7 + 1) * 0x20 + param_4);
            fVar8 = (param_1 - fVar3) / (fVar8 - fVar3);
            *param_5_00 = CONCAT44(fVar8 * (pfVar1[1] - ((float *)(lVar6 + param_4))[1]) +
                                   ((float *)(lVar6 + param_4))[1],
                                   fVar8 * (*pfVar1 - *(float *)(lVar6 + param_4)) +
                                   *(float *)(lVar6 + param_4));
            return;
        }
    }
    *param_5_00 = *(undefined8 *)(lVar6 + param_4);
    return;
}



void FUN_140318b80(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
int iVar1;
undefined8 uVar2;
float fVar3;
float local_res10 [6];

iVar1 = *(int *)(param_2 + 0x68);
if (iVar1 == 1) {
FUN_1403091c0(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 8),
*(undefined8 *)(param_1 + 0x18),param_4,param_1 + 0x28);
return;
}
if (iVar1 != 2) {
if (iVar1 == 3) {
FUN_1403091c0(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x38),
*(undefined8 *)(param_1 + 0x18),param_4,param_1 + 0x30);
FUN_1403091c0(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x20),local_res10,
param_4,param_1 + 0x2c);
fVar3 = 1.0;
}
else {
if (iVar1 != 4) {
return;
}
FUN_1403091c0(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x50),
*(undefined8 *)(param_1 + 0x18),param_4,0);
FUN_1403091c0(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x38),local_res10,
param_4,param_1 + 0x30);
fVar3 = 1.0;
uVar2 = *(undefined8 *)(param_1 + 0x20);
**(float **)(param_1 + 0x18) =
(1.0 - *(float *)(param_2 + 0x3c)) * (**(float **)(param_1 + 0x18) - local_res10[0]) +
local_res10[0];
FUN_1403091c0(uVar2,*(undefined4 *)(param_2 + 0x20),local_res10,param_4,param_1 + 0x2c);
}
uVar2 = *(undefined8 *)(param_1 + 0x20);
**(float **)(param_1 + 0x18) =
(fVar3 - *(float *)(param_2 + 0x24)) * (**(float **)(param_1 + 0x18) - local_res10[0]) +
local_res10[0];
FUN_1403091c0(uVar2,*(undefined4 *)(param_2 + 8),local_res10,param_4,param_1 + 0x28);
**(float **)(param_1 + 0x18) =
(fVar3 - *(float *)(param_2 + 0xc)) * (**(float **)(param_1 + 0x18) - local_res10[0]) +
local_res10[0];
return;
}
FUN_1403091c0(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x20),
*(undefined8 *)(param_1 + 0x18),param_4,param_1 + 0x2c);
FUN_1403091c0(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 8),local_res10,param_4,
param_1 + 0x28);
**(float **)(param_1 + 0x18) =
(1.0 - *(float *)(param_2 + 0xc)) * (**(float **)(param_1 + 0x18) - local_res10[0]) +
local_res10[0];
return;
}



void FUN_140318d70(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
int iVar1;
undefined8 uVar2;
float fVar3;
float local_res10 [6];

iVar1 = *(int *)(param_2 + 0x68);
if (iVar1 == 1) {
FUN_140308510(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 8),
*(undefined8 *)(param_1 + 0x18),param_4,param_1 + 0x28);
return;
}
if (iVar1 != 2) {
if (iVar1 == 3) {
FUN_140308510(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x38),
*(undefined8 *)(param_1 + 0x18),param_4,param_1 + 0x30);
FUN_140308510(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x20),local_res10,
param_4,param_1 + 0x2c);
fVar3 = 1.0;
}
else {
if (iVar1 != 4) {
return;
}
FUN_140308510(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x50),
*(undefined8 *)(param_1 + 0x18),param_4,0);
FUN_140308510(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x38),local_res10,
param_4,param_1 + 0x30);
fVar3 = 1.0;
uVar2 = *(undefined8 *)(param_1 + 0x20);
**(float **)(param_1 + 0x18) =
(1.0 - *(float *)(param_2 + 0x3c)) * (**(float **)(param_1 + 0x18) - local_res10[0]) +
local_res10[0];
FUN_140308510(uVar2,*(undefined4 *)(param_2 + 0x20),local_res10,param_4,param_1 + 0x2c);
}
uVar2 = *(undefined8 *)(param_1 + 0x20);
**(float **)(param_1 + 0x18) =
(fVar3 - *(float *)(param_2 + 0x24)) * (**(float **)(param_1 + 0x18) - local_res10[0]) +
local_res10[0];
FUN_140308510(uVar2,*(undefined4 *)(param_2 + 8),local_res10,param_4,param_1 + 0x28);
**(float **)(param_1 + 0x18) =
(fVar3 - *(float *)(param_2 + 0xc)) * (**(float **)(param_1 + 0x18) - local_res10[0]) +
local_res10[0];
return;
}
FUN_140308510(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x20),
*(undefined8 *)(param_1 + 0x18),param_4,param_1 + 0x2c);
FUN_140308510(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 8),local_res10,param_4,
param_1 + 0x28);
**(float **)(param_1 + 0x18) =
(1.0 - *(float *)(param_2 + 0xc)) * (**(float **)(param_1 + 0x18) - local_res10[0]) +
local_res10[0];
return;
}



void FUN_140318f60(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
int iVar1;
undefined (*pauVar2) [16];
float fVar3;
float fVar4;
float local_28;
float fStack36;
float fStack32;
float fStack28;

iVar1 = *(int *)(param_2 + 0x68);
if (iVar1 == 1) {
FUN_140306fc0(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 8),
*(undefined8 *)(param_1 + 0x18),param_4,param_1 + 0x28);
return;
}
if (iVar1 != 2) {
if (iVar1 == 3) {
FUN_140306fc0(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x38),
*(undefined8 *)(param_1 + 0x18),param_4,param_1 + 0x30);
FUN_140306fc0(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x20),&local_28,
param_4,param_1 + 0x2c);
fVar4 = 1.0;
}
else {
if (iVar1 != 4) {
return;
}
FUN_140306fc0(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x50),
*(undefined8 *)(param_1 + 0x18),param_4,0);
FUN_140306fc0(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x38),&local_28,
param_4,param_1 + 0x30);
pauVar2 = *(undefined (**) [16])(param_1 + 0x18);
fVar4 = 1.0;
fVar3 = 1.0 - *(float *)(param_2 + 0x3c);
*pauVar2 = CONCAT412(fVar3 * (*(float *)(*pauVar2 + 0xc) - fStack28) + fStack28,
                     CONCAT48(fVar3 * (*(float *)(*pauVar2 + 8) - fStack32) + fStack32,
                              CONCAT44(fVar3 * (*(float *)(*pauVar2 + 4) - fStack36) +
                                       fStack36,fVar3 * (*(float *)*pauVar2 - local_28) +
                                                local_28)));
FUN_140306fc0(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x20),&local_28,
param_4,param_1 + 0x2c);
}
pauVar2 = *(undefined (**) [16])(param_1 + 0x18);
fVar3 = fVar4 - *(float *)(param_2 + 0x24);
*pauVar2 = CONCAT412(fVar3 * (*(float *)(*pauVar2 + 0xc) - fStack28) + fStack28,
                     CONCAT48(fVar3 * (*(float *)(*pauVar2 + 8) - fStack32) + fStack32,
                              CONCAT44(fVar3 * (*(float *)(*pauVar2 + 4) - fStack36) + fStack36,
                                       fVar3 * (*(float *)*pauVar2 - local_28) + local_28)));
FUN_140306fc0(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 8),&local_28,param_4,
param_1 + 0x28);
pauVar2 = *(undefined (**) [16])(param_1 + 0x18);
fVar4 = fVar4 - *(float *)(param_2 + 0xc);
*pauVar2 = CONCAT412(fVar4 * (*(float *)(*pauVar2 + 0xc) - fStack28) + fStack28,
                     CONCAT48(fVar4 * (*(float *)(*pauVar2 + 8) - fStack32) + fStack32,
                              CONCAT44(fVar4 * (*(float *)(*pauVar2 + 4) - fStack36) + fStack36,
                                       fVar4 * (*(float *)*pauVar2 - local_28) + local_28)));
return;
}
FUN_140306fc0(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x20),
*(undefined8 *)(param_1 + 0x18),param_4,param_1 + 0x2c);
FUN_140306fc0(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 8),&local_28,param_4,
param_1 + 0x28);
pauVar2 = *(undefined (**) [16])(param_1 + 0x18);
fVar4 = 1.0 - *(float *)(param_2 + 0xc);
*pauVar2 = CONCAT412(fVar4 * (*(float *)(*pauVar2 + 0xc) - fStack28) + fStack28,
                     CONCAT48(fVar4 * (*(float *)(*pauVar2 + 8) - fStack32) + fStack32,
                              CONCAT44(fVar4 * (*(float *)(*pauVar2 + 4) - fStack36) + fStack36,
                                       fVar4 * (*(float *)*pauVar2 - local_28) + local_28)));
return;
}



void FUN_140319150(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
int iVar1;
undefined (*pauVar2) [16];
float fVar3;
float fVar4;
float local_28;
float fStack36;
float fStack32;
float fStack28;

iVar1 = *(int *)(param_2 + 0x68);
if (iVar1 == 1) {
FUN_140307830(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 8),
*(undefined8 *)(param_1 + 0x18),param_4,param_1 + 0x28);
return;
}
if (iVar1 != 2) {
if (iVar1 == 3) {
FUN_140307830(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x38),
*(undefined8 *)(param_1 + 0x18),param_4,param_1 + 0x30);
FUN_140307830(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x20),&local_28,
param_4,param_1 + 0x2c);
fVar4 = 1.0;
}
else {
if (iVar1 != 4) {
return;
}
FUN_140307830(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x50),
*(undefined8 *)(param_1 + 0x18),param_4,0);
FUN_140307830(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x38),&local_28,
param_4,param_1 + 0x30);
pauVar2 = *(undefined (**) [16])(param_1 + 0x18);
fVar4 = 1.0;
fVar3 = 1.0 - *(float *)(param_2 + 0x3c);
*pauVar2 = CONCAT412(fVar3 * (*(float *)(*pauVar2 + 0xc) - fStack28) + fStack28,
                     CONCAT48(fVar3 * (*(float *)(*pauVar2 + 8) - fStack32) + fStack32,
                              CONCAT44(fVar3 * (*(float *)(*pauVar2 + 4) - fStack36) +
                                       fStack36,fVar3 * (*(float *)*pauVar2 - local_28) +
                                                local_28)));
FUN_140307830(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x20),&local_28,
param_4,param_1 + 0x2c);
}
pauVar2 = *(undefined (**) [16])(param_1 + 0x18);
fVar3 = fVar4 - *(float *)(param_2 + 0x24);
*pauVar2 = CONCAT412(fVar3 * (*(float *)(*pauVar2 + 0xc) - fStack28) + fStack28,
                     CONCAT48(fVar3 * (*(float *)(*pauVar2 + 8) - fStack32) + fStack32,
                              CONCAT44(fVar3 * (*(float *)(*pauVar2 + 4) - fStack36) + fStack36,
                                       fVar3 * (*(float *)*pauVar2 - local_28) + local_28)));
FUN_140307830(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 8),&local_28,param_4,
param_1 + 0x28);
pauVar2 = *(undefined (**) [16])(param_1 + 0x18);
fVar4 = fVar4 - *(float *)(param_2 + 0xc);
*pauVar2 = CONCAT412(fVar4 * (*(float *)(*pauVar2 + 0xc) - fStack28) + fStack28,
                     CONCAT48(fVar4 * (*(float *)(*pauVar2 + 8) - fStack32) + fStack32,
                              CONCAT44(fVar4 * (*(float *)(*pauVar2 + 4) - fStack36) + fStack36,
                                       fVar4 * (*(float *)*pauVar2 - local_28) + local_28)));
return;
}
FUN_140307830(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x20),
*(undefined8 *)(param_1 + 0x18),param_4,param_1 + 0x2c);
FUN_140307830(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 8),&local_28,param_4,
param_1 + 0x28);
pauVar2 = *(undefined (**) [16])(param_1 + 0x18);
fVar4 = 1.0 - *(float *)(param_2 + 0xc);
*pauVar2 = CONCAT412(fVar4 * (*(float *)(*pauVar2 + 0xc) - fStack28) + fStack28,
                     CONCAT48(fVar4 * (*(float *)(*pauVar2 + 8) - fStack32) + fStack32,
                              CONCAT44(fVar4 * (*(float *)(*pauVar2 + 4) - fStack36) + fStack36,
                                       fVar4 * (*(float *)*pauVar2 - local_28) + local_28)));
return;
}



void FUN_140319340(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
int iVar1;
undefined (*pauVar2) [16];
float fVar3;
float fVar4;
float local_28;
float fStack36;
float fStack32;
float fStack28;

iVar1 = *(int *)(param_2 + 0x68);
if (iVar1 == 1) {
FUN_140308970(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 8),
*(undefined8 *)(param_1 + 0x18),param_4,param_1 + 0x28);
return;
}
if (iVar1 != 2) {
if (iVar1 == 3) {
FUN_140308970(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x38),
*(undefined8 *)(param_1 + 0x18),param_4,param_1 + 0x30);
FUN_140308970(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x20),&local_28,
param_4,param_1 + 0x2c);
fVar4 = 1.0;
}
else {
if (iVar1 != 4) {
return;
}
FUN_140308970(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x50),
*(undefined8 *)(param_1 + 0x18),param_4,0);
FUN_140308970(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x38),&local_28,
param_4,param_1 + 0x30);
pauVar2 = *(undefined (**) [16])(param_1 + 0x18);
fVar4 = 1.0;
fVar3 = 1.0 - *(float *)(param_2 + 0x3c);
*pauVar2 = CONCAT412(fVar3 * (*(float *)(*pauVar2 + 0xc) - fStack28) + fStack28,
                     CONCAT48(fVar3 * (*(float *)(*pauVar2 + 8) - fStack32) + fStack32,
                              CONCAT44(fVar3 * (*(float *)(*pauVar2 + 4) - fStack36) +
                                       fStack36,fVar3 * (*(float *)*pauVar2 - local_28) +
                                                local_28)));
FUN_140308970(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x20),&local_28,
param_4,param_1 + 0x2c);
}
pauVar2 = *(undefined (**) [16])(param_1 + 0x18);
fVar3 = fVar4 - *(float *)(param_2 + 0x24);
*pauVar2 = CONCAT412(fVar3 * (*(float *)(*pauVar2 + 0xc) - fStack28) + fStack28,
                     CONCAT48(fVar3 * (*(float *)(*pauVar2 + 8) - fStack32) + fStack32,
                              CONCAT44(fVar3 * (*(float *)(*pauVar2 + 4) - fStack36) + fStack36,
                                       fVar3 * (*(float *)*pauVar2 - local_28) + local_28)));
FUN_140308970(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 8),&local_28,param_4,
param_1 + 0x28);
pauVar2 = *(undefined (**) [16])(param_1 + 0x18);
fVar4 = fVar4 - *(float *)(param_2 + 0xc);
*pauVar2 = CONCAT412(fVar4 * (*(float *)(*pauVar2 + 0xc) - fStack28) + fStack28,
                     CONCAT48(fVar4 * (*(float *)(*pauVar2 + 8) - fStack32) + fStack32,
                              CONCAT44(fVar4 * (*(float *)(*pauVar2 + 4) - fStack36) + fStack36,
                                       fVar4 * (*(float *)*pauVar2 - local_28) + local_28)));
return;
}
FUN_140308970(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x20),
*(undefined8 *)(param_1 + 0x18),param_4,param_1 + 0x2c);
FUN_140308970(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 8),&local_28,param_4,
param_1 + 0x28);
pauVar2 = *(undefined (**) [16])(param_1 + 0x18);
fVar4 = 1.0 - *(float *)(param_2 + 0xc);
*pauVar2 = CONCAT412(fVar4 * (*(float *)(*pauVar2 + 0xc) - fStack28) + fStack28,
                     CONCAT48(fVar4 * (*(float *)(*pauVar2 + 8) - fStack32) + fStack32,
                              CONCAT44(fVar4 * (*(float *)(*pauVar2 + 4) - fStack36) + fStack36,
                                       fVar4 * (*(float *)*pauVar2 - local_28) + local_28)));
return;
}



void FUN_140319530(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
int iVar1;
undefined (*pauVar2) [16];
float fVar3;
float fVar4;
float local_28;
float fStack36;
float fStack32;
float fStack28;

iVar1 = *(int *)(param_2 + 0x68);
if (iVar1 == 1) {
FUN_140309620(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 8),
*(undefined8 *)(param_1 + 0x18),param_4,param_1 + 0x28);
return;
}
if (iVar1 != 2) {
if (iVar1 == 3) {
FUN_140309620(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x38),
*(undefined8 *)(param_1 + 0x18),param_4,param_1 + 0x30);
FUN_140309620(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x20),&local_28,
param_4,param_1 + 0x2c);
fVar4 = 1.0;
}
else {
if (iVar1 != 4) {
return;
}
FUN_140309620(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x50),
*(undefined8 *)(param_1 + 0x18),param_4,0);
FUN_140309620(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x38),&local_28,
param_4,param_1 + 0x30);
pauVar2 = *(undefined (**) [16])(param_1 + 0x18);
fVar4 = 1.0;
fVar3 = 1.0 - *(float *)(param_2 + 0x3c);
*pauVar2 = CONCAT412(fVar3 * (*(float *)(*pauVar2 + 0xc) - fStack28) + fStack28,
                     CONCAT48(fVar3 * (*(float *)(*pauVar2 + 8) - fStack32) + fStack32,
                              CONCAT44(fVar3 * (*(float *)(*pauVar2 + 4) - fStack36) +
                                       fStack36,fVar3 * (*(float *)*pauVar2 - local_28) +
                                                local_28)));
FUN_140309620(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x20),&local_28,
param_4,param_1 + 0x2c);
}
pauVar2 = *(undefined (**) [16])(param_1 + 0x18);
fVar3 = fVar4 - *(float *)(param_2 + 0x24);
*pauVar2 = CONCAT412(fVar3 * (*(float *)(*pauVar2 + 0xc) - fStack28) + fStack28,
                     CONCAT48(fVar3 * (*(float *)(*pauVar2 + 8) - fStack32) + fStack32,
                              CONCAT44(fVar3 * (*(float *)(*pauVar2 + 4) - fStack36) + fStack36,
                                       fVar3 * (*(float *)*pauVar2 - local_28) + local_28)));
FUN_140309620(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 8),&local_28,param_4,
param_1 + 0x28);
pauVar2 = *(undefined (**) [16])(param_1 + 0x18);
fVar4 = fVar4 - *(float *)(param_2 + 0xc);
*pauVar2 = CONCAT412(fVar4 * (*(float *)(*pauVar2 + 0xc) - fStack28) + fStack28,
                     CONCAT48(fVar4 * (*(float *)(*pauVar2 + 8) - fStack32) + fStack32,
                              CONCAT44(fVar4 * (*(float *)(*pauVar2 + 4) - fStack36) + fStack36,
                                       fVar4 * (*(float *)*pauVar2 - local_28) + local_28)));
return;
}
FUN_140309620(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x20),
*(undefined8 *)(param_1 + 0x18),param_4,param_1 + 0x2c);
FUN_140309620(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 8),&local_28,param_4,
param_1 + 0x28);
pauVar2 = *(undefined (**) [16])(param_1 + 0x18);
fVar4 = 1.0 - *(float *)(param_2 + 0xc);
*pauVar2 = CONCAT412(fVar4 * (*(float *)(*pauVar2 + 0xc) - fStack28) + fStack28,
                     CONCAT48(fVar4 * (*(float *)(*pauVar2 + 8) - fStack32) + fStack32,
                              CONCAT44(fVar4 * (*(float *)(*pauVar2 + 4) - fStack36) + fStack36,
                                       fVar4 * (*(float *)*pauVar2 - local_28) + local_28)));
return;
}



void FUN_140319720(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
int iVar1;
undefined4 local_res10 [6];

iVar1 = *(int *)(param_2 + 0x68);
if (iVar1 == 1) {
FUN_14030a400(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 8),
*(undefined8 *)(param_1 + 0x18),param_4,param_1 + 0x28);
}
else {
if (iVar1 == 2) {
FUN_14030a400(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x20),
*(undefined8 *)(param_1 + 0x18),param_4,param_1 + 0x2c);
FUN_14030a400(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 8),local_res10,param_4
,param_1 + 0x28);
**(undefined4 **)(param_1 + 0x18) = local_res10[0];
return;
}
if (iVar1 == 3) {
FUN_14030a400(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x38),
*(undefined8 *)(param_1 + 0x18),param_4,param_1 + 0x30);
FUN_14030a400(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x20),local_res10,
param_4,param_1 + 0x2c);
**(undefined4 **)(param_1 + 0x18) = local_res10[0];
FUN_14030a400(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 8),local_res10,param_4
,param_1 + 0x28);
**(undefined4 **)(param_1 + 0x18) = local_res10[0];
return;
}
if (iVar1 == 4) {
FUN_14030a400(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x50),
*(undefined8 *)(param_1 + 0x18),param_4,0);
FUN_14030a400(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x38),local_res10,
param_4,param_1 + 0x30);
**(undefined4 **)(param_1 + 0x18) = local_res10[0];
FUN_14030a400(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x20),local_res10,
param_4,param_1 + 0x2c);
**(undefined4 **)(param_1 + 0x18) = local_res10[0];
FUN_14030a400(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 8),local_res10,param_4
,param_1 + 0x28);
**(undefined4 **)(param_1 + 0x18) = local_res10[0];
return;
}
}
return;
}



void FUN_1403198c0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
int iVar1;
undefined4 local_res10 [6];

iVar1 = *(int *)(param_2 + 0x68);
if (iVar1 == 1) {
FUN_140319c00(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 8),
*(undefined8 *)(param_1 + 0x18),param_4,param_1 + 0x28);
}
else {
if (iVar1 == 2) {
FUN_140319c00(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x20),
*(undefined8 *)(param_1 + 0x18),param_4,param_1 + 0x2c);
FUN_140319c00(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 8),local_res10,param_4
,param_1 + 0x28);
**(undefined4 **)(param_1 + 0x18) = local_res10[0];
return;
}
if (iVar1 == 3) {
FUN_140319c00(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x38),
*(undefined8 *)(param_1 + 0x18),param_4,param_1 + 0x30);
FUN_140319c00(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x20),local_res10,
param_4,param_1 + 0x2c);
**(undefined4 **)(param_1 + 0x18) = local_res10[0];
FUN_140319c00(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 8),local_res10,param_4
,param_1 + 0x28);
**(undefined4 **)(param_1 + 0x18) = local_res10[0];
return;
}
if (iVar1 == 4) {
FUN_140319c00(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x50),
*(undefined8 *)(param_1 + 0x18),param_4,0);
FUN_140319c00(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x38),local_res10,
param_4,param_1 + 0x30);
**(undefined4 **)(param_1 + 0x18) = local_res10[0];
FUN_140319c00(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x20),local_res10,
param_4,param_1 + 0x2c);
**(undefined4 **)(param_1 + 0x18) = local_res10[0];
FUN_140319c00(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 8),local_res10,param_4
,param_1 + 0x28);
**(undefined4 **)(param_1 + 0x18) = local_res10[0];
return;
}
}
return;
}



void FUN_140319a60(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
int iVar1;
undefined4 local_res10 [6];

iVar1 = *(int *)(param_2 + 0x68);
if (iVar1 == 1) {
FUN_140319d10(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 8),
*(undefined8 *)(param_1 + 0x18),param_4,param_1 + 0x28);
}
else {
if (iVar1 == 2) {
FUN_140319d10(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x20),
*(undefined8 *)(param_1 + 0x18),param_4,param_1 + 0x2c);
FUN_140319d10(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 8),local_res10,param_4
,param_1 + 0x28);
**(undefined4 **)(param_1 + 0x18) = local_res10[0];
return;
}
if (iVar1 == 3) {
FUN_140319d10(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x38),
*(undefined8 *)(param_1 + 0x18),param_4,param_1 + 0x30);
FUN_140319d10(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x20),local_res10,
param_4,param_1 + 0x2c);
**(undefined4 **)(param_1 + 0x18) = local_res10[0];
FUN_140319d10(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 8),local_res10,param_4
,param_1 + 0x28);
**(undefined4 **)(param_1 + 0x18) = local_res10[0];
return;
}
if (iVar1 == 4) {
FUN_140319d10(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x50),
*(undefined8 *)(param_1 + 0x18),param_4,0);
FUN_140319d10(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x38),local_res10,
param_4,param_1 + 0x30);
**(undefined4 **)(param_1 + 0x18) = local_res10[0];
FUN_140319d10(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x20),local_res10,
param_4,param_1 + 0x2c);
**(undefined4 **)(param_1 + 0x18) = local_res10[0];
FUN_140319d10(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 8),local_res10,param_4
,param_1 + 0x28);
**(undefined4 **)(param_1 + 0x18) = local_res10[0];
return;
}
}
return;
}



void FUN_140319c00(uint *param_1,uint param_2,uint *param_3,undefined8 param_4,uint *param_5)

{
uint *puVar1;
uint uVar2;
uint uVar3;
uint uVar4;
ulonglong uVar5;
uint uVar6;
uint local_res20 [2];

uVar6 = *param_1;
if (uVar6 == 0) {
*param_3 = 0;
return;
}
if (uVar6 == 1) {
*param_3 = (uint)**(ushort **)(param_1 + 4);
return;
}
if (param_5 == (uint *)0x0) {
param_5 = local_res20;
LAB_140319c92:
uVar4 = 0;
if (uVar6 != 0) {
uVar3 = uVar6;
do {
uVar2 = (uVar3 - uVar4 >> 1) + uVar4;
if (*(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar2 * 4) <= param_2) {
uVar4 = uVar2 + 1;
uVar2 = uVar3;
}
uVar3 = uVar2;
} while (uVar4 < uVar3);
}
if (uVar4 != 0) {
*param_3 = (uint)(*(ushort **)(param_1 + 4))[uVar4 - 1];
if (uVar6 != uVar4) {
*param_5 = uVar4 - 1;
return;
}
*param_5 = *param_1 - 2;
return;
}
*param_3 = (uint)**(ushort **)(param_1 + 4);
*param_5 = 0;
return;
}
uVar4 = *param_5;
uVar5 = (ulonglong)uVar4;
puVar1 = (uint *)(*(longlong *)(param_1 + 2) + uVar5 * 4);
if ((param_2 <= *puVar1 && *puVar1 != param_2) ||
(*(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)(uVar4 + 1) * 4) <= param_2)) {
uVar3 = uVar4 + 1;
uVar5 = (ulonglong)uVar3;
*param_5 = uVar3;
uVar6 = *param_1;
if ((uVar6 - 1 <= uVar3) ||
((puVar1 = (uint *)(*(longlong *)(param_1 + 2) + uVar5 * 4),
        param_2 <= *puVar1 && *puVar1 != param_2 ||
(*(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)(uVar4 + 2) * 4) <= param_2))))
goto LAB_140319c92;
}
*param_3 = (uint)*(ushort *)(*(longlong *)(param_1 + 4) + uVar5 * 2);
return;
}



void FUN_140319d10(uint *param_1,uint param_2,undefined4 *param_3,undefined8 param_4,uint *param_5)

{
uint *puVar1;
uint uVar2;
uint uVar3;
uint uVar4;
ulonglong uVar5;
uint uVar6;
uint local_res20 [2];

uVar6 = *param_1;
if (uVar6 == 0) {
*param_3 = 0;
return;
}
if (uVar6 == 1) {
*param_3 = **(undefined4 **)(param_1 + 4);
return;
}
if (param_5 == (uint *)0x0) {
param_5 = local_res20;
LAB_140319da0:
uVar4 = 0;
if (uVar6 != 0) {
uVar3 = uVar6;
do {
uVar2 = (uVar3 - uVar4 >> 1) + uVar4;
if (*(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar2 * 4) <= param_2) {
uVar4 = uVar2 + 1;
uVar2 = uVar3;
}
uVar3 = uVar2;
} while (uVar4 < uVar3);
}
if (uVar4 != 0) {
*param_3 = (*(undefined4 **)(param_1 + 4))[uVar4 - 1];
if (uVar6 != uVar4) {
*param_5 = uVar4 - 1;
return;
}
*param_5 = *param_1 - 2;
return;
}
*param_3 = **(undefined4 **)(param_1 + 4);
*param_5 = 0;
return;
}
uVar4 = *param_5;
uVar5 = (ulonglong)uVar4;
puVar1 = (uint *)(*(longlong *)(param_1 + 2) + uVar5 * 4);
if ((param_2 <= *puVar1 && *puVar1 != param_2) ||
(*(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)(uVar4 + 1) * 4) <= param_2)) {
uVar3 = uVar4 + 1;
uVar5 = (ulonglong)uVar3;
*param_5 = uVar3;
uVar6 = *param_1;
if ((uVar6 - 1 <= uVar3) ||
((puVar1 = (uint *)(*(longlong *)(param_1 + 2) + uVar5 * 4),
        param_2 <= *puVar1 && *puVar1 != param_2 ||
(*(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)(uVar4 + 2) * 4) <= param_2))))
goto LAB_140319da0;
}
*param_3 = *(undefined4 *)(*(longlong *)(param_1 + 4) + uVar5 * 4);
return;
}



undefined8 * FUN_140319e40(undefined8 *param_1)

{
    FUN_14032d190();
    *param_1 = &PTR_LAB_140b64310;
    param_1[0x89] = 0;
    param_1[0x88] = 0;
    param_1[0x8a] = 0;
    FUN_1407e4830(param_1 + 0x8b,0,0x50);
    FUN_1407e4830(param_1 + 0x95,0,0x50);
    FUN_1407e4830(param_1 + 0x9f,0,0x50);
    FUN_1407e4830(param_1 + 0xa9,0,0x50);
    param_1[0xb3] = 0;
    param_1[0x87] = 0;
    return param_1;
}



undefined8 FUN_140319ee0(undefined8 param_1,ulonglong param_2)

{
FUN_140319f20();
if ((param_2 & 1) != 0) {
FUN_14018b900(param_1,0);
}
return param_1;
}



// WARNING: Removing unreachable block (ram,0x00014031a15e)
// WARNING: Removing unreachable block (ram,0x00014031a09e)
// WARNING: Removing unreachable block (ram,0x00014031a0fe)
// WARNING: Removing unreachable block (ram,0x00014031a1be)

void FUN_140319f20(undefined8 *param_1)

{
    longlong *plVar1;
    longlong *plVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    undefined8 *puVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    longlong lVar9;

    plVar1 = param_1 + 0x8a;
    uVar4 = 0;
    *param_1 = &PTR_LAB_140b64310;
    lVar9 = *plVar1;
    while (lVar9 != 0) {
        lVar9 = *plVar1;
        plVar2 = *(longlong **)(lVar9 + 0x50);
        if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x460))(plVar2,0,0);
            if (*(longlong **)(lVar9 + 0x50) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(lVar9 + 0x50) + 8))();
                *(undefined8 *)(lVar9 + 0x50) = 0;
            }
        }
        lVar9 = *plVar1;
        if (lVar9 != 0) {
            if (*(undefined8 **)(lVar9 + 0x70) != (undefined8 *)0x0) {
                **(undefined8 **)(lVar9 + 0x70) = *(undefined8 *)(lVar9 + 0x78);
            }
            if (*(longlong *)(lVar9 + 0x78) != 0) {
                *(undefined8 *)(*(longlong *)(lVar9 + 0x78) + 0x70) = *(undefined8 *)(lVar9 + 0x70);
            }
            *(undefined8 *)(lVar9 + 0x70) = 0;
            *(undefined8 *)(lVar9 + 0x78) = 0;
            FUN_14018b900();
        }
        lVar9 = *plVar1;
    }
    if (param_1[0x89] != 0) {
        do {
            lVar9 = param_1[0x88] + uVar4 * 0x70;
            plVar2 = *(longlong **)(lVar9 + 0x50);
            if (plVar2 != (longlong *)0x0) {
                (**(code **)(*plVar2 + 8))();
                *(undefined8 *)(lVar9 + 0x50) = 0;
            }
            uVar4 = (ulonglong)((int)uVar4 + 1);
        } while (uVar4 < (ulonglong)param_1[0x89]);
    }
    FUN_14031cd00(param_1 + 0x88,0);
    FUN_14018b900(param_1[0xb3],0);
    if ((longlong *)param_1[0x87] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x87] + 8))();
        param_1[0x87] = 0;
    }
    iVar6 = 4;
    puVar5 = param_1 + 0xb4;
    iVar8 = 4;
    iVar7 = iVar8;
    do {
        puVar3 = (undefined8 *)puVar5[-2];
        puVar5 = puVar5 + -2;
        if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = &PTR_FUN_140b66870;
            if ((undefined8 *)puVar3[1] != (undefined8 *)0x0) {
                *(undefined8 *)puVar3[1] = puVar3[2];
            }
            if (puVar3[2] != 0) {
                *(undefined8 *)(puVar3[2] + 8) = puVar3[1];
            }
            puVar3[1] = 0;
            puVar3[2] = 0;
            puVar3[1] = 0;
            puVar3[2] = 0;
            FUN_14018b900(puVar3,0);
        }
        iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
    puVar5 = param_1 + 0xaa;
    do {
        puVar3 = (undefined8 *)puVar5[-2];
        puVar5 = puVar5 + -2;
        if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = &PTR_FUN_140b66870;
            if ((undefined8 *)puVar3[1] != (undefined8 *)0x0) {
                *(undefined8 *)puVar3[1] = puVar3[2];
            }
            if (puVar3[2] != 0) {
                *(undefined8 *)(puVar3[2] + 8) = puVar3[1];
            }
            puVar3[1] = 0;
            puVar3[2] = 0;
            puVar3[1] = 0;
            puVar3[2] = 0;
            FUN_14018b900(puVar3,0);
        }
        iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
    iVar7 = 4;
    puVar5 = param_1 + 0xa0;
    do {
        puVar3 = (undefined8 *)puVar5[-2];
        puVar5 = puVar5 + -2;
        if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = &PTR_FUN_140b66870;
            if ((undefined8 *)puVar3[1] != (undefined8 *)0x0) {
                *(undefined8 *)puVar3[1] = puVar3[2];
            }
            if (puVar3[2] != 0) {
                *(undefined8 *)(puVar3[2] + 8) = puVar3[1];
            }
            puVar3[1] = 0;
            puVar3[2] = 0;
            puVar3[1] = 0;
            puVar3[2] = 0;
            FUN_14018b900(puVar3,0);
        }
        iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
    puVar5 = param_1 + 0x96;
    do {
        puVar3 = (undefined8 *)puVar5[-2];
        puVar5 = puVar5 + -2;
        if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = &PTR_FUN_140b66870;
            if ((undefined8 *)puVar3[1] != (undefined8 *)0x0) {
                *(undefined8 *)puVar3[1] = puVar3[2];
            }
            if (puVar3[2] != 0) {
                *(undefined8 *)(puVar3[2] + 8) = puVar3[1];
            }
            puVar3[1] = 0;
            puVar3[2] = 0;
            puVar3[1] = 0;
            puVar3[2] = 0;
            FUN_14018b900(puVar3,0);
        }
        iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    if (*plVar1 != 0) {
        FUN_1401a4a00(plVar1);
    }
    lVar9 = param_1[0x88];
    if (lVar9 != 0) {
        (**(code **)(*(longlong *)(lVar9 + -0x10) + 8))(lVar9 + -0x10);
    }
    FUN_14032d3f0(param_1);
    return;
}



undefined8 FUN_14031a220(longlong param_1)

{
short *psVar1;
longlong *plVar2;
undefined8 uVar3;

uVar3 = FUN_14032d6b0();
if (-1 < (int)uVar3) {
psVar1 = *(short **)(*(longlong *)(param_1 + 0x1a0) + 0xec0);
if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x10);
(**(code **)(*plVar2 + 0x28))(plVar2,psVar1,param_1 + 0x438,0);
return 0;
}
uVar3 = 0x80070057;
}
return uVar3;
}



void FUN_14031a280(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
int iVar1;
undefined8 uVar2;
longlong lVar3;
longlong lVar4;
uint extraout_XMM0_Da;
undefined4 uVar5;
uint uVar6;
uint extraout_XMM0_Da_00;
uint extraout_XMM0_Da_01;
uint extraout_XMM0_Da_02;
undefined4 in_XMM6_Da;
uint uVar7;
undefined4 in_XMM6_Db;
undefined4 in_XMM6_Dc;
undefined4 in_XMM6_Dd;

if (*(longlong *)(param_1 + 0x598) == 0) {
uVar2 = FUN_14018b280(0x600,0,param_3,param_4,
                      CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)))
);
lVar3 = 0;
*(undefined8 *)(param_1 + 0x598) = uVar2;
lVar4 = 0x20;
uVar7 = 0x80000000;
uVar6 = extraout_XMM0_Da;
do {
uVar5 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))
        (uVar6,*(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x808),
         *(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x80c));
*(undefined4 *)(lVar3 + 8 + *(longlong *)(param_1 + 0x598)) = uVar5;
uVar5 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))
        (uVar5,*(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x810),
         *(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x814));
*(undefined4 *)(lVar3 + 0x18 + *(longlong *)(param_1 + 0x598)) = uVar5;
uVar6 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))
        (uVar5,*(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x818),
         *(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x81c));
*(uint *)(lVar3 + 0x28 + *(longlong *)(param_1 + 0x598)) = uVar6;
if (((*(byte *)(*(longlong *)(param_1 + 0x1a0) + 0xec8) & 0x10) != 0) &&
(iVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x40))
        (*(longlong **)(param_1 + 0x38),0,1), uVar6 = extraout_XMM0_Da_00,
        iVar1 != 0)) {
*(uint *)(lVar3 + 8 + *(longlong *)(param_1 + 0x598)) =
*(uint *)(lVar3 + 8 + *(longlong *)(param_1 + 0x598)) ^ uVar7;
*(uint *)(lVar3 + 0x18 + *(longlong *)(param_1 + 0x598)) =
*(uint *)(lVar3 + 0x18 + *(longlong *)(param_1 + 0x598)) ^ uVar7;
uVar6 = *(uint *)(lVar3 + 0x28 + *(longlong *)(param_1 + 0x598)) ^ uVar7;
*(uint *)(lVar3 + 0x28 + *(longlong *)(param_1 + 0x598)) = uVar6;
}
uVar5 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))
        (uVar6,*(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x820),
         *(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x824));
*(undefined4 *)(lVar3 + *(longlong *)(param_1 + 0x598)) = uVar5;
uVar5 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))
        (uVar5,*(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x828),
         *(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x82c));
*(undefined4 *)(lVar3 + 0x10 + *(longlong *)(param_1 + 0x598)) = uVar5;
uVar6 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))
        (uVar5,*(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x830),
         *(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x834));
*(uint *)(lVar3 + 0x20 + *(longlong *)(param_1 + 0x598)) = uVar6;
if (((*(byte *)(*(longlong *)(param_1 + 0x1a0) + 0xec8) & 0x20) != 0) &&
(iVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x40))(),
        uVar6 = extraout_XMM0_Da_01, iVar1 != 0)) {
*(uint *)(lVar3 + *(longlong *)(param_1 + 0x598)) =
*(uint *)(lVar3 + *(longlong *)(param_1 + 0x598)) ^ uVar7;
*(uint *)(lVar3 + 0x10 + *(longlong *)(param_1 + 0x598)) =
*(uint *)(lVar3 + 0x10 + *(longlong *)(param_1 + 0x598)) ^ uVar7;
uVar6 = *(uint *)(lVar3 + 0x20 + *(longlong *)(param_1 + 0x598)) ^ uVar7;
*(uint *)(lVar3 + 0x20 + *(longlong *)(param_1 + 0x598)) = uVar6;
}
uVar5 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))
        (uVar6,*(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x838),
         *(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x83c));
*(undefined4 *)(lVar3 + 4 + *(longlong *)(param_1 + 0x598)) = uVar5;
uVar5 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))
        (uVar5,*(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x840),
         *(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x844));
*(undefined4 *)(lVar3 + 0x14 + *(longlong *)(param_1 + 0x598)) = uVar5;
uVar6 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))
        (uVar5,*(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x848),
         *(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x84c));
*(uint *)(lVar3 + 0x24 + *(longlong *)(param_1 + 0x598)) = uVar6;
if (((*(byte *)(*(longlong *)(param_1 + 0x1a0) + 0xec8) & 0x40) != 0) &&
(iVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x40))(),
        uVar6 = extraout_XMM0_Da_02, iVar1 != 0)) {
*(uint *)(lVar3 + 4 + *(longlong *)(param_1 + 0x598)) =
*(uint *)(lVar3 + 4 + *(longlong *)(param_1 + 0x598)) ^ uVar7;
*(uint *)(lVar3 + 0x14 + *(longlong *)(param_1 + 0x598)) =
*(uint *)(lVar3 + 0x14 + *(longlong *)(param_1 + 0x598)) ^ uVar7;
uVar6 = *(uint *)(lVar3 + 0x24 + *(longlong *)(param_1 + 0x598)) ^ uVar7;
*(uint *)(lVar3 + 0x24 + *(longlong *)(param_1 + 0x598)) = uVar6;
}
lVar3 = lVar3 + 0x30;
lVar4 = lVar4 + -1;
} while (lVar4 != 0);
}
return;
}



// WARNING: Removing unreachable block (ram,0x00014031a891)

void FUN_14031a850(longlong *param_1,longlong param_2)

{
if (param_1 != (longlong *)0x0) {
(**(code **)(*param_1 + 8))();
}
if (*(undefined8 **)(param_2 + 0x70) != (undefined8 *)0x0) {
**(undefined8 **)(param_2 + 0x70) = *(undefined8 *)(param_2 + 0x78);
}
if (*(longlong *)(param_2 + 0x78) != 0) {
*(undefined8 *)(*(longlong *)(param_2 + 0x78) + 0x70) = *(undefined8 *)(param_2 + 0x70);
}
*(undefined8 *)(param_2 + 0x70) = 0;
*(undefined8 *)(param_2 + 0x78) = 0;
*(undefined8 *)(param_2 + 0x70) = 0;
*(undefined8 *)(param_2 + 0x78) = 0;
FUN_14018b900(param_2);
return;
}



void FUN_14031a8b0(longlong param_1)

{
ulonglong uVar1;
uint uVar2;
ulonglong uVar3;

if (*(char *)(param_1 + 400) == '\0') {
uVar1 = 0;
uVar3 = uVar1;
if (*(short *)(*(longlong *)(param_1 + 0x1a0) + 0x4f8) != 0) {
do {
FUN_140317ec0(*(longlong *)(param_1 + 0x1a0) + 0x500 + uVar3 * 0x18,
param_1 + 0x458 + uVar3 * 0x10,param_1 + 0x180);
FUN_140317fc0(*(longlong *)(param_1 + 0x1a0) + 0x578 + uVar3 * 0x18,
param_1 + 0x4a8 + uVar3 * 0x10,param_1 + 0x180);
uVar2 = (int)uVar3 + 1;
uVar3 = (ulonglong)uVar2;
} while (uVar2 < *(ushort *)(*(longlong *)(param_1 + 0x1a0) + 0x4f8));
}
if (*(short *)(*(longlong *)(param_1 + 0x1a0) + 0x5f0) != 0) {
do {
FUN_140317ec0(*(longlong *)(param_1 + 0x1a0) + 0x5f8 + uVar1 * 0x18,
param_1 + 0x4f8 + uVar1 * 0x10,param_1 + 0x180);
FUN_140317fc0(*(longlong *)(param_1 + 0x1a0) + 0x670 + uVar1 * 0x18,
param_1 + 0x548 + uVar1 * 0x10,param_1 + 0x180);
uVar2 = (int)uVar1 + 1;
uVar1 = (ulonglong)uVar2;
} while (uVar2 < *(ushort *)(*(longlong *)(param_1 + 0x1a0) + 0x5f0));
}
FUN_140317ec0(*(longlong *)(param_1 + 8) + 0x38,param_1 + 0x60,param_1 + 0x180);
FUN_1403180d0(*(longlong *)(param_1 + 0x1a0) + 0x188,param_1 + 0x2d0,param_1 + 0x180);
if ((*(byte *)(*(longlong *)(param_1 + 0x1a0) + 0xec8) & 2) != 0) {
FUN_1403181e0(*(longlong *)(param_1 + 0x1a0) + 0x278,param_1 + 0x370,param_1 + 0x180);
}
*(undefined *)(param_1 + 400) = 1;
}
return;
}



void FUN_14031aa90(longlong param_1)

{
if (*(char *)(param_1 + 0x191) == '\0') {
FUN_140318540(*(longlong *)(param_1 + 8) + 0x50,param_1 + 0x50,param_1 + 0x188);
FUN_140317ec0(*(longlong *)(param_1 + 0x1a0) + 200,param_1 + 0x220,param_1 + 0x188);
FUN_140317ec0(*(longlong *)(param_1 + 0x1a0) + 0xe0,param_1 + 0x230,param_1 + 0x188);
*(undefined *)(param_1 + 0x191) = 1;
}
return;
}



void FUN_14031ab20(longlong param_1)

{
short sVar1;
undefined4 *puVar2;
longlong lVar3;
undefined8 *puVar4;

if (*(char *)(param_1 + 0x427) != '\0') {
return;
}
FUN_14032d650();
sVar1 = *(short *)(*(longlong *)(param_1 + 0x1a0) + 8);
if (sVar1 == 1) {
puVar2 = (undefined4 *)FUN_14018b280(0x18);
if (puVar2 == (undefined4 *)0x0) {
puVar4 = (undefined8 *)0x0;
}
else {
puVar4 = (undefined8 *)(puVar2 + 2);
*puVar2 = 1;
*puVar4 = 0;
*(undefined8 *)(puVar2 + 4) = 0;
}
*(undefined8 **)(param_1 + 0x1a8) = puVar4;
*(undefined8 **)(param_1 + 0x1b0) = puVar4;
lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1a0) + 0x28);
}
else if (sVar1 == 3) {
puVar2 = (undefined4 *)FUN_14018b280(0x28);
if (puVar2 == (undefined4 *)0x0) {
puVar4 = (undefined8 *)0x0;
}
else {
puVar4 = (undefined8 *)(puVar2 + 2);
*puVar2 = 2;
*puVar4 = 0;
*(undefined8 *)(puVar2 + 4) = 0;
*(undefined8 *)(puVar2 + 6) = 0;
*(undefined8 *)(puVar2 + 8) = 0;
}
*(undefined8 **)(param_1 + 0x1a8) = puVar4;
*(undefined8 **)(param_1 + 0x1b0) = puVar4;
*(undefined8 **)(param_1 + 0x1b8) = puVar4 + 2;
FUN_140317ec0(*(undefined8 *)(*(longlong *)(param_1 + 0x1a0) + 0x38),puVar4,param_1 + 0x428);
puVar4 = *(undefined8 **)(param_1 + 0x1b8);
lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1a0) + 0x38) + 0x18;
}
else if (sVar1 == 4) {
puVar2 = (undefined4 *)FUN_14018b280(0x38);
if (puVar2 == (undefined4 *)0x0) {
puVar4 = (undefined8 *)0x0;
}
else {
puVar4 = (undefined8 *)(puVar2 + 2);
*puVar2 = 3;
*puVar4 = 0;
*(undefined8 *)(puVar2 + 4) = 0;
*(undefined8 *)(puVar2 + 6) = 0;
*(undefined8 *)(puVar2 + 8) = 0;
*(undefined8 *)(puVar2 + 10) = 0;
*(undefined8 *)(puVar2 + 0xc) = 0;
}
*(undefined8 **)(param_1 + 0x1a8) = puVar4;
*(undefined8 **)(param_1 + 0x1b8) = puVar4 + 2;
*(undefined8 **)(param_1 + 0x1b0) = puVar4;
*(undefined8 **)(param_1 + 0x1c0) = puVar4 + 4;
FUN_140317ec0(*(undefined8 *)(*(longlong *)(param_1 + 0x1a0) + 0x40),puVar4,param_1 + 0x428);
FUN_140317ec0(*(longlong *)(*(longlong *)(param_1 + 0x1a0) + 0x40) + 0x18,
*(undefined8 *)(param_1 + 0x1b8),param_1 + 0x428);
puVar4 = *(undefined8 **)(param_1 + 0x1c0);
lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1a0) + 0x40) + 0x30;
}
else if (sVar1 == 5) {
puVar2 = (undefined4 *)FUN_14018b280(0x48);
if (puVar2 == (undefined4 *)0x0) {
puVar4 = (undefined8 *)0x0;
}
else {
puVar4 = (undefined8 *)(puVar2 + 2);
*puVar2 = 4;
*puVar4 = 0;
*(undefined8 *)(puVar2 + 4) = 0;
*(undefined8 *)(puVar2 + 6) = 0;
*(undefined8 *)(puVar2 + 8) = 0;
*(undefined8 *)(puVar2 + 10) = 0;
*(undefined8 *)(puVar2 + 0xc) = 0;
*(undefined8 *)(puVar2 + 0xe) = 0;
*(undefined8 *)(puVar2 + 0x10) = 0;
}
*(undefined8 **)(param_1 + 0x1a8) = puVar4;
*(undefined8 **)(param_1 + 0x1b8) = puVar4 + 2;
*(undefined8 **)(param_1 + 0x1b0) = puVar4;
*(undefined8 **)(param_1 + 0x1c0) = puVar4 + 4;
*(undefined8 **)(param_1 + 0x1c8) = puVar4 + 6;
FUN_140317ec0(*(undefined8 *)(*(longlong *)(param_1 + 0x1a0) + 0x48),puVar4,param_1 + 0x428);
FUN_140317ec0(*(longlong *)(*(longlong *)(param_1 + 0x1a0) + 0x48) + 0x18,
*(undefined8 *)(param_1 + 0x1b8),param_1 + 0x428);
FUN_140317ec0(*(longlong *)(*(longlong *)(param_1 + 0x1a0) + 0x48) + 0x30,
*(undefined8 *)(param_1 + 0x1c0),param_1 + 0x428);
puVar4 = *(undefined8 **)(param_1 + 0x1c8);
lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1a0) + 0x48) + 0x48;
}
else {
if (sVar1 != 6) goto LAB_14031ae3f;
puVar2 = (undefined4 *)FUN_14018b280(0x28);
if (puVar2 == (undefined4 *)0x0) {
puVar4 = (undefined8 *)0x0;
}
else {
puVar4 = (undefined8 *)(puVar2 + 2);
*puVar2 = 2;
*puVar4 = 0;
*(undefined8 *)(puVar2 + 4) = 0;
*(undefined8 *)(puVar2 + 6) = 0;
*(undefined8 *)(puVar2 + 8) = 0;
}
*(undefined8 **)(param_1 + 0x1a8) = puVar4;
*(undefined8 **)(param_1 + 0x1b0) = puVar4;
*(undefined8 **)(param_1 + 0x1b8) = puVar4 + 2;
FUN_140317ec0(*(undefined8 *)(*(longlong *)(param_1 + 0x1a0) + 0x50),puVar4,param_1 + 0x428);
puVar4 = *(undefined8 **)(param_1 + 0x1b8);
lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1a0) + 0x50) + 0x18;
}
FUN_140317ec0(lVar3,puVar4,param_1 + 0x428);
LAB_14031ae3f:
lVar3 = param_1 + 0x428;
FUN_140318640(*(longlong *)(param_1 + 0x1a0) + 0x68,param_1 + 0x1e0,lVar3);
FUN_140318640(*(longlong *)(param_1 + 0x1a0) + 0x80,param_1 + 0x1f0,lVar3);
FUN_140318740(*(longlong *)(param_1 + 0x1a0) + 0x98,param_1 + 0x200,lVar3);
FUN_140318740(*(longlong *)(param_1 + 0x1a0) + 0xb0,param_1 + 0x210,lVar3);
FUN_140318740(*(longlong *)(param_1 + 0x1a0) + 0xf8,param_1 + 0x240,lVar3);
FUN_140318740(*(longlong *)(param_1 + 0x1a0) + 0x110,param_1 + 0x250,lVar3);
FUN_140318740(*(longlong *)(param_1 + 0x1a0) + 0x260,param_1 + 0x260,lVar3);
FUN_1403180d0(*(longlong *)(param_1 + 0x1a0) + 0x128,param_1 + 0x270,lVar3);
FUN_1403180d0(*(longlong *)(param_1 + 0x1a0) + 0x140,param_1 + 0x290,lVar3);
FUN_140317ec0(*(longlong *)(param_1 + 0x1a0) + 0x158,param_1 + 0x2b0,lVar3);
FUN_140317ec0(*(longlong *)(param_1 + 0x1a0) + 0x170,param_1 + 0x2c0,lVar3);
FUN_140317ec0(*(longlong *)(param_1 + 0x1a0) + 0x1a0,param_1 + 0x2f0,lVar3);
FUN_140317ec0(*(longlong *)(param_1 + 0x1a0) + 0x1b8,param_1 + 0x300,lVar3);
FUN_140317ec0(*(longlong *)(param_1 + 0x1a0) + 0x1d0,param_1 + 0x310,lVar3);
FUN_140317ec0(*(longlong *)(param_1 + 0x1a0) + 0x1e8,param_1 + 800,lVar3);
FUN_140317ec0(*(longlong *)(param_1 + 0x1a0) + 0x200,param_1 + 0x330,lVar3);
FUN_140317ec0(*(longlong *)(param_1 + 0x1a0) + 0x218,param_1 + 0x340,lVar3);
FUN_140317ec0(*(longlong *)(param_1 + 0x1a0) + 0x230,param_1 + 0x350,lVar3);
FUN_140317ec0(*(longlong *)(param_1 + 0x1a0) + 0x248,param_1 + 0x360,lVar3);
*(undefined *)(param_1 + 0x427) = 1;
return;
}



uint FUN_14031bc40(longlong param_1)

{
int iVar1;
uint *puVar2;
uint uVar3;
ulonglong uVar4;

uVar3 = 0;
uVar4 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x1a0) + 0x110);
if (uVar4 != 0) {
puVar2 = *(uint **)(*(longlong *)(param_1 + 0x1a0) + 0x120);
do {
if (uVar3 < *puVar2 || uVar3 == *puVar2) {
uVar3 = *puVar2;
}
puVar2 = puVar2 + 1;
uVar4 = uVar4 - 1;
} while (uVar4 != 0);
}
if (*(longlong **)(param_1 + 0x438) != (longlong *)0x0) {
iVar1 = (**(code **)(**(longlong **)(param_1 + 0x438) + 0x480))();
return iVar1 + uVar3;
}
return uVar3;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14031bca0(longlong *param_1,undefined (*param_2) [16],int param_3,longlong param_4,
        longlong param_5)

{
short sVar1;
ushort uVar2;
uint uVar3;
undefined4 uVar4;
longlong *plVar5;
longlong lVar6;
int *piVar7;
int iVar8;
float *pfVar9;
float *pfVar10;
longlong lVar11;
undefined8 uVar12;
char cVar13;
int iVar14;
longlong lVar15;
uint uVar16;
longlong lVar17;
uint uVar18;
float fVar19;
float extraout_XMM0_Da;
float extraout_XMM0_Da_00;
float extraout_XMM0_Da_01;
float extraout_XMM0_Da_02;
float extraout_XMM0_Da_03;
float extraout_XMM0_Da_04;
float extraout_XMM0_Da_05;
float extraout_XMM0_Da_06;
float extraout_XMM0_Da_07;
float extraout_XMM0_Da_08;
float extraout_XMM0_Da_09;
float extraout_XMM0_Da_10;
float extraout_XMM0_Da_11;
float extraout_XMM0_Da_12;
float extraout_XMM0_Da_13;
float extraout_XMM0_Da_14;
float extraout_XMM0_Da_15;
float extraout_XMM0_Da_16;
float fVar21;
undefined extraout_XMM0 [16];
undefined auVar20 [12];
float fVar22;
float fVar23;
undefined auVar24 [16];
float fVar25;
undefined in_XMM6 [16];
undefined auVar26 [16];
float fVar27;
float fVar28;
float fVar29;
float fVar30;
undefined auVar31 [16];
uint uVar32;
float fVar33;
float fVar34;
float fVar35;
undefined auStack1240 [32];
uint local_4b8;
undefined local_4a8 [8];
undefined8 uStack1184;
float local_498;
float local_494;
float local_490;
int local_48c;
longlong local_488;
undefined8 local_478;
float fStack1136;
float fStack1132;
float local_468;
float local_464;
float local_460;
undefined4 local_45c;
float local_458;
float local_454;
float local_450;
undefined4 local_44c;
float local_448;
uint local_444;
float local_440;
undefined4 local_43c;
undefined4 local_438;
undefined4 uStack1076;
undefined4 uStack1072;
undefined4 uStack1068;
float local_428;
float local_424;
float local_420;
undefined4 local_41c;
float local_418;
float local_414;
float local_410;
undefined4 local_40c;
float local_408;
uint local_404;
float local_400;
undefined4 local_3fc;
undefined4 local_3f8;
undefined4 uStack1012;
undefined4 uStack1008;
undefined4 uStack1004;
float local_3e8;
float local_3e4;
float local_3e0;
undefined4 local_3dc;
uint local_3d8;
float local_3d4;
float local_3d0;
undefined4 local_3cc;
uint local_3c4;
float local_3c0;
undefined4 local_3bc;
undefined4 local_3b8;
undefined4 uStack948;
undefined4 uStack944;
undefined4 uStack940;
undefined4 local_3a8;
undefined4 uStack932;
undefined4 uStack928;
undefined4 uStack924;
undefined4 local_398;
undefined4 uStack916;
undefined4 uStack912;
undefined4 uStack908;
undefined4 local_388;
undefined4 uStack900;
undefined4 uStack896;
undefined4 uStack892;
float local_378;
float fStack884;
undefined4 uStack880;
undefined4 uStack876;
undefined local_368 [16];
undefined local_358 [16];
undefined local_348 [16];
undefined local_338 [16];
undefined *local_328;
undefined *local_320;
float local_2d8;
float local_2d4;
float local_2d0;
undefined local_2c8 [16];
undefined local_2b8 [16];
undefined local_2a8 [16];
undefined4 local_298;
undefined4 uStack660;
undefined4 uStack656;
undefined4 uStack652;
float local_288;
float local_284;
float local_280;
undefined local_278 [16];
undefined local_268 [16];
undefined local_258 [16];
undefined4 local_248;
undefined4 uStack580;
undefined4 uStack576;
undefined4 uStack572;
float local_238;
float local_234;
float local_230;
undefined local_228 [16];
undefined local_218 [16];
undefined local_208 [16];
undefined4 local_1f8;
undefined4 uStack500;
undefined4 uStack496;
undefined4 uStack492;
undefined *local_1e8;
float *local_1e0;
undefined local_1d8 [64];
undefined *local_198;
float *local_190;
undefined local_188 [64];
undefined *local_148;
float *local_140;
undefined local_138 [64];
ulonglong local_f8;

local_f8 = DAT_140c0f7b0 ^ (ulonglong)auStack1240;
_local_4a8 = CONCAT88(local_4a8,param_1);
local_488 = param_5;
auVar31 = ZEXT416((uint)((float)param_3 * 0.001)) & (undefined  [16])0xffffffffffffffff;
fVar29 = (float)(*(int *)(param_2[5] + 0xc) - *(int *)(param_2[5] + 8));
local_490 = fVar29 * 0.001;
auVar26 = ZEXT416((uint)local_490) & (undefined  [16])0xffffffffffffffff;
fVar29 = fVar29 / (float)*(int *)(param_2[5] + 0xc);
if ((fVar29 < *(float *)(param_1 + 0x44)) ||
(*(float *)(param_1 + 0x46) <= fVar29 && fVar29 != *(float *)(param_1 + 0x46))) {
cVar13 = '\0';
}
else {
cVar13 = '\x01';
}
plVar5 = *(longlong **)param_2[5];
local_494 = fVar29;
local_48c = param_3;
local_478 = param_4;
if (plVar5 != (longlong *)0x0) {
if (param_2[6][0xc] == '\0') {
if (cVar13 != '\0') {
uVar12 = 1;
LAB_14031bdab:
(**(code **)(*plVar5 + 0x580))(plVar5,uVar12);
}
}
else if (cVar13 == '\0') {
uVar12 = 0;
goto LAB_14031bdab;
}
param_2[6][0xc] = cVar13;
}
local_4b8 = (uint)*(ushort *)(param_1[0x34] + 0x5f0);
FUN_140318840(*(ushort *)(param_1[0x34] + 0x5f0),param_1 + 0xa9);
pfVar9 = (float *)(**(code **)(*param_1 + 0x90))(param_1);
pfVar10 = (float *)(**(code **)(*param_1 + 0x68))();
auVar20 = SUB1612(in_XMM6 >> 0x20,0);
uVar32 = 0x7fffffff;
fVar28 = 1.0;
fVar19 = SUB164(auVar31,0);
fVar30 = 0.0;
param_2[1] = CONCAT412(*(float *)(param_2[1] + 0xc) + (pfVar9[3] + pfVar10[3]) * fVar19,
CONCAT48(*(float *)(param_2[1] + 8) + (pfVar9[2] + pfVar10[2]) * fVar19,
CONCAT44(*(float *)(param_2[1] + 4) +
(pfVar9[1] + pfVar10[1]) * fVar19,
*(float *)param_2[1] + (*pfVar9 + *pfVar10) * fVar19)));
fVar22 = SUB164(auVar26,0);
if (*(ushort *)(param_1[1] + 0x68) != 0) {
uVar18 = 0;
lVar11 = *(longlong *)(param_1[5] + 0x40);
uVar16 = 1;
auVar26 = auVar26 & (undefined  [16])0x0;
uVar3 = *(uint *)(lVar11 + 0x308);
if (uVar3 != 0) {
lVar17 = 0;
lVar15 = 0;
pfVar9 = (float *)(local_488 + 8);
auVar24 = _local_4a8;
fVar29 = local_498;
do {
if ((*(ushort *)(param_1[1] + 0x68) & uVar16) != 0) {
lVar6 = *(longlong *)(param_1[5] + 0x588);
sVar1 = *(short *)(*(longlong *)(lVar11 + 0x310) + 2 + lVar15);
fVar22 = *(float *)(lVar6 + 0x30 + lVar17);
in_XMM6 = ZEXT416((uint)fVar22);
fVar25 = *(float *)(lVar6 + 0x1c + lVar17);
fVar27 = fVar22 - fVar25;
if (sVar1 == 0) {
pfVar10 = (float *)((ulonglong)uVar18 * 0x10 + local_478);
fVar23 = *pfVar10 - *(float *)*param_2;
fVar21 = pfVar10[1] - *(float *)(*param_2 + 4);
fVar22 = SQRT(fVar23 * fVar23 + fVar21 * fVar21 + 0.0);
if (fVar27 == 0.0) {
if (fVar25 <= fVar22) {
fVar29 = 0.0;
}
else {
fVar29 = 1.0;
}
}
else {
fVar27 = (fVar22 - fVar25) / fVar27;
if (1.0 <= fVar27) {
fVar27 = 1.0;
}
fVar29 = 0.0;
if (0.0 <= fVar27) {
fVar29 = fVar27;
}
fVar29 = 1.0 - fVar29;
}
auVar24 = divps(CONCAT412(pfVar10[3] - *(float *)(*param_2 + 0xc),
                          CONCAT48(pfVar10[2] - *(float *)(*param_2 + 8),
                                   CONCAT44(fVar21,fVar23))),
                CONCAT412(fVar22,CONCAT48(fVar22,CONCAT44(fVar22,fVar22))));
}
else if (sVar1 == 1) {
pfVar10 = (float *)(local_488 + (ulonglong)uVar18 * 0x10);
fVar23 = *(float *)*param_2 * *pfVar10 + *(float *)(*param_2 + 4) * pfVar10[1] + 0.0 +
         *(float *)(local_488 + 0xc + (ulonglong)uVar18 * 0x10);
fVar29 = (float)((uint)fVar23 & 0x7fffffff);
if (fVar27 == 0.0) {
if (fVar25 <= fVar29) {
fVar29 = 0.0;
}
else {
fVar29 = 1.0;
}
}
else {
auVar24 = ZEXT416((uint)(fVar22 - fVar29)) & (undefined  [16])0xffffffffffffffff;
fVar27 = SUB164(auVar24,0) / fVar27;
in_XMM6 = CONCAT124(SUB1612(auVar24 >> 0x20,0),fVar27);
if (1.0 <= fVar27) {
fVar27 = 1.0;
}
fVar29 = 0.0;
if (0.0 <= fVar27) {
fVar29 = fVar27;
}
}
if (0.0 <= fVar23) {
auVar24 = ZEXT416((uint)(0.0 - pfVar9[-2])) & (undefined  [16])0xffffffffffffffff;
auVar24 = CONCAT412(SUB164(auVar24 >> 0x60,0) - 0.0,
                    CONCAT48(SUB164(auVar24 >> 0x40,0) - *pfVar9,
                             CONCAT44(0.0 - pfVar9[-1],SUB164(auVar24,0))));
}
else {
auVar24 = ZEXT1216(CONCAT48(*pfVar9,CONCAT44(pfVar9[-1],pfVar9[-2])));
}
}
fVar22 = *(float *)(lVar6 + 8 + lVar17);
auVar26 = CONCAT412(fVar22 * SUB164(auVar24 >> 0x60,0) * fVar29 * fVar19 +
                    SUB164(auVar26 >> 0x60,0),
                    CONCAT48(fVar22 * SUB164(auVar24 >> 0x40,0) * fVar29 * fVar19 +
                             SUB164(auVar26 >> 0x40,0),
                             CONCAT44(fVar22 * SUB164(auVar24 >> 0x20,0) * fVar29 * fVar19
                                      + SUB164(auVar26 >> 0x20,0),
                                      fVar22 * SUB164(auVar24,0) * fVar29 * fVar19 +
                                      SUB164(auVar26,0))));
}
auVar20 = SUB1612(in_XMM6 >> 0x20,0);
uVar16 = uVar16 << 1 | (uint)((int)uVar16 < 0);
uVar18 = uVar18 + 1;
lVar15 = lVar15 + 0x50;
pfVar9 = pfVar9 + 4;
lVar17 = lVar17 + 0x48;
} while (uVar18 < uVar3);
param_1 = local_4a8;
fVar29 = local_494;
}
fVar22 = *(float *)(param_2[1] + 4);
fVar25 = *(float *)(param_2[1] + 8);
fVar27 = *(float *)(param_2[1] + 0xc);
*(float *)param_2[1] = *(float *)param_2[1] + SUB164(auVar26,0);
*(float *)(param_2[1] + 4) = fVar22 + SUB164(auVar26 >> 0x20,0);
*(float *)(param_2[1] + 8) = fVar25 + SUB164(auVar26 >> 0x40,0);
*(float *)(param_2[1] + 0xc) = fVar27 + SUB164(auVar26 >> 0x60,0);
param_3 = local_48c;
fVar22 = local_490;
}
if ((0.0 < *(float *)(param_1[1] + 0x30)) &&
((iVar14 = *(int *)(param_1[1] + 8), iVar14 == 2 || (*(char *)param_1[0x34] == '\x02')))) {
lVar11 = param_1[5];
plVar5 = *(longlong **)(*(longlong *)(lVar11 + 0x10) + 0x1e8);
if (plVar5 != (longlong *)0x0) {
if (iVar14 == 2) {
fVar25 = *(float *)*param_2;
fVar27 = *(float *)(*param_2 + 4);
fVar23 = *(float *)(*param_2 + 8);
fVar21 = *(float *)(*param_2 + 0xc);
}
else {
fVar25 = *(float *)(lVar11 + 0x80) + *(float *)*param_2;
fVar27 = *(float *)(lVar11 + 0x84) + *(float *)(*param_2 + 4);
fVar23 = *(float *)(lVar11 + 0x88) + *(float *)(*param_2 + 8);
fVar21 = *(float *)(lVar11 + 0x8c) + *(float *)(*param_2 + 0xc);
}
local_4a8 = (longlong *)CONCAT44(fVar27,fVar25);
_local_4a8 = CONCAT48(fVar23,local_4a8);
_local_4a8 = CONCAT412(fVar21,_local_4a8);
fVar33 = fVar19;
fVar34 = fVar19;
fVar35 = fVar19;
(**(code **)(*plVar5 + 0x1c0))(plVar5,local_4a8,&local_478,3);
fVar25 = *(float *)(param_1[1] + 0x30);
fVar27 = *(float *)(param_2[1] + 4);
fVar23 = *(float *)(param_2[1] + 8);
fVar21 = *(float *)(param_2[1] + 0xc);
*(float *)param_2[1] = *(float *)param_2[1] + fVar25 * (float)local_478 * fVar19;
*(float *)(param_2[1] + 4) = fVar27 + fVar25 * local_478._4_4_ * fVar33;
*(float *)(param_2[1] + 8) = fVar23 + fVar25 * fStack1136 * fVar34;
*(float *)(param_2[1] + 0xc) = fVar21 + fVar25 * fStack1132 * fVar35;
}
}
_local_4a8 = *param_2;
fVar19 = local_498 * SUB164(auVar31,0);
*param_2 = CONCAT412(fVar19 * *(float *)(param_2[1] + 0xc) + *(float *)(*param_2 + 0xc),
                     CONCAT48(fVar19 * *(float *)(param_2[1] + 8) + *(float *)(*param_2 + 8),
                              CONCAT44(fVar19 * *(float *)(param_2[1] + 4) +
                                       *(float *)(*param_2 + 4),
                                       fVar19 * *(float *)param_2[1] + *(float *)*param_2)));
if ((*(int *)(param_1[1] + 0x6c) != 0) &&
((**(code **)(*(longlong *)param_1[5] + 0x58))(), fVar30 < extraout_XMM0_Da)) {
lVar11 = param_1[1];
auVar20 = SUB1612(auVar31 >> 0x20,0);
fVar25 = SUB164(auVar31,0) * *(float *)(lVar11 + 0x70);
fVar27 = fVar28 - ((*(float *)(lVar11 + 0x78) - *(float *)(lVar11 + 0x74)) * fVar29 +
                   *(float *)(lVar11 + 0x74));
(**(code **)(*(longlong *)param_1[5] + 0x58))();
fVar19 = fVar30;
if (fVar30 <= fVar28 - (fVar25 / extraout_XMM0_Da_00) * fVar27) {
fVar19 = SUB164(auVar31,0) * *(float *)(param_1[1] + 0x70);
(**(code **)(*(longlong *)param_1[5] + 0x58))();
fVar19 = fVar28 - (fVar19 / extraout_XMM0_Da_01) * fVar27;
}
lVar11 = param_1[5];
fVar25 = *(float *)(lVar11 + 0xb4);
fVar27 = *(float *)(lVar11 + 0xb8);
fVar23 = *(float *)(lVar11 + 0xbc);
fVar21 = *(float *)(*param_2 + 4);
fVar33 = *(float *)(*param_2 + 8);
fVar34 = *(float *)(*param_2 + 0xc);
*(float *)*param_2 = *(float *)*param_2 + *(float *)(lVar11 + 0xb0) * fVar19;
*(float *)(*param_2 + 4) = fVar21 + fVar25 * fVar19;
*(float *)(*param_2 + 8) = fVar33 + fVar27 * fVar19;
*(float *)(*param_2 + 0xc) = fVar34 + fVar23 * fVar19;
}
lVar11 = param_1[1];
if (*(int *)(lVar11 + 0x7c) != 0) {
fVar19 = *(float *)(param_1 + 0x24);
fVar25 = *(float *)((longlong)param_1 + 0x124);
fVar27 = *(float *)(param_1 + 0x25);
fVar23 = *(float *)((longlong)param_1 + 300);
if (fVar30 < fVar19 * fVar19 + fVar25 * fVar25 + 0.0) {
fVar29 = (*(float *)(lVar11 + 0x84) - *(float *)(lVar11 + 0x80)) * fVar29 +
         *(float *)(lVar11 + 0x80);
if (fVar29 < fVar30) {
fVar29 = fVar30;
}
if (*(int *)(lVar11 + 8) == 2) {
fVar19 = fVar19 - *(float *)(param_1 + 0x18);
fVar25 = fVar25 - *(float *)((longlong)param_1 + 0xc4);
fVar27 = fVar27 - *(float *)(param_1 + 0x19);
fVar23 = fVar23 - *(float *)((longlong)param_1 + 0xcc);
}
fVar21 = *(float *)(*param_2 + 4);
fVar33 = *(float *)(*param_2 + 8);
fVar34 = *(float *)(*param_2 + 0xc);
*(float *)*param_2 = *(float *)*param_2 + fVar19 * fVar29;
*(float *)(*param_2 + 4) = fVar21 + fVar25 * fVar29;
*(float *)(*param_2 + 8) = fVar33 + fVar27 * fVar29;
*(float *)(*param_2 + 0xc) = fVar34 + fVar23 * fVar29;
}
}
lVar11 = param_1[0x34];
uVar3 = *(uint *)(lVar11 + 0x850);
if (uVar3 != 0) {
iVar14 = 0;
if ((uVar3 & 1) != 0) {
if ((*(float *)*param_2 * local_4a8._0_4_ <= fVar30) ||
(fVar29 = (float)((uint)(*(float *)*param_2 - *(float *)(param_1 + 0x78)) & uVar32),
        iVar14 = 0, fVar29 < *(float *)(lVar11 + 0x854) || fVar29 == *(float *)(lVar11 + 0x854))) {
iVar14 = 1;
}
}
if ((uVar3 & 2) != 0) {
if ((*(float *)(*param_2 + 4) * local_4a8._4_4_ <= fVar30) ||
(fVar29 = (float)((uint)(*(float *)(*param_2 + 4) - *(float *)((longlong)param_1 + 0x3c4))
& uVar32),
fVar29 < *(float *)(lVar11 + 0x854) || fVar29 == *(float *)(lVar11 + 0x854))) {
iVar14 = iVar14 + 1;
}
}
if ((uVar3 & 4) != 0) {
if ((*(float *)(*param_2 + 8) * (float)uStack1184 <= fVar30) ||
(fVar29 = (float)((uint)(*(float *)(*param_2 + 8) - *(float *)(param_1 + 0x79)) & uVar32),
        fVar29 < *(float *)(lVar11 + 0x854) || fVar29 == *(float *)(lVar11 + 0x854))) {
iVar14 = iVar14 + 1;
}
}
iVar8 = (**(code **)(*param_1 + 0x80))(param_1);
if (iVar14 == iVar8) {
*(undefined4 *)(param_2[5] + 8) = 0;
goto LAB_14031cc8e;
}
}
if (*(longlong *)param_2[5] != 0) {
uVar2 = *(ushort *)(param_2[6] + 0xe);
if (param_1[0xb3] == 0) {
FUN_14031a280(param_1);
}
lVar11 = param_1[0x34];
fVar29 = fVar22 * 0.5;
local_4b8 = (uint)*(ushort *)(lVar11 + 0x4f8);
pfVar9 = (float *)((ulonglong)(uVar2 & 0x1f) * 0x30 + param_1[0xb3]);
_local_4a8 = CONCAT412(pfVar9[3] + (pfVar9[7] + pfVar9[0xb] * fVar29) * fVar22,
                       CONCAT48(pfVar9[2] + (pfVar9[6] + pfVar9[10] * fVar29) * fVar22,
                                CONCAT44(pfVar9[1] + (pfVar9[5] + pfVar9[9] * fVar29) * fVar22,
                                         *pfVar9 + (pfVar9[4] + pfVar9[8] * fVar29) * fVar22)));
FUN_140318840(pfVar9,param_1 + 0x95,param_1 + 0x8b,&local_498);
local_498 = local_498 * *(float *)param_2[6];
local_368 = CONCAT412(fVar30,*(undefined (*) [12])param_2[2]);
local_358 = CONCAT412(fVar30,*(undefined (*) [12])param_2[3]) &
            (undefined  [16])0xffffffffffffffff;
local_348 = CONCAT412(fVar30,*(undefined (*) [12])param_2[4]) &
            (undefined  [16])0xffffffffffffffff;
local_338 = CONCAT412(fVar28,ZEXT812(0)) & (undefined  [16])0xffffffffffffffff;
sVar1 = *(short *)(lVar11 + 0x804);
if (sVar1 == 0) {
FUN_1408fe3d0();
local_448 = extraout_XMM0_Da_13;
FUN_1408fc950();
auVar20 = SUB1612(ZEXT816(0) >> 0x20,0);
local_440 = extraout_XMM0_Da_14;
FUN_1408fe3d0();
fVar29 = extraout_XMM0_Da_15;
FUN_1408fc950();
local_198 = local_228;
local_190 = &local_468;
local_45c = 0;
local_44c = 0;
local_43c = 0;
local_468 = local_448 * local_448 * fVar29 + extraout_XMM0_Da_16 * local_440;
local_464 = fVar29 * local_440;
local_460 = local_440 * local_448 * fVar29 - extraout_XMM0_Da_16 * local_448;
local_458 = local_448 * local_448 * extraout_XMM0_Da_16 - fVar29 * local_440;
local_450 = local_440 * local_448 * extraout_XMM0_Da_16 + fVar29 * local_448;
local_454 = extraout_XMM0_Da_16 * local_440;
local_444 = (uint)local_448 ^ 0x80000000;
local_448 = local_448 * local_440;
local_440 = local_440 * local_440;
local_438 = _DAT_140c78440;
uStack1076 = uRam0000000140c78444;
uStack1072 = uRam0000000140c78448;
uStack1068 = uRam0000000140c7844c;
local_1f8 = _DAT_140c78440;
uStack500 = uRam0000000140c78444;
uStack496 = uRam0000000140c78448;
uStack492 = uRam0000000140c7844c;
local_228 = CONCAT412(fRam0000000140c7841c * local_498,
                      CONCAT48(fRam0000000140c78418 * local_498,
                               CONCAT44(fRam0000000140c78414 * local_498,
                                        _DAT_140c78410 * local_498)));
local_218 = CONCAT412(fRam0000000140c7842c * local_498,
                      CONCAT48(fRam0000000140c78428 * local_498,
                               CONCAT44(fRam0000000140c78424 * local_498,
                                        _DAT_140c78420 * local_498)));
local_208 = CONCAT412(fRam0000000140c7843c * local_498,
                      CONCAT48(fRam0000000140c78438 * local_498,
                               CONCAT44(fRam0000000140c78434 * local_498,
                                        _DAT_140c78430 * local_498)));
local_238 = local_498;
local_234 = local_498;
local_230 = local_498;
local_4a8 = (longlong *)local_198;
uStack1184 = local_190;
FUN_1401afb10(&local_198,local_188);
local_328 = local_188;
LAB_14031ca37:
local_320 = local_368;
_local_4a8 = CONCAT88(local_320,local_328);
FUN_1401afb10(&local_328,&local_3a8);
}
else {
if (sVar1 == 1) {
FUN_1408fe3d0();
fVar22 = extraout_XMM0_Da_07;
FUN_1408fc950();
fVar28 = extraout_XMM0_Da_08;
FUN_1408fe3d0();
local_408 = extraout_XMM0_Da_09;
FUN_1408fc950();
auVar20 = SUB1612(ZEXT816(0) >> 0x20,0);
local_400 = extraout_XMM0_Da_10;
FUN_1408fe3d0();
fVar29 = extraout_XMM0_Da_11;
FUN_1408fc950();
local_41c = 0;
local_40c = 0;
local_3fc = 0;
local_404 = (uint)fVar22 ^ 0x80000000;
local_428 = local_408 * fVar22 * fVar29 + extraout_XMM0_Da_12 * local_400;
local_424 = fVar29 * fVar28;
local_420 = local_400 * fVar22 * fVar29 - extraout_XMM0_Da_12 * local_408;
local_418 = local_408 * fVar22 * extraout_XMM0_Da_12 - fVar29 * local_400;
local_410 = local_400 * fVar22 * extraout_XMM0_Da_12 + fVar29 * local_408;
local_414 = extraout_XMM0_Da_12 * fVar28;
local_408 = local_408 * fVar28;
local_3f8 = _DAT_140c78440;
uStack1012 = uRam0000000140c78444;
uStack1008 = uRam0000000140c78448;
uStack1004 = uRam0000000140c7844c;
local_298 = _DAT_140c78440;
uStack660 = uRam0000000140c78444;
uStack656 = uRam0000000140c78448;
uStack652 = uRam0000000140c7844c;
local_400 = local_400 * fVar28;
local_2c8 = CONCAT412(fRam0000000140c7841c * local_498,
                      CONCAT48(fRam0000000140c78418 * local_498,
                               CONCAT44(fRam0000000140c78414 * local_498,
                                        _DAT_140c78410 * local_498)));
local_2b8 = CONCAT412(fRam0000000140c7842c * local_498,
                      CONCAT48(fRam0000000140c78428 * local_498,
                               CONCAT44(fRam0000000140c78424 * local_498,
                                        _DAT_140c78420 * local_498)));
local_2a8 = CONCAT412(fRam0000000140c7843c * local_498,
                      CONCAT48(fRam0000000140c78438 * local_498,
                               CONCAT44(fRam0000000140c78434 * local_498,
                                        _DAT_140c78430 * local_498)));
local_1e8 = local_2c8;
local_1e0 = &local_428;
local_2d8 = local_498;
local_2d4 = local_498;
local_2d0 = local_498;
local_4a8 = (longlong *)local_1e8;
uStack1184 = local_1e0;
FUN_1401afb10(&local_1e8,local_1d8);
local_328 = local_1d8;
goto LAB_14031ca37;
}
if (sVar1 == 2) {
FUN_1408fe3d0();
fVar19 = extraout_XMM0_Da_02;
FUN_1408fc950();
local_3c0 = extraout_XMM0_Da_03;
FUN_1408fe3d0();
fVar22 = extraout_XMM0_Da_04;
FUN_1408fc950();
fVar28 = extraout_XMM0_Da_05;
FUN_1408fe3d0();
fVar29 = extraout_XMM0_Da_06;
FUN_1408fc950();
local_3dc = 0;
local_3cc = 0;
local_3bc = 0;
fVar25 = SUB164(extraout_XMM0,0);
local_3e8 = fVar25 * fVar28;
auVar20 = SUB1612(extraout_XMM0 >> 0x20,0);
local_3e0 = fVar29 * fVar19 - fVar22 * local_3c0 * fVar25;
local_3b8 = _DAT_140c78440;
uStack948 = uRam0000000140c78444;
uStack944 = uRam0000000140c78448;
uStack940 = uRam0000000140c7844c;
local_3e4 = fVar22 * fVar19 * fVar25 + fVar29 * local_3c0;
local_3d8 = (uint)(fVar29 * fVar28) ^ 0x80000000;
local_3d4 = fVar25 * local_3c0 - fVar22 * fVar19 * fVar29;
local_3d0 = fVar22 * local_3c0 * fVar29 + fVar25 * fVar19;
local_3c0 = fVar28 * local_3c0;
local_3c4 = (uint)(fVar28 * fVar19) ^ 0x80000000;
local_278 = CONCAT412(fRam0000000140c7841c * local_498,
                      CONCAT48(fRam0000000140c78418 * local_498,
                               CONCAT44(fRam0000000140c78414 * local_498,
                                        _DAT_140c78410 * local_498)));
local_268 = CONCAT412(fRam0000000140c7842c * local_498,
                      CONCAT48(fRam0000000140c78428 * local_498,
                               CONCAT44(fRam0000000140c78424 * local_498,
                                        _DAT_140c78420 * local_498)));
local_148 = local_278;
local_140 = &local_3e8;
local_248 = _DAT_140c78440;
uStack580 = uRam0000000140c78444;
uStack576 = uRam0000000140c78448;
uStack572 = uRam0000000140c7844c;
local_258 = CONCAT412(fRam0000000140c7843c * local_498,
                      CONCAT48(fRam0000000140c78438 * local_498,
                               CONCAT44(fRam0000000140c78434 * local_498,
                                        _DAT_140c78430 * local_498)));
local_288 = local_498;
local_284 = local_498;
local_280 = local_498;
local_4a8 = (longlong *)local_148;
uStack1184 = local_140;
FUN_1401afb10(&local_148,local_138);
local_328 = local_138;
goto LAB_14031ca37;
}
local_3a8 = _DAT_140c78390;
uStack932 = uRam0000000140c78394;
uStack928 = uRam0000000140c78398;
uStack924 = uRam0000000140c7839c;
local_398 = _DAT_140c783a0;
uStack916 = uRam0000000140c783a4;
uStack912 = uRam0000000140c783a8;
uStack908 = uRam0000000140c783ac;
local_388 = _DAT_140c783b0;
uStack900 = uRam0000000140c783b4;
uStack896 = uRam0000000140c783b8;
uStack892 = uRam0000000140c783bc;
uStack876 = uRam0000000140c783cc;
}
local_378 = *(float *)*param_2;
fStack884 = *(float *)(*param_2 + 4);
uStack880 = *(undefined4 *)(*param_2 + 8);
(**(code **)(**(longlong **)param_2[5] + 0x48))(*(longlong **)param_2[5],&local_3a8);
plVar5 = *(longlong **)param_2[5];
_local_4a8 = CONCAT48(*(float *)(param_1[5] + 0x430) * *(float *)((longlong)plVar5 + 0x94),
*(undefined8 *)(param_1[5] + 0x428));
(**(code **)(*plVar5 + 0xf0))(plVar5,local_4a8);
piVar7 = DAT_140c63750;
iVar14 = *(int *)((ushort *)param_1[1] + 4);
if (iVar14 == 0) {
local_4a8 = (longlong *)
        ((ulonglong)*(ushort *)param_1[1] * 0x40 + *(longlong *)(param_1[5] + 0x338));
}
else if (iVar14 == 1) {
local_4a8 = (longlong *)(param_1[5] + 0x4f0);
}
else if (iVar14 == 2) {
local_4a8 = (longlong *)(*(longlong *)(param_1[5] + 0x10) + 0xf0);
}
else {
}
*(undefined4 *)(param_2[6] + 8) = 0x3f800000;
iVar14 = DAT_140c42500;
if (*piVar7 < DAT_140c42500) {
iVar14 = *piVar7;
}
if (((&DAT_140c42510)[iVar14] != '\0') &&
(fVar30 != *(float *)(*(longlong *)(param_1[5] + 0x10) + 0x5bc))) {
fVar29 = fStack884 * *(float *)((longlong)local_4a8 + 0x10) + local_378 * *(float *)local_4a8
+ *(float *)((longlong)local_4a8 + 0x20) * 0.0 +
*(float *)((longlong)local_4a8 + 0x30);
fVar22 = fStack884 * *(float *)((longlong)local_4a8 + 0x14) +
local_378 * *(float *)((longlong)local_4a8 + 4) +
*(float *)((longlong)local_4a8 + 0x24) * 0.0 + *(float *)((longlong)local_4a8 + 0x34)
;
fVar28 = fStack884 * *(float *)((longlong)local_4a8 + 0x18) +
local_378 * *(float *)((longlong)local_4a8 + 8) +
*(float *)((longlong)local_4a8 + 0x28) * 0.0 + *(float *)((longlong)local_4a8 + 0x38)
;
fVar19 = fStack884 * *(float *)((longlong)local_4a8 + 0x1c) +
local_378 * *(float *)((longlong)local_4a8 + 0xc) +
*(float *)((longlong)local_4a8 + 0x2c) * 0.0 + *(float *)((longlong)local_4a8 + 0x3c)
;
fVar22 = fVar22 * fVar22;
fVar29 = fVar29 * fVar29 + fVar22 + 0.0;
if (_DAT_140c42068 < fVar29) {
auVar26 = rsqrtss(CONCAT124(auVar20,fVar29),
                  CONCAT412(fVar19 * fVar19,
                            CONCAT48(fVar28 * fVar28,CONCAT44(fVar22,fVar29))));
fVar22 = SUB164(auVar26,0);
lVar11 = (**(code **)(**(longlong **)param_2[5] + 0x488))();
fVar29 = *(float *)(lVar11 + 0x30) * *(float *)((longlong)param_1 + 0x394) * 2.0 *
*(float *)(*(longlong *)(param_1[5] + 0x10) + 0x5a4) *
(fVar29 * fVar22 * fVar22 - 3.0) * fVar22 * -0.5;
if (0.0375 < fVar29) {
if (fVar29 <= 0.05) {
*(float *)(param_2[6] + 8) = fVar29 * 80.0 - 3.0;
}
}
else {
*(undefined4 *)(param_2[6] + 8) = 0;
}
}
}
(**(code **)(**(longlong **)param_2[5] + 0x70))();
if (fVar30 != *(float *)(param_2[6] + 8)) {
uVar4 = *(undefined4 *)(*(longlong *)(param_1[5] + 0x10) + 0xec);
if ((*(byte *)(*(longlong *)param_2[5] + 0x30) & 1) != 0) {
FUN_140300fd0(*(longlong *)param_2[5],local_4a8,param_1[0x83],uVar4);
}
FUN_140305c20(*(undefined8 *)param_2[5],uVar4);
}
}
*(int *)(param_2[5] + 8) = *(int *)(param_2[5] + 8) - param_3;
LAB_14031cc8e:
FUN_1407db4f0(local_f8 ^ (ulonglong)auStack1240);
return;
}



void FUN_14031cd00(longlong *param_1,ulonglong param_2)

{
longlong lVar1;
undefined4 uVar2;
undefined4 uVar3;
undefined4 uVar4;
longlong lVar5;
undefined4 *puVar6;
undefined4 *puVar7;
ulonglong uVar8;

if ((ulonglong)param_1[1] < param_2 || param_1[1] == param_2) {
lVar5 = FUN_14018db00(*param_1);
if (*param_1 != lVar5) {
uVar8 = 0;
if (param_1[1] != 0) {
puVar7 = (undefined4 *)(lVar5 + 0x20);
do {
if (puVar7 + -8 != (undefined4 *)0x0) {
puVar6 = (undefined4 *)((longlong)puVar7 + *param_1 + (-0x20 - lVar5));
uVar2 = puVar6[1];
uVar3 = puVar6[2];
uVar4 = puVar6[3];
puVar7[-8] = *puVar6;
puVar7[-7] = uVar2;
puVar7[-6] = uVar3;
puVar7[-5] = uVar4;
uVar2 = puVar6[5];
uVar3 = puVar6[6];
uVar4 = puVar6[7];
puVar7[-4] = puVar6[4];
puVar7[-3] = uVar2;
puVar7[-2] = uVar3;
puVar7[-1] = uVar4;
uVar2 = puVar6[9];
uVar3 = puVar6[10];
uVar4 = puVar6[0xb];
*puVar7 = puVar6[8];
puVar7[1] = uVar2;
puVar7[2] = uVar3;
puVar7[3] = uVar4;
uVar2 = puVar6[0xd];
uVar3 = puVar6[0xe];
uVar4 = puVar6[0xf];
puVar7[4] = puVar6[0xc];
puVar7[5] = uVar2;
puVar7[6] = uVar3;
puVar7[7] = uVar4;
uVar2 = puVar6[0x11];
uVar3 = puVar6[0x12];
uVar4 = puVar6[0x13];
puVar7[8] = puVar6[0x10];
puVar7[9] = uVar2;
puVar7[10] = uVar3;
puVar7[0xb] = uVar4;
*(undefined8 *)(puVar7 + 0xc) = *(undefined8 *)(puVar6 + 0x14);
puVar7[0xe] = puVar6[0x16];
puVar7[0xf] = puVar6[0x17];
puVar7[0x10] = puVar6[0x18];
puVar7[0x11] = puVar6[0x19];
puVar7[0x12] = puVar6[0x1a];
*(undefined *)(puVar7 + 0x13) = *(undefined *)(puVar6 + 0x1b);
*(undefined2 *)((longlong)puVar7 + 0x4e) = *(undefined2 *)((longlong)puVar6 + 0x6e);
}
uVar8 = uVar8 + 1;
puVar7 = puVar7 + 0x1c;
} while (uVar8 < (ulonglong)param_1[1]);
}
lVar1 = *param_1;
if (lVar1 != 0) {
(**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
}
*param_1 = lVar5;
}
param_1[1] = param_2;
return;
}
param_1[1] = param_2;
return;
}



undefined8 * FUN_14031ce90(undefined8 *param_1)

{
    FUN_14032f450();
    *param_1 = &PTR_LAB_140b643c0;
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    FUN_1407e4830(param_1 + 0x38,0,0x140);
    FUN_1407e4830(param_1 + 0x60,0,0x50);
    FUN_1407e4830(param_1 + 0x6a,0,0x50);
    FUN_1407e4830(param_1 + 0x74,0,0x50);
    FUN_1407e4830(param_1 + 0x7e,0,0x50);
    FUN_1407e4830(param_1 + 0x88,0,0x50);
    param_1[0x92] = 0;
    param_1[0x93] = 0;
    param_1[0x94] = 0;
    param_1[0x95] = 0;
    param_1[0x96] = 0;
    param_1[0x97] = 0;
    param_1[0x98] = 0;
    param_1[0x99] = 0;
    param_1[0x9a] = 0;
    param_1[0x9b] = 0;
    *(undefined4 *)(param_1 + 0x9c) = 1;
    param_1[0xa3] = 0;
    param_1[0xa4] = 0;
    param_1[0xa5] = 0;
    *(undefined4 *)(param_1 + 0xa6) = 0;
    *(undefined4 *)((longlong)param_1 + 0x544) = 0;
    *(undefined4 *)((longlong)param_1 + 0x54c) = 0;
    *(undefined4 *)((longlong)param_1 + 0x53c) = *(undefined4 *)(param_1 + 0xa7);
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0xa7);
    *(undefined4 *)((longlong)param_1 + 0x55c) = 0;
    param_1[0xad] = 0;
    param_1[0xac] = 0;
    param_1[0xae] = 0;
    param_1[0xaf] = 0;
    param_1[0xb1] = 0;
    param_1[0xb2] = 0;
    param_1[0xb8] = 0;
    *(undefined4 *)(param_1 + 0xb9) = 0;
    param_1[0xbb] = 0;
    param_1[0xba] = 0;
    param_1[0xbd] = 0;
    param_1[0xbc] = 0;
    param_1[0xc5] = 0;
    param_1[0xc4] = 0;
    param_1[199] = 0;
    param_1[0xc6] = 0;
    param_1[0xc9] = 0;
    param_1[200] = 0;
    param_1[0xcb] = 0;
    param_1[0xca] = 0;
    param_1[0xcd] = 0;
    param_1[0xcc] = 0;
    param_1[0xd4] = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0xa7) = 0;
    return param_1;
}



undefined8 FUN_14031d080(undefined8 param_1,ulonglong param_2)

{
FUN_14031d0c0();
if ((param_2 & 1) != 0) {
FUN_14018b900(param_1,0);
}
return param_1;
}
