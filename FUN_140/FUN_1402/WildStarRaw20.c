//
// Created by flop on 04.04.22.
//
#include "../../include.h"

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140235d60(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140235d89. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_SoundUIContext_140a6d038, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65648 == 0) {
        iVar1 = FUN_140235aa0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140235db7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63d60 + 0x20))(DAT_140c63d60, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140235ee0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63c88 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"SoundZoneKit"), iVar2 == 0)
                ) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c65090 != 0) {
                iVar2 = _DAT_140c63b14;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_SoundZoneKit_140a70f50;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\SoundZoneKit.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_SoundZoneKit_140a70f50;
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
                plVar3[3] = (longlong) & PTR_u_SoundZoneKit_140a70f50;
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
        DAT_140c63c88 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c648f0 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402360f0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140236112. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_SoundZoneKit_140a6d070, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c648f0 == 0) {
        iVar1 = FUN_140235ee0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023613c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63c88 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140236140(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140236169. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_SoundZoneKit_140a6d070, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c648f0 == 0) {
        iVar1 = FUN_140235ee0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140236197. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63c88 + 0x18))(DAT_140c63c88, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402361a0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402361c9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_SoundZoneKit_140a6d070, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c648f0 == 0) {
        iVar1 = FUN_140235ee0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402361f7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63c88 + 0x20))(DAT_140c63c88, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140236320(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c653f0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"Spell4"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c644a8 != 0) {
                iVar2 = _DAT_140c64120;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4_140ad8188;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Spell4.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4_140ad8188;
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
                plVar3[3] = (longlong) & PTR_u_Spell4_140ad8188;
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
        DAT_140c653f0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64d94 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140236530(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140236552. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Spell4_140a6d0a8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64d94 == 0) {
        iVar1 = FUN_140236320();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023657c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c653f0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140236580(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402365a9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_Spell4_140a6d0a8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64d94 == 0) {
        iVar1 = FUN_140236320();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402365d7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c653f0 + 0x18))(DAT_140c653f0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402365e0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140236609. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Spell4_140a6d0a8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64d94 == 0) {
        iVar1 = FUN_140236320();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140236637. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c653f0 + 0x20))(DAT_140c653f0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140236760(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63e80 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"Spell4AoeTargetConstraints"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c650d0 != 0) {
                iVar2 = _DAT_140c641c0;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4AoeTargetConstraints_140a71850;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Spell4AoeTargetConstraints.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4AoeTargetConstraints_140a71850;
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
                plVar3[3] = (longlong) & PTR_u_Spell4AoeTargetConstraints_140a71850;
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
        DAT_140c63e80 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64cc8 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140236970(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140236992. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Spell4AoeTargetConstraints_140a6d0e0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64cc8 == 0) {
        iVar1 = FUN_140236760();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402369bc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63e80 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402369c0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402369e9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_Spell4AoeTargetConstraints_140a6d0e0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64cc8 == 0) {
        iVar1 = FUN_140236760();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140236a17. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63e80 + 0x18))(DAT_140c63e80, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140236a20(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140236a49. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Spell4AoeTargetConstraints_140a6d0e0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64cc8 == 0) {
        iVar1 = FUN_140236760();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140236a77. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63e80 + 0x20))(DAT_140c63e80, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140236ba0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c654e0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"Spell4Base"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64704 != 0) {
                iVar2 = _DAT_140c65374;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4Base_140a5cf38;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Spell4Base.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4Base_140a5cf38;
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
                plVar3[3] = (longlong) & PTR_u_Spell4Base_140a5cf38;
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
        DAT_140c654e0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64510 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140236db0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140236dd2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Spell4Base_140a6d118, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64510 == 0) {
        iVar1 = FUN_140236ba0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140236dfc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c654e0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140236e00(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140236e29. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_Spell4Base_140a6d118, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64510 == 0) {
        iVar1 = FUN_140236ba0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140236e57. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c654e0 + 0x18))(DAT_140c654e0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140236e60(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140236e89. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Spell4Base_140a6d118, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64510 == 0) {
        iVar1 = FUN_140236ba0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140236eb7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c654e0 + 0x20))(DAT_140c654e0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140236fe0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64bd0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"Spell4CastResult"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c645f4 != 0) {
                iVar2 = _DAT_140c64110;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4CastResult_140a57f70;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Spell4CastResult.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4CastResult_140a57f70;
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
                plVar3[3] = (longlong) & PTR_u_Spell4CastResult_140a57f70;
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
        DAT_140c64bd0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64798 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402371f0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140237212. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Spell4CastResult_140a6d150, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64798 == 0) {
        iVar1 = FUN_140236fe0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023723c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64bd0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140237240(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140237269. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_Spell4CastResult_140a6d150, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64798 == 0) {
        iVar1 = FUN_140236fe0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140237297. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64bd0 + 0x18))(DAT_140c64bd0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402372a0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402372c9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Spell4CastResult_140a6d150, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64798 == 0) {
        iVar1 = FUN_140236fe0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402372f7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64bd0 + 0x20))(DAT_140c64bd0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140237420(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64a28 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"Spell4ClientMissile"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c6526c != 0) {
                iVar2 = _DAT_140c64128;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4ClientMissile_140ad6658;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Spell4ClientMissile.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4ClientMissile_140ad6658;
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
                plVar3[3] = (longlong) & PTR_u_Spell4ClientMissile_140ad6658;
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
        DAT_140c64a28 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64f14 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140237630(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140237652. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Spell4ClientMissile_140a6d188, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64f14 == 0) {
        iVar1 = FUN_140237420();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023767c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64a28 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140237680(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402376a9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_Spell4ClientMissile_140a6d188, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64f14 == 0) {
        iVar1 = FUN_140237420();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402376d7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64a28 + 0x18))(DAT_140c64a28, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402376e0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140237709. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Spell4ClientMissile_140a6d188, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64f14 == 0) {
        iVar1 = FUN_140237420();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140237737. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64a28 + 0x20))(DAT_140c64a28, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140237860(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64368 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"Spell4Conditions"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63e7c != 0) {
                iVar2 = _DAT_140c6520c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4Conditions_140a79698;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Spell4Conditions.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4Conditions_140a79698;
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
                plVar3[3] = (longlong) & PTR_u_Spell4Conditions_140a79698;
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
        DAT_140c64368 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c6524c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140237a70(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140237a92. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Spell4Conditions_140a6d1c0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6524c == 0) {
        iVar1 = FUN_140237860();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140237abc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64368 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140237ac0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140237ae9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_Spell4Conditions_140a6d1c0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6524c == 0) {
        iVar1 = FUN_140237860();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140237b17. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64368 + 0x18))(DAT_140c64368, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140237b20(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140237b49. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Spell4Conditions_140a6d1c0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6524c == 0) {
        iVar1 = FUN_140237860();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140237b77. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64368 + 0x20))(DAT_140c64368, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140237ca0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c65590 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"Spell4CCConditions"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63e10 != 0) {
                iVar2 = _DAT_140c6504c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4CCConditions_140a5b4e0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Spell4CCConditions.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4CCConditions_140a5b4e0;
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
                plVar3[3] = (longlong) & PTR_u_Spell4CCConditions_140a5b4e0;
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
        DAT_140c65590 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c642ec = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140237eb0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140237ed2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Spell4CCConditions_140a6d1f8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c642ec == 0) {
        iVar1 = FUN_140237ca0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140237efc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65590 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140237f00(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140237f29. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_Spell4CCConditions_140a6d1f8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c642ec == 0) {
        iVar1 = FUN_140237ca0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140237f57. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65590 + 0x18))(DAT_140c65590, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140237f60(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140237f89. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Spell4CCConditions_140a6d1f8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c642ec == 0) {
        iVar1 = FUN_140237ca0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140237fb7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65590 + 0x20))(DAT_140c65590, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1402380e0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c65328 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"Spell4EffectModification"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64328 != 0) {
                iVar2 = _DAT_140c640e4;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4EffectModification_140acc440;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Spell4EffectModification.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4EffectModification_140acc440;
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
                plVar3[3] = (longlong) & PTR_u_Spell4EffectModification_140acc440;
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
        DAT_140c65328 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c6428c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402382f0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140238312. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Spell4EffectModification_140a6d230, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6428c == 0) {
        iVar1 = FUN_1402380e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023833c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65328 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140238340(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140238369. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_Spell4EffectModification_140a6d230, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6428c == 0) {
        iVar1 = FUN_1402380e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140238397. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65328 + 0x18))(DAT_140c65328, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402383a0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402383c9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Spell4EffectModification_140a6d230, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6428c == 0) {
        iVar1 = FUN_1402380e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402383f7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65328 + 0x20))(DAT_140c65328, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140238520(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63ba0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"Spell4Effects"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c647a0 != 0) {
                iVar2 = _DAT_140c6519c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4Effects_140a511d8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Spell4Effects.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4Effects_140a511d8;
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
                plVar3[3] = (longlong) & PTR_u_Spell4Effects_140a511d8;
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
        DAT_140c63ba0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c644e4 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140238730(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140238752. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Spell4Effects_140a6d268, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c644e4 == 0) {
        iVar1 = FUN_140238520();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023877c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63ba0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140238780(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402387a9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_Spell4Effects_140a6d268, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c644e4 == 0) {
        iVar1 = FUN_140238520();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402387d7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63ba0 + 0x18))(DAT_140c63ba0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402387e0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140238809. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Spell4Effects_140a6d268, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c644e4 == 0) {
        iVar1 = FUN_140238520();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140238837. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63ba0 + 0x20))(DAT_140c63ba0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140238960(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63f40 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"Spell4EffectGroupList"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c6529c != 0) {
                iVar2 = _DAT_140c63e9c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4EffectGroupList_140acc240;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Spell4EffectGroupList.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4EffectGroupList_140acc240;
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
                plVar3[3] = (longlong) & PTR_u_Spell4EffectGroupList_140acc240;
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
        DAT_140c63f40 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c6461c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140238b70(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140238b92. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Spell4EffectGroupList_140a6d2a0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6461c == 0) {
        iVar1 = FUN_140238960();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140238bbc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63f40 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140238c20(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140238c49. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Spell4EffectGroupList_140a6d2a0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6461c == 0) {
        iVar1 = FUN_140238960();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140238c77. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63f40 + 0x20))(DAT_140c63f40, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140238da0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63c48 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"Spell4GroupList"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c638c0 != 0) {
                iVar2 = _DAT_140c644e0;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4GroupList_140a7e6f8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Spell4GroupList.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4GroupList_140a7e6f8;
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
                plVar3[3] = (longlong) & PTR_u_Spell4GroupList_140a7e6f8;
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
        DAT_140c63c48 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63fa4 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140238fb0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140238fd2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Spell4GroupList_140a6d2d8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63fa4 == 0) {
        iVar1 = FUN_140238da0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140238ffc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63c48 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140239000(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140239029. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_Spell4GroupList_140a6d2d8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63fa4 == 0) {
        iVar1 = FUN_140238da0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140239057. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63c48 + 0x18))(DAT_140c63c48, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140239060(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140239089. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Spell4GroupList_140a6d2d8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63fa4 == 0) {
        iVar1 = FUN_140238da0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402390b7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63c48 + 0x20))(DAT_140c63c48, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1402391e0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c651c8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"Spell4HitResults"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c646c0 != 0) {
                iVar2 = _DAT_140c64d68;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4HitResults_140a82e30;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Spell4HitResults.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4HitResults_140a82e30;
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
                plVar3[3] = (longlong) & PTR_u_Spell4HitResults_140a82e30;
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
        DAT_140c651c8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64520 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402393f0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140239412. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Spell4HitResults_140a6d310, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64520 == 0) {
        iVar1 = FUN_1402391e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023943c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c651c8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140239440(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140239469. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_Spell4HitResults_140a6d310, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64520 == 0) {
        iVar1 = FUN_1402391e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140239497. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c651c8 + 0x18))(DAT_140c651c8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402394a0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402394c9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Spell4HitResults_140a6d310, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64520 == 0) {
        iVar1 = FUN_1402391e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402394f7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c651c8 + 0x20))(DAT_140c651c8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140239620(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63b48 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"Spell4Modification"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64f24 != 0) {
                iVar2 = _DAT_140c6412c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4Modification_140ad9478;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Spell4Modification.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4Modification_140ad9478;
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
                plVar3[3] = (longlong) & PTR_u_Spell4Modification_140ad9478;
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
        DAT_140c63b48 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63f20 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140239830(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140239852. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Spell4Modification_140a6d348, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63f20 == 0) {
        iVar1 = FUN_140239620();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023987c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63b48 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140239880(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402398a9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_Spell4Modification_140a6d348, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63f20 == 0) {
        iVar1 = FUN_140239620();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402398d7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63b48 + 0x18))(DAT_140c63b48, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402398e0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140239909. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Spell4Modification_140a6d348, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63f20 == 0) {
        iVar1 = FUN_140239620();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140239937. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63b48 + 0x20))(DAT_140c63b48, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140239a60(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64d98 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"Spell4Prerequisites"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64438 != 0) {
                iVar2 = _DAT_140c63ec8;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4Prerequisites_140ad5770;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Spell4Prerequisites.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4Prerequisites_140ad5770;
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
                plVar3[3] = (longlong) & PTR_u_Spell4Prerequisites_140ad5770;
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
        DAT_140c64d98 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64628 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140239c70(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140239c92. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Spell4Prerequisites_140a6d380, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64628 == 0) {
        iVar1 = FUN_140239a60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140239cbc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64d98 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140239cc0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140239ce9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_Spell4Prerequisites_140a6d380, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64628 == 0) {
        iVar1 = FUN_140239a60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140239d17. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64d98 + 0x18))(DAT_140c64d98, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140239d20(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140239d49. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Spell4Prerequisites_140a6d380, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64628 == 0) {
        iVar1 = FUN_140239a60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140239d77. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64d98 + 0x20))(DAT_140c64d98, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140239ea0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c647a8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"Spell4Reagent"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64730 != 0) {
                iVar2 = _DAT_140c63960;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4Reagent_140ad0970;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Spell4Reagent.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4Reagent_140ad0970;
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
                plVar3[3] = (longlong) & PTR_u_Spell4Reagent_140ad0970;
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
        DAT_140c647a8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c640e0 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023a0b0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023a0d2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Spell4Reagent_140a6d3b8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c640e0 == 0) {
        iVar1 = FUN_140239ea0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023a0fc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c647a8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023a100(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023a129. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_Spell4Reagent_140a6d3b8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c640e0 == 0) {
        iVar1 = FUN_140239ea0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023a157. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c647a8 + 0x18))(DAT_140c647a8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023a160(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023a189. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Spell4Reagent_140a6d3b8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c640e0 == 0) {
        iVar1 = FUN_140239ea0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023a1b7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c647a8 + 0x20))(DAT_140c647a8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14023a2e0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64a80 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"Spell4Runner"), iVar2 == 0)
                ) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c653f8 != 0) {
                iVar2 = _DAT_140c64624;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4Runner_140a76c20;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Spell4Runner.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4Runner_140a76c20;
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
                plVar3[3] = (longlong) & PTR_u_Spell4Runner_140a76c20;
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
        DAT_140c64a80 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c6551c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023a4f0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023a512. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Spell4Runner_140a6d3f0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6551c == 0) {
        iVar1 = FUN_14023a2e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023a53c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64a80 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023a540(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023a569. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_Spell4Runner_140a6d3f0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6551c == 0) {
        iVar1 = FUN_14023a2e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023a597. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64a80 + 0x18))(DAT_140c64a80, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023a5a0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023a5c9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Spell4Runner_140a6d3f0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6551c == 0) {
        iVar1 = FUN_14023a2e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023a5f7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64a80 + 0x20))(DAT_140c64a80, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14023a720(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64198 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"Spell4ServiceTokenCost"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64498 != 0) {
                iVar2 = _DAT_140c641c4;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4ServiceTokenCost_140a82820;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Spell4ServiceTokenCost.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4ServiceTokenCost_140a82820;
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
                plVar3[3] = (longlong) & PTR_u_Spell4ServiceTokenCost_140a82820;
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
        DAT_140c64198 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63ab0 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023a930(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023a952. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Spell4ServiceTokenCost_140a6d428, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63ab0 == 0) {
        iVar1 = FUN_14023a720();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023a97c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64198 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023a9e0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023aa09. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Spell4ServiceTokenCost_140a6d428, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63ab0 == 0) {
        iVar1 = FUN_14023a720();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023aa37. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64198 + 0x20))(DAT_140c64198, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14023ab60(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64d78 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"Spell4SpellTypes"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63e78 != 0) {
                iVar2 = _DAT_140c648a4;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4SpellTypes_140a748e8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Spell4SpellTypes.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4SpellTypes_140a748e8;
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
                plVar3[3] = (longlong) & PTR_u_Spell4SpellTypes_140a748e8;
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
        DAT_140c64d78 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c65554 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023ad70(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023ad92. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Spell4SpellTypes_140a6d460, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65554 == 0) {
        iVar1 = FUN_14023ab60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023adbc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64d78 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023ae20(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023ae49. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Spell4SpellTypes_140a6d460, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65554 == 0) {
        iVar1 = FUN_14023ab60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023ae77. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64d78 + 0x20))(DAT_140c64d78, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14023afa0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c642f0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"Spell4StackGroup"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64410 != 0) {
                iVar2 = _DAT_140c64b24;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4StackGroup_140a5c8a0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Spell4StackGroup.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4StackGroup_140a5c8a0;
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
                plVar3[3] = (longlong) & PTR_u_Spell4StackGroup_140a5c8a0;
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
        DAT_140c642f0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64980 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023b1b0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023b1d2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Spell4StackGroup_140a6d498, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64980 == 0) {
        iVar1 = FUN_14023afa0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023b1fc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c642f0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023b200(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023b229. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_Spell4StackGroup_140a6d498, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64980 == 0) {
        iVar1 = FUN_14023afa0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023b257. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c642f0 + 0x18))(DAT_140c642f0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023b260(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023b289. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Spell4StackGroup_140a6d498, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64980 == 0) {
        iVar1 = FUN_14023afa0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023b2b7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c642f0 + 0x20))(DAT_140c642f0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14023b3e0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c65570 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"Spell4Tag"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64a18 != 0) {
                iVar2 = _DAT_140c639b8;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4Tag_140a5bac0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Spell4Tag.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4Tag_140a5bac0;
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
                plVar3[3] = (longlong) & PTR_u_Spell4Tag_140a5bac0;
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
        DAT_140c65570 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64be4 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023b5f0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023b612. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Spell4Tag_140a6d4d0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64be4 == 0) {
        iVar1 = FUN_14023b3e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023b63c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65570 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023b640(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023b669. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_Spell4Tag_140a6d4d0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64be4 == 0) {
        iVar1 = FUN_14023b3e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023b697. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65570 + 0x18))(DAT_140c65570, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023b6a0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023b6c9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Spell4Tag_140a6d4d0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64be4 == 0) {
        iVar1 = FUN_14023b3e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023b6f7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65570 + 0x20))(DAT_140c65570, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14023b820(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64b98 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"Spell4TargetAngle"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64b20 != 0) {
                iVar2 = _DAT_140c64950;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4TargetAngle_140ad02c0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Spell4TargetAngle.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4TargetAngle_140ad02c0;
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
                plVar3[3] = (longlong) & PTR_u_Spell4TargetAngle_140ad02c0;
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
        DAT_140c64b98 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64e68 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023ba30(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023ba52. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Spell4TargetAngle_140a6d508, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64e68 == 0) {
        iVar1 = FUN_14023b820();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023ba7c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64b98 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023ba80(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023baa9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_Spell4TargetAngle_140a6d508, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64e68 == 0) {
        iVar1 = FUN_14023b820();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023bad7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64b98 + 0x18))(DAT_140c64b98, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023bae0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023bb09. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Spell4TargetAngle_140a6d508, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64e68 == 0) {
        iVar1 = FUN_14023b820();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023bb37. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64b98 + 0x20))(DAT_140c64b98, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14023bc60(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64ce8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"Spell4TargetMechanics"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63ccc != 0) {
                iVar2 = _DAT_140c63e38;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4TargetMechanics_140ad4a68;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Spell4TargetMechanics.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4TargetMechanics_140ad4a68;
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
                plVar3[3] = (longlong) & PTR_u_Spell4TargetMechanics_140ad4a68;
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
        DAT_140c64ce8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63fe0 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023be70(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023be92. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Spell4TargetMechanics_140a6d540, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63fe0 == 0) {
        iVar1 = FUN_14023bc60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023bebc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64ce8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023bec0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023bee9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_Spell4TargetMechanics_140a6d540, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63fe0 == 0) {
        iVar1 = FUN_14023bc60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023bf17. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64ce8 + 0x18))(DAT_140c64ce8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023bf20(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023bf49. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Spell4TargetMechanics_140a6d540, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63fe0 == 0) {
        iVar1 = FUN_14023bc60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023bf77. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64ce8 + 0x20))(DAT_140c64ce8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14023c0a0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63a88 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"Spell4Telegraph"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64a60 != 0) {
                iVar2 = _DAT_140c646c4;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4Telegraph_140ad3680;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Spell4Telegraph.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4Telegraph_140ad3680;
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
                plVar3[3] = (longlong) & PTR_u_Spell4Telegraph_140ad3680;
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
        DAT_140c63a88 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c654a0 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023c2b0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023c2d2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Spell4Telegraph_140a6d578, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c654a0 == 0) {
        iVar1 = FUN_14023c0a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023c2fc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63a88 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023c360(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023c389. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Spell4Telegraph_140a6d578, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c654a0 == 0) {
        iVar1 = FUN_14023c0a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023c3b7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63a88 + 0x20))(DAT_140c63a88, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14023c4e0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63bd8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"Spell4Thresholds"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64ed4 != 0) {
                iVar2 = _DAT_140c64928;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4Thresholds_140ad1d50;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Spell4Thresholds.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4Thresholds_140ad1d50;
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
                plVar3[3] = (longlong) & PTR_u_Spell4Thresholds_140ad1d50;
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
        DAT_140c63bd8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c65130 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023c6f0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023c712. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Spell4Thresholds_140a6d5b0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65130 == 0) {
        iVar1 = FUN_14023c4e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023c73c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63bd8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023c740(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023c769. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_Spell4Thresholds_140a6d5b0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65130 == 0) {
        iVar1 = FUN_14023c4e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023c797. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63bd8 + 0x18))(DAT_140c63bd8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023c7a0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023c7c9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Spell4Thresholds_140a6d5b0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65130 == 0) {
        iVar1 = FUN_14023c4e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023c7f7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63bd8 + 0x20))(DAT_140c63bd8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14023c920(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c654a8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"Spell4TierRequirements"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c655c8 != 0) {
                iVar2 = _DAT_140c64690;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4TierRequirements_140a51570;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Spell4TierRequirements.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4TierRequirements_140a51570;
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
                plVar3[3] = (longlong) & PTR_u_Spell4TierRequirements_140a51570;
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
        DAT_140c654a8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64f0c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023cb30(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023cb52. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Spell4TierRequirements_140a6d5e8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64f0c == 0) {
        iVar1 = FUN_14023c920();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023cb7c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c654a8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023cbe0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023cc09. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Spell4TierRequirements_140a6d5e8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64f0c == 0) {
        iVar1 = FUN_14023c920();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023cc37. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c654a8 + 0x20))(DAT_140c654a8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14023cd60(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64558 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"Spell4ValidTargets"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63cac != 0) {
                iVar2 = _DAT_140c6469c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4ValidTargets_140acdbb0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Spell4ValidTargets.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4ValidTargets_140acdbb0;
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
                plVar3[3] = (longlong) & PTR_u_Spell4ValidTargets_140acdbb0;
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
        DAT_140c64558 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64680 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023cf70(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023cf92. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Spell4ValidTargets_140a6d620, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64680 == 0) {
        iVar1 = FUN_14023cd60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023cfbc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64558 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023cfc0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023cfe9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_Spell4ValidTargets_140a6d620, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64680 == 0) {
        iVar1 = FUN_14023cd60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023d017. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64558 + 0x18))(DAT_140c64558, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023d020(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023d049. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Spell4ValidTargets_140a6d620, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64680 == 0) {
        iVar1 = FUN_14023cd60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023d077. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64558 + 0x20))(DAT_140c64558, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14023d1a0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64fe8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"Spell4Visual"), iVar2 == 0)
                ) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64e14 != 0) {
                iVar2 = _DAT_140c64fc8;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4Visual_140a6fe00;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Spell4Visual.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4Visual_140a6fe00;
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
                plVar3[3] = (longlong) & PTR_u_Spell4Visual_140a6fe00;
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
        DAT_140c64fe8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64c94 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023d3b0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023d3d2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Spell4Visual_140a6d658, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64c94 == 0) {
        iVar1 = FUN_14023d1a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023d3fc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64fe8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023d400(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023d429. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_Spell4Visual_140a6d658, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64c94 == 0) {
        iVar1 = FUN_14023d1a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023d457. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64fe8 + 0x18))(DAT_140c64fe8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023d460(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023d489. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Spell4Visual_140a6d658, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64c94 == 0) {
        iVar1 = FUN_14023d1a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023d4b7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64fe8 + 0x20))(DAT_140c64fe8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14023d5e0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c65368 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"Spell4VisualGroup"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64bb8 != 0) {
                iVar2 = _DAT_140c642b8;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4VisualGroup_140ad3e88;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Spell4VisualGroup.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spell4VisualGroup_140ad3e88;
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
                plVar3[3] = (longlong) & PTR_u_Spell4VisualGroup_140ad3e88;
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
        DAT_140c65368 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64a68 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023d7f0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023d812. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Spell4VisualGroup_140a6d690, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64a68 == 0) {
        iVar1 = FUN_14023d5e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023d83c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65368 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023d840(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023d869. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_Spell4VisualGroup_140a6d690, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64a68 == 0) {
        iVar1 = FUN_14023d5e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023d897. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65368 + 0x18))(DAT_140c65368, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023d8a0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023d8c9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Spell4VisualGroup_140a6d690, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64a68 == 0) {
        iVar1 = FUN_14023d5e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023d8f7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65368 + 0x20))(DAT_140c65368, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14023da20(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64d48 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"SpellCoolDown"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c642e0 != 0) {
                iVar2 = _DAT_140c64394;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_SpellCoolDown_140a84448;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\SpellCoolDown.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_SpellCoolDown_140a84448;
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
                plVar3[3] = (longlong) & PTR_u_SpellCoolDown_140a84448;
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
        DAT_140c64d48 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c65494 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023dc30(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023dc52. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_SpellCoolDown_140a6d6c8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65494 == 0) {
        iVar1 = FUN_14023da20();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023dc7c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64d48 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023dc80(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023dca9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_SpellCoolDown_140a6d6c8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65494 == 0) {
        iVar1 = FUN_14023da20();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023dcd7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64d48 + 0x18))(DAT_140c64d48, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023dce0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023dd09. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_SpellCoolDown_140a6d6c8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65494 == 0) {
        iVar1 = FUN_14023da20();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023dd37. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64d48 + 0x20))(DAT_140c64d48, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14023de60(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64dd8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"SpellEffectType"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c643bc != 0) {
                iVar2 = _DAT_140c639a0;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_SpellEffectType_140a619a0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\SpellEffectType.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_SpellEffectType_140a619a0;
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
                plVar3[3] = (longlong) & PTR_u_SpellEffectType_140a619a0;
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
        DAT_140c64dd8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63fc8 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023e070(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023e092. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_SpellEffectType_140a6d700, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63fc8 == 0) {
        iVar1 = FUN_14023de60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023e0bc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64dd8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023e0c0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023e0e9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_SpellEffectType_140a6d700, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63fc8 == 0) {
        iVar1 = FUN_14023de60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023e117. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64dd8 + 0x18))(DAT_140c64dd8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023e120(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023e149. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_SpellEffectType_140a6d700, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63fc8 == 0) {
        iVar1 = FUN_14023de60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023e177. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64dd8 + 0x20))(DAT_140c64dd8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14023e2a0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c646f0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"SpellLevel"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64148 != 0) {
                iVar2 = _DAT_140c651c4;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_SpellLevel_140ad7898;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\SpellLevel.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_SpellLevel_140ad7898;
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
                plVar3[3] = (longlong) & PTR_u_SpellLevel_140ad7898;
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
        DAT_140c646f0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63b9c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023e4b0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023e4d2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_SpellLevel_140a6d738, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63b9c == 0) {
        iVar1 = FUN_14023e2a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023e4fc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c646f0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023e560(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023e589. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_SpellLevel_140a6d738, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63b9c == 0) {
        iVar1 = FUN_14023e2a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023e5b7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c646f0 + 0x20))(DAT_140c646f0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14023e6e0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64af8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"SpellPhase"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c655e8 != 0) {
                iVar2 = _DAT_140c654a4;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_SpellPhase_140ad6998;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\SpellPhase.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_SpellPhase_140ad6998;
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
                plVar3[3] = (longlong) & PTR_u_SpellPhase_140ad6998;
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
        DAT_140c64af8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64c2c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023e8f0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023e912. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_SpellPhase_140a6d770, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64c2c == 0) {
        iVar1 = FUN_14023e6e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023e93c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64af8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023e9a0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023e9c9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_SpellPhase_140a6d770, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64c2c == 0) {
        iVar1 = FUN_14023e6e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023e9f7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64af8 + 0x20))(DAT_140c64af8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14023eb20(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64570 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"Spline2"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63870 != 0) {
                iVar2 = _DAT_140c64ccc;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spline2_140a7d668;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Spline2.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spline2_140a7d668;
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
                plVar3[3] = (longlong) & PTR_u_Spline2_140a7d668;
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
        DAT_140c64570 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63c1c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023ed30(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023ed52. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Spline2_140a6d7a8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63c1c == 0) {
        iVar1 = FUN_14023eb20();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023ed7c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64570 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023ede0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023ee09. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Spline2_140a6d7a8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63c1c == 0) {
        iVar1 = FUN_14023eb20();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023ee37. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64570 + 0x20))(DAT_140c64570, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14023ef60(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63b18 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"Spline2Node"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c644cc != 0) {
                iVar2 = _DAT_140c650e8;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spline2Node_140add430;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Spline2Node.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Spline2Node_140add430;
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
                plVar3[3] = (longlong) & PTR_u_Spline2Node_140add430;
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
        DAT_140c63b18 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c647b4 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023f170(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023f192. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Spline2Node_140a6d7e0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c647b4 == 0) {
        iVar1 = FUN_14023ef60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023f1bc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63b18 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023f220(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023f249. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Spline2Node_140a6d7e0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c647b4 == 0) {
        iVar1 = FUN_14023ef60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023f277. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63b18 + 0x20))(DAT_140c63b18, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14023f3a0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c650f8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"StoreDisplayInfo"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63acc != 0) {
                iVar2 = _DAT_140c64420;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_StoreDisplayInfo_140a67280;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\StoreDisplayInfo.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_StoreDisplayInfo_140a67280;
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
                plVar3[3] = (longlong) & PTR_u_StoreDisplayInfo_140a67280;
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
        DAT_140c650f8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c65298 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023f5b0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023f5d2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_StoreDisplayInfo_140a6d818, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65298 == 0) {
        iVar1 = FUN_14023f3a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023f5fc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c650f8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023f600(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023f629. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_StoreDisplayInfo_140a6d818, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65298 == 0) {
        iVar1 = FUN_14023f3a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023f657. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c650f8 + 0x18))(DAT_140c650f8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023f660(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023f689. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_StoreDisplayInfo_140a6d818, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65298 == 0) {
        iVar1 = FUN_14023f3a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023f6b7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c650f8 + 0x20))(DAT_140c650f8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14023f7e0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c650e0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"StoreLink"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c651b4 != 0) {
                iVar2 = _DAT_140c64cf8;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_StoreLink_140a83b80;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\StoreLink.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_StoreLink_140a83b80;
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
                plVar3[3] = (longlong) & PTR_u_StoreLink_140a83b80;
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
        DAT_140c650e0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63f5c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023f9f0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023fa12. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_StoreLink_140a6d850, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63f5c == 0) {
        iVar1 = FUN_14023f7e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023fa3c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c650e0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023faa0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023fac9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_StoreLink_140a6d850, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63f5c == 0) {
        iVar1 = FUN_14023f7e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023faf7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c650e0 + 0x20))(DAT_140c650e0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14023fc20(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64f38 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"StoreKeyword"), iVar2 == 0)
                ) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63fb0 != 0) {
                iVar2 = _DAT_140c65220;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_StoreKeyword_140a7eb18;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\StoreKeyword.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_StoreKeyword_140a7eb18;
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
                plVar3[3] = (longlong) & PTR_u_StoreKeyword_140a7eb18;
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
        DAT_140c64f38 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c649f8 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023fe30(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023fe52. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_StoreKeyword_140a6d888, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c649f8 == 0) {
        iVar1 = FUN_14023fc20();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023fe7c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64f38 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14023fee0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014023ff09. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_StoreKeyword_140a6d888, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c649f8 == 0) {
        iVar1 = FUN_14023fc20();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023ff37. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64f38 + 0x20))(DAT_140c64f38, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140240060(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64c70 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"StoryPanel"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63b30 != 0) {
                iVar2 = _DAT_140c64ff4;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_StoryPanel_140a7eac0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\StoryPanel.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_StoryPanel_140a7eac0;
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
                plVar3[3] = (longlong) & PTR_u_StoryPanel_140a7eac0;
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
        DAT_140c64c70 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c650f4 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140240270(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140240292. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_StoryPanel_140a6d8c0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c650f4 == 0) {
        iVar1 = FUN_140240060();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402402bc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64c70 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402402c0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402402e9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_StoryPanel_140a6d8c0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c650f4 == 0) {
        iVar1 = FUN_140240060();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140240317. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64c70 + 0x18))(DAT_140c64c70, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140240320(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140240349. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_StoryPanel_140a6d8c0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c650f4 == 0) {
        iVar1 = FUN_140240060();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140240377. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64c70 + 0x20))(DAT_140c64c70, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1402404a0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64790 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"CustomerSurvey"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64178 != 0) {
                iVar2 = _DAT_140c64aac;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_CustomerSurvey_140a62a28;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\CustomerSurvey.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_CustomerSurvey_140a62a28;
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
                plVar3[3] = (longlong) & PTR_u_CustomerSurvey_140a62a28;
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
        DAT_140c64790 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c647f8 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402406b0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402406d2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_CustomerSurvey_140a6d8f8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c647f8 == 0) {
        iVar1 = FUN_1402404a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402406fc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64790 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140240700(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140240729. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_CustomerSurvey_140a6d8f8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c647f8 == 0) {
        iVar1 = FUN_1402404a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140240757. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64790 + 0x18))(DAT_140c64790, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140240760(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140240789. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_CustomerSurvey_140a6d8f8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c647f8 == 0) {
        iVar1 = FUN_1402404a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402407b7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64790 + 0x20))(DAT_140c64790, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1402408e0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63908 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"TargetGroup"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64564 != 0) {
                iVar2 = _DAT_140c64c38;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_TargetGroup_140ad3778;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\TargetGroup.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_TargetGroup_140ad3778;
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
                plVar3[3] = (longlong) & PTR_u_TargetGroup_140ad3778;
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
        DAT_140c63908 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63cd0 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140240af0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140240b12. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_TargetGroup_140a6d930, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63cd0 == 0) {
        iVar1 = FUN_1402408e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140240b3c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63908 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140240b40(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140240b69. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_TargetGroup_140a6d930, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63cd0 == 0) {
        iVar1 = FUN_1402408e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140240b97. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63908 + 0x18))(DAT_140c63908, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140240ba0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140240bc9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_TargetGroup_140a6d930, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63cd0 == 0) {
        iVar1 = FUN_1402408e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140240bf7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63908 + 0x20))(DAT_140c63908, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140240d20(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64b30 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"TargetMarker"), iVar2 == 0)
                ) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c6481c != 0) {
                iVar2 = _DAT_140c651e4;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_TargetMarker_140adc318;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\TargetMarker.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_TargetMarker_140adc318;
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
                plVar3[3] = (longlong) & PTR_u_TargetMarker_140adc318;
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
        DAT_140c64b30 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c642c0 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140240f30(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140240f52. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_TargetMarker_140a6d968, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c642c0 == 0) {
        iVar1 = FUN_140240d20();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140240f7c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64b30 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140240f80(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140240fa9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_TargetMarker_140a6d968, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c642c0 == 0) {
        iVar1 = FUN_140240d20();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140240fd7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64b30 + 0x18))(DAT_140c64b30, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140240fe0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140241009. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_TargetMarker_140a6d968, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c642c0 == 0) {
        iVar1 = FUN_140240d20();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140241037. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64b30 + 0x20))(DAT_140c64b30, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140241160(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64968 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"TaxiNode"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c647ec != 0) {
                iVar2 = _DAT_140c64f8c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_TaxiNode_140a60910;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\TaxiNode.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_TaxiNode_140a60910;
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
                plVar3[3] = (longlong) & PTR_u_TaxiNode_140a60910;
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
        DAT_140c64968 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c6497c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140241370(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140241392. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_TaxiNode_140a6d9a0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6497c == 0) {
        iVar1 = FUN_140241160();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402413bc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64968 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402413c0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402413e9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_TaxiNode_140a6d9a0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6497c == 0) {
        iVar1 = FUN_140241160();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140241417. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64968 + 0x18))(DAT_140c64968, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140241420(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140241449. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_TaxiNode_140a6d9a0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6497c == 0) {
        iVar1 = FUN_140241160();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140241477. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64968 + 0x20))(DAT_140c64968, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1402415a0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63ac0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"TaxiRoute"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c65480 != 0) {
                iVar2 = _DAT_140c63de4;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_TaxiRoute_140ace210;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\TaxiRoute.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_TaxiRoute_140ace210;
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
                plVar3[3] = (longlong) & PTR_u_TaxiRoute_140ace210;
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
        DAT_140c63ac0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64320 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402417b0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402417d2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_TaxiRoute_140a6d9d8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64320 == 0) {
        iVar1 = FUN_1402415a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402417fc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63ac0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140241860(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140241889. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_TaxiRoute_140a6d9d8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64320 == 0) {
        iVar1 = FUN_1402415a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402418b7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63ac0 + 0x20))(DAT_140c63ac0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1402419e0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c649b0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"TelegraphDamage"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c647c8 != 0) {
                iVar2 = _DAT_140c64b70;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_TelegraphDamage_140ad7a08;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\TelegraphDamage.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_TelegraphDamage_140ad7a08;
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
                plVar3[3] = (longlong) & PTR_u_TelegraphDamage_140ad7a08;
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
        DAT_140c649b0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63f48 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140241bf0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140241c12. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_TelegraphDamage_140a6da10, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63f48 == 0) {
        iVar1 = FUN_1402419e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140241c3c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c649b0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140241c40(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140241c69. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_TelegraphDamage_140a6da10, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63f48 == 0) {
        iVar1 = FUN_1402419e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140241c97. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c649b0 + 0x18))(DAT_140c649b0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140241ca0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140241cc9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_TelegraphDamage_140a6da10, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63f48 == 0) {
        iVar1 = FUN_1402419e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140241cf7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c649b0 + 0x20))(DAT_140c649b0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140241e20(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63d50 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"TicketCategory"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c6484c != 0) {
                iVar2 = _DAT_140c63a44;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_TicketCategory_140adcd08;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\TicketCategory.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_TicketCategory_140adcd08;
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
                plVar3[3] = (longlong) & PTR_u_TicketCategory_140adcd08;
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
        DAT_140c63d50 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63da0 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140242030(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140242052. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_TicketCategory_140a6da48, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63da0 == 0) {
        iVar1 = FUN_140241e20();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024207c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63d50 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140242080(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402420a9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_TicketCategory_140a6da48, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63da0 == 0) {
        iVar1 = FUN_140241e20();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402420d7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63d50 + 0x18))(DAT_140c63d50, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402420e0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140242109. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_TicketCategory_140a6da48, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63da0 == 0) {
        iVar1 = FUN_140241e20();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140242137. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63d50 + 0x20))(DAT_140c63d50, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140242260(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c65120 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"TicketSubCategory"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c65240 != 0) {
                iVar2 = _DAT_140c64b68;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_TicketSubCategory_140a7f6b8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\TicketSubCategory.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_TicketSubCategory_140a7f6b8;
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
                plVar3[3] = (longlong) & PTR_u_TicketSubCategory_140a7f6b8;
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
        DAT_140c65120 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c65238 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140242470(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140242492. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_TicketSubCategory_140a6da80, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65238 == 0) {
        iVar1 = FUN_140242260();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402424bc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65120 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402424c0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402424e9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_TicketSubCategory_140a6da80, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65238 == 0) {
        iVar1 = FUN_140242260();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140242517. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65120 + 0x18))(DAT_140c65120, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140242520(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140242549. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_TicketSubCategory_140a6da80, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65238 == 0) {
        iVar1 = FUN_140242260();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140242577. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65120 + 0x20))(DAT_140c65120, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1402426a0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c653c0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"TrackingSlot"), iVar2 == 0)
                ) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c638e4 != 0) {
                iVar2 = _DAT_140c63c80;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_TrackingSlot_140a64858;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\TrackingSlot.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_TrackingSlot_140a64858;
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
                plVar3[3] = (longlong) & PTR_u_TrackingSlot_140a64858;
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
        DAT_140c653c0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63c54 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402428b0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402428d2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_TrackingSlot_140a6dab8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63c54 == 0) {
        iVar1 = FUN_1402426a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402428fc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c653c0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140242900(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140242929. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_TrackingSlot_140a6dab8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63c54 == 0) {
        iVar1 = FUN_1402426a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140242957. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c653c0 + 0x18))(DAT_140c653c0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140242960(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140242989. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_TrackingSlot_140a6dab8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63c54 == 0) {
        iVar1 = FUN_1402426a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402429b7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c653c0 + 0x20))(DAT_140c653c0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140242ae0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64068 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"Tradeskill"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c6477c != 0) {
                iVar2 = _DAT_140c64ef8;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Tradeskill_140a5bfb8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Tradeskill.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Tradeskill_140a5bfb8;
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
                plVar3[3] = (longlong) & PTR_u_Tradeskill_140a5bfb8;
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
        DAT_140c64068 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64d70 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140242cf0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140242d12. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Tradeskill_140a6daf0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64d70 == 0) {
        iVar1 = FUN_140242ae0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140242d3c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64068 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140242d40(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140242d69. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_Tradeskill_140a6daf0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64d70 == 0) {
        iVar1 = FUN_140242ae0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140242d97. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64068 + 0x18))(DAT_140c64068, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140242da0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140242dc9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Tradeskill_140a6daf0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64d70 == 0) {
        iVar1 = FUN_140242ae0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140242df7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64068 + 0x20))(DAT_140c64068, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140242f20(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63e50 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"TradeskillAchievementLayout"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c65070 != 0) {
                iVar2 = _DAT_140c642a4;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_TradeskillAchievementLayout_140ad7408;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\TradeskillAchievementLayout.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_TradeskillAchievementLayout_140ad7408;
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
                plVar3[3] = (longlong) & PTR_u_TradeskillAchievementLayout_140ad7408;
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
        DAT_140c63e50 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64b14 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140243130(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140243152. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_TradeskillAchievementLayout_140a6db28, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64b14 == 0) {
        iVar1 = FUN_140242f20();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024317c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63e50 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402431e0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140243209. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_TradeskillAchievementLayout_140a6db28, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64b14 == 0) {
        iVar1 = FUN_140242f20();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140243237. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63e50 + 0x20))(DAT_140c63e50, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140243360(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c643a0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"TradeskillAchievementReward"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63f24 != 0) {
                iVar2 = _DAT_140c648dc;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_TradeskillAchievementReward_140a87718;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\TradeskillAchievementReward.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_TradeskillAchievementReward_140a87718;
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
                plVar3[3] = (longlong) & PTR_u_TradeskillAchievementReward_140a87718;
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
        DAT_140c643a0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63d5c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140243570(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140243592. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_TradeskillAchievementReward_140a6db60, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63d5c == 0) {
        iVar1 = FUN_140243360();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402435bc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c643a0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140243620(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140243649. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_TradeskillAchievementReward_140a6db60, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63d5c == 0) {
        iVar1 = FUN_140243360();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140243677. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c643a0 + 0x20))(DAT_140c643a0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1402437a0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64cb0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"TradeskillAdditive"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64468 != 0) {
                iVar2 = _DAT_140c640a8;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_TradeskillAdditive_140acd890;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\TradeskillAdditive.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_TradeskillAdditive_140acd890;
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
                plVar3[3] = (longlong) & PTR_u_TradeskillAdditive_140acd890;
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
        DAT_140c64cb0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64e9c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402439b0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402439d2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_TradeskillAdditive_140a6db98, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64e9c == 0) {
        iVar1 = FUN_1402437a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402439fc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64cb0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140243a00(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140243a29. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_TradeskillAdditive_140a6db98, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64e9c == 0) {
        iVar1 = FUN_1402437a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140243a57. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64cb0 + 0x18))(DAT_140c64cb0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140243a60(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140243a89. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_TradeskillAdditive_140a6db98, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64e9c == 0) {
        iVar1 = FUN_1402437a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140243ab7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64cb0 + 0x20))(DAT_140c64cb0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140243be0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64e30 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"TradeskillBonus"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64478 != 0) {
                iVar2 = _DAT_140c63af8;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_TradeskillBonus_140adac28;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\TradeskillBonus.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_TradeskillBonus_140adac28;
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
                plVar3[3] = (longlong) & PTR_u_TradeskillBonus_140adac28;
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
        DAT_140c64e30 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c65174 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140243df0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140243e12. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_TradeskillBonus_140a6dbd0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65174 == 0) {
        iVar1 = FUN_140243be0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140243e3c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64e30 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140243e40(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140243e69. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_TradeskillBonus_140a6dbd0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65174 == 0) {
        iVar1 = FUN_140243be0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140243e97. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64e30 + 0x18))(DAT_140c64e30, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140243ea0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140243ec9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_TradeskillBonus_140a6dbd0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65174 == 0) {
        iVar1 = FUN_140243be0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140243ef7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64e30 + 0x20))(DAT_140c64e30, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140244020(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63968 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"TradeskillCatalyst"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64290 != 0) {
                iVar2 = _DAT_140c641ac;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_TradeskillCatalyst_140ad0288;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\TradeskillCatalyst.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_TradeskillCatalyst_140ad0288;
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
                plVar3[3] = (longlong) & PTR_u_TradeskillCatalyst_140ad0288;
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
        DAT_140c63968 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64338 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140244230(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140244252. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_TradeskillCatalyst_140a6dc08, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64338 == 0) {
        iVar1 = FUN_140244020();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024427c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63968 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140244280(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402442a9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_TradeskillCatalyst_140a6dc08, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64338 == 0) {
        iVar1 = FUN_140244020();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402442d7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63968 + 0x18))(DAT_140c63968, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402442e0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140244309. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_TradeskillCatalyst_140a6dc08, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64338 == 0) {
        iVar1 = FUN_140244020();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140244337. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63968 + 0x20))(DAT_140c63968, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140244460(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64b38 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"TradeskillCatalystOrdering"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63910 != 0) {
                iVar2 = _DAT_140c6479c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_TradeskillCatalystOrdering_140a51178;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\TradeskillCatalystOrdering.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_TradeskillCatalystOrdering_140a51178;
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
                plVar3[3] = (longlong) & PTR_u_TradeskillCatalystOrdering_140a51178;
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
        DAT_140c64b38 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64f94 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140244670(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140244692. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_TradeskillCatalystOrdering_140a6dc40, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64f94 == 0) {
        iVar1 = FUN_140244460();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402446bc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64b38 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140244720(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140244749. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_TradeskillCatalystOrdering_140a6dc40, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64f94 == 0) {
        iVar1 = FUN_140244460();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140244777. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64b38 + 0x20))(DAT_140c64b38, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1402448a0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c646e0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"TradeskillHarvestingInfo"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c646ac != 0) {
                iVar2 = _DAT_140c63880;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_TradeskillHarvestingInfo_140ad37b0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\TradeskillHarvestingInfo.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_TradeskillHarvestingInfo_140ad37b0;
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
                plVar3[3] = (longlong) & PTR_u_TradeskillHarvestingInfo_140ad37b0;
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
        DAT_140c646e0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c65320 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140244ab0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140244ad2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_TradeskillHarvestingInfo_140a6dc78, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65320 == 0) {
        iVar1 = FUN_1402448a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140244afc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c646e0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140244b00(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140244b29. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_TradeskillHarvestingInfo_140a6dc78, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65320 == 0) {
        iVar1 = FUN_1402448a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140244b57. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c646e0 + 0x18))(DAT_140c646e0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140244b60(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140244b89. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_TradeskillHarvestingInfo_140a6dc78, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65320 == 0) {
        iVar1 = FUN_1402448a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140244bb7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c646e0 + 0x20))(DAT_140c646e0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140244ce0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63978 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"TradeskillMaterial"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64c50 != 0) {
                iVar2 = _DAT_140c64d3c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_TradeskillMaterial_140a82998;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\TradeskillMaterial.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_TradeskillMaterial_140a82998;
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
                plVar3[3] = (longlong) & PTR_u_TradeskillMaterial_140a82998;
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
        DAT_140c63978 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63f58 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140244ef0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140244f12. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_TradeskillMaterial_140a6dcb0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63f58 == 0) {
        iVar1 = FUN_140244ce0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140244f3c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63978 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140244f40(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140244f69. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_TradeskillMaterial_140a6dcb0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63f58 == 0) {
        iVar1 = FUN_140244ce0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140244f97. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63978 + 0x18))(DAT_140c63978, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140244fa0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140244fc9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_TradeskillMaterial_140a6dcb0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63f58 == 0) {
        iVar1 = FUN_140244ce0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140244ff7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63978 + 0x20))(DAT_140c63978, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140245120(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c649f0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"TradeskillMaterialCategory"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64c60 != 0) {
                iVar2 = _DAT_140c63bcc;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_TradeskillMaterialCategory_140ad7920;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\TradeskillMaterialCategory.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_TradeskillMaterialCategory_140ad7920;
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
                plVar3[3] = (longlong) & PTR_u_TradeskillMaterialCategory_140ad7920;
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
        DAT_140c649f0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63e04 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140245330(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140245352. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_TradeskillMaterialCategory_140a6dce8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63e04 == 0) {
        iVar1 = FUN_140245120();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024537c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c649f0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140245380(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402453a9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_TradeskillMaterialCategory_140a6dce8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63e04 == 0) {
        iVar1 = FUN_140245120();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402453d7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c649f0 + 0x18))(DAT_140c649f0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402453e0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140245409. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_TradeskillMaterialCategory_140a6dce8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63e04 == 0) {
        iVar1 = FUN_140245120();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140245437. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c649f0 + 0x20))(DAT_140c649f0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140245560(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64828 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"TradeskillProficiency"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c640c4 != 0) {
                iVar2 = _DAT_140c64630;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_TradeskillProficiency_140acd0e0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\TradeskillProficiency.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_TradeskillProficiency_140acd0e0;
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
                plVar3[3] = (longlong) & PTR_u_TradeskillProficiency_140acd0e0;
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
        DAT_140c64828 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63de8 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140245770(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140245792. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_TradeskillProficiency_140a6dd20, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63de8 == 0) {
        iVar1 = FUN_140245560();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402457bc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64828 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140245820(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140245849. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_TradeskillProficiency_140a6dd20, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63de8 == 0) {
        iVar1 = FUN_140245560();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140245877. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64828 + 0x20))(DAT_140c64828, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1402459a0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63868 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"TradeskillSchematic2"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63ac8 != 0) {
                iVar2 = _DAT_140c64e74;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_TradeskillSchematic2_140ad36b8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\TradeskillSchematic2.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_TradeskillSchematic2_140ad36b8;
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
                plVar3[3] = (longlong) & PTR_u_TradeskillSchematic2_140ad36b8;
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
        DAT_140c63868 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c654f8 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140245bb0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140245bd2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_TradeskillSchematic2_140a6dd58, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c654f8 == 0) {
        iVar1 = FUN_1402459a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140245bfc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63868 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140245c00(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140245c29. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_TradeskillSchematic2_140a6dd58, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c654f8 == 0) {
        iVar1 = FUN_1402459a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140245c57. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63868 + 0x18))(DAT_140c63868, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140245c60(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140245c89. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_TradeskillSchematic2_140a6dd58, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c654f8 == 0) {
        iVar1 = FUN_1402459a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140245cb7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63868 + 0x20))(DAT_140c63868, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140245de0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63b08 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"TradeskillTalentTier"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c65080 != 0) {
                iVar2 = _DAT_140c63928;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_TradeskillTalentTier_140a66c58;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\TradeskillTalentTier.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_TradeskillTalentTier_140a66c58;
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
                plVar3[3] = (longlong) & PTR_u_TradeskillTalentTier_140a66c58;
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
        DAT_140c63b08 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64d74 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140245ff0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140246012. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_TradeskillTalentTier_140a6dd90, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64d74 == 0) {
        iVar1 = FUN_140245de0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024603c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63b08 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140246040(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140246069. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_TradeskillTalentTier_140a6dd90, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64d74 == 0) {
        iVar1 = FUN_140245de0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140246097. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63b08 + 0x18))(DAT_140c63b08, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402460a0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402460c9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_TradeskillTalentTier_140a6dd90, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64d74 == 0) {
        iVar1 = FUN_140245de0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402460f7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63b08 + 0x20))(DAT_140c63b08, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140246220(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64160 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"TradeskillTier"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c650f0 != 0) {
                iVar2 = _DAT_140c64034;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_TradeskillTier_140a7d200;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\TradeskillTier.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_TradeskillTier_140a7d200;
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
                plVar3[3] = (longlong) & PTR_u_TradeskillTier_140a7d200;
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
        DAT_140c64160 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63e34 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140246430(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140246452. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_TradeskillTier_140a6ddc8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63e34 == 0) {
        iVar1 = FUN_140246220();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024647c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64160 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140246480(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402464a9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_TradeskillTier_140a6ddc8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63e34 == 0) {
        iVar1 = FUN_140246220();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402464d7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64160 + 0x18))(DAT_140c64160, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402464e0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140246509. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_TradeskillTier_140a6ddc8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63e34 == 0) {
        iVar1 = FUN_140246220();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140246537. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64160 + 0x20))(DAT_140c64160, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140246660(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c65608 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"Tutorial"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c642c8 != 0) {
                iVar2 = _DAT_140c65170;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Tutorial_140a73908;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Tutorial.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Tutorial_140a73908;
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
                plVar3[3] = (longlong) & PTR_u_Tutorial_140a73908;
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
        DAT_140c65608 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63a30 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140246870(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140246892. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Tutorial_140a6de00, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63a30 == 0) {
        iVar1 = FUN_140246660();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402468bc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65608 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140246920(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140246949. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Tutorial_140a6de00, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63a30 == 0) {
        iVar1 = FUN_140246660();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140246977. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65608 + 0x20))(DAT_140c65608, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140246aa0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64138 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"TutorialAnchor"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64b08 != 0) {
                iVar2 = _DAT_140c63f90;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_TutorialAnchor_140a61950;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\TutorialAnchor.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_TutorialAnchor_140a61950;
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
                plVar3[3] = (longlong) & PTR_u_TutorialAnchor_140a61950;
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
        DAT_140c64138 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64144 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140246cb0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140246cd2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_TutorialAnchor_140a6de38, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64144 == 0) {
        iVar1 = FUN_140246aa0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140246cfc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64138 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140246d00(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140246d29. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_TutorialAnchor_140a6de38, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64144 == 0) {
        iVar1 = FUN_140246aa0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140246d57. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64138 + 0x18))(DAT_140c64138, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140246d60(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140246d89. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_TutorialAnchor_140a6de38, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64144 == 0) {
        iVar1 = FUN_140246aa0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140246db7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64138 + 0x20))(DAT_140c64138, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140246ee0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c65160 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"TutorialLayout"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c65198 != 0) {
                iVar2 = _DAT_140c6433c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_TutorialLayout_140ade4c8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\TutorialLayout.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_TutorialLayout_140ade4c8;
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
                plVar3[3] = (longlong) & PTR_u_TutorialLayout_140ade4c8;
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
        DAT_140c65160 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64114 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402470f0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140247112. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_TutorialLayout_140a6de70, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64114 == 0) {
        iVar1 = FUN_140246ee0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024713c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65160 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140247140(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140247169. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_TutorialLayout_140a6de70, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64114 == 0) {
        iVar1 = FUN_140246ee0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140247197. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65160 + 0x18))(DAT_140c65160, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402471a0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402471c9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_TutorialLayout_140a6de70, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64114 == 0) {
        iVar1 = FUN_140246ee0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402471f7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65160 + 0x20))(DAT_140c65160, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140247320(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64130 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"TutorialPage"), iVar2 == 0)
                ) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c65288 != 0) {
                iVar2 = _DAT_140c638a8;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_TutorialPage_140a7b8a8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\TutorialPage.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_TutorialPage_140a7b8a8;
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
                plVar3[3] = (longlong) & PTR_u_TutorialPage_140a7b8a8;
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
        DAT_140c64130 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64214 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140247530(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140247552. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_TutorialPage_140a6dea8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64214 == 0) {
        iVar1 = FUN_140247320();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014024757c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64130 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}

