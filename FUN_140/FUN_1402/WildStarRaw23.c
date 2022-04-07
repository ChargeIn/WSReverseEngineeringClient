//
// Created by flop on 04.04.22.
//
#include "../../include.h"

undefined8 FUN_1402786a0(longlong *param_1) {
    longlong *plVar1;
    longlong lVar2;
    longlong **pplVar3;
    undefined8 local_res8;
    longlong local_res10;
    longlong local_res18[2];

    local_res8 = 0x141de2b70;
    FUN_1401a3130(0xe, 2, &local_res8);
    lVar2 = FUN_14018b280(0xb8, 0);
    if (lVar2 != 0) {
        FUN_1402accf0(lVar2, param_1);
    }
    lVar2 = FUN_14018b280(0x38);
    if (lVar2 != 0) {
        FUN_1402adbf0(lVar2, param_1);
    }
    local_res10 = param_1[0x424];
    *(undefined4 * )(param_1 + 0x402) = 0xffffffff;
    (**(code * *)(*(longlong *) param_1[0x31a] + 0x38))((longlong *) param_1[0x31a], 0xd, 1, &local_res10);
    pplVar3 = (longlong * *)(param_1 + 0x3df);
    lVar2 = 4;
    do {
        plVar1 = (longlong *) param_1[0x3da];
        if (pplVar3[-0x19] != plVar1) {
            if (plVar1 != (longlong *) 0x0) {
                (**(code * *) * plVar1)();
            }
            if (pplVar3[-0x19] != (longlong *) 0x0) {
                (**(code * *)(*pplVar3[-0x19] + 8))();
            }
            pplVar3[-0x19] = (longlong *) param_1[0x3da];
        }
        plVar1 = (longlong *) param_1[0x3f3];
        if (*pplVar3 != plVar1) {
            if (plVar1 != (longlong *) 0x0) {
                (**(code * *) * plVar1)();
            }
            if (*pplVar3 != (longlong *) 0x0) {
                (**(code * *)(**pplVar3 + 8))();
            }
            *pplVar3 = (longlong *) param_1[0x3f3];
        }
        pplVar3 = pplVar3 + 1;
        lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    local_res18[0] = param_1[0x426];
    (**(code * *)(*(longlong *) param_1[0x31a] + 0x80))((longlong *) param_1[0x31a], 0xd, 1, local_res18);
    pplVar3 = (longlong * *)(param_1 + 0x3e3);
    lVar2 = 0x10;
    do {
        plVar1 = (longlong *) param_1[0x3da];
        if (pplVar3[-0x19] != plVar1) {
            if (plVar1 != (longlong *) 0x0) {
                (**(code * *) * plVar1)();
            }
            if (pplVar3[-0x19] != (longlong *) 0x0) {
                (**(code * *)(*pplVar3[-0x19] + 8))();
            }
            pplVar3[-0x19] = (longlong *) param_1[0x3da];
        }
        plVar1 = (longlong *) param_1[0x3f3];
        if (*pplVar3 != plVar1) {
            if (plVar1 != (longlong *) 0x0) {
                (**(code * *) * plVar1)();
            }
            if (*pplVar3 != (longlong *) 0x0) {
                (**(code * *)(**pplVar3 + 8))();
            }
            *pplVar3 = (longlong *) param_1[0x3f3];
        }
        pplVar3 = pplVar3 + 1;
        lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    param_1[0x3db] = DAT_140c79898;
    param_1[0x3dc] = DAT_140c79898;
    param_1[0x3dd] = 0x400000000;
    param_1[0x3de] = 0x1000000000;
    local_res8 = 0x1000000000;
    param_1[0x3f4] = 0x400000000;
    param_1[0x3f5] = 0x1000000000;
    (**(code * *)(*param_1 + 0x120))(param_1);
    *(undefined4 * )(param_1 + 0x437) = 5;
    return 0;
}


undefined8 FUN_140278900(longlong param_1) {
    longlong *plVar1;
    longlong lVar2;
    undefined8 local_res8;

    (**(code * *)(**(longlong * *)(param_1 + 0x18d0) + 0x370))();
    lVar2 = *(longlong * )(param_1 + 0x2190);
    *(undefined4 * )(param_1 + 0x1c08) = 0x3ff;
    while (lVar2 != 0) {
        lVar2 = *(longlong * )(param_1 + 0x2190);
        if (lVar2 != 0) {
            FUN_1402acfc0(lVar2);
            FUN_14018b900(lVar2, 0);
        }
        lVar2 = *(longlong * )(param_1 + 0x2190);
    }
    lVar2 = *(longlong * )(param_1 + 0x2198);
    while (lVar2 != 0) {
        plVar1 = *(longlong * *)(param_1 + 0x2198);
        if (plVar1 != (longlong *) 0x0) {
            *(uint * )(*plVar1 + 0x1c08) = *(uint * )(*plVar1 + 0x1c08) | 8;
            if ((longlong *) plVar1[5] != (longlong *) 0x0) {
                *(longlong *) plVar1[5] = plVar1[6];
            }
            if (plVar1[6] != 0) {
                *(longlong * )(plVar1[6] + 0x28) = plVar1[5];
            }
            plVar1[5] = 0;
            plVar1[6] = 0;
            if ((longlong *) plVar1[4] != (longlong *) 0x0) {
                (**(code * *)(*(longlong *) plVar1[4] + 0x10))();
            }
            FUN_14018b900(plVar1, 0);
        }
        lVar2 = *(longlong * )(param_1 + 0x2198);
    }
    local_res8 = 0x141de2b60;
    FUN_1401a3130(0xe, 2, &local_res8);
    return 0;
}


longlong *FUN_140278a10(longlong *param_1) {
    *(uint * )(*param_1 + 0x1c08) = *(uint * )(*param_1 + 0x1c08) | 8;
    if ((longlong *) param_1[5] != (longlong *) 0x0) {
        *(longlong *) param_1[5] = param_1[6];
    }
    if (param_1[6] != 0) {
        *(longlong * )(param_1[6] + 0x28) = param_1[5];
    }
    param_1[5] = 0;
    param_1[6] = 0;
    if ((longlong *) param_1[4] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[4] + 0x10))();
    }
    FUN_14018b900(param_1, 0);
    return param_1;
}


undefined8 FUN_140278a70(longlong param_1) {
    uint *puVar1;
    uint **ppuVar2;
    undefined8 uVar3;
    longlong *plVar4;
    longlong lVar5;
    uint **ppuVar6;
    longlong lVar7;
    longlong lVar8;

    FUN_14018b900(*(undefined8 * )(param_1 + 0x90), 0);
    *(undefined8 * )(param_1 + 0x90) = 0;
    if (*(longlong * *)(param_1 + 0x2188) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x2188) + 8))();
        *(undefined8 * )(param_1 + 0x2188) = 0;
    }
    lVar8 = 0xd;
    ppuVar6 = (uint * *)(param_1 + 0x2030);
    lVar7 = 0xd;
    do {
        puVar1 = *ppuVar6;
        if (puVar1 != (uint *) 0x0) {
            lVar5 = (ulonglong) * puVar1 * 0x58 + *(longlong * )(param_1 + 0x2110);
            ppuVar2 = *(uint * **)(lVar5 + 0x38);
            if (ppuVar2 == (uint * *)(*(longlong * )(lVar5 + 0x48) + -8)) {
                FUN_140282860(lVar5, ppuVar6);
            } else {
                if (ppuVar2 != (uint **) 0x0) {
                    *ppuVar2 = puVar1;
                }
                *(longlong * )(lVar5 + 0x38) = *(longlong * )(lVar5 + 0x38) + 8;
            }
            *ppuVar6 = (uint *) 0x0;
        }
        ppuVar6 = ppuVar6 + 1;
        lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    *(undefined4 * )(param_1 + 0x2098) = 0xffffffff;
    ppuVar6 = (uint * *)(param_1 + 0x20a0);
    do {
        puVar1 = *ppuVar6;
        if (puVar1 != (uint *) 0x0) {
            lVar7 = (ulonglong) * puVar1 * 0x58 + *(longlong * )(param_1 + 0x2110);
            ppuVar2 = *(uint * **)(lVar7 + 0x38);
            if (ppuVar2 == (uint * *)(*(longlong * )(lVar7 + 0x48) + -8)) {
                if ((ulonglong)
                            (*(longlong * )(lVar7 + 0x10) -
                             (*(longlong * )(lVar7 + 0x50) - *(longlong * )(lVar7 + 8) >> 3)) < 2) {
                    FUN_140282940(lVar7);
                }
                uVar3 = FUN_14018b280(0x1f0, 0);
                *(undefined8 * )(*(longlong * )(lVar7 + 0x50) + 8) = uVar3;
                if (*(uint * **)(lVar7 + 0x38) != (uint **) 0x0) {
                    **(uint * **)(lVar7 + 0x38) = puVar1;
                }
                plVar4 = (longlong * )(*(longlong * )(lVar7 + 0x50) + 8);
                *(longlong * *)(lVar7 + 0x50) = plVar4;
                lVar5 = *plVar4;
                *(longlong * )(lVar7 + 0x40) = lVar5;
                *(longlong * )(lVar7 + 0x48) = lVar5 + 0x1f0;
                *(undefined8 * )(lVar7 + 0x38) = *(undefined8 * )(lVar7 + 0x40);
            } else {
                if (ppuVar2 != (uint **) 0x0) {
                    *ppuVar2 = puVar1;
                }
                *(longlong * )(lVar7 + 0x38) = *(longlong * )(lVar7 + 0x38) + 8;
            }
            *ppuVar6 = (uint *) 0x0;
        }
        ppuVar6 = ppuVar6 + 1;
        lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    *(undefined4 * )(param_1 + 0x2108) = 0xffffffff;
    FUN_1401981b0(param_1 + 0x1870);
    return 0;
}


undefined8 FUN_140278c20(longlong param_1) {
    longlong **pplVar1;
    ulonglong uVar2;
    longlong *plVar3;
    longlong *plVar4;
    longlong lVar5;
    longlong lVar6;
    ulonglong uVar7;
    longlong lVar8;

    FUN_14018b900(*(undefined8 * )(param_1 + 0x98), 0);
    uVar7 = 0;
    *(undefined8 * )(param_1 + 0x98) = 0;
    FUN_140283040(param_1 + 0x1c38);
    if (*(longlong * *)(param_1 + 0x1c60) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x1c60) + 0x10))();
        *(undefined8 * )(param_1 + 0x1c60) = 0;
    }
    FUN_140282e50(param_1 + 0x1ca0);
    lVar8 = 4;
    pplVar1 = (longlong * *)(param_1 + 0x1cc8);
    lVar5 = 4;
    do {
        if (*pplVar1 != (longlong *) 0x0) {
            (**(code * *)(**pplVar1 + 0x10))();
            *pplVar1 = (longlong *) 0x0;
        }
        pplVar1 = pplVar1 + 1;
        lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    FUN_140282c10(param_1 + 0x1df0);
    pplVar1 = (longlong * *)(param_1 + 0x1e18);
    lVar5 = 2;
    do {
        if (*pplVar1 != (longlong *) 0x0) {
            (**(code * *)(**pplVar1 + 0x10))();
            *pplVar1 = (longlong *) 0x0;
        }
        pplVar1 = pplVar1 + 1;
        lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    pplVar1 = (longlong * *)(param_1 + 0x1e30);
    lVar5 = 4;
    do {
        if (*pplVar1 != (longlong *) 0x0) {
            (**(code * *)(**pplVar1 + 8))();
            *pplVar1 = (longlong *) 0x0;
        }
        pplVar1 = pplVar1 + 1;
        lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    lVar6 = 0x10;
    pplVar1 = (longlong * *)(param_1 + 0x1e50);
    lVar5 = 0x10;
    do {
        if (*pplVar1 != (longlong *) 0x0) {
            (**(code * *)(**pplVar1 + 8))();
            *pplVar1 = (longlong *) 0x0;
        }
        pplVar1 = pplVar1 + 1;
        lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    if (*(longlong * *)(param_1 + 0x1ed0) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x1ed0) + 8))();
        *(undefined8 * )(param_1 + 0x1ed0) = 0;
    }
    pplVar1 = (longlong * *)(param_1 + 0x1ef8);
    do {
        if (*pplVar1 != (longlong *) 0x0) {
            (**(code * *)(**pplVar1 + 8))();
            *pplVar1 = (longlong *) 0x0;
        }
        pplVar1 = pplVar1 + 1;
        lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    pplVar1 = (longlong * *)(param_1 + 0x1f18);
    do {
        if (*pplVar1 != (longlong *) 0x0) {
            (**(code * *)(**pplVar1 + 8))();
            *pplVar1 = (longlong *) 0x0;
        }
        pplVar1 = pplVar1 + 1;
        lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    if (*(longlong * *)(param_1 + 0x1f98) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x1f98) + 8))();
        *(undefined8 * )(param_1 + 0x1f98) = 0;
    }
    if (*(longlong * *)(param_1 + 0x1e28) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x1e28) + 0x10))();
        *(undefined8 * )(param_1 + 0x1e28) = 0;
    }
    uVar2 = uVar7;
    if (*(longlong * )(param_1 + 0x2180) != 0) {
        do {
            plVar4 = *(longlong * *)(*(longlong * )(param_1 + 0x2178) + uVar2 * 8);
            if (plVar4 != (longlong *) 0x0) {
                (**(code * *)(*plVar4 + 0x10))();
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(ulonglong * )(param_1 + 0x2180));
    }
    *(undefined8 * )(param_1 + 0x2180) = 0;
    if (*(longlong * *)(param_1 + 0x2188) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x2188) + 8))();
        *(undefined8 * )(param_1 + 0x2188) = 0;
    }
    if (*(longlong * *)(param_1 + 0x1fb0) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x1fb0) + 0x10))();
        *(undefined8 * )(param_1 + 0x1fb0) = 0;
    }
    if (*(longlong * *)(param_1 + 0x1fd0) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x1fd0) + 0x10))();
        *(undefined8 * )(param_1 + 0x1fd0) = 0;
    }
    if (*(longlong * *)(param_1 + 0x1ff0) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x1ff0) + 8))();
        *(undefined8 * )(param_1 + 0x1ff0) = 0;
    }
    if (*(longlong * *)(param_1 + 0x2018) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x2018) + 8))();
        *(undefined8 * )(param_1 + 0x2018) = 0;
    }
    if (*(longlong * *)(param_1 + 0x2120) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x2120) + 0x10))();
        *(undefined8 * )(param_1 + 0x2120) = 0;
    }
    if (*(longlong * *)(param_1 + 0x2130) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x2130) + 0x10))();
        *(undefined8 * )(param_1 + 0x2130) = 0;
    }
    if (*(longlong * *)(param_1 + 0x2008) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x2008) + 8))();
        *(undefined8 * )(param_1 + 0x2008) = 0;
    }
    if (*(longlong * *)(param_1 + 0x2028) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x2028) + 8))();
        *(undefined8 * )(param_1 + 0x2028) = 0;
    }
    uVar2 = uVar7;
    if (*(int *) (param_1 + 0x2118) != 0) {
        do {
            lVar5 = *(longlong * )(param_1 + 0x2110);
            plVar3 = *(longlong * *)(uVar2 + 0x18 + lVar5);
            plVar4 = *(longlong * *)(uVar2 + 0x28 + lVar5);
            lVar8 = *(longlong * )(uVar2 + 0x30 + lVar5);
            if (plVar3 != *(longlong * *)(uVar2 + 0x38 + lVar5)) {
                do {
                    lVar5 = *plVar3;
                    if (lVar5 != 0) {
                        if (*(longlong * *)(lVar5 + 0x18) != (longlong *) 0x0) {
                            (**(code * *)(**(longlong * *)(lVar5 + 0x18) + 0x10))();
                        }
                        FUN_14018b900(lVar5, 0);
                    }
                    plVar3 = plVar3 + 1;
                    if (plVar3 == plVar4) {
                        plVar3 = *(longlong * *)(lVar8 + 8);
                        lVar8 = lVar8 + 8;
                        plVar4 = plVar3 + 0x3e;
                    }
                } while (plVar3 != *(longlong * *)(uVar2 + 0x38 + *(longlong * )(param_1 + 0x2110)));
            }
            uVar7 = uVar7 + 1;
            uVar2 = uVar2 + 0x58;
        } while (uVar7 < *(uint * )(param_1 + 0x2118));
    }
    if (*(longlong * )(param_1 + 0x2110) != 0) {
        FUN_140278430();
    }
    *(undefined8 * )(param_1 + 0x2110) = 0;
    *(undefined4 * )(param_1 + 0x2118) = 0;
    if (*(longlong * *)(param_1 + 0x18b0) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x18b0) + 0x10))();
        *(undefined8 * )(param_1 + 0x18b0) = 0;
    }
    if (*(longlong * *)(param_1 + 0x18b8) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x18b8) + 0x10))();
        *(undefined8 * )(param_1 + 0x18b8) = 0;
    }
    FUN_1401981b0(param_1 + 0x1870);
    return 0;
}


longlong FUN_140279000(longlong param_1) {
    if (*(longlong * *)(param_1 + 0x18) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x18) + 0x10))();
    }
    FUN_14018b900(param_1, 0);
    return param_1;
}


void FUN_140279030(longlong param_1) {
    undefined4 *puVar1;
    longlong *plVar2;
    ulonglong *puVar3;
    ulonglong **ppuVar4;
    ulonglong *puVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    int iVar8;
    undefined4 uVar9;
    ulonglong uVar10;
    ulonglong *puVar11;
    ulonglong *puVar12;
    longlong lVar13;
    longlong **pplVar14;
    ulonglong *puVar15;
    longlong *local_res8;

    if ((*(byte * )(param_1 + 0x1c08) & 1) != 0) {
        local_res8 = (longlong *) 0x0;
        uVar10 = (**(code * *)(param_1 + 0x1c50))(param_1 + 0x1c0c);
        for (puVar11 = *(ulonglong * *)
                (*(longlong * )(param_1 + 0x1c48) +
                 (uVar10 % *(ulonglong * )(param_1 + 0x1c40)) * 8); puVar11 != (ulonglong *) 0x0;
             puVar11 = (ulonglong *) puVar11[1]) {
            if ((uVar10 == *puVar11) &&
                (iVar8 = (**(code * *)(param_1 + 0x1c58))(param_1 + 0x1c0c, puVar11 + 2), iVar8 != 0)) {
                pplVar14 = (longlong * *)(puVar11 + 7);
                if (pplVar14 != (longlong **) 0x0) {
                    plVar2 = *pplVar14;
                    if (local_res8 != plVar2) {
                        if (plVar2 != (longlong *) 0x0) {
                            (**(code * *)(*plVar2 + 8))();
                        }
                        if (local_res8 != (longlong *) 0x0) {
                            (**(code * *)(*local_res8 + 0x10))(local_res8);
                        }
                        local_res8 = *pplVar14;
                    }
                    goto LAB_1402790e5;
                }
                break;
            }
        }
        iVar8 = (**(code * *)(**(longlong * *)(param_1 + 0x18c0) + 0xb0))
                (*(longlong * *)(param_1 + 0x18c0), param_1 + 0x1c0c, &local_res8);
        if (-1 < iVar8) {
            FUN_140282490(param_1 + 0x1c38, param_1 + 0x1c0c, &local_res8);
        }
        LAB_1402790e5:
        if ((local_res8 != (longlong *) 0x0) &&
            ((**(code * *)(**(longlong * *)(param_1 + 0x18d0) + 0x158))(), local_res8 != (longlong *) 0x0)) {
            (**(code * *)(*local_res8 + 0x10))();
        }
    }
    if ((*(byte * )(param_1 + 0x1c08) & 2) != 0) {
        if ((*(int *) (param_1 + 0x1c70) == 0) && (*(int *) (param_1 + 0x1c74) == 8)) {
            uVar9 = 0;
        } else {
            uVar9 = 1;
        }
        puVar1 = (undefined4 * )(param_1 + 0x1c6c);
        *puVar1 = uVar9;
        if (*(int *) (param_1 + 0x1c78) == 1) {
            *(undefined4 * )(param_1 + 0x1c90) = *(undefined4 * )(param_1 + 0x1c80);
            *(undefined4 * )(param_1 + 0x1c94) = *(undefined4 * )(param_1 + 0x1c84);
            *(undefined4 * )(param_1 + 0x1c98) = *(undefined4 * )(param_1 + 0x1c88);
            *(undefined4 * )(param_1 + 0x1c9c) = *(undefined4 * )(param_1 + 0x1c8c);
        }
        plVar2 = (longlong * )(param_1 + 0x1ca0);
        local_res8 = (longlong *) 0x0;
        uVar10 = (**(code * *)(param_1 + 0x1cb8))(puVar1);
        for (puVar11 = *(ulonglong * *)
                (*(longlong * )(param_1 + 0x1cb0) +
                 (uVar10 % *(ulonglong * )(param_1 + 0x1ca8)) * 8); puVar11 != (ulonglong *) 0x0;
             puVar11 = (ulonglong *) puVar11[1]) {
            if ((uVar10 == *puVar11) &&
                (iVar8 = (**(code * *)(param_1 + 0x1cc0))(puVar1, puVar11 + 2), iVar8 != 0)) {
                pplVar14 = (longlong * *)(puVar11 + 9);
                if (pplVar14 != (longlong **) 0x0) {
                    plVar2 = *pplVar14;
                    if (local_res8 != plVar2) {
                        if (plVar2 != (longlong *) 0x0) {
                            (**(code * *)(*plVar2 + 8))();
                        }
                        if (local_res8 != (longlong *) 0x0) {
                            (**(code * *)(*local_res8 + 0x10))(local_res8);
                        }
                        local_res8 = *pplVar14;
                    }
                    goto LAB_140279325;
                }
                break;
            }
        }
        iVar8 = (**(code * *)(**(longlong * *)(param_1 + 0x18c0) + 0xa8))
                (*(longlong * *)(param_1 + 0x18c0), puVar1, &local_res8);
        if (-1 < iVar8) {
            if (*plVar2 == *(longlong * )(param_1 + 0x1ca8)) {
                FUN_1400290d0(plVar2);
            }
            uVar10 = (**(code * *)(param_1 + 0x1cb8))(puVar1);
            ppuVar4 = (ulonglong * *)
                    (*(longlong * )(param_1 + 0x1cb0) + (uVar10 % *(ulonglong * )(param_1 + 0x1ca8)) * 8);
            puVar11 = (ulonglong *) FUN_14018b280(0x50);
            if (puVar11 == (ulonglong *) 0x0) {
                puVar11 = (ulonglong *) 0x0;
            } else {
                puVar12 = *ppuVar4;
                *puVar11 = uVar10;
                puVar11[1] = (ulonglong) puVar12;
                *(undefined4 * )(puVar11 + 2) = *puVar1;
                *(undefined4 * )((longlong) puVar11 + 0x14) = *(undefined4 * )(param_1 + 0x1c70);
                *(undefined4 * )(puVar11 + 3) = *(undefined4 * )(param_1 + 0x1c74);
                *(undefined4 * )((longlong) puVar11 + 0x1c) = *(undefined4 * )(param_1 + 0x1c78);
                *(undefined4 * )(puVar11 + 4) = *(undefined4 * )(param_1 + 0x1c7c);
                *(undefined4 * )((longlong) puVar11 + 0x24) = *(undefined4 * )(param_1 + 0x1c80);
                *(undefined4 * )(puVar11 + 5) = *(undefined4 * )(param_1 + 0x1c84);
                *(undefined4 * )((longlong) puVar11 + 0x2c) = *(undefined4 * )(param_1 + 0x1c88);
                *(undefined4 * )(puVar11 + 6) = *(undefined4 * )(param_1 + 0x1c8c);
                *(undefined4 * )((longlong) puVar11 + 0x34) = *(undefined4 * )(param_1 + 0x1c90);
                *(undefined4 * )(puVar11 + 7) = *(undefined4 * )(param_1 + 0x1c94);
                *(undefined4 * )((longlong) puVar11 + 0x3c) = *(undefined4 * )(param_1 + 0x1c98);
                *(undefined4 * )(puVar11 + 8) = *(undefined4 * )(param_1 + 0x1c9c);
                puVar11[9] = (ulonglong) local_res8;
                if (local_res8 != (longlong *) 0x0) {
                    (**(code * *)(*local_res8 + 8))();
                }
            }
            *ppuVar4 = puVar11;
            *plVar2 = *plVar2 + 1;
        }
        LAB_140279325:
        if ((local_res8 != (longlong *) 0x0) &&
            ((**(code * *)(**(longlong * *)(param_1 + 0x18d0) + 0x120))
                    (*(longlong * *)(param_1 + 0x18d0), local_res8, *(undefined4 * )(param_1 + 0x1c68)),
                    local_res8 != (longlong *) 0x0)) {
            (**(code * *)(*local_res8 + 0x10))();
        }
    }
    if ((*(byte * )(param_1 + 0x1c08) & 4) != 0) {
        puVar11 = (ulonglong * )(param_1 + 0x1ce8);
        plVar2 = (longlong * )(param_1 + 0x1df0);
        local_res8 = (longlong *) 0x0;
        uVar10 = (**(code * *)(param_1 + 0x1e08))(puVar11);
        for (puVar12 = *(ulonglong * *)
                (*(longlong * )(param_1 + 0x1e00) +
                 (uVar10 % *(ulonglong * )(param_1 + 0x1df8)) * 8); puVar12 != (ulonglong *) 0x0;
             puVar12 = (ulonglong *) puVar12[1]) {
            if ((uVar10 == *puVar12) &&
                (iVar8 = (**(code * *)(param_1 + 0x1e10))(puVar11, puVar12 + 2), iVar8 != 0)) {
                pplVar14 = (longlong * *)(puVar12 + 0x23);
                if (pplVar14 != (longlong **) 0x0) {
                    plVar2 = *pplVar14;
                    if (local_res8 != plVar2) {
                        if (plVar2 != (longlong *) 0x0) {
                            (**(code * *)(*plVar2 + 8))();
                        }
                        if (local_res8 != (longlong *) 0x0) {
                            (**(code * *)(*local_res8 + 0x10))(local_res8);
                        }
                        local_res8 = *pplVar14;
                    }
                    goto LAB_14027950d;
                }
                break;
            }
        }
        iVar8 = (**(code * *)(**(longlong * *)(param_1 + 0x18c0) + 0xa0))
                (*(longlong * *)(param_1 + 0x18c0), puVar11, &local_res8);
        if (-1 < iVar8) {
            if (*plVar2 == *(longlong * )(param_1 + 0x1df8)) {
                FUN_1400290d0(plVar2);
            }
            uVar10 = (**(code * *)(param_1 + 0x1e08))(puVar11);
            ppuVar4 = (ulonglong * *)
                    (*(longlong * )(param_1 + 0x1e00) + (uVar10 % *(ulonglong * )(param_1 + 0x1df8)) * 8);
            puVar12 = (ulonglong *) FUN_14018b280(0x120, 0);
            if (puVar12 == (ulonglong *) 0x0) {
                puVar12 = (ulonglong *) 0x0;
            } else {
                puVar5 = *ppuVar4;
                puVar15 = puVar12 + 2;
                *puVar12 = uVar10;
                puVar12[1] = (ulonglong) puVar5;
                if ((((uint) puVar11 | (uint) puVar15) & 0xf) == 0) {
                    lVar13 = 2;
                    do {
                        uVar9 = *(undefined4 * )((longlong) puVar11 + 4);
                        uVar6 = *(undefined4 * )(puVar11 + 1);
                        uVar7 = *(undefined4 * )((longlong) puVar11 + 0xc);
                        puVar5 = puVar15 + 0x10;
                        puVar3 = puVar11 + 0x10;
                        *(undefined4 *) puVar15 = *(undefined4 *) puVar11;
                        *(undefined4 * )((longlong) puVar15 + 4) = uVar9;
                        *(undefined4 * )(puVar15 + 1) = uVar6;
                        *(undefined4 * )((longlong) puVar15 + 0xc) = uVar7;
                        uVar9 = *(undefined4 * )((longlong) puVar11 + 0x14);
                        uVar6 = *(undefined4 * )(puVar11 + 3);
                        uVar7 = *(undefined4 * )((longlong) puVar11 + 0x1c);
                        *(undefined4 * )(puVar15 + 2) = *(undefined4 * )(puVar11 + 2);
                        *(undefined4 * )((longlong) puVar15 + 0x14) = uVar9;
                        *(undefined4 * )(puVar15 + 3) = uVar6;
                        *(undefined4 * )((longlong) puVar15 + 0x1c) = uVar7;
                        uVar9 = *(undefined4 * )((longlong) puVar11 + 0x24);
                        uVar6 = *(undefined4 * )(puVar11 + 5);
                        uVar7 = *(undefined4 * )((longlong) puVar11 + 0x2c);
                        *(undefined4 * )(puVar15 + 4) = *(undefined4 * )(puVar11 + 4);
                        *(undefined4 * )((longlong) puVar15 + 0x24) = uVar9;
                        *(undefined4 * )(puVar15 + 5) = uVar6;
                        *(undefined4 * )((longlong) puVar15 + 0x2c) = uVar7;
                        uVar9 = *(undefined4 * )((longlong) puVar11 + 0x34);
                        uVar6 = *(undefined4 * )(puVar11 + 7);
                        uVar7 = *(undefined4 * )((longlong) puVar11 + 0x3c);
                        *(undefined4 * )(puVar15 + 6) = *(undefined4 * )(puVar11 + 6);
                        *(undefined4 * )((longlong) puVar15 + 0x34) = uVar9;
                        *(undefined4 * )(puVar15 + 7) = uVar6;
                        *(undefined4 * )((longlong) puVar15 + 0x3c) = uVar7;
                        uVar9 = *(undefined4 * )((longlong) puVar11 + 0x44);
                        uVar6 = *(undefined4 * )(puVar11 + 9);
                        uVar7 = *(undefined4 * )((longlong) puVar11 + 0x4c);
                        *(undefined4 * )(puVar15 + 8) = *(undefined4 * )(puVar11 + 8);
                        *(undefined4 * )((longlong) puVar15 + 0x44) = uVar9;
                        *(undefined4 * )(puVar15 + 9) = uVar6;
                        *(undefined4 * )((longlong) puVar15 + 0x4c) = uVar7;
                        uVar9 = *(undefined4 * )((longlong) puVar11 + 0x54);
                        uVar6 = *(undefined4 * )(puVar11 + 0xb);
                        uVar7 = *(undefined4 * )((longlong) puVar11 + 0x5c);
                        *(undefined4 * )(puVar15 + 10) = *(undefined4 * )(puVar11 + 10);
                        *(undefined4 * )((longlong) puVar15 + 0x54) = uVar9;
                        *(undefined4 * )(puVar15 + 0xb) = uVar6;
                        *(undefined4 * )((longlong) puVar15 + 0x5c) = uVar7;
                        uVar9 = *(undefined4 * )((longlong) puVar11 + 100);
                        uVar6 = *(undefined4 * )(puVar11 + 0xd);
                        uVar7 = *(undefined4 * )((longlong) puVar11 + 0x6c);
                        *(undefined4 * )(puVar15 + 0xc) = *(undefined4 * )(puVar11 + 0xc);
                        *(undefined4 * )((longlong) puVar15 + 100) = uVar9;
                        *(undefined4 * )(puVar15 + 0xd) = uVar6;
                        *(undefined4 * )((longlong) puVar15 + 0x6c) = uVar7;
                        uVar9 = *(undefined4 * )((longlong) puVar11 + 0x74);
                        uVar6 = *(undefined4 * )(puVar11 + 0xf);
                        uVar7 = *(undefined4 * )((longlong) puVar11 + 0x7c);
                        *(undefined4 * )(puVar15 + 0xe) = *(undefined4 * )(puVar11 + 0xe);
                        *(undefined4 * )((longlong) puVar15 + 0x74) = uVar9;
                        *(undefined4 * )(puVar15 + 0xf) = uVar6;
                        *(undefined4 * )((longlong) puVar15 + 0x7c) = uVar7;
                        lVar13 = lVar13 + -1;
                        puVar11 = puVar3;
                        puVar15 = puVar5;
                    } while (lVar13 != 0);
                    *puVar5 = *puVar3;
                } else {
                    FUN_1407db590(puVar15, puVar11, 0x108);
                }
                puVar12[0x23] = (ulonglong) local_res8;
                if (local_res8 != (longlong *) 0x0) {
                    (**(code * *)(*local_res8 + 8))();
                }
            }
            *ppuVar4 = puVar12;
            *plVar2 = *plVar2 + 1;
        }
        LAB_14027950d:
        if ((local_res8 != (longlong *) 0x0) &&
            ((**(code * *)(**(longlong * *)(param_1 + 0x18d0) + 0x118))
                    (*(longlong * *)(param_1 + 0x18d0), local_res8, &DAT_140b611d0, 0xffffffff),
                    local_res8 != (longlong *) 0x0)) {
            (**(code * *)(*local_res8 + 0x10))();
        }
    }
    *(uint * )(param_1 + 0x1c08) = *(uint * )(param_1 + 0x1c08) & 0xfffffff8;
    return;
}


void FUN_140279560(longlong param_1) {
    longlong lVar1;
    undefined auStack72[32];
    float local_28;
    float local_24;
    float local_20;
    float local_1c;
    undefined4 local_18;
    undefined4 local_14;
    ulonglong local_10;

    local_10 = DAT_140c0f7b0 ^ (ulonglong) auStack72;
    if ((*(byte * )(param_1 + 0x1c08) & 8) != 0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x18d0) + 0x108))
                (*(longlong * *)(param_1 + 0x18d0), 4, *(longlong * )(param_1 + 0x2190) + 0x68,
                 *(undefined8 * )(*(longlong * )(param_1 + 0x2198) + 0x20));
        *(uint * )(param_1 + 0x1c08) = *(uint * )(param_1 + 0x1c08) | 0x10;
    }
    if ((*(byte * )(param_1 + 0x1c08) & 0x10) != 0) {
        lVar1 = *(longlong * )(param_1 + 0x2190);
        local_28 = (float) (ulonglong) * (uint * )(lVar1 + 0x90) + 0.5;
        local_24 = (float) (ulonglong) * (uint * )(lVar1 + 0x94) + 0.5;
        local_20 = (float) (ulonglong) * (uint * )(lVar1 + 0x98);
        local_1c = (float) (ulonglong) * (uint * )(lVar1 + 0x9c);
        local_18 = *(undefined4 * )(lVar1 + 0xa0);
        local_14 = *(undefined4 * )(lVar1 + 0xa4);
        (**(code * *)(**(longlong * *)(param_1 + 0x18d0) + 0x160))
                (*(longlong * *)(param_1 + 0x18d0), 1, &local_28);
        *(uint * )(param_1 + 0x1c08) = *(uint * )(param_1 + 0x1c08) | 0x80;
    }
    *(uint * )(param_1 + 0x1c08) = *(uint * )(param_1 + 0x1c08) & 0xffffffe7;
    FUN_1407db4f0(local_10 ^ (ulonglong) auStack72);
    return;
}


void FUN_140279680(longlong param_1) {
    int iVar1;
    longlong lVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    undefined8 local_a8[4];
    undefined8 local_88[16];

    iVar1 = *(int *) (param_1 + 0x1ee8);
    if (iVar1 < *(int *) (param_1 + 0x1eec)) {
        lVar2 = (longlong) iVar1;
        if (iVar1 < *(int *) (param_1 + 0x1eec)) {
            uVar4 = (ulonglong)(uint)(*(int *) (param_1 + 0x1eec) - iVar1);
            puVar3 = local_a8 + lVar2;
            do {
                *puVar3 = *(undefined8 * )
                        (*(longlong * )((param_1 - (longlong) local_a8) + 0x1e30 + (longlong) puVar3) + 0x10
                        );
                uVar4 = uVar4 - 1;
                puVar3 = puVar3 + 1;
            } while (uVar4 != 0);
        }
        (**(code * *)(**(longlong * *)(param_1 + 0x18d0) + 200))
                (*(longlong * *)(param_1 + 0x18d0), lVar2, *(int *) (param_1 + 0x1eec) - iVar1,
                 local_a8 + lVar2);
        *(undefined8 * )(param_1 + 0x1ee8) = DAT_140c79898;
    }
    iVar1 = *(int *) (param_1 + 0x1fa0);
    if (iVar1 < *(int *) (param_1 + 0x1fa4)) {
        lVar2 = (longlong) iVar1;
        if (iVar1 < *(int *) (param_1 + 0x1fa4)) {
            uVar4 = (ulonglong)(uint)(*(int *) (param_1 + 0x1fa4) - iVar1);
            puVar3 = local_a8 + lVar2;
            do {
                *puVar3 = *(undefined8 * )
                        (*(longlong * )((param_1 - (longlong) local_a8) + 0x1ef8 + (longlong) puVar3) + 0x10
                        );
                uVar4 = uVar4 - 1;
                puVar3 = puVar3 + 1;
            } while (uVar4 != 0);
        }
        (**(code * *)(**(longlong * *)(param_1 + 0x18d0) + 0xd0))
                (*(longlong * *)(param_1 + 0x18d0), lVar2, *(int *) (param_1 + 0x1fa4) - iVar1,
                 local_a8 + lVar2);
        *(undefined8 * )(param_1 + 0x1fa0) = DAT_140c79898;
    }
    iVar1 = *(int *) (param_1 + 0x1ef0);
    if (iVar1 < *(int *) (param_1 + 0x1ef4)) {
        lVar2 = (longlong) iVar1;
        if (iVar1 < *(int *) (param_1 + 0x1ef4)) {
            uVar4 = (ulonglong)(uint)(*(int *) (param_1 + 0x1ef4) - iVar1);
            puVar3 = local_88 + lVar2;
            do {
                *puVar3 = *(undefined8 * )
                        (*(longlong * )((param_1 - (longlong) local_88) + 0x1e50 + (longlong) puVar3) + 0x10
                        );
                uVar4 = uVar4 - 1;
                puVar3 = puVar3 + 1;
            } while (uVar4 != 0);
        }
        (**(code * *)(**(longlong * *)(param_1 + 0x18d0) + 0x40))
                (*(longlong * *)(param_1 + 0x18d0), lVar2, *(int *) (param_1 + 0x1ef4) - iVar1,
                 local_88 + lVar2);
        *(undefined8 * )(param_1 + 0x1ef0) = DAT_140c79898;
    }
    iVar1 = *(int *) (param_1 + 0x1fa8);
    if (iVar1 < *(int *) (param_1 + 0x1fac)) {
        lVar2 = (longlong) iVar1;
        if (iVar1 < *(int *) (param_1 + 0x1fac)) {
            uVar4 = (ulonglong)(uint)(*(int *) (param_1 + 0x1fac) - iVar1);
            puVar3 = local_88 + lVar2;
            do {
                *puVar3 = *(undefined8 * )
                        (*(longlong * )((param_1 - (longlong) local_88) + 0x1f18 + (longlong) puVar3) + 0x10
                        );
                uVar4 = uVar4 - 1;
                puVar3 = puVar3 + 1;
            } while (uVar4 != 0);
        }
        (**(code * *)(**(longlong * *)(param_1 + 0x18d0) + 0x50))
                (*(longlong * *)(param_1 + 0x18d0), lVar2, *(int *) (param_1 + 0x1fac) - iVar1,
                 local_88 + lVar2);
        *(undefined8 * )(param_1 + 0x1fa8) = DAT_140c79898;
    }
    return;
}


void FUN_1402798d0(longlong *param_1) {
    uint uVar1;
    longlong *plVar2;
    longlong lVar3;
    int iVar4;
    undefined8 uVar5;
    float local_38;
    float fStack52;
    float fStack48;
    float fStack44;
    float *local_28[2];

    uVar1 = *(uint * )(&DAT_140ae7dc0 + (longlong) * (int *) (param_1 + 0x3f7) * 4);
    if (uVar1 == 0xffffffff) {
        plVar2 = (longlong *) param_1[0x31a];
        lVar3 = *plVar2;
        uVar5 = FUN_1402a9c10(param_1[0x3fe], *(undefined4 * )((longlong) param_1 + 0x1ffc));
        (**(code * *)(lVar3 + 0x88))(plVar2, uVar5);
        if ((*(byte * )(param_1 + 0x381) & 0x20) != 0) {
            plVar2 = (longlong *) param_1[0x31a];
            lVar3 = *plVar2;
            uVar5 = FUN_1402a9a70(param_1[0x3fe], *(undefined4 * )(param_1 + 0x3ff));
            (**(code * *)(lVar3 + 0x58))(plVar2, uVar5, 0, 0);
            *(uint * )(param_1 + 0x381) = *(uint * )(param_1 + 0x381) & 0xffffffdf;
        }
    } else {
        if (param_1[0x401] == 0) {
            iVar4 = (**(code * *)(*param_1 + 0x90))(param_1, L"Shaders\\DefaultVS.sho", param_1 + 0x401);
            if (iVar4 < 0) {
                return;
            }
            local_38 = -NAN;
            (**(code * *)(*(longlong *) param_1[0x401] + 0x20))((longlong *) param_1[0x401], &local_38);
        }
        plVar2 = (longlong *) param_1[0x31a];
        lVar3 = *plVar2;
        uVar5 = FUN_1402a9c10(param_1[0x401],
                              *(undefined4 * )
                                      (*(longlong * )(*(longlong * )(param_1[0x401] + 0x30) + 0x40) +
                                       (ulonglong) uVar1 * 4), *(undefined4 * )(param_1 + 0x3f7));
        (**(code * *)(lVar3 + 0x88))(plVar2, uVar5);
        if (*(uint * )(param_1 + 0x402) != uVar1) {
            plVar2 = (longlong *) param_1[0x31a];
            lVar3 = *plVar2;
            uVar5 = FUN_1402a9a70(param_1[0x401],
                                  *(undefined4 * )
                                          (*(longlong * )(*(longlong * )(param_1[0x401] + 0x30) + 0x20) +
                                           (ulonglong) uVar1 * 4));
            (**(code * *)(lVar3 + 0x58))(plVar2, uVar5, 0, 0);
            *(uint * )(param_1 + 0x381) = *(uint * )(param_1 + 0x381) | 0x20;
        }
        if (((*(byte * )(param_1 + 0x381) & 0x80) != 0) ||
            (*(int *) (param_1 + 0x425) != *(int *) (param_1 + 0x1e))) {
            iVar4 = (**(code * *)(*(longlong *) param_1[0x31a] + 0x70))
                    ((longlong *) param_1[0x31a], param_1[0x424], 0, 4, 0, local_28);
            if (-1 < iVar4) {
                lVar3 = param_1[0x432];
                local_38 = 2.0 / (float) (ulonglong) * (uint * )(lVar3 + 0x98);
                fStack52 = -2.0 / (float) (ulonglong) * (uint * )(lVar3 + 0x9c);
                fStack48 = -1.0 - (float) (ulonglong) * (uint * )(lVar3 + 0x90) * local_38;
                fStack44 = 1.0 - (float) (ulonglong) * (uint * )(lVar3 + 0x94) * fStack52;
                *local_28[0] = local_38;
                local_28[0][1] = fStack52;
                local_28[0][2] = fStack48;
                local_28[0][3] = fStack44;
                (**(code * *)(*(longlong *) param_1[0x31a] + 0x78))
                        ((longlong *) param_1[0x31a], param_1[0x424], 0);
            }
            *(uint * )(param_1 + 0x381) = *(uint * )(param_1 + 0x381) & 0xffffff7f;
            *(undefined4 * )(param_1 + 0x425) = *(undefined4 * )(param_1 + 0x1e);
        }
    }
    *(uint * )(param_1 + 0x402) = uVar1;
    if ((*(uint * )(param_1 + 0x381) & 0x100) != 0) {
        plVar2 = (longlong *) param_1[0x31a];
        lVar3 = *plVar2;
        uVar5 = FUN_1402aa830(param_1[0x403], *(undefined4 * )(param_1 + 0x404));
        (**(code * *)(lVar3 + 0x48))(plVar2, uVar5, 0, 0);
        *(uint * )(param_1 + 0x381) = *(uint * )(param_1 + 0x381) & 0xfffffeff;
    }
    return;
}


undefined4
FUN_140279d70(longlong param_1, longlong *param_2, undefined8 param_3, longlong param_4,
              undefined8 param_5) {
    undefined4 uVar1;
    longlong *plVar2;
    longlong *plVar3;

    plVar2 = (longlong *) FUN_14018b280();
    plVar3 = (longlong *) 0x0;
    if (plVar2 != (longlong *) 0x0) {
        *(undefined4 * )(plVar2 + 1) = 1;
        plVar2[2] = param_1;
        *plVar2 = (longlong) & PTR_LAB_140b61fd8;
        plVar2[3] = 0;
        plVar2[4] = 0;
        plVar2[4] = param_2[1];
        plVar2[3] = *param_2;
        plVar2[5] = 0;
        plVar2[6] = param_4;
        *(undefined4 * )(plVar2 + 7) = 0;
        plVar2[8] = 0;
        plVar2[9] = 0;
        plVar3 = plVar2;
    }
    uVar1 = FUN_14019e010(0, plVar3, param_3, param_4, param_5);
    (**(code * *)(*plVar3 + 8))(plVar3);
    return uVar1;
}


undefined8 FUN_140279e20(undefined8 param_1, longlong *param_2, longlong **param_3) {
    longlong lVar1;
    longlong *plVar2;

    if (param_3 != (longlong **) 0x0) {
        lVar1 = FUN_14018b280(0x1a8, 0);
        if (lVar1 == 0) {
            plVar2 = (longlong *) 0x0;
        } else {
            plVar2 = (longlong *) FUN_1402ae670(lVar1, param_1);
        }
        if (param_2 != (longlong *) 0x0) {
            plVar2[8] = (longlong) param_2;
            (**(code * *)(*param_2 + 8))(param_2);
            *(undefined4 * )(plVar2 + 0xb) = 0x1b;
            *(undefined4 * )(plVar2 + 0xd) = 6;
            *(undefined4 * )(plVar2 + 6) = 0;
            *param_3 = plVar2;
            return 0;
        }
        if (plVar2 != (longlong *) 0x0) {
            (**(code * *)(*plVar2 + 0x10))(plVar2, 1);
        }
    }
    return 0x80070057;
}


int FUN_140279ed0(undefined8 param_1, undefined4 param_2, undefined8 param_3, undefined4 param_4,
                  undefined4 param_5, undefined4 param_6, undefined4 param_7, longlong **param_8) {
    int iVar1;
    longlong lVar2;
    longlong *plVar3;

    if (param_8 == (longlong **) 0x0) {
        iVar1 = -0x7ff8ffa9;
    } else {
        lVar2 = FUN_14018b280(0x1a8, 0);
        if (lVar2 == 0) {
            plVar3 = (longlong *) 0x0;
        } else {
            plVar3 = (longlong *) FUN_1402ae670(lVar2, param_1);
        }
        iVar1 = FUN_1402aebb0(plVar3, param_2, param_3, param_4, param_5, param_6, param_7);
        if (iVar1 < 0) {
            if (plVar3 != (longlong *) 0x0) {
                (**(code * *)(*plVar3 + 0x10))(plVar3, 1);
            }
        } else {
            *param_8 = plVar3;
            iVar1 = 0;
        }
    }
    return iVar1;
}


void FUN_140279fa0(longlong param_1, undefined8 param_2) {
    int iVar1;
    undefined4 local_res8[4];
    undefined8 local_res18[2];

    if (*(int *) (param_1 + 0x21d8) != 0) {
        iVar1 = FUN_1408194d0(*(undefined8 * )(param_1 + 0x18c0), param_2, local_res18);
        if (iVar1 == 0) {
            local_res8[0] = 1;
            FUN_140819670(*(undefined8 * )(param_1 + 0x18c0), local_res18[0], 1, 1, local_res8);
        }
    }
    return;
}


undefined8 FUN_14027a000(undefined4 param_1) {
    switch (param_1) {
        case 2:
            return 0x14;
        default:
            return 0x19;
        case 10:
            return 0x12;
        case 0xb:
            return 9;
        case 0x18:
            return 0x1a;
        case 0x1f:
            return 0xb;
        case 0x22:
            return 0x11;
        case 0x23:
            return 8;
        case 0x25:
            return 0xc;
        case 0x29:
            return 0x13;
        case 0x2d:
            return 0x17;
        case 0x33:
            return 10;
        case 0x36:
            return 0x10;
        case 0x37:
            return 0x15;
        case 0x38:
            return 7;
        case 0x3d:
            return 6;
        case 0x47:
            return 0xd;
        case 0x4a:
            return 0xe;
        case 0x4d:
            return 0xf;
        case 0x57:
            return 0;
        case 0x58:
            return 1;
    }
}


undefined8 FUN_14027a160(int param_1, int param_2) {
    undefined8 uVar1;

    if (param_2 < 1) {
        return 0;
    }
    if (param_2 < 3) {
        return 8;
    }
    if (param_2 != 3) {
        if (param_2 == 4) {
            return 8;
        }
        if (param_2 != 5) {
            return 0;
        }
    }
    uVar1 = 0x28;
    if ((&DAT_140ae64c0)[param_1] != 0) {
        uVar1 = 0x48;
    }
    return uVar1;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14027a1a0(longlong param_1, short *param_2, longlong *param_3) {
    longlong *plVar1;
    int iVar2;
    int iVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined4 *puVar6;
    byte bVar7;
    uint uVar8;
    ulonglong uVar9;
    undefined8 *puVar10;
    undefined *puVar11;
    undefined auStack424[32];
    int *local_188;
    undefined4 *local_180;
    longlong *local_178;
    undefined8 local_170;
    ulonglong local_168;
    ulonglong local_160;
    uint local_158;
    uint local_154;
    uint local_150;
    uint local_14c;
    longlong *local_148;
    uint local_140;
    int local_13c;
    int local_138;
    int local_130;
    int local_12c;
    int local_128;
    int local_124;
    undefined4 local_120;
    int local_11c;
    int local_118;
    undefined *local_110;
    undefined4 local_108[2];
    undefined4 local_100;
    int local_fc;
    short *local_f8;
    int *local_f0;
    undefined8 local_e8;
    undefined8 uStack224;
    uint local_d8;
    uint uStack212;
    uint uStack208;
    int iStack204;
    undefined4 local_c8;
    undefined4 uStack196;
    undefined4 uStack192;
    undefined4 uStack188;
    undefined4 local_b8;
    undefined4 uStack180;
    undefined4 uStack176;
    undefined4 uStack172;
    undefined4 local_a8;
    undefined4 uStack164;
    undefined8 uStack160;
    undefined8 local_98;
    undefined4 uStack144;
    undefined4 uStack140;
    undefined4 local_88;
    undefined4 uStack132;
    undefined4 uStack128;
    undefined4 uStack124;
    undefined8 local_78;
    undefined8 local_70;
    undefined4 local_68;
    int iStack100;
    undefined4 local_60;
    int iStack92;
    undefined4 local_58;
    undefined4 uStack84;
    undefined4 local_50;
    undefined4 uStack76;
    undefined8 local_48;
    ulonglong local_40;

    local_40 = DAT_140c0f7b0 ^ (ulonglong) auStack424;
    local_f8 = param_2;
    if ((((param_2 == (short *) 0x0) || (*param_2 == 0)) || (param_3 == (longlong *) 0x0)) ||
        (lVar4 = FUN_1407dd8d8(param_2, 0x2e), lVar4 == 0))
        goto LAB_14027a2f4;
    iVar2 = FUN_14018e2c0(lVar4, L".tex");
    if (iVar2 == 0) {
        FUN_1407e4830(&local_e8, 0, 0x70);
        local_e8 = 0x300474658;
        local_c8 = 0;
        (**(code * *)(*param_3 + 0x38))(param_3, &local_13c);
        local_178 = (longlong *) 0x0;
        if (local_13c == 3) {
            (**(code * *)(*param_3 + 0x50))(param_3, &local_78);
            local_154 = (uint) local_78;
            uStack212 = local_70._4_4_;
            local_158 = local_78._4_4_;
            uStack224 = local_78;
            local_150 = (uint) local_70;
            uStack208 = (uint) local_70;
            local_14c = 1;
            local_d8 = 1;
            iStack204 = FUN_14027a000(local_68);
            local_148._0_4_ = (uint) local_70;
            if (iStack92 == 3) {
                LAB_14027a74e:
                plVar1 = local_178;
                if ((local_178 != param_3) &&
                    ((**(code * *)(*param_3 + 8))(param_3), plVar1 = param_3, local_178 != (longlong *) 0x0)) {
                    (**(code * *)(*local_178 + 0x10))();
                    plVar1 = param_3;
                }
            } else {
                iStack92 = 3;
                local_58 = 0;
                uStack84 = 0x20000;
                local_50 = 0;
                iVar2 = (**(code * *)(**(longlong * *)(param_1 + 0x18c0) + 0x28))
                        (*(longlong * *)(param_1 + 0x18c0), &local_78, 0);
                if (iVar2 < 0) {
                    local_170 = 0x141de2cb0;
                    goto LAB_14027a6f3;
                }
                LAB_14027a712:
                plVar1 = local_178;
                if (local_178 != param_3) {
                    FUN_14003d8f0(&local_170, param_1 + 0x18e0);
                    (**(code * *)(**(longlong * *)(param_1 + 0x18d0) + 0x178))
                            (*(longlong * *)(param_1 + 0x18d0), local_178, param_3);
                    FUN_14003d880(&local_170);
                    plVar1 = local_178;
                }
            }
            local_178 = plVar1;
            uVar5 = FUN_14029bdc0(&local_e8);
            local_148 = (longlong *) 0x0;
            iVar2 = FUN_1401c5690(uVar5, &local_148, 0);
            plVar1 = local_148;
            if (-1 < iVar2) {
                (**(code * *)(*local_148 + 0x10))(local_148);
                uVar5 = (**(code * *)(*plVar1 + 0x20))(plVar1);
                FUN_1407e4830(uVar5, 0);
                puVar6 = (undefined4 * )(**(code * *)(*plVar1 + 0x20))(plVar1);
                *puVar6 = (undefined4) local_e8;
                puVar6[1] = local_e8._4_4_;
                puVar6[2] = (undefined4) uStack224;
                puVar6[3] = uStack224._4_4_;
                puVar6[4] = local_d8;
                puVar6[5] = uStack212;
                puVar6[6] = uStack208;
                puVar6[7] = iStack204;
                puVar6[8] = local_c8;
                puVar6[9] = uStack196;
                puVar6[10] = uStack192;
                puVar6[0xb] = uStack188;
                puVar6[0xc] = local_b8;
                puVar6[0xd] = uStack180;
                puVar6[0xe] = uStack176;
                puVar6[0xf] = uStack172;
                puVar6[0x10] = local_a8;
                puVar6[0x11] = uStack164;
                puVar6[0x12] = (undefined4) uStack160;
                puVar6[0x13] = uStack160._4_4_;
                puVar6[0x14] = (undefined4) local_98;
                puVar6[0x15] = local_98._4_4_;
                puVar6[0x16] = uStack144;
                puVar6[0x17] = uStack140;
                puVar6[0x18] = local_88;
                puVar6[0x19] = uStack132;
                puVar6[0x1a] = uStack128;
                puVar6[0x1b] = uStack124;
                FUN_14003d8f0(&local_170);
                lVar4 = (**(code * *)(*plVar1 + 0x20))(plVar1);
                lVar4 = lVar4 + 0x70;
                if ((uint) local_148 != 0) {
                    local_124 = iStack204;
                    puVar11 = &DAT_140ae5200 + (longlong) iStack204 * 0x2c;
                    local_f0 = (int *) (&DAT_140ae5224 + (longlong) iStack204 * 0x2c);
                    local_110 = puVar11;
                    do {
                        local_148._0_4_ = (uint) local_148 - 1;
                        local_148 = (longlong * )
                                ((ulonglong) local_148 & 0xffffffff00000000 | (ulonglong)(uint)
                        local_148);
                        bVar7 = (byte)(uint)
                        local_148;
                        local_130 = (local_154 >> (bVar7 & 0x1f)) + (uint)(local_154 >> (bVar7 & 0x1f) == 0);
                        local_12c = (local_158 >> (bVar7 & 0x1f)) + (uint)(local_158 >> (bVar7 & 0x1f) == 0);
                        local_138 = (local_14c >> (bVar7 & 0x1f)) + (uint)(local_14c >> (bVar7 & 0x1f) == 0);
                        uVar8 = ((uint)(*(int *) (puVar11 + 4) + local_130) >>
                                                                            ((byte) * (undefined4 * )(puVar11 + 8) &
                                                                             0x1f)) * *local_f0 + 3;
                        iVar2 = ((uint)(*(int *) (puVar11 + 0x10) + local_12c) >>
                                                                               ((byte) *
                                                                                (undefined4 * )(puVar11 + 0x14) &
                                                                                0x1f)) * (uVar8 & 0xfffffffc);
                        local_168 = CONCAT44(iVar2, uVar8) & 0xfffffffffffffffc;
                        local_140 = ((uint)(*(int *) (puVar11 + 0x1c) + local_138) >>
                                                                                   ((byte) *
                                                                                    (undefined4 * )(puVar11 + 0x20) &
                                                                                    0x1f)) * iVar2;
                        local_160 = local_160 & 0xffffffff00000000 | (ulonglong) local_140;
                        local_128 = local_138;
                        uVar8 = 0;
                        if (local_70._4_4_ != 0) {
                            do {
                                local_180 = local_108;
                                local_188 = (int *) ((ulonglong) local_188 & 0xffffffff00000000);
                                iVar2 = (**(code * *)(**(longlong * *)(param_1 + 0x18d0) + 0x70))
                                        (*(longlong * *)(param_1 + 0x18d0), local_178, (uint) local_148, 1);
                                puVar11 = local_110;
                                if (iVar2 < 0) {
                                    FUN_14003d880(&local_170);
                                    goto LAB_14027a9fa;
                                }
                                local_120 = local_100;
                                local_11c = local_fc;
                                local_118 = ((uint)(*(int *) (local_110 + 0x1c) + local_138) >>
                                                                                             ((byte) * (undefined4 * )(
                                                                                                     local_110 + 0x20) &
                                                                                              0x1f)) * local_fc;
                                local_180 = &local_120;
                                local_188 = &local_130;
                                FUN_1402645d0(lVar4, &local_130);
                                (**(code * *)(**(longlong * *)(param_1 + 0x18d0) + 0x78))();
                                local_148._0_4_ = (uint) local_148 + local_150;
                                uVar8 = uVar8 + 1;
                                lVar4 = lVar4 + (ulonglong) local_140;
                            } while (uVar8 < uStack212);
                            local_70._4_4_ = uStack212;
                        }
                    } while ((uint) local_148 != 0);
                }
                FUN_14003d880(&local_170);
                iVar2 = FUN_1401b6f30();
                if (-1 < iVar2) {
                    (**(code * *)(*plVar1 + 8))(plVar1);
                    if (local_178 != (longlong *) 0x0) {
                        (**(code * *)(*local_178 + 0x10))();
                    }
                    goto LAB_14027a2f4;
                }
            }
            LAB_14027a9fa:
            if (plVar1 != (longlong *) 0x0) {
                (**(code * *)(*plVar1 + 8))(plVar1);
            }
        } else if (local_13c == 4) {
            (**(code * *)(*param_3 + 0x50))(param_3, &local_78);
            local_154 = (uint) local_78;
            local_150 = local_70._4_4_;
            local_158 = local_78._4_4_;
            uStack224 = local_78;
            uStack212 = 1;
            uStack208 = local_70._4_4_;
            local_14c = (uint) local_70;
            local_d8 = (uint) local_70;
            iStack204 = FUN_14027a000(local_68);
            local_148._0_4_ = local_70._4_4_;
            local_70._4_4_ = 1;
            if (iStack100 == 3) goto LAB_14027a74e;
            iStack100 = 3;
            local_60 = 0;
            iStack92 = 0x20000;
            local_58 = 0;
            iVar2 = (**(code * *)(**(longlong * *)(param_1 + 0x18c0) + 0x30))
                    (*(longlong * *)(param_1 + 0x18c0), &local_78, 0);
            if (-1 < iVar2) goto LAB_14027a712;
            local_170 = 0x141de2c18;
            LAB_14027a6f3:
            FUN_1401a3130(0xe, 2, &local_170, iVar2);
        }
        if (local_178 != (longlong *) 0x0) {
            (**(code * *)(*local_178 + 0x10))(local_178);
        }
        goto LAB_14027a2f4;
    }
    iVar2 = FUN_14018e2c0(lVar4, L".tga");
    if (iVar2 == 0) {
        iVar2 = 1;
    } else {
        iVar2 = FUN_14018e2c0(lVar4, L".dds");
        if (iVar2 == 0) {
            iVar2 = 2;
        } else {
            iVar2 = FUN_14018e2c0(lVar4, L".png");
            if (iVar2 == 0) {
                iVar2 = 3;
            } else {
                iVar2 = FUN_14018e2c0(lVar4, L".bmp");
                if (iVar2 == 0) {
                    iVar2 = 4;
                } else {
                    iVar2 = FUN_14018e2c0(lVar4, L".jpg");
                    if ((iVar2 != 0) && (iVar2 = FUN_14018e2c0(lVar4, L".jpeg"), iVar2 != 0))
                        goto LAB_14027a2f4;
                    iVar2 = 5;
                }
            }
        }
    }
    uVar9 = 0;
    local_168 = 0;
    local_160 = 0;
    FUN_14003d8f0(&local_178, param_1 + 0x18e0);
    local_e8 = 0;
    uStack224 = 0;
    puVar10 = (undefined8 *) 0x0;
    uStack160 = (undefined8 *) 0x0;
    local_98 = 0;
    if ((*(longlong * )(param_1 + 0x18c0) == 0) ||
        (iVar3 = FUN_1402b40b0(*(longlong * )(param_1 + 0x18c0), *(undefined8 * )(param_1 + 0x18d0),
                               param_3, &local_e8), puVar10 = uStack160, iVar3 < 0)) {
        LAB_14027a535:
        if (puVar10 != (undefined8 *) 0x0) {
            FUN_14018b900(puVar10, 0);
        }
        if (local_98 != 0) {
            FUN_14018b900(local_98, 0);
        }
        FUN_14003d880(&local_178);
    } else {
        if (iVar2 == 1) {
            if (uStack160[5] == 0) goto LAB_14027a535;
            iVar2 = FUN_1402b5460(uStack160, &local_168);
            uVar9 = local_160;
            joined_r0x00014027a3f5:
            local_160 = uVar9;
            if (iVar2 < 0) goto LAB_14027a535;
        } else {
            if (iVar2 == 2) {
                local_50 = 0;
                uStack76 = 0;
                local_78 = *uStack160;
                local_70 = uStack160[1];
                local_68 = 1;
                iStack100 = 0;
                local_60 = 1;
                iStack92 = 0;
                local_58 = 1;
                uStack84 = 0;
                local_48 = CONCAT44(3, *(undefined4 * )(uStack160 + 2));
                iVar2 = FUN_1402b6eb0(uStack160, &local_78, &local_168);
                uVar9 = local_160;
                goto joined_r0x00014027a3f5;
            }
            if (iVar2 == 3) {
                uVar5 = FUN_1402b2280(2);
                lVar4 = puVar10[5];
                joined_r0x00014027a3bb:
                if (lVar4 == 0) goto LAB_14027a535;
                iVar2 = FUN_1402b7ed0(puVar10, uVar5, &local_168);
                uVar9 = local_160;
                goto joined_r0x00014027a3f5;
            }
            if (iVar2 == 4) {
                uVar5 = FUN_1402b2280(0);
                lVar4 = puVar10[5];
                goto joined_r0x00014027a3bb;
            }
            if (iVar2 == 5) {
                uVar5 = FUN_1402b2280(1);
                lVar4 = puVar10[5];
                goto joined_r0x00014027a3bb;
            }
        }
        if (puVar10 != (undefined8 *) 0x0) {
            FUN_14018b900(puVar10, 0);
        }
        if (local_98 != 0) {
            FUN_14018b900(local_98, 0);
        }
        FUN_14003d880(&local_178);
        local_178 = (longlong *) 0x0;
        iVar2 = FUN_1401c5810(local_168, uVar9, &local_178);
        plVar1 = local_178;
        if ((-1 < iVar2) && (iVar2 = FUN_1401b6f30(), -1 < iVar2)) {
            if (plVar1 != (longlong *) 0x0) {
                (**(code * *)(*plVar1 + 8))(plVar1);
            }
            if (local_168 != 0) {
                FUN_14018b900(local_168, 0);
            }
            goto LAB_14027a2f4;
        }
        if (plVar1 != (longlong *) 0x0) {
            (**(code * *)(*plVar1 + 8))(plVar1);
        }
    }
    if (local_168 != 0) {
        FUN_14018b900(local_168, 0);
    }
    LAB_14027a2f4:
    FUN_1407db4f0(local_40 ^ (ulonglong) auStack424);
    return;
}


int FUN_14027ace0(undefined8 param_1, undefined8 param_2, undefined8 *param_3) {
    int iVar1;
    undefined8 *puVar2;

    if (param_3 != (undefined8 *) 0x0) {
        puVar2 = (undefined8 *) FUN_14018b280(0xb0, 0);
        if (puVar2 != (undefined8 *) 0x0) {
            *puVar2 = &PTR_LAB_140b61c70;
            puVar2[0xb] = 0;
            puVar2[0xc] = 0;
            puVar2[0xd] = 0;
            puVar2[0xe] = 0;
            puVar2[0x10] = 0;
            puVar2[0x11] = 0;
            puVar2[0x14] = 0;
            puVar2[0x15] = 0;
            *(undefined4 * )(puVar2 + 1) = 1;
            puVar2[2] = param_1;
            puVar2[8] = 0;
        }
        iVar1 = FUN_14029d130(puVar2, param_2);
        if (iVar1 < 0) {
            if (puVar2 != (undefined8 *) 0x0) {
                FUN_14029cf70(puVar2);
                FUN_14018b900(puVar2, 0);
            }
        } else {
            *param_3 = puVar2;
            iVar1 = 0;
        }
        return iVar1;
    }
    return -0x7ff8ffa9;
}


int FUN_14027adc0(longlong param_1, undefined4 param_2, undefined4 param_3, undefined8 *param_4) {
    int iVar1;
    undefined8 *puVar2;

    if (param_4 == (undefined8 *) 0x0) {
        iVar1 = -0x7ff8ffa9;
    } else {
        puVar2 = (undefined8 *) FUN_14018b280(0x58);
        if (puVar2 != (undefined8 *) 0x0) {
            *puVar2 = &PTR_LAB_140b61ca0;
            puVar2[9] = 0;
            puVar2[10] = 0;
            *(undefined4 * )(puVar2 + 6) = 0;
            puVar2[4] = 0;
            puVar2[5] = 0;
            *(undefined4 * )(puVar2 + 8) = 0;
            *(undefined4 * )(puVar2 + 1) = 1;
            puVar2[2] = param_1;
            *(int *) ((longlong) puVar2 + 0x44) = *(int *) (param_1 + 0xf0) + -1;
        }
        iVar1 = FUN_14029e630(puVar2, param_2, param_3);
        if (iVar1 < 0) {
            if (puVar2 != (undefined8 *) 0x0) {
                FUN_14029e4a0(puVar2);
                FUN_14018b900(puVar2, 0);
            }
        } else {
            *param_4 = puVar2;
            iVar1 = 0;
        }
    }
    return iVar1;
}


int FUN_14027aea0(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4,
                  undefined8 *param_5) {
    int iVar1;
    undefined8 *puVar2;

    if (param_5 == (undefined8 *) 0x0) {
        iVar1 = -0x7ff8ffa9;
    } else {
        puVar2 = (undefined8 *) FUN_14018b280(0x60);
        if (puVar2 != (undefined8 *) 0x0) {
            *puVar2 = &PTR_LAB_140b61cf0;
            puVar2[10] = 0;
            puVar2[0xb] = 0;
            *(undefined4 * )((longlong) puVar2 + 0x24) = 0;
            puVar2[5] = 0;
            puVar2[6] = 0;
            *(undefined4 * )((longlong) puVar2 + 0x44) = 0;
            *(undefined4 * )(puVar2 + 1) = 1;
            puVar2[2] = param_1;
            *(int *) (puVar2 + 9) = *(int *) (param_1 + 0xf0) + -1;
        }
        iVar1 = FUN_14029f460(puVar2, param_2, param_3, param_4);
        if (iVar1 < 0) {
            if (puVar2 != (undefined8 *) 0x0) {
                FUN_14029f2d0(puVar2);
                FUN_14018b900(puVar2, 0);
            }
        } else {
            *param_5 = puVar2;
            iVar1 = 0;
        }
    }
    return iVar1;
}


int FUN_14027b1d0(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4,
                  undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
                  undefined4 param_9, ulonglong *param_10) {
    DWORD *pDVar1;
    ulonglong uVar2;
    DWORD DVar3;
    int iVar4;
    longlong lVar5;
    ulonglong uVar6;
    HANDLE hObject;
    ulonglong uVar7;
    ulonglong *puVar8;

    if (param_10 == (ulonglong *) 0x0) {
        iVar4 = -0x7ff8ffa9;
    } else {
        pDVar1 = (DWORD * )(param_1 + 0x18);
        DVar3 = GetCurrentThreadId();
        uVar6 = 0;
        puVar8 = (ulonglong * )(param_1 + 0x20);
        uVar7 = uVar6;
        if (*pDVar1 == DVar3) {
            *puVar8 = *puVar8 + 1;
        } else {
            do {
                LOCK();
                uVar2 = *puVar8;
                *puVar8 = *puVar8 ^ (ulonglong)(uVar2 == 0) * (*puVar8 ^ 1);
                if (uVar2 == 0) {
                    *pDVar1 = DVar3;
                    goto LAB_14027b277;
                }
                uVar7 = uVar7 + 1;
            } while (uVar7 < 0x400);
            FUN_14019fb60(pDVar1);
        }
        LAB_14027b277:
        lVar5 = FUN_14018b280(0x140, 0);
        if (lVar5 != 0) {
            uVar6 = FUN_1402a0110(lVar5, param_1);
        }
        iVar4 = FUN_1402a0570(uVar6, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9);
        if (iVar4 < 0) {
            if (uVar6 != 0) {
                FUN_1402a0210(uVar6);
                FUN_14018b900(uVar6, 0);
            }
        } else {
            *param_10 = uVar6;
            iVar4 = 0;
        }
        if (*puVar8 < 2) {
            *pDVar1 = 0;
            *puVar8 = 0;
            if (*(longlong * )(param_1 + 0x28) != 0) {
                if (*(longlong * )(param_1 + 0x30) == 0) {
                    hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                    LOCK();
                    puVar8 = (ulonglong * )(param_1 + 0x30);
                    uVar7 = *puVar8;
                    *puVar8 = *puVar8 ^ (ulonglong)(uVar7 == 0) * (*puVar8 ^ (ulonglong) hObject);
                    if (uVar7 != 0) {
                        CloseHandle(hObject);
                    }
                }
                SetEvent(*(HANDLE * )(param_1 + 0x30));
            }
        } else {
            *puVar8 = *puVar8 - 1;
        }
    }
    return iVar4;
}


int FUN_14027b5e0(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4,
                  undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
                  undefined4 param_9, undefined4 param_10, ulonglong *param_11) {
    DWORD *pDVar1;
    ulonglong uVar2;
    DWORD DVar3;
    int iVar4;
    longlong lVar5;
    ulonglong uVar6;
    HANDLE hObject;
    ulonglong uVar7;
    ulonglong *puVar8;

    if (param_11 == (ulonglong *) 0x0) {
        iVar4 = -0x7ff8ffa9;
    } else {
        pDVar1 = (DWORD * )(param_1 + 0x18);
        DVar3 = GetCurrentThreadId();
        uVar6 = 0;
        puVar8 = (ulonglong * )(param_1 + 0x20);
        uVar7 = uVar6;
        if (*pDVar1 == DVar3) {
            *puVar8 = *puVar8 + 1;
        } else {
            do {
                LOCK();
                uVar2 = *puVar8;
                *puVar8 = *puVar8 ^ (ulonglong)(uVar2 == 0) * (*puVar8 ^ 1);
                if (uVar2 == 0) {
                    *pDVar1 = DVar3;
                    goto LAB_14027b687;
                }
                uVar7 = uVar7 + 1;
            } while (uVar7 < 0x400);
            FUN_14019fb60(pDVar1);
        }
        LAB_14027b687:
        lVar5 = FUN_14018b280(0x128, 0);
        if (lVar5 != 0) {
            uVar6 = FUN_1402a3490(lVar5, param_1);
        }
        iVar4 = FUN_1402a3890(uVar6, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9,
                              param_10);
        if (iVar4 < 0) {
            if (uVar6 != 0) {
                FUN_1402a3570(uVar6);
                FUN_14018b900(uVar6, 0);
            }
        } else {
            *param_11 = uVar6;
            iVar4 = 0;
        }
        if (*puVar8 < 2) {
            *pDVar1 = 0;
            *puVar8 = 0;
            if (*(longlong * )(param_1 + 0x28) != 0) {
                if (*(longlong * )(param_1 + 0x30) == 0) {
                    hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                    LOCK();
                    puVar8 = (ulonglong * )(param_1 + 0x30);
                    uVar7 = *puVar8;
                    *puVar8 = *puVar8 ^ (ulonglong)(uVar7 == 0) * (*puVar8 ^ (ulonglong) hObject);
                    if (uVar7 != 0) {
                        CloseHandle(hObject);
                    }
                }
                SetEvent(*(HANDLE * )(param_1 + 0x30));
            }
        } else {
            *puVar8 = *puVar8 - 1;
        }
    }
    return iVar4;
}


int FUN_14027bab0(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4,
                  undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
                  ulonglong *param_9) {
    DWORD *pDVar1;
    ulonglong uVar2;
    DWORD DVar3;
    int iVar4;
    longlong lVar5;
    ulonglong uVar6;
    HANDLE hObject;
    ulonglong uVar7;
    ulonglong *puVar8;

    if (param_9 == (ulonglong *) 0x0) {
        iVar4 = -0x7ff8ffa9;
    } else {
        pDVar1 = (DWORD * )(param_1 + 0x18);
        DVar3 = GetCurrentThreadId();
        uVar6 = 0;
        puVar8 = (ulonglong * )(param_1 + 0x20);
        uVar7 = uVar6;
        if (*pDVar1 == DVar3) {
            *puVar8 = *puVar8 + 1;
        } else {
            do {
                LOCK();
                uVar2 = *puVar8;
                *puVar8 = *puVar8 ^ (ulonglong)(uVar2 == 0) * (*puVar8 ^ 1);
                if (uVar2 == 0) {
                    *pDVar1 = DVar3;
                    goto LAB_14027bb57;
                }
                uVar7 = uVar7 + 1;
            } while (uVar7 < 0x400);
            FUN_14019fb60(pDVar1);
        }
        LAB_14027bb57:
        lVar5 = FUN_14018b280(0x248, 0);
        if (lVar5 != 0) {
            uVar6 = FUN_1402a5fb0(lVar5, param_1);
        }
        iVar4 = FUN_1402a6550(uVar6, param_2, param_3, param_4, param_5, param_6, param_7, param_8);
        if (iVar4 < 0) {
            if (uVar6 != 0) {
                FUN_1402a61a0(uVar6);
                FUN_14018b900(uVar6, 0);
            }
        } else {
            *param_9 = uVar6;
            iVar4 = 0;
        }
        if (*puVar8 < 2) {
            *pDVar1 = 0;
            *puVar8 = 0;
            if (*(longlong * )(param_1 + 0x28) != 0) {
                if (*(longlong * )(param_1 + 0x30) == 0) {
                    hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                    LOCK();
                    puVar8 = (ulonglong * )(param_1 + 0x30);
                    uVar7 = *puVar8;
                    *puVar8 = *puVar8 ^ (ulonglong)(uVar7 == 0) * (*puVar8 ^ (ulonglong) hObject);
                    if (uVar7 != 0) {
                        CloseHandle(hObject);
                    }
                }
                SetEvent(*(HANDLE * )(param_1 + 0x30));
            }
        } else {
            *puVar8 = *puVar8 - 1;
        }
    }
    return iVar4;
}


int FUN_14027c740(undefined8 param_1, undefined8 *param_2) {
    int iVar1;
    undefined8 *puVar2;

    if (param_2 == (undefined8 *) 0x0) {
        return -0x7ff8ffa9;
    }
    puVar2 = (undefined8 *) FUN_14018b280(0x40);
    if (puVar2 != (undefined8 *) 0x0) {
        *puVar2 = &PTR_LAB_140b61f60;
        puVar2[6] = 0;
        puVar2[7] = 0;
        *(undefined4 * )(puVar2 + 1) = 1;
        puVar2[2] = param_1;
        *(undefined4 * )(puVar2 + 3) = 0;
        puVar2[4] = 0;
        *(undefined4 * )(puVar2 + 5) = 0;
    }
    iVar1 = FUN_1402aba90(puVar2);
    if (-1 < iVar1) {
        *param_2 = puVar2;
        return 0;
    }
    if (puVar2 != (undefined8 *) 0x0) {
        FUN_1402ab940(puVar2);
        FUN_14018b900(puVar2, 0);
    }
    return iVar1;
}


int FUN_14027c800(undefined8 param_1, undefined8 *param_2) {
    int iVar1;
    undefined8 *puVar2;

    if (param_2 == (undefined8 *) 0x0) {
        return -0x7ff8ffa9;
    }
    puVar2 = (undefined8 *) FUN_14018b280(0x38);
    if (puVar2 != (undefined8 *) 0x0) {
        *puVar2 = &PTR_LAB_140b61f90;
        puVar2[5] = 0;
        puVar2[6] = 0;
        *(undefined4 * )(puVar2 + 1) = 1;
        puVar2[2] = param_1;
        *(undefined4 * )(puVar2 + 3) = 0;
        puVar2[4] = 0;
    }
    iVar1 = FUN_1402ac1b0(puVar2);
    if (-1 < iVar1) {
        *param_2 = puVar2;
        return 0;
    }
    if (puVar2 != (undefined8 *) 0x0) {
        FUN_1402ac060(puVar2);
        FUN_14018b900(puVar2, 0);
    }
    return iVar1;
}


undefined8 FUN_14027c8c0(undefined8 param_1, undefined8 *param_2) {
    longlong lVar1;
    undefined8 uVar2;

    if (param_2 == (undefined8 *) 0x0) {
        return 0x80070057;
    }
    lVar1 = FUN_14018b280(0x100, 0);
    if (lVar1 != 0) {
        uVar2 = FUN_1402ac610(lVar1, param_1);
        *param_2 = uVar2;
        return 0;
    }
    *param_2 = 0;
    return 0;
}


int FUN_14027c930(longlong param_1, longlong **param_2, undefined4 *param_3) {
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    int iVar4;
    longlong *plVar5;

    if (param_2 == (longlong **) 0x0) {
        return -0x7ff8ffa9;
    }
    plVar5 = (longlong *) FUN_14018b280(0x80, 0);
    if (plVar5 == (longlong *) 0x0) {
        plVar5 = (longlong *) 0x0;
    } else {
        *plVar5 = (longlong) & PTR_LAB_140b61fb8;
        plVar5[1] = 0;
        plVar5[2] = 0;
        *(undefined4 * )(plVar5 + 3) = 1;
        plVar5[4] = param_1;
        *(undefined4 * )(plVar5 + 5) = 0;
        *(undefined4 * )(plVar5 + 6) = *param_3;
        *(undefined4 * )((longlong) plVar5 + 0x34) = param_3[1];
        *(undefined4 * )(plVar5 + 7) = param_3[2];
        *(undefined4 * )((longlong) plVar5 + 0x3c) = param_3[3];
        *(undefined4 * )(plVar5 + 8) = param_3[4];
        *(undefined4 * )((longlong) plVar5 + 0x44) = param_3[5];
        *(undefined4 * )(plVar5 + 9) = param_3[6];
        *(undefined4 * )((longlong) plVar5 + 0x4c) = param_3[7];
        *(undefined4 * )(plVar5 + 10) = param_3[8];
        uVar1 = param_3[0xd];
        uVar2 = param_3[0xe];
        uVar3 = param_3[0xf];
        *(undefined4 * )(plVar5 + 0xc) = param_3[0xc];
        *(undefined4 * )((longlong) plVar5 + 100) = uVar1;
        *(undefined4 * )(plVar5 + 0xd) = uVar2;
        *(undefined4 * )((longlong) plVar5 + 0x6c) = uVar3;
        plVar5[0xe] = 0;
        (**(code * *) * plVar5)(plVar5);
    }
    iVar4 = FUN_1402ac990(plVar5);
    if (-1 < iVar4) {
        *param_2 = plVar5;
        iVar4 = 0;
    }
    if (plVar5 != (longlong *) 0x0) {
        (**(code * *)(*plVar5 + 8))(plVar5);
    }
    return iVar4;
}


undefined8 FUN_14027ca40(longlong param_1, undefined8 param_2) {
    ulonglong *puVar1;
    ulonglong uVar2;
    longlong *plVar3;
    DWORD DVar4;
    int iVar5;
    longlong lVar6;
    HANDLE hObject;
    ulonglong uVar7;

    DVar4 = GetCurrentThreadId();
    uVar7 = 0;
    if (*(DWORD * )(param_1 + 0x18) == DVar4) {
        *(longlong * )(param_1 + 0x20) = *(longlong * )(param_1 + 0x20) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(param_1 + 0x20);
            uVar2 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar2 == 0) * (*puVar1 ^ 1);
            if (uVar2 == 0) {
                *(DWORD * )(param_1 + 0x18) = DVar4;
                goto LAB_14027caa9;
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < 0x400);
        FUN_14019fb60(param_1 + 0x18);
    }
    LAB_14027caa9:
    for (plVar3 = *(longlong * *)(param_1 + 0x1ac8); plVar3 != (longlong *) 0x0;
         plVar3 = (longlong *) plVar3[0x25]) {
        lVar6 = (**(code * *)(*plVar3 + 0x18))(plVar3);
        if ((*(longlong * )(lVar6 + 0x30) != 0) && (iVar5 = FUN_14018e2c0(param_2), iVar5 == 0)) {
            FUN_1402a10f0(plVar3);
        }
    }
    for (plVar3 = *(longlong * *)(param_1 + 0x1ad0); plVar3 != (longlong *) 0x0;
         plVar3 = (longlong *) plVar3[0x24]) {
        lVar6 = (**(code * *)(*plVar3 + 0x18))(plVar3);
        if ((*(longlong * )(lVar6 + 0x30) != 0) && (iVar5 = FUN_14018e2c0(param_2), iVar5 == 0)) {
            FUN_1402a43a0(plVar3);
        }
    }
    for (plVar3 = *(longlong * *)(param_1 + 0x1ad8); plVar3 != (longlong *) 0x0;
         plVar3 = (longlong *) plVar3[0x48]) {
        lVar6 = (**(code * *)(*plVar3 + 0x18))(plVar3);
        if ((*(longlong * )(lVar6 + 0x30) != 0) && (iVar5 = FUN_14018e2c0(param_2), iVar5 == 0)) {
            FUN_1402a70c0(plVar3);
        }
    }
    for (plVar3 = *(longlong * *)(param_1 + 0x1ae0); plVar3 != (longlong *) 0x0;
         plVar3 = (longlong *) plVar3[0x14]) {
        lVar6 = (**(code * *)(*plVar3 + 0x18))(plVar3);
        if ((*(longlong * )(lVar6 + 8) != 0) && (iVar5 = FUN_14018e2c0(param_2), iVar5 == 0)) {
            FUN_1402a9970(plVar3);
        }
    }
    for (plVar3 = *(longlong * *)(param_1 + 0x1ae8); plVar3 != (longlong *) 0x0;
         plVar3 = (longlong *) plVar3[0x13]) {
        lVar6 = (**(code * *)(*plVar3 + 0x18))(plVar3);
        if ((*(longlong * )(lVar6 + 8) != 0) && (iVar5 = FUN_14018e2c0(param_2), iVar5 == 0)) {
            FUN_1402aa730(plVar3);
        }
    }
    if (*(ulonglong * )(param_1 + 0x20) < 2) {
        *(undefined4 * )(param_1 + 0x18) = 0;
        *(undefined8 * )(param_1 + 0x20) = 0;
        if (*(longlong * )(param_1 + 0x28) != 0) {
            if (*(longlong * )(param_1 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(param_1 + 0x30);
                uVar7 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar7 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar7 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(param_1 + 0x30));
        }
    } else {
        *(longlong * )(param_1 + 0x20) = *(longlong * )(param_1 + 0x20) + -1;
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

longlong FUN_14027cc60(longlong param_1, uint param_2, int param_3, ulonglong param_4) {
    int iVar1;
    uint uVar2;
    longlong lVar3;
    uint uVar4;
    undefined local_b8[8];
    undefined **local_b0;
    undefined8 local_a8;
    LPVOID local_a0;
    undefined **local_98;
    undefined8 uStack144;
    undefined8 local_88;
    int iStack128;
    undefined4 uStack124;
    undefined8 local_78;
    undefined local_70[8];
    undefined **local_68;
    undefined8 local_60;
    LPVOID local_58;
    longlong local_48[2];
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 uStack44;
    undefined4 local_28;
    undefined4 uStack36;
    int iStack32;
    undefined4 uStack28;

    if ((param_2 == 0) ||
        (*(uint * )(param_1 + 0x1fc8) <= param_2 && param_2 != *(uint * )(param_1 + 0x1fc8))) {
        lVar3 = 0;
    } else {
        uVar4 = (uint)(param_4 & 0xffffffff);
        if ((uVar4 < 0x10) &&
            (*(int *) (param_1 + 0x4a4 + ((longlong) param_3 * 0x36 + (param_4 & 0xffffffff)) * 4) != 0)) {
            FUN_14003d8f0(local_70, param_1 + 0x18);
            lVar3 = 0;
            uVar2 = *(int *) (param_1 + 0x1fc4) + param_2;
            if ((*(uint * )(param_1 + 0x1fc8) <= uVar2 && uVar2 != *(uint * )(param_1 + 0x1fc8)) ||
                (*(int *) (param_1 + 0x1fcc) != *(int *) (param_1 + 0xf0))) {
                *(undefined4 * )(param_1 + 0x1fc4) = 0;
            }
            FUN_14003d8f0(local_b8, param_1 + 0x18e0);
            iVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x18d0) + 0x70))
                    (*(longlong * *)(param_1 + 0x18d0), *(undefined8 * )(param_1 + 0x1fb0), 0,
                     (*(int *) (param_1 + 0x1fc4) != 0) + '\x04', 0, local_48);
            if (iVar1 < 0) {
                local_98 = &PTR_LAB_140b5e648;
                uStack144 = L"Result";
                local_88 = TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720, &local_98);
                local_98 = &PTR_LAB_140b5e640;
                local_38 = 0x40b5e640;
                uStack52 = 1;
                uStack48 = (undefined4) uStack144;
                uStack44 = uStack144._4_4_;
                local_28 = (undefined4) local_88;
                uStack36 = local_88._4_4_;
                uStack28 = uStack124;
                iStack128 = iVar1;
                iStack32 = iVar1;
                FUN_1400035b0(0xe, 0, 0, &local_38);
                local_98 = &PTR_LAB_140b5e648;
                TlsSetValue(DAT_140c63720, (LPVOID) CONCAT44(local_88._4_4_, (undefined4) local_88));
                FUN_14003d880(local_b8);
            } else {
                FUN_14003d880();
                *(int *) (param_1 + 0x1fc0) = *(int *) (param_1 + 0x1fc4);
                *(int *) (param_1 + 0x1fb8) = param_3;
                *(uint * )(param_1 + 0x1fbc) = uVar4;
                *(undefined4 * )(param_1 + 0x1fcc) = *(undefined4 * )(param_1 + 0xf0);
                *(uint * )(param_1 + 0x1fc4) = param_2 + 3 + *(int *) (param_1 + 0x1fc4) & 0xfffffffc;
                LOCK();
                *(int *) (param_1 + 0x204) = *(int *) (param_1 + 0x204) + 1;
                LOCK();
                *(int *) (param_1 + 0x208) = *(int *) (param_1 + 0x208) + param_2;
                LOCK();
                *(int *) (param_1 + 0x20c) = *(int *) (param_1 + 0x20c) + 1;
                LOCK();
                *(int *) (param_1 + 0x210) = *(int *) (param_1 + 0x210) + param_2;
                lVar3 = (ulonglong) * (uint * )(param_1 + 0x1fc0) + local_48[0];
            }
            FUN_14003d880(local_70);
        } else {
            local_b0 = &PTR_LAB_140b5e648;
            local_a8 = 0;
            local_a0 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_b0);
            local_68 = local_b0;
            local_78 = 0x141de2c30;
            local_58 = local_a0;
            local_60 = local_a8;
            iVar1 = FUN_1401971e0(&DAT_140c8a39c, 0xe, &local_78, &local_68);
            local_b0 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720, local_a0);
            if (iVar1 != 0) {
                DebugBreak();
            }
            lVar3 = 0;
        }
    }
    return lVar3;
}


void FUN_14027cf10(longlong param_1) {
    ulonglong *puVar1;
    DWORD *pDVar2;
    ulonglong uVar3;
    DWORD DVar4;
    HANDLE hObject;
    ulonglong uVar5;
    undefined4 local_res8[2];
    undefined4 local_res10[2];
    undefined8 local_res18;

    pDVar2 = (DWORD * )(param_1 + 0x18e0);
    DVar4 = GetCurrentThreadId();
    uVar5 = 0;
    if (*pDVar2 == DVar4) {
        *(longlong * )(param_1 + 0x18e8) = *(longlong * )(param_1 + 0x18e8) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(param_1 + 0x18e8);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
            if (uVar3 == 0) {
                *pDVar2 = DVar4;
                goto LAB_14027cf6b;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < 0x400);
        FUN_14019fb60(pDVar2, DVar4);
    }
    LAB_14027cf6b:
    (**(code * *)(**(longlong * *)(param_1 + 0x18d0) + 0x78))
            (*(longlong * *)(param_1 + 0x18d0), *(undefined8 * )(param_1 + 0x1fb0), 0);
    local_res18 = *(undefined8 * )(param_1 + 0x1fb0);
    local_res10[0] =
            *(undefined4 * )
                    (param_1 + 0x4a4 +
                     ((longlong) * (int *) (param_1 + 0x1fb8) * 0x36 + (ulonglong) * (uint * )(param_1 + 0x1fbc)) * 4);
    local_res8[0] = *(undefined4 * )(param_1 + 0x1fc0);
    (**(code * *)(**(longlong * *)(param_1 + 0x18d0) + 0x90))
            (*(longlong * *)(param_1 + 0x18d0), (ulonglong) * (uint * )(param_1 + 0x1fbc), 1, &local_res18,
             local_res10, local_res8);
    if (*(ulonglong * )(param_1 + 0x18e8) < 2) {
        *pDVar2 = 0;
        *(undefined8 * )(param_1 + 0x18e8) = 0;
        if (*(longlong * )(param_1 + 0x18f0) != 0) {
            if (*(longlong * )(param_1 + 0x18f8) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(param_1 + 0x18f8);
                uVar5 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar5 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar5 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(param_1 + 0x18f8));
        }
        return;
    }
    *(longlong * )(param_1 + 0x18e8) = *(longlong * )(param_1 + 0x18e8) + -1;
    return;
}


void FUN_14027d3d0(longlong param_1) {
    ulonglong *puVar1;
    DWORD *pDVar2;
    ulonglong uVar3;
    DWORD DVar4;
    HANDLE hObject;
    ulonglong uVar5;

    pDVar2 = (DWORD * )(param_1 + 0x18e0);
    DVar4 = GetCurrentThreadId();
    uVar5 = 0;
    if (*pDVar2 == DVar4) {
        *(longlong * )(param_1 + 0x18e8) = *(longlong * )(param_1 + 0x18e8) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(param_1 + 0x18e8);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
            if (uVar3 == 0) {
                *pDVar2 = DVar4;
                goto LAB_14027d438;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < 0x400);
        FUN_14019fb60(pDVar2, DVar4);
    }
    LAB_14027d438:
    (**(code * *)(**(longlong * *)(param_1 + 0x18d0) + 0x78))
            (*(longlong * *)(param_1 + 0x18d0), *(undefined8 * )(param_1 + 0x1fd0), 0);
    (**(code * *)(**(longlong * *)(param_1 + 0x18d0) + 0x98))
            (*(longlong * *)(param_1 + 0x18d0), *(undefined8 * )(param_1 + 0x1fd0),
             *(undefined4 * )(&DAT_140ae8000 + (longlong) * (int *) (param_1 + 0x1fd8) * 4),
             *(undefined4 * )(param_1 + 0x1fdc));
    if (*(ulonglong * )(param_1 + 0x18e8) < 2) {
        *pDVar2 = 0;
        *(undefined8 * )(param_1 + 0x18e8) = 0;
        if (*(longlong * )(param_1 + 0x18f0) != 0) {
            if (*(longlong * )(param_1 + 0x18f8) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(param_1 + 0x18f8);
                uVar5 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar5 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar5 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(param_1 + 0x18f8));
        }
        return;
    }
    *(longlong * )(param_1 + 0x18e8) = *(longlong * )(param_1 + 0x18e8) + -1;
    return;
}


void FUN_14027dd60(longlong param_1) {
    ulonglong *puVar1;
    DWORD *pDVar2;
    longlong lVar3;
    ulonglong uVar4;
    DWORD DVar5;
    HANDLE hObject;
    ulonglong uVar6;
    int *piVar7;
    undefined8 local_res8;
    undefined8 local_res10;
    undefined8 local_res18;

    if (*(uint * )(param_1 + 0x2098) < 0xd) {
        lVar3 = *(longlong * )(param_1 + 0x2030 + (ulonglong) * (uint * )(param_1 + 0x2098) * 8);
        if (lVar3 != 0) {
            pDVar2 = (DWORD * )(param_1 + 0x18e0);
            DVar5 = GetCurrentThreadId();
            uVar6 = 0;
            if (*pDVar2 == DVar5) {
                *(longlong * )(param_1 + 0x18e8) = *(longlong * )(param_1 + 0x18e8) + 1;
            } else {
                do {
                    LOCK();
                    puVar1 = (ulonglong * )(param_1 + 0x18e8);
                    uVar4 = *puVar1;
                    *puVar1 = *puVar1 ^ (ulonglong)(uVar4 == 0) * (*puVar1 ^ 1);
                    if (uVar4 == 0) {
                        *pDVar2 = DVar5;
                        goto LAB_14027dde6;
                    }
                    uVar6 = uVar6 + 1;
                } while (uVar6 < 0x400);
                FUN_14019fb60(pDVar2);
            }
            LAB_14027dde6:
            (**(code * *)(**(longlong * *)(param_1 + 0x18d0) + 0x78))
                    (*(longlong * *)(param_1 + 0x18d0), *(undefined8 * )(lVar3 + 0x18), 0);
            if (*(int *) (param_1 + 0x1924) == 0) {
                local_res18 = *(undefined8 * )(lVar3 + 0x18);
                (**(code * *)(**(longlong * *)(param_1 + 0x18d0) + 0x38))
                        (*(longlong * *)(param_1 + 0x18d0), *(undefined4 * )(param_1 + 0x2098), 1, &local_res18
                        );
            } else {
                if (*(int *) (param_1 + 0x1940) == 0) {
                    local_res8 = 0;
                    (**(code * *)(**(longlong * *)(param_1 + 0x18d0) + 0x38))
                            (*(longlong * *)(param_1 + 0x18d0), *(undefined4 * )(param_1 + 0x2098), 1,
                             &local_res8);
                }
                local_res10 = *(undefined8 * )(lVar3 + 0x18);
                piVar7 = (int *) (lVar3 + 8);
                (**(code * *)(**(longlong * *)(param_1 + 0x18d8) + 0x3b8))
                        (*(longlong * *)(param_1 + 0x18d8), *(undefined4 * )(param_1 + 0x2098), 1, &local_res10, piVar7,
                         (int *) (lVar3 + 0xc));
                *piVar7 = *piVar7 + *(int *) (lVar3 + 0xc);
            }
            if (*(ulonglong * )(param_1 + 0x18e8) < 2) {
                *pDVar2 = 0;
                *(undefined8 * )(param_1 + 0x18e8) = 0;
                if (*(longlong * )(param_1 + 0x18f0) != 0) {
                    if (*(longlong * )(param_1 + 0x18f8) == 0) {
                        hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                        LOCK();
                        puVar1 = (ulonglong * )(param_1 + 0x18f8);
                        uVar6 = *puVar1;
                        *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ (ulonglong) hObject);
                        if (uVar6 != 0) {
                            CloseHandle(hObject);
                        }
                    }
                    SetEvent(*(HANDLE * )(param_1 + 0x18f8));
                }
            } else {
                *(longlong * )(param_1 + 0x18e8) = *(longlong * )(param_1 + 0x18e8) + -1;
            }
        }
        *(undefined4 * )(param_1 + 0x2098) = 0xffffffff;
    }
    return;
}


void FUN_14027e770(longlong param_1) {
    ulonglong *puVar1;
    DWORD *pDVar2;
    longlong lVar3;
    ulonglong uVar4;
    DWORD DVar5;
    HANDLE hObject;
    ulonglong uVar6;
    int *piVar7;
    undefined8 local_res8;
    undefined8 local_res10;
    undefined8 local_res18;

    if (*(uint * )(param_1 + 0x2108) < 0xd) {
        lVar3 = *(longlong * )(param_1 + 0x20a0 + (ulonglong) * (uint * )(param_1 + 0x2108) * 8);
        if (lVar3 != 0) {
            pDVar2 = (DWORD * )(param_1 + 0x18e0);
            DVar5 = GetCurrentThreadId();
            uVar6 = 0;
            if (*pDVar2 == DVar5) {
                *(longlong * )(param_1 + 0x18e8) = *(longlong * )(param_1 + 0x18e8) + 1;
            } else {
                do {
                    LOCK();
                    puVar1 = (ulonglong * )(param_1 + 0x18e8);
                    uVar4 = *puVar1;
                    *puVar1 = *puVar1 ^ (ulonglong)(uVar4 == 0) * (*puVar1 ^ 1);
                    if (uVar4 == 0) {
                        *pDVar2 = DVar5;
                        goto LAB_14027e7f6;
                    }
                    uVar6 = uVar6 + 1;
                } while (uVar6 < 0x400);
                FUN_14019fb60(pDVar2);
            }
            LAB_14027e7f6:
            (**(code * *)(**(longlong * *)(param_1 + 0x18d0) + 0x78))
                    (*(longlong * *)(param_1 + 0x18d0), *(undefined8 * )(lVar3 + 0x18), 0);
            if (*(int *) (param_1 + 0x1924) == 0) {
                local_res18 = *(undefined8 * )(lVar3 + 0x18);
                (**(code * *)(**(longlong * *)(param_1 + 0x18d0) + 0x80))
                        (*(longlong * *)(param_1 + 0x18d0), *(undefined4 * )(param_1 + 0x2108), 1, &local_res18
                        );
            } else {
                if (*(int *) (param_1 + 0x1940) == 0) {
                    local_res8 = 0;
                    (**(code * *)(**(longlong * *)(param_1 + 0x18d0) + 0x80))
                            (*(longlong * *)(param_1 + 0x18d0), *(undefined4 * )(param_1 + 0x2108), 1,
                             &local_res8);
                }
                local_res10 = *(undefined8 * )(lVar3 + 0x18);
                piVar7 = (int *) (lVar3 + 8);
                (**(code * *)(**(longlong * *)(param_1 + 0x18d8) + 0x3d8))
                        (*(longlong * *)(param_1 + 0x18d8), *(undefined4 * )(param_1 + 0x2108), 1, &local_res10, piVar7,
                         (int *) (lVar3 + 0xc));
                *piVar7 = *piVar7 + *(int *) (lVar3 + 0xc);
            }
            if (*(ulonglong * )(param_1 + 0x18e8) < 2) {
                *pDVar2 = 0;
                *(undefined8 * )(param_1 + 0x18e8) = 0;
                if (*(longlong * )(param_1 + 0x18f0) != 0) {
                    if (*(longlong * )(param_1 + 0x18f8) == 0) {
                        hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                        LOCK();
                        puVar1 = (ulonglong * )(param_1 + 0x18f8);
                        uVar6 = *puVar1;
                        *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ (ulonglong) hObject);
                        if (uVar6 != 0) {
                            CloseHandle(hObject);
                        }
                    }
                    SetEvent(*(HANDLE * )(param_1 + 0x18f8));
                }
            } else {
                *(longlong * )(param_1 + 0x18e8) = *(longlong * )(param_1 + 0x18e8) + -1;
            }
        }
        *(undefined4 * )(param_1 + 0x2108) = 0xffffffff;
    }
    return;
}


void FUN_14027ec50(longlong param_1) {
    longlong *plVar1;
    int iVar2;
    int iVar3;
    uint uVar4;
    ulonglong uVar5;
    longlong **pplVar6;

    uVar5 = (ulonglong) * (int *) (param_1 + 0x1ed8);
    if (*(int *) (param_1 + 0x1ed8) < *(int *) (param_1 + 0x1edc)) {
        pplVar6 = (longlong * *)(param_1 + 0x1e30 + uVar5 * 8);
        do {
            plVar1 = *(longlong * *)(param_1 + 0x1ed0);
            if (*pplVar6 != plVar1) {
                if (plVar1 != (longlong *) 0x0) {
                    (**(code * *) * plVar1)();
                }
                if (*pplVar6 != (longlong *) 0x0) {
                    (**(code * *)(**pplVar6 + 8))();
                }
                *pplVar6 = *(longlong * *)(param_1 + 0x1ed0);
            }
            uVar4 = (int) uVar5 + 1;
            uVar5 = (ulonglong) uVar4;
            pplVar6 = pplVar6 + 1;
        } while ((int) uVar4 < *(int *) (param_1 + 0x1edc));
        iVar2 = *(int *) (param_1 + 0x1ee8);
        if (*(int *) (param_1 + 0x1ed8) < *(int *) (param_1 + 0x1ee8)) {
            iVar2 = *(int *) (param_1 + 0x1ed8);
        }
        iVar3 = *(int *) (param_1 + 0x1eec);
        if (*(int *) (param_1 + 0x1eec) < *(int *) (param_1 + 0x1edc)) {
            iVar3 = *(int *) (param_1 + 0x1edc);
        }
        *(ulonglong * )(param_1 + 0x1ee8) = CONCAT44(iVar3, iVar2);
        *(undefined8 * )(param_1 + 0x1ed8) = DAT_140c79898;
    }
    uVar5 = (ulonglong) * (int *) (param_1 + 0x1ee0);
    if (*(int *) (param_1 + 0x1ee0) < *(int *) (param_1 + 0x1ee4)) {
        pplVar6 = (longlong * *)(param_1 + 0x1e50 + uVar5 * 8);
        do {
            plVar1 = *(longlong * *)(param_1 + 0x1ed0);
            if (*pplVar6 != plVar1) {
                if (plVar1 != (longlong *) 0x0) {
                    (**(code * *) * plVar1)();
                }
                if (*pplVar6 != (longlong *) 0x0) {
                    (**(code * *)(**pplVar6 + 8))();
                }
                *pplVar6 = *(longlong * *)(param_1 + 0x1ed0);
            }
            uVar4 = (int) uVar5 + 1;
            uVar5 = (ulonglong) uVar4;
            pplVar6 = pplVar6 + 1;
        } while ((int) uVar4 < *(int *) (param_1 + 0x1ee4));
        iVar2 = *(int *) (param_1 + 0x1ef0);
        if (*(int *) (param_1 + 0x1ee0) < *(int *) (param_1 + 0x1ef0)) {
            iVar2 = *(int *) (param_1 + 0x1ee0);
        }
        iVar3 = *(int *) (param_1 + 0x1ef4);
        if (*(int *) (param_1 + 0x1ef4) < *(int *) (param_1 + 0x1ee4)) {
            iVar3 = *(int *) (param_1 + 0x1ee4);
        }
        *(ulonglong * )(param_1 + 0x1ef0) = CONCAT44(iVar3, iVar2);
        *(undefined8 * )(param_1 + 0x1ee0) = DAT_140c79898;
    }
    return;
}


ulonglong FUN_14027edc0(longlong param_1, longlong *param_2, int param_3, ulonglong param_4) {
    int *piVar1;
    uint *puVar2;
    int iVar3;
    uint uVar4;
    longlong lVar5;
    ulonglong uVar6;
    ulonglong extraout_RAX;
    longlong lVar7;
    LPVOID lpTlsValue;
    undefined4 local_res10[2];
    undefined **local_a8;
    undefined8 local_a0;
    LPVOID local_98;
    undefined **local_90;
    undefined8 local_88;
    LPVOID local_80;
    undefined8 local_78;
    undefined local_70[8];
    undefined8 local_68;
    longlong local_60;
    undefined **local_58;
    undefined8 local_50;
    LPVOID local_48;
    undefined **local_38;
    undefined8 local_30;
    LPVOID local_28;

    param_4 = param_4 & 0xffffffff;
    lVar5 = (**(code * *)(*param_2 + 0x18))(param_2);
    if (*(int *) (lVar5 + 4) == 0) {
        local_88 = 0;
        local_90 = &PTR_LAB_140b5e648;
        local_80 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_90);
        local_58 = local_90;
        local_68 = 0x141de3330;
        local_48 = local_80;
        local_50 = local_88;
        iVar3 = FUN_1401971e0(&DAT_140c8a368, 0xe, &local_68, &local_58);
        local_90 = &PTR_LAB_140b5e648;
        lpTlsValue = local_80;
    } else {
        uVar6 = (**(code * *)(*param_2 + 0x28))(param_2);
        if ((int) uVar6 == 0) {
            return uVar6;
        }
        if (((uint) param_4 < 0x10) &&
            (lVar7 = (longlong) param_3 * 0x36 + param_4, *(int *) (param_1 + 0x4a4 + lVar7 * 4) != 0)) {
            *(int *) (param_1 + 0x1fb8) = param_3;
            local_60 = param_2[4];
            local_res10[0] = *(undefined4 * )(param_1 + 0x4a4 + lVar7 * 4);
            FUN_14003d8f0(local_70, param_1 + 0x18e0);
            (**(code * *)(**(longlong * *)(param_1 + 0x18d0) + 0x90))
                    (*(longlong * *)(param_1 + 0x18d0), param_4, 1, &local_60, local_res10, &DAT_140b63928);
            FUN_14003d880(local_70);
            uVar4 = *(uint * )(param_1 + 0xf0);
            if (*(uint * )((longlong) param_2 + 0x44) == uVar4) {
                return (ulonglong) uVar4;
            }
            *(uint * )((longlong) param_2 + 0x44) = uVar4;
            iVar3 = *(int *) (lVar5 + 4);
            LOCK();
            piVar1 = (int *) (param_1 + 0x17c + (longlong) iVar3 * 0x30);
            *piVar1 = *piVar1 + 1;
            LOCK();
            puVar2 = (uint * )(param_1 + 0x180 + (longlong) iVar3 * 0x30);
            uVar4 = *puVar2;
            *puVar2 = *puVar2 + *(int *) (param_2 + 3);
            return (ulonglong) uVar4;
        }
        local_a0 = 0;
        local_a8 = &PTR_LAB_140b5e648;
        local_98 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_a8);
        local_38 = local_a8;
        local_78 = 0x141de32b0;
        local_28 = local_98;
        local_30 = local_a0;
        iVar3 = FUN_1401971e0(&DAT_140c8a36c, 0xe, &local_78, &local_38);
        local_a8 = &PTR_LAB_140b5e648;
        lpTlsValue = local_98;
    }
    uVar4 = TlsSetValue(DAT_140c63720, lpTlsValue);
    uVar6 = (ulonglong) uVar4;
    if (iVar3 != 0) {
        DebugBreak();
        uVar6 = extraout_RAX;
    }
    return uVar6;
}


ulonglong FUN_14027f010(longlong param_1, longlong *param_2) {
    ulonglong *puVar1;
    DWORD *pDVar2;
    int *piVar3;
    uint *puVar4;
    ulonglong uVar5;
    int iVar6;
    uint uVar7;
    DWORD DVar8;
    longlong lVar9;
    ulonglong extraout_RAX;
    ulonglong uVar10;
    HANDLE hObject;
    undefined8 local_res10;
    undefined **local_58;
    undefined8 local_50;
    LPVOID local_48;
    undefined **local_38;
    undefined8 local_30;
    LPVOID local_28;

    lVar9 = (**(code * *)(*param_2 + 0x18))(param_2);
    if (*(int *) (lVar9 + 8) == 0) {
        local_58 = &PTR_LAB_140b5e648;
        local_50 = 0;
        local_48 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_58);
        local_38 = local_58;
        local_res10 = 0x141de3230;
        local_28 = local_48;
        local_30 = local_50;
        iVar6 = FUN_1401971e0(&DAT_140c8a35c, 0xe, &local_res10, &local_38);
        local_58 = &PTR_LAB_140b5e648;
        uVar7 = TlsSetValue(DAT_140c63720, local_48);
        uVar10 = (ulonglong) uVar7;
        if (iVar6 != 0) {
            DebugBreak();
            uVar10 = extraout_RAX;
        }
    } else {
        uVar10 = (**(code * *)(*param_2 + 0x28))();
        if ((int) uVar10 != 0) {
            pDVar2 = (DWORD * )(param_1 + 0x18e0);
            DVar8 = GetCurrentThreadId();
            uVar10 = 0;
            if (*pDVar2 == DVar8) {
                *(longlong * )(param_1 + 0x18e8) = *(longlong * )(param_1 + 0x18e8) + 1;
            } else {
                do {
                    LOCK();
                    puVar1 = (ulonglong * )(param_1 + 0x18e8);
                    uVar5 = *puVar1;
                    *puVar1 = *puVar1 ^ (ulonglong)(uVar5 == 0) * (*puVar1 ^ 1);
                    if (uVar5 == 0) {
                        *pDVar2 = DVar8;
                        goto LAB_14027f148;
                    }
                    uVar10 = uVar10 + 1;
                } while (uVar10 < 0x400);
                FUN_14019fb60(pDVar2);
            }
            LAB_14027f148:
            (**(code * *)(**(longlong * *)(param_1 + 0x18d0) + 0x98))
                    (*(longlong * *)(param_1 + 0x18d0), param_2[5],
                     *(undefined4 * )(&DAT_140ae8000 + (longlong) * (int *) (lVar9 + 4) * 4), 0);
            if (*(ulonglong * )(param_1 + 0x18e8) < 2) {
                *pDVar2 = 0;
                *(undefined8 * )(param_1 + 0x18e8) = 0;
                if (*(longlong * )(param_1 + 0x18f0) != 0) {
                    if (*(longlong * )(param_1 + 0x18f8) == 0) {
                        hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                        LOCK();
                        puVar1 = (ulonglong * )(param_1 + 0x18f8);
                        uVar10 = *puVar1;
                        *puVar1 = *puVar1 ^ (ulonglong)(uVar10 == 0) * (*puVar1 ^ (ulonglong) hObject);
                        if (uVar10 != 0) {
                            CloseHandle(hObject);
                        }
                    }
                    SetEvent(*(HANDLE * )(param_1 + 0x18f8));
                }
            } else {
                *(longlong * )(param_1 + 0x18e8) = *(longlong * )(param_1 + 0x18e8) + -1;
            }
            uVar7 = *(uint * )(param_1 + 0xf0);
            uVar10 = (ulonglong) uVar7;
            if (*(uint * )(param_2 + 9) != uVar7) {
                *(uint * )(param_2 + 9) = uVar7;
                iVar6 = *(int *) (lVar9 + 8);
                LOCK();
                piVar3 = (int *) (param_1 + 0x23c + (longlong) iVar6 * 0x30);
                *piVar3 = *piVar3 + 1;
                LOCK();
                puVar4 = (uint * )(param_1 + 0x240 + (longlong) iVar6 * 0x30);
                uVar10 = (ulonglong) * puVar4;
                *puVar4 = *puVar4 + *(int *) (param_2 + 3);
            }
        }
    }
    return uVar10;
}


void FUN_14027f3b0(longlong *param_1, ulonglong param_2, undefined8 param_3, undefined4 param_4,
                   undefined4 param_5, undefined4 param_6) {
    longlong lVar1;

    lVar1 = (**(code * *)(*param_1 + 0x100))(param_1, param_2, param_4, param_5, param_6);
    if (lVar1 != 0) {
        FUN_1407db590(lVar1, param_3, param_2 & 0xffffffff);
        (**(code * *)(*param_1 + 0x108))(param_1);
    }
    return;
}


void FUN_14027f460(longlong param_1, uint param_2, longlong *param_3, undefined8 param_4,
                   longlong param_5) {
    longlong *plVar1;
    int iVar2;
    uint uVar3;
    int *piVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    longlong lVar7;
    ulonglong uVar8;
    undefined8 local_res18[2];
    undefined **local_78;
    undefined8 local_70;
    LPVOID local_68;
    undefined **local_58;
    undefined8 local_50;
    LPVOID local_48;

    puVar6 = (undefined8 *) 0x0;
    if (param_3 != (longlong *) 0x0) {
        piVar4 = (int *) (**(code * *)(*param_3 + 0x18))(param_3);
        if (piVar4[7] == 0) {
            local_70 = 0;
            local_78 = &PTR_LAB_140b5e648;
            local_68 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_78);
            local_58 = local_78;
            local_res18[0] = 0x141de3160;
            local_48 = local_68;
            local_50 = local_70;
            iVar2 = FUN_1401971e0(&DAT_140c8a364, 0xe, local_res18, &local_58);
            local_78 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720, local_68);
            if (iVar2 == 0) {
                return;
            }
            DebugBreak();
            return;
        }
        iVar2 = (**(code * *)(*param_3 + 0x30))(param_3);
        if (iVar2 == 0) {
            return;
        }
        lVar7 = param_1 + 0x2d4 + (longlong) piVar4[7] * 0x30;
        iVar2 = *piVar4;
        if (iVar2 == 0) {
            puVar5 = (undefined8 *) FUN_1402a1370();
            if (param_5 == 0) {
                puVar6 = (undefined8 *) FUN_1402a1560();
            } else {
                puVar6 = *(undefined8 * *)(param_5 + 0x70);
            }
            LAB_14027f632:
            if (*(int *) ((longlong) param_3 + 0xdc) != *(int *) (param_1 + 0xf0)) {
                *(int *) ((longlong) param_3 + 0xdc) = *(int *) (param_1 + 0xf0);
                LOCK();
                *(int *) (lVar7 + 0x28) = *(int *) (lVar7 + 0x28) + 1;
                LOCK();
                *(int *) (lVar7 + 0x2c) = *(int *) (lVar7 + 0x2c) + *(int *) (param_3 + 0x1b);
            }
        } else {
            if (iVar2 == 1) {
                puVar5 = (undefined8 *) FUN_1402a4490();
                if (param_5 == 0) {
                    puVar6 = (undefined8 *) FUN_1402a45d0();
                } else {
                    puVar6 = *(undefined8 * *)(param_5 + 0x70);
                }
                goto LAB_14027f632;
            }
            puVar5 = puVar6;
            if (iVar2 == 2) {
                puVar5 = (undefined8 *) FUN_1402a7350();
                if (param_5 == 0) {
                    puVar6 = (undefined8 *) FUN_1402a7490();
                } else {
                    puVar6 = *(undefined8 * *)(param_5 + 0x70);
                }
                if (*(int *) ((longlong) param_3 + 500) != *(int *) (param_1 + 0xf0)) {
                    *(int *) ((longlong) param_3 + 500) = *(int *) (param_1 + 0xf0);
                    LOCK();
                    *(int *) (lVar7 + 0x28) = *(int *) (lVar7 + 0x28) + 1;
                    LOCK();
                    *(int *) (lVar7 + 0x2c) = *(int *) (lVar7 + 0x2c) + *(int *) (param_3 + 0x3e);
                }
            }
        }
        uVar3 = *(uint * )(param_1 + 0x1ee0);
        if ((int) param_2 < (int) *(uint * )(param_1 + 0x1ee0)) {
            uVar3 = param_2;
        }
        iVar2 = *(int *) (param_1 + 0x1ee4);
        if (*(int *) (param_1 + 0x1ee4) < (int) (param_2 + 1)) {
            iVar2 = param_2 + 1;
        }
        local_res18[0] = CONCAT44(iVar2, uVar3);
        *(undefined8 * )(param_1 + 0x1ee0) = local_res18[0];
        if (puVar5 != (undefined8 *) 0x0) goto LAB_14027f694;
    }
    puVar5 = *(undefined8 * *)(param_1 + 0x1ed0);
    LAB_14027f694:
    uVar8 = (ulonglong) param_2;
    if (*(undefined8 * *)(param_1 + 0x1e50 + uVar8 * 8) != puVar5) {
        if (puVar5 != (undefined8 *) 0x0) {
            (**(code * *) * puVar5)(puVar5);
        }
        plVar1 = *(longlong * *)(param_1 + 0x1e50 + uVar8 * 8);
        if (plVar1 != (longlong *) 0x0) {
            (**(code * *)(*plVar1 + 8))();
        }
        *(undefined8 * *)(param_1 + 0x1e50 + uVar8 * 8) = puVar5;
        uVar3 = *(uint * )(param_1 + 0x1ef0);
        if ((int) param_2 < (int) *(uint * )(param_1 + 0x1ef0)) {
            uVar3 = param_2;
        }
        iVar2 = *(int *) (param_1 + 0x1ef4);
        if (*(int *) (param_1 + 0x1ef4) < (int) (param_2 + 1)) {
            iVar2 = param_2 + 1;
        }
        local_res18[0] = CONCAT44(iVar2, uVar3);
        *(undefined8 * )(param_1 + 0x1ef0) = local_res18[0];
    }
    if (puVar6 == (undefined8 *) 0x0) {
        puVar6 = *(undefined8 * *)(param_1 + 0x1f98);
    }
    if (*(undefined8 * *)(param_1 + 0x1f18 + uVar8 * 8) != puVar6) {
        if (puVar6 != (undefined8 *) 0x0) {
            (**(code * *) * puVar6)(puVar6);
        }
        plVar1 = *(longlong * *)(param_1 + 0x1f18 + uVar8 * 8);
        if (plVar1 != (longlong *) 0x0) {
            (**(code * *)(*plVar1 + 8))();
        }
        *(undefined8 * *)(param_1 + 0x1f18 + uVar8 * 8) = puVar6;
        uVar3 = *(uint * )(param_1 + 0x1fa8);
        if ((int) param_2 < (int) *(uint * )(param_1 + 0x1fa8)) {
            uVar3 = param_2;
        }
        iVar2 = *(int *) (param_1 + 0x1fac);
        if (*(int *) (param_1 + 0x1fac) < (int) (param_2 + 1)) {
            iVar2 = param_2 + 1;
        }
        local_res18[0] = CONCAT44(iVar2, uVar3);
        *(undefined8 * )(param_1 + 0x1fa8) = local_res18[0];
    }
    return;
}


void FUN_14027fc00(longlong *param_1, ulonglong param_2, undefined8 param_3, undefined4 param_4,
                   undefined4 param_5, undefined4 param_6) {
    longlong lVar1;

    lVar1 = (**(code * *)(*param_1 + 0x110))(param_1, param_2, param_4, param_5, param_6);
    if (lVar1 != 0) {
        FUN_1407db590(lVar1, param_3, param_2 & 0xffffffff);
        (**(code * *)(*param_1 + 0x118))(param_1);
    }
    return;
}


void FUN_14027ff00(longlong param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                   int param_7) {
    undefined4 *puVar1;
    longlong lVar2;

    if ((((param_2 == 1) && (param_3 == 0)) && (param_4 == 0)) &&
        (((param_5 == 1 && (param_6 == 0)) && (param_7 == 0)))) {
        *(undefined4 * )(param_1 + 0x1cf0) = 0;
        *(undefined4 * )(param_1 + 0x1d10) = 0;
        *(undefined4 * )(param_1 + 0x1d30) = 0;
        *(undefined4 * )(param_1 + 0x1d50) = 0;
        *(uint * )(param_1 + 0x1c08) = *(uint * )(param_1 + 0x1c08) | 4;
        return;
    }
    lVar2 = 4;
    puVar1 = (undefined4 * )(param_1 + 0x1cf4);
    do {
        puVar1[-1] = 1;
        *puVar1 = *(undefined4 * )(&DAT_140ae8040 + (longlong) param_2 * 4);
        puVar1[1] = *(undefined4 * )(&DAT_140ae8040 + (longlong) param_3 * 4);
        puVar1[2] = *(undefined4 * )(&DAT_140ae8090 + (longlong) param_4 * 4);
        puVar1[3] = *(undefined4 * )(&DAT_140ae8068 + (longlong) param_5 * 4);
        puVar1[4] = *(undefined4 * )(&DAT_140ae8068 + (longlong) param_6 * 4);
        puVar1[5] = *(undefined4 * )(&DAT_140ae8090 + (longlong) param_7 * 4);
        lVar2 = lVar2 + -1;
        puVar1 = puVar1 + 8;
    } while (lVar2 != 0);
    *(uint * )(param_1 + 0x1c08) = *(uint * )(param_1 + 0x1c08) | 4;
    return;
}


void FUN_140280200(longlong param_1, longlong param_2, undefined4 param_3) {
    ulonglong *puVar1;
    DWORD *pDVar2;
    ulonglong uVar3;
    DWORD DVar4;
    HANDLE hObject;
    ulonglong uVar5;
    undefined8 uVar6;

    if (*(int *) (param_1 + 0xe0) != 0) {
        pDVar2 = (DWORD * )(param_1 + 0x18e0);
        DVar4 = GetCurrentThreadId();
        uVar5 = 0;
        if (*pDVar2 == DVar4) {
            *(longlong * )(param_1 + 0x18e8) = *(longlong * )(param_1 + 0x18e8) + 1;
        } else {
            do {
                LOCK();
                puVar1 = (ulonglong * )(param_1 + 0x18e8);
                uVar3 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
                if (uVar3 == 0) {
                    *pDVar2 = DVar4;
                    goto LAB_140280288;
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 < 0x400);
            FUN_14019fb60(pDVar2, DVar4);
        }
        LAB_140280288:
        if (param_2 == 0) {
            param_3 = 0;
            uVar6 = 0;
        } else {
            uVar6 = *(undefined8 * )(param_2 + 0x20);
        }
        (**(code * *)(**(longlong * *)(param_1 + 0x18d0) + 0xf0))
                (*(longlong * *)(param_1 + 0x18d0), uVar6, param_3);
        if (*(ulonglong * )(param_1 + 0x18e8) < 2) {
            *pDVar2 = 0;
            *(undefined8 * )(param_1 + 0x18e8) = 0;
            if (*(longlong * )(param_1 + 0x18f0) != 0) {
                if (*(longlong * )(param_1 + 0x18f8) == 0) {
                    hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                    LOCK();
                    puVar1 = (ulonglong * )(param_1 + 0x18f8);
                    uVar5 = *puVar1;
                    *puVar1 = *puVar1 ^ (ulonglong)(uVar5 == 0) * (*puVar1 ^ (ulonglong) hObject);
                    if (uVar5 != 0) {
                        CloseHandle(hObject);
                    }
                }
                SetEvent(*(HANDLE * )(param_1 + 0x18f8));
            }
        } else {
            *(longlong * )(param_1 + 0x18e8) = *(longlong * )(param_1 + 0x18e8) + -1;
        }
    }
    return;
}


void FUN_140280320(longlong param_1) {
    longlong lVar1;

    lVar1 = FUN_14018b280(0xb8, 0);
    if (lVar1 != 0) {
        FUN_1402ace40(lVar1, param_1, *(undefined8 * )(param_1 + 0x2190));
        return;
    }
    return;
}


void FUN_140280360(longlong param_1) {
    longlong lVar1;

    lVar1 = FUN_14018b280(0x38);
    if (lVar1 != 0) {
        FUN_1402adca0(lVar1, param_1, *(undefined8 * )(param_1 + 0x2198));
        return;
    }
    return;
}


void FUN_1402803a0(longlong *param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
                   undefined8 param_5) {
    ulonglong *puVar1;
    longlong *plVar2;
    ulonglong uVar3;
    DWORD DVar4;
    HANDLE hObject;
    ulonglong uVar5;

    (**(code * *)(*param_1 + 0x128))();
    plVar2 = param_1 + 0x31c;
    DVar4 = GetCurrentThreadId();
    uVar5 = 0;
    if (*(DWORD *) plVar2 == DVar4) {
        param_1[0x31d] = param_1[0x31d] + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(param_1 + 0x31d);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
            if (uVar3 == 0) {
                *(DWORD *) plVar2 = DVar4;
                goto LAB_140280428;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < 0x400);
        FUN_14019fb60(plVar2, DVar4);
    }
    LAB_140280428:
    FUN_140279680(param_1);
    if ((ulonglong) param_1[0x31d] < 2) {
        *(int *) plVar2 = 0;
        param_1[0x31d] = 0;
        if (param_1[0x31e] != 0) {
            if (param_1[799] == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(param_1 + 799);
                uVar5 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar5 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar5 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent((HANDLE) param_1[799]);
        }
    } else {
        param_1[0x31d] = param_1[0x31d] + -1;
    }
    FUN_1402ad050(param_1[0x432], 0, param_2);
    FUN_1402ad050(param_1[0x432], 1, param_3);
    FUN_1402ad050(param_1[0x432], 2, param_4);
    FUN_1402ad050(param_1[0x432], 3, param_5);
    return;
}


void FUN_140280510(longlong param_1) {
    longlong lVar1;
    int iVar2;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    lVar1 = *(longlong * )(param_1 + 0x2190);
    if (*(longlong * )(lVar1 + 0xb0) == 0) {
        local_40 = 0;
        local_48 = &PTR_LAB_140b5e648;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_48);
        local_28 = local_48;
        local_res8 = 0x141de3528;
        local_18 = local_38;
        local_20 = local_40;
        iVar2 = FUN_1401971e0(&DAT_140c8a350, 0xe, &local_res8, &local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001402805da. Too many branches
            // WARNING: Treating indirect jump as call
            DebugBreak();
            return;
        }
    } else {
        if (lVar1 != 0) {
            FUN_1402acfc0(lVar1);
            FUN_14018b900(lVar1, 0);
        }
        if (*(longlong * )(param_1 + 0x2190) == 0) {
            local_res8 = 0x141de3508;
            FUN_1401a3130(0xe, 2, &local_res8);
        }
    }
    return;
}


void FUN_140280630(longlong param_1) {
    int iVar1;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    if (*(longlong * )(*(longlong * )(param_1 + 0x2198) + 0x30) == 0) {
        local_40 = 0;
        local_48 = &PTR_LAB_140b5e648;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_48);
        local_28 = local_48;
        local_res8 = 0x141de34c8;
        local_18 = local_38;
        local_20 = local_40;
        iVar1 = FUN_1401971e0(&DAT_140c8a34c, 0xe, &local_res8, &local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_38);
        if (iVar1 != 0) {
            // WARNING: Could not recover jumptable at 0x0001402806fc. Too many branches
            // WARNING: Treating indirect jump as call
            DebugBreak();
            return;
        }
    } else if (*(longlong * )(param_1 + 0x2198) != 0) {
        FUN_140278a10();
        return;
    }
    return;
}


undefined4 FUN_140280790(longlong param_1) {
    longlong *plVar1;
    longlong lVar2;

    plVar1 = *(longlong * *)(param_1 + 0x2198);
    if (*(int *) (plVar1 + 1) == 0) {
        lVar2 = plVar1[2];
        if (lVar2 == 0) {
            lVar2 = *(longlong * )(*plVar1 + 0x2188);
        }
        return *(undefined4 * )(lVar2 + 0x24);
    }
    if (*(int *) (plVar1 + 1) - 1U < 2) {
        lVar2 = (**(code * *)(*(longlong *) plVar1[2] + 0x18))();
        return *(undefined4 * )(lVar2 + 0x18);
    }
    return 0x1b;
}


undefined8 FUN_1402808d0(longlong *param_1) {
    int iVar1;
    undefined8 local_res8[4];

    if (param_1[0x431] != 0) {
        if ((*(int *) ((longlong) param_1 + 0x186c) != 0) &&
            (iVar1 = (**(code * *)(*param_1 + 0x28))(param_1, param_1 + 7), iVar1 < 0)) {
            return 0;
        }
        iVar1 = (**(code * *)(*(longlong *) param_1[0x431] + 0x20))();
        if (iVar1 != 0) {
            if (param_1[0x432] != 0) {
                return 1;
            }
            local_res8[0] = 0x141de2d28;
            FUN_1401a3130(0xe, 2, local_res8);
        }
    }
    return 0;
}


void FUN_140280c70(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4,
                   longlong *param_5_00, uint param_6, float *param_7, undefined8 param_8,
                   undefined4 param_5) {
    ulonglong *puVar1;
    longlong *plVar2;
    longlong lVar3;
    ulonglong uVar4;
    longlong *plVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    DWORD DVar9;
    int iVar10;
    HANDLE pvVar11;
    undefined8 uVar12;
    ulonglong uVar13;
    bool bVar14;
    undefined4 extraout_XMM0_Da;
    undefined4 uVar15;
    float extraout_XMM0_Da_00;
    float fVar16;
    ulonglong in_stack_ffffffffffffff98;
    float *local_48[4];

    lVar3 = param_5_00[0x432];
    if ((*(int *) (lVar3 + 0x88) == *(int *) (lVar3 + 0x98)) &&
        (*(int *) (lVar3 + 0x8c) == *(int *) (lVar3 + 0x9c))) {
        plVar2 = param_5_00 + 0x31c;
        DVar9 = GetCurrentThreadId();
        uVar13 = 0;
        uVar15 = extraout_XMM0_Da;
        if (*(DWORD *) plVar2 == DVar9) {
            param_5_00[0x31d] = param_5_00[0x31d] + 1;
        } else {
            do {
                LOCK();
                puVar1 = (ulonglong * )(param_5_00 + 0x31d);
                uVar4 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar4 == 0) * (*puVar1 ^ 1);
                if (uVar4 == 0) {
                    *(DWORD *) plVar2 = DVar9;
                    goto LAB_140280d0a;
                }
                uVar13 = uVar13 + 1;
            } while (uVar13 < 0x400);
            uVar15 = FUN_14019fb60(plVar2);
        }
        LAB_140280d0a:
        if ((param_6 & 1) != 0) {
            uVar15 = FUN_1402ad790(param_5_00[0x432], param_7);
        }
        if ((param_6 & 6) != 0) {
            FUN_1402ae0a0(uVar15, param_2, param_4, param_5_00[0x433], param_6);
        }
        if ((ulonglong) param_5_00[0x31d] < 2) {
            *(int *) plVar2 = 0;
            param_5_00[0x31d] = 0;
            if (param_5_00[0x31e] != 0) {
                if (param_5_00[799] == 0) {
                    pvVar11 = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                    LOCK();
                    puVar1 = (ulonglong * )(param_5_00 + 799);
                    uVar13 = *puVar1;
                    *puVar1 = *puVar1 ^ (ulonglong)(uVar13 == 0) * (*puVar1 ^ (ulonglong) pvVar11);
                    if (uVar13 != 0) {
                        CloseHandle(pvVar11);
                    }
                }
                SetEvent((HANDLE) param_5_00[799]);
            }
        } else {
            param_5_00[0x31d] = param_5_00[0x31d] + -1;
        }
    } else {
        if (param_5_00[0x405] == 0) {
            iVar10 = (**(code * *)(*param_5_00 + 0x98))
                    (param_5_00, L"Shaders\\DefaultPS.sho", param_5_00 + 0x405);
            if (iVar10 < 0) {
                return;
            }
            (**(code * *)(*(longlong *) param_5_00[0x405] + 0x20))();
        }
        plVar2 = param_5_00 + 0x31c;
        DVar9 = GetCurrentThreadId();
        uVar13 = 0;
        if (*(DWORD *) plVar2 == DVar9) {
            param_5_00[0x31d] = param_5_00[0x31d] + 1;
        } else {
            do {
                LOCK();
                puVar1 = (ulonglong * )(param_5_00 + 0x31d);
                uVar4 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar4 == 0) * (*puVar1 ^ 1);
                if (uVar4 == 0) {
                    *(DWORD *) plVar2 = DVar9;
                    goto LAB_140280e34;
                }
                uVar13 = uVar13 + 1;
            } while (uVar13 < 0x400);
            FUN_14019fb60(plVar2);
        }
        LAB_140280e34:
        if ((param_6 & 1) != 0) {
            FUN_1402ad8c0(param_5_00[0x432]);
        }
        if ((param_6 & 6) != 0) {
            FUN_1402ae1b0(param_5_00[0x433]);
        }
        bVar14 = (param_6 & 2) != 0;
        uVar13 = (ulonglong) bVar14;
        if ((param_6 & 4) != 0) {
            uVar13 = (ulonglong)(bVar14 | 2);
        }
        (**(code * *)(*(longlong *) param_5_00[0x31a] + 0x158))
                ((longlong *) param_5_00[0x31a], param_5_00[0x38c]);
        (**(code * *)(*(longlong *) param_5_00[0x31a] + 0x120))
                ((longlong *) param_5_00[0x31a], param_5_00[uVar13 + 0x399], param_5);
        (**(code * *)(*(longlong *) param_5_00[0x31a] + 0x118))
                ((longlong *) param_5_00[0x31a], param_5_00[(ulonglong)((param_6 & 1) != 0) + 0x3c3],
                 &DAT_140b611d0, 0xffffffff);
        plVar5 = (longlong *) param_5_00[0x31a];
        lVar3 = *plVar5;
        uVar12 = FUN_1402aa830(param_5_00[0x405],
                               **(undefined4 * *)(*(longlong * )(param_5_00[0x405] + 0x30) + 0x20));
        uVar15 = (**(code * *)(lVar3 + 0x48))(plVar5, uVar12, 0, 0);
        fVar16 = (float) -(uint)(*(float *) (param_5_00 + 0x428) != *param_7);
        iVar10 = movmskps(uVar15, CONCAT412(-(uint)(*(float *) ((longlong) param_5_00 + 0x214c) !=
                                                    param_7[3]),
                                            CONCAT48(-(uint)(*(float *) (param_5_00 + 0x429) != param_7[2]
                                            ), CONCAT44(-(uint)(*(float *) ((longlong)
                                                                                    param_5_00 +
                                                                            0x2144) !=
                                                                param_7[1]), fVar16))));
        if ((iVar10 != 0) || (*(int *) (param_5_00 + 0x42a) != *(int *) (param_5_00 + 0x1e))) {
            iVar10 = (**(code * *)(*(longlong *) param_5_00[0x31a] + 0x70))
                    ((longlong *) param_5_00[0x31a], param_5_00[0x426], 0, 4,
                     in_stack_ffffffffffffff98 & 0xffffffff00000000, local_48);
            if (-1 < iVar10) {
                fVar16 = param_7[1];
                fVar6 = param_7[2];
                fVar7 = param_7[3];
                *local_48[0] = *param_7;
                local_48[0][1] = fVar16;
                local_48[0][2] = fVar6;
                local_48[0][3] = fVar7;
                (**(code * *)(*(longlong *) param_5_00[0x31a] + 0x78))
                        ((longlong *) param_5_00[0x31a], param_5_00[0x426], 0);
            }
            fVar16 = *param_7;
            fVar6 = param_7[1];
            fVar7 = param_7[2];
            fVar8 = param_7[3];
            *(float *) (param_5_00 + 0x428) = fVar16;
            *(float *) ((longlong) param_5_00 + 0x2144) = fVar6;
            *(float *) (param_5_00 + 0x429) = fVar7;
            *(float *) ((longlong) param_5_00 + 0x214c) = fVar8;
            *(undefined4 * )(param_5_00 + 0x42a) = *(undefined4 * )(param_5_00 + 0x1e);
        }
        if ((ulonglong) param_5_00[0x31d] < 2) {
            *(int *) plVar2 = 0;
            param_5_00[0x31d] = 0;
            if (param_5_00[0x31e] != 0) {
                if (param_5_00[799] == 0) {
                    pvVar11 = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                    LOCK();
                    puVar1 = (ulonglong * )(param_5_00 + 799);
                    uVar13 = *puVar1;
                    *puVar1 = *puVar1 ^ (ulonglong)(uVar13 == 0) * (*puVar1 ^ (ulonglong) pvVar11);
                    if (uVar13 != 0) {
                        CloseHandle(pvVar11);
                    }
                }
                SetEvent((HANDLE) param_5_00[799]);
                fVar16 = extraout_XMM0_Da_00;
            }
        } else {
            param_5_00[0x31d] = param_5_00[0x31d] + -1;
        }
        *(uint * )(param_5_00 + 0x381) = *(uint * )(param_5_00 + 0x381) & 0xfffffef8;
        (**(code * *)(*param_5_00 + 0x298))(fVar16, param_2, param_4, param_5_00, 0xffffffff);
        *(uint * )(param_5_00 + 0x381) = *(uint * )(param_5_00 + 0x381) | 0x107;
    }
    *(int *) ((longlong) param_5_00 + 0x424) = *(int *) ((longlong) param_5_00 + 0x424) + 1;
    return;
}


void FUN_140281060(longlong param_1, ulonglong param_2) {
    ulonglong *puVar1;
    DWORD *pDVar2;
    ulonglong uVar3;
    DWORD DVar4;
    HANDLE hObject;
    ulonglong uVar5;

    pDVar2 = (DWORD * )(param_1 + 0x18e0);
    DVar4 = GetCurrentThreadId();
    uVar5 = 0;
    if (*pDVar2 == DVar4) {
        *(longlong * )(param_1 + 0x18e8) = *(longlong * )(param_1 + 0x18e8) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(param_1 + 0x18e8);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
            if (uVar3 == 0) {
                *pDVar2 = DVar4;
                goto LAB_1402810c9;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < 0x400);
        FUN_14019fb60(pDVar2, DVar4);
    }
    LAB_1402810c9:
    if ((param_2 & 1) != 0) {
        FUN_1402ad8c0(*(undefined8 * )(param_1 + 0x2190));
    }
    if ((param_2 & 2) != 0) {
        FUN_1402ae1b0(*(undefined8 * )(param_1 + 0x2198));
    }
    *(int *) (param_1 + 0x424) = *(int *) (param_1 + 0x424) + 1;
    if (*(ulonglong * )(param_1 + 0x18e8) < 2) {
        *pDVar2 = 0;
        *(undefined8 * )(param_1 + 0x18e8) = 0;
        if (*(longlong * )(param_1 + 0x18f0) != 0) {
            if (*(longlong * )(param_1 + 0x18f8) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(param_1 + 0x18f8);
                uVar5 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar5 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar5 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(param_1 + 0x18f8));
        }
    } else {
        *(longlong * )(param_1 + 0x18e8) = *(longlong * )(param_1 + 0x18e8) + -1;
    }
    return;
}


void FUN_140281160(longlong param_1, ulonglong param_2) {
    ulonglong *puVar1;
    DWORD *pDVar2;
    ulonglong uVar3;
    DWORD DVar4;
    HANDLE hObject;
    ulonglong uVar5;

    pDVar2 = (DWORD * )(param_1 + 0x18e0);
    DVar4 = GetCurrentThreadId();
    uVar5 = 0;
    if (*pDVar2 == DVar4) {
        *(longlong * )(param_1 + 0x18e8) = *(longlong * )(param_1 + 0x18e8) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(param_1 + 0x18e8);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
            if (uVar3 == 0) {
                *pDVar2 = DVar4;
                goto LAB_1402811c9;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < 0x400);
        FUN_14019fb60(pDVar2, DVar4);
    }
    LAB_1402811c9:
    if ((param_2 & 1) != 0) {
        FUN_1402ada40(*(undefined8 * )(param_1 + 0x2190));
    }
    if ((param_2 & 2) != 0) {
        FUN_1402ae2f0(*(undefined8 * )(param_1 + 0x2198));
    }
    if (*(ulonglong * )(param_1 + 0x18e8) < 2) {
        *pDVar2 = 0;
        *(undefined8 * )(param_1 + 0x18e8) = 0;
        if (*(longlong * )(param_1 + 0x18f0) != 0) {
            if (*(longlong * )(param_1 + 0x18f8) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(param_1 + 0x18f8);
                uVar5 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar5 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar5 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(param_1 + 0x18f8));
        }
    } else {
        *(longlong * )(param_1 + 0x18e8) = *(longlong * )(param_1 + 0x18e8) + -1;
    }
    return;
}


void FUN_140281a40(longlong param_1) {
    int iVar1;
    longlong lVar2;

    FUN_1402adb40();
    lVar2 = *(longlong * )(param_1 + 0x2198);
    iVar1 = *(int *) (lVar2 + 8);
    if (iVar1 != 1) {
        if (iVar1 == 2) {
            if (*(longlong * )(lVar2 + 0x10) == 0) {
                return;
            }
            *(undefined4 * )(*(longlong * )(lVar2 + 0x10) + 0x158) = 1;
            return;
        }
        if (iVar1 != 3) {
            return;
        }
    }
    if (*(longlong * )(lVar2 + 0x10) != 0) {
        *(undefined4 * )(*(longlong * )(lVar2 + 0x10) + 0xb8) = 1;
    }
    return;
}


void FUN_140281aa0(longlong param_1) {
    ulonglong *puVar1;
    DWORD *pDVar2;
    undefined8 uVar3;
    ulonglong uVar4;
    DWORD DVar5;
    HANDLE hObject;
    ulonglong uVar6;

    if (*(ulonglong * )(param_1 + 0x2180) != 0) {
        uVar3 = *(undefined8 * )
                (*(longlong * )(param_1 + 0x2178) +
                 ((ulonglong) * (uint * )(param_1 + 0xf0) % *(ulonglong * )(param_1 + 0x2180)) * 8);
        pDVar2 = (DWORD * )(param_1 + 0x18e0);
        DVar5 = GetCurrentThreadId();
        uVar6 = 0;
        if (*pDVar2 == DVar5) {
            *(longlong * )(param_1 + 0x18e8) = *(longlong * )(param_1 + 0x18e8) + 1;
        } else {
            do {
                LOCK();
                puVar1 = (ulonglong * )(param_1 + 0x18e8);
                uVar4 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar4 == 0) * (*puVar1 ^ 1);
                if (uVar4 == 0) {
                    *pDVar2 = DVar5;
                    goto LAB_140281b28;
                }
                uVar6 = uVar6 + 1;
            } while (uVar6 < 0x400);
            FUN_14019fb60(pDVar2);
        }
        LAB_140281b28:
        (**(code * *)(**(longlong * *)(param_1 + 0x18d0) + 0xe0))(*(longlong * *)(param_1 + 0x18d0), uVar3);
        if (*(ulonglong * )(param_1 + 0x18e8) < 2) {
            *pDVar2 = 0;
            *(undefined8 * )(param_1 + 0x18e8) = 0;
            if (*(longlong * )(param_1 + 0x18f0) != 0) {
                if (*(longlong * )(param_1 + 0x18f8) == 0) {
                    hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                    LOCK();
                    puVar1 = (ulonglong * )(param_1 + 0x18f8);
                    uVar6 = *puVar1;
                    *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ (ulonglong) hObject);
                    if (uVar6 != 0) {
                        CloseHandle(hObject);
                    }
                }
                SetEvent(*(HANDLE * )(param_1 + 0x18f8));
            }
        } else {
            *(longlong * )(param_1 + 0x18e8) = *(longlong * )(param_1 + 0x18e8) + -1;
        }
    }
    *(int *) (param_1 + 0xf0) = *(int *) (param_1 + 0xf0) + 1;
    return;
}


void FUN_140281c30(longlong param_1) {
    longlong lVar1;
    uint *puVar2;
    int *piVar3;
    undefined8 *puVar4;
    longlong *plVar5;
    undefined *puVar6;
    ulonglong in_stack_ffffffffffffff88;
    undefined *in_stack_ffffffffffffff90;
    undefined *in_stack_ffffffffffffff98;
    ulonglong in_stack_ffffffffffffffb0;
    undefined *in_stack_ffffffffffffffb8;
    undefined *in_stack_ffffffffffffffc8;
    undefined *in_stack_ffffffffffffffd0;
    ulonglong in_stack_ffffffffffffffd8;
    undefined *in_stack_ffffffffffffffe0;

    FUN_1401981b0(param_1 + 0x10);
    for (plVar5 = *(longlong * *)(param_1 + 0x1808); plVar5 != (longlong *) 0x0;
         plVar5 = (longlong *) plVar5[0x13]) {
        lVar1 = (**(code * *)(*plVar5 + 0x28))(plVar5);
        in_stack_ffffffffffffff88 = *(ulonglong * )(lVar1 + 0x18);
        FUN_1400035b0(0xe, 1, 0, plVar5, in_stack_ffffffffffffff88);
    }
    for (plVar5 = *(longlong * *)(param_1 + 0x1ab0); plVar5 != (longlong *) 0x0;
         plVar5 = (longlong *) plVar5[0x15]) {
        puVar2 = (uint * )(**(code * *)(*plVar5 + 0x18))();
        in_stack_ffffffffffffff90 =
                (undefined * )
                        ((ulonglong) in_stack_ffffffffffffff90 & 0xffffffff00000000 | (ulonglong) puVar2[1]);
        in_stack_ffffffffffffff88 = in_stack_ffffffffffffff88 & 0xffffffff00000000 | (ulonglong) * puVar2;
        FUN_1400035b0(0xe, 1, 0, plVar5, in_stack_ffffffffffffff88, in_stack_ffffffffffffff90);
    }
    for (plVar5 = *(longlong * *)(param_1 + 0x1ab8); plVar5 != (longlong *) 0x0;
         plVar5 = (longlong *) plVar5[10]) {
        puVar2 = (uint * )(**(code * *)(*plVar5 + 0x18))(plVar5);
        in_stack_ffffffffffffff90 = (&PTR_u_Scratch_140b611a0)[(int) puVar2[1]];
        in_stack_ffffffffffffff88 = in_stack_ffffffffffffff88 & 0xffffffff00000000 | (ulonglong) * puVar2;
        FUN_1400035b0(0xe, 1, 0, plVar5, in_stack_ffffffffffffff88, in_stack_ffffffffffffff90);
    }
    for (plVar5 = *(longlong * *)(param_1 + 0x1ac0); plVar5 != (longlong *) 0x0;
         plVar5 = (longlong *) plVar5[0xb]) {
        puVar2 = (uint * )(**(code * *)(*plVar5 + 0x18))(plVar5);
        in_stack_ffffffffffffff98 = (&PTR_u_Scratch_140b611a0)[(int) puVar2[2]];
        in_stack_ffffffffffffff90 = (&PTR_DAT_140b611c0)[(int) puVar2[1]];
        in_stack_ffffffffffffff88 = in_stack_ffffffffffffff88 & 0xffffffff00000000 | (ulonglong) * puVar2;
        FUN_1400035b0(0xe, 1, 0, plVar5, in_stack_ffffffffffffff88, in_stack_ffffffffffffff90,
                      in_stack_ffffffffffffff98);
    }
    plVar5 = *(longlong * *)(param_1 + 0x1ac8);
    if (plVar5 == (longlong *) 0x0) {
        if ((*(longlong * )(param_1 + 0x1ad0) != 0) || (*(longlong * )(param_1 + 0x1ad8) != 0))
            goto LAB_140281e68;
    } else {
        do {
            piVar3 = (int *) (**(code * *)(*plVar5 + 0x18))(plVar5);
            in_stack_ffffffffffffffe0 = &DAT_1409e3f94;
            if (*(undefined * *)(piVar3 + 0xc) != (undefined *) 0x0) {
                in_stack_ffffffffffffffe0 = *(undefined * *)(piVar3 + 0xc);
            }
            in_stack_ffffffffffffffd8 =
                    in_stack_ffffffffffffffd8 & 0xffffffff00000000 | (ulonglong)(uint)
            piVar3[10];
            in_stack_ffffffffffffffd0 =
                    (undefined * )
                            ((ulonglong) in_stack_ffffffffffffffd0 & 0xffffffff00000000 | (ulonglong)(uint)
            piVar3[9]);
            in_stack_ffffffffffffffc8 = (&PTR_u_Point_140c58a30)[piVar3[8]];
            in_stack_ffffffffffffffb8 = (&PTR_u_A8R8G8B8_140c58920)[piVar3[6]];
            in_stack_ffffffffffffffb0 =
                    in_stack_ffffffffffffffb0 & 0xffffffff00000000 | (ulonglong)(uint)
            piVar3[5];
            in_stack_ffffffffffffff98 =
                    (undefined * )
                            ((ulonglong) in_stack_ffffffffffffff98 & 0xffffffff00000000 | (ulonglong)(uint)
            piVar3[1]);
            in_stack_ffffffffffffff90 =
                    (undefined * )
                            ((ulonglong) in_stack_ffffffffffffff90 & 0xffffffff00000000 |
                             (ulonglong) * (uint * )(plVar5 + 0x1b));
            FUN_1400035b0(0xe, 1, 0, plVar5, (&PTR_DAT_140c589f8)[*piVar3], in_stack_ffffffffffffff90,
                          in_stack_ffffffffffffff98, piVar3[2], piVar3[4], in_stack_ffffffffffffffb0,
                          in_stack_ffffffffffffffb8, (&PTR_u_Scratch_140c58a70)[piVar3[7]],
                          in_stack_ffffffffffffffc8, in_stack_ffffffffffffffd0, in_stack_ffffffffffffffd8,
                          in_stack_ffffffffffffffe0);
            plVar5 = (longlong *) plVar5[0x25];
        } while (plVar5 != (longlong *) 0x0);
        LAB_140281e68:
        for (plVar5 = *(longlong * *)(param_1 + 0x1ad0); plVar5 != (longlong *) 0x0;
             plVar5 = (longlong *) plVar5[0x24]) {
            piVar3 = (int *) (**(code * *)(*plVar5 + 0x18))(plVar5);
            puVar6 = &DAT_1409e3ebc;
            if (*(undefined * *)(piVar3 + 0xc) != (undefined *) 0x0) {
                puVar6 = *(undefined * *)(piVar3 + 0xc);
            }
            in_stack_ffffffffffffffe0 =
                    (undefined * )
                            ((ulonglong) in_stack_ffffffffffffffe0 & 0xffffffff00000000 | (ulonglong)(uint)
            piVar3[10]);
            in_stack_ffffffffffffffd8 =
                    in_stack_ffffffffffffffd8 & 0xffffffff00000000 | (ulonglong)(uint)
            piVar3[9];
            in_stack_ffffffffffffffd0 = (&PTR_u_Point_140c58a30)[piVar3[8]];
            in_stack_ffffffffffffffc8 = (&PTR_u_Scratch_140c58a70)[piVar3[7]];
            in_stack_ffffffffffffffb8 =
                    (undefined * )
                            ((ulonglong) in_stack_ffffffffffffffb8 & 0xffffffff00000000 | (ulonglong)(uint)
            piVar3[5]);
            in_stack_ffffffffffffffb0 =
                    in_stack_ffffffffffffffb0 & 0xffffffff00000000 | (ulonglong)(uint)
            piVar3[4];
            in_stack_ffffffffffffff98 =
                    (undefined * )
                            ((ulonglong) in_stack_ffffffffffffff98 & 0xffffffff00000000 | (ulonglong)(uint)
            piVar3[1]);
            in_stack_ffffffffffffff90 =
                    (undefined * )
                            ((ulonglong) in_stack_ffffffffffffff90 & 0xffffffff00000000 |
                             (ulonglong) * (uint * )(plVar5 + 0x1b));
            FUN_1400035b0(0xe, 1, 0, plVar5, (&PTR_DAT_140c589f8)[*piVar3], in_stack_ffffffffffffff90,
                          in_stack_ffffffffffffff98, piVar3[2], piVar3[3], in_stack_ffffffffffffffb0,
                          in_stack_ffffffffffffffb8, (&PTR_u_A8R8G8B8_140c58920)[piVar3[6]],
                          in_stack_ffffffffffffffc8, in_stack_ffffffffffffffd0, in_stack_ffffffffffffffd8,
                          in_stack_ffffffffffffffe0, puVar6);
        }
        for (plVar5 = *(longlong * *)(param_1 + 0x1ad8); plVar5 != (longlong *) 0x0;
             plVar5 = (longlong *) plVar5[0x48]) {
            piVar3 = (int *) (**(code * *)(*plVar5 + 0x18))(plVar5);
            puVar6 = &DAT_1409e3e94;
            if (*(undefined * *)(piVar3 + 0xc) != (undefined *) 0x0) {
                puVar6 = *(undefined * *)(piVar3 + 0xc);
            }
            in_stack_ffffffffffffffd0 =
                    (undefined * )
                            ((ulonglong) in_stack_ffffffffffffffd0 & 0xffffffff00000000 | (ulonglong)(uint)
            piVar3[10]);
            in_stack_ffffffffffffffc8 =
                    (undefined * )
                            ((ulonglong) in_stack_ffffffffffffffc8 & 0xffffffff00000000 | (ulonglong)(uint)
            piVar3[9]);
            in_stack_ffffffffffffff98 =
                    (undefined * )
                            ((ulonglong) in_stack_ffffffffffffff98 & 0xffffffff00000000 | (ulonglong)(uint)
            piVar3[1]);
            in_stack_ffffffffffffff90 =
                    (undefined * )
                            ((ulonglong) in_stack_ffffffffffffff90 & 0xffffffff00000000 |
                             (ulonglong) * (uint * )(plVar5 + 0x3e));
            FUN_1400035b0(0xe, 1, 0, plVar5, (&PTR_DAT_140c589f8)[*piVar3], in_stack_ffffffffffffff90,
                          in_stack_ffffffffffffff98, piVar3[4], piVar3[5],
                          (&PTR_u_A8R8G8B8_140c58920)[piVar3[6]], (&PTR_u_Scratch_140c58a70)[piVar3[7]],
                          (&PTR_u_Point_140c58a30)[piVar3[8]], in_stack_ffffffffffffffc8,
                          in_stack_ffffffffffffffd0, puVar6);
        }
    }
    plVar5 = *(longlong * *)(param_1 + 0x1ae0);
    if (plVar5 == (longlong *) 0x0) {
        if (*(longlong * )(param_1 + 0x1ae8) == 0) goto LAB_1402820c3;
    } else {
        do {
            piVar3 = (int *) (**(code * *)(*plVar5 + 0x18))(plVar5);
            FUN_1400035b0(0xe, 1, 0, plVar5, (&PTR_u_VS30_140c58a10)[*piVar3], *(undefined8 * )(piVar3 + 2));
            plVar5 = (longlong *) plVar5[0x14];
        } while (plVar5 != (longlong *) 0x0);
    }
    for (plVar5 = *(longlong * *)(param_1 + 0x1ae8); plVar5 != (longlong *) 0x0;
         plVar5 = (longlong *) plVar5[0x13]) {
        piVar3 = (int *) (**(code * *)(*plVar5 + 0x18))(plVar5);
        FUN_1400035b0(0xe, 1, 0, plVar5, (&PTR_u_VS30_140c58a10)[*piVar3], *(undefined8 * )(piVar3 + 2));
    }
    LAB_1402820c3:
    for (plVar5 = *(longlong * *)(param_1 + 0x1af0); plVar5 != (longlong *) 0x0;
         plVar5 = (longlong *) plVar5[0x12]) {
        puVar4 = (undefined8 * )(**(code * *)(*plVar5 + 0x18))(plVar5);
        FUN_1400035b0(0xe, 1, 0, plVar5, *puVar4);
    }
    for (lVar1 = *(longlong * )(param_1 + 0x1af8); lVar1 != 0; lVar1 = *(longlong * )(lVar1 + 0x38)) {
        FUN_1400035b0(0xe);
    }
    for (lVar1 = *(longlong * )(param_1 + 0x1b00); lVar1 != 0; lVar1 = *(longlong * )(lVar1 + 0x30)) {
        FUN_1400035b0(0xe);
    }
    for (lVar1 = *(longlong * )(param_1 + 0x1b08); lVar1 != 0; lVar1 = *(longlong * )(lVar1 + 0xf8)) {
        FUN_1400035b0(0xe);
    }
    return;
}


void FUN_140282490(longlong *param_1, undefined4 *param_2, longlong **param_3) {
    ulonglong **ppuVar1;
    ulonglong *puVar2;
    longlong *plVar3;
    ulonglong uVar4;
    ulonglong *puVar5;

    if (*param_1 == param_1[1]) {
        FUN_1400290d0();
    }
    uVar4 = (*(code *) param_1[3])(param_2);
    ppuVar1 = (ulonglong * *)(param_1[2] + (uVar4 % (ulonglong) param_1[1]) * 8);
    puVar5 = (ulonglong *) FUN_14018b280(0x40);
    if (puVar5 == (ulonglong *) 0x0) {
        *ppuVar1 = (ulonglong *) 0x0;
    } else {
        puVar2 = *ppuVar1;
        *puVar5 = uVar4;
        puVar5[1] = (ulonglong) puVar2;
        *(undefined4 * )(puVar5 + 2) = *param_2;
        *(undefined4 * )((longlong) puVar5 + 0x14) = param_2[1];
        *(undefined4 * )(puVar5 + 3) = param_2[2];
        *(undefined4 * )((longlong) puVar5 + 0x1c) = param_2[3];
        *(undefined4 * )(puVar5 + 4) = param_2[4];
        *(undefined4 * )((longlong) puVar5 + 0x24) = param_2[5];
        *(undefined4 * )(puVar5 + 5) = param_2[6];
        *(undefined4 * )((longlong) puVar5 + 0x2c) = param_2[7];
        *(undefined4 * )(puVar5 + 6) = param_2[8];
        *(undefined4 * )((longlong) puVar5 + 0x34) = param_2[9];
        plVar3 = *param_3;
        puVar5[7] = (ulonglong) plVar3;
        if (plVar3 != (longlong *) 0x0) {
            (**(code * *)(*plVar3 + 8))();
        }
        *ppuVar1 = puVar5;
    }
    *param_1 = *param_1 + 1;
    return;
}


longlong **FUN_140282570(longlong **param_1, longlong *param_2) {
    if (*param_1 != param_2) {
        if (param_2 != (longlong *) 0x0) {
            (**(code * *)(*param_2 + 8))(param_2);
        }
        if (*param_1 != (longlong *) 0x0) {
            (**(code * *)(**param_1 + 0x10))();
        }
        *param_1 = param_2;
    }
    return param_1;
}


void FUN_1402825c0(longlong param_1, undefined8 *param_2) {
    undefined8 uVar1;
    longlong lVar2;
    undefined8 uVar3;
    longlong *plVar4;
    undefined8 *puVar5;

    if (*(longlong * )(param_1 + 0x18) != *(longlong * )(param_1 + 0x20)) {
        puVar5 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + -8);
        if (puVar5 != (undefined8 *) 0x0) {
            *puVar5 = *param_2;
        }
        *(longlong * )(param_1 + 0x18) = *(longlong * )(param_1 + 0x18) + -8;
        return;
    }
    uVar1 = *param_2;
    if (*(longlong * )(param_1 + 0x30) - *(longlong * )(param_1 + 8) >> 3 == 0) {
        FUN_140282940(param_1, param_2, 1);
    }
    uVar3 = FUN_14018b280(0x1f0, 0);
    *(undefined8 * )(*(longlong * )(param_1 + 0x30) + -8) = uVar3;
    plVar4 = (longlong * )(*(longlong * )(param_1 + 0x30) + -8);
    *(longlong * *)(param_1 + 0x30) = plVar4;
    lVar2 = *plVar4;
    *(longlong * )(param_1 + 0x20) = lVar2;
    *(longlong * )(param_1 + 0x28) = lVar2 + 0x1f0;
    puVar5 = (undefined8 * )(lVar2 + 0x1e8);
    *(undefined8 * *)(param_1 + 0x18) = puVar5;
    if (puVar5 != (undefined8 *) 0x0) {
        *puVar5 = uVar1;
    }
    return;
}


void FUN_140282660(longlong param_1) {
    longlong lVar1;
    longlong *plVar2;

    if (*(longlong * )(param_1 + 0x18) != *(longlong * )(param_1 + 0x28) + -8) {
        *(longlong * )(param_1 + 0x18) = *(longlong * )(param_1 + 0x18) + 8;
        return;
    }
    FUN_14018b900(*(undefined8 * )(param_1 + 0x20), 0);
    plVar2 = (longlong * )(*(longlong * )(param_1 + 0x30) + 8);
    *(longlong * *)(param_1 + 0x30) = plVar2;
    lVar1 = *plVar2;
    *(longlong * )(param_1 + 0x20) = lVar1;
    *(longlong * )(param_1 + 0x28) = lVar1 + 0x1f0;
    *(undefined8 * )(param_1 + 0x18) = *(undefined8 * )(param_1 + 0x20);
    return;
}


longlong FUN_1402826c0(longlong *param_1, longlong **param_2) {
    longlong **pplVar1;
    undefined8 *puVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong lVar5;
    longlong lVar6;
    ulonglong uVar7;

    lVar3 = param_1[1];
    lVar6 = FUN_14018db00(*param_1, lVar3 + 1, 8);
    pplVar1 = (longlong * *)(lVar6 + lVar3 * 8);
    if (pplVar1 != (longlong **) 0x0) {
        plVar4 = *param_2;
        *pplVar1 = plVar4;
        if (plVar4 != (longlong *) 0x0) {
            (**(code * *)(*plVar4 + 8))();
        }
    }
    if (*param_1 != lVar6) {
        uVar7 = 0;
        if (param_1[1] != 0) {
            do {
                puVar2 = (undefined8 * )(lVar6 + uVar7 * 8);
                if (puVar2 != (undefined8 *) 0x0) {
                    lVar5 = *param_1;
                    *puVar2 = *(undefined8 * )(lVar5 + uVar7 * 8);
                    *(undefined8 * )(lVar5 + uVar7 * 8) = 0;
                }
                plVar4 = *(longlong * *)(*param_1 + uVar7 * 8);
                if (plVar4 != (longlong *) 0x0) {
                    (**(code * *)(*plVar4 + 0x10))();
                }
                uVar7 = uVar7 + 1;
            } while (uVar7 < (ulonglong) param_1[1]);
        }
        lVar5 = *param_1;
        if (lVar5 != 0) {
            (**(code * *)(*(longlong * )(lVar5 + -0x10) + 8))(lVar5 + -0x10);
        }
        *param_1 = lVar6;
    }
    param_1[1] = lVar3 + 1;
    return lVar3;
}


longlong FUN_140282790(longlong *param_1, undefined8 *param_2) {
    undefined8 *puVar1;
    longlong lVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong lVar5;
    ulonglong uVar6;

    lVar2 = param_1[1];
    lVar5 = FUN_14018db00(*param_1, lVar2 + 1, 8);
    uVar6 = 0;
    puVar1 = (undefined8 * )(lVar5 + lVar2 * 8);
    if (puVar1 != (undefined8 *) 0x0) {
        *puVar1 = *param_2;
        *param_2 = 0;
    }
    if (*param_1 != lVar5) {
        if (param_1[1] != 0) {
            do {
                puVar1 = (undefined8 * )(lVar5 + uVar6 * 8);
                if (puVar1 != (undefined8 *) 0x0) {
                    lVar3 = *param_1;
                    *puVar1 = *(undefined8 * )(lVar3 + uVar6 * 8);
                    *(undefined8 * )(lVar3 + uVar6 * 8) = 0;
                }
                plVar4 = *(longlong * *)(*param_1 + uVar6 * 8);
                if (plVar4 != (longlong *) 0x0) {
                    (**(code * *)(*plVar4 + 0x10))();
                }
                uVar6 = uVar6 + 1;
            } while (uVar6 < (ulonglong) param_1[1]);
        }
        lVar3 = *param_1;
        if (lVar3 != 0) {
            (**(code * *)(*(longlong * )(lVar3 + -0x10) + 8))(lVar3 + -0x10);
        }
        *param_1 = lVar5;
    }
    param_1[1] = lVar2 + 1;
    return lVar2;
}


void FUN_140282860(longlong param_1, undefined8 *param_2) {
    undefined8 uVar1;
    undefined8 uVar2;
    longlong *plVar3;
    longlong lVar4;

    uVar1 = *param_2;
    lVar4 = *(longlong * )(param_1 + 0x50) - *(longlong * )(param_1 + 8) >> 3;
    if ((ulonglong)(*(longlong * )(param_1 + 0x10) - lVar4) < 2) {
        FUN_140282940(param_1, lVar4, 0);
    }
    uVar2 = FUN_14018b280(0x1f0, 0);
    *(undefined8 * )(*(longlong * )(param_1 + 0x50) + 8) = uVar2;
    if (*(undefined8 * *)(param_1 + 0x38) != (undefined8 *) 0x0) {
        **(undefined8 * *)(param_1 + 0x38) = uVar1;
    }
    plVar3 = (longlong * )(*(longlong * )(param_1 + 0x50) + 8);
    *(longlong * *)(param_1 + 0x50) = plVar3;
    lVar4 = *plVar3;
    *(longlong * )(param_1 + 0x40) = lVar4;
    *(longlong * )(param_1 + 0x48) = lVar4 + 0x1f0;
    *(undefined8 * )(param_1 + 0x38) = *(undefined8 * )(param_1 + 0x40);
    return;
}


undefined8 *FUN_1402828f0(undefined8 *param_1, ulonglong param_2) {
    if ((longlong *) param_1[2] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[2] + 0x10))();
    }
    *param_1 = &PTR_LAB_140b55048;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_140282940(longlong param_1, undefined8 param_2, char param_3) {
    ulonglong *puVar1;
    longlong *plVar2;
    ulonglong *puVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    ulonglong uVar7;
    longlong *plVar8;
    ulonglong local_res10;

    plVar2 = *(longlong * *)(param_1 + 0x30);
    puVar1 = (ulonglong * )(param_1 + 0x10);
    uVar7 = *puVar1;
    local_res10 = 1;
    lVar6 = *(longlong * )(param_1 + 0x50) - (longlong) plVar2 >> 3;
    lVar5 = lVar6 + 2;
    if ((ulonglong)(lVar5 * 2) < uVar7) {
        lVar4 = *(longlong * )(param_1 + 0x50) - (longlong) plVar2;
        plVar8 = (longlong * )
                (*(longlong * )(param_1 + 8) + ((uVar7 - lVar5 >> 1) + (ulonglong)(param_3 != '\0')) * 8
                );
        if (plVar8 < plVar2) {
            FUN_1407db590(plVar8, plVar2, lVar4 + 8U & 0xfffffffffffffff8);
        } else {
            lVar5 = lVar4 + 8 >> 3;
            FUN_1407db590(plVar8 + ((lVar6 + 1) - lVar5), plVar2, lVar5 * 8);
        }
    } else {
        puVar3 = &local_res10;
        if (uVar7 != 0) {
            puVar3 = puVar1;
        }
        uVar7 = uVar7 + 2 + *puVar3;
        lVar4 = FUN_14018b280(uVar7 * 8, 0);
        plVar8 = (longlong * )(lVar4 + ((uVar7 - lVar5 >> 1) + (ulonglong)(param_3 != '\0')) * 8);
        FUN_1407db590(plVar8, *(longlong * )(param_1 + 0x30),
                      (*(longlong * )(param_1 + 0x50) - *(longlong * )(param_1 + 0x30)) + 8U &
                      0xfffffffffffffff8);
        FUN_14018b900(*(undefined8 * )(param_1 + 8), 0);
        *(longlong * )(param_1 + 8) = lVar4;
        *puVar1 = uVar7;
    }
    *(longlong * *)(param_1 + 0x30) = plVar8;
    lVar5 = *plVar8;
    *(longlong * )(param_1 + 0x20) = lVar5;
    *(longlong * )(param_1 + 0x28) = lVar5 + 0x1f0;
    *(longlong * *)(param_1 + 0x50) = plVar8 + lVar6;
    lVar5 = plVar8[lVar6];
    *(longlong * )(param_1 + 0x40) = lVar5;
    *(longlong * )(param_1 + 0x48) = lVar5 + 0x1f0;
    return;
}


undefined8 *FUN_140282ab0(undefined8 *param_1) {
    ulonglong uVar1;
    undefined8 uVar2;

    *param_1 = 0;
    uVar1 = FUN_1401a40c0(0);
    param_1[1] = uVar1;
    uVar2 = SUB168(ZEXT816(8) * ZEXT816(uVar1), 0);
    if (SUB168(ZEXT816(8) * ZEXT816(uVar1) >> 0x40, 0) != 0) {
        uVar2 = 0xffffffffffffffff;
    }
    uVar2 = FUN_14018b280(uVar2, 0);
    param_1[2] = uVar2;
    FUN_1407e4830(uVar2, 0, param_1[1] << 3);
    param_1[3] = &LAB_140282b40;
    param_1[4] = &LAB_140282b20;
    return param_1;
}


void FUN_140282c10(undefined8 *param_1) {
    longlong *plVar1;
    longlong lVar2;
    ulonglong uVar3;

    uVar3 = 0;
    if (param_1[1] != 0) {
        do {
            plVar1 = (longlong * )(param_1[2] + uVar3 * 8);
            lVar2 = *(longlong * )(param_1[2] + uVar3 * 8);
            while (lVar2 != 0) {
                lVar2 = *plVar1;
                *plVar1 = *(longlong * )(lVar2 + 8);
                if (*(longlong * *)(lVar2 + 0x118) != (longlong *) 0x0) {
                    (**(code * *)(**(longlong * *)(lVar2 + 0x118) + 0x10))();
                }
                FUN_14018b900(lVar2, 0);
                lVar2 = *plVar1;
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < (ulonglong) param_1[1]);
        *param_1 = 0;
        return;
    }
    *param_1 = 0;
    return;
}


undefined8 *FUN_140282cb0(undefined8 *param_1) {
    ulonglong uVar1;
    undefined8 uVar2;

    *param_1 = 0;
    uVar1 = FUN_1401a40c0(0);
    param_1[1] = uVar1;
    uVar2 = SUB168(ZEXT816(8) * ZEXT816(uVar1), 0);
    if (SUB168(ZEXT816(8) * ZEXT816(uVar1) >> 0x40, 0) != 0) {
        uVar2 = 0xffffffffffffffff;
    }
    uVar2 = FUN_14018b280(uVar2, 0);
    param_1[2] = uVar2;
    FUN_1407e4830(uVar2, 0, param_1[1] << 3);
    param_1[3] = &LAB_140282d40;
    param_1[4] = &LAB_140282d20;
    return param_1;
}


void FUN_140282e50(undefined8 *param_1) {
    longlong *plVar1;
    longlong lVar2;
    ulonglong uVar3;

    uVar3 = 0;
    if (param_1[1] != 0) {
        do {
            plVar1 = (longlong * )(param_1[2] + uVar3 * 8);
            lVar2 = *(longlong * )(param_1[2] + uVar3 * 8);
            while (lVar2 != 0) {
                lVar2 = *plVar1;
                *plVar1 = *(longlong * )(lVar2 + 8);
                if (*(longlong * *)(lVar2 + 0x48) != (longlong *) 0x0) {
                    (**(code * *)(**(longlong * *)(lVar2 + 0x48) + 0x10))();
                }
                FUN_14018b900(lVar2, 0);
                lVar2 = *plVar1;
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < (ulonglong) param_1[1]);
        *param_1 = 0;
        return;
    }
    *param_1 = 0;
    return;
}


undefined8 *FUN_140282ee0(undefined8 *param_1) {
    ulonglong uVar1;
    undefined8 uVar2;

    *param_1 = 0;
    uVar1 = FUN_1401a40c0(0);
    param_1[1] = uVar1;
    uVar2 = SUB168(ZEXT816(8) * ZEXT816(uVar1), 0);
    if (SUB168(ZEXT816(8) * ZEXT816(uVar1) >> 0x40, 0) != 0) {
        uVar2 = 0xffffffffffffffff;
    }
    uVar2 = FUN_14018b280(uVar2, 0);
    param_1[2] = uVar2;
    FUN_1407e4830(uVar2, 0, param_1[1] << 3);
    param_1[3] = &LAB_140282f70;
    param_1[4] = &LAB_140282f50;
    return param_1;
}


void FUN_140283040(undefined8 *param_1) {
    longlong *plVar1;
    longlong lVar2;
    ulonglong uVar3;

    uVar3 = 0;
    if (param_1[1] != 0) {
        do {
            plVar1 = (longlong * )(param_1[2] + uVar3 * 8);
            lVar2 = *(longlong * )(param_1[2] + uVar3 * 8);
            while (lVar2 != 0) {
                lVar2 = *plVar1;
                *plVar1 = *(longlong * )(lVar2 + 8);
                if (*(longlong * *)(lVar2 + 0x38) != (longlong *) 0x0) {
                    (**(code * *)(**(longlong * *)(lVar2 + 0x38) + 0x10))();
                }
                FUN_14018b900(lVar2, 0);
                lVar2 = *plVar1;
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < (ulonglong) param_1[1]);
        *param_1 = 0;
        return;
    }
    *param_1 = 0;
    return;
}


undefined8 *FUN_1402830d0(undefined8 *param_1, undefined8 param_2) {
    *param_1 = &PTR_LAB_140b61570;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    FUN_1402874e0();
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    FUN_140287560(param_1 + 0x11);
    param_1[0x1f] = 0;
    param_1[0x1e] = 0;
    param_1[0x20] = 0;
    param_1[0x22] = 0;
    param_1[0x21] = 0;
    param_1[0x24] = 0;
    param_1[0x23] = 0;
    param_1[0x26] = 0;
    param_1[0x25] = 0;
    param_1[0x28] = 0;
    param_1[0x27] = 0;
    param_1[0x2a] = 0;
    param_1[0x29] = 0;
    param_1[0x2c] = 0;
    param_1[0x2b] = 0;
    param_1[0x2e] = 0;
    param_1[0x2d] = 0;
    param_1[0x30] = 0;
    param_1[0x2f] = 0;
    param_1[0x34] = 0;
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    param_1[2] = param_2;
    param_1[0x1c] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    *(undefined4 * )(param_1 + 1) = 1;
    return param_1;
}


void FUN_140283200(undefined8 *param_1) {
    longlong **pplVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    ulonglong uVar9;

    lVar4 = param_1[0x1c];
    *param_1 = &PTR_LAB_140b61570;
    while (lVar4 != 0) {
        param_1[0x1c] = *(undefined8 * )(param_1[0x1c] + 8);
        FUN_1402882b0();
        lVar4 = param_1[0x1c];
    }
    if ((longlong *) param_1[0x32] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x32] + 8))();
        param_1[0x32] = 0;
    }
    if ((longlong *) param_1[0x33] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x33] + 8))();
        param_1[0x33] = 0;
    }
    plVar2 = (longlong *) param_1[0xf];
    while (plVar2 != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0xf] + 8))();
        plVar2 = (longlong *) param_1[0xf];
    }
    pplVar1 = (longlong * *)(param_1 + 0x10);
    plVar2 = *pplVar1;
    while (plVar2 != (longlong *) 0x0) {
        (**(code * *)(**pplVar1 + 8))();
        plVar2 = *pplVar1;
    }
    FUN_1401981b0(param_1 + 0x38);
    for (plVar2 = (longlong *) param_1[7]; plVar2 != (longlong *) 0x0;
         plVar2 = (longlong *) plVar2[0x136]) {
        (**(code * *)(*plVar2 + 0x18))(plVar2);
        FUN_1400035b0(0xe);
    }
    for (plVar2 = (longlong *) param_1[0xd]; plVar2 != (longlong *) 0x0; plVar2 = (longlong *) plVar2[10]
            ) {
        uVar5 = (**(code * *)(*plVar2 + 0x40))(plVar2);
        uVar6 = (**(code * *)(*plVar2 + 0x30))(plVar2);
        FUN_1400035b0(0xe, 1, 0, plVar2, uVar6, uVar5);
    }
    if ((longlong *) param_1[0x39] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x39] + 8))();
    }
    FUN_1401981b0(param_1 + 0x38);
    if (param_1[0x38] != 0) {
        FUN_1401a4a00(param_1 + 0x38);
    }
    if ((longlong *) param_1[0x34] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x34] + 8))();
    }
    lVar4 = param_1[0x2f];
    if (lVar4 != 0) {
        (**(code * *)(*(longlong * )(lVar4 + -0x10) + 8))(lVar4 + -0x10);
    }
    lVar4 = param_1[0x2d];
    if (lVar4 != 0) {
        (**(code * *)(*(longlong * )(lVar4 + -0x10) + 8))(lVar4 + -0x10);
    }
    lVar4 = param_1[0x2b];
    if (lVar4 != 0) {
        (**(code * *)(*(longlong * )(lVar4 + -0x10) + 8))(lVar4 + -0x10);
    }
    lVar4 = param_1[0x29];
    if (lVar4 != 0) {
        (**(code * *)(*(longlong * )(lVar4 + -0x10) + 8))(lVar4 + -0x10);
    }
    lVar4 = param_1[0x27];
    if (lVar4 != 0) {
        (**(code * *)(*(longlong * )(lVar4 + -0x10) + 8))(lVar4 + -0x10);
    }
    lVar4 = param_1[0x25];
    if (lVar4 != 0) {
        (**(code * *)(*(longlong * )(lVar4 + -0x10) + 8))(lVar4 + -0x10);
    }
    lVar4 = param_1[0x23];
    if (lVar4 != 0) {
        (**(code * *)(*(longlong * )(lVar4 + -0x10) + 8))(lVar4 + -0x10);
    }
    uVar8 = 0;
    uVar7 = uVar8;
    uVar9 = uVar8;
    if (param_1[0x22] != 0) {
        do {
            plVar2 = *(longlong * *)(uVar9 + 0x60 + param_1[0x21]);
            if (plVar2 != (longlong *) 0x0) {
                (**(code * *)(*plVar2 + 8))();
            }
            uVar7 = uVar7 + 1;
            uVar9 = uVar9 + 0x90;
        } while (uVar7 < (ulonglong) param_1[0x22]);
    }
    lVar4 = param_1[0x21];
    if (lVar4 != 0) {
        (**(code * *)(*(longlong * )(lVar4 + -0x10) + 8))(lVar4 + -0x10);
    }
    uVar7 = uVar8;
    if (param_1[0x12] != 0) {
        do {
            lVar4 = param_1[0x13];
            lVar3 = *(longlong * )(lVar4 + uVar7 * 8);
            while (lVar3 != 0) {
                lVar3 = *(longlong * )(lVar4 + uVar7 * 8);
                *(undefined8 * )(lVar4 + uVar7 * 8) = *(undefined8 * )(lVar3 + 8);
                FUN_14018b900(lVar3, 0);
                lVar3 = *(longlong * )(lVar4 + uVar7 * 8);
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < (ulonglong) param_1[0x12]);
    }
    param_1[0x11] = 0;
    FUN_14018b900(param_1[0x13], 0);
    param_1[0x13] = 0;
    if (param_1[0x10] != 0) {
        FUN_1401a4a00(param_1 + 0x10);
    }
    if (param_1[0xf] != 0) {
        FUN_1401a4a00(param_1 + 0xf);
    }
    if (param_1[0xe] != 0) {
        FUN_1401a4a00(param_1 + 0xe);
    }
    if (param_1[0xd] != 0) {
        FUN_1401a4a00(param_1 + 0xd);
    }
    if (param_1[9] != 0) {
        do {
            lVar4 = param_1[10];
            lVar3 = *(longlong * )(lVar4 + uVar8 * 8);
            while (lVar3 != 0) {
                lVar3 = *(longlong * )(lVar4 + uVar8 * 8);
                *(undefined8 * )(lVar4 + uVar8 * 8) = *(undefined8 * )(lVar3 + 8);
                FUN_14018b900(lVar3, 0);
                lVar3 = *(longlong * )(lVar4 + uVar8 * 8);
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < (ulonglong) param_1[9]);
    }
    param_1[8] = 0;
    FUN_14018b900(param_1[10], 0);
    param_1[10] = 0;
    if (param_1[7] != 0) {
        FUN_1401a4a00(param_1 + 7);
    }
    if (param_1[6] != 0) {
        CloseHandle((HANDLE) param_1[6]);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140283670(longlong param_1) {
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    longlong *plVar4;
    longlong *plVar5;
    int iVar6;
    DWORD DVar7;
    uint uVar8;
    undefined4 *puVar9;
    ulonglong uVar10;
    longlong lVar11;
    PVOID pFileView;
    HANDLE pvVar12;
    undefined *puVar13;
    ulonglong uVar14;
    longlong local_res8;
    undefined8 local_res10;
    longlong *local_res18;
    undefined8 local_res20;
    ulonglong in_stack_ffffffffffffff58;
    undefined *in_stack_ffffffffffffff68;
    undefined **local_88;
    longlong local_80;
    code *local_78;
    undefined8 local_68;
    longlong local_60;
    code *local_58;
    undefined8 local_50;

    uVar14 = 0;
    *(undefined4 * )(param_1 + 0xb4) = 0;
    local_res8 = param_1;
    puVar9 = (undefined4 * )(**(code * *)(**(longlong * *)(param_1 + 0x10) + 0x2d0))();
    local_res10 = (longlong * )((ulonglong) local_res10._4_4_ << 0x20);
    *(undefined4 * )(param_1 + 0xb8) = *puVar9;
    puVar9 = (undefined4 *) FUN_140288100();
    *(undefined4 * *)(param_1 + 0xe0) = puVar9;
    *puVar9 = 0xff;
    *(undefined8 * )(*(longlong * )(param_1 + 0xe0) + 8) = 0;
    *(longlong * )(*(longlong * )(param_1 + 0xe0) + 0x10) = *(longlong * )(param_1 + 0xe0) + 0xb0;
    *(longlong * )(*(longlong * )(param_1 + 0xe0) + 0x18) = *(longlong * )(param_1 + 0xe0) + 0x50;
    *(longlong * )(*(longlong * )(param_1 + 0xe0) + 0x20) = *(longlong * )(param_1 + 0xe0) + 0x90;
    *(longlong * )(*(longlong * )(param_1 + 0xe0) + 0x28) = *(longlong * )(param_1 + 0xe0) + 0x9c;
    *(longlong * )(*(longlong * )(param_1 + 0xe0) + 0x30) = *(longlong * )(param_1 + 0xe0) + 0x140;
    *(longlong * )(*(longlong * )(param_1 + 0xe0) + 0x38) = *(longlong * )(param_1 + 0xe0) + 0x150;
    *(longlong * )(*(longlong * )(param_1 + 0xe0) + 0x40) = *(longlong * )(param_1 + 0xe0) + 0xa0;
    *(undefined4 * )(param_1 + 0xe8) = 0;
    *(undefined8 * )(param_1 + 0xf8) = 0;
    *(undefined8 * )(param_1 + 0xf0) = 0;
    *(undefined8 * )(param_1 + 0x100) = 0;
    uVar3 = uRam0000000140c7839c;
    uVar2 = uRam0000000140c78398;
    uVar1 = uRam0000000140c78394;
    puVar9 = *(undefined4 * *)(*(longlong * )(param_1 + 0xe0) + 0x10);
    *puVar9 = _DAT_140c78390;
    puVar9[1] = uVar1;
    puVar9[2] = uVar2;
    puVar9[3] = uVar3;
    uVar3 = uRam0000000140c783ac;
    uVar2 = uRam0000000140c783a8;
    uVar1 = uRam0000000140c783a4;
    puVar9[4] = _DAT_140c783a0;
    puVar9[5] = uVar1;
    puVar9[6] = uVar2;
    puVar9[7] = uVar3;
    uVar3 = uRam0000000140c783bc;
    uVar2 = uRam0000000140c783b8;
    uVar1 = uRam0000000140c783b4;
    puVar9[8] = _DAT_140c783b0;
    puVar9[9] = uVar1;
    puVar9[10] = uVar2;
    puVar9[0xb] = uVar3;
    uVar3 = uRam0000000140c783cc;
    uVar2 = uRam0000000140c783c8;
    uVar1 = uRam0000000140c783c4;
    puVar9[0xc] = _DAT_140c783c0;
    puVar9[0xd] = uVar1;
    puVar9[0xe] = uVar2;
    puVar9[0xf] = uVar3;
    uVar3 = uRam0000000140c7839c;
    uVar2 = uRam0000000140c78398;
    uVar1 = uRam0000000140c78394;
    lVar11 = *(longlong * )(*(longlong * )(param_1 + 0xe0) + 0x10);
    *(undefined4 * )(lVar11 + 0x40) = _DAT_140c78390;
    *(undefined4 * )(lVar11 + 0x44) = uVar1;
    *(undefined4 * )(lVar11 + 0x48) = uVar2;
    *(undefined4 * )(lVar11 + 0x4c) = uVar3;
    uVar3 = uRam0000000140c783ac;
    uVar2 = uRam0000000140c783a8;
    uVar1 = uRam0000000140c783a4;
    *(undefined4 * )(lVar11 + 0x50) = _DAT_140c783a0;
    *(undefined4 * )(lVar11 + 0x54) = uVar1;
    *(undefined4 * )(lVar11 + 0x58) = uVar2;
    *(undefined4 * )(lVar11 + 0x5c) = uVar3;
    uVar3 = uRam0000000140c783bc;
    uVar2 = uRam0000000140c783b8;
    uVar1 = uRam0000000140c783b4;
    *(undefined4 * )(lVar11 + 0x60) = _DAT_140c783b0;
    *(undefined4 * )(lVar11 + 100) = uVar1;
    *(undefined4 * )(lVar11 + 0x68) = uVar2;
    *(undefined4 * )(lVar11 + 0x6c) = uVar3;
    uVar3 = uRam0000000140c783cc;
    uVar2 = uRam0000000140c783c8;
    uVar1 = uRam0000000140c783c4;
    *(undefined4 * )(lVar11 + 0x70) = _DAT_140c783c0;
    *(undefined4 * )(lVar11 + 0x74) = uVar1;
    *(undefined4 * )(lVar11 + 0x78) = uVar2;
    *(undefined4 * )(lVar11 + 0x7c) = uVar3;
    *(undefined4 * )(*(longlong * )(*(longlong * )(param_1 + 0xe0) + 0x10) + 0x80) = 1;
    iVar6 = (**(code * *)(**(longlong * *)(param_1 + 0x10) + 0x90))
            (*(longlong * *)(param_1 + 0x10), L"Shaders\\SpriteVS.sho", param_1 + 400);
    if ((-1 < iVar6) &&
        (iVar6 = (**(code * *)(**(longlong * *)(param_1 + 0x10) + 0x98))
                (*(longlong * *)(param_1 + 0x10), L"Shaders\\SpritePS.sho", param_1 + 0x198),
                -1 < iVar6)) {
        iVar6 = (**(code * *)(**(longlong * *)(param_1 + 0x10) + 0xc0))
                (*(longlong * *)(param_1 + 0x10), param_1 + 0x1c8);
        if (-1 < iVar6) {
            local_58 = FUN_140283c30;
            local_68 = (undefined * *)((ulonglong) local_68._4_4_ << 0x20);
            local_50 = 0;
            local_60 = param_1;
            (**(code * *)(**(longlong * *)(param_1 + 0x1c8) + 0x18))
                    (*(longlong * *)(param_1 + 0x1c8), 1, &local_68);
            local_res10 = (longlong *) 0x0;
            iVar6 = FUN_1401b54e0();
            plVar4 = local_res10;
            if (iVar6 < 0) {
                local_res8 = 0x141de3a48;
                FUN_1401a3130(0xe, 2, &local_res8, iVar6);
            } else {
                uVar10 = (**(code * *)(*local_res10 + 0x10))(local_res10);
                if (uVar10 != 0) {
                    do {
                        local_res18 = (longlong *) 0x0;
                        (**(code * *)(*plVar4 + 0x18))(plVar4, uVar14);
                        iVar6 = FUN_1401b6d00();
                        plVar5 = local_res18;
                        if (iVar6 < 0) {
                            lVar11 = (**(code * *)(*plVar4 + 0x18))(plVar4, uVar14);
                            if (lVar11 == 0) {
                                in_stack_ffffffffffffff68 = &DAT_140ae56c4;
                            } else {
                                in_stack_ffffffffffffff68 =
                                        (undefined * )(**(code * *)(*plVar4 + 0x18))(plVar4, uVar14);
                            }
                            local_res20 = 0x141de3a28;
                            in_stack_ffffffffffffff58 = uVar14;
                            FUN_1401a3130(0xe, 2, &local_res20, iVar6, uVar14, uVar10, in_stack_ffffffffffffff68);
                            local_88 = &PTR_LAB_140b5e648;
                            local_80 = 0;
                            local_78 = (code *) TlsGetValue(DAT_140c63720);
                            TlsSetValue(DAT_140c63720, &local_88);
                            local_68 = local_88;
                            local_60 = local_80;
                            local_58 = local_78;
                            local_res20 = 0x141de39f8;
                            iVar6 = FUN_1401971e0(&DAT_140c8a3a4, 0xe, &local_res20);
                            local_88 = &PTR_LAB_140b5e648;
                            TlsSetValue(DAT_140c63720, local_78);
                            if (iVar6 != 0) {
                                DebugBreak();
                            }
                            if (local_res18 != (longlong *) 0x0) {
                                (**(code * *)(*local_res18 + 8))();
                            }
                        } else {
                            DVar7 = (**(code * *)(*local_res18 + 0x10))(local_res18);
                            pFileView = (PVOID)(**(code * *)(*plVar5 + 0x20))(plVar5);
                            pvVar12 = AddFontMemResourceEx(pFileView, DVar7, (PVOID) 0x0, (DWORD * ) & local_res10);
                            if (pvVar12 == (HANDLE) 0x0) {
                                lVar11 = (**(code * *)(*plVar4 + 0x18))(plVar4, uVar14);
                                if (lVar11 == 0) {
                                    puVar13 = &DAT_140ae5734;
                                } else {
                                    puVar13 = (undefined * )(**(code * *)(*plVar4 + 0x18))(plVar4, uVar14);
                                }
                                local_res18 = (longlong *) 0x141de3b10;
                                DVar7 = GetLastError();
                                uVar8 = (**(code * *)(*plVar5 + 0x10))(plVar5);
                                in_stack_ffffffffffffff68 =
                                        (undefined * )
                                                ((ulonglong) in_stack_ffffffffffffff68 & 0xffffffff00000000 |
                                                 (ulonglong) DVar7);
                                in_stack_ffffffffffffff58 =
                                        in_stack_ffffffffffffff58 & 0xffffffff00000000 | (ulonglong) uVar8;
                                FUN_1401a3130(0xe, 2, &local_res18, iVar6, in_stack_ffffffffffffff58, puVar13,
                                              in_stack_ffffffffffffff68);
                                local_80 = 0;
                                local_88 = &PTR_LAB_140b5e648;
                                local_78 = (code *) TlsGetValue(DAT_140c63720);
                                TlsSetValue(DAT_140c63720, &local_88);
                                local_68 = local_88;
                                local_res18 = (longlong *) 0x141de3ae0;
                                local_58 = local_78;
                                local_60 = local_80;
                                iVar6 = FUN_1401971e0(&DAT_140c8a3a0, 0xe, &local_res18, &local_68);
                                local_88 = &PTR_LAB_140b5e648;
                                TlsSetValue(DAT_140c63720, local_78);
                                if (iVar6 != 0) {
                                    DebugBreak();
                                }
                            }
                            (**(code * *)(*plVar5 + 8))(plVar5);
                        }
                        uVar14 = uVar14 + 1;
                        param_1 = local_res8;
                    } while (uVar14 < uVar10);
                }
                iVar6 = 0;
                *(undefined4 * )(param_1 + 0xb0) = 0;
            }
            if (plVar4 != (longlong *) 0x0) {
                (**(code * *)(*plVar4 + 8))(plVar4);
            }
            return iVar6;
        }
        local_res8 = 0x141de3a78;
        FUN_1401a3130(0xe, 2, &local_res8, iVar6);
        return iVar6;
    }
    local_res8 = 0x141de3a88;
    FUN_1401a3130(0xe, 2, &local_res8, iVar6, *(undefined8 * )(param_1 + 400),
                  *(undefined8 * )(param_1 + 0x198));
    return iVar6;
}


void FUN_140283c30(longlong param_1) {
    longlong lVar1;
    longlong *plVar2;
    longlong lVar3;
    uint uVar4;
    ulonglong uVar5;

    lVar3 = *(longlong * )(param_1 + 0x38);
    if (lVar3 != 0) {
        do {
            uVar5 = 0;
            if (*(int *) (lVar3 + 0x108) != 0) {
                do {
                    lVar1 = lVar3 + uVar5 * 8;
                    FUN_14018b900(*(undefined8 * )(lVar1 + 0x110), 0);
                    uVar4 = (int) uVar5 + 1;
                    uVar5 = (ulonglong) uVar4;
                    *(undefined8 * )(lVar1 + 0x110) = 0;
                } while (uVar4 < *(uint * )(lVar3 + 0x108));
            }
            *(undefined4 * )(lVar3 + 0x108) = 0;
            uVar5 = 0;
            if (*(longlong * )(lVar3 + 0x918) != 0) {
                do {
                    lVar1 = *(longlong * )(lVar3 + 0x910);
                    plVar2 = *(longlong * *)(lVar1 + uVar5 * 8);
                    if (plVar2 != (longlong *) 0x0) {
                        (**(code * *)(*plVar2 + 8))();
                        *(undefined8 * )(lVar1 + uVar5 * 8) = 0;
                    }
                    uVar5 = uVar5 + 1;
                } while (uVar5 < *(ulonglong * )(lVar3 + 0x918));
            }
            *(undefined8 * )(lVar3 + 0x918) = 0;
            *(undefined8 * )(lVar3 + 0x920) = 0;
            *(undefined4 * )(lVar3 + 0x928) = *(undefined4 * )(lVar3 + 0x93c);
            *(undefined4 * )(lVar3 + 0x92c) = *(undefined4 * )(lVar3 + 0x93c);
            for (lVar1 = *(longlong * )(lVar3 + 0x60); lVar1 != 0; lVar1 = *(longlong * )(lVar1 + 0x110)) {
                *(undefined8 * )(lVar1 + 0xc0) = 0;
            }
            lVar3 = *(longlong * )(lVar3 + 0x9b0);
        } while (lVar3 != 0);
    }
    return;
}


int FUN_140283d30(longlong param_1, longlong param_2, short *param_3, undefined8 *param_4,
                  undefined4 param_5, undefined8 *param_6) {
    DWORD *pDVar1;
    short sVar2;
    ulonglong *puVar3;
    DWORD DVar4;
    int iVar5;
    ulonglong uVar6;
    longlong lVar7;
    undefined8 *puVar8;
    HANDLE hObject;
    undefined8 *puVar9;
    ulonglong *puVar10;
    longlong local_60;
    short *local_58;
    undefined8 *local_50;
    undefined4 local_48;

    puVar8 = (undefined8 *) 0x0;
    if ((param_4 == (undefined8 *) 0xffffffffffffffff) && (param_4 = puVar8, param_3 != (short *) 0x0)) {
        sVar2 = *param_3;
        param_4 = (undefined8 *) 0x0;
        while (sVar2 != 0) {
            param_4 = (undefined8 * )((longlong) param_4 + 1);
            sVar2 = param_3[(longlong) param_4];
        }
    }
    if ((param_2 == 0) ||
        (((param_3 == (short *) 0x0 && (param_4 != (undefined8 *) 0x0)) || (param_6 == (undefined8 *) 0x0)
        ))) {
        return -0x7ff8ffa9;
    }
    pDVar1 = (DWORD * )(param_1 + 0x18);
    DVar4 = GetCurrentThreadId();
    puVar10 = (ulonglong * )(param_1 + 0x20);
    puVar9 = puVar8;
    if (*pDVar1 == DVar4) {
        *puVar10 = *puVar10 + 1;
    } else {
        do {
            LOCK();
            uVar6 = *puVar10;
            *puVar10 = *puVar10 ^ (ulonglong)(uVar6 == 0) * (*puVar10 ^ 1);
            if (uVar6 == 0) {
                *pDVar1 = DVar4;
                goto LAB_140283e10;
            }
            puVar9 = (undefined8 * )((longlong) puVar9 + 1);
        } while (puVar9 < &DAT_00000400);
        FUN_14019fb60(pDVar1);
    }
    LAB_140283e10:
    local_48 = param_5;
    local_60 = param_2;
    local_58 = param_3;
    local_50 = param_4;
    uVar6 = (**(code * *)(param_1 + 0xa0))(&local_60);
    puVar3 = *(ulonglong * *)
            (*(longlong * )(param_1 + 0x98) + (uVar6 % *(ulonglong * )(param_1 + 0x90)) * 8);
    do {
        if (puVar3 == (ulonglong *) 0x0) {
            LAB_140283e74:
            lVar7 = FUN_14018b280(0x128, 0);
            if (lVar7 != 0) {
                puVar8 = (undefined8 *) FUN_1402bae20(lVar7, param_1);
            }
            iVar5 = FUN_1402bb1f0(puVar8, param_2, param_3, param_4, param_5);
            if (iVar5 < 0) {
                if (puVar8 != (undefined8 *) 0x0) {
                    FUN_1402baf40(puVar8);
                    FUN_14018b900(puVar8, 0);
                }
            } else {
                LAB_140283eab:
                iVar5 = 0;
                *param_6 = puVar8;
            }
            if (1 < *puVar10) {
                *puVar10 = *puVar10 - 1;
                return iVar5;
            }
            *pDVar1 = 0;
            *puVar10 = 0;
            if (*(longlong * )(param_1 + 0x28) != 0) {
                if (*(longlong * )(param_1 + 0x30) == 0) {
                    hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                    LOCK();
                    puVar10 = (ulonglong * )(param_1 + 0x30);
                    uVar6 = *puVar10;
                    *puVar10 = *puVar10 ^ (ulonglong)(uVar6 == 0) * (*puVar10 ^ (ulonglong) hObject);
                    if (uVar6 != 0) {
                        CloseHandle(hObject);
                    }
                }
                SetEvent(*(HANDLE * )(param_1 + 0x30));
            }
            return iVar5;
        }
        if ((uVar6 == *puVar3) &&
            (iVar5 = (**(code * *)(param_1 + 0xa8))(&local_60, puVar3 + 2), iVar5 != 0)) {
            if (puVar3 + 6 != (ulonglong *) 0x0) {
                puVar8 = (undefined8 *) puVar3[6];
                (**(code * *) * puVar8)(puVar8);
                goto LAB_140283eab;
            }
            goto LAB_140283e74;
        }
        puVar3 = (ulonglong *) puVar3[1];
    } while (true);
}


int FUN_140283fc0(longlong param_1) {
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *) (param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_140283200();
            FUN_14018b900(param_1, 0);
        }
        iVar2 = 0;
    }
    return iVar2;
}


undefined8 FUN_140284000(longlong param_1, undefined8 param_2) {
    int iVar1;

    if (*(int *) (param_1 + 0xb0) != 0) {
        return 1;
    }
    iVar1 = (**(code * *)(**(longlong * *)(param_1 + 400) + 0x20))();
    if ((iVar1 != 0) &&
        (iVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x198) + 0x20))
                (*(longlong * *)(param_1 + 0x198), param_2), iVar1 != 0)) {
        *(undefined4 * )(param_1 + 0xb0) = 1;
        return 1;
    }
    return 0;
}


int FUN_140284070(longlong param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4,
                  undefined4 param_5, ulonglong *param_6) {
    DWORD *pDVar1;
    ulonglong uVar2;
    ulonglong *puVar3;
    undefined8 *puVar4;
    DWORD DVar5;
    int iVar6;
    ulonglong uVar7;
    longlong lVar8;
    ulonglong uVar9;
    HANDLE hObject;
    ulonglong *puVar10;
    undefined4 in_XMM3_Da;
    undefined8 local_58;
    undefined4 local_50;
    undefined4 local_4c;
    undefined4 local_48;

    if (param_6 == (ulonglong *) 0x0) {
        return -0x7ff8ffa9;
    }
    pDVar1 = (DWORD * )(param_1 + 0x18);
    DVar5 = GetCurrentThreadId();
    puVar10 = (ulonglong * )(param_1 + 0x20);
    uVar9 = 0;
    uVar7 = uVar9;
    if (*pDVar1 == DVar5) {
        *puVar10 = *puVar10 + 1;
    } else {
        do {
            LOCK();
            uVar2 = *puVar10;
            *puVar10 = *puVar10 ^ (ulonglong)(uVar2 == 0) * (*puVar10 ^ 1);
            if (uVar2 == 0) {
                *pDVar1 = DVar5;
                goto LAB_140284137;
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < 0x400);
        FUN_14019fb60(pDVar1);
    }
    LAB_140284137:
    local_48 = param_5;
    local_58 = param_2;
    local_50 = param_3;
    local_4c = in_XMM3_Da;
    uVar7 = (**(code * *)(param_1 + 0x58))(&local_58);
    puVar3 = *(ulonglong * *)
            (*(longlong * )(param_1 + 0x50) + (uVar7 % *(ulonglong * )(param_1 + 0x48)) * 8);
    do {
        if (puVar3 == (ulonglong *) 0x0) {
            LAB_140284190:
            lVar8 = FUN_14018b280(0x9b8, 0);
            if (lVar8 != 0) {
                uVar9 = FUN_1402b8470(lVar8, param_1);
            }
            iVar6 = FUN_1402b8820(uVar9, param_2, param_3);
            if (iVar6 < 0) {
                if (uVar9 != 0) {
                    FUN_1402b8530(uVar9);
                    FUN_14018b900(uVar9, 0);
                }
            } else {
                *param_6 = uVar9;
                LAB_140284207:
                iVar6 = 0;
            }
            if (*puVar10 < 2) {
                *pDVar1 = 0;
                *puVar10 = 0;
                if (*(longlong * )(param_1 + 0x28) != 0) {
                    if (*(longlong * )(param_1 + 0x30) == 0) {
                        hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                        LOCK();
                        puVar10 = (ulonglong * )(param_1 + 0x30);
                        uVar7 = *puVar10;
                        *puVar10 = *puVar10 ^ (ulonglong)(uVar7 == 0) * (*puVar10 ^ (ulonglong) hObject);
                        if (uVar7 != 0) {
                            CloseHandle(hObject);
                        }
                    }
                    SetEvent(*(HANDLE * )(param_1 + 0x30));
                }
            } else {
                *puVar10 = *puVar10 - 1;
            }
            return iVar6;
        }
        if ((uVar7 == *puVar3) &&
            (iVar6 = (**(code * *)(param_1 + 0x60))(&local_58, puVar3 + 2), iVar6 != 0)) {
            if (puVar3 + 5 != (ulonglong *) 0x0) {
                puVar4 = (undefined8 *) puVar3[5];
                *param_6 = (ulonglong) puVar4;
                (**(code * *) * puVar4)();
                goto LAB_140284207;
            }
            goto LAB_140284190;
        }
        puVar3 = (ulonglong *) puVar3[1];
    } while (true);
}


undefined8 FUN_1402842b0(longlong param_1, ulonglong *param_2) {
    ulonglong *puVar1;
    ulonglong uVar2;
    DWORD DVar3;
    longlong lVar4;
    ulonglong uVar5;
    HANDLE hObject;
    ulonglong uVar6;

    if (param_2 == (ulonglong *) 0x0) {
        return 0x80070057;
    }
    DVar3 = GetCurrentThreadId();
    uVar5 = 0;
    uVar6 = uVar5;
    if (*(DWORD * )(param_1 + 0x18) == DVar3) {
        *(longlong * )(param_1 + 0x20) = *(longlong * )(param_1 + 0x20) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(param_1 + 0x20);
            uVar2 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar2 == 0) * (*puVar1 ^ 1);
            if (uVar2 == 0) {
                *(DWORD * )(param_1 + 0x18) = DVar3;
                goto LAB_140284326;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(param_1 + 0x18);
    }
    LAB_140284326:
    lVar4 = FUN_14018b280(0x58);
    if (lVar4 != 0) {
        uVar5 = FUN_1402bc050(lVar4, param_1);
    }
    *param_2 = uVar5;
    if (*(ulonglong * )(param_1 + 0x20) < 2) {
        *(undefined4 * )(param_1 + 0x18) = 0;
        *(undefined8 * )(param_1 + 0x20) = 0;
        if (*(longlong * )(param_1 + 0x28) != 0) {
            if (*(longlong * )(param_1 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(param_1 + 0x30);
                uVar6 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar6 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(param_1 + 0x30));
        }
    } else {
        *(longlong * )(param_1 + 0x20) = *(longlong * )(param_1 + 0x20) + -1;
    }
    return 0;
}


int FUN_140284590(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
                  ulonglong *param_5) {
    DWORD *pDVar1;
    ulonglong uVar2;
    DWORD DVar3;
    int iVar4;
    longlong lVar5;
    ulonglong uVar6;
    HANDLE hObject;
    ulonglong uVar7;
    ulonglong *puVar8;

    if (param_5 == (ulonglong *) 0x0) {
        iVar4 = -0x7ff8ffa9;
    } else {
        pDVar1 = (DWORD * )(param_1 + 0x18);
        DVar3 = GetCurrentThreadId();
        uVar6 = 0;
        puVar8 = (ulonglong * )(param_1 + 0x20);
        uVar7 = uVar6;
        if (*pDVar1 == DVar3) {
            *puVar8 = *puVar8 + 1;
        } else {
            do {
                LOCK();
                uVar2 = *puVar8;
                *puVar8 = *puVar8 ^ (ulonglong)(uVar2 == 0) * (*puVar8 ^ 1);
                if (uVar2 == 0) {
                    *pDVar1 = DVar3;
                    goto LAB_14028462a;
                }
                uVar7 = uVar7 + 1;
            } while (uVar7 < 0x400);
            FUN_14019fb60(pDVar1);
        }
        LAB_14028462a:
        lVar5 = FUN_14018b280(0x58);
        if (lVar5 != 0) {
            uVar6 = FUN_1402bc050(lVar5, param_1);
        }
        iVar4 = FUN_1402bc140(uVar6, param_2, param_3, param_4, 0);
        if (iVar4 < 0) {
            if (uVar6 != 0) {
                FUN_1402bc0c0(uVar6);
                FUN_14018b900(uVar6, 0);
            }
        } else {
            *param_5 = uVar6;
            iVar4 = 0;
        }
        if (*puVar8 < 2) {
            *pDVar1 = 0;
            *puVar8 = 0;
            if (*(longlong * )(param_1 + 0x28) != 0) {
                if (*(longlong * )(param_1 + 0x30) == 0) {
                    hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                    LOCK();
                    puVar8 = (ulonglong * )(param_1 + 0x30);
                    uVar7 = *puVar8;
                    *puVar8 = *puVar8 ^ (ulonglong)(uVar7 == 0) * (*puVar8 ^ (ulonglong) hObject);
                    if (uVar7 != 0) {
                        CloseHandle(hObject);
                    }
                }
                SetEvent(*(HANDLE * )(param_1 + 0x30));
            }
        } else {
            *puVar8 = *puVar8 - 1;
        }
    }
    return iVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140284710(longlong *param_1) {
    longlong **pplVar1;
    int iVar2;
    longlong *plVar3;
    undefined4 *puVar4;
    longlong *plVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    int *piVar9;
    longlong lVar10;
    float fVar11;
    float fVar12;
    undefined4 uVar13;
    undefined4 uVar14;
    undefined4 uVar15;
    undefined4 uVar16;
    undefined local_58[16];
    undefined local_48[16];

    piVar9 = (int *) (**(code * *)(*(longlong *) param_1[2] + 0x2d0))();
    iVar2 = *piVar9;
    if (*(int *) (param_1 + 0x17) != iVar2) {
        pplVar1 = (longlong * *)(param_1 + 0x10);
        plVar5 = *pplVar1;
        while (plVar5 != (longlong *) 0x0) {
            (**(code * *)(**pplVar1 + 8))();
            plVar5 = *pplVar1;
        }
        plVar5 = *pplVar1;
        plVar3 = (longlong *) param_1[0xf];
        param_1[0xf] = (longlong) plVar5;
        *pplVar1 = plVar3;
        if (plVar5 != (longlong *) 0x0) {
            plVar5[0x23] = (longlong)(param_1 + 0xf);
        }
        if (plVar3 != (longlong *) 0x0) {
            plVar3[0x23] = (longlong) pplVar1;
        }
        *(int *) (param_1 + 0x17) = iVar2;
    }
    lVar10 = (**(code * *)(*(longlong *) param_1[2] + 0x248))();
    fVar12 = 1.0 / (float) (ulonglong) * (uint * )(lVar10 + 8);
    local_48 = ZEXT816(CONCAT44((float) (ulonglong) * (uint * )(lVar10 + 0xc),
                                (float) (ulonglong) * (uint * )(lVar10 + 8)));
    fVar11 = 1.0 / (float) (ulonglong) * (uint * )(lVar10 + 0xc);
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar16 = 0;
    *(undefined(*)[16])(param_1 + 0x18) =
            CONCAT412(0x3f800000, CONCAT48(0x3f800000, CONCAT44(fVar11 * -2.0, fVar12 * 2.0)));
    local_58 = ZEXT816(0);
    *(undefined(*)[16])(param_1 + 0x1a) = ZEXT816(CONCAT44(fVar11 + 1.0, -1.0 - fVar12));
    uVar8 = uRam0000000140c7839c;
    uVar7 = uRam0000000140c78398;
    uVar6 = uRam0000000140c78394;
    puVar4 = *(undefined4 * *)(param_1[0x1c] + 0x10);
    *puVar4 = _DAT_140c78390;
    puVar4[1] = uVar6;
    puVar4[2] = uVar7;
    puVar4[3] = uVar8;
    uVar8 = uRam0000000140c783ac;
    uVar7 = uRam0000000140c783a8;
    uVar6 = uRam0000000140c783a4;
    puVar4[4] = _DAT_140c783a0;
    puVar4[5] = uVar6;
    puVar4[6] = uVar7;
    puVar4[7] = uVar8;
    uVar8 = uRam0000000140c783bc;
    uVar7 = uRam0000000140c783b8;
    uVar6 = uRam0000000140c783b4;
    puVar4[8] = _DAT_140c783b0;
    puVar4[9] = uVar6;
    puVar4[10] = uVar7;
    puVar4[0xb] = uVar8;
    uVar8 = uRam0000000140c783cc;
    uVar7 = uRam0000000140c783c8;
    uVar6 = uRam0000000140c783c4;
    puVar4[0xc] = _DAT_140c783c0;
    puVar4[0xd] = uVar6;
    puVar4[0xe] = uVar7;
    puVar4[0xf] = uVar8;
    uVar8 = uRam0000000140c7839c;
    uVar7 = uRam0000000140c78398;
    uVar6 = uRam0000000140c78394;
    lVar10 = *(longlong * )(param_1[0x1c] + 0x10);
    *(undefined4 * )(lVar10 + 0x40) = _DAT_140c78390;
    *(undefined4 * )(lVar10 + 0x44) = uVar6;
    *(undefined4 * )(lVar10 + 0x48) = uVar7;
    *(undefined4 * )(lVar10 + 0x4c) = uVar8;
    uVar8 = uRam0000000140c783ac;
    uVar7 = uRam0000000140c783a8;
    uVar6 = uRam0000000140c783a4;
    *(undefined4 * )(lVar10 + 0x50) = _DAT_140c783a0;
    *(undefined4 * )(lVar10 + 0x54) = uVar6;
    *(undefined4 * )(lVar10 + 0x58) = uVar7;
    *(undefined4 * )(lVar10 + 0x5c) = uVar8;
    uVar8 = uRam0000000140c783bc;
    uVar7 = uRam0000000140c783b8;
    uVar6 = uRam0000000140c783b4;
    *(undefined4 * )(lVar10 + 0x60) = _DAT_140c783b0;
    *(undefined4 * )(lVar10 + 100) = uVar6;
    *(undefined4 * )(lVar10 + 0x68) = uVar7;
    *(undefined4 * )(lVar10 + 0x6c) = uVar8;
    uVar8 = uRam0000000140c783cc;
    uVar7 = uRam0000000140c783c8;
    uVar6 = uRam0000000140c783c4;
    *(undefined4 * )(lVar10 + 0x70) = _DAT_140c783c0;
    *(undefined4 * )(lVar10 + 0x74) = uVar6;
    *(undefined4 * )(lVar10 + 0x78) = uVar7;
    *(undefined4 * )(lVar10 + 0x7c) = uVar8;
    *(undefined4 * )(*(longlong * )(param_1[0x1c] + 0x10) + 0x80) = 1;
    *(undefined8 * )(*(longlong * )(param_1[0x1c] + 0x18) + 0x20) = 0;
    (**(code * *)(*param_1 + 0x60))(param_1, local_58);
    *(undefined4 * )(*(longlong * )(param_1[0x1c] + 0x18) + 0x34) = 2;
    **(undefined4 * *)(param_1[0x1c] + 0x20) = 0;
    *(undefined4 * )(param_1 + 0x31) = 0;
    *(undefined4 * )(*(longlong * )(param_1[0x1c] + 0x20) + 4) = 0;
    *(undefined4 * )(*(longlong * )(param_1[0x1c] + 0x20) + 8) = 0;
    **(undefined4 * *)(param_1[0x1c] + 0x28) = 0x3f800000;
    puVar4 = *(undefined4 * *)(param_1[0x1c] + 0x30);
    *puVar4 = 0x3f000000;
    puVar4[1] = 0x3f000000;
    puVar4[2] = 0x3f000000;
    puVar4[3] = 0x3f800000;
    **(undefined(**)[16])(param_1[0x1c] + 0x38) =
            CONCAT412(uVar16, CONCAT48(uVar15, CONCAT44(uVar14, uVar13)));
    **(undefined4 * *)(param_1[0x1c] + 0x40) = 0;
    (**(code * *)(*(longlong *) param_1[2] + 0x120))();
    *(undefined4 * )((longlong) param_1 + 0xb4) = 1;
    // WARNING: Could not recover jumptable at 0x0001402849d3. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(*(longlong *) param_1[2] + 0x2b0))((longlong *) param_1[2], L"GfxUI");
    return;
}


void FUN_1402849e0(longlong param_1, ulonglong param_2) {
    uint uVar1;
    uint uVar2;
    uint *puVar3;
    uint uVar4;
    uint *puVar5;
    uint *puVar6;
    undefined4 local_res10[2];

    local_res10[0] = 0;
    puVar5 = (uint *) FUN_140288100(param_1, param_2, local_res10);
    *puVar5 = (uint) param_2;
    *(undefined8 * )(puVar5 + 2) = *(undefined8 * )(param_1 + 0xe0);
    if ((param_2 & 1) == 0) {
        puVar6 = *(uint * *)(*(longlong * )(param_1 + 0xe0) + 0x10);
    } else {
        puVar3 = *(uint * *)(*(longlong * )(param_1 + 0xe0) + 0x10);
        puVar6 = puVar5 + 0x2c;
        uVar1 = puVar3[1];
        uVar2 = puVar3[2];
        uVar4 = puVar3[3];
        *puVar6 = *puVar3;
        puVar5[0x2d] = uVar1;
        puVar5[0x2e] = uVar2;
        puVar5[0x2f] = uVar4;
        uVar1 = puVar3[5];
        uVar2 = puVar3[6];
        uVar4 = puVar3[7];
        puVar5[0x30] = puVar3[4];
        puVar5[0x31] = uVar1;
        puVar5[0x32] = uVar2;
        puVar5[0x33] = uVar4;
        uVar1 = puVar3[9];
        uVar2 = puVar3[10];
        uVar4 = puVar3[0xb];
        puVar5[0x34] = puVar3[8];
        puVar5[0x35] = uVar1;
        puVar5[0x36] = uVar2;
        puVar5[0x37] = uVar4;
        uVar1 = puVar3[0xd];
        uVar2 = puVar3[0xe];
        uVar4 = puVar3[0xf];
        puVar5[0x38] = puVar3[0xc];
        puVar5[0x39] = uVar1;
        puVar5[0x3a] = uVar2;
        puVar5[0x3b] = uVar4;
        uVar1 = puVar3[0x11];
        uVar2 = puVar3[0x12];
        uVar4 = puVar3[0x13];
        puVar5[0x3c] = puVar3[0x10];
        puVar5[0x3d] = uVar1;
        puVar5[0x3e] = uVar2;
        puVar5[0x3f] = uVar4;
        uVar1 = puVar3[0x15];
        uVar2 = puVar3[0x16];
        uVar4 = puVar3[0x17];
        puVar5[0x40] = puVar3[0x14];
        puVar5[0x41] = uVar1;
        puVar5[0x42] = uVar2;
        puVar5[0x43] = uVar4;
        uVar1 = puVar3[0x19];
        uVar2 = puVar3[0x1a];
        uVar4 = puVar3[0x1b];
        puVar5[0x44] = puVar3[0x18];
        puVar5[0x45] = uVar1;
        puVar5[0x46] = uVar2;
        puVar5[0x47] = uVar4;
        uVar1 = puVar3[0x1d];
        uVar2 = puVar3[0x1e];
        uVar4 = puVar3[0x1f];
        puVar5[0x48] = puVar3[0x1c];
        puVar5[0x49] = uVar1;
        puVar5[0x4a] = uVar2;
        puVar5[0x4b] = uVar4;
        puVar5[0x4c] = puVar3[0x20];
    }
    *(uint * *)(puVar5 + 4) = puVar6;
    puVar6 = *(uint * *)(*(longlong * )(param_1 + 0xe0) + 0x18);
    if ((*(byte *) puVar5 & 2) == 0) {
        *(uint * *)(puVar5 + 6) = puVar6;
    } else {
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar4 = puVar6[3];
        puVar5[0x14] = *puVar6;
        puVar5[0x15] = uVar1;
        puVar5[0x16] = uVar2;
        puVar5[0x17] = uVar4;
        uVar1 = puVar6[5];
        uVar2 = puVar6[6];
        uVar4 = puVar6[7];
        puVar5[0x18] = puVar6[4];
        puVar5[0x19] = uVar1;
        puVar5[0x1a] = uVar2;
        puVar5[0x1b] = uVar4;
        *(undefined8 * )(puVar5 + 0x1c) = *(undefined8 * )(puVar6 + 8);
        *(undefined8 * )(puVar5 + 0x1e) = *(undefined8 * )(puVar6 + 10);
        puVar5[0x20] = puVar6[0xc];
        puVar5[0x21] = puVar6[0xd];
        *(longlong * )(puVar5 + 0x1c) = *(longlong * )(puVar5 + 0x1c) + *(longlong * )(puVar5 + 0x1e);
        FUN_1402626b0(param_1 + 0x148, *(longlong * )(puVar5 + 0x1c) + *(longlong * )(puVar5 + 0x1e));
        FUN_1407db590(*(longlong * )(puVar5 + 0x1c) * 0x10 + *(longlong * )(param_1 + 0x148),
                      *(longlong * )(*(longlong * )(*(longlong * )(param_1 + 0xe0) + 0x18) + 0x20) * 0x10 +
                      *(longlong * )(param_1 + 0x148));
        *(uint * *)(puVar5 + 6) = puVar5 + 0x14;
    }
    uVar1 = *puVar5;
    puVar6 = *(uint * *)(*(longlong * )(param_1 + 0xe0) + 0x20);
    if ((uVar1 & 4) == 0) {
        *(uint * *)(puVar5 + 8) = puVar6;
    } else {
        puVar5[0x24] = *puVar6;
        puVar5[0x25] = puVar6[1];
        uVar2 = puVar6[2];
        *(uint * *)(puVar5 + 8) = puVar5 + 0x24;
        puVar5[0x26] = uVar2;
    }
    puVar6 = *(uint * *)(*(longlong * )(param_1 + 0xe0) + 0x28);
    if ((uVar1 & 8) == 0) {
        *(uint * *)(puVar5 + 10) = puVar6;
    } else {
        puVar5[0x27] = *puVar6;
        *(uint * *)(puVar5 + 10) = puVar5 + 0x27;
    }
    puVar6 = *(uint * *)(*(longlong * )(param_1 + 0xe0) + 0x30);
    if ((uVar1 & 0x10) == 0) {
        *(uint * *)(puVar5 + 0xc) = puVar6;
    } else {
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar4 = puVar6[3];
        puVar5[0x50] = *puVar6;
        puVar5[0x51] = uVar1;
        puVar5[0x52] = uVar2;
        puVar5[0x53] = uVar4;
        *(uint * *)(puVar5 + 0xc) = puVar5 + 0x50;
    }
    puVar6 = *(uint * *)(*(longlong * )(param_1 + 0xe0) + 0x38);
    if ((*(byte *) puVar5 & 0x20) == 0) {
        *(uint * *)(puVar5 + 0xe) = puVar6;
    } else {
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar4 = puVar6[3];
        puVar5[0x54] = *puVar6;
        puVar5[0x55] = uVar1;
        puVar5[0x56] = uVar2;
        puVar5[0x57] = uVar4;
        *(uint * *)(puVar5 + 0xe) = puVar5 + 0x54;
    }
    puVar6 = *(uint * *)(*(longlong * )(param_1 + 0xe0) + 0x40);
    if ((*(byte *) puVar5 & 0x40) != 0) {
        puVar5[0x28] = *puVar6;
        *(uint * *)(puVar5 + 0x10) = puVar5 + 0x28;
        *(uint * *)(param_1 + 0xe0) = puVar5;
        return;
    }
    *(uint * *)(puVar5 + 0x10) = puVar6;
    *(uint * *)(param_1 + 0xe0) = puVar5;
    return;
}


undefined4
FUN_140284d10(longlong param_1, longlong param_2, ulonglong param_3, undefined (*param_4)[16],
              ulonglong param_5, undefined (*param_6)[16], ulonglong *param_7) {
    undefined(*pauVar1)[16];
    undefined(*pauVar2)[16];
    undefined(*pauVar3)[16];
    float fVar4;
    undefined4 uVar5;
    undefined(*pauVar6)[16];
    ulonglong uVar7;
    ulonglong uVar8;
    undefined4 uVar9;
    undefined4 uVar10;
    ulonglong uVar11;
    undefined(*pauVar12)[16];
    undefined(*pauVar13)[16];
    uint uVar14;
    ulonglong uVar15;
    ulonglong uVar16;
    float *pfVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined4 in_XMM7_Da;
    undefined4 in_XMM7_Db;
    undefined4 in_XMM7_Dc;
    undefined4 in_XMM7_Dd;

    if (2 < param_5) {
        FUN_1402626b0((longlong * )(param_1 + 0x158), *param_7 * 2, param_3, param_4,
                      CONCAT412(in_XMM7_Dd, CONCAT48(in_XMM7_Dc, CONCAT44(in_XMM7_Db, in_XMM7_Da))),
                      CONCAT412(in_XMM6_Dd, CONCAT48(in_XMM6_Dc, CONCAT44(in_XMM6_Db, in_XMM6_Da))));
        uVar11 = 0;
        uVar9 = 2;
        uVar15 = uVar11;
        do {
            uVar16 = uVar15 + 1;
            if (uVar15 + 1 == param_3) {
                uVar16 = uVar11;
            }
            pfVar17 = (float *) (uVar15 * 0x10 + param_2);
            fVar20 = pfVar17[1] - *(float *) (param_2 + 4 + uVar16 * 0x10);
            fVar18 = *(float *) (param_2 + uVar16 * 0x10) - *pfVar17;
            uVar7 = uVar11;
            uVar8 = uVar11;
            if ((uVar16 != 0) ||
                (pauVar12 = param_6, pauVar13 = param_6, param_6 == (undefined (*)[16]) 0x0)) {
                pauVar12 = (undefined(*)[16])
                        ((ulonglong)((uint) uVar15 & 1) * *param_7 * 0x10 + *(longlong * )(param_1 + 0x158)
                        );
                pauVar13 = pauVar12;
            }
            do {
                uVar14 = (int) uVar8 + 1;
                uVar15 = (ulonglong) uVar14;
                if (uVar14 == param_5) {
                    uVar15 = uVar11;
                }
                pauVar6 = param_4[uVar8];
                fVar4 = *(float *) (*pauVar6 + 4);
                uVar10 = *(undefined4 * )(*pauVar6 + 8);
                uVar5 = *(undefined4 * )(*pauVar6 + 0xc);
                fVar19 = (*(float *) *pauVar6 - *pfVar17) * fVar20 + (fVar4 - pfVar17[1]) * fVar18;
                fVar21 = (*(float *) param_4[uVar15] - *pfVar17) * fVar20 +
                         (*(float *) (param_4[uVar15] + 4) - pfVar17[1]) * fVar18;
                if (fVar19 <= 1e-05) {
                    *(float *) *pauVar12 = *(float *) *pauVar6;
                    *(float *) (*pauVar12 + 4) = fVar4;
                    *(undefined4 * )(*pauVar12 + 8) = uVar10;
                    *(undefined4 * )(*pauVar12 + 0xc) = uVar5;
                    uVar7 = uVar7 + 1;
                    pauVar12 = pauVar12[1];
                }
                if (((fVar19 <= 0.0) && (1e-05 < fVar21)) ||
                    ((pauVar6 = pauVar12, fVar21 <= 0.0 && (1e-05 < fVar19)))) {
                    pauVar1 = param_4[uVar15];
                    uVar7 = uVar7 + 1;
                    pauVar6 = pauVar12[1];
                    uVar9 = 1;
                    pauVar2 = param_4[uVar8];
                    fVar19 = fVar19 / (fVar19 - fVar21);
                    pauVar3 = param_4[uVar8];
                    *pauVar12 = CONCAT412(fVar19 * (*(float *) (*pauVar1 + 0xc) - *(float *) (*pauVar2 + 0xc)) +
                                          *(float *) (*pauVar3 + 0xc),
                                          CONCAT48(fVar19 * (*(float *) (*pauVar1 + 8) -
                                                             *(float *) (*pauVar2 + 8)) +
                                                   *(float *) (*pauVar3 + 8),
                                                   CONCAT44(fVar19 * (*(float *) (*pauVar1 + 4) -
                                                                      *(float *) (*pauVar2 + 4)) +
                                                            *(float *) (*pauVar3 + 4),
                                                            fVar19 * (*(float *) *pauVar1 - *(float *) *pauVar2)
                                                            + *(float *) *pauVar3)));
                }
                pauVar12 = pauVar6;
                uVar8 = uVar15;
            } while ((int) uVar15 != 0);
            uVar8 = uVar11;
            uVar10 = 0;
        } while (((2 < uVar7) && (uVar8 = uVar7, uVar7 != 0)) &&
                 (param_4 = pauVar13, uVar15 = uVar16, param_5 = uVar7, uVar10 = uVar9, uVar16 != 0));
        *param_7 = uVar8;
        return uVar10;
    }
    *param_7 = 0;
    return 0;
}


void FUN_140284f40(longlong param_1, longlong param_2, ulonglong param_3, undefined (*param_4)[16],
                   undefined (*param_5)[16], ulonglong *param_6) {
    float *pfVar1;
    undefined(*pauVar2)[16];
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    undefined(*pauVar8)[16];
    ulonglong uVar9;
    ulonglong uVar10;
    undefined(*pauVar11)[16];
    ulonglong uVar12;
    undefined(*pauVar13)[16];
    undefined(*pauVar14)[16];
    undefined(*pauVar15)[16];
    undefined(*pauVar16)[16];
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;

    FUN_1402877c0((longlong * )(param_1 + 0x138));
    uVar9 = 4;
    uVar6 = 0;
    while (true) {
        uVar12 = 0;
        uVar10 = uVar6 + 1;
        if (uVar6 + 1 == param_3) {
            uVar10 = uVar12;
        }
        fVar20 = *(float *) (param_2 + 4 + uVar6 * 0x10) - *(float *) (param_2 + 4 + uVar10 * 0x10);
        fVar17 = *(float *) (param_2 + uVar10 * 0x10) - *(float *) (param_2 + uVar6 * 0x10);
        pfVar1 = (float *) (param_2 + uVar6 * 0x10);
        fVar21 = *pfVar1 * fVar20 + pfVar1[1] * fVar17;
        if ((uVar10 != 0) || (pauVar11 = param_5, param_5 == (undefined (*)[16]) 0x0)) {
            pauVar11 = (undefined(*)[16])
                    ((ulonglong)((uint) uVar6 & 1) * *param_6 * 0x20 + *(longlong * )(param_1 + 0x138));
        }
        pauVar16 = pauVar11[1];
        uVar6 = 0;
        pauVar14 = pauVar11;
        fVar19 = (*(float *) *param_4 * fVar20 + *(float *) (*param_4 + 4) * fVar17) - fVar21;
        do {
            uVar7 = uVar6 + 1;
            if (uVar6 + 1 == uVar9) {
                uVar7 = 0;
            }
            pauVar8 = param_4[uVar6 * 2];
            fVar18 = (*(float *) param_4[uVar7 * 2] * fVar20 + *(float *) (param_4[uVar7 * 2] + 4) * fVar17)
                     - fVar21;
            pauVar13 = pauVar14;
            pauVar15 = pauVar16;
            if (fVar19 <= 1e-05) {
                uVar3 = *(undefined4 * )(*pauVar8 + 4);
                uVar4 = *(undefined4 * )(*pauVar8 + 8);
                uVar5 = *(undefined4 * )(*pauVar8 + 0xc);
                uVar12 = uVar12 + 1;
                pauVar13 = pauVar14[2];
                *(undefined4 * ) * pauVar14 = *(undefined4 * ) * pauVar8;
                *(undefined4 * )(*pauVar14 + 4) = uVar3;
                *(undefined4 * )(*pauVar14 + 8) = uVar4;
                *(undefined4 * )(*pauVar14 + 0xc) = uVar5;
                uVar3 = *(undefined4 * )(pauVar8[1] + 4);
                uVar4 = *(undefined4 * )(pauVar8[1] + 8);
                uVar5 = *(undefined4 * )(pauVar8[1] + 0xc);
                pauVar15 = pauVar16[2];
                *(undefined4 * ) * pauVar16 = *(undefined4 *) pauVar8[1];
                *(undefined4 * )(*pauVar16 + 4) = uVar3;
                *(undefined4 * )(*pauVar16 + 8) = uVar4;
                *(undefined4 * )(*pauVar16 + 0xc) = uVar5;
            }
            if (((fVar19 <= 0.0) && (1e-05 < fVar18)) ||
                ((pauVar14 = pauVar13, pauVar16 = pauVar15, fVar18 <= 0.0 && (1e-05 < fVar19)))) {
                pauVar2 = param_4[uVar7 * 2];
                uVar12 = uVar12 + 1;
                pauVar14 = pauVar13[2];
                pauVar16 = pauVar15[2];
                fVar19 = fVar19 / (fVar19 - fVar18);
                *pauVar13 = CONCAT412((*(float *) (*pauVar2 + 0xc) - *(float *) (*pauVar8 + 0xc)) * fVar19 +
                                      *(float *) (*pauVar8 + 0xc),
                                      CONCAT48((*(float *) (*pauVar2 + 8) - *(float *) (*pauVar8 + 8)) *
                                               fVar19 + *(float *) (*pauVar8 + 8),
                                               CONCAT44((*(float *) (*pauVar2 + 4) - *(float *) (*pauVar8 + 4)
                                                        ) * fVar19 + *(float *) (*pauVar8 + 4),
                                                        (*(float *) *pauVar2 - *(float *) *pauVar8) * fVar19 +
                                                        *(float *) *pauVar8)));
                pauVar13 = param_4[uVar7 * 2 + 1];
                *pauVar15 = CONCAT412((*(float *) (*pauVar13 + 0xc) - *(float *) (pauVar8[1] + 0xc)) * fVar19
                                      + *(float *) (pauVar8[1] + 0xc),
                                      CONCAT48((*(float *) (*pauVar13 + 8) - *(float *) (pauVar8[1] + 8)) *
                                               fVar19 + *(float *) (pauVar8[1] + 8),
                                               CONCAT44((*(float *) (*pauVar13 + 4) -
                                                         *(float *) (pauVar8[1] + 4)) * fVar19 +
                                                        *(float *) (pauVar8[1] + 4),
                                                        (*(float *) *pauVar13 - *(float *) pauVar8[1]) *
                                                        fVar19 + *(float *) pauVar8[1])));
            }
            uVar6 = uVar7;
            fVar19 = fVar18;
        } while (uVar7 != 0);
        if (uVar12 < 3) break;
        if ((uVar12 == 0) || (param_4 = pauVar11, uVar9 = uVar12, uVar6 = uVar10, uVar10 == 0)) {
            *param_6 = uVar12;
            return;
        }
    }
    *param_6 = 0;
    return;
}


ulonglong FUN_140285f80(float *param_1, float *param_2) {
    if (*param_1 <= *param_2) {
        if (*param_1 < *param_2) {
            return 1;
        }
        if ((uint) param_2[1] <= (uint) param_1[1]) {
            if ((uint) param_2[1] < (uint) param_1[1]) {
                return 1;
            }
            if ((uint) param_2[2] <= (uint) param_1[2]) {
                if ((uint) param_2[2] < (uint) param_1[2]) {
                    return 1;
                }
                if ((int) param_2[3] <= (int) param_1[3]) {
                    if ((int) param_2[3] < (int) param_1[3]) {
                        return 1;
                    }
                    if ((int) param_2[4] <= (int) param_1[4]) {
                        if ((int) param_2[4] < (int) param_1[4]) {
                            return 1;
                        }
                        if (*(ulonglong * )(param_2 + 0x18) <= *(ulonglong * )(param_1 + 0x18)) {
                            return (ulonglong)(*(ulonglong * )(param_2 + 0x18) < *(ulonglong * )(param_1 + 0x18));
                        }
                    }
                }
            }
        }
    }
    return 0xffffffff;
}


void FUN_140285ff0(longlong *param_1) {
    (**(code * *)(*param_1 + 0xe8))();
    return;
}


undefined4
FUN_140286aa0(undefined8 param_1, longlong param_2, undefined8 param_3, undefined8 param_4,
              undefined8 param_5, uint param_6, undefined8 param_7, undefined8 param_8,
              undefined4 param_9) {
    undefined8 *puVar1;
    int iVar2;
    undefined4 local_res10[2];
    ulonglong in_stack_ffffffffffffffb8;
    undefined8 *in_stack_ffffffffffffffc0;

    if (param_2 != 0) {
        puVar1 = (undefined8 * )(param_2 + 0x40);
        if (((*(longlong * )(param_2 + 0x40) == 0) &&
             (in_stack_ffffffffffffffc0 = puVar1,
                     iVar2 = FUN_140283d30(*(undefined8 * )(param_2 + 0x10), *(undefined8 * )(param_2 + 0x18),
                                           *(undefined8 * )(param_2 + 0x20), *(undefined8 * )(param_2 + 0x28),
                                           in_stack_ffffffffffffffb8 & 0xffffffff00000000 |
                                           (ulonglong) * (uint * )(param_2 + 0x38), puVar1), iVar2 < 0)) ||
            (iVar2 = FUN_1402b98b0(*(undefined8 * )(param_2 + 0x18), *puVar1, param_3, param_4, param_5,
                                   (ulonglong) in_stack_ffffffffffffffc0 & 0xffffffff00000000 |
                                   (ulonglong) param_6, param_7, param_8, param_9, local_res10, 0), iVar2 < 0)) {
            local_res10[0] = 0;
        }
        return local_res10[0];
    }
    return 0;
}


undefined8 *FUN_1402874e0(undefined8 *param_1) {
    ulonglong uVar1;
    undefined8 uVar2;

    *param_1 = 0;
    uVar1 = FUN_1401a40c0(0x3d);
    param_1[1] = uVar1;
    uVar2 = SUB168(ZEXT816(8) * ZEXT816(uVar1), 0);
    if (SUB168(ZEXT816(8) * ZEXT816(uVar1) >> 0x40, 0) != 0) {
        uVar2 = 0xffffffffffffffff;
    }
    uVar2 = FUN_14018b280(uVar2, 0);
    param_1[2] = uVar2;
    FUN_1407e4830(uVar2, 0, param_1[1] << 3);
    param_1[3] = FUN_1402b8320;
    param_1[4] = FUN_1402b8380;
    return param_1;
}


undefined8 *FUN_140287560(undefined8 *param_1) {
    ulonglong uVar1;
    undefined8 uVar2;

    *param_1 = 0;
    uVar1 = FUN_1401a40c0(0x7f7);
    param_1[1] = uVar1;
    uVar2 = SUB168(ZEXT816(8) * ZEXT816(uVar1), 0);
    if (SUB168(ZEXT816(8) * ZEXT816(uVar1) >> 0x40, 0) != 0) {
        uVar2 = 0xffffffffffffffff;
    }
    uVar2 = FUN_14018b280(uVar2, 0);
    param_1[2] = uVar2;
    FUN_1407e4830(uVar2, 0, param_1[1] << 3);
    param_1[3] = &LAB_1402b83d0;
    param_1[4] = FUN_1402b8420;
    return param_1;
}


void FUN_1402875e0(longlong *param_1) {
    longlong *plVar1;
    longlong lVar2;
    ulonglong uVar3;
    longlong lVar4;

    if (param_1[1] == 0) {
        lVar2 = FUN_14018db00(*param_1, 0, 0x90);
        if (*param_1 != lVar2) {
            uVar3 = 0;
            if (param_1[1] != 0) {
                lVar4 = 0;
                do {
                    if (lVar4 + lVar2 != 0) {
                        FUN_140287870(lVar4 + lVar2, *param_1 + lVar4);
                    }
                    plVar1 = *(longlong * *)(lVar4 + 0x60 + *param_1);
                    if (plVar1 != (longlong *) 0x0) {
                        (**(code * *)(*plVar1 + 8))();
                    }
                    uVar3 = uVar3 + 1;
                    lVar4 = lVar4 + 0x90;
                } while (uVar3 < (ulonglong) param_1[1]);
            }
            lVar4 = *param_1;
            if (lVar4 != 0) {
                (**(code * *)(*(longlong * )(lVar4 + -0x10) + 8))(lVar4 + -0x10);
            }
            *param_1 = lVar2;
        }
    } else {
        uVar3 = 0;
        if (param_1[1] == 0) {
            param_1[1] = 0;
            return;
        }
        lVar2 = 0;
        do {
            plVar1 = *(longlong * *)(lVar2 + 0x60 + *param_1);
            if (plVar1 != (longlong *) 0x0) {
                (**(code * *)(*plVar1 + 8))();
            }
            uVar3 = uVar3 + 1;
            lVar2 = lVar2 + 0x90;
        } while (uVar3 < (ulonglong) param_1[1]);
    }
    param_1[1] = 0;
    return;
}


longlong FUN_1402876e0(longlong *param_1) {
    longlong lVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong lVar4;
    ulonglong uVar5;
    ulonglong uVar6;

    lVar1 = param_1[1];
    lVar3 = FUN_14018db00(*param_1, lVar1 + 1, 0x90);
    uVar5 = 0;
    lVar4 = lVar1 * 0x90 + lVar3;
    if (lVar4 != 0) {
        *(undefined8 * )(lVar4 + 0x60) = 0;
        *(undefined8 * )(lVar4 + 0x70) = 0;
        *(undefined8 * )(lVar4 + 0x68) = 0;
        *(undefined8 * )(lVar4 + 0x78) = 0;
    }
    if (*param_1 != lVar3) {
        uVar6 = uVar5;
        if (param_1[1] != 0) {
            do {
                if (uVar5 + lVar3 != 0) {
                    FUN_140287870(uVar5 + lVar3, *param_1 + uVar5);
                }
                plVar2 = *(longlong * *)(uVar5 + 0x60 + *param_1);
                if (plVar2 != (longlong *) 0x0) {
                    (**(code * *)(*plVar2 + 8))();
                }
                uVar6 = uVar6 + 1;
                uVar5 = uVar5 + 0x90;
            } while (uVar6 < (ulonglong) param_1[1]);
        }
        lVar4 = *param_1;
        if (lVar4 != 0) {
            (**(code * *)(*(longlong * )(lVar4 + -0x10) + 8))(lVar4 + -0x10);
        }
        *param_1 = lVar3;
    }
    param_1[1] = lVar1 + 1;
    return lVar1;
}


void FUN_1402877c0(longlong *param_1, ulonglong param_2) {
    longlong lVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 *puVar5;
    undefined4 *puVar6;
    undefined4 *puVar7;
    ulonglong uVar8;

    if ((ulonglong) param_1[1] < param_2 || param_1[1] == param_2) {
        puVar5 = (undefined4 *) FUN_14018db00(*param_1, param_2, 0x20);
        if ((undefined4 * ) * param_1 != puVar5) {
            uVar8 = 0;
            if (param_1[1] != 0) {
                puVar7 = puVar5;
                do {
                    if (puVar7 != (undefined4 *) 0x0) {
                        puVar6 = (undefined4 * )((longlong) puVar7 + (*param_1 - (longlong) puVar5));
                        uVar2 = puVar6[1];
                        uVar3 = puVar6[2];
                        uVar4 = puVar6[3];
                        *puVar7 = *puVar6;
                        puVar7[1] = uVar2;
                        puVar7[2] = uVar3;
                        puVar7[3] = uVar4;
                        uVar2 = puVar6[5];
                        uVar3 = puVar6[6];
                        uVar4 = puVar6[7];
                        puVar7[4] = puVar6[4];
                        puVar7[5] = uVar2;
                        puVar7[6] = uVar3;
                        puVar7[7] = uVar4;
                    }
                    uVar8 = uVar8 + 1;
                    puVar7 = puVar7 + 8;
                } while (uVar8 < (ulonglong) param_1[1]);
            }
            lVar1 = *param_1;
            if (lVar1 != 0) {
                (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
            }
            *param_1 = (longlong) puVar5;
        }
        param_1[1] = param_2;
        return;
    }
    param_1[1] = param_2;
    return;
}


undefined4 *FUN_140287870(undefined4 *param_1, undefined4 *param_2) {
    undefined8 *puVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;

    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    param_1[6] = param_2[6];
    param_1[7] = param_2[7];
    param_1[8] = param_2[8];
    uVar2 = param_2[0xd];
    uVar3 = param_2[0xe];
    uVar4 = param_2[0xf];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = uVar2;
    param_1[0xe] = uVar3;
    param_1[0xf] = uVar4;
    uVar2 = param_2[0x11];
    uVar3 = param_2[0x12];
    uVar4 = param_2[0x13];
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = uVar2;
    param_1[0x12] = uVar3;
    param_1[0x13] = uVar4;
    uVar2 = param_2[0x15];
    uVar3 = param_2[0x16];
    uVar4 = param_2[0x17];
    param_1[0x14] = param_2[0x14];
    param_1[0x15] = uVar2;
    param_1[0x16] = uVar3;
    param_1[0x17] = uVar4;
    puVar1 = *(undefined8 * *)(param_2 + 0x18);
    *(undefined8 * *)(param_1 + 0x18) = puVar1;
    if (puVar1 != (undefined8 *) 0x0) {
        (**(code * *) * puVar1)();
    }
    *(undefined8 * )(param_1 + 0x1a) = 0;
    *(undefined8 * )(param_1 + 0x1c) = 0;
    *(undefined8 * )(param_1 + 0x1c) = *(undefined8 * )(param_2 + 0x1c);
    *(undefined8 * )(param_1 + 0x1a) = *(undefined8 * )(param_2 + 0x1a);
    *(undefined8 * )(param_1 + 0x1e) = *(undefined8 * )(param_2 + 0x1e);
    param_1[0x20] = param_2[0x20];
    return param_1;
}


undefined8 FUN_140287920(undefined8 param_1, undefined8 param_2, undefined8 param_3, ulonglong param_4) {
    undefined8 uVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    longlong **pplVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    longlong *plVar10;
    undefined8 *puVar11;
    ulonglong uVar12;
    ulonglong uVar13;
    ulonglong uVar14;
    undefined8 local_80;
    undefined8 local_70;
    undefined8 local_68;
    undefined8 local_60;
    undefined8 local_58;
    undefined4 local_50;
    undefined4 local_4c;
    ulonglong *local_48;
    undefined *local_40;
    undefined8 local_38;
    undefined4 local_30;

    if (param_4 == 0) {
        return param_2;
    }
    uVar4 = 0;
    if (DAT_140c63758 != 0) {
        uVar4 = (ulonglong) * (uint * )(DAT_140c63758 + 0xb8);
    }
    uVar14 = param_4 + 0xff >> 8;
    if (uVar4 < uVar14) {
        uVar14 = uVar4;
    }
    local_80 = uVar14;
    if (uVar14 != 1) {
        local_58 = 0;
        local_70 = param_1;
        local_68 = param_2;
        local_60 = param_3;
        if (uVar14 == 0) {
            puVar2 = (undefined8 *) 0x0;
        } else {
            puVar2 = (undefined8 *) FUN_14018b280(uVar14 * 0x20 + 0x10);
            if (puVar2 == (undefined8 *) 0x0) {
                puVar2 = (undefined8 * ) & DAT_00000010;
            } else {
                *puVar2 = &PTR_FUN_140b5f110;
                puVar2 = puVar2 + 2;
            }
        }
        uVar12 = 0;
        puVar3 = puVar2;
        for (uVar4 = uVar14; uVar4 != 0; uVar4 = uVar4 - 1) {
            if (puVar3 != (undefined8 *) 0x0) {
                puVar3[3] = 0;
            }
            puVar3 = puVar3 + 4;
        }
        if (uVar14 != 0) {
            plVar10 = puVar2 + 2;
            uVar4 = uVar14;
            do {
                uVar13 = uVar12 + ((param_4 - 1) + uVar14) / uVar14;
                local_48 = (ulonglong * )(plVar10 + -2);
                local_38 = 0;
                *local_48 = uVar12;
                uVar12 = uVar13;
                if (param_4 < uVar13) {
                    uVar12 = param_4;
                }
                *plVar10 = (longlong) & local_70;
                plVar10[-1] = uVar12;
                local_50 = 4;
                local_4c = 1;
                local_40 = &LAB_140287fd0;
                local_30 = 1;
                FUN_14019dca0(&local_50, 0, 0, plVar10 + 1);
                plVar10 = plVar10 + 4;
                uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
        }
        uVar4 = uVar14 + 1 >> 1;
        uVar12 = uVar4;
        while (1 < uVar4) {
            uVar4 = uVar4 + 1 >> 1;
            uVar12 = uVar12 + uVar4;
        }
        uVar4 = uVar12;
        if (uVar12 == 0) {
            puVar3 = (undefined8 *) 0x0;
            puVar5 = puVar3;
        } else {
            puVar3 = (undefined8 *) FUN_14018b280(uVar12 * 0x38 + 0x10, 0);
            if (puVar3 == (undefined8 *) 0x0) {
                puVar3 = (undefined8 * ) & DAT_00000010;
                puVar5 = puVar3;
            } else {
                *puVar3 = &PTR_FUN_140b5f110;
                puVar3 = puVar3 + 2;
                puVar5 = puVar3;
            }
        }
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
            if (puVar3 != (undefined8 *) 0x0) {
                puVar3[6] = 0;
            }
            puVar3 = puVar3 + 7;
        }
        uVar4 = uVar14 + 1 >> 1;
        puVar3 = puVar5;
        if (uVar4 != 0) {
            uVar8 = 1;
            puVar6 = puVar2;
            puVar11 = puVar5;
            uVar13 = uVar4;
            do {
                if (uVar8 < uVar14) {
                    FUN_140287cf0(puVar11, puVar6, puVar6 + 4);
                } else {
                    FUN_140287db0(puVar11, puVar6);
                }
                uVar8 = uVar8 + 2;
                puVar6 = puVar6 + 8;
                puVar11 = puVar11 + 7;
                uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
        }
        while (puVar6 = puVar3, uVar13 = uVar4, 1 < uVar13) {
            puVar3 = puVar6 + uVar13 * 7;
            uVar4 = uVar13 + 1 >> 1;
            uVar14 = local_80;
            if (uVar4 != 0) {
                uVar9 = 1;
                uVar8 = uVar4;
                puVar11 = puVar3;
                do {
                    if (uVar9 < uVar13) {
                        FUN_140287e60(puVar11, puVar6, puVar6 + 7);
                    } else {
                        FUN_140287f20(puVar11, puVar6);
                    }
                    uVar9 = uVar9 + 2;
                    puVar6 = puVar6 + 0xe;
                    puVar11 = puVar11 + 7;
                    uVar8 = uVar8 - 1;
                    uVar14 = local_80;
                } while (uVar8 != 0);
            }
        }
        local_80 = CONCAT44((int) (local_80 >> 0x20), 0xffffffff);
        (**(code * *)(*(longlong *) puVar6[6] + 0x20))((longlong *) puVar6[6], &local_80);
        uVar1 = puVar6[5];
        if (uVar12 != 0) {
            pplVar7 = (longlong * *)(puVar5 + 6);
            do {
                if (*pplVar7 != (longlong *) 0x0) {
                    (**(code * *)(**pplVar7 + 8))();
                }
                pplVar7 = pplVar7 + 7;
                uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
        }
        if (puVar5 != (undefined8 *) 0x0) {
            (**(code **) puVar5[-2])(puVar5 + -2);
        }
        if (uVar14 != 0) {
            pplVar7 = (longlong * *)(puVar2 + 3);
            do {
                if (*pplVar7 != (longlong *) 0x0) {
                    (**(code * *)(**pplVar7 + 8))();
                }
                pplVar7 = pplVar7 + 4;
                uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
        }
        if (puVar2 != (undefined8 *) 0x0) {
            (**(code **) puVar2[-2])(puVar2 + -2);
        }
        return uVar1;
    }
    FUN_14001fec0(param_1, param_2, param_4);
    return param_2;
}


void FUN_140287cf0(undefined8 *param_1, undefined8 *param_2, undefined8 *param_3) {
    longlong **pplVar1;
    longlong lVar2;
    undefined4 local_38;
    undefined4 local_34;
    undefined8 *local_30;
    code *local_28;
    undefined8 local_20;
    undefined4 local_18;

    pplVar1 = (longlong * *)(param_1 + 6);
    *param_1 = *param_2;
    param_1[1] = *param_3;
    param_1[2] = param_3[1];
    lVar2 = param_2[2];
    param_1[3] = lVar2;
    param_1[4] = *(undefined8 * )(lVar2 + 8);
    param_1[5] = *(undefined8 * )(lVar2 + 0x10);
    local_38 = 4;
    local_34 = 1;
    local_20 = 0;
    local_28 = FUN_140288000;
    local_18 = 1;
    local_30 = param_1;
    FUN_14019dca0(&local_38, 1, 0, pplVar1);
    (**(code * *)(**pplVar1 + 0x48))(*pplVar1, param_2[3]);
    (**(code * *)(**pplVar1 + 0x48))(*pplVar1, param_3[3]);
    // WARNING: Could not recover jumptable at 0x000140287dab. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(**pplVar1 + 0x58))();
    return;
}


void FUN_140287db0(undefined8 *param_1, undefined8 *param_2) {
    longlong **pplVar1;
    undefined8 uVar2;
    longlong lVar3;
    undefined4 local_38;
    undefined4 local_34;
    undefined8 *local_30;
    code *local_28;
    undefined8 local_20;
    undefined4 local_18;

    pplVar1 = (longlong * *)(param_1 + 6);
    *param_1 = *param_2;
    uVar2 = param_2[1];
    param_1[2] = uVar2;
    param_1[1] = uVar2;
    lVar3 = param_2[2];
    param_1[3] = lVar3;
    param_1[4] = *(undefined8 * )(lVar3 + 8);
    param_1[5] = *(undefined8 * )(lVar3 + 0x10);
    local_38 = 4;
    local_34 = 1;
    local_28 = FUN_140288000;
    local_20 = 0;
    local_18 = 1;
    local_30 = param_1;
    FUN_14019dca0(&local_38, 1, 0, pplVar1);
    (**(code * *)(**pplVar1 + 0x48))(*pplVar1, param_2[3]);
    // WARNING: Could not recover jumptable at 0x000140287e4e. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(**pplVar1 + 0x58))();
    return;
}


void FUN_140287e60(undefined8 *param_1, undefined8 *param_2, undefined8 *param_3) {
    longlong **pplVar1;
    undefined4 local_38;
    undefined4 local_34;
    undefined8 *local_30;
    code *local_28;
    undefined8 local_20;
    undefined4 local_18;

    pplVar1 = (longlong * *)(param_1 + 6);
    *param_1 = *param_2;
    param_1[1] = *param_3;
    param_1[2] = param_3[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[5];
    param_1[5] = param_2[4];
    local_38 = 4;
    local_34 = 1;
    local_20 = 0;
    local_28 = FUN_140288000;
    local_18 = 1;
    local_30 = param_1;
    FUN_14019dca0(&local_38, 1, 0, pplVar1);
    (**(code * *)(**pplVar1 + 0x48))(*pplVar1, param_2[6]);
    (**(code * *)(**pplVar1 + 0x48))(*pplVar1, param_3[6]);
    // WARNING: Could not recover jumptable at 0x000140287f1b. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(**pplVar1 + 0x58))();
    return;
}


void FUN_140287f20(undefined8 *param_1, undefined8 *param_2) {
    longlong **pplVar1;
    undefined8 uVar2;
    undefined4 local_38;
    undefined4 local_34;
    undefined8 *local_30;
    code *local_28;
    undefined8 local_20;
    undefined4 local_18;

    pplVar1 = (longlong * *)(param_1 + 6);
    *param_1 = *param_2;
    uVar2 = param_2[2];
    param_1[2] = uVar2;
    param_1[1] = uVar2;
    param_1[3] = param_2[3];
    param_1[4] = param_2[5];
    param_1[5] = param_2[4];
    local_38 = 4;
    local_34 = 1;
    local_28 = FUN_140288000;
    local_20 = 0;
    local_18 = 1;
    local_30 = param_1;
    FUN_14019dca0(&local_38, 1, 0, pplVar1);
    (**(code * *)(**pplVar1 + 0x48))(*pplVar1, param_2[6]);
    // WARNING: Could not recover jumptable at 0x000140287fbe. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(**pplVar1 + 0x58))();
    return;
}


void FUN_140288000(ulonglong *param_1) {
    undefined8 *puVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    int iVar4;
    longlong lVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    longlong lVar9;

    uVar6 = *param_1;
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    uVar7 = uVar6;
    uVar8 = uVar2;
    do {
        if (uVar2 <= uVar6) {
            LAB_1402880ad:
            if (uVar8 < uVar3) {
                lVar5 = uVar7 * 8;
                do {
                    uVar8 = uVar8 + 1;
                    *(undefined8 * )(lVar5 + param_1[5]) = *(undefined8 * )((param_1[4] - 8) + uVar8 * 8);
                    lVar5 = lVar5 + 8;
                } while (uVar8 < uVar3);
            }
            return;
        }
        if (uVar3 <= uVar8) {
            if (uVar6 < uVar2) {
                lVar5 = uVar6 * 8;
                lVar9 = uVar2 - uVar6;
                do {
                    uVar7 = uVar7 + 1;
                    puVar1 = (undefined8 * )(lVar5 + param_1[4]);
                    lVar5 = lVar5 + 8;
                    *(undefined8 * )((param_1[5] - 8) + uVar7 * 8) = *puVar1;
                    lVar9 = lVar9 + -1;
                } while (lVar9 != 0);
            }
            goto LAB_1402880ad;
        }
        iVar4 = (**(code **) param_1[3])
                (*(undefined8 * )(param_1[4] + uVar6 * 8),
                 *(undefined8 * )(param_1[4] + uVar8 * 8), ((code **) param_1[3])[3]);
        if (iVar4 < 1) {
            lVar5 = uVar6 * 8;
            uVar6 = uVar6 + 1;
            *(undefined8 * )((param_1[5] - 8) + (uVar7 + 1) * 8) = *(undefined8 * )(param_1[4] + lVar5);
        } else {
            lVar5 = uVar8 * 8;
            uVar8 = uVar8 + 1;
            *(undefined8 * )((param_1[5] - 8) + (uVar7 + 1) * 8) = *(undefined8 * )(param_1[4] + lVar5);
        }
        uVar7 = uVar7 + 1;
    } while (true);
}


undefined8 *FUN_140288100(undefined8 param_1, undefined8 param_2, undefined4 *param_3) {
    undefined8 uVar1;
    DWORD DVar2;
    undefined8 *puVar3;
    HANDLE pvVar4;
    ulonglong uVar5;
    bool bVar6;

    DVar2 = GetCurrentThreadId();
    uVar5 = 0;
    if (DAT_140c79b18 == DVar2) {
        DAT_140c79b20 = DAT_140c79b20 + 1;
        DVar2 = DAT_140c79b18;
    } else {
        do {
            LOCK();
            bVar6 = DAT_140c79b20 == 0;
            DAT_140c79b20 = DAT_140c79b20 ^ (ulonglong) bVar6 * (DAT_140c79b20 ^ 1);
            if (bVar6) goto LAB_14028816f;
            uVar5 = uVar5 + 1;
        } while (uVar5 < 0x400);
        FUN_14019fb60(&DAT_140c79b18);
        DVar2 = DAT_140c79b18;
    }
    LAB_14028816f:
    DAT_140c79b18 = DVar2;
    puVar3 = DAT_140c79b38;
    if (DAT_140c79b38 == (undefined8 *) 0x0) {
        if (DAT_140c79b20 < 2) {
            DAT_140c79b18 = 0;
            DAT_140c79b20 = 0;
            if (DAT_140c79b28 != 0) {
                if (DAT_140c79b30 == (HANDLE) 0x0) {
                    pvVar4 = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                    LOCK();
                    bVar6 = DAT_140c79b30 == (HANDLE) 0x0;
                    DAT_140c79b30 =
                            (HANDLE)((ulonglong) DAT_140c79b30 ^
                                     (ulonglong) bVar6 * ((ulonglong) DAT_140c79b30 ^ (ulonglong) pvVar4));
                    if (!bVar6) {
                        CloseHandle(pvVar4);
                    }
                }
                SetEvent(DAT_140c79b30);
            }
        } else {
            DAT_140c79b20 = DAT_140c79b20 - 1;
        }
        puVar3 = (undefined8 *) FUN_14018b280(0x160, *param_3);
        return puVar3;
    }
    uVar1 = *DAT_140c79b38;
    if (DAT_140c79b20 < 2) {
        DAT_140c79b18 = 0;
        DAT_140c79b20 = 0;
        DAT_140c79b38 = (undefined8 *) uVar1;
        if (DAT_140c79b28 != 0) {
            if (DAT_140c79b30 == (HANDLE) 0x0) {
                pvVar4 = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                bVar6 = DAT_140c79b30 == (HANDLE) 0x0;
                DAT_140c79b30 =
                        (HANDLE)((ulonglong) DAT_140c79b30 ^
                                 (ulonglong) bVar6 * ((ulonglong) DAT_140c79b30 ^ (ulonglong) pvVar4));
                if (!bVar6) {
                    CloseHandle(pvVar4);
                }
            }
            SetEvent(DAT_140c79b30);
        }
        return puVar3;
    }
    DAT_140c79b20 = DAT_140c79b20 - 1;
    DAT_140c79b38 = (undefined8 *) uVar1;
    return puVar3;
}


void FUN_1402882b0(undefined8 param_1, undefined8 *param_2) {
    DWORD DVar1;
    HANDLE hObject;
    ulonglong uVar2;
    bool bVar3;

    if (param_2 != (undefined8 *) 0x0) {
        DVar1 = GetCurrentThreadId();
        uVar2 = 0;
        if (DAT_140c79b18 == DVar1) {
            DAT_140c79b20 = DAT_140c79b20 + 1;
            DVar1 = DAT_140c79b18;
        } else {
            do {
                LOCK();
                bVar3 = DAT_140c79b20 == 0;
                DAT_140c79b20 = DAT_140c79b20 ^ (ulonglong) bVar3 * (DAT_140c79b20 ^ 1);
                if (bVar3) goto LAB_14028831f;
                uVar2 = uVar2 + 1;
            } while (uVar2 < 0x400);
            FUN_14019fb60(&DAT_140c79b18);
            DVar1 = DAT_140c79b18;
        }
        LAB_14028831f:
        DAT_140c79b18 = DVar1;
        *param_2 = DAT_140c79b38;
        if (1 < DAT_140c79b20) {
            DAT_140c79b20 = DAT_140c79b20 - 1;
            DAT_140c79b38 = param_2;
            return;
        }
        DAT_140c79b18 = 0;
        DAT_140c79b20 = 0;
        DAT_140c79b38 = param_2;
        if (DAT_140c79b28 != 0) {
            if (DAT_140c79b30 == (HANDLE) 0x0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                bVar3 = DAT_140c79b30 == (HANDLE) 0x0;
                DAT_140c79b30 =
                        (HANDLE)((ulonglong) DAT_140c79b30 ^
                                 (ulonglong) bVar3 * ((ulonglong) DAT_140c79b30 ^ (ulonglong) hObject));
                if (!bVar3) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(DAT_140c79b30);
        }
    }
    return;
}


longlong FUN_1402883c0(uint *param_1) {
    longlong lVar1;

    lVar1 = FUN_1400564a0(*(undefined8 * )(param_1 + 6));
    return (ulonglong) * param_1 * 0x71e22d399b1d65b1 +
           (lVar1 + (ulonglong) param_1[4] * 0xaa7f8ea9) * 0xaa7f8ea9 +
           (longlong)(int)
    param_1[1] * 0x630ff64fd0002bc9 + (ulonglong) param_1[3] * 0x3f7b69f4e4e9f0b9
    + (longlong)(int)
    param_1[2] * -0x72404c71d84277df + (longlong)(int)
    param_1[5];
}


undefined8 FUN_140288450(int *param_1, int *param_2) {
    int iVar1;

    if ((((*param_1 != *param_2) || (param_1[1] != param_2[1])) || (param_1[2] != param_2[2])) ||
        ((param_1[3] != param_2[3] || (param_1[4] != param_2[4])))) {
        return 0;
    }
    if (*(longlong * )(param_1 + 6) != *(longlong * )(param_2 + 6)) {
        iVar1 = FUN_14018e2c0();
        if (iVar1 != 0) {
            return 0;
        }
        if (param_1[5] != param_2[5]) {
            return 0;
        }
    }
    return 1;
}


undefined8 FUN_1402884d0(undefined8 param_1, ulonglong param_2) {
    FUN_140288510();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_140288510(undefined8 *param_1) {
    longlong lVar1;
    ulonglong *puVar2;
    int iVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong **ppuVar6;
    undefined4 local_28;
    undefined4 local_24;
    undefined4 local_20;
    undefined4 local_1c;
    undefined4 local_18;
    undefined4 local_14;
    undefined8 local_10;

    *param_1 = &PTR_LAB_140b61748;
    if (param_1[5] != 0) {
        local_20 = *(undefined4 * )(param_1 + 3);
        local_28 = 0;
        local_1c = *(undefined4 * )((longlong) param_1 + 0x1c);
        local_18 = *(undefined4 * )(param_1 + 4);
        lVar1 = param_1[2];
        local_10 = param_1[5];
        local_24 = 1;
        local_14 = *(undefined4 * )(param_1 + 6);
        uVar4 = (**(code * *)(lVar1 + 0x1850))(&local_28);
        uVar5 = uVar4 % *(ulonglong * )(lVar1 + 0x1840);
        ppuVar6 = (ulonglong * *)(*(longlong * )(lVar1 + 0x1848) + uVar5 * 8);
        puVar2 = *(ulonglong * *)(*(longlong * )(lVar1 + 0x1848) + uVar5 * 8);
        while (puVar2 != (ulonglong *) 0x0) {
            if ((uVar4 == **ppuVar6) &&
                (iVar3 = (**(code * *)(lVar1 + 0x1858))(&local_28, *ppuVar6 + 2), iVar3 != 0)) {
                puVar2 = *ppuVar6;
                *ppuVar6 = (ulonglong *) puVar2[1];
                FUN_14018b900(puVar2, 0);
                *(longlong * )(lVar1 + 0x1838) = *(longlong * )(lVar1 + 0x1838) + -1;
                break;
            }
            ppuVar6 = (ulonglong * *)(*ppuVar6 + 1);
            puVar2 = *ppuVar6;
        }
        FUN_14018b900(param_1[5], 0);
    }
    if ((longlong *) param_1[7] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[7] + 8))();
        param_1[7] = 0;
    }
    if ((longlong *) param_1[0xc] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0xc] + 8))();
        param_1[0xc] = 0;
    }
    if ((longlong *) param_1[0xd] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0xd] + 8))();
        param_1[0xd] = 0;
    }
    FUN_14018b900(param_1[10], 0);
    return;
}


undefined8
FUN_140288650(ulonglong param_1, short *param_2, undefined4 param_3, undefined4 param_4,
              undefined4 param_5, undefined4 param_6) {
    ulonglong **ppuVar1;
    longlong lVar2;
    ulonglong *puVar3;
    undefined8 uVar4;
    ulonglong uVar5;
    ulonglong *puVar6;
    longlong *plVar7;
    undefined4 local_28;
    undefined4 uStack36;
    undefined4 local_20;
    undefined4 uStack28;
    undefined4 local_18;
    undefined4 uStack20;
    ulonglong local_10;

    if ((param_2 == (short *) 0x0) || (*param_2 == 0)) {
        uVar4 = 0x80070057;
    } else {
        *(undefined4 * )(param_1 + 0x18) = param_3;
        *(undefined4 * )(param_1 + 0x1c) = param_4;
        *(undefined4 * )(param_1 + 0x20) = param_5;
        uVar4 = FUN_14018e9c0();
        *(undefined4 * )(param_1 + 0x30) = param_6;
        *(undefined8 * )(param_1 + 0x28) = uVar4;
        uVar4 = (**(code * *)(**(longlong * *)(param_1 + 0x10) + 0x48))
                (*(longlong * *)(param_1 + 0x10), uVar4, param_1 + 0x38);
        if (-1 < (int) uVar4) {
            local_20 = *(undefined4 * )(param_1 + 0x18);
            local_28 = 0;
            uStack28 = *(undefined4 * )(param_1 + 0x1c);
            uStack36 = 1;
            local_18 = *(undefined4 * )(param_1 + 0x20);
            local_10 = *(ulonglong * )(param_1 + 0x28);
            lVar2 = *(longlong * )(param_1 + 0x10);
            uStack20 = *(undefined4 * )(param_1 + 0x30);
            plVar7 = (longlong * )(lVar2 + 0x1838);
            if (*plVar7 == *(longlong * )(lVar2 + 0x1840)) {
                FUN_1400290d0(plVar7);
            }
            uVar5 = (**(code * *)(lVar2 + 0x1850))(&local_28);
            ppuVar1 = (ulonglong * *)
                    (*(longlong * )(lVar2 + 0x1848) + (uVar5 % *(ulonglong * )(lVar2 + 0x1840)) * 8);
            puVar6 = (ulonglong *) FUN_14018b280(0x38);
            if (puVar6 == (ulonglong *) 0x0) {
                puVar6 = (ulonglong *) 0x0;
            } else {
                puVar3 = *ppuVar1;
                *puVar6 = uVar5;
                puVar6[1] = (ulonglong) puVar3;
                puVar6[2] = CONCAT44(uStack36, local_28);
                puVar6[3] = CONCAT44(uStack28, local_20);
                puVar6[4] = CONCAT44(uStack20, local_18);
                puVar6[6] = param_1;
                puVar6[5] = local_10;
            }
            *ppuVar1 = puVar6;
            *plVar7 = *plVar7 + 1;
            *(undefined4 * )(param_1 + 0x48) = 0x8000000a;
            return 0;
        }
    }
    return uVar4;
}


ulonglong FUN_1402887a0(undefined8 param_1, undefined8 param_2, float param_3, float param_4,
                        longlong param_5, uint param_6) {
    ulonglong uVar1;
    float fVar2;

    fVar2 = (float) FUN_1408fe170((float) (ulonglong) * (uint * )(param_5 + 0x44) * param_4);
    param_3 = fVar2 * 1.442695 + param_3;
    if (param_3 <= (float) (ulonglong) param_6) {
        param_3 = (float) (ulonglong) param_6;
    }
    if (1.0 <= param_3) {
        if (param_3 < (float) (ulonglong) * (uint * )(param_5 + 0x4c)) {
            uVar1 = (ulonglong) param_3;
        } else {
            uVar1 = (ulonglong)(*(uint * )(param_5 + 0x4c) - 1);
        }
    } else {
        uVar1 = 0;
    }
    return uVar1;
}


ulonglong FUN_140288840(longlong param_1, uint param_2) {
    int *piVar1;
    int iVar2;
    ulonglong uVar3;
    undefined8 local_res8;
    uint local_res10;
    ulonglong in_stack_ffffffffffffffe0;

    uVar3 = (ulonglong) param_2;
    if (*(uint * )(param_1 + 0x4c) <= param_2) {
        return 0x80070057;
    }
    piVar1 = (int *) (*(longlong * )(param_1 + 0x50) + uVar3 * 4);
    *piVar1 = *piVar1 + 1;
    if (param_2 < *(uint * )(param_1 + 0x58)) {
        iVar2 = *(int *) (param_1 + 0x40);
        if (iVar2 == 0) {
            uVar3 = (**(code * *)(**(longlong * *)(param_1 + 0x10) + 0x50))
                    (*(longlong * *)(param_1 + 0x10), *(undefined8 * )(param_1 + 0x28), param_2, 1,
                     *(undefined4 * )(param_1 + 0x18), *(undefined4 * )(param_1 + 0x1c),
                     *(undefined4 * )(param_1 + 0x20),
                     in_stack_ffffffffffffffe0 & 0xffffffff00000000 |
                     (ulonglong) * (uint * )(param_1 + 0x30), &local_res8);
        } else if (iVar2 == 1) {
            uVar3 = (**(code * *)(**(longlong * *)(param_1 + 0x10) + 0x60))
                    (*(longlong * *)(param_1 + 0x10), *(undefined8 * )(param_1 + 0x28), uVar3, 1,
                     *(undefined4 * )(param_1 + 0x18), *(undefined4 * )(param_1 + 0x1c),
                     *(undefined4 * )(param_1 + 0x20), &local_res8);
        } else if (iVar2 == 2) {
            uVar3 = (**(code * *)(**(longlong * *)(param_1 + 0x10) + 0x70))
                    (*(longlong * *)(param_1 + 0x10), *(undefined8 * )(param_1 + 0x28), uVar3, 1,
                     *(undefined4 * )(param_1 + 0x18), *(undefined4 * )(param_1 + 0x1c),
                     *(undefined4 * )(param_1 + 0x20), &local_res8);
        } else {
            uVar3 = (ulonglong) local_res10;
        }
        if ((int) uVar3 < 0) {
            return uVar3;
        }
        if (*(longlong * *)(param_1 + 0x60) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x60) + 8))();
            *(undefined8 * )(param_1 + 0x60) = 0;
        }
        *(undefined8 * )(param_1 + 0x60) = local_res8;
        *(uint * )(param_1 + 0x58) = param_2;
    }
    return 0;
}


ulonglong FUN_140288980(longlong param_1, uint param_2) {
    uint uVar1;
    int iVar2;
    ulonglong uVar3;
    uint uVar4;
    ulonglong uVar5;
    undefined8 local_res8;
    uint local_res10;
    ulonglong in_stack_ffffffffffffffe0;

    if (*(uint * )(param_1 + 0x4c) <= param_2) {
        return 0x80070057;
    }
    iVar2 = *(int *) (*(longlong * )(param_1 + 0x50) + (ulonglong) param_2 * 4);
    if (iVar2 == 0) {
        return 0x80004005;
    }
    iVar2 = iVar2 + -1;
    *(int *) (*(longlong * )(param_1 + 0x50) + (ulonglong) param_2 * 4) = iVar2;
    if ((iVar2 == 0) && (param_2 < *(uint * )(param_1 + 0x58) || param_2 == *(uint * )(param_1 + 0x58))) {
        uVar1 = *(uint * )(param_1 + 0x4c);
        uVar5 = (ulonglong)(param_2 + 1);
        if (param_2 + 1 < uVar1) {
            do {
                if (*(int *) (*(longlong * )(param_1 + 0x50) + uVar5 * 4) != 0) break;
                uVar4 = (int) uVar5 + 1;
                uVar5 = (ulonglong) uVar4;
            } while (uVar4 < uVar1);
            if ((uint) uVar5 < uVar1) {
                iVar2 = *(int *) (param_1 + 0x40);
                if (iVar2 == 0) {
                    uVar3 = (**(code * *)(**(longlong * *)(param_1 + 0x10) + 0x50))
                            (*(longlong * *)(param_1 + 0x10), *(undefined8 * )(param_1 + 0x28), uVar5, 1,
                             *(undefined4 * )(param_1 + 0x18), *(undefined4 * )(param_1 + 0x1c),
                             *(undefined4 * )(param_1 + 0x20),
                             in_stack_ffffffffffffffe0 & 0xffffffff00000000 |
                             (ulonglong) * (uint * )(param_1 + 0x30), &local_res8);
                } else if (iVar2 == 1) {
                    uVar3 = (**(code * *)(**(longlong * *)(param_1 + 0x10) + 0x60))
                            (*(longlong * *)(param_1 + 0x10), *(undefined8 * )(param_1 + 0x28), uVar5, 1,
                             *(undefined4 * )(param_1 + 0x18), *(undefined4 * )(param_1 + 0x1c),
                             *(undefined4 * )(param_1 + 0x20), &local_res8);
                } else if (iVar2 == 2) {
                    uVar3 = (**(code * *)(**(longlong * *)(param_1 + 0x10) + 0x70))
                            (*(longlong * *)(param_1 + 0x10), *(undefined8 * )(param_1 + 0x28), uVar5, 1,
                             *(undefined4 * )(param_1 + 0x18), *(undefined4 * )(param_1 + 0x1c),
                             *(undefined4 * )(param_1 + 0x20), &local_res8);
                } else {
                    uVar3 = (ulonglong) local_res10;
                }
                if ((int) uVar3 < 0) {
                    return uVar3;
                }
                if (*(longlong * *)(param_1 + 0x60) != (longlong *) 0x0) {
                    (**(code * *)(**(longlong * *)(param_1 + 0x60) + 8))();
                    *(undefined8 * )(param_1 + 0x60) = 0;
                }
                *(uint * )(param_1 + 0x58) = (uint) uVar5;
                *(undefined8 * )(param_1 + 0x60) = local_res8;
                return 0;
            }
        }
        if (*(longlong * *)(param_1 + 0x60) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x60) + 8))();
            *(undefined8 * )(param_1 + 0x60) = 0;
        }
        *(undefined4 * )(param_1 + 0x58) = *(undefined4 * )(param_1 + 0x4c);
        if (*(longlong * *)(param_1 + 0x68) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x68) + 8))();
            *(undefined8 * )(param_1 + 0x68) = 0;
        }
        *(undefined4 * )(param_1 + 0x5c) = *(undefined4 * )(param_1 + 0x4c);
    }
    return 0;
}


undefined8 FUN_140288b50(longlong param_1) {
    undefined auVar1[16];
    undefined4 uVar2;
    undefined8 uVar3;
    undefined4 *puVar4;
    ulonglong uVar5;
    byte bVar6;
    uint uVar7;
    longlong lVar8;

    if (*(longlong * *)(param_1 + 0x38) != (longlong *) 0x0) {
        uVar3 = (**(code * *)(**(longlong * *)(param_1 + 0x38) + 0x18))();
        if ((int) uVar3 == 0) {
            return uVar3;
        }
        puVar4 = (undefined4 * )(**(code * *)(**(longlong * *)(param_1 + 0x38) + 0x28))();
        *(undefined4 * )(param_1 + 0x40) = *puVar4;
        uVar7 = puVar4[1];
        if (uVar7 < (uint) puVar4[2]) {
            uVar7 = puVar4[2];
        }
        if (uVar7 < (uint) puVar4[3]) {
            uVar7 = puVar4[3];
        }
        *(uint * )(param_1 + 0x44) = uVar7;
        uVar7 = puVar4[4];
        *(uint * )(param_1 + 0x4c) = uVar7;
        lVar8 = (longlong)(int)
        puVar4[5] * 0x2c;
        if (1 < *(uint * )(&DAT_140ae5200 + lVar8)) {
            uVar5 = (ulonglong)(uint)
            puVar4[1] / (ulonglong) * (uint * )(&DAT_140ae5200 + lVar8);
            if ((int) uVar5 == 0) {
                bVar6 = 0xff;
            } else {
                bVar6 = 0;
                if ((short) uVar5 == 0) {
                    bVar6 = 0x10;
                    uVar5 = uVar5 >> 0x10;
                }
                if ((char) uVar5 == '\0') {
                    bVar6 = bVar6 + 8;
                    uVar5 = uVar5 >> 8;
                }
                if ((uVar5 & 0xf) == 0) {
                    bVar6 = bVar6 + 4;
                    uVar5 = uVar5 >> 4;
                }
                if ((uVar5 & 3) == 0) {
                    bVar6 = bVar6 + 2;
                    uVar5 = uVar5 >> 2;
                }
                if ((uVar5 & 1) == 0) {
                    bVar6 = bVar6 + 1;
                }
            }
            if (bVar6 + 1 < uVar7) {
                uVar7 = bVar6 + 1;
            }
            *(uint * )(param_1 + 0x4c) = uVar7;
        }
        if (1 < *(uint * )(&DAT_140ae520c + lVar8)) {
            uVar5 = (ulonglong)(uint)
            puVar4[2] / (ulonglong) * (uint * )(&DAT_140ae520c + lVar8);
            if ((int) uVar5 == 0) {
                bVar6 = 0xff;
            } else {
                bVar6 = 0;
                if ((short) uVar5 == 0) {
                    bVar6 = 0x10;
                    uVar5 = uVar5 >> 0x10;
                }
                if ((char) uVar5 == '\0') {
                    bVar6 = bVar6 + 8;
                    uVar5 = uVar5 >> 8;
                }
                if ((uVar5 & 0xf) == 0) {
                    bVar6 = bVar6 + 4;
                    uVar5 = uVar5 >> 4;
                }
                if ((uVar5 & 3) == 0) {
                    bVar6 = bVar6 + 2;
                    uVar5 = uVar5 >> 2;
                }
                if ((uVar5 & 1) == 0) {
                    bVar6 = bVar6 + 1;
                }
            }
            uVar7 = *(uint * )(param_1 + 0x4c);
            if (bVar6 + 1 < *(uint * )(param_1 + 0x4c)) {
                uVar7 = bVar6 + 1;
            }
            *(uint * )(param_1 + 0x4c) = uVar7;
        }
        if (1 < *(uint * )(&DAT_140ae5218 + lVar8)) {
            uVar5 = (ulonglong)(uint)
            puVar4[3] / (ulonglong) * (uint * )(&DAT_140ae5218 + lVar8);
            if ((int) uVar5 == 0) {
                bVar6 = 0xff;
            } else {
                bVar6 = 0;
                if ((short) uVar5 == 0) {
                    bVar6 = 0x10;
                    uVar5 = uVar5 >> 0x10;
                }
                if ((char) uVar5 == '\0') {
                    bVar6 = bVar6 + 8;
                    uVar5 = uVar5 >> 8;
                }
                if ((uVar5 & 0xf) == 0) {
                    bVar6 = bVar6 + 4;
                    uVar5 = uVar5 >> 4;
                }
                if ((uVar5 & 3) == 0) {
                    bVar6 = bVar6 + 2;
                    uVar5 = uVar5 >> 2;
                }
                if ((uVar5 & 1) == 0) {
                    bVar6 = bVar6 + 1;
                }
            }
            uVar7 = *(uint * )(param_1 + 0x4c);
            if (bVar6 + 1 < *(uint * )(param_1 + 0x4c)) {
                uVar7 = bVar6 + 1;
            }
            *(uint * )(param_1 + 0x4c) = uVar7;
        }
        if (*(uint * )(param_1 + 0x4c) == 0) {
            uVar3 = 0;
        } else {
            auVar1 = ZEXT816(4) * ZEXT416(*(uint * )(param_1 + 0x4c));
            uVar3 = SUB168(auVar1, 0);
            if (SUB168(auVar1 >> 0x40, 0) != 0) {
                uVar3 = 0xffffffffffffffff;
            }
            uVar3 = FUN_14018b280(uVar3, 0);
        }
        *(undefined8 * )(param_1 + 0x50) = uVar3;
        FUN_1407e4830(uVar3, 0, (ulonglong) * (uint * )(param_1 + 0x4c) << 2);
        *(undefined4 * )(param_1 + 0x58) = *(undefined4 * )(param_1 + 0x4c);
        *(undefined4 * )(param_1 + 0x5c) = *(undefined4 * )(param_1 + 0x4c);
        uVar2 = (**(code * *)(**(longlong * *)(param_1 + 0x38) + 0x20))();
        *(undefined4 * )(param_1 + 0x48) = uVar2;
        if (*(longlong * *)(param_1 + 0x38) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x38) + 8))();
            *(undefined8 * )(param_1 + 0x38) = 0;
        }
    }
    return 1;
}


undefined8 FUN_140288d50(longlong param_1, uint param_2, undefined8 param_3) {
    longlong *plVar1;
    int iVar2;
    undefined4 uVar3;

    plVar1 = *(longlong * *)(param_1 + 0x60);
    if (plVar1 != (longlong *) 0x0) {
        iVar2 = (**(code * *)(*plVar1 + 0x20))(plVar1, param_3);
        if (iVar2 != 0) {
            iVar2 = (**(code * *)(**(longlong * *)(param_1 + 0x60) + 0x28))();
            if (iVar2 < 0) {
                if (*(longlong * )(param_1 + 0x68) == 0) {
                    uVar3 = (**(code * *)(**(longlong * *)(param_1 + 0x60) + 0x28))();
                    *(undefined4 * )(param_1 + 0x48) = uVar3;
                }
                if (*(longlong * *)(param_1 + 0x60) == (longlong *) 0x0) goto LAB_140288dd5;
                (**(code * *)(**(longlong * *)(param_1 + 0x60) + 8))();
            } else {
                if (*(longlong * *)(param_1 + 0x68) != (longlong *) 0x0) {
                    (**(code * *)(**(longlong * *)(param_1 + 0x68) + 8))();
                    *(undefined8 * )(param_1 + 0x68) = 0;
                }
                *(undefined8 * )(param_1 + 0x68) = *(undefined8 * )(param_1 + 0x60);
                *(undefined4 * )(param_1 + 0x5c) = *(undefined4 * )(param_1 + 0x58);
            }
            *(undefined8 * )(param_1 + 0x60) = 0;
        }
    }
    LAB_140288dd5:
    if ((*(longlong * )(param_1 + 0x60) != 0) && (param_2 < *(uint * )(param_1 + 0x5c))) {
        return 0;
    }
    return 1;
}


undefined8 *FUN_140288ff0(undefined8 *param_1, undefined8 *param_2) {
    *(undefined4 * )(param_1 + 2) = 1;
    param_1[1] = param_2;
    *param_1 = &PTR_LAB_140b616b0;
    (**(code * *) * param_2)(param_2);
    *(undefined8 * )((longlong) param_1 + 0x14) = 0;
    *(undefined8 * )((longlong) param_1 + 0x1c) = 0;
    *(undefined4 * )((longlong) param_1 + 0x24) = 0;
    return param_1;
}


int FUN_140289040(undefined8 *param_1) {
    undefined8 *puVar1;
    int iVar2;

    LOCK();
    puVar1 = param_1 + 2;
    iVar2 = *(int *) puVar1;
    *(int *) puVar1 = *(int *) puVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != (undefined8 *) 0x0) {
            *param_1 = &PTR_LAB_140b616b0;
            if ((longlong *) param_1[1] != (longlong *) 0x0) {
                (**(code * *)(*(longlong *) param_1[1] + 8))();
                param_1[1] = 0;
            }
            FUN_14018b900(param_1, 0);
        }
        iVar2 = 0;
    }
    return iVar2;
}


undefined8 FUN_1402890b0(undefined8 param_1, undefined8 param_2, longlong param_3, undefined8 param_4) {
    undefined4 uVar1;
    int iVar2;
    undefined8 uVar3;
    undefined8 extraout_XMM0_Qa;

    if (*(uint * )(param_3 + 0x24) == 3) {
        return 1;
    }
    if ((*(uint * )(param_3 + 0x24) & 1) == 0) {
        uVar3 = FUN_140288b50(*(undefined8 * )(param_3 + 8));
        if ((int) uVar3 == 0) {
            return uVar3;
        }
        uVar1 = FUN_1402887a0(extraout_XMM0_Qa, param_2, *(undefined4 * )(param_3 + 0x18),
                              *(undefined4 * )(param_3 + 0x1c), *(undefined8 * )(param_3 + 8),
                              *(undefined4 * )(param_3 + 0x14));
        *(undefined4 * )(param_3 + 0x20) = uVar1;
        FUN_140288840(*(undefined8 * )(param_3 + 8), uVar1);
        *(uint * )(param_3 + 0x24) = *(uint * )(param_3 + 0x24) | 1;
    }
    if ((*(byte * )(param_3 + 0x24) & 2) == 0) {
        uVar3 = *(undefined8 * )(param_3 + 8);
        uVar1 = *(undefined4 * )(param_3 + 0x20);
        iVar2 = FUN_140288b50(uVar3, param_4);
        if (iVar2 != 0) {
            iVar2 = FUN_140288d50(uVar3, uVar1, param_4);
            if (iVar2 != 0) {
                *(uint * )(param_3 + 0x24) = *(uint * )(param_3 + 0x24) | 2;
                goto LAB_14028915c;
            }
        }
        uVar3 = 0;
    } else {
        LAB_14028915c:
        uVar3 = 1;
    }
    return uVar3;
}


void FUN_140289190(undefined8 param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4,
                   longlong param_5, undefined4 param_6) {
    int iVar1;

    *(undefined4 * )(param_5 + 0x18) = param_3;
    *(undefined4 * )(param_5 + 0x1c) = param_4;
    *(undefined4 * )(param_5 + 0x14) = param_6;
    if (((*(byte * )(param_5 + 0x24) & 1) != 0) &&
        (iVar1 = FUN_1402887a0(*(undefined8 * )(param_5 + 8)), *(int *) (param_5 + 0x20) != iVar1)) {
        FUN_140288840(*(undefined8 * )(param_5 + 8), iVar1);
        FUN_140288980(*(undefined8 * )(param_5 + 8), *(undefined4 * )(param_5 + 0x20));
        *(uint * )(param_5 + 0x24) = *(uint * )(param_5 + 0x24) & 0xfffffffd;
        *(int *) (param_5 + 0x20) = iVar1;
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402891f0(longlong *param_1) {
    uint uVar1;
    longlong lVar2;
    int iVar3;
    longlong local_res8;
    int local_18[2];
    longlong local_10;

    local_18[0] = -1;
    if ((*(byte * )((longlong) param_1 + 0x24) & 1) != 0) {
        local_18[0] = 0;
    }
    if (0 < local_18[0]) {
        QueryPerformanceCounter(&local_res8);
        local_10 = local_res8 - _DAT_140c87988;
    }
    (**(code * *)(*param_1 + 0x20))(param_1, local_18);
    uVar1 = *(uint * )(param_1 + 4);
    lVar2 = param_1[1];
    if (*(uint * )(lVar2 + 0x4c) <= uVar1) {
        return 0;
    }
    local_18[0] = 0;
    iVar3 = FUN_140288b50(lVar2, local_18);
    if (iVar3 != 0) {
        FUN_140288d50(lVar2, uVar1, local_18);
    }
    return *(undefined8 * )(lVar2 + 0x68);
}


int FUN_1402892a0(undefined8 *param_1) {
    undefined8 *puVar1;
    int iVar2;

    LOCK();
    puVar1 = param_1 + 1;
    iVar2 = *(int *) puVar1;
    *(int *) puVar1 = *(int *) puVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != (undefined8 *) 0x0) {
            *param_1 = &PTR_LAB_140b61700;
            if ((longlong *) param_1[2] != (longlong *) 0x0) {
                (**(code * *)(*(longlong *) param_1[2] + 8))();
                param_1[2] = 0;
            }
            FUN_14018b900(param_1, 0);
        }
        iVar2 = 0;
    }
    return iVar2;
}


longlong *FUN_140289300(longlong *param_1) {
    undefined4 local_18[4];

    local_18[0] = 0xffffffff;
    (**(code * *)(*param_1 + 0x20))(param_1, local_18);
    return param_1 + 3;
}


undefined8 FUN_140289330(longlong param_1) {
    undefined8 uVar1;
    longlong lVar2;

    if (*(int *) (param_1 + 0x38) == 0) {
        uVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x10) + 0x20))();
        if ((int) uVar1 == 0) {
            return uVar1;
        }
        lVar2 = (**(code * *)(**(longlong * *)(param_1 + 0x10) + 0x18))();
        *(undefined4 * )(param_1 + 0x18) = *(undefined4 * )(lVar2 + 0x20);
        *(undefined4 * )(param_1 + 0x1c) = *(undefined4 * )(lVar2 + 0x24);
        *(undefined4 * )(param_1 + 0x20) = *(undefined4 * )(lVar2 + 0x28);
        uVar1 = *(undefined8 * )(lVar2 + 0x30);
        *(undefined4 * )(param_1 + 0x38) = 1;
        *(undefined8 * )(param_1 + 0x28) = uVar1;
    }
    return 1;
}


void FUN_1402893a0(undefined8 *param_1) {
    ulonglong *puVar1;
    longlong lVar2;
    ulonglong uVar3;
    DWORD DVar4;
    HANDLE hObject;
    ulonglong uVar5;

    lVar2 = param_1[2];
    *param_1 = &PTR_LAB_140b61760;
    DVar4 = GetCurrentThreadId();
    uVar5 = 0;
    if (*(DWORD * )(lVar2 + 0x18) == DVar4) {
        *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(lVar2 + 0x20);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
            if (uVar3 == 0) {
                *(DWORD * )(lVar2 + 0x18) = DVar4;
                goto LAB_14028940a;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < 0x400);
        FUN_14019fb60(lVar2 + 0x18, DVar4);
    }
    LAB_14028940a:
    if ((undefined8 *) param_1[0xe] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0xe] = param_1[0xf];
        if (param_1[0xf] != 0) {
            *(undefined8 * )(param_1[0xf] + 0x70) = param_1[0xe];
        }
        param_1[0xe] = 0;
        param_1[0xf] = 0;
    }
    if (0 < *(int *) (param_1 + 8)) {
        if ((longlong *) param_1[10] != (longlong *) 0x0) {
            (**(code * *)(*(longlong *) param_1[10] + 0x10))();
            param_1[10] = 0;
        }
        if ((longlong *) param_1[0xc] != (longlong *) 0x0) {
            (**(code * *)(*(longlong *) param_1[0xc] + 0x10))();
            param_1[0xc] = 0;
        }
        if ((longlong *) param_1[9] != (longlong *) 0x0) {
            (**(code * *)(*(longlong *) param_1[9] + 0x10))();
            param_1[9] = 0;
        }
    }
    *(undefined4 * )(param_1 + 8) = 0;
    if (*(ulonglong * )(lVar2 + 0x20) < 2) {
        *(undefined4 * )(lVar2 + 0x18) = 0;
        *(undefined8 * )(lVar2 + 0x20) = 0;
        if (*(longlong * )(lVar2 + 0x28) != 0) {
            if (*(longlong * )(lVar2 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar2 + 0x30);
                uVar5 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar5 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar5 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar2 + 0x30));
        }
    } else {
        *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + -1;
    }
    if ((undefined8 *) param_1[0xe] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0xe] = param_1[0xf];
    }
    if (param_1[0xf] != 0) {
        *(undefined8 * )(param_1[0xf] + 0x70) = param_1[0xe];
    }
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    return;
}


ulonglong FUN_140289510(longlong param_1, undefined8 *param_2) {
    longlong *plVar1;
    longlong lVar2;
    ulonglong uVar3;
    DWORD DVar4;
    uint uVar5;
    HANDLE hObject;
    ulonglong uVar6;
    longlong *plVar7;
    DWORD *pDVar8;
    ulonglong *puVar9;
    ulonglong uVar10;

    lVar2 = *(longlong * )(param_1 + 0x10);
    *(undefined8 * )(param_1 + 0x18) = *param_2;
    pDVar8 = (DWORD * )(lVar2 + 0x18);
    *(undefined8 * )(param_1 + 0x20) = param_2[1];
    *(undefined8 * )(param_1 + 0x28) = param_2[2];
    *(undefined8 * )(param_1 + 0x30) = param_2[3];
    *(undefined8 * )(param_1 + 0x38) = param_2[4];
    DVar4 = GetCurrentThreadId();
    uVar10 = 0;
    puVar9 = (ulonglong * )(lVar2 + 0x20);
    uVar6 = uVar10;
    if (*pDVar8 == DVar4) {
        *puVar9 = *puVar9 + 1;
    } else {
        do {
            LOCK();
            uVar3 = *puVar9;
            *puVar9 = *puVar9 ^ (ulonglong)(uVar3 == 0) * (*puVar9 ^ 1);
            if (uVar3 == 0) {
                *pDVar8 = DVar4;
                goto LAB_1402895ac;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(pDVar8);
    }
    LAB_1402895ac:
    uVar5 = FUN_140289670(param_1, 2);
    uVar6 = (ulonglong) uVar5;
    if ((-1 < (int) uVar5) &&
        (plVar7 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x1c08), uVar6 = uVar10,
                *(longlong * )(param_1 + 0x70) == 0)) {
        *(longlong * *)(param_1 + 0x70) = plVar7;
        plVar1 = (longlong * )(param_1 + 0x78);
        *plVar1 = *plVar7;
        *plVar7 = param_1;
        if (*plVar1 != 0) {
            *(longlong * *)(*plVar1 + 0x70) = plVar1;
        }
    }
    if (*puVar9 < 2) {
        *pDVar8 = 0;
        *puVar9 = 0;
        if (*(longlong * )(lVar2 + 0x28) != 0) {
            if (*(longlong * )(lVar2 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar9 = (ulonglong * )(lVar2 + 0x30);
                uVar10 = *puVar9;
                *puVar9 = *puVar9 ^ (ulonglong)(uVar10 == 0) * (*puVar9 ^ (ulonglong) hObject);
                if (uVar10 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar2 + 0x30));
        }
    } else {
        *puVar9 = *puVar9 - 1;
    }
    return uVar6;
}


undefined8 FUN_140289670(longlong param_1, int param_2) {
    longlong *plVar1;
    undefined8 uVar2;
    undefined4 local_48;
    undefined4 local_44;
    undefined4 local_38;
    undefined4 local_34;

    if (*(int *) (param_1 + 0x40) < 1) {
        if (0 < param_2) {
            uVar2 = FUN_14026a150(*(longlong * )(param_1 + 0x10), param_1 + 0x18,
                                  *(longlong * )(param_1 + 0x10) + 0x19a0, &local_48);
            if ((int) uVar2 < 0) {
                return uVar2;
            }
            plVar1 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x19d0);
            uVar2 = (**(code * *)(*plVar1 + 0x68))(plVar1, &local_48, param_1 + 0x48);
            if ((int) uVar2 < 0) {
                return uVar2;
            }
            uVar2 = (**(code * *)(**(longlong * *)(param_1 + 0x48) + 0x28))
                    (*(longlong * *)(param_1 + 0x48), 0, 0, param_1 + 0x50);
            if ((int) uVar2 < 0) {
                return uVar2;
            }
            if ((*(int *) (param_1 + 0x24) < 0x1b) &&
                (plVar1 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x19d0),
                        uVar2 = (**(code * *)(*plVar1 + 0xe8))
                                (plVar1, local_48, local_44, (&DAT_140ae7b30)[*(int *) (param_1 + 0x24)],
                                 local_38, local_34, 0, param_1 + 0x60, 0), (int) uVar2 < 0)) {
                return uVar2;
            }
            *(int *) (param_1 + 0x58) = *(int *) (*(longlong * )(param_1 + 0x10) + 0xf0) + -1;
            *(int *) (param_1 + 0x68) = *(int *) (*(longlong * )(param_1 + 0x10) + 0xf0) + -1;
            goto LAB_1402897b5;
        }
        if (*(int *) (param_1 + 0x40) < 1) goto LAB_1402897b5;
    }
    if (param_2 < 1) {
        if (*(longlong * *)(param_1 + 0x50) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x50) + 0x10))();
            *(undefined8 * )(param_1 + 0x50) = 0;
        }
        if (*(longlong * *)(param_1 + 0x60) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x60) + 0x10))();
            *(undefined8 * )(param_1 + 0x60) = 0;
        }
        if (*(longlong * *)(param_1 + 0x48) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x48) + 0x10))();
            *(undefined8 * )(param_1 + 0x48) = 0;
        }
    }
    LAB_1402897b5:
    *(int *) (param_1 + 0x40) = param_2;
    return 0;
}


int FUN_1402897d0(longlong param_1) {
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *) (param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_1402893a0();
            FUN_14018b900(param_1, 0);
        }
        iVar2 = 0;
    }
    return iVar2;
}


void FUN_140289810(longlong param_1) {
    BOOL BVar1;
    undefined auStack104[32];
    WINDOWPLACEMENT local_48;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack104;
    if (*(int *) (param_1 + 0x40) < 1) {
        LAB_140289829:
        FUN_1407db4f0(local_18 ^ (ulonglong) auStack104);
        return;
    }
    if (*(HWND * )(param_1 + 0x30) != (HWND) 0x0) {
        local_48.length = 0x2c;
        BVar1 = GetWindowPlacement(*(HWND * )(param_1 + 0x30), &local_48);
        if ((BVar1 != 0) && ((local_48.showCmd & 0xfffffffd) == 0)) goto LAB_140289829;
    }
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack104);
    return;
}


void FUN_140289880(undefined8 *param_1) {
    ulonglong *puVar1;
    longlong lVar2;
    ulonglong uVar3;
    DWORD DVar4;
    HANDLE hObject;
    ulonglong uVar5;
    int *piVar6;

    lVar2 = param_1[2];
    *param_1 = &PTR_LAB_140b617e0;
    DVar4 = GetCurrentThreadId();
    uVar5 = 0;
    if (*(DWORD * )(lVar2 + 0x18) == DVar4) {
        *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(lVar2 + 0x20);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
            if (uVar3 == 0) {
                *(DWORD * )(lVar2 + 0x18) = DVar4;
                goto LAB_1402898ea;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < 0x400);
        FUN_14019fb60(lVar2 + 0x18, DVar4);
    }
    LAB_1402898ea:
    if (param_1[7] != 0) {
        piVar6 = (int *) (param_1[2] + 0x154 + (longlong) * (int *) ((longlong) param_1 + 0x1c) * 0x30);
        LOCK();
        *piVar6 = *piVar6 + -1;
        LOCK();
        piVar6[1] = piVar6[1] - *(int *) (param_1 + 3);
        LOCK();
        piVar6[4] = piVar6[4] + 1;
        LOCK();
        piVar6[5] = piVar6[5] + *(int *) (param_1 + 3);
        if ((undefined8 *) param_1[7] != (undefined8 *) 0x0) {
            *(undefined8 *) param_1[7] = param_1[8];
        }
        if (param_1[8] != 0) {
            *(undefined8 * )(param_1[8] + 0x38) = param_1[7];
        }
        param_1[7] = 0;
        param_1[8] = 0;
    }
    if (0 < *(int *) (param_1 + 4)) {
        if ((longlong *) param_1[5] != (longlong *) 0x0) {
            (**(code * *)(*(longlong *) param_1[5] + 0x10))();
            param_1[5] = 0;
        }
        *(undefined4 * )(param_1 + 6) = 0;
    }
    *(undefined4 * )(param_1 + 4) = 0;
    if (*(ulonglong * )(lVar2 + 0x20) < 2) {
        *(undefined4 * )(lVar2 + 0x18) = 0;
        *(undefined8 * )(lVar2 + 0x20) = 0;
        if (*(longlong * )(lVar2 + 0x28) != 0) {
            if (*(longlong * )(lVar2 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar2 + 0x30);
                uVar5 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar5 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar5 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar2 + 0x30));
        }
    } else {
        *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + -1;
    }
    if ((undefined8 *) param_1[7] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[7] = param_1[8];
    }
    if (param_1[8] != 0) {
        *(undefined8 * )(param_1[8] + 0x38) = param_1[7];
    }
    param_1[8] = 0;
    param_1[7] = 0;
    return;
}


ulonglong FUN_140289a00(longlong param_1, undefined4 param_2, undefined4 param_3) {
    longlong *plVar1;
    longlong lVar2;
    ulonglong uVar3;
    longlong lVar4;
    DWORD DVar5;
    uint uVar6;
    HANDLE hObject;
    ulonglong uVar7;
    longlong *plVar8;
    int *piVar9;
    DWORD *pDVar10;
    ulonglong *puVar11;
    ulonglong uVar12;

    lVar2 = *(longlong * )(param_1 + 0x10);
    *(undefined4 * )(param_1 + 0x18) = param_2;
    pDVar10 = (DWORD * )(lVar2 + 0x18);
    *(undefined4 * )(param_1 + 0x1c) = param_3;
    DVar5 = GetCurrentThreadId();
    uVar12 = 0;
    puVar11 = (ulonglong * )(lVar2 + 0x20);
    uVar7 = uVar12;
    if (*pDVar10 == DVar5) {
        *puVar11 = *puVar11 + 1;
    } else {
        do {
            LOCK();
            uVar3 = *puVar11;
            *puVar11 = *puVar11 ^ (ulonglong)(uVar3 == 0) * (*puVar11 ^ 1);
            if (uVar3 == 0) {
                *pDVar10 = DVar5;
                goto LAB_140289a7e;
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < 0x400);
        FUN_14019fb60(pDVar10, DVar5);
    }
    LAB_140289a7e:
    if (*(int *) (param_1 + 0x20) < 1) {
        lVar4 = *(longlong * )(param_1 + 0x10);
        uVar6 = (**(code * *)(**(longlong * *)(lVar4 + 0x19d0) + 0xd0))
                (*(longlong * *)(lVar4 + 0x19d0), *(undefined4 * )(param_1 + 0x18),
                 *(undefined4 * )
                         (*(longlong * )(lVar4 + 0x1b88) + (longlong) * (int *) (param_1 + 0x1c) * 4), 0,
                 *(undefined4 * )
                         (*(longlong * )(lVar4 + 0x1b90) + (longlong) * (int *) (param_1 + 0x1c) * 4),
                 param_1 + 0x28, 0);
        uVar7 = (ulonglong) uVar6;
        if ((int) uVar6 < 0) goto LAB_140289b46;
    }
    *(undefined4 * )(param_1 + 0x20) = 2;
    piVar9 = (int *) (*(longlong * )(param_1 + 0x10) + 0x154 + (longlong) * (int *) (param_1 + 0x1c) * 0x30
    );
    LOCK();
    *piVar9 = *piVar9 + 1;
    LOCK();
    piVar9[1] = piVar9[1] + *(int *) (param_1 + 0x18);
    LOCK();
    piVar9[2] = piVar9[2] + 1;
    LOCK();
    piVar9[3] = piVar9[3] + *(int *) (param_1 + 0x18);
    plVar8 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x1c10);
    uVar7 = uVar12;
    if (*(longlong * )(param_1 + 0x38) == 0) {
        *(longlong * *)(param_1 + 0x38) = plVar8;
        plVar1 = (longlong * )(param_1 + 0x40);
        *plVar1 = *plVar8;
        *plVar8 = param_1;
        if (*plVar1 != 0) {
            *(longlong * *)(*plVar1 + 0x38) = plVar1;
        }
    }
    LAB_140289b46:
    if (*puVar11 < 2) {
        *pDVar10 = 0;
        *puVar11 = 0;
        if (*(longlong * )(lVar2 + 0x28) != 0) {
            if (*(longlong * )(lVar2 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar11 = (ulonglong * )(lVar2 + 0x30);
                uVar12 = *puVar11;
                *puVar11 = *puVar11 ^ (ulonglong)(uVar12 == 0) * (*puVar11 ^ (ulonglong) hObject);
                if (uVar12 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar2 + 0x30));
        }
        return uVar7;
    }
    *puVar11 = *puVar11 - 1;
    return uVar7;
}


undefined8 FUN_140289bd0(longlong param_1, int param_2) {
    longlong lVar1;
    longlong lVar2;
    undefined8 uVar3;

    if (*(int *) (param_1 + 0x20) < 1) {
        if (0 < param_2) {
            lVar2 = *(longlong * )(param_1 + 0x10);
            lVar1 = (longlong) * (int *) (param_1 + 0x1c) * 4;
            uVar3 = (**(code * *)(**(longlong * *)(lVar2 + 0x19d0) + 0xd0))
                    (*(longlong * *)(lVar2 + 0x19d0), *(undefined4 * )(param_1 + 0x18),
                     *(undefined4 * )(*(longlong * )(lVar2 + 0x1b88) + lVar1), 0,
                     *(undefined4 * )(*(longlong * )(lVar2 + 0x1b90) + lVar1), param_1 + 0x28, 0);
            if ((int) uVar3 < 0) {
                return uVar3;
            }
            goto LAB_140289c76;
        }
        if (*(int *) (param_1 + 0x20) < 1) goto LAB_140289c76;
    }
    if (param_2 < 1) {
        if (*(longlong * *)(param_1 + 0x28) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x28) + 0x10))();
            *(undefined8 * )(param_1 + 0x28) = 0;
        }
        *(undefined4 * )(param_1 + 0x30) = 0;
    }
    LAB_140289c76:
    *(int *) (param_1 + 0x20) = param_2;
    return 0;
}


int FUN_140289c90(longlong param_1) {
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *) (param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_140289880();
            FUN_14018b900(param_1, 0);
        }
        iVar2 = 0;
    }
    return iVar2;
}


ulonglong FUN_140289cd0(longlong param_1, int param_2) {
    longlong lVar1;
    int *piVar2;
    longlong lVar3;
    longlong lVar4;
    ulonglong uVar5;
    DWORD DVar6;
    uint uVar7;
    HANDLE hObject;
    ulonglong uVar8;
    DWORD *pDVar9;
    ulonglong *puVar10;

    if (param_2 == *(int *) (param_1 + 0x18)) {
        return 0;
    }
    lVar3 = *(longlong * )(param_1 + 0x10);
    pDVar9 = (DWORD * )(lVar3 + 0x18);
    DVar6 = GetCurrentThreadId();
    puVar10 = (ulonglong * )(lVar3 + 0x20);
    uVar8 = 0;
    if (*pDVar9 == DVar6) {
        *puVar10 = *puVar10 + 1;
    } else {
        do {
            LOCK();
            uVar5 = *puVar10;
            *puVar10 = *puVar10 ^ (ulonglong)(uVar5 == 0) * (*puVar10 ^ 1);
            if (uVar5 == 0) {
                *pDVar9 = DVar6;
                goto LAB_140289d5a;
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < 0x400);
        FUN_14019fb60(pDVar9);
    }
    LAB_140289d5a:
    if (0 < *(int *) (param_1 + 0x20)) {
        if (*(longlong * *)(param_1 + 0x28) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x28) + 0x10))();
            *(undefined8 * )(param_1 + 0x28) = 0;
        }
        *(undefined4 * )(param_1 + 0x30) = 0;
    }
    *(undefined4 * )(param_1 + 0x20) = 0;
    LOCK();
    piVar2 = (int *) (*(longlong * )(param_1 + 0x10) + 0x158 + (longlong) * (int *) (param_1 + 0x1c) * 0x30
    );
    *piVar2 = *piVar2 + (param_2 - *(int *) (param_1 + 0x18));
    *(int *) (param_1 + 0x18) = param_2;
    if (*(int *) (param_1 + 0x20) < 1) {
        lVar4 = *(longlong * )(param_1 + 0x10);
        lVar1 = (longlong) * (int *) (param_1 + 0x1c) * 4;
        uVar7 = (**(code * *)(**(longlong * *)(lVar4 + 0x19d0) + 0xd0))
                (*(longlong * *)(lVar4 + 0x19d0), param_2,
                 *(undefined4 * )(*(longlong * )(lVar4 + 0x1b88) + lVar1), 0,
                 *(undefined4 * )(*(longlong * )(lVar4 + 0x1b90) + lVar1), param_1 + 0x28, 0);
        uVar8 = (ulonglong) uVar7;
        if ((int) uVar7 < 0) goto LAB_140289dfc;
    }
    *(undefined4 * )(param_1 + 0x20) = 2;
    uVar8 = 0;
    LAB_140289dfc:
    if (*puVar10 < 2) {
        *pDVar9 = 0;
        *puVar10 = 0;
        if (*(longlong * )(lVar3 + 0x28) != 0) {
            if (*(longlong * )(lVar3 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar10 = (ulonglong * )(lVar3 + 0x30);
                uVar5 = *puVar10;
                *puVar10 = *puVar10 ^ (ulonglong)(uVar5 == 0) * (*puVar10 ^ (ulonglong) hObject);
                if (uVar5 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar3 + 0x30));
        }
    } else {
        *puVar10 = *puVar10 - 1;
    }
    return uVar8;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_140289ea0(longlong param_1, int param_2, int param_3, ulonglong param_4) {
    int iVar1;
    undefined4 uVar2;
    longlong lVar3;
    undefined **local_e8;
    undefined8 local_e0;
    LPVOID local_d8;
    undefined **local_d0;
    undefined8 local_c8;
    LPVOID local_c0;
    undefined **local_b8;
    undefined8 uStack176;
    undefined8 local_a8;
    int iStack160;
    undefined4 uStack156;
    undefined8 local_98;
    undefined8 local_90;
    undefined8 local_88[2];
    undefined **local_78;
    undefined8 local_70;
    LPVOID local_68;
    undefined **local_58;
    undefined8 local_50;
    LPVOID local_48;
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 uStack44;
    undefined4 local_28;
    undefined4 uStack36;
    int iStack32;
    undefined4 uStack28;

    uVar2 = 0;
    if ((param_4 & 3) != 0) {
        if (((param_4 & 1) == 0) || (*(int *) (param_1 + 0x1c) != 1)) {
            if ((param_4 & 2) == 0) {
                uVar2 = 0x10;
            }
            if (param_3 == 0) {
                param_3 = *(int *) (param_1 + 0x18);
            }
            if ((uint)(param_2 + param_3) < *(uint * )(param_1 + 0x18) ||
                param_2 + param_3 == *(uint * )(param_1 + 0x18)) {
                *(undefined4 * )(param_1 + 0x30) = 1;
                iStack160 = (**(code * *)(**(longlong * *)(param_1 + 0x28) + 0x58))
                        (*(longlong * *)(param_1 + 0x28), param_2, param_3, &local_90, uVar2);
                if (iStack160 < 0) {
                    local_b8 = &PTR_LAB_140b5e648;
                    uStack176 = L"Result";
                    local_a8 = TlsGetValue(DAT_140c63720);
                    TlsSetValue(DAT_140c63720, &local_b8);
                    local_b8 = &PTR_LAB_140b5e640;
                    local_38 = 0x40b5e640;
                    uStack52 = 1;
                    uStack48 = (undefined4) uStack176;
                    uStack44 = uStack176._4_4_;
                    local_28 = (undefined4) local_a8;
                    uStack36 = local_a8._4_4_;
                    uStack28 = uStack156;
                    iStack32 = iStack160;
                    FUN_1400035b0(0xe, 0, 0, &local_38);
                    local_b8 = &PTR_LAB_140b5e648;
                    TlsSetValue(DAT_140c63720, (LPVOID) CONCAT44(local_a8._4_4_, (undefined4) local_a8));
                    return 0;
                }
                lVar3 = *(longlong * )(param_1 + 0x10) + 0x154 + (longlong) * (int *) (param_1 + 0x1c) * 0x30;
                if ((param_4 & 1) != 0) {
                    LOCK();
                    *(int *) (lVar3 + 0x18) = *(int *) (lVar3 + 0x18) + 1;
                    LOCK();
                    *(int *) (lVar3 + 0x1c) = *(int *) (lVar3 + 0x1c) + param_3;
                }
                if ((param_4 & 2) != 0) {
                    LOCK();
                    *(int *) (lVar3 + 0x20) = *(int *) (lVar3 + 0x20) + 1;
                    LOCK();
                    *(int *) (lVar3 + 0x24) = *(int *) (lVar3 + 0x24) + param_3;
                    return local_90;
                }
                return local_90;
            }
            local_e0 = 0;
            local_e8 = &PTR_LAB_140b5e648;
            local_d8 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_e8);
            local_78 = local_e8;
            local_88[0] = 0x141de3c00;
            local_68 = local_d8;
            local_70 = local_e0;
            iVar1 = FUN_1401971e0(&DAT_140c8a3b4, 0xe, local_88, &local_78);
            local_e8 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720, local_d8);
            if (iVar1 != 0) {
                DebugBreak();
            }
        } else {
            local_c8 = 0;
            local_d0 = &PTR_LAB_140b5e648;
            local_c0 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_d0);
            local_58 = local_d0;
            local_98 = 0x141de3c60;
            local_48 = local_c0;
            local_50 = local_c8;
            iVar1 = FUN_1401971e0(&DAT_140c8a3b0, 0xe, &local_98, &local_58);
            local_d0 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720, local_c0);
            if (iVar1 != 0) {
                DebugBreak();
                return 0;
            }
        }
    }
    return 0;
}


void FUN_14028a170(undefined8 *param_1) {
    ulonglong *puVar1;
    longlong lVar2;
    ulonglong uVar3;
    longlong lVar4;
    DWORD DVar5;
    HANDLE hObject;
    ulonglong uVar6;

    lVar2 = param_1[2];
    *param_1 = &PTR_LAB_140b61790;
    DVar5 = GetCurrentThreadId();
    uVar6 = 0;
    if (*(DWORD * )(lVar2 + 0x18) == DVar5) {
        *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(lVar2 + 0x20);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
            if (uVar3 == 0) {
                *(DWORD * )(lVar2 + 0x18) = DVar5;
                goto LAB_14028a1da;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(lVar2 + 0x18, DVar5);
    }
    LAB_14028a1da:
    if (param_1[6] != 0) {
        lVar4 = param_1[2];
        LOCK();
        *(int *) (lVar4 + 0x1e4) = *(int *) (lVar4 + 0x1e4) + -1;
        LOCK();
        *(int *) (lVar4 + 0x1e8) = *(int *) (lVar4 + 0x1e8) - *(int *) (param_1 + 3);
        LOCK();
        *(int *) (lVar4 + 500) = *(int *) (lVar4 + 500) + 1;
        LOCK();
        *(int *) (lVar4 + 0x1f8) = *(int *) (lVar4 + 0x1f8) + *(int *) (param_1 + 3);
        if ((undefined8 *) param_1[6] != (undefined8 *) 0x0) {
            *(undefined8 *) param_1[6] = param_1[7];
        }
        if (param_1[7] != 0) {
            *(undefined8 * )(param_1[7] + 0x30) = param_1[6];
        }
        param_1[6] = 0;
        param_1[7] = 0;
    }
    *(undefined4 * )(param_1 + 4) = 0;
    if (*(ulonglong * )(lVar2 + 0x20) < 2) {
        *(undefined4 * )(lVar2 + 0x18) = 0;
        *(undefined8 * )(lVar2 + 0x20) = 0;
        if (*(longlong * )(lVar2 + 0x28) != 0) {
            if (*(longlong * )(lVar2 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar2 + 0x30);
                uVar6 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar6 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar2 + 0x30));
        }
    } else {
        *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + -1;
    }
    if ((undefined8 *) param_1[6] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[6] = param_1[7];
    }
    if (param_1[7] != 0) {
        *(undefined8 * )(param_1[7] + 0x30) = param_1[6];
    }
    param_1[7] = 0;
    param_1[6] = 0;
    return;
}


undefined8 FUN_14028a2d0(longlong param_1, undefined4 param_2) {
    longlong *plVar1;
    longlong lVar2;
    ulonglong uVar3;
    longlong lVar4;
    DWORD DVar5;
    HANDLE hObject;
    ulonglong uVar6;
    longlong *plVar7;
    DWORD *pDVar8;
    ulonglong *puVar9;

    lVar2 = *(longlong * )(param_1 + 0x10);
    *(undefined4 * )(param_1 + 0x18) = param_2;
    pDVar8 = (DWORD * )(lVar2 + 0x18);
    *(undefined4 * )(param_1 + 0x1c) = 3;
    DVar5 = GetCurrentThreadId();
    uVar6 = 0;
    puVar9 = (ulonglong * )(lVar2 + 0x20);
    if (*pDVar8 == DVar5) {
        *puVar9 = *puVar9 + 1;
    } else {
        do {
            LOCK();
            uVar3 = *puVar9;
            *puVar9 = *puVar9 ^ (ulonglong)(uVar3 == 0) * (*puVar9 ^ 1);
            if (uVar3 == 0) {
                *pDVar8 = DVar5;
                goto LAB_14028a34e;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(pDVar8, DVar5);
    }
    LAB_14028a34e:
    if (*(int *) (param_1 + 0x20) < 2) {
        *(int *) (param_1 + 0x28) = *(int *) (*(longlong * )(param_1 + 0x10) + 0x1ba8) + -1;
    }
    lVar4 = *(longlong * )(param_1 + 0x10);
    *(undefined4 * )(param_1 + 0x20) = 2;
    LOCK();
    *(int *) (lVar4 + 0x1e4) = *(int *) (lVar4 + 0x1e4) + 1;
    LOCK();
    *(int *) (lVar4 + 0x1e8) = *(int *) (lVar4 + 0x1e8) + *(int *) (param_1 + 0x18);
    LOCK();
    *(int *) (lVar4 + 0x1ec) = *(int *) (lVar4 + 0x1ec) + 1;
    LOCK();
    *(int *) (lVar4 + 0x1f0) = *(int *) (lVar4 + 0x1f0) + *(int *) (param_1 + 0x18);
    plVar7 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x1c18);
    if (*(longlong * )(param_1 + 0x30) == 0) {
        *(longlong * *)(param_1 + 0x30) = plVar7;
        plVar1 = (longlong * )(param_1 + 0x38);
        *plVar1 = *plVar7;
        *plVar7 = param_1;
        if (*plVar1 != 0) {
            *(longlong * *)(*plVar1 + 0x30) = plVar1;
        }
    }
    if (*puVar9 < 2) {
        *pDVar8 = 0;
        *puVar9 = 0;
        if (*(longlong * )(lVar2 + 0x28) != 0) {
            if (*(longlong * )(lVar2 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar9 = (ulonglong * )(lVar2 + 0x30);
                uVar6 = *puVar9;
                *puVar9 = *puVar9 ^ (ulonglong)(uVar6 == 0) * (*puVar9 ^ (ulonglong) hObject);
                if (uVar6 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar2 + 0x30));
        }
        return 0;
    }
    *puVar9 = *puVar9 - 1;
    return 0;
}


int FUN_14028a440(longlong param_1) {
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *) (param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_14028a170();
            FUN_14018b900(param_1, 0);
        }
        iVar2 = 0;
    }
    return iVar2;
}


undefined8 FUN_14028a480(longlong param_1, int param_2) {
    int *piVar1;
    longlong lVar2;
    ulonglong uVar3;
    DWORD DVar4;
    HANDLE hObject;
    ulonglong uVar5;
    DWORD *pDVar6;
    ulonglong *puVar7;

    if (param_2 != *(int *) (param_1 + 0x18)) {
        lVar2 = *(longlong * )(param_1 + 0x10);
        pDVar6 = (DWORD * )(lVar2 + 0x18);
        DVar4 = GetCurrentThreadId();
        uVar5 = 0;
        puVar7 = (ulonglong * )(lVar2 + 0x20);
        if (*pDVar6 == DVar4) {
            *puVar7 = *puVar7 + 1;
        } else {
            do {
                LOCK();
                uVar3 = *puVar7;
                *puVar7 = *puVar7 ^ (ulonglong)(uVar3 == 0) * (*puVar7 ^ 1);
                if (uVar3 == 0) {
                    *pDVar6 = DVar4;
                    goto LAB_14028a500;
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 < 0x400);
            FUN_14019fb60();
        }
        LAB_14028a500:
        *(undefined4 * )(param_1 + 0x20) = 0;
        LOCK();
        piVar1 = (int *) (*(longlong * )(param_1 + 0x10) + 0x1e8);
        *piVar1 = *piVar1 + (param_2 - *(int *) (param_1 + 0x18));
        *(int *) (param_1 + 0x18) = param_2;
        if (*(int *) (param_1 + 0x20) < 2) {
            *(int *) (param_1 + 0x28) = *(int *) (*(longlong * )(param_1 + 0x10) + 0x1ba8) + -1;
        }
        *(undefined4 * )(param_1 + 0x20) = 2;
        if (*puVar7 < 2) {
            *pDVar6 = 0;
            *puVar7 = 0;
            if (*(longlong * )(lVar2 + 0x28) != 0) {
                if (*(longlong * )(lVar2 + 0x30) == 0) {
                    hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                    LOCK();
                    puVar7 = (ulonglong * )(lVar2 + 0x30);
                    uVar5 = *puVar7;
                    *puVar7 = *puVar7 ^ (ulonglong)(uVar5 == 0) * (*puVar7 ^ (ulonglong) hObject);
                    if (uVar5 != 0) {
                        CloseHandle(hObject);
                    }
                }
                SetEvent(*(HANDLE * )(lVar2 + 0x30));
            }
        } else {
            *puVar7 = *puVar7 - 1;
        }
    }
    return 0;
}


void FUN_14028a5d0(longlong param_1) {
    ulonglong *puVar1;
    longlong lVar2;
    ulonglong uVar3;
    DWORD DVar4;
    HANDLE hObject;
    ulonglong uVar5;

    lVar2 = *(longlong * )(param_1 + 0x10);
    DVar4 = GetCurrentThreadId();
    uVar5 = 0;
    if (*(DWORD * )(lVar2 + 0x18) == DVar4) {
        *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(lVar2 + 0x20);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
            if (uVar3 == 0) {
                *(DWORD * )(lVar2 + 0x18) = DVar4;
                goto LAB_14028a630;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < 0x400);
        FUN_14019fb60(lVar2 + 0x18, DVar4);
    }
    LAB_14028a630:
    *(int *) (param_1 + 0x28) = *(int *) (*(longlong * )(param_1 + 0x10) + 0x1ba8) + -1;
    if (*(ulonglong * )(lVar2 + 0x20) < 2) {
        *(undefined4 * )(lVar2 + 0x18) = 0;
        *(undefined8 * )(lVar2 + 0x20) = 0;
        if (*(longlong * )(lVar2 + 0x28) != 0) {
            if (*(longlong * )(lVar2 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar2 + 0x30);
                uVar5 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar5 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar5 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar2 + 0x30));
        }
        return;
    }
    *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + -1;
    return;
}



// WARNING: Could not reconcile some variable overlaps

ulonglong FUN_14028a6c0(longlong param_1, int param_2, int param_3, ulonglong param_4) {
    int *piVar1;
    longlong lVar2;
    ulonglong uVar3;
    longlong lVar4;
    longlong *plVar5;
    int iVar6;
    DWORD DVar7;
    HANDLE hObject;
    uint uVar8;
    ulonglong uVar9;
    DWORD *pDVar10;
    ulonglong *puVar11;
    ulonglong local_160;
    undefined **local_158;
    undefined8 local_150;
    LPVOID local_148;
    undefined **local_140;
    undefined8 local_138;
    LPVOID local_130;
    undefined **local_128;
    undefined8 uStack288;
    undefined8 local_118;
    int iStack272;
    undefined4 uStack268;
    undefined **local_108;
    undefined8 uStack256;
    undefined8 local_f8;
    int iStack240;
    undefined4 uStack236;
    undefined **local_e8;
    undefined8 uStack224;
    undefined8 local_d8;
    int iStack208;
    undefined4 uStack204;
    undefined8 local_c8;
    undefined8 local_c0;
    undefined **local_b8;
    undefined8 local_b0;
    LPVOID local_a8;
    undefined **local_98;
    undefined8 local_90;
    LPVOID local_88;
    undefined4 local_78;
    undefined4 uStack116;
    undefined4 uStack112;
    undefined4 uStack108;
    undefined4 local_68;
    undefined4 uStack100;
    int iStack96;
    undefined4 uStack92;
    undefined4 local_58;
    undefined4 uStack84;
    undefined4 uStack80;
    undefined4 uStack76;
    undefined4 local_48;
    undefined4 uStack68;
    int iStack64;
    undefined4 uStack60;
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 uStack44;
    undefined4 local_28;
    undefined4 uStack36;
    int iStack32;
    undefined4 uStack28;

    if ((param_4 & 1) != 0) {
        local_158 = &PTR_LAB_140b5e648;
        local_150 = 0;
        local_148 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_158);
        local_b8 = local_158;
        local_c8 = 0x141de3b30;
        local_a8 = local_148;
        local_b0 = local_150;
        iVar6 = FUN_1401971e0(&DAT_140c8a3a8, 0xe, &local_c8, &local_b8);
        local_158 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_148);
        if (iVar6 != 0) {
            DebugBreak();
        }
        return 0;
    }
    if (param_3 == 0) {
        param_3 = *(int *) (param_1 + 0x18);
    }
    if (*(uint * )(param_1 + 0x18) <= (uint)(param_2 + param_3) &&
        param_2 + param_3 != *(uint * )(param_1 + 0x18)) {
        local_140 = &PTR_LAB_140b5e648;
        local_138 = 0;
        local_130 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_140);
        local_98 = local_140;
        local_c0 = 0x141de3cd0;
        local_88 = local_130;
        local_90 = local_138;
        iVar6 = FUN_1401971e0(&DAT_140c8a3ac, 0xe, &local_c0, &local_98);
        local_140 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_130);
        if (iVar6 == 0) {
            return 0;
        }
        DebugBreak();
        return 0;
    }
    lVar2 = *(longlong * )(param_1 + 0x10);
    pDVar10 = (DWORD * )(lVar2 + 0x18);
    DVar7 = GetCurrentThreadId();
    puVar11 = (ulonglong * )(lVar2 + 0x20);
    uVar9 = 0;
    if (*pDVar10 == DVar7) {
        *puVar11 = *puVar11 + 1;
    } else {
        do {
            LOCK();
            uVar3 = *puVar11;
            *puVar11 = *puVar11 ^ (ulonglong)(uVar3 == 0) * (*puVar11 ^ 1);
            if (uVar3 == 0) {
                *pDVar10 = DVar7;
                goto LAB_14028a8ba;
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 < 0x400);
        FUN_14019fb60();
    }
    LAB_14028a8ba:
    lVar4 = *(longlong * )(param_1 + 0x10);
    if ((*(int *) (param_1 + 0x28) == *(int *) (lVar4 + 0x1ba8)) && ((param_4 & 4) == 0)) {
        iVar6 = (**(code * *)(**(longlong * *)(lVar4 + 0x1b98) + 0x58))
                (*(longlong * *)(lVar4 + 0x1b98), *(int *) (param_1 + 0x24) + param_2, param_3,
                 &local_160, 0);
        if (iVar6 < 0) {
            uStack224 = L"Result";
            local_e8 = &PTR_LAB_140b5e648;
            local_d8 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_e8);
            local_e8 = &PTR_LAB_140b5e640;
            local_78 = 0x40b5e640;
            uStack116 = 1;
            uStack112 = (undefined4) uStack224;
            uStack108 = uStack224._4_4_;
            local_68 = (undefined4) local_d8;
            uStack100 = local_d8._4_4_;
            uStack92 = uStack204;
            iStack208 = iVar6;
            iStack96 = iVar6;
            FUN_1400035b0(0xe, 0, 0, &local_78);
            local_e8 = &PTR_LAB_140b5e648;
            goto LAB_14028aae1;
        }
        LAB_14028ab25:
        lVar4 = *(longlong * )(param_1 + 0x10);
        if ((param_4 & 2) != 0) {
            LOCK();
            piVar1 = (int *) (lVar4 + 0x204);
            *piVar1 = *piVar1 + 1;
            LOCK();
            piVar1 = (int *) (lVar4 + 0x208);
            *piVar1 = *piVar1 + param_3;
        }
    } else {
        uVar8 = *(int *) (param_1 + 0x18) + *(int *) (lVar4 + 0x1ba4);
        if (uVar8 < *(uint * )(lVar4 + 0x1ba0) || uVar8 == *(uint * )(lVar4 + 0x1ba0)) {
            iVar6 = (**(code * *)(**(longlong * *)(lVar4 + 0x1b98) + 0x58))
                    (*(longlong * *)(lVar4 + 0x1b98), *(int *) (lVar4 + 0x1ba4) + param_2, param_3,
                     &local_160, 0x1000);
            if (-1 < iVar6) goto LAB_14028aaf7;
            uStack288 = L"Result";
            local_128 = &PTR_LAB_140b5e648;
            local_118 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_128);
            local_128 = &PTR_LAB_140b5e640;
            local_38 = 0x40b5e640;
            uStack52 = 1;
            uStack48 = (undefined4) uStack288;
            uStack44 = uStack288._4_4_;
            local_28 = (undefined4) local_118;
            uStack36 = local_118._4_4_;
            uStack28 = uStack268;
            iStack272 = iVar6;
            iStack32 = iVar6;
            FUN_1400035b0(0xe, 0, 0, &local_38);
            local_128 = &PTR_LAB_140b5e648;
            local_d8._0_4_ = (undefined4) local_118;
            local_d8._4_4_ = local_118._4_4_;
        } else {
            *(int *) (lVar4 + 0x1ba8) = *(int *) (lVar4 + 0x1ba8) + 1;
            *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 0x1ba4) = 0;
            plVar5 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x1b98);
            iVar6 = (**(code * *)(*plVar5 + 0x58))
                    (plVar5, *(int *) (*(longlong * )(param_1 + 0x10) + 0x1ba4) + param_2, param_3,
                     &local_160, 0x2000);
            if (-1 < iVar6) {
                LAB_14028aaf7:
                lVar4 = *(longlong * )(param_1 + 0x10);
                *(undefined4 * )(param_1 + 0x28) = *(undefined4 * )(lVar4 + 0x1ba8);
                *(undefined4 * )(param_1 + 0x24) = *(undefined4 * )(lVar4 + 0x1ba4);
                *(int *) (lVar4 + 0x1ba4) = *(int *) (lVar4 + 0x1ba4) + *(int *) (param_1 + 0x18);
                *(int *) (param_1 + 0x2c) = *(int *) (*(longlong * )(param_1 + 0x10) + 0xf0) + -1;
                goto LAB_14028ab25;
            }
            uStack256 = L"Result";
            local_108 = &PTR_LAB_140b5e648;
            local_f8 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_108);
            local_108 = &PTR_LAB_140b5e640;
            local_58 = 0x40b5e640;
            uStack84 = 1;
            uStack80 = (undefined4) uStack256;
            uStack76 = uStack256._4_4_;
            local_48 = (undefined4) local_f8;
            uStack68 = local_f8._4_4_;
            uStack60 = uStack236;
            iStack240 = iVar6;
            iStack64 = iVar6;
            FUN_1400035b0(0xe, 0, 0, &local_58);
            local_108 = &PTR_LAB_140b5e648;
            local_d8._0_4_ = (undefined4) local_f8;
            local_d8._4_4_ = local_f8._4_4_;
        }
        LAB_14028aae1:
        TlsSetValue(DAT_140c63720, (LPVOID) CONCAT44(local_d8._4_4_, (undefined4) local_d8));
        local_160 = 0;
    }
    if (1 < *puVar11) {
        *puVar11 = *puVar11 - 1;
        return local_160;
    }
    *pDVar10 = 0;
    *puVar11 = 0;
    if (*(longlong * )(lVar2 + 0x28) != 0) {
        if (*(longlong * )(lVar2 + 0x30) == 0) {
            hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
            LOCK();
            puVar11 = (ulonglong * )(lVar2 + 0x30);
            uVar9 = *puVar11;
            *puVar11 = *puVar11 ^ (ulonglong)(uVar9 == 0) * (*puVar11 ^ (ulonglong) hObject);
            if (uVar9 != 0) {
                CloseHandle(hObject);
            }
        }
        SetEvent(*(HANDLE * )(lVar2 + 0x30));
        return local_160;
    }
    return local_160;
}


void FUN_14028abf0(undefined8 *param_1) {
    ulonglong *puVar1;
    longlong lVar2;
    ulonglong uVar3;
    DWORD DVar4;
    HANDLE hObject;
    ulonglong uVar5;
    int *piVar6;

    lVar2 = param_1[2];
    *param_1 = &PTR_LAB_140b61880;
    DVar4 = GetCurrentThreadId();
    uVar5 = 0;
    if (*(DWORD * )(lVar2 + 0x18) == DVar4) {
        *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(lVar2 + 0x20);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
            if (uVar3 == 0) {
                *(DWORD * )(lVar2 + 0x18) = DVar4;
                goto LAB_14028ac5a;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < 0x400);
        FUN_14019fb60(lVar2 + 0x18, DVar4);
    }
    LAB_14028ac5a:
    if (param_1[7] != 0) {
        piVar6 = (int *) (param_1[2] + 0x214 + (longlong) * (int *) (param_1 + 4) * 0x30);
        LOCK();
        *piVar6 = *piVar6 + -1;
        LOCK();
        piVar6[1] = piVar6[1] - *(int *) (param_1 + 3);
        LOCK();
        piVar6[4] = piVar6[4] + 1;
        LOCK();
        piVar6[5] = piVar6[5] + *(int *) (param_1 + 3);
        if ((undefined8 *) param_1[7] != (undefined8 *) 0x0) {
            *(undefined8 *) param_1[7] = param_1[8];
        }
        if (param_1[8] != 0) {
            *(undefined8 * )(param_1[8] + 0x38) = param_1[7];
        }
        param_1[7] = 0;
        param_1[8] = 0;
    }
    if (0 < *(int *) ((longlong) param_1 + 0x24)) {
        if ((longlong *) param_1[5] != (longlong *) 0x0) {
            (**(code * *)(*(longlong *) param_1[5] + 0x10))();
            param_1[5] = 0;
        }
        *(undefined4 * )(param_1 + 6) = 0;
    }
    *(undefined4 * )((longlong) param_1 + 0x24) = 0;
    if (*(ulonglong * )(lVar2 + 0x20) < 2) {
        *(undefined4 * )(lVar2 + 0x18) = 0;
        *(undefined8 * )(lVar2 + 0x20) = 0;
        if (*(longlong * )(lVar2 + 0x28) != 0) {
            if (*(longlong * )(lVar2 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar2 + 0x30);
                uVar5 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar5 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar5 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar2 + 0x30));
        }
    } else {
        *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + -1;
    }
    if ((undefined8 *) param_1[7] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[7] = param_1[8];
    }
    if (param_1[8] != 0) {
        *(undefined8 * )(param_1[8] + 0x38) = param_1[7];
    }
    param_1[8] = 0;
    param_1[7] = 0;
    return;
}


ulonglong FUN_14028ad70(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4) {
    longlong *plVar1;
    longlong lVar2;
    ulonglong uVar3;
    longlong lVar4;
    DWORD DVar5;
    uint uVar6;
    HANDLE hObject;
    ulonglong uVar7;
    longlong *plVar8;
    int *piVar9;
    DWORD *pDVar10;
    ulonglong *puVar11;
    ulonglong uVar12;

    lVar2 = *(longlong * )(param_1 + 0x10);
    *(undefined4 * )(param_1 + 0x18) = param_2;
    pDVar10 = (DWORD * )(lVar2 + 0x18);
    *(undefined4 * )(param_1 + 0x1c) = param_3;
    *(undefined4 * )(param_1 + 0x20) = param_4;
    DVar5 = GetCurrentThreadId();
    uVar12 = 0;
    puVar11 = (ulonglong * )(lVar2 + 0x20);
    uVar7 = uVar12;
    if (*pDVar10 == DVar5) {
        *puVar11 = *puVar11 + 1;
    } else {
        do {
            LOCK();
            uVar3 = *puVar11;
            *puVar11 = *puVar11 ^ (ulonglong)(uVar3 == 0) * (*puVar11 ^ 1);
            if (uVar3 == 0) {
                *pDVar10 = DVar5;
                goto LAB_14028adeb;
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < 0x400);
        FUN_14019fb60(pDVar10);
    }
    LAB_14028adeb:
    if (*(int *) (param_1 + 0x24) < 1) {
        lVar4 = *(longlong * )(param_1 + 0x10);
        uVar6 = (**(code * *)(**(longlong * *)(lVar4 + 0x19d0) + 0xd8))
                (*(longlong * *)(lVar4 + 0x19d0), *(undefined4 * )(param_1 + 0x18),
                 *(undefined4 * )
                         (*(longlong * )(lVar4 + 0x1b88) + (longlong) * (int *) (param_1 + 0x20) * 4),
                 *(undefined4 * )(&DAT_140ae79f8 + (longlong) * (int *) (param_1 + 0x1c) * 4),
                 *(undefined4 * )
                         (*(longlong * )(lVar4 + 0x1b90) + (longlong) * (int *) (param_1 + 0x20) * 4),
                 param_1 + 0x28, 0);
        uVar7 = (ulonglong) uVar6;
        if ((int) uVar6 < 0) goto LAB_14028aebf;
    }
    *(undefined4 * )(param_1 + 0x24) = 2;
    piVar9 = (int *) (*(longlong * )(param_1 + 0x10) + 0x214 + (longlong) * (int *) (param_1 + 0x20) * 0x30
    );
    LOCK();
    *piVar9 = *piVar9 + 1;
    LOCK();
    piVar9[1] = piVar9[1] + *(int *) (param_1 + 0x18);
    LOCK();
    piVar9[2] = piVar9[2] + 1;
    LOCK();
    piVar9[3] = piVar9[3] + *(int *) (param_1 + 0x18);
    plVar8 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x1c20);
    uVar7 = uVar12;
    if (*(longlong * )(param_1 + 0x38) == 0) {
        *(longlong * *)(param_1 + 0x38) = plVar8;
        plVar1 = (longlong * )(param_1 + 0x40);
        *plVar1 = *plVar8;
        *plVar8 = param_1;
        if (*plVar1 != 0) {
            *(longlong * *)(*plVar1 + 0x38) = plVar1;
        }
    }
    LAB_14028aebf:
    if (*puVar11 < 2) {
        *pDVar10 = 0;
        *puVar11 = 0;
        if (*(longlong * )(lVar2 + 0x28) != 0) {
            if (*(longlong * )(lVar2 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar11 = (ulonglong * )(lVar2 + 0x30);
                uVar12 = *puVar11;
                *puVar11 = *puVar11 ^ (ulonglong)(uVar12 == 0) * (*puVar11 ^ (ulonglong) hObject);
                if (uVar12 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar2 + 0x30));
        }
        return uVar7;
    }
    *puVar11 = *puVar11 - 1;
    return uVar7;
}


undefined8 FUN_14028af50(longlong param_1, int param_2) {
    longlong lVar1;
    longlong lVar2;
    undefined8 uVar3;

    if (*(int *) (param_1 + 0x24) < 1) {
        if (0 < param_2) {
            lVar2 = *(longlong * )(param_1 + 0x10);
            lVar1 = (longlong) * (int *) (param_1 + 0x20) * 4;
            uVar3 = (**(code * *)(**(longlong * *)(lVar2 + 0x19d0) + 0xd8))
                    (*(longlong * *)(lVar2 + 0x19d0), *(undefined4 * )(param_1 + 0x18),
                     *(undefined4 * )(*(longlong * )(lVar2 + 0x1b88) + lVar1),
                     *(undefined4 * )(&DAT_140ae79f8 + (longlong) * (int *) (param_1 + 0x1c) * 4),
                     *(undefined4 * )(*(longlong * )(lVar2 + 0x1b90) + lVar1), param_1 + 0x28, 0);
            if ((int) uVar3 < 0) {
                return uVar3;
            }
            goto LAB_14028b010;
        }
        if (*(int *) (param_1 + 0x24) < 1) goto LAB_14028b010;
    }
    if (param_2 < 1) {
        if (*(longlong * *)(param_1 + 0x28) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x28) + 0x10))();
            *(undefined8 * )(param_1 + 0x28) = 0;
        }
        *(undefined4 * )(param_1 + 0x30) = 0;
    }
    LAB_14028b010:
    *(int *) (param_1 + 0x24) = param_2;
    return 0;
}


ulonglong FUN_14028b060(longlong param_1, int param_2) {
    int *piVar1;
    longlong lVar2;
    ulonglong uVar3;
    DWORD DVar4;
    uint uVar5;
    HANDLE hObject;
    ulonglong uVar6;
    DWORD *pDVar7;
    ulonglong *puVar8;
    ulonglong uVar9;

    if (param_2 == *(int *) (param_1 + 0x18)) {
        return 0;
    }
    lVar2 = *(longlong * )(param_1 + 0x10);
    pDVar7 = (DWORD * )(lVar2 + 0x18);
    DVar4 = GetCurrentThreadId();
    uVar9 = 0;
    puVar8 = (ulonglong * )(lVar2 + 0x20);
    uVar6 = uVar9;
    if (*pDVar7 == DVar4) {
        *puVar8 = *puVar8 + 1;
    } else {
        do {
            LOCK();
            uVar3 = *puVar8;
            *puVar8 = *puVar8 ^ (ulonglong)(uVar3 == 0) * (*puVar8 ^ 1);
            if (uVar3 == 0) {
                *pDVar7 = DVar4;
                goto LAB_14028b0ea;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(pDVar7);
    }
    LAB_14028b0ea:
    if (0 < *(int *) (param_1 + 0x24)) {
        if (*(longlong * *)(param_1 + 0x28) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x28) + 0x10))();
            *(undefined8 * )(param_1 + 0x28) = 0;
        }
        *(undefined4 * )(param_1 + 0x30) = 0;
    }
    *(undefined4 * )(param_1 + 0x24) = 0;
    LOCK();
    piVar1 = (int *) (*(longlong * )(param_1 + 0x10) + 0x218 + (longlong) * (int *) (param_1 + 0x20) * 0x30
    );
    *piVar1 = *piVar1 + (param_2 - *(int *) (param_1 + 0x18));
    *(int *) (param_1 + 0x18) = param_2;
    uVar5 = FUN_14028af50(param_1, 2);
    if ((int) uVar5 < 0) {
        uVar9 = (ulonglong) uVar5;
    }
    if (*puVar8 < 2) {
        *pDVar7 = 0;
        *puVar8 = 0;
        if (*(longlong * )(lVar2 + 0x28) != 0) {
            if (*(longlong * )(lVar2 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar8 = (ulonglong * )(lVar2 + 0x30);
                uVar6 = *puVar8;
                *puVar8 = *puVar8 ^ (ulonglong)(uVar6 == 0) * (*puVar8 ^ (ulonglong) hObject);
                if (uVar6 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar2 + 0x30));
        }
    } else {
        *puVar8 = *puVar8 - 1;
    }
    return uVar9;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_14028b1c0(longlong param_1, int param_2, int param_3, ulonglong param_4) {
    int iVar1;
    undefined4 uVar2;
    longlong lVar3;
    undefined **local_e8;
    undefined8 local_e0;
    LPVOID local_d8;
    undefined **local_d0;
    undefined8 local_c8;
    LPVOID local_c0;
    undefined **local_b8;
    undefined8 uStack176;
    undefined8 local_a8;
    int iStack160;
    undefined4 uStack156;
    undefined8 local_98;
    undefined8 local_90;
    undefined8 local_88[2];
    undefined **local_78;
    undefined8 local_70;
    LPVOID local_68;
    undefined **local_58;
    undefined8 local_50;
    LPVOID local_48;
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 uStack44;
    undefined4 local_28;
    undefined4 uStack36;
    int iStack32;
    undefined4 uStack28;

    uVar2 = 0;
    if ((param_4 & 3) != 0) {
        if (((param_4 & 1) == 0) || (*(int *) (param_1 + 0x20) != 1)) {
            if ((param_4 & 2) == 0) {
                uVar2 = 0x10;
            }
            if (param_3 == 0) {
                param_3 = *(int *) (param_1 + 0x18);
            }
            if ((uint)(param_2 + param_3) < *(uint * )(param_1 + 0x18) ||
                param_2 + param_3 == *(uint * )(param_1 + 0x18)) {
                *(undefined4 * )(param_1 + 0x30) = 1;
                iStack160 = (**(code * *)(**(longlong * *)(param_1 + 0x28) + 0x58))
                        (*(longlong * *)(param_1 + 0x28), param_2, param_3, &local_90, uVar2);
                if (iStack160 < 0) {
                    local_b8 = &PTR_LAB_140b5e648;
                    uStack176 = L"Result";
                    local_a8 = TlsGetValue(DAT_140c63720);
                    TlsSetValue(DAT_140c63720, &local_b8);
                    local_b8 = &PTR_LAB_140b5e640;
                    local_38 = 0x40b5e640;
                    uStack52 = 1;
                    uStack48 = (undefined4) uStack176;
                    uStack44 = uStack176._4_4_;
                    local_28 = (undefined4) local_a8;
                    uStack36 = local_a8._4_4_;
                    uStack28 = uStack156;
                    iStack32 = iStack160;
                    FUN_1400035b0(0xe, 0, 0, &local_38);
                    local_b8 = &PTR_LAB_140b5e648;
                    TlsSetValue(DAT_140c63720, (LPVOID) CONCAT44(local_a8._4_4_, (undefined4) local_a8));
                    return 0;
                }
                lVar3 = *(longlong * )(param_1 + 0x10) + 0x214 + (longlong) * (int *) (param_1 + 0x20) * 0x30;
                if ((param_4 & 1) != 0) {
                    LOCK();
                    *(int *) (lVar3 + 0x18) = *(int *) (lVar3 + 0x18) + 1;
                    LOCK();
                    *(int *) (lVar3 + 0x1c) = *(int *) (lVar3 + 0x1c) + param_3;
                }
                if ((param_4 & 2) != 0) {
                    LOCK();
                    *(int *) (lVar3 + 0x20) = *(int *) (lVar3 + 0x20) + 1;
                    LOCK();
                    *(int *) (lVar3 + 0x24) = *(int *) (lVar3 + 0x24) + param_3;
                    return local_90;
                }
                return local_90;
            }
            local_e0 = 0;
            local_e8 = &PTR_LAB_140b5e648;
            local_d8 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_e8);
            local_78 = local_e8;
            local_88[0] = 0x141de3e30;
            local_68 = local_d8;
            local_70 = local_e0;
            iVar1 = FUN_1401971e0(&DAT_140c8a3c4, 0xe, local_88, &local_78);
            local_e8 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720, local_d8);
            if (iVar1 != 0) {
                DebugBreak();
            }
        } else {
            local_c8 = 0;
            local_d0 = &PTR_LAB_140b5e648;
            local_c0 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_d0);
            local_58 = local_d0;
            local_98 = 0x141de3ea0;
            local_48 = local_c0;
            local_50 = local_c8;
            iVar1 = FUN_1401971e0(&DAT_140c8a3c0, 0xe, &local_98, &local_58);
            local_d0 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720, local_c0);
            if (iVar1 != 0) {
                DebugBreak();
                return 0;
            }
        }
    }
    return 0;
}


void FUN_14028b480(undefined8 *param_1) {
    ulonglong *puVar1;
    longlong lVar2;
    ulonglong uVar3;
    longlong lVar4;
    DWORD DVar5;
    HANDLE hObject;
    ulonglong uVar6;

    lVar2 = param_1[2];
    *param_1 = &PTR_LAB_140b61830;
    DVar5 = GetCurrentThreadId();
    uVar6 = 0;
    if (*(DWORD * )(lVar2 + 0x18) == DVar5) {
        *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(lVar2 + 0x20);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
            if (uVar3 == 0) {
                *(DWORD * )(lVar2 + 0x18) = DVar5;
                goto LAB_14028b4ea;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(lVar2 + 0x18, DVar5);
    }
    LAB_14028b4ea:
    if (param_1[7] != 0) {
        lVar4 = param_1[2];
        LOCK();
        *(int *) (lVar4 + 0x2a4) = *(int *) (lVar4 + 0x2a4) + -1;
        LOCK();
        *(int *) (lVar4 + 0x2a8) = *(int *) (lVar4 + 0x2a8) - *(int *) (param_1 + 3);
        LOCK();
        *(int *) (lVar4 + 0x2b4) = *(int *) (lVar4 + 0x2b4) + 1;
        LOCK();
        *(int *) (lVar4 + 0x2b8) = *(int *) (lVar4 + 0x2b8) + *(int *) (param_1 + 3);
        if ((undefined8 *) param_1[7] != (undefined8 *) 0x0) {
            *(undefined8 *) param_1[7] = param_1[8];
        }
        if (param_1[8] != 0) {
            *(undefined8 * )(param_1[8] + 0x38) = param_1[7];
        }
        param_1[7] = 0;
        param_1[8] = 0;
    }
    *(undefined4 * )((longlong) param_1 + 0x24) = 0;
    if (*(ulonglong * )(lVar2 + 0x20) < 2) {
        *(undefined4 * )(lVar2 + 0x18) = 0;
        *(undefined8 * )(lVar2 + 0x20) = 0;
        if (*(longlong * )(lVar2 + 0x28) != 0) {
            if (*(longlong * )(lVar2 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar2 + 0x30);
                uVar6 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar6 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar2 + 0x30));
        }
    } else {
        *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + -1;
    }
    if ((undefined8 *) param_1[7] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[7] = param_1[8];
    }
    if (param_1[8] != 0) {
        *(undefined8 * )(param_1[8] + 0x38) = param_1[7];
    }
    param_1[8] = 0;
    param_1[7] = 0;
    return;
}


undefined8 FUN_14028b5e0(longlong param_1, undefined4 param_2, undefined4 param_3) {
    longlong *plVar1;
    longlong lVar2;
    ulonglong uVar3;
    longlong lVar4;
    DWORD DVar5;
    HANDLE hObject;
    ulonglong uVar6;
    longlong *plVar7;
    DWORD *pDVar8;
    ulonglong *puVar9;

    lVar2 = *(longlong * )(param_1 + 0x10);
    *(undefined4 * )(param_1 + 0x18) = param_2;
    pDVar8 = (DWORD * )(lVar2 + 0x18);
    *(undefined4 * )(param_1 + 0x1c) = param_3;
    *(undefined4 * )(param_1 + 0x20) = 3;
    DVar5 = GetCurrentThreadId();
    uVar6 = 0;
    puVar9 = (ulonglong * )(lVar2 + 0x20);
    if (*pDVar8 == DVar5) {
        *puVar9 = *puVar9 + 1;
    } else {
        do {
            LOCK();
            uVar3 = *puVar9;
            *puVar9 = *puVar9 ^ (ulonglong)(uVar3 == 0) * (*puVar9 ^ 1);
            if (uVar3 == 0) {
                *pDVar8 = DVar5;
                goto LAB_14028b662;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(pDVar8);
    }
    LAB_14028b662:
    if (*(int *) (param_1 + 0x24) < 2) {
        *(int *) (param_1 + 0x2c) =
                *(int *) (*(longlong * )(param_1 + 0x10) + 0x1bd8 + (longlong) * (int *) (param_1 + 0x1c) * 4) +
                -1;
    }
    lVar4 = *(longlong * )(param_1 + 0x10);
    *(undefined4 * )(param_1 + 0x24) = 2;
    LOCK();
    *(int *) (lVar4 + 0x2a4) = *(int *) (lVar4 + 0x2a4) + 1;
    LOCK();
    *(int *) (lVar4 + 0x2a8) = *(int *) (lVar4 + 0x2a8) + *(int *) (param_1 + 0x18);
    LOCK();
    *(int *) (lVar4 + 0x2ac) = *(int *) (lVar4 + 0x2ac) + 1;
    LOCK();
    *(int *) (lVar4 + 0x2b0) = *(int *) (lVar4 + 0x2b0) + *(int *) (param_1 + 0x18);
    plVar7 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x1c28);
    if (*(longlong * )(param_1 + 0x38) == 0) {
        *(longlong * *)(param_1 + 0x38) = plVar7;
        plVar1 = (longlong * )(param_1 + 0x40);
        *plVar1 = *plVar7;
        *plVar7 = param_1;
        if (*plVar1 != 0) {
            *(longlong * *)(*plVar1 + 0x38) = plVar1;
        }
    }
    if (*puVar9 < 2) {
        *pDVar8 = 0;
        *puVar9 = 0;
        if (*(longlong * )(lVar2 + 0x28) != 0) {
            if (*(longlong * )(lVar2 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar9 = (ulonglong * )(lVar2 + 0x30);
                uVar6 = *puVar9;
                *puVar9 = *puVar9 ^ (ulonglong)(uVar6 == 0) * (*puVar9 ^ (ulonglong) hObject);
                if (uVar6 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar2 + 0x30));
        }
        return 0;
    }
    *puVar9 = *puVar9 - 1;
    return 0;
}


int FUN_14028b760(longlong param_1) {
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *) (param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_14028b480();
            FUN_14018b900(param_1, 0);
        }
        iVar2 = 0;
    }
    return iVar2;
}


undefined8 FUN_14028b7a0(longlong param_1, int param_2) {
    int *piVar1;
    longlong lVar2;
    ulonglong uVar3;
    DWORD DVar4;
    HANDLE hObject;
    ulonglong uVar5;
    DWORD *pDVar6;
    ulonglong *puVar7;

    if (param_2 != *(int *) (param_1 + 0x18)) {
        lVar2 = *(longlong * )(param_1 + 0x10);
        pDVar6 = (DWORD * )(lVar2 + 0x18);
        DVar4 = GetCurrentThreadId();
        uVar5 = 0;
        puVar7 = (ulonglong * )(lVar2 + 0x20);
        if (*pDVar6 == DVar4) {
            *puVar7 = *puVar7 + 1;
        } else {
            do {
                LOCK();
                uVar3 = *puVar7;
                *puVar7 = *puVar7 ^ (ulonglong)(uVar3 == 0) * (*puVar7 ^ 1);
                if (uVar3 == 0) {
                    *pDVar6 = DVar4;
                    goto LAB_14028b820;
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 < 0x400);
            FUN_14019fb60();
        }
        LAB_14028b820:
        *(undefined4 * )(param_1 + 0x24) = 0;
        LOCK();
        piVar1 = (int *) (*(longlong * )(param_1 + 0x10) + 0x2a8);
        *piVar1 = *piVar1 + (param_2 - *(int *) (param_1 + 0x18));
        *(int *) (param_1 + 0x18) = param_2;
        if (*(int *) (param_1 + 0x24) < 2) {
            *(int *) (param_1 + 0x2c) =
                    *(int *) (*(longlong * )(param_1 + 0x10) + 0x1bd8 + (longlong) * (int *) (param_1 + 0x1c) * 4)
                    + -1;
        }
        *(undefined4 * )(param_1 + 0x24) = 2;
        if (*puVar7 < 2) {
            *pDVar6 = 0;
            *puVar7 = 0;
            if (*(longlong * )(lVar2 + 0x28) != 0) {
                if (*(longlong * )(lVar2 + 0x30) == 0) {
                    hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                    LOCK();
                    puVar7 = (ulonglong * )(lVar2 + 0x30);
                    uVar5 = *puVar7;
                    *puVar7 = *puVar7 ^ (ulonglong)(uVar5 == 0) * (*puVar7 ^ (ulonglong) hObject);
                    if (uVar5 != 0) {
                        CloseHandle(hObject);
                    }
                }
                SetEvent(*(HANDLE * )(lVar2 + 0x30));
            }
        } else {
            *puVar7 = *puVar7 - 1;
        }
    }
    return 0;
}


void FUN_14028b8f0(longlong param_1) {
    ulonglong *puVar1;
    longlong lVar2;
    ulonglong uVar3;
    DWORD DVar4;
    HANDLE hObject;
    ulonglong uVar5;

    lVar2 = *(longlong * )(param_1 + 0x10);
    DVar4 = GetCurrentThreadId();
    uVar5 = 0;
    if (*(DWORD * )(lVar2 + 0x18) == DVar4) {
        *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(lVar2 + 0x20);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
            if (uVar3 == 0) {
                *(DWORD * )(lVar2 + 0x18) = DVar4;
                goto LAB_14028b950;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < 0x400);
        FUN_14019fb60(lVar2 + 0x18);
    }
    LAB_14028b950:
    *(int *) (param_1 + 0x2c) =
            *(int *) (*(longlong * )(param_1 + 0x10) + 0x1bd8 + (longlong) * (int *) (param_1 + 0x1c) * 4) +
            -1;
    if (*(ulonglong * )(lVar2 + 0x20) < 2) {
        *(undefined4 * )(lVar2 + 0x18) = 0;
        *(undefined8 * )(lVar2 + 0x20) = 0;
        if (*(longlong * )(lVar2 + 0x28) != 0) {
            if (*(longlong * )(lVar2 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar2 + 0x30);
                uVar5 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar5 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar5 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar2 + 0x30));
        }
        return;
    }
    *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + -1;
    return;
}



// WARNING: Could not reconcile some variable overlaps

ulonglong FUN_14028b9e0(longlong param_1, int param_2, int param_3, ulonglong param_4) {
    int *piVar1;
    longlong lVar2;
    uint *puVar3;
    int iVar4;
    longlong lVar5;
    ulonglong uVar6;
    longlong *plVar7;
    int iVar8;
    DWORD DVar9;
    HANDLE hObject;
    uint uVar10;
    ulonglong uVar11;
    longlong lVar12;
    longlong lVar13;
    DWORD *pDVar14;
    ulonglong *puVar15;
    ulonglong local_160;
    undefined **local_158;
    undefined8 local_150;
    LPVOID local_148;
    undefined **local_140;
    undefined8 local_138;
    LPVOID local_130;
    undefined **local_128;
    undefined8 uStack288;
    undefined8 local_118;
    int iStack272;
    undefined4 uStack268;
    undefined **local_108;
    undefined8 uStack256;
    undefined8 local_f8;
    int iStack240;
    undefined4 uStack236;
    undefined **local_e8;
    undefined8 uStack224;
    undefined8 local_d8;
    int iStack208;
    undefined4 uStack204;
    undefined8 local_c8;
    undefined8 local_c0;
    undefined **local_b8;
    undefined8 local_b0;
    LPVOID local_a8;
    undefined **local_98;
    undefined8 local_90;
    LPVOID local_88;
    undefined4 local_78;
    undefined4 uStack116;
    undefined4 uStack112;
    undefined4 uStack108;
    undefined4 local_68;
    undefined4 uStack100;
    int iStack96;
    undefined4 uStack92;
    undefined4 local_58;
    undefined4 uStack84;
    undefined4 uStack80;
    undefined4 uStack76;
    undefined4 local_48;
    undefined4 uStack68;
    int iStack64;
    undefined4 uStack60;
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 uStack44;
    undefined4 local_28;
    undefined4 uStack36;
    int iStack32;
    undefined4 uStack28;

    if ((param_4 & 1) != 0) {
        local_158 = &PTR_LAB_140b5e648;
        local_150 = 0;
        local_148 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_158);
        local_b8 = local_158;
        local_c8 = 0x141de3dc0;
        local_a8 = local_148;
        local_b0 = local_150;
        iVar8 = FUN_1401971e0(&DAT_140c8a3b8, 0xe, &local_c8, &local_b8);
        local_158 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_148);
        if (iVar8 != 0) {
            DebugBreak();
        }
        return 0;
    }
    if (param_3 == 0) {
        param_3 = *(int *) (param_1 + 0x18);
    }
    if (*(uint * )(param_1 + 0x18) <= (uint)(param_2 + param_3) &&
        param_2 + param_3 != *(uint * )(param_1 + 0x18)) {
        local_140 = &PTR_LAB_140b5e648;
        local_138 = 0;
        local_130 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_140);
        local_98 = local_140;
        local_c0 = 0x141de3d50;
        local_88 = local_130;
        local_90 = local_138;
        iVar8 = FUN_1401971e0(&DAT_140c8a3bc, 0xe, &local_c0, &local_98);
        local_140 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_130);
        if (iVar8 == 0) {
            return 0;
        }
        DebugBreak();
        return 0;
    }
    lVar5 = *(longlong * )(param_1 + 0x10);
    pDVar14 = (DWORD * )(lVar5 + 0x18);
    DVar9 = GetCurrentThreadId();
    puVar15 = (ulonglong * )(lVar5 + 0x20);
    uVar11 = 0;
    if (*pDVar14 == DVar9) {
        *puVar15 = *puVar15 + 1;
    } else {
        do {
            LOCK();
            uVar6 = *puVar15;
            *puVar15 = *puVar15 ^ (ulonglong)(uVar6 == 0) * (*puVar15 ^ 1);
            if (uVar6 == 0) {
                *pDVar14 = DVar9;
                goto LAB_14028bbda;
            }
            uVar11 = uVar11 + 1;
        } while (uVar11 < 0x400);
        FUN_14019fb60();
    }
    LAB_14028bbda:
    lVar12 = (longlong) * (int *) (param_1 + 0x1c);
    lVar13 = *(longlong * )(param_1 + 0x10);
    lVar2 = lVar13 + lVar12 * 4;
    iVar8 = *(int *) (lVar2 + 0x1bd8);
    if ((*(int *) (param_1 + 0x2c) == iVar8) && ((param_4 & 4) == 0)) {
        plVar7 = *(longlong * *)(lVar13 + 0x1bb8 + lVar12 * 8);
        iVar8 = (**(code * *)(*plVar7 + 0x58))
                (plVar7, *(int *) (param_1 + 0x28) + param_2, param_3, &local_160, 0);
        if (iVar8 < 0) {
            uStack224 = L"Result";
            local_e8 = &PTR_LAB_140b5e648;
            local_d8 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_e8);
            local_e8 = &PTR_LAB_140b5e640;
            local_78 = 0x40b5e640;
            uStack116 = 1;
            uStack112 = (undefined4) uStack224;
            uStack108 = uStack224._4_4_;
            local_68 = (undefined4) local_d8;
            uStack100 = local_d8._4_4_;
            uStack92 = uStack204;
            iStack208 = iVar8;
            iStack96 = iVar8;
            FUN_1400035b0(0xe, 0, 0, &local_78);
            local_e8 = &PTR_LAB_140b5e648;
            goto LAB_14028be1a;
        }
        LAB_14028be65:
        lVar2 = *(longlong * )(param_1 + 0x10);
        if ((param_4 & 2) != 0) {
            LOCK();
            piVar1 = (int *) (lVar2 + 0x2c4);
            *piVar1 = *piVar1 + 1;
            LOCK();
            piVar1 = (int *) (lVar2 + 0x2c8);
            *piVar1 = *piVar1 + param_3;
        }
    } else {
        iVar4 = *(int *) (lVar13 + 0x1bd0 + lVar12 * 4);
        uVar10 = *(int *) (param_1 + 0x18) + iVar4;
        puVar3 = (uint * )(lVar13 + 0x1bc8 + lVar12 * 4);
        if (uVar10 < *puVar3 || uVar10 == *puVar3) {
            plVar7 = *(longlong * *)(lVar13 + 0x1bb8 + lVar12 * 8);
            iVar8 = (**(code * *)(*plVar7 + 0x58))(plVar7, iVar4 + param_2, param_3, &local_160, 0x1000);
            if (-1 < iVar8) goto LAB_14028be30;
            uStack288 = L"Result";
            local_128 = &PTR_LAB_140b5e648;
            local_118 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_128);
            local_128 = &PTR_LAB_140b5e640;
            local_38 = 0x40b5e640;
            uStack52 = 1;
            uStack48 = (undefined4) uStack288;
            uStack44 = uStack288._4_4_;
            local_28 = (undefined4) local_118;
            uStack36 = local_118._4_4_;
            uStack28 = uStack268;
            iStack272 = iVar8;
            iStack32 = iVar8;
            FUN_1400035b0(0xe, 0, 0, &local_38);
            local_128 = &PTR_LAB_140b5e648;
            local_d8._0_4_ = (undefined4) local_118;
            local_d8._4_4_ = local_118._4_4_;
        } else {
            *(int *) (lVar2 + 0x1bd8) = iVar8 + 1;
            *(undefined4 * )
                    (*(longlong * )(param_1 + 0x10) + 0x1bd0 + (longlong) * (int *) (param_1 + 0x1c) * 4) = 0;
            plVar7 = *(longlong * *)
                    (*(longlong * )(param_1 + 0x10) + 0x1bb8 + (longlong) * (int *) (param_1 + 0x1c) * 8);
            iVar8 = (**(code * *)(*plVar7 + 0x58))
                    (plVar7, *(int *) (*(longlong * )(param_1 + 0x10) + 0x1bd0 +
                                       (longlong) * (int *) (param_1 + 0x1c) * 4) + param_2, param_3,
                     &local_160, 0x2000);
            if (-1 < iVar8) {
                LAB_14028be30:
                lVar2 = *(longlong * )(param_1 + 0x10);
                lVar13 = (longlong) * (int *) (param_1 + 0x1c);
                *(undefined4 * )(param_1 + 0x2c) = *(undefined4 * )(lVar2 + 0x1bd8 + lVar13 * 4);
                *(undefined4 * )(param_1 + 0x28) = *(undefined4 * )(lVar2 + 0x1bd0 + lVar13 * 4);
                piVar1 = (int *) (lVar2 + 0x1bd0 + lVar13 * 4);
                *piVar1 = *piVar1 + *(int *) (param_1 + 0x18);
                *(int *) (param_1 + 0x30) = *(int *) (*(longlong * )(param_1 + 0x10) + 0xf0) + -1;
                goto LAB_14028be65;
            }
            uStack256 = L"Result";
            local_108 = &PTR_LAB_140b5e648;
            local_f8 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_108);
            local_108 = &PTR_LAB_140b5e640;
            local_58 = 0x40b5e640;
            uStack84 = 1;
            uStack80 = (undefined4) uStack256;
            uStack76 = uStack256._4_4_;
            local_48 = (undefined4) local_f8;
            uStack68 = local_f8._4_4_;
            uStack60 = uStack236;
            iStack240 = iVar8;
            iStack64 = iVar8;
            FUN_1400035b0(0xe, 0, 0, &local_58);
            local_108 = &PTR_LAB_140b5e648;
            local_d8._0_4_ = (undefined4) local_f8;
            local_d8._4_4_ = local_f8._4_4_;
        }
        LAB_14028be1a:
        TlsSetValue(DAT_140c63720, (LPVOID) CONCAT44(local_d8._4_4_, (undefined4) local_d8));
        local_160 = 0;
    }
    if (1 < *puVar15) {
        *puVar15 = *puVar15 - 1;
        return local_160;
    }
    *pDVar14 = 0;
    *puVar15 = 0;
    if (*(longlong * )(lVar5 + 0x28) != 0) {
        if (*(longlong * )(lVar5 + 0x30) == 0) {
            hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
            LOCK();
            puVar15 = (ulonglong * )(lVar5 + 0x30);
            uVar11 = *puVar15;
            *puVar15 = *puVar15 ^ (ulonglong)(uVar11 == 0) * (*puVar15 ^ (ulonglong) hObject);
            if (uVar11 != 0) {
                CloseHandle(hObject);
            }
        }
        SetEvent(*(HANDLE * )(lVar5 + 0x30));
        return local_160;
    }
    return local_160;
}


undefined8 *FUN_14028bf30(undefined8 *param_1, longlong param_2) {
    int iVar1;

    *param_1 = &PTR_LAB_140b618d0;
    param_1[0x15] = 0;
    param_1[0x14] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x18] = 0;
    *(undefined4 * )(param_1 + 0x19) = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    *(undefined4 * )(param_1 + 1) = 1;
    param_1[2] = param_2;
    param_1[9] = 0;
    *(undefined4 * )(param_1 + 10) = 0;
    *(undefined4 * )(param_1 + 0xb) = 0;
    *(undefined4 * )((longlong) param_1 + 0x5c) = 0x8000000a;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    *(undefined4 * )(param_1 + 0xc) = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x16] = 0;
    *(undefined4 * )(param_1 + 0x11) = 0;
    iVar1 = *(int *) (param_2 + 0xf0);
    param_1[0x17] = 0;
    *(int *) ((longlong) param_1 + 0x8c) = iVar1 + -1;
    return param_1;
}


void FUN_14028c000(undefined8 *param_1) {
    longlong **pplVar1;
    longlong lVar2;
    ulonglong *puVar3;
    int iVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    ulonglong **ppuVar7;
    undefined8 *puVar8;
    undefined8 local_res8;
    undefined **local_58;
    undefined8 local_50;
    LPVOID local_48;
    undefined **local_38;
    undefined8 local_30;
    LPVOID local_28;
    undefined8 local_20;

    *param_1 = &PTR_LAB_140b618d0;
    if ((longlong *) param_1[0x17] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x17] + 8))();
        param_1[0x17] = 0;
    }
    if (param_1[0x1e] != 0) {
        if (param_1[9] != 0) {
            lVar2 = param_1[2];
            local_38 = (undefined **)
                    CONCAT44(*(undefined4 * )((longlong) param_1 + 0x34), *(undefined4 * )(param_1 + 5));
            local_30 = param_1[7];
            local_20 = param_1[9];
            local_28 = (LPVOID) CONCAT44(*(undefined4 * )(param_1 + 10), *(undefined4 * )(param_1 + 8));
            uVar5 = (**(code * *)(lVar2 + 0x1c90))(&local_38);
            uVar6 = uVar5 % *(ulonglong * )(lVar2 + 0x1c80);
            ppuVar7 = (ulonglong * *)(*(longlong * )(lVar2 + 0x1c88) + uVar6 * 8);
            puVar3 = *(ulonglong * *)(*(longlong * )(lVar2 + 0x1c88) + uVar6 * 8);
            while (puVar3 != (ulonglong *) 0x0) {
                if ((uVar5 == **ppuVar7) &&
                    (iVar4 = (**(code * *)(lVar2 + 0x1c98))(&local_38, *ppuVar7 + 2), iVar4 != 0)) {
                    puVar3 = *ppuVar7;
                    *ppuVar7 = (ulonglong *) puVar3[1];
                    FUN_14018b900(puVar3, 0);
                    *(longlong * )(lVar2 + 0x1c78) = *(longlong * )(lVar2 + 0x1c78) + -1;
                    goto LAB_14028c184;
                }
                ppuVar7 = (ulonglong * *)(*ppuVar7 + 1);
                puVar3 = *ppuVar7;
            }
            local_50 = 0;
            local_58 = &PTR_LAB_140b5e648;
            local_48 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_58);
            local_38 = local_58;
            local_30 = local_50;
            local_res8 = 0x141de3f40;
            local_28 = local_48;
            iVar4 = FUN_1401971e0(&DAT_140c8a3f0, 0xe, &local_res8, param_1[9], &local_38);
            local_58 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720, local_48);
            if (iVar4 != 0) {
                DebugBreak();
            }
        }
        LAB_14028c184:
        if ((undefined8 *) param_1[0x1e] != (undefined8 *) 0x0) {
            *(undefined8 *) param_1[0x1e] = param_1[0x1f];
        }
        if (param_1[0x1f] != 0) {
            *(undefined8 * )(param_1[0x1f] + 0xf0) = param_1[0x1e];
        }
        param_1[0x1e] = 0;
        param_1[0x1f] = 0;
    }
    FUN_14028c810(param_1, 0);
    lVar2 = param_1[0x12];
    if (lVar2 != 0) {
        iVar4 = *(int *) (lVar2 + -8);
        puVar8 = (undefined8 * )((longlong) iVar4 * 0x10 + lVar2);
        while (iVar4 = iVar4 + -1, -1 < iVar4) {
            pplVar1 = (longlong * *)(puVar8 + -2);
            puVar8 = puVar8 + -2;
            if (*pplVar1 != (longlong *) 0x0) {
                (**(code * *)(**pplVar1 + 0x10))();
                *puVar8 = 0;
            }
        }
        FUN_14018b900(lVar2 + -8, 0);
    }
    FUN_14018b900(param_1[0x13], 0);
    FUN_14018b900(param_1[9], 0);
    if ((undefined8 *) param_1[0x20] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x20] = param_1[0x21];
    }
    if (param_1[0x21] != 0) {
        *(undefined8 * )(param_1[0x21] + 0x100) = param_1[0x20];
    }
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    if ((undefined8 *) param_1[0x1e] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x1e] = param_1[0x1f];
    }
    if (param_1[0x1f] != 0) {
        *(undefined8 * )(param_1[0x1f] + 0xf0) = param_1[0x1e];
    }
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    if ((undefined8 *) param_1[0x1c] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x1c] = param_1[0x1d];
    }
    if (param_1[0x1d] != 0) {
        *(undefined8 * )(param_1[0x1d] + 0x20) = param_1[0x1c];
    }
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    if ((undefined8 *) param_1[0x1a] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x1a] = param_1[0x1b];
    }
    if (param_1[0x1b] != 0) {
        *(undefined8 * )(param_1[0x1b] + 0x10) = param_1[0x1a];
    }
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    lVar2 = param_1[0x14];
    if (lVar2 != 0) {
        (**(code * *)(*(longlong * )(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    return;
}


undefined8
FUN_14028c380(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4,
              undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
              undefined4 param_9) {
    undefined8 *puVar1;
    longlong *plVar2;
    uint uVar3;
    uint uVar4;
    undefined auVar5[16];
    undefined4 uVar6;
    undefined8 uVar7;
    ulonglong uVar8;
    longlong lVar9;
    uint *puVar10;
    longlong *plVar11;
    undefined8 *puVar12;

    *(undefined4 * )(param_1 + 0x1c) = param_2;
    *(undefined4 * )(param_1 + 0x30) = param_5;
    *(undefined4 * )(param_1 + 0x34) = param_6;
    *(undefined4 * )(param_1 + 0x38) = param_7;
    *(undefined4 * )(param_1 + 0x18) = 0;
    *(undefined4 * )(param_1 + 0x3c) = param_8;
    *(undefined4 * )(param_1 + 0x20) = param_3;
    *(undefined8 * )(param_1 + 0x24) = 1;
    *(undefined4 * )(param_1 + 0x2c) = param_4;
    *(undefined8 * )(param_1 + 0x48) = 0;
    *(undefined4 * )(param_1 + 0x40) = param_9;
    uVar7 = FUN_140263970(param_1 + 0x18, *(longlong * )(param_1 + 0x10) + 0x88);
    if (-1 < (int) uVar7) {
        uVar6 = FUN_140263e70(param_1 + 0x18);
        *(undefined4 * )(param_1 + 0x88) = uVar6;
        lVar9 = (longlong) * (int *) (param_1 + 0x34) * 4;
        uVar3 = *(uint * )(lVar9 + *(longlong * )(*(longlong * )(param_1 + 0x10) + 0x1b78));
        if ((*(int *) (lVar9 + *(longlong * )(*(longlong * )(param_1 + 0x10) + 0x1b80)) == 0) &&
            ((uVar3 >> 9 & 1) == 0)) {
            uVar4 = *(uint * )(param_1 + 0x2c);
            uVar8 = SUB168(ZEXT816(0x10) * ZEXT416(uVar4), 0);
            if (SUB168(ZEXT816(0x10) * ZEXT416(uVar4) >> 0x40, 0) != 0) {
                uVar8 = 0xffffffffffffffff;
            }
            lVar9 = uVar8 + 8;
            if (0xfffffffffffffff7 < uVar8) {
                lVar9 = -1;
            }
            puVar10 = (uint *) FUN_14018b280(lVar9, 0);
            if (puVar10 == (uint *) 0x0) {
                puVar12 = (undefined8 *) 0x0;
            } else {
                puVar12 = (undefined8 * )(puVar10 + 2);
                *puVar10 = uVar4;
                puVar1 = puVar12;
                while (uVar4 = uVar4 - 1, -1 < (int) uVar4) {
                    *puVar1 = 0;
                    puVar1 = puVar1 + 2;
                }
            }
            *(undefined8 * *)(param_1 + 0x90) = puVar12;
        }
        if ((uVar3 & 1) != 0) {
            auVar5 = ZEXT816(4) * ZEXT416(*(uint * )(param_1 + 0x2c));
            uVar7 = SUB168(auVar5, 0);
            if (SUB168(auVar5 >> 0x40, 0) != 0) {
                uVar7 = 0xffffffffffffffff;
            }
            uVar7 = FUN_14018b280(uVar7, 0);
            *(undefined8 * )(param_1 + 0x98) = uVar7;
        }
        uVar7 = FUN_14028c810(param_1, 2);
        if (-1 < (int) uVar7) {
            plVar11 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x1c30);
            if (*(longlong * )(param_1 + 0xf0) == 0) {
                *(longlong * *)(param_1 + 0xf0) = plVar11;
                plVar2 = (longlong * )(param_1 + 0xf8);
                *plVar2 = *plVar11;
                *plVar11 = param_1;
                if (*plVar2 != 0) {
                    *(longlong * *)(*plVar2 + 0xf0) = plVar2;
                }
            }
            uVar7 = 0;
        }
    }
    return uVar7;
}



// WARNING: Could not reconcile some variable overlaps

undefined8
FUN_14028c520(ulonglong param_1, undefined8 param_2, undefined4 param_3, uint param_4,
              undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8) {
    ulonglong **ppuVar1;
    longlong lVar2;
    int iVar3;
    undefined8 uVar4;
    ulonglong uVar5;
    ulonglong *puVar6;
    ulonglong *puVar7;
    longlong *plVar8;
    undefined **local_a8;
    wchar_t *local_a0;
    LPVOID local_98;
    ulonglong local_90;
    undefined **local_88;
    undefined8 local_80;
    LPVOID local_78;
    undefined8 local_70;
    undefined **local_68;
    undefined8 local_60;
    LPVOID local_58;
    code *local_50;
    undefined8 local_48;
    undefined8 local_40;
    undefined **local_38;
    undefined8 local_30;
    LPVOID local_28;

    puVar7 = (ulonglong *) 0x0;
    if (param_4 < 3) {
        *(undefined8 * )(param_1 + 0x18) = 0;
        *(undefined8 * )(param_1 + 0x20) = 0;
        *(undefined8 * )(param_1 + 0x28) = 0;
        *(undefined8 * )(param_1 + 0x30) = 0;
        *(undefined8 * )(param_1 + 0x38) = 0;
        *(undefined8 * )(param_1 + 0x40) = 0;
        *(undefined8 * )(param_1 + 0x48) = 0;
        *(undefined8 * )(param_1 + 0x50) = 0;
        *(undefined4 * )(param_1 + 0x38) = param_5;
        *(undefined4 * )(param_1 + 0x18) = 0;
        *(undefined4 * )(param_1 + 0x3c) = param_6;
        *(undefined4 * )(param_1 + 0x28) = param_3;
        *(undefined4 * )(param_1 + 0x40) = param_7;
        *(uint * )(param_1 + 0x34) = param_4;
        uVar4 = FUN_14018e9c0(param_2);
        *(undefined8 * )(param_1 + 0x48) = uVar4;
        *(undefined4 * )(param_1 + 0x50) = param_8;
        uVar4 = FUN_14028c810(param_1);
        if (-1 < (int) uVar4) {
            lVar2 = *(longlong * )(param_1 + 0x10);
            plVar8 = (longlong * )(lVar2 + 0x1c78);
            local_a8 = (undefined **)
                    CONCAT44(*(undefined4 * )(param_1 + 0x34), *(undefined4 * )(param_1 + 0x28));
            local_a0 = *(wchar_t **) (param_1 + 0x38);
            local_90 = *(ulonglong * )(param_1 + 0x48);
            local_98 = (LPVOID) CONCAT44(*(undefined4 * )(param_1 + 0x50), *(undefined4 * )(param_1 + 0x40));
            if (*plVar8 == *(longlong * )(lVar2 + 0x1c80)) {
                FUN_1400290d0(plVar8);
            }
            uVar5 = (**(code * *)(lVar2 + 0x1c90))(&local_a8);
            ppuVar1 = (ulonglong * *)
                    (*(longlong * )(lVar2 + 0x1c88) + (uVar5 % *(ulonglong * )(lVar2 + 0x1c80)) * 8);
            puVar6 = (ulonglong *) FUN_14018b280(0x38);
            if (puVar6 != (ulonglong *) 0x0) {
                puVar7 = *ppuVar1;
                *puVar6 = uVar5;
                puVar6[1] = (ulonglong) puVar7;
                puVar6[2] = (ulonglong) local_a8;
                puVar6[3] = (ulonglong) local_a0;
                puVar6[4] = (ulonglong) local_98;
                puVar6[6] = param_1;
                puVar6[5] = local_90;
                puVar7 = puVar6;
            }
            *ppuVar1 = puVar7;
            *plVar8 = *plVar8 + 1;
            puVar7 = (ulonglong * )(*(longlong * )(param_1 + 0x10) + 0x1c30);
            if (*(longlong * )(param_1 + 0xf0) == 0) {
                *(ulonglong * *)(param_1 + 0xf0) = puVar7;
                puVar6 = (ulonglong * )(param_1 + 0xf8);
                *puVar6 = *puVar7;
                *puVar7 = param_1;
                if (*puVar6 != 0) {
                    *(ulonglong * *)(*puVar6 + 0xf0) = puVar6;
                }
            }
            local_68 = *(undefined * **)(param_1 + 0x48);
            local_60 = (wchar_t *) ((ulonglong) local_60._4_4_ << 0x20);
            local_48 = 0;
            local_40 = 0;
            local_50 = FUN_14028d140;
            local_58 = (LPVOID) param_1;
            FUN_1401b6bf0(puVar7, &local_68, param_1 + 0xb8);
            uVar4 = 0;
        }
    } else {
        local_80 = 0;
        local_88 = &PTR_LAB_140b5e648;
        local_78 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_88);
        local_38 = local_88;
        local_30 = local_80;
        local_a8 = &PTR_LAB_140b5e648;
        local_a0 = L"FileName";
        local_28 = local_78;
        local_98 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_a8);
        local_60 = local_a0;
        local_a8 = &PTR_LAB_140b5e638;
        local_68 = &PTR_LAB_140b5e638;
        local_70 = 0x141de4240;
        local_58 = local_98;
        local_90 = param_2;
        local_50 = (code *) param_2;
        iVar3 = FUN_1401971e0(&DAT_140c8a3ec, 0xe, &local_70, &local_68, &local_38);
        local_a8 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_98);
        local_88 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_78);
        if (iVar3 != 0) {
            DebugBreak();
        }
        uVar4 = 0x80004005;
    }
    return uVar4;
}


undefined8 FUN_14028c810(longlong param_1, int param_2) {
    longlong lVar1;
    int iVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;
    undefined auVar6[16];
    int iVar7;
    undefined8 uVar8;
    int *piVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    uint uVar12;
    uint uVar13;
    uint uVar14;

    iVar2 = *(int *) (param_1 + 0x34);
    lVar4 = *(longlong * )(param_1 + 0x10);
    lVar1 = (longlong) iVar2 * 4;
    iVar3 = *(int *) (lVar1 + *(longlong * )(lVar4 + 0x1b80));
    if ((iVar3 != 0) || (iVar7 = 2, *(longlong * )(lVar4 + 0x19d8) != 0)) {
        iVar7 = 1;
    }
    if (*(int *) (param_1 + 0x58) < iVar7) {
        if (iVar7 <= param_2) {
            if (*(longlong * )(param_1 + 0x48) == 0) {
                uVar13 = *(uint * )(lVar1 + *(longlong * )(lVar4 + 0x1b78));
                if ((*(byte * )(param_1 + 0x3c) & 0x80) != 0) {
                    uVar13 = uVar13 | 0x400;
                }
                if ((uVar13 & 1) == 0) {
                    uVar8 = (**(code * *)(**(longlong * *)(lVar4 + 0x19d0) + 0xb8))
                            (*(longlong * *)(lVar4 + 0x19d0), *(undefined4 * )(param_1 + 0x1c),
                             *(undefined4 * )(param_1 + 0x20), *(undefined4 * )(param_1 + 0x2c), uVar13,
                             (&DAT_140ae7b30)[*(int *) (param_1 + 0x30)], iVar3,
                             (undefined8 * )(param_1 + 0x78), 0);
                    if ((int) uVar8 < 0) goto LAB_14028c8be;
                    if (*(int *) (param_1 + 0x34) == 4) {
                        FUN_14026bf20(*(undefined8 * )(param_1 + 0x10), *(undefined8 * )(param_1 + 0x78));
                    }
                } else {
                    auVar6 = ZEXT816(8) * ZEXT416(*(uint * )(param_1 + 0x2c));
                    uVar8 = SUB168(auVar6, 0);
                    if (SUB168(auVar6 >> 0x40, 0) != 0) {
                        uVar8 = 0xffffffffffffffff;
                    }
                    uVar8 = FUN_14018b280(uVar8);
                    *(undefined8 * )(param_1 + 0x80) = uVar8;
                    FUN_1407e4830(uVar8);
                    if ((&DAT_140ae64c0)[*(int *) (param_1 + 0x30)] == 0) {
                        uVar13 = 0;
                        uVar8 = (**(code * *)(**(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x19d0) + 0xb8))();
                        if ((int) uVar8 < 0) goto LAB_14028c8be;
                        if ((*(int *) (param_1 + 0x34) == 5) && (*(int *) (param_1 + 0x30) != 0x18)) {
                            FUN_14026bf20();
                        }
                        if (*(int *) (param_1 + 0x2c) != 0) {
                            do {
                                uVar8 = (**(code * *)(**(longlong * *)(param_1 + 0x78) + 0x90))();
                                if ((int) uVar8 < 0) goto LAB_14028c8be;
                                uVar13 = uVar13 + 1;
                            } while (uVar13 < *(uint * )(param_1 + 0x2c));
                        }
                    } else {
                        uVar13 = 0;
                        if (*(int *) (*(longlong * )(param_1 + 0x10) + 0xd8) == 0) {
                            uVar14 = *(uint * )(param_1 + 0x1c);
                            uVar12 = *(uint * )(param_1 + 0x20);
                            if (*(int *) (param_1 + 0x2c) != 0) {
                                do {
                                    uVar8 = (**(code * *)(**(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x19d0) +
                                                          0xe8))();
                                    if ((int) uVar8 < 0) goto LAB_14028c8be;
                                    if (*(int *) (param_1 + 0x34) == 5) {
                                        FUN_14026bf20();
                                    }
                                    if (1 < uVar14) {
                                        uVar14 = uVar14 >> 1;
                                    }
                                    if (1 < uVar12) {
                                        uVar12 = uVar12 >> 1;
                                    }
                                    uVar13 = uVar13 + 1;
                                } while (uVar13 < *(uint * )(param_1 + 0x2c));
                            }
                        } else {
                            uVar8 = (**(code * *)(**(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x19d0) + 0xb8))
                                    ();
                            if ((int) uVar8 < 0) goto LAB_14028c8be;
                            if (*(int *) (param_1 + 0x34) == 5) {
                                FUN_14026bf20();
                            }
                            if (*(int *) (param_1 + 0x2c) != 0) {
                                do {
                                    uVar8 = (**(code * *)(**(longlong * *)(param_1 + 0x78) + 0x90))();
                                    if ((int) uVar8 < 0) goto LAB_14028c8be;
                                    uVar13 = uVar13 + 1;
                                } while (uVar13 < *(uint * )(param_1 + 0x2c));
                            }
                        }
                    }
                    if ((*(longlong * )(param_1 + 0x98) != 0) && (uVar10 = 0, *(int *) (param_1 + 0x2c) != 0)) {
                        do {
                            uVar13 = (int) uVar10 + 1;
                            *(int *) (*(longlong * )(param_1 + 0x98) + uVar10 * 4) =
                                    *(int *) (*(longlong * )(param_1 + 0x10) + 0xf0) + -1;
                            uVar10 = (ulonglong) uVar13;
                        } while (uVar13 < *(uint * )(param_1 + 0x2c));
                    }
                }
                piVar9 = (int *) (*(longlong * )(param_1 + 0x10) + 0x2d4 +
                                  (longlong) * (int *) (param_1 + 0x34) * 0x30);
                LOCK();
                *piVar9 = *piVar9 + 1;
                LOCK();
                piVar9[1] = piVar9[1] + *(int *) (param_1 + 0x88);
                LOCK();
                piVar9[2] = piVar9[2] + 1;
                LOCK();
                piVar9[3] = piVar9[3] + *(int *) (param_1 + 0x88);
                *(undefined4 * )(param_1 + 0x5c) = 0;
            } else {
                uVar8 = FUN_14026c360(lVar4, 0, *(longlong * )(param_1 + 0x48), *(undefined4 * )(param_1 + 0x28),
                                      iVar2, *(undefined4 * )(param_1 + 0x3c), *(undefined4 * )(param_1 + 0x50),
                                      param_1 + 0x68);
                if ((int) uVar8 < 0) {
                    LAB_14028c8be:
                    *(int *) (param_1 + 0x5c) = (int) uVar8;
                    return uVar8;
                }
            }
            goto LAB_14028ccf8;
        }
        if (*(int *) (param_1 + 0x58) < iVar7) goto LAB_14028ccf8;
    }
    if (param_2 < iVar7) {
        if (*(longlong * )(param_1 + 0x78) != 0) {
            piVar9 = (int *) (lVar4 + 0x2d4 + (longlong) iVar2 * 0x30);
            LOCK();
            *piVar9 = *piVar9 + -1;
            LOCK();
            piVar9[1] = piVar9[1] - *(int *) (param_1 + 0x88);
            LOCK();
            piVar9[4] = piVar9[4] + 1;
            LOCK();
            piVar9[5] = piVar9[5] + *(int *) (param_1 + 0x88);
        }
        uVar10 = 0;
        if (*(longlong * )(param_1 + 0x80) != 0) {
            uVar11 = uVar10;
            if (*(int *) (param_1 + 0x2c) != 0) {
                do {
                    lVar1 = *(longlong * )(param_1 + 0x80);
                    plVar5 = *(longlong * *)(lVar1 + uVar11 * 8);
                    if (plVar5 != (longlong *) 0x0) {
                        (**(code * *)(*plVar5 + 0x10))();
                        *(undefined8 * )(lVar1 + uVar11 * 8) = 0;
                    }
                    uVar13 = (int) uVar11 + 1;
                    uVar11 = (ulonglong) uVar13;
                } while (uVar13 < *(uint * )(param_1 + 0x2c));
            }
            FUN_14018b900(*(undefined8 * )(param_1 + 0x80));
            *(undefined8 * )(param_1 + 0x80) = 0;
        }
        if (*(longlong * *)(param_1 + 0x78) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x78) + 0x10))();
            *(undefined8 * )(param_1 + 0x78) = 0;
        }
        if (*(longlong * *)(param_1 + 0x68) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x68) + 8))();
            *(undefined8 * )(param_1 + 0x68) = 0;
        }
        *(undefined4 * )(param_1 + 0x5c) = 0x8000000a;
        *(undefined4 * )(param_1 + 0x60) = 0;
        *(undefined8 * )(param_1 + 0xb0) = 0;
        if (*(longlong * )(param_1 + 0xa8) != 0) {
            do {
                lVar1 = *(longlong * )(param_1 + 0xa0);
                *(undefined4 * )(lVar1 + uVar10 * 0x18) = 0;
                *(undefined8 * )(lVar1 + 8 + uVar10 * 0x18) = 0;
                uVar11 = (ulonglong)((int) uVar10 + 1);
                *(undefined8 * )(lVar1 + 0x10 + uVar10 * 0x18) = 0;
                uVar10 = uVar11;
            } while (uVar11 < *(ulonglong * )(param_1 + 0xa8));
        }
    }
    LAB_14028ccf8:
    *(int *) (param_1 + 0x58) = param_2;
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14028cd30(longlong param_1) {
    short sVar1;
    longlong *plVar2;
    short *psVar3;
    int iVar4;
    uint uVar5;
    undefined4 uVar6;
    ulonglong uVar7;
    int *piVar8;
    short *psVar9;
    ulonglong uVar10;
    undefined auStack392[32];
    undefined ***local_168;
    undefined4 *local_160;
    undefined ***local_158;
    undefined **local_148;
    undefined8 local_140;
    LPVOID local_138;
    undefined **local_130;
    wchar_t *local_128;
    LPVOID local_120;
    undefined8 local_118;
    undefined **local_110;
    undefined8 uStack264;
    undefined8 local_100;
    uint uStack248;
    undefined4 uStack244;
    undefined8 local_f0;
    undefined8 local_e8[2];
    undefined **local_d8;
    undefined8 local_d0;
    LPVOID local_c8;
    undefined **local_b8;
    wchar_t *local_b0;
    LPVOID local_a8;
    undefined8 local_a0;
    undefined4 local_98[4];
    undefined4 local_88[4];
    undefined4 local_78;
    undefined4 uStack116;
    undefined4 uStack112;
    undefined4 uStack108;
    undefined4 local_68;
    undefined4 uStack100;
    uint uStack96;
    undefined4 uStack92;
    undefined4 local_58[6];
    undefined4 local_40;
    undefined4 local_3c;
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong) auStack392;
    plVar2 = *(longlong * *)(param_1 + 0x68);
    local_98[0] = 0xffffffff;
    (**(code * *)(*plVar2 + 0x20))(plVar2, local_98);
    uVar5 = *(uint * )(plVar2 + 0x14);
    if (-1 < (int) uVar5) {
        plVar2 = *(longlong * *)(param_1 + 0x68);
        local_88[0] = 0xffffffff;
        (**(code * *)(*plVar2 + 0x20))(plVar2, local_88);
        if (plVar2[7] == 0) {
            uVar5 = 0x80004005;
        } else {
            *(longlong * )(param_1 + 0x78) = plVar2[7];
            (**(code * *)(*(longlong *) plVar2[7] + 8))();
            uVar5 = (**(code * *)(**(longlong * *)(param_1 + 0x78) + 0x88))
                    (*(longlong * *)(param_1 + 0x78), 0, local_58);
            if (-1 < (int) uVar5) {
                *(undefined4 * )(param_1 + 0x24) = 1;
                *(undefined4 * )(param_1 + 0x1c) = local_40;
                *(undefined4 * )(param_1 + 0x20) = local_3c;
                uVar6 = (**(code * *)(**(longlong * *)(param_1 + 0x78) + 0x68))();
                *(undefined4 * )(param_1 + 0x2c) = uVar6;
                uVar6 = FUN_14026c430(local_58[0]);
                *(undefined4 * )(param_1 + 0x30) = uVar6;
                uVar5 = FUN_140263970(param_1 + 0x18, *(longlong * )(param_1 + 0x10) + 0x88);
                if (-1 < (int) uVar5) {
                    uVar6 = FUN_140263e70(param_1 + 0x18);
                    *(undefined4 * )(param_1 + 0x88) = uVar6;
                    piVar8 = (int *) (*(longlong * )(param_1 + 0x10) + 0x2d4 +
                                      (longlong) * (int *) (param_1 + 0x34) * 0x30);
                    LOCK();
                    *piVar8 = *piVar8 + 1;
                    LOCK();
                    piVar8[1] = piVar8[1] + *(int *) (param_1 + 0x88);
                    LOCK();
                    piVar8[2] = piVar8[2] + 1;
                    LOCK();
                    piVar8[3] = piVar8[3] + *(int *) (param_1 + 0x88);
                    LOCK();
                    piVar8[8] = piVar8[8] + 1;
                    LOCK();
                    piVar8[9] = piVar8[9] + *(int *) (param_1 + 0x88);
                    *(undefined4 * )(param_1 + 0x70) = *(undefined4 * )(*(longlong * )(param_1 + 0x68) + 0x54);
                    uVar6 = *(undefined4 * )(*(longlong * )(param_1 + 0x68) + 0x58);
                    *(undefined4 * )(param_1 + 0x5c) = 0;
                    *(undefined4 * )(param_1 + 0x74) = uVar6;
                    *(undefined4 * )(param_1 + 0x60) = 1;
                    goto LAB_14028d005;
                }
            }
        }
    }
    psVar3 = *(short **) (param_1 + 0x48);
    if (psVar3 != (short *) 0x0) {
        uVar7 = 0;
        sVar1 = *psVar3;
        while (sVar1 != 0) {
            uVar7 = uVar7 + 1;
            sVar1 = psVar3[uVar7];
        }
        uVar10 = 0;
        do {
            uVar10 = uVar10 + 1;
        } while (*(short *) (&DAT_140ae95a8 + uVar10 * 2) != 0);
        if (uVar10 <= uVar7) {
            for (psVar9 = psVar3; psVar9 <= psVar3 + (uVar7 - uVar10); psVar9 = psVar9 + 1) {
                iVar4 = FUN_14018e3e0(psVar9, &DAT_140ae95a8, uVar10);
                if (iVar4 == 0) {
                    if (psVar9 != (short *) 0x0) {
                        local_168 = (undefined * **)
                                ((ulonglong) local_168 & 0xffffffff00000000 | (ulonglong) uVar5);
                        local_f0 = 0x141de4200;
                        FUN_1401a3130(0xe, 0, &local_f0, psVar3);
                        goto LAB_14028cfd2;
                    }
                    break;
                }
            }
        }
    }
    local_140 = 0;
    local_148 = &PTR_LAB_140b5e648;
    local_138 = TlsGetValue(DAT_140c63720);
    TlsSetValue(DAT_140c63720, &local_148);
    local_d8 = local_148;
    local_d0 = local_140;
    local_110 = &PTR_LAB_140b5e648;
    uStack264 = L"Result";
    local_c8 = local_138;
    local_100 = TlsGetValue(DAT_140c63720);
    TlsSetValue(DAT_140c63720, &local_110);
    local_118 = *(undefined8 * )(param_1 + 0x48);
    local_130 = &PTR_LAB_140b5e648;
    local_110 = &PTR_LAB_140b5e640;
    local_68 = (undefined4) local_100;
    uStack100 = local_100._4_4_;
    uStack92 = uStack244;
    local_128 = L"FileName";
    local_78 = 0x40b5e640;
    uStack116 = 1;
    uStack112 = (undefined4) uStack264;
    uStack108 = uStack264._4_4_;
    uStack248 = uVar5;
    uStack96 = uVar5;
    local_120 = TlsGetValue(DAT_140c63720);
    TlsSetValue(DAT_140c63720, &local_130);
    local_b0 = local_128;
    local_130 = &PTR_LAB_140b5e638;
    local_e8[0] = 0x141de3ba8;
    local_158 = &local_d8;
    local_b8 = &PTR_LAB_140b5e638;
    local_a8 = local_120;
    local_160 = &local_78;
    local_168 = &local_b8;
    local_a0 = local_118;
    iVar4 = FUN_1401971e0(&DAT_140c8a3e0, 0xe, local_e8, *(undefined8 * )(param_1 + 0x48));
    local_130 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720, local_120);
    local_110 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720, local_100);
    local_148 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720, local_138);
    if (iVar4 != 0) {
        DebugBreak();
    }
    LAB_14028cfd2:
    *(uint * )(param_1 + 0x5c) = uVar5;
    if (*(longlong * *)(param_1 + 0x78) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x78) + 0x10))();
        *(undefined8 * )(param_1 + 0x78) = 0;
    }
    LAB_14028d005:
    FUN_1407db4f0(local_38 ^ (ulonglong) auStack392);
    return;
}


void FUN_14028d140(longlong param_1) {
    ulonglong *puVar1;
    longlong lVar2;
    ulonglong uVar3;
    DWORD DVar4;
    int iVar5;
    HANDLE hObject;
    ulonglong uVar6;

    lVar2 = *(longlong * )(param_1 + 0x10);
    DVar4 = GetCurrentThreadId();
    uVar6 = 0;
    if (*(DWORD * )(lVar2 + 0x18) == DVar4) {
        *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(lVar2 + 0x20);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
            if (uVar3 == 0) {
                *(DWORD * )(lVar2 + 0x18) = DVar4;
                goto LAB_14028d1a0;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(lVar2 + 0x18, DVar4);
    }
    LAB_14028d1a0:
    iVar5 = FUN_14028c810(param_1, 0);
    if (-1 < iVar5) {
        FUN_14028c810(param_1, 2);
    }
    if (*(ulonglong * )(lVar2 + 0x20) < 2) {
        *(undefined4 * )(lVar2 + 0x18) = 0;
        *(undefined8 * )(lVar2 + 0x20) = 0;
        if (*(longlong * )(lVar2 + 0x28) != 0) {
            if (*(longlong * )(lVar2 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar2 + 0x30);
                uVar6 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar6 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar2 + 0x30));
        }
        return;
    }
    *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + -1;
    return;
}


undefined8 FUN_14028d470(longlong param_1) {
    undefined8 uVar1;

    if (*(longlong * *)(param_1 + 0x68) != (longlong *) 0x0) {
        uVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x68) + 0x20))();
        if ((int) uVar1 == 0) {
            return uVar1;
        }
        FUN_14028cd30(param_1);
        if (*(longlong * *)(param_1 + 0x68) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x68) + 8))();
            *(undefined8 * )(param_1 + 0x68) = 0;
        }
    }
    return 1;
}


undefined4 FUN_14028d4d0(longlong *param_1) {
    undefined4 local_18[4];

    local_18[0] = 0xffffffff;
    (**(code * *)(*param_1 + 0x20))(param_1, local_18);
    return *(undefined4 * )(param_1 + 0xc);
}


void FUN_14028d500(longlong *param_1) {
    undefined4 local_18[4];

    local_18[0] = 0xffffffff;
    (**(code * *)(*param_1 + 0x20))(param_1, local_18);
    *(undefined4 * )(param_1 + 0xc) = 0;
    return;
}


void FUN_14028e050(longlong param_1) {
    int iVar1;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    if (*(longlong * *)(param_1 + 0x78) != (longlong *) 0x0) {
        if ((*(byte * )(param_1 + 0x3c) & 0x80) != 0) {
            // WARNING: Could not recover jumptable at 0x00014028e132. Too many branches
            // WARNING: Treating indirect jump as call
            (**(code * *)(**(longlong * *)(param_1 + 0x78) + 0x80))();
            return;
        }
        local_40 = 0;
        local_48 = &PTR_LAB_140b5e648;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_48);
        local_28 = local_48;
        local_res8 = 0x141de3fd0;
        local_18 = local_38;
        local_20 = local_40;
        iVar1 = FUN_1401971e0(&DAT_140c8a3d4, 0xe, &local_res8, &local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_38);
        if (iVar1 != 0) {
            // WARNING: Could not recover jumptable at 0x00014028e124. Too many branches
            // WARNING: Treating indirect jump as call
            DebugBreak();
            return;
        }
    }
    return;
}


int FUN_14028f2a0(longlong *param_1, short *param_2) {
    longlong *plVar1;
    int iVar2;
    int iVar3;
    longlong *local_res10;
    undefined8 local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    if ((param_2 == (short *) 0x0) || (*param_2 == 0)) {
        return -0x7ff8ffa9;
    }
    if (*(int *) ((longlong) param_1 + 0x34) == 1) {
        local_48 = &PTR_LAB_140b5e648;
        local_40 = 0;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_48);
        local_28 = local_48;
        local_res10 = (longlong *) 0x141de42e0;
        local_18 = local_38;
        local_20 = local_40;
        iVar2 = FUN_1401971e0(&DAT_140c8a3d0, 0xe, &local_res10, &local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_38);
        if (iVar2 != 0) {
            DebugBreak();
        }
        return -0x7fffbffb;
    }
    local_48 = (undefined **) CONCAT44(local_48._4_4_, 0xffffffff);
    (**(code * *)(*param_1 + 0x20))(param_1, &local_48);
    if (param_1[0xf] != 0) {
        local_res10 = (longlong *) 0x0;
        iVar2 = FUN_14026c2c0(param_1[2], param_1[0xf], &local_res10);
        plVar1 = local_res10;
        if ((iVar2 < 0) || (iVar2 = FUN_14029b740(local_res10, param_2), iVar3 = 0, iVar2 < 0)) {
            iVar3 = iVar2;
        }
        if (plVar1 != (longlong *) 0x0) {
            (**(code * *)(*plVar1 + 8))(plVar1);
        }
        return iVar3;
    }
    return -0x7fffbffb;
}


void FUN_14028f410(longlong *param_1, ulonglong param_2) {
    ulonglong uVar1;
    undefined4 *puVar2;
    undefined4 *puVar3;
    undefined4 *puVar4;
    longlong lVar5;
    ulonglong uVar6;

    if ((ulonglong) param_1[1] < param_2 || param_1[1] == param_2) {
        puVar2 = (undefined4 *) FUN_14018db00(*param_1);
        uVar1 = param_1[1];
        uVar6 = 0;
        if (uVar1 < param_2) {
            puVar3 = puVar2 + uVar1 * 6;
            lVar5 = param_2 - uVar1;
            do {
                if (puVar3 != (undefined4 *) 0x0) {
                    *puVar3 = 0;
                    *(undefined8 * )(puVar3 + 2) = 0;
                    *(undefined8 * )(puVar3 + 4) = 0;
                }
                puVar3 = puVar3 + 6;
                lVar5 = lVar5 + -1;
            } while (lVar5 != 0);
        }
        if ((undefined4 * ) * param_1 != puVar2) {
            if (param_1[1] != 0) {
                puVar3 = puVar2;
                do {
                    if (puVar3 != (undefined4 *) 0x0) {
                        puVar4 = (undefined4 * )((longlong) puVar3 + (*param_1 - (longlong) puVar2));
                        *puVar3 = *puVar4;
                        *(undefined8 * )(puVar3 + 2) = *(undefined8 * )(puVar4 + 2);
                        *(undefined8 * )(puVar3 + 4) = *(undefined8 * )(puVar4 + 4);
                    }
                    uVar6 = uVar6 + 1;
                    puVar3 = puVar3 + 6;
                } while (uVar6 < (ulonglong) param_1[1]);
            }
            lVar5 = *param_1;
            if (lVar5 != 0) {
                (**(code * *)(*(longlong * )(lVar5 + -0x10) + 8))(lVar5 + -0x10);
            }
            *param_1 = (longlong) puVar2;
        }
        param_1[1] = param_2;
        return;
    }
    param_1[1] = param_2;
    return;
}
