//
// Created by flop on 04.04.22.
//
#include "../../include.h"

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402475e0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140247609. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_TutorialPage_140a6dea8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64214 == 0) {
        iVar1 = FUN_140247320();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140247637. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64130 + 0x20))(DAT_140c64130, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140247760(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64930 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"UnitProperty2"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c65048 != 0) {
                iVar2 = _DAT_140c644bc;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_UnitProperty2_140ad91d8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\UnitProperty2.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_UnitProperty2_140ad91d8;
                    plVar3[4] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b79850;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                lVar4 = FUN_1407c0c50((&DAT_140c66660)[DAT_140c66658], plVar5[2]);
                plVar5[5] = lVar4;
                if (lVar4 == 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return -0x7fffbffb;
                }
            }
        } else {
            plVar3 = (longlong *) FUN_14018b280(0x50, 0);
            puVar1 = DAT_140c63970;
            if (plVar3 != (longlong *) 0x0) {
                *(undefined4 * )(plVar3 + 1) = 1;
                *plVar3 = (longlong) & PTR_LAB_140b79650;
                *(undefined4 * )(plVar3 + 4) = 0;
                plVar3[2] = (longlong) puVar1;
                plVar3[5] = 0;
                *(undefined4 * )(plVar3 + 6) = 0;
                plVar3[3] = (longlong) & PTR_u_UnitProperty2_140ad91d8;
                plVar3[7] = 0;
                plVar3[8] = 0;
                *(undefined4 * )(plVar3 + 9) = 0;
                (**(code * *) * puVar1)();
                plVar5 = plVar3;
            }
            iVar2 = FUN_1407befc0(plVar5, 0);
            if (iVar2 < 0) {
                if (plVar5 == (longlong *) 0x0) {
                    return iVar2;
                }
                (**(code * *)(*plVar5 + 8))(plVar5);
                return iVar2;
            }
        }
        DAT_140c64930 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64070 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140247970(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140247992. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_UnitProperty2_140a6dee0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64070 == 0) {
        iVar1 = FUN_140247760();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402479bc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64930 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402479c0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402479e9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_UnitProperty2_140a6dee0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64070 == 0) {
        iVar1 = FUN_140247760();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140247a17. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64930 + 0x18))(DAT_140c64930, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140247a20(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140247a49. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_UnitProperty2_140a6dee0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64070 == 0) {
        iVar1 = FUN_140247760();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140247a77. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64930 + 0x20))(DAT_140c64930, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140247ba0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63c58 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"UnitRace"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c65018 != 0) {
                iVar2 = _DAT_140c644ac;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_UnitRace_140a638f8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\UnitRace.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_UnitRace_140a638f8;
                    plVar3[4] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b79850;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                lVar4 = FUN_1407c0c50((&DAT_140c66660)[DAT_140c66658], plVar5[2]);
                plVar5[5] = lVar4;
                if (lVar4 == 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return -0x7fffbffb;
                }
            }
        } else {
            plVar3 = (longlong *) FUN_14018b280(0x50, 0);
            puVar1 = DAT_140c63970;
            if (plVar3 != (longlong *) 0x0) {
                *(undefined4 * )(plVar3 + 1) = 1;
                *plVar3 = (longlong) & PTR_LAB_140b79650;
                *(undefined4 * )(plVar3 + 4) = 0;
                plVar3[2] = (longlong) puVar1;
                plVar3[5] = 0;
                *(undefined4 * )(plVar3 + 6) = 0;
                plVar3[3] = (longlong) & PTR_u_UnitRace_140a638f8;
                plVar3[7] = 0;
                plVar3[8] = 0;
                *(undefined4 * )(plVar3 + 9) = 0;
                (**(code * *) * puVar1)();
                plVar5 = plVar3;
            }
            iVar2 = FUN_1407befc0(plVar5, 0);
            if (iVar2 < 0) {
                if (plVar5 == (longlong *) 0x0) {
                    return iVar2;
                }
                (**(code * *)(*plVar5 + 8))(plVar5);
                return iVar2;
            }
        }
        DAT_140c63c58 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c646d4 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140247db0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140247dd2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_UnitRace_140a6df18, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c646d4 == 0) {
        iVar1 = FUN_140247ba0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140247dfc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63c58 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140247e00(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140247e29. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_UnitRace_140a6df18, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c646d4 == 0) {
        iVar1 = FUN_140247ba0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140247e57. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63c58 + 0x18))(DAT_140c63c58, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140247e60(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140247e89. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_UnitRace_140a6df18, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c646d4 == 0) {
        iVar1 = FUN_140247ba0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140247eb7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63c58 + 0x20))(DAT_140c63c58, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140247fe0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63f28 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"UnitVehicle"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64ac0 != 0) {
                iVar2 = _DAT_140c63f70;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_UnitVehicle_140ad2798;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\UnitVehicle.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_UnitVehicle_140ad2798;
                    plVar3[4] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b79850;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                lVar4 = FUN_1407c0c50((&DAT_140c66660)[DAT_140c66658], plVar5[2]);
                plVar5[5] = lVar4;
                if (lVar4 == 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return -0x7fffbffb;
                }
            }
        } else {
            plVar3 = (longlong *) FUN_14018b280(0x50, 0);
            puVar1 = DAT_140c63970;
            if (plVar3 != (longlong *) 0x0) {
                *(undefined4 * )(plVar3 + 1) = 1;
                *plVar3 = (longlong) & PTR_LAB_140b79650;
                *(undefined4 * )(plVar3 + 4) = 0;
                plVar3[2] = (longlong) puVar1;
                plVar3[5] = 0;
                *(undefined4 * )(plVar3 + 6) = 0;
                plVar3[3] = (longlong) & PTR_u_UnitVehicle_140ad2798;
                plVar3[7] = 0;
                plVar3[8] = 0;
                *(undefined4 * )(plVar3 + 9) = 0;
                (**(code * *) * puVar1)();
                plVar5 = plVar3;
            }
            iVar2 = FUN_1407befc0(plVar5, 0);
            if (iVar2 < 0) {
                if (plVar5 == (longlong *) 0x0) {
                    return iVar2;
                }
                (**(code * *)(*plVar5 + 8))(plVar5);
                return iVar2;
            }
        }
        DAT_140c63f28 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c640f8 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402481f0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140248212. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_UnitVehicle_140a6df50, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c640f8 == 0) {
        iVar1 = FUN_140247fe0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024823c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63f28 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140248240(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140248269. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_UnitVehicle_140a6df50, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c640f8 == 0) {
        iVar1 = FUN_140247fe0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140248297. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63f28 + 0x18))(DAT_140c63f28, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402482a0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402482c9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_UnitVehicle_140a6df50, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c640f8 == 0) {
        iVar1 = FUN_140247fe0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402482f7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63f28 + 0x20))(DAT_140c63f28, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140248420(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63aa0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"VeteranTier"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c641e4 != 0) {
                iVar2 = _DAT_140c65010;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_VeteranTier_140ae3580;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\VeteranTier.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_VeteranTier_140ae3580;
                    plVar3[4] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b79850;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                lVar4 = FUN_1407c0c50((&DAT_140c66660)[DAT_140c66658], plVar5[2]);
                plVar5[5] = lVar4;
                if (lVar4 == 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return -0x7fffbffb;
                }
            }
        } else {
            plVar3 = (longlong *) FUN_14018b280(0x50, 0);
            puVar1 = DAT_140c63970;
            if (plVar3 != (longlong *) 0x0) {
                *(undefined4 * )(plVar3 + 1) = 1;
                *plVar3 = (longlong) & PTR_LAB_140b79650;
                *(undefined4 * )(plVar3 + 4) = 0;
                plVar3[2] = (longlong) puVar1;
                plVar3[5] = 0;
                *(undefined4 * )(plVar3 + 6) = 0;
                plVar3[3] = (longlong) & PTR_u_VeteranTier_140ae3580;
                plVar3[7] = 0;
                plVar3[8] = 0;
                *(undefined4 * )(plVar3 + 9) = 0;
                (**(code * *) * puVar1)();
                plVar5 = plVar3;
            }
            iVar2 = FUN_1407befc0(plVar5, 0);
            if (iVar2 < 0) {
                if (plVar5 == (longlong *) 0x0) {
                    return iVar2;
                }
                (**(code * *)(*plVar5 + 8))(plVar5);
                return iVar2;
            }
        }
        DAT_140c63aa0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63e88 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140248630(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140248652. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_VeteranTier_140a6df88, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63e88 == 0) {
        iVar1 = FUN_140248420();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024867c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63aa0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402486e0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140248709. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_VeteranTier_140a6df88, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63e88 == 0) {
        iVar1 = FUN_140248420();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140248737. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63aa0 + 0x20))(DAT_140c63aa0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140248860(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64810 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"VirtualItem"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63dec != 0) {
                iVar2 = _DAT_140c63e8c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_VirtualItem_140a80b60;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\VirtualItem.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_VirtualItem_140a80b60;
                    plVar3[4] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b79850;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                lVar4 = FUN_1407c0c50((&DAT_140c66660)[DAT_140c66658], plVar5[2]);
                plVar5[5] = lVar4;
                if (lVar4 == 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return -0x7fffbffb;
                }
            }
        } else {
            plVar3 = (longlong *) FUN_14018b280(0x50, 0);
            puVar1 = DAT_140c63970;
            if (plVar3 != (longlong *) 0x0) {
                *(undefined4 * )(plVar3 + 1) = 1;
                *plVar3 = (longlong) & PTR_LAB_140b79650;
                *(undefined4 * )(plVar3 + 4) = 0;
                plVar3[2] = (longlong) puVar1;
                plVar3[5] = 0;
                *(undefined4 * )(plVar3 + 6) = 0;
                plVar3[3] = (longlong) & PTR_u_VirtualItem_140a80b60;
                plVar3[7] = 0;
                plVar3[8] = 0;
                *(undefined4 * )(plVar3 + 9) = 0;
                (**(code * *) * puVar1)();
                plVar5 = plVar3;
            }
            iVar2 = FUN_1407befc0(plVar5, 0);
            if (iVar2 < 0) {
                if (plVar5 == (longlong *) 0x0) {
                    return iVar2;
                }
                (**(code * *)(*plVar5 + 8))(plVar5);
                return iVar2;
            }
        }
        DAT_140c64810 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63b58 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140248a70(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140248a92. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_VirtualItem_140a6dfc0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63b58 == 0) {
        iVar1 = FUN_140248860();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140248abc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64810 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140248ac0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140248ae9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_VirtualItem_140a6dfc0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63b58 == 0) {
        iVar1 = FUN_140248860();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140248b17. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64810 + 0x18))(DAT_140c64810, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140248b20(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140248b49. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_VirtualItem_140a6dfc0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63b58 == 0) {
        iVar1 = FUN_140248860();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140248b77. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64810 + 0x20))(DAT_140c64810, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140248ca0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63b40 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"VisualEffect"), iVar2 == 0)
                ) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c647c4 != 0) {
                iVar2 = _DAT_140c653d8;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_VisualEffect_140ad09a8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\VisualEffect.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_VisualEffect_140ad09a8;
                    plVar3[4] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b79850;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                lVar4 = FUN_1407c0c50((&DAT_140c66660)[DAT_140c66658], plVar5[2]);
                plVar5[5] = lVar4;
                if (lVar4 == 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return -0x7fffbffb;
                }
            }
        } else {
            plVar3 = (longlong *) FUN_14018b280(0x50, 0);
            puVar1 = DAT_140c63970;
            if (plVar3 != (longlong *) 0x0) {
                *(undefined4 * )(plVar3 + 1) = 1;
                *plVar3 = (longlong) & PTR_LAB_140b79650;
                *(undefined4 * )(plVar3 + 4) = 0;
                plVar3[2] = (longlong) puVar1;
                plVar3[5] = 0;
                *(undefined4 * )(plVar3 + 6) = 0;
                plVar3[3] = (longlong) & PTR_u_VisualEffect_140ad09a8;
                plVar3[7] = 0;
                plVar3[8] = 0;
                *(undefined4 * )(plVar3 + 9) = 0;
                (**(code * *) * puVar1)();
                plVar5 = plVar3;
            }
            iVar2 = FUN_1407befc0(plVar5, 0);
            if (iVar2 < 0) {
                if (plVar5 == (longlong *) 0x0) {
                    return iVar2;
                }
                (**(code * *)(*plVar5 + 8))(plVar5);
                return iVar2;
            }
        }
        DAT_140c63b40 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64c04 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140248eb0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140248ed2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_VisualEffect_140a6dff8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64c04 == 0) {
        iVar1 = FUN_140248ca0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140248efc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63b40 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140248f00(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140248f29. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_VisualEffect_140a6dff8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64c04 == 0) {
        iVar1 = FUN_140248ca0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140248f57. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63b40 + 0x18))(DAT_140c63b40, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140248f60(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140248f89. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_VisualEffect_140a6dff8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64c04 == 0) {
        iVar1 = FUN_140248ca0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140248fb7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63b40 + 0x20))(DAT_140c63b40, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1402490e0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64330 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"Vital"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c65500 != 0) {
                iVar2 = _DAT_140c65278;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Vital_140a88560;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Vital.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Vital_140a88560;
                    plVar3[4] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b79850;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                lVar4 = FUN_1407c0c50((&DAT_140c66660)[DAT_140c66658], plVar5[2]);
                plVar5[5] = lVar4;
                if (lVar4 == 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return -0x7fffbffb;
                }
            }
        } else {
            plVar3 = (longlong *) FUN_14018b280(0x50, 0);
            puVar1 = DAT_140c63970;
            if (plVar3 != (longlong *) 0x0) {
                *(undefined4 * )(plVar3 + 1) = 1;
                *plVar3 = (longlong) & PTR_LAB_140b79650;
                *(undefined4 * )(plVar3 + 4) = 0;
                plVar3[2] = (longlong) puVar1;
                plVar3[5] = 0;
                *(undefined4 * )(plVar3 + 6) = 0;
                plVar3[3] = (longlong) & PTR_u_Vital_140a88560;
                plVar3[7] = 0;
                plVar3[8] = 0;
                *(undefined4 * )(plVar3 + 9) = 0;
                (**(code * *) * puVar1)();
                plVar5 = plVar3;
            }
            iVar2 = FUN_1407befc0(plVar5, 0);
            if (iVar2 < 0) {
                if (plVar5 == (longlong *) 0x0) {
                    return iVar2;
                }
                (**(code * *)(*plVar5 + 8))(plVar5);
                return iVar2;
            }
        }
        DAT_140c64330 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63e44 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402492f0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140249312. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Vital_140a6e030, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63e44 == 0) {
        iVar1 = FUN_1402490e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024933c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64330 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140249340(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140249369. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_Vital_140a6e030, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63e44 == 0) {
        iVar1 = FUN_1402490e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140249397. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64330 + 0x18))(DAT_140c64330, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402493a0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402493c9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Vital_140a6e030, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63e44 == 0) {
        iVar1 = FUN_1402490e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402493f7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64330 + 0x20))(DAT_140c64330, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140249520(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64ba0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"WaterSurfaceEffect"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c645fc != 0) {
                iVar2 = _DAT_140c63cf4;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_WaterSurfaceEffect_140adaeb8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\WaterSurfaceEffect.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_WaterSurfaceEffect_140adaeb8;
                    plVar3[4] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b79850;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                lVar4 = FUN_1407c0c50((&DAT_140c66660)[DAT_140c66658], plVar5[2]);
                plVar5[5] = lVar4;
                if (lVar4 == 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return -0x7fffbffb;
                }
            }
        } else {
            plVar3 = (longlong *) FUN_14018b280(0x50, 0);
            puVar1 = DAT_140c63970;
            if (plVar3 != (longlong *) 0x0) {
                *(undefined4 * )(plVar3 + 1) = 1;
                *plVar3 = (longlong) & PTR_LAB_140b79650;
                *(undefined4 * )(plVar3 + 4) = 0;
                plVar3[2] = (longlong) puVar1;
                plVar3[5] = 0;
                *(undefined4 * )(plVar3 + 6) = 0;
                plVar3[3] = (longlong) & PTR_u_WaterSurfaceEffect_140adaeb8;
                plVar3[7] = 0;
                plVar3[8] = 0;
                *(undefined4 * )(plVar3 + 9) = 0;
                (**(code * *) * puVar1)();
                plVar5 = plVar3;
            }
            iVar2 = FUN_1407befc0(plVar5, 0);
            if (iVar2 < 0) {
                if (plVar5 == (longlong *) 0x0) {
                    return iVar2;
                }
                (**(code * *)(*plVar5 + 8))(plVar5);
                return iVar2;
            }
        }
        DAT_140c64ba0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64a78 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140249730(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140249752. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_WaterSurfaceEffect_140a6e068, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64a78 == 0) {
        iVar1 = FUN_140249520();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024977c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64ba0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140249780(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402497a9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_WaterSurfaceEffect_140a6e068, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64a78 == 0) {
        iVar1 = FUN_140249520();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402497d7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64ba0 + 0x18))(DAT_140c64ba0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402497e0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140249809. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_WaterSurfaceEffect_140a6e068, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64a78 == 0) {
        iVar1 = FUN_140249520();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140249837. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64ba0 + 0x20))(DAT_140c64ba0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140249960(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64100 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"Wind"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63e48 != 0) {
                iVar2 = _DAT_140c64014;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Wind_140ad80c8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Wind.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Wind_140ad80c8;
                    plVar3[4] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b79850;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                lVar4 = FUN_1407c0c50((&DAT_140c66660)[DAT_140c66658], plVar5[2]);
                plVar5[5] = lVar4;
                if (lVar4 == 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return -0x7fffbffb;
                }
            }
        } else {
            plVar3 = (longlong *) FUN_14018b280(0x50, 0);
            puVar1 = DAT_140c63970;
            if (plVar3 != (longlong *) 0x0) {
                *(undefined4 * )(plVar3 + 1) = 1;
                *plVar3 = (longlong) & PTR_LAB_140b79650;
                *(undefined4 * )(plVar3 + 4) = 0;
                plVar3[2] = (longlong) puVar1;
                plVar3[5] = 0;
                *(undefined4 * )(plVar3 + 6) = 0;
                plVar3[3] = (longlong) & PTR_u_Wind_140ad80c8;
                plVar3[7] = 0;
                plVar3[8] = 0;
                *(undefined4 * )(plVar3 + 9) = 0;
                (**(code * *) * puVar1)();
                plVar5 = plVar3;
            }
            iVar2 = FUN_1407befc0(plVar5, 0);
            if (iVar2 < 0) {
                if (plVar5 == (longlong *) 0x0) {
                    return iVar2;
                }
                (**(code * *)(*plVar5 + 8))(plVar5);
                return iVar2;
            }
        }
        DAT_140c64100 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c652b4 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140249b70(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140249b92. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Wind_140a6e0a0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c652b4 == 0) {
        iVar1 = FUN_140249960();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140249bbc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64100 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140249bc0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140249be9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_Wind_140a6e0a0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c652b4 == 0) {
        iVar1 = FUN_140249960();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140249c17. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64100 + 0x18))(DAT_140c64100, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140249c20(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140249c49. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Wind_140a6e0a0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c652b4 == 0) {
        iVar1 = FUN_140249960();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140249c77. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64100 + 0x20))(DAT_140c64100, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140249da0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c642b0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"WindSpawn"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63ec4 != 0) {
                iVar2 = _DAT_140c645e0;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_WindSpawn_140ad97e0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\WindSpawn.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_WindSpawn_140ad97e0;
                    plVar3[4] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b79850;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                lVar4 = FUN_1407c0c50((&DAT_140c66660)[DAT_140c66658], plVar5[2]);
                plVar5[5] = lVar4;
                if (lVar4 == 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return -0x7fffbffb;
                }
            }
        } else {
            plVar3 = (longlong *) FUN_14018b280(0x50, 0);
            puVar1 = DAT_140c63970;
            if (plVar3 != (longlong *) 0x0) {
                *(undefined4 * )(plVar3 + 1) = 1;
                *plVar3 = (longlong) & PTR_LAB_140b79650;
                *(undefined4 * )(plVar3 + 4) = 0;
                plVar3[2] = (longlong) puVar1;
                plVar3[5] = 0;
                *(undefined4 * )(plVar3 + 6) = 0;
                plVar3[3] = (longlong) & PTR_u_WindSpawn_140ad97e0;
                plVar3[7] = 0;
                plVar3[8] = 0;
                *(undefined4 * )(plVar3 + 9) = 0;
                (**(code * *) * puVar1)();
                plVar5 = plVar3;
            }
            iVar2 = FUN_1407befc0(plVar5, 0);
            if (iVar2 < 0) {
                if (plVar5 == (longlong *) 0x0) {
                    return iVar2;
                }
                (**(code * *)(*plVar5 + 8))(plVar5);
                return iVar2;
            }
        }
        DAT_140c642b0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64e18 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140249fb0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140249fd2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_WindSpawn_140a6e0d8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64e18 == 0) {
        iVar1 = FUN_140249da0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140249ffc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c642b0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14024a000(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014024a029. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_WindSpawn_140a6e0d8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64e18 == 0) {
        iVar1 = FUN_140249da0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024a057. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c642b0 + 0x18))(DAT_140c642b0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14024a060(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014024a089. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_WindSpawn_140a6e0d8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64e18 == 0) {
        iVar1 = FUN_140249da0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024a0b7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c642b0 + 0x20))(DAT_140c642b0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14024a1e0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c65460 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"WordFilter"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63f30 != 0) {
                iVar2 = _DAT_140c645d8;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_WordFilter_140a4c070;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\WordFilter.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_WordFilter_140a4c070;
                    plVar3[4] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b79850;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                lVar4 = FUN_1407c0c50((&DAT_140c66660)[DAT_140c66658], plVar5[2]);
                plVar5[5] = lVar4;
                if (lVar4 == 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return -0x7fffbffb;
                }
            }
        } else {
            plVar3 = (longlong *) FUN_14018b280(0x50, 0);
            puVar1 = DAT_140c63970;
            if (plVar3 != (longlong *) 0x0) {
                *(undefined4 * )(plVar3 + 1) = 1;
                *plVar3 = (longlong) & PTR_LAB_140b79650;
                *(undefined4 * )(plVar3 + 4) = 0;
                plVar3[2] = (longlong) puVar1;
                plVar3[5] = 0;
                *(undefined4 * )(plVar3 + 6) = 0;
                plVar3[3] = (longlong) & PTR_u_WordFilter_140a4c070;
                plVar3[7] = 0;
                plVar3[8] = 0;
                *(undefined4 * )(plVar3 + 9) = 0;
                (**(code * *) * puVar1)();
                plVar5 = plVar3;
            }
            iVar2 = FUN_1407befc0(plVar5, 0);
            if (iVar2 < 0) {
                if (plVar5 == (longlong *) 0x0) {
                    return iVar2;
                }
                (**(code * *)(*plVar5 + 8))(plVar5);
                return iVar2;
            }
        }
        DAT_140c65460 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64bc0 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14024a3f0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014024a412. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_WordFilter_140a6e110, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64bc0 == 0) {
        iVar1 = FUN_14024a1e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024a43c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65460 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14024a4a0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014024a4c9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_WordFilter_140a6e110, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64bc0 == 0) {
        iVar1 = FUN_14024a1e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024a4f7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65460 + 0x20))(DAT_140c65460, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14024a620(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c65660 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"WordFilterChina"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64b84 != 0) {
                iVar2 = _DAT_140c64390;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_WordFilterChina_140a4bce0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\WordFilterAlt.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_WordFilterChina_140a4bce0;
                    plVar3[4] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b79850;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                lVar4 = FUN_1407c0c50((&DAT_140c66660)[DAT_140c66658], plVar5[2]);
                plVar5[5] = lVar4;
                if (lVar4 == 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return -0x7fffbffb;
                }
            }
        } else {
            plVar3 = (longlong *) FUN_14018b280(0x50, 0);
            puVar1 = DAT_140c63970;
            if (plVar3 != (longlong *) 0x0) {
                *(undefined4 * )(plVar3 + 1) = 1;
                *plVar3 = (longlong) & PTR_LAB_140b79650;
                *(undefined4 * )(plVar3 + 4) = 0;
                plVar3[2] = (longlong) puVar1;
                plVar3[5] = 0;
                *(undefined4 * )(plVar3 + 6) = 0;
                plVar3[3] = (longlong) & PTR_u_WordFilterChina_140a4bce0;
                plVar3[7] = 0;
                plVar3[8] = 0;
                *(undefined4 * )(plVar3 + 9) = 0;
                (**(code * *) * puVar1)();
                plVar5 = plVar3;
            }
            iVar2 = FUN_1407befc0(plVar5, 0);
            if (iVar2 < 0) {
                if (plVar5 == (longlong *) 0x0) {
                    return iVar2;
                }
                (**(code * *)(*plVar5 + 8))(plVar5);
                return iVar2;
            }
        }
        DAT_140c65660 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c640c0 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14024a830(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014024a852. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_WordFilterChina_140a6e148, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c640c0 == 0) {
        iVar1 = FUN_14024a620();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024a87c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65660 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14024a8e0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014024a909. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_WordFilterChina_140a6e148, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c640c0 == 0) {
        iVar1 = FUN_14024a620();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024a937. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65660 + 0x20))(DAT_140c65660, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14024aa60(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63c08 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"World"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64568 != 0) {
                iVar2 = _DAT_140c65014;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_World_140acfe38;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\World.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_World_140acfe38;
                    plVar3[4] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b79850;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                lVar4 = FUN_1407c0c50((&DAT_140c66660)[DAT_140c66658], plVar5[2]);
                plVar5[5] = lVar4;
                if (lVar4 == 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return -0x7fffbffb;
                }
            }
        } else {
            plVar3 = (longlong *) FUN_14018b280(0x50, 0);
            puVar1 = DAT_140c63970;
            if (plVar3 != (longlong *) 0x0) {
                *(undefined4 * )(plVar3 + 1) = 1;
                *plVar3 = (longlong) & PTR_LAB_140b79650;
                *(undefined4 * )(plVar3 + 4) = 0;
                plVar3[2] = (longlong) puVar1;
                plVar3[5] = 0;
                *(undefined4 * )(plVar3 + 6) = 0;
                plVar3[3] = (longlong) & PTR_u_World_140acfe38;
                plVar3[7] = 0;
                plVar3[8] = 0;
                *(undefined4 * )(plVar3 + 9) = 0;
                (**(code * *) * puVar1)();
                plVar5 = plVar3;
            }
            iVar2 = FUN_1407befc0(plVar5, 0);
            if (iVar2 < 0) {
                if (plVar5 == (longlong *) 0x0) {
                    return iVar2;
                }
                (**(code * *)(*plVar5 + 8))(plVar5);
                return iVar2;
            }
        }
        DAT_140c63c08 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64698 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14024ac70(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014024ac92. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_World_140a6e180, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64698 == 0) {
        iVar1 = FUN_14024aa60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024acbc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63c08 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14024acc0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014024ace9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_World_140a6e180, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64698 == 0) {
        iVar1 = FUN_14024aa60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024ad17. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63c08 + 0x18))(DAT_140c63c08, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14024ad20(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014024ad49. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_World_140a6e180, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64698 == 0) {
        iVar1 = FUN_14024aa60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024ad77. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63c08 + 0x20))(DAT_140c63c08, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14024aea0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c65348 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"WorldClutter"), iVar2 == 0)
                ) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64c84 != 0) {
                iVar2 = _DAT_140c63c44;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_WorldClutter_140a71a80;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\WorldClutter.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_WorldClutter_140a71a80;
                    plVar3[4] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b79850;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                lVar4 = FUN_1407c0c50((&DAT_140c66660)[DAT_140c66658], plVar5[2]);
                plVar5[5] = lVar4;
                if (lVar4 == 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return -0x7fffbffb;
                }
            }
        } else {
            plVar3 = (longlong *) FUN_14018b280(0x50, 0);
            puVar1 = DAT_140c63970;
            if (plVar3 != (longlong *) 0x0) {
                *(undefined4 * )(plVar3 + 1) = 1;
                *plVar3 = (longlong) & PTR_LAB_140b79650;
                *(undefined4 * )(plVar3 + 4) = 0;
                plVar3[2] = (longlong) puVar1;
                plVar3[5] = 0;
                *(undefined4 * )(plVar3 + 6) = 0;
                plVar3[3] = (longlong) & PTR_u_WorldClutter_140a71a80;
                plVar3[7] = 0;
                plVar3[8] = 0;
                *(undefined4 * )(plVar3 + 9) = 0;
                (**(code * *) * puVar1)();
                plVar5 = plVar3;
            }
            iVar2 = FUN_1407befc0(plVar5, 0);
            if (iVar2 < 0) {
                if (plVar5 == (longlong *) 0x0) {
                    return iVar2;
                }
                (**(code * *)(*plVar5 + 8))(plVar5);
                return iVar2;
            }
        }
        DAT_140c65348 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64e10 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14024b0b0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014024b0d2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_WorldClutter_140a6e1b8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64e10 == 0) {
        iVar1 = FUN_14024aea0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024b0fc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65348 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14024b100(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014024b129. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_WorldClutter_140a6e1b8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64e10 == 0) {
        iVar1 = FUN_14024aea0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024b157. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65348 + 0x18))(DAT_140c65348, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14024b160(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014024b189. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_WorldClutter_140a6e1b8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64e10 == 0) {
        iVar1 = FUN_14024aea0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024b1b7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65348 + 0x20))(DAT_140c65348, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14024b2e0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63e90 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"WorldLayer"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63cc0 != 0) {
                iVar2 = _DAT_140c643ec;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_WorldLayer_140a7d3e8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\WorldLayer.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_WorldLayer_140a7d3e8;
                    plVar3[4] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b79850;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                lVar4 = FUN_1407c0c50((&DAT_140c66660)[DAT_140c66658], plVar5[2]);
                plVar5[5] = lVar4;
                if (lVar4 == 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return -0x7fffbffb;
                }
            }
        } else {
            plVar3 = (longlong *) FUN_14018b280(0x50, 0);
            puVar1 = DAT_140c63970;
            if (plVar3 != (longlong *) 0x0) {
                *(undefined4 * )(plVar3 + 1) = 1;
                *plVar3 = (longlong) & PTR_LAB_140b79650;
                *(undefined4 * )(plVar3 + 4) = 0;
                plVar3[2] = (longlong) puVar1;
                plVar3[5] = 0;
                *(undefined4 * )(plVar3 + 6) = 0;
                plVar3[3] = (longlong) & PTR_u_WorldLayer_140a7d3e8;
                plVar3[7] = 0;
                plVar3[8] = 0;
                *(undefined4 * )(plVar3 + 9) = 0;
                (**(code * *) * puVar1)();
                plVar5 = plVar3;
            }
            iVar2 = FUN_1407befc0(plVar5, 0);
            if (iVar2 < 0) {
                if (plVar5 == (longlong *) 0x0) {
                    return iVar2;
                }
                (**(code * *)(*plVar5 + 8))(plVar5);
                return iVar2;
            }
        }
        DAT_140c63e90 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c651f0 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14024b4f0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014024b512. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_WorldLayer_140a6e1f0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c651f0 == 0) {
        iVar1 = FUN_14024b2e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024b53c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63e90 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14024b540(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014024b569. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_WorldLayer_140a6e1f0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c651f0 == 0) {
        iVar1 = FUN_14024b2e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024b597. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63e90 + 0x18))(DAT_140c63e90, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14024b5a0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014024b5c9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_WorldLayer_140a6e1f0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c651f0 == 0) {
        iVar1 = FUN_14024b2e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024b5f7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63e90 + 0x20))(DAT_140c63e90, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14024b720(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c65388 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"WorldLocation2"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63b70 != 0) {
                iVar2 = _DAT_140c639dc;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_WorldLocation2_140ad2d08;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\WorldLocation2.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_WorldLocation2_140ad2d08;
                    plVar3[4] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b79850;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                lVar4 = FUN_1407c0c50((&DAT_140c66660)[DAT_140c66658], plVar5[2]);
                plVar5[5] = lVar4;
                if (lVar4 == 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return -0x7fffbffb;
                }
            }
        } else {
            plVar3 = (longlong *) FUN_14018b280(0x50, 0);
            puVar1 = DAT_140c63970;
            if (plVar3 != (longlong *) 0x0) {
                *(undefined4 * )(plVar3 + 1) = 1;
                *plVar3 = (longlong) & PTR_LAB_140b79650;
                *(undefined4 * )(plVar3 + 4) = 0;
                plVar3[2] = (longlong) puVar1;
                plVar3[5] = 0;
                *(undefined4 * )(plVar3 + 6) = 0;
                plVar3[3] = (longlong) & PTR_u_WorldLocation2_140ad2d08;
                plVar3[7] = 0;
                plVar3[8] = 0;
                *(undefined4 * )(plVar3 + 9) = 0;
                (**(code * *) * puVar1)();
                plVar5 = plVar3;
            }
            iVar2 = FUN_1407befc0(plVar5, 0);
            if (iVar2 < 0) {
                if (plVar5 == (longlong *) 0x0) {
                    return iVar2;
                }
                (**(code * *)(*plVar5 + 8))(plVar5);
                return iVar2;
            }
        }
        DAT_140c65388 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63e98 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14024b930(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014024b952. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_WorldLocation2_140a6e228, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63e98 == 0) {
        iVar1 = FUN_14024b720();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024b97c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65388 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14024b980(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014024b9a9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_WorldLocation2_140a6e228, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63e98 == 0) {
        iVar1 = FUN_14024b720();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024b9d7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65388 + 0x18))(DAT_140c65388, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14024b9e0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014024ba09. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_WorldLocation2_140a6e228, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63e98 == 0) {
        iVar1 = FUN_14024b720();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024ba37. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65388 + 0x20))(DAT_140c65388, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14024bb60(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64cd0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"WorldSky"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64d50 != 0) {
                iVar2 = _DAT_140c644c8;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_WorldSky_140ae1cd0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\WorldSky.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_WorldSky_140ae1cd0;
                    plVar3[4] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b79850;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                lVar4 = FUN_1407c0c50((&DAT_140c66660)[DAT_140c66658], plVar5[2]);
                plVar5[5] = lVar4;
                if (lVar4 == 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return -0x7fffbffb;
                }
            }
        } else {
            plVar3 = (longlong *) FUN_14018b280(0x50, 0);
            puVar1 = DAT_140c63970;
            if (plVar3 != (longlong *) 0x0) {
                *(undefined4 * )(plVar3 + 1) = 1;
                *plVar3 = (longlong) & PTR_LAB_140b79650;
                *(undefined4 * )(plVar3 + 4) = 0;
                plVar3[2] = (longlong) puVar1;
                plVar3[5] = 0;
                *(undefined4 * )(plVar3 + 6) = 0;
                plVar3[3] = (longlong) & PTR_u_WorldSky_140ae1cd0;
                plVar3[7] = 0;
                plVar3[8] = 0;
                *(undefined4 * )(plVar3 + 9) = 0;
                (**(code * *) * puVar1)();
                plVar5 = plVar3;
            }
            iVar2 = FUN_1407befc0(plVar5, 0);
            if (iVar2 < 0) {
                if (plVar5 == (longlong *) 0x0) {
                    return iVar2;
                }
                (**(code * *)(*plVar5 + 8))(plVar5);
                return iVar2;
            }
        }
        DAT_140c64cd0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c649d8 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14024bd70(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014024bd92. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_WorldSky_140a6e260, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c649d8 == 0) {
        iVar1 = FUN_14024bb60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024bdbc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64cd0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14024bdc0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014024bde9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_WorldSky_140a6e260, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c649d8 == 0) {
        iVar1 = FUN_14024bb60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024be17. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64cd0 + 0x18))(DAT_140c64cd0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14024be20(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014024be49. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_WorldSky_140a6e260, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c649d8 == 0) {
        iVar1 = FUN_14024bb60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024be77. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64cd0 + 0x20))(DAT_140c64cd0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14024bfa0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c643c8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"WorldSocket"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64f7c != 0) {
                iVar2 = _DAT_140c63aec;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_WorldSocket_140a752b8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\WorldSocket.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_WorldSocket_140a752b8;
                    plVar3[4] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b79850;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                lVar4 = FUN_1407c0c50((&DAT_140c66660)[DAT_140c66658], plVar5[2]);
                plVar5[5] = lVar4;
                if (lVar4 == 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return -0x7fffbffb;
                }
            }
        } else {
            plVar3 = (longlong *) FUN_14018b280(0x50, 0);
            puVar1 = DAT_140c63970;
            if (plVar3 != (longlong *) 0x0) {
                *(undefined4 * )(plVar3 + 1) = 1;
                *plVar3 = (longlong) & PTR_LAB_140b79650;
                *(undefined4 * )(plVar3 + 4) = 0;
                plVar3[2] = (longlong) puVar1;
                plVar3[5] = 0;
                *(undefined4 * )(plVar3 + 6) = 0;
                plVar3[3] = (longlong) & PTR_u_WorldSocket_140a752b8;
                plVar3[7] = 0;
                plVar3[8] = 0;
                *(undefined4 * )(plVar3 + 9) = 0;
                (**(code * *) * puVar1)();
                plVar5 = plVar3;
            }
            iVar2 = FUN_1407befc0(plVar5, 0);
            if (iVar2 < 0) {
                if (plVar5 == (longlong *) 0x0) {
                    return iVar2;
                }
                (**(code * *)(*plVar5 + 8))(plVar5);
                return iVar2;
            }
        }
        DAT_140c643c8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63ab4 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14024c1b0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014024c1d2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_WorldSocket_140a6e298, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63ab4 == 0) {
        iVar1 = FUN_14024bfa0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024c1fc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c643c8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14024c200(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014024c229. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_WorldSocket_140a6e298, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63ab4 == 0) {
        iVar1 = FUN_14024bfa0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024c257. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c643c8 + 0x18))(DAT_140c643c8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14024c260(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014024c289. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_WorldSocket_140a6e298, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63ab4 == 0) {
        iVar1 = FUN_14024bfa0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024c2b7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c643c8 + 0x20))(DAT_140c643c8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14024c3e0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64d28 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"WorldWaterEnvironment"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63b98 != 0) {
                iVar2 = _DAT_140c65588;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_WorldWaterEnvironment_140ad9de0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\WorldWaterEnvironment.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_WorldWaterEnvironment_140ad9de0;
                    plVar3[4] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b79850;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                lVar4 = FUN_1407c0c50((&DAT_140c66660)[DAT_140c66658], plVar5[2]);
                plVar5[5] = lVar4;
                if (lVar4 == 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return -0x7fffbffb;
                }
            }
        } else {
            plVar3 = (longlong *) FUN_14018b280(0x50, 0);
            puVar1 = DAT_140c63970;
            if (plVar3 != (longlong *) 0x0) {
                *(undefined4 * )(plVar3 + 1) = 1;
                *plVar3 = (longlong) & PTR_LAB_140b79650;
                *(undefined4 * )(plVar3 + 4) = 0;
                plVar3[2] = (longlong) puVar1;
                plVar3[5] = 0;
                *(undefined4 * )(plVar3 + 6) = 0;
                plVar3[3] = (longlong) & PTR_u_WorldWaterEnvironment_140ad9de0;
                plVar3[7] = 0;
                plVar3[8] = 0;
                *(undefined4 * )(plVar3 + 9) = 0;
                (**(code * *) * puVar1)();
                plVar5 = plVar3;
            }
            iVar2 = FUN_1407befc0(plVar5, 0);
            if (iVar2 < 0) {
                if (plVar5 == (longlong *) 0x0) {
                    return iVar2;
                }
                (**(code * *)(*plVar5 + 8))(plVar5);
                return iVar2;
            }
        }
        DAT_140c64d28 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63b38 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14024c5f0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014024c612. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_WorldWaterEnvironment_140a6e2d0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63b38 == 0) {
        iVar1 = FUN_14024c3e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024c63c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64d28 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14024c6a0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014024c6c9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_WorldWaterEnvironment_140a6e2d0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63b38 == 0) {
        iVar1 = FUN_14024c3e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024c6f7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64d28 + 0x20))(DAT_140c64d28, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14024c820(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c65110 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"WorldWaterLayer"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c640cc != 0) {
                iVar2 = _DAT_140c6411c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_WorldWaterLayer_140a63550;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\WorldWaterLayer.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_WorldWaterLayer_140a63550;
                    plVar3[4] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b79850;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                lVar4 = FUN_1407c0c50((&DAT_140c66660)[DAT_140c66658], plVar5[2]);
                plVar5[5] = lVar4;
                if (lVar4 == 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return -0x7fffbffb;
                }
            }
        } else {
            plVar3 = (longlong *) FUN_14018b280(0x50, 0);
            puVar1 = DAT_140c63970;
            if (plVar3 != (longlong *) 0x0) {
                *(undefined4 * )(plVar3 + 1) = 1;
                *plVar3 = (longlong) & PTR_LAB_140b79650;
                *(undefined4 * )(plVar3 + 4) = 0;
                plVar3[2] = (longlong) puVar1;
                plVar3[5] = 0;
                *(undefined4 * )(plVar3 + 6) = 0;
                plVar3[3] = (longlong) & PTR_u_WorldWaterLayer_140a63550;
                plVar3[7] = 0;
                plVar3[8] = 0;
                *(undefined4 * )(plVar3 + 9) = 0;
                (**(code * *) * puVar1)();
                plVar5 = plVar3;
            }
            iVar2 = FUN_1407befc0(plVar5, 0);
            if (iVar2 < 0) {
                if (plVar5 == (longlong *) 0x0) {
                    return iVar2;
                }
                (**(code * *)(*plVar5 + 8))(plVar5);
                return iVar2;
            }
        }
        DAT_140c65110 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64b50 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14024ca30(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014024ca52. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_WorldWaterLayer_140a6e308, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64b50 == 0) {
        iVar1 = FUN_14024c820();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024ca7c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65110 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14024ca80(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014024caa9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_WorldWaterLayer_140a6e308, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64b50 == 0) {
        iVar1 = FUN_14024c820();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024cad7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65110 + 0x18))(DAT_140c65110, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14024cae0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014024cb09. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_WorldWaterLayer_140a6e308, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64b50 == 0) {
        iVar1 = FUN_14024c820();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024cb37. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65110 + 0x20))(DAT_140c65110, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14024cc60(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c643c0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"WorldWaterType"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64e78 != 0) {
                iVar2 = _DAT_140c643f0;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_WorldWaterType_140a807a8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\WorldWaterType.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_WorldWaterType_140a807a8;
                    plVar3[4] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b79850;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                lVar4 = FUN_1407c0c50((&DAT_140c66660)[DAT_140c66658], plVar5[2]);
                plVar5[5] = lVar4;
                if (lVar4 == 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return -0x7fffbffb;
                }
            }
        } else {
            plVar3 = (longlong *) FUN_14018b280(0x50, 0);
            puVar1 = DAT_140c63970;
            if (plVar3 != (longlong *) 0x0) {
                *(undefined4 * )(plVar3 + 1) = 1;
                *plVar3 = (longlong) & PTR_LAB_140b79650;
                *(undefined4 * )(plVar3 + 4) = 0;
                plVar3[2] = (longlong) puVar1;
                plVar3[5] = 0;
                *(undefined4 * )(plVar3 + 6) = 0;
                plVar3[3] = (longlong) & PTR_u_WorldWaterType_140a807a8;
                plVar3[7] = 0;
                plVar3[8] = 0;
                *(undefined4 * )(plVar3 + 9) = 0;
                (**(code * *) * puVar1)();
                plVar5 = plVar3;
            }
            iVar2 = FUN_1407befc0(plVar5, 0);
            if (iVar2 < 0) {
                if (plVar5 == (longlong *) 0x0) {
                    return iVar2;
                }
                (**(code * *)(*plVar5 + 8))(plVar5);
                return iVar2;
            }
        }
        DAT_140c643c0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c650c0 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14024ce70(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014024ce92. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_WorldWaterType_140a6e340, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c650c0 == 0) {
        iVar1 = FUN_14024cc60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024cebc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c643c0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14024cec0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014024cee9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_WorldWaterType_140a6e340, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c650c0 == 0) {
        iVar1 = FUN_14024cc60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024cf17. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c643c0 + 0x18))(DAT_140c643c0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14024cf20(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014024cf49. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_WorldWaterType_140a6e340, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c650c0 == 0) {
        iVar1 = FUN_14024cc60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024cf77. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c643c0 + 0x20))(DAT_140c643c0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14024d0a0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63a00 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"WorldWaterFog"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64ed0 != 0) {
                iVar2 = _DAT_140c6493c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_WorldWaterFog_140a61f00;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\WorldWaterFog.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_WorldWaterFog_140a61f00;
                    plVar3[4] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b79850;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                lVar4 = FUN_1407c0c50((&DAT_140c66660)[DAT_140c66658], plVar5[2]);
                plVar5[5] = lVar4;
                if (lVar4 == 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return -0x7fffbffb;
                }
            }
        } else {
            plVar3 = (longlong *) FUN_14018b280(0x50, 0);
            puVar1 = DAT_140c63970;
            if (plVar3 != (longlong *) 0x0) {
                *(undefined4 * )(plVar3 + 1) = 1;
                *plVar3 = (longlong) & PTR_LAB_140b79650;
                *(undefined4 * )(plVar3 + 4) = 0;
                plVar3[2] = (longlong) puVar1;
                plVar3[5] = 0;
                *(undefined4 * )(plVar3 + 6) = 0;
                plVar3[3] = (longlong) & PTR_u_WorldWaterFog_140a61f00;
                plVar3[7] = 0;
                plVar3[8] = 0;
                *(undefined4 * )(plVar3 + 9) = 0;
                (**(code * *) * puVar1)();
                plVar5 = plVar3;
            }
            iVar2 = FUN_1407befc0(plVar5, 0);
            if (iVar2 < 0) {
                if (plVar5 == (longlong *) 0x0) {
                    return iVar2;
                }
                (**(code * *)(*plVar5 + 8))(plVar5);
                return iVar2;
            }
        }
        DAT_140c63a00 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c645dc = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14024d2b0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014024d2d2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_WorldWaterFog_140a6e378, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c645dc == 0) {
        iVar1 = FUN_14024d0a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024d2fc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63a00 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14024d360(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014024d389. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_WorldWaterFog_140a6e378, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c645dc == 0) {
        iVar1 = FUN_14024d0a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024d3b7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63a00 + 0x20))(DAT_140c63a00, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14024d4e0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c65330 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"WorldWaterWake"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c647b0 != 0) {
                iVar2 = _DAT_140c64e28;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_WorldWaterWake_140a74b88;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\WorldWaterWake.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_WorldWaterWake_140a74b88;
                    plVar3[4] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b79850;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                lVar4 = FUN_1407c0c50((&DAT_140c66660)[DAT_140c66658], plVar5[2]);
                plVar5[5] = lVar4;
                if (lVar4 == 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return -0x7fffbffb;
                }
            }
        } else {
            plVar3 = (longlong *) FUN_14018b280(0x50, 0);
            puVar1 = DAT_140c63970;
            if (plVar3 != (longlong *) 0x0) {
                *(undefined4 * )(plVar3 + 1) = 1;
                *plVar3 = (longlong) & PTR_LAB_140b79650;
                *(undefined4 * )(plVar3 + 4) = 0;
                plVar3[2] = (longlong) puVar1;
                plVar3[5] = 0;
                *(undefined4 * )(plVar3 + 6) = 0;
                plVar3[3] = (longlong) & PTR_u_WorldWaterWake_140a74b88;
                plVar3[7] = 0;
                plVar3[8] = 0;
                *(undefined4 * )(plVar3 + 9) = 0;
                (**(code * *) * puVar1)();
                plVar5 = plVar3;
            }
            iVar2 = FUN_1407befc0(plVar5, 0);
            if (iVar2 < 0) {
                if (plVar5 == (longlong *) 0x0) {
                    return iVar2;
                }
                (**(code * *)(*plVar5 + 8))(plVar5);
                return iVar2;
            }
        }
        DAT_140c65330 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63980 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14024d6f0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014024d712. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_WorldWaterWake_140a6e3b0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63980 == 0) {
        iVar1 = FUN_14024d4e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024d73c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65330 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14024d740(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014024d769. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_WorldWaterWake_140a6e3b0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63980 == 0) {
        iVar1 = FUN_14024d4e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024d797. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65330 + 0x18))(DAT_140c65330, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14024d7a0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014024d7c9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_WorldWaterWake_140a6e3b0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63980 == 0) {
        iVar1 = FUN_14024d4e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024d7f7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65330 + 0x20))(DAT_140c65330, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14024d920(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64270 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"WorldZone"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c651e0 != 0) {
                iVar2 = _DAT_140c64a6c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_WorldZone_140a61d70;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\WorldZone.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_WorldZone_140a61d70;
                    plVar3[4] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b79850;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                lVar4 = FUN_1407c0c50((&DAT_140c66660)[DAT_140c66658], plVar5[2]);
                plVar5[5] = lVar4;
                if (lVar4 == 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return -0x7fffbffb;
                }
            }
        } else {
            plVar3 = (longlong *) FUN_14018b280(0x50, 0);
            puVar1 = DAT_140c63970;
            if (plVar3 != (longlong *) 0x0) {
                *(undefined4 * )(plVar3 + 1) = 1;
                *plVar3 = (longlong) & PTR_LAB_140b79650;
                *(undefined4 * )(plVar3 + 4) = 0;
                plVar3[2] = (longlong) puVar1;
                plVar3[5] = 0;
                *(undefined4 * )(plVar3 + 6) = 0;
                plVar3[3] = (longlong) & PTR_u_WorldZone_140a61d70;
                plVar3[7] = 0;
                plVar3[8] = 0;
                *(undefined4 * )(plVar3 + 9) = 0;
                (**(code * *) * puVar1)();
                plVar5 = plVar3;
            }
            iVar2 = FUN_1407befc0(plVar5, 0);
            if (iVar2 < 0) {
                if (plVar5 == (longlong *) 0x0) {
                    return iVar2;
                }
                (**(code * *)(*plVar5 + 8))(plVar5);
                return iVar2;
            }
        }
        DAT_140c64270 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64634 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14024db30(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014024db52. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_WorldZone_140a6e3e8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64634 == 0) {
        iVar1 = FUN_14024d920();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024db7c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64270 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14024db80(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014024dba9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_WorldZone_140a6e3e8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64634 == 0) {
        iVar1 = FUN_14024d920();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024dbd7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64270 + 0x18))(DAT_140c64270, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14024dbe0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014024dc09. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_WorldZone_140a6e3e8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64634 == 0) {
        iVar1 = FUN_14024d920();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024dc37. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64270 + 0x20))(DAT_140c64270, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14024dd60(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63988 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"XpPerLevel"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c649a0 != 0) {
                iVar2 = _DAT_140c63f18;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_XpPerLevel_140a83238;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\XpPerLevel.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_XpPerLevel_140a83238;
                    plVar3[4] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b79850;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                lVar4 = FUN_1407c0c50((&DAT_140c66660)[DAT_140c66658], plVar5[2]);
                plVar5[5] = lVar4;
                if (lVar4 == 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return -0x7fffbffb;
                }
            }
        } else {
            plVar3 = (longlong *) FUN_14018b280(0x50, 0);
            puVar1 = DAT_140c63970;
            if (plVar3 != (longlong *) 0x0) {
                *(undefined4 * )(plVar3 + 1) = 1;
                *plVar3 = (longlong) & PTR_LAB_140b79650;
                *(undefined4 * )(plVar3 + 4) = 0;
                plVar3[2] = (longlong) puVar1;
                plVar3[5] = 0;
                *(undefined4 * )(plVar3 + 6) = 0;
                plVar3[3] = (longlong) & PTR_u_XpPerLevel_140a83238;
                plVar3[7] = 0;
                plVar3[8] = 0;
                *(undefined4 * )(plVar3 + 9) = 0;
                (**(code * *) * puVar1)();
                plVar5 = plVar3;
            }
            iVar2 = FUN_1407befc0(plVar5, 0);
            if (iVar2 < 0) {
                if (plVar5 == (longlong *) 0x0) {
                    return iVar2;
                }
                (**(code * *)(*plVar5 + 8))(plVar5);
                return iVar2;
            }
        }
        DAT_140c63988 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64e0c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14024df70(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014024df92. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_XpPerLevel_140a6e420, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64e0c == 0) {
        iVar1 = FUN_14024dd60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024dfbc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63988 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14024dfc0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014024dfe9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_XpPerLevel_140a6e420, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64e0c == 0) {
        iVar1 = FUN_14024dd60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024e017. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63988 + 0x18))(DAT_140c63988, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14024e020(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014024e049. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_XpPerLevel_140a6e420, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64e0c == 0) {
        iVar1 = FUN_14024dd60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024e077. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63988 + 0x20))(DAT_140c63988, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14024e1a0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64f98 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"ZoneCompletion"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64440 != 0) {
                iVar2 = _DAT_140c654f4;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_ZoneCompletion_140ad7440;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\ZoneCompletion.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_ZoneCompletion_140ad7440;
                    plVar3[4] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b79850;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                lVar4 = FUN_1407c0c50((&DAT_140c66660)[DAT_140c66658], plVar5[2]);
                plVar5[5] = lVar4;
                if (lVar4 == 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return -0x7fffbffb;
                }
            }
        } else {
            plVar3 = (longlong *) FUN_14018b280(0x50, 0);
            puVar1 = DAT_140c63970;
            if (plVar3 != (longlong *) 0x0) {
                *(undefined4 * )(plVar3 + 1) = 1;
                *plVar3 = (longlong) & PTR_LAB_140b79650;
                *(undefined4 * )(plVar3 + 4) = 0;
                plVar3[2] = (longlong) puVar1;
                plVar3[5] = 0;
                *(undefined4 * )(plVar3 + 6) = 0;
                plVar3[3] = (longlong) & PTR_u_ZoneCompletion_140ad7440;
                plVar3[7] = 0;
                plVar3[8] = 0;
                *(undefined4 * )(plVar3 + 9) = 0;
                (**(code * *) * puVar1)();
                plVar5 = plVar3;
            }
            iVar2 = FUN_1407befc0(plVar5, 0);
            if (iVar2 < 0) {
                if (plVar5 == (longlong *) 0x0) {
                    return iVar2;
                }
                (**(code * *)(*plVar5 + 8))(plVar5);
                return iVar2;
            }
        }
        DAT_140c64f98 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    DAT_140c63a50 = 0;
    return 0;
}


undefined8 FUN_14024e3b0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014024e3d2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_ZoneCompletion_140a6e458, DAT_140c63858);
        return uVar2;
    }
    if (DAT_140c63a50 == 0) {
        iVar1 = FUN_14024e1a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024e3fc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64f98 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}


undefined8 FUN_14024e460(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014024e489. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_ZoneCompletion_140a6e458, param_1, DAT_140c63858);
        return uVar2;
    }
    if (DAT_140c63a50 == 0) {
        iVar1 = FUN_14024e1a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024e4b7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64f98 + 0x20))(DAT_140c64f98, param_1);
            return uVar2;
        }
    }
    return 0;
}


/*
Unable to decompile 'FUN_14024e5e0'
Cause: Exception while decompiling 14024e5e0: process: timeout

*/


void FUN_140250b70(longlong *param_1, ulonglong param_2) {
    undefined8 uVar1;
    undefined2 *puVar2;
    ulonglong uVar3;
    longlong lVar4;
    ulonglong uVar5;
    longlong lVar6;
    undefined8 *puVar7;

    if ((ulonglong) param_1[1] <= param_2) {
        lVar6 = FUN_14018db00(*param_1, param_2, 0x20);
        uVar3 = param_1[1];
        uVar5 = 0;
        if (uVar3 < param_2) {
            puVar7 = (undefined8 * )(uVar3 * 0x20 + 0x10 + lVar6);
            lVar4 = param_2 - uVar3;
            do {
                if (puVar7 != (undefined8 * ) & DAT_00000010) {
                    puVar7[-1] = 0;
                    *puVar7 = 0;
                    puVar7[1] = 0;
                    puVar2 = (undefined2 *) FUN_14018b280(0x10);
                    puVar7[-1] = puVar2;
                    *puVar7 = puVar2;
                    puVar7[1] = puVar2 + 8;
                    if (puVar2 != (undefined2 *) 0x0) {
                        *puVar2 = 0;
                    }
                }
                puVar7 = puVar7 + 4;
                lVar4 = lVar4 + -1;
            } while (lVar4 != 0);
        }
        if (*param_1 != lVar6) {
            if (param_1[1] != 0) {
                puVar7 = (undefined8 * )(lVar6 + 0x10);
                do {
                    if (puVar7 != (undefined8 * ) & DAT_00000010) {
                        lVar4 = *param_1 + (-0x10 - lVar6);
                        puVar7[-1] = 0;
                        *puVar7 = 0;
                        puVar7[1] = 0;
                        puVar7[-1] = *(undefined8 * )((longlong) puVar7 + lVar4 + 8);
                        *(undefined8 * )((longlong) puVar7 + lVar4 + 8) = 0;
                        uVar1 = *puVar7;
                        *puVar7 = *(undefined8 * )((longlong) puVar7 + lVar4 + 0x10);
                        *(undefined8 * )((longlong) puVar7 + lVar4 + 0x10) = uVar1;
                        uVar1 = puVar7[1];
                        puVar7[1] = *(undefined8 * )((longlong) puVar7 + lVar4 + 0x18);
                        *(undefined8 * )((longlong) puVar7 + lVar4 + 0x18) = uVar1;
                    }
                    lVar4 = *(longlong * )((longlong) puVar7 + *param_1 + (-0x10 - lVar6) + 8);
                    if (lVar4 != 0) {
                        FUN_14018b900(lVar4, 0);
                    }
                    uVar5 = uVar5 + 1;
                    puVar7 = puVar7 + 4;
                } while (uVar5 < (ulonglong) param_1[1]);
            }
            lVar4 = *param_1;
            if (lVar4 != 0) {
                (**(code * *)(*(longlong * )(lVar4 + -0x10) + 8))(lVar4 + -0x10);
            }
            *param_1 = lVar6;
        }
        param_1[1] = param_2;
        return;
    }
    if ((ulonglong) param_1[1] <= param_2) {
        param_1[1] = param_2;
        return;
    }
    lVar6 = param_2 << 5;
    uVar3 = param_2;
    do {
        lVar4 = *(longlong * )(lVar6 + 8 + *param_1);
        if (lVar4 != 0) {
            FUN_14018b900(lVar4, 0);
        }
        uVar3 = uVar3 + 1;
        lVar6 = lVar6 + 0x20;
    } while (uVar3 < (ulonglong) param_1[1]);
    param_1[1] = param_2;
    return;
}


float *FUN_140250d30(float *param_1, ushort *param_2, char param_3) {
    float fVar1;
    ushort uVar2;
    ushort uVar3;
    uint uVar4;
    float fVar6;
    float fVar7;
    float fVar8;
    ulonglong uVar5;

    uVar4 = *(uint * )(param_2 + 2) >> (param_3 * '\x02' & 0x3fU) & 3;
    uVar5 = (ulonglong) uVar4;
    if (uVar4 == 0) {
        uVar3 = *param_2;
    } else {
        uVar3 = param_2[1];
        if (uVar5 != 1) {
            uVar2 = *param_2;
            if (uVar3 < uVar2) {
                fVar1 = *(float *) (&DAT_140ae37b8 + uVar5 * 4);
                fVar6 = (float) (uint)(uVar2 >> 0xb) * 0.03225806;
                fVar7 = (float) (uint)(uVar2 >> 5 & 0x3f) * 0.01587302;
                fVar8 = (float) (uint)(uVar2 & 0x1f) * 0.03225806;
                *param_1 = fVar1 * ((float) (uint)(uVar3 >> 0xb) * 0.03225806 - fVar6) + fVar6;
                param_1[1] = fVar1 * ((float) (uint)(uVar3 >> 5 & 0x3f) * 0.01587302 - fVar7) + fVar7;
                param_1[2] = fVar1 * ((float) (uint)(uVar3 & 0x1f) * 0.03225806 - fVar8) + fVar8;
                param_1[3] = fVar1 * 0.0 + 1.0;
                return param_1;
            }
            if (uVar5 == 3) {
                *param_1 = 0.0;
                param_1[1] = 0.0;
                param_1[2] = 0.0;
                param_1[3] = 0.0;
                return param_1;
            }
            *param_1 = ((float) (uint)(uVar3 >> 0xb) * 0.03225806 +
                        (float) (uint)(uVar2 >> 0xb) * 0.03225806) * 0.5;
            param_1[1] = ((float) (uint)(uVar3 >> 5 & 0x3f) * 0.01587302 +
                          (float) (uint)(uVar2 >> 5 & 0x3f) * 0.01587302) * 0.5;
            param_1[2] = ((float) (uint)(uVar3 & 0x1f) * 0.03225806 +
                          (float) (uint)(uVar2 & 0x1f) * 0.03225806) * 0.5;
            param_1[3] = 1.0;
            return param_1;
        }
    }
    *param_1 = (float) (uint)(uVar3 >> 0xb) * 0.03225806;
    param_1[1] = (float) (uint)(uVar3 >> 5 & 0x3f) * 0.01587302;
    param_1[2] = (float) (uint)(uVar3 & 0x1f) * 0.03225806;
    param_1[3] = 1.0;
    return param_1;
}


undefined (*) [16]
FUN_140250f60(undefined(*param_1)
[16],
longlong param_2,
int param_3,
float *param_4
)

{
longlong lVar1;
uint uVar2;
uint uVar3;
ulonglong uVar4;
uint uVar5;
uint uVar6;
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
float local_88;
float fStack132;
float fStack128;
float fStack124;

uVar6 = (uint) * param_4;
uVar5 = (uint) param_4[1];
uVar2 = (DAT_140c77768._4_4_ + uVar5 & 3) << 2;
uVar4 = (ulonglong)(uint)(((int) (DAT_140c77768._4_4_ + uVar5) >> 2) * param_3);
lVar1 = ((longlong)(int)((int) DAT_140c77768 + uVar6) >> 2) * 8;
uVar3 = (int) DAT_140c77768 + uVar6 & 3;
fVar7 = *param_4 - (float) uVar6;
fVar8 = param_4[1] - (float) uVar5;
fVar19 = 1.0 - fVar7;
fVar20 = 1.0 - fVar8;
FUN_140250d30(&local_88, lVar1
+ uVar4 + param_2,uVar3 | uVar2);
fVar12 = local_88 * fVar7;
fVar14 = fStack132 * fVar7;
fVar16 = fStack128 * fVar7;
fVar18 = fStack124 * fVar7;
fVar9 = fVar7;
fVar10 = fVar7;
fVar11 = fVar7;
FUN_140250d30(&local_88, uVar4
+ ((longlong)(int)uVar6 >> 2) * 8 + param_2,uVar6 & 3 | uVar2);
fVar13 = (fVar12 + local_88 * fVar19) * fVar8;
fVar15 = (fVar14 + fStack132 * fVar19) * fVar8;
fVar17 = (fVar16 + fStack128 * fVar19) * fVar8;
fVar8 = (fVar18 + fStack124 * fVar19) * fVar8;
fVar12 = fVar19;
fVar14 = fVar19;
fVar16 = fVar19;
FUN_140250d30(&local_88, (ulonglong)(uint)
(((int)uVar5 >> 2) * param_3) + lVar1 + param_2,
(uVar5 & 3) << 2 | uVar3);
fVar7 = local_88 * fVar7;
fVar9 = fStack132 * fVar9;
fVar10 = fStack128 * fVar10;
fVar11 = fStack124 * fVar11;
FUN_140250d30(&local_88,
(ulonglong)(uint)
(((int)uVar5 >> 2) * param_3) + param_2 +
((longlong)(int)uVar6 >> 2) * 8,(uVar5 & 3) << 2 | uVar6 & 3);
*
param_1 = CONCAT412(fVar8 + (fVar11 + fStack124 * fVar16) * fVar20,
                    CONCAT48(fVar17 + (fVar10 + fStack128 * fVar14) * fVar20,
                             CONCAT44(fVar15 + (fVar9 + fStack132 * fVar12) * fVar20,
                                      fVar13 + (fVar7 + local_88 * fVar19) * fVar20)));
return
param_1;
}



undefined (*) [16]
FUN_140251170(undefined(*param_1)
[16],
longlong param_2,
int param_3,
float *param_4
)

{
byte bVar1;
byte bVar2;
uint uVar3;
float *pfVar4;
ulonglong *puVar5;
uint uVar6;
int iVar7;
ulonglong uVar8;
longlong lVar9;
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
undefined local_b8[32];
undefined local_98[112];

iVar7 = (int) *param_4;
uVar6 = (uint) param_4[1];
bVar1 = (byte)((int) DAT_140c77768 + iVar7) & 3;
uVar3 = ((int) (DAT_140c77768._4_4_ + uVar6) >> 2) * param_3;
lVar9 = ((longlong)((int) DAT_140c77768 + iVar7) >> 2) * 0x10;
bVar2 = (byte)((DAT_140c77768._4_4_ + uVar6 & 3) << 2);
puVar5 = (ulonglong * )(lVar9 + (ulonglong)
uVar3 + param_2);
fVar12 = *param_4 - (float) iVar7;
fVar13 = param_4[1] - (float) uVar6;
uVar8 = (ulonglong)((uint)(*puVar5 >> ((bVar1 | bVar2) << 2)) & 0xf);
fVar10 = 1.0 - fVar12;
fVar11 = 1.0 - fVar13;
pfVar4 = (float *) FUN_140250d30(local_b8, puVar5 + 1);
fVar25 = 1.844674e+19;
fVar14 = (float) uVar8;
if ((longlong)uVar8 < 0) {
fVar14 = fVar14 + 1.844674e+19;
}
fVar26 = 0.06666667;
uVar8 = (ulonglong)
        ((uint)(*(ulonglong * )(((longlong) iVar7 >> 2) * 0x10 + (ulonglong)
uVar3 + param_2) >>
(((byte)iVar7 & 3 | bVar2) << 2)) & 0xf);
fVar18 = *pfVar4 * fVar12;
fVar20 = pfVar4[1] * fVar12;
fVar22 = pfVar4[2] * fVar12;
fVar24 = fVar14 * 0.06666667 * fVar12;
fVar14 = fVar12;
fVar16 = fVar12;
fVar17 = fVar12;
pfVar4 = (float *) FUN_140250d30();
fVar15 = (float) uVar8;
if ((longlong)uVar8 < 0) {
fVar15 = fVar15 + fVar25;
}
uVar8 = (ulonglong)
        ((uint)(*(ulonglong * )((ulonglong)(uint)(((int) uVar6 >> 2) * param_3) + lVar9 + param_2)
                        >> (((byte)((uVar6 & 3) << 2) | bVar1) << 2)) & 0xf);
fVar19 = (fVar18 + *pfVar4 * fVar10) * fVar13;
fVar21 = (fVar20 + pfVar4[1] * fVar10) * fVar13;
fVar23 = (fVar22 + pfVar4[2] * fVar10) * fVar13;
fVar13 = (fVar24 + fVar15 * fVar26 * fVar10) * fVar13;
fVar15 = fVar10;
fVar18 = fVar10;
fVar20 = fVar10;
pfVar4 = (float *) FUN_140250d30();
fVar22 = (float) uVar8;
if ((longlong)uVar8 < 0) {
fVar22 = fVar22 + fVar25;
}
lVar9 = ((longlong) iVar7 >> 2) * 0x10;
fVar12 = *pfVar4 * fVar12;
fVar14 = pfVar4[1] * fVar14;
fVar16 = pfVar4[2] * fVar16;
fVar17 = fVar22 * fVar26 * fVar17;
param_2 = (ulonglong)(uint)(((int) uVar6 >> 2) * param_3) + param_2;
uVar8 = (ulonglong)
        ((uint)(*(ulonglong * )(lVar9 + param_2) >>
                                                 (((byte)((uVar6 & 3) << 2) | (byte) iVar7 & 3) << 2)) & 0xf);
pfVar4 = (float *) FUN_140250d30(local_98, lVar9 + 8 + param_2);
fVar22 = (float) uVar8;
if ((longlong)uVar8 < 0) {
fVar22 = fVar22 + fVar25;
}
*
param_1 = CONCAT412(fVar13 + (fVar17 + fVar22 * fVar26 * fVar20) * fVar11,
                    CONCAT48(fVar23 + (fVar16 + pfVar4[2] * fVar18) * fVar11,
                             CONCAT44(fVar21 + (fVar14 + pfVar4[1] * fVar15) * fVar11,
                                      fVar19 + (fVar12 + *pfVar4 * fVar10) * fVar11)));
return
param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1402514b0(int param_1, undefined8 param_2, undefined4 param_3) {
    int iVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong *plVar5;

    plVar4 = (longlong *) 0x0;
    if (_DAT_140c6566c == 0) {
        DAT_140c63778 = &DAT_1407fb190;
        DAT_140c63780 = &DAT_1407f8f7c;
        plVar2 = (longlong *) FUN_14018b280(0x18, 0);
        plVar5 = plVar4;
        if (plVar2 != (longlong *) 0x0) {
            plVar2[1] = 2;
            plVar2[2] = 0;
            *plVar2 = (longlong) & DAT_140ae37c8;
            plVar5 = plVar2;
        }
        _DAT_140c6566c = 1;
        plVar5[2] = (longlong) DAT_140c63770;
        DAT_140c63770 = plVar5;
    }
    if (param_1 == 0) {
        lVar3 = FUN_14018b280(0x28d0, 0);
        if (lVar3 != 0) {
            plVar4 = (longlong *) FUN_140268db0(lVar3, param_2);
        }
        *(undefined4 * )(plVar4 + 0x30c) = param_3;
        iVar1 = FUN_140269350(plVar4);
        if ((((iVar1 < 0) || (iVar1 = FUN_140269730(plVar4), iVar1 < 0)) ||
             (iVar1 = FUN_1402698c0(plVar4), iVar1 < 0)) ||
            (iVar1 = (**(code * *)(*plVar4 + 0x28))(plVar4, plVar4 + 7), iVar1 < 0)) {
            (**(code * *)(*plVar4 + 8))(plVar4);
            return iVar1;
        }
    } else {
        if (param_1 != 1) {
            return -0x5ff1ffff;
        }
        lVar3 = FUN_14018b280(0x21e0, 0);
        if (lVar3 != 0) {
            plVar4 = (longlong *) FUN_140275a30(lVar3, param_2);
        }
        iVar1 = FUN_1402765b0(plVar4, param_3);
        if (iVar1 < 0) {
            (**(code * *)(*plVar4 + 8))(plVar4);
            return iVar1;
        }
    }
    DAT_140c65670 = plVar4;
    return 0;
}


float *FUN_140251620(float *param_1, float *param_2, float *param_3, uint *param_4) {
    float fVar1;
    float fVar2;
    uint uVar3;
    float fVar5;
    undefined auVar4[16];

    fVar1 = *param_2;
    fVar2 = param_2[1];
    fVar5 = fVar2 * param_3[7] + fVar1 * param_3[3] + param_3[0xb] * 0.0 + param_3[0xf];
    auVar4 = divps(CONCAT412(fVar5, CONCAT48(fVar2 * param_3[6] + fVar1 * param_3[2] +
                                             param_3[10] * 0.0 + param_3[0xe],
                                             CONCAT44(fVar2 * param_3[5] + fVar1 * param_3[1] +
                                                      param_3[9] * 0.0 + param_3[0xd],
                                                      fVar2 * param_3[4] + fVar1 * *param_3 +
                                                      param_3[8] * 0.0 + param_3[0xc]))),
                   CONCAT412(fVar5, CONCAT48(fVar5, CONCAT44(fVar5, fVar5))) &
                   (undefined[16])
    0xffffffffffffffff);
    uVar3 = param_4[3];
    *param_1 = (SUB164(auVar4, 0) + 1.0) * 0.5 * (float) (ulonglong)
    param_4[2] +
    (float) (ulonglong) * param_4;
    fVar1 = (float) param_4[5];
    fVar2 = (float) param_4[4];
    param_1[1] = (0.5 - SUB164(auVar4 >> 0x20, 0) * 0.5) * (float) (ulonglong)
    uVar3 +
    (float) (ulonglong)
    param_4[1];
    param_1[2] = (fVar1 - fVar2) * SUB164(auVar4 >> 0x40, 0) + (float) param_4[4];
    return param_1;
}


undefined (*) [16]
FUN_140251700(undefined(*param_1)
[16],
float *param_2,
float *param_3,
float *param_4, uint
*param_5)

{
float fVar1;
float fVar3;
undefined auVar2[16];
float fVar4;

fVar1 = ((*param_2 - (float) (ulonglong) * param_5) / (float) (ulonglong)
param_5[2]) * 2.0 - 1.0;
fVar4 = 1.0 - ((param_2[1] - (float) (ulonglong)
param_5[1]) / (float)(ulonglong)param_5[3]) * 2.0;
fVar3 = fVar4 * param_4[7] + fVar1 * param_4[3] + param_4[0xb] * 0.0 + param_4[0xf];
auVar2 = divps(CONCAT412(fVar3, CONCAT48(fVar4 * param_4[6] + fVar1 * param_4[2] +
                                         param_4[10] * 0.0 + param_4[0xe],
                                         CONCAT44(fVar4 * param_4[5] + fVar1 * param_4[1] +
                                                  param_4[9] * 0.0 + param_4[0xd],
                                                  fVar4 * param_4[4] + fVar1 * *param_4 +
                                                  param_4[8] * 0.0 + param_4[0xc]))),
               CONCAT412(fVar3, CONCAT48(fVar3, CONCAT44(fVar3, fVar3))));
fVar3 = SUB164(auVar2 >> 0x20, 0);
fVar4 = SUB164(auVar2 >> 0x40, 0);
fVar1 = SUB164(auVar2, 0);
*
param_1 = CONCAT412(fVar3 * param_3[7] + fVar1 * param_3[3] + fVar4 * param_3[0xb] + param_3[0xf],
                    CONCAT48(fVar3 * param_3[6] + fVar1 * param_3[2] + fVar4 * param_3[10] +
                             param_3[0xe],
                             CONCAT44(fVar3 * param_3[5] + fVar1 * param_3[1] +
                                      fVar4 * param_3[9] + param_3[0xd],
                                      fVar3 * param_3[4] + fVar1 * *param_3 + fVar4 * param_3[8]
                                      + param_3[0xc])));
return
param_1;
}


undefined8 *FUN_140251810(undefined8 *param_1) {
    int iVar1;
    bool bVar2;
    undefined8 local_res8;
    undefined * *local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined * *local_28;
    undefined8 local_20;
    LPVOID local_18;

    *param_1 = &PTR_FUN_140b603a0;
    bVar2 = DAT_140c65678 != (undefined8 *) 0x0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    if (bVar2) {
        local_40 = 0;
        local_48 = &PTR_LAB_140b5e648;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_48);
        local_28 = local_48;
        local_res8 = 0x141ddde90;
        local_18 = local_38;
        local_20 = local_40;
        iVar1 = FUN_1401971e0(&DAT_140c8a298, 0xe, &local_res8, &local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_38);
        if (iVar1 != 0) {
            DebugBreak();
        }
    }
    param_1[1] = 0;
    param_1[3] = 0;
    *(undefined4 * )((longlong) param_1 + 0xac) = 1;
    *(undefined4 * )((longlong) param_1 + 0x44) = 5;
    *(undefined4 * )(param_1 + 9) = 5;
    DAT_140c65678 = param_1;
    *(uint * )(param_1 + 8) = *(uint * )(param_1 + 8) & 0xffffb800 | 0x800;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    FUN_1407e4830(param_1 + 0x10, 0, 0x2c);
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0xf] = 0;
    *(undefined4 * )(param_1 + 0x1f) = 0x3f800000;
    *(undefined4 * )((longlong) param_1 + 0xfc) = 0x3f800000;
    return param_1;
}


undefined8 FUN_1402519a0(undefined8 param_1, ulonglong param_2) {
    FUN_1402519e0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_1402519e0(undefined8 *param_1) {
    DAT_140c65678 = 0;
    *param_1 = &PTR_FUN_140b603a0;
    if ((HWND) param_1[1] != (HWND) 0x0) {
        SetWindowLongPtrW((HWND) param_1[1], -0x15, 0);
        DestroyWindow((HWND) param_1[1]);
    }
    if (param_1[7] != 0) {
        // WARNING: Could not recover jumptable at 0x000140251a30. Too many branches
        // WARNING: Treating indirect jump as call
        CloseHandle((HANDLE) param_1[7]);
        return;
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140251a40(longlong *param_1) {
    WCHAR WVar1;
    int iVar2;
    UINT UVar3;
    int iVar4;
    int iVar5;
    LPWSTR lpCmdLine;
    LPWSTR *ppWVar6;
    HMODULE hModule;
    FARPROC pFVar7;
    longlong *plVar8;
    undefined * puVar9;
    WCHAR *pWVar10;
    WCHAR *pWVar11;
    wchar_t *lpText;
    longlong lVar12;
    ulonglong uVar13;
    LPWSTR *ppWVar14;
    uint uVar15;
    ulonglong uVar16;
    ulonglong uVar17;
    undefined auStack808[32];
    undefined * **local_308;
    int local_2f8;
    undefined8 local_2f0;
    undefined8 uStack744;
    undefined8 local_2e0;
    undefined8 uStack728;
    undefined4 *local_2d0;
    ulonglong local_2c8;
    longlong *local_2c0;
    undefined * *local_2b8;
    undefined8 local_2b0;
    LPVOID local_2a8;
    LPWSTR *local_2a0;
    int local_298[4];
    undefined * *local_288;
    undefined8 local_280;
    LPVOID local_278;
    undefined4 local_268;
    undefined4 uStack612;
    undefined4 uStack608;
    undefined4 uStack604;
    undefined4 local_258;
    undefined4 uStack596;
    int iStack592;
    undefined4 uStack588;
    WCHAR local_248[264];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)
    auStack808;
    uVar16 = 0;
    local_2a0 = (LPWSTR *) 0x0;
    local_298[0] = 0;
    local_2c0 = param_1;
    lpCmdLine = GetCommandLineW();
    ppWVar6 = CommandLineToArgvW(lpCmdLine, local_298);
    iVar4 = local_298[0];
    uVar17 = uVar16;
    local_2a0 = ppWVar6;
    if (0 < local_298[0]) {
        do {
            if (((((ushort) * *ppWVar6 - 0x2d & 0xfffffffd) == 0) || ((ushort) * *ppWVar6 - 0x96 < 2)) &&
                (iVar2 = FUN_14018e2c0(), iVar2 == 0)) {
                _DAT_140c63724 = _DAT_140c63724 | 1;
                break;
            }
            uVar15 = (int) uVar17 + 1;
            uVar17 = (ulonglong)
            uVar15;
            ppWVar6 = ppWVar6 + 1;
        } while ((int) uVar15 < iVar4);
    }
    UVar3 = GetSystemDirectoryW(local_248, 0x104);
    if (((UVar3 != 0) &&
         (iVar4 = FUN_14001b370(local_248 + UVar3, 0x104 - (ulonglong)
        UVar3, &DAT_140a43680, L"User32.dll"
    ), -1 < iVar4)) &&
    (hModule = LoadLibraryW(local_248), hModule != (HMODULE) 0x0)) {
        pFVar7 = GetProcAddress(hModule, "SetProcessDPIAware");
        if (pFVar7 != (FARPROC) 0x0) {
            (*pFVar7)();
        }
        FreeLibrary(hModule);
    }
    iVar4 = local_298[0];
    ppWVar6 = local_2a0;
    ppWVar14 = local_2a0;
    uVar17 = uVar16;
    if (0 < local_298[0]) {
        do {
            WVar1 = **ppWVar14;
            if (((((ushort) WVar1 - 0x2d & 0xfffffffd) == 0) || ((ushort) WVar1 - 0x96 < 2)) &&
                (iVar2 = FUN_14018e2c0(*ppWVar14 + 1, L"dx11"), iVar2 == 0)) {
                local_2d0 = (undefined4 * ) & DAT_140b60380;
                local_2c8 = 1;
                goto LAB_140251cb9;
            }
            uVar15 = (int) uVar17 + 1;
            ppWVar14 = ppWVar14 + 1;
            uVar17 = (ulonglong)
            uVar15;
        } while ((int) uVar15 < iVar4);
    }
    ppWVar14 = ppWVar6;
    uVar17 = uVar16;
    if (0 < iVar4) {
        do {
            WVar1 = **ppWVar14;
            if (((((ushort) WVar1 - 0x2d & 0xfffffffd) == 0) || ((ushort) WVar1 - 0x96 < 2)) &&
                (iVar2 = FUN_14018e2c0(*ppWVar14 + 1, &DAT_140ae3938), iVar2 == 0)) {
                local_2d0 = (undefined4 * ) & DAT_140b60388;
                local_2c8 = 2;
                goto LAB_140251cb9;
            }
            uVar15 = (int) uVar17 + 1;
            ppWVar14 = ppWVar14 + 1;
            uVar17 = (ulonglong)
            uVar15;
        } while ((int) uVar15 < iVar4);
    }
    ppWVar14 = ppWVar6;
    uVar17 = uVar16;
    if (0 < iVar4) {
        do {
            WVar1 = **ppWVar14;
            if (((((ushort) WVar1 - 0x2d & 0xfffffffd) == 0) || ((ushort) WVar1 - 0x96 < 2)) &&
                (iVar2 = FUN_14018e2c0(*ppWVar14 + 1, L"dx9ex"), iVar2 == 0)) {
                local_2d0 = (undefined4 * ) & DAT_140963ae0;
                local_2c8 = 1;
                goto LAB_140251cb9;
            }
            uVar15 = (int) uVar17 + 1;
            ppWVar14 = ppWVar14 + 1;
            uVar17 = (ulonglong)
            uVar15;
        } while ((int) uVar15 < iVar4);
    }
    ppWVar14 = ppWVar6;
    uVar17 = uVar16;
    if (0 < iVar4) {
        do {
            WVar1 = **ppWVar14;
            if (((((ushort) WVar1 - 0x2d & 0xfffffffd) == 0) || ((ushort) WVar1 - 0x96 < 2)) &&
                (iVar2 = FUN_14018e2c0(*ppWVar14 + 1, L"dx9legacy"), iVar2 == 0)) {
                local_2d0 = (undefined4 * ) & DAT_140b60398;
                local_2c8 = 1;
                goto LAB_140251cb9;
            }
            uVar15 = (int) uVar17 + 1;
            ppWVar14 = ppWVar14 + 1;
            uVar17 = (ulonglong)
            uVar15;
        } while ((int) uVar15 < iVar4);
    }
    local_2d0 = &DAT_140b60368;
    local_2c8 = 3;
    LAB_140251cb9:
    uVar17 = uVar16;
    if (local_2c8 == 0) {
        LAB_14025219f:
        lVar12 = 0x100;
        iVar4 = GetWindowTextW((HWND) param_1[1], local_248, 0x100);
        if (iVar4 == 0) {
            pWVar11 = local_248;
            do {
                if ((lVar12 == -0x7ffffefe) ||
                    (WVar1 = *(WCHAR * )((longlong) pWVar11 + ((longlong) L"WildStar" - (longlong) local_248)),
                            WVar1 == L'\0')) {
                    if (lVar12 != 0) goto LAB_1402521fc;
                    break;
                }
                *pWVar11 = WVar1;
                pWVar11 = pWVar11 + 1;
                lVar12 = lVar12 + -1;
            } while (lVar12 != 0);
            pWVar11 = pWVar11 + -1;
            LAB_1402521fc:
            *pWVar11 = L'\0';
        }
        lpText =
                L"Failed to initialize Direct3D.  Please make sure that your DirectX runtime is up-to-date.  DirectX is available from http://microsoft.com/directx.";
    } else {
        do {
            local_2f8 = local_2d0[uVar17 * 2];
            uVar13 = uVar16;
            ppWVar14 = ppWVar6;
            if (0 < iVar4) {
                do {
                    WVar1 = **ppWVar14;
                    if (((((ushort) WVar1 - 0x2d & 0xfffffffd) == 0) || ((ushort) WVar1 - 0x96 < 2)) &&
                        (iVar2 = FUN_14018e2c0(*ppWVar14 + 1, L"WaitForVBlank"), iVar2 == 0))
                        break;
                    uVar15 = (int) uVar13 + 1;
                    uVar13 = (ulonglong)
                    uVar15;
                    ppWVar14 = ppWVar14 + 1;
                } while ((int) uVar15 < iVar4);
            }
            if ((local_2f8 == 1) && (ppWVar14 = ppWVar6, uVar13 = uVar16, 0 < iVar4)) {
                do {
                    WVar1 = **ppWVar14;
                    if (((((ushort) WVar1 - 0x2d & 0xfffffffd) == 0) || ((ushort) WVar1 - 0x96 < 2)) &&
                        (iVar2 = FUN_14018e2c0(*ppWVar14 + 1, L"AMDOcclusionPredicates"), iVar2 == 0))
                        break;
                    uVar15 = (int) uVar13 + 1;
                    ppWVar14 = ppWVar14 + 1;
                    uVar13 = (ulonglong)
                    uVar15;
                } while ((int) uVar15 < iVar4);
            }
            iVar2 = local_2f8;
            uVar13 = uVar16;
            if (0 < iVar4) {
                do {
                    WVar1 = **ppWVar6;
                    if (((((ushort) WVar1 - 0x2d & 0xfffffffd) == 0) || ((ushort) WVar1 - 0x96 < 2)) &&
                        (iVar5 = FUN_14018e2c0(*ppWVar6 + 1, L"AMDDynamicTextures"), iVar5 == 0))
                        break;
                    uVar15 = (int) uVar13 + 1;
                    ppWVar6 = ppWVar6 + 1;
                    uVar13 = (ulonglong)
                    uVar15;
                } while ((int) uVar15 < iVar4);
            }
            param_1 = local_2c0;
            iVar2 = FUN_1402514b0(iVar2, local_2c0[1]);
            if (-1 < iVar2) {
                plVar8 = (longlong * )(**(code * *)(*DAT_140c65670 + 0x18))();
                param_1[10] = *plVar8;
                param_1[0xb] = plVar8[1];
                param_1[0xc] = plVar8[2];
                param_1[0xd] = plVar8[3];
                param_1[0xe] = plVar8[4];
                iVar2 = (**(code * *)(*DAT_140c65670 + 0xc0))(DAT_140c65670, param_1 + 0xf);
                if (-1 < iVar2) {
                    local_2e0 = &LAB_140252318;
                    local_2f0._0_4_ = 0;
                    uStack744 = (wchar_t *) param_1;
                    uStack728 = 0;
                    (**(code * *)(*(longlong *) param_1[0xf] + 0x18))((longlong *) param_1[0xf], 0, &local_2f0);
                    local_2e0 = &LAB_140252310;
                    local_2f0 = (undefined * *)((ulonglong)
                    local_2f0._4_4_ << 0x20);
                    uStack744 = (wchar_t *) param_1;
                    uStack728 = 0;
                    (**(code * *)(*(longlong *) param_1[0xf] + 0x18))((longlong *) param_1[0xf], 1, &local_2f0);
                    iVar4 = (**(code * *)(*param_1 + 0x28))(param_1);
                    if ((-1 < iVar4) && (iVar4 = (**(code * *)(*param_1 + 8))(param_1), -1 < iVar4)) {
                        *(uint * )(param_1 + 8) = *(uint * )(param_1 + 8) & 0xfffffe7f | 0x44;
                    }
                    goto LAB_14025221c;
                }
                local_2b0 = 0;
                local_2b8 = &PTR_LAB_140b5e648;
                local_2a8 = TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720, &local_2b8);
                local_288 = local_2b8;
                local_280 = local_2b0;
                local_2f0 = &PTR_LAB_140b5e648;
                uStack744 = L"Result";
                local_278 = local_2a8;
                local_2e0 = (undefined * )
                TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720, &local_2f0);
                puVar9 = &DAT_140c8a290;
                local_2c0 = (longlong *) 0x141dde040;
                goto LAB_140252092;
            }
            uVar17 = uVar17 + 1;
            ppWVar6 = local_2a0;
            iVar4 = local_298[0];
        } while (uVar17 < local_2c8);
        if (iVar2 == -0x5ff1ffff) goto LAB_14025219f;
        if (iVar2 != -0x5ff1fffe) {
            local_2b0 = 0;
            local_2b8 = &PTR_LAB_140b5e648;
            local_2a8 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_2b8);
            local_288 = local_2b8;
            local_280 = local_2b0;
            local_2f0 = &PTR_LAB_140b5e648;
            uStack744 = L"Result";
            local_278 = local_2a8;
            local_2e0 = (undefined * )
            TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_2f0);
            puVar9 = &DAT_140c8a294;
            local_2c0 = (longlong *) 0x141dddff0;
            LAB_140252092:
            local_2f0 = &PTR_LAB_140b5e640;
            uStack728 = CONCAT44(uStack728._4_4_, iVar2);
            local_308 = &local_288;
            local_258 = (undefined4) local_2e0;
            uStack596 = local_2e0._4_4_;
            uStack588 = uStack728._4_4_;
            local_268 = 0x40b5e640;
            uStack612 = 1;
            uStack608 = (undefined4) uStack744;
            uStack604 = uStack744._4_4_;
            iStack592 = iVar2;
            iVar4 = FUN_1401971e0(puVar9, 0xe, &local_2c0, &local_268);
            local_2f0 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720, local_2e0);
            local_2b8 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720, local_2a8);
            if (iVar4 != 0) {
                DebugBreak();
            }
            goto LAB_14025221c;
        }
        lVar12 = 0x100;
        iVar4 = GetWindowTextW((HWND) param_1[1], local_248, 0x100);
        if (iVar4 == 0) {
            pWVar11 = local_248;
            do {
                pWVar10 = pWVar11;
                if ((lVar12 == -0x7ffffefe) ||
                    (WVar1 = *(WCHAR * )((longlong) pWVar10 + ((longlong) L"WildStar" - (longlong) local_248)),
                            WVar1 == L'\0')) {
                    if (lVar12 == 0) {
                        pWVar10 = pWVar10 + -1;
                    }
                    *pWVar10 = L'\0';
                    goto LAB_140251f92;
                }
                *pWVar10 = WVar1;
                lVar12 = lVar12 + -1;
                pWVar11 = pWVar10 + 1;
            } while (lVar12 != 0);
            lpText =
                    L"Could not find a Direct3D device that meets minimum hardware requirements.  Please consider upgrading your video card.";
            *pWVar10 = L'\0';
        } else {
            LAB_140251f92:
            lpText =
                    L"Could not find a Direct3D device that meets minimum hardware requirements.  Please consider upgrading your video card.";
        }
    }
    MessageBoxW((HWND) 0x0, lpText, local_248, 0x2010);
    LAB_14025221c:
    LocalFree(local_2a0);
    FUN_1407db4f0(local_38 ^ (ulonglong)
    auStack808);
    return;
}


void FUN_140252260(tagPOINT param_1, int param_2) {
    longlong *plVar1;
    HWND hWnd;
    tagPOINT local_res8;
    tagRECT local_18;

    plVar1 = DAT_140c635f0;
    *(uint * )(DAT_140c635f0 + 8) = *(uint * )(DAT_140c635f0 + 8) & 0xfffffbff;
    *(uint * )(plVar1 + 8) = *(uint * )(plVar1 + 8) | (uint)(param_2 != 0) << 10;
    local_res8 = param_1;
    GetCursorPos(&local_res8);
    hWnd = (HWND)(**(code * *)(*plVar1 + 0x50))(plVar1, &local_res8);
    if (hWnd != (HWND) 0x0) {
        GetClientRect(hWnd, &local_18);
        ScreenToClient(hWnd, &local_res8);
        if ((((local_18.left <= SUB84(local_res8, 0)) && (SUB84(local_res8, 0) < local_18.right)) &&
             (local_18.top <= local_res8.y)) && (local_res8.y < local_18.bottom)) {
            (**(code * *)(*DAT_140c65670 + 0x1e0))(DAT_140c65670, (*(int *) (plVar1 + 8) << 0x15) >> 0x1f);
        }
    }
    return;
}


int FUN_140252320(void) {
    undefined8 uVar1;
    undefined8 uVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;
    undefined8 in_R9;
    undefined8 in_stack_00000028;

    uVar2 = DAT_140c65680;
    uVar1 = DAT_140c65670;
    lVar4 = FUN_14018b280(0x9c0, 0);
    if (lVar4 == 0) {
        plVar5 = (longlong *) 0x0;
    } else {
        plVar5 = (longlong *) FUN_140253490(lVar4, uVar1, uVar2, in_R9, in_stack_00000028);
    }
    iVar3 = FUN_140253a90(plVar5);
    if (iVar3 < 0) {
        (**(code * *)(*plVar5 + 8))(plVar5);
        return iVar3;
    }
    DAT_140c65688 = plVar5;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1402523a0(longlong param_1, undefined (*param_2)[16]) {
    undefined8 *puVar1;
    undefined4 uVar2;
    undefined8 uVar3;
    undefined8 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    float extraout_XMM0_Da;
    float fVar8;
    float extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    undefined auVar9[16];
    float fVar10;
    float fVar11;
    float fVar12;
    undefined auVar13[16];
    float fVar14;
    float fVar15;
    float fVar16;
    uint uVar17;
    float fVar18;
    undefined4 uStack108;
    undefined4 uStack92;

    auVar9 = minps(*(undefined(*)[16])(param_1 + 0x220), *(undefined(*)[16])(param_1 + 0x230));
    param_2[1] = auVar9;
    fVar18 = *(float *) (param_2[1] + 4);
    fVar15 = *(float *) (param_2[1] + 8);
    fVar8 = *(float *) (param_2[1] + 0xc);
    *(float *) *param_2 = 0.0 - *(float *) param_2[1];
    *(float *) (*param_2 + 4) = 0.0 - fVar18;
    *(float *) (*param_2 + 8) = 0.0 - fVar15;
    *(float *) (*param_2 + 0xc) = 0.0 - fVar8;
    if (3.141583 <= *(float *) (param_1 + 0x260)) {
        if (6.283175 <= *(float *) (param_1 + 0x260)) {
            *(undefined4 *) param_2[2] = 0;
            *(undefined4 * )(param_2[2] + 4) = 0;
            *(undefined4 * )(param_2[2] + 8) = 0;
            *(undefined4 * )(param_2[2] + 0xc) = 0;
            fVar18 = *(float *) (param_1 + 0x224);
            if (*(float *) (param_1 + 0x224) <= *(float *) (param_1 + 0x228)) {
                fVar18 = *(float *) (param_1 + 0x228);
            }
            fVar15 = *(float *) (param_1 + 0x220);
            if (*(float *) (param_1 + 0x220) <= fVar18) {
                fVar15 = fVar18;
            }
            fVar18 = SQRT(*(float *) param_2[1] * *(float *) param_2[1] +
                          *(float *) (param_2[1] + 4) * *(float *) (param_2[1] + 4) + 0.0);
            if (fVar18 <= fVar15) {
                fVar15 = fVar18;
            }
            *(float *) param_2[3] = fVar15;
            goto LAB_1402526bf;
        }
        puVar1 = (undefined8 * )(param_1 + 0x220);
        uVar4 = *puVar1;
        uVar3 = *puVar1;
        uVar17 = 0x80000000;
        fVar18 = *(float *) (param_1 + 0x228);
        fVar8 = 0.5;
        fVar15 = *(float *) (param_1 + 0x224);
        if (*(float *) (param_1 + 0x224) <= fVar18) {
            fVar15 = fVar18;
        }
        fVar16 = *(float *) puVar1;
        if (*(float *) puVar1 <= fVar15) {
            fVar16 = fVar15;
        }
        FUN_1408fc950();
        uVar6 = uRam0000000140c798ac;
        uVar5 = uRam0000000140c798a8;
        uVar2 = uRam0000000140c798a4;
        auVar9 = maxps(CONCAT412(uStack108, CONCAT48((uint)
        fVar18 ^ uVar17, uVar3)) ^
        (undefined  [16])
        0x8000000080000000, *param_2);
        auVar13 = minps(CONCAT412(uStack92, CONCAT48((uint)(fVar16 * extraout_XMM0_Da_01) ^ uVar17, uVar4)
        ), param_2[1]);
        if (((SUB164(auVar13, 0) <= SUB164(auVar9, 0)) ||
             (SUB164(auVar13 >> 0x20, 0) <= SUB164(auVar9 >> 0x20, 0))) ||
            (SUB164(auVar13 >> 0x40, 0) <= 0.0)) {
            *(undefined4 * ) * param_2 = _DAT_140c798a0;
            *(undefined4 * )(*param_2 + 4) = uVar2;
            *(undefined4 * )(*param_2 + 8) = uVar5;
            *(undefined4 * )(*param_2 + 0xc) = uVar6;
            uVar6 = uRam0000000140c798bc;
            uVar5 = uRam0000000140c798b8;
            uVar2 = uRam0000000140c798b4;
            *(undefined4 *) param_2[1] = _DAT_140c798b0;
            *(undefined4 * )(param_2[1] + 4) = uVar2;
            *(undefined4 * )(param_2[1] + 8) = uVar5;
            *(undefined4 * )(param_2[1] + 0xc) = uVar6;
        } else if (param_2 != (undefined(*)[16])0x0) {
            *param_2 = auVar9;
            param_2[1] = auVar13;
        }
        fVar18 = *(float *) *param_2;
        fVar15 = *(float *) (*param_2 + 4);
        fVar16 = *(float *) (*param_2 + 8);
        fVar14 = *(float *) (*param_2 + 0xc);
        fVar10 = *(float *) param_2[1] - fVar18;
        fVar11 = *(float *) (param_2[1] + 4) - fVar15;
        fVar12 = *(float *) (param_2[1] + 8) - fVar16;
        fVar8 = SQRT(fVar10 * fVar10 + fVar11 * fVar11 + fVar12 * fVar12) * fVar8;
    } else {
        FUN_1408fe3d0();
        fVar18 = *(float *) (param_1 + 0x214);
        if (*(float *) (param_1 + 0x218) <= *(float *) (param_1 + 0x214)) {
            fVar18 = *(float *) (param_1 + 0x218);
        }
        fVar8 = extraout_XMM0_Da * *(float *) (param_1 + 0x220);
        fVar15 = *(float *) (param_1 + 0x210);
        if (fVar18 <= *(float *) (param_1 + 0x210)) {
            fVar15 = fVar18;
        }
        uVar2 = *(undefined4 * )(param_1 + 0x224);
        FUN_1408fc950();
        uVar7 = uRam0000000140c798ac;
        uVar6 = uRam0000000140c798a8;
        uVar5 = uRam0000000140c798a4;
        auVar9 = maxps(CONCAT412(uStack108,
                                 CONCAT48(*(undefined4 * )(param_1 + 0x228), CONCAT44(uVar2, fVar8))) ^
                       (undefined[16])
        0x8000000000000000, *param_2);
        auVar13 = minps(CONCAT412(uStack92, CONCAT48(fVar15 * extraout_XMM0_Da_00, CONCAT44(uVar2, fVar8))),
                        param_2[1]);
        if (((SUB164(auVar13, 0) <= SUB164(auVar9, 0)) ||
             (SUB164(auVar13 >> 0x20, 0) <= SUB164(auVar9 >> 0x20, 0))) ||
            (SUB164(auVar13 >> 0x40, 0) <= 0.0)) {
            *(undefined4 * ) * param_2 = _DAT_140c798a0;
            *(undefined4 * )(*param_2 + 4) = uVar5;
            *(undefined4 * )(*param_2 + 8) = uVar6;
            *(undefined4 * )(*param_2 + 0xc) = uVar7;
            uVar6 = uRam0000000140c798bc;
            uVar5 = uRam0000000140c798b8;
            uVar2 = uRam0000000140c798b4;
            *(undefined4 *) param_2[1] = _DAT_140c798b0;
            *(undefined4 * )(param_2[1] + 4) = uVar2;
            *(undefined4 * )(param_2[1] + 8) = uVar5;
            *(undefined4 * )(param_2[1] + 0xc) = uVar6;
        } else if (param_2 != (undefined(*)[16])0x0) {
            *param_2 = auVar9;
            param_2[1] = auVar13;
        }
        fVar18 = *(float *) *param_2;
        fVar15 = *(float *) (*param_2 + 4);
        fVar16 = *(float *) (*param_2 + 8);
        fVar14 = *(float *) (*param_2 + 0xc);
        fVar8 = *(float *) param_2[1] - fVar18;
        fVar10 = *(float *) (param_2[1] + 4) - fVar15;
        fVar11 = *(float *) (param_2[1] + 8) - fVar16;
        fVar8 = SQRT(fVar8 * fVar8 + fVar10 * fVar10 + fVar11 * fVar11) * 0.5;
    }
    fVar10 = *(float *) (param_2[1] + 4);
    fVar11 = *(float *) (param_2[1] + 8);
    fVar12 = *(float *) (param_2[1] + 0xc);
    *(float *) param_2[2] = (fVar18 + *(float *) param_2[1]) * 0.5;
    *(float *) (param_2[2] + 4) = (fVar15 + fVar10) * 0.5;
    *(float *) (param_2[2] + 8) = (fVar16 + fVar11) * 0.5;
    *(float *) (param_2[2] + 0xc) = (fVar14 + fVar12) * 0.5;
    *(float *) param_2[3] = fVar8;
    LAB_1402526bf:
    *(float *) param_2[3] = *(float *) (param_1 + 0x284) + *(float *) param_2[3];
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140252720(longlong param_1, float *param_2) {
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    undefined auVar11[12];
    undefined auVar12[12];
    undefined auVar13[16];
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    undefined local_88[8];
    float fStack128;
    float fStack124;
    undefined local_78[8];
    float fStack112;
    float fStack108;

    FUN_1402523a0();
    auVar12 = *(undefined(*)[12])(param_1 + 0x40);
    auVar11 = *(undefined(*)[12])(param_1 + 0x40);
    fVar18 = *param_2;
    fVar16 = param_2[4];
    local_88._0_4_ = SUB124(auVar11, 0);
    fVar17 = *(float *) (param_1 + 0x10);
    local_78._0_4_ = SUB124(auVar12, 0);
    fVar19 = fVar16;
    fVar14 = fVar18;
    if (0.0 < fVar17) {
        fVar19 = fVar18;
        fVar14 = fVar16;
    }
    fVar1 = *(float *) (param_1 + 0x20);
    fVar20 = param_2[1];
    fVar2 = param_2[5];
    fVar15 = fVar20;
    fVar3 = fVar2;
    if (0.0 < fVar1) {
        fVar15 = fVar2;
        fVar3 = fVar20;
    }
    fVar4 = param_2[2];
    fVar5 = param_2[6];
    fVar6 = *(float *) (param_1 + 0x30);
    fVar7 = fVar4;
    fVar9 = fVar5;
    if (0.0 < fVar6) {
        fVar7 = fVar5;
        fVar9 = fVar4;
    }
    _local_88 = CONCAT124(auVar11 >> 0x20,
                          local_88._0_4_ + fVar19 * fVar17 + fVar3 * fVar1 + fVar9 * fVar6) &
                (undefined[16])
    0xffffffffffffffff;
    _local_78 = CONCAT124(auVar12 >> 0x20,
                          local_78._0_4_ + fVar14 * fVar17 + fVar15 * fVar1 + fVar7 * fVar6) &
                (undefined[16])
    0xffffffffffffffff;
    fVar17 = *(float *) (param_1 + 0x14);
    fVar14 = fVar18;
    fVar19 = fVar16;
    if (0.0 < fVar17) {
        fVar14 = fVar16;
        fVar19 = fVar18;
    }
    fVar1 = *(float *) (param_1 + 0x24);
    fVar15 = fVar20;
    fVar3 = fVar2;
    if (0.0 < fVar1) {
        fVar15 = fVar2;
        fVar3 = fVar20;
    }
    fVar6 = *(float *) (param_1 + 0x34);
    fVar9 = fVar4;
    fVar7 = fVar5;
    if (0.0 < fVar6) {
        fVar9 = fVar5;
        fVar7 = fVar4;
    }
    fVar8 = *(float *) (param_1 + 0x18);
    fVar18 = fVar18 * fVar8;
    fVar10 = fVar16 * fVar8;
    if (0.0 < fVar8) {
        fVar10 = fVar18;
        fVar18 = fVar16 * fVar8;
    }
    fVar16 = *(float *) (param_1 + 0x28);
    fVar20 = fVar20 * fVar16;
    fVar8 = fVar2 * fVar16;
    if (0.0 < fVar16) {
        fVar8 = fVar20;
        fVar20 = fVar2 * fVar16;
    }
    fVar16 = *(float *) (param_1 + 0x38);
    fVar2 = fVar4;
    if (0.0 < fVar16) {
        fVar2 = fVar5;
        fVar5 = fVar4;
    }
    *param_2 = local_88._0_4_;
    param_2[1] = local_88._4_4_ + fVar19 * fVar17 + fVar3 * fVar1 + fVar6 * fVar7;
    param_2[2] = fStack128 + fVar10 + fVar8 + fVar16 * fVar5;
    param_2[3] = fStack124;
    param_2[4] = local_78._0_4_;
    param_2[5] = local_78._4_4_ + fVar14 * fVar17 + fVar15 * fVar1 + fVar6 * fVar9;
    param_2[6] = fStack112 + fVar18 + fVar20 + fVar16 * fVar2;
    param_2[7] = fStack108;
    fVar18 = param_2[8];
    fVar16 = param_2[9];
    *(undefined(*)[16])(param_2 + 8) =
            CONCAT412(fVar18 * *(float *) (param_1 + 0x1c) + fVar16 * *(float *) (param_1 + 0x2c) +
                      *(float *) (param_1 + 0x3c) * 0.0 + *(float *) (param_1 + 0x4c),
                      CONCAT48(fVar18 * *(float *) (param_1 + 0x18) + fVar16 * *(float *) (param_1 + 0x28)
                               + *(float *) (param_1 + 0x38) * 0.0 + *(float *) (param_1 + 0x48),
                               CONCAT44(fVar18 * *(float *) (param_1 + 0x14) +
                                        fVar16 * *(float *) (param_1 + 0x24) +
                                        *(float *) (param_1 + 0x34) * 0.0 + *(float *) (param_1 + 0x44),
                                        fVar18 * *(float *) (param_1 + 0x10) +
                                        fVar16 * *(float *) (param_1 + 0x20) +
                                        *(float *) (param_1 + 0x30) * 0.0 + *(float *) (param_1 + 0x40))));
    fVar19 = *(float *) (param_1 + 0x14) * *(float *) (param_1 + 0x14);
    fVar17 = *(float *) (param_1 + 0x30) * *(float *) (param_1 + 0x30) +
             *(float *) (param_1 + 0x34) * *(float *) (param_1 + 0x34) + 0.0;
    fVar16 = *(float *) (param_1 + 0x20) * *(float *) (param_1 + 0x20) +
             *(float *) (param_1 + 0x24) * *(float *) (param_1 + 0x24) + 0.0;
    fVar18 = *(float *) (param_1 + 0x10) * *(float *) (param_1 + 0x10) + fVar19 + 0.0;
    if (fVar18 <= fVar16) {
        fVar18 = fVar16;
    }
    if (fVar18 <= fVar17) {
        fVar18 = fVar17;
    }
    auVar13 = sqrtps(CONCAT412(fVar19, CONCAT48(fVar19, CONCAT44(fVar19, fVar19))), ZEXT416((uint)
    fVar18));
    param_2[0xc] = SUB164(auVar13, 0) * param_2[0xc];
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140252a70(float *param_1, float *param_2) {
    float fVar1;
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
    undefined auVar14[12];
    undefined auVar15[12];
    undefined auVar16[16];
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    float fVar22;
    undefined local_88[8];
    float fStack128;
    float fStack124;
    undefined local_78[8];
    float fStack112;
    float fStack108;

    fVar19 = param_1[1];
    fVar20 = param_1[2];
    fVar21 = param_1[3];
    *param_2 = *param_1;
    param_2[1] = fVar19;
    param_2[2] = fVar20;
    param_2[3] = fVar21;
    fVar19 = param_1[5];
    fVar20 = param_1[6];
    fVar21 = param_1[7];
    param_2[4] = param_1[4];
    param_2[5] = fVar19;
    param_2[6] = fVar20;
    param_2[7] = fVar21;
    fVar19 = param_1[4] - *param_1;
    fVar20 = param_1[5] - param_1[1];
    *(undefined(*)[16])(param_2 + 8) =
            CONCAT412((param_1[7] + param_1[3]) * 0.5,
                      CONCAT48((param_1[6] + param_1[2]) * 0.5,
                               CONCAT44((param_1[5] + param_1[1]) * 0.5, (param_1[4] + *param_1) * 0.5)));
    param_2[0xc] = SQRT(fVar19 * fVar19 + fVar20 * fVar20 + 0.0) * 0.5;
    auVar15 = *(undefined(*)[12])(param_1 + 0x14);
    auVar14 = *(undefined(*)[12])(param_1 + 0x14);
    fVar19 = *param_2;
    fVar22 = param_2[4];
    fVar20 = param_1[8];
    local_88._0_4_ = SUB124(auVar14, 0);
    fVar17 = fVar19;
    fVar21 = fVar22;
    if (0.0 < fVar20) {
        fVar17 = fVar22;
        fVar21 = fVar19;
    }
    fVar1 = param_1[0xc];
    fVar2 = param_2[1];
    fVar3 = param_2[5];
    local_78._0_4_ = SUB124(auVar15, 0);
    fVar18 = fVar2;
    fVar7 = fVar3;
    if (0.0 < fVar1) {
        fVar18 = fVar3;
        fVar7 = fVar2;
    }
    fVar4 = param_2[2];
    fVar5 = param_2[6];
    fVar6 = param_1[0x10];
    fVar8 = fVar4;
    fVar10 = fVar5;
    if (0.0 < fVar6) {
        fVar8 = fVar5;
        fVar10 = fVar4;
    }
    local_88._4_4_ = SUB164(ZEXT1216(auVar14) >> 0x20, 0);
    _local_88 = CONCAT124(auVar14 >> 0x20,
                          local_88._0_4_ + fVar21 * fVar20 + fVar7 * fVar1 + fVar10 * fVar6) &
                (undefined[16])
    0xffffffffffffffff;
    local_78._4_4_ = SUB164(ZEXT1216(auVar15) >> 0x20, 0);
    _local_78 = CONCAT124(auVar15 >> 0x20,
                          local_78._0_4_ + fVar17 * fVar20 + fVar18 * fVar1 + fVar8 * fVar6) &
                (undefined[16])
    0xffffffffffffffff;
    fVar20 = param_1[9];
    fVar17 = fVar19;
    fVar21 = fVar22;
    if (0.0 < fVar20) {
        fVar17 = fVar22;
        fVar21 = fVar19;
    }
    fVar1 = param_1[0xd];
    fVar18 = fVar2;
    fVar7 = fVar3;
    if (0.0 < fVar1) {
        fVar18 = fVar3;
        fVar7 = fVar2;
    }
    fVar6 = param_1[0x11];
    fVar10 = fVar4;
    fVar8 = fVar5;
    if (0.0 < fVar6) {
        fVar10 = fVar5;
        fVar8 = fVar4;
    }
    fVar9 = param_1[10];
    fVar11 = fVar19;
    if (0.0 < fVar9) {
        fVar11 = fVar22;
        fVar22 = fVar19;
    }
    fVar19 = param_1[0xe];
    fVar12 = fVar2;
    if (0.0 < fVar19) {
        fVar12 = fVar3;
        fVar3 = fVar2;
    }
    fVar2 = param_1[0x12];
    fVar13 = fVar4;
    if (0.0 < fVar2) {
        fVar13 = fVar5;
        fVar5 = fVar4;
    }
    *param_2 = local_88._0_4_;
    param_2[1] = local_88._4_4_ + fVar20 * fVar21 + fVar1 * fVar7 + fVar6 * fVar8;
    param_2[2] = fStack128 + fVar9 * fVar22 + fVar19 * fVar3 + fVar2 * fVar5;
    param_2[3] = fStack124;
    param_2[4] = local_78._0_4_;
    param_2[5] = local_78._4_4_ + fVar20 * fVar17 + fVar1 * fVar18 + fVar6 * fVar10;
    param_2[6] = fStack112 + fVar9 * fVar11 + fVar19 * fVar12 + fVar2 * fVar13;
    param_2[7] = fStack108;
    fVar19 = param_2[8];
    fVar20 = param_2[9];
    *(undefined(*)[16])(param_2 + 8) =
            CONCAT412(fVar19 * param_1[0xb] + fVar20 * param_1[0xf] + param_1[0x13] * 0.0 + param_1[0x17],
                      CONCAT48(fVar19 * param_1[10] + fVar20 * param_1[0xe] + param_1[0x12] * 0.0 +
                               param_1[0x16],
                               CONCAT44(fVar19 * param_1[9] + fVar20 * param_1[0xd] +
                                        param_1[0x11] * 0.0 + param_1[0x15],
                                        fVar19 * param_1[8] + fVar20 * param_1[0xc] +
                                        param_1[0x10] * 0.0 + param_1[0x14])));
    fVar22 = param_1[9] * param_1[9];
    fVar21 = param_1[0x10] * param_1[0x10] + param_1[0x11] * param_1[0x11] + 0.0;
    fVar20 = param_1[0xc] * param_1[0xc] + param_1[0xd] * param_1[0xd] + 0.0;
    fVar19 = param_1[8] * param_1[8] + fVar22 + 0.0;
    if (fVar19 <= fVar20) {
        fVar19 = fVar20;
    }
    if (fVar19 <= fVar21) {
        fVar19 = fVar21;
    }
    auVar16 = sqrtps(CONCAT412(fVar22, CONCAT48(fVar22, CONCAT44(fVar22, fVar22))), ZEXT416((uint)
    fVar19));
    param_2[0xc] = SUB164(auVar16, 0) * param_2[0xc];
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140252dd0(float *param_1, float *param_2) {
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    undefined auVar5[12];
    undefined auVar6[12];
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
    float fVar7;
    undefined auVar8[16];
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
    undefined local_b8[8];
    float fStack176;
    float fStack172;
    undefined local_a8[8];
    float fStack160;
    float fStack156;

    fVar10 = param_1[0x12];
    if (fVar10 == 0.0) {
        fVar10 = param_1[8];
        fVar16 = param_1[9];
        fVar14 = param_1[4];
        fVar18 = param_1[5];
        fVar13 = *param_1;
        fVar15 = param_1[1];
        fVar11 = fVar10 * fVar10 + fVar16 * fVar16 + 0.0;
        fVar9 = fVar14 * fVar14 + fVar18 * fVar18 + 0.0;
        fVar17 = fVar13 * fVar13 + fVar15 * fVar15 + 0.0;
        if (fVar17 <= fVar9) {
            fVar17 = fVar9;
        }
        if (fVar17 <= fVar11) {
            fVar17 = fVar11;
        }
        auVar8 = sqrtps(CONCAT412(param_1[7] * 0.0,
                                  CONCAT48(param_1[6] * 0.0, CONCAT44(fVar18 * 0.0, fVar14 * 0.0))),
                        ZEXT416((uint)
        fVar17));
        fVar17 = SUB164(auVar8, 0) * param_1[0x27];
        *(undefined(*)[16])(param_2 + 8) =
                CONCAT412(param_1[3] * 0.0 + param_1[7] * 0.0 + param_1[0xb] * 0.0 + param_1[0xf],
                          CONCAT48(param_1[2] * 0.0 + param_1[6] * 0.0 + param_1[10] * 0.0 + param_1[0xe],
                                   CONCAT44(fVar15 * 0.0 + fVar18 * 0.0 + fVar16 * 0.0 + param_1[0xd],
                                            fVar13 * 0.0 + fVar14 * 0.0 + fVar10 * 0.0 + param_1[0xc])));
        param_2[0xc] = fVar17;
        *param_2 = param_2[8] - fVar17;
        param_2[1] = param_2[9] - fVar17;
        param_2[2] = param_2[10] - fVar17;
        param_2[3] = param_2[0xb] - fVar17;
        *(undefined(*)[16])(param_2 + 4) =
                CONCAT412(fVar17 + param_2[0xb],
                          CONCAT48(fVar17 + param_2[10], CONCAT44(fVar17 + param_2[9], fVar17 + param_2[8])));
    } else {
        if (fVar10 == 1.401298e-45) {
            FUN_1408fe3d0();
            fVar10 = extraout_XMM0_Da_07;
            FUN_1408fc950();
            fVar15 = param_1[0x24] * fVar10;
            fVar19 = param_1[0x10] - param_1[0x27];
            fVar14 = (float) ((uint)
            fVar15 ^ 0x80000000);
            fVar9 = param_1[0x27] * (fVar10 / extraout_XMM0_Da_08);
            fVar18 = param_1[0x10] - param_1[0x24] * extraout_XMM0_Da_08;
            fVar11 = (float) ((uint)
            fVar9 ^ 0x80000000);
            fVar10 = fVar9;
            fVar13 = fVar11;
            fVar16 = fVar14;
            fVar17 = fVar15;
        } else if (fVar10 == 2.802597e-45) {
            FUN_1408fc950();
            fVar15 = extraout_XMM0_Da_03;
            FUN_1408fc950();
            fVar16 = extraout_XMM0_Da_04;
            FUN_1408fe3d0();
            fVar14 = extraout_XMM0_Da_05 / fVar15;
            FUN_1408fe3d0();
            fVar10 = param_1[0x27];
            fVar19 = param_1[0x10] - fVar10;
            fVar9 = fVar10 * fVar14;
            if (fVar16 <= fVar15) {
                fVar15 = fVar16;
            }
            fVar15 = fVar15 * param_1[0x24];
            fVar10 = fVar10 * (extraout_XMM0_Da_06 / fVar16);
            fVar18 = param_1[0x10] - fVar15;
            fVar17 = fVar15 * (extraout_XMM0_Da_06 / fVar16);
            fVar15 = fVar15 * fVar14;
            fVar11 = (float) ((uint)
            fVar10 ^ 0x80000000);
            fVar14 = (float) ((uint)
            fVar17 ^ 0x80000000);
            fVar13 = (float) ((uint)
            fVar9 ^ 0x80000000);
            fVar16 = (float) ((uint)
            fVar15 ^ 0x80000000);
        } else if (fVar10 == 4.203895e-45) {
            FUN_1408fd8a4();
            fVar12 = extraout_XMM0_Da_01;
            FUN_1408fd8a4();
            fVar17 = param_1[0x21];
            fVar7 = param_1[0x24];
            fVar16 = param_1[0x27];
            fVar18 = (float) ((uint)
            fVar7 ^ 0x80000000);
            fVar15 = fVar17 + fVar7 * fVar12;
            fVar14 = fVar7 * extraout_XMM0_Da_02 - fVar17;
            fVar19 = (float) ((uint)
            fVar16 ^ 0x80000000);
            fVar11 = fVar16 * extraout_XMM0_Da_02 - fVar17;
            fVar9 = fVar16 * fVar12 + fVar17;
            fVar10 = fVar16 * extraout_XMM0_Da_02 + fVar17;
            fVar13 = fVar16 * fVar12 - fVar17;
            fVar16 = fVar7 * fVar12 - fVar17;
            fVar17 = fVar7 * extraout_XMM0_Da_02 + fVar17;
        } else {
            if (fVar10 != 5.605194e-45) {
                fVar10 = param_1[0xc];
                fVar16 = param_1[0xd];
                fVar14 = param_1[0xe];
                fVar18 = param_1[0xf];
                *param_2 = fVar10;
                param_2[1] = fVar16;
                param_2[2] = fVar14;
                param_2[3] = fVar18;
                param_2[4] = fVar10;
                param_2[5] = fVar16;
                param_2[6] = fVar14;
                param_2[7] = fVar18;
                fVar10 = param_1[0xd];
                fVar16 = param_1[0xe];
                fVar14 = param_1[0xf];
                param_2[8] = param_1[0xc];
                param_2[9] = fVar10;
                param_2[10] = fVar16;
                param_2[0xb] = fVar14;
                param_2[0xc] = 0.0;
                return;
            }
            FUN_1408fd8a4();
            fVar12 = extraout_XMM0_Da;
            FUN_1408fd8a4();
            fVar17 = param_1[0x24];
            fVar16 = param_1[0x21];
            fVar13 = param_1[0x27];
            fVar18 = (float) ((uint)
            fVar17 ^ 0x80000000);
            fVar7 = param_1[0x23];
            fVar15 = fVar16 + fVar17 * fVar12;
            fVar14 = fVar17 * extraout_XMM0_Da_00 - fVar7;
            fVar9 = fVar13 * fVar12 + fVar16;
            fVar19 = (float) ((uint)
            fVar13 ^ 0x80000000);
            fVar11 = fVar13 * extraout_XMM0_Da_00 - fVar7;
            fVar10 = fVar13 * extraout_XMM0_Da_00 + fVar7;
            fVar13 = fVar13 * fVar12 - fVar16;
            fVar16 = fVar17 * fVar12 - fVar16;
            fVar17 = fVar7 + fVar17 * extraout_XMM0_Da_00;
        }
        if (fVar13 <= fVar16) {
            fVar16 = fVar13;
        }
        *param_2 = fVar16;
        if (fVar11 <= fVar14) {
            fVar14 = fVar11;
        }
        param_2[1] = fVar14;
        param_2[2] = fVar19;
        if (fVar15 <= fVar9) {
            fVar15 = fVar9;
        }
        param_2[4] = fVar15;
        if (fVar17 <= fVar10) {
            fVar17 = fVar10;
        }
        param_2[5] = fVar17;
        param_2[6] = fVar18;
        fVar10 = *param_1;
        auVar6 = *(undefined(*)[12])(param_1 + 0xc);
        auVar5 = *(undefined(*)[12])(param_1 + 0xc);
        local_b8._0_4_ = SUB124(auVar5, 0);
        local_a8._0_4_ = SUB124(auVar6, 0);
        fVar13 = fVar16;
        fVar9 = fVar15;
        if (0.0 < fVar10) {
            fVar13 = fVar15;
            fVar9 = fVar16;
        }
        fVar11 = param_1[4];
        fVar7 = fVar14;
        fVar12 = fVar17;
        if (0.0 < fVar11) {
            fVar7 = fVar17;
            fVar12 = fVar14;
        }
        fVar1 = param_1[8];
        fVar4 = fVar19;
        fVar3 = fVar18;
        if (0.0 < fVar1) {
            fVar4 = fVar18;
            fVar3 = fVar19;
        }
        fVar2 = param_1[1];
        _local_a8 = CONCAT124(auVar6 >> 0x20,
                              local_a8._0_4_ + fVar10 * fVar13 + fVar11 * fVar7 + fVar1 * fVar4) &
                    (undefined[16])
        0xffffffffffffffff;
        local_b8._4_4_ = SUB164(ZEXT1216(auVar5) >> 0x20, 0);
        _local_b8 = CONCAT124(auVar5 >> 0x20,
                              local_b8._0_4_ + fVar10 * fVar9 + fVar11 * fVar12 + fVar1 * fVar3) &
                    (undefined[16])
        0xffffffffffffffff;
        fVar10 = fVar16;
        fVar13 = fVar15;
        if (0.0 < fVar2) {
            fVar10 = fVar15;
            fVar13 = fVar16;
        }
        fVar9 = param_1[5];
        fVar11 = fVar14;
        fVar7 = fVar17;
        if (0.0 < fVar9) {
            fVar11 = fVar17;
            fVar7 = fVar14;
        }
        fVar12 = param_1[9];
        fVar1 = fVar19;
        fVar4 = fVar18;
        if (0.0 < fVar12) {
            fVar1 = fVar18;
            fVar4 = fVar19;
        }
        fVar3 = param_1[2];
        fVar11 = local_a8._4_4_ + fVar10 * fVar2 + fVar11 * fVar9 + fVar12 * fVar1;
        fVar16 = fVar16 * fVar3;
        fVar10 = fVar15 * fVar3;
        if (0.0 < fVar3) {
            fVar10 = fVar16;
            fVar16 = fVar15 * fVar3;
        }
        fVar15 = param_1[6];
        fVar14 = fVar14 * fVar15;
        fVar1 = fVar17 * fVar15;
        if (0.0 < fVar15) {
            fVar1 = fVar14;
            fVar14 = fVar17 * fVar15;
        }
        fVar15 = param_1[10];
        fVar17 = fVar19;
        if (0.0 < fVar15) {
            fVar17 = fVar18;
            fVar18 = fVar19;
        }
        fVar16 = fStack160 + fVar16 + fVar14 + fVar15 * fVar17;
        *param_2 = local_b8._0_4_;
        param_2[1] = local_b8._4_4_ + fVar13 * fVar2 + fVar7 * fVar9 + fVar12 * fVar4;
        param_2[2] = fStack176 + fVar10 + fVar1 + fVar15 * fVar18;
        param_2[3] = fStack172;
        param_2[4] = local_a8._0_4_;
        param_2[5] = fVar11;
        param_2[6] = fVar16;
        param_2[7] = fStack156;
        fVar10 = local_a8._0_4_ - *param_2;
        fVar14 = fVar11 - param_2[1];
        *(undefined(*)[16])(param_2 + 8) =
                CONCAT412((param_2[3] + fStack156) * 0.5,
                          CONCAT48((param_2[2] + fVar16) * 0.5,
                                   CONCAT44((param_2[1] + fVar11) * 0.5, (*param_2 + local_a8._0_4_) * 0.5))
                );
        param_2[0xc] = SQRT(fVar10 * fVar10 + fVar14 * fVar14 + 0.0) * 0.5;
    }
    return;
}


undefined8 *
FUN_140253490(undefined8 *param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
              undefined4 *param_5) {
    int iVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    longlong lVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    undefined4 *puVar8;
    ulonglong uVar9;

    uVar9 = 0;
    *param_1 = &PTR_LAB_140b60750;
    param_1[0x8b] = 0;
    param_1[0x8a] = 0;
    param_1[0x101] = 0;
    param_1[0x102] = 0;
    param_1[0x103] = 0;
    param_1[0x104] = 0;
    param_1[0x105] = 0;
    param_1[0x106] = 0;
    param_1[0x107] = 0;
    param_1[0x108] = 0;
    param_1[0x109] = 0;
    param_1[0x10a] = 0;
    param_1[0x10b] = 0;
    param_1[0x10c] = 0;
    param_1[0x10d] = 0;
    param_1[0x10e] = 0;
    param_1[0x10f] = 0;
    param_1[0x110] = 0;
    param_1[0x111] = 0;
    param_1[0x112] = 0;
    param_1[0x113] = 0;
    param_1[0x114] = 0;
    param_1[0x115] = 0;
    param_1[0x116] = 0;
    param_1[0x117] = 0;
    param_1[0x118] = 0;
    param_1[0x119] = 0;
    param_1[0x11a] = 0;
    param_1[0x11b] = 0;
    param_1[0x11c] = 0;
    param_1[0x11d] = 0;
    param_1[0x11e] = 0;
    param_1[0x11f] = 0;
    param_1[0x132] = 0;
    param_1[0x131] = 0;
    param_1[0x134] = 0;
    param_1[0x133] = 0;
    param_1[2] = param_2;
    param_1[3] = param_3;
    *(undefined4 * )(param_1 + 1) = 1;
    *(undefined4 * )(param_1 + 4) = 0;
    FUN_1407e4830(param_1 + 0x4c, 0, 400);
    FUN_1407e4830(param_1 + 0xce, 0, 0x80);
    FUN_1407e4830(param_1 + 0xde, 0, 0xa0);
    FUN_1407e4830(param_1 + 0xf2, 0, 0x78);
    if (param_5 == (undefined4 *) 0x0) {
        puVar7 = param_1 + 0x8d;
        do {
            iVar1 = (int) uVar9;
            uVar9 = uVar9 + 1;
            *(undefined4 * )((longlong) puVar7 + -4) = 0x3f800000;
            *(undefined4 *) puVar7 = 0x42200000;
            *(undefined4 * )((longlong) puVar7 + 4) = 0x3f800000;
            *(undefined4 * )(puVar7 + 1) = 0x43160000;
            *(int *) (puVar7 + -1) = iVar1 + 1;
            *(undefined4 * )((longlong) puVar7 + 0xc) = 0x3f800000;
            *(undefined4 * )(puVar7 + 2) = 0x42c80000;
            *(undefined4 * )((longlong) puVar7 + 0x14) = 0x3f800000;
            *(undefined4 * )(puVar7 + 3) = 0x42c80000;
            *(undefined4 * )((longlong) puVar7 + 0x1c) = 1;
            puVar7 = puVar7 + 5;
        } while (uVar9 < 0xc);
    } else {
        puVar7 = param_1 + 0x8c;
        if ((((uint)param_5 | (uint)
        puVar7) &0xf) == 0) {
            lVar5 = 3;
            do {
                puVar8 = param_5;
                puVar6 = puVar7;
                uVar2 = puVar8[1];
                uVar3 = puVar8[2];
                uVar4 = puVar8[3];
                *(undefined4 *) puVar6 = *puVar8;
                *(undefined4 * )((longlong) puVar6 + 4) = uVar2;
                *(undefined4 * )(puVar6 + 1) = uVar3;
                *(undefined4 * )((longlong) puVar6 + 0xc) = uVar4;
                uVar2 = puVar8[5];
                uVar3 = puVar8[6];
                uVar4 = puVar8[7];
                *(undefined4 * )(puVar6 + 2) = puVar8[4];
                *(undefined4 * )((longlong) puVar6 + 0x14) = uVar2;
                *(undefined4 * )(puVar6 + 3) = uVar3;
                *(undefined4 * )((longlong) puVar6 + 0x1c) = uVar4;
                uVar2 = puVar8[9];
                uVar3 = puVar8[10];
                uVar4 = puVar8[0xb];
                *(undefined4 * )(puVar6 + 4) = puVar8[8];
                *(undefined4 * )((longlong) puVar6 + 0x24) = uVar2;
                *(undefined4 * )(puVar6 + 5) = uVar3;
                *(undefined4 * )((longlong) puVar6 + 0x2c) = uVar4;
                uVar2 = puVar8[0xd];
                uVar3 = puVar8[0xe];
                uVar4 = puVar8[0xf];
                *(undefined4 * )(puVar6 + 6) = puVar8[0xc];
                *(undefined4 * )((longlong) puVar6 + 0x34) = uVar2;
                *(undefined4 * )(puVar6 + 7) = uVar3;
                *(undefined4 * )((longlong) puVar6 + 0x3c) = uVar4;
                uVar2 = puVar8[0x11];
                uVar3 = puVar8[0x12];
                uVar4 = puVar8[0x13];
                *(undefined4 * )(puVar6 + 8) = puVar8[0x10];
                *(undefined4 * )((longlong) puVar6 + 0x44) = uVar2;
                *(undefined4 * )(puVar6 + 9) = uVar3;
                *(undefined4 * )((longlong) puVar6 + 0x4c) = uVar4;
                uVar2 = puVar8[0x15];
                uVar3 = puVar8[0x16];
                uVar4 = puVar8[0x17];
                *(undefined4 * )(puVar6 + 10) = puVar8[0x14];
                *(undefined4 * )((longlong) puVar6 + 0x54) = uVar2;
                *(undefined4 * )(puVar6 + 0xb) = uVar3;
                *(undefined4 * )((longlong) puVar6 + 0x5c) = uVar4;
                uVar2 = puVar8[0x19];
                uVar3 = puVar8[0x1a];
                uVar4 = puVar8[0x1b];
                *(undefined4 * )(puVar6 + 0xc) = puVar8[0x18];
                *(undefined4 * )((longlong) puVar6 + 100) = uVar2;
                *(undefined4 * )(puVar6 + 0xd) = uVar3;
                *(undefined4 * )((longlong) puVar6 + 0x6c) = uVar4;
                uVar2 = puVar8[0x1d];
                uVar3 = puVar8[0x1e];
                uVar4 = puVar8[0x1f];
                *(undefined4 * )(puVar6 + 0xe) = puVar8[0x1c];
                *(undefined4 * )((longlong) puVar6 + 0x74) = uVar2;
                *(undefined4 * )(puVar6 + 0xf) = uVar3;
                *(undefined4 * )((longlong) puVar6 + 0x7c) = uVar4;
                lVar5 = lVar5 + -1;
                puVar7 = puVar6 + 0x10;
                param_5 = puVar8 + 0x20;
            } while (lVar5 != 0);
            uVar2 = puVar8[0x21];
            uVar3 = puVar8[0x22];
            uVar4 = puVar8[0x23];
            *(undefined4 * )(puVar6 + 0x10) = puVar8[0x20];
            *(undefined4 * )((longlong) puVar6 + 0x84) = uVar2;
            *(undefined4 * )(puVar6 + 0x11) = uVar3;
            *(undefined4 * )((longlong) puVar6 + 0x8c) = uVar4;
            uVar2 = puVar8[0x25];
            uVar3 = puVar8[0x26];
            uVar4 = puVar8[0x27];
            *(undefined4 * )(puVar6 + 0x12) = puVar8[0x24];
            *(undefined4 * )((longlong) puVar6 + 0x94) = uVar2;
            *(undefined4 * )(puVar6 + 0x13) = uVar3;
            *(undefined4 * )((longlong) puVar6 + 0x9c) = uVar4;
            uVar2 = puVar8[0x29];
            uVar3 = puVar8[0x2a];
            uVar4 = puVar8[0x2b];
            *(undefined4 * )(puVar6 + 0x14) = puVar8[0x28];
            *(undefined4 * )((longlong) puVar6 + 0xa4) = uVar2;
            *(undefined4 * )(puVar6 + 0x15) = uVar3;
            *(undefined4 * )((longlong) puVar6 + 0xac) = uVar4;
            uVar2 = puVar8[0x2d];
            uVar3 = puVar8[0x2e];
            uVar4 = puVar8[0x2f];
            *(undefined4 * )(puVar6 + 0x16) = puVar8[0x2c];
            *(undefined4 * )((longlong) puVar6 + 0xb4) = uVar2;
            *(undefined4 * )(puVar6 + 0x17) = uVar3;
            *(undefined4 * )((longlong) puVar6 + 0xbc) = uVar4;
            uVar2 = puVar8[0x31];
            uVar3 = puVar8[0x32];
            uVar4 = puVar8[0x33];
            *(undefined4 * )(puVar6 + 0x18) = puVar8[0x30];
            *(undefined4 * )((longlong) puVar6 + 0xc4) = uVar2;
            *(undefined4 * )(puVar6 + 0x19) = uVar3;
            *(undefined4 * )((longlong) puVar6 + 0xcc) = uVar4;
            uVar2 = puVar8[0x35];
            uVar3 = puVar8[0x36];
            uVar4 = puVar8[0x37];
            *(undefined4 * )(puVar6 + 0x1a) = puVar8[0x34];
            *(undefined4 * )((longlong) puVar6 + 0xd4) = uVar2;
            *(undefined4 * )(puVar6 + 0x1b) = uVar3;
            *(undefined4 * )((longlong) puVar6 + 0xdc) = uVar4;
        }
        else {
            FUN_1407db590(puVar7, param_5, 0x1e0);
        }
    }
    *(undefined4 * )((longlong) param_1 + 0x984) = 3;
    return param_1;
}


void FUN_140253740(undefined8 *param_1) {
    longlong lVar1;
    int iVar2;
    undefined8 *puVar3;

    *param_1 = &PTR_LAB_140b60750;
    FUN_140255750();
    if ((longlong *) param_1[0xde] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0xde] + 8))();
        param_1[0xde] = 0;
    }
    if ((longlong *) param_1[0xdf] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0xdf] + 8))();
        param_1[0xdf] = 0;
    }
    if ((longlong *) param_1[0xe0] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0xe0] + 8))();
        param_1[0xe0] = 0;
    }
    if ((longlong *) param_1[0xe1] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0xe1] + 8))();
        param_1[0xe1] = 0;
    }
    if ((longlong *) param_1[0xe2] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0xe2] + 8))();
        param_1[0xe2] = 0;
    }
    if ((longlong *) param_1[0xe3] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0xe3] + 8))();
        param_1[0xe3] = 0;
    }
    puVar3 = param_1 + 0x135;
    iVar2 = 1;
    do {
        lVar1 = puVar3[-2];
        puVar3 = puVar3 + -2;
        if (lVar1 != 0) {
            (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        }
        iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    if ((longlong *) param_1[0x11f] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x11f] + 8))();
    }
    if ((longlong *) param_1[0x11e] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x11e] + 8))();
    }
    if ((longlong *) param_1[0x11d] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x11d] + 8))();
    }
    if ((longlong *) param_1[0x11c] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x11c] + 8))();
    }
    if ((longlong *) param_1[0x11b] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x11b] + 8))();
    }
    if ((longlong *) param_1[0x11a] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x11a] + 8))();
    }
    if ((longlong *) param_1[0x119] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x119] + 8))();
    }
    if ((longlong *) param_1[0x118] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x118] + 8))();
    }
    if ((longlong *) param_1[0x117] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x117] + 8))();
    }
    if ((longlong *) param_1[0x116] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x116] + 8))();
    }
    if ((longlong *) param_1[0x115] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x115] + 8))();
    }
    if ((longlong *) param_1[0x114] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x114] + 8))();
    }
    if ((longlong *) param_1[0x113] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x113] + 8))();
    }
    if ((longlong *) param_1[0x112] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x112] + 8))();
    }
    if ((longlong *) param_1[0x111] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x111] + 8))();
    }
    if ((longlong *) param_1[0x110] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x110] + 8))();
    }
    if ((longlong *) param_1[0x10f] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x10f] + 8))();
    }
    if ((longlong *) param_1[0x10e] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x10e] + 8))();
    }
    if ((longlong *) param_1[0x10d] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x10d] + 8))();
    }
    if ((longlong *) param_1[0x10c] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x10c] + 8))();
    }
    if ((longlong *) param_1[0x10b] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x10b] + 8))();
    }
    if ((longlong *) param_1[0x10a] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x10a] + 8))();
    }
    if ((longlong *) param_1[0x109] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x109] + 8))();
    }
    if ((longlong *) param_1[0x108] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x108] + 8))();
    }
    if ((longlong *) param_1[0x107] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x107] + 8))();
    }
    if ((longlong *) param_1[0x106] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x106] + 8))();
    }
    if ((longlong *) param_1[0x105] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x105] + 8))();
    }
    if ((longlong *) param_1[0x104] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x104] + 8))();
    }
    if ((longlong *) param_1[0x103] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x103] + 8))();
    }
    if ((longlong *) param_1[0x102] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x102] + 8))();
    }
    if ((longlong *) param_1[0x101] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x101] + 8))();
    }
    lVar1 = param_1[0x8a];
    if (lVar1 != 0) {
        (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    return;
}


ulonglong FUN_140253a90(longlong param_1) {
    uint uVar1;
    undefined4 *puVar2;
    ulonglong uVar3;
    longlong lVar4;
    ulonglong uVar5;
    float fVar6;
    undefined local_res8[8];
    longlong *local_res10;
    undefined8 in_stack_ffffffffffffff58;
    undefined8 uVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    undefined4 uVar10;
    undefined8 in_stack_ffffffffffffff60;
    undefined4 uVar13;
    undefined8 uVar11;
    ulonglong uVar12;
    undefined8 in_stack_ffffffffffffff70;
    uint uVar15;
    ulonglong uVar14;
    undefined4 local_78[2];
    longlong local_70;
    code *local_68;
    undefined8 local_60;
    undefined local_58[16];
    undefined4 local_48;
    undefined4 local_44;
    undefined4 local_40;
    undefined8 local_3c;
    undefined4 local_28;
    undefined4 uStack36;
    undefined4 uStack32;
    undefined4 uStack28;

    uVar1 = (uint)((ulonglong)
    in_stack_ffffffffffffff58 >> 0x20);
    uVar13 = (undefined4)((ulonglong)
    in_stack_ffffffffffffff60 >> 0x20);
    uVar15 = (uint)((ulonglong)
    in_stack_ffffffffffffff70 >> 0x20);
    *(undefined4 * )(param_1 + 0x30) = 0x17;
    uVar5 = 0;
    *(undefined8 * )(param_1 + 0x24) = 0;
    *(undefined4 * )(param_1 + 0x2c) = 0;
    *(undefined4 * )(param_1 + 0x640) = DAT_140c77760;
    *(undefined4 * )(param_1 + 0x644) = DAT_140c77764;
    *(undefined4 * )(param_1 + 0x648) = DAT_140c77760;
    *(undefined4 * )(param_1 + 0x64c) = DAT_140c77764;
    *(undefined4 * )(param_1 + 0x650) = DAT_140c77760;
    *(undefined4 * )(param_1 + 0x654) = DAT_140c77764;
    puVar2 = (undefined4 * )(**(code * *)(*DAT_140c65670 + 0x2d0))();
    uVar10 = *puVar2;
    *(undefined4 * )(param_1 + 0x660) = 0;
    *(undefined4 * )(param_1 + 0x658) = uVar10;
    uVar14 = (ulonglong)
    uVar15 << 0x20;
    uVar7 = CONCAT44(uVar13, 0x100);
    lVar4 = (ulonglong)
    uVar1 << 0x20;
    uVar3 = (**(code * *)(*DAT_140c65670 + 0x50))
            (DAT_140c65670, L"Art\\Dev\\MaterialConstant.dds", 0, 1, lVar4, uVar7, 0, uVar14,
             param_1 + 0x6f0);
    if (-1 < (int) uVar3) {
        uVar14 = uVar14 & 0xffffffff00000000;
        uVar11 = CONCAT44((int) ((ulonglong)
        uVar7 >> 0x20),0x100);
        uVar7 = CONCAT44((int) ((ulonglong)
        lVar4 >> 0x20),1);
        uVar3 = (**(code * *)(*DAT_140c65670 + 0x50))
                (DAT_140c65670, L"Art\\Dev\\MaterialData.dds", 0, 1, uVar7, uVar11, 0, uVar14,
                 param_1 + 0x6f8);
        if (-1 < (int) uVar3) {
            uVar9 = param_1 + 0x700;
            uVar14 = uVar14 & 0xffffffff00000000;
            uVar12 = CONCAT44((int) ((ulonglong)
            uVar11 >> 0x20),0x100);
            uVar8 = CONCAT44((int) ((ulonglong)
            uVar7 >> 0x20),1);
            uVar3 = (**(code * *)(*DAT_140c65670 + 0x50))
                    (DAT_140c65670, L"Art\\Dev\\MaterialData.dds", 0, 1, uVar8, uVar12, 0, uVar14, uVar9
                    );
            if (-1 < (int) uVar3) {
                lVar4 = (**(code * *)(*DAT_140c65670 + 0x2c8))();
                uVar1 = 1;
                if (*(int *) (lVar4 + 0x54) != 0) {
                    uVar1 = 4;
                }
                uVar9 = uVar9 & 0xffffffff00000000;
                uVar14 = uVar14 & 0xffffffff00000000;
                uVar8 = uVar8 & 0xffffffff00000000;
                uVar3 = (**(code * *)(*DAT_140c65670 + 0x58))
                        (DAT_140c65670, 0xc, 2, 1, uVar8,
                         uVar12 & 0xffffffff00000000 | (ulonglong)
                uVar1, 0, uVar14, uVar9,
                        param_1 + 0x708);
                if (-1 < (int) uVar3) {
                    uVar7 = CONCAT44((int) (uVar8 >> 0x20), 0x14);
                    uVar3 = (**(code * *)(*DAT_140c65670 + 0x58))
                            (DAT_140c65670, 0xc, 2, 1, uVar7, 1, 0, uVar14 & 0xffffffff00000000,
                             uVar9 & 0xffffffff00000000, param_1 + 0x710);
                    if (-1 < (int) uVar3) {
                        uVar14 = param_1 + 0x718;
                        uVar9 = CONCAT44((int) ((ulonglong)
                        uVar7 >> 0x20),1);
                        uVar3 = (**(code * *)(*DAT_140c65670 + 0x70))
                                (DAT_140c65670, L"Art\\Dev\\SkyReflection.dds", 0, 1, uVar9, 0x15, 0, uVar14);
                        if (-1 < (int) uVar3) {
                            local_res10 = (longlong *) 0x0;
                            uVar1 = (**(code * *)(*DAT_140c65670 + 0x50))
                                    (DAT_140c65670, L"Art\\Dev\\MaterialConstant.dds", 0, 0,
                                     uVar9 & 0xffffffff00000000, 0x100, 0, uVar14 & 0xffffffff00000000,
                                     &local_res10);
                            uVar3 = (ulonglong)
                            uVar1;
                            if (-1 < (int) uVar1) {
                                lVar4 = (**(code * *)(*local_res10 + 0x18))();
                                FUN_140052360(param_1 + 0x450, *(undefined4 * )(lVar4 + 8));
                                lVar4 = (**(code * *)(*local_res10 + 0x48))(local_res10, 0, local_res8, 1);
                                if (lVar4 != 0) {
                                    if (*(longlong * )(param_1 + 0x458) != 0) {
                                        do {
                                            fVar6 = (float) FUN_1401c9770();
                                            uVar5 = uVar5 + 1;
                                            *(int *) (*(longlong * )(param_1 + 0x450) + -4 + uVar5 * 4) = (int) fVar6;
                                        } while (uVar5 < *(ulonglong * )(param_1 + 0x458));
                                    }
                                    if (local_res10 != (longlong *) 0x0) {
                                        (**(code * *)(*local_res10 + 8))();
                                    }
                                    local_48 = 0xff7fffff;
                                    local_58 = ZEXT816(0);
                                    local_3c = 1;
                                    local_28 = 0x3f800000;
                                    uStack36 = 0x3f800000;
                                    uStack32 = 0x3f800000;
                                    uStack28 = 0x3f800000;
                                    local_44 = 0x7f7fffff;
                                    local_40 = 0;
                                    uVar3 = (**(code * *)(*DAT_140c65670 + 200))
                                            (DAT_140c65670, param_1 + 0x808, local_58);
                                    if ((int) uVar3 < 0) {
                                        return uVar3;
                                    }
                                    uVar3 = (**(code * *)(*DAT_140c65670 + 0x40))
                                            (DAT_140c65670, 0x48, 0, 1, param_1 + 0x810);
                                    if ((int) uVar3 < 0) {
                                        return uVar3;
                                    }
                                    lVar4 = param_1 + 0x818;
                                    uVar3 = (**(code * *)(*DAT_140c65670 + 0x40))(DAT_140c65670, 0x30, 0, 1, lVar4);
                                    uVar10 = (undefined4)((ulonglong)
                                    lVar4 >> 0x20);
                                    if ((int) uVar3 < 0) {
                                        return uVar3;
                                    }
                                    uVar3 = (**(code * *)(*DAT_140c65670 + 0x38))(DAT_140c65670, 0x80, 1,
                                                                                  param_1 + 0x820);
                                    if ((int) uVar3 < 0) {
                                        return uVar3;
                                    }
                                    uVar3 = (**(code * *)(*DAT_140c65680 + 0x20))
                                            (DAT_140c65680, L"Arial Unicode MS", 7, *DAT_140c65680,
                                             CONCAT44(uVar10, 0x10), param_1 + 0x828);
                                    if ((int) uVar3 < 0) {
                                        return uVar3;
                                    }
                                    uVar3 = (**(code * *)(*DAT_140c65670 + 0xb8))(DAT_140c65670, param_1 + 0x830);
                                    if ((int) uVar3 < 0) {
                                        return uVar3;
                                    }
                                    uVar3 = (**(code * *)(*DAT_140c65670 + 0x98))
                                            (DAT_140c65670, L"Shaders\\SimplePS.sho", param_1 + 0x838);
                                    if ((int) uVar3 < 0) {
                                        return uVar3;
                                    }
                                    uVar3 = (**(code * *)(*DAT_140c65670 + 0x90))
                                            (DAT_140c65670, L"Shaders\\SimpleVS.sho", param_1 + 0x840);
                                    if ((int) uVar3 < 0) {
                                        return uVar3;
                                    }
                                    uVar3 = (**(code * *)(*DAT_140c65670 + 0x98))
                                            (DAT_140c65670, L"Shaders\\fogSkyPS.sho", param_1 + 0x848);
                                    if ((int) uVar3 < 0) {
                                        return uVar3;
                                    }
                                    uVar3 = (**(code * *)(*DAT_140c65670 + 0x98))
                                            (DAT_140c65670, L"Shaders\\FillPS.sho", param_1 + 0x850);
                                    if ((int) uVar3 < 0) {
                                        return uVar3;
                                    }
                                    uVar3 = (**(code * *)(*DAT_140c65670 + 0x90))
                                            (DAT_140c65670, L"Shaders\\StencilVS.sho", param_1 + 0x858);
                                    if ((int) uVar3 < 0) {
                                        return uVar3;
                                    }
                                    uVar3 = (**(code * *)(*DAT_140c65670 + 0x98))
                                            (DAT_140c65670, L"Shaders\\StencilPS.sho", param_1 + 0x860);
                                    if ((int) uVar3 < 0) {
                                        return uVar3;
                                    }
                                    uVar3 = (**(code * *)(*DAT_140c65670 + 0x98))
                                            (DAT_140c65670, L"Shaders\\CompositePS.sho", param_1 + 0x868);
                                    if ((int) uVar3 < 0) {
                                        return uVar3;
                                    }
                                    uVar3 = (**(code * *)(*DAT_140c65670 + 0x98))
                                            (DAT_140c65670, L"Shaders\\TelegraphPS.sho", param_1 + 0x870);
                                    if ((int) uVar3 < 0) {
                                        return uVar3;
                                    }
                                    uVar3 = (**(code * *)(*DAT_140c65670 + 0x98))
                                            (DAT_140c65670, L"Shaders\\DecalPS.sho", param_1 + 0x878);
                                    if ((int) uVar3 < 0) {
                                        return uVar3;
                                    }
                                    uVar3 = (**(code * *)(*DAT_140c65670 + 0x98))
                                            (DAT_140c65670, L"Shaders\\LightPS.sho", param_1 + 0x880);
                                    if ((int) uVar3 < 0) {
                                        return uVar3;
                                    }
                                    uVar3 = (**(code * *)(*DAT_140c65670 + 0x98))
                                            (DAT_140c65670, L"Shaders\\LightSunSkyPS.sho", param_1 + 0x888);
                                    if ((int) uVar3 < 0) {
                                        return uVar3;
                                    }
                                    uVar3 = (**(code * *)(*DAT_140c65670 + 0x90))
                                            (DAT_140c65670, L"Shaders\\FogVS.sho", param_1 + 0x890);
                                    if ((int) uVar3 < 0) {
                                        return uVar3;
                                    }
                                    uVar3 = (**(code * *)(*DAT_140c65670 + 0x98))
                                            (DAT_140c65670, L"Shaders\\FogPS.sho", param_1 + 0x898);
                                    if ((int) uVar3 < 0) {
                                        return uVar3;
                                    }
                                    uVar3 = (**(code * *)(*DAT_140c65670 + 0x98))
                                            (DAT_140c65670, L"Shaders\\FogDepthPS.sho", param_1 + 0x8a0);
                                    if ((int) uVar3 < 0) {
                                        return uVar3;
                                    }
                                    uVar3 = (**(code * *)(*DAT_140c65670 + 0x98))
                                            (DAT_140c65670, L"Shaders\\PortalPS.sho", param_1 + 0x8a8);
                                    if ((int) uVar3 < 0) {
                                        return uVar3;
                                    }
                                    uVar3 = (**(code * *)(*DAT_140c65670 + 0x98))
                                            (DAT_140c65670, L"Shaders\\DebugPS.sho", param_1 + 0x8b0);
                                    if ((int) uVar3 < 0) {
                                        return uVar3;
                                    }
                                    uVar3 = (**(code * *)(*DAT_140c65670 + 0x98))
                                            (DAT_140c65670, L"Shaders\\Downsample1_2PS.sho", param_1 + 0x8b8);
                                    if ((int) uVar3 < 0) {
                                        return uVar3;
                                    }
                                    uVar3 = (**(code * *)(*DAT_140c65670 + 0x98))
                                            (DAT_140c65670, L"Shaders\\BrightPassPS.sho", param_1 + 0x8c0);
                                    if ((int) uVar3 < 0) {
                                        return uVar3;
                                    }
                                    uVar3 = (**(code * *)(*DAT_140c65670 + 0x98))
                                            (DAT_140c65670, L"Shaders\\GaussianBlurPS.sho", param_1 + 0x8c8);
                                    if ((int) uVar3 < 0) {
                                        return uVar3;
                                    }
                                    uVar3 = (**(code * *)(*DAT_140c65670 + 0x98))
                                            (DAT_140c65670, L"Shaders\\AccPS.sho", param_1 + 0x8d0);
                                    if ((int) uVar3 < 0) {
                                        return uVar3;
                                    }
                                    uVar3 = (**(code * *)(*DAT_140c65670 + 0x98))
                                            (DAT_140c65670, L"Shaders\\WorldPS.sho", param_1 + 0x8d8);
                                    if ((int) uVar3 < 0) {
                                        return uVar3;
                                    }
                                    uVar3 = (**(code * *)(*DAT_140c65670 + 0x98))
                                            (DAT_140c65670, L"Shaders\\scatterPS.sho", param_1 + 0x8e0);
                                    if ((int) uVar3 < 0) {
                                        return uVar3;
                                    }
                                    uVar3 = (**(code * *)(*DAT_140c65670 + 0x98))
                                            (DAT_140c65670, L"Shaders\\FxaaPS.sho", param_1 + 0x8e8);
                                    if ((int) uVar3 < 0) {
                                        return uVar3;
                                    }
                                    uVar3 = (**(code * *)(*DAT_140c65670 + 0x98))
                                            (DAT_140c65670, L"Shaders\\LinearZPS.sho", param_1 + 0x8f0);
                                    if ((int) uVar3 < 0) {
                                        return uVar3;
                                    }
                                    uVar3 = (**(code * *)(*DAT_140c65670 + 0xc0))(DAT_140c65670, param_1 + 0x8f8);
                                    if ((int) uVar3 < 0) {
                                        return uVar3;
                                    }
                                    local_68 = FUN_140254390;
                                    local_78[0] = 0;
                                    local_60 = 0;
                                    local_70 = param_1;
                                    (**(code * *)(**(longlong * *)(param_1 + 0x8f8) + 0x18))
                                            (*(longlong * *)(param_1 + 0x8f8), 0, local_78);
                                    local_68 = FUN_140001b70;
                                    local_78[0] = 0;
                                    local_60 = 0;
                                    local_70 = param_1;
                                    (**(code * *)(**(longlong * *)(param_1 + 0x8f8) + 0x18))
                                            (*(longlong * *)(param_1 + 0x8f8), 1, local_78);
                                    FUN_140254390(param_1);
                                    *(undefined8 * )(param_1 + 0x918) = 0;
                                    *(undefined8 * )(param_1 + 0x920) = 0;
                                    *(undefined4 * )(param_1 + 0x928) = 0;
                                    *(undefined4 * )(param_1 + 0x92c) = 0x3f800000;
                                    *(undefined8 * )(param_1 + 0x930) = 0;
                                    *(undefined8 * )(param_1 + 0x938) = 0;
                                    *(undefined8 * )(param_1 + 0x940) = 0;
                                    *(undefined8 * )(param_1 + 0x948) = 0;
                                    *(undefined8 * )(param_1 + 0x950) = 0;
                                    *(undefined8 * )(param_1 + 0x958) = 0;
                                    *(undefined8 * )(param_1 + 0x960) = 7;
                                    *(undefined8 * )(param_1 + 0x968) = 0;
                                    *(undefined8 * )(param_1 + 0x970) = 0;
                                    *(undefined8 * )(param_1 + 0x978) = 0;
                                    *(undefined4 * )(param_1 + 0x980) = 7;
                                    return 0;
                                }
                                uVar3 = 0x80004005;
                            }
                            if (local_res10 != (longlong *) 0x0) {
                                (**(code * *)(*local_res10 + 8))();
                            }
                        }
                    }
                }
            }
        }
    }
    return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140254390(longlong param_1) {
    undefined auVar1[16];
    longlong lVar2;
    undefined4 *puVar3;
    undefined8 *puVar4;
    undefined(*pauVar5)[16];
    float *pfVar6;
    longlong lVar7;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    float fVar8;
    undefined extraout_XMM0[16];
    undefined extraout_XMM0_00[16];
    undefined auVar10[12];
    float fVar11;
    float fVar12;
    float fVar13;
    uint local_res8[2];
    undefined auVar9[16];

    lVar2 = (**(code * *)(**(longlong * *)(param_1 + 0x710) + 0x48))
            (*(longlong * *)(param_1 + 0x710), 0, local_res8, 2);
    if (lVar2 != 0) {
        fVar11 = 1.0;
        pauVar5 = (undefined(*)[16])((ulonglong)
        local_res8[0] + lVar2);
        puVar4 = (undefined8 * )(lVar2 + 8);
        pfVar6 = (float *) (param_1 + 0x470);
        fVar12 = 0.5;
        fVar13 = -1.0;
        lVar2 = lVar2 - (longlong) pauVar5;
        lVar7 = 0xc;
        auVar9 = extraout_XMM0;
        do {
            if (pfVar6 == (float *) &DAT_00000010) {
                auVar9 = auVar9 & (undefined[16])
                0x0;
                *pauVar5 = auVar9;
                *(undefined(*)[16])(lVar2 + (longlong) pauVar5) = auVar9;
            } else {
                if (*pfVar6 <= pfVar6[-1]) {
                    *(undefined8 * ) * pauVar5 = 0;
                } else {
                    *(float *) *pauVar5 = fVar13 / ((pfVar6[-1] + *pfVar6) * fVar12);
                    FUN_1408fc7f0();
                    *(float *) (*pauVar5 + 4) = fVar11 / (extraout_XMM0_Da - fVar11);
                }
                if (pfVar6[-2] <= pfVar6[-3]) {
                    *(undefined4 * )(lVar2 + (longlong) pauVar5) = 0;
                    *(undefined4 * )((longlong) puVar4 + -4) = 0;
                } else {
                    *(float *) (lVar2 + (longlong) pauVar5) = fVar13 / ((pfVar6[-2] + pfVar6[-3]) * fVar12);
                    FUN_1408fc7f0();
                    *(float *) ((longlong) puVar4 + -4) = fVar11 / (extraout_XMM0_Da_00 - fVar11);
                }
                if (pfVar6[4] <= pfVar6[3]) {
                    *(undefined8 * )(*pauVar5 + 8) = 0;
                } else {
                    *(float *) (*pauVar5 + 8) = fVar13 / ((pfVar6[4] + pfVar6[3]) * fVar12);
                    FUN_1408fc7f0();
                    *(float *) (*pauVar5 + 0xc) = fVar11 / (extraout_XMM0_Da_01 - fVar11);
                }
                fVar8 = pfVar6[1];
                auVar9 = ZEXT416((uint)
                fVar8);
                if (pfVar6[2] <= fVar8) {
                    *puVar4 = 0;
                } else {
                    *(float *) puVar4 = fVar13 / ((pfVar6[2] + fVar8) * fVar12);
                    FUN_1408fc7f0();
                    fVar8 = SUB164(extraout_XMM0_00, 0) - fVar11;
                    auVar9 = CONCAT124(SUB1612(extraout_XMM0_00 >> 0x20, 0), fVar8);
                    *(float *) ((longlong) puVar4 + 4) = fVar11 / fVar8;
                }
            }
            puVar4 = puVar4 + 2;
            pauVar5 = pauVar5[1];
            pfVar6 = pfVar6 + 10;
            lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
        (**(code * *)(**(longlong * *)(param_1 + 0x710) + 0x50))(*(longlong * *)(param_1 + 0x710), 0);
    }
    puVar3 = (undefined4 * )
            (**(code * *)(**(longlong * *)(param_1 + 0x810) + 0x38))
            (*(longlong * *)(param_1 + 0x810), 0, 0, 2);
    if (puVar3 != (undefined4 *) 0x0) {
        *puVar3 = 0x10002;
        puVar3[1] = 0x10000;
        puVar3[2] = 0x30002;
        puVar3[3] = 0x70001;
        puVar3[4] = 0x70005;
        puVar3[5] = 0x30001;
        puVar3[6] = 0x40007;
        puVar3[7] = 0x40005;
        puVar3[8] = 0x60007;
        puVar3[9] = 6;
        puVar3[10] = 4;
        puVar3[0xb] = 0x20006;
        puVar3[0xc] = 0x10004;
        puVar3[0xd] = 0x10005;
        puVar3[0xe] = 4;
        puVar3[0xf] = 0x60003;
        *(undefined8 * )(puVar3 + 0x10) = 0x2000300060007;
        (**(code * *)(**(longlong * *)(param_1 + 0x810) + 0x40))();
    }
    puVar4 = (undefined8 * )
            (**(code * *)(**(longlong * *)(param_1 + 0x818) + 0x38))
            (*(longlong * *)(param_1 + 0x818), 0, 0, 2);
    if (puVar4 != (undefined8 *) 0x0) {
        *puVar4 = 0x3000100010000;
        puVar4[1] = 0x200020003;
        puVar4[2] = 0x7000500050004;
        puVar4[3] = 0x4000600060007;
        puVar4[4] = 0x7000300050001;
        puVar4[5] = 0x6000200040000;
        (**(code * *)(**(longlong * *)(param_1 + 0x818) + 0x40))();
    }
    puVar3 = (undefined4 * )
            (**(code * *)(**(longlong * *)(param_1 + 0x820) + 0x38))
            (*(longlong * *)(param_1 + 0x820), 0, 0, 2);
    if (puVar3 != (undefined4 *) 0x0) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[4] = 0x3f800000;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[8] = 0;
        puVar3[9] = 0x3f800000;
        puVar3[10] = 0;
        puVar3[0xc] = 0x3f800000;
        puVar3[0xd] = 0x3f800000;
        puVar3[0xe] = 0;
        puVar3[0x10] = 0;
        puVar3[0x11] = 0;
        puVar3[0x12] = 0x3f800000;
        puVar3[0x14] = 0x3f800000;
        puVar3[0x15] = 0;
        puVar3[0x16] = 0x3f800000;
        puVar3[0x18] = 0;
        puVar3[0x19] = 0x3f800000;
        puVar3[0x1a] = 0x3f800000;
        auVar9 = _DAT_140b7a740 >> 0x40;
        auVar10 = SUB1612(_DAT_140b7a740, 0) & (undefined[12])
        0xffffffffffffffff;
        auVar1 = _DAT_140b7a740 >> 0x40;
        puVar3[0x1c] = SUB164(_DAT_140b7a740, 0);
        puVar3[0x1d] = SUB124(auVar10 >> 0x20, 0);
        puVar3[0x1e] = SUB164(auVar9, 0);
        (**(code * *)(**(longlong * *)(param_1 + 0x820) + 0x40))
                (SUB128(auVar10 >> 0x20, 0), SUB168(auVar1, 0));
    }
    return;
}


void FUN_140254810(longlong param_1, int *param_2) {
    int iVar1;
    int iVar2;
    uint uVar3;
    int iVar4;
    int *piVar5;
    undefined auStack184[32];
    undefined4 local_98;
    undefined4 local_90;
    undefined4 local_88;
    undefined4 local_80;
    undefined4 local_78;
    longlong local_70;
    int local_68[5];
    undefined4 local_54;
    undefined4 local_50;
    undefined4 local_4c;
    undefined4 local_48;
    undefined4 local_44;
    undefined4 local_40;
    undefined4 local_3c;
    undefined4 local_38;
    undefined4 local_34;
    ulonglong local_30;

    local_30 = DAT_140c0f7b0 ^ (ulonglong)
    auStack184;
    FUN_140255750();
    iVar2 = *param_2;
    if ((0 < iVar2) && (0 < param_2[1])) {
        uVar3 = 0;
        piVar5 = local_68;
        do {
            iVar4 = iVar2 >> ((byte) uVar3 & 0x1f);
            iVar1 = param_2[1] >> ((byte) uVar3 & 0x1f);
            if (iVar4 < (int) DAT_140c77768) {
                iVar4 = (int) DAT_140c77768;
            }
            if (iVar1 < DAT_140c77768._4_4_) {
                iVar1 = DAT_140c77768._4_4_;
            }
            uVar3 = uVar3 + 1;
            *piVar5 = iVar4;
            piVar5[1] = iVar1;
            piVar5 = piVar5 + 2;
        } while (uVar3 < 7);
        local_70 = param_1 + 0x670;
        local_78 = 0;
        local_80 = 0;
        local_88 = 1;
        local_90 = 5;
        local_98 = 0;
        iVar2 = (**(code * *)(*DAT_140c65670 + 0x58))(DAT_140c65670, local_68[0], local_68[1], 1);
        if (-1 < iVar2) {
            local_70 = param_1 + 0x678;
            local_78 = 0;
            local_80 = 0;
            local_88 = 1;
            local_90 = 5;
            local_98 = 0;
            iVar2 = (**(code * *)(*DAT_140c65670 + 0x58))(DAT_140c65670, local_68[0], local_68[1], 1);
            if (-1 < iVar2) {
                local_70 = param_1 + 0x680;
                local_78 = 0;
                local_80 = 0;
                local_88 = 1;
                local_90 = 5;
                local_98 = 0;
                iVar2 = (**(code * *)(*DAT_140c65670 + 0x58))(DAT_140c65670, local_68[0], local_68[1], 1);
                if (-1 < iVar2) {
                    local_70 = param_1 + 0x688;
                    local_78 = 0;
                    local_80 = 0;
                    local_88 = 0;
                    local_90 = 5;
                    local_98 = 0;
                    iVar2 = (**(code * *)(*DAT_140c65670 + 0x58))(DAT_140c65670, local_68[0], local_68[1], 1);
                    if (-1 < iVar2) {
                        local_70 = param_1 + 0x690;
                        local_78 = 0;
                        local_80 = 0;
                        local_88 = 0;
                        local_90 = 5;
                        local_98 = 0;
                        iVar2 = (**(code * *)(*DAT_140c65670 + 0x58))(DAT_140c65670, local_68[0], local_68[1], 1);
                        if (-1 < iVar2) {
                            local_70 = param_1 + 0x698;
                            local_78 = 0;
                            local_80 = 0;
                            local_88 = 0;
                            local_90 = 5;
                            local_98 = 0;
                            iVar2 = (**(code * *)(*DAT_140c65670 + 0x58))(DAT_140c65670, local_68[0], local_68[1], 1);
                            if (-1 < iVar2) {
                                local_70 = param_1 + 0x6a0;
                                local_78 = 0;
                                local_80 = 0;
                                local_88 = 0;
                                local_90 = 5;
                                local_98 = 0x11;
                                iVar2 = (**(code * *)(*DAT_140c65670 + 0x58))
                                        (DAT_140c65670, local_68[0], local_68[1], 1);
                                if (-1 < iVar2) {
                                    local_70 = param_1 + 0x6a8;
                                    local_78 = 0;
                                    local_80 = 0;
                                    local_88 = 0;
                                    local_90 = 5;
                                    local_98 = 0x11;
                                    iVar2 = (**(code * *)(*DAT_140c65670 + 0x58))
                                            (DAT_140c65670, local_68[0], local_68[1], 1);
                                    if (-1 < iVar2) {
                                        local_70 = param_1 + 0x6b0;
                                        local_78 = 0;
                                        local_80 = 0;
                                        local_88 = 0;
                                        local_90 = 5;
                                        local_98 = 0x11;
                                        iVar2 = (**(code * *)(*DAT_140c65670 + 0x58))
                                                (DAT_140c65670, local_68[0], local_68[1], 1);
                                        if (-1 < iVar2) {
                                            local_70 = param_1 + 0x6b8;
                                            local_78 = 0;
                                            local_80 = 0;
                                            local_88 = 0;
                                            local_90 = 5;
                                            local_98 = 0x17;
                                            iVar2 = (**(code * *)(*DAT_140c65670 + 0x58))
                                                    (DAT_140c65670, local_68[0], local_68[1], 1);
                                            if (-1 < iVar2) {
                                                local_70 = param_1 + 0x6c0;
                                                local_78 = 0;
                                                local_80 = 0;
                                                local_88 = 0;
                                                local_90 = 5;
                                                local_98 = 0x10;
                                                iVar2 = (**(code * *)(*DAT_140c65670 + 0x58))
                                                        (DAT_140c65670, local_68[0], local_68[1], 1);
                                                if (-1 < iVar2) {
                                                    local_70 = param_1 + 0x790;
                                                    local_78 = 0;
                                                    local_80 = 0;
                                                    local_88 = 1;
                                                    local_90 = 5;
                                                    local_98 = 0;
                                                    iVar2 = (**(code * *)(*DAT_140c65670 + 0x58))
                                                            (DAT_140c65670, local_68[0], local_68[1], 1);
                                                    if (-1 < iVar2) {
                                                        local_70 = param_1 + 0x798;
                                                        local_78 = 0;
                                                        local_80 = 0;
                                                        local_88 = 1;
                                                        local_90 = 5;
                                                        local_98 = 0;
                                                        iVar2 = (**(code * *)(*DAT_140c65670 + 0x58))
                                                                (DAT_140c65670, local_68[0], local_68[1], 1);
                                                        if (-1 < iVar2) {
                                                            local_70 = param_1 + 0x7a0;
                                                            local_78 = 0;
                                                            local_80 = 0;
                                                            local_88 = 1;
                                                            local_90 = 5;
                                                            local_98 = 0;
                                                            iVar2 = (**(code * *)(*DAT_140c65670 + 0x58))
                                                                    (DAT_140c65670, local_68[2], local_68[3], 1);
                                                            if (-1 < iVar2) {
                                                                local_70 = param_1 + 0x7a8;
                                                                local_78 = 0;
                                                                local_80 = 0;
                                                                local_88 = 1;
                                                                local_90 = 5;
                                                                local_98 = 0;
                                                                iVar2 = (**(code * *)(*DAT_140c65670 + 0x58))
                                                                        (DAT_140c65670, local_68[2], local_68[3], 1);
                                                                if (-1 < iVar2) {
                                                                    local_70 = param_1 + 0x7b0;
                                                                    local_78 = 0;
                                                                    local_80 = 0;
                                                                    local_88 = 1;
                                                                    local_90 = 5;
                                                                    local_98 = 0;
                                                                    iVar2 = (**(code * *)(*DAT_140c65670 + 0x58))
                                                                            (DAT_140c65670, local_68[4], local_54, 1);
                                                                    if (-1 < iVar2) {
                                                                        local_70 = param_1 + 0x7b8;
                                                                        local_78 = 0;
                                                                        local_80 = 0;
                                                                        local_88 = 1;
                                                                        local_90 = 5;
                                                                        local_98 = 0;
                                                                        iVar2 = (**(code * *)(*DAT_140c65670 + 0x58))
                                                                                (DAT_140c65670, local_68[4], local_54,
                                                                                 1);
                                                                        if (-1 < iVar2) {
                                                                            local_70 = param_1 + 0x7c0;
                                                                            local_78 = 0;
                                                                            local_80 = 0;
                                                                            local_88 = 1;
                                                                            local_90 = 5;
                                                                            local_98 = 0;
                                                                            iVar2 = (**(code * *)(
                                                                                    *DAT_140c65670 + 0x58))
                                                                                    (DAT_140c65670, local_50, local_4c,
                                                                                     1);
                                                                            if (-1 < iVar2) {
                                                                                local_70 = param_1 + 0x7c8;
                                                                                local_78 = 0;
                                                                                local_80 = 0;
                                                                                local_88 = 1;
                                                                                local_90 = 5;
                                                                                local_98 = 0;
                                                                                iVar2 = (**(code * *)(
                                                                                        *DAT_140c65670 + 0x58))
                                                                                        (DAT_140c65670, local_50,
                                                                                         local_4c, 1);
                                                                                if (-1 < iVar2) {
                                                                                    local_70 = param_1 + 2000;
                                                                                    local_78 = 0;
                                                                                    local_80 = 0;
                                                                                    local_88 = 1;
                                                                                    local_90 = 5;
                                                                                    local_98 = 0;
                                                                                    iVar2 = (**(code * *)(
                                                                                            *DAT_140c65670 + 0x58))
                                                                                            (DAT_140c65670, local_48,
                                                                                             local_44, 1);
                                                                                    if (-1 < iVar2) {
                                                                                        local_70 = param_1 + 0x7d8;
                                                                                        local_78 = 0;
                                                                                        local_80 = 0;
                                                                                        local_88 = 1;
                                                                                        local_90 = 5;
                                                                                        local_98 = 0;
                                                                                        iVar2 = (**(code * *)(
                                                                                                *DAT_140c65670 + 0x58))
                                                                                                (DAT_140c65670,
                                                                                                 local_48, local_44, 1);
                                                                                        if (-1 < iVar2) {
                                                                                            local_70 = param_1 + 0x7e0;
                                                                                            local_78 = 0;
                                                                                            local_80 = 0;
                                                                                            local_88 = 1;
                                                                                            local_90 = 5;
                                                                                            local_98 = 0;
                                                                                            iVar2 = (**(code * *)(
                                                                                                    *DAT_140c65670 +
                                                                                                    0x58))
                                                                                                    (DAT_140c65670,
                                                                                                     local_40, local_3c,
                                                                                                     1);
                                                                                            if (-1 < iVar2) {
                                                                                                local_70 =
                                                                                                        param_1 + 0x7e8;
                                                                                                local_78 = 0;
                                                                                                local_80 = 0;
                                                                                                local_88 = 1;
                                                                                                local_90 = 5;
                                                                                                local_98 = 0;
                                                                                                iVar2 = (**(code * *)(
                                                                                                        *DAT_140c65670 +
                                                                                                        0x58))
                                                                                                        (DAT_140c65670,
                                                                                                         local_40,
                                                                                                         local_3c, 1
                                                                                                        );
                                                                                                if (-1 < iVar2) {
                                                                                                    local_70 = param_1 +
                                                                                                               0x7f0;
                                                                                                    local_78 = 0;
                                                                                                    local_80 = 0;
                                                                                                    local_88 = 1;
                                                                                                    local_90 = 5;
                                                                                                    local_98 = 0;
                                                                                                    iVar2 = (**(code *
                                                                                                                *)(
                                                                                                            *DAT_140c65670 +
                                                                                                            0x58))
                                                                                                            (DAT_140c65670,
                                                                                                             local_38,
                                                                                                             local_34,
                                                                                                             1);
                                                                                                    if (-1 < iVar2) {
                                                                                                        local_70 =
                                                                                                                param_1 +
                                                                                                                0x7f8;
                                                                                                        local_78 = 0;
                                                                                                        local_80 = 0;
                                                                                                        local_88 = 1;
                                                                                                        local_90 = 5;
                                                                                                        local_98 = 0;
                                                                                                        iVar2 = (**(
                                                                                                                code *
                                                                                                                *)(
                                                                                                                *DAT_140c65670 +
                                                                                                                0x58))
                                                                                                                (DAT_140c65670,
                                                                                                                 local_38,
                                                                                                                 local_34,
                                                                                                                 1);
                                                                                                        if (-1 <
                                                                                                            iVar2) {
                                                                                                            local_70 =
                                                                                                                    param_1 +
                                                                                                                    0x800;
                                                                                                            local_78 = 0;
                                                                                                            local_80 = 0;
                                                                                                            local_88 = 1;
                                                                                                            local_90 = 5;
                                                                                                            local_98 = 0;
                                                                                                            iVar2 = (**(
                                                                                                                    code *
                                                                                                                    *)(
                                                                                                                    *DAT_140c65670 +
                                                                                                                    0x58))
                                                                                                                    (DAT_140c65670,
                                                                                                                     local_68[4],
                                                                                                                     local_54,
                                                                                                                     1);
                                                                                                            if (-1 <
                                                                                                                iVar2) {
                                                                                                                *(int *) (
                                                                                                                        param_1 +
                                                                                                                        0x6c8) = local_68[0];
                                                                                                                *(int *) (
                                                                                                                        param_1 +
                                                                                                                        0x6cc) = local_68[1];
                                                                                                                FUN_140255150(
                                                                                                                        param_1);
                                                                                                                goto LAB_140255114;
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
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        FUN_140255750(param_1);
    }
    LAB_140255114:
    FUN_1407db4f0(local_30 ^ (ulonglong)
    auStack184);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140255150(longlong param_1) {
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined local_98[20];
    undefined4 local_84;
    undefined4 local_78[2];
    undefined8 local_70;
    undefined4 local_64;
    undefined4 local_60[2];
    undefined8 local_58;
    undefined4 local_4c;
    undefined4 local_48[2];
    undefined8 local_40;
    undefined4 local_34;

    local_98._0_16_ = CONCAT88(*(undefined8 * )(param_1 + 0x688), local_98._0_8_);
    local_70 = *(undefined8 * )(param_1 + 0x680);
    local_58 = *(undefined8 * )(param_1 + 0x678);
    local_40 = *(undefined8 * )(param_1 + 0x670);
    local_98._0_16_ = CONCAT124(local_98._4_12_, 1);
    local_84 = 0;
    local_78[0] = 1;
    local_64 = 0;
    local_60[0] = 1;
    local_4c = 0;
    local_48[0] = 1;
    local_34 = 0;
    (**(code * *)(*DAT_140c65670 + 0x208))(DAT_140c65670, local_48, local_60, local_78, local_98);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    local_98._0_16_ = ZEXT816(0);
    (**(code * *)(*DAT_140c65670 + 0x270))(DAT_140c65670, 1, local_98);
    (**(code * *)(*DAT_140c65670 + 0x2a0))();
    local_40 = *(undefined8 * )(param_1 + 0x698);
    local_58 = *(undefined8 * )(param_1 + 0x690);
    local_48[0] = 1;
    local_34 = 0;
    local_60[0] = 1;
    local_4c = 0;
    (**(code * *)(*DAT_140c65670 + 0x208))
            (DAT_140c65670, local_60, local_48, &DAT_140c3fe88, &DAT_140c3fe88);
    local_98._0_16_ = CONCAT412(uVar4, CONCAT48(uVar3, CONCAT44(uVar2, uVar1)));
    (**(code * *)(*DAT_140c65670 + 0x270))(DAT_140c65670, 1, local_98);
    (**(code * *)(*DAT_140c65670 + 0x2a0))();
    local_40 = *(undefined8 * )(param_1 + 0x6b0);
    local_58 = *(undefined8 * )(param_1 + 0x6a8);
    local_48[0] = 1;
    local_70 = *(undefined8 * )(param_1 + 0x6a0);
    local_34 = 0;
    local_60[0] = 1;
    local_4c = 0;
    local_78[0] = 1;
    local_64 = 0;
    (**(code * *)(*DAT_140c65670 + 0x208))(DAT_140c65670, local_78, local_60, local_48, &DAT_140c3fe88);
    local_98._0_16_ = CONCAT412(uVar4, CONCAT48(uVar3, CONCAT44(uVar2, uVar1)));
    (**(code * *)(*DAT_140c65670 + 0x270))(DAT_140c65670, 1, local_98);
    (**(code * *)(*DAT_140c65670 + 0x2a0))();
    local_40 = *(undefined8 * )(param_1 + 0x6c0);
    local_48[0] = 1;
    local_34 = 0;
    (**(code * *)(*DAT_140c65670 + 0x208))
            (DAT_140c65670, local_48, &DAT_140c3fe88, &DAT_140c3fe88, &DAT_140c3fe88);
    local_98._0_16_ = CONCAT412(uVar4, CONCAT48(uVar3, CONCAT44(uVar2, uVar1)));
    (**(code * *)(*DAT_140c65670 + 0x270))(DAT_140c65670, 1, local_98);
    (**(code * *)(*DAT_140c65670 + 0x2a0))();
    local_40 = *(undefined8 * )(param_1 + 0x798);
    local_58 = *(undefined8 * )(param_1 + 0x790);
    local_48[0] = 1;
    local_34 = 0;
    local_60[0] = 1;
    local_4c = 0;
    (**(code * *)(*DAT_140c65670 + 0x208))
            (DAT_140c65670, local_60, local_48, &DAT_140c3fe88, &DAT_140c3fe88);
    local_98._0_16_ = CONCAT412(uVar4, CONCAT48(uVar3, CONCAT44(uVar2, uVar1)));
    (**(code * *)(*DAT_140c65670 + 0x270))(DAT_140c65670, 1, local_98);
    (**(code * *)(*DAT_140c65670 + 0x2a0))();
    local_40 = *(undefined8 * )(param_1 + 0x7a8);
    local_58 = *(undefined8 * )(param_1 + 0x7a0);
    local_48[0] = 1;
    local_34 = 0;
    local_60[0] = 1;
    local_4c = 0;
    (**(code * *)(*DAT_140c65670 + 0x208))
            (DAT_140c65670, local_60, local_48, &DAT_140c3fe88, &DAT_140c3fe88);
    local_98._0_16_ = CONCAT412(uVar4, CONCAT48(uVar3, CONCAT44(uVar2, uVar1)));
    (**(code * *)(*DAT_140c65670 + 0x270))(DAT_140c65670, 1, local_98);
    (**(code * *)(*DAT_140c65670 + 0x2a0))();
    local_40 = *(undefined8 * )(param_1 + 0x800);
    local_58 = *(undefined8 * )(param_1 + 0x7b8);
    local_48[0] = 1;
    local_70 = *(undefined8 * )(param_1 + 0x7b0);
    local_34 = 0;
    local_60[0] = 1;
    local_4c = 0;
    local_78[0] = 1;
    local_64 = 0;
    (**(code * *)(*DAT_140c65670 + 0x208))(DAT_140c65670, local_78, local_60, local_48, &DAT_140c3fe88);
    local_98._0_16_ = CONCAT412(uVar4, CONCAT48(uVar3, CONCAT44(uVar2, uVar1)));
    (**(code * *)(*DAT_140c65670 + 0x270))(DAT_140c65670, 1, local_98);
    (**(code * *)(*DAT_140c65670 + 0x2a0))();
    local_40 = *(undefined8 * )(param_1 + 0x7c8);
    local_58 = *(undefined8 * )(param_1 + 0x7c0);
    local_48[0] = 1;
    local_34 = 0;
    local_60[0] = 1;
    local_4c = 0;
    (**(code * *)(*DAT_140c65670 + 0x208))
            (DAT_140c65670, local_60, local_48, &DAT_140c3fe88, &DAT_140c3fe88);
    local_98._0_16_ = CONCAT412(uVar4, CONCAT48(uVar3, CONCAT44(uVar2, uVar1)));
    (**(code * *)(*DAT_140c65670 + 0x270))(DAT_140c65670, 1, local_98);
    (**(code * *)(*DAT_140c65670 + 0x2a0))();
    local_40 = *(undefined8 * )(param_1 + 0x7d8);
    local_58 = *(undefined8 * )(param_1 + 2000);
    local_48[0] = 1;
    local_34 = 0;
    local_60[0] = 1;
    local_4c = 0;
    (**(code * *)(*DAT_140c65670 + 0x208))
            (DAT_140c65670, local_60, local_48, &DAT_140c3fe88, &DAT_140c3fe88);
    local_98._0_16_ = CONCAT412(uVar4, CONCAT48(uVar3, CONCAT44(uVar2, uVar1)));
    (**(code * *)(*DAT_140c65670 + 0x270))(DAT_140c65670, 1, local_98);
    (**(code * *)(*DAT_140c65670 + 0x2a0))();
    local_40 = *(undefined8 * )(param_1 + 0x7e8);
    local_58 = *(undefined8 * )(param_1 + 0x7e0);
    local_48[0] = 1;
    local_34 = 0;
    local_60[0] = 1;
    local_4c = 0;
    (**(code * *)(*DAT_140c65670 + 0x208))
            (DAT_140c65670, local_60, local_48, &DAT_140c3fe88, &DAT_140c3fe88);
    local_98._0_16_ = CONCAT412(uVar4, CONCAT48(uVar3, CONCAT44(uVar2, uVar1)));
    (**(code * *)(*DAT_140c65670 + 0x270))(DAT_140c65670, 1, local_98);
    (**(code * *)(*DAT_140c65670 + 0x2a0))();
    local_40 = *(undefined8 * )(param_1 + 0x7f8);
    local_58 = *(undefined8 * )(param_1 + 0x7f0);
    local_48[0] = 1;
    local_34 = 0;
    local_60[0] = 1;
    local_4c = 0;
    (**(code * *)(*DAT_140c65670 + 0x208))
            (DAT_140c65670, local_60, local_48, &DAT_140c3fe88, &DAT_140c3fe88);
    local_98._0_16_ = CONCAT412(uVar4, CONCAT48(uVar3, CONCAT44(uVar2, uVar1)));
    (**(code * *)(*DAT_140c65670 + 0x270))(DAT_140c65670, 1, local_98);
    // WARNING: Could not recover jumptable at 0x00014025573f. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(*DAT_140c65670 + 0x2a0))();
    return;
}


void FUN_140255750(longlong param_1) {
    if (*(longlong * *)(param_1 + 0x670) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x670) + 8))();
        *(undefined8 * )(param_1 + 0x670) = 0;
    }
    if (*(longlong * *)(param_1 + 0x678) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x678) + 8))();
        *(undefined8 * )(param_1 + 0x678) = 0;
    }
    if (*(longlong * *)(param_1 + 0x680) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x680) + 8))();
        *(undefined8 * )(param_1 + 0x680) = 0;
    }
    if (*(longlong * *)(param_1 + 0x688) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x688) + 8))();
        *(undefined8 * )(param_1 + 0x688) = 0;
    }
    if (*(longlong * *)(param_1 + 0x690) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x690) + 8))();
        *(undefined8 * )(param_1 + 0x690) = 0;
    }
    if (*(longlong * *)(param_1 + 0x698) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x698) + 8))();
        *(undefined8 * )(param_1 + 0x698) = 0;
    }
    if (*(longlong * *)(param_1 + 0x6a0) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x6a0) + 8))();
        *(undefined8 * )(param_1 + 0x6a0) = 0;
    }
    if (*(longlong * *)(param_1 + 0x6a8) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x6a8) + 8))();
        *(undefined8 * )(param_1 + 0x6a8) = 0;
    }
    if (*(longlong * *)(param_1 + 0x6b0) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x6b0) + 8))();
        *(undefined8 * )(param_1 + 0x6b0) = 0;
    }
    if (*(longlong * *)(param_1 + 0x6b8) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x6b8) + 8))();
        *(undefined8 * )(param_1 + 0x6b8) = 0;
    }
    if (*(longlong * *)(param_1 + 0x6c0) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x6c0) + 8))();
        *(undefined8 * )(param_1 + 0x6c0) = 0;
    }
    if (*(longlong * *)(param_1 + 0x790) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x790) + 8))();
        *(undefined8 * )(param_1 + 0x790) = 0;
    }
    if (*(longlong * *)(param_1 + 0x798) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x798) + 8))();
        *(undefined8 * )(param_1 + 0x798) = 0;
    }
    if (*(longlong * *)(param_1 + 0x7a0) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x7a0) + 8))();
        *(undefined8 * )(param_1 + 0x7a0) = 0;
    }
    if (*(longlong * *)(param_1 + 0x7a8) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x7a8) + 8))();
        *(undefined8 * )(param_1 + 0x7a8) = 0;
    }
    if (*(longlong * *)(param_1 + 0x7b0) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x7b0) + 8))();
        *(undefined8 * )(param_1 + 0x7b0) = 0;
    }
    if (*(longlong * *)(param_1 + 0x7b8) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x7b8) + 8))();
        *(undefined8 * )(param_1 + 0x7b8) = 0;
    }
    if (*(longlong * *)(param_1 + 0x7c0) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x7c0) + 8))();
        *(undefined8 * )(param_1 + 0x7c0) = 0;
    }
    if (*(longlong * *)(param_1 + 0x7c8) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x7c8) + 8))();
        *(undefined8 * )(param_1 + 0x7c8) = 0;
    }
    if (*(longlong * *)(param_1 + 2000) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 2000) + 8))();
        *(undefined8 * )(param_1 + 2000) = 0;
    }
    if (*(longlong * *)(param_1 + 0x7d8) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x7d8) + 8))();
        *(undefined8 * )(param_1 + 0x7d8) = 0;
    }
    if (*(longlong * *)(param_1 + 0x7e0) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x7e0) + 8))();
        *(undefined8 * )(param_1 + 0x7e0) = 0;
    }
    if (*(longlong * *)(param_1 + 0x7e8) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x7e8) + 8))();
        *(undefined8 * )(param_1 + 0x7e8) = 0;
    }
    if (*(longlong * *)(param_1 + 0x7f0) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x7f0) + 8))();
        *(undefined8 * )(param_1 + 0x7f0) = 0;
    }
    if (*(longlong * *)(param_1 + 0x7f8) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x7f8) + 8))();
        *(undefined8 * )(param_1 + 0x7f8) = 0;
    }
    if (*(longlong * *)(param_1 + 0x800) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x800) + 8))();
        *(undefined8 * )(param_1 + 0x800) = 0;
    }
    *(undefined4 * )(param_1 + 0x6c8) = DAT_140c77760;
    *(undefined4 * )(param_1 + 0x6cc) = DAT_140c77764;
    return;
}


void FUN_140255a10(undefined8 param_1, undefined8 param_2, longlong param_3, int param_4) {
    undefined8 uVar1;
    uint uVar3;
    longlong lVar2;
    undefined8 in_stack_ffffffffffffffc0;
    undefined4 uVar4;
    undefined4 local_28[2];
    undefined8 local_20;
    undefined4 local_14;

    uVar4 = (undefined4)((ulonglong)
    in_stack_ffffffffffffffc0 >> 0x20);
    local_20 = *(undefined8 * )(param_3 + 0x670);
    local_28[0] = 1;
    local_14 = 0;
    uVar3 = 1;
    (**(code * *)(*DAT_140c65670 + 0x208))
            (DAT_140c65670, local_28, &DAT_140c3fe88, &DAT_140c3fe88, &DAT_140c3fe88);
    (**(code * *)(*DAT_140c65670 + 0x250))(DAT_140c65670, param_3 + 0x918);
    (**(code * *)(*DAT_140c65670 + 0x120))();
    (**(code * *)(*DAT_140c65670 + 0x1c0))(DAT_140c65670, 0xf);
    (**(code * *)(*DAT_140c65670 + 0x198))(DAT_140c65670, 0);
    (**(code * *)(*DAT_140c65670 + 400))(DAT_140c65670, 7);
    (**(code * *)(*DAT_140c65670 + 0x1a0))(DAT_140c65670, 1, 0);
    if (param_4 == 0) {
        uVar1 = CONCAT44(uVar3, 1);
        (**(code * *)(*DAT_140c65670 + 0x1c8))(DAT_140c65670, 4, 5, 0, uVar1, CONCAT44(uVar4, 5), 0);
        uVar4 = (undefined4)((ulonglong)
        uVar1 >> 0x20);
        (**(code * *)(*DAT_140c65670 + 0x1a8))(DAT_140c65670, 2, 6, 2);
        (**(code * *)(*DAT_140c65670 + 0x1b0))(DAT_140c65670, 0, 0, 1, CONCAT44(uVar4, 2));
        (**(code * *)(*DAT_140c65670 + 0x178))(DAT_140c65670, *(undefined8 * )(param_3 + 0x868), 1);
        (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 0, *(undefined8 * )(param_3 + 0x678), 0, 0);
        uVar1 = *(undefined8 * )(param_3 + 0x698);
        LAB_140255ec2:
        (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 1, uVar1, 0, 0);
        uVar1 = 0;
    } else {
        if (param_4 != 1) {
            if (param_4 == 2) {
                lVar2 = (ulonglong)
                uVar3 << 0x20;
                (**(code * *)(*DAT_140c65670 + 0x1c8))(DAT_140c65670, 1, 0, 0, lVar2, CONCAT44(uVar4, 1), 0);
                uVar4 = (undefined4)((ulonglong)
                lVar2 >> 0x20);
                (**(code * *)(*DAT_140c65670 + 0x1a8))(DAT_140c65670, 4, 4, 0);
                (**(code * *)(*DAT_140c65670 + 0x1b0))(DAT_140c65670, 0, 0, 0, CONCAT44(uVar4, 2));
                (**(code * *)(*DAT_140c65670 + 0x178))(DAT_140c65670, *(undefined8 * )(param_3 + 0x868), 0);
                (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 0, *(undefined8 * )(param_3 + 0x680), 0, 0);
                uVar1 = *(undefined8 * )(param_3 + 0x6a8);
            } else {
                if (param_4 == 3) {
                    uVar1 = CONCAT44(uVar3, 1);
                    (**(code * *)(*DAT_140c65670 + 0x1c8))(DAT_140c65670, 4, 5, 0, uVar1, CONCAT44(uVar4, 5), 0);
                    uVar4 = (undefined4)((ulonglong)
                    uVar1 >> 0x20);
                    (**(code * *)(*DAT_140c65670 + 0x1a8))(DAT_140c65670, 2, 2, 0);
                    (**(code * *)(*DAT_140c65670 + 0x1b0))(DAT_140c65670, 0, 0, 0, CONCAT44(uVar4, 2));
                    (**(code * *)(*DAT_140c65670 + 0x178))(DAT_140c65670, *(undefined8 * )(param_3 + 0x868), 5);
                    (**(code * *)(*DAT_140c65670 + 0x160))
                            (DAT_140c65670, 0, *(undefined8 * )(param_3 + 0x678), 0, 0);
                    (**(code * *)(*DAT_140c65670 + 0x160))
                            (DAT_140c65670, 1, *(undefined8 * )(param_3 + 0x698), 0, 0);
                    uVar1 = *(undefined8 * )(param_3 + 0x6c0);
                    goto LAB_140255ee1;
                }
                if (param_4 != 4) goto LAB_140255efd;
                uVar1 = CONCAT44(uVar3, 1);
                (**(code * *)(*DAT_140c65670 + 0x1c8))(DAT_140c65670, 4, 5, 0, uVar1, CONCAT44(uVar4, 5), 0);
                uVar4 = (undefined4)((ulonglong)
                uVar1 >> 0x20);
                (**(code * *)(*DAT_140c65670 + 0x1a8))(DAT_140c65670, 0x80, 0x80, 0x80);
                (**(code * *)(*DAT_140c65670 + 0x1b0))(DAT_140c65670, 0, 0, 1, CONCAT44(uVar4, 2));
                (**(code * *)(*DAT_140c65670 + 0x178))(DAT_140c65670, *(undefined8 * )(param_3 + 0x868), 1);
                (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 0, *(undefined8 * )(param_3 + 0x678), 0, 0);
                uVar1 = *(undefined8 * )(param_3 + 0x678);
            }
            goto LAB_140255ec2;
        }
        uVar1 = CONCAT44(uVar3, 1);
        (**(code * *)(*DAT_140c65670 + 0x1c8))(DAT_140c65670, 4, 5, 0, uVar1, CONCAT44(uVar4, 5), 0);
        uVar4 = (undefined4)((ulonglong)
        uVar1 >> 0x20);
        (**(code * *)(*DAT_140c65670 + 0x1a8))(DAT_140c65670, 6, 6, 2);
        (**(code * *)(*DAT_140c65670 + 0x1b0))(DAT_140c65670, 0, 0, 1, CONCAT44(uVar4, 2));
        (**(code * *)(*DAT_140c65670 + 0x178))(DAT_140c65670, *(undefined8 * )(param_3 + 0x868), 3);
        (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 0, *(undefined8 * )(param_3 + 0x678), 0, 0);
        (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 1, *(undefined8 * )(param_3 + 0x698), 0, 0);
        uVar1 = *(undefined8 * )(param_3 + 0x6c0);
    }
    LAB_140255ee1:
    (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 2, uVar1, 0, 0);
    LAB_140255efd:
    uVar1 = (**(code * *)(*DAT_140c65670 + 0x160))
            (DAT_140c65670, 3, *(undefined8 * )(param_3 + 0x6a8), 0, 0);
    (**(code * *)(*DAT_140c65670 + 0x298))
            (uVar1, param_2, 0, DAT_140c65670, 0xffffffff, *DAT_140c65670, param_3 + 0x6c8, param_3 + 0x6d0, 0);
    // WARNING: Could not recover jumptable at 0x000140255f68. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(*DAT_140c65670 + 0x2a0))();
    return;
}


void FUN_140255f70(longlong param_1, undefined8 param_2, undefined4 param_3) {
    undefined4 uVar1;
    undefined4 uVar2;
    uint6 uVar3;
    int iVar4;
    undefined(*pauVar5)[16];
    undefined8 uVar6;
    ushort uVar11;
    undefined auVar8[16];
    float fVar12;
    undefined4 uVar14;
    ulonglong uVar13;
    float local_58;
    float fStack84;
    undefined8 uStack80;
    undefined4 local_44;
    undefined8 local_38[2];
    float local_28;
    float local_24;
    undefined auVar7[12];
    undefined auVar9[16];
    undefined auVar10[16];

    uStack80 = *(undefined8 * )(param_1 + 0x670);
    local_58 = 1.401298e-45;
    local_44 = 0;
    uVar14 = 1;
    (**(code * *)(*DAT_140c65670 + 0x208))
            (DAT_140c65670, &local_58, &DAT_140c3fe88, &DAT_140c3fe88, &DAT_140c3fe88);
    uStack80 = *(undefined8 * )(param_1 + 0x6b8);
    local_58 = 1.401298e-45;
    local_44 = 0;
    (**(code * *)(*DAT_140c65670 + 0x210))(DAT_140c65670, &local_58, 0);
    (**(code * *)(*DAT_140c65670 + 0x250))(DAT_140c65670, param_1 + 0x918);
    (**(code * *)(*DAT_140c65670 + 0x120))();
    (**(code * *)(*DAT_140c65670 + 0x1c0))(DAT_140c65670, 0xf);
    (**(code * *)(*DAT_140c65670 + 0x198))(DAT_140c65670, 0);
    (**(code * *)(*DAT_140c65670 + 400))(DAT_140c65670, 7);
    (**(code * *)(*DAT_140c65670 + 0x1a8))(DAT_140c65670, param_3, param_3, param_3);
    (**(code * *)(*DAT_140c65670 + 0x1b0))(DAT_140c65670, 0, 0, 0, CONCAT44(uVar14, 2));
    (**(code * *)(*DAT_140c65670 + 0x1a0))(DAT_140c65670, 1, 0);
    fVar12 = 1.0;
    uVar14 = *(undefined4 * )(&DAT_140b605ac + (longlong) * (int *) (param_1 + 0x28) * 0x10);
    uVar6 = CONCAT44(uVar14, uVar14);
    auVar7 = CONCAT48(uVar14, uVar6);
    auVar10 = CONCAT97((unkuint9)
                               SUB157(CONCAT69(SUB156(CONCAT510(SUB155(CONCAT411(SUB154(CONCAT312(SUB153(
                                       CONCAT213(SUB152(CONCAT114((char) ((uint)
    uVar14 >>
           0x18),
    ZEXT1314(SUB1613(
            CONCAT412(uVar14, auVar7), 0))) >> 0x68, 0),
    CONCAT112((char) ((uint)
    uVar14 >> 0x10),auVar7)) >>
    0x60, 0),auVar7) >> 0x58, 0),
    CONCAT110((char) ((uint)
    uVar14 >> 8),
    SUB1210(auVar7, 0))) >> 0x50, 0),
    (unkuint10) SUB129(auVar7, 0)) >> 0x48, 0),
    CONCAT18((char) uVar14, uVar6)) >> 0x40, 0) << 8,
            ((uint7) uVar6 >> 0x18) << 0x30);
    auVar9 = CONCAT115(ZEXT1011(SUB1610(auVar10 >> 0x30, 0)) << 8, ((uint5) uVar6 >> 0x10) << 0x20);
    auVar8 = CONCAT142(SUB1614(CONCAT133(ZEXT1213(SUB1612(auVar9 >> 0x20, 0)) << 8,
                                         ((uint3) uVar14 >> 8) << 0x10) >> 0x10, 0), (short) uVar14) &
             (undefined[16])
    0xffffffffffff00ff;
    uVar11 = SUB162(auVar10 >> 0x30, 0);
    uVar3 = CONCAT42(SUB144(CONCAT212(uVar11, ZEXT1012(SUB1610(auVar8, 0))) >> 0x50, 0),
                     SUB162(auVar9 >> 0x20, 0));
    local_58 = (float) (int) uVar3 * 0.003921569;
    fStack84 = (float) SUB164(CONCAT106((unkuint10) uVar3 << 0x10, (SUB166(auVar8, 0) >> 0x10) << 0x20) >>
                                                                                                        0x20, 0) *
               0.003921569;
    uStack80 = CONCAT44((float) (uint)
    uVar11 * 0.003921569,
            (float) (SUB164(auVar8, 0) & 0xffff) * 0.003921569);
    (**(code * *)(*DAT_140c65670 + 0x270))(DAT_140c65670, 1, &local_58);
    (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 0, *(undefined8 * )(param_1 + 0x688), 0, 0);
    (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 1, *(undefined8 * )(param_1 + 0x690), 0, 0);
    (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 2, *(undefined8 * )(param_1 + 0x698), 0, 0);
    (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 3, *(undefined8 * )(param_1 + 0x6b0), 0, 0);
    (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 4, param_2, 0, *(undefined8 * )(param_1 + 0x808));
    uVar13 = 0;
    (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 5, *(undefined8 * )(param_1 + 0x6f0), 0, 0);
    pauVar5 = (undefined(*)[16])
            (**(code * *)(*DAT_140c65670 + 0x110))
            (DAT_140c65670, 0x40, 0, 0, uVar13 & 0xffffffff00000000);
    if (pauVar5 != (undefined(*)[16])0x0) {
        *pauVar5 = ZEXT816(CONCAT44(fVar12 / (float) *(int *) (param_1 + 0x6cc),
                                    fVar12 / (float) *(int *) (param_1 + 0x6c8)));
        uVar14 = *(undefined4 * )(param_1 + 0x744);
        uVar1 = *(undefined4 * )(param_1 + 0x748);
        uVar2 = *(undefined4 * )(param_1 + 0x74c);
        *(undefined4 *) pauVar5[1] = *(undefined4 * )(param_1 + 0x740);
        *(undefined4 * )(pauVar5[1] + 4) = uVar14;
        *(undefined4 * )(pauVar5[1] + 8) = uVar1;
        *(undefined4 * )(pauVar5[1] + 0xc) = uVar2;
        uVar14 = *(undefined4 * )(param_1 + 0x254);
        uVar1 = *(undefined4 * )(param_1 + 600);
        uVar2 = *(undefined4 * )(param_1 + 0x25c);
        *(undefined4 *) pauVar5[2] = *(undefined4 * )(param_1 + 0x250);
        *(undefined4 * )(pauVar5[2] + 4) = uVar14;
        *(undefined4 * )(pauVar5[2] + 8) = uVar1;
        *(undefined4 * )(pauVar5[2] + 0xc) = uVar2;
        pauVar5[3] = ZEXT816(0);
        (**(code * *)(*DAT_140c65670 + 0x118))();
    }
    (**(code * *)(*DAT_140c65670 + 0x178))
            (DAT_140c65670, *(undefined8 * )(param_1 + 0x8b0),
             *(undefined4 * )(&DAT_140b605a8 + (longlong) * (int *) (param_1 + 0x28) * 0x10));
    (**(code * *)(*DAT_140c65670 + 0x298))(DAT_140c65670, 0xffffffff);
    (**(code * *)(*DAT_140c65670 + 0x2a0))();
    (**(code * *)(*DAT_140c65670 + 0x220))();
    (**(code * *)(*DAT_140c65670 + 0x228))();
    (**(code * *)(*DAT_140c65670 + 0x278))(DAT_140c65670, 3);
    (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 0, *(undefined8 * )(param_1 + 0x670), 0, 0);
    (**(code * *)(*DAT_140c65670 + 0x1a0))(DAT_140c65670, 0, 0);
    (**(code * *)(*DAT_140c65670 + 0x178))(DAT_140c65670, *(undefined8 * )(param_1 + 0x838), 1);
    uVar14 = 0;
    (**(code * *)(*DAT_140c65670 + 0x298))(DAT_140c65670, 0xffffffff);
    iVar4 = DAT_140c40470;
    if (*DAT_140c63750 < DAT_140c40470) {
        iVar4 = *DAT_140c63750;
    }
    if ((&DAT_140c40480)[iVar4] != '\0') {
        (**(code * *)(*DAT_140c65680 + 0x38))();
        local_28 = (float) (ulonglong) * (uint * )(param_1 + 0x908);
        local_24 = (float) (ulonglong) * (uint * )(param_1 + 0x90c);
        local_58 = 1.0;
        fStack84 = 1.0;
        uStack80 = 0x3f8000003f800000;
        local_38[0] = 0;
        (**(code * *)(*DAT_140c65680 + 0x108))
                (DAT_140c65680, *(undefined8 * )(param_1 + 0x828),
                 *(undefined8 * )(&DAT_140b605a0 + (longlong) * (int *) (param_1 + 0x28) * 0x10),
                 0xffffffffffffffff, local_38, CONCAT44(uVar14, 0x121), &local_58, 2);
        (**(code * *)(*DAT_140c65680 + 0x128))();
    }
    (**(code * *)(*DAT_140c65670 + 0x1f8))();
    // WARNING: Could not recover jumptable at 0x000140256491. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(*DAT_140c65670 + 0x200))();
    return;
}


void FUN_1402564a0(longlong param_1, undefined4 *param_2) {
    char cVar1;
    short sVar5;
    short sVar6;
    short sVar7;
    float *pfVar8;
    longlong lVar9;
    undefined(*pauVar10)[16];
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float fVar11;
    int iVar12;
    int iVar13;
    int iVar14;
    int iVar15;
    short sVar16;
    undefined auVar19[16];
    float fVar20;
    float fVar21;
    undefined4 uVar22;
    undefined4 uVar23;
    undefined4 uVar24;
    float fVar25;
    float fVar26;
    float fVar27;
    float fVar28;
    float fVar29;
    float fVar30;
    float fVar31;
    float fVar32;
    float fVar33;
    float fVar34;
    float fVar35;
    float fVar36;
    float fVar37;
    char cVar2;
    char cVar3;
    char cVar4;
    undefined4 uVar17;
    undefined6 uVar18;

    fVar25 = 1.0;
    fVar21 = 0.0;
    uVar22 = 0;
    uVar23 = 0;
    uVar24 = 0;
    pfVar8 = (float *) (param_1 + 0x480);
    lVar9 = 0xc;
    fVar26 = 1.0;
    fVar27 = 1.0;
    fVar28 = 1.0;
    fVar29 = 1.0;
    fVar30 = 255.0;
    fVar31 = 255.0;
    fVar32 = 255.0;
    fVar33 = 255.0;
    fVar34 = 0.5;
    fVar35 = 0.5;
    fVar36 = 0.5;
    fVar37 = 0.5;
    pauVar10 = (undefined(*)[16])(param_1 + 0x330);
    do {
        fVar11 = 0.0;
        if (*(int *) (param_1 + 0x260) == 0) {
            if (pfVar8[-3] < pfVar8[-2]) {
                FUN_140262fb0();
                fVar20 = extraout_XMM0_Da_00;
                if (fVar25 <= extraout_XMM0_Da_00) {
                    fVar20 = fVar25;
                }
                fVar11 = fVar21;
                if (fVar21 <= fVar20) {
                    fVar11 = fVar20;
                }
            }
        } else if (pfVar8[-1] < *pfVar8) {
            FUN_140262fb0();
            fVar20 = extraout_XMM0_Da;
            if (fVar25 <= extraout_XMM0_Da) {
                fVar20 = fVar25;
            }
            fVar11 = fVar21;
            if (fVar21 <= fVar20) {
                fVar11 = fVar20;
            }
        }
        pfVar8 = pfVar8 + 10;
        auVar19 = maxps(CONCAT412(uVar24, CONCAT48(uVar23, CONCAT44(uVar22, fVar21))),
                        CONCAT412(*(float *) (pauVar10[-0xc] + 0xc) *
                                  ((*(float *) (*pauVar10 + 0xc) - fVar29) * fVar11 + fVar29),
                                  CONCAT48(*(float *) (pauVar10[-0xc] + 8) *
                                           ((*(float *) (*pauVar10 + 8) - fVar28) * fVar11 + fVar28),
                                           CONCAT44(*(float *) (pauVar10[-0xc] + 4) *
                                                    ((*(float *) (*pauVar10 + 4) - fVar27) * fVar11 +
                                                     fVar27), *(float *) pauVar10[-0xc] *
                                                              ((*(float *) *pauVar10 - fVar26) * fVar11 +
                                                               fVar26)))));
        auVar19 = minps(auVar19, CONCAT412(fVar29, CONCAT48(fVar28, CONCAT44(fVar27, fVar26))));
        iVar12 = (int) (SUB164(auVar19, 0) * fVar30 + fVar34);
        iVar13 = (int) (SUB164(auVar19 >> 0x20, 0) * fVar31 + fVar35);
        iVar14 = (int) (SUB164(auVar19 >> 0x40, 0) * fVar32 + fVar36);
        iVar15 = (int) (SUB164(auVar19 >> 0x60, 0) * fVar33 + fVar37);
        sVar5 = (short) iVar14;
        cVar1 = (0 < sVar5) * (sVar5 < 0xff) * (char) iVar14 - (0xff < sVar5);
        sVar5 = (short) ((uint)
        iVar14 >> 0x10);
        sVar16 = CONCAT11((0 < sVar5) * (sVar5 < 0xff) * (char) ((uint)
        iVar14 >> 0x10) -(0xff < sVar5),
                cVar1);
        sVar5 = (short) iVar13;
        cVar2 = (0 < sVar5) * (sVar5 < 0xff) * (char) iVar13 - (0xff < sVar5);
        sVar5 = (short) ((uint)
        iVar13 >> 0x10);
        uVar17 = CONCAT13((0 < sVar5) * (sVar5 < 0xff) * (char) ((uint)
        iVar13 >> 0x10) -(0xff < sVar5),
                CONCAT12(cVar2, sVar16));
        sVar5 = (short) iVar12;
        cVar3 = (0 < sVar5) * (sVar5 < 0xff) * (char) iVar12 - (0xff < sVar5);
        sVar5 = (short) ((uint)
        iVar12 >> 0x10);
        uVar18 = CONCAT15((0 < sVar5) * (sVar5 < 0xff) * (char) ((uint)
        iVar12 >> 0x10) -(0xff < sVar5),
                CONCAT14(cVar3, uVar17));
        sVar5 = (short) iVar15;
        cVar4 = (0 < sVar5) * (sVar5 < 0xff) * (char) iVar15 - (0xff < sVar5);
        sVar7 = (short) ((uint)
        iVar15 >> 0x10);
        sVar5 = (short) ((uint)
        uVar17 >> 0x10);
        sVar6 = (short) ((uint6) uVar18 >> 0x20);
        sVar7 = (short) (CONCAT17((0 < sVar7) * (sVar7 < 0xff) * (char) ((uint)
        iVar15 >> 0x10) -
                (0xff < sVar7), CONCAT16(cVar4, uVar18)) >> 0x30);
        *param_2 = CONCAT13((0 < sVar7) * (sVar7 < 0xff) * cVar4 - (0xff < sVar7),
                            CONCAT12((0 < sVar6) * (sVar6 < 0xff) * cVar3 - (0xff < sVar6),
                                     CONCAT11((0 < sVar5) * (sVar5 < 0xff) * cVar2 - (0xff < sVar5),
                                              (0 < sVar16) * (sVar16 < 0xff) * cVar1 - (0xff < sVar16)))
        );
        auVar19 = maxps(CONCAT412(uVar24, CONCAT48(uVar23, CONCAT44(uVar22, fVar21))), *pauVar10);
        auVar19 = minps(auVar19, CONCAT412(fVar29, CONCAT48(fVar28, CONCAT44(fVar27, fVar26))));
        iVar12 = (int) (SUB164(auVar19, 0) * fVar30 + fVar34);
        iVar13 = (int) (SUB164(auVar19 >> 0x20, 0) * fVar31 + fVar35);
        iVar14 = (int) (SUB164(auVar19 >> 0x40, 0) * fVar32 + fVar36);
        iVar15 = (int) (SUB164(auVar19 >> 0x60, 0) * fVar33 + fVar37);
        sVar5 = (short) iVar14;
        cVar1 = (0 < sVar5) * (sVar5 < 0xff) * (char) iVar14 - (0xff < sVar5);
        sVar5 = (short) ((uint)
        iVar14 >> 0x10);
        sVar16 = CONCAT11((0 < sVar5) * (sVar5 < 0xff) * (char) ((uint)
        iVar14 >> 0x10) -(0xff < sVar5),
                cVar1);
        sVar5 = (short) iVar13;
        cVar2 = (0 < sVar5) * (sVar5 < 0xff) * (char) iVar13 - (0xff < sVar5);
        sVar5 = (short) ((uint)
        iVar13 >> 0x10);
        uVar17 = CONCAT13((0 < sVar5) * (sVar5 < 0xff) * (char) ((uint)
        iVar13 >> 0x10) -(0xff < sVar5),
                CONCAT12(cVar2, sVar16));
        sVar5 = (short) iVar12;
        cVar3 = (0 < sVar5) * (sVar5 < 0xff) * (char) iVar12 - (0xff < sVar5);
        sVar5 = (short) ((uint)
        iVar12 >> 0x10);
        uVar18 = CONCAT15((0 < sVar5) * (sVar5 < 0xff) * (char) ((uint)
        iVar12 >> 0x10) -(0xff < sVar5),
                CONCAT14(cVar3, uVar17));
        sVar5 = (short) iVar15;
        cVar4 = (0 < sVar5) * (sVar5 < 0xff) * (char) iVar15 - (0xff < sVar5);
        sVar7 = (short) ((uint)
        iVar15 >> 0x10);
        sVar5 = (short) ((uint)
        uVar17 >> 0x10);
        sVar6 = (short) ((uint6) uVar18 >> 0x20);
        sVar7 = (short) (CONCAT17((0 < sVar7) * (sVar7 < 0xff) * (char) ((uint)
        iVar15 >> 0x10) -
                (0xff < sVar7), CONCAT16(cVar4, uVar18)) >> 0x30);
        param_2[0xc] = CONCAT13((0 < sVar7) * (sVar7 < 0xff) * cVar4 - (0xff < sVar7),
                                CONCAT12((0 < sVar6) * (sVar6 < 0xff) * cVar3 - (0xff < sVar6),
                                         CONCAT11((0 < sVar5) * (sVar5 < 0xff) * cVar2 - (0xff < sVar5),
                                                  (0 < sVar16) * (sVar16 < 0xff) * cVar1 -
                                                  (0xff < sVar16))));
        lVar9 = lVar9 + -1;
        pauVar10 = pauVar10[1];
        param_2 = param_2 + 1;
    } while (lVar9 != 0);
    return;
}


void FUN_140256660(longlong *param_1) {
    (**(code * *)(*DAT_140c65670 + 0x2a0))();
    param_1[0x126] = param_1[0xd1];
    *(undefined4 * )(param_1 + 299) = 0xfff;
    param_1[0x127] = param_1[0xd2];
    param_1[0x128] = param_1[0xd3];
    param_1[0x129] = param_1[0xd6];
    if ((*(byte * )(param_1 + 4) & 1) != 0) {
        *(undefined4 * )(param_1 + 299) = 0x2fff;
    }
    *(undefined4 * )((longlong) param_1 + 0x95c) = 1;
    param_1[0x12a] = param_1[0xd7];
    *(undefined4 * )(param_1 + 300) = 3;
    *(undefined4 * )(param_1 + 0x12f) = 0;
    *(undefined4 * )((longlong) param_1 + 0x964) = 1;
    *(undefined4 * )(param_1 + 0x12d) = 1;
    *(int *) (param_1 + 0x124) = (int) *(float *) (param_1 + 0xdc);
    *(undefined4 * )((longlong) param_1 + 0x96c) = 1;
    param_1[0x12e] = 1;
    *(int *) ((longlong) param_1 + 0x924) = (int) *(float *) ((longlong) param_1 + 0x6e4);
    *(undefined4 * )((longlong) param_1 + 0x97c) = 2;
    *(undefined4 * )(param_1 + 0x130) = 7;
    (**(code * *)(*param_1 + 0x48))(param_1);
    // WARNING: Could not recover jumptable at 0x000140256762. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(*param_1 + 0x50))(param_1);
    return;
}


void FUN_140256790(longlong *param_1) {
    (**(code * *)(*DAT_140c65670 + 0x2a0))();
    param_1[0x126] = param_1[0xce];
    param_1[0x127] = 0;
    param_1[0x12a] = param_1[0xd7];
    param_1[0x128] = 0;
    param_1[0x129] = 0;
    *(undefined8 * )((longlong) param_1 + 0x974) = 0;
    *(undefined4 * )((longlong) param_1 + 0x97c) = 0;
    param_1[299] = 0xf;
    *(undefined4 * )(param_1 + 300) = 7;
    *(undefined8 * )((longlong) param_1 + 0x964) = 1;
    *(undefined8 * )((longlong) param_1 + 0x96c) = 1;
    *(undefined4 * )(param_1 + 0x130) = 2;
    (**(code * *)(*param_1 + 0x48))(param_1);
    // WARNING: Could not recover jumptable at 0x000140256832. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(*param_1 + 0x50))(param_1);
    return;
}


void FUN_140256840(longlong *param_1) {
    param_1[0x126] = param_1[0xce];
    param_1[0x12a] = param_1[0xd7];
    param_1[0x127] = 0;
    param_1[0x128] = 0;
    param_1[0x129] = 0;
    *(undefined8 * )((longlong) param_1 + 0x974) = 0;
    param_1[299] = 0xf;
    *(undefined4 * )(param_1 + 300) = 7;
    *(undefined8 * )((longlong) param_1 + 0x964) = 1;
    *(undefined8 * )((longlong) param_1 + 0x96c) = 1;
    *(undefined4 * )((longlong) param_1 + 0x97c) = 2;
    *(undefined4 * )(param_1 + 0x130) = 2;
    (**(code * *)(*param_1 + 0x48))(param_1);
    // WARNING: Could not recover jumptable at 0x0001402568d6. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(*param_1 + 0x50))(param_1);
    return;
}


void FUN_1402568e0(longlong *param_1) {
    (**(code * *)(*DAT_140c65670 + 0x2a0))();
    param_1[0x126] = param_1[0xd4];
    param_1[0x128] = 0;
    param_1[0x127] = param_1[0xd5];
    param_1[0x129] = 0;
    param_1[0x12a] = param_1[0xd7];
    *(undefined4 * )(param_1 + 0x12f) = 0;
    param_1[299] = 0xff;
    *(undefined4 * )(param_1 + 300) = 3;
    *(undefined4 * )((longlong) param_1 + 0x964) = 1;
    *(undefined4 * )(param_1 + 0x12d) = 4;
    *(undefined4 * )((longlong) param_1 + 0x96c) = 4;
    param_1[0x12e] = 4;
    *(undefined4 * )((longlong) param_1 + 0x97c) = 2;
    *(undefined4 * )(param_1 + 0x130) = 7;
    (**(code * *)(*param_1 + 0x48))(param_1);
    // WARNING: Could not recover jumptable at 0x00014025699f. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(*param_1 + 0x50))(param_1);
    return;
}


void FUN_1402569b0(longlong param_1) {
    (**(code * *)(*DAT_140c65670 + 0x2a0))();
    *(undefined8 * )(param_1 + 0x930) = *(undefined8 * )(param_1 + 0x670);
    *(undefined8 * )(param_1 + 0x938) = 0;
    *(undefined8 * )(param_1 + 0x940) = 0;
    *(undefined8 * )(param_1 + 0x948) = 0;
    *(undefined8 * )(param_1 + 0x958) = 0;
    *(undefined8 * )(param_1 + 0x950) = *(undefined8 * )(param_1 + 0x6b8);
    *(undefined4 * )(param_1 + 0x960) = 3;
    *(undefined4 * )(param_1 + 0x964) = 1;
    *(undefined4 * )(param_1 + 0x968) = 1;
    *(undefined4 * )(param_1 + 0x96c) = 1;
    *(undefined8 * )(param_1 + 0x970) = 1;
    *(undefined8 * )(param_1 + 0x978) = 0;
    *(undefined4 * )(param_1 + 0x980) = 2;
    *(undefined4 * )(param_1 + 0x94) = 0xd;
    return;
}


void FUN_140256a60(longlong *param_1) {
    (**(code * *)(*DAT_140c65670 + 0x2a0))();
    param_1[0x126] = param_1[0xf3];
    param_1[0x127] = 0;
    param_1[0x12a] = param_1[0xd7];
    param_1[0x128] = 0;
    param_1[0x129] = 0;
    param_1[299] = 0;
    param_1[0x12f] = 0;
    *(undefined4 * )(param_1 + 300) = 3;
    *(undefined4 * )((longlong) param_1 + 0x964) = 1;
    *(undefined4 * )(param_1 + 0x12d) = 1;
    *(undefined4 * )((longlong) param_1 + 0x96c) = 1;
    param_1[0x12e] = 1;
    *(undefined4 * )(param_1 + 0x130) = 2;
    (**(code * *)(*param_1 + 0x48))(param_1);
    (**(code * *)(*param_1 + 0x50))(param_1);
    *(undefined4 * )((longlong) param_1 + 0x94) = 0xd;
    return;
}


void FUN_140256b20(longlong *param_1) {
    (**(code * *)(*DAT_140c65670 + 0x2a0))();
    param_1[0x126] = param_1[0xf2];
    param_1[0x127] = 0;
    param_1[0x12a] = param_1[0xd7];
    param_1[0x128] = 0;
    param_1[0x129] = 0;
    param_1[0x12f] = 0;
    param_1[299] = 0xf;
    *(undefined4 * )(param_1 + 300) = 7;
    *(undefined4 * )((longlong) param_1 + 0x964) = 1;
    *(undefined4 * )(param_1 + 0x12d) = 1;
    *(undefined4 * )((longlong) param_1 + 0x96c) = 1;
    param_1[0x12e] = 1;
    *(undefined4 * )(param_1 + 0x130) = 2;
    (**(code * *)(*param_1 + 0x48))(param_1);
    (**(code * *)(*param_1 + 0x50))(param_1);
    *(undefined4 * )((longlong) param_1 + 0x94) = 0xd;
    return;
}


void FUN_140256be0(longlong *param_1) {
    int iVar1;
    longlong local_38;
    longlong local_30;
    undefined8 local_28;
    undefined8 local_20;
    undefined4 local_18;
    undefined4 local_14;

    (**(code * *)(*DAT_140c65670 + 0x2a0))();
    iVar1 = DAT_140c40550;
    if (*DAT_140c63750 < DAT_140c40550) {
        iVar1 = *DAT_140c63750;
    }
    if ((&DAT_140c40560)[iVar1] != '\0') {
        iVar1 = (**(code * *)(*param_1 + 0x38))(param_1, 7);
        if (iVar1 != 0) {
            iVar1 = (**(code * *)(*param_1 + 0x38))(param_1, 6);
            if (iVar1 != 0) goto LAB_140256cfa;
        }
        (**(code * *)(*DAT_140c65670 + 0x1a8))(DAT_140c65670, 0, 0xc0);
        (**(code * *)(*DAT_140c65670 + 0x1b0))(DAT_140c65670, 1, 0, 1, 2);
        local_38 = param_1[0xf2];
        local_28 = 0;
        local_20 = 1;
        local_18 = 0;
        local_14 = 1;
        local_30 = local_38;
        FUN_140257d20(param_1, &local_38, 0x11);
        (**(code * *)(*DAT_140c65670 + 0x2a0))();
    }
    LAB_140256cfa:
    if (*(int *) (param_1 + 5) - 1U < 10) {
        FUN_140255f70(param_1, param_1[0xd7], 1);
    }
    param_1[0x127] = 0;
    param_1[0x128] = 0;
    param_1[0x129] = 0;
    param_1[0x126] = param_1[0xce];
    param_1[0x12a] = param_1[0xd7];
    param_1[299] = 0xf;
    *(undefined4 * )(param_1 + 300) = 3;
    *(undefined4 * )((longlong) param_1 + 0x964) = 1;
    *(undefined4 * )(param_1 + 0x12d) = 1;
    *(undefined4 * )((longlong) param_1 + 0x96c) = 1;
    param_1[0x12e] = 1;
    param_1[0x12f] = 0;
    *(undefined4 * )(param_1 + 0x130) = 2;
    (**(code * *)(*param_1 + 0x48))(param_1);
    (**(code * *)(*param_1 + 0x50))(param_1);
    *(undefined4 * )((longlong) param_1 + 0x94) = 0xd;
    return;
}


void FUN_140256e90(longlong *param_1) {
    (**(code * *)(*DAT_140c65670 + 0x2a0))();
    param_1[0x126] = param_1[0xd1];
    *(undefined4 * )(param_1 + 299) = 0xfff;
    param_1[0x127] = param_1[0xd2];
    *(undefined4 * )((longlong) param_1 + 0x95c) = 1;
    param_1[0x128] = param_1[0xd3];
    *(undefined4 * )(param_1 + 300) = 3;
    param_1[0x12a] = param_1[0xd7];
    *(undefined4 * )((longlong) param_1 + 0x964) = 1;
    *(undefined4 * )(param_1 + 0x12f) = 0;
    *(undefined4 * )(param_1 + 0x12d) = 2;
    *(undefined4 * )((longlong) param_1 + 0x96c) = 2;
    param_1[0x12e] = 2;
    *(undefined4 * )((longlong) param_1 + 0x97c) = 2;
    *(undefined4 * )(param_1 + 0x130) = 7;
    (**(code * *)(*param_1 + 0x48))(param_1);
    // WARNING: Could not recover jumptable at 0x000140256f58. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(*param_1 + 0x50))(param_1);
    return;
}


void FUN_140256f60(undefined8 param_1, undefined8 param_2, longlong param_3) {
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 *puVar3;
    undefined4 extraout_XMM0_Da;
    undefined4 uVar4;
    ulonglong uVar5;
    undefined4 local_28[2];
    undefined8 local_20;
    undefined4 local_14;

    (**(code * *)(*DAT_140c65670 + 0x2a0))();
    local_20 = *(undefined8 * )(param_3 + 0x6c0);
    local_28[0] = 1;
    local_14 = 0;
    (**(code * *)(*DAT_140c65670 + 0x208))
            (DAT_140c65670, local_28, &DAT_140c3fe88, &DAT_140c3fe88, &DAT_140c3fe88);
    (**(code * *)(*DAT_140c65670 + 0x1c0))(DAT_140c65670, 1);
    local_20 = *(undefined8 * )(param_3 + 0x6b8);
    local_28[0] = 1;
    local_14 = 0;
    (**(code * *)(*DAT_140c65670 + 0x210))(DAT_140c65670, local_28, 0);
    (**(code * *)(*DAT_140c65670 + 0x198))(DAT_140c65670, 0);
    (**(code * *)(*DAT_140c65670 + 400))(DAT_140c65670, 7);
    (**(code * *)(*DAT_140c65670 + 0x1a0))(DAT_140c65670, 0, 0);
    (**(code * *)(*DAT_140c65670 + 0x1d0))(DAT_140c65670, 1, 0, 0);
    uVar5 = *(ulonglong * )(param_3 + 0x808);
    (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 0, *(undefined8 * )(param_3 + 0x6b8), 0, uVar5);
    (**(code * *)(*DAT_140c65670 + 0x178))(DAT_140c65670, *(undefined8 * )(param_3 + 0x8f0), 0);
    puVar3 = (undefined4 * )
            (**(code * *)(*DAT_140c65670 + 0x110))(DAT_140c65670, 0x30, 0, 0, uVar5 & 0xffffffff00000000);
    uVar4 = extraout_XMM0_Da;
    if (puVar3 != (undefined4 *) 0x0) {
        uVar4 = *(undefined4 * )(param_3 + 0x224);
        uVar1 = *(undefined4 * )(param_3 + 0x228);
        uVar2 = *(undefined4 * )(param_3 + 0x22c);
        *puVar3 = *(undefined4 * )(param_3 + 0x220);
        puVar3[1] = uVar4;
        puVar3[2] = uVar1;
        puVar3[3] = uVar2;
        uVar4 = *(undefined4 * )(param_3 + 0x234);
        uVar1 = *(undefined4 * )(param_3 + 0x238);
        uVar2 = *(undefined4 * )(param_3 + 0x23c);
        puVar3[4] = *(undefined4 * )(param_3 + 0x230);
        puVar3[5] = uVar4;
        puVar3[6] = uVar1;
        puVar3[7] = uVar2;
        uVar4 = *(undefined4 * )(param_3 + 0x254);
        uVar1 = *(undefined4 * )(param_3 + 600);
        uVar2 = *(undefined4 * )(param_3 + 0x25c);
        puVar3[8] = *(undefined4 * )(param_3 + 0x250);
        puVar3[9] = uVar4;
        puVar3[10] = uVar1;
        puVar3[0xb] = uVar2;
        uVar4 = (**(code * *)(*DAT_140c65670 + 0x118))();
    }
    (**(code * *)(*DAT_140c65670 + 0x298))
            (uVar4, param_2, 0, DAT_140c65670, 0xffffffff, *DAT_140c65670, param_3 + 0x6c8, param_3 + 0x6d0, 0);
    (**(code * *)(*DAT_140c65670 + 0x2a0))();
    *(undefined8 * )(param_3 + 0x938) = 0;
    *(undefined8 * )(param_3 + 0x930) = *(undefined8 * )(param_3 + 0x678);
    *(undefined8 * )(param_3 + 0x940) = 0;
    *(undefined8 * )(param_3 + 0x948) = 0;
    *(undefined8 * )(param_3 + 0x958) = 0;
    *(undefined4 * )(param_3 + 0x960) = 3;
    *(undefined4 * )(param_3 + 0x964) = 1;
    *(undefined4 * )(param_3 + 0x968) = 2;
    *(undefined4 * )(param_3 + 0x96c) = 2;
    *(undefined8 * )(param_3 + 0x950) = *(undefined8 * )(param_3 + 0x6b8);
    *(undefined8 * )(param_3 + 0x970) = 2;
    *(undefined8 * )(param_3 + 0x978) = 0;
    *(undefined4 * )(param_3 + 0x980) = 2;
    *(undefined4 * )(param_3 + 0x94) = 0xd;
    return;
}


void FUN_1402571c0(longlong *param_1) {
    (**(code * *)(*DAT_140c65670 + 0x2a0))();
    if (*(int *) (param_1 + 5) - 0xbU < 8) {
        FUN_140255f70(param_1, param_1[0xd7], 2);
    }
    param_1[0x127] = 0;
    param_1[0x128] = 0;
    param_1[0x129] = 0;
    param_1[0x126] = param_1[0xcf];
    param_1[0x12f] = 0;
    param_1[0x12a] = param_1[0xd7];
    param_1[299] = 7;
    *(undefined4 * )(param_1 + 300) = 3;
    *(undefined4 * )((longlong) param_1 + 0x964) = 1;
    *(undefined4 * )(param_1 + 0x12d) = 2;
    *(undefined4 * )((longlong) param_1 + 0x96c) = 2;
    param_1[0x12e] = 2;
    *(undefined4 * )(param_1 + 0x130) = 2;
    (**(code * *)(*param_1 + 0x48))(param_1);
    (**(code * *)(*param_1 + 0x50))(param_1);
    *(undefined4 * )((longlong) param_1 + 0x94) = 0xd;
    return;
}


void FUN_1402572a0(longlong *param_1) {
    (**(code * *)(*DAT_140c65670 + 0x2a0))();
    param_1[0x126] = param_1[0xcf];
    param_1[0x127] = 0;
    param_1[0x12a] = param_1[0xd7];
    param_1[0x128] = 0;
    param_1[0x129] = 0;
    param_1[0x12f] = 0;
    param_1[299] = 7;
    *(undefined4 * )(param_1 + 300) = 3;
    *(undefined4 * )((longlong) param_1 + 0x964) = 1;
    *(undefined4 * )(param_1 + 0x12d) = 2;
    *(undefined4 * )((longlong) param_1 + 0x96c) = 2;
    param_1[0x12e] = 2;
    *(undefined4 * )(param_1 + 0x130) = 2;
    (**(code * *)(*param_1 + 0x48))(param_1);
    (**(code * *)(*param_1 + 0x50))(param_1);
    *(undefined4 * )((longlong) param_1 + 0x94) = 0xd;
    return;
}


void FUN_140257360(longlong *param_1) {
    int iVar1;

    (**(code * *)(*DAT_140c65670 + 0x2a0))();
    iVar1 = (**(code * *)(*param_1 + 0x38))(param_1, 10);
    if (iVar1 == 0) {
        FUN_140255a10(param_1, 0);
    }
    iVar1 = (**(code * *)(*param_1 + 0x38))(param_1, 10);
    if (iVar1 == 0) {
        iVar1 = (**(code * *)(*param_1 + 0x38))(param_1, 2);
        if (iVar1 == 0) {
            FUN_140255a10(param_1, 1);
        }
    }
    param_1[0x127] = 0;
    param_1[0x128] = 0;
    param_1[0x129] = 0;
    param_1[0x126] = param_1[0xce];
    param_1[0x12f] = 0;
    param_1[0x12a] = param_1[0xd7];
    param_1[299] = 7;
    *(undefined4 * )(param_1 + 300) = 3;
    *(undefined4 * )((longlong) param_1 + 0x964) = 1;
    *(undefined4 * )(param_1 + 0x12d) = 4;
    *(undefined4 * )((longlong) param_1 + 0x96c) = 4;
    param_1[0x12e] = 4;
    *(undefined4 * )(param_1 + 0x130) = 2;
    (**(code * *)(*param_1 + 0x48))(param_1);
    // WARNING: Could not recover jumptable at 0x00014025745a. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(*param_1 + 0x50))(param_1);
    return;
}


void FUN_140257460(longlong *param_1) {
    (**(code * *)(*DAT_140c65670 + 0x2a0))();
    param_1[0x126] = param_1[0xd0];
    *(undefined4 * )(param_1 + 299) = 0x7fff;
    param_1[0x127] = param_1[0xd1];
    *(undefined4 * )((longlong) param_1 + 0x95c) = 1;
    param_1[0x128] = param_1[0xd2];
    *(undefined4 * )(param_1 + 300) = 7;
    param_1[0x129] = param_1[0xd3];
    *(undefined4 * )((longlong) param_1 + 0x964) = 1;
    param_1[0x12a] = param_1[0xd7];
    *(undefined4 * )(param_1 + 0x12d) = 4;
    param_1[0x12f] = 0;
    *(undefined4 * )((longlong) param_1 + 0x96c) = 4;
    param_1[0x12e] = 4;
    *(undefined4 * )(param_1 + 0x130) = 2;
    (**(code * *)(*param_1 + 0x48))(param_1);
    // WARNING: Could not recover jumptable at 0x00014025752d. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(*param_1 + 0x50))(param_1);
    return;
}


void FUN_140257540(longlong param_1) {
    (**(code * *)(*DAT_140c65670 + 0x2a0))();
    *(undefined8 * )(param_1 + 0x930) = *(undefined8 * )(param_1 + 0x680);
    *(undefined8 * )(param_1 + 0x938) = 0;
    *(undefined8 * )(param_1 + 0x940) = 0;
    *(undefined8 * )(param_1 + 0x948) = 0;
    *(undefined8 * )(param_1 + 0x958) = 0;
    *(undefined8 * )(param_1 + 0x950) = *(undefined8 * )(param_1 + 0x6b8);
    *(undefined4 * )(param_1 + 0x960) = 3;
    *(undefined4 * )(param_1 + 0x964) = 1;
    *(undefined4 * )(param_1 + 0x968) = 4;
    *(undefined4 * )(param_1 + 0x96c) = 4;
    *(undefined8 * )(param_1 + 0x970) = 4;
    *(undefined8 * )(param_1 + 0x978) = 0;
    *(undefined4 * )(param_1 + 0x980) = 2;
    *(undefined4 * )(param_1 + 0x94) = 0xd;
    return;
}


void FUN_1402575f0(longlong *param_1) {
    (**(code * *)(*DAT_140c65670 + 0x2a0))();
    if (*(int *) (param_1 + 5) - 0x13U < 8) {
        FUN_140255f70(param_1, param_1[0xd5], 4);
    }
    param_1[0x127] = 0;
    param_1[0x128] = 0;
    param_1[0x129] = 0;
    param_1[0x126] = param_1[0xd0];
    param_1[0x12f] = 0;
    param_1[0x12a] = param_1[0xd7];
    param_1[299] = 7;
    *(undefined4 * )(param_1 + 300) = 7;
    *(undefined4 * )((longlong) param_1 + 0x964) = 1;
    *(undefined4 * )(param_1 + 0x12d) = 4;
    *(undefined4 * )((longlong) param_1 + 0x96c) = 4;
    param_1[0x12e] = 4;
    *(undefined4 * )(param_1 + 0x130) = 2;
    (**(code * *)(*param_1 + 0x48))(param_1);
    (**(code * *)(*param_1 + 0x50))(param_1);
    *(undefined4 * )((longlong) param_1 + 0x94) = 0xd;
    return;
}


void FUN_1402576d0(longlong *param_1) {
    (**(code * *)(*DAT_140c65670 + 0x2a0))();
    param_1[0x126] = param_1[0xd0];
    param_1[0x127] = 0;
    param_1[0x12a] = param_1[0xd7];
    param_1[0x128] = 0;
    param_1[0x129] = 0;
    param_1[0x12f] = 0;
    param_1[299] = 7;
    *(undefined4 * )(param_1 + 300) = 7;
    *(undefined4 * )((longlong) param_1 + 0x964) = 1;
    *(undefined4 * )(param_1 + 0x12d) = 4;
    *(undefined4 * )((longlong) param_1 + 0x96c) = 4;
    param_1[0x12e] = 4;
    *(undefined4 * )(param_1 + 0x130) = 2;
    (**(code * *)(*param_1 + 0x48))(param_1);
    (**(code * *)(*param_1 + 0x50))(param_1);
    *(undefined4 * )((longlong) param_1 + 0x94) = 0xd;
    return;
}


void FUN_140257790(longlong *param_1) {
    int iVar1;

    (**(code * *)(*DAT_140c65670 + 0x2a0))();
    iVar1 = (**(code * *)(*param_1 + 0x38))(param_1, 0xf);
    if (iVar1 == 0) {
        FUN_140255a10(param_1, 2);
    }
    iVar1 = (**(code * *)(*param_1 + 0x38))(param_1, 10);
    if (iVar1 == 0) {
        iVar1 = (**(code * *)(*param_1 + 0x38))(param_1, 2);
        if (iVar1 == 0) {
            FUN_140255a10(param_1, 3);
        }
    }
    param_1[0x127] = 0;
    param_1[0x128] = 0;
    param_1[0x129] = 0;
    param_1[0x126] = param_1[0xce];
    param_1[0x12f] = 0;
    param_1[0x12a] = param_1[0xd7];
    param_1[299] = 7;
    *(undefined4 * )(param_1 + 300) = 3;
    *(undefined4 * )((longlong) param_1 + 0x964) = 1;
    *(undefined4 * )(param_1 + 0x12d) = 4;
    *(undefined4 * )((longlong) param_1 + 0x96c) = 4;
    param_1[0x12e] = 4;
    *(undefined4 * )(param_1 + 0x130) = 7;
    (**(code * *)(*param_1 + 0x48))(param_1);
    // WARNING: Could not recover jumptable at 0x00014025788b. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(*param_1 + 0x50))(param_1);
    return;
}


void FUN_140257890(longlong *param_1) {
    (**(code * *)(*DAT_140c65670 + 0x2a0))();
    param_1[0x126] = param_1[0xcf];
    param_1[0x127] = 0;
    param_1[0x12a] = param_1[0xd7];
    param_1[0x128] = 0;
    param_1[0x129] = 0;
    *(undefined4 * )(param_1 + 0x12f) = 0;
    param_1[299] = 0xf;
    *(undefined4 * )(param_1 + 300) = 3;
    *(undefined4 * )((longlong) param_1 + 0x964) = 1;
    *(undefined4 * )(param_1 + 0x12d) = 0x80;
    *(undefined4 * )((longlong) param_1 + 0x96c) = 0x80;
    param_1[0x12e] = 0x80;
    *(undefined4 * )((longlong) param_1 + 0x97c) = 2;
    *(undefined4 * )(param_1 + 0x130) = 7;
    (**(code * *)(*param_1 + 0x48))(param_1);
    // WARNING: Could not recover jumptable at 0x000140257948. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(*param_1 + 0x50))(param_1);
    return;
}


void FUN_140257950(longlong *param_1) {
    (**(code * *)(*DAT_140c65670 + 0x2a0))();
    param_1[0x126] = param_1[0xce];
    param_1[0x127] = 0;
    param_1[0x12a] = param_1[0xd7];
    param_1[0x128] = 0;
    param_1[0x129] = 0;
    *(undefined8 * )((longlong) param_1 + 0x96c) = 0;
    *(undefined4 * )(param_1 + 0x12d) = 0;
    param_1[0x12f] = 0;
    *(undefined4 * )((longlong) param_1 + 0x974) = 0;
    param_1[299] = 0xf;
    param_1[300] = 7;
    *(undefined4 * )(param_1 + 0x130) = 7;
    (**(code * *)(*param_1 + 0x48))(param_1);
    // WARNING: Could not recover jumptable at 0x0001402579ea. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(*param_1 + 0x50))(param_1);
    return;
}


void FUN_1402579f0(longlong *param_1) {
    int iVar1;

    (**(code * *)(*DAT_140c65670 + 0x2a0))();
    iVar1 = (**(code * *)(*param_1 + 0x38))(param_1, 0x14);
    if (iVar1 == 0) {
        FUN_140255a10(param_1, 4);
    }
    param_1[0x126] = param_1[0xce];
    param_1[0x127] = 0;
    param_1[0x128] = 0;
    param_1[0x129] = 0;
    param_1[299] = 0xf;
    param_1[0x12a] = 0;
    param_1[300] = 7;
    *(undefined8 * )((longlong) param_1 + 0x96c) = 0;
    *(undefined4 * )(param_1 + 0x12d) = 0;
    param_1[0x12f] = 0;
    *(undefined4 * )((longlong) param_1 + 0x974) = 0;
    *(undefined4 * )(param_1 + 0x130) = 7;
    (**(code * *)(*DAT_140c65670 + 0x210))(DAT_140c65670, &DAT_140c3fe88, 1);
    (**(code * *)(*param_1 + 0x50))(param_1);
    // WARNING: Could not recover jumptable at 0x000140257ac1. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(*DAT_140c65670 + 0x128))();
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140257ad0(longlong param_1, longlong **param_2) {
    int iVar1;
    int iVar2;
    longlong lVar3;
    byte bVar4;
    undefined auStack184[32];
    undefined * local_98;
    undefined * local_90;
    undefined local_88[16];
    undefined local_78[16];
    undefined4 local_68;
    undefined4 local_64;
    int local_60;
    int local_5c;
    int local_58;
    int local_54;
    undefined local_48[16];
    undefined local_38[16];
    ulonglong local_28;

    local_38._8_8_ = local_38._0_8_;
    local_28 = DAT_140c0f7b0 ^ (ulonglong)
    auStack184;
    local_88 = CONCAT88(param_2[1], local_88._0_8_);
    local_88 = CONCAT124(local_88._4_12_, 1);
    local_78._0_8_ = (ulonglong)
    local_78._0_4_;
    local_98 = &DAT_140c3fe88;
    (**(code * *)(*DAT_140c65670 + 0x208))(DAT_140c65670, local_88);
    local_78 = CONCAT88(local_78._8_8_, 0x3f80000000000000);
    bVar4 = (byte) * (undefined4 * )((longlong) param_2 + 0x14);
    iVar1 = *(int *) (param_1 + 0x650) >> (bVar4 & 0x1f);
    local_78 = local_78 & (undefined[16])
    0xffffffff00000000;
    if (iVar1 < 1) {
        iVar1 = 1;
    }
    iVar2 = *(int *) (param_1 + 0x654) >> (bVar4 & 0x1f);
    if (iVar2 < 1) {
        iVar2 = 1;
    }
    local_48 = CONCAT412(iVar2, CONCAT48(iVar1, SUB168(local_88, 0)));
    local_88 = local_48 & (undefined[16])
    0xffffffffffffffff;
    local_48 = local_48 & (undefined[16])
    0xffffffffffffffff;
    local_38 = CONCAT88(local_38._8_8_, local_78._0_8_);
    (**(code * *)(*DAT_140c65670 + 0x250))(DAT_140c65670, local_48);
    local_98 = (undefined * )
    0x0;
    (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 0);
    (**(code * *)(*DAT_140c65670 + 0x178))();
    (**(code * *)(*DAT_140c65670 + 0x1d0))();
    bVar4 = (byte) * (undefined4 * )((longlong) param_2 + 0x14);
    local_58 = *(int *) (param_1 + 0x650) >> (bVar4 & 0x1f);
    local_54 = *(int *) (param_1 + 0x654) >> (bVar4 & 0x1f);
    local_48 = ZEXT816(0);
    iVar1 = local_58;
    if (local_58 < (int) DAT_140c77768) {
        iVar1 = (int) DAT_140c77768;
    }
    iVar2 = local_54;
    if (local_54 < DAT_140c77768._4_4_) {
        iVar2 = DAT_140c77768._4_4_;
    }
    local_38 = ZEXT816(CONCAT44((float) iVar2, (float) iVar1));
    local_60 = *(int *) (param_1 + 0x650) >> ((byte) * (undefined4 * )(param_2 + 2) & 0x1f);
    local_5c = *(int *) (param_1 + 0x654) >> ((byte) * (undefined4 * )(param_2 + 2) & 0x1f);
    local_88 = ZEXT816(0);
    iVar1 = local_60;
    if (local_60 < (int) DAT_140c77768) {
        iVar1 = (int) DAT_140c77768;
    }
    iVar2 = local_5c;
    if (local_5c < DAT_140c77768._4_4_) {
        iVar2 = DAT_140c77768._4_4_;
    }
    local_78 = ZEXT816(CONCAT44((float) iVar2, (float) iVar1));
    lVar3 = (**(code * *)(**param_2 + 0x18))();
    local_90 = local_48;
    local_64 = *(undefined4 * )(lVar3 + 8);
    local_68 = *(undefined4 * )(lVar3 + 4);
    local_98 = local_88;
    (**(code * *)(*DAT_140c65670 + 0x298))(DAT_140c65670, 0xffffffff);
    (**(code * *)(*DAT_140c65670 + 0x2a0))();
    FUN_1407db4f0(local_28 ^ (ulonglong)
    auStack184);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140257d20(longlong param_1, longlong **param_2, uint param_3, undefined8 param_4, float param_5,
                   undefined8 param_6) {
    undefined8 uVar1;
    int iVar2;
    undefined(*pauVar3)[16];
    longlong lVar4;
    byte bVar5;
    uint uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    undefined(*pauVar9)[16];
    int iVar10;
    int iVar11;
    float fVar12;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float fVar13;
    undefined auVar14[16];
    float in_XMM3_Da;
    float fVar15;
    undefined4 uVar16;
    undefined4 uVar17;
    undefined4 uVar18;
    undefined4 uVar19;
    float fVar20;
    undefined auStack328[32];
    undefined * local_128;
    undefined * local_120;
    int local_118;
    undefined4 local_114;
    undefined local_108[4];
    undefined auStack260[12];
    undefined local_f8[16];
    undefined8 local_e8;
    uint local_e0;
    int local_dc;
    undefined local_d8[16];
    undefined local_c8[16];
    ulonglong local_b8;

    local_b8 = DAT_140c0f7b0 ^ (ulonglong)
    auStack328;
    if (param_3 < 5) {
        param_3 = 5;
    }
    local_e8 = param_6;
    uVar6 = (param_3 - 1 >> 2) + 1;
    if (10 < uVar6) {
        uVar6 = 10;
    }
    local_e0 = uVar6 - 1;
    uVar8 = (ulonglong)
    local_e0;
    local_118 = 0;
    local_128 = (undefined * )((ulonglong)
    local_128 & 0xffffffff00000000);
    fVar12 = (float) (ulonglong)(local_e0 * 4 + 1) * 0.1666667;
    if (fVar12 <= in_XMM3_Da) {
        in_XMM3_Da = fVar12;
    }
    fVar12 = 0.8333333;
    if (0.8333333 <= in_XMM3_Da) {
        fVar12 = in_XMM3_Da;
    }
    auVar14 = sqrtps(ZEXT1216(ZEXT812(0x40c90fdb)), ZEXT1216(ZEXT812(0x40c90fdb)));
    fVar20 = 2.0 / (SUB164(auVar14, 0) * fVar12);
    pauVar3 = (undefined(*)[16])(**(code * *)(*DAT_140c65670 + 0x110))(DAT_140c65670, 0xb0, 0, 0);
    fVar12 = 1.0;
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    if (pauVar3 != (undefined(*)[16])0x0) {
        lVar4 = (**(code * *)(**param_2 + 0x18))();
        auVar14 = CONCAT412(uVar18, CONCAT48(uVar17, CONCAT44(uVar16, fVar12)));
        _local_108 = CONCAT88(SUB168(auVar14 >> 0x40, 0),
                              SUB168(CONCAT124(SUB1612(auVar14 >> 0x20, 0),
                                               fVar12 / (float) (ulonglong) * (uint * )(lVar4 + 4)), 0) &
                              0xffffffff |
                              (ulonglong)(uint)(fVar12 / (float) (ulonglong) * (uint * )(lVar4 + 8)) << 0x20
        ) & (undefined[16])
        0xffffffffffffffff;
        auStack260._0_4_ = SUB164(_local_108 >> 0x20, 0);
        *pauVar3 = ZEXT416((uint)
        fVar20) << (undefined[16])
        0x60;
        fVar12 = fVar20;
        if (1 < uVar6) {
            uVar7 = 1;
            pauVar9 = pauVar3;
            do {
                pauVar9 = pauVar9[1];
                FUN_1408fc7f0();
                fVar15 = extraout_XMM0_Da * fVar20;
                FUN_1408fc7f0();
                fVar13 = extraout_XMM0_Da_00 * fVar20 + fVar15;
                fVar12 = 0.0;
                fVar15 = fVar15 / fVar13 + (float) uVar7;
                *pauVar9 = CONCAT412(fVar13, ZEXT812(CONCAT44(auStack260._0_4_ * fVar15, local_108 * fVar15)));
                uVar8 = uVar8 - 1;
                uVar7 = (ulonglong)((int) uVar7 + 2);
            } while (uVar8 != 0);
        }
        local_118 = *(int *) (param_1 + 0x650) >> ((byte) * (undefined4 * )(param_2 + 2) & 0x1f);
        iVar10 = *(int *) (param_1 + 0x654) >> ((byte) * (undefined4 * )(param_2 + 2) & 0x1f);
        iVar2 = local_118;
        if (local_118 < (int) DAT_140c77768) {
            iVar2 = (int) DAT_140c77768;
        }
        if (iVar10 < DAT_140c77768._4_4_) {
            iVar10 = DAT_140c77768._4_4_;
        }
        if ((iVar2 != *(int *) (lVar4 + 4)) || (iVar10 != *(int *) (lVar4 + 8))) {
            pauVar3[10] = ZEXT1216(CONCAT48(fVar12, CONCAT44((float) (iVar10 + -1) * auStack260._0_4_,
                                                             (float) (iVar2 + -1) * local_108))) &
                          (undefined[16])
            0xffffffffffffffff;
        }
        (**(code * *)(*DAT_140c65670 + 0x118))();
        param_6 = local_e8;
    }
    _local_108 = CONCAT88(param_6, _local_108);
    local_f8._0_8_ = (ulonglong)
    local_f8._0_4_;
    _local_108 = CONCAT124(auStack260, 1);
    local_128 = &DAT_140c3fe88;
    (**(code * *)(*DAT_140c65670 + 0x208))(DAT_140c65670, local_108, &DAT_140c3fe88);
    (**(code * *)(*DAT_140c65670 + 400))(DAT_140c65670, 7);
    uVar1 = SUB168(_local_108, 0);
    local_f8._8_8_ = local_f8._8_8_ & 0xffffffff00000000;
    iVar2 = *(int *) (param_1 + 0x650) >> ((byte) * (undefined4 * )(param_2 + 2) & 0x1f);
    local_f8 = CONCAT88(local_f8._8_8_, 0x3f80000000000000);
    if (iVar2 < 1) {
        iVar2 = 1;
    }
    iVar10 = *(int *) (param_1 + 0x654) >> ((byte) * (undefined4 * )(param_2 + 2) & 0x1f);
    if (iVar10 < 1) {
        iVar10 = 1;
    }
    _local_108 = CONCAT412(iVar10, CONCAT48(iVar2, uVar1)) & (undefined[16])
    0xffffffffffffffff;
    local_d8 = CONCAT88(auStack260._4_8_, uVar1) & (undefined[16])
    0xffffffffffffffff;
    local_c8 = CONCAT88(local_c8._8_8_, 0x3f80000000000000);
    (**(code * *)(*DAT_140c65670 + 0x250))(DAT_140c65670, local_d8);
    local_128 = (undefined * )
    0x0;
    (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 0);
    (**(code * *)(*DAT_140c65670 + 0x178))();
    (**(code * *)(*DAT_140c65670 + 0x1d0))();
    (**(code * *)(*DAT_140c65670 + 0x1a0))();
    bVar5 = (byte) * (undefined4 * )(param_2 + 2);
    iVar11 = *(int *) (param_1 + 0x650) >> (bVar5 & 0x1f);
    iVar2 = *(int *) (param_1 + 0x654) >> (bVar5 & 0x1f);
    iVar10 = iVar11;
    if (iVar11 < (int) DAT_140c77768) {
        iVar10 = (int) DAT_140c77768;
    }
    local_e8 = CONCAT44(iVar2, iVar11);
    if (iVar2 < DAT_140c77768._4_4_) {
        iVar2 = DAT_140c77768._4_4_;
    }
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uVar19 = 0;
    local_d8 = ZEXT816(0);
    local_c8 = ZEXT816(CONCAT44((float) iVar2, (float) iVar10));
    local_e0 = *(int *) (param_1 + 0x650) >> (bVar5 & 0x1f);
    local_dc = *(int *) (param_1 + 0x654) >> (bVar5 & 0x1f);
    _local_108 = ZEXT816(0);
    iVar2 = local_e0;
    if ((int) local_e0 < (int) DAT_140c77768) {
        iVar2 = (int) DAT_140c77768;
    }
    iVar10 = local_dc;
    if (local_dc < DAT_140c77768._4_4_) {
        iVar10 = DAT_140c77768._4_4_;
    }
    local_f8 = ZEXT816(CONCAT44((float) iVar10, (float) iVar2));
    lVar4 = (**(code * *)(**param_2 + 0x18))();
    local_120 = local_d8;
    local_114 = *(undefined4 * )(lVar4 + 8);
    local_118 = *(int *) (lVar4 + 4);
    local_128 = local_108;
    (**(code * *)(*DAT_140c65670 + 0x298))(DAT_140c65670, 0x80808080);
    (**(code * *)(*DAT_140c65670 + 0x2a0))();
    local_d8 = CONCAT88(param_2[1], local_d8._0_8_);
    local_d8 = CONCAT124(local_d8._4_12_, 1);
    local_c8._0_8_ = (ulonglong)
    local_c8._0_4_;
    local_128 = &DAT_140c3fe88;
    (**(code * *)(*DAT_140c65670 + 0x208))(DAT_140c65670, local_d8, &DAT_140c3fe88);
    bVar5 = (byte) * (undefined4 * )((longlong) param_2 + 0x14);
    iVar2 = *(int *) (param_1 + 0x650) >> (bVar5 & 0x1f);
    local_f8._8_8_ = SUB168(local_f8 >> 0x40, 0) & 0xffffffff00000000;
    local_f8 = CONCAT88(local_f8._8_8_, 0x3f80000000000000);
    if (iVar2 < 1) {
        iVar2 = 1;
    }
    iVar10 = *(int *) (param_1 + 0x654) >> (bVar5 & 0x1f);
    if (iVar10 < 1) {
        iVar10 = 1;
    }
    _local_108 = CONCAT412(iVar10, CONCAT48(iVar2, SUB168(_local_108, 0))) &
                 (undefined[16])
    0xffffffffffffffff;
    local_d8 = CONCAT88(auStack260._4_8_, SUB168(local_d8, 0)) & (undefined[16])
    0xffffffffffffffff;
    local_c8 = CONCAT88(local_c8._8_8_, 0x3f80000000000000);
    (**(code * *)(*DAT_140c65670 + 0x250))(DAT_140c65670, local_d8);
    local_128 = (undefined * )
    0x0;
    (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 0);
    (**(code * *)(*DAT_140c65670 + 0x178))();
    (**(code * *)(*DAT_140c65670 + 0x1d0))();
    (**(code * *)(*DAT_140c65670 + 0x1a0))();
    bVar5 = (byte) * (undefined4 * )((longlong) param_2 + 0x14);
    iVar11 = *(int *) (param_1 + 0x650) >> (bVar5 & 0x1f);
    iVar10 = *(int *) (param_1 + 0x654) >> (bVar5 & 0x1f);
    local_d8 = CONCAT412(uVar19, CONCAT48(uVar18, CONCAT44(uVar17, uVar16)));
    iVar2 = iVar11;
    if (iVar11 < (int) DAT_140c77768) {
        iVar2 = (int) DAT_140c77768;
    }
    local_e8 = CONCAT44(iVar10, iVar11);
    if (iVar10 < DAT_140c77768._4_4_) {
        iVar10 = DAT_140c77768._4_4_;
    }
    local_c8 = ZEXT816(CONCAT44((float) iVar10, (float) iVar2));
    local_e0 = *(int *) (param_1 + 0x650) >> (bVar5 & 0x1f);
    local_dc = *(int *) (param_1 + 0x654) >> (bVar5 & 0x1f);
    _local_108 = CONCAT412(uVar19, CONCAT48(uVar18, CONCAT44(uVar17, uVar16)));
    iVar2 = local_e0;
    if ((int) local_e0 < (int) DAT_140c77768) {
        iVar2 = (int) DAT_140c77768;
    }
    iVar10 = local_dc;
    if (local_dc < DAT_140c77768._4_4_) {
        iVar10 = DAT_140c77768._4_4_;
    }
    local_f8 = ZEXT816(CONCAT44((float) iVar10, (float) iVar2));
    lVar4 = (**(code * *)(*param_2[1] + 0x18))();
    local_114 = *(undefined4 * )(lVar4 + 8);
    local_118 = *(int *) (lVar4 + 4);
    local_120 = local_d8;
    local_128 = local_108;
    (**(code * *)(*DAT_140c65670 + 0x298))
            (DAT_140c65670, (int) (longlong)(param_5 * 127.5 + 0.5) * 0x1010101, *DAT_140c65670,
             &local_118);
    (**(code * *)(*DAT_140c65670 + 0x2a0))();
    FUN_1407db4f0(local_b8 ^ (ulonglong)
    auStack328);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1402584d0(undefined8 param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4,
                   longlong param_5, longlong **param_6) {
    int iVar1;
    int iVar2;
    undefined4 *puVar3;
    longlong lVar4;
    byte bVar5;
    undefined auStack216[32];
    undefined * local_b8;
    undefined8 local_b0;
    undefined8 local_a8;
    longlong *local_a0;
    undefined4 local_98;
    undefined4 uStack148;
    undefined4 local_90;
    undefined4 local_8c;
    int local_88;
    int local_84;
    undefined local_78[16];
    undefined local_68[16];
    ulonglong local_58;

    local_68._8_8_ = local_68._0_8_;
    local_58 = DAT_140c0f7b0 ^ (ulonglong)
    auStack216;
    local_a0 = param_6[1];
    local_a8 = CONCAT44(local_a8._4_4_, 1);
    uStack148 = 0;
    local_b8 = &DAT_140c3fe88;
    (**(code * *)(*DAT_140c65670 + 0x208))(DAT_140c65670, &local_a8);
    bVar5 = (byte) * (undefined4 * )((longlong) param_6 + 0x14);
    iVar1 = *(int *) (param_5 + 0x650) >> (bVar5 & 0x1f);
    local_98 = 0;
    uStack148 = 0x3f800000;
    local_a8 = 0;
    if (iVar1 < 1) {
        iVar1 = 1;
    }
    iVar2 = *(int *) (param_5 + 0x654) >> (bVar5 & 0x1f);
    if (iVar2 < 1) {
        iVar2 = 1;
    }
    local_a0 = (longlong *) CONCAT44(iVar2, iVar1);
    local_78 = ZEXT816(local_a0) << 0x40;
    local_68 = CONCAT88(local_68._8_8_, 0x3f80000000000000);
    (**(code * *)(*DAT_140c65670 + 0x250))();
    local_b8 = (undefined * )
    0x0;
    (**(code * *)(*DAT_140c65670 + 0x160))();
    (**(code * *)(*DAT_140c65670 + 0x178))();
    local_b8 = (undefined * )((ulonglong)
    local_b8 & 0xffffffff00000000);
    puVar3 = (undefined4 * )(**(code * *)(*DAT_140c65670 + 0x110))();
    if (puVar3 != (undefined4 *) 0x0) {
        *puVar3 = param_3;
        puVar3[1] = param_4;
        (**(code * *)(*DAT_140c65670 + 0x118))();
    }
    (**(code * *)(*DAT_140c65670 + 0x1d0))();
    bVar5 = (byte) * (undefined4 * )((longlong) param_6 + 0x14);
    local_88 = *(int *) (param_5 + 0x650) >> (bVar5 & 0x1f);
    local_84 = *(int *) (param_5 + 0x654) >> (bVar5 & 0x1f);
    iVar1 = local_88;
    if (local_88 < (int) DAT_140c77768) {
        iVar1 = (int) DAT_140c77768;
    }
    iVar2 = local_84;
    if (local_84 < DAT_140c77768._4_4_) {
        iVar2 = DAT_140c77768._4_4_;
    }
    local_78 = ZEXT416(0);
    local_68 = ZEXT816(CONCAT44((float) iVar2, (float) iVar1));
    lVar4 = (**(code * *)(**param_6 + 0x18))();
    local_b8 = local_78;
    local_b0 = 0;
    local_8c = *(undefined4 * )(lVar4 + 8);
    local_90 = *(undefined4 * )(lVar4 + 4);
    (**(code * *)(*DAT_140c65670 + 0x298))(DAT_140c65670, 0xffffffff);
    (**(code * *)(*DAT_140c65670 + 0x2a0))();
    FUN_1407db4f0(local_58 ^ (ulonglong)
    auStack216);
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140258740(longlong param_1, undefined8 *param_2, longlong param_3) {
    char cVar1;
    short sVar5;
    short sVar6;
    short sVar7;
    int iVar8;
    int iVar9;
    longlong lVar10;
    byte bVar11;
    int iVar12;
    int iVar13;
    short sVar14;
    undefined in_XMM1[16];
    undefined auVar16[16];
    undefined4 uVar17;
    undefined auStack200[32];
    undefined8 local_a8;
    longlong local_a0;
    undefined8 local_98;
    undefined8 local_90;
    undefined4 local_88;
    undefined4 uStack132;
    undefined4 local_80;
    undefined4 local_7c;
    undefined8 local_78;
    undefined8 local_70;
    undefined8 local_68;
    undefined8 local_60;
    undefined8 local_58;
    ulonglong local_50;
    char cVar2;
    char cVar3;
    char cVar4;
    undefined6 uVar15;

    local_50 = DAT_140c0f7b0 ^ (ulonglong)
    auStack200;
    local_78 = *param_2;
    local_70 = *(undefined8 * )(param_1 + 0x7a0);
    local_60 = 1;
    local_58 = 1;
    local_68 = 0x100000000;
    FUN_140257ad0(param_1, &local_78);
    local_78 = *(undefined8 * )(param_1 + 0x7a0);
    local_70 = *(undefined8 * )(param_1 + 0x7b8);
    local_60 = 1;
    local_58 = 0;
    local_68 = 0x200000001;
    FUN_140257ad0(param_1, &local_78);
    local_78 = *(undefined8 * )(param_1 + 0x7b8);
    local_70 = *(undefined8 * )(param_1 + 0x7b0);
    local_60 = 1;
    local_58 = 0;
    local_68 = 0x200000002;
    FUN_1402584d0(param_1, &local_78);
    local_78 = *(undefined8 * )(param_1 + 0x7b0);
    uVar17 = 0x3f800000;
    local_a0 = *(undefined8 * )(param_1 + 0x7b8);
    local_a8._0_4_ = 0x3f800000;
    local_60 = 1;
    local_58 = 0;
    local_68 = 0x200000002;
    local_70 = local_78;
    FUN_140257d20(param_1, &local_78, 0xd);
    local_78 = *(undefined8 * )(param_1 + 0x7b0);
    local_70 = *(undefined8 * )(param_1 + 0x7c0);
    local_60 = 1;
    local_58 = 0;
    local_68 = 0x300000002;
    FUN_140257ad0(param_1, &local_78);
    local_78 = *(undefined8 * )(param_1 + 0x7c0);
    local_60 = 1;
    local_a0 = *(undefined8 * )(param_1 + 0x7c8);
    local_58 = 0;
    local_68 = 0x300000003;
    local_70 = local_78;
    local_a8._0_4_ = uVar17;
    FUN_140257d20(param_1, &local_78, 0xd);
    local_78 = *(undefined8 * )(param_1 + 0x7c0);
    local_70 = *(undefined8 * )(param_1 + 2000);
    local_60 = 1;
    local_58 = 0;
    local_68 = 0x400000003;
    FUN_140257ad0(param_1, &local_78);
    local_78 = *(undefined8 * )(param_1 + 2000);
    local_a0 = *(undefined8 * )(param_1 + 0x7d8);
    local_60 = 1;
    local_58 = 0;
    local_68 = 0x400000004;
    local_70 = local_78;
    local_a8._0_4_ = uVar17;
    FUN_140257d20(param_1, &local_78, 0xd);
    local_78 = *(undefined8 * )(param_1 + 2000);
    local_70 = *(undefined8 * )(param_1 + 0x7e0);
    local_60 = 1;
    local_58 = 0;
    local_68 = 0x500000004;
    FUN_140257ad0(param_1, &local_78);
    local_78 = *(undefined8 * )(param_1 + 0x7e0);
    local_a0 = *(undefined8 * )(param_1 + 0x7e8);
    local_60 = 1;
    local_58 = 0;
    local_68 = 0x500000005;
    local_70 = local_78;
    local_a8._0_4_ = uVar17;
    FUN_140257d20(param_1, &local_78, 0xd);
    local_78 = *(undefined8 * )(param_1 + 0x7e0);
    local_70 = *(undefined8 * )(param_1 + 0x7f0);
    local_60 = 1;
    local_58 = 0;
    local_68 = 0x600000005;
    FUN_140257ad0(param_1, &local_78);
    local_78 = *(undefined8 * )(param_1 + 0x7f0);
    local_a0 = *(undefined8 * )(param_1 + 0x7f8);
    local_60 = 1;
    local_a8 = (undefined * )
    CONCAT44(local_a8._4_4_, uVar17);
    local_58 = 0;
    local_68 = 0x600000006;
    local_70 = local_78;
    FUN_140257d20(param_1, &local_78, 0xd);
    local_90 = param_2[1];
    local_98 = CONCAT44(local_98._4_4_, 1);
    uStack132 = 0;
    local_a8 = &DAT_140c3fe88;
    (**(code * *)(*DAT_140c65670 + 0x208))(DAT_140c65670, &local_98, &DAT_140c3fe88, &DAT_140c3fe88);
    bVar11 = (byte) * (undefined4 * )((longlong) param_2 + 0x14);
    iVar8 = *(int *) (param_1 + 0x650) >> (bVar11 & 0x1f);
    local_88 = 0;
    uStack132 = 0x3f800000;
    local_98 = 0;
    if (iVar8 < 1) {
        iVar8 = 1;
    }
    iVar9 = *(int *) (param_1 + 0x654) >> (bVar11 & 0x1f);
    if (iVar9 < 1) {
        iVar9 = 1;
    }
    local_90 = CONCAT44(iVar9, iVar8);
    local_78 = 0;
    local_70 = local_90;
    local_68 = 0x3f80000000000000;
    (**(code * *)(*DAT_140c65670 + 0x250))(DAT_140c65670, &local_78);
    (**(code * *)(*DAT_140c65670 + 0x178))(DAT_140c65670, *(undefined8 * )(param_1 + 0x8d0), 0);
    local_a8 = (undefined * )
    0x0;
    (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 0, *(undefined8 * )(param_1 + 0x7b0), 0);
    local_a8 = (undefined * )
    0x0;
    (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 1, *(undefined8 * )(param_1 + 0x7c0), 0);
    local_a8 = (undefined * )
    0x0;
    (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 2, *(undefined8 * )(param_1 + 2000), 0);
    local_a8 = (undefined * )
    0x0;
    (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 3, *(undefined8 * )(param_1 + 0x7e0), 0);
    local_a8 = (undefined * )
    0x0;
    (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 4, *(undefined8 * )(param_1 + 0x7f0), 0);
    (**(code * *)(*DAT_140c65670 + 0x1d0))
            (DAT_140c65670, *(undefined4 * )(param_2 + 3), *(undefined4 * )((longlong) param_2 + 0x1c), 0);
    lVar10 = (**(code * *)(*(longlong *) param_2[1] + 0x18))();
    uVar17 = *(undefined4 * )(param_3 + 0x40);
    local_a8 = (undefined * )(param_1 + 0x6d0);
    local_7c = *(undefined4 * )(lVar10 + 8);
    local_80 = *(undefined4 * )(lVar10 + 4);
    auVar16 = maxps(in_XMM1 & (undefined[16])
    0x0,
            CONCAT412(uVar17, CONCAT48(uVar17, CONCAT44(uVar17, uVar17))));
    auVar16 = minps(auVar16, _DAT_140b7b240);
    iVar8 = (int) (SUB164(auVar16, 0) * 255.0 + 0.5);
    iVar9 = (int) (SUB164(auVar16 >> 0x20, 0) * 255.0 + 0.5);
    iVar12 = (int) (SUB164(auVar16 >> 0x40, 0) * 255.0 + 0.5);
    iVar13 = (int) (SUB164(auVar16 >> 0x60, 0) * 255.0 + 0.5);
    sVar5 = (short) iVar12;
    cVar1 = (0 < sVar5) * (sVar5 < 0xff) * (char) iVar12 - (0xff < sVar5);
    sVar5 = (short) ((uint)
    iVar12 >> 0x10);
    sVar14 = CONCAT11((0 < sVar5) * (sVar5 < 0xff) * (char) ((uint)
    iVar12 >> 0x10) -(0xff < sVar5),
            cVar1);
    sVar5 = (short) iVar9;
    cVar2 = (0 < sVar5) * (sVar5 < 0xff) * (char) iVar9 - (0xff < sVar5);
    sVar5 = (short) ((uint)
    iVar9 >> 0x10);
    uVar17 = CONCAT13((0 < sVar5) * (sVar5 < 0xff) * (char) ((uint)
    iVar9 >> 0x10) -(0xff < sVar5),
            CONCAT12(cVar2, sVar14));
    sVar5 = (short) iVar8;
    cVar3 = (0 < sVar5) * (sVar5 < 0xff) * (char) iVar8 - (0xff < sVar5);
    sVar5 = (short) ((uint)
    iVar8 >> 0x10);
    uVar15 = CONCAT15((0 < sVar5) * (sVar5 < 0xff) * (char) ((uint)
    iVar8 >> 0x10) -(0xff < sVar5),
            CONCAT14(cVar3, uVar17));
    sVar5 = (short) iVar13;
    cVar4 = (0 < sVar5) * (sVar5 < 0xff) * (char) iVar13 - (0xff < sVar5);
    sVar7 = (short) ((uint)
    iVar13 >> 0x10);
    sVar5 = (short) ((uint)
    uVar17 >> 0x10);
    sVar6 = (short) ((uint6) uVar15 >> 0x20);
    sVar7 = (short) (CONCAT17((0 < sVar7) * (sVar7 < 0xff) * (char) ((uint)
    iVar13 >> 0x10) -
            (0xff < sVar7), CONCAT16(cVar4, uVar15)) >> 0x30);
    local_a0 = (longlong) local_a8;
    (**(code * *)(*DAT_140c65670 + 0x298))
            (DAT_140c65670,
             CONCAT13((0 < sVar7) * (sVar7 < 0xff) * cVar4 - (0xff < sVar7),
                      CONCAT12((0 < sVar6) * (sVar6 < 0xff) * cVar3 - (0xff < sVar6),
                               CONCAT11((0 < sVar5) * (sVar5 < 0xff) * cVar2 - (0xff < sVar5),
                                        (0 < sVar14) * (sVar14 < 0xff) * cVar1 - (0xff < sVar14)))),
             local_a8, &local_80);
    (**(code * *)(*DAT_140c65670 + 0x2a0))();
    FUN_1407db4f0(local_50 ^ (ulonglong)
    auStack200);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140258cc0(longlong param_1, undefined8 *param_2, float *param_3) {
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    int iVar5;
    int iVar6;
    undefined4 *puVar7;
    undefined8 uVar8;
    longlong lVar9;
    byte bVar10;
    undefined auStack168[32];
    undefined * local_88;
    longlong local_80;
    undefined local_78[8];
    undefined8 uStack112;
    undefined4 local_68;
    undefined4 uStack100;
    undefined8 local_58;
    undefined8 local_50;
    undefined8 local_48;
    ulonglong local_40;

    local_40 = DAT_140c0f7b0 ^ (ulonglong)
    auStack168;
    _local_78 = CONCAT88(param_2[1], local_78);
    _local_78 = CONCAT124(stack0xffffffffffffff8c, 1);
    uStack100 = 0;
    local_88 = &DAT_140c3fe88;
    (**(code * *)(*DAT_140c65670 + 0x208))(DAT_140c65670, local_78, &DAT_140c3fe88, &DAT_140c3fe88);
    uStack100 = 0x3f800000;
    bVar10 = (byte) * (undefined4 * )((longlong) param_2 + 0x14);
    iVar5 = *(int *) (param_1 + 0x650) >> (bVar10 & 0x1f);
    local_68 = 0;
    if (iVar5 < 1) {
        iVar5 = 1;
    }
    iVar6 = *(int *) (param_1 + 0x654) >> (bVar10 & 0x1f);
    if (iVar6 < 1) {
        iVar6 = 1;
    }
    _local_78 = CONCAT412(iVar6, CONCAT48(iVar5, SUB168(_local_78, 0))) &
                (undefined[16])
    0xffffffffffffffff;
    local_58 = 0;
    local_50 = uStack112;
    local_48 = 0x3f80000000000000;
    (**(code * *)(*DAT_140c65670 + 0x250))();
    iVar5 = DAT_140c400d0;
    if (*DAT_140c63750 < DAT_140c400d0) {
        iVar5 = *DAT_140c63750;
    }
    (**(code * *)(*DAT_140c65670 + 0x178))
            (DAT_140c65670, *(undefined8 * )(param_1 + 0x8d8), (&DAT_140c400e0)[iVar5] != '\0');
    local_88 = (undefined * )((ulonglong)
    local_88 & 0xffffffff00000000);
    puVar7 = (undefined4 * )(**(code * *)(*DAT_140c65670 + 0x110))(DAT_140c65670, 0x30, 0, 0);
    if (puVar7 != (undefined4 *) 0x0) {
        iVar5 = DAT_140c40110;
        if (*DAT_140c63750 < DAT_140c40110) {
            iVar5 = *DAT_140c63750;
        }
        *puVar7 = *(undefined4 * )(&DAT_140c40120 + (longlong) iVar5 * 4);
        puVar7[1] = param_3[6];
        puVar7[2] = param_3[7];
        puVar7[3] = param_3[8];
        fVar1 = param_3[1];
        fVar2 = param_3[2];
        fVar3 = param_3[3];
        puVar7[4] = *param_3;
        puVar7[5] = fVar1;
        puVar7[6] = fVar2;
        puVar7[7] = fVar3;
        fVar1 = param_3[3];
        fVar2 = param_3[9];
        fVar3 = param_3[1];
        fVar4 = param_3[2];
        _local_78 = CONCAT412(fVar2, CONCAT48(fVar1 * fVar4, CONCAT44(fVar1 * fVar3, fVar1 * *param_3)));
        puVar7[8] = fVar1 * *param_3;
        puVar7[9] = fVar1 * fVar3;
        puVar7[10] = fVar1 * fVar4;
        puVar7[0xb] = fVar2;
        (**(code * *)(*DAT_140c65670 + 0x118))();
    }
    local_88 = (undefined * )
    0x0;
    (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 0, *param_2, 0);
    local_88 = (undefined * )
    0x0;
    (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 1, *(undefined8 * )(param_1 + 0x800), 0);
    uVar8 = (**(code * *)(**(longlong * *)(param_3 + 0x18) + 0xf8))();
    local_88 = (undefined * )
    0x0;
    (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 2, uVar8);
    (**(code * *)(*DAT_140c65670 + 0x1d0))
            (DAT_140c65670, *(undefined4 * )(param_2 + 3), *(undefined4 * )((longlong) param_2 + 0x1c), 0);
    lVar9 = (**(code * *)(*(longlong *) param_2[1] + 0x18))();
    local_88 = (undefined * )(param_1 + 0x6d0);
    _local_78 = CONCAT124(CONCAT84(uStack112, *(undefined4 * )(lVar9 + 8)), *(undefined4 * )(lVar9 + 4));
    local_80 = (longlong) local_88;
    (**(code * *)(*DAT_140c65670 + 0x298))(DAT_140c65670, 0xffffffff, *DAT_140c65670, local_78);
    (**(code * *)(*DAT_140c65670 + 0x2a0))();
    FUN_1407db4f0(local_40 ^ (ulonglong)
    auStack168);
    return;
}


int FUN_140258f60(longlong param_1) {
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *) (param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_140253740();
            FUN_14018b900(param_1, 0);
        }
        iVar2 = 0;
    }
    return iVar2;
}


undefined8 FUN_140258fa0(longlong param_1, undefined8 param_2) {
    int iVar1;
    longlong lVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;

    if (*(int *) (param_1 + 0x24) != 0) {
        return 1;
    }
    iVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x6f0) + 0x20))();
    if (iVar1 != 0) {
        iVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x6f8) + 0x20))
                (*(longlong * *)(param_1 + 0x6f8), param_2);
        if (iVar1 != 0) {
            iVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x700) + 0x20))
                    (*(longlong * *)(param_1 + 0x700), param_2);
            if (iVar1 != 0) {
                iVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x718) + 0x20))
                        (*(longlong * *)(param_1 + 0x718), param_2);
                if (iVar1 != 0) {
                    iVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x838) + 0x20))
                            (*(longlong * *)(param_1 + 0x838), param_2);
                    if (iVar1 != 0) {
                        iVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x840) + 0x20))
                                (*(longlong * *)(param_1 + 0x840), param_2);
                        if (iVar1 != 0) {
                            iVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x848) + 0x20))
                                    (*(longlong * *)(param_1 + 0x848), param_2);
                            if (iVar1 != 0) {
                                iVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x850) + 0x20))
                                        (*(longlong * *)(param_1 + 0x850), param_2);
                                if (iVar1 != 0) {
                                    iVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x858) + 0x20))
                                            (*(longlong * *)(param_1 + 0x858), param_2);
                                    if (iVar1 != 0) {
                                        iVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x860) + 0x20))
                                                (*(longlong * *)(param_1 + 0x860), param_2);
                                        if (iVar1 != 0) {
                                            iVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x868) + 0x20))
                                                    (*(longlong * *)(param_1 + 0x868), param_2);
                                            if (iVar1 != 0) {
                                                iVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x870) + 0x20))
                                                        (*(longlong * *)(param_1 + 0x870), param_2);
                                                if (iVar1 != 0) {
                                                    iVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x878) + 0x20))
                                                            (*(longlong * *)(param_1 + 0x878), param_2);
                                                    if (iVar1 != 0) {
                                                        iVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x880) + 0x20))
                                                                (*(longlong * *)(param_1 + 0x880), param_2);
                                                        if (iVar1 != 0) {
                                                            iVar1 = (**(code * *)(
                                                                    **(longlong * *)(param_1 + 0x888) + 0x20))
                                                                    (*(longlong * *)(param_1 + 0x888), param_2);
                                                            if (iVar1 != 0) {
                                                                iVar1 = (**(code * *)(
                                                                        **(longlong * *)(param_1 + 0x890) + 0x20))
                                                                        (*(longlong * *)(param_1 + 0x890), param_2);
                                                                if (iVar1 != 0) {
                                                                    iVar1 = (**(code * *)(
                                                                            **(longlong * *)(param_1 + 0x898) + 0x20))
                                                                            (*(longlong * *)(param_1 + 0x898), param_2);
                                                                    if (iVar1 != 0) {
                                                                        iVar1 = (**(code * *)(
                                                                                **(longlong * *)(param_1 + 0x8a0) +
                                                                                0x20))
                                                                                (*(longlong * *)(param_1 + 0x8a0),
                                                                                 param_2);
                                                                        if (iVar1 != 0) {
                                                                            iVar1 = (**(code * *)(
                                                                                    **(longlong * *)(param_1 + 0x8a8) +
                                                                                    0x20))
                                                                                    (*(longlong * *)(param_1 + 0x8a8),
                                                                                     param_2);
                                                                            if (iVar1 != 0) {
                                                                                iVar1 = (**(code * *)(**(longlong * *)(
                                                                                        param_1 + 0x8b0) + 0x20
                                                                                ))(*(longlong * *)(param_1 + 0x8b0),
                                                                                   param_2);
                                                                                if (iVar1 != 0) {
                                                                                    iVar1 = (**(code * *)(
                                                                                            **(longlong * *)(
                                                                                                    param_1 + 0x8b8) +
                                                                                            0x20))(*(longlong * *)(
                                                                                            param_1 + 0x8b8), param_2);
                                                                                    if (iVar1 != 0) {
                                                                                        iVar1 = (**(code * *)(
                                                                                                **(longlong * *)(
                                                                                                        param_1 +
                                                                                                        0x8c0) +
                                                                                                0x20))(*(longlong * *)
                                                                                                               (param_1 + 0x8c0),
                                                                                                       param_2);
                                                                                        if (iVar1 != 0) {
                                                                                            iVar1 = (**(code * *)(
                                                                                                    **(longlong * *)(
                                                                                                            param_1 +
                                                                                                            0x8c8)
                                                                                                    + 0x20))
                                                                                                    (*(longlong * *)(
                                                                                                             param_1 +
                                                                                                             0x8c8),
                                                                                                     param_2);
                                                                                            if (iVar1 != 0) {
                                                                                                iVar1 = (**(code * *)(
                                                                                                        **(longlong * *)
                                                                                                                (param_1 +
                                                                                                                 0x8d0) +
                                                                                                        0x20))
                                                                                                        (*(longlong *
                                                                                                           *)(param_1 +
                                                                                                              0x8d0),
                                                                                                         param_2);
                                                                                                if (iVar1 != 0) {
                                                                                                    iVar1 = (**(code *
                                                                                                                *)(
                                                                                                            **(longlong *
                                                                                                               *)
                                                                                                                    (param_1 +
                                                                                                                     0x8d8) +
                                                                                                            0x20))
                                                                                                            (*(longlong *
                                                                                                               *)(param_1 +
                                                                                                                  0x8d8),
                                                                                                             param_2);
                                                                                                    if (iVar1 != 0) {
                                                                                                        iVar1 = (**(
                                                                                                                code *
                                                                                                                *)(
                                                                                                                **(longlong *
                                                                                                                   *)
                                                                                                                        (param_1 +
                                                                                                                         0x8e0) +
                                                                                                                0x20)
                                                                                                        )(*(longlong *
                                                                                                            *)(param_1 +
                                                                                                               0x8e0),
                                                                                                          param_2);
                                                                                                        if (iVar1 !=
                                                                                                            0) {
                                                                                                            iVar1 = (**(
                                                                                                                    code *
                                                                                                                    *)(
                                                                                                                    **(longlong *
                                                                                                                       *)
                                                                                                                            (param_1 +
                                                                                                                             0x8e8) +
                                                                                                                    0x20))(
                                                                                                                    *(longlong *
                                                                                                                      *)
                                                                                                                            (param_1 +
                                                                                                                             0x8e8),
                                                                                                                    param_2);
                                                                                                            if (iVar1 !=
                                                                                                                0) {
                                                                                                                iVar1 = (**(
                                                                                                                        code *
                                                                                                                        *)(
                                                                                                                        **(longlong *
                                                                                                                           *)
                                                                                                                                (param_1 +
                                                                                                                                 0x8f0) +
                                                                                                                        0x20))(
                                                                                                                        *(longlong *
                                                                                                                          *)
                                                                                                                                (param_1 +
                                                                                                                                 0x8f0
                                                                                                                                ),
                                                                                                                        param_2);
                                                                                                                if (iVar1 !=
                                                                                                                    0) {
                                                                                                                    *(undefined4 * )(
                                                                                                                            param_1 +
                                                                                                                            0x24) = 1;
                                                                                                                    lVar2 = (**(
                                                                                                                            code *
                                                                                                                            *)(
                                                                                                                            **(longlong *
                                                                                                                               *)
                                                                                                                                    (param_1 +
                                                                                                                                     0x6f0) +
                                                                                                                            0x18))();
                                                                                                                    fVar7 = 1.0;
                                                                                                                    fVar6 = 0.5;
                                                                                                                    fVar5 = 1.0 /
                                                                                                                            (float) (ulonglong)
                                                                                                                            *
                                                                                                                            (uint * )(
                                                                                                                                    lVar2 +
                                                                                                                                    4);
                                                                                                                    fVar4 = 1.0 /
                                                                                                                            (float) (ulonglong)
                                                                                                                            *
                                                                                                                            (uint * )(
                                                                                                                                    lVar2 +
                                                                                                                                    8);
                                                                                                                    fVar3 = fVar4 *
                                                                                                                            0.5;
                                                                                                                    *(undefined(
                                                                                                                            *)[16])(
                                                                                                                            param_1 +
                                                                                                                            0x720) =
                                                                                                                            ZEXT1216(
                                                                                                                                    CONCAT48(
                                                                                                                                            fVar3,
                                                                                                                                            CONCAT44(
                                                                                                                                                    fVar5 *
                                                                                                                                                    0.5,
                                                                                                                                                    fVar4)))
                                                                                                                                    << 0x20;
                                                                                                                    *(undefined(
                                                                                                                            *)[16])(
                                                                                                                            param_1 +
                                                                                                                            0x730) =
                                                                                                                            ZEXT1216(
                                                                                                                                    CONCAT48(
                                                                                                                                            fVar3,
                                                                                                                                            CONCAT44(
                                                                                                                                                    fVar5 *
                                                                                                                                                    1.5,
                                                                                                                                                    fVar4)))
                                                                                                                                    <<
                                                                                                                                    0x20;
                                                                                                                    *(undefined(
                                                                                                                            *)[16])(
                                                                                                                            param_1 +
                                                                                                                            0x740) =
                                                                                                                            ZEXT1216(
                                                                                                                                    CONCAT48(
                                                                                                                                            fVar3,
                                                                                                                                            CONCAT44(
                                                                                                                                                    fVar5 *
                                                                                                                                                    2.5,
                                                                                                                                                    fVar4)))
                                                                                                                                    <<
                                                                                                                                    0x20;
                                                                                                                    lVar2 = (**(
                                                                                                                            code *
                                                                                                                            *)(
                                                                                                                            **(longlong *
                                                                                                                               *)
                                                                                                                                    (param_1 +
                                                                                                                                     0x6f8) +
                                                                                                                            0x18))
                                                                                                                            (fVar5 *
                                                                                                                             2.5,
                                                                                                                             fVar3);
                                                                                                                    fVar5 = fVar7 /
                                                                                                                            (float) (ulonglong)
                                                                                                                            *
                                                                                                                            (uint * )(
                                                                                                                                    lVar2 +
                                                                                                                                    4);
                                                                                                                    fVar4 = fVar7 -
                                                                                                                            fVar5;
                                                                                                                    fVar3 = fVar7 /
                                                                                                                            (float) (ulonglong)
                                                                                                                            *
                                                                                                                            (uint * )(
                                                                                                                                    lVar2 +
                                                                                                                                    8);
                                                                                                                    fVar5 = fVar5 *
                                                                                                                            fVar6;
                                                                                                                    *(undefined(
                                                                                                                            *)[16])(
                                                                                                                            param_1 +
                                                                                                                            0x750) =
                                                                                                                            CONCAT412(
                                                                                                                                    fVar3 *
                                                                                                                                    fVar6,
                                                                                                                                    CONCAT48(
                                                                                                                                            fVar5,
                                                                                                                                            CONCAT44(
                                                                                                                                                    fVar3 *
                                                                                                                                                    4.0,
                                                                                                                                                    fVar4)));
                                                                                                                    *(undefined(
                                                                                                                            *)[16])(
                                                                                                                            param_1 +
                                                                                                                            0x760) =
                                                                                                                            CONCAT412(
                                                                                                                                    fVar3 *
                                                                                                                                    1.5,
                                                                                                                                    CONCAT48(
                                                                                                                                            fVar5,
                                                                                                                                            CONCAT44(
                                                                                                                                                    fVar3 *
                                                                                                                                                    4.0,
                                                                                                                                                    fVar4)));
                                                                                                                    lVar2 = (**(
                                                                                                                            code *
                                                                                                                            *)(
                                                                                                                            **(longlong *
                                                                                                                               *)
                                                                                                                                    (param_1 +
                                                                                                                                     0x700) +
                                                                                                                            0x18))
                                                                                                                            (fVar5,
                                                                                                                             fVar3 *
                                                                                                                             1.5);
                                                                                                                    fVar3 = fVar7 /
                                                                                                                            (float) (ulonglong)
                                                                                                                            *
                                                                                                                            (uint * )(
                                                                                                                                    lVar2 +
                                                                                                                                    4);
                                                                                                                    fVar4 = fVar7 -
                                                                                                                            fVar3;
                                                                                                                    fVar7 = fVar7 /
                                                                                                                            (float) (ulonglong)
                                                                                                                            *
                                                                                                                            (uint * )(
                                                                                                                                    lVar2 +
                                                                                                                                    8);
                                                                                                                    fVar3 = fVar3 *
                                                                                                                            fVar6;
                                                                                                                    *(undefined(
                                                                                                                            *)[16])(
                                                                                                                            param_1 +
                                                                                                                            0x770) =
                                                                                                                            CONCAT412(
                                                                                                                                    fVar7 *
                                                                                                                                    2.5,
                                                                                                                                    CONCAT48(
                                                                                                                                            fVar3,
                                                                                                                                            CONCAT44(
                                                                                                                                                    fVar7 *
                                                                                                                                                    4.0,
                                                                                                                                                    fVar4)));
                                                                                                                    *(undefined(
                                                                                                                            *)[16])(
                                                                                                                            param_1 +
                                                                                                                            0x780) =
                                                                                                                            CONCAT412(
                                                                                                                                    fVar7 *
                                                                                                                                    3.5,
                                                                                                                                    CONCAT48(
                                                                                                                                            fVar3,
                                                                                                                                            CONCAT44(
                                                                                                                                                    fVar7 *
                                                                                                                                                    4.0,
                                                                                                                                                    fVar4)));
                                                                                                                    return 1;
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
    return 0;
}


undefined8 FUN_14025a310(longlong param_1, int param_2) {
    int iVar1;
    longlong lVar2;
    undefined8 uVar3;
    undefined8 local_res8;
    undefined * *local_58;
    undefined8 local_50;
    LPVOID local_48;
    undefined * *local_38;
    undefined8 local_30;
    LPVOID local_28;

    uVar3 = 0;
    if (*(int *) (param_1 + 0x2c) == 0) {
        local_50 = 0;
        local_58 = &PTR_LAB_140b5e648;
        local_48 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_58);
        local_38 = local_58;
        local_res8 = 0x141ddf570;
        local_28 = local_48;
        local_30 = local_50;
        iVar1 = FUN_1401971e0(&DAT_140c8a2a4, 0xe, &local_res8, &local_38);
        local_58 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_48);
        if (iVar1 != 0) {
            DebugBreak();
        }
        return 0;
    }
    if ((*(int *) (param_1 + 0x30) < 0x17) &&
        (lVar2 = (**(code * *)(*DAT_140c65670 + 0x2d0))(),
                *(int *) (param_1 + 0x34) !=
                *(int *) (lVar2 + 0x334) +
                *(int *) (lVar2 + 0x398) + *(int *) (lVar2 + 0x380) + *(int *) (lVar2 + 0x368) +
                *(int *) (lVar2 + 0x350) + *(int *) (lVar2 + 0x338))) {
        *(undefined4 * )(param_1 + 0x38 + (longlong) * (int *) (param_1 + 0x30) * 4) = 0;
    }
    iVar1 = *(int *) (param_1 + 0x30);
    do {
        if (iVar1 == param_2) {
            lVar2 = (**(code * *)(*DAT_140c65670 + 0x2d0))();
            *(int *) (param_1 + 0x34) =
                    *(int *) (lVar2 + 0x334) +
                    *(int *) (lVar2 + 0x398) + *(int *) (lVar2 + 0x380) + *(int *) (lVar2 + 0x368) +
                    *(int *) (lVar2 + 0x350) + *(int *) (lVar2 + 0x338);
            if (((0x16 < *(int *) (param_1 + 0x30)) ||
                 (0x16 < *(int *) (&DAT_140b60540 + (longlong) * (int *) (param_1 + 0x30) * 4))) ||
                (*(int *) (param_1 + 0x38 +
                           (longlong) * (int *) (&DAT_140b60540 + (longlong) * (int *) (param_1 + 0x30) * 4) * 4)
                 == 0)) {
                uVar3 = 1;
            }
            return uVar3;
        }
        iVar1 = *(int *) (param_1 + 0x30);
        if (iVar1 == 0x17) {
            *(undefined4 * )(param_1 + 0x30) = 0;
            LAB_14025a44f:
            (*(code * )(&PTR_FUN_140b60480)[*(int *) (param_1 + 0x30)])();
            *(undefined4 * )(param_1 + 0x38 + (longlong) * (int *) (param_1 + 0x30) * 4) = 1;
        } else {
            if (param_2 <= iVar1) {
                local_50 = 0;
                local_58 = &PTR_LAB_140b5e648;
                local_48 = TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720, &local_58);
                local_38 = local_58;
                local_res8 = 0x141ddf480;
                local_28 = local_48;
                local_30 = local_50;
                iVar1 = FUN_1401971e0(&DAT_140c8a2a0, 0xe, &local_res8, &local_38);
                local_58 = &PTR_LAB_140b5e648;
                TlsSetValue(DAT_140c63720, local_48);
                if (iVar1 != 0) {
                    DebugBreak();
                }
                return 0;
            }
            *(int *) (param_1 + 0x30) = iVar1 + 1;
            if (iVar1 + 1 < 0x17) goto LAB_14025a44f;
        }
        iVar1 = *(int *) (param_1 + 0x30);
    } while (true);
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_14025a590(longlong *param_1) {
    int iVar1;
    int iVar2;
    int iVar3;
    undefined8 uVar4;
    undefined8 local_res8;
    ulonglong uVar5;
    undefined8 in_stack_ffffffffffffffa0;
    uint uVar6;
    undefined local_58[16];
    LPVOID local_48;
    undefined8 local_38;
    longlong local_30;
    LPVOID local_28;

    uVar6 = (uint)((ulonglong)
    in_stack_ffffffffffffffa0 >> 0x20);
    if (*(int *) ((longlong) param_1 + 0x2c) == 0) {
        local_58 = ZEXT816(0x140b5e648);
        local_48 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, local_58);
        local_38 = local_58._0_8_;
        local_res8 = 0x141ddf4d0;
        local_28 = local_48;
        local_30 = local_58._8_8_;
        iVar1 = FUN_1401971e0(&DAT_140c8a29c, 0xe, &local_res8, &local_38);
        local_58 = CONCAT88(local_58._8_8_, 0x140b5e648);
        TlsSetValue(DAT_140c63720, local_48);
        if (iVar1 != 0) {
            DebugBreak();
        }
        uVar4 = 0x80004005;
    } else {
        (**(code * *)(*param_1 + 0x30))(param_1, 0x17);
        *(undefined4 * )((longlong) param_1 + 0x2c) = 0;
        (**(code * *)(*DAT_140c65670 + 0x2a0))();
        if (*(int *) (param_1 + 5) < 1) {
            iVar1 = DAT_140c40510;
            if (*DAT_140c63750 < DAT_140c40510) {
                iVar1 = *DAT_140c63750;
            }
            if ((&DAT_140c40520)[iVar1] == '\0') {
                (**(code * *)(*DAT_140c65670 + 0x120))();
                (**(code * *)(*DAT_140c65670 + 400))(DAT_140c65670, 7);
                (**(code * *)(*DAT_140c65670 + 0x198))(DAT_140c65670, 0);
                (**(code * *)(*DAT_140c65670 + 0x220))();
                (**(code * *)(*DAT_140c65670 + 0x228))();
                (**(code * *)(*DAT_140c65670 + 0x278))(DAT_140c65670, 3);
                (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 0, param_1[0xce], 0, 0);
                (**(code * *)(*DAT_140c65670 + 0x178))(DAT_140c65670, param_1[0x107], 1);
                (**(code * *)(*DAT_140c65670 + 0x298))
                        (DAT_140c65670, 0xffffffff, *DAT_140c65670, param_1 + 0xd9, param_1 + 0xda, 0);
            } else if ((*(int *) (param_1 + 0x124) == *(int *) (param_1 + 0x121)) &&
                       (*(int *) ((longlong) param_1 + 0x924) == *(int *) ((longlong) param_1 + 0x90c))) {
                (**(code * *)(*DAT_140c65670 + 0x120))();
                (**(code * *)(*DAT_140c65670 + 400))(DAT_140c65670, 7);
                (**(code * *)(*DAT_140c65670 + 0x198))(DAT_140c65670, 0);
                (**(code * *)(*DAT_140c65670 + 0x220))();
                (**(code * *)(*DAT_140c65670 + 0x228))();
                (**(code * *)(*DAT_140c65670 + 0x278))(DAT_140c65670, 3);
                uVar5 = 0;
                (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 0, param_1[0xce], 0, 0);
                iVar1 = *DAT_140c63750;
                iVar2 = DAT_140c40410;
                if (iVar1 < DAT_140c40410) {
                    iVar2 = iVar1;
                }
                iVar3 = DAT_140c404b0;
                if (iVar1 < DAT_140c404b0) {
                    iVar3 = iVar1;
                }
                (**(code * *)(*DAT_140c65670 + 0x178))
                        (DAT_140c65670, param_1[0x11d],
                         *(int *) (&DAT_140c404c0 + (longlong) iVar3 * 4) +
                         *(int *) (&DAT_140c40420 + (longlong) iVar2 * 4) * 6);
                local_58 = ZEXT816(CONCAT44(1.0 / (float) *(int *) ((longlong) param_1 + 0x6cc),
                                            1.0 / (float) *(int *) (param_1 + 0xd9)));
                (**(code * *)(*DAT_140c65670 + 0x180))
                        (DAT_140c65670, 0x10, local_58, 0, uVar5 & 0xffffffff00000000, (ulonglong)
                uVar6 << 0x20
                );
                (**(code * *)(*DAT_140c65670 + 0x298))
                        (DAT_140c65670, 0xffffffff, *DAT_140c65670, param_1 + 0xd9, param_1 + 0xda, 0);
            } else {
                (**(code * *)(*DAT_140c65670 + 0x120))();
                (**(code * *)(*DAT_140c65670 + 400))(DAT_140c65670, 7);
                (**(code * *)(*DAT_140c65670 + 0x198))(DAT_140c65670, 0);
                local_30 = param_1[0xcf];
                local_38 = CONCAT44(local_38._4_4_, 1);
                local_28 = (LPVOID)(ulonglong)(uint)
                local_28;
                (**(code * *)(*DAT_140c65670 + 0x208))
                        (DAT_140c65670, &local_38, &DAT_140c3fe88, &DAT_140c3fe88, &DAT_140c3fe88);
                (**(code * *)(*DAT_140c65670 + 0x250))(DAT_140c65670, param_1 + 0x123);
                uVar5 = 0;
                (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 0, param_1[0xce], 0, 0);
                iVar1 = *DAT_140c63750;
                iVar2 = DAT_140c40410;
                if (iVar1 < DAT_140c40410) {
                    iVar2 = iVar1;
                }
                iVar3 = DAT_140c404b0;
                if (iVar1 < DAT_140c404b0) {
                    iVar3 = iVar1;
                }
                (**(code * *)(*DAT_140c65670 + 0x178))
                        (DAT_140c65670, param_1[0x11d],
                         *(int *) (&DAT_140c404c0 + (longlong) iVar3 * 4) +
                         *(int *) (&DAT_140c40420 + (longlong) iVar2 * 4) * 6);
                local_58 = ZEXT816(CONCAT44(1.0 / (float) *(int *) ((longlong) param_1 + 0x6cc),
                                            1.0 / (float) *(int *) (param_1 + 0xd9)));
                (**(code * *)(*DAT_140c65670 + 0x180))
                        (DAT_140c65670, 0x10, local_58, 0, uVar5 & 0xffffffff00000000, (ulonglong)
                uVar6 << 0x20
                );
                (**(code * *)(*DAT_140c65670 + 0x298))(DAT_140c65670, 0xffffffff);
                (**(code * *)(*DAT_140c65670 + 0x2a0))();
                (**(code * *)(*DAT_140c65670 + 0x220))();
                (**(code * *)(*DAT_140c65670 + 0x228))();
                (**(code * *)(*DAT_140c65670 + 0x278))(DAT_140c65670, 3);
                (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 0, param_1[0xcf], 0, 0);
                (**(code * *)(*DAT_140c65670 + 0x178))(DAT_140c65670, param_1[0x107], 1);
                (**(code * *)(*DAT_140c65670 + 0x298))(DAT_140c65670, 0xffffffff);
            }
        } else {
            (**(code * *)(*DAT_140c65670 + 0x220))();
            (**(code * *)(*DAT_140c65670 + 0x228))();
        }
        uVar4 = 0;
    }
    return uVar4;
}


void FUN_14025ab90(longlong param_1) {
    undefined4 local_68[2];
    undefined8 local_60;
    undefined4 local_54;
    undefined4 local_50[2];
    undefined8 local_48;
    undefined4 local_3c;
    undefined4 local_38[2];
    undefined8 local_30;
    undefined4 local_24;
    undefined4 local_20[2];
    undefined8 local_18;
    undefined4 local_c;

    local_60 = *(undefined8 * )(param_1 + 0x948);
    local_20[0] = 1;
    local_68[0] = 1;
    local_48 = *(undefined8 * )(param_1 + 0x940);
    local_50[0] = 1;
    local_30 = *(undefined8 * )(param_1 + 0x938);
    local_38[0] = 1;
    local_18 = *(undefined8 * )(param_1 + 0x930);
    local_54 = 0;
    local_3c = 0;
    local_24 = 0;
    local_c = 0;
    (**(code * *)(*DAT_140c65670 + 0x208))(DAT_140c65670, local_20, local_38, local_50, local_68);
    local_18 = *(undefined8 * )(param_1 + 0x950);
    local_20[0] = 1;
    local_c = 0;
    (**(code * *)(*DAT_140c65670 + 0x210))(DAT_140c65670, local_20, *(undefined4 * )(param_1 + 0x95c));
    // WARNING: Could not recover jumptable at 0x00014025ac7f. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(*DAT_140c65670 + 0x250))(DAT_140c65670, param_1 + 0x918);
    return;
}


void FUN_14025ac90(longlong param_1) {
    (**(code * *)(*DAT_140c65670 + 0x120))();
    (**(code * *)(*DAT_140c65670 + 0x1c0))(DAT_140c65670, *(undefined4 * )(param_1 + 0x958));
    (**(code * *)(*DAT_140c65670 + 0x198))(DAT_140c65670, *(undefined4 * )(param_1 + 0x95c));
    (**(code * *)(*DAT_140c65670 + 400))(DAT_140c65670, *(undefined4 * )(param_1 + 0x960));
    (**(code * *)(*DAT_140c65670 + 0x1a0))(DAT_140c65670, *(undefined4 * )(param_1 + 0x964), 0);
    (**(code * *)(*DAT_140c65670 + 0x1a8))
            (DAT_140c65670, *(undefined4 * )(param_1 + 0x968), *(undefined4 * )(param_1 + 0x96c),
             *(undefined4 * )(param_1 + 0x970));
    (**(code * *)(*DAT_140c65670 + 0x1b0))
            (DAT_140c65670, *(undefined4 * )(param_1 + 0x974), *(undefined4 * )(param_1 + 0x978),
             *(undefined4 * )(param_1 + 0x97c), *(undefined4 * )(param_1 + 0x980));
    return;
}


undefined8 FUN_14025ad60(longlong param_1, byte param_2, byte param_3) {
    if (*(int *) (param_1 + 0x30) != 0) {
        return 0x80004005;
    }
    (**(code * *)(*DAT_140c65670 + 0x1a8))
            (DAT_140c65670, *(uint * )(param_1 + 0x968) | (uint)
    param_2,
            *(undefined4 * )(param_1 + 0x96c), *(uint * )(param_1 + 0x970) | (uint)
    param_3);
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14025d7f0(longlong param_1, longlong param_2, float *param_3) {
    int iVar1;
    int iVar2;
    float fVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    undefined4 uVar13;
    undefined4 uVar14;
    undefined4 uVar15;
    undefined4 uVar16;
    undefined4 uVar17;
    undefined4 uVar18;
    undefined4 uVar19;
    undefined4 uVar20;
    undefined4 uVar21;
    undefined4 uVar22;
    undefined4 uVar23;
    int *piVar24;
    undefined4 *puVar25;
    int iVar26;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    float extraout_XMM0_Da_02;
    float extraout_XMM0_Da_03;
    float extraout_XMM0_Da_04;
    float extraout_XMM0_Da_05;
    float extraout_XMM0_Da_06;
    undefined8 extraout_XMM0_Qa;
    undefined8 extraout_XMM0_Qa_00;
    float fVar27;
    undefined8 uVar28;
    undefined auVar29[16];
    uint uVar30;
    float fVar31;
    float fVar32;
    float fVar33;
    float fVar34;
    float fVar35;
    float fVar36;
    float fVar37;
    uint uVar38;
    float fVar39;
    float fVar40;
    float fVar41;
    undefined4 uVar42;
    float fVar43;
    undefined auStack712[32];
    undefined8 local_2a8;
    float local_298;
    float local_294;
    uint local_290;
    undefined4 local_28c;
    float local_288;
    float local_284;
    uint local_280;
    undefined4 local_27c;
    float local_278;
    float local_274;
    uint local_270;
    undefined4 local_26c;
    float local_268;
    float local_264;
    uint local_260;
    undefined4 local_25c;
    float *local_258;
    undefined * local_250;
    int local_248;
    undefined local_238[16];
    longlong local_228;
    longlong lStack544;
    undefined4 local_218;
    undefined4 uStack532;
    undefined4 uStack528;
    undefined4 uStack524;
    undefined local_208[16];
    undefined local_1f8[16];
    undefined local_1e8[16];
    undefined4 local_1d8;
    undefined4 uStack468;
    undefined4 uStack464;
    undefined4 uStack460;
    undefined local_1c8[16];
    float *local_1b8;
    undefined * local_1b0;
    float *local_168[2];
    float local_158[16];
    float *local_118[2];
    float local_108[16];
    ulonglong local_c8;

    local_c8 = DAT_140c0f7b0 ^ (ulonglong)
    auStack712;
    fVar36 = 0.0;
    fVar37 = *(float *) (param_1 + 0x14c);
    iVar2 = *(int *) (param_1 + 0x30);
    local_248 = *(int *) (&DAT_140b60438 + (longlong) * (int *) (param_2 + 0x48) * 4);
    iVar26 = 0;
    if ((*(longlong * *)(param_2 + 0xa0) != (longlong *) 0x0) &&
        (iVar26 = 0, *(longlong * )(param_2 + 0xa8) != 0)) {
        piVar24 = (int *) (**(code * *)(**(longlong * *)(param_2 + 0xa0) + 0x18))();
        iVar1 = *piVar24;
        piVar24 = (int *) (**(code * *)(**(longlong * *)(param_2 + 0xa8) + 0x18))();
        iVar26 = 0;
        if (iVar1 == *piVar24) {
            if (iVar1 == 0) {
                iVar26 = 2;
            } else {
                iVar26 = 0;
                if (iVar1 == 2) {
                    iVar26 = 1;
                }
            }
        }
    }
    (**(code * *)(*DAT_140c65670 + 0x178))
            (DAT_140c65670, *(undefined8 * )(param_1 + 0x880),
             iVar26 * 2 + (local_248 + (uint)(fVar37 == 0.0) * 5) * 6 + (uint)(iVar2 == 0x11));
    local_2a8 = (ulonglong)
    local_2a8._4_4_ << 0x20;
    puVar25 = (undefined4 * )(**(code * *)(*DAT_140c65670 + 0x110))(DAT_140c65670, 0x160, 0, 0);
    if (puVar25 == (undefined4 *) 0x0) goto LAB_14025e3f2;
    uVar4 = *(undefined4 * )(param_1 + 0x224);
    uVar5 = *(undefined4 * )(param_1 + 0x228);
    uVar6 = *(undefined4 * )(param_1 + 0x22c);
    fVar35 = -1.0;
    *puVar25 = *(undefined4 * )(param_1 + 0x220);
    puVar25[1] = uVar4;
    puVar25[2] = uVar5;
    puVar25[3] = uVar6;
    uVar4 = *(undefined4 * )(param_1 + 0x234);
    uVar5 = *(undefined4 * )(param_1 + 0x238);
    uVar6 = *(undefined4 * )(param_1 + 0x23c);
    puVar25[4] = *(undefined4 * )(param_1 + 0x230);
    puVar25[5] = uVar4;
    puVar25[6] = uVar5;
    puVar25[7] = uVar6;
    uVar4 = *(undefined4 * )(param_1 + 0x254);
    uVar5 = *(undefined4 * )(param_1 + 600);
    uVar6 = *(undefined4 * )(param_1 + 0x25c);
    fVar41 = 1.0;
    uVar42 = 0;
    puVar25[8] = *(undefined4 * )(param_1 + 0x250);
    puVar25[9] = uVar4;
    puVar25[10] = uVar5;
    puVar25[0xb] = uVar6;
    uVar13 = *(undefined4 * )(param_1 + 0x724);
    uVar14 = *(undefined4 * )(param_1 + 0x728);
    uVar15 = *(undefined4 * )(param_1 + 0x72c);
    uVar16 = *(undefined4 * )(param_1 + 0x730);
    uVar17 = *(undefined4 * )(param_1 + 0x734);
    uVar18 = *(undefined4 * )(param_1 + 0x738);
    uVar19 = *(undefined4 * )(param_1 + 0x73c);
    uVar20 = *(undefined4 * )(param_1 + 0x750);
    uVar21 = *(undefined4 * )(param_1 + 0x754);
    uVar22 = *(undefined4 * )(param_1 + 0x758);
    uVar23 = *(undefined4 * )(param_1 + 0x75c);
    uVar4 = *(undefined4 * )(param_1 + 0x760);
    uVar5 = *(undefined4 * )(param_1 + 0x764);
    uVar6 = *(undefined4 * )(param_1 + 0x768);
    uVar7 = *(undefined4 * )(param_1 + 0x76c);
    puVar25[0xc] = *(undefined4 * )(param_1 + 0x720);
    puVar25[0xd] = uVar13;
    puVar25[0xe] = uVar14;
    puVar25[0xf] = uVar15;
    puVar25[0x10] = uVar16;
    puVar25[0x11] = uVar17;
    puVar25[0x12] = uVar18;
    puVar25[0x13] = uVar19;
    puVar25[0x14] = uVar20;
    puVar25[0x15] = uVar21;
    puVar25[0x16] = uVar22;
    puVar25[0x17] = uVar23;
    puVar25[0x18] = uVar4;
    puVar25[0x19] = uVar5;
    puVar25[0x1a] = uVar6;
    puVar25[0x1b] = uVar7;
    fVar37 = param_3[8];
    fVar39 = param_3[9];
    fVar40 = param_3[10];
    fVar27 = param_3[0xb];
    fVar3 = param_3[1];
    fVar8 = param_3[2];
    fVar9 = param_3[3];
    fVar43 = 1.0 / SQRT(fVar37 * fVar37 + fVar39 * fVar39 + fVar40 * fVar40);
    fVar37 = fVar37 * fVar43;
    fVar39 = fVar39 * fVar43;
    fVar40 = fVar40 * fVar43;
    puVar25[0x24] = *param_3 * fVar43;
    puVar25[0x25] = fVar3 * fVar43;
    puVar25[0x26] = fVar8 * fVar43;
    puVar25[0x27] = fVar9 * fVar43;
    fVar3 = param_3[5];
    fVar8 = param_3[6];
    fVar9 = param_3[7];
    puVar25[0x28] = param_3[4] * fVar43;
    puVar25[0x29] = fVar3 * fVar43;
    puVar25[0x2a] = fVar8 * fVar43;
    puVar25[0x2b] = fVar9 * fVar43;
    *(undefined(*)[16])(puVar25 + 0x2c) =
            CONCAT412(fVar27 * fVar43, CONCAT48(fVar40, CONCAT44(fVar39, fVar37)));
    iVar2 = *(int *) (param_2 + 0x48);
    if (iVar2 == 0) {
        puVar25[0x1c] = param_3[0xc];
        puVar25[0x1d] = param_3[0xd];
        puVar25[0x1e] = param_3[0xe];
        LAB_14025db55:
        auVar29 = ZEXT416((uint)(0.0 - fVar37)) & (undefined[16])
        0xffffffffffffffff;
        puVar25[0x20] = SUB164(auVar29, 0);
        puVar25[0x21] = 0.0 - fVar39;
        puVar25[0x22] = SUB164(auVar29 >> 0x40, 0) - fVar40;
        puVar25[0x23] = 0x3f800000;
    } else if (0 < iVar2) {
        if (iVar2 < 3) {
            fVar27 = *(float *) (param_2 + 0x40);
            fVar3 = param_3[9];
            fVar8 = param_3[10];
            fVar9 = param_3[0xd];
            fVar10 = param_3[0xe];
            puVar25[0x1c] = param_3[0xc] + param_3[8] * fVar27;
            puVar25[0x1d] = fVar9 + fVar3 * fVar27;
            puVar25[0x1e] = fVar10 + fVar8 * fVar27;
            goto LAB_14025db55;
        }
        if (iVar2 < 5) {
            FUN_1408fd8a4();
            fVar31 = extraout_XMM0_Da * param_3[4];
            fVar32 = extraout_XMM0_Da * param_3[5];
            fVar33 = extraout_XMM0_Da * param_3[6];
            fVar34 = extraout_XMM0_Da * param_3[7];
            FUN_1408fd8a4();
            fVar27 = param_3[9];
            fVar3 = param_3[10];
            fVar8 = param_3[0xb];
            auVar29 = ZEXT416((uint)(0.0 - param_3[8])) & (undefined[16])
            0xffffffffffffffff;
            fVar9 = *param_3;
            fVar10 = param_3[1];
            fVar11 = param_3[2];
            fVar12 = param_3[3];
            puVar25[0x1c] = param_3[0xc];
            puVar25[0x1d] = param_3[0xd];
            puVar25[0x1e] = param_3[0xe];
            fVar31 = fVar31 + extraout_XMM0_Da_00 * fVar9 + SUB164(auVar29, 0);
            fVar32 = fVar32 + extraout_XMM0_Da_00 * fVar10 + (0.0 - fVar27);
            fVar33 = fVar33 + extraout_XMM0_Da_00 * fVar11 + (SUB164(auVar29 >> 0x40, 0) - fVar3);
            fVar34 = fVar34 + extraout_XMM0_Da_00 * fVar12 + (SUB164(auVar29 >> 0x60, 0) - fVar8);
            auVar29 = CONCAT124(SUB1612(CONCAT412(fVar34 * fVar34,
                                                  CONCAT48(fVar33 * fVar33,
                                                           CONCAT44(fVar32 * fVar32, fVar31 * fVar31))) >>
                                                                                                        0x20, 0),
                                fVar31 * fVar31 + fVar32 * fVar32 + fVar33 * fVar33);
            auVar29 = rsqrtss(auVar29, auVar29);
            fVar27 = SUB164(auVar29, 0);
            puVar25[0x20] = fVar27 * fVar31;
            puVar25[0x21] = fVar27 * fVar32;
            puVar25[0x22] = fVar27 * fVar33;
            puVar25[0x23] =
                    fVar35 / (fVar27 * fVar31 * fVar37 + fVar27 * fVar32 * fVar39 + fVar27 * fVar33 * fVar40);
        }
    }
    uVar4 = *(undefined4 * )(param_2 + 0x54);
    uVar5 = *(undefined4 * )(param_2 + 0x58);
    uVar6 = *(undefined4 * )(param_2 + 0x5c);
    uVar38 = 0x80000000;
    fVar39 = -0.001;
    puVar25[0x30] = *(undefined4 * )(param_2 + 0x50);
    puVar25[0x31] = uVar4;
    puVar25[0x32] = uVar5;
    puVar25[0x33] = uVar6;
    uVar4 = *(undefined4 * )(param_2 + 100);
    uVar5 = *(undefined4 * )(param_2 + 0x68);
    uVar6 = *(undefined4 * )(param_2 + 0x6c);
    fVar37 = 0.001;
    puVar25[0x34] = *(undefined4 * )(param_2 + 0x60);
    puVar25[0x35] = uVar4;
    puVar25[0x36] = uVar5;
    puVar25[0x37] = uVar6;
    uVar4 = *(undefined4 * )(param_2 + 0x74);
    uVar5 = *(undefined4 * )(param_2 + 0x78);
    uVar6 = *(undefined4 * )(param_2 + 0x7c);
    puVar25[0x38] = *(undefined4 * )(param_2 + 0x70);
    puVar25[0x39] = uVar4;
    puVar25[0x3a] = uVar5;
    puVar25[0x3b] = uVar6;
    puVar25[0x1f] = *(undefined4 * )(param_2 + 0x4c);
    iVar2 = *(int *) (param_2 + 0x48);
    if (iVar2 == 1) {
        FUN_1408fc950();
        fVar40 = extraout_XMM0_Da_04;
        FUN_1408fc950();
        if ((extraout_XMM0_Da_05 == fVar36) && (fVar40 == fVar36)) {
            puVar25[0x3c] = 0;
            puVar25[0x3d] = 0x3f800000;
        } else {
            fVar27 = extraout_XMM0_Da_05 - fVar40;
            if (extraout_XMM0_Da_05 - fVar40 <= fVar37) {
                fVar27 = fVar37;
            }
            puVar25[0x3c] = fVar41 / fVar27;
            puVar25[0x3d] = (uint)(fVar40 * (fVar41 / fVar27)) ^ uVar38;
        }
    } else if (iVar2 == 2) {
        FUN_1408fc950();
        fVar40 = extraout_XMM0_Da_01;
        fVar27 = 0.0;
        FUN_1408fc950();
        if ((fVar27 == fVar36) && (fVar40 == fVar36)) {
            puVar25[0x3c] = 0;
            puVar25[0x3d] = 0x3f800000;
        } else {
            fVar3 = fVar27 - fVar40;
            if (fVar27 - fVar40 <= fVar37) {
                fVar3 = fVar37;
            }
            puVar25[0x3c] = fVar41 / fVar3;
            puVar25[0x3d] = (uint)(fVar40 * (fVar41 / fVar3)) ^ uVar38;
        }
        FUN_1408fc950();
        fVar40 = extraout_XMM0_Da_02;
        FUN_1408fc950();
        if ((extraout_XMM0_Da_03 == fVar36) && (fVar40 == fVar36)) {
            puVar25[0x3e] = 0;
            puVar25[0x3f] = 0x3f800000;
        } else {
            fVar27 = extraout_XMM0_Da_03 - fVar40;
            if (extraout_XMM0_Da_03 - fVar40 <= fVar37) {
                fVar27 = fVar37;
            }
            puVar25[0x3e] = fVar41 / fVar27;
            puVar25[0x3f] = (uint)(fVar40 * (fVar41 / fVar27)) ^ uVar38;
        }
    } else if (iVar2 == 3) {
        fVar40 = *(float *) (param_2 + 0x84);
        if ((*(float *) (param_2 + 0x80) == fVar36) && (fVar40 == fVar36)) {
            *(undefined8 * )(puVar25 + 0x3c) = 0;
        } else {
            auVar29 = ZEXT416((uint)(*(float *) (param_2 + 0x80) - fVar40)) &
                      (undefined[16])
            0xffffffffffffffff;
            if (-0.001 <= SUB164(auVar29, 0)) {
                auVar29 = CONCAT124(SUB1612(auVar29 >> 0x20, 0), 0xba83126f);
            }
            fVar27 = fVar41 / SUB164(auVar29, 0);
            puVar25[0x3c] = fVar27 * fVar43;
            puVar25[0x3d] = (uint)(fVar40 * fVar27) ^ 0x80000000;
        }
    } else if (iVar2 == 4) {
        fVar40 = *(float *) (param_2 + 0x84);
        if ((*(float *) (param_2 + 0x80) == fVar36) && (fVar40 == fVar36)) {
            *(undefined8 * )(puVar25 + 0x3c) = 0;
        } else {
            auVar29 = ZEXT416((uint)(*(float *) (param_2 + 0x80) - fVar40)) &
                      (undefined[16])
            0xffffffffffffffff;
            if (-0.001 <= SUB164(auVar29, 0)) {
                auVar29 = CONCAT124(SUB1612(auVar29 >> 0x20, 0), 0xba83126f);
            }
            fVar27 = fVar41 / SUB164(auVar29, 0);
            puVar25[0x3c] = fVar27 * fVar43;
            puVar25[0x3d] = (uint)(fVar40 * fVar27) ^ 0x80000000;
        }
        fVar40 = *(float *) (param_2 + 0x8c);
        if ((*(float *) (param_2 + 0x88) == fVar36) && (fVar40 == fVar36)) {
            *(undefined8 * )(puVar25 + 0x3e) = 0;
        } else {
            auVar29 = ZEXT416((uint)(*(float *) (param_2 + 0x88) - fVar40)) &
                      (undefined[16])
            0xffffffffffffffff;
            if (-0.001 <= SUB164(auVar29, 0)) {
                auVar29 = CONCAT124(SUB1612(auVar29 >> 0x20, 0), 0xba83126f);
            }
            fVar27 = fVar41 / SUB164(auVar29, 0);
            puVar25[0x3e] = fVar27 * fVar43;
            puVar25[0x3f] = (uint)(fVar40 * fVar27) ^ 0x80000000;
        }
    }
    fVar40 = *(float *) (param_2 + 0x90);
    if ((*(float *) (param_2 + 0x94) == fVar36) && (fVar40 == fVar36)) {
        puVar25[0x40] = 0;
        puVar25[0x41] = 0x3f800000;
    } else {
        auVar29 = ZEXT416((uint)(*(float *) (param_2 + 0x94) - fVar40)) &
                  (undefined[16])
        0xffffffffffffffff;
        if (SUB164(auVar29, 0) <= fVar37) {
            auVar29 = CONCAT124(SUB1612(auVar29 >> 0x20, 0), fVar37);
        }
        fVar27 = fVar41 / SUB164(auVar29, 0);
        puVar25[0x40] = fVar27 * fVar43;
        puVar25[0x41] = (uint)(fVar40 * fVar27) ^ uVar38;
    }
    fVar40 = *(float *) (param_2 + 0x9c);
    if ((*(float *) (param_2 + 0x98) == fVar36) && (fVar40 == fVar36)) {
        *(undefined8 * )(puVar25 + 0x42) = 0;
        uVar42 = 0;
    } else {
        auVar29 = ZEXT416((uint)(*(float *) (param_2 + 0x98) - fVar40)) &
                  (undefined[16])
        0xffffffffffffffff;
        if (fVar39 <= SUB164(auVar29, 0)) {
            auVar29 = CONCAT124(SUB1612(auVar29 >> 0x20, 0), fVar39);
        }
        fVar39 = fVar41 / SUB164(auVar29, 0);
        puVar25[0x42] = fVar39 * fVar43;
        puVar25[0x43] = (uint)(fVar40 * fVar39) ^ uVar38;
    }
    if (iVar26 != 0) {
        if (iVar26 == 1) {
            if (*(uint * )(param_2 + 0x48) < 3) {
                local_1b8 = param_3;
                FUN_1401afc20(&local_1b8, &local_298);
                puVar25[0x48] = local_298;
                puVar25[0x4c] = local_294;
                puVar25[0x50] = local_290 ^ uVar38;
                puVar25[0x49] = local_288;
                puVar25[0x4d] = local_284;
                puVar25[0x51] = local_280 ^ uVar38;
                puVar25[0x4a] = local_278;
                puVar25[0x4e] = local_274;
                uVar42 = 0;
                puVar25[0x52] = local_270 ^ uVar38;
                puVar25[0x4b] = local_268;
                puVar25[0x4f] = local_264;
                puVar25[0x53] = local_260 ^ uVar38;
            }
        } else if (iVar26 == 2) {
            iVar2 = *(int *) (param_2 + 0x48);
            if (iVar2 == 1) {
                FUN_1408fd8a4();
                fVar39 = fVar41 / (float) extraout_XMM0_Qa_00;
                uVar28 = CONCAT44(fVar36, fVar39);
                uVar30 = (uint)
                fVar39 ^ uVar38;
                local_1f8 = CONCAT88(SUB168(CONCAT412((int) ((ulonglong)
                extraout_XMM0_Qa_00 >> 0x20),
                CONCAT48(fVar36, uVar28)) >> 0x40, 0),uVar28) &
                        (undefined[16])
                0xffffffffffffffff;
                local_1e8 = ZEXT1216(CONCAT84(CONCAT44(fVar36, uVar30), uVar30)) << 0x20 &
                            (undefined[16])
                0xffffffffffffffff;
                local_1c8 = ZEXT816(0);
                local_1d8 = 0;
                uStack468 = 0;
                uStack464 = 0x3f800000;
                uStack460 = 0xbf800000;
                local_118[0] = param_3;
                FUN_1401afc20(local_118, local_108);
                local_258 = local_108;
                local_250 = local_1f8;
            } else {
                if (iVar2 != 2) {
                    if (iVar2 == 3) {
                        fVar39 = fVar41 / *(float *) (param_2 + 0x84);
                        fVar35 = (float) ((uint)
                        fVar39 ^ uVar38);
                    } else {
                        if (iVar2 != 4) goto LAB_14025e2d8;
                        fVar35 = fVar35 / *(float *) (param_2 + 0x8c);
                        fVar39 = fVar41 / *(float *) (param_2 + 0x84);
                    }
                    local_1b8 = param_3;
                    FUN_1401afc20(&local_1b8, &local_298);
                    puVar25[0x48] = local_298 * fVar39;
                    puVar25[0x4c] = local_294 * fVar35;
                    puVar25[0x49] = local_288 * fVar39;
                    puVar25[0x4d] = local_284 * fVar35;
                    puVar25[0x4a] = local_278 * fVar39;
                    puVar25[0x4e] = local_274 * fVar35;
                    uVar42 = 0;
                    puVar25[0x4b] = local_268 * fVar39;
                    puVar25[0x4f] = local_264 * fVar35;
                    goto LAB_14025e2d8;
                }
                FUN_1408fd8a4();
                local_238 = CONCAT412((int) ((ulonglong)
                extraout_XMM0_Qa >> 0x20),
                CONCAT48(fVar36, (ulonglong)(uint)(fVar41 / (float) extraout_XMM0_Qa)))
                &(undefined[16])
                0xffffffffffffffff;
                FUN_1408fd8a4();
                lStack544 = (ulonglong)(uint)
                fVar36 << 0x20;
                local_228 = (ulonglong)((uint)(fVar41 / extraout_XMM0_Da_06) ^ uVar38) << 0x20;
                local_208 = ZEXT816(0);
                local_218 = 0;
                uStack532 = 0;
                uStack528 = 0x3f800000;
                uStack524 = 0xbf800000;
                local_168[0] = param_3;
                FUN_1401afc20(local_168, local_158);
                local_258 = local_158;
                local_250 = local_238;
            }
            local_1b8 = local_258;
            local_1b0 = local_250;
            FUN_1401afb10(&local_1b8, &local_298);
            puVar25[0x48] = local_298;
            puVar25[0x4c] = local_294;
            puVar25[0x50] = local_28c;
            puVar25[0x49] = local_288;
            puVar25[0x4d] = local_284;
            puVar25[0x51] = local_27c;
            puVar25[0x4a] = local_278;
            puVar25[0x4e] = local_274;
            puVar25[0x52] = local_26c;
            puVar25[0x4b] = local_268;
            uVar42 = 0;
            puVar25[0x4f] = local_264;
            puVar25[0x53] = local_25c;
        }
        LAB_14025e2d8:
        local_2a8 = 0;
        (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 6, *(undefined8 * )(param_2 + 0xa0));
        local_2a8 = 0;
        (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 7, *(undefined8 * )(param_2 + 0xa8));
        fVar39 = *(float *) (param_2 + 0x90);
        if ((*(float *) (param_2 + 0x9c) == fVar36) && (fVar39 == fVar36)) {
            puVar25[0x44] = 0;
            puVar25[0x45] = 0x3f800000;
        } else {
            fVar40 = *(float *) (param_2 + 0x9c) - fVar39;
            if (fVar40 <= fVar37) {
                fVar40 = fVar37;
            }
            uVar42 = 0;
            puVar25[0x44] = (fVar41 / fVar40) * fVar43;
            puVar25[0x45] = (uint)(fVar39 * (fVar41 / fVar40)) ^ uVar38;
        }
    }
    uVar28 = CONCAT44(fVar36, (float) (ulonglong) * (uint * )(param_1 + 0x984));
    *(undefined(*)[16])(puVar25 + 0x54) =
            CONCAT88(SUB168(CONCAT412(uVar42, CONCAT48(fVar36, uVar28)) >> 0x40, 0), uVar28) &
            (undefined[16])
    0xffffffffffffffff;
    *(undefined8 * )(puVar25 + 0x46) = 0x3f800000;
    (**(code * *)(*DAT_140c65670 + 0x118))();
    LAB_14025e3f2:
    FUN_1407db4f0(local_c8 ^ (ulonglong)
    auStack712);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14025e420(longlong param_1) {
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    int iVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    undefined4 uVar10;
    undefined4 uVar11;
    undefined4 uVar12;
    undefined4 uVar13;
    undefined4 uVar14;
    undefined4 uVar15;
    undefined4 uVar16;
    undefined4 uVar17;
    undefined4 uVar18;
    undefined4 uVar19;
    undefined4 uVar20;
    undefined4 uVar21;
    undefined4 uVar22;
    undefined4 uVar23;
    undefined4 uVar24;
    uint uVar25;
    undefined auVar26[12];
    undefined8 uVar27;
    undefined4 *puVar28;
    undefined auVar29[16];
    float fVar30;
    float fVar31;
    float fVar32;
    ulonglong uVar33;

    (**(code * *)(*DAT_140c65670 + 0x1c8))(DAT_140c65670, 1, 1, 0, 1, 0, 0);
    (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 0, *(undefined8 * )(param_1 + 0x688), 0, 0);
    (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 1, *(undefined8 * )(param_1 + 0x690), 0, 0);
    (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 2, *(undefined8 * )(param_1 + 0x698), 0, 0);
    iVar4 = *(int *) (param_1 + 0x30);
    if ((iVar4 == 8) || (iVar4 == 0xc)) {
        (**(code * *)(*DAT_140c65670 + 0x160))
                (DAT_140c65670, 3, *(undefined8 * )(param_1 + 0x6b8), 0, *(undefined8 * )(param_1 + 0x808));
    } else if (iVar4 == 0x11) {
        (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 3, *(undefined8 * )(param_1 + 0x6a8), 0, 0);
    }
    (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 4, *(undefined8 * )(param_1 + 0x6f0), 0, 0);
    (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 5, *(undefined8 * )(param_1 + 0x6f8), 0, 0);
    uVar33 = 0;
    (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 6, *(undefined8 * )(param_1 + 0x700), 0, 0);
    if (*(int *) (param_1 + 0x30) == 0x11) {
        uVar33 = 0;
        (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 8, *(undefined8 * )(param_1 + 0x670), 0, 0);
    }
    puVar28 = (undefined4 * )
            (**(code * *)(*DAT_140c65670 + 0x110))
            (DAT_140c65670, 0x110, 0, 0, uVar33 & 0xffffffff00000000);
    if (puVar28 != (undefined4 *) 0x0) {
        uVar1 = *(undefined4 * )(param_1 + 0x224);
        uVar2 = *(undefined4 * )(param_1 + 0x228);
        uVar3 = *(undefined4 * )(param_1 + 0x22c);
        *puVar28 = *(undefined4 * )(param_1 + 0x220);
        puVar28[1] = uVar1;
        puVar28[2] = uVar2;
        puVar28[3] = uVar3;
        uVar1 = *(undefined4 * )(param_1 + 0x234);
        uVar2 = *(undefined4 * )(param_1 + 0x238);
        uVar3 = *(undefined4 * )(param_1 + 0x23c);
        puVar28[4] = *(undefined4 * )(param_1 + 0x230);
        puVar28[5] = uVar1;
        puVar28[6] = uVar2;
        puVar28[7] = uVar3;
        uVar1 = *(undefined4 * )(param_1 + 0x254);
        uVar2 = *(undefined4 * )(param_1 + 600);
        uVar3 = *(undefined4 * )(param_1 + 0x25c);
        puVar28[8] = *(undefined4 * )(param_1 + 0x250);
        puVar28[9] = uVar1;
        puVar28[10] = uVar2;
        puVar28[0xb] = uVar3;
        uVar3 = uRam0000000140c7852c;
        uVar2 = uRam0000000140c78528;
        uVar1 = uRam0000000140c78524;
        puVar28[0xc] = _DAT_140c78520;
        puVar28[0xd] = uVar1;
        puVar28[0xe] = uVar2;
        puVar28[0xf] = uVar3;
        uVar1 = *(undefined4 * )(param_1 + 0x724);
        uVar2 = *(undefined4 * )(param_1 + 0x728);
        uVar3 = *(undefined4 * )(param_1 + 0x72c);
        uVar5 = *(undefined4 * )(param_1 + 0x730);
        uVar6 = *(undefined4 * )(param_1 + 0x734);
        uVar7 = *(undefined4 * )(param_1 + 0x738);
        uVar8 = *(undefined4 * )(param_1 + 0x73c);
        uVar9 = *(undefined4 * )(param_1 + 0x750);
        uVar10 = *(undefined4 * )(param_1 + 0x754);
        uVar11 = *(undefined4 * )(param_1 + 0x758);
        uVar12 = *(undefined4 * )(param_1 + 0x75c);
        uVar13 = *(undefined4 * )(param_1 + 0x760);
        uVar14 = *(undefined4 * )(param_1 + 0x764);
        uVar15 = *(undefined4 * )(param_1 + 0x768);
        uVar16 = *(undefined4 * )(param_1 + 0x76c);
        uVar17 = *(undefined4 * )(param_1 + 0x780);
        uVar18 = *(undefined4 * )(param_1 + 0x784);
        uVar19 = *(undefined4 * )(param_1 + 0x788);
        uVar20 = *(undefined4 * )(param_1 + 0x78c);
        uVar21 = *(undefined4 * )(param_1 + 0x770);
        uVar22 = *(undefined4 * )(param_1 + 0x774);
        uVar23 = *(undefined4 * )(param_1 + 0x778);
        uVar24 = *(undefined4 * )(param_1 + 0x77c);
        puVar28[0x10] = *(undefined4 * )(param_1 + 0x720);
        puVar28[0x11] = uVar1;
        puVar28[0x12] = uVar2;
        puVar28[0x13] = uVar3;
        puVar28[0x14] = uVar5;
        puVar28[0x15] = uVar6;
        puVar28[0x16] = uVar7;
        puVar28[0x17] = uVar8;
        puVar28[0x18] = uVar9;
        puVar28[0x19] = uVar10;
        puVar28[0x1a] = uVar11;
        puVar28[0x1b] = uVar12;
        puVar28[0x1c] = uVar13;
        puVar28[0x1d] = uVar14;
        puVar28[0x1e] = uVar15;
        puVar28[0x1f] = uVar16;
        puVar28[0x20] = uVar21;
        puVar28[0x21] = uVar22;
        puVar28[0x22] = uVar23;
        puVar28[0x23] = uVar24;
        puVar28[0x24] = uVar17;
        puVar28[0x25] = uVar18;
        puVar28[0x26] = uVar19;
        puVar28[0x27] = uVar20;
        uVar5 = *(undefined4 * )(param_1 + 0xec);
        uVar25 = *(uint * )(param_1 + 0xf4);
        uVar6 = *(undefined4 * )(param_1 + 0x114);
        auVar26 = *(undefined(*)[12]) * (undefined(*)[16])(param_1 + 0xe0);
        auVar29 = *(undefined(*)[16])(param_1 + 0xe0) ^ (undefined[16])
        0x80000000;
        uVar1 = *(undefined4 * )(param_1 + 0xf8);
        uVar2 = *(undefined4 * )(param_1 + 0x118);
        uVar3 = *(undefined4 * )(param_1 + 0x108);
        uVar33 = SUB168(auVar29, 0);
        *(undefined(*)[16])(puVar28 + 0x28) =
                CONCAT412(*(undefined4 * )(param_1 + 0x110),
                          CONCAT48(*(undefined4 * )(param_1 + 0x100),
                                   uVar33 & 0xffffffff | (ulonglong) * (uint * )(param_1 + 0xf0) << 0x20));
        *(undefined(*)[16])(puVar28 + 0x2c) =
                CONCAT412(uVar6, ZEXT812(SUB168(CONCAT412(uVar5, CONCAT48(SUB164(auVar29 >> 0x20, 0), uVar33))
                                                        >> 0x40, 0) & 0xffffffff | (ulonglong)
        uVar25 << 0x20));
        *(undefined(*)[16])(puVar28 + 0x30) =
                CONCAT412(uVar2, CONCAT48(uVar3, CONCAT44(uVar1, SUB124(auVar26 >> 0x40, 0))));
        fVar30 = *(float *) (param_1 + 0xb0) * 0.7071068 + *(float *) (param_1 + 0xa0) * -0.5 +
                 *(float *) (param_1 + 0xc0) * 0.0;
        fVar32 = *(float *) (param_1 + 0xb4) * 0.7071068 + *(float *) (param_1 + 0xa4) * -0.5 +
                 *(float *) (param_1 + 0xc4) * 0.0;
        *(undefined(*)[16])(puVar28 + 0x38) =
                CONCAT412(*(float *) (param_1 + 0xbc) * 0.7071068 + *(float *) (param_1 + 0xac) * -0.5 +
                          *(float *) (param_1 + 0xcc) * 0.0,
                          CONCAT48(*(float *) (param_1 + 0xb8) * 0.7071068 +
                                   *(float *) (param_1 + 0xa8) * -0.5 + *(float *) (param_1 + 200) * 0.0,
                                   CONCAT44(fVar32, fVar30)));
        uVar27 = *(undefined8 * ) * (undefined(*)[12])(param_1 + 0xb0);
        iVar4 = DAT_140c403b0;
        if (*DAT_140c63750 < DAT_140c403b0) {
            iVar4 = *DAT_140c63750;
        }
        fVar30 = fVar32 * (float) ((ulonglong)
        uVar27 >> 0x20) +fVar30 * (float) uVar27 + 0.0;
        auVar29 = divps(CONCAT412(*(undefined4 * )(&DAT_140c403c0 + (longlong) iVar4 * 4),
                                  *(undefined(*)[12])(param_1 + 0xb0)) ^
                        (undefined[16])
        0x8000000000000000,
                CONCAT412(fVar30, CONCAT48(fVar30, CONCAT44(fVar30, fVar30))));
        *(undefined(*)[16])(puVar28 + 0x34) = auVar29;
        fVar31 = (*(float *) (param_1 + 0x6e0) * 0.5) / (float) *(int *) (param_1 + 0x6c8);
        fVar32 = (*(float *) (param_1 + 0x6e4) * 0.5) / (float) *(int *) (param_1 + 0x6cc);
        fVar30 = *(float *) (param_1 + 0x134);
        puVar28[0x3c] = (uint)(fVar31 * *(float *) (param_1 + 0x120)) ^ 0x80000000;
        puVar28[0x3d] = fVar32 * fVar30;
        puVar28[0x3e] = fVar31;
        puVar28[0x3f] = fVar32;
        *(undefined(*)[16])(puVar28 + 0x40) =
                ZEXT1216(ZEXT412((uint)(float)(ulonglong) * (uint * )(param_1 + 0x984)) &
                         (undefined[12])
        0xffffffff) &(undefined[16])
        0xffffffffffffffff;
        (**(code * *)(*DAT_140c65670 + 0x118))();
    }
    return;
}


void FUN_14025e8c0(longlong param_1, longlong param_2) {
    undefined4 uVar1;
    uint uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    longlong lVar7;
    longlong lVar8;
    float fVar9;
    ulonglong uVar10;

    lVar7 = *(longlong * )(param_2 + 0x2f8);
    if (lVar7 == 0) {
        lVar7 = *(longlong * )(param_1 + 0x718);
    }
    (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 7, lVar7, 0, 0);
    uVar10 = 0;
    (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 9, *(undefined8 * )(param_2 + 0x308), 0, 0);
    lVar7 = (**(code * *)(*DAT_140c65670 + 0x110))
            (DAT_140c65670, 0xf0, 1, 0x11, uVar10 & 0xffffffff00000000);
    if (lVar7 != 0) {
        lVar8 = lVar7;
        FUN_140262d50();
        uVar1 = *(undefined4 * )(param_2 + 0xb4);
        uVar3 = *(undefined4 * )(param_2 + 0xb8);
        uVar4 = *(undefined4 * )(param_2 + 0xbc);
        *(undefined4 * )(lVar8 + 0x70) = *(undefined4 * )(param_2 + 0xb0);
        *(undefined4 * )(lVar8 + 0x74) = uVar1;
        *(undefined4 * )(lVar8 + 0x78) = uVar3;
        *(undefined4 * )(lVar8 + 0x7c) = uVar4;
        *(undefined4 * )(lVar8 + 0x80) = *(undefined4 * )(param_2 + 0x90);
        *(undefined4 * )(lVar8 + 0x84) = *(undefined4 * )(param_2 + 0x94);
        *(undefined4 * )(lVar8 + 0x88) = *(undefined4 * )(param_2 + 0x98);
        *(undefined4 * )(lVar8 + 0x8c) = *(undefined4 * )(param_2 + 0x2b4);
        *(undefined4 * )(lVar8 + 0x90) = *(undefined4 * )(param_2 + 0xa0);
        *(undefined4 * )(lVar8 + 0x94) = *(undefined4 * )(param_2 + 0xa4);
        *(undefined4 * )(lVar8 + 0x98) = *(undefined4 * )(param_2 + 0xa8);
        *(undefined4 * )(lVar8 + 0x9c) = *(undefined4 * )(param_2 + 0x2b0);
        *(undefined4 * )(lVar8 + 0xa0) = *(undefined4 * )(param_2 + 0xd0);
        *(undefined4 * )(lVar8 + 0xa4) = *(undefined4 * )(param_2 + 0xd4);
        *(undefined4 * )(lVar8 + 0xa8) = *(undefined4 * )(param_2 + 0xd8);
        *(undefined4 * )(lVar8 + 0xac) = *(undefined4 * )(param_2 + 0x2e8);
        uVar1 = *(undefined4 * )(param_2 + 0x278);
        uVar2 = *(uint * )(param_2 + 0x284);
        uVar3 = *(undefined4 * )(param_2 + 0x288);
        uVar4 = *(undefined4 * )(param_2 + 0x298);
        uVar5 = *(undefined4 * )(param_2 + 0x2a4);
        uVar6 = *(undefined4 * )(param_2 + 0x2a8);
        *(undefined(*)[16])(lVar8 + 0xb0) =
                CONCAT412(*(undefined4 * )(param_2 + 0x2a0),
                          CONCAT48(*(undefined4 * )(param_2 + 0x290),
                                   CONCAT44(*(undefined4 * )(param_2 + 0x280),
                                            *(undefined4 * )(param_2 + 0x270))));
        *(undefined(*)[16])(lVar8 + 0xc0) = CONCAT412(uVar5, ZEXT412(uVar2) << 0x20);
        *(undefined(*)[16])(lVar8 + 0xd0) = CONCAT412(uVar6, CONCAT48(uVar4, CONCAT44(uVar3, uVar1)));
        if (*(longlong * *)(param_2 + 0x308) == (longlong *) 0x0) {
            *(undefined(*)[16])(lVar7 + 0xe0) = ZEXT816(0);
        } else {
            lVar8 = (**(code * *)(**(longlong * *)(param_2 + 0x308) + 0x18))();
            fVar9 = 1.0 / (float) (ulonglong) * (uint * )(lVar8 + 4);
            *(undefined(*)[16])(lVar7 + 0xe0) =
                    CONCAT412(1.0 / ((float) (ulonglong) * (uint * )(lVar8 + 4) * 0.0004882813 * 1024.0),
                              CONCAT48(fVar9, (ulonglong)(uint)(fVar9 * -1.0)));
        }
        (**(code * *)(*DAT_140c65670 + 0x118))();
    }
    return;
}


void FUN_14025eae0(longlong param_1, float *param_2, undefined (**param_3)[16]) {
    undefined(*pauVar1)[16];
    undefined4 *puVar2;
    float fVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    float fVar7;
    undefined auVar9[16];
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    undefined auStack216[32];
    undefined local_b8[16];
    uint local_a8;
    uint uStack164;
    undefined4 uStack160;
    undefined4 local_98;
    undefined4 uStack144;
    undefined4 local_88;
    undefined4 uStack132;
    undefined4 uStack128;
    float *local_78[10];
    ulonglong local_28;
    undefined auVar8[12];

    local_28 = DAT_140c0f7b0 ^ (ulonglong)
    auStack216;
    local_78[0] = param_2;
    FUN_1401afc20(local_78, local_b8);
    pauVar1 = *param_3;
    *pauVar1 = CONCAT412(local_88, CONCAT48(local_98, SUB168(local_b8, 0) & 0xffffffff |
                                                      (ulonglong)
    local_a8 << 0x20));
    pauVar1[1] = CONCAT412(uStack132,
                           ZEXT812(SUB168(CONCAT412(SUB164(local_b8 >> 0x60, 0),
                                                    CONCAT48(SUB164(local_b8 >> 0x20, 0),
                                                             SUB168(local_b8, 0))) >> 0x40, 0) &
                                   0xffffffff | (ulonglong)
    uStack164 << 0x20));
    pauVar1[2] = CONCAT412(uStack128,
                           CONCAT48(uStack144, CONCAT44(uStack160, SUB164(local_b8 >> 0x40, 0))));
    puVar2 = *(undefined4 * *)(param_1 + 0x20);
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    *(undefined4 *) pauVar1[3] = *puVar2;
    *(undefined4 * )(pauVar1[3] + 4) = uVar4;
    *(undefined4 * )(pauVar1[3] + 8) = uVar5;
    *(undefined4 * )(pauVar1[3] + 0xc) = uVar6;
    uVar4 = puVar2[5];
    uVar5 = puVar2[6];
    uVar6 = puVar2[7];
    *(undefined4 *) pauVar1[4] = puVar2[4];
    *(undefined4 * )(pauVar1[4] + 4) = uVar4;
    *(undefined4 * )(pauVar1[4] + 8) = uVar5;
    *(undefined4 * )(pauVar1[4] + 0xc) = uVar6;
    fVar3 = **(float **) (param_1 + 0x28);
    fVar7 = (*(float **) (param_1 + 0x28))[1];
    fVar10 = fVar7 * param_2[4] + fVar3 * *param_2 + param_2[8] * 0.0;
    fVar11 = fVar7 * param_2[5] + fVar3 * param_2[1] + param_2[9] * 0.0;
    fVar12 = fVar7 * param_2[6] + fVar3 * param_2[2] + param_2[10] * 0.0;
    fVar13 = fVar7 * param_2[7] + fVar3 * param_2[3] + param_2[0xb] * 0.0;
    auVar9 = CONCAT124(SUB1612(CONCAT412(fVar13 * fVar13,
                                         CONCAT48(fVar12 * fVar12,
                                                  CONCAT44(fVar11 * fVar11, fVar10 * fVar10))) >> 0x20,
                               0), fVar10 * fVar10 + fVar11 * fVar11 + 0.0);
    auVar9 = rsqrtss(auVar9, auVar9);
    fVar3 = SUB164(auVar9, 0);
    fVar7 = fVar3 * fVar10 * 0.5;
    fVar10 = fVar3 * fVar11 * 0.5;
    fVar11 = fVar3 * fVar12 * 0.5;
    auVar8 = CONCAT48(fVar11, CONCAT44(fVar10, fVar7));
    *(float *) pauVar1[5] = fVar7;
    *(float *) (pauVar1[5] + 4) = fVar10;
    *(float *) (pauVar1[5] + 8) = fVar11;
    *(undefined4 * )(pauVar1[5] + 0xc) = 0x3f000000;
    (**(code * *)(*DAT_140c65670 + 0x118))
            (SUB128(auVar8 >> 0x20, 0), 0, SUB168(CONCAT412(fVar3 * fVar13 * 0.5, auVar8) >> 0x40, 0));
    FUN_1407db4f0(local_28 ^ (ulonglong)
    auStack216);
    return;
}


void FUN_14025ec20(longlong param_1, longlong param_2) {
    int iVar1;
    int iVar2;
    int iVar3;

    FUN_14025e420();
    FUN_14025e8c0(param_1, param_2);
    iVar2 = 0;
    iVar3 = 0;
    iVar1 = *(int *) (param_1 + 0x30);
    if (iVar1 == 8) {
        iVar2 = 1;
        iVar3 = 1;
    } else if (iVar1 == 0xc) {
        iVar2 = 1;
    }
    // WARNING: Could not recover jumptable at 0x00014025ecb5. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(*DAT_140c65670 + 0x178))
            (DAT_140c65670, *(undefined8 * )(param_1 + 0x888),
             iVar3 + ((uint)(*(longlong * )(param_2 + 0x308) != 0) +
                      ((uint)(iVar1 == 0x11) +
                       ((uint)(*(float *) (param_1 + 0x14c) == 0.0) + iVar2 * 2) * 2) * 6) * 2);
    return;
}


void FUN_14025ecc0(longlong param_1, longlong param_2, int param_3) {
    int iVar1;
    int iVar2;

    FUN_14025e8c0();
    iVar2 = 0;
    iVar1 = *(int *) (param_1 + 0x30);
    if ((iVar1 == 8) || (iVar1 == 0xc)) {
        iVar2 = 1;
    }
    // WARNING: Could not recover jumptable at 0x00014025ed57. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(*DAT_140c65670 + 0x178))
            (DAT_140c65670, *(undefined8 * )(param_1 + 0x888),
             ((uint)(*(longlong * )(param_2 + 0x308) != 0) +
              (2 - (uint)(param_3 != 0)) * 2 +
              ((uint)(iVar1 == 0x11) + ((uint)(*(float *) (param_1 + 0x14c) == 0.0) + iVar2 * 2) * 2)
              * 6) * 2);
    return;
}


void FUN_14025ed60(longlong *param_1, longlong param_2, int param_3, int param_4) {
    int iVar1;
    longlong lVar2;
    int iVar3;
    int local_res18;
    ulonglong uVar4;

    iVar3 = 0;
    (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 0, *(undefined8 * )(param_2 + 0x300), 0, 0);
    (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 1, param_1[0xd5], 0, 0);
    iVar1 = *(int *) (param_1 + 6);
    if ((iVar1 == 9) || (iVar1 == 0xd)) {
        (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 2, param_1[0xd7], 0, param_1[0x101]);
        local_res18 = 1;
    } else if (iVar1 == 0x12) {
        (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 2, param_1[0xd5], 0, 0);
        local_res18 = iVar3;
    }
    (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 3, param_1[0xd6], 0, 0);
    (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 4, param_1[0xe1], 0, 0);
    uVar4 = 0;
    (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 5, param_1[0xe2], 0, 0);
    lVar2 = (**(code * *)(*DAT_140c65670 + 0x110))(DAT_140c65670, 0x40, 1, 3, uVar4 & 0xffffffff00000000);
    if (lVar2 != 0) {
        (**(code * *)(*param_1 + 0x100))(param_1, *(undefined8 * )(param_2 + 0x300), lVar2);
        FUN_140262750(param_2, lVar2 + 0x10, param_1 + 0x14);
        (**(code * *)(*DAT_140c65670 + 0x118))();
    }
    iVar1 = *(int *) (param_1 + 0x4c);
    if (*(int *) (param_1 + 6) == 0xd) {
        if (param_4 == 0) {
            iVar3 = 2 - (uint)(iVar1 != 0);
        } else {
            iVar3 = (iVar1 != 0) + 1;
        }
    }
    // WARNING: Could not recover jumptable at 0x00014025efa5. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(*DAT_140c65670 + 0x178))
            (DAT_140c65670, param_1[0x113],
             iVar3 + ((uint)((iVar1 == 0) != (param_4 == 0)) +
                      ((uint)(iVar1 != 0) +
                       ((uint)(param_3 != 0) +
                        ((uint)(*(float *) ((longlong) param_1 + 0x14c) == 0.0) + local_res18 * 2) * 2) *
                       2) * 2) * 3);
    return;
}
