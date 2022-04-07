//
// Created by flop on 04.04.22.
//
#include "../../include.h"

undefined8 FUN_14011a720(longlong param_1) {
    int iVar1;
    longlong *plVar2;
    ulonglong uVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined local_28[8];
    longlong local_20;
    longlong local_18;

    uVar3 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar3 * 8) + 400) ==
                param_1) {
                uVar5 = *(undefined8 * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar3 * 8);
                goto LAB_14011a769;
            }
            uVar3 = (ulonglong)((int) uVar3 + 1);
        } while (uVar3 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    uVar5 = 0;
    LAB_14011a769:
    plVar2 = &DAT_140a12138;
    if (*(longlong * *)(param_1 + 0x18) < *(longlong * *)(param_1 + 0x10)) {
        plVar2 = *(longlong * *)(param_1 + 0x18);
    }
    if (*(int *) (plVar2 + 1) != 4) {
        iVar1 = FUN_14005e620(param_1, plVar2);
        if (iVar1 == 0) {
            lVar4 = 0;
            goto LAB_14011a7ca;
        }
        if (*(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x70) <=
            *(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        plVar2 = &DAT_140a12138;
        if (*(longlong * *)(param_1 + 0x18) < *(longlong * *)(param_1 + 0x10)) {
            plVar2 = *(longlong * *)(param_1 + 0x18);
        }
    }
    lVar4 = *plVar2 + 0x20;
    LAB_14011a7ca:
    FUN_14018f2d0(local_28, lVar4);
    if (local_20 == local_18) {
        *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    } else {
        FUN_1400eadb0(uVar5, param_1, local_20);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return 1;
}


undefined8 FUN_14011a830(longlong param_1) {
    int iVar1;
    longlong *plVar2;
    ulonglong uVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined local_28[8];
    longlong local_20;
    longlong local_18;

    uVar3 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar3 * 8) + 400) ==
                param_1) {
                uVar5 = *(undefined8 * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar3 * 8);
                goto LAB_14011a879;
            }
            uVar3 = (ulonglong)((int) uVar3 + 1);
        } while (uVar3 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    uVar5 = 0;
    LAB_14011a879:
    plVar2 = &DAT_140a12138;
    if (*(longlong * *)(param_1 + 0x18) < *(longlong * *)(param_1 + 0x10)) {
        plVar2 = *(longlong * *)(param_1 + 0x18);
    }
    if (*(int *) (plVar2 + 1) != 4) {
        iVar1 = FUN_14005e620(param_1, plVar2);
        if (iVar1 == 0) {
            lVar4 = 0;
            goto LAB_14011a8da;
        }
        if (*(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x70) <=
            *(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        plVar2 = &DAT_140a12138;
        if (*(longlong * *)(param_1 + 0x18) < *(longlong * *)(param_1 + 0x10)) {
            plVar2 = *(longlong * *)(param_1 + 0x18);
        }
    }
    lVar4 = *plVar2 + 0x20;
    LAB_14011a8da:
    FUN_14018f2d0(local_28, lVar4);
    if (local_20 == local_18) {
        *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    } else {
        FUN_1400eae30(uVar5, param_1, local_20);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return 1;
}


undefined4 FUN_14011a940(longlong param_1) {
    int iVar1;
    undefined4 uVar2;
    longlong lVar3;
    ulonglong uVar4;
    longlong *plVar5;
    longlong lVar6;
    undefined local_28[8];
    longlong local_20;
    longlong local_18;

    uVar4 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar4 * 8) + 400) ==
                param_1) {
                lVar3 = *(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar4 * 8);
                goto LAB_14011a988;
            }
            uVar4 = (ulonglong)((int) uVar4 + 1);
        } while (uVar4 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar3 = 0;
    LAB_14011a988:
    plVar5 = &DAT_140a12138;
    if (*(longlong * *)(param_1 + 0x18) < *(longlong * *)(param_1 + 0x10)) {
        plVar5 = *(longlong * *)(param_1 + 0x18);
    }
    if (*(int *) (plVar5 + 1) == 4) {
        LAB_14011a9e9:
        lVar6 = *plVar5 + 0x20;
    } else {
        iVar1 = FUN_14005e620(param_1, plVar5);
        if (iVar1 != 0) {
            if (*(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x70) <=
                *(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            plVar5 = &DAT_140a12138;
            if (*(longlong * *)(param_1 + 0x18) < *(longlong * *)(param_1 + 0x10)) {
                plVar5 = *(longlong * *)(param_1 + 0x18);
            }
            goto LAB_14011a9e9;
        }
        lVar6 = 0;
    }
    FUN_14018f2d0(local_28, lVar6);
    if (local_20 != local_18) {
        lVar3 = FUN_14013a270(lVar3 + 0x9c0, local_20);
        if (lVar3 != 0) {
            uVar2 = FUN_140186240(lVar3, param_1);
            goto LAB_14011aa3a;
        }
    }
    *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar2 = 1;
    LAB_14011aa3a:
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return uVar2;
}


undefined4 FUN_14011aac0(longlong param_1) {
    int iVar1;
    undefined4 uVar2;
    longlong lVar3;
    longlong *plVar4;
    ulonglong uVar5;
    undefined8 uVar6;
    undefined local_28[8];
    longlong local_20;

    uVar5 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar5 * 8) + 400) ==
                param_1) {
                uVar6 = *(undefined8 * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar5 * 8);
                goto LAB_14011ab08;
            }
            uVar5 = (ulonglong)((int) uVar5 + 1);
        } while (uVar5 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    uVar6 = 0;
    LAB_14011ab08:
    plVar4 = &DAT_140a12138;
    if (*(longlong * *)(param_1 + 0x18) < *(longlong * *)(param_1 + 0x10)) {
        plVar4 = *(longlong * *)(param_1 + 0x18);
    }
    if (*(int *) (plVar4 + 1) != 4) {
        iVar1 = FUN_14005e620(param_1, plVar4);
        if (iVar1 == 0) {
            lVar3 = 0;
            goto LAB_14011ab69;
        }
        if (*(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x70) <=
            *(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        plVar4 = &DAT_140a12138;
        if (*(longlong * *)(param_1 + 0x18) < *(longlong * *)(param_1 + 0x10)) {
            plVar4 = *(longlong * *)(param_1 + 0x18);
        }
    }
    lVar3 = *plVar4 + 0x20;
    LAB_14011ab69:
    FUN_14018f2d0(local_28, lVar3);
    lVar3 = FUN_1400e8fa0(uVar6, local_20);
    if (lVar3 == 0) {
        *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        uVar2 = 1;
    } else {
        uVar2 = FUN_140156dc0(lVar3, param_1);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return uVar2;
}


undefined8 FUN_14011abd0(longlong param_1) {
    undefined8 *puVar1;
    undefined *puVar2;
    undefined *puVar3;
    undefined4 uVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    undefined local_58[8];
    undefined *local_50;
    undefined *local_48;
    undefined *local_40;
    undefined local_38[8];
    longlong local_30;
    longlong local_28;

    uVar8 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar7 = uVar8;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar7 * 8) + 400) ==
                param_1) {
                uVar8 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar7 * 8);
                break;
            }
            uVar7 = (ulonglong)((int) uVar7 + 1);
        } while (uVar7 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    FUN_1400f2540(uVar8 + 0x180, local_38, 1);
    FUN_1400f2540(uVar8 + 0x180, local_58, 2);
    puVar2 = local_50;
    if ((local_28 != local_30) && (local_48 != local_50)) {
        puVar1 = *(undefined8 * *)(param_1 + 0x10);
        puVar5 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x20);
        uVar4 = 0xfffffffe;
        if ((puVar5 < puVar1) &&
            ((puVar5 != &DAT_140a12138 && (*(int *) (*(longlong * )(param_1 + 0x18) + 0x28) == 5)))) {
            puVar6 = &DAT_140a12138;
            if (puVar5 < puVar1) {
                puVar6 = puVar5;
            }
            *puVar1 = *puVar6;
            *(undefined4 * )(puVar1 + 1) = *(undefined4 * )(puVar6 + 1);
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            uVar4 = FUN_1400578c0(param_1);
        }
        local_48 = (undefined *) FUN_14018b280(10);
        local_40 = local_48 + 10;
        local_50 = local_48;
        FUN_1407db590(local_48, "SlashCmd_", 9);
        local_48 = local_48 + 9;
        if (local_48 != (undefined *) 0x0) {
            *local_48 = 0;
        }
        FUN_14001b050(local_58, local_30, local_28);
        puVar3 = local_50;
        FUN_1400eb7d0(uVar8, local_50, puVar2, *(undefined8 * )(DAT_140c63650 + 0x310), uVar4);
        if (puVar3 != (undefined *) 0x0) {
            FUN_14018b900(puVar3, 0);
        }
    }
    if (puVar2 != (undefined *) 0x0) {
        FUN_14018b900(puVar2, 0);
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30, 0);
    }
    return 0;
}


undefined8 FUN_14011add0(longlong param_1) {
    double *pdVar1;
    int iVar2;
    undefined local_28[8];
    undefined *local_20;
    undefined8 local_18;

    local_20 = (undefined *) FUN_14018b280();
    local_18 = 0;
    *local_20 = 0;
    *(undefined8 * )(local_20 + 8) = 0;
    *(undefined * *)(local_20 + 0x10) = local_20;
    *(undefined * *)(local_20 + 0x18) = local_20;
    iVar2 = FUN_1401342e0(local_28, param_1, 1, 0);
    pdVar1 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar1 + 1) = 3;
    *pdVar1 = (double) iVar2;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    FUN_140008410(local_28);
    FUN_14018b900(local_20, 0);
    return 1;
}


undefined8 FUN_14011ae60(void) {
    longlong lVar1;
    undefined local_28[16];
    undefined8 local_18;
    undefined4 local_10;

    local_28._0_4_ = 0x20;
    lVar1 = (**(code * *)(*DAT_140c65670 + 0x10))();
    local_28._8_8_ = *(HWND * )(lVar1 + 0x18);
    local_18 = 0xe;
    local_10 = 0;
    FlashWindowEx((PFLASHWINFO) local_28);
    return 0;
}


undefined8 FUN_14011aeb0(longlong param_1) {
    uint *puVar1;
    byte bVar2;
    char cVar3;
    int iVar4;
    longlong lVar5;
    longlong *plVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    undefined4 local_28[2];
    longlong local_20;

    uVar8 = 0;
    bVar2 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar7 = uVar8;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar7 * 8) + 400) ==
                param_1) {
                lVar5 = *(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar7 * 8);
                bVar2 = 0;
                if (lVar5 != 0) {
                    plVar6 = &DAT_140a12138;
                    if (*(longlong * *)(param_1 + 0x18) < *(longlong * *)(param_1 + 0x10)) {
                        plVar6 = *(longlong * *)(param_1 + 0x18);
                    }
                    if (*(int *) (plVar6 + 1) == 4) {
                        LAB_14011af79:
                        uVar8 = *plVar6 + 0x20;
                    } else {
                        iVar4 = FUN_14005e620(param_1, plVar6);
                        if (iVar4 != 0) {
                            if (*(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x70) <=
                                *(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x78)) {
                                FUN_14005e2c0(param_1);
                            }
                            plVar6 = &DAT_140a12138;
                            if (*(longlong * *)(param_1 + 0x18) < *(longlong * *)(param_1 + 0x10)) {
                                plVar6 = *(longlong * *)(param_1 + 0x18);
                            }
                            goto LAB_14011af79;
                        }
                    }
                    FUN_14018f2d0(local_28, uVar8);
                    lVar5 = FUN_140108e80(lVar5 + 0xf0, local_20);
                    bVar2 = 0;
                    if ((lVar5 != 0) && (cVar3 = FUN_140118070(lVar5), bVar2 = 0, cVar3 != '\0')) {
                        local_28[0] = 0;
                        cVar3 = FUN_140100da0(lVar5, local_28);
                        if (cVar3 != '\0') {
                            bVar2 = 1;
                        }
                    }
                    if (local_20 != 0) {
                        FUN_14018b900(local_20, 0);
                    }
                }
                break;
            }
            uVar7 = (ulonglong)((int) uVar7 + 1);
        } while (uVar7 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    puVar1 = *(uint * *)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint) bVar2;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_14011b020(longlong param_1) {
    uint *puVar1;
    char cVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    char cVar8;
    undefined local_28[8];
    longlong local_20;

    uVar7 = 0;
    cVar2 = '\0';
    cVar8 = '\0';
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar6 = uVar7;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar6 * 8) + 400) ==
                param_1) {
                lVar4 = *(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar6 * 8);
                cVar8 = '\0';
                if (lVar4 != 0) {
                    plVar5 = &DAT_140a12138;
                    if (*(longlong * *)(param_1 + 0x18) < *(longlong * *)(param_1 + 0x10)) {
                        plVar5 = *(longlong * *)(param_1 + 0x18);
                    }
                    if (*(int *) (plVar5 + 1) == 4) {
                        LAB_14011b0e5:
                        uVar7 = *plVar5 + 0x20;
                    } else {
                        iVar3 = FUN_14005e620(param_1, plVar5);
                        if (iVar3 != 0) {
                            if (*(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x70) <=
                                *(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x78)) {
                                FUN_14005e2c0(param_1);
                            }
                            plVar5 = &DAT_140a12138;
                            if (*(longlong * *)(param_1 + 0x18) < *(longlong * *)(param_1 + 0x10)) {
                                plVar5 = *(longlong * *)(param_1 + 0x18);
                            }
                            goto LAB_14011b0e5;
                        }
                    }
                    FUN_14018f2d0(local_28, uVar7);
                    lVar4 = FUN_140108e80(lVar4 + 0xf0, local_20);
                    if (lVar4 != 0) {
                        cVar2 = FUN_140118070(lVar4);
                    }
                    cVar8 = cVar2;
                    if (local_20 != 0) {
                        FUN_14018b900(local_20, 0);
                    }
                }
                break;
            }
            uVar6 = (ulonglong)((int) uVar6 + 1);
        } while (uVar6 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    puVar1 = *(uint * *)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(cVar8 != '\0');
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_14011b160(longlong param_1) {
    undefined8 *puVar1;
    undefined8 uVar2;
    longlong lVar3;
    undefined4 uVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    undefined local_48[8];
    longlong local_40;
    longlong local_38;
    undefined local_28[8];
    longlong local_20;
    longlong local_18;

    uVar8 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar7 = uVar8;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar7 * 8) + 400) ==
                param_1) {
                uVar8 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar7 * 8);
                break;
            }
            uVar7 = (ulonglong)((int) uVar7 + 1);
        } while (uVar7 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    FUN_1400f2540(uVar8 + 0x180, local_48, 1);
    FUN_1400f2540(uVar8 + 0x180, local_28, 2);
    lVar3 = local_20;
    if ((local_38 != local_40) && (local_18 != local_20)) {
        puVar1 = *(undefined8 * *)(param_1 + 0x10);
        puVar5 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x20);
        uVar4 = 0xfffffffe;
        if ((puVar5 < puVar1) &&
            ((puVar5 != &DAT_140a12138 && (*(int *) (*(longlong * )(param_1 + 0x18) + 0x28) == 5)))) {
            puVar6 = &DAT_140a12138;
            if (puVar5 < puVar1) {
                puVar6 = puVar5;
            }
            *puVar1 = *puVar6;
            *(undefined4 * )(puVar1 + 1) = *(undefined4 * )(puVar6 + 1);
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            uVar4 = FUN_1400578c0(param_1);
        }
        uVar2 = *(undefined8 * )(DAT_140c63650 + 0x310);
        if (local_40 != 0) {
            FUN_1400e2db0(local_28, local_40);
            FUN_1400eb7d0(uVar8, local_20, lVar3, uVar2, uVar4);
            if (local_20 != 0) {
                FUN_14018b900(local_20, 0);
            }
        }
    }
    if (lVar3 != 0) {
        FUN_14018b900(lVar3, 0);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40, 0);
    }
    return 0;
}


undefined8 FUN_14011b450(longlong param_1) {
    ulonglong uVar1;
    ulonglong uVar2;
    undefined local_28[8];
    longlong local_20;
    longlong local_18;

    uVar2 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar1 = uVar2;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar1 * 8) + 400) ==
                param_1) {
                uVar2 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar1 * 8);
                break;
            }
            uVar1 = (ulonglong)((int) uVar1 + 1);
        } while (uVar1 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    FUN_1400f2540(uVar2 + 0x180, local_28, 1);
    if (local_18 != local_20) {
        FUN_1400eb410(uVar2, local_20);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return 0;
}


undefined8 FUN_14011b4f0(longlong param_1) {
    ulonglong uVar1;
    ulonglong uVar2;
    undefined local_28[8];
    longlong local_20;
    longlong local_18;

    uVar2 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar1 = uVar2;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar1 * 8) + 400) ==
                param_1) {
                uVar2 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar1 * 8);
                break;
            }
            uVar1 = (ulonglong)((int) uVar1 + 1);
        } while (uVar1 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    FUN_1400f2540(uVar2 + 0x180, local_28, 1);
    if (local_18 != local_20) {
        FUN_1400eb5d0(uVar2, local_20);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return 0;
}


undefined8 FUN_14011b590(longlong param_1) {
    longlong *plVar1;
    longlong *plVar2;
    ulonglong uVar3;
    longlong lVar4;

    uVar3 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar3 * 8) + 400) ==
                param_1) {
                lVar4 = *(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar3 * 8);
                goto LAB_14011b5d8;
            }
            uVar3 = (ulonglong)((int) uVar3 + 1);
        } while (uVar3 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar4 = 0;
    LAB_14011b5d8:
    plVar2 = (longlong *) FUN_140154f60();
    if ((plVar2 != (longlong *) 0x0) && (plVar1 = *(longlong * *)(lVar4 + 0xb20), plVar2 != plVar1)) {
        if (plVar1 != (longlong *) 0x0) {
            (**(code * *)(*plVar1 + 8))();
            *(undefined8 * )(lVar4 + 0xb20) = 0;
        }
        *(longlong * *)(lVar4 + 0xb20) = plVar2;
        (**(code * *) * plVar2)(plVar2);
    }
    return 0;
}


undefined8 FUN_14011b630(longlong param_1) {
    longlong lVar1;
    undefined8 *puVar2;
    longlong lVar3;
    undefined8 uVar4;
    longlong lVar5;
    ulonglong uVar6;
    undefined local_48[8];
    longlong local_40;
    undefined local_28[8];
    longlong local_20;

    uVar6 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar6 * 8) + 400) ==
                param_1) {
                lVar5 = *(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar6 * 8);
                goto LAB_14011b67c;
            }
            uVar6 = (ulonglong)((int) uVar6 + 1);
        } while (uVar6 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar5 = 0;
    LAB_14011b67c:
    lVar1 = *(longlong * )(lVar5 + 400);
    lVar3 = FUN_14018f0e0(local_48, 0);
    uVar4 = *(undefined8 * )(lVar3 + 8);
    puVar2 = *(undefined8 * *)(lVar1 + 0x18);
    if (((puVar2 < *(undefined8 * *)(lVar1 + 0x10)) && (puVar2 != &DAT_140a12138)) &&
        (0 < *(int *) (puVar2 + 1))) {
        uVar4 = FUN_140056bb0(lVar1, 1);
    }
    FUN_14018f2d0(local_28, uVar4);
    if (local_40 != 0) {
        FUN_14018b900(local_40, 0);
    }
    lVar1 = local_20;
    lVar5 = FUN_14011b780(local_48, lVar5);
    lVar5 = FUN_14018f0e0(local_28, *(undefined8 * )(lVar5 + 8));
    if (*(longlong * )(lVar5 + 8) == 0) {
        *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    } else {
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (*(char *) (*(longlong * )(lVar5 + 8) + lVar3) != '\0');
        FUN_140058710(param_1);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40, 0);
    }
    if (lVar1 != 0) {
        FUN_14018b900(lVar1, 0);
    }
    return 1;
}


longlong FUN_14011b780(longlong param_1, longlong param_2, short *param_3) {
    ulonglong uVar1;
    short sVar2;
    longlong lVar3;
    char cVar4;
    int iVar5;
    undefined2 *puVar6;
    undefined2 *puVar7;
    longlong lVar8;
    short *psVar9;
    longlong lVar10;
    longlong lVar11;
    short *local_res18;
    longlong local_res20;
    undefined local_c8[8];
    undefined2 *local_c0;
    undefined2 *local_b8;
    undefined2 *local_b0;
    undefined local_a8[8];
    undefined2 *local_a0;
    undefined2 *local_98;
    undefined2 *local_90;
    short *local_88;
    undefined local_80[8];
    longlong local_78;
    undefined2 *local_70;
    longlong local_68;
    undefined local_60[8];
    longlong local_58;
    undefined2 *local_50;
    longlong local_48;

    if ((param_3 == (short *) 0x0) || (*param_3 == 0)) {
        *(undefined8 * )(param_1 + 8) = 0;
        *(undefined8 * )(param_1 + 0x10) = 0;
        *(undefined8 * )(param_1 + 0x18) = 0;
        puVar6 = (undefined2 *) FUN_14018b280(2, 0);
        *(undefined2 * *)(param_1 + 8) = puVar6;
        *(undefined2 * *)(param_1 + 0x18) = puVar6 + 1;
        *(undefined2 * *)(param_1 + 0x10) = puVar6;
        FUN_1407db590(puVar6, &DAT_1409d6494, 0);
        *(undefined2 * *)(param_1 + 0x10) = puVar6;
        if (puVar6 == (undefined2 *) 0x0) {
            return param_1;
        }
        *puVar6 = 0;
        return param_1;
    }
    lVar11 = 0;
    local_res18 = (short *) 0x0;
    lVar10 = lVar11;
    do {
        lVar8 = lVar10 + 1;
        lVar10 = lVar10 + 1;
    } while (param_3[lVar8] != 0);
    lVar10 = lVar10 * 2 >> 1;
    if (lVar10 + 1U < 0x7fffffffffffffff) {
        local_res18 = (short *) FUN_14018b280((lVar10 + 1U) * 2, 0);
    }
    FUN_1407db590(local_res18, param_3, lVar10 * 2);
    local_88 = local_res18 + lVar10;
    if (local_88 != (short *) 0x0) {
        *local_88 = 0;
    }
    local_c0 = (undefined2 *) 0x0;
    local_b8 = (undefined2 *) 0x0;
    local_b0 = (undefined2 *) 0x0;
    local_c0 = (undefined2 *) FUN_14018b280(0x10);
    local_b0 = local_c0 + 8;
    if (local_c0 != (undefined2 *) 0x0) {
        *local_c0 = 0;
    }
    local_b8 = local_c0;
    puVar6 = (undefined2 *) FUN_14018b280(0x10);
    local_90 = puVar6 + 8;
    if (puVar6 != (undefined2 *) 0x0) {
        *puVar6 = 0;
    }
    local_a0 = puVar6;
    local_98 = puVar6;
    if (*local_res18 == 0x2f) {
        local_58 = 0;
        local_48 = 0;
        lVar10 = lVar11;
        do {
            psVar9 = &DAT_140a1e2f2 + lVar10;
            lVar10 = lVar10 + 1;
        } while (*psVar9 != 0);
        lVar10 = lVar10 * 2 >> 1;
        uVar1 = lVar10 + 1;
        if (uVar1 < 0x7fffffffffffffff) {
            lVar8 = uVar1 * 2;
            local_58 = FUN_14018b280(lVar8, 0);
            local_48 = local_58 + lVar8;
        }
        lVar8 = local_58;
        lVar10 = lVar10 * 2;
        FUN_1407db590(local_58, &DAT_140a1e2f0, lVar10);
        local_50 = (undefined2 * )(lVar8 + lVar10);
        if (local_50 != (undefined2 *) 0x0) {
            *local_50 = 0;
        }
        psVar9 = local_res18 + 1;
        local_78 = 0;
        local_68 = 0;
        sVar2 = *psVar9;
        lVar10 = lVar11;
        while (sVar2 != 0) {
            lVar10 = lVar10 + 1;
            sVar2 = psVar9[lVar10];
        }
        lVar10 = lVar10 * 2 >> 1;
        uVar1 = lVar10 + 1;
        if (uVar1 < 0x7fffffffffffffff) {
            lVar3 = uVar1 * 2;
            local_78 = FUN_14018b280(lVar3, 0);
            local_68 = lVar3 + local_78;
        }
        lVar3 = local_78;
        lVar10 = lVar10 * 2;
        FUN_1407db590(local_78, psVar9, lVar10);
        local_70 = (undefined2 * )(lVar10 + lVar3);
        if (local_70 != (undefined2 *) 0x0) {
            *local_70 = 0;
        }
        FUN_14018fbd0(local_80, local_a8, local_c8, local_60);
        if (lVar3 != 0) {
            FUN_14018b900(lVar3, 0);
        }
        if (lVar8 != 0) {
            FUN_14018b900(lVar8, 0);
        }
        puVar6 = local_a0;
        if (local_a0 == local_98) {
            *(undefined8 * )(param_1 + 8) = 0;
            *(undefined8 * )(param_1 + 0x10) = 0;
            *(undefined8 * )(param_1 + 0x18) = 0;
            puVar7 = (undefined2 *) FUN_14018b280(2);
            *(undefined2 * *)(param_1 + 8) = puVar7;
            *(undefined2 * *)(param_1 + 0x18) = puVar7 + 1;
            *(undefined2 * *)(param_1 + 0x10) = puVar7;
            FUN_1407db590(puVar7, &DAT_1409d653c, 0);
            *(undefined2 * *)(param_1 + 0x10) = puVar7;
            if (puVar7 != (undefined2 *) 0x0) {
                *puVar7 = 0;
            }
            if (puVar6 != (undefined2 *) 0x0) {
                FUN_14018b900(puVar6, 0);
            }
            if (local_c0 != (undefined2 *) 0x0) {
                FUN_14018b900(local_c0, 0);
            }
            goto LAB_14011bd0f;
        }
        lVar10 = *(longlong * )(param_2 + 0xe10);
        local_res20 = lVar10;
        lVar8 = *(longlong * )(lVar10 + 8);
        while (lVar8 != 0) {
            iVar5 = FUN_14018e2c0(*(undefined8 * )(lVar8 + 0x28), puVar6);
            if (iVar5 < 0) {
                lVar8 = *(longlong * )(lVar8 + 0x18);
            } else {
                local_res20 = lVar8;
                lVar8 = *(longlong * )(lVar8 + 0x10);
            }
        }
        if ((local_res20 == lVar10) ||
            (iVar5 = FUN_14018e2c0(puVar6, *(undefined8 * )(local_res20 + 0x28)), iVar5 < 0)) {
            local_res20 = lVar10;
        }
    } else {
        psVar9 = (short *) FUN_14034bdd0(local_90, 0x65);
        sVar2 = *psVar9;
        lVar10 = lVar11;
        while (sVar2 != 0) {
            lVar10 = lVar10 + 1;
            sVar2 = psVar9[lVar10];
        }
        lVar10 = lVar10 * 2 >> 1;
        uVar1 = lVar10 + 1;
        lVar8 = lVar11;
        if (uVar1 < 0x7fffffffffffffff) {
            lVar8 = FUN_14018b280(uVar1 * 2, 0);
        }
        lVar10 = lVar10 * 2;
        FUN_1407db590(lVar8, psVar9, lVar10);
        puVar7 = (undefined2 * )(lVar10 + lVar8);
        if (puVar7 != (undefined2 *) 0x0) {
            *puVar7 = 0;
        }
        lVar10 = *(longlong * )(param_2 + 0xe10);
        local_res20 = lVar10;
        lVar3 = *(longlong * )(lVar10 + 8);
        while (lVar3 != 0) {
            iVar5 = FUN_14018e2c0(*(undefined8 * )(lVar3 + 0x28), lVar8);
            if (iVar5 < 0) {
                lVar3 = *(longlong * )(lVar3 + 0x18);
            } else {
                local_res20 = lVar3;
                lVar3 = *(longlong * )(lVar3 + 0x10);
            }
        }
        if ((local_res20 == lVar10) ||
            (iVar5 = FUN_14018e2c0(lVar8, *(undefined8 * )(local_res20 + 0x28)), iVar5 < 0)) {
            local_res20 = lVar10;
        }
        if (lVar8 != 0) {
            FUN_14018b900(lVar8, 0);
        }
        FUN_14001c480(local_c8, local_res18, local_88);
    }
    if (local_res20 == *(longlong * )(param_2 + 0xe10)) {
        puVar7 = (undefined2 *) FUN_14018b280(10);
        local_90 = puVar7 + 5;
        local_a0 = puVar7;
        FUN_1407db590(puVar7, "SlashCmd_", 9);
        local_98 = (undefined2 * )((longlong) puVar7 + 9);
        if (local_98 != (undefined2 *) 0x0) {
            *(undefined *) local_98 = 0;
        }
        lVar10 = FUN_14018f0e0(local_80, puVar6);
        FUN_14001b050(local_a8, *(undefined8 * )(lVar10 + 8), *(undefined8 * )(lVar10 + 0x10));
        if (local_78 != 0) {
            FUN_14018b900(local_78, 0);
        }
        puVar7 = local_a0;
        cVar4 = FUN_1400ea3e0(param_2, local_a0, &DAT_1409d6554, puVar6, local_c0);
        if (cVar4 != '\0') {
            if (puVar7 != (undefined2 *) 0x0) {
                FUN_14018b900(puVar7, 0);
            }
            goto LAB_14011bca6;
        }
        psVar9 = (short *) FUN_14034bdd0();
        *(undefined8 * )(param_1 + 8) = 0;
        *(undefined8 * )(param_1 + 0x10) = 0;
        *(undefined8 * )(param_1 + 0x18) = 0;
        sVar2 = *psVar9;
        while (sVar2 != 0) {
            lVar11 = lVar11 + 1;
            sVar2 = psVar9[lVar11];
        }
        FUN_14001c1b0(param_1, psVar9, psVar9 + lVar11);
        if (puVar7 != (undefined2 *) 0x0) {
            FUN_14018b900(puVar7, 0);
        }
    } else {
        (**(code * *)(local_res20 + 0x40))(local_c8, *(undefined8 * )(local_res20 + 0x48));
        LAB_14011bca6:
        *(undefined8 * )(param_1 + 8) = 0;
        *(undefined8 * )(param_1 + 0x10) = 0;
        *(undefined8 * )(param_1 + 0x18) = 0;
        puVar7 = (undefined2 *) FUN_14018b280(2);
        *(undefined2 * *)(param_1 + 8) = puVar7;
        *(undefined2 * *)(param_1 + 0x18) = puVar7 + 1;
        *(undefined2 * *)(param_1 + 0x10) = puVar7;
        FUN_1407db590(puVar7, &DAT_1409d657c, 0);
        *(undefined2 * *)(param_1 + 0x10) = puVar7;
        if (puVar7 != (undefined2 *) 0x0) {
            *puVar7 = 0;
        }
    }
    if (puVar6 != (undefined2 *) 0x0) {
        FUN_14018b900(puVar6, 0);
    }
    if (local_c0 != (undefined2 *) 0x0) {
        FUN_14018b900(local_c0, 0);
    }
    LAB_14011bd0f:
    FUN_14018b900(local_res18, 0);
    return param_1;
}


undefined8 FUN_14011bd90(longlong param_1) {
    int iVar1;
    int iVar2;
    double *pdVar3;
    longlong lVar4;
    ulonglong uVar5;

    uVar5 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar5 * 8) + 400) ==
                param_1) {
                lVar4 = *(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar5 * 8);
                if (lVar4 != 0) {
                    iVar1 = *(int *) (lVar4 + 0x50);
                    pdVar3 = *(double **) (param_1 + 0x10);
                    iVar2 = *(int *) (lVar4 + 0x54);
                    *(undefined4 * )(pdVar3 + 1) = 3;
                    *pdVar3 = (double) iVar1;
                    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
                    pdVar3 = *(double **) (param_1 + 0x10);
                    *(undefined4 * )(pdVar3 + 1) = 3;
                    *pdVar3 = (double) iVar2;
                    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
                    return 2;
                }
                break;
            }
            uVar5 = (ulonglong)((int) uVar5 + 1);
        } while (uVar5 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar4 = (**(code * *)(*DAT_140c65670 + 0x248))();
    pdVar3 = *(double **) (param_1 + 0x10);
    iVar1 = *(int *) (lVar4 + 8);
    *(undefined4 * )(pdVar3 + 1) = 3;
    *pdVar3 = (double) iVar1;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    iVar1 = *(int *) (lVar4 + 0xc);
    pdVar3 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar3 + 1) = 3;
    *pdVar3 = (double) iVar1;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 2;
}


void FUN_14011be80(longlong param_1) {
    undefined4 uVar1;
    longlong lVar2;
    int iVar3;
    int iVar4;
    undefined8 *puVar5;
    double *pdVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    longlong lVar9;
    double *pdVar10;
    undefined8 *puVar11;
    int iVar12;
    ulonglong uVar13;
    longlong lVar14;
    undefined auStack296[32];
    double local_108;
    undefined4 local_100;
    undefined4 local_f8;
    undefined4 uStack244;
    undefined4 uStack240;
    undefined4 uStack236;
    undefined4 local_e8;
    undefined4 uStack228;
    undefined4 uStack224;
    undefined4 uStack220;
    undefined4 local_d8;
    undefined4 uStack212;
    undefined4 uStack208;
    undefined4 uStack204;
    undefined4 local_c8[4];
    int local_b8[4];
    uint local_a8;
    undefined4 local_98[4];
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
    int local_58[4];
    uint local_48;
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong) auStack296;
    pdVar10 = (double *) &DAT_140a12138;
    if (*(double **) (param_1 + 0x18) < *(double **) (param_1 + 0x10)) {
        pdVar10 = *(double **) (param_1 + 0x18);
    }
    uVar13 = 0;
    iVar12 = 0;
    if (*(int *) (pdVar10 + 1) == 3) {
        LAB_14011bf02:
        local_b8[0] = (int) *pdVar10;
    } else {
        local_b8[0] = iVar12;
        if ((*(int *) (pdVar10 + 1) == 4) &&
            (iVar3 = FUN_14005ac80((longlong) * pdVar10 + 0x20, &local_108), iVar3 != 0)) {
            local_100 = 3;
            pdVar10 = &local_108;
            goto LAB_14011bf02;
        }
    }
    pdVar10 = (double *) (*(longlong * )(param_1 + 0x18) + 0x10);
    pdVar6 = (double *) &DAT_140a12138;
    if (pdVar10 < *(double **) (param_1 + 0x10)) {
        pdVar6 = pdVar10;
    }
    iVar3 = iVar12;
    if ((*(int *) (pdVar6 + 1) != 0) && ((*(int *) (pdVar6 + 1) != 1 || (*(int *) pdVar6 != 0)))) {
        iVar3 = 1;
    }
    pdVar10 = (double *) (*(longlong * )(param_1 + 0x18) + 0x20);
    pdVar6 = (double *) &DAT_140a12138;
    if (pdVar10 < *(double **) (param_1 + 0x10)) {
        pdVar6 = pdVar10;
    }
    if (*(int *) (pdVar6 + 1) != 3) {
        local_b8[1] = iVar12;
        if ((*(int *) (pdVar6 + 1) != 4) ||
            (iVar4 = FUN_14005ac80((longlong) * pdVar6 + 0x20, &local_108), iVar4 == 0))
            goto LAB_14011bf9b;
        local_100 = 3;
        pdVar6 = &local_108;
    }
    local_b8[1] = (int) *pdVar6;
    LAB_14011bf9b:
    puVar5 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x30);
    puVar11 = &DAT_140a12138;
    if (puVar5 < *(undefined8 * *)(param_1 + 0x10)) {
        puVar11 = puVar5;
    }
    if ((*(int *) (puVar11 + 1) == 0) ||
        ((iVar4 = 1, *(int *) (puVar11 + 1) == 1 && (*(int *) puVar11 == 0)))) {
        iVar4 = iVar12;
    }
    local_a8 = 0;
    puVar11 = (undefined8 * ) & local_e8;
    uVar7 = uVar13;
    do {
        uVar1 = *(undefined4 * )((longlong) & DAT_140a1eb08 + uVar7);
        *(undefined4 * )((longlong) local_b8 + uVar7) = 0;
        uVar8 = uVar7 + 4;
        *(undefined4 * )((longlong) local_c8 + uVar7) = uVar1;
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
        uVar7 = uVar8;
    } while ((longlong) uVar8 < 0x10);
    local_b8[2] = local_b8[0];
    local_b8[3] = local_b8[1];
    local_88 = local_e8;
    uStack132 = uStack228;
    uStack128 = uStack224;
    uStack124 = uStack220;
    local_78 = local_d8;
    uStack116 = uStack212;
    uStack112 = uStack208;
    uStack108 = uStack204;
    local_68 = local_c8[0];
    uStack100 = local_c8[1];
    uStack96 = local_c8[2];
    uStack92 = local_c8[3];
    local_98[0] = local_f8;
    local_98[1] = uStack244;
    local_98[2] = uStack240;
    local_98[3] = uStack236;
    local_58[0] = local_b8[0];
    local_58[1] = local_b8[1];
    local_58[2] = local_b8[0];
    local_58[3] = local_b8[1];
    if (iVar3 == 0) {
        local_48 = local_a8 & 0xfffffeff;
    } else {
        local_48 = local_a8 | 0x100;
    }
    if (iVar4 == 0) {
        local_48 = local_48 & 0xfffffdff;
    } else {
        local_48 = local_48 | 0x200;
    }
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar13 * 8) + 400) ==
                param_1) {
                lVar2 = *(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar13 * 8);
                if (lVar2 != 0) {
                    *(undefined4 * )(lVar2 + 0xb80) = local_f8;
                    *(undefined4 * )(lVar2 + 0xb84) = uStack244;
                    *(undefined4 * )(lVar2 + 0xb88) = uStack240;
                    *(undefined4 * )(lVar2 + 0xb8c) = uStack236;
                    *(ulonglong * )(lVar2 + 0xb90) = CONCAT44(uStack228, local_e8);
                    lVar14 = 4;
                    *(ulonglong * )(lVar2 + 0xb98) = CONCAT44(uStack220, uStack224);
                    *(ulonglong * )(lVar2 + 0xba0) = CONCAT44(uStack212, local_d8);
                    *(ulonglong * )(lVar2 + 0xba8) = CONCAT44(uStack204, uStack208);
                    *(ulonglong * )(lVar2 + 0xbb0) = CONCAT44(local_c8[1], local_c8[0]);
                    *(ulonglong * )(lVar2 + 3000) = CONCAT44(local_c8[3], local_c8[2]);
                    lVar9 = 0x40;
                    do {
                        *(undefined4 * )(lVar9 + 0xb80 + lVar2) = *(undefined4 * )((longlong) local_98 + lVar9);
                        lVar14 = lVar14 + -1;
                        lVar9 = lVar9 + 4;
                    } while (lVar14 != 0);
                    *(uint * )(lVar2 + 0xbd0) = local_48;
                }
                break;
            }
            uVar13 = (ulonglong)((int) uVar13 + 1);
        } while (uVar13 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    FUN_1407db4f0(local_38 ^ (ulonglong) auStack296);
    return;
}


undefined8 FUN_14011c240(longlong param_1) {
    longlong lVar1;
    int iVar2;
    ulonglong uVar3;
    double *pdVar4;
    uint uVar5;
    int iVar6;
    double local_res10[3];
    double local_18;
    undefined4 local_10;

    uVar5 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) == 0) {
        return 0;
    }
    uVar3 = 0;
    while (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar3 * 8) + 400) !=
           param_1) {
        uVar5 = uVar5 + 1;
        uVar3 = (ulonglong) uVar5;
        if (*(ulonglong * )(DAT_140c63650 + 0x300) <= uVar3) {
            return 0;
        }
    }
    lVar1 = *(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + (ulonglong) uVar5 * 8);
    if (lVar1 == 0) {
        return 0;
    }
    pdVar4 = (double *) &DAT_140a12138;
    if (*(double **) (param_1 + 0x18) < *(double **) (param_1 + 0x10)) {
        pdVar4 = *(double **) (param_1 + 0x18);
    }
    if (*(int *) (pdVar4 + 1) != 3) {
        iVar6 = 0;
        if ((*(int *) (pdVar4 + 1) != 4) ||
            (iVar2 = FUN_14005ac80((longlong) * pdVar4 + 0x20, local_res10), iVar6 = 0, iVar2 == 0))
            goto LAB_14011c2f1;
        local_10 = 3;
        pdVar4 = &local_18;
        local_18 = local_res10[0];
    }
    iVar6 = (int) *pdVar4;
    LAB_14011c2f1:
    iVar2 = *(int *) (lVar1 + 0x3c);
    if (iVar6 < *(int *) (lVar1 + 0x3c)) {
        iVar2 = iVar6;
    }
    *(int *) (lVar1 + 0x38) = iVar2;
    return 0;
}


undefined8 FUN_14011c310(longlong param_1) {
    longlong lVar1;
    int iVar2;
    ulonglong uVar3;
    double *pdVar4;
    uint uVar5;
    int iVar6;
    double local_res10[3];
    double local_18;
    undefined4 local_10;

    uVar5 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) == 0) {
        return 0;
    }
    uVar3 = 0;
    while (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar3 * 8) + 400) !=
           param_1) {
        uVar5 = uVar5 + 1;
        uVar3 = (ulonglong) uVar5;
        if (*(ulonglong * )(DAT_140c63650 + 0x300) <= uVar3) {
            return 0;
        }
    }
    lVar1 = *(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + (ulonglong) uVar5 * 8);
    if (lVar1 == 0) {
        return 0;
    }
    pdVar4 = (double *) &DAT_140a12138;
    if (*(double **) (param_1 + 0x18) < *(double **) (param_1 + 0x10)) {
        pdVar4 = *(double **) (param_1 + 0x18);
    }
    if (*(int *) (pdVar4 + 1) != 3) {
        iVar6 = 0;
        if ((*(int *) (pdVar4 + 1) != 4) ||
            (iVar2 = FUN_14005ac80((longlong) * pdVar4 + 0x20, local_res10), iVar6 = 0, iVar2 == 0))
            goto LAB_14011c3c1;
        local_10 = 3;
        pdVar4 = &local_18;
        local_18 = local_res10[0];
    }
    iVar6 = (int) *pdVar4;
    LAB_14011c3c1:
    if (iVar6 < 1) {
        iVar6 = 1;
    }
    iVar2 = *(int *) (lVar1 + 0x38);
    if (*(int *) (lVar1 + 0x38) < iVar6) {
        iVar2 = iVar6;
    }
    *(int *) (lVar1 + 0x3c) = iVar2;
    return 0;
}


undefined8 FUN_14011c3f0(longlong param_1) {
    undefined8 *puVar1;
    double *pdVar2;
    longlong lVar3;
    undefined8 uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    int iVar7;
    int iVar8;
    float fVar9;

    uVar6 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar5 = uVar6;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar5 * 8) + 400) ==
                param_1) {
                uVar6 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar5 * 8);
                break;
            }
            uVar5 = (ulonglong)((int) uVar5 + 1);
        } while (uVar5 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    fVar9 = 1.0;
    lVar3 = (**(code * *)(*DAT_140c65670 + 0x248))();
    if (uVar6 == 0) {
        iVar7 = *(int *) (lVar3 + 8);
        iVar8 = *(int *) (lVar3 + 0xc);
    } else {
        fVar9 = *(float *) (uVar6 + 0x58);
        iVar7 = *(int *) (uVar6 + 0x50);
        iVar8 = *(int *) (uVar6 + 0x54);
    }
    if (*(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x70) <=
        *(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 * )(puVar1 + 1) = 5;
    *puVar1 = uVar4;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1, "nWidth", 6);
    pdVar2 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar2 + 1) = 3;
    *pdVar2 = (double) iVar7;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar4, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "nHeight", 7);
    pdVar2 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar2 + 1) = 3;
    *pdVar2 = (double) iVar8;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar4, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    iVar7 = *(int *) (lVar3 + 8);
    FUN_140058710(param_1, "nRawWidth", 9);
    pdVar2 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar2 + 1) = 3;
    *pdVar2 = (double) iVar7;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar4, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    iVar7 = *(int *) (lVar3 + 0xc);
    FUN_140058710(param_1, "nRawHeight", 10);
    pdVar2 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar2 + 1) = 3;
    *pdVar2 = (double) iVar7;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar4, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "fScale", 6);
    pdVar2 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar2 + 1) = 3;
    *pdVar2 = (double) fVar9;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar4, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    return 1;
}


undefined8 FUN_14011c6b0(longlong param_1) {
    undefined8 *puVar1;
    double *pdVar2;
    ulonglong uVar3;
    undefined8 uVar4;
    ulonglong uVar5;
    int iVar6;
    int iVar7;

    uVar3 = 0;
    iVar7 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar5 = uVar3;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar5 * 8) + 400) ==
                param_1) {
                uVar3 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar5 * 8);
                break;
            }
            uVar5 = (ulonglong)((int) uVar5 + 1);
        } while (uVar5 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    iVar6 = iVar7;
    if (uVar3 != 0) {
        iVar7 = **(int **) (uVar3 + 0xb10);
        iVar6 = (*(int **) (uVar3 + 0xb10))[1];
    }
    if (*(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x70) <=
        *(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 * )(puVar1 + 1) = 5;
    *puVar1 = uVar4;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1, &DAT_1409d660c, 1);
    pdVar2 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar2 + 1) = 3;
    *pdVar2 = (double) iVar7;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar4, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, &DAT_1409d6644, 1);
    pdVar2 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar2 + 1) = 3;
    *pdVar2 = (double) iVar6;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar4, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    return 1;
}



// WARNING: Removing unreachable block (ram,0x00014011ccd2)

undefined8 FUN_14011cba0(longlong param_1) {
    short *psVar1;
    undefined8 *puVar2;
    undefined2 *puVar3;
    undefined8 uVar4;
    longlong *plVar5;
    undefined8 uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    undefined2 *puVar10;
    undefined local_28[8];
    undefined2 *local_20;
    undefined2 *local_18;
    undefined2 *local_10;

    uVar8 = 0;
    uVar9 = uVar8;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar7 = uVar8;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar7 * 8) + 400) ==
                param_1) {
                uVar9 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar7 * 8);
                break;
            }
            uVar7 = (ulonglong)((int) uVar7 + 1);
        } while (uVar7 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    puVar3 = (undefined2 *) FUN_14018b280(0x10);
    local_10 = puVar3 + 8;
    if (puVar3 != (undefined2 *) 0x0) {
        *puVar3 = 0;
    }
    puVar2 = *(undefined8 * *)(param_1 + 0x18);
    local_20 = puVar3;
    local_18 = puVar3;
    if (((puVar2 < *(undefined8 * *)(param_1 + 0x10)) && (puVar2 != &DAT_140a12138)) &&
        (*(int *) (puVar2 + 1) - 3U < 2)) {
        uVar4 = FUN_140056bb0(param_1, 1);
        FUN_14018f2d0(local_28, uVar4);
        puVar10 = local_20;
        if (puVar3 != (undefined2 *) 0x0) {
            FUN_14018b900(puVar3, 0);
        }
        FUN_14010dd80(*(undefined8 * )(uVar9 + 0x170), puVar10);
    } else {
        do {
            psVar1 = &DAT_140a1e382 + uVar8;
            uVar8 = uVar8 + 1;
        } while (*psVar1 != 0);
        if ((longlong)(uVar8 * 2) >> 1 == 0) {
            FUN_1407db590(puVar3, &DAT_140a1e380, 0);
            puVar10 = puVar3;
        } else {
            FUN_14001c310(local_28);
            puVar10 = local_20;
        }
        plVar5 = (longlong *) FUN_14012a990(param_1, 1);
        if (plVar5 != (longlong *) 0x0) {
            uVar4 = *(undefined8 * )(uVar9 + 0x170);
            uVar6 = (**(code * *)(*plVar5 + 0x10))(plVar5);
            FUN_14010dfb0(uVar4, uVar6);
        }
    }
    if (puVar10 != (undefined2 *) 0x0) {
        FUN_14018b900(puVar10, 0);
    }
    return 0;
}


undefined8 FUN_14011cd50(longlong param_1) {
    undefined4 *puVar1;
    uint uVar2;
    int iVar3;
    ulonglong uVar4;
    undefined8 uVar5;
    ulonglong uVar6;
    longlong lVar7;
    undefined local_28[8];
    longlong local_20;

    uVar4 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar6 = 0;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar6 * 8) + 400) ==
                param_1) {
                lVar7 = *(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar4 * 8);
                goto LAB_14011cd98;
            }
            uVar2 = (int) uVar4 + 1;
            uVar4 = (ulonglong) uVar2;
            uVar6 = (ulonglong) uVar2;
        } while (uVar6 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar7 = 0;
    LAB_14011cd98:
    uVar5 = FUN_140056bb0(param_1, 1);
    FUN_14018f2d0(local_28, uVar5);
    iVar3 = FUN_140152230(*(undefined8 * )(lVar7 + 0x178), local_20, 1);
    if (iVar3 < 0) {
        puVar1 = *(undefined4 * *)(param_1 + 0x10);
        *puVar1 = 0;
        puVar1[2] = 1;
    } else {
        puVar1 = *(undefined4 * *)(param_1 + 0x10);
        *puVar1 = 1;
        puVar1[2] = 1;
    }
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return 1;
}


undefined8 FUN_14011ce30(longlong param_1) {
    ulonglong uVar1;
    longlong lVar2;
    uint uVar3;
    longlong lVar4;
    undefined local_28[8];
    longlong local_20;

    uVar3 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar1 = 0;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar1 * 8) + 400) ==
                param_1)
                break;
            uVar3 = uVar3 + 1;
            uVar1 = (ulonglong) uVar3;
        } while (uVar1 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar2 = FUN_14018f0e0(local_28, *(undefined8 * )(DAT_140c63650 + 0x310));
    if (*(longlong * )(lVar2 + 8) == 0) {
        *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    } else {
        lVar4 = -1;
        do {
            lVar4 = lVar4 + 1;
        } while (*(char *) (*(longlong * )(lVar2 + 8) + lVar4) != '\0');
        FUN_140058710(param_1);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return 1;
}


undefined8 FUN_14011d270(longlong param_1) {
    undefined8 uVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    undefined local_28[8];
    longlong local_20;

    uVar3 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar2 = uVar3;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar2 * 8) + 400) ==
                param_1) {
                uVar3 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar2 * 8);
                break;
            }
            uVar2 = (ulonglong)((int) uVar2 + 1);
        } while (uVar2 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    uVar1 = FUN_140056bb0(param_1, 1);
    FUN_14018f2d0(local_28, uVar1);
    FUN_1400f5000(uVar3 + 0xa80, local_20);
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return 0;
}


undefined8 FUN_14011d310(longlong param_1) {
    longlong lVar1;
    undefined *puVar2;
    char *pcVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    ulonglong uVar7;
    undefined8 uVar8;
    longlong lVar9;
    undefined8 *puVar10;
    ulonglong uVar11;
    longlong lVar12;
    ulonglong uVar13;
    undefined8 local_res10;
    undefined **local_88;
    longlong local_80;
    LPVOID local_78;
    undefined **local_68;
    longlong local_60;
    LPVOID local_58;
    undefined local_48[8];
    longlong local_40;

    uVar7 = 0;
    uVar13 = uVar7;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar11 = uVar7;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar11 * 8) + 400) ==
                param_1) {
                uVar13 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar11 * 8);
                break;
            }
            uVar11 = (ulonglong)((int) uVar11 + 1);
        } while (uVar11 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar5 = FUN_1400d66a0(param_1, 1);
    if (lVar5 == 0) {
        local_80 = 0;
        local_88 = &PTR_LAB_140b5e648;
        local_78 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_88);
        local_68 = local_88;
        local_res10 = 0x141d18a20;
        local_58 = local_78;
        local_60 = local_80;
        iVar4 = FUN_1401971e0(&DAT_140c8a118, 0xd, &local_res10, &local_68);
        local_88 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_78);
        if (iVar4 != 0) {
            DebugBreak();
        }
    }
    lVar6 = FUN_140056bb0(param_1, 2);
    lVar9 = -1;
    do {
        pcVar3 = (char *) (lVar6 + 1 + lVar9);
        lVar9 = lVar9 + 1;
    } while (*pcVar3 != '\0');
    lVar12 = (lVar9 + lVar6) - lVar6;
    lVar1 = lVar12 + 1;
    if (lVar1 != -1) {
        uVar7 = FUN_14018b280(lVar1, 0);
    }
    FUN_1407db590(uVar7, lVar6, lVar12);
    puVar2 = (undefined * )(((lVar9 + lVar6) - lVar6) + uVar7);
    if (puVar2 != (undefined *) 0x0) {
        *puVar2 = 0;
    }
    uVar8 = FUN_140056bb0(param_1, 3);
    FUN_14018f2d0(local_48, uVar8);
    iVar4 = FUN_140056d60(param_1, 4);
    lVar9 = FUN_14018f0e0(&local_68, 0);
    uVar8 = *(undefined8 * )(lVar9 + 8);
    puVar10 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x40);
    if (((puVar10 < *(undefined8 * *)(param_1 + 0x10)) && (puVar10 != &DAT_140a12138)) &&
        (0 < *(int *) (*(longlong * )(param_1 + 0x18) + 0x48))) {
        uVar8 = FUN_140056bb0(param_1, 5);
    }
    FUN_14018f2d0(&local_88, uVar8);
    if (local_60 != 0) {
        FUN_14018b900(local_60, 0);
    }
    lVar9 = local_80;
    FUN_1400e9500(uVar13, lVar5, uVar7, local_40, (longlong) iVar4, local_80);
    if (lVar9 != 0) {
        FUN_14018b900(lVar9, 0);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40, 0);
    }
    if (uVar7 != 0) {
        FUN_14018b900(uVar7, 0);
    }
    return 0;
}


undefined8 FUN_14011d590(longlong param_1) {
    longlong lVar1;
    undefined *puVar2;
    char *pcVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    ulonglong uVar7;
    undefined8 uVar8;
    longlong lVar9;
    undefined8 *puVar10;
    ulonglong uVar11;
    longlong lVar12;
    ulonglong uVar13;
    undefined8 local_res10;
    undefined **local_88;
    longlong local_80;
    LPVOID local_78;
    undefined **local_68;
    longlong local_60;
    LPVOID local_58;
    undefined local_48[8];
    longlong local_40;

    uVar7 = 0;
    uVar13 = uVar7;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar11 = uVar7;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar11 * 8) + 400) ==
                param_1) {
                uVar13 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar11 * 8);
                break;
            }
            uVar11 = (ulonglong)((int) uVar11 + 1);
        } while (uVar11 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar5 = FUN_1400d66a0(param_1, 1);
    if (lVar5 == 0) {
        local_80 = 0;
        local_88 = &PTR_LAB_140b5e648;
        local_78 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_88);
        local_68 = local_88;
        local_res10 = 0x141d18a90;
        local_58 = local_78;
        local_60 = local_80;
        iVar4 = FUN_1401971e0(&DAT_140c8a114, 0xd, &local_res10, &local_68);
        local_88 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_78);
        if (iVar4 != 0) {
            DebugBreak();
        }
    }
    lVar6 = FUN_140056bb0(param_1, 2);
    lVar9 = -1;
    do {
        pcVar3 = (char *) (lVar6 + 1 + lVar9);
        lVar9 = lVar9 + 1;
    } while (*pcVar3 != '\0');
    lVar12 = (lVar9 + lVar6) - lVar6;
    lVar1 = lVar12 + 1;
    if (lVar1 != -1) {
        uVar7 = FUN_14018b280(lVar1, 0);
    }
    FUN_1407db590(uVar7, lVar6, lVar12);
    puVar2 = (undefined * )(((lVar9 + lVar6) - lVar6) + uVar7);
    if (puVar2 != (undefined *) 0x0) {
        *puVar2 = 0;
    }
    uVar8 = FUN_140056bb0(param_1, 3);
    FUN_14018f2d0(local_48, uVar8);
    iVar4 = FUN_140056d60(param_1, 4);
    lVar9 = FUN_14018f0e0(&local_68, 0);
    uVar8 = *(undefined8 * )(lVar9 + 8);
    puVar10 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x40);
    if (((puVar10 < *(undefined8 * *)(param_1 + 0x10)) && (puVar10 != &DAT_140a12138)) &&
        (0 < *(int *) (*(longlong * )(param_1 + 0x18) + 0x48))) {
        uVar8 = FUN_140056bb0(param_1, 5);
    }
    FUN_14018f2d0(&local_88, uVar8);
    if (local_60 != 0) {
        FUN_14018b900(local_60, 0);
    }
    lVar9 = local_80;
    FUN_1400e9780(uVar13, lVar5, uVar7, local_40, (longlong) iVar4, local_80);
    if (lVar9 != 0) {
        FUN_14018b900(lVar9, 0);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40, 0);
    }
    if (uVar7 != 0) {
        FUN_14018b900(uVar7, 0);
    }
    return 0;
}


longlong FUN_14011d810(longlong param_1, longlong param_2, undefined4 param_3, undefined *param_4) {
    longlong lVar1;
    bool bVar2;
    int iVar3;
    undefined *puVar4;
    undefined8 *puVar5;
    int *piVar6;
    longlong *plVar7;
    undefined8 uVar8;
    char *pcVar9;
    longlong lVar10;
    undefined *puVar11;
    ulonglong uVar12;
    undefined8 *puVar13;
    undefined local_c8[8];
    undefined *local_c0;
    undefined8 local_b8;
    longlong local_a8;
    undefined local_a0[8];
    undefined8 local_98;
    undefined8 local_90;
    undefined8 local_88;
    undefined local_80[8];
    longlong local_78;
    undefined local_60[8];
    longlong local_58;
    undefined local_40[8];
    longlong local_38;

    local_c0 = (undefined *) FUN_14018b280(0x28);
    uVar12 = 0;
    local_b8 = 0;
    *local_c0 = 0;
    *(undefined8 * )(local_c0 + 8) = 0;
    *(undefined * *)(local_c0 + 0x10) = local_c0;
    *(undefined * *)(local_c0 + 0x18) = local_c0;
    puVar4 = local_c8;
    if (param_4 != (undefined *) 0x0) {
        puVar4 = param_4;
    }
    puVar5 = (undefined8 *) FUN_1400580e0(param_2, param_3);
    puVar13 = &DAT_140a12138;
    if ((puVar5 != &DAT_140a12138) && (*(int *) (puVar5 + 1) == 1)) {
        piVar6 = (int *) FUN_1400580e0(param_2, param_3);
        if ((piVar6[2] != 0) && ((piVar6[2] != 1 || (*piVar6 != (int) uVar12)))) {
            uVar12 = 1;
        }
        FUN_14018ee90(param_1, &DAT_1409d667c, uVar12 & 0xffffffff);
        goto LAB_14011de04;
    }
    plVar7 = (longlong *) FUN_1400580e0(param_2, param_3);
    if ((*(int *) (plVar7 + 1) == 6) && (*(char *) (*plVar7 + 10) != (char) uVar12)) {
        puVar5 = (undefined8 *) FUN_1400580e0(param_2, param_3);
        if ((puVar5 == puVar13) || (*(int *) (puVar5 + 1) == -1)) {
            pcVar9 = s_no_value_140c1dc88;
        } else {
            pcVar9 = (&PTR_DAT_140a123b0)[*(int *) (puVar5 + 1)];
        }
        *(ulonglong * )(param_1 + 8) = uVar12;
        *(ulonglong * )(param_1 + 0x10) = uVar12;
        *(ulonglong * )(param_1 + 0x18) = uVar12;
        lVar10 = -1;
        do {
            lVar10 = lVar10 + 1;
        } while (pcVar9[lVar10] != (char) uVar12);
    } else {
        puVar5 = (undefined8 *) FUN_1400580e0(param_2, param_3);
        if ((puVar5 == puVar13) || (*(int *) (puVar5 + 1) != 6)) {
            puVar5 = (undefined8 *) FUN_1400580e0(param_2, param_3);
            if ((puVar5 == puVar13) || (*(int *) (puVar5 + 1) != 2)) {
                puVar5 = (undefined8 *) FUN_1400580e0(param_2, param_3);
                if ((puVar5 == puVar13) || (*(int *) (puVar5 + 1) != (int) uVar12)) {
                    iVar3 = FUN_1400583a0(param_2, param_3);
                    if (iVar3 != 0) {
                        uVar8 = FUN_140058480();
                        FUN_14018ee90(param_1, &DAT_1409d670c, uVar8);
                        goto LAB_14011de04;
                    }
                    iVar3 = FUN_1400583e0(param_2, param_3);
                    if (iVar3 == 0) {
                        puVar5 = (undefined8 *) FUN_1400580e0(param_2, param_3);
                        puVar13 = &DAT_140a12138;
                        if ((puVar5 != &DAT_140a12138) && (*(int *) (puVar5 + 1) == 5)) {
                            if (puVar4 != (undefined *) 0x0) {
                                uVar12 = FUN_1400586a0(param_2, param_3);
                                lVar10 = *(longlong * )(puVar4 + 8);
                                local_a8 = lVar10;
                                lVar1 = *(longlong * )(lVar10 + 8);
                                while (lVar1 != 0) {
                                    if (*(ulonglong * )(lVar1 + 0x20) < uVar12) {
                                        lVar1 = *(longlong * )(lVar1 + 0x18);
                                    } else {
                                        local_a8 = lVar1;
                                        lVar1 = *(longlong * )(lVar1 + 0x10);
                                    }
                                }
                                if ((local_a8 == lVar10) || (uVar12 < *(ulonglong * )(local_a8 + 0x20))) {
                                    local_a8 = lVar10;
                                }
                                if (local_a8 != lVar10) {
                                    uVar8 = FUN_1400586a0(param_2, param_3);
                                    FUN_14018ee90(param_1, "<recursed table 0x%x>", uVar8);
                                    goto LAB_14011de04;
                                }
                                local_a8 = FUN_1400586a0(param_2, param_3);
                                FUN_140007810(puVar4, local_a0, &local_a8);
                            }
                            uVar8 = FUN_1400586a0(param_2, param_3);
                            FUN_14018ee90(local_a0, "table 0x%x [ ", uVar8);
                            *(undefined4 * )(*(longlong * )(param_2 + 0x10) + 8) = 0;
                            *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + 0x10;
                            iVar3 = FUN_1400590a0(param_2, param_3);
                            if (iVar3 != 0) {
                                bVar2 = true;
                                do {
                                    FUN_14011d810(local_60, param_2,
                                                  (int) (*(longlong * )(param_2 + 0x10) - *(longlong * )(param_2 + 0x18)
                                                          >> 4) + -1, puVar4);
                                    FUN_14011d810(local_80, param_2,
                                                  *(longlong * )(param_2 + 0x10) - *(longlong * )(param_2 + 0x18) >> 4,
                                                  puVar4);
                                    puVar11 = &DAT_1409d67ec;
                                    if (bVar2) {
                                        puVar11 = &DAT_1409d050a;
                                    }
                                    lVar10 = FUN_14018ee90(local_40, "%s%s = %s", puVar11, local_58, local_78);
                                    FUN_14001b050(local_a0, *(undefined8 * )(lVar10 + 8),
                                                  *(undefined8 * )(lVar10 + 0x10));
                                    if (local_38 != 0) {
                                        FUN_14018b900(local_38, 0);
                                    }
                                    *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + -0x10;
                                    bVar2 = false;
                                    if (local_78 != 0) {
                                        FUN_14018b900(local_78, 0);
                                    }
                                    if (local_58 != 0) {
                                        FUN_14018b900(local_58, 0);
                                    }
                                    iVar3 = FUN_1400590a0(param_2, param_3);
                                } while (iVar3 != 0);
                            }
                            FUN_14001b050(local_a0, &DAT_1409d6804, &DAT_1409d6806);
                            *(undefined8 * )(param_1 + 8) = local_98;
                            *(undefined8 * )(param_1 + 0x10) = local_90;
                            *(undefined8 * )(param_1 + 0x18) = local_88;
                            goto LAB_14011de04;
                        }
                        puVar5 = (undefined8 *) FUN_1400580e0(param_2, param_3);
                        if ((puVar5 == puVar13) || (*(int *) (puVar5 + 1) != 8)) {
                            lVar10 = FUN_1400580e0(param_2, param_3);
                            if ((*(int *) (lVar10 + 8) == 7) || (*(int *) (lVar10 + 8) == 2)) {
                                puVar5 = (undefined8 *) FUN_1400580e0(param_2, param_3);
                                if ((puVar5 == puVar13) || (*(int *) (puVar5 + 1) == -1)) {
                                    pcVar9 = s_no_value_140c1dc88;
                                } else {
                                    pcVar9 = (&PTR_DAT_140a123b0)[*(int *) (puVar5 + 1)];
                                }
                                lVar10 = -1;
                                *(undefined8 * )(param_1 + 8) = 0;
                                *(undefined8 * )(param_1 + 0x10) = 0;
                                *(undefined8 * )(param_1 + 0x18) = 0;
                                do {
                                    lVar10 = lVar10 + 1;
                                } while (pcVar9[lVar10] != '\0');
                            } else {
                                puVar5 = (undefined8 *) FUN_1400580e0(param_2, param_3);
                                if ((puVar5 == puVar13) || (*(int *) (puVar5 + 1) == -1)) {
                                    pcVar9 = s_no_value_140c1dc88;
                                } else {
                                    pcVar9 = (&PTR_DAT_140a123b0)[*(int *) (puVar5 + 1)];
                                }
                                lVar10 = -1;
                                *(undefined8 * )(param_1 + 8) = 0;
                                *(undefined8 * )(param_1 + 0x10) = 0;
                                *(undefined8 * )(param_1 + 0x18) = 0;
                                do {
                                    lVar10 = lVar10 + 1;
                                } while (pcVar9[lVar10] != '\0');
                            }
                        } else {
                            puVar5 = (undefined8 *) FUN_1400580e0(param_2, param_3);
                            if ((puVar5 == puVar13) || (*(int *) (puVar5 + 1) == -1)) {
                                pcVar9 = s_no_value_140c1dc88;
                            } else {
                                pcVar9 = (&PTR_DAT_140a123b0)[*(int *) (puVar5 + 1)];
                            }
                            lVar10 = -1;
                            *(undefined8 * )(param_1 + 8) = 0;
                            *(undefined8 * )(param_1 + 0x10) = 0;
                            *(undefined8 * )(param_1 + 0x18) = 0;
                            do {
                                lVar10 = lVar10 + 1;
                            } while (pcVar9[lVar10] != '\0');
                        }
                        goto LAB_14011ddf9;
                    }
                    plVar7 = (longlong *) FUN_1400580e0(param_2);
                    if (*(int *) (plVar7 + 1) == 4) {
                        LAB_14011dace:
                        lVar10 = *plVar7 + 0x20;
                    } else {
                        iVar3 = FUN_14005e620(param_2, plVar7);
                        if (iVar3 != 0) {
                            if (*(ulonglong * )(*(longlong * )(param_2 + 0x20) + 0x70) <=
                                *(ulonglong * )(*(longlong * )(param_2 + 0x20) + 0x78)) {
                                FUN_14005e2c0(param_2);
                            }
                            plVar7 = (longlong *) FUN_1400580e0(param_2, param_3);
                            goto LAB_14011dace;
                        }
                        lVar10 = 0;
                    }
                    FUN_14018ee90(param_1, &DAT_140a1e3ac, lVar10);
                    goto LAB_14011de04;
                }
                puVar5 = (undefined8 *) FUN_1400580e0(param_2, param_3);
                if ((puVar5 == puVar13) || (*(int *) (puVar5 + 1) == -1)) {
                    pcVar9 = s_no_value_140c1dc88;
                } else {
                    pcVar9 = (&PTR_DAT_140a123b0)[*(int *) (puVar5 + 1)];
                }
                *(ulonglong * )(param_1 + 8) = uVar12;
                *(ulonglong * )(param_1 + 0x10) = uVar12;
                *(ulonglong * )(param_1 + 0x18) = uVar12;
                lVar10 = -1;
                do {
                    lVar10 = lVar10 + 1;
                } while (pcVar9[lVar10] != (char) uVar12);
            } else {
                puVar5 = (undefined8 *) FUN_1400580e0(param_2, param_3);
                if ((puVar5 == puVar13) || (*(int *) (puVar5 + 1) == -1)) {
                    pcVar9 = s_no_value_140c1dc88;
                } else {
                    pcVar9 = (&PTR_DAT_140a123b0)[*(int *) (puVar5 + 1)];
                }
                *(ulonglong * )(param_1 + 8) = uVar12;
                *(ulonglong * )(param_1 + 0x10) = uVar12;
                *(ulonglong * )(param_1 + 0x18) = uVar12;
                lVar10 = -1;
                do {
                    lVar10 = lVar10 + 1;
                } while (pcVar9[lVar10] != (char) uVar12);
            }
        } else {
            puVar5 = (undefined8 *) FUN_1400580e0(param_2, param_3);
            if ((puVar5 == puVar13) || (*(int *) (puVar5 + 1) == -1)) {
                pcVar9 = s_no_value_140c1dc88;
            } else {
                pcVar9 = (&PTR_DAT_140a123b0)[*(int *) (puVar5 + 1)];
            }
            *(ulonglong * )(param_1 + 8) = uVar12;
            *(ulonglong * )(param_1 + 0x10) = uVar12;
            *(ulonglong * )(param_1 + 0x18) = uVar12;
            lVar10 = -1;
            do {
                lVar10 = lVar10 + 1;
            } while (pcVar9[lVar10] != (char) uVar12);
        }
    }
    LAB_14011ddf9:
    FUN_14001b240(param_1, pcVar9, pcVar9 + lVar10);
    LAB_14011de04:
    FUN_140008410(local_c8);
    FUN_14018b900(local_c0, 0);
    return param_1;
}


undefined8 FUN_14011df20(longlong param_1) {
    undefined8 *puVar1;
    int iVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    uVar4 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar3 = uVar4;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar3 * 8) + 400) ==
                param_1) {
                uVar4 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar3 * 8);
                break;
            }
            uVar3 = (ulonglong)((int) uVar3 + 1);
        } while (uVar3 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    puVar1 = *(undefined8 * *)(param_1 + 0x18);
    if (((puVar1 < *(undefined8 * *)(param_1 + 0x10)) && (puVar1 != &DAT_140a12138)) &&
        (0 < *(int *) (puVar1 + 1))) {
        iVar2 = FUN_140056d60(param_1, 1);
        if (iVar2 - 1U < 3) {
            *(uint * )(uVar4 + 0x6c) = 1 >> ((byte)(iVar2 - 1U) & 0x1f);
        }
    }
    return 0;
}


void FUN_14011e140(longlong param_1) {
    uint *puVar1;
    ushort uVar2;

    uVar2 = GetKeyState(0x14);
    puVar1 = *(uint * *)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)((uVar2 & 1) != 0);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14011e190(longlong param_1) {
    longlong lVar1;
    int iVar2;
    undefined *puVar3;
    undefined local_48[8];
    undefined *local_40;
    undefined *local_38;
    undefined *local_30;
    undefined local_28[8];
    longlong local_20;

    if (_DAT_140c674a0 != 0) {
        if (1 < _DAT_140c675dc) {
            local_40 = (undefined *) FUN_14018b280(8);
            local_30 = local_40 + 8;
            if (local_40 != (undefined *) 0x0) {
                *local_40 = 0;
            }
            iVar2 = 1;
            local_38 = local_40;
            if (0 < (int) (*(longlong * )(param_1 + 0x10) - *(longlong * )(param_1 + 0x18) >> 4)) {
                do {
                    lVar1 = FUN_14011d810(local_28, param_1, iVar2, 0);
                    FUN_14001b050(local_48, *(undefined8 * )(lVar1 + 8));
                    if (local_20 != 0) {
                        FUN_14018b900(local_20, 0);
                    }
                    iVar2 = iVar2 + 1;
                } while (iVar2 <= (int) (*(longlong * )(param_1 + 0x10) - *(longlong * )(param_1 + 0x18) >> 4));
            }
            puVar3 = local_40;
            FUN_140059390(&DAT_1409d681c, local_40);
            if (puVar3 != (undefined *) 0x0) {
                FUN_14018b900(puVar3, 0);
            }
        }
        return 0;
    }
    OutputDebugStringA("WARNING! Log called before CRT startup");
    return 0;
}


undefined8 FUN_14011e290(undefined8 param_1, undefined8 param_2, ulonglong param_3) {
    double dVar1;
    bool bVar2;
    int iVar3;
    int iVar4;
    undefined8 uVar5;
    longlong *plVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    longlong *plVar9;
    longlong lVar10;
    double *pdVar11;
    longlong *plVar12;
    undefined8 *puVar13;
    longlong lVar14;
    longlong lVar15;
    ulonglong uVar16;
    ulonglong uVar17;
    undefined4 extraout_XMM0_Da;
    undefined4 extraout_XMM0_Da_00;
    undefined4 uVar18;
    float fVar19;
    double local_res10;
    double local_78;
    int local_70;
    double local_68;
    undefined4 uStack96;
    undefined4 uStack92;
    undefined **local_48;
    uint local_40;
    undefined4 uStack60;
    ulonglong local_38;
    undefined4 local_30;

    uVar16 = 0;
    uVar5 = FUN_140056bb0(param_3, 1, 0);
    FUN_14018f2d0(&local_48, uVar5);
    lVar14 = CONCAT44(uStack60, local_40);
    plVar6 = (longlong *) FUN_14019d200();
    if (lVar14 != 0) {
        FUN_14018b900(lVar14, 0);
    }
    if (plVar6 == (longlong *) 0x0) {
        return 0;
    }
    lVar14 = *(longlong * )(param_3 + 0x18);
    puVar7 = (undefined8 * )(lVar14 + 0x10);
    if (((puVar7 < *(undefined8 * *)(param_3 + 0x10)) && (puVar7 != &DAT_140a12138)) &&
        (*(int *) (lVar14 + 0x18) == 5)) {
        local_30 = 1;
        local_40 = 0xfffffffe;
        local_48 = &PTR_FUN_140b569f0;
        local_38 = param_3;
        if (((puVar7 < *(undefined8 * *)(param_3 + 0x10)) && (puVar7 != &DAT_140a12138)) &&
            (*(int *) (lVar14 + 0x18) == 5)) {
            FUN_1400579e0(param_3, &PTR_FUN_140b569f0, 0xfffffffe);
            puVar7 = *(undefined8 * *)(local_38 + 0x10);
            puVar8 = (undefined8 * )(*(longlong * )(local_38 + 0x18) + 0x10);
            puVar13 = &DAT_140a12138;
            if (puVar8 < puVar7) {
                puVar13 = puVar8;
            }
            *puVar7 = *puVar13;
            *(undefined4 * )(puVar7 + 1) = *(undefined4 * )(puVar13 + 1);
            *(longlong * )(local_38 + 0x10) = *(longlong * )(local_38 + 0x10) + 0x10;
            uVar16 = local_38;
            local_40 = FUN_1400578c0(local_38);
        }
        iVar3 = (**(code * *)(*plVar6 + 8))(plVar6);
        if (iVar3 == 9) {
            if ((local_38 == 0) || (local_40 == 0xfffffffe)) goto LAB_14011e852;
            uVar16 = local_38;
            puVar13 = (undefined8 *) FUN_14005c3c0(*(undefined8 * )(*(longlong * )(local_38 + 0x20) + 0xa0));
            puVar7 = *(undefined8 * *)(uVar16 + 0x10);
            lVar14 = -1;
            *puVar7 = *puVar13;
            *(undefined4 * )(puVar7 + 1) = *(undefined4 * )(puVar13 + 1);
            *(longlong * )(uVar16 + 0x10) = *(longlong * )(uVar16 + 0x10) + 0x10;
            iVar3 = -1;
            puVar7 = (undefined8 * )(*(longlong * )(local_38 + 0x10) + -0x10);
            if (puVar7 != &DAT_140a12138) {
                iVar3 = *(int *) (*(longlong * )(local_38 + 0x10) + -8);
            }
            *(undefined8 * *)(local_38 + 0x10) = puVar7;
            if (iVar3 != 5) goto LAB_14011e852;
            iVar3 = (*(code *) local_48[1])(&local_48);
            if (iVar3 != 0) {
                uVar17 = local_38;
                puVar13 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 * )(*(longlong * )(local_38 + 0x20) + 0xa0), local_40);
                uVar16 = local_38;
                puVar7 = *(undefined8 * *)(uVar17 + 0x10);
                *puVar7 = *puVar13;
                *(undefined4 * )(puVar7 + 1) = *(undefined4 * )(puVar13 + 1);
                *(longlong * )(uVar17 + 0x10) = *(longlong * )(uVar17 + 0x10) + 0x10;
                lVar10 = FUN_14018f0e0(&local_68, &DAT_1409d6754);
                if (*(longlong * )(lVar10 + 8) == 0) {
                    *(undefined4 * )(*(longlong * )(uVar16 + 0x10) + 8) = 0;
                    *(longlong * )(uVar16 + 0x10) = *(longlong * )(uVar16 + 0x10) + 0x10;
                } else {
                    lVar15 = -1;
                    do {
                        lVar15 = lVar15 + 1;
                    } while (*(char *) (*(longlong * )(lVar10 + 8) + lVar15) != '\0');
                    FUN_140058710(uVar16);
                }
                if (CONCAT44(uStack92, uStack96) != 0) {
                    FUN_14018b900(CONCAT44(uStack92, uStack96), 0);
                }
                lVar10 = *(longlong * )(local_38 + 0x10) + -0x10;
                FUN_14005e8e0(local_38, *(longlong * )(local_38 + 0x10) + -0x20, lVar10, lVar10);
                lVar10 = *(longlong * )(local_38 + 0x10);
                pdVar11 = (double *) (lVar10 + -0x10);
                if ((pdVar11 == (double *) &DAT_140a12138) || (*(int *) (lVar10 + -8) != 3)) {
                    *(longlong * )(local_38 + 0x10) = lVar10 + -0x20;
                } else {
                    if (*(int *) (lVar10 + -8) != 3) {
                        if ((*(int *) (lVar10 + -8) != 4) ||
                            (iVar3 = FUN_14005ac80((longlong) * pdVar11 + 0x20), iVar3 == 0)) {
                            local_78 = (double) ((ulonglong) local_78 & 0xffffffff00000000);
                            *(longlong * )(local_38 + 0x10) = *(longlong * )(local_38 + 0x10) + -0x20;
                            goto LAB_14011e600;
                        }
                        local_70 = 3;
                        pdVar11 = &local_78;
                        local_78 = local_res10;
                    }
                    local_78 = (double) ((ulonglong) local_78 & 0xffffffff00000000 |
                                         (ulonglong)(uint)(int) * pdVar11);
                    *(longlong * )(local_38 + 0x10) = *(longlong * )(local_38 + 0x10) + -0x20;
                }
            }
            LAB_14011e600:
            iVar3 = (*(code *) local_48[1])(&local_48);
            if (iVar3 != 0) {
                uVar17 = local_38;
                puVar13 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 * )(*(longlong * )(local_38 + 0x20) + 0xa0), local_40);
                uVar16 = local_38;
                puVar7 = *(undefined8 * *)(uVar17 + 0x10);
                *puVar7 = *puVar13;
                *(undefined4 * )(puVar7 + 1) = *(undefined4 * )(puVar13 + 1);
                *(longlong * )(uVar17 + 0x10) = *(longlong * )(uVar17 + 0x10) + 0x10;
                lVar10 = FUN_14018f0e0(&local_68, &DAT_1409d678c);
                if (*(longlong * )(lVar10 + 8) == 0) {
                    *(undefined4 * )(*(longlong * )(uVar16 + 0x10) + 8) = 0;
                    *(longlong * )(uVar16 + 0x10) = *(longlong * )(uVar16 + 0x10) + 0x10;
                } else {
                    lVar15 = -1;
                    do {
                        lVar15 = lVar15 + 1;
                    } while (*(char *) (*(longlong * )(lVar10 + 8) + lVar15) != '\0');
                    FUN_140058710(uVar16);
                }
                if (CONCAT44(uStack92, uStack96) != 0) {
                    FUN_14018b900(CONCAT44(uStack92, uStack96), 0);
                }
                lVar10 = *(longlong * )(local_38 + 0x10) + -0x10;
                FUN_14005e8e0(local_38, *(longlong * )(local_38 + 0x10) + -0x20, lVar10, lVar10);
                lVar10 = *(longlong * )(local_38 + 0x10);
                pdVar11 = (double *) (lVar10 + -0x10);
                if ((pdVar11 == (double *) &DAT_140a12138) || (*(int *) (lVar10 + -8) != 3)) {
                    *(longlong * )(local_38 + 0x10) = lVar10 + -0x20;
                } else {
                    if (*(int *) (lVar10 + -8) != 3) {
                        if ((*(int *) (lVar10 + -8) != 4) ||
                            (iVar3 = FUN_14005ac80((longlong) * pdVar11 + 0x20), iVar3 == 0)) {
                            local_78 = (double) ((ulonglong) local_78 & 0xffffffff);
                            *(longlong * )(local_38 + 0x10) = *(longlong * )(local_38 + 0x10) + -0x20;
                            goto LAB_14011e720;
                        }
                        uStack96 = 3;
                        pdVar11 = &local_68;
                        local_68 = local_res10;
                    }
                    local_78 = (double) ((ulonglong) local_78 & 0xffffffff |
                                         (ulonglong)(uint)(int) * pdVar11 << 0x20);
                    *(longlong * )(local_38 + 0x10) = *(longlong * )(local_38 + 0x10) + -0x20;
                }
            }
            LAB_14011e720:
            iVar3 = (*(code *) local_48[1])(&local_48);
            if (iVar3 != 0) {
                uVar17 = local_38;
                puVar13 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 * )(*(longlong * )(local_38 + 0x20) + 0xa0), local_40);
                uVar16 = local_38;
                puVar7 = *(undefined8 * *)(uVar17 + 0x10);
                *puVar7 = *puVar13;
                *(undefined4 * )(puVar7 + 1) = *(undefined4 * )(puVar13 + 1);
                *(longlong * )(uVar17 + 0x10) = *(longlong * )(uVar17 + 0x10) + 0x10;
                lVar10 = FUN_14018f0e0(&local_68, &DAT_1409d67bc);
                lVar10 = *(longlong * )(lVar10 + 8);
                if (lVar10 == 0) {
                    *(undefined4 * )(*(longlong * )(uVar16 + 0x10) + 8) = 0;
                    *(longlong * )(uVar16 + 0x10) = *(longlong * )(uVar16 + 0x10) + 0x10;
                } else {
                    do {
                        lVar14 = lVar14 + 1;
                    } while (*(char *) (lVar10 + lVar14) != '\0');
                    FUN_140058710(uVar16, lVar10, lVar14);
                }
                if (CONCAT44(uStack92, uStack96) != 0) {
                    FUN_14018b900(CONCAT44(uStack92, uStack96), 0);
                }
                lVar14 = *(longlong * )(local_38 + 0x10) + -0x10;
                FUN_14005e8e0(local_38, *(longlong * )(local_38 + 0x10) + -0x20, lVar14, lVar14);
                lVar14 = *(longlong * )(local_38 + 0x10);
                pdVar11 = (double *) (lVar14 + -0x10);
                if ((pdVar11 == (double *) &DAT_140a12138) || (*(int *) (lVar14 + -8) != 3)) {
                    *(longlong * )(local_38 + 0x10) = lVar14 + -0x20;
                } else {
                    if (*(int *) (lVar14 + -8) == 3) {
                        LAB_14011e819:
                        iVar3 = (int) *pdVar11;
                    } else {
                        iVar3 = 0;
                        if ((*(int *) (lVar14 + -8) == 4) &&
                            (iVar4 = FUN_14005ac80((longlong) * pdVar11 + 0x20), iVar3 = 0, iVar4 != 0)) {
                            uStack96 = 3;
                            pdVar11 = &local_68;
                            local_68 = local_res10;
                            goto LAB_14011e819;
                        }
                    }
                    *(longlong * )(local_38 + 0x10) = *(longlong * )(local_38 + 0x10) + -0x20;
                    local_70 = iVar3;
                }
            }
            iVar3 = *(int *) (plVar6 + 2);
            if (*DAT_140c63750 < iVar3) {
                iVar3 = *DAT_140c63750;
            }
            FUN_14001ac30(plVar6, iVar3, &local_78);
            LAB_14011e852:
            local_48 = &PTR_FUN_140b56a08;
            if (local_38 == 0) {
                return 0;
            }
            FUN_1400579e0(local_38);
            return 0;
        }
        local_48 = &PTR_FUN_140b56a08;
        if (local_38 != 0) {
            uVar16 = (ulonglong) local_40;
            FUN_1400579e0();
        }
    }
    plVar9 = (longlong * )(*(longlong * )(param_3 + 0x18) + 0x10);
    plVar12 = &DAT_140a12138;
    if (plVar9 < *(longlong * *)(param_3 + 0x10)) {
        plVar12 = plVar9;
    }
    if ((*(int *) (plVar12 + 1) == 3) ||
        ((*(int *) (plVar12 + 1) == 4 &&
          (iVar3 = FUN_14005ac80(*plVar12 + 0x20, &local_res10), iVar3 != 0)))) {
        dVar1 = (double) FUN_140058480(param_3);
        fVar19 = (float) dVar1;
        iVar3 = (**(code * *)(*plVar6 + 8))(plVar6);
        if (iVar3 == 0) {
            if (fVar19 == 0.0) {
                uVar16 = uVar16 & 0xffffffffffffff00;
            } else {
                uVar16 = 1;
            }
            LAB_14011eb15:
            iVar3 = *(int *) (plVar6 + 2);
            if (*DAT_140c63750 < iVar3) {
                iVar3 = *DAT_140c63750;
            }
            FUN_14001a6c0(plVar6, iVar3, uVar16);
            return 0;
        }
        if (iVar3 == 1) {
            iVar3 = *(int *) (plVar6 + 2);
            if (*DAT_140c63750 < iVar3) {
                iVar3 = *DAT_140c63750;
            }
            FUN_14002c690(plVar6, iVar3, uVar16 & 0xffffffff00000000 | (ulonglong)(uint)(int)
            fVar19);
            return 0;
        }
        if (iVar3 == 3) {
            iVar3 = *(int *) (plVar6 + 2);
            if (*DAT_140c63750 < iVar3) {
                iVar3 = *DAT_140c63750;
            }
            FUN_14001a770(plVar6, iVar3, uVar16 & 0xffffffff00000000 | (ulonglong)(uint)(int)
            fVar19);
            return 0;
        }
        if (iVar3 == 5) {
            iVar3 = *(int *) (plVar6 + 2);
            if (*DAT_140c63750 < iVar3) {
                iVar3 = *DAT_140c63750;
            }
            FUN_14001a820(extraout_XMM0_Da_00, param_2, fVar19, plVar6, iVar3);
            return 0;
        }
        goto LAB_14011ea7f;
    }
    lVar14 = *(longlong * )(param_3 + 0x18);
    puVar7 = *(undefined8 * *)(param_3 + 0x10);
    puVar13 = (undefined8 * )(lVar14 + 0x10);
    if (puVar13 < puVar7) {
        if ((puVar13 != &DAT_140a12138) &&
            (*(int *) (lVar14 + 0x18) == 3 || *(int *) (lVar14 + 0x18) == 4)) {
            iVar3 = (**(code * *)(*plVar6 + 8))(plVar6);
            if (iVar3 == 0xd) {
                puVar13 = (undefined8 * )(*(longlong * )(param_3 + 0x18) + 0x10);
                puVar7 = &DAT_140a12138;
                if (puVar13 < *(undefined8 * *)(param_3 + 0x10)) {
                    puVar7 = puVar13;
                }
                if (((*(int *) (puVar7 + 1) != 4) && (iVar3 = FUN_14005e620(param_3, puVar7), iVar3 != 0)) &&
                    (*(ulonglong * )(*(longlong * )(param_3 + 0x20) + 0x70) <=
                     *(ulonglong * )(*(longlong * )(param_3 + 0x20) + 0x78))) {
                    FUN_14005e2c0(param_3);
                }
                uVar5 = FUN_14018f2d0(&local_48);
                iVar3 = *(int *) (plVar6 + 2);
                if (*DAT_140c63750 < iVar3) {
                    iVar3 = *DAT_140c63750;
                }
                FUN_14001a9b0(plVar6, iVar3, uVar5);
                if (CONCAT44(uStack60, local_40) == 0) {
                    return 0;
                }
                FUN_14018b900(CONCAT44(uStack60, local_40), 0);
                return 0;
            }
            goto LAB_14011ea7f;
        }
        if ((puVar13 < puVar7) && ((puVar13 != &DAT_140a12138 && (*(int *) (lVar14 + 0x18) == 1)))) {
            puVar8 = &DAT_140a12138;
            if (puVar13 < puVar7) {
                puVar8 = puVar13;
            }
            if ((*(int *) (puVar8 + 1) == 0) ||
                ((bVar2 = true, *(int *) (puVar8 + 1) == 1 && (*(int *) puVar8 == 0)))) {
                bVar2 = false;
            }
            iVar3 = (**(code * *)(*plVar6 + 8))(plVar6);
            if (iVar3 == 0) {
                uVar16 = uVar16 & 0xffffffffffffff00 | (ulonglong) bVar2;
                goto LAB_14011eb15;
            }
            if (iVar3 == 1) {
                iVar3 = *(int *) (plVar6 + 2);
                if (*DAT_140c63750 < iVar3) {
                    iVar3 = *DAT_140c63750;
                }
                FUN_14002c690(plVar6, iVar3, bVar2);
                return 0;
            }
            if (iVar3 == 3) {
                iVar3 = *(int *) (plVar6 + 2);
                if (*DAT_140c63750 < iVar3) {
                    iVar3 = *DAT_140c63750;
                }
                FUN_14001a770(plVar6, iVar3, bVar2);
                return 0;
            }
            if (iVar3 == 5) {
                if (bVar2) {
                    uVar18 = 0x3f800000;
                } else {
                    uVar18 = 0;
                }
                iVar3 = *(int *) (plVar6 + 2);
                if (*DAT_140c63750 < iVar3) {
                    iVar3 = *DAT_140c63750;
                }
                FUN_14001a820(extraout_XMM0_Da, param_2, uVar18, plVar6, iVar3);
                return 0;
            }
            goto LAB_14011ea7f;
        }
    }
    iVar3 = FUN_1401184b0(param_3);
    if ((iVar3 != 0) && (iVar3 = (**(code * *)(*plVar6 + 8))(plVar6), iVar3 == 0xc)) {
        pdVar11 = (double *) FUN_140056ab0(param_3, 2, "CColor");
        iVar3 = *(int *) (plVar6 + 2);
        local_68 = *pdVar11;
        uStack96 = *(undefined4 * )(pdVar11 + 1);
        uStack92 = *(undefined4 * )((longlong) pdVar11 + 0xc);
        if (*DAT_140c63750 < iVar3) {
            iVar3 = *DAT_140c63750;
        }
        FUN_14002c7c0(plVar6, iVar3, &local_68);
        return 0;
    }
    LAB_14011ea7f:
    FUN_140058540(param_3, 2);
    uVar5 = FUN_14018f2d0(&local_48);
    iVar3 = *(int *) (plVar6 + 2);
    if (*DAT_140c63750 < iVar3) {
        iVar3 = *DAT_140c63750;
    }
    (**(code * *)(*plVar6 + 0x18))(plVar6, iVar3, uVar5);
    if (CONCAT44(uStack60, local_40) != 0) {
        FUN_14018b900(CONCAT44(uStack60, local_40), 0);
    }
    return 0;
}


undefined8 FUN_14011eb60(longlong param_1) {
    char cVar1;
    uint *puVar2;
    double *pdVar3;
    undefined4 uVar4;
    undefined8 uVar5;
    longlong *plVar6;
    int iVar7;
    longlong lVar8;
    double dVar9;
    undefined local_48[8];
    longlong local_40;
    undefined local_28[8];
    longlong local_20;

    uVar5 = FUN_140056bb0(param_1, 1);
    FUN_14018f2d0(local_48, uVar5);
    lVar8 = local_40;
    plVar6 = (longlong *) FUN_14019d200();
    if (lVar8 != 0) {
        FUN_14018b900(lVar8, 0);
    }
    if (plVar6 == (longlong *) 0x0) {
        return 0;
    }
    uVar4 = (**(code * *)(*plVar6 + 8))();
    switch (uVar4) {
        case 0:
            iVar7 = *(int *) (plVar6 + 2);
            puVar2 = *(uint * *)(param_1 + 0x10);
            if (*DAT_140c63750 < iVar7) {
                iVar7 = *DAT_140c63750;
            }
            cVar1 = *(char *) ((longlong) iVar7 + 0x20 + (longlong) plVar6);
            puVar2[2] = 1;
            *puVar2 = (uint)(cVar1 != '\0');
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            break;
        case 1:
            iVar7 = *(int *) (plVar6 + 2);
            if (*DAT_140c63750 < iVar7) {
                iVar7 = *DAT_140c63750;
            }
            dVar9 = (double) *(int *) ((longlong) plVar6 + (longlong) iVar7 * 4 + 0x20);
            goto LAB_14011ec3b;
        default:
            (**(code * *)(*plVar6 + 0x10))(plVar6, local_48);
            FUN_14018f0e0(local_28);
            if (local_20 == 0) {
                *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            } else {
                lVar8 = -1;
                do {
                    lVar8 = lVar8 + 1;
                } while (*(char *) (local_20 + lVar8) != '\0');
                FUN_140058710(param_1, local_20);
                FUN_14018b900(local_20, 0);
            }
            if (local_40 == 0) {
                return 1;
            }
            goto LAB_14011ee0a;
        case 3:
            iVar7 = *(int *) (plVar6 + 2);
            if (*DAT_140c63750 < iVar7) {
                iVar7 = *DAT_140c63750;
            }
            dVar9 = (double) (ulonglong) * (uint * )((longlong) plVar6 + (longlong) iVar7 * 4 + 0x20);
            goto LAB_14011ec3b;
        case 5:
            iVar7 = *(int *) (plVar6 + 2);
            if (*DAT_140c63750 < iVar7) {
                iVar7 = *DAT_140c63750;
            }
            dVar9 = (double) *(float *) ((longlong) plVar6 + (longlong) iVar7 * 4 + 0x20);
        LAB_14011ec3b:
            pdVar3 = *(double **) (param_1 + 0x10);
            *pdVar3 = dVar9;
            *(undefined4 * )(pdVar3 + 1) = 3;
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            break;
        case 9:
            iVar7 = *(int *) (plVar6 + 2);
            if (*DAT_140c63750 < iVar7) {
                iVar7 = *DAT_140c63750;
            }
            FUN_140058900(param_1, iVar7, 0);
            FUN_1400eff50(param_1);
            FUN_1400eff50(param_1);
            FUN_1400eff50(param_1);
            break;
        case 0xc:
            iVar7 = *(int *) (plVar6 + 2);
            if (*DAT_140c63750 < iVar7) {
                iVar7 = *DAT_140c63750;
            }
            FUN_1401181f0(param_1, plVar6 + ((longlong) iVar7 + 2) * 2);
            break;
        case 0xd:
            FUN_14018f0e0(local_48);
            if (local_40 == 0) {
                *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
                return 1;
            }
            lVar8 = -1;
            do {
                lVar8 = lVar8 + 1;
            } while (*(char *) (local_40 + lVar8) != '\0');
            FUN_140058710(param_1, local_40);
        LAB_14011ee0a:
            FUN_14018b900(local_40, 0);
    }
    return 1;
}


undefined8 FUN_14011ee70(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
    int iVar1;
    undefined4 uVar2;
    undefined8 uVar3;
    longlong *plVar4;
    undefined8 extraout_XMM0_Qa;
    undefined local_28[8];
    longlong local_20;

    uVar3 = FUN_140056bb0(param_3, 1);
    FUN_14018f2d0(local_28, uVar3);
    plVar4 = (longlong *) FUN_14019d200();
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    if (plVar4 != (longlong *) 0x0) {
        uVar2 = (**(code * *)(*plVar4 + 8))();
        switch (uVar2) {
            case 0:
                iVar1 = *(int *) (plVar4 + 2);
                if (*DAT_140c63750 < iVar1) {
                    iVar1 = *DAT_140c63750;
                }
                FUN_14001a6c0(plVar4, iVar1, *(undefined * )((longlong) plVar4 + 0x27));
                return 0;
            case 1:
                iVar1 = *(int *) (plVar4 + 2);
                if (*DAT_140c63750 < iVar1) {
                    iVar1 = *DAT_140c63750;
                }
                FUN_14002c690(plVar4, iVar1, *(undefined4 * )((longlong) plVar4 + 0x3c));
                return 0;
            case 3:
                iVar1 = *(int *) (plVar4 + 2);
                if (*DAT_140c63750 < iVar1) {
                    iVar1 = *DAT_140c63750;
                }
                FUN_14001a770(plVar4, iVar1, *(undefined4 * )((longlong) plVar4 + 0x3c));
                return 0;
            case 5:
                iVar1 = *(int *) (plVar4 + 2);
                if (*DAT_140c63750 < iVar1) {
                    iVar1 = *DAT_140c63750;
                }
                FUN_14001a820(extraout_XMM0_Qa, param_2, *(undefined4 * )((longlong) plVar4 + 0x3c), plVar4, iVar1);
                return 0;
            case 9:
                iVar1 = *(int *) (plVar4 + 2);
                if (*DAT_140c63750 < iVar1) {
                    iVar1 = *DAT_140c63750;
                }
                FUN_14001ac30(plVar4, iVar1, (longlong) plVar4 + 0x74);
                break;
            case 0xc:
                iVar1 = *(int *) (plVar4 + 2);
                if (*DAT_140c63750 < iVar1) {
                    iVar1 = *DAT_140c63750;
                }
                FUN_14002c7c0(plVar4, iVar1, plVar4 + 0x12);
                return 0;
            case 0xd:
                iVar1 = *(int *) (plVar4 + 2);
                if (*DAT_140c63750 < iVar1) {
                    iVar1 = *DAT_140c63750;
                }
                FUN_14001a9b0(plVar4, iVar1, plVar4 + 0x20);
                return 0;
        }
    }
    return 0;
}


undefined8 FUN_14011f020(undefined8 param_1, undefined8 param_2, longlong param_3) {
    uint uVar1;
    longlong lVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    undefined8 *puVar7;
    undefined uVar8;
    ulonglong uVar9;
    double dVar10;
    double extraout_XMM0_Qa;
    float fVar11;
    undefined local_58[8];
    longlong local_50;
    undefined local_38[8];
    short *local_30;

    lVar2 = FUN_14018f0e0(local_58, &DAT_1409d687c);
    uVar3 = *(undefined8 * )(lVar2 + 8);
    puVar4 = *(undefined8 * *)(param_3 + 0x18);
    if (((puVar4 < *(undefined8 * *)(param_3 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
        (0 < *(int *) (puVar4 + 1))) {
        uVar3 = FUN_140056bb0(param_3, 1, 0);
    }
    FUN_14018f2d0(local_38, uVar3);
    if (local_50 != 0) {
        FUN_14018b900(local_50, 0);
    }
    puVar4 = (undefined8 * )(*(longlong * )(param_3 + 0x18) + 0x10);
    if (((puVar4 < *(undefined8 * *)(param_3 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
        (0 < *(int *) (*(longlong * )(param_3 + 0x18) + 0x18))) {
        dVar10 = (double) FUN_140056c40(param_3, 2);
    } else {
        dVar10 = 0.0;
    }
    uVar6 = 0;
    puVar4 = (undefined8 * )(*(longlong * )(param_3 + 0x18) + 0x20);
    fVar11 = (float) dVar10;
    uVar9 = uVar6;
    if (((puVar4 < *(undefined8 * *)(param_3 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
        (0 < *(int *) (*(longlong * )(param_3 + 0x18) + 0x28))) {
        uVar1 = FUN_140056d60(param_3, 3);
        uVar9 = (ulonglong) uVar1;
        dVar10 = extraout_XMM0_Qa;
    }
    puVar4 = (undefined8 * )(*(longlong * )(param_3 + 0x18) + 0x30);
    uVar8 = 1;
    if (((puVar4 < *(undefined8 * *)(param_3 + 0x10)) && (uVar8 = 1, puVar4 != &DAT_140a12138)) &&
        (*(int *) (*(longlong * )(param_3 + 0x18) + 0x38) == 1)) {
        puVar7 = &DAT_140a12138;
        if (puVar4 < *(undefined8 * *)(param_3 + 0x10)) {
            puVar7 = puVar4;
        }
        if ((*(int *) (puVar7 + 1) == 0) ||
            ((uVar8 = 1, *(int *) (puVar7 + 1) == 1 && (*(int *) puVar7 == 0)))) {
            uVar8 = 0;
        }
    }
    if (*local_30 != 0) {
        lVar2 = DAT_140c63650;
        if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
            lVar2 = *(longlong * )(DAT_140c63650 + 0x2f8);
            uVar5 = uVar6;
            do {
                if (*(longlong * )(*(longlong * )(lVar2 + uVar5 * 8) + 400) == param_3) {
                    uVar6 = *(ulonglong * )(lVar2 + uVar5 * 8);
                    break;
                }
                uVar5 = (ulonglong)((int) uVar5 + 1);
            } while (uVar5 < *(ulonglong * )(DAT_140c63650 + 0x300));
        }
        FUN_14014e400(SUB84(dVar10, 0), param_2, fVar11, uVar6 + 0xa58, local_30, lVar2, uVar9, uVar8);
    }
    FUN_14018b900(local_30, 0);
    return 0;
}


void FUN_14011f4f0(longlong param_1) {
    byte bVar1;
    int iVar2;
    undefined8 *puVar3;
    longlong lVar4;
    longlong *plVar5;
    undefined4 uVar6;
    longlong *plVar7;
    longlong lVar8;
    undefined auStack664[32];
    longlong local_278;
    undefined4 local_270;
    undefined4 uStack620;
    undefined8 local_258;
    ulonglong local_250;
    undefined8 local_248;
    undefined8 local_240;
    undefined8 local_238;
    undefined local_228[512];
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong) auStack664;
    puVar3 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x10);
    if (((puVar3 < *(undefined8 * *)(param_1 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
        (0 < *(int *) (*(longlong * )(param_1 + 0x18) + 0x18))) {
        bVar1 = FUN_140056d60(param_1, 2);
    } else {
        bVar1 = 0;
    }
    plVar7 = *(longlong * *)(param_1 + 0x18);
    plVar5 = &DAT_140a12138;
    if (plVar7 + 4 < *(longlong * *)(param_1 + 0x10)) {
        plVar5 = plVar7 + 4;
    }
    if ((*(int *) (plVar5 + 1) == 0) || ((*(int *) (plVar5 + 1) == 1 && (*(int *) plVar5 == 0)))) {
        uVar6 = 0;
    } else {
        uVar6 = 1;
    }
    FUN_1407e4830(local_228, 0, 0x200);
    plVar5 = &DAT_140a12138;
    if (plVar7 < *(longlong * *)(param_1 + 0x10)) {
        plVar5 = plVar7;
    }
    local_248 = 0;
    local_240 = 0;
    local_238 = 0;
    local_250 = (ulonglong) bVar1;
    local_258 = CONCAT44(uVar6, 3);
    if (*(int *) (plVar5 + 1) == 3) {
        LAB_14011f6a9:
        plVar7 = &DAT_140a12138;
        if (*(longlong * *)(param_1 + 0x18) < *(longlong * *)(param_1 + 0x10)) {
            plVar7 = *(longlong * *)(param_1 + 0x18);
        }
        if (*(int *) (plVar7 + 1) == 3) {
            LAB_14011f6f0:
            lVar4 = *plVar7;
        } else {
            if (*(int *) (plVar7 + 1) == 4) {
                iVar2 = FUN_14005ac80(*plVar7 + 0x20, &local_278);
                if (iVar2 != 0) {
                    local_270 = 3;
                    plVar7 = &local_278;
                    goto LAB_14011f6f0;
                }
            }
            lVar4 = 0;
        }
        FUN_14034c610(lVar4);
        goto LAB_14011f709;
    }
    if (*(int *) (plVar5 + 1) == 4) {
        iVar2 = FUN_14005ac80(*plVar5 + 0x20, &local_278);
        if (iVar2 != 0) goto LAB_14011f6a9;
    }
    plVar7 = *(longlong * *)(param_1 + 0x18);
    if (((*(longlong * *)(param_1 + 0x10) <= plVar7) || (plVar7 == &DAT_140a12138)) ||
        (1 < *(int *) (plVar7 + 1) - 3U))
        goto LAB_14011f709;
    plVar5 = &DAT_140a12138;
    if (plVar7 < *(longlong * *)(param_1 + 0x10)) {
        plVar5 = plVar7;
    }
    if (*(int *) (plVar5 + 1) == 4) {
        LAB_14011f66a:
        lVar4 = *plVar5 + 0x20;
    } else {
        iVar2 = FUN_14005e620(param_1, plVar5);
        if (iVar2 != 0) {
            if (*(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x70) <=
                *(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            plVar5 = &DAT_140a12138;
            if (*(longlong * *)(param_1 + 0x18) < *(longlong * *)(param_1 + 0x10)) {
                plVar5 = *(longlong * *)(param_1 + 0x18);
            }
            goto LAB_14011f66a;
        }
        lVar4 = 0;
    }
    FUN_14018f2d0(&local_278, lVar4);
    lVar4 = CONCAT44(uStack620, local_270);
    FUN_14034c240(lVar4, local_228, 0x100, &local_258);
    if (lVar4 != 0) {
        FUN_14018b900(lVar4, 0);
    }
    LAB_14011f709:
    lVar4 = FUN_14018f0e0(&local_278, local_228);
    if (*(longlong * )(lVar4 + 8) == 0) {
        *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    } else {
        lVar8 = -1;
        do {
            lVar8 = lVar8 + 1;
        } while (*(char *) (*(longlong * )(lVar4 + 8) + lVar8) != '\0');
        FUN_140058710(param_1);
    }
    if (CONCAT44(uStack620, local_270) != 0) {
        FUN_14018b900(CONCAT44(uStack620, local_270), 0);
    }
    FUN_1407db4f0(local_28 ^ (ulonglong) auStack664);
    return;
}


undefined8 FUN_14011f7a0(longlong param_1) {
    short sVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    longlong *plVar4;
    longlong *plVar5;
    longlong *plVar6;
    longlong lVar7;
    longlong *plVar8;
    longlong lVar9;
    longlong *local_38;
    short *psStack48;

    puVar2 = *(undefined8 * *)(param_1 + 0x18);
    if (((puVar2 < *(undefined8 * *)(param_1 + 0x10)) && (puVar2 != &DAT_140a12138)) &&
        (*(int *) (puVar2 + 1) - 3U < 2)) {
        uVar3 = FUN_140056bb0(param_1, 1);
        FUN_14018f2d0(&local_38, uVar3);
        plVar6 = (longlong *) 0x0;
        plVar5 = plVar6;
        if (psStack48 != (short *) 0x0) {
            sVar1 = *psStack48;
            plVar8 = plVar6;
            while (sVar1 != 0) {
                plVar8 = (longlong * )((longlong) plVar8 + 1);
                sVar1 = psStack48[(longlong) plVar8];
            }
            plVar4 = (longlong *) FUN_14018b280((longlong) plVar8 * 2 + 0x12, 0);
            if (plVar4 != (longlong *) 0x0) {
                *plVar4 = (longlong) & PTR_LAB_140b55060;
                plVar4[1] = (longlong) plVar8;
                plVar5 = plVar4;
            }
            plVar5 = plVar5 + 2;
            FUN_1407db590(plVar5, psStack48);
            *(undefined2 * )((longlong) plVar8 * 2 + (longlong) plVar5) = 0;
            FUN_14018b900(psStack48, 0);
        }
        lVar7 = plVar5[-1];
        local_38 = plVar5;
        psStack48 = (short *) lVar7;
        plVar8 = (longlong *) FUN_14018b280(lVar7 * 2 + 0x12, 0);
        if (plVar8 != (longlong *) 0x0) {
            *plVar8 = (longlong) & PTR_LAB_140b55060;
            plVar8[1] = lVar7;
            plVar6 = plVar8;
        }
        plVar8 = plVar6 + 2;
        FUN_1401b2410(&local_38, plVar8);
        *(undefined2 * )((longlong) plVar8 + lVar7 * 2) = 0;
        (**(code * *)(plVar5[-2] + 8))();
        lVar7 = FUN_14018f0e0(&local_38, plVar8);
        if (*(longlong * )(lVar7 + 8) == 0) {
            *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        } else {
            lVar9 = -1;
            do {
                lVar9 = lVar9 + 1;
            } while (*(char *) (*(longlong * )(lVar7 + 8) + lVar9) != '\0');
            FUN_140058710(param_1);
        }
        if (psStack48 != (short *) 0x0) {
            FUN_14018b900(psStack48, 0);
        }
        if (plVar8 != (longlong *) 0x0) {
            (**(code * *)(*plVar6 + 8))(plVar6);
        }
        return 1;
    }
    return 0;
}


undefined8 FUN_14011fc40(longlong param_1) {
    double *pdVar1;
    undefined2 *puVar2;
    undefined8 uVar3;
    longlong lVar4;
    undefined8 *puVar5;
    ulonglong uVar6;
    undefined8 *puVar7;
    ulonglong uVar8;
    float local_res10[2];
    longlong *local_res18;
    undefined local_38[8];
    undefined2 *local_30;
    longlong local_28;

    uVar8 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar6 = uVar8;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar6 * 8) + 400) ==
                param_1) {
                uVar8 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar6 * 8);
                break;
            }
            uVar6 = (ulonglong)((int) uVar6 + 1);
        } while (uVar6 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    puVar2 = (undefined2 *) FUN_14018b280(0x10);
    if (puVar2 != (undefined2 *) 0x0) {
        *puVar2 = 0;
    }
    puVar7 = *(undefined8 * *)(param_1 + 0x18);
    if (((puVar7 < *(undefined8 * *)(param_1 + 0x10)) && (puVar7 != &DAT_140a12138)) &&
        (*(int *) (puVar7 + 1) - 3U < 2)) {
        uVar3 = FUN_140056bb0(param_1, 1);
        FUN_14018f2d0(local_38, uVar3);
        lVar4 = FUN_1400e58c0(uVar8, local_30);
        if (local_30 != (undefined2 *) 0x0) {
            FUN_14018b900(local_30, 0);
        }
        LAB_14011fd47:
        if (lVar4 == 0) goto LAB_14011fe4e;
        puVar7 = *(undefined8 * *)(param_1 + 0x10);
        puVar5 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x10);
        if (((puVar5 < puVar7) && (puVar5 != &DAT_140a12138)) &&
            (*(int *) (*(longlong * )(param_1 + 0x18) + 0x18) - 3U < 2)) {
            uVar3 = FUN_140056bb0(param_1, 2);
            FUN_14018f2d0(local_38, uVar3);
            if (puVar2 != (undefined2 *) 0x0) {
                FUN_14018b900(puVar2, 0);
            }
            local_res18 = (longlong *) 0x0;
            (**(code * *)(*DAT_140c65680 + 0x28))
                    (DAT_140c65680, *(undefined8 * )(lVar4 + 0x60), local_30, 0xffffffffffffffff,
                     &local_res18);
            puVar2 = local_30;
            if (local_res18 == (longlong *) 0x0) {
                puVar7 = *(undefined8 * *)(param_1 + 0x10);
                *puVar7 = 0;
                *(undefined4 * )(puVar7 + 1) = 3;
            } else {
                local_res10[0] = 0.0;
                (**(code * *)(*local_res18 + 0xa8))
                        (local_res18, local_28 - (longlong) local_30 >> 1, local_res10);
                if (local_res18 != (longlong *) 0x0) {
                    (**(code * *)(*local_res18 + 8))();
                    local_res18 = (longlong *) 0x0;
                }
                pdVar1 = *(double **) (param_1 + 0x10);
                *pdVar1 = (double) local_res10[0];
                *(undefined4 * )(pdVar1 + 1) = 3;
            }
            goto LAB_14011fe5c;
        }
    } else {
        lVar4 = FUN_1400d6530(param_1, 1);
        if (lVar4 != 0) {
            lVar4 = FUN_1400d6530(param_1, 1);
            lVar4 = *(longlong * )(lVar4 + 0x2b8);
            goto LAB_14011fd47;
        }
        LAB_14011fe4e:
        puVar7 = *(undefined8 * *)(param_1 + 0x10);
    }
    *(undefined4 * )(puVar7 + 1) = 3;
    *puVar7 = 0;
    LAB_14011fe5c:
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    if (puVar2 != (undefined2 *) 0x0) {
        FUN_14018b900(puVar2, 0);
    }
    return 1;
}


bool FUN_1401202f0(longlong param_1) {
    longlong lVar1;
    double *pdVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    longlong *plVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    int iVar11;
    undefined8 *puVar12;
    undefined local_28[8];
    longlong local_20;

    uVar5 = FUN_140056bb0(param_1, 1);
    FUN_14018f2d0(local_28, uVar5);
    lVar1 = *(longlong * )(param_1 + 0x18);
    puVar6 = (undefined8 * )(lVar1 + 0x10);
    uVar3 = 0xfffffffe;
    if ((puVar6 < *(undefined8 * *)(param_1 + 0x10)) &&
        ((((puVar6 == &DAT_140a12138 || (*(int *) (lVar1 + 0x18) != 6)) &&
           (puVar6 < *(undefined8 * *)(param_1 + 0x10))) &&
          ((puVar6 != &DAT_140a12138 && (*(int *) (lVar1 + 0x18) == 0)))))) {
        FUN_140056570(param_1, 2, "not function or nil");
    }
    puVar6 = *(undefined8 * *)(param_1 + 0x10);
    puVar7 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x10);
    if (((puVar7 < puVar6) && (puVar7 != &DAT_140a12138)) &&
        (*(int *) (*(longlong * )(param_1 + 0x18) + 0x18) == 6)) {
        puVar12 = &DAT_140a12138;
        if (puVar7 < puVar6) {
            puVar12 = puVar7;
        }
        *puVar6 = *puVar12;
        *(undefined4 * )(puVar6 + 1) = *(undefined4 * )(puVar12 + 1);
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        uVar3 = FUN_1400578c0(param_1);
    }
    if (*(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x70) <=
        *(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar6 = *(undefined8 * *)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 * )(puVar6 + 1) = 5;
    *puVar6 = uVar5;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    iVar11 = 3;
    if (3 < (int) (*(longlong * )(param_1 + 0x10) - *(longlong * )(param_1 + 0x18) >> 4)) {
        do {
            pdVar2 = *(double **) (param_1 + 0x10);
            *(undefined4 * )(pdVar2 + 1) = 3;
            *pdVar2 = (double) (iVar11 + -2);
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            puVar7 = (undefined8 *) FUN_1400580e0(param_1, iVar11);
            puVar6 = *(undefined8 * *)(param_1 + 0x10);
            *puVar6 = *puVar7;
            *(undefined4 * )(puVar6 + 1) = *(undefined4 * )(puVar7 + 1);
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            lVar1 = *(longlong * )(param_1 + 0x10);
            FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar1, lVar1 + -0x20, lVar1 + -0x10);
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
            iVar11 = iVar11 + 1;
        } while (iVar11 < (int) (*(longlong * )(param_1 + 0x10) - *(longlong * )(param_1 + 0x18) >> 4));
    }
    uVar4 = FUN_1400578c0();
    uVar9 = 0;
    uVar10 = uVar9;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar10 * 8) + 400) ==
                param_1) {
                uVar9 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar10 * 8);
                break;
            }
            uVar10 = (ulonglong)((int) uVar10 + 1);
        } while (uVar10 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    plVar8 = (longlong *) FUN_140123700(uVar9, uVar10, local_20, uVar3, uVar4);
    if (plVar8 != (longlong *) 0x0) {
        *(undefined4 * )(plVar8 + 0x8e) = 1;
        FUN_1400d62a0(param_1, plVar8);
        (**(code * *)(*plVar8 + 8))(plVar8);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return plVar8 != (longlong *) 0x0;
}


bool FUN_140120520(longlong param_1) {
    longlong lVar1;
    double *pdVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    longlong *plVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    int iVar11;
    undefined8 *puVar12;
    undefined local_28[8];
    longlong local_20;

    uVar5 = FUN_140056bb0(param_1, 1);
    FUN_14018f2d0(local_28, uVar5);
    lVar1 = *(longlong * )(param_1 + 0x18);
    puVar6 = (undefined8 * )(lVar1 + 0x10);
    uVar3 = 0xfffffffe;
    if ((puVar6 < *(undefined8 * *)(param_1 + 0x10)) &&
        ((((puVar6 == &DAT_140a12138 || (*(int *) (lVar1 + 0x18) != 6)) &&
           (puVar6 < *(undefined8 * *)(param_1 + 0x10))) &&
          ((puVar6 != &DAT_140a12138 && (*(int *) (lVar1 + 0x18) == 0)))))) {
        FUN_140056570(param_1, 2, "not function or nil");
    }
    puVar6 = *(undefined8 * *)(param_1 + 0x10);
    puVar7 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x10);
    if (((puVar7 < puVar6) && (puVar7 != &DAT_140a12138)) &&
        (*(int *) (*(longlong * )(param_1 + 0x18) + 0x18) == 6)) {
        puVar12 = &DAT_140a12138;
        if (puVar7 < puVar6) {
            puVar12 = puVar7;
        }
        *puVar6 = *puVar12;
        *(undefined4 * )(puVar6 + 1) = *(undefined4 * )(puVar12 + 1);
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        uVar3 = FUN_1400578c0(param_1);
    }
    if (*(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x70) <=
        *(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar6 = *(undefined8 * *)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 * )(puVar6 + 1) = 5;
    *puVar6 = uVar5;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    iVar11 = 3;
    if (3 < (int) (*(longlong * )(param_1 + 0x10) - *(longlong * )(param_1 + 0x18) >> 4)) {
        do {
            pdVar2 = *(double **) (param_1 + 0x10);
            *(undefined4 * )(pdVar2 + 1) = 3;
            *pdVar2 = (double) (iVar11 + -2);
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            puVar7 = (undefined8 *) FUN_1400580e0(param_1, iVar11);
            puVar6 = *(undefined8 * *)(param_1 + 0x10);
            *puVar6 = *puVar7;
            *(undefined4 * )(puVar6 + 1) = *(undefined4 * )(puVar7 + 1);
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            lVar1 = *(longlong * )(param_1 + 0x10);
            FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar1, lVar1 + -0x20, lVar1 + -0x10);
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
            iVar11 = iVar11 + 1;
        } while (iVar11 < (int) (*(longlong * )(param_1 + 0x10) - *(longlong * )(param_1 + 0x18) >> 4));
    }
    uVar4 = FUN_1400578c0();
    uVar9 = 0;
    uVar10 = uVar9;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar10 * 8) + 400) ==
                param_1) {
                uVar9 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar10 * 8);
                break;
            }
            uVar10 = (ulonglong)((int) uVar10 + 1);
        } while (uVar10 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    plVar8 = (longlong *) FUN_140123890(uVar9, uVar10, local_20, uVar3, uVar4);
    if (plVar8 != (longlong *) 0x0) {
        *(undefined4 * )(plVar8 + 0x8e) = 1;
        FUN_1400d62a0(param_1, plVar8);
        (**(code * *)(*plVar8 + 8))(plVar8);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return plVar8 != (longlong *) 0x0;
}


bool FUN_140120750(longlong param_1) {
    longlong lVar1;
    double *pdVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    longlong *plVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    int iVar11;
    undefined8 *puVar12;
    undefined local_28[8];
    longlong local_20;

    uVar5 = FUN_140056bb0(param_1, 1);
    FUN_14018f2d0(local_28, uVar5);
    lVar1 = *(longlong * )(param_1 + 0x18);
    puVar6 = (undefined8 * )(lVar1 + 0x10);
    uVar3 = 0xfffffffe;
    if ((puVar6 < *(undefined8 * *)(param_1 + 0x10)) &&
        ((((puVar6 == &DAT_140a12138 || (*(int *) (lVar1 + 0x18) != 6)) &&
           (puVar6 < *(undefined8 * *)(param_1 + 0x10))) &&
          ((puVar6 != &DAT_140a12138 && (*(int *) (lVar1 + 0x18) == 0)))))) {
        FUN_140056570(param_1, 2, "not function or nil");
    }
    puVar6 = *(undefined8 * *)(param_1 + 0x10);
    puVar7 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x10);
    if (((puVar7 < puVar6) && (puVar7 != &DAT_140a12138)) &&
        (*(int *) (*(longlong * )(param_1 + 0x18) + 0x18) == 6)) {
        puVar12 = &DAT_140a12138;
        if (puVar7 < puVar6) {
            puVar12 = puVar7;
        }
        *puVar6 = *puVar12;
        *(undefined4 * )(puVar6 + 1) = *(undefined4 * )(puVar12 + 1);
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        uVar3 = FUN_1400578c0(param_1);
    }
    if (*(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x70) <=
        *(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar6 = *(undefined8 * *)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 * )(puVar6 + 1) = 5;
    *puVar6 = uVar5;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    iVar11 = 3;
    if (3 < (int) (*(longlong * )(param_1 + 0x10) - *(longlong * )(param_1 + 0x18) >> 4)) {
        do {
            pdVar2 = *(double **) (param_1 + 0x10);
            *(undefined4 * )(pdVar2 + 1) = 3;
            *pdVar2 = (double) (iVar11 + -2);
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            puVar7 = (undefined8 *) FUN_1400580e0(param_1, iVar11);
            puVar6 = *(undefined8 * *)(param_1 + 0x10);
            *puVar6 = *puVar7;
            *(undefined4 * )(puVar6 + 1) = *(undefined4 * )(puVar7 + 1);
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            lVar1 = *(longlong * )(param_1 + 0x10);
            FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar1, lVar1 + -0x20, lVar1 + -0x10);
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
            iVar11 = iVar11 + 1;
        } while (iVar11 < (int) (*(longlong * )(param_1 + 0x10) - *(longlong * )(param_1 + 0x18) >> 4));
    }
    uVar4 = FUN_1400578c0();
    uVar9 = 0;
    uVar10 = uVar9;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar10 * 8) + 400) ==
                param_1) {
                uVar9 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar10 * 8);
                break;
            }
            uVar10 = (ulonglong)((int) uVar10 + 1);
        } while (uVar10 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    plVar8 = (longlong *) FUN_140123a40(uVar9, uVar10, local_20, uVar3, uVar4);
    if (plVar8 != (longlong *) 0x0) {
        *(undefined4 * )(plVar8 + 0x8e) = 1;
        FUN_1400d62a0(param_1, plVar8);
        (**(code * *)(*plVar8 + 8))(plVar8);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return plVar8 != (longlong *) 0x0;
}


bool FUN_140120980(longlong param_1) {
    longlong lVar1;
    double *pdVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    longlong *plVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    int iVar11;
    undefined8 *puVar12;
    undefined local_28[8];
    longlong local_20;

    uVar5 = FUN_140056bb0(param_1, 1);
    FUN_14018f2d0(local_28, uVar5);
    lVar1 = *(longlong * )(param_1 + 0x18);
    puVar6 = (undefined8 * )(lVar1 + 0x10);
    uVar3 = 0xfffffffe;
    if ((puVar6 < *(undefined8 * *)(param_1 + 0x10)) &&
        ((((puVar6 == &DAT_140a12138 || (*(int *) (lVar1 + 0x18) != 6)) &&
           (puVar6 < *(undefined8 * *)(param_1 + 0x10))) &&
          ((puVar6 != &DAT_140a12138 && (*(int *) (lVar1 + 0x18) == 0)))))) {
        FUN_140056570(param_1, 2, "not function or nil");
    }
    puVar6 = *(undefined8 * *)(param_1 + 0x10);
    puVar7 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x10);
    if (((puVar7 < puVar6) && (puVar7 != &DAT_140a12138)) &&
        (*(int *) (*(longlong * )(param_1 + 0x18) + 0x18) == 6)) {
        puVar12 = &DAT_140a12138;
        if (puVar7 < puVar6) {
            puVar12 = puVar7;
        }
        *puVar6 = *puVar12;
        *(undefined4 * )(puVar6 + 1) = *(undefined4 * )(puVar12 + 1);
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        uVar3 = FUN_1400578c0(param_1);
    }
    if (*(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x70) <=
        *(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar6 = *(undefined8 * *)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 * )(puVar6 + 1) = 5;
    *puVar6 = uVar5;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    iVar11 = 3;
    if (3 < (int) (*(longlong * )(param_1 + 0x10) - *(longlong * )(param_1 + 0x18) >> 4)) {
        do {
            pdVar2 = *(double **) (param_1 + 0x10);
            *(undefined4 * )(pdVar2 + 1) = 3;
            *pdVar2 = (double) (iVar11 + -2);
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            puVar7 = (undefined8 *) FUN_1400580e0(param_1, iVar11);
            puVar6 = *(undefined8 * *)(param_1 + 0x10);
            *puVar6 = *puVar7;
            *(undefined4 * )(puVar6 + 1) = *(undefined4 * )(puVar7 + 1);
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            lVar1 = *(longlong * )(param_1 + 0x10);
            FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar1, lVar1 + -0x20, lVar1 + -0x10);
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
            iVar11 = iVar11 + 1;
        } while (iVar11 < (int) (*(longlong * )(param_1 + 0x10) - *(longlong * )(param_1 + 0x18) >> 4));
    }
    uVar4 = FUN_1400578c0();
    uVar9 = 0;
    uVar10 = uVar9;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar10 * 8) + 400) ==
                param_1) {
                uVar9 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar10 * 8);
                break;
            }
            uVar10 = (ulonglong)((int) uVar10 + 1);
        } while (uVar10 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    plVar8 = (longlong *) FUN_140123c10(uVar9, uVar10, local_20, uVar3, uVar4);
    if (plVar8 != (longlong *) 0x0) {
        *(undefined4 * )(plVar8 + 0x8e) = 1;
        FUN_1400d62a0(param_1, plVar8);
        (**(code * *)(*plVar8 + 8))(plVar8);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return plVar8 != (longlong *) 0x0;
}


bool FUN_140120bb0(longlong param_1) {
    longlong lVar1;
    double *pdVar2;
    ulonglong uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined8 uVar7;
    undefined8 *puVar8;
    undefined8 *puVar9;
    longlong *plVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    int iVar13;
    undefined8 *puVar14;
    double extraout_XMM0_Qa;
    double extraout_XMM0_Qa_00;
    double extraout_XMM0_Qa_01;
    double dVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    undefined local_68[8];
    longlong local_60;

    uVar7 = FUN_140056bb0(param_1, 1);
    FUN_14018f2d0(local_68, uVar7);
    FUN_140056c40(param_1, 2);
    FUN_140056c40(param_1, 3);
    fVar17 = (float) extraout_XMM0_Qa;
    FUN_140056c40(param_1, 4);
    puVar8 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x40);
    fVar18 = (float) extraout_XMM0_Qa_00;
    if (((puVar8 < *(undefined8 * *)(param_1 + 0x10)) && (puVar8 != &DAT_140a12138)) &&
        (0 < *(int *) (*(longlong * )(param_1 + 0x18) + 0x48))) {
        FUN_140056c40(param_1, 5);
        dVar15 = extraout_XMM0_Qa_01;
    } else {
        dVar15 = 1.0;
    }
    uVar12 = 0;
    puVar8 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x50);
    fVar16 = (float) dVar15;
    uVar4 = 0;
    if (((puVar8 < *(undefined8 * *)(param_1 + 0x10)) && (puVar8 != &DAT_140a12138)) &&
        (0 < *(int *) (*(longlong * )(param_1 + 0x18) + 0x58))) {
        uVar4 = FUN_140056d60(param_1, 6);
    }
    lVar1 = *(longlong * )(param_1 + 0x18);
    uVar5 = 0xfffffffe;
    puVar8 = (undefined8 * )(lVar1 + 0x60);
    if ((((puVar8 < *(undefined8 * *)(param_1 + 0x10)) &&
          ((puVar8 == &DAT_140a12138 || (*(int *) (lVar1 + 0x68) != 6)))) &&
         (puVar8 < *(undefined8 * *)(param_1 + 0x10))) &&
        ((puVar8 != &DAT_140a12138 && (*(int *) (lVar1 + 0x68) == 0)))) {
        FUN_140056570(param_1, 7, "not function or nil");
    }
    puVar8 = *(undefined8 * *)(param_1 + 0x10);
    puVar9 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x60);
    if (((puVar9 < puVar8) && (puVar9 != &DAT_140a12138)) &&
        (*(int *) (*(longlong * )(param_1 + 0x18) + 0x68) == 6)) {
        puVar14 = &DAT_140a12138;
        if (puVar9 < puVar8) {
            puVar14 = puVar9;
        }
        *puVar8 = *puVar14;
        *(undefined4 * )(puVar8 + 1) = *(undefined4 * )(puVar14 + 1);
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        uVar5 = FUN_1400578c0(param_1);
    }
    if (*(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x70) <=
        *(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar8 = *(undefined8 * *)(param_1 + 0x10);
    uVar7 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 * )(puVar8 + 1) = 5;
    *puVar8 = uVar7;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    iVar13 = 8;
    if (8 < (int) (*(longlong * )(param_1 + 0x10) - *(longlong * )(param_1 + 0x18) >> 4)) {
        do {
            pdVar2 = *(double **) (param_1 + 0x10);
            *(undefined4 * )(pdVar2 + 1) = 3;
            *pdVar2 = (double) (iVar13 + -7);
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            puVar9 = (undefined8 *) FUN_1400580e0(param_1, iVar13);
            puVar8 = *(undefined8 * *)(param_1 + 0x10);
            *puVar8 = *puVar9;
            *(undefined4 * )(puVar8 + 1) = *(undefined4 * )(puVar9 + 1);
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + *(longlong * )(param_1 + 0x10),
                          *(longlong * )(param_1 + 0x10) + -0x20);
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
            iVar13 = iVar13 + 1;
        } while (iVar13 < (int) (*(longlong * )(param_1 + 0x10) - *(longlong * )(param_1 + 0x18) >> 4));
    }
    uVar6 = FUN_1400578c0();
    uVar3 = *(ulonglong * )(DAT_140c63650 + 0x300);
    if (uVar3 != 0) {
        uVar11 = uVar12;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar11 * 8) + 400) ==
                param_1) {
                uVar12 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar11 * 8);
                break;
            }
            uVar11 = (ulonglong)((int) uVar11 + 1);
        } while (uVar11 < uVar3);
    }
    plVar10 = (longlong *)
            FUN_140123de0(uVar12, uVar3, local_60, uVar6, fVar17, fVar18, fVar16, uVar4, uVar5, uVar6);
    if (plVar10 != (longlong *) 0x0) {
        *(undefined4 * )(plVar10 + 0x8e) = 1;
        FUN_1400d62a0(param_1, plVar10);
        (**(code * *)(*plVar10 + 8))(plVar10);
    }
    if (local_60 != 0) {
        FUN_14018b900(local_60, 0);
    }
    return plVar10 != (longlong *) 0x0;
}


bool FUN_140120ef0(longlong param_1) {
    uint uVar1;
    undefined8 uVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    longlong *plVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    double dVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    undefined local_68[8];
    longlong local_60;

    uVar2 = FUN_1400d66a0(param_1, 1);
    uVar3 = FUN_140056bb0(param_1, 2);
    FUN_14018f2d0(local_68, uVar3);
    FUN_140056c40(param_1, 3);
    dVar9 = (double) FUN_140056c40(param_1, 4);
    fVar11 = (float) dVar9;
    dVar9 = (double) FUN_140056c40(param_1, 5);
    puVar4 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x50);
    fVar12 = (float) dVar9;
    if (((puVar4 < *(undefined8 * *)(param_1 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
        (0 < *(int *) (*(longlong * )(param_1 + 0x18) + 0x58))) {
        dVar9 = (double) FUN_140056c40(param_1, 6);
    } else {
        dVar9 = 1.0;
    }
    uVar7 = 0;
    puVar4 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x60);
    fVar10 = (float) dVar9;
    uVar8 = uVar7;
    if (((puVar4 < *(undefined8 * *)(param_1 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
        (0 < *(int *) (*(longlong * )(param_1 + 0x18) + 0x68))) {
        uVar1 = FUN_140056d60(param_1, 7);
        uVar8 = (ulonglong) uVar1;
    }
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar6 = uVar7;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar6 * 8) + 400) ==
                param_1) {
                uVar7 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar6 * 8);
                break;
            }
            uVar6 = (ulonglong)((int) uVar6 + 1);
        } while (uVar6 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    plVar5 = (longlong *)
            FUN_140124290(uVar7, uVar2, local_60, uVar8, fVar11, fVar12, fVar10, (int) uVar8, 0xfffffffe,
                          0xfffffffe);
    if (plVar5 != (longlong *) 0x0) {
        *(undefined4 * )(plVar5 + 0x8e) = 1;
        FUN_1400d62a0(param_1, plVar5);
        (**(code * *)(*plVar5 + 8))(plVar5);
    }
    if (local_60 != 0) {
        FUN_14018b900(local_60, 0);
    }
    return plVar5 != (longlong *) 0x0;
}


bool FUN_1401210e0(longlong param_1) {
    longlong lVar1;
    double *pdVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    undefined *puVar7;
    undefined8 *puVar8;
    longlong *plVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    int iVar12;
    undefined8 *puVar13;
    undefined local_48[8];
    longlong local_40;
    undefined local_28[8];
    longlong local_20;

    uVar5 = FUN_140056bb0(param_1, 1);
    FUN_14018f2d0(local_28, uVar5);
    puVar6 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x10);
    if (((puVar6 < *(undefined8 * *)(param_1 + 0x10)) && (puVar6 != &DAT_140a12138)) &&
        (0 < *(int *) (*(longlong * )(param_1 + 0x18) + 0x18))) {
        puVar7 = (undefined *) FUN_140056bb0(param_1, 2);
    } else {
        puVar7 = &DAT_1409d050b;
    }
    FUN_14018f2d0(local_48, puVar7);
    lVar1 = *(longlong * )(param_1 + 0x18);
    puVar6 = (undefined8 * )(lVar1 + 0x20);
    uVar3 = 0xfffffffe;
    if ((((puVar6 < *(undefined8 * *)(param_1 + 0x10)) &&
          ((puVar6 == &DAT_140a12138 || (*(int *) (lVar1 + 0x28) != 6)))) &&
         (puVar6 < *(undefined8 * *)(param_1 + 0x10))) &&
        ((puVar6 != &DAT_140a12138 && (*(int *) (lVar1 + 0x28) == 0)))) {
        FUN_140056570(param_1, 3, "not function or nil");
    }
    puVar6 = *(undefined8 * *)(param_1 + 0x10);
    puVar8 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x20);
    if (((puVar8 < puVar6) && (puVar8 != &DAT_140a12138)) &&
        (*(int *) (*(longlong * )(param_1 + 0x18) + 0x28) == 6)) {
        puVar13 = &DAT_140a12138;
        if (puVar8 < puVar6) {
            puVar13 = puVar8;
        }
        *puVar6 = *puVar13;
        *(undefined4 * )(puVar6 + 1) = *(undefined4 * )(puVar13 + 1);
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        uVar3 = FUN_1400578c0(param_1);
    }
    if (*(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x70) <=
        *(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar6 = *(undefined8 * *)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 * )(puVar6 + 1) = 5;
    *puVar6 = uVar5;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    iVar12 = 4;
    if (4 < (int) (*(longlong * )(param_1 + 0x10) - *(longlong * )(param_1 + 0x18) >> 4)) {
        do {
            pdVar2 = *(double **) (param_1 + 0x10);
            *(undefined4 * )(pdVar2 + 1) = 3;
            *pdVar2 = (double) (iVar12 + -3);
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            puVar8 = (undefined8 *) FUN_1400580e0(param_1, iVar12);
            puVar6 = *(undefined8 * *)(param_1 + 0x10);
            *puVar6 = *puVar8;
            *(undefined4 * )(puVar6 + 1) = *(undefined4 * )(puVar8 + 1);
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            lVar1 = *(longlong * )(param_1 + 0x10);
            FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar1, lVar1 + -0x20, lVar1 + -0x10);
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
            iVar12 = iVar12 + 1;
        } while (iVar12 < (int) (*(longlong * )(param_1 + 0x10) - *(longlong * )(param_1 + 0x18) >> 4));
    }
    uVar4 = FUN_1400578c0();
    uVar10 = 0;
    uVar11 = uVar10;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar11 * 8) + 400) ==
                param_1) {
                uVar10 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar11 * 8);
                break;
            }
            uVar11 = (ulonglong)((int) uVar11 + 1);
        } while (uVar11 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    plVar9 = (longlong *) FUN_140124a00(uVar10, uVar11, local_20, local_40, uVar3, uVar4);
    if (plVar9 != (longlong *) 0x0) {
        *(undefined4 * )(plVar9 + 0x8e) = 1;
        FUN_1400d62a0(param_1, plVar9);
        (**(code * *)(*plVar9 + 8))(plVar9);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40, 0);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return plVar9 != (longlong *) 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_140121370(longlong param_1) {
    double *pdVar1;
    char cVar2;
    byte bVar6;
    short sVar7;
    short sVar8;
    uint6 uVar9;
    undefined4 uVar10;
    undefined4 uVar11;
    undefined(*pauVar12)[16];
    undefined8 *puVar13;
    undefined8 *puVar14;
    undefined8 uVar15;
    longlong lVar16;
    longlong *plVar17;
    longlong *plVar18;
    undefined8 *puVar19;
    longlong *plVar20;
    int iVar21;
    int iVar22;
    int iVar23;
    int iVar24;
    short sVar25;
    short sVar26;
    uint3 uVar27;
    ulonglong uVar31;
    ushort uVar36;
    undefined auVar33[16];
    undefined auVar34[16];
    undefined in_XMM6[16];
    undefined auVar37[16];
    float fVar38;
    float fVar39;
    float fVar40;
    float fVar41;
    char cVar3;
    char cVar4;
    char cVar5;
    uint uVar28;
    undefined6 uVar29;
    uint7 uVar30;
    undefined auVar32[12];
    undefined auVar35[16];

    pauVar12 = (undefined (*)[16]) FUN_140056ab0(param_1, 1, "CColor");
    uVar10 = 0xfffffffe;
    auVar37 = in_XMM6 & (undefined[16]) 0x0;
    lVar16 = *(longlong * )(param_1 + 0x18);
    auVar33 = maxps(ZEXT1216(CONCAT48(SUB164(auVar37 >> 0x40, 0), (ulonglong) SUB164(in_XMM6, 0)) &
                             (undefined[12]) 0xffffffffffffffff), *pauVar12);
    auVar33 = minps(auVar33, _DAT_140b7b240);
    puVar13 = (undefined8 * )(lVar16 + 0x10);
    iVar21 = (int) (SUB164(auVar33, 0) * 255.0 + 0.5);
    iVar22 = (int) (SUB164(auVar33 >> 0x20, 0) * 255.0 + 0.5);
    iVar23 = (int) (SUB164(auVar33 >> 0x40, 0) * 255.0 + 0.5);
    iVar24 = (int) (SUB164(auVar33 >> 0x60, 0) * 255.0 + 0.5);
    sVar7 = (short) iVar23;
    cVar2 = (0 < sVar7) * (sVar7 < 0xff) * (char) iVar23 - (0xff < sVar7);
    sVar7 = (short) ((uint) iVar23 >> 0x10);
    sVar25 = CONCAT11((0 < sVar7) * (sVar7 < 0xff) * (char) ((uint) iVar23 >> 0x10) - (0xff < sVar7),
                      cVar2);
    sVar7 = (short) iVar22;
    cVar3 = (0 < sVar7) * (sVar7 < 0xff) * (char) iVar22 - (0xff < sVar7);
    sVar7 = (short) ((uint) iVar22 >> 0x10);
    uVar11 = CONCAT13((0 < sVar7) * (sVar7 < 0xff) * (char) ((uint) iVar22 >> 0x10) - (0xff < sVar7),
                      CONCAT12(cVar3, sVar25));
    sVar7 = (short) iVar21;
    cVar4 = (0 < sVar7) * (sVar7 < 0xff) * (char) iVar21 - (0xff < sVar7);
    sVar7 = (short) ((uint) iVar21 >> 0x10);
    uVar29 = CONCAT15((0 < sVar7) * (sVar7 < 0xff) * (char) ((uint) iVar21 >> 0x10) - (0xff < sVar7),
                      CONCAT14(cVar4, uVar11));
    sVar7 = (short) iVar24;
    cVar5 = (0 < sVar7) * (sVar7 < 0xff) * (char) iVar24 - (0xff < sVar7);
    sVar8 = (short) ((uint) iVar24 >> 0x10);
    bVar6 = (0 < sVar25) * (sVar25 < 0xff) * cVar2 - (0xff < sVar25);
    sVar7 = (short) ((uint) uVar11 >> 0x10);
    sVar25 = (short) ((uint6) uVar29 >> 0x20);
    uVar27 = CONCAT12((0 < sVar25) * (sVar25 < 0xff) * cVar4 - (0xff < sVar25),
                      CONCAT11((0 < sVar7) * (sVar7 < 0xff) * cVar3 - (0xff < sVar7), bVar6));
    sVar7 = (short) (CONCAT17((0 < sVar8) * (sVar8 < 0xff) * (char) ((uint) iVar24 >> 0x10) -
                              (0xff < sVar8), CONCAT16(cVar5, uVar29)) >> 0x30);
    uVar28 = CONCAT13((0 < sVar7) * (sVar7 < 0xff) * cVar5 - (0xff < sVar7), uVar27);
    uVar30 = (uint7) uVar28;
    if ((puVar13 < *(undefined8 * *)(param_1 + 0x10)) &&
        ((((puVar13 == &DAT_140a12138 || (*(int *) (lVar16 + 0x18) != 6)) &&
           (puVar13 < *(undefined8 * *)(param_1 + 0x10))) &&
          ((puVar13 != &DAT_140a12138 && (*(int *) (lVar16 + 0x18) == 0)))))) {
        FUN_140056570(param_1, 2, "not function or nil");
    }
    puVar13 = *(undefined8 * *)(param_1 + 0x10);
    puVar14 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x10);
    if (((puVar14 < puVar13) && (puVar14 != &DAT_140a12138)) &&
        (*(int *) (*(longlong * )(param_1 + 0x18) + 0x18) == 6)) {
        puVar19 = &DAT_140a12138;
        if (puVar14 < puVar13) {
            puVar19 = puVar14;
        }
        *puVar13 = *puVar19;
        *(undefined4 * )(puVar13 + 1) = *(undefined4 * )(puVar19 + 1);
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        uVar10 = FUN_1400578c0(param_1);
    }
    if (*(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x70) <=
        *(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar13 = *(undefined8 * *)(param_1 + 0x10);
    uVar15 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 * )(puVar13 + 1) = 5;
    *puVar13 = uVar15;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    iVar21 = 3;
    if (3 < (int) (*(longlong * )(param_1 + 0x10) - *(longlong * )(param_1 + 0x18) >> 4)) {
        do {
            pdVar1 = *(double **) (param_1 + 0x10);
            *(undefined4 * )(pdVar1 + 1) = 3;
            *pdVar1 = (double) (iVar21 + -2);
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            puVar14 = (undefined8 *) FUN_1400580e0(param_1, iVar21);
            puVar13 = *(undefined8 * *)(param_1 + 0x10);
            *puVar13 = *puVar14;
            *(undefined4 * )(puVar13 + 1) = *(undefined4 * )(puVar14 + 1);
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            lVar16 = *(longlong * )(param_1 + 0x10);
            FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar16, lVar16 + -0x20, lVar16 + -0x10);
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
            iVar21 = iVar21 + 1;
        } while (iVar21 < (int) (*(longlong * )(param_1 + 0x10) - *(longlong * )(param_1 + 0x18) >> 4));
    }
    uVar11 = FUN_1400578c0();
    plVar17 = (longlong *) 0x0;
    uVar31 = (ulonglong) uVar30 | (ulonglong) uVar30 << 0x20;
    auVar32 = CONCAT48(uVar28, uVar31);
    auVar35 = CONCAT97((unkuint9)
                               SUB157(CONCAT69(SUB156(CONCAT510(SUB155(CONCAT411(SUB154(CONCAT312(SUB153(
                                                                                         CONCAT213(SUB152(CONCAT114((char) (uVar30 >> 0x18),
                                                                                                                    ZEXT1314(SUB1613(
                                                                                                                            CONCAT412(uVar28, auVar32), 0))) >> 0x68, 0),
                                                                                                   CONCAT112((char) (uVar30 >> 0x10), auVar32)) >> 0x60, 0), auVar32)
                                                                                                >> 0x58, 0),
                                                                                 CONCAT110((char) (uVar30 >> 8),
                                                                                           SUB1210(auVar32, 0)))
                                                                               >> 0x50, 0),
                                                                (unkuint10) SUB129(auVar32, 0)) >> 0x48, 0
                               ), CONCAT18(bVar6, uVar31)) >> 0x40, 0) << 8,
                       ((uint7) uVar31 >> 0x18) << 0x30);
    auVar34 = CONCAT115(ZEXT1011(SUB1610(auVar35 >> 0x30, 0)) << 8, ((uint5) uVar31 >> 0x10) << 0x20);
    auVar33 = CONCAT142(SUB1614(CONCAT133(ZEXT1213(SUB1612(auVar34 >> 0x20, 0)) << 8,
                                          (uVar27 >> 8) << 0x10) >> 0x10, 0), (ushort) bVar6) &
              (undefined[16]) 0xffffffffffff00ff;
    uVar36 = SUB162(auVar35 >> 0x30, 0);
    uVar9 = CONCAT42(SUB144(CONCAT212(uVar36, ZEXT1012(SUB1610(auVar33, 0))) >> 0x50, 0),
                     SUB162(auVar34 >> 0x20, 0));
    fVar38 = (float) (int) uVar9 * 0.003921569;
    fVar39 = (float) SUB164(CONCAT106((unkuint10) uVar9 << 0x10, (SUB166(auVar33, 0) >> 0x10) << 0x20) >>
                                                                                                       0x20, 0) *
             0.003921569;
    fVar40 = (float) (SUB164(auVar33, 0) & 0xffff) * 0.003921569;
    fVar41 = (float) (uint) uVar36 * 0.003921569;
    plVar20 = plVar17;
    if (*(longlong * *)(DAT_140c63650 + 0x300) != (longlong *) 0x0) {
        plVar18 = plVar17;
        do {
            if (*(longlong * )
                    (*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + (longlong) plVar18 * 8) + 400) ==
                param_1) {
                plVar20 = *(longlong * *)(*(longlong * )(DAT_140c63650 + 0x2f8) + (longlong) plVar18 * 8);
                break;
            }
            plVar18 = (longlong * )(ulonglong)((int) plVar18 + 1);
        } while (plVar18 < *(longlong * *)(DAT_140c63650 + 0x300));
    }
    lVar16 = FUN_14018b280(0x510, 0);
    if (lVar16 != 0) {
        plVar17 = (longlong *) FUN_140124e00(lVar16, plVar20, uVar10, uVar11);
    }
    auVar33 = maxps(auVar37, CONCAT412(fVar41, CONCAT48(fVar40, CONCAT44(fVar39, fVar38))));
    auVar33 = minps(auVar33, _DAT_140b7b240);
    iVar21 = (int) (SUB164(auVar33, 0) * 255.0 + 0.5);
    iVar22 = (int) (SUB164(auVar33 >> 0x20, 0) * 255.0 + 0.5);
    iVar23 = (int) (SUB164(auVar33 >> 0x40, 0) * 255.0 + 0.5);
    iVar24 = (int) (SUB164(auVar33 >> 0x60, 0) * 255.0 + 0.5);
    sVar7 = (short) iVar23;
    cVar2 = (0 < sVar7) * (sVar7 < 0xff) * (char) iVar23 - (0xff < sVar7);
    sVar7 = (short) ((uint) iVar23 >> 0x10);
    sVar26 = CONCAT11((0 < sVar7) * (sVar7 < 0xff) * (char) ((uint) iVar23 >> 0x10) - (0xff < sVar7),
                      cVar2);
    sVar7 = (short) iVar22;
    cVar3 = (0 < sVar7) * (sVar7 < 0xff) * (char) iVar22 - (0xff < sVar7);
    sVar7 = (short) ((uint) iVar22 >> 0x10);
    uVar10 = CONCAT13((0 < sVar7) * (sVar7 < 0xff) * (char) ((uint) iVar22 >> 0x10) - (0xff < sVar7),
                      CONCAT12(cVar3, sVar26));
    sVar7 = (short) iVar21;
    cVar4 = (0 < sVar7) * (sVar7 < 0xff) * (char) iVar21 - (0xff < sVar7);
    sVar7 = (short) ((uint) iVar21 >> 0x10);
    uVar29 = CONCAT15((0 < sVar7) * (sVar7 < 0xff) * (char) ((uint) iVar21 >> 0x10) - (0xff < sVar7),
                      CONCAT14(cVar4, uVar10));
    sVar7 = (short) iVar24;
    cVar5 = (0 < sVar7) * (sVar7 < 0xff) * (char) iVar24 - (0xff < sVar7);
    sVar8 = (short) ((uint) iVar24 >> 0x10);
    sVar7 = (short) ((uint) uVar10 >> 0x10);
    sVar25 = (short) ((uint6) uVar29 >> 0x20);
    sVar8 = (short) (CONCAT17((0 < sVar8) * (sVar8 < 0xff) * (char) ((uint) iVar24 >> 0x10) -
                              (0xff < sVar8), CONCAT16(cVar5, uVar29)) >> 0x30);
    FUN_140128320(plVar17, plVar20, 0,
                  CONCAT13((0 < sVar8) * (sVar8 < 0xff) * cVar5 - (0xff < sVar8),
                           CONCAT12((0 < sVar25) * (sVar25 < 0xff) * cVar4 - (0xff < sVar25),
                                    CONCAT11((0 < sVar7) * (sVar7 < 0xff) * cVar3 - (0xff < sVar7),
                                             (0 < sVar26) * (sVar26 < 0xff) * cVar2 - (0xff < sVar26))
                           )));
    if (plVar17 != (longlong *) 0x0) {
        plVar17[0x52] = plVar17[0x52] | 0x20;
        FUN_1400d62a0(param_1, plVar17);
        (**(code * *)(*plVar17 + 8))(plVar17);
    }
    return plVar17 != (longlong *) 0x0;
}


undefined8 FUN_140121660(longlong param_1) {
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;

    lVar1 = FUN_1400d66a0();
    if ((*(uint * )(lVar1 + 0x1b0) >> 8 & 1) == 0) {
        FUN_140056570(param_1, 1, "not a GenericDialog");
    }
    puVar3 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x10);
    puVar2 = &DAT_140a12138;
    if (puVar3 < *(undefined8 * *)(param_1 + 0x10)) {
        puVar2 = puVar3;
    }
    if ((*(int *) (puVar2 + 1) != 0) && ((*(int *) (puVar2 + 1) != 1 || (*(int *) puVar2 != 0)))) {
        *(undefined4 * )(lVar1 + 0x470) = 1;
        return 0;
    }
    *(undefined4 * )(lVar1 + 0x470) = 0;
    return 0;
}


undefined8 FUN_140121700(longlong param_1) {
    FUN_140057020(param_1, "GenericDialog", &PTR_s_SimpleMessage_140b571b0);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140121730(longlong param_1) {
    ulonglong uVar1;
    double *pdVar2;
    uint uVar3;
    int iVar4;
    int *piVar5;
    short *psVar6;
    longlong lVar7;
    uint uVar8;
    undefined local_28[8];
    longlong local_20;

    FUN_140057020(param_1, "Sound", &PTR_DAT_140b57178);
    uVar8 = 0;
    if (DAT_140c63838 == (code *) 0x0) {
        if ((_DAT_140c65648 != 0) || (iVar4 = FUN_140235aa0(), iVar4 < 0)) goto LAB_1401218c8;
        uVar3 = (**(code * *)(*DAT_140c63d60 + 0x28))();
    } else {
        uVar3 = (*DAT_140c63838)(&PTR_u_SoundUIContext_140a6d038);
    }
    if (uVar3 != 0) {
        do {
            if (DAT_140c63848 == (code *) 0x0) {
                if (_DAT_140c65648 == 0) {
                    iVar4 = FUN_140235aa0();
                    if (iVar4 < 0) {
                        piVar5 = (int *) 0x0;
                    } else {
                        piVar5 = (int *) (**(code * *)(*DAT_140c63d60 + 0x20))(DAT_140c63d60, uVar8);
                    }
                } else {
                    piVar5 = (int *) 0x0;
                }
            } else {
                piVar5 = (int *) (*DAT_140c63848)(&PTR_u_SoundUIContext_140a6d038, uVar8, DAT_140c63858);
            }
            uVar1 = *(ulonglong * )(piVar5 + 2);
            if (((uVar1 != 0) && (uVar1 <= DAT_140c3fe70)) && (DAT_140c3fe68 + uVar1 != 0)) {
                if (uVar1 == 0) {
                    psVar6 = (short *) 0x0;
                } else if (DAT_140c3fe70 < uVar1) {
                    psVar6 = (short *) 0x0;
                } else {
                    psVar6 = (short *) (DAT_140c3fe68 + uVar1);
                }
                if ((*psVar6 != 0) && (piVar5[4] != 0)) {
                    iVar4 = *piVar5;
                    pdVar2 = *(double **) (param_1 + 0x10);
                    *(undefined4 * )(pdVar2 + 1) = 3;
                    *pdVar2 = (double) iVar4;
                    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
                    uVar1 = *(ulonglong * )(piVar5 + 2);
                    if (uVar1 == 0) {
                        lVar7 = 0;
                    } else if (DAT_140c3fe70 < uVar1) {
                        lVar7 = 0;
                    } else {
                        lVar7 = DAT_140c3fe68 + uVar1;
                    }
                    lVar7 = FUN_14018f0e0(local_28, lVar7);
                    FUN_140058a40(param_1, 0xfffffffe, *(undefined8 * )(lVar7 + 8));
                    if (local_20 != 0) {
                        FUN_14018b900();
                    }
                }
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < uVar3);
    }
    LAB_1401218c8:
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
    return 1;
}


undefined8 FUN_1401218f0(longlong param_1) {
    undefined8 *puVar1;
    longlong *plVar2;
    undefined4 uVar3;
    longlong lVar4;

    puVar1 = *(undefined8 * *)(param_1 + 0x18);
    if (((puVar1 < *(undefined8 * *)(param_1 + 0x10)) && (puVar1 != &DAT_140a12138)) &&
        (0 < *(int *) (puVar1 + 1))) {
        uVar3 = FUN_140056d60(param_1, 1);
    } else {
        uVar3 = 0;
    }
    lVar4 = FUN_140235d00(uVar3);
    if ((lVar4 != 0) && (plVar2 = *(longlong * *)(DAT_140c63650 + 0x728), plVar2 != (longlong *) 0x0)) {
        (**(code * *)(*plVar2 + 0x10))(plVar2, *(undefined4 * )(lVar4 + 0x10), 0, 0, 0, 0, 0);
    }
    return 0;
}


uint FUN_140121ac0(longlong param_1, int param_2, undefined8 param_3, ulonglong param_4) {
    longlong lVar1;
    int iVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    uint uVar5;
    undefined local_48[8];
    longlong local_40;

    if (param_2 + 9999U < 10000) {
        param_2 = param_2 + 1 +
                  (int) (*(longlong * )(param_1 + 0x10) - *(longlong * )(param_1 + 0x18) >> 4);
    }
    puVar3 = (undefined8 *) FUN_1400580e0();
    uVar5 = 0;
    if ((puVar3 != &DAT_140a12138) && (uVar5 = 0, *(int *) (puVar3 + 1) == 5)) {
        *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        uVar5 = 0;
        while (true) {
            puVar3 = (undefined8 *) FUN_1400580e0(param_1, param_2);
            iVar2 = FUN_14005ba70(param_1, *puVar3, *(longlong * )(param_1 + 0x10) + -0x10);
            if (iVar2 == 0) break;
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            if ((*(undefined * *)(param_1 + 0x10) != &UNK_140a12158) &&
                (*(int *) (&DAT_ffffffffffffffe8 + (longlong) * (undefined * *)(param_1 + 0x10)) - 3U < 2)) {
                FUN_140056bb0(param_1, 0xfffffffe);
                FUN_14018f2d0(local_48);
                lVar1 = local_40;
                uVar4 = 0;
                if (param_4 != 0) {
                    do {
                        iVar2 = FUN_14018e2c0();
                        if (iVar2 == 0) {
                            iVar2 = *(int *) (*(longlong * )(param_1 + 0x10) + -8);
                            if ((iVar2 == 0) ||
                                ((iVar2 == 1 && (*(int *) (*(longlong * )(param_1 + 0x10) + -0x10) == 0)))) {
                                uVar5 = uVar5 & ~(1 << ((byte) uVar4 & 0x1f));
                            } else {
                                uVar5 = uVar5 | 1 << ((byte) uVar4 & 0x1f);
                            }
                        }
                        uVar4 = (ulonglong)((int) uVar4 + 1);
                    } while (uVar4 < param_4);
                }
                if (lVar1 != 0) {
                    FUN_14018b900(lVar1);
                }
            }
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
        }
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
    }
    return uVar5;
}


longlong FUN_140121c50(longlong param_1, char **param_2) {
    char *pcVar1;
    int iVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    char *pcVar7;
    char *pcVar8;
    longlong local_res8;
    longlong local_res18;
    undefined8 *local_28;
    longlong local_20;

    lVar4 = *(longlong * )(param_1 + 8);
    local_res8 = lVar4;
    if (*(longlong * )(lVar4 + 8) != 0) {
        lVar5 = *(longlong * )(lVar4 + 8);
        do {
            pcVar7 = *(char **) (lVar5 + 0x20);
            iVar3 = (int) *pcVar7;
            iVar2 = iVar3 - **param_2;
            pcVar8 = *param_2;
            while (iVar2 == 0) {
                if ((char) iVar3 == '\0') goto LAB_140121caf;
                iVar3 = (int) pcVar7[1];
                pcVar1 = pcVar8 + 1;
                pcVar7 = pcVar7 + 1;
                pcVar8 = pcVar8 + 1;
                iVar2 = iVar3 - *pcVar1;
            }
            if (iVar2 < 0) {
                lVar6 = *(longlong * )(lVar5 + 0x18);
            } else {
                LAB_140121caf:
                lVar6 = *(longlong * )(lVar5 + 0x10);
                local_res8 = lVar5;
            }
            lVar5 = lVar6;
        } while (lVar6 != 0);
    }
    if (local_res8 != lVar4) {
        pcVar7 = *param_2;
        pcVar8 = *(char **) (local_res8 + 0x20);
        iVar3 = (int) *pcVar7;
        iVar2 = iVar3 - *pcVar8;
        while (lVar4 = local_res8, iVar2 == 0) {
            if ((char) iVar3 == '\0') goto LAB_140121daa;
            iVar3 = (int) pcVar7[1];
            pcVar1 = pcVar8 + 1;
            pcVar7 = pcVar7 + 1;
            pcVar8 = pcVar8 + 1;
            iVar2 = iVar3 - *pcVar1;
        }
        if (-1 < iVar2) goto LAB_140121daa;
    }
    if (*param_2 == (char *) 0x0) {
        local_28 = (undefined8 *) 0x0;
    } else {
        lVar4 = *(longlong * )(*param_2 + -8);
        local_28 = (undefined8 *) FUN_14018b280(lVar4 + 0x11, 0);
        if (local_28 != (undefined8 *) 0x0) {
            local_28[1] = lVar4;
            *local_28 = &PTR_LAB_140b55060;
        }
        local_28 = local_28 + 2;
        FUN_1407db590(local_28, *param_2, lVar4);
        *(undefined * )((longlong) local_28 + lVar4) = 0;
    }
    local_20 = 0;
    FUN_140121e10(param_1, &local_res18, &local_res8, &local_28);
    if (local_20 != 0) {
        (**(code * *)(*(longlong * )(local_20 + -0x10) + 8))(local_20 + -0x10);
    }
    lVar4 = local_res18;
    if (local_28 != (undefined8 *) 0x0) {
        (**(code * *)(local_28[-2] + 8))(local_28 + -2);
    }
    LAB_140121daa:
    return lVar4 + 0x28;
}


uint FUN_140121dd0(undefined8 param_1, char **param_2, char **param_3) {
    char *pcVar1;
    uint uVar2;
    int iVar3;
    char *pcVar4;
    char *pcVar5;

    pcVar5 = *param_3;
    pcVar4 = *param_2;
    iVar3 = (int) *pcVar4;
    uVar2 = iVar3 - *pcVar5;
    if (iVar3 - *pcVar5 == 0) {
        while (uVar2 = 0, (char) iVar3 != '\0') {
            iVar3 = (int) pcVar4[1];
            pcVar1 = pcVar5 + 1;
            pcVar4 = pcVar4 + 1;
            pcVar5 = pcVar5 + 1;
            uVar2 = iVar3 - *pcVar1;
            if (uVar2 != 0) {
                return uVar2 & 0xffffff00 | (uint)((int) uVar2 < 0);
            }
        }
    }
    return uVar2 & 0xffffff00 | (uint)((int) uVar2 < 0);
}


undefined8 *FUN_140121e10(longlong param_1, undefined8 *param_2, char **param_3, char **param_4) {
    char *pcVar1;
    char cVar2;
    undefined8 *puVar3;
    longlong lVar4;
    longlong lVar5;
    int iVar6;
    int iVar7;
    char *pcVar8;
    char *pcVar9;
    char *pcVar10;
    bool bVar11;
    undefined local_18[16];

    pcVar8 = *(char **) (param_1 + 8);
    pcVar9 = *param_3;
    if (pcVar9 == *(char **) (pcVar8 + 0x10)) {
        if (*(longlong * )(param_1 + 0x10) != 0) {
            pcVar8 = *param_4;
            pcVar10 = *(char **) (pcVar9 + 0x20);
            iVar7 = (int) *pcVar8;
            iVar6 = iVar7 - *pcVar10;
            while (iVar6 == 0) {
                if ((char) iVar7 == '\0') goto LAB_140121e97;
                iVar7 = (int) pcVar8[1];
                pcVar1 = pcVar10 + 1;
                pcVar8 = pcVar8 + 1;
                pcVar10 = pcVar10 + 1;
                iVar6 = iVar7 - *pcVar1;
            }
            if (iVar6 < 0) {
                FUN_140122020(param_1, param_2, pcVar9, pcVar9, param_4);
                return param_2;
            }
        }
        LAB_140121e97:
        puVar3 = (undefined8 *) FUN_140122150(param_1, local_18, param_4);
        *param_2 = *puVar3;
    } else if (pcVar9 == pcVar8) {
        pcVar9 = *param_4;
        pcVar10 = *(char **) (*(longlong * )(pcVar8 + 0x18) + 0x20);
        iVar7 = (int) *pcVar10;
        iVar6 = iVar7 - *pcVar9;
        while (iVar6 == 0) {
            if ((char) iVar7 == '\0') goto LAB_140121f06;
            iVar7 = (int) pcVar10[1];
            pcVar1 = pcVar9 + 1;
            pcVar10 = pcVar10 + 1;
            pcVar9 = pcVar9 + 1;
            iVar6 = iVar7 - *pcVar1;
        }
        if (iVar6 < 0) {
            FUN_140122020(param_1, param_2, 0, *(longlong * )(pcVar8 + 0x18), param_4);
        } else {
            LAB_140121f06:
            puVar3 = (undefined8 *) FUN_140122150(param_1, local_18, param_4);
            *param_2 = *puVar3;
        }
    } else {
        if ((*pcVar9 == '\0') && (*(char **) (*(longlong * )(pcVar9 + 8) + 8) == pcVar9)) {
            lVar5 = *(longlong * )(pcVar9 + 0x18);
        } else {
            lVar5 = *(longlong * )(pcVar9 + 0x10);
            if (lVar5 == 0) {
                lVar5 = *(longlong * )(pcVar9 + 8);
                lVar4 = lVar5;
                if (pcVar9 == *(char **) (lVar5 + 0x10)) {
                    do {
                        lVar5 = *(longlong * )(lVar4 + 8);
                        bVar11 = lVar4 == *(longlong * )(lVar5 + 0x10);
                        lVar4 = lVar5;
                    } while (bVar11);
                }
            } else {
                for (lVar4 = *(longlong * )(lVar5 + 0x18); lVar4 != 0; lVar4 = *(longlong * )(lVar4 + 0x18)) {
                    lVar5 = lVar4;
                }
            }
        }
        pcVar8 = *(char **) (lVar5 + 0x20);
        pcVar10 = *param_4;
        iVar7 = (int) *pcVar8;
        iVar6 = iVar7 - *pcVar10;
        while (iVar6 == 0) {
            if ((char) iVar7 == '\0') goto LAB_140121fec;
            iVar7 = (int) pcVar8[1];
            pcVar1 = pcVar10 + 1;
            pcVar8 = pcVar8 + 1;
            pcVar10 = pcVar10 + 1;
            iVar6 = iVar7 - *pcVar1;
        }
        if ((iVar6 < 0) && (cVar2 = FUN_140121dd0(iVar6, param_4, pcVar9 + 0x20), cVar2 != '\0')) {
            if (*(longlong * )(lVar5 + 0x18) == 0) {
                FUN_140122020(param_1, param_2, 0, lVar5, param_4);
            } else {
                FUN_140122020(param_1, param_2, pcVar9, pcVar9, param_4);
            }
        } else {
            LAB_140121fec:
            puVar3 = (undefined8 *) FUN_140122150(param_1, local_18, param_4);
            *param_2 = *puVar3;
        }
    }
    return param_2;
}


longlong *
FUN_140122020(longlong param_1, longlong *param_2, longlong param_3, longlong param_4, char **param_5) {
    char *pcVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    int iVar5;
    char *pcVar6;
    char *pcVar7;

    if ((param_4 != *(longlong * )(param_1 + 8)) && (param_3 == 0)) {
        pcVar7 = *(char **) (param_4 + 0x20);
        pcVar6 = *param_5;
        iVar5 = (int) *pcVar6;
        iVar4 = iVar5 - *pcVar7;
        while (iVar4 == 0) {
            if ((char) iVar5 == '\0') goto LAB_140122092;
            iVar5 = (int) pcVar6[1];
            pcVar1 = pcVar7 + 1;
            pcVar6 = pcVar6 + 1;
            pcVar7 = pcVar7 + 1;
            iVar4 = iVar5 - *pcVar1;
        }
        if (-1 < iVar4) {
            LAB_140122092:
            lVar3 = FUN_14018b280(0x30);
            if (lVar3 + 0x20 != 0) {
                FUN_1401222d0(lVar3 + 0x20, param_5);
            }
            *(longlong * )(param_4 + 0x18) = lVar3;
            if (param_4 == *(longlong * )(*(longlong * )(param_1 + 8) + 0x18)) {
                *(longlong * )(*(longlong * )(param_1 + 8) + 0x18) = lVar3;
            }
            goto LAB_140122107;
        }
    }
    lVar3 = FUN_14018b280(0x30);
    if (lVar3 + 0x20 != 0) {
        FUN_1401222d0(lVar3 + 0x20, param_5);
    }
    *(longlong * )(param_4 + 0x10) = lVar3;
    lVar2 = *(longlong * )(param_1 + 8);
    if (param_4 == lVar2) {
        *(longlong * )(lVar2 + 8) = lVar3;
        *(longlong * )(*(longlong * )(param_1 + 8) + 0x18) = lVar3;
    } else if (param_4 == *(longlong * )(lVar2 + 0x10)) {
        *(longlong * )(lVar2 + 0x10) = lVar3;
    }
    LAB_140122107:
    *(longlong * )(lVar3 + 8) = param_4;
    *(undefined8 * )(lVar3 + 0x10) = 0;
    *(undefined8 * )(lVar3 + 0x18) = 0;
    FUN_1400081c0(lVar3, *(longlong * )(param_1 + 8) + 8);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 1;
    *param_2 = lVar3;
    return param_2;
}


char **FUN_140122150(longlong param_1, char **param_2, char **param_3) {
    char *pcVar1;
    char **ppcVar2;
    int iVar3;
    uint uVar4;
    int iVar5;
    char *pcVar6;
    uint uVar7;
    char *pcVar8;
    char *pcVar9;
    char *pcVar10;
    char *pcVar11;
    bool bVar12;
    undefined local_res8[8];

    pcVar10 = *(char **) (param_1 + 8);
    pcVar8 = *(char **) (pcVar10 + 8);
    bVar12 = true;
    pcVar6 = pcVar10;
    if (pcVar8 != (char *) 0x0) {
        uVar7 = (uint) * *param_3;
        do {
            pcVar6 = pcVar8;
            pcVar8 = *(char **) (pcVar6 + 0x20);
            iVar3 = uVar7 - (int) *pcVar8;
            if (iVar3 == 0) {
                uVar4 = uVar7 & 0xff;
                pcVar9 = *param_3;
                do {
                    if ((char) uVar4 == '\0') {
                        iVar3 = 0;
                        break;
                    }
                    uVar4 = (uint) pcVar9[1];
                    pcVar11 = pcVar8 + 1;
                    pcVar9 = pcVar9 + 1;
                    pcVar8 = pcVar8 + 1;
                    iVar3 = uVar4 - (int) *pcVar11;
                } while (iVar3 == 0);
            }
            bVar12 = iVar3 < 0;
            if (bVar12) {
                pcVar8 = *(char **) (pcVar6 + 0x10);
            } else {
                pcVar8 = *(char **) (pcVar6 + 0x18);
            }
        } while (pcVar8 != (char *) 0x0);
    }
    pcVar9 = pcVar6;
    if (bVar12) {
        if (pcVar6 == *(char **) (pcVar10 + 0x10)) goto LAB_1401221f9;
        if ((*pcVar6 == '\0') && (*(char **) (*(longlong * )(pcVar6 + 8) + 8) == pcVar6)) {
            pcVar9 = *(char **) (pcVar6 + 0x18);
        } else {
            pcVar9 = *(char **) (pcVar6 + 0x10);
            if (pcVar9 == (char *) 0x0) {
                pcVar9 = *(char **) (pcVar6 + 8);
                pcVar10 = pcVar9;
                if (pcVar6 == *(char **) (pcVar9 + 0x10)) {
                    do {
                        pcVar9 = *(char **) (pcVar10 + 8);
                        bVar12 = pcVar10 == *(char **) (pcVar9 + 0x10);
                        pcVar10 = pcVar9;
                    } while (bVar12);
                }
            } else {
                for (pcVar10 = *(char **) (pcVar9 + 0x18); pcVar10 != (char *) 0x0;
                     pcVar10 = *(char **) (pcVar10 + 0x18)) {
                    pcVar9 = pcVar10;
                }
            }
        }
    }
    pcVar10 = *(char **) (pcVar9 + 0x20);
    pcVar11 = *param_3;
    iVar3 = (int) *pcVar10;
    iVar5 = iVar3 - *pcVar11;
    while (iVar5 == 0) {
        if ((char) iVar3 == '\0') goto LAB_1401222b7;
        iVar3 = (int) pcVar10[1];
        pcVar1 = pcVar11 + 1;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar11 + 1;
        iVar5 = iVar3 - *pcVar1;
    }
    if (-1 < iVar5) {
        LAB_1401222b7:
        *param_2 = pcVar9;
        *(undefined * )(param_2 + 1) = 0;
        return param_2;
    }
    LAB_1401221f9:
    ppcVar2 = (char **) FUN_140122020(param_1, local_res8, pcVar8, pcVar6, param_3);
    *param_2 = *ppcVar2;
    *(undefined * )(param_2 + 1) = 1;
    return param_2;
}


longlong *FUN_1401222d0(longlong *param_1, longlong *param_2) {
    longlong lVar1;
    undefined8 *puVar2;

    if (*param_2 == 0) {
        *param_1 = 0;
    } else {
        lVar1 = *(longlong * )(*param_2 + -8);
        puVar2 = (undefined8 *) FUN_14018b280(lVar1 + 0x11, 0);
        if (puVar2 != (undefined8 *) 0x0) {
            *puVar2 = &PTR_LAB_140b55060;
            puVar2[1] = lVar1;
        }
        puVar2 = puVar2 + 2;
        FUN_1407db590(puVar2, *param_2, lVar1);
        *(undefined * )((longlong) puVar2 + lVar1) = 0;
        *param_1 = (longlong) puVar2;
    }
    if (param_2[1] == 0) {
        param_1[1] = 0;
    } else {
        lVar1 = *(longlong * )(param_2[1] + -8);
        puVar2 = (undefined8 *) FUN_14018b280(lVar1 + 0x11, 0);
        if (puVar2 != (undefined8 *) 0x0) {
            *puVar2 = &PTR_LAB_140b55060;
            puVar2[1] = lVar1;
        }
        puVar2 = puVar2 + 2;
        FUN_1407db590(puVar2, param_2[1], lVar1);
        *(undefined * )((longlong) puVar2 + lVar1) = 0;
        param_1[1] = (longlong) puVar2;
    }
    return param_1;
}


void FUN_1401223b0(undefined4 *param_1, int *param_2) {
    longlong lVar1;
    longlong lVar2;
    undefined8 *puVar3;
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
    undefined4 local_68[4];
    undefined4 local_58[4];
    uint local_48;
    int local_38[4];
    undefined4 local_28[4];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) & local_98;
    local_28[0] = 0x3f000000;
    local_28[1] = 0x3f000000;
    local_28[2] = 0x3f000000;
    local_28[3] = 0x3f000000;
    local_38[0] = -(*param_2 / 2);
    local_38[1] = -(param_2[1] / 2);
    local_38[2] = *param_2 / 2;
    local_48 = 0;
    local_38[3] = param_2[1] / 2;
    lVar1 = 0;
    puVar3 = (undefined8 * ) & local_88;
    do {
        lVar2 = lVar1 + 4;
        *(undefined4 * )((longlong) local_68 + lVar1) = *(undefined4 * )((longlong) local_28 + lVar1);
        *(undefined4 * )((longlong) local_58 + lVar1) = *(undefined4 * )((longlong) local_38 + lVar1);
        *puVar3 = 0;
        lVar1 = lVar2;
        puVar3 = puVar3 + 1;
    } while (lVar2 < 0x10);
    *param_1 = local_98;
    param_1[1] = uStack148;
    param_1[2] = uStack144;
    param_1[3] = uStack140;
    param_1[0x14] = local_48 | 0x300;
    param_1[4] = local_88;
    param_1[5] = uStack132;
    param_1[6] = uStack128;
    param_1[7] = uStack124;
    param_1[8] = local_78;
    param_1[9] = uStack116;
    param_1[10] = uStack112;
    param_1[0xb] = uStack108;
    param_1[0xc] = local_68[0];
    param_1[0xd] = local_68[1];
    param_1[0xe] = local_68[2];
    param_1[0xf] = local_68[3];
    param_1[0x10] = local_58[0];
    param_1[0x11] = local_58[1];
    param_1[0x12] = local_58[2];
    param_1[0x13] = local_58[3];
    FUN_1407db4f0(local_18 ^ (ulonglong) & local_98);
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1401224c0(undefined8 *param_1, undefined8 param_2, int *param_3, undefined4 param_4,
                   undefined4 param_5) {
    undefined8 *puVar1;
    uint *puVar2;
    uint uVar3;
    longlong lVar4;
    char cVar5;
    uint uVar6;
    longlong lVar7;
    longlong *plVar8;
    longlong *plVar9;
    undefined8 uVar10;
    undefined auVar11[16];
    int iVar14;
    undefined in_XMM6_Ba;
    byte bVar15;
    undefined in_XMM6_Bb;
    undefined uVar16;
    undefined in_XMM6_Bc;
    undefined uVar17;
    undefined in_XMM6_Bd;
    undefined uVar18;
    undefined in_XMM6_Be;
    undefined uVar19;
    undefined in_XMM6_Bf;
    undefined uVar20;
    undefined in_XMM6_Bg;
    undefined uVar21;
    undefined in_XMM6_Bh;
    undefined uVar22;
    undefined auStack248[32];
    undefined *local_d8;
    undefined8 local_d0;
    undefined8 local_c8;
    undefined local_b8[16];
    int local_a8;
    int local_a4;
    undefined local_98[96];
    ulonglong local_38;
    undefined auVar12[16];
    undefined auVar13[16];

    local_38 = DAT_140c0f7b0 ^ (ulonglong) auStack248;
    plVar9 = (longlong *) 0x0;
    local_c8 = 0;
    local_d0 = 0x18;
    local_d8 = &DAT_140c67280;
    FUN_1400c5920(param_1, param_2, 0);
    *param_1 = &PTR_LAB_140b576c0;
    param_1[0x8c] = 0;
    *(undefined4 * )(param_1 + 0x8d) = param_4;
    *(undefined4 * )(param_1 + 0x8e) = 0;
    *(undefined4 * )((longlong) param_1 + 0x46c) = param_5;
    lVar7 = FUN_14018b280(0x30, 0);
    plVar8 = plVar9;
    if (lVar7 != 0) {
        plVar8 = (longlong *) FUN_1401095e0(lVar7);
    }
    lVar7 = param_1[4];
    param_1[99] = plVar8;
    if ((lVar7 != 0) &&
        ((*plVar8 == 0 || (cVar5 = FUN_14002c740(plVar8 + 2, L"WhiteFill"), cVar5 == '\0')))) {
        lVar7 = FUN_140108e80(lVar7 + 0xf0, L"WhiteFill");
        if (lVar7 != 0) {
            do {
                lVar4 = (longlong) plVar9 + 1;
                plVar9 = (longlong * )((longlong) plVar9 + 1);
            } while (L"WhiteFill"[lVar4] != L'\0');
            FUN_14001c480(plVar8 + 2, L"WhiteFill", L"WhiteFill" + (longlong) plVar9);
        }
        FUN_1401097f0(plVar8, lVar7);
    }
    uVar6 = CONCAT13(in_XMM6_Bd, CONCAT12(in_XMM6_Bc, CONCAT11(in_XMM6_Bb, in_XMM6_Ba))) ^
            CONCAT13(in_XMM6_Bd, CONCAT12(in_XMM6_Bc, CONCAT11(in_XMM6_Bb, in_XMM6_Ba)));
    bVar15 = (byte) uVar6;
    uVar16 = (undefined)(uVar6 >> 8);
    uVar17 = (undefined)(uVar6 >> 0x10);
    uVar18 = (undefined)(uVar6 >> 0x18);
    uVar3 = CONCAT13(in_XMM6_Bh, CONCAT12(in_XMM6_Bg, CONCAT11(in_XMM6_Bf, in_XMM6_Be))) ^
            CONCAT13(in_XMM6_Bh, CONCAT12(in_XMM6_Bg, CONCAT11(in_XMM6_Bf, in_XMM6_Be)));
    uVar19 = (undefined) uVar3;
    uVar20 = (undefined)(uVar3 >> 8);
    uVar21 = (undefined)(uVar3 >> 0x10);
    uVar22 = (undefined)(uVar3 >> 0x18);
    auVar13 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                         SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                          (uVar22, CONCAT114(SUB161(_DAT_140b7b6a0 >> 0x38, 0),
                                                                                                                                             SUB1614(_DAT_140b7b6a0, 0))) >>
                                                                                                                                                                          0x70, 0),
                                                                                                           CONCAT113(uVar21, SUB1613(_DAT_140b7b6a0, 0)
                                                                                                           )) >> 0x68, 0),
                                                                                          CONCAT112(SUB161(_DAT_140b7b6a0 >> 0x30, 0),
                                                                                                    SUB1612(_DAT_140b7b6a0, 0))) >> 0x60, 0),
                                                                         CONCAT111(uVar20, SUB1611(_DAT_140b7b6a0, 0))) >>
                                                                                                                        0x58, 0), CONCAT110(SUB161(_DAT_140b7b6a0 >> 0x28, 0),
                                                                                                                                            SUB1610(_DAT_140b7b6a0, 0))) >>
                                                                                                                                                                         0x50, 0),
                                                                 CONCAT19(uVar19, SUB169(_DAT_140b7b6a0, 0)))
                                                               >> 0x48, 0),
                                                CONCAT18(SUB161(_DAT_140b7b6a0 >> 0x20, 0),
                                                         SUB168(_DAT_140b7b6a0, 0))) >> 0x40, 0), uVar18),
                       (SUB167(_DAT_140b7b6a0, 0) >> 0x18) << 0x30);
    auVar12 = CONCAT115(CONCAT101(SUB1610(auVar13 >> 0x30, 0), uVar17),
                        (SUB165(_DAT_140b7b6a0, 0) >> 0x10) << 0x20);
    auVar11 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar12 >> 0x20, 0), uVar16),
                                          (SUB163(_DAT_140b7b6a0, 0) >> 8) << 0x10) >> 0x10, 0),
                        SUB162(_DAT_140b7b6a0, 0) & 0xff | (ushort) bVar15 << 8);
    iVar14 = SUB164(CONCAT214((short) (uVar3 >> 0x10),
                              CONCAT212(SUB162(auVar13 >> 0x30, 0), SUB1612(auVar11, 0))) >> 0x60, 0);
    auVar12 = CONCAT610(SUB166(CONCAT412(iVar14, CONCAT210((short) uVar3, SUB1610(auVar11, 0))) >> 0x50, 0),
                        CONCAT28(SUB162(auVar12 >> 0x20, 0), SUB168(auVar11, 0)));
    local_b8 = CONCAT412((float) iVar14 * 0.003921569,
                         CONCAT48((float) (SUB164(auVar11, 0) & 0xffff | uVar6 << 0x10) * 0.003921569,
                                  CONCAT44((float) SUB164(CONCAT106(CONCAT82(SUB168(auVar12 >> 0x40, 0),
                                                                             (short) (uVar6 >> 0x10)),
                                                                    (SUB166(auVar11, 0) >> 0x10) << 0x20
                                           ) >> 0x20, 0) * 0.003921569,
                                           (float) SUB164(auVar12 >> 0x40, 0) * 0.003921569)));
    uVar6 = FUN_140141f10(DAT_140c63678, local_b8);
    puVar1 = param_1 + 0x59;
    lVar7 = DAT_140c63678;
    if (puVar1 != (undefined8 *) local_b8) {
        FUN_1401429a0(DAT_140c63678, *(undefined4 *) puVar1);
        lVar7 = DAT_140c63678;
        *(uint *) puVar1 = uVar6;
        if ((ulonglong) uVar6 < *(ulonglong * )(lVar7 + 0x30)) {
            iVar14 = *(int *) ((ulonglong) uVar6 * 0x20 + 0x10 + *(longlong * )(lVar7 + 0x28));
            if (iVar14 - 1U < 0xfffffffe) {
                *(int *) ((ulonglong) uVar6 * 0x20 + 0x10 + *(longlong * )(lVar7 + 0x28)) = iVar14 + 1;
            }
        }
    }
    FUN_1401429a0(lVar7, (ulonglong) uVar6);
    auVar13 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                         SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                          (uVar22, CONCAT114(SUB161(_DAT_140b7b610 >> 0x38, 0),
                                                                                                                                             SUB1614(_DAT_140b7b610, 0))) >>
                                                                                                                                                                          0x70, 0),
                                                                                                           CONCAT113(uVar21, SUB1613(_DAT_140b7b610, 0)
                                                                                                           )) >> 0x68, 0),
                                                                                          CONCAT112(SUB161(_DAT_140b7b610 >> 0x30, 0),
                                                                                                    SUB1612(_DAT_140b7b610, 0))) >> 0x60, 0),
                                                                         CONCAT111(uVar20, SUB1611(_DAT_140b7b610, 0))) >>
                                                                                                                        0x58, 0), CONCAT110(SUB161(_DAT_140b7b610 >> 0x28, 0),
                                                                                                                                            SUB1610(_DAT_140b7b610, 0))) >>
                                                                                                                                                                         0x50, 0),
                                                                 CONCAT19(uVar19, SUB169(_DAT_140b7b610, 0)))
                                                               >> 0x48, 0),
                                                CONCAT18(SUB161(_DAT_140b7b610 >> 0x20, 0),
                                                         SUB168(_DAT_140b7b610, 0))) >> 0x40, 0), uVar18),
                       (SUB167(_DAT_140b7b610, 0) >> 0x18) << 0x30);
    auVar12 = CONCAT115(CONCAT101(SUB1610(auVar13 >> 0x30, 0), uVar17),
                        (SUB165(_DAT_140b7b610, 0) >> 0x10) << 0x20);
    auVar11 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar12 >> 0x20, 0), uVar16),
                                          (SUB163(_DAT_140b7b610, 0) >> 8) << 0x10) >> 0x10, 0),
                        SUB162(_DAT_140b7b610, 0) & 0xff | (ushort) bVar15 << 8);
    iVar14 = SUB164(CONCAT214(CONCAT11(uVar22, uVar21),
                              CONCAT212(SUB162(auVar13 >> 0x30, 0), SUB1612(auVar11, 0))) >> 0x60, 0);
    auVar12 = CONCAT610(SUB166(CONCAT412(iVar14, CONCAT210(CONCAT11(uVar20, uVar19), SUB1610(auVar11, 0)))
                                       >> 0x50, 0), CONCAT28(SUB162(auVar12 >> 0x20, 0), SUB168(auVar11, 0)));
    local_b8 = CONCAT412((float) iVar14 * 0.003921569,
                         CONCAT48((float) (SUB164(auVar11, 0) & 0xffff |
                                           (uint) CONCAT11(uVar16, bVar15) << 0x10) * 0.003921569,
                                  CONCAT44((float) SUB164(CONCAT106(CONCAT82(SUB168(auVar12 >> 0x40, 0),
                                                                             CONCAT11(uVar18, uVar17)),
                                                                    (SUB166(auVar11, 0) >> 0x10) << 0x20
                                           ) >> 0x20, 0) * 0.003921569,
                                           (float) SUB164(auVar12 >> 0x40, 0) * 0.003921569)));
    uVar6 = FUN_140141f10(DAT_140c63678, local_b8);
    puVar2 = (uint * )((longlong) param_1 + 0x2c4);
    lVar7 = DAT_140c63678;
    if (puVar2 != (uint *) local_b8) {
        FUN_1401429a0(DAT_140c63678, *puVar2);
        lVar7 = DAT_140c63678;
        *puVar2 = uVar6;
        if ((ulonglong) uVar6 < *(ulonglong * )(lVar7 + 0x30)) {
            iVar14 = *(int *) ((ulonglong) uVar6 * 0x20 + 0x10 + *(longlong * )(lVar7 + 0x28));
            if (iVar14 - 1U < 0xfffffffe) {
                *(int *) ((ulonglong) uVar6 * 0x20 + 0x10 + *(longlong * )(lVar7 + 0x28)) = iVar14 + 1;
            }
        }
    }
    FUN_1401429a0(lVar7, (ulonglong) uVar6);
    param_1[0x36] = param_1[0x36] | 0x100;
    lVar7 = FUN_1400e58c0(param_1[4], L"Chat");
    plVar9 = (longlong *) param_1[0x56];
    param_1[0x57] = lVar7;
    if (plVar9 != (longlong *) 0x0) {
        (**(code * *)(*plVar9 + 0x28))(plVar9, *(undefined8 * )(lVar7 + 0x60));
    }
    param_1[0x80] = 0;
    param_1[0x81] = 0;
    param_1[0x82] = 0;
    param_1[0x83] = 0;
    param_1[0x84] = 0;
    param_1[0x85] = 0;
    param_1[0x89] = 0;
    param_1[0x86] = 0;
    param_1[0x87] = 0;
    param_1[0x8a] = 0;
    param_1[0x88] = 0;
    param_1[0x8b] = 0;
    FUN_1400ca590();
    uVar10 = FUN_1401223b0(local_98, local_b8);
    FUN_1400cc680(param_1, uVar10);
    FUN_1400e8b00(param_1[4], param_1);
    FUN_1407db4f0(local_38 ^ (ulonglong) auStack248);
    return;
}


undefined8 FUN_140122830(undefined8 param_1, ulonglong param_2) {
    FUN_140122870();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_140122870(undefined8 *param_1, undefined8 param_2) {
    *param_1 = &PTR_LAB_140b576c0;
    if ((longlong *) param_1[0x80] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x80] + 8))();
        param_1[0x80] = 0;
    }
    if ((longlong *) param_1[0x81] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x81] + 8))();
        param_1[0x81] = 0;
    }
    if ((longlong *) param_1[0x82] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x82] + 8))();
        param_1[0x82] = 0;
    }
    if ((longlong *) param_1[0x83] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x83] + 8))();
        param_1[0x83] = 0;
    }
    if ((longlong *) param_1[0x84] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x84] + 8))();
        param_1[0x84] = 0;
    }
    if ((longlong *) param_1[0x85] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x85] + 8))();
        param_1[0x85] = 0;
    }
    if ((longlong *) param_1[0x89] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x89] + 8))();
        param_1[0x89] = 0;
    }
    if ((longlong *) param_1[0x86] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x86] + 8))();
        param_1[0x86] = 0;
    }
    if ((longlong *) param_1[0x87] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x87] + 8))();
        param_1[0x87] = 0;
    }
    if ((longlong *) param_1[0x8a] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x8a] + 8))();
        param_1[0x8a] = 0;
    }
    if ((longlong *) param_1[0x88] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x88] + 8))();
        param_1[0x88] = 0;
    }
    if ((longlong *) param_1[0x8b] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x8b] + 8))();
        param_1[0x8b] = 0;
    }
    FUN_1400579e0(*(undefined8 * )(param_1[4] + 400), param_2, *(undefined4 * )(param_1 + 0x8d));
    FUN_1400579e0(*(undefined8 * )(param_1[4] + 400), param_2, *(undefined4 * )((longlong) param_1 + 0x46c)
    );
    FUN_1400c6030(param_1);
    return;
}



// WARNING: Removing unreachable block (ram,0x000140122aec)

int *FUN_140122a00(int *param_1, undefined8 param_2, longlong param_3) {
    undefined4 uVar1;
    uint uVar2;
    int iVar3;
    int iVar4;
    undefined auVar5[16];

    if (param_3 != 0) {
        uVar1 = (**(code * *)(*DAT_140c65680 + 0x108))();
        auVar5 = ZEXT416(0x43c80000) & (undefined[16]) 0xffffffffffffffff;
        iVar3 = (int) SUB164(auVar5, 0);
        if ((iVar3 != -0x80000000) && ((float) iVar3 != SUB164(auVar5, 0))) {
            uVar2 = movmskps(uVar1, ZEXT816(SUB168(auVar5, 0) | SUB168(auVar5, 0) << 0x20));
            auVar5 = ZEXT416((uint)(float)(iVar3 + (uVar2 & 1 ^ 1)));
        }
        iVar4 = (int) SUB164(auVar5, 0);
        iVar3 = 200;
        if ((199 < iVar4) && (iVar3 = iVar4, 400 < iVar4)) {
            iVar3 = 400;
        }
        *param_1 = iVar3;
        param_1[1] = 0;
        return param_1;
    }
    *param_1 = DAT_140c77760;
    param_1[1] = DAT_140c77764;
    return param_1;
}


undefined4 FUN_140122b30(longlong param_1) {
    undefined4 uVar1;

    uVar1 = FUN_1400d2120();
    if (*(int *) (param_1 + 0x470) != 0) {
        uVar1 = 1;
    }
    return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140123230(longlong param_1, undefined8 param_2, int param_3) {
    longlong *plVar1;
    undefined4 *puVar2;
    int iVar3;
    uint uVar4;
    uint uVar5;
    longlong lVar6;
    longlong *plVar7;
    longlong *plVar8;
    undefined8 *puVar9;
    undefined extraout_XMM0_Ba;
    undefined extraout_XMM0_Ba_00;
    undefined extraout_XMM0_Bb;
    undefined extraout_XMM0_Bb_00;
    undefined extraout_XMM0_Bc;
    undefined extraout_XMM0_Bc_00;
    undefined uVar10;
    undefined uVar11;
    undefined extraout_XMM0_Bd;
    undefined extraout_XMM0_Bd_00;
    undefined uVar12;
    undefined extraout_XMM0_Be;
    undefined extraout_XMM0_Be_00;
    undefined uVar13;
    undefined extraout_XMM0_Bf;
    undefined extraout_XMM0_Bf_00;
    undefined uVar14;
    undefined uVar15;
    undefined extraout_XMM0_Bg;
    undefined extraout_XMM0_Bg_00;
    undefined uVar16;
    undefined extraout_XMM0_Bh;
    undefined extraout_XMM0_Bh_00;
    undefined uVar17;
    undefined auVar18[16];
    undefined auStack360[32];
    undefined *local_148;
    undefined8 local_140;
    undefined8 local_138;
    longlong local_128[4];
    undefined4 local_108;
    undefined4 uStack260;
    undefined4 uStack256;
    undefined4 uStack252;
    undefined4 local_f8;
    undefined4 uStack244;
    undefined4 uStack240;
    undefined4 uStack236;
    undefined4 local_e8[8];
    uint local_c8;
    undefined local_b8[16];
    undefined4 local_a8;
    undefined4 uStack164;
    undefined4 uStack160;
    undefined4 uStack156;
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
    uint local_68;
    float local_58[4];
    undefined8 local_48;
    undefined4 local_40;
    undefined4 local_3c;
    ulonglong local_38;
    undefined auVar19[16];
    undefined auVar20[16];
    undefined auVar21[16];

    local_38 = DAT_140c0f7b0 ^ (ulonglong) auStack360;
    plVar7 = (longlong *) 0x0;
    local_48 = 0;
    local_40 = 0x3f800000;
    local_58[3] = (float) (param_3 + 4);
    local_3c = 0;
    local_58[0] = 5.605194e-45;
    local_58[1] = 5.605194e-45;
    local_58[2] = -NAN;
    local_c8 = 0;
    plVar8 = plVar7;
    puVar9 = (undefined8 * ) & local_108;
    do {
        puVar2 = (undefined4 * )((longlong) & local_48 + (longlong) plVar8);
        plVar8 = (longlong * )((longlong) plVar8 + 4);
        *(undefined4 * )((longlong) & uStack236 + (longlong) plVar8) = *puVar2;
        *(undefined4 * )((longlong)(local_e8 + 3) + (longlong) plVar8) =
                *(undefined4 * )(&stack0xffffffffffffffa4 + (longlong) plVar8);
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
    } while ((longlong) plVar8 < 0x10);
    local_68 = local_c8 | 0x300;
    local_98 = local_f8;
    uStack148 = uStack244;
    uStack144 = uStack240;
    uStack140 = uStack236;
    local_a8 = local_108;
    uStack164 = uStack260;
    uStack160 = uStack256;
    uStack156 = uStack252;
    local_88 = local_e8[0];
    uStack132 = local_e8[1];
    uStack128 = local_e8[2];
    uStack124 = local_e8[3];
    local_78 = local_e8[4];
    uStack116 = local_e8[5];
    uStack112 = local_e8[6];
    uStack108 = local_e8[7];
    lVar6 = FUN_14018b280(0x580, 0);
    plVar8 = plVar7;
    uVar11 = extraout_XMM0_Ba;
    uVar15 = extraout_XMM0_Bb;
    uVar10 = extraout_XMM0_Bc;
    uVar12 = extraout_XMM0_Bd;
    uVar13 = extraout_XMM0_Be;
    uVar14 = extraout_XMM0_Bf;
    uVar16 = extraout_XMM0_Bg;
    uVar17 = extraout_XMM0_Bh;
    if (lVar6 != 0) {
        local_148 = local_b8;
        local_138 = 3;
        local_140 = 0x110;
        plVar8 = (longlong *) FUN_14010e4a0(lVar6, *(undefined8 * )(param_1 + 0x20), param_1);
        uVar11 = extraout_XMM0_Ba_00;
        uVar15 = extraout_XMM0_Bb_00;
        uVar10 = extraout_XMM0_Bc_00;
        uVar12 = extraout_XMM0_Bd_00;
        uVar13 = extraout_XMM0_Be_00;
        uVar14 = extraout_XMM0_Bf_00;
        uVar16 = extraout_XMM0_Bg_00;
        uVar17 = extraout_XMM0_Bh_00;
    }
    lVar6 = DAT_140c63678;
    auVar18 = _DAT_140b7b5e0;
    uVar5 = CONCAT13(uVar12, CONCAT12(uVar10, CONCAT11(uVar15, uVar11))) ^
            CONCAT13(uVar12, CONCAT12(uVar10, CONCAT11(uVar15, uVar11)));
    uVar11 = (undefined)(uVar5 >> 0x10);
    uVar4 = CONCAT13(uVar17, CONCAT12(uVar16, CONCAT11(uVar14, uVar13))) ^
            CONCAT13(uVar17, CONCAT12(uVar16, CONCAT11(uVar14, uVar13)));
    uVar15 = (undefined)(uVar4 >> 8);
    *(undefined4 * )(plVar8 + 0x58) = 0x10;
    auVar21 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                                          SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                                           ((char) (uVar4 >> 0x18),
                                                                                                                                            CONCAT114(SUB161(auVar18 >> 0x38, 0),
                                                                                                                                                      SUB1614(auVar18, 0))) >> 0x70, 0),
                                                                                                                            CONCAT113((char) (uVar4 >> 0x10), SUB1613(auVar18, 0)
                                                                                                                            )) >> 0x68, 0),
                                                                                                           CONCAT112(SUB161(auVar18 >> 0x30, 0),
                                                                                                                     SUB1612(auVar18, 0))) >> 0x60, 0),
                                                                                          CONCAT111(uVar15, SUB1611(auVar18, 0))) >> 0x58, 0),
                                                                                  CONCAT110(SUB161(auVar18 >> 0x28, 0),
                                                                                            SUB1610(auVar18, 0)))
                                                                                >> 0x50, 0),
                                                                 CONCAT19((char) uVar4, SUB169(auVar18, 0))) >> 0x48, 0
                                ), CONCAT18(SUB161(auVar18 >> 0x20, 0),
                                            SUB168(auVar18, 0))) >> 0x40, 0),
                                (char) (uVar5 >> 0x18)), (SUB167(auVar18, 0) >> 0x18) << 0x30);
    auVar20 = CONCAT115(CONCAT101(SUB1610(auVar21 >> 0x30, 0), uVar11),
                        (SUB165(auVar18, 0) >> 0x10) << 0x20);
    auVar19 = CONCAT133(SUB1613(CONCAT124(SUB1612(auVar20 >> 0x20, 0), (uVar5 >> 8) << 0x18) >> 0x18, 0),
                        (SUB163(auVar18, 0) >> 8) << 0x10);
    auVar18 = CONCAT142(SUB1614(auVar19 >> 0x10, 0), SUB162(auVar18, 0) & 0xff | (ushort)(byte)
    uVar5 << 8
    );
    local_58[0] = (float) CONCAT13(uVar15, CONCAT12((char) uVar4, SUB162(auVar20 >> 0x20, 0))) *
                  0.003921569;
    local_58[1] = (float) CONCAT13((char) (((ulonglong)(ushort)(uVar5 >> 0x10) << 0x30) >> 0x38),
                                   CONCAT12(uVar11, SUB162(auVar19 >> 0x10, 0))) * 0.003921569;
    local_58[2] = (float) (SUB164(auVar18, 0) & 0xffff | uVar5 << 0x10) * 0.003921569;
    local_58[3] = (float) SUB164(CONCAT214((short) (uVar4 >> 0x10),
                                           CONCAT212(SUB162(auVar21 >> 0x30, 0), SUB1612(auVar18, 0))) >>
                                                                                                       0x60, 0) *
                  0.003921569;
    uVar5 = FUN_140141f10(lVar6, local_58);
    plVar1 = plVar8 + 0x59;
    lVar6 = DAT_140c63678;
    if (plVar1 != local_128) {
        FUN_1401429a0(DAT_140c63678, *(undefined4 *) plVar1);
        lVar6 = DAT_140c63678;
        *(uint *) plVar1 = uVar5;
        if ((ulonglong) uVar5 < *(ulonglong * )(lVar6 + 0x30)) {
            iVar3 = *(int *) ((ulonglong) uVar5 * 0x20 + 0x10 + *(longlong * )(lVar6 + 0x28));
            if (iVar3 - 1U < 0xfffffffe) {
                *(int *) ((ulonglong) uVar5 * 0x20 + 0x10 + *(longlong * )(lVar6 + 0x28)) = iVar3 + 1;
            }
        }
    }
    FUN_1401429a0(lVar6, (ulonglong) uVar5);
    if (plVar8[99] == 0) {
        lVar6 = FUN_14018b280(0x30);
        if (lVar6 != 0) {
            plVar7 = (longlong *) FUN_1401095e0(lVar6);
        }
        plVar8[99] = (longlong) plVar7;
    }
    if (plVar8[99] != 0) {
        if (plVar8[4] != 0) {
            FUN_140109710(plVar8[99], plVar8[4] + 0xf0, L"WhiteFill", 0);
        }
        *(undefined4 * )(plVar8[99] + 8) = DAT_140c63664;
    }
    (**(code * *)(*plVar8 + 0x50))(plVar8, param_2);
    FUN_1407db4f0(local_38 ^ (ulonglong) auStack360);
    return;
}


void FUN_140123490(longlong param_1, int param_2, undefined8 param_3) {
    undefined4 *puVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong *plVar4;
    undefined8 *puVar5;
    undefined auStack360[32];
    undefined4 local_148;
    undefined8 local_130;
    undefined *local_128;
    undefined8 local_120;
    undefined4 local_108;
    undefined4 uStack260;
    undefined4 uStack256;
    undefined4 uStack252;
    undefined4 local_f8;
    undefined4 uStack244;
    undefined4 uStack240;
    undefined4 uStack236;
    undefined4 local_e8;
    undefined4 uStack228;
    undefined4 uStack224;
    undefined4 uStack220;
    undefined4 local_d8[8];
    uint local_b8;
    undefined4 local_a8;
    undefined4 uStack164;
    undefined4 uStack160;
    undefined4 uStack156;
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
    uint local_58;
    int local_48[4];
    undefined4 local_38[4];
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong) auStack360;
    local_48[0] = param_2 * -0x40;
    local_38[0] = 0x3f800000;
    local_38[1] = 0x3f800000;
    local_38[2] = 0x3f800000;
    local_48[2] = param_2 * -0x40 + 0x3c;
    local_38[3] = 0x3f800000;
    local_48[1] = 0xffffffe8;
    local_48[3] = 0xfffffffc;
    lVar2 = FUN_14018b280(0x620, 0);
    plVar4 = (longlong *) 0x0;
    plVar3 = plVar4;
    if (lVar2 != 0) {
        local_120 = 0;
        local_128 = &DAT_140c67280;
        local_130 = 0;
        local_148 = 0;
        plVar3 = (longlong *)
                FUN_14012f720(lVar2, *(longlong * )(param_1 + 0x20), param_1,
                              *(longlong * )(*(longlong * )(param_1 + 0x20) + 0xb70) + 0x288);
    }
    plVar3[0x52] = plVar3[0x52] | 0x100;
    *(undefined4 * )(plVar3 + 0x58) = 5;
    (**(code * *)(*plVar3 + 0x50))(plVar3, param_3);
    local_b8 = 0;
    puVar5 = (undefined8 * ) & local_f8;
    do {
        puVar1 = (undefined4 * )((longlong) local_38 + (longlong) plVar4);
        plVar4 = (longlong * )((longlong) plVar4 + 4);
        *(undefined4 * )((longlong) & uStack220 + (longlong) plVar4) = *puVar1;
        *(undefined4 * )((longlong)(local_d8 + 3) + (longlong) plVar4) =
                *(undefined4 * )(&stack0xffffffffffffffb4 + (longlong) plVar4);
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
    } while ((longlong) plVar4 < 0x10);
    local_58 = local_b8 | 0x300;
    local_a8 = local_108;
    uStack164 = uStack260;
    uStack160 = uStack256;
    uStack156 = uStack252;
    local_88 = local_e8;
    uStack132 = uStack228;
    uStack128 = uStack224;
    uStack124 = uStack220;
    local_98 = local_f8;
    uStack148 = uStack244;
    uStack144 = uStack240;
    uStack140 = uStack236;
    local_78 = local_d8[0];
    uStack116 = local_d8[1];
    uStack112 = local_d8[2];
    uStack108 = local_d8[3];
    local_68 = local_d8[4];
    uStack100 = local_d8[5];
    uStack96 = local_d8[6];
    uStack92 = local_d8[7];
    FUN_1400cc680(plVar3, &local_a8);
    FUN_1407db4f0(local_28 ^ (ulonglong) auStack360);
    return;
}


undefined *FUN_140123610(longlong param_1, longlong param_2) {
    uint uVar1;
    ulonglong uVar2;
    undefined *puVar3;
    int *piVar4;

    if (param_2 == *(longlong * )(param_1 + 0x400)) {
        uVar2 = 0;
        piVar4 = &DAT_140c2c750;
        do {
            if (*piVar4 == 0) {
                return (&PTR_s_DC_Ok_140c2c758)[uVar2 * 2];
            }
            uVar1 = (int) uVar2 + 1;
            uVar2 = (ulonglong) uVar1;
            piVar4 = piVar4 + 4;
        } while (uVar1 < 6);
        FUN_1400efdd0(&DAT_140c8e080, 0x40, "DC_Missing_%d");
        return &DAT_140c8e080;
    }
    if (param_2 == *(longlong * )(param_1 + 0x408)) {
        puVar3 = (undefined *) FUN_1400e8dd0(1);
        return puVar3;
    }
    if (param_2 == *(longlong * )(param_1 + 0x420)) {
        puVar3 = (undefined *) FUN_1400e8dd0(4);
        return puVar3;
    }
    if (param_2 == *(longlong * )(param_1 + 0x428)) {
        puVar3 = (undefined *) FUN_1400e8dd0(5);
        return puVar3;
    }
    if (param_2 == *(longlong * )(param_1 + 0x410)) {
        puVar3 = (undefined *) FUN_1400e8dd0(2);
        return puVar3;
    }
    if (param_2 == *(longlong * )(param_1 + 0x418)) {
        puVar3 = (undefined *) FUN_1400e8dd0(3);
        return puVar3;
    }
    return &DAT_1409d050e;
}



// WARNING: Could not reconcile some variable overlaps

longlong FUN_140123700(longlong param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4,
                       undefined4 param_5) {
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    longlong lVar5;
    undefined8 uVar6;
    int local_res8;
    int local_resc;
    undefined8 local_res10;

    local_res10 = param_2;
    FUN_1400e58c0(param_1, L"Chat");
    FUN_140122a00(&local_res10);
    if (*(char *) (*(longlong * )(param_1 + 0xb70) + 0x3e0) == '\0') {
        iVar1 = FUN_14010d1c0();
    } else {
        iVar1 = *(int *) (*(longlong * )(param_1 + 0xb70) + 0x3e4);
    }
    if (*(char *) (*(longlong * )(param_1 + 0xb70) + 0x3e0) == '\0') {
        iVar2 = FUN_14010d2f0();
    } else {
        iVar2 = *(int *) (*(longlong * )(param_1 + 0xb70) + 0x3f0);
    }
    if (*(char *) (*(longlong * )(param_1 + 0xb70) + 0x3e0) == '\0') {
        iVar3 = FUN_14010cf80();
    } else {
        iVar3 = *(int *) (*(longlong * )(param_1 + 0xb70) + 1000);
    }
    if (*(char *) (*(longlong * )(param_1 + 0xb70) + 0x3e0) == '\0') {
        iVar4 = FUN_14010d0a0();
    } else {
        iVar4 = *(int *) (*(longlong * )(param_1 + 0xb70) + 0x3ec);
    }
    local_res8 = (int) local_res10 + 8 + iVar4 + iVar3;
    if (local_res8 < 200) {
        local_res8 = 200;
    }
    local_resc = local_res10._4_4_ + 0x20 + iVar2 + iVar1;
    lVar5 = FUN_14018b280(0x480, 0);
    if (lVar5 == 0) {
        lVar5 = 0;
    } else {
        lVar5 = FUN_1401224c0(lVar5, param_1, &local_res8, param_4, param_5);
    }
    uVar6 = FUN_140123230(lVar5, param_3, local_res10._4_4_);
    *(undefined8 * )(lVar5 + 0x448) = uVar6;
    uVar6 = FUN_14034bdd0();
    uVar6 = FUN_140123490(lVar5, 1, uVar6);
    *(undefined8 * )(lVar5 + 0x400) = uVar6;
    *(undefined8 * )(lVar5 + 0x460) = 0;
    FUN_1400e7280(*(undefined8 * )(lVar5 + 0x20), lVar5, L"DefaultStratum");
    FUN_1400e8b00(*(undefined8 * )(lVar5 + 0x20), lVar5);
    return lVar5;
}



// WARNING: Could not reconcile some variable overlaps

longlong FUN_140123890(longlong param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4,
                       undefined4 param_5) {
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    longlong lVar5;
    undefined8 uVar6;
    int local_res8;
    int local_resc;
    undefined8 local_res10;

    local_res10 = param_2;
    FUN_1400e58c0(param_1, L"Chat");
    FUN_140122a00(&local_res10);
    if (*(char *) (*(longlong * )(param_1 + 0xb70) + 0x3e0) == '\0') {
        iVar1 = FUN_14010d1c0();
    } else {
        iVar1 = *(int *) (*(longlong * )(param_1 + 0xb70) + 0x3e4);
    }
    if (*(char *) (*(longlong * )(param_1 + 0xb70) + 0x3e0) == '\0') {
        iVar2 = FUN_14010d2f0();
    } else {
        iVar2 = *(int *) (*(longlong * )(param_1 + 0xb70) + 0x3f0);
    }
    if (*(char *) (*(longlong * )(param_1 + 0xb70) + 0x3e0) == '\0') {
        iVar3 = FUN_14010cf80();
    } else {
        iVar3 = *(int *) (*(longlong * )(param_1 + 0xb70) + 1000);
    }
    if (*(char *) (*(longlong * )(param_1 + 0xb70) + 0x3e0) == '\0') {
        iVar4 = FUN_14010d0a0();
    } else {
        iVar4 = *(int *) (*(longlong * )(param_1 + 0xb70) + 0x3ec);
    }
    local_res8 = (int) local_res10 + 8 + iVar4 + iVar3;
    if (local_res8 < 200) {
        local_res8 = 200;
    }
    local_resc = local_res10._4_4_ + 0x20 + iVar2 + iVar1;
    lVar5 = FUN_14018b280(0x480, 0);
    if (lVar5 == 0) {
        lVar5 = 0;
    } else {
        lVar5 = FUN_1401224c0(lVar5, param_1, &local_res8, param_4, param_5);
    }
    uVar6 = FUN_140123230(lVar5, param_3, local_res10._4_4_);
    *(undefined8 * )(lVar5 + 0x448) = uVar6;
    uVar6 = FUN_14034bdd0();
    uVar6 = FUN_140123490(lVar5, 2, uVar6);
    *(undefined8 * )(lVar5 + 0x400) = uVar6;
    uVar6 = FUN_14034bdd0();
    uVar6 = FUN_140123490(lVar5, 1, uVar6);
    *(undefined8 * )(lVar5 + 0x408) = uVar6;
    *(undefined8 * )(lVar5 + 0x460) = 0;
    FUN_1400e7280(*(undefined8 * )(lVar5 + 0x20), lVar5, L"DefaultStratum");
    FUN_1400e8b00(*(undefined8 * )(lVar5 + 0x20), lVar5);
    return lVar5;
}



// WARNING: Could not reconcile some variable overlaps

longlong FUN_140123a40(longlong param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4,
                       undefined4 param_5) {
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    longlong lVar5;
    undefined8 uVar6;
    int local_res8;
    int local_resc;
    undefined8 local_res10;

    local_res10 = param_2;
    FUN_1400e58c0(param_1, L"Chat");
    FUN_140122a00(&local_res10);
    if (*(char *) (*(longlong * )(param_1 + 0xb70) + 0x3e0) == '\0') {
        iVar1 = FUN_14010d1c0();
    } else {
        iVar1 = *(int *) (*(longlong * )(param_1 + 0xb70) + 0x3e4);
    }
    if (*(char *) (*(longlong * )(param_1 + 0xb70) + 0x3e0) == '\0') {
        iVar2 = FUN_14010d2f0();
    } else {
        iVar2 = *(int *) (*(longlong * )(param_1 + 0xb70) + 0x3f0);
    }
    if (*(char *) (*(longlong * )(param_1 + 0xb70) + 0x3e0) == '\0') {
        iVar3 = FUN_14010cf80();
    } else {
        iVar3 = *(int *) (*(longlong * )(param_1 + 0xb70) + 1000);
    }
    if (*(char *) (*(longlong * )(param_1 + 0xb70) + 0x3e0) == '\0') {
        iVar4 = FUN_14010d0a0();
    } else {
        iVar4 = *(int *) (*(longlong * )(param_1 + 0xb70) + 0x3ec);
    }
    local_res8 = (int) local_res10 + 8 + iVar4 + iVar3;
    if (local_res8 < 200) {
        local_res8 = 200;
    }
    local_resc = local_res10._4_4_ + 0x20 + iVar2 + iVar1;
    lVar5 = FUN_14018b280(0x480, 0);
    if (lVar5 == 0) {
        lVar5 = 0;
    } else {
        lVar5 = FUN_1401224c0(lVar5, param_1, &local_res8, param_4, param_5);
    }
    uVar6 = FUN_140123230(lVar5, param_3, local_res10._4_4_);
    *(undefined8 * )(lVar5 + 0x448) = uVar6;
    uVar6 = FUN_14034bdd0();
    uVar6 = FUN_140123490(lVar5, 3, uVar6);
    *(undefined8 * )(lVar5 + 0x410) = uVar6;
    uVar6 = FUN_14034bdd0();
    uVar6 = FUN_140123490(lVar5, 2, uVar6);
    *(undefined8 * )(lVar5 + 0x418) = uVar6;
    uVar6 = FUN_14034bdd0();
    uVar6 = FUN_140123490(lVar5, 1, uVar6);
    *(undefined8 * )(lVar5 + 0x408) = uVar6;
    *(undefined8 * )(lVar5 + 0x460) = 0;
    FUN_1400e7280(*(undefined8 * )(lVar5 + 0x20), lVar5, L"DefaultStratum");
    FUN_1400e8b00(*(undefined8 * )(lVar5 + 0x20), lVar5);
    return lVar5;
}



// WARNING: Could not reconcile some variable overlaps

longlong FUN_140123c10(longlong param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4,
                       undefined4 param_5) {
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    longlong lVar5;
    undefined8 uVar6;
    int local_res8;
    int local_resc;
    undefined8 local_res10;

    local_res10 = param_2;
    FUN_1400e58c0(param_1, L"Chat");
    FUN_140122a00(&local_res10);
    if (*(char *) (*(longlong * )(param_1 + 0xb70) + 0x3e0) == '\0') {
        iVar1 = FUN_14010d1c0();
    } else {
        iVar1 = *(int *) (*(longlong * )(param_1 + 0xb70) + 0x3e4);
    }
    if (*(char *) (*(longlong * )(param_1 + 0xb70) + 0x3e0) == '\0') {
        iVar2 = FUN_14010d2f0();
    } else {
        iVar2 = *(int *) (*(longlong * )(param_1 + 0xb70) + 0x3f0);
    }
    if (*(char *) (*(longlong * )(param_1 + 0xb70) + 0x3e0) == '\0') {
        iVar3 = FUN_14010cf80();
    } else {
        iVar3 = *(int *) (*(longlong * )(param_1 + 0xb70) + 1000);
    }
    if (*(char *) (*(longlong * )(param_1 + 0xb70) + 0x3e0) == '\0') {
        iVar4 = FUN_14010d0a0();
    } else {
        iVar4 = *(int *) (*(longlong * )(param_1 + 0xb70) + 0x3ec);
    }
    local_res8 = (int) local_res10 + 8 + iVar4 + iVar3;
    if (local_res8 < 200) {
        local_res8 = 200;
    }
    local_resc = local_res10._4_4_ + 0x20 + iVar2 + iVar1;
    lVar5 = FUN_14018b280(0x480, 0);
    if (lVar5 == 0) {
        lVar5 = 0;
    } else {
        lVar5 = FUN_1401224c0(lVar5, param_1, &local_res8, param_4, param_5);
    }
    uVar6 = FUN_140123230(lVar5, param_3, local_res10._4_4_);
    *(undefined8 * )(lVar5 + 0x448) = uVar6;
    uVar6 = FUN_14034bdd0();
    uVar6 = FUN_140123490(lVar5, 3, uVar6);
    *(undefined8 * )(lVar5 + 0x420) = uVar6;
    uVar6 = FUN_14034bdd0();
    uVar6 = FUN_140123490(lVar5, 2, uVar6);
    *(undefined8 * )(lVar5 + 0x428) = uVar6;
    uVar6 = FUN_14034bdd0();
    uVar6 = FUN_140123490(lVar5, 1, uVar6);
    *(undefined8 * )(lVar5 + 0x408) = uVar6;
    *(undefined8 * )(lVar5 + 0x460) = 0;
    FUN_1400e7280(*(undefined8 * )(lVar5 + 0x20), lVar5, L"DefaultStratum");
    FUN_1400e8b00(*(undefined8 * )(lVar5 + 0x20), lVar5);
    return lVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140123de0(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
                   undefined4 param_5, undefined4 param_6, float param_7, undefined4 param_8,
                   undefined8 param_9, uint param_10) {
    float fVar1;
    uint uVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    uint uVar8;
    longlong lVar9;
    ulonglong uVar10;
    undefined8 uVar11;
    ulonglong uVar12;
    ulonglong uVar13;
    ulonglong uVar14;
    undefined8 *puVar15;
    undefined extraout_XMM0_Ba;
    undefined extraout_XMM0_Ba_00;
    undefined extraout_XMM0_Ba_01;
    undefined extraout_XMM0_Ba_02;
    undefined uVar16;
    undefined extraout_XMM0_Bb;
    undefined extraout_XMM0_Bb_00;
    undefined extraout_XMM0_Bb_01;
    undefined extraout_XMM0_Bb_02;
    undefined uVar17;
    undefined extraout_XMM0_Bc;
    undefined extraout_XMM0_Bc_00;
    undefined extraout_XMM0_Bc_01;
    undefined extraout_XMM0_Bc_02;
    undefined uVar18;
    undefined extraout_XMM0_Bd;
    undefined extraout_XMM0_Bd_00;
    undefined extraout_XMM0_Bd_01;
    undefined extraout_XMM0_Bd_02;
    undefined uVar19;
    undefined extraout_XMM0_Be;
    undefined extraout_XMM0_Be_00;
    undefined extraout_XMM0_Be_01;
    undefined extraout_XMM0_Be_02;
    undefined uVar20;
    undefined extraout_XMM0_Bf;
    undefined extraout_XMM0_Bf_00;
    undefined extraout_XMM0_Bf_01;
    undefined extraout_XMM0_Bf_02;
    undefined uVar21;
    undefined extraout_XMM0_Bg;
    undefined extraout_XMM0_Bg_00;
    undefined extraout_XMM0_Bg_01;
    undefined extraout_XMM0_Bg_02;
    undefined uVar22;
    undefined extraout_XMM0_Bh;
    undefined extraout_XMM0_Bh_00;
    undefined extraout_XMM0_Bh_01;
    undefined extraout_XMM0_Bh_02;
    undefined uVar23;
    undefined auVar24[16];
    float fVar28;
    undefined auStack424[32];
    undefined4 *local_188;
    undefined8 local_180;
    int local_168;
    int local_164;
    undefined4 local_158;
    undefined4 uStack340;
    undefined4 uStack336;
    undefined4 uStack332;
    undefined4 local_148;
    undefined4 uStack324;
    undefined4 uStack320;
    undefined4 uStack316;
    undefined4 local_138;
    undefined4 uStack308;
    undefined4 uStack304;
    undefined4 uStack300;
    undefined4 local_128[4];
    undefined4 local_118[4];
    uint local_108;
    undefined4 local_f8;
    undefined4 uStack244;
    undefined4 uStack240;
    undefined4 uStack236;
    undefined4 local_e8;
    undefined4 uStack228;
    undefined4 uStack224;
    undefined4 uStack220;
    undefined4 local_d8;
    undefined4 uStack212;
    undefined4 uStack208;
    undefined4 uStack204;
    undefined4 local_c8;
    undefined4 uStack196;
    undefined4 uStack192;
    undefined4 uStack188;
    undefined4 local_b8;
    undefined4 uStack180;
    undefined4 uStack176;
    undefined4 uStack172;
    uint local_a8;
    undefined8 local_98;
    float fStack144;
    float fStack140;
    undefined4 local_88;
    undefined4 local_84;
    undefined8 local_78;
    undefined8 local_70;
    ulonglong local_68;
    float fVar2;
    undefined auVar25[16];
    undefined auVar26[16];
    undefined auVar27[16];

    local_68 = DAT_140c0f7b0 ^ (ulonglong) auStack424;
    FUN_1400e58c0(param_1, L"Chat");
    FUN_140122a00(&local_78);
    if (*(char *) (*(longlong * )(param_1 + 0xb70) + 0x3e0) == '\0') {
        iVar4 = FUN_14010d1c0();
    } else {
        iVar4 = *(int *) (*(longlong * )(param_1 + 0xb70) + 0x3e4);
    }
    if (*(char *) (*(longlong * )(param_1 + 0xb70) + 0x3e0) == '\0') {
        iVar5 = FUN_14010d2f0();
    } else {
        iVar5 = *(int *) (*(longlong * )(param_1 + 0xb70) + 0x3f0);
    }
    if (*(char *) (*(longlong * )(param_1 + 0xb70) + 0x3e0) == '\0') {
        iVar6 = FUN_14010cf80();
    } else {
        iVar6 = *(int *) (*(longlong * )(param_1 + 0xb70) + 1000);
    }
    if (*(char *) (*(longlong * )(param_1 + 0xb70) + 0x3e0) == '\0') {
        iVar7 = FUN_14010d0a0();
    } else {
        iVar7 = *(int *) (*(longlong * )(param_1 + 0xb70) + 0x3ec);
    }
    local_168 = (int) local_78 + 8 + iVar7 + iVar6;
    if (local_168 < 200) {
        local_168 = 200;
    }
    local_164 = local_78._4_4_ + 0x38 + iVar5 + iVar4;
    lVar9 = FUN_14018b280(0x480, 0);
    uVar14 = 0;
    uVar10 = uVar14;
    if (lVar9 != 0) {
        local_188 = (undefined4 * )((ulonglong) local_188 & 0xffffffff00000000 | (ulonglong) param_10);
        uVar10 = FUN_1401224c0(lVar9, param_1, &local_168);
    }
    uVar11 = FUN_140123230(uVar10, param_3, local_78._4_4_);
    *(undefined8 * )(uVar10 + 0x448) = uVar11;
    local_98._4_4_ = (float) (local_78._4_4_ + 8);
    local_78 = 0x3f000000;
    fVar28 = 0.0;
    fStack140 = (float) (local_78._4_4_ + 0x1c);
    local_70 = 0x3f000000;
    local_98._0_4_ = -NAN;
    fStack144 = 5.605194e-44;
    lVar9 = FUN_14018b280(0x480, 0);
    uVar12 = uVar14;
    uVar16 = extraout_XMM0_Ba;
    uVar17 = extraout_XMM0_Bb;
    uVar18 = extraout_XMM0_Bc;
    uVar19 = extraout_XMM0_Bd;
    uVar20 = extraout_XMM0_Be;
    uVar21 = extraout_XMM0_Bf;
    uVar22 = extraout_XMM0_Bg;
    uVar23 = extraout_XMM0_Bh;
    if (lVar9 != 0) {
        local_108 = 0;
        puVar15 = (undefined8 * ) & local_148;
        do {
            uVar13 = uVar12 + 4;
            *(undefined4 * )((longlong) local_128 + uVar12) = *(undefined4 * )((longlong) & local_78 + uVar12);
            *(undefined4 * )((longlong) local_118 + uVar12) = *(undefined4 * )((longlong) & local_98 + uVar12);
            *puVar15 = 0;
            uVar12 = uVar13;
            puVar15 = puVar15 + 1;
        } while ((longlong) uVar13 < 0x10);
        local_a8 = local_108 | 0x300;
        local_188 = &local_f8;
        local_f8 = local_158;
        uStack244 = uStack340;
        uStack240 = uStack336;
        uStack236 = uStack332;
        local_d8 = local_138;
        uStack212 = uStack308;
        uStack208 = uStack304;
        uStack204 = uStack300;
        local_180 = 0x110;
        local_e8 = local_148;
        uStack228 = uStack324;
        uStack224 = uStack320;
        uStack220 = uStack316;
        local_c8 = local_128[0];
        uStack196 = local_128[1];
        uStack192 = local_128[2];
        uStack188 = local_128[3];
        local_b8 = local_118[0];
        uStack180 = local_118[1];
        uStack176 = local_118[2];
        uStack172 = local_118[3];
        uVar12 = FUN_140173180(lVar9, param_1, uVar10);
        uVar16 = extraout_XMM0_Ba_00;
        uVar17 = extraout_XMM0_Bb_00;
        uVar18 = extraout_XMM0_Bc_00;
        uVar19 = extraout_XMM0_Bd_00;
        uVar20 = extraout_XMM0_Be_00;
        uVar21 = extraout_XMM0_Bf_00;
        uVar22 = extraout_XMM0_Bg_00;
        uVar23 = extraout_XMM0_Bh_00;
    }
    *(ulonglong * )(uVar10 + 0x438) = uVar12;
    if (*(longlong * )(uVar12 + 0x318) == 0) {
        lVar9 = FUN_14018b280(0x30);
        uVar13 = uVar14;
        uVar16 = extraout_XMM0_Ba_01;
        uVar17 = extraout_XMM0_Bb_01;
        uVar18 = extraout_XMM0_Bc_01;
        uVar19 = extraout_XMM0_Bd_01;
        uVar20 = extraout_XMM0_Be_01;
        uVar21 = extraout_XMM0_Bf_01;
        uVar22 = extraout_XMM0_Bg_01;
        uVar23 = extraout_XMM0_Bh_01;
        if (lVar9 != 0) {
            uVar13 = FUN_1401095e0(lVar9);
            uVar16 = extraout_XMM0_Ba_02;
            uVar17 = extraout_XMM0_Bb_02;
            uVar18 = extraout_XMM0_Bc_02;
            uVar19 = extraout_XMM0_Bd_02;
            uVar20 = extraout_XMM0_Be_02;
            uVar21 = extraout_XMM0_Bf_02;
            uVar22 = extraout_XMM0_Bg_02;
            uVar23 = extraout_XMM0_Bh_02;
        }
        *(ulonglong * )(uVar12 + 0x318) = uVar13;
    }
    if (*(longlong * )(uVar12 + 0x318) != 0) {
        if (*(longlong * )(uVar12 + 0x20) != 0) {
            FUN_140109710(*(longlong * )(uVar12 + 0x318), *(longlong * )(uVar12 + 0x20) + 0xf0, L"WhiteFill");
        }
        uVar16 = (undefined) DAT_140c63664;
        uVar17 = (undefined)((uint) DAT_140c63664 >> 8);
        uVar18 = (undefined)((uint) DAT_140c63664 >> 0x10);
        uVar19 = (undefined)((uint) DAT_140c63664 >> 0x18);
        uVar20 = 0;
        uVar21 = 0;
        uVar22 = 0;
        uVar23 = 0;
        *(undefined4 * )(*(longlong * )(uVar12 + 0x318) + 8) = DAT_140c63664;
    }
    uVar8 = CONCAT13(uVar19, CONCAT12(uVar18, CONCAT11(uVar17, uVar16))) ^
            CONCAT13(uVar19, CONCAT12(uVar18, CONCAT11(uVar17, uVar16)));
    uVar16 = (undefined)(uVar8 >> 0x10);
    uVar3 = CONCAT13(uVar23, CONCAT12(uVar22, CONCAT11(uVar21, uVar20))) ^
            CONCAT13(uVar23, CONCAT12(uVar22, CONCAT11(uVar21, uVar20)));
    uVar17 = (undefined)(uVar3 >> 8);
    auVar27 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                         SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                          ((char) (uVar3 >> 0x18),
                                                                                                                           CONCAT114(SUB161(_DAT_140b7b5c0 >> 0x38, 0),
                                                                                                                                     SUB1614(_DAT_140b7b5c0, 0))) >> 0x70, 0),
                                                                                                           CONCAT113((char) (uVar3 >> 0x10),
                                                                                                                     SUB1613(_DAT_140b7b5c0, 0))) >> 0x68, 0),
                                                                                          CONCAT112(SUB161(_DAT_140b7b5c0 >> 0x30, 0),
                                                                                                    SUB1612(_DAT_140b7b5c0, 0))) >> 0x60, 0),
                                                                         CONCAT111(uVar17, SUB1611(_DAT_140b7b5c0, 0))) >>
                                                                                                                        0x58, 0), CONCAT110(SUB161(_DAT_140b7b5c0 >> 0x28, 0),
                                                                                                                                            SUB1610(_DAT_140b7b5c0, 0))) >>
                                                                                                                                                                         0x50, 0),
                                                                 CONCAT19((char) uVar3,
                                                                          SUB169(_DAT_140b7b5c0, 0))) >>
                                                                                                      0x48, 0),
                                                CONCAT18(SUB161(_DAT_140b7b5c0 >> 0x20, 0),
                                                         SUB168(_DAT_140b7b5c0, 0))) >> 0x40, 0),
                                (char) (uVar8 >> 0x18)), (SUB167(_DAT_140b7b5c0, 0) >> 0x18) << 0x30);
    auVar26 = CONCAT115(CONCAT101(SUB1610(auVar27 >> 0x30, 0), uVar16),
                        (SUB165(_DAT_140b7b5c0, 0) >> 0x10) << 0x20);
    auVar25 = CONCAT133(SUB1613(CONCAT124(SUB1612(auVar26 >> 0x20, 0), (uVar8 >> 8) << 0x18) >> 0x18, 0),
                        (SUB163(_DAT_140b7b5c0, 0) >> 8) << 0x10);
    auVar24 = CONCAT142(SUB1614(auVar25 >> 0x10, 0),
                        SUB162(_DAT_140b7b5c0, 0) & 0xff | (ushort)(byte)
    uVar8 << 8);
    local_98._0_4_ =
            (float) CONCAT13(uVar17, CONCAT12((char) uVar3, SUB162(auVar26 >> 0x20, 0))) * 0.003921569;
    local_98._4_4_ =
            (float) CONCAT13((char) (((ulonglong)(ushort)(uVar8 >> 0x10) << 0x30) >> 0x38),
                             CONCAT12(uVar16, SUB162(auVar25 >> 0x10, 0))) * 0.003921569;
    fStack144 = (float) (SUB164(auVar24, 0) & 0xffff | uVar8 << 0x10) * 0.003921569;
    fStack140 = (float) SUB164(CONCAT214((short) (uVar3 >> 0x10),
                                         CONCAT212(SUB162(auVar27 >> 0x30, 0), SUB1612(auVar24, 0))) >>
                                                                                                     0x60, 0) *
                0.003921569;
    uVar8 = FUN_140141f10(DAT_140c63678);
    puVar15 = (undefined8 * )(*(longlong * )(uVar10 + 0x438) + 0x2c8);
    lVar9 = DAT_140c63678;
    if (puVar15 != &local_78) {
        FUN_1401429a0();
        lVar9 = DAT_140c63678;
        *(uint *) puVar15 = uVar8;
        if ((ulonglong) uVar8 < *(ulonglong * )(lVar9 + 0x30)) {
            iVar4 = *(int *) ((ulonglong) uVar8 * 0x20 + 0x10 + *(longlong * )(lVar9 + 0x28));
            if (iVar4 - 1U < 0xfffffffe) {
                *(int *) ((ulonglong) uVar8 * 0x20 + 0x10 + *(longlong * )(lVar9 + 0x28)) = iVar4 + 1;
            }
        }
    }
    FUN_1401429a0(lVar9);
    lVar9 = *(longlong * )(uVar10 + 0x438);
    *(undefined4 * )(lVar9 + 0x420) = param_6;
    *(undefined4 * )(lVar9 + 0x41c) = param_5;
    *(undefined4 * )(lVar9 + 0x418) = param_8;
    lVar9 = *(longlong * )(uVar10 + 0x438);
    local_98._4_4_ = param_7;
    local_98._0_4_ = 0.0;
    local_88 = 0xbf800000;
    fStack140 = param_7 * 5.0;
    fStack144 = 3.0;
    local_84 = 0xbf800000;
    puVar15 = &local_98;
    do {
        fVar1 = *(float *) ((longlong) puVar15 + 4);
        fVar2 = *(float *) ((longlong) puVar15 + 4);
        *(undefined8 * )((lVar9 - (longlong) & local_98) + 0x430 + (longlong) puVar15) = *puVar15;
        *(int *) (lVar9 + 0x470) = (int) uVar14;
        if (fVar2 <= fVar28 && fVar28 != fVar1) break;
        uVar8 = (int) uVar14 + 1;
        uVar14 = (ulonglong) uVar8;
        puVar15 = puVar15 + 1;
    } while ((int) uVar8 < 8);
    FUN_140173980(*(undefined8 * )(uVar10 + 0x438));
    uVar11 = FUN_14034bdd0();
    uVar11 = FUN_140123490(uVar10, 2, uVar11);
    *(undefined8 * )(uVar10 + 0x400) = uVar11;
    uVar11 = FUN_14034bdd0();
    uVar11 = FUN_140123490(uVar10, 1, uVar11);
    *(undefined8 * )(uVar10 + 0x408) = uVar11;
    *(undefined8 * )(uVar10 + 0x460) = 0;
    FUN_1400e7280(*(undefined8 * )(uVar10 + 0x20), uVar10, L"DefaultStratum");
    FUN_1400e8b00(*(undefined8 * )(uVar10 + 0x20), uVar10);
    FUN_1407db4f0(local_68 ^ (ulonglong) auStack424);
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140124290(longlong param_1, longlong param_2, undefined8 param_3, undefined8 param_4,
                   float param_5, float param_6, float param_7, undefined4 param_8, undefined8 param_9,
                   uint param_10) {
    float fVar1;
    uint uVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    uint uVar8;
    longlong lVar9;
    ulonglong uVar10;
    undefined8 uVar11;
    ulonglong uVar12;
    ulonglong uVar13;
    undefined8 *puVar14;
    ulonglong uVar15;
    uint *puVar16;
    undefined auVar17[16];
    float fVar20;
    undefined auVar21[14];
    undefined in_XMM8_Ba;
    byte bVar22;
    undefined in_XMM8_Bb;
    undefined uVar23;
    undefined in_XMM8_Bc;
    undefined uVar24;
    undefined in_XMM8_Bd;
    undefined uVar25;
    undefined uVar26;
    undefined in_XMM8_Be;
    undefined in_XMM8_Bf;
    undefined uVar27;
    undefined in_XMM8_Bg;
    undefined uVar28;
    undefined in_XMM8_Bh;
    undefined uVar29;
    float fVar30;
    float fVar31;
    float fVar32;
    float fVar33;
    undefined auStack552[32];
    undefined4 *local_208;
    undefined8 local_200;
    undefined8 local_1f8;
    uint local_1e8[2];
    int local_1e0;
    int local_1dc;
    longlong local_1d8;
    undefined4 local_1c8;
    undefined4 uStack452;
    undefined4 uStack448;
    undefined4 uStack444;
    undefined4 local_1b8;
    undefined4 uStack436;
    undefined4 uStack432;
    undefined4 uStack428;
    undefined4 local_1a8;
    undefined4 uStack420;
    undefined4 uStack416;
    undefined4 uStack412;
    undefined4 local_198[4];
    undefined4 local_188[4];
    uint local_178;
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
    undefined4 local_138;
    undefined4 uStack308;
    undefined4 uStack304;
    undefined4 uStack300;
    undefined4 local_128;
    undefined4 uStack292;
    undefined4 uStack288;
    undefined4 uStack284;
    uint local_118;
    undefined local_108[8];
    undefined8 uStack256;
    undefined4 local_f8;
    undefined4 local_f4;
    undefined8 local_e8;
    undefined8 local_e0;
    ulonglong local_d8;
    float fVar2;
    undefined auVar18[16];
    undefined auVar19[16];

    uStack256 = local_108;
    local_d8 = DAT_140c0f7b0 ^ (ulonglong) auStack552;
    local_1e8[0] = param_10;
    local_1d8 = param_2;
    FUN_1400e58c0(param_1, L"Chat");
    FUN_140122a00(&local_e8);
    if (*(char *) (*(longlong * )(param_1 + 0xb70) + 0x3e0) == '\0') {
        iVar4 = FUN_14010d1c0();
    } else {
        iVar4 = *(int *) (*(longlong * )(param_1 + 0xb70) + 0x3e4);
    }
    if (*(char *) (*(longlong * )(param_1 + 0xb70) + 0x3e0) == '\0') {
        iVar5 = FUN_14010d2f0();
    } else {
        iVar5 = *(int *) (*(longlong * )(param_1 + 0xb70) + 0x3f0);
    }
    if (*(char *) (*(longlong * )(param_1 + 0xb70) + 0x3e0) == '\0') {
        iVar6 = FUN_14010cf80();
    } else {
        iVar6 = *(int *) (*(longlong * )(param_1 + 0xb70) + 1000);
    }
    if (*(char *) (*(longlong * )(param_1 + 0xb70) + 0x3e0) == '\0') {
        iVar7 = FUN_14010d0a0();
    } else {
        iVar7 = *(int *) (*(longlong * )(param_1 + 0xb70) + 0x3ec);
    }
    local_1e0 = (int) local_e8 + 8 + iVar7 + iVar6;
    if (local_1e0 < 200) {
        local_1e0 = 200;
    }
    local_1dc = local_e8._4_4_ + 0x50 + iVar5 + iVar4;
    lVar9 = FUN_14018b280(0x480, 0);
    uVar13 = 0;
    uVar10 = uVar13;
    if (lVar9 != 0) {
        local_208 = (undefined4 * )((ulonglong) local_208 & 0xffffffff00000000 | (ulonglong) local_1e8[0]);
        uVar10 = FUN_1401224c0(lVar9, param_1, &local_1e0);
    }
    uVar11 = FUN_140123230(uVar10, param_3, local_e8._4_4_);
    *(undefined8 * )(uVar10 + 0x448) = uVar11;
    local_e8 = 0x3f000000;
    fVar20 = 0.0;
    local_e0 = 0x3f000000;
    _local_108 = CONCAT124(CONCAT84(uStack256, local_e8._4_4_ + 8), 0xffffffd8);
    _local_108 = CONCAT48(0x28, local_108);
    _local_108 = CONCAT412(local_e8._4_4_ + 0x1c, _local_108);
    lVar9 = FUN_14018b280(0x480, 0);
    uVar12 = uVar13;
    if (lVar9 != 0) {
        local_178 = 0;
        puVar14 = (undefined8 * ) & local_1b8;
        do {
            uVar15 = uVar12 + 4;
            *(undefined4 * )((longlong) local_198 + uVar12) = *(undefined4 * )((longlong) & local_e8 + uVar12);
            *(undefined4 * )((longlong) local_188 + uVar12) = *(undefined4 * )(local_108 + uVar12);
            *puVar14 = 0;
            puVar14 = puVar14 + 1;
            uVar12 = uVar15;
        } while ((longlong) uVar15 < 0x10);
        local_118 = local_178 | 0x300;
        local_208 = &local_168;
        local_168 = local_1c8;
        uStack356 = uStack452;
        uStack352 = uStack448;
        uStack348 = uStack444;
        local_148 = local_1a8;
        uStack324 = uStack420;
        uStack320 = uStack416;
        uStack316 = uStack412;
        local_200 = 0x110;
        local_158 = local_1b8;
        uStack340 = uStack436;
        uStack336 = uStack432;
        uStack332 = uStack428;
        local_138 = local_198[0];
        uStack308 = local_198[1];
        uStack304 = local_198[2];
        uStack300 = local_198[3];
        local_128 = local_188[0];
        uStack292 = local_188[1];
        uStack288 = local_188[2];
        uStack284 = local_188[3];
        uVar12 = FUN_140173180(lVar9, param_1, uVar10);
    }
    *(ulonglong * )(uVar10 + 0x438) = uVar12;
    if (*(longlong * )(uVar12 + 0x318) == 0) {
        lVar9 = FUN_14018b280(0x30);
        uVar15 = uVar13;
        if (lVar9 != 0) {
            uVar15 = FUN_1401095e0(lVar9);
        }
        *(ulonglong * )(uVar12 + 0x318) = uVar15;
    }
    if (*(longlong * )(uVar12 + 0x318) != 0) {
        if (*(longlong * )(uVar12 + 0x20) != 0) {
            FUN_140109710(*(longlong * )(uVar12 + 0x318), *(longlong * )(uVar12 + 0x20) + 0xf0, L"WhiteFill");
        }
        *(undefined4 * )(*(longlong * )(uVar12 + 0x318) + 8) = DAT_140c63664;
    }
    auVar21 = SUB1614(_DAT_140b7b5c0, 0);
    fVar30 = 0.003921569;
    fVar31 = 0.003921569;
    fVar32 = 0.003921569;
    fVar33 = 0.003921569;
    uVar8 = CONCAT13(in_XMM8_Bd, CONCAT12(in_XMM8_Bc, CONCAT11(in_XMM8_Bb, in_XMM8_Ba))) ^
            CONCAT13(in_XMM8_Bd, CONCAT12(in_XMM8_Bc, CONCAT11(in_XMM8_Bb, in_XMM8_Ba)));
    bVar22 = (byte) uVar8;
    uVar23 = (undefined)(uVar8 >> 8);
    uVar24 = (undefined)(uVar8 >> 0x10);
    uVar25 = (undefined)(uVar8 >> 0x18);
    uVar3 = CONCAT13(in_XMM8_Bh, CONCAT12(in_XMM8_Bg, CONCAT11(in_XMM8_Bf, in_XMM8_Be))) ^
            CONCAT13(in_XMM8_Bh, CONCAT12(in_XMM8_Bg, CONCAT11(in_XMM8_Bf, in_XMM8_Be)));
    uVar26 = (undefined) uVar3;
    uVar27 = (undefined)(uVar3 >> 8);
    uVar28 = (undefined)(uVar3 >> 0x10);
    uVar29 = (undefined)(uVar3 >> 0x18);
    auVar19 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                                          SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                                           (uVar29,
                                                                                                                                            CONCAT114(SUB161(_DAT_140b7b5c0 >> 0x38, 0), auVar21))
                                                                                                                                           >> 0x70, 0),
                                                                                                                            CONCAT113(uVar28, SUB1613(_DAT_140b7b5c0, 0))) >>
                                                                                                                                                                           0x68, 0),
                                                                                                           CONCAT112(SUB161(_DAT_140b7b5c0 >> 0x30, 0), SUB1612(_DAT_140b7b5c0, 0))) >>
                                                                                                                                                                                     0x60, 0),
                                                                                          CONCAT111(uVar27, SUB1611(_DAT_140b7b5c0, 0)
                                                                                          )) >> 0x58, 0),
                                                                                  CONCAT110(
                                                                                          SUB161(_DAT_140b7b5c0 >> 0x28,
                                                                                                 0),
                                                                                          SUB1610(_DAT_140b7b5c0, 0)))
                                                                                >> 0x50, 0),
                                                                 CONCAT19(uVar26, SUB169(_DAT_140b7b5c0, 0))) >> 0x48,
                                                       0), CONCAT18(SUB161(_DAT_140b7b5c0 >> 0x20, 0),
                                                                    SUB168(_DAT_140b7b5c0, 0))) >> 0x40, 0), uVar25),
                       (SUB167(_DAT_140b7b5c0, 0) >> 0x18) << 0x30);
    auVar18 = CONCAT115(CONCAT101(SUB1610(auVar19 >> 0x30, 0), uVar24),
                        (SUB165(_DAT_140b7b5c0, 0) >> 0x10) << 0x20);
    auVar17 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar18 >> 0x20, 0), uVar23),
                                          (SUB163(_DAT_140b7b5c0, 0) >> 8) << 0x10) >> 0x10, 0),
                        SUB162(_DAT_140b7b5c0, 0) & 0xff | (ushort) bVar22 << 8);
    iVar4 = SUB164(CONCAT214((short) (uVar3 >> 0x10),
                             CONCAT212(SUB162(auVar19 >> 0x30, 0), SUB1612(auVar17, 0))) >> 0x60, 0);
    auVar18 = CONCAT610(SUB166(CONCAT412(iVar4, CONCAT210((short) uVar3, SUB1610(auVar17, 0))) >> 0x50, 0),
                        CONCAT28(SUB162(auVar18 >> 0x20, 0), SUB168(auVar17, 0)));
    _local_108 = CONCAT412((float) iVar4 * 0.003921569,
                           CONCAT48((float) (SUB164(auVar17, 0) & 0xffff | uVar8 << 0x10) * 0.003921569,
                                    CONCAT44((float) SUB164(CONCAT106(CONCAT82(SUB168(auVar18 >> 0x40, 0
                                                                      ), (short) (uVar8 >>
                                                                                        0x10)),
                                                                      (SUB166(auVar17, 0) >> 0x10) <<
                                                                                                   0x20) >> 0x20, 0) *
                                             0.003921569,
                                             (float) SUB164(auVar18 >> 0x40, 0) * 0.003921569)));
    uVar8 = FUN_140141f10(DAT_140c63678);
    puVar16 = (uint * )(*(longlong * )(uVar10 + 0x438) + 0x2c8);
    lVar9 = DAT_140c63678;
    if (puVar16 != local_1e8) {
        FUN_1401429a0();
        lVar9 = DAT_140c63678;
        *puVar16 = uVar8;
        if ((ulonglong) uVar8 < *(ulonglong * )(lVar9 + 0x30)) {
            iVar4 = *(int *) ((ulonglong) uVar8 * 0x20 + 0x10 + *(longlong * )(lVar9 + 0x28));
            if (iVar4 - 1U < 0xfffffffe) {
                *(int *) ((ulonglong) uVar8 * 0x20 + 0x10 + *(longlong * )(lVar9 + 0x28)) = iVar4 + 1;
            }
        }
    }
    FUN_1401429a0(lVar9);
    lVar9 = *(longlong * )(uVar10 + 0x438);
    *(undefined4 * )(lVar9 + 0x418) = param_8;
    *(float *) (lVar9 + 0x41c) = param_5;
    *(float *) (lVar9 + 0x420) = param_6;
    lVar9 = *(longlong * )(uVar10 + 0x438);
    local_f8 = 0xbf800000;
    local_f4 = 0xbf800000;
    _local_108 = CONCAT48(0x40400000, (ulonglong)(uint)
    param_7 << 0x20);
    _local_108 = CONCAT412(param_7 * 5.0, _local_108);
    puVar14 = (undefined8 *) local_108;
    uVar12 = uVar13;
    do {
        fVar1 = *(float *) ((longlong) puVar14 + 4);
        fVar2 = *(float *) ((longlong) puVar14 + 4);
        *(undefined8 * )((lVar9 - (longlong) local_108) + 0x430 + (longlong) puVar14) = *puVar14;
        *(int *) (lVar9 + 0x470) = (int) uVar12;
        if (fVar2 <= fVar20 && fVar20 != fVar1) break;
        uVar8 = (int) uVar12 + 1;
        uVar12 = (ulonglong) uVar8;
        puVar14 = puVar14 + 1;
    } while ((int) uVar8 < 8);
    FUN_140173980(*(undefined8 * )(uVar10 + 0x438));
    _local_108 = CONCAT48(0x3f800000, local_108);
    _local_108 = _local_108 & (undefined[16]) 0xffffffffffffffff;
    local_e8 = CONCAT44(local_e8._4_4_ + 0x20, 4);
    local_e0 = CONCAT44(local_e8._4_4_ + 0x34, 0xfffffffc);
    lVar9 = FUN_14018b280(0x9c0, 0);
    uVar12 = uVar13;
    if (lVar9 != 0) {
        local_178 = 0;
        puVar14 = (undefined8 * ) & local_1b8;
        do {
            uVar15 = uVar12 + 4;
            *(undefined4 * )((longlong) local_198 + uVar12) = *(undefined4 * )(local_108 + uVar12);
            *(undefined4 * )((longlong) local_188 + uVar12) = *(undefined4 * )((longlong) & local_e8 + uVar12);
            *puVar14 = 0;
            uVar12 = uVar15;
            puVar14 = puVar14 + 1;
        } while ((longlong) uVar15 < 0x10);
        local_118 = local_178 | 0x300;
        local_1f8 = 0;
        local_168 = local_1c8;
        uStack356 = uStack452;
        uStack352 = uStack448;
        uStack348 = uStack444;
        local_148 = local_1a8;
        uStack324 = uStack420;
        uStack320 = uStack416;
        uStack316 = uStack412;
        local_208 = &local_168;
        local_200 = 0x110;
        local_158 = local_1b8;
        uStack340 = uStack436;
        uStack336 = uStack432;
        uStack332 = uStack428;
        local_138 = local_198[0];
        uStack308 = local_198[1];
        uStack304 = local_198[2];
        uStack300 = local_198[3];
        local_128 = local_188[0];
        uStack292 = local_188[1];
        uStack288 = local_188[2];
        uStack284 = local_188[3];
        uVar12 = FUN_140174660(lVar9, param_1, uVar10);
    }
    *(ulonglong * )(uVar10 + 0x440) = uVar12;
    if (*(longlong * )(uVar12 + 0x318) == 0) {
        lVar9 = FUN_14018b280(0x30);
        if (lVar9 != 0) {
            uVar13 = FUN_1401095e0(lVar9);
        }
        *(ulonglong * )(uVar12 + 0x318) = uVar13;
    }
    if (*(longlong * )(uVar12 + 0x318) != 0) {
        if (*(longlong * )(uVar12 + 0x20) != 0) {
            FUN_140109710(*(longlong * )(uVar12 + 0x318), *(longlong * )(uVar12 + 0x20) + 0xf0, L"WhiteFill");
        }
        *(undefined4 * )(*(longlong * )(uVar12 + 0x318) + 8) = DAT_140c63664;
    }
    auVar19 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                                          SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                                           (uVar29, CONCAT114(SUB141(auVar21 >> 0x38, 0),
                                                                                                                                                              auVar21)) >> 0x70, 0),
                                                                                                                            CONCAT113(uVar28, SUB1413(auVar21, 0))) >> 0x68, 0),
                                                                                                           CONCAT112(SUB141(auVar21 >> 0x30, 0),
                                                                                                                     SUB1412(auVar21, 0))) >> 0x60, 0),
                                                                                          CONCAT111(uVar27, SUB1411(auVar21, 0))) >> 0x58, 0),
                                                                                  CONCAT110(SUB141(auVar21 >> 0x28, 0),
                                                                                            SUB1410(auVar21, 0)))
                                                                                >> 0x50, 0),
                                                                 CONCAT19(uVar26, SUB149(auVar21, 0))) >> 0x48, 0),
                                                CONCAT18(SUB141(auVar21 >> 0x20, 0), SUB148(auVar21, 0)))
                                               >> 0x40, 0), uVar25), (SUB147(auVar21, 0) >> 0x18) << 0x30);
    auVar18 = CONCAT115(CONCAT101(SUB1610(auVar19 >> 0x30, 0), uVar24),
                        (SUB145(auVar21, 0) >> 0x10) << 0x20);
    auVar17 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar18 >> 0x20, 0), uVar23),
                                          (SUB143(auVar21, 0) >> 8) << 0x10) >> 0x10, 0),
                        SUB142(auVar21, 0) & 0xff | (ushort) bVar22 << 8);
    iVar4 = SUB164(CONCAT214(CONCAT11(uVar29, uVar28),
                             CONCAT212(SUB162(auVar19 >> 0x30, 0), SUB1612(auVar17, 0))) >> 0x60, 0);
    auVar18 = CONCAT610(SUB166(CONCAT412(iVar4, CONCAT210(CONCAT11(uVar27, uVar26), SUB1610(auVar17, 0)))
                                       >> 0x50, 0), CONCAT28(SUB162(auVar18 >> 0x20, 0), SUB168(auVar17, 0)));
    _local_108 = CONCAT412((float) iVar4 * fVar33,
                           CONCAT48((float) (SUB164(auVar17, 0) & 0xffff |
                                             (uint) CONCAT11(uVar23, bVar22) << 0x10) * fVar32,
                                    CONCAT44((float) SUB164(CONCAT106(CONCAT82(SUB168(auVar18 >> 0x40, 0
                                             ), CONCAT11(uVar25,
                                                         uVar24)), (SUB166(auVar17, 0) >> 0x10) << 0x20) >>
                                                                                                         0x20, 0) * fVar31,
                                             (float) SUB164(auVar18 >> 0x40, 0) * fVar30)));
    uVar8 = FUN_140141f10(DAT_140c63678, local_108);
    puVar16 = (uint * )(*(longlong * )(uVar10 + 0x440) + 0x2c8);
    lVar9 = DAT_140c63678;
    if (puVar16 != local_1e8) {
        FUN_1401429a0(DAT_140c63678, *puVar16);
        lVar9 = DAT_140c63678;
        *puVar16 = uVar8;
        if ((ulonglong) uVar8 < *(ulonglong * )(lVar9 + 0x30)) {
            iVar4 = *(int *) ((ulonglong) uVar8 * 0x20 + 0x10 + *(longlong * )(lVar9 + 0x28));
            if (iVar4 - 1U < 0xfffffffe) {
                *(int *) ((ulonglong) uVar8 * 0x20 + 0x10 + *(longlong * )(lVar9 + 0x28)) = iVar4 + 1;
            }
        }
    }
    FUN_1401429a0(lVar9, (ulonglong) uVar8);
    lVar9 = *(longlong * )(uVar10 + 0x440);
    uVar23 = SUB41(param_5, 0);
    uVar24 = (undefined)((uint) param_5 >> 8);
    uVar25 = (undefined)((uint) param_5 >> 0x10);
    uVar26 = (undefined)((uint) param_5 >> 0x18);
    fVar20 = param_6;
    if (*(float *) (lVar9 + 0x408) <= param_6) {
        fVar20 = *(float *) (lVar9 + 0x408);
    }
    *(float *) (lVar9 + 0x400) = param_5;
    *(float *) (lVar9 + 0x404) = param_6;
    *(float *) (lVar9 + 0x40c) = param_7;
    if (param_5 <= fVar20) {
        uVar23 = SUB41(fVar20, 0);
        uVar24 = (undefined)((uint) fVar20 >> 8);
        uVar25 = (undefined)((uint) fVar20 >> 0x10);
        uVar26 = (undefined)((uint) fVar20 >> 0x18);
    }
    *(uint * )(lVar9 + 0x408) = CONCAT13(uVar26, CONCAT12(uVar25, CONCAT11(uVar24, uVar23)));
    FUN_140174900(*(undefined8 * )(uVar10 + 0x440));
    FUN_140174b80(*(undefined8 * )(uVar10 + 0x440));
    uVar11 = FUN_14034bdd0();
    uVar11 = FUN_140123490(uVar10, 2, uVar11);
    *(undefined8 * )(uVar10 + 0x400) = uVar11;
    uVar11 = FUN_14034bdd0();
    uVar11 = FUN_140123490(uVar10, 1, uVar11);
    *(undefined8 * )(uVar10 + 0x408) = uVar11;
    *(longlong * )(uVar10 + 0x460) = local_1d8;
    if (local_1d8 == 0) {
        uVar11 = *(undefined8 * )(uVar10 + 0x20);
    } else {
        uVar11 = *(undefined8 * )(local_1d8 + 0x20);
    }
    FUN_1400e7280(uVar11, uVar10, L"DefaultStratum");
    FUN_1400e8b00(*(undefined8 * )(uVar10 + 0x20), uVar10);
    FUN_1407db4f0(local_d8 ^ (ulonglong) auStack552);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140124a00(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
                   undefined8 param_5, uint param_6) {
    uint uVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    uint uVar6;
    longlong lVar7;
    longlong lVar8;
    undefined8 uVar9;
    longlong lVar10;
    longlong lVar11;
    undefined8 *puVar12;
    undefined extraout_XMM0_Ba;
    undefined extraout_XMM0_Ba_00;
    undefined extraout_XMM0_Ba_01;
    undefined extraout_XMM0_Ba_02;
    undefined uVar13;
    undefined extraout_XMM0_Bb;
    undefined extraout_XMM0_Bb_00;
    undefined extraout_XMM0_Bb_01;
    undefined extraout_XMM0_Bb_02;
    undefined uVar14;
    undefined extraout_XMM0_Bc;
    undefined extraout_XMM0_Bc_00;
    undefined extraout_XMM0_Bc_01;
    undefined extraout_XMM0_Bc_02;
    undefined uVar15;
    undefined extraout_XMM0_Bd;
    undefined extraout_XMM0_Bd_00;
    undefined extraout_XMM0_Bd_01;
    undefined extraout_XMM0_Bd_02;
    undefined uVar16;
    undefined extraout_XMM0_Be;
    undefined extraout_XMM0_Be_00;
    undefined extraout_XMM0_Be_01;
    undefined extraout_XMM0_Be_02;
    undefined uVar17;
    undefined extraout_XMM0_Bf;
    undefined extraout_XMM0_Bf_00;
    undefined extraout_XMM0_Bf_01;
    undefined extraout_XMM0_Bf_02;
    undefined uVar18;
    undefined extraout_XMM0_Bg;
    undefined extraout_XMM0_Bg_00;
    undefined extraout_XMM0_Bg_01;
    undefined extraout_XMM0_Bg_02;
    undefined uVar19;
    undefined extraout_XMM0_Bh;
    undefined extraout_XMM0_Bh_00;
    undefined extraout_XMM0_Bh_01;
    undefined extraout_XMM0_Bh_02;
    undefined uVar20;
    undefined auVar21[16];
    undefined auStack376[32];
    undefined4 *local_158;
    undefined8 local_150;
    undefined8 local_148;
    int local_138;
    int local_134;
    undefined8 local_130;
    undefined4 local_128;
    undefined4 uStack292;
    undefined4 uStack288;
    undefined4 uStack284;
    undefined4 local_118;
    undefined4 uStack276;
    undefined4 uStack272;
    undefined4 uStack268;
    undefined4 local_108;
    undefined4 uStack260;
    undefined4 uStack256;
    undefined4 uStack252;
    undefined4 local_f8[4];
    undefined4 local_e8[4];
    uint local_d8;
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
    undefined4 uStack160;
    undefined4 uStack156;
    undefined4 local_98;
    undefined4 uStack148;
    undefined4 uStack144;
    undefined4 uStack140;
    undefined4 local_88;
    undefined4 uStack132;
    undefined4 uStack128;
    undefined4 uStack124;
    uint local_78;
    undefined8 local_68;
    undefined4 local_60;
    undefined4 local_5c;
    float local_58[4];
    ulonglong local_48;
    undefined auVar22[16];
    undefined auVar23[16];
    undefined auVar24[16];

    local_48 = DAT_140c0f7b0 ^ (ulonglong) auStack376;
    local_130 = param_4;
    FUN_1400e58c0(param_1, L"Chat");
    FUN_140122a00(&local_68);
    if (*(char *) (*(longlong * )(param_1 + 0xb70) + 0x3e0) == '\0') {
        iVar2 = FUN_14010d1c0();
    } else {
        iVar2 = *(int *) (*(longlong * )(param_1 + 0xb70) + 0x3e4);
    }
    if (*(char *) (*(longlong * )(param_1 + 0xb70) + 0x3e0) == '\0') {
        iVar3 = FUN_14010d2f0();
    } else {
        iVar3 = *(int *) (*(longlong * )(param_1 + 0xb70) + 0x3f0);
    }
    if (*(char *) (*(longlong * )(param_1 + 0xb70) + 0x3e0) == '\0') {
        iVar4 = FUN_14010cf80();
    } else {
        iVar4 = *(int *) (*(longlong * )(param_1 + 0xb70) + 1000);
    }
    if (*(char *) (*(longlong * )(param_1 + 0xb70) + 0x3e0) == '\0') {
        iVar5 = FUN_14010d0a0();
    } else {
        iVar5 = *(int *) (*(longlong * )(param_1 + 0xb70) + 0x3ec);
    }
    local_138 = (int) local_68 + 8 + iVar5 + iVar4;
    if (local_138 < 200) {
        local_138 = 200;
    }
    local_134 = local_68._4_4_ + 0x38 + iVar3 + iVar2;
    lVar7 = FUN_14018b280(0x480, 0);
    lVar10 = 0;
    lVar8 = lVar10;
    if (lVar7 != 0) {
        local_158 = (undefined4 * )((ulonglong) local_158 & 0xffffffff00000000 | (ulonglong) param_6);
        lVar8 = FUN_1401224c0(lVar7, param_1, &local_138);
    }
    uVar9 = FUN_140123230(lVar8, param_3, local_68._4_4_);
    local_68 = 0;
    local_5c = 0;
    local_60 = 0x3f800000;
    *(undefined8 * )(lVar8 + 0x448) = uVar9;
    local_58[0] = 5.605194e-45;
    local_58[1] = (float) (local_68._4_4_ + 8);
    local_58[2] = -NAN;
    local_d8 = 0;
    local_58[3] = (float) (local_68._4_4_ + 0x1c);
    lVar7 = lVar10;
    puVar12 = (undefined8 * ) & local_118;
    do {
        lVar11 = lVar7 + 4;
        *(undefined4 * )((longlong) local_f8 + lVar7) = *(undefined4 * )((longlong) & local_68 + lVar7);
        *(undefined4 * )((longlong) local_e8 + lVar7) = *(undefined4 * )((longlong) local_58 + lVar7);
        *puVar12 = 0;
        lVar7 = lVar11;
        puVar12 = puVar12 + 1;
    } while (lVar11 < 0x10);
    local_78 = local_d8 | 0x300;
    local_c8 = local_128;
    uStack196 = uStack292;
    uStack192 = uStack288;
    uStack188 = uStack284;
    local_a8 = local_108;
    uStack164 = uStack260;
    uStack160 = uStack256;
    uStack156 = uStack252;
    local_b8 = local_118;
    uStack180 = uStack276;
    uStack176 = uStack272;
    uStack172 = uStack268;
    local_98 = local_f8[0];
    uStack148 = local_f8[1];
    uStack144 = local_f8[2];
    uStack140 = local_f8[3];
    local_88 = local_e8[0];
    uStack132 = local_e8[1];
    uStack128 = local_e8[2];
    uStack124 = local_e8[3];
    lVar11 = FUN_14018b280(0x580, 0);
    lVar7 = lVar10;
    uVar13 = extraout_XMM0_Ba;
    uVar14 = extraout_XMM0_Bb;
    uVar15 = extraout_XMM0_Bc;
    uVar16 = extraout_XMM0_Bd;
    uVar17 = extraout_XMM0_Be;
    uVar18 = extraout_XMM0_Bf;
    uVar19 = extraout_XMM0_Bg;
    uVar20 = extraout_XMM0_Bh;
    if (lVar11 != 0) {
        local_158 = &local_c8;
        local_148 = 0;
        local_150 = 0x110;
        lVar7 = FUN_14010e4a0(lVar11, param_1, lVar8);
        uVar13 = extraout_XMM0_Ba_00;
        uVar14 = extraout_XMM0_Bb_00;
        uVar15 = extraout_XMM0_Bc_00;
        uVar16 = extraout_XMM0_Bd_00;
        uVar17 = extraout_XMM0_Be_00;
        uVar18 = extraout_XMM0_Bf_00;
        uVar19 = extraout_XMM0_Bg_00;
        uVar20 = extraout_XMM0_Bh_00;
    }
    *(longlong * )(lVar8 + 0x450) = lVar7;
    if (*(longlong * )(lVar7 + 0x318) == 0) {
        lVar11 = FUN_14018b280(0x30);
        uVar13 = extraout_XMM0_Ba_01;
        uVar14 = extraout_XMM0_Bb_01;
        uVar15 = extraout_XMM0_Bc_01;
        uVar16 = extraout_XMM0_Bd_01;
        uVar17 = extraout_XMM0_Be_01;
        uVar18 = extraout_XMM0_Bf_01;
        uVar19 = extraout_XMM0_Bg_01;
        uVar20 = extraout_XMM0_Bh_01;
        if (lVar11 != 0) {
            lVar10 = FUN_1401095e0(lVar11);
            uVar13 = extraout_XMM0_Ba_02;
            uVar14 = extraout_XMM0_Bb_02;
            uVar15 = extraout_XMM0_Bc_02;
            uVar16 = extraout_XMM0_Bd_02;
            uVar17 = extraout_XMM0_Be_02;
            uVar18 = extraout_XMM0_Bf_02;
            uVar19 = extraout_XMM0_Bg_02;
            uVar20 = extraout_XMM0_Bh_02;
        }
        *(longlong * )(lVar7 + 0x318) = lVar10;
    }
    if (*(longlong * )(lVar7 + 0x318) != 0) {
        if (*(longlong * )(lVar7 + 0x20) != 0) {
            FUN_140109710(*(longlong * )(lVar7 + 0x318), *(longlong * )(lVar7 + 0x20) + 0xf0, L"WhiteFill");
        }
        uVar13 = (undefined) DAT_140c63664;
        uVar14 = (undefined)((uint) DAT_140c63664 >> 8);
        uVar15 = (undefined)((uint) DAT_140c63664 >> 0x10);
        uVar16 = (undefined)((uint) DAT_140c63664 >> 0x18);
        uVar17 = 0;
        uVar18 = 0;
        uVar19 = 0;
        uVar20 = 0;
        *(undefined4 * )(*(longlong * )(lVar7 + 0x318) + 8) = DAT_140c63664;
    }
    uVar6 = CONCAT13(uVar16, CONCAT12(uVar15, CONCAT11(uVar14, uVar13))) ^
            CONCAT13(uVar16, CONCAT12(uVar15, CONCAT11(uVar14, uVar13)));
    uVar13 = (undefined)(uVar6 >> 0x10);
    uVar1 = CONCAT13(uVar20, CONCAT12(uVar19, CONCAT11(uVar18, uVar17))) ^
            CONCAT13(uVar20, CONCAT12(uVar19, CONCAT11(uVar18, uVar17)));
    uVar14 = (undefined)(uVar1 >> 8);
    auVar24 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                         SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                          ((char) (uVar1 >> 0x18),
                                                                                                                           CONCAT114(SUB161(_DAT_140b7b5c0 >> 0x38, 0),
                                                                                                                                     SUB1614(_DAT_140b7b5c0, 0))) >> 0x70, 0),
                                                                                                           CONCAT113((char) (uVar1 >> 0x10),
                                                                                                                     SUB1613(_DAT_140b7b5c0, 0))) >> 0x68, 0),
                                                                                          CONCAT112(SUB161(_DAT_140b7b5c0 >> 0x30, 0),
                                                                                                    SUB1612(_DAT_140b7b5c0, 0))) >> 0x60, 0),
                                                                         CONCAT111(uVar14, SUB1611(_DAT_140b7b5c0, 0))) >>
                                                                                                                        0x58, 0), CONCAT110(SUB161(_DAT_140b7b5c0 >> 0x28, 0),
                                                                                                                                            SUB1610(_DAT_140b7b5c0, 0))) >>
                                                                                                                                                                         0x50, 0),
                                                                 CONCAT19((char) uVar1,
                                                                          SUB169(_DAT_140b7b5c0, 0))) >>
                                                                                                      0x48, 0),
                                                CONCAT18(SUB161(_DAT_140b7b5c0 >> 0x20, 0),
                                                         SUB168(_DAT_140b7b5c0, 0))) >> 0x40, 0),
                                (char) (uVar6 >> 0x18)), (SUB167(_DAT_140b7b5c0, 0) >> 0x18) << 0x30);
    auVar23 = CONCAT115(CONCAT101(SUB1610(auVar24 >> 0x30, 0), uVar13),
                        (SUB165(_DAT_140b7b5c0, 0) >> 0x10) << 0x20);
    auVar22 = CONCAT133(SUB1613(CONCAT124(SUB1612(auVar23 >> 0x20, 0), (uVar6 >> 8) << 0x18) >> 0x18, 0),
                        (SUB163(_DAT_140b7b5c0, 0) >> 8) << 0x10);
    auVar21 = CONCAT142(SUB1614(auVar22 >> 0x10, 0),
                        SUB162(_DAT_140b7b5c0, 0) & 0xff | (ushort)(byte)
    uVar6 << 8);
    local_58[0] = (float) CONCAT13(uVar14, CONCAT12((char) uVar1, SUB162(auVar23 >> 0x20, 0))) *
                  0.003921569;
    local_58[1] = (float) CONCAT13((char) (((ulonglong)(ushort)(uVar6 >> 0x10) << 0x30) >> 0x38),
                                   CONCAT12(uVar13, SUB162(auVar22 >> 0x10, 0))) * 0.003921569;
    local_58[2] = (float) (SUB164(auVar21, 0) & 0xffff | uVar6 << 0x10) * 0.003921569;
    local_58[3] = (float) SUB164(CONCAT214((short) (uVar1 >> 0x10),
                                           CONCAT212(SUB162(auVar24 >> 0x30, 0), SUB1612(auVar21, 0))) >>
                                                                                                       0x60, 0) *
                  0.003921569;
    uVar6 = FUN_140141f10(DAT_140c63678, local_58);
    puVar12 = (undefined8 * )(*(longlong * )(lVar8 + 0x450) + 0x2c8);
    lVar7 = DAT_140c63678;
    if (puVar12 != &local_68) {
        FUN_1401429a0(DAT_140c63678, *(uint *) puVar12);
        lVar7 = DAT_140c63678;
        *(uint *) puVar12 = uVar6;
        if ((ulonglong) uVar6 < *(ulonglong * )(lVar7 + 0x30)) {
            iVar2 = *(int *) ((ulonglong) uVar6 * 0x20 + 0x10 + *(longlong * )(lVar7 + 0x28));
            if (iVar2 - 1U < 0xfffffffe) {
                *(int *) ((ulonglong) uVar6 * 0x20 + 0x10 + *(longlong * )(lVar7 + 0x28)) = iVar2 + 1;
            }
        }
    }
    FUN_1401429a0(lVar7, (ulonglong) uVar6);
    (**(code * *)(**(longlong * *)(lVar8 + 0x450) + 0x50))(*(longlong * *)(lVar8 + 0x450), local_130);
    *(undefined4 * )(*(longlong * )(lVar8 + 0x450) + 0x2c0) = 0x14;
    uVar9 = FUN_14034bdd0();
    uVar9 = FUN_140123490(lVar8, 2, uVar9);
    *(undefined8 * )(lVar8 + 0x400) = uVar9;
    uVar9 = FUN_14034bdd0();
    uVar9 = FUN_140123490(lVar8, 1, uVar9);
    *(undefined8 * )(lVar8 + 0x408) = uVar9;
    *(undefined8 * )(lVar8 + 0x460) = 0;
    FUN_1400e7280(*(undefined8 * )(lVar8 + 0x20), lVar8, L"DefaultStratum");
    FUN_1400e8b00(*(undefined8 * )(lVar8 + 0x20), lVar8);
    FUN_1407db4f0(local_48 ^ (ulonglong) auStack376);
    return;
}



// WARNING: Heritage AFTER dead removal. Example location: XMM0_Qa : 0x00014012517d
// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: register

void FUN_140124e00(undefined8 *param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4) {
    undefined4 uVar1;
    longlong **pplVar2;
    undefined8 uVar3;
    longlong lVar4;
    longlong lVar5;
    uint uVar6;
    uint uVar7;
    undefined auVar8[14];
    undefined auVar9[12];
    unkbyte10 Var10;
    char cVar11;
    longlong lVar12;
    ulonglong uVar13;
    longlong *plVar14;
    longlong **pplVar15;
    longlong *extraout_RAX;
    longlong *plVar16;
    longlong *extraout_RAX_00;
    longlong *extraout_RAX_01;
    longlong *extraout_RAX_02;
    longlong *extraout_RAX_03;
    longlong *plVar17;
    undefined8 *puVar18;
    int iVar19;
    int iVar20;
    int iVar21;
    int iVar22;
    longlong *plVar23;
    undefined extraout_XMM0_Ba;
    undefined extraout_XMM0_Ba_00;
    undefined extraout_XMM0_Ba_01;
    undefined extraout_XMM0_Ba_02;
    undefined extraout_XMM0_Ba_03;
    undefined extraout_XMM0_Ba_04;
    undefined extraout_XMM0_Ba_05;
    undefined extraout_XMM0_Ba_06;
    undefined extraout_XMM0_Ba_07;
    undefined extraout_XMM0_Ba_08;
    undefined extraout_XMM0_Ba_09;
    undefined extraout_XMM0_Ba_10;
    undefined extraout_XMM0_Ba_11;
    undefined extraout_XMM0_Ba_12;
    undefined extraout_XMM0_Ba_13;
    undefined extraout_XMM0_Ba_14;
    undefined extraout_XMM0_Ba_15;
    undefined extraout_XMM0_Ba_16;
    undefined extraout_XMM0_Bb;
    undefined extraout_XMM0_Bb_00;
    undefined extraout_XMM0_Bb_01;
    undefined extraout_XMM0_Bb_02;
    undefined extraout_XMM0_Bb_03;
    undefined extraout_XMM0_Bb_04;
    undefined extraout_XMM0_Bb_05;
    undefined extraout_XMM0_Bb_06;
    undefined extraout_XMM0_Bb_07;
    undefined extraout_XMM0_Bb_08;
    undefined extraout_XMM0_Bb_09;
    undefined extraout_XMM0_Bb_10;
    undefined extraout_XMM0_Bb_11;
    undefined extraout_XMM0_Bb_12;
    undefined extraout_XMM0_Bb_13;
    undefined extraout_XMM0_Bb_14;
    undefined extraout_XMM0_Bb_15;
    undefined extraout_XMM0_Bb_16;
    undefined extraout_XMM0_Bc;
    undefined extraout_XMM0_Bc_00;
    undefined extraout_XMM0_Bc_01;
    undefined uVar24;
    undefined extraout_XMM0_Bc_02;
    undefined extraout_XMM0_Bc_03;
    undefined extraout_XMM0_Bc_04;
    undefined extraout_XMM0_Bc_05;
    undefined extraout_XMM0_Bc_06;
    undefined extraout_XMM0_Bc_07;
    undefined extraout_XMM0_Bc_08;
    undefined extraout_XMM0_Bc_09;
    undefined extraout_XMM0_Bc_10;
    undefined extraout_XMM0_Bc_11;
    undefined extraout_XMM0_Bc_12;
    undefined extraout_XMM0_Bc_13;
    undefined extraout_XMM0_Bc_14;
    undefined extraout_XMM0_Bc_15;
    undefined extraout_XMM0_Bc_16;
    undefined extraout_XMM0_Bd;
    undefined extraout_XMM0_Bd_00;
    undefined extraout_XMM0_Bd_01;
    undefined uVar25;
    undefined extraout_XMM0_Bd_02;
    undefined extraout_XMM0_Bd_03;
    undefined extraout_XMM0_Bd_04;
    undefined extraout_XMM0_Bd_05;
    undefined extraout_XMM0_Bd_06;
    undefined extraout_XMM0_Bd_07;
    undefined extraout_XMM0_Bd_08;
    undefined extraout_XMM0_Bd_09;
    undefined extraout_XMM0_Bd_10;
    undefined extraout_XMM0_Bd_11;
    undefined extraout_XMM0_Bd_12;
    undefined extraout_XMM0_Bd_13;
    undefined extraout_XMM0_Bd_14;
    undefined extraout_XMM0_Bd_15;
    undefined extraout_XMM0_Bd_16;
    undefined extraout_XMM0_Be;
    undefined extraout_XMM0_Be_00;
    undefined extraout_XMM0_Be_01;
    undefined uVar26;
    undefined extraout_XMM0_Be_02;
    undefined extraout_XMM0_Be_03;
    undefined extraout_XMM0_Be_04;
    undefined extraout_XMM0_Be_05;
    undefined extraout_XMM0_Be_06;
    undefined extraout_XMM0_Be_07;
    undefined extraout_XMM0_Be_08;
    undefined extraout_XMM0_Be_09;
    undefined extraout_XMM0_Be_10;
    undefined extraout_XMM0_Be_11;
    undefined extraout_XMM0_Be_12;
    undefined extraout_XMM0_Be_13;
    undefined extraout_XMM0_Be_14;
    undefined extraout_XMM0_Be_15;
    undefined extraout_XMM0_Be_16;
    undefined extraout_XMM0_Bf;
    undefined extraout_XMM0_Bf_00;
    undefined extraout_XMM0_Bf_01;
    undefined uVar27;
    undefined uVar28;
    undefined extraout_XMM0_Bf_02;
    undefined extraout_XMM0_Bf_03;
    undefined extraout_XMM0_Bf_04;
    undefined extraout_XMM0_Bf_05;
    undefined extraout_XMM0_Bf_06;
    undefined extraout_XMM0_Bf_07;
    undefined extraout_XMM0_Bf_08;
    undefined extraout_XMM0_Bf_09;
    undefined extraout_XMM0_Bf_10;
    undefined extraout_XMM0_Bf_11;
    undefined extraout_XMM0_Bf_12;
    undefined extraout_XMM0_Bf_13;
    undefined extraout_XMM0_Bf_14;
    undefined extraout_XMM0_Bf_15;
    undefined extraout_XMM0_Bf_16;
    undefined extraout_XMM0_Bg;
    undefined extraout_XMM0_Bg_00;
    undefined extraout_XMM0_Bg_01;
    undefined uVar29;
    undefined extraout_XMM0_Bg_02;
    undefined extraout_XMM0_Bg_03;
    undefined extraout_XMM0_Bg_04;
    undefined extraout_XMM0_Bg_05;
    undefined extraout_XMM0_Bg_06;
    undefined extraout_XMM0_Bg_07;
    undefined extraout_XMM0_Bg_08;
    undefined extraout_XMM0_Bg_09;
    undefined extraout_XMM0_Bg_10;
    undefined extraout_XMM0_Bg_11;
    undefined extraout_XMM0_Bg_12;
    undefined extraout_XMM0_Bg_13;
    undefined extraout_XMM0_Bg_14;
    undefined extraout_XMM0_Bg_15;
    undefined extraout_XMM0_Bg_16;
    undefined extraout_XMM0_Bh;
    undefined extraout_XMM0_Bh_00;
    undefined extraout_XMM0_Bh_01;
    undefined uVar30;
    undefined extraout_XMM0_Bh_02;
    undefined uVar31;
    undefined extraout_XMM0_Bh_03;
    undefined extraout_XMM0_Bh_04;
    undefined extraout_XMM0_Bh_05;
    undefined extraout_XMM0_Bh_06;
    undefined extraout_XMM0_Bh_07;
    undefined extraout_XMM0_Bh_08;
    undefined extraout_XMM0_Bh_09;
    undefined extraout_XMM0_Bh_10;
    undefined extraout_XMM0_Bh_11;
    undefined extraout_XMM0_Bh_12;
    undefined extraout_XMM0_Bh_13;
    undefined extraout_XMM0_Bh_14;
    undefined extraout_XMM0_Bh_15;
    undefined extraout_XMM0_Bh_16;
    undefined auVar32[16];
    undefined auStack296[32];
    undefined8 local_108;
    undefined8 local_100;
    ulonglong local_f8;
    undefined8 local_f0;
    undefined8 local_e8;
    undefined8 *local_e0;
    longlong *local_c8[2];
    undefined local_b8[16];
    longlong local_a8;
    undefined local_98[16];
    undefined8 local_88[4];
    undefined local_68[16];
    undefined local_58[16];
    uint local_48;
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong) auStack296;
    local_108 = (undefined *) FUN_1401223b0(local_98, &DAT_140c3c418);
    plVar23 = (longlong *) 0x0;
    local_f8 = 0;
    local_100 = 0x18;
    FUN_1400c5920(param_1, param_2, 0);
    param_1[0x80] = 0;
    *param_1 = &PTR_LAB_140b57900;
    *(undefined4 * )(param_1 + 0x81) = param_3;
    *(undefined4 * )((longlong) param_1 + 0x40c) = param_4;
    *(undefined8 * )((longlong) param_1 + 0x414) = 0;
    *(undefined8 * )((longlong) param_1 + 0x41c) = 0;
    *(undefined2 * )((longlong) param_1 + 0x424) = 0;
    FUN_1401095e0(param_1 + 0x8c);
    param_1[0x36] = param_1[0x36] | 0x800;
    local_e0 = param_1 + 0x85;
    local_e8._0_4_ = 0;
    local_f0._0_4_ = 0x100;
    local_f8 = local_f8 & 0xffffffff00000000;
    local_100._0_4_ = 1;
    local_108 = (undefined * )((ulonglong) local_108 & 0xffffffff00000000);
    (**(code * *)(*DAT_140c65670 + 0x58))(DAT_140c65670, 0x100, 0x100);
    local_e0 = param_1 + 0x86;
    local_e8 = (undefined * )((ulonglong) local_e8._4_4_ << 0x20);
    local_f0 = (longlong *) CONCAT44(local_f0._4_4_, 0x100);
    local_f8 = local_f8 & 0xffffffff00000000;
    local_100 = CONCAT44(local_100._4_4_, 1);
    local_108 = (undefined * )((ulonglong) local_108 & 0xffffffff00000000);
    (**(code * *)(*DAT_140c65670 + 0x58))(DAT_140c65670, 0x10, 0x100);
    lVar12 = param_1[4];
    uVar24 = extraout_XMM0_Ba;
    uVar28 = extraout_XMM0_Bb;
    uVar31 = extraout_XMM0_Bc;
    uVar25 = extraout_XMM0_Bd;
    uVar26 = extraout_XMM0_Be;
    uVar27 = extraout_XMM0_Bf;
    uVar29 = extraout_XMM0_Bg;
    uVar30 = extraout_XMM0_Bh;
    if ((lVar12 != 0) &&
        ((param_1[0x8c] == 0 ||
          (cVar11 = FUN_14002c740(param_1 + 0x8e, L"DashedLine"), uVar24 = extraout_XMM0_Ba_00,
           uVar28 = extraout_XMM0_Bb_00, uVar31 = extraout_XMM0_Bc_00, uVar25 = extraout_XMM0_Bd_00,
           uVar26 = extraout_XMM0_Be_00, uVar27 = extraout_XMM0_Bf_00, uVar29 = extraout_XMM0_Bg_00,
           uVar30 = extraout_XMM0_Bh_00, cVar11 == '\0')))) {
        lVar12 = FUN_140108e80(lVar12 + 0xf0, L"DashedLine");
        plVar14 = plVar23;
        if (lVar12 != 0) {
            do {
                lVar4 = (longlong) plVar14 + 1;
                plVar14 = (longlong * )((longlong) plVar14 + 1);
            } while (L"DashedLine"[lVar4] != L'\0');
            FUN_14001c480(param_1 + 0x8e, L"DashedLine", L"DashedLine" + (longlong) plVar14);
        }
        FUN_1401097f0(param_1 + 0x8c, lVar12);
        uVar24 = extraout_XMM0_Ba_01;
        uVar28 = extraout_XMM0_Bb_01;
        uVar31 = extraout_XMM0_Bc_01;
        uVar25 = extraout_XMM0_Bd_01;
        uVar26 = extraout_XMM0_Be_01;
        uVar27 = extraout_XMM0_Bf_01;
        uVar29 = extraout_XMM0_Bg_01;
        uVar30 = extraout_XMM0_Bh_01;
    }
    uVar6 = CONCAT13(uVar25, CONCAT12(uVar31, CONCAT11(uVar28, uVar24))) ^
            CONCAT13(uVar25, CONCAT12(uVar31, CONCAT11(uVar28, uVar24)));
    uVar24 = (undefined)(uVar6 >> 0x10);
    uVar7 = CONCAT13(uVar30, CONCAT12(uVar29, CONCAT11(uVar27, uVar26))) ^
            CONCAT13(uVar30, CONCAT12(uVar29, CONCAT11(uVar27, uVar26)));
    uVar28 = (undefined)(uVar7 >> 8);
    Var10 = CONCAT91(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                       SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                        ((char) (uVar7 >> 0x18),
                                                                                                                         CONCAT114(SUB161(_DAT_140b7b690 >> 0x38, 0),
                                                                                                                                   SUB1614(_DAT_140b7b690, 0))) >> 0x70, 0),
                                                                                                         CONCAT113((char) (uVar7 >> 0x10),
                                                                                                                   SUB1613(_DAT_140b7b690, 0))) >> 0x68, 0),
                                                                                        CONCAT112(SUB161(_DAT_140b7b690 >> 0x30, 0),
                                                                                                  SUB1612(_DAT_140b7b690, 0))) >> 0x60, 0),
                                                                       CONCAT111(uVar28, SUB1611(_DAT_140b7b690, 0))) >>
                                                                                                                      0x58, 0), CONCAT110(SUB161(_DAT_140b7b690 >> 0x28, 0),
                                                                                                                                          SUB1610(_DAT_140b7b690, 0))) >>
                                                                                                                                                                       0x50, 0),
                                                               CONCAT19((char) uVar7,
                                                                        SUB169(_DAT_140b7b690, 0))) >>
                                                                                                    0x48, 0),
                                              CONCAT18(SUB161(_DAT_140b7b690 >> 0x20, 0),
                                                       SUB168(_DAT_140b7b690, 0))) >> 0x40, 0),
                              (char) (uVar6 >> 0x18)), SUB161(_DAT_140b7b690 >> 0x18, 0));
    auVar9 = CONCAT111(CONCAT101(Var10, uVar24), SUB161(_DAT_140b7b690 >> 0x10, 0));
    auVar8 = CONCAT131(CONCAT121(auVar9, (char) (uVar6 >> 8)), SUB161(_DAT_140b7b690 >> 8, 0));
    auVar32 = CONCAT142(auVar8, SUB162(_DAT_140b7b690, 0) & 0xff | (ushort)(byte)
    uVar6 << 8);
    local_b8 = CONCAT412((float) SUB164(CONCAT214((short) (uVar7 >> 0x10),
                                                  CONCAT212((short) Var10, SUB1612(auVar32, 0))) >> 0x60, 0
                         ) * 0.003921569,
                         CONCAT48((float) (SUB164(auVar32, 0) & 0xffff | uVar6 << 0x10) * 0.003921569,
                                  CONCAT44((float) CONCAT13((char) (((ulonglong)(ushort)(uVar6 >> 0x10)
                                                                    << 0x30) >> 0x38),
                                                            CONCAT12(uVar24, SUB142(auVar8, 0))) *
                                           0.003921569,
                                           (float) CONCAT13(uVar28, CONCAT12((char) uVar7,
                                                                             SUB122(auVar9, 0))) *
                                           0.003921569)));
    uVar13 = FUN_140141f10(DAT_140c63678, local_b8);
    pplVar2 = (longlong * *)(param_1 + 0x59);
    uVar13 = uVar13 & 0xffffffff;
    lVar12 = DAT_140c63678;
    if (pplVar2 != local_c8) {
        FUN_1401429a0(DAT_140c63678, *(undefined4 *) pplVar2);
        lVar12 = DAT_140c63678;
        *(int *) pplVar2 = (int) uVar13;
        if (uVar13 < *(ulonglong * )(lVar12 + 0x30)) {
            iVar19 = *(int *) (uVar13 * 0x20 + 0x10 + *(longlong * )(lVar12 + 0x28));
            if (iVar19 - 1U < 0xfffffffe) {
                *(int *) (uVar13 * 0x20 + 0x10 + *(longlong * )(lVar12 + 0x28)) = iVar19 + 1;
            }
        }
    }
    FUN_1401429a0(lVar12, uVar13);
    if (param_1[99] == 0) {
        lVar12 = FUN_14018b280(0x30);
        plVar14 = plVar23;
        if (lVar12 != 0) {
            plVar14 = (longlong *) FUN_1401095e0(lVar12);
        }
        param_1[99] = plVar14;
    }
    if (param_1[99] != 0) {
        if (param_1[4] != 0) {
            FUN_140109710(param_1[99], param_1[4] + 0xf0, L"WhiteFill", 0);
        }
        *(undefined4 * )(param_1[99] + 8) = DAT_140c63664;
    }
    pplVar2 = *(longlong * **)(*(longlong * )(param_1[4] + 0x170) + 0x18);
    pplVar15 = (longlong **)
            FUN_14010e2e0(*(undefined8 * )(*(longlong * )(param_1[4] + 0x170) + 0x10), pplVar2,
                          L"Control");
    plVar14 = plVar23;
    if (pplVar15 != pplVar2) {
        plVar14 = *pplVar15;
    }
    local_c8[0] = plVar14;
    lVar12 = FUN_14018b280(0x400, 0);
    plVar17 = plVar23;
    if (lVar12 != 0) {
        local_48 = 0;
        puVar18 = local_88;
        do {
            uVar1 = *(undefined4 * )(plVar17 + 0x281429d2);
            *(undefined4 * )(local_58 + (longlong) plVar17) = 0;
            plVar17 = (longlong * )((longlong) plVar17 + 4);
            *(undefined4 * )((longlong) local_88 + 0x1c + (longlong) plVar17) = uVar1;
            *puVar18 = 0;
            puVar18 = puVar18 + 1;
        } while ((longlong) plVar17 < 0x10);
        local_48 = local_48 | 0x300;
        uVar6 = CONCAT13(extraout_XMM0_Bh_02,
                         CONCAT12(extraout_XMM0_Bg_02, CONCAT11(extraout_XMM0_Bf_02, extraout_XMM0_Be_02))
        ) ^
                CONCAT13(extraout_XMM0_Bh_02,
                         CONCAT12(extraout_XMM0_Bg_02, CONCAT11(extraout_XMM0_Bf_02, extraout_XMM0_Be_02))
                );
        uVar24 = (undefined)(uVar6 >> 8);
        uVar28 = (undefined)(uVar6 >> 0x10);
        uVar31 = (undefined)(uVar6 >> 0x18);
        local_108 = local_98;
        local_f8 = 0;
        local_58 = _DAT_140b7a980;
        local_68 = ZEXT816(CONCAT17(uVar31, CONCAT16(uVar28, CONCAT15(uVar24, CONCAT14((char) uVar6,
                                                                                       CONCAT13(
                                                                                               extraout_XMM0_Bd_02,
                                                                                               CONCAT12(
                                                                                                       extraout_XMM0_Bc_02,
                                                                                                       CONCAT11(
                                                                                                               extraout_XMM0_Bb_02,
                                                                                                               extraout_XMM0_Ba_02))) ^
                                                                                       CONCAT13(extraout_XMM0_Bd_02,
                                                                                                CONCAT12(
                                                                                                        extraout_XMM0_Bc_02,
                                                                                                        CONCAT11(
                                                                                                                extraout_XMM0_Bb_02,
                                                                                                                extraout_XMM0_Ba_02))))
        ))));
        local_100 = 0x118;
        FUN_1400c5920(CONCAT17(uVar31, CONCAT16(uVar28, CONCAT15(uVar24, CONCAT14((char) uVar6,
                                                                                  CONCAT13(
                                                                                          extraout_XMM0_Bd_02,
                                                                                          CONCAT12(extraout_XMM0_Bc_02,
                                                                                                   CONCAT11(
                                                                                                           extraout_XMM0_Bb_02,
                                                                                                           extraout_XMM0_Ba_02))))))),
                      SUB168(_DAT_140b7a980, 0), lVar12, param_1[4], param_1, plVar14);
        plVar17 = extraout_RAX;
    }
    param_1[0x87] = plVar17;
    if (plVar17[99] == 0) {
        lVar12 = FUN_14018b280(0x30);
        plVar16 = plVar23;
        if (lVar12 != 0) {
            plVar16 = (longlong *) FUN_1401095e0(lVar12);
        }
        plVar17[99] = (longlong) plVar16;
    }
    if (plVar17[99] != 0) {
        if (plVar17[4] != 0) {
            FUN_140109710(plVar17[99], plVar17[4] + 0xf0, L"WhiteFill", 0);
        }
        *(undefined4 * )(plVar17[99] + 8) = DAT_140c63664;
    }
    lVar12 = FUN_14018b280(0x400, 0);
    plVar17 = plVar23;
    if (lVar12 != 0) {
        local_48 = 0;
        puVar18 = local_88;
        do {
            uVar1 = *(undefined4 * )(plVar17 + 0x281429d2);
            *(undefined4 * )(local_58 + (longlong) plVar17) = 0;
            plVar17 = (longlong * )((longlong) plVar17 + 4);
            *(undefined4 * )((longlong) local_88 + 0x1c + (longlong) plVar17) = uVar1;
            *puVar18 = 0;
            puVar18 = puVar18 + 1;
        } while ((longlong) plVar17 < 0x10);
        local_48 = local_48 | 0x300;
        uVar6 = CONCAT13(extraout_XMM0_Bh_03,
                         CONCAT12(extraout_XMM0_Bg_03, CONCAT11(extraout_XMM0_Bf_03, extraout_XMM0_Be_03))
        ) ^
                CONCAT13(extraout_XMM0_Bh_03,
                         CONCAT12(extraout_XMM0_Bg_03, CONCAT11(extraout_XMM0_Bf_03, extraout_XMM0_Be_03))
                );
        uVar24 = (undefined)(uVar6 >> 8);
        uVar28 = (undefined)(uVar6 >> 0x10);
        uVar31 = (undefined)(uVar6 >> 0x18);
        local_108 = local_98;
        local_f8 = 0;
        local_58 = _DAT_140b7a9a0;
        local_68 = ZEXT816(CONCAT17(uVar31, CONCAT16(uVar28, CONCAT15(uVar24, CONCAT14((char) uVar6,
                                                                                       CONCAT13(
                                                                                               extraout_XMM0_Bd_03,
                                                                                               CONCAT12(
                                                                                                       extraout_XMM0_Bc_03,
                                                                                                       CONCAT11(
                                                                                                               extraout_XMM0_Bb_03,
                                                                                                               extraout_XMM0_Ba_03))) ^
                                                                                       CONCAT13(extraout_XMM0_Bd_03,
                                                                                                CONCAT12(
                                                                                                        extraout_XMM0_Bc_03,
                                                                                                        CONCAT11(
                                                                                                                extraout_XMM0_Bb_03,
                                                                                                                extraout_XMM0_Ba_03))))
        ))));
        local_100 = 0x118;
        FUN_1400c5920(CONCAT17(uVar31, CONCAT16(uVar28, CONCAT15(uVar24, CONCAT14((char) uVar6,
                                                                                  CONCAT13(
                                                                                          extraout_XMM0_Bd_03,
                                                                                          CONCAT12(extraout_XMM0_Bc_03,
                                                                                                   CONCAT11(
                                                                                                           extraout_XMM0_Bb_03,
                                                                                                           extraout_XMM0_Ba_03))))))),
                      SUB168(_DAT_140b7a9a0, 0), lVar12, param_1[4], param_1, plVar14);
        plVar17 = extraout_RAX_00;
    }
    param_1[0x88] = plVar17;
    if (plVar17[99] == 0) {
        lVar12 = FUN_14018b280(0x30);
        plVar16 = plVar23;
        if (lVar12 != 0) {
            plVar16 = (longlong *) FUN_1401095e0(lVar12);
        }
        plVar17[99] = (longlong) plVar16;
    }
    if (plVar17[99] != 0) {
        if (plVar17[4] != 0) {
            FUN_140109710(plVar17[99], plVar17[4] + 0xf0, L"WhiteFill", 0);
        }
        *(undefined4 * )(plVar17[99] + 8) = DAT_140c63664;
    }
    lVar12 = FUN_14018b280(0x400, 0);
    plVar17 = plVar23;
    if (lVar12 != 0) {
        local_48 = 0;
        puVar18 = local_88;
        do {
            uVar1 = *(undefined4 * )(plVar17 + 0x281429d2);
            *(undefined4 * )(local_58 + (longlong) plVar17) = 0;
            plVar17 = (longlong * )((longlong) plVar17 + 4);
            *(undefined4 * )((longlong) local_88 + 0x1c + (longlong) plVar17) = uVar1;
            *puVar18 = 0;
            puVar18 = puVar18 + 1;
        } while ((longlong) plVar17 < 0x10);
        local_48 = local_48 | 0x300;
        uVar6 = CONCAT13(extraout_XMM0_Bh_04,
                         CONCAT12(extraout_XMM0_Bg_04, CONCAT11(extraout_XMM0_Bf_04, extraout_XMM0_Be_04))
        ) ^
                CONCAT13(extraout_XMM0_Bh_04,
                         CONCAT12(extraout_XMM0_Bg_04, CONCAT11(extraout_XMM0_Bf_04, extraout_XMM0_Be_04))
                );
        uVar24 = (undefined)(uVar6 >> 8);
        uVar28 = (undefined)(uVar6 >> 0x10);
        uVar31 = (undefined)(uVar6 >> 0x18);
        local_108 = local_98;
        local_f8 = 0;
        local_58 = _DAT_140b7a9b0;
        local_68 = ZEXT816(CONCAT17(uVar31, CONCAT16(uVar28, CONCAT15(uVar24, CONCAT14((char) uVar6,
                                                                                       CONCAT13(
                                                                                               extraout_XMM0_Bd_04,
                                                                                               CONCAT12(
                                                                                                       extraout_XMM0_Bc_04,
                                                                                                       CONCAT11(
                                                                                                               extraout_XMM0_Bb_04,
                                                                                                               extraout_XMM0_Ba_04))) ^
                                                                                       CONCAT13(extraout_XMM0_Bd_04,
                                                                                                CONCAT12(
                                                                                                        extraout_XMM0_Bc_04,
                                                                                                        CONCAT11(
                                                                                                                extraout_XMM0_Bb_04,
                                                                                                                extraout_XMM0_Ba_04))))
        ))));
        local_100 = 0x118;
        FUN_1400c5920(CONCAT17(uVar31, CONCAT16(uVar28, CONCAT15(uVar24, CONCAT14((char) uVar6,
                                                                                  CONCAT13(
                                                                                          extraout_XMM0_Bd_04,
                                                                                          CONCAT12(extraout_XMM0_Bc_04,
                                                                                                   CONCAT11(
                                                                                                           extraout_XMM0_Bb_04,
                                                                                                           extraout_XMM0_Ba_04))))))),
                      SUB168(_DAT_140b7a9b0, 0), lVar12, param_1[4], param_1, plVar14);
        plVar17 = extraout_RAX_01;
    }
    param_1[0x8b] = plVar17;
    if (plVar17[99] == 0) {
        lVar12 = FUN_14018b280(0x30);
        plVar16 = plVar23;
        if (lVar12 != 0) {
            plVar16 = (longlong *) FUN_1401095e0(lVar12);
        }
        plVar17[99] = (longlong) plVar16;
    }
    if (plVar17[99] != 0) {
        if (plVar17[4] != 0) {
            FUN_140109710(plVar17[99], plVar17[4] + 0xf0, L"DashedLine", 0);
        }
        *(undefined4 * )(plVar17[99] + 8) = DAT_140c63664;
    }
    lVar12 = FUN_14018b280(0x400, 0);
    plVar17 = plVar23;
    if (lVar12 != 0) {
        local_48 = 0;
        puVar18 = local_88;
        do {
            uVar1 = *(undefined4 * )(plVar17 + 0x281429d2);
            *(undefined4 * )(local_58 + (longlong) plVar17) = 0;
            plVar17 = (longlong * )((longlong) plVar17 + 4);
            *(undefined4 * )((longlong) local_88 + 0x1c + (longlong) plVar17) = uVar1;
            *puVar18 = 0;
            puVar18 = puVar18 + 1;
        } while ((longlong) plVar17 < 0x10);
        local_48 = local_48 | 0x300;
        uVar6 = CONCAT13(extraout_XMM0_Bh_05,
                         CONCAT12(extraout_XMM0_Bg_05, CONCAT11(extraout_XMM0_Bf_05, extraout_XMM0_Be_05))
        ) ^
                CONCAT13(extraout_XMM0_Bh_05,
                         CONCAT12(extraout_XMM0_Bg_05, CONCAT11(extraout_XMM0_Bf_05, extraout_XMM0_Be_05))
                );
        uVar24 = (undefined)(uVar6 >> 8);
        uVar28 = (undefined)(uVar6 >> 0x10);
        uVar31 = (undefined)(uVar6 >> 0x18);
        local_108 = local_98;
        local_f8 = 0;
        local_58 = _DAT_140b7a990;
        local_68 = ZEXT816(CONCAT17(uVar31, CONCAT16(uVar28, CONCAT15(uVar24, CONCAT14((char) uVar6,
                                                                                       CONCAT13(
                                                                                               extraout_XMM0_Bd_05,
                                                                                               CONCAT12(
                                                                                                       extraout_XMM0_Bc_05,
                                                                                                       CONCAT11(
                                                                                                               extraout_XMM0_Bb_05,
                                                                                                               extraout_XMM0_Ba_05))) ^
                                                                                       CONCAT13(extraout_XMM0_Bd_05,
                                                                                                CONCAT12(
                                                                                                        extraout_XMM0_Bc_05,
                                                                                                        CONCAT11(
                                                                                                                extraout_XMM0_Bb_05,
                                                                                                                extraout_XMM0_Ba_05))))
        ))));
        local_100 = 0x118;
        FUN_1400c5920(CONCAT17(uVar31, CONCAT16(uVar28, CONCAT15(uVar24, CONCAT14((char) uVar6,
                                                                                  CONCAT13(
                                                                                          extraout_XMM0_Bd_05,
                                                                                          CONCAT12(extraout_XMM0_Bc_05,
                                                                                                   CONCAT11(
                                                                                                           extraout_XMM0_Bb_05,
                                                                                                           extraout_XMM0_Ba_05))))))),
                      SUB168(_DAT_140b7a990, 0), lVar12, param_1[4], param_1, plVar14);
        plVar17 = extraout_RAX_02;
    }
    param_1[0x89] = plVar17;
    if (plVar17[99] == 0) {
        lVar12 = FUN_14018b280(0x30);
        plVar16 = plVar23;
        if (lVar12 != 0) {
            plVar16 = (longlong *) FUN_1401095e0(lVar12);
        }
        plVar17[99] = (longlong) plVar16;
    }
    if (plVar17[99] != 0) {
        if (plVar17[4] != 0) {
            FUN_140109710(plVar17[99], plVar17[4] + 0xf0, L"WhiteFill", 0);
        }
        *(undefined4 * )(plVar17[99] + 8) = DAT_140c63664;
    }
    lVar12 = FUN_14018b280(0x400, 0);
    plVar17 = plVar23;
    if (lVar12 != 0) {
        local_48 = 0;
        puVar18 = local_88;
        do {
            uVar1 = *(undefined4 * )(plVar17 + 0x281429d2);
            *(undefined4 * )(local_58 + (longlong) plVar17) = 0;
            plVar17 = (longlong * )((longlong) plVar17 + 4);
            *(undefined4 * )((longlong) local_88 + 0x1c + (longlong) plVar17) = uVar1;
            *puVar18 = 0;
            puVar18 = puVar18 + 1;
        } while ((longlong) plVar17 < 0x10);
        local_48 = local_48 | 0x300;
        uVar6 = CONCAT13(extraout_XMM0_Bh_06,
                         CONCAT12(extraout_XMM0_Bg_06, CONCAT11(extraout_XMM0_Bf_06, extraout_XMM0_Be_06))
        ) ^
                CONCAT13(extraout_XMM0_Bh_06,
                         CONCAT12(extraout_XMM0_Bg_06, CONCAT11(extraout_XMM0_Bf_06, extraout_XMM0_Be_06))
                );
        uVar24 = (undefined)(uVar6 >> 8);
        uVar28 = (undefined)(uVar6 >> 0x10);
        uVar31 = (undefined)(uVar6 >> 0x18);
        local_108 = local_98;
        local_f8 = 0;
        local_58 = _DAT_140b7a9c0;
        local_68 = ZEXT816(CONCAT17(uVar31, CONCAT16(uVar28, CONCAT15(uVar24, CONCAT14((char) uVar6,
                                                                                       CONCAT13(
                                                                                               extraout_XMM0_Bd_06,
                                                                                               CONCAT12(
                                                                                                       extraout_XMM0_Bc_06,
                                                                                                       CONCAT11(
                                                                                                               extraout_XMM0_Bb_06,
                                                                                                               extraout_XMM0_Ba_06))) ^
                                                                                       CONCAT13(extraout_XMM0_Bd_06,
                                                                                                CONCAT12(
                                                                                                        extraout_XMM0_Bc_06,
                                                                                                        CONCAT11(
                                                                                                                extraout_XMM0_Bb_06,
                                                                                                                extraout_XMM0_Ba_06))))
        ))));
        local_100 = 0x118;
        FUN_1400c5920(CONCAT17(uVar31, CONCAT16(uVar28, CONCAT15(uVar24, CONCAT14((char) uVar6,
                                                                                  CONCAT13(
                                                                                          extraout_XMM0_Bd_06,
                                                                                          CONCAT12(extraout_XMM0_Bc_06,
                                                                                                   CONCAT11(
                                                                                                           extraout_XMM0_Bb_06,
                                                                                                           extraout_XMM0_Ba_06))))))),
                      SUB168(_DAT_140b7a9c0, 0), lVar12, param_1[4], param_1, plVar14);
        plVar17 = extraout_RAX_03;
    }
    param_1[0x8a] = plVar17;
    if (plVar17[99] == 0) {
        lVar12 = FUN_14018b280(0x30);
        plVar14 = plVar23;
        if (lVar12 != 0) {
            plVar14 = (longlong *) FUN_1401095e0(lVar12);
        }
        plVar17[99] = (longlong) plVar14;
    }
    if (plVar17[99] != 0) {
        if (plVar17[4] != 0) {
            FUN_140109710(plVar17[99], plVar17[4] + 0xf0, L"WhiteFill", 0);
        }
        *(undefined4 * )(plVar17[99] + 8) = DAT_140c63664;
    }
    iVar22 = DAT_140c3d4e4;
    iVar20 = DAT_140c3d4e0;
    iVar21 = DAT_140c3d4dc;
    iVar19 = DAT_140c3d4d8;
    lVar12 = FUN_14018b280(0x620, 0);
    plVar14 = plVar23;
    if (lVar12 != 0) {
        local_48 = 0;
        puVar18 = local_88;
        do {
            uVar1 = *(undefined4 * )(plVar14 + 0x281429d2);
            *(undefined4 * )(local_58 + (longlong) plVar14) = 0;
            plVar14 = (longlong * )((longlong) plVar14 + 4);
            *(undefined4 * )((longlong) local_88 + 0x1c + (longlong) plVar14) = uVar1;
            *puVar18 = 0;
            puVar18 = puVar18 + 1;
        } while ((longlong) plVar14 < 0x10);
        local_48 = local_48 | 0x300;
        local_e0 = (undefined8 *) 0x100;
        uVar6 = CONCAT13(extraout_XMM0_Bh_07,
                         CONCAT12(extraout_XMM0_Bg_07, CONCAT11(extraout_XMM0_Bf_07, extraout_XMM0_Be_07))
        ) ^
                CONCAT13(extraout_XMM0_Bh_07,
                         CONCAT12(extraout_XMM0_Bg_07, CONCAT11(extraout_XMM0_Bf_07, extraout_XMM0_Be_07))
                );
        local_f0 = *(longlong * *)(param_1[4] + 0xb70);
        local_e8 = local_98;
        local_68 = ZEXT816(CONCAT17((char) (uVar6 >> 0x18),
                                    CONCAT16((char) (uVar6 >> 0x10),
                                             CONCAT15((char) (uVar6 >> 8),
                                                      CONCAT14((char) uVar6,
                                                               CONCAT13(extraout_XMM0_Bd_07,
                                                                        CONCAT12(extraout_XMM0_Bc_07,
                                                                                 CONCAT11(
                                                                                         extraout_XMM0_Bb_07,
                                                                                         extraout_XMM0_Ba_07))) ^
                                                               CONCAT13(extraout_XMM0_Bd_07,
                                                                        CONCAT12(extraout_XMM0_Bc_07,
                                                                                 CONCAT11(extraout_XMM0_Bb_07,
                                                                                          extraout_XMM0_Ba_07))))
                                             ))));
        local_58._0_8_ = CONCAT44(iVar21, iVar19);
        local_58._0_12_ = CONCAT48(iVar20, local_58._0_8_);
        local_58 = CONCAT412(iVar22, local_58._0_12_);
        local_108 = (undefined *) CONCAT44(local_108._4_4_, 1);
        plVar14 = (longlong *) FUN_14012f720(lVar12, param_1[4], param_1, local_f0 + 0x51);
    }
    param_1[0x92] = plVar14;
    (**(code * *)(*plVar14 + 0x50))(plVar14, &DAT_1409d7ca4);
    *(undefined4 * )(param_1[0x92] + 0x2c0) = 5;
    *(undefined4 * )(param_1[0x92] + 0x2a4) = 0;
    FUN_1400ccd40(param_1[0x92], L"Lock the slider to the red component");
    iVar21 = iVar21 + DAT_140c3c4b8._4_4_;
    iVar22 = iVar22 + DAT_140c3c4b8._4_4_;
    iVar19 = iVar19 + (int) DAT_140c3c4b8;
    iVar20 = iVar20 + (int) DAT_140c3c4b8;
    lVar12 = FUN_14018b280(0x620, 0);
    plVar14 = plVar23;
    if (lVar12 != 0) {
        local_48 = 0;
        puVar18 = local_88;
        do {
            uVar1 = *(undefined4 * )(plVar14 + 0x281429d2);
            *(undefined4 * )(local_58 + (longlong) plVar14) = 0;
            plVar14 = (longlong * )((longlong) plVar14 + 4);
            *(undefined4 * )((longlong) local_88 + 0x1c + (longlong) plVar14) = uVar1;
            *puVar18 = 0;
            puVar18 = puVar18 + 1;
        } while ((longlong) plVar14 < 0x10);
        local_48 = local_48 | 0x300;
        local_e0 = (undefined8 *) 0x100;
        uVar6 = CONCAT13(extraout_XMM0_Bh_08,
                         CONCAT12(extraout_XMM0_Bg_08, CONCAT11(extraout_XMM0_Bf_08, extraout_XMM0_Be_08))
        ) ^
                CONCAT13(extraout_XMM0_Bh_08,
                         CONCAT12(extraout_XMM0_Bg_08, CONCAT11(extraout_XMM0_Bf_08, extraout_XMM0_Be_08))
                );
        local_f0 = *(longlong * *)(param_1[4] + 0xb70);
        local_e8 = local_98;
        local_68 = ZEXT816(CONCAT17((char) (uVar6 >> 0x18),
                                    CONCAT16((char) (uVar6 >> 0x10),
                                             CONCAT15((char) (uVar6 >> 8),
                                                      CONCAT14((char) uVar6,
                                                               CONCAT13(extraout_XMM0_Bd_08,
                                                                        CONCAT12(extraout_XMM0_Bc_08,
                                                                                 CONCAT11(
                                                                                         extraout_XMM0_Bb_08,
                                                                                         extraout_XMM0_Ba_08))) ^
                                                               CONCAT13(extraout_XMM0_Bd_08,
                                                                        CONCAT12(extraout_XMM0_Bc_08,
                                                                                 CONCAT11(extraout_XMM0_Bb_08,
                                                                                          extraout_XMM0_Ba_08))))
                                             ))));
        local_58._0_8_ = CONCAT44(iVar21, iVar19);
        local_58._0_12_ = CONCAT48(iVar20, local_58._0_8_);
        local_58 = CONCAT412(iVar22, local_58._0_12_);
        local_108 = (undefined *) CONCAT44(local_108._4_4_, 1);
        plVar14 = (longlong *) FUN_14012f720(lVar12, param_1[4], param_1, local_f0 + 0x51);
    }
    param_1[0x93] = plVar14;
    (**(code * *)(*plVar14 + 0x50))(plVar14, &DAT_1409d7cdc);
    *(undefined4 * )(param_1[0x93] + 0x2c0) = 5;
    *(undefined4 * )(param_1[0x93] + 0x2a4) = 0;
    FUN_1400ccd40(param_1[0x93], L"Lock the slider to the green component");
    iVar21 = iVar21 + DAT_140c3c4b8._4_4_;
    iVar22 = iVar22 + DAT_140c3c4b8._4_4_;
    iVar19 = iVar19 + (int) DAT_140c3c4b8;
    iVar20 = iVar20 + (int) DAT_140c3c4b8;
    lVar12 = FUN_14018b280(0x620, 0);
    plVar14 = plVar23;
    if (lVar12 != 0) {
        local_48 = 0;
        puVar18 = local_88;
        do {
            uVar1 = *(undefined4 * )(plVar14 + 0x281429d2);
            *(undefined4 * )(local_58 + (longlong) plVar14) = 0;
            plVar14 = (longlong * )((longlong) plVar14 + 4);
            *(undefined4 * )((longlong) local_88 + 0x1c + (longlong) plVar14) = uVar1;
            *puVar18 = 0;
            puVar18 = puVar18 + 1;
        } while ((longlong) plVar14 < 0x10);
        local_48 = local_48 | 0x300;
        local_e0 = (undefined8 *) 0x100;
        uVar6 = CONCAT13(extraout_XMM0_Bh_09,
                         CONCAT12(extraout_XMM0_Bg_09, CONCAT11(extraout_XMM0_Bf_09, extraout_XMM0_Be_09))
        ) ^
                CONCAT13(extraout_XMM0_Bh_09,
                         CONCAT12(extraout_XMM0_Bg_09, CONCAT11(extraout_XMM0_Bf_09, extraout_XMM0_Be_09))
                );
        local_f0 = *(longlong * *)(param_1[4] + 0xb70);
        local_e8 = local_98;
        local_68 = ZEXT816(CONCAT17((char) (uVar6 >> 0x18),
                                    CONCAT16((char) (uVar6 >> 0x10),
                                             CONCAT15((char) (uVar6 >> 8),
                                                      CONCAT14((char) uVar6,
                                                               CONCAT13(extraout_XMM0_Bd_09,
                                                                        CONCAT12(extraout_XMM0_Bc_09,
                                                                                 CONCAT11(
                                                                                         extraout_XMM0_Bb_09,
                                                                                         extraout_XMM0_Ba_09))) ^
                                                               CONCAT13(extraout_XMM0_Bd_09,
                                                                        CONCAT12(extraout_XMM0_Bc_09,
                                                                                 CONCAT11(extraout_XMM0_Bb_09,
                                                                                          extraout_XMM0_Ba_09))))
                                             ))));
        local_58._0_8_ = CONCAT44(iVar21, iVar19);
        local_58._0_12_ = CONCAT48(iVar20, local_58._0_8_);
        local_58 = CONCAT412(iVar22, local_58._0_12_);
        local_108 = (undefined *) CONCAT44(local_108._4_4_, 1);
        plVar14 = (longlong *) FUN_14012f720(lVar12, param_1[4], param_1, local_f0 + 0x51);
    }
    param_1[0x94] = plVar14;
    (**(code * *)(*plVar14 + 0x50))(plVar14, &DAT_1409d7d7c);
    *(undefined4 * )(param_1[0x94] + 0x2c0) = 5;
    *(undefined4 * )(param_1[0x94] + 0x2a4) = 0;
    FUN_1400ccd40(param_1[0x94], L"Lock the slider to the blue component");
    iVar21 = iVar21 + DAT_140c3c4b8._4_4_;
    iVar22 = iVar22 + DAT_140c3c4b8._4_4_;
    iVar19 = iVar19 + (int) DAT_140c3c4b8;
    iVar20 = iVar20 + (int) DAT_140c3c4b8;
    lVar12 = FUN_14018b280(0x620, 0);
    plVar14 = plVar23;
    if (lVar12 != 0) {
        local_48 = 0;
        puVar18 = local_88;
        do {
            uVar1 = *(undefined4 * )(plVar14 + 0x281429d2);
            *(undefined4 * )(local_58 + (longlong) plVar14) = 0;
            plVar14 = (longlong * )((longlong) plVar14 + 4);
            *(undefined4 * )((longlong) local_88 + 0x1c + (longlong) plVar14) = uVar1;
            *puVar18 = 0;
            puVar18 = puVar18 + 1;
        } while ((longlong) plVar14 < 0x10);
        local_48 = local_48 | 0x300;
        local_e0 = (undefined8 *) 0x100;
        uVar6 = CONCAT13(extraout_XMM0_Bh_10,
                         CONCAT12(extraout_XMM0_Bg_10, CONCAT11(extraout_XMM0_Bf_10, extraout_XMM0_Be_10))
        ) ^
                CONCAT13(extraout_XMM0_Bh_10,
                         CONCAT12(extraout_XMM0_Bg_10, CONCAT11(extraout_XMM0_Bf_10, extraout_XMM0_Be_10))
                );
        local_f0 = *(longlong * *)(param_1[4] + 0xb70);
        local_e8 = local_98;
        local_68 = ZEXT816(CONCAT17((char) (uVar6 >> 0x18),
                                    CONCAT16((char) (uVar6 >> 0x10),
                                             CONCAT15((char) (uVar6 >> 8),
                                                      CONCAT14((char) uVar6,
                                                               CONCAT13(extraout_XMM0_Bd_10,
                                                                        CONCAT12(extraout_XMM0_Bc_10,
                                                                                 CONCAT11(
                                                                                         extraout_XMM0_Bb_10,
                                                                                         extraout_XMM0_Ba_10))) ^
                                                               CONCAT13(extraout_XMM0_Bd_10,
                                                                        CONCAT12(extraout_XMM0_Bc_10,
                                                                                 CONCAT11(extraout_XMM0_Bb_10,
                                                                                          extraout_XMM0_Ba_10))))
                                             ))));
        local_58._0_8_ = CONCAT44(iVar21, iVar19);
        local_58._0_12_ = CONCAT48(iVar20, local_58._0_8_);
        local_58 = CONCAT412(iVar22, local_58._0_12_);
        local_108 = (undefined *) CONCAT44(local_108._4_4_, 1);
        plVar14 = (longlong *) FUN_14012f720(lVar12, param_1[4], param_1, local_f0 + 0x51);
    }
    param_1[0x95] = plVar14;
    (**(code * *)(*plVar14 + 0x50))(plVar14, &DAT_1409d7d9c);
    *(undefined4 * )(param_1[0x95] + 0x2c0) = 5;
    *(undefined4 * )(param_1[0x95] + 0x2a4) = 0;
    FUN_1400ccd40(param_1[0x95], L"Lock the slider to the hue component");
    iVar21 = iVar21 + DAT_140c3c4b8._4_4_;
    iVar22 = iVar22 + DAT_140c3c4b8._4_4_;
    iVar19 = iVar19 + (int) DAT_140c3c4b8;
    iVar20 = iVar20 + (int) DAT_140c3c4b8;
    lVar12 = FUN_14018b280(0x620, 0);
    plVar14 = plVar23;
    if (lVar12 != 0) {
        local_48 = 0;
        puVar18 = local_88;
        do {
            uVar1 = *(undefined4 * )(plVar14 + 0x281429d2);
            *(undefined4 * )(local_58 + (longlong) plVar14) = 0;
            plVar14 = (longlong * )((longlong) plVar14 + 4);
            *(undefined4 * )((longlong) local_88 + 0x1c + (longlong) plVar14) = uVar1;
            *puVar18 = 0;
            puVar18 = puVar18 + 1;
        } while ((longlong) plVar14 < 0x10);
        local_48 = local_48 | 0x300;
        local_e0 = (undefined8 *) 0x100;
        uVar6 = CONCAT13(extraout_XMM0_Bh_11,
                         CONCAT12(extraout_XMM0_Bg_11, CONCAT11(extraout_XMM0_Bf_11, extraout_XMM0_Be_11))
        ) ^
                CONCAT13(extraout_XMM0_Bh_11,
                         CONCAT12(extraout_XMM0_Bg_11, CONCAT11(extraout_XMM0_Bf_11, extraout_XMM0_Be_11))
                );
        local_f0 = *(longlong * *)(param_1[4] + 0xb70);
        local_e8 = local_98;
        local_68 = ZEXT816(CONCAT17((char) (uVar6 >> 0x18),
                                    CONCAT16((char) (uVar6 >> 0x10),
                                             CONCAT15((char) (uVar6 >> 8),
                                                      CONCAT14((char) uVar6,
                                                               CONCAT13(extraout_XMM0_Bd_11,
                                                                        CONCAT12(extraout_XMM0_Bc_11,
                                                                                 CONCAT11(
                                                                                         extraout_XMM0_Bb_11,
                                                                                         extraout_XMM0_Ba_11))) ^
                                                               CONCAT13(extraout_XMM0_Bd_11,
                                                                        CONCAT12(extraout_XMM0_Bc_11,
                                                                                 CONCAT11(extraout_XMM0_Bb_11,
                                                                                          extraout_XMM0_Ba_11))))
                                             ))));
        local_58._0_8_ = CONCAT44(iVar21, iVar19);
        local_58._0_12_ = CONCAT48(iVar20, local_58._0_8_);
        local_58 = CONCAT412(iVar22, local_58._0_12_);
        local_108 = (undefined *) CONCAT44(local_108._4_4_, 1);
        plVar14 = (longlong *) FUN_14012f720(lVar12, param_1[4], param_1, local_f0 + 0x51);
    }
    param_1[0x96] = plVar14;
    (**(code * *)(*plVar14 + 0x50))(plVar14, &DAT_1409d7cfc);
    *(undefined4 * )(param_1[0x96] + 0x2c0) = 5;
    *(undefined4 * )(param_1[0x96] + 0x2a4) = 0;
    FUN_1400ccd40(param_1[0x96], L"Lock the slider to the saturtion component");
    iVar21 = iVar21 + DAT_140c3c4b8._4_4_;
    iVar22 = iVar22 + DAT_140c3c4b8._4_4_;
    iVar19 = iVar19 + (int) DAT_140c3c4b8;
    iVar20 = iVar20 + (int) DAT_140c3c4b8;
    lVar12 = FUN_14018b280(0x620, 0);
    plVar14 = plVar23;
    if (lVar12 != 0) {
        local_48 = 0;
        puVar18 = local_88;
        do {
            uVar1 = *(undefined4 * )(plVar14 + 0x281429d2);
            *(undefined4 * )(local_58 + (longlong) plVar14) = 0;
            plVar14 = (longlong * )((longlong) plVar14 + 4);
            *(undefined4 * )((longlong) local_88 + 0x1c + (longlong) plVar14) = uVar1;
            *puVar18 = 0;
            puVar18 = puVar18 + 1;
        } while ((longlong) plVar14 < 0x10);
        local_48 = local_48 | 0x300;
        local_e0 = (undefined8 *) 0x100;
        uVar6 = CONCAT13(extraout_XMM0_Bh_12,
                         CONCAT12(extraout_XMM0_Bg_12, CONCAT11(extraout_XMM0_Bf_12, extraout_XMM0_Be_12))
        ) ^
                CONCAT13(extraout_XMM0_Bh_12,
                         CONCAT12(extraout_XMM0_Bg_12, CONCAT11(extraout_XMM0_Bf_12, extraout_XMM0_Be_12))
                );
        local_f0 = *(longlong * *)(param_1[4] + 0xb70);
        local_e8 = local_98;
        local_68 = ZEXT816(CONCAT17((char) (uVar6 >> 0x18),
                                    CONCAT16((char) (uVar6 >> 0x10),
                                             CONCAT15((char) (uVar6 >> 8),
                                                      CONCAT14((char) uVar6,
                                                               CONCAT13(extraout_XMM0_Bd_12,
                                                                        CONCAT12(extraout_XMM0_Bc_12,
                                                                                 CONCAT11(
                                                                                         extraout_XMM0_Bb_12,
                                                                                         extraout_XMM0_Ba_12))) ^
                                                               CONCAT13(extraout_XMM0_Bd_12,
                                                                        CONCAT12(extraout_XMM0_Bc_12,
                                                                                 CONCAT11(extraout_XMM0_Bb_12,
                                                                                          extraout_XMM0_Ba_12))))
                                             ))));
        local_58._0_8_ = CONCAT44(iVar21, iVar19);
        local_58._0_12_ = CONCAT48(iVar20, local_58._0_8_);
        local_58 = CONCAT412(iVar22, local_58._0_12_);
        local_108 = (undefined *) CONCAT44(local_108._4_4_, 1);
        plVar14 = (longlong *) FUN_14012f720(lVar12, param_1[4], param_1, local_f0 + 0x51);
    }
    param_1[0x97] = plVar14;
    (**(code * *)(*plVar14 + 0x50))(plVar14, &DAT_1409d7d1c);
    *(undefined4 * )(param_1[0x97] + 0x2c0) = 5;
    *(undefined4 * )(param_1[0x97] + 0x2a4) = 0;
    FUN_1400ccd40(param_1[0x97], L"Lock the slider to the brightness component");
    iVar21 = iVar21 + DAT_140c3c4b8._4_4_;
    iVar22 = iVar22 + DAT_140c3c4b8._4_4_;
    iVar19 = iVar19 + (int) DAT_140c3c4b8;
    iVar20 = iVar20 + (int) DAT_140c3c4b8;
    lVar12 = FUN_14018b280(0x620, 0);
    plVar14 = plVar23;
    if (lVar12 != 0) {
        local_48 = 0;
        puVar18 = local_88;
        do {
            uVar1 = *(undefined4 * )(plVar14 + 0x281429d2);
            *(undefined4 * )(local_58 + (longlong) plVar14) = 0;
            plVar14 = (longlong * )((longlong) plVar14 + 4);
            *(undefined4 * )((longlong) local_88 + 0x1c + (longlong) plVar14) = uVar1;
            *puVar18 = 0;
            puVar18 = puVar18 + 1;
        } while ((longlong) plVar14 < 0x10);
        local_48 = local_48 | 0x300;
        local_e0 = (undefined8 *) 0x100;
        uVar6 = CONCAT13(extraout_XMM0_Bh_13,
                         CONCAT12(extraout_XMM0_Bg_13, CONCAT11(extraout_XMM0_Bf_13, extraout_XMM0_Be_13))
        ) ^
                CONCAT13(extraout_XMM0_Bh_13,
                         CONCAT12(extraout_XMM0_Bg_13, CONCAT11(extraout_XMM0_Bf_13, extraout_XMM0_Be_13))
                );
        local_f0 = *(longlong * *)(param_1[4] + 0xb70);
        local_e8 = local_98;
        local_68 = ZEXT816(CONCAT17((char) (uVar6 >> 0x18),
                                    CONCAT16((char) (uVar6 >> 0x10),
                                             CONCAT15((char) (uVar6 >> 8),
                                                      CONCAT14((char) uVar6,
                                                               CONCAT13(extraout_XMM0_Bd_13,
                                                                        CONCAT12(extraout_XMM0_Bc_13,
                                                                                 CONCAT11(
                                                                                         extraout_XMM0_Bb_13,
                                                                                         extraout_XMM0_Ba_13))) ^
                                                               CONCAT13(extraout_XMM0_Bd_13,
                                                                        CONCAT12(extraout_XMM0_Bc_13,
                                                                                 CONCAT11(extraout_XMM0_Bb_13,
                                                                                          extraout_XMM0_Ba_13))))
                                             ))));
        local_58._0_8_ = CONCAT44(iVar21, iVar19);
        local_58._0_12_ = CONCAT48(iVar20, local_58._0_8_);
        local_58 = CONCAT412(iVar22, local_58._0_12_);
        local_108 = (undefined *) CONCAT44(local_108._4_4_, 1);
        plVar14 = (longlong *) FUN_14012f720(lVar12, param_1[4], param_1, local_f0 + 0x51);
    }
    param_1[0x98] = plVar14;
    (**(code * *)(*plVar14 + 0x50))(plVar14, &DAT_1409d7e7c);
    *(undefined4 * )(param_1[0x98] + 0x2c0) = 5;
    *(undefined4 * )(param_1[0x98] + 0x2a4) = 0;
    FUN_1400ccd40(param_1[0x98], L"Use the alpha channel");
    iVar22 = DAT_140c3d4f4;
    iVar20 = DAT_140c3d4f0;
    iVar21 = DAT_140c3d4ec;
    iVar19 = DAT_140c3d4e8;
    lVar12 = FUN_14018b280(0x480, 0);
    plVar14 = plVar23;
    if (lVar12 != 0) {
        local_48 = 0;
        puVar18 = local_88;
        do {
            uVar1 = *(undefined4 * )(plVar14 + 0x281429d2);
            *(undefined4 * )(local_58 + (longlong) plVar14) = 0;
            plVar14 = (longlong * )((longlong) plVar14 + 4);
            *(undefined4 * )((longlong) local_88 + 0x1c + (longlong) plVar14) = uVar1;
            *puVar18 = 0;
            puVar18 = puVar18 + 1;
        } while ((longlong) plVar14 < 0x10);
        local_48 = local_48 | 0x300;
        uVar6 = CONCAT13(extraout_XMM0_Bh_14,
                         CONCAT12(extraout_XMM0_Bg_14, CONCAT11(extraout_XMM0_Bf_14, extraout_XMM0_Be_14))
        ) ^
                CONCAT13(extraout_XMM0_Bh_14,
                         CONCAT12(extraout_XMM0_Bg_14, CONCAT11(extraout_XMM0_Bf_14, extraout_XMM0_Be_14))
                );
        local_68 = ZEXT816(CONCAT17((char) (uVar6 >> 0x18),
                                    CONCAT16((char) (uVar6 >> 0x10),
                                             CONCAT15((char) (uVar6 >> 8),
                                                      CONCAT14((char) uVar6,
                                                               CONCAT13(extraout_XMM0_Bd_14,
                                                                        CONCAT12(extraout_XMM0_Bc_14,
                                                                                 CONCAT11(
                                                                                         extraout_XMM0_Bb_14,
                                                                                         extraout_XMM0_Ba_14))) ^
                                                               CONCAT13(extraout_XMM0_Bd_14,
                                                                        CONCAT12(extraout_XMM0_Bc_14,
                                                                                 CONCAT11(extraout_XMM0_Bb_14,
                                                                                          extraout_XMM0_Ba_14))))
                                             ))));
        local_108 = local_98;
        local_100 = 0x108;
        local_58._0_8_ = CONCAT44(iVar21, iVar19);
        local_58._0_12_ = CONCAT48(iVar20, local_58._0_8_);
        local_58 = CONCAT412(iVar22, local_58._0_12_);
        plVar14 = (longlong *) FUN_140173180(lVar12, param_1[4], param_1, local_c8[0]);
    }
    param_1[0x9b] = plVar14;
    *(undefined4 * )((longlong) plVar14 + 0x41c) = 0;
    *(undefined4 * )(plVar14 + 0x84) = 0x437f0000;
    *(undefined4 * )(plVar14 + 0x83) = 0;
    iVar21 = iVar21 + DAT_140c3c4b8._4_4_;
    iVar22 = iVar22 + DAT_140c3c4b8._4_4_;
    iVar19 = iVar19 + (int) DAT_140c3c4b8;
    iVar20 = iVar20 + (int) DAT_140c3c4b8;
    lVar12 = FUN_14018b280(0x480, 0);
    plVar14 = plVar23;
    if (lVar12 != 0) {
        local_48 = 0;
        puVar18 = local_88;
        do {
            uVar1 = *(undefined4 * )(plVar14 + 0x281429d2);
            *(undefined4 * )(local_58 + (longlong) plVar14) = 0;
            plVar14 = (longlong * )((longlong) plVar14 + 4);
            *(undefined4 * )((longlong) local_88 + 0x1c + (longlong) plVar14) = uVar1;
            *puVar18 = 0;
            puVar18 = puVar18 + 1;
        } while ((longlong) plVar14 < 0x10);
        local_48 = local_48 | 0x300;
        uVar6 = CONCAT13(extraout_XMM0_Bh_15,
                         CONCAT12(extraout_XMM0_Bg_15, CONCAT11(extraout_XMM0_Bf_15, extraout_XMM0_Be_15))
        ) ^
                CONCAT13(extraout_XMM0_Bh_15,
                         CONCAT12(extraout_XMM0_Bg_15, CONCAT11(extraout_XMM0_Bf_15, extraout_XMM0_Be_15))
                );
        local_68 = ZEXT816(CONCAT17((char) (uVar6 >> 0x18),
                                    CONCAT16((char) (uVar6 >> 0x10),
                                             CONCAT15((char) (uVar6 >> 8),
                                                      CONCAT14((char) uVar6,
                                                               CONCAT13(extraout_XMM0_Bd_15,
                                                                        CONCAT12(extraout_XMM0_Bc_15,
                                                                                 CONCAT11(
                                                                                         extraout_XMM0_Bb_15,
                                                                                         extraout_XMM0_Ba_15))) ^
                                                               CONCAT13(extraout_XMM0_Bd_15,
                                                                        CONCAT12(extraout_XMM0_Bc_15,
                                                                                 CONCAT11(extraout_XMM0_Bb_15,
                                                                                          extraout_XMM0_Ba_15))))
                                             ))));
        local_108 = local_98;
        local_100 = 0x108;
        local_58._0_8_ = CONCAT44(iVar21, iVar19);
        local_58._0_12_ = CONCAT48(iVar20, local_58._0_8_);
        local_58 = CONCAT412(iVar22, local_58._0_12_);
        plVar14 = (longlong *) FUN_140173180(lVar12, param_1[4], param_1, local_c8[0]);
    }
    param_1[0x9c] = plVar14;
    *(undefined4 * )((longlong) plVar14 + 0x41c) = 0;
    *(undefined4 * )(plVar14 + 0x84) = 0x437f0000;
    *(undefined4 * )(plVar14 + 0x83) = 0;
    iVar21 = iVar21 + DAT_140c3c4b8._4_4_;
    iVar22 = iVar22 + DAT_140c3c4b8._4_4_;
    iVar19 = iVar19 + (int) DAT_140c3c4b8;
    iVar20 = iVar20 + (int) DAT_140c3c4b8;
    lVar12 = FUN_14018b280(0x480, 0);
    plVar14 = plVar23;
    if (lVar12 != 0) {
        local_48 = 0;
        puVar18 = local_88;
        do {
            uVar1 = *(undefined4 * )(plVar14 + 0x281429d2);
            *(undefined4 * )(local_58 + (longlong) plVar14) = 0;
            plVar14 = (longlong * )((longlong) plVar14 + 4);
            *(undefined4 * )((longlong) local_88 + 0x1c + (longlong) plVar14) = uVar1;
            *puVar18 = 0;
            puVar18 = puVar18 + 1;
        } while ((longlong) plVar14 < 0x10);
        local_48 = local_48 | 0x300;
        uVar6 = CONCAT13(extraout_XMM0_Bh_16,
                         CONCAT12(extraout_XMM0_Bg_16, CONCAT11(extraout_XMM0_Bf_16, extraout_XMM0_Be_16))
        ) ^
                CONCAT13(extraout_XMM0_Bh_16,
                         CONCAT12(extraout_XMM0_Bg_16, CONCAT11(extraout_XMM0_Bf_16, extraout_XMM0_Be_16))
                );
        local_68 = ZEXT816(CONCAT17((char) (uVar6 >> 0x18),
                                    CONCAT16((char) (uVar6 >> 0x10),
                                             CONCAT15((char) (uVar6 >> 8),
                                                      CONCAT14((char) uVar6,
                                                               CONCAT13(extraout_XMM0_Bd_16,
                                                                        CONCAT12(extraout_XMM0_Bc_16,
                                                                                 CONCAT11(
                                                                                         extraout_XMM0_Bb_16,
                                                                                         extraout_XMM0_Ba_16))) ^
                                                               CONCAT13(extraout_XMM0_Bd_16,
                                                                        CONCAT12(extraout_XMM0_Bc_16,
                                                                                 CONCAT11(extraout_XMM0_Bb_16,
                                                                                          extraout_XMM0_Ba_16))))
                                             ))));
        local_108 = local_98;
        local_100 = 0x108;
        local_58._0_8_ = CONCAT44(iVar21, iVar19);
        local_58._0_12_ = CONCAT48(iVar20, local_58._0_8_);
        local_58 = CONCAT412(iVar22, local_58._0_12_);
        plVar14 = (longlong *) FUN_140173180(lVar12, param_1[4], param_1, local_c8[0]);
    }
    param_1[0x9d] = plVar14;
    *(undefined4 * )((longlong) plVar14 + 0x41c) = 0;
    *(undefined4 * )(plVar14 + 0x84) = 0x437f0000;
    *(undefined4 * )(plVar14 + 0x83) = 0;
    iVar21 = iVar21 + DAT_140c3c4b8._4_4_;
    iVar22 = iVar22 + DAT_140c3c4b8._4_4_;
    iVar19 = iVar19 + (int) DAT_140c3c4b8;
    iVar20 = iVar20 + (int) DAT_140c3c4b8;
    local_b8 = CONCAT124(CONCAT84(local_b8._8_8_, iVar21), iVar19);
    local_b8._0_12_ = CONCAT48(iVar20, local_b8._0_8_);
    local_b8 = CONCAT412(iVar22, local_b8._0_12_);
    local_a8 = FUN_14018b280(0x480, 0);
    plVar14 = plVar23;
    if (local_a8 != 0) {
        uVar3 = param_1[4];
        local_108 = (undefined *) FUN_1400c31a0(local_98, local_b8);
        local_100 = 0x108;
        plVar14 = (longlong *) FUN_140173180(local_a8, uVar3, param_1, local_c8[0]);
    }
    param_1[0x9e] = plVar14;
    *(undefined4 * )((longlong) plVar14 + 0x41c) = 0;
    *(undefined4 * )(plVar14 + 0x84) = 0x43b38000;
    *(undefined4 * )(plVar14 + 0x83) = 0;
    iVar21 = iVar21 + DAT_140c3c4b8._4_4_;
    iVar22 = iVar22 + DAT_140c3c4b8._4_4_;
    iVar19 = iVar19 + (int) DAT_140c3c4b8;
    iVar20 = iVar20 + (int) DAT_140c3c4b8;
    local_b8 = CONCAT124(CONCAT84(local_b8._8_8_, iVar21), iVar19);
    local_b8._0_12_ = CONCAT48(iVar20, local_b8._0_8_);
    local_b8 = CONCAT412(iVar22, local_b8._0_12_);
    local_a8 = FUN_14018b280(0x480, 0);
    plVar14 = plVar23;
    if (local_a8 != 0) {
        uVar3 = param_1[4];
        local_108 = (undefined *) FUN_1400c31a0(local_98, local_b8);
        local_100 = 0x108;
        plVar14 = (longlong *) FUN_140173180(local_a8, uVar3, param_1, local_c8[0]);
    }
    param_1[0x9f] = plVar14;
    *(undefined4 * )((longlong) plVar14 + 0x41c) = 0;
    *(undefined4 * )(plVar14 + 0x84) = 0x42c80000;
    *(undefined4 * )(plVar14 + 0x83) = 1;
    iVar21 = iVar21 + DAT_140c3c4b8._4_4_;
    iVar22 = iVar22 + DAT_140c3c4b8._4_4_;
    iVar19 = iVar19 + (int) DAT_140c3c4b8;
    iVar20 = iVar20 + (int) DAT_140c3c4b8;
    local_b8 = CONCAT124(CONCAT84(local_b8._8_8_, iVar21), iVar19);
    local_b8._0_12_ = CONCAT48(iVar20, local_b8._0_8_);
    local_b8 = CONCAT412(iVar22, local_b8._0_12_);
    local_a8 = FUN_14018b280(0x480, 0);
    plVar14 = plVar23;
    if (local_a8 != 0) {
        uVar3 = param_1[4];
        local_108 = (undefined *) FUN_1400c31a0(local_98, local_b8);
        local_100 = 0x108;
        plVar14 = (longlong *) FUN_140173180(local_a8, uVar3, param_1, local_c8[0]);
    }
    param_1[0xa0] = plVar14;
    *(undefined4 * )((longlong) plVar14 + 0x41c) = 0;
    *(undefined4 * )(plVar14 + 0x84) = 0x42c80000;
    *(undefined4 * )(plVar14 + 0x83) = 1;
    local_b8 = CONCAT124(CONCAT84(local_b8._8_8_, iVar21 + DAT_140c3c4b8._4_4_),
                         iVar19 + (int) DAT_140c3c4b8);
    local_b8._0_12_ = CONCAT48(iVar20 + (int) DAT_140c3c4b8, local_b8._0_8_);
    local_b8 = CONCAT412(iVar22 + DAT_140c3c4b8._4_4_, local_b8._0_12_);
    lVar12 = FUN_14018b280(0x480, 0);
    plVar17 = plVar23;
    plVar14 = local_c8[0];
    if (lVar12 != 0) {
        uVar3 = param_1[4];
        local_108 = (undefined *) FUN_1400c31a0(local_98, local_b8);
        plVar14 = local_c8[0];
        local_100 = 0x108;
        plVar17 = (longlong *) FUN_140173180(lVar12, uVar3, param_1, local_c8[0]);
    }
    param_1[0xa1] = plVar17;
    *(undefined4 * )((longlong) plVar17 + 0x41c) = 0;
    *(undefined4 * )(plVar17 + 0x84) = 0x437f0000;
    *(undefined4 * )(plVar17 + 0x83) = 1;
    lVar12 = FUN_14018b280(0x620, 0);
    plVar17 = plVar23;
    if (lVar12 != 0) {
        lVar4 = param_1[4];
        lVar5 = *(longlong * )(lVar4 + 0xb70);
        local_e8 = (undefined *) FUN_1400c31a0(local_98, &DAT_140c3d4f8);
        local_e0 = (undefined8 *) 0x100;
        local_108 = (undefined * )((ulonglong) local_108 & 0xffffffff00000000);
        local_f0 = plVar14;
        plVar17 = (longlong *) FUN_14012f720(lVar12, lVar4, param_1, lVar5 + 0x288);
    }
    param_1[0x99] = plVar17;
    (**(code * *)(*plVar17 + 0x50))(plVar17, &DAT_1409d864c);
    lVar12 = FUN_14018b280(0x620, 0);
    if (lVar12 != 0) {
        lVar4 = param_1[4];
        lVar5 = *(longlong * )(lVar4 + 0xb70);
        local_e8 = (undefined *) FUN_1400c31a0(local_98, &DAT_140c3d508);
        local_e0 = (undefined8 *) 0x100;
        local_108 = (undefined * )((ulonglong) local_108 & 0xffffffff00000000);
        local_f0 = plVar14;
        plVar23 = (longlong *) FUN_14012f720(lVar12, lVar4, param_1, lVar5 + 0x288);
    }
    param_1[0x9a] = plVar23;
    (**(code * *)(*plVar23 + 0x50))(plVar23, L"Cancel");
    FUN_1407db4f0(local_38 ^ (ulonglong) auStack296);
    return;
}


undefined8 FUN_1401262e0(undefined8 param_1, ulonglong param_2) {
    FUN_140126320();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_140126320(undefined8 *param_1, undefined8 param_2) {
    *param_1 = &PTR_LAB_140b57900;
    FUN_1400579e0(*(undefined8 * )(param_1[4] + 400), param_2, *(undefined4 * )(param_1 + 0x81));
    FUN_1400579e0(*(undefined8 * )(param_1[4] + 400));
    if ((longlong *) param_1[0x85] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x85] + 8))();
        param_1[0x85] = 0;
    }
    if ((longlong *) param_1[0x86] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x86] + 8))();
        param_1[0x86] = 0;
    }
    if ((longlong *) param_1[0x87] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x87] + 8))();
        param_1[0x87] = 0;
    }
    if ((longlong *) param_1[0x88] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x88] + 8))();
        param_1[0x88] = 0;
    }
    if ((longlong *) param_1[0x89] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x89] + 8))();
        param_1[0x89] = 0;
    }
    if ((longlong *) param_1[0x8a] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x8a] + 8))();
        param_1[0x8a] = 0;
    }
    if ((longlong *) param_1[0x8b] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x8b] + 8))();
        param_1[0x8b] = 0;
    }
    if ((longlong *) param_1[0x92] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x92] + 8))();
        param_1[0x92] = 0;
    }
    if ((longlong *) param_1[0x93] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x93] + 8))();
        param_1[0x93] = 0;
    }
    if ((longlong *) param_1[0x94] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x94] + 8))();
        param_1[0x94] = 0;
    }
    if ((longlong *) param_1[0x95] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x95] + 8))();
        param_1[0x95] = 0;
    }
    if ((longlong *) param_1[0x96] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x96] + 8))();
        param_1[0x96] = 0;
    }
    if ((longlong *) param_1[0x97] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x97] + 8))();
        param_1[0x97] = 0;
    }
    if ((longlong *) param_1[0x99] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x99] + 8))();
        param_1[0x99] = 0;
    }
    if ((longlong *) param_1[0x9a] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x9a] + 8))();
        param_1[0x9a] = 0;
    }
    if ((longlong *) param_1[0x9b] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x9b] + 8))();
        param_1[0x9b] = 0;
    }
    if ((longlong *) param_1[0x9c] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x9c] + 8))();
        param_1[0x9c] = 0;
    }
    if ((longlong *) param_1[0x9d] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x9d] + 8))();
        param_1[0x9d] = 0;
    }
    if ((longlong *) param_1[0x9e] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x9e] + 8))();
        param_1[0x9e] = 0;
    }
    if ((longlong *) param_1[0x9f] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x9f] + 8))();
        param_1[0x9f] = 0;
    }
    if ((longlong *) param_1[0xa0] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0xa0] + 8))();
        param_1[0xa0] = 0;
    }
    if ((longlong *) param_1[0x98] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x98] + 8))();
        param_1[0x98] = 0;
    }
    if ((longlong *) param_1[0xa1] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0xa1] + 8))();
        param_1[0xa1] = 0;
    }
    if ((longlong *) param_1[0x8c] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x8c] + 8))();
        param_1[0x8c] = 0;
    }
    if (param_1[0x8f] != 0) {
        FUN_14018b900(param_1[0x8f], 0);
    }
    FUN_1400c6030(param_1);
    return;
}


void FUN_1401265f0(longlong param_1) {
    undefined4 uVar1;
    uint uVar2;
    uint *puVar3;
    longlong lVar4;
    undefined *puVar5;
    undefined *puVar6;
    uint *puVar7;
    int iVar8;
    uint uVar9;
    uint uVar10;
    longlong lVar11;
    int iVar12;
    double extraout_XMM0_Qa;
    undefined8 uVar13;
    undefined auVar15[15];
    undefined auVar16[16];
    undefined in_XMM6_Ba;
    byte bVar19;
    undefined in_XMM6_Bb;
    undefined uVar20;
    undefined in_XMM6_Bc;
    undefined uVar21;
    undefined in_XMM6_Bd;
    undefined uVar22;
    undefined in_XMM6_Be;
    undefined uVar23;
    undefined in_XMM6_Bf;
    undefined uVar24;
    undefined in_XMM6_Bg;
    undefined uVar25;
    undefined in_XMM6_Bh;
    undefined uVar26;
    uint local_res8[2];
    uint local_res10[2];
    undefined local_28[16];
    undefined auVar14[12];
    undefined auVar17[16];
    undefined auVar18[16];

    iVar8 = 0;
    local_res8[0] = 0;
    puVar3 = (uint * )(**(code * *)(**(longlong * *)(param_1 + 0x428) + 0x48))
            (*(longlong * *)(param_1 + 0x428), 0);
    iVar12 = 0;
    do {
        uVar9 = 0;
        uVar10 = iVar12 * -0x100 + 0xff00;
        puVar7 = puVar3;
        do {
            *puVar7 = *(int *) (param_1 + 0x418) * -0x10000 - 0x10000U | uVar10 | uVar9 | 0xff000000;
            uVar2 = uVar9 + 1;
            uVar9 = uVar9 + 2;
            puVar7[1] = *(int *) (param_1 + 0x418) * -0x10000 - 0x10000U | uVar2 | uVar10 | 0xff000000;
            puVar7 = puVar7 + 2;
        } while ((int) uVar9 < 0x100);
        iVar12 = iVar12 + 1;
        puVar3 = (uint * )((ulonglong) local_res8[0] + (longlong) puVar3);
    } while (iVar12 < 0x100);
    (**(code * *)(**(longlong * *)(param_1 + 0x428) + 0x50))(*(longlong * *)(param_1 + 0x428), 0);
    lVar4 = (**(code * *)(**(longlong * *)(param_1 + 0x430) + 0x48))
            (*(longlong * *)(param_1 + 0x430), 0, local_res8, 2);
    do {
        lVar11 = 4;
        uVar9 = iVar8 * -0x10000 - 0x10000;
        puVar3 = (uint * )(lVar4 + 8);
        do {
            puVar3[-2] = *(int *) (param_1 + 0x420) * -0x100 + 0xff00U | uVar9 | *(uint * )(param_1 + 0x41c)
                         | 0xff000000;
            puVar3[-1] = *(int *) (param_1 + 0x420) * -0x100 + 0xff00U | uVar9 | *(uint * )(param_1 + 0x41c)
                         | 0xff000000;
            *puVar3 = *(int *) (param_1 + 0x420) * -0x100 + 0xff00U | uVar9 | *(uint * )(param_1 + 0x41c) |
                      0xff000000;
            puVar3[1] = *(int *) (param_1 + 0x420) * -0x100 + 0xff00U | uVar9 | *(uint * )(param_1 + 0x41c)
                        | 0xff000000;
            lVar11 = lVar11 + -1;
            puVar3 = puVar3 + 4;
        } while (lVar11 != 0);
        iVar8 = iVar8 + 1;
        lVar4 = lVar4 + (ulonglong) local_res8[0];
    } while (iVar8 < 0x100);
    (**(code * *)(**(longlong * *)(param_1 + 0x430) + 0x50))();
    puVar5 = (undefined * )
            (**(code * *)(**(longlong * *)(*(longlong * )(param_1 + 0x508) + 0x410) + 0x70))();
    puVar6 = &DAT_1409dd974;
    if (puVar5 != (undefined *) 0x0) {
        puVar6 = puVar5;
    }
    FUN_1407dfd50(puVar6, 0, DAT_140c7aac8);
    lVar4 = DAT_140c63678;
    uVar9 = CONCAT13(in_XMM6_Bd, CONCAT12(in_XMM6_Bc, CONCAT11(in_XMM6_Bb, in_XMM6_Ba))) ^
            CONCAT13(in_XMM6_Bd, CONCAT12(in_XMM6_Bc, CONCAT11(in_XMM6_Bb, in_XMM6_Ba)));
    bVar19 = (byte) uVar9;
    uVar20 = (undefined)(uVar9 >> 8);
    uVar21 = (undefined)(uVar9 >> 0x10);
    uVar22 = (undefined)(uVar9 >> 0x18);
    uVar10 = CONCAT13(in_XMM6_Bh, CONCAT12(in_XMM6_Bg, CONCAT11(in_XMM6_Bf, in_XMM6_Be))) ^
             CONCAT13(in_XMM6_Bh, CONCAT12(in_XMM6_Bg, CONCAT11(in_XMM6_Bf, in_XMM6_Be)));
    uVar23 = (undefined) uVar10;
    uVar24 = (undefined)(uVar10 >> 8);
    uVar25 = (undefined)(uVar10 >> 0x10);
    uVar26 = (undefined)(uVar10 >> 0x18);
    uVar2 = (int) (longlong) extraout_XMM0_Qa << 0x18 | *(int *) (param_1 + 0x418) * -0x10000 + 0xff0000U
            | *(int *) (param_1 + 0x420) * -0x100 + 0xff00U | *(uint * )(param_1 + 0x41c);
    *(uint * )(param_1 + 0x410) = uVar2;
    auVar15 = SUB1615(CONCAT412(uVar2, CONCAT48(uVar2, CONCAT44(uVar2, uVar2))), 0) |
              SUB1615((undefined[16]) 0xff000000, 0) | SUB1615((undefined[16]) 0xff00000000000000, 0)
              | SUB1615((undefined[16]) 0xff000000, 0) |
              SUB1615((undefined[16]) 0xff00000000000000, 0);
    auVar18 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                                          SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                                           (uVar26, CONCAT114(SUB151(auVar15 >> 0x38, 0),
                                                                                                                                                              SUB1514(auVar15, 0))) >> 0x70, 0),
                                                                                                                            CONCAT113(uVar25, SUB1513(auVar15, 0))) >> 0x68, 0),
                                                                                                           CONCAT112(SUB151(auVar15 >> 0x30, 0),
                                                                                                                     SUB1512(auVar15, 0))) >> 0x60, 0),
                                                                                          CONCAT111(uVar24, SUB1511(auVar15, 0))) >> 0x58, 0),
                                                                                  CONCAT110(SUB151(auVar15 >> 0x28, 0),
                                                                                            SUB1510(auVar15, 0)))
                                                                                >> 0x50, 0),
                                                                 CONCAT19(uVar23, SUB159(auVar15, 0))) >> 0x48, 0),
                                                CONCAT18(SUB151(auVar15 >> 0x20, 0), SUB158(auVar15, 0)))
                                               >> 0x40, 0), uVar22), (SUB157(auVar15, 0) >> 0x18) << 0x30);
    auVar17 = CONCAT115(CONCAT101(SUB1610(auVar18 >> 0x30, 0), uVar21),
                        (SUB155(auVar15, 0) >> 0x10) << 0x20);
    auVar16 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar17 >> 0x20, 0), uVar20),
                                          (SUB153(auVar15, 0) >> 8) << 0x10) >> 0x10, 0),
                        SUB152(auVar15, 0) & 0xff | (ushort) bVar19 << 8);
    iVar8 = SUB164(CONCAT214((short) (uVar10 >> 0x10),
                             CONCAT212(SUB162(auVar18 >> 0x30, 0), SUB1612(auVar16, 0))) >> 0x60, 0);
    auVar17 = CONCAT610(SUB166(CONCAT412(iVar8, CONCAT210((short) uVar10, SUB1610(auVar16, 0))) >> 0x50, 0),
                        CONCAT28(SUB162(auVar17 >> 0x20, 0), SUB168(auVar16, 0)));
    local_28 = CONCAT412((float) iVar8 * 0.003921569,
                         CONCAT48((float) (SUB164(auVar16, 0) & 0xffff | uVar9 << 0x10) * 0.003921569,
                                  CONCAT44((float) SUB164(CONCAT106(CONCAT82(SUB168(auVar17 >> 0x40, 0),
                                                                             (short) (uVar9 >> 0x10)),
                                                                    (SUB166(auVar16, 0) >> 0x10) << 0x20
                                           ) >> 0x20, 0) * 0.003921569,
                                           (float) SUB164(auVar17 >> 0x40, 0) * 0.003921569)));
    uVar9 = FUN_140141f10(lVar4, local_28);
    puVar3 = (uint * )(*(longlong * )(param_1 + 0x440) + 0x2c8);
    lVar4 = DAT_140c63678;
    if (puVar3 != local_res10) {
        FUN_1401429a0(DAT_140c63678, *puVar3);
        lVar4 = DAT_140c63678;
        *puVar3 = uVar9;
        if ((ulonglong) uVar9 < *(ulonglong * )(lVar4 + 0x30)) {
            iVar8 = *(int *) ((ulonglong) uVar9 * 0x20 + 0x10 + *(longlong * )(lVar4 + 0x28));
            if (iVar8 - 1U < 0xfffffffe) {
                *(int *) ((ulonglong) uVar9 * 0x20 + 0x10 + *(longlong * )(lVar4 + 0x28)) = iVar8 + 1;
            }
        }
    }
    FUN_1401429a0(lVar4, (ulonglong) uVar9);
    uVar1 = *(undefined4 * )(param_1 + 0x410);
    uVar13 = CONCAT44(uVar1, uVar1);
    auVar14 = CONCAT48(uVar1, uVar13);
    auVar18 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                         SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                          (uVar26, CONCAT114((char) ((uint) uVar1 >> 0x18),
                                                                                                                                             SUB1614(CONCAT412(uVar1, auVar14), 0)))
                                                                                                                          >> 0x70, 0),
                                                                                                           CONCAT113(uVar25, SUB1613(CONCAT412(uVar1, auVar14),
                                                                                                                                     0))) >> 0x68, 0),
                                                                                          CONCAT112((char) ((uint) uVar1 >> 0x10), auVar14)) >>
                                                                                                                                             0x60, 0),
                                                                         CONCAT111(uVar24, SUB1211(auVar14, 0))) >>
                                                                                                                 0x58, 0), CONCAT110((char) ((uint) uVar1 >> 8),
                                                                                                                                     SUB1210(auVar14, 0))) >> 0x50, 0),
                                                                 CONCAT19(uVar23, SUB129(auVar14, 0))) >> 0x48, 0),
                                                CONCAT18((char) uVar1, uVar13)) >> 0x40, 0), uVar22),
                       ((uint7) uVar13 >> 0x18) << 0x30);
    auVar17 = CONCAT115(CONCAT101(SUB1610(auVar18 >> 0x30, 0), uVar21), ((uint5) uVar13 >> 0x10) << 0x20);
    auVar16 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar17 >> 0x20, 0), uVar20),
                                          ((uint3) uVar1 >> 8) << 0x10) >> 0x10, 0),
                        (ushort) uVar1 & 0xff | (ushort) bVar19 << 8);
    iVar8 = SUB164(CONCAT214(CONCAT11(uVar26, uVar25),
                             CONCAT212(SUB162(auVar18 >> 0x30, 0), SUB1612(auVar16, 0))) >> 0x60, 0);
    auVar17 = CONCAT610(SUB166(CONCAT412(iVar8, CONCAT210(CONCAT11(uVar24, uVar23), SUB1610(auVar16, 0)))
                                       >> 0x50, 0), CONCAT28(SUB162(auVar17 >> 0x20, 0), SUB168(auVar16, 0)));
    local_28 = CONCAT412((float) iVar8 * 0.003921569,
                         CONCAT48((float) (SUB164(auVar16, 0) & 0xffff |
                                           (uint) CONCAT11(uVar20, bVar19) << 0x10) * 0.003921569,
                                  CONCAT44((float) SUB164(CONCAT106(CONCAT82(SUB168(auVar17 >> 0x40, 0),
                                                                             CONCAT11(uVar22, uVar21)),
                                                                    (SUB166(auVar16, 0) >> 0x10) << 0x20
                                           ) >> 0x20, 0) * 0.003921569,
                                           (float) SUB164(auVar17 >> 0x40, 0) * 0.003921569)));
    uVar9 = FUN_140141f10(DAT_140c63678, local_28);
    puVar3 = (uint * )(*(longlong * )(param_1 + 0x450) + 0x2c8);
    lVar4 = DAT_140c63678;
    if (puVar3 != local_res10) {
        FUN_1401429a0(DAT_140c63678, *puVar3);
        lVar4 = DAT_140c63678;
        *puVar3 = uVar9;
        if ((ulonglong) uVar9 < *(ulonglong * )(lVar4 + 0x30)) {
            iVar8 = *(int *) (*(longlong * )(lVar4 + 0x28) + 0x10 + (ulonglong) uVar9 * 0x20);
            if (iVar8 - 1U < 0xfffffffe) {
                *(int *) (*(longlong * )(lVar4 + 0x28) + 0x10 + (ulonglong) uVar9 * 0x20) = iVar8 + 1;
            }
        }
    }
    FUN_1401429a0(lVar4, (ulonglong) uVar9);
    return;
}


void FUN_140126990(longlong param_1) {
    undefined4 uVar1;
    uint uVar2;
    uint *puVar3;
    longlong lVar4;
    undefined *puVar5;
    undefined *puVar6;
    uint *puVar7;
    int iVar8;
    uint uVar9;
    uint uVar10;
    longlong lVar11;
    int iVar12;
    double extraout_XMM0_Qa;
    undefined8 uVar13;
    undefined auVar15[15];
    undefined auVar16[16];
    undefined in_XMM6_Ba;
    byte bVar19;
    undefined in_XMM6_Bb;
    undefined uVar20;
    undefined in_XMM6_Bc;
    undefined uVar21;
    undefined in_XMM6_Bd;
    undefined uVar22;
    undefined in_XMM6_Be;
    undefined uVar23;
    undefined in_XMM6_Bf;
    undefined uVar24;
    undefined in_XMM6_Bg;
    undefined uVar25;
    undefined in_XMM6_Bh;
    undefined uVar26;
    uint local_res8[2];
    uint local_res10[2];
    undefined local_28[16];
    undefined auVar14[12];
    undefined auVar17[16];
    undefined auVar18[16];

    iVar8 = 0;
    local_res8[0] = 0;
    puVar3 = (uint * )(**(code * *)(**(longlong * *)(param_1 + 0x428) + 0x48))
            (*(longlong * *)(param_1 + 0x428), 0, local_res8, 2);
    iVar12 = 0;
    do {
        uVar9 = 0;
        uVar10 = iVar12 * -0x10000 - 0x10000;
        puVar7 = puVar3;
        do {
            *puVar7 = *(int *) (param_1 + 0x418) * -0x100 + 0xff00U | uVar10 | uVar9 | 0xff000000;
            uVar2 = uVar9 + 1;
            uVar9 = uVar9 + 2;
            puVar7[1] = *(int *) (param_1 + 0x418) * -0x100 + 0xff00U | uVar2 | uVar10 | 0xff000000;
            puVar7 = puVar7 + 2;
        } while ((int) uVar9 < 0x100);
        iVar12 = iVar12 + 1;
        puVar3 = (uint * )((ulonglong) local_res8[0] + (longlong) puVar3);
    } while (iVar12 < 0x100);
    (**(code * *)(**(longlong * *)(param_1 + 0x428) + 0x50))(*(longlong * *)(param_1 + 0x428), 0);
    lVar4 = (**(code * *)(**(longlong * *)(param_1 + 0x430) + 0x48))
            (*(longlong * *)(param_1 + 0x430), 0, local_res8, 2);
    do {
        lVar11 = 4;
        uVar9 = iVar8 * -0x100 + 0xff00;
        puVar3 = (uint * )(lVar4 + 8);
        do {
            puVar3[-2] = *(int *) (param_1 + 0x420) * -0x10000 - 0x10000U | uVar9 |
                         *(uint * )(param_1 + 0x41c) | 0xff000000;
            puVar3[-1] = *(int *) (param_1 + 0x420) * -0x10000 - 0x10000U | uVar9 |
                         *(uint * )(param_1 + 0x41c) | 0xff000000;
            *puVar3 = *(int *) (param_1 + 0x420) * -0x10000 - 0x10000U | uVar9 | *(uint * )(param_1 + 0x41c)
                      | 0xff000000;
            puVar3[1] = *(int *) (param_1 + 0x420) * -0x10000 - 0x10000U | uVar9 |
                        *(uint * )(param_1 + 0x41c) | 0xff000000;
            lVar11 = lVar11 + -1;
            puVar3 = puVar3 + 4;
        } while (lVar11 != 0);
        iVar8 = iVar8 + 1;
        lVar4 = lVar4 + (ulonglong) local_res8[0];
    } while (iVar8 < 0x100);
    (**(code * *)(**(longlong * *)(param_1 + 0x430) + 0x50))();
    puVar5 = (undefined * )
            (**(code * *)(**(longlong * *)(*(longlong * )(param_1 + 0x508) + 0x410) + 0x70))();
    puVar6 = &DAT_1409dd974;
    if (puVar5 != (undefined *) 0x0) {
        puVar6 = puVar5;
    }
    FUN_1407dfd50(puVar6, 0, DAT_140c7aac8);
    lVar4 = DAT_140c63678;
    uVar9 = CONCAT13(in_XMM6_Bd, CONCAT12(in_XMM6_Bc, CONCAT11(in_XMM6_Bb, in_XMM6_Ba))) ^
            CONCAT13(in_XMM6_Bd, CONCAT12(in_XMM6_Bc, CONCAT11(in_XMM6_Bb, in_XMM6_Ba)));
    bVar19 = (byte) uVar9;
    uVar20 = (undefined)(uVar9 >> 8);
    uVar21 = (undefined)(uVar9 >> 0x10);
    uVar22 = (undefined)(uVar9 >> 0x18);
    uVar10 = CONCAT13(in_XMM6_Bh, CONCAT12(in_XMM6_Bg, CONCAT11(in_XMM6_Bf, in_XMM6_Be))) ^
             CONCAT13(in_XMM6_Bh, CONCAT12(in_XMM6_Bg, CONCAT11(in_XMM6_Bf, in_XMM6_Be)));
    uVar23 = (undefined) uVar10;
    uVar24 = (undefined)(uVar10 >> 8);
    uVar25 = (undefined)(uVar10 >> 0x10);
    uVar26 = (undefined)(uVar10 >> 0x18);
    uVar2 = (int) (longlong) extraout_XMM0_Qa << 0x18 | *(int *) (param_1 + 0x420) * -0x10000 + 0xff0000U
            | *(int *) (param_1 + 0x418) * -0x100 + 0xff00U | *(uint * )(param_1 + 0x41c);
    *(uint * )(param_1 + 0x410) = uVar2;
    auVar15 = SUB1615(CONCAT412(uVar2, CONCAT48(uVar2, CONCAT44(uVar2, uVar2))), 0) |
              SUB1615((undefined[16]) 0xff000000, 0) | SUB1615((undefined[16]) 0xff00000000000000, 0)
              | SUB1615((undefined[16]) 0xff000000, 0) |
              SUB1615((undefined[16]) 0xff00000000000000, 0);
    auVar18 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                                          SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                                           (uVar26, CONCAT114(SUB151(auVar15 >> 0x38, 0),
                                                                                                                                                              SUB1514(auVar15, 0))) >> 0x70, 0),
                                                                                                                            CONCAT113(uVar25, SUB1513(auVar15, 0))) >> 0x68, 0),
                                                                                                           CONCAT112(SUB151(auVar15 >> 0x30, 0),
                                                                                                                     SUB1512(auVar15, 0))) >> 0x60, 0),
                                                                                          CONCAT111(uVar24, SUB1511(auVar15, 0))) >> 0x58, 0),
                                                                                  CONCAT110(SUB151(auVar15 >> 0x28, 0),
                                                                                            SUB1510(auVar15, 0)))
                                                                                >> 0x50, 0),
                                                                 CONCAT19(uVar23, SUB159(auVar15, 0))) >> 0x48, 0),
                                                CONCAT18(SUB151(auVar15 >> 0x20, 0), SUB158(auVar15, 0)))
                                               >> 0x40, 0), uVar22), (SUB157(auVar15, 0) >> 0x18) << 0x30);
    auVar17 = CONCAT115(CONCAT101(SUB1610(auVar18 >> 0x30, 0), uVar21),
                        (SUB155(auVar15, 0) >> 0x10) << 0x20);
    auVar16 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar17 >> 0x20, 0), uVar20),
                                          (SUB153(auVar15, 0) >> 8) << 0x10) >> 0x10, 0),
                        SUB152(auVar15, 0) & 0xff | (ushort) bVar19 << 8);
    iVar8 = SUB164(CONCAT214((short) (uVar10 >> 0x10),
                             CONCAT212(SUB162(auVar18 >> 0x30, 0), SUB1612(auVar16, 0))) >> 0x60, 0);
    auVar17 = CONCAT610(SUB166(CONCAT412(iVar8, CONCAT210((short) uVar10, SUB1610(auVar16, 0))) >> 0x50, 0),
                        CONCAT28(SUB162(auVar17 >> 0x20, 0), SUB168(auVar16, 0)));
    local_28 = CONCAT412((float) iVar8 * 0.003921569,
                         CONCAT48((float) (SUB164(auVar16, 0) & 0xffff | uVar9 << 0x10) * 0.003921569,
                                  CONCAT44((float) SUB164(CONCAT106(CONCAT82(SUB168(auVar17 >> 0x40, 0),
                                                                             (short) (uVar9 >> 0x10)),
                                                                    (SUB166(auVar16, 0) >> 0x10) << 0x20
                                           ) >> 0x20, 0) * 0.003921569,
                                           (float) SUB164(auVar17 >> 0x40, 0) * 0.003921569)));
    uVar9 = FUN_140141f10(lVar4, local_28);
    puVar3 = (uint * )(*(longlong * )(param_1 + 0x440) + 0x2c8);
    lVar4 = DAT_140c63678;
    if (puVar3 != local_res10) {
        FUN_1401429a0(DAT_140c63678, *puVar3);
        lVar4 = DAT_140c63678;
        *puVar3 = uVar9;
        if ((ulonglong) uVar9 < *(ulonglong * )(lVar4 + 0x30)) {
            iVar8 = *(int *) ((ulonglong) uVar9 * 0x20 + 0x10 + *(longlong * )(lVar4 + 0x28));
            if (iVar8 - 1U < 0xfffffffe) {
                *(int *) ((ulonglong) uVar9 * 0x20 + 0x10 + *(longlong * )(lVar4 + 0x28)) = iVar8 + 1;
            }
        }
    }
    FUN_1401429a0(lVar4, (ulonglong) uVar9);
    uVar1 = *(undefined4 * )(param_1 + 0x410);
    uVar13 = CONCAT44(uVar1, uVar1);
    auVar14 = CONCAT48(uVar1, uVar13);
    auVar18 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                         SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                          (uVar26, CONCAT114((char) ((uint) uVar1 >> 0x18),
                                                                                                                                             SUB1614(CONCAT412(uVar1, auVar14), 0)))
                                                                                                                          >> 0x70, 0),
                                                                                                           CONCAT113(uVar25, SUB1613(CONCAT412(uVar1, auVar14),
                                                                                                                                     0))) >> 0x68, 0),
                                                                                          CONCAT112((char) ((uint) uVar1 >> 0x10), auVar14)) >>
                                                                                                                                             0x60, 0),
                                                                         CONCAT111(uVar24, SUB1211(auVar14, 0))) >>
                                                                                                                 0x58, 0), CONCAT110((char) ((uint) uVar1 >> 8),
                                                                                                                                     SUB1210(auVar14, 0))) >> 0x50, 0),
                                                                 CONCAT19(uVar23, SUB129(auVar14, 0))) >> 0x48, 0),
                                                CONCAT18((char) uVar1, uVar13)) >> 0x40, 0), uVar22),
                       ((uint7) uVar13 >> 0x18) << 0x30);
    auVar17 = CONCAT115(CONCAT101(SUB1610(auVar18 >> 0x30, 0), uVar21), ((uint5) uVar13 >> 0x10) << 0x20);
    auVar16 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar17 >> 0x20, 0), uVar20),
                                          ((uint3) uVar1 >> 8) << 0x10) >> 0x10, 0),
                        (ushort) uVar1 & 0xff | (ushort) bVar19 << 8);
    iVar8 = SUB164(CONCAT214(CONCAT11(uVar26, uVar25),
                             CONCAT212(SUB162(auVar18 >> 0x30, 0), SUB1612(auVar16, 0))) >> 0x60, 0);
    auVar17 = CONCAT610(SUB166(CONCAT412(iVar8, CONCAT210(CONCAT11(uVar24, uVar23), SUB1610(auVar16, 0)))
                                       >> 0x50, 0), CONCAT28(SUB162(auVar17 >> 0x20, 0), SUB168(auVar16, 0)));
    local_28 = CONCAT412((float) iVar8 * 0.003921569,
                         CONCAT48((float) (SUB164(auVar16, 0) & 0xffff |
                                           (uint) CONCAT11(uVar20, bVar19) << 0x10) * 0.003921569,
                                  CONCAT44((float) SUB164(CONCAT106(CONCAT82(SUB168(auVar17 >> 0x40, 0),
                                                                             CONCAT11(uVar22, uVar21)),
                                                                    (SUB166(auVar16, 0) >> 0x10) << 0x20
                                           ) >> 0x20, 0) * 0.003921569,
                                           (float) SUB164(auVar17 >> 0x40, 0) * 0.003921569)));
    uVar9 = FUN_140141f10(DAT_140c63678, local_28);
    puVar3 = (uint * )(*(longlong * )(param_1 + 0x450) + 0x2c8);
    lVar4 = DAT_140c63678;
    if (puVar3 != local_res10) {
        FUN_1401429a0(DAT_140c63678, *puVar3);
        lVar4 = DAT_140c63678;
        *puVar3 = uVar9;
        if ((ulonglong) uVar9 < *(ulonglong * )(lVar4 + 0x30)) {
            iVar8 = *(int *) (*(longlong * )(lVar4 + 0x28) + 0x10 + (ulonglong) uVar9 * 0x20);
            if (iVar8 - 1U < 0xfffffffe) {
                *(int *) (*(longlong * )(lVar4 + 0x28) + 0x10 + (ulonglong) uVar9 * 0x20) = iVar8 + 1;
            }
        }
    }
    FUN_1401429a0(lVar4, (ulonglong) uVar9);
    return;
}


void FUN_140126d30(longlong param_1) {
    undefined4 uVar1;
    uint uVar2;
    uint *puVar3;
    longlong lVar4;
    undefined *puVar5;
    uint uVar6;
    undefined *puVar7;
    uint *puVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    uint uVar12;
    longlong lVar13;
    int iVar14;
    double extraout_XMM0_Qa;
    undefined8 uVar15;
    undefined auVar17[15];
    undefined auVar18[16];
    undefined in_XMM6_Ba;
    byte bVar21;
    undefined in_XMM6_Bb;
    undefined uVar22;
    undefined in_XMM6_Bc;
    undefined uVar23;
    undefined in_XMM6_Bd;
    undefined uVar24;
    undefined in_XMM6_Be;
    undefined uVar25;
    undefined in_XMM6_Bf;
    undefined uVar26;
    undefined in_XMM6_Bg;
    undefined uVar27;
    undefined in_XMM6_Bh;
    undefined uVar28;
    uint local_res8[2];
    uint local_res10[2];
    undefined local_38[16];
    undefined auVar16[12];
    undefined auVar19[16];
    undefined auVar20[16];

    iVar9 = 0;
    local_res8[0] = 0;
    puVar3 = (uint * )(**(code * *)(**(longlong * *)(param_1 + 0x428) + 0x48))
            (*(longlong * *)(param_1 + 0x428), 0);
    iVar14 = 0;
    do {
        uVar12 = iVar14 * -0x100 + 0xff00;
        puVar8 = puVar3;
        iVar10 = 0;
        do {
            iVar11 = iVar10 + 2;
            *puVar8 = 0xffU - *(int *) (param_1 + 0x418) | iVar10 * 0x10000 | uVar12 | 0xff000000;
            puVar8[1] = iVar10 * 0x10000 + 0x10000U | 0xffU - *(int *) (param_1 + 0x418) | uVar12 |
                        0xff000000;
            puVar8 = puVar8 + 2;
            iVar10 = iVar11;
        } while (iVar11 < 0x100);
        iVar14 = iVar14 + 1;
        puVar3 = (uint * )((ulonglong) local_res8[0] + (longlong) puVar3);
    } while (iVar14 < 0x100);
    (**(code * *)(**(longlong * *)(param_1 + 0x428) + 0x50))(*(longlong * *)(param_1 + 0x428), 0);
    lVar4 = (**(code * *)(**(longlong * *)(param_1 + 0x430) + 0x48))
            (*(longlong * *)(param_1 + 0x430), 0, local_res8, 2);
    do {
        lVar13 = 4;
        uVar12 = 0xff - iVar9;
        puVar3 = (uint * )(lVar4 + 8);
        do {
            puVar3[-2] = *(int *) (param_1 + 0x420) * -0x100 + 0xff00U | *(int *) (param_1 + 0x41c) << 0x10
                         | uVar12 | 0xff000000;
            puVar3[-1] = *(int *) (param_1 + 0x420) * -0x100 + 0xff00U | *(int *) (param_1 + 0x41c) << 0x10
                         | uVar12 | 0xff000000;
            *puVar3 = *(int *) (param_1 + 0x420) * -0x100 + 0xff00U | *(int *) (param_1 + 0x41c) << 0x10 |
                      uVar12 | 0xff000000;
            puVar3[1] = *(int *) (param_1 + 0x420) * -0x100 + 0xff00U | *(int *) (param_1 + 0x41c) << 0x10 |
                        uVar12 | 0xff000000;
            lVar13 = lVar13 + -1;
            puVar3 = puVar3 + 4;
        } while (lVar13 != 0);
        iVar9 = iVar9 + 1;
        lVar4 = lVar4 + (ulonglong) local_res8[0];
    } while (iVar9 < 0x100);
    (**(code * *)(**(longlong * *)(param_1 + 0x430) + 0x50))(*(longlong * *)(param_1 + 0x430), 0);
    puVar5 = (undefined * )
            (**(code * *)(**(longlong * *)(*(longlong * )(param_1 + 0x508) + 0x410) + 0x70))();
    puVar7 = &DAT_1409dd974;
    if (puVar5 != (undefined *) 0x0) {
        puVar7 = puVar5;
    }
    FUN_1407dfd50(puVar7, 0, DAT_140c7aac8);
    uVar12 = CONCAT13(in_XMM6_Bd, CONCAT12(in_XMM6_Bc, CONCAT11(in_XMM6_Bb, in_XMM6_Ba))) ^
             CONCAT13(in_XMM6_Bd, CONCAT12(in_XMM6_Bc, CONCAT11(in_XMM6_Bb, in_XMM6_Ba)));
    bVar21 = (byte) uVar12;
    uVar22 = (undefined)(uVar12 >> 8);
    uVar23 = (undefined)(uVar12 >> 0x10);
    uVar24 = (undefined)(uVar12 >> 0x18);
    uVar2 = CONCAT13(in_XMM6_Bh, CONCAT12(in_XMM6_Bg, CONCAT11(in_XMM6_Bf, in_XMM6_Be))) ^
            CONCAT13(in_XMM6_Bh, CONCAT12(in_XMM6_Bg, CONCAT11(in_XMM6_Bf, in_XMM6_Be)));
    uVar25 = (undefined) uVar2;
    uVar26 = (undefined)(uVar2 >> 8);
    uVar27 = (undefined)(uVar2 >> 0x10);
    uVar28 = (undefined)(uVar2 >> 0x18);
    uVar6 = (((uint)(longlong)
    extraout_XMM0_Qa & 0xff) << 8 | *(uint * )(param_1 + 0x41c)) << 0x10 |
                                                                    *(int *) (param_1 + 0x420) * -0x100 + 0xff00U |
                                                                    0xffU - *(int *) (param_1 + 0x418);
    *(uint * )(param_1 + 0x410) = uVar6;
    auVar17 = SUB1615(CONCAT412(uVar6, CONCAT48(uVar6, CONCAT44(uVar6, uVar6))), 0) |
              SUB1615((undefined[16]) 0xff000000, 0) | SUB1615((undefined[16]) 0xff00000000000000, 0)
              | SUB1615((undefined[16]) 0xff000000, 0) |
              SUB1615((undefined[16]) 0xff00000000000000, 0);
    auVar20 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                                          SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                                           (uVar28, CONCAT114(SUB151(auVar17 >> 0x38, 0),
                                                                                                                                                              SUB1514(auVar17, 0))) >> 0x70, 0),
                                                                                                                            CONCAT113(uVar27, SUB1513(auVar17, 0))) >> 0x68, 0),
                                                                                                           CONCAT112(SUB151(auVar17 >> 0x30, 0),
                                                                                                                     SUB1512(auVar17, 0))) >> 0x60, 0),
                                                                                          CONCAT111(uVar26, SUB1511(auVar17, 0))) >> 0x58, 0),
                                                                                  CONCAT110(SUB151(auVar17 >> 0x28, 0),
                                                                                            SUB1510(auVar17, 0)))
                                                                                >> 0x50, 0),
                                                                 CONCAT19(uVar25, SUB159(auVar17, 0))) >> 0x48, 0),
                                                CONCAT18(SUB151(auVar17 >> 0x20, 0), SUB158(auVar17, 0)))
                                               >> 0x40, 0), uVar24), (SUB157(auVar17, 0) >> 0x18) << 0x30);
    auVar19 = CONCAT115(CONCAT101(SUB1610(auVar20 >> 0x30, 0), uVar23),
                        (SUB155(auVar17, 0) >> 0x10) << 0x20);
    auVar18 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar19 >> 0x20, 0), uVar22),
                                          (SUB153(auVar17, 0) >> 8) << 0x10) >> 0x10, 0),
                        SUB152(auVar17, 0) & 0xff | (ushort) bVar21 << 8);
    iVar9 = SUB164(CONCAT214((short) (uVar2 >> 0x10),
                             CONCAT212(SUB162(auVar20 >> 0x30, 0), SUB1612(auVar18, 0))) >> 0x60, 0);
    auVar19 = CONCAT610(SUB166(CONCAT412(iVar9, CONCAT210((short) uVar2, SUB1610(auVar18, 0))) >> 0x50, 0),
                        CONCAT28(SUB162(auVar19 >> 0x20, 0), SUB168(auVar18, 0)));
    local_38 = CONCAT412((float) iVar9 * 0.003921569,
                         CONCAT48((float) (SUB164(auVar18, 0) & 0xffff | uVar12 << 0x10) * 0.003921569,
                                  CONCAT44((float) SUB164(CONCAT106(CONCAT82(SUB168(auVar19 >> 0x40, 0),
                                                                             (short) (uVar12 >> 0x10)),
                                                                    (SUB166(auVar18, 0) >> 0x10) << 0x20
                                           ) >> 0x20, 0) * 0.003921569,
                                           (float) SUB164(auVar19 >> 0x40, 0) * 0.003921569)));
    uVar12 = FUN_140141f10(DAT_140c63678, local_38);
    puVar3 = (uint * )(*(longlong * )(param_1 + 0x440) + 0x2c8);
    lVar4 = DAT_140c63678;
    if (puVar3 != local_res10) {
        FUN_1401429a0(DAT_140c63678, *puVar3);
        lVar4 = DAT_140c63678;
        *puVar3 = uVar12;
        if ((ulonglong) uVar12 < *(ulonglong * )(lVar4 + 0x30)) {
            iVar9 = *(int *) ((ulonglong) uVar12 * 0x20 + 0x10 + *(longlong * )(lVar4 + 0x28));
            if (iVar9 - 1U < 0xfffffffe) {
                *(int *) ((ulonglong) uVar12 * 0x20 + 0x10 + *(longlong * )(lVar4 + 0x28)) = iVar9 + 1;
            }
        }
    }
    FUN_1401429a0(lVar4, (ulonglong) uVar12);
    uVar1 = *(undefined4 * )(param_1 + 0x410);
    uVar15 = CONCAT44(uVar1, uVar1);
    auVar16 = CONCAT48(uVar1, uVar15);
    auVar20 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                         SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                          (uVar28, CONCAT114((char) ((uint) uVar1 >> 0x18),
                                                                                                                                             SUB1614(CONCAT412(uVar1, auVar16), 0)))
                                                                                                                          >> 0x70, 0),
                                                                                                           CONCAT113(uVar27, SUB1613(CONCAT412(uVar1, auVar16),
                                                                                                                                     0))) >> 0x68, 0),
                                                                                          CONCAT112((char) ((uint) uVar1 >> 0x10), auVar16)) >>
                                                                                                                                             0x60, 0),
                                                                         CONCAT111(uVar26, SUB1211(auVar16, 0))) >>
                                                                                                                 0x58, 0), CONCAT110((char) ((uint) uVar1 >> 8),
                                                                                                                                     SUB1210(auVar16, 0))) >> 0x50, 0),
                                                                 CONCAT19(uVar25, SUB129(auVar16, 0))) >> 0x48, 0),
                                                CONCAT18((char) uVar1, uVar15)) >> 0x40, 0), uVar24),
                       ((uint7) uVar15 >> 0x18) << 0x30);
    auVar19 = CONCAT115(CONCAT101(SUB1610(auVar20 >> 0x30, 0), uVar23), ((uint5) uVar15 >> 0x10) << 0x20);
    auVar18 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar19 >> 0x20, 0), uVar22),
                                          ((uint3) uVar1 >> 8) << 0x10) >> 0x10, 0),
                        (ushort) uVar1 & 0xff | (ushort) bVar21 << 8);
    iVar9 = SUB164(CONCAT214(CONCAT11(uVar28, uVar27),
                             CONCAT212(SUB162(auVar20 >> 0x30, 0), SUB1612(auVar18, 0))) >> 0x60, 0);
    auVar19 = CONCAT610(SUB166(CONCAT412(iVar9, CONCAT210(CONCAT11(uVar26, uVar25), SUB1610(auVar18, 0)))
                                       >> 0x50, 0), CONCAT28(SUB162(auVar19 >> 0x20, 0), SUB168(auVar18, 0)));
    local_38 = CONCAT412((float) iVar9 * 0.003921569,
                         CONCAT48((float) (SUB164(auVar18, 0) & 0xffff |
                                           (uint) CONCAT11(uVar22, bVar21) << 0x10) * 0.003921569,
                                  CONCAT44((float) SUB164(CONCAT106(CONCAT82(SUB168(auVar19 >> 0x40, 0),
                                                                             CONCAT11(uVar24, uVar23)),
                                                                    (SUB166(auVar18, 0) >> 0x10) << 0x20
                                           ) >> 0x20, 0) * 0.003921569,
                                           (float) SUB164(auVar19 >> 0x40, 0) * 0.003921569)));
    uVar12 = FUN_140141f10(DAT_140c63678, local_38);
    puVar3 = (uint * )(*(longlong * )(param_1 + 0x450) + 0x2c8);
    lVar4 = DAT_140c63678;
    if (puVar3 != local_res10) {
        FUN_1401429a0(DAT_140c63678, *puVar3);
        lVar4 = DAT_140c63678;
        *puVar3 = uVar12;
        if ((ulonglong) uVar12 < *(ulonglong * )(lVar4 + 0x30)) {
            iVar9 = *(int *) (*(longlong * )(lVar4 + 0x28) + 0x10 + (ulonglong) uVar12 * 0x20);
            if (iVar9 - 1U < 0xfffffffe) {
                *(int *) (*(longlong * )(lVar4 + 0x28) + 0x10 + (ulonglong) uVar12 * 0x20) = iVar9 + 1;
            }
        }
    }
    FUN_1401429a0(lVar4, (ulonglong) uVar12);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1401270c0(longlong param_1) {
    uint uVar1;
    undefined4 uVar2;
    undefined4 *puVar3;
    undefined *puVar4;
    undefined *puVar5;
    uint *puVar6;
    int iVar7;
    undefined4 *puVar8;
    longlong lVar9;
    uint uVar10;
    ulonglong uVar11;
    double extraout_XMM0_Qa;
    undefined8 uVar12;
    undefined auVar14[15];
    undefined auVar15[16];
    undefined auVar18[16];
    undefined uVar21;
    byte bVar22;
    undefined uVar23;
    undefined uVar24;
    undefined uVar25;
    undefined uVar26;
    undefined uVar27;
    undefined uVar28;
    undefined uVar29;
    undefined auVar30[16];
    uint local_res8[2];
    uint local_res10[2];
    float local_48;
    float fStack68;
    float fStack64;
    float fStack60;
    undefined auVar13[12];
    undefined auVar16[16];
    undefined auVar17[16];
    undefined auVar19[16];
    undefined auVar20[16];

    local_res8[0] = 0;
    puVar3 = (undefined4 * )
            (**(code * *)(**(longlong * *)(param_1 + 0x428) + 0x48))
            (*(longlong * *)(param_1 + 0x428), 0, local_res8, 2);
    uVar11 = 0xff;
    uVar21 = 0x81;
    uVar23 = 0x80;
    uVar24 = 0x80;
    uVar25 = 0x3b;
    uVar26 = 0;
    uVar27 = 0;
    uVar28 = 0;
    uVar29 = 0;
    do {
        iVar7 = 0;
        puVar8 = puVar3;
        do {
            uVar2 = FUN_1401280f0();
            iVar7 = iVar7 + 1;
            *puVar8 = uVar2;
            puVar8 = puVar8 + 1;
        } while (iVar7 < 0x100);
        uVar10 = (int) uVar11 - 1;
        uVar11 = (ulonglong) uVar10;
        puVar3 = (undefined4 * )((ulonglong) local_res8[0] + (longlong) puVar3);
    } while (uVar10 < 0x80000000);
    (**(code * *)(**(longlong * *)(param_1 + 0x428) + 0x50))(*(longlong * *)(param_1 + 0x428), 0);
    puVar3 = (undefined4 * )
            (**(code * *)(**(longlong * *)(param_1 + 0x430) + 0x48))
            (*(longlong * *)(param_1 + 0x430), 0, local_res8, 2);
    uVar11 = 0xff;
    do {
        lVar9 = 0x10;
        puVar8 = puVar3;
        do {
            uVar2 = FUN_1401280f0();
            *puVar8 = uVar2;
            lVar9 = lVar9 + -1;
            puVar8 = puVar8 + 1;
        } while (lVar9 != 0);
        uVar10 = (int) uVar11 - 1;
        uVar11 = (ulonglong) uVar10;
        puVar3 = (undefined4 * )((ulonglong) local_res8[0] + (longlong) puVar3);
    } while (uVar10 < 0x80000000);
    (**(code * *)(**(longlong * *)(param_1 + 0x430) + 0x50))(*(longlong * *)(param_1 + 0x430), 0);
    uVar2 = FUN_1401280f0();
    *(undefined4 * )(param_1 + 0x410) = uVar2;
    *(undefined * )(param_1 + 0x413) = 0;
    puVar4 = (undefined * )
            (**(code * *)(**(longlong * *)(*(longlong * )(param_1 + 0x508) + 0x410) + 0x70))();
    puVar5 = &DAT_1409dd974;
    if (puVar4 != (undefined *) 0x0) {
        puVar5 = puVar4;
    }
    FUN_1407dfd50(puVar5, 0, DAT_140c7aac8);
    auVar30 = _DAT_140b7ab70;
    local_48 = SUB164(_DAT_140b7ab70, 0);
    auVar18 = _DAT_140b7ab70 >> 0x20;
    auVar19 = _DAT_140b7ab70 >> 0x40;
    auVar20 = _DAT_140b7ab70 >> 0x60;
    uVar10 = CONCAT13(uVar25, CONCAT12(uVar24, CONCAT11(uVar23, uVar21))) ^
             CONCAT13(uVar25, CONCAT12(uVar24, CONCAT11(uVar23, uVar21)));
    bVar22 = (byte) uVar10;
    uVar21 = (undefined)(uVar10 >> 8);
    uVar23 = (undefined)(uVar10 >> 0x10);
    uVar24 = (undefined)(uVar10 >> 0x18);
    uVar1 = CONCAT13(uVar29, CONCAT12(uVar28, CONCAT11(uVar27, uVar26))) ^
            CONCAT13(uVar29, CONCAT12(uVar28, CONCAT11(uVar27, uVar26)));
    uVar25 = (undefined) uVar1;
    uVar26 = (undefined)(uVar1 >> 8);
    uVar27 = (undefined)(uVar1 >> 0x10);
    uVar28 = (undefined)(uVar1 >> 0x18);
    *(uint * )(param_1 + 0x410) = *(uint * )(param_1 + 0x410) | (int) (longlong) extraout_XMM0_Qa << 0x18;
    uVar2 = *(undefined4 * )(param_1 + 0x410);
    auVar14 = SUB1615(CONCAT412(uVar2, CONCAT48(uVar2, CONCAT44(uVar2, uVar2))), 0) |
              SUB1615((undefined[16]) 0xff000000, 0) | SUB1615((undefined[16]) 0xff00000000000000, 0)
              | SUB1615((undefined[16]) 0xff000000, 0) |
              SUB1615((undefined[16]) 0xff00000000000000, 0);
    auVar17 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                                          SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                                           (uVar28, CONCAT114(SUB151(auVar14 >> 0x38, 0),
                                                                                                                                                              SUB1514(auVar14, 0))) >> 0x70, 0),
                                                                                                                            CONCAT113(uVar27, SUB1513(auVar14, 0))) >> 0x68, 0),
                                                                                                           CONCAT112(SUB151(auVar14 >> 0x30, 0),
                                                                                                                     SUB1512(auVar14, 0))) >> 0x60, 0),
                                                                                          CONCAT111(uVar26, SUB1511(auVar14, 0))) >> 0x58, 0),
                                                                                  CONCAT110(SUB151(auVar14 >> 0x28, 0),
                                                                                            SUB1510(auVar14, 0)))
                                                                                >> 0x50, 0),
                                                                 CONCAT19(uVar25, SUB159(auVar14, 0))) >> 0x48, 0),
                                                CONCAT18(SUB151(auVar14 >> 0x20, 0), SUB158(auVar14, 0)))
                                               >> 0x40, 0), uVar24), (SUB157(auVar14, 0) >> 0x18) << 0x30);
    auVar16 = CONCAT115(CONCAT101(SUB1610(auVar17 >> 0x30, 0), uVar23),
                        (SUB155(auVar14, 0) >> 0x10) << 0x20);
    auVar15 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar16 >> 0x20, 0), uVar21),
                                          (SUB153(auVar14, 0) >> 8) << 0x10) >> 0x10, 0),
                        SUB152(auVar14, 0) & 0xff | (ushort) bVar22 << 8);
    iVar7 = SUB164(CONCAT214((short) (uVar1 >> 0x10),
                             CONCAT212(SUB162(auVar17 >> 0x30, 0), SUB1612(auVar15, 0))) >> 0x60, 0);
    auVar16 = CONCAT610(SUB166(CONCAT412(iVar7, CONCAT210((short) uVar1, SUB1610(auVar15, 0))) >> 0x50, 0),
                        CONCAT28(SUB162(auVar16 >> 0x20, 0), SUB168(auVar15, 0)));
    local_48 = (float) SUB164(auVar16 >> 0x40, 0) * local_48;
    fStack68 = (float) SUB164(CONCAT106(CONCAT82(SUB168(auVar16 >> 0x40, 0), (short) (uVar10 >> 0x10)),
                                        (SUB166(auVar15, 0) >> 0x10) << 0x20) >> 0x20, 0) *
               SUB164(auVar18, 0);
    fStack64 = (float) (SUB164(auVar15, 0) & 0xffff | uVar10 << 0x10) * SUB164(auVar19, 0);
    fStack60 = (float) iVar7 * SUB164(auVar20, 0);
    uVar10 = FUN_140141f10(DAT_140c63678, &local_48);
    puVar6 = (uint * )(*(longlong * )(param_1 + 0x440) + 0x2c8);
    lVar9 = DAT_140c63678;
    if (puVar6 != local_res10) {
        FUN_1401429a0(DAT_140c63678, *puVar6);
        lVar9 = DAT_140c63678;
        *puVar6 = uVar10;
        if ((ulonglong) uVar10 < *(ulonglong * )(lVar9 + 0x30)) {
            iVar7 = *(int *) ((ulonglong) uVar10 * 0x20 + 0x10 + *(longlong * )(lVar9 + 0x28));
            if (iVar7 - 1U < 0xfffffffe) {
                *(int *) ((ulonglong) uVar10 * 0x20 + 0x10 + *(longlong * )(lVar9 + 0x28)) = iVar7 + 1;
            }
        }
    }
    FUN_1401429a0(lVar9, (ulonglong) uVar10);
    uVar2 = *(undefined4 * )(param_1 + 0x410);
    uVar12 = CONCAT44(uVar2, uVar2);
    auVar13 = CONCAT48(uVar2, uVar12);
    auVar20 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                         SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                          (uVar28, CONCAT114((char) ((uint) uVar2 >> 0x18),
                                                                                                                                             SUB1614(CONCAT412(uVar2, auVar13), 0)))
                                                                                                                          >> 0x70, 0),
                                                                                                           CONCAT113(uVar27, SUB1613(CONCAT412(uVar2, auVar13),
                                                                                                                                     0))) >> 0x68, 0),
                                                                                          CONCAT112((char) ((uint) uVar2 >> 0x10), auVar13)) >>
                                                                                                                                             0x60, 0),
                                                                         CONCAT111(uVar26, SUB1211(auVar13, 0))) >>
                                                                                                                 0x58, 0), CONCAT110((char) ((uint) uVar2 >> 8),
                                                                                                                                     SUB1210(auVar13, 0))) >> 0x50, 0),
                                                                 CONCAT19(uVar25, SUB129(auVar13, 0))) >> 0x48, 0),
                                                CONCAT18((char) uVar2, uVar12)) >> 0x40, 0), uVar24),
                       ((uint7) uVar12 >> 0x18) << 0x30);
    auVar19 = CONCAT115(CONCAT101(SUB1610(auVar20 >> 0x30, 0), uVar23), ((uint5) uVar12 >> 0x10) << 0x20);
    auVar18 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar19 >> 0x20, 0), uVar21),
                                          ((uint3) uVar2 >> 8) << 0x10) >> 0x10, 0),
                        (ushort) uVar2 & 0xff | (ushort) bVar22 << 8);
    iVar7 = SUB164(CONCAT214(CONCAT11(uVar28, uVar27),
                             CONCAT212(SUB162(auVar20 >> 0x30, 0), SUB1612(auVar18, 0))) >> 0x60, 0);
    auVar19 = CONCAT610(SUB166(CONCAT412(iVar7, CONCAT210(CONCAT11(uVar26, uVar25), SUB1610(auVar18, 0)))
                                       >> 0x50, 0), CONCAT28(SUB162(auVar19 >> 0x20, 0), SUB168(auVar18, 0)));
    local_48 = (float) SUB164(auVar19 >> 0x40, 0) * SUB164(auVar30, 0);
    fStack68 = (float) SUB164(CONCAT106(CONCAT82(SUB168(auVar19 >> 0x40, 0), CONCAT11(uVar24, uVar23)),
                                        (SUB166(auVar18, 0) >> 0x10) << 0x20) >> 0x20, 0) *
               SUB164(auVar30 >> 0x20, 0);
    fStack64 = (float) (SUB164(auVar18, 0) & 0xffff | (uint) CONCAT11(uVar21, bVar22) << 0x10) *
               SUB164(auVar30 >> 0x40, 0);
    fStack60 = (float) iVar7 * SUB164(auVar30 >> 0x60, 0);
    uVar10 = FUN_140141f10(DAT_140c63678, &local_48);
    puVar6 = (uint * )(*(longlong * )(param_1 + 0x450) + 0x2c8);
    lVar9 = DAT_140c63678;
    if (puVar6 != local_res10) {
        FUN_1401429a0(DAT_140c63678, *puVar6);
        lVar9 = DAT_140c63678;
        *puVar6 = uVar10;
        if ((ulonglong) uVar10 < *(ulonglong * )(lVar9 + 0x30)) {
            iVar7 = *(int *) ((ulonglong) uVar10 * 0x20 + 0x10 + *(longlong * )(lVar9 + 0x28));
            if (iVar7 - 1U < 0xfffffffe) {
                *(int *) ((ulonglong) uVar10 * 0x20 + 0x10 + *(longlong * )(lVar9 + 0x28)) = iVar7 + 1;
            }
        }
    }
    FUN_1401429a0(lVar9, (ulonglong) uVar10);
    return;
}


void FUN_140127440(longlong param_1) {
    uint uVar1;
    undefined4 uVar2;
    undefined4 *puVar3;
    undefined *puVar4;
    undefined *puVar5;
    uint *puVar6;
    int iVar7;
    undefined4 *puVar8;
    longlong lVar9;
    uint uVar10;
    ulonglong uVar11;
    double extraout_XMM0_Qa;
    undefined8 uVar12;
    undefined auVar14[15];
    undefined auVar15[16];
    undefined uVar18;
    byte bVar19;
    undefined uVar20;
    undefined uVar21;
    undefined uVar22;
    undefined uVar23;
    undefined uVar24;
    undefined uVar25;
    undefined uVar26;
    float fVar27;
    float fVar28;
    float fVar29;
    float fVar30;
    uint local_res8[2];
    uint local_res10[2];
    float local_48;
    float fStack68;
    float fStack64;
    float fStack60;
    undefined auVar13[12];
    undefined auVar16[16];
    undefined auVar17[16];

    local_res8[0] = 0;
    puVar3 = (undefined4 * )
            (**(code * *)(**(longlong * *)(param_1 + 0x428) + 0x48))
            (*(longlong * *)(param_1 + 0x428), 0, local_res8, 2);
    uVar11 = 0xff;
    uVar18 = 0x81;
    uVar20 = 0x80;
    uVar21 = 0x80;
    uVar22 = 0x3b;
    uVar23 = 0;
    uVar24 = 0;
    uVar25 = 0;
    uVar26 = 0;
    do {
        iVar7 = 0;
        puVar8 = puVar3;
        do {
            uVar2 = FUN_1401280f0();
            iVar7 = iVar7 + 1;
            *puVar8 = uVar2;
            puVar8 = puVar8 + 1;
        } while (iVar7 < 0x100);
        uVar10 = (int) uVar11 - 1;
        uVar11 = (ulonglong) uVar10;
        puVar3 = (undefined4 * )((ulonglong) local_res8[0] + (longlong) puVar3);
    } while (uVar10 < 0x80000000);
    (**(code * *)(**(longlong * *)(param_1 + 0x428) + 0x50))(*(longlong * *)(param_1 + 0x428), 0);
    puVar3 = (undefined4 * )
            (**(code * *)(**(longlong * *)(param_1 + 0x430) + 0x48))
            (*(longlong * *)(param_1 + 0x430), 0, local_res8, 2);
    uVar11 = 0xff;
    do {
        lVar9 = 0x10;
        puVar8 = puVar3;
        do {
            uVar2 = FUN_1401280f0();
            *puVar8 = uVar2;
            lVar9 = lVar9 + -1;
            puVar8 = puVar8 + 1;
        } while (lVar9 != 0);
        uVar10 = (int) uVar11 - 1;
        uVar11 = (ulonglong) uVar10;
        puVar3 = (undefined4 * )((ulonglong) local_res8[0] + (longlong) puVar3);
    } while (uVar10 < 0x80000000);
    (**(code * *)(**(longlong * *)(param_1 + 0x430) + 0x50))(*(longlong * *)(param_1 + 0x430), 0);
    uVar2 = FUN_1401280f0();
    *(undefined4 * )(param_1 + 0x410) = uVar2;
    *(undefined * )(param_1 + 0x413) = 0;
    puVar4 = (undefined * )
            (**(code * *)(**(longlong * *)(*(longlong * )(param_1 + 0x508) + 0x410) + 0x70))();
    puVar5 = &DAT_1409dd974;
    if (puVar4 != (undefined *) 0x0) {
        puVar5 = puVar4;
    }
    FUN_1407dfd50(puVar5, 0, DAT_140c7aac8);
    fVar27 = 0.003921569;
    fVar28 = 0.003921569;
    fVar29 = 0.003921569;
    fVar30 = 0.003921569;
    uVar10 = CONCAT13(uVar22, CONCAT12(uVar21, CONCAT11(uVar20, uVar18))) ^
             CONCAT13(uVar22, CONCAT12(uVar21, CONCAT11(uVar20, uVar18)));
    bVar19 = (byte) uVar10;
    uVar18 = (undefined)(uVar10 >> 8);
    uVar20 = (undefined)(uVar10 >> 0x10);
    uVar21 = (undefined)(uVar10 >> 0x18);
    uVar1 = CONCAT13(uVar26, CONCAT12(uVar25, CONCAT11(uVar24, uVar23))) ^
            CONCAT13(uVar26, CONCAT12(uVar25, CONCAT11(uVar24, uVar23)));
    uVar22 = (undefined) uVar1;
    uVar23 = (undefined)(uVar1 >> 8);
    uVar24 = (undefined)(uVar1 >> 0x10);
    uVar25 = (undefined)(uVar1 >> 0x18);
    *(uint * )(param_1 + 0x410) = *(uint * )(param_1 + 0x410) | (int) (longlong) extraout_XMM0_Qa << 0x18;
    uVar2 = *(undefined4 * )(param_1 + 0x410);
    auVar14 = SUB1615(CONCAT412(uVar2, CONCAT48(uVar2, CONCAT44(uVar2, uVar2))), 0) |
              SUB1615((undefined[16]) 0xff000000, 0) | SUB1615((undefined[16]) 0xff00000000000000, 0)
              | SUB1615((undefined[16]) 0xff000000, 0) |
              SUB1615((undefined[16]) 0xff00000000000000, 0);
    auVar17 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                                          SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                                           (uVar25, CONCAT114(SUB151(auVar14 >> 0x38, 0),
                                                                                                                                                              SUB1514(auVar14, 0))) >> 0x70, 0),
                                                                                                                            CONCAT113(uVar24, SUB1513(auVar14, 0))) >> 0x68, 0),
                                                                                                           CONCAT112(SUB151(auVar14 >> 0x30, 0),
                                                                                                                     SUB1512(auVar14, 0))) >> 0x60, 0),
                                                                                          CONCAT111(uVar23, SUB1511(auVar14, 0))) >> 0x58, 0),
                                                                                  CONCAT110(SUB151(auVar14 >> 0x28, 0),
                                                                                            SUB1510(auVar14, 0)))
                                                                                >> 0x50, 0),
                                                                 CONCAT19(uVar22, SUB159(auVar14, 0))) >> 0x48, 0),
                                                CONCAT18(SUB151(auVar14 >> 0x20, 0), SUB158(auVar14, 0)))
                                               >> 0x40, 0), uVar21), (SUB157(auVar14, 0) >> 0x18) << 0x30);
    auVar16 = CONCAT115(CONCAT101(SUB1610(auVar17 >> 0x30, 0), uVar20),
                        (SUB155(auVar14, 0) >> 0x10) << 0x20);
    auVar15 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar16 >> 0x20, 0), uVar18),
                                          (SUB153(auVar14, 0) >> 8) << 0x10) >> 0x10, 0),
                        SUB152(auVar14, 0) & 0xff | (ushort) bVar19 << 8);
    iVar7 = SUB164(CONCAT214((short) (uVar1 >> 0x10),
                             CONCAT212(SUB162(auVar17 >> 0x30, 0), SUB1612(auVar15, 0))) >> 0x60, 0);
    auVar16 = CONCAT610(SUB166(CONCAT412(iVar7, CONCAT210((short) uVar1, SUB1610(auVar15, 0))) >> 0x50, 0),
                        CONCAT28(SUB162(auVar16 >> 0x20, 0), SUB168(auVar15, 0)));
    local_48 = (float) SUB164(auVar16 >> 0x40, 0) * 0.003921569;
    fStack68 = (float) SUB164(CONCAT106(CONCAT82(SUB168(auVar16 >> 0x40, 0), (short) (uVar10 >> 0x10)),
                                        (SUB166(auVar15, 0) >> 0x10) << 0x20) >> 0x20, 0) * 0.003921569;
    fStack64 = (float) (SUB164(auVar15, 0) & 0xffff | uVar10 << 0x10) * 0.003921569;
    fStack60 = (float) iVar7 * 0.003921569;
    uVar10 = FUN_140141f10(DAT_140c63678, &local_48);
    puVar6 = (uint * )(*(longlong * )(param_1 + 0x440) + 0x2c8);
    lVar9 = DAT_140c63678;
    if (puVar6 != local_res10) {
        FUN_1401429a0(DAT_140c63678, *puVar6);
        lVar9 = DAT_140c63678;
        *puVar6 = uVar10;
        if ((ulonglong) uVar10 < *(ulonglong * )(lVar9 + 0x30)) {
            iVar7 = *(int *) ((ulonglong) uVar10 * 0x20 + 0x10 + *(longlong * )(lVar9 + 0x28));
            if (iVar7 - 1U < 0xfffffffe) {
                *(int *) ((ulonglong) uVar10 * 0x20 + 0x10 + *(longlong * )(lVar9 + 0x28)) = iVar7 + 1;
            }
        }
    }
    FUN_1401429a0(lVar9, (ulonglong) uVar10);
    uVar2 = *(undefined4 * )(param_1 + 0x410);
    uVar12 = CONCAT44(uVar2, uVar2);
    auVar13 = CONCAT48(uVar2, uVar12);
    auVar17 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                         SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                          (uVar25, CONCAT114((char) ((uint) uVar2 >> 0x18),
                                                                                                                                             SUB1614(CONCAT412(uVar2, auVar13), 0)))
                                                                                                                          >> 0x70, 0),
                                                                                                           CONCAT113(uVar24, SUB1613(CONCAT412(uVar2, auVar13),
                                                                                                                                     0))) >> 0x68, 0),
                                                                                          CONCAT112((char) ((uint) uVar2 >> 0x10), auVar13)) >>
                                                                                                                                             0x60, 0),
                                                                         CONCAT111(uVar23, SUB1211(auVar13, 0))) >>
                                                                                                                 0x58, 0), CONCAT110((char) ((uint) uVar2 >> 8),
                                                                                                                                     SUB1210(auVar13, 0))) >> 0x50, 0),
                                                                 CONCAT19(uVar22, SUB129(auVar13, 0))) >> 0x48, 0),
                                                CONCAT18((char) uVar2, uVar12)) >> 0x40, 0), uVar21),
                       ((uint7) uVar12 >> 0x18) << 0x30);
    auVar16 = CONCAT115(CONCAT101(SUB1610(auVar17 >> 0x30, 0), uVar20), ((uint5) uVar12 >> 0x10) << 0x20);
    auVar15 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar16 >> 0x20, 0), uVar18),
                                          ((uint3) uVar2 >> 8) << 0x10) >> 0x10, 0),
                        (ushort) uVar2 & 0xff | (ushort) bVar19 << 8);
    iVar7 = SUB164(CONCAT214(CONCAT11(uVar25, uVar24),
                             CONCAT212(SUB162(auVar17 >> 0x30, 0), SUB1612(auVar15, 0))) >> 0x60, 0);
    auVar16 = CONCAT610(SUB166(CONCAT412(iVar7, CONCAT210(CONCAT11(uVar23, uVar22), SUB1610(auVar15, 0)))
                                       >> 0x50, 0), CONCAT28(SUB162(auVar16 >> 0x20, 0), SUB168(auVar15, 0)));
    local_48 = (float) SUB164(auVar16 >> 0x40, 0) * fVar27;
    fStack68 = (float) SUB164(CONCAT106(CONCAT82(SUB168(auVar16 >> 0x40, 0), CONCAT11(uVar21, uVar20)),
                                        (SUB166(auVar15, 0) >> 0x10) << 0x20) >> 0x20, 0) * fVar28;
    fStack64 = (float) (SUB164(auVar15, 0) & 0xffff | (uint) CONCAT11(uVar18, bVar19) << 0x10) * fVar29;
    fStack60 = (float) iVar7 * fVar30;
    uVar10 = FUN_140141f10(DAT_140c63678, &local_48);
    puVar6 = (uint * )(*(longlong * )(param_1 + 0x450) + 0x2c8);
    lVar9 = DAT_140c63678;
    if (puVar6 != local_res10) {
        FUN_1401429a0(DAT_140c63678, *puVar6);
        lVar9 = DAT_140c63678;
        *puVar6 = uVar10;
        if ((ulonglong) uVar10 < *(ulonglong * )(lVar9 + 0x30)) {
            iVar7 = *(int *) ((ulonglong) uVar10 * 0x20 + 0x10 + *(longlong * )(lVar9 + 0x28));
            if (iVar7 - 1U < 0xfffffffe) {
                *(int *) ((ulonglong) uVar10 * 0x20 + 0x10 + *(longlong * )(lVar9 + 0x28)) = iVar7 + 1;
            }
        }
    }
    FUN_1401429a0(lVar9, (ulonglong) uVar10);
    return;
}


void FUN_1401277b0(longlong param_1) {
    uint uVar1;
    undefined4 uVar2;
    undefined4 *puVar3;
    undefined *puVar4;
    undefined *puVar5;
    uint *puVar6;
    int iVar7;
    undefined4 *puVar8;
    longlong lVar9;
    uint uVar10;
    ulonglong uVar11;
    double extraout_XMM0_Qa;
    undefined8 uVar12;
    undefined auVar14[15];
    undefined auVar15[16];
    undefined uVar18;
    byte bVar19;
    undefined uVar20;
    undefined uVar21;
    undefined uVar22;
    undefined uVar23;
    undefined uVar24;
    undefined uVar25;
    undefined uVar26;
    float fVar27;
    float fVar28;
    float fVar29;
    float fVar30;
    uint local_res8[2];
    uint local_res10[2];
    float local_48;
    float fStack68;
    float fStack64;
    float fStack60;
    undefined auVar13[12];
    undefined auVar16[16];
    undefined auVar17[16];

    local_res8[0] = 0;
    puVar3 = (undefined4 * )
            (**(code * *)(**(longlong * *)(param_1 + 0x428) + 0x48))
            (*(longlong * *)(param_1 + 0x428), 0, local_res8, 2);
    uVar11 = 0xff;
    uVar18 = 0x81;
    uVar20 = 0x80;
    uVar21 = 0x80;
    uVar22 = 0x3b;
    uVar23 = 0;
    uVar24 = 0;
    uVar25 = 0;
    uVar26 = 0;
    do {
        iVar7 = 0;
        puVar8 = puVar3;
        do {
            uVar2 = FUN_1401280f0();
            iVar7 = iVar7 + 1;
            *puVar8 = uVar2;
            puVar8 = puVar8 + 1;
        } while (iVar7 < 0x100);
        uVar10 = (int) uVar11 - 1;
        uVar11 = (ulonglong) uVar10;
        puVar3 = (undefined4 * )((ulonglong) local_res8[0] + (longlong) puVar3);
    } while (uVar10 < 0x80000000);
    (**(code * *)(**(longlong * *)(param_1 + 0x428) + 0x50))(*(longlong * *)(param_1 + 0x428), 0);
    puVar3 = (undefined4 * )
            (**(code * *)(**(longlong * *)(param_1 + 0x430) + 0x48))
            (*(longlong * *)(param_1 + 0x430), 0, local_res8, 2);
    uVar11 = 0xff;
    do {
        lVar9 = 0x10;
        puVar8 = puVar3;
        do {
            uVar2 = FUN_1401280f0();
            *puVar8 = uVar2;
            lVar9 = lVar9 + -1;
            puVar8 = puVar8 + 1;
        } while (lVar9 != 0);
        uVar10 = (int) uVar11 - 1;
        uVar11 = (ulonglong) uVar10;
        puVar3 = (undefined4 * )((ulonglong) local_res8[0] + (longlong) puVar3);
    } while (uVar10 < 0x80000000);
    (**(code * *)(**(longlong * *)(param_1 + 0x430) + 0x50))(*(longlong * *)(param_1 + 0x430), 0);
    uVar2 = FUN_1401280f0();
    *(undefined4 * )(param_1 + 0x410) = uVar2;
    *(undefined * )(param_1 + 0x413) = 0;
    puVar4 = (undefined * )
            (**(code * *)(**(longlong * *)(*(longlong * )(param_1 + 0x508) + 0x410) + 0x70))();
    puVar5 = &DAT_1409dd974;
    if (puVar4 != (undefined *) 0x0) {
        puVar5 = puVar4;
    }
    FUN_1407dfd50(puVar5, 0, DAT_140c7aac8);
    fVar27 = 0.003921569;
    fVar28 = 0.003921569;
    fVar29 = 0.003921569;
    fVar30 = 0.003921569;
    uVar10 = CONCAT13(uVar22, CONCAT12(uVar21, CONCAT11(uVar20, uVar18))) ^
             CONCAT13(uVar22, CONCAT12(uVar21, CONCAT11(uVar20, uVar18)));
    bVar19 = (byte) uVar10;
    uVar18 = (undefined)(uVar10 >> 8);
    uVar20 = (undefined)(uVar10 >> 0x10);
    uVar21 = (undefined)(uVar10 >> 0x18);
    uVar1 = CONCAT13(uVar26, CONCAT12(uVar25, CONCAT11(uVar24, uVar23))) ^
            CONCAT13(uVar26, CONCAT12(uVar25, CONCAT11(uVar24, uVar23)));
    uVar22 = (undefined) uVar1;
    uVar23 = (undefined)(uVar1 >> 8);
    uVar24 = (undefined)(uVar1 >> 0x10);
    uVar25 = (undefined)(uVar1 >> 0x18);
    *(uint * )(param_1 + 0x410) = *(uint * )(param_1 + 0x410) | (int) (longlong) extraout_XMM0_Qa << 0x18;
    uVar2 = *(undefined4 * )(param_1 + 0x410);
    auVar14 = SUB1615(CONCAT412(uVar2, CONCAT48(uVar2, CONCAT44(uVar2, uVar2))), 0) |
              SUB1615((undefined[16]) 0xff000000, 0) | SUB1615((undefined[16]) 0xff00000000000000, 0)
              | SUB1615((undefined[16]) 0xff000000, 0) |
              SUB1615((undefined[16]) 0xff00000000000000, 0);
    auVar17 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                                          SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                                           (uVar25, CONCAT114(SUB151(auVar14 >> 0x38, 0),
                                                                                                                                                              SUB1514(auVar14, 0))) >> 0x70, 0),
                                                                                                                            CONCAT113(uVar24, SUB1513(auVar14, 0))) >> 0x68, 0),
                                                                                                           CONCAT112(SUB151(auVar14 >> 0x30, 0),
                                                                                                                     SUB1512(auVar14, 0))) >> 0x60, 0),
                                                                                          CONCAT111(uVar23, SUB1511(auVar14, 0))) >> 0x58, 0),
                                                                                  CONCAT110(SUB151(auVar14 >> 0x28, 0),
                                                                                            SUB1510(auVar14, 0)))
                                                                                >> 0x50, 0),
                                                                 CONCAT19(uVar22, SUB159(auVar14, 0))) >> 0x48, 0),
                                                CONCAT18(SUB151(auVar14 >> 0x20, 0), SUB158(auVar14, 0)))
                                               >> 0x40, 0), uVar21), (SUB157(auVar14, 0) >> 0x18) << 0x30);
    auVar16 = CONCAT115(CONCAT101(SUB1610(auVar17 >> 0x30, 0), uVar20),
                        (SUB155(auVar14, 0) >> 0x10) << 0x20);
    auVar15 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar16 >> 0x20, 0), uVar18),
                                          (SUB153(auVar14, 0) >> 8) << 0x10) >> 0x10, 0),
                        SUB152(auVar14, 0) & 0xff | (ushort) bVar19 << 8);
    iVar7 = SUB164(CONCAT214((short) (uVar1 >> 0x10),
                             CONCAT212(SUB162(auVar17 >> 0x30, 0), SUB1612(auVar15, 0))) >> 0x60, 0);
    auVar16 = CONCAT610(SUB166(CONCAT412(iVar7, CONCAT210((short) uVar1, SUB1610(auVar15, 0))) >> 0x50, 0),
                        CONCAT28(SUB162(auVar16 >> 0x20, 0), SUB168(auVar15, 0)));
    local_48 = (float) SUB164(auVar16 >> 0x40, 0) * 0.003921569;
    fStack68 = (float) SUB164(CONCAT106(CONCAT82(SUB168(auVar16 >> 0x40, 0), (short) (uVar10 >> 0x10)),
                                        (SUB166(auVar15, 0) >> 0x10) << 0x20) >> 0x20, 0) * 0.003921569;
    fStack64 = (float) (SUB164(auVar15, 0) & 0xffff | uVar10 << 0x10) * 0.003921569;
    fStack60 = (float) iVar7 * 0.003921569;
    uVar10 = FUN_140141f10(DAT_140c63678, &local_48);
    puVar6 = (uint * )(*(longlong * )(param_1 + 0x440) + 0x2c8);
    lVar9 = DAT_140c63678;
    if (puVar6 != local_res10) {
        FUN_1401429a0(DAT_140c63678, *puVar6);
        lVar9 = DAT_140c63678;
        *puVar6 = uVar10;
        if ((ulonglong) uVar10 < *(ulonglong * )(lVar9 + 0x30)) {
            iVar7 = *(int *) ((ulonglong) uVar10 * 0x20 + 0x10 + *(longlong * )(lVar9 + 0x28));
            if (iVar7 - 1U < 0xfffffffe) {
                *(int *) ((ulonglong) uVar10 * 0x20 + 0x10 + *(longlong * )(lVar9 + 0x28)) = iVar7 + 1;
            }
        }
    }
    FUN_1401429a0(lVar9, (ulonglong) uVar10);
    uVar2 = *(undefined4 * )(param_1 + 0x410);
    uVar12 = CONCAT44(uVar2, uVar2);
    auVar13 = CONCAT48(uVar2, uVar12);
    auVar17 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                         SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                          (uVar25, CONCAT114((char) ((uint) uVar2 >> 0x18),
                                                                                                                                             SUB1614(CONCAT412(uVar2, auVar13), 0)))
                                                                                                                          >> 0x70, 0),
                                                                                                           CONCAT113(uVar24, SUB1613(CONCAT412(uVar2, auVar13),
                                                                                                                                     0))) >> 0x68, 0),
                                                                                          CONCAT112((char) ((uint) uVar2 >> 0x10), auVar13)) >>
                                                                                                                                             0x60, 0),
                                                                         CONCAT111(uVar23, SUB1211(auVar13, 0))) >>
                                                                                                                 0x58, 0), CONCAT110((char) ((uint) uVar2 >> 8),
                                                                                                                                     SUB1210(auVar13, 0))) >> 0x50, 0),
                                                                 CONCAT19(uVar22, SUB129(auVar13, 0))) >> 0x48, 0),
                                                CONCAT18((char) uVar2, uVar12)) >> 0x40, 0), uVar21),
                       ((uint7) uVar12 >> 0x18) << 0x30);
    auVar16 = CONCAT115(CONCAT101(SUB1610(auVar17 >> 0x30, 0), uVar20), ((uint5) uVar12 >> 0x10) << 0x20);
    auVar15 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar16 >> 0x20, 0), uVar18),
                                          ((uint3) uVar2 >> 8) << 0x10) >> 0x10, 0),
                        (ushort) uVar2 & 0xff | (ushort) bVar19 << 8);
    iVar7 = SUB164(CONCAT214(CONCAT11(uVar25, uVar24),
                             CONCAT212(SUB162(auVar17 >> 0x30, 0), SUB1612(auVar15, 0))) >> 0x60, 0);
    auVar16 = CONCAT610(SUB166(CONCAT412(iVar7, CONCAT210(CONCAT11(uVar23, uVar22), SUB1610(auVar15, 0)))
                                       >> 0x50, 0), CONCAT28(SUB162(auVar16 >> 0x20, 0), SUB168(auVar15, 0)));
    local_48 = (float) SUB164(auVar16 >> 0x40, 0) * fVar27;
    fStack68 = (float) SUB164(CONCAT106(CONCAT82(SUB168(auVar16 >> 0x40, 0), CONCAT11(uVar21, uVar20)),
                                        (SUB166(auVar15, 0) >> 0x10) << 0x20) >> 0x20, 0) * fVar28;
    fStack64 = (float) (SUB164(auVar15, 0) & 0xffff | (uint) CONCAT11(uVar18, bVar19) << 0x10) * fVar29;
    fStack60 = (float) iVar7 * fVar30;
    uVar10 = FUN_140141f10(DAT_140c63678, &local_48);
    puVar6 = (uint * )(*(longlong * )(param_1 + 0x450) + 0x2c8);
    lVar9 = DAT_140c63678;
    if (puVar6 != local_res10) {
        FUN_1401429a0(DAT_140c63678, *puVar6);
        lVar9 = DAT_140c63678;
        *puVar6 = uVar10;
        if ((ulonglong) uVar10 < *(ulonglong * )(lVar9 + 0x30)) {
            iVar7 = *(int *) ((ulonglong) uVar10 * 0x20 + 0x10 + *(longlong * )(lVar9 + 0x28));
            if (iVar7 - 1U < 0xfffffffe) {
                *(int *) ((ulonglong) uVar10 * 0x20 + 0x10 + *(longlong * )(lVar9 + 0x28)) = iVar7 + 1;
            }
        }
    }
    FUN_1401429a0(lVar9, (ulonglong) uVar10);
    return;
}


void FUN_140127b20(longlong param_1, undefined4 param_2) {
    undefined *puVar1;
    undefined *puVar2;
    float fVar3;

    puVar1 = (undefined * )
            (**(code * *)(**(longlong * *)(*(longlong * )(param_1 + 0x4f0) + 0x410) + 0x70))();
    puVar2 = &DAT_1409dd974;
    if (puVar1 != (undefined *) 0x0) {
        puVar2 = puVar1;
    }
    FUN_1407dfd50(puVar2, 0, DAT_140c7aac8);
    puVar1 = (undefined * )
            (**(code * *)(**(longlong * *)(*(longlong * )(param_1 + 0x4f8) + 0x410) + 0x70))();
    puVar2 = &DAT_1409dd974;
    if (puVar1 != (undefined *) 0x0) {
        puVar2 = puVar1;
    }
    FUN_1407dfd50(puVar2, 0, DAT_140c7aac8);
    puVar1 = (undefined * )
            (**(code * *)(**(longlong * *)(*(longlong * )(param_1 + 0x500) + 0x410) + 0x70))();
    puVar2 = &DAT_1409dd974;
    if (puVar1 != (undefined *) 0x0) {
        puVar2 = puVar1;
    }
    FUN_1407dfd50(puVar2, 0, DAT_140c7aac8);
    *(undefined4 * )(param_1 + 0x410) = param_2;
    FUN_140127ec0(param_1);
    puVar1 = (undefined * )
            (**(code * *)(**(longlong * *)(*(longlong * )(param_1 + 0x4f0) + 0x410) + 0x70))();
    puVar2 = &DAT_1409dd974;
    if (puVar1 != (undefined *) 0x0) {
        puVar2 = puVar1;
    }
    FUN_1407dfd50(puVar2, 0, DAT_140c7aac8);
    puVar1 = (undefined * )
            (**(code * *)(**(longlong * *)(*(longlong * )(param_1 + 0x4f8) + 0x410) + 0x70))();
    puVar2 = &DAT_1409dd974;
    if (puVar1 != (undefined *) 0x0) {
        puVar2 = puVar1;
    }
    FUN_1407dfd50(puVar2, 0, DAT_140c7aac8);
    puVar1 = (undefined * )
            (**(code * *)(**(longlong * *)(*(longlong * )(param_1 + 0x500) + 0x410) + 0x70))();
    puVar2 = &DAT_1409dd974;
    if (puVar1 != (undefined *) 0x0) {
        puVar2 = puVar1;
    }
    FUN_1407dfd50(puVar2, 0, DAT_140c7aac8);
    switch (*(undefined4 * )(param_1 + 0x414)) {
        case 0:
            fVar3 = (float) FUN_1401737b0();
            *(int *) (param_1 + 0x418) = 0xff - (int) fVar3;
            fVar3 = (float) FUN_1401737b0(*(undefined8 * )(param_1 + 0x4e0));
            *(int *) (param_1 + 0x420) = 0xff - (int) fVar3;
            goto LAB_140127cb5;
        case 1:
            fVar3 = (float) FUN_1401737b0();
            *(int *) (param_1 + 0x420) = 0xff - (int) fVar3;
            fVar3 = (float) FUN_1401737b0(*(undefined8 * )(param_1 + 0x4e0));
            *(int *) (param_1 + 0x418) = 0xff - (int) fVar3;
        LAB_140127cb5:
            fVar3 = (float) FUN_1401737b0(*(undefined8 * )(param_1 + 0x4e8));
            *(int *) (param_1 + 0x41c) = (int) fVar3;
            break;
        case 2:
            fVar3 = (float) FUN_1401737b0(*(undefined8 * )(param_1 + 0x4d8));
            *(int *) (param_1 + 0x41c) = (int) fVar3;
            fVar3 = (float) FUN_1401737b0();
            *(int *) (param_1 + 0x420) = 0xff - (int) fVar3;
            fVar3 = (float) FUN_1401737b0(*(undefined8 * )(param_1 + 0x4e8));
            goto LAB_140127e79;
        case 3:
            fVar3 = (float) FUN_1401737b0();
            *(int *) (param_1 + 0x418) = 0xff - (int) (fVar3 * 0.7103064);
            fVar3 = (float) FUN_1401737b0(*(undefined8 * )(param_1 + 0x4f8));
            *(int *) (param_1 + 0x41c) = (int) (fVar3 * 2.55);
            fVar3 = (float) FUN_1401737b0(*(undefined8 * )(param_1 + 0x500));
            *(int *) (param_1 + 0x420) = 0xff - (int) (fVar3 * 2.55);
            break;
        case 4:
            fVar3 = (float) FUN_1401737b0(*(undefined8 * )(param_1 + 0x4f0));
            *(int *) (param_1 + 0x41c) = (int) (fVar3 * 0.7103064);
            fVar3 = (float) FUN_1401737b0();
            *(int *) (param_1 + 0x418) = 0xff - (int) (fVar3 * 2.55);
            fVar3 = (float) FUN_1401737b0(*(undefined8 * )(param_1 + 0x500));
            *(int *) (param_1 + 0x420) = 0xff - (int) (fVar3 * 2.55);
            break;
        case 5:
            fVar3 = (float) FUN_1401737b0(*(undefined8 * )(param_1 + 0x4f0));
            *(int *) (param_1 + 0x41c) = (int) (fVar3 * 0.7103064);
            fVar3 = (float) FUN_1401737b0();
            *(int *) (param_1 + 0x420) = 0xff - (int) (fVar3 * 2.55);
            fVar3 = (float) FUN_1401737b0(*(undefined8 * )(param_1 + 0x500));
            fVar3 = fVar3 * 2.55;
        LAB_140127e79:
            *(int *) (param_1 + 0x418) = 0xff - (int) fVar3;
    }
    FUN_140128250(param_1);
    return;
}


void FUN_140127ec0(longlong param_1) {
    byte bVar1;
    byte bVar2;
    byte bVar3;
    byte bVar4;
    byte bVar5;
    byte bVar6;
    float fVar7;
    float fVar8;
    float fVar9;

    bVar1 = *(byte * )(param_1 + 0x412);
    bVar2 = *(byte * )(param_1 + 0x411);
    bVar3 = *(byte * )(param_1 + 0x410);
    fVar7 = 0.003921569;
    bVar6 = bVar2;
    if (bVar2 < bVar3) {
        bVar6 = bVar3;
    }
    bVar5 = bVar1;
    if (bVar1 < bVar6) {
        bVar5 = bVar6;
    }
    bVar6 = bVar2;
    if (bVar3 < bVar2) {
        bVar6 = bVar3;
    }
    bVar4 = bVar1;
    if (bVar6 < bVar1) {
        bVar4 = bVar6;
    }
    fVar9 = (float) (uint) bVar5 * 0.003921569;
    fVar8 = (float) (uint) bVar4 * 0.003921569;
    if (bVar5 != bVar4) {
        if (bVar5 == bVar1) {
            fVar7 = fVar9 - fVar8;
        } else if (bVar5 == bVar2) {
            fVar7 = fVar9 - fVar8;
        } else if (bVar5 == bVar3) {
            fVar7 = fVar9 - fVar8;
        }
    }
    FUN_140173980(fVar7, *(undefined8 * )(param_1 + 0x4d8));
    FUN_140173980(*(undefined8 * )(param_1 + 0x4e0));
    FUN_140173980(*(undefined8 * )(param_1 + 0x4e8));
    FUN_140173980(*(undefined8 * )(param_1 + 0x4f0));
    FUN_140173980(*(undefined8 * )(param_1 + 0x4f8));
    FUN_140173980(*(undefined8 * )(param_1 + 0x500));
    FUN_140173980(*(undefined8 * )(param_1 + 0x508));
    return;
}


uint FUN_1401280f0(float param_1, float param_2, float param_3) {
    int iVar1;
    ulonglong uVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;

    iVar1 = (int) (param_1 * 0.01666667);
    uVar2 = (longlong) iVar1 / 6 + ((longlong) iVar1 >> 0x3f) & 0xffffffff;
    fVar6 = (1.0 - param_2) * param_3;
    iVar1 = iVar1 + ((int) uVar2 + (int) (uVar2 >> 0x1f)) * -6;
    fVar3 = param_1 * 0.01666667 - (float) iVar1;
    fVar8 = (1.0 - fVar3 * param_2) * param_3;
    fVar7 = (1.0 - (1.0 - fVar3) * param_2) * param_3;
    fVar3 = 0.0;
    fVar4 = 0.0;
    fVar5 = 0.0;
    switch (iVar1) {
        case 0:
            fVar3 = param_3;
            fVar4 = fVar7;
            fVar5 = fVar6;
            break;
        case 1:
            fVar3 = fVar8;
            fVar4 = param_3;
            fVar5 = fVar6;
            break;
        case 2:
            fVar3 = fVar6;
            fVar4 = param_3;
            fVar5 = fVar7;
            break;
        case 3:
            fVar3 = fVar6;
            fVar4 = fVar8;
            fVar5 = param_3;
            break;
        case 4:
            fVar3 = fVar7;
            fVar4 = fVar6;
            fVar5 = param_3;
            break;
        case 5:
            fVar3 = param_3;
            fVar4 = fVar6;
            fVar5 = fVar8;
    }
    return (((uint)(longlong)(fVar3 * 255.0 + 0.5) | 0xffffff00) << 8 |
            (uint)(longlong)(fVar4 * 255.0 + 0.5)) << 8 | (uint)(longlong)(fVar5 * 255.0 + 0.5);
}


void FUN_140128250(longlong param_1) {
    switch (*(undefined4 * )(param_1 + 0x414)) {
        case 0:
            FUN_1401265f0(param_1);
            FUN_140127ec0(param_1);
            return;
        case 1:
            FUN_140126990(param_1);
            FUN_140127ec0(param_1);
            return;
        case 2:
            FUN_140126d30(param_1);
            FUN_140127ec0(param_1);
            return;
        case 3:
            FUN_1401270c0(param_1);
            FUN_140127ec0(param_1);
            return;
        case 4:
            FUN_140127440(param_1);
            FUN_140127ec0(param_1);
            return;
        case 5:
            FUN_1401277b0(param_1);
    }
    FUN_140127ec0(param_1);
    return;
}


void FUN_140128320(ulonglong param_1, undefined8 param_2, undefined8 param_3, ulonglong param_4) {
    uint uVar1;
    uint uVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    undefined4 uVar5;
    int iVar6;
    uint *puVar7;
    ulonglong uVar8;
    longlong lVar9;
    bool bVar10;
    undefined8 uVar11;
    undefined auVar13[15];
    undefined auVar14[16];
    undefined in_XMM6_Ba;
    byte bVar17;
    undefined in_XMM6_Bb;
    undefined uVar18;
    undefined in_XMM6_Bc;
    undefined uVar19;
    undefined in_XMM6_Bd;
    undefined uVar20;
    undefined in_XMM6_Be;
    undefined uVar21;
    undefined in_XMM6_Bf;
    undefined uVar22;
    undefined in_XMM6_Bg;
    undefined uVar23;
    undefined in_XMM6_Bh;
    undefined uVar24;
    float fVar25;
    float fVar26;
    float fVar27;
    float fVar28;
    uint local_res20[2];
    undefined local_68[16];
    longlong local_58[10];
    undefined auVar12[12];
    undefined auVar15[16];
    undefined auVar16[16];

    *(undefined8 * )(param_1 + 0x400) = param_3;
    param_4 = param_4 & 0xffffffff;
    FUN_1400e7280(param_2, param_1, L"DefaultStratum");
    lVar9 = DAT_140c63678;
    fVar25 = 0.003921569;
    fVar26 = 0.003921569;
    fVar27 = 0.003921569;
    fVar28 = 0.003921569;
    uVar2 = CONCAT13(in_XMM6_Bd, CONCAT12(in_XMM6_Bc, CONCAT11(in_XMM6_Bb, in_XMM6_Ba))) ^
            CONCAT13(in_XMM6_Bd, CONCAT12(in_XMM6_Bc, CONCAT11(in_XMM6_Bb, in_XMM6_Ba)));
    bVar17 = (byte) uVar2;
    uVar18 = (undefined)(uVar2 >> 8);
    uVar19 = (undefined)(uVar2 >> 0x10);
    uVar20 = (undefined)(uVar2 >> 0x18);
    uVar1 = CONCAT13(in_XMM6_Bh, CONCAT12(in_XMM6_Bg, CONCAT11(in_XMM6_Bf, in_XMM6_Be))) ^
            CONCAT13(in_XMM6_Bh, CONCAT12(in_XMM6_Bg, CONCAT11(in_XMM6_Bf, in_XMM6_Be)));
    uVar21 = (undefined) uVar1;
    uVar22 = (undefined)(uVar1 >> 8);
    uVar23 = (undefined)(uVar1 >> 0x10);
    uVar24 = (undefined)(uVar1 >> 0x18);
    uVar5 = (undefined4) param_4;
    *(undefined4 * )(param_1 + 0x410) = uVar5;
    auVar13 = SUB1615(CONCAT412(uVar5, CONCAT48(uVar5, param_4 | param_4 << 0x20)), 0) |
              SUB1615((undefined[16]) 0xff000000, 0) | SUB1615((undefined[16]) 0xff00000000000000, 0)
              | SUB1615((undefined[16]) 0xff000000, 0) |
              SUB1615((undefined[16]) 0xff00000000000000, 0);
    auVar16 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                                          SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                                           (uVar24, CONCAT114(SUB151(auVar13 >> 0x38, 0),
                                                                                                                                                              SUB1514(auVar13, 0))) >> 0x70, 0),
                                                                                                                            CONCAT113(uVar23, SUB1513(auVar13, 0))) >> 0x68, 0),
                                                                                                           CONCAT112(SUB151(auVar13 >> 0x30, 0),
                                                                                                                     SUB1512(auVar13, 0))) >> 0x60, 0),
                                                                                          CONCAT111(uVar22, SUB1511(auVar13, 0))) >> 0x58, 0),
                                                                                  CONCAT110(SUB151(auVar13 >> 0x28, 0),
                                                                                            SUB1510(auVar13, 0)))
                                                                                >> 0x50, 0),
                                                                 CONCAT19(uVar21, SUB159(auVar13, 0))) >> 0x48, 0),
                                                CONCAT18(SUB151(auVar13 >> 0x20, 0), SUB158(auVar13, 0)))
                                               >> 0x40, 0), uVar20), (SUB157(auVar13, 0) >> 0x18) << 0x30);
    auVar15 = CONCAT115(CONCAT101(SUB1610(auVar16 >> 0x30, 0), uVar19),
                        (SUB155(auVar13, 0) >> 0x10) << 0x20);
    auVar14 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar15 >> 0x20, 0), uVar18),
                                          (SUB153(auVar13, 0) >> 8) << 0x10) >> 0x10, 0),
                        SUB152(auVar13, 0) & 0xff | (ushort) bVar17 << 8);
    iVar6 = SUB164(CONCAT214((short) (uVar1 >> 0x10),
                             CONCAT212(SUB162(auVar16 >> 0x30, 0), SUB1612(auVar14, 0))) >> 0x60, 0);
    auVar15 = CONCAT610(SUB166(CONCAT412(iVar6, CONCAT210((short) uVar1, SUB1610(auVar14, 0))) >> 0x50, 0),
                        CONCAT28(SUB162(auVar15 >> 0x20, 0), SUB168(auVar14, 0)));
    local_68 = CONCAT412((float) iVar6 * 0.003921569,
                         CONCAT48((float) (SUB164(auVar14, 0) & 0xffff | uVar2 << 0x10) * 0.003921569,
                                  CONCAT44((float) SUB164(CONCAT106(CONCAT82(SUB168(auVar15 >> 0x40, 0),
                                                                             (short) (uVar2 >> 0x10)),
                                                                    (SUB166(auVar14, 0) >> 0x10) << 0x20
                                           ) >> 0x20, 0) * 0.003921569,
                                           (float) SUB164(auVar15 >> 0x40, 0) * 0.003921569)));
    uVar2 = FUN_140141f10(lVar9, local_68);
    puVar7 = (uint * )(*(longlong * )(param_1 + 0x440) + 0x2c8);
    lVar9 = DAT_140c63678;
    if (puVar7 != local_res20) {
        FUN_1401429a0(DAT_140c63678, *puVar7);
        lVar9 = DAT_140c63678;
        *puVar7 = uVar2;
        if ((ulonglong) uVar2 < *(ulonglong * )(lVar9 + 0x30)) {
            iVar6 = *(int *) ((ulonglong) uVar2 * 0x20 + 0x10 + *(longlong * )(lVar9 + 0x28));
            if (iVar6 - 1U < 0xfffffffe) {
                *(int *) ((ulonglong) uVar2 * 0x20 + 0x10 + *(longlong * )(lVar9 + 0x28)) = iVar6 + 1;
            }
        }
    }
    FUN_1401429a0(lVar9, (ulonglong) uVar2);
    uVar5 = *(undefined4 * )(param_1 + 0x410);
    auVar13 = SUB1615(CONCAT412(uVar5, CONCAT48(uVar5, CONCAT44(uVar5, uVar5))), 0) |
              SUB1615((undefined[16]) 0xff000000, 0) | SUB1615((undefined[16]) 0xff00000000000000, 0)
              | SUB1615((undefined[16]) 0xff000000, 0) |
              SUB1615((undefined[16]) 0xff00000000000000, 0);
    auVar16 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                                          SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                                           (uVar24, CONCAT114(SUB151(auVar13 >> 0x38, 0),
                                                                                                                                                              SUB1514(auVar13, 0))) >> 0x70, 0),
                                                                                                                            CONCAT113(uVar23, SUB1513(auVar13, 0))) >> 0x68, 0),
                                                                                                           CONCAT112(SUB151(auVar13 >> 0x30, 0),
                                                                                                                     SUB1512(auVar13, 0))) >> 0x60, 0),
                                                                                          CONCAT111(uVar22, SUB1511(auVar13, 0))) >> 0x58, 0),
                                                                                  CONCAT110(SUB151(auVar13 >> 0x28, 0),
                                                                                            SUB1510(auVar13, 0)))
                                                                                >> 0x50, 0),
                                                                 CONCAT19(uVar21, SUB159(auVar13, 0))) >> 0x48, 0),
                                                CONCAT18(SUB151(auVar13 >> 0x20, 0), SUB158(auVar13, 0)))
                                               >> 0x40, 0), uVar20), (SUB157(auVar13, 0) >> 0x18) << 0x30);
    auVar15 = CONCAT115(CONCAT101(SUB1610(auVar16 >> 0x30, 0), uVar19),
                        (SUB155(auVar13, 0) >> 0x10) << 0x20);
    auVar14 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar15 >> 0x20, 0), uVar18),
                                          (SUB153(auVar13, 0) >> 8) << 0x10) >> 0x10, 0),
                        SUB152(auVar13, 0) & 0xff | (ushort) bVar17 << 8);
    iVar6 = SUB164(CONCAT214(CONCAT11(uVar24, uVar23),
                             CONCAT212(SUB162(auVar16 >> 0x30, 0), SUB1612(auVar14, 0))) >> 0x60, 0);
    auVar15 = CONCAT610(SUB166(CONCAT412(iVar6, CONCAT210(CONCAT11(uVar22, uVar21), SUB1610(auVar14, 0)))
                                       >> 0x50, 0), CONCAT28(SUB162(auVar15 >> 0x20, 0), SUB168(auVar14, 0)));
    local_68 = CONCAT412((float) iVar6 * fVar28,
                         CONCAT48((float) (SUB164(auVar14, 0) & 0xffff |
                                           (uint) CONCAT11(uVar18, bVar17) << 0x10) * fVar27,
                                  CONCAT44((float) SUB164(CONCAT106(CONCAT82(SUB168(auVar15 >> 0x40, 0),
                                                                             CONCAT11(uVar20, uVar19)),
                                                                    (SUB166(auVar14, 0) >> 0x10) << 0x20
                                           ) >> 0x20, 0) * fVar26,
                                           (float) SUB164(auVar15 >> 0x40, 0) * fVar25)));
    uVar2 = FUN_140141f10(DAT_140c63678, local_68);
    puVar7 = (uint * )(*(longlong * )(param_1 + 0x438) + 0x2c8);
    lVar9 = DAT_140c63678;
    if (puVar7 != local_res20) {
        FUN_1401429a0(DAT_140c63678, *puVar7);
        lVar9 = DAT_140c63678;
        *puVar7 = uVar2;
        if ((ulonglong) uVar2 < *(ulonglong * )(lVar9 + 0x30)) {
            iVar6 = *(int *) ((ulonglong) uVar2 * 0x20 + 0x10 + *(longlong * )(lVar9 + 0x28));
            if (iVar6 - 1U < 0xfffffffe) {
                *(int *) ((ulonglong) uVar2 * 0x20 + 0x10 + *(longlong * )(lVar9 + 0x28)) = iVar6 + 1;
            }
        }
    }
    FUN_1401429a0(lVar9, (ulonglong) uVar2);
    uVar5 = *(undefined4 * )(param_1 + 0x410);
    uVar11 = CONCAT44(uVar5, uVar5);
    auVar12 = CONCAT48(uVar5, uVar11);
    auVar16 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                         SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                          (uVar24, CONCAT114((char) ((uint) uVar5 >> 0x18),
                                                                                                                                             SUB1614(CONCAT412(uVar5, auVar12), 0)))
                                                                                                                          >> 0x70, 0),
                                                                                                           CONCAT113(uVar23, SUB1613(CONCAT412(uVar5, auVar12),
                                                                                                                                     0))) >> 0x68, 0),
                                                                                          CONCAT112((char) ((uint) uVar5 >> 0x10), auVar12)) >>
                                                                                                                                             0x60, 0),
                                                                         CONCAT111(uVar22, SUB1211(auVar12, 0))) >>
                                                                                                                 0x58, 0), CONCAT110((char) ((uint) uVar5 >> 8),
                                                                                                                                     SUB1210(auVar12, 0))) >> 0x50, 0),
                                                                 CONCAT19(uVar21, SUB129(auVar12, 0))) >> 0x48, 0),
                                                CONCAT18((char) uVar5, uVar11)) >> 0x40, 0), uVar20),
                       ((uint7) uVar11 >> 0x18) << 0x30);
    auVar15 = CONCAT115(CONCAT101(SUB1610(auVar16 >> 0x30, 0), uVar19), ((uint5) uVar11 >> 0x10) << 0x20);
    auVar14 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar15 >> 0x20, 0), uVar18),
                                          ((uint3) uVar5 >> 8) << 0x10) >> 0x10, 0),
                        (ushort) uVar5 & 0xff | (ushort) bVar17 << 8);
    iVar6 = SUB164(CONCAT214(CONCAT11(uVar24, uVar23),
                             CONCAT212(SUB162(auVar16 >> 0x30, 0), SUB1612(auVar14, 0))) >> 0x60, 0);
    auVar15 = CONCAT610(SUB166(CONCAT412(iVar6, CONCAT210(CONCAT11(uVar22, uVar21), SUB1610(auVar14, 0)))
                                       >> 0x50, 0), CONCAT28(SUB162(auVar15 >> 0x20, 0), SUB168(auVar14, 0)));
    local_68 = CONCAT412((float) iVar6 * fVar28,
                         CONCAT48((float) (SUB164(auVar14, 0) & 0xffff |
                                           (uint) CONCAT11(uVar18, bVar17) << 0x10) * fVar27,
                                  CONCAT44((float) SUB164(CONCAT106(CONCAT82(SUB168(auVar15 >> 0x40, 0),
                                                                             CONCAT11(uVar20, uVar19)),
                                                                    (SUB166(auVar14, 0) >> 0x10) << 0x20
                                           ) >> 0x20, 0) * fVar26,
                                           (float) SUB164(auVar15 >> 0x40, 0) * fVar25)));
    uVar2 = FUN_140141f10(DAT_140c63678, local_68);
    puVar7 = (uint * )(*(longlong * )(param_1 + 0x450) + 0x2c8);
    lVar9 = DAT_140c63678;
    if (puVar7 != local_res20) {
        FUN_1401429a0(DAT_140c63678, *puVar7);
        lVar9 = DAT_140c63678;
        *puVar7 = uVar2;
        if ((ulonglong) uVar2 < *(ulonglong * )(lVar9 + 0x30)) {
            iVar6 = *(int *) ((ulonglong) uVar2 * 0x20 + 0x10 + *(longlong * )(lVar9 + 0x28));
            if (iVar6 - 1U < 0xfffffffe) {
                *(int *) ((ulonglong) uVar2 * 0x20 + 0x10 + *(longlong * )(lVar9 + 0x28)) = iVar6 + 1;
            }
        }
    }
    FUN_1401429a0(lVar9, (ulonglong) uVar2);
    uVar5 = *(undefined4 * )(param_1 + 0x410);
    uVar11 = CONCAT44(uVar5, uVar5);
    auVar12 = CONCAT48(uVar5, uVar11);
    auVar16 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                         SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                          (uVar24, CONCAT114((char) ((uint) uVar5 >> 0x18),
                                                                                                                                             SUB1614(CONCAT412(uVar5, auVar12), 0)))
                                                                                                                          >> 0x70, 0),
                                                                                                           CONCAT113(uVar23, SUB1613(CONCAT412(uVar5, auVar12),
                                                                                                                                     0))) >> 0x68, 0),
                                                                                          CONCAT112((char) ((uint) uVar5 >> 0x10), auVar12)) >>
                                                                                                                                             0x60, 0),
                                                                         CONCAT111(uVar22, SUB1211(auVar12, 0))) >>
                                                                                                                 0x58, 0), CONCAT110((char) ((uint) uVar5 >> 8),
                                                                                                                                     SUB1210(auVar12, 0))) >> 0x50, 0),
                                                                 CONCAT19(uVar21, SUB129(auVar12, 0))) >> 0x48, 0),
                                                CONCAT18((char) uVar5, uVar11)) >> 0x40, 0), uVar20),
                       ((uint7) uVar11 >> 0x18) << 0x30);
    auVar15 = CONCAT115(CONCAT101(SUB1610(auVar16 >> 0x30, 0), uVar19), ((uint5) uVar11 >> 0x10) << 0x20);
    auVar14 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar15 >> 0x20, 0), uVar18),
                                          ((uint3) uVar5 >> 8) << 0x10) >> 0x10, 0),
                        (ushort) uVar5 & 0xff | (ushort) bVar17 << 8);
    iVar6 = SUB164(CONCAT214(CONCAT11(uVar24, uVar23),
                             CONCAT212(SUB162(auVar16 >> 0x30, 0), SUB1612(auVar14, 0))) >> 0x60, 0);
    auVar15 = CONCAT610(SUB166(CONCAT412(iVar6, CONCAT210(CONCAT11(uVar22, uVar21), SUB1610(auVar14, 0)))
                                       >> 0x50, 0), CONCAT28(SUB162(auVar15 >> 0x20, 0), SUB168(auVar14, 0)));
    local_68 = CONCAT412((float) iVar6 * fVar28,
                         CONCAT48((float) (SUB164(auVar14, 0) & 0xffff |
                                           (uint) CONCAT11(uVar18, bVar17) << 0x10) * fVar27,
                                  CONCAT44((float) SUB164(CONCAT106(CONCAT82(SUB168(auVar15 >> 0x40, 0),
                                                                             CONCAT11(uVar20, uVar19)),
                                                                    (SUB166(auVar14, 0) >> 0x10) << 0x20
                                           ) >> 0x20, 0) * fVar26,
                                           (float) SUB164(auVar15 >> 0x40, 0) * fVar25)));
    uVar2 = FUN_140141f10(DAT_140c63678, local_68);
    puVar7 = (uint * )(*(longlong * )(param_1 + 0x448) + 0x2c8);
    lVar9 = DAT_140c63678;
    if (puVar7 != local_res20) {
        FUN_1401429a0(DAT_140c63678, *puVar7);
        lVar9 = DAT_140c63678;
        *puVar7 = uVar2;
        if ((ulonglong) uVar2 < *(ulonglong * )(lVar9 + 0x30)) {
            iVar6 = *(int *) ((ulonglong) uVar2 * 0x20 + 0x10 + *(longlong * )(lVar9 + 0x28));
            if (iVar6 - 1U < 0xfffffffe) {
                *(int *) ((ulonglong) uVar2 * 0x20 + 0x10 + *(longlong * )(lVar9 + 0x28)) = iVar6 + 1;
            }
        }
    }
    FUN_1401429a0(lVar9, (ulonglong) uVar2);
    lVar9 = *(longlong * )(param_1 + 0x4c0);
    bVar10 = (char) (param_4 >> 0x18) != -1;
    *(byte * )(lVar9 + 0x59c) = *(byte * )(lVar9 + 0x59c) & 0xbf;
    *(byte * )(lVar9 + 0x59c) = *(byte * )(lVar9 + 0x59c) | bVar10 << 6;
    lVar9 = *(longlong * )(lVar9 + 0x618);
    if ((lVar9 != 0) && ((*(byte * )(lVar9 + 0x1c) & 1) != 0)) {
        FUN_1400d42f0(lVar9, bVar10, 0);
    }
    FUN_1400d42f0(*(undefined8 * )(param_1 + 0x508), bVar10, 0);
    FUN_140127b20(param_1, *(undefined4 * )(param_1 + 0x410));
    FUN_1400d42f0(param_1, 1, 0);
    uVar3 = param_1;
    FUN_1400e8b00(*(undefined8 * )(param_1 + 0x20));
    uVar4 = 0;
    local_58[0] = *(longlong * )(param_1 + 0x490);
    local_58[1] = *(undefined8 * )(param_1 + 0x498);
    local_58[2] = *(undefined8 * )(param_1 + 0x4a0);
    local_58[3] = *(undefined8 * )(param_1 + 0x4a8);
    local_58[4] = *(undefined8 * )(param_1 + 0x4b0);
    local_58[5] = *(undefined8 * )(param_1 + 0x4b8);
    uVar8 = uVar4;
    do {
        iVar6 = (int) uVar8;
        bVar10 = iVar6 == *(int *) (param_1 + 0x414);
        lVar9 = local_58[uVar4];
        uVar3 = uVar3 & 0xffffffffffffff00 | (ulonglong) bVar10;
        *(byte * )(lVar9 + 0x59c) = *(byte * )(lVar9 + 0x59c) & 0xbf;
        *(byte * )(lVar9 + 0x59c) = *(byte * )(lVar9 + 0x59c) | bVar10 << 6;
        lVar9 = *(longlong * )(lVar9 + 0x618);
        if ((lVar9 != 0) && ((*(byte * )(lVar9 + 0x1c) & 1) != 0)) {
            FUN_1400d42f0(lVar9, uVar3, 0);
        }
        uVar4 = uVar4 + 1;
        uVar8 = (ulonglong)(iVar6 + 1);
    } while ((longlong) uVar4 < 6);
    return;
}


undefined8 FUN_140128aa0(longlong param_1, undefined4 param_2, int *param_3, undefined param_4) {
    int iVar1;
    int iVar2;
    int iVar3;
    undefined8 uVar4;
    undefined *puVar5;

    iVar1 = *(int *) (param_1 + 0x2d0);
    iVar2 = *(int *) (param_1 + 0x2cc);
    iVar3 = *param_3;
    if ((((iVar3 < iVar2 + 4) || (iVar2 + 0x104 <= iVar3)) || (param_3[1] < iVar1 + 4)) ||
        (iVar1 + 0x104 <= param_3[1])) {
        if (((iVar3 < iVar2 + 0x108) || (iVar2 + 0x118 <= iVar3)) ||
            ((param_3[1] < iVar1 + 4 || (iVar1 + 0x104 <= param_3[1])))) {
            uVar4 = FUN_1400d2120(param_1, param_2, param_3, param_4);
            return uVar4;
        }
        *(undefined * )(param_1 + 0x425) = 1;
        *(int *) (param_1 + 0x418) = param_3[1] - (iVar1 + 4);
        FUN_140128250(param_1);
        puVar5 = &DAT_1409d7e1c;
    } else {
        *(undefined * )(param_1 + 0x424) = 1;
        *(int *) (param_1 + 0x41c) = *param_3 - (iVar2 + 4);
        *(int *) (param_1 + 0x420) = param_3[1] - (iVar1 + 4);
        FUN_140128250(param_1);
        puVar5 = &DAT_1409d7dbc;
    }
    FUN_1400d4070(param_1, 0x4a, param_1, puVar5, *(undefined4 * )(param_1 + 0x410));
    return 0;
}


undefined8 FUN_140128bf0(longlong param_1, int *param_2) {
    undefined8 uVar1;
    int iVar2;
    int iVar3;
    undefined *puVar4;

    if (*(char *) (param_1 + 0x424) == '\0') {
        if (*(char *) (param_1 + 0x425) == '\0') {
            uVar1 = FUN_1400d23b0();
            return uVar1;
        }
        iVar3 = param_2[1] - (*(int *) (param_1 + 0x2d0) + 4);
        iVar2 = 0xff;
        if (iVar3 < 0xff) {
            iVar2 = iVar3;
        }
        iVar3 = 0;
        if (0 < iVar2) {
            iVar3 = iVar2;
        }
        *(int *) (param_1 + 0x418) = iVar3;
        FUN_140128250(param_1);
        puVar4 = &DAT_1409d7e54;
    } else {
        iVar3 = *param_2 - (*(int *) (param_1 + 0x2cc) + 4);
        *(int *) (param_1 + 0x41c) = iVar3;
        *(int *) (param_1 + 0x420) = param_2[1] - (*(int *) (param_1 + 0x2d0) + 4);
        iVar2 = 0xff;
        if (iVar3 < 0xff) {
            iVar2 = iVar3;
        }
        iVar3 = 0;
        if (0 < iVar2) {
            iVar3 = iVar2;
        }
        *(int *) (param_1 + 0x41c) = iVar3;
        iVar2 = 0xff;
        if (*(int *) (param_1 + 0x420) < 0xff) {
            iVar2 = *(int *) (param_1 + 0x420);
        }
        iVar3 = 0;
        if (0 < iVar2) {
            iVar3 = iVar2;
        }
        *(int *) (param_1 + 0x420) = iVar3;
        FUN_140128250(param_1);
        puVar4 = &DAT_1409d7e3c;
    }
    FUN_1400d4070(param_1, 0x4a, param_1, puVar4, *(undefined4 * )(param_1 + 0x410));
    return 0;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140128d10(longlong param_1, ulonglong param_2, undefined **param_3) {
    undefined4 uVar1;
    undefined **ppuVar2;
    longlong lVar3;
    char cVar4;
    short sVar7;
    short sVar8;
    short sVar9;
    uint6 uVar10;
    undefined uVar11;
    char cVar12;
    undefined4 uVar13;
    int iVar14;
    undefined *puVar15;
    longlong lVar16;
    undefined8 uVar17;
    longlong *plVar18;
    undefined8 *puVar19;
    undefined(*pauVar20)[16];
    undefined8 *puVar21;
    uint uVar22;
    ulonglong uVar24;
    longlong lVar25;
    undefined ***pppuVar26;
    ulonglong uVar27;
    undefined *puVar28;
    char *pcVar29;
    bool bVar30;
    int iVar31;
    double extraout_XMM0_Qa;
    double extraout_XMM0_Qa_00;
    double extraout_XMM0_Qa_01;
    double extraout_XMM0_Qa_02;
    double extraout_XMM0_Qa_03;
    double extraout_XMM0_Qa_04;
    double extraout_XMM0_Qa_05;
    double extraout_XMM0_Qa_06;
    int iVar33;
    undefined in_XMM0[16];
    undefined extraout_XMM0[16];
    undefined extraout_XMM0_00[16];
    undefined extraout_XMM0_01[16];
    undefined extraout_XMM0_02[16];
    undefined extraout_XMM0_03[16];
    undefined extraout_XMM0_04[16];
    undefined extraout_XMM0_05[16];
    undefined extraout_XMM0_06[16];
    undefined auVar32[16];
    int iVar34;
    short sVar35;
    ushort uVar40;
    undefined auVar37[12];
    undefined auVar38[16];
    float fVar41;
    float fVar42;
    float fVar43;
    float fVar44;
    undefined4 uVar45;
    undefined8 local_res8;
    ulonglong in_stack_ffffffffffffff28;
    undefined *local_c0;
    undefined4 local_b8;
    undefined **local_b0;
    undefined8 local_a8;
    LPVOID local_a0;
    undefined **local_98[2];
    LPVOID local_88;
    undefined8 local_80;
    undefined8 local_78;
    undefined8 local_70;
    char cVar5;
    char cVar6;
    ulonglong uVar23;
    undefined6 uVar36;
    undefined auVar39[16];

    uVar45 = (undefined4)(in_stack_ffffffffffffff28 >> 0x20);
    iVar31 = (int) param_2;
    if (iVar31 == 0x47) {
        if (((param_3 == *(undefined * **)(param_1 + 0x4f0)) ||
             (param_3 == *(undefined * **)(param_1 + 0x4f8))) ||
            (param_3 == *(undefined * **)(param_1 + 0x500))) {
            puVar15 = (undefined * )
                    (**(code * *)(*(longlong * )(*(undefined * **)(param_1 + 0x4f0))[0x82] + 0x70))();
            puVar28 = &DAT_1409dd974;
            if (puVar15 != (undefined *) 0x0) {
                puVar28 = puVar15;
            }
            FUN_1407dfd50(puVar28, 0, DAT_140c7aac8);
            puVar15 = (undefined * )
                    (**(code * *)(**(longlong * *)(*(longlong * )(param_1 + 0x4f8) + 0x410) + 0x70))();
            puVar28 = &DAT_1409dd974;
            if (puVar15 != (undefined *) 0x0) {
                puVar28 = puVar15;
            }
            FUN_1407dfd50(puVar28, 0, DAT_140c7aac8);
            puVar15 = (undefined * )
                    (**(code * *)(**(longlong * *)(*(longlong * )(param_1 + 0x500) + 0x410) + 0x70))();
            puVar28 = &DAT_1409dd974;
            if (puVar15 != (undefined *) 0x0) {
                puVar28 = puVar15;
            }
            FUN_1407dfd50(puVar28, 0, DAT_140c7aac8);
            uVar13 = FUN_1401280f0();
            FUN_140127b20(param_1, uVar13);
            if (param_3 == *(undefined * **)(param_1 + 0x4f0)) {
                FUN_140173980();
            }
            if (param_3 == *(undefined * **)(param_1 + 0x4f8)) {
                FUN_140173980();
            }
            if (param_3 == *(undefined * **)(param_1 + 0x500)) {
                FUN_140173980();
            }
            param_2 = 0;
            in_stack_ffffffffffffff28 = CONCAT44(uVar45, *(undefined4 * )(param_1 + 0x410));
            FUN_1400d4070(param_1, 0x4a, param_1, &DAT_1409d7f0c, in_stack_ffffffffffffff28);
            in_XMM0 = extraout_XMM0;
        }
        if (((param_3 == *(undefined * **)(param_1 + 0x4d8)) ||
             (param_3 == *(undefined * **)(param_1 + 0x4e0))) ||
            ((param_3 == *(undefined * **)(param_1 + 0x4e8) ||
              (param_3 == *(undefined * **)(param_1 + 0x508))))) {
            puVar15 = (undefined * )
                    (**(code * *)(*(longlong * )(*(undefined * **)(param_1 + 0x4d8))[0x82] + 0x70))();
            puVar28 = &DAT_1409dd974;
            if (puVar15 != (undefined *) 0x0) {
                puVar28 = puVar15;
            }
            FUN_1407dfd50(puVar28, 0, DAT_140c7aac8);
            puVar15 = (undefined * )
                    (**(code * *)(**(longlong * *)(*(longlong * )(param_1 + 0x4e0) + 0x410) + 0x70))();
            puVar28 = &DAT_1409dd974;
            if (puVar15 != (undefined *) 0x0) {
                puVar28 = puVar15;
            }
            FUN_1407dfd50(puVar28, 0, DAT_140c7aac8);
            puVar15 = (undefined * )
                    (**(code * *)(**(longlong * *)(*(longlong * )(param_1 + 0x4e8) + 0x410) + 0x70))();
            puVar28 = &DAT_1409dd974;
            if (puVar15 != (undefined *) 0x0) {
                puVar28 = puVar15;
            }
            FUN_1407dfd50(puVar28, 0, DAT_140c7aac8);
            puVar15 = (undefined * )
                    (**(code * *)(**(longlong * *)(*(longlong * )(param_1 + 0x508) + 0x410) + 0x70))();
            puVar28 = &DAT_1409dd974;
            if (puVar15 != (undefined *) 0x0) {
                puVar28 = puVar15;
            }
            FUN_1407dfd50(puVar28, 0, DAT_140c7aac8);
            FUN_140127b20(param_1, ((((uint)(longlong)
            extraout_XMM0_Qa_02 & 0xff) << 8 |
                                           (uint)(longlong)
            extraout_XMM0_Qa & 0xff) << 8 |
                                        (uint)(longlong)
            extraout_XMM0_Qa_00 & 0xff) << 8 |
                                           (uint)(longlong)
            extraout_XMM0_Qa_01 & 0xff);
            puVar28 = &DAT_1409d7f4c;
            LAB_14012912d:
            param_2 = 0;
            in_stack_ffffffffffffff28 =
                    in_stack_ffffffffffffff28 & 0xffffffff00000000 | (ulonglong) * (uint * )(param_1 + 0x410);
            FUN_1400d4070(param_1, 0x4a, param_1, puVar28, in_stack_ffffffffffffff28);
            in_XMM0 = extraout_XMM0_00;
        }
    } else if ((iVar31 - 0x24U < 2) && (param_3 == *(undefined * **)(param_1 + 0x4c0))) {
        uVar11 = FUN_1401301f0();
        FUN_1400d42f0(*(undefined8 * )(param_1 + 0x508), uVar11, 0);
        cVar12 = FUN_1401301f0(*(undefined8 * )(param_1 + 0x4c0));
        if (cVar12 == '\0') {
            FUN_140173980(*(undefined8 * )(param_1 + 0x508));
        }
        puVar15 = (undefined * )
                (**(code * *)(**(longlong * *)(*(longlong * )(param_1 + 0x4d8) + 0x410) + 0x70))();
        puVar28 = &DAT_1409dd974;
        if (puVar15 != (undefined *) 0x0) {
            puVar28 = puVar15;
        }
        FUN_1407dfd50(puVar28, 0, DAT_140c7aac8);
        puVar15 = (undefined * )
                (**(code * *)(**(longlong * *)(*(longlong * )(param_1 + 0x4e0) + 0x410) + 0x70))();
        puVar28 = &DAT_1409dd974;
        if (puVar15 != (undefined *) 0x0) {
            puVar28 = puVar15;
        }
        FUN_1407dfd50(puVar28, 0, DAT_140c7aac8);
        puVar15 = (undefined * )
                (**(code * *)(**(longlong * *)(*(longlong * )(param_1 + 0x4e8) + 0x410) + 0x70))();
        puVar28 = &DAT_1409dd974;
        if (puVar15 != (undefined *) 0x0) {
            puVar28 = puVar15;
        }
        FUN_1407dfd50(puVar28, 0, DAT_140c7aac8);
        puVar15 = (undefined * )
                (**(code * *)(**(longlong * *)(*(longlong * )(param_1 + 0x508) + 0x410) + 0x70))();
        puVar28 = &DAT_1409dd974;
        if (puVar15 != (undefined *) 0x0) {
            puVar28 = puVar15;
        }
        FUN_1407dfd50(puVar28, 0, DAT_140c7aac8);
        FUN_140127b20(param_1, ((((uint)(longlong)
        extraout_XMM0_Qa_06 & 0xff) << 8 |
                                       (uint)(longlong)
        extraout_XMM0_Qa_03 & 0xff) << 8 |
                                       (uint)(longlong)
        extraout_XMM0_Qa_04 & 0xff) << 8 |
                                       (uint)(longlong)
        extraout_XMM0_Qa_05 & 0xff);
        puVar28 = &DAT_1409d7f2c;
        goto LAB_14012912d;
    }
    uVar45 = (undefined4)(in_stack_ffffffffffffff28 >> 0x20);
    uVar24 = 0;
    local_98[0] = *(undefined * **)(param_1 + 0x490);
    local_98[1] = (undefined * *) * (undefined8 * )(param_1 + 0x498);
    local_88 = *(LPVOID * )(param_1 + 0x4a0);
    local_80 = *(undefined8 * )(param_1 + 0x4a8);
    local_78 = *(undefined8 * )(param_1 + 0x4b0);
    local_70 = *(undefined8 * )(param_1 + 0x4b8);
    if (iVar31 == 0x24) {
        pppuVar26 = local_98;
        uVar23 = uVar24;
        do {
            if (*pppuVar26 == param_3) {
                param_2 = (ulonglong) * (uint * )(param_1 + 0x410);
                *(int *) (param_1 + 0x414) = (int) uVar23;
                FUN_140127b20(param_1);
                FUN_140128250(param_1);
                in_XMM0 = extraout_XMM0_01;
            }
            uVar22 = (int) uVar23 + 1;
            uVar23 = (ulonglong) uVar22;
            pppuVar26 = pppuVar26 + 1;
            uVar27 = uVar24;
        } while ((int) uVar22 < 6);
        do {
            iVar14 = (int) uVar27;
            bVar30 = *(int *) (param_1 + 0x414) == iVar14;
            ppuVar2 = local_98[uVar24];
            param_2 = param_2 & 0xffffffffffffff00 | (ulonglong) bVar30;
            *(byte * )((longlong) ppuVar2 + 0x59c) = *(byte * )((longlong) ppuVar2 + 0x59c) & 0xbf;
            *(byte * )((longlong) ppuVar2 + 0x59c) = *(byte * )((longlong) ppuVar2 + 0x59c) | bVar30 << 6;
            puVar28 = ppuVar2[0xc3];
            if ((puVar28 != (undefined *) 0x0) && ((puVar28[0x1c] & 1) != 0)) {
                FUN_1400d42f0(puVar28, param_2, 0);
                in_XMM0 = extraout_XMM0_02;
            }
            uVar45 = (undefined4)(in_stack_ffffffffffffff28 >> 0x20);
            uVar24 = uVar24 + 1;
            uVar27 = (ulonglong)(iVar14 + 1);
        } while ((longlong) uVar24 < 6);
    }
    if (*(int *) (param_1 + 0x408) != -2) {
        lVar3 = *(longlong * )(*(longlong * )(param_1 + 0x20) + 400);
        if (*(ulonglong * )(*(longlong * )(lVar3 + 0x20) + 0x70) <=
            *(ulonglong * )(*(longlong * )(lVar3 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar3);
        }
        if (*(longlong * )(lVar3 + 0x28) == *(longlong * )(lVar3 + 0x50)) {
            uVar17 = *(undefined8 * )(lVar3 + 0x78);
        } else {
            uVar17 = *(undefined8 * )(**(longlong * *)(*(longlong * )(lVar3 + 0x28) + 8) + 0x18);
        }
        lVar16 = FUN_140060ab0(lVar3, 0, uVar17);
        uVar45 = 0;
        uVar13 = 0;
        *(code * *)(lVar16 + 0x20) = FUN_1400f3ff0;
        plVar18 = *(longlong * *)(lVar3 + 0x10);
        *plVar18 = lVar16;
        *(undefined4 * )(plVar18 + 1) = 6;
        *(longlong * )(lVar3 + 0x10) = *(longlong * )(lVar3 + 0x10) + 0x10;
        puVar21 = *(undefined8 * *)(lVar3 + 0x10);
        iVar14 = *(int *) (param_1 + 0x408);
        uVar24 = (longlong) puVar21 - *(longlong * )(lVar3 + 0x18) >> 4;
        lVar16 = *(longlong * )(*(longlong * )(lVar3 + 0x20) + 0xa0);
        if (iVar14 - 1U < *(uint * )(lVar16 + 0x38)) {
            puVar19 = (undefined8 * )((longlong)(iVar14 + -1) * 0x10 + *(longlong * )(lVar16 + 0x18));
        } else {
            local_res8 = (double) iVar14;
            if (local_res8 == 0.0) {
                puVar19 = *(undefined8 * *)(lVar16 + 0x20);
            } else {
                local_res8._4_4_ = (int) ((ulonglong) local_res8 >> 0x20);
                puVar19 = (undefined8 * )
                        (*(longlong * )(lVar16 + 0x20) +
                         ((longlong)(ulonglong)(uint)(local_res8._4_4_ + (int) local_res8) %
                          (longlong)((1 << (*(byte * )(lVar16 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
            }
            do {
                if ((*(int *) (puVar19 + 3) == 3) && (local_res8 == (double) puVar19[2])) goto LAB_14012934b;
                puVar19 = (undefined8 *) puVar19[4];
            } while (puVar19 != (undefined8 *) 0x0);
            puVar19 = &DAT_140a12138;
        }
        LAB_14012934b:
        *puVar21 = *puVar19;
        *(undefined4 * )(puVar21 + 1) = *(undefined4 * )(puVar19 + 1);
        *(longlong * )(lVar3 + 0x10) = *(longlong * )(lVar3 + 0x10) + 0x10;
        FUN_1400d62a0(lVar3, param_1);
        puVar28 = (&PTR_DAT_140c2c4d0)[iVar31];
        if (puVar28 == (undefined *) 0x0) {
            *(undefined4 * )(*(longlong * )(lVar3 + 0x10) + 8) = 0;
            *(longlong * )(lVar3 + 0x10) = *(longlong * )(lVar3 + 0x10) + 0x10;
        } else {
            lVar16 = -1;
            do {
                lVar16 = lVar16 + 1;
            } while (puVar28[lVar16] != '\0');
            if (*(ulonglong * )(*(longlong * )(lVar3 + 0x20) + 0x70) <=
                *(ulonglong * )(*(longlong * )(lVar3 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar3);
            }
            puVar21 = *(undefined8 * *)(lVar3 + 0x10);
            uVar17 = FUN_140062650(lVar3, puVar28, lVar16);
            *(undefined4 * )(puVar21 + 1) = 4;
            *puVar21 = uVar17;
            *(longlong * )(lVar3 + 0x10) = *(longlong * )(lVar3 + 0x10) + 0x10;
        }
        if (*(ulonglong * )(*(longlong * )(lVar3 + 0x20) + 0x70) <=
            *(ulonglong * )(*(longlong * )(lVar3 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar3);
        }
        puVar21 = *(undefined8 * *)(lVar3 + 0x10);
        uVar17 = FUN_14005c1b0(lVar3, 0, 0);
        *(undefined4 * )(puVar21 + 1) = 5;
        *puVar21 = uVar17;
        *(longlong * )(lVar3 + 0x10) = *(longlong * )(lVar3 + 0x10) + 0x10;
        if (iVar31 == 0x20) {
            if (*(ulonglong * )(*(longlong * )(lVar3 + 0x20) + 0x70) <=
                *(ulonglong * )(*(longlong * )(lVar3 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar3);
            }
            puVar21 = *(undefined8 * *)(lVar3 + 0x10);
            uVar17 = FUN_140062650(lVar3, "Button", 6);
            *(undefined4 * )(puVar21 + 1) = 4;
            *puVar21 = uVar17;
            *(longlong * )(lVar3 + 0x10) = *(longlong * )(lVar3 + 0x10) + 0x10;
            lVar16 = FUN_1401299a0(param_1, param_3);
            if (lVar16 == 0) {
                *(undefined4 * )(*(longlong * )(lVar3 + 0x10) + 8) = 0;
                *(longlong * )(lVar3 + 0x10) = *(longlong * )(lVar3 + 0x10) + 0x10;
            } else {
                lVar25 = -1;
                do {
                    lVar25 = lVar25 + 1;
                } while (*(char *) (lVar16 + lVar25) != '\0');
                if (*(ulonglong * )(*(longlong * )(lVar3 + 0x20) + 0x70) <=
                    *(ulonglong * )(*(longlong * )(lVar3 + 0x20) + 0x78)) {
                    FUN_14005e2c0(lVar3);
                }
                puVar21 = *(undefined8 * *)(lVar3 + 0x10);
                uVar17 = FUN_140062650(lVar3, lVar16, lVar25);
                *(undefined4 * )(puVar21 + 1) = 4;
                *puVar21 = uVar17;
                *(longlong * )(lVar3 + 0x10) = *(longlong * )(lVar3 + 0x10) + 0x10;
            }
            lVar16 = *(longlong * )(lVar3 + 0x10);
            FUN_14005ea50(lVar3, &DAT_ffffffffffffffd0 + lVar16, lVar16 + -0x20, lVar16 + -0x10);
            *(longlong * )(lVar3 + 0x10) = *(longlong * )(lVar3 + 0x10) + -0x20;
            if (*(ulonglong * )(*(longlong * )(lVar3 + 0x20) + 0x70) <=
                *(ulonglong * )(*(longlong * )(lVar3 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar3);
            }
            puVar21 = *(undefined8 * *)(lVar3 + 0x10);
            uVar17 = FUN_140062650(lVar3, "Value", 5);
            *(undefined4 * )(puVar21 + 1) = 4;
            *puVar21 = uVar17;
            *(longlong * )(lVar3 + 0x10) = *(longlong * )(lVar3 + 0x10) + 0x10;
            LAB_140129531:
            uVar1 = *(undefined4 * )(param_1 + 0x410);
            uVar17 = CONCAT44(uVar1, uVar1);
            auVar37 = CONCAT48(uVar1, uVar17);
            auVar39 = CONCAT97((unkuint9)
                                       SUB157(CONCAT69(SUB156(CONCAT510(SUB155(CONCAT411(SUB154(CONCAT312(SUB153(
                                                                                                                  CONCAT213(SUB152(CONCAT114((char) ((uint) uVar1 >>
                                                                                                                                                                  0x18),
                                                                                                                                             ZEXT1314(SUB1613(
                                                                                                                                                     CONCAT412(uVar1, auVar37), 0)))
                                                                                                                                           >> 0x68, 0),
                                                                                                                            CONCAT112((char) ((uint) uVar1 >> 0x10), auVar37)) >>
                                                                                                                                                                               0x60, 0),
                                                                                                          auVar37)
                                                                                                        >> 0x58, 0),
                                                                                         CONCAT110((char) ((uint) uVar1
                                                                                                           >> 8),
                                                                                                   SUB1210(auVar37, 0)))
                                                                                       >> 0x50, 0),
                                                                        (unkuint10) SUB129(auVar37, 0)) >> 0x48, 0),
                                                       CONCAT18((char) uVar1, uVar17)) >> 0x40, 0) << 8,
                               ((uint7) uVar17 >> 0x18) << 0x30);
            auVar38 = CONCAT115(ZEXT1011(SUB1610(auVar39 >> 0x30, 0)) << 8, ((uint5) uVar17 >> 0x10) << 0x20);
            auVar32 = CONCAT142(SUB1614(CONCAT133(ZEXT1213(SUB1612(auVar38 >> 0x20, 0)) << 8,
                                                  ((uint3) uVar1 >> 8) << 0x10) >> 0x10, 0), (short) uVar1) &
                      (undefined[16]) 0xffffffffffff00ff;
            uVar40 = SUB162(auVar39 >> 0x30, 0);
            uVar10 = CONCAT42(SUB144(CONCAT212(uVar40, ZEXT1012(SUB1610(auVar32, 0))) >> 0x50, 0),
                              SUB162(auVar38 >> 0x20, 0));
            fVar41 = (float) (int) uVar10 * 0.003921569;
            fVar42 = (float) SUB164(CONCAT106((unkuint10) uVar10 << 0x10, (SUB166(auVar32, 0) >> 0x10) << 0x20
            ) >> 0x20, 0) * 0.003921569;
            fVar43 = (float) (SUB164(auVar32, 0) & 0xffff) * 0.003921569;
            fVar44 = (float) (uint) uVar40 * 0.003921569;
            if (*(ulonglong * )(*(longlong * )(lVar3 + 0x20) + 0x70) <=
                *(ulonglong * )(*(longlong * )(lVar3 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar3);
            }
            if (*(longlong * )(lVar3 + 0x28) == *(longlong * )(lVar3 + 0x50)) {
                uVar17 = *(undefined8 * )(lVar3 + 0x78);
            } else {
                uVar17 = *(undefined8 * )(**(longlong * *)(*(longlong * )(lVar3 + 0x28) + 8) + 0x18);
            }
            lVar16 = FUN_1400627d0(lVar3, 0x10, uVar17);
            plVar18 = *(longlong * *)(lVar3 + 0x10);
            *plVar18 = lVar16;
            *(undefined4 * )(plVar18 + 1) = 7;
            *(longlong * )(lVar3 + 0x10) = *(longlong * )(lVar3 + 0x10) + 0x10;
            *(undefined(*)[16])(lVar16 + 0x30) =
                    CONCAT412(fVar44, CONCAT48(fVar43, CONCAT44(fVar42, fVar41)));
            lVar16 = *(longlong * )(lVar3 + 0x20);
            local_c0 = (undefined *) FUN_140062650(lVar3, "CColor", 6);
            local_b8 = 4;
            FUN_14005e8e0(lVar3, lVar16 + 0xa0, &local_c0, *(undefined8 * )(lVar3 + 0x10));
            *(longlong * )(lVar3 + 0x10) = *(longlong * )(lVar3 + 0x10) + 0x10;
            FUN_140058bf0(lVar3, 0xfffffffe);
            lVar16 = *(longlong * )(lVar3 + 0x10);
            FUN_14005ea50(lVar3, &DAT_ffffffffffffffd0 + lVar16, lVar16 + -0x20, lVar16 + -0x10);
            *(longlong * )(lVar3 + 0x10) = *(longlong * )(lVar3 + 0x10) + -0x20;
        } else if (iVar31 == 0x4a) {
            FUN_140058710(lVar3, "Value", 5);
            goto LAB_140129531;
        }
        lVar25 = 0;
        iVar14 = *(int *) (param_1 + 0x40c);
        lVar16 = *(longlong * )(*(longlong * )(lVar3 + 0x20) + 0xa0);
        if (iVar14 - 1U < *(uint * )(lVar16 + 0x38)) {
            puVar21 = (undefined8 * )((longlong)(iVar14 + -1) * 0x10 + *(longlong * )(lVar16 + 0x18));
        } else {
            local_res8 = (double) iVar14;
            if (local_res8 == (double) CONCAT44(uVar13, uVar45)) {
                puVar21 = *(undefined8 * *)(lVar16 + 0x20);
            } else {
                local_res8._4_4_ = (int) ((ulonglong) local_res8 >> 0x20);
                puVar21 = (undefined8 * )
                        (*(longlong * )(lVar16 + 0x20) +
                         ((longlong)(ulonglong)(uint)(local_res8._4_4_ + (int) local_res8) %
                          (longlong)((1 << (*(byte * )(lVar16 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
            }
            do {
                if ((*(int *) (puVar21 + 3) == 3) && (local_res8 == (double) puVar21[2])) goto LAB_1401296a5;
                puVar21 = (undefined8 *) puVar21[4];
            } while (puVar21 != (undefined8 *) 0x0);
            puVar21 = &DAT_140a12138;
        }
        LAB_1401296a5:
        puVar19 = *(undefined8 * *)(lVar3 + 0x10);
        *puVar19 = *puVar21;
        *(undefined4 * )(puVar19 + 1) = *(undefined4 * )(puVar21 + 1);
        *(longlong * )(lVar3 + 0x10) = *(longlong * )(lVar3 + 0x10) + 0x10;
        lVar16 = lVar25;
        if ((int) uVar24 != 0) {
            lVar16 = FUN_1400580e0(lVar3, uVar24 & 0xffffffff);
            lVar16 = lVar16 - *(longlong * )(lVar3 + 0x40);
        }
        local_c0 = &DAT_ffffffffffffffb0 + *(longlong * )(lVar3 + 0x10);
        local_b8 = 0;
        iVar14 = FUN_140061fb0(lVar3, &LAB_140058db0, &local_c0,
                               (longlong) local_c0 - *(longlong * )(lVar3 + 0x40), lVar16);
        uVar45 = (undefined4)((ulonglong) lVar16 >> 0x20);
        in_XMM0 = extraout_XMM0_03;
        if (iVar14 != 0) {
            local_a8 = 0;
            local_b0 = &PTR_LAB_140b5e648;
            local_a0 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_b0);
            plVar18 = (longlong * )(*(longlong * )(lVar3 + 0x10) + -0x10);
            local_98[0] = local_b0;
            local_98[1] = (undefined **) local_a8;
            local_88 = local_a0;
            if (*(int *) (*(longlong * )(lVar3 + 0x10) + -8) == 4) {
                LAB_140129795:
                lVar25 = *plVar18 + 0x20;
                if (lVar25 == 0) goto LAB_14012979e;
            } else {
                iVar14 = FUN_14005e620(lVar3, plVar18);
                if (iVar14 != 0) {
                    if (*(ulonglong * )(*(longlong * )(lVar3 + 0x20) + 0x70) <=
                        *(ulonglong * )(*(longlong * )(lVar3 + 0x20) + 0x78)) {
                        FUN_14005e2c0(lVar3);
                    }
                    plVar18 = (longlong * )(*(longlong * )(lVar3 + 0x10) + -0x10);
                    goto LAB_140129795;
                }
                LAB_14012979e:
                if ((*(undefined * *)(lVar3 + 0x10) == &DAT_140a12148) ||
                    (iVar14 = *(int *) (*(undefined * *)(lVar3 + 0x10) + -8), iVar14 == -1)) {
                    pcVar29 = s_no_value_140c1dc88;
                } else {
                    pcVar29 = (&PTR_DAT_140a123b0)[iVar14];
                }
                uVar17 = FUN_140058780(lVar3, s__s_expected__got__s_140c1db70, s_string_140c1de94, pcVar29);
                FUN_140056570(lVar3, 0xffffffff, uVar17);
            }
            local_res8 = (double) (lVar25 + 0x12fa640);
            iVar14 = FUN_140196f30(&DAT_140c8a120, 0xd, &local_res8);
            local_b0 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720, local_a0);
            in_XMM0 = extraout_XMM0_04;
            if (iVar14 != 0) {
                DebugBreak();
                in_XMM0 = extraout_XMM0_05;
            }
        }
        *(longlong * )(lVar3 + 0x10) = *(longlong * )(lVar3 + 0x10) + -0x10;
    }
    if (*(longlong * )(param_1 + 0x400) == 0) {
        if (iVar31 != 0x20) {
            return;
        }
        goto LAB_14012996a;
    }
    if (iVar31 != 0x20) {
        return;
    }
    if (param_3 == *(undefined * **)(param_1 + 0x4c8)) {
        uVar45 = 0;
        FUN_1400d4070(*(longlong * )(param_1 + 0x400), 0x1e, param_1, &DAT_1409d7e9c, 0);
        in_XMM0 = extraout_XMM0_06;
    }
    lVar3 = DAT_140c63678;
    if (param_3 != *(undefined * **)(param_1 + 0x4d0)) goto LAB_14012996a;
    uVar22 = *(uint * )(*(longlong * )(param_1 + 0x438) + 0x2c8);
    uVar24 = (ulonglong) uVar22;
    if (uVar24 < *(ulonglong * )(DAT_140c63678 + 0x30)) {
        lVar16 = (ulonglong) uVar22 * 0x20;
        iVar31 = *(int *) (lVar16 + 0x10 + *(longlong * )(DAT_140c63678 + 0x28));
        if (iVar31 - 1U < 0xfffffffe) {
            *(int *) (lVar16 + 0x10 + *(longlong * )(DAT_140c63678 + 0x28)) = iVar31 + 1;
        }
        if (*(ulonglong * )(lVar3 + 0x30) <= uVar24) goto LAB_1401298fe;
        pauVar20 = (undefined(*)[16])(uVar24 * 0x20 + *(longlong * )(lVar3 + 0x28));
    } else {
        LAB_1401298fe:
        pauVar20 = *(undefined(**)[16])(lVar3 + 0x28);
    }
    auVar32 = maxps(in_XMM0 & (undefined[16]) 0x0, *pauVar20);
    auVar32 = minps(auVar32, _DAT_140b7b240);
    iVar31 = (int) (SUB164(auVar32, 0) * 255.0 + 0.5);
    iVar14 = (int) (SUB164(auVar32 >> 0x20, 0) * 255.0 + 0.5);
    iVar33 = (int) (SUB164(auVar32 >> 0x40, 0) * 255.0 + 0.5);
    iVar34 = (int) (SUB164(auVar32 >> 0x60, 0) * 255.0 + 0.5);
    sVar7 = (short) iVar33;
    cVar12 = (0 < sVar7) * (sVar7 < 0xff) * (char) iVar33 - (0xff < sVar7);
    sVar7 = (short) ((uint) iVar33 >> 0x10);
    sVar35 = CONCAT11((0 < sVar7) * (sVar7 < 0xff) * (char) ((uint) iVar33 >> 0x10) - (0xff < sVar7),
                      cVar12);
    sVar7 = (short) iVar14;
    cVar4 = (0 < sVar7) * (sVar7 < 0xff) * (char) iVar14 - (0xff < sVar7);
    sVar7 = (short) ((uint) iVar14 >> 0x10);
    uVar13 = CONCAT13((0 < sVar7) * (sVar7 < 0xff) * (char) ((uint) iVar14 >> 0x10) - (0xff < sVar7),
                      CONCAT12(cVar4, sVar35));
    sVar7 = (short) iVar31;
    cVar5 = (0 < sVar7) * (sVar7 < 0xff) * (char) iVar31 - (0xff < sVar7);
    sVar7 = (short) ((uint) iVar31 >> 0x10);
    uVar36 = CONCAT15((0 < sVar7) * (sVar7 < 0xff) * (char) ((uint) iVar31 >> 0x10) - (0xff < sVar7),
                      CONCAT14(cVar5, uVar13));
    sVar7 = (short) iVar34;
    cVar6 = (0 < sVar7) * (sVar7 < 0xff) * (char) iVar34 - (0xff < sVar7);
    sVar9 = (short) ((uint) iVar34 >> 0x10);
    sVar7 = (short) ((uint) uVar13 >> 0x10);
    sVar8 = (short) ((uint6) uVar36 >> 0x20);
    sVar9 = (short) (CONCAT17((0 < sVar9) * (sVar9 < 0xff) * (char) ((uint) iVar34 >> 0x10) -
                              (0xff < sVar9), CONCAT16(cVar6, uVar36)) >> 0x30);
    *(uint * )(param_1 + 0x410) =
            CONCAT13((0 < sVar9) * (sVar9 < 0xff) * cVar6 - (0xff < sVar9),
                     CONCAT12((0 < sVar8) * (sVar8 < 0xff) * cVar5 - (0xff < sVar8),
                              CONCAT11((0 < sVar7) * (sVar7 < 0xff) * cVar4 - (0xff < sVar7),
                                       (0 < sVar35) * (sVar35 < 0xff) * cVar12 - (0xff < sVar35))));
    FUN_1401429a0(lVar3);
    FUN_1400d4070(*(undefined8 * )(param_1 + 0x400), 0x1e, param_1, &DAT_1409d7eec, CONCAT44(uVar45, 1));
    LAB_14012996a:
    if ((param_3 == *(undefined * **)(param_1 + 0x4c8)) ||
        (param_3 == *(undefined * **)(param_1 + 0x4d0))) {
        FUN_1400c6b20(param_1);
    }
    // WARNING: Read-only address (ram,0x000140b7b240) is written
    return;
}


undefined *FUN_1401299a0(longlong param_1, longlong param_2) {
    uint uVar1;
    ulonglong uVar2;
    undefined *puVar3;
    int *piVar4;

    if (param_2 != *(longlong * )(param_1 + 0x4c8)) {
        if (param_2 == *(longlong * )(param_1 + 0x4d0)) {
            puVar3 = (undefined *) FUN_1400e8dd0(1);
            return puVar3;
        }
        return &DAT_1409d050f;
    }
    uVar2 = 0;
    piVar4 = &DAT_140c2c750;
    do {
        if (*piVar4 == 0) {
            return (&PTR_s_DC_Ok_140c2c758)[uVar2 * 2];
        }
        uVar1 = (int) uVar2 + 1;
        uVar2 = (ulonglong) uVar1;
        piVar4 = piVar4 + 4;
    } while (uVar1 < 6);
    FUN_1400efdd0(&DAT_140c8e080, 0x40, "DC_Missing_%d");
    return &DAT_140c8e080;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8
FUN_140129a40(undefined8 param_1, longlong param_2, undefined (*param_3)[16], undefined8 param_4,
              undefined4 param_5, undefined4 param_6) {
    char cVar1;
    short sVar5;
    short sVar6;
    short sVar7;
    short sVar8;
    ulonglong uVar9;
    unkbyte10 Var10;
    undefined auVar11[12];
    undefined auVar12[14];
    short sVar13;
    undefined4 uVar14;
    undefined6 uVar15;
    ulonglong uVar16;
    longlong lVar17;
    undefined8 uVar18;
    int iVar19;
    uint uVar21;
    int iVar22;
    undefined extraout_XMM0[16];
    undefined extraout_XMM0_00[16];
    undefined auVar20[16];
    int iVar23;
    char cVar24;
    char cVar25;
    char cVar2;
    char cVar3;
    char cVar4;

    lVar17 = FUN_14018b280(0x510, 0);
    if (lVar17 == 0) {
        uVar18 = 0;
        auVar20 = extraout_XMM0;
    } else {
        uVar18 = FUN_140124e00(lVar17, param_1, param_5, param_6);
        auVar20 = extraout_XMM0_00;
    }
    if (param_2 == 0) {
        return 0;
    }
    auVar20 = maxps(auVar20 & (undefined[16]) 0x0, *param_3);
    auVar20 = minps(auVar20, _DAT_140b7b240);
    iVar19 = (int) (SUB164(auVar20, 0) * 255.0 + 0.5);
    uVar21 = (uint)(SUB164(auVar20 >> 0x20, 0) * 255.0 + 0.5);
    iVar22 = (int) (SUB164(auVar20 >> 0x40, 0) * 255.0 + 0.5);
    iVar23 = (int) (SUB164(auVar20 >> 0x60, 0) * 255.0 + 0.5);
    cVar24 = (char) ((uint) iVar19 >> 0x10);
    cVar25 = (char) ((uint) iVar23 >> 0x10);
    uVar16 = (ulonglong)
            CONCAT16((char) (uVar21 >> 0x10),
                     CONCAT15((char) (uVar21 >> 8), CONCAT14((char) uVar21, iVar22)));
    uVar9 = ((ulonglong) uVar21 & 0xff000000) << 0x20 | uVar16;
    Var10 = CONCAT19((char) ((uint) iVar19 >> 8), CONCAT18((char) iVar19, uVar9));
    auVar11 = CONCAT111((char) ((uint) iVar19 >> 0x18), CONCAT110(cVar24, Var10));
    auVar12 = CONCAT113((char) ((uint) iVar23 >> 8), CONCAT112((char) iVar23, auVar11));
    sVar5 = (short) iVar22;
    cVar1 = (0 < sVar5) * (sVar5 < 0xff) * (char) iVar22 - (0xff < sVar5);
    sVar5 = (short) (uVar16 >> 0x10);
    sVar6 = (short) (uVar16 >> 0x20);
    cVar2 = (0 < sVar6) * (sVar6 < 0xff) * (char) (uVar16 >> 0x20) - (0xff < sVar6);
    sVar6 = (short) (uVar9 >> 0x30);
    sVar7 = (short) ((unkuint10) Var10 >> 0x40);
    cVar3 = (0 < sVar7) * (sVar7 < 0xff) * (char) iVar19 - (0xff < sVar7);
    sVar7 = SUB122(auVar11 >> 0x50, 0);
    sVar8 = SUB142(auVar12 >> 0x60, 0);
    cVar4 = (0 < sVar8) * (sVar8 < 0xff) * (char) iVar23 - (0xff < sVar8);
    sVar8 = SUB162(CONCAT115((char) ((uint) iVar23 >> 0x18), CONCAT114(cVar25, auVar12)) >> 0x70, 0);
    sVar13 = CONCAT11((0 < sVar5) * (sVar5 < 0xff) * (char) (uVar16 >> 0x10) - (0xff < sVar5), cVar1);
    uVar14 = CONCAT13((0 < sVar6) * (sVar6 < 0xff) * (char) (uVar16 >> 0x30) - (0xff < sVar6),
                      CONCAT12(cVar2, sVar13));
    uVar15 = CONCAT15((0 < sVar7) * (sVar7 < 0xff) * cVar24 - (0xff < sVar7), CONCAT14(cVar3, uVar14));
    sVar5 = (short) ((uint) uVar14 >> 0x10);
    sVar6 = (short) ((uint6) uVar15 >> 0x20);
    sVar7 = (short) (CONCAT17((0 < sVar8) * (sVar8 < 0xff) * cVar25 - (0xff < sVar8),
                              CONCAT16(cVar4, uVar15)) >> 0x30);
    FUN_140128320(uVar18, *(undefined8 * )(param_2 + 0x20), param_2,
                  CONCAT13((0 < sVar7) * (sVar7 < 0xff) * cVar4 - (0xff < sVar7),
                           CONCAT12((0 < sVar6) * (sVar6 < 0xff) * cVar3 - (0xff < sVar6),
                                    CONCAT11((0 < sVar5) * (sVar5 < 0xff) * cVar2 - (0xff < sVar5),
                                             (0 < sVar13) * (sVar13 < 0xff) * cVar1 - (0xff < sVar13))
                           )));
    return uVar18;
}


undefined8 *FUN_140129af0(undefined8 *param_1, short *param_2) {
    short sVar1;
    undefined2 *puVar2;
    longlong lVar3;

    *(undefined4 * )(param_1 + 1) = 1;
    *param_1 = &PTR_FUN_140b57c40;
    FUN_1401a72e0(param_1 + 2);
    lVar3 = 0;
    param_1[0x55] = 0;
    param_1[0x56] = 0;
    param_1[0x57] = 0;
    param_1[0x58] = 0;
    param_1[0x53] = 0;
    *(undefined4 * )(param_1 + 0x54) = 0;
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    puVar2 = (undefined2 *) FUN_14018b280(0x10, 0);
    param_1[0x5a] = puVar2;
    param_1[0x5b] = puVar2;
    param_1[0x5c] = puVar2 + 8;
    if (puVar2 != (undefined2 *) 0x0) {
        *puVar2 = 0;
    }
    param_1[0x5d] = 0;
    param_1[0x5e] = 0;
    *(undefined4 * )(param_1 + 0x5f) = 1;
    param_1[0x60] = 0;
    *(undefined4 * )(param_1 + 0x61) = 0x8000000a;
    param_1[100] = 0;
    param_1[0x65] = 0;
    param_1[0x67] = 0;
    param_1[0x68] = 0;
    *(undefined4 * )(param_1 + 0x62) = 0x544e5645;
    *(undefined4 * )((longlong) param_1 + 0x354) = 0;
    param_1[0x6c] = 0;
    param_1[0x6b] = 0;
    if (param_2 != (short *) 0x0) {
        sVar1 = *param_2;
        while (sVar1 != 0) {
            lVar3 = lVar3 + 1;
            sVar1 = param_2[lVar3];
        }
        FUN_14001c480(param_1 + 0x59, param_2, param_2 + lVar3);
        FUN_140129f70(param_1, param_2);
    }
    param_1[0x52] = 0;
    return param_1;
}


void FUN_140129c40(undefined8 *param_1) {
    undefined8 *puVar1;
    int iVar2;
    longlong **pplVar3;
    longlong *plVar4;
    longlong lVar5;
    int iVar6;
    ulonglong uVar7;

    *param_1 = &PTR_FUN_140b57c40;
    if (DAT_140c63650 != 0) {
        FUN_1400e2a10();
    }
    uVar7 = 0;
    if (param_1[0x6c] != 0) {
        do {
            pplVar3 = *(longlong * **)(param_1[0x6b] + uVar7 * 8);
            plVar4 = *pplVar3;
            if (plVar4 != (longlong *) 0x0) {
                (**(code * *)(*plVar4 + 8))();
                *pplVar3 = (longlong *) 0x0;
            }
            lVar5 = *(longlong * )(param_1[0x6b] + uVar7 * 8);
            if (lVar5 != 0) {
                if (*(longlong * )(lVar5 + 0x10) != 0) {
                    FUN_14018b900();
                }
                FUN_14018b900(lVar5);
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < (ulonglong) param_1[0x6c]);
    }
    param_1[0x6c] = 0;
    lVar5 = param_1[0x6b];
    if (lVar5 != 0) {
        (**(code * *)(*(longlong * )(lVar5 + -0x10) + 8))(lVar5 + -0x10);
    }
    FUN_140195d70(param_1 + 0x62);
    *(undefined4 * )(param_1 + 0x62) = 0;
    if ((undefined8 *) param_1[100] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[100] = param_1[0x65];
    }
    if ((undefined8 *) param_1[0x65] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x65] = param_1[100];
    }
    param_1[100] = 0;
    param_1[0x65] = 0;
    lVar5 = param_1[0x60];
    do {
        if (lVar5 == 0) {
            if ((longlong *) param_1[0x5e] != (longlong *) 0x0) {
                (**(code * *)(*(longlong *) param_1[0x5e] + 8))();
            }
            if ((longlong *) param_1[0x5d] != (longlong *) 0x0) {
                (**(code * *)(*(longlong *) param_1[0x5d] + 8))();
            }
            if (param_1[0x5a] != 0) {
                FUN_14018b900(param_1[0x5a], 0);
            }
            if ((undefined8 *) param_1[0x57] != (undefined8 *) 0x0) {
                *(undefined8 *) param_1[0x57] = param_1[0x58];
            }
            if (param_1[0x58] != 0) {
                *(undefined8 * )(param_1[0x58] + 0x20) = param_1[0x57];
            }
            param_1[0x57] = 0;
            param_1[0x58] = 0;
            if ((undefined8 *) param_1[0x55] != (undefined8 *) 0x0) {
                *(undefined8 *) param_1[0x55] = param_1[0x56];
            }
            if (param_1[0x56] != 0) {
                *(undefined8 * )(param_1[0x56] + 0x10) = param_1[0x55];
            }
            param_1[0x55] = 0;
            param_1[0x56] = 0;
            FUN_1401a76a0(param_1 + 2);
            return;
        }
        iVar2 = *(int *) (param_1 + 0x5f);
        while (iVar2 != 0) {
            LOCK();
            puVar1 = param_1 + 0x5f;
            if (iVar2 == *(int *) puVar1) {
                *(int *) puVar1 = iVar2 + -1;
                iVar6 = iVar2;
            } else {
                iVar6 = *(int *) puVar1;
            }
            if (iVar2 == iVar6) {
                if ((iVar2 + -1 == 0) && ((longlong *) param_1[0x60] != (longlong *) 0x0)) {
                    (**(code * *)(*(longlong *) param_1[0x60] + 8))();
                    param_1[0x60] = 0;
                }
                break;
            }
            iVar2 = *(int *) (param_1 + 0x5f);
        }
        lVar5 = param_1[0x60];
    } while (true);
}


int FUN_140129e70(longlong param_1) {
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *) (param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    if (iVar2 + 1 == 1) {
        FUN_1401984d0(param_1 + 0x298);
    }
    return iVar2 + 1;
}


int FUN_140129ea0(longlong param_1) {
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *) (param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == -1) {
        if (param_1 != 0) {
            FUN_140129c40();
            FUN_14018b900(param_1, 0);
        }
        return 0;
    }
    if (iVar2 == 0) {
        if (DAT_140c63650 != 0) {
            FUN_140198370(param_1 + 0x298, param_1, DAT_140c63650 + 0x7c8);
            return 0;
        }
        if (param_1 != 0) {
            FUN_140129c40();
            FUN_14018b900(param_1, 0);
        }
    }
    return iVar2;
}


longlong FUN_140129f40(longlong param_1) {
    undefined4 local_18[4];

    local_18[0] = 0xffffffff;
    FUN_14012a290(param_1, local_18);
    return param_1 + 0x10;
}



// WARNING: Removing unreachable block (ram,0x00014012a03f)

int FUN_140129f70(longlong param_1, short *param_2) {
    short sVar1;
    int iVar2;
    longlong lVar3;
    short *psVar4;
    undefined8 uVar5;
    undefined4 local_38;
    undefined4 local_34;
    longlong local_30;
    code *local_28;
    undefined8 local_20;
    undefined4 local_18;

    psVar4 = (short *) &DAT_1409d833c;
    if (param_2 != (short *) 0x0) {
        psVar4 = param_2;
    }
    lVar3 = 0;
    sVar1 = *psVar4;
    while (sVar1 != 0) {
        lVar3 = lVar3 + 1;
        sVar1 = psVar4[lVar3];
    }
    FUN_14001c480(param_1 + 0x2c8, psVar4, psVar4 + lVar3);
    uVar5 = 0;
    iVar2 = FUN_1401b6de0();
    if (-1 < iVar2) {
        local_28 = FUN_14012a120;
        local_38 = 0xc;
        local_34 = 1;
        local_20 = 0;
        local_18 = 1;
        local_30 = param_1;
        iVar2 = FUN_14019dca0(&local_38, 0, 0, param_1 + 0x300, uVar5);
        if (-1 < iVar2) {
            return iVar2;
        }
    }
    iVar2 = FUN_14012a060(param_1, iVar2);
    return iVar2;
}


undefined4 FUN_14012a060(longlong param_1, undefined4 param_2) {
    int *piVar1;
    int iVar2;
    int iVar3;

    if (*(longlong * *)(param_1 + 0x2e8) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x2e8) + 8))();
        *(undefined8 * )(param_1 + 0x2e8) = 0;
    }
    if (*(longlong * *)(param_1 + 0x2f0) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x2f0) + 8))();
        *(undefined8 * )(param_1 + 0x2f0) = 0;
    }
    *(undefined4 * )(param_1 + 0x308) = param_2;
    iVar3 = *(int *) (param_1 + 0x2f8);
    if (iVar3 != 0) {
        while (true) {
            LOCK();
            piVar1 = (int *) (param_1 + 0x2f8);
            if (iVar3 == *piVar1) {
                *piVar1 = iVar3 + -1;
                iVar2 = iVar3;
            } else {
                iVar2 = *piVar1;
            }
            if (iVar3 == iVar2) break;
            iVar3 = *(int *) (param_1 + 0x2f8);
            if (iVar3 == 0) {
                return param_2;
            }
        }
        if ((iVar3 + -1 == 0) && (*(longlong * *)(param_1 + 0x300) != (longlong *) 0x0)) {
            (**(code * *)(**(longlong * *)(param_1 + 0x300) + 8))();
            *(undefined8 * )(param_1 + 0x300) = 0;
        }
    }
    return param_2;
}


void FUN_14012a120(longlong param_1) {
    undefined4 uVar1;
    undefined4 local_28[2];
    longlong local_20;
    undefined *local_18;
    undefined8 local_10;

    uVar1 = FUN_1401a7c70(param_1 + 0x10, *(undefined8 * )(param_1 + 0x2f0));
    FUN_14012a060(param_1, uVar1);
    local_28[0] = 0;
    local_10 = 0;
    local_18 = &LAB_14012a180;
    local_20 = param_1;
    FUN_140195960(param_1 + 0x310, 0, local_28, 2);
    return;
}


undefined8 FUN_14012a290(longlong param_1) {
    int *piVar1;
    int iVar2;
    int iVar3;
    int iVar4;

    if (*(longlong * )(param_1 + 0x300) != 0) {
        iVar2 = *(int *) (param_1 + 0x2f8);
        while (iVar2 != 0) {
            LOCK();
            piVar1 = (int *) (param_1 + 0x2f8);
            if (iVar2 == *piVar1) {
                *piVar1 = iVar2 + 1;
                iVar3 = iVar2;
            } else {
                iVar3 = *piVar1;
            }
            if (iVar2 == iVar3) {
                if (*(longlong * *)(param_1 + 0x300) == (longlong *) 0x0) {
                    return 1;
                }
                iVar3 = (**(code * *)(**(longlong * *)(param_1 + 0x300) + 0x20))();
                iVar2 = *(int *) (param_1 + 0x2f8);
                goto joined_r0x00014012a2fc;
            }
            iVar2 = *(int *) (param_1 + 0x2f8);
        }
    }
    return 1;
    joined_r0x00014012a2fc:
    if (iVar2 == 0) {
        LAB_14012a33e:
        if (iVar3 != 0) {
            return 1;
        }
        return 0;
    }
    LOCK();
    piVar1 = (int *) (param_1 + 0x2f8);
    if (iVar2 == *piVar1) {
        *piVar1 = iVar2 + -1;
        iVar4 = iVar2;
    } else {
        iVar4 = *piVar1;
    }
    if (iVar2 == iVar4) {
        if ((iVar2 + -1 == 0) && (*(longlong * *)(param_1 + 0x300) != (longlong *) 0x0)) {
            (**(code * *)(**(longlong * *)(param_1 + 0x300) + 8))();
            *(undefined8 * )(param_1 + 0x300) = 0;
        }
        goto LAB_14012a33e;
    }
    iVar2 = *(int *) (param_1 + 0x2f8);
    goto joined_r0x00014012a2fc;
}


void FUN_14012a350(longlong param_1) {
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 uVar4;
    longlong lVar5;
    undefined8 uVar6;
    longlong lVar7;
    longlong lVar8;
    undefined8 unaff_RBP;
    undefined8 unaff_RSI;
    longlong lVar9;
    uint uVar10;
    undefined8 unaff_R14;
    undefined *puVar11;
    undefined8 uStackX16;
    longlong alStackX24[2];
    undefined8 uStack24;

    uStack24 = 0x14012a35d;
    lVar3 = FUN_1407f0f60();
    lVar3 = -lVar3;
    *(ulonglong * )(&stack0x00004030 + lVar3) =
            DAT_140c0f7b0 ^ (ulonglong)(&stack0xfffffffffffffff0 + lVar3);
    *(undefined8 * )(&stack0x00004070 + lVar3) = unaff_RSI;
    *(undefined8 * )(&stack0x00004040 + lVar3) = unaff_R14;
    *(undefined8 * )((longlong) & uStack24 + lVar3) = 0x14012a397;
    FUN_1407e4830(&stack0x00000030 + lVar3);
    uVar10 = 0;
    lVar8 = 0;
    do {
        uVar10 = uVar10 + 1;
        lVar7 = lVar8 + 0x10;
        *(undefined8 * )(&stack0x00000030 + lVar7 + lVar3 + -0x10) =
                *(undefined8 * )((longlong) & PTR_DAT_140c575a0 + lVar8);
        *(undefined8 * )(&stack0x00000038 + lVar7 + lVar3 + -0x10) =
                *(undefined8 * )((longlong) & PTR_LAB_140c575a8 + lVar8);
        lVar8 = lVar7;
    } while (uVar10 < 0xe);
    lVar8 = *(longlong * )(param_1 + 400);
    *(undefined8 * )((longlong) & uStack24 + lVar3) = 0x14012a3e9;
    FUN_1400569b0(lVar8, "Apollo.XmlDoc");
    puVar1 = *(undefined8 * *)(lVar8 + 0x10);
    *puVar1 = puVar1[-2];
    *(undefined4 * )(puVar1 + 1) = *(undefined4 * )(puVar1 + -1);
    *(longlong * )(lVar8 + 0x10) = *(longlong * )(lVar8 + 0x10) + 0x10;
    lVar7 = *(longlong * )(lVar8 + 0x10);
    *(undefined8 * )((longlong) & uStack24 + lVar3) = 0x14012a418;
    uVar4 = FUN_140062650(lVar8, "__index", 7);
    lVar5 = *(longlong * )(lVar8 + 0x10);
    *(undefined8 * )((longlong) & uStackX16 + lVar3) = uVar4;
    *(undefined4 * )((longlong) alStackX24 + lVar3) = 4;
    *(undefined8 * )((longlong) & uStack24 + lVar3) = 0x14012a43e;
    FUN_14005ea50(lVar8, lVar7 + -0x20, (longlong) & uStackX16 + lVar3, lVar5 + -0x10);
    *(longlong * )(lVar8 + 0x10) = *(longlong * )(lVar8 + 0x10) + -0x10;
    lVar7 = *(longlong * )(&stack0x00000030 + lVar3);
    lVar5 = *(longlong * )(lVar8 + 0x10);
    lVar9 = -1;
    puVar11 = &stack0x00000030 + lVar3;
    if (lVar7 != 0) {
        *(undefined8 * )(&stack0x00004068 + lVar3) = unaff_RBP;
        do {
            uVar4 = *(undefined8 * )(puVar11 + 8);
            if (*(ulonglong * )(*(longlong * )(lVar8 + 0x20) + 0x70) <=
                *(ulonglong * )(*(longlong * )(lVar8 + 0x20) + 0x78)) {
                *(undefined8 * )((longlong) & uStack24 + lVar3) = 0x14012a48a;
                FUN_14005e2c0(lVar8);
            }
            if (*(longlong * )(lVar8 + 0x28) == *(longlong * )(lVar8 + 0x50)) {
                uVar6 = *(undefined8 * )(lVar8 + 0x78);
            } else {
                uVar6 = *(undefined8 * )(**(longlong * *)(*(longlong * )(lVar8 + 0x28) + 8) + 0x18);
            }
            *(undefined8 * )((longlong) & uStack24 + lVar3) = 0x14012a4af;
            lVar5 = FUN_140060ab0(lVar8, 0, uVar6);
            *(undefined8 * )(lVar5 + 0x20) = uVar4;
            plVar2 = *(longlong * *)(lVar8 + 0x10);
            *plVar2 = lVar5;
            *(undefined4 * )(plVar2 + 1) = 6;
            *(longlong * )(lVar8 + 0x10) = *(longlong * )(lVar8 + 0x10) + 0x10;
            *(undefined8 * )((longlong) & uStack24 + lVar3) = 0x14012a4d3;
            uVar4 = FUN_1400580e0(lVar8, 0xfffffffe);
            lVar5 = -1;
            do {
                lVar5 = lVar5 + 1;
            } while (*(char *) (lVar7 + lVar5) != '\0');
            *(undefined8 * )((longlong) & uStack24 + lVar3) = 0x14012a4f5;
            uVar6 = FUN_140062650(lVar8, lVar7);
            lVar7 = *(longlong * )(lVar8 + 0x10);
            *(undefined8 * )((longlong) & uStackX16 + lVar3) = uVar6;
            *(undefined4 * )((longlong) alStackX24 + lVar3) = 4;
            *(undefined8 * )((longlong) & uStack24 + lVar3) = 0x14012a51a;
            FUN_14005ea50(lVar8, uVar4, (longlong) & uStackX16 + lVar3, lVar7 + -0x10);
            *(longlong * )(lVar8 + 0x10) = *(longlong * )(lVar8 + 0x10) + -0x10;
            lVar7 = *(longlong * )(puVar11 + 0x10);
            lVar5 = *(longlong * )(lVar8 + 0x10);
            puVar11 = puVar11 + 0x10;
        } while (lVar7 != 0);
    }
    *(longlong * )(lVar8 + 0x10) = lVar5 + -0x10;
    *(undefined8 * )((longlong) & uStack24 + lVar3) = 0x14012a55a;
    FUN_140057020(lVar8, "XmlDoc", &PTR_DAT_140b57bf0);
    *(undefined8 * )((longlong) & uStack24 + lVar3) = 0x14012a56b;
    lVar7 = FUN_14018f0e0((longlong) & uStackX16 + lVar3, L"__XmlNode");
    if (*(longlong * )(lVar7 + 8) == 0) {
        *(undefined4 * )(*(longlong * )(lVar8 + 0x10) + 8) = 0;
        *(longlong * )(lVar8 + 0x10) = *(longlong * )(lVar8 + 0x10) + 0x10;
    } else {
        lVar5 = -1;
        do {
            lVar5 = lVar5 + 1;
        } while (*(char *) (*(longlong * )(lVar7 + 8) + lVar5) != '\0');
        *(undefined8 * )((longlong) & uStack24 + lVar3) = 0x14012a5a2;
        FUN_140058710(lVar8);
    }
    if (*(longlong * )((longlong) alStackX24 + lVar3) != 0) {
        *(undefined8 * )((longlong) & uStack24 + lVar3) = 0x14012a5b3;
        FUN_14018b900(*(longlong * )((longlong) alStackX24 + lVar3), 0);
    }
    lVar7 = *(longlong * )(lVar8 + 0x10);
    *(undefined8 * )((longlong) & uStack24 + lVar3) = 0x14012a5cc;
    uVar4 = FUN_140062650(lVar8, &DAT_140a205d0, 4);
    lVar5 = *(longlong * )(lVar8 + 0x10);
    *(undefined8 * )((longlong) & uStackX16 + lVar3) = uVar4;
    *(undefined4 * )((longlong) alStackX24 + lVar3) = 4;
    *(undefined8 * )((longlong) & uStack24 + lVar3) = 0x14012a5f2;
    FUN_14005ea50(lVar8, lVar7 + -0x20, (longlong) & uStackX16 + lVar3, lVar5 + -0x10);
    *(longlong * )(lVar8 + 0x10) = *(longlong * )(lVar8 + 0x10) + -0x10;
    *(undefined8 * )((longlong) & uStack24 + lVar3) = 0x14012a608;
    lVar7 = FUN_14018f0e0((longlong) & uStackX16 + lVar3, L"__XmlText");
    lVar7 = *(longlong * )(lVar7 + 8);
    if (lVar7 == 0) {
        *(undefined4 * )(*(longlong * )(lVar8 + 0x10) + 8) = 0;
        *(longlong * )(lVar8 + 0x10) = *(longlong * )(lVar8 + 0x10) + 0x10;
    } else {
        do {
            lVar9 = lVar9 + 1;
        } while (*(char *) (lVar7 + lVar9) != '\0');
        *(undefined8 * )((longlong) & uStack24 + lVar3) = 0x14012a634;
        FUN_140058710(lVar8, lVar7, lVar9);
    }
    if (*(longlong * )((longlong) alStackX24 + lVar3) != 0) {
        *(undefined8 * )((longlong) & uStack24 + lVar3) = 0x14012a64d;
        FUN_14018b900(*(longlong * )((longlong) alStackX24 + lVar3), 0);
    }
    lVar7 = *(longlong * )(lVar8 + 0x10);
    *(undefined8 * )((longlong) & uStack24 + lVar3) = 0x14012a666;
    uVar4 = FUN_140062650(lVar8, &DAT_140a20590, 4);
    lVar5 = *(longlong * )(lVar8 + 0x10);
    *(undefined8 * )((longlong) & uStackX16 + lVar3) = uVar4;
    *(undefined4 * )((longlong) alStackX24 + lVar3) = 4;
    *(undefined8 * )((longlong) & uStack24 + lVar3) = 0x14012a68c;
    FUN_14005ea50(lVar8, lVar7 + -0x20, (longlong) & uStackX16 + lVar3, lVar5 + -0x10);
    *(longlong * )(lVar8 + 0x10) = *(longlong * )(lVar8 + 0x10) + -0x20;
    *(undefined8 * )((longlong) & uStack24 + lVar3) = 0x14012a6a1;
    FUN_1407db4f0(*(ulonglong * )(&stack0x00004030 + lVar3) ^
                  (ulonglong)(&stack0xfffffffffffffff0 + lVar3));
    return;
}


void FUN_14012a6b0(undefined8 param_1, longlong param_2) {
    longlong lVar1;
    undefined8 local_18;
    undefined4 local_10;

    lVar1 = *(longlong * )(param_2 + 0x20);
    local_18 = FUN_140062650(param_2, "Apollo.XmlDoc", 0xd);
    local_10 = 4;
    FUN_14005e8e0(param_2, lVar1 + 0xa0, &local_18, *(undefined8 * )(param_2 + 0x10));
    *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + 0x10;
    FUN_140058bf0(param_2, 0xfffffffe);
    return;
}


undefined8 FUN_14012a720(longlong param_1, longlong *param_2) {
    longlong **pplVar1;

    if (param_2 == (longlong *) 0x0) {
        *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        return 0;
    }
    (**(code * *) * param_2)(param_2);
    pplVar1 = (longlong **) FUN_140059170(param_1, 8);
    *pplVar1 = param_2;
    (**(code * *)(*param_2 + 0x18))(param_2, param_1);
    return 1;
}


undefined8 FUN_14012a790(longlong param_1) {
    longlong lVar1;
    longlong *plVar2;
    longlong **pplVar3;

    lVar1 = FUN_14018b280(0x368, 8);
    if (lVar1 != 0) {
        plVar2 = (longlong *) FUN_140129af0(lVar1, 0);
        if (plVar2 != (longlong *) 0x0) {
            (**(code * *) * plVar2)(plVar2);
            pplVar3 = (longlong **) FUN_140059170(param_1, 8);
            *pplVar3 = plVar2;
            (**(code * *)(*plVar2 + 0x18))(plVar2, param_1);
            (**(code * *)(*plVar2 + 8))(plVar2);
            return 1;
        }
    }
    *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 0;
}


undefined8 FUN_14012a850(longlong param_1) {
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

    plVar3 = *(longlong * *)(param_1 + 0x18);
    plVar4 = *(longlong * *)(param_1 + 0x10);
    plVar6 = &DAT_140a12138;
    if (plVar3 < plVar4) {
        plVar6 = plVar3;
    }
    if (*(int *) (plVar6 + 1) == 2) {
        lVar7 = *plVar6;
        LAB_14012a893:
        if (lVar7 != 0) {
            plVar6 = &DAT_140a12138;
            if (plVar3 < plVar4) {
                plVar6 = plVar3;
            }
            iVar2 = *(int *) (plVar6 + 1);
            if ((iVar2 == 5) || (iVar2 == 7)) {
                lVar7 = *(longlong * )(*plVar6 + 0x10);
            } else {
                lVar7 = *(longlong * )(*(longlong * )(param_1 + 0x20) + 0xe0 + (longlong) iVar2 * 8);
            }
            if (lVar7 != 0) {
                *plVar4 = lVar7;
                *(undefined4 * )(plVar4 + 1) = 5;
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
                lVar7 = *(longlong * )(param_1 + 0x20);
                local_18 = FUN_140062650(param_1, "Apollo.XmlDoc", 0xd);
                local_10 = 4;
                FUN_14005e8e0(param_1, lVar7 + 0xa0, &local_18, *(undefined8 * )(param_1 + 0x10));
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
                lVar7 = *(longlong * )(param_1 + 0x10);
                uVar8 = 0;
                uVar5 = 0;
                puVar1 = (undefined8 * )(lVar7 + -0x20);
                uVar9 = uVar5;
                if (((undefined8 * )(lVar7 + -0x10) != &DAT_140a12138) && (puVar1 != &DAT_140a12138)) {
                    uVar5 = FUN_14005ac20((undefined8 * )(lVar7 + -0x10), puVar1);
                    uVar9 = uVar8;
                }
                *(undefined8 * *)(param_1 + 0x10) = puVar1;
                *(undefined4 * )(&DAT_ffffffffffffffe8 + lVar7) = 1;
                *(uint *) puVar1 = uVar9 & 0xffffff00 | (uint)(uVar5 != 0);
                goto LAB_14012a977;
            }
        }
    } else if (*(int *) (plVar6 + 1) == 7) {
        lVar7 = *plVar6 + 0x30;
        goto LAB_14012a893;
    }
    *(undefined4 *) plVar4 = 0;
    *(undefined4 * )(plVar4 + 1) = 1;
    LAB_14012a977:
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14012a990(longlong param_1, undefined4 param_2) {
    int iVar1;
    char cVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 uVar6;
    undefined8 local_18;
    undefined4 local_10;

    plVar3 = (longlong *) FUN_1400580e0();
    if (*(int *) (plVar3 + 1) == 2) {
        lVar4 = *plVar3;
    } else {
        if (*(int *) (plVar3 + 1) != 7) {
            return 0;
        }
        lVar4 = *plVar3 + 0x30;
    }
    if (lVar4 != 0) {
        plVar3 = (longlong *) FUN_1400580e0(param_1, param_2);
        iVar1 = *(int *) (plVar3 + 1);
        if ((iVar1 == 5) || (iVar1 == 7)) {
            lVar4 = *(longlong * )(*plVar3 + 0x10);
        } else {
            lVar4 = *(longlong * )(*(longlong * )(param_1 + 0x20) + 0xe0 + (longlong) iVar1 * 8);
        }
        if (lVar4 != 0) {
            plVar3 = *(longlong * *)(param_1 + 0x10);
            *plVar3 = lVar4;
            *(undefined4 * )(plVar3 + 1) = 5;
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            lVar4 = *(longlong * )(param_1 + 0x20);
            local_18 = FUN_140062650(param_1, "Apollo.XmlDoc", 0xd);
            local_10 = 4;
            FUN_14005e8e0(param_1, lVar4 + 0xa0, &local_18, *(undefined8 * )(param_1 + 0x10));
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            uVar5 = FUN_1400586a0(param_1, 0xffffffff);
            uVar6 = FUN_1400586a0(param_1, 0xfffffffe);
            cVar2 = FUN_1400e2100(DAT_140c63650, uVar6, uVar5);
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
            if (cVar2 != '\0') {
                plVar3 = (longlong *) FUN_1400580e0(param_1, param_2);
                if (*(int *) (plVar3 + 1) == 2) {
                    return *(undefined8 * ) * plVar3;
                }
                if (*(int *) (plVar3 + 1) == 7) {
                    return *(undefined8 * )(*plVar3 + 0x30);
                }
                return _DAT_00000000;
            }
        }
    }
    return 0;
}


longlong FUN_14012aaf0(undefined8 param_1, undefined4 param_2) {
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    char *pcVar4;

    lVar1 = FUN_14012a990();
    if (lVar1 == 0) {
        puVar2 = (undefined8 *) FUN_1400580e0(param_1, param_2);
        if ((puVar2 == &DAT_140a12138) || (*(int *) (puVar2 + 1) == -1)) {
            pcVar4 = s_no_value_140c1dc88;
        } else {
            pcVar4 = (&PTR_DAT_140a123b0)[*(int *) (puVar2 + 1)];
        }
        uVar3 = FUN_140058780(param_1, s__s_expected__got__s_140c1db70, &DAT_1409d8384, pcVar4);
        FUN_140056570(param_1, param_2, uVar3);
    }
    return lVar1;
}


void FUN_14012ab80(undefined8 param_1) {
    int iVar1;
    undefined4 uVar2;
    longlong lVar3;
    undefined8 uVar4;
    longlong lVar5;
    undefined auStack456[32];
    undefined local_1a8[400];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack456;
    lVar3 = FUN_14012aaf0(param_1, 1);
    if ((lVar3 != 0) && (*(longlong * )(lVar3 + 0x290) == 0)) {
        uVar4 = FUN_1401a7740(lVar3 + 0x10, L"Tooltip");
        *(undefined8 * )(lVar3 + 0x290) = uVar4;
        iVar1 = FUN_140056d60(param_1, 2);
        if (iVar1 != 0) {
            uVar2 = FUN_1400584e0(param_1, 2);
            lVar5 = FUN_1401a6c70(*(undefined8 * )(lVar3 + 0x290), L"Width");
            FUN_1401a4c20(local_1a8, 200, &DAT_1409e41f4, uVar2);
            FUN_1401a4c50(lVar5 + 0x20, local_1a8);
        }
        FUN_1401a5a70(lVar3 + 0x10, *(undefined8 * )(lVar3 + 0x290));
    }
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack456);
    return;
}


undefined8 FUN_14012b2b0(longlong param_1, undefined8 param_2) {
    wchar_t *pwVar1;
    short *psVar2;
    short sVar3;
    longlong lVar4;
    short *psVar5;
    wchar_t *pwVar6;
    undefined8 uVar7;
    wchar_t wVar8;
    char *pcVar9;
    wchar_t *pwVar10;
    longlong *plVar11;
    wchar_t *pwVar12;

    plVar11 = *(longlong * *)(*(longlong * )(param_1 + 0x290) + 0x38);
    if (plVar11 == (longlong *) 0x0) {
        FUN_140056830(param_2, "Need to add something before an append");
        return 0;
    }
    lVar4 = (**(code * *)(*plVar11 + 0x30))();
    pwVar10 = (wchar_t *) 0x0;
    pwVar6 = pwVar10;
    if (lVar4 == 0) {
        pwVar6 = (wchar_t *) FUN_1401a4f40();
    }
    wVar8 = *pwVar6;
    pwVar12 = pwVar10;
    if (wVar8 == L'T') {
        do {
            if (wVar8 == L'\0') {
                plVar11 = (longlong *) plVar11[7];
                if (plVar11 == (longlong *) 0x0) goto LAB_14012b3c1;
                lVar4 = (**(code * *)(*plVar11 + 0x30))();
                pwVar6 = pwVar10;
                if (lVar4 == 0) {
                    pwVar6 = (wchar_t *) FUN_1401a4f40();
                }
                wVar8 = *pwVar6;
                pwVar12 = pwVar10;
                if (wVar8 != L't') goto LAB_14012b3c1;
                goto LAB_14012b3a6;
            }
            wVar8 = pwVar6[(longlong) pwVar12 + 1];
            lVar4 = (longlong) pwVar12 + 1;
            pwVar12 = (wchar_t *) ((longlong) pwVar12 + 1);
        } while (wVar8 == L"Table"[lVar4]);
    }
    lVar4 = (**(code * *)(*plVar11 + 0x30))();
    pwVar6 = pwVar10;
    if (lVar4 == 0) {
        pwVar6 = (wchar_t *) FUN_1401a4f40();
    }
    wVar8 = *pwVar6;
    if (wVar8 == L'P') {
        do {
            if (wVar8 == L'\0') {
                LAB_14012b480:
                uVar7 = (**(code * *)(*plVar11 + 8))(plVar11);
                return uVar7;
            }
            wVar8 = pwVar6[(longlong) pwVar10 + 1];
            pwVar12 = &DAT_1409db476 + (longlong) pwVar10;
            pwVar10 = (wchar_t *) ((longlong) pwVar10 + 1);
        } while (wVar8 == *pwVar12);
    }
    pcVar9 = "Unknown append type";
    LAB_14012b461:
    FUN_140056830(param_2, pcVar9);
    return 0;
    while (true) {
        wVar8 = pwVar6[(longlong) pwVar12 + 1];
        pwVar1 = &DAT_1409db516 + (longlong) pwVar12;
        pwVar12 = (wchar_t *) ((longlong) pwVar12 + 1);
        if (wVar8 != *pwVar1) break;
        LAB_14012b3a6:
        if (wVar8 == L'\0') {
            plVar11 = (longlong *) plVar11[7];
            if (plVar11 == (longlong *) 0x0) goto LAB_14012b412;
            psVar5 = (short *) FUN_1400f9b40();
            sVar3 = *psVar5;
            if (sVar3 != 0x74) goto LAB_14012b412;
            goto LAB_14012b3f4;
        }
    }
    LAB_14012b3c1:
    pcVar9 = "Need to add a table row before you can add a table data!";
    goto LAB_14012b461;
    while (true) {
        sVar3 = psVar5[(longlong) pwVar10 + 1];
        psVar2 = &DAT_1409db586 + (longlong) pwVar10;
        pwVar10 = (wchar_t *) ((longlong) pwVar10 + 1);
        if (sVar3 != *psVar2) break;
        LAB_14012b3f4:
        if (sVar3 == 0) goto LAB_14012b480;
    }
    LAB_14012b412:
    pcVar9 = "Need to add a table row before you can add a table data!";
    goto LAB_14012b461;
}


void FUN_14012b490(longlong param_1, undefined8 param_2) {
    longlong *plVar1;
    undefined8 *puVar2;
    undefined4 local_18[4];

    local_18[0] = 0xffffffff;
    FUN_14012a290(param_1, local_18);
    if (*(longlong * )(param_1 + 0x290) == 0) {
        plVar1 = (longlong * )(param_1 + 0x90);
        puVar2 = (undefined8 * )(**(code * *)(*plVar1 + 0x10))(plVar1);
        if (puVar2 != (undefined8 *) 0x0) {
            puVar2[1] = param_1 + 0x10;
            puVar2[2] = 0;
            *(undefined4 * )(puVar2 + 3) = 0;
            puVar2[4] = 0;
            puVar2[5] = 0;
            puVar2[6] = 0;
            puVar2[7] = 0;
            puVar2[8] = 0;
            puVar2[9] = 0;
            puVar2[10] = 0;
            *puVar2 = &PTR_FUN_140b5eba0;
            *(undefined4 * )(puVar2 + 0xb) = 0;
            puVar2[0xc] = 0;
        }
        puVar2[10] = plVar1;
        FUN_1401a4c50(puVar2 + 3, L"Root");
        *(undefined8 * *)(param_1 + 0x290) = puVar2;
        FUN_1401a5a70(param_1 + 0x10, puVar2);
    }
    FUN_1401a5a70(*(undefined8 * )(param_1 + 0x290), param_2);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14012b580(undefined8 param_1, longlong param_2, undefined4 param_3, undefined8 param_4) {
    char cVar1;
    short sVar5;
    short sVar6;
    short sVar7;
    undefined(*pauVar8)[16];
    ulonglong uVar9;
    ulonglong uVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    int iVar14;
    short sVar15;
    undefined in_XMM1[16];
    undefined auVar18[16];
    char cVar2;
    char cVar3;
    char cVar4;
    undefined4 uVar16;
    undefined6 uVar17;

    pauVar8 = (undefined (*)[16]) FUN_140118290(param_2, param_3);
    if (pauVar8 == (undefined (*)[16]) 0x0) {
        uVar10 = 0;
        if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
            uVar9 = uVar10;
            do {
                if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar9 * 8) + 400) ==
                    param_2) {
                    uVar10 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar9 * 8);
                    break;
                }
                uVar9 = (ulonglong)((int) uVar9 + 1);
            } while (uVar9 < *(ulonglong * )(DAT_140c63650 + 0x300));
        }
        FUN_1400f2610(uVar10 + 0x180, param_1, param_3, param_4);
    } else {
        auVar18 = maxps(in_XMM1 & (undefined[16]) 0x0, *pauVar8);
        auVar18 = minps(auVar18, _DAT_140b7b240);
        iVar11 = (int) (SUB164(auVar18, 0) * 255.0 + 0.5);
        iVar12 = (int) (SUB164(auVar18 >> 0x20, 0) * 255.0 + 0.5);
        iVar13 = (int) (SUB164(auVar18 >> 0x40, 0) * 255.0 + 0.5);
        iVar14 = (int) (SUB164(auVar18 >> 0x60, 0) * 255.0 + 0.5);
        sVar5 = (short) iVar13;
        cVar1 = (0 < sVar5) * (sVar5 < 0xff) * (char) iVar13 - (0xff < sVar5);
        sVar5 = (short) ((uint) iVar13 >> 0x10);
        sVar15 = CONCAT11((0 < sVar5) * (sVar5 < 0xff) * (char) ((uint) iVar13 >> 0x10) - (0xff < sVar5),
                          cVar1);
        sVar5 = (short) iVar12;
        cVar2 = (0 < sVar5) * (sVar5 < 0xff) * (char) iVar12 - (0xff < sVar5);
        sVar5 = (short) ((uint) iVar12 >> 0x10);
        uVar16 = CONCAT13((0 < sVar5) * (sVar5 < 0xff) * (char) ((uint) iVar12 >> 0x10) - (0xff < sVar5),
                          CONCAT12(cVar2, sVar15));
        sVar5 = (short) iVar11;
        cVar3 = (0 < sVar5) * (sVar5 < 0xff) * (char) iVar11 - (0xff < sVar5);
        sVar5 = (short) ((uint) iVar11 >> 0x10);
        uVar17 = CONCAT15((0 < sVar5) * (sVar5 < 0xff) * (char) ((uint) iVar11 >> 0x10) - (0xff < sVar5),
                          CONCAT14(cVar3, uVar16));
        sVar5 = (short) iVar14;
        cVar4 = (0 < sVar5) * (sVar5 < 0xff) * (char) iVar14 - (0xff < sVar5);
        sVar7 = (short) ((uint) iVar14 >> 0x10);
        sVar5 = (short) ((uint) uVar16 >> 0x10);
        sVar6 = (short) ((uint6) uVar17 >> 0x20);
        sVar7 = (short) (CONCAT17((0 < sVar7) * (sVar7 < 0xff) * (char) ((uint) iVar14 >> 0x10) -
                                  (0xff < sVar7), CONCAT16(cVar4, uVar17)) >> 0x30);
        FUN_14018efa0(param_1, L"%08x",
                      CONCAT13((0 < sVar7) * (sVar7 < 0xff) * cVar4 - (0xff < sVar7),
                               CONCAT12((0 < sVar6) * (sVar6 < 0xff) * cVar3 - (0xff < sVar6),
                                        CONCAT11((0 < sVar5) * (sVar5 < 0xff) * cVar2 - (0xff < sVar5),
                                                 (0 < sVar15) * (sVar15 < 0xff) * cVar1 -
                                                 (0xff < sVar15)))));
    }
    return param_1;
}


longlong FUN_14012ce60(undefined8 param_1, undefined8 param_2, longlong param_3) {
    longlong lVar1;
    short *psVar2;
    ulonglong *puVar3;
    undefined2 *puVar4;
    ulonglong uVar5;
    undefined2 *puVar6;
    undefined2 *puVar7;
    ulonglong local_res8;
    ulonglong local_res18;
    undefined local_48[8];
    longlong local_40;
    longlong local_38;

    FUN_14018efa0(local_48, L"%.13f", param_2);
    local_res8 = local_38 - local_40 >> 1;
    local_res18 = local_res8;
    if (local_res8 != 0) {
        psVar2 = (short *) (local_40 + -2 + local_res8 * 2);
        do {
            if (*psVar2 != 0x30) break;
            psVar2 = psVar2 + -1;
            local_res18 = local_res18 - 1;
        } while (local_res18 != 0);
    }
    puVar3 = &local_res8;
    if (local_res18 <= local_res8) {
        puVar3 = &local_res18;
    }
    puVar4 = (undefined2 *) 0x0;
    lVar1 = local_40 + *puVar3 * 2;
    uVar5 = (lVar1 - local_40 >> 1) + 1;
    puVar7 = puVar4;
    if (uVar5 < 0x7fffffffffffffff) {
        puVar4 = (undefined2 *) FUN_14018b280(uVar5 * 2, 0);
        puVar7 = puVar4 + uVar5;
    }
    puVar6 = puVar4;
    if (local_40 != lVar1) {
        do {
            if (puVar6 != (undefined2 *) 0x0) {
                *puVar6 = *(undefined2 * )((local_40 - (longlong) puVar4) + (longlong) puVar6);
            }
            puVar6 = puVar6 + 1;
        } while ((local_40 - (longlong) puVar4) + (longlong) puVar6 != lVar1);
    }
    if (puVar6 != (undefined2 *) 0x0) {
        *puVar6 = 0;
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40, 0);
    }
    *(undefined2 * *)(param_3 + 8) = puVar4;
    *(undefined2 * *)(param_3 + 0x10) = puVar6;
    *(undefined2 * *)(param_3 + 0x18) = puVar7;
    return param_3;
}



// WARNING: Removing unreachable block (ram,0x00014012d4af)

undefined *FUN_14012cf90(undefined *param_1, longlong param_2, longlong *param_3) {
    wchar_t wVar1;
    undefined2 *puVar2;
    longlong lVar3;
    longlong *plVar4;
    double dVar5;
    bool bVar6;
    int iVar7;
    uint uVar8;
    undefined2 *puVar9;
    longlong *plVar10;
    undefined8 uVar11;
    undefined *puVar12;
    ulonglong uVar13;
    ulonglong *puVar14;
    longlong lVar15;
    double *pdVar16;
    undefined2 *puVar17;
    ulonglong uVar18;
    undefined2 *puVar19;
    wchar_t *pwVar20;
    undefined2 *puVar21;
    undefined4 uVar22;
    undefined4 uVar23;
    double dVar24;
    undefined4 uVar25;
    undefined2 *local_d8;
    undefined local_c8[8];
    undefined2 *local_c0;
    undefined2 *local_b8;
    undefined2 *local_b0;
    ulonglong local_a8;
    double local_a0;
    ulonglong local_98;
    undefined local_90[8];
    undefined2 *local_88;
    double local_70;
    double local_68;
    undefined4 local_60;
    double local_58;
    undefined4 local_50;
    undefined local_48[8];
    undefined2 *local_40;
    undefined2 *local_38;

    *(undefined8 * )(param_1 + 8) = 0;
    *(undefined8 * )(param_1 + 0x10) = 0;
    *(undefined8 * )(param_1 + 0x18) = 0;
    puVar9 = (undefined2 *) FUN_14018b280(0x10, 0);
    *(undefined2 * *)(param_1 + 8) = puVar9;
    *(undefined2 * *)(param_1 + 0x10) = puVar9;
    *(undefined2 * *)(param_1 + 0x18) = puVar9 + 8;
    if (puVar9 != (undefined2 *) 0x0) {
        *puVar9 = 0;
    }
    *(undefined4 * )(*(longlong * )(param_2 + 0x10) + 8) = 0;
    *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + 0x10;
    LAB_14012cff1:
    do {
        while (true) {
            iVar7 = FUN_14005ba70(param_2);
            if (iVar7 == 0) {
                *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + -0x10;
                return param_1;
            }
            *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + 0x10;
            puVar9 = (undefined2 *) FUN_14018b280(0x10);
            if (puVar9 != (undefined2 *) 0x0) {
                *puVar9 = 0;
            }
            lVar15 = *(longlong * )(param_2 + 0x10);
            pdVar16 = (double *) (lVar15 + -0x20);
            if (pdVar16 == (double *) &DAT_140a12138) {
                iVar7 = -1;
            } else {
                iVar7 = *(int *) (&DAT_ffffffffffffffe8 + lVar15);
            }
            if (iVar7 == 3) break;
            if (iVar7 == 4) {
                if (((*(int *) (&DAT_ffffffffffffffe8 + lVar15) != 4) &&
                     (iVar7 = FUN_14005e620(param_2), iVar7 != 0)) &&
                    (*(ulonglong * )(*(longlong * )(param_2 + 0x20) + 0x70) <=
                     *(ulonglong * )(*(longlong * )(param_2 + 0x20) + 0x78))) {
                    FUN_14005e2c0(param_2);
                }
                FUN_14018f2d0(local_48);
                puVar17 = local_40;
                puVar2 = local_38;
                puVar21 = puVar9;
                goto joined_r0x00014012d1ad;
            }
            LAB_14012d058:
            if (puVar9 != (undefined2 *) 0x0) {
                FUN_14018b900(puVar9, 0);
            }
            LAB_14012d06b:
            *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + -0x10;
        }
        if (*(int *) (&DAT_ffffffffffffffe8 + lVar15) == 3) {
            LAB_14012d119:
            dVar24 = *pdVar16;
        } else {
            if ((*(int *) (&DAT_ffffffffffffffe8 + lVar15) == 4) &&
                (iVar7 = FUN_14005ac80((longlong) * pdVar16 + 0x20), iVar7 != 0)) {
                local_50 = 3;
                pdVar16 = &local_58;
                local_58 = local_a0;
                goto LAB_14012d119;
            }
            dVar24 = 0.0;
        }
        lVar15 = (longlong) dVar24;
        uVar22 = SUB84(dVar24, 0);
        uVar23 = (undefined4)((ulonglong) dVar24 >> 0x20);
        uVar25 = 0;
        if ((lVar15 != -0x8000000000000000) &&
            (uVar25 = SUB84((double) lVar15, 0), (double) lVar15 != dVar24)) {
            uVar8 = movmskpd(0, CONCAT412(uVar23, CONCAT48(uVar22, dVar24)));
            dVar5 = (double) (lVar15 - (ulonglong)(uVar8 & 1));
            uVar22 = SUB84(dVar5, 0);
            uVar23 = (undefined4)((ulonglong) dVar5 >> 0x20);
        }
        if ((double) CONCAT44(uVar23, uVar22) == dVar24) {
            FUN_14018efa0();
            puVar12 = local_90;
        } else {
            puVar12 = (undefined *) FUN_14012ce60(uVar22, dVar24, uVar25, local_90);
        }
        puVar17 = *(undefined2 * *)(puVar12 + 8);
        *(undefined2 * *)(puVar12 + 8) = puVar9;
        puVar2 = *(undefined2 * *)(puVar12 + 0x10);
        *(undefined2 * *)(puVar12 + 0x10) = puVar9;
        *(undefined2 * *)(puVar12 + 0x18) = puVar9 + 8;
        puVar21 = local_88;
        joined_r0x00014012d1ad:
        puVar9 = puVar17;
        if (puVar21 != (undefined2 *) 0x0) {
            FUN_14018b900(puVar21);
        }
        local_d8 = (undefined2 *) FUN_14018b280(0x10);
        lVar15 = 0;
        puVar17 = local_d8 + 8;
        if (local_d8 != (undefined2 *) 0x0) {
            *local_d8 = 0;
        }
        lVar3 = *(longlong * )(param_2 + 0x10);
        pdVar16 = (double *) (lVar3 + -0x10);
        if (pdVar16 == (double *) &DAT_140a12138) {
            iVar7 = -1;
        } else {
            iVar7 = *(int *) (lVar3 + -8);
        }
        local_c0 = local_d8;
        local_b8 = local_d8;
        local_b0 = puVar17;
        if (iVar7 == 1) {
            if ((*(int *) (lVar3 + -8) == 0) || ((*(int *) (lVar3 + -8) == 1 && (*(int *) pdVar16 == 0)))) {
                bVar6 = false;
            } else {
                bVar6 = true;
            }
            pwVar20 = L"false";
            if (bVar6) {
                pwVar20 = L"true";
            }
            wVar1 = *pwVar20;
            while (wVar1 != L'\0') {
                lVar15 = lVar15 + 1;
                wVar1 = pwVar20[lVar15];
            }
            if (lVar15 * 2 >> 1 == 0) {
                FUN_1407db590(local_d8);
                puVar21 = local_d8;
            } else {
                FUN_14001c310(local_c8);
                local_d8 = local_b8;
                puVar21 = local_c0;
            }
        } else {
            if (iVar7 == 3) {
                if (*(int *) (lVar3 + -8) == 3) {
                    LAB_14012d3aa:
                    dVar24 = *pdVar16;
                } else {
                    if ((*(int *) (lVar3 + -8) == 4) &&
                        (iVar7 = FUN_14005ac80((longlong) * pdVar16 + 0x20, &local_70), iVar7 != 0)) {
                        local_60 = 3;
                        pdVar16 = &local_68;
                        local_68 = local_70;
                        goto LAB_14012d3aa;
                    }
                    dVar24 = 0.0;
                }
                lVar15 = (longlong) dVar24;
                uVar22 = SUB84(dVar24, 0);
                uVar23 = (undefined4)((ulonglong) dVar24 >> 0x20);
                uVar25 = 0;
                if ((lVar15 != -0x8000000000000000) &&
                    (uVar25 = SUB84((double) lVar15, 0), (double) lVar15 != dVar24)) {
                    uVar8 = movmskpd(0, CONCAT412(uVar23, CONCAT48(uVar22, dVar24)));
                    dVar5 = (double) (lVar15 - (ulonglong)(uVar8 & 1));
                    uVar22 = SUB84(dVar5, 0);
                    uVar23 = (undefined4)((ulonglong) dVar5 >> 0x20);
                }
                if ((double) CONCAT44(uVar23, uVar22) == dVar24) {
                    FUN_14018efa0(local_90, L"%.0f");
                    puVar12 = local_90;
                } else {
                    puVar12 = (undefined *) FUN_14012ce60(uVar22, dVar24, uVar25, local_90);
                }
                puVar21 = *(undefined2 * *)(puVar12 + 8);
                *(undefined2 * *)(puVar12 + 8) = local_d8;
                puVar19 = *(undefined2 * *)(puVar12 + 0x10);
                *(undefined2 * *)(puVar12 + 0x10) = local_d8;
                *(undefined2 * *)(puVar12 + 0x18) = puVar17;
                puVar17 = local_88;
            } else {
                if (iVar7 != 4) {
                    if (iVar7 == 5) {
                        plVar10 = (longlong *) FUN_1401a7740(param_3[1], puVar9);
                        FUN_14012cf90(local_c8, param_2, plVar10);
                        if (local_c0 == local_b8) {
                            FUN_1401a5a70(param_3, plVar10);
                        } else {
                            if (plVar10[2] == 0) {
                                (**(code * *)(*(longlong *) plVar10[10] + 0x20))();
                            }
                            plVar4 = (longlong *) plVar10[10];
                            (**(code * *)(*plVar10 + 0x78))(plVar10, 0);
                            (**(code * *)(*plVar4 + 0x18))(plVar4, plVar10);
                            uVar11 = FUN_1401a7880(param_3[1], local_c0);
                            FUN_1401a5a70(param_3, uVar11);
                        }
                        if (local_c0 != (undefined2 *) 0x0) {
                            FUN_14018b900(local_c0, 0);
                        }
                        if (local_d8 != (undefined2 *) 0x0) {
                            FUN_14018b900(local_d8, 0);
                        }
                        goto LAB_14012d058;
                    }
                    if (local_d8 != (undefined2 *) 0x0) {
                        FUN_14018b900(local_d8, 0);
                    }
                    if (puVar9 == (undefined2 *) 0x0) goto LAB_14012d06b;
                    FUN_14018b900(puVar9, 0);
                    *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + -0x10;
                    goto LAB_14012cff1;
                }
                if (*(int *) (lVar3 + -8) == 4) {
                    LAB_14012d33c:
                    lVar15 = (longlong) * pdVar16 + 0x20;
                } else {
                    iVar7 = FUN_14005e620(param_2, pdVar16);
                    if (iVar7 != 0) {
                        if (*(ulonglong * )(*(longlong * )(param_2 + 0x20) + 0x70) <=
                            *(ulonglong * )(*(longlong * )(param_2 + 0x20) + 0x78)) {
                            FUN_14005e2c0(param_2);
                        }
                        pdVar16 = (double *) (*(longlong * )(param_2 + 0x10) + -0x10);
                        goto LAB_14012d33c;
                    }
                    lVar15 = 0;
                }
                FUN_14018f2d0(local_48, lVar15);
                puVar17 = local_d8;
                puVar19 = local_38;
                puVar21 = local_40;
            }
            local_d8 = puVar19;
            if (puVar17 != (undefined2 *) 0x0) {
                FUN_14018b900(puVar17, 0);
            }
        }
        uVar18 = 0;
        uVar13 = uVar18;
        do {
            uVar13 = uVar13 + 1;
        } while (L"__XmlNode"[uVar13] != L'\0');
        local_98 = (longlong)(uVar13 * 2) >> 1;
        local_a8 = (longlong) puVar2 - (longlong) puVar9 >> 1;
        puVar14 = &local_98;
        if ((longlong) local_a8 <= (longlong) local_98) {
            puVar14 = &local_a8;
        }
        if (*puVar14 != 0) {
            do {
                if (puVar9[uVar18] != L"__XmlNode"[uVar18]) {
                    uVar8 = 1;
                    if ((ushort) puVar9[uVar18] < (ushort) L"__XmlNode"[uVar18]) {
                        uVar8 = 0xffffffff;
                    }
                    if (uVar8 != 0) goto LAB_14012d581;
                    break;
                }
                uVar18 = uVar18 + 1;
            } while (uVar18 < *puVar14);
        }
        if ((longlong) local_a8 < (longlong) local_98) {
            LAB_14012d5b8:
            lVar15 = 0;
            do {
                lVar15 = lVar15 + 1;
            } while (L"__XmlText"[lVar15] != L'\0');
            iVar7 = FUN_1400454d0(puVar9, puVar2, L"__XmlText", L"__XmlText" + lVar15);
            if (iVar7 == 0) {
                if (local_c8 != param_1) {
                    FUN_14001c480(param_1, puVar21, local_d8);
                }
            } else {
                lVar15 = (**(code * *)(*param_3 + 8))();
                if (lVar15 != 0) {
                    lVar15 = FUN_1401a6c70(lVar15, puVar9);
                    FUN_1401a4c50(lVar15 + 0x20, puVar21);
                }
            }
        } else {
            uVar8 = (uint)((longlong) local_98 < (longlong) local_a8);
            LAB_14012d581:
            if (uVar8 != 0) goto LAB_14012d5b8;
            FUN_1401a4c50(param_3 + 3, puVar21);
        }
        if (puVar21 != (undefined2 *) 0x0) {
            FUN_14018b900(puVar21, 0);
        }
        if (puVar9 == (undefined2 *) 0x0) goto LAB_14012d06b;
        FUN_14018b900(puVar9, 0);
        *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + -0x10;
    } while (true);
}


undefined8 FUN_14012dae0(longlong param_1) {
    longlong *plVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong **pplVar4;
    longlong *plVar5;
    undefined8 *puVar6;
    longlong *plVar7;
    undefined8 *puVar8;
    undefined8 *puVar9;
    undefined local_38[8];
    longlong local_30;

    plVar7 = (longlong *) 0x0;
    if (*(ulonglong * )(param_1 + 0x10) < *(longlong * )(param_1 + 0x18) + 0x10U) {
        do {
            *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        } while (*(ulonglong * )(param_1 + 0x10) < *(longlong * )(param_1 + 0x18) + 0x10U);
    }
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x18) + 0x10;
    lVar2 = FUN_14018b280(0x368, 0);
    plVar3 = plVar7;
    if ((lVar2 == 0) || (plVar3 = (longlong *) FUN_140129af0(lVar2, 0), plVar3 == (longlong *) 0x0)) {
        *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    } else {
        (**(code * *) * plVar3)(plVar3);
        pplVar4 = (longlong **) FUN_140059170(param_1, 8);
        *pplVar4 = plVar3;
        (**(code * *)(*plVar3 + 0x18))(plVar3, param_1);
    }
    puVar9 = *(undefined8 * *)(param_1 + 0x10);
    puVar8 = &DAT_140a12138;
    puVar6 = &DAT_140a12138;
    if (*(undefined8 * *)(param_1 + 0x18) < puVar9) {
        puVar6 = *(undefined8 * *)(param_1 + 0x18);
    }
    *puVar9 = *puVar6;
    *(undefined4 * )(puVar9 + 1) = *(undefined4 * )(puVar6 + 1);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    if (*(undefined8 * *)(param_1 + 0x18) < *(undefined8 * *)(param_1 + 0x10)) {
        puVar8 = *(undefined8 * *)(param_1 + 0x18);
    }
    puVar9 = puVar8 + 2;
    if (puVar8 + 2 < *(undefined8 * *)(param_1 + 0x10)) {
        do {
            puVar6 = puVar9 + 2;
            puVar9[-2] = *puVar9;
            *(undefined4 * )(puVar9 + -1) = *(undefined4 * )(puVar9 + 1);
            puVar9 = puVar6;
        } while (puVar6 < *(undefined8 * *)(param_1 + 0x10));
    }
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
    lVar2 = (**(code * *)(*plVar3 + 0x10))(plVar3);
    lVar2 = *(longlong * )(lVar2 + 8);
    plVar1 = (longlong * )(lVar2 + 0x80);
    plVar5 = (longlong * )(**(code * *)(*plVar1 + 0x10))(plVar1);
    if (plVar5 != (longlong *) 0x0) {
        plVar5[1] = lVar2;
        plVar5[2] = 0;
        *(undefined4 * )(plVar5 + 3) = 0;
        plVar5[4] = 0;
        plVar5[5] = 0;
        plVar5[6] = 0;
        plVar5[7] = 0;
        plVar5[8] = 0;
        plVar5[9] = 0;
        plVar5[10] = 0;
        *(undefined4 * )(plVar5 + 0xb) = 0;
        *plVar5 = (longlong) & PTR_FUN_140b5eba0;
        plVar5[0xc] = 0;
        plVar7 = plVar5;
    }
    plVar7[10] = (longlong) plVar1;
    FUN_1401a4c50(plVar7 + 3, L"Document");
    FUN_1401a5a70(lVar2, plVar7);
    FUN_14012cf90(local_38, param_1, plVar7);
    if (local_30 != 0) {
        FUN_14018b900(local_30, 0);
    }
    (**(code * *)(*plVar3 + 8))(plVar3);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
    return 1;
}


void FUN_14012dcc0(longlong param_1, longlong *param_2, int param_3) {
    longlong *plVar1;
    double *pdVar2;
    undefined8 *puVar3;
    longlong lVar4;
    longlong *plVar5;
    undefined8 uVar6;
    short *psVar7;
    int iVar8;
    int local_res10;

    lVar4 = (**(code * *)(*param_2 + 8))(param_2);
    if ((lVar4 != 0) && (param_3 == 0)) {
        for (lVar4 = *(longlong * )(lVar4 + 0x60); lVar4 != 0; lVar4 = *(longlong * )(lVar4 + 0x38)) {
            FUN_1401a4f40(lVar4 + 0x20);
            FUN_1401a4f40(lVar4 + 8);
            FUN_1400f0870(param_1);
        }
    }
    plVar1 = (longlong *) param_2[6];
    iVar8 = 1;
    local_res10 = 1;
    do {
        if (plVar1 == (longlong *) 0x0) {
            return;
        }
        plVar5 = (longlong * )(**(code * *)(*plVar1 + 8))(plVar1);
        if (plVar5 == (longlong *) 0x0) {
            plVar5 = (longlong * )(**(code * *)(*plVar1 + 0x18))(plVar1);
            if (((plVar5 != (longlong *) 0x0) &&
                 (lVar4 = (**(code * *)(*plVar5 + 0x30))(plVar5), lVar4 == 0)) &&
                (lVar4 = FUN_1401a4f40(plVar5 + 3), lVar4 != 0)) {
                lVar4 = (**(code * *)(*plVar5 + 0x30))(plVar5);
                if (lVar4 == 0) {
                    psVar7 = (short *) FUN_1401a4f40(plVar5 + 3);
                } else {
                    psVar7 = (short *) 0x0;
                }
                if (*psVar7 != 0) {
                    if (param_3 == 0) {
                        pdVar2 = *(double **) (param_1 + 0x10);
                        *(undefined4 * )(pdVar2 + 1) = 3;
                        *pdVar2 = (double) iVar8;
                        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
                        local_res10 = iVar8 + 1;
                    }
                    if (*(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x70) <=
                        *(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x78)) {
                        FUN_14005e2c0(param_1);
                    }
                    puVar3 = *(undefined8 * *)(param_1 + 0x10);
                    uVar6 = FUN_14005c1b0(param_1, 0, 0);
                    *(undefined4 * )(puVar3 + 1) = 5;
                    *puVar3 = uVar6;
                    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
                    lVar4 = (**(code * *)(*plVar5 + 0x30))(plVar5);
                    if (lVar4 == 0) {
                        FUN_1401a4f40(plVar5 + 3);
                    }
                    FUN_1400f0870(param_1);
                    goto LAB_14012dee0;
                }
            }
        } else {
            if (param_3 == 0) {
                pdVar2 = *(double **) (param_1 + 0x10);
                *(undefined4 * )(pdVar2 + 1) = 3;
                *pdVar2 = (double) iVar8;
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
                local_res10 = iVar8 + 1;
            }
            if (*(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x70) <=
                *(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar3 = *(undefined8 * *)(param_1 + 0x10);
            uVar6 = FUN_14005c1b0(param_1, 0, 0);
            *(undefined4 * )(puVar3 + 1) = 5;
            *puVar3 = uVar6;
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            lVar4 = (**(code * *)(*plVar5 + 0x30))(plVar5);
            if (lVar4 == 0) {
                FUN_1401a4f40(plVar5 + 3);
            }
            FUN_1400f0870(param_1);
            FUN_14012dcc0(param_1);
            LAB_14012dee0:
            iVar8 = local_res10;
            if (param_3 == 0) {
                lVar4 = *(longlong * )(param_1 + 0x10);
                FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar4, lVar4 + -0x20, lVar4 + -0x10);
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
            }
        }
        plVar1 = (longlong *) plVar1[9];
    } while (true);
}


undefined4 FUN_14012df30(longlong param_1) {
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong *plVar4;
    undefined8 uVar5;
    short *psVar6;

    plVar2 = (longlong *) FUN_14012aaf0(param_1, 1);
    if (plVar2 == (longlong *) 0x0) {
        *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        return 1;
    }
    lVar3 = (**(code * *)(*plVar2 + 0x10))();
    plVar2 = *(longlong * *)(lVar3 + 8);
    if (plVar2 != (longlong *) 0x0) {
        for (puVar1 = (undefined8 *) plVar2[6]; puVar1 != (undefined8 *) 0x0;
             puVar1 = (undefined8 *) puVar1[9]) {
            lVar3 = (**(code * *) * puVar1)(puVar1);
            if (lVar3 != 0) {
                (**(code * *)(*plVar2 + 8))(plVar2);
                for (plVar2 = (longlong *) plVar2[6]; plVar2 != (longlong *) 0x0;
                     plVar2 = (longlong *) plVar2[9]) {
                    plVar4 = (longlong * )(**(code * *)(*plVar2 + 8))(plVar2);
                    if (plVar4 == (longlong *) 0x0) {
                        plVar4 = (longlong * )(**(code * *)(*plVar2 + 0x18))(plVar2);
                        if (((plVar4 != (longlong *) 0x0) &&
                             (lVar3 = (**(code * *)(*plVar4 + 0x30))(plVar4), lVar3 == 0)) &&
                            (lVar3 = FUN_1401a4f40(plVar4 + 3), lVar3 != 0)) {
                            lVar3 = (**(code * *)(*plVar4 + 0x30))(plVar4);
                            if (lVar3 == 0) {
                                psVar6 = (short *) FUN_1401a4f40(plVar4 + 3);
                            } else {
                                psVar6 = (short *) 0x0;
                            }
                            if (*psVar6 != 0) {
                                if (*(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x70) <=
                                    *(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x78)) {
                                    FUN_14005e2c0(param_1);
                                }
                                puVar1 = *(undefined8 * *)(param_1 + 0x10);
                                uVar5 = FUN_14005c1b0(param_1, 0, 0);
                                *(undefined4 * )(puVar1 + 1) = 5;
                                *puVar1 = uVar5;
                                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
                                lVar3 = (**(code * *)(*plVar4 + 0x30))(plVar4);
                                if (lVar3 == 0) {
                                    FUN_1401a4f40(plVar4 + 3);
                                }
                                FUN_1400f0870(param_1);
                            }
                        }
                    } else {
                        if (*(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x70) <=
                            *(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x78)) {
                            FUN_14005e2c0(param_1);
                        }
                        puVar1 = *(undefined8 * *)(param_1 + 0x10);
                        uVar5 = FUN_14005c1b0(param_1, 0, 0);
                        *(undefined4 * )(puVar1 + 1) = 5;
                        *puVar1 = uVar5;
                        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
                        lVar3 = (**(code * *)(*plVar4 + 0x30))(plVar4);
                        if (lVar3 == 0) {
                            FUN_1401a4f40(plVar4 + 3);
                        }
                        FUN_1400f0870(param_1);
                        FUN_14012dcc0(param_1, plVar4);
                    }
                }
                return 1;
            }
        }
    }
    *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}

