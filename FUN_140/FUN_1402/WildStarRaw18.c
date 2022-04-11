//
// Created by flop on 04.04.22.
//
#include "../../include.h"

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140211020(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64188 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"LocalizedText"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63b24 != 0) {
                iVar2 = _DAT_140c65074;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_LocalizedText_140a4bab0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\LocalizedText.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_LocalizedText_140a4bab0;
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
                plVar3[3] = (longlong) & PTR_u_LocalizedText_140a4bab0;
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
        DAT_140c64188 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64af4 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140211230(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140211252. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_LocalizedText_140a6b208, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64af4 == 0) {
        iVar1 = FUN_140211020();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021127c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64188 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140211280(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402112a9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_LocalizedText_140a6b208, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64af4 == 0) {
        iVar1 = FUN_140211020();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402112d7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64188 + 0x18))(DAT_140c64188, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402112e0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140211309. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_LocalizedText_140a6b208, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64af4 == 0) {
        iVar1 = FUN_140211020();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140211337. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64188 + 0x20))(DAT_140c64188, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140211460(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64508 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"LootPinataInfo"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63ffc != 0) {
                iVar2 = _DAT_140c64b94;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_LootPinataInfo_140a889c8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\LootPinataInfo.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_LootPinataInfo_140a889c8;
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
                plVar3[3] = (longlong) & PTR_u_LootPinataInfo_140a889c8;
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
        DAT_140c64508 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c642e8 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140211670(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140211692. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_LootPinataInfo_140a6b240, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c642e8 == 0) {
        iVar1 = FUN_140211460();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402116bc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64508 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402116c0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402116e9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_LootPinataInfo_140a6b240, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c642e8 == 0) {
        iVar1 = FUN_140211460();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140211717. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64508 + 0x18))(DAT_140c64508, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140211720(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140211749. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_LootPinataInfo_140a6b240, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c642e8 == 0) {
        iVar1 = FUN_140211460();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140211777. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64508 + 0x20))(DAT_140c64508, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1402118a0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64f00 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"LootSpell"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63fe4 != 0) {
                iVar2 = _DAT_140c64eac;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_LootSpell_140a6f838;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\LootSpell.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_LootSpell_140a6f838;
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
                plVar3[3] = (longlong) & PTR_u_LootSpell_140a6f838;
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
        DAT_140c64f00 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63be8 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140211ab0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140211ad2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_LootSpell_140a6b278, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63be8 == 0) {
        iVar1 = FUN_1402118a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140211afc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64f00 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140211b00(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140211b29. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_LootSpell_140a6b278, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63be8 == 0) {
        iVar1 = FUN_1402118a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140211b57. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64f00 + 0x18))(DAT_140c64f00, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140211b60(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140211b89. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_LootSpell_140a6b278, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63be8 == 0) {
        iVar1 = FUN_1402118a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140211bb7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64f00 + 0x20))(DAT_140c64f00, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140211ce0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64278 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"LuaEvent"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c642cc != 0) {
                iVar2 = _DAT_140c647dc;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_LuaEvent_140acb748;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\LuaEvent.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_LuaEvent_140acb748;
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
                plVar3[3] = (longlong) & PTR_u_LuaEvent_140acb748;
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
        DAT_140c64278 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c653ec = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140211ef0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140211f12. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_LuaEvent_140a6b2b0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c653ec == 0) {
        iVar1 = FUN_140211ce0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140211f3c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64278 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140211f40(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140211f69. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_LuaEvent_140a6b2b0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c653ec == 0) {
        iVar1 = FUN_140211ce0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140211f97. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64278 + 0x18))(DAT_140c64278, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140211fa0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140211fc9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_LuaEvent_140a6b2b0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c653ec == 0) {
        iVar1 = FUN_140211ce0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140211ff7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64278 + 0x20))(DAT_140c64278, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140212120(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c652a8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"MapContinent"), iVar2 == 0)
                ) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c651d0 != 0) {
                iVar2 = _DAT_140c64840;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_MapContinent_140ae0f70;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\MapContinent.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_MapContinent_140ae0f70;
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
                plVar3[3] = (longlong) & PTR_u_MapContinent_140ae0f70;
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
        DAT_140c652a8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c642bc = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140212330(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140212352. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_MapContinent_140a6b2e8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c642bc == 0) {
        iVar1 = FUN_140212120();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021237c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c652a8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402123e0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140212409. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_MapContinent_140a6b2e8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c642bc == 0) {
        iVar1 = FUN_140212120();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140212437. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c652a8 + 0x20))(DAT_140c652a8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140212560(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63bd0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"MapZone"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c65394 != 0) {
                iVar2 = _DAT_140c649dc;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_MapZone_140a790e0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\MapZone.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_MapZone_140a790e0;
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
                plVar3[3] = (longlong) & PTR_u_MapZone_140a790e0;
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
        DAT_140c63bd0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c65370 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140212770(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140212792. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_MapZone_140a6b320, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65370 == 0) {
        iVar1 = FUN_140212560();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402127bc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63bd0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140212820(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140212849. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_MapZone_140a6b320, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65370 == 0) {
        iVar1 = FUN_140212560();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140212877. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63bd0 + 0x20))(DAT_140c63bd0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1402129a0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63ab8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"MapZoneHex"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63b54 != 0) {
                iVar2 = _DAT_140c63e28;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_MapZoneHex_140a80d88;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\MapZoneHex.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_MapZoneHex_140a80d88;
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
                plVar3[3] = (longlong) & PTR_u_MapZoneHex_140a80d88;
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
        DAT_140c63ab8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63e08 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140212bb0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140212bd2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_MapZoneHex_140a6b358, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63e08 == 0) {
        iVar1 = FUN_1402129a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140212bfc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63ab8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140212c60(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140212c89. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_MapZoneHex_140a6b358, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63e08 == 0) {
        iVar1 = FUN_1402129a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140212cb7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63ab8 + 0x20))(DAT_140c63ab8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140212de0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64888 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"MapZoneHexGroup"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c6423c != 0) {
                iVar2 = _DAT_140c63e14;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_MapZoneHexGroup_140a5ed48;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\MapZoneHexGroup.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_MapZoneHexGroup_140a5ed48;
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
                plVar3[3] = (longlong) & PTR_u_MapZoneHexGroup_140a5ed48;
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
        DAT_140c64888 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63a98 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140212ff0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140213012. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_MapZoneHexGroup_140a6b390, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63a98 == 0) {
        iVar1 = FUN_140212de0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021303c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64888 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140213040(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140213069. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_MapZoneHexGroup_140a6b390, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63a98 == 0) {
        iVar1 = FUN_140212de0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140213097. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64888 + 0x18))(DAT_140c64888, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402130a0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402130c9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_MapZoneHexGroup_140a6b390, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63a98 == 0) {
        iVar1 = FUN_140212de0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402130f7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64888 + 0x20))(DAT_140c64888, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140213220(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c644a0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"MapZoneHexGroupEntry"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c6527c != 0) {
                iVar2 = _DAT_140c64fb8;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_MapZoneHexGroupEntry_140a64368;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\MapZoneHexGroupEntry.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_MapZoneHexGroupEntry_140a64368;
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
                plVar3[3] = (longlong) & PTR_u_MapZoneHexGroupEntry_140a64368;
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
        DAT_140c644a0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64b1c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140213430(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140213452. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_MapZoneHexGroupEntry_140a6b3c8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64b1c == 0) {
        iVar1 = FUN_140213220();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021347c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c644a0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402134e0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140213509. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_MapZoneHexGroupEntry_140a6b3c8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64b1c == 0) {
        iVar1 = FUN_140213220();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140213537. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c644a0 + 0x20))(DAT_140c644a0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140213660(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63890 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"MapZoneLevelBand"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63ef8 != 0) {
                iVar2 = _DAT_140c651d4;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_MapZoneLevelBand_140ae0040;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\MapZoneLevelBand.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_MapZoneLevelBand_140ae0040;
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
                plVar3[3] = (longlong) & PTR_u_MapZoneLevelBand_140ae0040;
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
        DAT_140c63890 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c651f8 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140213870(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140213892. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_MapZoneLevelBand_140a6b400, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c651f8 == 0) {
        iVar1 = FUN_140213660();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402138bc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63890 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140213920(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140213949. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_MapZoneLevelBand_140a6b400, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c651f8 == 0) {
        iVar1 = FUN_140213660();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140213977. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63890 + 0x20))(DAT_140c63890, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140213aa0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c645e8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"MapZoneNemesisRegion"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63d20 != 0) {
                iVar2 = _DAT_140c647a4;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_MapZoneNemesisRegion_140acbdc0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\MapZoneNemesisRegion.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_MapZoneNemesisRegion_140acbdc0;
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
                plVar3[3] = (longlong) & PTR_u_MapZoneNemesisRegion_140acbdc0;
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
        DAT_140c645e8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63900 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140213cb0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140213cd2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_MapZoneNemesisRegion_140a6b438, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63900 == 0) {
        iVar1 = FUN_140213aa0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140213cfc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c645e8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140213d00(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140213d29. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_MapZoneNemesisRegion_140a6b438, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63900 == 0) {
        iVar1 = FUN_140213aa0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140213d57. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c645e8 + 0x18))(DAT_140c645e8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140213d60(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140213d89. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_MapZoneNemesisRegion_140a6b438, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63900 == 0) {
        iVar1 = FUN_140213aa0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140213db7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c645e8 + 0x20))(DAT_140c645e8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140213ee0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64998 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"MapZonePOI"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c644c4 != 0) {
                iVar2 = _DAT_140c65318;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_MapZonePOI_140a83568;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\MapZonePOI.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_MapZonePOI_140a83568;
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
                plVar3[3] = (longlong) & PTR_u_MapZonePOI_140a83568;
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
        DAT_140c64998 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c6431c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402140f0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140214112. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_MapZonePOI_140a6b470, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6431c == 0) {
        iVar1 = FUN_140213ee0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021413c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64998 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402141a0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402141c9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_MapZonePOI_140a6b470, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6431c == 0) {
        iVar1 = FUN_140213ee0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402141f7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64998 + 0x20))(DAT_140c64998, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140214320(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63c38 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"MapZoneSprite"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63d7c != 0) {
                iVar2 = _DAT_140c65630;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_MapZoneSprite_140ae2700;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\MapZoneSprite.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_MapZoneSprite_140ae2700;
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
                plVar3[3] = (longlong) & PTR_u_MapZoneSprite_140ae2700;
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
        DAT_140c63c38 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64ce4 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140214530(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140214552. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_MapZoneSprite_140a6b4a8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64ce4 == 0) {
        iVar1 = FUN_140214320();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021457c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63c38 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402145e0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140214609. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_MapZoneSprite_140a6b4a8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64ce4 == 0) {
        iVar1 = FUN_140214320();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140214637. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63c38 + 0x20))(DAT_140c63c38, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140214760(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c65580 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"MapZoneWorldJoin"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64f48 != 0) {
                iVar2 = _DAT_140c65264;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_MapZoneWorldJoin_140a6f290;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\MapZoneWorldJoin.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_MapZoneWorldJoin_140a6f290;
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
                plVar3[3] = (longlong) & PTR_u_MapZoneWorldJoin_140a6f290;
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
        DAT_140c65580 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c652cc = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140214970(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140214992. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_MapZoneWorldJoin_140a6b4e0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c652cc == 0) {
        iVar1 = FUN_140214760();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402149bc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65580 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140214a20(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140214a49. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_MapZoneWorldJoin_140a6b4e0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c652cc == 0) {
        iVar1 = FUN_140214760();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140214a77. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65580 + 0x20))(DAT_140c65580, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140214ba0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c652e0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"MatchingGameType"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64060 != 0) {
                iVar2 = _DAT_140c64038;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_MatchingGameType_140a59f00;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\MatchingGameType.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_MatchingGameType_140a59f00;
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
                plVar3[3] = (longlong) & PTR_u_MatchingGameType_140a59f00;
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
        DAT_140c652e0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c6417c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140214db0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140214dd2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_MatchingGameType_140a6b518, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6417c == 0) {
        iVar1 = FUN_140214ba0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140214dfc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c652e0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140214e00(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140214e29. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_MatchingGameType_140a6b518, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6417c == 0) {
        iVar1 = FUN_140214ba0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140214e57. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c652e0 + 0x18))(DAT_140c652e0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140214e60(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140214e89. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_MatchingGameType_140a6b518, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6417c == 0) {
        iVar1 = FUN_140214ba0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140214eb7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c652e0 + 0x20))(DAT_140c652e0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140214fe0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c641f0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"MatchingGameMap"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64be0 != 0) {
                iVar2 = _DAT_140c644f4;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_MatchingGameMap_140ad0d18;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\MatchingGameMap.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_MatchingGameMap_140ad0d18;
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
                plVar3[3] = (longlong) & PTR_u_MatchingGameMap_140ad0d18;
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
        DAT_140c641f0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c65558 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402151f0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140215212. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_MatchingGameMap_140a6b550, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65558 == 0) {
        iVar1 = FUN_140214fe0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021523c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c641f0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140215240(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140215269. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_MatchingGameMap_140a6b550, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65558 == 0) {
        iVar1 = FUN_140214fe0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140215297. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c641f0 + 0x18))(DAT_140c641f0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402152a0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402152c9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_MatchingGameMap_140a6b550, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65558 == 0) {
        iVar1 = FUN_140214fe0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402152f7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c641f0 + 0x20))(DAT_140c641f0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140215420(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64d10 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"MatchingRandomReward"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c65658 != 0) {
                iVar2 = _DAT_140c65440;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_MatchingRandomReward_140ad57a8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\MatchingRandomReward.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_MatchingRandomReward_140ad57a8;
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
                plVar3[3] = (longlong) & PTR_u_MatchingRandomReward_140ad57a8;
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
        DAT_140c64d10 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c6558c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140215630(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140215652. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_MatchingRandomReward_140a6b588, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6558c == 0) {
        iVar1 = FUN_140215420();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021567c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64d10 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402156e0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140215709. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_MatchingRandomReward_140a6b588, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6558c == 0) {
        iVar1 = FUN_140215420();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140215737. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64d10 + 0x20))(DAT_140c64d10, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140215860(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63930 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"MatchingMapPrerequisite"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64ef4 != 0) {
                iVar2 = _DAT_140c64b10;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_MatchingMapPrerequisite_140a80e38;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\MatchingMapPrerequisite.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_MatchingMapPrerequisite_140a80e38;
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
                plVar3[3] = (longlong) & PTR_u_MatchingMapPrerequisite_140a80e38;
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
        DAT_140c63930 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64ca8 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140215a70(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140215a92. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_MatchingMapPrerequisite_140a6b5c0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64ca8 == 0) {
        iVar1 = FUN_140215860();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140215abc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63930 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140215b20(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140215b49. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_MatchingMapPrerequisite_140a6b5c0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64ca8 == 0) {
        iVar1 = FUN_140215860();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140215b77. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63930 + 0x20))(DAT_140c63930, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140215ca0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c654d8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"MatchTypeRewardRotationContent"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c655d8 != 0) {
                iVar2 = _DAT_140c649cc;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_MatchTypeRewardRotationContent_140a5a978;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\MatchTypeRewardRotationContent.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_MatchTypeRewardRotationContent_140a5a978;
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
                plVar3[3] = (longlong) & PTR_u_MatchTypeRewardRotationContent_140a5a978;
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
        DAT_140c654d8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c65454 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140215eb0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140215ed2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_MatchTypeRewardRotationContent_140a6b5f8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65454 == 0) {
        iVar1 = FUN_140215ca0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140215efc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c654d8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140215f60(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140215f89. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_MatchTypeRewardRotationContent_140a6b5f8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65454 == 0) {
        iVar1 = FUN_140215ca0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140215fb7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c654d8 + 0x20))(DAT_140c654d8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1402160e0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63a78 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"MaterialData"), iVar2 == 0)
                ) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c65478 != 0) {
                iVar2 = _DAT_140c645f8;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_MaterialData_140a869a0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\MaterialData.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_MaterialData_140a869a0;
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
                plVar3[3] = (longlong) & PTR_u_MaterialData_140a869a0;
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
        DAT_140c63a78 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c655ec = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402162f0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140216312. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_MaterialData_140a6b630, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c655ec == 0) {
        iVar1 = FUN_1402160e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021633c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63a78 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140216340(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140216369. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_MaterialData_140a6b630, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c655ec == 0) {
        iVar1 = FUN_1402160e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140216397. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63a78 + 0x18))(DAT_140c63a78, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402163a0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402163c9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_MaterialData_140a6b630, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c655ec == 0) {
        iVar1 = FUN_1402160e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402163f7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63a78 + 0x20))(DAT_140c63a78, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140216520(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64918 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"MaterialRemap"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64c78 != 0) {
                iVar2 = _DAT_140c64228;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_MaterialRemap_140a66b78;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\MaterialRemap.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_MaterialRemap_140a66b78;
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
                plVar3[3] = (longlong) & PTR_u_MaterialRemap_140a66b78;
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
        DAT_140c64918 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63dd4 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140216730(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140216752. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_MaterialRemap_140a6b668, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63dd4 == 0) {
        iVar1 = FUN_140216520();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021677c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64918 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402167e0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140216809. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_MaterialRemap_140a6b668, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63dd4 == 0) {
        iVar1 = FUN_140216520();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140216837. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64918 + 0x20))(DAT_140c64918, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140216960(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64908 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"MaterialSet"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c6561c != 0) {
                iVar2 = _DAT_140c64c40;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_MaterialSet_140ad7e88;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\MaterialSet.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_MaterialSet_140ad7e88;
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
                plVar3[3] = (longlong) & PTR_u_MaterialSet_140ad7e88;
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
        DAT_140c64908 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64578 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140216b70(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140216b92. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_MaterialSet_140a6b6a0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64578 == 0) {
        iVar1 = FUN_140216960();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140216bbc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64908 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140216c20(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140216c49. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_MaterialSet_140a6b6a0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64578 == 0) {
        iVar1 = FUN_140216960();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140216c77. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64908 + 0x20))(DAT_140c64908, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140216da0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64fa8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"MaterialType"), iVar2 == 0)
                ) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c65058 != 0) {
                iVar2 = _DAT_140c64ebc;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_MaterialType_140a76a60;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\MaterialType.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_MaterialType_140a76a60;
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
                plVar3[3] = (longlong) & PTR_u_MaterialType_140a76a60;
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
        DAT_140c64fa8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64210 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140216fb0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140216fd2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_MaterialType_140a6b6d8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64210 == 0) {
        iVar1 = FUN_140216da0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140216ffc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64fa8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140217060(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140217089. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_MaterialType_140a6b6d8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64210 == 0) {
        iVar1 = FUN_140216da0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402170b7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64fa8 + 0x20))(DAT_140c64fa8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1402171e0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c65548 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"MiniMapMarker"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64530 != 0) {
                iVar2 = _DAT_140c647bc;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_MiniMapMarker_140a88490;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\MiniMapMarker.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_MiniMapMarker_140a88490;
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
                plVar3[3] = (longlong) & PTR_u_MiniMapMarker_140a88490;
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
        DAT_140c65548 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c6565c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402173f0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140217412. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_MiniMapMarker_140a6b710, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6565c == 0) {
        iVar1 = FUN_1402171e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021743c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65548 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140217440(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140217469. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_MiniMapMarker_140a6b710, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6565c == 0) {
        iVar1 = FUN_1402171e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140217497. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65548 + 0x18))(DAT_140c65548, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402174a0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402174c9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_MiniMapMarker_140a6b710, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6565c == 0) {
        iVar1 = FUN_1402171e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402174f7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65548 + 0x20))(DAT_140c65548, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140217620(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64220 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"MissileRevolverTrack"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63bc8 != 0) {
                iVar2 = _DAT_140c64004;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_MissileRevolverTrack_140ada998;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\MissileRevolverTrack.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_MissileRevolverTrack_140ada998;
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
                plVar3[3] = (longlong) & PTR_u_MissileRevolverTrack_140ada998;
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
        DAT_140c64220 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c639f0 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140217830(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140217852. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_MissileRevolverTrack_140a6b748, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c639f0 == 0) {
        iVar1 = FUN_140217620();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021787c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64220 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140217880(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402178a9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_MissileRevolverTrack_140a6b748, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c639f0 == 0) {
        iVar1 = FUN_140217620();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402178d7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64220 + 0x18))(DAT_140c64220, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402178e0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140217909. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_MissileRevolverTrack_140a6b748, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c639f0 == 0) {
        iVar1 = FUN_140217620();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140217937. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64220 + 0x20))(DAT_140c64220, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140217a60(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c65358 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"ModelAttachment"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63950 != 0) {
                iVar2 = _DAT_140c64d54;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_ModelAttachment_140acfef8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\ModelAttachment.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_ModelAttachment_140acfef8;
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
                plVar3[3] = (longlong) & PTR_u_ModelAttachment_140acfef8;
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
        DAT_140c65358 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64c4c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140217c70(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140217c92. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_ModelAttachment_140a6b780, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64c4c == 0) {
        iVar1 = FUN_140217a60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140217cbc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65358 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140217d20(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140217d49. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_ModelAttachment_140a6b780, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64c4c == 0) {
        iVar1 = FUN_140217a60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140217d77. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65358 + 0x20))(DAT_140c65358, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140217ea0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c643b0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"ModelBone"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64dc8 != 0) {
                iVar2 = _DAT_140c63f38;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_ModelBone_140adffe0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\ModelBone.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_ModelBone_140adffe0;
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
                plVar3[3] = (longlong) & PTR_u_ModelBone_140adffe0;
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
        DAT_140c643b0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63ad4 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402180b0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402180d2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_ModelBone_140a6b7b8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63ad4 == 0) {
        iVar1 = FUN_140217ea0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402180fc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c643b0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140218160(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140218189. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_ModelBone_140a6b7b8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63ad4 == 0) {
        iVar1 = FUN_140217ea0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402181b7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c643b0 + 0x20))(DAT_140c643b0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1402182e0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64878 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"ModelBonePriority"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63f74 != 0) {
                iVar2 = _DAT_140c64848;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_ModelBonePriority_140ad5908;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\ModelBonePriority.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_ModelBonePriority_140ad5908;
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
                plVar3[3] = (longlong) & PTR_u_ModelBonePriority_140ad5908;
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
        DAT_140c64878 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c65094 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402184f0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140218512. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_ModelBonePriority_140a6b7f0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65094 == 0) {
        iVar1 = FUN_1402182e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021853c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64878 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402185a0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402185c9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_ModelBonePriority_140a6b7f0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65094 == 0) {
        iVar1 = FUN_1402182e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402185f7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64878 + 0x20))(DAT_140c64878, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140218720(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63b60 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"ModelBoneSet"), iVar2 == 0)
                ) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c65504 != 0) {
                iVar2 = _DAT_140c6464c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_ModelBoneSet_140ad0860;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\ModelBoneSet.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_ModelBoneSet_140ad0860;
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
                plVar3[3] = (longlong) & PTR_u_ModelBoneSet_140ad0860;
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
        DAT_140c63b60 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64710 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140218930(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140218952. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_ModelBoneSet_140a6b828, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64710 == 0) {
        iVar1 = FUN_140218720();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021897c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63b60 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402189e0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140218a09. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_ModelBoneSet_140a6b828, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64710 == 0) {
        iVar1 = FUN_140218720();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140218a37. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63b60 + 0x20))(DAT_140c63b60, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140218b60(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63eb8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"ModelCamera"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c641f8 != 0) {
                iVar2 = _DAT_140c65284;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_ModelCamera_140ad2418;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\ModelCamera.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_ModelCamera_140ad2418;
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
                plVar3[3] = (longlong) & PTR_u_ModelCamera_140ad2418;
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
        DAT_140c63eb8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c6466c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140218d70(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140218d92. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_ModelCamera_140a6b860, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6466c == 0) {
        iVar1 = FUN_140218b60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140218dbc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63eb8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140218dc0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140218de9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_ModelCamera_140a6b860, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6466c == 0) {
        iVar1 = FUN_140218b60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140218e17. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63eb8 + 0x18))(DAT_140c63eb8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140218e20(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140218e49. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_ModelCamera_140a6b860, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6466c == 0) {
        iVar1 = FUN_140218b60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140218e77. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63eb8 + 0x20))(DAT_140c63eb8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140218fa0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64ea0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"ModelCluster"), iVar2 == 0)
                ) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63ca8 != 0) {
                iVar2 = _DAT_140c65568;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_ModelCluster_140acd620;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\ModelCluster.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_ModelCluster_140acd620;
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
                plVar3[3] = (longlong) & PTR_u_ModelCluster_140acd620;
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
        DAT_140c64ea0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64098 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402191b0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402191d2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_ModelCluster_140a6b898, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64098 == 0) {
        iVar1 = FUN_140218fa0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402191fc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64ea0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140219260(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140219289. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_ModelCluster_140a6b898, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64098 == 0) {
        iVar1 = FUN_140218fa0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402192b7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64ea0 + 0x20))(DAT_140c64ea0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1402193e0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c65100 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"ModelEvent"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64b40 != 0) {
                iVar2 = _DAT_140c64414;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_ModelEvent_140ace348;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\ModelEvent.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_ModelEvent_140ace348;
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
                plVar3[3] = (longlong) & PTR_u_ModelEvent_140ace348;
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
        DAT_140c65100 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64db0 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402195f0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140219612. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_ModelEvent_140a6b8d0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64db0 == 0) {
        iVar1 = FUN_1402193e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021963c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65100 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402196a0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402196c9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_ModelEvent_140a6b8d0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64db0 == 0) {
        iVar1 = FUN_1402193e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402196f7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65100 + 0x20))(DAT_140c65100, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140219820(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c641b0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"ModelEventVisualJoin"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c6410c != 0) {
                iVar2 = _DAT_140c64750;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_ModelEventVisualJoin_140ad97a8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\ModelEventVisualJoin.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_ModelEventVisualJoin_140ad97a8;
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
                plVar3[3] = (longlong) & PTR_u_ModelEventVisualJoin_140ad97a8;
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
        DAT_140c641b0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64b48 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140219a30(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140219a52. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_ModelEventVisualJoin_140a6b908, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64b48 == 0) {
        iVar1 = FUN_140219820();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140219a7c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c641b0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140219ae0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140219b09. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_ModelEventVisualJoin_140a6b908, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64b48 == 0) {
        iVar1 = FUN_140219820();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140219b37. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c641b0 + 0x20))(DAT_140c641b0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140219c60(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64788 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"ModelMesh"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c654d4 != 0) {
                iVar2 = _DAT_140c64c48;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_ModelMesh_140a634b0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\ModelMesh.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_ModelMesh_140a634b0;
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
                plVar3[3] = (longlong) & PTR_u_ModelMesh_140a634b0;
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
        DAT_140c64788 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64010 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140219e70(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140219e92. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_ModelMesh_140a6b940, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64010 == 0) {
        iVar1 = FUN_140219c60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140219ebc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64788 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140219f20(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140219f49. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_ModelMesh_140a6b940, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64010 == 0) {
        iVar1 = FUN_140219c60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140219f77. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64788 + 0x20))(DAT_140c64788, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14021a0a0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64860 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"ModelPose"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64668 != 0) {
                iVar2 = _DAT_140c63914;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_ModelPose_140a7f468;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\ModelPose.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_ModelPose_140a7f468;
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
                plVar3[3] = (longlong) & PTR_u_ModelPose_140a7f468;
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
        DAT_140c64860 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c640d4 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021a2b0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021a2d2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_ModelPose_140a6b978, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c640d4 == 0) {
        iVar1 = FUN_14021a0a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021a2fc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64860 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021a300(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021a329. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_ModelPose_140a6b978, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c640d4 == 0) {
        iVar1 = FUN_14021a0a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021a357. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64860 + 0x18))(DAT_140c64860, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021a360(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021a389. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_ModelPose_140a6b978, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c640d4 == 0) {
        iVar1 = FUN_14021a0a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021a3b7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64860 + 0x20))(DAT_140c64860, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14021a4e0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c652e8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"ModelSequence"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c6514c != 0) {
                iVar2 = _DAT_140c64f78;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_ModelSequence_140adfc88;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\ModelSequence.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_ModelSequence_140adfc88;
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
                plVar3[3] = (longlong) & PTR_u_ModelSequence_140adfc88;
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
        DAT_140c652e8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64964 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021a6f0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021a712. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_ModelSequence_140a6b9b0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64964 == 0) {
        iVar1 = FUN_14021a4e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021a73c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c652e8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021a740(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021a769. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_ModelSequence_140a6b9b0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64964 == 0) {
        iVar1 = FUN_14021a4e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021a797. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c652e8 + 0x18))(DAT_140c652e8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021a7a0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021a7c9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_ModelSequence_140a6b9b0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64964 == 0) {
        iVar1 = FUN_14021a4e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021a7f7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c652e8 + 0x20))(DAT_140c652e8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14021a920(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63cb0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"ModelSequenceByMode"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c649c0 != 0) {
                iVar2 = _DAT_140c645f0;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_ModelSequenceByMode_140a806d0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\ModelSequenceByMode.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_ModelSequenceByMode_140a806d0;
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
                plVar3[3] = (longlong) & PTR_u_ModelSequenceByMode_140a806d0;
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
        DAT_140c63cb0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c6556c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021ab30(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021ab52. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_ModelSequenceByMode_140a6b9e8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6556c == 0) {
        iVar1 = FUN_14021a920();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021ab7c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63cb0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021abe0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021ac09. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_ModelSequenceByMode_140a6b9e8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6556c == 0) {
        iVar1 = FUN_14021a920();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021ac37. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63cb0 + 0x20))(DAT_140c63cb0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14021ad60(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63ee8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"ModelSequenceBySeatPosture"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64b44 != 0) {
                iVar2 = _DAT_140c64b54;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_ModelSequenceBySeatPosture_140a70e38;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\ModelSequenceBySeatPosture.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_ModelSequenceBySeatPosture_140a70e38;
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
                plVar3[3] = (longlong) & PTR_u_ModelSequenceBySeatPosture_140a70e38;
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
        DAT_140c63ee8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c640b0 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021af70(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021af92. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_ModelSequenceBySeatPosture_140a6ba20, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c640b0 == 0) {
        iVar1 = FUN_14021ad60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021afbc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63ee8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021b020(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021b049. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_ModelSequenceBySeatPosture_140a6ba20, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c640b0 == 0) {
        iVar1 = FUN_14021ad60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021b077. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63ee8 + 0x20))(DAT_140c63ee8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14021b1a0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c653b0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"ModelSequenceByWeapon"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63c7c != 0) {
                iVar2 = _DAT_140c64970;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_ModelSequenceByWeapon_140a5f0c0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\ModelSequenceByWeapon.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_ModelSequenceByWeapon_140a5f0c0;
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
                plVar3[3] = (longlong) & PTR_u_ModelSequenceByWeapon_140a5f0c0;
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
        DAT_140c653b0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c648a0 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021b3b0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021b3d2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_ModelSequenceByWeapon_140a6ba58, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c648a0 == 0) {
        iVar1 = FUN_14021b1a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021b3fc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c653b0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021b460(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021b489. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_ModelSequenceByWeapon_140a6ba58, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c648a0 == 0) {
        iVar1 = FUN_14021b1a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021b4b7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c653b0 + 0x20))(DAT_140c653b0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14021b5e0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63d90 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"ModelSequenceTransition"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c647d4 != 0) {
                iVar2 = _DAT_140c63f54;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_ModelSequenceTransition_140a70c68;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\ModelSequenceTransition.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_ModelSequenceTransition_140a70c68;
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
                plVar3[3] = (longlong) & PTR_u_ModelSequenceTransition_140a70c68;
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
        DAT_140c63d90 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c653c8 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021b7f0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021b812. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_ModelSequenceTransition_140a6ba90, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c653c8 == 0) {
        iVar1 = FUN_14021b5e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021b83c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63d90 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021b8a0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021b8c9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_ModelSequenceTransition_140a6ba90, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c653c8 == 0) {
        iVar1 = FUN_14021b5e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021b8f7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63d90 + 0x20))(DAT_140c63d90, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14021ba20(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64748 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"ModelSkinFX"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64e98 != 0) {
                iVar2 = _DAT_140c64458;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_ModelSkinFX_140ad5eb8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\ModelSkinFX.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_ModelSkinFX_140ad5eb8;
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
                plVar3[3] = (longlong) & PTR_u_ModelSkinFX_140ad5eb8;
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
        DAT_140c64748 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c645c0 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021bc30(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021bc52. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_ModelSkinFX_140a6bac8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c645c0 == 0) {
        iVar1 = FUN_14021ba20();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021bc7c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64748 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021bce0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021bd09. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_ModelSkinFX_140a6bac8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c645c0 == 0) {
        iVar1 = FUN_14021ba20();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021bd37. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64748 + 0x20))(DAT_140c64748, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14021be60(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63ce8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"MTXCategory"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c65404 != 0) {
                iVar2 = _DAT_140c64994;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_MTXCategory_140acc588;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Redacted.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_MTXCategory_140acc588;
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
                plVar3[3] = (longlong) & PTR_u_MTXCategory_140acc588;
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
        DAT_140c63ce8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c65184 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021c070(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021c092. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_MTXCategory_140a6bb00, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65184 == 0) {
        iVar1 = FUN_14021be60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021c0bc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63ce8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021c120(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021c149. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_MTXCategory_140a6bb00, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65184 == 0) {
        iVar1 = FUN_14021be60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021c177. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63ce8 + 0x20))(DAT_140c63ce8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14021c2a0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c65138 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"RandomPlayerName"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63c04 != 0) {
                iVar2 = _DAT_140c649b8;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_RandomPlayerName_140a58550;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\RandomPlayerName.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_RandomPlayerName_140a58550;
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
                plVar3[3] = (longlong) & PTR_u_RandomPlayerName_140a58550;
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
        DAT_140c65138 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c65518 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021c4b0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021c4d2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_RandomPlayerName_140a6bb38, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65518 == 0) {
        iVar1 = FUN_14021c2a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021c4fc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65138 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021c560(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021c589. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_RandomPlayerName_140a6bb38, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65518 == 0) {
        iVar1 = FUN_14021c2a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021c5b7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65138 + 0x20))(DAT_140c65138, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14021c6e0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c65408 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"PathEpisode"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63f80 != 0) {
                iVar2 = _DAT_140c63f3c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathEpisode_140a72788;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PathEpisode.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathEpisode_140a72788;
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
                plVar3[3] = (longlong) & PTR_u_PathEpisode_140a72788;
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
        DAT_140c65408 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c6405c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021c8f0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021c912. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PathEpisode_140a6bb70, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6405c == 0) {
        iVar1 = FUN_14021c6e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021c93c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65408 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021c940(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021c969. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_PathEpisode_140a6bb70, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6405c == 0) {
        iVar1 = FUN_14021c6e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021c997. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65408 + 0x18))(DAT_140c65408, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021c9a0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021c9c9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PathEpisode_140a6bb70, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6405c == 0) {
        iVar1 = FUN_14021c6e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021c9f7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65408 + 0x20))(DAT_140c65408, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// int FUN_14021cb20(void)
int PathExplorerActivateHandler(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c65270 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"PathExplorerActivate"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64dac != 0) {
                iVar2 = _DAT_140c65490;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathExplorerActivate_140acde80;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PathExplorerActivate.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathExplorerActivate_140acde80;
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
                plVar3[3] = (longlong) & PTR_u_PathExplorerActivate_140acde80;
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
        DAT_140c65270 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c6408c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021cd30(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021cd52. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PathExplorerActivate_140a6bba8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6408c == 0) {
        iVar1 = PathExplorerActivateHandler();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021cd7c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65270 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021cd80(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021cda9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_PathExplorerActivate_140a6bba8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6408c == 0) {
        iVar1 = PathExplorerActivateHandler();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021cdd7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65270 + 0x18))(DAT_140c65270, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021cde0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021ce09. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PathExplorerActivate_140a6bba8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6408c == 0) {
        iVar1 = PathExplorerActivateHandler();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021ce37. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65270 + 0x20))(DAT_140c65270, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14021cf60(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64720 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"PathExplorerArea"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c65314 != 0) {
                iVar2 = _DAT_140c64754;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathExplorerArea_140ad37e8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PathExplorerArea.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathExplorerArea_140ad37e8;
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
                plVar3[3] = (longlong) & PTR_u_PathExplorerArea_140ad37e8;
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
        DAT_140c64720 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c65148 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021d170(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021d192. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PathExplorerArea_140a6bbe0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65148 == 0) {
        iVar1 = FUN_14021cf60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021d1bc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64720 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021d1c0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021d1e9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_PathExplorerArea_140a6bbe0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65148 == 0) {
        iVar1 = FUN_14021cf60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021d217. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64720 + 0x18))(DAT_140c64720, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021d220(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021d249. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PathExplorerArea_140a6bbe0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65148 == 0) {
        iVar1 = FUN_14021cf60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021d277. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64720 + 0x20))(DAT_140c64720, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14021d3a0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64f68 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"PathExplorerDoor"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64d38 != 0) {
                iVar2 = _DAT_140c63b3c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathExplorerDoor_140a63948;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PathExplorerDoor.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathExplorerDoor_140a63948;
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
                plVar3[3] = (longlong) & PTR_u_PathExplorerDoor_140a63948;
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
        DAT_140c64f68 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c6467c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021d5b0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021d5d2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PathExplorerDoor_140a6bc18, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6467c == 0) {
        iVar1 = FUN_14021d3a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021d5fc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64f68 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021d600(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021d629. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_PathExplorerDoor_140a6bc18, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6467c == 0) {
        iVar1 = FUN_14021d3a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021d657. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64f68 + 0x18))(DAT_140c64f68, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021d660(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021d689. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PathExplorerDoor_140a6bc18, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6467c == 0) {
        iVar1 = FUN_14021d3a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021d6b7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64f68 + 0x20))(DAT_140c64f68, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14021d7e0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63bf8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"PathExplorerDoorEntrance"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c6432c != 0) {
                iVar2 = _DAT_140c64674;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathExplorerDoorEntrance_140a65078;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PathExplorerDoorEntrance.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathExplorerDoorEntrance_140a65078;
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
                plVar3[3] = (longlong) & PTR_u_PathExplorerDoorEntrance_140a65078;
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
        DAT_140c63bf8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c653e4 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021d9f0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021da12. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PathExplorerDoorEntrance_140a6bc50, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c653e4 == 0) {
        iVar1 = FUN_14021d7e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021da3c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63bf8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021daa0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021dac9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PathExplorerDoorEntrance_140a6bc50, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c653e4 == 0) {
        iVar1 = FUN_14021d7e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021daf7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63bf8 + 0x20))(DAT_140c63bf8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14021dc20(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64bf8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"PathExplorerNode"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c65600 != 0) {
                iVar2 = _DAT_140c64154;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathExplorerNode_140ade3c0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PathExplorerNode.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathExplorerNode_140ade3c0;
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
                plVar3[3] = (longlong) & PTR_u_PathExplorerNode_140ade3c0;
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
        DAT_140c64bf8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63a20 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021de30(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021de52. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PathExplorerNode_140a6bc88, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63a20 == 0) {
        iVar1 = FUN_14021dc20();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021de7c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64bf8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021dee0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021df09. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PathExplorerNode_140a6bc88, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63a20 == 0) {
        iVar1 = FUN_14021dc20();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021df37. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64bf8 + 0x20))(DAT_140c64bf8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14021e060(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64cd8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"PathExplorerPowerMap"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64900 != 0) {
                iVar2 = _DAT_140c64c24;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathExplorerPowerMap_140ae1518;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PathExplorerPowerMap.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathExplorerPowerMap_140ae1518;
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
                plVar3[3] = (longlong) & PTR_u_PathExplorerPowerMap_140ae1518;
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
        DAT_140c64cd8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c65668 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021e270(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021e292. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PathExplorerPowerMap_140a6bcc0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65668 == 0) {
        iVar1 = FUN_14021e060();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021e2bc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64cd8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021e2c0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021e2e9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_PathExplorerPowerMap_140a6bcc0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65668 == 0) {
        iVar1 = FUN_14021e060();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021e317. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64cd8 + 0x18))(DAT_140c64cd8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021e320(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021e349. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PathExplorerPowerMap_140a6bcc0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65668 == 0) {
        iVar1 = FUN_14021e060();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021e377. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64cd8 + 0x20))(DAT_140c64cd8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14021e4a0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c649d0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"PathExplorerScavengerClue"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c647c0 != 0) {
                iVar2 = _DAT_140c64e6c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathExplorerScavengerClue_140a7e9f0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PathExplorerScavengerClue.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathExplorerScavengerClue_140a7e9f0;
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
                plVar3[3] = (longlong) & PTR_u_PathExplorerScavengerClue_140a7e9f0;
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
        DAT_140c649d0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64318 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021e6b0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021e6d2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PathExplorerScavengerClue_140a6bcf8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64318 == 0) {
        iVar1 = FUN_14021e4a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021e6fc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c649d0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021e700(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021e729. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_PathExplorerScavengerClue_140a6bcf8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64318 == 0) {
        iVar1 = FUN_14021e4a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021e757. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c649d0 + 0x18))(DAT_140c649d0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021e760(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021e789. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PathExplorerScavengerClue_140a6bcf8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64318 == 0) {
        iVar1 = FUN_14021e4a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021e7b7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c649d0 + 0x20))(DAT_140c649d0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14021e8e0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64418 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"PathExplorerScavengerHunt"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63a34 != 0) {
                iVar2 = _DAT_140c642e4;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathExplorerScavengerHunt_140acd6c8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PathExplorerScavengerHunt.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathExplorerScavengerHunt_140acd6c8;
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
                plVar3[3] = (longlong) & PTR_u_PathExplorerScavengerHunt_140acd6c8;
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
        DAT_140c64418 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63f78 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021eaf0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021eb12. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PathExplorerScavengerHunt_140a6bd30, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63f78 == 0) {
        iVar1 = FUN_14021e8e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021eb3c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64418 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021eb40(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021eb69. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_PathExplorerScavengerHunt_140a6bd30, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63f78 == 0) {
        iVar1 = FUN_14021e8e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021eb97. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64418 + 0x18))(DAT_140c64418, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021eba0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021ebc9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PathExplorerScavengerHunt_140a6bd30, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63f78 == 0) {
        iVar1 = FUN_14021e8e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021ebf7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64418 + 0x20))(DAT_140c64418, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14021ed20(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c65628 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"PathLevel"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c647e8 != 0) {
                iVar2 = _DAT_140c63c70;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathLevel_140a6fe70;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PathLevel.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathLevel_140a6fe70;
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
                plVar3[3] = (longlong) & PTR_u_PathLevel_140a6fe70;
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
        DAT_140c65628 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c638b8 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021ef30(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021ef52. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PathLevel_140a6bd68, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c638b8 == 0) {
        iVar1 = FUN_14021ed20();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021ef7c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65628 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021ef80(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021efa9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_PathLevel_140a6bd68, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c638b8 == 0) {
        iVar1 = FUN_14021ed20();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021efd7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65628 + 0x18))(DAT_140c65628, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021efe0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021f009. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PathLevel_140a6bd68, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c638b8 == 0) {
        iVar1 = FUN_14021ed20();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021f037. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65628 + 0x20))(DAT_140c65628, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14021f160(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64e80 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"PathMission"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64424 != 0) {
                iVar2 = _DAT_140c64180;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathMission_140ad1d18;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PathMission.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathMission_140ad1d18;
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
                plVar3[3] = (longlong) & PTR_u_PathMission_140ad1d18;
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
        DAT_140c64e80 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64ec8 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021f370(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021f392. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PathMission_140a6bda0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64ec8 == 0) {
        iVar1 = FUN_14021f160();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021f3bc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64e80 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021f3c0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021f3e9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_PathMission_140a6bda0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64ec8 == 0) {
        iVar1 = FUN_14021f160();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021f417. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64e80 + 0x18))(DAT_140c64e80, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021f420(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021f449. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PathMission_140a6bda0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64ec8 == 0) {
        iVar1 = FUN_14021f160();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021f477. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64e80 + 0x20))(DAT_140c64e80, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14021f5a0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64a70 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"PathReward"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c653ac != 0) {
                iVar2 = _DAT_140c63e58;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathReward_140a62890;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PathReward.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathReward_140a62890;
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
                plVar3[3] = (longlong) & PTR_u_PathReward_140a62890;
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
        DAT_140c64a70 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64b5c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021f7b0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021f7d2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PathReward_140a6bdd8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64b5c == 0) {
        iVar1 = FUN_14021f5a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021f7fc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64a70 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021f860(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021f889. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PathReward_140a6bdd8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64b5c == 0) {
        iVar1 = FUN_14021f5a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021f8b7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64a70 + 0x20))(DAT_140c64a70, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// int FUN_14021f9e0(void)
int PathScientistCreatureInfoHandler(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c65380 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"PathScientistCreatureInfo"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c644f0 != 0) {
                iVar2 = _DAT_140c65194;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathScientistCreatureInfo_140a50a70;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PathScientistCreatureInfo.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathScientistCreatureInfo_140a50a70;
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
                plVar3[3] = (longlong) & PTR_u_PathScientistCreatureInfo_140a50a70;
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
        DAT_140c65380 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63d70 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021fbf0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021fc12. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PathScientistCreatureInfo_140a6be10, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63d70 == 0) {
        iVar1 = PathScientistCreatureInfoHandler();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021fc3c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65380 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021fc40(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021fc69. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_PathScientistCreatureInfo_140a6be10, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63d70 == 0) {
        iVar1 = PathScientistCreatureInfoHandler();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021fc97. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65380 + 0x18))(DAT_140c65380, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14021fca0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014021fcc9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PathScientistCreatureInfo_140a6be10, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63d70 == 0) {
        iVar1 = PathScientistCreatureInfoHandler();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014021fcf7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65380 + 0x20))(DAT_140c65380, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14021fe20(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64b60 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"PathScientistDatacubeDiscovery"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63c20 != 0) {
                iVar2 = _DAT_140c653dc;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathScientistDatacubeDiscovery_140ad43f8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PathScientistDatacubeDiscovery.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathScientistDatacubeDiscovery_140ad43f8;
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
                plVar3[3] = (longlong) & PTR_u_PathScientistDatacubeDiscovery_140ad43f8;
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
        DAT_140c64b60 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63f88 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140220030(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140220052. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PathScientistDatacubeDiscovery_140a6be48, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63f88 == 0) {
        iVar1 = FUN_14021fe20();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022007c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64b60 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140220080(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402200a9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_PathScientistDatacubeDiscovery_140a6be48, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63f88 == 0) {
        iVar1 = FUN_14021fe20();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402200d7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64b60 + 0x18))(DAT_140c64b60, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402200e0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140220109. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PathScientistDatacubeDiscovery_140a6be48, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63f88 == 0) {
        iVar1 = FUN_14021fe20();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140220137. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64b60 + 0x20))(DAT_140c64b60, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140220260(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63d80 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"PathScientistExperimentation"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c639cc != 0) {
                iVar2 = _DAT_140c638d0;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathScientistExperimentation_140ad9bf8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PathScientistExperimentation.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathScientistExperimentation_140ad9bf8;
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
                plVar3[3] = (longlong) & PTR_u_PathScientistExperimentation_140ad9bf8;
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
        DAT_140c63d80 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c65038 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140220470(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140220492. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PathScientistExperimentation_140a6be80, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65038 == 0) {
        iVar1 = FUN_140220260();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402204bc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63d80 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140220520(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140220549. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PathScientistExperimentation_140a6be80, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65038 == 0) {
        iVar1 = FUN_140220260();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140220577. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63d80 + 0x20))(DAT_140c63d80, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1402206a0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c65520 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"PathScientistExperimentationPattern"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64e1c != 0) {
                iVar2 = _DAT_140c63d78;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathScientistExperimentationPatt_140add1c0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PathScientistExperimentationPattern.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathScientistExperimentationPatt_140add1c0;
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
                plVar3[3] = (longlong) & PTR_u_PathScientistExperimentationPatt_140add1c0;
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
        DAT_140c65520 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c6453c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402208b0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402208d2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PathScientistExperimentationPatt_140a6beb8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6453c == 0) {
        iVar1 = FUN_1402206a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402208fc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65520 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140220960(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140220989. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PathScientistExperimentationPatt_140a6beb8, param_1, DAT_140c63858
        );
        return uVar2;
    }
    if (_DAT_140c6453c == 0) {
        iVar1 = FUN_1402206a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402209b7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65520 + 0x20))(DAT_140c65520, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140220ae0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64f58 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"PathScientistFieldStudy"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64ff0 != 0) {
                iVar2 = _DAT_140c63ea8;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathScientistFieldStudy_140ad67a8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PathScientistFieldStudy.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathScientistFieldStudy_140ad67a8;
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
                plVar3[3] = (longlong) & PTR_u_PathScientistFieldStudy_140ad67a8;
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
        DAT_140c64f58 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64b00 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140220cf0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140220d12. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PathScientistFieldStudy_140a6bef0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64b00 == 0) {
        iVar1 = FUN_140220ae0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140220d3c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64f58 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140220d40(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140220d69. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_PathScientistFieldStudy_140a6bef0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64b00 == 0) {
        iVar1 = FUN_140220ae0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140220d97. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64f58 + 0x18))(DAT_140c64f58, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140220da0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140220dc9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PathScientistFieldStudy_140a6bef0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64b00 == 0) {
        iVar1 = FUN_140220ae0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140220df7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64f58 + 0x20))(DAT_140c64f58, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140220f20(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64a20 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"PathScientistSpecimenSurvey"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c647cc != 0) {
                iVar2 = _DAT_140c6541c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathScientistSpecimenSurvey_140a7a580;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PathScientistSpecimenSurvey.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathScientistSpecimenSurvey_140a7a580;
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
                plVar3[3] = (longlong) & PTR_u_PathScientistSpecimenSurvey_140a7a580;
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
        DAT_140c64a20 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64800 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140221130(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140221152. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PathScientistSpecimenSurvey_140a6bf28, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64800 == 0) {
        iVar1 = FUN_140220f20();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022117c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64a20 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140221180(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402211a9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_PathScientistSpecimenSurvey_140a6bf28, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64800 == 0) {
        iVar1 = FUN_140220f20();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402211d7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64a20 + 0x18))(DAT_140c64a20, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402211e0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140221209. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PathScientistSpecimenSurvey_140a6bf28, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64800 == 0) {
        iVar1 = FUN_140220f20();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140221237. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64a20 + 0x20))(DAT_140c64a20, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140221360(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c640a0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"PathScientistScanBotProfile"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64cfc != 0) {
                iVar2 = _DAT_140c64ae4;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathScientistScanBotProfile_140ada758;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PathScientistScanBotProfile.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathScientistScanBotProfile_140ada758;
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
                plVar3[3] = (longlong) & PTR_u_PathScientistScanBotProfile_140ada758;
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
        DAT_140c640a0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63c24 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140221570(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140221592. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PathScientistScanBotProfile_140a6bf60, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63c24 == 0) {
        iVar1 = FUN_140221360();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402215bc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c640a0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402215c0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402215e9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_PathScientistScanBotProfile_140a6bf60, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63c24 == 0) {
        iVar1 = FUN_140221360();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140221617. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c640a0 + 0x18))(DAT_140c640a0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140221620(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140221649. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PathScientistScanBotProfile_140a6bf60, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63c24 == 0) {
        iVar1 = FUN_140221360();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140221677. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c640a0 + 0x20))(DAT_140c640a0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// int FUN_1402217a0(void)
int PathSettlerImprovementGroup(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64660 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"PathSettlerImprovementGroup"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c650cc != 0) {
                iVar2 = _DAT_140c6446c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathSettlerImprovementGroup_140a7e438;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PathSettlerImprovementGroup.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathSettlerImprovementGroup_140a7e438;
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
                plVar3[3] = (longlong) & PTR_u_PathSettlerImprovementGroup_140a7e438;
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
        DAT_140c64660 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c650b0 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402219b0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402219d2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PathSettlerImprovementGroup_140a6bf98, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c650b0 == 0) {
        iVar1 = PathSettlerImprovementGroup();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402219fc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64660 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140221a60(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140221a89. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PathSettlerImprovementGroup_140a6bf98, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c650b0 == 0) {
        iVar1 = PathSettlerImprovementGroup();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140221ab7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64660 + 0x20))(DAT_140c64660, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// int FUN_140221be0(void)
int PathSettlerInfrastructureHandler(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64300 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"PathSettlerInfrastructure"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64620 != 0) {
                iVar2 = _DAT_140c652c4;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathSettlerInfrastructure_140a78db0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PathSettlerInfrastructure.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathSettlerInfrastructure_140a78db0;
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
                plVar3[3] = (longlong) & PTR_u_PathSettlerInfrastructure_140a78db0;
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
        DAT_140c64300 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64500 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140221df0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140221e12. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PathSettlerInfrastructure_140a6bfd0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64500 == 0) {
        iVar1 = PathSettlerInfrastructureHandler();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140221e3c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64300 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140221e40(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140221e69. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_PathSettlerInfrastructure_140a6bfd0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64500 == 0) {
        iVar1 = PathSettlerInfrastructureHandler();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140221e97. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64300 + 0x18))(DAT_140c64300, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140221ea0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140221ec9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PathSettlerInfrastructure_140a6bfd0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64500 == 0) {
        iVar1 = PathSettlerInfrastructureHandler();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140221ef7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64300 + 0x20))(DAT_140c64300, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140222020(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c650b8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"PathSettlerHub"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64524 != 0) {
                iVar2 = _DAT_140c64340;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathSettlerHub_140ad2050;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PathSettlerHub.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathSettlerHub_140ad2050;
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
                plVar3[3] = (longlong) & PTR_u_PathSettlerHub_140ad2050;
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
        DAT_140c650b8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64874 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140222230(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140222252. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PathSettlerHub_140a6c008, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64874 == 0) {
        iVar1 = FUN_140222020();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022227c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c650b8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402222e0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140222309. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PathSettlerHub_140a6c008, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64874 == 0) {
        iVar1 = FUN_140222020();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140222337. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c650b8 + 0x20))(DAT_140c650b8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140222460(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64028 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"PathSettlerImprovement"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c649ec != 0) {
                iVar2 = _DAT_140c640d0;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathSettlerImprovement_140acc478;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PathSettlerImprovement.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathSettlerImprovement_140acc478;
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
                plVar3[3] = (longlong) & PTR_u_PathSettlerImprovement_140acc478;
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
        DAT_140c64028 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63e60 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140222670(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140222692. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PathSettlerImprovement_140a6c040, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63e60 == 0) {
        iVar1 = FUN_140222460();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402226bc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64028 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140222720(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140222749. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PathSettlerImprovement_140a6c040, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63e60 == 0) {
        iVar1 = FUN_140222460();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140222777. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64028 + 0x20))(DAT_140c64028, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1402228a0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c641d0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"PathSettlerMayor"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c65338 != 0) {
                iVar2 = _DAT_140c654b4;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathSettlerMayor_140ae2698;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PathSettlerMayor.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathSettlerMayor_140ae2698;
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
                plVar3[3] = (longlong) & PTR_u_PathSettlerMayor_140ae2698;
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
        DAT_140c641d0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c645e4 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140222ab0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140222ad2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PathSettlerMayor_140a6c078, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c645e4 == 0) {
        iVar1 = FUN_1402228a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140222afc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c641d0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140222b00(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140222b29. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_PathSettlerMayor_140a6c078, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c645e4 == 0) {
        iVar1 = FUN_1402228a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140222b57. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c641d0 + 0x18))(DAT_140c641d0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140222b60(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140222b89. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PathSettlerMayor_140a6c078, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c645e4 == 0) {
        iVar1 = FUN_1402228a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140222bb7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c641d0 + 0x20))(DAT_140c641d0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140222ce0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64008 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"PathSettlerSheriff"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64158 != 0) {
                iVar2 = _DAT_140c6445c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathSettlerSheriff_140a75da0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PathSettlerSheriff.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathSettlerSheriff_140a75da0;
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
                plVar3[3] = (longlong) & PTR_u_PathSettlerSheriff_140a75da0;
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
        DAT_140c64008 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c642d4 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140222ef0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140222f12. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PathSettlerSheriff_140a6c0b0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c642d4 == 0) {
        iVar1 = FUN_140222ce0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140222f3c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64008 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140222f40(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140222f69. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_PathSettlerSheriff_140a6c0b0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c642d4 == 0) {
        iVar1 = FUN_140222ce0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140222f97. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64008 + 0x18))(DAT_140c64008, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140222fa0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140222fc9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PathSettlerSheriff_140a6c0b0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c642d4 == 0) {
        iVar1 = FUN_140222ce0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140222ff7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64008 + 0x20))(DAT_140c64008, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140223120(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c65210 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"PathSoldierActivate"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64ae8 != 0) {
                iVar2 = _DAT_140c6444c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathSoldierActivate_140ad0828;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PathSoldierActivate.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathSoldierActivate_140ad0828;
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
                plVar3[3] = (longlong) & PTR_u_PathSoldierActivate_140ad0828;
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
        DAT_140c65210 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c65530 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140223330(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140223352. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PathSoldierActivate_140a6c0e8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65530 == 0) {
        iVar1 = FUN_140223120();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022337c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65210 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140223380(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402233a9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_PathSoldierActivate_140a6c0e8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65530 == 0) {
        iVar1 = FUN_140223120();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402233d7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65210 + 0x18))(DAT_140c65210, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402233e0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140223409. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PathSoldierActivate_140a6c0e8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65530 == 0) {
        iVar1 = FUN_140223120();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140223437. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65210 + 0x20))(DAT_140c65210, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140223560(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64658 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"PathSoldierAssassinate"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c638b4 != 0) {
                iVar2 = _DAT_140c6517c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathSoldierAssassinate_140ad03a8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PathSoldierAssassinate.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathSoldierAssassinate_140ad03a8;
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
                plVar3[3] = (longlong) & PTR_u_PathSoldierAssassinate_140ad03a8;
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
        DAT_140c64658 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c638e0 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140223770(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140223792. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PathSoldierAssassinate_140a6c120, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c638e0 == 0) {
        iVar1 = FUN_140223560();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402237bc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64658 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402237c0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402237e9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_PathSoldierAssassinate_140a6c120, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c638e0 == 0) {
        iVar1 = FUN_140223560();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140223817. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64658 + 0x18))(DAT_140c64658, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140223820(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140223849. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PathSoldierAssassinate_140a6c120, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c638e0 == 0) {
        iVar1 = FUN_140223560();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140223877. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64658 + 0x20))(DAT_140c64658, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1402239a0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c652d8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"PathSoldierEvent"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64670 != 0) {
                iVar2 = _DAT_140c640f0;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathSoldierEvent_140a51ae8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PathSoldierEvent.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathSoldierEvent_140a51ae8;
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
                plVar3[3] = (longlong) & PTR_u_PathSoldierEvent_140a51ae8;
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
        DAT_140c652d8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63a10 = 0;
    return 0;
}
