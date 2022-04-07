//
// Created by flop on 04.04.22.
//
#include "../../include.h"

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401fced0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001401fcef2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_DyeColorRamp_140a6a168, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63eac == 0) {
        iVar1 = FUN_1401fccc0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001401fcf1c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63ae0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401fcf20(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001401fcf49. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_DyeColorRamp_140a6a168, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63eac == 0) {
        iVar1 = FUN_1401fccc0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001401fcf77. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63ae0 + 0x18))(DAT_140c63ae0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401fcf80(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001401fcfa9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_DyeColorRamp_140a6a168, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63eac == 0) {
        iVar1 = FUN_1401fccc0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001401fcfd7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63ae0 + 0x20))(DAT_140c63ae0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1401fd100(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63fb8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"EldanAugmentationCategory"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c65224 != 0) {
                iVar2 = _DAT_140c64504;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_EldanAugmentationCategory_140a84b80;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\EldanAugmentationCategory.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_EldanAugmentationCategory_140a84b80;
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
                plVar3[3] = (longlong) & PTR_u_EldanAugmentationCategory_140a84b80;
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
        DAT_140c63fb8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c655f8 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401fd310(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001401fd332. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_EldanAugmentationCategory_140a6a1a0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c655f8 == 0) {
        iVar1 = FUN_1401fd100();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001401fd35c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63fb8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401fd360(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001401fd389. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_EldanAugmentationCategory_140a6a1a0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c655f8 == 0) {
        iVar1 = FUN_1401fd100();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001401fd3b7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63fb8 + 0x18))(DAT_140c63fb8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401fd3c0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001401fd3e9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_EldanAugmentationCategory_140a6a1a0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c655f8 == 0) {
        iVar1 = FUN_1401fd100();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001401fd417. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63fb8 + 0x20))(DAT_140c63fb8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1401fd540(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c653a0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"EldanAugmentation"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c65458 != 0) {
                iVar2 = _DAT_140c63fc0;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_EldanAugmentation_140acb118;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\EldanAugmentation.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_EldanAugmentation_140acb118;
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
                plVar3[3] = (longlong) & PTR_u_EldanAugmentation_140acb118;
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
        DAT_140c653a0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c65444 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401fd750(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001401fd772. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_EldanAugmentation_140a6a1d8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65444 == 0) {
        iVar1 = FUN_1401fd540();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001401fd79c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c653a0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401fd7a0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001401fd7c9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_EldanAugmentation_140a6a1d8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65444 == 0) {
        iVar1 = FUN_1401fd540();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001401fd7f7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c653a0 + 0x18))(DAT_140c653a0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401fd800(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001401fd829. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_EldanAugmentation_140a6a1d8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65444 == 0) {
        iVar1 = FUN_1401fd540();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001401fd857. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c653a0 + 0x20))(DAT_140c653a0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1401fd980(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64040 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"Emotes"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64e24 != 0) {
                iVar2 = _DAT_140c65178;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Emotes_140ad3740;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Emotes.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Emotes_140ad3740;
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
                plVar3[3] = (longlong) & PTR_u_Emotes_140ad3740;
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
        DAT_140c64040 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64648 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401fdb90(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001401fdbb2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Emotes_140a6a210, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64648 == 0) {
        iVar1 = FUN_1401fd980();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001401fdbdc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64040 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401fdbe0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001401fdc09. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_Emotes_140a6a210, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64648 == 0) {
        iVar1 = FUN_1401fd980();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001401fdc37. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64040 + 0x18))(DAT_140c64040, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401fdc40(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001401fdc69. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Emotes_140a6a210, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64648 == 0) {
        iVar1 = FUN_1401fd980();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001401fdc97. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64040 + 0x20))(DAT_140c64040, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1401fddc0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64018 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"Entitlement"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c648d0 != 0) {
                iVar2 = _DAT_140c64cc4;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Entitlement_140ade5d8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Entitlement.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Entitlement_140ade5d8;
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
                plVar3[3] = (longlong) & PTR_u_Entitlement_140ade5d8;
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
        DAT_140c64018 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63f1c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401fdfd0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001401fdff2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Entitlement_140a6a248, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63f1c == 0) {
        iVar1 = FUN_1401fddc0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001401fe01c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64018 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401fe020(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001401fe049. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_Entitlement_140a6a248, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63f1c == 0) {
        iVar1 = FUN_1401fddc0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001401fe077. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64018 + 0x18))(DAT_140c64018, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401fe080(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001401fe0a9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Entitlement_140a6a248, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63f1c == 0) {
        iVar1 = FUN_1401fddc0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001401fe0d7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64018 + 0x20))(DAT_140c64018, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1401fe200(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64ee0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"EmoteSequenceTransition"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64e38 != 0) {
                iVar2 = _DAT_140c64174;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_EmoteSequenceTransition_140a84cf8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\EmoteSequenceTransition.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_EmoteSequenceTransition_140a84cf8;
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
                plVar3[3] = (longlong) & PTR_u_EmoteSequenceTransition_140a84cf8;
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
        DAT_140c64ee0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c644b8 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401fe410(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001401fe432. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_EmoteSequenceTransition_140a6a280, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c644b8 == 0) {
        iVar1 = FUN_1401fe200();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001401fe45c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64ee0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401fe4c0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001401fe4e9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_EmoteSequenceTransition_140a6a280, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c644b8 == 0) {
        iVar1 = FUN_1401fe200();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001401fe517. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64ee0 + 0x20))(DAT_140c64ee0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1401fe640(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64f40 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"Episode"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64c00 != 0) {
                iVar2 = _DAT_140c65604;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Episode_140acdb78;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Episode.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Episode_140acdb78;
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
                plVar3[3] = (longlong) & PTR_u_Episode_140acdb78;
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
        DAT_140c64f40 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c643f4 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401fe850(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001401fe872. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Episode_140a6a2b8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c643f4 == 0) {
        iVar1 = FUN_1401fe640();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001401fe89c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64f40 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401fe900(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001401fe929. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Episode_140a6a2b8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c643f4 == 0) {
        iVar1 = FUN_1401fe640();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001401fe957. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64f40 + 0x20))(DAT_140c64f40, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1401fea80(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63958 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"EpisodeQuest"), iVar2 == 0)
                ) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c6447c != 0) {
                iVar2 = _DAT_140c648ac;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_EpisodeQuest_140ad5568;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\EpisodeQuest.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_EpisodeQuest_140ad5568;
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
                plVar3[3] = (longlong) & PTR_u_EpisodeQuest_140ad5568;
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
        DAT_140c63958 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c654cc = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401fec90(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001401fecb2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_EpisodeQuest_140a6a2f0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c654cc == 0) {
        iVar1 = FUN_1401fea80();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001401fecdc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63958 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401fed40(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001401fed69. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_EpisodeQuest_140a6a2f0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c654cc == 0) {
        iVar1 = FUN_1401fea80();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001401fed97. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63958 + 0x20))(DAT_140c63958, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1401feec0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64d20 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"Faction2"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64884 != 0) {
                iVar2 = _DAT_140c648fc;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Faction2_140a7b750;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Faction2.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Faction2_140a7b750;
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
                plVar3[3] = (longlong) & PTR_u_Faction2_140a7b750;
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
        DAT_140c64d20 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c6546c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401ff0d0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001401ff0f2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Faction2_140a6a328, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6546c == 0) {
        iVar1 = FUN_1401feec0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001401ff11c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64d20 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401ff120(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001401ff149. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_Faction2_140a6a328, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6546c == 0) {
        iVar1 = FUN_1401feec0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001401ff177. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64d20 + 0x18))(DAT_140c64d20, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401ff180(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001401ff1a9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Faction2_140a6a328, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6546c == 0) {
        iVar1 = FUN_1401feec0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001401ff1d7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64d20 + 0x20))(DAT_140c64d20, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1401ff300(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64820 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"Faction2Relationship"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63d2c != 0) {
                iVar2 = _DAT_140c65634;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Faction2Relationship_140a68c68;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Faction2Relationship.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Faction2Relationship_140a68c68;
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
                plVar3[3] = (longlong) & PTR_u_Faction2Relationship_140a68c68;
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
        DAT_140c64820 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64064 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401ff510(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001401ff532. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Faction2Relationship_140a6a360, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64064 == 0) {
        iVar1 = FUN_1401ff300();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001401ff55c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64820 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401ff5c0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001401ff5e9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Faction2Relationship_140a6a360, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64064 == 0) {
        iVar1 = FUN_1401ff300();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001401ff617. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64820 + 0x20))(DAT_140c64820, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1401ff740(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64a58 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"FinishingMoveDeathVisual"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64e3c != 0) {
                iVar2 = _DAT_140c64048;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_FinishingMoveDeathVisual_140a64138;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\FinishingMoveDeathVisual.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_FinishingMoveDeathVisual_140a64138;
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
                plVar3[3] = (longlong) & PTR_u_FinishingMoveDeathVisual_140a64138;
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
        DAT_140c64a58 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c641a0 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401ff950(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001401ff972. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_FinishingMoveDeathVisual_140a6a398, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c641a0 == 0) {
        iVar1 = FUN_1401ff740();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001401ff99c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64a58 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401ffa00(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001401ffa29. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_FinishingMoveDeathVisual_140a6a398, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c641a0 == 0) {
        iVar1 = FUN_1401ff740();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001401ffa57. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64a58 + 0x20))(DAT_140c64a58, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1401ffb80(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c65218 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"FullScreenEffect"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63d9c != 0) {
                iVar2 = _DAT_140c63b34;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_FullScreenEffect_140ad9d70;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\FullScreenEffect.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_FullScreenEffect_140ad9d70;
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
                plVar3[3] = (longlong) & PTR_u_FullScreenEffect_140ad9d70;
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
        DAT_140c65218 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64d90 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401ffd90(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001401ffdb2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_FullScreenEffect_140a6a3d0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64d90 == 0) {
        iVar1 = FUN_1401ffb80();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001401ffddc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65218 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401ffde0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001401ffe09. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_FullScreenEffect_140a6a3d0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64d90 == 0) {
        iVar1 = FUN_1401ffb80();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001401ffe37. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65218 + 0x18))(DAT_140c65218, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401ffe40(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001401ffe69. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_FullScreenEffect_140a6a3d0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64d90 == 0) {
        iVar1 = FUN_1401ffb80();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001401ffe97. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65218 + 0x20))(DAT_140c65218, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1401fffc0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64c58 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"GameFormula"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c642dc != 0) {
                iVar2 = _DAT_140c64b4c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_GameFormula_140ae1670;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\GameFormula.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_GameFormula_140ae1670;
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
                plVar3[3] = (longlong) & PTR_u_GameFormula_140ae1670;
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
        DAT_140c64c58 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c638ac = 0;
    return 0;
}

